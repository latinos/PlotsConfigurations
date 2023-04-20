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
  
  TFile* f_freeze = new TFile("Combination/FitResults_WH_FullRun2_v9_original_signal_scale_rA_freeze_all.root");
  TTree* t_freeze = (TTree*) f_freeze->Get("limit");
  TH2F*  h_freeze = new TH2F("h_freeze", "h_freeze", 75, -2, 1, 2000, 0, 2.5);
  t_freeze -> Draw("deltaNLL:r_A>>h_freeze","deltaNLL > 0"); // ,"goff");
  h_freeze -> SetMarkerStyle(8);
  h_freeze -> SetMarkerColor(kRed+1);
  h_freeze -> GetXaxis()->SetTitle("Asymmetry");
  h_freeze -> GetYaxis()->SetTitle("NLL");
  h_freeze -> SetTitle("Full Run2 likelihood scan");
  h_freeze -> GetXaxis()->SetRangeUser(-1.5, 1.0);
  h_freeze -> GetYaxis()->SetRangeUser(0.0,  1.5);

  TFile* f_syst = new TFile("Combination/FitResults_WH_FullRun2_v9_original_signal_scale_rA_freeze_r_higgs.root");
  TTree* t_syst = (TTree*) f_syst->Get("limit");
  TH2F*  h_syst = new TH2F("h_syst", "h_syst", 75, -2, 1, 2000, 0, 2.5);
  t_syst -> Draw("deltaNLL:r_A>>h_syst","deltaNLL > 0"); // ,"goff");
  h_syst -> SetMarkerStyle(8);
  h_syst -> SetMarkerColor(kBlack);
  
  TLegend* leg = new TLegend(0.15, 0.15, 0.4, 0.4);
  leg -> AddEntry(h_syst,   "All systematics",      "p");
  leg -> AddEntry(h_freeze, "Freezing systematics", "p");
  leg -> SetLineColor(0);

  TCanvas* c1 = new TCanvas("c1", "c1", 800, 800);
  c1 -> cd();
  h_freeze -> GetYaxis() -> SetRangeUser(0.0, 2.5);
  h_freeze -> Draw();
  h_syst -> Draw("same");
  leg -> Draw("same");
  c1->Print("plots_NLL/FullRun2_v9_rA.png");
  c1->Print("plots_NLL/FullRun2_v9_rA.pdf");
  

}
