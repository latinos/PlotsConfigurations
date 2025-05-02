/*
  To have the complete formulas:
  https://github.com/latinos/LatinoAnalysis/blob/master/NanoGardener/python/modules/LeptonFakeWMaker.py
  https://github.com/latinos/LatinoAnalysis/blob/UL_production/NanoGardener/python/data/formulasToAdd_FAKE_Full2018v9.py
*/


#include "LatinoAnalysis/MultiDraw/interface/TTreeFunction.h"
#include "LatinoAnalysis/MultiDraw/interface/FunctionLibrary.h"

#include "TSystem.h"

#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>
#include <iterator>

#include "TLorentzVector.h"
#include "TMath.h"

#include "TH2D.h"
#include "TFile.h"
#include <map>

using namespace std;

typedef std::map<std::string,std::map<std::string,std::string>> map_dict;

class fake_rate_reader : public multidraw::TTreeFunction {
public:
  // fake_rate_reader( const char* year , std::string ele_WP, std::string muon_WP, float ele_WP_number, float muon_WP_number);
  fake_rate_reader( TString year , TString ele_WP, TString muon_WP, float ele_WP_number, float muon_WP_number, TString kind, uint nLeptons, TString electron_tight_charge );
  char const* getName() const override { return "fake_rate_reader"; }
  TTreeFunction* clone() const override { return new fake_rate_reader( year_ , ele_WP_, muon_WP_, ele_WP_number_, muon_WP_number_, kind_, nLeptons_, electron_tight_charge_); }
  unsigned getNdata() override { return 1; }
  double evaluate(unsigned) override;
  // std::tuple<double,double> GetFR_2l( double pt1 , double eta1, double pdg1, double isTight1, double pt2 , double eta2, double pdg2, double isTight2);
  std::tuple<double,double> GetRate(TH2F* fake_rate_histo, double pt, double eta, double lepton_pt_max);
  float GetFR_2l( double pt1 , double eta1, double pdg1, double isTight1, double pt2 , double eta2, double pdg2, double isTight2, TH2F* fake_rate_ele_, TH2F* fake_rate_muon_, TString stat);
  float GetFR_3l( double pt1 , double eta1, double pdg1, double isTight1, double pt2 , double eta2, double pdg2, double isTight2, double pt3 , double eta3, double pdg3, double isTight3, TH2F* fake_rate_ele_, TH2F* fake_rate_muon_, TString stat);

protected:
  TString year_; 
  unsigned int nLeptons_;
  TString electron_tight_charge_;
  std::string SF_type_;
  TString ele_WP_;
  TString muon_WP_;
  float ele_WP_number_;
  float muon_WP_number_;
  TString kind_;
  void bindTree_(multidraw::FunctionLibrary&) override;
  IntArrayReader*   Lepton_pdgId;
  FloatArrayReader* Lepton_pt;
  FloatArrayReader* Lepton_eta;
  IntArrayReader*   Lepton_isTightMuon_cut_Tight_HWWW;
  IntArrayReader*   Lepton_isTightElectron_mvaFall17V2Iso_WP90_SS;
  FloatArrayReader* Lepton_mvaTTH_UL;
  IntArrayReader*   Lepton_muonIdx;
  FloatArrayReader* Muon_mvaTTH;
  FloatArrayReader* CleanJet_pt;
  UIntValueReader* nCleanJet;
  map_dict fake_rate_reader_map_;
  TH2F* fake_rate_muon_10_;
  TH2F* fake_rate_muon_15_;
  TH2F* fake_rate_muon_20_;
  TH2F* fake_rate_muon_25_;
  TH2F* fake_rate_muon_30_;
  TH2F* fake_rate_muon_35_;
  TH2F* fake_rate_muon_45_;
  TH2F* fake_rate_ele_25_;
  TH2F* fake_rate_ele_35_;
  TH2F* fake_rate_ele_45_;
  TH2F* prompt_rate_muon_;
  TH2F* prompt_rate_ele_;
  int isTight_[3];

private:
  void loadSF2D( std::string filename );
  std::tuple<double,double> GetSF( double pt_in , double eta_in );
  
};


