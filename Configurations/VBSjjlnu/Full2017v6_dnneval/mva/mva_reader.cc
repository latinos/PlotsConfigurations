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
  
  MVAReader(string model_path);

  char const* getName() const override { return "MVAReader"; }
  // TTreeFunction* clone() const override { return new MVAReader(file_ele, file_mu); }
  TTreeFunction* clone() const override { return new MVAReader(model_path); }

  string model_path;
  unsigned getNdata() override { return 1; }
  double evaluate(unsigned) override;

protected:  
 
  void bindTree_(multidraw::FunctionLibrary&) override;
  
  DNNEvaluator* dnn_tensorflow;

  FloatValueReader* Centr_vbs{};
  FloatValueReader* Centr_ww{};
  FloatValueReader* R_ww{};
  FloatValueReader* R_mw{};
  FloatValueReader* Mw_lep_reco{}; // check
  FloatValueReader* Mtw_lep{};
  FloatValueReader* w_lep_pt{};
  FloatValueReader* Mww{};
  FloatValueReader* A_ww{};
  FloatValueReader* Asym_vbs{};
  FloatValueReader* Asym_vjet{};
  FloatValueReader* Zvjets_0{};
  FloatValueReader* Zlep{};
  IntValueReader*   nJets{}; // check
  IntValueReader*   N_jets_central{};
  IntValueReader*   N_jets_forward{};
  FloatValueReader* PuppiMET{};
  FloatArrayReader* Lepton_pt{};
  FloatArrayReader* Lepton_eta{};
  FloatArrayReader* Lepton_flavour{}; // check
  IntValueReader*   vjet_index_0{}; // check
  IntValueReader*   vjet_index_1{}; // check
  FloatValueReader* vjet_0_pt{};
  FloatValueReader* vjet_1_pt{};
  FloatValueReader* vjet_0_eta{};
  FloatValueReader* vjet_1_eta{};
  FloatValueReader* mjj_vjet{};
  FloatValueReader* deltaeta_vbs{};
  FloatValueReader* deltaphi_vbs{};
  FloatValueReader* vbs_index_0{};
  FloatValueReader* vbs_index_1{};
  FloatValueReader* vbs_0_pt{};
  FloatValueReader* vbs_1_pt{};
  FloatValueReader* vbs_0_eta{};
  FloatValueReader* vbs_1_eta{};
  FloatValueReader* mjj_vbs{};
};

MVAReader::MVAReader(string model_path):
    model_path(model_path)
{
    dnn_tensorflow = new DNNEvaluator(model_path);

}


double
MVAReader::evaluate(unsigned)
{
  // fixme
  
}

void
MVAReader::bindTree_(multidraw::FunctionLibrary& _library)
{   
  _library.bindBranch( Centr_vbs, "Centr_vbs" );
  _library.bindBranch (Centr_ww, "Centr_ww");
  _library.bindBranch (R_ww, "R_ww");
  _library.bindBranch (R_mw, "R_mw");
  _library.bindBranch (Mw_lep_reco, "Mw_lep_reco");
  _library.bindBranch (Mtw_lep, "Mtw_lep");
  _library.bindBranch (w_lep_pt, "w_lep_pt");
  _library.bindBranch (Mww, "Mww");
  _library.bindBranch (A_ww, "A_ww");
  _library.bindBranch (Asym_vbs, "Asym_vbs");
  _library.bindBranch (Asym_vjet, "Asym_vjet");
  _library.bindBranch (Zvjets_0, "Zvjets_0");
  _library.bindBranch (Zlep, "Zlep");
  _library.bindBranch (nJets, "nJets");
  _library.bindReader (N_jets_central, "N_jets_central");
  _library.bindReader (N_jets_forward, "N_jets_forward");
  _library.bindReader (PuppiMET, "PuppiMET");
  _library.bindReader (Lepton_pt, "Lepton_pt");
  _library.bindReader (Lepton_eta, "Lepton_eta");
  _library.bindBranch (Lepton_flavour, "Lepton_flavour");
  _library.bindBranch (vjet_index_0, "vjet_index_0");
  _library.bindBranch (vjet_index_1, "vjet_index_1");
  _library.bindBranch (vjet_0_pt, "vjet_0_pt");
  _library.bindBranch (vjet_1_pt, "vjet_1_pt");
  _library.bindBranch (vjet_0_eta, "vjet_0_eta");
  _library.bindBranch (vjet_1_eta, "vjet_1_eta");
  _library.bindBranch (mjj_vjet, "mjj_vjet");
  _library.bindBranch (deltaeta_vbs, "deltaeta_vbs");
  _library.bindBranch (deltaphi_vbs, "deltaphi_vbs");
  _library.bindBranch (vbs_index_0, "vbs_index_0");
  _library.bindBranch (vbs_index_1, "vbs_index_1");
  _library.bindBranch (vbs_0_pt, "vbs_0_pt");
  _library.bindBranch (vbs_1_pt, "vbs_1_pt");
  _library.bindBranch (vbs_0_eta, "vbs_0_eta");
  _library.bindBranch (vbs_1_eta, "vbs_1_eta");
  _library.bindBranch (mjj_vbs, "mjj_vbs");

}

