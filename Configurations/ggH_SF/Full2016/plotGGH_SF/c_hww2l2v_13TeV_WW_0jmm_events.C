void c_hww2l2v_13TeV_WW_0jmm_events()
{
//=========Macro generated from canvas: cchww2l2v_13TeV_WW_0jmm_events/cc
//=========  (Tue Mar 21 11:46:24 2017) by ROOT version6.02/13
   TCanvas *cchww2l2v_13TeV_WW_0jmm_events = new TCanvas("cchww2l2v_13TeV_WW_0jmm_events", "cc",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   cchww2l2v_13TeV_WW_0jmm_events->SetHighLightColor(2);
   cchww2l2v_13TeV_WW_0jmm_events->Range(-0.4,-2393.591,2.1,16018.65);
   cchww2l2v_13TeV_WW_0jmm_events->SetFillColor(0);
   cchww2l2v_13TeV_WW_0jmm_events->SetBorderMode(0);
   cchww2l2v_13TeV_WW_0jmm_events->SetBorderSize(2);
   cchww2l2v_13TeV_WW_0jmm_events->SetTickx(1);
   cchww2l2v_13TeV_WW_0jmm_events->SetTicky(1);
   cchww2l2v_13TeV_WW_0jmm_events->SetLeftMargin(0.16);
   cchww2l2v_13TeV_WW_0jmm_events->SetRightMargin(0.04);
   cchww2l2v_13TeV_WW_0jmm_events->SetTopMargin(0.05);
   cchww2l2v_13TeV_WW_0jmm_events->SetBottomMargin(0.13);
   cchww2l2v_13TeV_WW_0jmm_events->SetFrameFillStyle(0);
   cchww2l2v_13TeV_WW_0jmm_events->SetFrameBorderMode(0);
   cchww2l2v_13TeV_WW_0jmm_events->SetFrameFillStyle(0);
   cchww2l2v_13TeV_WW_0jmm_events->SetFrameBorderMode(0);
   
   TH1F *hframe100 = new TH1F("hframe100","",1000,0,2);
   hframe100->SetMinimum(0);
   hframe100->SetMaximum(15098.03);
   hframe100->SetDirectory(0);
   hframe100->SetStats(0);
   hframe100->SetLineStyle(0);
   hframe100->SetMarkerStyle(20);
   hframe100->GetXaxis()->SetTitle("events");
   hframe100->GetXaxis()->SetNdivisions(506);
   hframe100->GetXaxis()->SetLabelFont(42);
   hframe100->GetXaxis()->SetLabelOffset(0.007);
   hframe100->GetXaxis()->SetLabelSize(0.05);
   hframe100->GetXaxis()->SetTitleSize(0.06);
   hframe100->GetXaxis()->SetTitleOffset(0.9);
   hframe100->GetXaxis()->SetTitleFont(42);
   hframe100->GetYaxis()->SetTitle("Events");
   hframe100->GetYaxis()->SetLabelFont(42);
   hframe100->GetYaxis()->SetLabelOffset(0.007);
   hframe100->GetYaxis()->SetLabelSize(0.05);
   hframe100->GetYaxis()->SetTitleSize(0.06);
   hframe100->GetYaxis()->SetTitleOffset(1.25);
   hframe100->GetYaxis()->SetTitleFont(42);
   hframe100->GetZaxis()->SetLabelFont(42);
   hframe100->GetZaxis()->SetLabelOffset(0.007);
   hframe100->GetZaxis()->SetLabelSize(0.05);
   hframe100->GetZaxis()->SetTitleSize(0.06);
   hframe100->GetZaxis()->SetTitleFont(42);
   hframe100->Draw(" ");
   
   THStack *thsBackground_grouped_hww2l2v_13TeV_WW_0jmm_events = new THStack();
   thsBackground_grouped_hww2l2v_13TeV_WW_0jmm_events->SetName("thsBackground_grouped_hww2l2v_13TeV_WW_0jmm_events");
   thsBackground_grouped_hww2l2v_13TeV_WW_0jmm_events->SetTitle("thsBackground_grouped_hww2l2v_13TeV_WW_0jmm_events");
   
   TH1F *thsBackground_grouped_hww2l2v_13TeV_WW_0jmm_events_stack_23 = new TH1F("thsBackground_grouped_hww2l2v_13TeV_WW_0jmm_events_stack_23","thsBackground_grouped_hww2l2v_13TeV_WW_0jmm_events",1,0,2);
   thsBackground_grouped_hww2l2v_13TeV_WW_0jmm_events_stack_23->SetMinimum(0);
   thsBackground_grouped_hww2l2v_13TeV_WW_0jmm_events_stack_23->SetMaximum(2793.848);
   thsBackground_grouped_hww2l2v_13TeV_WW_0jmm_events_stack_23->SetDirectory(0);
   thsBackground_grouped_hww2l2v_13TeV_WW_0jmm_events_stack_23->SetStats(0);
   thsBackground_grouped_hww2l2v_13TeV_WW_0jmm_events_stack_23->SetLineStyle(0);
   thsBackground_grouped_hww2l2v_13TeV_WW_0jmm_events_stack_23->SetMarkerStyle(20);
   thsBackground_grouped_hww2l2v_13TeV_WW_0jmm_events_stack_23->GetXaxis()->SetLabelFont(42);
   thsBackground_grouped_hww2l2v_13TeV_WW_0jmm_events_stack_23->GetXaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_hww2l2v_13TeV_WW_0jmm_events_stack_23->GetXaxis()->SetLabelSize(0.05);
   thsBackground_grouped_hww2l2v_13TeV_WW_0jmm_events_stack_23->GetXaxis()->SetTitleSize(0.06);
   thsBackground_grouped_hww2l2v_13TeV_WW_0jmm_events_stack_23->GetXaxis()->SetTitleOffset(0.9);
   thsBackground_grouped_hww2l2v_13TeV_WW_0jmm_events_stack_23->GetXaxis()->SetTitleFont(42);
   thsBackground_grouped_hww2l2v_13TeV_WW_0jmm_events_stack_23->GetYaxis()->SetLabelFont(42);
   thsBackground_grouped_hww2l2v_13TeV_WW_0jmm_events_stack_23->GetYaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_hww2l2v_13TeV_WW_0jmm_events_stack_23->GetYaxis()->SetLabelSize(0.05);
   thsBackground_grouped_hww2l2v_13TeV_WW_0jmm_events_stack_23->GetYaxis()->SetTitleSize(0.06);
   thsBackground_grouped_hww2l2v_13TeV_WW_0jmm_events_stack_23->GetYaxis()->SetTitleOffset(1.25);
   thsBackground_grouped_hww2l2v_13TeV_WW_0jmm_events_stack_23->GetYaxis()->SetTitleFont(42);
   thsBackground_grouped_hww2l2v_13TeV_WW_0jmm_events_stack_23->GetZaxis()->SetLabelFont(42);
   thsBackground_grouped_hww2l2v_13TeV_WW_0jmm_events_stack_23->GetZaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_hww2l2v_13TeV_WW_0jmm_events_stack_23->GetZaxis()->SetLabelSize(0.05);
   thsBackground_grouped_hww2l2v_13TeV_WW_0jmm_events_stack_23->GetZaxis()->SetTitleSize(0.06);
   thsBackground_grouped_hww2l2v_13TeV_WW_0jmm_events_stack_23->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_hww2l2v_13TeV_WW_0jmm_events->SetHistogram(thsBackground_grouped_hww2l2v_13TeV_WW_0jmm_events_stack_23);
   
   
   TH1D *new_histo_group_DY_hww2l2v_13TeV_WW_0jmm_events101 = new TH1D("new_histo_group_DY_hww2l2v_13TeV_WW_0jmm_events101","histo_DY",1,0,2);
   new_histo_group_DY_hww2l2v_13TeV_WW_0jmm_events101->SetBinContent(1,410.7376);
   new_histo_group_DY_hww2l2v_13TeV_WW_0jmm_events101->SetBinError(1,46.38341);
   new_histo_group_DY_hww2l2v_13TeV_WW_0jmm_events101->SetEntries(345);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#009900");
   new_histo_group_DY_hww2l2v_13TeV_WW_0jmm_events101->SetFillColor(ci);
   new_histo_group_DY_hww2l2v_13TeV_WW_0jmm_events101->SetFillStyle(3001);

   ci = TColor::GetColor("#009900");
   new_histo_group_DY_hww2l2v_13TeV_WW_0jmm_events101->SetLineColor(ci);
   new_histo_group_DY_hww2l2v_13TeV_WW_0jmm_events101->GetXaxis()->SetLabelFont(42);
   new_histo_group_DY_hww2l2v_13TeV_WW_0jmm_events101->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_DY_hww2l2v_13TeV_WW_0jmm_events101->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_DY_hww2l2v_13TeV_WW_0jmm_events101->GetXaxis()->SetTitleFont(42);
   new_histo_group_DY_hww2l2v_13TeV_WW_0jmm_events101->GetYaxis()->SetLabelFont(42);
   new_histo_group_DY_hww2l2v_13TeV_WW_0jmm_events101->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_DY_hww2l2v_13TeV_WW_0jmm_events101->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_DY_hww2l2v_13TeV_WW_0jmm_events101->GetYaxis()->SetTitleFont(42);
   new_histo_group_DY_hww2l2v_13TeV_WW_0jmm_events101->GetZaxis()->SetLabelFont(42);
   new_histo_group_DY_hww2l2v_13TeV_WW_0jmm_events101->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_DY_hww2l2v_13TeV_WW_0jmm_events101->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_DY_hww2l2v_13TeV_WW_0jmm_events101->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_hww2l2v_13TeV_WW_0jmm_events->Add(new_histo_group_DY_hww2l2v_13TeV_WW_0jmm_events,"");
   
   TH1D *new_histo_group_top_hww2l2v_13TeV_WW_0jmm_events102 = new TH1D("new_histo_group_top_hww2l2v_13TeV_WW_0jmm_events102","histo_top",1,0,2);
   new_histo_group_top_hww2l2v_13TeV_WW_0jmm_events102->SetBinContent(1,455.0903);
   new_histo_group_top_hww2l2v_13TeV_WW_0jmm_events102->SetBinError(1,4.426185);
   new_histo_group_top_hww2l2v_13TeV_WW_0jmm_events102->SetEntries(11799);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_top_hww2l2v_13TeV_WW_0jmm_events102->SetFillColor(ci);
   new_histo_group_top_hww2l2v_13TeV_WW_0jmm_events102->SetFillStyle(3001);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_top_hww2l2v_13TeV_WW_0jmm_events102->SetLineColor(ci);
   new_histo_group_top_hww2l2v_13TeV_WW_0jmm_events102->GetXaxis()->SetLabelFont(42);
   new_histo_group_top_hww2l2v_13TeV_WW_0jmm_events102->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_top_hww2l2v_13TeV_WW_0jmm_events102->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_top_hww2l2v_13TeV_WW_0jmm_events102->GetXaxis()->SetTitleFont(42);
   new_histo_group_top_hww2l2v_13TeV_WW_0jmm_events102->GetYaxis()->SetLabelFont(42);
   new_histo_group_top_hww2l2v_13TeV_WW_0jmm_events102->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_top_hww2l2v_13TeV_WW_0jmm_events102->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_top_hww2l2v_13TeV_WW_0jmm_events102->GetYaxis()->SetTitleFont(42);
   new_histo_group_top_hww2l2v_13TeV_WW_0jmm_events102->GetZaxis()->SetLabelFont(42);
   new_histo_group_top_hww2l2v_13TeV_WW_0jmm_events102->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_top_hww2l2v_13TeV_WW_0jmm_events102->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_top_hww2l2v_13TeV_WW_0jmm_events102->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_hww2l2v_13TeV_WW_0jmm_events->Add(new_histo_group_top_hww2l2v_13TeV_WW_0jmm_events,"");
   
   TH1D *new_histo_group_WW_hww2l2v_13TeV_WW_0jmm_events103 = new TH1D("new_histo_group_WW_hww2l2v_13TeV_WW_0jmm_events103","histo_WW",1,0,2);
   new_histo_group_WW_hww2l2v_13TeV_WW_0jmm_events103->SetBinContent(1,1657.613);
   new_histo_group_WW_hww2l2v_13TeV_WW_0jmm_events103->SetBinError(1,18.78602);
   new_histo_group_WW_hww2l2v_13TeV_WW_0jmm_events103->SetEntries(10029);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_hww2l2v_13TeV_WW_0jmm_events103->SetFillColor(ci);
   new_histo_group_WW_hww2l2v_13TeV_WW_0jmm_events103->SetFillStyle(3001);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_hww2l2v_13TeV_WW_0jmm_events103->SetLineColor(ci);
   new_histo_group_WW_hww2l2v_13TeV_WW_0jmm_events103->GetXaxis()->SetLabelFont(42);
   new_histo_group_WW_hww2l2v_13TeV_WW_0jmm_events103->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WW_hww2l2v_13TeV_WW_0jmm_events103->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WW_hww2l2v_13TeV_WW_0jmm_events103->GetXaxis()->SetTitleFont(42);
   new_histo_group_WW_hww2l2v_13TeV_WW_0jmm_events103->GetYaxis()->SetLabelFont(42);
   new_histo_group_WW_hww2l2v_13TeV_WW_0jmm_events103->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WW_hww2l2v_13TeV_WW_0jmm_events103->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WW_hww2l2v_13TeV_WW_0jmm_events103->GetYaxis()->SetTitleFont(42);
   new_histo_group_WW_hww2l2v_13TeV_WW_0jmm_events103->GetZaxis()->SetLabelFont(42);
   new_histo_group_WW_hww2l2v_13TeV_WW_0jmm_events103->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WW_hww2l2v_13TeV_WW_0jmm_events103->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WW_hww2l2v_13TeV_WW_0jmm_events103->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_hww2l2v_13TeV_WW_0jmm_events->Add(new_histo_group_WW_hww2l2v_13TeV_WW_0jmm_events,"");
   
   TH1D *new_histo_group_VVV_hww2l2v_13TeV_WW_0jmm_events104 = new TH1D("new_histo_group_VVV_hww2l2v_13TeV_WW_0jmm_events104","histo_VVV",1,0,2);
   new_histo_group_VVV_hww2l2v_13TeV_WW_0jmm_events104->SetBinContent(1,2.166406);
   new_histo_group_VVV_hww2l2v_13TeV_WW_0jmm_events104->SetBinError(1,0.2877311);
   new_histo_group_VVV_hww2l2v_13TeV_WW_0jmm_events104->SetEntries(102);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_hww2l2v_13TeV_WW_0jmm_events104->SetFillColor(ci);
   new_histo_group_VVV_hww2l2v_13TeV_WW_0jmm_events104->SetFillStyle(3001);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_hww2l2v_13TeV_WW_0jmm_events104->SetLineColor(ci);
   new_histo_group_VVV_hww2l2v_13TeV_WW_0jmm_events104->GetXaxis()->SetLabelFont(42);
   new_histo_group_VVV_hww2l2v_13TeV_WW_0jmm_events104->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_hww2l2v_13TeV_WW_0jmm_events104->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_hww2l2v_13TeV_WW_0jmm_events104->GetXaxis()->SetTitleFont(42);
   new_histo_group_VVV_hww2l2v_13TeV_WW_0jmm_events104->GetYaxis()->SetLabelFont(42);
   new_histo_group_VVV_hww2l2v_13TeV_WW_0jmm_events104->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_hww2l2v_13TeV_WW_0jmm_events104->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_hww2l2v_13TeV_WW_0jmm_events104->GetYaxis()->SetTitleFont(42);
   new_histo_group_VVV_hww2l2v_13TeV_WW_0jmm_events104->GetZaxis()->SetLabelFont(42);
   new_histo_group_VVV_hww2l2v_13TeV_WW_0jmm_events104->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_hww2l2v_13TeV_WW_0jmm_events104->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_hww2l2v_13TeV_WW_0jmm_events104->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_hww2l2v_13TeV_WW_0jmm_events->Add(new_histo_group_VVV_hww2l2v_13TeV_WW_0jmm_events,"");
   
   TH1D *new_histo_group_VZ_hww2l2v_13TeV_WW_0jmm_events105 = new TH1D("new_histo_group_VZ_hww2l2v_13TeV_WW_0jmm_events105","histo_Vg",1,0,2);
   new_histo_group_VZ_hww2l2v_13TeV_WW_0jmm_events105->SetBinContent(1,133.5274);
   new_histo_group_VZ_hww2l2v_13TeV_WW_0jmm_events105->SetBinError(1,31.56746);
   new_histo_group_VZ_hww2l2v_13TeV_WW_0jmm_events105->SetEntries(18429);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_VZ_hww2l2v_13TeV_WW_0jmm_events105->SetFillColor(ci);
   new_histo_group_VZ_hww2l2v_13TeV_WW_0jmm_events105->SetFillStyle(3001);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_VZ_hww2l2v_13TeV_WW_0jmm_events105->SetLineColor(ci);
   new_histo_group_VZ_hww2l2v_13TeV_WW_0jmm_events105->GetXaxis()->SetLabelFont(42);
   new_histo_group_VZ_hww2l2v_13TeV_WW_0jmm_events105->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_VZ_hww2l2v_13TeV_WW_0jmm_events105->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_VZ_hww2l2v_13TeV_WW_0jmm_events105->GetXaxis()->SetTitleFont(42);
   new_histo_group_VZ_hww2l2v_13TeV_WW_0jmm_events105->GetYaxis()->SetLabelFont(42);
   new_histo_group_VZ_hww2l2v_13TeV_WW_0jmm_events105->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_VZ_hww2l2v_13TeV_WW_0jmm_events105->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_VZ_hww2l2v_13TeV_WW_0jmm_events105->GetYaxis()->SetTitleFont(42);
   new_histo_group_VZ_hww2l2v_13TeV_WW_0jmm_events105->GetZaxis()->SetLabelFont(42);
   new_histo_group_VZ_hww2l2v_13TeV_WW_0jmm_events105->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_VZ_hww2l2v_13TeV_WW_0jmm_events105->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_VZ_hww2l2v_13TeV_WW_0jmm_events105->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_hww2l2v_13TeV_WW_0jmm_events->Add(new_histo_group_VZ_hww2l2v_13TeV_WW_0jmm_events,"");
   
   TH1D *new_histo_group_Higgs_hww2l2v_13TeV_WW_0jmm_events106 = new TH1D("new_histo_group_Higgs_hww2l2v_13TeV_WW_0jmm_events106","histo_H_htt",1,0,2);
   new_histo_group_Higgs_hww2l2v_13TeV_WW_0jmm_events106->SetBinContent(1,1.673348);
   new_histo_group_Higgs_hww2l2v_13TeV_WW_0jmm_events106->SetBinError(1,0.198103);
   new_histo_group_Higgs_hww2l2v_13TeV_WW_0jmm_events106->SetEntries(106);
   new_histo_group_Higgs_hww2l2v_13TeV_WW_0jmm_events106->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_hww2l2v_13TeV_WW_0jmm_events106->SetLineColor(ci);
   new_histo_group_Higgs_hww2l2v_13TeV_WW_0jmm_events106->SetLineWidth(2);
   new_histo_group_Higgs_hww2l2v_13TeV_WW_0jmm_events106->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_hww2l2v_13TeV_WW_0jmm_events106->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_hww2l2v_13TeV_WW_0jmm_events106->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_hww2l2v_13TeV_WW_0jmm_events106->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_hww2l2v_13TeV_WW_0jmm_events106->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_hww2l2v_13TeV_WW_0jmm_events106->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_hww2l2v_13TeV_WW_0jmm_events106->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_hww2l2v_13TeV_WW_0jmm_events106->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_hww2l2v_13TeV_WW_0jmm_events106->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_hww2l2v_13TeV_WW_0jmm_events106->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_hww2l2v_13TeV_WW_0jmm_events106->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_hww2l2v_13TeV_WW_0jmm_events106->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_hww2l2v_13TeV_WW_0jmm_events->Add(new_histo_group_Higgs_hww2l2v_13TeV_WW_0jmm_events,"");
   thsBackground_grouped_hww2l2v_13TeV_WW_0jmm_events->Draw("hist same");
   
   thsSignal_grouped_hww2l2v_13TeV_WW_0jmm_events = new THStack();
   thsSignal_grouped_hww2l2v_13TeV_WW_0jmm_events->SetName("thsSignal_grouped_hww2l2v_13TeV_WW_0jmm_events");
   thsSignal_grouped_hww2l2v_13TeV_WW_0jmm_events->SetTitle("thsSignal_grouped_hww2l2v_13TeV_WW_0jmm_events");
   
   TH1F *thsSignal_grouped_hww2l2v_13TeV_WW_0jmm_events_stack_24 = new TH1F("thsSignal_grouped_hww2l2v_13TeV_WW_0jmm_events_stack_24","thsSignal_grouped_hww2l2v_13TeV_WW_0jmm_events",1,0,2);
   thsSignal_grouped_hww2l2v_13TeV_WW_0jmm_events_stack_24->SetMinimum(0);
   thsSignal_grouped_hww2l2v_13TeV_WW_0jmm_events_stack_24->SetMaximum(1.965024);
   thsSignal_grouped_hww2l2v_13TeV_WW_0jmm_events_stack_24->SetDirectory(0);
   thsSignal_grouped_hww2l2v_13TeV_WW_0jmm_events_stack_24->SetStats(0);
   thsSignal_grouped_hww2l2v_13TeV_WW_0jmm_events_stack_24->SetLineStyle(0);
   thsSignal_grouped_hww2l2v_13TeV_WW_0jmm_events_stack_24->SetMarkerStyle(20);
   thsSignal_grouped_hww2l2v_13TeV_WW_0jmm_events_stack_24->GetXaxis()->SetLabelFont(42);
   thsSignal_grouped_hww2l2v_13TeV_WW_0jmm_events_stack_24->GetXaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_hww2l2v_13TeV_WW_0jmm_events_stack_24->GetXaxis()->SetLabelSize(0.05);
   thsSignal_grouped_hww2l2v_13TeV_WW_0jmm_events_stack_24->GetXaxis()->SetTitleSize(0.06);
   thsSignal_grouped_hww2l2v_13TeV_WW_0jmm_events_stack_24->GetXaxis()->SetTitleOffset(0.9);
   thsSignal_grouped_hww2l2v_13TeV_WW_0jmm_events_stack_24->GetXaxis()->SetTitleFont(42);
   thsSignal_grouped_hww2l2v_13TeV_WW_0jmm_events_stack_24->GetYaxis()->SetLabelFont(42);
   thsSignal_grouped_hww2l2v_13TeV_WW_0jmm_events_stack_24->GetYaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_hww2l2v_13TeV_WW_0jmm_events_stack_24->GetYaxis()->SetLabelSize(0.05);
   thsSignal_grouped_hww2l2v_13TeV_WW_0jmm_events_stack_24->GetYaxis()->SetTitleSize(0.06);
   thsSignal_grouped_hww2l2v_13TeV_WW_0jmm_events_stack_24->GetYaxis()->SetTitleOffset(1.25);
   thsSignal_grouped_hww2l2v_13TeV_WW_0jmm_events_stack_24->GetYaxis()->SetTitleFont(42);
   thsSignal_grouped_hww2l2v_13TeV_WW_0jmm_events_stack_24->GetZaxis()->SetLabelFont(42);
   thsSignal_grouped_hww2l2v_13TeV_WW_0jmm_events_stack_24->GetZaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_hww2l2v_13TeV_WW_0jmm_events_stack_24->GetZaxis()->SetLabelSize(0.05);
   thsSignal_grouped_hww2l2v_13TeV_WW_0jmm_events_stack_24->GetZaxis()->SetTitleSize(0.06);
   thsSignal_grouped_hww2l2v_13TeV_WW_0jmm_events_stack_24->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_hww2l2v_13TeV_WW_0jmm_events->SetHistogram(thsSignal_grouped_hww2l2v_13TeV_WW_0jmm_events_stack_24);
   
   
   TH1D *new_histo_group_Higgs_hww2l2v_13TeV_WW_0jmm_events107 = new TH1D("new_histo_group_Higgs_hww2l2v_13TeV_WW_0jmm_events107","histo_H_htt",1,0,2);
   new_histo_group_Higgs_hww2l2v_13TeV_WW_0jmm_events107->SetBinContent(1,1.673348);
   new_histo_group_Higgs_hww2l2v_13TeV_WW_0jmm_events107->SetBinError(1,0.198103);
   new_histo_group_Higgs_hww2l2v_13TeV_WW_0jmm_events107->SetEntries(106);
   new_histo_group_Higgs_hww2l2v_13TeV_WW_0jmm_events107->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_hww2l2v_13TeV_WW_0jmm_events107->SetLineColor(ci);
   new_histo_group_Higgs_hww2l2v_13TeV_WW_0jmm_events107->SetLineWidth(2);
   new_histo_group_Higgs_hww2l2v_13TeV_WW_0jmm_events107->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_hww2l2v_13TeV_WW_0jmm_events107->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_hww2l2v_13TeV_WW_0jmm_events107->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_hww2l2v_13TeV_WW_0jmm_events107->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_hww2l2v_13TeV_WW_0jmm_events107->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_hww2l2v_13TeV_WW_0jmm_events107->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_hww2l2v_13TeV_WW_0jmm_events107->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_hww2l2v_13TeV_WW_0jmm_events107->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_hww2l2v_13TeV_WW_0jmm_events107->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_hww2l2v_13TeV_WW_0jmm_events107->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_hww2l2v_13TeV_WW_0jmm_events107->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_hww2l2v_13TeV_WW_0jmm_events107->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_hww2l2v_13TeV_WW_0jmm_events->Add(new_histo_group_Higgs_hww2l2v_13TeV_WW_0jmm_events,"");
   thsSignal_grouped_hww2l2v_13TeV_WW_0jmm_events->Draw("hist same noclear");
   
   Double_t _fx3016[1] = {
   1};
   Double_t _fy3016[1] = {
   2659.135};
   Double_t _felx3016[1] = {
   1};
   Double_t _fely3016[1] = {
   0};
   Double_t _fehx3016[1] = {
   1};
   Double_t _fehy3016[1] = {
   0};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(1,_fx3016,_fy3016,_felx3016,_fehx3016,_fely3016,_fehy3016);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(12);
   grae->SetFillStyle(3004);
   grae->SetLineColor(12);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3016 = new TH1F("Graph_Graph3016","",100,0,2.2);
   Graph_Graph3016->SetMinimum(2659.035);
   Graph_Graph3016->SetMaximum(2660.235);
   Graph_Graph3016->SetDirectory(0);
   Graph_Graph3016->SetStats(0);
   Graph_Graph3016->SetLineStyle(0);
   Graph_Graph3016->SetMarkerStyle(20);
   Graph_Graph3016->GetXaxis()->SetLabelFont(42);
   Graph_Graph3016->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3016->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3016->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3016->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3016->GetXaxis()->SetTitleFont(42);
   Graph_Graph3016->GetYaxis()->SetLabelFont(42);
   Graph_Graph3016->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3016->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3016->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3016->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3016->GetYaxis()->SetTitleFont(42);
   Graph_Graph3016->GetZaxis()->SetLabelFont(42);
   Graph_Graph3016->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3016->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3016->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3016->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3016);
   
   grae->Draw("2");
   
   Double_t _fx3017[1] = {
   1};
   Double_t _fy3017[1] = {
   5962};
   Double_t _felx3017[1] = {
   1};
   Double_t _fely3017[1] = {
   77.21349};
   Double_t _fehx3017[1] = {
   1};
   Double_t _fehy3017[1] = {
   78.22};
   grae = new TGraphAsymmErrors(1,_fx3017,_fy3017,_felx3017,_fehx3017,_fely3017,_fehy3017);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(1);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3017 = new TH1F("Graph_Graph3017","",100,0,2.2);
   Graph_Graph3017->SetMinimum(5869.243);
   Graph_Graph3017->SetMaximum(6055.763);
   Graph_Graph3017->SetDirectory(0);
   Graph_Graph3017->SetStats(0);
   Graph_Graph3017->SetLineStyle(0);
   Graph_Graph3017->SetMarkerStyle(20);
   Graph_Graph3017->GetXaxis()->SetLabelFont(42);
   Graph_Graph3017->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3017->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3017->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3017->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3017->GetXaxis()->SetTitleFont(42);
   Graph_Graph3017->GetYaxis()->SetLabelFont(42);
   Graph_Graph3017->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3017->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3017->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3017->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3017->GetYaxis()->SetTitleFont(42);
   Graph_Graph3017->GetZaxis()->SetLabelFont(42);
   Graph_Graph3017->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3017->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3017->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3017->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3017);
   
   grae->Draw("p0");
   
   TLegend *leg = new TLegend(0.2,0.7,0.8,0.9,NULL,"brNDC");
   leg->SetTextFont(62);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("new_histo_group_DY_hww2l2v_13TeV_WW_0jmm_events","DY","F");

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
   entry=leg->AddEntry("new_histo_group_top_hww2l2v_13TeV_WW_0jmm_events","tW and t#bart","F");

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
   entry=leg->AddEntry("new_histo_group_WW_hww2l2v_13TeV_WW_0jmm_events","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_hww2l2v_13TeV_WW_0jmm_events","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_VZ_hww2l2v_13TeV_WW_0jmm_events","VZ/#gamma*/#gamma","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_hww2l2v_13TeV_WW_0jmm_events","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_hww2l2v_13TeV_WW_0jmm_events","Data","EPL");
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
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
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
   entry=leg->AddEntry("new_histo_group_DY_hww2l2v_13TeV_WW_0jmm_events","DY","F");

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
   entry=leg->AddEntry("new_histo_group_top_hww2l2v_13TeV_WW_0jmm_events","tW and t#bart","F");

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
   entry=leg->AddEntry("new_histo_group_WW_hww2l2v_13TeV_WW_0jmm_events","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_hww2l2v_13TeV_WW_0jmm_events","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_VZ_hww2l2v_13TeV_WW_0jmm_events","VZ/#gamma*/#gamma","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_hww2l2v_13TeV_WW_0jmm_events","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_hww2l2v_13TeV_WW_0jmm_events","Data","EPL");
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
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   leg->Draw();
   
   TH1F *hframe_copy108 = new TH1F("hframe_copy108","",1000,0,2);
   hframe_copy108->SetMinimum(0);
   hframe_copy108->SetMaximum(15098.03);
   hframe_copy108->SetDirectory(0);
   hframe_copy108->SetStats(0);
   hframe_copy108->SetLineStyle(0);
   hframe_copy108->SetMarkerStyle(20);
   hframe_copy108->GetXaxis()->SetTitle("events");
   hframe_copy108->GetXaxis()->SetNdivisions(506);
   hframe_copy108->GetXaxis()->SetLabelFont(42);
   hframe_copy108->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy108->GetXaxis()->SetLabelSize(0.05);
   hframe_copy108->GetXaxis()->SetTitleSize(0.06);
   hframe_copy108->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy108->GetXaxis()->SetTitleFont(42);
   hframe_copy108->GetYaxis()->SetTitle("Events");
   hframe_copy108->GetYaxis()->SetLabelFont(42);
   hframe_copy108->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy108->GetYaxis()->SetLabelSize(0.05);
   hframe_copy108->GetYaxis()->SetTitleSize(0.06);
   hframe_copy108->GetYaxis()->SetTitleOffset(1.25);
   hframe_copy108->GetYaxis()->SetTitleFont(42);
   hframe_copy108->GetZaxis()->SetLabelFont(42);
   hframe_copy108->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy108->GetZaxis()->SetLabelSize(0.05);
   hframe_copy108->GetZaxis()->SetTitleSize(0.06);
   hframe_copy108->GetZaxis()->SetTitleFont(42);
   hframe_copy108->Draw("sameaxis");
   cchww2l2v_13TeV_WW_0jmm_events->Modified();
   cchww2l2v_13TeV_WW_0jmm_events->cd();
   cchww2l2v_13TeV_WW_0jmm_events->SetSelected(cchww2l2v_13TeV_WW_0jmm_events);
}
