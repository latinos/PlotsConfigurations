#include "LatinoAnalysis/MultiDraw/interface/TTreeFunction.h"
#include "LatinoAnalysis/MultiDraw/interface/FunctionLibrary.h"

#include <vector>

#include "TFile.h"
#include "TH1D.h"
#include "TH2D.h"
#include "TF1.h"
#include "TString.h"
#include "TVector2.h"
#include "Math/Vector4Dfwd.h"
#include "Math/GenVector/LorentzVector.h"
#include "Math/GenVector/PtEtaPhiM4D.h"
#include "Math/GenVector/VectorUtil.h"

#include <iostream>
using namespace ROOT::Math;

std::pair<int,int> maxMjjPair(vector<PtEtaPhiMVector> vectors){
    std::pair<int,int> current_max;
    // if (debug_) std::cout << "  - VBS jets" << std::endl;
    double maxMjj = -1.;
    for (int i=0; i< vectors.size()-1; ++i){
        for (int k=i+1; k<vectors.size() ; ++k){
            double mass = (vectors.at(i) + vectors.at(k)).M();
            // if (debug_) std::cout << "  - "<< i << "," << k<< " mass: "<< mass << std::endl;
            if (mass > maxMjj){
                maxMjj = mass;
                current_max = {i, k};
            }
        }
    }
    return current_max;
}

class ReweightGenLevel3d : public multidraw::TTreeFunction {
public:
  ReweightGenLevel3d(const char * weights_file,const char * weights_file2,bool debug);
  ~ReweightGenLevel3d();

  char const* getName() const override { return "ReweightGenLevel3d"; }
  TTreeFunction* clone() const override { return new ReweightGenLevel3d(_weights_file.Data(),_weights_file2.Data(),_debug); }

  void beginEvent(long long) override;
  unsigned getNdata() override { return 6; } 
  int getMultiplicity() override { return 1; }
  double evaluate(unsigned) override;
  

protected:
  void bindTree_(multidraw::FunctionLibrary&) override;
  void setValues();
  TString _weights_file;
  TString _weights_file2;
  TFile* _file;
  TFile* _file2;
  vector<TH2D*> weights;
  vector<TH1D*> weights2;
  bool _debug;

  std::array<double,6> outputValues;
  
  IntValueReader * VBS_category;
  UIntValueReader* nGenPart{};
  IntArrayReader* GenPart_status{};
  IntArrayReader* GenPart_statusFlags{};
  IntArrayReader* GenPart_pdgId{};
  FloatArrayReader* GenPart_pt{};
  FloatArrayReader* GenPart_eta{};
  FloatArrayReader* GenPart_phi{};
  UIntValueReader* nGenJet{};
  FloatArrayReader* GenJet_pt{};
  FloatArrayReader* GenJet_eta{};
  FloatArrayReader* GenJet_phi{};
  FloatArrayReader* GenJet_mass{};
};

ReweightGenLevel3d::ReweightGenLevel3d(const char * weights_file,const char * weights_file2, bool debug) :
  TTreeFunction(), _weights_file(weights_file), _weights_file2(weights_file2), _debug(debug)
{
  _file = new TFile(weights_file,"READ");
  std::vector<int> njets = {2,3,4,5,6,7};
  for (auto nj : njets){
      weights.push_back((TH2D*)_file->Get(("njet"+std::to_string(nj)+"/ratio_mjj_vbstot").c_str()));
  }
  _file2 = new TFile(weights_file2,"READ");
  weights2.push_back((TH1D*)_file2->Get("ngenjets_weight_boost"));
  weights2.push_back((TH1D*)_file2->Get("ngenjets_weight_res"));
  weights2[0]->SetDirectory(0);
  weights2[1]->SetDirectory(0);
}

ReweightGenLevel3d::~ReweightGenLevel3d(){
  _file->Close();
  _file2->Close();
  weights.clear();
  weights2.clear();
  delete _file;
  delete _file2;
}

