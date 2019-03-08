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
//TTree* latino = 0;

float loc_mjj, loc_mll, loc_ptll, loc_detajj, loc_dphill, loc_ptj1, loc_ptj2, loc_etaj1, loc_etaj2, loc_Ctot, loc_mlj11, loc_mlj12, loc_mlj21, loc_mlj22, loc_qgl1, loc_qgl2;

float loc0_mjj, loc0_mll, loc0_ptll, loc0_detajj, loc0_dphill, loc0_ptj1, loc0_ptj2, loc0_etaj1, loc0_etaj2, loc0_phij1, loc0_phij2, loc0_ptl1, loc0_ptl2, loc0_etal1, loc0_etal2, loc0_phil1, loc0_phil2, loc0_qgl1, loc0_qgl2;

vector<float>* loc0_ptj = 0;
vector<float>* loc0_etaj = 0;
vector<float>* loc0_phij = 0;
vector<float>* loc0_ptl = 0;
vector<float>* loc0_etal = 0;
vector<float>* loc0_phil = 0;
vector<float>* loc0_qgl = 0;



float mlj(float ptl, float etal, float phil, float ptj, float etaj, float phij){
        TLorentzVector l;
        TLorentzVector j;
        l.SetPtEtaPhiM(ptl, etal, phil, 0.);
        j.SetPtEtaPhiM(ptj, etaj, phij, 0.);

        return (l+j).M();
}

void init_hww_VBF_MYmvaBDTG(TTree* tree){


        tree->SetBranchAddress("mjj", &loc0_mjj);
        tree->SetBranchAddress("mll", &loc0_mll);
        tree->SetBranchAddress("ptll", &loc0_ptll);
        tree->SetBranchAddress("detajj", &loc0_detajj);
        tree->SetBranchAddress("dphill", &loc0_dphill);
        tree->SetBranchAddress("std_vector_jet_pt", &loc0_ptj);
        tree->SetBranchAddress("std_vector_jet_eta", &loc0_etaj);
        tree->SetBranchAddress("std_vector_jet_phi", &loc0_phij);
        tree->SetBranchAddress("std_vector_lepton_pt", &loc0_ptl);
        tree->SetBranchAddress("std_vector_lepton_eta", &loc0_etal);
        tree->SetBranchAddress("std_vector_lepton_phi", &loc0_phil);
        tree->SetBranchAddress("std_vector_jet_QGlikelihood", &loc0_qgl);


	myreaderBDTG->AddVariable("mjj", &loc_mjj);
	myreaderBDTG->AddVariable("mll", &loc_mll);
	myreaderBDTG->AddVariable("ptll", &loc_ptll);
	myreaderBDTG->AddVariable("detajj", &loc_detajj);
	myreaderBDTG->AddVariable("dphill", &loc_dphill);
	myreaderBDTG->AddVariable("std_vector_jet_pt[0]", &loc_ptj1);
	myreaderBDTG->AddVariable("std_vector_jet_pt[1]", &loc_ptj2);
	myreaderBDTG->AddVariable("std_vector_jet_eta[0]", &loc_etaj1);
	myreaderBDTG->AddVariable("std_vector_jet_eta[1]", &loc_etaj2);
	myreaderBDTG->AddVariable("log((abs(2*std_vector_lepton_eta[0]-std_vector_jet_eta[0]-std_vector_jet_eta[1])+abs(2*std_vector_lepton_eta[1]-std_vector_jet_eta[0]-std_vector_jet_eta[1]))/detajj)", &loc_Ctot);
	myreaderBDTG->AddVariable("mlj(std_vector_lepton_pt[0], std_vector_lepton_eta[0], std_vector_lepton_phi[0], std_vector_jet_pt[0], std_vector_jet_eta[0], std_vector_jet_phi[0])", &loc_mlj11);
	myreaderBDTG->AddVariable("mlj(std_vector_lepton_pt[0], std_vector_lepton_eta[0], std_vector_lepton_phi[0], std_vector_jet_pt[1], std_vector_jet_eta[1], std_vector_jet_phi[1])", &loc_mlj12);
	myreaderBDTG->AddVariable("mlj(std_vector_lepton_pt[1], std_vector_lepton_eta[1], std_vector_lepton_phi[1], std_vector_jet_pt[0], std_vector_jet_eta[0], std_vector_jet_phi[0])", &loc_mlj21);
	myreaderBDTG->AddVariable("mlj(std_vector_lepton_pt[1], std_vector_lepton_eta[1], std_vector_lepton_phi[1], std_vector_jet_pt[1], std_vector_jet_eta[1], std_vector_jet_phi[1])", &loc_mlj22);
	myreaderBDTG->AddVariable("std_vector_jet_QGlikelihood[0]", &loc_qgl1);
	myreaderBDTG->AddVariable("std_vector_jet_QGlikelihood[1]", &loc_qgl2);

	myreaderBDTG->BookMVA("BDTG","/afs/cern.ch/user/m/mlizzo/work/new_framework_2017/CMSSW_9_4_9/src/PlotsConfigurations/Configurations/VBF/Full2016BDT_equal_training_events/dataset/weights/TMVAMulticlass_BDTG_500Trees.weights.xml"); 

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
        loc_ptj1 = (*loc0_ptj)[0];
        loc_ptj2 = (*loc0_ptj)[1];
        loc_etaj1 = (*loc0_etaj)[0];
        loc_etaj2 = (*loc0_etaj)[1];
        loc_Ctot = (abs(2*(*loc0_etal)[0]-(*loc0_etaj)[0]-(*loc0_etaj)[1])+abs(2*(*loc0_etal)[1]-(*loc0_etaj)[0]-(*loc0_etaj)[1]))/loc0_detajj;
        loc_mlj11 = mlj((*loc0_ptl)[0], (*loc0_etal)[0], (*loc0_phil)[0], (*loc0_ptj)[0], (*loc0_etaj)[0], (*loc0_phij)[0]);
        loc_mlj12 = mlj((*loc0_ptl)[0], (*loc0_etal)[0], (*loc0_phil)[0], (*loc0_ptj)[1], (*loc0_etaj)[1], (*loc0_phij)[1]);
        loc_mlj21 = mlj((*loc0_ptl)[1], (*loc0_etal)[1], (*loc0_phil)[1], (*loc0_ptj)[0], (*loc0_etaj)[0], (*loc0_phij)[0]);
        loc_mlj22 = mlj((*loc0_ptl)[1], (*loc0_etal)[1], (*loc0_phil)[1], (*loc0_ptj)[1], (*loc0_etaj)[1], (*loc0_phij)[1]);
        loc_qgl1 = (*loc0_qgl)[0];
        loc_qgl2 = (*loc0_qgl)[1];

	 
	
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
