#include "TTreeReader.h"
#include "TTreeReaderValue.h"
#include "TTreeReaderArray.h"
#include "TVector2.h"
#include "TLorentzVector.h"

#include <cmath>
#include <iostream>
#include <vector>

enum StatusBits {
  kIsPrompt = 0,
  kIsDecayedLeptonHadron,
  kIsTauDecayProduct,
  kIsPromptTauDecayProduct,
  kIsDirectTauDecayProduct,
  kIsDirectPromptTauDecayProduct,
  kIsDirectHadronDecayProduct,
  kIsHardProcess,
  kFromHardProcess,
  kIsHardProcessTauDecayProduct,
  kIsDirectHardProcessTauDecayProduct,
  kFromHardProcessBeforeFSR,
  kIsFirstCopy,
  kIsLastCopy,
  kIsLastCopyBeforeFSR
};

class HWWFiducial {
public:
  HWWFiducial() {}
  ~HWWFiducial() { deleteTreeReaders(); }

  void setTreeReaders(TTreeReader*);
  void deleteTreeReaders();
  bool fiducial();

  Float_t GenPtH() const { return GenPtH_; }
  UInt_t nGenJetClean() const { return nGenJetClean_; }
  std::vector<Float_t> const& GenJetClean_eta() const { return GenJetClean_eta_; }
  std::vector<Float_t> const& GenJetClean_phi() const { return GenJetClean_phi_; }
  std::vector<Float_t> const& GenJetClean_pt() const { return GenJetClean_pt_; }

private:
  TTreeReaderValue<UInt_t>* nGenPart_{nullptr};
  TTreeReaderArray<Int_t>* GenPart_genPartIdxMother_{nullptr};
  TTreeReaderArray<Int_t>* GenPart_pdgId_{nullptr};
  TTreeReaderArray<Int_t>* GenPart_status_{nullptr};
  TTreeReaderArray<Int_t>* GenPart_statusFlags_{nullptr};
  TTreeReaderArray<Float_t>* GenPart_eta_{nullptr};
  TTreeReaderArray<Float_t>* GenPart_phi_{nullptr};
  TTreeReaderArray<Float_t>* GenPart_pt_{nullptr};
  TTreeReaderValue<UInt_t>* nGenDressedLepton_{nullptr};
  TTreeReaderArray<Int_t>* GenDressedLepton_pdgId_{nullptr};
  TTreeReaderArray<Float_t>* GenDressedLepton_eta_{nullptr};
  TTreeReaderArray<Float_t>* GenDressedLepton_phi_{nullptr};
  TTreeReaderArray<Float_t>* GenDressedLepton_pt_{nullptr};
  TTreeReaderArray<Float_t>* GenDressedLepton_mass_{nullptr};
  TTreeReaderValue<Float_t>* GenMET_phi_{nullptr};
  TTreeReaderValue<Float_t>* GenMET_pt_{nullptr};
  TTreeReaderValue<UInt_t>* nGenJet_{nullptr};
  TTreeReaderArray<Float_t>* GenJet_eta_{nullptr};
  TTreeReaderArray<Float_t>* GenJet_phi_{nullptr};
  TTreeReaderArray<Float_t>* GenJet_pt_{nullptr};
  
  Float_t GenPtH_{};
  UInt_t nGenJetClean_{};
  std::vector<Float_t> GenJetClean_eta_{};
  std::vector<Float_t> GenJetClean_phi_{};
  std::vector<Float_t> GenJetClean_pt_{};
};

