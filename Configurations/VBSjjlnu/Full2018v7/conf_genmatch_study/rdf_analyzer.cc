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
vector<T> parseArg(string arg, string delimiter=","){
    vector<T> result;
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

template
<typename container>
float Alt(container c, int index, float alt){
    if (index < c.size()) {
        return c[index];
    }
    else{
        return alt;
    }
}

auto add_aliases(RNode df){
    return df.Define("lepton_pt", "Lepton_pt[0]")
             .Define("jet_0_pt","CleanJet_pt[0]");
}

/*
* Return the indexes of the pair nearest to W/Z invariant mass
*
*/
RVec<int> nearestVjet(RVec<float> pts,RVec<float> etas,RVec<float> phis,RVec<float> masses){
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

tuple<RVec<int>, RVec<float>> match_partons_jets(RVec<float> part_etas,RVec<float> part_phis,
                        RVec<float> jet_etas,RVec<float> jet_phis){
    // Implementations with all partons together
    // auto comb = Combinations(part_etas, jet_etas);
    
    // auto part_eta = Take(part_etas, comb[0]);
    // auto jet_eta = Take(jet_etas, comb[1]);
    // auto part_phi = Take(part_phis, comb[0]);
    // auto jet_phi = Take(jet_phis, comb[1]);

    // auto distance = DeltaR(part_eta,jet_eta,part_phi,jet_phi);
    
    // RVec<int> part_ind = comb[0][distance < 0.4];
    // RVec<int> jet_ind = comb[1][distance < 0.4];
    
    // for_each(distance.begin(), distance.end(), [](float m){cout << m <<" ";} );
    // cout << "filter"<<endl;

    // for_each(part_ind.begin(), part_ind.end(), [](float m){cout << m <<" ";} );
    // cout << endl;
    // for_each(jet_ind.begin(), jet_ind.end(), [](float m){cout << m <<" ";} );
    // cout <<endl;
    // return {{part_ind, jet_ind}, distance[distance<0.4]};

    RVec<int> jet_ind;
    RVec<float> distances;

    // IMplementation with 1 ogni jet for each parton

    for (int ip=0; ip< part_etas.size(); ip++){
        RVec<int> ind(jet_etas.size());
        fill(ind.begin(), ind.end(), ip);
        auto part_eta = Take(part_etas, ind);
        auto part_phi = Take(part_phis, ind);

        auto distance = DeltaR(part_eta,jet_etas,part_phi,jet_phis);
        
        float min_dist = Min(distance);
        if (min_dist < 0.4){
            int assoc_jet = ArgMin(distance);
            jet_ind.push_back(assoc_jet);
            distances.push_back(min_dist);
        }
    }
    return { jet_ind, distances};
}

bool check_association(const RVec<int> & pj_assoc, const RVec<int> & ind1,const RVec<int> & ind2){
    auto corresponding_vec = Sort(Take(pj_assoc, ind1));
    //cout << pj_assoc << " | " << ind1 << " | " << corresponding_vec <<" | " << ind2 <<endl;
    return equal( corresponding_vec.begin(), corresponding_vec.end(), Sort(ind2).begin() );
}

vector<RResultPtr<TH1D>> get_histograms(RNode df, string label){
    vector<RResultPtr<TH1D>> histos;
    //histos.push_back(df.Histo1D({(label+ "_events").c_str(), "events", 1,0,1}, "1."));
    histos.push_back(df.Histo1D({(label+ "_mjj_vbs").c_str(), "Mjj VBS", 50, 0, 1000}, "mjj_vbs"));
    histos.push_back(df.Histo1D({(label+ "_mjj_vjet").c_str(), "Mjj Vjets", 50, 40, 250}, "mjj_vjet"));
    histos.push_back(df.Histo1D({(label+ "_deltaeta_vbs").c_str(), "deltaeta vbs", 50, 0, 8}, "deltaeta_vbs"));
    histos.push_back(df.Histo1D({(label+ "_lepton_pt").c_str(), "Lepton pt", 50, 0, 200}, "lepton_pt"));
    histos.push_back(df.Histo1D({(label+ "_puppimet").c_str(), "PuppiMET", 50, 0, 200}, "PuppiMET_pt"));
    histos.push_back(df.Histo1D({(label+ "_jet0pt").c_str(), "Jet 0 Pt", 50, 0, 200}, "jet_0_pt"));
    return histos;

}



int main(int argc, char** argv){

    string base_path { argv[1] };
    vector<string> samples = parseArg<string>(argv[2]);
    string assoc_to_check {argv[3]};
    bool mt = stoi(argv[4]);
    

    vector<string> files;
    transform(samples.begin(), samples.end(), back_inserter(files),
                    [base_path](string &s){ return base_path+s+"*";});

    for_each(files.begin(),files.end(), [](string & m){cout << m <<endl;});  

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
        return unique(v.begin(), v.end()) != v.end();
    };

    auto jets_cut = [](unsigned int njets, RVec<float> & jetpt){return njets>=4 && Alt<RVec<float>>(jetpt,3,0)>30;};

    auto rdf_vars = add_aliases(rdf);

    auto rdf2 = rdf_vars.Filter(jets_cut,{"nCleanJet","CleanJet_pt"}, "jets_preselection")   
        .Define("parton_pt","LHEPart_pt[LHEPart_status==1 && abs(LHEPart_pdgId)<10]")
        .Define("parton_eta","LHEPart_eta[LHEPart_status==1 && abs(LHEPart_pdgId)<10]")
        .Define("parton_phi","LHEPart_phi[LHEPart_status==1 && abs(LHEPart_pdgId)<10]")
        .Define("parton_mass","LHEPart_mass[LHEPart_status==1 && abs(LHEPart_pdgId)<10]")
        .Define("parton_pdg","abs(LHEPart_pdgId)[LHEPart_status==1 && abs(LHEPart_pdgId)<10]")
        .Define("parton_N", "Sum(LHEPart_status==1 && abs(LHEPart_pdgId)<10)")
        .Define("V_partons", nearestVjet, {"parton_pt","parton_eta","parton_phi","parton_mass"})
        .Define("VBS_partons", invert_indexes , {"parton_N","V_partons"})
        .Define("pj_match", match_partons_jets, {"parton_eta","parton_phi","CleanJet_eta","CleanJet_phi"})
        .Define("parton_jets_assoc", "get<0>(pj_match)")
        .Define("dR_parton_jet", "get<1>(pj_match)")
        .Define("double_partons_tojet", check_duplicates, {"parton_jets_assoc"})
        .Define("N_matched_partons", [](RVec<int> l){return l.size();},{"parton_jets_assoc"});


    auto rdf_singlepartontojet = rdf2.Filter("!double_partons_tojet", "single_partons_to_jets"); 
    auto rdf_allpartonsmatched = rdf_singlepartontojet.Filter("N_matched_partons ==4", "good_matching");

    auto rdf_any_match = rdf_allpartonsmatched.Define("vjets_match", check_association, {"parton_jets_assoc", "V_partons", "V_jets_"+ assoc_to_check})
                    .Define("vbs_match", check_association, {"parton_jets_assoc", "VBS_partons", "VBS_jets_"+ assoc_to_check})
                    .Define("all_match", "vjets_match & vbs_match");

    auto rdf_vjets_match = rdf_any_match.Filter("vjets_match","vjets_match" );
    auto rdf_vjets_nomatch = rdf_any_match.Filter("!vjets_match","vjets_match" );
    auto rdf_vbs_match =   rdf_any_match.Filter("vbs_match","vbs_match" );
    auto rdf_vbs_nomatch =   rdf_any_match.Filter("!vbs_match","vbs_match" );
    auto rdf_all_match =   rdf_any_match.Filter("all_match","all_match" );
    auto rdf_all_nomatch =   rdf_any_match.Filter("!all_match","all_match" );

    vector<RResultPtr<TH1D>> vjets_match_histos = get_histograms(rdf_vjets_match, "vjets_match");
    vector<RResultPtr<TH1D>> vbs_match_histos = get_histograms(rdf_vbs_match, "vbs_match");
    vector<RResultPtr<TH1D>> all_match_histos = get_histograms(rdf_all_match, "all_match");
    vector<RResultPtr<TH1D>> vjets_nomatch_histos = get_histograms(rdf_vjets_nomatch, "vjets_nomatch");
    vector<RResultPtr<TH1D>> vbs_nomatch_histos = get_histograms(rdf_vbs_nomatch, "vbs_nomatch");
    vector<RResultPtr<TH1D>> all_nomatch_histos = get_histograms(rdf_all_nomatch, "all_nomatch");


    TFile output_file {"output.root","RECREATE"};
    vjets_match_histos[0]->Draw();

    for_each(vjets_match_histos.begin(),vjets_match_histos.end(), [](RResultPtr<TH1D>& h ){h->Write();});
    for_each(vbs_match_histos.begin(),vbs_match_histos.end(), [](RResultPtr<TH1D>& h ){h->Write();});
    for_each(all_match_histos.begin(),all_match_histos.end(), [](RResultPtr<TH1D>& h ){h->Write();});
    for_each(vjets_nomatch_histos.begin(),vjets_nomatch_histos.end(), [](RResultPtr<TH1D>& h ){h->Write();});
    for_each(vbs_nomatch_histos.begin(),vbs_nomatch_histos.end(), [](RResultPtr<TH1D>& h ){h->Write();});
    for_each(all_nomatch_histos.begin(),all_nomatch_histos.end(), [](RResultPtr<TH1D>& h ){h->Write();});

    output_file.Write();
    output_file.Close();
    
    //rdf.Report()->Print();
    //rdf_final.Display({"V_partons","V_jets_maxmjj_massWZ", "match_jets","vjets_match","vbs_match"},100)->Print();


}