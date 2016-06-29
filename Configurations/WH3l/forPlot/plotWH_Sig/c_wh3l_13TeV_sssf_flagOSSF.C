void c_wh3l_13TeV_sssf_flagOSSF()
{
//=========Macro generated from canvas: ccwh3l_13TeV_sssf_flagOSSF/cc
//=========  (Wed Jun 29 01:34:21 2016) by ROOT version6.02/13
   TCanvas *ccwh3l_13TeV_sssf_flagOSSF = new TCanvas("ccwh3l_13TeV_sssf_flagOSSF", "cc",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   ccwh3l_13TeV_sssf_flagOSSF->SetHighLightColor(2);
   ccwh3l_13TeV_sssf_flagOSSF->Range(-0.4,-1.574469,2.1,10.53683);
   ccwh3l_13TeV_sssf_flagOSSF->SetFillColor(0);
   ccwh3l_13TeV_sssf_flagOSSF->SetBorderMode(0);
   ccwh3l_13TeV_sssf_flagOSSF->SetBorderSize(2);
   ccwh3l_13TeV_sssf_flagOSSF->SetTickx(1);
   ccwh3l_13TeV_sssf_flagOSSF->SetTicky(1);
   ccwh3l_13TeV_sssf_flagOSSF->SetLeftMargin(0.16);
   ccwh3l_13TeV_sssf_flagOSSF->SetRightMargin(0.04);
   ccwh3l_13TeV_sssf_flagOSSF->SetTopMargin(0.05);
   ccwh3l_13TeV_sssf_flagOSSF->SetBottomMargin(0.13);
   ccwh3l_13TeV_sssf_flagOSSF->SetFrameFillStyle(0);
   ccwh3l_13TeV_sssf_flagOSSF->SetFrameBorderMode(0);
   ccwh3l_13TeV_sssf_flagOSSF->SetFrameFillStyle(0);
   ccwh3l_13TeV_sssf_flagOSSF->SetFrameBorderMode(0);
   
   TH1F *hframe611 = new TH1F("hframe611","",1000,0,2);
   hframe611->SetMinimum(0);
   hframe611->SetMaximum(9.931269);
   hframe611->SetDirectory(0);
   hframe611->SetStats(0);
   hframe611->SetLineStyle(0);
   hframe611->SetMarkerStyle(20);
   hframe611->GetXaxis()->SetTitle("flag OSSF");
   hframe611->GetXaxis()->SetNdivisions(506);
   hframe611->GetXaxis()->SetLabelFont(42);
   hframe611->GetXaxis()->SetLabelOffset(0.007);
   hframe611->GetXaxis()->SetLabelSize(0.05);
   hframe611->GetXaxis()->SetTitleSize(0.06);
   hframe611->GetXaxis()->SetTitleOffset(0.9);
   hframe611->GetXaxis()->SetTitleFont(42);
   hframe611->GetYaxis()->SetTitle("Events");
   hframe611->GetYaxis()->SetLabelFont(42);
   hframe611->GetYaxis()->SetLabelOffset(0.007);
   hframe611->GetYaxis()->SetLabelSize(0.05);
   hframe611->GetYaxis()->SetTitleSize(0.06);
   hframe611->GetYaxis()->SetTitleOffset(1.25);
   hframe611->GetYaxis()->SetTitleFont(42);
   hframe611->GetZaxis()->SetLabelFont(42);
   hframe611->GetZaxis()->SetLabelOffset(0.007);
   hframe611->GetZaxis()->SetLabelSize(0.05);
   hframe611->GetZaxis()->SetTitleSize(0.06);
   hframe611->GetZaxis()->SetTitleFont(42);
   hframe611->Draw(" ");
   
   THStack *thsBackground_grouped_wh3l_13TeV_sssf_flagOSSF = new THStack();
   thsBackground_grouped_wh3l_13TeV_sssf_flagOSSF->SetName("thsBackground_grouped_wh3l_13TeV_sssf_flagOSSF");
   thsBackground_grouped_wh3l_13TeV_sssf_flagOSSF->SetTitle("thsBackground_grouped_wh3l_13TeV_sssf_flagOSSF");
   
   TH1F *thsBackground_grouped_wh3l_13TeV_sssf_flagOSSF_stack_123 = new TH1F("thsBackground_grouped_wh3l_13TeV_sssf_flagOSSF_stack_123","thsBackground_grouped_wh3l_13TeV_sssf_flagOSSF",2,0,2);
   thsBackground_grouped_wh3l_13TeV_sssf_flagOSSF_stack_123->SetMinimum(0);
   thsBackground_grouped_wh3l_13TeV_sssf_flagOSSF_stack_123->SetMaximum(4.473178);
   thsBackground_grouped_wh3l_13TeV_sssf_flagOSSF_stack_123->SetDirectory(0);
   thsBackground_grouped_wh3l_13TeV_sssf_flagOSSF_stack_123->SetStats(0);
   thsBackground_grouped_wh3l_13TeV_sssf_flagOSSF_stack_123->SetLineStyle(0);
   thsBackground_grouped_wh3l_13TeV_sssf_flagOSSF_stack_123->SetMarkerStyle(20);
   thsBackground_grouped_wh3l_13TeV_sssf_flagOSSF_stack_123->GetXaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_13TeV_sssf_flagOSSF_stack_123->GetXaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_13TeV_sssf_flagOSSF_stack_123->GetXaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_13TeV_sssf_flagOSSF_stack_123->GetXaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_13TeV_sssf_flagOSSF_stack_123->GetXaxis()->SetTitleOffset(0.9);
   thsBackground_grouped_wh3l_13TeV_sssf_flagOSSF_stack_123->GetXaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_sssf_flagOSSF_stack_123->GetYaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_13TeV_sssf_flagOSSF_stack_123->GetYaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_13TeV_sssf_flagOSSF_stack_123->GetYaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_13TeV_sssf_flagOSSF_stack_123->GetYaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_13TeV_sssf_flagOSSF_stack_123->GetYaxis()->SetTitleOffset(1.25);
   thsBackground_grouped_wh3l_13TeV_sssf_flagOSSF_stack_123->GetYaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_sssf_flagOSSF_stack_123->GetZaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_13TeV_sssf_flagOSSF_stack_123->GetZaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_13TeV_sssf_flagOSSF_stack_123->GetZaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_13TeV_sssf_flagOSSF_stack_123->GetZaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_13TeV_sssf_flagOSSF_stack_123->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_sssf_flagOSSF->SetHistogram(thsBackground_grouped_wh3l_13TeV_sssf_flagOSSF_stack_123);
   
   
   TH1D *new_histo_group_Fake_wh3l_13TeV_sssf_flagOSSF612 = new TH1D("new_histo_group_Fake_wh3l_13TeV_sssf_flagOSSF612","histo_Fake",2,0,2);
   new_histo_group_Fake_wh3l_13TeV_sssf_flagOSSF612->SetBinContent(1,2.90203);
   new_histo_group_Fake_wh3l_13TeV_sssf_flagOSSF612->SetBinError(1,1.358139);
   new_histo_group_Fake_wh3l_13TeV_sssf_flagOSSF612->SetEntries(34);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_13TeV_sssf_flagOSSF612->SetFillColor(ci);
   new_histo_group_Fake_wh3l_13TeV_sssf_flagOSSF612->SetFillStyle(3001);

   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_13TeV_sssf_flagOSSF612->SetLineColor(ci);
   new_histo_group_Fake_wh3l_13TeV_sssf_flagOSSF612->GetXaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_13TeV_sssf_flagOSSF612->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_13TeV_sssf_flagOSSF612->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_13TeV_sssf_flagOSSF612->GetXaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_13TeV_sssf_flagOSSF612->GetYaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_13TeV_sssf_flagOSSF612->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_13TeV_sssf_flagOSSF612->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_13TeV_sssf_flagOSSF612->GetYaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_13TeV_sssf_flagOSSF612->GetZaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_13TeV_sssf_flagOSSF612->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_13TeV_sssf_flagOSSF612->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_13TeV_sssf_flagOSSF612->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_sssf_flagOSSF->Add(new_histo_group_Fake_wh3l_13TeV_sssf_flagOSSF,"");
   
   TH1D *new_histo_group_WW_wh3l_13TeV_sssf_flagOSSF613 = new TH1D("new_histo_group_WW_wh3l_13TeV_sssf_flagOSSF613","histo_WW",2,0,2);
   new_histo_group_WW_wh3l_13TeV_sssf_flagOSSF613->SetBinContent(1,0.02651546);
   new_histo_group_WW_wh3l_13TeV_sssf_flagOSSF613->SetBinError(1,0.01918247);
   new_histo_group_WW_wh3l_13TeV_sssf_flagOSSF613->SetEntries(2);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_13TeV_sssf_flagOSSF613->SetFillColor(ci);
   new_histo_group_WW_wh3l_13TeV_sssf_flagOSSF613->SetFillStyle(3001);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_13TeV_sssf_flagOSSF613->SetLineColor(ci);
   new_histo_group_WW_wh3l_13TeV_sssf_flagOSSF613->GetXaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_13TeV_sssf_flagOSSF613->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_13TeV_sssf_flagOSSF613->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_13TeV_sssf_flagOSSF613->GetXaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_13TeV_sssf_flagOSSF613->GetYaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_13TeV_sssf_flagOSSF613->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_13TeV_sssf_flagOSSF613->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_13TeV_sssf_flagOSSF613->GetYaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_13TeV_sssf_flagOSSF613->GetZaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_13TeV_sssf_flagOSSF613->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_13TeV_sssf_flagOSSF613->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_13TeV_sssf_flagOSSF613->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_sssf_flagOSSF->Add(new_histo_group_WW_wh3l_13TeV_sssf_flagOSSF,"");
   
   TH1D *new_histo_group_VVV_wh3l_13TeV_sssf_flagOSSF614 = new TH1D("new_histo_group_VVV_wh3l_13TeV_sssf_flagOSSF614","histo_VVV",2,0,2);
   new_histo_group_VVV_wh3l_13TeV_sssf_flagOSSF614->SetBinContent(1,0.001327523);
   new_histo_group_VVV_wh3l_13TeV_sssf_flagOSSF614->SetBinError(1,0.0009526094);
   new_histo_group_VVV_wh3l_13TeV_sssf_flagOSSF614->SetEntries(2);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_13TeV_sssf_flagOSSF614->SetFillColor(ci);
   new_histo_group_VVV_wh3l_13TeV_sssf_flagOSSF614->SetFillStyle(3001);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_13TeV_sssf_flagOSSF614->SetLineColor(ci);
   new_histo_group_VVV_wh3l_13TeV_sssf_flagOSSF614->GetXaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_13TeV_sssf_flagOSSF614->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_13TeV_sssf_flagOSSF614->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_13TeV_sssf_flagOSSF614->GetXaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_13TeV_sssf_flagOSSF614->GetYaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_13TeV_sssf_flagOSSF614->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_13TeV_sssf_flagOSSF614->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_13TeV_sssf_flagOSSF614->GetYaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_13TeV_sssf_flagOSSF614->GetZaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_13TeV_sssf_flagOSSF614->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_13TeV_sssf_flagOSSF614->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_13TeV_sssf_flagOSSF614->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_sssf_flagOSSF->Add(new_histo_group_VVV_wh3l_13TeV_sssf_flagOSSF,"");
   
   TH1D *new_histo_group_Vg_wh3l_13TeV_sssf_flagOSSF615 = new TH1D("new_histo_group_Vg_wh3l_13TeV_sssf_flagOSSF615","histo_Vg",2,0,2);
   new_histo_group_Vg_wh3l_13TeV_sssf_flagOSSF615->SetBinContent(1,0.0522728);
   new_histo_group_Vg_wh3l_13TeV_sssf_flagOSSF615->SetBinError(1,0.0522728);
   new_histo_group_Vg_wh3l_13TeV_sssf_flagOSSF615->SetEntries(1);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_13TeV_sssf_flagOSSF615->SetFillColor(ci);
   new_histo_group_Vg_wh3l_13TeV_sssf_flagOSSF615->SetFillStyle(3001);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_13TeV_sssf_flagOSSF615->SetLineColor(ci);
   new_histo_group_Vg_wh3l_13TeV_sssf_flagOSSF615->GetXaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_13TeV_sssf_flagOSSF615->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_13TeV_sssf_flagOSSF615->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_13TeV_sssf_flagOSSF615->GetXaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_13TeV_sssf_flagOSSF615->GetYaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_13TeV_sssf_flagOSSF615->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_13TeV_sssf_flagOSSF615->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_13TeV_sssf_flagOSSF615->GetYaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_13TeV_sssf_flagOSSF615->GetZaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_13TeV_sssf_flagOSSF615->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_13TeV_sssf_flagOSSF615->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_13TeV_sssf_flagOSSF615->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_sssf_flagOSSF->Add(new_histo_group_Vg_wh3l_13TeV_sssf_flagOSSF,"");
   
   TH1D *new_histo_group_ZZ_wh3l_13TeV_sssf_flagOSSF616 = new TH1D("new_histo_group_ZZ_wh3l_13TeV_sssf_flagOSSF616","histo_ZZ",2,0,2);
   new_histo_group_ZZ_wh3l_13TeV_sssf_flagOSSF616->SetBinContent(1,0.07785033);
   new_histo_group_ZZ_wh3l_13TeV_sssf_flagOSSF616->SetBinError(1,0.05530859);
   new_histo_group_ZZ_wh3l_13TeV_sssf_flagOSSF616->SetEntries(2);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_13TeV_sssf_flagOSSF616->SetFillColor(ci);
   new_histo_group_ZZ_wh3l_13TeV_sssf_flagOSSF616->SetFillStyle(3001);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_13TeV_sssf_flagOSSF616->SetLineColor(ci);
   new_histo_group_ZZ_wh3l_13TeV_sssf_flagOSSF616->GetXaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_13TeV_sssf_flagOSSF616->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_13TeV_sssf_flagOSSF616->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_13TeV_sssf_flagOSSF616->GetXaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_13TeV_sssf_flagOSSF616->GetYaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_13TeV_sssf_flagOSSF616->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_13TeV_sssf_flagOSSF616->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_13TeV_sssf_flagOSSF616->GetYaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_13TeV_sssf_flagOSSF616->GetZaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_13TeV_sssf_flagOSSF616->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_13TeV_sssf_flagOSSF616->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_13TeV_sssf_flagOSSF616->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_sssf_flagOSSF->Add(new_histo_group_ZZ_wh3l_13TeV_sssf_flagOSSF,"");
   
   TH1D *new_histo_group_WZ_wh3l_13TeV_sssf_flagOSSF617 = new TH1D("new_histo_group_WZ_wh3l_13TeV_sssf_flagOSSF617","histo_WZ",2,0,2);
   new_histo_group_WZ_wh3l_13TeV_sssf_flagOSSF617->SetBinContent(1,0.6226629);
   new_histo_group_WZ_wh3l_13TeV_sssf_flagOSSF617->SetBinError(1,0.05775432);
   new_histo_group_WZ_wh3l_13TeV_sssf_flagOSSF617->SetEntries(128);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_13TeV_sssf_flagOSSF617->SetFillColor(ci);
   new_histo_group_WZ_wh3l_13TeV_sssf_flagOSSF617->SetFillStyle(3001);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_13TeV_sssf_flagOSSF617->SetLineColor(ci);
   new_histo_group_WZ_wh3l_13TeV_sssf_flagOSSF617->GetXaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_13TeV_sssf_flagOSSF617->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_13TeV_sssf_flagOSSF617->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_13TeV_sssf_flagOSSF617->GetXaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_13TeV_sssf_flagOSSF617->GetYaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_13TeV_sssf_flagOSSF617->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_13TeV_sssf_flagOSSF617->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_13TeV_sssf_flagOSSF617->GetYaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_13TeV_sssf_flagOSSF617->GetZaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_13TeV_sssf_flagOSSF617->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_13TeV_sssf_flagOSSF617->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_13TeV_sssf_flagOSSF617->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_sssf_flagOSSF->Add(new_histo_group_WZ_wh3l_13TeV_sssf_flagOSSF,"");
   
   TH1D *new_histo_group_Higgs_wh3l_13TeV_sssf_flagOSSF618 = new TH1D("new_histo_group_Higgs_wh3l_13TeV_sssf_flagOSSF618","histo_H_htt",2,0,2);
   new_histo_group_Higgs_wh3l_13TeV_sssf_flagOSSF618->SetBinContent(1,0.2898486);
   new_histo_group_Higgs_wh3l_13TeV_sssf_flagOSSF618->SetBinError(1,0.01780572);
   new_histo_group_Higgs_wh3l_13TeV_sssf_flagOSSF618->SetEntries(522);
   new_histo_group_Higgs_wh3l_13TeV_sssf_flagOSSF618->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_13TeV_sssf_flagOSSF618->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_13TeV_sssf_flagOSSF618->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_13TeV_sssf_flagOSSF618->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_13TeV_sssf_flagOSSF618->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_sssf_flagOSSF618->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_sssf_flagOSSF618->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_13TeV_sssf_flagOSSF618->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_13TeV_sssf_flagOSSF618->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_sssf_flagOSSF618->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_sssf_flagOSSF618->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_13TeV_sssf_flagOSSF618->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_13TeV_sssf_flagOSSF618->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_sssf_flagOSSF618->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_sssf_flagOSSF618->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_sssf_flagOSSF->Add(new_histo_group_Higgs_wh3l_13TeV_sssf_flagOSSF,"");
   thsBackground_grouped_wh3l_13TeV_sssf_flagOSSF->Draw("hist same");
   
   thsSignal_grouped_wh3l_13TeV_sssf_flagOSSF = new THStack();
   thsSignal_grouped_wh3l_13TeV_sssf_flagOSSF->SetName("thsSignal_grouped_wh3l_13TeV_sssf_flagOSSF");
   thsSignal_grouped_wh3l_13TeV_sssf_flagOSSF->SetTitle("thsSignal_grouped_wh3l_13TeV_sssf_flagOSSF");
   
   TH1F *thsSignal_grouped_wh3l_13TeV_sssf_flagOSSF_stack_124 = new TH1F("thsSignal_grouped_wh3l_13TeV_sssf_flagOSSF_stack_124","thsSignal_grouped_wh3l_13TeV_sssf_flagOSSF",2,0,2);
   thsSignal_grouped_wh3l_13TeV_sssf_flagOSSF_stack_124->SetMinimum(0);
   thsSignal_grouped_wh3l_13TeV_sssf_flagOSSF_stack_124->SetMaximum(0.323037);
   thsSignal_grouped_wh3l_13TeV_sssf_flagOSSF_stack_124->SetDirectory(0);
   thsSignal_grouped_wh3l_13TeV_sssf_flagOSSF_stack_124->SetStats(0);
   thsSignal_grouped_wh3l_13TeV_sssf_flagOSSF_stack_124->SetLineStyle(0);
   thsSignal_grouped_wh3l_13TeV_sssf_flagOSSF_stack_124->SetMarkerStyle(20);
   thsSignal_grouped_wh3l_13TeV_sssf_flagOSSF_stack_124->GetXaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_13TeV_sssf_flagOSSF_stack_124->GetXaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_13TeV_sssf_flagOSSF_stack_124->GetXaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_13TeV_sssf_flagOSSF_stack_124->GetXaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_13TeV_sssf_flagOSSF_stack_124->GetXaxis()->SetTitleOffset(0.9);
   thsSignal_grouped_wh3l_13TeV_sssf_flagOSSF_stack_124->GetXaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_13TeV_sssf_flagOSSF_stack_124->GetYaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_13TeV_sssf_flagOSSF_stack_124->GetYaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_13TeV_sssf_flagOSSF_stack_124->GetYaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_13TeV_sssf_flagOSSF_stack_124->GetYaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_13TeV_sssf_flagOSSF_stack_124->GetYaxis()->SetTitleOffset(1.25);
   thsSignal_grouped_wh3l_13TeV_sssf_flagOSSF_stack_124->GetYaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_13TeV_sssf_flagOSSF_stack_124->GetZaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_13TeV_sssf_flagOSSF_stack_124->GetZaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_13TeV_sssf_flagOSSF_stack_124->GetZaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_13TeV_sssf_flagOSSF_stack_124->GetZaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_13TeV_sssf_flagOSSF_stack_124->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_13TeV_sssf_flagOSSF->SetHistogram(thsSignal_grouped_wh3l_13TeV_sssf_flagOSSF_stack_124);
   
   
   TH1D *new_histo_group_Higgs_wh3l_13TeV_sssf_flagOSSF619 = new TH1D("new_histo_group_Higgs_wh3l_13TeV_sssf_flagOSSF619","histo_H_htt",2,0,2);
   new_histo_group_Higgs_wh3l_13TeV_sssf_flagOSSF619->SetBinContent(1,0.2898486);
   new_histo_group_Higgs_wh3l_13TeV_sssf_flagOSSF619->SetBinError(1,0.01780572);
   new_histo_group_Higgs_wh3l_13TeV_sssf_flagOSSF619->SetEntries(522);
   new_histo_group_Higgs_wh3l_13TeV_sssf_flagOSSF619->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_13TeV_sssf_flagOSSF619->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_13TeV_sssf_flagOSSF619->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_13TeV_sssf_flagOSSF619->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_13TeV_sssf_flagOSSF619->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_sssf_flagOSSF619->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_sssf_flagOSSF619->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_13TeV_sssf_flagOSSF619->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_13TeV_sssf_flagOSSF619->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_sssf_flagOSSF619->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_sssf_flagOSSF619->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_13TeV_sssf_flagOSSF619->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_13TeV_sssf_flagOSSF619->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_sssf_flagOSSF619->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_sssf_flagOSSF619->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_13TeV_sssf_flagOSSF->Add(new_histo_group_Higgs_wh3l_13TeV_sssf_flagOSSF,"");
   thsSignal_grouped_wh3l_13TeV_sssf_flagOSSF->Draw("hist same noclear");
   
   Double_t _fx3123[2] = {
   0.5,
   1.5};
   Double_t _fy3123[2] = {
   3.682659,
   0};
   Double_t _felx3123[2] = {
   0.5,
   0.5};
   Double_t _fely3123[2] = {
   1.84803,
   0};
   Double_t _fehx3123[2] = {
   0.5,
   0.5};
   Double_t _fehy3123[2] = {
   1.847996,
   0};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(2,_fx3123,_fy3123,_felx3123,_fehx3123,_fely3123,_fehy3123);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(12);
   grae->SetFillStyle(3004);
   grae->SetLineColor(12);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3123 = new TH1F("Graph_Graph3123","",100,0,2.2);
   Graph_Graph3123->SetMinimum(0);
   Graph_Graph3123->SetMaximum(6.083721);
   Graph_Graph3123->SetDirectory(0);
   Graph_Graph3123->SetStats(0);
   Graph_Graph3123->SetLineStyle(0);
   Graph_Graph3123->SetMarkerStyle(20);
   Graph_Graph3123->GetXaxis()->SetLabelFont(42);
   Graph_Graph3123->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3123->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3123->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3123->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3123->GetXaxis()->SetTitleFont(42);
   Graph_Graph3123->GetYaxis()->SetLabelFont(42);
   Graph_Graph3123->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3123->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3123->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3123->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3123->GetYaxis()->SetTitleFont(42);
   Graph_Graph3123->GetZaxis()->SetLabelFont(42);
   Graph_Graph3123->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3123->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3123->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3123->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3123);
   
   grae->Draw("2");
   
   Double_t _fx3124[2] = {
   0.5,
   1.5};
   Double_t _fy3124[2] = {
   0,
   0};
   Double_t _felx3124[2] = {
   0.5,
   0.5};
   Double_t _fely3124[2] = {
   0,
   0};
   Double_t _fehx3124[2] = {
   0.5,
   0.5};
   Double_t _fehy3124[2] = {
   1.147908,
   1.147908};
   grae = new TGraphAsymmErrors(2,_fx3124,_fy3124,_felx3124,_fehx3124,_fely3124,_fehy3124);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(1);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3124 = new TH1F("Graph_Graph3124","",100,0,2.2);
   Graph_Graph3124->SetMinimum(0);
   Graph_Graph3124->SetMaximum(1.262698);
   Graph_Graph3124->SetDirectory(0);
   Graph_Graph3124->SetStats(0);
   Graph_Graph3124->SetLineStyle(0);
   Graph_Graph3124->SetMarkerStyle(20);
   Graph_Graph3124->GetXaxis()->SetLabelFont(42);
   Graph_Graph3124->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3124->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3124->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3124->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3124->GetXaxis()->SetTitleFont(42);
   Graph_Graph3124->GetYaxis()->SetLabelFont(42);
   Graph_Graph3124->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3124->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3124->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3124->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3124->GetYaxis()->SetTitleFont(42);
   Graph_Graph3124->GetZaxis()->SetLabelFont(42);
   Graph_Graph3124->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3124->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3124->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3124->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3124);
   
   grae->Draw("p0");
   
   TLegend *leg = new TLegend(0.2,0.7,0.8,0.9,NULL,"brNDC");
   leg->SetTextFont(62);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("new_histo_group_Fake_wh3l_13TeV_sssf_flagOSSF","Fake","F");

   ci = TColor::GetColor("#999999");
   entry->SetFillColor(ci);
   entry->SetFillStyle(3001);

   ci = TColor::GetColor("#999999");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_group_WW_wh3l_13TeV_sssf_flagOSSF","WW","F");

   ci = TColor::GetColor("#99ccff");
   entry->SetFillColor(ci);
   entry->SetFillStyle(3001);

   ci = TColor::GetColor("#99ccff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_13TeV_sssf_flagOSSF","VVV","F");

   ci = TColor::GetColor("#0066ff");
   entry->SetFillColor(ci);
   entry->SetFillStyle(3001);

   ci = TColor::GetColor("#0066ff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_13TeV_sssf_flagOSSF","Zg","F");

   ci = TColor::GetColor("#0033cc");
   entry->SetFillColor(ci);
   entry->SetFillStyle(3001);

   ci = TColor::GetColor("#0033cc");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_13TeV_sssf_flagOSSF","ZZ","F");

   ci = TColor::GetColor("#cc00cc");
   entry->SetFillColor(ci);
   entry->SetFillStyle(3001);

   ci = TColor::GetColor("#cc00cc");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_13TeV_sssf_flagOSSF","WZ","F");

   ci = TColor::GetColor("#ffff00");
   entry->SetFillColor(ci);
   entry->SetFillStyle(3001);

   ci = TColor::GetColor("#ffff00");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_13TeV_sssf_flagOSSF","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_13TeV_sssf_flagOSSF","Data","EPL");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("","Systematics","F");
   entry->SetFillColor(12);
   entry->SetFillStyle(3004);
   entry->SetLineColor(12);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   leg->Draw();
   TLatex *   tex = new TLatex(0.96,0.96,"L = 2.3/fb (13 TeV)");
