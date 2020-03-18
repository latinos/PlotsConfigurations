#include "LatinoAnalysis/MultiDraw/interface/TTreeFunction.h"
#include "LatinoAnalysis/MultiDraw/interface/FunctionLibrary.h"
#include <vector>
#include "Math/Vector4Dfwd.h"
#include "Math/GenVector/LorentzVector.h"
#include "Math/GenVector/PtEtaPhiM4D.h"
#include <iostream>
#include <TMath.h>
#include <TFile.h>
#include <TH2F.h>
#include <cstdlib>
#include <string>
#include <map>
#include <tuple>
#include <iterator>
#include <sstream>
#include <fstream>
#include <string.h>
#include <numeric>

typedef std::map<std::string, std::map<std::string, std::map<std::string, std::map<std::string, std::list<std::string>>>>> nested_dict;

class compute_SF : public multidraw::TTreeFunction {

    public:
        // compute_SF(const char* working_point, const char* year, const int nLeptons, std::string requested_SF, const int requested_lepton=0);
        compute_SF(const char* year, const int nLeptons, std::string requested_SF, const int requested_lepton=0);
        const char* getName() const override { return "compute_SF"; }
        // TTreeFunction* clone() const override { return new compute_SF(working_point_, year_, nLeptons_, requested_SF_); }
        TTreeFunction* clone() const override { return new compute_SF(year_, nLeptons_, requested_SF_, requested_lepton_); }
        unsigned getNdata() override { return 1; }
        double evaluate(unsigned) override;

    
    protected:
        int nLeptons_;
        const char* working_point_;
        const char* histo_name_ele_;
        const char* histo_name_mu_;
        const char* year_;
        std::string requested_SF_;
        int requested_lepton_;
        void bindTree_(multidraw::FunctionLibrary&) override;
        FloatArrayReader* lepton_pt{};
        FloatArrayReader* lepton_eta{};
        IntArrayReader* lepton_pdgId{};
        IntValueReader* run_period_{};
        nested_dict SF_files_map_;


    private:
        std::tuple<double, double, double> GetSF(std::string path, double eta, double pt, std::string name="");
        
};

