#include "LatinoAnalysis/MultiDraw/interface/TTreeFunction.h"
#include "LatinoAnalysis/MultiDraw/interface/FunctionLibrary.h"

#include <vector>

#include "TVector2.h"
#include "Math/Vector4Dfwd.h"
#include "Math/GenVector/LorentzVector.h"
#include "Math/GenVector/PtEtaPhiM4D.h"

#include <iostream>

class CountJet : public multidraw::TTreeFunction {
public:
  CountJet();

  char const* getName() const override { return "CountJet"; }
  TTreeFunction* clone() const override { return new CountJet(); }

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
};

CountJet::CountJet() :
  TTreeFunction()
{
}

double
CountJet::evaluate(unsigned)
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

  if (iPromptL.size() == 0) {
    unsigned n{0};
    for (unsigned iJ{0}; iJ != nJ; ++iJ) {
      if (GenJet_pt->At(iJ) > 30.)
        ++n;
    }
    return n;
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
      ++n;
  }
  return n;  
}

void
CountJet::bindTree_(multidraw::FunctionLibrary& _library)
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
}
