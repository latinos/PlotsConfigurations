//==============================================================
//     Macro for search for Z' ---> DM + h(ZZ) analysis        =  
//          Plot PFMET at step 10 (4e + 4mu + 2e2mu)           = 
//                  Author:  Sherif Elgammal                   = 
//                       30/12/2018                            = 
//==============================================================
#include "ZZStyle.C"
#include <TFractionFitter.h>
#include <string>
#include <vector>
#include <sstream>
#include "TFile.h"
#include "TH1D.h"
#include "TROOT.h"
#include "TCanvas.h"
#include "TPaveLabel.h"
#include "TPaveStats.h"
#include "TLegend.h"
#include "TLegendEntry.h"
#include "TColor.h"
#include "TStyle.h"
#include "TGraphAsymmErrors.h"
#include "Math/QuantFuncMathCore.h"
#include "TF1.h"
using std::string;
void Macro_pfMet_step9_paperFinalFake(){
  /*gStyle->SetOptFit(kFALSE);
  gStyle->SetOptStat(kFALSE);
  gStyle->SetStatX(0.457589);
  gStyle->SetStatY(0.312937);
  gStyle->SetStatW(0.29241/2+0.0185);
  gStyle->SetStatH(0.169580+0.05);
  gStyle->SetStatFontSize(0.0402098);
  gStyle->SetStatFont(0.02);
  gStyle->SetFitFormat("5.2g");
  gStyle->SetStatBorderSize(0);
  gStyle->SetStatFontSize(0.040209);
  gStyle->SetStatFontSize(0.035209);*/
  //==================================================================
  THStack *hs = new THStack("hs","");
  //==============================================================  
  //
  //  Open root files for Bkgs, signals, data, Z+X and pre-fit
  //
  //==============================================================
  TFile* f1 = new TFile("PFMET-Data-MCs-ZZto4l-AfterHiggsSelectionFake.root","READ");
  //==============================================================
  //
  //                Call all combined histograms 
  //==============================================================
  TH1* hhistoTTV       = (TH1*) f1->Get("histoTTV");
  TH1* hhistoVVandVVV  = (TH1*) f1->Get("histoVVandVVV");
  TH1* hhistoZplusX_FR = (TH1*) f1->Get("histoZplusX_FR");
  TH1* hhistoHiggs     = (TH1*) f1->Get("histoHiggs");
  TH1* hhistoData      = (TH1*) f1->Get("histoData");
  TH1* hhPreFitRatio   = (TH1*) f1->Get("hPreFitRatio");
  TH1* hhistoSignal_effTheory = (TH1*) f1->Get("histoSignal_effTheory");
  TH1* hhistoSignal_barionic  = (TH1*) f1->Get("histoSignal_barionic");
  TGraphErrors* hSyst_band       = (TGraphErrors*) f1->Get("Syst_band");
  TGraphErrors* hRatio_Syst_band = (TGraphErrors*) f1->Get("Ratio_Syst_band");
  //==================================================================
  //==================================================================
  //==================================================================
  //==================================================================
  //==================================================================
  //================================================================== 
  //==================================================================
  TCanvas *c1 = new TCanvas("c1","PFMET at Step 10",800,800);
  TStyle * style = getStyle("ZZ");
  style->cd();
  // style->SetNdivisions(10, "X");
  // style->SetNdivisions(10, "Y");
  style->SetMarkerSize(0.8);
  // c1->SetFillColor(0);
  // c1->SetBorderMode(0);
  // c1->SetBorderSize(2);
  // c1->SetLogx(0);
  // c1->SetLogy(1);
  // c1->SetTickx(1);
  // c1->SetTicky(1);
  // c1->SetLeftMargin(0.13);
  // c1->SetRightMargin(0.07);
  // c1->SetFrameBorderMode(0);
  // c1->SetFrameBorderMode(0);
  // c1->SetTopMargin(0.085);
  // c1->SetBottomMargin(0.11);
  float minX = 3.75; 
  float maxX = 1000.0; 
  float minY = 0.002;
  float maxY = 100000000.0;
  float binWidthNorm=-1;
  // Upper plot will be in pad1
  TPad *pad1 = new TPad("pad1", "pad1", 0, 0.28, 1.0, 1.0);
  pad1->SetBottomMargin(0.0); // Upper and lower plot are joined
  pad1->SetTopMargin(.098);  // Upper and lower plot are joined
  // pad1->SetTickx(1);
  // pad1->SetTicky(1);
  pad1->SetLogx(1);
  pad1->SetLogy(1);
  pad1->SetGridx(0);
  pad1->SetGridy(0);
  pad1->Draw();             
  pad1->cd();               
  //------------------------------------------------------------------
  //
  //                             VV + VVV
  //------------------------------------------------------------------  
  hhistoVVandVVV->SetFillStyle(1001);
  hhistoVVandVVV->SetLineStyle(0);
  hhistoVVandVVV->SetLineColor(857);
  hhistoVVandVVV->SetLineWidth(1);
  hhistoVVandVVV->SetFillColor(857);
  //------------------------------------------------------------------
  //
  //                             TTV
  //------------------------------------------------------------------
  hhistoTTV->SetFillStyle(1001);
  hhistoTTV->SetLineStyle(0);
  hhistoTTV->SetLineColor(7);
  hhistoTTV->SetLineWidth(1);
  hhistoTTV->SetFillColor(7);
  //------------------------------------------------------------------
  //
  //                             Higgs 
  //------------------------------------------------------------------
  hhistoHiggs->SetFillStyle(1001);
  hhistoHiggs->SetLineStyle(0);
  hhistoHiggs->SetLineColor(632);
  hhistoHiggs->SetLineWidth(1);
  hhistoHiggs->SetFillColor(632);
  //------------------------------------------------------------------
  //
  //                             Signal Z' barionic
  //------------------------------------------------------------------
  hhistoSignal_barionic->SetLineStyle(0);
  hhistoSignal_barionic->SetFillColor(0);
  hhistoSignal_barionic->SetLineColor(1);
  hhistoSignal_barionic->SetLineWidth(2);
  //------------------------------------------------------------------
  //
  //                             Signal eff. theory
  //------------------------------------------------------------------
  hhistoSignal_effTheory->SetLineStyle(0);
  hhistoSignal_effTheory->SetFillColor(0);
  hhistoSignal_effTheory->SetLineColor(801);
  hhistoSignal_effTheory->SetLineWidth(2);
  //------------------------------------------------------------------
  //
  //                             Z + X data (4e+4mu+2e2mu)
  //------------------------------------------------------------------
  hhistoZplusX_FR->SetFillStyle(1001);
  hhistoZplusX_FR->SetLineStyle(0);
  hhistoZplusX_FR->SetLineColor(921);
  hhistoZplusX_FR->SetLineWidth(1);
  hhistoZplusX_FR->SetFillColor(921);
  //==================================================================
  hs->Add(hhistoTTV,"histo");
  hs->Add(hhistoZplusX_FR,"histo");
  hs->Add(hhistoVVandVVV,"histo");
  hs->Add(hhistoHiggs,"histo"); 
  hs->Draw();
  hs->GetXaxis()->SetTitle("M(4mu) [GeV/c^{2}]");
  hs->GetYaxis()->SetTitle("Events / Bin");
  hs->GetXaxis()->SetLabelFont(42);
  hs->GetXaxis()->SetLabelOffset(0.01);
  hs->GetXaxis()->SetLabelSize(0.12);
  hs->GetXaxis()->SetNdivisions(404);
  hs->GetXaxis()->SetTitleFont(42);
  hs->GetXaxis()->SetTitleOffset(1.1);
  hs->GetXaxis()->SetTitleSize(0.14);
  hs->GetXaxis()->SetTickLength(0.0);
  hs->GetXaxis()->SetRangeUser(minX,maxX);
  hs->GetYaxis()->SetLabelFont(42);
  hs->GetYaxis()->SetLabelOffset(0.01);
  hs->GetYaxis()->SetLabelSize(0.05);
  hs->GetYaxis()->SetNdivisions(510);
  hs->GetYaxis()->SetTitleFont(42);
  hs->GetYaxis()->SetTitleOffset(1.2);
  hs->GetYaxis()->SetTitleSize(0.06);
  hs->SetMinimum(minY); 
  hs->SetMaximum(maxY);
  //---------------------------------------------------------------
  //
  //                                  Data
  //---------------------------------------------------------------
  hhistoData->SetMarkerStyle(20);
  hhistoData->SetMarkerSize(1.0);
  hhistoData->SetLineColor(1);
  hhistoData->GetXaxis()->SetRange(5,83);
  hhistoData->GetXaxis()->SetTitleSize(0.047);
  hhistoData->GetXaxis()->SetTitleOffset(0.9);
  hhistoData->GetYaxis()->SetTitleSize(0.047);
  hhistoData->GetYaxis()->SetTitleOffset(1.2);
  hhistoData->Draw("PE1,sames");
  hhistoData->GetXaxis()->SetRangeUser(minX,maxX);
  hhistoSignal_effTheory->Draw("same,histo");
  hhistoSignal_barionic->Draw("same,histo");
  //------------------------------------------------------------------
  //
  //                     Plot uncertainties on MCs
  //------------------------------------------------------------------
  hSyst_band->SetFillColor(1);
  hSyst_band->SetFillStyle(3004);
  hSyst_band->SetLineWidth(2);
  hSyst_band->Draw("e2same");
  //========================================================== 
  auto leg = new TLegend(0.20, 0.65, 0.90, 0.88);
  leg->SetHeader("#bf{Z' #rightarrow DM + h(ZZ)}");
  leg->SetNColumns(2);
  leg->AddEntry(hhistoHiggs,"h boson","f"); 
  leg->AddEntry(hhistoZplusX_FR,"Z+X","f");
  leg->AddEntry(hhistoVVandVVV,"VV/VVV","f"); 
  leg->AddEntry(hhistoTTV,"t#bar{t}V","f");
  leg->AddEntry(hhistoData,"Data","lep");  
  leg->AddEntry(hSyst_band,"Systematic Uncertainty","f");   
  leg->SetFillColor(0);
  leg->SetTextFont(42);
  leg->SetTextSize(0.035);
  leg->SetLineColor(0);
  leg->SetShadowColor(0);
  leg->Draw(); 
  //===============================================================
  auto leg2 = new TLegend(0.20, 0.56, 0.55, 0.65);
  leg2->AddEntry(hhistoSignal_effTheory,"Z'-2HDM: m_{Z'} = 1200 GeV, m_{A} = 300 GeV, #sigma #times BR = 0.02 fb","l");
  leg2->AddEntry(hhistoSignal_barionic,"Baryonic Z': m_{Z'} = 500 GeV, m_{#chi} = 1 GeV, #sigma #times BR = 0.30 fb","l"); 
  leg2->SetFillColor(0);
  leg2->SetTextFont(42);
  leg2->SetTextSize(0.035);
  leg2->SetLineColor(0);
  leg2->SetShadowColor(0);
  leg2->Draw();   
  //==========================================================
  // TPaveText* tText1 = new TPaveText(0.52, 0.96, 1.0, 0.97, "brNDC");
  // tText1->SetBorderSize(0);
  // tText1->SetFillColor(0);
  // tText1->SetFillStyle(0);
  // TText *t1 = tText1->AddText("#bf{35.9 fb^{-1} (13 TeV)}");
  // tText1->SetTextFont(62);
  // tText1->SetTextSize(0.070);
  // tText1->Draw(); 
  // //+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
  // TPaveText* tText2 = new TPaveText(0.12, 0.96, 0.28, 0.97, "brNDC");
  // tText2->SetBorderSize(0);
  // tText2->SetFillColor(0);
  // tText2->SetFillStyle(0);
  // TText *t2 = tText2->AddText("CMS");
  // tText2->SetTextFont(61);
  // tText2->SetTextSize(0.070);
  // //tText2->SetTextSize(0.95);
  // tText2->Draw();
  //+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

  //Moving to TLatex
  Float_t t = 0.07; //pad1->GetTopMargin();    //0.098
  Float_t l = pad1->GetLeftMargin();
  Float_t r = pad1->GetRightMargin();

  TLatex* tText1 = new TLatex();
  tText1->SetNDC();
  tText1->SetTextAngle(0);

  tText1->SetTextFont(61);
  tText1->SetTextAlign(11);
  tText1->SetTextSize(0.95*t);
  tText1->DrawLatex(l,1-t+0.2*t,"CMS");

  TLatex* tText2 = new TLatex();
  tText2->SetNDC();
  tText2->SetTextAngle(0);

  tText2->SetTextFont(42);
  tText2->SetTextAlign(31);
  tText2->SetTextSize(0.9*t);
  tText2->DrawLatex(1-r,1-t+0.2*t,"35.9 fb^{-1} (13 TeV)");

  //+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
  c1->cd(); // Go back to the main canvas before defining pad2
  //TPad *pad2 = new TPad("pad2", "pad2", 0, 0.0, 1.0, 0.25);
  TPad *pad2 = new TPad("pad2", "pad2", 0, 0.0, 1.0, 0.28);
  pad2->SetTopMargin(0);   //(10);
  pad2->SetBottomMargin(0.392);
  // pad2->SetRightMargin(0.05);
  // pad2->SetTickx(1);
  // pad2->SetTicky(1);
  pad2->SetLogx(1);
  pad2->SetLogy(0);
  pad2->SetGridx(0);
  pad2->SetGridy(0);
  pad2->Draw();
  pad2->cd();       // pad2 becomes the current pad
  //========================================================
  hRatio_Syst_band->SetFillColor(1);
  hRatio_Syst_band->SetFillStyle(3004);
  hRatio_Syst_band->Draw("a2");
  hRatio_Syst_band->GetXaxis()->SetTitle("p_{T}^{miss} [GeV]"); 
  hRatio_Syst_band->GetYaxis()->SetTitle("Data / MC");
  hRatio_Syst_band->GetXaxis()->SetLabelFont(42);
  hRatio_Syst_band->GetXaxis()->SetLabelOffset(0.01);
  hRatio_Syst_band->GetXaxis()->SetLabelSize(0.12);
  hRatio_Syst_band->GetXaxis()->SetNdivisions(404);
  hRatio_Syst_band->GetXaxis()->SetTitleFont(42);
  hRatio_Syst_band->GetXaxis()->SetTitleOffset(1.1);
  hRatio_Syst_band->GetXaxis()->SetTitleSize(0.14);
  hRatio_Syst_band->GetXaxis()->SetRangeUser(minX,maxX);
  hRatio_Syst_band->GetYaxis()->CenterTitle( );
  hRatio_Syst_band->GetYaxis()->SetLabelFont(42);
  hRatio_Syst_band->GetYaxis()->SetLabelOffset(0.02);
  hRatio_Syst_band->GetYaxis()->SetLabelSize(0.12);
  hRatio_Syst_band->GetYaxis()->SetNdivisions(505);
  hRatio_Syst_band->GetYaxis()->SetTitleFont(42);
  hRatio_Syst_band->GetYaxis()->SetTitleOffset(.48);
  hRatio_Syst_band->GetYaxis()->SetTitleSize(0.15);
  hRatio_Syst_band->GetYaxis()->SetRangeUser(0.5,1.5);
  hhPreFitRatio->SetMarkerSize(0);
  hhPreFitRatio->SetMarkerStyle(20);
  hhPreFitRatio->SetMarkerColor(1);
  hhPreFitRatio->SetLineColor(1);
  hhPreFitRatio->SetMarkerSize(1);
  hhPreFitRatio->GetXaxis()->SetRangeUser(minX,maxX);
  hhPreFitRatio->Draw("PZsames");
  //==========================================================
  //========================================================== 
  double LikelihoodCut    = 1.0 ;
  TLine *line = new TLine( 0.0, LikelihoodCut ,maxX,  LikelihoodCut);
  line->SetLineColor(1);
  line->SetLineWidth(3);
  line->SetLineStyle(3);
  line->Draw();
  //==========================================================
  c1->Print("fig5_right_DM_pfmet_HtoZZ_paper.png","png");
  c1->Print("fig5_right_DM_pfmet_HtoZZ_paper.pdf","pdf");
  c1->Print("fig5_right_DM_pfmet_HtoZZ_paper.eps","eps");
}


