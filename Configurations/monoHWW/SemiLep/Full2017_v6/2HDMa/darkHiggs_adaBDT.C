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

TMVA::Reader* readerBDT = new TMVA::Reader();
bool initialized = false;
TString file_name_temp = "";

float evt_mtw1;
float evt_MHlnjj_deta_ljjVmet;
float evt_MHlnjj_dphi_ljjVmet;
float evt_MHlnjj_deta_jjVl;
float evt_MHlnjj_dphi_jjVl;
float evt_MHlnjj_deta_lVmet;
float evt_PuppiMET_pt;
float evt_MHlnjj_pt_ljj;
float evt_MHlnjj_PTljj_D_Mlmetjj;
float evt_MHlnjj_MINPTlj_D_PTmet;
float evt_MHlnjj_MINPTlj_D_Mlmetjj;
float evt_MHlnjj_m_jj;
float evt_MHlnjj_m_ljj;
float evt_MHlnjj_MAXPTlj_D_PTmet;
float evt_MHlnjj_MTljj_D_Mlmetjj;  

float bdt_mtw1;
float bdt_MHlnjj_deta_ljjVmet;
float bdt_MHlnjj_dphi_ljjVmet;
float bdt_MHlnjj_deta_jjVl;
float bdt_MHlnjj_dphi_jjVl;
float bdt_MHlnjj_deta_lVmet;
float bdt_PuppiMET_pt;
float bdt_MHlnjj_pt_ljj;
float bdt_MHlnjj_PTljj_D_Mlmetjj;
float bdt_MHlnjj_MINPTlj_D_PTmet;
float bdt_MHlnjj_MINPTlj_D_Mlmetjj;
float bdt_MHlnjj_m_jj;
float bdt_MHlnjj_m_ljj;
float bdt_MHlnjj_MAXPTlj_D_PTmet;
float bdt_MHlnjj_MTljj_D_Mlmetjj;  

void init_2HDMa_adaBDT(TTree* tree){
 
    tree->SetBranchAddress("mtw1"                     , &evt_mtw1                    );
    tree->SetBranchAddress("MHlnjj_deta_ljjVmet"      , &evt_MHlnjj_deta_ljjVmet     );
    tree->SetBranchAddress("MHlnjj_dphi_ljjVmet"      , &evt_MHlnjj_dphi_ljjVmet     );
    tree->SetBranchAddress("MHlnjj_deta_jjVl"         , &evt_MHlnjj_deta_jjVl        );
    tree->SetBranchAddress("MHlnjj_dphi_jjVl"         , &evt_MHlnjj_dphi_jjVl        );
    tree->SetBranchAddress("MHlnjj_deta_lVmet"        , &evt_MHlnjj_deta_lVmet       );
    tree->SetBranchAddress("PuppiMET_pt"              , &evt_PuppiMET_pt             );
    tree->SetBranchAddress("MHlnjj_pt_ljj"            , &evt_MHlnjj_pt_ljj           );
    tree->SetBranchAddress("MHlnjj_PTljj_D_Mlmetjj"   , &evt_MHlnjj_PTljj_D_Mlmetjj  );
    tree->SetBranchAddress("MHlnjj_MINPTlj_D_PTmet"   , &evt_MHlnjj_MINPTlj_D_PTmet  );
    tree->SetBranchAddress("MHlnjj_MINPTlj_D_Mlmetjj" , &evt_MHlnjj_MINPTlj_D_Mlmetjj);
    tree->SetBranchAddress("MHlnjj_m_jj"              , &evt_MHlnjj_m_jj             );
    tree->SetBranchAddress("MHlnjj_m_ljj"             , &evt_MHlnjj_m_ljj            );
    tree->SetBranchAddress("MHlnjj_MAXPTlj_D_PTmet"   , &evt_MHlnjj_MAXPTlj_D_PTmet  );
    tree->SetBranchAddress("MHlnjj_MTljj_D_Mlmetjj"   , &evt_MHlnjj_MTljj_D_Mlmetjj  );

    readerBDT->AddVariable("mtw1"                     , &bdt_mtw1                    );
    readerBDT->AddVariable("MHlnjj_deta_ljjVmet"      , &bdt_MHlnjj_deta_ljjVmet     );
    readerBDT->AddVariable("MHlnjj_dphi_ljjVmet"      , &bdt_MHlnjj_dphi_ljjVmet     );
    readerBDT->AddVariable("MHlnjj_deta_jjVl"         , &bdt_MHlnjj_deta_jjVl        );
    readerBDT->AddVariable("MHlnjj_dphi_jjVl"         , &bdt_MHlnjj_dphi_jjVl        );
    readerBDT->AddVariable("MHlnjj_deta_lVmet"        , &bdt_MHlnjj_deta_lVmet       );
    readerBDT->AddVariable("PuppiMET_pt"              , &bdt_PuppiMET_pt             );
    readerBDT->AddVariable("MHlnjj_pt_ljj"            , &bdt_MHlnjj_pt_ljj           );
    readerBDT->AddVariable("MHlnjj_PTljj_D_Mlmetjj"   , &bdt_MHlnjj_PTljj_D_Mlmetjj  );
    readerBDT->AddVariable("MHlnjj_MINPTlj_D_PTmet"   , &bdt_MHlnjj_MINPTlj_D_PTmet  );
    readerBDT->AddVariable("MHlnjj_MINPTlj_D_Mlmetjj" , &bdt_MHlnjj_MINPTlj_D_Mlmetjj);
    readerBDT->AddVariable("MHlnjj_m_jj"              , &bdt_MHlnjj_m_jj             );
    readerBDT->AddVariable("MHlnjj_m_ljj"             , &bdt_MHlnjj_m_ljj            );
    readerBDT->AddVariable("MHlnjj_MAXPTlj_D_PTmet"   , &bdt_MHlnjj_MAXPTlj_D_PTmet  );
    readerBDT->AddVariable("MHlnjj_MTljj_D_Mlmetjj"   , &bdt_MHlnjj_MTljj_D_Mlmetjj  );

    readerBDT->BookMVA("BDT","/afs/cern.ch/user/s/svanputt/work/monoHiggs/CMSSW_10_6_4/src/LatinoAnalysis/NanoGardener/python/data/MVA/monoHiggs/SemiLep/UATmva_2HDMaVWjets_2017_BDT_57Trees_AdaBoost_GiniIndex_20Cuts_CostComplexity_12PruneStrength_15Var.weights.xml"); 

}


