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
float l_2j_ptll, l_2j_mth, l_2j_jetpt1_cut, l_2j_uperp, l_2j_PfMetDivSumMet, l_2j_recoil, l_2j_mpmet, l_2j_mtw1, l_2j_PuppiMET_pt, l_2j_MET_pt, l_2j_dphijet1met_cut, l_2j_upara, l_2j_mtw2, l_2j_TkMET_pt, l_2j_projtkmet, l_2j_projpfmet, l_2j_dphilljet_cut, l_2j_dphillmet, l_2j_dphilmet1, l_2j_dphilmet2, l_2j_jetpt2_cut, l_2j_dphijet2met_cut, l_2j_dphilljetjet_cut, l_2j_dphijjmet_cut, l_2j_ptTOT_cut, l_2j_mTOT_cut;
float l_2j_PV_npvsGood; 
float l_2j__ptll, l_2j__mth, l_2j__jetpt1_cut, l_2j__uperp, l_2j__PfMetDivSumMet, l_2j__recoil, l_2j__mpmet, l_2j__mtw1, l_2j__PuppiMET_pt, l_2j__MET_pt, l_2j__dphijet1met_cut, l_2j__upara, l_2j__mtw2, l_2j__TkMET_pt, l_2j__projtkmet, l_2j__projpfmet, l_2j__dphilljet_cut, l_2j__dphillmet, l_2j__dphilmet1, l_2j__dphilmet2, l_2j__jetpt2_cut, l_2j__dphijet2met_cut, l_2j__dphilljetjet_cut, l_2j__dphijjmet_cut, l_2j__ptTOT_cut, l_2j__mTOT_cut;
int l_2j__PV_npvsGood;

