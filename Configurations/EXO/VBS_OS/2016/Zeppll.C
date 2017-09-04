#include "TLorentzVector.h"
#include "TVector2.h"
#include <iostream>

using namespace std;


Float_t Zeppll(double pt1, double phi1, double eta1,
	       double pt2, double phi2, double eta2,
	       double jet_eta1, double jet_eta2, double detajj){
  TLorentzVector l1;
  l1.SetPtEtaPhiM(pt1,eta1,phi1,0);
  TLorentzVector l2;
  l2.SetPtEtaPhiM(pt2,eta2,phi2,0);

  TLorentzVector ll;
  ll=l1+l2;


  return abs(ll.Eta()-0.5*(jet_eta1+jet_eta2)/detajj);
}

