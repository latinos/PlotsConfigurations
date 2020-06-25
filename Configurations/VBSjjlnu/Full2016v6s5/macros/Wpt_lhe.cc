#include "LatinoAnalysis/MultiDraw/interface/TTreeFunction.h"
#include "LatinoAnalysis/MultiDraw/interface/FunctionLibrary.h"

#include "TMath.h"
#include "TLorentzVector.h"

#include <cmath>
#include <string>
#include <tuple>

class WptLHE : public multidraw::TTreeFunction {
public:
  WptLHE();

  char const* getName() const override { return "WptLHE"; }
  TTreeFunction* clone() const override { return new WptLHE(); }

  unsigned getNdata() override { return 1; }
  double evaluate(unsigned) override;

protected:
  

  void bindTree_(multidraw::FunctionLibrary&) override;
    
  UIntValueReader* nLHEPart{};
  IntArrayReader*  LHEPart_pdgId{};
  FloatArrayReader* LHEPart_pt{};
  FloatArrayReader* LHEPart_eta{};
  FloatArrayReader* LHEPart_phi{};
  FloatArrayReader* LHEPart_mass{};
  
};

WptLHE::WptLHE() :
  TTreeFunction(){}



double
WptLHE::evaluate(unsigned)
{

    TLorentzVector ele,mu,tau;
    TLorentzVector vele,vmu,vtau;
    uint nPart = *(nLHEPart->Get());
    for (int ip=0; ip < nPart; ip++){
        if (abs(LHEPart_pdgId->At(ip)) == 11) 
            ele.SetPtEtaPhiM(LHEPart_pt->At(ip), LHEPart_eta->At(ip), LHEPart_phi->At(ip), LHEPart_mass->At(ip));
        if (abs(LHEPart_pdgId->At(ip)) == 12) 
            vele.SetPtEtaPhiM(LHEPart_pt->At(ip), LHEPart_eta->At(ip), LHEPart_phi->At(ip), LHEPart_mass->At(ip));
        if (abs(LHEPart_pdgId->At(ip)) == 13) 
            mu.SetPtEtaPhiM(LHEPart_pt->At(ip), LHEPart_eta->At(ip), LHEPart_phi->At(ip), LHEPart_mass->At(ip));
        if (abs(LHEPart_pdgId->At(ip)) == 14) 
            vmu.SetPtEtaPhiM(LHEPart_pt->At(ip), LHEPart_eta->At(ip), LHEPart_phi->At(ip), LHEPart_mass->At(ip));
        if (abs(LHEPart_pdgId->At(ip)) == 15) 
            tau.SetPtEtaPhiM(LHEPart_pt->At(ip), LHEPart_eta->At(ip), LHEPart_phi->At(ip), LHEPart_mass->At(ip));
        if (abs(LHEPart_pdgId->At(ip)) == 16) 
            vtau.SetPtEtaPhiM(LHEPart_pt->At(ip), LHEPart_eta->At(ip), LHEPart_phi->At(ip), LHEPart_mass->At(ip));
    }

    if (ele.Pt() != 0 && vele.Pt() !=0){
        return (ele+vele).Pt();
    }
    if (mu.Pt() != 0 && vmu.Pt() !=0){
        return (mu+vmu).Pt();
    }
    if (tau.Pt() != 0 && vtau.Pt() !=0){
        return (tau+vtau).Pt();
    }
    return 0.;
}

void
WptLHE::bindTree_(multidraw::FunctionLibrary& _library)
{   
    _library.bindBranch(nLHEPart, "nLHEPart");
    _library.bindBranch(LHEPart_pt, "LHEPart_pt");
    _library.bindBranch(LHEPart_eta, "LHEPart_eta");
    _library.bindBranch(LHEPart_phi, "LHEPart_phi");
    _library.bindBranch(LHEPart_mass, "LHEPart_mass");
    _library.bindBranch(LHEPart_pdgId, "LHEPart_pdgId");
   
}
