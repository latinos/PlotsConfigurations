#include "LatinoAnalysis/MultiDraw/interface/TTreeFunction.h"
#include "LatinoAnalysis/MultiDraw/interface/FunctionLibrary.h"

#include "TSystem.h"

#include <iostream>
#include <vector>
#include <tuple>
#include <utility>
#include <algorithm>
#include <iterator>

#include "TLorentzVector.h"
#include "TMath.h"

#include "TH1D.h"
#include "TFile.h"

using namespace std;


class btagEff_reader2 : public multidraw::TTreeFunction {
public:
  btagEff_reader2( std::string year );
  char const* getName() const override { return "btagEff_reader2"; }
  TTreeFunction* clone() const override { return new btagEff_reader2( year_ ); }

  void beginEvent(long long) override;
  int getMultiplicity() override { return 1; }
  unsigned getNdata() override;
  double evaluate(unsigned) override;

protected:
  void bindTree_(multidraw::FunctionLibrary&) override;

  std::string year_;  

  static std::map<int, std::vector<std::vector<double>>> binValues;
  static std::vector<double> efficiencies;
  static void setValues(long long);

  static long long currentEntry;
  static UIntValueReader*  nJet;
  static FloatArrayReader* Jet_pt;
  static FloatArrayReader* Jet_eta;
  static IntArrayReader* Jet_hadronFlavour;
  
  
};

std::map<int, std::vector<std::vector<double>>> btagEff_reader2::binValues{};
std::vector<double> btagEff_reader2::efficiencies{};
long long btagEff_reader2::currentEntry{-2};
UIntValueReader* btagEff_reader2::nJet{};
FloatArrayReader* btagEff_reader2::Jet_pt{};
FloatArrayReader* btagEff_reader2::Jet_eta{};
IntArrayReader* btagEff_reader2::Jet_hadronFlavour{};

btagEff_reader2::btagEff_reader2( std::string year ) : TTreeFunction(){

  cout << "Year:             " << year                  << endl;
  year_ = year;
  std::string cmssw_base = std::getenv("CMSSW_BASE");
  std::string filename = cmssw_base + "/src/PlotsConfigurations/Configurations/AToZH_Full/scripts/"+year+"_ttZ_btagEff_deepjet_M_ptetabin.txt";
  std::ifstream ifs(filename);
  std::string line;
  while(getline(ifs, line)){
    std::istringstream strm(line);
    int jf;
    strm >> jf;
    double ptmin, ptmax, etamin, etamax, eff;
    strm >> ptmin;
    strm >> ptmax;
    strm >> etamin;
    strm >> etamax;
    strm >> eff;
    binValues[jf].push_back( std::vector({ptmin, ptmax, etamin, etamax, eff}) );
  } 
  ifs.close();
}

void
btagEff_reader2::beginEvent(long long _iEntry)
{
  setValues(_iEntry);
}

unsigned
btagEff_reader2::getNdata()
{
  return efficiencies.size();
}

double
btagEff_reader2::evaluate(unsigned iJ)
{
  return efficiencies[iJ];
}

void
btagEff_reader2::setValues(long long _iEntry)
{
  if (_iEntry == currentEntry)
    return;
  currentEntry = _iEntry;

  efficiencies.clear();
  unsigned nJ{*nJet->Get()};
  efficiencies.resize(nJ);
  
  double pt, eta;
  int flavor;

  for (unsigned iJ{0}; iJ != nJ; ++iJ) {
    pt = Jet_pt->At(iJ);
    eta = Jet_eta->At(iJ);
    flavor = Jet_hadronFlavour->At(iJ); 

    if ((pt > 20) && (std::abs(eta) < 2.5)) {
        double eff = 1.0;
        if (pt > 1000) { pt = 999.999; }
        for (auto b : binValues[flavor]) {
            if ((pt > b[0]) && (pt <= b[1]) && (eta > b[2]) && (eta <= b[3])) {
                eff = b[4];
            } 
        }
        efficiencies[iJ] = eff;
    } else {
      efficiencies[iJ] = 1.0;
    }
  }
    
  
}

void
btagEff_reader2::bindTree_(multidraw::FunctionLibrary& _library)
{
  if (currentEntry == -2) {
    std::cout << "Binding btagEff trees " << year_ << std::endl;

    currentEntry = -1;
    _library.bindBranch(nJet, "nJet");
    _library.bindBranch(Jet_pt, "Jet_pt");
    _library.bindBranch(Jet_eta, "Jet_eta");
    _library.bindBranch(Jet_hadronFlavour, "Jet_hadronFlavour");

    _library.addDestructorCallback([]() {
        currentEntry = -2;
        nJet = nullptr;
        Jet_pt = nullptr;
        Jet_eta = nullptr;
        Jet_hadronFlavour = nullptr;
      });
  }
}


