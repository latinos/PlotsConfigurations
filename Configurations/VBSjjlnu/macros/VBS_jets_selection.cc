#include "LatinoAnalysis/MultiDraw/interface/TTreeFunction.h"
#include "LatinoAnalysis/MultiDraw/interface/FunctionLibrary.h"

#include <vector>
#include <array>
#include <map>
#include <iostream>
#include <fstream>
#include <sstream>
#include <string>

#include "TVector2.h"
#include "TString.h"
#include "TFile.h"
#include "TH2.h"
#include "TH2F.h"
#include "TMath.h"
#include "Math/Vector4Dfwd.h"
#include "Math/GenVector/LorentzVector.h"
#include "Math/GenVector/PxPyPzM4D.h"
#include "Math/GenVector/PtEtaPhiM4D.h"
#include "Math/GenVector/Boost.h"
#include "Math/GenVector/VectorUtil.h"


#ifndef VBS_jets_selection_
#define VBS_jets_selection_

#include <iostream>

using namespace ROOT::Math;

class VBSJetsSelection : public multidraw::TTreeFunction {
public:
  VBSJetsSelection(bool debug);

  char const* getName() const override { return "VBSJetsSelection"; }
  TTreeFunction* clone() const override { return new VBSJetsSelection(debug_);}
  
  void beginEvent(long long iEv) override {filled=false;};
  unsigned getNdata() override { return 40; } 
  int getMultiplicity() override { return 1; }
  double evaluate(unsigned) override;

  std::pair<int,int> maxMjjPair(vector<PtEtaPhiMVector> vectors);
  std::pair<int,int> nearestMPair(vector<PtEtaPhiMVector> vectors, double mass);
  PtEtaPhiMVector recoNeutrino(PtEtaPhiMVector lep, PtEtaPhiMVector met);

  bool filled;
  bool debug_;

protected:
  void bindTree_(multidraw::FunctionLibrary&) override;
  
  UIntValueReader * nCleanJetNotFat;
  UIntValueReader * nCleanFatJet;
  FloatArrayReader* CleanJet_pt;
  FloatArrayReader* CleanJet_eta;
  FloatArrayReader* CleanJet_phi;
  FloatValueReader* PuppiMET_pt;
  FloatValueReader* PuppiMET_phi;
  FloatArrayReader* Lepton_pt;
  FloatArrayReader* Lepton_eta;
  FloatArrayReader* Lepton_phi;
  FloatArrayReader* Jet_mass;
  IntArrayReader* CleanJet_idx;
  IntArrayReader* CleanJetNotFat_idx;
  IntArrayReader* CleanFatJet_idx;
  FloatArrayReader* CleanFatJet_pt;
  FloatArrayReader* CleanFatJet_eta;
  FloatArrayReader* CleanFatJet_phi;
  FloatArrayReader* CleanFatJet_mass;

  IntValueReader * VBS_category_intree;
  IntArrayReader * V_jets_res;
  IntArrayReader * VBS_jets_res;

  void setValues();
  std::array<double,40> outputValues; 
};


VBSJetsSelection::VBSJetsSelection(bool debug) : 
  TTreeFunction(),debug_(debug){}



double
VBSJetsSelection::evaluate(unsigned iJ)
{
  
  if (!filled) setValues();
  return outputValues[iJ];
}


