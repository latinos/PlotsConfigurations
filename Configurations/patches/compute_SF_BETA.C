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

typedef std::map<std::string, std::map<std::string, std::map<std::string, std::map<std::string, std::list<std::string>>>>> nested_dict;

class compute_SF : public multidraw::TTreeFunction {

    // Commented functions include additional argument for the choice of working poin at run time, hardcoded for now
    public:
        // compute_SF(const char* working_point, const char* year, const int nLeptons, std::string requested_SF, const int requested_lepton=0);
        compute_SF(const char* year, const unsigned int nLeptons, std::string requested_SF, const unsigned int requested_lepton=0);
        const char* getName() const override { return "compute_SF"; }
        // TTreeFunction* clone() const override { return new compute_SF(working_point_, year_, nLeptons_, requested_SF_); }
        TTreeFunction* clone() const override { return new compute_SF(year_, nLeptons_, requested_SF_, requested_lepton_); }
        unsigned getNdata() override { return 1; }
        double evaluate(unsigned) override;

    
    protected:
        unsigned int nLeptons_;
        const char* working_point_;
        const char* histo_name_ele_;
        const char* histo_name_mu_;
        const char* year_;
        std::string requested_SF_;
        unsigned int requested_lepton_;
        void bindTree_(multidraw::FunctionLibrary&) override;
        FloatArrayReader* lepton_pt{};
        FloatArrayReader* lepton_eta{};
        IntArrayReader* lepton_pdgId{};
        IntValueReader* run_period_{};
        FloatArrayReader* reco_SF_{};
        FloatArrayReader* reco_SF_up_{};
        FloatArrayReader* reco_SF_do_{};
        nested_dict SF_files_map_;
        std::vector<TH2D> h_SF_ele_;
        std::vector<TH2D> h_SF_ele_err_;
        std::vector<TH2D> h_SF_ele_sys_;
        std::vector<TH2D> h_SF_ele_ttHMVA_;
        std::vector<TH2D> h_SF_ele_ttHMVA_err_;
        std::vector<TH2D> h_SF_ele_ttHMVA_sys_;
        std::vector<TH2D> h_SF_mu_Id_;
        std::vector<TH2D> h_SF_mu_Id_err_;
        std::vector<TH2D> h_SF_mu_Id_sys_;
        std::vector<TH2D> h_SF_mu_Iso_;
        std::vector<TH2D> h_SF_mu_Iso_err_;
        std::vector<TH2D> h_SF_mu_Iso_sys_;
        std::vector<TH2D> h_SF_mu_ttHMVA_;
        std::vector<TH2D> h_SF_mu_ttHMVA_err_;
        std::vector<TH2D> h_SF_mu_ttHMVA_sys_;


    private:
        std::tuple<double, double, double> GetSF(int flavor, double eta, double pt, int run_period=0, std::string type = "");
        
};

