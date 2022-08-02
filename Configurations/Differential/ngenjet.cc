#include "LatinoAnalysis/MultiDraw/interface/TTreeFunction.h"
#include "LatinoAnalysis/MultiDraw/interface/FunctionLibrary.h"

#include <vector>

#include "TVector2.h"
#include "Math/Vector4Dfwd.h"
#include "Math/GenVector/LorentzVector.h"
#include "Math/GenVector/PtEtaPhiM4D.h"

#include <iostream>
#include <cmath>

#ifndef CountGenJet_HH
#define CountGenJet_HH

class CountGenJet : public multidraw::TTreeFunction {
public:
  CountGenJet();
  
  char const* getName() const override { return "CountGenJet"; }
  TTreeFunction* clone() const override { return new CountGenJet(); }
  
  unsigned getNdata() override { return 1; }
  double evaluate(unsigned) override;
  
protected:
  void bindTree_(multidraw::FunctionLibrary&) override;

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

CountGenJet::CountGenJet() :
  TTreeFunction()
{}

double
CountGenJet::evaluate(unsigned)
{
  unsigned nJ{*nGenJet->Get()};
  unsigned nL{*nDressedLepton->Get()};

  unsigned n{0};
  for (unsigned iJ{0}; iJ != nJ; ++iJ) {
    if (GenJet_pt->At(iJ) < 30.) continue;
    bool cleanJet = true;
    // Discard jets within dR 0.4 of prompt DressedLepton with pt > 10
    for (unsigned iL{0}; iL != nL; ++iL) {
      if (DressedLepton_pt->At(iL) < 10 or !LeptonGen_isPrompt->At(iL)) continue;
      double dPhi{static_cast<float>(TVector2::Phi_mpi_pi(DressedLepton_phi->At(iL) - GenJet_phi->At(iJ)))};
      double dEta{DressedLepton_eta->At(iL) - GenJet_eta->At(iJ)};
      double dR2 = dEta * dEta + dPhi * dPhi;
      if (dR2 < 0.16) {
	cleanJet = false;
	break;
      }
    }
    if (cleanJet) ++n;
  } //end jet loop
  
  return (double)n;  
}

void
CountGenJet::bindTree_(multidraw::FunctionLibrary& _library)
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
