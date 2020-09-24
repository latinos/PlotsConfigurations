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

class LeptonJetsVars : public multidraw::TTreeFunction {
public:
  LeptonJetsVars(char const* type);
  LeptonJetsVars(unsigned type);

  char const* getName() const override { return "LeptonJetsVars"; }
  TTreeFunction* clone() const override { return new LeptonJetsVars(returnVar_); }

  unsigned getNdata() override { return 1; }
  double evaluate(unsigned) override;

protected:
  enum ReturnType {
                   whad_pt,
                   deltaphi_lep_whad,
                   deltaphi_lep_vbsjets,
                   deltaphi_lep_jet0,
                   deltaphi_lep_ww,
                   deltaR_lep_whad,
                   deltaR_lep_vbsjets,
                   deltaR_lep_jet0,
                   deltaR_lep_ww,
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
  static IntArrayReader* vbs_jets;
  static IntArrayReader* v_jets;

  static std::array<double, nVarTypes> returnValues;

  static void setValues(UInt_t, UInt_t, ULong64_t);
};

std::tuple<UInt_t, UInt_t, ULong64_t> LeptonJetsVars::currentEvent{};
UIntValueReader* LeptonJetsVars::nJets; 
FloatArrayReader* LeptonJetsVars::Jet_pt{};
FloatArrayReader* LeptonJetsVars::Jet_eta{};
FloatArrayReader* LeptonJetsVars::Jet_phi{};
IntArrayReader* LeptonJetsVars::Jet_idx{};
FloatArrayReader* LeptonJetsVars::Jet_mass{};
FloatArrayReader* LeptonJetsVars::Lepton_pt{};
FloatArrayReader* LeptonJetsVars::Lepton_eta{};
FloatArrayReader* LeptonJetsVars::Lepton_phi{};
IntArrayReader* LeptonJetsVars::vbs_jets{};
IntArrayReader* LeptonJetsVars::v_jets{};

std::array<double, LeptonJetsVars::nVarTypes> LeptonJetsVars::returnValues{};

LeptonJetsVars::LeptonJetsVars(char const* _type) :
  TTreeFunction()
{
  std::string type(_type);
  if (type ==  "whad_pt")
    returnVar_ = whad_pt;
  else if (type == "deltaphi_lep_whad")
    returnVar_ = deltaphi_lep_whad;
  else if (type == "deltaphi_lep_vbsjets")
    returnVar_ = deltaphi_lep_vbsjets;
  else if (type == "deltaphi_lep_jet0")
    returnVar_ = deltaphi_lep_jet0;
  else if (type == "deltaphi_lep_ww")
    returnVar_ = deltaphi_lep_ww;
  else if (type == "deltaR_lep_whad")
    returnVar_ = deltaR_lep_whad;
  else if (type == "deltaR_lep_vbsjets")
    returnVar_ = deltaR_lep_vbsjets;
  else if (type == "deltaR_lep_jet0")
    returnVar_ = deltaR_lep_jet0;
  else if (type == "deltaR_lep_ww")
    returnVar_ = deltaR_lep_ww;
  else
    throw std::runtime_error("unknown return type " + type);
  
}


LeptonJetsVars::LeptonJetsVars(unsigned type) :
  TTreeFunction(),
  returnVar_(type) {}


double
LeptonJetsVars::evaluate(unsigned)
{
  setValues(*run->Get(), *luminosityBlock->Get(), *event->Get());
  return returnValues[returnVar_];
}

void
LeptonJetsVars::bindTree_(multidraw::FunctionLibrary& _library)
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
    _library.bindBranch(vbs_jets, "VBS_jets_maxmjj_massWZ");
    _library.bindBranch(v_jets, "V_jets_maxmjj_massWZ");

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
                                     vbs_jets = nullptr;
                                     v_jets = nullptr; 
                                   });
}

/*static*/
void
LeptonJetsVars::setValues(UInt_t _run, UInt_t _luminosityBlock, ULong64_t _event)
{

  if (std::get<0>(currentEvent) == _run && \
      std::get<1>(currentEvent) == _luminosityBlock && \
      std::get<2>(currentEvent) == _event)
    return;

  currentEvent = std::make_tuple(_run, _luminosityBlock, _event);

  TLorentzVector vbsjets;
  for (auto ij : *vbs_jets){
    TLorentzVector v;
    float pt = Jet_pt->At(ij);
    float eta = Jet_eta->At(ij);
    float phi = Jet_phi->At(ij);
    float mass = Jet_mass->At(Jet_idx->At(ij));
    v.SetPtEtaPhiM(pt,eta,phi, mass);
    vbsjets += v;
  }


  TLorentzVector whad;
  for (auto ij : *v_jets){
    TLorentzVector v;
    float pt = Jet_pt->At(ij);
    float eta = Jet_eta->At(ij);
    float phi = Jet_phi->At(ij);
    float mass = Jet_mass->At(Jet_idx->At(ij));
    v.SetPtEtaPhiM(pt,eta,phi, mass);
    whad += v;
  }

  TLorentzVector lep; 
  lep.SetPtEtaPhiM(Lepton_pt->At(0), Lepton_eta->At(0), Lepton_phi->At(0), 0.);

  TLorentzVector jet0;
  jet0.SetPtEtaPhiM(Jet_pt->At(0), Jet_eta->At(0),Jet_phi->At(0),Jet_mass->At(Jet_idx->At(0)));   

  returnValues[whad_pt] = whad.Pt();
  returnValues[deltaphi_lep_whad] = abs(lep.DeltaPhi(whad));
  returnValues[deltaphi_lep_vbsjets] = abs(lep.DeltaPhi(vbsjets));
  returnValues[deltaphi_lep_ww] = abs(lep.DeltaPhi(whad+vbsjets));
  returnValues[deltaphi_lep_jet0] = abs(lep.DeltaPhi(jet0));
  returnValues[deltaR_lep_whad] = lep.DeltaR(whad);
  returnValues[deltaR_lep_vbsjets] = lep.DeltaR(vbsjets);
  returnValues[deltaR_lep_ww] = lep.DeltaR(whad+vbsjets);
  returnValues[deltaR_lep_jet0] = lep.DeltaR(jet0);

}
