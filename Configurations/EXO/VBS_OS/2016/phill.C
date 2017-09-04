#include "TLorentzVector.h"
#include "TVector2.h"
#include <iostream>

using namespace std;


Float_t phill(double pt1, double phi1,double pt2, double phi2){
  TVector2 l1;
  l1.SetMagPhi(pt1,phi1);
  TVector2 l2;
  l2.SetMagPhi(pt2,phi2);


  return (l1+l2).Phi();
}

