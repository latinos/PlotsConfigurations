/*
Macro to compare the negative log likelihood in two cases:
- all systematic are floating in the fit
- constrained nuisances are frozen in the fit
*/

#include "TPad.h"
#include "TVirtualPad.h"
#include <iostream>

void macroNLL(){

  gStyle -> SetOptStat(0);
  
  TFile* f_syst   = new TFile("Combination/FitResults_WH_FullRun2_v9_rA_freeze_r_higgs.root");
  TTree* t_syst   = (TTree*) f_syst->Get("limit");
  t_syst -> Draw("deltaNLL:r_A>>h_syst","","goff");
  h_syst -> SetMarkerStyle(8);
  h_syst -> SetMarkerColor(kBlack);
  h_syst   -> Draw();

  TFile* f_freeze = new TFile("Combination/FitResults_WH_FullRun2_v9_freeze_rA_freeze_all.root");
  TTree* t_freeze = (TTree*) f_freeze->Get("limit");
  t_freeze -> Draw("deltaNLL:r_A>>h_freeze","","goff");
  h_freeze -> SetMarkerStyle(8);
  h_freeze -> SetMarkerColor(kRed+1);
  h_freeze -> Draw("same");

}
