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

#ifndef MVAREADERResolved_mVauto_2017
#define MVAREADERResolved_mVauto_2017

typedef TTreeReaderValue<Double_t> DoubleValueReader;

class MVAReaderResolved_mVauto_2017 : public multidraw::TTreeFunction {
public:
  
  MVAReaderResolved_mVauto_2017(const char* model_path,  const char* transform_path, bool verbose, int category);

  char const* getName() const override { return "MVAReaderResolved_mVauto_2017"; }
  TTreeFunction* clone() const override { return new MVAReaderResolved_mVauto_2017(model_path_.c_str(), 
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
  ~MVAReaderResolved_mVauto_2017();
  
  DNNEvaluatorSavedModel* dnn_tensorflow;

  DoubleValueReader* VBS_category{};

  FloatArrayReader* Lepton_pt{};
  FloatArrayReader* Lepton_eta{};
  DoubleValueReader* nJets30{};

  //FloatValueReader* vbs_0_pt{};
  DoubleValueReader* vbs_1_pt{};
  DoubleValueReader* vjet_0_pt{};
  DoubleValueReader* vjet_1_pt{};

  DoubleValueReader* mjj_vbs{};
  DoubleValueReader* mjj_vjet{};

  DoubleValueReader* deltaeta_vbs{};
  DoubleValueReader* deltaphi_vbs{};
  DoubleValueReader* deltaeta_vjet{};
  
  //DoubleValueReader* Zvjets_0{};
  DoubleValueReader* Zlep{};

  // DoubleValueReader* Asym_vbs{};
  // DoubleValueReader* A_ww{};
  // DoubleValueReader* Centr_vbs{};
  DoubleValueReader* Centr_ww{};

  DoubleValueReader* vbs_0_qgl_res{};
  DoubleValueReader* vjet_0_qgl_res{};
  DoubleValueReader* vjet_1_qgl_res{};

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


MVAReaderResolved_mVauto_2017::MVAReaderResolved_mVauto_2017(const char* model_path, const char* transform_path, bool verbose, int category):
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



double
MVAReaderResolved_mVauto_2017::evaluate(unsigned)
{
  // Run only if 
  if ( static_cast<int>(*(VBS_category->Get())) != category_) {
    return -999.;
  }

  //Using mean value of mjj_vjet (for W+jets) if out of training region
  float mV = *(mjj_vjet->Get());
  if (mV <= 65 || mV >= 105) mV = 85.4;


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
  input.push_back( (float) *(vbs_0_qgl_res->Get()) );
  input.push_back( (float) *(vjet_0_qgl_res->Get()) );
  input.push_back( (float) *(vjet_1_qgl_res->Get()) );
  
  vector<float> dnn_scores = dnn_tensorflow->analyze(input);
  return dnn_transformation->Eval(dnn_scores.at(0));
}

void
MVAReaderResolved_mVauto_2017::bindTree_(multidraw::FunctionLibrary& _library)
{  
  _library.bindBranch(VBS_category, "VBS_category_OTF");
  _library.bindBranch(Lepton_pt, "Lepton_pt");
  _library.bindBranch(Lepton_eta, "Lepton_eta");
  _library.bindBranch(nJets30, "nJets30");

  //_library.bindBranch(vbs_0_pt, "vbs_0_pt");
  _library.bindBranch(vbs_1_pt, "vbs_1_pt_OTF");
  _library.bindBranch(vjet_0_pt, "vjet_0_pt_OTF");
  _library.bindBranch(vjet_1_pt, "vjet_1_pt_OTF");

  _library.bindBranch(mjj_vbs, "mjj_vbs_OTF");
  _library.bindBranch(mjj_vjet, "mjj_vjet_OTF");

  _library.bindBranch(deltaeta_vbs, "deltaeta_vbs_OTF");
  _library.bindBranch(deltaphi_vbs, "deltaphi_vbs_OTF");
  _library.bindBranch(deltaeta_vjet, "deltaeta_vjet_OTF");

  //_library.bindBranch(Zvjets_0, "Zvjets_0");
  _library.bindBranch(Zlep, "Zlep_OTF");

  // _library.bindBranch(Asym_vbs, "Asym_vbs");
  // _library.bindBranch(A_ww, "A_ww");
  // _library.bindBranch(Centr_vbs, "Centr_vbs");
  _library.bindBranch(Centr_ww, "Centr_ww_OTF");

  _library.bindBranch(vbs_0_qgl_res, "vbs_0_qgl_res");
  _library.bindBranch(vjet_0_qgl_res, "vjet_0_qgl_res");
  _library.bindBranch(vjet_1_qgl_res, "vjet_1_qgl_res");
  
  
}

MVAReaderResolved_mVauto_2017::~MVAReaderResolved_mVauto_2017(){
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
}


#endif 