// To compile 
// root -l
// gSystem->Load("libLatinoAnalysisMultiDraw.so")
// .L hww_VBF_MYmvaBDTG.C+ 

#include <TMVA/Reader.h>
#include "TLorentzVector.h"
#include <TTree.h>
#include "TSystem.h"
#include "TROOT.h"
#include "TString.h"
#include "TFile.h"


using namespace std;

namespace multidraw {
  extern thread_local TTree* currentTree;
}

TMVA::Reader* myreaderBDTG = new TMVA::Reader();
bool initialized = false;
TString name_temp = "";
//TTree* latino [100];

float loc_mjj, loc_mll, loc_ptll, loc_detajj, loc_dphill, loc_ptj1, loc_ptj2, loc_etaj1, loc_etaj2, loc_Ctot, loc_mlj11, loc_mlj12, loc_mlj21, loc_mlj22, loc_qgl1, loc_qgl2;

float loc0_mjj, loc0_mll, loc0_ptll, loc0_detajj, loc0_dphill, loc0_ptj1, loc0_ptj2, loc0_etaj1, loc0_etaj2, loc0_phij1, loc0_phij2, loc0_ptl1, loc0_ptl2, loc0_etal1, loc0_etal2, loc0_phil1, loc0_phil2, loc0_qgl1, loc0_qgl2;

float loc0_ptj[100];
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

void init_hww_VBF_MYmvaBDTG(TTree* tree){


        TString condizione0 = "(Alt$(Jet_qgl[0],-1)*(CleanJet_jetIdx[0]==0) + Alt$(Jet_qgl[1],-1)*(CleanJet_jetIdx[0]==1) + Alt$(Jet_qgl[2],-1)*(CleanJet_jetIdx[0]==2) + Alt$(Jet_qgl[3],-1)*(CleanJet_jetIdx[0]==3) + Alt$(Jet_qgl[4],-1)*(CleanJet_jetIdx[0]==4) + Alt$(Jet_qgl[5],-1)*(CleanJet_jetIdx[0]==5) + Alt$(Jet_qgl[6],-1)*(CleanJet_jetIdx[0]==6) + Alt$(Jet_qgl[7],-1)*(CleanJet_jetIdx[0]==7) + Alt$(Jet_qgl[8],-1)*(CleanJet_jetIdx[0]==8) + (CleanJet_jetIdx[0]>8)*(-1))";
        TString condizione1 = "(Alt$(Jet_qgl[0],-1)*(CleanJet_jetIdx[1]==0) + Alt$(Jet_qgl[1],-1)*(CleanJet_jetIdx[1]==1) + Alt$(Jet_qgl[2],-1)*(CleanJet_jetIdx[1]==2) + Alt$(Jet_qgl[3],-1)*(CleanJet_jetIdx[1]==3) + Alt$(Jet_qgl[4],-1)*(CleanJet_jetIdx[1]==4) + Alt$(Jet_qgl[5],-1)*(CleanJet_jetIdx[1]==5) + Alt$(Jet_qgl[6],-1)*(CleanJet_jetIdx[1]==6) + Alt$(Jet_qgl[7],-1)*(CleanJet_jetIdx[1]==7) + Alt$(Jet_qgl[8],-1)*(CleanJet_jetIdx[1]==8) + (CleanJet_jetIdx[1]>8)*(-1))";
        
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

	myreaderBDTG->AddVariable("mjj", &loc_mjj);
	myreaderBDTG->AddVariable("mll", &loc_mll);
	myreaderBDTG->AddVariable("ptll", &loc_ptll);
	myreaderBDTG->AddVariable("detajj", &loc_detajj);
	myreaderBDTG->AddVariable("dphill", &loc_dphill);
	myreaderBDTG->AddVariable("CleanJet_pt[0]", &loc_ptj1);
	myreaderBDTG->AddVariable("CleanJet_pt[1]", &loc_ptj2);
	myreaderBDTG->AddVariable("CleanJet_eta[0]", &loc_etaj1);
	myreaderBDTG->AddVariable("CleanJet_eta[1]", &loc_etaj2);
	myreaderBDTG->AddVariable("log((abs(2*Lepton_eta[0]-CleanJet_eta[0]-CleanJet_eta[1])+abs(2*Lepton_eta[1]-CleanJet_eta[0]-CleanJet_eta[1]))/detajj)", &loc_Ctot);
	myreaderBDTG->AddVariable("mlj(Lepton_pt[0], Lepton_eta[0], Lepton_phi[0], CleanJet_pt[0], CleanJet_eta[0], CleanJet_phi[0])", &loc_mlj11);
	myreaderBDTG->AddVariable("mlj(Lepton_pt[0], Lepton_eta[0], Lepton_phi[0], CleanJet_pt[1], CleanJet_eta[1], CleanJet_phi[1])", &loc_mlj12);
	myreaderBDTG->AddVariable("mlj(Lepton_pt[1], Lepton_eta[1], Lepton_phi[1], CleanJet_pt[0], CleanJet_eta[0], CleanJet_phi[0])", &loc_mlj21);
	myreaderBDTG->AddVariable("mlj(Lepton_pt[1], Lepton_eta[1], Lepton_phi[1], CleanJet_pt[1], CleanJet_eta[1], CleanJet_phi[1])", &loc_mlj22);
	//myreaderBDTG->AddVariable("Jet_qgl[CleanJet_jetIdx[0]]", &loc_qgl1);
	//myreaderBDTG->AddVariable("Jet_qgl[CleanJet_jetIdx[1]]", &loc_qgl2);
        myreaderBDTG->AddVariable("("+condizione0+">=0)*("+condizione0+"+1)-1", &loc_qgl1); 
        myreaderBDTG->AddVariable("("+condizione1+">=0)*("+condizione1+"+1)-1", &loc_qgl2); 

                
	//myreaderBDTG->BookMVA("BDTG","/afs/cern.ch/work/r/rceccare/DAS/CMSSW_9_4_12/src/PlotsConfigurations/Configurations/VBF/Full2017BDT_Multiclass/TMVAMulticlass_BDTG_30TopFiles.weights.xml"); 
        myreaderBDTG->BookMVA("BDTG","/afs/cern.ch/work/r/rceccare/DAS/CMSSW_9_4_12/src/PlotsConfigurations/Configurations/VBF/Full2017BDT_Multiclass/dataset/weights/TMVAMulticlass_BDTG.weights.xml"); 

}


float hww_VBF_MYmvaBDTG(int entry, int nclass){
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
		delete myreaderBDTG;
		myreaderBDTG = new TMVA::Reader();
		init_hww_VBF_MYmvaBDTG(multidraw::currentTree);
		cout << "check init" << endl;	
		initialized = true;		
        }

	multidraw::currentTree->GetEntry(entry);

        loc_mjj = loc0_mjj;
        loc_mll = loc0_mll;
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

	

        //cout<<"*****INIZIO PROVA TMVA*****"<<endl;
        //cout<<loc0_id[0]<<"  "<< loc_qgl1 <<"   "<<loc0_qgl[0]<<endl;
        //cout<<loc0_id[1]<<"  "<< loc_qgl2 <<"   "<<loc0_qgl[1]<<endl;
        //cout<<"*****FINE PROVA TMVA*****"<<endl;
	
	float classifier = myreaderBDTG->EvaluateMulticlass(nclass, "BDTG");
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
