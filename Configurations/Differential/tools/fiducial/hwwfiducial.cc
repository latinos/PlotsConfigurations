#include "TTreeReader.h"
#include "TTreeReaderValue.h"
#include "TTreeReaderArray.h"
#include "TVector2.h"
#include "TLorentzVector.h"
#include "TDirectory.h"
#include "TH1D.h"

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
  HWWFiducial();
  ~HWWFiducial() { deleteTreeReaders(); delete hSumW_; delete hSumW2_; }

  void setTreeReaders(TTreeReader*);
  void deleteTreeReaders();
  void writeCounters(TDirectory*);
  bool fiducial();

  Int_t Lepton1_pdgId() const { return Lepton1_pdgId_; };
  Float_t Lepton1_eta() const { return Lepton1_eta_; };
  Float_t Lepton1_phi() const { return Lepton1_phi_; };
  Float_t Lepton1_pt() const { return Lepton1_pt_; };
  Float_t Lepton1_mass() const { return Lepton1_mass_; };
  Int_t Lepton2_pdgId() const { return Lepton2_pdgId_; };
  Float_t Lepton2_eta() const { return Lepton2_eta_; };
  Float_t Lepton2_phi() const { return Lepton2_phi_; };
  Float_t Lepton2_pt() const { return Lepton2_pt_; };
  Float_t Lepton2_mass() const { return Lepton2_mass_; };
  Float_t Dilepton_pt() const { return Dilepton_pt_; };
  Float_t Dilepton_mass() const { return Dilepton_mass_; };
  Float_t PtH() const { return PtH_; };
  Float_t MtH() const { return MtH_; };
  Float_t MtW2() const { return MtW2_; }; 
  UInt_t nCleanJet() const { return nCleanJet_; }
  std::vector<Float_t> const& CleanJet_eta() const { return CleanJet_eta_; }
  std::vector<Float_t> const& CleanJet_phi() const { return CleanJet_phi_; }
  std::vector<Float_t> const& CleanJet_pt() const { return CleanJet_pt_; }

  TH1* sumW() const { return hSumW_; }
  TH1* sumW2() const { return hSumW2_; }

private:
  TTreeReaderValue<Float_t>* genWeight_{nullptr};
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

  Int_t Lepton1_pdgId_{};
  Float_t Lepton1_eta_{};
  Float_t Lepton1_phi_{};
  Float_t Lepton1_pt_{};
  Float_t Lepton1_mass_{};
  Int_t Lepton2_pdgId_{};
  Float_t Lepton2_eta_{};
  Float_t Lepton2_phi_{};
  Float_t Lepton2_pt_{};
  Float_t Lepton2_mass_{};
  Float_t Dilepton_pt_{};
  Float_t Dilepton_mass_{};
  Float_t PtH_{};
  Float_t MtH_{};
  Float_t MtW2_{};
  UInt_t nCleanJet_{};
  std::vector<Float_t> CleanJet_eta_{};
  std::vector<Float_t> CleanJet_phi_{};
  std::vector<Float_t> CleanJet_pt_{};

  TH1D* hSumW_{nullptr};
  TH1D* hSumW2_{nullptr};
};

HWWFiducial::HWWFiducial() :
  hSumW_(new TH1D("sumW", "sumW", 1, 0., 1.)),
  hSumW2_(new TH1D("sumW2", "sumW2", 1, 0., 1.))
{
  hSumW_->SetDirectory(nullptr);
  hSumW2_->SetDirectory(nullptr);
  hSumW_->Sumw2();
  hSumW2_->Sumw2();
}

