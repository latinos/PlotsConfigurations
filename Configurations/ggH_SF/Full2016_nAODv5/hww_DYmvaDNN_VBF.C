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

TMVA::Reader* readerDNN_VBF = new TMVA::Reader();
bool initialized_VBF = false;
TString name_temp_VBF = "";

//VBF
float l_VBF_ptll, l_VBF_mth, l_VBF_jetpt1_cut, l_VBF_uperp, l_VBF_PfMetDivSumMet, l_VBF_recoil, l_VBF_mpmet, l_VBF_mtw1, l_VBF_PuppiMET_pt, l_VBF_MET_pt, l_VBF_dphijet1met_cut, l_VBF_upara, l_VBF_mtw2, l_VBF_TkMET_pt, l_VBF_projtkmet, l_VBF_projpfmet, l_VBF_dphilljet_cut, l_VBF_dphillmet, l_VBF_dphilmet1, l_VBF_dphilmet2, l_VBF_jetpt2_cut, l_VBF_dphijet2met_cut, l_VBF_dphilljetjet_cut, l_VBF_dphijjmet_cut, l_VBF_ptTOT_cut, l_VBF_mTOT_cut, l_VBF_Ceta_cut;
float l_VBF_PV_npvsGood; 
float l_VBF__ptll, l_VBF__mth, l_VBF__jetpt1_cut, l_VBF__uperp, l_VBF__PfMetDivSumMet, l_VBF__recoil, l_VBF__mpmet, l_VBF__mtw1, l_VBF__PuppiMET_pt, l_VBF__MET_pt, l_VBF__dphijet1met_cut, l_VBF__upara, l_VBF__mtw2, l_VBF__TkMET_pt, l_VBF__projtkmet, l_VBF__projpfmet, l_VBF__dphilljet_cut, l_VBF__dphillmet, l_VBF__dphilmet1, l_VBF__dphilmet2, l_VBF__jetpt2_cut, l_VBF__dphijet2met_cut, l_VBF__dphilljetjet_cut, l_VBF__dphijjmet_cut, l_VBF__ptTOT_cut, l_VBF__mTOT_cut, l_VBF__Ceta_cut;
int l_VBF__PV_npvsGood;

void init_hww_DYmvaDNN_VBF(TTree* tree){
 
    tree->SetBranchAddress("ptll", &l_VBF__ptll);
    tree->SetBranchAddress("mth", &l_VBF__mth);
    tree->SetBranchAddress("jetpt1_cut", &l_VBF__jetpt1_cut);
    tree->SetBranchAddress("uperp", &l_VBF__uperp);
    tree->SetBranchAddress("upara", &l_VBF__upara);
    tree->SetBranchAddress("PfMetDivSumMet", &l_VBF__PfMetDivSumMet);
    tree->SetBranchAddress("recoil", &l_VBF__recoil);
    tree->SetBranchAddress("mpmet", &l_VBF__mpmet);
    tree->SetBranchAddress("mtw1", &l_VBF__mtw1);
    tree->SetBranchAddress("mtw2", &l_VBF__mtw2);
    tree->SetBranchAddress("PuppiMET_pt", &l_VBF__PuppiMET_pt);
    tree->SetBranchAddress("MET_pt", &l_VBF__MET_pt);
    tree->SetBranchAddress("TkMET_pt", &l_VBF__TkMET_pt);
    tree->SetBranchAddress("projtkmet", &l_VBF__projtkmet);
    tree->SetBranchAddress("projpfmet", &l_VBF__projpfmet);
    tree->SetBranchAddress("dphilljet_cut", &l_VBF__dphilljet_cut);
    tree->SetBranchAddress("dphijet1met_cut", &l_VBF__dphijet1met_cut);
    tree->SetBranchAddress("dphillmet", &l_VBF__dphillmet);
    tree->SetBranchAddress("dphilmet1", &l_VBF__dphilmet1);
    tree->SetBranchAddress("dphilmet2", &l_VBF__dphilmet2);
    tree->SetBranchAddress("jetpt2_cut", &l_VBF__jetpt2_cut);
    tree->SetBranchAddress("dphijet2met_cut", &l_VBF__dphijet2met_cut);
    tree->SetBranchAddress("dphilljetjet_cut", &l_VBF__dphilljetjet_cut);
    tree->SetBranchAddress("dphijjmet_cut", &l_VBF__dphijjmet_cut);
    tree->SetBranchAddress("ptTOT_cut", &l_VBF__ptTOT_cut);
    tree->SetBranchAddress("mTOT_cut", &l_VBF__mTOT_cut);
    tree->SetBranchAddress("Ceta_cut", &l_VBF__Ceta_cut);
    tree->SetBranchAddress("PV_npvsGood", &l_VBF__PV_npvsGood);

    readerDNN_VBF->AddVariable("ptll", &l_VBF_ptll);
    readerDNN_VBF->AddVariable("mth", &l_VBF_mth);
    readerDNN_VBF->AddVariable("jetpt1_cut", &l_VBF_jetpt1_cut);
    readerDNN_VBF->AddVariable("uperp", &l_VBF_uperp);
    readerDNN_VBF->AddVariable("upara", &l_VBF_upara);
    readerDNN_VBF->AddVariable("PfMetDivSumMet", &l_VBF_PfMetDivSumMet);
    readerDNN_VBF->AddVariable("recoil", &l_VBF_recoil);
    readerDNN_VBF->AddVariable("mpmet", &l_VBF_mpmet);
    readerDNN_VBF->AddVariable("mtw1", &l_VBF_mtw1);
    readerDNN_VBF->AddVariable("mtw2", &l_VBF_mtw2);
    readerDNN_VBF->AddVariable("PuppiMET_pt", &l_VBF_PuppiMET_pt);
    readerDNN_VBF->AddVariable("MET_pt", &l_VBF_MET_pt);
    readerDNN_VBF->AddVariable("TkMET_pt", &l_VBF_TkMET_pt);
    readerDNN_VBF->AddVariable("projtkmet", &l_VBF_projtkmet);
    readerDNN_VBF->AddVariable("projpfmet", &l_VBF_projpfmet);
    readerDNN_VBF->AddVariable("dphilljet_cut", &l_VBF_dphilljet_cut);
    readerDNN_VBF->AddVariable("dphijet1met_cut", &l_VBF_dphijet1met_cut);
    readerDNN_VBF->AddVariable("dphillmet", &l_VBF_dphillmet);
    readerDNN_VBF->AddVariable("dphilmet1", &l_VBF_dphilmet1);
    readerDNN_VBF->AddVariable("dphilmet2", &l_VBF_dphilmet2);
    readerDNN_VBF->AddVariable("jetpt2_cut", &l_VBF_jetpt2_cut);
    readerDNN_VBF->AddVariable("dphijet2met_cut", &l_VBF_dphijet2met_cut);
    readerDNN_VBF->AddVariable("dphilljetjet_cut", &l_VBF_dphilljetjet_cut);
    readerDNN_VBF->AddVariable("dphijjmet_cut", &l_VBF_dphijjmet_cut);
    readerDNN_VBF->AddVariable("ptTOT_cut", &l_VBF_ptTOT_cut);
    readerDNN_VBF->AddVariable("mTOT_cut", &l_VBF_mTOT_cut);
    readerDNN_VBF->AddVariable("Ceta_cut", &l_VBF_Ceta_cut);
    readerDNN_VBF->AddVariable("PV_npvsGood", &l_VBF_PV_npvsGood);

    readerDNN_VBF->BookMVA("PyKeras","/afs/cern.ch/work/d/ddicroce/Latinos/CMSSW_11_0_0_pre7/src/LatinoAnalysis/NanoGardener/python/data/DYSFmva/2016_v5/TMVAClassification_PyKeras_2016_VBF.weights.xml"); 

}


