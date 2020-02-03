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

class ReweightLeptonPt : public multidraw::TTreeFunction {
public:
  ReweightLeptonPt(const char* func_file_ele, const char* func_file_mu, const char* func_name, float max_extrap);
  ReweightLeptonPt(TF1 func_ele,TF1 func_mu, float max_extrap);

  char const* getName() const override { return "ReweightLeptonPt"; }
  TTreeFunction* clone() const override { return new ReweightLeptonPt(function_ele,function_mu, max_extrap); }

  unsigned getNdata() override { return 1; }
  double evaluate(unsigned) override;

protected:  
 
  void bindTree_(multidraw::FunctionLibrary&) override;
  
  TF1 function_ele, function_mu;
  float max_extrap; // used to limit the extrapolation
  
  FloatArrayReader* LeptonPt{};
  IntArrayReader* Lepton_pdgId{};

};

ReweightLeptonPt::ReweightLeptonPt(const char* func_file_ele, const char* func_file_mu, const char* func_name, float max_extrap) :
  TTreeFunction(), max_extrap(max_extrap)
{
  TFile rootfile_ele {func_file_ele};
  function_ele = *(static_cast<TF1*>(rootfile_ele.Get(func_name)));
  rootfile_ele.Close();

  TFile rootfile_mu {func_file_mu};
  function_mu = *(static_cast<TF1*>(rootfile_mu.Get(func_name)));
  rootfile_mu.Close();
}

ReweightLeptonPt::ReweightLeptonPt(TF1 func_ele,TF1 func_mu, float max_extrap) :
  TTreeFunction(), function_ele(func_ele),function_mu(func_mu), max_extrap(max_extrap){};

double
ReweightLeptonPt::evaluate(unsigned)
{
  double leppt = LeptonPt->At(0);
  int pdgid = Lepton_pdgId->At(0);

  if (abs(pdgid) == 11){
    if (leppt >= max_extrap){
      return function_ele.Eval(max_extrap);
    }else{
      return function_ele.Eval(leppt);
    }
  }

  if (abs(pdgid) == 13){
    if (leppt >= max_extrap){
      return function_mu.Eval(max_extrap);
    }else{
      return function_mu.Eval(leppt);
    }
  }

  return 1.;
  
}

void
ReweightLeptonPt::bindTree_(multidraw::FunctionLibrary& _library)
{   
    _library.bindBranch( LeptonPt, "Lepton_pt");
    _library.bindBranch(Lepton_pdgId, "Lepton_pdgId");
}

