#include "LatinoAnalysis/MultiDraw/interface/TTreeFunction.h"
#include "LatinoAnalysis/MultiDraw/interface/FunctionLibrary.h"
#include "NNEvaluation/DNNTensorflow/interface/DNNEvaluator.hh"

#include "TFile.h"
#include "TMath.h"
#include "TH1F.h"
#include "TGraph.h"
#include "TLorentzVector.h"

#include <cmath>
#include <string>
#include <iostream>

using namespace std;
using namespace NNEvaluation;

#ifndef MVAREADERResolved_v29_JER_H
#define MVAREADERResolved_v29_JER_H

class MVAReaderResolved_v29_JER : public multidraw::TTreeFunction {
public:
  
  MVAReaderResolved_v29_JER(const char* model_path, const char* transform_path, 
                            bool verbose, int category, const char* jer_sf );

  char const* getName() const override { return "MVAReaderResolved_v29_JER"; }
  TTreeFunction* clone() const override { return new MVAReaderResolved_v29_JER(model_path_.c_str(), 
                                              transform_path_.c_str(), verbose, category_, jer_sf_.c_str()); }

  std::string model_path_;
  std::string transform_path_;
  std::string jer_sf_; 
  int category_;
  TGraph * dnn_transformation; 
  TH1F * jer_sf_histo;
  unsigned getNdata() override { return 1; }
  double evaluate(unsigned) override;

protected:  
  ~MVAReaderResolved_v29_JER();
  bool verbose;
  void bindTree_(multidraw::FunctionLibrary&) override;
  
  DNNEvaluator* dnn_tensorflow;

  IntValueReader* VBS_category{};
  FloatArrayReader* Lepton_pt{};
  FloatArrayReader* Lepton_eta{};
  FloatValueReader* deltaeta_vbs{};
  FloatValueReader* deltaphi_vbs{};
  FloatValueReader* Zlep{};

  UIntValueReader* nJets; 
  FloatArrayReader* Jet_pt{};
  FloatArrayReader* Jet_eta{};
  FloatArrayReader* Jet_phi{};
  IntArrayReader* Jet_idx{};
  FloatArrayReader* Jet_mass{};
  IntArrayReader* V_jets{};
  IntArrayReader* VBS_jets{};

  IntArrayReader* GenJet_index{};
  FloatArrayReader* GenJet_pt{};

  
};


MVAReaderResolved_v29_JER::MVAReaderResolved_v29_JER(const char* model_path, const char* transform_path,
                                      bool verbose, int category,const char* jer_sf):
    model_path_(model_path), 
    transform_path_(transform_path),
    verbose(verbose),
    category_(category),
    jer_sf_(jer_sf)
{
    dnn_tensorflow = new DNNEvaluator(model_path_, verbose);

    // Load the TGRaph used to transform the DNN score
    // The TGraph is the cumulative distribution of the DNN on the signal
    TFile * tf_file = new TFile(transform_path_.c_str(), "READ");
    dnn_transformation = (TGraph*) tf_file->Get("cumulative_signal");
    tf_file->Close();

    // Load JerSF
    TFile * jersf_file = new TFile(jer_sf_.c_str(), "READ");
    jer_sf_histo = (TH1F*) jersf_file->Get("jer_sf");
    jer_sf_histo->SetDirectory(0);
    jersf_file->Close();

}

MVAReaderResolved_v29_JER::~MVAReaderResolved_v29_JER(){
  VBS_category = nullptr;
  deltaeta_vbs = nullptr;
  deltaphi_vbs = nullptr;
  Lepton_pt = nullptr;
  Lepton_eta = nullptr;
  Zlep = nullptr;
  nJets = nullptr;
  Jet_pt = nullptr;
  Jet_eta = nullptr;
  Jet_phi = nullptr;
  Jet_mass = nullptr;
  Jet_idx = nullptr;
  V_jets = nullptr;
  VBS_jets = nullptr;
  GenJet_index = nullptr;
  GenJet_pt = nullptr;
}