// commented constructor is in case we want the freedom to chose working points
// compute_SF::compute_SF(const char* working_point, const char* year, const int nLeptons, std::string requested_SF, const int requested_lepton) : TTreeFunction() {
compute_SF::compute_SF(const char* year, const unsigned int nLeptons, std::string requested_SF, const unsigned int requested_lepton) : TTreeFunction() {

    nLeptons_ = nLeptons;
    working_point_ = "TightObjWP";  // WP is hardcoded for now, thinking of passing it at run time for more flexibility
    year_ = year;
    requested_SF_ = requested_SF;
    requested_lepton_ = requested_lepton;
    std::string cmssw_base = std::getenv("CMSSW_BASE");

    //Build map of SF files

    nested_dict SF_files_map;

    SF_files_map["electron"]["TightObjWP"]["2016"]["wpSF"] = {cmssw_base+"/src/LatinoAnalysis/NanoGardener/python/data/scale_factor/Full2016v2/egammaEffi_passingTight80XHWW.txt"};
    SF_files_map["electron"]["TightObjWP"]["2016"]["ttHMVA"] = {cmssw_base+"/src/LatinoAnalysis/NanoGardener/python/data/scale_factor/Full2016v6/egammaEffi_TightHWW_ttHMVA_0p7_SFs_2016.txt"};
    SF_files_map["muon"]["TightObjWP"]["2016"]["idSF"] = {cmssw_base+"/src/LatinoAnalysis/NanoGardener/python/data/scale_factor/Full2016v2/muonID_TH2_SFs_pt_eta.root"};
    SF_files_map["muon"]["TightObjWP"]["2016"]["isoSF"] = {cmssw_base+"/src/LatinoAnalysis/NanoGardener/python/data/scale_factor/Full2016v2/muonISO_TH2_SFs_pt_eta.root"};
    SF_files_map["muon"]["ttHMVA0p8"]["2016"]["ttHMVA"] = {"/afs/cern.ch/user/r/rseidita/public/ttH_SFs/ttHMVA0p8_TightHWWCut_SFs_2016.root"};
    SF_files_map["muon"]["ttHMVA0p8"]["2016"]["ttHMVA_SYS"] = {"/afs/cern.ch/user/r/rseidita/public/ttH_SFs/ttHMVA0p8_TightHWWCut_SFs_SYS_2016.root"};

    SF_files_map["electron"]["TightObjWP"]["2017"]["wpSF"] = {  cmssw_base+"/src/LatinoAnalysis/NanoGardener/python/data/scale_factor/Full2017v6/egammaEffi_passingMVA102Xwp90isoHWWiso0p06_2017runB.txt",
                                                                cmssw_base+"/src/LatinoAnalysis/NanoGardener/python/data/scale_factor/Full2017v6/egammaEffi_passingMVA102Xwp90isoHWWiso0p06_2017runC.txt",
                                                                cmssw_base+"/src/LatinoAnalysis/NanoGardener/python/data/scale_factor/Full2017v6/egammaEffi_passingMVA102Xwp90isoHWWiso0p06_2017runD.txt",
                                                                cmssw_base+"/src/LatinoAnalysis/NanoGardener/python/data/scale_factor/Full2017v6/egammaEffi_passingMVA102Xwp90isoHWWiso0p06_2017runE.txt",
                                                                cmssw_base+"/src/LatinoAnalysis/NanoGardener/python/data/scale_factor/Full2017v6/egammaEffi_passingMVA102Xwp90isoHWWiso0p06_2017runF.txt"
                                                            };
    SF_files_map["electron"]["TightObjWP"]["2017"]["ttHMVA"] = {cmssw_base+"/src/LatinoAnalysis/NanoGardener/python/data/scale_factor/Full2017v6/egammaEffi_TightHWW_ttHMVA_0p7_SFs_2017.txt"};
    SF_files_map["muon"]["TightObjWP"]["2017"]["idSF"] = {cmssw_base+"/src/LatinoAnalysis/NanoGardener/python/data/scale_factor/Full2017/muonID_cut_Tight_HWW_combined.root"};
    SF_files_map["muon"]["TightObjWP"]["2017"]["isoSF"] = {cmssw_base+"/src/LatinoAnalysis/NanoGardener/python/data/scale_factor/Full2017/muonISO_cut_Tight_HWW_combined.root"};
    SF_files_map["muon"]["ttHMVA0p8"]["2017"]["ttHMVA"] = {"/afs/cern.ch/user/r/rseidita/public/ttH_SFs/ttHMVA0p8_TightHWWCut_SFs_2017.root"};
    SF_files_map["muon"]["ttHMVA0p8"]["2017"]["ttHMVA_SYS"] = {"/afs/cern.ch/user/r/rseidita/public/ttH_SFs/ttHMVA0p8_TightHWWCut_SFs_SYS_2017.root"};

    SF_files_map["electron"]["TightObjWP"]["2018"]["wpSF"] = {cmssw_base+"/src/LatinoAnalysis/NanoGardener/python/data/scale_factor/Full2018v6/egammaEffi_passingTight102XHWW_runABCD.txt"};
    SF_files_map["electron"]["TightObjWP"]["2018"]["ttHMVA"] = {cmssw_base+"/src/LatinoAnalysis/NanoGardener/python/data/scale_factor/Full2018v6/egammaEffi_TightHWW_ttHMVA_0p7_SFs_2018.txt"};
    SF_files_map["muon"]["TightObjWP"]["2018"]["idSF"] = {cmssw_base+"/src/LatinoAnalysis/NanoGardener/python/data/scale_factor/Full2018/ID_TH2_SFs_pt_eta.root"};
    SF_files_map["muon"]["TightObjWP"]["2018"]["isoSF"] = {cmssw_base+"/src/LatinoAnalysis/NanoGardener/python/data/scale_factor/Full2018/ISO_TH2_SFs_pt_eta.root"};
    SF_files_map["muon"]["ttHMVA0p8"]["2018"]["ttHMVA"] = {"/afs/cern.ch/user/r/rseidita/public/ttH_SFs/ttHMVA0p8_TightHWWCut_SFs_2018.root"};
    SF_files_map["muon"]["ttHMVA0p8"]["2018"]["ttHMVA_SYS"] = {"/afs/cern.ch/user/r/rseidita/public/ttH_SFs/ttHMVA0p8_TightHWWCut_SFs_SYS_2018.root"};

    SF_files_map_ = SF_files_map;

    int ele_nbins_eta = 10;
    int ele_nbins_pt = 6;

    float ele_eta_bins[] {-2.5, -2., -1.566, -1.444,  -0.8, 0., 0.8, 1.444, 1.566, 2.0, 2.5};
    float ele_pt_bins[] {10., 20., 35., 50., 90., 150., 500.};

    // Load electron SFs in memory, in order of run period

    std::vector<TH2D> h_SF_ele {};
    std::vector<TH2D> h_SF_ele_err {};
    std::vector<TH2D> h_SF_ele_sys {};

    // Loop on run periods
    for( auto f : SF_files_map_["electron"][working_point_][year_]["wpSF"] ){
        
        TH2D h_SF = TH2D("", "", ele_nbins_eta, ele_eta_bins, ele_nbins_pt, ele_pt_bins);
        TH2D h_SF_err = TH2D("", "", ele_nbins_eta, ele_eta_bins, ele_nbins_pt, ele_pt_bins);
        TH2D h_SF_sys = TH2D("", "", ele_nbins_eta, ele_eta_bins, ele_nbins_pt, ele_pt_bins);

        for(int iBinX = 1; iBinX<=h_SF.GetNbinsX(); iBinX++){
            for(int iBinY = 1; iBinY<=h_SF.GetNbinsY(); iBinY++){

                double eta = h_SF.GetXaxis()->GetBinCenter(iBinX);
                double pt = h_SF.GetYaxis()->GetBinCenter(iBinY);

                if(f.find(".txt") != std::string::npos){

                    //Parsing the .txt file
                    std::string line;
                    std::istringstream strm;
                    double num;
                    std::ifstream ifs(f);
        
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
                    for(unsigned int i=0;i<60;i++){

                        if(eta>=lines[i][0] && eta<=lines[i][1] && pt>=lines[i][2] && pt<=lines[i][3]){

                            double data = lines[i][4];
                            double mc = lines[i][6];

                            double sigma_d = lines[i][5];
                            double sigma_m = lines[i][7];

                            h_SF.SetBinContent(iBinX, iBinY, data/mc);
                            h_SF_err.SetBinContent(iBinX, iBinY, TMath::Sqrt( TMath::Power(sigma_d/mc, 2) + TMath::Power(data/mc/mc*sigma_m, 2) ));
                            h_SF_sys.SetBinContent(iBinX, iBinY, TMath::Sqrt( TMath::Power(lines[i][8], 2) + TMath::Power(lines[i][9], 2) + TMath::Power(lines[i][10], 2) + TMath::Power(lines[i][11], 2) ) / mc);

                            break;

                        }
                    }
                }

                else{

                    //Not needed for now as all electron SF files are .txt
                    continue;

                }
            }
        }

        h_SF_ele.push_back(h_SF);
        h_SF_ele_err.push_back(h_SF_err);
        h_SF_ele_sys.push_back(h_SF_sys);

    }


    h_SF_ele_ = h_SF_ele;
    h_SF_ele_err_ = h_SF_ele_err;
    h_SF_ele_sys_ = h_SF_ele_sys;

    // Load electron ttHMVA SFs in memory, in order of run period

    std::vector<TH2D> h_SF_ele_ttHMVA {};
    std::vector<TH2D> h_SF_ele_ttHMVA_err {};
    std::vector<TH2D> h_SF_ele_ttHMVA_sys {};

    // Loop on run periods
    for( auto f : SF_files_map_["electron"][working_point_][year_]["ttHMVA"] ){
        
        TH2D h_SF = TH2D("", "", ele_nbins_eta, ele_eta_bins, ele_nbins_pt, ele_pt_bins);
        TH2D h_SF_err = TH2D("", "", ele_nbins_eta, ele_eta_bins, ele_nbins_pt, ele_pt_bins);
        TH2D h_SF_sys = TH2D("", "", ele_nbins_eta, ele_eta_bins, ele_nbins_pt, ele_pt_bins);

        for(int iBinX = 1; iBinX<=h_SF.GetNbinsX(); iBinX++){
            for(int iBinY = 1; iBinY<=h_SF.GetNbinsY(); iBinY++){

                double eta = h_SF.GetXaxis()->GetBinCenter(iBinX);
                double pt = h_SF.GetYaxis()->GetBinCenter(iBinY);

                if(f.find(".txt") != std::string::npos){

                    //Parsing the .txt file
                    std::string line;
                    std::istringstream strm;
                    double num;
                    std::ifstream ifs(f);
        
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

                            h_SF.SetBinContent(iBinX, iBinY, data/mc);
                            h_SF_err.SetBinContent(iBinX, iBinY, TMath::Sqrt( TMath::Power(sigma_d/mc, 2) + TMath::Power(data/mc/mc*sigma_m, 2) ));
                            h_SF_sys.SetBinContent(iBinX, iBinY, TMath::Sqrt( TMath::Power(lines[i][8], 2) + TMath::Power(lines[i][9], 2) + TMath::Power(lines[i][10], 2) + TMath::Power(lines[i][11], 2) ) / mc);

                            break;

                        }
                    }
                }

                else{

                    //Not needed for now as all electron SF files are .txt
                    continue;

                }
            }
        }

        h_SF_ele_ttHMVA.push_back(h_SF);
        h_SF_ele_ttHMVA_err.push_back(h_SF_err);
        h_SF_ele_ttHMVA_sys.push_back(h_SF_sys);

    }


    h_SF_ele_ttHMVA_ = h_SF_ele_ttHMVA;
    h_SF_ele_ttHMVA_err_ = h_SF_ele_ttHMVA_err;
    h_SF_ele_ttHMVA_sys_ = h_SF_ele_ttHMVA_sys;

    // Load muon SFs in memory

    std::vector<TH2D> h_SF_mu_Id {};
    std::vector<TH2D> h_SF_mu_Id_err {};
    std::vector<TH2D> h_SF_mu_Id_sys {};
    std::vector<TH2D> h_SF_mu_Iso {};
    std::vector<TH2D> h_SF_mu_Iso_err {};
    std::vector<TH2D> h_SF_mu_Iso_sys {};
    std::vector<TH2D> h_SF_mu_ttHMVA {};
    std::vector<TH2D> h_SF_mu_ttHMVA_err {};
    std::vector<TH2D> h_SF_mu_ttHMVA_sys {};

    // Loop on run periods - IdSF
    for( auto f : SF_files_map_["muon"][working_point_][year_]["idSF"]){
        
        TFile rootfile(f.c_str());
        TH2D* htemp = (TH2D*)rootfile.Get("Muon_idSF2D");

        int mu_nbins_eta = htemp->GetNbinsX(), mu_nbins_pt = htemp->GetNbinsY();
        double mu_eta_bins[mu_nbins_eta + 1], mu_pt_bins[mu_nbins_pt + 1];

        for(int k=0;k<=mu_nbins_eta;k++) { mu_eta_bins[k] = htemp->GetXaxis()->GetXbins()->At(k); }
        for(int k=0;k<=mu_nbins_pt;k++) { mu_pt_bins[k] = htemp->GetYaxis()->GetXbins()->At(k); }

        TH2D h_SF = TH2D("", "", mu_nbins_eta, mu_eta_bins, mu_nbins_pt, mu_pt_bins);
        TH2D h_SF_err = TH2D("", "", mu_nbins_eta, mu_eta_bins, mu_nbins_pt, mu_pt_bins);
        TH2D h_SF_sys = TH2D("", "", mu_nbins_eta, mu_eta_bins, mu_nbins_pt, mu_pt_bins);

        for(int i=1; i<=mu_nbins_eta;i++){
            for(int j=1; j<=mu_nbins_pt;j++){
                h_SF.SetBinContent(i, j, htemp->GetBinContent(i, j));
                h_SF_err.SetBinContent(i, j, htemp->GetBinError(i, j));
                h_SF_sys.SetBinContent(i, j, 1.); // FIXME this is here as a placeholder: old SF files only have total error, in the new ones it is split
            }
        }

        h_SF_mu_Id.push_back(h_SF);
        h_SF_mu_Id_err.push_back(h_SF_err);
        h_SF_mu_Id_sys.push_back(h_SF_sys);

    }

    // Loop on run periods - IsoSF
    for( auto f : SF_files_map_["muon"][working_point_][year_]["isoSF"]){

        TFile rootfile(f.c_str());
        TH2D* htemp = (TH2D*)rootfile.Get("Muon_isoSF2D");

        int mu_nbins_eta = htemp->GetNbinsX(), mu_nbins_pt = htemp->GetNbinsY();
        double mu_eta_bins[mu_nbins_eta + 1], mu_pt_bins[mu_nbins_pt + 1];

        for(int k=0;k<=mu_nbins_eta;k++) { mu_eta_bins[k] = htemp->GetXaxis()->GetXbins()->At(k); }
        for(int k=0;k<=mu_nbins_pt;k++) { mu_pt_bins[k] = htemp->GetYaxis()->GetXbins()->At(k); }

        TH2D h_SF = TH2D("", "", mu_nbins_eta, mu_eta_bins, mu_nbins_pt, mu_pt_bins);
        TH2D h_SF_err = TH2D("", "", mu_nbins_eta, mu_eta_bins, mu_nbins_pt, mu_pt_bins);
        TH2D h_SF_sys = TH2D("", "", mu_nbins_eta, mu_eta_bins, mu_nbins_pt, mu_pt_bins);

        for(int i=1; i<=mu_nbins_eta;i++){
            for(int j=1; j<=mu_nbins_pt;j++){
                h_SF.SetBinContent(i, j, htemp->GetBinContent(i, j));
                h_SF_err.SetBinContent(i, j, htemp->GetBinError(i, j));
                h_SF_sys.SetBinContent(i, j, 0.); // FIXME this is here as a placeholder: old SF files only have total error, in the new ones it is split
            }
        }

        h_SF_mu_Iso.push_back(h_SF);
        h_SF_mu_Iso_err.push_back(h_SF_err);
        h_SF_mu_Iso_sys.push_back(h_SF_sys);

    }

    // Loop on run periods - ttHMVA SF
    for( auto f : SF_files_map_["muon"]["ttHMVA0p8"][year_]["ttHMVA"] ){

        TFile rootfile(f.c_str());
        TH2D* htemp = (TH2D*)rootfile.Get("ttHMVA0p8_TightHWWCut");

        int mu_nbins_eta = htemp->GetNbinsX(), mu_nbins_pt = htemp->GetNbinsY();
        double mu_eta_bins[mu_nbins_eta + 1], mu_pt_bins[mu_nbins_pt + 1];

        for(int k=0;k<=mu_nbins_eta;k++) { mu_eta_bins[k] = htemp->GetXaxis()->GetXbins()->At(k); }
        for(int k=0;k<=mu_nbins_pt;k++) { mu_pt_bins[k] = htemp->GetYaxis()->GetXbins()->At(k); }

        TH2D h_SF = TH2D("", "", mu_nbins_eta, mu_eta_bins, mu_nbins_pt, mu_pt_bins);
        TH2D h_SF_err = TH2D("", "", mu_nbins_eta, mu_eta_bins, mu_nbins_pt, mu_pt_bins);

        for(int i=1; i<=mu_nbins_eta;i++){
            for(int j=1; j<=mu_nbins_pt;j++){
                h_SF.SetBinContent(i, j, htemp->GetBinContent(i, j));
                h_SF_err.SetBinContent(i, j, htemp->GetBinError(i, j));
            }
        }

        h_SF_mu_ttHMVA.push_back(h_SF);
        h_SF_mu_ttHMVA_err.push_back(h_SF_err);

    }

    // Loop on run periods - ttHMVA SF SYST
    for( auto f : SF_files_map_["muon"]["ttHMVA0p8"][year_]["ttHMVA_SYS"] ){

        TFile rootfile(f.c_str());
        TH2D* htemp = (TH2D*)rootfile.Get("ttHMVA0p8_TightHWWCut");

        int mu_nbins_eta = htemp->GetNbinsX(), mu_nbins_pt = htemp->GetNbinsY();
        double mu_eta_bins[mu_nbins_eta + 1], mu_pt_bins[mu_nbins_pt + 1];

        for(int k=0;k<=mu_nbins_eta;k++) { mu_eta_bins[k] = htemp->GetXaxis()->GetXbins()->At(k); }
        for(int k=0;k<=mu_nbins_pt;k++) { mu_pt_bins[k] = htemp->GetYaxis()->GetXbins()->At(k); }

        TH2D h_SF_sys = TH2D("", "", mu_nbins_eta, mu_eta_bins, mu_nbins_pt, mu_pt_bins);

        for(int i=1; i<=mu_nbins_eta;i++){
            for(int j=1; j<=mu_nbins_pt;j++){
                h_SF_sys.SetBinContent(i, j, htemp->GetBinError(i, j));
            }
        }

        h_SF_mu_ttHMVA_sys.push_back(h_SF_sys);

    }

    h_SF_mu_Id_ = h_SF_mu_Id;
    h_SF_mu_Id_err_ = h_SF_mu_Id_err;
    h_SF_mu_Id_sys_ = h_SF_mu_Id_sys;
    h_SF_mu_Iso_ = h_SF_mu_Iso;
    h_SF_mu_Iso_err_ = h_SF_mu_Iso_err;
    h_SF_mu_Iso_sys_ = h_SF_mu_Iso_sys;
    h_SF_mu_ttHMVA_ = h_SF_mu_ttHMVA;
    h_SF_mu_ttHMVA_err_ = h_SF_mu_ttHMVA_err;
    h_SF_mu_ttHMVA_sys_ = h_SF_mu_ttHMVA_sys;

}

