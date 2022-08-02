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

class Wjets_LOtoNLO : public multidraw::TTreeFunction {
public:
  Wjets_LOtoNLO():TTreeFunction(){};

  char const* getName() const override { return "Wjets_LOtoNLO"; }
  TTreeFunction* clone() const override { return new Wjets_LOtoNLO(); }

  unsigned getNdata() override { return 1; }
  double evaluate(unsigned) override;

protected:  
  
  void bindTree_(multidraw::FunctionLibrary&) override;
  
  FloatValueReader* LHE_HT{};

};


double
Wjets_LOtoNLO::evaluate(unsigned)
{
  float ht = *(LHE_HT->Get());

  if (ht >= 0. && ht < 10.)  return 0.9074;
  else if( ht >= 10. && ht < 30.) return 1.2965;
  else if( ht >= 30. && ht < 40.) return 1.4454;
  else if( ht >= 40. && ht < 50.) return 1.1790;
  else if( ht >= 50. && ht < 60.) return 1.1820;
  else {
      return 0.516 + TMath::Exp(-1. * ht / 249.); 
  }
  return 1.;
  
}

void
Wjets_LOtoNLO::bindTree_(multidraw::FunctionLibrary& _library)
{   
    _library.bindBranch(LHE_HT, "LHE_HT");
}
