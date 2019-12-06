/*
  Temporary on-the-fly wh3l_wlep for nanoLatino trees nAODv5_2016/2017/2018v5 or earlier.
*/

#include "LatinoAnalysis/MultiDraw/interface/TTreeFunction.h"
#include "LatinoAnalysis/MultiDraw/interface/FunctionLibrary.h"

#include "TSystem.h"

#include <iostream>
#include <vector>

#include "TLorentzVector.h"
#include "TMath.h"

class WlepH3l : public multidraw::TTreeFunction {
public:
  WlepH3l();

  char const* getName() const override { return "WlepH3l"; }
  TTreeFunction* clone() const override { return new WlepH3l(); }
  //TTreeFunction* clone() const override;

  unsigned getNdata() override { return 1; }
  float deltaPhi(float, float);
  float deltaR(float, float, float, float);
  float deltaEta(float, float);
  double evaluate(unsigned) override;

protected:
  void bindTree_(multidraw::FunctionLibrary&) override;

  UIntValueReader* nLepton;
  FloatArrayReader* Lepton_pt;
  FloatArrayReader* Lepton_eta;
  FloatArrayReader* Lepton_phi;
  IntArrayReader* Lepton_pdgId;

};

WlepH3l::WlepH3l() :
  TTreeFunction()
{}

// --- Helper
float
WlepH3l::deltaPhi(float phi1, float phi2)
{
  float PHI = std::abs(phi1-phi2);
if (PHI<=3.14159265)
  return PHI;
else
  return 2*3.14159265-PHI;
}

float
WlepH3l::deltaR(float phi1, float eta1, float phi2, float eta2) {
  //return sqrt((eta2-eta1)**2+deltaPhi(phi1,phi2)**2);
  return sqrt( pow((eta2-eta1),2) + pow(deltaPhi(phi1,phi2),2) );
}

float
WlepH3l::deltaEta(float eta1, float eta2) {
  return std::abs(eta1 - eta2);
}
// Helper ---

double
WlepH3l::evaluate(unsigned)
{

  TLorentzVector lepton1(0.,0.,0.,0.);
  TLorentzVector lepton2(0.,0.,0.,0.);
  TLorentzVector dilepton(0.,0.,0.,0.);
  unsigned nlep{*nLepton->Get()};
  float mindr = 9999.;
  float maxdphi = -9999.;
  float dr;
  float dphi;
  unsigned int leptonIdx1=-1;
  unsigned int leptonIdx2=-1;
  unsigned int leptonIdx3=-1;

  if (nlep>=3){
    for (unsigned i=0; i != nlep; i++){
      for (unsigned j=0; j != nlep; j++){
	if (i==j) continue;
	//take same flavor, opposite sign
	if ( abs(Lepton_pdgId->At(i)) == abs(Lepton_pdgId->At(j)) ){
	  //muon, same sign
	  if ( abs(Lepton_pdgId->At(i) + Lepton_pdgId->At(j)) == 26 ) continue;
	  //electron, same sign
	  if ( abs(Lepton_pdgId->At(i) + Lepton_pdgId->At(j)) == 22 ) continue;
	  //find the minimum dr between same flavor lepton pair
	  dr = deltaR( Lepton_phi->At(i) , Lepton_eta->At(i) , Lepton_phi->At(j) , Lepton_eta->At(j) );
	  if (mindr>dr){
	    mindr=dr;
	    leptonIdx1=i;
	    leptonIdx2=j;
	  }
	}
      }
    }
    //Identify the third lepton
    if ( leptonIdx1!=-1 && leptonIdx2!=-1 ){
      lepton1.SetPtEtaPhiM( Lepton_pt->At(leptonIdx1) , Lepton_eta->At(leptonIdx1) , Lepton_phi->At(leptonIdx1) , 0. );
      lepton2.SetPtEtaPhiM( Lepton_pt->At(leptonIdx2) , Lepton_eta->At(leptonIdx2) , Lepton_phi->At(leptonIdx2) , 0. );
      dilepton=lepton1+lepton2;
      for (unsigned i=0; i != nlep; i++){
        if (i==leptonIdx1) continue;
        if (i==leptonIdx2) continue;
	//find the maximum dphi between dilepton system and third lepton
        dphi = deltaPhi( Lepton_phi->At(i) , dilepton.Phi() );
        if (maxdphi<dphi){
          maxdphi = dphi;
          leptonIdx3 = i;
        }
      }
      return Lepton_pt->At(leptonIdx3);
    }
    else{
      return -9999.;
    }
  }
  else{
    return -9999.;
  }
}

void
WlepH3l::bindTree_(multidraw::FunctionLibrary& _library)
{
  std::cout << "Loading Wlep for WH3l" << std::endl;
  _library.bindBranch(nLepton, "nLepton");
  _library.bindBranch(Lepton_pt, "Lepton_pt");
  _library.bindBranch(Lepton_eta, "Lepton_eta");
  _library.bindBranch(Lepton_phi, "Lepton_phi");
  _library.bindBranch(Lepton_pdgId, "Lepton_pdgId");
  
}