void
ReweightGenLevel3d::setValues()
{
  int vbs_cat = *(VBS_category->Get());
  double weight = 1.;

  if (_debug) std:cout << "=========================" << std::endl;
  PtEtaPhiMVector lep;
  int n_good_lep =0;
  for (int i= 0; i<*(nGenPart->Get()); i++){
    int pdgid =  abs(GenPart_pdgId->At(i));
    if( GenPart_status->At(i)==1 && (GenPart_statusFlags->At(i) & 1)==1 && ( pdgid==11 || pdgid == 13) && GenPart_pt->At(i)>10){
      lep = {GenPart_pt->At(i),GenPart_eta->At(i),GenPart_phi->At(i),0.};
      n_good_lep+=1;
      if (_debug) std::cout << "Good lep|  pt: "<< lep.Pt() << " eta: "<< lep.Eta() << " phi:"<< lep.Phi() << std::endl;
    }
  }

  
  vector<PtEtaPhiMVector> good_jets;
  unsigned nJ{*nGenJet->Get()};
  if (_debug) std::cout << "N. Gen Jet: " << nJ << std::endl;
  for (unsigned iJ{0}; iJ != nJ; ++iJ) {
    PtEtaPhiMVector jet {GenJet_pt->At(iJ), GenJet_eta->At(iJ), GenJet_phi->At(iJ), GenJet_mass->At(iJ)};
    if (_debug) std::cout << "Jet "<< iJ << " pt: "<< jet.Pt() << " eta: "<< jet.Eta() << " phi:"<< jet.Phi() << std::endl;
    
    if (n_good_lep ==1){
      if (VectorUtil::DeltaR(jet, lep) > 0.4){
        if (_debug) std::cout << "OK genmatch filter"<< std::endl;
          if (jet.Pt() >= 30.)  {
            if (_debug) std::cout << "Good jet " << iJ << " " << jet.Pt()<< std::endl;
            good_jets.push_back(jet);
          }
        }else{
          if (_debug) std::cout << "Failed genmatch filter" << std::endl;
        }
    }else{
      if (jet.Pt() >= 30.)  {
        if (_debug) std::cout << "Good jet " << iJ << " " << jet.Pt()<< std::endl;
        good_jets.push_back(jet);
      }
    }
  }

  int njets = good_jets.size();
  if(njets < 2) {
    if (_debug) std::cout << "Not enough jets: "<< njets << std::endl;
    // if(vbs_cat ==0) weight *= weights2[0]->GetBinContent(weights2[0]->FindBin(njets));
    // if(vbs_cat ==1) weight *= weights2[1]->GetBinContent(weights2[1]->FindBin(njets));
    outputValues[0] = n_good_lep;
    outputValues[1] = njets;
    outputValues[2] = -1.;
    outputValues[3] = -1.;
    outputValues[4] = -1.;
    outputValues[5] = weight;
    return;
  }
  // Now we have a list of cleaned GenJets with at least 30 GeV of Pt and we need to take the max mjj pair
  std::pair<int,int> vbs_jets = maxMjjPair(good_jets);
  float detajj = abs( good_jets[vbs_jets.first].Eta() -good_jets[vbs_jets.second].Eta() );
  float vbstot = good_jets[vbs_jets.first].Pt() + good_jets[vbs_jets.second].Pt();
  float mjj = (good_jets[vbs_jets.first] + good_jets[vbs_jets.second]).M();

  /*
  * THere has been a problem in the  
  */
  if (njets<=6){
      float X_mjj =mjj;
      if (X_mjj< 400) X_mjj = 400;
      if (X_mjj > 3000) X_mjj = 3000;
      float Y_vbs = vbstot;
      if (Y_vbs< 60) Y_vbs = 60;
      if (Y_vbs > 600) Y_vbs = 600;
      weight = weights[njets-2]->GetBinContent(weights[njets-2]->FindBin(X_mjj,Y_vbs));
  }else{   
      float X_mjj =mjj;
      if (X_mjj< 400) X_mjj = 400;
      if (X_mjj > 3000) X_mjj = 3000;
      float Y_vbs = vbstot;
      if (Y_vbs< 60) Y_vbs = 60;
      if (Y_vbs > 600) Y_vbs = 600;
      weight =  weights[5]->GetBinContent(weights[5]->FindBin(X_mjj,Y_vbs));
  }

  // If outside of the region where the weight is defined
  if (weight < 0.00001) {
    if (_debug) std::cout << "Weight too small --> 1." << std::endl;
    weight = 1.;
  }

  int njets_rew = njets;
  if (njets_rew> 7) njets_rew =7;
  if(vbs_cat ==0) weight *= weights2[0]->GetBinContent(weights2[0]->FindBin(njets_rew));
  if(vbs_cat ==1) weight *= weights2[1]->GetBinContent(weights2[1]->FindBin(njets_rew));

  if (_debug) std::cout << "njets " << njets << " vbstot "<< vbstot << " mjj "<< mjj << " weight: "<< weight << std::endl;
  outputValues[0] = n_good_lep;
  outputValues[1] = njets;
  outputValues[2] = vbstot;
  outputValues[3] = detajj;
  outputValues[4] = mjj;
  outputValues[5] = weight;
}

void
ReweightGenLevel3d::beginEvent(long long _iEntry)
{
  setValues();
}


double
ReweightGenLevel3d::evaluate(unsigned iJ){
  return outputValues[iJ];
}

void
ReweightGenLevel3d::bindTree_(multidraw::FunctionLibrary& _library)
{
  _library.bindBranch(nGenPart, "nGenPart");
  _library.bindBranch(GenPart_status, "GenPart_status"),
  _library.bindBranch(GenPart_statusFlags, "GenPart_statusFlags");
  _library.bindBranch(GenPart_pdgId, "GenPart_pdgId");
  _library.bindBranch(GenPart_pt, "GenPart_pt");
  _library.bindBranch(GenPart_eta, "GenPart_eta");
  _library.bindBranch(GenPart_phi, "GenPart_phi");
  _library.bindBranch(nGenJet, "nGenJet");
  _library.bindBranch(GenJet_pt, "GenJet_pt");
  _library.bindBranch(GenJet_eta, "GenJet_eta");
  _library.bindBranch(GenJet_phi, "GenJet_phi");
  _library.bindBranch(GenJet_mass, "GenJet_mass");
  _library.bindBranch(VBS_category, "VBS_category");
}

