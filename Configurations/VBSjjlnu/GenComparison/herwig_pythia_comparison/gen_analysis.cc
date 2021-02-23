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

template<class T>
std::vector<T> parseArg(string arg, string delimiter=","){
    std::vector<T> result;
    size_t pos = 0;
    string token;
    while ((pos = arg.find(delimiter)) != string::npos) {
        token = arg.substr(0, pos);
        result.push_back(token);
        arg.erase(0, pos + delimiter.length());
    }
    // Last string
    result.push_back(token);
    return result;
}


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

auto add_aliases(RNode df){
    return df.Define("lepton_pt", "Lepton_pt[0]")
             .Define("jet_0_pt","CleanJet_pt[0]");
}

auto add_weights(RNode df){
    return df.Define("LepWPWeight","Lepton_tightElectron_mvaFall17V1Iso_WP90_IdIsoSF[0]*Lepton_tightMuon_cut_Tight_HWWW_IdIsoSF[0]" )
             .Define("SFweight", "LepWPWeight * puWeight * TriggerEffWeight_1l * Lepton_RecoSF[0] * bVetoSF * BoostedWtagSF_nominal")
             .Define("weight", "SFweight * XSWeight * METFilter_MC * Lepton_genmatched[0]");
}

/*
* Return the indexes of the pair nearest to W/Z invariant mass
*
*/
double detaJJ(RVec<float>& pts,RVec<float>& etas,RVec<float>& phis,RVec<float> &masses){
    if (pts.size()<2) return -1;
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
    //for_each(invmass.begin(), invmass.end(), [](float m){cout << m <<" ";} );
    //cout << endl;
    int max = ArgMax(Map(invmass, [](float f){return abs(f);}) );
    return abs(eta1[max]-eta2[max]);
}

bool check_association(const RVec<int> & pj_assoc, const RVec<int> & ind1,const RVec<int> & ind2){
    auto corresponding_vec = Sort(Take(pj_assoc, ind1));
    //cout << pj_assoc << " | " << ind1 << " | " << corresponding_vec <<" | " << ind2 <<endl;
    return std::equal( corresponding_vec.begin(), corresponding_vec.end(), Sort(ind2).begin() );
}

RNode define_vars(RNode df){
    return df.Define("nGenJet30", "Sum(GenJet_pt>30)")
             .Define("nGenJetAK8_30", "Sum(GenJetAK8_pt>30)")
             .Define("nGenJetAK8_200", "Sum(GenJetAK8_pt>200)")
             .Define("GenJetAK8_mass_200pt", "GenJetAK8_mass[GenJetAK8_pt>200]")
             .Define("GenJetAK8_mass_1st", [](RVec<float> mass){ if (mass.size()>0) return mass.at(0);else return static_cast<float>(-1.); },{"GenJetAK8_mass_200pt"} )
             .Define("XSWeight_OTF", "baseW * genWeight")
             .Define("GenJet30_pt","GenJet_pt[GenJet_pt>30]")
             .Define("GenJet30_eta","GenJet_pt[GenJet_pt>30]")
             .Define("GenJet30_phi","GenJet_pt[GenJet_pt>30]")
             .Define("GenJet30_mass","GenJet_pt[GenJet_pt>30]")
             .Define("GenLepPt","GenPart_pt[(abs(GenPart_pdgId)==11 ||abs(GenPart_pdgId)==13) && GenPart_status==1][0]")
             .Define("detaGenjj", detaJJ, {"GenJet30_pt","GenJet30_eta","GenJet30_phi","GenJet30_mass"}); 
}

std::vector<RResultPtr<TH1D>> get_histograms(RNode df, string label){
    return {
        df.Histo1D({(label+ "_nGenJet").c_str(), "nGenJet", 10, 0, 10}, "nGenJet", "XSWeight_OTF"),
        df.Histo1D({(label+ "_nGenJet30").c_str(), "nGenJet 30 GeV", 10, 0, 10}, "nGenJet30", "XSWeight_OTF"),
        df.Histo1D({(label+ "_nGenJetAK8_30").c_str(), "nGenJet 30 GeV", 10, 0, 10}, "nGenJetAK8_30","XSWeight_OTF"),
        df.Histo1D({(label+ "_nGenJetAK8_200").c_str(), "nGenJet 200 GeV", 10, 0, 10}, "nGenJetAK8_200","XSWeight_OTF"),
        df.Histo1D({(label+ "_GenJetAK8_mass").c_str(), "GenJetAK8_mass", 10, 0, 10}, "GenJetAK8_mass_1st","XSWeight_OTF"),
        df.Histo1D({(label+ "_detajj").c_str(), "detajj", 20, 0, 9}, "detaGenjj","XSWeight_OTF"),
        df.Histo1D({(label+ "_GenLepPt").c_str(), "GenLepPt", 30, 0, 300}, "GenLepPt","XSWeight_OTF"),
     };
}


int main(int argc, char** argv){

    string base_path_herwig { argv[1] };
    string base_path_pythia { argv[2] };
    string sample { argv[3] };    
    bool mt = std::stoi(argv[4]);
    std::string output {argv[5]};

    //Enabling multithread
    if(mt){
        ROOT::EnableImplicitMT();
        int poolsize =ROOT::GetThreadPoolSize();
        cout << "Multi-threading pool: "<< poolsize << endl;
    }

    RDataFrame rdfH {"Events", base_path_herwig+"/nanoLatino_"+sample + "_herwig7__part*"};
    RDataFrame rdfP {"Events", base_path_pythia+"/nanoLatino_"+sample + "__part*"};
    
    auto Hvars = define_vars(rdfH);
    auto Pvars = define_vars(rdfP);

    auto Hhistos = get_histograms(Hvars, "herwig");
    auto Phistos = get_histograms(Pvars, "pythia");

    std::cout << "Herwig run" << std::endl;
    Hhistos[0]->Draw();
    std::cout << "Pythia run" << std::endl;
    Phistos[0]->Draw();

    TFile output_file {output.c_str(),"RECREATE"};

    for (auto & hs: Hhistos) hs->Write();
    for (auto & hs: Phistos) hs->Write();

    output_file.Write();
    output_file.Close();
    
    rdfP.Report()->Print();

}