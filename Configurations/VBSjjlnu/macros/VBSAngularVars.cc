#include "LatinoAnalysis/MultiDraw/interface/TTreeFunction.h"
#include "LatinoAnalysis/MultiDraw/interface/FunctionLibrary.h"

#include <vector>
#include <array>
#include <map>
#include <iostream>
#include <fstream>
#include <sstream>
#include <string>

#include "TVector2.h"
#include "TString.h"
#include "TFile.h"
#include "TH2.h"
#include "TH2F.h"
#include "TVector3.h"
#include "Math/Vector4Dfwd.h"
#include "Math/GenVector/LorentzVector.h"
#include "Math/GenVector/PtEtaPhiM4D.h"
#include "Math/GenVector/Boost.h"
#include "Math/GenVector/VectorUtil.h"


#ifndef VBS_angular_vars_
#define VBS_angular_vars_

#include <iostream>

using namespace ROOT::Math;

class VBSAngularVars : public multidraw::TTreeFunction {
public:
  VBSAngularVars(bool debug);
  ~VBSAngularVars();

  char const* getName() const override { return "VBSAngularVars"; }
  TTreeFunction* clone() const override { return new VBSAngularVars(debug_);}
  
  void beginEvent(long long iEv) override {filled=false;};
  unsigned getNdata() override { return outputValues.size(); } 
  int getMultiplicity() override { return 1; }
  double evaluate(unsigned) override;
  bool filled;
  bool debug_;

protected:
  void bindTree_(multidraw::FunctionLibrary&) override;
  
  IntValueReader * VBS_category;
  IntArrayReader*  V_jets_res;
  FloatArrayReader* Wlep_vec;
  FloatArrayReader* Vhad_vec;
  FloatArrayReader* Lepton_pt;
  FloatArrayReader* Lepton_eta;
  FloatArrayReader* Lepton_phi;
  FloatArrayReader* Jet_pt;
  FloatArrayReader* Jet_eta;
  FloatArrayReader* Jet_phi;
  FloatArrayReader* Jet_mass;
  IntArrayReader* Jet_idx;
  IntArrayReader* FatJet_idx;
  FloatArrayReader* subJet_pt;
  FloatArrayReader* subJet_eta;
  FloatArrayReader* subJet_phi;
  FloatArrayReader* subJet_mass;
  IntArrayReader* subjet_1_index;
  IntArrayReader* subjet_2_index;

  void setValues();
  std::array<float,9> outputValues; 
};


VBSAngularVars::VBSAngularVars(bool debug) : 
  TTreeFunction(),debug_(debug){}



double
VBSAngularVars::evaluate(unsigned iJ)
{
  /*
  0) deltaphi_WVplanes
  1) theta_VHad
  2) theta_lep
  3) theta_vjet_0
  4) theta_vjet_1
  5) delta theta*-WVsyst
  6) delta theta_lep_Wlep
  7) delta theta_vjet0_Wlep
  8) delta theta_vjet1_Wlep
  
  
  */
  if (!filled) setValues();
  return outputValues[iJ];
}


