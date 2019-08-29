#include "LatinoAnalysis/MultiDraw/interface/TTreeFunction.h"
#include "LatinoAnalysis/MultiDraw/interface/FunctionLibrary.h"

#include "TSystem.h"
#include "TLorentzVector.h"

#include <string>
#include <unordered_map>
#include <iostream>
#include <algorithm>
#include <cmath>

class MaxDEta : public multidraw::TTreeFunction {
public:
  MaxDEta(float ptmin);

  char const* getName() const override { return "MaxDEta"; }
  MaxDEta* clone() const override { return new MaxDEta(ptmin); }

  unsigned getNdata() override;
  double evaluate(unsigned) override;

protected:
  
  void bindTree_(multidraw::FunctionLibrary&) override;

  std::string algoName_{};
  float ptmin;
  UIntValueReader* nJets; 
  FloatArrayReader* Jet_pt{};
  FloatArrayReader* Jet_eta{};
  FloatArrayReader* Jet_phi{};
  IntArrayReader* Jet_idx{};
  FloatArrayReader* Jet_mass{};
};


MaxDEta::MaxDEta(float ptmin ) :
  TTreeFunction(),
  ptmin(ptmin)
{
}

unsigned
MaxDEta::getNdata()
{
  return 1;
}

double
MaxDEta::evaluate(unsigned iE)
{
  vector<TLorentzVector> jets;
  int njets = *(nJets->Get());

  for (int ij = 0; ij < njets; ij++){
    TLorentzVector v;
    float pt = Jet_pt->At(ij);
    float mass = Jet_mass->At(Jet_idx->At(ij));
    float eta = Jet_eta->At(ij);
    float phi = Jet_phi->At(ij);
    float p = pt*cosh(eta);
    v.SetPtEtaPhiE(pt,eta,phi, sqrt(p*p + mass*mass));
    jets.push_back(v);
  }

  vector<float> etas;
  for (int ij = 0; ij < (njets)-1; ij++){
    for (int ik=ij+1; ik < njets; ik++){
      etas.push_back( abs(jets[ik].Eta()-jets[ij].Eta())  );
    }
  }
  auto it = std::max_element(etas.begin(), etas.end());
  return *it;
}

void
MaxDEta::bindTree_(multidraw::FunctionLibrary& _library)
{
  nJets = &_library.getValue<UInt_t>("nCleanJet");
  Jet_pt = &_library.getArray<Float_t>("CleanJet_pt");
  Jet_eta = &_library.getArray<Float_t>("CleanJet_eta");
  Jet_phi = &_library.getArray<Float_t>("CleanJet_phi");
  Jet_mass = &_library.getArray<Float_t>("Jet_mass");
  Jet_idx = &_library.getArray<Int_t>("CleanJet_jetIdx");

}