// Read fake and prompt rate histograms
fake_rate_reader::fake_rate_reader( TString year , TString ele_WP, TString muon_WP, float ele_WP_number, float muon_WP_number, TString kind, uint nLeptons, TString electron_tight_charge ) : TTreeFunction(){

  cout << "Year:             " << year                  << endl;
  cout << "Ele WP:           " << ele_WP                << endl;
  cout << "Muon WP:          " << muon_WP               << endl;
  cout << "Ele WP number:    " << ele_WP_number         << endl;
  cout << "Muon WP number:   " << muon_WP_number        << endl;
  cout << "Kind:             " << kind                  << endl;
  cout << "nLeptons:         " << nLeptons              << endl;
  cout << "Ele tight charge: " << electron_tight_charge << endl;

  year_ = year;
  ele_WP_  = ele_WP;
  muon_WP_ = muon_WP;
  ele_WP_number_ = ele_WP_number;
  muon_WP_number_ = muon_WP_number;
  kind_ = kind;
  nLeptons_ = nLeptons;
  electron_tight_charge_ = electron_tight_charge; // ['std','ss']

  TString ele_tight_suffix = "";
  if (electron_tight_charge_ == "ss")
    ele_tight_suffix = "_SS";

  std::string cmssw_base = std::getenv("CMSSW_BASE");
  
  TString muID = (year_ == "2016_HIPM" || year_ == "2016_noHIPM") ? "Tight80x" : "Tight_HWWW";
  if (muon_WP != "") muon_WP = "_tthmva_"+muon_WP;
  if (ele_WP != "") ele_WP = "_tthmva_UL_"+ele_WP;

  // Fake rate input files
  TString fake_muon_file_name_10 = cmssw_base + "/src/PlotsConfigurations/Configurations/WH_chargeAsymmetry/UL/data/fakerate/" + year + "/cut_" + muID + muon_WP + "/MuonFR_jet10.root";
  TString fake_muon_file_name_15 = cmssw_base + "/src/PlotsConfigurations/Configurations/WH_chargeAsymmetry/UL/data/fakerate/" + year + "/cut_" + muID + muon_WP + "/MuonFR_jet15.root";
  TString fake_muon_file_name_20 = cmssw_base + "/src/PlotsConfigurations/Configurations/WH_chargeAsymmetry/UL/data/fakerate/" + year + "/cut_" + muID + muon_WP + "/MuonFR_jet20.root";
  TString fake_muon_file_name_25 = cmssw_base + "/src/PlotsConfigurations/Configurations/WH_chargeAsymmetry/UL/data/fakerate/" + year + "/cut_" + muID + muon_WP + "/MuonFR_jet25.root";
  TString fake_muon_file_name_30 = cmssw_base + "/src/PlotsConfigurations/Configurations/WH_chargeAsymmetry/UL/data/fakerate/" + year + "/cut_" + muID + muon_WP + "/MuonFR_jet30.root";
  TString fake_muon_file_name_35 = cmssw_base + "/src/PlotsConfigurations/Configurations/WH_chargeAsymmetry/UL/data/fakerate/" + year + "/cut_" + muID + muon_WP + "/MuonFR_jet35.root";
  TString fake_muon_file_name_45 = cmssw_base + "/src/PlotsConfigurations/Configurations/WH_chargeAsymmetry/UL/data/fakerate/" + year + "/cut_" + muID + muon_WP + "/MuonFR_jet45.root";

  TString fake_ele_file_name_25  = cmssw_base + "/src/PlotsConfigurations/Configurations/WH_chargeAsymmetry/UL/data/fakerate/" + year + "/mvaFall17V2Iso_WP90" + ele_tight_suffix + ele_WP + "/EleFR_jet25.root";
  TString fake_ele_file_name_35  = cmssw_base + "/src/PlotsConfigurations/Configurations/WH_chargeAsymmetry/UL/data/fakerate/" + year + "/mvaFall17V2Iso_WP90" + ele_tight_suffix + ele_WP + "/EleFR_jet35.root";
  TString fake_ele_file_name_45  = cmssw_base + "/src/PlotsConfigurations/Configurations/WH_chargeAsymmetry/UL/data/fakerate/" + year + "/mvaFall17V2Iso_WP90" + ele_tight_suffix + ele_WP + "/EleFR_jet45.root";

  // Prompt rate input files
  TString pr_muon_file_name = cmssw_base + "/src/PlotsConfigurations/Configurations/WH_chargeAsymmetry/UL/data/fakerate/" + year + "/cut_" + muID + muon_WP + "/MuonPR.root";
  TString pr_ele_file_name =  cmssw_base + "/src/PlotsConfigurations/Configurations/WH_chargeAsymmetry/UL/data/fakerate/" + year + "/mvaFall17V2Iso_WP90" + ele_tight_suffix + ele_WP + "/ElePR.root";
  
  // Get fake and prompt rates  
  // Muons
  TFile* f_muon_10   = new TFile(fake_muon_file_name_10);
  fake_rate_muon_10_ = (TH2F*) f_muon_10 -> Get("FR_pT_eta_EWKcorr");

  TFile* f_muon_15   = new TFile(fake_muon_file_name_15);
  fake_rate_muon_15_ = (TH2F*) f_muon_15 -> Get("FR_pT_eta_EWKcorr");

  TFile* f_muon_20   = new TFile(fake_muon_file_name_20);
  fake_rate_muon_20_ = (TH2F*) f_muon_20 -> Get("FR_pT_eta_EWKcorr");

  TFile* f_muon_25   = new TFile(fake_muon_file_name_25);
  fake_rate_muon_25_ = (TH2F*) f_muon_25 -> Get("FR_pT_eta_EWKcorr");

  TFile* f_muon_30   = new TFile(fake_muon_file_name_30);
  fake_rate_muon_30_ = (TH2F*) f_muon_30 -> Get("FR_pT_eta_EWKcorr");

  TFile* f_muon_35   = new TFile(fake_muon_file_name_35);
  fake_rate_muon_35_ = (TH2F*) f_muon_35 -> Get("FR_pT_eta_EWKcorr");

  TFile* f_muon_45   = new TFile(fake_muon_file_name_45);
  fake_rate_muon_45_ = (TH2F*) f_muon_45 -> Get("FR_pT_eta_EWKcorr");

  TFile* f_muon_PR  = new TFile(pr_muon_file_name);
  prompt_rate_muon_ = (TH2F*) f_muon_PR -> Get("h_Muon_signal_pt_eta_bin");

  // Electrons
  TFile* f_ele_25   = new TFile(fake_ele_file_name_25);
  fake_rate_ele_25_ = (TH2F*) f_ele_25 -> Get("FR_pT_eta_EWKcorr");

  TFile* f_ele_35   = new TFile(fake_ele_file_name_35);
  fake_rate_ele_35_ = (TH2F*) f_ele_35 -> Get("FR_pT_eta_EWKcorr");

  TFile* f_ele_45   = new TFile(fake_ele_file_name_45);
  fake_rate_ele_45_ = (TH2F*) f_ele_45 -> Get("FR_pT_eta_EWKcorr");

  TFile* f_ele_PR = new TFile(pr_ele_file_name);
  prompt_rate_ele_ = (TH2F*) f_ele_PR -> Get("h_Ele_signal_pt_eta_bin");
}


// Get fake rate and its statistical uncertainty
std::tuple<double,double> 
fake_rate_reader::GetRate(TH2F* fake_rate_histo,
			  double pt, 
			  double eta,
			  double lepton_pt_max){

  double aeta = abs(eta);
  int nbinsx  = fake_rate_histo->GetNbinsX();

  if (lepton_pt_max <= 0.){
    lepton_pt_max = fake_rate_histo->GetXaxis()->GetBinCenter(nbinsx);
  }

  double rate_value = fake_rate_histo->GetBinContent(fake_rate_histo->FindBin(min(pt, lepton_pt_max), aeta));
  double rate_error = fake_rate_histo->GetBinError  (fake_rate_histo->FindBin(min(pt, lepton_pt_max), aeta));
  
  std::tuple<double,double> rate_and_error = std::make_tuple(rate_value,rate_error);

  return rate_and_error;

}


