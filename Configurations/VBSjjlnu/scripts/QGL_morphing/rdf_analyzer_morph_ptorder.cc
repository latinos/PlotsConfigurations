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
#include <sstream>
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


TGraph * morph_gluon_loweta_pt0;
TGraph * morph_gluon_loweta_pt1;
TGraph * morph_gluon_higheta_pt0;
TGraph * morph_gluon_higheta_pt1;
TGraph * morph_quark_loweta_pt0;
TGraph * morph_quark_loweta_pt1;
TGraph * morph_quark_higheta_pt0;
TGraph * morph_quark_higheta_pt1;

bool do_morph_gluon_loweta_pt0;
bool do_morph_gluon_loweta_pt1;
bool do_morph_gluon_higheta_pt0;
bool do_morph_gluon_higheta_pt1;
bool do_morph_quark_loweta_pt0;
bool do_morph_quark_loweta_pt1;
bool do_morph_quark_higheta_pt0;
bool do_morph_quark_higheta_pt1;

double morph_gluon(double x, double eta, double pt ){
    double y = x;
    if (x<= 0.) return x;
    if (x>= 1.) return x;

    if (abs(eta)<3)  {
        if (pt < 75 && do_morph_gluon_loweta_pt0) {
            y = morph_gluon_loweta_pt0->Eval(x);
        }else if (pt > 75 && do_morph_gluon_loweta_pt1){
            y = morph_gluon_loweta_pt1->Eval(x);
        }
    } 
    if (abs(eta)>=3)  {
        if (pt < 75 && do_morph_gluon_higheta_pt0) {
            y = morph_gluon_higheta_pt0->Eval(x);
        }else if (pt > 75 && do_morph_gluon_higheta_pt1){
            y = morph_gluon_higheta_pt1->Eval(x);
        }
    }
    if (y >= 0. && y<=1.) return y;
    return x;
}
double morph_quark(double x, double eta, double pt){
     double y = x;
    if (x<= 0.) return x;
    if (x>= 1.) return x;

    if (abs(eta)<3)  {
        if (pt < 75 && do_morph_quark_loweta_pt0) {
            y = morph_quark_loweta_pt0->Eval(x);
        }else if (pt > 75 && do_morph_quark_loweta_pt1){
             y = morph_quark_loweta_pt1->Eval(x);
        }
    } 
    if (abs(eta)>=3)  {
        if (pt < 75 && do_morph_quark_higheta_pt0) {
            y = morph_quark_higheta_pt0->Eval(x);
        }else if (pt > 75 && do_morph_quark_higheta_pt1){
            y = morph_quark_higheta_pt1->Eval(x);
        }
    }
    if (y >= 0. && y<=1.) return y;
    return x;
}

typedef std::map<string, RResultPtr<TH1D>> HistosMap;