float HDMa_adaBDT(int entry){
	
	if(file_name_temp != multidraw::currentTree->GetCurrentFile()->GetName()){
		cout << "file_name_temp = " << file_name_temp << endl;
		file_name_temp = multidraw::currentTree->GetCurrentFile()->GetName();
		cout << "file_name_temp = " << file_name_temp << endl;
		initialized = false;
	}

	
        if (!initialized){
		delete readerBDT;
		readerBDT = new TMVA::Reader();
		init_2HDMa_adaBDT(multidraw::currentTree);
		cout << "check init" << endl;	
		initialized = true;		
        }

	multidraw::currentTree->GetEntry(entry);
       
        bdt_mtw1                     = evt_mtw1                    ;
        bdt_MHlnjj_deta_ljjVmet      = evt_MHlnjj_deta_ljjVmet     ;
        bdt_MHlnjj_dphi_ljjVmet      = evt_MHlnjj_dphi_ljjVmet     ;
        bdt_MHlnjj_deta_jjVl         = evt_MHlnjj_deta_jjVl        ;
        bdt_MHlnjj_dphi_jjVl         = evt_MHlnjj_dphi_jjVl        ;
        bdt_MHlnjj_deta_lVmet        = evt_MHlnjj_deta_lVmet       ;
        bdt_PuppiMET_pt              = evt_PuppiMET_pt             ;
        bdt_MHlnjj_pt_ljj            = evt_MHlnjj_pt_ljj           ;
        bdt_MHlnjj_PTljj_D_Mlmetjj   = evt_MHlnjj_PTljj_D_Mlmetjj  ;
        bdt_MHlnjj_MINPTlj_D_PTmet   = evt_MHlnjj_MINPTlj_D_PTmet  ;
        bdt_MHlnjj_MINPTlj_D_Mlmetjj = evt_MHlnjj_MINPTlj_D_Mlmetjj;
        bdt_MHlnjj_m_jj              = evt_MHlnjj_m_jj             ;
        bdt_MHlnjj_m_ljj             = evt_MHlnjj_m_ljj            ;
        bdt_MHlnjj_MAXPTlj_D_PTmet   = evt_MHlnjj_MAXPTlj_D_PTmet  ;
        bdt_MHlnjj_MTljj_D_Mlmetjj   = evt_MHlnjj_MTljj_D_Mlmetjj  ;

	float classifier = readerBDT->EvaluateMVA("BDT");
	
        //std::cout << "[DNN 0j]    score: " << classifier << std::endl;
	return classifier;

}
