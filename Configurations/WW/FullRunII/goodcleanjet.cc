#include "LatinoAnalysis/MultiDraw/interface/TTreeFunction.h"
#include "LatinoAnalysis/MultiDraw/interface/FunctionLibrary.h"

#include <vector>

#include "TVector2.h"
#include "Math/Vector4Dfwd.h"
#include "Math/GenVector/LorentzVector.h"
#include "Math/GenVector/PtEtaPhiM4D.h"

#include <iostream>
#include <cmath>

#ifndef GoodCleanJet_HH
#define GoodCleanJet_HH

class GoodCleanJet : public multidraw::TTreeFunction {
public:
  GoodCleanJet(const char* variable_);

  char const* getName() const override { return "GoodCleanJet"; }
  TTreeFunction* clone() const override { return new GoodCleanJet(variable.c_str()); }

  unsigned getNdata() override { return 1; }
  double evaluate(unsigned) override;

protected:
  void bindTree_(multidraw::FunctionLibrary&) override;
  std::string variable;
  UIntValueReader* nCleanJet;
  FloatArrayReader* CleanJet_pt;
  FloatArrayReader* CleanJet_eta;
  FloatArrayReader* CleanJet_phi;
};

GoodCleanJet::GoodCleanJet(const char* variable_) :
  TTreeFunction(),
  variable{variable_}
{}

double
GoodCleanJet::evaluate(unsigned)
{
  unsigned nJ{*nCleanJet->Get()};

  std::vector<ROOT::Math::PtEtaPhiMVector> goodjets;

  for (unsigned iJ{0}; iJ != nJ; ++iJ) {
    if (abs(CleanJet_eta->At(iJ)) > 2.5) continue;
    goodjets.emplace_back(CleanJet_pt->At(iJ),CleanJet_eta->At(iJ),CleanJet_phi->At(iJ),0.0);
  }

  // JES variations can disrupt pt ordering -- but we want to be considering the same subset of jets
  int njet = 0;
  for (auto goodjet : goodjets){
    if (goodjet.pt() < 30.0) break;
    njet++;
  }

  if (variable == "njet") {
    return static_cast<double>(njet);
  }

  else if (variable == "jetpt0") {
    if (njet < 1) return -9999.0;
    else return goodjets[0].pt();
  }

  else if (variable == "jetpt1") {
    if (njet < 2) return -9999.0;
    else return goodjets[1].pt();
  }

  else if (variable == "dphijj") {
    if (njet < 2) return -9999.0;
    else {
      float dphijj = goodjets[0].eta() > goodjets[1].eta() ? TVector2::Phi_0_2pi(goodjets[0].phi() - goodjets[1].phi()) : TVector2::Phi_0_2pi(goodjets[1].phi() - goodjets[0].phi());
      return dphijj;
    }
  }

  else if (variable == "mjj") {
    if (njet < 2) return -9999.0;
    else return (goodjets[0]+goodjets[1]).M();
  }

  else {
    std::cout << "Invalid variable! Supported variables are njet, jetpt0, jetpt1, dphijj, mjj" << std::endl;
    return -9999.0;
  }
}

void
GoodCleanJet::bindTree_(multidraw::FunctionLibrary& _library)
{
  _library.bindBranch(nCleanJet, "nCleanJet");
  _library.bindBranch(CleanJet_pt, "CleanJet_pt");
  _library.bindBranch(CleanJet_eta, "CleanJet_eta");
  _library.bindBranch(CleanJet_phi, "CleanJet_phi");
}
#endif
