/*
  Temporary on-the-fly btag SF calculator for nanoLatino trees nAODv5_2016/2017/2018v5 or earlier.
*/

#include "LatinoAnalysis/MultiDraw/interface/TTreeFunction.h"
#include "LatinoAnalysis/MultiDraw/interface/FunctionLibrary.h"

#include "CondTools/BTau/test/BTagCalibrationStandalone.h"

#include "TSystem.h"

#include <string>
#include <unordered_map>
#include <iostream>
#include <vector>
#include <array>
#include <string>

class BtagSF : public multidraw::TTreeFunction {
public:
  BtagSF(char const* filename, char const* shift = "central", char const* algo = "deepcsv");

  char const* getName() const override { return "BtagSF"; }
  TTreeFunction* clone() const override { return new BtagSF(filename_.c_str(), shiftStr_.c_str(), algo_.c_str()); }

  void beginEvent(long long) override;
  int getMultiplicity() override { return 1; }
  unsigned getNdata() override;
  double evaluate(unsigned) override;

protected:
  void bindTree_(multidraw::FunctionLibrary&) override;

  enum ShiftType {
    kCentral,
    kJESUp,
    kJESDown,
    kHFUp,
    kHFDown,
    kLFUp,
    kLFDown,
    kHFStats1Up,
    kHFStats1Down,
    kHFStats2Up,
    kHFStats2Down,
    kLFStats1Up,
    kLFStats1Down,
    kLFStats2Up,
    kLFStats2Down,
    kCFErr1Up,
    kCFErr1Down,
    kCFErr2Up,
    kCFErr2Down,
    nShiftTypes
  };

  std::string filename_{};

  std::string shiftStr_{};
  unsigned shift_{nShiftTypes};

  std::string algo_{};

  static long long currentEntry;
  static UIntValueReader* nJet;
  static FloatArrayReader* Jet_pt;
  static FloatArrayReader* Jet_eta;
  static IntArrayReader* Jet_hadronFlavour;
  static FloatArrayReader* Jet_btag;

  typedef std::array<std::unique_ptr<BTagCalibrationReader>, 3> Readers;
  static Readers readers;
  static std::string readerFilename;
  static std::string readerAlgo;

  static void setValues(long long);

  static std::vector<std::array<double, nShiftTypes>> scalefactors;

  static std::array<std::string, nShiftTypes> shiftNames;
  static std::array<std::vector<unsigned>, 3> relevantShifts;
};

/*static*/
BtagSF::Readers BtagSF::readers{};
std::string BtagSF::readerFilename{};
std::string BtagSF::readerAlgo{};
long long BtagSF::currentEntry{-2};
UIntValueReader* BtagSF::nJet{};
FloatArrayReader* BtagSF::Jet_pt{};
FloatArrayReader* BtagSF::Jet_eta{};
IntArrayReader* BtagSF::Jet_hadronFlavour{};
FloatArrayReader* BtagSF::Jet_btag{};
std::vector<std::array<double, BtagSF::nShiftTypes>> BtagSF::scalefactors{};

std::array<std::string, BtagSF::nShiftTypes> BtagSF::shiftNames{{
  "central",
  "up_jes",
  "down_jes",
  "up_hf",
  "down_hf",
  "up_lf",
  "down_lf",
  "up_hfstats1",
  "down_hfstats1",
  "up_hfstats2",
  "down_hfstats2",
  "up_lfstats1",
  "down_lfstats1",
  "up_lfstats2",
  "down_lfstats2",
  "up_cferr1",
  "down_cferr1",
  "up_cferr2",
  "down_cferr2"
}};

std::array<std::vector<unsigned>, 3> BtagSF::relevantShifts{};

BtagSF::BtagSF(char const* filename, char const* shift/* = "central"*/, char const* algo/* = "deepcsv"*/) :
  TTreeFunction(),
  filename_{filename},
  shiftStr_{shift},
  shift_{static_cast<unsigned>(std::find(shiftNames.begin(), shiftNames.end(), shiftStr_) - shiftNames.begin())},
  algo_{algo}
{
  if (shift_ == nShiftTypes)
    throw std::invalid_argument("Unknown shift name " + shiftStr_);
}

void
BtagSF::beginEvent(long long _iEntry)
{
  setValues(_iEntry);
}

unsigned
BtagSF::getNdata()
{
  return scalefactors.size();
}