void
HWWFiducial::setTreeReaders(TTreeReader* _reader)
{
  deleteTreeReaders();

  nGenPart_ = new TTreeReaderValue<UInt_t>(*_reader, "nGenPart");
  GenPart_genPartIdxMother_ = new TTreeReaderArray<Int_t>(*_reader, "GenPart_genPartIdxMother");
  GenPart_pdgId_ = new TTreeReaderArray<Int_t>(*_reader, "GenPart_pdgId");
  GenPart_status_ = new TTreeReaderArray<Int_t>(*_reader, "GenPart_status");
  GenPart_statusFlags_ = new TTreeReaderArray<Int_t>(*_reader, "GenPart_statusFlags");
  GenPart_eta_ = new TTreeReaderArray<Float_t>(*_reader, "GenPart_eta");
  GenPart_phi_ = new TTreeReaderArray<Float_t>(*_reader, "GenPart_phi");
  GenPart_pt_ = new TTreeReaderArray<Float_t>(*_reader, "GenPart_pt");
  nGenDressedLepton_ = new TTreeReaderValue<UInt_t>(*_reader, "nGenDressedLepton");
  GenDressedLepton_pdgId_ = new TTreeReaderArray<Int_t>(*_reader, "GenDressedLepton_pdgId");
  GenDressedLepton_eta_ = new TTreeReaderArray<Float_t>(*_reader, "GenDressedLepton_eta");
  GenDressedLepton_phi_ = new TTreeReaderArray<Float_t>(*_reader, "GenDressedLepton_phi");
  GenDressedLepton_pt_ = new TTreeReaderArray<Float_t>(*_reader, "GenDressedLepton_pt");
  GenDressedLepton_mass_ = new TTreeReaderArray<Float_t>(*_reader, "GenDressedLepton_mass");
  GenMET_phi_ = new TTreeReaderValue<Float_t>(*_reader, "GenMET_phi");
  GenMET_pt_ = new TTreeReaderValue<Float_t>(*_reader, "GenMET_pt");
  nGenJet_ = new TTreeReaderValue<UInt_t>(*_reader, "nGenJet");
  GenJet_eta_ = new TTreeReaderArray<Float_t>(*_reader, "GenJet_eta");
  GenJet_phi_ = new TTreeReaderArray<Float_t>(*_reader, "GenJet_phi");
  GenJet_pt_ = new TTreeReaderArray<Float_t>(*_reader, "GenJet_pt");
}

void
HWWFiducial::deleteTreeReaders()
{
  delete nGenPart_;
  delete GenPart_genPartIdxMother_;
  delete GenPart_pdgId_;
  delete GenPart_status_;
  delete GenPart_statusFlags_;
  delete GenPart_eta_;
  delete GenPart_phi_;
  delete GenPart_pt_;
  delete nGenDressedLepton_;
  delete GenDressedLepton_pdgId_;
  delete GenDressedLepton_eta_;
  delete GenDressedLepton_phi_;
  delete GenDressedLepton_pt_;
  delete GenDressedLepton_mass_;
  delete GenMET_phi_;
  delete GenMET_pt_;
  delete nGenJet_;
  delete GenJet_eta_;
  delete GenJet_phi_;
  delete GenJet_pt_;
}

