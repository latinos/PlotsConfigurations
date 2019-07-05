#include "TLorentzVector.h"

int deltaRMatch(double leptoneta, double leptonphi, double jeteta, double jetphi){
  if (leptoneta < -10)
    return 0;
  if (jeteta < -10)
    return 0;
  TLorentzVector lepton;
  lepton.SetPtEtaPhiM(100.,leptoneta,leptonphi,0);
  TLorentzVector jet;
  jet.SetPtEtaPhiM(100.,jeteta,jetphi,0);

  return lepton.DeltaR(jet) < 0.1;
}
