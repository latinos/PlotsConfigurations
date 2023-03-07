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

typedef std::map<std::string,std::map<std::string,std::string>> map_dict;
static std::map<const std::string,TH2D> Effmap_;

class flipper_eff : public multidraw::TTreeFunction {
public:
  flipper_eff( const char* year , const unsigned int nLep , std::string SF_type, std::string isTightCharge );
  char const* getName() const override { return "flipper_eff"; }
  TTreeFunction* clone() const override { return new flipper_eff( year_ , nLeptons_ , SF_type_, isTightCharge_  ); }
  unsigned getNdata() override { return 1; }
  double evaluate(unsigned) override;

protected:
  const char* year_;
  unsigned int nLeptons_;
  std::string SF_type_;
  std::string isTightCharge_;
  void bindTree_(multidraw::FunctionLibrary&) override;
  IntArrayReader* Lepton_pdgId;
  FloatArrayReader* Lepton_pt;
  FloatArrayReader* Lepton_eta;
  map_dict flipper_map_;

private:
  void loadSF2D( std::string filename );
  std::tuple<double,double> GetSF( double pt_in , double eta_in );
  
};

flipper_eff::flipper_eff( const char* year , const unsigned int nLep, std::string SF_type, std::string isTightCharge = "false" ) : TTreeFunction()
{
  year_          = year;
  nLeptons_      = nLep;
  SF_type_       = SF_type;
  isTightCharge_ = isTightCharge;
  std::string cmssw_base = std::getenv("CMSSW_BASE");

  // map
  if (isTightCharge == "false"){
    flipper_map_["UL_2016HIPM"]["HWW_ttHMVA"]   = cmssw_base + "/src/PlotsConfigurations/Configurations/WH_chargeAsymmetry/UL/data/chargeflip/2016HIPM/chargeFlip_SF.root";
    flipper_map_["UL_2016noHIPM"]["HWW_ttHMVA"] = cmssw_base + "/src/PlotsConfigurations/Configurations/WH_chargeAsymmetry/UL/data/chargeflip/2016noHIPM/chargeFlip_SF.root";
    flipper_map_["UL_2017"]["HWW_ttHMVA"]       = cmssw_base + "/src/PlotsConfigurations/Configurations/WH_chargeAsymmetry/UL/data/chargeflip/2017/chargeFlip_SF.root";
    flipper_map_["UL_2018"]["HWW_ttHMVA"]       = cmssw_base + "/src/PlotsConfigurations/Configurations/WH_chargeAsymmetry/UL/data/chargeflip/2018/chargeFlip_SF.root";
  }
  else{
    flipper_map_["2016"]["HWW_ttHMVA"] = cmssw_base + "/src/LatinoAnalysis/NanoGardener/python/data/scale_factor/Full2016v7/chargeFlip_2016_v7_SF_tightCharge.root"; // file doesn't exist!
    flipper_map_["2017"]["HWW_ttHMVA"] = cmssw_base + "/src/LatinoAnalysis/NanoGardener/python/data/scale_factor/Full2017v7/chargeFlip_2017_v7_SF_tightCharge.root"; // file doesn't exist!
    flipper_map_["2018"]["HWW_ttHMVA"] = cmssw_base + "/src/LatinoAnalysis/NanoGardener/python/data/scale_factor/Full2018v7/chargeFlip_2018_v7_SF_tightCharge.root"; // file doesn't exist!
  }
  // load histogram
  loadSF2D( flipper_map_[year_]["HWW_ttHMVA"] );
}

void flipper_eff::loadSF2D( std::string filename ){

  TFile f(filename.c_str());

  float eta_bins[] {0., 1.444, 2.5};
  float pt_bins[]  {10., 20., 200.};
  TH2D h_sf     = TH2D("", "", 2, eta_bins, 2, pt_bins);
  TH2D h_sf_sys = TH2D("", "", 2, eta_bins, 2, pt_bins);

  // // Montecarlo eff
  // TH2D* tmp_sf  = (TH2D*)f.Get("mc");
  // TH2D* tmp_sys = (TH2D*)f.Get("mc_sys");

  // Data eff
  TH2D* tmp_sf  = (TH2D*)f.Get("data");
  TH2D* tmp_sys = (TH2D*)f.Get("data_sys");

  for(int i=1; i<=2; i++){
    for(int j=1; j<=2; j++){
      h_sf.SetBinContent(    i, j, tmp_sf  -> GetBinContent(i, j));
      h_sf_sys.SetBinContent(i, j, tmp_sys -> GetBinContent(i, j));
    }
  }

  // // Montecarlo eff
  // Effmap_.insert(std::make_pair( "mc"       , h_sf       ));
  // Effmap_.insert(std::make_pair( "mc_sys"   , h_sf_sys   ));

  // Data eff
  Effmap_.insert(std::make_pair( "data"       , h_sf       ));
  Effmap_.insert(std::make_pair( "data_sys"   , h_sf_sys   ));

  f.Close();
}


