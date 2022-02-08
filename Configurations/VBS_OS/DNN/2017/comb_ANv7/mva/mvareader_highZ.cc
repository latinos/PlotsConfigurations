#include "LatinoAnalysis/MultiDraw/interface/TTreeFunction.h"
#include "LatinoAnalysis/MultiDraw/interface/FunctionLibrary.h"
#include "NNEvaluation/DNNTensorflow/interface/DNNEvaluator.hh"

#include "TMath.h"

#include <cmath>
#include <string>
#include <iostream>

using namespace std;
using namespace NNEvaluation;

#ifndef MVAReader_highZ_H
#define MVAReader_highZ_H

class MVAReader_highZ : public multidraw::TTreeFunction {
public:
  
  MVAReader_highZ(const char* model_path, bool verbose, int cut);

  char const* getName() const override { return "MVAReader_highZ"; }
  TTreeFunction* clone() const override { return new MVAReader_highZ(model_path_.c_str(), verbose, cut_); }

  std::string model_path_;
  int cut_;
  unsigned getNdata() override { return 1; }
  double evaluate(unsigned) override;

protected:  
 
  bool verbose;
  void bindTree_(multidraw::FunctionLibrary&) override;
  
  DNNEvaluator* dnn_tensorflow;
  
  TTreeReaderValue<Double_t>* cut_index{};

  FloatValueReader* mjj{};
  TTreeReaderValue<Double_t>* jetpt1{};
  TTreeReaderValue<Double_t>* jetpt2{};
  FloatValueReader* detajj{};
  FloatValueReader* ptll{};
  // TTreeReaderValue<Double_t>* detall{};
  // FloatValueReader* met{};
  // TTreeReaderValue<Double_t>* dphijj{};
  // FloatValueReader* Mll{};
  // TTreeReaderValue<Double_t>* dR_jl1{};
  // TTreeReaderValue<Double_t>* dR_jl2{};
  TTreeReaderValue<Double_t>* Zepp1{};
  TTreeReaderValue<Double_t>* Zepp2{};
  FloatValueReader* dphill{};
  //TTreeReaderValue<Double_t>* qgl_forward{};
  //TTreeReaderValue<Double_t>* qgl_central{};
  FloatValueReader* mtw1{};
  // FloatValueReader* mtw2{};
  
};

MVAReader_highZ::MVAReader_highZ(const char* model_path, bool verbose, int cut):
    model_path_(model_path), 
    verbose(verbose),
    cut_(cut)
{
    dnn_tensorflow = new DNNEvaluator(model_path_, verbose);
}


double 
MVAReader_highZ::evaluate(unsigned)
{
  // Run only if 
  if ((int)(*(cut_index->Get())) != cut_) {
    return -999.;
  }
  // std::cout << "cut_index = " << (int)(*(cut_index->Get())) << "; cut =  " << cut_ << std::endl;

  std::vector<float> input{};

  input.push_back( *(mjj->Get()) );
  input.push_back( *(jetpt1->Get()) );
  input.push_back( *(jetpt2->Get()) );
  input.push_back( TMath::Abs(*(detajj->Get())));
  input.push_back( *(ptll->Get()) );
  //input.push_back( *(qgl_forward->Get()) );
  //input.push_back( *(qgl_central->Get()) );
  // input.push_back( *(detall->Get()) );
  // input.push_back( *(met->Get()) );
  // input.push_back( *(Mll->Get()) );
  // input.push_back( *(dR_jl1->Get()) );
  // input.push_back( *(dR_jl2->Get()) );
  input.push_back( *(Zepp1->Get()) );
  input.push_back( *(Zepp2->Get()) );
  //input.push_back( *(dphijj->Get()) );
  input.push_back( TMath::Abs(*(dphill->Get())));
  input.push_back( *(mtw1->Get()) );
  // input.push_back( *(mtw2->Get()) );


  return dnn_tensorflow->analyze(input);

}

void
MVAReader_highZ::bindTree_(multidraw::FunctionLibrary& _library)
{  
  
  _library.bindBranch(cut_index, "cut_index");
  _library.bindBranch(mjj, "mjj");
  _library.bindBranch(jetpt1, "jetpt1_al");
  _library.bindBranch(jetpt2, "jetpt2_al");
  _library.bindBranch(detajj, "detajj");
  _library.bindBranch(ptll, "ptll");
  _library.bindBranch(Zepp1, "Zepp1_al");
  _library.bindBranch(Zepp2, "Zepp2_al");
  // _library.bindBranch(detall, "detall_al");
  // _library.bindBranch(met, "MET_pt");
  _library.bindBranch(dphill, "dphill");
  // _library.bindBranch(dphijj, "dphijj_al");
  // _library.bindBranch(Mll, "mll");
  // _library.bindBranch(dR_jl1, "dR_jl1_al");
  // _library.bindBranch(dR_jl2, "dR_jl2_al");
  // _library.bindBranch(qgl_forward, "qgl_forward");
  // _library.bindBranch(qgl_central, "qgl_central");
  _library.bindBranch(mtw1, "mtw1");
  // _library.bindBranch(mtw2, "mtw2");
}


#endif
