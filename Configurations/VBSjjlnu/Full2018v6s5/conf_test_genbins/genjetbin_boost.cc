#include "LatinoAnalysis/MultiDraw/interface/TTreeFunction.h"
#include "LatinoAnalysis/MultiDraw/interface/FunctionLibrary.h"

#include <vector>

#include "TVector2.h"
#include "Math/Vector4Dfwd.h"
#include "Math/GenVector/LorentzVector.h"
#include "Math/GenVector/PtEtaPhiM4D.h"

#include <iostream>

class GenJetBin_boost : public multidraw::TTreeFunction {
public:
  GenJetBin_boost();

  char const* getName() const override { return "GenJetBin_boost"; }
  TTreeFunction* clone() const override { return new GenJetBin_boost(); }

  unsigned getNdata() override { return 1; }
  double evaluate(unsigned) override;

protected:
  void bindTree_(multidraw::FunctionLibrary&) override;

  UIntValueReader* nLeptonGen{};
  BoolArrayReader* LeptonGen_isPrompt{};
  // IntArrayReader* DressedLepton_pdgId{};
  // FloatArrayReader* DressedLepton_pt{};
  // FloatArrayReader* DressedLepton_eta{};
  // FloatArrayReader* DressedLepton_phi{};
  // FloatArrayReader* DressedLepton_mass{};
  IntArrayReader* LeptonGen_pdgId{};
  FloatArrayReader* LeptonGen_pt{};
  FloatArrayReader* LeptonGen_eta{};
  FloatArrayReader* LeptonGen_phi{};
  FloatArrayReader* LeptonGen_mass{};
  UIntValueReader* nPhotonGen{};
  FloatArrayReader* PhotonGen_pt{};
  FloatArrayReader* PhotonGen_eta{};
  FloatArrayReader* PhotonGen_phi{};
  FloatArrayReader* PhotonGen_mass{};
  UIntValueReader* nGenJet{};
  FloatArrayReader* GenJet_pt{};
  FloatArrayReader* GenJet_eta{};
  FloatArrayReader* GenJet_phi{};
  FloatArrayReader* GenJet_mass{};
};

GenJetBin_boost::GenJetBin_boost() :
  TTreeFunction()
{
}

