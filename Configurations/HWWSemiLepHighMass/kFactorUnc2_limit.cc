#include "LatinoAnalysis/MultiDraw/interface/TTreeFunction.h"
#include "LatinoAnalysis/MultiDraw/interface/FunctionLibrary.h"

// #include <vector>

#include "TGraph.h"
#include "TFile.h"
#include "Math/Vector4Dfwd.h"
#include "Math/GenVector/LorentzVector.h"
#include "Math/GenVector/PtEtaPhiM4D.h"

//#include <iostream>


#ifndef kFactorUnc2_limit_HH
#define kFactorUnc2_limit_HH

class kFactorUnc2_limit : public multidraw::TTreeFunction {
public:
    kFactorUnc2_limit(TString file_name, TString tgraph_name, TString file_name_res, TString tgraph_name_res); 
    
    char const* getName() const override { return "kFactorUnc2_limit"; }
    TTreeFunction* clone() const override { 
        return new kFactorUnc2_limit(n_file, n_graph, n_file_res, n_graph_res); 
    }
    
    unsigned getNdata() override { return 3; } // nominal, stat_up, stat_do, jetsel
    int getMultiplicity() override { return 1; }
    void beginEvent(long long) override;
    double evaluate(unsigned) override;

protected:
  void bindTree_(multidraw::FunctionLibrary&) override;

  TString n_file;
  TString n_graph;
  TString n_file_res;
  TString n_graph_res;

  UIntValueReader* nGenPart;
  FloatArrayReader* GenPart_pt;
  FloatArrayReader* GenPart_eta;
  FloatArrayReader* GenPart_phi;
  IntArrayReader* GenPart_pdgId;
  IntArrayReader* GenPart_statusFlags;
 // IntArrayReader* HM_nCleanFatJetPassMBoosted;
  IntArrayReader* CleanFatJet_jetIdx;
  FloatArrayReader* FatJet_deepTag_WvsQCD;
  FloatArrayReader* GenJetAK8_pt;

  TGraph* Wpt_map_nom;
  TGraph* Wpt_map_stat_up;
  TGraph* Wpt_map_stat_do;
  TGraph* Wpt_map_nom_res;
  TGraph* Wpt_map_stat_up_res;
  TGraph* Wpt_map_stat_do_res;
 // TGraph* Wpt_map_jetsel;
  std::array<float,3> outputValues;

  float minWpt; 
};

kFactorUnc2_limit::kFactorUnc2_limit(TString file_name, TString tgraph_name, TString file_name_res, TString tgraph_name_res) :
    n_file(file_name),
    n_graph(tgraph_name),
    n_file_res(file_name_res),
    n_graph_res(tgraph_name_res),
    TTreeFunction()
{
    //std::cout << "kFactorUnc2_limit constructor" << std::endl;
    TFile* src_file = new TFile(TString(std::getenv("CMSSW_BASE"))+"/src/" + n_file);
    Wpt_map_nom     = (TGraph*)src_file->Get(n_graph+"_nom");
    Wpt_map_stat_up = (TGraph*)src_file->Get(n_graph+"_stat_up");
    Wpt_map_stat_do = (TGraph*)src_file->Get(n_graph+"_stat_do");
    TFile* src_file_res = new TFile(TString(std::getenv("CMSSW_BASE"))+"/src/" + n_file_res);
    Wpt_map_nom_res     = (TGraph*)src_file_res->Get(n_graph_res+"_nom");
    Wpt_map_stat_up_res = (TGraph*)src_file_res->Get(n_graph_res+"_stat_up");
    Wpt_map_stat_do_res = (TGraph*)src_file_res->Get(n_graph_res+"_stat_do");
//   Wpt_map_jetsel  = (TGraph*)src_file->Get(n_graph+"_jetsel");
//   Wpt_map_jetsel  = (TGraph*)src_file->Get(n_graph+"_jetsel");
    src_file->Close();
    src_file_res->Close();
    minWpt = 2.5;
    if (n_graph.Contains("2016")) {
        minWpt = 5.;
    }
    //std::cout << " - min W pT = " << minWpt << std::endl;
}

void
kFactorUnc2_limit::beginEvent(long long _iEntry)
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
   // if (W_pt < 0.) W_pt = 0.;
   // else if (W_pt > 1200.) W_pt = 1200.;


    // Get values from the graphs
    //
    std::array<float,3> output { 1.,1.,1.};//,1.};
 //   if( FatJet_deepTag_WvsQCD->At(CleanFatJet_jetIdx->At(0)) > 0.964){ 
    if( GenJetAK8_pt->At(0)>180){ 
    if (W_pt < 20.) W_pt = 20.;
    else if (W_pt > 600.) W_pt = 600.;
    output[0] = Wpt_map_nom    ->Eval(W_pt); 
    output[1] = Wpt_map_stat_up->Eval(W_pt); 
    output[2] = Wpt_map_stat_do->Eval(W_pt); 
//    output[3] = Wpt_map_jetsel ->Eval(W_pt); 
}else{
    if (W_pt < 0.) W_pt = 0.;
    else if (W_pt > 400.) W_pt = 400.;

    output[0] = Wpt_map_nom_res    ->Eval(W_pt); 
    output[1] = Wpt_map_stat_up_res->Eval(W_pt); 
    output[2] = Wpt_map_stat_do_res->Eval(W_pt); 
}
    outputValues = output;

    //cout << "" << endl;
    //cout << " - k-factor : " << outputValues[0] << ", " << outputValues[1] << ", " << outputValues[2] << ", "<< outputValues[3]  << endl;
    //cout << ""; 
}


double
kFactorUnc2_limit::evaluate(unsigned iJ)
{
  // weightReader[0] : central, weightReader[1] : stat up, weightReader[2] : stat down, weightReader[3] : jet sel
  //cout <<  iJ << ", " << outputValues[iJ] << ", ";
  return outputValues[iJ];
}

void
kFactorUnc2_limit::bindTree_(multidraw::FunctionLibrary& _library)
{
    _library.bindBranch(nGenPart, "nGenPart");
    _library.bindBranch(GenPart_pt, "GenPart_pt");
    _library.bindBranch(GenPart_eta, "GenPart_eta");
    _library.bindBranch(GenPart_phi, "GenPart_phi");
    _library.bindBranch(GenPart_pdgId, "GenPart_pdgId");
    _library.bindBranch(GenPart_statusFlags, "GenPart_statusFlags");
  //  _library.bindBranch(HM_nCleanFatJetPassMBoosted, "HM_nCleanFatJetPassMBoosted");
    _library.bindBranch(FatJet_deepTag_WvsQCD, "FatJet_deepTag_WvsQCD");
    _library.bindBranch(CleanFatJet_jetIdx, "CleanFatJet_jetIdx");
    _library.bindBranch(GenJetAK8_pt, "GenJetAK8_pt");
}

#endif