void compute_SF::bindTree_(multidraw::FunctionLibrary& _library){

    _library.bindBranch(lepton_pt, "Lepton_pt");
    _library.bindBranch(lepton_eta, "Lepton_eta");
    _library.bindBranch(lepton_pdgId, "Lepton_pdgId");
    _library.bindBranch(run_period_, "run_period");
    _library.bindBranch(reco_SF_, "Lepton_RecoSF");
    _library.bindBranch(reco_SF_up_, "Lepton_RecoSF_Up");
    _library.bindBranch(reco_SF_do_, "Lepton_RecoSF_Down");

}

double compute_SF::evaluate(unsigned){

    std::vector<double> SF_vect {};
    std::vector<double> SF_err_vect {};
    std::vector<double> SF_up {};
    std::vector<double> SF_do {};

    for(unsigned i=0;i<nLeptons_;i++){

        if(TMath::Abs(lepton_pdgId->At(i)) == 11){

            std::list<std::string> SF_path = SF_files_map_["electron"][working_point_][year_]["wpSF"];
            std::list<std::string> SF_path_ttHMVA = SF_files_map_["electron"][working_point_][year_]["ttHMVA"];

            std::tuple<double, double, double> res = GetSF(11, lepton_eta->At(i), lepton_pt->At(i), SF_path.size()==1 ? 0 : *run_period_->Get() - 1);
            std::tuple<double, double, double> res_ttHMVA = GetSF(11, lepton_eta->At(i), lepton_pt->At(i), SF_path_ttHMVA.size()==1 ? 0 : *run_period_->Get() - 1, "ttHMVA");

            SF_vect.push_back(std::get<0>(res)*std::get<0>(res_ttHMVA));
            SF_err_vect.push_back(TMath::Sqrt(TMath::Power(std::get<1>(res), 2) + TMath::Power(std::get<2>(res), 2)
                                            + TMath::Power(std::get<1>(res_ttHMVA), 2) + TMath::Power(std::get<2>(res_ttHMVA), 2) ));

        }

        else if(TMath::Abs(lepton_pdgId->At(i)) == 13){

            std::list<std::string> SF_path_id = SF_files_map_["muon"][working_point_][year_]["idSF"];
            std::list<std::string> SF_path_iso = SF_files_map_["muon"][working_point_][year_]["isoSF"];
            
            std::tuple<double, double, double> res_id = GetSF(13, lepton_eta->At(i), lepton_pt->At(i), SF_path_id.size()==1 ? 0 : *run_period_->Get() - 1, "Id");
            std::tuple<double, double, double> res_iso = GetSF(13, lepton_eta->At(i), lepton_pt->At(i), SF_path_iso.size()==1 ? 0 : *run_period_->Get() - 1, "Iso");
            std::tuple<double, double, double> res_ttHMVA = GetSF(13, lepton_eta->At(i), lepton_pt->At(i), SF_path_iso.size()==1 ? 0 : *run_period_->Get() - 1, "ttHMVA");

            double SF_id = std::get<0>(res_id);
            double SF_iso = std::get<0>(res_iso);
            double SF_ttHMVA = std::get<0>(res_ttHMVA);

            SF_vect.push_back(SF_id * SF_iso * SF_ttHMVA);
            // SF_err_vect.push_back((SF_id * SF_iso) * TMath::Sqrt( TMath::Power(std::get<1>(res_id)/SF_id, 2) + TMath::Power(std::get<1>(res_iso)/SF_iso, 2) )); // Old formula for debugging
            SF_err_vect.push_back((SF_id * SF_iso * SF_ttHMVA) * TMath::Sqrt( TMath::Power(std::get<1>(res_id)/SF_id, 2)
                                                                            + TMath::Power(std::get<1>(res_iso)/SF_iso, 2)
                                                                            + (TMath::Power(std::get<1>(res_ttHMVA), 2) + TMath::Power(std::get<2>(res_ttHMVA), 2))/SF_ttHMVA/SF_ttHMVA )
                                                                            );

        }

    }

    double SF = 1.;
    double SF_err = 0.;

    // Calculate product of IsIso_SFs for all leptons in the event --> central value of SF to be returned
    for(auto x : SF_vect) SF *= x;

    // Now for the variations, these also have to account for the recoSF
    for(unsigned int i=0;i<nLeptons_;i++){

        SF_up.push_back( ((SF_vect[i] * reco_SF_->At(i)) + TMath::Sqrt(TMath::Power(SF_err_vect[i], 2) + TMath::Power(reco_SF_up_->At(i) - reco_SF_->At(i), 2) ))/(SF_vect[i] * reco_SF_->At(i)) );
        SF_do.push_back( ((SF_vect[i] * reco_SF_->At(i)) - TMath::Sqrt(TMath::Power(SF_err_vect[i], 2) + TMath::Power(reco_SF_do_->At(i) - reco_SF_->At(i), 2) ))/(SF_vect[i] * reco_SF_->At(i)) );

    }

    if(requested_SF_.compare("total_SF") == 0) { return SF; }
    else if(requested_SF_.compare("single_SF_up") == 0) { return requested_lepton_<SF_vect.size() ? SF_up[requested_lepton_] : 1.; }
    else if(requested_SF_.compare("single_SF_down") == 0) { return requested_lepton_<SF_vect.size() ? SF_do[requested_lepton_] : 1.; }
    else if(requested_SF_.compare("single_SF") == 0) { return requested_lepton_<SF_vect.size() ? SF_vect[requested_lepton_] : 1.; }
    else{ std::cout << "invalid option: please choose from [total_SF, single_SF, single_SF_up, single_SF_down]" << std::endl; return 0; }

}

