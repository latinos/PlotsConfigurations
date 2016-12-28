
#include "tools.h"
#include <iostream>
#include <fstream>
#include <algorithm>

void drawThreeNuisances() {
  
  TFile* _file0 = new TFile("higgsCombineLH1D_CMS_fake_ele_stat_hww_combined.MultiDimFit.mH120.root","READ"); 
  TFile* _file1 = new TFile("higgsCombineLH1D_fake_syst_combined.MultiDimFit.mH120.root","READ"); 
  TFile* _file2 = new TFile("higgsCombineLH1D_CMS_idiso_ele_combined.MultiDimFit.mH120.root","READ"); 
  
  TTree* limit_0   = (TTree*) _file0->Get("limit");
  TTree* limit_1   = (TTree*) _file1->Get("limit");
  TTree* limit_2   = (TTree*) _file2->Get("limit");
  
  TCanvas *cc = new TCanvas("cc","",180,52,550,550);
  
  
  int n = 0;
  
  n = limit_0->Draw("2*deltaNLL:CMS_fake_ele_stat_hww","deltaNLL<100","goff");
  TGraph *graphScan_0 = new TGraph(n,limit_0->GetV2(),limit_0->GetV1());
  graphScan_0->RemovePoint(0);
  moveTGraph(graphScan_0); 
  graphScan_0->SetTitle("");
  graphScan_0->SetMarkerStyle(21);
  graphScan_0->SetLineStyle(1);
  graphScan_0->SetLineWidth(2);
  graphScan_0->SetMarkerColor(kBlue);
  graphScan_0->SetLineColor(kBlue);
  std::cout << " n = " << n << std::endl;
  
  
  n = limit_1->Draw("2*deltaNLL:fake_syst","deltaNLL<100","goff");
  TGraph *graphScan_1 = new TGraph(n,limit_1->GetV2(),limit_1->GetV1());
  graphScan_1->RemovePoint(0);
  moveTGraph(graphScan_1); 
  graphScan_1->SetTitle("");
  graphScan_1->SetMarkerStyle(21);
  graphScan_1->SetLineStyle(1);
  graphScan_1->SetLineWidth(2);
  graphScan_1->SetMarkerColor(kRed);
  graphScan_1->SetLineColor(kRed);
  std::cout << " n = " << n << std::endl;
  
  
  
  n = limit_2->Draw("2*deltaNLL:CMS_idiso_ele","deltaNLL<100","goff");
  TGraph *graphScan_2 = new TGraph(n,limit_2->GetV2(),limit_2->GetV1());
  graphScan_2->RemovePoint(0);
  moveTGraph(graphScan_2); 
  graphScan_2->SetTitle("");
  graphScan_2->SetMarkerStyle(21);
  graphScan_2->SetLineStyle(1);
  graphScan_2->SetLineWidth(2);
  graphScan_2->SetMarkerColor(kGreen);
  graphScan_2->SetLineColor(kGreen);
  std::cout << " n = " << n << std::endl;
  
  
  
  
  
  //----  draw
  cc->SetTicks();
  cc->SetFillColor(0);
  cc->SetBorderMode(0);
  cc->SetBorderSize(2);
  cc->SetTickx(1);
  cc->SetTicky(1);
  cc->SetRightMargin(0.05);
  cc->SetBottomMargin(0.12);
  cc->SetFrameBorderMode(0);
  
  TLatex * tex;
  tex = new TLatex(0.94,0.92,"13 TeV");
  tex->SetNDC();
  tex->SetTextAlign(31);
  tex->SetTextFont(42);
  tex->SetTextSize(0.04);
  tex->SetLineWidth(2);
  
  TLatex * tex2 = new TLatex(0.14,0.92,"CMS");
  tex2->SetNDC();
  tex2->SetTextFont(61);
  tex2->SetTextSize(0.04);
  tex2->SetLineWidth(2);
  
  TLatex * tex3;
  tex3 = new TLatex(0.236,0.92,"L = 12.9 fb^{-1}  Preliminary");
  tex3->SetNDC();
  tex3->SetTextFont(52);
  tex3->SetTextSize(0.035);
  tex3->SetLineWidth(2);
  
  
  TMultiGraph* mg = new TMultiGraph();
  
  mg->Add(graphScan_0);
  mg->Add(graphScan_1);
  mg->Add(graphScan_2);
  
  mg->Draw("al");
  mg->GetXaxis()->SetTitle("#theta");
  mg->GetYaxis()->SetTitle("- 2#Delta logL");
  
  mg->GetXaxis()->SetRangeUser(-3,3);
  mg->GetYaxis()->SetRangeUser(0,12);
  
  
  
  tex->Draw("same");
  tex2->Draw("same");
  tex3->Draw("same");
  
  //---- legend
  TLegend* leg;
  leg = new TLegend(0.1,0.7,0.48,0.9);
  leg->AddEntry(graphScan_0,"fake ele stat","l");                    
  leg->AddEntry(graphScan_1,"fake syst","l");                        
  leg->AddEntry(graphScan_2,"idiso ele","l");                        
  leg->SetFillColor(0);
  leg->Draw();
  
  
  //  2deltaLogL = 1.00
  //  2deltaLogL = 3.84
  gPad->SetGrid();
  
  
}

