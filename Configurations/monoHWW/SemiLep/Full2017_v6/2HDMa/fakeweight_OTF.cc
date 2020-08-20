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

class FakeWeightOTF : public multidraw::TTreeFunction {
public:
  //FakeWeightOTF(char * file, string ele_WP, string mu_WP, string fakew_name, char* fr_ele_path, char * pr_ele_path, char* fr_mu_path, char * pr_mu_path);
  //FakeWeightOTF(char * file, string ele_WP, string mu_WP, char* fr_ele_path, char * pr_ele_path, char* fr_mu_path, char * pr_mu_path);
  FakeWeightOTF(string file, string ele_WP, string mu_WP, string fr_ele_path, string pr_ele_path, string fr_mu_path, string pr_mu_path);

  char const* getName() const override { 
      //std::cout << "FakeWeightOTF: asking name" << std::endl;
      return "FakeWeightOTF"; 
  }
  //TTreeFunction* clone() const override { return new FakeWeightOTF(inputfile_path, ele_WP, mu_WP, fakew_name, fr_ele_path, pr_ele_path, fr_mu_path, pr_mu_path); }
  TTreeFunction* clone() const override { 
      //std::cout << "FakeWeightOTF: clone" << std::endl;
      //std::cout << "Passing input files: " << fr_ele_path << ", " << fr_mu_path << ", " << pr_ele_path << ", " << pr_mu_path << std::endl;
      return new FakeWeightOTF(inputfile_path, ele_WP, mu_WP, fr_ele_path, pr_ele_path, fr_mu_path, pr_mu_path); 
      //return new FakeWeightOTF(&inputfile_path, ele_WP, mu_WP, &fr_ele_path, &pr_ele_path, &fr_mu_path, &pr_mu_path); 
  }

  unsigned getNdata() override { return 1; }
  double evaluate(unsigned) override;

protected:  
  ~FakeWeightOTF();
  void bindTree_(multidraw::FunctionLibrary&) override;
  
  //char * inputfile_path;
  //char * pr_ele_path;
  //char * fr_ele_path;
  //char * pr_mu_path;
  //char * fr_mu_path;
  string inputfile_path;
  string pr_ele_path;
  string fr_ele_path;
  string pr_mu_path;
  string fr_mu_path;
  TFile* inputfile;
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
  vector<TF1 *> eff_A_L;
  vector<TF1 *> eff_A_T;
  vector<TF1 *> eff_B_L;
  vector<TF1 *> eff_B_T;

  FloatArrayReader* Lepton_pt{};
  FloatArrayReader* Lepton_eta{};
  IntArrayReader*   Lepton_pdgId{};
  IntArrayReader*   Lepton_isTightEle{};
  IntArrayReader*   Lepton_isTightMu{};
  //FloatValueReader* Fake_weight{};

};

