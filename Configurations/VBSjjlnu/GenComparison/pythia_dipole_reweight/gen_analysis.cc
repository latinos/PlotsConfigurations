#include "ROOT/RDataFrame.hxx"
#include "ROOT/RResultPtr.hxx"
#include "Math/Vector4D.h"
#include <TGraph.h>
#include <TCanvas.h>
#include <TTree.h>
#include <TFile.h>
#include <TObject.h>
#include <iostream>
#include <string>
#include <map>
#include <algorithm>
#include "TString.h"
#include "TMath.h"
#include "TH1D.h"
#include <sstream> 

using namespace std;
using namespace ROOT;
using namespace ROOT::VecOps;
using namespace ROOT::Math;
using namespace ROOT::RDF;

/*
* Return the indexes of the pair nearest to W/Z invariant mass
*
*/
RVec<float> detaJJ_mjj(RVec<float>& pts,RVec<float>& etas,RVec<float>& phis,RVec<float> &masses){
    if (pts.size()<2) return {-1,-1};
    auto comb = Combinations(pts, 2);
    auto pt1 = Take(pts, comb[0]);
    auto pt2 = Take(pts, comb[1]);
    auto eta1 = Take(etas, comb[0]);
    auto eta2 = Take(etas, comb[1]);
    auto phi1 = Take(phis, comb[0]);
    auto phi2 = Take(phis, comb[1]);
    auto mass1 = Take(masses, comb[0]);
    auto mass2 = Take(masses, comb[1]);

    auto invmass = InvariantMasses(pt1,eta1,phi1,mass1,pt2,eta2,phi2,mass2);
    // for_each(invmass.begin(), invmass.end(), [](float m){cout << m <<" ";} );
    int max = ArgMax(invmass);
    // std::cout << " max: "<< max << std::endl;
    return {abs(eta1[max]-eta2[max]), invmass[max], pt1[max],pt2[max]};
}



auto deltaRcut(float deltaR){
  return [&](RVec<float>& etas,RVec<float>& phis, float lepton_eta, float lepton_phi){
        RVec<bool> pass;
        for(int i = 0; i < etas.size(); i++){
            pass.push_back( DeltaR(etas.at(i), lepton_eta, phis.at(i), lepton_phi) > deltaR);
            // std::cout << pass.at(i) ;
        }
        // std::for_each(pass.begin(), pass.end(), [](bool& a){std::cout << a << " ";});
        // std::cout << std::endl;
        return pass;
    };
}

RNode base_selection(RNode df){
    return df.Define("nTaus","Sum(abs(GenPart_pdgId)==16 && GenPart_status==1 && (GenPart_statusFlags & 1) == 1)")
            .Filter("nTaus==0", "veto tau")
            .Define("XSWeight_OTF", "baseW * genWeight")
            .Define("GenLep_pt","GenPart_pt[ (abs(GenPart_pdgId)==11 ||abs(GenPart_pdgId)==13)  && GenPart_status==1 && (GenPart_statusFlags & 1) == 1]")
            .Define("lepton_pt","GenLep_pt[0]")
            .Define("lepton_eta","GenPart_eta[(abs(GenPart_pdgId)==11 ||abs(GenPart_pdgId)==13)  && GenPart_status==1 && (GenPart_statusFlags & 1) == 1][0]")
            .Define("lepton_phi","GenPart_phi[(abs(GenPart_pdgId)==11 ||abs(GenPart_pdgId)==13)  && GenPart_status==1 && (GenPart_statusFlags & 1) == 1][0]");
}

RNode clean_genjets(RNode df, bool clean_lepton){
    if (clean_lepton){
        return df.Filter("Sum(GenLep_pt>10)==1","lepton_pt")
            // Clean the jets from lepton
            .Define("clean", deltaRcut(0.4), {"GenJet_eta","GenJet_phi","lepton_eta","lepton_phi"})
            // .Define("cleanAK8", deltaRcut(0.8), {"GenJetAK8_eta","GenJetAK8_phi","lepton_eta","lepton_phi"})
            .Define("GenJetClean_pt","GenJet_pt[clean]")
            .Define("GenJetClean_eta","GenJet_eta[clean]")
            .Define("GenJetClean_phi","GenJet_phi[clean]")
            .Define("GenJetClean_mass","GenJet_mass[clean]");
    }else{
        // Just use same name but no cleaning
        return df.Define("GenJetClean_pt","GenJet_pt")
                .Define("GenJetClean_eta","GenJet_eta")
                .Define("GenJetClean_phi","GenJet_phi")
                .Define("GenJetClean_mass","GenJet_mass");
    }
}

