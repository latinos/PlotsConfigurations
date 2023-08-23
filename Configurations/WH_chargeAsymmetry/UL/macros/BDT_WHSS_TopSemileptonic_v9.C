#include "LatinoAnalysis/MultiDraw/interface/TTreeFunction.h"
#include "LatinoAnalysis/MultiDraw/interface/FunctionLibrary.h"

#include <iostream>

#include <TMVA/Reader.h>

using namespace std;

class BDT_WHSS_TopSemileptonic_v9 : public multidraw::TTreeFunction {
public:
  BDT_WHSS_TopSemileptonic_v9(TString BDT_name, TString xml_file_name);

  char const* getName() const override { return "BDT_WHSS_TopSemileptonic_v9"; }
  TTreeFunction* clone() const override { return new BDT_WHSS_TopSemileptonic_v9(BDT_name_, xml_file_name_); }

  unsigned getNdata() override { return 1; }
  double evaluate(unsigned) override;

protected:
  void bindTree_(multidraw::FunctionLibrary&) override;
  TString BDT_name_;
  TString xml_file_name_;

  FloatArrayReader* lep_pt{};
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
  FloatArrayReader* jet_pt{};
  FloatArrayReader* Jet_btagDeepB{};
  IntArrayReader*   CleanJet_jetIdx{};

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
  float Jet_btagDeepB_0_;
  float Jet_btagDeepB_1_;

  TMVA::Reader *reader = new TMVA::Reader();
};

BDT_WHSS_TopSemileptonic_v9::BDT_WHSS_TopSemileptonic_v9(TString BDT_name, TString xml_file_name) : TTreeFunction() 
{
  cout << "BDT name:      " << BDT_name      << endl;
  cout << "xml file name: " << xml_file_name << endl;

  BDT_name_      = BDT_name;
  xml_file_name_ = xml_file_name;

  reader->AddVariable("mll",                                        &mll_);
  reader->AddVariable("mjj",                                        &mjj_);
  reader->AddVariable("mtw1",                                       &mtw1_);
  reader->AddVariable("mtw2",                                       &mtw2_);
  reader->AddVariable("ptll",                                       &ptll_);
  reader->AddVariable("mlljj20_whss",                               &mlljj20_whss_);
  reader->AddVariable("PuppiMET_pt",                                &PuppiMET_pt_);
  reader->AddVariable("dphill",                                     &dphill_);
  reader->AddVariable("dphijj",                                     &dphijj_);
  reader->AddVariable("dphillmet",                                  &dphillmet_);
  reader->AddVariable("dphilmet2",                                  &dphilmet2_);
  reader->AddVariable("dphijet1met",                                &dphijet1met_);
  reader->AddVariable("Alt$(CleanJet_pt[0],0)",                     &jetpt1_);
  reader->AddVariable("Alt$(Jet_btagDeepB[CleanJet_jetIdx[0]],-2)", &Jet_btagDeepB_0_);
  reader->AddVariable("Alt$(Jet_btagDeepB[CleanJet_jetIdx[1]],-2)", &Jet_btagDeepB_1_);

  //  reader->BookMVA("BDTG_6","/eos/user/n/ntrevisa/www/plots/2022_08_11/plots_BDT_WHSS_noCorrelatedVariables/dataset_WHSS_noCorrelatedVariables/weights/TMVAClassification_BDTG_6.weights.xml"); 

  reader->BookMVA(BDT_name, xml_file_name);
}

double
BDT_WHSS_TopSemileptonic_v9::evaluate(unsigned)
{
  pt1_              = lep_pt->At(0);
  pt2_              = lep_pt->At(1);
  mll_              = *mll->Get();
  mjj_              = *mjj->Get();
  mtw1_             = *mtw1->Get();
  mtw2_             = *mtw2->Get();
  ptll_             = *ptll->Get();
  mlljj20_whss_     = *mlljj20_whss->Get();
  PuppiMET_pt_      = *PuppiMET_pt->Get();
  dphill_           = *dphill->Get();
  drll_             = *drll->Get();
  dphijj_           = *dphijj->Get();
  dphillmet_        = *dphillmet->Get();
  dphilmet2_        = *dphilmet2->Get();
  dphijet1met_      = *dphijet1met->Get();
  jetpt1_           = jet_pt->At(0);
  Jet_btagDeepB_0_  = CleanJet_jetIdx->At(0)>=0 ? Jet_btagDeepB->At(CleanJet_jetIdx->At(0)) : -2;
  Jet_btagDeepB_1_  = CleanJet_jetIdx->At(0)>=1 ? Jet_btagDeepB->At(CleanJet_jetIdx->At(1)) : -2;

  // double classifier = reader->EvaluateMVA("BDTG_6");
  double classifier = reader->EvaluateMVA(BDT_name_);

  return classifier;
}

void
BDT_WHSS_TopSemileptonic_v9::bindTree_(multidraw::FunctionLibrary& _library)
{
  _library.bindBranch(lep_pt,          "Lepton_pt");
  _library.bindBranch(mll,             "mll");
  _library.bindBranch(mjj,             "mjj");
  _library.bindBranch(mtw1,            "mtw1");
  _library.bindBranch(mtw2,            "mtw2");
  _library.bindBranch(ptll,            "ptll");
  _library.bindBranch(mlljj20_whss,    "mlljj20_whss");
  _library.bindBranch(PuppiMET_pt,     "PuppiMET_pt");
  _library.bindBranch(dphill,          "dphill");
  _library.bindBranch(drll,            "drll");
  _library.bindBranch(dphijj,          "dphijj");
  _library.bindBranch(dphillmet,       "dphillmet");
  _library.bindBranch(dphilmet2,       "dphilmet2");
  _library.bindBranch(dphijet1met,     "dphijet1met");
  _library.bindBranch(jet_pt,          "CleanJet_pt");
  _library.bindBranch(Jet_btagDeepB,   "Jet_btagDeepB");
  _library.bindBranch(CleanJet_jetIdx, "CleanJet_jetIdx");
  
}