void init_hww_DYmvaDNN_2j(TTree* tree){
 
    tree->SetBranchAddress("ptll", &l_2j__ptll);
    tree->SetBranchAddress("mth", &l_2j__mth);
    tree->SetBranchAddress("jetpt1_cut", &l_2j__jetpt1_cut);
    tree->SetBranchAddress("uperp", &l_2j__uperp);
    tree->SetBranchAddress("upara", &l_2j__upara);
    tree->SetBranchAddress("PfMetDivSumMet", &l_2j__PfMetDivSumMet);
    tree->SetBranchAddress("recoil", &l_2j__recoil);
    tree->SetBranchAddress("mpmet", &l_2j__mpmet);
    tree->SetBranchAddress("mtw1", &l_2j__mtw1);
    tree->SetBranchAddress("mtw2", &l_2j__mtw2);
    tree->SetBranchAddress("PuppiMET_pt", &l_2j__PuppiMET_pt);
    tree->SetBranchAddress("MET_pt", &l_2j__MET_pt);
    tree->SetBranchAddress("TkMET_pt", &l_2j__TkMET_pt);
    tree->SetBranchAddress("projtkmet", &l_2j__projtkmet);
    tree->SetBranchAddress("projpfmet", &l_2j__projpfmet);
    tree->SetBranchAddress("dphilljet_cut", &l_2j__dphilljet_cut);
    tree->SetBranchAddress("dphijet1met_cut", &l_2j__dphijet1met_cut);
    tree->SetBranchAddress("dphillmet", &l_2j__dphillmet);
    tree->SetBranchAddress("dphilmet1", &l_2j__dphilmet1);
    tree->SetBranchAddress("dphilmet2", &l_2j__dphilmet2);
    tree->SetBranchAddress("jetpt2_cut", &l_2j__jetpt2_cut);
    tree->SetBranchAddress("dphijet2met_cut", &l_2j__dphijet2met_cut);
    tree->SetBranchAddress("dphilljetjet_cut", &l_2j__dphilljetjet_cut);
    tree->SetBranchAddress("dphijjmet_cut", &l_2j__dphijjmet_cut);
    tree->SetBranchAddress("ptTOT_cut", &l_2j__ptTOT_cut);
    tree->SetBranchAddress("mTOT_cut", &l_2j__mTOT_cut);
    tree->SetBranchAddress("PV_npvsGood", &l_2j__PV_npvsGood);

    readerDNN_2j->AddVariable("ptll", &l_2j_ptll);
    readerDNN_2j->AddVariable("mth", &l_2j_mth);
    readerDNN_2j->AddVariable("jetpt1_cut", &l_2j_jetpt1_cut);
    readerDNN_2j->AddVariable("uperp", &l_2j_uperp);
    readerDNN_2j->AddVariable("upara", &l_2j_upara);
    readerDNN_2j->AddVariable("PfMetDivSumMet", &l_2j_PfMetDivSumMet);
    readerDNN_2j->AddVariable("recoil", &l_2j_recoil);
    readerDNN_2j->AddVariable("mpmet", &l_2j_mpmet);
    readerDNN_2j->AddVariable("mtw1", &l_2j_mtw1);
    readerDNN_2j->AddVariable("mtw2", &l_2j_mtw2);
    readerDNN_2j->AddVariable("PuppiMET_pt", &l_2j_PuppiMET_pt);
    readerDNN_2j->AddVariable("MET_pt", &l_2j_MET_pt);
    readerDNN_2j->AddVariable("TkMET_pt", &l_2j_TkMET_pt);
    readerDNN_2j->AddVariable("projtkmet", &l_2j_projtkmet);
    readerDNN_2j->AddVariable("projpfmet", &l_2j_projpfmet);
    readerDNN_2j->AddVariable("dphilljet_cut", &l_2j_dphilljet_cut);
    readerDNN_2j->AddVariable("dphijet1met_cut", &l_2j_dphijet1met_cut);
    readerDNN_2j->AddVariable("dphillmet", &l_2j_dphillmet);
    readerDNN_2j->AddVariable("dphilmet1", &l_2j_dphilmet1);
    readerDNN_2j->AddVariable("dphilmet2", &l_2j_dphilmet2);
    readerDNN_2j->AddVariable("jetpt2_cut", &l_2j_jetpt2_cut);
    readerDNN_2j->AddVariable("dphijet2met_cut", &l_2j_dphijet2met_cut);
    readerDNN_2j->AddVariable("dphilljetjet_cut", &l_2j_dphilljetjet_cut);
    readerDNN_2j->AddVariable("dphijjmet_cut", &l_2j_dphijjmet_cut);
    readerDNN_2j->AddVariable("ptTOT_cut", &l_2j_ptTOT_cut);
    readerDNN_2j->AddVariable("mTOT_cut", &l_2j_mTOT_cut);
    readerDNN_2j->AddVariable("PV_npvsGood", &l_2j_PV_npvsGood);

    readerDNN_2j->BookMVA("PyKeras","/afs/cern.ch/work/d/ddicroce/Latinos/CMSSW_11_0_0_pre7/src/LatinoAnalysis/NanoGardener/python/data/DYSFmva/2016_v5/TMVAClassification_PyKeras_2016_2j.weights.xml"); 

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
        
        l_2j_ptll = l_2j__ptll;
        l_2j_mth  = l_2j__mth;
        l_2j_jetpt1_cut = l_2j__jetpt1_cut;
        l_2j_uperp = l_2j__uperp;
        l_2j_upara = l_2j__upara;
        l_2j_PfMetDivSumMet = l_2j__PfMetDivSumMet;
        l_2j_recoil = l_2j__recoil;
        l_2j_mpmet = l_2j__mpmet;
        l_2j_mtw1 = l_2j__mtw1;
        l_2j_mtw2 = l_2j__mtw2;
        l_2j_PuppiMET_pt = l_2j__PuppiMET_pt;
        l_2j_MET_pt = l_2j__MET_pt;
        l_2j_TkMET_pt = l_2j__TkMET_pt;
        l_2j_projtkmet = l_2j__projtkmet;
        l_2j_projpfmet = l_2j__projpfmet;
        l_2j_dphilljet_cut = l_2j__dphilljet_cut;
        l_2j_dphijet1met_cut = l_2j__dphijet1met_cut;
        l_2j_dphillmet = l_2j__dphillmet;
        l_2j_dphilmet1 = l_2j__dphilmet1;
        l_2j_dphilmet2 = l_2j__dphilmet2;
        l_2j_jetpt2_cut = l_2j__jetpt2_cut;
        l_2j_dphijet2met_cut = l_2j__dphijet2met_cut;
        l_2j_dphilljetjet_cut = l_2j__dphilljetjet_cut;
        l_2j_dphijjmet_cut = l_2j__dphijjmet_cut;
        l_2j_ptTOT_cut = l_2j__ptTOT_cut;
        l_2j_mTOT_cut = l_2j__mTOT_cut;
        l_2j_PV_npvsGood = l_2j__PV_npvsGood;

	float classifier = readerDNN_2j->EvaluateMVA("PyKeras");
	
        //std::cout << "[DNN 2j]    score: " << classifier << std::endl;
	return classifier;

}