HistosMap getHistos(RNode rdf, string name, string sample, string jet_type){
    string qgl_var = "_qgl_morphed";
    if (jet_type =="nogen") qgl_var = "_qgl";

    return {
        //{name+"_"+jet_type+"_qgl", rdf.Histo1D({(sample + "_" +name+"_"+jet_type +"_qgl").c_str(), "QGL", 200,0,1}, ( name +qgl_var).c_str(), "weight")},
        // {name+"_"+jet_type+"_qgl_higheta", rdf.Filter( name + "_aeta > 3")
        //                                       .Histo1D({(sample + "_" + name +"_"+jet_type+"_qgl_higheta").c_str(), "QGL", 200,0,1}, (name +qgl_var).c_str(), "weight")},
        // {name+"_"+jet_type+"_qgl_loweta",  rdf.Filter( name + "_aeta <= 3")
        //                                       .Histo1D({(sample + "_" + name +"_"+jet_type+"_qgl_loweta").c_str(), "QGL", 200,0,1}, (name +qgl_var).c_str(), "weight")},
        // {name+"_"+jet_type+"_qgl_pt0", rdf.Filter(name + "_pt < 50")
        //                                   .Histo1D({(sample + "_" +name+"_"+jet_type +"_qgl_pt0").c_str(), "QGL", 200,0,1}, ( name +qgl_var).c_str(), "weight")},
        // {name+"_"+jet_type+"_qgl_pt1", rdf.Filter(name + "_pt >= 50 && "+ name + "_pt < 100")
        //                                    .Histo1D({(sample + "_" +name+"_"+jet_type +"_qgl_pt1").c_str(), "QGL", 200,0,1}, ( name +qgl_var).c_str(), "weight")},
        // {name+"_"+jet_type+"_qgl_pt2", rdf.Filter(name + "_pt >= 100")
        //                                   .Histo1D({(sample + "_" +name+"_"+jet_type +"_qgl_pt2").c_str(), "QGL", 200,0,1}, ( name +qgl_var).c_str(), "weight")},
        
        {name+"_"+jet_type+"_qgl_higheta_pt0", rdf.Filter( name + "_aeta > 3 && " + name + "_pt < 75")
                                              .Histo1D({(sample + "_" + name +"_"+jet_type+"_qgl_higheta_pt0").c_str(), "QGL", 200,0,1}, (name +qgl_var).c_str(), "weight")},
        {name+"_"+jet_type+"_qgl_higheta_pt1", rdf.Filter( name + "_aeta > 3 && " + name + "_pt >= 75")
                                              .Histo1D({(sample + "_" + name +"_"+jet_type+"_qgl_higheta_pt1").c_str(), "QGL", 200,0,1}, (name +qgl_var).c_str(), "weight")},
        {name+"_"+jet_type+"_qgl_loweta_pt0",  rdf.Filter( name + "_aeta <= 2 && " + name + "_pt < 75")
                                              .Histo1D({(sample + "_" + name +"_"+jet_type+"_qgl_loweta_pt0").c_str(), "QGL", 200,0,1}, (name +qgl_var).c_str(), "weight")},
        {name+"_"+jet_type+"_qgl_loweta_pt1",  rdf.Filter( name + "_aeta <= 2 && " + name + "_pt >= 75" )
                                              .Histo1D({(sample + "_" + name +"_"+jet_type+"_qgl_loweta_pt1").c_str(), "QGL", 200,0,1}, (name +qgl_var).c_str(), "weight")},
        
        // {name+"_"+jet_type+"_pt", rdf.Histo1D({(sample + "_" +name+"_"+jet_type+ "_pt").c_str(), "pt", 50,30,300}, (name + "_pt").c_str(), "weight")},
        // {name+"_"+jet_type+"_pt_loweta", rdf.Filter( name + "_aeta <= 3").Histo1D({(sample + "_" +name+"_"+jet_type+ "_pt_loweta").c_str(), "pt", 50,30,300}, (name + "_pt").c_str(), "weight")},
        // {name+"_"+jet_type+"_pt_higheta", rdf.Filter( name + "_aeta > 3").Histo1D({(sample + "_" +name+"_"+jet_type+ "_pt_higheta").c_str(), "pt", 50,30,300}, (name + "_pt").c_str(), "weight")},

        // {name+"_"+jet_type+"_eta", rdf.Histo1D({(sample + "_" +name+"_"+jet_type+ "_eta").c_str(), "eta", 50,0,5}, (name + "_eta").c_str(), "weight")}, 
    };
}

