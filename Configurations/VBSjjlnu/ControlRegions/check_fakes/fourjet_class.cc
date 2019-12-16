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

class FourJetsVars : public multidraw::TTreeFunction {
public:
  FourJetsVars(char const* type);
  FourJetsVars(unsigned type);

  char const* getName() const override { return "FourJetsVars"; }
  TTreeFunction* clone() const override { return new FourJetsVars(returnVar_); }

  unsigned getNdata() override { return 1; }
  double evaluate(unsigned) override;

protected:
  enum ReturnType {
                   fourjet_pt,
                   fourjet_lep_deltaphi,
                   fourjet_met_deltaphi,
                   fourjet_lep_ptratio,
                   fourjet_pmet,
                   lep_pmet,
                   nVarTypes
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
  static FloatValueReader* MET_pt;
  static FloatValueReader* MET_phi;

  static std::array<double, nVarTypes> returnValues;

  static void setValues(UInt_t, UInt_t, ULong64_t);
};

std::tuple<UInt_t, UInt_t, ULong64_t> FourJetsVars::currentEvent{};
UIntValueReader* FourJetsVars::nJets; 
FloatArrayReader* FourJetsVars::Jet_pt{};
FloatArrayReader* FourJetsVars::Jet_eta{};
FloatArrayReader* FourJetsVars::Jet_phi{};
IntArrayReader* FourJetsVars::Jet_idx{};
FloatArrayReader* FourJetsVars::Jet_mass{};
FloatArrayReader* FourJetsVars::Lepton_pt{};
FloatArrayReader* FourJetsVars::Lepton_eta{};
FloatArrayReader* FourJetsVars::Lepton_phi{};
FloatValueReader* FourJetsVars::MET_pt{};
FloatValueReader* FourJetsVars::MET_phi{};

std::array<double, FourJetsVars::nVarTypes> FourJetsVars::returnValues{};

FourJetsVars::FourJetsVars(char const* _type) :
  TTreeFunction()
{
  std::string type(_type);
  if (type == "fourjet_pt")
    returnVar_ = fourjet_pt;
  else if (type == "fourjet_lep_deltaphi")
    returnVar_ = fourjet_lep_deltaphi;
  else if (type == "fourjet_met_deltaphi")
    returnVar_ = fourjet_met_deltaphi;
  else if (type == "fourjet_lep_ptratio")
    returnVar_ = fourjet_lep_ptratio;
  else if (type == "fourjet_pmet")
    returnVar_ = fourjet_pmet;
  else if (type == "lep_pmet")
    returnVar_ = lep_pmet;
  else
    throw std::runtime_error("unknown return type " + type);
  
}


FourJetsVars::FourJetsVars(unsigned type) :
  TTreeFunction(),
  returnVar_(type) {}


double
FourJetsVars::evaluate(unsigned)
{
  setValues(*run->Get(), *luminosityBlock->Get(), *event->Get());
  return returnValues[returnVar_];
}

void
FourJetsVars::bindTree_(multidraw::FunctionLibrary& _library)
{   
    _library.bindBranch(run, "run");
    _library.bindBranch(luminosityBlock, "luminosityBlock");
    _library.bindBranch(event, "event");
    _library.bindBranch(nJets, "nJet");
    _library.bindBranch(Jet_pt, "CleanJet_pt");
    _library.bindBranch(Jet_eta, "CleanJet_eta");
    _library.bindBranch(Jet_phi, "CleanJet_phi");
    _library.bindBranch(Jet_mass, "Jet_mass");
    _library.bindBranch(Jet_idx, "CleanJet_jetIdx");
    _library.bindBranch(Lepton_pt, "Lepton_pt");
    _library.bindBranch(Lepton_eta, "Lepton_eta");
    _library.bindBranch(Lepton_phi, "Lepton_phi");
    _library.bindBranch(MET_pt, "PuppiMET_pt");
    _library.bindBranch(MET_phi, "PuppiMET_phi");

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
                                     MET_pt = nullptr;
                                     MET_phi = nullptr;  
                                   });
}

/*static*/
void
FourJetsVars::setValues(UInt_t _run, UInt_t _luminosityBlock, ULong64_t _event)
{

  if (std::get<0>(currentEvent) == _run && \
      std::get<1>(currentEvent) == _luminosityBlock && \
      std::get<2>(currentEvent) == _event)
    return;

  currentEvent = std::make_tuple(_run, _luminosityBlock, _event);

  TLorentzVector fourj;
  uint njets {(*nJets->Get())};
  
  for (uint ij = 0; ij < njets; ij++){
    if(ij > 3) break;
    TLorentzVector v;
    float pt = Jet_pt->At(ij);
    float eta = Jet_eta->At(ij);
    float phi = Jet_phi->At(ij);
    float mass = Jet_mass->At(Jet_idx->At(ij));
    v.SetPtEtaPhiM(pt,eta,phi, mass);
    fourj += v;
  }

  TLorentzVector lep; 
  lep.SetPtEtaPhiM(Lepton_pt->At(0), Lepton_eta->At(0), Lepton_phi->At(0), 0.);
  TLorentzVector met; 
  met.SetPtEtaPhiM(*MET_pt->Get(), 0., *MET_phi->Get(), 0.);

  returnValues[fourjet_pt] = fourj.Pt();
  returnValues[fourjet_lep_deltaphi] = abs(fourj.DeltaPhi(lep));
  returnValues[fourjet_met_deltaphi] = abs(fourj.DeltaPhi(met));
  returnValues[fourjet_lep_ptratio] = fourj.Pt() / lep.Pt();

  float dphi_fjmet = fourj.DeltaPhi(met);
  if (dphi_fjmet < TMath::Pi() / 2){
      returnValues[fourjet_pmet] = sin(dphi_fjmet)*met.Pt();
  }else{
      returnValues[fourjet_pmet] =  met.Pt();
  }

  float dphi_lepmet = lep.DeltaPhi(met);
  if (dphi_lepmet < TMath::Pi() / 2){
      returnValues[lep_pmet] = sin(dphi_lepmet)*met.Pt();
  }else{
      returnValues[lep_pmet] =  met.Pt();
  }

}
