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

float loc_pt1,loc_PuppiMET_pt, loc_pt2, loc_pt3, loc_pt4, loc_z0DeltaPhi_zh4l, loc_z0DeltaR_zh4l, loc_z1DeltaR_zh4l, loc_lep1Mt_zh4l, loc_lep2Mt_zh4l, loc_lep3Mt_zh4l, loc_lep4Mt_zh4l, loc_z0Mass_zh4l, loc_z1Mass_zh4l, loc_mllll_zh4l, loc_z1Mt_zh4l, loc_z1DeltaPhi_zh4l,loc_z1dPhi_lep1MET_zh4l, loc_z1dPhi_lep2MET_zh4l;

float loc0_pt1, loc0_PuppiMET_pt,loc0_pt2, loc0_pt3, loc0_pt4, loc0_z0DeltaPhi_zh4l, loc0_z0DeltaR_zh4l, loc0_z1DeltaR_zh4l, loc0_lep1Mt_zh4l, loc0_lep2Mt_zh4l, loc0_lep3Mt_zh4l, loc0_lep4Mt_zh4l, loc0_z0Mass_zh4l, loc0_z1Mass_zh4l, loc0_mllll_zh4l, loc0_z1Mt_zh4l, loc0_z1DeltaPhi_zh4l,loc0_z1dPhi_lep1MET_zh4l, loc0_z1dPhi_lep2MET_zh4l;

float loc0_ptl[100];



void initmyreaderBDT(TTree* tree){


        tree->SetBranchAddress("Lepton_pt", &loc0_ptl);
        tree->SetBranchAddress("z0DeltaR_zh4l", &loc0_z0DeltaR_zh4l);
        tree->SetBranchAddress("z1DeltaR_zh4l", &loc0_z1DeltaR_zh4l);
        tree->SetBranchAddress("lep1Mt_zh4l", &loc0_lep1Mt_zh4l);
        tree->SetBranchAddress("lep2Mt_zh4l",&loc0_lep2Mt_zh4l);
        tree->SetBranchAddress("z0Mass_zh4l", &loc0_z0Mass_zh4l);
        tree->SetBranchAddress("z1Mass_zh4l", &loc0_z1Mass_zh4l);
        tree->SetBranchAddress("mllll_zh4l", &loc0_mllll_zh4l);
        tree->SetBranchAddress("z1Mt_zh4l", &loc0_z1Mt_zh4l);
        tree->SetBranchAddress("z1DeltaPhi_zh4l", &loc0_z1DeltaPhi_zh4l);
        tree->SetBranchAddress("PuppiMET_pt", &loc0_PuppiMET_pt);


	myreaderBDT->AddVariable("Lepton_pt[0]", &loc_pt1);
	myreaderBDT->AddVariable("Lepton_pt[3]", &loc_pt4);
	myreaderBDT->AddVariable("z0DeltaR_zh4l", &loc_z0DeltaR_zh4l);
	myreaderBDT->AddVariable("z1DeltaR_zh4l", &loc_z1DeltaR_zh4l);
	myreaderBDT->AddVariable("lep1Mt_zh4l", &loc_lep1Mt_zh4l);
	myreaderBDT->AddVariable("lep2Mt_zh4l", &loc_lep2Mt_zh4l);
	myreaderBDT->AddVariable("z0Mass_zh4l", &loc_z0Mass_zh4l);
	myreaderBDT->AddVariable("z1Mass_zh4l", &loc_z1Mass_zh4l);
	myreaderBDT->AddVariable("mllll_zh4l", &loc_mllll_zh4l);
	myreaderBDT->AddVariable("z1Mt_zh4l", &loc_z1Mt_zh4l);
	myreaderBDT->AddVariable("z1DeltaPhi_zh4l", &loc_z1DeltaPhi_zh4l);
        myreaderBDT->AddVariable("PuppiMET_pt", &loc_PuppiMET_pt); 
 
                
 //change the path of weight file, xml file is in "BDT_config/weight" folder .
        myreaderBDT->BookMVA("BDT","/afs/cern.ch/user/k/kaura/public/updatedconfig/2017/TMVAClassification_BDT.weights.xml"); 

}


float hww_ZH_newBDTnew(int entry, int nclass){



	
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

  
        loc_pt1 = loc0_ptl[0];
        loc_pt4 = loc0_ptl[3];
        loc_z0DeltaR_zh4l = loc0_z0DeltaR_zh4l;
        loc_z1DeltaR_zh4l = loc0_z1DeltaR_zh4l;
        loc_lep1Mt_zh4l = loc0_lep1Mt_zh4l;
        loc_lep2Mt_zh4l = loc0_lep2Mt_zh4l;
        loc_z0Mass_zh4l = loc0_z0Mass_zh4l;
        loc_z1Mass_zh4l = loc0_z1Mass_zh4l;
        loc_mllll_zh4l = loc0_mllll_zh4l;
        loc_z1Mt_zh4l = loc0_z1Mt_zh4l;
        loc_z1DeltaPhi_zh4l = loc0_z1DeltaPhi_zh4l;
        loc_PuppiMET_pt = loc0_PuppiMET_pt;
	
	float classifier = myreaderBDT->EvaluateMVA("BDT");
	//cout << entry << " " << classifier << endl;
	return classifier;

}



