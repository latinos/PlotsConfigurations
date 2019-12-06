/*
  Temporary on-the-fly wlep1pt var for nanoLatino trees nAODv5_2016/2017/2018v5 or earlier.
*/

#include "LatinoAnalysis/MultiDraw/interface/TTreeFunction.h"
#include "LatinoAnalysis/MultiDraw/interface/FunctionLibrary.h"

#include "TSystem.h"

#include <iostream>
#include <vector>

#include "TLorentzVector.h"
#include "TMath.h"

class WHlepMt : public multidraw::TTreeFunction {
public:
  WHlepMt();

  char const* getName() const override { return "WHlepMt"; }
  TTreeFunction* clone() const override { return new WHlepMt(); }
  //TTreeFunction* clone() const override;

  unsigned getNdata() override { return 1; }
  float deltaPhi(float, float);
  double evaluate(unsigned) override;

protected:
  void bindTree_(multidraw::FunctionLibrary&) override;

  UIntValueReader* nCleanJet;
  FloatArrayReader* CleanJet_pt;
  FloatArrayReader* CleanJet_eta;
  FloatArrayReader* CleanJet_phi;
  UIntValueReader* nLepton;
  FloatArrayReader* Lepton_pt;
  FloatArrayReader* Lepton_eta;
  FloatArrayReader* Lepton_phi;
  FloatValueReader* MET_pt;
  FloatValueReader* dphilmet1;
  FloatValueReader* dphilmet2;
};

WHlepMt::WHlepMt() :
  TTreeFunction()
{}

// --- Helper
float
WHlepMt::deltaPhi(float phi1, float phi2)
{
  float PHI = std::abs(phi1-phi2);
if (PHI<=3.14159265)
  return PHI;
else
  return 2*3.14159265-PHI;
}
// Helper ---

double
WHlepMt::evaluate(unsigned)
{
  TLorentzVector Whad(0.,0.,0.,0.);
  TLorentzVector jet1(0.,0.,0.,0.);
  TLorentzVector jet2(0.,0.,0.,0.);

  unsigned njet{*nCleanJet->Get()};
  unsigned nlep{*nLepton->Get()};
  float Pfmet{*MET_pt->Get()};
  float Dphilmet1{*dphilmet1->Get()};
  float Dphilmet2{*dphilmet2->Get()};

  if (njet>=2 && nlep>=2){

    jet1.SetPtEtaPhiM( CleanJet_pt->At(0), CleanJet_eta->At(0), CleanJet_phi->At(0), 0. );
    jet2.SetPtEtaPhiM( CleanJet_pt->At(1), CleanJet_eta->At(1), CleanJet_phi->At(1), 0. );
    Whad=jet1+jet2;

    if ( deltaPhi( Lepton_phi->At(0) , Whad.Phi() ) > deltaPhi( Lepton_phi->At(1) , Whad.Phi() ) ){
      return sqrt(2*Lepton_pt->At(0)*Pfmet*(1-cos(Dphilmet1)));
    }
    else{
      return sqrt(2*Lepton_pt->At(1)*Pfmet*(1-cos(Dphilmet2)));
    }

  }
  else if (njet==1 && nlep>=2){

    Whad.SetPtEtaPhiM( CleanJet_pt->At(0), CleanJet_eta->At(0), CleanJet_phi->At(0), 0. );

    if ( deltaPhi( Lepton_phi->At(0) , Whad.Phi() ) > deltaPhi( Lepton_phi->At(1) , Whad.Phi() ) ){
      return sqrt(2*Lepton_pt->At(0)*Pfmet*(1-cos(Dphilmet1)));
    }
    else{
      return sqrt(2*Lepton_pt->At(1)*Pfmet*(1-cos(Dphilmet2)));
    }
  }
  else{
    return -9999.;
  }
}

void
WHlepMt::bindTree_(multidraw::FunctionLibrary& _library)
{
  std::cout << "Loading WHlepMt" << std::endl;
  _library.bindBranch(nCleanJet, "nCleanJet");
  _library.bindBranch(CleanJet_pt, "CleanJet_pt");
  _library.bindBranch(CleanJet_eta, "CleanJet_eta");
  _library.bindBranch(CleanJet_phi, "CleanJet_phi");
  _library.bindBranch(nLepton, "nLepton");
  _library.bindBranch(Lepton_pt, "Lepton_pt");
  _library.bindBranch(Lepton_eta, "Lepton_eta");
  _library.bindBranch(Lepton_phi, "Lepton_phi");
  _library.bindBranch(MET_pt, "MET_pt");
  _library.bindBranch(dphilmet1, "dphilmet1");
  _library.bindBranch(dphilmet2, "dphilmet2");
}
