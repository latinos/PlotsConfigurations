#include "LatinoAnalysis/MultiDraw/interface/TTreeFunction.h"
#include "LatinoAnalysis/MultiDraw/interface/FunctionLibrary.h"

// #include <vector>

#include "TGraph.h"
#include "TFile.h"
#include "TH1D.h"
#include "Math/Vector4Dfwd.h"
#include "Math/GenVector/LorentzVector.h"
#include "Math/GenVector/PtEtaPhiM4D.h"

//#include <iostream>


#ifndef kFactorUnc2histo_HH
#define kFactorUnc2histo_HH

class kFactorUnc2histo : public multidraw::TTreeFunction {
public:
    kFactorUnc2histo(TString file_name, TString tgraph_name); 
    
    char const* getName() const override { return "kFactorUnc2histo"; }
    TTreeFunction* clone() const override { 
        return new kFactorUnc2histo(n_file, n_graph); 
    }
    
    unsigned getNdata() override { return 3; } // nominal, stat_up, stat_do, jetsel
    int getMultiplicity() override { return 1; }
    void beginEvent(long long) override;
    double evaluate(unsigned) override;

protected:
  void bindTree_(multidraw::FunctionLibrary&) override;

  TString n_file;
  TString n_graph;

  UIntValueReader* nGenPart;
  FloatArrayReader* GenPart_pt;
  FloatArrayReader* GenPart_eta;
  FloatArrayReader* GenPart_phi;
  IntArrayReader* GenPart_pdgId;
  IntArrayReader* GenPart_statusFlags;

  TH1D* Wpt_map_nom;
  TH1D* Wpt_map_stat_up;
  TH1D* Wpt_map_stat_do;
 // TGraph* Wpt_map_jetsel;
  std::array<float,3> outputValues;

  float minWpt; 
};

kFactorUnc2histo::kFactorUnc2histo(TString file_name, TString tgraph_name) :
    n_file(file_name),
    n_graph(tgraph_name),
    TTreeFunction()
{
    std::cout << "kFactorUnc2histo constructor" << std::endl;
    TFile* src_file = new TFile(TString(std::getenv("CMSSW_BASE"))+"/src/" + n_file);
    TString name = n_graph;
    Wpt_map_nom     = (TH1D*)src_file->Get(name+"_nom");
    Wpt_map_stat_up = (TH1D*)src_file->Get(name+"_stat_up");
    Wpt_map_stat_do = (TH1D*)src_file->Get(name+"_down");

    Wpt_map_nom    ->SetDirectory(0);
    Wpt_map_stat_up->SetDirectory(0);
    Wpt_map_stat_do->SetDirectory(0);
//   Wpt_map_jetsel  = (TGraph*)src_file->Get(n_graph+"_jetsel");
    src_file->Close();
    minWpt = 2.5;
    if (name.Contains("2016")) {
        minWpt = 5.;
    }
    //std::cout << " - min W pT = " << minWpt << std::endl;
}

void
kFactorUnc2histo::beginEvent(long long _iEntry)
{
    // Find Gen W and gen Lep, Neut
    unsigned nGen{*nGenPart->Get()};
    float lep_pt{0.}, lep_eta, lep_phi;
    float nu_pt{0.}, nu_eta, nu_phi;
    float W_pt{0.};
    bool hasW = false;
    for (unsigned iGen{0}; iGen != nGen; ++iGen){
        int pdgId = std::abs(GenPart_pdgId->At(iGen));
        int sFlag = GenPart_statusFlags->At(iGen);
        
        // Look for lepton, sFlag == 8449 => isLastCopy & fromHardProcess & isPrompt and nothing else
        if (((pdgId == 11) || (pdgId == 13) || (pdgId == 15)) && (sFlag == 8449)){
            lep_pt  = GenPart_pt->At(iGen);
            lep_eta = GenPart_eta->At(iGen);
            lep_phi = GenPart_phi->At(iGen);
            //cout << "-- Found lepton: pdgId=" << pdgId << ", statusFlags= " << sFlag << endl;
        }
        // Look for neutrino, sFlag == 8449 => isLastCopy & fromHardProcess & isPrompt and nothing else
        if (((pdgId == 12) || (pdgId == 14) || (pdgId == 16)) && (sFlag == 8449)){
            nu_pt  = GenPart_pt->At(iGen);
            nu_eta = GenPart_eta->At(iGen);
            nu_phi = GenPart_phi->At(iGen);
            //cout << "-- Found neutrino: pdgId=" << pdgId << ", statusFlags= " << sFlag << endl;
        }
        // Look for W directly 1<<13 => isLastCopy
        if ((pdgId == 24) && (sFlag & 1<<13)){
            W_pt = GenPart_pt->At(iGen);
            hasW = true;
            //cout << "-- Found W: pdgId=" << pdgId << ", statusFlags= " << sFlag << endl;
        }
        if (hasW){
            break;
        }
    }

    // If there was a W, we are done
    if (!hasW) {
        // Else reconstruct from lepton + neutrino
        ROOT::Math::PtEtaPhiMVector lep_4v{
          lep_pt, lep_eta, lep_phi, 0 // at these energies everything is massless...
        };
        ROOT::Math::PtEtaPhiMVector nu_4v{
          nu_pt, nu_eta, nu_phi, 0
        };
        W_pt = (lep_4v + nu_4v).Pt();
    }

    // Correct edges
    if (W_pt < 0.) W_pt = 0.;
    else if (W_pt > 1200.) W_pt = 1200.;


    // Get values from the graphs
    std::array<float,3> output { 1.,1.,1.};//,1.};
    output[0] = Wpt_map_nom->GetBinContent(Wpt_map_nom->FindBin(W_pt)); 
    output[1] = Wpt_map_stat_up->GetBinContent(Wpt_map_stat_up->FindBin(W_pt)); 
    output[2] = Wpt_map_stat_do->GetBinContent(Wpt_map_stat_do->FindBin(W_pt)); 
//    output[3] = Wpt_map_jetsel ->Eval(W_pt); 

    outputValues = output;
    //cout << " - k-factor : " << outputValues[0] << ", " << outputValues[1] << ", " << outputValues[2] << ", "<< outputValues[3]  << endl;
    //cout << ""; 
}


double
kFactorUnc2histo::evaluate(unsigned iJ)
{
  // weightReader[0] : central, weightReader[1] : stat up, weightReader[2] : stat down, weightReader[3] : jet sel
  //cout <<  iJ << ", " << outputValues[iJ] << ", ";
  return outputValues[iJ];
}

void
kFactorUnc2histo::bindTree_(multidraw::FunctionLibrary& _library)
{
    _library.bindBranch(nGenPart, "nGenPart");
    _library.bindBranch(GenPart_pt, "GenPart_pt");
    _library.bindBranch(GenPart_eta, "GenPart_eta");
    _library.bindBranch(GenPart_phi, "GenPart_phi");
    _library.bindBranch(GenPart_pdgId, "GenPart_pdgId");
    _library.bindBranch(GenPart_statusFlags, "GenPart_statusFlags");
}

#endif
