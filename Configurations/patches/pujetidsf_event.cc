/*
  Temporary on-the-fly PU JetId SF calculator. Returns the product of SFs for all jets with pt > 30. && |eta| < 4.7
*/

#include "LatinoAnalysis/MultiDraw/interface/TTreeFunction.h"
#include "LatinoAnalysis/MultiDraw/interface/FunctionLibrary.h"

#include "TSystem.h"
#include "TFile.h"
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
    kLoose,
    kMedium,
    kTight,
    nWPs
  };

  std::string filename_{};

  std::string wpStr_{};
  WP wp_{nWPs};

  static std::string year;

  static long long currentEntry;
  static UIntValueReader* nJet;
  static FloatArrayReader* Jet_pt;
  static FloatArrayReader* Jet_eta;
  static IntArrayReader* Jet_genJetIdx;

  typedef std::array<std::unique_ptr<TH1>, nWPs> SFMapSet;
  typedef std::array<SFMapSet, 2> SFMapSets;
  static SFMapSets sfMapSets;

  static void setValues(long long);

  static std::array<float, nWPs> scalefactors;
};

/*static*/
std::string PUJetIdEventSF::year{""};
long long PUJetIdEventSF::currentEntry{-2};
UIntValueReader* PUJetIdEventSF::nJet{};
FloatArrayReader* PUJetIdEventSF::Jet_pt{};
FloatArrayReader* PUJetIdEventSF::Jet_eta{};
IntArrayReader* PUJetIdEventSF::Jet_genJetIdx{};
PUJetIdEventSF::SFMapSets PUJetIdEventSF::sfMapSets{};
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

    if (pt < 30. || std::abs(eta) > 4.7)
      continue;

    unsigned mapType{};
    if (Jet_genJetIdx->At(iJ) != -1)
      mapType = 0;
    else
      mapType = 1;

    for (unsigned iWP{0}; iWP != nWPs; ++iWP) {
      auto& map{sfMapSets[mapType][iWP]};

      int iX{map->GetXaxis()->FindFixBin(pt)};
      if (iX == 0)
        iX = 1;
      else if (iX > map->GetNbinsX())
        iX = map->GetNbinsX();

      int iY{map->GetYaxis()->FindFixBin(eta)};
      if (iY == 0)
        iY = 1;
      else if (iY > map->GetNbinsY())
        iY = map->GetNbinsY();

      scalefactors[iWP] *= map->GetBinContent(iX, iY);
    }
  }
}

void
PUJetIdEventSF::bindTree_(multidraw::FunctionLibrary& _library)
{
  if (currentEntry == -2) {
    currentEntry = -1;

    {
      TDirectory::TContext context;

      auto* source{TFile::Open(filename_.c_str())};
      std::string wps[nWPs] = {"L", "M", "T"};
      for (unsigned iwp{0}; iwp != nWPs; ++iwp) {
        sfMapSets[0][iwp].reset(static_cast<TH1*>(source->Get(("SFrealjets_" + wps[iwp] + "_" + year).c_str())));
        sfMapSets[1][iwp].reset(static_cast<TH1*>(source->Get(("SFpujets_" + wps[iwp] + "_" + year).c_str())));
        sfMapSets[0][iwp]->SetDirectory(nullptr);
        sfMapSets[1][iwp]->SetDirectory(nullptr);
      }
      delete source;
    }
    
    _library.bindBranch(nJet, "nJet");
    _library.bindBranch(Jet_pt, "Jet_pt");
    _library.bindBranch(Jet_eta, "Jet_eta");
    _library.bindBranch(Jet_genJetIdx, "Jet_genJetIdx");

    _library.addDestructorCallback([]() {
        currentEntry = -2;
        nJet = nullptr;
        Jet_pt = nullptr;
        Jet_eta = nullptr;
        Jet_genJetIdx = nullptr;
        for (auto& sfMapSet : sfMapSets) {
          for (auto& sfMap : sfMapSet)
            sfMap.reset();
        }
      });
  }
}