std::tuple<double,double>
flipper_eff::GetSF( double pt_in , double eta_in ){

  double eta_max = 2.49;
  double pt_max = 199.;
  double pt_min = 10.;
  
  if( eta_in > eta_max ){ eta_in = eta_max; }
  if( pt_in < pt_min   ){ pt_in = pt_min; }
  if( pt_in > pt_max   ){ pt_in = pt_max; }

  // // Montecarlo eff
  // double sf     = Effmap_["mc"].GetBinContent( Effmap_["mc"].FindBin(eta_in , pt_in ) );
  // double sf_sys = Effmap_["mc_sys"].GetBinContent( Effmap_["mc_sys"].FindBin(eta_in , pt_in ) );

  // Data eff
  double sf     = Effmap_["data"].GetBinContent(    Effmap_["data"].FindBin(eta_in, pt_in));
  double sf_sys = Effmap_["data_sys"].GetBinContent(Effmap_["data_sys"].FindBin(eta_in, pt_in));

  std::tuple<double,double> sfs = {sf, sf_sys};
  return sfs;
}


double
flipper_eff::evaluate(unsigned)
{
  double SF=1.; double SF_err=0.;
  std::vector<double> SF_vect {};
  std::vector<double> SF_err_vect {};

  for (unsigned int i = 0; i < nLeptons_; i++) {
    if(TMath::Abs(Lepton_pdgId->At(i)) == 11){
      std::tuple<double, double> res_ttHMVA = GetSF(Lepton_pt->At(i), abs(Lepton_eta->At(i)));
      SF_vect.push_back(std::get<0>(res_ttHMVA));
      SF_err_vect.push_back(std::get<1>(res_ttHMVA));
    }
  }

  // We want efficiencies, not SFs --> Use formula:
  // P_tot = P1(1 - P2) + (1-P1)P2
  if (SF_vect.size() == 1) 
    {
      SF = SF_vect[0];
    }
  else if (SF_vect.size() == 2)
    {
      SF = SF_vect[0]*(1 - SF_vect[1]) + (1 - SF_vect[0])*SF_vect[1];
    }
  else {} // do nothing 

  // for(auto x : SF_vect) SF *= x;

  // Variation
  // ??
  // Statistical error
  // for ( unsigned int i = 0 ; i < SF_vect.size() ; i++) 
  // SF_err += TMath::Power( SF_err_vect[i] , 2 ) / SF_vect[i];

  // Check if error propagation is correct
  if (SF_err_vect.size() == 1) 
    {
      SF_err = SF_err_vect[0]*SF_err_vect[0];
    }
  else if (SF_err_vect.size() == 2)
    {
      SF_err = TMath::Power((1-2*SF_vect[1])*SF_err_vect[0], 2) + TMath::Power((1-2*SF_vect[0])*SF_err_vect[1], 2);
    }
  else {} // do nothing

  if ( SF_type_.compare("Total_SF") == 0 ) { return SF; }
  else if ( SF_type_.compare("Total_SF_err") == 0 ) { return TMath::Sqrt( SF_err ); }
  else{ std::cout << "invalid option: please choose from [ Total_SF , Total_SF_err ]" << std::endl; return 0; }
}

void
flipper_eff::bindTree_(multidraw::FunctionLibrary& _library)
{
  std::cout << "Loading flipper_eff" << std::endl;
  _library.bindBranch(Lepton_pdgId, "Lepton_pdgId");
  _library.bindBranch(Lepton_pt,    "Lepton_pt");
  _library.bindBranch(Lepton_eta,   "Lepton_eta");
}
