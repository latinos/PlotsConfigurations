#include "LatinoAnalysis/MultiDraw/interface/TTreeFunction.h"
#include "LatinoAnalysis/MultiDraw/interface/FunctionLibrary.h"

#include "TMath.h"
#include <vector>

class getGenDarkHiggspt : public multidraw::TTreeFunction {
public:
  getGenDarkHiggspt();

  char const* getName() const override { return "getGenDarkHiggspt"; }
  TTreeFunction* clone() const override { return new getGenDarkHiggspt(); }

  unsigned getNdata() override { return 1; }
  double evaluate(unsigned) override;

protected:
  void bindTree_(multidraw::FunctionLibrary&) override;

  UIntValueReader* nGenPart;
  FloatArrayReader* GenPart_pt;
  IntArrayReader* GenPart_pdgId;

};

getGenDarkHiggspt::getGenDarkHiggspt() :
  TTreeFunction()
{
}

double
getGenDarkHiggspt::evaluate(unsigned)
{
  unsigned nGen{*nGenPart->Get()};
  int pdgId;
  int darkHiggs_idx=-9999;
  for (unsigned iGen{0}; iGen != nGen; ++iGen){
    pdgId = std::abs(GenPart_pdgId->At(iGen));
    if (pdgId == 54){
      darkHiggs_idx = iGen;
      break;
    }else{
      continue;
    }
  }

  return GenPart_pt->At(darkHiggs_idx);
}

void
getGenDarkHiggspt::bindTree_(multidraw::FunctionLibrary& _library)
{
  _library.bindBranch(nGenPart, "nGenPart");
  _library.bindBranch(GenPart_pt, "GenPart_pt");
  _library.bindBranch(GenPart_pdgId, "GenPart_pdgId");
}
