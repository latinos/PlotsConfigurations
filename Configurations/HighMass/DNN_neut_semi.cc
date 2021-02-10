#include "LatinoAnalysis/MultiDraw/interface/TTreeFunction.h"
#include "LatinoAnalysis/MultiDraw/interface/FunctionLibrary.h"
#include "NNEvaluation/DNNTensorflow/interface/DNNEvaluator.hh"

#include "TSystem.h"
#include "TMath.h"

using namespace NNEvaluation;

class DNNneut : public multidraw::TTreeFunction {
public:
  DNNneut();

  char const* getName() const override { return "DNNneut"; }
  TTreeFunction* clone() const override { return new DNNneut(); }

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
  FloatArrayReader* HM_CleanFatJetPassMBoosted_WptOvHfatM;
  FloatArrayReader* HM_CleanFatJetPassMBoosted_tau21;
  FloatValueReader* HM_Whad_pt;
  FloatValueReader* HM_Whad_eta;
  FloatValueReader* HM_Whad_phi;
  FloatValueReader* HM_Whad_mass;
  FloatValueReader* HM_Wlep_pt_Puppi;
  FloatValueReader* HM_Wlep_eta_Puppi;
  FloatValueReader* HM_Wlep_phi_Puppi;
  FloatValueReader* HM_Wlep_mass_Puppi;
  FloatValueReader* HM_Hlnjj_mass;
  FloatValueReader* HM_WptOvHak4M;
  FloatValueReader* tau21;
  IntValueReader* HM_idx_j1;
  IntValueReader* HM_idx_j2;

};

DNNneut::DNNneut() :
  TTreeFunction()
{
  std::string cmsswbase(gSystem->Getenv("CMSSW_BASE"));
  dnn_tensorflow0 = new DNNEvaluator(cmsswbase + "/src/PlotsConfigurations/Configurations/HighMass/DNNs/NeutSemi_0/", false);
  dnn_tensorflow1 = new DNNEvaluator(cmsswbase + "/src/PlotsConfigurations/Configurations/HighMass/DNNs/NeutSemi_1/", false);
}

