#include "LatinoAnalysis/MultiDraw/interface/TTreeFunction.h"
#include "LatinoAnalysis/MultiDraw/interface/FunctionLibrary.h"
#include "NNEvaluation/DNNTensorflow/interface/DNNEvaluatorSavedModel.hh"

#include "TFile.h"
#include "TMath.h"
#include "TGraph.h"

#include <cmath>
#include <string>
#include <iostream>

using namespace std;
using namespace NNEvaluation;

#ifndef MVAREADERBoosted_mVscan
#define MVAREADERBoosted_mVscan

typedef TTreeReaderValue<Double_t> DoubleValueReader;

class MVAReaderBoosted_mVscan : public multidraw::TTreeFunction {
public:
  
  MVAReaderBoosted_mVscan(const char* model_path,  const char* transform_path, bool verbose, 
                          int category, float Mmin, float Mmax, int nbins);

  char const* getName() const override { return "MVAReaderBoosted_mVscan"; }
  TTreeFunction* clone() const override { return new MVAReaderBoosted_mVscan(model_path_.c_str(), 
                                           transform_path_.c_str(), verbose, category_, Mmin_, Mmax_, nbins_); }

  std::string model_path_;
  std::string transform_path_;
  float Mmin_;
  float Mmax_;
  int nbins_;
  int category_;
  TGraph * dnn_transformation; 
  std::vector<float> outputValues; 
  unsigned getNdata() override { return outputValues.size(); }
  int getMultiplicity() override { return 1; }
  double evaluate(unsigned) override;
  void beginEvent(long long) override;


protected:  
 
  bool verbose;
  void bindTree_(multidraw::FunctionLibrary&) override;
  ~MVAReaderBoosted_mVscan();
  
  DNNEvaluatorSavedModel* dnn_tensorflow;

  IntValueReader* VBS_category{};

  FloatArrayReader* Lepton_pt{};
  FloatArrayReader* Lepton_eta{};
  DoubleValueReader* nJets30{};

  FloatValueReader* vbs_0_pt{};
  FloatValueReader* vbs_1_pt{};
  FloatValueReader* vjet_0_pt{};
  //FloatValueReader* vjet_0_eta{};

  FloatValueReader* mjj_vbs{};
  // FloatValueReader* mjj_vjet{};

  FloatValueReader* deltaeta_vbs{};
  //FloatValueReader* deltaphi_vbs{};
  
  FloatValueReader* Zvjets_0{};
  FloatValueReader* Zlep{};

  // FloatValueReader* Asym_vbs{};
  // FloatValueReader* A_ww{};
  // FloatValueReader* Centr_vbs{};
  FloatValueReader* Centr_ww{};

  DoubleValueReader* vbs_0_qgl_boost{};
  //DoubleValueReader* vbs_1_qgl_boost{};

/*
 Lepton_pt
- Lepton_eta
- nJets30
- vbs_0_pt
- vbs_1_pt
- vjet_0_pt
- mjj_vbs
- mjj_vjet
- deltaeta_vbs
- Zvjets_0
- Zlep
- Centr_ww
- vbs_0_qgl_boost
*/
};


MVAReaderBoosted_mVscan::MVAReaderBoosted_mVscan(const char* model_path, const char* transform_path, 
                            bool verbose, int category, float Mmin, float Mmax, int nbins):
    model_path_(model_path), 
    transform_path_(transform_path),
    verbose(verbose),
    category_(category),
    Mmin_(Mmin), Mmax_(Mmax), nbins_(nbins)
{
    dnn_tensorflow = new DNNEvaluatorSavedModel(model_path_, verbose);

    // Load the TGRaph used to transform the DNN score
    // The TGraph is the cumulative distribution of the DNN on the signal
    TFile * tf_file = new TFile(transform_path_.c_str(), "READ");
    dnn_transformation = (TGraph*) tf_file->Get("cumulative_signal");
    tf_file->Close();
}



