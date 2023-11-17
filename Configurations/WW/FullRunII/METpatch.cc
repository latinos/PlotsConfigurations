#include "LatinoAnalysis/MultiDraw/interface/TTreeFunction.h"
#include "LatinoAnalysis/MultiDraw/interface/FunctionLibrary.h"

#include <vector>

#include <TLorentzVector.h>
#include <TMVA/Reader.h>

#include <iostream>
#include <cmath>

#ifndef METpatch_HH
#define METpatch_HH

class METpatch : public multidraw::TTreeFunction {
public:
  METpatch(const char* variable_);

  char const* getName() const override { return "METpatch"; }
  TTreeFunction* clone() const override { return new METpatch(variable.c_str()); }

  unsigned getNdata() override { return 1; }
  double evaluate(unsigned) override;

protected:
  void bindTree_(multidraw::FunctionLibrary&) override;
  std::string variable;

  UIntValueReader*  nCleanJet;
  FloatArrayReader* CleanJet_pt;
  FloatArrayReader* CleanJet_eta;
  FloatArrayReader* CleanJet_phi;
  FloatArrayReader* CleanJet_mass;
  IntArrayReader*   CleanJet_jetIdx;
  FloatArrayReader* Jet_btagDeepFlavB;

  FloatArrayReader* Jet_mass;

  UIntValueReader*  nLepton;
  FloatArrayReader* Lepton_pt;
  FloatArrayReader* Lepton_eta;
  FloatArrayReader* Lepton_phi;

  FloatValueReader* pt1;
  FloatValueReader* pt2;
  FloatValueReader* mll;
  FloatValueReader* ptll;
  FloatValueReader* drll;
  FloatValueReader* dphill;
  FloatValueReader* dphilljet;
  FloatValueReader* mjj;
  FloatValueReader* detajj;
  FloatValueReader* dphijj;
  FloatValueReader* dphilep1jet1;
  FloatValueReader* dphilep1jet2;
  FloatValueReader* mindetajl;

  FloatValueReader* PuppiMET_pt;
  FloatValueReader* PuppiMET_phi;

  // Variables fed into the BDT
  float pt1_;
  float pt2_;
  float mll_;
  float ptll_;
  float drll_;
  float dphill_; 
  float dphilmet_;
  float dphilmet1_;    
  float dphillmet_;
  float mtw1_;
  float mtw2_;
  float pTWW_;
  float pTHjj_;
  float dphilljet_;
  float mjj_;
  float detajj_;
  float dphijj_;
  float dphijet2met_;
  float dphijjmet_;
  float dphilep1jet1_;
  float dphilep1jet2_;
  float mindetajl_;
  float CleanJet_pt_0_;
  float CleanJet_pt_1_;
  float CleanJet_eta_0_;
  float CleanJet_eta_1_;
  float Jet_btagDeepFlavB_CleanJet_jetIdx_0_;
  float Jet_btagDeepFlavB_CleanJet_jetIdx_1_;

  TMVA::Reader *reader = new TMVA::Reader();

  bool isData = false;
};

