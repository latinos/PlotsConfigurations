#include "LatinoAnalysis/MultiDraw/interface/TTreeFunction.h"
#include "LatinoAnalysis/MultiDraw/interface/FunctionLibrary.h"

#include "TFile.h"
#include "TString.h"
#include "TGraph.h"

#include <string>
#include <unordered_map>
#include <iostream>

class Weight2MINLO : public multidraw::TTreeFunction {
public:
  Weight2MINLO(char const* sourcePath);

  char const* getName() const override { return "Weight2MINLO"; }
  TTreeFunction* clone() const override { return new Weight2MINLO(sourcePath_.c_str()); }

  unsigned getNdata() override;
  double evaluate(unsigned) override;

protected:
  std::array<std::unique_ptr<TGraph>, 4> weightSources_;
  
  void bindTree_(multidraw::FunctionLibrary&) override;

  std::string sourcePath_{};

  UCharValueReader* HTXS_njets30{};
  FloatValueReader* HTXS_Higgs_pt{};
};

Weight2MINLO::Weight2MINLO(char const* sourcePath) :
  TTreeFunction(),
  sourcePath_{sourcePath}
{
  auto* source{TFile::Open(sourcePath)};
  for (unsigned iJ{0}; iJ != 4; ++iJ)
    weightSources_[iJ].reset(static_cast<TGraph*>(source->Get(TString::Format("gr_NNLOPSratio_pt_powheg_%djet", iJ))));
  delete source;
}

unsigned
Weight2MINLO::getNdata()
{
  return 1;
}

double
Weight2MINLO::evaluate(unsigned)
{
  if (HTXS_Higgs_pt == nullptr)
    return 1.;

  //  std::cout << "evaluate" << std::endl;
  
  double pt{*HTXS_Higgs_pt->Get()};

  //  std::cout << "pt = " << pt << std::endl;

  unsigned char njets{*HTXS_njets30->Get()};

  //  std::cout << "njets = " << njets << std::endl;

  switch (njets) {
  case 0:
    return weightSources_[0]->Eval(std::min(pt, 125.));
  case 1:
    return weightSources_[1]->Eval(std::min(pt, 625.));
  case 2:
    return weightSources_[2]->Eval(std::min(pt, 800.));
  case 3:
    return weightSources_[3]->Eval(std::min(pt, 925.));
  default:
    return 1.;
  }
}

void
Weight2MINLO::bindTree_(multidraw::FunctionLibrary& _library)
{
  try {
    HTXS_njets30 = &_library.getValue<UChar_t>("HTXS_njets30");
    HTXS_Higgs_pt = &_library.getValue<Float_t>("HTXS_Higgs_pt");
  }
  catch (std::exception&) {
    HTXS_njets30 = nullptr;
    HTXS_Higgs_pt = nullptr;
  }

  std::cout << "bindTree_ " << HTXS_njets30 << " " << HTXS_Higgs_pt << std::endl;
}
