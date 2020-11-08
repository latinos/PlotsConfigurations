#include "LatinoAnalysis/MultiDraw/interface/TTreeFunction.h"
#include "LatinoAnalysis/MultiDraw/interface/FunctionLibrary.h"

#include "TMath.h"
#include "TGraph.h"
#include "TFile.h"
#include "TF1.h"
#include "TH2F.h"
#include "TLorentzVector.h"

#include <cmath>
#include <string>
#include <unordered_map>
#include <iostream>
#include <stdexcept>
#include <tuple>
#include <map>
#include <vector>

using namespace std;

class Wjets_LOtoNLO16 : public multidraw::TTreeFunction {
public:
  Wjets_LOtoNLO16():TTreeFunction(){};

  char const* getName() const override { return "Wjets_LOtoNLO16"; }
  TTreeFunction* clone() const override { return new Wjets_LOtoNLO16(); }

  unsigned getNdata() override { return 1; }
  double evaluate(unsigned) override;

protected:  
  
  void bindTree_(multidraw::FunctionLibrary&) override;
  
  FloatValueReader* LHE_HT{};

};


double
Wjets_LOtoNLO16::evaluate(unsigned)
{
  float ht = *(LHE_HT->Get());

  if (ht >= 0. && ht < 10.)  return 1.0892;
  else if( ht >= 10. && ht < 30.) return 0.4420;
  else if( ht >= 30. && ht < 40.) return 1.1258;
  else if( ht >= 40. && ht < 50.) return 1.0195;
  else if( ht >= 50. && ht < 60.) return 0.9834;
  else if( ht >= 60. && ht < 80.) return 1.0374;
  else if( ht >= 80. && ht < 100.) return 1.0714;
  else if( ht >= 100. && ht < 120.) return 1.0910;
  else if( ht >= 120. && ht < 140.) return 1.0626;
  else if( ht >= 140. && ht < 180.) return 1.0440;
  else {
      return 0.610 + TMath::Exp(-1. * ht / 219.); 
  }
  return 1.;
  
}

void
Wjets_LOtoNLO16::bindTree_(multidraw::FunctionLibrary& _library)
{   
    _library.bindBranch(LHE_HT, "LHE_HT");
}
