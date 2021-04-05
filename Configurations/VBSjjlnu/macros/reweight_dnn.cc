#include "LatinoAnalysis/MultiDraw/interface/TTreeFunction.h"
#include "LatinoAnalysis/MultiDraw/interface/FunctionLibrary.h"

#include <vector>

#include "TFile.h"
#include "TH1D.h"
#include "TString.h"
#include "TVector2.h"
#include "Math/Vector4Dfwd.h"
#include "Math/GenVector/LorentzVector.h"
#include "Math/GenVector/PtEtaPhiM4D.h"
#include "Math/GenVector/VectorUtil.h"

#include <iostream>
using namespace ROOT::Math;
typedef TTreeReaderValue<Double_t> DoubleValueReader;


class ReweightDNN : public multidraw::TTreeFunction {
public:
  ReweightDNN(const char * weights_file,bool debug);
  ~ReweightDNN();

  char const* getName() const override { return "ReweightDNN"; }
  TTreeFunction* clone() const override { return new ReweightDNN(_weights_file.Data(),_debug); }

  unsigned getNdata() override { return 1; } 
  int getMultiplicity() override { return 1; }
  double evaluate(unsigned) override;
  

protected:
  void bindTree_(multidraw::FunctionLibrary&) override;
  void setValues();
  TString _weights_file;
  TFile* _file;
  TH1D* res_ele_weight;
  TH1D* res_mu_weight;
  TH1D* boost_ele_weight;
  TH1D* boost_mu_weight;
  bool _debug;
  
  IntValueReader * VBS_category;
  IntArrayReader * Lepton_pdgId;
  DoubleValueReader * DNN_output_resolved;
  DoubleValueReader * DNN_output_boosted;

};

ReweightDNN::ReweightDNN(const char * weights_file ,bool debug) :
  TTreeFunction(), _weights_file(weights_file),_debug(debug)
{
  _file = new TFile(weights_file,"READ");
  res_ele_weight = (TH1D*)_file->Get("res_sig_ele/DNN_weight_dipole");
  res_mu_weight = (TH1D*)_file->Get("res_sig_mu/DNN_weight_dipole");
  boost_ele_weight = (TH1D*)_file->Get("boost_sig_ele/DNN_weight_dipole");
  boost_mu_weight =(TH1D*) _file->Get("boost_sig_mu/DNN_weight_dipole");
  res_ele_weight->SetDirectory(0);
  res_mu_weight->SetDirectory(0);
  boost_ele_weight->SetDirectory(0);
  boost_mu_weight->SetDirectory(0);
}

ReweightDNN::~ReweightDNN(){
  _file->Close();
  delete res_ele_weight;
  delete res_mu_weight;
  delete boost_ele_weight;
  delete boost_mu_weight;
  delete _file;
}


double
ReweightDNN::evaluate(unsigned iJ){
  int vbs_category = *(VBS_category->Get());
  int lepId = abs(Lepton_pdgId->At(0));

  double weight = 1.0;
  double dnn;
  if (vbs_category == 0 and lepId == 11){
    dnn = *(DNN_output_boosted->Get());
    weight=   boost_ele_weight->GetBinContent(boost_ele_weight->FindBin(dnn));
  }
  if (vbs_category == 0 and lepId == 13){
    dnn = *(DNN_output_boosted->Get());
    weight=  boost_mu_weight->GetBinContent(boost_mu_weight->FindBin(dnn));
  }
  if (vbs_category == 1 and lepId == 11){
    dnn = *(DNN_output_resolved->Get());
    weight=  res_ele_weight->GetBinContent(res_ele_weight->FindBin(dnn));
  }
  if (vbs_category == 1 and lepId == 13){
    dnn = *(DNN_output_resolved->Get());
    weight=  res_mu_weight->GetBinContent(res_mu_weight->FindBin(dnn));
  }
  if (_debug) std::cout << "VBScat: "<<vbs_category << " lepId: "<<lepId << " DNN: "<< dnn << " --> weight = "<< weight << std::endl;
  return weight;
}

void
ReweightDNN::bindTree_(multidraw::FunctionLibrary& _library)
{
  _library.bindBranch(VBS_category, "VBS_category");
  _library.bindBranch(Lepton_pdgId, "Lepton_pdgId");
  _library.bindBranch(DNN_output_resolved, "DNNoutput_resolved_v1");
  _library.bindBranch(DNN_output_boosted, "DNNoutput_boosted");
}

