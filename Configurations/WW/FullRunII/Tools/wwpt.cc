#include "LatinoAnalysis/MultiDraw/interface/TTreeFunction.h"
#include "LatinoAnalysis/MultiDraw/interface/FunctionLibrary.h"

#include <vector>

#include "TVector2.h"
#include "Math/Vector4Dfwd.h"
#include "Math/GenVector/LorentzVector.h"
#include "Math/GenVector/PtEtaPhiM4D.h"

#include <iostream>

class WWPT : public multidraw::TTreeFunction {
public:
  WWPT();

  char const* getName() const override { return "WWPT"; }
  TTreeFunction* clone() const override { return new WWPT(); }

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
  IntArrayReader* LeptonGen_MotherPID;
};

WWPT::WWPT() :
  TTreeFunction()
{
}

double
WWPT::evaluate(unsigned)
{
  unsigned nL{*nLeptonGen->Get()};
  if (nL < 2)
    return -999.;

  std::vector<unsigned> iPromptL{};
  iPromptL.reserve(nL);

  for (unsigned iL{0}; iL != nL; ++iL) {
    if (!LeptonGen_isPrompt->At(iL))
      continue;

    unsigned tauId{static_cast<unsigned>(std::abs(LeptonGen_MotherPID->At(iL)))};
    if (tauId == 15)
      continue; 
 
    unsigned absId{static_cast<unsigned>(std::abs(DressedLepton_pdgId->At(iL)))};
    if (absId != 11 && absId != 13)
      continue;

    iPromptL.push_back(iL);
  }

  if (iPromptL.size() < 2)
    return -999.; // false

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

  double genMet{*GenMET_pt->Get()};
  double genMetPhi{*GenMET_phi->Get()};

  ROOT::Math::PtEtaPhiMVector met(
    genMet,
    0.,
    genMetPhi,
    0.
  );

 return (pl0+pl1+met).Pt();

}

void
WWPT::bindTree_(multidraw::FunctionLibrary& _library)
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
  _library.bindBranch(LeptonGen_MotherPID, "LeptonGen_MotherPID");

}
