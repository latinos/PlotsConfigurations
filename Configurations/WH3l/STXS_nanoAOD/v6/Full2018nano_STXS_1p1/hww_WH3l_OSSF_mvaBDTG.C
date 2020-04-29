#include "TMVA/Reader.h"
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

TMVA::Reader* myreaderBDTGOSSF = new TMVA::Reader();
bool initialized = false;
TString name_temp = "";

float loc0_WH3l_dphilllmet    , loc_WH3l_dphilllmet                                              ;
float loc0_WH3l_mOSll[100]    , loc_WH3l_mOSll_min                                               ;
float loc0_WH3l_ptOSll[100]   , loc_WH3l_ptOSll_min                                              ;
float loc0_WH3l_drOSll[100]   , loc_WH3l_drOSll_min                                              ;
float loc0_WH3l_ZVeto         , loc_WH3l_ZVeto                                                   ;
float loc0_WH3l_ptlll         , loc_WH3l_ptlll                                                   ;
float loc0_WH3l_mtlmet[100]   , loc_WH3l_mtlmet_0    , loc_WH3l_mtlmet_1   , loc_WH3l_mtlmet_2   ;
float loc0_WH3l_dphilmet[100] , loc_WH3l_dphilmet_0  , loc_WH3l_dphilmet_1 , loc_WH3l_dphilmet_2 ;
float loc0_WH3l_ptWWW         , loc_WH3l_ptWWW                                                   ;
float loc0_WH3l_mtWWW         , loc_WH3l_mtWWW                                                   ;
float loc0_WH3l_mlll          , loc_WH3l_mlll                                                    ;
float loc0_PuppiMET_pt        , loc_PuppiMET_pt                                                  ;
float loc0_Lepton_pt[100]     , loc_Lepton_pt_0      , loc_Lepton_pt_1     , loc_Lepton_pt_2     ;


float minFunc(float nom0, float nom1, float nom2){
    float minimal = 9999;
    if (nom0 > 0)
        minimal = nom0;
    if ((nom1 > 0) && (nom1 < minimal))
        minimal = nom1;
    if ((nom2 > 0) && (nom2 < minimal))
        minimal = nom2;
    return minimal;
}

void initmyreaderBDTOSSF(TTree* tree){

tree->SetBranchAddress("WH3l_dphilllmet",&loc0_WH3l_dphilllmet);
tree->SetBranchAddress("WH3l_mOSll",&loc0_WH3l_mOSll);
tree->SetBranchAddress("WH3l_ptOSll",&loc0_WH3l_ptOSll);
tree->SetBranchAddress("WH3l_drOSll",&loc0_WH3l_drOSll);
tree->SetBranchAddress("WH3l_ZVeto",&loc0_WH3l_ZVeto);
tree->SetBranchAddress("WH3l_ptlll",&loc0_WH3l_ptlll);
tree->SetBranchAddress("WH3l_mtlmet",&loc0_WH3l_mtlmet);
tree->SetBranchAddress("WH3l_dphilmet",&loc0_WH3l_dphilmet);
tree->SetBranchAddress("WH3l_ptWWW",&loc0_WH3l_ptWWW);
tree->SetBranchAddress("WH3l_mtWWW",&loc0_WH3l_mtWWW);
tree->SetBranchAddress("WH3l_mlll",&loc0_WH3l_mlll);
tree->SetBranchAddress("PuppiMET_pt",&loc0_PuppiMET_pt);
tree->SetBranchAddress("Lepton_pt",&loc0_Lepton_pt);

myreaderBDTGOSSF->AddVariable("WH3l_dphilllmet",&loc_WH3l_dphilllmet);
myreaderBDTGOSSF->AddVariable("MinIf$(WH3l_mOSll[],WH3l_mOSll[Iteration$]>0)",&loc_WH3l_mOSll_min);
myreaderBDTGOSSF->AddVariable("MinIf$(WH3l_ptOSll[],WH3l_ptOSll[Iteration$]>0)",&loc_WH3l_ptOSll_min);
myreaderBDTGOSSF->AddVariable("MinIf$(WH3l_drOSll[],WH3l_drOSll[Iteration$]>0)",&loc_WH3l_drOSll_min);
myreaderBDTGOSSF->AddVariable("WH3l_ZVeto",&loc_WH3l_ZVeto);
myreaderBDTGOSSF->AddVariable("WH3l_ptlll",&loc_WH3l_ptlll);
myreaderBDTGOSSF->AddVariable("WH3l_mtlmet[0]",&loc_WH3l_mtlmet_0);
myreaderBDTGOSSF->AddVariable("WH3l_mtlmet[1]",&loc_WH3l_mtlmet_1);
myreaderBDTGOSSF->AddVariable("WH3l_mtlmet[2]",&loc_WH3l_mtlmet_2);
myreaderBDTGOSSF->AddVariable("WH3l_dphilmet[0]",&loc_WH3l_dphilmet_0);
myreaderBDTGOSSF->AddVariable("WH3l_dphilmet[1]",&loc_WH3l_dphilmet_1);
myreaderBDTGOSSF->AddVariable("WH3l_dphilmet[2]",&loc_WH3l_dphilmet_2);
myreaderBDTGOSSF->AddVariable("WH3l_ptWWW",&loc_WH3l_ptWWW);
myreaderBDTGOSSF->AddVariable("WH3l_mtWWW",&loc_WH3l_mtWWW);
myreaderBDTGOSSF->AddVariable("WH3l_mlll",&loc_WH3l_mlll);
myreaderBDTGOSSF->AddVariable("PuppiMET_pt",&loc_PuppiMET_pt);
myreaderBDTGOSSF->AddVariable("Alt$(Lepton_pt[0],0)",&loc_Lepton_pt_0);
myreaderBDTGOSSF->AddVariable("Alt$(Lepton_pt[1],0)",&loc_Lepton_pt_1);
myreaderBDTGOSSF->AddVariable("Alt$(Lepton_pt[2],0)",&loc_Lepton_pt_2);

myreaderBDTGOSSF->BookMVA("BDTG4F07D31C2","/afs/cern.ch/user/p/pyu/public/HWWAnalysis/FullRunII06Apr_v6/TMVAClassification_2017OSSF.weights.xml");

}

