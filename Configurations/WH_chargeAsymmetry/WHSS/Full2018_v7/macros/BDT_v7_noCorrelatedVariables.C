#include "LatinoAnalysis/MultiDraw/interface/TTreeFunction.h"
#include "LatinoAnalysis/MultiDraw/interface/FunctionLibrary.h"

#include <iostream>

#include <TMVA/Reader.h>

using namespace std;

class BDT_v7_noCorrelatedVariables : public multidraw::TTreeFunction {
public:
  BDT_v7_noCorrelatedVariables();

  char const* getName() const override { return "BDT_v7_noCorrelatedVariables"; }
  TTreeFunction* clone() const override { return new BDT_v7_noCorrelatedVariables(); }

  unsigned getNdata() override { return 1; }
  double evaluate(unsigned) override;

protected:
  void bindTree_(multidraw::FunctionLibrary&) override;

  FloatArrayReader* lep_pt{};
  // FloatValueReader* pt2{};
  FloatValueReader* mll{};
  FloatValueReader* mjj{};
  FloatValueReader* mtw1{};
  FloatValueReader* mtw2{};
  FloatValueReader* ptll{};
  FloatValueReader* mlljj20_whss{};
  FloatValueReader* PuppiMET_pt{};
  FloatValueReader* dphill{};
  FloatValueReader* drll{};
  FloatValueReader* dphijj{};
  FloatValueReader* dphillmet{};
  FloatValueReader* dphilmet2{};
  FloatValueReader* dphijet1met{};
  // FloatValueReader* jetpt1{};
  FloatArrayReader* jet_pt{};

  // Variables fed into the BDT
  float pt1_;
  float pt2_;
  float mll_;
  float mjj_;
  float mtw1_;
  float mtw2_;
  float ptll_;
  float mlljj20_whss_;
  float PuppiMET_pt_;
  float dphill_;
  float drll_;
  float dphijj_;
  float dphillmet_;
  float dphilmet2_;
  float dphijet1met_;
  float jetpt1_;

  TMVA::Reader *reader = new TMVA::Reader();
};

BDT_v7_noCorrelatedVariables::BDT_v7_noCorrelatedVariables() : TTreeFunction() 
{
  reader->AddVariable("Alt$(Lepton_pt[0],0)",   &pt1_);
  reader->AddVariable("Alt$(Lepton_pt[1],0)",   &pt2_);
  reader->AddVariable("mll",                    &mll_);
  reader->AddVariable("mjj",                    &mjj_);
  reader->AddVariable("mtw1",                   &mtw1_);
  reader->AddVariable("mtw2",                   &mtw2_);
  reader->AddVariable("ptll",                   &ptll_);
  reader->AddVariable("mlljj20_whss",           &mlljj20_whss_);
  reader->AddVariable("PuppiMET_pt",            &PuppiMET_pt_);
  reader->AddVariable("dphill",                 &dphill_);
  reader->AddVariable("drll",                   &drll_);
  reader->AddVariable("dphijj",                 &dphijj_);
  reader->AddVariable("dphillmet",              &dphillmet_);
  reader->AddVariable("dphilmet2",              &dphilmet2_);
  reader->AddVariable("dphijet1met",            &dphijet1met_);
  reader->AddVariable("Alt$(CleanJet_pt[0],0)", &jetpt1_);

  reader->BookMVA("BDTG_6","/eos/user/n/ntrevisa/www/plots/2022_08_11/plots_BDT_WHSS_noCorrelatedVariables/dataset_WHSS_noCorrelatedVariables/weights/TMVAClassification_BDTG_6.weights.xml"); 
}

double
BDT_v7_noCorrelatedVariables::evaluate(unsigned)
{
  pt1_          = lep_pt->At(0);
  pt2_          = lep_pt->At(1);
  mll_          = *mll->Get();
  mjj_          = *mjj->Get();
  mtw1_         = *mtw1->Get();
  mtw2_         = *mtw2->Get();
  ptll_         = *ptll->Get();
  mlljj20_whss_ = *mlljj20_whss->Get();
  PuppiMET_pt_  = *PuppiMET_pt->Get();
  dphill_       = *dphill->Get();
  drll_         = *drll->Get();
  dphijj_       = *dphijj->Get();
  dphillmet_    = *dphillmet->Get();
  dphilmet2_    = *dphilmet2->Get();
  dphijet1met_  = *dphijet1met->Get();
  jetpt1_       = jet_pt->At(0);

  double classifier = reader->EvaluateMVA("BDTG_6");

  return classifier;
}

void
BDT_v7_noCorrelatedVariables::bindTree_(multidraw::FunctionLibrary& _library)
{
  _library.bindBranch(lep_pt,       "Lepton_pt");
  // _library.bindBranch(pt2,          "";
  _library.bindBranch(mll,          "mll");
  _library.bindBranch(mjj,          "mjj");
  _library.bindBranch(mtw1,         "mtw1");
  _library.bindBranch(mtw2,         "mtw2");
  _library.bindBranch(ptll,         "ptll");
  _library.bindBranch(mlljj20_whss, "mlljj20_whss");
  _library.bindBranch(PuppiMET_pt,  "PuppiMET_pt");
  _library.bindBranch(dphill,       "dphill");
  _library.bindBranch(drll,         "drll");
  _library.bindBranch(dphijj,       "dphijj");
  _library.bindBranch(dphillmet,    "dphillmet");
  _library.bindBranch(dphilmet2,    "dphilmet2");
  _library.bindBranch(dphijet1met,  "dphijet1met");
  _library.bindBranch(jet_pt,       "CleanJet_pt");
  
}
