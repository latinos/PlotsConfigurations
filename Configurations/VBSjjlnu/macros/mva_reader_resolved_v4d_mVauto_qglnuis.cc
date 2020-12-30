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

#ifndef MVAREADERResolved_mVauto_qglnuis
#define MVAREADERResolved_mVauto_qglnuis

typedef TTreeReaderValue<Double_t> DoubleValueReader;

class MVAReaderResolved_mVauto_qglnuis : public multidraw::TTreeFunction {
public:
  
  MVAReaderResolved_mVauto_qglnuis(const char* model_path,  const char* transform_path, bool verbose, int category);

  char const* getName() const override { return "MVAReaderResolved_mVauto_qglnuis"; }
  TTreeFunction* clone() const override { return new MVAReaderResolved_mVauto_qglnuis(model_path_.c_str(), 
                                           transform_path_.c_str(), verbose, category_); }

  std::string model_path_;
  std::string transform_path_;
  int category_;
  TGraph * dnn_transformation; 
  std::vector<float> outputValues;
  bool filled_{false};
  double evaluate(unsigned) override;
  unsigned getNdata() override { return 3; }
  int getMultiplicity() override { return 1; }
  void setValues();
  void beginEvent(long long )override;

protected:  
 
  bool verbose;
  void bindTree_(multidraw::FunctionLibrary&) override;
  ~MVAReaderResolved_mVauto_qglnuis();
  
  DNNEvaluatorSavedModel* dnn_tensorflow;

  IntValueReader* VBS_category{};

  FloatArrayReader* Lepton_pt{};
  FloatArrayReader* Lepton_eta{};
  DoubleValueReader* nJets30{};

  //FloatValueReader* vbs_0_pt{};
  FloatValueReader* vbs_1_pt{};
  FloatValueReader* vjet_0_pt{};
  FloatValueReader* vjet_1_pt{};

  FloatValueReader* mjj_vbs{};
  FloatValueReader* mjj_vjet{};

  FloatValueReader* deltaeta_vbs{};
  FloatValueReader* deltaphi_vbs{};
  FloatValueReader* deltaeta_vjet{};
  
  //FloatValueReader* Zvjets_0{};
  FloatValueReader* Zlep{};

  // FloatValueReader* Asym_vbs{};
  // FloatValueReader* A_ww{};
  // FloatValueReader* Centr_vbs{};
  FloatValueReader* Centr_ww{};

  DoubleValueReader* vbs_0_qgl_res{};
  DoubleValueReader* vjet_0_qgl_res{};
  DoubleValueReader* vjet_1_qgl_res{};

  DoubleValueReader* vbs_0_qgl_res_up{};
  DoubleValueReader* vjet_0_qgl_res_up{};
  DoubleValueReader* vjet_1_qgl_res_up{};

  DoubleValueReader* vbs_0_qgl_res_do{};
  DoubleValueReader* vjet_0_qgl_res_do{};
  DoubleValueReader* vjet_1_qgl_res_do{};

/*
 Lepton_pt
- Lepton_eta
- nJets30
- vbs_1_pt
- vjet_0_pt
- vjet_1_pt
- mjj_vbs
- mjj_vjet
- deltaeta_vbs
- deltaphi_vbs
- deltaeta_vjet
- Zlep
- Centr_ww
- vbs_0_qgl_res
- vjet_0_qgl_res
- vjet_1_qgl_res
*/
};


MVAReaderResolved_mVauto_qglnuis::MVAReaderResolved_mVauto_qglnuis(const char* model_path, const char* transform_path, bool verbose, int category):
    model_path_(model_path), 
    transform_path_(transform_path),
    verbose(verbose),
    category_(category)
{
    dnn_tensorflow = new DNNEvaluatorSavedModel(model_path_, verbose);

    // Load the TGRaph used to transform the DNN score
    // The TGraph is the cumulative distribution of the DNN on the signal
    TFile * tf_file = new TFile(transform_path_.c_str(), "READ");
    dnn_transformation = (TGraph*) tf_file->Get("cumulative_signal");
    tf_file->Close();
}


void
MVAReaderResolved_mVauto_qglnuis::beginEvent(long long _iEntry){
  filled_ = false;
}