float hww_DYmvaDNN_VBF(int entry){
	
	if(name_temp_VBF != multidraw::currentTree->GetCurrentFile()->GetName()){
		cout << "name_temp_VBF = " << name_temp_VBF << endl;
		name_temp_VBF = multidraw::currentTree->GetCurrentFile()->GetName();
		cout << "name_temp_VBF = " << name_temp_VBF << endl;
		initialized_VBF = false;
	}

	
        if (!initialized_VBF){
		delete readerDNN_VBF;
		readerDNN_VBF = new TMVA::Reader();
		init_hww_DYmvaDNN_VBF(multidraw::currentTree);
		cout << "check init" << endl;	
		initialized_VBF = true;		
        }

	multidraw::currentTree->GetEntry(entry);
        
        l_VBF_ptll = l_VBF__ptll;
        l_VBF_mth  = l_VBF__mth;
        l_VBF_jetpt1_cut = l_VBF__jetpt1_cut;
        l_VBF_uperp = l_VBF__uperp;
        l_VBF_upara = l_VBF__upara;
        l_VBF_PfMetDivSumMet = l_VBF__PfMetDivSumMet;
        l_VBF_recoil = l_VBF__recoil;
        l_VBF_mpmet = l_VBF__mpmet;
        l_VBF_mtw1 = l_VBF__mtw1;
        l_VBF_mtw2 = l_VBF__mtw2;
        l_VBF_PuppiMET_pt = l_VBF__PuppiMET_pt;
        l_VBF_MET_pt = l_VBF__MET_pt;
        l_VBF_TkMET_pt = l_VBF__TkMET_pt;
        l_VBF_projtkmet = l_VBF__projtkmet;
        l_VBF_projpfmet = l_VBF__projpfmet;
        l_VBF_dphilljet_cut = l_VBF__dphilljet_cut;
        l_VBF_dphijet1met_cut = l_VBF__dphijet1met_cut;
        l_VBF_dphillmet = l_VBF__dphillmet;
        l_VBF_dphilmet1 = l_VBF__dphilmet1;
        l_VBF_dphilmet2 = l_VBF__dphilmet2;
        l_VBF_jetpt2_cut = l_VBF__jetpt2_cut;
        l_VBF_dphijet2met_cut = l_VBF__dphijet2met_cut;
        l_VBF_dphilljetjet_cut = l_VBF__dphilljetjet_cut;
        l_VBF_dphijjmet_cut = l_VBF__dphijjmet_cut;
        l_VBF_ptTOT_cut = l_VBF__ptTOT_cut;
        l_VBF_mTOT_cut = l_VBF__mTOT_cut;
        l_VBF_Ceta_cut = l_VBF__Ceta_cut;
        l_VBF_PV_npvsGood = l_VBF__PV_npvsGood;

	float classifier = readerDNN_VBF->EvaluateMVA("PyKeras");
	
        //std::cout << "[DNN VBF]    score: " << classifier << std::endl;
	return classifier;

}
