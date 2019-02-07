//==============================================================
//     Macro for search for Z' ---> DM + h(ZZ) analysis        =  
//          Plot Mass4l at step 7 (4e + 4mu + 2e2mu)           = 
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
void Macro_Mass_step9_paperFinal(){
  //==================================================================
  THStack* hs           = new THStack("hs","");
  //==============================================================
  //
  //      Open root files for Bkgs, signals, data, Z+X
  //
  //==============================================================
  TFile *f1 = new TFile("Mass-Data-MCs-ZZto4l-AfterHiggsSelectionNew.root","READ");
  std::cout<<"File opened!"<<std::endl;
  //==============================================================
  //
  //                Call all combined histograms 
  //==============================================================
  TH1F* hhMassTTVGeV1          = (TH1F*) f1->Get("hMassTTVGeV");
  TH1F* hhMassZplusX_FR        = (TH1F*) f1->Get("h_MassZplusX_smoothed");
  TH1F* hhMassVVandVVV1        = (TH1F*) f1->Get("hMassVVandVVV");
  TH1F* hhMassHiggs1           = (TH1F*) f1->Get("hMassHiggs");
  TH1F* hhMassSignal_barionic  = (TH1F*) f1->Get("hMassSignal_barionic");
  TH1F* hhMassSignal_effTheory = (TH1F*) f1->Get("hMassSignal_effTheory");
  TH1F* hdataHistfinal1        = (TH1F*) f1->Get("dataHistfinal");
  TH1F* hhPreFitRatio          = (TH1F*) f1->Get("hDivideHisto");
  TGraphErrors* hRatio_Syst_band = (TGraphErrors*) f1->Get("Ratio_Syst_band");
  TGraphErrors* hSyst_band = (TGraphErrors*) f1->Get("Syst_Band");
  std::cout<<"Histograms loaded!"<<std::endl;

  //=========================================================================== 
  TCanvas *c1 = new TCanvas("c1","E1 [re-reco]",800,800);
  TStyle * style = getStyle("ZZ");
  style->cd();
  style->SetMarkerSize(0.8);
  float minY = 0.01;
  float maxY = 100000.0;

  float minX = 75.0;
  float maxX = 300.0;
  //==================================================================
  TPad *pad1 = new TPad("pad1", "pad1", 0, 0.28, 1.0, 1.0);
  pad1->SetBottomMargin(0.0); // Upper and lower plot are joined
  pad1->SetTopMargin(.098); // Upper and lower plot are joined
  // pad1->SetTickx(1);
  // pad1->SetTicky(1);
  pad1->SetLogx(0);
  pad1->SetLogy(1);
  pad1->SetGridx(0);
  pad1->SetGridy(0);
  pad1->Draw();             // Draw the upper pad: pad1
  pad1->cd();               // pad1 becomes the current pad
  //---------------------------------------------------------------------------------
  //
  //                                  Z+X (FR)
  //-------------------------------------------------------------------------------
  hhMassZplusX_FR->SetFillStyle(1001);
  hhMassZplusX_FR->SetLineStyle(0);
  hhMassZplusX_FR->SetLineColor(921);
  hhMassZplusX_FR->SetLineWidth(1);
  hhMassZplusX_FR->SetFillColor(921);
  //---------------------------------------------------------------------------------
  //
  //                                  VV + VVV
  //-------------------------------------------------------------------------------
  hhMassVVandVVV1->SetFillStyle(1001);
  hhMassVVandVVV1->SetLineStyle(0);
  hhMassVVandVVV1->SetLineColor(857);
  hhMassVVandVVV1->SetLineWidth(1);
  hhMassVVandVVV1->SetFillColor(857);
  //---------------------------------------------------------------------------------
  //
  //                                  Higgs 
  //-------------------------------------------------------------------------------
  hhMassHiggs1->SetFillStyle(1001);                    
  hhMassHiggs1->SetLineStyle(0);
  hhMassHiggs1->SetLineColor(632);
  hhMassHiggs1->SetLineWidth(1);
  hhMassHiggs1->SetFillColor(632);
  //---------------------------------------------------------------------------------
  //
  //                                  TTV
  //-------------------------------------------------------------------------------
  hhMassTTVGeV1->SetFillStyle(1001);
  hhMassTTVGeV1->SetLineStyle(0);
  hhMassTTVGeV1->SetLineColor(7);
  hhMassTTVGeV1->SetLineWidth(1);
  hhMassTTVGeV1->SetFillColor(7);
  //---------------------------------------------------------------------------------
  //
  //                                  Z' barionic
  //-------------------------------------------------------------------------------
  hhMassSignal_barionic->SetLineStyle(0);
  hhMassSignal_barionic->SetFillColor(0);
  hhMassSignal_barionic->SetLineColor(1);
  hhMassSignal_barionic->SetLineWidth(2);
  //---------------------------------------------------------------------------------
  //
  //                                  Z' effTheory
  //-------------------------------------------------------------------------------
  hhMassSignal_effTheory->SetLineStyle(0);
  hhMassSignal_effTheory->SetFillColor(0);
  hhMassSignal_effTheory->SetLineColor(801);
  hhMassSignal_effTheory->SetLineWidth(2);
  //==================================================================

  std::cout<<"Style set!"<<std::endl;

  hs->Add(hhMassTTVGeV1,"histo");
  hs->Add(hhMassZplusX_FR,"histo");    
  hs->Add(hhMassVVandVVV1,"histo");  
  hs->Add(hhMassHiggs1,"histo");  
  hs->Draw();

  std::cout<<"TStack created!"<<std::endl;

  hs->GetXaxis()->SetTitle("M(4mu) [GeV/c^{2}]");
  hs->GetYaxis()->SetTitle("Events / 4 GeV");
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
  //------------------------------------------------------------------
  //
  //                                  Data
  //------------------------------------------------------------------
  std::cout<<"Preparing Data..."<<std::endl;

  hdataHistfinal1->SetMarkerStyle(20);
  hdataHistfinal1->SetMarkerSize(1);
  hdataHistfinal1->SetLineColor(1);
  hdataHistfinal1->GetXaxis()->SetRange(5,83);
  hdataHistfinal1->GetXaxis()->SetTitleSize(0.047);
  hdataHistfinal1->GetXaxis()->SetTitleOffset(0.9);
  hdataHistfinal1->GetYaxis()->SetTitleSize(0.047);
  hdataHistfinal1->GetYaxis()->SetTitleOffset(1.2);
  hdataHistfinal1->Draw("PE1,sames");
  hdataHistfinal1->GetXaxis()->SetRangeUser(minX,maxX);

  std::cout<<"... and singal!"<<std::endl;

  hhMassSignal_effTheory->Draw("histo,sames");
  hhMassSignal_barionic->Draw("histo,sames");

  std::cout<<"Data are ready!"<<std::endl;

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
  leg->AddEntry(hhMassHiggs1,"h boson","f"); 
  leg->AddEntry(hhMassZplusX_FR,"Z+X","f");
  leg->AddEntry(hhMassVVandVVV1,"VV/VVV","f"); 
  leg->AddEntry(hhMassTTVGeV1,"t#bar{t}V","f");
  leg->AddEntry(hdataHistfinal1,"Data","lep");  
  leg->AddEntry(hRatio_Syst_band,"Systematic Uncertainty","f");   
  leg->SetFillColor(0);
  leg->SetTextFont(42);
  leg->SetTextSize(0.035);
  leg->SetLineColor(0);
  leg->SetShadowColor(0);
  leg->Draw(); 
  //===================================================================
  auto leg2 = new TLegend(0.20, 0.56, 0.55, 0.65);
  leg2->AddEntry(hhMassSignal_effTheory,"Z'-2HDM: m_{Z'} = 1200 GeV, m_{A} = 300 GeV, #sigma #times BR = 0.02 fb","l");
  leg2->AddEntry(hhMassSignal_barionic,"Baryonic Z': m_{Z'} = 500 GeV, m_{#chi} = 1 GeV, #sigma #times BR = 0.30 fb","l"); 
  leg2->SetFillColor(0);
  leg2->SetTextFont(42);
  leg2->SetTextSize(0.035);
  leg2->SetLineColor(0);
  leg2->SetShadowColor(0);
  leg2->Draw();   
  //==========================================================
  // TPaveText* tText1 = new TPaveText(0.51, 0.96, 1.05, 0.97, "brNDC");
  // tText1->SetBorderSize(0);
  // tText1->SetFillColor(0);
  // tText1->SetFillStyle(0);
  // TText *t1 = tText1->AddText("#bf{35.9 fb^{-1} (13 TeV)}");
  // tText1->SetTextFont(62);
  // tText1->SetTextSize(0.070);
  // tText1->Draw(); 
  // //+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
  // TPaveText* tText2 = new TPaveText(0.10, 0.96, 0.28, 0.97, "brNDC");
  // tText2->SetBorderSize(0);
  // tText2->SetFillColor(0);
  // tText2->SetFillStyle(0);
  // TText *t2 = tText2->AddText("CMS");
  // tText2->SetTextFont(61);
  // tText2->SetTextSize(0.070);
  // tText2->Draw();
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

  //+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
  //+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
  c1->cd();          // Go back to the main canvas before defining pad2
  TPad *pad2 = new TPad("pad2", "pad2", 0, 0.0, 1.0, 0.28);
  pad2->SetTopMargin(0);   //(10);
  pad2->SetBottomMargin(0.392);
  // pad2->SetRightMargin(0.05);
  // pad2->SetTickx(1);
  // pad2->SetTicky(1);
  pad2->SetLogx(0);
  pad2->SetLogy(0);
  pad2->SetGridx(0);
  pad2->SetGridy(0);
  pad2->Draw();
  pad2->cd();       // pad2 becomes the current pad
  //========================================================
  hRatio_Syst_band->Draw("a2");
  hRatio_Syst_band->GetXaxis()->SetTitle("m_{4l} [GeV]"); 
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
  hhPreFitRatio->SetMarkerSize(1);
  hhPreFitRatio->SetMarkerStyle(20);
  hhPreFitRatio->SetMarkerColor(1);
  hhPreFitRatio->SetMarkerSize(1);
  hhPreFitRatio->SetLineColor(1);
  hhPreFitRatio->GetXaxis()->SetRangeUser(minX,maxX);
  hhPreFitRatio->Draw("PZsames");
  //==========================================================
  double LikelihoodCut    = 1.0 ;
  TLine *line = new TLine( minX, LikelihoodCut ,maxX,  LikelihoodCut);
  line->SetLineColor(1);
  line->SetLineWidth(3);
  line->SetLineStyle(3);
  line->Draw();
  //==========================================================
  c1->Print("fig5_left_DM_Mass4l_HtoZZ_paper.png","png");
  c1->Print("fig5_left_DM_Mass4l_HtoZZ_paper.pdf","pdf");
  c1->Print("fig5_left_DM_Mass4l_HtoZZ_paper.eps","eps");
}
