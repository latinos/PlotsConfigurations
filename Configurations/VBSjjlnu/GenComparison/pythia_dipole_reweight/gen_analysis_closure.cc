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
#include "TF1.h"
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
    // for_each(pts.begin(), pts.end(), [](float m){cout << "Pt " << m <<" ";} );
    //std::cout << std::endl;
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
  return [=](RVec<float>& etas,RVec<float>& phis, float lepton_eta, float lepton_phi){
        RVec<bool> pass;
        for(int i = 0; i < etas.size(); i++){
            pass.push_back( DeltaR(etas.at(i), lepton_eta, phis.at(i), lepton_phi) > deltaR);
            //std::cout << "Jet " << i << " pass: " << pass.at(i) << std::endl;
            //std::cout << pass.at(i) ;
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

RNode clean_genjets( RNode df){
    return df.Filter("Sum(GenLep_pt>10)==1","lepton_pt")
        // Clean the jets from lepton
        .Define("clean", deltaRcut(0.4), {"GenJet_eta","GenJet_phi","lepton_eta","lepton_phi"})
        // .Define("cleanAK8", deltaRcut(0.8), {"GenJetAK8_eta","GenJetAK8_phi","lepton_eta","lepton_phi"})
        .Define("GenJetClean_pt","GenJet_pt[clean]")
        .Define("GenJetClean_eta","GenJet_eta[clean]")
        .Define("GenJetClean_phi","GenJet_phi[clean]")
        .Define("GenJetClean_mass","GenJet_mass[clean]");

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
              .Define("vbs_1_pt","tagjets[3]")
              .Define("vbs_tot_pt", "vbs_0_pt+vbs_1_pt");
}


std::vector<RResultPtr<TH1D>> get_histograms_1D( RNode df, string label){
    double ptjet [] = {30,35,40,45,50,55,60,65,70,75,80,85,90,95,100,110,120,130,150,200,500};
    double ptjet2 [] = {30,40,50,60,70,80,90,100,110,120,130,150,200,500};
    double ptjet3 [] = {60,65,70,75,80,85,90,95,100,105,110,115,120,125,130,135,140,150,160,170,180,200,250,300,350,500};
    return {
        df.Histo1D({(label+ "_nGenJet").c_str(), "nGenJet", 8, 2, 10}, "nGenJet", "Wtot"),
        df.Histo1D({(label+ "_nGenJetClean").c_str(), "nGenJet", 8, 2, 10}, "nGenJetClean", "Wtot"),
        df.Histo1D({(label+ "_nGenJetClean30").c_str(), "nGenJet 30 GeV", 8, 2, 10}, "nGenJetClean30", "Wtot"),
        // df.Histo1D({(label+ "_detajj").c_str(), "detajj", 25, 0, 9}, "detajj","Wtot"),
        df.Histo1D({(label+ "_detajj_morebins").c_str(), "detajj", 40, 0, 9}, "detajj","Wtot"),
        // df.Histo1D({(label+ "_mjj").c_str(), "mjj", 50, 0, 3000}, "mjj","Wtot"),
        df.Histo1D({(label+ "_mjj").c_str(), "mjj", 60, 50, 2000}, "mjj","Wtot"),
        df.Histo1D({(label+ "_mjj_400").c_str(), "mjj", 50, 400, 3000}, "mjj","Wtot"),
        // df.Histo1D({(label+ "_mjj_zoom").c_str(), "mjj", 100, 50, 3000}, "mjj","Wtot"),
        // df.Histo1D({(label+ "_mjj_zoom2").c_str(), "mjj", 200, 50, 1500}, "mjj","Wtot"),
        // df.Histo1D({(label+ "_mjjzoom").c_str(), "mjj", 20, 500, 3000}, "mjj","Wtot"),
        df.Histo1D({(label+ "_vbs0_pt").c_str(), "vbs0_pt", 50, 30, 500}, "vbs_0_pt","Wtot"),
        df.Histo1D({(label+ "_vbs1_pt").c_str(), "vbs1_pt", 60, 30, 300}, "vbs_1_pt","Wtot"),
        // df.Histo1D({(label+ "_vbs1_pt_bin2").c_str(), "vbs1_pt", 60, 30, 500}, "vbs_1_pt","Wtot"),
        df.Histo1D({(label+ "_vbstot_pt").c_str(), "vbstot_pt", 60, 60, 600}, "vbs_tot_pt","Wtot"),
        df.Histo1D({(label+ "_vbstot_pt_zoom").c_str(), "vbstot_pt", 80, 60, 600}, "vbs_tot_pt","Wtot"),
        // df.Histo1D({(label+ "_vbs0_pt_zoom").c_str(), "vbs0_pt", 30, 30, 300}, "vbs_0_pt","Wtot"),
        // df.Histo1D({(label+ "_vbs1_pt_zoom").c_str(), "vbs1_pt", 30, 30, 300}, "vbs_1_pt","Wtot"),
        // df.Histo1D({(label+ "_vbs1_pt_bin2").c_str(), "vbs1_pt", 20,ptjet}, "vbs_1_pt","Wtot"),
        // df.Histo1D({(label+ "_vbs1_pt_bin3").c_str(), "vbs1_pt", 13,ptjet2}, "vbs_1_pt","Wtot"),
        // df.Histo1D({(label+ "_vbstot_pt_bin3").c_str(), "vbstot_pt", 25,ptjet3}, "vbs_tot_pt","Wtot"),
        // df.Histo1D({(label+ "_GenLepPt").c_str(), "GenLepPt", 30, 0, 300}, "lepton_pt","Wtot"),
    };
}

std::vector<RResultPtr<TH2D>> get_histograms_2D(RNode df, string label){
    double njets []  = {2,3,4,5,6,7,8,9,10};
    double mjjbin [] = {400,650,900,1200,1600,3000};
    double ptjet2 [] = {60,80,100,120,150,200,600};
    double ptjet3 [] = {60,70,80,90,100,115,130,150,200,600};
    double detabin [] = {2,3,4,5,6,7,8,10};
    return {
        // df.Histo2D({(label+ "_njet_vbs0_pt").c_str(), "njet_vbs0_pt", 8, 2, 10, 10, 30, 500}, "nGenJetClean30", "vbs_0_pt","Wtot"),
        // df.Histo2D({(label+ "_njet_vbs1_pt").c_str(), "njet_vbs1_pt", 8, 2, 10, 10, 30, 300}, "nGenJetClean30", "vbs_1_pt","Wtot"),
        // df.Histo2D({(label+ "_njet_vbs0_pt_bin2").c_str(), "njet_vbs0_pt", 8,njets, 20,ptjet}, "nGenJetClean30", "vbs_0_pt","Wtot"),
        // df.Histo2D({(label+ "_njet_vbs1_pt_bin2").c_str(), "njet_vbs1_pt", 8, njets,20,ptjet }, "nGenJetClean30", "vbs_1_pt","Wtot"),
        // df.Histo2D({(label+ "_njet_vbs1_pt_bin3").c_str(), "njet_vbs1_pt", 8, njets,13,ptjet2 }, "nGenJetClean30", "vbs_1_pt","Wtot"),
        // df.Histo2D({(label+ "_njet_vbstot_pt_bin3").c_str(), "njet_vbstot_pt", 8, njets,19,ptjet3 }, "nGenJetClean30", "vbs_tot_pt","Wtot"),
        // df.Histo2D({(label+ "_vbs0_vbs1_pt").c_str(), "vbs0_vbs1_pt", 13,ptjet2,13,ptjet2 }, "vbs_0_pt", "vbs_1_pt","Wtot"),
        // df.Histo2D({(label+ "_vbs0_detajj").c_str(), "vbs0_detajj", 13,ptjet2, 8,0,8} , "vbs_0_pt", "detajj","Wtot"),
        // df.Histo2D({(label+ "_vbs1_detajj").c_str(), "vbs1_detajj", 13,ptjet2, 8,0,8} , "vbs_1_pt", "detajj","Wtot"),
        df.Histo2D({(label+ "_mjj_vbstot").c_str(), "mjj_vbstot", 5,mjjbin, 6, ptjet2 } , "mjj", "vbs_tot_pt","Wtot"),
        df.Histo2D({(label+ "_mjj_vbstot_morebins").c_str(), "mjj_vbstot", 5,mjjbin, 9, ptjet3 } , "mjj", "vbs_tot_pt","Wtot"),
        df.Histo2D({(label+ "_vbstot_detajj").c_str(), "vbstot_detajj",  9, ptjet3, 8, detabin} , "vbs_tot_pt", "detajj","Wtot"),
        // df.Histo2D({(label+ "_njet_detajj_bin2").c_str(), "njet_detajj", 8, njets, 15,0,8} , "nGenJetClean30", "detajj","Wtot"),
       };
}



auto reweight(vector<TH2D*> weights ){
   return [weights](int njets, float mjj, float vbstot){
       if (njets<=6){
           float X_mjj =mjj;
           if (X_mjj< 400) X_mjj = 400;
           if (X_mjj > 3000) X_mjj = 3000;
           float Y_vbs = vbstot;
           if (Y_vbs< 60) Y_vbs = 60;
           if (Y_vbs > 600) Y_vbs = 600;
           return weights[njets-2]->GetBinContent(weights[njets-2]->FindBin(X_mjj,Y_vbs));
       }else{   
           float X_mjj =mjj;
           if (X_mjj< 400) X_mjj = 400;
           if (X_mjj > 3000) X_mjj = 3000;
           float Y_vbs = vbstot;
           if (Y_vbs< 60) Y_vbs = 60;
           if (Y_vbs > 600) Y_vbs = 600;
           return weights[5]->GetBinContent(weights[5]->FindBin(X_mjj,Y_vbs));
       }
    };
}

void analyze_sample(string name, RNode df, TFile& output,vector<TH2D*> weights){
    auto base_sel = base_selection(df);
    auto df_cleanjet_cleanlepton = clean_genjets(base_sel);
    auto vars_incl_cleanlep = define_vars(df_cleanjet_cleanlepton);

    if (name == "pythia")
    vars_incl_cleanlep = vars_incl_cleanlep.Define("closure_weight", reweight(weights),{"nGenJetClean30","mjj","vbs_tot_pt"} )
                            .Define("Wtot", "closure_weight * XSWeight_OTF");
    else vars_incl_cleanlep = vars_incl_cleanlep.Define("Wtot", "XSWeight_OTF");

    auto recocut = vars_incl_cleanlep.Filter("mjj>=450 && detajj>2");
     
    std::map<string, vector<RResultPtr<TH1D>>> histos;
    std::map<string, vector<RResultPtr<TH2D>>> histos2D;
    // std::map<string, vector<RResultPtr<TH3D>>> histos3D;
    vector<int> njets = {2,3,4,5,6,7};
    for (int iJ = 0; iJ<njets.size();iJ++ ){
        if (iJ< njets.size()-1){
            auto df_njet = recocut.Filter([=](int nJ){return nJ==njets[iJ];}, {"nGenJetClean30"});
            histos["njet"+std::to_string(njets[iJ])] = get_histograms_1D(df_njet, name);
            histos2D["njet"+std::to_string(njets[iJ])] = get_histograms_2D(df_njet, name);
        }else{
            auto df_njet = recocut.Filter([=](int nJ){return  nJ>=njets[iJ];}, {"nGenJetClean30"});
            histos["njet"+std::to_string(njets[iJ])] = get_histograms_1D(df_njet, name);
            histos2D["njet"+std::to_string(njets[iJ])] = get_histograms_2D(df_njet, name);
        }
    }
    // inclusive
    histos["incl"] = get_histograms_1D(vars_incl_cleanlep, name);
    histos["reco"] = get_histograms_1D(recocut, name);
   
    histos["incl"][0]->Draw();

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
   
   
}


int main(int argc, char** argv){

    string base_path_pythia { argv[1] };
    string sample { argv[2] };    
    bool mt = std::stoi(argv[3]);
    std::string output {argv[4]};
    std::string reweightfile {argv[5]};

    TFile f {reweightfile.c_str(),"READ"};
    vector<TH2D*> weights;
    vector<int> njets = {2,3,4,5,6,7};
    for (auto nj : njets){
        weights.push_back((TH2D*)f.Get(("njet"+std::to_string(nj)+"/ratio_mjj_vbstot").c_str()));
        // weights_vbstot.push_back((TF1*)f.Get(("mjj100_njet"+std::to_string(nj)+"/fit_vbstot").c_str()));
    }
    
    //Enabling multithread
    if(mt){
        ROOT::EnableImplicitMT();
        int poolsize =ROOT::GetThreadPoolSize();
        cout << "Multi-threading pool: "<< poolsize << endl;
    }

    TFile output_file {output.c_str(),"RECREATE"};


    std::cout << "Opening Pythia "<<  base_path_pythia+"/nanoLatino_"+sample + "__part*" << std::endl;
    RDataFrame rdfP {"Events", base_path_pythia+"/nanoLatino_"+sample + "__part*"};
    analyze_sample("pythia", rdfP, output_file, weights);


    std::cout << "Opening Pythia Dipole "<<  base_path_pythia+"/nanoLatino_"+sample + "_dipoleRecoil__part*" << std::endl;
    RDataFrame rdfPd {"Events", base_path_pythia+"/nanoLatino_"+sample + "_dipoleRecoil__part*"};
    analyze_sample("pythiaDipole", rdfPd, output_file,weights);

    output_file.Close();
    
}