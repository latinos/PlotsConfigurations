#include "LatinoAnalysis/MultiDraw/interface/TTreeFunction.h"
#include "LatinoAnalysis/MultiDraw/interface/FunctionLibrary.h"
#include <vector>
#include "Math/Vector4Dfwd.h"
#include "Math/GenVector/LorentzVector.h"
#include "Math/GenVector/PtEtaPhiM4D.h"
#include <iostream>
#include <TMath.h>
#include <TFile.h>
#include <TH2D.h>
#include <cstdlib>
#include <string>
#include <map>
#include <tuple>
#include <iterator>
#include <sstream>
#include <fstream>
#include <string.h>

// typedef std::map<std::string, std::map<std::string, std::map<std::string, std::map<std::string, std::list<std::string>>>>> nested_dict;
typedef std::map<std::string, std::map<std::string, std::string>> nested_dict;

class ttHMVASF : public multidraw::TTreeFunction {
  
public:
  ttHMVASF( const char* year, const int nLeptons, std::string requested_SF );
  const char* getName() const override { return "ttHMVASF"; }
  TTreeFunction* clone() const override { return new ttHMVASF(year_, nLeptons_, requested_SF_); }
  unsigned getNdata() override { return 1; }
  double evaluate(unsigned) override;
  
  protected:
  int nLeptons_;
  // const char* histo_name_ele_;
  // const char* histo_name_mu_;
  const char* year_;
  std::string requested_SF_;
  // int requested_lepton_;
  void bindTree_(multidraw::FunctionLibrary&) override;

  FloatArrayReader* lepton_pt;
  FloatArrayReader* lepton_eta;
  IntArrayReader*   lepton_pdgId;
  //  IntValueReader*   run_period_{};
  FloatArrayReader* reco_SF_;
  FloatArrayReader* reco_SF_up_;
  FloatArrayReader* reco_SF_do_;

  nested_dict SF_files_map_;

  TH2D h_SF_ele_;
  TH2D h_SF_ele_stat_;
  TH2D h_SF_ele_syst_;
  TH2D h_SF_mu_;
  TH2D h_SF_mu_stat_;
  TH2D h_SF_mu_syst_;


private:
  std::tuple<double, double, double> GetSF(int flavor, double eta, double pt); // , int run_period=0, std::string type = "");
  
};

