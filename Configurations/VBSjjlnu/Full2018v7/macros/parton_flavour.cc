#include "LatinoAnalysis/MultiDraw/interface/TTreeFunction.h"
#include "LatinoAnalysis/MultiDraw/interface/FunctionLibrary.h"

#include "TMath.h"
#include "TGraph.h"
#include "TVector2.h"
#include "TSystem.h"
#include "TLorentzVector.h"

#include <cmath>
#include <string>
#include <unordered_map>
#include <iostream>
#include <stdexcept>
#include <tuple>

class PartonFlavour : public multidraw::TTreeFunction {
public:
  PartonFlavour(char const* type);
  PartonFlavour(unsigned type);

  char const* getName() const override { return "PartonFlavour"; }
  TTreeFunction* clone() const override { return new PartonFlavour(returnVar_); }

  unsigned getNdata() override { return 1; }
  double evaluate(unsigned) override;

protected:
  enum ReturnType {
      vbs_0_partfl_res, vbs_1_partfl_res, vjet_0_partfl_res, vjet_1_partfl_res, 
      vbs_0_partfl_boost, vbs_1_partfl_boost,
      nVarTypes
  };
  
 
  void bindTree_(multidraw::FunctionLibrary&) override;

  unsigned returnVar_{nVarTypes};
 
  UIntValueReader* run{};
  UIntValueReader* luminosityBlock{};
  ULong64ValueReader* event{}; 

  static std::tuple<UInt_t, UInt_t, ULong64_t> currentEvent;

  static IntValueReader * VBS_category;
  static IntArrayReader*  VBS_jets_res;
  static IntArrayReader*  VBS_jets_boost;
  static IntArrayReader*  V_jets_res;
  static IntArrayReader*  CleanJet_jetIdx;
  static IntArrayReader* Jet_partonFlavour;

  static std::array<double, nVarTypes> returnValues;

  static void setValues(UInt_t, UInt_t, ULong64_t);
};

std::tuple<UInt_t, UInt_t, ULong64_t> PartonFlavour::currentEvent{};
IntValueReader * PartonFlavour::VBS_category{};
IntArrayReader* PartonFlavour::VBS_jets_res{};
IntArrayReader* PartonFlavour::VBS_jets_boost{};
IntArrayReader* PartonFlavour::V_jets_res{};
IntArrayReader* PartonFlavour::CleanJet_jetIdx{};
IntArrayReader* PartonFlavour::Jet_partonFlavour{};

std::array<double, PartonFlavour::nVarTypes> PartonFlavour::returnValues{};

PartonFlavour::PartonFlavour(char const* _type) :
  TTreeFunction()
{
  std::string type(_type);
  if (type ==  "vbs_0_partfl_res")
    returnVar_ = vbs_0_partfl_res;
  else if (type == "vbs_1_partfl_res")
    returnVar_ = vbs_1_partfl_res;
  else if (type == "vjet_0_partfl_res")
    returnVar_ = vjet_0_partfl_res;
  else if (type == "vjet_1_partfl_res")
    returnVar_ = vjet_1_partfl_res;
  else if (type == "vbs_0_partfl_boost")
    returnVar_ = vbs_0_partfl_boost;
  else if (type == "vbs_1_partfl_boost")
    returnVar_ = vbs_1_partfl_boost;
  else
    throw std::runtime_error("unknown return type " + type);
  
}


PartonFlavour::PartonFlavour(unsigned type) :
  TTreeFunction(),
  returnVar_(type) {}


double
PartonFlavour::evaluate(unsigned)
{
  setValues(*run->Get(), *luminosityBlock->Get(), *event->Get());
  return returnValues[returnVar_];
}

void
PartonFlavour::bindTree_(multidraw::FunctionLibrary& _library)
{   
    _library.bindBranch(run, "run");
    _library.bindBranch(luminosityBlock, "luminosityBlock");
    _library.bindBranch(event, "event");

    _library.bindBranch(VBS_category, "VBS_category");
    _library.bindBranch(VBS_jets_res, "VBS_jets_maxmjj_massWZ");
    _library.bindBranch(V_jets_res, "V_jets_maxmjj_massWZ");
    _library.bindBranch(VBS_jets_boost, "VBS_jets_maxmjj");
    _library.bindBranch(CleanJet_jetIdx, "CleanJet_jetIdx");
    _library.bindBranch(Jet_partonFlavour, "Jet_partonFlavour");

    currentEvent = std::make_tuple(0, 0, 0);

    _library.addDestructorCallback([]() {
                                     VBS_category=nullptr;
                                     Jet_partonFlavour = nullptr;
                                     V_jets_res=nullptr;
                                    VBS_jets_res= nullptr;
                                    VBS_jets_boost=nullptr;
                                    CleanJet_jetIdx=nullptr;
                                   });
}

/*static*/
void
PartonFlavour::setValues(UInt_t _run, UInt_t _luminosityBlock, ULong64_t _event)
{

  if (std::get<0>(currentEvent) == _run && \
      std::get<1>(currentEvent) == _luminosityBlock && \
      std::get<2>(currentEvent) == _event)
    return;

  currentEvent = std::make_tuple(_run, _luminosityBlock, _event);


   int category = *(VBS_category->Get());

    if (category ==0){
      //boosted
      returnValues[vbs_0_partfl_boost] = Jet_partonFlavour->At(CleanJet_jetIdx->At(VBS_jets_boost->At(0)));
      returnValues[vbs_1_partfl_boost] = Jet_partonFlavour->At(CleanJet_jetIdx->At(VBS_jets_boost->At(1)));
      returnValues[vbs_0_partfl_res] = 0;
      returnValues[vbs_1_partfl_res] = 0;
      returnValues[vjet_0_partfl_res] = 0;
      returnValues[vjet_1_partfl_res] = 0;


    }else if(category == 1){
      returnValues[vbs_0_partfl_boost] = 0;
      returnValues[vbs_1_partfl_boost] = 0;
      returnValues[vbs_0_partfl_res] = Jet_partonFlavour->At(CleanJet_jetIdx->At(VBS_jets_res->At(0)));
      returnValues[vbs_1_partfl_res] = Jet_partonFlavour->At(CleanJet_jetIdx->At(VBS_jets_res->At(1)));
      returnValues[vjet_0_partfl_res] = Jet_partonFlavour->At(CleanJet_jetIdx->At(V_jets_res->At(0)));
      returnValues[vjet_1_partfl_res] = Jet_partonFlavour->At(CleanJet_jetIdx->At(V_jets_res->At(1)));
    }
    else{
      returnValues[vbs_0_partfl_boost] = 0;
      returnValues[vbs_1_partfl_boost] = 0;
      returnValues[vbs_0_partfl_res] = 0;
      returnValues[vbs_1_partfl_res] = 0;
      returnValues[vjet_0_partfl_res] = 0;
      returnValues[vjet_1_partfl_res] = 0;
    }

}




   
