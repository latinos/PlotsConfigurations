#include "TROOT.h"
#include "TInterpreter.h"
#include "TFile.h"
#include "TCanvas.h"
#include "TH1F.h"
#include "TStyle.h"
#include "TPad.h"
#include "Math/QuantFuncMathCore.h"
#include "TMath.h"
#include "TGraphAsymmErrors.h"
#include "TSystem.h"
#include "TLegend.h"
#include <iostream>
#include "CMS_lumi.C"
#include "TTree.h"

void eraselabel(TPad *p,Double_t h){
  p->cd();
  TPad *pe = new TPad("pe","pe",0.02,0,p->GetLeftMargin()-0.007,h);
  pe->Draw();
  pe->SetFillColor(p->GetFillColor()); 
  pe->SetBorderMode(0);
}

void atributes(TH1D *histo, TString xtitle = "", TString ytitle = "Fraction", TString units = "", Int_t color = 1){

  histo->SetTitle("");
  //histo->SetMarkerStyle(20);
  //histo->SetMarkerSize(0.8);
  //histo->SetLineWidth(4);
  if(strcmp(units.Data(),"")==0){
    histo->GetXaxis()->SetTitle(xtitle.Data());
  } else {
    histo->GetXaxis()->SetTitle(Form("%s [%s]",xtitle.Data(),units.Data()));
  }
  histo->GetXaxis()->SetLabelFont  (   42);
  histo->GetXaxis()->SetLabelOffset(0.015);
  if(xtitle == "Number of jets") histo->GetXaxis()->SetLabelSize  (0.225);
  else                           histo->GetXaxis()->SetLabelSize  (0.110);
  histo->GetXaxis()->SetNdivisions (  505);
  histo->GetXaxis()->SetTitleFont  (   42);
  histo->GetXaxis()->SetTitleOffset(  0.9);
  histo->GetXaxis()->SetTitleSize  (0.150);
  histo->GetXaxis()->SetTickLength (0.07 );

  histo->GetYaxis()->SetTitle(ytitle.Data());
  histo->GetYaxis()->SetLabelFont  (   42);
  histo->GetYaxis()->SetLabelOffset(0.015);
  histo->GetYaxis()->SetLabelSize  (0.160);
  histo->GetYaxis()->SetNdivisions (  505);
  histo->GetYaxis()->SetTitleFont  (   42);
  histo->GetYaxis()->SetTitleOffset(  0.6);
  histo->GetYaxis()->SetTitleSize  (0.120);
  histo->GetYaxis()->SetTickLength (0.03 );
  histo->SetFillColor(color);
  histo->SetMarkerColor(color);
  histo->SetFillStyle(3345);
  histo->SetMarkerSize(0.8);
  histo->SetMarkerStyle(kFullCircle);
}