void
VBSJetsSelection::setValues()
{
  outputValues.fill(0.);

  int VBS_category = -1;
  // List of CleanJetvectors passing the selections 
  vector<PtEtaPhiMVector> goodjets;
  // Index in CleanJet collection of jets passing the selection
  vector<int> goodjets_idx;
  // Index in Cleanjet collection of tagged VBSjets and Vjets
  // N.B.: default to zero to help in the later stages. BE CAREFUL
  std::pair<int,int> VBS_jets_index {0,0};
  std::pair<int,int> V_jets_index  {0,0};
  PtEtaPhiMVector vbsj_0;
  PtEtaPhiMVector vbsj_1;
  PtEtaPhiMVector vj_0;
  PtEtaPhiMVector vj_1;

  if (debug_) std::cout << "------------------------" << std::endl;

  for(int ij=0; ij< *(nCleanJetNotFat->Get()); ++ij){
    int cj_idx = CleanJetNotFat_idx->At(ij);
    PtEtaPhiMVector jet = {CleanJet_pt->At(cj_idx), CleanJet_eta->At(cj_idx), 
                                CleanJet_phi->At(cj_idx), Jet_mass->At(CleanJet_idx->At(cj_idx))};
    
    bool passcut = false;
    // The first jet selected needs 50 GeV, the others 30GeV
    if ( (goodjets.size() ==0) && jet.Pt()>=50) passcut = true;
    if ( (goodjets.size() > 0) && jet.Pt()>=30) passcut = true;

    if (!passcut) continue;
    else{
        goodjets.push_back(jet);
        goodjets_idx.push_back(cj_idx);

        if (debug_){
          std::cout << "> Good jet " <<cj_idx << " pt: "<< jet.Pt() << " eta:" << jet.Eta() << " phi:" << jet.Phi() <<std::endl;
        }
    }
  }

  // Now we have the Ak4 that we can use
  // we need the ak8 if it exists
  int nfatjets = *(nCleanFatJet->Get());

  if (nfatjets ==1 && goodjets.size()>=2){
      // Boosted category
      VBS_category = 0;
      if (debug_) std::cout << "--> VBS category: boosted" << std::endl;

      auto vbs_jets = maxMjjPair(goodjets);
      // Now we have to translate the indexes in CleanJet indexes using the goojets_idx map
      VBS_jets_index = {goodjets_idx[vbs_jets.first], goodjets_idx[vbs_jets.second]};
      vbsj_0 = goodjets[vbs_jets.first];
      vbsj_1 = goodjets[vbs_jets.second];
      // The first vjet becomes the FatJet 
      vj_0 = {CleanFatJet_pt->At(0),CleanFatJet_eta->At(0), CleanFatJet_phi->At(0), CleanFatJet_mass->At(0)};
      

  }else if (nfatjets ==0 && goodjets.size()>=4){
      // Resolved category
      VBS_category = 1;
      if (debug_) std::cout << "--> VBS category: resolved" << std::endl;
      // First the VBS_jets
      auto vbs_jets = maxMjjPair(goodjets);
      // Now we have to translate the indexes in CleanJet indexes using the goojets_idx map
      VBS_jets_index = {goodjets_idx[vbs_jets.first], goodjets_idx[vbs_jets.second]};
      vbsj_0 = goodjets[vbs_jets.first];
      vbsj_1 = goodjets[vbs_jets.second];
      // Now the V-jets from the remaining jets
      // Collection needed for the new tagging algo
      vector<PtEtaPhiMVector> remaining_goodjets;
      // Collection to go back to CleanJet index
      vector<int> remaining_goodjets_idx;
      for (int ij=0; ij < goodjets.size(); ++ij){
        // Exclude the VBS jets
        if (ij != vbs_jets.first && ij != vbs_jets.second ){
          remaining_goodjets.push_back(goodjets.at(ij));
          remaining_goodjets_idx.push_back(goodjets_idx.at(ij));
        }
      }
      auto v_jets = nearestMPair(remaining_goodjets,85.7863);
      // Now we have to translate the indexes in CleanJet indexes using the goojets_idx map
      V_jets_index = {remaining_goodjets_idx[v_jets.first], remaining_goodjets_idx[v_jets.second]};
      vj_0 = remaining_goodjets[v_jets.first];
      vj_1 = remaining_goodjets[v_jets.second];
  }else{
    if (debug_) std::cout << "--> VBS category: None" << std::endl;
  }

  if (debug_) std::cout << ">>> VBS jets: " << VBS_jets_index.first << " " << VBS_jets_index.second << std::endl;
  if (debug_) std::cout << ">>> V jets: " << V_jets_index.first << " " << V_jets_index.second << std::endl;

  // Now we can fill the variables
  double mjj_vbs = -999.; double mjj_vjet = -999.;
  double deltaeta_vbs = -999.; double deltaeta_vjet = -999.; double deltaphi_vbs = -999.; double deltaphi_vjet = -999.;
  double vbs_0_pt = -999.;double vbs_0_eta= -999.; double vbs_0_phi= -999.;
  double vbs_1_pt = -999.;double vbs_1_eta= -999.; double vbs_1_phi= -999.;
  double vjet_0_pt = -999.;double vjet_0_eta= -999.; double vjet_0_phi= -999.;
  double vjet_1_pt = -999.;double vjet_1_eta= -999.; double vjet_1_phi= -999.;
  double Mtw_lep = -999.; double Zlep = -999.; double Zvjets_0 = -999.; 
  double Asym_vbs = -999.; double w_lep_pt =-999.; double w_had_pt = -999.; double Mww = -999.;
  double Centr_vbs = -999.; double Centr_ww = -999.;
  double Wlep_pt = -999.; double Wlep_eta = -999.; double Wlep_phi = -999.; double Wlep_mass = -999.;
  double Vhad_pt = -999.; double Vhad_eta = -999.; double Vhad_phi = -999.; double Vhad_mass = -999.;

  
  
  if (VBS_category>=0){
    // Get lepton and neutrino
    PtEtaPhiMVector lep = {Lepton_pt->At(0), Lepton_eta->At(0), Lepton_phi->At(0), 0. };
    PtEtaPhiMVector met = {*(PuppiMET_pt->Get()), 0., *(PuppiMET_phi->Get()), 0};
    PtEtaPhiMVector reco_neutrino = recoNeutrino(lep, met);

    mjj_vbs = (vbsj_0 + vbsj_1).M();
    
    deltaeta_vbs = abs(vbsj_0.Eta() - vbsj_1.Eta());
    deltaphi_vbs = abs(VectorUtil::DeltaPhi(vbsj_0,vbsj_1));
    
    vbs_0_pt = vbsj_0.Pt();
    vbs_0_eta = vbsj_0.Eta();
    vbs_0_phi = vbsj_0.Phi();
    vbs_1_pt = vbsj_1.Pt();
    vbs_1_eta = vbsj_1.Eta();
    vbs_1_phi = vbsj_1.Phi();
    vjet_0_pt = vj_0.Pt();
    vjet_0_eta = vj_0.Eta();
    vjet_0_phi = vj_0.Phi();
    
    double mean_eta_vbs = (vbsj_0.Eta() + vbsj_1.Eta())/2;
    Zlep = (lep.Eta() - mean_eta_vbs)/deltaeta_vbs;
    Zvjets_0 = (vj_0.Eta() - mean_eta_vbs)/deltaeta_vbs;

    Mtw_lep = TMath::Sqrt( 2 * lep.Pt() * met.Pt() * (1 - TMath::Cos(VectorUtil::DeltaPhi(lep,met)) ) );

    PtEtaPhiMVector Wlep = lep + reco_neutrino;
    PtEtaPhiMVector Vhad;

    if (VBS_category == 0 ){
      Vhad = vj_0;
      mjj_vjet = vj_0.M();
    }else if (VBS_category ==1){
      Vhad = vj_0 + vj_1;
      vjet_1_pt = vj_1.Pt();
      vjet_1_eta = vj_1.Eta();
      vjet_1_phi = vj_1.Phi();
      mjj_vjet = (vj_0 + vj_1).M();
      deltaeta_vjet = abs(vj_0.Eta() - vj_1.Eta());
      deltaphi_vjet = abs(VectorUtil::DeltaPhi(vj_0, vj_1));
    }

    Mww = (Wlep + Vhad).M();
    w_had_pt = Vhad.Pt();
    w_lep_pt = Wlep.Pt();

    Asym_vbs = (vbs_0_pt - vbs_1_pt) / (vbs_0_pt + vbs_1_pt);
    
    double eta_ww = (Wlep.Eta() + Vhad.Eta())/2;
    if (deltaeta_vbs != 0.)
        Centr_vbs = abs(deltaeta_vbs - eta_ww) / deltaeta_vbs;

    double deltaeta_plus = TMath::Max(vbs_0_eta,vbs_1_eta) - TMath::Max(Wlep.Eta(), Vhad.Eta());
    double deltaeta_minus = TMath::Min(Wlep.Eta(), Vhad.Eta()) - TMath::Min(vbs_0_eta,vbs_1_eta);
    Centr_ww = TMath::Min( deltaeta_plus, deltaeta_minus);
    
    Wlep_pt = Wlep.Pt();
    Wlep_eta = Wlep.Eta();
    Wlep_phi = Wlep.Phi();
    Wlep_mass = Wlep.M();
    Vhad_pt = Vhad.Pt();
    Vhad_eta = Vhad.Eta();
    Vhad_phi = Vhad.Phi();
    Vhad_mass = Vhad.M();

  }

  outputValues[0] = VBS_category;
  outputValues[1] = VBS_jets_index.first;
  outputValues[2] = VBS_jets_index.second;
  outputValues[3] = V_jets_index.first;
  outputValues[4] = V_jets_index.second;
  outputValues[5] = mjj_vbs;
  outputValues[6] = mjj_vjet;
  outputValues[7] = deltaeta_vbs;
  outputValues[8] = deltaphi_vbs;
  outputValues[9] = deltaeta_vjet;
  outputValues[10] = deltaphi_vjet;
  outputValues[11] =  vbs_0_pt; 
  outputValues[12] =  vbs_0_eta; 
  outputValues[13] =  vbs_0_phi; 
  outputValues[14] =  vbs_1_pt; 
  outputValues[15] =  vbs_1_eta; 
  outputValues[16] =  vbs_1_phi; 
  outputValues[17] =  vjet_0_pt; 
  outputValues[18] =  vjet_0_eta; 
  outputValues[19] =  vjet_0_phi;
  outputValues[20] =  vjet_1_pt; 
  outputValues[21] =  vjet_1_eta; 
  outputValues[22] =  vjet_1_phi; 
  outputValues[23] =  Mtw_lep ;
  outputValues[24] =  Zlep ;
  outputValues[25] =  Zvjets_0 ;
  outputValues[26] =  Asym_vbs ;
  outputValues[27] =  w_lep_pt ;
  outputValues[28] =  w_had_pt ;
  outputValues[29] =  Mww ;
  outputValues[30] =  Centr_vbs ;
  outputValues[31] =  Centr_ww ;
  outputValues[32] =  Wlep_pt;
  outputValues[33] =  Wlep_eta;
  outputValues[34] =  Wlep_phi;
  outputValues[35] =  Wlep_mass;
  outputValues[36] =  Vhad_pt;
  outputValues[37] =  Vhad_eta;
  outputValues[38] =  Vhad_phi;
  outputValues[39] =  Vhad_mass;

  vector<string> branches = {"VBS_category", "VBS_jets_index_0", "VBS_jets_index_1", 
            "V_jets_index_0","V_jets_index_1", "mjj_vbs", "mjj_vjet",
            "deltaeta_vbs","deltaphi_vbs","deltaeta_vjet","deltaphi_vjet",
            "vbs_0_pt","vbs_0_eta","vbs_0_phi","vbs_1_pt","vbs_1_eta","vbs_1_phi",
            "vjet_0_pt","vjet_0_eta","vjet_0_phi","vjet_1_pt","vjet_1_eta","vjet_1_phi", 
            "Mtw_lep","Zlep","Zvjets_0","Asym_vbs","w_lep_pt","w_had_pt",
            "Mww","Centr_vbs","Centr_ww", 
            "Wlep_pt","Wlep_eta","Wlep_phi","Wlep_mass",
            "Vhad_pt","Vhad_eta","Vhad_phi","Vhad_mass"};
  
  if (debug_) for (int i =0 ; i< 40; ++i) std::cout << "output "<< i << " "<< branches[i]<< " = "<< outputValues[i] << std::endl;

  filled = true;

  if (debug_){
    int oldcat =*(VBS_category_intree->Get());
    std::cout << "VBS category in tree: "<< oldcat << " --> new cat. " << VBS_category << std::endl;
    if (VBS_category ==1){ 
        if (VBS_jets_res->At(0) != VBS_jets_index.first) std::cout << "Different VBS 0:" << VBS_jets_res->At(0) << " --> "<<  VBS_jets_index.first << std::endl;
        if (VBS_jets_res->At(1) != VBS_jets_index.second) std::cout << "Different VBS 1:" << VBS_jets_res->At(1) << " --> "<<  VBS_jets_index.second << std::endl;
        if (V_jets_res->At(0) != V_jets_index.first) std::cout << "Different Vjet 0:" << V_jets_res->At(0) << " --> "<<  V_jets_index.first << std::endl;
        if (V_jets_res->At(1) != V_jets_index.second) std::cout << "Different Vjet 1:" << V_jets_res->At(1) << " --> "<<  V_jets_index.second << std::endl;
        }
  }
  
  if (debug_) std::cout << "VBS tagging done!" << std::endl;

  
}


