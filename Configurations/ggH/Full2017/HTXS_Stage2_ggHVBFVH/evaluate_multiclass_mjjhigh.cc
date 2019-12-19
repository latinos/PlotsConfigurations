#include "LatinoAnalysis/MultiDraw/interface/TTreeFunction.h"
#include "LatinoAnalysis/MultiDraw/interface/FunctionLibrary.h"
#include <vector>
#include "TVector2.h"
#include "TLorentzVector.h"
#include "Math/Vector4Dfwd.h"
#include "Math/GenVector/LorentzVector.h"
#include "Math/GenVector/PtEtaPhiM4D.h"
#include <iostream>
#include <TMath.h>
#include "generated_code_mjjhigh.h"

class evaluate_multiclass_mjjhigh : public multidraw::TTreeFunction {
public:
  evaluate_multiclass_mjjhigh(int const nclass);

  char const* getName() const override { return "evaluate_multiclass_mjjhigh"; }
  TTreeFunction* clone() const override { return new evaluate_multiclass_mjjhigh(nclass_); }

  unsigned getNdata() override { return 1; }
  double evaluate(unsigned) override;

protected:
  int nclass_;
  void bindTree_(multidraw::FunctionLibrary&) override;
  IntArrayReader*   jetid{};
  FloatArrayReader* ptl{};
  FloatArrayReader* etal{};
  FloatArrayReader* phil{};
  FloatArrayReader* ptj{};
  FloatArrayReader* etaj{};
  FloatArrayReader* phij{};
  FloatArrayReader* qgl{};
  FloatValueReader* mjj{};
  FloatValueReader* mll{};
  FloatValueReader* ptll{};
  FloatValueReader* detajj{};
  FloatValueReader* dphill{};
  FloatValueReader* metpt{};
  FloatValueReader* metphi{};
  FloatValueReader* mti{};
  FloatValueReader* dphilljet{};
  FloatValueReader* dphillmet{};
  FloatValueReader* drll{};
  FloatValueReader* dphilmet{};
  FloatValueReader* mr{};
};

evaluate_multiclass_mjjhigh::evaluate_multiclass_mjjhigh(int const nclass) :
  TTreeFunction()
{
  nclass_ = nclass;
}

double
evaluate_multiclass_mjjhigh::evaluate(unsigned)
{
  int jetid0 = jetid->At(0);
  int jetid1 = jetid->At(1);
  
  float input[27];
  input[0] = *mjj->Get();
  input[1] = *mll->Get();
  input[2] = *ptll->Get();
  input[3] = *detajj->Get();
  input[4] = *dphill->Get();
  input[5] = *metpt->Get();
  input[6] = *metphi->Get();
  input[7] = *mti->Get();
  input[8] = *dphilljet->Get();
  input[9] = *dphillmet->Get();
  input[10] = *drll->Get();
  input[11] = *dphilmet->Get();
  input[12] = *mr->Get();

  input[13] = ptl->At(0);
  input[14] = ptl->At(1);
  input[15] = etal->At(0);
  input[16] = etal->At(1);
  input[17] = phil->At(0);
  input[18] = phil->At(1);

  input[19] = ptj->At(0);
  input[20] = ptj->At(1);
  input[21] = etaj->At(0);
  input[22] = etaj->At(1);
  input[23] = phij->At(0);
  input[24] = phij->At(1);

  input[25] = qgl->At(jetid0);
  input[26] = qgl->At(jetid1);

  return guess_digit_mjjhigh(input, nclass_);;
}

void
evaluate_multiclass_mjjhigh::bindTree_(multidraw::FunctionLibrary& _library)
{
  _library.bindBranch(jetid, "CleanJet_jetIdx");
  _library.bindBranch(ptl, "Lepton_pt");
  _library.bindBranch(etal, "Lepton_eta");
  _library.bindBranch(phil, "Lepton_phi");
  _library.bindBranch(ptj, "CleanJet_pt");
  _library.bindBranch(etaj, "CleanJet_eta");
  _library.bindBranch(phij, "CleanJet_phi");
  _library.bindBranch(qgl, "Jet_qgl");
  _library.bindBranch(mjj, "mjj");
  _library.bindBranch(mll, "mll");
  _library.bindBranch(ptll, "ptll");
  _library.bindBranch(detajj, "detajj");
  _library.bindBranch(dphill, "dphill");
  _library.bindBranch(metpt, "PuppiMET_pt");
  _library.bindBranch(metphi, "PuppiMET_phi");
  _library.bindBranch(mti, "mTi");
  _library.bindBranch(dphilljet, "dphilljet");
  _library.bindBranch(dphillmet, "dphillmet");
  _library.bindBranch(drll, "drll");
  _library.bindBranch(dphilmet, "dphilmet");
  _library.bindBranch(mr, "mR");
}
