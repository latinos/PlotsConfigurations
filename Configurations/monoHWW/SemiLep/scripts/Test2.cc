#include "LatinoAnalysis/MultiDraw/interface/TTreeFunction.h"
#include "LatinoAnalysis/MultiDraw/interface/FunctionLibrary.h"

#include <iostream>
#include <stdexcept>
#include <map>

#include <TMVA/Reader.h>
#include <TMVA/PyMethodBase.h>

#ifndef Test2_HH
#define Test2_HH

using namespace std;

class Test2 : public multidraw::TTreeFunction {
    public:
        Test2(); 
 
        void init();
   
        char const* getName() const override { 
            return "Test2"; 
        }
        TTreeFunction* clone() const override { 
            return new Test2();
        }
    
        unsigned getNdata() override { return 1; }
        double evaluate(unsigned) override;
    
    protected:  
        ~Test2();
        void bindTree_(multidraw::FunctionLibrary&) override;
    
        //TTreeReaderArray<float>* PuppiMET_pt;
        TTreeReaderArray<float>* MHlnjj_pt_jj;
        //TTreeReaderArray<float>* MHlnjj_MINPTlj_D_PTmet;
        //TTreeReaderArray<float>* MHlnjj_MAXPTlj_D_PTmet;
        //TTreeReaderArray<float>* MHlnjj_MAXPTlj_D_Mlmetjj;
        //TTreeReaderArray<float>* MHlnjj_dphi_ljjVmet;
        //TTreeReaderArray<float>* MHlnjj_dphi_jjVl;
        //TTreeReaderArray<float>* MHlnjj_deta_jjVl;
        //TTreeReaderArray<float>* MHlnjj_dphi_lVmet;
        //TTreeReaderArray<float>* MHlnjj_deta_lVmet;
        //TTreeReaderArray<float>* MHlnjj_dphi_jVj;
        //TTreeReaderArray<float>* MHlnjj_deta_jVj;

        //TTreeReaderArray<float>* MHlnjj_pt_ljj;
        TTreeReaderArray<float>* MHlnjj_pt_ljj;
        TTreeReaderArray<double>* Test_pt_ljj;
        TTreeReaderArray<double>* Test_pt_jj;

        TTreeReaderArray<float>* Jet_btagDeepB;
        TTreeReaderArray<int>* CleanJet_jetIdx;
        TTreeReaderArray<int>* HM_idx_j1;
        TTreeReaderArray<int>* HM_idx_j2;
        TTreeReaderArray<double>* MHlnjj_j1_btag;
        
 
        //TMVA::Reader *reader_true = new TMVA::Reader();
        //TMVA::Reader *reader_test = new TMVA::Reader();

        //map<TString, float> FloatMap;
};                             

Test2::Test2(): 
    TTreeFunction() 
{
    init();
}

void
Test2::init()
{
}


