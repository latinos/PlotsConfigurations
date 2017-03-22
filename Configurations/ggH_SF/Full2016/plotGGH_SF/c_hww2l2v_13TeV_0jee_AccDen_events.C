void c_hww2l2v_13TeV_0jee_AccDen_events()
{
//=========Macro generated from canvas: cchww2l2v_13TeV_0jee_AccDen_events/cc
//=========  (Tue Mar 21 11:46:33 2017) by ROOT version6.02/13
   TCanvas *cchww2l2v_13TeV_0jee_AccDen_events = new TCanvas("cchww2l2v_13TeV_0jee_AccDen_events", "cc",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   cchww2l2v_13TeV_0jee_AccDen_events->SetHighLightColor(2);
   cchww2l2v_13TeV_0jee_AccDen_events->Range(-0.4,-7507.95,2.1,50245.51);
   cchww2l2v_13TeV_0jee_AccDen_events->SetFillColor(0);
   cchww2l2v_13TeV_0jee_AccDen_events->SetBorderMode(0);
   cchww2l2v_13TeV_0jee_AccDen_events->SetBorderSize(2);
   cchww2l2v_13TeV_0jee_AccDen_events->SetTickx(1);
   cchww2l2v_13TeV_0jee_AccDen_events->SetTicky(1);
   cchww2l2v_13TeV_0jee_AccDen_events->SetLeftMargin(0.16);
   cchww2l2v_13TeV_0jee_AccDen_events->SetRightMargin(0.04);
   cchww2l2v_13TeV_0jee_AccDen_events->SetTopMargin(0.05);
   cchww2l2v_13TeV_0jee_AccDen_events->SetBottomMargin(0.13);
   cchww2l2v_13TeV_0jee_AccDen_events->SetFrameFillStyle(0);
   cchww2l2v_13TeV_0jee_AccDen_events->SetFrameBorderMode(0);
   cchww2l2v_13TeV_0jee_AccDen_events->SetFrameFillStyle(0);
   cchww2l2v_13TeV_0jee_AccDen_events->SetFrameBorderMode(0);
   
   TH1F *hframe181 = new TH1F("hframe181","",1000,0,2);
   hframe181->SetMinimum(0);
   hframe181->SetMaximum(47357.84);
   hframe181->SetDirectory(0);
   hframe181->SetStats(0);
   hframe181->SetLineStyle(0);
   hframe181->SetMarkerStyle(20);
   hframe181->GetXaxis()->SetTitle("events");
   hframe181->GetXaxis()->SetNdivisions(506);
   hframe181->GetXaxis()->SetLabelFont(42);
   hframe181->GetXaxis()->SetLabelOffset(0.007);
   hframe181->GetXaxis()->SetLabelSize(0.05);
   hframe181->GetXaxis()->SetTitleSize(0.06);
   hframe181->GetXaxis()->SetTitleOffset(0.9);
   hframe181->GetXaxis()->SetTitleFont(42);
   hframe181->GetYaxis()->SetTitle("Events");
   hframe181->GetYaxis()->SetLabelFont(42);
   hframe181->GetYaxis()->SetLabelOffset(0.007);
   hframe181->GetYaxis()->SetLabelSize(0.05);
   hframe181->GetYaxis()->SetTitleSize(0.06);
   hframe181->GetYaxis()->SetTitleOffset(1.25);
   hframe181->GetYaxis()->SetTitleFont(42);
   hframe181->GetZaxis()->SetLabelFont(42);
   hframe181->GetZaxis()->SetLabelOffset(0.007);
   hframe181->GetZaxis()->SetLabelSize(0.05);
   hframe181->GetZaxis()->SetTitleSize(0.06);
   hframe181->GetZaxis()->SetTitleFont(42);
   hframe181->Draw(" ");
   
   THStack *thsBackground_grouped_hww2l2v_13TeV_0jee_AccDen_events = new THStack();
   thsBackground_grouped_hww2l2v_13TeV_0jee_AccDen_events->SetName("thsBackground_grouped_hww2l2v_13TeV_0jee_AccDen_events");
   thsBackground_grouped_hww2l2v_13TeV_0jee_AccDen_events->SetTitle("thsBackground_grouped_hww2l2v_13TeV_0jee_AccDen_events");
   
   TH1F *thsBackground_grouped_hww2l2v_13TeV_0jee_AccDen_events_stack_41 = new TH1F("thsBackground_grouped_hww2l2v_13TeV_0jee_AccDen_events_stack_41","thsBackground_grouped_hww2l2v_13TeV_0jee_AccDen_events",1,0,2);
   thsBackground_grouped_hww2l2v_13TeV_0jee_AccDen_events_stack_41->SetMinimum(0);
   thsBackground_grouped_hww2l2v_13TeV_0jee_AccDen_events_stack_41->SetMaximum(12209.96);
   thsBackground_grouped_hww2l2v_13TeV_0jee_AccDen_events_stack_41->SetDirectory(0);
   thsBackground_grouped_hww2l2v_13TeV_0jee_AccDen_events_stack_41->SetStats(0);
   thsBackground_grouped_hww2l2v_13TeV_0jee_AccDen_events_stack_41->SetLineStyle(0);
   thsBackground_grouped_hww2l2v_13TeV_0jee_AccDen_events_stack_41->SetMarkerStyle(20);
   thsBackground_grouped_hww2l2v_13TeV_0jee_AccDen_events_stack_41->GetXaxis()->SetLabelFont(42);
   thsBackground_grouped_hww2l2v_13TeV_0jee_AccDen_events_stack_41->GetXaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_hww2l2v_13TeV_0jee_AccDen_events_stack_41->GetXaxis()->SetLabelSize(0.05);
   thsBackground_grouped_hww2l2v_13TeV_0jee_AccDen_events_stack_41->GetXaxis()->SetTitleSize(0.06);
   thsBackground_grouped_hww2l2v_13TeV_0jee_AccDen_events_stack_41->GetXaxis()->SetTitleOffset(0.9);
   thsBackground_grouped_hww2l2v_13TeV_0jee_AccDen_events_stack_41->GetXaxis()->SetTitleFont(42);
   thsBackground_grouped_hww2l2v_13TeV_0jee_AccDen_events_stack_41->GetYaxis()->SetLabelFont(42);
   thsBackground_grouped_hww2l2v_13TeV_0jee_AccDen_events_stack_41->GetYaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_hww2l2v_13TeV_0jee_AccDen_events_stack_41->GetYaxis()->SetLabelSize(0.05);
   thsBackground_grouped_hww2l2v_13TeV_0jee_AccDen_events_stack_41->GetYaxis()->SetTitleSize(0.06);
   thsBackground_grouped_hww2l2v_13TeV_0jee_AccDen_events_stack_41->GetYaxis()->SetTitleOffset(1.25);
   thsBackground_grouped_hww2l2v_13TeV_0jee_AccDen_events_stack_41->GetYaxis()->SetTitleFont(42);
   thsBackground_grouped_hww2l2v_13TeV_0jee_AccDen_events_stack_41->GetZaxis()->SetLabelFont(42);
   thsBackground_grouped_hww2l2v_13TeV_0jee_AccDen_events_stack_41->GetZaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_hww2l2v_13TeV_0jee_AccDen_events_stack_41->GetZaxis()->SetLabelSize(0.05);
   thsBackground_grouped_hww2l2v_13TeV_0jee_AccDen_events_stack_41->GetZaxis()->SetTitleSize(0.06);
   thsBackground_grouped_hww2l2v_13TeV_0jee_AccDen_events_stack_41->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_hww2l2v_13TeV_0jee_AccDen_events->SetHistogram(thsBackground_grouped_hww2l2v_13TeV_0jee_AccDen_events_stack_41);
   
   
   TH1D *new_histo_group_DY_hww2l2v_13TeV_0jee_AccDen_events182 = new TH1D("new_histo_group_DY_hww2l2v_13TeV_0jee_AccDen_events182","histo_DY",1,0,2);
   new_histo_group_DY_hww2l2v_13TeV_0jee_AccDen_events182->SetBinContent(1,8246.327);
   new_histo_group_DY_hww2l2v_13TeV_0jee_AccDen_events182->SetBinError(1,393.022);
   new_histo_group_DY_hww2l2v_13TeV_0jee_AccDen_events182->SetEntries(3786);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#009900");
   new_histo_group_DY_hww2l2v_13TeV_0jee_AccDen_events182->SetFillColor(ci);
   new_histo_group_DY_hww2l2v_13TeV_0jee_AccDen_events182->SetFillStyle(3001);

   ci = TColor::GetColor("#009900");
   new_histo_group_DY_hww2l2v_13TeV_0jee_AccDen_events182->SetLineColor(ci);
   new_histo_group_DY_hww2l2v_13TeV_0jee_AccDen_events182->GetXaxis()->SetLabelFont(42);
   new_histo_group_DY_hww2l2v_13TeV_0jee_AccDen_events182->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_DY_hww2l2v_13TeV_0jee_AccDen_events182->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_DY_hww2l2v_13TeV_0jee_AccDen_events182->GetXaxis()->SetTitleFont(42);
   new_histo_group_DY_hww2l2v_13TeV_0jee_AccDen_events182->GetYaxis()->SetLabelFont(42);
   new_histo_group_DY_hww2l2v_13TeV_0jee_AccDen_events182->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_DY_hww2l2v_13TeV_0jee_AccDen_events182->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_DY_hww2l2v_13TeV_0jee_AccDen_events182->GetYaxis()->SetTitleFont(42);
   new_histo_group_DY_hww2l2v_13TeV_0jee_AccDen_events182->GetZaxis()->SetLabelFont(42);
   new_histo_group_DY_hww2l2v_13TeV_0jee_AccDen_events182->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_DY_hww2l2v_13TeV_0jee_AccDen_events182->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_DY_hww2l2v_13TeV_0jee_AccDen_events182->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_hww2l2v_13TeV_0jee_AccDen_events->Add(new_histo_group_DY_hww2l2v_13TeV_0jee_AccDen_events,"");
   
   TH1D *new_histo_group_top_hww2l2v_13TeV_0jee_AccDen_events183 = new TH1D("new_histo_group_top_hww2l2v_13TeV_0jee_AccDen_events183","histo_top",1,0,2);
   new_histo_group_top_hww2l2v_13TeV_0jee_AccDen_events183->SetBinContent(1,395.1035);
   new_histo_group_top_hww2l2v_13TeV_0jee_AccDen_events183->SetBinError(1,3.845537);
   new_histo_group_top_hww2l2v_13TeV_0jee_AccDen_events183->SetEntries(11581);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_top_hww2l2v_13TeV_0jee_AccDen_events183->SetFillColor(ci);
   new_histo_group_top_hww2l2v_13TeV_0jee_AccDen_events183->SetFillStyle(3001);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_top_hww2l2v_13TeV_0jee_AccDen_events183->SetLineColor(ci);
   new_histo_group_top_hww2l2v_13TeV_0jee_AccDen_events183->GetXaxis()->SetLabelFont(42);
   new_histo_group_top_hww2l2v_13TeV_0jee_AccDen_events183->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_top_hww2l2v_13TeV_0jee_AccDen_events183->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_top_hww2l2v_13TeV_0jee_AccDen_events183->GetXaxis()->SetTitleFont(42);
   new_histo_group_top_hww2l2v_13TeV_0jee_AccDen_events183->GetYaxis()->SetLabelFont(42);
   new_histo_group_top_hww2l2v_13TeV_0jee_AccDen_events183->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_top_hww2l2v_13TeV_0jee_AccDen_events183->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_top_hww2l2v_13TeV_0jee_AccDen_events183->GetYaxis()->SetTitleFont(42);
   new_histo_group_top_hww2l2v_13TeV_0jee_AccDen_events183->GetZaxis()->SetLabelFont(42);
   new_histo_group_top_hww2l2v_13TeV_0jee_AccDen_events183->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_top_hww2l2v_13TeV_0jee_AccDen_events183->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_top_hww2l2v_13TeV_0jee_AccDen_events183->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_hww2l2v_13TeV_0jee_AccDen_events->Add(new_histo_group_top_hww2l2v_13TeV_0jee_AccDen_events,"");
   
   TH1D *new_histo_group_WW_hww2l2v_13TeV_0jee_AccDen_events184 = new TH1D("new_histo_group_WW_hww2l2v_13TeV_0jee_AccDen_events184","histo_WW",1,0,2);
   new_histo_group_WW_hww2l2v_13TeV_0jee_AccDen_events184->SetBinContent(1,1902.778);
   new_histo_group_WW_hww2l2v_13TeV_0jee_AccDen_events184->SetBinError(1,18.23712);
   new_histo_group_WW_hww2l2v_13TeV_0jee_AccDen_events184->SetEntries(14807);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_hww2l2v_13TeV_0jee_AccDen_events184->SetFillColor(ci);
   new_histo_group_WW_hww2l2v_13TeV_0jee_AccDen_events184->SetFillStyle(3001);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_hww2l2v_13TeV_0jee_AccDen_events184->SetLineColor(ci);
   new_histo_group_WW_hww2l2v_13TeV_0jee_AccDen_events184->GetXaxis()->SetLabelFont(42);
   new_histo_group_WW_hww2l2v_13TeV_0jee_AccDen_events184->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WW_hww2l2v_13TeV_0jee_AccDen_events184->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WW_hww2l2v_13TeV_0jee_AccDen_events184->GetXaxis()->SetTitleFont(42);
   new_histo_group_WW_hww2l2v_13TeV_0jee_AccDen_events184->GetYaxis()->SetLabelFont(42);
   new_histo_group_WW_hww2l2v_13TeV_0jee_AccDen_events184->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WW_hww2l2v_13TeV_0jee_AccDen_events184->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WW_hww2l2v_13TeV_0jee_AccDen_events184->GetYaxis()->SetTitleFont(42);
   new_histo_group_WW_hww2l2v_13TeV_0jee_AccDen_events184->GetZaxis()->SetLabelFont(42);
   new_histo_group_WW_hww2l2v_13TeV_0jee_AccDen_events184->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WW_hww2l2v_13TeV_0jee_AccDen_events184->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WW_hww2l2v_13TeV_0jee_AccDen_events184->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_hww2l2v_13TeV_0jee_AccDen_events->Add(new_histo_group_WW_hww2l2v_13TeV_0jee_AccDen_events,"");
   
   TH1D *new_histo_group_VVV_hww2l2v_13TeV_0jee_AccDen_events185 = new TH1D("new_histo_group_VVV_hww2l2v_13TeV_0jee_AccDen_events185","histo_VVV",1,0,2);
   new_histo_group_VVV_hww2l2v_13TeV_0jee_AccDen_events185->SetBinContent(1,1.849357);
   new_histo_group_VVV_hww2l2v_13TeV_0jee_AccDen_events185->SetBinError(1,0.2373326);
   new_histo_group_VVV_hww2l2v_13TeV_0jee_AccDen_events185->SetEntries(100);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_hww2l2v_13TeV_0jee_AccDen_events185->SetFillColor(ci);
   new_histo_group_VVV_hww2l2v_13TeV_0jee_AccDen_events185->SetFillStyle(3001);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_hww2l2v_13TeV_0jee_AccDen_events185->SetLineColor(ci);
   new_histo_group_VVV_hww2l2v_13TeV_0jee_AccDen_events185->GetXaxis()->SetLabelFont(42);
   new_histo_group_VVV_hww2l2v_13TeV_0jee_AccDen_events185->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_hww2l2v_13TeV_0jee_AccDen_events185->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_hww2l2v_13TeV_0jee_AccDen_events185->GetXaxis()->SetTitleFont(42);
   new_histo_group_VVV_hww2l2v_13TeV_0jee_AccDen_events185->GetYaxis()->SetLabelFont(42);
   new_histo_group_VVV_hww2l2v_13TeV_0jee_AccDen_events185->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_hww2l2v_13TeV_0jee_AccDen_events185->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_hww2l2v_13TeV_0jee_AccDen_events185->GetYaxis()->SetTitleFont(42);
   new_histo_group_VVV_hww2l2v_13TeV_0jee_AccDen_events185->GetZaxis()->SetLabelFont(42);
   new_histo_group_VVV_hww2l2v_13TeV_0jee_AccDen_events185->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_hww2l2v_13TeV_0jee_AccDen_events185->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_hww2l2v_13TeV_0jee_AccDen_events185->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_hww2l2v_13TeV_0jee_AccDen_events->Add(new_histo_group_VVV_hww2l2v_13TeV_0jee_AccDen_events,"");
   
   TH1D *new_histo_group_VZ_hww2l2v_13TeV_0jee_AccDen_events186 = new TH1D("new_histo_group_VZ_hww2l2v_13TeV_0jee_AccDen_events186","histo_Vg",1,0,2);
   new_histo_group_VZ_hww2l2v_13TeV_0jee_AccDen_events186->SetBinContent(1,956.6263);
   new_histo_group_VZ_hww2l2v_13TeV_0jee_AccDen_events186->SetBinError(1,161.0355);
   new_histo_group_VZ_hww2l2v_13TeV_0jee_AccDen_events186->SetEntries(19041);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_VZ_hww2l2v_13TeV_0jee_AccDen_events186->SetFillColor(ci);
   new_histo_group_VZ_hww2l2v_13TeV_0jee_AccDen_events186->SetFillStyle(3001);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_VZ_hww2l2v_13TeV_0jee_AccDen_events186->SetLineColor(ci);
   new_histo_group_VZ_hww2l2v_13TeV_0jee_AccDen_events186->GetXaxis()->SetLabelFont(42);
   new_histo_group_VZ_hww2l2v_13TeV_0jee_AccDen_events186->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_VZ_hww2l2v_13TeV_0jee_AccDen_events186->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_VZ_hww2l2v_13TeV_0jee_AccDen_events186->GetXaxis()->SetTitleFont(42);
   new_histo_group_VZ_hww2l2v_13TeV_0jee_AccDen_events186->GetYaxis()->SetLabelFont(42);
   new_histo_group_VZ_hww2l2v_13TeV_0jee_AccDen_events186->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_VZ_hww2l2v_13TeV_0jee_AccDen_events186->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_VZ_hww2l2v_13TeV_0jee_AccDen_events186->GetYaxis()->SetTitleFont(42);
   new_histo_group_VZ_hww2l2v_13TeV_0jee_AccDen_events186->GetZaxis()->SetLabelFont(42);
   new_histo_group_VZ_hww2l2v_13TeV_0jee_AccDen_events186->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_VZ_hww2l2v_13TeV_0jee_AccDen_events186->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_VZ_hww2l2v_13TeV_0jee_AccDen_events186->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_hww2l2v_13TeV_0jee_AccDen_events->Add(new_histo_group_VZ_hww2l2v_13TeV_0jee_AccDen_events,"");
   
   TH1D *new_histo_group_Higgs_hww2l2v_13TeV_0jee_AccDen_events187 = new TH1D("new_histo_group_Higgs_hww2l2v_13TeV_0jee_AccDen_events187","histo_H_htt",1,0,2);
   new_histo_group_Higgs_hww2l2v_13TeV_0jee_AccDen_events187->SetBinContent(1,125.8504);
   new_histo_group_Higgs_hww2l2v_13TeV_0jee_AccDen_events187->SetBinError(1,2.798937);
   new_histo_group_Higgs_hww2l2v_13TeV_0jee_AccDen_events187->SetEntries(2797);
   new_histo_group_Higgs_hww2l2v_13TeV_0jee_AccDen_events187->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_hww2l2v_13TeV_0jee_AccDen_events187->SetLineColor(ci);
   new_histo_group_Higgs_hww2l2v_13TeV_0jee_AccDen_events187->SetLineWidth(2);
   new_histo_group_Higgs_hww2l2v_13TeV_0jee_AccDen_events187->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_hww2l2v_13TeV_0jee_AccDen_events187->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_hww2l2v_13TeV_0jee_AccDen_events187->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_hww2l2v_13TeV_0jee_AccDen_events187->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_hww2l2v_13TeV_0jee_AccDen_events187->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_hww2l2v_13TeV_0jee_AccDen_events187->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_hww2l2v_13TeV_0jee_AccDen_events187->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_hww2l2v_13TeV_0jee_AccDen_events187->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_hww2l2v_13TeV_0jee_AccDen_events187->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_hww2l2v_13TeV_0jee_AccDen_events187->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_hww2l2v_13TeV_0jee_AccDen_events187->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_hww2l2v_13TeV_0jee_AccDen_events187->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_hww2l2v_13TeV_0jee_AccDen_events->Add(new_histo_group_Higgs_hww2l2v_13TeV_0jee_AccDen_events,"");
   thsBackground_grouped_hww2l2v_13TeV_0jee_AccDen_events->Draw("hist same");
   
   thsSignal_grouped_hww2l2v_13TeV_0jee_AccDen_events = new THStack();
   thsSignal_grouped_hww2l2v_13TeV_0jee_AccDen_events->SetName("thsSignal_grouped_hww2l2v_13TeV_0jee_AccDen_events");
   thsSignal_grouped_hww2l2v_13TeV_0jee_AccDen_events->SetTitle("thsSignal_grouped_hww2l2v_13TeV_0jee_AccDen_events");
   
   TH1F *thsSignal_grouped_hww2l2v_13TeV_0jee_AccDen_events_stack_42 = new TH1F("thsSignal_grouped_hww2l2v_13TeV_0jee_AccDen_events_stack_42","thsSignal_grouped_hww2l2v_13TeV_0jee_AccDen_events",1,0,2);
   thsSignal_grouped_hww2l2v_13TeV_0jee_AccDen_events_stack_42->SetMinimum(0);
   thsSignal_grouped_hww2l2v_13TeV_0jee_AccDen_events_stack_42->SetMaximum(135.0818);
   thsSignal_grouped_hww2l2v_13TeV_0jee_AccDen_events_stack_42->SetDirectory(0);
   thsSignal_grouped_hww2l2v_13TeV_0jee_AccDen_events_stack_42->SetStats(0);
   thsSignal_grouped_hww2l2v_13TeV_0jee_AccDen_events_stack_42->SetLineStyle(0);
   thsSignal_grouped_hww2l2v_13TeV_0jee_AccDen_events_stack_42->SetMarkerStyle(20);
   thsSignal_grouped_hww2l2v_13TeV_0jee_AccDen_events_stack_42->GetXaxis()->SetLabelFont(42);
   thsSignal_grouped_hww2l2v_13TeV_0jee_AccDen_events_stack_42->GetXaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_hww2l2v_13TeV_0jee_AccDen_events_stack_42->GetXaxis()->SetLabelSize(0.05);
   thsSignal_grouped_hww2l2v_13TeV_0jee_AccDen_events_stack_42->GetXaxis()->SetTitleSize(0.06);
   thsSignal_grouped_hww2l2v_13TeV_0jee_AccDen_events_stack_42->GetXaxis()->SetTitleOffset(0.9);
   thsSignal_grouped_hww2l2v_13TeV_0jee_AccDen_events_stack_42->GetXaxis()->SetTitleFont(42);
   thsSignal_grouped_hww2l2v_13TeV_0jee_AccDen_events_stack_42->GetYaxis()->SetLabelFont(42);
   thsSignal_grouped_hww2l2v_13TeV_0jee_AccDen_events_stack_42->GetYaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_hww2l2v_13TeV_0jee_AccDen_events_stack_42->GetYaxis()->SetLabelSize(0.05);
   thsSignal_grouped_hww2l2v_13TeV_0jee_AccDen_events_stack_42->GetYaxis()->SetTitleSize(0.06);
   thsSignal_grouped_hww2l2v_13TeV_0jee_AccDen_events_stack_42->GetYaxis()->SetTitleOffset(1.25);
   thsSignal_grouped_hww2l2v_13TeV_0jee_AccDen_events_stack_42->GetYaxis()->SetTitleFont(42);
   thsSignal_grouped_hww2l2v_13TeV_0jee_AccDen_events_stack_42->GetZaxis()->SetLabelFont(42);
   thsSignal_grouped_hww2l2v_13TeV_0jee_AccDen_events_stack_42->GetZaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_hww2l2v_13TeV_0jee_AccDen_events_stack_42->GetZaxis()->SetLabelSize(0.05);
   thsSignal_grouped_hww2l2v_13TeV_0jee_AccDen_events_stack_42->GetZaxis()->SetTitleSize(0.06);
   thsSignal_grouped_hww2l2v_13TeV_0jee_AccDen_events_stack_42->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_hww2l2v_13TeV_0jee_AccDen_events->SetHistogram(thsSignal_grouped_hww2l2v_13TeV_0jee_AccDen_events_stack_42);
   
   
   TH1D *new_histo_group_Higgs_hww2l2v_13TeV_0jee_AccDen_events188 = new TH1D("new_histo_group_Higgs_hww2l2v_13TeV_0jee_AccDen_events188","histo_H_htt",1,0,2);
   new_histo_group_Higgs_hww2l2v_13TeV_0jee_AccDen_events188->SetBinContent(1,125.8504);
   new_histo_group_Higgs_hww2l2v_13TeV_0jee_AccDen_events188->SetBinError(1,2.798937);
   new_histo_group_Higgs_hww2l2v_13TeV_0jee_AccDen_events188->SetEntries(2797);
   new_histo_group_Higgs_hww2l2v_13TeV_0jee_AccDen_events188->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_hww2l2v_13TeV_0jee_AccDen_events188->SetLineColor(ci);
   new_histo_group_Higgs_hww2l2v_13TeV_0jee_AccDen_events188->SetLineWidth(2);
   new_histo_group_Higgs_hww2l2v_13TeV_0jee_AccDen_events188->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_hww2l2v_13TeV_0jee_AccDen_events188->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_hww2l2v_13TeV_0jee_AccDen_events188->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_hww2l2v_13TeV_0jee_AccDen_events188->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_hww2l2v_13TeV_0jee_AccDen_events188->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_hww2l2v_13TeV_0jee_AccDen_events188->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_hww2l2v_13TeV_0jee_AccDen_events188->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_hww2l2v_13TeV_0jee_AccDen_events188->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_hww2l2v_13TeV_0jee_AccDen_events188->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_hww2l2v_13TeV_0jee_AccDen_events188->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_hww2l2v_13TeV_0jee_AccDen_events188->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_hww2l2v_13TeV_0jee_AccDen_events188->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_hww2l2v_13TeV_0jee_AccDen_events->Add(new_histo_group_Higgs_hww2l2v_13TeV_0jee_AccDen_events,"");
   thsSignal_grouped_hww2l2v_13TeV_0jee_AccDen_events->Draw("hist same noclear");
   
   Double_t _fx3028[1] = {
   1};
   Double_t _fy3028[1] = {
   18806};
   Double_t _felx3028[1] = {
   1};
   Double_t _fely3028[1] = {
   137.1367};
   Double_t _fehx3028[1] = {
   1};
   Double_t _fehy3028[1] = {
   138.1404};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(1,_fx3028,_fy3028,_felx3028,_fehx3028,_fely3028,_fehy3028);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(1);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3028 = new TH1F("Graph_Graph3028","",100,0,2.2);
   Graph_Graph3028->SetMinimum(18641.34);
   Graph_Graph3028->SetMaximum(18971.67);
   Graph_Graph3028->SetDirectory(0);
   Graph_Graph3028->SetStats(0);
   Graph_Graph3028->SetLineStyle(0);
   Graph_Graph3028->SetMarkerStyle(20);
   Graph_Graph3028->GetXaxis()->SetLabelFont(42);
   Graph_Graph3028->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3028->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3028->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3028->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3028->GetXaxis()->SetTitleFont(42);
   Graph_Graph3028->GetYaxis()->SetLabelFont(42);
   Graph_Graph3028->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3028->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3028->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3028->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3028->GetYaxis()->SetTitleFont(42);
   Graph_Graph3028->GetZaxis()->SetLabelFont(42);
   Graph_Graph3028->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3028->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3028->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3028->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3028);
   
   grae->Draw("p0");
   
   TLegend *leg = new TLegend(0.2,0.7,0.8,0.9,NULL,"brNDC");
   leg->SetTextFont(62);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("new_histo_group_DY_hww2l2v_13TeV_0jee_AccDen_events","DY","F");

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
   entry=leg->AddEntry("new_histo_group_top_hww2l2v_13TeV_0jee_AccDen_events","tW and t#bart","F");

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
   entry=leg->AddEntry("new_histo_group_WW_hww2l2v_13TeV_0jee_AccDen_events","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_hww2l2v_13TeV_0jee_AccDen_events","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_VZ_hww2l2v_13TeV_0jee_AccDen_events","VZ/#gamma*/#gamma","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_hww2l2v_13TeV_0jee_AccDen_events","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_hww2l2v_13TeV_0jee_AccDen_events","Data","EPL");
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
   entry=leg->AddEntry("new_histo_group_DY_hww2l2v_13TeV_0jee_AccDen_events","DY","F");

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
   entry=leg->AddEntry("new_histo_group_top_hww2l2v_13TeV_0jee_AccDen_events","tW and t#bart","F");

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
   entry=leg->AddEntry("new_histo_group_WW_hww2l2v_13TeV_0jee_AccDen_events","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_hww2l2v_13TeV_0jee_AccDen_events","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_VZ_hww2l2v_13TeV_0jee_AccDen_events","VZ/#gamma*/#gamma","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_hww2l2v_13TeV_0jee_AccDen_events","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_hww2l2v_13TeV_0jee_AccDen_events","Data","EPL");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   leg->Draw();
   
   TH1F *hframe_copy189 = new TH1F("hframe_copy189","",1000,0,2);
   hframe_copy189->SetMinimum(0);
   hframe_copy189->SetMaximum(47357.84);
   hframe_copy189->SetDirectory(0);
   hframe_copy189->SetStats(0);
   hframe_copy189->SetLineStyle(0);
   hframe_copy189->SetMarkerStyle(20);
   hframe_copy189->GetXaxis()->SetTitle("events");
   hframe_copy189->GetXaxis()->SetNdivisions(506);
   hframe_copy189->GetXaxis()->SetLabelFont(42);
   hframe_copy189->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy189->GetXaxis()->SetLabelSize(0.05);
   hframe_copy189->GetXaxis()->SetTitleSize(0.06);
   hframe_copy189->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy189->GetXaxis()->SetTitleFont(42);
   hframe_copy189->GetYaxis()->SetTitle("Events");
   hframe_copy189->GetYaxis()->SetLabelFont(42);
   hframe_copy189->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy189->GetYaxis()->SetLabelSize(0.05);
   hframe_copy189->GetYaxis()->SetTitleSize(0.06);
   hframe_copy189->GetYaxis()->SetTitleOffset(1.25);
   hframe_copy189->GetYaxis()->SetTitleFont(42);
   hframe_copy189->GetZaxis()->SetLabelFont(42);
   hframe_copy189->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy189->GetZaxis()->SetLabelSize(0.05);
   hframe_copy189->GetZaxis()->SetTitleSize(0.06);
   hframe_copy189->GetZaxis()->SetTitleFont(42);
   hframe_copy189->Draw("sameaxis");
   cchww2l2v_13TeV_0jee_AccDen_events->Modified();
   cchww2l2v_13TeV_0jee_AccDen_events->cd();
   cchww2l2v_13TeV_0jee_AccDen_events->SetSelected(cchww2l2v_13TeV_0jee_AccDen_events);
}