std::pair<int,int> VBSJetsSelection::maxMjjPair(vector<PtEtaPhiMVector> vectors){
    std::pair<int,int> current_max;
    if (debug_) std::cout << "  - VBS jets" << std::endl;
    double maxMjj = -1.;
    for (int i=0; i< vectors.size()-1; ++i){
        for (int k=i+1; k<vectors.size() ; ++k){
            double mass = (vectors.at(i) + vectors.at(k)).M();
            if (debug_) std::cout << "  - "<< i << "," << k<< " mass: "<< mass << std::endl;
            if (mass > maxMjj){
                maxMjj = mass;
                current_max = {i, k};
            }
        }
    }
    return current_max;
}

std::pair<int,int> VBSJetsSelection::nearestMPair(vector<PtEtaPhiMVector> vectors, double mass){
    std::pair<int,int> current_nearest;
    if (debug_) std::cout << "  - V jets" << std::endl;
    double min_distance = 99999.;
    for (int i=0; i< vectors.size()-1; ++i){
        for (int k=i+1; k<vectors.size() ; ++k){
            double dist = abs(mass - (vectors.at(i) + vectors.at(k)).M());
            if (debug_) std::cout << "  - "<< i << "," << k<< " distance: "<< dist << std::endl;
            if (dist < min_distance){
                min_distance = dist;
                current_nearest = {i, k};
            }
        }
    }
    return current_nearest;
}

