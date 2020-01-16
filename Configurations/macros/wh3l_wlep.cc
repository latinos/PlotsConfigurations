/*
  (v1): Building W pt proxy assuming two neutrino is collinear wrt the two leptons. 
*/

#include "LatinoAnalysis/MultiDraw/interface/TTreeFunction.h"
#include "LatinoAnalysis/MultiDraw/interface/FunctionLibrary.h"

#include "TSystem.h"

#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>
#include <iterator>

#include "TLorentzVector.h"
#include "TMath.h"

class WH3l_wlep : public multidraw::TTreeFunction {
public:
  WH3l_wlep();

  char const* getName() const override { return "WH3l_wlep"; }
  TTreeFunction* clone() const override { return new WH3l_wlep(); }
  //TTreeFunction* clone() const override;
  unsigned getNdata() override { return 1; }

  float deltaPhi(float, float);
  float deltaR(float, float, float, float);
  float deltaEta(float, float);
  double evaluate(unsigned) override;
  float recoverNeutrinoPz(TLorentzVector, TLorentzVector);
  std::vector<std::pair<int,float>> IndexByMindR(std::vector<std::pair<int,float>> vector);

  struct minR {
    bool operator() (std::pair<int,float> i, std::pair<int,float> j) { return ( (i.second) < (j.second) ); } // sort in Ascending order
  };

protected:
  void bindTree_(multidraw::FunctionLibrary&) override;

  UIntValueReader* nLepton;
  FloatArrayReader* Lepton_pt;
  FloatArrayReader* Lepton_eta;
  FloatArrayReader* Lepton_phi;
  FloatValueReader* MET_pt;
  FloatValueReader* MET_phi;
  FloatArrayReader* WH3l_drOSll;
  
};

WH3l_wlep::WH3l_wlep() :
  TTreeFunction()
{}

// --- Helper
float WH3l_wlep::deltaPhi(float phi1, float phi2)
{
  float PHI = std::abs(phi1-phi2);
if (PHI<=3.14159265)
  return PHI;
else
  return 2*3.14159265-PHI;
}

float WH3l_wlep::deltaR(float phi1, float eta1, float phi2, float eta2) {
  //return sqrt((eta2-eta1)**2+deltaPhi(phi1,phi2)**2);
  return sqrt( pow((eta2-eta1),2) + pow(deltaPhi(phi1,phi2),2) );
}

float WH3l_wlep::deltaEta(float eta1, float eta2) {
  return std::abs(eta1 - eta2);
}

std::vector<std::pair<int,float>> WH3l_wlep::IndexByMindR(std::vector<std::pair<int,float>> vector){
  minR comparator;
  
  std::sort (vector.begin() , vector.end() , comparator);
  return vector;
}

float WH3l_wlep::recoverNeutrinoPz(TLorentzVector lep, TLorentzVector met){
  float pz = 0.; float a; float A; float B;
  float C; float D;
  a = pow(80.4,2) - pow(lep.M(),2) + 2.*lep.Px()*met.Px() + 2.*lep.Py()*met.Py();
  A = 4.*( pow(lep.E(),2) - pow(lep.Pz(),2) );
  B = -4.*a*lep.Pz();
  C = 4*(pow(lep.E(),2)) * (pow(met.Px(),2)  + pow(met.Py(),2)) - pow(a,2);
  D = pow(B,2) - 4*A*C;
  // If there are real solutions, use the one with lowest pz 
  if (D >= 0.){
    float s1 = (-B+sqrt(D))/(2*A);
    float s2 = (-B-sqrt(D))/(2*A);
    pz = ( ( abs(s1) < abs(s2) ) ? s1 : s2 );
  }// Otherwise, use real part
  else{
    pz = -B/(2*A);
  }
  return pz;
}
// Helper ---

double
WH3l_wlep::evaluate(unsigned)
{

  TLorentzVector Whad(0.,0.,0.,0.);
  TLorentzVector lepton1(0.,0.,0.,0.);
  TLorentzVector lepton2(0.,0.,0.,0.);
  TLorentzVector lepton3(0.,0.,0.,0.);
 
  int leptonIdx1 = -1;
  int leptonIdx2 = -1;
  int leptonIdx3 = -1;

  std::vector<std::pair<int,float>> lepIdx_dR;

  unsigned int nlep{*nLepton->Get()};
  float metpt{*MET_pt->Get()};
  float metphi{*MET_phi->Get()};

  if (nlep<3)
    return -9999.;

  for (unsigned int ilep=0 ; ilep< 3 ; ilep++){
    if ( WH3l_drOSll->At(ilep)>0 )
      lepIdx_dR.push_back(std::make_pair(ilep,WH3l_drOSll->At(ilep)));
  }

  if (lepIdx_dR.size()==0)
    return -999.;

  std::vector<std::pair<int,float>> lepIdx_dR_sorted = IndexByMindR(lepIdx_dR);
  //leptonIdx1 is the outer lepton
  if (lepIdx_dR_sorted.front().first==0){
    leptonIdx1=2; leptonIdx2=0; leptonIdx3=1;
  }
  else if (lepIdx_dR_sorted.front().first==1){
    leptonIdx1=1; leptonIdx2=0; leptonIdx3=2;
  }
  else if (lepIdx_dR_sorted.front().first==2){
    leptonIdx1=0; leptonIdx2=1; leptonIdx3=2;
  }

  lepton1.SetPtEtaPhiM( Lepton_pt->At(leptonIdx1) , Lepton_eta->At(leptonIdx1) , Lepton_phi->At(leptonIdx1) , 0. );
  lepton2.SetPtEtaPhiM( Lepton_pt->At(leptonIdx2) , Lepton_eta->At(leptonIdx2) , Lepton_phi->At(leptonIdx2) , 0. );
  lepton3.SetPtEtaPhiM( Lepton_pt->At(leptonIdx3) , Lepton_eta->At(leptonIdx3) , Lepton_phi->At(leptonIdx3) , 0. );
  TLorentzVector dilepton = lepton2 + lepton3;
  TLorentzVector MET(0.,0.,0.,0.); TLorentzVector Cormet(0.,0.,0.,0.); 
  MET.SetPtEtaPhiM( metpt , 0., metphi, 0. );
  TLorentzVector met1 = MET - dilepton; // collinear

  float metpz = recoverNeutrinoPz(lepton1,met1);
  Cormet.SetPxPyPzE( met1.Pt()*TMath::Cos(met1.Phi()) , met1.Pt()*TMath::Sin(met1.Phi()) , metpz , met1.E() );
  TLorentzVector RecoverW=lepton1+Cormet;
  
  return RecoverW.Pt();
}

void
WH3l_wlep::bindTree_(multidraw::FunctionLibrary& _library)
{
  std::cout << "Loading WH3l_wlep" << std::endl;
  _library.bindBranch(nLepton, "nLepton");
  _library.bindBranch(Lepton_pt, "Lepton_pt");
  _library.bindBranch(Lepton_eta, "Lepton_eta");
  _library.bindBranch(Lepton_phi, "Lepton_phi");
  _library.bindBranch(Lepton_phi, "Lepton_phi");
  _library.bindBranch(MET_pt, "MET_pt");
  _library.bindBranch(MET_phi, "MET_phi");
  _library.bindBranch(WH3l_drOSll, "WH3l_drOSll");

}
