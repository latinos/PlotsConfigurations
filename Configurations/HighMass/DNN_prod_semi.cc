#include "LatinoAnalysis/MultiDraw/interface/TTreeFunction.h"
#include "LatinoAnalysis/MultiDraw/interface/FunctionLibrary.h"
#include "NNEvaluation/DNNTensorflow/interface/DNNEvaluator.hh"

#include "TLorentzVector.h"
#include "TSystem.h"
#include "TMath.h"

using namespace NNEvaluation;

class DNNprod : public multidraw::TTreeFunction {
public:
  DNNprod();

  char const* getName() const override { return "DNNprod"; }
  TTreeFunction* clone() const override { return new DNNprod(); }

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
  IntArrayReader* CleanJet_jetIdx;
  FloatArrayReader* Jet_mass;
  FloatValueReader* PuppiMET_pt;
  FloatValueReader* PuppiMET_phi;
  UIntValueReader* nCleanJet;
  UIntValueReader* HM_nCleanFatJetPassMBoosted;
  FloatArrayReader* HM_CleanFatJetPassMBoosted_pt;
  FloatArrayReader* HM_CleanFatJetPassMBoosted_eta;
  FloatArrayReader* HM_CleanFatJetPassMBoosted_phi;
  FloatArrayReader* HM_CleanFatJetPassMBoosted_mass;
  FloatArrayReader* HM_CleanFatJetPassMBoosted_HlnFat_mass;
  FloatValueReader* HM_Whad_pt;
  FloatValueReader* HM_Whad_eta;
  FloatValueReader* HM_Whad_phi;
  FloatValueReader* HM_Whad_mass;
  FloatValueReader* HM_Wlep_pt_Puppi;
  FloatValueReader* HM_Wlep_eta_Puppi;
  FloatValueReader* HM_Wlep_phi_Puppi;
  FloatValueReader* HM_Wlep_mass_Puppi;
  FloatValueReader* HM_Hlnjj_mass;
  IntValueReader* HM_idx_j1;
  IntValueReader* HM_idx_j2;
  FloatValueReader* mjj;
  FloatValueReader* detajj;
  FloatValueReader* HM_largest_nonW_mjj;

};

DNNprod::DNNprod() :
  TTreeFunction()
{
  std::string cmsswbase(gSystem->Getenv("CMSSW_BASE"));
  dnn_tensorflow0 = new DNNEvaluator(cmsswbase + "/src/PlotsConfigurations/Configurations/HighMass/DNNs/ProdSemi_0/", false);
  dnn_tensorflow1 = new DNNEvaluator(cmsswbase + "/src/PlotsConfigurations/Configurations/HighMass/DNNs/ProdSemi_1/", false);
}

