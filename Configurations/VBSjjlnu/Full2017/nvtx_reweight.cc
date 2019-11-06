#include "LatinoAnalysis/MultiDraw/interface/TTreeFunction.h"
#include "LatinoAnalysis/MultiDraw/interface/FunctionLibrary.h"

#include "TMath.h"
#include "TGraph.h"
#include "TFile.h"
#include "TF1.h"
#include "TH2F.h"
#include "TVector2.h"
#include "TSystem.h"
#include "TLorentzVector.h"

#include <cmath>
#include <string>
#include <unordered_map>
#include <iostream>
#include <stdexcept>
#include <tuple>
#include <map>

using namespace std;

class NvtxReweight : public multidraw::TTreeFunction {
public:
  NvtxReweight(char * file);

  char const* getName() const override { return "NvtxReweight"; }
  TTreeFunction* clone() const override { return new NvtxReweight(file); }

  unsigned getNdata() override { return 1; }
  double evaluate(unsigned) override;

protected:  
 
  void bindTree_(multidraw::FunctionLibrary&) override;
  
  char * file;
  map<int, float> weights; 
  int max_nvtx;

  IntValueReader*  nvtx{};

};

NvtxReweight::NvtxReweight(char * file) :
  TTreeFunction(), file(file)
{
  max_nvtx = -1;
  string line; 
  ifstream inputfile {file};
  if(inputfile.fail())  
  { 
    cout << "error" << endl;
  } 
  int nv; 
  float w; 
  while (! inputfile.eof()){
    inputfile >> nv >> w; 
    cout << nv << " " << w << endl;
    weights[nv] = w;
    if (nv > max_nvtx) max_nvtx = nv;
  }   
}


double
NvtxReweight::evaluate(unsigned)
{
  int NV = *(nvtx->Get());
  if (NV > max_nvtx) NV = max_nvtx;
  return weights[NV];
}

void
NvtxReweight::bindTree_(multidraw::FunctionLibrary& _library)
{   
    _library.bindBranch( nvtx, "PV_npvs");
}