RNode define_vars(RNode df){
    // Filter at least 2 GenJets with Pt > 30 cleaned from leptons
    return df.Define("nGenJetClean", "GenJetClean_pt.size()")
              .Define("nGenJetClean30", "Sum(GenJetClean_pt>=30)")
              .Filter("nGenJetClean30 >= 2", "genJets")
              .Define("GenJet30_pt","GenJetClean_pt[GenJetClean_pt>=30]")
              .Define("GenJet30_eta","GenJetClean_eta[GenJetClean_pt>=30]")
              .Define("GenJet30_phi","GenJetClean_phi[GenJetClean_pt>=30]")
              .Define("GenJet30_mass","GenJetClean_mass[GenJetClean_pt>=30]")
              .Define("tagjets", detaJJ_mjj, {"GenJet30_pt","GenJet30_eta","GenJet30_phi","GenJet30_mass"})
              .Define("detajj","tagjets[0]")
              .Define("mjj","tagjets[1]")
              .Define("vbs_0_pt","tagjets[2]")
              .Define("vbs_1_pt","tagjets[3]");
}

std::vector<RResultPtr<TH1D>> get_histograms_1D(RNode df, string label){
    double ptjet [] = {30,35,40,45,50,55,60,65,70,75,80,85,90,95,100,110,120,130,150,200,500};
    double ptjet2 [] = {30,40,50,60,70,80,90,100,110,120,130,150,200,500};
    return {
        df.Histo1D({(label+ "_nGenJet").c_str(), "nGenJet", 8, 2, 10}, "nGenJet", "XSWeight_OTF"),
        df.Histo1D({(label+ "_nGenJetClean").c_str(), "nGenJet", 8, 2, 10}, "nGenJetClean", "XSWeight_OTF"),
        df.Histo1D({(label+ "_nGenJetClean30").c_str(), "nGenJet 30 GeV", 8, 2, 10}, "nGenJetClean30", "XSWeight_OTF"),
        df.Histo1D({(label+ "_detajj").c_str(), "detajj", 20, 0, 9}, "detajj","XSWeight_OTF"),
        df.Histo1D({(label+ "_mjj").c_str(), "mjj", 20, 50, 3000}, "mjj","XSWeight_OTF"),
        df.Histo1D({(label+ "_mjjzoom").c_str(), "mjj", 20, 500, 3000}, "mjj","XSWeight_OTF"),
        df.Histo1D({(label+ "_vbs0_pt").c_str(), "vbs0_pt", 30, 30, 500}, "vbs_0_pt","XSWeight_OTF"),
        df.Histo1D({(label+ "_vbs1_pt").c_str(), "vbs1_pt", 30, 30, 300}, "vbs_1_pt","XSWeight_OTF"),
        df.Histo1D({(label+ "_vbs0_pt_zoom").c_str(), "vbs0_pt", 30, 30, 300}, "vbs_0_pt","XSWeight_OTF"),
        df.Histo1D({(label+ "_vbs1_pt_zoom").c_str(), "vbs1_pt", 30, 30, 300}, "vbs_1_pt","XSWeight_OTF"),
        df.Histo1D({(label+ "_vbs1_pt_bin2").c_str(), "vbs1_pt", 20,ptjet}, "vbs_1_pt","XSWeight_OTF"),
        df.Histo1D({(label+ "_vbs1_pt_bin3").c_str(), "vbs1_pt", 13,ptjet2}, "vbs_1_pt","XSWeight_OTF"),
        df.Histo1D({(label+ "_GenLepPt").c_str(), "GenLepPt", 30, 0, 300}, "lepton_pt","XSWeight_OTF"),
    };
}