double
Test2::evaluate(unsigned)
{
    //cout << "__New__" << endl;
    ////cout << "True value: pt_ljj=" << MHlnjj_pt_ljj->At(0) <<", pt_jj=" <<MHlnjj_pt_jj->At(0) << ", BDT: " << reader_true->EvaluateMVA( "BDT_true") << endl;
    ////cout << "Test2 value: pt_ljj=" << Test_pt_ljj->At(0) <<", pt_jj=" <<Test_pt_jj->At(0) << ", BDT: " << reader_test->EvaluateMVA( "BDT_test") << endl;

    ////FloatMap["PuppiMET_pt"]              = float(PuppiMET_pt              ->At(0)); 
    //FloatMap["MHlnjj_pt_jj"]             = float(MHlnjj_pt_jj             ->At(0)); 
    ////FloatMap["MHlnjj_dphi_ljjVmet"]      = float(MHlnjj_dphi_ljjVmet      ->At(0)); 
    ////FloatMap["MHlnjj_dphi_jjVl"]         = float(MHlnjj_dphi_jjVl         ->At(0)); 
    ////FloatMap["MHlnjj_deta_jjVl"]         = float(MHlnjj_deta_jjVl         ->At(0)); 
    ////FloatMap["MHlnjj_dphi_lVmet"]        = float(MHlnjj_dphi_lVmet        ->At(0)); 
    ////FloatMap["MHlnjj_deta_lVmet"]        = float(MHlnjj_deta_lVmet        ->At(0)); 
    ////FloatMap["MHlnjj_dphi_jVj"]          = float(MHlnjj_dphi_jVj          ->At(0)); 
    ////FloatMap["MHlnjj_deta_jVj"]          = float(MHlnjj_deta_jVj          ->At(0)); 
    ////FloatMap["MHlnjj_MINPTlj_D_PTmet"]   = float(MHlnjj_MINPTlj_D_PTmet   ->At(0)); 
    ////FloatMap["MHlnjj_MAXPTlj_D_PTmet"]   = float(MHlnjj_MAXPTlj_D_PTmet   ->At(0)); 
    ////FloatMap["MHlnjj_MAXPTlj_D_Mlmetjj"] = float(MHlnjj_MAXPTlj_D_Mlmetjj ->At(0)); 
    //FloatMap["MHlnjj_pt_ljj"]            = float(MHlnjj_pt_ljj            ->At(0));    
    //FloatMap["Test_pt_ljj"]              = float(Test_pt_ljj              ->At(0));     
    //FloatMap["Test_pt_jj"]               = float(Test_pt_jj               ->At(0));     

    float True_j1_btag = Jet_btagDeepB->At(CleanJet_jetIdx->At(HM_idx_j1->At(0)));

    if (abs(MHlnjj_pt_ljj->At(0) - Test_pt_ljj->At(0)) > 0.01) {
        cout << "True value pt_ljj=" << MHlnjj_pt_ljj->At(0) <<", Test2 value pt_ljj=" << Test_pt_ljj->At(0) << endl;
    }
    if (abs(MHlnjj_pt_jj->At(0) - Test_pt_jj->At(0)) > 0.01) {
        cout << "True value  pt_jj=" << MHlnjj_pt_jj->At(0) <<", Test2 value  pt_jj=" << Test_pt_jj->At(0) << endl;
    }
    if (abs(True_j1_btag - MHlnjj_j1_btag->At(0)) > 0.01) {
        cout << "True b-tag j1: " << True_j1_btag << ", Test2 b-tag j1: " << MHlnjj_j1_btag->At(0) << endl;
    }

    //cout << "True value: pt_ljj=" << MHlnjj_pt_ljj->At(0) <<", pt_jj=" <<MHlnjj_pt_jj->At(0) << ", BDT: " << reader_true->EvaluateMVA( "BDT_true") << endl;
    //cout << "True value: pt_ljj=" << MHlnjj_pt_ljj->At(0) <<", pt_jj=" <<MHlnjj_pt_jj->At(0) << ", BDT: " << reader_true->EvaluateMVA( "BDT_true") << endl;
    //cout << "Test2 value: pt_ljj=" << Test_pt_ljj->At(0) <<", pt_jj=" <<Test_pt_jj->At(0) << ", BDT: " << reader_test->EvaluateMVA( "BDT_test") << endl;
    //cout << "Test2 value: pt_ljj=" << Test_pt_ljj->At(0) <<", pt_jj=" <<Test_pt_jj->At(0) << ", BDT: " << reader_test->EvaluateMVA( "BDT_test") << endl;
    return 1.;
}

