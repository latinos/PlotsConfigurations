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

#ifndef fakeWeightOTF_HH
#define fakeWeightOTF_HH

class fakeWeightOTF : public multidraw::TTreeFunction {
public:
  //fakeWeightOTF(string file, string ele_WP, string mu_WP, string fr_ele_path, string pr_ele_path, string fr_mu_path, string pr_mu_path);
  fakeWeightOTF(string ele_WP, string mu_WP, string fr_ele_path, string pr_ele_path, string fr_mu_path, string pr_mu_path, bool do_statUp, bool do_statDo);

  char const* getName() const override { 
      return "fakeWeightOTF"; 
  }
  TTreeFunction* clone() const override { 
      //return new fakeWeightOTF(inputfile_path, ele_WP, mu_WP, fr_ele_path, pr_ele_path, fr_mu_path, pr_mu_path); 
      return new fakeWeightOTF(ele_WP, mu_WP, fr_ele_path, pr_ele_path, fr_mu_path, pr_mu_path, do_statUp, do_statDo); 
  }

  unsigned getNdata() override { return 1; }
  double evaluate(unsigned) override;

protected:  
  ~fakeWeightOTF();
  void bindTree_(multidraw::FunctionLibrary&) override;
  bool do_statUp;
  bool do_statDo;

  
  //string inputfile_path;
  string pr_ele_path;
  string fr_ele_path;
  string pr_mu_path;
  string fr_mu_path;
  //TFile* inputfile;
  TFile* pr_ele_file;
  TFile* fr_ele_file;
  TFile* pr_mu_file;
  TFile* fr_mu_file;
  TH2F* pr_ele_h2;
  TH2F* fr_ele_h2;
  TH2F* pr_mu_h2;
  TH2F* fr_mu_h2;
  string ele_WP;
  string mu_WP;
  //string fakew_name;
  //vector<TF1 *> eff_A_L;
  //vector<TF1 *> eff_A_T;
  //vector<TF1 *> eff_B_L;
  //vector<TF1 *> eff_B_T;

  FloatArrayReader* Lepton_pt{};
  FloatArrayReader* Lepton_eta{};
  IntArrayReader*   Lepton_pdgId{};
  IntArrayReader*   Lepton_isTightEle{};
  IntArrayReader*   Lepton_isTightMu{};

};

//fakeWeightOTF::fakeWeightOTF(string in_file, string ele_WP, string mu_WP, string in_fr_ele_path, string in_pr_ele_path, string in_fr_mu_path, string in_pr_mu_path) :
fakeWeightOTF::fakeWeightOTF(string ele_WP, string mu_WP, string in_fr_ele_path, string in_pr_ele_path, string in_fr_mu_path, string in_pr_mu_path, bool do_statUp = false, bool do_statDo = false) :
  TTreeFunction(), 
                  //inputfile_path(in_file), 
                  fr_ele_path(in_fr_ele_path), pr_ele_path(in_pr_ele_path),
                  fr_mu_path(in_fr_mu_path), pr_mu_path(in_pr_mu_path),
                  ele_WP(ele_WP), mu_WP(mu_WP),
                  do_statUp(do_statUp), do_statDo(do_statDo) 
{
  //inputfile = new TFile(inputfile_path.c_str(), "read");
  //for (int i = 1; i<=10; i++){
  //  eff_A_L.push_back((TF1*)inputfile->Get(("f_A_L_etabin"+ to_string(i)).c_str() ));
  //  eff_A_T.push_back((TF1*)inputfile->Get(("f_A_T_etabin"+ to_string(i)).c_str() ));
  //  eff_B_L.push_back((TF1*)inputfile->Get(("f_B_L_etabin"+ to_string(i)).c_str() ));
  //  eff_B_T.push_back((TF1*)inputfile->Get(("f_B_T_etabin"+ to_string(i)).c_str() ));
  //} 
  //inputfile->Close();
  fr_ele_file = new TFile(fr_ele_path.c_str(), "read");
  pr_ele_file = new TFile(pr_ele_path.c_str(), "read");
  fr_ele_h2 = (TH2F*) fr_ele_file->Get("FR_pT_eta_EWKcorr");   
  pr_ele_h2 = (TH2F*) pr_ele_file->Get("PR_pT_eta");
  fr_ele_h2->SetDirectory(0);
  pr_ele_h2->SetDirectory(0);
  fr_ele_file->Close();
  fr_ele_file->Close();

  fr_mu_file = new TFile(fr_mu_path.c_str(), "read");
  pr_mu_file = new TFile(pr_mu_path.c_str(), "read");
  fr_mu_h2 = (TH2F*) fr_mu_file->Get("FR_pT_eta_EWKcorr");   
  pr_mu_h2 = (TH2F*) pr_mu_file->Get("PR_pT_eta");
  fr_mu_h2->SetDirectory(0);
  pr_mu_h2->SetDirectory(0);
  fr_mu_file->Close();
  fr_mu_file->Close();
  
  if (do_statUp && do_statDo){
      throw std::runtime_error("Can't do both up and down at once");
  }
}