double
DNNprod::evaluate(unsigned)
{
  std::vector<float> input{};
  float wpt, weta, wphi, wmass, WWmass, wr1pt, wr1eta, wr1phi, wr2pt, wr2eta, wr2phi, MyMjj, MyDetajj;
  unsigned wjet1, wjet2;
  std::vector<unsigned> vbfjet{};
  TLorentzVector J1,J2;

  unsigned nCFJ{*HM_nCleanFatJetPassMBoosted->Get()};
  if (nCFJ >= 1){
    wpt = HM_CleanFatJetPassMBoosted_pt->At(0);
    weta = HM_CleanFatJetPassMBoosted_eta->At(0);
    wphi = HM_CleanFatJetPassMBoosted_phi->At(0);
    wmass = HM_CleanFatJetPassMBoosted_mass->At(0);
    WWmass = HM_CleanFatJetPassMBoosted_HlnFat_mass->At(0);
    wr1pt = 0.0;
    wr1eta = 0.0;
    wr1phi = 0.0;
    wr2pt = 0.0;
    wr2eta = 0.0;
    wr2phi = 0.0;
    vbfjet.push_back(0);
    vbfjet.push_back(1);
  }else{
    wpt = *HM_Whad_pt->Get();
    if (wpt < 0.0){
      return 0.0;
    }
    weta = *HM_Whad_eta->Get();
    wphi = *HM_Whad_phi->Get();
    wmass = *HM_Whad_mass->Get();
    WWmass = *HM_Hlnjj_mass->Get();
    wjet1 = *HM_idx_j1->Get();
    wjet2 = *HM_idx_j2->Get();
    wr1pt = CleanJet_pt->At(wjet1);
    wr1eta = CleanJet_eta->At(wjet1);
    wr1phi = CleanJet_phi->At(wjet1);
    wr2pt = CleanJet_pt->At(wjet2);
    wr2eta = CleanJet_eta->At(wjet2);
    wr2phi = CleanJet_phi->At(wjet2);
    for (unsigned i{0}; i != 4; ++i) {
      if (i != wjet1 and i != wjet2){
        vbfjet.push_back(i);
      }
    }
  }

  unsigned nCJ{*nCleanJet->Get()};
  if (vbfjet[0]==1 and vbfjet[1]==2){
    MyMjj = *mjj->Get();
    MyDetajj = *detajj->Get();
  }else if (nCJ > 1+vbfjet[1]){
    J1.SetPtEtaPhiM(CleanJet_pt->At(vbfjet[0]), CleanJet_eta->At(vbfjet[0]), CleanJet_phi->At(vbfjet[0]), Jet_mass->At( CleanJet_jetIdx->At(vbfjet[0]) ));
    J2.SetPtEtaPhiM(CleanJet_pt->At(vbfjet[1]), CleanJet_eta->At(vbfjet[1]), CleanJet_phi->At(vbfjet[1]), Jet_mass->At( CleanJet_jetIdx->At(vbfjet[1]) ));
    MyMjj = (J1+J2).M();
    MyDetajj = abs(J1.Eta()-J2.Eta());
  }else{
    MyMjj = -9999.0;
    MyDetajj = -9999.0;
  }


  input.push_back(Lepton_pt->At(0) * TMath::Cos(Lepton_phi->At(0)));
  input.push_back(Lepton_pt->At(0) * TMath::Sin(Lepton_phi->At(0)));
  input.push_back(Lepton_pt->At(0) * TMath::SinH(Lepton_eta->At(0)));

  if (nCJ >= 1+vbfjet[0]){
    input.push_back(CleanJet_pt->At(vbfjet[0]) * TMath::Cos(CleanJet_phi->At(vbfjet[0])));
    input.push_back(CleanJet_pt->At(vbfjet[0]) * TMath::Sin(CleanJet_phi->At(vbfjet[0])));
    input.push_back(CleanJet_pt->At(vbfjet[0]) * TMath::SinH(CleanJet_eta->At(vbfjet[0])));
  }else{
    input.push_back(0.0);
    input.push_back(0.0);
    input.push_back(0.0);
  }
  if (nCJ >= 1+vbfjet[1]){
    input.push_back(CleanJet_pt->At(vbfjet[1]) * TMath::Cos(CleanJet_phi->At(vbfjet[1])));
    input.push_back(CleanJet_pt->At(vbfjet[1]) * TMath::Sin(CleanJet_phi->At(vbfjet[1])));
    input.push_back(CleanJet_pt->At(vbfjet[1]) * TMath::SinH(CleanJet_eta->At(vbfjet[1])));
  }else{
    input.push_back(0.0);
    input.push_back(0.0);
    input.push_back(0.0);
  }

  input.push_back(wpt * TMath::Cos(wphi));
  input.push_back(wpt * TMath::Sin(wphi));
  input.push_back(wpt * TMath::SinH(weta));
  input.push_back(wmass);
  input.push_back(*HM_Wlep_pt_Puppi->Get() * TMath::Cos(*HM_Wlep_phi_Puppi->Get()));
  input.push_back(*HM_Wlep_pt_Puppi->Get() * TMath::Sin(*HM_Wlep_phi_Puppi->Get()));
  input.push_back(*HM_Wlep_pt_Puppi->Get() * TMath::SinH(*HM_Wlep_eta_Puppi->Get()));
  input.push_back(*HM_Wlep_mass_Puppi->Get());
  input.push_back(wr1pt * TMath::Cos(wr1phi));
  input.push_back(wr1pt * TMath::Sin(wr1phi));
  input.push_back(wr1pt * TMath::SinH(wr1eta));
  input.push_back(wr2pt * TMath::Cos(wr2phi));
  input.push_back(wr2pt * TMath::Sin(wr2phi));
  input.push_back(wr2pt * TMath::SinH(wr2eta));

  input.push_back(*PuppiMET_pt->Get() * TMath::Cos(*PuppiMET_phi->Get()));
  input.push_back(*PuppiMET_pt->Get() * TMath::Sin(*PuppiMET_phi->Get()));
  input.push_back(*nCleanJet->Get());
  input.push_back(MyMjj);
  input.push_back(*HM_largest_nonW_mjj->Get());
  input.push_back(MyDetajj);
  input.push_back(WWmass);

  auto ev{*event->Get()};
  if (ev % 2 == 0){
    return dnn_tensorflow0->analyze(input);
  }else{
    return dnn_tensorflow1->analyze(input);
  }

}