PtEtaPhiMVector VBSJetsSelection::recoNeutrino(PtEtaPhiMVector lep, PtEtaPhiMVector met){
  float W_mass = 80.379;
  float a = TMath::Power(W_mass,2) - TMath::Power(lep.M(),2) + 2*(lep.Px()*met.Px() + lep.Py()*met.Py());
  float A = 4*( TMath::Power(lep.E(),2)  - TMath::Power(lep.Pz(),2));
  float B = -4 * a * lep.Pz();
  float C = 4* TMath::Power(lep.E(),2) * TMath::Power(met.Pt(),2) - TMath::Power(a,2);
  float delta = TMath::Power(B,2) -4*A*C;

  float pz = 0;
  float px = met.Px();
  float py = met.Py();

  if (delta>=0){
    double sols[2]= {(-B + TMath::Sqrt(delta))/(2*A),
              (-B - TMath::Sqrt(delta))/(2*A)};

    if (abs(sols[0]) < abs(sols[1])) 
        pz = sols[0];
    else
        pz = sols[1];
    
  }else{
      pz = -B/(2*A);
  }
  // return neutrino vector
  PxPyPzMVector reco_neutrino {px, py, pz, 0};
  PtEtaPhiMVector reco_neutrino_pteta {reco_neutrino};
  return reco_neutrino_pteta;
}


