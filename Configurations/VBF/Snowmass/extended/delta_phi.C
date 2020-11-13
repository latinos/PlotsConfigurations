#include "TMath.h"

float delta_phi(float phi1, 
		float phi2
		){

  float output = fabs(phi1 - phi2);
  if (output > TMath::Pi())
    output = 2*TMath::Pi() - output;
  return output;

}