double
MVAReaderResolved_v29_JER::evaluate(unsigned)
{
  // Run only if 
  if ( *(VBS_category->Get()) != category_) {
    return -999.;
  }

  // To apply JER we have to change the 4-momenta 
  vector<TLorentzVector> v_jets; 
  vector<TLorentzVector> vbs_jets; 

  TLorentzVector whad;
  for (auto ij : *V_jets){
    TLorentzVector v;
    float pt = Jet_pt->At(ij);
    float eta = Jet_eta->At(ij);
    float phi = Jet_phi->At(ij);
    float mass = Jet_mass->At(Jet_idx->At(ij));

    v.SetPtEtaPhiM(pt,eta,phi, mass);

    float pt_raw =  GenJet_pt->At(GenJet_index->At(Jet_idx->At(ij)));
    float sf = jer_sf_histo->GetBinContent(jer_sf_histo->FindBin(fabs(eta)));
    float jer_corr = 1+ (sf-1)*(pt-pt_raw)/pt;
    if (jer_corr <0) jer_corr = 0;

    v*=jer_corr;
    v_jets.push_back(v);
    whad+=v;
  }

  for (auto ij : *VBS_jets){
    TLorentzVector v;
    float pt = Jet_pt->At(ij);
    float eta = Jet_eta->At(ij);
    float phi = Jet_phi->At(ij);
    float mass = Jet_mass->At(Jet_idx->At(ij));

    v.SetPtEtaPhiM(pt,eta,phi, mass);

    float pt_raw =  GenJet_pt->At(GenJet_index->At(Jet_idx->At(ij)));
    float sf = jer_sf_histo->GetBinContent(jer_sf_histo->FindBin(fabs(eta)));
    float jer_corr = 1+ (sf-1)*(pt-pt_raw)/pt;
    if (jer_corr <0) jer_corr = 0;

    v*=jer_corr;
    vbs_jets.push_back(v);
  }


  std::vector<float> input{};
  
  input.push_back( (vbs_jets[0]+vbs_jets[1]).M());
  input.push_back( vbs_jets[0].Pt());
  input.push_back( vbs_jets[1].Pt() );
  input.push_back( v_jets[0].Pt() );
  input.push_back( v_jets[1].Pt() );
  input.push_back( *(deltaeta_vbs->Get()) );
  input.push_back( *(deltaphi_vbs->Get()) );
  input.push_back( Lepton_pt->At(0) );
  input.push_back( Lepton_eta->At(0) );
  input.push_back( *(Zlep->Get()) );
  input.push_back( whad.Pt() );
  // Asym_vbs
  input.push_back( (vbs_jets[0].Pt() - vbs_jets[1].Pt()) / (vbs_jets[0].Pt() + vbs_jets[1].Pt())) ;
  
  double dnn_score = dnn_tensorflow->analyze(input);
  return dnn_transformation->Eval(dnn_score);
  
}

void
MVAReaderResolved_v29_JER::bindTree_(multidraw::FunctionLibrary& _library)
{  
  _library.bindBranch(VBS_category, "VBS_category");
  _library.bindBranch(deltaeta_vbs, "deltaeta_vbs");
  _library.bindBranch(deltaphi_vbs, "deltaphi_vbs");
  _library.bindBranch(Lepton_pt, "Lepton_pt");
  _library.bindBranch(Lepton_eta, "Lepton_eta");
  _library.bindBranch(Zlep, "Zlep");

  _library.bindBranch(nJets, "nJet");
  _library.bindBranch(Jet_pt, "CleanJet_pt");
  _library.bindBranch(Jet_eta, "CleanJet_eta");
  _library.bindBranch(Jet_phi, "CleanJet_phi");
  _library.bindBranch(Jet_mass, "Jet_mass");
  _library.bindBranch(Jet_idx, "CleanJet_jetIdx");
  _library.bindBranch(V_jets, "V_jets_maxmjj_massWZ");
  _library.bindBranch(VBS_jets, "VBS_jets_maxmjj_massWZ");
  _library.bindBranch(GenJet_index, "Jet_genJetIdx");
  _library.bindBranch(GenJet_pt, "GenJet_pt");

  
}


#endif 