// commented constructor is in case we want the freedom to chose working points
// ttHMVASF::ttHMVASF(const char* working_point, const char* year, const int nLeptons, std::string requested_SF, const int requested_lepton) : TTreeFunction() {
ttHMVASF::ttHMVASF( const char* year, const int nLeptons, std::string requested_SF ) : TTreeFunction() {

  nLeptons_ = nLeptons;
  year_ = year;
  requested_SF_ = requested_SF;
  // requested_lepton_ = requested_lepton;
  std::string cmssw_base = std::getenv("CMSSW_BASE");


  // Build map of SF files names
  nested_dict SF_files_map;

  // Electron 
  SF_files_map["electron"]["2016HIPM"] = {
	cmssw_base + "/src/PlotsConfigurations/Configurations/WH_chargeAsymmetry/UL/data/electron_ttHMVA_UL_SF/2016HIPM/egammaEffi.txt"
  };
  SF_files_map["electron"]["2016noHIPM"] = {
	cmssw_base + "/src/PlotsConfigurations/Configurations/WH_chargeAsymmetry/UL/data/electron_ttHMVA_UL_SF/2016HIPM/egammaEffi.txt"
  };
  SF_files_map["electron"]["2017"] = {
	cmssw_base + "/src/PlotsConfigurations/Configurations/WH_chargeAsymmetry/UL/data/electron_ttHMVA_UL_SF/2017/egammaEffi.txt"
  };
  SF_files_map["electron"]["2018"] = {
	cmssw_base + "/src/PlotsConfigurations/Configurations/WH_chargeAsymmetry/UL/data/electron_ttHMVA_UL_SF/2018/egammaEffi.txt"
  };

  // Muon
  SF_files_map["muon"]["2016HIPM"] = {
	cmssw_base + "/src/PlotsConfigurations/Configurations/WH_chargeAsymmetry/UL/data/muon_ttHMVA_SF/2016HIPM/NUM_TightIDIso_tthmva_DEN_TightIDIso_eta_pt.root"
  };
  SF_files_map["muon"]["2016noHIPM"] = {
	cmssw_base + "/src/PlotsConfigurations/Configurations/WH_chargeAsymmetry/UL/data/muon_ttHMVA_SF/2016noHIPM/NUM_TightIDIso_tthmva_DEN_TightIDIso_eta_pt.root"
  };
  SF_files_map["muon"]["2017"] = {
	cmssw_base + "/src/PlotsConfigurations/Configurations/WH_chargeAsymmetry/UL/data/muon_ttHMVA_SF/2017/NUM_TightIDIso_tthmva_DEN_TightIDIso_eta_pt.root"
  };
  SF_files_map["muon"]["2018"] = {
	cmssw_base + "/src/PlotsConfigurations/Configurations/WH_chargeAsymmetry/UL/data/muon_ttHMVA_SF/2018/NUM_TightIDIso_tthmva_DEN_TightIDIso_eta_pt.root"
  };


  SF_files_map_ = SF_files_map;

  int ele_nbins_eta = 10;
  int ele_nbins_pt  = 6;

  float ele_eta_bins[] {-2.5, -2., -1.566, -1.442,  -0.8, 0., 0.8, 1.442, 1.566, 2.0, 2.5};
  float ele_pt_bins[] {10., 15., 20., 35., 50., 90., 150., 500.};


  //////////////////////////////
  // Load electron SFs in memory
  //////////////////////////////

  // , in order of run period
  // std::vector<TH2D> h_SF_ele {};
  // std::vector<TH2D> h_SF_ele_stat {};
  // std::vector<TH2D> h_SF_ele_syst {};

  // Loop on run periods - why do we want to loop over run perdiod?
  // for( auto f : SF_files_map_["electron"][year_] ){
	
  TH2D h_SF_ele      = TH2D("", "", ele_nbins_eta, ele_eta_bins, ele_nbins_pt, ele_pt_bins);
  TH2D h_SF_ele_stat = TH2D("", "", ele_nbins_eta, ele_eta_bins, ele_nbins_pt, ele_pt_bins);
  TH2D h_SF_ele_syst = TH2D("", "", ele_nbins_eta, ele_eta_bins, ele_nbins_pt, ele_pt_bins);
	
  for(int iBinX = 1; iBinX <= h_SF_ele.GetNbinsX(); iBinX++){
	for(int iBinY = 1; iBinY <= h_SF_ele.GetNbinsY(); iBinY++){

	  double eta = h_SF_ele.GetXaxis() -> GetBinCenter(iBinX);
	  double pt  = h_SF_ele.GetYaxis() -> GetBinCenter(iBinY);
		
	  // Filling TH2D objects by reading txt input files
	  cout << "SF files map = " << SF_files_map_["electron"][year_] << endl;
	  if (SF_files_map_["electron"][year_].find(".txt") != std::string::npos){

		cout << "input file is txt" << endl;

		// Parsing the .txt file
		std::string line;
		std::istringstream strm;
		double num;
		std::ifstream ifs(SF_files_map_["electron"][year_]);
        
		double lines[71][15];
		
		int i = 0;
		int j = 0;
		while(getline(ifs, line)){
		  j = 0;
		  std::istringstream strm(line);
		  while(strm >> num){
			lines[i][j] = num;
			j++;
		  }
		  i++;
		}
		
		// txt columns structure:
		// 0:  eta Low  
		// 1:  eta High  
		// 2:  pt Low  
		// 3:  pt High 
		// 4:  effData 
		// 5:  statErrData 
		// 6:  systErrData 
		// 7:  effMC 
		// 8:  statErrMC 
		// 9:  systErrMC 
		// 10: effDataAltBkg 
		// 11: effDataAltSig 
		// 12: effMCAltMC 
		// 13: effMCTagSel

		// Looking for correct eta, pt bin
		for(unsigned i = 3; i < 73; i++){
		  
		  cout << lines[i][0] << endl;

		  if(eta >= lines[i][0] && eta <= lines[i][1] && pt >= lines[i][2] && pt <= lines[i][3]){
			
			// efficiencies
			double data = lines[i][4];
			double mc   = lines[i][7];
			double sf   = 1;
			if (mc != 0) sf = data/mc;
			
			// statistical uncertainty on efficiencies
			double sigma_data = lines[i][5];
			double sigma_mc   = lines[i][7];
			double sigma_sf   = 0.0;
			if (mc != 0) sigma_sf = TMath::Sqrt( TMath::Power(sigma_data/mc, 2) + TMath::Power(data*sigma_mc/(mc*mc), 2));
												 
			// systematic uncertainty on efficiencies
			double syst_data = lines[i][6];
			double syst_mc   = lines[i][9];
			double syst_sf   = 0.0;
			if (mc != 0) syst_sf = TMath::Sqrt( TMath::Power(syst_data/mc, 2) + TMath::Power(data*syst_mc/(mc*mc), 2));
			// TMath::Sqrt( TMath::Power(lines[i][8], 2) + TMath::Power(lines[i][9], 2) + TMath::Power(lines[i][10], 2) + TMath::Power(lines[i][11], 2) ) / mc;
			
			h_SF_ele     .SetBinContent(iBinX, iBinY, sf);
			h_SF_ele_stat.SetBinContent(iBinX, iBinY, sigma_sf);
			h_SF_ele_syst.SetBinContent(iBinX, iBinY, syst_sf);
			
			break;
			
		  }
		}
	  }
	  else{
		// Not needed for now as all electron SF files are .txt
		continue;
	  }
	}
  }

  cout << "Done with electrons" << endl;
  
  h_SF_ele_      = h_SF_ele;
  h_SF_ele_stat_ = h_SF_ele_stat;
  h_SF_ele_syst_ = h_SF_ele_syst;

  // h_SF_ele.push_back(h_SF);
  // h_SF_ele_stat.push_back(h_SF_stat);
  // h_SF_ele_syst.push_back(h_SF_syst);
  

  //////////////////////////
  // Load muon SFs in memory
  //////////////////////////

  // std::vector<TH2D> h_SF_mu_ttHMVA {};
  // std::vector<TH2D> h_SF_mu_ttHMVA_stat {};
  // std::vector<TH2D> h_SF_mu_ttHMVA_syst {};

  // Loop on run periods - why do we want to loop over the run period?
  // for( auto f : SF_files_map_["muon"][working_point_][year_]["ttHMVA"]){
        
  cout << "Muons rootfile: " << SF_files_map_["muon"][year_] << endl;

  TFile rootfile(SF_files_map_["muon"][year_].c_str());
  
  cout << "Loaded!" << endl;

  // Nominal SF histogram - temp are needed to properly handle BinContent and BinError (maybe) 
  TH2D* htemp      = (TH2D*)rootfile.Get("NUM_TightIDIso_tthmva_DEN_TightIDIso_eta_pt");
  TH2D* htemp_stat = (TH2D*)rootfile.Get("NUM_TightIDIso_tthmva_DEN_TightIDIso_eta_pt_stat");
  TH2D* htemp_syst = (TH2D*)rootfile.Get("NUM_TightIDIso_tthmva_DEN_TightIDIso_eta_pt_syst");

  int mu_nbins_eta = htemp->GetNbinsX(); 
  int mu_nbins_pt  = htemp->GetNbinsY();
  double mu_eta_bins[mu_nbins_eta + 1]; 
  double mu_pt_bins[mu_nbins_pt + 1];

  for(int k = 0; k <= mu_nbins_eta; k++) { 
	mu_eta_bins[k] = htemp->GetXaxis()->GetXbins()->At(k); 
  }
  for(int k = 0; k<= mu_nbins_pt; k++) { 
	mu_pt_bins[k] = htemp->GetYaxis()->GetXbins()->At(k); 
  }
  
  TH2D h_SF_mu      = TH2D("", "", mu_nbins_eta, mu_eta_bins, mu_nbins_pt, mu_pt_bins);
  TH2D h_SF_mu_stat = TH2D("", "", mu_nbins_eta, mu_eta_bins, mu_nbins_pt, mu_pt_bins);
  TH2D h_SF_mu_syst = TH2D("", "", mu_nbins_eta, mu_eta_bins, mu_nbins_pt, mu_pt_bins);

  for(int i = 1; i <= mu_nbins_eta; i++){
	for(int j = 1; j <= mu_nbins_pt; j++){
	  h_SF_mu     .SetBinContent(i, j, htemp      -> GetBinContent(i, j));
	  h_SF_mu_stat.SetBinContent(i, j, htemp_stat -> GetBinError  (i, j));
	  h_SF_mu_syst.SetBinContent(i, j, htemp_syst -> GetBinError  (i, j));
	}
  }

  cout << "Done with muons" << endl;

  h_SF_mu_      = h_SF_mu;
  h_SF_mu_stat_ = h_SF_mu_stat;
  h_SF_mu_syst_ = h_SF_mu_syst;

  cout << "Muon SF test: " << h_SF_mu_.GetBinContent(1,1) << endl;
  cout << "Ele  SF test: " << h_SF_ele_.GetBinContent(1,1) << endl;
  
  cout << "Done with loading SFs" << endl;
}