void
Test2::bindTree_(multidraw::FunctionLibrary& _library)
{   
    //_library.bindBranch(PuppiMET_pt              , "PuppiMET_pt"              );
    _library.bindBranch(MHlnjj_pt_jj             , "MHlnjj_pt_jj"             );
    //_library.bindBranch(MHlnjj_dphi_ljjVmet      , "MHlnjj_dphi_ljjVmet"      );
    //_library.bindBranch(MHlnjj_dphi_jjVl         , "MHlnjj_dphi_jjVl"         );
    //_library.bindBranch(MHlnjj_deta_jjVl         , "MHlnjj_deta_jjVl"         );
    //_library.bindBranch(MHlnjj_dphi_lVmet        , "MHlnjj_dphi_lVmet"        );
    //_library.bindBranch(MHlnjj_deta_lVmet        , "MHlnjj_deta_lVmet"        );
    //_library.bindBranch(MHlnjj_dphi_jVj          , "MHlnjj_dphi_jVj"          );
    //_library.bindBranch(MHlnjj_deta_jVj          , "MHlnjj_deta_jVj"          );
    //_library.bindBranch(MHlnjj_MINPTlj_D_PTmet   , "MHlnjj_MINPTlj_D_PTmet"   );
    //_library.bindBranch(MHlnjj_MAXPTlj_D_PTmet   , "MHlnjj_MAXPTlj_D_PTmet"   );
    //_library.bindBranch(MHlnjj_MAXPTlj_D_Mlmetjj , "MHlnjj_MAXPTlj_D_Mlmetjj" );

    _library.bindBranch(MHlnjj_pt_ljj, "MHlnjj_pt_ljj");
    _library.bindBranch(Test_pt_ljj,   "Test_pt_ljj");
    _library.bindBranch(Test_pt_jj,    "Test_pt_jj");

    _library.bindBranch(Jet_btagDeepB  , "Jet_btagDeepB"  );
    _library.bindBranch(CleanJet_jetIdx, "CleanJet_jetIdx");
    _library.bindBranch(HM_idx_j1      , "HM_idx_j1"      );
    _library.bindBranch(HM_idx_j2      , "HM_idx_j2"      );
    _library.bindBranch(MHlnjj_j1_btag , "MHlnjj_j1_btag" );

    ////FloatMap.insert (pair<TString, float>("PuppiMET_pt"             , 0.)); 
    //FloatMap.insert (pair<TString, float>("MHlnjj_pt_jj"            , 0.)); 
    ////FloatMap.insert (pair<TString, float>("MHlnjj_dphi_ljjVmet"     , 0.)); 
    ////FloatMap.insert (pair<TString, float>("MHlnjj_dphi_jjVl"        , 0.)); 
    ////FloatMap.insert (pair<TString, float>("MHlnjj_deta_jjVl"        , 0.)); 
    ////FloatMap.insert (pair<TString, float>("MHlnjj_dphi_lVmet"       , 0.)); 
    ////FloatMap.insert (pair<TString, float>("MHlnjj_deta_lVmet"       , 0.)); 
    ////FloatMap.insert (pair<TString, float>("MHlnjj_dphi_jVj"         , 0.)); 
    ////FloatMap.insert (pair<TString, float>("MHlnjj_deta_jVj"         , 0.)); 
    ////FloatMap.insert (pair<TString, float>("MHlnjj_MINPTlj_D_PTmet"  , 0.)); 
    ////FloatMap.insert (pair<TString, float>("MHlnjj_MAXPTlj_D_PTmet"  , 0.)); 
    ////FloatMap.insert (pair<TString, float>("MHlnjj_MAXPTlj_D_Mlmetjj", 0.)); 
    //FloatMap.insert (pair<TString, float>("MHlnjj_pt_ljj"           , 0.)); 
    //FloatMap.insert (pair<TString, float>("Test_pt_ljj"             , 0.)); 
    //FloatMap.insert (pair<TString, float>("Test_pt_jj"              , 0.)); 

    //reader_test->AddVariable( "PuppiMET_pt"             , &FloatMap["PuppiMET_pt"]             );
    //reader_test->AddVariable( "Test_pt_ljj"             , &FloatMap["Test_pt_ljj"]);
    //reader_test->AddVariable( "Test_pt_jj"              , &FloatMap["Test_pt_jj"]              );
    //reader_test->AddVariable( "MHlnjj_MINPTlj_D_PTmet"  , &FloatMap["MHlnjj_MINPTlj_D_PTmet"]  );
    //reader_test->AddVariable( "MHlnjj_MAXPTlj_D_PTmet"  , &FloatMap["MHlnjj_MAXPTlj_D_PTmet"]  );
    //reader_test->AddVariable( "MHlnjj_MAXPTlj_D_Mlmetjj", &FloatMap["MHlnjj_MAXPTlj_D_Mlmetjj"]);
    //reader_test->AddVariable( "MHlnjj_dphi_ljjVmet"     , &FloatMap["MHlnjj_dphi_ljjVmet"]     );
    //reader_test->AddVariable( "MHlnjj_dphi_jjVl"        , &FloatMap["MHlnjj_dphi_jjVl"]        );
    //reader_test->AddVariable( "MHlnjj_deta_jjVl"        , &FloatMap["MHlnjj_deta_jjVl"]        );
    //reader_test->AddVariable( "MHlnjj_dphi_lVmet"       , &FloatMap["MHlnjj_dphi_lVmet"]       );
    //reader_test->AddVariable( "MHlnjj_deta_lVmet"       , &FloatMap["MHlnjj_deta_lVmet"]       );
    //reader_test->AddVariable( "MHlnjj_dphi_jVj"         , &FloatMap["MHlnjj_dphi_jVj"]         );
    //reader_test->AddVariable( "MHlnjj_deta_jVj"         , &FloatMap["MHlnjj_deta_jVj"]         );

    //reader_true->AddVariable( "PuppiMET_pt"             , &FloatMap["PuppiMET_pt"]             );
    //reader_true->AddVariable( "MHlnjj_pt_ljj"           , &FloatMap["MHlnjj_pt_ljj"]);
    //reader_true->AddVariable( "MHlnjj_pt_jj"            , &FloatMap["MHlnjj_pt_jj"]            );
    //reader_true->AddVariable( "MHlnjj_MINPTlj_D_PTmet"  , &FloatMap["MHlnjj_MINPTlj_D_PTmet"]  );
    //reader_true->AddVariable( "MHlnjj_MAXPTlj_D_PTmet"  , &FloatMap["MHlnjj_MAXPTlj_D_PTmet"]  );
    //reader_true->AddVariable( "MHlnjj_MAXPTlj_D_Mlmetjj", &FloatMap["MHlnjj_MAXPTlj_D_Mlmetjj"]);
    //reader_true->AddVariable( "MHlnjj_dphi_ljjVmet"     , &FloatMap["MHlnjj_dphi_ljjVmet"]     );
    //reader_true->AddVariable( "MHlnjj_dphi_jjVl"        , &FloatMap["MHlnjj_dphi_jjVl"]        );
    //reader_true->AddVariable( "MHlnjj_deta_jjVl"        , &FloatMap["MHlnjj_deta_jjVl"]        );
    //reader_true->AddVariable( "MHlnjj_dphi_lVmet"       , &FloatMap["MHlnjj_dphi_lVmet"]       );
    //reader_true->AddVariable( "MHlnjj_deta_lVmet"       , &FloatMap["MHlnjj_deta_lVmet"]       );
    //reader_true->AddVariable( "MHlnjj_dphi_jVj"         , &FloatMap["MHlnjj_dphi_jVj"]         );
    //reader_true->AddVariable( "MHlnjj_deta_jVj"         , &FloatMap["MHlnjj_deta_jVj"]         );

    //reader_test->BookMVA( "BDT_test", "/afs/cern.ch/user/s/svanputt/work/monoHiggs/PR/CMSSW_10_6_5/src/PlotsConfigurations/Configurations/monoHWW/SemiLep/MVA/darkHiggs/btag_study/debug/UATmva_darkHiggsHighMZpVWjAndTT_2017_BDT_500Trees_AdaBoost_GiniIndex_20Cuts_CostComplexity_12PruneStrength_13Var.weights.xml");
    //reader_true->BookMVA( "BDT_true", "/afs/cern.ch/user/s/svanputt/work/monoHiggs/PR/CMSSW_10_6_5/src/PlotsConfigurations/Configurations/monoHWW/SemiLep/MVA/darkHiggs/TKcut/UATmva_darkHiggsHighMZpVWjAndTT_2017_BDT_500Trees_AdaBoost_GiniIndex_20Cuts_CostComplexity_12PruneStrength_13Var.weights.xml");
}

Test2::~Test2(){
    //PuppiMET_pt             =nullptr;
    //MHlnjj_dphi_ljjVmet     =nullptr;
    //MHlnjj_dphi_jjVl        =nullptr;
    //MHlnjj_deta_jjVl        =nullptr;
    //MHlnjj_dphi_lVmet       =nullptr;
    //MHlnjj_deta_lVmet       =nullptr;
    //MHlnjj_dphi_jVj         =nullptr;
    //MHlnjj_deta_jVj         =nullptr;
    //MHlnjj_MINPTlj_D_PTmet  =nullptr;
    //MHlnjj_MAXPTlj_D_PTmet  =nullptr;
    //MHlnjj_MAXPTlj_D_Mlmetjj=nullptr;


    MHlnjj_pt_ljj=nullptr;
    MHlnjj_pt_jj=nullptr;
    Test_pt_ljj=nullptr;
    Test_pt_jj=nullptr;

    Jet_btagDeepB=nullptr;
    CleanJet_jetIdx=nullptr;
    HM_idx_j1=nullptr;
    HM_idx_j2=nullptr;
    MHlnjj_j1_btag=nullptr;
}
#endif
