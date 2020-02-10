#include "LatinoAnalysis/MultiDraw/interface/TTreeFunction.h"
#include "LatinoAnalysis/MultiDraw/interface/FunctionLibrary.h"
#include "NNEvaluation/DNNTensorflow/interface/DNNEvaluator.hh"

#include "TMath.h"

#include <cmath>
#include <string>
#include <iostream>

using namespace std;
using namespace NNEvaluation;

#ifndef MVAREADERBoosted_H
#define MVAREADERBoosted_H

class MVAReaderBoosted : public multidraw::TTreeFunction {
public:
  
  MVAReaderBoosted(const char* model_path, bool verbose, int category);

  char const* getName() const override { return "MVAReaderBoosted"; }
  TTreeFunction* clone() const override { return new MVAReaderBoosted(model_path_.c_str(), verbose, category_); }

  bool initialized_ = false;
  std::string model_path_;
  int category_;
  unsigned getNdata() override { return 1; }
  double evaluate(unsigned) override;

protected:  
 
  bool verbose;
  void bindTree_(multidraw::FunctionLibrary&) override;
  
  DNNEvaluator* dnn_tensorflow;

  IntValueReader* VBS_category{};
  FloatArrayReader* Lepton_pt{};
  FloatArrayReader* Lepton_eta{};
  FloatValueReader* mjj_vjet{};
  FloatValueReader* deltaeta_vbs{};
  FloatValueReader* mjj_vbs{};
};


MVAReaderBoosted::MVAReaderBoosted(const char* model_path, bool verbose, int category):
    model_path_(model_path), 
    verbose(verbose),
    category_(category)
{
    dnn_tensorflow = new DNNEvaluator(model_path_, verbose);
    initialized_ = true;
}


double
MVAReaderBoosted::evaluate(unsigned)
{
  // Run only if 
  if ( *(VBS_category->Get()) != category_) {
    return -999.;
  }

  std::vector<float> input{};
  input.push_back( *(mjj_vbs->Get()) );
  input.push_back( *(deltaeta_vbs->Get()) );
  input.push_back( *(mjj_vjet->Get()) );
  input.push_back( Lepton_pt->At(0) );
  input.push_back( TMath::Abs(Lepton_eta->At(0)) );

  return dnn_tensorflow->analyze(input);
  
}

void
MVAReaderBoosted::bindTree_(multidraw::FunctionLibrary& _library)
{  
  _library.bindBranch(VBS_category, "VBS_category");
  _library.bindBranch(mjj_vbs, "mjj_vbs");
  _library.bindBranch(deltaeta_vbs, "deltaeta_vbs");
  _library.bindBranch(mjj_vjet, "mjj_vjet");
  _library.bindBranch(Lepton_pt, "Lepton_pt");
  _library.bindBranch(Lepton_eta, "Lepton_eta");
}


#endif 