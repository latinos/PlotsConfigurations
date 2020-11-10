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


#ifndef TagJetsSystemsPt_HH
#define TagJetsSystemsPt_HH

#include <iostream>

using namespace ROOT::Math;

class TagJetsSystemsPt : public multidraw::TTreeFunction {
public:
  TagJetsSystemsPt();
  ~TagJetsSystemsPt();

  char const* getName() const override { return "TagJetsSystemsPt"; }
  TTreeFunction* clone() const override { return new TagJetsSystemsPt();}
  
  void beginEvent(long long) override;
  unsigned getNdata() override { return outputValues.size(); } 
  int getMultiplicity() override { return 1; }
  double evaluate(unsigned) override;

protected:
  void bindTree_(multidraw::FunctionLibrary&) override;
  
  IntValueReader * VBS_category;
  IntArrayReader*  VBS_jets_res;
  IntArrayReader*  VBS_jets_boost;
  IntArrayReader*  V_jets_res;
  FloatArrayReader* Lepton_pt;
  FloatArrayReader* Jet_pt;
  FloatArrayReader* Jet_eta;
  FloatArrayReader* Jet_phi;
  FloatArrayReader* Jet_mass;
  IntArrayReader* Jet_idx;
  FloatArrayReader* FatJet_pt;
  FloatArrayReader* FatJet_eta;
  FloatArrayReader* FatJet_phi;
  FloatArrayReader* FatJet_mass;

  void setValues();
  std::array<float,6> outputValues; 
};


TagJetsSystemsPt::TagJetsSystemsPt() :
  TTreeFunction(){}


void
TagJetsSystemsPt::beginEvent(long long _iEntry)
{
  setValues();
}


double
TagJetsSystemsPt::evaluate(unsigned iJ)
{
  // 0) VBS jets Pt
  // 1) VBS+Vjet jets PT
  // 2) VBS jets HT
  // 3) VJets HT(in boosted it is the FatJet Pt)
  // 4) VBS+Vjets HT
  // 5) VBS+Vjets+Lepton HT
  return outputValues[iJ];
}


void
TagJetsSystemsPt::bindTree_(multidraw::FunctionLibrary& _library)
{
    _library.bindBranch(VBS_category, "VBS_category");
    _library.bindBranch(VBS_jets_res, "VBS_jets_maxmjj_massWZ");
    _library.bindBranch(V_jets_res, "V_jets_maxmjj_massWZ");
    _library.bindBranch(VBS_jets_boost, "VBS_jets_maxmjj");
    _library.bindBranch(Lepton_pt, "Lepton_pt");
    _library.bindBranch(Jet_pt, "CleanJet_pt");
    _library.bindBranch(Jet_eta, "CleanJet_eta");
    _library.bindBranch(Jet_phi, "CleanJet_phi");
    _library.bindBranch(Jet_mass, "Jet_mass");
    _library.bindBranch(Jet_idx, "CleanJet_jetIdx");
    _library.bindBranch(FatJet_pt, "CleanFatJet_pt");
    _library.bindBranch(FatJet_eta, "CleanFatJet_eta");
    _library.bindBranch(FatJet_phi, "CleanFatJet_phi");
    _library.bindBranch(FatJet_mass, "CleanFatJet_mass");

    
}

TagJetsSystemsPt::~TagJetsSystemsPt(){
  VBS_category = nullptr;
  VBS_jets_res = nullptr;
  V_jets_res = nullptr;
  VBS_jets_boost = nullptr;
  Lepton_pt = nullptr;
  Jet_pt = nullptr;
  Jet_eta = nullptr;
  Jet_phi = nullptr;
  Jet_mass = nullptr;
  Jet_idx = nullptr;
  FatJet_pt = nullptr;
  FatJet_eta = nullptr;
  FatJet_phi = nullptr;
  FatJet_mass = nullptr;
}

void
TagJetsSystemsPt::setValues()
{
    int category = *(VBS_category->Get());

    vector<PtEtaPhiMVector> vbs_jets;
    vector<PtEtaPhiMVector> v_jets;
  
    outputValues.fill(0.);

    if (category ==0){
        for (auto ij : *VBS_jets_boost){
          vbs_jets.emplace_back(Jet_pt->At(ij), Jet_eta->At(ij),Jet_phi->At(ij), Jet_mass->At(Jet_idx->At(ij)) );
        }
        PtEtaPhiMVector fatjet = {FatJet_pt->At(0),FatJet_eta->At(0),FatJet_phi->At(0),FatJet_mass->At(0) };

        outputValues[0] =  (vbs_jets[0] + vbs_jets[1]).Pt();
        outputValues[1] =  (vbs_jets[0] + vbs_jets[1] + fatjet).Pt();
        outputValues[2] =  vbs_jets[0].Pt() + vbs_jets[1].Pt();
        outputValues[3] =  fatjet.Pt();
        outputValues[4] =  outputValues[2]+outputValues[3];
        outputValues[5] = outputValues[5] + Lepton_pt->At(0);

    }else if(category == 1){
        for (auto ij : *VBS_jets_res){
          vbs_jets.emplace_back(Jet_pt->At(ij), Jet_eta->At(ij),Jet_phi->At(ij), Jet_mass->At(Jet_idx->At(ij)) );
        }
        for (auto ij : *V_jets_res){
          v_jets.emplace_back(Jet_pt->At(ij), Jet_eta->At(ij),Jet_phi->At(ij), Jet_mass->At(Jet_idx->At(ij)) );
        }

        outputValues[0] =  (vbs_jets[0] + vbs_jets[1]).Pt();
        outputValues[1] =  (vbs_jets[0] + vbs_jets[1] + v_jets[0] + v_jets[1]).Pt();
        outputValues[2] =  vbs_jets[0].Pt() + vbs_jets[1].Pt();
        outputValues[3] =  v_jets[0].Pt() + v_jets[1].Pt();
        outputValues[4] =  outputValues[2]+outputValues[3];
        outputValues[5] =  outputValues[5] + Lepton_pt->At(0);

    }


}



#endif