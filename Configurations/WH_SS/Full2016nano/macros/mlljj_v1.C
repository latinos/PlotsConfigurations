#include <iostream>
#include <TMath.h>
#include <TLorentzVector.h>
#include <vector>
using namespace std;

float mlljj_v1(vector<float>&leppt,vector<float>&lepeta,vector<float>&lepphi, vector<float>&jetpt,vector<float>&jeteta,vector<float>&jetphi,vector<float>&jetmass,int n_jet){

 TLorentzVector L1,L2,L3;
 TLorentzVector J1,J2;
 float dphi1;
 float dphi2;
 float mass = 0.;
  L1.SetPtEtaPhiM(leppt.at(0), lepeta.at(0), lepphi.at(0), 0.);
  L2.SetPtEtaPhiM(leppt.at(1), lepeta.at(1), lepphi.at(1), 0.);
//if(jet2pt > 20.) {

//cout << "number of jets = " << n_jet << endl;

if(n_jet >= 1 && jetpt.at(1) > 20.) {
//if(jetpt[0] > 30. &&  > 20.) {
//cout << "jet2pt = " << jet2pt << " " << "jet2eta = " << jet2eta << "  " << "jet2phi = " << jet2phi << "  " << "jet2mass = " << jet2mass << endl;
J1.SetPtEtaPhiM(jetpt.at(0), jeteta.at(0), jetphi.at(0), jetmass.at(0));
J2.SetPtEtaPhiM(jetpt.at(1), jeteta.at(1), jetphi.at(1), jetmass.at(1));
dphi1 = fabs(L1.DeltaPhi(J1+J2));
dphi2 = fabs(L2.DeltaPhi(J1+J2));
if(dphi1 <= dphi2) L3 = L1;
else L3 = L2;
mass =  ((L3+L3+J1+J2).M());
}
if(n_jet == 1 && jetpt.at(1) < 20.) {
J1.SetPtEtaPhiM(jetpt.at(0), jeteta.at(0), jetphi.at(0), jetmass.at(0));
dphi1 = fabs(L1.DeltaPhi(J1));
dphi2 = fabs(L2.DeltaPhi(J1));
if(dphi1 <= dphi2) L3 = L1;
else L3 = L2;
mass =  ((L3+L3+J1).M());
}


return mass;
}



