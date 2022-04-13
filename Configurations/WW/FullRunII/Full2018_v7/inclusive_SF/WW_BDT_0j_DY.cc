#include "LatinoAnalysis/MultiDraw/interface/TTreeFunction.h"
#include "LatinoAnalysis/MultiDraw/interface/FunctionLibrary.h"

#include <iostream>

#include <TMVA/Reader.h>

using namespace std;

class ww_dy_bdt_0j : public multidraw::TTreeFunction {
public:
  ww_dy_bdt_0j();

  char const* getName() const override { return "ww_dy_bdt_0j"; }
  TTreeFunction* clone() const override { return new ww_dy_bdt_0j(); }

  unsigned getNdata() override { return 1; }
  double evaluate(unsigned) override;

protected:
  void bindTree_(multidraw::FunctionLibrary&) override;

  FloatArrayReader* Lepton_pt{};
  FloatArrayReader* Lepton_eta{};
  FloatValueReader* ptll{};
  FloatValueReader* drll{};
  FloatValueReader* PuppiMET_pt{};
  FloatValueReader* TkMET_pt{};
  FloatValueReader* mpmet{};
  FloatValueReader* projpfmet{};
  FloatValueReader* projtkmet{};
  FloatValueReader* dphill{};
  FloatValueReader* dphilmet{};
  FloatValueReader* dphillmet{};
  FloatValueReader* mth{};
  FloatValueReader* mtw1{};
  FloatValueReader* mtw2{};
  FloatValueReader* pTWW{};

  
  // Variables fed into the BDT
  float Lepton_pt_0_;
  float Lepton_pt_1_;
  float Lepton_eta_0_;
  float Lepton_eta_1_;
  float ptll_;
  float drll_;
  float PuppiMET_pt_;
  float mpmet_;
  float projpfmet_;
  float projtkmet_;
  float TkMET_pt_;
  float dphill_; 
  float dphilmet_;
  float dphillmet_;
  float mth_;
  float mtw1_;
  float mtw2_;
  float pTWW_;

  TMVA::Reader *reader = new TMVA::Reader();
};

ww_dy_bdt_0j::ww_dy_bdt_0j() : TTreeFunction() 
{
  reader->AddVariable("Lepton_pt[0]", &Lepton_pt_0_);
  reader->AddVariable("Lepton_pt[1]", &Lepton_pt_1_);
  reader->AddVariable("Lepton_eta[0]", &Lepton_eta_0_);
  reader->AddVariable("Lepton_eta[1]", &Lepton_eta_1_);
  reader->AddVariable("TkMET_pt", &TkMET_pt_);
  reader->AddVariable("mpmet", &mpmet_);
  reader->AddVariable("projpfmet", &projpfmet_);
  reader->AddVariable("projtkmet", &projtkmet_);
  reader->AddVariable("ptll", &ptll_); 
  reader->AddVariable("drll", &drll_);
  reader->AddVariable("dphill", &dphill_);
  reader->AddVariable("dphilmet", &dphilmet_);  
  reader->AddVariable("dphillmet", &dphillmet_);
  reader->AddVariable("PuppiMET_pt", &PuppiMET_pt_);
  reader->AddVariable("mth", &mth_);	
  reader->AddVariable("mtw1", &mtw1_);	
  reader->AddVariable("mtw2", &mtw2_);	
  reader->AddVariable("pTWW", &pTWW_);

  reader->BookMVA("BDT","/eos/user/f/fernanpe/TrainingWW/0jet_ZVeto/TMVA_BDT_DY_v1/weights/TMVAClassification_BDTG4D3.weights.xml");

}

double
ww_dy_bdt_0j::evaluate(unsigned)
{
  Lepton_pt_0_ = Lepton_pt->At(0);
  Lepton_pt_1_ = Lepton_pt->At(1);
  Lepton_eta_0_ = Lepton_eta->At(0);
  Lepton_eta_1_ = Lepton_eta->At(1);
  ptll_ = *ptll->Get();
  drll_ = *drll->Get();
  PuppiMET_pt_ = *PuppiMET_pt->Get();
  TkMET_pt_ = *TkMET_pt->Get();
  mpmet_ = *mpmet->Get();
  projpfmet_ = *projpfmet->Get();
  projtkmet_ = *projtkmet->Get();
  dphill_ = *dphill->Get();
  dphilmet_ = *dphilmet->Get();	
  dphillmet_ = *dphillmet->Get();
  mth_ = *mth->Get();
  mtw1_ = *mtw1->Get();
  mtw2_ = *mtw2->Get();
  pTWW_ = *pTWW->Get();
    
  double classifier = reader->EvaluateMVA("BDT");
    //double classifier = pt1_ + mll_ + drll_ + dphillmet_ + mtw1_ + mtw2_ + pTWW_ + pTHjj_ + mjj_ + detajj_ + dphijj_ + dphijet2met_ + dphijjmet_ + dphilep1jet1_ + dphilep1jet2_ + mindetajl_ + CleanJet_pt_0_ + CleanJet_pt_1_ + CleanJet_eta_0_ + CleanJet_eta_1_ + Jet_btagDeepB_CleanJet_jetIdx_0_ +Jet_btagDeepB_CleanJet_jetIdx_1_;

  return classifier;
}

void
ww_dy_bdt_0j::bindTree_(multidraw::FunctionLibrary& _library)
{
  _library.bindBranch(Lepton_pt,"Lepton_pt");
  _library.bindBranch(Lepton_eta,"Lepton_eta");
  _library.bindBranch(ptll,"ptll");
  _library.bindBranch(drll,"drll");
  _library.bindBranch(PuppiMET_pt,"PuppiMET_pt");
  _library.bindBranch(TkMET_pt,"TkMET_pt");
  _library.bindBranch(mpmet,"mpmet");
  _library.bindBranch(projpfmet,"projpfmet");
  _library.bindBranch(projtkmet,"projtkmet");
  _library.bindBranch(dphill,"dphill");
  _library.bindBranch(dphilmet,"dphilmet");
  _library.bindBranch(dphillmet,"dphillmet");
  _library.bindBranch(mth,"mth");
  _library.bindBranch(mtw1,"mtw1");
  _library.bindBranch(mtw2,"mtw2");
  _library.bindBranch(pTWW,"pTWW");
  
}
