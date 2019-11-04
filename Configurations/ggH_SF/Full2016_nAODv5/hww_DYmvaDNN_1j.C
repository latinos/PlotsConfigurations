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

TMVA::Reader* readerDNN_1j = new TMVA::Reader();
bool initialized_1j = false;
TString name_temp_1j = "";

//1jet
float l_1j_ptll, l_1j_mth, l_1j_jetpt1_cut, l_1j_uperp, l_1j_PfMetDivSumMet, l_1j_recoil, l_1j_mpmet, l_1j_mtw1, l_1j_PuppiMET_pt, l_1j_MET_pt, l_1j_dphijet1met_cut, l_1j_upara, l_1j_mtw2, l_1j_TkMET_pt, l_1j_projtkmet, l_1j_projpfmet, l_1j_dphilljet_cut, l_1j_dphillmet, l_1j_dphilmet1, l_1j_dphilmet2, l_1j_jetpt2_cut;
float l_1j_PV_npvsGood; 
float l_1j__ptll, l_1j__mth, l_1j__jetpt1_cut, l_1j__uperp, l_1j__PfMetDivSumMet, l_1j__recoil, l_1j__mpmet, l_1j__mtw1, l_1j__PuppiMET_pt, l_1j__MET_pt, l_1j__dphijet1met_cut, l_1j__upara, l_1j__mtw2, l_1j__TkMET_pt, l_1j__projtkmet, l_1j__projpfmet, l_1j__dphilljet_cut, l_1j__dphillmet, l_1j__dphilmet1, l_1j__dphilmet2, l_1j__jetpt2_cut;
int l_1j__PV_npvsGood;

void init_hww_DYmvaDNN_1j(TTree* tree){
 
    tree->SetBranchAddress("ptll", &l_1j__ptll);
    tree->SetBranchAddress("mth", &l_1j__mth);
    tree->SetBranchAddress("jetpt1_cut", &l_1j__jetpt1_cut);
    tree->SetBranchAddress("uperp", &l_1j__uperp);
    tree->SetBranchAddress("upara", &l_1j__upara);
    tree->SetBranchAddress("PfMetDivSumMet", &l_1j__PfMetDivSumMet);
    tree->SetBranchAddress("recoil", &l_1j__recoil);
    tree->SetBranchAddress("mpmet", &l_1j__mpmet);
    tree->SetBranchAddress("mtw1", &l_1j__mtw1);
    tree->SetBranchAddress("mtw2", &l_1j__mtw2);
    tree->SetBranchAddress("PuppiMET_pt", &l_1j__PuppiMET_pt);
    tree->SetBranchAddress("MET_pt", &l_1j__MET_pt);
    tree->SetBranchAddress("TkMET_pt", &l_1j__TkMET_pt);
    tree->SetBranchAddress("projtkmet", &l_1j__projtkmet);
    tree->SetBranchAddress("projpfmet", &l_1j__projpfmet);
    tree->SetBranchAddress("dphilljet_cut", &l_1j__dphilljet_cut);
    tree->SetBranchAddress("dphijet1met_cut", &l_1j__dphijet1met_cut);
    tree->SetBranchAddress("dphillmet", &l_1j__dphillmet);
    tree->SetBranchAddress("dphilmet1", &l_1j__dphilmet1);
    tree->SetBranchAddress("dphilmet2", &l_1j__dphilmet2);
    tree->SetBranchAddress("jetpt2_cut", &l_1j__jetpt2_cut);
    tree->SetBranchAddress("PV_npvsGood", &l_1j__PV_npvsGood);

    readerDNN_1j->AddVariable("ptll", &l_1j_ptll);
    readerDNN_1j->AddVariable("mth", &l_1j_mth);
    readerDNN_1j->AddVariable("jetpt1_cut", &l_1j_jetpt1_cut);
    readerDNN_1j->AddVariable("uperp", &l_1j_uperp);
    readerDNN_1j->AddVariable("upara", &l_1j_upara);
    readerDNN_1j->AddVariable("PfMetDivSumMet", &l_1j_PfMetDivSumMet);
    readerDNN_1j->AddVariable("recoil", &l_1j_recoil);
    readerDNN_1j->AddVariable("mpmet", &l_1j_mpmet);
    readerDNN_1j->AddVariable("mtw1", &l_1j_mtw1);
    readerDNN_1j->AddVariable("mtw2", &l_1j_mtw2);
    readerDNN_1j->AddVariable("PuppiMET_pt", &l_1j_PuppiMET_pt);
    readerDNN_1j->AddVariable("MET_pt", &l_1j_MET_pt);
    readerDNN_1j->AddVariable("TkMET_pt", &l_1j_TkMET_pt);
    readerDNN_1j->AddVariable("projtkmet", &l_1j_projtkmet);
    readerDNN_1j->AddVariable("projpfmet", &l_1j_projpfmet);
    readerDNN_1j->AddVariable("dphilljet_cut", &l_1j_dphilljet_cut);
    readerDNN_1j->AddVariable("dphijet1met_cut", &l_1j_dphijet1met_cut);
    readerDNN_1j->AddVariable("dphillmet", &l_1j_dphillmet);
    readerDNN_1j->AddVariable("dphilmet1", &l_1j_dphilmet1);
    readerDNN_1j->AddVariable("dphilmet2", &l_1j_dphilmet2);
    readerDNN_1j->AddVariable("jetpt2_cut", &l_1j_jetpt2_cut);
    readerDNN_1j->AddVariable("PV_npvsGood", &l_1j_PV_npvsGood);

    readerDNN_1j->BookMVA("PyKeras","/afs/cern.ch/work/d/ddicroce/Latinos/CMSSW_11_0_0_pre7/src/LatinoAnalysis/NanoGardener/python/data/DYSFmva/2016_v5/TMVAClassification_PyKeras_2016_1j.weights.xml"); 

}


