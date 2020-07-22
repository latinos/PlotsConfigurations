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

class ReweightPtll : public multidraw::TTreeFunction {
public:
  ReweightPtll(const char* root_file, float min, float max);

  char const* getName() const override { return "ReweightPtll"; }
  TTreeFunction* clone() const override { return new ReweightPtll(_root_file.c_str(), _min, _max); }

  unsigned getNdata() override { return 1; }
  double evaluate(unsigned) override;

protected:  
 
  void bindTree_(multidraw::FunctionLibrary&) override;
  
  string _root_file;
  float _min;
  float _max;
  TGraph* graph; 
  
  FloatValueReader* ptll{};
};

ReweightPtll::ReweightPtll(const char* root_file, float min, float max) :
  TTreeFunction(),_root_file(root_file), _min(min), _max(max)
{
  TFile rootfile{root_file};
  graph = (TGraph*) rootfile.Get("weights");
  rootfile.Close();

}


double
ReweightPtll::evaluate(unsigned)
{
  float pt = *(ptll->Get());

  if (pt < _min) pt = _min;
  if (pt > _max) pt = _max;
  return graph->Eval(pt);
  
}

void
ReweightPtll::bindTree_(multidraw::FunctionLibrary& _library)
{   
    _library.bindBranch(ptll, "ptll");
}

