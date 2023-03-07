#include "LatinoAnalysis/MultiDraw/interface/TTreeFunction.h"
#include "LatinoAnalysis/MultiDraw/interface/FunctionLibrary.h"

#include <iostream>
#include <algorithm>
#include <string>
#include <cmath>
#include <memory>
#include <sys/stat.h>

#include <TMVA/Reader.h>

using namespace std;

class BDT_WH3l_SSSF_v9 : public multidraw::TTreeFunction {
public:
  BDT_WH3l_SSSF_v9(TString BDT_name, TString xml_file_name);

  char const* getName() const override { return "BDT_WH3l_SSSF_v9"; }
  TTreeFunction* clone() const override { return new BDT_WH3l_SSSF_v9(BDT_name_, xml_file_name_); }

  unsigned getNdata() override { return 1; }
  double evaluate(unsigned) override;

protected:
  void bindTree_(multidraw::FunctionLibrary&) override;
  TString BDT_name_;
  TString xml_file_name_;

  // Names we give to the variables we read from the nanoLatino trees
  FloatValueReader* WH3l_dphilllmet{};
  FloatArrayReader* WH3l_mOSll{};
  FloatArrayReader* WH3l_ptOSll{};
  FloatArrayReader* WH3l_drOSll{};
  FloatArrayReader* WH3l_dphilmet{};
  FloatValueReader* WH3l_ptWWW{};
  FloatArrayReader* Jet_btagDeepB{};
  IntArrayReader*   CleanJet_jetIdx{};
  FloatValueReader* PuppiMET_pt{};
  FloatArrayReader* Lepton_pt{};

  // Variables we need to evaluate the BDT
  float WH3l_dphilllmet_;
  float WH3l_mOSll_min_;
  float WH3l_ptOSll_min_;
  float WH3l_drOSll_min_;

  // float Jet_btagDeepB_0_;
  // float Jet_btagDeepB_1_;

  float WH3l_dphilmet_0_;
  float WH3l_dphilmet_1_;
  float WH3l_dphilmet_2_;
  float WH3l_ptWWW_;
  float PuppiMET_pt_;
  float Lepton_pt_0_;
  float Lepton_pt_1_;
  float Lepton_pt_2_;

  TMVA::Reader *reader = new TMVA::Reader();
};

// Define content of the variable we will use to evaluate the BDT
BDT_WH3l_SSSF_v9::BDT_WH3l_SSSF_v9(TString BDT_name, TString xml_file_name) : TTreeFunction() {

  cout << "BDT name:      " << BDT_name      << endl;
  cout << "xml file name: " << xml_file_name << endl;

  BDT_name_      = BDT_name;
  xml_file_name_ = xml_file_name;

  reader->AddVariable("WH3l_dphilllmet",                                  &WH3l_dphilllmet_);
  reader->AddVariable("MinIf$(WH3l_mOSll[],  WH3l_mOSll[Iteration$]>0)",  &WH3l_mOSll_min_);
  reader->AddVariable("MinIf$(WH3l_ptOSll[], WH3l_ptOSll[Iteration$]>0)", &WH3l_ptOSll_min_);
  reader->AddVariable("MinIf$(WH3l_drOSll[], WH3l_drOSll[Iteration$]>0)", &WH3l_drOSll_min_);

  // reader->AddVariable("Alt$(Jet_btagDeepB[CleanJet_jetIdx[0]],-2)",       &Jet_btagDeepB_0_);
  // reader->AddVariable("Alt$(Jet_btagDeepB[CleanJet_jetIdx[1]],-2)",       &Jet_btagDeepB_1_);

  reader->AddVariable("WH3l_dphilmet[0]",                                 &WH3l_dphilmet_0_);
  reader->AddVariable("WH3l_dphilmet[1]",                                 &WH3l_dphilmet_1_);
  reader->AddVariable("WH3l_dphilmet[2]",                                 &WH3l_dphilmet_2_);
  reader->AddVariable("WH3l_ptWWW",                                       &WH3l_ptWWW_);
  reader->AddVariable("PuppiMET_pt",                                      &PuppiMET_pt_);
  reader->AddVariable("Alt$(Lepton_pt[0],0)",                             &Lepton_pt_0_);
  reader->AddVariable("Alt$(Lepton_pt[1],0)",                             &Lepton_pt_1_);
  reader->AddVariable("Alt$(Lepton_pt[2],0)",                             &Lepton_pt_2_);

  // Once we decide the final BDT, we will have to put the weights in the 
  // /afs/cern.ch/user/n/ntrevisa/work/latinos/unblinding/CMSSW_10_6_4/src/PlotsConfigurations/Configurations/WH_chargeAsymmetry/UL/data
  // directory and use a relative path
  // reader->BookMVA("BDTG4SK01_1000Trees_02baggingfraction","/afs/cern.ch/user/n/ntrevisa/work/latinos/unblinding/CMSSW_10_6_4/src/PlotsConfigurations/Configurations/WH_chargeAsymmetry/UL/Full2018_v9/BDTconfig_WH3l/datasetSSSF/weights/TMVAClassification_BDTG4SK01_1000Trees_02baggingfraction.weights.xml");

  reader->BookMVA(BDT_name, xml_file_name);
}

