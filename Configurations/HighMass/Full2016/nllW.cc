#include "LatinoAnalysis/MultiDraw/interface/TTreeFunction.h"
#include "LatinoAnalysis/MultiDraw/interface/FunctionLibrary.h"

#include "TGraph.h"
#include "TVector2.h"
#include "TSystem.h"

#include <string>
#include <unordered_map>
#include <iostream>
#include <stdexcept>
#include <tuple>

class WWNLLW : public multidraw::TTreeFunction {
public:
  WWNLLW(char const* type);
  WWNLLW(unsigned type);

  char const* getName() const override { return "WWNLLW"; }
  TTreeFunction* clone() const override { return new WWNLLW(returnType_); }

  unsigned getNdata() override { return 1; }
  double evaluate(unsigned) override;

protected:
  enum ReturnType {
                   kCentral,
                   kRUp,
                   kRDown,
                   kSUp,
                   kSDown,
                   nReturnTypes
  };
  
 
  void bindTree_(multidraw::FunctionLibrary&) override;

  unsigned returnType_{nReturnTypes};
  UIntValueReader* run{};
  UIntValueReader* luminosityBlock{};
  ULong64ValueReader* event{};

  static std::tuple<UInt_t, UInt_t, ULong64_t> currentEvent;
  static UIntValueReader* nGenPart;
  static IntArrayReader* GenPart_pdgId;
  static IntArrayReader* GenPart_statusFlags;
  static FloatArrayReader* GenPart_pt;
  static FloatArrayReader* GenPart_phi;

  static std::array<std::unique_ptr<TGraph>, nReturnTypes> weightSources;
  static std::array<double, nReturnTypes> returnValues;

  static void setValues(UInt_t, UInt_t, ULong64_t);
};

std::tuple<UInt_t, UInt_t, ULong64_t> WWNLLW::currentEvent{};
UIntValueReader* WWNLLW::nGenPart{};
IntArrayReader* WWNLLW::GenPart_pdgId{};
IntArrayReader* WWNLLW::GenPart_statusFlags{};
FloatArrayReader* WWNLLW::GenPart_pt{};
FloatArrayReader* WWNLLW::GenPart_phi{};

std::array<std::unique_ptr<TGraph>, WWNLLW::nReturnTypes> WWNLLW::weightSources{};
std::array<double, WWNLLW::nReturnTypes> WWNLLW::returnValues{};

WWNLLW::WWNLLW(char const* _type) :
  TTreeFunction()
{
  std::string type(_type);
  if (type == "central")
    returnType_ = kCentral;
  else if (type == "rup")
    returnType_ = kRUp;
  else if (type == "rdown")
    returnType_ = kRDown;
  else if (type == "sup")
    returnType_ = kSUp;
  else if (type == "sdown")
    returnType_ = kSDown;
  else
    throw std::runtime_error("unknown return type " + type);
  
  if (!weightSources[0]) {
    std::string cmsswbase(gSystem->Getenv("CMSSW_BASE"));
    
    weightSources[0].reset(new TGraph((cmsswbase + "/src/LatinoAnalysis/Gardener/python/data/wwresum/central.dat").c_str()));
    weightSources[1].reset(new TGraph((cmsswbase + "/src/LatinoAnalysis/Gardener/python/data/wwresum/resum_up.dat").c_str()));
    weightSources[2].reset(new TGraph((cmsswbase + "/src/LatinoAnalysis/Gardener/python/data/wwresum/resum_down.dat").c_str()));
    weightSources[3].reset(new TGraph((cmsswbase + "/src/LatinoAnalysis/Gardener/python/data/wwresum/scale_up.dat").c_str()));
    weightSources[4].reset(new TGraph((cmsswbase + "/src/LatinoAnalysis/Gardener/python/data/wwresum/scale_down.dat").c_str()));
  }
}

