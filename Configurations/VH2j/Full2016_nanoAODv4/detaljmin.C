#include <iostream>


float detaljmin(float lep1_eta,
		float lep2_eta,
		float jet1_eta,
		float jet2_eta)
{
  float themin = 999;

  float detal1j1 = fabs(lep1_eta - jet1_eta);
  float detal1j2 = fabs(lep1_eta - jet2_eta);
  float detal2j1 = fabs(lep2_eta - jet1_eta);
  float detal2j2 = fabs(lep2_eta - jet2_eta);

  if (detal1j1 < themin) themin = detal1j1;
  if (detal1j2 < themin) themin = detal1j2;
  if (detal2j1 < themin) themin = detal2j1;
  if (detal2j2 < themin) themin = detal2j2;

  return themin;
}
