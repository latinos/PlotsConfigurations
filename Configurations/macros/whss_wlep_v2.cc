/*
  (v2): Building W pt proxy assuming second neutrino is collinear wrt to second lepton.
  identifying the first neutrino by subtraction with the second neutrino, recover the pz of first neutrino
  by using invariant mass of W mass, and compute the corrected first neutrino's kinematics.
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

class WHSS_wpt_v2 : public multidraw::TTreeFunction {
public:
  WHSS_wpt_v2();

  char const* getName() const override { return "WHSS_wpt_v2"; }
  TTreeFunction* clone() const override { return new WHSS_wpt_v2(); }
  //TTreeFunction* clone() const override;
  unsigned getNdata() override { return 1; }

  float deltaPhi(float, float);
  float deltaR(float, float, float, float);
  float deltaEta(float, float);
  float recoverNeutrinoPz(TLorentzVector, TLorentzVector);
  double evaluate(unsigned) override;
  std::vector<std::pair<int,float>> IndexByMindPhi(std::vector<std::pair<int,float>> vector);
  std::vector<std::pair<std::pair<int,int>, float>> IndexByMindR(std::vector<std::pair<std::pair<int,int>, float>> vector);
  

  struct minphi {
    bool operator() (std::pair<int,float> i, std::pair<int,float> j) { return ( (i.second) > (j.second) ); } // sort in Descending order
  };

  struct minR {
    bool operator() (std::pair<std::pair<int,int>, float> i, std::pair<std::pair<int,int>, float> j) { return ( (i.second) < (j.second) ); } // sort in Ascending order
  };


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
  FloatValueReader* PuppiMET_pt;
  FloatValueReader* PuppiMET_phi;
  
};

WHSS_wpt_v2::WHSS_wpt_v2() :
  TTreeFunction()
{}

// --- Helper
float WHSS_wpt_v2::deltaPhi(float phi1, float phi2)
{
  float PHI = std::abs(phi1-phi2);
if (PHI<=3.14159265)
  return PHI;
else
  return 2*3.14159265-PHI;
}

float WHSS_wpt_v2::deltaR(float phi1, float eta1, float phi2, float eta2) {
  //return sqrt((eta2-eta1)**2+deltaPhi(phi1,phi2)**2);
  return sqrt( pow((eta2-eta1),2) + pow(deltaPhi(phi1,phi2),2) );
}

float WHSS_wpt_v2::deltaEta(float eta1, float eta2) {
  return std::abs(eta1 - eta2);
}

float WHSS_wpt_v2::recoverNeutrinoPz(TLorentzVector lep, TLorentzVector met){
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

std::vector<std::pair<int,float>> WHSS_wpt_v2::IndexByMindPhi(std::vector<std::pair<int,float>> vector) {
  minphi comparator;
  std::sort (vector.begin() , vector.end() , comparator);
  return vector;
};

std::vector<std::pair<std::pair<int,int>, float>> WHSS_wpt_v2::IndexByMindR(std::vector<std::pair<std::pair<int,int>, float>> vector){
  minR comparator;
  
  std::sort (vector.begin() , vector.end() , comparator);
  return vector;
}

// Helper ---

double
WHSS_wpt_v2::evaluate(unsigned)
{

  TLorentzVector Whad(0.,0.,0.,0.);
  TLorentzVector lepton1(0.,0.,0.,0.);
  TLorentzVector lepton2(0.,0.,0.,0.);
  TLorentzVector MET(0.,0.,0.,0.);

  int leptonIdx1 = -1;
  int leptonIdx2 = -1;
  int jetIdx1 = -1;
  int jetIdx2 = -1;

  std::vector<std::pair<int,float>> lepIdx_dphi; lepIdx_dphi.clear();
  std::vector<std::pair<std::pair<int,int>, float>> dijetIdx_dr; dijetIdx_dr.clear();
    
  unsigned int njet{*nCleanJet->Get()};
  unsigned int nlep{*nLepton->Get()};
  float metpt{*PuppiMET_pt->Get()};
  float metphi{*PuppiMET_phi->Get()};

  if (njet==0)
    return -9999.;
  if (nlep<2)
    return -9999.;

  // build dijet system
  if (njet==1){
    Whad.SetPtEtaPhiM( CleanJet_pt->At(0) , CleanJet_eta->At(0) , CleanJet_phi->At(0) , 0. );
  }
  else{
    for (unsigned int ijet=0 ; ijet<njet ; ijet++){
      for (unsigned int jjet=0 ; jjet<njet ; jjet++){
	if (ijet==jjet) continue;
	float dr = deltaR ( CleanJet_phi->At(ijet) , CleanJet_eta->At(ijet) , CleanJet_phi->At(jjet) , CleanJet_eta->At(jjet) );
	dijetIdx_dr.push_back(std::make_pair(std::make_pair(ijet,jjet),dr));
      } // inner jet loop
    } // outer jet loop
    
    std::vector<std::pair<std::pair<int,int>, float>> dijet_sorted = IndexByMindR(dijetIdx_dr);
    jetIdx1 = dijet_sorted.front().first.first;
    jetIdx2 = dijet_sorted.front().first.second;
    //Float_t drr = dijetIdx_R_sorted.front().second;
    TLorentzVector jet1; jet1.SetPtEtaPhiM( CleanJet_pt->At(jetIdx1) , CleanJet_eta->At(jetIdx1) , CleanJet_phi->At(jetIdx1) , 0. );
    TLorentzVector jet2; jet2.SetPtEtaPhiM( CleanJet_pt->At(jetIdx2) , CleanJet_eta->At(jetIdx2) , CleanJet_phi->At(jetIdx2) , 0. );
    Whad = jet1+jet2;
  } // njet==1

  //ID the leptons wrt to the dijet
  for (unsigned int ilep=0 ; ilep<nlep; ilep++){
    float dphi = deltaPhi( Lepton_phi->At(ilep) , Whad.Phi());
    lepIdx_dphi.push_back(std::make_pair(ilep,dphi));
  }

  std::vector<std::pair<int,float>> lepIdx_phi_sorted = IndexByMindPhi(lepIdx_dphi);
  leptonIdx1 = lepIdx_phi_sorted.front().first; // furtherest lepton from dijet
  leptonIdx2 = lepIdx_phi_sorted.back().first; // closest lepton to dijet
  lepton1.SetPtEtaPhiM( Lepton_pt->At(leptonIdx1) , Lepton_eta->At(leptonIdx1), Lepton_phi->At(leptonIdx1), 0. );
  lepton2.SetPtEtaPhiM( Lepton_pt->At(leptonIdx2) , Lepton_eta->At(leptonIdx2), Lepton_phi->At(leptonIdx2), 0. );
  
  //Assuming second neutrino collinear with lepton2
  MET.SetPtEtaPhiM( metpt , 0. , metphi , 0. );
  TLorentzVector met1 = MET - lepton2;
  //gether kinematics of first neutrino
  float met1px = met1.Pt()*TMath::Cos(met1.Phi());
  float met1py = met1.Pt()*TMath::Sin(met1.Phi());
  float met1pz = recoverNeutrinoPz(lepton1,met1);
  TLorentzVector cormet(0. , 0. , 0. , 0.);
  cormet.SetPxPyPzE( met1px , met1py , met1pz , met1.E() );
  TLorentzVector RecoverW = lepton1+cormet;

  return RecoverW.Pt();
}

void
WHSS_wpt_v2::bindTree_(multidraw::FunctionLibrary& _library)
{
  std::cout << "Loading WHSS_wpt_v2" << std::endl;
  _library.bindBranch(nCleanJet, "nCleanJet");
  _library.bindBranch(CleanJet_pt, "CleanJet_pt");
  _library.bindBranch(CleanJet_eta, "CleanJet_eta");
  _library.bindBranch(CleanJet_phi, "CleanJet_phi");
  _library.bindBranch(nLepton, "nLepton");
  _library.bindBranch(Lepton_pt, "Lepton_pt");
  _library.bindBranch(Lepton_eta, "Lepton_eta");
  _library.bindBranch(Lepton_phi, "Lepton_phi");
  _library.bindBranch(Lepton_phi, "Lepton_phi");
  _library.bindBranch(PuppiMET_pt, "PuppiMET_pt");
  _library.bindBranch(PuppiMET_phi, "PuppiMET_phi");

}