// Evaluate the BDT
double BDT_WH3l_SSSF_v9::evaluate(unsigned){
  
  WH3l_dphilllmet_  = *WH3l_dphilllmet->Get();
  WH3l_mOSll_min_   = std::min({WH3l_mOSll->At(0),  WH3l_mOSll->At(1),  WH3l_mOSll->At(2)});
  WH3l_ptOSll_min_  = std::min({WH3l_ptOSll->At(0), WH3l_ptOSll->At(1), WH3l_ptOSll->At(2)});
  WH3l_drOSll_min_  = std::min({WH3l_drOSll->At(0), WH3l_drOSll->At(1), WH3l_drOSll->At(2)});

  // Jet_btagDeepB_0_  = CleanJet_jetIdx->At(0)>=0 ? Jet_btagDeepB->At(CleanJet_jetIdx->At(0)) : -2;
  // Jet_btagDeepB_1_  = CleanJet_jetIdx->At(0)>=1 ? Jet_btagDeepB->At(CleanJet_jetIdx->At(1)) : -2;

  WH3l_dphilmet_0_  = WH3l_dphilmet->At(0);
  WH3l_dphilmet_1_  = WH3l_dphilmet->At(1);
  WH3l_dphilmet_2_  = WH3l_dphilmet->At(2);
  WH3l_ptWWW_       = *WH3l_ptWWW->Get();
  PuppiMET_pt_      = *PuppiMET_pt->Get();
  Lepton_pt_0_      = Lepton_pt->At(0);
  Lepton_pt_1_      = Lepton_pt->At(1);
  Lepton_pt_2_      = Lepton_pt->At(2);

  //  double classifier = reader->EvaluateMVA("BDTG4SK01_1000Trees_02baggingfraction");
  double classifier = reader->EvaluateMVA(BDT_name_);

  return classifier;
}

// Variables in the nanoLatino trees
void BDT_WH3l_SSSF_v9::bindTree_(multidraw::FunctionLibrary& _library){

  _library.bindBranch(WH3l_dphilllmet, "WH3l_dphilllmet");
  _library.bindBranch(WH3l_mOSll,      "WH3l_mOSll");
  _library.bindBranch(WH3l_ptOSll,     "WH3l_ptOSll");
  _library.bindBranch(WH3l_drOSll,     "WH3l_drOSll");
  _library.bindBranch(Jet_btagDeepB,   "Jet_btagDeepB");
  _library.bindBranch(CleanJet_jetIdx, "CleanJet_jetIdx");
  _library.bindBranch(WH3l_dphilmet,   "WH3l_dphilmet");
  _library.bindBranch(WH3l_ptWWW,      "WH3l_ptWWW");
  _library.bindBranch(PuppiMET_pt,     "PuppiMET_pt");
  _library.bindBranch(Lepton_pt,       "Lepton_pt");
}
