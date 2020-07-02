#include "LatinoAnalysis/MultiDraw/interface/TTreeFunction.h"
#include "LatinoAnalysis/MultiDraw/interface/FunctionLibrary.h"
#include "NNEvaluation/DNNTensorflow/interface/DNNEvaluator.hh"

#include "TMath.h"

#include <cmath>
#include <string>
#include <iostream>

using namespace std;
using namespace NNEvaluation;

#ifndef MVAREADERResolved_H
#define MVAREADERResolved_H

class MVAReaderResolved : public multidraw::TTreeFunction {
public:
  
  MVAReaderResolved(const char* model_path, bool verbose, int category);

  char const* getName() const override { return "MVAReaderResolved"; }
  TTreeFunction* clone() const override { return new MVAReaderResolved(model_path_.c_str(), verbose, category_); }

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
  FloatValueReader* Centr_vbs{};
  FloatValueReader* Centr_ww{};
  FloatValueReader* R_ww{};
  FloatValueReader* R_mw{};
  FloatValueReader* Mtw_lep{};
  FloatValueReader* w_lep_pt{};
  FloatValueReader* Mww{};
  FloatValueReader* A_ww{};
  FloatValueReader* Asym_vbs{};
  FloatValueReader* Asym_vjet{};
  FloatValueReader* Zvjets_0{};
  FloatValueReader* Zlep{};
  FloatArrayReader* PuppiMET{};
  FloatArrayReader* Lepton_pt{};
  FloatArrayReader* Lepton_eta{};
  IntArrayReader* Lepton_flavour{}; // check
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


MVAReaderResolved::MVAReaderResolved(const char* model_path, bool verbose, int category):
    model_path_(model_path), 
    verbose(verbose),
    category_(category)
{
    dnn_tensorflow = new DNNEvaluator(model_path_, verbose);
    initialized_ = true;
}


double
MVAReaderResolved::evaluate(unsigned)
{
  // Run only if 
  if ( *(VBS_category->Get()) != category_) {
    return -999.;
  }

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
  input.push_back( (float) TMath::Abs(Lepton_flavour->At(0)) );
  input.push_back( PuppiMET->At(0) );
  input.push_back( *(Zvjets_0 -> Get()) ) ;
  input.push_back( *(Zlep -> Get()) ) ;
  input.push_back( *(Asym_vbs -> Get()) ) ;
  input.push_back( *(Asym_vjet -> Get()) ) ;
  input.push_back( *(A_ww -> Get()) ) ;
  input.push_back( *(Mtw_lep -> Get()) ) ;
  input.push_back( *(w_lep_pt -> Get()) ) ;
  input.push_back( *(Mww -> Get()) ) ;
  input.push_back( *(R_ww -> Get()) ) ;
  input.push_back( *(R_mw -> Get()) ) ;
  input.push_back( *(Centr_vbs -> Get()) ) ;
  input.push_back( *(Centr_ww -> Get()) ) ;

  return dnn_tensorflow->analyze(input);
  
}

void
MVAReaderResolved::bindTree_(multidraw::FunctionLibrary& _library)
{  
  _library.bindBranch(VBS_category, "VBS_category");
  _library.bindBranch(mjj_vbs, "mjj_vbs");
  _library.bindBranch(vbs_0_pt, "vbs_0_pt");
  _library.bindBranch(vbs_1_pt, "vbs_1_pt");
  _library.bindBranch(vbs_0_eta, "vbs_0_eta");
  _library.bindBranch(vbs_1_eta, "vbs_1_eta");
  _library.bindBranch(deltaeta_vbs, "deltaeta_vbs");
  _library.bindBranch(deltaphi_vbs, "deltaphi_vbs");
  _library.bindBranch(mjj_vjet, "mjj_vjet");
  _library.bindBranch(vjet_0_pt, "vjet_0_pt");
  _library.bindBranch(vjet_1_pt, "vjet_1_pt");
  _library.bindBranch(vjet_0_eta, "vjet_0_eta");
  _library.bindBranch(vjet_1_eta, "vjet_1_eta");
  _library.bindBranch(Lepton_pt, "Lepton_pt");
  _library.bindBranch(Lepton_eta, "Lepton_eta");
  _library.bindBranch(Lepton_flavour, "Lepton_pdgId");
  _library.bindBranch(PuppiMET, "PuppiMET_pt");
  _library.bindBranch(Zvjets_0, "Zvjets_0");
  _library.bindBranch(Zlep, "Zlep");
  _library.bindBranch(Asym_vbs, "Asym_vbs");
  _library.bindBranch(Asym_vjet, "Asym_vjet");
  _library.bindBranch(A_ww, "A_ww");
  _library.bindBranch(Mtw_lep, "Mtw_lep");
  _library.bindBranch(w_lep_pt, "w_lep_pt");
  _library.bindBranch(Mww, "Mww");
  _library.bindBranch(R_ww, "R_ww");
  _library.bindBranch(R_mw, "R_mw");
  _library.bindBranch(Centr_vbs, "Centr_vbs");
  _library.bindBranch(Centr_ww, "Centr_ww");
}


#endif 