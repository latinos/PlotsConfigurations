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

  unsigned nJet{*nCleanJet->Get()};
  float njet30 = 0.0;
  for (unsigned iJet{0}; iJet != nJet; ++iJet){  
    if (CleanJet_pt->At(iJet) >= 30.0){
      njet30 = njet30+1.0;
    }else{
      break;
    }
  }

  float jetpt1 = 0.0;
  float jeteta1 = 0.0;
  float jetphi1 = 0.0;
  float jetmass1 = 0.0;
  float jetpt2 = 0.0;
  float jeteta2 = 0.0;
  float jetphi2 = 0.0;
  float jetmass2 = 0.0;
  float jetpt3 = 0.0;
  float jeteta3 = 0.0;
  float jetphi3 = 0.0;
  float jetmass3 = 0.0;
  float jetpt4 = 0.0;
  float jeteta4 = 0.0;
  float jetphi4 = 0.0;
  float jetmass4 = 0.0;
  float mjj_12 = 0.0;
  float detajj_12 = 0.0;
  float mjj_13 = 0.0;
  float detajj_13 = 0.0;
  float mjj_23 = 0.0;
  float detajj_23 = 0.0;
  float mjj_14 = 0.0;
  float detajj_14 = 0.0;
  float mjj_24 = 0.0;
  float detajj_24 = 0.0;
  float mjj_34 = 0.0;
  float detajj_34 = 0.0;
  TLorentzVector LorJ1,LorJ2,LorJ3,LorJ4;

  std::vector<float> input{};
  float wpt, weta, wphi, wmass, WWmass, wr1pt, wr1eta, wr1phi, wr1mass, wr2pt, wr2eta, wr2phi, wr2mass;
  unsigned wjet1, wjet2;
  std::vector<int> vbfjet = {-1, -1, -1, -1};
  unsigned j = 0;
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
    wr1mass = 0.0;
    wr2pt = 0.0;
    wr2eta = 0.0;
    wr2phi = 0.0;
    wr2mass = 0.0;
    for (int i{0}; i != 4 and i != nJet ; ++i) {
      vbfjet[i] = i;
    }
  }else if (*HM_idx_j1->Get() != -1){
    wpt = *HM_Whad_pt->Get();
    weta = *HM_Whad_eta->Get();
    wphi = *HM_Whad_phi->Get();
    wmass = *HM_Whad_mass->Get();
    WWmass = *HM_Hlnjj_mass->Get();
    wjet1 = *HM_idx_j1->Get();
    wjet2 = *HM_idx_j2->Get();
    wr1pt = CleanJet_pt->At(wjet1);
    wr1eta = CleanJet_eta->At(wjet1);
    wr1phi = CleanJet_phi->At(wjet1);
    wr1mass = Jet_mass->At(CleanJet_phi->At(wjet1));
    wr2pt = CleanJet_pt->At(wjet2);
    wr2eta = CleanJet_eta->At(wjet2);
    wr2phi = CleanJet_phi->At(wjet2);
    wr2mass = Jet_mass->At(CleanJet_phi->At(wjet2));
    for (int i{0}; j != 4 and i != nJet ; ++i) {
      if (i != wjet1 and i != wjet2){
        vbfjet[j] = i;
        j++;
      }
    }
  }else{
    return 0.0;
  }

  if (vbfjet[0]>-1){
    jetpt1 = CleanJet_pt->At(vbfjet[0]);
    jeteta1 = CleanJet_eta->At(vbfjet[0]);
    jetphi1 = CleanJet_phi->At(vbfjet[0]);
    jetmass1 = Jet_mass->At(CleanJet_jetIdx->At(vbfjet[0]));
    LorJ1.SetPtEtaPhiM(jetpt1, jeteta1, jetphi1, jetmass1);
  }
  if (vbfjet[1]>-1){
    jetpt2 = CleanJet_pt->At(vbfjet[1]);
    jeteta2 = CleanJet_eta->At(vbfjet[1]);
    jetphi2 = CleanJet_phi->At(vbfjet[1]);
    jetmass2 = Jet_mass->At(CleanJet_jetIdx->At(vbfjet[1]));
    LorJ2.SetPtEtaPhiM(jetpt2, jeteta2, jetphi2, jetmass2);
    mjj_12 = (LorJ1+LorJ2).M();
    detajj_12 = abs(LorJ1.Eta()-LorJ2.Eta());
  }
  if (vbfjet[2]>-1){
    jetpt3 = CleanJet_pt->At(vbfjet[2]);
    jeteta3 = CleanJet_eta->At(vbfjet[2]);
    jetphi3 = CleanJet_phi->At(vbfjet[2]);
    jetmass3 = Jet_mass->At(CleanJet_jetIdx->At(vbfjet[2]));
    LorJ3.SetPtEtaPhiM(jetpt3, jeteta3, jetphi3, jetmass3);
    mjj_13 = (LorJ1+LorJ3).M();
    detajj_13 = abs(LorJ1.Eta()-LorJ3.Eta());
    mjj_23 = (LorJ2+LorJ3).M();
    detajj_23 = abs(LorJ2.Eta()-LorJ3.Eta());
  }
  if (vbfjet[3]>-1){
    jetpt4 = CleanJet_pt->At(vbfjet[3]);
    jeteta4 = CleanJet_eta->At(vbfjet[3]);
    jetphi4 = CleanJet_phi->At(vbfjet[3]);
    jetmass4 = Jet_mass->At(CleanJet_jetIdx->At(vbfjet[3]));
    LorJ4.SetPtEtaPhiM(jetpt4, jeteta4, jetphi4, jetmass4);
    mjj_14 = (LorJ1+LorJ4).M();
    detajj_14 = abs(LorJ1.Eta()-LorJ4.Eta());
    mjj_24 = (LorJ2+LorJ4).M();
    detajj_24 = abs(LorJ2.Eta()-LorJ4.Eta());
    mjj_34 = (LorJ3+LorJ4).M();
    detajj_34 = abs(LorJ3.Eta()-LorJ4.Eta());
  }


  input.push_back(Lepton_pt->At(0) * TMath::Cos(Lepton_phi->At(0)));
  input.push_back(Lepton_pt->At(0) * TMath::Sin(Lepton_phi->At(0)));
  input.push_back(Lepton_pt->At(0) * TMath::SinH(Lepton_eta->At(0)));

  input.push_back(jetpt1 * TMath::Cos(jetphi1));
  input.push_back(jetpt1 * TMath::Sin(jetphi1));
  input.push_back(jetpt1 * TMath::SinH(jeteta1));
  input.push_back(jetmass1);
  input.push_back(jetpt2 * TMath::Cos(jetphi2));
  input.push_back(jetpt2 * TMath::Sin(jetphi2));
  input.push_back(jetpt2 * TMath::SinH(jeteta2));
  input.push_back(jetmass2);
  input.push_back(jetpt3 * TMath::Cos(jetphi3));
  input.push_back(jetpt3 * TMath::Sin(jetphi3));
  input.push_back(jetpt3 * TMath::SinH(jeteta3));
  input.push_back(jetmass3);
  input.push_back(jetpt4 * TMath::Cos(jetphi4));
  input.push_back(jetpt4 * TMath::Sin(jetphi4));
  input.push_back(jetpt4 * TMath::SinH(jeteta4));
  input.push_back(jetmass4);

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
  input.push_back(wr1mass);
  input.push_back(wr2pt * TMath::Cos(wr2phi));
  input.push_back(wr2pt * TMath::Sin(wr2phi));
  input.push_back(wr2pt * TMath::SinH(wr2eta));
  input.push_back(wr2mass);

  input.push_back(*PuppiMET_pt->Get() * TMath::Cos(*PuppiMET_phi->Get()));
  input.push_back(*PuppiMET_pt->Get() * TMath::Sin(*PuppiMET_phi->Get()));
  input.push_back(*nCleanJet->Get());
  input.push_back(njet30);
  input.push_back(*HM_largest_nonW_mjj->Get());
  input.push_back(WWmass);

  input.push_back(mjj_12);
  input.push_back(detajj_12);
  input.push_back(mjj_13);
  input.push_back(detajj_13);
  input.push_back(mjj_14);
  input.push_back(detajj_14);
  input.push_back(mjj_23);
  input.push_back(detajj_23);
  input.push_back(mjj_24);
  input.push_back(detajj_24);
  input.push_back(mjj_34);
  input.push_back(detajj_34);

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
  _library.bindBranch(HM_nCleanFatJetPassMBoosted, "HM_nCleanFatJetPassMBoosted");
  _library.bindBranch(HM_CleanFatJetPassMBoosted_pt, "HM_CleanFatJetPassMBoosted_pt");
  _library.bindBranch(HM_CleanFatJetPassMBoosted_eta, "HM_CleanFatJetPassMBoosted_eta");
  _library.bindBranch(HM_CleanFatJetPassMBoosted_phi, "HM_CleanFatJetPassMBoosted_phi");
  _library.bindBranch(HM_CleanFatJetPassMBoosted_mass, "HM_CleanFatJetPassMBoosted_mass");
  _library.bindBranch(HM_CleanFatJetPassMBoosted_HlnFat_mass, "HM_CleanFatJetPassMBoosted_HlnFat_mass");
  _library.bindBranch(HM_Whad_pt, "HM_Whad_pt");
  _library.bindBranch(HM_Whad_eta, "HM_Whad_eta");
  _library.bindBranch(HM_Whad_phi, "HM_Whad_phi");
  _library.bindBranch(HM_Whad_mass, "HM_Whad_mass");
  _library.bindBranch(HM_Wlep_pt_Puppi, "HM_Wlep_pt_Puppi");
  _library.bindBranch(HM_Wlep_eta_Puppi, "HM_Wlep_eta_Puppi");
  _library.bindBranch(HM_Wlep_phi_Puppi, "HM_Wlep_phi_Puppi");
  _library.bindBranch(HM_Wlep_mass_Puppi, "HM_Wlep_mass_Puppi");
  _library.bindBranch(HM_Hlnjj_mass, "HM_Hlnjj_mass");
  _library.bindBranch(HM_idx_j1, "HM_idx_j1");
  _library.bindBranch(HM_idx_j2, "HM_idx_j2");
  _library.bindBranch(HM_largest_nonW_mjj, "HM_largest_nonW_mjj");
}
