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

#ifndef ReweightWhadPt_
#define ReweightWhadPt_

class ReweightWhadPt : public multidraw::TTreeFunction {
public:
  ReweightWhadPt(const char* func_file, const char* func_name);
  ReweightWhadPt(TF1 func);

  char const* getName() const override { return "ReweightWhadPt"; }
  TTreeFunction* clone() const override { return new ReweightWhadPt(function); }

  unsigned getNdata() override { return 1; }
  double evaluate(unsigned) override;

protected:  
 
  void bindTree_(multidraw::FunctionLibrary&) override;
  
  TF1 function;
  
  FloatValueReader* w_had_pt{};
  IntValueReader* VBS_category{};

};

ReweightWhadPt::ReweightWhadPt(const char* func_file, const char* func_name) :
  TTreeFunction()
{
  TFile rootfile {func_file};
  function = *(static_cast<TF1*>(rootfile.Get(func_name)));
  rootfile.Close();

}

ReweightWhadPt::ReweightWhadPt(TF1 func) :
  TTreeFunction(), function(func){};

double
ReweightWhadPt::evaluate(unsigned)
{
  int vbs_cat = *(VBS_category->Get());
  if (vbs_cat != 0){
    return 1.;
  }
  float whadpt = *(w_had_pt->Get());
  return function.Eval(whadpt);
}

void
ReweightWhadPt::bindTree_(multidraw::FunctionLibrary& _library)
{   
    _library.bindBranch( w_had_pt, "w_had_pt");
    _library.bindBranch( VBS_category, "VBS_category");
}



#endif
