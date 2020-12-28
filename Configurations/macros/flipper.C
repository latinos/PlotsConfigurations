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
static std::map<const std::string,TH2D> SFmap_;

class flipper : public multidraw::TTreeFunction {
public:
  flipper( const char* year , const unsigned int nLep , std::string SF_type );
  char const* getName() const override { return "flipper"; }
  TTreeFunction* clone() const override { return new flipper( year_ , nLeptons_ , SF_type_ ); }
  unsigned getNdata() override { return 1; }
  double evaluate(unsigned) override;

protected:
  const char* year_;
  unsigned int nLeptons_;
  std::string SF_type_;
  void bindTree_(multidraw::FunctionLibrary&) override;
  IntArrayReader* Lepton_pdgId;
  FloatArrayReader* Lepton_pt;
  FloatArrayReader* Lepton_eta;
  map_dict flipper_map_;

private:
  void loadSF2D( std::string filename );
  std::tuple<double,double> GetSF( double pt_in , double eta_in );
  
};

flipper::flipper( const char* year , const unsigned int nLep, std::string SF_type ) : TTreeFunction()
{
  year_ = year;
  nLeptons_ = nLep;
  SF_type_ = SF_type;
  std::string cmssw_base = std::getenv("CMSSW_BASE");

  // map
  flipper_map_["2016"]["HWW_ttHMVA"] = cmssw_base + "/src/LatinoAnalysis/NanoGardener/python/data/scale_factor/Full2016v6/chargeFlip_WHSS_nanov5_2016_SF.root";
  flipper_map_["2017"]["HWW_ttHMVA"] = cmssw_base + "/src/LatinoAnalysis/NanoGardener/python/data/scale_factor/Full2017v6/chargeFlip_WHSS_nanov5_2017_SF.root";
  flipper_map_["2018"]["HWW_ttHMVA"] = cmssw_base + "/src/LatinoAnalysis/NanoGardener/python/data/scale_factor/Full2018v6/chargeFlip_WHSS_nanov5_2018_SF.root";

  // load histogram
  loadSF2D( flipper_map_[year_]["HWW_ttHMVA"] );
}

void flipper::loadSF2D( std::string filename ){

  TFile f(filename.c_str());

  float eta_bins[] {0., 1.444, 2.5};
  float pt_bins[] {15., 20., 200.};
  TH2D h_sf = TH2D("","",2,eta_bins,2,pt_bins);
  TH2D h_sf_sys = TH2D("","",2,eta_bins,2,pt_bins);

  TH2D* tmp_sf  = (TH2D*)f.Get("sf");
  TH2D* tmp_sys = (TH2D*)f.Get("sf_sys");

  for(int i=1; i<=2;i++){
    for(int j=1; j<=2;j++){
      h_sf.SetBinContent(i, j, tmp_sf->GetBinContent(i, j));
      h_sf_sys.SetBinContent(i, j, tmp_sys->GetBinContent(i, j));
    }
  }

  SFmap_.insert(std::make_pair( "sf"       , h_sf       ));
  SFmap_.insert(std::make_pair( "sf_sys"   , h_sf_sys   ));

  f.Close();
}


std::tuple<double,double>
flipper::GetSF( double pt_in , double eta_in ){

  double eta_max = 2.49;
  double pt_max = 199.;
  double pt_min = 15.;
  
  if( eta_in > eta_max ){ eta_in = eta_max; }
  if( pt_in < pt_min   ){ pt_in = pt_min; }
  if( pt_in > pt_max   ){ pt_in = pt_max; }

  double sf     = SFmap_["sf"].GetBinContent( SFmap_["sf"].FindBin(eta_in , pt_in ) );
  double sf_sys = SFmap_["sf_sys"].GetBinContent( SFmap_["sf_sys"].FindBin(eta_in , pt_in ) );

  std::tuple<double,double> sfs = { sf , sf_sys };
  return sfs;
}


double
flipper::evaluate(unsigned)
{
  double SF=1.; double SF_err=0.;
  std::vector<double> SF_vect {};
  std::vector<double> SF_err_vect {};

  for ( unsigned int i = 0 ; i < nLeptons_ ; i++) {
    if(TMath::Abs(Lepton_pdgId->At(i)) == 11){
      std::tuple<double, double> res_ttHMVA = GetSF( Lepton_pt->At(i) , abs(Lepton_eta->At(i)) );
      SF_vect.push_back( std::get<0>(res_ttHMVA) );
      SF_err_vect.push_back( std::get<1>(res_ttHMVA) );
    }
  }
  for(auto x : SF_vect) SF *= x;
  
  // Variation
  // ??
  // Statistical error
  for ( unsigned int i = 0 ; i < SF_vect.size() ; i++) SF_err += TMath::Power( SF_err_vect[i] , 2 ) / SF_vect[i];

  if ( SF_type_.compare("Total_SF") == 0 ) { return SF; }
  else if ( SF_type_.compare("Total_SF_err") == 0 ) { return TMath::Sqrt( SF_err ); }
  else{ std::cout << "invalid option: please choose from [ Total_SF , Total_SF_err ]" << std::endl; return 0; }
}

void
flipper::bindTree_(multidraw::FunctionLibrary& _library)
{
  std::cout << "Loading flipper" << std::endl;
  _library.bindBranch(Lepton_pdgId, "Lepton_pdgId");
  _library.bindBranch(Lepton_pt, "Lepton_pt");
  _library.bindBranch(Lepton_eta, "Lepton_eta");
}
