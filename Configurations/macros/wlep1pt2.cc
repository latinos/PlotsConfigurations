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

class WHlepv2 : public multidraw::TTreeFunction {
public:
  WHlepv2();

  char const* getName() const override { return "WHlepv2"; }
  TTreeFunction* clone() const override { return new WHlepv2(); }
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

WHlepv2::WHlepv2() :
  TTreeFunction()
{}

// --- Helper
float
WHlepv2::deltaPhi(float phi1, float phi2)
{
  float PHI = std::abs(phi1-phi2);
if (PHI<=3.14159265)
  return PHI;
else
  return 2*3.14159265-PHI;
}

float
WHlepv2::deltaR(float phi1, float eta1, float phi2, float eta2) {
  //return sqrt((eta2-eta1)**2+deltaPhi(phi1,phi2)**2);
  return sqrt( pow((eta2-eta1),2) + pow(deltaPhi(phi1,phi2),2) );
}

float
WHlepv2::deltaEta(float eta1, float eta2) {
  return std::abs(eta1 - eta2);
}
// Helper ---

double
WHlepv2::evaluate(unsigned)
{

  float mindr = 9999.;
  float maxdphi = -9999.;
  float dr;
  float dphi;
  int jetIdx1=-1;
  int jetIdx2=-1;
  int leptonIdx1=-1;
  int jet30=0;

  TLorentzVector Whad(0.,0.,0.,0.);
  TLorentzVector jets(0.,0.,0.,0.);

  unsigned njet{*nCleanJet->Get()};
  unsigned nlep{*nLepton->Get()};

  if (njet==0 or nlep==0)
    return -9999.;
  
  //build dijet
  for (unsigned i{0}; i != njet; i++){
    jet30+=1;
    for (unsigned j{0}; j != njet; j++){
      if (i==j) continue;
      dr = deltaR ( CleanJet_phi->At(i) , CleanJet_eta->At(i) , CleanJet_phi->At(j) , CleanJet_eta->At(j) );
      if (mindr > dr){
        mindr = dr;
        jetIdx1=i; jetIdx2=j;
      }
    }
  }
  
  // ensure at least one jet
  if (jetIdx1>0 && jetIdx2>0){
    jet1.SetPtEtaPhiM( CleanJet_pt->At(jetIdx1) , CleanJet_eta->At(jetIdx1) , CleanJet_phi->At(jetIdx1) , 0. );
    jet2.SetPtEtaPhiM( CleanJet_pt->At(jetIdx2) , CleanJet_eta->At(jetIdx2) , CleanJet_phi->At(jetIdx2) , 0. );
    Whad=jet1+jet2;
  }
  else if (jetIdx1>0 && jetIdx2<0){
    Whad.SetPtEtaPhiM( CleanJet_pt->At(jetIdx1) , CleanJet_eta->At(jetIdx1) , CleanJet_phi->At(jetIdx1) , 0. );
  }
  else if (jetIdx1<0 && jetIdx2>0){
    Whad.SetPtEtaPhiM( CleanJet_pt->At(jetIdx2) , CleanJet_eta->At(jetIdx2) , CleanJet_phi->At(jetIdx2) , 0. );
  }
  else{
    return -9999.;
  }

  for (Int_t i=0; i<=nlep; i++){
    dphi = deltaPhi( Lepton_phi[i] , Whad.Phi());
    if (maxdphi < dphi){
      maxdphi=dphi;
      leptonIdx1=i;
    }
  }
  if (leptonIdx1<0){
    return -9999.;
  }
  else{
    return Lepton_pt[leptonIdx1];
  }
}

void
WHlepv2::bindTree_(multidraw::FunctionLibrary& _library)
{
  std::cout << "Loading WHlepv2" << std::endl;
  _library.bindBranch(nCleanJet, "nCleanJet");
  _library.bindBranch(CleanJet_pt, "CleanJet_pt");
  _library.bindBranch(CleanJet_eta, "CleanJet_eta");
  _library.bindBranch(CleanJet_phi, "CleanJet_phi");
  _library.bindBranch(nLepton, "nLepton");
  _library.bindBranch(Lepton_pt, "Lepton_pt");
  _library.bindBranch(Lepton_eta, "Lepton_eta");
  _library.bindBranch(Lepton_phi, "Lepton_phi");
  
}