std::tuple<double, double, double> compute_SF::GetSF(int flavor, double eta, double pt, int run_period, std::string type){

    double eta_temp = eta;
    double pt_temp = pt;

    double SF, SF_err, SF_sys;

    if((flavor==11) && (type == "ttHMVA")){

        double eta_max = 2.49;
        double eta_min = -2.5;
        double pt_max = 499.;
        double pt_min = 10.;

        if(eta_temp < eta_min){eta_temp = eta_min;}
        if(eta_temp > eta_max){eta_temp = eta_max;}
        if(pt_temp < pt_min){pt_temp = pt_min;}
        if(pt_temp > pt_max){pt_temp = pt_max;}

        SF = h_SF_ele_ttHMVA_[run_period].GetBinContent(h_SF_ele_ttHMVA_[run_period].FindBin(eta_temp, pt_temp));
        SF_err = h_SF_ele_ttHMVA_err_[run_period].GetBinContent(h_SF_ele_ttHMVA_err_[run_period].FindBin(eta_temp, pt_temp));
        SF_sys = h_SF_ele_ttHMVA_sys_[run_period].GetBinContent(h_SF_ele_ttHMVA_sys_[run_period].FindBin(eta_temp, pt_temp));

    }

    else if((flavor==11) && (type != "ttHMVA")){

        double eta_max = 2.49;
        double eta_min = -2.5;
        double pt_max = 499.;
        double pt_min = 10.;

        if(eta_temp < eta_min){eta_temp = eta_min;}
        if(eta_temp > eta_max){eta_temp = eta_max;}
        if(pt_temp < pt_min){pt_temp = pt_min;}
        if(pt_temp > pt_max){pt_temp = pt_max;}

        SF = h_SF_ele_[run_period].GetBinContent(h_SF_ele_[run_period].FindBin(eta_temp, pt_temp));
        SF_err = h_SF_ele_err_[run_period].GetBinContent(h_SF_ele_err_[run_period].FindBin(eta_temp, pt_temp));
        SF_sys = h_SF_ele_sys_[run_period].GetBinContent(h_SF_ele_sys_[run_period].FindBin(eta_temp, pt_temp));

    }

    else if((flavor == 13) && (type == "Id")){

        double eta_max = 2.39;
        double eta_min = -2.4;
        double pt_max = 199.;
        double pt_min = 10.;

        if(eta_temp < eta_min){eta_temp = eta_min;}
        if(eta_temp > eta_max){eta_temp = eta_max;}
        if(pt_temp < pt_min){pt_temp = pt_min;}
        if(pt_temp > pt_max){pt_temp = pt_max;}

        SF = h_SF_mu_Id_[run_period].GetBinContent(h_SF_mu_Id_[run_period].FindBin(eta_temp, pt_temp));
        SF_err = h_SF_mu_Id_err_[run_period].GetBinContent(h_SF_mu_Id_err_[run_period].FindBin(eta_temp, pt_temp));
        SF_sys = h_SF_mu_Id_sys_[run_period].GetBinContent(h_SF_mu_Id_sys_[run_period].FindBin(eta_temp, pt_temp));
    
    }

    else if((flavor == 13) && (type == "Iso")){

        double eta_max = 2.39;
        double eta_min = -2.4;
        double pt_max = 199.;
        double pt_min = 10.;

        if(eta_temp < eta_min){eta_temp = eta_min;}
        if(eta_temp > eta_max){eta_temp = eta_max;}
        if(pt_temp < pt_min){pt_temp = pt_min;}
        if(pt_temp > pt_max){pt_temp = pt_max;}

        SF = h_SF_mu_Iso_[run_period].GetBinContent(h_SF_mu_Iso_[run_period].FindBin(eta_temp, pt_temp));
        SF_err = h_SF_mu_Iso_err_[run_period].GetBinContent(h_SF_mu_Iso_err_[run_period].FindBin(eta_temp, pt_temp));
        SF_sys = h_SF_mu_Iso_sys_[run_period].GetBinContent(h_SF_mu_Iso_sys_[run_period].FindBin(eta_temp, pt_temp));
    
    }

    else if((flavor == 13) && (type == "ttHMVA")){

        double eta_max = 2.39;
        double eta_min = -2.4;
        double pt_max = 199.;
        double pt_min = 10.;

        if(eta_temp < eta_min){eta_temp = eta_min;}
        if(eta_temp > eta_max){eta_temp = eta_max;}
        if(pt_temp < pt_min){pt_temp = pt_min;}
        if(pt_temp > pt_max){pt_temp = pt_max;}

        SF = h_SF_mu_ttHMVA_[run_period].GetBinContent(h_SF_mu_ttHMVA_[run_period].FindBin(eta_temp, pt_temp));
        SF_err = h_SF_mu_ttHMVA_err_[run_period].GetBinContent(h_SF_mu_ttHMVA_err_[run_period].FindBin(eta_temp, pt_temp));
        SF_sys = h_SF_mu_ttHMVA_sys_[run_period].GetBinContent(h_SF_mu_ttHMVA_sys_[run_period].FindBin(eta_temp, pt_temp));
    
    }

    else {std::cout << "Invalid call to compute_SF::GetSF" << std::endl;}

    std::tuple<double, double, double> result = {SF, SF_err, SF_sys};

    return result;

}
