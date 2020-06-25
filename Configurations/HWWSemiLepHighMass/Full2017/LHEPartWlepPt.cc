#include "LatinoAnalysis/MultiDraw/interface/TTreeFunction.h"
#include "LatinoAnalysis/MultiDraw/interface/FunctionLibrary.h"

// #include <vector>
#include "Math/Vector4D.h"
#include "TGraph.h"
// #include "Math/GenVector/LorentzVector.h"
// #include "Math/GenVector/PtEtaPhiM4D.h"

// #include <iostream>

class LHEPartWlepPt : public multidraw::TTreeFunction {
public:
  LHEPartWlepPt();

  char const* getName() const override { return "LHEPartWlepPt"; }
  TTreeFunction* clone() const override { return new LHEPartWlepPt(); }

  unsigned getNdata() override { return 1; }
  double evaluate(unsigned) override;

protected:
  void bindTree_(multidraw::FunctionLibrary&) override;

  UIntValueReader* nLHEPart{};
  FloatArrayReader* LHEPart_pt{};
  FloatArrayReader* LHEPart_eta{};
  FloatArrayReader* LHEPart_phi{};
  IntArrayReader* LHEPart_pdgId{};
};

LHEPartWlepPt::LHEPartWlepPt() :
  TTreeFunction()
{
}

double
LHEPartWlepPt::evaluate(unsigned)
{
  // Recontruct W boson from its leptonic decay
  const unsigned int n{*nLHEPart->Get()};

  float lep_pt{-1.0}, lep_eta, lep_phi;
  float nu_pt{-1.0}, nu_eta, nu_phi;

  for (unsigned int ix{0}; ix < n; ix++) {
    const int pdgId = LHEPart_pdgId->At(ix);

    if (lep_pt == -1.0 && (abs(pdgId)==11 || abs(pdgId)==13 || abs(pdgId)==15)) {
      lep_pt  = LHEPart_pt->At(ix);
      lep_eta = LHEPart_eta->At(ix);
      lep_phi = LHEPart_phi->At(ix);
    }
    else if (nu_pt == -1.0 && (abs(pdgId)==12 || abs(pdgId)==14 || abs(pdgId)==16)) {
      nu_pt  = LHEPart_pt->At(ix);
      nu_eta = LHEPart_eta->At(ix);
      nu_phi = LHEPart_phi->At(ix);
    }
  }
  // If for any reason it was not possible to assign the leptons,
  // set the pT to -2 --> it can be followed up later
  if (lep_pt == -1.0 || nu_pt == -1.0) {
    return -2;
  }

  ROOT::Math::PtEtaPhiMVector lep_4v{
    lep_pt, lep_eta, lep_phi, 0 // at these energies everything is massless...
  };
  ROOT::Math::PtEtaPhiMVector nu_4v{
    nu_pt, nu_eta, nu_phi, 0
  };

  double Wlep_pt{(lep_4v + nu_4v).Pt()};

  if (Wlep_pt < 35.0) Wlep_pt = 35.0;
  else if (Wlep_pt > 2000.0) Wlep_pt = 2000.0;

  return Wlep_pt;
}

void
LHEPartWlepPt::bindTree_(multidraw::FunctionLibrary& _library)
{
  _library.bindBranch(nLHEPart, "nLHEPart");
  _library.bindBranch(LHEPart_pt, "LHEPart_pt");
  _library.bindBranch(LHEPart_eta, "LHEPart_eta");
  _library.bindBranch(LHEPart_phi, "LHEPart_phi");
  _library.bindBranch(LHEPart_pdgId, "LHEPart_pdgId");
}
