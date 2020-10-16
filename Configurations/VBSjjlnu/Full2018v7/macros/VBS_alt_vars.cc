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

class VBSAlternativeVars : public multidraw::TTreeFunction {
public:
  VBSAlternativeVars(char const* type, char const* res_algo, char const* boost_algo );
  VBSAlternativeVars(unsigned type, char const* res_algo, char const* boost_algo );

  char const* getName() const override { return "VBSAlternativeVars"; }
  TTreeFunction* clone() const override { return new VBSAlternativeVars(returnVar_, res_algo.c_str(), boost_algo.c_str()); }

  unsigned getNdata() override { return 1; }
  double evaluate(unsigned) override;

protected:
  enum ReturnType {
                   vbs_0_pt_alt,
                   vbs_0_eta_alt,
                   vbs_1_pt_alt,
                   vbs_1_eta_alt,
                   vjet_0_pt_alt,
                   vjet_0_eta_alt,
                   vjet_1_pt_alt,
                   vjet_1_eta_alt,
                   w_had_pt_alt,
                   mjj_vbs_alt,
                   mjj_vjet_alt,
                   deltaeta_vbs_alt,
                   deltaphi_vbs_alt,
                   nVarTypes
  };

 
  void bindTree_(multidraw::FunctionLibrary&) override;

  unsigned returnVar_{nVarTypes};
 
  UIntValueReader* run{};
  UIntValueReader* luminosityBlock{};
  ULong64ValueReader* event{}; 

  string res_algo;
  string boost_algo;

  static std::tuple<UInt_t, UInt_t, ULong64_t> currentEvent;
  
  static IntValueReader* VBS_category;
  static FloatArrayReader* Jet_pt;
  static FloatArrayReader* Jet_eta;
  static FloatArrayReader* Jet_phi;
  static IntArrayReader*   Jet_idx;
  static FloatArrayReader* Jet_mass;

  static FloatArrayReader* FatJet_pt;
  static FloatArrayReader* FatJet_eta;
  static FloatArrayReader* FatJet_mass;

  static IntArrayReader* vbs_jets_res_index;
  static IntArrayReader* v_jets_res_index;
  static IntArrayReader* vbs_jets_boost_index;

  static std::array<double, nVarTypes> returnValues;

  static void setValues(UInt_t, UInt_t, ULong64_t);
};

std::tuple<UInt_t, UInt_t, ULong64_t> VBSAlternativeVars::currentEvent{};

IntValueReader* VBSAlternativeVars::VBS_category{};
FloatArrayReader* VBSAlternativeVars::Jet_pt{};
FloatArrayReader* VBSAlternativeVars::Jet_eta{};
FloatArrayReader* VBSAlternativeVars::Jet_phi{};
IntArrayReader* VBSAlternativeVars::Jet_idx{};
FloatArrayReader* VBSAlternativeVars::Jet_mass{};

FloatArrayReader* VBSAlternativeVars::FatJet_pt{};
FloatArrayReader* VBSAlternativeVars::FatJet_eta{};
FloatArrayReader* VBSAlternativeVars::FatJet_mass{};

IntArrayReader* VBSAlternativeVars::vbs_jets_res_index{};
IntArrayReader* VBSAlternativeVars::v_jets_res_index{};
IntArrayReader* VBSAlternativeVars::vbs_jets_boost_index{};

std::array<double, VBSAlternativeVars::nVarTypes> VBSAlternativeVars::returnValues{};

