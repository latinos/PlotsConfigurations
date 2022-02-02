#include "LatinoAnalysis/MultiDraw/interface/TTreeFunction.h"
#include "LatinoAnalysis/MultiDraw/interface/FunctionLibrary.h"

#include <iostream>
#include <stdexcept>
#include <map>

#include <TMVA/Reader.h>
#include <TMVA/PyMethodBase.h>

#ifndef BDTbtag_HH
#define BDTbtag_HH

using namespace std;

class BDTbtag : public multidraw::TTreeFunction {
    public:
        BDTbtag(string xml_file); 
 
        void init();
   
        char const* getName() const override { 
            return "BDTbtag"; 
        }
        TTreeFunction* clone() const override { 
            return new BDTbtag(XMLfile);
        }
    
        unsigned getNdata() override { return 1; }
        double evaluate(unsigned) override;
    
    protected:  
        ~BDTbtag();
        void bindTree_(multidraw::FunctionLibrary&) override;
    
        TTreeReaderArray<float>* PuppiMET_pt;
        TTreeReaderArray<float>* MHlnjj_pt_ljj;
        TTreeReaderArray<float>* MHlnjj_pt_jj;
        TTreeReaderArray<float>* MHlnjj_MINPTlj_D_PTmet;
        TTreeReaderArray<float>* MHlnjj_MAXPTlj_D_PTmet;
        TTreeReaderArray<float>* MHlnjj_MAXPTlj_D_Mlmetjj;
        TTreeReaderArray<float>* MHlnjj_dphi_ljjVmet;
        TTreeReaderArray<float>* MHlnjj_dphi_jjVl;
        TTreeReaderArray<float>* MHlnjj_deta_jjVl;
        TTreeReaderArray<float>* MHlnjj_dphi_lVmet;
        TTreeReaderArray<float>* MHlnjj_deta_lVmet;
        TTreeReaderArray<float>* MHlnjj_dphi_jVj;
        TTreeReaderArray<float>* MHlnjj_deta_jVj;

        TTreeReaderArray<float>* Jet_btagDeepB;
        TTreeReaderArray<int>* CleanJet_jetIdx;
        TTreeReaderArray<int>* HM_idx_j1;
        TTreeReaderArray<int>* HM_idx_j2;
        
        string XMLfile;
        TMVA::Reader *reader = new TMVA::Reader();

        map<TString, float> FloatMap;
        vector<TString> variables;
};                             

BDTbtag::BDTbtag(string xml_file): 
    TTreeFunction(),
    XMLfile(xml_file)
{
    init();
}

void
BDTbtag::init()
{
    variables = {
        "PuppiMET_pt",
        "MHlnjj_pt_ljj",
        "MHlnjj_pt_jj",
        "MHlnjj_MINPTlj_D_PTmet",
        "MHlnjj_MAXPTlj_D_PTmet",
        "MHlnjj_MAXPTlj_D_Mlmetjj",
        "MHlnjj_dphi_ljjVmet",
        "MHlnjj_dphi_jjVl",
        "MHlnjj_deta_jjVl",
        "MHlnjj_dphi_lVmet",
        "MHlnjj_deta_lVmet",
        "MHlnjj_dphi_jVj",
        "MHlnjj_deta_jVj",
        "MHlnjj_j1_btag",
        "MHlnjj_j2_btag",
    };
}