void
VBSJetsSelection::bindTree_(multidraw::FunctionLibrary& _library)
{
    _library.bindBranch(Lepton_pt, "Lepton_pt");
    _library.bindBranch(Lepton_eta, "Lepton_eta");
    _library.bindBranch(Lepton_phi, "Lepton_phi");
    _library.bindBranch(PuppiMET_pt, "PuppiMET_pt");
    _library.bindBranch(PuppiMET_phi, "PuppiMET_phi");
    _library.bindBranch(CleanJet_pt, "CleanJet_pt");
    _library.bindBranch(CleanJet_eta, "CleanJet_eta");
    _library.bindBranch(CleanJet_phi, "CleanJet_phi");
    _library.bindBranch(Jet_mass,     "Jet_mass");
    _library.bindBranch(CleanJet_idx, "CleanJet_jetIdx");
    _library.bindBranch(nCleanJetNotFat, "nCleanJetNotFat");
    _library.bindBranch(CleanJetNotFat_idx, "CleanJetNotFat_jetIdx");
    _library.bindBranch(CleanFatJet_idx, "CleanFatJet_jetIdx");
    _library.bindBranch(CleanFatJet_pt, "CleanFatJet_pt");
    _library.bindBranch(CleanFatJet_eta, "CleanFatJet_eta");
    _library.bindBranch(CleanFatJet_phi, "CleanFatJet_phi");
    _library.bindBranch(CleanFatJet_mass, "CleanFatJet_mass");
    _library.bindBranch(nCleanFatJet, "nCleanFatJet");
    _library.bindBranch(VBS_category_intree, "VBS_category");
    _library.bindBranch(V_jets_res, "V_jets_maxmjj_massWZ");
    _library.bindBranch(VBS_jets_res, "VBS_jets_maxmjj_massWZ");

}



#endif