METpatch::METpatch(const char* variable_) :
  TTreeFunction(),
  variable{variable_}
{
  if (variable == "WW_BDT_0j"){
    reader->AddVariable("pt1", &pt1_);
    reader->AddVariable("pt2", &pt2_);
    reader->AddVariable("mll", &mll_);
    reader->AddVariable("ptll", &ptll_); 
    reader->AddVariable("drll", &drll_);
    reader->AddVariable("dphill", &dphill_);
    reader->AddVariable("dphilmet", &dphilmet_);  
    reader->AddVariable("dphillmet", &dphillmet_);
    reader->AddVariable("mtw1", &mtw1_);	
    reader->AddVariable("mtw2", &mtw2_);	
    reader->AddVariable("pTWW", &pTWW_);
    reader->AddVariable("Alt$(Jet_btagDeepFlavB[CleanJet_jetIdx[0]],-2)", &Jet_btagDeepFlavB_CleanJet_jetIdx_0_);

    reader->BookMVA("BDT","/afs/cern.ch/work/s/ssaumya/public/WW_TopBDT_UL_Weights/0jet/TMVAClassification_BDTG4D3.weights.xml"); 
  }
  if (variable == "WW_BDT_1j"){
    reader->AddVariable("pt1", &pt1_);
    reader->AddVariable("mll", &mll_);
    reader->AddVariable("ptll", &ptll_);  
    reader->AddVariable("drll", &drll_);
    reader->AddVariable("dphilmet", &dphilmet_); 
    reader->AddVariable("dphilmet1", &dphilmet1_);
    reader->AddVariable("dphillmet", &dphillmet_);
    reader->AddVariable("mtw1", &mtw1_);	
    reader->AddVariable("mtw2", &mtw2_);	
    reader->AddVariable("pTWW", &pTWW_);
    reader->AddVariable("dphilljet", &dphilljet_);
    reader->AddVariable("Alt$(CleanJet_pt[0], 0)", &CleanJet_pt_0_);
    reader->AddVariable("Alt$(CleanJet_eta[0], 0)", &CleanJet_eta_0_);
    reader->AddVariable("Alt$(Jet_btagDeepFlavB[CleanJet_jetIdx[0]],-2)", &Jet_btagDeepFlavB_CleanJet_jetIdx_0_);
    
    reader->BookMVA("BDT","/afs/cern.ch/work/s/ssaumya/public/WW_TopBDT_UL_Weights/1jet/TMVAClassification_BDTG4D3.weights.xml"); 
  }
  if (variable == "WW_BDT_2j"){
    reader->AddVariable("pt1", &pt1_);
    reader->AddVariable("mll", &mll_);
    reader->AddVariable("drll", &drll_);
    reader->AddVariable("dphillmet", &dphillmet_);
    reader->AddVariable("mtw1", &mtw1_);	
    reader->AddVariable("mtw2", &mtw2_);	
    reader->AddVariable("pTWW", &pTWW_);
    reader->AddVariable("pTHjj", &pTHjj_);
    reader->AddVariable("mjj", &mjj_);
    reader->AddVariable("detajj", &detajj_);
    reader->AddVariable("dphijj", &dphijj_);
    reader->AddVariable("dphijet2met", &dphijet2met_);
    reader->AddVariable("dphijjmet", &dphijjmet_);
    reader->AddVariable("dphilep1jet1", &dphilep1jet1_);
    reader->AddVariable("dphilep1jet2", &dphilep1jet2_);
    reader->AddVariable("mindetajl", &mindetajl_);
    reader->AddVariable("Alt$(CleanJet_pt[0], 0)", &CleanJet_pt_0_);
    reader->AddVariable("Alt$(CleanJet_pt[1], 0)", &CleanJet_pt_1_);
    reader->AddVariable("Alt$(CleanJet_eta[0], 0)", &CleanJet_eta_0_);
    reader->AddVariable("Alt$(CleanJet_eta[1], 0)", &CleanJet_eta_1_);
    reader->AddVariable("Alt$(Jet_btagDeepFlavB[CleanJet_jetIdx[0]],-2)", &Jet_btagDeepFlavB_CleanJet_jetIdx_0_);
    reader->AddVariable("Alt$(Jet_btagDeepFlavB[CleanJet_jetIdx[1]],-2)", &Jet_btagDeepFlavB_CleanJet_jetIdx_1_);
    
    reader->BookMVA("BDT","/afs/cern.ch/work/s/ssaumya/public/WW_TopBDT_UL_Weights/2jet/TMVAClassification_BDTG4D3.weights.xml"); 
  }
}

