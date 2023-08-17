#include "LatinoAnalysis/MultiDraw/interface/TTreeFunction.h"
#include "LatinoAnalysis/MultiDraw/interface/FunctionLibrary.h"

#include <iostream>

#include <TMVA/Reader.h>

using namespace std;

class ww_dy_bdt_2j : public multidraw::TTreeFunction {
public:
  ww_dy_bdt_2j();

  char const* getName() const override { return "ww_dy_bdt_2j"; }
  TTreeFunction* clone() const override { return new ww_dy_bdt_2j(); }

  unsigned getNdata() override { return 1; }
  double evaluate(unsigned) override;

protected:
  void bindTree_(multidraw::FunctionLibrary&) override;

  FloatArrayReader* Lepton_pt{};
  FloatArrayReader* Lepton_eta{};
  FloatArrayReader* CleanJet_pt{};
  FloatArrayReader* CleanJet_eta{};
  FloatArrayReader* CleanJet_phi{};
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
  //
  FloatValueReader* pTHjj{};
  FloatValueReader* dphilljet{};
  FloatValueReader* dphilljetjet{};
  FloatValueReader* mjj{};
  FloatValueReader* detajj{};
  FloatValueReader* dphijj{};
  FloatValueReader* dphijjmet{};
  FloatValueReader* dphijet1met{};
  FloatValueReader* dphijet2met{};
  FloatValueReader* dphilep1jet1{};
  FloatValueReader* dphilep1jet2{};
  FloatValueReader* dphilep2jet1{};
  FloatValueReader* dphilep2jet2{};
  FloatValueReader* maxdphilepjj{};
  FloatValueReader* dphilep2jj{};
  FloatValueReader* dphilep1jj{};
  FloatValueReader* mindetajl{};

  // Variables fed into the BDT
  float Lepton_pt_0_;
  float Lepton_pt_1_;
  float Lepton_eta_0_;
  float Lepton_eta_1_;
  float Alt__CleanJet_pt_0_;
  float Alt__CleanJet_eta_0_;
  float Alt__CleanJet_phi_0_;
  float Alt__CleanJet_pt_1_;
  float Alt__CleanJet_eta_1_;
  float Alt__CleanJet_phi_1_;
  //
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
  //
  float pTHjj_;
  float dphilljet_;
  float dphilljetjet_;
  float mjj_;
  float detajj_;
  float dphijj_;
  float dphijet1met_;
  float dphijet2met_;
  float dphijjmet_;
  float dphilep1jet1_;
  float dphilep1jet2_;
  float dphilep2jet1_;
  float dphilep2jet2_;
  float maxdphilepjj_;
  float dphilep2jj_;
  float dphilep1jj_;
  float mindetajl_;

  TMVA::Reader *reader = new TMVA::Reader();
};

ww_dy_bdt_2j::ww_dy_bdt_2j() : TTreeFunction() 
{
  reader->AddVariable("Lepton_pt[0]", &Lepton_pt_0_);
  reader->AddVariable("Lepton_pt[1]", &Lepton_pt_1_);
  reader->AddVariable("Lepton_eta[0]", &Lepton_eta_0_);
  reader->AddVariable("Lepton_eta[1]", &Lepton_eta_1_);
  reader->AddVariable("PuppiMET_pt", &PuppiMET_pt_);
  reader->AddVariable("TkMET_pt", &TkMET_pt_);
  reader->AddVariable("mpmet", &mpmet_);
  reader->AddVariable("projpfmet", &projpfmet_);
  reader->AddVariable("projtkmet", &projtkmet_);
  reader->AddVariable("ptll", &ptll_); 
  reader->AddVariable("drll", &drll_);
  reader->AddVariable("dphill", &dphill_);
  reader->AddVariable("dphilmet", &dphilmet_);  
  reader->AddVariable("dphillmet", &dphillmet_);
  reader->AddVariable("mtw1", &mtw1_);	
  reader->AddVariable("mth", &mth_);	
  reader->AddVariable("mtw2", &mtw2_);	
  reader->AddVariable("pTWW", &pTWW_);
  reader->AddVariable("pTHjj", &pTHjj_);
  reader->AddVariable("dphilljet", &dphilljet_);
  reader->AddVariable("dphilljetjet", &dphilljetjet_);
  reader->AddVariable("mjj", &mjj_);
  reader->AddVariable("detajj", &detajj_);
  reader->AddVariable("dphijj", &dphijj_);
  reader->AddVariable("dphijet1met", &dphijet1met_);
  reader->AddVariable("dphijet2met", &dphijet2met_);
  reader->AddVariable("dphijjmet", &dphijjmet_);
  reader->AddVariable("dphilep1jet1", &dphilep1jet1_);
  reader->AddVariable("dphilep1jet2", &dphilep1jet2_);
  reader->AddVariable("dphilep2jet1", &dphilep2jet1_);
  reader->AddVariable("dphilep2jet2", &dphilep2jet2_);
  reader->AddVariable("maxdphilepjj", &maxdphilepjj_);
  reader->AddVariable("dphilep2jj", &dphilep2jj_);
  reader->AddVariable("dphilep1jj", &dphilep1jj_);
  reader->AddVariable("mindetajl", &mindetajl_);
  reader->AddVariable("Alt$(CleanJet_pt[0],0)", &Alt__CleanJet_pt_0_);
  reader->AddVariable("Alt$(CleanJet_pt[1],0)", &Alt__CleanJet_pt_1_);
  reader->AddVariable("Alt$(CleanJet_eta[0],0)", &Alt__CleanJet_eta_0_);
  reader->AddVariable("Alt$(CleanJet_eta[1],0)", &Alt__CleanJet_eta_1_);
  reader->AddVariable("Alt$(CleanJet_phi[0],0)", &Alt__CleanJet_phi_0_);
  reader->AddVariable("Alt$(CleanJet_phi[1],0)", &Alt__CleanJet_phi_1_);

  reader->BookMVA("BDT","/eos/user/f/fernanpe/TrainingWW/2jet_ZVeto/TMVA_BDT_DY_v1/weights/TMVAClassification_BDTG4D3.weights.xml");

}

