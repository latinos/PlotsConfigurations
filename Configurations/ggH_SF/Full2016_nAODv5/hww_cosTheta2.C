#include "TLorentzVector.h"
#include <TTree.h>
#include "TSystem.h"
#include "TROOT.h"
#include "TString.h"
#include "TFile.h"
#include <TMath.h>
#include "iostream"

using namespace std;

namespace multidraw {
  extern thread_local TTree* currentTree;
}

bool initialized = false;
TString name_temp = "";

UInt_t l_nLeptonGen, l_nNeutrinoGen;
Int_t l_LeptonGen_pdgId[100],  l_NeutrinoGen_pdgId[100];
Float_t l_LeptonGen_pt[100],   l_LeptonGen_eta[100],   l_LeptonGen_phi[100];
Float_t l_NeutrinoGen_pt[100], l_NeutrinoGen_eta[100], l_NeutrinoGen_phi[100];

void hww_cosTheta2(TTree* tree){
 
    tree->SetBranchAddress("nLeptonGen",        &l_nLeptonGen);
    tree->SetBranchAddress("LeptonGen_pt",      &l_LeptonGen_pt);
    tree->SetBranchAddress("LeptonGen_eta",     &l_LeptonGen_eta);
    tree->SetBranchAddress("LeptonGen_phi",     &l_LeptonGen_phi);
    tree->SetBranchAddress("LeptonGen_pdgId",   &l_LeptonGen_pdgId);
    tree->SetBranchAddress("nLeptonGen",        &l_nNeutrinoGen);
    tree->SetBranchAddress("NeutrinoGen_pt",    &l_NeutrinoGen_pt);
    tree->SetBranchAddress("NeutrinoGen_eta",   &l_NeutrinoGen_eta);
    tree->SetBranchAddress("NeutrinoGen_phi",   &l_NeutrinoGen_phi);
    tree->SetBranchAddress("NeutrinoGen_pdgId", &l_NeutrinoGen_pdgId);

}


float hww_cosTheta2(int entry){
	
	if(name_temp != multidraw::currentTree->GetCurrentFile()->GetName()){
		cout << "name_temp = " << name_temp << endl;
		name_temp = multidraw::currentTree->GetCurrentFile()->GetName();
		cout << "name_temp = " << name_temp << endl;
		initialized = false;
	}

	
        if (!initialized){
		hww_cosTheta2(multidraw::currentTree);
		cout << "check init" << endl;	
		initialized = true;		
        }

	multidraw::currentTree->GetEntry(entry);
            if (l_LeptonGen_pt[0]>0 && l_LeptonGen_pt[1]>0){
                if (l_NeutrinoGen_pt[0]>0 && l_NeutrinoGen_pt[1]>0){
                    TLorentzVector L1,L2,v1,v2,W1,W2,WR1,WR2,H;
                    L1.SetPtEtaPhiM(l_LeptonGen_pt[0],   l_LeptonGen_eta[0],   l_LeptonGen_phi[0], 0.);
                    L2.SetPtEtaPhiM(l_LeptonGen_pt[1],   l_LeptonGen_eta[1],   l_LeptonGen_phi[1], 0.);
                    v1.SetPtEtaPhiM(l_NeutrinoGen_pt[0], l_NeutrinoGen_eta[0], l_NeutrinoGen_phi[0], 0.);
                    v2.SetPtEtaPhiM(l_NeutrinoGen_pt[1], l_NeutrinoGen_eta[1], l_NeutrinoGen_phi[1], 0.);

                    if (l_LeptonGen_pdgId[0]>0 && l_NeutrinoGen_pdgId[0]<0){
                         W1=L1+v1;
                         W2=L2+v2;
                    }
                    else{
                         W1=L1+v2;
                         W2=L2+v1;
                    }
                    H=W1+W2;
                    cout << "Higgs mass = " << H.M() <<endl;

                    TLorentzVector q;
                    q.SetPxPyPzE( 0, 0, ( H.E() + H.Pz() ) / 2., ( H.E() + H.Pz() ) / 2. );
                    q.Boost( -( H.BoostVector() ) );
     
                    const TVector3 p = q.Vect().Unit();
     
                    W1.Boost( -( H.BoostVector() ) ); // go to Higgs RFR
                    W2.Boost( -( H.BoostVector() ) );
     
                    const TVector3 w1 = W1.Vect().Unit();
                    const TVector3 w2 = W2.Vect().Unit();
     
                    // Boost the leptons into the Higgs rest frame:
                    TLorentzVector vl2( l2 );
                    vl2.Boost( -( H.BoostVector() ) );
                 
                    //Costh
                    TLorentzVector W1_rfr_W2 = W1; // it's still in H RFR
                    W1_rfr_W2.Boost( -( W2.BoostVector() ) ); // now it's in W2 RFR (both W1 and W2 are still in H RFR)
                    const TVector3 w1_rfr_W2 = W1_rfr_W2.Vect();
                 
                    vl2.Boost( -( W2.BoostVector() ) ); // W1 and W2 still in H RFR: but leptons in their W's reference frame
                 
                    float cosTheta2 = - ( w1_rfr_W2.Dot( vl2.Vect() ) /
                                          TMath::Abs( w1_rfr_W2.Mag() * vl2.Vect().Mag() ) );

                    cout << "cosTheta2 = " << cosTheta2 << endl;

	            return cosTheta2;
                }
            }
        cout << "Selection failed, filling with -999.0" << endl;
        return -999.;
}