void ttHMVASF::bindTree_(multidraw::FunctionLibrary& _library){

  _library.bindBranch(lepton_pt,    "Lepton_pt");
  _library.bindBranch(lepton_eta,   "Lepton_eta");
  _library.bindBranch(lepton_pdgId, "Lepton_pdgId");
  //  _library.bindBranch(run_period_,  "run_period");
  _library.bindBranch(reco_SF_,     "Lepton_RecoSF");
  _library.bindBranch(reco_SF_up_,  "Lepton_RecoSF_Up");
  _library.bindBranch(reco_SF_do_,  "Lepton_RecoSF_Down");

}

double ttHMVASF::evaluate(unsigned){

  cout << "Starting actual SF application" << endl;

  std::vector<double> SF_vect {};
  std::vector<double> SF_err_vect {};
  std::vector<double> SF_up {};
  std::vector<double> SF_do {};

  // Loop over leptons
  for (int i = 0; i < nLeptons_; i++){

	cout << "Lepton " << i << ":" << endl;
	cout << "    pT    = " << lepton_pt->At(0)    << endl;
	cout << "    era   = " << lepton_eta->At(0)   << endl;
	cout << "    pdgId = " << lepton_pdgId->At(0) << endl;

	// Get electron SF and uncertainty
	if(TMath::Abs(lepton_pdgId->At(i)) == 11){

	  // std::list<std::string> SF_path = SF_files_map_["electron"][year_];
	  std::string SF_path = SF_files_map_["electron"][year_];

	  std::tuple<double, double, double> res = GetSF(11, lepton_eta->At(i), lepton_pt->At(i)); // , SF_path.size()==1 ? 0 : *run_period_->Get() - 1);

	  cout << "Nominal SF value --> " << std::get<0>(res) << endl;

	  SF_vect.push_back(std::get<0>(res));
	  
	  SF_err_vect.push_back(TMath::Sqrt(TMath::Power(std::get<1>(res), 2) + TMath::Power(std::get<2>(res), 2)));

	}

	// Get muon SF and uncertainty
	else if(TMath::Abs(lepton_pdgId->At(i)) == 13){

	  // std::list<std::string> SF_path = SF_files_map_["muon"][year_];
	  std::string SF_path = SF_files_map_["muon"][year_];
            
	  std::tuple<double, double, double> res = GetSF(13, lepton_eta->At(i), lepton_pt->At(i)); // , SF_path.size()==1 ? 0 : *run_period_->Get() - 1, "ttHMVA");

	  cout << "Nominal SF value --> " << std::get<0>(res) << endl;

	  double SF_ttHMVA = std::get<0>(res);

	  // SF_vect.push_back(SF_id * SF_iso * SF_ttHMVA);
	  // SF_vect.push_back(SF_ttHMVA);
	  // SF_err_vect.push_back((SF_id * SF_iso) * TMath::Sqrt( TMath::Power(std::get<1>(res_id)/SF_id, 2) + TMath::Power(std::get<1>(res_iso)/SF_iso, 2) )); // Old formula for debugging
	  // SF_err_vect.push_back((SF_id * SF_iso * SF_ttHMVA) * TMath::Sqrt( TMath::Power(std::get<1>(res_id)/SF_id, 2)
	  // 																	+ TMath::Power(std::get<1>(res_iso)/SF_iso, 2)
	  // 																	+ (TMath::Power(std::get<1>(res_ttHMVA), 2) + TMath::Power(std::get<2>(res_ttHMVA), 2))/SF_ttHMVA/SF_ttHMVA )

	  SF_vect.push_back(std::get<0>(res));
	  SF_err_vect.push_back((SF_ttHMVA) * TMath::Sqrt( (TMath::Power(std::get<1>(res), 2) + TMath::Power(std::get<2>(res), 2))/SF_ttHMVA/SF_ttHMVA ) );
	}
  }

  double SF     = 1.;
  double SF_err = 0.;

  // Calculate product of SFs for all leptons in the event --> central value of SF to be returned
  for (auto x : SF_vect) 
	SF *= x;

  // Now for the variations, these also have to account for the recoSF --> why? I guess not in our case
  for(int i = 0; i < nLeptons_; i++){

	SF_up.push_back( ((SF_vect[i] * reco_SF_->At(i)) + TMath::Sqrt(TMath::Power(SF_err_vect[i], 2) + TMath::Power(reco_SF_up_->At(i) - reco_SF_->At(i), 2) ))/(SF_vect[i] * reco_SF_->At(i)) );
	SF_do.push_back( ((SF_vect[i] * reco_SF_->At(i)) - TMath::Sqrt(TMath::Power(SF_err_vect[i], 2) + TMath::Power(reco_SF_do_->At(i) - reco_SF_->At(i), 2) ))/(SF_vect[i] * reco_SF_->At(i)) );

  }

  // Now build the up and down variation SFs
  double SF_up_out   = 1.;
  double SF_down_out = 1.;

  for(int i = 0; i < nLeptons_; i++){
	SF_up_out   *= SF_up[i] / SF_vect[i];
	SF_down_out *= SF_do[i] / SF_vect[i];
  }

  if(requested_SF_.compare("nominal") == 0) { 
  	return SF; 
  }
  else if(requested_SF_.compare("up") == 0) { 
  	return SF_up_out; 
  }
  else if(requested_SF_.compare("down") == 0) { 
  	return SF_down_out; 
  }
  else{ 
  	std::cout << "invalid option: please choose from [nominal, up, down]" << std::endl; 
  	return 0; 
  }

  // // What is this?????
  // if(requested_SF_.compare("total_SF") == 0) { 
  // 	return SF; 
  // }
  // else if(requested_SF_.compare("single_SF_up") == 0) { 
  // 	return requested_lepton_ < SF_vect.size() ? SF_up[requested_lepton_] : 0.; 
  // }
  // else if(requested_SF_.compare("single_SF_down") == 0) { 
  // 	return requested_lepton_<SF_vect.size() ? SF_do[requested_lepton_] : 0.; 
  // }
  // else if(requested_SF_.compare("single_SF") == 0) { 
  // 	return requested_lepton_<SF_vect.size() ? SF_vect[requested_lepton_] : 0.; 
  // }
  // else{ 
  // 	std::cout << "invalid option: please choose from [total_SF, single_SF, single_SF_up, single_SF_down]" << std::endl; 
  // 	return 0; 
  // }

}

