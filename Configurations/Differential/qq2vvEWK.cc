#include "LatinoAnalysis/MultiDraw/interface/TTreeFunction.h"
#include "LatinoAnalysis/MultiDraw/interface/FunctionLibrary.h"
#include "LatinoAnalysis/Gardener/python/variables/qq2vvEWKcorrectionsWeight.C"

#include "TGraph.h"
#include "TVector2.h"
#include "TSystem.h"

#include <string>
#include <unordered_map>
#include <iostream>
#include <stdexcept>
#include <tuple>

class WWEWKW : public multidraw::TTreeFunction {
public:
  WWEWKW(char const* type);
  WWEWKW(unsigned type);

  char const* getName() const override { return "WWEWKW"; }
  TTreeFunction* clone() const override { return new WWEWKW(returnType_); }

  unsigned getNdata() override { return 1; }
  double evaluate(unsigned) override;

protected:
  enum ReturnType {
                   kCentral,
                   kUp,
                   kDown,
                   nReturnTypes
  };
  
 
  void bindTree_(multidraw::FunctionLibrary&) override;

  unsigned returnType_{nReturnTypes};
  UIntValueReader* run{};
  UIntValueReader* luminosityBlock{};
  ULong64ValueReader* event{};

  //LHEPart_eta      Float_t Pseodorapidity of LHE particles
  //LHEPart_mass     Float_t Mass of LHE particles
  //LHEPart_pdgId    Int_t   PDG ID of LHE particles
  //LHEPart_phi      Float_t Phi of LHE particles
  //LHEPart_pt       Float_t Pt of LHE particles
  // nLHEPart UInt_t  


  static qq2vvEWKcorrections* weightSource;
  static std::tuple<UInt_t, UInt_t, ULong64_t> currentEvent;
  static UIntValueReader* nLHEPart;
  static IntArrayReader* LHEPart_pdgId;
  static FloatArrayReader* LHEPart_pt;
  static FloatArrayReader* LHEPart_phi;
  static FloatArrayReader* LHEPart_eta;
  static FloatValueReader* Generator_x1;
  static FloatValueReader* Generator_x2;
  static IntValueReader* Generator_id1;
  static IntValueReader* Generator_id2;

  static void setValues(UInt_t, UInt_t, ULong64_t);
  static std::array<double, nReturnTypes> returnValues;

};
std::tuple<UInt_t, UInt_t, ULong64_t> WWEWKW::currentEvent{};
UIntValueReader* WWEWKW::nLHEPart{};
IntArrayReader* WWEWKW::LHEPart_pdgId{};
FloatArrayReader* WWEWKW::LHEPart_pt{};
FloatArrayReader* WWEWKW::LHEPart_phi{};
FloatArrayReader* WWEWKW::LHEPart_eta{};
FloatValueReader* WWEWKW::Generator_x1{};
FloatValueReader* WWEWKW::Generator_x2{};
IntValueReader* WWEWKW::Generator_id1{};
IntValueReader* WWEWKW::Generator_id2{};
qq2vvEWKcorrections* WWEWKW::weightSource{};

std::array<double, WWEWKW::nReturnTypes> WWEWKW::returnValues{};

WWEWKW::WWEWKW(char const* _type) :
  TTreeFunction()
{
  std::string type(_type);
  if (type == "central")
    returnType_ = kCentral;
  else if (type == "up")
    returnType_ = kUp;
  else if (type == "down")
    returnType_ = kDown;
  else
    throw std::runtime_error("unknown return type " + type);
  
  std::string cmsswbase(gSystem->Getenv("CMSSW_BASE"));
  weightSource = new qq2vvEWKcorrections(cmsswbase + "/src/LatinoAnalysis/Gardener/python/data/ewk/out_qqbww_EW_L8_200_forCMS.dat");  
}

WWEWKW::WWEWKW(unsigned _type) :
  TTreeFunction(),
  returnType_(_type)
{
  std::string cmsswbase(gSystem->Getenv("CMSSW_BASE"));
    
  weightSource = new qq2vvEWKcorrections(cmsswbase + "/src/LatinoAnalysis/Gardener/python/data/ewk/out_qqbww_EW_L8_200_forCMS.dat");  
}

double
WWEWKW::evaluate(unsigned)
{
  setValues(*run->Get(), *luminosityBlock->Get(), *event->Get());
  return returnValues[returnType_];
}

