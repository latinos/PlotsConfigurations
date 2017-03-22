void c_hww2l2v_13TeV_1jmm_HAccNum_events()
{
//=========Macro generated from canvas: cchww2l2v_13TeV_1jmm_HAccNum_events/cc
//=========  (Tue Mar 21 11:46:11 2017) by ROOT version6.02/13
   TCanvas *cchww2l2v_13TeV_1jmm_HAccNum_events = new TCanvas("cchww2l2v_13TeV_1jmm_HAccNum_events", "cc",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   cchww2l2v_13TeV_1jmm_HAccNum_events->SetHighLightColor(2);
   cchww2l2v_13TeV_1jmm_HAccNum_events->Range(-0.4,-5660.154,2.1,37879.49);
   cchww2l2v_13TeV_1jmm_HAccNum_events->SetFillColor(0);
   cchww2l2v_13TeV_1jmm_HAccNum_events->SetBorderMode(0);
   cchww2l2v_13TeV_1jmm_HAccNum_events->SetBorderSize(2);
   cchww2l2v_13TeV_1jmm_HAccNum_events->SetTickx(1);
   cchww2l2v_13TeV_1jmm_HAccNum_events->SetTicky(1);
   cchww2l2v_13TeV_1jmm_HAccNum_events->SetLeftMargin(0.16);
   cchww2l2v_13TeV_1jmm_HAccNum_events->SetRightMargin(0.04);
   cchww2l2v_13TeV_1jmm_HAccNum_events->SetTopMargin(0.05);
   cchww2l2v_13TeV_1jmm_HAccNum_events->SetBottomMargin(0.13);
   cchww2l2v_13TeV_1jmm_HAccNum_events->SetFrameFillStyle(0);
   cchww2l2v_13TeV_1jmm_HAccNum_events->SetFrameBorderMode(0);
   cchww2l2v_13TeV_1jmm_HAccNum_events->SetFrameFillStyle(0);
   cchww2l2v_13TeV_1jmm_HAccNum_events->SetFrameBorderMode(0);
   
   TH1F *hframe1 = new TH1F("hframe1","",1000,0,2);
   hframe1->SetMinimum(0);
   hframe1->SetMaximum(35702.51);
   hframe1->SetDirectory(0);
   hframe1->SetStats(0);
   hframe1->SetLineStyle(0);
   hframe1->SetMarkerStyle(20);
   hframe1->GetXaxis()->SetTitle("events");
   hframe1->GetXaxis()->SetNdivisions(506);
   hframe1->GetXaxis()->SetLabelFont(42);
   hframe1->GetXaxis()->SetLabelOffset(0.007);
   hframe1->GetXaxis()->SetLabelSize(0.05);
   hframe1->GetXaxis()->SetTitleSize(0.06);
   hframe1->GetXaxis()->SetTitleOffset(0.9);
   hframe1->GetXaxis()->SetTitleFont(42);
   hframe1->GetYaxis()->SetTitle("Events");
   hframe1->GetYaxis()->SetLabelFont(42);
   hframe1->GetYaxis()->SetLabelOffset(0.007);
   hframe1->GetYaxis()->SetLabelSize(0.05);
   hframe1->GetYaxis()->SetTitleSize(0.06);
   hframe1->GetYaxis()->SetTitleOffset(1.25);
   hframe1->GetYaxis()->SetTitleFont(42);
   hframe1->GetZaxis()->SetLabelFont(42);
   hframe1->GetZaxis()->SetLabelOffset(0.007);
   hframe1->GetZaxis()->SetLabelSize(0.05);
   hframe1->GetZaxis()->SetTitleSize(0.06);
   hframe1->GetZaxis()->SetTitleFont(42);
   hframe1->Draw(" ");
   
   THStack *thsBackground_grouped_hww2l2v_13TeV_1jmm_HAccNum_events = new THStack();
   thsBackground_grouped_hww2l2v_13TeV_1jmm_HAccNum_events->SetName("thsBackground_grouped_hww2l2v_13TeV_1jmm_HAccNum_events");
   thsBackground_grouped_hww2l2v_13TeV_1jmm_HAccNum_events->SetTitle("thsBackground_grouped_hww2l2v_13TeV_1jmm_HAccNum_events");
   
   TH1F *thsBackground_grouped_hww2l2v_13TeV_1jmm_HAccNum_events_stack_1 = new TH1F("thsBackground_grouped_hww2l2v_13TeV_1jmm_HAccNum_events_stack_1","thsBackground_grouped_hww2l2v_13TeV_1jmm_HAccNum_events",1,0,2);
   thsBackground_grouped_hww2l2v_13TeV_1jmm_HAccNum_events_stack_1->SetMinimum(0);
   thsBackground_grouped_hww2l2v_13TeV_1jmm_HAccNum_events_stack_1->SetMaximum(7852.573);
   thsBackground_grouped_hww2l2v_13TeV_1jmm_HAccNum_events_stack_1->SetDirectory(0);
   thsBackground_grouped_hww2l2v_13TeV_1jmm_HAccNum_events_stack_1->SetStats(0);
   thsBackground_grouped_hww2l2v_13TeV_1jmm_HAccNum_events_stack_1->SetLineStyle(0);
   thsBackground_grouped_hww2l2v_13TeV_1jmm_HAccNum_events_stack_1->SetMarkerStyle(20);
   thsBackground_grouped_hww2l2v_13TeV_1jmm_HAccNum_events_stack_1->GetXaxis()->SetLabelFont(42);
   thsBackground_grouped_hww2l2v_13TeV_1jmm_HAccNum_events_stack_1->GetXaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_hww2l2v_13TeV_1jmm_HAccNum_events_stack_1->GetXaxis()->SetLabelSize(0.05);
   thsBackground_grouped_hww2l2v_13TeV_1jmm_HAccNum_events_stack_1->GetXaxis()->SetTitleSize(0.06);
   thsBackground_grouped_hww2l2v_13TeV_1jmm_HAccNum_events_stack_1->GetXaxis()->SetTitleOffset(0.9);
   thsBackground_grouped_hww2l2v_13TeV_1jmm_HAccNum_events_stack_1->GetXaxis()->SetTitleFont(42);
   thsBackground_grouped_hww2l2v_13TeV_1jmm_HAccNum_events_stack_1->GetYaxis()->SetLabelFont(42);
   thsBackground_grouped_hww2l2v_13TeV_1jmm_HAccNum_events_stack_1->GetYaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_hww2l2v_13TeV_1jmm_HAccNum_events_stack_1->GetYaxis()->SetLabelSize(0.05);
   thsBackground_grouped_hww2l2v_13TeV_1jmm_HAccNum_events_stack_1->GetYaxis()->SetTitleSize(0.06);
   thsBackground_grouped_hww2l2v_13TeV_1jmm_HAccNum_events_stack_1->GetYaxis()->SetTitleOffset(1.25);
   thsBackground_grouped_hww2l2v_13TeV_1jmm_HAccNum_events_stack_1->GetYaxis()->SetTitleFont(42);
   thsBackground_grouped_hww2l2v_13TeV_1jmm_HAccNum_events_stack_1->GetZaxis()->SetLabelFont(42);
   thsBackground_grouped_hww2l2v_13TeV_1jmm_HAccNum_events_stack_1->GetZaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_hww2l2v_13TeV_1jmm_HAccNum_events_stack_1->GetZaxis()->SetLabelSize(0.05);
   thsBackground_grouped_hww2l2v_13TeV_1jmm_HAccNum_events_stack_1->GetZaxis()->SetTitleSize(0.06);
   thsBackground_grouped_hww2l2v_13TeV_1jmm_HAccNum_events_stack_1->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_hww2l2v_13TeV_1jmm_HAccNum_events->SetHistogram(thsBackground_grouped_hww2l2v_13TeV_1jmm_HAccNum_events_stack_1);
   
   
   TH1D *new_histo_group_DY_hww2l2v_13TeV_1jmm_HAccNum_events2 = new TH1D("new_histo_group_DY_hww2l2v_13TeV_1jmm_HAccNum_events2","histo_DY",1,0,2);
   new_histo_group_DY_hww2l2v_13TeV_1jmm_HAccNum_events2->SetBinContent(1,6291.024);
   new_histo_group_DY_hww2l2v_13TeV_1jmm_HAccNum_events2->SetBinError(1,527.9249);
   new_histo_group_DY_hww2l2v_13TeV_1jmm_HAccNum_events2->SetEntries(1299);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#009900");
   new_histo_group_DY_hww2l2v_13TeV_1jmm_HAccNum_events2->SetFillColor(ci);
   new_histo_group_DY_hww2l2v_13TeV_1jmm_HAccNum_events2->SetFillStyle(3001);

   ci = TColor::GetColor("#009900");
   new_histo_group_DY_hww2l2v_13TeV_1jmm_HAccNum_events2->SetLineColor(ci);
   new_histo_group_DY_hww2l2v_13TeV_1jmm_HAccNum_events2->GetXaxis()->SetLabelFont(42);
   new_histo_group_DY_hww2l2v_13TeV_1jmm_HAccNum_events2->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_DY_hww2l2v_13TeV_1jmm_HAccNum_events2->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_DY_hww2l2v_13TeV_1jmm_HAccNum_events2->GetXaxis()->SetTitleFont(42);
   new_histo_group_DY_hww2l2v_13TeV_1jmm_HAccNum_events2->GetYaxis()->SetLabelFont(42);
   new_histo_group_DY_hww2l2v_13TeV_1jmm_HAccNum_events2->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_DY_hww2l2v_13TeV_1jmm_HAccNum_events2->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_DY_hww2l2v_13TeV_1jmm_HAccNum_events2->GetYaxis()->SetTitleFont(42);
   new_histo_group_DY_hww2l2v_13TeV_1jmm_HAccNum_events2->GetZaxis()->SetLabelFont(42);
   new_histo_group_DY_hww2l2v_13TeV_1jmm_HAccNum_events2->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_DY_hww2l2v_13TeV_1jmm_HAccNum_events2->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_DY_hww2l2v_13TeV_1jmm_HAccNum_events2->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_hww2l2v_13TeV_1jmm_HAccNum_events->Add(new_histo_group_DY_hww2l2v_13TeV_1jmm_HAccNum_events,"");
   
   TH1D *new_histo_group_top_hww2l2v_13TeV_1jmm_HAccNum_events3 = new TH1D("new_histo_group_top_hww2l2v_13TeV_1jmm_HAccNum_events3","histo_top",1,0,2);
   new_histo_group_top_hww2l2v_13TeV_1jmm_HAccNum_events3->SetBinContent(1,383.7652);
   new_histo_group_top_hww2l2v_13TeV_1jmm_HAccNum_events3->SetBinError(1,4.173603);
   new_histo_group_top_hww2l2v_13TeV_1jmm_HAccNum_events3->SetEntries(9495);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_top_hww2l2v_13TeV_1jmm_HAccNum_events3->SetFillColor(ci);
   new_histo_group_top_hww2l2v_13TeV_1jmm_HAccNum_events3->SetFillStyle(3001);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_top_hww2l2v_13TeV_1jmm_HAccNum_events3->SetLineColor(ci);
   new_histo_group_top_hww2l2v_13TeV_1jmm_HAccNum_events3->GetXaxis()->SetLabelFont(42);
   new_histo_group_top_hww2l2v_13TeV_1jmm_HAccNum_events3->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_top_hww2l2v_13TeV_1jmm_HAccNum_events3->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_top_hww2l2v_13TeV_1jmm_HAccNum_events3->GetXaxis()->SetTitleFont(42);
   new_histo_group_top_hww2l2v_13TeV_1jmm_HAccNum_events3->GetYaxis()->SetLabelFont(42);
   new_histo_group_top_hww2l2v_13TeV_1jmm_HAccNum_events3->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_top_hww2l2v_13TeV_1jmm_HAccNum_events3->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_top_hww2l2v_13TeV_1jmm_HAccNum_events3->GetYaxis()->SetTitleFont(42);
   new_histo_group_top_hww2l2v_13TeV_1jmm_HAccNum_events3->GetZaxis()->SetLabelFont(42);
   new_histo_group_top_hww2l2v_13TeV_1jmm_HAccNum_events3->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_top_hww2l2v_13TeV_1jmm_HAccNum_events3->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_top_hww2l2v_13TeV_1jmm_HAccNum_events3->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_hww2l2v_13TeV_1jmm_HAccNum_events->Add(new_histo_group_top_hww2l2v_13TeV_1jmm_HAccNum_events,"");
   
   TH1D *new_histo_group_WW_hww2l2v_13TeV_1jmm_HAccNum_events4 = new TH1D("new_histo_group_WW_hww2l2v_13TeV_1jmm_HAccNum_events4","histo_WW",1,0,2);
   new_histo_group_WW_hww2l2v_13TeV_1jmm_HAccNum_events4->SetBinContent(1,500.8327);
   new_histo_group_WW_hww2l2v_13TeV_1jmm_HAccNum_events4->SetBinError(1,10.01041);
   new_histo_group_WW_hww2l2v_13TeV_1jmm_HAccNum_events4->SetEntries(3775);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_hww2l2v_13TeV_1jmm_HAccNum_events4->SetFillColor(ci);
   new_histo_group_WW_hww2l2v_13TeV_1jmm_HAccNum_events4->SetFillStyle(3001);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_hww2l2v_13TeV_1jmm_HAccNum_events4->SetLineColor(ci);
   new_histo_group_WW_hww2l2v_13TeV_1jmm_HAccNum_events4->GetXaxis()->SetLabelFont(42);
   new_histo_group_WW_hww2l2v_13TeV_1jmm_HAccNum_events4->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WW_hww2l2v_13TeV_1jmm_HAccNum_events4->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WW_hww2l2v_13TeV_1jmm_HAccNum_events4->GetXaxis()->SetTitleFont(42);
   new_histo_group_WW_hww2l2v_13TeV_1jmm_HAccNum_events4->GetYaxis()->SetLabelFont(42);
   new_histo_group_WW_hww2l2v_13TeV_1jmm_HAccNum_events4->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WW_hww2l2v_13TeV_1jmm_HAccNum_events4->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WW_hww2l2v_13TeV_1jmm_HAccNum_events4->GetYaxis()->SetTitleFont(42);
   new_histo_group_WW_hww2l2v_13TeV_1jmm_HAccNum_events4->GetZaxis()->SetLabelFont(42);
   new_histo_group_WW_hww2l2v_13TeV_1jmm_HAccNum_events4->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WW_hww2l2v_13TeV_1jmm_HAccNum_events4->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WW_hww2l2v_13TeV_1jmm_HAccNum_events4->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_hww2l2v_13TeV_1jmm_HAccNum_events->Add(new_histo_group_WW_hww2l2v_13TeV_1jmm_HAccNum_events,"");
   
   TH1D *new_histo_group_VVV_hww2l2v_13TeV_1jmm_HAccNum_events5 = new TH1D("new_histo_group_VVV_hww2l2v_13TeV_1jmm_HAccNum_events5","histo_VVV",1,0,2);
   new_histo_group_VVV_hww2l2v_13TeV_1jmm_HAccNum_events5->SetBinContent(1,1.558606);
   new_histo_group_VVV_hww2l2v_13TeV_1jmm_HAccNum_events5->SetBinError(1,0.2178426);
   new_histo_group_VVV_hww2l2v_13TeV_1jmm_HAccNum_events5->SetEntries(64);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_hww2l2v_13TeV_1jmm_HAccNum_events5->SetFillColor(ci);
   new_histo_group_VVV_hww2l2v_13TeV_1jmm_HAccNum_events5->SetFillStyle(3001);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_hww2l2v_13TeV_1jmm_HAccNum_events5->SetLineColor(ci);
   new_histo_group_VVV_hww2l2v_13TeV_1jmm_HAccNum_events5->GetXaxis()->SetLabelFont(42);
   new_histo_group_VVV_hww2l2v_13TeV_1jmm_HAccNum_events5->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_hww2l2v_13TeV_1jmm_HAccNum_events5->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_hww2l2v_13TeV_1jmm_HAccNum_events5->GetXaxis()->SetTitleFont(42);
   new_histo_group_VVV_hww2l2v_13TeV_1jmm_HAccNum_events5->GetYaxis()->SetLabelFont(42);
   new_histo_group_VVV_hww2l2v_13TeV_1jmm_HAccNum_events5->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_hww2l2v_13TeV_1jmm_HAccNum_events5->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_hww2l2v_13TeV_1jmm_HAccNum_events5->GetYaxis()->SetTitleFont(42);
   new_histo_group_VVV_hww2l2v_13TeV_1jmm_HAccNum_events5->GetZaxis()->SetLabelFont(42);
   new_histo_group_VVV_hww2l2v_13TeV_1jmm_HAccNum_events5->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_hww2l2v_13TeV_1jmm_HAccNum_events5->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_hww2l2v_13TeV_1jmm_HAccNum_events5->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_hww2l2v_13TeV_1jmm_HAccNum_events->Add(new_histo_group_VVV_hww2l2v_13TeV_1jmm_HAccNum_events,"");
   
   TH1D *new_histo_group_VZ_hww2l2v_13TeV_1jmm_HAccNum_events6 = new TH1D("new_histo_group_VZ_hww2l2v_13TeV_1jmm_HAccNum_events6","histo_Vg",1,0,2);
   new_histo_group_VZ_hww2l2v_13TeV_1jmm_HAccNum_events6->SetBinContent(1,153.12);
   new_histo_group_VZ_hww2l2v_13TeV_1jmm_HAccNum_events6->SetBinError(1,56.50964);
   new_histo_group_VZ_hww2l2v_13TeV_1jmm_HAccNum_events6->SetEntries(3488);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_VZ_hww2l2v_13TeV_1jmm_HAccNum_events6->SetFillColor(ci);
   new_histo_group_VZ_hww2l2v_13TeV_1jmm_HAccNum_events6->SetFillStyle(3001);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_VZ_hww2l2v_13TeV_1jmm_HAccNum_events6->SetLineColor(ci);
   new_histo_group_VZ_hww2l2v_13TeV_1jmm_HAccNum_events6->GetXaxis()->SetLabelFont(42);
   new_histo_group_VZ_hww2l2v_13TeV_1jmm_HAccNum_events6->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_VZ_hww2l2v_13TeV_1jmm_HAccNum_events6->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_VZ_hww2l2v_13TeV_1jmm_HAccNum_events6->GetXaxis()->SetTitleFont(42);
   new_histo_group_VZ_hww2l2v_13TeV_1jmm_HAccNum_events6->GetYaxis()->SetLabelFont(42);
   new_histo_group_VZ_hww2l2v_13TeV_1jmm_HAccNum_events6->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_VZ_hww2l2v_13TeV_1jmm_HAccNum_events6->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_VZ_hww2l2v_13TeV_1jmm_HAccNum_events6->GetYaxis()->SetTitleFont(42);
   new_histo_group_VZ_hww2l2v_13TeV_1jmm_HAccNum_events6->GetZaxis()->SetLabelFont(42);
   new_histo_group_VZ_hww2l2v_13TeV_1jmm_HAccNum_events6->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_VZ_hww2l2v_13TeV_1jmm_HAccNum_events6->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_VZ_hww2l2v_13TeV_1jmm_HAccNum_events6->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_hww2l2v_13TeV_1jmm_HAccNum_events->Add(new_histo_group_VZ_hww2l2v_13TeV_1jmm_HAccNum_events,"");
   
   TH1D *new_histo_group_Higgs_hww2l2v_13TeV_1jmm_HAccNum_events7 = new TH1D("new_histo_group_Higgs_hww2l2v_13TeV_1jmm_HAccNum_events7","histo_H_htt",1,0,2);
   new_histo_group_Higgs_hww2l2v_13TeV_1jmm_HAccNum_events7->SetBinContent(1,148.34);
   new_histo_group_Higgs_hww2l2v_13TeV_1jmm_HAccNum_events7->SetBinError(1,3.095375);
   new_histo_group_Higgs_hww2l2v_13TeV_1jmm_HAccNum_events7->SetEntries(4989);
   new_histo_group_Higgs_hww2l2v_13TeV_1jmm_HAccNum_events7->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_hww2l2v_13TeV_1jmm_HAccNum_events7->SetLineColor(ci);
   new_histo_group_Higgs_hww2l2v_13TeV_1jmm_HAccNum_events7->SetLineWidth(2);
   new_histo_group_Higgs_hww2l2v_13TeV_1jmm_HAccNum_events7->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_hww2l2v_13TeV_1jmm_HAccNum_events7->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_hww2l2v_13TeV_1jmm_HAccNum_events7->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_hww2l2v_13TeV_1jmm_HAccNum_events7->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_hww2l2v_13TeV_1jmm_HAccNum_events7->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_hww2l2v_13TeV_1jmm_HAccNum_events7->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_hww2l2v_13TeV_1jmm_HAccNum_events7->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_hww2l2v_13TeV_1jmm_HAccNum_events7->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_hww2l2v_13TeV_1jmm_HAccNum_events7->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_hww2l2v_13TeV_1jmm_HAccNum_events7->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_hww2l2v_13TeV_1jmm_HAccNum_events7->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_hww2l2v_13TeV_1jmm_HAccNum_events7->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_hww2l2v_13TeV_1jmm_HAccNum_events->Add(new_histo_group_Higgs_hww2l2v_13TeV_1jmm_HAccNum_events,"");
   thsBackground_grouped_hww2l2v_13TeV_1jmm_HAccNum_events->Draw("hist same");
   
   thsSignal_grouped_hww2l2v_13TeV_1jmm_HAccNum_events = new THStack();
   thsSignal_grouped_hww2l2v_13TeV_1jmm_HAccNum_events->SetName("thsSignal_grouped_hww2l2v_13TeV_1jmm_HAccNum_events");
   thsSignal_grouped_hww2l2v_13TeV_1jmm_HAccNum_events->SetTitle("thsSignal_grouped_hww2l2v_13TeV_1jmm_HAccNum_events");
   
   TH1F *thsSignal_grouped_hww2l2v_13TeV_1jmm_HAccNum_events_stack_2 = new TH1F("thsSignal_grouped_hww2l2v_13TeV_1jmm_HAccNum_events_stack_2","thsSignal_grouped_hww2l2v_13TeV_1jmm_HAccNum_events",1,0,2);
   thsSignal_grouped_hww2l2v_13TeV_1jmm_HAccNum_events_stack_2->SetMinimum(0);
   thsSignal_grouped_hww2l2v_13TeV_1jmm_HAccNum_events_stack_2->SetMaximum(159.0072);
   thsSignal_grouped_hww2l2v_13TeV_1jmm_HAccNum_events_stack_2->SetDirectory(0);
   thsSignal_grouped_hww2l2v_13TeV_1jmm_HAccNum_events_stack_2->SetStats(0);
   thsSignal_grouped_hww2l2v_13TeV_1jmm_HAccNum_events_stack_2->SetLineStyle(0);
   thsSignal_grouped_hww2l2v_13TeV_1jmm_HAccNum_events_stack_2->SetMarkerStyle(20);
   thsSignal_grouped_hww2l2v_13TeV_1jmm_HAccNum_events_stack_2->GetXaxis()->SetLabelFont(42);
   thsSignal_grouped_hww2l2v_13TeV_1jmm_HAccNum_events_stack_2->GetXaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_hww2l2v_13TeV_1jmm_HAccNum_events_stack_2->GetXaxis()->SetLabelSize(0.05);
   thsSignal_grouped_hww2l2v_13TeV_1jmm_HAccNum_events_stack_2->GetXaxis()->SetTitleSize(0.06);
   thsSignal_grouped_hww2l2v_13TeV_1jmm_HAccNum_events_stack_2->GetXaxis()->SetTitleOffset(0.9);
   thsSignal_grouped_hww2l2v_13TeV_1jmm_HAccNum_events_stack_2->GetXaxis()->SetTitleFont(42);
   thsSignal_grouped_hww2l2v_13TeV_1jmm_HAccNum_events_stack_2->GetYaxis()->SetLabelFont(42);
   thsSignal_grouped_hww2l2v_13TeV_1jmm_HAccNum_events_stack_2->GetYaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_hww2l2v_13TeV_1jmm_HAccNum_events_stack_2->GetYaxis()->SetLabelSize(0.05);
   thsSignal_grouped_hww2l2v_13TeV_1jmm_HAccNum_events_stack_2->GetYaxis()->SetTitleSize(0.06);
   thsSignal_grouped_hww2l2v_13TeV_1jmm_HAccNum_events_stack_2->GetYaxis()->SetTitleOffset(1.25);
   thsSignal_grouped_hww2l2v_13TeV_1jmm_HAccNum_events_stack_2->GetYaxis()->SetTitleFont(42);
   thsSignal_grouped_hww2l2v_13TeV_1jmm_HAccNum_events_stack_2->GetZaxis()->SetLabelFont(42);
   thsSignal_grouped_hww2l2v_13TeV_1jmm_HAccNum_events_stack_2->GetZaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_hww2l2v_13TeV_1jmm_HAccNum_events_stack_2->GetZaxis()->SetLabelSize(0.05);
   thsSignal_grouped_hww2l2v_13TeV_1jmm_HAccNum_events_stack_2->GetZaxis()->SetTitleSize(0.06);
   thsSignal_grouped_hww2l2v_13TeV_1jmm_HAccNum_events_stack_2->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_hww2l2v_13TeV_1jmm_HAccNum_events->SetHistogram(thsSignal_grouped_hww2l2v_13TeV_1jmm_HAccNum_events_stack_2);
   
   
   TH1D *new_histo_group_Higgs_hww2l2v_13TeV_1jmm_HAccNum_events8 = new TH1D("new_histo_group_Higgs_hww2l2v_13TeV_1jmm_HAccNum_events8","histo_H_htt",1,0,2);
   new_histo_group_Higgs_hww2l2v_13TeV_1jmm_HAccNum_events8->SetBinContent(1,148.34);
   new_histo_group_Higgs_hww2l2v_13TeV_1jmm_HAccNum_events8->SetBinError(1,3.095375);
   new_histo_group_Higgs_hww2l2v_13TeV_1jmm_HAccNum_events8->SetEntries(4989);
   new_histo_group_Higgs_hww2l2v_13TeV_1jmm_HAccNum_events8->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_hww2l2v_13TeV_1jmm_HAccNum_events8->SetLineColor(ci);
   new_histo_group_Higgs_hww2l2v_13TeV_1jmm_HAccNum_events8->SetLineWidth(2);
   new_histo_group_Higgs_hww2l2v_13TeV_1jmm_HAccNum_events8->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_hww2l2v_13TeV_1jmm_HAccNum_events8->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_hww2l2v_13TeV_1jmm_HAccNum_events8->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_hww2l2v_13TeV_1jmm_HAccNum_events8->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_hww2l2v_13TeV_1jmm_HAccNum_events8->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_hww2l2v_13TeV_1jmm_HAccNum_events8->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_hww2l2v_13TeV_1jmm_HAccNum_events8->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_hww2l2v_13TeV_1jmm_HAccNum_events8->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_hww2l2v_13TeV_1jmm_HAccNum_events8->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_hww2l2v_13TeV_1jmm_HAccNum_events8->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_hww2l2v_13TeV_1jmm_HAccNum_events8->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_hww2l2v_13TeV_1jmm_HAccNum_events8->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_hww2l2v_13TeV_1jmm_HAccNum_events->Add(new_histo_group_Higgs_hww2l2v_13TeV_1jmm_HAccNum_events,"");
   thsSignal_grouped_hww2l2v_13TeV_1jmm_HAccNum_events->Draw("hist same noclear");
   
   Double_t _fx3001[1] = {
   1};
   Double_t _fy3001[1] = {
   14162};
   Double_t _felx3001[1] = {
   1};
   Double_t _fely3001[1] = {
   119.0054};
   Double_t _fehx3001[1] = {
   1};
   Double_t _fehy3001[1] = {
   120.0096};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(1,_fx3001,_fy3001,_felx3001,_fehx3001,_fely3001,_fehy3001);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(1);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3001 = new TH1F("Graph_Graph3001","",100,0,2.2);
   Graph_Graph3001->SetMinimum(14019.09);
   Graph_Graph3001->SetMaximum(14305.91);
   Graph_Graph3001->SetDirectory(0);
   Graph_Graph3001->SetStats(0);
   Graph_Graph3001->SetLineStyle(0);
   Graph_Graph3001->SetMarkerStyle(20);
   Graph_Graph3001->GetXaxis()->SetLabelFont(42);
   Graph_Graph3001->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3001->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3001->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3001->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3001->GetXaxis()->SetTitleFont(42);
   Graph_Graph3001->GetYaxis()->SetLabelFont(42);
   Graph_Graph3001->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3001->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3001->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3001->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3001->GetYaxis()->SetTitleFont(42);
   Graph_Graph3001->GetZaxis()->SetLabelFont(42);
   Graph_Graph3001->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3001->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3001->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3001->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3001);
   
   grae->Draw("p0");
   
   TLegend *leg = new TLegend(0.2,0.7,0.8,0.9,NULL,"brNDC");
   leg->SetTextFont(62);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("new_histo_group_DY_hww2l2v_13TeV_1jmm_HAccNum_events","DY","F");

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
   entry=leg->AddEntry("new_histo_group_top_hww2l2v_13TeV_1jmm_HAccNum_events","tW and t#bart","F");

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
   entry=leg->AddEntry("new_histo_group_WW_hww2l2v_13TeV_1jmm_HAccNum_events","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_hww2l2v_13TeV_1jmm_HAccNum_events","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_VZ_hww2l2v_13TeV_1jmm_HAccNum_events","VZ/#gamma*/#gamma","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_hww2l2v_13TeV_1jmm_HAccNum_events","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_hww2l2v_13TeV_1jmm_HAccNum_events","Data","EPL");
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
   entry=leg->AddEntry("new_histo_group_DY_hww2l2v_13TeV_1jmm_HAccNum_events","DY","F");

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
   entry=leg->AddEntry("new_histo_group_top_hww2l2v_13TeV_1jmm_HAccNum_events","tW and t#bart","F");

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
   entry=leg->AddEntry("new_histo_group_WW_hww2l2v_13TeV_1jmm_HAccNum_events","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_hww2l2v_13TeV_1jmm_HAccNum_events","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_VZ_hww2l2v_13TeV_1jmm_HAccNum_events","VZ/#gamma*/#gamma","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_hww2l2v_13TeV_1jmm_HAccNum_events","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_hww2l2v_13TeV_1jmm_HAccNum_events","Data","EPL");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   leg->Draw();
   
   TH1F *hframe_copy9 = new TH1F("hframe_copy9","",1000,0,2);
   hframe_copy9->SetMinimum(0);
   hframe_copy9->SetMaximum(35702.51);
   hframe_copy9->SetDirectory(0);
   hframe_copy9->SetStats(0);
   hframe_copy9->SetLineStyle(0);
   hframe_copy9->SetMarkerStyle(20);
   hframe_copy9->GetXaxis()->SetTitle("events");
   hframe_copy9->GetXaxis()->SetNdivisions(506);
   hframe_copy9->GetXaxis()->SetLabelFont(42);
   hframe_copy9->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy9->GetXaxis()->SetLabelSize(0.05);
   hframe_copy9->GetXaxis()->SetTitleSize(0.06);
   hframe_copy9->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy9->GetXaxis()->SetTitleFont(42);
   hframe_copy9->GetYaxis()->SetTitle("Events");
   hframe_copy9->GetYaxis()->SetLabelFont(42);
   hframe_copy9->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy9->GetYaxis()->SetLabelSize(0.05);
   hframe_copy9->GetYaxis()->SetTitleSize(0.06);
   hframe_copy9->GetYaxis()->SetTitleOffset(1.25);
   hframe_copy9->GetYaxis()->SetTitleFont(42);
   hframe_copy9->GetZaxis()->SetLabelFont(42);
   hframe_copy9->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy9->GetZaxis()->SetLabelSize(0.05);
   hframe_copy9->GetZaxis()->SetTitleSize(0.06);
   hframe_copy9->GetZaxis()->SetTitleFont(42);
   hframe_copy9->Draw("sameaxis");
   cchww2l2v_13TeV_1jmm_HAccNum_events->Modified();
   cchww2l2v_13TeV_1jmm_HAccNum_events->cd();
   cchww2l2v_13TeV_1jmm_HAccNum_events->SetSelected(cchww2l2v_13TeV_1jmm_HAccNum_events);
}