void
HWWFiducial::setTreeReaders(TTreeReader* _reader)
{
  deleteTreeReaders();

  genWeight_ = new TTreeReaderValue<Float_t>(*_reader, "genWeight");
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
  delete genWeight_;
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

void
HWWFiducial::writeCounters(TDirectory* _outdir)
{
  TDirectory::TContext context(_outdir);
  hSumW_->SetDirectory(_outdir);
  hSumW_->Write();
  delete hSumW_;
  hSumW_ = nullptr;
  hSumW2_->SetDirectory(_outdir);
  hSumW2_->Write();
  delete hSumW2_;
  hSumW2_ = nullptr;
}

bool
HWWFiducial::fiducial()
{
  double w(*genWeight_->Get());
  hSumW_->Fill(0.5, w);
  hSumW2_->Fill(0.5, w * w);

  unsigned nL(*nGenDressedLepton_->Get());
  if (nL < 2)
    return false;

  bool hasLead(false);
  bool hasTrail(false);
  bool hasFlavor[4] = {false, false, false, false};
  for (unsigned iL(0); iL != nL; ++iL) {
    if (std::abs(GenDressedLepton_eta_->At(iL)) > 2.5)
      continue;

    double pt(GenDressedLepton_pt_->At(iL));
    if (pt > 25.)
      hasLead = true;
    else if (pt > 10.)
      hasTrail = true;
    else
      continue;

    switch (GenDressedLepton_pdgId_->At(iL)) {
    case 11:
      hasFlavor[0] = true;
      break;
    case -11:
      hasFlavor[1] = true;
      break;
    case 13:
      hasFlavor[2] = true;
      break;
    case -13:
      hasFlavor[3] = true;
      break;
    }
  }

  if (!hasLead || !hasTrail)
    return false;
  if (!(hasFlavor[0] && hasFlavor[3]) && !(hasFlavor[1] && hasFlavor[2]))
    return false;

  unsigned nG(*nGenPart_->Get());
  int hwwLeptons[2] = {-1, -1}; // find exactly two status 1 leptons directly from W that's from H
  for (unsigned iG(0); iG != nG; ++iG) {
    // needs to be prompt
    if ((GenPart_statusFlags_->At(iG) & (1 << kIsPrompt)) == 0)
      continue;

    if (GenPart_status_->At(iG) != 1)
      continue;

    int pdgId(GenPart_pdgId_->At(iG));
    unsigned absId(std::abs(pdgId));

    if (absId != 11 && absId != 13)
      continue;

    if (hwwLeptons[0] >= 0 && pdgId * GenPart_pdgId_->At(hwwLeptons[0]) != -11*13)
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
    else if (hwwLeptons[1] < 0) {
      hwwLeptons[1] = iG;
      break;
    }
  }

  if (hwwLeptons[1] < 0)
    return false;

  if (GenPart_pdgId_->At(hwwLeptons[0]) * GenPart_pdgId_->At(hwwLeptons[1]) != -11*13)
    return false;

  int lId[2];
  double lEta[2];
  double lPhi[2];
  for (unsigned iX(0); iX != 2; ++iX) {
    lId[iX] = GenPart_pdgId_->At(hwwLeptons[iX]);
    lEta[iX] = GenPart_eta_->At(hwwLeptons[iX]);
    lPhi[iX] = GenPart_phi_->At(hwwLeptons[iX]);
  }

  // dressed p4
  TLorentzVector p4l[2];

  for (unsigned iL(0); iL != nL; ++iL) {
    int dlId(GenDressedLepton_pdgId_->At(iL));
    double dlEta(GenDressedLepton_eta_->At(iL));
    double dlPhi(GenDressedLepton_phi_->At(iL));

    for (unsigned iX(0); iX != 2; ++iX) {
      if (dlId != lId[iX])
        continue;
      
      double dEta(dlEta - lEta[iX]);
      double dPhi(TVector2::Phi_mpi_pi(dlPhi - lPhi[iX]));

      if (dEta * dEta + dPhi * dPhi < 0.01) {
        p4l[iX].SetPtEtaPhiM(GenDressedLepton_pt_->At(iL), dlEta, dlPhi, GenDressedLepton_mass_->At(iL));
        break;
      }
    }
  }

  unsigned il1, il2;
  if (p4l[0].Pt() > p4l[1].Pt()) {
    il1 = 0;
    il2 = 1;
  }
  else {
    il1 = 1;
    il2 = 0;
  }

  Lepton1_pt_ = p4l[il1].Pt();
  Lepton1_eta_ = p4l[il1].Eta();
  Lepton1_phi_ = p4l[il1].Phi();
  Lepton2_pt_ = p4l[il2].Pt();
  Lepton2_eta_ = p4l[il2].Eta();
  Lepton2_phi_ = p4l[il2].Phi();

  if (Lepton1_pt_ < 25. || Lepton2_pt_ < 10. || std::abs(Lepton1_eta_) > 2.5 || std::abs(Lepton2_eta_) > 2.5)
    return false;

  TLorentzVector p4ll(p4l[0] + p4l[1]);
  Dilepton_mass_ = p4ll.M();
  Dilepton_pt_ = p4ll.Pt();
  if (Dilepton_mass_ < 12. || Dilepton_pt_ < 30.)
    return false;

  TVector2 met;
  met.SetMagPhi(*GenMET_pt_->Get(), *GenMET_phi_->Get());

  MtH_ = std::sqrt(2. * met.Mod() * p4ll.Pt() * (1. - std::cos(p4ll.Phi() - met.Phi())));

  if (MtH_ < 60.)
    return false;

  MtW2_ = std::sqrt(2. * met.Mod() * Lepton2_pt_ * (1. - std::cos(Lepton2_phi_ - met.Phi())));

  if (MtW2_ < 30.)
    return false;

  Lepton1_pdgId_ = lId[il1];
  Lepton1_mass_ = p4l[il1].M();
  Lepton2_pdgId_ = lId[il2];
  Lepton2_mass_ = p4l[il2].M();

  Dilepton_pt_ = p4ll.Pt();
  Dilepton_mass_ = p4ll.M();

  TVector2 ptll(p4ll.X(), p4ll.Y());
  
  PtH_ = (ptll + met).Mod();

  std::vector<unsigned> promptLeptons;

  for (unsigned iG(0); iG != nG; ++iG) {
    int statusFlags(GenPart_statusFlags_->At(iG));
    if ((statusFlags & (1 << kIsPrompt)) == 0)
      continue;

    int status(GenPart_status_->At(iG));
    unsigned absId(std::abs(GenPart_pdgId_->At(iG)));

    // a prompt finalstate e or mu, or a prompt last-copy tau
    if ((status == 1 && (absId == 11 || absId == 13)) || ((statusFlags & (1 << kIsLastCopy)) != 0 && absId == 15))
      promptLeptons.push_back(iG);
  }

  nCleanJet_ = 0;
  CleanJet_eta_.clear();
  CleanJet_phi_.clear();
  CleanJet_pt_.clear();

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

    CleanJet_eta_.push_back(jEta);
    CleanJet_phi_.push_back(jPhi);
    CleanJet_pt_.push_back(jPt);
    ++nCleanJet_;
  }

  return true;
}