double
METpatch::evaluate(unsigned)
{
  pt1_ = *pt1->Get();
  pt2_ = *pt2->Get();
  mll_ = *mll->Get();
  ptll_ = *ptll->Get();
  drll_ = *drll->Get();
  dphill_ = *dphill->Get();
  dphilljet_ = *dphilljet->Get();
  mjj_ = *mjj->Get();
  detajj_ = *detajj->Get();
  dphijj_ = *dphijj->Get();
  dphilep1jet1_ = *dphilep1jet1->Get();
  dphilep1jet2_ = *dphilep1jet2->Get();
  mindetajl_ = *mindetajl->Get();

  TLorentzVector L1, L2;
  TLorentzVector MET;
  TLorentzVector J1,J2;

  unsigned nlep = *nLepton->Get();
  bool _isOk = false;
  if (nlep > 0 && Lepton_pt->At(0) > 0 ) {
    L1.SetPtEtaPhiM(Lepton_pt->At(0), Lepton_eta->At(0), Lepton_phi->At(0), 0);
    if (nlep > 1 && Lepton_pt->At(1) > 0 ) {
      L2.SetPtEtaPhiM(Lepton_pt->At(1), Lepton_eta->At(1), Lepton_phi->At(1), 0);
      _isOk = true;
    }
  }

  MET.SetPtEtaPhiM(*PuppiMET_pt->Get(), 0, *PuppiMET_phi->Get(), 0.);
  _isOk = _isOk && (MET.E() > 0);

  float pfmet = (MET.E() > 0) ? MET.Pt() : -9999.0;

  unsigned njet = *nCleanJet->Get();
  bool _jetOk = false;
  if (njet >= 1 && CleanJet_pt->At(0) > 0){
    float jet0mass = isData ? Jet_mass->At(CleanJet_jetIdx->At(0)) : CleanJet_mass->At(0);
    J1.SetPtEtaPhiM(CleanJet_pt->At(0), CleanJet_eta->At(0), CleanJet_phi->At(0), jet0mass);
    if (njet >= 2 && CleanJet_pt->At(1) > 0){
      float jet1mass = isData ? Jet_mass->At(CleanJet_jetIdx->At(1)) : CleanJet_mass->At(1);
      J2.SetPtEtaPhiM(CleanJet_pt->At(1), CleanJet_eta->At(1), CleanJet_phi->At(1), jet1mass);
      _jetOk = true;
    }
  }

  dphilmet1_      = (L1.Pt() > 0 && MET.E() > 0) ? fabs((L1).DeltaPhi(MET))                               : -9999.0;
  float dphilmet2 = (L2.Pt() > 0 && MET.E() > 0) ? fabs((L2).DeltaPhi(MET))                               : -9999.0;
  dphilmet_       = _isOk                        ? min(fabs((L1).DeltaPhi(MET)),fabs((L2.DeltaPhi(MET)))) : -9999.0;
  mtw1_           = (L1.Pt() > 0 && MET.E() > 0) ? sqrt(2.*pt1_*pfmet*(1-cos(dphilmet1_)))                : -9999.0;
  mtw2_           = _isOk                        ? sqrt(2.*pt2_*pfmet*(1-cos(dphilmet2)))                 : -9999.0;
  dphillmet_      = _isOk                        ? fabs((L1+L2).DeltaPhi(MET))                            : -9999.0;
  pTWW_           = _isOk                        ? (L1+L2+MET).Pt()                                       : -9999.0;
  pTHjj_          = (_isOk && _jetOk)            ? (L1+L2+J1+J2+MET).Pt()                                 : -9999.0;
  dphijet2met_    = (_isOk && _jetOk)            ? fabs(J2.DeltaPhi(MET))                                 : -9999.0;
  dphijjmet_      = (_isOk && _jetOk)            ? fabs((J1+J2).DeltaPhi(MET))                            : -9999.0;

  if (njet == 0){
    CleanJet_pt_0_ = 0;
    CleanJet_pt_1_ = 0;
    CleanJet_eta_0_ = 0;
    CleanJet_eta_1_ = 0;
    Jet_btagDeepFlavB_CleanJet_jetIdx_0_ = -2;
    Jet_btagDeepFlavB_CleanJet_jetIdx_1_ = -2;
  }
  else if (njet == 1){
    CleanJet_pt_0_ = CleanJet_pt->At(0);
    CleanJet_pt_1_ = 0;
    CleanJet_eta_0_ = CleanJet_eta->At(0);
    CleanJet_eta_1_ = 0;
    int jetIdx0 = CleanJet_jetIdx->At(0);
    Jet_btagDeepFlavB_CleanJet_jetIdx_0_ = jetIdx0 >= 0 ? Jet_btagDeepFlavB->At(jetIdx0) : -2;
    Jet_btagDeepFlavB_CleanJet_jetIdx_1_ = -2;
  }
  else {
    CleanJet_pt_0_ = CleanJet_pt->At(0);
    CleanJet_pt_1_ = CleanJet_pt->At(1);
    CleanJet_eta_0_ = CleanJet_eta->At(0);
    CleanJet_eta_1_ = CleanJet_eta->At(1);
    int jetIdx0 = CleanJet_jetIdx->At(0);
    int jetIdx1 = CleanJet_jetIdx->At(1);
    Jet_btagDeepFlavB_CleanJet_jetIdx_0_ = jetIdx0 >= 0 ? Jet_btagDeepFlavB->At(jetIdx0) : -2;
    Jet_btagDeepFlavB_CleanJet_jetIdx_1_ = jetIdx1 >= 0 ? Jet_btagDeepFlavB->At(jetIdx1) : -2;
  }
  
  if (variable == "WW_BDT_0j" || variable == "WW_BDT_1j" || variable == "WW_BDT_2j"){
    double classifier = reader->EvaluateMVA("BDT");
    return classifier;
  }

  // TEMP for debug
  else if (variable == "dphilmet1") return dphilmet1_;
  else if (variable == "dphilmet") return dphilmet_;
  else if (variable == "dphijet2met") return dphijet2met_;
  else if (variable == "dphijjmet") return dphijjmet_;
  else if (variable == "mtw1") return mtw1_;
  else if (variable == "dphillmet") return dphillmet_;
  else if (variable == "pTWW") return pTWW_;
  else if (variable == "pTHjj") return pTHjj_;

  else if (variable == "mtw2") return mtw2_;

  else if (variable == "mth"){
    float mth = _isOk ? sqrt(2.*ptll_*MET.Pt()*(1.-cos(dphillmet_))) : -9999.0;
    return mth;
  }

  else {
    std::cout << "Invalid variable! Supported variables are WW_BDT_0j, WW_BDT_1j, WW_BDT_2j, mtw1, mtw2, mth, dphillmet, pTWW, pTHjj" << std::endl;
    return -9999.0;
  }
}