// Get fake rate for 2-leptons events
// std::tuple<double,double>
float
fake_rate_reader::GetFR_2l( double pt1 , double eta1, double pdg1, double isTight1,
			    double pt2 , double eta2, double pdg2, double isTight2,
			    TH2F* fake_rate_ele_, TH2F*  fake_rate_muon_, 
			    TString stat
			    ){
  
  double p1  = 1.; // leading lepton prompt rate
  double f1  = 0.; // leading lepton fake rate
  double pE1 = 0.; // leading lepton prompt rate statistical uncertainty
  double fE1 = 0.; // leading lepton fake rate statistical uncertainty
  double prompt_probability1 = 1.;
  double fake_probability1   = 0.;

  double p2  = 1.; // sub-leading lepton prompt rate
  double f2  = 0.; // sub-leading lepton fake rate
  double pE2 = 0.; // sub-leading lepton prompt rate statistical uncertainty
  double fE2 = 0.; // sub-leading lepton fake rate statistical uncertainty
  double prompt_probability2 = 1.;
  double fake_probability2   = 0.;
  
  // Leading lepton
  // Case electron
  if (abs(pdg1) == 11){
    std::tuple<double,double> p = GetRate(prompt_rate_ele_,  pt1, eta1, -999.);
    p1  = std::get<0>(p);
    pE1 = std::get<1>(p);
    std::tuple<double,double> f = GetRate(fake_rate_ele_,    pt1, eta1,   35.);
    f1  = std::get<0>(f);
    fE1 = std::get<1>(f);

    if      (stat == "ElUp")   f1 = f1 + fE1;
    else if (stat == "ElDown") f1 = f1 - fE1; 
  }
  // case muon
  else if (abs(pdg1) == 13){
    std::tuple<double,double> p = GetRate(prompt_rate_muon_,  pt1, eta1, -999.);
    p1  = std::get<0>(p);
    pE1 = std::get<1>(p);
    std::tuple<double,double> f = GetRate(fake_rate_muon_,    pt1, eta1,   35.);
    f1  = std::get<0>(f);
    fE1 = std::get<1>(f);

    if      (stat == "MuUp")   f1 = f1 + fE1;
    else if (stat == "MuDown") f1 = f1 - fE1; 
  }

  // Sub-leading lepton
  // case electron
  if (abs(pdg2) == 11){
    std::tuple<double,double> p = GetRate(prompt_rate_ele_,  pt2, eta2, -999.);
    p2  = std::get<0>(p);
    pE2 = std::get<1>(p);
    std::tuple<double,double> f = GetRate(fake_rate_ele_,    pt2, eta2,   35.);
    f2  = std::get<0>(f);
    fE2 = std::get<1>(f);

    if      (stat == "ElUp")   f2 = f2 + fE2;
    else if (stat == "ElDown") f2 = f2 - fE2; 
  }
  // case muon
  else if (abs(pdg2) == 13){
    std::tuple<double,double> p = GetRate(prompt_rate_muon_,  pt2, eta2, -999.);
    p2  = std::get<0>(p);
    pE2 = std::get<1>(p);
    std::tuple<double,double> f = GetRate(fake_rate_muon_,    pt2, eta2,  35.);
    f2  = std::get<0>(f);
    fE2 = std::get<1>(f);

    if      (stat == "MuUp")   f2 = f2 + fE2;
    else if (stat == "MuDown") f2 = f2 - fE2; 
  }

  // Compute per-lepton probabilities
  int nTight = 0;
  if (isTight1 == 1){
    ++nTight;
    prompt_probability1 = p1*(1. - f1) / (p1 - f1);
    fake_probability1   = f1*(1. - p1) / (p1 - f1);
  }
  else{
    prompt_probability1 = p1*f1 / (p1 - f1);
    fake_probability1   = f1*p1 / (p1 - f1);
  }

  if (isTight2 == 1){
    ++nTight;
    prompt_probability2 = p2*(1. - f2) / (p2 - f2);
    fake_probability2   = f2*(1. - p2) / (p2 - f2);
  }
  else{
    prompt_probability2 = p2*f2 / (p2 - f2);
    fake_probability2   = f2*p2 / (p2 - f2);
  }
  
  // Per-event weight
  // Leading lepton prompt - sub-leading lepton fake
  float PF = prompt_probability1*fake_probability2;
  // Leading lepton fake - sub-leading lepton prompt
  float FP = fake_probability1*prompt_probability2;
  // Both leptons fake
  float FF = fake_probability1*fake_probability2;

  if (nTight == 1)
    FF *= -1.;
  else{
    PF *= -1.;
    FP *= -1.;
  }

  float sf = PF + FP + FF;

  return sf;

}