// std::tuple<double, double, double> ttHMVASF::GetSF(int flavor, double eta, double pt, int run_period, std::string type){
std::tuple<double, double, double> ttHMVASF::GetSF(int flavor, double eta, double pt){

  double eta_temp = eta;
  double pt_temp  = pt;

  double SF, SF_stat, SF_syst;

  // Case electron
  if (flavor == 11){

	double eta_max = 2.49;
	double eta_min = -2.5;
	double pt_max  = 499.;
	double pt_min  = 10.;

	if(eta_temp < eta_min) {eta_temp = eta_min;}
	if(eta_temp > eta_max) {eta_temp = eta_max;}
	if(pt_temp < pt_min)   {pt_temp  = pt_min;}
	if(pt_temp > pt_max)   {pt_temp  = pt_max;}

	SF      = h_SF_ele_     .GetBinContent(h_SF_ele_     .FindBin(eta_temp, pt_temp));
	SF_stat = h_SF_ele_stat_.GetBinContent(h_SF_ele_stat_.FindBin(eta_temp, pt_temp));
	SF_syst = h_SF_ele_syst_.GetBinContent(h_SF_ele_syst_.FindBin(eta_temp, pt_temp));

	// SF      = h_SF_ele_[run_period].GetBinContent(h_SF_ele_[run_period].FindBin(eta_temp, pt_temp));
	// SF_stat = h_SF_ele_stat_[run_period].GetBinContent(h_SF_ele_stat_[run_period].FindBin(eta_temp, pt_temp));
	// SF_syst = h_SF_ele_syst_[run_period].GetBinContent(h_SF_ele_syst_[run_period].FindBin(eta_temp, pt_temp));

  }

  // Case muon
  else if (flavor == 13){

	double eta_max = 2.39;
	double eta_min = -2.4;
	double pt_max = 199.;
	double pt_min = 10.;

	if(eta_temp < eta_min) {eta_temp = eta_min;}
	if(eta_temp > eta_max) {eta_temp = eta_max;}
	if(pt_temp < pt_min)   {pt_temp  = pt_min;}
	if(pt_temp > pt_max)   {pt_temp  = pt_max;}

	SF      = h_SF_mu_     .GetBinContent(h_SF_mu_     .FindBin(eta_temp, pt_temp));
	SF_stat = h_SF_mu_stat_.GetBinContent(h_SF_mu_stat_.FindBin(eta_temp, pt_temp));
	SF_syst = h_SF_mu_syst_.GetBinContent(h_SF_mu_syst_.FindBin(eta_temp, pt_temp));

	// SF      = h_SF_mu_ttHMVA_[run_period].GetBinContent(h_SF_mu_ttHMVA_[run_period].FindBin(eta_temp, pt_temp));
	// SF_stat = h_SF_mu_ttHMVA_stat_[run_period].GetBinContent(h_SF_mu_ttHMVA_stat_[run_period].FindBin(eta_temp, pt_temp));
	// SF_syst = h_SF_mu_ttHMVA_syst_[run_period].GetBinContent(h_SF_mu_ttHMVA_syst_[run_period].FindBin(eta_temp, pt_temp));
    
  }

  else {
	std::cout << "Invalid call to ttHMVASF::GetSF" << std::endl;
  }

  std::tuple<double, double, double> result = {SF, SF_stat, SF_syst};

  return result;

}
