void c_hww2l2v_13TeV_WW_0jmm_WWAccNum_events()
{
//=========Macro generated from canvas: cchww2l2v_13TeV_WW_0jmm_WWAccNum_events/cc
//=========  (Tue Mar 21 11:46:31 2017) by ROOT version6.02/13
   TCanvas *cchww2l2v_13TeV_WW_0jmm_WWAccNum_events = new TCanvas("cchww2l2v_13TeV_WW_0jmm_WWAccNum_events", "cc",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   cchww2l2v_13TeV_WW_0jmm_WWAccNum_events->SetHighLightColor(2);
   cchww2l2v_13TeV_WW_0jmm_WWAccNum_events->Range(-0.4,-6706.327,2.1,44880.81);
   cchww2l2v_13TeV_WW_0jmm_WWAccNum_events->SetFillColor(0);
   cchww2l2v_13TeV_WW_0jmm_WWAccNum_events->SetBorderMode(0);
   cchww2l2v_13TeV_WW_0jmm_WWAccNum_events->SetBorderSize(2);
   cchww2l2v_13TeV_WW_0jmm_WWAccNum_events->SetTickx(1);
   cchww2l2v_13TeV_WW_0jmm_WWAccNum_events->SetTicky(1);
   cchww2l2v_13TeV_WW_0jmm_WWAccNum_events->SetLeftMargin(0.16);
   cchww2l2v_13TeV_WW_0jmm_WWAccNum_events->SetRightMargin(0.04);
   cchww2l2v_13TeV_WW_0jmm_WWAccNum_events->SetTopMargin(0.05);
   cchww2l2v_13TeV_WW_0jmm_WWAccNum_events->SetBottomMargin(0.13);
   cchww2l2v_13TeV_WW_0jmm_WWAccNum_events->SetFrameFillStyle(0);
   cchww2l2v_13TeV_WW_0jmm_WWAccNum_events->SetFrameBorderMode(0);
   cchww2l2v_13TeV_WW_0jmm_WWAccNum_events->SetFrameFillStyle(0);
   cchww2l2v_13TeV_WW_0jmm_WWAccNum_events->SetFrameBorderMode(0);
   
   TH1F *hframe154 = new TH1F("hframe154","",1000,0,2);
   hframe154->SetMinimum(0);
   hframe154->SetMaximum(42301.45);
   hframe154->SetDirectory(0);
   hframe154->SetStats(0);
   hframe154->SetLineStyle(0);
   hframe154->SetMarkerStyle(20);
   hframe154->GetXaxis()->SetTitle("events");
   hframe154->GetXaxis()->SetNdivisions(506);
   hframe154->GetXaxis()->SetLabelFont(42);
   hframe154->GetXaxis()->SetLabelOffset(0.007);
   hframe154->GetXaxis()->SetLabelSize(0.05);
   hframe154->GetXaxis()->SetTitleSize(0.06);
   hframe154->GetXaxis()->SetTitleOffset(0.9);
   hframe154->GetXaxis()->SetTitleFont(42);
   hframe154->GetYaxis()->SetTitle("Events");
   hframe154->GetYaxis()->SetLabelFont(42);
   hframe154->GetYaxis()->SetLabelOffset(0.007);
   hframe154->GetYaxis()->SetLabelSize(0.05);
   hframe154->GetYaxis()->SetTitleSize(0.06);
   hframe154->GetYaxis()->SetTitleOffset(1.25);
   hframe154->GetYaxis()->SetTitleFont(42);
   hframe154->GetZaxis()->SetLabelFont(42);
   hframe154->GetZaxis()->SetLabelOffset(0.007);
   hframe154->GetZaxis()->SetLabelSize(0.05);
   hframe154->GetZaxis()->SetTitleSize(0.06);
   hframe154->GetZaxis()->SetTitleFont(42);
   hframe154->Draw(" ");
   
   THStack *thsBackground_grouped_hww2l2v_13TeV_WW_0jmm_WWAccNum_events = new THStack();
   thsBackground_grouped_hww2l2v_13TeV_WW_0jmm_WWAccNum_events->SetName("thsBackground_grouped_hww2l2v_13TeV_WW_0jmm_WWAccNum_events");
   thsBackground_grouped_hww2l2v_13TeV_WW_0jmm_WWAccNum_events->SetTitle("thsBackground_grouped_hww2l2v_13TeV_WW_0jmm_WWAccNum_events");
   
   TH1F *thsBackground_grouped_hww2l2v_13TeV_WW_0jmm_WWAccNum_events_stack_35 = new TH1F("thsBackground_grouped_hww2l2v_13TeV_WW_0jmm_WWAccNum_events_stack_35","thsBackground_grouped_hww2l2v_13TeV_WW_0jmm_WWAccNum_events",1,0,2);
   thsBackground_grouped_hww2l2v_13TeV_WW_0jmm_WWAccNum_events_stack_35->SetMinimum(0);
   thsBackground_grouped_hww2l2v_13TeV_WW_0jmm_WWAccNum_events_stack_35->SetMaximum(8294.2);
   thsBackground_grouped_hww2l2v_13TeV_WW_0jmm_WWAccNum_events_stack_35->SetDirectory(0);
   thsBackground_grouped_hww2l2v_13TeV_WW_0jmm_WWAccNum_events_stack_35->SetStats(0);
   thsBackground_grouped_hww2l2v_13TeV_WW_0jmm_WWAccNum_events_stack_35->SetLineStyle(0);
   thsBackground_grouped_hww2l2v_13TeV_WW_0jmm_WWAccNum_events_stack_35->SetMarkerStyle(20);
   thsBackground_grouped_hww2l2v_13TeV_WW_0jmm_WWAccNum_events_stack_35->GetXaxis()->SetLabelFont(42);
   thsBackground_grouped_hww2l2v_13TeV_WW_0jmm_WWAccNum_events_stack_35->GetXaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_hww2l2v_13TeV_WW_0jmm_WWAccNum_events_stack_35->GetXaxis()->SetLabelSize(0.05);
   thsBackground_grouped_hww2l2v_13TeV_WW_0jmm_WWAccNum_events_stack_35->GetXaxis()->SetTitleSize(0.06);
   thsBackground_grouped_hww2l2v_13TeV_WW_0jmm_WWAccNum_events_stack_35->GetXaxis()->SetTitleOffset(0.9);
   thsBackground_grouped_hww2l2v_13TeV_WW_0jmm_WWAccNum_events_stack_35->GetXaxis()->SetTitleFont(42);
   thsBackground_grouped_hww2l2v_13TeV_WW_0jmm_WWAccNum_events_stack_35->GetYaxis()->SetLabelFont(42);
   thsBackground_grouped_hww2l2v_13TeV_WW_0jmm_WWAccNum_events_stack_35->GetYaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_hww2l2v_13TeV_WW_0jmm_WWAccNum_events_stack_35->GetYaxis()->SetLabelSize(0.05);
   thsBackground_grouped_hww2l2v_13TeV_WW_0jmm_WWAccNum_events_stack_35->GetYaxis()->SetTitleSize(0.06);
   thsBackground_grouped_hww2l2v_13TeV_WW_0jmm_WWAccNum_events_stack_35->GetYaxis()->SetTitleOffset(1.25);
   thsBackground_grouped_hww2l2v_13TeV_WW_0jmm_WWAccNum_events_stack_35->GetYaxis()->SetTitleFont(42);
   thsBackground_grouped_hww2l2v_13TeV_WW_0jmm_WWAccNum_events_stack_35->GetZaxis()->SetLabelFont(42);
   thsBackground_grouped_hww2l2v_13TeV_WW_0jmm_WWAccNum_events_stack_35->GetZaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_hww2l2v_13TeV_WW_0jmm_WWAccNum_events_stack_35->GetZaxis()->SetLabelSize(0.05);
   thsBackground_grouped_hww2l2v_13TeV_WW_0jmm_WWAccNum_events_stack_35->GetZaxis()->SetTitleSize(0.06);
   thsBackground_grouped_hww2l2v_13TeV_WW_0jmm_WWAccNum_events_stack_35->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_hww2l2v_13TeV_WW_0jmm_WWAccNum_events->SetHistogram(thsBackground_grouped_hww2l2v_13TeV_WW_0jmm_WWAccNum_events_stack_35);
   
   
   TH1D *new_histo_group_DY_hww2l2v_13TeV_WW_0jmm_WWAccNum_events155 = new TH1D("new_histo_group_DY_hww2l2v_13TeV_WW_0jmm_WWAccNum_events155","histo_DY",1,0,2);
   new_histo_group_DY_hww2l2v_13TeV_WW_0jmm_WWAccNum_events155->SetBinContent(1,4460.201);
   new_histo_group_DY_hww2l2v_13TeV_WW_0jmm_WWAccNum_events155->SetBinError(1,148.0566);
   new_histo_group_DY_hww2l2v_13TeV_WW_0jmm_WWAccNum_events155->SetEntries(3454);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#009900");
   new_histo_group_DY_hww2l2v_13TeV_WW_0jmm_WWAccNum_events155->SetFillColor(ci);
   new_histo_group_DY_hww2l2v_13TeV_WW_0jmm_WWAccNum_events155->SetFillStyle(3001);

   ci = TColor::GetColor("#009900");
   new_histo_group_DY_hww2l2v_13TeV_WW_0jmm_WWAccNum_events155->SetLineColor(ci);
   new_histo_group_DY_hww2l2v_13TeV_WW_0jmm_WWAccNum_events155->GetXaxis()->SetLabelFont(42);
   new_histo_group_DY_hww2l2v_13TeV_WW_0jmm_WWAccNum_events155->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_DY_hww2l2v_13TeV_WW_0jmm_WWAccNum_events155->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_DY_hww2l2v_13TeV_WW_0jmm_WWAccNum_events155->GetXaxis()->SetTitleFont(42);
   new_histo_group_DY_hww2l2v_13TeV_WW_0jmm_WWAccNum_events155->GetYaxis()->SetLabelFont(42);
   new_histo_group_DY_hww2l2v_13TeV_WW_0jmm_WWAccNum_events155->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_DY_hww2l2v_13TeV_WW_0jmm_WWAccNum_events155->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_DY_hww2l2v_13TeV_WW_0jmm_WWAccNum_events155->GetYaxis()->SetTitleFont(42);
   new_histo_group_DY_hww2l2v_13TeV_WW_0jmm_WWAccNum_events155->GetZaxis()->SetLabelFont(42);
   new_histo_group_DY_hww2l2v_13TeV_WW_0jmm_WWAccNum_events155->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_DY_hww2l2v_13TeV_WW_0jmm_WWAccNum_events155->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_DY_hww2l2v_13TeV_WW_0jmm_WWAccNum_events155->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_hww2l2v_13TeV_WW_0jmm_WWAccNum_events->Add(new_histo_group_DY_hww2l2v_13TeV_WW_0jmm_WWAccNum_events,"");
   
   TH1D *new_histo_group_top_hww2l2v_13TeV_WW_0jmm_WWAccNum_events156 = new TH1D("new_histo_group_top_hww2l2v_13TeV_WW_0jmm_WWAccNum_events156","histo_top",1,0,2);
   new_histo_group_top_hww2l2v_13TeV_WW_0jmm_WWAccNum_events156->SetBinContent(1,678.5399);
   new_histo_group_top_hww2l2v_13TeV_WW_0jmm_WWAccNum_events156->SetBinError(1,5.412389);
   new_histo_group_top_hww2l2v_13TeV_WW_0jmm_WWAccNum_events156->SetEntries(17583);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_top_hww2l2v_13TeV_WW_0jmm_WWAccNum_events156->SetFillColor(ci);
   new_histo_group_top_hww2l2v_13TeV_WW_0jmm_WWAccNum_events156->SetFillStyle(3001);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_top_hww2l2v_13TeV_WW_0jmm_WWAccNum_events156->SetLineColor(ci);
   new_histo_group_top_hww2l2v_13TeV_WW_0jmm_WWAccNum_events156->GetXaxis()->SetLabelFont(42);
   new_histo_group_top_hww2l2v_13TeV_WW_0jmm_WWAccNum_events156->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_top_hww2l2v_13TeV_WW_0jmm_WWAccNum_events156->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_top_hww2l2v_13TeV_WW_0jmm_WWAccNum_events156->GetXaxis()->SetTitleFont(42);
   new_histo_group_top_hww2l2v_13TeV_WW_0jmm_WWAccNum_events156->GetYaxis()->SetLabelFont(42);
   new_histo_group_top_hww2l2v_13TeV_WW_0jmm_WWAccNum_events156->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_top_hww2l2v_13TeV_WW_0jmm_WWAccNum_events156->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_top_hww2l2v_13TeV_WW_0jmm_WWAccNum_events156->GetYaxis()->SetTitleFont(42);
   new_histo_group_top_hww2l2v_13TeV_WW_0jmm_WWAccNum_events156->GetZaxis()->SetLabelFont(42);
   new_histo_group_top_hww2l2v_13TeV_WW_0jmm_WWAccNum_events156->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_top_hww2l2v_13TeV_WW_0jmm_WWAccNum_events156->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_top_hww2l2v_13TeV_WW_0jmm_WWAccNum_events156->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_hww2l2v_13TeV_WW_0jmm_WWAccNum_events->Add(new_histo_group_top_hww2l2v_13TeV_WW_0jmm_WWAccNum_events,"");
   
   TH1D *new_histo_group_WW_hww2l2v_13TeV_WW_0jmm_WWAccNum_events157 = new TH1D("new_histo_group_WW_hww2l2v_13TeV_WW_0jmm_WWAccNum_events157","histo_WW",1,0,2);
   new_histo_group_WW_hww2l2v_13TeV_WW_0jmm_WWAccNum_events157->SetBinContent(1,2531.109);
   new_histo_group_WW_hww2l2v_13TeV_WW_0jmm_WWAccNum_events157->SetBinError(1,23.24268);
   new_histo_group_WW_hww2l2v_13TeV_WW_0jmm_WWAccNum_events157->SetEntries(15125);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_hww2l2v_13TeV_WW_0jmm_WWAccNum_events157->SetFillColor(ci);
   new_histo_group_WW_hww2l2v_13TeV_WW_0jmm_WWAccNum_events157->SetFillStyle(3001);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_hww2l2v_13TeV_WW_0jmm_WWAccNum_events157->SetLineColor(ci);
   new_histo_group_WW_hww2l2v_13TeV_WW_0jmm_WWAccNum_events157->GetXaxis()->SetLabelFont(42);
   new_histo_group_WW_hww2l2v_13TeV_WW_0jmm_WWAccNum_events157->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WW_hww2l2v_13TeV_WW_0jmm_WWAccNum_events157->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WW_hww2l2v_13TeV_WW_0jmm_WWAccNum_events157->GetXaxis()->SetTitleFont(42);
   new_histo_group_WW_hww2l2v_13TeV_WW_0jmm_WWAccNum_events157->GetYaxis()->SetLabelFont(42);
   new_histo_group_WW_hww2l2v_13TeV_WW_0jmm_WWAccNum_events157->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WW_hww2l2v_13TeV_WW_0jmm_WWAccNum_events157->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WW_hww2l2v_13TeV_WW_0jmm_WWAccNum_events157->GetYaxis()->SetTitleFont(42);
   new_histo_group_WW_hww2l2v_13TeV_WW_0jmm_WWAccNum_events157->GetZaxis()->SetLabelFont(42);
   new_histo_group_WW_hww2l2v_13TeV_WW_0jmm_WWAccNum_events157->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WW_hww2l2v_13TeV_WW_0jmm_WWAccNum_events157->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WW_hww2l2v_13TeV_WW_0jmm_WWAccNum_events157->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_hww2l2v_13TeV_WW_0jmm_WWAccNum_events->Add(new_histo_group_WW_hww2l2v_13TeV_WW_0jmm_WWAccNum_events,"");
   
   TH1D *new_histo_group_VVV_hww2l2v_13TeV_WW_0jmm_WWAccNum_events158 = new TH1D("new_histo_group_VVV_hww2l2v_13TeV_WW_0jmm_WWAccNum_events158","histo_VVV",1,0,2);
   new_histo_group_VVV_hww2l2v_13TeV_WW_0jmm_WWAccNum_events158->SetBinContent(1,3.169131);
   new_histo_group_VVV_hww2l2v_13TeV_WW_0jmm_WWAccNum_events158->SetBinError(1,0.3541647);
   new_histo_group_VVV_hww2l2v_13TeV_WW_0jmm_WWAccNum_events158->SetEntries(148);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_hww2l2v_13TeV_WW_0jmm_WWAccNum_events158->SetFillColor(ci);
   new_histo_group_VVV_hww2l2v_13TeV_WW_0jmm_WWAccNum_events158->SetFillStyle(3001);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_hww2l2v_13TeV_WW_0jmm_WWAccNum_events158->SetLineColor(ci);
   new_histo_group_VVV_hww2l2v_13TeV_WW_0jmm_WWAccNum_events158->GetXaxis()->SetLabelFont(42);
   new_histo_group_VVV_hww2l2v_13TeV_WW_0jmm_WWAccNum_events158->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_hww2l2v_13TeV_WW_0jmm_WWAccNum_events158->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_hww2l2v_13TeV_WW_0jmm_WWAccNum_events158->GetXaxis()->SetTitleFont(42);
   new_histo_group_VVV_hww2l2v_13TeV_WW_0jmm_WWAccNum_events158->GetYaxis()->SetLabelFont(42);
   new_histo_group_VVV_hww2l2v_13TeV_WW_0jmm_WWAccNum_events158->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_hww2l2v_13TeV_WW_0jmm_WWAccNum_events158->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_hww2l2v_13TeV_WW_0jmm_WWAccNum_events158->GetYaxis()->SetTitleFont(42);
   new_histo_group_VVV_hww2l2v_13TeV_WW_0jmm_WWAccNum_events158->GetZaxis()->SetLabelFont(42);
   new_histo_group_VVV_hww2l2v_13TeV_WW_0jmm_WWAccNum_events158->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_hww2l2v_13TeV_WW_0jmm_WWAccNum_events158->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_hww2l2v_13TeV_WW_0jmm_WWAccNum_events158->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_hww2l2v_13TeV_WW_0jmm_WWAccNum_events->Add(new_histo_group_VVV_hww2l2v_13TeV_WW_0jmm_WWAccNum_events,"");
   
   TH1D *new_histo_group_VZ_hww2l2v_13TeV_WW_0jmm_WWAccNum_events159 = new TH1D("new_histo_group_VZ_hww2l2v_13TeV_WW_0jmm_WWAccNum_events159","histo_Vg",1,0,2);
   new_histo_group_VZ_hww2l2v_13TeV_WW_0jmm_WWAccNum_events159->SetBinContent(1,223.7474);
   new_histo_group_VZ_hww2l2v_13TeV_WW_0jmm_WWAccNum_events159->SetBinError(1,51.37338);
   new_histo_group_VZ_hww2l2v_13TeV_WW_0jmm_WWAccNum_events159->SetEntries(24966);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_VZ_hww2l2v_13TeV_WW_0jmm_WWAccNum_events159->SetFillColor(ci);
   new_histo_group_VZ_hww2l2v_13TeV_WW_0jmm_WWAccNum_events159->SetFillStyle(3001);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_VZ_hww2l2v_13TeV_WW_0jmm_WWAccNum_events159->SetLineColor(ci);
   new_histo_group_VZ_hww2l2v_13TeV_WW_0jmm_WWAccNum_events159->GetXaxis()->SetLabelFont(42);
   new_histo_group_VZ_hww2l2v_13TeV_WW_0jmm_WWAccNum_events159->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_VZ_hww2l2v_13TeV_WW_0jmm_WWAccNum_events159->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_VZ_hww2l2v_13TeV_WW_0jmm_WWAccNum_events159->GetXaxis()->SetTitleFont(42);
   new_histo_group_VZ_hww2l2v_13TeV_WW_0jmm_WWAccNum_events159->GetYaxis()->SetLabelFont(42);
   new_histo_group_VZ_hww2l2v_13TeV_WW_0jmm_WWAccNum_events159->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_VZ_hww2l2v_13TeV_WW_0jmm_WWAccNum_events159->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_VZ_hww2l2v_13TeV_WW_0jmm_WWAccNum_events159->GetYaxis()->SetTitleFont(42);
   new_histo_group_VZ_hww2l2v_13TeV_WW_0jmm_WWAccNum_events159->GetZaxis()->SetLabelFont(42);
   new_histo_group_VZ_hww2l2v_13TeV_WW_0jmm_WWAccNum_events159->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_VZ_hww2l2v_13TeV_WW_0jmm_WWAccNum_events159->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_VZ_hww2l2v_13TeV_WW_0jmm_WWAccNum_events159->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_hww2l2v_13TeV_WW_0jmm_WWAccNum_events->Add(new_histo_group_VZ_hww2l2v_13TeV_WW_0jmm_WWAccNum_events,"");
   
   TH1D *new_histo_group_Higgs_hww2l2v_13TeV_WW_0jmm_WWAccNum_events160 = new TH1D("new_histo_group_Higgs_hww2l2v_13TeV_WW_0jmm_WWAccNum_events160","histo_H_htt",1,0,2);
   new_histo_group_Higgs_hww2l2v_13TeV_WW_0jmm_WWAccNum_events160->SetBinContent(1,2.471819);
   new_histo_group_Higgs_hww2l2v_13TeV_WW_0jmm_WWAccNum_events160->SetBinError(1,0.2380848);
   new_histo_group_Higgs_hww2l2v_13TeV_WW_0jmm_WWAccNum_events160->SetEntries(149);
   new_histo_group_Higgs_hww2l2v_13TeV_WW_0jmm_WWAccNum_events160->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_hww2l2v_13TeV_WW_0jmm_WWAccNum_events160->SetLineColor(ci);
   new_histo_group_Higgs_hww2l2v_13TeV_WW_0jmm_WWAccNum_events160->SetLineWidth(2);
   new_histo_group_Higgs_hww2l2v_13TeV_WW_0jmm_WWAccNum_events160->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_hww2l2v_13TeV_WW_0jmm_WWAccNum_events160->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_hww2l2v_13TeV_WW_0jmm_WWAccNum_events160->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_hww2l2v_13TeV_WW_0jmm_WWAccNum_events160->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_hww2l2v_13TeV_WW_0jmm_WWAccNum_events160->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_hww2l2v_13TeV_WW_0jmm_WWAccNum_events160->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_hww2l2v_13TeV_WW_0jmm_WWAccNum_events160->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_hww2l2v_13TeV_WW_0jmm_WWAccNum_events160->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_hww2l2v_13TeV_WW_0jmm_WWAccNum_events160->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_hww2l2v_13TeV_WW_0jmm_WWAccNum_events160->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_hww2l2v_13TeV_WW_0jmm_WWAccNum_events160->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_hww2l2v_13TeV_WW_0jmm_WWAccNum_events160->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_hww2l2v_13TeV_WW_0jmm_WWAccNum_events->Add(new_histo_group_Higgs_hww2l2v_13TeV_WW_0jmm_WWAccNum_events,"");
   thsBackground_grouped_hww2l2v_13TeV_WW_0jmm_WWAccNum_events->Draw("hist same");
   
   thsSignal_grouped_hww2l2v_13TeV_WW_0jmm_WWAccNum_events = new THStack();
   thsSignal_grouped_hww2l2v_13TeV_WW_0jmm_WWAccNum_events->SetName("thsSignal_grouped_hww2l2v_13TeV_WW_0jmm_WWAccNum_events");
   thsSignal_grouped_hww2l2v_13TeV_WW_0jmm_WWAccNum_events->SetTitle("thsSignal_grouped_hww2l2v_13TeV_WW_0jmm_WWAccNum_events");
   
   TH1F *thsSignal_grouped_hww2l2v_13TeV_WW_0jmm_WWAccNum_events_stack_36 = new TH1F("thsSignal_grouped_hww2l2v_13TeV_WW_0jmm_WWAccNum_events_stack_36","thsSignal_grouped_hww2l2v_13TeV_WW_0jmm_WWAccNum_events",1,0,2);
   thsSignal_grouped_hww2l2v_13TeV_WW_0jmm_WWAccNum_events_stack_36->SetMinimum(0);
   thsSignal_grouped_hww2l2v_13TeV_WW_0jmm_WWAccNum_events_stack_36->SetMaximum(2.845399);
   thsSignal_grouped_hww2l2v_13TeV_WW_0jmm_WWAccNum_events_stack_36->SetDirectory(0);
   thsSignal_grouped_hww2l2v_13TeV_WW_0jmm_WWAccNum_events_stack_36->SetStats(0);
   thsSignal_grouped_hww2l2v_13TeV_WW_0jmm_WWAccNum_events_stack_36->SetLineStyle(0);
   thsSignal_grouped_hww2l2v_13TeV_WW_0jmm_WWAccNum_events_stack_36->SetMarkerStyle(20);
   thsSignal_grouped_hww2l2v_13TeV_WW_0jmm_WWAccNum_events_stack_36->GetXaxis()->SetLabelFont(42);
   thsSignal_grouped_hww2l2v_13TeV_WW_0jmm_WWAccNum_events_stack_36->GetXaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_hww2l2v_13TeV_WW_0jmm_WWAccNum_events_stack_36->GetXaxis()->SetLabelSize(0.05);
   thsSignal_grouped_hww2l2v_13TeV_WW_0jmm_WWAccNum_events_stack_36->GetXaxis()->SetTitleSize(0.06);
   thsSignal_grouped_hww2l2v_13TeV_WW_0jmm_WWAccNum_events_stack_36->GetXaxis()->SetTitleOffset(0.9);
   thsSignal_grouped_hww2l2v_13TeV_WW_0jmm_WWAccNum_events_stack_36->GetXaxis()->SetTitleFont(42);
   thsSignal_grouped_hww2l2v_13TeV_WW_0jmm_WWAccNum_events_stack_36->GetYaxis()->SetLabelFont(42);
   thsSignal_grouped_hww2l2v_13TeV_WW_0jmm_WWAccNum_events_stack_36->GetYaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_hww2l2v_13TeV_WW_0jmm_WWAccNum_events_stack_36->GetYaxis()->SetLabelSize(0.05);
   thsSignal_grouped_hww2l2v_13TeV_WW_0jmm_WWAccNum_events_stack_36->GetYaxis()->SetTitleSize(0.06);
   thsSignal_grouped_hww2l2v_13TeV_WW_0jmm_WWAccNum_events_stack_36->GetYaxis()->SetTitleOffset(1.25);
   thsSignal_grouped_hww2l2v_13TeV_WW_0jmm_WWAccNum_events_stack_36->GetYaxis()->SetTitleFont(42);
   thsSignal_grouped_hww2l2v_13TeV_WW_0jmm_WWAccNum_events_stack_36->GetZaxis()->SetLabelFont(42);
   thsSignal_grouped_hww2l2v_13TeV_WW_0jmm_WWAccNum_events_stack_36->GetZaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_hww2l2v_13TeV_WW_0jmm_WWAccNum_events_stack_36->GetZaxis()->SetLabelSize(0.05);
   thsSignal_grouped_hww2l2v_13TeV_WW_0jmm_WWAccNum_events_stack_36->GetZaxis()->SetTitleSize(0.06);
   thsSignal_grouped_hww2l2v_13TeV_WW_0jmm_WWAccNum_events_stack_36->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_hww2l2v_13TeV_WW_0jmm_WWAccNum_events->SetHistogram(thsSignal_grouped_hww2l2v_13TeV_WW_0jmm_WWAccNum_events_stack_36);
   
   
   TH1D *new_histo_group_Higgs_hww2l2v_13TeV_WW_0jmm_WWAccNum_events161 = new TH1D("new_histo_group_Higgs_hww2l2v_13TeV_WW_0jmm_WWAccNum_events161","histo_H_htt",1,0,2);
   new_histo_group_Higgs_hww2l2v_13TeV_WW_0jmm_WWAccNum_events161->SetBinContent(1,2.471819);
   new_histo_group_Higgs_hww2l2v_13TeV_WW_0jmm_WWAccNum_events161->SetBinError(1,0.2380848);
   new_histo_group_Higgs_hww2l2v_13TeV_WW_0jmm_WWAccNum_events161->SetEntries(149);
   new_histo_group_Higgs_hww2l2v_13TeV_WW_0jmm_WWAccNum_events161->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_hww2l2v_13TeV_WW_0jmm_WWAccNum_events161->SetLineColor(ci);
   new_histo_group_Higgs_hww2l2v_13TeV_WW_0jmm_WWAccNum_events161->SetLineWidth(2);
   new_histo_group_Higgs_hww2l2v_13TeV_WW_0jmm_WWAccNum_events161->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_hww2l2v_13TeV_WW_0jmm_WWAccNum_events161->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_hww2l2v_13TeV_WW_0jmm_WWAccNum_events161->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_hww2l2v_13TeV_WW_0jmm_WWAccNum_events161->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_hww2l2v_13TeV_WW_0jmm_WWAccNum_events161->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_hww2l2v_13TeV_WW_0jmm_WWAccNum_events161->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_hww2l2v_13TeV_WW_0jmm_WWAccNum_events161->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_hww2l2v_13TeV_WW_0jmm_WWAccNum_events161->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_hww2l2v_13TeV_WW_0jmm_WWAccNum_events161->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_hww2l2v_13TeV_WW_0jmm_WWAccNum_events161->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_hww2l2v_13TeV_WW_0jmm_WWAccNum_events161->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_hww2l2v_13TeV_WW_0jmm_WWAccNum_events161->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_hww2l2v_13TeV_WW_0jmm_WWAccNum_events->Add(new_histo_group_Higgs_hww2l2v_13TeV_WW_0jmm_WWAccNum_events,"");
   thsSignal_grouped_hww2l2v_13TeV_WW_0jmm_WWAccNum_events->Draw("hist same noclear");
   
   Double_t _fx3025[1] = {
   1};
   Double_t _fy3025[1] = {
   16791};
   Double_t _felx3025[1] = {
   1};
   Double_t _fely3025[1] = {
   129.5816};
   Double_t _fehx3025[1] = {
   1};
   Double_t _fehy3025[1] = {
   130.5855};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(1,_fx3025,_fy3025,_felx3025,_fehx3025,_fely3025,_fehy3025);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(1);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3025 = new TH1F("Graph_Graph3025","",100,0,2.2);
   Graph_Graph3025->SetMinimum(16635.4);
   Graph_Graph3025->SetMaximum(16947.6);
   Graph_Graph3025->SetDirectory(0);
   Graph_Graph3025->SetStats(0);
   Graph_Graph3025->SetLineStyle(0);
   Graph_Graph3025->SetMarkerStyle(20);
   Graph_Graph3025->GetXaxis()->SetLabelFont(42);
   Graph_Graph3025->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3025->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3025->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3025->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3025->GetXaxis()->SetTitleFont(42);
   Graph_Graph3025->GetYaxis()->SetLabelFont(42);
   Graph_Graph3025->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3025->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3025->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3025->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3025->GetYaxis()->SetTitleFont(42);
   Graph_Graph3025->GetZaxis()->SetLabelFont(42);
   Graph_Graph3025->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3025->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3025->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3025->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3025);
   
   grae->Draw("p0");
   
   TLegend *leg = new TLegend(0.2,0.7,0.8,0.9,NULL,"brNDC");
   leg->SetTextFont(62);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("new_histo_group_DY_hww2l2v_13TeV_WW_0jmm_WWAccNum_events","DY","F");

   ci = TColor::GetColor("#009900");
   entry->SetFillColor(ci);
   entry->SetFillStyle(3001);

   ci = TColor::GetColor("#009900");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_group_top_hww2l2v_13TeV_WW_0jmm_WWAccNum_events","tW and t#bart","F");

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
   entry=leg->AddEntry("new_histo_group_WW_hww2l2v_13TeV_WW_0jmm_WWAccNum_events","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_hww2l2v_13TeV_WW_0jmm_WWAccNum_events","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_VZ_hww2l2v_13TeV_WW_0jmm_WWAccNum_events","VZ/#gamma*/#gamma","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_hww2l2v_13TeV_WW_0jmm_WWAccNum_events","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_hww2l2v_13TeV_WW_0jmm_WWAccNum_events","Data","EPL");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   leg->Draw();
   TLatex *   tex = new TLatex(0.96,0.96,"L = 35.9/fb (13 TeV)");
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
   entry=leg->AddEntry("new_histo_group_DY_hww2l2v_13TeV_WW_0jmm_WWAccNum_events","DY","F");

   ci = TColor::GetColor("#009900");
   entry->SetFillColor(ci);
   entry->SetFillStyle(3001);

   ci = TColor::GetColor("#009900");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_group_top_hww2l2v_13TeV_WW_0jmm_WWAccNum_events","tW and t#bart","F");

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
   entry=leg->AddEntry("new_histo_group_WW_hww2l2v_13TeV_WW_0jmm_WWAccNum_events","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_hww2l2v_13TeV_WW_0jmm_WWAccNum_events","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_VZ_hww2l2v_13TeV_WW_0jmm_WWAccNum_events","VZ/#gamma*/#gamma","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_hww2l2v_13TeV_WW_0jmm_WWAccNum_events","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_hww2l2v_13TeV_WW_0jmm_WWAccNum_events","Data","EPL");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   leg->Draw();
   
   TH1F *hframe_copy162 = new TH1F("hframe_copy162","",1000,0,2);
   hframe_copy162->SetMinimum(0);
   hframe_copy162->SetMaximum(42301.45);
   hframe_copy162->SetDirectory(0);
   hframe_copy162->SetStats(0);
   hframe_copy162->SetLineStyle(0);
   hframe_copy162->SetMarkerStyle(20);
   hframe_copy162->GetXaxis()->SetTitle("events");
   hframe_copy162->GetXaxis()->SetNdivisions(506);
   hframe_copy162->GetXaxis()->SetLabelFont(42);
   hframe_copy162->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy162->GetXaxis()->SetLabelSize(0.05);
   hframe_copy162->GetXaxis()->SetTitleSize(0.06);
   hframe_copy162->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy162->GetXaxis()->SetTitleFont(42);
   hframe_copy162->GetYaxis()->SetTitle("Events");
   hframe_copy162->GetYaxis()->SetLabelFont(42);
   hframe_copy162->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy162->GetYaxis()->SetLabelSize(0.05);
   hframe_copy162->GetYaxis()->SetTitleSize(0.06);
   hframe_copy162->GetYaxis()->SetTitleOffset(1.25);
   hframe_copy162->GetYaxis()->SetTitleFont(42);
   hframe_copy162->GetZaxis()->SetLabelFont(42);
   hframe_copy162->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy162->GetZaxis()->SetLabelSize(0.05);
   hframe_copy162->GetZaxis()->SetTitleSize(0.06);
   hframe_copy162->GetZaxis()->SetTitleFont(42);
   hframe_copy162->Draw("sameaxis");
   cchww2l2v_13TeV_WW_0jmm_WWAccNum_events->Modified();
   cchww2l2v_13TeV_WW_0jmm_WWAccNum_events->cd();
   cchww2l2v_13TeV_WW_0jmm_WWAccNum_events->SetSelected(cchww2l2v_13TeV_WW_0jmm_WWAccNum_events);
}
