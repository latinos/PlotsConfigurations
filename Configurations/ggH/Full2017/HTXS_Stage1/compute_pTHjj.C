#include "TCanvas.h"
#include "TTree.h"
#include "TH1D.h"
#include "TFile.h"
#include <iostream>
#include <fstream>
#include <stdio.h>
#include <unistd.h>
#include "TLorentzVector.h"

double compute_pTHjj(double l1pt,double l1eta,double l1phi,double l1id, double l2pt,double l2eta,double l2phi,double l2id, double j1pt,double j1eta,double j1phi,double j1m, double j2pt,double j2eta,double j2phi,double j2m, double metpt, double metphi){

  TLorentzVector lep1,lep2,jet1,jet2,MET,Hjj;
  double l1m=0;
  double l2m=0;
  if(fabs(l1id)==11)l1m=0.000510;
  else if(fabs(l1id)==13)l1m=0.106;
  if(fabs(l2id)==11)l2m=0.000510;
  else if(fabs(l2id)==13)l2m=0.106;
  
  lep1.SetPtEtaPhiM(l1pt,l1eta,l1phi,l1m);
  lep2.SetPtEtaPhiM(l2pt,l2eta,l2phi,l2m);
  jet1.SetPtEtaPhiM(j1pt,j1eta,j1phi,j1m);
  jet2.SetPtEtaPhiM(j2pt,j2eta,j2phi,j2m);
  MET.SetPtEtaPhiM(metpt,0,metphi,0);
  Hjj=lep1+lep2+jet1+jet2+MET;
  
  return Hjj.Pt();

}