void
METpatch::bindTree_(multidraw::FunctionLibrary& _library)
{
  _library.bindBranch(nCleanJet,        "nCleanJet");
  _library.bindBranch(CleanJet_pt,      "CleanJet_pt");
  _library.bindBranch(CleanJet_eta,     "CleanJet_eta");
  _library.bindBranch(CleanJet_phi,     "CleanJet_phi");
  _library.bindBranch(CleanJet_jetIdx,  "CleanJet_jetIdx");
  _library.bindBranch(Jet_btagDeepFlavB,"Jet_btagDeepFlavB");

  _library.bindBranch(Jet_mass, "Jet_mass");

  _library.bindBranch(nLepton,   "nLepton");
  _library.bindBranch(Lepton_pt, "Lepton_pt");
  _library.bindBranch(Lepton_eta,"Lepton_eta");
  _library.bindBranch(Lepton_phi,"Lepton_phi");

  _library.bindBranch(PuppiMET_pt, "PuppiMET_pt");
  _library.bindBranch(PuppiMET_phi,"PuppiMET_phi");

  _library.bindBranch(pt1,         "pt1");
  _library.bindBranch(pt2,         "pt2");
  _library.bindBranch(mll,         "mll");
  _library.bindBranch(ptll,        "ptll");
  _library.bindBranch(drll,        "drll");
  _library.bindBranch(dphill,      "dphill");
  _library.bindBranch(dphilljet,   "dphilljet");
  _library.bindBranch(mjj,         "mjj");
  _library.bindBranch(detajj,      "detajj");
  _library.bindBranch(dphijj,      "dphijj");
  _library.bindBranch(dphilep1jet1,"dphilep1jet1");
  _library.bindBranch(dphilep1jet2,"dphilep1jet2");
  _library.bindBranch(mindetajl,   "mindetajl");
    
  try{
    _library.bindBranch(CleanJet_mass,    "CleanJet_mass");
  }
  catch(...){
    isData = true;
  }
  std::cout << "Continuing on after try-catch for CleanJet_mass..." << std::endl;
}
#endif