double
BDTbtag::evaluate(unsigned)
{
    FloatMap["PuppiMET_pt"]              = float(PuppiMET_pt              ->At(0)); 
    FloatMap["MHlnjj_pt_ljj"]            = float(MHlnjj_pt_ljj            ->At(0));    
    FloatMap["MHlnjj_pt_jj"]             = float(MHlnjj_pt_jj             ->At(0)); 
    FloatMap["MHlnjj_dphi_ljjVmet"]      = float(MHlnjj_dphi_ljjVmet      ->At(0)); 
    FloatMap["MHlnjj_dphi_jjVl"]         = float(MHlnjj_dphi_jjVl         ->At(0)); 
    FloatMap["MHlnjj_deta_jjVl"]         = float(MHlnjj_deta_jjVl         ->At(0)); 
    FloatMap["MHlnjj_dphi_lVmet"]        = float(MHlnjj_dphi_lVmet        ->At(0)); 
    FloatMap["MHlnjj_deta_lVmet"]        = float(MHlnjj_deta_lVmet        ->At(0)); 
    FloatMap["MHlnjj_dphi_jVj"]          = float(MHlnjj_dphi_jVj          ->At(0)); 
    FloatMap["MHlnjj_deta_jVj"]          = float(MHlnjj_deta_jVj          ->At(0)); 
    FloatMap["MHlnjj_MINPTlj_D_PTmet"]   = float(MHlnjj_MINPTlj_D_PTmet   ->At(0)); 
    FloatMap["MHlnjj_MAXPTlj_D_PTmet"]   = float(MHlnjj_MAXPTlj_D_PTmet   ->At(0)); 
    FloatMap["MHlnjj_MAXPTlj_D_Mlmetjj"] = float(MHlnjj_MAXPTlj_D_Mlmetjj ->At(0)); 
    FloatMap["MHlnjj_j1_btag"]           = float(Jet_btagDeepB->At(CleanJet_jetIdx->At(HM_idx_j1->At(0)))); 
    FloatMap["MHlnjj_j2_btag"]           = float(Jet_btagDeepB->At(CleanJet_jetIdx->At(HM_idx_j2->At(0)))); 

    return reader->EvaluateMVA( "BDT");
}

void
BDTbtag::bindTree_(multidraw::FunctionLibrary& _library)
{   
    _library.bindBranch(PuppiMET_pt              , "PuppiMET_pt"              );
    _library.bindBranch(MHlnjj_pt_ljj            , "MHlnjj_pt_ljj"            );
    _library.bindBranch(MHlnjj_pt_jj             , "MHlnjj_pt_jj"             );
    _library.bindBranch(MHlnjj_dphi_ljjVmet      , "MHlnjj_dphi_ljjVmet"      );
    _library.bindBranch(MHlnjj_dphi_jjVl         , "MHlnjj_dphi_jjVl"         );
    _library.bindBranch(MHlnjj_deta_jjVl         , "MHlnjj_deta_jjVl"         );
    _library.bindBranch(MHlnjj_dphi_lVmet        , "MHlnjj_dphi_lVmet"        );
    _library.bindBranch(MHlnjj_deta_lVmet        , "MHlnjj_deta_lVmet"        );
    _library.bindBranch(MHlnjj_dphi_jVj          , "MHlnjj_dphi_jVj"          );
    _library.bindBranch(MHlnjj_deta_jVj          , "MHlnjj_deta_jVj"          );
    _library.bindBranch(MHlnjj_MINPTlj_D_PTmet   , "MHlnjj_MINPTlj_D_PTmet"   );
    _library.bindBranch(MHlnjj_MAXPTlj_D_PTmet   , "MHlnjj_MAXPTlj_D_PTmet"   );
    _library.bindBranch(MHlnjj_MAXPTlj_D_Mlmetjj , "MHlnjj_MAXPTlj_D_Mlmetjj" );

    _library.bindBranch(Jet_btagDeepB  , "Jet_btagDeepB"  );
    _library.bindBranch(CleanJet_jetIdx, "CleanJet_jetIdx");
    _library.bindBranch(HM_idx_j1      , "HM_idx_j1"      );
    _library.bindBranch(HM_idx_j2      , "HM_idx_j2"      );

    for (const auto& var: variables) {
        FloatMap.insert (pair<TString, float>(var, 0.));
    }

    for (const auto& var: variables) {
        reader->AddVariable(var, &FloatMap[var]);
    }

    reader->BookMVA("BDT", XMLfile);
}

BDTbtag::~BDTbtag(){
    PuppiMET_pt             =nullptr;
    MHlnjj_pt_ljj           =nullptr;
    MHlnjj_pt_jj            =nullptr;
    MHlnjj_dphi_ljjVmet     =nullptr;
    MHlnjj_dphi_jjVl        =nullptr;
    MHlnjj_deta_jjVl        =nullptr;
    MHlnjj_dphi_lVmet       =nullptr;
    MHlnjj_deta_lVmet       =nullptr;
    MHlnjj_dphi_jVj         =nullptr;
    MHlnjj_deta_jVj         =nullptr;
    MHlnjj_MINPTlj_D_PTmet  =nullptr;
    MHlnjj_MAXPTlj_D_PTmet  =nullptr;
    MHlnjj_MAXPTlj_D_Mlmetjj=nullptr;

    Jet_btagDeepB  =nullptr;
    CleanJet_jetIdx=nullptr;
    HM_idx_j1      =nullptr;
    HM_idx_j2      =nullptr;
}
#endif
