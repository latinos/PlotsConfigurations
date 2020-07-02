#include "LatinoAnalysis/MultiDraw/interface/TTreeFunction.h"
#include "LatinoAnalysis/MultiDraw/interface/FunctionLibrary.h"

// #include <vector>

// #include "TVector2.h"
#include "Math/Vector4D.h"

// #include <iostream>

class CalcBoostHiggsMass : public multidraw::TTreeFunction {
public:
  CalcBoostHiggsMass();

  char const* getName() const override { return "CalcBoostHiggsMass"; }
  TTreeFunction* clone() const override { return new CalcBoostHiggsMass(); }

  unsigned getNdata() override { return 1; }
  double evaluate(unsigned) override;

protected:
  void bindTree_(multidraw::FunctionLibrary&) override;

  UIntValueReader* nCleanFatJet{};
  FloatArrayReader* CleanFatJet_pt{};
  FloatArrayReader* CleanFatJet_eta{};
  FloatArrayReader* CleanFatJet_phi{};
  FloatArrayReader* CleanFatJet_mass{};
  FloatValueReader* Wlep_pt{};
  FloatValueReader* Wlep_eta{};
  FloatValueReader* Wlep_phi{};
  FloatValueReader* Wlep_mass{};
};

CalcBoostHiggsMass::CalcBoostHiggsMass() :
  TTreeFunction()
{
}

double
CalcBoostHiggsMass::evaluate(unsigned)
{
  ROOT::Math::PtEtaPhiMVector wlep_4v{
    *Wlep_pt->Get(),
    *Wlep_eta->Get(),
    *Wlep_phi->Get(),
    *Wlep_mass->Get()
  };

  const unsigned int nJ{*nCleanFatJet->Get()};

  for (unsigned int ix{0}; ix < nJ; ix++) {
    const float Wfat_pt   = CleanFatJet_pt->At(ix);
    const float Wfat_eta  = CleanFatJet_eta->At(ix);

    if (Wfat_pt < 200 || abs(Wfat_eta) > 2.4)
      continue;


    ROOT::Math::PtEtaPhiMVector whad_4v{
      Wfat_pt,
      Wfat_eta,
      CleanFatJet_phi->At(ix),
      CleanFatJet_mass->At(ix)
    };
    double HfatM{(whad_4v + wlep_4v).M()};

    if (Wfat_pt / HfatM > 0.4)
      return HfatM;
  }

  return -999.0;
}

void
CalcBoostHiggsMass::bindTree_(multidraw::FunctionLibrary& _library)
{
  _library.bindBranch(nCleanFatJet, "nCleanFatJet");
  _library.bindBranch(CleanFatJet_pt, "CleanFatJet_pt");
  _library.bindBranch(CleanFatJet_eta, "CleanFatJet_eta");
  _library.bindBranch(CleanFatJet_phi, "CleanFatJet_phi");
  _library.bindBranch(CleanFatJet_mass, "CleanFatJet_mass");
  _library.bindBranch(Wlep_pt, "Wlep_pt_Puppi");
  _library.bindBranch(Wlep_eta, "Wlep_eta_Puppi");
  _library.bindBranch(Wlep_phi, "Wlep_phi_Puppi");
  _library.bindBranch(Wlep_mass, "Wlep_mass_Puppi");
}