void
DNNprod::bindTree_(multidraw::FunctionLibrary& _library)
{
  _library.bindBranch(event, "event");
  _library.bindBranch(Lepton_pt, "Lepton_pt");
  _library.bindBranch(Lepton_eta, "Lepton_eta");
  _library.bindBranch(Lepton_phi, "Lepton_phi");
  _library.bindBranch(CleanJet_pt, "CleanJet_pt");
  _library.bindBranch(CleanJet_eta, "CleanJet_eta");
  _library.bindBranch(CleanJet_phi, "CleanJet_phi");
  _library.bindBranch(CleanJet_jetIdx, "CleanJet_jetIdx");
  _library.bindBranch(Jet_mass, "Jet_mass");
  _library.bindBranch(PuppiMET_pt, "PuppiMET_pt");
  _library.bindBranch(PuppiMET_phi, "PuppiMET_phi");
  _library.bindBranch(nCleanJet, "nCleanJet");
  _library.bindBranch(HM_nCleanFatJetPassMBoosted, "nCleanFatJetPassMBoosted");
  _library.bindBranch(HM_CleanFatJetPassMBoosted_pt, "CleanFatJetPassMBoosted_pt");
  _library.bindBranch(HM_CleanFatJetPassMBoosted_eta, "CleanFatJetPassMBoosted_eta");
  _library.bindBranch(HM_CleanFatJetPassMBoosted_phi, "CleanFatJetPassMBoosted_phi");
  _library.bindBranch(HM_CleanFatJetPassMBoosted_mass, "CleanFatJetPassMBoosted_mass");
  _library.bindBranch(HM_CleanFatJetPassMBoosted_HlnFat_mass, "CleanFatJetPassMBoosted_HlnFat_mass");
  _library.bindBranch(HM_Whad_pt, "Whad_pt");
  _library.bindBranch(HM_Whad_eta, "Whad_eta");
  _library.bindBranch(HM_Whad_phi, "Whad_phi");
  _library.bindBranch(HM_Whad_mass, "Whad_mass");
  _library.bindBranch(HM_Wlep_pt_Puppi, "Wlep_pt_Puppi");
  _library.bindBranch(HM_Wlep_eta_Puppi, "Wlep_eta_Puppi");
  _library.bindBranch(HM_Wlep_phi_Puppi, "Wlep_phi_Puppi");
  _library.bindBranch(HM_Wlep_mass_Puppi, "Wlep_mass_Puppi");
  _library.bindBranch(HM_Hlnjj_mass, "Hlnjj_mass");
  _library.bindBranch(HM_idx_j1, "idx_j1");
  _library.bindBranch(HM_idx_j2, "idx_j2");
  _library.bindBranch(mjj, "mjj");
  _library.bindBranch(detajj, "detajj");
  _library.bindBranch(HM_largest_nonW_mjj, "largest_nonW_mjj");
}