VBSAlternativeVars::VBSAlternativeVars(char const* _type, char const* res_Algo, char const* boost_Algo) :
  TTreeFunction(),res_algo(res_Algo), boost_algo(boost_Algo)
{
  std::string type(_type);
  if (type ==  "vbs_0_pt_alt")
    returnVar_ = vbs_0_pt_alt;
  else if (type == "vbs_0_eta_alt")
    returnVar_ = vbs_0_eta_alt;
  else if (type == "vbs_1_pt_alt")
    returnVar_ = vbs_1_pt_alt;
  else if (type == "vbs_1_eta_alt")
    returnVar_ = vbs_1_eta_alt;
    else if (type == "vjet_0_pt_alt")
    returnVar_ = vjet_0_pt_alt;
  else if (type == "vjet_1_pt_alt")
    returnVar_ = vjet_1_pt_alt;
  else if (type == "vjet_0_eta_alt")
    returnVar_ = vjet_0_eta_alt;
  else if (type == "vjet_1_eta_alt")
    returnVar_ = vjet_1_eta_alt;
  else if (type == "w_had_pt_alt")
    returnVar_ = w_had_pt_alt;
  else if (type == "mjj_vbs_alt")
    returnVar_ = mjj_vbs_alt;
  else if (type == "mjj_vjet_alt")
    returnVar_ = mjj_vjet_alt;
  else if (type == "deltaeta_vbs_alt")
    returnVar_ = deltaeta_vbs_alt;
  else if (type == "deltaphi_vbs_alt")
    returnVar_ = deltaeta_vbs_alt;
  else
    throw std::runtime_error("unknown return type " + type);
  
}


VBSAlternativeVars::VBSAlternativeVars(unsigned type, char const* res_Algo, char const* boost_Algo) :
  TTreeFunction(),
  returnVar_(type), res_algo(res_Algo), boost_algo(boost_Algo) {}


double
VBSAlternativeVars::evaluate(unsigned)
{
  setValues(*run->Get(), *luminosityBlock->Get(), *event->Get());
  return returnValues[returnVar_];
}

void
VBSAlternativeVars::bindTree_(multidraw::FunctionLibrary& _library)
{   
    _library.bindBranch(run, "run");
    _library.bindBranch(luminosityBlock, "luminosityBlock");
    _library.bindBranch(event, "event");

    _library.bindBranch(VBS_category, "VBS_category");
    _library.bindBranch(Jet_pt, "CleanJet_pt");
    _library.bindBranch(Jet_eta, "CleanJet_eta");
    _library.bindBranch(Jet_phi, "CleanJet_phi");
    _library.bindBranch(Jet_mass, "Jet_mass");
    _library.bindBranch(Jet_idx, "CleanJet_jetIdx");

    _library.bindBranch(FatJet_pt, "CleanFatJet_pt");
    _library.bindBranch(FatJet_eta, "CleanFatJet_eta");
    _library.bindBranch(FatJet_mass, "CleanFatJet_mass");
  
    _library.bindBranch(vbs_jets_res_index, ("VBS_jets_"+ res_algo).c_str());
    _library.bindBranch(v_jets_res_index, ("V_jets_"+ res_algo).c_str());
    _library.bindBranch(vbs_jets_boost_index, ("VBS_jets_"+ boost_algo).c_str());

    currentEvent = std::make_tuple(0, 0, 0);

    _library.addDestructorCallback([]() {
                                     VBS_category = nullptr;
                                     Jet_pt = nullptr;
                                     Jet_eta = nullptr;
                                     Jet_phi = nullptr;
                                     Jet_mass = nullptr;
                                     Jet_idx = nullptr;
                                     vbs_jets_res_index = nullptr;
                                     vbs_jets_boost_index = nullptr;
                                     v_jets_res_index = nullptr; 
                                     FatJet_pt = nullptr;
                                     FatJet_eta = nullptr;
                                     FatJet_mass = nullptr;
                                   });
}

