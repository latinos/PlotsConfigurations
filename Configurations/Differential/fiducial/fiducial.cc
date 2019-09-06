#include "LatinoAnalysis/MultiDraw/interface/TTreeFunction.h"
#include "LatinoAnalysis/MultiDraw/interface/FunctionLibrary.h"

#include <vector>

#include "Math/Vector4Dfwd.h"
#include "Math/GenVector/LorentzVector.h"
#include "Math/GenVector/PtEtaPhiM4D.h"

#include <iostream>

class FiducialRegion : public multidraw::TTreeFunction {
public:
  FiducialRegion();

  char const* getName() const override { return "FiducialRegion"; }
  TTreeFunction* clone() const override { return new FiducialRegion(); }

  unsigned getNdata() override { return 1; }
  double evaluate(unsigned) override;

protected:
  void bindTree_(multidraw::FunctionLibrary&) override;

  UIntValueReader* nLeptonGen;
  BoolArrayReader* LeptonGen_isPrompt;
  IntArrayReader* DressedLepton_pdgId;
  FloatArrayReader* DressedLepton_pt;
  FloatArrayReader* DressedLepton_eta;
  FloatArrayReader* DressedLepton_phi;
  FloatArrayReader* DressedLepton_mass;
  FloatValueReader* GenMET_pt;
  FloatValueReader* GenMET_phi;
};

FiducialRegion::FiducialRegion() :
  TTreeFunction()
{
}

double
FiducialRegion::evaluate(unsigned)
{
  unsigned nL{*nLeptonGen->Get()};
  if (nL < 2)
    return 0.;

  std::vector<unsigned> iPromptL{};
  iPromptL.reserve(nL);

  for (unsigned iL{0}; iL != nL; ++iL) {
    if (!LeptonGen_isPrompt->At(iL))
      continue;

    unsigned absId{static_cast<unsigned>(std::abs(DressedLepton_pdgId->At(iL)))};
    if (absId != 11 && absId != 13)
      continue;

    iPromptL.push_back(iL);
  }

  if (iPromptL.size() < 2)
    return 0.; // false

  if (iPromptL.size() >= 3 && DressedLepton_pt->At(iPromptL[2]) > 13.)
    return 0.;

  if (DressedLepton_pdgId->At(iPromptL[0]) * DressedLepton_pdgId->At(iPromptL[1]) != -143)
    return 0.;

  if (DressedLepton_pt->At(iPromptL[0]) < 25. || std::abs(DressedLepton_eta->At(iPromptL[0])) > 2.5 ||
      DressedLepton_pt->At(iPromptL[1]) < 13. || std::abs(DressedLepton_eta->At(iPromptL[1])) > 2.5)
    return 0.;

  ROOT::Math::PtEtaPhiMVector pl0(
    DressedLepton_pt->At(iPromptL[0]),
    DressedLepton_eta->At(iPromptL[0]),
    DressedLepton_phi->At(iPromptL[0]),
    DressedLepton_mass->At(iPromptL[0])
  );
  ROOT::Math::PtEtaPhiMVector pl1(
    DressedLepton_pt->At(iPromptL[1]),
    DressedLepton_eta->At(iPromptL[1]),
    DressedLepton_phi->At(iPromptL[1]),
    DressedLepton_mass->At(iPromptL[1])
  );

  ROOT::Math::PtEtaPhiMVector pll{pl0 + pl1};

  if (pll.Pt() < 30. || pll.M() < 12.)
    return 0.;

  double genMet{*GenMET_pt->Get()};
  double cosgenMetPhi{std::cos(*GenMET_phi->Get())};
  double singenMetPhi{std::sin(*GenMET_phi->Get())};

  if (2. * genMet * (pll.Pt() - pll.Px() * cosgenMetPhi - pll.Py() * singenMetPhi) < 60. * 60.)
    return 0.;

  if (2. * genMet * (pl1.Pt() - pl1.Px() * cosgenMetPhi - pl1.Py() * singenMetPhi) < 30. * 30.)
    return 0.;

  return 1.;
}

void
FiducialRegion::bindTree_(multidraw::FunctionLibrary& _library)
{
  _library.bindBranch(nLeptonGen, "nLeptonGen");
  _library.bindBranch(LeptonGen_isPrompt, "LeptonGen_isPrompt");
  _library.bindBranch(DressedLepton_pdgId, "DressedLepton_pdgId");
  _library.bindBranch(DressedLepton_pt, "DressedLepton_pt");
  _library.bindBranch(DressedLepton_eta, "DressedLepton_eta");
  _library.bindBranch(DressedLepton_phi, "DressedLepton_phi");
  _library.bindBranch(DressedLepton_mass, "DressedLepton_mass");
  _library.bindBranch(GenMET_pt, "GenMET_pt");
  _library.bindBranch(GenMET_phi, "GenMET_phi");
}
