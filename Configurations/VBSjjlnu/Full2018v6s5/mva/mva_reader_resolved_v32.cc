#include "LatinoAnalysis/MultiDraw/interface/TTreeFunction.h"
#include "LatinoAnalysis/MultiDraw/interface/FunctionLibrary.h"
#include "NNEvaluation/DNNTensorflow/interface/DNNEvaluator.hh"

#include "TMath.h"

#include <cmath>
#include <string>
#include <iostream>

using namespace std;
using namespace NNEvaluation;

#ifndef MVAREADERResolved_v32_H
#define MVAREADERResolved_v32_H

class MVAReaderResolved_v32 : public multidraw::TTreeFunction {
public:
  
  MVAReaderResolved_v32(const char* model_path, bool verbose, int category);

  char const* getName() const override { return "MVAReaderResolved_v32"; }
  TTreeFunction* clone() const override { return new MVAReaderResolved_v32(model_path_.c_str(), verbose, category_); }

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
  FloatValueReader* vjet_0_pt{};
  FloatValueReader* vjet_1_pt{};
  FloatValueReader* vjet_0_eta{};
  FloatValueReader* vjet_1_eta{};
  FloatValueReader* deltaeta_vbs{};
  FloatValueReader* deltaphi_vbs{};
  FloatValueReader* vbs_0_pt{};
  FloatValueReader* vbs_1_pt{};
  FloatValueReader* vbs_0_eta{};
  FloatValueReader* vbs_1_eta{};
  FloatValueReader* mjj_vbs{};
  IntArrayReader* Lepton_flavour{};
};


MVAReaderResolved_v32::MVAReaderResolved_v32(const char* model_path, bool verbose, int category):
    model_path_(model_path), 
    verbose(verbose),
    category_(category)
{
    dnn_tensorflow = new DNNEvaluator(model_path_, verbose);
}


double
MVAReaderResolved_v32::evaluate(unsigned)
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
  input.push_back( *(deltaphi_vbs->Get()) );
  input.push_back( *(vjet_0_pt->Get()) );
  input.push_back( *(vjet_1_pt->Get()) );
  input.push_back( *(vjet_0_eta->Get()) );
  input.push_back( *(vjet_1_eta->Get()) );
  input.push_back( Lepton_pt->At(0) );
  input.push_back( TMath::Abs(Lepton_eta->At(0)) );
  input.push_back( (float) Lepton_flavour->At(0) );

  return dnn_tensorflow->analyze(input);
  
}

void
MVAReaderResolved_v32::bindTree_(multidraw::FunctionLibrary& _library)
{  
  _library.bindBranch(VBS_category, "VBS_category");
  _library.bindBranch(mjj_vbs, "mjj_vbs");
  _library.bindBranch(vbs_0_pt, "vbs_0_pt");
  _library.bindBranch(vbs_1_pt, "vbs_1_pt");
  _library.bindBranch(deltaeta_vbs, "deltaeta_vbs");
  _library.bindBranch(deltaphi_vbs, "deltaphi_vbs");
  _library.bindBranch(vjet_0_pt, "vjet_0_pt");
  _library.bindBranch(vjet_1_pt, "vjet_1_pt");
  _library.bindBranch(vjet_0_eta, "vjet_0_eta");
  _library.bindBranch(vjet_1_eta, "vjet_1_eta");
  _library.bindBranch(Lepton_pt, "Lepton_pt");
  _library.bindBranch(Lepton_eta, "Lepton_eta");
  _library.bindBranch(Lepton_flavour, "Lepton_pdgId");

  // _library.addDestructorCallback([&]() {
  //       VBS_category = nullptr;
  //       mjj_vbs = nullptr;
  //       vbs_0_pt = nullptr;
  //       vbs_1_pt = nullptr;
  //       deltaeta_vbs = nullptr;
  //       deltaphi_vbs = nullptr;
  //       vjet_0_eta= nullptr;
  //       vjet_1_eta = nullptr;
  //       vjet_0_pt = nullptr;
  //       vjet_1_pt = nullptr;
  //       Lepton_pt = nullptr;
  //       Lepton_eta = nullptr;
  //       Lepton_flavour = nullptr;
  //       delete dnn_tensorflow;
  //     });
}


#endif 