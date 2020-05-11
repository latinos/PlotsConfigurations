#include "LatinoAnalysis/MultiDraw/interface/TTreeFunction.h"
#include "LatinoAnalysis/MultiDraw/interface/FunctionLibrary.h"

#include "TMath.h"
#include "TGraph.h"
#include "TVector2.h"
#include "TSystem.h"
#include "TLorentzVector.h"

#include <cmath>
#include <string>
#include <unordered_map>
#include <iostream>
#include <stdexcept>
#include <tuple>

class PtSystemJets : public multidraw::TTreeFunction {
public:
  PtSystemJets(char const* type);
  PtSystemJets(unsigned type);

  char const* getName() const override { return "PtSystemJets"; }
  TTreeFunction* clone() const override { return new PtSystemJets(returnVar_); }

  unsigned getNdata() override { return 1; }
  double evaluate(unsigned) override;

protected:
  enum ReturnType {
                   _0j,_1j,_2j,_3j,_4j,_allj,nVarTypes
  };
  
 
  void bindTree_(multidraw::FunctionLibrary&) override;

  unsigned returnVar_{nVarTypes};
 
  UIntValueReader* run{};
  UIntValueReader* luminosityBlock{};
  ULong64ValueReader* event{}; 

  static std::tuple<UInt_t, UInt_t, ULong64_t> currentEvent;
  static UIntValueReader* nJets; 
  static FloatArrayReader* Jet_pt;
  static FloatArrayReader* Jet_eta;
  static FloatArrayReader* Jet_phi;
  static IntArrayReader* Jet_idx;
  static FloatArrayReader* Jet_mass;
  static FloatArrayReader* Lepton_pt;
  static FloatArrayReader* Lepton_eta;
  static FloatArrayReader* Lepton_phi;
  static FloatValueReader* nu_pt;
  static FloatValueReader* nu_phi;

  static std::array<double, nVarTypes> returnValues;

  static void setValues(UInt_t, UInt_t, ULong64_t);
};

std::tuple<UInt_t, UInt_t, ULong64_t> PtSystemJets::currentEvent{};
UIntValueReader* PtSystemJets::nJets; 
FloatArrayReader* PtSystemJets::Jet_pt{};
FloatArrayReader* PtSystemJets::Jet_eta{};
FloatArrayReader* PtSystemJets::Jet_phi{};
IntArrayReader* PtSystemJets::Jet_idx{};
FloatArrayReader* PtSystemJets::Jet_mass{};
FloatArrayReader* PtSystemJets::Lepton_pt{};
FloatArrayReader* PtSystemJets::Lepton_eta{};
FloatArrayReader* PtSystemJets::Lepton_phi{};
FloatValueReader* PtSystemJets::nu_pt{};
FloatValueReader* PtSystemJets::nu_phi{};

std::array<double, PtSystemJets::nVarTypes> PtSystemJets::returnValues{};

PtSystemJets::PtSystemJets(char const* _type) :
  TTreeFunction()
{
  std::string type(_type);
  if (type ==  "_0j")
    returnVar_ = _0j;
  else if (type == "_1j")
    returnVar_ = _1j;
  else if (type == "_2j")
    returnVar_ = _2j;
  else if (type == "_3j")
    returnVar_ = _3j;
  else if (type == "_4j")
    returnVar_ = _4j;
  else if (type == "_allj")
    returnVar_ = _allj;
  else
    throw std::runtime_error("unknown return type " + type);
  
}


PtSystemJets::PtSystemJets(unsigned type) :
  TTreeFunction(),
  returnVar_(type) {}


double
PtSystemJets::evaluate(unsigned)
{
  setValues(*run->Get(), *luminosityBlock->Get(), *event->Get());
  return returnValues[returnVar_];
}

void
PtSystemJets::bindTree_(multidraw::FunctionLibrary& _library)
{   
    _library.bindBranch(run, "run");
    _library.bindBranch(luminosityBlock, "luminosityBlock");
    _library.bindBranch(event, "event");

    _library.bindBranch(nJets, "nCleanJet");
    _library.bindBranch(Jet_pt, "CleanJet_pt");
    _library.bindBranch(Jet_eta, "CleanJet_eta");
    _library.bindBranch(Jet_phi, "CleanJet_phi");
    _library.bindBranch(Jet_mass, "Jet_mass");
    _library.bindBranch(Jet_idx, "CleanJet_jetIdx");
    _library.bindBranch(Lepton_pt, "Lepton_pt");
    _library.bindBranch(Lepton_eta, "Lepton_eta");
    _library.bindBranch(Lepton_phi, "Lepton_phi");
    _library.bindBranch(nu_pt, "PuppiMET_pt");
    _library.bindBranch(nu_phi,"PuppiMET_phi");

    currentEvent = std::make_tuple(0, 0, 0);

    _library.addDestructorCallback([]() {
                                     nJets = nullptr;
                                     Jet_pt = nullptr;
                                     Jet_eta = nullptr;
                                     Jet_phi = nullptr;
                                     Jet_mass = nullptr;
                                     Jet_idx = nullptr;
                                     Lepton_pt = nullptr;
                                     Lepton_eta = nullptr;
                                     Lepton_phi = nullptr;
                                     nu_pt = nullptr;
                                     nu_phi = nullptr;
                                   });
}

/*static*/
void
PtSystemJets::setValues(UInt_t _run, UInt_t _luminosityBlock, ULong64_t _event)
{

  if (std::get<0>(currentEvent) == _run && \
      std::get<1>(currentEvent) == _luminosityBlock && \
      std::get<2>(currentEvent) == _event)
    return;

  currentEvent = std::make_tuple(_run, _luminosityBlock, _event);

  vector<TLorentzVector> jets;
  for (int ij= 0; ij< *(nJets->Get()); ij++ ){
    TLorentzVector v;
    float pt = Jet_pt->At(ij);
    float eta = Jet_eta->At(ij);
    float phi = Jet_phi->At(ij);
    float mass = Jet_mass->At(Jet_idx->At(ij));
    v.SetPtEtaPhiM(pt,eta,phi, mass);
    jets.push_back(v);
  }


  TLorentzVector lep; 
  lep.SetPtEtaPhiM(Lepton_pt->At(0), Lepton_eta->At(0), Lepton_phi->At(0), 0.);

  TLorentzVector met;
  met.SetPtEtaPhiM(*(nu_pt->Get()), 0. ,*(nu_phi->Get()),0.);   

  vector<TLorentzVector> jet_sums;
  for (int ij = 0; ij<jets.size(); ij++){
    if (ij == 0)  jet_sums.push_back(jets.at(0));
    else  {
     jet_sums.push_back(jets.at(ij)+ jet_sums.at(ij-1));
     //cout << jet_sums.at(ij).Pt()<<endl;
    }    
  }
  returnValues[_0j] = (lep+met).Pt();
  returnValues[_1j] = (lep+met+jet_sums[0]).Pt();
  returnValues[_2j] = (lep+met+jet_sums[1]).Pt();
  returnValues[_3j] = (lep+met+jet_sums[2]).Pt();
  returnValues[_4j] = (lep+met+jet_sums[3]).Pt();
  returnValues[_allj] = (lep+met+ jet_sums.at(jet_sums.size()-1)).Pt();
}