std::vector<RResultPtr<TH2D>> get_histograms_2D(RNode df, string label){
    double njets []  = {2,3,4,5,6,7,8,9,10};
    double ptjet [] = {30,35,40,45,50,55,60,65,70,75,80,85,90,95,100,110,120,130,150,200,500};
    double ptjet2 [] = {30,40,50,60,70,80,90,100,110,120,130,150,200,500};
    return {
        df.Histo2D({(label+ "_njet_vbs0_pt").c_str(), "njet_vbs0_pt", 8, 2, 10, 10, 30, 500}, "nGenJetClean30", "vbs_0_pt","XSWeight_OTF"),
        df.Histo2D({(label+ "_njet_vbs1_pt").c_str(), "njet_vbs1_pt", 8, 2, 10, 10, 30, 300}, "nGenJetClean30", "vbs_1_pt","XSWeight_OTF"),
        df.Histo2D({(label+ "_njet_vbs0_pt_bin2").c_str(), "njet_vbs0_pt", 8,njets, 20,ptjet}, "nGenJetClean30", "vbs_0_pt","XSWeight_OTF"),
        df.Histo2D({(label+ "_njet_vbs1_pt_bin2").c_str(), "njet_vbs1_pt", 8, njets,20,ptjet }, "nGenJetClean30", "vbs_1_pt","XSWeight_OTF"),
        df.Histo2D({(label+ "_njet_vbs1_pt_bin3").c_str(), "njet_vbs1_pt", 8, njets,13,ptjet2 }, "nGenJetClean30", "vbs_1_pt","XSWeight_OTF"),
        df.Histo2D({(label+ "_njet_detajj").c_str(), "njet_detajj", 8, njets, 8,0,8} , "nGenJetClean30", "detajj","XSWeight_OTF"),
        df.Histo2D({(label+ "_njet_detajj_bin2").c_str(), "njet_detajj", 8, njets, 15,0,8} , "nGenJetClean30", "detajj","XSWeight_OTF"),
       };
}

std::vector<RResultPtr<TH3D>> get_histograms_3D(RNode df, string label){
    double njets []  = {2,3,4,5,6,7,8,9,10};
    double ptjet [] = {30,35,40,45,50,55,60,65,70,75,80,85,90,95,100,110,120,130,150,200,500};
    double ptjet2 [] = {30,40,50,60,70,80,90,100,110,120,130,150,200,500};
    double ptjet3 [] = {30,40,50,65,80,100,115,130,150,200,500};
    double detabin [ ] = { 0,0.5,1.,1.5,2.,2.5,3.,3.5,4.,4.5,5.,5.5,6.,6.5,7.,7.5,8};
    double detabin2 [ ] = { 0,0.5,1.,1.5,2.,2.5,3.,3.5,4.,4.5,5.,5.5,6.,7.,10};
    return {
        df.Histo3D({(label+ "_njet_vbs0_vbs1_pt").c_str(), "njet_vbs0_vbs1_pt", 8, 2, 10, 10, 30, 300,10, 30, 300}, "nGenJetClean30", "vbs_0_pt","vbs_1_pt","XSWeight_OTF"),
        df.Histo3D({(label+ "_njet_vbs0_vbs1_pt_bin2").c_str(), "njet_vbs0_vbs1_pt_bin2", 8, njets,13,ptjet,20,ptjet }, "nGenJetClean30", "vbs_0_pt","vbs_1_pt","XSWeight_OTF"),
        df.Histo3D({(label+ "_njet_vbs0_vbs1_pt_bin3").c_str(), "njet_vbs0_vbs1_pt_bin2", 8, njets,13,ptjet,13,ptjet2 }, "nGenJetClean30", "vbs_0_pt","vbs_1_pt","XSWeight_OTF"),
        df.Histo3D({(label+ "_njet_vbs1_pt_detajj").c_str(), "njet_vbs1_pt_detajj", 8, njets,20,ptjet ,16, detabin}, "nGenJetClean30","vbs_1_pt","detajj", "XSWeight_OTF"),
        df.Histo3D({(label+ "_njet_vbs1_pt_detajj_bin2").c_str(), "njet_vbs1_pt_detajj", 8, njets,13,ptjet2 ,16, detabin}, "nGenJetClean30","vbs_1_pt","detajj", "XSWeight_OTF"),
        df.Histo3D({(label+ "_njet_vbs1_pt_detajj_bin3").c_str(), "njet_vbs1_pt_detajj", 8, njets,10,ptjet3 ,14, detabin2}, "nGenJetClean30","vbs_1_pt","detajj", "XSWeight_OTF"),
        };
}

