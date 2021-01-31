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
#include "Math/Vector4Dfwd.h"
#include "Math/GenVector/LorentzVector.h"
#include "Math/GenVector/PtEtaPhiM4D.h"
#include "Math/GenVector/Boost.h"
#include "Math/GenVector/VectorUtil.h"


#ifndef VBS_angular_2017_vars_
#define VBS_angular_2017_vars_

#include <iostream>

using namespace ROOT::Math;
typedef TTreeReaderValue<Double_t> DoubleValueReader;

class VBSAngularVars_2017 : public multidraw::TTreeFunction {
public:
  VBSAngularVars_2017(bool debug);
  ~VBSAngularVars_2017();

  char const* getName() const override { return "VBSAngularVars_2017"; }
  TTreeFunction* clone() const override { return new VBSAngularVars_2017(debug_);}
  
  void beginEvent(long long iEv) override {filled=false;};
  unsigned getNdata() override { return outputValues.size(); } 
  int getMultiplicity() override { return 1; }
  double evaluate(unsigned) override;
  bool filled;
  bool debug_;

protected:
  void bindTree_(multidraw::FunctionLibrary&) override;
  
  DoubleValueReader * VBS_category;
  DoubleValueReader* Vjets_index_0;
  DoubleValueReader* Vjets_index_1;
  DoubleValueReader* Wlep_pt;
  DoubleValueReader* Wlep_eta;
  DoubleValueReader* Wlep_phi;
  DoubleValueReader* Wlep_mass;
  DoubleValueReader* Vhad_pt;
  DoubleValueReader* Vhad_eta;
  DoubleValueReader* Vhad_phi;
  DoubleValueReader* Vhad_mass;
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
  std::array<float,12> outputValues; 
};


VBSAngularVars_2017::VBSAngularVars_2017(bool debug) : 
  TTreeFunction(),debug_(debug){}



double
VBSAngularVars_2017::evaluate(unsigned iJ)
{
  /*
  0) VW pt
  1) VW eta
  2) VW phi
  3) deltaphi_WV
  4) theta*
  5) theta_lep
  6) theta_vjet_0
  7) theta_vjet_1
  8) delta theta_lep_Wlep
  9) delta theta_vjet0_Wlep
  10) delta theta_vjet1_Wlep
  11) delta theta*-WVsyst
  
  */
  if (!filled) setValues();
  return outputValues[iJ];
}


void
VBSAngularVars_2017::setValues()
{
  outputValues.fill(0.);

  int category = static_cast<int>(*(VBS_category->Get()));

  if (category<0) return;

  vector<PtEtaPhiMVector> v_jets;

  PtEtaPhiMVector lep {Lepton_pt->At(0), Lepton_eta->At(0), Lepton_phi->At(0), 0.};
  PtEtaPhiMVector Vhad {*(Vhad_pt->Get()),*(Vhad_eta->Get()),*(Vhad_phi->Get()), *(Vhad_mass->Get())};
  PtEtaPhiMVector Wlep {*(Wlep_pt->Get()),*(Wlep_eta->Get()),*(Wlep_phi->Get()), *(Wlep_mass->Get())};
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
      int vj0 = static_cast<int>(*(Vjets_index_0->Get()));
      int vj1 = static_cast<int>(*(Vjets_index_1->Get()));
      v_jets.emplace_back(Jet_pt->At(vj0), Jet_eta->At(vj0),Jet_phi->At(vj0), Jet_mass->At(Jet_idx->At(vj0)) );
      v_jets.emplace_back(Jet_pt->At(vj1), Jet_eta->At(vj1),Jet_phi->At(vj1), Jet_mass->At(Jet_idx->At(vj1)) );
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
VBSAngularVars_2017::bindTree_(multidraw::FunctionLibrary& _library)
{
    _library.bindBranch(VBS_category, "VBS_category_OTF");
    _library.bindBranch(Vjets_index_0, "V_jets_index_0_OTF");
    _library.bindBranch(Vjets_index_1, "V_jets_index_1_OTF");
    _library.bindBranch(Wlep_pt, "Wlep_pt_OTF");
    _library.bindBranch(Wlep_eta, "Wlep_eta_OTF");
    _library.bindBranch(Wlep_phi, "Wlep_phi_OTF");
    _library.bindBranch(Wlep_mass, "Wlep_mass_OTF");
    _library.bindBranch(Vhad_pt, "Vhad_pt_OTF");
    _library.bindBranch(Vhad_eta, "Vhad_eta_OTF");
    _library.bindBranch(Vhad_phi, "Vhad_phi_OTF");
    _library.bindBranch(Vhad_mass, "Vhad_mass_OTF");
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

VBSAngularVars_2017::~VBSAngularVars_2017(){
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
  subjet_1_index = nullptr;
  subjet_2_index = nullptr;
}



#endif