// commented constructor is in case we want the freedom to chose working points
// compute_SF::compute_SF(const char* working_point, const char* year, const int nLeptons, std::string requested_SF, const int requested_lepton) : TTreeFunction() {
compute_SF::compute_SF(const char* year, const int nLeptons, std::string requested_SF, const int requested_lepton) : TTreeFunction() {

    nLeptons_ = nLeptons;
    working_point_ = "TightObjWP";
    year_ = year;
    requested_SF_ = requested_SF;
    requested_lepton_ = requested_lepton;
    std::string cmssw_base = std::getenv("CMSSW_BASE");

    //Build map of SF files

    nested_dict SF_files_map;

    SF_files_map["electron"]["TightObjWP"]["2016"]["wpSF"] = {cmssw_base+"/src/LatinoAnalysis/NanoGardener/python/data/scale_factor/Full2016v2/egammaEffi_passingTight80XHWW.txt"};
    SF_files_map["muon"]["TightObjWP"]["2016"]["idSF"] = {cmssw_base+"/src/LatinoAnalysis/NanoGardener/python/data/scale_factor/Full2016v2/muonID_TH2_SFs_pt_eta.root"};
    SF_files_map["muon"]["TightObjWP"]["2016"]["isoSF"] = {cmssw_base+"/src/LatinoAnalysis/NanoGardener/python/data/scale_factor/Full2016v2/muonISO_TH2_SFs_pt_eta.root"};

    SF_files_map["electron"]["TightObjWP"]["2017"]["wpSF"] = {  cmssw_base+"/src/LatinoAnalysis/NanoGardener/python/data/scale_factor/Full2017v6/egammaEffi_passingMVA102Xwp90isoHWWiso0p06_2017runB.txt",
                                                                cmssw_base+"/src/LatinoAnalysis/NanoGardener/python/data/scale_factor/Full2017v6/egammaEffi_passingMVA102Xwp90isoHWWiso0p06_2017runC.txt",
                                                                cmssw_base+"/src/LatinoAnalysis/NanoGardener/python/data/scale_factor/Full2017v6/egammaEffi_passingMVA102Xwp90isoHWWiso0p06_2017runD.txt",
                                                                cmssw_base+"/src/LatinoAnalysis/NanoGardener/python/data/scale_factor/Full2017v6/egammaEffi_passingMVA102Xwp90isoHWWiso0p06_2017runE.txt",
                                                                cmssw_base+"/src/LatinoAnalysis/NanoGardener/python/data/scale_factor/Full2017v6/egammaEffi_passingMVA102Xwp90isoHWWiso0p06_2017runF.txt"
                                                            };
    SF_files_map["muon"]["TightObjWP"]["2017"]["idSF"] = {cmssw_base+"/src/LatinoAnalysis/NanoGardener/python/data/scale_factor/Full2017/muonID_cut_Tight_HWW_combined.root"};
    SF_files_map["muon"]["TightObjWP"]["2017"]["isoSF"] = {cmssw_base+"/src/LatinoAnalysis/NanoGardener/python/data/scale_factor/Full2017/muonISO_cut_Tight_HWW_combined.root"};

    SF_files_map["electron"]["TightObjWP"]["2018"]["wpSF"] = {cmssw_base+"/src/LatinoAnalysis/NanoGardener/python/data/scale_factor/Full2018v6/egammaEffi_passingTight102XHWW_runABCD.txt"};
    SF_files_map["muon"]["TightObjWP"]["2018"]["idSF"] = {cmssw_base+"/src/LatinoAnalysis/NanoGardener/python/data/scale_factor/Full2018/ID_TH2_SFs_pt_eta.root"};
    SF_files_map["muon"]["TightObjWP"]["2018"]["isoSF"] = {cmssw_base+"/src/LatinoAnalysis/NanoGardener/python/data/scale_factor/Full2018/ISO_TH2_SFs_pt_eta.root"};

    SF_files_map_ = SF_files_map;

}

void compute_SF::bindTree_(multidraw::FunctionLibrary& _library){

    _library.bindBranch(lepton_pt, "Lepton_pt");
    _library.bindBranch(lepton_eta, "Lepton_eta");
    _library.bindBranch(lepton_pdgId, "Lepton_pdgId");
    _library.bindBranch(run_period_, "run_period");

}