void
WWEWKW::bindTree_(multidraw::FunctionLibrary& _library)
{
  _library.bindBranch(run, "run");
  _library.bindBranch(luminosityBlock, "luminosityBlock");
  _library.bindBranch(event, "event");
  
  if (nLHEPart == nullptr) {
    _library.bindBranch(nLHEPart, "nLHEPart");
    _library.bindBranch(LHEPart_pdgId, "LHEPart_pdgId");
    _library.bindBranch(LHEPart_pt, "LHEPart_pt");
    _library.bindBranch(LHEPart_phi, "LHEPart_phi");
    _library.bindBranch(LHEPart_eta, "LHEPart_eta");
    _library.bindBranch(Generator_x1, "Generator_x1");
    _library.bindBranch(Generator_x2, "Generator_x2");
    _library.bindBranch(Generator_id1, "Generator_id1");
    _library.bindBranch(Generator_id2, "Generator_id2");


    currentEvent = std::make_tuple(0, 0, 0);

    _library.addDestructorCallback([]() {
                                     nLHEPart = nullptr;
                                     LHEPart_pdgId = nullptr;
                                     LHEPart_pt = nullptr;
                                     LHEPart_phi = nullptr;
                                     LHEPart_eta = nullptr;
                                     Generator_x1 = nullptr;
                                     Generator_x2 = nullptr;
                                     Generator_id1 = nullptr;
                                     Generator_id2 = nullptr;
                                   });
  }
}

/*static*/
void
WWEWKW::setValues(UInt_t _run, UInt_t _luminosityBlock, ULong64_t _event)
{
  if (std::get<0>(currentEvent) == _run && \
      std::get<1>(currentEvent) == _luminosityBlock && \
      std::get<2>(currentEvent) == _event)
    return;

  currentEvent = std::make_tuple(_run, _luminosityBlock, _event);

  float ptl1 = -1;
  float etal1 = -1;
  float phil1 = -1;
  float idl1 = -1;
  
  float ptl2 = -1;
  float etal2 = -1;
  float phil2 = -1;
  float idl2 = -1;
  
  float ptv1 = -1;
  float etav1 = -1;
  float phiv1 = -1;
  float idv1 = -1;

  float ptv2 = -1;
  float etav2 = -1;
  float phiv2 = -1;
  float idv2 = -1;



  unsigned nG(*nLHEPart->Get());
  for (unsigned iG(0); iG != nG; ++iG) {
    unsigned absId(std::abs(LHEPart_pdgId->At(iG)));
    if (absId==11 || absId==13 || absId==15){
      if (ptl1 == -1) {
        ptl1   = LHEPart_pt->At(iG);
        etal1  = LHEPart_eta->At(iG);
        phil1  = LHEPart_phi->At(iG);
        idl1   = LHEPart_pdgId->At(iG);
      } else if (ptl2 == -1) {
        ptl2   = LHEPart_pt->At(iG);
        etal2  = LHEPart_eta->At(iG);
        phil2  = LHEPart_phi->At(iG);
        idl2   = LHEPart_pdgId->At(iG);
      }
    }
    else if (absId==12 || absId==14 || absId==16){
      if (ptv1 == -1) {
        ptv1   = LHEPart_pt->At(iG);
        etav1  = LHEPart_eta->At(iG);
        phiv1  = LHEPart_phi->At(iG);
        idv1   = LHEPart_pdgId->At(iG);
      } else if (ptv2 == -1) {
        ptv2   = LHEPart_pt->At(iG);
        etav2  = LHEPart_eta->At(iG);
        phiv2  = LHEPart_phi->At(iG);
        idv2   = LHEPart_pdgId->At(iG);
      }
    }
  }
  float x1(*Generator_x1->Get()); 
  float x2(*Generator_x2->Get()); 
  float id1(*Generator_id1->Get()); 
  float id2(*Generator_id2->Get()); 

  if (ptl1 != -1 && ptl2 != -1 && ptv1 != -1 && ptv2 != -1){
    returnValues[kCentral] = weightSource->getqq2WWEWKCorr(ptl1, etal1, phil1, idl1, ptl2, etal2, phil2, idl2, ptv1, etav1, phiv1, ptv2, etav2, phiv2, x1, x2, id1, id2);
    //std::cout << returnValues[kCentral] << std::endl;
    returnValues[kUp] = returnValues[kCentral];
    returnValues[kDown] = returnValues[kCentral];
    return;
  }  
  returnValues.fill(1.);

}
