#include "LatinoAnalysis/MultiDraw/interface/TTreeFunction.h"
#include "LatinoAnalysis/MultiDraw/interface/FunctionLibrary.h"

#include "TMath.h"
#include "TFile.h"
#include "TGraph.h"
#include "TH1F.h"
#include "TVector2.h"
#include "TSystem.h"
#include "TLorentzVector.h"

#include <cmath>
#include <string>
#include <unordered_map>
#include <iostream>
#include <stdexcept>
#include <tuple>

class JER_vars : public multidraw::TTreeFunction {
public:
  JER_vars( char const* _type, const char* jer_sf);
  JER_vars( unsigned type, const char* jer_sf);

  char const* getName() const override { return "JER_vars"; }
  TTreeFunction* clone() const override { return new JER_vars(returnVar_, jer_sf_.c_str()); }

  unsigned getNdata() override { return 1; }
  double evaluate(unsigned) override;

protected:
  enum ReturnType {
        whad_pt,mjj_vjet,mjj_vbs,vbs_0_pt,vbs_1_pt, vjet_0_pt,vjet_1_pt, nVarTypes
  };
  
  
  std::string jer_sf_; 
  static TH1F* jer_sf_histo;

  ~JER_vars(){jer_sf_histo = nullptr;};

  void bindTree_(multidraw::FunctionLibrary&) override;

  unsigned returnVar_{nVarTypes};

  UIntValueReader* run{};
  UIntValueReader* luminosityBlock{};
  ULong64ValueReader* event{}; 

  static std::tuple<UInt_t, UInt_t, ULong64_t> currentEvent;
  
  static IntValueReader* VBS_category;
  static FloatArrayReader* Jet_pt;
  static FloatArrayReader* Jet_eta;
  static FloatArrayReader* Jet_phi;
  static IntArrayReader* Jet_idx;
  static FloatArrayReader* Jet_mass;
  static IntArrayReader* V_jets;
  static IntArrayReader* VBS_jets;
  static IntArrayReader* GenJet_index;
  static FloatArrayReader* GenJet_pt;

  static FloatArrayReader* FatJet_pt;
  static FloatArrayReader* FatJet_eta;
  static FloatArrayReader* FatJet_phi;
  static IntArrayReader* FatJet_idx;
  static FloatArrayReader* FatJet_mass;
  static FloatArrayReader* FatJet_pt_raw;

  static std::array<double, nVarTypes> returnValues;

  static void setValues(UInt_t, UInt_t, ULong64_t);
};

std::tuple<UInt_t, UInt_t, ULong64_t> JER_vars::currentEvent{};
IntValueReader* JER_vars::VBS_category{};
FloatArrayReader* JER_vars::Jet_pt{};
FloatArrayReader* JER_vars::Jet_eta{};
FloatArrayReader* JER_vars::Jet_phi{};
IntArrayReader* JER_vars::Jet_idx{};
FloatArrayReader* JER_vars::Jet_mass{};
IntArrayReader* JER_vars::V_jets{};
IntArrayReader* JER_vars::VBS_jets{};
IntArrayReader* JER_vars::GenJet_index{};
FloatArrayReader* JER_vars::GenJet_pt{};
FloatArrayReader* JER_vars::FatJet_pt{};
FloatArrayReader* JER_vars::FatJet_eta{};
FloatArrayReader* JER_vars::FatJet_phi{};
IntArrayReader* JER_vars::FatJet_idx{};
FloatArrayReader* JER_vars::FatJet_mass{};
FloatArrayReader* JER_vars::FatJet_pt_raw{};
TH1F* JER_vars::jer_sf_histo{};


std::array<double, JER_vars::nVarTypes> JER_vars::returnValues{};

