#include "LatinoAnalysis/MultiDraw/interface/TTreeFunction.h"
#include "LatinoAnalysis/MultiDraw/interface/FunctionLibrary.h"

#include "TMath.h"
#include "TFile.h"
#include "TGraph.h"
#include "TH1F.h"
#include "TVector2.h"
#include "Math/Vector4D.h"
#include "TSystem.h"
#include "TLorentzVector.h"

#include <cmath>
#include <string>
#include <unordered_map>
#include <iostream>
#include <stdexcept>
#include <tuple>

class HEMissue : public multidraw::TTreeFunction {
public:
  HEMissue( char const* _type);
  HEMissue( unsigned type);

  char const* getName() const override { return "HEMissue"; }
  TTreeFunction* clone() const override { return new HEMissue(returnVar_); }

  unsigned getNdata() override { return 1; }
  double evaluate(unsigned) override;

protected:
  enum ReturnType {
        whad_pt,mjj_vjet,mjj_vbs,vbs_0_pt,vbs_1_pt, vjet_0_pt,vjet_1_pt,MET_pt,MET_phi, nVarTypes
  };
  

  ~HEMissue(){};

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
  static FloatValueReader* PuppiMET_pt;
  static FloatValueReader* PuppiMET_phi;

  static std::array<double, nVarTypes> returnValues;

  static void setValues(UInt_t, UInt_t, ULong64_t);
};

std::tuple<UInt_t, UInt_t, ULong64_t> HEMissue::currentEvent{};
IntValueReader* HEMissue::VBS_category{};
FloatArrayReader* HEMissue::Jet_pt{};
FloatArrayReader* HEMissue::Jet_eta{};
FloatArrayReader* HEMissue::Jet_phi{};
IntArrayReader* HEMissue::Jet_idx{};
FloatArrayReader* HEMissue::Jet_mass{};
IntArrayReader* HEMissue::V_jets{};
IntArrayReader* HEMissue::VBS_jets{};
FloatValueReader* HEMissue::PuppiMET_pt;
FloatValueReader* HEMissue::PuppiMET_phi;

std::array<double, HEMissue::nVarTypes> HEMissue::returnValues{};

HEMissue::HEMissue( char const* _type):
   TTreeFunction(){
     
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
    else if (type == "MET_pt")
      returnVar_ = MET_pt;
    else if (type == "MET_phi")
      returnVar_ = MET_phi;
    else
      throw std::runtime_error("unknown return type " + type);

}

HEMissue::HEMissue( unsigned type):
TTreeFunction(), returnVar_(type) {
}


double
HEMissue::evaluate(unsigned)
{
  setValues(*run->Get(), *luminosityBlock->Get(), *event->Get());
  return returnValues[returnVar_];
}

void
HEMissue::bindTree_(multidraw::FunctionLibrary& _library)
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

    _library.bindBranch(PuppiMET_pt, "PuppiMET_pt");
    _library.bindBranch(PuppiMET_phi, "PuppiMET_phi");
  
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
                                    PuppiMET_phi = nullptr;
                                    PuppiMET_pt = nullptr;
                                   });
}

