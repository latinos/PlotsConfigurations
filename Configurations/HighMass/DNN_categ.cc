#include "LatinoAnalysis/MultiDraw/interface/TTreeFunction.h"
#include "LatinoAnalysis/MultiDraw/interface/FunctionLibrary.h"
#include "NNEvaluation/DNNTensorflow/interface/DNNEvaluator.hh"

#include "TSystem.h"
#include "TMath.h"

using namespace NNEvaluation;

class DNNcateg : public multidraw::TTreeFunction {
public:
  DNNcateg(int outvar);

  char const* getName() const override { return "DNNcateg"; }
  TTreeFunction* clone() const override { return new DNNcateg(outvar_); }

  int outvar_;
  unsigned getNdata() override { return 1; }
  double evaluate(unsigned) override;

protected:
  void bindTree_(multidraw::FunctionLibrary&) override;

  DNNEvaluator* dnn_tensorflow0;
  DNNEvaluator* dnn_tensorflow1;

  ULong64ValueReader* event;
  FloatArrayReader* Lepton_pt;
  FloatArrayReader* Lepton_eta;
  FloatArrayReader* Lepton_phi;
  FloatArrayReader* CleanJet_pt;
  FloatArrayReader* CleanJet_eta;
  FloatArrayReader* CleanJet_phi;
  FloatValueReader* PuppiMET_pt;
  FloatValueReader* PuppiMET_phi;
  UIntValueReader* nCleanJet;
  FloatValueReader* detajj;
  FloatValueReader* dphill;
  FloatValueReader* drll;
  FloatValueReader* dphilmet;
  FloatValueReader* dphilmet1;
  FloatValueReader* dphilmet2;
  FloatValueReader* mjj;
  FloatValueReader* mll;
  FloatValueReader* mTi;
  FloatValueReader* mth;
  FloatValueReader* ht;
  FloatValueReader* mtw1;
  FloatValueReader* mtw2;
  FloatValueReader* ptll;
  FloatValueReader* mcoll;
  FloatValueReader* mcollWW;
  FloatValueReader* vht_pt;
  FloatValueReader* vht_phi;

};

DNNcateg::DNNcateg(int outvar) :
  outvar_(outvar)
{
  std::string cmsswbase(gSystem->Getenv("CMSSW_BASE"));
  dnn_tensorflow0 = new DNNEvaluator(cmsswbase + "/src/PlotsConfigurations/Configurations/HighMass/DNNs/Categ_0/", outvar_, false);
  dnn_tensorflow1 = new DNNEvaluator(cmsswbase + "/src/PlotsConfigurations/Configurations/HighMass/DNNs/Categ_1/", outvar_, false);
}

double
DNNcateg::evaluate(unsigned)
{
  std::vector<float> input{};

  input.push_back(Lepton_pt->At(0) * TMath::Cos(Lepton_phi->At(0)));
  input.push_back(Lepton_pt->At(0) * TMath::Sin(Lepton_phi->At(0)));
  input.push_back(Lepton_pt->At(0) * TMath::SinH(Lepton_eta->At(0)));
  input.push_back(Lepton_pt->At(1) * TMath::Cos(Lepton_phi->At(1)));
  input.push_back(Lepton_pt->At(1) * TMath::Sin(Lepton_phi->At(1)));
  input.push_back(Lepton_pt->At(1) * TMath::SinH(Lepton_eta->At(1)));

  unsigned nCJ{*nCleanJet->Get()};
  if (nCJ >= 1){
    input.push_back(CleanJet_pt->At(0) * TMath::Cos(CleanJet_phi->At(0)));
    input.push_back(CleanJet_pt->At(0) * TMath::Sin(CleanJet_phi->At(0)));
    input.push_back(CleanJet_pt->At(0) * TMath::SinH(CleanJet_eta->At(0)));
  }else{
    input.push_back(0.0);
    input.push_back(0.0);
    input.push_back(0.0);
  }
  if (nCJ >= 2){
    input.push_back(CleanJet_pt->At(1) * TMath::Cos(CleanJet_phi->At(1)));
    input.push_back(CleanJet_pt->At(1) * TMath::Sin(CleanJet_phi->At(1)));
    input.push_back(CleanJet_pt->At(1) * TMath::SinH(CleanJet_eta->At(1)));
  }else{
    input.push_back(0.0);
    input.push_back(0.0);
    input.push_back(0.0);
  }

  input.push_back(*PuppiMET_pt->Get() * TMath::Cos(*PuppiMET_phi->Get()));
  input.push_back(*PuppiMET_pt->Get() * TMath::Sin(*PuppiMET_phi->Get()));
  input.push_back(*nCleanJet->Get());
  input.push_back(*detajj->Get());
  input.push_back(*dphill->Get());
  input.push_back(*drll->Get());
  input.push_back(*dphilmet->Get());
  input.push_back(*dphilmet1->Get());
  input.push_back(*dphilmet2->Get());
  input.push_back(*mjj->Get());
  input.push_back(*mll->Get());
  input.push_back(*mTi->Get());
  input.push_back(*mth->Get());
  input.push_back(*ht->Get());
  input.push_back(*mtw1->Get());
  input.push_back(*mtw2->Get());
  input.push_back(*ptll->Get());
  input.push_back(*mcoll->Get());
  input.push_back(*mcollWW->Get());
  input.push_back(*vht_pt->Get() * TMath::Cos(*vht_phi->Get()));
  input.push_back(*vht_pt->Get() * TMath::Sin(*vht_phi->Get()));

  auto ev{*event->Get()};
  if (ev % 2 == 0){
    return dnn_tensorflow0->analyze(input);
  }else{
    return dnn_tensorflow1->analyze(input);
  }

}

void
DNNcateg::bindTree_(multidraw::FunctionLibrary& _library)
{
  _library.bindBranch(event, "event");
  _library.bindBranch(Lepton_pt, "Lepton_pt");
  _library.bindBranch(Lepton_eta, "Lepton_eta");
  _library.bindBranch(Lepton_phi, "Lepton_phi");
  _library.bindBranch(CleanJet_pt, "CleanJet_pt");
  _library.bindBranch(CleanJet_eta, "CleanJet_eta");
  _library.bindBranch(CleanJet_phi, "CleanJet_phi");
  _library.bindBranch(PuppiMET_pt, "PuppiMET_pt");
  _library.bindBranch(PuppiMET_phi, "PuppiMET_phi");
  _library.bindBranch(nCleanJet, "nCleanJet");
  _library.bindBranch(detajj, "detajj");
  _library.bindBranch(dphill, "dphill");
  _library.bindBranch(drll, "drll");
  _library.bindBranch(dphilmet, "dphilmet");
  _library.bindBranch(dphilmet1, "dphilmet1");
  _library.bindBranch(dphilmet2, "dphilmet2");
  _library.bindBranch(mjj, "mjj");
  _library.bindBranch(mll, "mll");
  _library.bindBranch(mTi, "mTi");
  _library.bindBranch(mth, "mth");
  _library.bindBranch(ht, "ht");
  _library.bindBranch(mtw1, "mtw1");
  _library.bindBranch(mtw2, "mtw2");
  _library.bindBranch(ptll, "ptll");
  _library.bindBranch(mcoll, "mcoll");
  _library.bindBranch(mcollWW, "mcollWW");
  _library.bindBranch(vht_pt, "vht_pt");
  _library.bindBranch(vht_phi, "vht_phi");
}
