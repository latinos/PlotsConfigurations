#include "LatinoAnalysis/MultiDraw/interface/TTreeFunction.h"
#include "LatinoAnalysis/MultiDraw/interface/FunctionLibrary.h"
#include "NNEvaluation/DNNTensorflow/interface/DNNEvaluator.hh"

#include "TSystem.h"
#include "TMath.h"
#include "TLorentzVector.h"

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
  FloatValueReader* mTi;
  FloatValueReader* mll;
  FloatValueReader* ht;
  FloatValueReader* vht_pt;
  FloatValueReader* vht_phi;

};

DNNprod::DNNprod() :
  TTreeFunction()
{
  std::string cmsswbase(gSystem->Getenv("CMSSW_BASE"));
  dnn_tensorflow0 = new DNNEvaluator(cmsswbase + "/src/PlotsConfigurations/Configurations/HighMass/DNNs/Prod_0/", false);
  dnn_tensorflow1 = new DNNEvaluator(cmsswbase + "/src/PlotsConfigurations/Configurations/HighMass/DNNs/Prod_1/", false);
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

  if (nJet>=1){
    jetpt1 = CleanJet_pt->At(0);
    jeteta1 = CleanJet_eta->At(0);
    jetphi1 = CleanJet_phi->At(0);
    jetmass1 = Jet_mass->At(CleanJet_jetIdx->At(0));
    LorJ1.SetPtEtaPhiM(jetpt1, jeteta1, jetphi1, jetmass1);
  }
  if (nJet>=2){
    jetpt2 = CleanJet_pt->At(1);
    jeteta2 = CleanJet_eta->At(1);
    jetphi2 = CleanJet_phi->At(1);
    jetmass2 = Jet_mass->At(CleanJet_jetIdx->At(1));
    LorJ2.SetPtEtaPhiM(jetpt2, jeteta2, jetphi2, jetmass2);
    mjj_12 = (LorJ1+LorJ2).M();
    detajj_12 = abs(LorJ1.Eta()-LorJ2.Eta());
  }
  if (nJet>=3){
    jetpt3 = CleanJet_pt->At(2);
    jeteta3 = CleanJet_eta->At(2);
    jetphi3 = CleanJet_phi->At(2);
    jetmass3 = Jet_mass->At(CleanJet_jetIdx->At(2));
    LorJ3.SetPtEtaPhiM(jetpt3, jeteta3, jetphi3, jetmass3);
    mjj_13 = (LorJ1+LorJ3).M();
    detajj_13 = abs(LorJ1.Eta()-LorJ3.Eta());
    mjj_23 = (LorJ2+LorJ3).M();
    detajj_23 = abs(LorJ2.Eta()-LorJ3.Eta());
  }
  if (nJet>=4){
    jetpt4 = CleanJet_pt->At(3);
    jeteta4 = CleanJet_eta->At(3);
    jetphi4 = CleanJet_phi->At(3);
    jetmass4 = Jet_mass->At(CleanJet_jetIdx->At(3));
    LorJ4.SetPtEtaPhiM(jetpt4, jeteta4, jetphi4, jetmass4);
    mjj_14 = (LorJ1+LorJ4).M();
    detajj_14 = abs(LorJ1.Eta()-LorJ4.Eta());
    mjj_24 = (LorJ2+LorJ4).M();
    detajj_24 = abs(LorJ2.Eta()-LorJ4.Eta());
    mjj_34 = (LorJ3+LorJ4).M();
    detajj_34 = abs(LorJ3.Eta()-LorJ4.Eta());
  }



  std::vector<float> input{};

  input.push_back(Lepton_pt->At(0) * TMath::Cos(Lepton_phi->At(0)));
  input.push_back(Lepton_pt->At(0) * TMath::Sin(Lepton_phi->At(0)));
  input.push_back(Lepton_pt->At(0) * TMath::SinH(Lepton_eta->At(0)));
  input.push_back(Lepton_pt->At(1) * TMath::Cos(Lepton_phi->At(1)));
  input.push_back(Lepton_pt->At(1) * TMath::Sin(Lepton_phi->At(1)));
  input.push_back(Lepton_pt->At(1) * TMath::SinH(Lepton_eta->At(1)));

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

  input.push_back(*PuppiMET_pt->Get() * TMath::Cos(*PuppiMET_phi->Get()));
  input.push_back(*PuppiMET_pt->Get() * TMath::Sin(*PuppiMET_phi->Get()));
  input.push_back(*nCleanJet->Get());
  input.push_back(njet30);
  input.push_back(*mTi->Get());
  input.push_back(*mll->Get());
  input.push_back(*ht->Get());
  input.push_back(*vht_pt->Get() * TMath::Cos(*vht_phi->Get()));
  input.push_back(*vht_pt->Get() * TMath::Sin(*vht_phi->Get()));

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
    //std::cout << dnn_tensorflow0->analyze(input) << std::endl;
    return dnn_tensorflow0->analyze(input);
  }else{
    //std::cout << dnn_tensorflow1->analyze(input) << std::endl;
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
  _library.bindBranch(mTi, "mTi");
  _library.bindBranch(mll, "mll");
  _library.bindBranch(ht, "ht");
  _library.bindBranch(vht_pt, "vht_pt");
  _library.bindBranch(vht_phi, "vht_phi");
}
