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


class ReweightDeltaEtaVBS : public multidraw::TTreeFunction {
public:
  ReweightDeltaEtaVBS(const char * weights_file, bool debug);
  ~ReweightDeltaEtaVBS();

  char const* getName() const override { return "ReweightDeltaEtaVBS"; }
  TTreeFunction* clone() const override { return new ReweightDeltaEtaVBS(_weights_file.Data(),_debug); }

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
  FloatValueReader * deltaeta_vbs;

};

ReweightDeltaEtaVBS::ReweightDeltaEtaVBS(const char * weights_file ,bool debug) :
  TTreeFunction(), _weights_file(weights_file),_debug(debug)
{
  _file = new TFile(weights_file,"READ");
  res_ele_weight = (TH1D*)_file->Get("ratio_res_ele");
  res_mu_weight = (TH1D*)_file->Get("ratio_res_mu");
  boost_ele_weight = (TH1D*)_file->Get("ratio_boost_ele");
  boost_mu_weight =(TH1D*) _file->Get("ratio_boost_mu");
  res_ele_weight->SetDirectory(0);
  res_mu_weight->SetDirectory(0);
  boost_ele_weight->SetDirectory(0);
  boost_mu_weight->SetDirectory(0);
}

ReweightDeltaEtaVBS::~ReweightDeltaEtaVBS(){
  _file->Close();
  delete res_ele_weight;
  delete res_mu_weight;
  delete boost_ele_weight;
  delete boost_mu_weight;
  delete _file;
}


double
ReweightDeltaEtaVBS::evaluate(unsigned iJ){
  int vbs_category = *(VBS_category->Get());
  int lepId = abs(Lepton_pdgId->At(0));
  float detavbs = *(deltaeta_vbs->Get());
  double weight = 1.;
  if (detavbs < 2.5) detavbs = 2.5;
  if (detavbs > 8.5) detavbs = 8.4;
  
  if (vbs_category == 0 and lepId == 11){
    weight=   boost_ele_weight->GetBinContent(boost_ele_weight->FindBin(detavbs));
  }
  if (vbs_category == 0 and lepId == 13){
    weight=  boost_mu_weight->GetBinContent(boost_mu_weight->FindBin(detavbs));
  }
  if (vbs_category == 1 and lepId == 11){
    weight=  res_ele_weight->GetBinContent(res_ele_weight->FindBin(detavbs));
  }
  if (vbs_category == 1 and lepId == 13){
    weight=  res_mu_weight->GetBinContent(res_mu_weight->FindBin(detavbs));
  }
  if (_debug) std::cout << "VBScat: "<<vbs_category << " lepId: "<<lepId << " detaVBS: "<< detavbs << " --> weight = "<< weight << std::endl;
  return weight;
}

void
ReweightDeltaEtaVBS::bindTree_(multidraw::FunctionLibrary& _library)
{
  _library.bindBranch(VBS_category, "VBS_category");
  _library.bindBranch(Lepton_pdgId, "Lepton_pdgId");
  _library.bindBranch(deltaeta_vbs, "deltaeta_vbs");
}

