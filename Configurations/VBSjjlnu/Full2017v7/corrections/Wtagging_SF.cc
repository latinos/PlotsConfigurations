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

class Wtagging_SF : public multidraw::TTreeFunction {
public:
  Wtagging_SF( char const* _type, const char* year);
  Wtagging_SF( unsigned type, const char* year);

  char const* getName() const override { return "Wtagging_SF"; }
  TTreeFunction* clone() const override { return new Wtagging_SF(returnVar_,year_.c_str() ); }

  unsigned getNdata() override { return 1; }
  double evaluate(unsigned) override;

protected:
  enum ReturnType {
        nominal,up,down,nVarTypes
  };
  
 
  void bindTree_(multidraw::FunctionLibrary&) override;

  unsigned returnVar_{nVarTypes};
  

  // From https://twiki.cern.ch/twiki/bin/viewauth/CMS/JetWtagging
  static map<string,float> sf_hp;
  static map<string,float> sf_hp_uncert;
  static map<string,float> sf_lp;
  static map<string,float> sf_lp_uncert;
  static string year_;

  UIntValueReader* run{};
  UIntValueReader* luminosityBlock{};
  ULong64ValueReader* event{}; 

  static std::tuple<UInt_t, UInt_t, ULong64_t> currentEvent;
  
  static IntValueReader* VBS_category;
  static UIntValueReader* nFatJet; 
  static FloatArrayReader* FatJet_pt;
  static FloatArrayReader* FatJet_eta;
  static FloatArrayReader* FatJet_phi;
  static FloatArrayReader* FatJet_mass;
  static FloatArrayReader* FatJet_tau1;
  static FloatArrayReader* FatJet_tau2;

  static std::array<double, nVarTypes> returnValues;

  static void setValues(UInt_t, UInt_t, ULong64_t);
};

std::tuple<UInt_t, UInt_t, ULong64_t> Wtagging_SF::currentEvent{};
IntValueReader* Wtagging_SF::VBS_category{};
UIntValueReader* Wtagging_SF::nFatJet{}; 
FloatArrayReader* Wtagging_SF::FatJet_pt{};
FloatArrayReader* Wtagging_SF::FatJet_eta{};
FloatArrayReader* Wtagging_SF::FatJet_phi{};
FloatArrayReader* Wtagging_SF::FatJet_mass{};
FloatArrayReader* Wtagging_SF::FatJet_tau1{};
FloatArrayReader* Wtagging_SF::FatJet_tau2{};

map<string,float> Wtagging_SF::sf_hp = {        {"2018", 0.980 }, {"2017", 0.97}, {"2016", 1.  }};
map<string,float> Wtagging_SF::sf_hp_uncert = { {"2018", 0.027 }, {"2017", 0.06}, {"2016", 0.06}};
map<string,float> Wtagging_SF::sf_lp = {        {"2018", 1.200 }, {"2017", 1.14}, {"2016", 0.96}};
map<string,float> Wtagging_SF::sf_lp_uncert = { {"2018", 0.275 }, {"2017", 0.29}, {"2016", 0.11}};
string Wtagging_SF::year_{};

std::array<double, Wtagging_SF::nVarTypes> Wtagging_SF::returnValues{};

Wtagging_SF::Wtagging_SF( char const* _type, const char* year):
   TTreeFunction(){
     
    std::string type(_type);
    if (type ==  "nominal")
      returnVar_ = nominal;
    else if (type == "up")
      returnVar_ = up;
    else if (type == "down")
      returnVar_ = down;
    else
      throw std::runtime_error("unknown return type " + type);

    Wtagging_SF::year_ = year;
}

Wtagging_SF::Wtagging_SF( unsigned type, const char* year):
TTreeFunction(), returnVar_(type){
  Wtagging_SF::year_ = year;
}


double
Wtagging_SF::evaluate(unsigned)
{
  setValues(*run->Get(), *luminosityBlock->Get(), *event->Get());
  return returnValues[returnVar_];
}

void
Wtagging_SF::bindTree_(multidraw::FunctionLibrary& _library)
{   
    _library.bindBranch(run, "run");
    _library.bindBranch(luminosityBlock, "luminosityBlock");
    _library.bindBranch(event, "event");

    _library.bindBranch(VBS_category, "VBS_category");
    _library.bindBranch(nFatJet, "nFatJet");
    _library.bindBranch(FatJet_pt, "FatJet_pt");
    _library.bindBranch(FatJet_eta, "FatJet_eta");
    _library.bindBranch(FatJet_phi, "FatJet_phi");
    _library.bindBranch(FatJet_mass, "FatJet_msoftdrop");
    _library.bindBranch(FatJet_tau1, "FatJet_tau1");
    _library.bindBranch(FatJet_tau2, "FatJet_tau2");

    currentEvent = std::make_tuple(0, 0, 0);

    _library.addDestructorCallback([]() {
                                     VBS_category = nullptr;
                                     nFatJet = nullptr;
                                     FatJet_pt = nullptr;
                                     FatJet_eta = nullptr;
                                     FatJet_phi = nullptr;
                                     FatJet_mass = nullptr;
                                     FatJet_tau1 = nullptr;
                                     FatJet_tau2 = nullptr;
                                   });
}

/*static*/
void
Wtagging_SF::setValues(UInt_t _run, UInt_t _luminosityBlock, ULong64_t _event)
{

  if (std::get<0>(currentEvent) == _run && \
      std::get<1>(currentEvent) == _luminosityBlock && \
      std::get<2>(currentEvent) == _event)
    return;

  currentEvent = std::make_tuple(_run, _luminosityBlock, _event);

  int vbs_cat = *(VBS_category->Get());

  //boosted category
  if (vbs_cat == 0){
    // Boosted category, we apply the HP scale factor
    returnValues[nominal] = sf_hp[year_];
    returnValues[up]      = sf_hp[year_] + sf_hp_uncert[year_];
    returnValues[down]    = sf_hp[year_] - sf_hp_uncert[year_];
  }
  //resolved category
  else if (vbs_cat == 1){
    // In this case we have to check if there is a Fatjet passing the kinematics selections
    // and with tau21 > 45. 
    bool good_fatjet = false;
    if (*(nFatJet->Get()) > 0){
      TLorentzVector fatjet;
      fatjet.SetPtEtaPhiM(FatJet_pt->At(0),FatJet_eta->At(0),
                          FatJet_phi->At(0), FatJet_mass->At(0));
                          
      if (fatjet.Pt() > 200 && abs(fatjet.Eta())< 2.4 && fatjet.M() > 40 && fatjet.M() < 250){
        
        float tau21 = FatJet_tau2->At(0) / FatJet_tau1->At(0);
        if (tau21 > 0.45) good_fatjet = true; 
      }
    }

    if (good_fatjet){
      returnValues[nominal] = sf_lp[year_];
      // Anticorrelate the weights with HP region
      returnValues[up]      = sf_lp[year_] - sf_lp_uncert[year_];
      returnValues[down]    = sf_lp[year_] + sf_lp_uncert[year_];
    }else{
      returnValues[nominal] = 1.0;
      returnValues[up]      = 1.0;
      returnValues[down]    = 1.0;
    }
  }

}
