#include "LatinoAnalysis/MultiDraw/interface/TTreeFunction.h"
#include "LatinoAnalysis/MultiDraw/interface/FunctionLibrary.h"

#include "TMath.h"
#include "TGraph.h"
#include "TFile.h"
#include "TF1.h"
#include "TH2F.h"
#include "TLorentzVector.h"

#include <cmath>
#include <string>
#include <unordered_map>
#include <iostream>
#include <stdexcept>
#include <tuple>
#include <map>
#include <vector>

using namespace std;

class WhadEta : public multidraw::TTreeFunction {
public:
  WhadEta():TTreeFunction(){};

  char const* getName() const override { return "WhadEta"; }
  TTreeFunction* clone() const override { return new WhadEta(); }

  unsigned getNdata() override { return 1; }
  double evaluate(unsigned) override;

protected:  
 
  void bindTree_(multidraw::FunctionLibrary&) override;
  
  IntValueReader* VBS_category{};
  UIntValueReader* nJets; 
  FloatArrayReader* Jet_pt{};
  FloatArrayReader* Jet_eta{};
  FloatArrayReader* Jet_phi{};
  IntArrayReader* Jet_idx{};
  FloatArrayReader* Jet_mass{};
  IntArrayReader* v_jets{};

};


double
WhadEta::evaluate(unsigned)
{
  if ( *(VBS_category->Get()) != 1) {
    return -999.;
  }
  TLorentzVector whad;
  for (auto ij : *v_jets){
    TLorentzVector v;
    float pt = Jet_pt->At(ij);
    float eta = Jet_eta->At(ij);
    float phi = Jet_phi->At(ij);
    float mass = Jet_mass->At(Jet_idx->At(ij));
    v.SetPtEtaPhiM(pt,eta,phi, mass);
    whad += v;
  }
  return whad.Eta();
}

void
WhadEta::bindTree_(multidraw::FunctionLibrary& _library)
{   
    _library.bindBranch(VBS_category, "VBS_category");
    _library.bindBranch(nJets, "nJet");
    _library.bindBranch(Jet_pt, "CleanJet_pt");
    _library.bindBranch(Jet_eta, "CleanJet_eta");
    _library.bindBranch(Jet_phi, "CleanJet_phi");
    _library.bindBranch(Jet_mass, "Jet_mass");
    _library.bindBranch(Jet_idx, "CleanJet_jetIdx");
    _library.bindBranch(v_jets, "V_jets_maxmjj_massWZ");
}

