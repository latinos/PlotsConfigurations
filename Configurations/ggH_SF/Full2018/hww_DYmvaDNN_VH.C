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

TMVA::Reader* readerDNN_VH = new TMVA::Reader();
bool initialized_VH = false;
TString name_temp_VH = "";

//VHet
float l_VH_ptll, l_VH_mth, l_VH_jetpt1_cut, l_VH_uperp, l_VH_PfMetDivSumMet, l_VH_recoil, l_VH_mpmet, l_VH_mtw1, l_VH_PuppiMET_pt, l_VH_MET_pt, l_VH_dphijet1met_cut, l_VH_upara, l_VH_mtw2, l_VH_TkMET_pt, l_VH_projtkmet, l_VH_projpfmet, l_VH_dphilljet_cut, l_VH_dphillmet, l_VH_dphilmet1, l_VH_dphilmet2, l_VH_jetpt2_cut, l_VH_dphijet2met_cut, l_VH_dphilljetjet_cut, l_VH_dphijjmet_cut, l_VH_ptTOT_cut, l_VH_mTOT_cut;
float l_VH_PV_npvsGood; 
float l_VH__ptll, l_VH__mth, l_VH__jetpt1_cut, l_VH__uperp, l_VH__PfMetDivSumMet, l_VH__recoil, l_VH__mpmet, l_VH__mtw1, l_VH__PuppiMET_pt, l_VH__MET_pt, l_VH__dphijet1met_cut, l_VH__upara, l_VH__mtw2, l_VH__TkMET_pt, l_VH__projtkmet, l_VH__projpfmet, l_VH__dphilljet_cut, l_VH__dphillmet, l_VH__dphilmet1, l_VH__dphilmet2, l_VH__jetpt2_cut, l_VH__dphijet2met_cut, l_VH__dphilljetjet_cut, l_VH__dphijjmet_cut, l_VH__ptTOT_cut, l_VH__mTOT_cut;
int l_VH__PV_npvsGood;

void init_hww_DYmvaDNN_VH(TTree* tree){
 
    tree->SetBranchAddress("ptll", &l_VH__ptll);
    tree->SetBranchAddress("mth", &l_VH__mth);
    tree->SetBranchAddress("jetpt1_cut", &l_VH__jetpt1_cut);
    tree->SetBranchAddress("uperp", &l_VH__uperp);
    tree->SetBranchAddress("upara", &l_VH__upara);
    tree->SetBranchAddress("PfMetDivSumMet", &l_VH__PfMetDivSumMet);
    tree->SetBranchAddress("recoil", &l_VH__recoil);
    tree->SetBranchAddress("mpmet", &l_VH__mpmet);
    tree->SetBranchAddress("mtw1", &l_VH__mtw1);
    tree->SetBranchAddress("mtw2", &l_VH__mtw2);
    tree->SetBranchAddress("PuppiMET_pt", &l_VH__PuppiMET_pt);
    tree->SetBranchAddress("MET_pt", &l_VH__MET_pt);
    tree->SetBranchAddress("TkMET_pt", &l_VH__TkMET_pt);
    tree->SetBranchAddress("projtkmet", &l_VH__projtkmet);
    tree->SetBranchAddress("projpfmet", &l_VH__projpfmet);
    tree->SetBranchAddress("dphilljet_cut", &l_VH__dphilljet_cut);
    tree->SetBranchAddress("dphijet1met_cut", &l_VH__dphijet1met_cut);
    tree->SetBranchAddress("dphillmet", &l_VH__dphillmet);
    tree->SetBranchAddress("dphilmet1", &l_VH__dphilmet1);
    tree->SetBranchAddress("dphilmet2", &l_VH__dphilmet2);
    tree->SetBranchAddress("jetpt2_cut", &l_VH__jetpt2_cut);
    tree->SetBranchAddress("dphijet2met_cut", &l_VH__dphijet2met_cut);
    tree->SetBranchAddress("dphilljetjet_cut", &l_VH__dphilljetjet_cut);
    tree->SetBranchAddress("dphijjmet_cut", &l_VH__dphijjmet_cut);
    tree->SetBranchAddress("ptTOT_cut", &l_VH__ptTOT_cut);
    tree->SetBranchAddress("mTOT_cut", &l_VH__mTOT_cut);
    tree->SetBranchAddress("PV_npvsGood", &l_VH__PV_npvsGood);

    readerDNN_VH->AddVariable("ptll", &l_VH_ptll);
    readerDNN_VH->AddVariable("mth", &l_VH_mth);
    readerDNN_VH->AddVariable("jetpt1_cut", &l_VH_jetpt1_cut);
    readerDNN_VH->AddVariable("uperp", &l_VH_uperp);
    readerDNN_VH->AddVariable("upara", &l_VH_upara);
    readerDNN_VH->AddVariable("PfMetDivSumMet", &l_VH_PfMetDivSumMet);
    readerDNN_VH->AddVariable("recoil", &l_VH_recoil);
    readerDNN_VH->AddVariable("mpmet", &l_VH_mpmet);
    readerDNN_VH->AddVariable("mtw1", &l_VH_mtw1);
    readerDNN_VH->AddVariable("mtw2", &l_VH_mtw2);
    readerDNN_VH->AddVariable("PuppiMET_pt", &l_VH_PuppiMET_pt);
    readerDNN_VH->AddVariable("MET_pt", &l_VH_MET_pt);
    readerDNN_VH->AddVariable("TkMET_pt", &l_VH_TkMET_pt);
    readerDNN_VH->AddVariable("projtkmet", &l_VH_projtkmet);
    readerDNN_VH->AddVariable("projpfmet", &l_VH_projpfmet);
    readerDNN_VH->AddVariable("dphilljet_cut", &l_VH_dphilljet_cut);
    readerDNN_VH->AddVariable("dphijet1met_cut", &l_VH_dphijet1met_cut);
    readerDNN_VH->AddVariable("dphillmet", &l_VH_dphillmet);
    readerDNN_VH->AddVariable("dphilmet1", &l_VH_dphilmet1);
    readerDNN_VH->AddVariable("dphilmet2", &l_VH_dphilmet2);
    readerDNN_VH->AddVariable("jetpt2_cut", &l_VH_jetpt2_cut);
    readerDNN_VH->AddVariable("dphijet2met_cut", &l_VH_dphijet2met_cut);
    readerDNN_VH->AddVariable("dphilljetjet_cut", &l_VH_dphilljetjet_cut);
    readerDNN_VH->AddVariable("dphijjmet_cut", &l_VH_dphijjmet_cut);
    readerDNN_VH->AddVariable("ptTOT_cut", &l_VH_ptTOT_cut);
    readerDNN_VH->AddVariable("mTOT_cut", &l_VH_mTOT_cut);
    readerDNN_VH->AddVariable("PV_npvsGood", &l_VH_PV_npvsGood);

    readerDNN_VH->BookMVA("PyKeras","/afs/cern.ch/user/d/ddicroce/public/DYSFmva/2018_v5/TMVAClassification_PyKeras_2018_VH.weights.xml"); 

}


