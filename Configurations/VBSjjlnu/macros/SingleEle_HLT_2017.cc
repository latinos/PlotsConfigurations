#include "LatinoAnalysis/MultiDraw/interface/TTreeFunction.h"
#include "LatinoAnalysis/MultiDraw/interface/FunctionLibrary.h"

#include "TMath.h"
#include "TFile.h"
#include "TGraph.h"
#include "TVector2.h"
#include "TSystem.h"
#include "TLorentzVector.h"

#include <cmath>
#include <string>
#include <unordered_map>
#include <iostream>
#include <stdexcept>
#include <tuple>


#ifndef SingleEleHLT__
#define SingleEleHLT__



class SingleEleHLT : public multidraw::TTreeFunction {
public:
  SingleEleHLT(): TTreeFunction(){};
  ~SingleEleHLT();

  char const* getName() const override { return "SingleEleHLT"; }
  TTreeFunction* clone() const override { return new SingleEleHLT();}
  
  unsigned getNdata() override { return 1;}
  double evaluate(unsigned) override;

protected:
  void bindTree_(multidraw::FunctionLibrary&) override;
  
  BoolValueReader * HLT_trig;
};


double
SingleEleHLT::evaluate(unsigned )
{
  return *(HLT_trig->Get());  
}


void
SingleEleHLT::bindTree_(multidraw::FunctionLibrary& _library)
{
    if (isRunningEle()){
      std::cout << "Binding ele"<<std::endl;
      _library.bindBranch(HLT_trig, "HLT_Ele32_WPTight_Gsf_L1DoubleEG");
    }else{
      std::cout << "Binding mu"<<std::endl;
      _library.bindBranch(HLT_trig, "HLT_IsoMu27");
    }
}

SingleEleHLT::~SingleEleHLT(){
    HLT_trig = nullptr;
}

#endif