void analyze_sample(string name, RNode df, TFile& output){
    auto base_sel = base_selection(df);
    auto df_cleanjet_cleanlepton = clean_genjets(base_sel, true);
    auto vars_incl_cleanlep = define_vars(df_cleanjet_cleanlepton);
    //auto vars_recocuts_cleanlep = vars_incl_cleanlep.Filter("detajj>=2.5 && mjj >=500 && lepton_pt > 30","reco cuts");

    // auto vars_incl_nocleanlep = define_vars(df_cleanjet_nocleanlepton);
    // auto vars_recocuts_nocleanlep = vars_incl_nocleanlep.Filter("detajj>=2.5 && mjj >=500  && lepton_pt > 30","reco cuts");

   
    std::map<string, vector<RResultPtr<TH1D>>> histos;
    std::map<string, vector<RResultPtr<TH2D>>> histos2D;
    std::map<string, vector<RResultPtr<TH3D>>> histos3D;
    histos["incl_cleanlep"] = get_histograms_1D(vars_incl_cleanlep, name);
    //histos["recocut_cleanlep"] = get_histograms_1D(vars_recocuts_cleanlep, name);
    histos2D["incl_cleanlep"] = get_histograms_2D(vars_incl_cleanlep, name);
    //histos2D["recocut_cleanlep"] = get_histograms_2D(vars_recocuts_cleanlep, name);
    histos3D["incl_cleanlep"] = get_histograms_3D(vars_incl_cleanlep, name);
    //histos3D["recocut_cleanlep"] = get_histograms_3D(vars_recocuts_cleanlep, name);
    // histos["incl_nocleanlep"] = get_histograms(vars_incl_nocleanlep, name);
    // histos["recocut_nocleanlep"] = get_histograms(vars_recocuts_nocleanlep, name);

    histos["incl_cleanlep"][0]->Draw();

    output.cd();

    for (auto & [name, hs]: histos){
        output.mkdir(name.c_str());
        output.cd(name.c_str());
        for (auto & h : hs){
            
            // Fix overflow bins
            h->SetBinContent(1, h->GetBinContent(1) + h->GetBinContent(0));
            h->SetBinContent(h->GetNbinsX(), h->GetBinContent(h->GetNbinsX()) + h->GetBinContent(h->GetNbinsX()+1));
            h->Write();
        }
        output.cd("/");
    }
    for (auto & [name, hs]: histos2D){
        output.mkdir(name.c_str());
        output.cd(name.c_str());
        for (auto & h : hs) h->Write();
        output.cd("/");
    }
    for (auto & [name, hs]: histos3D){
        output.mkdir(name.c_str());
        output.cd(name.c_str());
        for (auto & h : hs) h->Write();
        output.cd("/");
    }

    // std::cout << name << " report: " << std::endl;
    // vars_incl_cleanlep.Report()->Print();
   
}


int main(int argc, char** argv){

    string base_path_pythia { argv[1] };
    string sample { argv[2] };    
    bool mt = std::stoi(argv[3]);
    std::string output {argv[4]};

    //Enabling multithread
    if(mt){
        ROOT::EnableImplicitMT();
        int poolsize =ROOT::GetThreadPoolSize();
        cout << "Multi-threading pool: "<< poolsize << endl;
    }

    TFile output_file {output.c_str(),"RECREATE"};


    std::cout << "Opening Pythia "<<  base_path_pythia+"/nanoLatino_"+sample + "__part*" << std::endl;
    RDataFrame rdfP {"Events", base_path_pythia+"/nanoLatino_"+sample + "__part*"};
    analyze_sample("pythia", rdfP, output_file);


    std::cout << "Opening Pythia Dipole "<<  base_path_pythia+"/nanoLatino_"+sample + "_dipoleRecoil__part*" << std::endl;
    RDataFrame rdfPd {"Events", base_path_pythia+"/nanoLatino_"+sample + "_dipoleRecoil__part*"};
    analyze_sample("pythiaDipole", rdfPd, output_file);

    output_file.Close();
    
}