//FakeWeightOTF::FakeWeightOTF(char * file, string ele_WP, string mu_WP, string fakew_name, char* fr_ele_path, char* pr_ele_path, char* fr_mu_path, char* pr_mu_path) :
//FakeWeightOTF::FakeWeightOTF(char * in_file, string ele_WP, string mu_WP, char* in_fr_ele_path, char* in_pr_ele_path, char* in_fr_mu_path, char* in_pr_mu_path) :
FakeWeightOTF::FakeWeightOTF(string in_file, string ele_WP, string mu_WP, string in_fr_ele_path, string in_pr_ele_path, string in_fr_mu_path, string in_pr_mu_path) :
  TTreeFunction(), 
                  inputfile_path(in_file), 
                  fr_ele_path(in_fr_ele_path), pr_ele_path(in_pr_ele_path),
                  fr_mu_path(in_fr_mu_path), pr_mu_path(in_pr_mu_path),
                  ele_WP(ele_WP), mu_WP(mu_WP) 
                  //inputfile_path(*in_file), 
                  //fr_ele_path(*in_fr_ele_path), pr_ele_path(*in_pr_ele_path),
                  //fr_mu_path(*in_fr_mu_path), pr_mu_path(*in_pr_mu_path),
                  //ele_WP(ele_WP), mu_WP(mu_WP) 
{
  //char new_inputfile_path = *in_file;
  //char new_pr_ele_path    = *in_pr_ele_path;   
  //char new_fr_ele_path    = *in_fr_ele_path;   
  //char new_pr_mu_path     = *in_pr_mu_path;    
  //char new_fr_mu_path     = *in_fr_mu_path;    

  //inputfile_path = &new_inputfile_path;
  //pr_ele_path    = &new_pr_ele_path;
  //fr_ele_path    = &new_fr_ele_path;
  //pr_mu_path     = &new_pr_mu_path;
  //fr_mu_path     = &new_fr_mu_path;
 
  //std::cout << "FakeWeightOTF: start init" << std::endl;
  //inputfile = new TFile(in_file, "read");
  inputfile = new TFile(inputfile_path.c_str(), "read");
  for (int i = 1; i<=10; i++){
    eff_A_L.push_back((TF1*)inputfile->Get(("f_A_L_etabin"+ to_string(i)).c_str() ));
    eff_A_T.push_back((TF1*)inputfile->Get(("f_A_T_etabin"+ to_string(i)).c_str() ));
    eff_B_L.push_back((TF1*)inputfile->Get(("f_B_L_etabin"+ to_string(i)).c_str() ));
    eff_B_T.push_back((TF1*)inputfile->Get(("f_B_T_etabin"+ to_string(i)).c_str() ));
  } 
  inputfile->Close();
  ////std::cout << "Reading input files: " << *fr_ele_path << ", " << *fr_mu_path << ", " << *pr_ele_path << ", " << *pr_mu_path << std::endl;
  //std::cout << "Reading input files: " << fr_ele_path << ", " << fr_mu_path << ", " << pr_ele_path << ", " << pr_mu_path << std::endl;
  //std::cout << "Reading input files: " << in_fr_ele_path << ", " << in_fr_mu_path << ", " << in_pr_ele_path << ", " << in_pr_mu_path << std::endl;
  //fr_ele_file = new TFile(fr_ele_path, "read");
  //pr_ele_file = new TFile(pr_ele_path, "read");
  fr_ele_file = new TFile(fr_ele_path.c_str(), "read");
  pr_ele_file = new TFile(pr_ele_path.c_str(), "read");
  fr_ele_h2 = (TH2F*) fr_ele_file->Get("FR_pT_eta_EWKcorr");   
  pr_ele_h2 = (TH2F*) pr_ele_file->Get("h_Ele_signal_pt_eta_bin");
  fr_ele_h2->SetDirectory(0);
  pr_ele_h2->SetDirectory(0);
  fr_ele_file->Close();
  fr_ele_file->Close();

  //fr_mu_file = new TFile(fr_mu_path, "read");
  //pr_mu_file = new TFile(pr_mu_path, "read");
  fr_mu_file = new TFile(fr_mu_path.c_str(), "read");
  pr_mu_file = new TFile(pr_mu_path.c_str(), "read");
  fr_mu_h2 = (TH2F*) fr_mu_file->Get("FR_pT_eta_EWKcorr");   
  pr_mu_h2 = (TH2F*) pr_mu_file->Get("h_Muon_signal_pt_eta_bin");
  fr_mu_h2->SetDirectory(0);
  pr_mu_h2->SetDirectory(0);
  fr_mu_file->Close();
  fr_mu_file->Close();
  
}
//FakeWeightOTF::FakeWeightOTF(char * in_file, string ele_WP, string mu_WP, char* in_fr_ele_path, char* in_pr_ele_path, char* in_fr_mu_path, char* in_pr_mu_path) :