/*static*/
void
HEMissue::setValues(UInt_t _run, UInt_t _luminosityBlock, ULong64_t _event)
{
  
  if (std::get<0>(currentEvent) == _run && \
      std::get<1>(currentEvent) == _luminosityBlock && \
      std::get<2>(currentEvent) == _event)
    return;

  currentEvent = std::make_tuple(_run, _luminosityBlock, _event);

  int vbs_cat = *(VBS_category->Get());

  //cout << "VBS category "<< vbs_cat <<  endl;
  //boosted category -> We correct only VBS jets variables
  if (vbs_cat == 0){

    // To apply JER we have to change the 4-momenta 

    vector<ROOT::Math::PtEtaPhiMVector> vbs_jets; 

    for (auto ij : *VBS_jets){
      vbs_jets.emplace_back(Jet_pt->At(ij),
                      Jet_eta->At(ij),   
                      Jet_phi->At(ij),
                      Jet_mass->At(Jet_idx->At(ij)));
    }

    //Correct the jets
    vector<ROOT::Math::PtEtaPhiMVector> corr_vbs_jets; 
    for(auto j : vbs_jets){
      float new_pt = j.Pt();
      //cout << new_pt << " " << j.Eta() << " " << j.Phi() << endl;
      if ((j.Eta()>-2.5 && j.Eta() < -1.3) && (j.Phi() > -1.57 && j.Phi() < -0.87)){
        new_pt *= 0.8;
      }
      else if ((j.Eta() > -3. &&  j.Eta() < -2.5) && (j.Phi() > -1.57 && j.Phi() < -0.87)){
        new_pt *=0.65;
      }
      corr_vbs_jets.emplace_back(new_pt, j.Eta(), j.Phi(), j.M());
    }

    //met correction
    ROOT::Math::PtEtaPhiMVector delta = (corr_vbs_jets[0]+corr_vbs_jets[1]) - (vbs_jets[0]+vbs_jets[1]);
    ROOT::Math::PtEtaPhiMVector met {*PuppiMET_pt->Get(), 0, *PuppiMET_phi->Get(), 0};
  
    returnValues[whad_pt] = -1;
    returnValues[mjj_vbs] = (corr_vbs_jets[0]+corr_vbs_jets[1]).M();
    returnValues[mjj_vjet] = -1;
    returnValues[vbs_0_pt] = corr_vbs_jets[0].Pt();
    returnValues[vbs_1_pt] = corr_vbs_jets[1].Pt();
    returnValues[vjet_0_pt] = -1;
    returnValues[vjet_1_pt] = -1;
    returnValues[MET_pt] = (met - delta).Pt();
    returnValues[MET_phi] = (met - delta).Phi();

    

  }
  //resolved category
  else if (vbs_cat == 1){
    // To apply JER we have to change the 4-momenta 

    vector<ROOT::Math::PtEtaPhiMVector> vbs_jets; 
    vector<ROOT::Math::PtEtaPhiMVector> v_jets; 

    for (auto ij : *VBS_jets){
      vbs_jets.emplace_back(Jet_pt->At(ij),
                      Jet_eta->At(ij),   
                      Jet_phi->At(ij),
                      Jet_mass->At(Jet_idx->At(ij)));
    }

    for (auto ij : *V_jets){
      v_jets.emplace_back(Jet_pt->At(ij),
                      Jet_eta->At(ij),   
                      Jet_phi->At(ij),
                      Jet_mass->At(Jet_idx->At(ij)));
    }

    //Correct the jets
    vector<ROOT::Math::PtEtaPhiMVector> corr_vbs_jets; 
    vector<ROOT::Math::PtEtaPhiMVector> corr_v_jets; 
    for(auto j : vbs_jets){
      float new_pt = j.Pt();
      //cout << new_pt << " " << j.Eta() << " " << j.Phi() << endl;
      if ((j.Eta()>-2.5 && j.Eta() < -1.3) && (j.Phi() > -1.57 && j.Phi() < -0.87)){
        new_pt *= 0.8;
      }
      else if ((j.Eta() > -3. &&  j.Eta() < -2.5) && (j.Phi() > -1.57 && j.Phi() < -0.87)){
        new_pt *=0.65;
      }
      corr_vbs_jets.emplace_back(new_pt, j.Eta(), j.Phi(), j.M());
    }

    for(auto j : v_jets){
      float new_pt = j.Pt();
      //cout << new_pt << " " << j.Eta() << " " << j.Phi() << endl;
      if ((j.Eta()>-2.5 && j.Eta() < -1.3) && (j.Phi() > -1.57 && j.Phi() < -0.87)){
        new_pt*=0.8;
      }
      else if ((j.Eta() > -3. &&  j.Eta() < -2.5) && (j.Phi() > -1.57 && j.Phi() < -0.87)){
        new_pt*=0.65;
      }
      corr_v_jets.emplace_back(new_pt, j.Eta(), j.Phi(), j.M());
    }

    //met correction
    ROOT::Math::PtEtaPhiMVector delta_vbs = (corr_vbs_jets[0]+corr_vbs_jets[1]) - (vbs_jets[0]+vbs_jets[1]);
    ROOT::Math::PtEtaPhiMVector delta_vjet = (corr_v_jets[0]+corr_v_jets[1]) - (v_jets[0]+v_jets[1]);
    ROOT::Math::PtEtaPhiMVector met {*PuppiMET_pt->Get(), 0, *PuppiMET_phi->Get(), 0};

    auto vjetsum = (corr_v_jets[0] + corr_v_jets[1]);
  
    returnValues[whad_pt] = vjetsum.Pt();
    returnValues[mjj_vbs] = (corr_vbs_jets[0]+corr_vbs_jets[1]).M();
    returnValues[mjj_vjet] = vjetsum.M();
    returnValues[vbs_0_pt] = corr_vbs_jets[0].Pt();
    returnValues[vbs_1_pt] = corr_vbs_jets[1].Pt();
    returnValues[vjet_0_pt] = corr_v_jets[0].Pt();
    returnValues[vjet_1_pt] = corr_v_jets[1].Pt();

    returnValues[MET_pt] = (met - delta_vbs -delta_vjet).Pt();
    returnValues[MET_phi] = (met - delta_vbs -delta_vjet).Phi();

    //cout << "vbs_1_pt" << vbs_jets[1].Pt() << "- "<< vbs_jets[1].Pt() << endl;
  }

}