/*static*/
void
VBSAlternativeVars::setValues(UInt_t _run, UInt_t _luminosityBlock, ULong64_t _event)
{

  if (std::get<0>(currentEvent) == _run && \
      std::get<1>(currentEvent) == _luminosityBlock && \
      std::get<2>(currentEvent) == _event)
    return;

  currentEvent = std::make_tuple(_run, _luminosityBlock, _event);

  int vbs_cat = *(VBS_category->Get());

  //cout << "VBS_cat "<< vbs_cat<< endl;

  if (vbs_cat==1){
    vector<TLorentzVector> vbsjets;
    for (auto ij : *vbs_jets_res_index){
      TLorentzVector v;
      float pt = Jet_pt->At(ij);
      float eta = Jet_eta->At(ij);
      float phi = Jet_phi->At(ij);
      float mass = Jet_mass->At(Jet_idx->At(ij));
      v.SetPtEtaPhiM(pt,eta,phi, mass);
      vbsjets.push_back(v);
    }

    vector<TLorentzVector> vjets;
    for (auto ij : *v_jets_res_index){
      TLorentzVector v;
      float pt = Jet_pt->At(ij);
      float eta = Jet_eta->At(ij);
      float phi = Jet_phi->At(ij);
      float mass = Jet_mass->At(Jet_idx->At(ij));
      v.SetPtEtaPhiM(pt,eta,phi, mass);
      vjets.push_back(v);
    }

    
    returnValues[vbs_0_pt_alt] = vbsjets.at(0).Pt();
    returnValues[vbs_1_pt_alt] = vbsjets.at(1).Pt();
    returnValues[vbs_0_eta_alt] = vbsjets.at(0).Eta();
    returnValues[vbs_1_eta_alt] = vbsjets.at(1).Eta();
    returnValues[vjet_0_pt_alt] = vjets.at(0).Pt();
    returnValues[vjet_1_pt_alt] = vjets.at(1).Pt();
    returnValues[vjet_0_eta_alt] = vjets.at(0).Eta();
    returnValues[vjet_1_eta_alt] = vjets.at(1).Eta();
    returnValues[mjj_vbs_alt] = (vbsjets.at(0) + vbsjets.at(1)).M();
    returnValues[mjj_vjet_alt] = (vjets.at(0) + vjets.at(1)).M();
    returnValues[deltaeta_vbs_alt] = abs(vbsjets.at(0).Eta() -  vbsjets.at(1).Eta());
    returnValues[deltaphi_vbs_alt] = abs(vbsjets.at(0).DeltaPhi(vbsjets.at(1)));
    returnValues[w_had_pt_alt] = (vjets.at(0) + vjets.at(1)).Pt();


  }
  else if (vbs_cat == 0){
    vector<TLorentzVector> vbsjets;
    for (auto ij : *vbs_jets_boost_index){
      TLorentzVector v;
      float pt = Jet_pt->At(ij);
      float eta = Jet_eta->At(ij);
      float phi = Jet_phi->At(ij);
      float mass = Jet_mass->At(Jet_idx->At(ij));
      v.SetPtEtaPhiM(pt,eta,phi, mass);
      vbsjets.push_back(v);
    }

    returnValues[vbs_0_pt_alt] = vbsjets.at(0).Pt();
    returnValues[vbs_1_pt_alt] = vbsjets.at(1).Pt();
    returnValues[vbs_0_eta_alt] = vbsjets.at(0).Eta();
    returnValues[vbs_1_eta_alt] = vbsjets.at(1).Eta();
    returnValues[vjet_0_pt_alt] = FatJet_pt->At(0);
    returnValues[vjet_1_pt_alt] = -999.;
    returnValues[vjet_0_eta_alt] = FatJet_eta->At(0);
    returnValues[vjet_1_eta_alt] = -999.;
    returnValues[mjj_vbs_alt] = (vbsjets.at(0) + vbsjets.at(1)).M();
    returnValues[mjj_vjet_alt] =  FatJet_mass->At(0);
    returnValues[deltaeta_vbs_alt] = abs(vbsjets.at(0).Eta() -  vbsjets.at(1).Eta());
    returnValues[deltaphi_vbs_alt] = abs(vbsjets.at(0).DeltaPhi(vbsjets.at(1)));
    returnValues[w_had_pt_alt] = FatJet_pt->At(0);

  
  }
  else {
    returnValues[vbs_0_pt_alt] = -999.;
    returnValues[vbs_1_pt_alt] = -999.;
    returnValues[vbs_0_eta_alt] = -999.;
    returnValues[vbs_1_eta_alt] = -999.;
    returnValues[vjet_0_pt_alt] = -999.;
    returnValues[vjet_1_pt_alt] = -999.;
    returnValues[vjet_0_eta_alt] = -999.;
    returnValues[vjet_1_eta_alt] = -999.;
    returnValues[mjj_vbs_alt] = -999.;
    returnValues[mjj_vjet_alt] = -999.;
    returnValues[deltaeta_vbs_alt] = -999.;
    returnValues[deltaphi_vbs_alt] = -999.;
    returnValues[w_had_pt_alt] = -999.;
  }  


}
