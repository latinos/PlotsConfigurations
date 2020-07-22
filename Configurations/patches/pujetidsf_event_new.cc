/*
  Temporary on-the-fly PU JetId SF calculator. Returns the product of SFs for all jets with pt > 30. && |eta| < 4.7
*/

#include "LatinoAnalysis/MultiDraw/interface/TTreeFunction.h"
#include "LatinoAnalysis/MultiDraw/interface/FunctionLibrary.h"

#include "TSystem.h"
#include "TFile.h"
#include "TMath.h"
#include "TH1.h"

#include <string>
#include <unordered_map>
#include <iostream>
#include <vector>
#include <array>
#include <string>

class PUJetIdEventSF : public multidraw::TTreeFunction {
public:
  PUJetIdEventSF(char const* filename, char const* yr, char const* wp);

  char const* getName() const override { return "PUJetIdEventSF"; }
  TTreeFunction* clone() const override { return new PUJetIdEventSF(filename_.c_str(), year.c_str(), wpStr_.c_str()); }

  void beginEvent(long long) override;
  unsigned getNdata() override { return 1; }
  double evaluate(unsigned) override;

protected:
  void bindTree_(multidraw::FunctionLibrary&) override;

  enum WP {
    kTight,
    kMedium,
    kLoose,
    nWPs
  };

  std::string filename_{};

  std::string wpStr_{};
  WP wp_{nWPs};

  static std::string year;

  static long long currentEntry;
  static UIntValueReader* nJet;
  static UIntValueReader* nLepton;
  static FloatArrayReader* Lepton_eta;
  static FloatArrayReader* Lepton_phi;
  static FloatArrayReader* Jet_pt;
  static FloatArrayReader* Jet_eta;
  static FloatArrayReader* Jet_phi;
  static IntArrayReader* Jet_jetId;
  static IntArrayReader* Jet_genJetIdx;
  static IntArrayReader * Jet_puId;

  typedef std::array<std::unique_ptr<TH1>, nWPs> MapSet;
  typedef std::array<MapSet, 2> MapSets;
  static MapSets sfMapSets;
  static MapSets effMapSets;

  static void setValues(long long);

  static std::array<float, nWPs> scalefactors;
};

/*static*/
std::string PUJetIdEventSF::year{""};
long long PUJetIdEventSF::currentEntry{-2};
UIntValueReader* PUJetIdEventSF::nJet{};
UIntValueReader* PUJetIdEventSF::nLepton{};
FloatArrayReader* PUJetIdEventSF::Lepton_eta{};
FloatArrayReader* PUJetIdEventSF::Lepton_phi{};
FloatArrayReader* PUJetIdEventSF::Jet_pt{};
FloatArrayReader* PUJetIdEventSF::Jet_eta{};
FloatArrayReader* PUJetIdEventSF::Jet_phi{};
IntArrayReader * PUJetIdEventSF::Jet_jetId{};
IntArrayReader * PUJetIdEventSF::Jet_puId{};
IntArrayReader* PUJetIdEventSF::Jet_genJetIdx{};
PUJetIdEventSF::MapSets PUJetIdEventSF::effMapSets{};
PUJetIdEventSF::MapSets PUJetIdEventSF::sfMapSets{};
std::array<float, PUJetIdEventSF::nWPs> PUJetIdEventSF::scalefactors{};

PUJetIdEventSF::PUJetIdEventSF(char const* filename, char const* yr, char const* wp) :
  TTreeFunction(),
  filename_{filename},
  wpStr_{wp}
{
  if (wpStr_ == "loose")
    wp_ = kLoose;
  else if (wpStr_ == "medium")
    wp_ = kMedium;
  else if (wpStr_ == "tight")
    wp_ = kTight;
  else
    throw std::runtime_error("unknown working point " + wpStr_);

  if (year.size() == 0)
    year = yr;
  else if (year != yr)
    throw std::runtime_error("PUJetIdEventSF already set up for " + year);
}

void
PUJetIdEventSF::beginEvent(long long _iEntry)
{
  setValues(_iEntry);
}

double
PUJetIdEventSF::evaluate(unsigned)
{
  return scalefactors[wp_];
}


