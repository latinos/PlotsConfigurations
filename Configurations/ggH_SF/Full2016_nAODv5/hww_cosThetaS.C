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

void hww_cosThetaS(TTree* tree){
 
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


float hww_cosThetaS(int entry){
	
	if(name_temp != multidraw::currentTree->GetCurrentFile()->GetName()){
		cout << "name_temp = " << name_temp << endl;
		name_temp = multidraw::currentTree->GetCurrentFile()->GetName();
		cout << "name_temp = " << name_temp << endl;
		initialized = false;
	}

	
        if (!initialized){
		hww_cosThetaS(multidraw::currentTree);
		cout << "check init" << endl;	
		initialized = true;		
        }

	multidraw::currentTree->GetEntry(entry);
        //cout << "LeptonGen = " << l_nLeptonGen << endl;
        //cout << "NeutrinoGen = " << l_nNeutrinoGen << endl;
        //        cout << "LeptonGen pt 1 = " << l_LeptonGen_pt[0] << endl;
        //        cout << "LeptonGen pt 2 = " << l_LeptonGen_pt[1] << endl;
        //            cout << "NeutrinoGen pt 1 = " << l_NeutrinoGen_pt[0] << endl;
        //            cout << "NeutrinoGen pt 2 = " << l_NeutrinoGen_pt[1] << endl;
        //if (l_nLeptonGen>=2){
        //    cout << "NeutrinoGen = " << l_nNeutrinoGen << endl;
        //    if (l_nNeutrinoGen>=2){
        //        cout << "LeptonGen pt 1 = " << l_LeptonGen_pt[0] << endl;
        //        cout << "LeptonGen pt 2 = " << l_LeptonGen_pt[1] << endl;
                if (l_LeptonGen_pt[0]>0 && l_LeptonGen_pt[1]>0){
        //            cout << "NeutrinoGen pt 1 = " << l_NeutrinoGen_pt[0] << endl;
        //            cout << "NeutrinoGen pt 2 = " << l_NeutrinoGen_pt[1] << endl;
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
     
	                float cosThetaS = TMath::Cos( p.Angle( w1 ) );
		        cout << "cosThetaS = " << cosThetaS << endl;
	                return cosThetaS;
                    }
                }
//            } 
//        } 
        cout << "Selection failed, filling with -999.0" << endl;
        return -999.;
}
