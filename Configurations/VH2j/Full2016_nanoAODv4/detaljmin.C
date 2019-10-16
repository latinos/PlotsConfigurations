#include <iostream>


float detaljmin(float lep1_eta,
		float lep2_eta,
		float jet1_eta,
		float jet2_eta)
{
  float themin = 999;
  float deta   = 0;

  float detal1j1 = lep1_eta - jet1_eta;
  float detal1j2 = lep1_eta - jet2_eta;
  float detal2j1 = lep2_eta - jet1_eta;
  float detal2j2 = lep2_eta - jet2_eta;

  if (fabs(detal1j1) < themin) { themin = fabs(detal1j1); deta = detal1j1; }
  if (fabs(detal1j2) < themin) { themin = fabs(detal1j2); deta = detal1j2; }
  if (fabs(detal2j1) < themin) { themin = fabs(detal2j1); deta = detal2j1; }
  if (fabs(detal2j2) < themin) { themin = fabs(detal2j2); deta = detal2j2; }

  return deta;
}
