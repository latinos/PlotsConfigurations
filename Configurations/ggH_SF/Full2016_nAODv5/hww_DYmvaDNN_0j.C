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

TMVA::Reader* readerDNN_0j = new TMVA::Reader();
bool initialized_0j = false;
TString name_temp_0j = "";

//0jet
float l_0j_ptll, l_0j_mth, l_0j_jetpt1_cut, l_0j_uperp, l_0j_PfMetDivSumMet, l_0j_recoil, l_0j_mpmet, l_0j_mtw1, l_0j_PuppiMET_pt, l_0j_MET_pt, l_0j_dphijet1met_cut, l_0j_upara;
float l_0j_PV_npvsGood; 
float l_0j__ptll, l_0j__mth, l_0j__jetpt1_cut, l_0j__uperp, l_0j__PfMetDivSumMet, l_0j__recoil, l_0j__mpmet, l_0j__mtw1, l_0j__PuppiMET_pt, l_0j__MET_pt, l_0j__dphijet1met_cut, l_0j__upara;
int l_0j__PV_npvsGood;

void init_hww_DYmvaDNN_0j(TTree* tree){
 
    tree->SetBranchAddress("ptll", &l_0j__ptll);
    tree->SetBranchAddress("mth", &l_0j__mth);
    tree->SetBranchAddress("jetpt1_cut", &l_0j__jetpt1_cut);
    tree->SetBranchAddress("uperp", &l_0j__uperp);
    tree->SetBranchAddress("PfMetDivSumMet", &l_0j__PfMetDivSumMet);
    tree->SetBranchAddress("recoil", &l_0j__recoil);
    tree->SetBranchAddress("mpmet", &l_0j__mpmet);
    tree->SetBranchAddress("mtw1", &l_0j__mtw1);
    tree->SetBranchAddress("PuppiMET_pt", &l_0j__PuppiMET_pt);
    tree->SetBranchAddress("MET_pt", &l_0j__MET_pt);
    tree->SetBranchAddress("dphijet1met_cut", &l_0j__dphijet1met_cut);
    tree->SetBranchAddress("upara", &l_0j__upara);
    tree->SetBranchAddress("PV_npvsGood", &l_0j__PV_npvsGood);

    readerDNN_0j->AddVariable("ptll", &l_0j_ptll);
    readerDNN_0j->AddVariable("mth", &l_0j_mth);
    readerDNN_0j->AddVariable("jetpt1_cut", &l_0j_jetpt1_cut);
    readerDNN_0j->AddVariable("uperp", &l_0j_uperp);
    readerDNN_0j->AddVariable("PfMetDivSumMet", &l_0j_PfMetDivSumMet);
    readerDNN_0j->AddVariable("recoil", &l_0j_recoil);
    readerDNN_0j->AddVariable("mpmet", &l_0j_mpmet);
    readerDNN_0j->AddVariable("mtw1", &l_0j_mtw1);
    readerDNN_0j->AddVariable("PuppiMET_pt", &l_0j_PuppiMET_pt);
    readerDNN_0j->AddVariable("MET_pt", &l_0j_MET_pt);
    readerDNN_0j->AddVariable("dphijet1met_cut", &l_0j_dphijet1met_cut);
    readerDNN_0j->AddVariable("upara", &l_0j_upara);
    readerDNN_0j->AddVariable("PV_npvsGood", &l_0j_PV_npvsGood);
    
    readerDNN_0j->BookMVA("PyKeras","/afs/cern.ch/work/d/ddicroce/Latinos/CMSSW_11_0_0_pre7/src/LatinoAnalysis/NanoGardener/python/data/DYSFmva/2016_v5/TMVAClassification_PyKeras_2016_0j.weights.xml"); 

}


float hww_DYmvaDNN_0j(int entry){
	
	if(name_temp_0j != multidraw::currentTree->GetCurrentFile()->GetName()){
		cout << "name_temp_0j = " << name_temp_0j << endl;
		name_temp_0j = multidraw::currentTree->GetCurrentFile()->GetName();
		cout << "name_temp_0j = " << name_temp_0j << endl;
		initialized_0j = false;
	}

	
        if (!initialized_0j){
		delete readerDNN_0j;
		readerDNN_0j = new TMVA::Reader();
		init_hww_DYmvaDNN_0j(multidraw::currentTree);
		cout << "check init" << endl;	
		initialized_0j = true;		
        }

	multidraw::currentTree->GetEntry(entry);
        
        l_0j_ptll = l_0j__ptll;
        l_0j_mth = l_0j__mth;
        l_0j_jetpt1_cut = l_0j__jetpt1_cut;
        l_0j_uperp = l_0j__uperp;
        l_0j_PfMetDivSumMet = l_0j__PfMetDivSumMet;
        l_0j_recoil = l_0j__recoil;
        l_0j_mpmet = l_0j__mpmet;
        l_0j_mtw1 = l_0j__mtw1;
        l_0j_PuppiMET_pt = l_0j__PuppiMET_pt;
        l_0j_MET_pt = l_0j__MET_pt;
        l_0j_dphijet1met_cut = l_0j__dphijet1met_cut;
        l_0j_upara = l_0j__upara;
        l_0j_PV_npvsGood = l_0j__PV_npvsGood;

	float classifier = readerDNN_0j->EvaluateMVA("PyKeras");
	
        //std::cout << "[DNN 0j]    score: " << classifier << std::endl;
	return classifier;

}