// Get fake rate for 3-leptons events
// std::tuple<double,double>
float
fake_rate_reader::GetFR_3l( double pt1 , double eta1, double pdg1, double isTight1,
			    double pt2 , double eta2, double pdg2, double isTight2,
			    double pt3 , double eta3, double pdg3, double isTight3,
			    TH2F* fake_rate_ele_, TH2F*  fake_rate_muon_, 
			    TString stat
			    ){
  
  double p1  = 1.; // leading lepton prompt rate
  double f1  = 0.; // leading lepton fake rate
  double pE1 = 0.; // leading lepton prompt rate statistical uncertainty
  double fE1 = 0.; // leading lepton fake rate statistical uncertainty
  double prompt_probability1 = 1.;
  double fake_probability1   = 0.;

  double p2  = 1.; // sub-leading lepton prompt rate
  double f2  = 0.; // sub-leading lepton fake rate
  double pE2 = 0.; // sub-leading lepton prompt rate statistical uncertainty
  double fE2 = 0.; // sub-leading lepton fake rate statistical uncertainty
  double prompt_probability2 = 1.;
  double fake_probability2   = 0.;

  double p3  = 1.; // third lepton prompt rate
  double f3  = 0.; // third lepton fake rate
  double pE3 = 0.; // third lepton prompt rate statistical uncertainty
  double fE3 = 0.; // third lepton fake rate statistical uncertainty
  double prompt_probability3 = 1.;
  double fake_probability3   = 0.;
  
  // Leading lepton
  // Case electron
  if (abs(pdg1) == 11){
    std::tuple<double,double> p = GetRate(prompt_rate_ele_,  pt1, eta1, -999.);
    p1  = std::get<0>(p);
    pE1 = std::get<1>(p);
    std::tuple<double,double> f = GetRate(fake_rate_ele_,    pt1, eta1,   35.);
    f1  = std::get<0>(f);
    fE1 = std::get<1>(f);

    if      (stat == "ElUp")   f1 = f1 + fE1;
    else if (stat == "ElDown") f1 = f1 - fE1; 
  }
  // case muon
  else if (abs(pdg1) == 13){
    std::tuple<double,double> p = GetRate(prompt_rate_muon_,  pt1, eta1, -999.);
    p1  = std::get<0>(p);
    pE1 = std::get<1>(p);
    std::tuple<double,double> f = GetRate(fake_rate_muon_,    pt1, eta1,   35.);
    f1  = std::get<0>(f);
    fE1 = std::get<1>(f);

    if      (stat == "MuUp")   f1 = f1 + fE1;
    else if (stat == "MuDown") f1 = f1 - fE1; 
  }

  // Sub-leading lepton
  // case electron
  if (abs(pdg2) == 11){
    std::tuple<double,double> p = GetRate(prompt_rate_ele_,  pt2, eta2, -999.);
    p2  = std::get<0>(p);
    pE2 = std::get<1>(p);
    std::tuple<double,double> f = GetRate(fake_rate_ele_,    pt2, eta2,   35.);
    f2  = std::get<0>(f);
    fE2 = std::get<1>(f);

    if      (stat == "ElUp")   f2 = f2 + fE2;
    else if (stat == "ElDown") f2 = f2 - fE2; 
  }
  // case muon
  else if (abs(pdg2) == 13){
    std::tuple<double,double> p = GetRate(prompt_rate_muon_,  pt2, eta2, -999.);
    p2  = std::get<0>(p);
    pE2 = std::get<1>(p);
    std::tuple<double,double> f = GetRate(fake_rate_muon_,    pt2, eta2,  35.);
    f2  = std::get<0>(f);
    fE2 = std::get<1>(f);

    if      (stat == "MuUp")   f2 = f2 + fE2;
    else if (stat == "MuDown") f2 = f2 - fE2; 
  }

  // Third lepton
  // case electron
  if (abs(pdg2) == 11){
    std::tuple<double,double> p = GetRate(prompt_rate_ele_,  pt3, eta3, -999.);
    p3  = std::get<0>(p);
    pE3 = std::get<1>(p);
    std::tuple<double,double> f = GetRate(fake_rate_ele_,    pt3, eta3,   35.);
    f3  = std::get<0>(f);
    fE3 = std::get<1>(f);

    if      (stat == "ElUp")   f3 = f3 + fE3;
    else if (stat == "ElDown") f3 = f3 - fE3; 
  }
  // case muon
  else if (abs(pdg2) == 13){
    std::tuple<double,double> p = GetRate(prompt_rate_muon_,  pt3, eta3, -999.);
    p3  = std::get<0>(p);
    pE3 = std::get<1>(p);
    std::tuple<double,double> f = GetRate(fake_rate_muon_,    pt3, eta3,  35.);
    f3  = std::get<0>(f);
    fE3 = std::get<1>(f);

    if      (stat == "MuUp")   f3 = f3 + fE3;
    else if (stat == "MuDown") f3 = f3 - fE3;
  }

  // Compute per-lepton probabilities
  int nTight = 0;
  if (isTight1 == 1){
    ++nTight;
    prompt_probability1 = p1*(1. - f1) / (p1 - f1);
    fake_probability1   = f1*(1. - p1) / (p1 - f1);
  }
  else{
    prompt_probability1 = p1*f1 / (p1 - f1);
    fake_probability1   = f1*p1 / (p1 - f1);
  }

  if (isTight2 == 1){
    ++nTight;
    prompt_probability2 = p2*(1. - f2) / (p2 - f2);
    fake_probability2   = f2*(1. - p2) / (p2 - f2);
  }
  else{
    prompt_probability2 = p2*f2 / (p2 - f2);
    fake_probability2   = f2*p2 / (p2 - f2);
  }

  if (isTight3 == 1){
    ++nTight;
    prompt_probability3 = p3*(1. - f3) / (p3 - f3);
    fake_probability3   = f3*(1. - p3) / (p3 - f3);
  }
  else{
    prompt_probability3 = p3*f3 / (p3 - f3);
    fake_probability3   = f3*p3 / (p3 - f3);
  }

  // Per-event weight
  // Letters indicate wether the lepton is prompt (P) or fake (F)

  float PPF = prompt_probability1*prompt_probability2*fake_probability3;
  float PFP = prompt_probability1*fake_probability2*prompt_probability3;
  float FPP = fake_probability1*prompt_probability2*prompt_probability3;

  float PFF = prompt_probability1*fake_probability2*fake_probability3;
  float FPF = fake_probability1*prompt_probability2*fake_probability3;
  float FFP = fake_probability1*fake_probability2*prompt_probability3;

  float FFF = fake_probability1*fake_probability2*fake_probability3;

  if (nTight == 1 || nTight == 3){
    PPF *= -1.;
    PFP *= -1.;
    FPP *= -1.;
    FFF *= -1.;
  }
  else{
    PFF *= -1.;
    FPF *= -1.;
    FFP *= -1.;
  }

  float sf = PPF+PFP+FPP + PFF+FPF+FFP + FFF;

  return sf;

}


