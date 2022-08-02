#include "LatinoAnalysis/MultiDraw/interface/TTreeFunction.h"
#include "LatinoAnalysis/MultiDraw/interface/FunctionLibrary.h"

#include <vector>

#include "Math/Vector4Dfwd.h"
#include "Math/GenVector/LorentzVector.h"
#include "Math/GenVector/PtEtaPhiM4D.h"

#include <iostream>

class PTLL : public multidraw::TTreeFunction {
public:
  PTLL();

  char const* getName() const override { return "PTLL"; }
  TTreeFunction* clone() const override { return new PTLL(); }

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

PTLL::PTLL() :
  TTreeFunction()
{
}

double
PTLL::evaluate(unsigned)
{
  ROOT::Math::PtEtaPhiMVector pl0(
    DressedLepton_pt->At(0),
    DressedLepton_eta->At(0),
    DressedLepton_phi->At(0),
    DressedLepton_mass->At(0)
  );
  ROOT::Math::PtEtaPhiMVector pl1(
    DressedLepton_pt->At(1),
    DressedLepton_eta->At(1),
    DressedLepton_phi->At(1),
    DressedLepton_mass->At(1)
  );

  ROOT::Math::PtEtaPhiMVector pll{pl0 + pl1};

  return  pll.Pt();

}

void
PTLL::bindTree_(multidraw::FunctionLibrary& _library)
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
