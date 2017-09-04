#include "TLorentzVector.h"
#include "TVector2.h"
#include <iostream>

using namespace std;


Float_t R(double ptll, double phill,
           double met_pt1, double met_phi1,
	  double jet_pt1, double jet_phi1, double jet_pt2, double jet_phi2){
  TVector2 ll;
  ll.SetMagPhi(ptll,phill);

  TVector2 met;
  met.SetMagPhi(met_pt1,met_phi1);
  
  TVector2 j1;
  j1.SetMagPhi(jet_pt1,jet_phi1);
  TVector2 j2;
  j2.SetMagPhi(jet_pt2,jet_phi2);

  TVector2 WW(0.,0.);
  WW=ll+met;
  TVector2 sum(0.,0.);
  sum=ll+met+j1+j2;


  return sum.Mod()/(jet_pt1+jet_pt2+WW.Mod());
}

