#include "LatinoAnalysis/MultiDraw/interface/TTreeFunction.h"
#include "LatinoAnalysis/MultiDraw/interface/FunctionLibrary.h"

#include "TMath.h"
#include "TLorentzVector.h"

#include <cmath>
#include <string>
#include <tuple>

class VetoFatJet : public multidraw::TTreeFunction {
public:
  VetoFatJet(float pt_max);

  char const* getName() const override { return "VetoFatJet"; }
  TTreeFunction* clone() const override { return new VetoFatJet(pt_max); }

  unsigned getNdata() override { return 1; }
  double evaluate(unsigned) override;

protected:
    
  float pt_max;

  void bindTree_(multidraw::FunctionLibrary&) override;

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

VetoFatJet::VetoFatJet(float ptmax) :
  TTreeFunction(), pt_max(ptmax){}


double
VetoFatJet::evaluate(unsigned)
{
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
VetoFatJet::bindTree_(multidraw::FunctionLibrary& _library)
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

}   
