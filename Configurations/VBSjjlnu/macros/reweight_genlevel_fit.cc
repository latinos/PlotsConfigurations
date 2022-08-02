#include "LatinoAnalysis/MultiDraw/interface/TTreeFunction.h"
#include "LatinoAnalysis/MultiDraw/interface/FunctionLibrary.h"

#include <vector>

#include "TFile.h"
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

class ReweightGenLevelFit : public multidraw::TTreeFunction {
public:
  ReweightGenLevelFit(const char * weights_file,bool debug);
  ~ReweightGenLevelFit();

  char const* getName() const override { return "ReweightGenLevelFit"; }
  TTreeFunction* clone() const override { return new ReweightGenLevelFit(_weights_file.Data(),_debug); }

  void beginEvent(long long) override;
  unsigned getNdata() override { return 6; } 
  int getMultiplicity() override { return 1; }
  double evaluate(unsigned) override;
  

protected:
  void bindTree_(multidraw::FunctionLibrary&) override;
  void setValues();
  TString _weights_file;
  TFile* _file;
  vector<TF1*> weights_mjj;
  vector<TF1*> weights_vbstot;
  std::vector<std::pair<float,float>> rangemjj;
  std::vector<std::pair<float,float>> rangevbs;
  bool _debug;

  std::array<double,6> outputValues;
  
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

ReweightGenLevelFit::ReweightGenLevelFit(const char * weights_file ,bool debug) :
  TTreeFunction(), _weights_file(weights_file),_debug(debug)
{
  _file = new TFile(weights_file,"READ");
  std::vector<int> njets = {2,3,4,5,6,7};
  for (auto nj : njets){
      weights_mjj.push_back((TF1*)_file->Get(("mjj100_njet"+std::to_string(nj)+"/fit_mjj").c_str()));
      weights_vbstot.push_back((TF1*)_file->Get(("mjj100_njet"+std::to_string(nj)+"/fit_vbstot").c_str()));
  }
  rangemjj = { {120,800},{110,1000},{105, 1400},{100 , 3000},{100 , 3000},{120 , 3000} };
  rangevbs = { {90,440}, {90,600},{70,500},{70,500},{75,550},{65,600}};
}

ReweightGenLevelFit::~ReweightGenLevelFit(){
  _file->Close();
  weights_mjj.clear();
  weights_vbstot.clear();
  delete _file;
}

void
ReweightGenLevelFit::setValues()
{
  if (_debug) std:cout << "=========================" << std::endl;
  PtEtaPhiMVector lep;
  int n_good_lep =0;
  for (int i= 0; i<*(nGenPart->Get()); i++){
    int pdgid =  abs(GenPart_pdgId->At(i));
    if( GenPart_status->At(i)==1 && (GenPart_statusFlags->At(i) & 1)==1 && ( pdgid==11 || pdgid == 13) && GenPart_pt->At(i)>10){
      lep = {GenPart_pt->At(i),GenPart_eta->At(i),GenPart_phi->At(i),0.};
      n_good_lep+=1;
    }
  }

  // If lepton pt < 10 or tau return weight=1
  if (n_good_lep !=1) {
    if (_debug) std::cout << "No good lep: "<< n_good_lep << std::endl;
    outputValues[0] = n_good_lep;
    outputValues[1] = -1.;
    outputValues[2] = -1.;
    outputValues[3] = -1.;
    outputValues[4] = -1.;
    outputValues[5] = 0.;
    return;
  }

  if (_debug) std::cout << "Good lep|  pt: "<< lep.Pt() << " eta: "<< lep.Eta() << " phi:"<< lep.Phi() << std::endl;

  vector<PtEtaPhiMVector> good_jets;
  unsigned nJ{*nGenJet->Get()};
  if (_debug) std::cout << "N. Gen Jet: " << nJ << std::endl;
  for (unsigned iJ{0}; iJ != nJ; ++iJ) {
    PtEtaPhiMVector jet {GenJet_pt->At(iJ), GenJet_eta->At(iJ), GenJet_phi->At(iJ), GenJet_mass->At(iJ)};
    if (_debug) std::cout << "Jet "<< iJ << " pt: "<< jet.Pt() << " eta: "<< jet.Eta() << " phi:"<< jet.Phi() << std::endl;
    if (VectorUtil::DeltaR(jet, lep) > 0.4){
      if (_debug) std::cout << "OK genmatch filter"<< std::endl;
      if (jet.Pt() >= 30.)  {
        if (_debug) std::cout << "Good jet " << iJ << " " << jet.Pt()<< std::endl;
        good_jets.push_back(jet);
      }
    }else{
      if (_debug) std::cout << "Failed genmatch filter" << std::endl;
    }
  }

  int njets = good_jets.size();
  if(njets < 2) {
    if (_debug) std::cout << "Not enough jets: "<< njets << std::endl;
    outputValues[0] = n_good_lep;
    outputValues[1] = njets;
    outputValues[2] = -1.;
    outputValues[3] = -1.;
    outputValues[4] = -1.;
    outputValues[5] = 0.;
    return;
  }
  // Now we have a list of cleaned GenJets with at least 30 GeV of Pt and we need to take the max mjj pair
  std::pair<int,int> vbs_jets = maxMjjPair(good_jets);
  float detajj = abs( good_jets[vbs_jets.first].Eta() -good_jets[vbs_jets.second].Eta() );
  float vbstot = good_jets[vbs_jets.first].Pt() + good_jets[vbs_jets.second].Pt();
  float mjj = (good_jets[vbs_jets.first] + good_jets[vbs_jets.second]).M();

  double weight = 1.;
  /*
  * THere has been a problem in the  
  */
  if (njets<=6){
      float X_mjj =mjj;
      if (X_mjj< rangemjj[njets-2].first) X_mjj = rangemjj[njets-2].first;
      if (X_mjj > rangemjj[njets-2].second) X_mjj = rangemjj[njets-2].second;
      float X_vbstot = vbstot;
      if (X_vbstot< rangevbs[njets-2].first) X_vbstot = rangevbs[njets-2].first;
      if (X_vbstot > rangevbs[njets-2].second) X_vbstot = rangevbs[njets-2].second;
      weight = weights_mjj[njets-2]->Eval(X_mjj) * weights_vbstot[njets-2]->Eval(X_vbstot) ;
  }else{   
      float X_mjj =mjj;
      if (X_mjj< rangemjj[5].first) X_mjj = rangemjj[5].first;
      if (X_mjj > rangemjj[5].second) X_mjj = rangemjj[5].second;
      float X_vbstot = vbstot;
      if (X_vbstot< rangevbs[5].first) X_vbstot = rangevbs[5].first;
      if (X_vbstot > rangevbs[5].second) X_vbstot = rangevbs[5].second;
      weight = weights_mjj[5]->Eval(X_mjj) * weights_vbstot[5]->Eval(X_vbstot);
  }

  // If outside of the region where the weight is defined
  if (weight < 0.00001) {
    if (_debug) std::cout << "Weight too small --> 1." << std::endl;
    weight = 1.;
  }

  if (_debug) std::cout << "njets " << njets << " vbstot "<< vbstot << " mjj "<< mjj << " weight: "<< weight << std::endl;
  outputValues[0] = n_good_lep;
  outputValues[1] = njets;
  outputValues[2] = vbstot;
  outputValues[3] = detajj;
  outputValues[4] = mjj;
  outputValues[5] = weight;
}

void
ReweightGenLevelFit::beginEvent(long long _iEntry)
{
  setValues();
}


double
ReweightGenLevelFit::evaluate(unsigned iJ){
  return outputValues[iJ];
}

void
ReweightGenLevelFit::bindTree_(multidraw::FunctionLibrary& _library)
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
}