void
MVAReaderResolved_mVauto_qglnuis::setValues()
{
  outputValues.clear();
    
  if ( *(VBS_category->Get()) != category_) {
    outputValues.push_back(-1.);
    outputValues.push_back(-1.);
    outputValues.push_back(-1.);
  }else{
      //Using mean value of mjj_vjet (for W+jets) if out of training region
    float mV = *(mjj_vjet->Get());
    if (mV <= 65 || mV >= 105) mV = 85.4;

    std::vector<std::vector<float>> input_batch;
    for (int i = 0; i< 3; i++){
      std::vector<float> input{};
      input.push_back( Lepton_pt->At(0) );
      input.push_back( Lepton_eta->At(0) );
      input.push_back( (float) *(nJets30->Get()) );
      //input.push_back( *(vbs_0_pt->Get()) );
      input.push_back( *(vbs_1_pt->Get()) );
      input.push_back( *(vjet_0_pt->Get()) );
      input.push_back( *(vjet_1_pt->Get()) );
      input.push_back( *(mjj_vbs->Get()) );
      input.push_back( mV );
      input.push_back( *(deltaeta_vbs->Get()) );
      input.push_back( *(deltaphi_vbs->Get()) );
      input.push_back( *(deltaeta_vjet->Get()) );
      //input.push_back( *(Zvjets_0->Get()) );
      input.push_back( *(Zlep->Get()) );
      // input.push_back( *(Asym_vbs->Get()) );
      // input.push_back( *(A_ww->Get()) );
      // input.push_back( *(Centr_vbs->Get()) );
      input.push_back( *(Centr_ww->Get()) );

      if (i==0){
        input.push_back( (float) *(vbs_0_qgl_res->Get()) );
        input.push_back( (float) *(vjet_0_qgl_res->Get()) );
        input.push_back( (float) *(vjet_1_qgl_res->Get()) );
      } else if(i ==1){
        input.push_back( (float) *(vbs_0_qgl_res_up->Get()) );
        input.push_back( (float) *(vjet_0_qgl_res_up->Get()) );
        input.push_back( (float) *(vjet_1_qgl_res_up->Get()) );
      }else if(i ==2){
        input.push_back( (float) *(vbs_0_qgl_res_do->Get()) );
        input.push_back( (float) *(vjet_0_qgl_res_do->Get()) );
        input.push_back( (float) *(vjet_1_qgl_res_do->Get()) );
      }
      input_batch.push_back(input);
    }
    // cout << "  QGL nom: "<< input_batch[0][13] << " " << input_batch[0][14] << " " << input_batch[0][15] << endl;
    // cout << "  QGL up: "<< input_batch[1][13] << " " << input_batch[1][14] << " " << input_batch[1][15] << endl;
    // cout << "  QGL do: "<< input_batch[2][13] << " " << input_batch[2][14] << " " << input_batch[2][15] << endl;

    // Evaluate the batch
    std::vector<std::vector<float>> dnn_scores = dnn_tensorflow->analyze_batch(input_batch);
    for (auto output : dnn_scores){
      outputValues.push_back(dnn_transformation->Eval(output.at(0)));
    }
  }
  // std::for_each(outputValues.begin(), outputValues.end(), [](float v){cout << v << " ";});
  // cout << endl;
  filled_ = true; 
}


double
MVAReaderResolved_mVauto_qglnuis::evaluate(unsigned iJ)
{
  if (!filled_) setValues();
  return outputValues[iJ];
}

void
MVAReaderResolved_mVauto_qglnuis::bindTree_(multidraw::FunctionLibrary& _library)
{  
  _library.bindBranch(VBS_category, "VBS_category");
  _library.bindBranch(Lepton_pt, "Lepton_pt");
  _library.bindBranch(Lepton_eta, "Lepton_eta");
  _library.bindBranch(nJets30, "nJets30");

  //_library.bindBranch(vbs_0_pt, "vbs_0_pt");
  _library.bindBranch(vbs_1_pt, "vbs_1_pt");
  _library.bindBranch(vjet_0_pt, "vjet_0_pt");
  _library.bindBranch(vjet_1_pt, "vjet_1_pt");
 
  _library.bindBranch(mjj_vbs, "mjj_vbs");
  _library.bindBranch(mjj_vjet, "mjj_vjet");

  _library.bindBranch(deltaeta_vbs, "deltaeta_vbs");
  _library.bindBranch(deltaphi_vbs, "deltaphi_vbs");
  _library.bindBranch(deltaeta_vjet, "deltaeta_vjet");

  //_library.bindBranch(Zvjets_0, "Zvjets_0");
  _library.bindBranch(Zlep, "Zlep");

  // _library.bindBranch(Asym_vbs, "Asym_vbs");
  // _library.bindBranch(A_ww, "A_ww");
  // _library.bindBranch(Centr_vbs, "Centr_vbs");
  _library.bindBranch(Centr_ww, "Centr_ww");

  _library.bindBranch(vbs_0_qgl_res, "vbs_0_qgl_res");
  _library.bindBranch(vjet_0_qgl_res, "vjet_0_qgl_res");
  _library.bindBranch(vjet_1_qgl_res, "vjet_1_qgl_res");

  _library.bindBranch(vbs_0_qgl_res_up, "vbs_0_qgl_res_up");
  _library.bindBranch(vjet_0_qgl_res_up, "vjet_0_qgl_res_up");
  _library.bindBranch(vjet_1_qgl_res_up, "vjet_1_qgl_res_up");

  _library.bindBranch(vbs_0_qgl_res_do, "vbs_0_qgl_res_do");
  _library.bindBranch(vjet_0_qgl_res_do, "vjet_0_qgl_res_do");
  _library.bindBranch(vjet_1_qgl_res_do, "vjet_1_qgl_res_do");

}

MVAReaderResolved_mVauto_qglnuis::~MVAReaderResolved_mVauto_qglnuis(){
    delete dnn_transformation;
    delete dnn_tensorflow;

    Lepton_pt  = nullptr;
    Lepton_eta  = nullptr;
    nJets30  = nullptr;
    //vbs_0_pt  = nullptr;
    vbs_1_pt = nullptr;
    vjet_0_pt = nullptr;
    vjet_1_pt = nullptr;
    mjj_vbs = nullptr;
    mjj_vjet = nullptr;
    deltaeta_vbs = nullptr;
    deltaphi_vbs = nullptr;
    deltaeta_vjet = nullptr;
   // Zvjets_0 = nullptr;
    Zlep  = nullptr;
    // Asym_vbs = nullptr;
    // A_ww = nullptr;
    // Centr_vbs = nullptr;
    Centr_ww = nullptr;
    vbs_0_qgl_res = nullptr;
    vjet_0_qgl_res = nullptr;
    vjet_1_qgl_res = nullptr;
     vbs_0_qgl_res_up = nullptr;
    vjet_0_qgl_res_up = nullptr;
    vjet_1_qgl_res_up = nullptr;
     vbs_0_qgl_res_do = nullptr;
    vjet_0_qgl_res_do = nullptr;
    vjet_1_qgl_res_do = nullptr;
}


#endif 