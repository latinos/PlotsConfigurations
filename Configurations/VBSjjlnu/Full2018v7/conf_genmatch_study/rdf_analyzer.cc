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

auto define_btag(RNode df){
    return df.Define("bVeto", [ ](RVec<float>& jetpt,RVec<float>& jeteta, RVec<int>&jetid,RVec<float>& jetdeepcsv  ){
                return Sum(jetpt > 20. && AbsVec(jeteta) < 2.5 && Take(jetdeepcsv, jetid) > 0.1241) == 0;},
                {"CleanJet_pt","CleanJet_eta","CleanJet_jetIdx","Jet_btagDeepB"})
            .Define("bVetoSF", [ ](RVec<float>& jetpt,RVec<float>& jeteta, RVec<int>&jetid,RVec<float>& jetdeepcsvSF  ){
                return TMath::Exp(Sum(LogVec((jetpt>20 && AbsVec(jeteta)<2.5)*Take(jetdeepcsvSF, jetid)+1*(jetpt<=20 || AbsVec(jeteta)>=2.5))));},
                 {"CleanJet_pt","CleanJet_eta","CleanJet_jetIdx","Jet_btagSF_deepcsv_shape"});
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
RVec<int> nearestVjet(RVec<float>& pts,RVec<float> &etas,RVec<float> &phis,RVec<float> & masses){
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
    int min = ArgMin(Map(invmass - 85.7863, [](float f){return abs(f);}) );
    return {comb[0][min], comb[1][min]};
    // returns indices on the list of
}

std::tuple<RVec<int>, RVec<float>> match_partons_jets(RVec<float> &part_etas,RVec<float>& part_phis,
                        RVec<float>& jet_etas,RVec<float>& jet_phis,RVec<float>& jet_pts){
    // IMplementation with 1 ogni jet for each parton
    RVec<int> jet_ind;
    RVec<float> distances;

    auto filt_jet_etas = jet_etas[jet_pts>30];
    auto filt_jet_phis = jet_phis[jet_pts>30];

    for (int ip=0; ip< part_etas.size(); ip++){
        RVec<int> ind(filt_jet_etas.size());
        std::fill(ind.begin(), ind.end(), ip);
        auto part_eta = Take(part_etas, ind);
        auto part_phi = Take(part_phis, ind);

        auto distance = DeltaR(part_eta,filt_jet_etas,part_phi,filt_jet_phis);
        
        float min_dist = Min(distance);
        if (min_dist < 0.4){
            int assoc_jet = ArgMin(distance);
            jet_ind.push_back(assoc_jet);
            distances.push_back(min_dist);
        }
    }
    return { jet_ind, distances };
}

bool check_association(const RVec<int> & pj_assoc, const RVec<int> & ind1,const RVec<int> & ind2){
    auto corresponding_vec = Sort(Take(pj_assoc, ind1));
    //cout << pj_assoc << " | " << ind1 << " | " << corresponding_vec <<" | " << ind2 <<endl;
    return std::equal( corresponding_vec.begin(), corresponding_vec.end(), Sort(ind2).begin() );
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



int main(int argc, char** argv){

    string base_path { argv[1] };
    std::vector<string> samples = parseArg<string>(argv[2]);
    string assoc_to_check {argv[3]};
    bool mt = std::stoi(argv[4]);
    std::string output {argv[5]};

    std::vector<string> files;
    std::transform(samples.begin(), samples.end(), back_inserter(files),
                    [base_path](string &s){ return base_path+s+"*";});

    std::for_each(files.begin(),files.end(), [](string & m){cout << m <<endl;});  

    //Enabling multithread
    if(mt){
        ROOT::EnableImplicitMT();
        int poolsize =ROOT::GetThreadPoolSize();
        cout << "Multi-threading pool: "<< poolsize << endl;
    }

    RDataFrame rdf {"Events", files};

    // auto lorentz_vec = [](RVec<float> pt,RVec<float> eta, RVec<float> phi,RVec<float> mass){
    //                         return Construct<PtEtaPhiMVector>(pt,eta,phi,mass);};
    // auto lorentz_vec_partons = [](RVec<float> pt,RVec<float> eta, RVec<float> phi,RVec<float> mass, RVec<int> status){
    //                         return Construct<PtEtaPhiMVector>(pt[status==1],eta[status==1],phi[status==1],mass[status==1]);};
    // Define jets
    // rdfr.Define("cleanjet_vecs", lorentz_vec, {"CleanJet_pt","CleanJet_eta","CleanJet_phi","CleanJet_mass"})
    //     .Define("partons_vecs", lorentz_vec_partons, {"LHEPart_pt","LHEPart_eta","LHEPart_phi","LHEPart_mass", "LHEPart_status"})

    //auto rdfr = rdf.Range(200);

    // Utility to get the remaining index removing the mask
    auto invert_indexes = [](int N, RVec<int> mask){  
        RVec<int> other_index;
        for (int i =0; i< N; i++){
            bool to_keep = true;
            for (int j : mask){
                if (i==j) to_keep=false;
            }
            if (to_keep) other_index.push_back(i);
        }
        return other_index;
    };

    auto check_duplicates = [](RVec<int> vec){
        auto v = Sort(vec);
        return std::unique(v.begin(), v.end()) != v.end();
    };

    auto jets_cut = [](unsigned int njets, RVec<float> & jetpt){return njets>=4 && Alt(jetpt,3,0)>30;};

    auto rdf_aliases = add_aliases(rdf);

    auto rdf_filter1 = rdf_aliases.Filter(jets_cut,{"nCleanJet","CleanJet_pt"}, "jets_preselection")   
                                    .Filter("(Lepton_isTightElectron_mvaFall17V1Iso_WP90[0]>0.5 || \
                                            Lepton_isTightMuon_cut_Tight_HWWW[0]>0.5)", "tight_lepton");

    auto rdf_bveto = define_btag(rdf_filter1).Filter("bVeto");

    auto rdf_weights = add_weights(rdf_bveto);

    auto rdf_vars = rdf_weights.Define("parton_pt","LHEPart_pt[LHEPart_status==1 && abs(LHEPart_pdgId)<10]")
        .Define("parton_eta","LHEPart_eta[LHEPart_status==1 && abs(LHEPart_pdgId)<10]")
        .Define("parton_phi","LHEPart_phi[LHEPart_status==1 && abs(LHEPart_pdgId)<10]")
        .Define("parton_mass","LHEPart_mass[LHEPart_status==1 && abs(LHEPart_pdgId)<10]")
        .Define("parton_pdg","abs(LHEPart_pdgId)[LHEPart_status==1 && abs(LHEPart_pdgId)<10]")
        .Define("parton_N", "Sum(LHEPart_status==1 && abs(LHEPart_pdgId)<10)")
        .Define("V_partons", nearestVjet, {"parton_pt","parton_eta","parton_phi","parton_mass"})
        .Define("VBS_partons", invert_indexes , {"parton_N","V_partons"})
        .Define("pj_match", match_partons_jets, {"parton_eta","parton_phi","CleanJet_eta","CleanJet_phi", "CleanJet_pt"})
        .Define("parton_jets_assoc", "get<0>(pj_match)")
        .Define("dR_parton_jet", "get<1>(pj_match)")
        .Define("double_partons_tojet", check_duplicates, {"parton_jets_assoc"})
        .Define("N_matched_partons", [](RVec<int> l){return l.size();},{"parton_jets_assoc"});


    auto rdf_denom = rdf_vars.Filter("!double_partons_tojet", "single_partons_to_jets")
                    .Filter("N_matched_partons == 4", "good_matching")
                    .Define("vjets_match", check_association, {"parton_jets_assoc", "V_partons", "V_jets_"+ assoc_to_check})
                    .Define("vbs_match", check_association, {"parton_jets_assoc", "VBS_partons", "VBS_jets_"+ assoc_to_check})
                    .Define("all_match", "vjets_match & vbs_match");

    auto rdf_vjets_match = rdf_denom.Filter("vjets_match","vjets_match" );
    auto rdf_vbs_match =   rdf_denom.Filter("vbs_match","vbs_match" );
    auto rdf_all_match =   rdf_denom.Filter("all_match","all_match" );

    auto rdf_signal = rdf_denom.Filter("deltaeta_vbs > 2.5 && mjj_vbs > 500 \
                                        && PuppiMET_pt > 30 && mjj_vjet > 65 && mjj_vjet < 105\
                                        && w_had_pt < 200");

    auto rdf_signal_vjets_match = rdf_signal.Filter("vjets_match","vjets_match" );
    auto rdf_signal_vbs_match =   rdf_signal.Filter("vbs_match","vbs_match" );
    auto rdf_signal_all_match =   rdf_signal.Filter("all_match","all_match" );

    std::vector<std::vector<RResultPtr<TH1D>>> histos {
        get_histograms(rdf_vjets_match, "vjets_match"),
        get_histograms(rdf_vbs_match, "vbs_match"),
        get_histograms(rdf_all_match, "all_match"),
        get_histograms(rdf_denom, "denom"),
        get_histograms(rdf_signal_vjets_match, "signal_vjets_match"),
        get_histograms(rdf_signal_vbs_match, "signal_vbs_match"),
        get_histograms(rdf_signal_all_match, "signal_all_match"),
        get_histograms(rdf_signal, "signal_denom"),
    };


    TFile output_file {output.c_str(),"RECREATE"};
    histos[0][0]->Draw();

    for (auto & hs: histos)
    std::for_each(hs.begin(),hs.end(), [](RResultPtr<TH1D>& h ){h->Write();});

    output_file.Write();
    output_file.Close();
    
    //rdf.Report()->Print();
    //rdf_final.Display({"V_partons","V_jets_maxmjj_massWZ", "match_jets","vjets_match","vbs_match"},100)->Print();


}