void
PUJetIdEventSF::setValues(long long _iEntry)
{
  if (_iEntry == currentEntry)
    return;

  currentEntry = _iEntry;

  std::fill_n(scalefactors.begin(), nWPs, 1.);

  unsigned nJ{*nJet->Get()};

  for (unsigned iJ{0}; iJ != nJ; ++iJ) {
    double pt{Jet_pt->At(iJ)};
    double eta{Jet_eta->At(iJ)};

    if (pt < 30. || pt > 50.|| std::abs(eta) > 4.7 || Jet_jetId->At(iJ)<2)
    // excluding also the jets with jetId < 2 since we are considering only these jets in the selection before PUid selection.
      continue;

    bool isLeptonMatched = false;
    for (int ilep = 0; ilep < *(nLepton->Get()); ilep++){
      float lepEta = Lepton_eta->At(ilep);
      float lepPhi = Lepton_phi->At(ilep);
      float jetEta = Jet_eta->At(iJ);
      float jetPhi = Jet_phi->At(iJ);
      float dPhi = abs(lepPhi - jetPhi);
      if (dPhi > TMath::Pi())  
        dPhi = 2*TMath::Pi() - dPhi;

      float dR2 = (lepEta - jetEta) * (lepEta - jetEta) + dPhi * dPhi;
      
      if (dR2 < 0.3*0.3)  isLeptonMatched =true;
    }
    if (isLeptonMatched) continue;

    unsigned mapType{};
    if (Jet_genJetIdx->At(iJ) != -1)
      mapType = 0;
    else
      mapType = 1;

    for (unsigned iWP{0}; iWP != nWPs; ++iWP) {
      // if mapTap = 0 efficiency h2 are used, if mapType = 1 mistag h2 are used
      auto& sf_map{sfMapSets[mapType][iWP]};
      auto& eff_map{effMapSets[mapType][iWP]};

      int iX{eff_map->GetXaxis()->FindFixBin(pt)};
      if (iX == 0)
        iX = 1;
      else if (iX > eff_map->GetNbinsX())
        iX = eff_map->GetNbinsX();

      int iY{eff_map->GetYaxis()->FindFixBin(eta)};
      if (iY == 0)
        iY = 1;
      else if (iY > eff_map->GetNbinsY())
        iY = eff_map->GetNbinsY();

      // iWP = 0 Tight, 1 Medium, 2 Loose 
      bool passId = (Jet_puId->At(iJ)) & (1 << iWP);
      if (passId)  scalefactors[iWP] *= (sf_map->GetBinContent(iX, iY));
      else         
            scalefactors[iWP] *= (1- sf_map->GetBinContent(iX, iY)*eff_map->GetBinContent(iX,iY)) / (1-eff_map->GetBinContent(iX,iY));
    }
  }
  //cout << "SF T-M-L: "<< scalefactors[0] << " "<<scalefactors[1] << " "<<scalefactors[2] << endl;
}

void
PUJetIdEventSF::bindTree_(multidraw::FunctionLibrary& _library)
{
  if (currentEntry == -2) {
    currentEntry = -1;

    {
      TDirectory::TContext context;

      auto* source{TFile::Open(filename_.c_str())};
      // Same order of bit to check the Jetid 
      std::string wps[nWPs] = {"T", "M", "L"};
      for (unsigned iwp{0}; iwp != nWPs; ++iwp) {
        effMapSets[0][iwp].reset(static_cast<TH1*>(source->Get(("h2_eff_mc"+year +"_" + wps[iwp]).c_str())));
        effMapSets[1][iwp].reset(static_cast<TH1*>(source->Get(("h2_mistag_mc"+year +"_" + wps[iwp]).c_str())));
        effMapSets[0][iwp]->SetDirectory(nullptr);
        effMapSets[1][iwp]->SetDirectory(nullptr);
        sfMapSets[0][iwp].reset(static_cast<TH1*>(source->Get(("h2_eff_sf"+year +"_" + wps[iwp]).c_str())));
        sfMapSets[1][iwp].reset(static_cast<TH1*>(source->Get(("h2_mistag_sf"+year +"_" + wps[iwp]).c_str())));
        sfMapSets[0][iwp]->SetDirectory(nullptr);
        sfMapSets[1][iwp]->SetDirectory(nullptr);
      }
      delete source;
    }
    
    _library.bindBranch(nJet, "nJet");
    _library.bindBranch(nLepton, "nLepton");
    _library.bindBranch(Jet_pt, "Jet_pt");
    _library.bindBranch(Jet_jetId, "Jet_jetId");
    _library.bindBranch(Jet_eta, "Jet_eta");
    _library.bindBranch(Jet_phi, "Jet_phi");
    _library.bindBranch(Lepton_eta, "Lepton_eta");
    _library.bindBranch(Lepton_phi, "Lepton_phi");
    _library.bindBranch(Jet_genJetIdx, "Jet_genJetIdx");
    _library.bindBranch(Jet_puId, "Jet_jetId");

    _library.addDestructorCallback([]() {
        currentEntry = -2;
        nJet = nullptr;
        nLepton = nullptr;
        Jet_pt = nullptr;
        Jet_eta = nullptr;
        Jet_genJetIdx = nullptr;
        Jet_puId = nullptr;
        Jet_phi = nullptr;
        Lepton_eta = nullptr;
        Lepton_phi = nullptr;
        Jet_jetId = nullptr;
        for (auto& sms : sfMapSets) {
          for (auto& sfMap : sms)
            sfMap.reset();
        }
        for (auto& sms : effMapSets) {
          for (auto& efMap : sms)
            efMap.reset();
        }
      });
  }
}
