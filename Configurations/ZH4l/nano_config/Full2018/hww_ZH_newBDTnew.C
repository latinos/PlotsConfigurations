// To compile 
// root -l
// gSystem->Load("libLatinoAnalysisMultiDraw.so")
// .L hww_VBF_MYmvaBDTG.C+ 

#include "TMVA/Reader.h"
//#include "TLorentzVector.h"
#include "TTree.h"
#include "TSystem.h"
#include "TROOT.h"
#include "TString.h"
#include "TFile.h"
#include "TChain.h"

using namespace std;

namespace multidraw {
  extern thread_local TTree* currentTree;
}

TMVA::Reader* myreaderBDT = new TMVA::Reader();
bool initialized = false;
TString name_temp = "";
//TTree* latino [100];
//
float loc_pt1,loc_PuppiMET_pt, loc_pt2, loc_pt3, loc_pt4, loc_z0DeltaPhi_zh4l, loc_z0DeltaR_zh4l, loc_z1DeltaR_zh4l, loc_lep1Mt_zh4l, loc_lep2Mt_zh4l, loc_lep3Mt_zh4l, loc_lep4Mt_zh4l, loc_z0Mass_zh4l, loc_z1Mass_zh4l, loc_mllll_zh4l, loc_z1Mt_zh4l, loc_z1DeltaPhi_zh4l,loc_z1dPhi_lep1MET_zh4l, loc_z1dPhi_lep2MET_zh4l;

float loc0_pt1, loc0_PuppiMET_pt,loc0_pt2, loc0_pt3, loc0_pt4, loc0_z0DeltaPhi_zh4l, loc0_z0DeltaR_zh4l, loc0_z1DeltaR_zh4l, loc0_lep1Mt_zh4l, loc0_lep2Mt_zh4l, loc0_lep3Mt_zh4l, loc0_lep4Mt_zh4l, loc0_z0Mass_zh4l, loc0_z1Mass_zh4l, loc0_mllll_zh4l, loc0_z1Mt_zh4l, loc0_z1DeltaPhi_zh4l,loc0_z1dPhi_lep1MET_zh4l, loc0_z1dPhi_lep2MET_zh4l;

float loc0_ptl[100];

//float loc0_mjj, loc0_mll, loc0_ptll, loc0_detajj, loc0_dphill, loc0_ptj1, loc0_ptj2, loc0_etaj1, loc0_etaj2, loc0_phij1, loc0_phij2, loc0_ptl1, loc0_ptl2, loc0_etal1, loc0_etal2, loc0_phil1, loc0_phil2, loc0_qgl1, loc0_qgl2;

