#include "LatinoAnalysis/MultiDraw/interface/TTreeFunction.h"
#include "LatinoAnalysis/MultiDraw/interface/FunctionLibrary.h"
#include "NNEvaluation/DNNTensorflow/interface/DNNEvaluator.hh"

#include "TMath.h"

#include <cmath>
#include <string>
#include <iostream>

using namespace std;
using namespace NNEvaluation;

#ifndef MVAREADERBoosted_v67_H
#define MVAREADERBoosted_v67_H

class MVAReaderBoosted_v67 : public multidraw::TTreeFunction {
public:
  
  MVAReaderBoosted_v67(const char* model_path, bool verbose, int category);

  char const* getName() const override { return "MVAReaderBoosted_v67"; }
  TTreeFunction* clone() const override { return new MVAReaderBoosted_v67(model_path_.c_str(), verbose, category_); }

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
  FloatValueReader* mjj_vbs{};
  FloatValueReader* vbs_0_pt{};
  FloatValueReader* vbs_1_pt{};
  FloatValueReader* deltaeta_vbs{};
  FloatArrayReader* Lepton_eta{};
  FloatValueReader* Zlep{};
};


MVAReaderBoosted_v67::MVAReaderBoosted_v67(const char* model_path, bool verbose, int category):
    model_path_(model_path), 
    verbose(verbose),
    category_(category)
{
    dnn_tensorflow = new DNNEvaluator(model_path_, verbose);
    initialized_ = true;
}


double
MVAReaderBoosted_v67::evaluate(unsigned)
{
  // Run only if 
  if ( *(VBS_category->Get()) != category_) {
    return -999.;
  }

  std::vector<float> input{};
  input.push_back( *(mjj_vbs->Get()) );
  input.push_back( *(vbs_0_pt->Get()) );
  input.push_back( *(vbs_1_pt->Get()) );
  input.push_back( *(deltaeta_vbs->Get()) );
  input.push_back( TMath::Abs(Lepton_eta->At(0)) );
  input.push_back( *(Zlep->Get()) );


  return dnn_tensorflow->analyze(input);
  
}

void
MVAReaderBoosted_v67::bindTree_(multidraw::FunctionLibrary& _library)
{  
  _library.bindBranch(VBS_category, "VBS_category");
  _library.bindBranch(mjj_vbs, "mjj_vbs");
  _library.bindBranch(vbs_0_pt, "vbs_0_pt");
  _library.bindBranch(vbs_1_pt, "vbs_1_pt");
  _library.bindBranch(deltaeta_vbs, "deltaeta_vbs");
  _library.bindBranch(Lepton_eta, "Lepton_eta");
  _library.bindBranch(Zlep, "Zlep");
}


#endif 