double
ww_dy_bdt_2j::evaluate(unsigned)
{

  Alt__CleanJet_pt_0_ = CleanJet_pt->At(0);
  Alt__CleanJet_eta_0_ = CleanJet_eta->At(0);
  Alt__CleanJet_phi_0_ = CleanJet_phi->At(0);
  Alt__CleanJet_pt_1_ = CleanJet_pt->At(1);
  Alt__CleanJet_eta_1_ = CleanJet_eta->At(1);
  Alt__CleanJet_phi_1_ = CleanJet_phi->At(1);
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
  pTHjj_ = *pTHjj->Get();
  dphilljet_ = *dphilljet->Get();
  dphilljetjet_ = *dphilljetjet->Get();
  mjj_ = *mjj->Get();
  detajj_ = *detajj->Get();
  dphijj_ = *dphijj->Get();
  dphijet1met_ = *dphijet1met->Get();
  dphijet2met_ = *dphijet2met->Get();
  dphijjmet_ = *dphijjmet->Get();
  dphilep1jet1_ = *dphilep1jet1->Get();
  dphilep1jet2_ = *dphilep1jet2->Get();
  dphilep2jet1_ = *dphilep2jet1->Get();
  dphilep2jet2_ = *dphilep2jet2->Get();
  maxdphilepjj_ = *maxdphilepjj->Get();
  dphilep2jj_ = *dphilep2jj->Get();
  dphilep1jj_ = *dphilep1jj->Get();
  mindetajl_ = *mindetajl->Get();

  double classifier = reader->EvaluateMVA("BDT");
  return classifier;
}

void
ww_dy_bdt_2j::bindTree_(multidraw::FunctionLibrary& _library)
{


  _library.bindBranch(Lepton_pt,"Lepton_pt");
  _library.bindBranch(Lepton_eta,"Lepton_eta");
  _library.bindBranch(CleanJet_pt,"CleanJet_pt");
  _library.bindBranch(CleanJet_eta,"CleanJet_eta");
  _library.bindBranch(CleanJet_phi,"CleanJet_phi");
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
  _library.bindBranch(pTHjj,"pTHjj");
  _library.bindBranch(dphilljet,"dphilljet");
  _library.bindBranch(dphilljetjet,"dphilljetjet");
  _library.bindBranch(mjj,"mjj");
  _library.bindBranch(detajj,"detajj");
  _library.bindBranch(dphijj,"dphijj");
  _library.bindBranch(dphijet1met,"dphijet1met");
  _library.bindBranch(dphijet2met,"dphijet2met");
  _library.bindBranch(dphijjmet,"dphijjmet");
  _library.bindBranch(dphilep1jet1,"dphilep1jet1");
  _library.bindBranch(dphilep1jet2,"dphilep1jet2");
  _library.bindBranch(dphilep2jet1,"dphilep2jet1");
  _library.bindBranch(dphilep2jet2,"dphilep2jet2");
  _library.bindBranch(maxdphilepjj,"maxdphilepjj");
  _library.bindBranch(dphilep2jj,"dphilep2jj");
  _library.bindBranch(dphilep1jj,"dphilep1jj");
  _library.bindBranch(mindetajl,"mindetajl");


}