/*float loc0_ptj[100];
float loc0_etaj[100];
float loc0_phij [100];
float loc0_ptl [100];
float loc0_etal [100];
float loc0_phil [100];
float loc0_qgl [100];
int loc0_id [100];


float mlj(float ptl, float etal, float phil, float ptj, float etaj, float phij){
        TLorentzVector l;
        TLorentzVector j;
        l.SetPtEtaPhiM(ptl, etal, phil, 0.);
        j.SetPtEtaPhiM(ptj, etaj, phij, 0.);

        return (l+j).M();
}
*/
void initmyreaderBDT(TTree* tree){

/*
        TString condizione0 = "(Alt$(Jet_qgl[0],-1)*(CleanJet_jetIdx[0]==0) + Alt$(Jet_qgl[1],-1)*(CleanJet_jetIdx[0]==1) + Alt$(Jet_qgl[2],-1)*(CleanJet_jetIdx[0]==2) + Alt$(Jet_qgl[3],-1)*(CleanJet_jetIdx[0]==3) + Alt$(Jet_qgl[4],-1)*(CleanJet_jetIdx[0]==4) + Alt$(Jet_qgl[5],-1)*(CleanJet_jetIdx[0]==5) + Alt$(Jet_qgl[6],-1)*(CleanJet_jetIdx[0]==6) + Alt$(Jet_qgl[7],-1)*(CleanJet_jetIdx[0]==7) + Alt$(Jet_qgl[8],-1)*(CleanJet_jetIdx[0]==8) + (CleanJet_jetIdx[0]>8)*(-1))";
        TString condizione1 = "(Alt$(Jet_qgl[0],-1)*(CleanJet_jetIdx[1]==0) + Alt$(Jet_qgl[1],-1)*(CleanJet_jetIdx[1]==1) + Alt$(Jet_qgl[2],-1)*(CleanJet_jetIdx[1]==2) + Alt$(Jet_qgl[3],-1)*(CleanJet_jetIdx[1]==3) + Alt$(Jet_qgl[4],-1)*(CleanJet_jetIdx[1]==4) + Alt$(Jet_qgl[5],-1)*(CleanJet_jetIdx[1]==5) + Alt$(Jet_qgl[6],-1)*(CleanJet_jetIdx[1]==6) + Alt$(Jet_qgl[7],-1)*(CleanJet_jetIdx[1]==7) + Alt$(Jet_qgl[8],-1)*(CleanJet_jetIdx[1]==8) + (CleanJet_jetIdx[1]>8)*(-1))";
  */      
 //       tree->SetBranchAddress("pt1", &loc0_pt1);
//        tree->SetBranchAddress("Lepton_pt[1]", &loc0_pt2);
//        tree->SetBranchAddress("Lepton_pt[2]", &loc0_pt3);
        tree->SetBranchAddress("Lepton_pt", &loc0_ptl);
//        tree->SetBranchAddress("z0DeltaPhi_zh4l", &loc0_z0DeltaPhi_zh4l);
        tree->SetBranchAddress("z0DeltaR_zh4l", &loc0_z0DeltaR_zh4l);
        tree->SetBranchAddress("z1DeltaR_zh4l", &loc0_z1DeltaR_zh4l);
        tree->SetBranchAddress("lep1Mt_zh4l", &loc0_lep1Mt_zh4l);
        tree->SetBranchAddress("lep2Mt_zh4l",&loc0_lep2Mt_zh4l);
//        tree->SetBranchAddress("lep3Mt_zh4l", &loc0_lep3Mt_zh4l);
//        tree->SetBranchAddress("lep4Mt_zh4l", &loc0_lep4Mt_zh4l);
        tree->SetBranchAddress("z0Mass_zh4l", &loc0_z0Mass_zh4l);
        tree->SetBranchAddress("z1Mass_zh4l", &loc0_z1Mass_zh4l);
        tree->SetBranchAddress("mllll_zh4l", &loc0_mllll_zh4l);
        tree->SetBranchAddress("z1Mt_zh4l", &loc0_z1Mt_zh4l);
        tree->SetBranchAddress("z1DeltaPhi_zh4l", &loc0_z1DeltaPhi_zh4l);
//        tree->SetBranchAddress("z1dPhi_lep1MET_zh4l", &loc0_z1dPhi_lep1MET_zh4l);
        tree->SetBranchAddress("PuppiMET_pt", &loc0_PuppiMET_pt);


	myreaderBDT->AddVariable("Lepton_pt[0]", &loc_pt1);
//	myreaderBDT->AddVariable("Lepton_pt[1]", &loc_pt2);
//	myreaderBDT->AddVariable("Lepton_pt[2]", &loc_pt3);
	myreaderBDT->AddVariable("Lepton_pt[3]", &loc_pt4);
//	myreaderBDT->AddVariable("z0DeltaPhi_zh4l", &loc_z0DeltaPhi_zh4l);
	myreaderBDT->AddVariable("z0DeltaR_zh4l", &loc_z0DeltaR_zh4l);
	myreaderBDT->AddVariable("z1DeltaR_zh4l", &loc_z1DeltaR_zh4l);
	myreaderBDT->AddVariable("lep1Mt_zh4l", &loc_lep1Mt_zh4l);
	myreaderBDT->AddVariable("lep2Mt_zh4l", &loc_lep2Mt_zh4l);
//	myreaderBDT->AddVariable("lep3Mt_zh4l", &loc_lep3Mt_zh4l);
//	myreaderBDT->AddVariable("lep4Mt_zh4l", &loc_lep4Mt_zh4l);
	myreaderBDT->AddVariable("z0Mass_zh4l", &loc_z0Mass_zh4l);
	myreaderBDT->AddVariable("z1Mass_zh4l", &loc_z1Mass_zh4l);
	myreaderBDT->AddVariable("mllll_zh4l", &loc_mllll_zh4l);
	myreaderBDT->AddVariable("z1Mt_zh4l", &loc_z1Mt_zh4l);
	myreaderBDT->AddVariable("z1DeltaPhi_zh4l", &loc_z1DeltaPhi_zh4l);
        myreaderBDT->AddVariable("PuppiMET_pt", &loc_PuppiMET_pt); 
//        myreaderBDT->AddVariable("z1dPhi_lep2MET_zh4l", &loc_z1dPhi_lep2MET_zh4l); 
                
 
        myreaderBDT->BookMVA("BDT","/afs/cern.ch/user/k/kaura/public/updatedconfig/2018/TMVAClassification_BDT.weights.xml"); 

}


