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

typedef TTreeReaderValue<Double_t> DoubleValueReader;

#ifndef WtaggingSF_ptextr_HH
#define WtaggingSF_ptextr_HH

class Wtagging_SF_ptExtrap_rescaled : public multidraw::TTreeFunction {
public:
  Wtagging_SF_ptExtrap_rescaled(  const char* year);
  ~Wtagging_SF_ptExtrap_rescaled();

  char const* getName() const override { return "Wtagging_SF_ptExtrap_rescaled"; }
  TTreeFunction* clone() const override { return new Wtagging_SF_ptExtrap_rescaled(year_.c_str() ); }
  
  void beginEvent(long long) override;
  unsigned getNdata() override { return outputValues.size(); } 
  int getMultiplicity() override { return 1; }
  double evaluate(unsigned) override;

protected:
  
  void bindTree_(multidraw::FunctionLibrary&) override;

  // From https://twiki.cern.ch/twiki/bin/viewauth/CMS/JetWtagging
  map<string,float> sf_hp { {"2018", 0.980 }, {"2017", 0.97}, {"2016", 1.  }};
  map<string,float> sf_lp { {"2018", 1.200 }, {"2017", 1.14}, {"2016", 0.96}};
  float sf_hp_ptfactor { 0.063 };
  float sf_lp_ptfactor { 0.0465 };
  
  string year_;

  IntValueReader* VBS_category{};
  UIntValueReader* nFatJet{}; 
  DoubleValueReader* CleanFatJet_pt{};
  FloatArrayReader* FatJet_pt{};
  FloatArrayReader* FatJet_eta{};
  FloatArrayReader* FatJet_phi{};
  FloatArrayReader* FatJet_mass{};
  FloatArrayReader* FatJet_tau1{};
  FloatArrayReader* FatJet_tau2{};

  void setValues();
  std::array<float,2> outputValues; 

};


Wtagging_SF_ptExtrap_rescaled::Wtagging_SF_ptExtrap_rescaled(const char* year):
   TTreeFunction(), year_(year){}



void
Wtagging_SF_ptExtrap_rescaled::beginEvent(long long _iEntry)
{
  setValues();
}


double
Wtagging_SF_ptExtrap_rescaled::evaluate(unsigned iJ)
{
  // Up - down
  return outputValues[iJ];
}

void
Wtagging_SF_ptExtrap_rescaled::setValues()
{
  int vbs_cat = *(VBS_category->Get());

  //boosted category
  if (vbs_cat == 0){
    float fatjet_pt = *(CleanFatJet_pt->Get());
    float uncert =  sf_hp_ptfactor * TMath::Log(fatjet_pt / 200.);
    // Boosted category, we apply the HP scale factor
    outputValues[0]    = sf_hp[year_] + uncert;
    outputValues[1]    = sf_hp[year_] - uncert;
  }
  //resolved category
  else if (vbs_cat == 1){
    // In this case we have to check if there is a Fatjet passing the kinematics selections
    // and with tau21 > 45. 
    bool good_fatjet = false;
    float good_fatjet_pt = 0.;
    if (*(nFatJet->Get()) > 0){
      TLorentzVector fatjet;
      fatjet.SetPtEtaPhiM(FatJet_pt->At(0),FatJet_eta->At(0),
                          FatJet_phi->At(0), FatJet_mass->At(0));
                          
      if (fatjet.Pt() > 200 && abs(fatjet.Eta())< 2.4 && fatjet.M() > 40 && fatjet.M() < 250){
        
        float tau21 = FatJet_tau2->At(0) / FatJet_tau1->At(0);
        if (tau21 > 0.45) {
          good_fatjet = true; 
          good_fatjet_pt = fatjet.Pt();
        }
      }
    }

    if (good_fatjet){
      float uncert =  sf_lp_ptfactor * TMath::Log(good_fatjet_pt / 200.);
      // Anticorrelate the weights with HP region
      outputValues[0]    = sf_lp[year_] - uncert;
      outputValues[1]    = sf_lp[year_] + uncert;
    }else{
      outputValues[0]    = 1.0;
      outputValues[1]    = 1.0;
    }
  }else{
    outputValues[0]    = 1.0;
    outputValues[1]    = 1.0;
  }
}

void
Wtagging_SF_ptExtrap_rescaled::bindTree_(multidraw::FunctionLibrary& _library)
{   

    _library.bindBranch(VBS_category, "VBS_category");
    _library.bindBranch(nFatJet, "nFatJet");
    _library.bindBranch(CleanFatJet_pt, "fatjetpt_scaled");
    _library.bindBranch(FatJet_pt, "FatJet_pt");
    _library.bindBranch(FatJet_eta, "FatJet_eta");
    _library.bindBranch(FatJet_phi, "FatJet_phi");
    _library.bindBranch(FatJet_mass, "FatJet_msoftdrop");
    _library.bindBranch(FatJet_tau1, "FatJet_tau1");
    _library.bindBranch(FatJet_tau2, "FatJet_tau2");

}


Wtagging_SF_ptExtrap_rescaled::~Wtagging_SF_ptExtrap_rescaled(){
  VBS_category = nullptr;  
  nFatJet = nullptr;  
  CleanFatJet_pt = nullptr;  
  FatJet_pt = nullptr;  
  FatJet_eta = nullptr;  
  FatJet_phi = nullptr;  
  FatJet_mass = nullptr;  
  FatJet_tau1 = nullptr;  
  FatJet_tau2 = nullptr;  
}

#endif