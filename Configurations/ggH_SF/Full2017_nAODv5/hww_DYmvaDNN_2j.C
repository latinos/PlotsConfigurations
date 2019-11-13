// To compile 
// root -l
// gSystem->Load("libLatinoAnalysisMultiDraw.so")
// .L hww_VBF_MYmvaDNNG.C+ 

//#include "TMVA/Factory.h"
#include "TMVA/Reader.h"
//#include "TMVA/DataLoader.h"
#include "TMVA/PyMethodBase.h"
#include "TLorentzVector.h"
#include <TTree.h>
#include "TSystem.h"
#include "TROOT.h"
#include "TString.h"
#include "TFile.h"
#include "stdlib.h"

using namespace std;

namespace multidraw {
  extern thread_local TTree* currentTree;
}

TMVA::Reader* readerDNN_2j = new TMVA::Reader();
bool initialized_2j = false;
TString name_temp_2j = "";

//2jet
float l_2j_upara, l_2j_mth, l_2j_ptTOT_cut, l_2j_uperp, l_2j_dphilljet_cut, l_2j_ptll, l_2j_PfMetDivSumMet, l_2j_MET_pt, l_2j_mtw1, l_2j_jetpt1_cut, l_2j_dphijjmet_cut, l_2j_mpmet;
float l_2j_PV_npvsGood; 
float l_2j__upara, l_2j__mth, l_2j__ptTOT_cut, l_2j__uperp, l_2j__dphilljet_cut, l_2j__ptll, l_2j__PfMetDivSumMet, l_2j__MET_pt, l_2j__mtw1, l_2j__jetpt1_cut, l_2j__dphijjmet_cut, l_2j__mpmet;
int l_2j__PV_npvsGood;

void init_hww_DYmvaDNN_2j(TTree* tree){
 
    tree->SetBranchAddress("upara", &l_2j__upara);
    tree->SetBranchAddress("mth", &l_2j__mth);
    tree->SetBranchAddress("ptTOT_cut", &l_2j__ptTOT_cut);
    tree->SetBranchAddress("uperp", &l_2j__uperp);
    tree->SetBranchAddress("dphilljet_cut", &l_2j__dphilljet_cut);
    tree->SetBranchAddress("ptll", &l_2j__ptll);
    tree->SetBranchAddress("PfMetDivSumMet", &l_2j__PfMetDivSumMet);
    tree->SetBranchAddress("MET_pt", &l_2j__MET_pt);
    tree->SetBranchAddress("mtw1", &l_2j__mtw1);
    tree->SetBranchAddress("jetpt1_cut", &l_2j__jetpt1_cut);
    tree->SetBranchAddress("dphijjmet_cut", &l_2j__dphijjmet_cut);
    tree->SetBranchAddress("mpmet", &l_2j__mpmet);
    tree->SetBranchAddress("PV_npvsGood", &l_2j__PV_npvsGood);

    readerDNN_2j->AddVariable("upara", &l_2j_upara);
    readerDNN_2j->AddVariable("mth", &l_2j_mth);
    readerDNN_2j->AddVariable("ptTOT_cut", &l_2j_ptTOT_cut);
    readerDNN_2j->AddVariable("uperp", &l_2j_uperp);
    readerDNN_2j->AddVariable("dphilljet_cut", &l_2j_dphilljet_cut);
    readerDNN_2j->AddVariable("ptll", &l_2j_ptll);
    readerDNN_2j->AddVariable("PfMetDivSumMet", &l_2j_PfMetDivSumMet);
    readerDNN_2j->AddVariable("MET_pt", &l_2j_MET_pt);
    readerDNN_2j->AddVariable("mtw1", &l_2j_mtw1);
    readerDNN_2j->AddVariable("jetpt1_cut", &l_2j_jetpt1_cut);
    readerDNN_2j->AddVariable("dphijjmet_cut", &l_2j_dphijjmet_cut);
    readerDNN_2j->AddVariable("mpmet", &l_2j_mpmet);
    readerDNN_2j->AddVariable("PV_npvsGood", &l_2j_PV_npvsGood);
    
    readerDNN_2j->BookMVA("PyKeras","/afs/cern.ch/work/d/ddicroce/Latinos/CMSSW_11_0_0_pre7/src/LatinoAnalysis/NanoGardener/python/data/DYSFmva/2017_v5/TMVAClassification_PyKeras_2017_2j.weights.xml"); 

}


float hww_DYmvaDNN_2j(int entry){
	
	if(name_temp_2j != multidraw::currentTree->GetCurrentFile()->GetName()){
		cout << "name_temp_2j = " << name_temp_2j << endl;
		name_temp_2j = multidraw::currentTree->GetCurrentFile()->GetName();
		cout << "name_temp_2j = " << name_temp_2j << endl;
		initialized_2j = false;
	}

	
        if (!initialized_2j){
		delete readerDNN_2j;
		readerDNN_2j = new TMVA::Reader();
		init_hww_DYmvaDNN_2j(multidraw::currentTree);
		cout << "check init" << endl;	
		initialized_2j = true;		
        }

	multidraw::currentTree->GetEntry(entry);
        
        l_2j_upara = l_2j__upara;
        l_2j_mth = l_2j__mth;
        l_2j_ptTOT_cut = l_2j__ptTOT_cut;
        l_2j_uperp = l_2j__uperp;
        l_2j_dphilljet_cut = l_2j__dphilljet_cut;
        l_2j_ptll = l_2j__ptll;
        l_2j_PfMetDivSumMet = l_2j__PfMetDivSumMet;
        l_2j_MET_pt = l_2j__MET_pt;
        l_2j_mtw1 = l_2j__mtw1;
        l_2j_jetpt1_cut = l_2j__jetpt1_cut;
        l_2j_dphijjmet_cut = l_2j__dphijjmet_cut;
        l_2j_mpmet = l_2j__mpmet;
        l_2j_PV_npvsGood = l_2j__PV_npvsGood;

	float classifier = readerDNN_2j->EvaluateMVA("PyKeras");
        //std::cout << "[DNN 2j]    score: " << classifier << std::endl;
	return classifier;

}
