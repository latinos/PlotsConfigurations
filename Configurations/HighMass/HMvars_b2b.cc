#include "LatinoAnalysis/MultiDraw/interface/TTreeFunction.h"
#include "LatinoAnalysis/MultiDraw/interface/FunctionLibrary.h"

#include "TMath.h"

class HMvarsb2b : public multidraw::TTreeFunction {
public:
  HMvarsb2b();

  char const* getName() const override { return "HMvarsb2b"; }
  TTreeFunction* clone() const override { return new HMvarsb2b(); }

  unsigned getNdata() override { return 1; }
  double evaluate(unsigned) override;

protected:
  void bindTree_(multidraw::FunctionLibrary&) override;

  FloatArrayReader* Lepton_pt;
  FloatArrayReader* Lepton_eta;
  FloatValueReader* dphill;

  //static FloatArrayReader* back2back;
};

//FloatArrayReader* HMvarsb2b::back2back{};

HMvarsb2b::HMvarsb2b() :
  TTreeFunction()
{
}

double
HMvarsb2b::evaluate(unsigned)
{
  double dEta{Lepton_eta->At(0) + Lepton_eta->At(1)};
  double dPhi{TMath::Pi() - *dphill->Get()};
  return TMath::Sqrt((dEta*dEta)+(dPhi*dPhi));
}

void
HMvarsb2b::bindTree_(multidraw::FunctionLibrary& _library)
{
  _library.bindBranch(Lepton_pt, "Lepton_pt");
  _library.bindBranch(Lepton_eta, "Lepton_eta");
  _library.bindBranch(dphill, "dphill");
}
