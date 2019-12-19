#include <iostream>
using namespace std;
#include "TFile.h"
#include "TLorentzVector.h"
#include "TMath.h"
#include "TROOT.h"
#include "TString.h"
#include "TSystem.h"
#include "TTree.h"
#include "TMath.h"

namespace multidraw {extern thread_local TTree* currentTree;}


bool initialized = false;
TString name_temp = "";

float leppt[100], lepeta[100],  lepphi[100];
float jetpt[100], jeteta[100],  jetphi[100], jetmass[100];
int leppdg[100];
float metpt,  metphi;
int idx_j1, idx_j2;
float Wlep_pt_Puppi,Wlep_eta_Puppi,Wlep_phi_Puppi,Wlep_mass_Puppi;

float lep1pt,lep1eta,lep1phi;
float jet1pt,jet1eta,jet1phi,jet1mass;
float jet2pt,jet2eta,jet2phi,jet2mass;
int lep1pdg;
float lepmass;
float Wjjpt,WptOvHak4M;
float output;

const Double_t MUON_MASS     = 0.106;     // [GeV]
const Double_t ELECTRON_MASS = 0.000511;  // [GeV]         

TLorentzVector MET, Wlep, lep1, lep2, jet1, jet2, Wjj, Hlnjj, lmet, ljj, ljjmet;


void init_ComputeVars(TTree* tree)
{
  tree->SetBranchAddress("Lepton_pt", &leppt);
  tree->SetBranchAddress("Lepton_eta", &lepeta);
  tree->SetBranchAddress("Lepton_phi", &lepphi);
  tree->SetBranchAddress("Lepton_pdgId", &leppdg);
  tree->SetBranchAddress("PuppiMET_pt", &metpt);
  tree->SetBranchAddress("PuppiMET_phi", &metphi);
  tree->SetBranchAddress("idx_j1", &idx_j1);
  tree->SetBranchAddress("idx_j2", &idx_j2);
  tree->SetBranchAddress("Jet_pt", &jetpt);
  tree->SetBranchAddress("Jet_eta", &jeteta);
  tree->SetBranchAddress("Jet_phi", &jetphi);
  tree->SetBranchAddress("Jet_mass", &jetmass);
  tree->SetBranchAddress("Wlep_pt_Puppi", &Wlep_pt_Puppi);
  tree->SetBranchAddress("Wlep_eta_Puppi", &Wlep_eta_Puppi);
  tree->SetBranchAddress("Wlep_phi_Puppi", &Wlep_phi_Puppi);
  tree->SetBranchAddress("Wlep_mass_Puppi", &Wlep_mass_Puppi);
}



float ComputeVars(int entry, int selector){


  if (name_temp != multidraw::currentTree->GetCurrentFile()->GetName()) {

    std::cout << " name_temp = " << name_temp << std::endl;

    name_temp = multidraw::currentTree->GetCurrentFile()->GetName();

    std::cout << " name_temp = " << name_temp << std::endl;

    initialized = false;
  }

  if (!initialized) {

    init_ComputeVars(multidraw::currentTree);

    std::cout << " check init" << std::endl;	

    initialized = true;		
  }
  

  multidraw::currentTree->GetEntry(entry);

  lep1pt = leppt[0];
  lep1eta = lepeta[0];
  lep1phi = lepphi[0];
  lep1pdg = leppdg[0];
  jet1pt = jetpt[idx_j1];
  jet1eta = jeteta[idx_j1];
  jet1phi = jetphi[idx_j1];
  jet1mass = jetmass[idx_j1];
  jet2pt = jetpt[idx_j2];
  jet2eta = jeteta[idx_j2];
  jet2phi = jetphi[idx_j2];
  jet2mass = jetmass[idx_j2];
  
  
  if (TMath::Abs(lep1pdg) == 11){
    lepmass   = ELECTRON_MASS;
  }else if (TMath::Abs(lep1pdg) == 13){
    lepmass     = MUON_MASS;
  }


  MET.SetPtEtaPhiM(metpt, 0.0, metphi, 0.0);
  Wlep.SetPtEtaPhiM(Wlep_pt_Puppi, Wlep_eta_Puppi, Wlep_phi_Puppi, Wlep_mass_Puppi);
  lep1.SetPtEtaPhiM(lep1pt, lep1eta, lep1phi, lepmass);
  jet1.SetPtEtaPhiM(jet1pt, jet1eta, jet1phi, jet1mass);
  jet2.SetPtEtaPhiM(jet2pt, jet2eta, jet2phi, jet2mass);

  ljj = lep1 + jet1 + jet2;
  
  Wjj = jet1 + jet2;
  Hlnjj = Wlep + Wjj;

  lmet = MET + lep1;
  ljjmet = MET + lep1 + jet1 + jet2;
  
  Wjjpt = Wjj.Pt();
  WptOvHak4M = TMath::Min(Wlep_pt_Puppi, Wjjpt)/Hlnjj.M();
  
  switch(selector){
  case 0:
    output = WptOvHak4M;
    break;
  case 1:
    output = Hlnjj.M();
    break;
  case 2:
    output = Wlep.Mt();
    break;
  case 3:
    output = ljjmet.M();
    break;
  case 4:
    output = ljjmet.Mt();
    break;
  case 5:
    output = lmet.Mt();
    break;
  case 6: //Angular variables
    output = TMath::Abs(ljj.DeltaPhi(MET));
    break;
  case 7: 
    output = lep1.DeltaR(Wjj);
    break;
  case 8: 
    output = TMath::Abs(lep1.DeltaPhi(Wjj));
    break;
  case 9: 
    output = jet1.DeltaR(jet2);
    break;
  case 10: 
    output = TMath::Abs(jet1.DeltaPhi(jet2));
    break;
  case 11: 
    output = TMath::Abs(jet1.Eta()-jet2.Eta());
    break;
  case 12: 
    output = TMath::Abs(lep1.Eta()-Wjj.Eta());
    break;
  }

  return output;


}