JER_vars::JER_vars( char const* _type, const char * jer_sf):
   TTreeFunction(), jer_sf_(jer_sf){
     
    std::string type(_type);
    if (type ==  "whad_pt")
      returnVar_ = whad_pt;
    else if (type == "mjj_vbs")
      returnVar_ = mjj_vbs;
    else if (type == "mjj_vjet")
      returnVar_ = mjj_vjet;
    else if (type == "vbs_0_pt")
      returnVar_ = vbs_0_pt;
    else if (type == "vbs_1_pt")
      returnVar_ = vbs_1_pt;
    else if (type == "vjet_0_pt")
      returnVar_ = vjet_0_pt;
    else if (type == "vjet_1_pt")
      returnVar_ = vjet_1_pt;
    else
      throw std::runtime_error("unknown return type " + type);

    // Load JerSF
    TFile * jersf_file = new TFile(jer_sf_.c_str(), "READ");
    jer_sf_histo = (TH1F*) jersf_file->Get("jer_sf");
    jer_sf_histo->SetDirectory(0);
    jersf_file->Close();
}

JER_vars::JER_vars( unsigned type, const char* jer_sf):
TTreeFunction(), returnVar_(type), jer_sf_(jer_sf) {
   // Load JerSF
    TFile * jersf_file = new TFile(jer_sf_.c_str(), "READ");
    jer_sf_histo = (TH1F*) jersf_file->Get("jer_sf");
    jer_sf_histo->SetDirectory(0);
    jersf_file->Close();
}


double
JER_vars::evaluate(unsigned)
{
  setValues(*run->Get(), *luminosityBlock->Get(), *event->Get());
  return returnValues[returnVar_];
}

void
JER_vars::bindTree_(multidraw::FunctionLibrary& _library)
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
    _library.bindBranch(V_jets, "V_jets_maxmjj_massWZ");
    _library.bindBranch(VBS_jets, "VBS_jets_maxmjj_massWZ");
    _library.bindBranch(GenJet_index, "Jet_genJetIdx");
    _library.bindBranch(GenJet_pt, "GenJet_pt");

    _library.bindBranch(FatJet_pt, "CleanFatJet_pt");
    _library.bindBranch(FatJet_eta, "CleanFatJet_eta");
    _library.bindBranch(FatJet_phi, "CleanFatJet_phi");
    _library.bindBranch(FatJet_mass, "CleanFatJet_mass");
    _library.bindBranch(FatJet_idx, "CleanFatJet_jetIdx");
    _library.bindBranch(FatJet_pt_raw, "FatJet_pt_raw");
  
    currentEvent = std::make_tuple(0, 0, 0);

    _library.addDestructorCallback([]() {
                                    VBS_category = nullptr;
                                    Jet_pt = nullptr;
                                    Jet_eta = nullptr;
                                    Jet_phi = nullptr;
                                    Jet_mass = nullptr;
                                    Jet_idx = nullptr;
                                    V_jets = nullptr;
                                    VBS_jets = nullptr;
                                    GenJet_index = nullptr;
                                    GenJet_pt = nullptr;
                                    FatJet_pt = nullptr;
                                    FatJet_eta = nullptr;
                                    FatJet_phi = nullptr;
                                    FatJet_mass = nullptr;
                                    FatJet_idx = nullptr;
                                    FatJet_pt_raw = nullptr;
                                   });
}

