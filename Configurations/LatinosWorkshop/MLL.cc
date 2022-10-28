/*
  Temporary on-the-fly wlep1pt var for nanoLatino trees nAODv5_2016/2017/2018v5 or earlier.
*/

#include "LatinoAnalysis/MultiDraw/interface/TTreeFunction.h"
#include "LatinoAnalysis/MultiDraw/interface/FunctionLibrary.h"

#include "TSystem.h"

#include <iostream>
#include <vector>

#include "TLorentzVector.h"
#include "TMath.h"

class MLL : public multidraw::TTreeFunction {
public:
  MLL();

  char const* getName() const override { return "MLL"; }
  TTreeFunction* clone() const override { return new MLL(); }
  //TTreeFunction* clone() const override;

  unsigned getNdata() override { return 1; }
  float deltaPhi(float, float);
  double evaluate(unsigned) override;

protected:
  void bindTree_(multidraw::FunctionLibrary&) override;

  UIntValueReader* nLepton;
  FloatArrayReader* Lepton_pt;
  FloatArrayReader* Lepton_eta;
  FloatArrayReader* Lepton_phi;
};

MLL::MLL() :
  TTreeFunction()
{}

// --- Helper
float
MLL::deltaPhi(float phi1, float phi2)
{
  float PHI = std::abs(phi1-phi2);
if (PHI<=3.14159265)
  return PHI;
else
  return 2*3.14159265-PHI;
}
// Helper ---

double
MLL::evaluate(unsigned)
{
  TLorentzVector l1(0.,0.,0.,0.);
  TLorentzVector l2(0.,0.,0.,0.);

  unsigned nlep{*nLepton->Get()};

  if (nlep < 2)
    return -9999.;
    

  l1.SetPtEtaPhiM( Lepton_pt->At(0), Lepton_eta->At(0), Lepton_phi->At(0), 0. );
  l2.SetPtEtaPhiM( Lepton_pt->At(1), Lepton_eta->At(1), Lepton_phi->At(1), 0. );

  return (l1+l2).M();
}

void
MLL::bindTree_(multidraw::FunctionLibrary& _library)
{
  std::cout << "Loading MLL" << std::endl;
  _library.bindBranch(nLepton, "nLepton");
  _library.bindBranch(Lepton_pt, "Lepton_pt");
  _library.bindBranch(Lepton_eta, "Lepton_eta");
  _library.bindBranch(Lepton_phi, "Lepton_phi");
}
