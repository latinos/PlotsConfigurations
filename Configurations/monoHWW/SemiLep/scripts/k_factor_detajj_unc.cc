#include "LatinoAnalysis/MultiDraw/interface/TTreeFunction.h"
#include "LatinoAnalysis/MultiDraw/interface/FunctionLibrary.h"

// #include <vector>

#include "TGraph.h"
#include "TFile.h"
#include "TH2F.h"
#include "Math/Vector4Dfwd.h"
#include "Math/GenVector/LorentzVector.h"
#include "Math/GenVector/PtEtaPhiM4D.h"

//#include <iostream>


#ifndef kFactorDetajjUnc_HH
#define kFactorDetajjUnc_HH

class kFactorDetajjUnc : public multidraw::TTreeFunction {
public:
    kFactorDetajjUnc(TString file_name, TString tgraph_name); 
    
    char const* getName() const override { return "kFactorDetajjUnc"; }
    TTreeFunction* clone() const override { 
        return new kFactorDetajjUnc(n_file, n_graph); 
    }
    
    unsigned getNdata() override { return 4; } // nominal, stat_up, stat_do, jetsel
    int getMultiplicity() override { return 1; }
    void beginEvent(long long) override;
    double evaluate(unsigned) override;

protected:
  void bindTree_(multidraw::FunctionLibrary&) override;

  TString n_file;
  TString n_graph;

  FloatArrayReader* MHlnjj_deta_jVj;

  TGraph* Wpt_map_nom;
  TGraph* Wpt_map_stat_up;
  TGraph* Wpt_map_stat_do;
  //TGraph* Wpt_map_jetsel;
  std::array<float,4> outputValues;
};

kFactorDetajjUnc::kFactorDetajjUnc(TString file_name, TString tgraph_name) :
    n_file(file_name),
    n_graph(tgraph_name),
    TTreeFunction()
{
    std::cout << "kFactorDetajjUnc constructor" << std::endl;
    TFile* src_file = new TFile(TString(std::getenv("CMSSW_BASE"))+"/src/" + n_file);
    Wpt_map_nom     = (TGraph*)src_file->Get(n_graph+"_nom");
    Wpt_map_stat_up = (TGraph*)src_file->Get(n_graph+"_stat_up");
    Wpt_map_stat_do = (TGraph*)src_file->Get(n_graph+"_stat_do");
    //Wpt_map_jetsel  = (TGraph*)src_file->Get(n_graph+"_jetsel");
    src_file->Close();
}

void
kFactorDetajjUnc::beginEvent(long long _iEntry)
{
    // Find Gen W and gen Lep, Neut
    float dejj{MHlnjj_deta_jVj->At(0)};

    // Correct edges
    if (dejj > 5.) dejj = 5.;
    if (dejj < 0.) dejj = 0.;

    // Get values from the graphs
    std::array<float,4> output { 1.,1.,1.,1.};
    output[0] = Wpt_map_nom    ->Eval(dejj); 
    output[1] = Wpt_map_stat_up->Eval(dejj); 
    output[2] = Wpt_map_stat_do->Eval(dejj); 
    //output[3] = Wpt_map_jetsel ->Eval(dejj); 

    outputValues = output;
    //if (output[0] == 0.) cout << "############### HERE ############" << endl;
    //cout << " - Map values: m jj = "<< dejj << endl;
    //cout << " - k-factor : " << outputValues[0] << ", " << outputValues[1] << ", " << outputValues[2] << ", " << outputValues[3]  << endl;
    //cout << ""; 
}


double
kFactorDetajjUnc::evaluate(unsigned iJ)
{
  // weightReader[0] : central, weightReader[1] : stat up, weightReader[2] : stat down, weightReader[3] : jet sel
  //cout <<  iJ << ", " << outputValues[iJ] << ", ";
  return outputValues[iJ];
}

void
kFactorDetajjUnc::bindTree_(multidraw::FunctionLibrary& _library)
{
    _library.bindBranch(MHlnjj_deta_jVj, "MHlnjj_deta_jVj");
}

#endif