float hww_DYmvaDNN_VH(int entry){
	
	if(name_temp_VH != multidraw::currentTree->GetCurrentFile()->GetName()){
		cout << "name_temp_VH = " << name_temp_VH << endl;
		name_temp_VH = multidraw::currentTree->GetCurrentFile()->GetName();
		cout << "name_temp_VH = " << name_temp_VH << endl;
		initialized_VH = false;
	}

	
        if (!initialized_VH){
		delete readerDNN_VH;
		readerDNN_VH = new TMVA::Reader();
		init_hww_DYmvaDNN_VH(multidraw::currentTree);
		cout << "check init" << endl;	
		initialized_VH = true;		
        }

	multidraw::currentTree->GetEntry(entry);
        
        l_VH_ptll = l_VH__ptll;
        l_VH_mth  = l_VH__mth;
        l_VH_jetpt1_cut = l_VH__jetpt1_cut;
        l_VH_uperp = l_VH__uperp;
        l_VH_upara = l_VH__upara;
        l_VH_PfMetDivSumMet = l_VH__PfMetDivSumMet;
        l_VH_recoil = l_VH__recoil;
        l_VH_mpmet = l_VH__mpmet;
        l_VH_mtw1 = l_VH__mtw1;
        l_VH_mtw2 = l_VH__mtw2;
        l_VH_PuppiMET_pt = l_VH__PuppiMET_pt;
        l_VH_MET_pt = l_VH__MET_pt;
        l_VH_TkMET_pt = l_VH__TkMET_pt;
        l_VH_projtkmet = l_VH__projtkmet;
        l_VH_projpfmet = l_VH__projpfmet;
        l_VH_dphilljet_cut = l_VH__dphilljet_cut;
        l_VH_dphijet1met_cut = l_VH__dphijet1met_cut;
        l_VH_dphillmet = l_VH__dphillmet;
        l_VH_dphilmet1 = l_VH__dphilmet1;
        l_VH_dphilmet2 = l_VH__dphilmet2;
        l_VH_jetpt2_cut = l_VH__jetpt2_cut;
        l_VH_dphijet2met_cut = l_VH__dphijet2met_cut;
        l_VH_dphilljetjet_cut = l_VH__dphilljetjet_cut;
        l_VH_dphijjmet_cut = l_VH__dphijjmet_cut;
        l_VH_ptTOT_cut = l_VH__ptTOT_cut;
        l_VH_mTOT_cut = l_VH__mTOT_cut;
        l_VH_PV_npvsGood = l_VH__PV_npvsGood;

	float classifier = readerDNN_VH->EvaluateMVA("PyKeras");
	
        //std::cout << "[DNN VH]    score: " << classifier << std::endl;
	return classifier;

}