float hww_WH3l_OSSF_mvaBDTG(int entry, int nclass){

    if(name_temp != multidraw::currentTree->GetCurrentFile()->GetName()){
        name_temp = multidraw::currentTree->GetCurrentFile()->GetName();
        initialized = false;
    }

    if (!initialized){
        delete myreaderBDTGOSSF;
        myreaderBDTGOSSF = new TMVA::Reader();
        initmyreaderBDTOSSF(multidraw::currentTree);
        initialized = true;
    }

    multidraw::currentTree->GetEntry(entry);

    loc_WH3l_dphilllmet = loc0_WH3l_dphilllmet ;
    loc_WH3l_mOSll_min  = minFunc( loc0_WH3l_mOSll[0], loc0_WH3l_mOSll[1], loc0_WH3l_mOSll[2] );
    loc_WH3l_ptOSll_min = minFunc( loc0_WH3l_ptOSll[0],loc0_WH3l_ptOSll[1],loc0_WH3l_ptOSll[2]);
    loc_WH3l_drOSll_min = minFunc( loc0_WH3l_drOSll[0],loc0_WH3l_drOSll[1],loc0_WH3l_drOSll[2]);
    loc_WH3l_ZVeto      = loc0_WH3l_ZVeto      ;
    loc_WH3l_ptlll      = loc0_WH3l_ptlll      ;
    loc_WH3l_mtlmet_0   = loc0_WH3l_mtlmet[0]   ;
    loc_WH3l_mtlmet_1   = loc0_WH3l_mtlmet[1]   ;
    loc_WH3l_mtlmet_2   = loc0_WH3l_mtlmet[2]   ;
    loc_WH3l_dphilmet_0 = loc0_WH3l_dphilmet[0] ;
    loc_WH3l_dphilmet_1 = loc0_WH3l_dphilmet[1] ;
    loc_WH3l_dphilmet_2 = loc0_WH3l_dphilmet[2] ;
    loc_WH3l_ptWWW      = loc0_WH3l_ptWWW      ;
    loc_WH3l_mtWWW      = loc0_WH3l_mtWWW      ;
    loc_WH3l_mlll       = loc0_WH3l_mlll       ;
    loc_PuppiMET_pt     = loc0_PuppiMET_pt     ;
    loc_Lepton_pt_0     = loc0_Lepton_pt[0]     ;
    loc_Lepton_pt_1     = loc0_Lepton_pt[1]     ;
    loc_Lepton_pt_2     = loc0_Lepton_pt[2]     ;

    float classifier = myreaderBDTGOSSF->EvaluateMVA("BDTG4F07D31C2");

    return classifier;

}

