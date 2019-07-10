#include "TLorentzVector.h"

double mjjGen(double jetpt1, double jeteta1, double jetphi1, double jetpt2, double jeteta2, double jetphi2){
  if (jetpt1 < 0)
    return 0.;
  if (jetpt2 < 0)
    return 0.;
  TLorentzVector jet1;
  jet1.SetPtEtaPhiM(jetpt1,jeteta1,jetphi1,0);
  TLorentzVector jet2;
  jet2.SetPtEtaPhiM(jetpt2,jeteta2,jetphi2,0);

  return (jet1+jet2).M();
}