float hww_DYmvaDNN_1j(int entry){
	
	if(name_temp_1j != multidraw::currentTree->GetCurrentFile()->GetName()){
		cout << "name_temp_1j = " << name_temp_1j << endl;
		name_temp_1j = multidraw::currentTree->GetCurrentFile()->GetName();
		cout << "name_temp_1j = " << name_temp_1j << endl;
		initialized_1j = false;
	}

	
        if (!initialized_1j){
		delete readerDNN_1j;
		readerDNN_1j = new TMVA::Reader();
		init_hww_DYmvaDNN_1j(multidraw::currentTree);
		cout << "check init" << endl;	
		initialized_1j = true;		
        }

	multidraw::currentTree->GetEntry(entry);
        
        l_1j_ptll = l_1j__ptll;
        l_1j_mth  = l_1j__mth;
        l_1j_jetpt1_cut = l_1j__jetpt1_cut;
        l_1j_uperp = l_1j__uperp;
        l_1j_upara = l_1j__upara;
        l_1j_PfMetDivSumMet = l_1j__PfMetDivSumMet;
        l_1j_recoil = l_1j__recoil;
        l_1j_mpmet = l_1j__mpmet;
        l_1j_mtw1 = l_1j__mtw1;
        l_1j_mtw2 = l_1j__mtw2;
        l_1j_PuppiMET_pt = l_1j__PuppiMET_pt;
        l_1j_MET_pt = l_1j__MET_pt;
        l_1j_TkMET_pt = l_1j__TkMET_pt;
        l_1j_projtkmet = l_1j__projtkmet;
        l_1j_projpfmet = l_1j__projpfmet;
        l_1j_dphilljet_cut = l_1j__dphilljet_cut;
        l_1j_dphijet1met_cut = l_1j__dphijet1met_cut;
        l_1j_dphillmet = l_1j__dphillmet;
        l_1j_dphilmet1 = l_1j__dphilmet1;
        l_1j_dphilmet2 = l_1j__dphilmet2;
        l_1j_jetpt2_cut = l_1j__jetpt2_cut;
        l_1j_PV_npvsGood = l_1j__PV_npvsGood;

	float classifier = readerDNN_1j->EvaluateMVA("PyKeras");
	
        //std::cout << "[DNN 1j]    score: " << classifier << std::endl;
	return classifier;

}