double compute_SF::evaluate(unsigned){

    std::vector<double> SF_vect = {};
    std::vector<double> SF_err_vect = {};

    for(unsigned i=0;i<nLeptons_;i++){

        if(TMath::Abs(lepton_pdgId->At(i)) == 11){

            std::list<std::string> SF_path = SF_files_map_["electron"][working_point_][year_]["wpSF"];

            std::tuple<double, double, double> res = GetSF(*std::next(SF_path.begin(), SF_path.size()==1 ? 0 : *run_period_->Get() - 1), lepton_eta->At(i), lepton_pt->At(i));

            SF_vect.push_back(std::get<0>(res));
            SF_err_vect.push_back(TMath::Sqrt(TMath::Power(std::get<1>(res), 2) + TMath::Power(std::get<2>(res), 2)));

        }

        else if(TMath::Abs(lepton_pdgId->At(i)) == 13){

            std::list<std::string> SF_path_id = SF_files_map_["muon"][working_point_][year_]["idSF"];
            std::list<std::string> SF_path_iso = SF_files_map_["muon"][working_point_][year_]["isoSF"];
            
            std::tuple<double, double, double> res_id = GetSF(*std::next(SF_path_id.begin(), 0), lepton_eta->At(i), lepton_pt->At(i), "Muon_idSF2D");
            std::tuple<double, double, double> res_iso = GetSF(*std::next(SF_path_iso.begin(), 0), lepton_eta->At(i), lepton_pt->At(i), "Muon_isoSF2D");

            double SF_id = std::get<0>(res_id);
            double SF_iso = std::get<0>(res_iso);

            SF_vect.push_back(SF_id * SF_iso);
            SF_err_vect.push_back((SF_id * SF_iso) * TMath::Sqrt( TMath::Power(std::get<1>(res_id)/SF_id, 2) + TMath::Power(std::get<1>(res_iso)/SF_iso, 2) ));   


        }

    }

    double SF = 1.;
    double SF_err = 0.;

    for(auto x : SF_vect) SF *= x;

    if(requested_SF_.compare("total_SF") == 0) { return SF; }
    else if(requested_SF_.compare("single_SF_up") == 0) { return requested_lepton_<SF_vect.size() ? SF_vect[requested_lepton_] + SF_err_vect[requested_lepton_] : 0.; }
    else if(requested_SF_.compare("single_SF_down") == 0) { return requested_lepton_<SF_vect.size() ? SF_vect[requested_lepton_] - SF_err_vect[requested_lepton_] : 0.; }
    else if(requested_SF_.compare("single_SF") == 0) { return requested_lepton_<SF_vect.size() ? SF_vect[requested_lepton_] : 0.; }
    else{ std::cout << "invalid option: please choose from [total_SF, single_SF, single_SF_up, single_SF_down]" << std::endl; return 0; }

}

std::tuple<double, double, double> compute_SF::GetSF(std::string path, double eta, double pt, std::string name){

    double eta_temp = eta;
    double pt_temp = pt;

    double SF = 1.;
    double SF_err = 1.;
    double SF_sys = 1.;

    //Check if path ends in .txt
    if(path.find(".txt") != std::string::npos){

        //Parsing the .txt file
        std::string line;
        std::istringstream strm;
        double num;
        std::ifstream ifs(path);
        
        double lines[60][12];

        int i=0;
        int j=0;
        while(getline(ifs, line)){
            j=0;
            std::istringstream strm(line);
            while(strm >> num){
                lines[i][j] = num;
                j++;
            }
            i++;
        }

        //Looking for correct eta, pt bin
        for(unsigned i=0;i<60;i++){

            if(eta>=lines[i][0] && eta<=lines[i][1] && pt>=lines[i][2] && pt<=lines[i][3]){

                double data = lines[i][4];
                double mc = lines[i][6];

                double sigma_d = lines[i][5];
                double sigma_m = lines[i][7];

                SF = data/mc;
                SF_err = TMath::Sqrt( TMath::Power(sigma_d/mc, 2) + TMath::Power(data/mc/mc*sigma_m, 2) );
                SF_sys = TMath::Sqrt( TMath::Power(lines[i][8], 2) + TMath::Power(lines[i][9], 2) + TMath::Power(lines[i][10], 2) + TMath::Power(lines[i][11], 2) ) / mc;

                break;

            }

        }
    }

    else{

        TFile rootfile(path.c_str());
        TH2F* hist = (TH2F*)rootfile.Get(name.c_str());

        double eta_max = hist->GetXaxis()->GetXmax();
        double eta_min = hist->GetXaxis()->GetXmin();

        double pt_max = hist->GetYaxis()->GetBinCenter(hist->GetNbinsY());
        double pt_min = hist->GetYaxis()->GetXmin();

        if(eta_temp < eta_min){eta_temp = eta_min;}
        if(eta_temp > eta_max){eta_temp = eta_max;}
        if(pt_temp < pt_min){pt_temp = pt_min;}
        if(pt_temp > pt_max){pt_temp = pt_max;}
        

        SF = hist->GetBinContent(hist->FindBin(eta_temp, pt_temp));
        SF_err = hist->GetBinError(hist->FindBin(eta_temp, pt_temp));

    }

    std::tuple<double, double, double> result = {SF, SF_err, SF_sys};

    return result;

}