tex->SetNDC();
   tex->SetTextAlign(31);
   tex->SetTextFont(42);
   tex->SetTextSize(0.045);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.16,0.96,"CMS");
tex->SetNDC();
   tex->SetTextFont(61);
   tex->SetTextSize(0.0475);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.256,0.96,"Preliminary");
tex->SetNDC();
   tex->SetTextFont(52);
   tex->SetTextSize(0.0456);
   tex->SetLineWidth(2);
   tex->Draw();
   
   leg = new TLegend(0.2,0.7,0.8,0.9,NULL,"brNDC");
   leg->SetTextFont(62);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   entry=leg->AddEntry("new_histo_group_Fake_wh3l_13TeV_sssf_flagOSSF","Fake","F");

   ci = TColor::GetColor("#999999");
   entry->SetFillColor(ci);
   entry->SetFillStyle(3001);

   ci = TColor::GetColor("#999999");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_group_WW_wh3l_13TeV_sssf_flagOSSF","WW","F");

   ci = TColor::GetColor("#99ccff");
   entry->SetFillColor(ci);
   entry->SetFillStyle(3001);

   ci = TColor::GetColor("#99ccff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_13TeV_sssf_flagOSSF","VVV","F");

   ci = TColor::GetColor("#0066ff");
   entry->SetFillColor(ci);
   entry->SetFillStyle(3001);

   ci = TColor::GetColor("#0066ff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_13TeV_sssf_flagOSSF","Zg","F");

   ci = TColor::GetColor("#0033cc");
   entry->SetFillColor(ci);
   entry->SetFillStyle(3001);

   ci = TColor::GetColor("#0033cc");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_13TeV_sssf_flagOSSF","ZZ","F");

   ci = TColor::GetColor("#cc00cc");
   entry->SetFillColor(ci);
   entry->SetFillStyle(3001);

   ci = TColor::GetColor("#cc00cc");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_13TeV_sssf_flagOSSF","WZ","F");

   ci = TColor::GetColor("#ffff00");
   entry->SetFillColor(ci);
   entry->SetFillStyle(3001);

   ci = TColor::GetColor("#ffff00");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_13TeV_sssf_flagOSSF","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_13TeV_sssf_flagOSSF","Data","EPL");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("","Systematics","F");
   entry->SetFillColor(12);
   entry->SetFillStyle(3004);
   entry->SetLineColor(12);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   leg->Draw();
   
   TH1F *hframe_copy620 = new TH1F("hframe_copy620","",1000,0,2);
   hframe_copy620->SetMinimum(0);
   hframe_copy620->SetMaximum(9.931269);
   hframe_copy620->SetDirectory(0);
   hframe_copy620->SetStats(0);
   hframe_copy620->SetLineStyle(0);
   hframe_copy620->SetMarkerStyle(20);
   hframe_copy620->GetXaxis()->SetTitle("flag OSSF");
   hframe_copy620->GetXaxis()->SetNdivisions(506);
   hframe_copy620->GetXaxis()->SetLabelFont(42);
   hframe_copy620->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy620->GetXaxis()->SetLabelSize(0.05);
   hframe_copy620->GetXaxis()->SetTitleSize(0.06);
   hframe_copy620->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy620->GetXaxis()->SetTitleFont(42);
   hframe_copy620->GetYaxis()->SetTitle("Events");
   hframe_copy620->GetYaxis()->SetLabelFont(42);
   hframe_copy620->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy620->GetYaxis()->SetLabelSize(0.05);
   hframe_copy620->GetYaxis()->SetTitleSize(0.06);
   hframe_copy620->GetYaxis()->SetTitleOffset(1.25);
   hframe_copy620->GetYaxis()->SetTitleFont(42);
   hframe_copy620->GetZaxis()->SetLabelFont(42);
   hframe_copy620->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy620->GetZaxis()->SetLabelSize(0.05);
   hframe_copy620->GetZaxis()->SetTitleSize(0.06);
   hframe_copy620->GetZaxis()->SetTitleFont(42);
   hframe_copy620->Draw("sameaxis");
   ccwh3l_13TeV_sssf_flagOSSF->Modified();
   ccwh3l_13TeV_sssf_flagOSSF->cd();
   ccwh3l_13TeV_sssf_flagOSSF->SetSelected(ccwh3l_13TeV_sssf_flagOSSF);
}
