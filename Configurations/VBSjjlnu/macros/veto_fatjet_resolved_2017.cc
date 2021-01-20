#include "LatinoAnalysis/MultiDraw/interface/TTreeFunction.h"
#include "LatinoAnalysis/MultiDraw/interface/FunctionLibrary.h"

#include "TMath.h"
#include "TLorentzVector.h"

#include <cmath>
#include <string>
#include <tuple>


#ifndef VetoFatJetResolved_2017_HH
#define VetoFatJetResolved_2017_HH

typedef TTreeReaderValue<Double_t> DoubleValueReader;

class VetoFatJetResolved_2017 : public multidraw::TTreeFunction {
public:
  VetoFatJetResolved_2017(float pt_max);
  ~VetoFatJetResolved_2017();

  char const* getName() const override { return "VetoFatJetResolved_2017"; }
  TTreeFunction* clone() const override { return new VetoFatJetResolved_2017(pt_max); }

  unsigned getNdata() override { return 1; }
  double evaluate(unsigned) override;

protected:
    
  float pt_max;

  void bindTree_(multidraw::FunctionLibrary&) override;

  DoubleValueReader* VBS_category{};
  UIntValueReader* nFatJet{}; 
  FloatArrayReader* FatJet_pt{};
  FloatArrayReader* FatJet_eta{};
  FloatArrayReader* FatJet_phi{};
  FloatArrayReader* FatJet_mass{};
  FloatArrayReader* FatJet_tau2{};
  FloatArrayReader* FatJet_tau1{};
  FloatArrayReader* Lepton_pt{};
  FloatArrayReader* Lepton_eta{};
  FloatArrayReader* Lepton_phi{};

};

VetoFatJetResolved_2017::VetoFatJetResolved_2017(float ptmax) :
  TTreeFunction(), pt_max(ptmax){}


double
VetoFatJetResolved_2017::evaluate(unsigned)
{ 
  // Filter out some events
  int vbs_cat = static_cast<int>(*(VBS_category->Get()));
  if (vbs_cat != 1){
    // The module returns true (no filter) for category different from resolved
    return true;
  }


  bool nofatjet_event = true;
   // Look for fatjet passing tau21 and mass selection, and not overlap with leptons, with pt > max
  for(int ifj=0; ifj < *(nFatJet->Get()); ifj++){
      
      float tau1 = FatJet_tau1->At(ifj);
      if (tau1 == 0) tau1 = 0.00001;
      float tau21 = FatJet_tau2->At(ifj) /tau1;

      if ( (tau21 < 0.45 ) && 
           (FatJet_pt->At(ifj) >= pt_max ) ){
                //check if it is overlapped with lepton
                TLorentzVector fatjet;
                fatjet.SetPtEtaPhiM( FatJet_pt->At(ifj),FatJet_eta->At(ifj),FatJet_phi->At(ifj),FatJet_mass->At(ifj));
                TLorentzVector lep;
                lep.SetPtEtaPhiM(Lepton_pt->At(0),Lepton_eta->At(0),Lepton_phi->At(0),0);
                if (lep.DeltaR(fatjet) > 0.8)  nofatjet_event = false;
      }
  } 

  return nofatjet_event;
    
}

void
VetoFatJetResolved_2017::bindTree_(multidraw::FunctionLibrary& _library)
{   
    // Using only nominals
    _library.bindBranch(nFatJet, "nFatJet");
    _library.bindBranch(FatJet_pt, "FatJet_pt_nom");
    _library.bindBranch(FatJet_eta, "FatJet_eta");
    _library.bindBranch(FatJet_phi, "FatJet_phi");
    _library.bindBranch(FatJet_mass, "FatJet_msoftdrop_nom");
    _library.bindBranch(FatJet_tau2, "FatJet_tau2");
    _library.bindBranch(FatJet_tau1, "FatJet_tau1");
    _library.bindBranch(Lepton_pt, "Lepton_pt");
    _library.bindBranch(Lepton_eta, "Lepton_eta");
    _library.bindBranch(Lepton_phi, "Lepton_phi");
    _library.bindBranch(VBS_category, "VBS_category_OTF"); 
}   


VetoFatJetResolved_2017::~VetoFatJetResolved_2017(){
    nFatJet = nullptr;
    FatJet_pt = nullptr;
    FatJet_eta = nullptr;
    FatJet_phi = nullptr;
    FatJet_mass = nullptr;
    FatJet_tau2 = nullptr;
    FatJet_tau1 = nullptr;
    Lepton_pt = nullptr;
    Lepton_eta = nullptr;
    Lepton_phi = nullptr;
    VBS_category = nullptr;
}

#endif