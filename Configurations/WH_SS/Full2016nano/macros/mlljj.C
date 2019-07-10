#include <iostream>
#include <TMath.h>
#include <TLorentzVector.h>
using namespace std;

float mlljj(float lep1pt,float lep1eta, float lep1phi, float lep2pt,float lep2eta, float lep2phi, float jet1pt,float jet1eta, float jet1phi, float jet1mass, float jet2pt,float jet2eta, float jet2phi, float jet2mass){

 TLorentzVector L1,L2,L3;
 TLorentzVector J1,J2;
 float dphi1;
 float dphi2;
 float mass = 0.;
  L1.SetPtEtaPhiM(lep1pt, lep1eta, lep1phi, 0.);
  L2.SetPtEtaPhiM(lep2pt, lep2eta, lep2phi, 0.);
//if(jet2pt > 20.) {

//cout << "number of jets = " << n_jet << endl;

//if(n_jet >= 1) {
if(jet1pt > 30. && jet2pt > 20.) {
//cout << "jet2pt = " << jet2pt << " " << "jet2eta = " << jet2eta << "  " << "jet2phi = " << jet2phi << "  " << "jet2mass = " << jet2mass << endl;
J1.SetPtEtaPhiM(jet1pt, jet1eta, jet1phi, jet1mass);
J2.SetPtEtaPhiM(jet2pt, jet2eta, jet2phi, jet2mass);
dphi1 = fabs(L1.DeltaPhi(J1+J2));
dphi2 = fabs(L2.DeltaPhi(J1+J2));
if(dphi1 <= dphi2) L3 = L1;
else L3 = L2;
mass =  ((L3+L3+J1+J2).M());
}
if(jet1pt > 30. && jet2pt < 20.) {
J1.SetPtEtaPhiM(jet1pt, jet1eta, jet1phi, jet1mass);
dphi1 = fabs(L1.DeltaPhi(J1));
dphi2 = fabs(L2.DeltaPhi(J1));
if(dphi1 <= dphi2) L3 = L1;
else L3 = L2;
mass =  ((L3+L3+J1).M());
}


return mass;
}



