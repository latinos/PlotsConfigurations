#include "LatinoAnalysis/MultiDraw/interface/TTreeFunction.h"
#include "LatinoAnalysis/MultiDraw/interface/FunctionLibrary.h"

#include <iostream>

#include <TMVA/Reader.h>

using namespace std;

class ww_top_bdt_2j : public multidraw::TTreeFunction {
public:
  ww_top_bdt_2j();

  char const* getName() const override { return "ww_top_bdt_2j"; }
  TTreeFunction* clone() const override { return new ww_top_bdt_2j(); }

  unsigned getNdata() override { return 1; }
  double evaluate(unsigned) override;

protected:
  void bindTree_(multidraw::FunctionLibrary&) override;

  FloatValueReader* pt1{};
  FloatValueReader* mll{};
  FloatValueReader* drll{};
  FloatValueReader* dphillmet{};
  FloatValueReader* mtw1{};
  FloatValueReader* mtw2{};
  FloatValueReader* pTWW{};
  FloatValueReader* pTHjj{};
  FloatValueReader* mjj{};
  FloatValueReader* detajj{};
  FloatValueReader* dphijj{};
  FloatValueReader* dphijet2met{};
  FloatValueReader* dphijjmet{};
  FloatValueReader* dphilep1jet1{};
  FloatValueReader* dphilep1jet2{};
  FloatValueReader* mindetajl{};
  UIntValueReader* nCleanJet{};
  FloatArrayReader* CleanJet_pt{};
  FloatArrayReader* CleanJet_eta{};
  FloatArrayReader* Jet_btagDeepFlavB{};
  IntArrayReader* CleanJet_jetIdx{};

  // Variables fed into the BDT
  float pt1_;
  float mll_;
  float drll_;
  float dphillmet_;
  float mtw1_;
  float mtw2_;
  float pTWW_;
  float pTHjj_;
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
};

ww_top_bdt_2j::ww_top_bdt_2j() : TTreeFunction() 
{
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

  reader->BookMVA("BDT","/afs/cern.ch/user/s/ssaumya/public/WeightFiles/BDT_MergedTrainingDeepJet/2jet/TMVAClassification_BDTG4D3.weights.xml"); 

}

double
ww_top_bdt_2j::evaluate(unsigned)
{
    pt1_ = *pt1->Get();
    mll_ = *mll->Get();
    drll_ = *drll->Get();
    dphillmet_ = *dphillmet->Get();
    mtw1_ = *mtw1->Get();
    mtw2_ = *mtw2->Get();
    pTWW_ = *pTWW->Get();
    pTHjj_ = *pTHjj->Get();
    mjj_ = *mjj->Get();
    detajj_ = *detajj->Get();
    dphijj_ = *dphijj->Get();
    dphijet2met_ = *dphijet2met->Get();
    dphijjmet_ = *dphijjmet->Get();
    dphilep1jet1_ = *dphilep1jet1->Get();
    dphilep1jet2_ = *dphilep1jet2->Get();
    mindetajl_ = *mindetajl->Get();

    unsigned njet = *nCleanJet->Get();

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

    double classifier = reader->EvaluateMVA("BDT");
    //double classifier = pt1_ + mll_ + drll_ + dphillmet_ + mtw1_ + mtw2_ + pTWW_ + pTHjj_ + mjj_ + detajj_ + dphijj_ + dphijet2met_ + dphijjmet_ + dphilep1jet1_ + dphilep1jet2_ + mindetajl_ + CleanJet_pt_0_ + CleanJet_pt_1_ + CleanJet_eta_0_ + CleanJet_eta_1_ + Jet_btagDeepB_CleanJet_jetIdx_0_ +Jet_btagDeepB_CleanJet_jetIdx_1_;

    return classifier;
}

void
ww_top_bdt_2j::bindTree_(multidraw::FunctionLibrary& _library)
{
  _library.bindBranch(pt1,"pt1");
  _library.bindBranch(mll,"mll");
  _library.bindBranch(drll,"drll");
  _library.bindBranch(dphillmet,"dphillmet");
  _library.bindBranch(mtw1,"mtw1");
  _library.bindBranch(mtw2,"mtw2");
  _library.bindBranch(pTWW,"pTWW");
  _library.bindBranch(pTHjj,"pTHjj");
  _library.bindBranch(mjj,"mjj");
  _library.bindBranch(detajj,"detajj");
  _library.bindBranch(dphijj,"dphijj");
  _library.bindBranch(dphijet2met,"dphijet2met");
  _library.bindBranch(dphijjmet,"dphijjmet");
  _library.bindBranch(dphilep1jet1,"dphilep1jet1");
  _library.bindBranch(dphilep1jet2,"dphilep1jet2");
  _library.bindBranch(mindetajl,"mindetajl");
  _library.bindBranch(nCleanJet,"nCleanJet");
  _library.bindBranch(CleanJet_pt,"CleanJet_pt");
  _library.bindBranch(CleanJet_eta,"CleanJet_eta");
  _library.bindBranch(Jet_btagDeepFlavB,"Jet_btagDeepFlavB");
  _library.bindBranch(CleanJet_jetIdx,"CleanJet_jetIdx");
  
}