void
VBSAngularVars::setValues()
{
  outputValues.fill(-1.);

  int category = *(VBS_category->Get());

  vector<PtEtaPhiMVector> v_jets;

  PtEtaPhiMVector lep {Lepton_pt->At(0), Lepton_eta->At(0), Lepton_phi->At(0), 0.};
  PtEtaPhiMVector Vhad {Vhad_vec->At(0),Vhad_vec->At(1),Vhad_vec->At(2),Vhad_vec->At(3)};
  PtEtaPhiMVector Wlep {Wlep_vec->At(0),Wlep_vec->At(1),Wlep_vec->At(2),Wlep_vec->At(3)};
  PtEtaPhiMVector WVsyst = Vhad + Wlep;
  Boost WVboost { WVsyst.BoostToCM()};
  Boost Wlep_boost { Wlep.BoostToCM()};
  Boost Vhad_boost { Vhad.BoostToCM()};

  if (category ==0){
      // Use the fatjet's subject as a proxy for V-jets
      int subj1 = subjet_1_index->At(FatJet_idx->At(0));
      int subj2 = subjet_2_index->At(FatJet_idx->At(0));
      v_jets.emplace_back(subJet_pt->At(subj1), subJet_eta->At(subj1),subJet_phi->At(subj1), subJet_mass->At(subj1));
      v_jets.emplace_back(subJet_pt->At(subj2), subJet_eta->At(subj2),subJet_phi->At(subj2), subJet_mass->At(subj2));

  }else if(category == 1){
      for (auto ij : *V_jets_res){
        v_jets.emplace_back(Jet_pt->At(ij), Jet_eta->At(ij),Jet_phi->At(ij), Jet_mass->At(Jet_idx->At(ij)) );
      }
  }

  PtEtaPhiMVector Vhad_WVcm = WVboost(Vhad);
  PtEtaPhiMVector Wlep_WVcm = WVboost(Wlep);
  PtEtaPhiMVector lep_Wcm   = Wlep_boost(lep);
  PtEtaPhiMVector vjet0_Vcm = Vhad_boost(v_jets[0]);
  PtEtaPhiMVector vjet1_Vcm = Vhad_boost(v_jets[1]);

  auto Vhad_plane =  vjet0_Vcm.Vect().Cross(vjet1_Vcm.Vect());
  auto Wlep_plane =  lep_Wcm.Vect().Cross(Wlep.Vect());

  outputValues[0] = abs(VectorUtil::DeltaPhi(Vhad_plane, Wlep_plane));
  outputValues[1] = Vhad_WVcm.Theta();
  outputValues[2] = lep_Wcm.Theta();
  outputValues[3] = vjet0_Vcm.Theta();
  outputValues[4] = vjet1_Vcm.Theta();
  outputValues[5] = VectorUtil::Angle(Vhad_WVcm.Vect(), WVsyst.Vect());
  outputValues[6] = VectorUtil::Angle(lep_Wcm.Vect(), Wlep_WVcm.Vect());
  outputValues[7] = VectorUtil::Angle(vjet0_Vcm.Vect(), Vhad_WVcm.Vect());
  outputValues[8] = VectorUtil::Angle(vjet1_Vcm.Vect(), Vhad_WVcm.Vect());

  if (debug_){
    std::cout << "---------------"<< std::endl << "Category: " <<category <<std::endl;
    std::cout << "WV planes deltaPhi "<< outputValues[0] << std::endl;
    std::cout << "Vhad Theta "<< outputValues[1] << std::endl;
    std::cout << "Theta lep "<< outputValues[2] << std::endl;
    std::cout << "Theta Vjet0 "<< outputValues[3] << std::endl;
    std::cout << "Theta Vjet1 "<< outputValues[4] << std::endl;
    std::cout << "Angle Vhad in WVCM "<< outputValues[5] << std::endl;
    std::cout << "Angle lep-Wlep "<< outputValues[6] << std::endl;
    std::cout << "Angle vjet0-Wlep "<< outputValues[7] << std::endl;
    std::cout << "Angle vjet1-Wlep "<< outputValues[8] << std::endl;

    std::cout << "check "<<  outputValues[5] << " ----> " << VectorUtil::Angle(Wlep_WVcm.Vect(), WVsyst.Vect()) << std::endl;

    // auto check1 = Vhad_CM + Wlep_CM;
    // std::cout << check1.x() << " "<< check1.y() << " " << check1.z() << std::endl;
    // auto check2 = vjet0_VCM + vjet1_VCM;
    // std::cout << check2.x() << " "<< check2.y() << " " << check2.z() << std::endl;
  }

  filled = true;
}


void
VBSAngularVars::bindTree_(multidraw::FunctionLibrary& _library)
{
    _library.bindBranch(VBS_category, "VBS_category");
    _library.bindBranch(V_jets_res, "V_jets_maxmjj_massWZ");
    _library.bindBranch(Wlep_vec, "VBS_Wlep_vec");
    _library.bindBranch(Vhad_vec, "VBS_Whad_vec");
    _library.bindBranch(Lepton_pt, "Lepton_pt");
    _library.bindBranch(Lepton_eta, "Lepton_eta");
    _library.bindBranch(Lepton_phi, "Lepton_phi");
    _library.bindBranch(Jet_pt, "CleanJet_pt");
    _library.bindBranch(Jet_eta, "CleanJet_eta");
    _library.bindBranch(Jet_phi, "CleanJet_phi");
    _library.bindBranch(Jet_mass, "Jet_mass");
    _library.bindBranch(Jet_idx, "CleanJet_jetIdx");
    _library.bindBranch(FatJet_idx, "CleanFatJet_jetIdx");
    _library.bindBranch(subJet_pt, "SubJet_pt");
    _library.bindBranch(subJet_eta, "SubJet_eta");
    _library.bindBranch(subJet_phi, "SubJet_phi");
    _library.bindBranch(subJet_mass, "SubJet_mass");
    _library.bindBranch(subjet_1_index,"FatJet_subJetIdx1");
    _library.bindBranch(subjet_2_index,"FatJet_subJetIdx2");

    
}

VBSAngularVars::~VBSAngularVars(){
  V_jets_res = nullptr;
  Lepton_pt = nullptr;
  Lepton_eta = nullptr;
  Lepton_phi = nullptr;
  Jet_pt = nullptr;
  Jet_eta = nullptr;
  Jet_phi = nullptr;
  Jet_mass = nullptr;
  Jet_idx = nullptr;
  FatJet_idx = nullptr;
  subJet_pt = nullptr;
  subJet_eta = nullptr;
  subJet_phi = nullptr;
  subJet_mass = nullptr;
  Wlep_vec= nullptr;
  Vhad_vec = nullptr;
  subjet_1_index = nullptr;
  subjet_2_index = nullptr;
}



#endif