bool
HWWFiducial::fiducial()
{
  unsigned nL(*nGenDressedLepton_->Get());
  if (nL < 2)
    return false;

  unsigned nG(*nGenPart_->Get());
  int hwwLeptons[2] = {-1, -1}; // find exactly two status 1 leptons directly from W that's from H
  std::vector<unsigned> promptLeptons;
  for (unsigned iG(0); iG != nG; ++iG) {
    // needs to be prompt
    int statusFlags(GenPart_statusFlags_->At(iG));
    if ((statusFlags & (1 << kIsPrompt)) == 0)
      continue;

    int status(GenPart_status_->At(iG));
    unsigned absId(std::abs(GenPart_pdgId_->At(iG)));

    // a prompt finalstate e or mu, or a prompt last-copy tau
    if ((status == 1 && (absId == 11 || absId == 13)) || ((statusFlags & (1 << kIsLastCopy)) != 0 && absId == 15))
      promptLeptons.push_back(iG);

    if (absId != 11 && absId != 13)
      continue;

    int motherIdx(GenPart_genPartIdxMother_->At(iG));
    unsigned motherAbsId(0);

    while (true) {
      if (motherIdx == -1)
        break;

      motherAbsId = std::abs(GenPart_pdgId_->At(motherIdx));
      if (motherAbsId == absId)
        motherIdx = GenPart_genPartIdxMother_->At(motherIdx);
      else
        break;
    }
    if (motherAbsId != 24)
      continue;

    motherIdx = GenPart_genPartIdxMother_->At(motherIdx);
    motherAbsId = 0;

    while (true) {
      if (motherIdx == -1)
        break;

      motherAbsId = std::abs(GenPart_pdgId_->At(motherIdx));
      if (motherAbsId == 24)
        motherIdx = GenPart_genPartIdxMother_->At(motherIdx);
      else
        break;
    }
    if (motherAbsId != 25)
      continue;

    if (hwwLeptons[0] < 0)
      hwwLeptons[0] = iG;
    else if (hwwLeptons[1] < 0)
      hwwLeptons[1] = iG;
    else // too many leptons
      return false;
  }

  if (hwwLeptons[1] < 0)
    return false;

  if (GenPart_pdgId_->At(hwwLeptons[0]) * GenPart_pdgId_->At(hwwLeptons[1]) != -11*13)
    return false;

  double lEta[2];
  double lPhi[2];
  for (unsigned iX(0); iX != 2; ++iX) {
    lEta[iX] = GenPart_eta_->At(hwwLeptons[iX]);
    lPhi[iX] = GenPart_phi_->At(hwwLeptons[iX]);
  }

  TLorentzVector p4ltmp[2];

  for (unsigned iL(0); iL != nL; ++iL) {
    int dlId(GenDressedLepton_pdgId_->At(iL));
    double dlEta(GenDressedLepton_eta_->At(iL));
    double dlPhi(GenDressedLepton_phi_->At(iL));

    for (unsigned iX(0); iX != 2; ++iX) {
      double dEta(dlEta - lEta[iX]);
      double dPhi(TVector2::Phi_mpi_pi(dlPhi - lPhi[iX]));

      if (dEta * dEta + dPhi * dPhi < 0.01) {
        p4ltmp[iX].SetPtEtaPhiM(GenDressedLepton_pt_->At(iL), dlEta, dlPhi, GenDressedLepton_mass_->At(iL));
        break;
      }
    }
  }

  TLorentzVector* p4l[2];
  if (p4ltmp[0].Pt() > p4ltmp[1].Pt()) {
    p4l[0] = &p4ltmp[0];
    p4l[1] = &p4ltmp[1];
  }
  else {
    p4l[0] = &p4ltmp[1];
    p4l[1] = &p4ltmp[0];
  }

  if (p4l[0]->Pt() < 25. || p4l[1]->Pt() < 10. || std::abs(p4l[0]->Eta()) > 2.5 || std::abs(p4l[1]->Eta()) > 2.5)
    return false;

  TLorentzVector p4ll(p4ltmp[0] + p4ltmp[1]);
  if (p4ll.M() < 12. || p4ll.Pt() < 30.)
    return false;

  TVector2 ptll(p4ll.X(), p4ll.Y());
  TVector2 met;
  met.SetMagPhi(*GenMET_pt_->Get(), *GenMET_phi_->Get());

  if (std::sqrt(2. * met.Mod() * ptll.Mod() * (1. - std::cos(ptll.Phi() - met.Phi()))) < 60.)
    return false;

  if (std::sqrt(2. * met.Mod() * p4l[1]->Pt() * (1. - std::cos(p4l[1]->Phi() -met.Phi()))) < 30.)
    return false;

  GenPtH_ = (ptll + met).Mod();

  nGenJetClean_ = 0;
  GenJetClean_eta_.clear();
  GenJetClean_phi_.clear();
  GenJetClean_pt_.clear();

  unsigned nJ(*nGenJet_->Get());
  for (unsigned iJ(0); iJ != nJ; ++iJ) {
    double jPt(GenJet_pt_->At(iJ));
    if (jPt < 30.)
      continue;

    double jEta(GenJet_eta_->At(iJ));
    if (std::abs(jEta) > 4.7)
      continue;

    double jPhi(GenJet_phi_->At(iJ));

    bool matches(false);
    for (unsigned iP : promptLeptons) {
      double dEta(jEta - GenPart_eta_->At(iP));
      double dPhi(TVector2::Phi_mpi_pi(jPhi - GenPart_phi_->At(iP)));

      if (dEta * dEta + dPhi * dPhi < 0.16) {
        matches = true;
        break;
      }
    }
    if (matches)
      continue;

    GenJetClean_eta_.push_back(jEta);
    GenJetClean_phi_.push_back(jPhi);
    GenJetClean_pt_.push_back(jPt);
    ++nGenJetClean_;
  }

  return true;
}
