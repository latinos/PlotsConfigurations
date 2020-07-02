#include "LatinoAnalysis/MultiDraw/interface/TTreeFunction.h"
#include "LatinoAnalysis/MultiDraw/interface/FunctionLibrary.h"
#include "NNEvaluation/DNNTensorflow/interface/DNNEvaluator.hh"

#include "TMath.h"

#include <cmath>
#include <string>
#include <iostream>

using namespace std;
using namespace NNEvaluation;

class MVAReader : public multidraw::TTreeFunction {
public:
  
  MVAReader(char* model_path, bool verbose);

  char const* getName() const override { return "MVAReader"; }
  // TTreeFunction* clone() const override { return new MVAReader(file_ele, file_mu); }
  TTreeFunction* clone() const override { return new MVAReader(model_path_, verbose); }

  char* model_path_;
  unsigned getNdata() override { return 1; }
  double evaluate(unsigned) override;

protected:  
 
  bool verbose;
  void bindTree_(multidraw::FunctionLibrary&) override;
  
  DNNEvaluator* dnn_tensorflow;

  FloatArrayReader* Lepton_pt{};
  FloatArrayReader* Lepton_eta{};
  FloatValueReader* vjet_0_pt{};
  FloatValueReader* vjet_1_pt{};
  FloatValueReader* vjet_0_eta{};
  FloatValueReader* vjet_1_eta{};
  FloatValueReader* mjj_vjet{};
  FloatValueReader* deltaeta_vbs{};
  FloatValueReader* deltaphi_vbs{};
  FloatValueReader* vbs_0_pt{};
  FloatValueReader* vbs_1_pt{};
  FloatValueReader* vbs_0_eta{};
  FloatValueReader* vbs_1_eta{};
  FloatValueReader* mjj_vbs{};
};

MVAReader::MVAReader(char* model_path, bool verbose):
    model_path_(model_path), 
    verbose(verbose)
{
    dnn_tensorflow = new DNNEvaluator(model_path_, verbose);
}


double
MVAReader::evaluate(unsigned)
{
    /*
  mjj_vbs', 'vbs_0_pt', 'vbs_1_pt', 
  'vbs_0_eta', 'vbs_1_eta', 'deltaeta_vbs',
   'deltaphi_vbs', 'mjj_vjet', 'vjet_0_pt', 
   'vjet_1_pt', 'vjet_0_eta', 'vjet_1_eta', 
   'Lepton_pt', 'Lepton_eta
  */
  
  std::vector<float> input{};
  input.push_back( *(mjj_vbs->Get()) );
  input.push_back( *(vbs_0_pt->Get()) );
  input.push_back( *(vbs_1_pt->Get()) );
  input.push_back( *(vbs_0_eta->Get()) );
  input.push_back( *(vbs_1_eta->Get()) );
  input.push_back( *(deltaeta_vbs->Get()) );
  input.push_back( *(deltaphi_vbs->Get()) );
  input.push_back( *(mjj_vjet->Get()) );
  input.push_back( *(vjet_0_pt->Get()) );
  input.push_back( *(vjet_1_pt->Get()) );
  input.push_back( *(vjet_0_eta->Get()) );
  input.push_back( *(vjet_1_eta->Get()) );
  input.push_back( Lepton_pt->At(0) );
  input.push_back( TMath::Abs(Lepton_eta->At(0)) );

  // fixme
  return dnn_tensorflow->analyze(input);
  
}

void
MVAReader::bindTree_(multidraw::FunctionLibrary& _library)
{   
  _library.bindBranch (Lepton_pt, "Lepton_pt");
  _library.bindBranch (Lepton_eta, "Lepton_eta");
  _library.bindBranch (vjet_0_pt, "vjet_0_pt");
  _library.bindBranch (vjet_1_pt, "vjet_1_pt");
  _library.bindBranch (vjet_0_eta, "vjet_0_eta");
  _library.bindBranch (vjet_1_eta, "vjet_1_eta");
  _library.bindBranch (mjj_vjet, "mjj_vjet");
  _library.bindBranch (deltaeta_vbs, "deltaeta_vbs");
  _library.bindBranch (deltaphi_vbs, "deltaphi_vbs");
  _library.bindBranch (vbs_0_pt, "vbs_0_pt");
  _library.bindBranch (vbs_1_pt, "vbs_1_pt");
  _library.bindBranch (vbs_0_eta, "vbs_0_eta");
  _library.bindBranch (vbs_1_eta, "vbs_1_eta");
  _library.bindBranch (mjj_vbs, "mjj_vbs");

}

