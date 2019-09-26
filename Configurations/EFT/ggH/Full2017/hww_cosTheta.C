//compile
//root -l
//gSystem->Load("libLatinoAnalysisMultiDraw.so")
//.L hww_cosTheta.C+

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

void hww_cosTheta(TTree* tree){
 
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


float hww_cosTheta(int entry, int angle){
	
	if(name_temp != multidraw::currentTree->GetCurrentFile()->GetName()){
		cout << "name_temp = " << name_temp << endl;
		name_temp = multidraw::currentTree->GetCurrentFile()->GetName();
		cout << "name_temp = " << name_temp << endl;
		initialized = false;
	}

	
        if (!initialized){
		hww_cosTheta(multidraw::currentTree);
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
                        L1.Boost( -( H.BoostVector() ) );
                        L2.Boost( -( H.BoostVector() ) );
     
                        const TVector3 w1 = W1.Vect().Unit();
                        const TVector3 w2 = W2.Vect().Unit();
                        
                        TLorentzVector W2_in_rfrW1( W2 ); //not yet
                        TLorentzVector W1_in_rfrW2( W1 ); //not yet    
                        TLorentzVector L2_in_rfrW1( L2 ); //not yet
                        TLorentzVector L1_in_rfrW2( L1 ); //not yet   
                        W2_in_rfrW1.Boost( -( W1.BoostVector() ) );//to W1 rfr
                        W1_in_rfrW2.Boost( -( W2.BoostVector() ) );//to W2 rfr
                        L2_in_rfrW1.Boost( -( W1.BoostVector() ) );//to W1 rfr
                        L1_in_rfrW2.Boost( -( W2.BoostVector() ) );//to W2 rfr

                        const TVector3 w2_in_rfrW1 = W2_in_rfrW1.Vect().Unit();
                        const TVector3 w1_in_rfrW2 = W1_in_rfrW2.Vect().Unit();
                        const TVector3 l2_in_rfrW1 = L2_in_rfrW1.Vect().Unit();
                        const TVector3 l1_in_rfrW2 = L1_in_rfrW2.Vect().Unit();
     
	                float cosThetaS = TMath::Cos( p.Angle( w1 ) );
                        float cosThetaOne = TMath::Cos( w1_in_rfrW2.Angle( l1_in_rfrW2 ) );
                        float cosThetaTwo = TMath::Cos( w2_in_rfrW1.Angle( l2_in_rfrW1 ) );

                        if (angle == 0) {  
		            cout << "cosThetaS = " << cosThetaS << endl;
                            return cosThetaS;
                        } 
                        if (angle == 1) {
                            cout << "cosThetaOne = " << cosThetaOne << endl;
                            return cosThetaOne;
                        }  
                        if (angle == 2) {
                            cout << "cosThetaTwo = " << cosThetaTwo << endl;
                            return cosThetaTwo;
                        }
                    }
                }
//            } 
//        } 
        cout << "Selection failed, filling with -999.0" << endl;
        return -999.;
}