WWNLLW::WWNLLW(unsigned _type) :
  TTreeFunction(),
  returnType_(_type)
{
  if (!weightSources[0]) {
    std::string cmsswbase(gSystem->Getenv("CMSSW_BASE"));
    
    weightSources[0].reset(new TGraph((cmsswbase + "/src/LatinoAnalysis/Gardener/python/data/wwresum/central.dat").c_str()));
    weightSources[1].reset(new TGraph((cmsswbase + "/src/LatinoAnalysis/Gardener/python/data/wwresum/resum_up.dat").c_str()));
    weightSources[2].reset(new TGraph((cmsswbase + "/src/LatinoAnalysis/Gardener/python/data/wwresum/resum_down.dat").c_str()));
    weightSources[3].reset(new TGraph((cmsswbase + "/src/LatinoAnalysis/Gardener/python/data/wwresum/scale_up.dat").c_str()));
    weightSources[4].reset(new TGraph((cmsswbase + "/src/LatinoAnalysis/Gardener/python/data/wwresum/scale_down.dat").c_str()));
  }
}

double
WWNLLW::evaluate(unsigned)
{
  setValues(*run->Get(), *luminosityBlock->Get(), *event->Get());
  return returnValues[returnType_];
}

void
WWNLLW::bindTree_(multidraw::FunctionLibrary& _library)
{
  _library.bindBranch(run, "run");
  _library.bindBranch(luminosityBlock, "luminosityBlock");
  _library.bindBranch(event, "event");
  
  if (nGenPart == nullptr) {
    _library.bindBranch(nGenPart, "nGenPart");
    _library.bindBranch(GenPart_pdgId, "GenPart_pdgId");
    _library.bindBranch(GenPart_statusFlags, "GenPart_statusFlags");
    _library.bindBranch(GenPart_pt, "GenPart_pt");
    _library.bindBranch(GenPart_phi, "GenPart_phi");

    currentEvent = std::make_tuple(0, 0, 0);

    _library.addDestructorCallback([]() {
                                     nGenPart = nullptr;
                                     GenPart_pdgId = nullptr;
                                     GenPart_statusFlags = nullptr;
                                     GenPart_pt = nullptr;
                                     GenPart_phi = nullptr;
                                   });
  }
}

/*static*/
void
WWNLLW::setValues(UInt_t _run, UInt_t _luminosityBlock, ULong64_t _event)
{
  if (std::get<0>(currentEvent) == _run && \
      std::get<1>(currentEvent) == _luminosityBlock && \
      std::get<2>(currentEvent) == _event)
    return;

  currentEvent = std::make_tuple(_run, _luminosityBlock, _event);

  TVector2 vptWW;
  unsigned nW(0);
  
  unsigned nG(*nGenPart->Get());
  for (unsigned iG(0); iG != nG; ++iG) {
    if ((GenPart_statusFlags->At(iG) & (1 << 13)) == 0)
      continue;
    unsigned absId(std::abs(GenPart_pdgId->At(iG)));
    if (absId != 24)
      continue;

    TVector2 v;
    v.SetMagPhi(GenPart_pt->At(iG), GenPart_phi->At(iG));
    vptWW += v;
    ++nW;
  }

  if (nW == 2) {
    double ptWW(vptWW.Mod());

    if (ptWW < 500.) {
      returnValues[kCentral] = weightSources[kCentral]->Eval(ptWW);
      if (ptWW < 50.) {
        returnValues[kRUp] = weightSources[kRUp]->Eval(ptWW) * returnValues[kCentral];
        returnValues[kRDown] = weightSources[kRDown]->Eval(ptWW) * returnValues[kCentral];
      }
      else {
        returnValues[kRUp] = returnValues[kCentral];
        returnValues[kRDown] = returnValues[kCentral];
      }
      returnValues[kSUp] = weightSources[kSUp]->Eval(ptWW) * returnValues[kCentral];
      returnValues[kSDown] = weightSources[kSDown]->Eval(ptWW) * returnValues[kCentral];

      return;
    }
  }

  returnValues.fill(1.);
}

