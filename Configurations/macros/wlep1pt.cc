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

class WHlepv1 : public multidraw::TTreeFunction {
public:
  WHlepv1();

  char const* getName() const override { return "WHlepv1"; }
  TTreeFunction* clone() const override { return new WHlepv1(); }
  //TTreeFunction* clone() const override;

  unsigned getNdata() override { return 1; }
  float deltaPhi(float, float);
  float deltaR(float, float, float, float);
  float deltaEta(float, float);
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
};

WHlepv1::WHlepv1() :
  TTreeFunction()
{}

// --- Helper
float
WHlepv1::deltaPhi(float phi1, float phi2)
{
  float PHI = std::abs(phi1-phi2);
if (PHI<=3.14159265)
  return PHI;
else
  return 2*3.14159265-PHI;
}

float
WHlepv1::deltaR(float phi1, float eta1, float phi2, float eta2) {
  //return sqrt((eta2-eta1)**2+deltaPhi(phi1,phi2)**2);
  return sqrt( pow((eta2-eta1),2) + pow(deltaPhi(phi1,phi2),2) );
}

float
WHlepv1::deltaEta(float eta1, float eta2) {
  return std::abs(eta1 - eta2);
}
// Helper ---

double
WHlepv1::evaluate(unsigned)
{

  float mindr = 9999.;
  int leptonIdx1=-1;
  float maxdphi = -9999.;
  float dphi;

  TLorentzVector Whad(0.,0.,0.,0.);
  TLorentzVector jets(0.,0.,0.,0.);

  unsigned njet{*nCleanJet->Get()};
  unsigned nlep{*nLepton->Get()};

  if (njet==0 or nlep==0)
    return -9999.;

  for (unsigned i{0}; i != njet; i++){
    jets.SetPtEtaPhiM(0.,0.,0.,0.);
    jets.SetPtEtaPhiM( CleanJet_pt->At(i) , CleanJet_eta->At(i) , CleanJet_phi->At(i) , 0. );
    Whad+=jets;
    if (i==1)
      break;
  }

  for (unsigned i=0; i != nlep; i++){
    dphi = deltaPhi( Lepton_phi->At(i) , Whad.Phi());
    if (maxdphi < dphi){
      maxdphi=dphi;
      leptonIdx1=i;
    }
  }
  return Lepton_pt->At(leptonIdx1);
}

void
WHlepv1::bindTree_(multidraw::FunctionLibrary& _library)
{
  std::cout << "Loading WHlepv1" << std::endl;
  _library.bindBranch(nCleanJet, "nCleanJet");
  _library.bindBranch(CleanJet_pt, "CleanJet_pt");
  _library.bindBranch(CleanJet_eta, "CleanJet_eta");
  _library.bindBranch(CleanJet_phi, "CleanJet_phi");
  _library.bindBranch(nLepton, "nLepton");
  _library.bindBranch(Lepton_pt, "Lepton_pt");
  _library.bindBranch(Lepton_eta, "Lepton_eta");
  _library.bindBranch(Lepton_phi, "Lepton_phi");

}