double
GenJetBin_boost::evaluate(unsigned)
{
  unsigned nJ{*nGenJet->Get()};
  
  unsigned nL{*nLeptonGen->Get()};

  std::vector<unsigned> iPromptL{};
  iPromptL.reserve(nL);

  for (unsigned iL{0}; iL != nL; ++iL) {
    if (!LeptonGen_isPrompt->At(iL))
      continue;

    unsigned absId{static_cast<unsigned>(std::abs(LeptonGen_pdgId->At(iL)))};
    if (absId != 11 && absId != 13)
      continue;

    iPromptL.push_back(iL);
  }

  std::vector<ROOT::Math::PtEtaPhiMVector> genJets;

  if (iPromptL.size() == 0) {
    unsigned n{0};
    for (unsigned iJ{0}; iJ != nJ; ++iJ) {
      if (GenJet_pt->At(iJ) > 30.)
        genJets.emplace_back(
          GenJet_pt->At(iJ),
          GenJet_eta->At(iJ),
          GenJet_phi->At(iJ),
          GenJet_mass->At(iJ)
        );
    }
  }

  std::vector<ROOT::Math::PtEtaPhiMVector> dressedLeptons{};
  for (unsigned iL : iPromptL) {
    dressedLeptons.emplace_back(
      LeptonGen_pt->At(iL),
      LeptonGen_eta->At(iL),
      LeptonGen_phi->At(iL),
      LeptonGen_mass->At(iL));
  }

  unsigned nP{*nPhotonGen->Get()};

  for (unsigned iP{0}; iP != nP; ++iP) {
    double minDR2{1000.};
    int iDMin{-1};
    for (unsigned iD{0}; iD != iPromptL.size(); ++iD) {
      unsigned iL{iPromptL[iD]};
      double dEta{LeptonGen_eta->At(iL) - PhotonGen_eta->At(iP)};
      double dPhi{TVector2::Phi_mpi_pi(LeptonGen_phi->At(iL) - PhotonGen_phi->At(iP))};
      double dR2{dEta * dEta + dPhi * dPhi};
      if (dR2 < minDR2) {
        minDR2 = dR2;
        iDMin = iD;
      }
    }

    if (minDR2 < 0.09)
      dressedLeptons[iDMin] += ROOT::Math::PtEtaPhiMVector(
        PhotonGen_pt->At(iP),
        PhotonGen_eta->At(iP),
        PhotonGen_phi->At(iP),
        PhotonGen_mass->At(iP));
  }

  unsigned n{0};
  for (unsigned iJ{0}; iJ != nJ; ++iJ) {
    if (GenJet_pt->At(iJ) < 30.)
      continue;

    bool overlap{false};
    for (auto& p4 : dressedLeptons) {
      if (p4.pt() < 10.)
        continue;

      double dEta{p4.eta() - GenJet_eta->At(iJ)};
      double dPhi{TVector2::Phi_mpi_pi(p4.phi() - GenJet_phi->At(iJ))};
      if (dEta * dEta + dPhi * dPhi < 0.016) {
        overlap = true;
        break;
      }
    }
    if (!overlap)
      genJets.emplace_back(
          GenJet_pt->At(iJ),
          GenJet_eta->At(iJ),
          GenJet_phi->At(iJ),
          GenJet_mass->At(iJ)
        );
  }


  // Now we have a vector of GenJets

  float Mjj_tmp=0;
  float Mjj_max=0;
  float deltamass_Vjet=1e5;
  float detajj_tmp=0;
  float detajj_mjj_max=0;
  float Vjet_mass_tmp = 0.;

  unsigned int njet{static_cast<unsigned int>(genJets.size())};
  // Index in the collection of CleanJetNotFat
  int VBS_jets[2] = {-999,-999};
  int V_jets[2]   = {-999,-999};
  
  if (njet>=4){
    // Calculate max mjj invariant pair oto exclude the correct jets
    for (unsigned int ijet=0 ; ijet<njet ; ijet++){
      for (unsigned int jjet= ijet+1 ; jjet<njet ; jjet++){
        if (ijet==jjet) continue;
        auto jet0 = genJets.at(ijet);
        auto jet1 = genJets.at(jjet); 

        Mjj_tmp = (jet0 + jet1).M();
        detajj_tmp = std::abs(jet0.Eta() - jet1.Eta());
        if( Mjj_tmp >= Mjj_max ){
          Mjj_max=Mjj_tmp;
          detajj_mjj_max=detajj_tmp;
          // Index in the collection of CleanJetNotFat
          VBS_jets[0]= ijet;
          VBS_jets[1]= jjet;
        }
      }
    }
    
    double vbs_1_pt = genJets.at(VBS_jets[1]).Pt();
    double detavbs = detajj_mjj_max;

    //cout << "VBS pt "<< vbs_1_pt << " detavbs "<< detavbs <<endl;  

    
    if (detavbs > 5) return 1;
    else return 2;

  }else{
    return -1;
  }
}

void
GenJetBin_boost::bindTree_(multidraw::FunctionLibrary& _library)
{
  _library.bindBranch(nLeptonGen, "nLeptonGen");
  _library.bindBranch(LeptonGen_isPrompt, "LeptonGen_isPrompt");
  // _library.bindBranch(DressedLepton_pdgId, "DressedLepton_pdgId");
  // _library.bindBranch(DressedLepton_pt, "DressedLepton_pt");
  // _library.bindBranch(DressedLepton_eta, "DressedLepton_eta");
  // _library.bindBranch(DressedLepton_phi, "DressedLepton_phi");
  // _library.bindBranch(DressedLepton_mass, "DressedLepton_mass");
  _library.bindBranch(LeptonGen_pdgId, "LeptonGen_pdgId");
  _library.bindBranch(LeptonGen_pt, "LeptonGen_pt");
  _library.bindBranch(LeptonGen_eta, "LeptonGen_eta");
  _library.bindBranch(LeptonGen_phi, "LeptonGen_phi");
  _library.bindBranch(LeptonGen_mass, "LeptonGen_mass");
  _library.bindBranch(nPhotonGen, "nPhotonGen");
  _library.bindBranch(PhotonGen_pt, "PhotonGen_pt");
  _library.bindBranch(PhotonGen_eta, "PhotonGen_eta");
  _library.bindBranch(PhotonGen_phi, "PhotonGen_phi");
  _library.bindBranch(PhotonGen_mass, "PhotonGen_mass");
  _library.bindBranch(nGenJet, "nGenJet");
  _library.bindBranch(GenJet_pt, "GenJet_pt");
  _library.bindBranch(GenJet_eta, "GenJet_eta");
  _library.bindBranch(GenJet_phi, "GenJet_phi");
  _library.bindBranch(GenJet_mass, "GenJet_mass");
}
