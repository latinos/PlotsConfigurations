#include "LatinoAnalysis/MultiDraw/interface/TTreeFunction.h"
#include "LatinoAnalysis/MultiDraw/interface/FunctionLibrary.h"

#include "TMath.h"
#include "TGraph.h"
#include "TFile.h"
#include "TF1.h"
#include "TH2F.h"
#include "TVector2.h"
#include "TSystem.h"
#include "TLorentzVector.h"

#include <cmath>
#include <string>
#include <unordered_map>
#include <iostream>
#include <stdexcept>
#include <tuple>
#include <map>

using namespace std;

class FakeWeightCorrector : public multidraw::TTreeFunction {
public:
  FakeWeightCorrector(char * file, string ele_WP, string fakew_name, char* fr_path, char * pr_path);

  char const* getName() const override { return "FakeWeightCorrector"; }
  TTreeFunction* clone() const override { return new FakeWeightCorrector(inputfile_path, ele_WP,fakew_name,fr_path,pr_path); }

  unsigned getNdata() override { return 1; }
  double evaluate(unsigned) override;

protected:  
  ~FakeWeightCorrector();
  void bindTree_(multidraw::FunctionLibrary&) override;
  
  char * inputfile_path;
  char * pr_path;
  char * fr_path;
  TFile* inputfile;
  TFile* promprate_file;
  TFile* fakerate_file;
  TH2F* pr_h2;
  TH2F* fr_h2;
  string ele_WP;
  string fakew_name;
  vector<TF1 *> eff_A_L;
  vector<TF1 *> eff_A_T;
  vector<TF1 *> eff_B_L;
  vector<TF1 *> eff_B_T;

  FloatArrayReader* Lepton_pt{};
  FloatArrayReader* Lepton_eta{};
  IntArrayReader*   Lepton_pdgId{};
  IntArrayReader*   Lepton_isTight{};
  FloatValueReader* Fake_weight{};

};

FakeWeightCorrector::FakeWeightCorrector(char * file, string ele_WP, string fakew_name, char* fr_path, char* pr_path) :
  TTreeFunction(), inputfile_path(file), fr_path(fr_path),pr_path(pr_path),
                  ele_WP(ele_WP), fakew_name(fakew_name)
{
  inputfile = new TFile(file, "read");
  for (int i = 1; i<=10; i++){
    eff_A_L.push_back((TF1*)inputfile->Get(("f_A_L_etabin"+ to_string(i)).c_str() ));
    eff_A_T.push_back((TF1*)inputfile->Get(("f_A_T_etabin"+ to_string(i)).c_str() ));
    eff_B_L.push_back((TF1*)inputfile->Get(("f_B_L_etabin"+ to_string(i)).c_str() ));
    eff_B_T.push_back((TF1*)inputfile->Get(("f_B_T_etabin"+ to_string(i)).c_str() ));
  }
  fakerate_file = new TFile(fr_path, "read");
  fr_h2 = (TH2F*) fakerate_file->Get("FR_pT_eta_EWKcorr");   
  promprate_file = new TFile(pr_path, "read");
  pr_h2 = (TH2F*) promprate_file->Get("h_Ele_signal_pt_eta_bin");
  
}


double
FakeWeightCorrector::evaluate(unsigned)
{
  if (abs(Lepton_pdgId->At(0)) != 11){
    // No corrections for Muon
    return *(Fake_weight->Get());
  }

  // Get Eta bin lepton
  float eta = Lepton_eta->At(0);
  float aeta = abs(eta);
  float pt = Lepton_pt->At(0);

  vector<float> etabins = {-2.5,-2.1,-1.566,-1.442,-0.8,0.0,0.8,1.442,1.566,2.1,2.5,3};
  int etabin = -1;
  for (int i=0;i<etabins.size()-1;i++){
    if (eta >=etabins[i] && eta < etabins[i+1]){
      etabin = i;
      break;
    }
  }
  //cout << "Eta"<< eta << " etabin:" << etabin << "||";

  // get prompt rate9
  float maxpt = pr_h2->GetXaxis()->GetBinCenter(pr_h2->GetNbinsX());
  float prompt_rate;
  if (pt > maxpt){
    prompt_rate = pr_h2->GetBinContent(pr_h2->FindBin(maxpt,aeta));
  }else{
    prompt_rate = pr_h2->GetBinContent(pr_h2->FindBin(pt,aeta));
  }
  float fake_rate; 
  maxpt = fr_h2->GetXaxis()->GetBinCenter(fr_h2->GetNbinsX());
  if (pt > maxpt){
    fake_rate = fr_h2->GetBinContent(fr_h2->FindBin(maxpt, aeta));
  }else{
    fake_rate = fr_h2->GetBinContent(fr_h2->FindBin(pt, aeta));
  }

  float R_factor = ( eff_A_T.at(etabin)->Eval(pt) / eff_A_L.at(etabin)->Eval(pt)) / 
                    ( eff_B_T.at(etabin)->Eval(pt) / eff_B_L.at(etabin)->Eval(pt));

  float fakew = *(Fake_weight->Get());
  float new_fakew = 0.;

  if (Lepton_isTight->At(0)){
    new_fakew =  (-1)* (fake_rate/ (prompt_rate-fake_rate)) *(1- R_factor*prompt_rate);
  }else{
    new_fakew =  R_factor * (fake_rate*prompt_rate)/(prompt_rate-fake_rate);
  }

  // cout << " R factor: "<< R_factor<< " | Old weight: "<< fakew << " | new fake weight: " << new_fakew << endl; 
  return new_fakew;
}

void
FakeWeightCorrector::bindTree_(multidraw::FunctionLibrary& _library)
{   
    _library.bindBranch(Lepton_pt, "Lepton_pt");
    _library.bindBranch(Lepton_eta, "Lepton_eta");
    _library.bindBranch(Lepton_pdgId, "Lepton_pdgId");
    _library.bindBranch(Lepton_isTight, ("Lepton_isTightElectron_"+ele_WP).c_str());
    _library.bindBranch(Fake_weight, fakew_name.c_str());
}

FakeWeightCorrector::~FakeWeightCorrector(){
  Lepton_pt=nullptr;
  Lepton_eta= nullptr;
  Lepton_pdgId= nullptr;
  Lepton_isTight=nullptr;
  Fake_weight=nullptr;
}