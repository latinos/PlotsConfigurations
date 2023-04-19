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
  h_syst -> Draw();
  
  TFile* f_freeze = new TFile("Combination/FitResults_WH_FullRun2_v9_freeze_rA_freeze_all.root");
  TTree* t_freeze = (TTree*) f_freeze->Get("limit");
  t_freeze -> Draw("deltaNLL:r_A>>h_freeze","","goff");
  h_freeze -> SetMarkerStyle(8);
  h_freeze -> SetMarkerColor(kRed+1);
  h_freeze -> Draw("same");

  h_syst   -> GetXaxis()->SetTitle("Asymmetry");
  h_syst   -> GetYaxis()->SetTitle("NLL");
  h_syst   -> SetTitle("Full Run2 likelihood scan");
  h_syst   -> Draw();
  h_freeze -> Draw("same");
  h_syst   -> GetXaxis()->SetRangeUser(-1.5, 1.0);
  h_syst   -> GetYaxis()->SetRangeUser(0.0,  1.5);
  h_syst   -> Draw();
  h_freeze -> Draw("same");

  TLegend* leg = new TLegend(0.15, 0.15, 0.4, 0.4);
  leg -> AddEntry(h_syst,   "All systematics",      "p");
  leg -> AddEntry(h_freeze, "Freezing systematics", "p");
  leg -> SetLineColor(0);
  leg -> Draw("same");

  c1->Print("plots_NLL/FullRun2_v9_rA.png");
  c1->Print("plots_NLL/FullRun2_v9_rA.pdf");
  

}