double
fakeWeightOTF::evaluate(unsigned)
{
  float eta = Lepton_eta->At(0);
  float aeta = abs(eta);
  float pt = Lepton_pt->At(0);
  float new_fakew = 0.;

  if (abs(Lepton_pdgId->At(0)) != 11){
      // Get prompt rate
      float maxpt = pr_mu_h2->GetXaxis()->GetBinCenter(pr_mu_h2->GetNbinsX());
      float prompt_rate;
      if (pt > maxpt){
        prompt_rate   = pr_mu_h2->GetBinContent(pr_mu_h2->FindBin(maxpt,aeta));
      }else{
        prompt_rate   = pr_mu_h2->GetBinContent(pr_mu_h2->FindBin(pt,aeta));
      }
      
      // Get fake rate
      float fake_rate, fake_rate_e; 
      maxpt = fr_mu_h2->GetXaxis()->GetBinCenter(fr_mu_h2->GetNbinsX());
      if (pt > maxpt){
        fake_rate   = fr_mu_h2->GetBinContent(fr_mu_h2->FindBin(maxpt, aeta));
        fake_rate_e = fr_mu_h2->GetBinError(fr_mu_h2->FindBin(maxpt, aeta));
      }else{
        fake_rate   = fr_mu_h2->GetBinContent(fr_mu_h2->FindBin(pt, aeta));
        fake_rate_e = fr_mu_h2->GetBinError(fr_mu_h2->FindBin(pt, aeta));
      }

      // apply stat
      float fr = fake_rate;
      if (do_statUp){
          fr += fake_rate_e; 
      }
      if (do_statDo){
          fr -= fake_rate_e; 
      }

      // return fake weight
      if (Lepton_isTightMu->At(0)){
          new_fakew = (-1) * fr * (1 - prompt_rate)/(prompt_rate - fr);
      }else{
          new_fakew = (fr * prompt_rate)/(prompt_rate - fr);
      }
  }else{
      // Get prompt rate
      float maxpt = pr_ele_h2->GetXaxis()->GetBinCenter(pr_ele_h2->GetNbinsX());
      float prompt_rate;
      if (pt > maxpt){
        prompt_rate   = pr_ele_h2->GetBinContent(pr_ele_h2->FindBin(maxpt,aeta));
      }else{
        prompt_rate   = pr_ele_h2->GetBinContent(pr_ele_h2->FindBin(pt,aeta));
      }

      // Get fake rate
      float fake_rate, fake_rate_e; 
      maxpt = fr_ele_h2->GetXaxis()->GetBinCenter(fr_ele_h2->GetNbinsX());
      if (pt > maxpt){
        fake_rate   = fr_ele_h2->GetBinContent(fr_ele_h2->FindBin(maxpt, aeta));
        fake_rate_e = fr_ele_h2->GetBinError(fr_ele_h2->FindBin(maxpt, aeta));
      }else{
        fake_rate   = fr_ele_h2->GetBinContent(fr_ele_h2->FindBin(pt, aeta));
        fake_rate_e = fr_ele_h2->GetBinError(fr_ele_h2->FindBin(pt, aeta));
      }

      // apply stat
      float fr = fake_rate;
      if (do_statUp){
          fr += fake_rate_e; 
      }
      if (do_statDo){
          fr -= fake_rate_e; 
      }

      // return fake weight
      if (Lepton_isTightEle->At(0)){
          new_fakew = (-1) * fr * (1 - prompt_rate)/(prompt_rate - fr);
      }else{
          new_fakew = (fr * prompt_rate)/(prompt_rate - fr);
      }
  }

  return new_fakew;
}

void
fakeWeightOTF::bindTree_(multidraw::FunctionLibrary& _library)
{   
    _library.bindBranch(Lepton_pt, "Lepton_pt");
    _library.bindBranch(Lepton_eta, "Lepton_eta");
    _library.bindBranch(Lepton_pdgId, "Lepton_pdgId");
    _library.bindBranch(Lepton_isTightEle, ("Lepton_isTightElectron_"+ele_WP).c_str());
    _library.bindBranch(Lepton_isTightMu, ("Lepton_isTightMuon_"+mu_WP).c_str());
}

fakeWeightOTF::~fakeWeightOTF(){
  Lepton_pt=nullptr;
  Lepton_eta= nullptr;
  Lepton_pdgId= nullptr;
  Lepton_isTightEle=nullptr;
  Lepton_isTightMu=nullptr;
}

#endif
