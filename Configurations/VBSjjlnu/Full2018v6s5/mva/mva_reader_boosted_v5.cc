#include "LatinoAnalysis/MultiDraw/interface/TTreeFunction.h"
#include "LatinoAnalysis/MultiDraw/interface/FunctionLibrary.h"
#include "NNEvaluation/DNNTensorflow/interface/DNNEvaluator.hh"

#include "TFile.h"
#include "TMath.h"
#include "TGraph.h"

#include <cmath>
#include <string>
#include <iostream>

using namespace std;
using namespace NNEvaluation;

#ifndef MVAREADERBoosted_v5_H
#define MVAREADERBoosted_v5_H

class MVAReaderBoosted_v5 : public multidraw::TTreeFunction {
public:
  
  MVAReaderBoosted_v5(const char* model_path,  const char* transform_path, bool verbose, int category);

  char const* getName() const override { return "MVAReaderBoosted_v5"; }
  TTreeFunction* clone() const override { return new MVAReaderBoosted_v5(model_path_.c_str(), 
                                           transform_path_.c_str(), verbose, category_); }

  std::string model_path_;
  std::string transform_path_;
  int category_;
  TGraph * dnn_transformation; 
  unsigned getNdata() override { return 1; }
  double evaluate(unsigned) override;

protected:  
 
  bool verbose;
  void bindTree_(multidraw::FunctionLibrary&) override;
  ~MVAReaderBoosted_v5();
  
  DNNEvaluator* dnn_tensorflow;

  IntValueReader* VBS_category{};
  FloatValueReader* mjj_vbs{};
  FloatValueReader* vbs_0_pt{};
  FloatValueReader* vbs_1_pt{};
  FloatValueReader* vjet_0_pt{};
  FloatValueReader* deltaeta_vbs{};
  FloatValueReader* deltaphi_vbs{};
  FloatArrayReader* Lepton_pt{};
  FloatArrayReader* Lepton_eta{};
  FloatValueReader* Zlep{};
  FloatValueReader* Asym_vbs{};
};


MVAReaderBoosted_v5::MVAReaderBoosted_v5(const char* model_path, const char* transform_path, bool verbose, int category):
    model_path_(model_path), 
    transform_path_(transform_path),
    verbose(verbose),
    category_(category)
{
    dnn_tensorflow = new DNNEvaluator(model_path_, verbose);

    // Load the TGRaph used to transform the DNN score
    // The TGraph is the cumulative distribution of the DNN on the signal
    TFile * tf_file = new TFile(transform_path_.c_str(), "READ");
    dnn_transformation = (TGraph*) tf_file->Get("cumulative_signal");
    tf_file->Close();
}

MVAReaderBoosted_v5::~MVAReaderBoosted_v5(){
  VBS_category= nullptr;
  mjj_vbs = nullptr;
  vbs_0_pt= nullptr;
  vbs_1_pt= nullptr;
  vjet_0_pt=nullptr;
  deltaeta_vbs= nullptr;
  deltaphi_vbs= nullptr;
  Lepton_eta= nullptr;
  Lepton_pt= nullptr;
  Zlep= nullptr;
  Asym_vbs= nullptr;
  delete dnn_transformation;
  delete dnn_tensorflow;
}


double
MVAReaderBoosted_v5::evaluate(unsigned)
{
  // Run only if 
  if ( *(VBS_category->Get()) != category_) {
    return -999.;
  }

  std::vector<float> input{};
  input.push_back( *(mjj_vbs->Get()) );
  input.push_back( *(vbs_0_pt->Get()) );
  input.push_back( *(vbs_1_pt->Get()) );
  input.push_back( *(vjet_0_pt->Get()) );
  input.push_back( *(deltaeta_vbs->Get()) );
  input.push_back( *(deltaphi_vbs->Get()) );
  input.push_back( Lepton_pt->At(0) );
  input.push_back( Lepton_eta->At(0) );
  input.push_back( *(Zlep->Get()) );
  input.push_back( *(Asym_vbs->Get()) );
  
  double dnn_score = dnn_tensorflow->analyze(input);
  return dnn_transformation->Eval(dnn_score);
}

void
MVAReaderBoosted_v5::bindTree_(multidraw::FunctionLibrary& _library)
{  
  _library.bindBranch(VBS_category, "VBS_category");
  _library.bindBranch(mjj_vbs, "mjj_vbs");
  _library.bindBranch(vbs_0_pt, "vbs_0_pt");
  _library.bindBranch(vjet_0_pt, "vjet_0_pt");
  _library.bindBranch(vbs_1_pt, "vbs_1_pt");
  _library.bindBranch(deltaeta_vbs, "deltaeta_vbs");
  _library.bindBranch(deltaphi_vbs, "deltaphi_vbs");
  _library.bindBranch(Lepton_pt, "Lepton_pt");
  _library.bindBranch(Lepton_eta, "Lepton_eta");
  _library.bindBranch(Zlep, "Zlep");
  _library.bindBranch(Asym_vbs, "Asym_vbs");
}


#endif 