double
fake_rate_reader::evaluate(unsigned)
{
  double SF = 1.; 
  // uint nLeptons = 2;
  isTight_[0] = 0;
  isTight_[1] = 0;
  isTight_[2] = 0;

  // Build tight lepton definitions - Now hard-coded nLepton is 2
  for (unsigned int i = 0; i < nLeptons_ ; i++) {
    if (TMath::Abs(Lepton_pdgId->At(i)) == 11)
      if (Lepton_isTightElectron_mvaFall17V2Iso_WP90_SS->At(i) == 1 && Lepton_mvaTTH_UL->At(i) > ele_WP_number_) 
	isTight_[i] = 1;
    if (TMath::Abs(Lepton_pdgId->At(i)) == 13)
      if (Lepton_isTightMuon_cut_Tight_HWWW->At(i) == 1 && Muon_mvaTTH->At(Lepton_muonIdx->At(i)) > muon_WP_number_) 
	isTight_[i] = 1;
  }

  // Case 2 leptons
  if (nLeptons_ == 2){

    // Calculate the per-event fake rate

    float fakeWeight_2l0j = GetFR_2l(Lepton_pt->At(0), Lepton_eta->At(0), Lepton_pdgId->At(0), isTight_[0],
				     Lepton_pt->At(1), Lepton_eta->At(1), Lepton_pdgId->At(1), isTight_[1],
				     fake_rate_ele_35_, fake_rate_muon_20_, "Nominal");
    
    float fakeWeight_2l1j = GetFR_2l(Lepton_pt->At(0), Lepton_eta->At(0), Lepton_pdgId->At(0), isTight_[0],
				     Lepton_pt->At(1), Lepton_eta->At(1), Lepton_pdgId->At(1), isTight_[1],
				     fake_rate_ele_35_, fake_rate_muon_25_, "Nominal");
    
    float fakeWeight_2l2j = GetFR_2l(Lepton_pt->At(0), Lepton_eta->At(0), Lepton_pdgId->At(0), isTight_[0],
				     Lepton_pt->At(1), Lepton_eta->At(1), Lepton_pdgId->At(1), isTight_[1],
				     fake_rate_ele_35_, fake_rate_muon_35_, "Nominal");
    
    float fakeWeight = fakeWeight_2l0j*( *nCleanJet->Get() == 0 || CleanJet_pt->At(0) <  30) +
                       fakeWeight_2l1j*((*nCleanJet->Get() == 1 && CleanJet_pt->At(0) >= 30) ||
					(*nCleanJet->Get() >  1 && CleanJet_pt->At(0) >= 30  && CleanJet_pt->At(1) < 30)) +
                       fakeWeight_2l2j*( *nCleanJet->Get() >  1 && CleanJet_pt->At(1) >= 30);
    
    if (kind_ == "nominal") return fakeWeight;
    

    // Calculate the per-event fake rate - EleUp
    if (kind_ == "EleUp"){
      float fakeWeight_2l0jElUp = GetFR_2l(Lepton_pt->At(0), Lepton_eta->At(0), Lepton_pdgId->At(0), isTight_[0],
					   Lepton_pt->At(1), Lepton_eta->At(1), Lepton_pdgId->At(1), isTight_[1],
					   fake_rate_ele_45_, fake_rate_muon_20_, "Nominal");
      
      float fakeWeight_2l1jElUp = GetFR_2l(Lepton_pt->At(0), Lepton_eta->At(0), Lepton_pdgId->At(0), isTight_[0],
					   Lepton_pt->At(1), Lepton_eta->At(1), Lepton_pdgId->At(1), isTight_[1],
					   fake_rate_ele_45_, fake_rate_muon_25_, "Nominal");
      
      float fakeWeight_2l2jElUp = GetFR_2l(Lepton_pt->At(0), Lepton_eta->At(0), Lepton_pdgId->At(0), isTight_[0],
					   Lepton_pt->At(1), Lepton_eta->At(1), Lepton_pdgId->At(1), isTight_[1],
					   fake_rate_ele_45_, fake_rate_muon_35_, "Nominal");
      
      float fakeWeightEleUp = 0.;
      if (fakeWeight != 0.){
	float num = fakeWeight_2l0jElUp*( *nCleanJet->Get() == 0 || CleanJet_pt->At(0) <  30) + 
	            fakeWeight_2l1jElUp*((*nCleanJet->Get() == 1 && CleanJet_pt->At(0) >= 30) || 
					 (*nCleanJet->Get() >  1 && CleanJet_pt->At(0) >= 30 && CleanJet_pt->At(1) < 30)) + 
                    fakeWeight_2l2jElUp*( *nCleanJet->Get() >  1 && CleanJet_pt->At(1) >= 30);
	
	fakeWeightEleUp = num / fakeWeight;
      }
      
      return fakeWeightEleUp;
    }


    // Calculate the per-event fake rate - EleDown
    if (kind_ == "EleDown"){
      float fakeWeight_2l0jElDown = GetFR_2l(Lepton_pt->At(0), Lepton_eta->At(0), Lepton_pdgId->At(0), isTight_[0],
					     Lepton_pt->At(1), Lepton_eta->At(1), Lepton_pdgId->At(1), isTight_[1],
					     fake_rate_ele_25_, fake_rate_muon_20_, "Nominal");
      
      float fakeWeight_2l1jElDown = GetFR_2l(Lepton_pt->At(0), Lepton_eta->At(0), Lepton_pdgId->At(0), isTight_[0],
					     Lepton_pt->At(1), Lepton_eta->At(1), Lepton_pdgId->At(1), isTight_[1],
					     fake_rate_ele_25_, fake_rate_muon_25_, "Nominal");
      
      float fakeWeight_2l2jElDown = GetFR_2l(Lepton_pt->At(0), Lepton_eta->At(0), Lepton_pdgId->At(0), isTight_[0],
					     Lepton_pt->At(1), Lepton_eta->At(1), Lepton_pdgId->At(1), isTight_[1],
					     fake_rate_ele_25_, fake_rate_muon_35_, "Nominal");
      
      float fakeWeightEleDown = 0.;
      if (fakeWeight != 0.){
	float num = fakeWeight_2l0jElDown*( *nCleanJet->Get() == 0 || CleanJet_pt->At(0) <  30) + 
                    fakeWeight_2l1jElDown*((*nCleanJet->Get() == 1 && CleanJet_pt->At(0) >= 30) || 
					   (*nCleanJet->Get() >  1 && CleanJet_pt->At(0) >= 30 && CleanJet_pt->At(1) < 30)) + 
                    fakeWeight_2l2jElDown*( *nCleanJet->Get() >  1 && CleanJet_pt->At(1) >= 30);
	
	fakeWeightEleDown = num / fakeWeight;
      }
      
      return fakeWeightEleDown;
    }
    
    
    // Calculate the per-event fake rate - MuUp
    if (kind_ == "MuUp"){
      float fakeWeight_2l0jMuUp = GetFR_2l(Lepton_pt->At(0), Lepton_eta->At(0), Lepton_pdgId->At(0), isTight_[0],
					   Lepton_pt->At(1), Lepton_eta->At(1), Lepton_pdgId->At(1), isTight_[1],
					   fake_rate_ele_35_, fake_rate_muon_30_, "Nominal");
      
      float fakeWeight_2l1jMuUp = GetFR_2l(Lepton_pt->At(0), Lepton_eta->At(0), Lepton_pdgId->At(0), isTight_[0],
					   Lepton_pt->At(1), Lepton_eta->At(1), Lepton_pdgId->At(1), isTight_[1],
					   fake_rate_ele_35_, fake_rate_muon_35_, "Nominal");
      
      float fakeWeight_2l2jMuUp = GetFR_2l(Lepton_pt->At(0), Lepton_eta->At(0), Lepton_pdgId->At(0), isTight_[0],
					   Lepton_pt->At(1), Lepton_eta->At(1), Lepton_pdgId->At(1), isTight_[1],
					   fake_rate_ele_35_, fake_rate_muon_45_, "Nominal");
      
      float fakeWeightMuUp = 0.;
      if (fakeWeight != 0.){
	float num = fakeWeight_2l0jMuUp*( *nCleanJet->Get() == 0 || CleanJet_pt->At(0) <  30) + 
	            fakeWeight_2l1jMuUp*((*nCleanJet->Get() == 1 && CleanJet_pt->At(0) >= 30) || 
					 (*nCleanJet->Get() >  1 && CleanJet_pt->At(0) >= 30 && CleanJet_pt->At(1) < 30)) + 
     	            fakeWeight_2l2jMuUp*( *nCleanJet->Get() >  1 && CleanJet_pt->At(1) >= 30);
	
	fakeWeightMuUp = num / fakeWeight;
      }
      
      return fakeWeightMuUp;
    }
    
    
    // Calculate the per-event fake rate - MuDown
    if (kind_ == "MuDown"){
      float fakeWeight_2l0jMuDown = GetFR_2l(Lepton_pt->At(0), Lepton_eta->At(0), Lepton_pdgId->At(0), isTight_[0],
					     Lepton_pt->At(1), Lepton_eta->At(1), Lepton_pdgId->At(1), isTight_[1],
					     fake_rate_ele_35_, fake_rate_muon_10_, "Nominal");
      
      float fakeWeight_2l1jMuDown = GetFR_2l(Lepton_pt->At(0), Lepton_eta->At(0), Lepton_pdgId->At(0), isTight_[0],
					     Lepton_pt->At(1), Lepton_eta->At(1), Lepton_pdgId->At(1), isTight_[1],
					     fake_rate_ele_35_, fake_rate_muon_15_, "Nominal");
      
      float fakeWeight_2l2jMuDown = GetFR_2l(Lepton_pt->At(0), Lepton_eta->At(0), Lepton_pdgId->At(0), isTight_[0],
					     Lepton_pt->At(1), Lepton_eta->At(1), Lepton_pdgId->At(1), isTight_[1],
					     fake_rate_ele_35_, fake_rate_muon_25_, "Nominal");
      
      float fakeWeightMuDown = 0.;
      if (fakeWeight != 0.){
	float num = fakeWeight_2l0jMuDown*( *nCleanJet->Get() == 0 || CleanJet_pt->At(0) <  30) + 
	            fakeWeight_2l1jMuDown*((*nCleanJet->Get() == 1 && CleanJet_pt->At(0) >= 30) || 
					   (*nCleanJet->Get() >  1 && CleanJet_pt->At(0) >= 30 && CleanJet_pt->At(1) < 30)) + 
	            fakeWeight_2l2jMuDown*( *nCleanJet->Get() >  1 && CleanJet_pt->At(1) >= 30);
	
	fakeWeightMuDown = num / fakeWeight;
      }
      
      return fakeWeightMuDown;
    }
    
    
    // Calculate the per-event fake rate - StatEleUp
    if (kind_ == "StatEleUp"){
      float fakeWeight_2l0jstatElUp = GetFR_2l(Lepton_pt->At(0), Lepton_eta->At(0), Lepton_pdgId->At(0), isTight_[0],
					       Lepton_pt->At(1), Lepton_eta->At(1), Lepton_pdgId->At(1), isTight_[1],
					       fake_rate_ele_35_, fake_rate_muon_20_, "ElUp");
      
      float fakeWeight_2l1jstatElUp = GetFR_2l(Lepton_pt->At(0), Lepton_eta->At(0), Lepton_pdgId->At(0), isTight_[0],
					       Lepton_pt->At(1), Lepton_eta->At(1), Lepton_pdgId->At(1), isTight_[1],
					       fake_rate_ele_35_, fake_rate_muon_25_, "ElUp");
      
      float fakeWeight_2l2jstatElUp = GetFR_2l(Lepton_pt->At(0), Lepton_eta->At(0), Lepton_pdgId->At(0), isTight_[0],
					       Lepton_pt->At(1), Lepton_eta->At(1), Lepton_pdgId->At(1), isTight_[1],
					       fake_rate_ele_35_, fake_rate_muon_35_, "ElUp");
      
      float fakeWeightstatEleUp = 0.;
      if (fakeWeight != 0.){
	float num = fakeWeight_2l0jstatElUp*( *nCleanJet->Get() == 0 || CleanJet_pt->At(0) <  30) + 
	            fakeWeight_2l1jstatElUp*((*nCleanJet->Get() == 1 && CleanJet_pt->At(0) >= 30) || 
					     (*nCleanJet->Get() >  1 && CleanJet_pt->At(0) >= 30 && CleanJet_pt->At(1) < 30)) + 
                    fakeWeight_2l2jstatElUp*( *nCleanJet->Get() >  1 && CleanJet_pt->At(1) >= 30);
	
	fakeWeightstatEleUp = num / fakeWeight;
      }
      
      return fakeWeightstatEleUp;
    }
    
    
    // Calculate the per-event fake rate - StatEleDown
    if (kind_ == "StatEleDown"){
      float fakeWeight_2l0jstatElDown = GetFR_2l(Lepton_pt->At(0), Lepton_eta->At(0), Lepton_pdgId->At(0), isTight_[0],
						 Lepton_pt->At(1), Lepton_eta->At(1), Lepton_pdgId->At(1), isTight_[1],
						 fake_rate_ele_35_, fake_rate_muon_20_, "ElDown");
      
      float fakeWeight_2l1jstatElDown = GetFR_2l(Lepton_pt->At(0), Lepton_eta->At(0), Lepton_pdgId->At(0), isTight_[0],
						 Lepton_pt->At(1), Lepton_eta->At(1), Lepton_pdgId->At(1), isTight_[1],
						 fake_rate_ele_35_, fake_rate_muon_25_, "ElDown");
      
      float fakeWeight_2l2jstatElDown = GetFR_2l(Lepton_pt->At(0), Lepton_eta->At(0), Lepton_pdgId->At(0), isTight_[0],
						 Lepton_pt->At(1), Lepton_eta->At(1), Lepton_pdgId->At(1), isTight_[1],
						 fake_rate_ele_35_, fake_rate_muon_35_, "ElDown");
      
      float fakeWeightstatEleDown = 0.;
      if (fakeWeight != 0.){
	float num = fakeWeight_2l0jstatElDown*( *nCleanJet->Get() == 0 || CleanJet_pt->At(0) <  30) + 
	            fakeWeight_2l1jstatElDown*((*nCleanJet->Get() == 1 && CleanJet_pt->At(0) >= 30) || 
					       (*nCleanJet->Get() >  1 && CleanJet_pt->At(0) >= 30 && CleanJet_pt->At(1) < 30)) + 
	            fakeWeight_2l2jstatElDown*( *nCleanJet->Get() >  1 && CleanJet_pt->At(1) >= 30);
	
	fakeWeightstatEleDown = num / fakeWeight;
      }
      
      return fakeWeightstatEleDown;
    }
    
    
    // Calculate the per-event fake rate - StatMuUp
    if (kind_ == "StatMuUp"){
      float fakeWeight_2l0jstatMuUp = GetFR_2l(Lepton_pt->At(0), Lepton_eta->At(0), Lepton_pdgId->At(0), isTight_[0],
					       Lepton_pt->At(1), Lepton_eta->At(1), Lepton_pdgId->At(1), isTight_[1],
					       fake_rate_ele_35_, fake_rate_muon_20_, "MuUp");
      
      float fakeWeight_2l1jstatMuUp = GetFR_2l(Lepton_pt->At(0), Lepton_eta->At(0), Lepton_pdgId->At(0), isTight_[0],
					       Lepton_pt->At(1), Lepton_eta->At(1), Lepton_pdgId->At(1), isTight_[1],
					       fake_rate_ele_35_, fake_rate_muon_25_, "MuUp");
      
      float fakeWeight_2l2jstatMuUp = GetFR_2l(Lepton_pt->At(0), Lepton_eta->At(0), Lepton_pdgId->At(0), isTight_[0],
					       Lepton_pt->At(1), Lepton_eta->At(1), Lepton_pdgId->At(1), isTight_[1],
					       fake_rate_ele_35_, fake_rate_muon_35_, "MuUp");
      
      float fakeWeightstatMuUp = 0.;
      if (fakeWeight != 0.){
		float num = fakeWeight_2l0jstatMuUp*( *nCleanJet->Get() == 0 || CleanJet_pt->At(0) <  30) + 
                    fakeWeight_2l1jstatMuUp*((*nCleanJet->Get() == 1 && CleanJet_pt->At(0) >= 30) || 
					     (*nCleanJet->Get() >  1 && CleanJet_pt->At(0) >= 30 && CleanJet_pt->At(1) < 30)) + 
                    fakeWeight_2l2jstatMuUp*( *nCleanJet->Get() >  1 && CleanJet_pt->At(1) >= 30);
	
		fakeWeightstatMuUp = num / fakeWeight;
      }
      
      return fakeWeightstatMuUp;
    }
    
    
    // Calculate the per-event fake rate - StatMuDown
    if (kind_ == "StatMuDown"){
      float fakeWeight_2l0jstatMuDown = GetFR_2l(Lepton_pt->At(0), Lepton_eta->At(0), Lepton_pdgId->At(0), isTight_[0],
						 Lepton_pt->At(1), Lepton_eta->At(1), Lepton_pdgId->At(1), isTight_[1],
						 fake_rate_ele_35_, fake_rate_muon_20_, "MuDown");
      
      float fakeWeight_2l1jstatMuDown = GetFR_2l(Lepton_pt->At(0), Lepton_eta->At(0), Lepton_pdgId->At(0), isTight_[0],
						 Lepton_pt->At(1), Lepton_eta->At(1), Lepton_pdgId->At(1), isTight_[1],
						 fake_rate_ele_35_, fake_rate_muon_25_, "MuDown");
      
      float fakeWeight_2l2jstatMuDown = GetFR_2l(Lepton_pt->At(0), Lepton_eta->At(0), Lepton_pdgId->At(0), isTight_[0],
						 Lepton_pt->At(1), Lepton_eta->At(1), Lepton_pdgId->At(1), isTight_[1],
						 fake_rate_ele_35_, fake_rate_muon_35_, "MuDown");
      
      float fakeWeightstatMuDown = 0.;
      if (fakeWeight != 0.){
		float num = fakeWeight_2l0jstatMuDown*( *nCleanJet->Get() == 0 || CleanJet_pt->At(0) <  30) + 
                    fakeWeight_2l1jstatMuDown*((*nCleanJet->Get() == 1 && CleanJet_pt->At(0) >= 30) || 
					       (*nCleanJet->Get() >  1 && CleanJet_pt->At(0) >= 30 && CleanJet_pt->At(1) < 30)) + 
                    fakeWeight_2l2jstatMuDown*( *nCleanJet->Get() >  1 && CleanJet_pt->At(1) >= 30);
	
		fakeWeightstatMuDown = num / fakeWeight;
      }
      
      return fakeWeightstatMuDown;
    }
    
    else
      return -1;
  }

  else if (nLeptons_ == 3){

    // Calculate the per-event fake rate
    float fakeWeight_3l = GetFR_3l(Lepton_pt->At(0), Lepton_eta->At(0), Lepton_pdgId->At(0), isTight_[0],
				   Lepton_pt->At(1), Lepton_eta->At(1), Lepton_pdgId->At(1), isTight_[1],
				   Lepton_pt->At(2), Lepton_eta->At(2), Lepton_pdgId->At(2), isTight_[2],
				   fake_rate_ele_35_, fake_rate_muon_35_, "Nominal");
    
    if (kind_ == "nominal") return fakeWeight_3l;
    
    // Calculate the per-event fake rate - EleUp
    if (kind_ == "EleUp"){
      float fakeWeight_3lElUp = GetFR_3l(Lepton_pt->At(0), Lepton_eta->At(0), Lepton_pdgId->At(0), isTight_[0],
					 Lepton_pt->At(1), Lepton_eta->At(1), Lepton_pdgId->At(1), isTight_[1],
					 Lepton_pt->At(2), Lepton_eta->At(2), Lepton_pdgId->At(2), isTight_[2],
					 fake_rate_ele_45_, fake_rate_muon_35_, "Nominal");
      
      float fakeWeightEleUp = fakeWeight_3lElUp / fakeWeight_3l;
      
      return fakeWeightEleUp;
    }

    // Calculate the per-event fake rate - EleDown
    if (kind_ == "EleDown"){
      float fakeWeight_3lElDown = GetFR_3l(Lepton_pt->At(0), Lepton_eta->At(0), Lepton_pdgId->At(0), isTight_[0],
					   Lepton_pt->At(1), Lepton_eta->At(1), Lepton_pdgId->At(1), isTight_[1],
					   Lepton_pt->At(2), Lepton_eta->At(2), Lepton_pdgId->At(2), isTight_[2],
					   fake_rate_ele_25_, fake_rate_muon_35_, "Nominal");
      
      float fakeWeightEleDown = fakeWeight_3lElDown / fakeWeight_3l;
      
      return fakeWeightEleDown;
    }

    // Calculate the per-event fake rate - MuUp
    if (kind_ == "MuUp"){
      float fakeWeight_3lMuUp = GetFR_3l(Lepton_pt->At(0), Lepton_eta->At(0), Lepton_pdgId->At(0), isTight_[0],
					 Lepton_pt->At(1), Lepton_eta->At(1), Lepton_pdgId->At(1), isTight_[1],
					 Lepton_pt->At(2), Lepton_eta->At(2), Lepton_pdgId->At(2), isTight_[2],
					 fake_rate_ele_35_, fake_rate_muon_45_, "Nominal");
      
      float fakeWeightMuUp = fakeWeight_3lMuUp / fakeWeight_3l;
      
      return fakeWeightMuUp;
    }

    // Calculate the per-event fake rate - MuDown
    if (kind_ == "MuDown"){
      float fakeWeight_3lMuDown = GetFR_3l(Lepton_pt->At(0), Lepton_eta->At(0), Lepton_pdgId->At(0), isTight_[0],
					   Lepton_pt->At(1), Lepton_eta->At(1), Lepton_pdgId->At(1), isTight_[1],
					   Lepton_pt->At(2), Lepton_eta->At(2), Lepton_pdgId->At(2), isTight_[2],
					   fake_rate_ele_35_, fake_rate_muon_25_, "Nominal");
      
      float fakeWeightMuDown = fakeWeight_3lMuDown / fakeWeight_3l;
      
      return fakeWeightMuDown;
    }

    // Calculate the per-event fake rate - StatEleUp
    if (kind_ == "StatEleUp"){
      float fakeWeight_3lstatElUp = GetFR_3l(Lepton_pt->At(0), Lepton_eta->At(0), Lepton_pdgId->At(0), isTight_[0],
					     Lepton_pt->At(1), Lepton_eta->At(1), Lepton_pdgId->At(1), isTight_[1],
					     Lepton_pt->At(2), Lepton_eta->At(2), Lepton_pdgId->At(2), isTight_[2],
					     fake_rate_ele_35_, fake_rate_muon_35_, "ElUp");
      
      float fakeWeightstatEleUp = fakeWeight_3lstatElUp / fakeWeight_3l;
      
      return fakeWeightstatEleUp;
    }

    // Calculate the per-event fake rate - StatEleDown
    if (kind_ == "StatEleDown"){
      float fakeWeight_3lstatElDown = GetFR_3l(Lepton_pt->At(0), Lepton_eta->At(0), Lepton_pdgId->At(0), isTight_[0],
					       Lepton_pt->At(1), Lepton_eta->At(1), Lepton_pdgId->At(1), isTight_[1],
					       Lepton_pt->At(2), Lepton_eta->At(2), Lepton_pdgId->At(2), isTight_[2],
					       fake_rate_ele_35_, fake_rate_muon_35_, "ElDown");
      
      float fakeWeightstatEleDown = fakeWeight_3lstatElDown / fakeWeight_3l;
      
      return fakeWeightstatEleDown;
    }

    // Calculate the per-event fake rate - StatMuUp
    if (kind_ == "StatMuUp"){
      float fakeWeight_3lstatMuUp = GetFR_3l(Lepton_pt->At(0), Lepton_eta->At(0), Lepton_pdgId->At(0), isTight_[0],
					     Lepton_pt->At(1), Lepton_eta->At(1), Lepton_pdgId->At(1), isTight_[1],
					     Lepton_pt->At(2), Lepton_eta->At(2), Lepton_pdgId->At(2), isTight_[2],
					     fake_rate_ele_35_, fake_rate_muon_35_, "MuUp");
      
      float fakeWeightstatMuUp = fakeWeight_3lstatMuUp / fakeWeight_3l;
      
      return fakeWeightstatMuUp;
    }

    // Calculate the per-event fake rate - StatMuDown
    if (kind_ == "StatMuDown"){
      float fakeWeight_3lstatMuDown = GetFR_3l(Lepton_pt->At(0), Lepton_eta->At(0), Lepton_pdgId->At(0), isTight_[0],
					       Lepton_pt->At(1), Lepton_eta->At(1), Lepton_pdgId->At(1), isTight_[1],
					       Lepton_pt->At(2), Lepton_eta->At(2), Lepton_pdgId->At(2), isTight_[2],
					       fake_rate_ele_35_, fake_rate_muon_35_, "MuDown");
      
      float fakeWeightstatMuDown = fakeWeight_3lstatMuDown / fakeWeight_3l;
      
      return fakeWeightstatMuDown;
    }

    else
      return -1;
  }

  else
    return -1;
}