double
BtagSF::evaluate(unsigned iJ)
{
  return scalefactors[iJ][shift_];
}

void
BtagSF::setValues(long long _iEntry)
{
  if (_iEntry == currentEntry)
    return;

  currentEntry = _iEntry;

  scalefactors.clear();

  unsigned nJ{*nJet->Get()};
  scalefactors.resize(nJ);
  
  for (unsigned iJ{0}; iJ != nJ; ++iJ) {
    BTagEntry::JetFlavor jf;
  
    switch (Jet_hadronFlavour->At(iJ)) {
    case 5:
      jf = BTagEntry::FLAV_B; // = 0
      break;
    case 4:
      jf = BTagEntry::FLAV_C; // = 1
      break;
    default:
      jf = BTagEntry::FLAV_UDSG; // = 2
      break;
    }

    double central{readers[jf]->eval_auto_bounds("central", jf, std::abs(Jet_eta->At(iJ)), Jet_pt->At(iJ), Jet_btag->At(iJ))};

    // set all shifts to central first
    std::fill_n(scalefactors[iJ].begin(), nShiftTypes, central);

    // then fill the actual shift values for relevant types
    for (auto s : relevantShifts[jf])
      scalefactors[iJ][s] = readers[jf]->eval_auto_bounds(shiftNames[s], jf, std::abs(Jet_eta->At(iJ)), Jet_pt->At(iJ), Jet_btag->At(iJ));
  }
}

void
BtagSF::bindTree_(multidraw::FunctionLibrary& _library)
{
  if (currentEntry == -2) {
    std::cout << "Loading data for " << algo_ << " from " << filename_ << std::endl;

    relevantShifts[BTagEntry::FLAV_B] = {kJESUp, kJESDown, kLFUp, kLFDown, kHFStats1Up, kHFStats1Down, kHFStats2Up, kHFStats2Down};
    relevantShifts[BTagEntry::FLAV_C] = {kCFErr1Up, kCFErr1Down, kCFErr2Up, kCFErr2Down};
    relevantShifts[BTagEntry::FLAV_UDSG] = {kJESUp, kJESDown, kHFUp, kHFDown, kLFStats1Up, kLFStats1Down, kLFStats2Up, kLFStats2Down};

    readerFilename = filename_;
    readerAlgo = algo_;

    BTagCalibration calib(algo_, filename_);
    for (auto flav : {BTagEntry::FLAV_B, BTagEntry::FLAV_C, BTagEntry::FLAV_UDSG}) {
      std::vector<std::string> shiftsToRead;
      for (auto s : relevantShifts[flav])
        shiftsToRead.push_back(shiftNames[s]);
      readers[flav].reset(new BTagCalibrationReader(BTagEntry::OP_RESHAPING, "central", shiftsToRead));
      readers[flav]->load(calib, flav, "iterativefit");
    }

    std::cout << "  done." << std::endl;

    currentEntry = -1;
    _library.bindBranch(nJet, "nJet");
    _library.bindBranch(Jet_pt, "Jet_pt");
    _library.bindBranch(Jet_eta, "Jet_eta");
    _library.bindBranch(Jet_hadronFlavour, "Jet_hadronFlavour");
    if (algo_ == "deepcsv")
      _library.bindBranch(Jet_btag, "Jet_btagDeepB");
    else if (algo_ == "csvv2")
      _library.bindBranch(Jet_btag, "Jet_btagCSVV2");
    else if (algo_ == "deepjet")
      _library.bindBranch(Jet_btag, "Jet_btagDeepFlavB");

    _library.addDestructorCallback([]() {
        currentEntry = -2;
        nJet = nullptr;
        Jet_pt = nullptr;
        Jet_eta = nullptr;
        Jet_hadronFlavour = nullptr;
        Jet_btag = nullptr;
        for (auto& reader : readers)
          reader.reset();
      });
  }
  else if (readerFilename != filename_ || readerAlgo != algo_) {
    std::cerr << "BtagSF module configured for " << readerFilename << " and " << readerAlgo << " already." << std::endl;
    std::cerr << "You cannot create an instance for " << filename_ << " and " << algo_ << " because the module is" << std::endl;
    std::cerr << "written in a hacky way using static global variables." << std::endl;
    throw std::invalid_argument(filename_ + "/" + algo_);
  }
}