void
MVAReaderBoosted_mVscan::beginEvent(long long _iEntry)
{
  outputValues.clear();
  // Run only if 
  if ( *(VBS_category->Get()) != category_) {
    return;
  }

  std::vector<std::vector<float>> input_batch;
    for (int imjj = 0; imjj < nbins_; imjj++){
      float mjj =  Mmin_ + imjj*( (Mmax_- Mmin_)/ nbins_) ;

      std::vector<float> input{};
      input.push_back( Lepton_pt->At(0) );
      input.push_back( Lepton_eta->At(0) );
      input.push_back( (float) *(nJets30->Get()) );
      input.push_back( *(vbs_0_pt->Get()) );
      input.push_back( *(vbs_1_pt->Get()) );
      input.push_back( *(vjet_0_pt->Get()) );
      input.push_back( *(mjj_vbs->Get()) );
      input.push_back( mjj );
      input.push_back( *(deltaeta_vbs->Get()) );
      input.push_back( *(Zvjets_0->Get()) );
      input.push_back( *(Zlep->Get()) );
      input.push_back( *(Centr_ww->Get()) );
      input.push_back( (float) *(vbs_0_qgl_boost->Get()) );
      
      input_batch.push_back(input);
    }
    // evaluate the batch
    std::vector<std::vector<float>> dnn_scores = dnn_tensorflow->analyze_batch(input_batch);
    for (auto output : dnn_scores){
      outputValues.push_back(dnn_transformation->Eval(output.at(0)));
    }
}


double
MVAReaderBoosted_mVscan::evaluate(unsigned iJ)
{
  return outputValues[iJ];
}

void
MVAReaderBoosted_mVscan::bindTree_(multidraw::FunctionLibrary& _library)
{  
  _library.bindBranch(VBS_category, "VBS_category");
  _library.bindBranch(Lepton_pt, "Lepton_pt");
  _library.bindBranch(Lepton_eta, "Lepton_eta");
  _library.bindBranch(nJets30, "nJets30");

  _library.bindBranch(vbs_0_pt, "vbs_0_pt");
  _library.bindBranch(vbs_1_pt, "vbs_1_pt");
  _library.bindBranch(vjet_0_pt, "vjet_0_pt");
  //_library.bindBranch(vjet_0_eta, "vjet_0_eta");
 
  _library.bindBranch(mjj_vbs, "mjj_vbs");
  // _library.bindBranch(mjj_vjet, "mjj_vjet");

  _library.bindBranch(deltaeta_vbs, "deltaeta_vbs");
  //_library.bindBranch(deltaphi_vbs, "deltaphi_vbs");
  
  _library.bindBranch(Zvjets_0, "Zvjets_0");
  _library.bindBranch(Zlep, "Zlep");

  // _library.bindBranch(Asym_vbs, "Asym_vbs");
  // _library.bindBranch(A_ww, "A_ww");
  // _library.bindBranch(Centr_vbs, "Centr_vbs");
  _library.bindBranch(Centr_ww, "Centr_ww");

  _library.bindBranch(vbs_0_qgl_boost, "vbs_0_qgl_boost");
  //_library.bindBranch(vbs_1_qgl_boost, "vbs_1_qgl_boost");


}



MVAReaderBoosted_mVscan::~MVAReaderBoosted_mVscan(){  
  delete dnn_transformation;
  delete dnn_tensorflow;

  Lepton_pt  = nullptr;
  Lepton_eta  = nullptr;
  nJets30  = nullptr;
  vbs_0_pt  = nullptr;
  vbs_1_pt = nullptr;
  vjet_0_pt = nullptr;
  //vjet_0_eta  = nullptr;
  mjj_vbs = nullptr;
  // mjj_vjet = nullptr;
  deltaeta_vbs = nullptr;
  //deltaphi_vbs = nullptr;
  Zvjets_0 = nullptr;
  Zlep = nullptr;
  // Asym_vbs = nullptr;
  // A_ww = nullptr;
  // Centr_vbs = nullptr;
  Centr_ww = nullptr;
  vbs_0_qgl_boost = nullptr;
  //vbs_1_qgl_boost = nullptr;
}

#endif 