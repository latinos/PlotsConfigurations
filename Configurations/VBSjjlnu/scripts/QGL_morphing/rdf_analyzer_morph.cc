#include "ROOT/RDataFrame.hxx"
#include "ROOT/RResultPtr.hxx"
#include "Math/Vector4D.h"
#include <TGraph.h>
#include <TChain.h>
#include <TCanvas.h>
#include <TTree.h>
#include <TFile.h>
#include <TObject.h>
#include <iostream>
#include <string>
#include <algorithm>
#include "TString.h"
#include "TMath.h"
#include "TH1D.h"

using namespace std;
using namespace ROOT;
using namespace ROOT::VecOps;
using namespace ROOT::Math;
using namespace ROOT::RDF;


float Alt(RVec<float> c, int index, float alt){
    auto value = index < c.size() ? c[index] : alt;
    return value;
}


RVec<double> LogVec(RVec<double> vec){
    RVec<double> out; 
    for(auto const & el : vec){
        out.push_back(TMath::Log(el));
    }
    return out;
}

RVec<double> AbsVec(RVec<double> vec){
    RVec<double> out; 
    for(auto const & el : vec){
        out.push_back(TMath::Abs(el));
    }
    return out;
}


std::vector<RResultPtr<TH1D>> get_histograms(RNode df, string label){
    return {
        //histos.push_back(df.Histo1D({(label+ "_events").c_str(), "events", 1,0,1}, "1."));
        df.Histo1D({(label+ "_mjj_vbs").c_str(), "Mjj VBS", 50, 0, 1000}, "mjj_vbs", "weight"),
        df.Histo1D({(label+ "_mjj_vjet").c_str(), "Mjj Vjets", 50, 40, 250}, "mjj_vjet","weight"),
        df.Histo1D({(label+ "_deltaeta_vbs").c_str(), "deltaeta vbs", 50, 0, 8}, "deltaeta_vbs","weight"),
        df.Histo1D({(label+ "_lepton_pt").c_str(), "Lepton pt", 50, 0, 200}, "lepton_pt","weight"),
        df.Histo1D({(label+ "_puppimet").c_str(), "PuppiMET", 50, 0, 200}, "PuppiMET_pt","weight"),
        df.Histo1D({(label+ "_jet0pt_zoom").c_str(), "Jet 0 Pt", 50, 30, 200}, "jet_0_pt","weight"),
        df.Histo1D({(label+ "_jet0pt").c_str(), "Jet 0 Pt", 60, 30, 500}, "jet_0_pt","weight"),
        df.Histo1D({(label+ "_weight").c_str(), "weight", 40, 0, 2}, "weight")
     };

}


TGraph * morph_higheta_gluon;
TGraph * morph_loweta_gluon;
TGraph * morph_higheta_quark;
TGraph * morph_loweta_quark;
bool do_morph_gluon;
bool do_morph_quark;

double morph_gluon(double x, double eta){
    if (!do_morph_gluon) return x;
    if (x<= 0.) return x;
    if (x>= 1.) return x;
    if (abs(eta)<3)   return morph_loweta_gluon->Eval(x);
    if (abs(eta)>=3)  return morph_higheta_gluon->Eval(x);
    return x;
}
double morph_quark(double x, double eta){
    if (!do_morph_quark) return x;
    if (x<= 0.) return x;
    if (x>= 1.) return x;
    if (abs(eta)<3)   return morph_loweta_quark->Eval(x);
    if (abs(eta)>=3)  return morph_higheta_quark->Eval(x);
    return x;
}

