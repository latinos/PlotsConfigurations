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
  
  MVAReader(const char* model_path, bool verbose);

  char const* getName() const override { return "MVAReader"; }
  TTreeFunction* clone() const override { return new MVAReader(model_path_.c_str(), verbose); }

  bool initialized = false;
  std::string model_path_;
  unsigned getNdata() override { return 1; }
  double evaluate(unsigned) override;

protected:  
 
  bool verbose;
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
  FloatArrayReader* CleanJet_pt{}; // check
  IntValueReader*   N_jets_central{};
  IntValueReader*   N_jets_forward{};
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

MVAReader::MVAReader(const char* model_path, bool verbose):
    model_path_(model_path), 
    verbose(verbose)
{
    dnn_tensorflow = new DNNEvaluator(model_path_, verbose);
    initialized = true;
}


double
MVAReader::evaluate(unsigned)
{
  // fixme
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
  input.push_back( (float) TMath::Abs(Lepton_flavour->At(0)) ); // check
  input.push_back( PuppiMET->At(0) );

  int nJets = std::accumulate(CleanJet_pt->begin(), CleanJet_pt->end(),0, [](auto a, auto b){return b>=30.;} );

  input.push_back( (float) (nJets)); // check
  input.push_back( (float) *(N_jets_central->Get()) );
  input.push_back( (float) *(N_jets_forward->Get()) );
  input.push_back( *(Zvjets_0 -> Get()) ) ;
  input.push_back( *(Zlep -> Get()) ) ;
  input.push_back( *(Asym_vbs -> Get()) ) ;
  input.push_back( *(Asym_vjet -> Get()) ) ;
  input.push_back( *(A_ww -> Get()) ) ;
  input.push_back( *(Mw_lep_reco -> Get()) ) ; // check
  input.push_back( *(Mtw_lep -> Get()) ) ;
  input.push_back( *(w_lep_pt -> Get()) ) ;
  input.push_back( *(Mww -> Get()) ) ;
  input.push_back( *(R_ww -> Get()) ) ;
  input.push_back( *(R_mw -> Get()) ) ;
  input.push_back( *(Centr_vbs -> Get()) ) ;
  input.push_back( *(Centr_ww -> Get()) ) ;

  // fixme
  return dnn_tensorflow->analyze(input);
  
}

void
MVAReader::bindTree_(multidraw::FunctionLibrary& _library)
{   
  _library.bindBranch( Centr_vbs, "Centr_vbs" );
  _library.bindBranch (Centr_ww, "Centr_ww");
  _library.bindBranch (R_ww, "R_ww");
  _library.bindBranch (R_mw, "R_mw");
  _library.bindBranch (Mw_lep_reco, "Mw_lep");
  _library.bindBranch (Mtw_lep, "Mtw_lep");
  _library.bindBranch (w_lep_pt, "w_lep_pt");
  _library.bindBranch (Mww, "Mww");
  _library.bindBranch (A_ww, "A_ww");
  _library.bindBranch (Asym_vbs, "Asym_vbs");
  _library.bindBranch (Asym_vjet, "Asym_vjet");
  _library.bindBranch (Zvjets_0, "Zvjets_0");
  _library.bindBranch (Zlep, "Zlep");
  _library.bindBranch (CleanJet_pt, "CleanJet_pt");
  _library.bindBranch (N_jets_central, "N_jets_central");
  _library.bindBranch (N_jets_forward, "N_jets_forward");
  _library.bindBranch (PuppiMET, "PuppiMET_pt");
  _library.bindBranch (Lepton_pt, "Lepton_pt");
  _library.bindBranch (Lepton_eta, "Lepton_eta");
  _library.bindBranch (Lepton_flavour, "Lepton_pdgId");
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

