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


#ifndef kFactor2DUnc_HH
#define kFactor2DUnc_HH

class kFactor2DUnc : public multidraw::TTreeFunction {
public:
    kFactor2DUnc(TString file_name, TString tgraph_name); 
    
    char const* getName() const override { return "kFactor2DUnc"; }
    TTreeFunction* clone() const override { 
        return new kFactor2DUnc(n_file, n_graph); 
    }
    
    unsigned getNdata() override { return 4; } // nominal, stat_up, stat_do, jetsel
    int getMultiplicity() override { return 1; }
    void beginEvent(long long) override;
    double evaluate(unsigned) override;

protected:
  void bindTree_(multidraw::FunctionLibrary&) override;

  TString n_file;
  TString n_graph;

  FloatValueReader* MHlnjj_m_jj;
  //FloatValueReader* MHlnjj_dr_jVj;
  UIntValueReader* nGenPart;
  FloatArrayReader* GenPart_pt;
  FloatArrayReader* GenPart_eta;
  FloatArrayReader* GenPart_phi;
  IntArrayReader* GenPart_pdgId;
  IntArrayReader* GenPart_statusFlags;

  TH2F* Wpt_map_nom;
  TH2F* Wpt_map_stat_up;
  TH2F* Wpt_map_stat_do;
  TH2F* Wpt_map_jetsel;
  std::array<float,4> outputValues;
};

kFactor2DUnc::kFactor2DUnc(TString file_name, TString tgraph_name) :
    n_file(file_name),
    n_graph(tgraph_name),
    TTreeFunction()
{
    std::cout << "kFactor2DUnc constructor" << std::endl;
    TFile* src_file = new TFile(TString(std::getenv("CMSSW_BASE"))+"/src/" + n_file);
    Wpt_map_nom     = (TH2F*)src_file->Get(n_graph+"_nom");
    Wpt_map_stat_up = (TH2F*)src_file->Get(n_graph+"_stat_up");
    Wpt_map_stat_do = (TH2F*)src_file->Get(n_graph+"_stat_do");
    Wpt_map_jetsel  = (TH2F*)src_file->Get(n_graph+"_jetsel");
    Wpt_map_nom     ->SetDirectory(0);
    Wpt_map_stat_up ->SetDirectory(0);
    Wpt_map_stat_do ->SetDirectory(0);
    Wpt_map_jetsel  ->SetDirectory(0);
    src_file->Close();
}

void
kFactor2DUnc::beginEvent(long long _iEntry)
{
    // Find Gen W and gen Lep, Neut
    unsigned nGen{*nGenPart->Get()};
    float mjj{*MHlnjj_m_jj->Get()};
    //float drjj{*MHlnjj_dr_jVj->Get()};
    float lep_pt{0.}, lep_eta{0.}, lep_phi{0.};
    float nu_pt{0.}, nu_eta{0.}, nu_phi{0.};
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
            cout << "-- Found lepton: pdgId=" << pdgId << ", statusFlags= " << sFlag << endl;
        }
        // Look for neutrino, sFlag == 8449 => isLastCopy & fromHardProcess & isPrompt and nothing else
        if (((pdgId == 12) || (pdgId == 14) || (pdgId == 16)) && (sFlag == 8449)){
            nu_pt  = GenPart_pt->At(iGen);
            nu_eta = GenPart_eta->At(iGen);
            nu_phi = GenPart_phi->At(iGen);
            cout << "-- Found neutrino: pdgId=" << pdgId << ", statusFlags= " << sFlag << endl;
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
    if (mjj > 274.) mjj = 274.;
    //if (drjj > 4.9) drjj = 4.9;
    if (W_pt < 0.) W_pt = 0.;
    else if (W_pt > 1250.) W_pt = 1250.;


    // Get values from the graphs
    std::array<float,4> output { 1.,1.,1.,1.};
    //output[0] = Wpt_map_nom    ->GetBinContent(Wpt_map_nom    ->FindBin(drjj, W_pt)); 
    //output[1] = Wpt_map_stat_up->GetBinContent(Wpt_map_stat_up->FindBin(drjj, W_pt)); 
    //output[2] = Wpt_map_stat_do->GetBinContent(Wpt_map_stat_do->FindBin(drjj, W_pt)); 
    //output[3] = Wpt_map_jetsel ->GetBinContent(Wpt_map_jetsel ->FindBin(drjj, W_pt)); 
    output[0] = Wpt_map_nom    ->GetBinContent(Wpt_map_nom    ->FindBin(mjj, W_pt)); 
    output[1] = Wpt_map_stat_up->GetBinContent(Wpt_map_stat_up->FindBin(mjj, W_pt)); 
    output[2] = Wpt_map_stat_do->GetBinContent(Wpt_map_stat_do->FindBin(mjj, W_pt)); 
    output[3] = Wpt_map_jetsel ->GetBinContent(Wpt_map_jetsel ->FindBin(mjj, W_pt)); 

    outputValues = output;
    //if (output[0] == 0.) cout << "############### HERE ############" << endl;
    //cout << " - Map values: dr jj = "<< drjj << ", W_pt = " << W_pt << endl;
    //cout << " - k-factor : " << outputValues[0] << ", " << outputValues[1] << ", " << outputValues[2] << ", "<< outputValues[3]  << endl;
    //cout << ""; 
}


double
kFactor2DUnc::evaluate(unsigned iJ)
{
  // weightReader[0] : central, weightReader[1] : stat up, weightReader[2] : stat down, weightReader[3] : jet sel
  //cout <<  iJ << ", " << outputValues[iJ] << ", ";
  return outputValues[iJ];
}

void
kFactor2DUnc::bindTree_(multidraw::FunctionLibrary& _library)
{
    _library.bindBranch(MHlnjj_m_jj, "MHlnjj_m_jj");
    //_library.bindBranch(MHlnjj_dr_jVj, "MHlnjj_dr_jVj");
    _library.bindBranch(nGenPart, "nGenPart");
    _library.bindBranch(GenPart_pt, "GenPart_pt");
    _library.bindBranch(GenPart_eta, "GenPart_eta");
    _library.bindBranch(GenPart_phi, "GenPart_phi");
    _library.bindBranch(GenPart_pdgId, "GenPart_pdgId");
    _library.bindBranch(GenPart_statusFlags, "GenPart_statusFlags");
}

#endif
