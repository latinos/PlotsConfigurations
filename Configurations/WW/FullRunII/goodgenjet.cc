#include "LatinoAnalysis/MultiDraw/interface/TTreeFunction.h"
#include "LatinoAnalysis/MultiDraw/interface/FunctionLibrary.h"

#include <vector>

#include "TVector2.h"
#include "Math/Vector4Dfwd.h"
#include "Math/GenVector/LorentzVector.h"
#include "Math/GenVector/PtEtaPhiM4D.h"

#include <iostream>
#include <cmath>

#ifndef CleanGenJet_HH
#define CleanGenJet_HH

class CleanGenJet : public multidraw::TTreeFunction {
public:
  CleanGenJet(const char* variable_);

  char const* getName() const override { return "CleanGenJet"; }
  TTreeFunction* clone() const override { return new CleanGenJet(variable.c_str()); }

  unsigned getNdata() override { return 1; }
  double evaluate(unsigned) override;

protected:
  void bindTree_(multidraw::FunctionLibrary&) override;
  std::string variable;
  UIntValueReader* nDressedLepton;
  FloatArrayReader* DressedLepton_pt;
  FloatArrayReader* DressedLepton_eta;
  FloatArrayReader* DressedLepton_phi;
  BoolArrayReader* LeptonGen_isPrompt;
  UIntValueReader* nGenJet;
  FloatArrayReader* GenJet_pt;
  FloatArrayReader* GenJet_eta;
  FloatArrayReader* GenJet_phi;
};

CleanGenJet::CleanGenJet(const char* variable_) :
  TTreeFunction(),
  variable{variable_}
{}

double
CleanGenJet::evaluate(unsigned)
{
  unsigned nJ{*nGenJet->Get()};
  unsigned nL{*nDressedLepton->Get()};

  std::vector<ROOT::Math::PtEtaPhiMVector> cleanGenJets;

  for (unsigned iJ{0}; iJ != nJ; ++iJ) {
    if (GenJet_pt->At(iJ) < 30.) continue;
    if (abs(GenJet_eta->At(iJ)) > 2.5) continue;
    bool cleanJet = true;
    // Discard jets within dR 0.4 of prompt DressedLepton with pt > 10
    for (unsigned iL{0}; iL != nL; ++iL) {
      if (DressedLepton_pt->At(iL) < 10 or !LeptonGen_isPrompt->At(iL)) continue;
      float dPhi{static_cast<float>(TVector2::Phi_mpi_pi(DressedLepton_phi->At(iL) - GenJet_phi->At(iJ)))};
      float dEta{DressedLepton_eta->At(iL) - GenJet_eta->At(iJ)};
      float dR2 = dEta * dEta + dPhi * dPhi;
      if (dR2 < 0.16) {
	cleanJet = false;
	break;
      }
    }
    if (cleanJet) cleanGenJets.emplace_back(GenJet_pt->At(iJ),GenJet_eta->At(iJ),GenJet_phi->At(iJ),0.0); 
  } //end jet loop

  if (variable == "njet") return cleanGenJets.size();

  else if (variable == "jetpt0") {
    if (cleanGenJets.size() < 1) return -9999.0;
    else return cleanGenJets[0].pt();
  }

  else if (variable == "jetpt1") {
    if (cleanGenJets.size() < 2) return -9999.0;
    else return cleanGenJets[1].pt();
  }

  else if (variable == "dphijj") {
    if (cleanGenJets.size() < 2) return -9999.0;
    else {
      float dphijj = cleanGenJets[0].eta() > cleanGenJets[1].eta() ? TVector2::Phi_0_2pi(cleanGenJets[0].phi() - cleanGenJets[1].phi()) : TVector2::Phi_0_2pi(cleanGenJets[1].phi() - cleanGenJets[0].phi());
      return dphijj;
    }
  }

  else if (variable == "mjj") {
    if (cleanGenJets.size() < 2) return -9999.0;
    else return (cleanGenJets[0]+cleanGenJets[1]).M();
  }

  else {
    std::cout << "Invalid variable! Supported variables are njet, jetpt0, jetpt1, dphijj, mjj" << std::endl;
    return -9999.0;
  }
}

void
CleanGenJet::bindTree_(multidraw::FunctionLibrary& _library)
{
  _library.bindBranch(nDressedLepton, "nDressedLepton");
  _library.bindBranch(DressedLepton_pt, "DressedLepton_pt");
  _library.bindBranch(DressedLepton_eta, "DressedLepton_eta");
  _library.bindBranch(DressedLepton_phi, "DressedLepton_phi");
  _library.bindBranch(LeptonGen_isPrompt, "LeptonGen_isPrompt");
  _library.bindBranch(nGenJet, "nGenJet");
  _library.bindBranch(GenJet_pt, "GenJet_pt");
  _library.bindBranch(GenJet_eta, "GenJet_eta");
  _library.bindBranch(GenJet_phi, "GenJet_phi");
}
#endif