int main(int argc, char** argv){

    string base_file { argv[1] };
    string region {argv[2]}; 
    
    std::string output {argv[3]};
    
    // Read string of 01 as integer
    int do_morph =  std::stoi(argv[4],0,2);
    cout << "Morphing : "<< do_morph << endl;
    do_morph_gluon_loweta_pt0 = do_morph & 1;
    do_morph_gluon_loweta_pt1 = do_morph >>1 & 1;
    do_morph_gluon_higheta_pt0 = do_morph >>2 & 1;
    do_morph_gluon_higheta_pt1 = do_morph >>3 & 1;
    do_morph_quark_loweta_pt0 = do_morph >>4 & 1;
    do_morph_quark_loweta_pt1 = do_morph >>5 & 1;
    do_morph_quark_higheta_pt0 = do_morph >>6 & 1;
    do_morph_quark_higheta_pt1 = do_morph >>7 & 1;

    char * morph_file {argv[5]};
    char * mf_gluon_loweta_pt0 {argv[6]}; 
    char * mf_gluon_loweta_pt1 {argv[7]}; 
    char * mf_gluon_higheta_pt0 {argv[8]}; 
    char * mf_gluon_higheta_pt1 {argv[9]}; 
    char * mf_quark_loweta_pt0 {argv[10]}; 
    char * mf_quark_loweta_pt1 {argv[11]}; 
    char * mf_quark_higheta_pt0 {argv[12]}; 
    char * mf_quark_higheta_pt1 {argv[13]}; 

    TFile mfile {morph_file, "READ"};
    morph_gluon_loweta_pt0 = (TGraph*) mfile.Get(mf_gluon_loweta_pt0);
    morph_gluon_loweta_pt1 = (TGraph*) mfile.Get(mf_gluon_loweta_pt1);
    morph_gluon_higheta_pt0 = (TGraph*) mfile.Get(mf_gluon_higheta_pt0);
    morph_gluon_higheta_pt1 = (TGraph*) mfile.Get(mf_gluon_higheta_pt1);
    morph_quark_loweta_pt0 = (TGraph*) mfile.Get(mf_quark_loweta_pt0);
    morph_quark_loweta_pt1 = (TGraph*) mfile.Get(mf_quark_loweta_pt1);
    morph_quark_higheta_pt0 = (TGraph*) mfile.Get(mf_quark_higheta_pt0);
    morph_quark_higheta_pt1 = (TGraph*) mfile.Get(mf_quark_higheta_pt1);

    bool mt = true;
    
    //std::vector<string> samples_mc = {"VBS", "DY", "Wjets_HT", "top", "VV","VVV","VBF-V", "Vg","VgS"};
    std::vector<string> samples_mc = {"VBS", "DY", "Wjets_HT", "top", "VV","VVV", "Vg","VgS", "VBF-V"};
    std::vector<string> samples_data = {"DATA", "Fake"};
    
    //Enabling multithread
    if(mt){
        ROOT::EnableImplicitMT();
        int poolsize =ROOT::GetThreadPoolSize();
        cout << "Multi-threading pool: "<< poolsize << endl;
    }

    std::vector< HistosMap> histograms;

    TFile output_file {output.c_str(),"RECREATE"};

    for (auto & sample : samples_mc){
        std::cout << "Working on "<< sample << std::endl;
        RDataFrame rdf { region + "/tree/tree_"+sample, base_file };

        auto rdfa =  rdf.Define("j0_aeta","abs(j0_eta)")
                        .Define("j1_aeta","abs(j1_eta)")
                        .Define("j2_aeta","abs(j2_eta)")
                        .Define("j3_aeta","abs(j3_eta)");

      
        std::vector<HistosMap> rdf_all_histos;

        for (int i =0 ; i<4; i++){
            string name = "j" + std::to_string(i);
            auto df_gluon = rdfa.Filter(name + "_partfl == 21").Define(name + "_qgl_morphed", morph_gluon, {name +"_qgl", name + "_eta", name +"_pt"});
            auto df_quark = rdfa.Filter(name + "_partfl != 21").Define(name + "_qgl_morphed", morph_quark, {name +"_qgl", name + "_eta", name +"_pt"});

            auto histos_gluon = getHistos(df_gluon, name, sample,"gluon");
            auto histos_quark = getHistos(df_quark, name, sample, "quark");
            
            histograms.push_back(histos_gluon);
            histograms.push_back(histos_quark);

            rdf_all_histos.push_back( histos_gluon );
            rdf_all_histos.push_back( histos_quark );
        }
         
        // Trigger 
        rdf_all_histos[0]["j0_gluon_qgl_higheta_pt0"]->Draw();
        // Save all histos
        for ( auto & histos : rdf_all_histos) 
            std::for_each(histos.begin(), histos.end(), [](std::pair<string, RResultPtr<TH1D>> h){ h.second->Write();});
       
    }

    // Build the sum of all 
    std::map<string, TH1D> final_histos;
    for (int i =0 ; i<4; i++){
        string name = "j" + std::to_string(i);

        // final_histos[name + "_gluon_qgl"] =  {(name + "_gluon_qgl").c_str(),"QGL",200,0.,1.};
        // final_histos[name + "_gluon_qgl_higheta"] =  {(name + "_gluon_qgl_higheta").c_str(),"QGL", 200,0.,1.};
        // final_histos[name + "_gluon_qgl_loweta"] =  {(name + "_gluon_qgl_loweta").c_str(),"QGL",200,0.,1.};

        // final_histos[name + "_gluon_qgl_pt0"] =  {(name + "_gluon_qgl_pt0").c_str(),"QGL",200,0.,1.};
        // final_histos[name + "_gluon_qgl_pt1"] =  {(name + "_gluon_qgl_pt1").c_str(),"QGL",200,0.,1.};
        // final_histos[name + "_gluon_qgl_pt2"] =  {(name + "_gluon_qgl_pt2").c_str(),"QGL",200,0.,1.};

        final_histos[name + "_gluon_qgl_higheta_pt0"] =  {(name + "_gluon_qgl_higheta_pt0").c_str(),"QGL", 200,0.,1.};
        final_histos[name + "_gluon_qgl_higheta_pt1"] =  {(name + "_gluon_qgl_higheta_pt1").c_str(),"QGL", 200,0.,1.};
        final_histos[name + "_gluon_qgl_loweta_pt0"] =  {(name + "_gluon_qgl_loweta_pt0").c_str(),"QGL",200,0.,1.};
        final_histos[name + "_gluon_qgl_loweta_pt1"] =  {(name + "_gluon_qgl_loweta_pt1").c_str(),"QGL",200,0.,1.};

        // final_histos[name + "_gluon_pt"] =  {(name + "_gluon_pt").c_str(),"pt",  50,30.,300.};
        // final_histos[name + "_gluon_pt_loweta"] =  {(name + "_gluon_pt_loweta").c_str(),"pt",  50,30.,300.};
        // final_histos[name + "_gluon_pt_higheta"] =  {(name + "_gluon_pt_higheta").c_str(),"pt",  50,30.,300.};
        // final_histos[name + "_gluon_eta"] =  {(name + "_gluon_eta").c_str(),"eta", 50,0.,5.};
        
        // final_histos[name + "_quark_qgl"] =  {(name + "_quark_qgl").c_str(),"QGL",200,0.,1.};
        // final_histos[name + "_quark_qgl_higheta"] =  {(name + "_quark_qgl_higheta").c_str(),"QGL", 200,0.,1.};
        // final_histos[name + "_quark_qgl_loweta"] =  {(name + "_quark_qgl_loweta").c_str(),"QGL",200,0.,1.};

        final_histos[name + "_quark_qgl_higheta_pt0"] =  {(name + "_quark_qgl_higheta_pt0").c_str(),"QGL", 200,0.,1.};
        final_histos[name + "_quark_qgl_higheta_pt1"] =  {(name + "_quark_qgl_higheta_pt1").c_str(),"QGL", 200,0.,1.};
        final_histos[name + "_quark_qgl_loweta_pt0"] =  {(name + "_quark_qgl_loweta_pt0").c_str(),"QGL",200,0.,1.};
        final_histos[name + "_quark_qgl_loweta_pt1"] =  {(name + "_quark_qgl_loweta_pt1").c_str(),"QGL",200,0.,1.};

        // final_histos[name + "_quark_qgl_pt0"] =  {(name + "_quark_qgl_pt0").c_str(),"QGL",200,0.,1.};
        // final_histos[name + "_quark_qgl_pt1"] =  {(name + "_quark_qgl_pt1").c_str(),"QGL",200,0.,1.};
        // final_histos[name + "_quark_qgl_pt2"] =  {(name + "_quark_qgl_pt2").c_str(),"QGL",200,0.,1.};

        // final_histos[name + "_quark_pt"] =  {(name + "_quark_pt").c_str(),"pt",  50,30.,300.};
        // final_histos[name + "_quark_pt_loweta"] =  {(name + "_quark_pt_loweta").c_str(),"pt",  50,30.,300.};
        // final_histos[name + "_quark_pt_higheta"] =  {(name + "_quark_pt_higheta").c_str(),"pt",  50,30.,300.};
        // final_histos[name + "_quark_eta"] =  {(name + "_quark_eta").c_str(),"eta", 50,0.,5.};

        
    }

    for (auto & samples_h: histograms){
        for (auto & histo : samples_h ){
            final_histos[histo.first].Add(histo.second.GetPtr());
        }
    }

    // Now Data and Fake
    for (auto & sample : samples_data){
        std::cout << "Working on "<< sample << std::endl;
        RDataFrame rdf {region + "/tree_DATA/tree_"+sample, base_file};
        auto rdfb =  rdf.Define("j0_aeta","abs(j0_eta)")
                        .Define("j1_aeta","abs(j1_eta)")
                        .Define("j2_aeta","abs(j2_eta)")
                        .Define("j3_aeta","abs(j3_eta)");
        
        std::vector<HistosMap> rdf_all_histos;
        for (int i =0 ; i<4; i++){
            string name = "j" + std::to_string(i);
            HistosMap histos = getHistos(rdfb, name, sample, "nogen");
            rdf_all_histos.push_back( histos);
        }
        // Trigger 
        rdf_all_histos[0]["j0_nogen_qgl_higheta_pt0"]->Draw();
        // Save all histos
       for ( auto & histos : rdf_all_histos) 
            std::for_each(histos.begin(), histos.end(), [](std::pair<string, RResultPtr<TH1D>> h){ h.second->Write();});
    }
    
    output_file.Write();
    output_file.Close();
    
    
}