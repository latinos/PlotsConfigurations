#include "LatinoAnalysis/MultiDraw/interface/TTreeFunction.h"
#include "LatinoAnalysis/MultiDraw/interface/FunctionLibrary.h"

// #include <vector>

#include "TGraph.h"
#include "TFile.h"
//#include "Math/Vector4Dfwd.h"
//#include "Math/GenVector/LorentzVector.h"
//#include "Math/GenVector/PtEtaPhiM4D.h"

//#include <iostream>


#ifndef kFactor_HH
#define kFactor_HH

class kFactor : public multidraw::TTreeFunction {
public:
    kFactor(TString file_name, TString tgraph_name); 
    
    char const* getName() const override { return "kFactor"; }
    TTreeFunction* clone() const override { 
        return new kFactor(n_file, n_graph); 
    }
    
    unsigned getNdata() override { return 1; }
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

  TGraph* Wpt_map;
};

kFactor::kFactor(TString file_name, TString tgraph_name) :
    n_file(file_name),
    n_graph(tgraph_name),
    TTreeFunction()
{
    std::cout << "kFactor constructor" << std::endl;
    TFile* src_file = new TFile(TString(std::getenv("CMSSW_BASE"))+"/src/" + n_file);
    Wpt_map = (TGraph*)src_file->Get(n_graph);
    src_file->Close();
}

double
kFactor::evaluate(unsigned)
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
    
    if (W_pt < .1) W_pt = .0;
    else if (W_pt > 1500.0) W_pt = 1500.0;
    
    //cout << " - W pt : " << W_pt << endl;
    
    //return Wlep_pt;
    double weight{Wpt_map->Eval(W_pt)};
    //cout << " - k-factor : " << weight << endl;
    
    return weight;
}

void
kFactor::bindTree_(multidraw::FunctionLibrary& _library)
{
    _library.bindBranch(nGenPart, "nGenPart");
    _library.bindBranch(GenPart_pt, "GenPart_pt");
    //_library.bindBranch(GenPart_eta, "GenPart_eta");
    //_library.bindBranch(GenPart_phi, "GenPart_phi");
    _library.bindBranch(GenPart_pdgId, "GenPart_pdgId");
    _library.bindBranch(GenPart_statusFlags, "GenPart_statusFlags");
}

#endif
