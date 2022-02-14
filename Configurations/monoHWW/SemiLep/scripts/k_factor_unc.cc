#include "LatinoAnalysis/MultiDraw/interface/TTreeFunction.h"
#include "LatinoAnalysis/MultiDraw/interface/FunctionLibrary.h"

// #include <vector>

#include "TGraph.h"
#include "TFile.h"
//#include "Math/Vector4Dfwd.h"
//#include "Math/GenVector/LorentzVector.h"
//#include "Math/GenVector/PtEtaPhiM4D.h"

//#include <iostream>


#ifndef kFactorUnc_HH
#define kFactorUnc_HH

class kFactorUnc : public multidraw::TTreeFunction {
public:
    kFactorUnc(TString file_name, TString tgraph_name); 
    
    char const* getName() const override { return "kFactorUnc"; }
    TTreeFunction* clone() const override { 
        return new kFactorUnc(n_file, n_graph); 
    }
    
    unsigned getNdata() override { return 4; } // nominal, stat_up, stat_do, jetsel
    int getMultiplicity() override { return 1; }
    void beginEvent(long long) override;
    double evaluate(unsigned) override;

protected:
  void bindTree_(multidraw::FunctionLibrary&) override;

  TString n_file;
  TString n_graph;

  UIntValueReader* nGenPart{};
  FloatArrayReader* GenPart_pt{};
  IntArrayReader* GenPart_pdgId{};
  IntArrayReader* GenPart_statusFlags{};
  //FloatArrayReader* LHEPart_eta{};
  //FloatArrayReader* LHEPart_phi{};
  //IntArrayReader* LHEPart_pdgId{};

  TGraph* Wpt_map_nom;
  TGraph* Wpt_map_stat_up;
  TGraph* Wpt_map_stat_do;
  TGraph* Wpt_map_jetsel;
  std::array<float,4> outputValues;

  float minWpt; 
};

kFactorUnc::kFactorUnc(TString file_name, TString tgraph_name) :
    n_file(file_name),
    n_graph(tgraph_name),
    TTreeFunction()
{
    std::cout << "kFactorUnc constructor" << std::endl;
    TFile* src_file = new TFile(TString(std::getenv("CMSSW_BASE"))+"/src/" + n_file);
    Wpt_map_nom     = (TGraph*)src_file->Get(n_graph+"_nom");
    Wpt_map_stat_up = (TGraph*)src_file->Get(n_graph+"_stat_up");
    Wpt_map_stat_do = (TGraph*)src_file->Get(n_graph+"_stat_do");
    Wpt_map_jetsel  = (TGraph*)src_file->Get(n_graph+"_jetsel");
    src_file->Close();
    minWpt = 2.5;
    if (n_graph.Contains("2016")) {
        minWpt = 5.;
    }
    std::cout << " - min W pT = " << minWpt << std::endl;
}

void
kFactorUnc::beginEvent(long long _iEntry)
{
    // Get W pt
    const unsigned int n_gen{*nGenPart->Get()};
    float W_pt{0.};
    for (unsigned int i_gen{0}; i_gen < n_gen; i_gen++) {
        const int status = GenPart_statusFlags->At(i_gen);
        const int pdgId = GenPart_pdgId->At(i_gen);
        //cout << "GenPart ID: " << pdgId << ", status: " << status << endl;
        if ( abs(pdgId) == 24 && status & 1<<13) {
            //cout << " Passed !!" << endl;
            W_pt = GenPart_pt->At(i_gen);
            break;
        }
    }
    
    if (W_pt < minWpt) W_pt = .05;
    else if (W_pt > 1500.0) W_pt = 1500.0;
    
    //cout << " - W pt : " << W_pt << endl;
    
    //return Wlep_pt;
    //double weight{Wpt_map->Eval(W_pt)};
    std::array<float,4> output { 1.,1.,1.,1.};
    output[0] = Wpt_map_nom    ->Eval(W_pt); 
    output[1] = Wpt_map_stat_up->Eval(W_pt); 
    output[2] = Wpt_map_stat_do->Eval(W_pt); 
    output[3] = Wpt_map_jetsel ->Eval(W_pt); 

    outputValues = output;
    //cout << "" << endl;
    //cout << " - k-factor : " << outputValues[0] << ", " << outputValues[1] << ", " << outputValues[2] << ", "<< outputValues[3]  << endl;
    //cout << ""; 
}


double
kFactorUnc::evaluate(unsigned iJ)
{
  // weightReader[0] : central, weightReader[1] : stat up, weightReader[2] : stat down, weightReader[3] : jet sel
  //cout <<  iJ << ", " << outputValues[iJ] << ", ";
  return outputValues[iJ];
}

void
kFactorUnc::bindTree_(multidraw::FunctionLibrary& _library)
{
    _library.bindBranch(nGenPart, "nGenPart");
    _library.bindBranch(GenPart_pt, "GenPart_pt");
    //_library.bindBranch(GenPart_eta, "GenPart_eta");
    //_library.bindBranch(GenPart_phi, "GenPart_phi");
    _library.bindBranch(GenPart_pdgId, "GenPart_pdgId");
    _library.bindBranch(GenPart_statusFlags, "GenPart_statusFlags");
}

#endif