void
fake_rate_reader::bindTree_(multidraw::FunctionLibrary& _library)
{
  std::cout << "Loading fake_rate_reader" << std::endl;
  _library.bindBranch(Lepton_pdgId, "Lepton_pdgId");
  _library.bindBranch(Lepton_pt,    "Lepton_pt");
  _library.bindBranch(Lepton_eta,   "Lepton_eta");
  _library.bindBranch(Lepton_mvaTTH_UL, "Lepton_mvaTTH_UL");
  _library.bindBranch(Lepton_muonIdx,   "Lepton_muonIdx");
  _library.bindBranch(Muon_mvaTTH,      "Muon_mvaTTH");
  _library.bindBranch(nCleanJet,        "nCleanJet");
  _library.bindBranch(CleanJet_pt,      "CleanJet_pt");

  // Muon ID - variable name changes with year
  TString muonID = "Lepton_isTightMuon_cut_Tight_HWWW";
  if (year_ == "2016_HIPM" || year_ == "2016_noHIPM") muonID = "Lepton_isTightMuon_cut_Tight80x";
  _library.bindBranch(Lepton_isTightMuon_cut_Tight_HWWW, muonID);

  // Electron ID - we can choose between STD and SS
  TString eleID = "Lepton_isTightElectron_mvaFall17V2Iso_WP90";
  if (electron_tight_charge_ == "SS") eleID = "Lepton_isTightElectron_mvaFall17V2Iso_WP90_SS";
  _library.bindBranch(Lepton_isTightElectron_mvaFall17V2Iso_WP90_SS, eleID);
}
