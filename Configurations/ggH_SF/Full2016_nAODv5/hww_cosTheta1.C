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

void hww_cosTheta1(TTree* tree){
 
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


float hww_cosTheta1(int entry){
	
	if(name_temp != multidraw::currentTree->GetCurrentFile()->GetName()){
		cout << "name_temp = " << name_temp << endl;
		name_temp = multidraw::currentTree->GetCurrentFile()->GetName();
		cout << "name_temp = " << name_temp << endl;
		initialized = false;
	}

	
        if (!initialized){
		hww_cosTheta1(multidraw::currentTree);
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
     
                    // Boost the fermions into the Higgs rest frame:
                    TLorentzVector vl1( l1 );
                    vl1.Boost( -( H.BoostVector() ) ); // go to Higgs RFR
                 
                    //Costh1,2
                    TLorentzVector W2_rfr_W1 = W2; // it's still in H RFR
                    W2_rfr_W1.Boost( -( W1.BoostVector() ) ); // now it's in W1 RFR (both W1 and W2 are in H RFR)
                    const TVector3 w2_rfr_W1 = W2_rfr_W1.Vect();
                 
                    vl1.Boost( -( W1.BoostVector() ) ); // W1 and W2 still in H RFR: but leptons in their Z's reference frame
                 
                    float cosTheta1 = - ( w2_rfr_W1.Dot( vl1.Vect() ) /
                                          TMath::Abs( w2_rfr_W1.Mag() * vl1.Vect().Mag() ) );

                    cout << "cosTheta1 = " << cosTheta1 << endl;

	            return cosTheta1;
                }
            }
        cout << "Selection failed, filling with -999.0" << endl;
        return -999.;
}