int main(int argc, char** argv){

    string base_file { argv[1] };
    string region {argv[2]}; 
    
    std::string output {argv[3]};
    
    int do_morph =  std::atoi(argv[4]);
    do_morph_gluon = do_morph & 1;
    do_morph_quark = do_morph>>1 & 1;
    cout << "Morphing gluons "<<do_morph_gluon << " | Morphing quark: "<<do_morph_quark << endl;
    char* morph_file_gluon {argv[5]};
    char* mf_higheta_gluon {argv[6]};
    char* mf_loweta_gluon {argv[7]};
    char* morph_file_quark {argv[8]};
    char* mf_higheta_quark {argv[9]};
    char* mf_loweta_quark {argv[10]};

    TFile mfile_gluon {morph_file_gluon, "READ"};
    if (do_morph_gluon){
        morph_loweta_gluon = (TGraph*) mfile_gluon.Get(mf_loweta_gluon);
        morph_higheta_gluon = (TGraph*) mfile_gluon.Get(mf_higheta_gluon);
    }
    TFile mfile_quark {morph_file_quark, "READ"};
    if (do_morph_quark){
        morph_loweta_quark = (TGraph*) mfile_quark.Get(mf_loweta_quark);
        morph_higheta_quark = (TGraph*) mfile_quark.Get(mf_higheta_quark);
    }

    bool mt = true;
    
    std::vector<string> samples_mc = {"VBS", "DY", "Wjets_HT", "top", "VV","VVV","VBF-V", "Vg","VgS"};
    std::vector<string> samples_data = {"DATA", "Fake"};
    
    //Enabling multithread
    if(mt){
        ROOT::EnableImplicitMT();
        int poolsize =ROOT::GetThreadPoolSize();
        cout << "Multi-threading pool: "<< poolsize << endl;
    }

    std::vector< std::map<string,RResultPtr<TH1D> >> histograms;

    TFile output_file {output.c_str(),"RECREATE"};

    for (auto & sample : samples_mc){
        std::cout << "Working on "<< sample << std::endl;
        RDataFrame rdf {region + "/tree/tree_"+sample, base_file};
        auto rdfa = rdf.Define("vbs_0_aeta","abs(vbs_0_eta)")
                    .Define("vbs_1_aeta","abs(vbs_1_eta)")
                    .Define("vjet_0_aeta","abs(vjet_0_eta)")
                    .Define("vjet_1_aeta","abs(vjet_1_eta)");
        
        auto df_vjet0_gluon = rdfa.Filter("vjet_0_partfl_res == 21").Define("vjet_0_qgl_res_morphed", morph_gluon, {"vjet_0_qgl_res","vjet_0_eta"});
        auto df_vjet1_gluon = rdfa.Filter("vjet_1_partfl_res == 21").Define("vjet_1_qgl_res_morphed", morph_gluon, {"vjet_1_qgl_res","vjet_1_eta"});
        auto df_vbs0_gluon = rdfa.Filter("vbs_0_partfl_res == 21").Define("vbs_0_qgl_res_morphed", morph_gluon, {"vbs_0_qgl_res","vbs_0_eta"});
        auto df_vbs1_gluon = rdfa.Filter("vbs_1_partfl_res == 21").Define("vbs_1_qgl_res_morphed", morph_gluon, {"vbs_1_qgl_res","vbs_1_eta"});
        auto df_vjet0_quark = rdfa.Filter("vjet_0_partfl_res != 21").Define("vjet_0_qgl_res_morphed", morph_quark, {"vjet_0_qgl_res","vjet_0_eta"});
        auto df_vjet1_quark = rdfa.Filter("vjet_1_partfl_res != 21").Define("vjet_1_qgl_res_morphed", morph_quark, {"vjet_1_qgl_res","vjet_1_eta"});
        auto df_vbs0_quark = rdfa.Filter("vbs_0_partfl_res != 21").Define("vbs_0_qgl_res_morphed", morph_quark, {"vbs_0_qgl_res","vbs_0_eta"});
        auto df_vbs1_quark = rdfa.Filter("vbs_1_partfl_res != 21").Define("vbs_1_qgl_res_morphed", morph_quark, {"vbs_1_qgl_res","vbs_1_eta"});


        std::map<string, RResultPtr<TH1D>> histos = {
            {"vjet0_gluon", df_vjet0_gluon.Histo1D({(sample+ "_vjet0_gluon").c_str(), "QGL", 100,0,1}, "vjet_0_qgl_res_morphed", "weight")},
            {"vjet0_quark", df_vjet0_quark.Histo1D({(sample+ "_vjet0_quark").c_str(), "QGL", 100,0,1}, "vjet_0_qgl_res_morphed", "weight")},
            {"vjet1_gluon", df_vjet1_gluon.Histo1D({(sample+ "_vjet1_gluon").c_str(), "QGL", 100,0,1}, "vjet_1_qgl_res_morphed", "weight")},
            {"vjet1_quark", df_vjet1_quark.Histo1D({(sample+ "_vjet1_quark").c_str(), "QGL", 100,0,1}, "vjet_1_qgl_res_morphed", "weight")},
            {"vbs0_gluon", df_vbs0_gluon.Histo1D({(sample+ "_vbs0_gluon").c_str(), "QGL", 100,0,1}, "vbs_0_qgl_res_morphed", "weight")},
            {"vbs0_quark", df_vbs0_quark.Histo1D({(sample+ "_vbs0_quark").c_str(), "QGL", 100,0,1}, "vbs_0_qgl_res_morphed", "weight")},
            {"vbs1_gluon", df_vbs1_gluon.Histo1D({(sample+ "_vbs1_gluon").c_str(), "QGL", 100,0,1}, "vbs_1_qgl_res_morphed", "weight")},
            {"vbs1_quark", df_vbs1_quark.Histo1D({(sample+ "_vbs1_quark").c_str(), "QGL", 100,0,1}, "vbs_1_qgl_res_morphed", "weight")},

            {"vjet0_higheta_gluon", df_vjet0_gluon.Filter("vjet_0_aeta > 3").Histo1D({(sample+ "_vjet0_higheta_gluon").c_str(), "QGL", 100,0,1}, "vjet_0_qgl_res_morphed", "weight")},
            {"vjet0_higheta_quark", df_vjet0_quark.Filter("vjet_0_aeta > 3").Histo1D({(sample+ "_vjet0_higheta_quark").c_str(), "QGL", 100,0,1}, "vjet_0_qgl_res_morphed", "weight")},
            {"vjet1_higheta_gluon", df_vjet1_gluon.Filter("vjet_1_aeta > 3").Histo1D({(sample+ "_vjet1_higheta_gluon").c_str(), "QGL", 100,0,1}, "vjet_1_qgl_res_morphed", "weight")},
            {"vjet1_higheta_quark", df_vjet1_quark.Filter("vjet_1_aeta > 3").Histo1D({(sample+ "_vjet1_higheta_quark").c_str(), "QGL", 100,0,1}, "vjet_1_qgl_res", "weight")},
            {"vbs0_higheta_gluon", df_vbs0_gluon.Filter("vbs_0_aeta > 3").Histo1D({(sample+ "_vbs0_higheta_gluon").c_str(), "QGL", 100,0,1}, "vbs_0_qgl_res_morphed", "weight")},
            {"vbs0_higheta_quark", df_vbs0_quark.Filter("vbs_0_aeta > 3").Histo1D({(sample+ "_vbs0_higheta_quark").c_str(), "QGL", 100,0,1}, "vbs_0_qgl_res_morphed", "weight")},
            {"vbs1_higheta_gluon", df_vbs1_gluon.Filter("vbs_1_aeta > 3").Histo1D({(sample+ "_vbs1_higheta_gluon").c_str(), "QGL", 100,0,1}, "vbs_1_qgl_res_morphed", "weight")},
            {"vbs1_higheta_quark", df_vbs1_quark.Filter("vbs_1_aeta > 3").Histo1D({(sample+ "_vbs1_higheta_quark").c_str(), "QGL", 100,0,1}, "vbs_1_qgl_res_morphed", "weight")},

            {"vjet0_loweta_gluon", df_vjet0_gluon.Filter("vjet_0_aeta <= 2").Histo1D({(sample+ "_vjet0_loweta_gluon").c_str(), "QGL", 100,0,1}, "vjet_0_qgl_res_morphed", "weight")},
            {"vjet0_loweta_quark", df_vjet0_quark.Filter("vjet_0_aeta <= 2").Histo1D({(sample+ "_vjet0_loweta_quark").c_str(), "QGL", 100,0,1}, "vjet_0_qgl_res_morphed", "weight")},
            {"vjet1_loweta_gluon", df_vjet1_gluon.Filter("vjet_1_aeta <= 2").Histo1D({(sample+ "_vjet1_loweta_gluon").c_str(), "QGL", 100,0,1}, "vjet_1_qgl_res_morphed", "weight")},
            {"vjet1_loweta_quark", df_vjet1_quark.Filter("vjet_1_aeta <= 2").Histo1D({(sample+ "_vjet1_loweta_quark").c_str(), "QGL", 100,0,1}, "vjet_1_qgl_res_morphed", "weight")},
            {"vbs0_loweta_gluon", df_vbs0_gluon.Filter("vbs_0_aeta <= 2").Histo1D({(sample+ "_vbs0_loweta_gluon").c_str(), "QGL", 100,0,1}, "vbs_0_qgl_res_morphed", "weight")},
            {"vbs0_loweta_quark", df_vbs0_quark.Filter("vbs_0_aeta <= 2").Histo1D({(sample+ "_vbs0_loweta_quark").c_str(), "QGL", 100,0,1}, "vbs_0_qgl_res_morphed", "weight")},
            {"vbs1_loweta_gluon", df_vbs1_gluon.Filter("vbs_1_aeta <= 2").Histo1D({(sample+ "_vbs1_loweta_gluon").c_str(), "QGL", 100,0,1}, "vbs_1_qgl_res_morphed", "weight")},
            {"vbs1_loweta_quark", df_vbs1_quark.Filter("vbs_1_aeta <= 2").Histo1D({(sample+ "_vbs1_loweta_quark").c_str(), "QGL", 100,0,1}, "vbs_1_qgl_res_morphed", "weight")},

            {"vjet0_gluon_pt", df_vjet0_gluon.Histo1D({(sample+ "_vjet0_gluon_pt").c_str(), "QGL", 50,30,300}, "vjet_0_pt", "weight")},
            {"vjet0_quark_pt", df_vjet0_quark.Histo1D({(sample+ "_vjet0_quark_pt").c_str(), "QGL", 50,30,300}, "vjet_0_pt", "weight")},
            {"vjet1_gluon_pt", df_vjet1_gluon.Histo1D({(sample+ "_vjet1_gluon_pt").c_str(), "QGL", 50,30,300}, "vjet_1_pt", "weight")},
            {"vjet1_quark_pt", df_vjet1_quark.Histo1D({(sample+ "_vjet1_quark_pt").c_str(), "QGL", 50,30,300}, "vjet_1_pt", "weight")},
            {"vbs0_gluon_pt", df_vbs0_gluon.Histo1D({(sample+ "_vbs0_gluon_pt").c_str(), "QGL", 50,30,300}, "vbs_0_pt", "weight")},
            {"vbs0_quark_pt", df_vbs0_quark.Histo1D({(sample+ "_vbs0_quark_pt").c_str(), "QGL", 50,30,300}, "vbs_0_pt", "weight")},
            {"vbs1_gluon_pt", df_vbs1_gluon.Histo1D({(sample+ "_vbs1_gluon_pt").c_str(), "QGL", 50,30,300}, "vbs_1_pt", "weight")},
            {"vbs1_quark_pt", df_vbs1_quark.Histo1D({(sample+ "_vbs1_quark_pt").c_str(), "QGL", 50,30,300}, "vbs_1_pt", "weight")},

            {"vjet0_gluon_pt_loweta", df_vjet0_gluon.Filter("vjet_0_aeta <= 2").Histo1D({(sample+ "_vjet0_gluon_pt_loweta").c_str(), "QGL", 50,30,300}, "vjet_0_pt", "weight")},
            {"vjet0_quark_pt_loweta", df_vjet0_quark.Filter("vjet_1_aeta <= 2").Histo1D({(sample+ "_vjet0_quark_pt_loweta").c_str(), "QGL", 50,30,300}, "vjet_0_pt", "weight")},
            {"vjet1_gluon_pt_loweta", df_vjet1_gluon.Filter("vbs_0_aeta <= 2").Histo1D({(sample+ "_vjet1_gluon_pt_loweta").c_str(), "QGL", 50,30,300}, "vjet_1_pt", "weight")},
            {"vjet1_quark_pt_loweta", df_vjet1_quark.Filter("vbs_1_aeta <= 2").Histo1D({(sample+ "_vjet1_quark_pt_loweta").c_str(), "QGL", 50,30,300}, "vjet_1_pt", "weight")},
            {"vbs0_gluon_pt_loweta", df_vbs0_gluon.Filter("vjet_0_aeta <= 2").Histo1D({(sample+ "_vbs0_gluon_pt_loweta").c_str(), "QGL", 50,30,300}, "vbs_0_pt", "weight")},
            {"vbs0_quark_pt_loweta", df_vbs0_quark.Filter("vjet_1_aeta <= 2").Histo1D({(sample+ "_vbs0_quark_pt_loweta").c_str(), "QGL", 50,30,300}, "vbs_0_pt", "weight")},
            {"vbs1_gluon_pt_loweta", df_vbs1_gluon.Filter("vbs_0_aeta <= 2").Histo1D({(sample+ "_vbs1_gluon_pt_loweta").c_str(), "QGL", 50,30,300}, "vbs_1_pt", "weight")},
            {"vbs1_quark_pt_loweta", df_vbs1_quark.Filter("vbs_1_aeta <= 2").Histo1D({(sample+ "_vbs1_quark_pt_loweta").c_str(), "QGL", 50,30,300}, "vbs_1_pt", "weight")},

            {"vjet0_gluon_pt_higheta", df_vjet0_gluon.Filter("vjet_0_aeta > 3").Histo1D({(sample+ "_vjet0_gluon_pt_higheta").c_str(), "QGL", 50,30,300}, "vjet_0_pt", "weight")},
            {"vjet0_quark_pt_higheta", df_vjet0_quark.Filter("vjet_1_aeta > 3").Histo1D({(sample+ "_vjet0_quark_pt_higheta").c_str(), "QGL", 50,30,300}, "vjet_0_pt", "weight")},
            {"vjet1_gluon_pt_higheta", df_vjet1_gluon.Filter("vbs_0_aeta > 3").Histo1D({(sample+ "_vjet1_gluon_pt_higheta").c_str(), "QGL", 50,30,300}, "vjet_1_pt", "weight")},
            {"vjet1_quark_pt_higheta", df_vjet1_quark.Filter("vbs_1_aeta > 3").Histo1D({(sample+ "_vjet1_quark_pt_higheta").c_str(), "QGL", 50,30,300}, "vjet_1_pt", "weight")},
            {"vbs0_gluon_pt_higheta", df_vbs0_gluon.Filter("vjet_0_aeta > 3").Histo1D({(sample+ "_vbs0_gluon_pt_higheta").c_str(), "QGL", 50,30,300}, "vbs_0_pt", "weight")},
            {"vbs0_quark_pt_higheta", df_vbs0_quark.Filter("vjet_1_aeta > 3").Histo1D({(sample+ "_vbs0_quark_pt_higheta").c_str(), "QGL", 50,30,300}, "vbs_0_pt", "weight")},
            {"vbs1_gluon_pt_higheta", df_vbs1_gluon.Filter("vbs_0_aeta > 3").Histo1D({(sample+ "_vbs1_gluon_pt_higheta").c_str(), "QGL", 50,30,300}, "vbs_1_pt", "weight")},
            {"vbs1_quark_pt_higheta", df_vbs1_quark.Filter("vbs_1_aeta > 3").Histo1D({(sample+ "_vbs1_quark_pt_higheta").c_str(), "QGL", 50,30,300}, "vbs_1_pt", "weight")},

            {"vjet0_gluon_eta", df_vjet0_gluon.Histo1D({(sample+ "_vjet0_gluon_eta").c_str(), "QGL", 50,0,5}, "vjet_0_aeta", "weight")},
            {"vjet0_quark_eta", df_vjet0_quark.Histo1D({(sample+ "_vjet0_quark_eta").c_str(), "QGL", 50,0,5}, "vjet_0_aeta", "weight")},
            {"vjet1_gluon_eta", df_vjet1_gluon.Histo1D({(sample+ "_vjet1_gluon_eta").c_str(), "QGL", 50,0,5}, "vjet_1_aeta", "weight")},
            {"vjet1_quark_eta", df_vjet1_quark.Histo1D({(sample+ "_vjet1_quark_eta").c_str(), "QGL", 50,0,5}, "vjet_1_aeta", "weight")},
            {"vbs0_gluon_eta", df_vbs0_gluon.Histo1D({(sample+ "_vbs0_gluon_eta").c_str(), "QGL", 50,0,5}, "vbs_0_aeta", "weight")},
            {"vbs0_quark_eta", df_vbs0_quark.Histo1D({(sample+ "_vbs0_quark_eta").c_str(), "QGL", 50,0,5}, "vbs_0_aeta", "weight")},
            {"vbs1_gluon_eta", df_vbs1_gluon.Histo1D({(sample+ "_vbs1_gluon_eta").c_str(), "QGL", 50,0,5}, "vbs_1_aeta", "weight")},
            {"vbs1_quark_eta", df_vbs1_quark.Histo1D({(sample+ "_vbs1_quark_eta").c_str(), "QGL", 50,0,5}, "vbs_1_aeta", "weight")}
        };

        histograms.push_back(histos);
        // Trigger 
        histos["vjet0_gluon"]->Draw();
        // Save all histos
        std::for_each(histos.begin(), histos.end(), [](std::pair<string, RResultPtr<TH1D>> h){ h.second->Write();});
    }

    // Build the sum of all 
    std::map<string, TH1D> final_histos =  {
        {"vjet0_gluon", {"vjet0_gluon","QGL", 100,0,1}},
        {"vjet0_quark", {"vjet0_quark","QGL", 100,0,1}},
        {"vjet1_gluon", {"vjet1_gluon","QGL", 100,0,1}},
        {"vjet1_quark", {"vjet1_quark","QGL", 100,0,1}},
        {"vbs0_gluon", {"vbs0_gluon","QGL", 100,0,1}},
        {"vbs0_quark", {"vbs0_quark","QGL", 100,0,1}},
        {"vbs1_gluon", {"vbs1_gluon","QGL", 100,0,1}},
        {"vbs1_quark", {"vbs1_quark","QGL", 100,0,1}},

        {"vjet0_higheta_gluon", {"vjet0_higheta_gluon","QGL", 100,0,1}},
        {"vjet0_higheta_quark", {"vjet0_higheta_quark","QGL", 100,0,1}},
        {"vjet1_higheta_gluon", {"vjet1_higheta_gluon","QGL", 100,0,1}},
        {"vjet1_higheta_quark", {"vjet1_higheta_quark","QGL", 100,0,1}},
        {"vbs0_higheta_gluon", {"vbs0_higheta_gluon","QGL", 100,0,1}},
        {"vbs0_higheta_quark", {"vbs0_higheta_quark","QGL", 100,0,1}},
        {"vbs1_higheta_gluon", {"vbs1_higheta_gluon","QGL", 100,0,1}},
        {"vbs1_higheta_quark", {"vbs1_higheta_quark","QGL", 100,0,1}},

        {"vjet0_loweta_gluon", {"vjet0_loweta_gluon","QGL", 100,0,1}},
        {"vjet0_loweta_quark", {"vjet0_loweta_quark","QGL", 100,0,1}},
        {"vjet1_loweta_gluon", {"vjet1_loweta_gluon","QGL", 100,0,1}},
        {"vjet1_loweta_quark", {"vjet1_loweta_quark","QGL", 100,0,1}},
        {"vbs0_loweta_gluon", {"vbs0_loweta_gluon","QGL", 100,0,1}},
        {"vbs0_loweta_quark", {"vbs0_loweta_quark","QGL", 100,0,1}},
        {"vbs1_loweta_gluon", {"vbs1_loweta_gluon","QGL", 100,0,1}},
        {"vbs1_loweta_quark", {"vbs1_loweta_quark","QGL", 100,0,1}},
        
        {"vjet0_gluon_pt", {"vjet0_gluon_pt","QGL", 50,30,300}},
        {"vjet0_quark_pt", {"vjet0_quark_pt","QGL", 50,30,300}},
        {"vjet1_gluon_pt", {"vjet1_gluon_pt","QGL", 50,30,300}},
        {"vjet1_quark_pt", {"vjet1_quark_pt","QGL", 50,30,300}},
        {"vbs0_gluon_pt", {"vbs0_gluon_pt","QGL", 50,30,300}},
        {"vbs0_quark_pt", {"vbs0_quark_pt","QGL", 50,30,300}},
        {"vbs1_gluon_pt", {"vbs1_gluon_pt","QGL", 50,30,300}},
        {"vbs1_quark_pt", {"vbs1_quark_pt","QGL", 50,30,300}},

        {"vjet0_gluon_pt_higheta", {"vjet0_gluon_pt_higheta","QGL", 50,30,300}},
        {"vjet0_quark_pt_higheta", {"vjet0_quark_pt_higheta","QGL", 50,30,300}},
        {"vjet1_gluon_pt_higheta", {"vjet1_gluon_pt_higheta","QGL", 50,30,300}},
        {"vjet1_quark_pt_higheta", {"vjet1_quark_pt_higheta","QGL", 50,30,300}},
        {"vbs0_gluon_pt_higheta", {"vbs0_gluon_pt_higheta","QGL", 50,30,300}},
        {"vbs0_quark_pt_higheta", {"vbs0_quark_pt_higheta","QGL", 50,30,300}},
        {"vbs1_gluon_pt_higheta", {"vbs1_gluon_pt_higheta","QGL", 50,30,300}},
        {"vbs1_quark_pt_higheta", {"vbs1_quark_pt_higheta","QGL", 50,30,300}},

        {"vjet0_gluon_pt_loweta", {"vjet0_gluon_pt_loweta","QGL", 50,30,300}},
        {"vjet0_quark_pt_loweta", {"vjet0_quark_pt_loweta","QGL", 50,30,300}},
        {"vjet1_gluon_pt_loweta", {"vjet1_gluon_pt_loweta","QGL", 50,30,300}},
        {"vjet1_quark_pt_loweta", {"vjet1_quark_pt_loweta","QGL", 50,30,300}},
        {"vbs0_gluon_pt_loweta", {"vbs0_gluon_pt_loweta","QGL", 50,30,300}},
        {"vbs0_quark_pt_loweta", {"vbs0_quark_pt_loweta","QGL", 50,30,300}},
        {"vbs1_gluon_pt_loweta", {"vbs1_gluon_pt_loweta","QGL", 50,30,300}},
        {"vbs1_quark_pt_loweta", {"vbs1_quark_pt_loweta","QGL", 50,30,300}},
        
        {"vjet0_gluon_eta", {"vjet0_gluon_eta","QGL", 50,0,5}},
        {"vjet0_quark_eta", {"vjet0_quark_eta","QGL", 50,0,5}},
        {"vjet1_gluon_eta", {"vjet1_gluon_eta","QGL", 50,0,5}},
        {"vjet1_quark_eta", {"vjet1_quark_eta","QGL", 50,0,5}},
        {"vbs0_gluon_eta", {"vbs0_gluon_eta","QGL", 50,0,5}},
        {"vbs0_quark_eta", {"vbs0_quark_eta","QGL", 50,0,5}},
        {"vbs1_gluon_eta", {"vbs1_gluon_eta","QGL", 50,0,5}},
        {"vbs1_quark_eta", {"vbs1_quark_eta","QGL", 50,0,5}},
    };
    for (auto & samples_h: histograms){
        for (auto & histo : samples_h ){
            final_histos[histo.first].Add(histo.second.GetPtr());
        }
    }

    // Now Data and Fake
    for (auto & sample : samples_data){
        std::cout << "Working on "<< sample << std::endl;
        RDataFrame rdf {region + "/tree_DATA/tree_"+sample, base_file};
        auto rdfb = rdf.Define("vbs_0_aeta","abs(vbs_0_eta)")
                    .Define("vbs_1_aeta","abs(vbs_1_eta)")
                    .Define("vjet_0_aeta","abs(vjet_0_eta)")
                    .Define("vjet_1_aeta","abs(vjet_1_eta)");

        std::map<string, RResultPtr<TH1D>> histos = {
            {"vjet0", rdfb.Histo1D({(sample+ "_vjet0").c_str(), "QGL", 100,0,1}, "vjet_0_qgl_res", "weight")},
            {"vjet1", rdfb.Histo1D({(sample+ "_vjet1").c_str(), "QGL", 100,0,1}, "vjet_1_qgl_res", "weight")},
            {"vbs0", rdfb.Histo1D({(sample+ "_vbs0").c_str(), "QGL", 100,0,1}, "vbs_0_qgl_res", "weight")},
            {"vbs1", rdfb.Histo1D({(sample+ "_vbs1").c_str(), "QGL", 100,0,1}, "vbs_1_qgl_res", "weight")},

            {"vjet0_higheta", rdfb.Filter("vjet_0_aeta > 3").Histo1D({(sample+ "_vjet0_higheta").c_str(), "QGL", 100,0,1}, "vjet_0_qgl_res", "weight")},
            {"vjet1_higheta", rdfb.Filter("vjet_1_aeta > 3").Histo1D({(sample+ "_vjet1_higheta").c_str(), "QGL", 100,0,1}, "vjet_1_qgl_res", "weight")},
            {"vbs0_higheta", rdfb.Filter("vbs_0_aeta > 3").Histo1D({(sample+ "_vbs0_higheta").c_str(), "QGL", 100,0,1}, "vbs_0_qgl_res", "weight")},
            {"vbs1_higheta", rdfb.Filter("vbs_1_aeta > 3").Histo1D({(sample+ "_vbs1_higheta").c_str(), "QGL", 100,0,1}, "vbs_1_qgl_res", "weight")},

            {"vjet0_loweta", rdfb.Filter("vjet_0_aeta <= 2").Histo1D({(sample+ "_vjet0_loweta").c_str(), "QGL", 100,0,1}, "vjet_0_qgl_res", "weight")},
            {"vjet1_loweta", rdfb.Filter("vjet_1_aeta <= 2").Histo1D({(sample+ "_vjet1_loweta").c_str(), "QGL", 100,0,1}, "vjet_1_qgl_res", "weight")},
            {"vbs0_loweta", rdfb.Filter("vbs_0_aeta <= 2").Histo1D({(sample+ "_vbs0_loweta").c_str(), "QGL", 100,0,1}, "vbs_0_qgl_res", "weight")},
            {"vbs1_loweta", rdfb.Filter("vbs_1_aeta <= 2").Histo1D({(sample+ "_vbs1_loweta").c_str(), "QGL", 100,0,1}, "vbs_1_qgl_res", "weight")},
            
            {"vjet0_pt", rdfb.Histo1D({(sample+ "_vjet0_pt").c_str(), "QGL", 50,30,300}, "vjet_0_pt", "weight")},
            {"vjet1_pt", rdfb.Histo1D({(sample+ "_vjet1_pt").c_str(), "QGL", 50,30,300}, "vjet_1_pt", "weight")},
            {"vbs0_pt", rdfb.Histo1D({(sample+ "_vbs0_pt").c_str(), "QGL", 50,30,300}, "vbs_0_pt", "weight")},
            {"vbs1_pt", rdfb.Histo1D({(sample+ "_vbs1_pt").c_str(), "QGL", 50,30,300}, "vbs_1_pt", "weight")},

            {"vjet0_pt_loweta", rdfb.Filter("vjet_0_aeta <= 2").Histo1D({(sample+ "_vjet0_pt_loweta").c_str(), "QGL", 50,30,300}, "vjet_0_pt", "weight")},
            {"vjet1_pt_loweta", rdfb.Filter("vjet_1_aeta <= 2").Histo1D({(sample+ "_vjet1_pt_loweta").c_str(), "QGL", 50,30,300}, "vjet_1_pt", "weight")},
            {"vbs0_pt_loweta", rdfb.Filter("vbs_0_aeta <= 2").Histo1D({(sample+ "_vbs0_pt_loweta").c_str(), "QGL", 50,30,300}, "vbs_0_pt", "weight")},
            {"vbs1_pt_loweta", rdfb.Filter("vbs_1_aeta <= 2").Histo1D({(sample+ "_vbs1_pt_loweta").c_str(), "QGL", 50,30,300}, "vbs_1_pt", "weight")},

            {"vjet0_pt_higheta", rdfb.Filter("vjet_0_aeta > 3").Histo1D({(sample+ "_vjet0_pt_higheta").c_str(), "QGL", 50,30,300}, "vjet_0_pt", "weight")},
            {"vjet1_pt_higheta", rdfb.Filter("vjet_1_aeta > 3").Histo1D({(sample+ "_vjet1_pt_higheta").c_str(), "QGL", 50,30,300}, "vjet_1_pt", "weight")},
            {"vbs0_pt_higheta", rdfb.Filter("vbs_0_aeta > 3").Histo1D({(sample+ "_vbs0_pt_higheta").c_str(), "QGL", 50,30,300}, "vbs_0_pt", "weight")},
            {"vbs1_pt_higheta", rdfb.Filter("vbs_1_aeta > 3").Histo1D({(sample+ "_vbs1_pt_higheta").c_str(), "QGL", 50,30,300}, "vbs_1_pt", "weight")},
            
            {"vjet0_eta", rdfb.Histo1D({(sample+ "_vjet0_eta").c_str(), "QGL", 50,0,5}, "vjet_0_aeta", "weight")},
            {"vjet1_eta", rdfb.Histo1D({(sample+ "_vjet1_eta").c_str(), "QGL", 50,0,5}, "vjet_1_aeta", "weight")},
            {"vbs0_eta", rdfb.Histo1D({(sample+ "_vbs0_eta").c_str(), "QGL", 50,0,5}, "vbs_0_aeta", "weight")},
            {"vbs1_eta", rdfb.Histo1D({(sample+ "_vbs1_eta").c_str(), "QGL", 50,0,5}, "vbs_1_aeta", "weight")}
        };

        histograms.push_back(histos);
        // Trigger 
        histos["vjet0"]->Draw();
        // Save all histos
        std::for_each(histos.begin(), histos.end(), [](std::pair<string, RResultPtr<TH1D>> h){ h.second->Write();});
    }
    
    output_file.Write();
    output_file.Close();
    
    
    

    // // auto lorentz_vec = [](RVec<float> pt,RVec<float> eta, RVec<float> phi,RVec<float> mass){
    // //                         return Construct<PtEtaPhiMVector>(pt,eta,phi,mass);};
    // // auto lorentz_vec_partons = [](RVec<float> pt,RVec<float> eta, RVec<float> phi,RVec<float> mass, RVec<int> status){
    // //                         return Construct<PtEtaPhiMVector>(pt[status==1],eta[status==1],phi[status==1],mass[status==1]);};
    // // Define jets
    // // rdfr.Define("cleanjet_vecs", lorentz_vec, {"CleanJet_pt","CleanJet_eta","CleanJet_phi","CleanJet_mass"})
    // //     .Define("partons_vecs", lorentz_vec_partons, {"LHEPart_pt","LHEPart_eta","LHEPart_phi","LHEPart_mass", "LHEPart_status"})

    // //auto rdfr = rdf.Range(200);

    // // Utility to get the remaining index removing the mask
    // auto invert_indexes = [](int N, RVec<int> mask){  
    //     RVec<int> other_index;
    //     for (int i =0; i< N; i++){
    //         bool to_keep = true;
    //         for (int j : mask){
    //             if (i==j) to_keep=false;
    //         }
    //         if (to_keep) other_index.push_back(i);
    //     }
    //     return other_index;
    // };

    // auto check_duplicates = [](RVec<int> vec){
    //     auto v = Sort(vec);
    //     return std::unique(v.begin(), v.end()) != v.end();
    // };

    // auto jets_cut = [](unsigned int njets, RVec<float> & jetpt){return njets>=4 && Alt(jetpt,3,0)>30;};

    // auto rdf_aliases = add_aliases(rdf);

    // auto rdf_filter1 = rdf_aliases.Filter(jets_cut,{"nCleanJet","CleanJet_pt"}, "jets_preselection")   
    //                                 .Filter("(Lepton_isTightElectron_mvaFall17V1Iso_WP90[0]>0.5 || \
    //                                         Lepton_isTightMuon_cut_Tight_HWWW[0]>0.5)", "tight_lepton");

    // auto rdf_bveto = define_btag(rdf_filter1).Filter("bVeto");

    // auto rdf_weights = add_weights(rdf_bveto);

    // auto rdf_vars = rdf_weights.Define("parton_pt","LHEPart_pt[LHEPart_status==1 && abs(LHEPart_pdgId)<10]")
    //     .Define("parton_eta","LHEPart_eta[LHEPart_status==1 && abs(LHEPart_pdgId)<10]")
    //     .Define("parton_phi","LHEPart_phi[LHEPart_status==1 && abs(LHEPart_pdgId)<10]")
    //     .Define("parton_mass","LHEPart_mass[LHEPart_status==1 && abs(LHEPart_pdgId)<10]")
    //     .Define("parton_pdg","abs(LHEPart_pdgId)[LHEPart_status==1 && abs(LHEPart_pdgId)<10]")
    //     .Define("parton_N", "Sum(LHEPart_status==1 && abs(LHEPart_pdgId)<10)")
    //     .Define("V_partons", nearestVjet, {"parton_pt","parton_eta","parton_phi","parton_mass"})
    //     .Define("VBS_partons", invert_indexes , {"parton_N","V_partons"})
    //     .Define("pj_match", match_partons_jets, {"parton_eta","parton_phi","CleanJet_eta","CleanJet_phi", "CleanJet_pt"})
    //     .Define("parton_jets_assoc", "get<0>(pj_match)")
    //     .Define("dR_parton_jet", "get<1>(pj_match)")
    //     .Define("double_partons_tojet", check_duplicates, {"parton_jets_assoc"})
    //     .Define("N_matched_partons", [](RVec<int> l){return l.size();},{"parton_jets_assoc"});


    // auto rdf_denom = rdf_vars.Filter("!double_partons_tojet", "single_partons_to_jets")
    //                 .Filter("N_matched_partons == 4", "good_matching")
    //                 .Define("vjets_match", check_association, {"parton_jets_assoc", "V_partons", "V_jets_"+ assoc_to_check})
    //                 .Define("vbs_match", check_association, {"parton_jets_assoc", "VBS_partons", "VBS_jets_"+ assoc_to_check})
    //                 .Define("all_match", "vjets_match & vbs_match");

    // auto rdf_vjets_match = rdf_denom.Filter("vjets_match","vjets_match" );
    // auto rdf_vbs_match =   rdf_denom.Filter("vbs_match","vbs_match" );
    // auto rdf_all_match =   rdf_denom.Filter("all_match","all_match" );

    // auto rdf_signal = rdf_denom.Filter("deltaeta_vbs > 3 && mjj_vbs > 500 \
    //                                     && PuppiMET_pt > 30 && mjj_vjet > 65 && mjj_vjet < 105\
    //                                     && w_had_pt < 200");

    // auto rdf_signal_vjets_match = rdf_signal.Filter("vjets_match","vjets_match" );
    // auto rdf_signal_vbs_match =   rdf_signal.Filter("vbs_match","vbs_match" );
    // auto rdf_signal_all_match =   rdf_signal.Filter("all_match","all_match" );

    // std::vector<std::vector<RResultPtr<TH1D>>> histos {
    //     get_histograms(rdf_vjets_match, "vjets_match"),
    //     get_histograms(rdf_vbs_match, "vbs_match"),
    //     get_histograms(rdf_all_match, "all_match"),
    //     get_histograms(rdf_denom, "denom"),
    //     get_histograms(rdf_signal_vjets_match, "signal_vjets_match"),
    //     get_histograms(rdf_signal_vbs_match, "signal_vbs_match"),
    //     get_histograms(rdf_signal_all_match, "signal_all_match"),
    //     get_histograms(rdf_signal, "signal_denom"),
    // };


    // TFile output_file {output.c_str(),"RECREATE"};
    // histos[0][0]->Draw();

    // for (auto & hs: histos)
    // std::for_each(hs.begin(),hs.end(), [](RResultPtr<TH1D>& h ){h->Write();});

    // output_file.Write();
    // output_file.Close();
    
    // //rdf.Report()->Print();
    // //rdf_final.Display({"V_partons","V_jets_maxmjj_massWZ", "match_jets","vjets_match","vbs_match"},100)->Print();


}