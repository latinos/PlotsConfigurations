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
  // NvtxReweight(char * file_ele, char* file_mu);
  NvtxReweight(char* file_mu);

  char const* getName() const override { return "NvtxReweight"; }
  // TTreeFunction* clone() const override { return new NvtxReweight(file_ele, file_mu); }
  TTreeFunction* clone() const override { return new NvtxReweight(file_mu); }

  unsigned getNdata() override { return 1; }
  double evaluate(unsigned) override;

protected:  
 
  void bindTree_(multidraw::FunctionLibrary&) override;
  
  // char * file_ele;
  char * file_mu;
  // map<int, float> weights_ele; 
  map<int, float> weights_mu; 
  // int max_nvtx_ele = -1;
  int max_nvtx_mu = -1;

  IntValueReader*  nvtx{};
  IntArrayReader*  Lepton_pdgId{};

};

// NvtxReweight::NvtxReweight(char * file_ele, char* file_mu) :
  // TTreeFunction(), file_ele(file_ele), file_mu(file_mu)
NvtxReweight::NvtxReweight(char* file_mu) :
  TTreeFunction(), file_mu(file_mu)
{
  // ifstream inputfile_ele {file_ele};
  // cout << "Reading file: "<< file_ele << endl;
  // if(inputfile_ele.fail())  
  // { 
  //   cout << "error" << endl;
  //   exit(1);
  // }else{
  //   int nv; 
  //   float w; 
  //   while (! inputfile_ele.eof()){
  //     inputfile_ele >> nv >> w; 
  //     cout << nv << " " << w << endl;
  //     weights_ele[nv] = w;
  //     if (nv > max_nvtx_ele) max_nvtx_ele = nv;
  //   }  
  // } 
  ifstream inputfile_mu {file_mu};
  cout << "Reading file: "<< file_mu << endl;
  if(inputfile_mu.fail())  
  { 
    cout << "error" << endl;
    exit(1);
  }else{
    int nv; 
    float w; 
    while (! inputfile_mu.eof()){
      inputfile_mu >> nv >> w; 
      cout << nv << " " << w << endl;
      weights_mu[nv] = w;
      if (nv > max_nvtx_mu) max_nvtx_mu = nv;
    }  
  } 
}


double
NvtxReweight::evaluate(unsigned)
{
  int NV = *(nvtx->Get());

  // if (abs(Lepton_pdgId->At(0))== 11 ) {
  //   if (NV > max_nvtx_ele) NV = max_nvtx_ele;
  //   if (NV == 0 || NV == 1)
  //     cout << "apply weight ele 11 : " << NV << " " << weights_ele[NV] << endl ;
  //   return weights_ele[NV];
  // }
  // else if (abs(Lepton_pdgId->At(0))== 13 ){
  //   if (NV > max_nvtx_mu) NV = max_nvtx_mu;
  //   if (NV == 0 || NV == 1)
  //     cout << "apply weight mu 13 : " << NV << " " << weights_mu[NV] << endl ;
  //   return weights_mu[NV];
  // }
  if (abs(Lepton_pdgId->At(0))== 11 || abs(Lepton_pdgId->At(0))== 13) {
    if (NV > max_nvtx_mu) NV = max_nvtx_mu;
    return weights_mu[NV];
  }
  else {
    return 1;
  }
}

void
NvtxReweight::bindTree_(multidraw::FunctionLibrary& _library)
{   
    _library.bindBranch( nvtx, "PV_npvsGood");
    _library.bindBranch( Lepton_pdgId, "Lepton_pdgId");
}

