#include "generated_code.h"

#include <TCanvas.h>
#include <TTree.h>
#include <TBranch.h>
#include <TFile.h>
#include <iostream>

void Evaluate(int flag){

TFile *f1 = new TFile ("/eos/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano/Summer16_102X_nAODv4_Full2016v5/MCl1loose2016v5__MCCorr2016v5__l2loose__l2tightOR2016v5/nanoLatino_VBFHToWWTo2L2Nu_M125_CUETDown__part0.root");
//TFile *f1 = new TFile ("nanoLatino_TTTo2L2Nu_PSWeights_CP5Up__part0.root");
        TTree *d1 = (TTree*)f1->Get("Events");



float loc0_mjj, loc0_mll, loc0_ptll, loc0_detajj, loc0_dphill, loc0_metpt, loc0_metphi, loc0_mti, loc0_dphilljet, loc0_dphillmet, loc0_drll, loc0_dphilmet, loc0_mr;


float loc0_ptj[100];
float loc0_etaj[100];
float loc0_phij [100];
float loc0_ptl [100];
float loc0_etal [100];
float loc0_phil [100];
float loc0_qgl [100];
float loc0_btag [100];
int loc0_id [100];


d1->SetBranchAddress("mjj", &loc0_mjj);
d1->SetBranchAddress("mll", &loc0_mll);
d1->SetBranchAddress("ptll", &loc0_ptll);
d1->SetBranchAddress("detajj", &loc0_detajj);
d1->SetBranchAddress("dphill", &loc0_dphill);
d1->SetBranchAddress("CleanJet_pt", loc0_ptj);
d1->SetBranchAddress("CleanJet_eta", loc0_etaj);
d1->SetBranchAddress("CleanJet_phi", loc0_phij);
d1->SetBranchAddress("Lepton_pt", loc0_ptl);
d1->SetBranchAddress("Lepton_eta", loc0_etal);
d1->SetBranchAddress("Lepton_phi", loc0_phil);
d1->SetBranchAddress("Jet_qgl", loc0_qgl);
d1->SetBranchAddress("CleanJet_jetIdx", loc0_id);
d1->SetBranchAddress("Jet_btagDeepB", loc0_btag);
d1->SetBranchAddress("PuppiMET_pt", &loc0_metpt);
d1->SetBranchAddress("PuppiMET_phi", &loc0_metphi);
d1->SetBranchAddress("mTi", &loc0_mti);
d1->SetBranchAddress("dphilljet", &loc0_dphilljet);
d1->SetBranchAddress("dphillmet", &loc0_dphillmet);
d1->SetBranchAddress("drll", &loc0_drll);
d1->SetBranchAddress("dphilmet", &loc0_dphilmet);
d1->SetBranchAddress("mR", &loc0_mr);


TH1F* h1 = new TH1F("h1","h1",20, 0.,1.);
float input[29];

for(int i=0; i < d1->GetEntries(); i++){

        d1->GetEntry(i); 

        input[0] =  loc0_mjj;
        input[1] = loc0_mll;
        input[2] = loc0_ptll;
        input[3] = loc0_detajj;
        input[4] = loc0_dphill;
        input[5] = loc0_metpt;
        input[6] = loc0_metphi;
        input[7] = loc0_mti;
        input[8] = loc0_dphilljet;
        input[9] = loc0_dphillmet;
        input[10] = loc0_drll;
        input[11] = loc0_dphilmet;
        input[12] = loc0_mr;

        input[13] = loc0_ptl[0];
        input[14] = loc0_ptl[1];
        input[15] = loc0_etal[0];
        input[16] = loc0_etal[1];
        input[17] = loc0_phil[0];
        input[18] = loc0_phil[1];

        input[19] = loc0_ptj[0];
        input[20] = loc0_ptj[1];
        input[21] = loc0_etaj[0];
        input[22] = loc0_etaj[1];
        input[23] = loc0_phij[0];
        input[24] = loc0_phij[1];

        input[25] = loc0_qgl[loc0_id[0]];
        input[26] = loc0_qgl[loc0_id[1]];              

        input[27] = loc0_btag[loc0_id[0]];
        input[28] = loc0_btag[loc0_id[1]];


        float classificator = guess_digit(input, flag); 
        //cout << classificator << endl;
        h1->Fill(classificator);

}

h1->Draw();

}

