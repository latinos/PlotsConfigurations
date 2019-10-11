// gSystem->Load("libLatinoAnalysisMultiDraw.so")

#include "generated_code_5.h"

#include "TTree.h"
#include "TSystem.h"
#include "TROOT.h"
#include "TString.h"
#include "TFile.h"
#include "stdlib.h"

using namespace std;

namespace multidraw {
  extern thread_local TTree* currentTree;
}


TString name_temp = "";
bool initialized = false;

float loc0_mjj, loc0_mll, loc0_ptll, loc0_detajj, loc0_dphill, loc0_metpt, loc0_metphi, loc0_mti, loc0_dphilljet, loc0_dphillmet, loc0_drll, loc0_dphilmet, loc0_mr;

float loc0_ptj[100];
float loc0_etaj[100];
float loc0_phij [100];
float loc0_ptl [100];
float loc0_etal [100];
float loc0_phil [100];
float loc0_qgl [100];
//float loc0_btag [100];

int loc0_id [100];

float input[27];

void init(TTree* tree){

        tree->SetBranchAddress("mjj", &loc0_mjj);
        tree->SetBranchAddress("mll", &loc0_mll);
        tree->SetBranchAddress("ptll", &loc0_ptll);
        tree->SetBranchAddress("detajj", &loc0_detajj);
        tree->SetBranchAddress("dphill", &loc0_dphill);
        tree->SetBranchAddress("CleanJet_pt", loc0_ptj);
        tree->SetBranchAddress("CleanJet_eta", loc0_etaj);
        tree->SetBranchAddress("CleanJet_phi", loc0_phij);
        tree->SetBranchAddress("Lepton_pt", loc0_ptl);
        tree->SetBranchAddress("Lepton_eta", loc0_etal);
        tree->SetBranchAddress("Lepton_phi", loc0_phil);
        tree->SetBranchAddress("Jet_qgl", loc0_qgl);
        tree->SetBranchAddress("CleanJet_jetIdx", loc0_id);
        //tree->SetBranchAddress("Jet_btagDeepB", loc0_btag);
        tree->SetBranchAddress("PuppiMET_pt", &loc0_metpt);
        tree->SetBranchAddress("PuppiMET_phi", &loc0_metphi);
        tree->SetBranchAddress("mTi", &loc0_mti);
        tree->SetBranchAddress("dphilljet", &loc0_dphilljet);
        tree->SetBranchAddress("dphillmet", &loc0_dphillmet);
        tree->SetBranchAddress("drll", &loc0_drll);
        tree->SetBranchAddress("dphilmet", &loc0_dphilmet);
        tree->SetBranchAddress("mR", &loc0_mr);

}

float evaluate_multiclass(int entry, int nclass){

        if(name_temp != multidraw::currentTree->GetCurrentFile()->GetName()){
                name_temp = multidraw::currentTree->GetCurrentFile()->GetName();
                initialized = false;
        }

        if (!initialized){
                init(multidraw::currentTree);
                initialized = true;
        }
 
        multidraw::currentTree->GetEntry(entry);

        input[0] = loc0_mjj;
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
        //input[27] = loc0_btag[loc0_id[0]];
        //input[28] = loc0_btag[loc0_id[1]];

        float classificator = guess_digit(input, nclass);       

        return classificator;
}
