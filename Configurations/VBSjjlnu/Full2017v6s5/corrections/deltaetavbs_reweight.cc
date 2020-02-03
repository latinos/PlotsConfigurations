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
#include <vector>

using namespace std;

class DeltaEtaVbsReweight : public multidraw::TTreeFunction {
public:
  DeltaEtaVbsReweight(const char* file_mu);

  char const* getName() const override { return "DeltaEtaVbsReweight"; }
  TTreeFunction* clone() const override { return new DeltaEtaVbsReweight(file_mu.c_str()); }

  unsigned getNdata() override { return 1; }
  double evaluate(unsigned) override;

protected:  
 
  void bindTree_(multidraw::FunctionLibrary&) override;
  
  string file_mu;
  vector<pair<float, float>> weights_mu; 

  FloatValueReader*  deltaEtaVbs{};
  IntArrayReader*  Lepton_pdgId{};

};

DeltaEtaVbsReweight::DeltaEtaVbsReweight(const char* file_mu) :
  TTreeFunction(), file_mu(file_mu)
{
  ifstream inputfile_mu {file_mu};
  cout << "Reading file: "<< file_mu << endl;
  if(inputfile_mu.fail())  
  { 
    cout << "error" << endl;
    exit(1);
  }else{
    float bin_lowedge; 
    float w; 
    pair<float, float> p;
    while (inputfile_mu >> bin_lowedge >> w){
      //cout << bin_lowedge << " " << w << endl;
      p.first = bin_lowedge;
      p.second = w;
      weights_mu.push_back(p);
    }  
  } 
}


double
DeltaEtaVbsReweight::evaluate(unsigned)
{
  double de = *(deltaEtaVbs->Get());

  if (abs(Lepton_pdgId->At(0))== 11 || abs(Lepton_pdgId->At(0))== 13) {
    if (de < weights_mu.front().first) {
      return weights_mu.front().second;
    } else if (de > weights_mu.back().first ) {
      return weights_mu.back().second;
    } else {
      for (int i=0; i < weights_mu.size() - 1; i++ ) {
        if ((de >= weights_mu[i].first) && (de < weights_mu[i+1].first)){
          return weights_mu[i].second ;
        }
      }
      return 1;
    }
  }
  else {
    return 1;
  }
}

void
DeltaEtaVbsReweight::bindTree_(multidraw::FunctionLibrary& _library)
{   
    _library.bindBranch( deltaEtaVbs, "deltaeta_vbs");
    _library.bindBranch( Lepton_pdgId, "Lepton_pdgId");
}

