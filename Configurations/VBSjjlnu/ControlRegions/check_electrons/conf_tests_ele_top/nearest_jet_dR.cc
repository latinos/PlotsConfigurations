#include "LatinoAnalysis/MultiDraw/interface/TTreeFunction.h"
#include "LatinoAnalysis/MultiDraw/interface/FunctionLibrary.h"

#include "TMath.h"
#include "TGraph.h"
#include "TFile.h"
#include "TF1.h"
#include "TH2F.h"
#include "TLorentzVector.h"

#include <cmath>
#include <string>
#include <unordered_map>
#include <iostream>
#include <stdexcept>
#include <tuple>
#include <map>
#include <vector>
#include <algorithm>

using namespace std;

class NearestJetDR : public multidraw::TTreeFunction {
public:
  NearestJetDR();

  char const* getName() const override { return "NearestJetDR"; }
  TTreeFunction* clone() const override { return new NearestJetDR(); }

  unsigned getNdata() override { return 1; }
  double evaluate(unsigned) override;

protected:  
 
  void bindTree_(multidraw::FunctionLibrary&) override;
  
  FloatArrayReader* Lep_pt{};
  FloatArrayReader* Lep_eta{};
  FloatArrayReader* Lep_phi{};
  IntArrayReader* Lep_pdgId{};
  FloatArrayReader* Jet_pt{};
  FloatArrayReader* Jet_eta{};
  FloatArrayReader* Jet_phi{};
  UIntValueReader * nJets{};

};

NearestJetDR::NearestJetDR():TTreeFunction(){}

double
NearestJetDR::evaluate(unsigned)
{
  int ele_pos = -1;
  if (abs(Lep_pdgId->At(0)) ==11 )  ele_pos = 0;
  else if (abs(Lep_pdgId->At(1)) ==11 )  ele_pos = 1;
  else return -1;
  
  TLorentzVector lep; 
  lep.SetPtEtaPhiM(Lep_pt->At(ele_pos), Lep_eta->At(ele_pos), Lep_phi->At(ele_pos), 0);
  
  vector<TLorentzVector> jets;
  for (int ij = 0; ij< *(nJets->Get()); ij++){
    TLorentzVector j; 
    j.SetPtEtaPhiM(Jet_pt->At(ij), Jet_eta->At(ij), Jet_phi->At(ij), 0);
    jets.push_back(j);
  }
  double minR = 1000;
  if (jets.size() ==0) return -2;

  for (auto jet : jets){
    double DR = jet.DeltaR(lep);
    if( DR < minR) minR = DR;
  }
  
  return minR;

}

void
NearestJetDR::bindTree_(multidraw::FunctionLibrary& _library)
{   
    _library.bindBranch(Lep_pt, "Lepton_pt");
    _library.bindBranch(Lep_eta, "Lepton_eta");
    _library.bindBranch(Lep_phi, "Lepton_phi");
    _library.bindBranch(Lep_pdgId, "Lepton_pdgId");
    _library.bindBranch(Jet_pt,   "CleanJet_pt");
    _library.bindBranch(Jet_eta, "CleanJet_eta");
    _library.bindBranch(Jet_phi, "CleanJet_phi");
    _library.bindBranch(nJets, "nCleanJet");

}