/*static*/
void
JER_vars::setValues(UInt_t _run, UInt_t _luminosityBlock, ULong64_t _event)
{
  
  if (std::get<0>(currentEvent) == _run && \
      std::get<1>(currentEvent) == _luminosityBlock && \
      std::get<2>(currentEvent) == _event)
    return;

  currentEvent = std::make_tuple(_run, _luminosityBlock, _event);

  int vbs_cat = *(VBS_category->Get());

  //cout << "VBS category "<< vbs_cat <<  endl;
  //boosted category
  if (vbs_cat == 0){

    // To apply JER we have to change the 4-momenta 
    TLorentzVector vjet;
    vector<TLorentzVector> vbs_jets; 

    float pt = FatJet_pt->At(0);
    float eta = FatJet_eta->At(0);
    float phi = FatJet_phi->At(0);
    float mass = FatJet_mass->At(0);

    vjet.SetPtEtaPhiM(pt,eta,phi, mass);
    float pt_raw = FatJet_pt_raw->At(FatJet_idx->At(0));
    float sf = jer_sf_histo->GetBinContent(jer_sf_histo->FindBin(fabs(eta)));
    float jer_corr = 1+ (sf-1)*(pt-pt_raw)/pt;
    if (jer_corr <0) jer_corr = 0;

    vjet*=jer_corr;
  

    for (auto ij : *VBS_jets){
      TLorentzVector v;
      float pt = Jet_pt->At(ij);
      float eta = Jet_eta->At(ij);
      float phi = Jet_phi->At(ij);
      float mass = Jet_mass->At(Jet_idx->At(ij));

      v.SetPtEtaPhiM(pt,eta,phi, mass);

      float pt_raw =    GenJet_pt->At(GenJet_index->At(Jet_idx->At(ij)));
      float sf = jer_sf_histo->GetBinContent(jer_sf_histo->FindBin(fabs(eta)));
      float jer_corr = 1+ (sf-1)*(pt-pt_raw)/pt;
      if (jer_corr <0) jer_corr = 0;

      v*=jer_corr;
      vbs_jets.push_back(v);
    }

    returnValues[whad_pt] = vjet.Pt();
    returnValues[mjj_vbs] = (vbs_jets[0]+vbs_jets[1]).M();
    returnValues[mjj_vjet] = vjet.M();
    returnValues[vbs_0_pt] = vbs_jets[0].Pt();
    returnValues[vbs_1_pt] = vbs_jets[1].Pt();
    returnValues[vjet_0_pt] = vjet.Pt();
    returnValues[vjet_1_pt] = -999.;

  }
  //resolved category
  else if (vbs_cat == 1){
    // To apply JER we have to change the 4-momenta 
    vector<TLorentzVector> v_jets; 
    vector<TLorentzVector> vbs_jets; 

    TLorentzVector whad;
    for (auto ij : *V_jets){
      TLorentzVector v;
      float pt = Jet_pt->At(ij);
      float eta = Jet_eta->At(ij);
      float phi = Jet_phi->At(ij);
      float mass = Jet_mass->At(Jet_idx->At(ij));

      v.SetPtEtaPhiM(pt,eta,phi, mass);

      float pt_raw =  GenJet_pt->At(GenJet_index->At(Jet_idx->At(ij)));
      float sf = jer_sf_histo->GetBinContent(jer_sf_histo->FindBin(fabs(eta)));
      float jer_corr = 1+ (sf-1)*(pt-pt_raw)/pt;
      if (jer_corr <0) jer_corr = 0;
      //cout << jer_corr << endl;

      v*=jer_corr;
      v_jets.push_back(v);
      whad+=v;
    }

    for (auto ij : *VBS_jets){
      TLorentzVector v;
      float pt = Jet_pt->At(ij);
      float eta = Jet_eta->At(ij);
      float phi = Jet_phi->At(ij);
      float mass = Jet_mass->At(Jet_idx->At(ij));

      v.SetPtEtaPhiM(pt,eta,phi, mass);

      float pt_raw =  GenJet_pt->At(GenJet_index->At(Jet_idx->At(ij)));
      float sf = jer_sf_histo->GetBinContent(jer_sf_histo->FindBin(fabs(eta)));
      float jer_corr = 1+ (sf-1)*(pt-pt_raw)/pt;
      if (jer_corr <0) jer_corr = 0;

      v*=jer_corr;
      vbs_jets.push_back(v);
    }

    returnValues[whad_pt] = whad.Pt();
    returnValues[mjj_vbs] = (vbs_jets[0]+vbs_jets[1]).M();
    returnValues[mjj_vjet] = (v_jets[0]+v_jets[1]).M();
    returnValues[vbs_0_pt] = vbs_jets[0].Pt();
    returnValues[vbs_1_pt] = vbs_jets[1].Pt();
    returnValues[vjet_0_pt] = v_jets[0].Pt();
    returnValues[vjet_1_pt] = v_jets[1].Pt();

  }

}