double
DNNneut::evaluate(unsigned)
{
  std::vector<float> input{};
  float wpt, weta, wphi, wmass, WWmass, wptmww, tau21, wr1pt, wr1eta, wr1phi, wr2pt, wr2eta, wr2phi;
  unsigned wjet1, wjet2;
  std::vector<unsigned> vbfjet{};

  unsigned nCFJ{*HM_nCleanFatJetPassMBoosted->Get()};
  if (nCFJ >= 1){
    wpt = HM_CleanFatJetPassMBoosted_pt->At(0);
    weta = HM_CleanFatJetPassMBoosted_eta->At(0);
    wphi = HM_CleanFatJetPassMBoosted_phi->At(0);
    wmass = HM_CleanFatJetPassMBoosted_mass->At(0);
    WWmass = HM_CleanFatJetPassMBoosted_HlnFat_mass->At(0);
    wptmww = HM_CleanFatJetPassMBoosted_WptOvHfatM->At(0);
    tau21 = HM_CleanFatJetPassMBoosted_tau21->At(0);
    wr1pt = 0.0;
    wr1eta = 0.0;
    wr1phi = 0.0;
    wr2pt = 0.0;
    wr2eta = 0.0;
    wr2phi = 0.0;
    vbfjet.push_back(0);
    vbfjet.push_back(1);
  }else if (*HM_idx_j1->Get() != -1){
    wpt = *HM_Whad_pt->Get();
    weta = *HM_Whad_eta->Get();
    wphi = *HM_Whad_phi->Get();
    wmass = *HM_Whad_mass->Get();
    WWmass = *HM_Hlnjj_mass->Get();
    wptmww = *HM_WptOvHak4M->Get();
    tau21 = 0.0;
    wjet1 = *HM_idx_j1->Get();
    wjet2 = *HM_idx_j2->Get();
    wr1pt = CleanJet_pt->At(wjet1);
    wr1eta = CleanJet_eta->At(wjet1);
    wr1phi = CleanJet_phi->At(wjet1);
    wr2pt = CleanJet_pt->At(wjet2);
    wr2eta = CleanJet_eta->At(wjet2);
    wr2phi = CleanJet_phi->At(wjet2);
    //for (unsigned i{0}; i != 4; ++i) {
    //  if (i != wjet1 and i != wjet2){
    //    vbfjet.push_back(i);
    //  }
    //}
    // Mistake: Fix this later in next (final) DNN version
    vbfjet.push_back(0);
    vbfjet.push_back(1);
  }else{
    return 0.0;
  }

  float jetpt1 = 0.0;
  float jeteta1 = 0.0;
  float jetphi1 = 0.0;
  float jetpt2 = 0.0;
  float jeteta2 = 0.0;
  float jetphi2 = 0.0;
  unsigned nCJ{*nCleanJet->Get()};
  if (nCJ >= 1+vbfjet[0]){
    jetpt1 = CleanJet_pt->At(vbfjet[0]);
    jeteta1 = CleanJet_eta->At(vbfjet[0]);
    jetphi1 = CleanJet_phi->At(vbfjet[0]);
  }
  if (nCJ >= 1+vbfjet[1]){
    jetpt2 = CleanJet_pt->At(vbfjet[1]);
    jeteta2 = CleanJet_eta->At(vbfjet[1]);
    jetphi2 = CleanJet_phi->At(vbfjet[1]);
  }

  input.push_back(Lepton_pt->At(0) * TMath::Cos(Lepton_phi->At(0)));
  input.push_back(Lepton_pt->At(0) * TMath::Sin(Lepton_phi->At(0)));
  input.push_back(Lepton_pt->At(0) * TMath::SinH(Lepton_eta->At(0)));

  input.push_back(jetpt1 * TMath::Cos(jetphi1));
  input.push_back(jetpt1 * TMath::Sin(jetphi1));
  input.push_back(jetpt1 * TMath::SinH(jeteta1));
  input.push_back(jetpt2 * TMath::Cos(jetphi2));
  input.push_back(jetpt2 * TMath::Sin(jetphi2));
  input.push_back(jetpt2 * TMath::SinH(jeteta2));

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
  input.push_back(wptmww);
  input.push_back(tau21);
  input.push_back(WWmass);

  auto ev{*event->Get()};
  if (ev % 2 == 0){
    return dnn_tensorflow0->analyze(input);
  }else{
    return dnn_tensorflow1->analyze(input);
  }

}

void
DNNneut::bindTree_(multidraw::FunctionLibrary& _library)
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
  _library.bindBranch(HM_CleanFatJetPassMBoosted_WptOvHfatM, "HM_CleanFatJetPassMBoosted_WptOvHfatM");
  _library.bindBranch(HM_CleanFatJetPassMBoosted_tau21, "HM_CleanFatJetPassMBoosted_tau21");
  _library.bindBranch(HM_Whad_pt, "HM_Whad_pt");
  _library.bindBranch(HM_Whad_eta, "HM_Whad_eta");
  _library.bindBranch(HM_Whad_phi, "HM_Whad_phi");
  _library.bindBranch(HM_Whad_mass, "HM_Whad_mass");
  _library.bindBranch(HM_Wlep_pt_Puppi, "HM_Wlep_pt_Puppi");
  _library.bindBranch(HM_Wlep_eta_Puppi, "HM_Wlep_eta_Puppi");
  _library.bindBranch(HM_Wlep_phi_Puppi, "HM_Wlep_phi_Puppi");
  _library.bindBranch(HM_Wlep_mass_Puppi, "HM_Wlep_mass_Puppi");
  _library.bindBranch(HM_Hlnjj_mass, "HM_Hlnjj_mass");
  _library.bindBranch(HM_WptOvHak4M, "HM_WptOvHak4M");
  _library.bindBranch(HM_idx_j1, "HM_idx_j1");
  _library.bindBranch(HM_idx_j2, "HM_idx_j2");
}