double
FakeWeightOTF::evaluate(unsigned)
{
  //std::cout << "FakeWeightOTF: start evaluate" << std::endl;

  // Get Eta bin lepton
  //std::cout << "Here 1 " << fr_ele_path << ", " << fr_mu_path << std::endl;
  float eta = Lepton_eta->At(0);
  float aeta = abs(eta);
  float pt = Lepton_pt->At(0);
  float new_fakew = 0.;

  //std::cout << "Here 2" << std::endl;
  if (abs(Lepton_pdgId->At(0)) != 11){
      //std::cout << "Here Mu 1" << std::endl;
      float maxpt = pr_mu_h2->GetXaxis()->GetBinCenter(pr_mu_h2->GetNbinsX());
      float prompt_rate;
      //std::cout << "Here Mu 2" << std::endl;
      if (pt > maxpt){
        prompt_rate = pr_mu_h2->GetBinContent(pr_mu_h2->FindBin(maxpt,aeta));
      }else{
        prompt_rate = pr_mu_h2->GetBinContent(pr_mu_h2->FindBin(pt,aeta));
      }
      //std::cout << "Here Mu 3" << std::endl;
      float fake_rate; 
      //maxpt = fr_mu_h2->GetXaxis()->GetBinCenter(fr_mu_h2->GetNbinsX());
      maxpt = 35.; 
      if (pt > maxpt){
        fake_rate = fr_mu_h2->GetBinContent(fr_mu_h2->FindBin(maxpt, aeta));
      }else{
        fake_rate = fr_mu_h2->GetBinContent(fr_mu_h2->FindBin(pt, aeta));
      }
      //std::cout << "Here Mu 4" << std::endl;

      if (Lepton_isTightMu->At(0)){
          new_fakew = (-1) * fake_rate * (1 - prompt_rate)/(prompt_rate - fake_rate);
          //new_fakew =  (-1)* (fake_rate/ (prompt_rate-fake_rate)) *(1- R_factor*prompt_rate);
      }else{
          new_fakew = (fake_rate * prompt_rate)/(prompt_rate - fake_rate);
          //new_fakew =  R_factor * (fake_rate*prompt_rate)/(prompt_rate-fake_rate);
      }
      //std::cout << "Here Mu 5" << std::endl;
  }else{
      //std::cout << "Here Ele 1" << std::endl;
      float maxpt = pr_ele_h2->GetXaxis()->GetBinCenter(pr_ele_h2->GetNbinsX());
      float prompt_rate;
      //std::cout << "Here Ele 2" << std::endl;
      if (pt > maxpt){
        prompt_rate = pr_ele_h2->GetBinContent(pr_ele_h2->FindBin(maxpt,aeta));
      }else{
        prompt_rate = pr_ele_h2->GetBinContent(pr_ele_h2->FindBin(pt,aeta));
      }
      //std::cout << "Here Ele 3" << std::endl;
      float fake_rate; 
      //maxpt = fr_ele_h2->GetXaxis()->GetBinCenter(fr_ele_h2->GetNbinsX());
      maxpt = 35.; 
      if (pt > maxpt){
        fake_rate = fr_ele_h2->GetBinContent(fr_ele_h2->FindBin(maxpt, aeta));
      }else{
        fake_rate = fr_ele_h2->GetBinContent(fr_ele_h2->FindBin(pt, aeta));
      }
      //std::cout << "Here Ele 4" << std::endl;
      vector<float> etabins = {-2.5,-2.1,-1.566,-1.442,-0.8,0.0,0.8,1.442,1.566,2.1,2.5,3};
      int etabin = -1;
      for (int i=0;i<etabins.size()-1;i++){
        if (eta >=etabins[i] && eta < etabins[i+1]){
          etabin = i;
          break;
        }
      }

      float R_factor = ( eff_A_T.at(etabin)->Eval(pt) / eff_A_L.at(etabin)->Eval(pt)) / 
                        ( eff_B_T.at(etabin)->Eval(pt) / eff_B_L.at(etabin)->Eval(pt));

      //float fakew = *(Fake_weight->Get());

      if (Lepton_isTightEle->At(0)){
        new_fakew =  (-1)* (fake_rate/ (prompt_rate-fake_rate)) *(1- R_factor*prompt_rate);
      }else{
        new_fakew =  R_factor * (fake_rate*prompt_rate)/(prompt_rate-fake_rate);
      }
      //std::cout << "Here Ele 5" << std::endl;
  }

  //std::cout << "Here 3" << std::endl;
  //throw 1;
  // cout << " R factor: "<< R_factor<< " | Old weight: "<< fakew << " | new fake weight: " << new_fakew << endl; 
  return new_fakew;
}

void
FakeWeightOTF::bindTree_(multidraw::FunctionLibrary& _library)
{   
    //std::cout << "FakeWeightOTF: start bindTree" << std::endl;
    _library.bindBranch(Lepton_pt, "Lepton_pt");
    _library.bindBranch(Lepton_eta, "Lepton_eta");
    _library.bindBranch(Lepton_pdgId, "Lepton_pdgId");
    _library.bindBranch(Lepton_isTightEle, ("Lepton_isTightElectron_"+ele_WP).c_str());
    _library.bindBranch(Lepton_isTightMu, ("Lepton_isTightMuon_"+mu_WP).c_str());
    //_library.bindBranch(Fake_weight, fakew_name.c_str());
}

FakeWeightOTF::~FakeWeightOTF(){
  //std::cout << "FakeWeightOTF: start destructor" << std::endl;
  Lepton_pt=nullptr;
  Lepton_eta= nullptr;
  Lepton_pdgId= nullptr;
  Lepton_isTightEle=nullptr;
  Lepton_isTightMu=nullptr;
  //Fake_weight=nullptr;
}
