#include "TLorentzVector.h"

double mjj_LHE(double jetpt1, double jeteta1, double jetphi1, double jetpt2, double jeteta2, double jetphi2,  double jetpt3, double jeteta3, double jetphi3){
  TLorentzVector jet1;
  jet1.SetPtEtaPhiM(jetpt1,jeteta1,jetphi1,0);
  TLorentzVector jet2;
  jet2.SetPtEtaPhiM(jetpt2,jeteta2,jetphi2,0);
  TLorentzVector jet3;
  jet2.SetPtEtaPhiM(jetpt3,jeteta3,jetphi3,0);

  double mjj_LHE_=0;

  if( jetpt3>1 ){ 
    mjj_LHE_=(jet1+jet2+jet3).M();
  }

  if( jetpt3<0 ){ 
    mjj_LHE_=(jet1+jet2).M();
  }

  return mjj_LHE_;

}