void finalPlotWWUnfolding(TString keyLabel0 = "MLL", bool isNormalized = false, bool useMG = true) {

  TString XTitle = "X";
  TString units = "GeV";
  bool isLogY = false;
  bool isLogX = false;

  if     (keyLabel0 == "MLL")    {XTitle = "m^{Dilepton}"; isLogX = false;}
  else if(keyLabel0 == "PTL1")   {XTitle = "p_{T}^{Leading lepton}"; isLogX = false;}
  else if(keyLabel0 == "PTL2")   {XTitle = "p_{T}^{Subleading lepton}"; isLogX = false;}
  else if(keyLabel0 == "PTLL")   {XTitle = "p_{T}^{Dilepton}"; isLogX = false;}
  else if(keyLabel0 == "PTWW")    {XTitle = "p_{T}^{WW}"; isLogX = false; }
  else if(keyLabel0 == "NJET")   {XTitle = "Number of jets"; units = "";}
  else if(keyLabel0 == "PTJ1")   {XTitle = "p_{T}^{Leading jet}"; isLogX = false;}
  else if(keyLabel0 == "PTJ2")   {XTitle = "p_{T}^{Subleading jet}"; isLogX = false;}
  else if(keyLabel0 == "MJJ")    {XTitle = "#Delta m_{jj}"; isLogX = false;}
  else if(keyLabel0 == "DPHIJJ") {XTitle = "#Delta#phi_{jj}"; units = "rad";}

  gInterpreter->ExecuteMacro("PaperStyle.C");
  gStyle->SetOptStat(0);

  bool isDebug = true;

  double scaleDFSF = 1.0; if(keyLabel0.Contains("N0JET")) scaleDFSF = 2.0;

  const int theFillColor1 = 12;
  const int theFillStyle1 = 3345;
  const int theFillColor2 = 27;
  const int theFillStyle2 = 3005;
  const int theFillColor3 = 46;
  const int theFillStyle3 = 3007;

  TString genFileName = "xswwgen_minnlo_mcfm_13p0tev_10thApril2026.root";
  if(useMG == false) genFileName = "xswwgen_minnlo_mcfm_13p0tev_10thApril2026.root";
  TFile *_fileGenWW1 = TFile::Open(genFileName.Data());
  TH1D* hPred1     = (TH1D*)_fileGenWW1->Get(Form("hDWW%s",keyLabel0.Data()));     hPred1    ->SetDirectory(0);
  TH1D* hPred1_PDF = (TH1D*)_fileGenWW1->Get(Form("hDWW%s_PDF",keyLabel0.Data())); hPred1_PDF->SetDirectory(0);
  TH1D* hPred1_QCD = (TH1D*)_fileGenWW1->Get(Form("hDWW%s_QCD",keyLabel0.Data())); hPred1_QCD->SetDirectory(0);
  TH1D* hPred1_PS  = (TH1D*)_fileGenWW1->Get(Form("hDWW%s_PS",keyLabel0.Data()));  hPred1_PS ->SetDirectory(0);
  _fileGenWW1->Close();

  TFile *_fileGenWW2 = TFile::Open("xswwgen_powheg_mcfm_13p0tev_10thApril2026.root");
  TH1D* hPred2     = (TH1D*)_fileGenWW2->Get(Form("hDWW%s",keyLabel0.Data()));     hPred2    ->SetDirectory(0);
  TH1D* hPred2_PDF = (TH1D*)_fileGenWW2->Get(Form("hDWW%s_PDF",keyLabel0.Data())); hPred2_PDF->SetDirectory(0);
  TH1D* hPred2_QCD = (TH1D*)_fileGenWW2->Get(Form("hDWW%s_QCD",keyLabel0.Data())); hPred2_QCD->SetDirectory(0);
  TH1D* hPred2_PS  = (TH1D*)_fileGenWW2->Get(Form("hDWW%s_PS",keyLabel0.Data()));  hPred2_PS ->SetDirectory(0);
  _fileGenWW2->Close();

  TString plotName = Form("input_files/xs_WW%s.root", keyLabel0.Data());
  TFile *_file0 = TFile::Open(plotName.Data());
  TH1D* hData = (TH1D*)_file0->Get(Form("hDWW%s",keyLabel0.Data())); hData->SetDirectory(0);
  _file0->Close();

  for(Int_t i=1;i<=hPred1->GetNbinsX();++i){
    // Pred1
    double diff[5] = {hPred1->GetBinError(i)/hPred1->GetBinContent(i),
                      TMath::Abs(1-hPred1_PDF->GetBinContent(i)/hPred1->GetBinContent(i)),
                      TMath::Abs(1-hPred1_QCD->GetBinContent(i)/hPred1->GetBinContent(i)),
                      TMath::Abs(1-hPred1_PS ->GetBinContent(i)/hPred1->GetBinContent(i)),
                      0.0};

    if(keyLabel0.Contains("NJETS")) {
      if     (i == 1) diff[4] = 0.101;
      else if(i == 2) diff[4] = 0.076;
      else if(i == 3) diff[4] = 0.073;
    }

    if(isNormalized) {
      diff[1] = TMath::Abs(1-(hPred1_PDF->GetBinContent(i)/hPred1_PDF->GetSumOfWeights())/(hPred1->GetBinContent(i)/hPred1->GetSumOfWeights()));
      diff[2] = TMath::Abs(1-(hPred1_QCD->GetBinContent(i)/hPred1_QCD->GetSumOfWeights())/(hPred1->GetBinContent(i)/hPred1->GetSumOfWeights()));
      diff[3] = TMath::Abs(1-(hPred1_PS ->GetBinContent(i)/hPred1_PS ->GetSumOfWeights())/(hPred1->GetBinContent(i)/hPred1->GetSumOfWeights()));
      if(keyLabel0.Contains("NJETS")) {
        if     (i == 1) diff[4] = 0.014*2;
        else if(i == 2) diff[4] = 0.022*2;
        else if(i == 3) diff[4] = 0.044*2;
      }
    }

    hData->SetBinContent(i,hData->GetBinContent(i)*hPred1->GetBinContent(i));
    hData->SetBinError  (i,hData->GetBinError  (i)*hPred1->GetBinContent(i));

    hPred1->SetBinError(i,sqrt(diff[0]*diff[0]+diff[1]*diff[1]+diff[2]*diff[2]+diff[3]*diff[3]+diff[4]*diff[4])*hPred1->GetBinContent(i));
    if(isDebug) printf("hPredSyst1 (%2d) %5.2f %5.2f %5.2f %5.2f %5.2f -> %5.2f\n",i,100*diff[0],100*diff[1],100*diff[2],100*diff[3],100*diff[4],100*hPred1->GetBinError(i)/hPred1->GetBinContent(i));

    // Pred2
    diff[0] = hPred2->GetBinError(i)/hPred2->GetBinContent(i);
    diff[1] = TMath::Abs(1-hPred2_PDF->GetBinContent(i)/hPred2->GetBinContent(i));
    diff[2] = TMath::Abs(1-hPred2_QCD->GetBinContent(i)/hPred2->GetBinContent(i));
    diff[3] = TMath::Abs(1-hPred2_PS ->GetBinContent(i)/hPred2->GetBinContent(i));
    diff[4] = 0.0;

    if(isNormalized) {
      diff[1] = TMath::Abs(1-(hPred2_PDF->GetBinContent(i)/hPred2_PDF->GetSumOfWeights())/(hPred2->GetBinContent(i)/hPred2->GetSumOfWeights()));
      diff[2] = TMath::Abs(1-(hPred2_QCD->GetBinContent(i)/hPred2_QCD->GetSumOfWeights())/(hPred2->GetBinContent(i)/hPred2->GetSumOfWeights()));
      diff[3] = TMath::Abs(1-(hPred2_PS ->GetBinContent(i)/hPred2_PS ->GetSumOfWeights())/(hPred2->GetBinContent(i)/hPred2->GetSumOfWeights()));
    }

    hPred2->SetBinError(i,sqrt(diff[0]*diff[0]+diff[1]*diff[1]+diff[2]*diff[2]+diff[3]*diff[3]+diff[4]*diff[4])*hPred2->GetBinContent(i));
    if(isDebug) printf("hPredSyst2 (%2d) %5.2f %5.2f %5.2f %5.2f %5.2f -> %5.2f\n",i,100*diff[0],100*diff[1],100*diff[2],100*diff[3],100*diff[4],100*hPred2->GetBinError(i)/hPred2->GetBinContent(i));
	
  }

  hData ->Scale(scaleDFSF);
  hPred1->Scale(scaleDFSF);
  hPred2->Scale(scaleDFSF);

  //hData ->Scale(1,"width");
  //hPred1->Scale(1,"width");
  //hPred2->Scale(1,"width");

  Int_t ww = 800;
  Int_t wh = 1000;

  TCanvas *c1 = new TCanvas("c1", "c1", ww, wh);
  
  TPad* pad1 = nullptr;
  TPad* pad2 = nullptr;
  TPad* pad3 = nullptr;

  /*if (keyLabel0 == "PTL2") 
  { 
    pad1 = new TPad("pad1", "pad1", 0, 0.360, 1, 0.950);
    pad2 = new TPad("pad2", "pad2", 0, 0.170, 1, 0.360);
    pad3 = new TPad("pad3", "pad3", 0, 0.020, 1, 0.210);
  }
  else {
  */
  pad1 = new TPad("pad1", "pad1", 0, 0.360, 1, 0.975);
  pad2 = new TPad("pad2", "pad2", 0, 0.210, 1, 0.360);
  pad3 = new TPad("pad3", "pad3", 0, 0.02 , 1, 0.210);
  //}

  pad1->SetTopMargin   (0.08);
  pad1->SetBottomMargin(0.00);  // 0.02

  pad2->SetTopMargin   (0.00);  // 0.08
  pad2->SetBottomMargin(0.00);  // 0.35

  pad3->SetTopMargin   (0.00);  // 0.08
  pad3->SetBottomMargin(0.34);  // room for x-axis title on bottom pad
  if (keyLabel0 == "NJET") { pad3->SetBottomMargin(0.34); }
  else if (keyLabel0 == "PTL1") { pad3->SetBottomMargin(0.40); }
  else if (keyLabel0 == "PTL2") { pad3->SetBottomMargin(0.20); }
  else if (keyLabel0 == "PTJ1") { pad3->SetBottomMargin(0.38); }
  else if (keyLabel0 == "PTJ2") { pad3->SetBottomMargin(0.40); }
  else if (keyLabel0 == "PTLL") { pad3->SetBottomMargin(0.38); }
  else if (keyLabel0 == "PTWW") { pad3->SetBottomMargin(0.40); }
  else if (keyLabel0 == "MLL") { pad3->SetBottomMargin(0.36); }

  pad1->Draw();
  pad2->Draw();
  pad3->Draw();

  pad1->cd();
  gStyle->SetOptStat(0);
  if(isLogY == true) pad1->SetLogy();
  if(isLogX == true) {pad1->SetLogx(); pad2->SetLogx(); pad3->SetLogx();}

  // draw pad1
  if(strcmp(units.Data(),"")==0){
    hPred1->GetXaxis()->SetTitle(XTitle.Data());
    hPred1->GetXaxis()->SetLabelOffset(0.005);
    hPred1->GetXaxis()->SetTitleOffset(  0.9);
    hPred2->GetXaxis()->SetTitle(XTitle.Data());
    hPred2->GetXaxis()->SetLabelOffset(0.005);
    hPred2->GetXaxis()->SetTitleOffset(  1.5);
  } 
  else {
    hPred1->GetXaxis()->SetTitle(Form("%s [%s]",XTitle.Data(),units.Data()));
    hPred1->GetXaxis()->SetLabelOffset(0.00);
    hPred1->GetXaxis()->SetTitleOffset(  1.1);
    hPred2->GetXaxis()->SetTitle(Form("%s [%s]",XTitle.Data(),units.Data()));
    hPred2->GetXaxis()->SetLabelOffset(0.00);
    hPred2->GetXaxis()->SetTitleOffset(1.5);
  }

  TString theYTitle = "#sigma / GeV [pb]";
  if     ( isNormalized && keyLabel0.Contains("NJETS"))  theYTitle = "1/#sigma d#sigma/dN_{jets}";
  else if(!isNormalized && keyLabel0.Contains("NJETS"))  theYTitle = "d#sigma/dN_{j}";
  else if(!isNormalized && keyLabel0.Contains("PTL1"))   theYTitle = "d#sigma/dp_{T}^{Leading lepton} [pb/GeV]";
  else if(!isNormalized && keyLabel0.Contains("PTL2"))   theYTitle = "d#sigma/dp_{T}^{Subleading lepton} [pb/GeV]";
  else if(!isNormalized && keyLabel0.Contains("MLL"))    theYTitle = "d#sigma/dm^{Dilepton} [pb/GeV]";
  else if(!isNormalized && keyLabel0.Contains("PTLL"))   theYTitle = "d#sigma/dp_{T}^{Dilepton} [pb/GeV]";
  else if(!isNormalized && keyLabel0.Contains("PTWW"))   theYTitle = "d#sigma/dp_{T}^{WW} [pb/GeV]";
  else if(!isNormalized && keyLabel0.Contains("NJET"))   theYTitle = "d#sigma/dN_{jets} [pb]";
  else if(!isNormalized && keyLabel0.Contains("PTJ1"))   theYTitle = "d#sigma/dp_{T}^{Leading jet} [pb/GeV]";
  else if(!isNormalized && keyLabel0.Contains("PTJ2"))   theYTitle = "d#sigma/dp_{T}^{Subleading jet} [pb/GeV]";
  else if(!isNormalized && keyLabel0.Contains("MJJ"))    theYTitle = "d#sigma/dm_{jj} [pb/GeV]";
  else if(!isNormalized && keyLabel0.Contains("DPHIJJ")) theYTitle = "d#sigma/d#Delta#phi_{jj} [pb/rad]";
  //else if( isNormalized && keyLabel0.Contains("MLL"))    theYTitle = "1/#sigma d#sigma/dm_{ll} [1/bin]";
  else {printf("PROBLEM!\n"); return;}

  hPred1->GetYaxis()->SetTitle(theYTitle.Data());
  hPred1->GetYaxis()->SetLabelFont  (   42);
  hPred1->GetYaxis()->SetLabelOffset(0.015);
  hPred1->GetYaxis()->SetLabelSize  (0.060);
  hPred1->GetYaxis()->SetNdivisions (  505);
  hPred1->GetYaxis()->SetTitleFont  (   42);
  //hPred1->GetYaxis()->SetTitleOffset(  1.2);
  hPred1->GetYaxis()->SetTitleOffset(  1.4);
  if (keyLabel0 == "NJET") { hPred1->GetYaxis()->SetTitleOffset(1.2); }
  else if (keyLabel0 == "PTL1") { hPred1->GetYaxis()->SetTitleOffset(1.4); } 
  else if (keyLabel0 == "PTL2") { hPred1->GetYaxis()->SetTitleOffset(1.4); }  
  hPred1->GetYaxis()->SetTitleSize  (0.060);
  hPred1->GetYaxis()->SetTickLength (0.03 );

  hPred1->GetXaxis()->SetLabelFont  (   42);
  hPred1->GetXaxis()->SetLabelSize  (0.040);
  hPred1->GetXaxis()->SetNdivisions (  505);
  hPred1->GetXaxis()->SetTitleFont  (   42);
  hPred1->GetXaxis()->SetTitleSize  (0.060);
  hPred1->GetXaxis()->SetTickLength (0.07 );
 
  hPred2->GetYaxis()->SetTitle(theYTitle.Data());
  hPred2->GetYaxis()->SetLabelFont  (   42);
  hPred2->GetYaxis()->SetLabelOffset(0.015);
  hPred2->GetYaxis()->SetLabelSize  (0.060);
  hPred2->GetYaxis()->SetNdivisions (  505);
  hPred2->GetYaxis()->SetTitleFont  (   42);
  hPred2->GetYaxis()->SetTitleOffset(  1.2);
  hPred2->GetYaxis()->SetTitleSize  (0.080);
  hPred2->GetYaxis()->SetTickLength (0.03 );

  hPred2->GetXaxis()->SetLabelFont  (   42);
  hPred2->GetXaxis()->SetLabelSize  (0.040);
  hPred2->GetXaxis()->SetNdivisions (  505);
  hPred2->GetXaxis()->SetTitleFont  (   42);
  hPred2->GetXaxis()->SetTitleSize  (0.060);
  hPred2->GetXaxis()->SetTickLength (0.07 );
 
  hData->SetMarkerSize(0.8);
  hData->SetMarkerStyle(kFullCircle);
  hData->SetLineColor  (kBlack);

  hPred1->SetLineColor(kBlue);
  hPred1->SetMarkerStyle(3);
  hPred1->SetMarkerColor(kBlue);

  hPred2->SetLineColor(kRed);
  hPred2->SetMarkerStyle(2);
  hPred2->SetMarkerColor(kRed);

  TAxis *xa = hData->GetXaxis(); TAxis *xb = hPred1->GetXaxis(); TAxis *xc = hPred2->GetXaxis();
  hPred1->SetTitle("");
  hPred2->SetTitle("");
  hData ->SetTitle("");
  double normalization[3] = {1.0, 1.0, 1.0};
  if(isNormalized) {
    normalization[0] = hPred1->GetSumOfWeights();
    normalization[1] = hPred2->GetSumOfWeights();
    normalization[2] = hData->GetSumOfWeights();
  }
  hPred1->Scale(1./normalization[0]);
  hPred2->Scale(1./normalization[1]);
  hData ->Scale(1./normalization[2]);

  for(Int_t i=1;i<=hPred1->GetNbinsX();++i){
    if(isDebug) printf("hData (%2d) %7.3f %7.3f\n",i,hData->GetBinContent(i),hData->GetBinError(i));
  }

  if(isLogY == true) hPred1->GetYaxis()->SetRangeUser(hPred1->GetMinimum()/10,hPred1->GetMaximum()*100);
  else               hPred1->GetYaxis()->SetRangeUser(0.0,hPred1->GetMaximum()*1.4);

  if(keyLabel0 == "DPHIJJ") hPred1->GetYaxis()->SetRangeUser(0.0,hPred1->GetMaximum()*1.8);
  if(keyLabel0 == "MJJ") hPred1->GetYaxis()->SetRangeUser(0.0,hPred1->GetMaximum()*1.85);

  hPred1->Draw("hist,x0");
  hPred2->Draw("hist,x0,same");
  hData->Draw("epx0,same");

  bool plotSystErrorBars = true;
  TGraphAsymmErrors * gsyst1 = new TGraphAsymmErrors(hPred1);
  if(plotSystErrorBars == true) {
    for (int i = 0; i < gsyst1->GetN(); ++i) {
      double systBck = 0;
      gsyst1->SetPointEYlow (i, sqrt(hPred1->GetBinError(i+1)*hPred1->GetBinError(i+1)+hPred1->GetBinContent(i+1)*hPred1->GetBinContent(i+1)*systBck*systBck));
      gsyst1->SetPointEYhigh(i, sqrt(hPred1->GetBinError(i+1)*hPred1->GetBinError(i+1)+hPred1->GetBinContent(i+1)*hPred1->GetBinContent(i+1)*systBck*systBck));
    }
    gsyst1->SetFillColor(theFillColor1);
    gsyst1->SetFillStyle(theFillStyle1);
    gsyst1->SetMarkerSize(0);
    gsyst1->SetLineWidth(0);
    gsyst1->SetLineColor(kWhite);
    gsyst1->Draw("E2same");
    //TExec *setex1 = new TExec("setex1","gStyle->SetErrorX(0)");
    //setex1->Draw();
  }
  TGraphAsymmErrors * gsyst2 = new TGraphAsymmErrors(hPred2);
  if(plotSystErrorBars == true) {
    for (int i = 0; i < gsyst2->GetN(); ++i) {
      double systBck = 0;
      gsyst2->SetPointEYlow (i, sqrt(hPred2->GetBinError(i+1)*hPred2->GetBinError(i+1)+hPred2->GetBinContent(i+1)*hPred2->GetBinContent(i+1)*systBck*systBck));
      gsyst2->SetPointEYhigh(i, sqrt(hPred2->GetBinError(i+1)*hPred2->GetBinError(i+1)+hPred2->GetBinContent(i+1)*hPred2->GetBinContent(i+1)*systBck*systBck));
    }
    gsyst2->SetFillColor(theFillColor2);
    gsyst2->SetFillStyle(theFillStyle2);
    gsyst2->SetMarkerSize(0);
    gsyst2->SetLineWidth(0);
    gsyst2->SetLineColor(kWhite);
    gsyst2->Draw("E2same");
    //TExec *setex1 = new TExec("setex1","gStyle->SetErrorX(0)");
    //setex1->Draw();
  }
  hPred1->Draw("hist,x0,same");
  hPred2->Draw("hist,x0,same");
  hData->Draw("epx0,same");

  TH1D* hColorDummy1 = (TH1D*) hPred1->Clone();
  hColorDummy1->SetFillColor(theFillColor1);
  hColorDummy1->SetFillStyle(theFillStyle1);

  TH1D* hColorDummy2 = (TH1D*) hPred2->Clone();
  hColorDummy2->SetFillColor(theFillColor2);
  hColorDummy2->SetFillStyle(theFillStyle2);

  gStyle->SetOptStat(0);
  TLegend* legend = new TLegend(0.58,0.65,0.78,0.85);
  if (keyLabel0 == "NJET") { legend = new TLegend(0.58,0.65,0.78,0.85); }
  else if (keyLabel0 == "PTL1") { legend = new TLegend(0.25,0.65,0.4,0.85); }
  else if (keyLabel0 == "PTL2") { legend = new TLegend(0.58,0.65,0.78,0.85); }
  else if (keyLabel0 == "PTL1") { legend = new TLegend(0.25,0.65,0.4,0.85); }
  else if (keyLabel0 == "MLL") { legend = new TLegend(0.62,0.65,0.80,0.85); }
  //else if (keyLabel0 == "PTWW") { legend = new TLegend(0.25,0.65,0.4,0.85); }

  legend->SetBorderSize(    0);
  legend->SetFillColor (    0);
  legend->SetTextAlign (   12);
  legend->SetTextFont  (   62);
  //legend->SetTextSize  (0.060);
  legend->SetTextSize  (0.040);
  legend->AddEntry(hData,  "Data", "ep");
  legend->AddEntry(hColorDummy1, "POWHEG+PYTHIA", "lf");
  legend->AddEntry(hColorDummy2, "MiNNLO+PYTHIA", "lf");
  legend->Draw();

  CMS_lumi( pad1, 33, 11 );

  { // Pred1
  pad2->cd();
  gStyle->SetOptStat(0);

  TH1D* hNum = (TH1D*) hPred1->Clone(); hNum->Reset();
  TH1D* hDen = (TH1D*) hData ->Clone(); hDen->Reset();

  TH1D* hRatio = (TH1D*) hPred1->Clone(); hRatio->Reset();
  TH1D* hBand  = (TH1D*) hData ->Clone(); hBand ->Reset();

  hNum->Add(hPred1);
  hDen->Add(hData);

  double pull; 
  double pullerr;
  double pullinv; 
  double pullinverr;

  for(int i=1; i<=hNum->GetNbinsX(); i++){
      pull = 1.0; pullerr = 0.0;
      pullinv = 1.0; pullinverr = 0.0;
      if(hNum->GetBinContent(i) > 0 && hDen->GetBinContent(i) > 0){
        pull = (hNum->GetBinContent(i)/hDen->GetBinContent(i));
        pullerr = pull*hDen->GetBinError(i)/hDen->GetBinContent(i);
        pullinv = (hDen->GetBinContent(i)/hNum->GetBinContent(i));
        pullinverr = pullinv*hDen->GetBinError(i)/hDen->GetBinContent(i);
      }
      else {
        printf("0 events in %d\n",i);
      }
      if(isDebug) printf("ratio(%2d): pred/data = %.3f +/- %.3f predUnc: %.3f\n",i,pull,pullerr,hNum->GetBinError(i)/hNum->GetBinContent(i));
      if(isDebug) printf("ratio(%2d): data/pred = %.3f +/- %.3f, sigma = %.3f pb\n",i,pullinv,pullinverr,hNum->GetBinContent(i));
      hRatio->SetBinContent(i,pull);
      hRatio->SetBinError(i,pullerr);
      hBand->SetBinContent(i,1);
      hBand->SetBinError  (i,hNum->GetBinError(i)/hNum->GetBinContent(i)); 
  }
  units = units.ReplaceAll("BIN","");
  atributes(hRatio,"","#frac{POWHEG}{Data}",units.Data());

  hRatio->Draw("ex0");
  hBand->SetFillColor(theFillColor1);
  hBand->SetFillStyle(theFillStyle1);
  hBand->SetMarkerSize(0);
  hBand->SetLineWidth(0);
  hBand->Draw("E2same");

  TLegend* leg = nullptr;
  if (keyLabel0 == "NJET") { leg = new TLegend(0.20,0.55,0.30,0.85); }
  else if (keyLabel0 == "PTL1") { leg = new TLegend(0.20,0.7,0.30,0.9); }
  else if (keyLabel0 == "PTL2") { leg = new TLegend(0.20,0.7,0.30,0.9); }
  else if (keyLabel0 == "PTLL") { leg = new TLegend(0.4,0.7,0.95,0.9); }
  else if (keyLabel0 == "DPHIJJ") { leg = new TLegend(0.20,0.7,0.30,0.9); }
  else { leg = new TLegend(0.20,0.55,0.30,0.85); }
  leg->SetBorderSize(	 0);
  leg->SetFillColor (	 0);
  leg->SetTextAlign (	12);
  leg->SetTextFont  (	62);
  leg->SetTextSize  (0.130);
  leg->AddEntry(hBand,"Theoretical uncertainty","f");
  leg->AddEntry(hRatio,"Theoretical prediction / measurement","pe");
  leg->Draw();

  // Draw a line throgh y=0
  double theLines[2] = {1.0, 0.5};
  TLine* baseline = new TLine(hRatio->GetXaxis()->GetXmin(), theLines[0],
                              hRatio->GetXaxis()->GetXmax(), theLines[0]);
  baseline->SetLineStyle(kDashed);
  baseline->Draw();
  hRatio->Draw("ex0,same");
  // Set the y-axis range symmetric around y=0
  Double_t dy = TMath::Max(TMath::Abs(hRatio->GetMaximum()),
                           TMath::Abs(hRatio->GetMinimum())) + theLines[1];
  // Double_t dy = TMath::Max(TMath::Abs(TMath::Abs(hRatio->GetMaximum())-1),TMath::Abs(TMath::Abs(hRatio->GetMinimum()))-1);
  double maxValue = 1.499;
  if(keyLabel0.Contains("NJET")) { maxValue = 4.3; hRatio->GetYaxis()->SetRangeUser(0.1,maxValue); hRatio->GetYaxis()->SetTitleOffset(0.5);}
  else if(keyLabel0 == "PTL1") { maxValue = 1.3; hRatio->GetYaxis()->SetRangeUser(0.67,maxValue); }
  else if(keyLabel0 == "PTL2") { maxValue = 1.37; hRatio->GetYaxis()->SetRangeUser(0.67,maxValue); hRatio->GetYaxis()->SetTitleOffset(0.5); }
  else if(keyLabel0 == "PTLL") { maxValue = 1.37; hRatio->GetYaxis()->SetRangeUser(0.67,maxValue); hRatio->GetYaxis()->SetTitleOffset(0.5); }
  else if(keyLabel0 == "PTWW") { maxValue = 2.67; hRatio->GetYaxis()->SetRangeUser(0.65,maxValue); hRatio->GetYaxis()->SetTitleOffset(0.5); }
  else if(keyLabel0 == "PTJ1") { maxValue = 11.3; hRatio->GetYaxis()->SetRangeUser(-4.7,maxValue); hRatio->GetYaxis()->SetTitleOffset(0.5); }
  else if(keyLabel0 == "MLL") { maxValue = 1.37; hRatio->GetYaxis()->SetRangeUser(0.67,maxValue); hRatio->GetYaxis()->SetTitleOffset(0.5); }
  else if(keyLabel0 == "PTJ2") { maxValue = 1.3; hRatio->GetYaxis()->SetRangeUser(-4.7,maxValue); hRatio->GetYaxis()->SetTitleOffset(0.5); }
  else if(keyLabel0 == "MJJ") { maxValue = 5.6; hRatio->GetYaxis()->SetRangeUser(-0.7,maxValue); hRatio->GetYaxis()->SetTitleOffset(0.5); }
  else if(keyLabel0 == "DPHIJJ") { maxValue = 1.67; hRatio->GetYaxis()->SetRangeUser(0.23,maxValue); hRatio->GetYaxis()->SetTitleOffset(0.5); }
  hRatio->GetYaxis()->CenterTitle();
  eraselabel(pad1,hData->GetXaxis()->GetLabelSize());
  eraselabel(pad2,hRatio->GetXaxis()->GetLabelSize());
  } // End Pred1

  { // Pred2
  pad3->cd();
  gStyle->SetOptStat(0);

  TH1D* hNum = (TH1D*) hPred2->Clone(); hNum->Reset();
  TH1D* hDen = (TH1D*) hData ->Clone(); hDen->Reset();

  TH1D* hRatio = (TH1D*) hPred2->Clone(); hRatio->Reset();
  TH1D* hBand  = (TH1D*) hData ->Clone(); hBand ->Reset();

  hNum->Add(hPred2);
  hDen->Add(hData);

  double pull; 
  double pullerr;
  double pullinv; 
  double pullinverr;

  for(int i=1; i<=hNum->GetNbinsX(); i++){
      pull = 1.0; pullerr = 0.0;
      pullinv = 1.0; pullinverr = 0.0;
      if(hNum->GetBinContent(i) > 0 && hDen->GetBinContent(i) > 0){
        pull = (hNum->GetBinContent(i)/hDen->GetBinContent(i));
        pullerr = pull*hDen->GetBinError(i)/hDen->GetBinContent(i);
        pullinv = (hDen->GetBinContent(i)/hNum->GetBinContent(i));
        pullinverr = pullinv*hDen->GetBinError(i)/hDen->GetBinContent(i);
      }
      else {
        printf("0 events in %d\n",i);
      }
      if(isDebug) printf("ratio(%2d): pred/data = %.3f +/- %.3f predUnc: %.3f\n",i,pull,pullerr,hNum->GetBinError(i)/hNum->GetBinContent(i));
      if(isDebug) printf("ratio(%2d): data/pred = %.3f +/- %.3f, sigma = %.3f pb\n",i,pullinv,pullinverr,hNum->GetBinContent(i));
      hRatio->SetBinContent(i,pull);
      hRatio->SetBinError(i,pullerr);
      hBand->SetBinContent(i,1);
      hBand->SetBinError  (i,hNum->GetBinError(i)/hNum->GetBinContent(i)); 
  }
  units = units.ReplaceAll("BIN","");
  //atributes(hRatio,"","#frac{MATRIX}{Data}",units.Data());
  atributes(hRatio,XTitle.Data(),"#frac{MiNNLO}{Data}",units.Data());

  hRatio->Draw("ex0");
  hBand->SetFillColor(theFillColor2);
  hBand->SetFillStyle(theFillStyle2);
  hBand->SetMarkerSize(0);
  hBand->SetLineWidth(0);
  hBand->Draw("E2same");

  TLegend* leg = nullptr;
  if (keyLabel0 == "NJET") { leg = new TLegend(0.20,0.7,0.30,0.9); }
  else if (keyLabel0 == "PTL1") { leg = new TLegend(0.20,0.75,0.30,0.9); }
  else if (keyLabel0 == "PTL2") { leg = new TLegend(0.20,0.75,0.30,0.9); }
  else if (keyLabel0 == "PTJ1") { leg = new TLegend(0.20,0.75,0.30,0.9); }
  else if (keyLabel0 == "PTLL") { leg = new TLegend(0.4,0.75,0.95,0.9); }
  else if (keyLabel0 == "DPHIJJ") { leg = new TLegend(0.20,0.76,0.30,0.9); }

  else  { leg = new TLegend(0.20,0.7,0.30,0.9); }
  leg->SetBorderSize(	 0);
  leg->SetFillColor (	 0);
  leg->SetTextAlign (	12);
  leg->SetTextFont  (	62);
  leg->SetTextSize  (0.10);
  leg->AddEntry(hBand,"Theoretical uncertainty","f");
  leg->AddEntry(hRatio,"Theoretical prediction / measurement","pe");
  leg->Draw();

  // Draw a line throgh y=0
  double theLines[2] = {1.0, 0.5};
  TLine* baseline = new TLine(hRatio->GetXaxis()->GetXmin(), theLines[0],
                              hRatio->GetXaxis()->GetXmax(), theLines[0]);
  baseline->SetLineStyle(kDashed);
  baseline->Draw();
  hRatio->Draw("ex0,same");
  // Set the y-axis range symmetric around y=0
  Double_t dy = TMath::Max(TMath::Abs(hRatio->GetMaximum()),
                           TMath::Abs(hRatio->GetMinimum())) + theLines[1];
  // Double_t dy = TMath::Max(TMath::Abs(TMath::Abs(hRatio->GetMaximum())-1),TMath::Abs(TMath::Abs(hRatio->GetMinimum()))-1);
  double maxValue = 1.499;
  if(keyLabel0.Contains("NJET")) { maxValue = 4.3; hRatio->GetXaxis()->SetLabelSize(0.2); hRatio->GetYaxis()->SetRangeUser(-0.2,maxValue); hRatio->GetXaxis()->SetTitleOffset(1.1); hRatio->GetYaxis()->SetTitleOffset(0.6);}
  else if(keyLabel0 == "PTL1") { maxValue = 1.33; hRatio->GetXaxis()->SetLabelSize(0.15); hRatio->GetYaxis()->SetRangeUser(0.67,maxValue); hRatio->GetXaxis()->SetTitleOffset(1.3); hRatio->GetYaxis()->SetTitleOffset(0.7);}
  else if(keyLabel0 == "PTL2") { maxValue = 1.37; hRatio->GetXaxis()->SetLabelSize(0.2); hRatio->GetYaxis()->SetRangeUser(0.67,maxValue); hRatio->GetXaxis()->SetTitleOffset(1.3);}
  else if(keyLabel0 == "PTLL") { maxValue = 1.37; hRatio->GetXaxis()->SetLabelSize(0.2); hRatio->GetYaxis()->SetRangeUser(0.67,maxValue); hRatio->GetXaxis()->SetTitleOffset(1.3);}
  else if(keyLabel0 == "PTWW") { maxValue = 2.67; hRatio->GetXaxis()->SetLabelSize(0.18); hRatio->GetYaxis()->SetRangeUser(0.67,maxValue); hRatio->GetXaxis()->SetTitleOffset(1.3);}
  else if(keyLabel0 == "MLL")  { maxValue = 1.37; hRatio->GetXaxis()->SetLabelSize(0.2); hRatio->GetYaxis()->SetRangeUser(0.67,maxValue); hRatio->GetXaxis()->SetTitleOffset(1.3);}
  else if(keyLabel0 == "PTJ1") { maxValue = 10.3; hRatio->GetXaxis()->SetLabelSize(0.18); hRatio->GetYaxis()->SetRangeUser(-4.7,maxValue); hRatio->GetYaxis()->SetTitleOffset(0.5); hRatio->GetXaxis()->SetTitleOffset(1.2);}
  else if(keyLabel0 == "PTJ2") { maxValue = 10.3; hRatio->GetXaxis()->SetLabelSize(0.18); hRatio->GetYaxis()->SetRangeUser(-4.7,maxValue); hRatio->GetYaxis()->SetTitleOffset(0.6); hRatio->GetXaxis()->SetTitleOffset(1.2);}
  else if(keyLabel0 == "MJJ") { maxValue = 5.6; hRatio->GetYaxis()->SetRangeUser(-1.0,maxValue); hRatio->GetYaxis()->SetTitleOffset(0.5); }
  else if(keyLabel0 == "DPHIJJ") { maxValue = 1.67; hRatio->GetYaxis()->SetRangeUser(0.23,maxValue); hRatio->GetYaxis()->SetTitleOffset(0.6); }
  hRatio->GetYaxis()->CenterTitle();
  hRatio->GetYaxis()->SetTitleSize(0.10);
  hRatio->GetYaxis()->SetLabelSize(0.12);
  } // End Pred2

  printf("Total yields: %f - %f - %f\n", hData->GetSumOfWeights(),hPred1->GetSumOfWeights(),hPred2->GetSumOfWeights());

  char CommandToExec[300];
  sprintf(CommandToExec,"mkdir -p plotsww");
  gSystem->Exec(CommandToExec);  

  TH1D* unfold = (TH1D*) hData->Clone("unfold");

  //TString outputName = Form("unf_WW%s_normalized%d",keyLabel0.Data(),isNormalized);
  TString outputName;
  if(!isNormalized)
	  outputName = Form("unf_WW%s",keyLabel0.Data());
  if(strcmp(outputName.Data(),"") != 0){
    TString myOutputFile;
    myOutputFile = Form("plotsww/%s.png",outputName.Data());
    c1->SaveAs(myOutputFile.Data());
    myOutputFile = Form("plotsww/%s.pdf",outputName.Data());
    c1->SaveAs(myOutputFile.Data());
    myOutputFile = Form("plotsww/%s.root",outputName.Data());
    TFile *outRoot = TFile::Open(myOutputFile.Data(),"recreate");
    outRoot->cd();
    unfold->Write();
    outRoot->Close();
  }
}