float hww_ZH_newBDTnew(int entry, int nclass){
//	cout << multidraw::currentTree->GetCurrentFile()->GetName() << endl;
//        gSystem->Load("libLatinoAnalysisMultiDraw.so");

	
	if(name_temp != multidraw::currentTree->GetCurrentFile()->GetName()){
		cout << "name_temp = " << name_temp << endl;
		name_temp = multidraw::currentTree->GetCurrentFile()->GetName();
		cout << "name_temp = " << name_temp << endl;
		initialized = false;
	}

	
        if (!initialized){
		//latino = (TTree*)gDirectory->Get("latino");
		delete myreaderBDT;
		myreaderBDT = new TMVA::Reader();
		initmyreaderBDT(multidraw::currentTree);
		cout << "check init" << endl;	
		initialized = true;		
        }

	multidraw::currentTree->GetEntry(entry);
/*
        loc_pt1 = loc0_pt1;
        loc_pt2 = loc0_pt2;
        loc_ptll = loc0_ptll;
        loc_detajj = loc0_detajj;
        loc_dphill = loc0_dphill;
        loc_ptj1 = loc0_ptj[0];
        loc_ptj2 = loc0_ptj[1];
        loc_etaj1 = loc0_etaj[0];
        loc_etaj2 = loc0_etaj[1];
        loc_Ctot = (abs(2*loc0_etal[0]-loc0_etaj[0]-loc0_etaj[1])+abs(2*loc0_etal[1]-loc0_etaj[0]-loc0_etaj[1]))/loc0_detajj;
        loc_mlj11 = mlj(loc0_ptl[0], loc0_etal[0], loc0_phil[0], loc0_ptj[0], loc0_etaj[0], loc0_phij[0]);
        loc_mlj12 = mlj(loc0_ptl[0], loc0_etal[0], loc0_phil[0], loc0_ptj[1], loc0_etaj[1], loc0_phij[1]);
        loc_mlj21 = mlj(loc0_ptl[1], loc0_etal[1], loc0_phil[1], loc0_ptj[0], loc0_etaj[0], loc0_phij[0]);
        loc_mlj22 = mlj(loc0_ptl[1], loc0_etal[1], loc0_phil[1], loc0_ptj[1], loc0_etaj[1], loc0_phij[1]);
        
        loc_qgl1 = loc0_qgl[loc0_id[0]];
        loc_qgl2 = loc0_qgl[loc0_id[1]];
*/

  
      loc_pt1 = loc0_ptl[0];
 //       loc_pt2 = loc0_pt2;
 //       loc_pt3 = loc0_pt3;
        loc_pt4 = loc0_ptl[3];
 //       loc_z0DeltaPhi_zh4l = loc0_z0DeltaPhi_zh4l;
        loc_z0DeltaR_zh4l = loc0_z0DeltaR_zh4l;
        loc_z1DeltaR_zh4l = loc0_z1DeltaR_zh4l;
        loc_lep1Mt_zh4l = loc0_lep1Mt_zh4l;
        loc_lep2Mt_zh4l = loc0_lep2Mt_zh4l;
//        loc_lep2Mt_zh4l = loc0_lep3Mt_zh4l;
//        loc_lep4Mt_zh4l = loc0_lep4Mt_zh4l;
        loc_z0Mass_zh4l = loc0_z0Mass_zh4l;
        loc_z1Mass_zh4l = loc0_z1Mass_zh4l;
        loc_mllll_zh4l = loc0_mllll_zh4l;
        loc_z1Mt_zh4l = loc0_z1Mt_zh4l;
        loc_z1DeltaPhi_zh4l = loc0_z1DeltaPhi_zh4l;
        loc_PuppiMET_pt = loc0_PuppiMET_pt;
//        loc_z1dPhi_lep2MET_zh4l = loc0_z1dPhi_lep2MET_zh4l; 	

        //cout<<"*****INIZIO PROVA TMVA*****"<<endl;
        //cout<<loc0_id[0]<<"  "<< loc_qgl1 <<"   "<<loc0_qgl[0]<<endl;
        //cout<<loc0_id[1]<<"  "<< loc_qgl2 <<"   "<<loc0_qgl[1]<<endl;
        //cout<<"*****FINE PROVA TMVA*****"<<endl;
	
	float classifier = myreaderBDT->EvaluateMVA("BDT");
	//cout << entry << " " << classifier << endl;
	return classifier;

}


/*
float hww_VBF_MYmvaBDTG(float loc0_mjj, float loc0_mll, float loc0_ptll, float loc0_detajj, float loc0_dphill, float loc0_ptj1, float loc0_ptj2, float loc0_etaj1, float loc0_etaj2, float loc0_Ctot, float loc0_mlj11, float loc0_mlj12, float loc0_mlj21, float loc0_mlj22, float loc0_qgl1, float loc0_qgl2, int nclass){
	loc_mjj = loc0_mjj;
	loc_mll = loc0_mll;
	loc_ptll = loc0_ptll;
	loc_detajj = loc0_detajj;
	loc_dphill = loc0_dphill;
	loc_ptj1 = loc0_ptj1;
	loc_ptj2 = loc0_ptj2;
	loc_etaj1 = loc0_etaj1;
	loc_etaj2 = loc0_etaj2;
	loc_Ctot = loc0_Ctot;
	loc_mlj11 = loc0_mlj11;
	loc_mlj12 = loc0_mlj12;
	loc_mlj21 = loc0_mlj21;
	loc_mlj22 = loc0_mlj22;
	loc_qgl1 = loc0_qgl1;
	loc_qgl2 = loc0_qgl2;

return myreaderBDTG->EvaluateMulticlass(nclass, "BDTG");

}
*/

