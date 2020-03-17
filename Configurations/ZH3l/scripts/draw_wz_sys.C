#include <iostream>
#include "TH1F.h"
#include "TLine.h"
#include "TFile.h"
#include "TCanvas.h"
#include "TStyle.h"
#include "TLegend.h"

void draw_wz_sys() {
  TFile *f0 = TFile::Open("rootFiles_ZH3l_2018_wzsys/plots_ZH3l_2018_wzsys.root");

  gStyle->SetHistMinimumZero(1);
  gStyle->SetHistLineWidth(3);
  gStyle->SetOptStat(0);

  TString cut[5] =   {"preselection",	"z4lveto_1j", 	"zh3l_SR_1j", 	"z4lveto_2j", 	"zh3l_SR_2j" };
  TString dist[5] =  {"njet",	        "dphilmetj", 	"mtw_fit",       "dphilmetjj", 	"mtw_fit"};
  TString label[5] = {"Njet",	        "dphilmetj", 	"mtw_fit, 1j",   "dphilmetjj", 	"mtw_fit, 2j"};

  bool rebin = false;
  bool debug = false;

  TString sys = "PS";
  const int Nsys = 4;
  // TString sys = "Scale";
  // const int Nsys = 9;
  // TString sys = "PDF";
  // const int Nsys = 33;

  // Add 1 to make space for nominal
  TString vars[Nsys+1];
  TString varnames[Nsys+1];
  
  int varcols[10] = {(int) kBlack, (int) kMagenta, (int) kViolet, (int) kBlue, kAzure+1, (int) kCyan, kTeal+1, (int) kGreen, (int) kOrange+1, (int) kRed};

  vars[0] = "histo_WZ";
  varnames[0] = "nominal";
  for (int i = 0; i < Nsys; i++) {
    vars[i+1] = "histo_WZ_" + sys + "_" + TString::Itoa(i, 10);
    // vars[i+1] = "histo_WZ_" + sys + "0" + TString::Itoa(i, 10);
    varnames[i+1] = sys + " " + TString::Itoa(i, 10);
    cout << "var " << varnames[i+1] << " histo " << vars[i+1] << endl;
  }

  TH1F* h_WZ[5][Nsys+1];
  TH1F* h_WZ_rel[5][Nsys+1];
  TH1F* h_WZ_up[5];
  TH1F* h_WZ_dn[5];
  TH1F* h_WZ_up_rel[5];
  TH1F* h_WZ_dn_rel[5];

  for (int j = 0; j < 5; j++) {		// loop over sets of cut and dist
    for (int i = 0; i < Nsys+1; i++) {	// loop over variants
      h_WZ[j][i]   =   (TH1F*) f0->Get(cut[j]+"/"+dist[j]+"/"+vars[i]);
      // cout << "Histo " << cut[j] << "/" << dist[j] << "/" << vars[i] << " = " << h_WZ[j][i] << endl;
      h_WZ[j][i]->SetLineWidth(3);
      int linecolor = varcols[i % 10] + (i / 10);
      if (i % 10 == 0 && i != 0) linecolor = (int) kGray + (i/10);
      // cout << "Linecolor " << i << " = " << varcols[i % 10] << " + " << (i / 10) << " = " << linecolor << endl;
      h_WZ[j][i]->SetLineColor(linecolor);
      if (dist[j] != "njet" && i != 0) {
	cout << "Rescaling variant " << i << " of " << dist[j] << " at " << cut[j] << " to nominal" << endl; 
	cout << "Integral was " << h_WZ[j][i]->Integral() << " will be " <<  h_WZ[j][0]->Integral() << endl << endl; 
	h_WZ[j][i]->Scale( h_WZ[j][0]->Integral() / h_WZ[j][i]->Integral() );
      }
    }

    TCanvas* c1 = new TCanvas("WZ_"+sys+"_"+dist[j]+"_at_"+cut[j],"WZ_"+sys+"_"+dist[j]+"_at_"+cut[j],50,50,700,650);
    c1->cd();
    TPad* p_1_1 = new TPad("p_"+cut[j]+"_"+dist[j]+"_"+sys+"_1_1","p_"+cut[j]+"_"+dist[j]+"_"+sys+"_1_1",0,0.4,1,1);
    p_1_1->Draw(); p_1_1->cd();

    h_WZ[j][0]->GetXaxis()->SetLabelSize(0.045);
    h_WZ[j][0]->GetYaxis()->SetLabelSize(0.045);
    h_WZ[j][0]->GetXaxis()->SetTitleSize(0.05);
    h_WZ[j][0]->GetYaxis()->SetTitleSize(0.05);
    c1->SetBottomMargin(0.12);
    h_WZ[j][0]->GetXaxis()->SetTitleOffset(0.95);
    h_WZ[j][0]->GetYaxis()->SetTitleOffset(0.75);
    h_WZ[j][0]->GetXaxis()->SetTitle(label[j]);
    h_WZ[j][0]->GetYaxis()->SetTitle("events");
    h_WZ[j][0]->SetTitle("");

    h_WZ[j][0]->Draw("HIST");
    h_WZ_up[j] = (TH1F *) h_WZ[j][0]->Clone("h_WZ_"+cut[j]+"_"+dist[j]+"_"+sys+"_up");	// clone nominal
    h_WZ_dn[j] = (TH1F *) h_WZ[j][0]->Clone("h_WZ_"+cut[j]+"_"+dist[j]+"_"+sys+"_dn");	// clone nominal
    for (int i = 1; i < Nsys+1; i++) {
      h_WZ[j][i]->Draw("HIST SAME");

      if (debug) cout << endl << "Var " << i << endl;

      for (int k = 1; k < h_WZ[j][0]->GetNbinsX()+1; k++) {
	if (debug) {
	  cout << "bin " << j << " Nominal " << h_WZ[j][0]->GetBinContent(k) << endl;
	  cout << "\tup  " << h_WZ_up[j]->GetBinContent(k) << endl;
	  cout << "\tdn  " << h_WZ_dn[j]->GetBinContent(k) << endl;
	  cout << "\tvar " << h_WZ[j][i]->GetBinContent(j) << endl;
	}
	if (h_WZ[j][i]->GetBinContent(k) > h_WZ_up[j]->GetBinContent(k)) {
	  h_WZ_up[j]->SetBinContent(k, h_WZ[j][i]->GetBinContent(k));
	  if (debug) cout << "\t\t update up" << endl;
	}
	if (h_WZ[j][i]->GetBinContent(k) < h_WZ_dn[j]->GetBinContent(k)) {
	  h_WZ_dn[j]->SetBinContent(k, h_WZ[j][i]->GetBinContent(k));
	  if (debug) cout << "\t\t update dn" << endl;
	}
      }
    }
    h_WZ[j][0]->Draw("HIST SAME");

    TLegend* lgnd;
    if (dist[j].Contains("dphilmetj")) lgnd = new TLegend(0.15,0.40,0.38,0.89);
    else lgnd = new TLegend(0.66,0.40,0.89,0.89);
    lgnd->SetFillColor(0);    lgnd->SetBorderSize(0);
    for (int i = 0; i < Nsys+1; i++) {
      lgnd->AddEntry(h_WZ[j][i], varnames[i]);
    }
    lgnd->Draw();

    c1->cd();
    TPad* p_1_2 = new TPad("p_"+sys+"_1_2","p_"+sys+"_1_2",0,0,1,0.4);
    p_1_2->Draw(); p_1_2->cd();

    float err_up = 0.;
    float err_dn = 0.;
    for (int i = 1; i < Nsys+1; i++) {
      h_WZ_rel[j][i] = (TH1F *)h_WZ[j][i]->Clone("h_WZ_"+cut[j]+"_"+dist[j]+"_"+sys+"_"+vars[i]+"_rel");
      h_WZ_rel[j][i]->Divide(h_WZ[j][i], h_WZ[j][0]);
      if (dist[j] == "njet") {
	h_WZ_rel[j][i]->SetMaximum(1.15);
	h_WZ_rel[j][i]->SetMinimum(0.85);
      } else {
	h_WZ_rel[j][i]->SetMaximum(1.05);
	h_WZ_rel[j][i]->SetMinimum(0.95);
      }
      if (i == 1) h_WZ_rel[j][i]->Draw("HIST");
      else h_WZ_rel[j][i]->Draw("HIST SAME");

      if (dist[j].Contains("dphilmetj")) {
	float err = (h_WZ[j][i]->Integral(1,8) / h_WZ[j][i]->Integral(9,16)) /(h_WZ[j][0]->Integral(1,8) / h_WZ[j][0]->Integral(9,16));
	cout << dist[j] << " extrapolation variation " << i << " = " 
	  << (h_WZ[j][i]->Integral(1,8) / h_WZ[j][i]->Integral(9,16)) 
	  << " / " << (h_WZ[j][0]->Integral(1,8) / h_WZ[j][0]->Integral(9,16))
	  << " = " << err
	  << endl;

	if (err - 1.0 > err_up) err_up = err - 1.0;
	if (1.0 - err > err_dn) err_dn = 1.0 - err;
	cout << "Updated uncertainty  + " << err_up << " - " << err_dn << endl;
      }
    }
    cout << endl;
    TLine* unity = new TLine(h_WZ[j][0]->GetBinLowEdge(1),1.0,
	h_WZ[j][0]->GetBinLowEdge(h_WZ[j][0]->GetNbinsX()+1), 1.0);
    unity->SetLineWidth(3.0);
    unity->Draw("SAME");

    // =============================================================

    TCanvas* c2 = new TCanvas("WZ_"+sys+"_envelope_"+dist[j]+"_at_"+cut[j],"WZ_"+sys+"_envelope_"+dist[j]+"_at_"+cut[j],50,50,700,650); 
    c2->cd();
    TPad* p_2_1 = new TPad("p_"+cut[j]+"_"+dist[j]+"_"+sys+"_2_1","p_"+cut[j]+"_"+dist[j]+"_"+sys+"_2_1",0,0.4,1,1);
    p_2_1->Draw(); p_2_1->cd();

    h_WZ[j][0]->Draw("HIST");
    h_WZ_up[j]->SetLineColor(kGreen);
    h_WZ_dn[j]->SetLineColor(kCyan);
    h_WZ_up[j]->Draw("HIST SAME");
    h_WZ_dn[j]->Draw("HIST SAME");

    TLegend* lgnd2;
    if (dist[j].Contains("dphilmetj")) lgnd2 = new TLegend(0.15,0.40,0.38,0.89);
    else lgnd2 = new TLegend(0.66,0.40,0.89,0.89);
    lgnd2->SetFillColor(0);    lgnd2->SetBorderSize(0);
    lgnd2->AddEntry(h_WZ[j][0], "nominal");
    lgnd2->AddEntry(h_WZ_up[j], "envelope up");
    lgnd2->AddEntry(h_WZ_dn[j], "envelope dn");
    lgnd2->Draw();

    c2->cd();
    TPad* p_2_2 = new TPad("p_"+sys+"_2_2","p_"+sys+"_2_2",0,0,1,0.4);
    p_2_2->Draw(); p_2_2->cd();

    h_WZ_up_rel[j] = (TH1F *)h_WZ_up[j]->Clone("h_WZ_"+cut[j]+"_"+dist[j]+"_"+sys+"_up_rel");
    h_WZ_dn_rel[j] = (TH1F *)h_WZ_dn[j]->Clone("h_WZ_"+cut[j]+"_"+dist[j]+"_"+sys+"_dn_rel");
    h_WZ_up_rel[j]->Divide(h_WZ_up[j], h_WZ[j][0]);
    h_WZ_dn_rel[j]->Divide(h_WZ_dn[j], h_WZ[j][0]);
    if (dist[j] == "njet") {
      h_WZ_up_rel[j]->SetMaximum(1.15);
      h_WZ_up_rel[j]->SetMinimum(0.85);
    } else {
      h_WZ_up_rel[j]->SetMaximum(1.05);
      h_WZ_up_rel[j]->SetMinimum(0.95);
    }
    h_WZ_up_rel[j]->Draw("HIST");
    h_WZ_dn_rel[j]->Draw("HIST SAME");
    unity = new TLine(h_WZ_up_rel[j]->GetBinLowEdge(1),1.0,
	h_WZ_up_rel[j]->GetBinLowEdge(h_WZ_up_rel[j]->GetNbinsX()+1), 1.0);
    unity->SetLineWidth(3.0);
    unity->Draw("SAME");

    if (dist[j] == "njet") {
      cout << "\nNjet: " << endl;
      cout << "1-jet yield uncertainty = + " << (h_WZ_up_rel[j]->GetBinContent(2) - 1.)
	<< " - " << (1. - h_WZ_dn_rel[j]->GetBinContent(2)) << endl;
      cout << ">= 2-jet yield uncertainty = + " 
	<< (h_WZ_up[j]->Integral(2,h_WZ_up[j]->GetNbinsX()+1) / h_WZ[j][0]->Integral(2,h_WZ[j][0]->GetNbinsX()+1) - 1.)
	<< " - " 
	<< (1. - h_WZ_dn[j]->Integral(2,h_WZ_dn[j]->GetNbinsX()+1) / h_WZ[j][0]->Integral(2,h_WZ[j][0]->GetNbinsX()+1))
	<< endl << endl;
    }

    if (dist[j].Contains("dphilmetj")) {
      cout << dist[j] << " extrapolation uncertainty (underestimated?) = + " 
	<< ((h_WZ_up[j]->Integral(1,8) / h_WZ_up[j]->Integral(9,16)) /(h_WZ[j][0]->Integral(1,8) / h_WZ[j][0]->Integral(9,16))) - 1.0
	<< " - " 
	<< 1.0 - ((h_WZ_dn[j]->Integral(1,8) / h_WZ_dn[j]->Integral(9,16)) /(h_WZ[j][0]->Integral(1,8) / h_WZ[j][0]->Integral(9,16)))
	<< endl;
    }
    c1->Print("theory_errs/" + (TString) c1->GetName() + ".gif");
    c2->Print("theory_errs/" + (TString) c2->GetName() + ".gif");
  }




  // Yield at 1j SR
  // MT at 1j SR
  // dphilmetj at z4lveto
  // ratio --> extrapolation uncertainty

  // Yield at 2j SR
  // MT at 2j SR
  // dphilmetj at z4lveto
  // ratio --> extrapolation uncertainty

}
