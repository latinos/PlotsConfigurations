#include "TMath.h"
#include <TLorentzVector.h>

#include <iostream>

using namespace std;

// Delta phi (for gen-jets)
float delta_phi(float phi1, 
		float phi2,
		float eta1,
		float eta2
		){

  float out;

  // Adjust dphijj definition according to
  // https://arxiv.org/pdf/2002.09888.pdf (eq. 47)
  if (eta1 > eta2)       out = phi1 - phi2;
  else if (eta1 <= eta2) out = phi2 - phi1;

  // To have delta_phi in (-pi, pi) interval
  // https://root.cern.ch/doc/master/TVector2_8cxx_source.html#l00103
  if (out >  TMath::Pi()) out = out - 2*TMath::Pi();
  if (out < -TMath::Pi()) out = out + 2*TMath::Pi();

  // cout<<"Leading  jet phi = "<<phi1;
  // cout<<", Trailing jet phi = "<<phi2<<endl;
  // cout<<"==============================="<<endl;

  return out;
}


