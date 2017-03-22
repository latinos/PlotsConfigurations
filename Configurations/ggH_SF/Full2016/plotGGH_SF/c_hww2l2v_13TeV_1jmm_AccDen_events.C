void c_hww2l2v_13TeV_1jmm_AccDen_events()
{
//=========Macro generated from canvas: cchww2l2v_13TeV_1jmm_AccDen_events/cc
//=========  (Tue Mar 21 11:46:36 2017) by ROOT version6.02/13
   TCanvas *cchww2l2v_13TeV_1jmm_AccDen_events = new TCanvas("cchww2l2v_13TeV_1jmm_AccDen_events", "cc",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   cchww2l2v_13TeV_1jmm_AccDen_events->SetHighLightColor(2);
   cchww2l2v_13TeV_1jmm_AccDen_events->Range(-0.4,-14974.92,2.1,100216.8);
   cchww2l2v_13TeV_1jmm_AccDen_events->SetFillColor(0);
   cchww2l2v_13TeV_1jmm_AccDen_events->SetBorderMode(0);
   cchww2l2v_13TeV_1jmm_AccDen_events->SetBorderSize(2);
   cchww2l2v_13TeV_1jmm_AccDen_events->SetTickx(1);
   cchww2l2v_13TeV_1jmm_AccDen_events->SetTicky(1);
   cchww2l2v_13TeV_1jmm_AccDen_events->SetLeftMargin(0.16);
   cchww2l2v_13TeV_1jmm_AccDen_events->SetRightMargin(0.04);
   cchww2l2v_13TeV_1jmm_AccDen_events->SetTopMargin(0.05);
   cchww2l2v_13TeV_1jmm_AccDen_events->SetBottomMargin(0.13);
   cchww2l2v_13TeV_1jmm_AccDen_events->SetFrameFillStyle(0);
   cchww2l2v_13TeV_1jmm_AccDen_events->SetFrameBorderMode(0);
   cchww2l2v_13TeV_1jmm_AccDen_events->SetFrameFillStyle(0);
   cchww2l2v_13TeV_1jmm_AccDen_events->SetFrameBorderMode(0);
   
   TH1F *hframe208 = new TH1F("hframe208","",1000,0,2);
   hframe208->SetMinimum(0);
   hframe208->SetMaximum(94457.2);
   hframe208->SetDirectory(0);
   hframe208->SetStats(0);
   hframe208->SetLineStyle(0);
   hframe208->SetMarkerStyle(20);
   hframe208->GetXaxis()->SetTitle("events");
   hframe208->GetXaxis()->SetNdivisions(506);
   hframe208->GetXaxis()->SetLabelFont(42);
   hframe208->GetXaxis()->SetLabelOffset(0.007);
   hframe208->GetXaxis()->SetLabelSize(0.05);
   hframe208->GetXaxis()->SetTitleSize(0.06);
   hframe208->GetXaxis()->SetTitleOffset(0.9);
   hframe208->GetXaxis()->SetTitleFont(42);
   hframe208->GetYaxis()->SetTitle("Events");
   hframe208->GetYaxis()->SetLabelFont(42);
   hframe208->GetYaxis()->SetLabelOffset(0.007);
   hframe208->GetYaxis()->SetLabelSize(0.05);
   hframe208->GetYaxis()->SetTitleSize(0.06);
   hframe208->GetYaxis()->SetTitleOffset(1.25);
   hframe208->GetYaxis()->SetTitleFont(42);
   hframe208->GetZaxis()->SetLabelFont(42);
   hframe208->GetZaxis()->SetLabelOffset(0.007);
   hframe208->GetZaxis()->SetLabelSize(0.05);
   hframe208->GetZaxis()->SetTitleSize(0.06);
   hframe208->GetZaxis()->SetTitleFont(42);
   hframe208->Draw(" ");
   
   THStack *thsBackground_grouped_hww2l2v_13TeV_1jmm_AccDen_events = new THStack();
   thsBackground_grouped_hww2l2v_13TeV_1jmm_AccDen_events->SetName("thsBackground_grouped_hww2l2v_13TeV_1jmm_AccDen_events");
   thsBackground_grouped_hww2l2v_13TeV_1jmm_AccDen_events->SetTitle("thsBackground_grouped_hww2l2v_13TeV_1jmm_AccDen_events");
   
   TH1F *thsBackground_grouped_hww2l2v_13TeV_1jmm_AccDen_events_stack_47 = new TH1F("thsBackground_grouped_hww2l2v_13TeV_1jmm_AccDen_events_stack_47","thsBackground_grouped_hww2l2v_13TeV_1jmm_AccDen_events",1,0,2);
   thsBackground_grouped_hww2l2v_13TeV_1jmm_AccDen_events_stack_47->SetMinimum(0);
   thsBackground_grouped_hww2l2v_13TeV_1jmm_AccDen_events_stack_47->SetMaximum(19590.71);
   thsBackground_grouped_hww2l2v_13TeV_1jmm_AccDen_events_stack_47->SetDirectory(0);
   thsBackground_grouped_hww2l2v_13TeV_1jmm_AccDen_events_stack_47->SetStats(0);
   thsBackground_grouped_hww2l2v_13TeV_1jmm_AccDen_events_stack_47->SetLineStyle(0);
   thsBackground_grouped_hww2l2v_13TeV_1jmm_AccDen_events_stack_47->SetMarkerStyle(20);
   thsBackground_grouped_hww2l2v_13TeV_1jmm_AccDen_events_stack_47->GetXaxis()->SetLabelFont(42);
   thsBackground_grouped_hww2l2v_13TeV_1jmm_AccDen_events_stack_47->GetXaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_hww2l2v_13TeV_1jmm_AccDen_events_stack_47->GetXaxis()->SetLabelSize(0.05);
   thsBackground_grouped_hww2l2v_13TeV_1jmm_AccDen_events_stack_47->GetXaxis()->SetTitleSize(0.06);
   thsBackground_grouped_hww2l2v_13TeV_1jmm_AccDen_events_stack_47->GetXaxis()->SetTitleOffset(0.9);
   thsBackground_grouped_hww2l2v_13TeV_1jmm_AccDen_events_stack_47->GetXaxis()->SetTitleFont(42);
   thsBackground_grouped_hww2l2v_13TeV_1jmm_AccDen_events_stack_47->GetYaxis()->SetLabelFont(42);
   thsBackground_grouped_hww2l2v_13TeV_1jmm_AccDen_events_stack_47->GetYaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_hww2l2v_13TeV_1jmm_AccDen_events_stack_47->GetYaxis()->SetLabelSize(0.05);
   thsBackground_grouped_hww2l2v_13TeV_1jmm_AccDen_events_stack_47->GetYaxis()->SetTitleSize(0.06);
   thsBackground_grouped_hww2l2v_13TeV_1jmm_AccDen_events_stack_47->GetYaxis()->SetTitleOffset(1.25);
   thsBackground_grouped_hww2l2v_13TeV_1jmm_AccDen_events_stack_47->GetYaxis()->SetTitleFont(42);
   thsBackground_grouped_hww2l2v_13TeV_1jmm_AccDen_events_stack_47->GetZaxis()->SetLabelFont(42);
   thsBackground_grouped_hww2l2v_13TeV_1jmm_AccDen_events_stack_47->GetZaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_hww2l2v_13TeV_1jmm_AccDen_events_stack_47->GetZaxis()->SetLabelSize(0.05);
   thsBackground_grouped_hww2l2v_13TeV_1jmm_AccDen_events_stack_47->GetZaxis()->SetTitleSize(0.06);
   thsBackground_grouped_hww2l2v_13TeV_1jmm_AccDen_events_stack_47->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_hww2l2v_13TeV_1jmm_AccDen_events->SetHistogram(thsBackground_grouped_hww2l2v_13TeV_1jmm_AccDen_events_stack_47);
   
   
   TH1D *new_histo_group_DY_hww2l2v_13TeV_1jmm_AccDen_events209 = new TH1D("new_histo_group_DY_hww2l2v_13TeV_1jmm_AccDen_events209","histo_DY",1,0,2);
   new_histo_group_DY_hww2l2v_13TeV_1jmm_AccDen_events209->SetBinContent(1,12813);
   new_histo_group_DY_hww2l2v_13TeV_1jmm_AccDen_events209->SetBinError(1,669.0464);
   new_histo_group_DY_hww2l2v_13TeV_1jmm_AccDen_events209->SetEntries(6284);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#009900");
   new_histo_group_DY_hww2l2v_13TeV_1jmm_AccDen_events209->SetFillColor(ci);
   new_histo_group_DY_hww2l2v_13TeV_1jmm_AccDen_events209->SetFillStyle(3001);

   ci = TColor::GetColor("#009900");
   new_histo_group_DY_hww2l2v_13TeV_1jmm_AccDen_events209->SetLineColor(ci);
   new_histo_group_DY_hww2l2v_13TeV_1jmm_AccDen_events209->GetXaxis()->SetLabelFont(42);
   new_histo_group_DY_hww2l2v_13TeV_1jmm_AccDen_events209->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_DY_hww2l2v_13TeV_1jmm_AccDen_events209->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_DY_hww2l2v_13TeV_1jmm_AccDen_events209->GetXaxis()->SetTitleFont(42);
   new_histo_group_DY_hww2l2v_13TeV_1jmm_AccDen_events209->GetYaxis()->SetLabelFont(42);
   new_histo_group_DY_hww2l2v_13TeV_1jmm_AccDen_events209->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_DY_hww2l2v_13TeV_1jmm_AccDen_events209->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_DY_hww2l2v_13TeV_1jmm_AccDen_events209->GetYaxis()->SetTitleFont(42);
   new_histo_group_DY_hww2l2v_13TeV_1jmm_AccDen_events209->GetZaxis()->SetLabelFont(42);
   new_histo_group_DY_hww2l2v_13TeV_1jmm_AccDen_events209->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_DY_hww2l2v_13TeV_1jmm_AccDen_events209->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_DY_hww2l2v_13TeV_1jmm_AccDen_events209->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_hww2l2v_13TeV_1jmm_AccDen_events->Add(new_histo_group_DY_hww2l2v_13TeV_1jmm_AccDen_events,"");
   
   TH1D *new_histo_group_top_hww2l2v_13TeV_1jmm_AccDen_events210 = new TH1D("new_histo_group_top_hww2l2v_13TeV_1jmm_AccDen_events210","histo_top",1,0,2);
   new_histo_group_top_hww2l2v_13TeV_1jmm_AccDen_events210->SetBinContent(1,2627.489);
   new_histo_group_top_hww2l2v_13TeV_1jmm_AccDen_events210->SetBinError(1,11.01602);
   new_histo_group_top_hww2l2v_13TeV_1jmm_AccDen_events210->SetEntries(63847);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_top_hww2l2v_13TeV_1jmm_AccDen_events210->SetFillColor(ci);
   new_histo_group_top_hww2l2v_13TeV_1jmm_AccDen_events210->SetFillStyle(3001);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_top_hww2l2v_13TeV_1jmm_AccDen_events210->SetLineColor(ci);
   new_histo_group_top_hww2l2v_13TeV_1jmm_AccDen_events210->GetXaxis()->SetLabelFont(42);
   new_histo_group_top_hww2l2v_13TeV_1jmm_AccDen_events210->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_top_hww2l2v_13TeV_1jmm_AccDen_events210->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_top_hww2l2v_13TeV_1jmm_AccDen_events210->GetXaxis()->SetTitleFont(42);
   new_histo_group_top_hww2l2v_13TeV_1jmm_AccDen_events210->GetYaxis()->SetLabelFont(42);
   new_histo_group_top_hww2l2v_13TeV_1jmm_AccDen_events210->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_top_hww2l2v_13TeV_1jmm_AccDen_events210->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_top_hww2l2v_13TeV_1jmm_AccDen_events210->GetYaxis()->SetTitleFont(42);
   new_histo_group_top_hww2l2v_13TeV_1jmm_AccDen_events210->GetZaxis()->SetLabelFont(42);
   new_histo_group_top_hww2l2v_13TeV_1jmm_AccDen_events210->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_top_hww2l2v_13TeV_1jmm_AccDen_events210->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_top_hww2l2v_13TeV_1jmm_AccDen_events210->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_hww2l2v_13TeV_1jmm_AccDen_events->Add(new_histo_group_top_hww2l2v_13TeV_1jmm_AccDen_events,"");
   
   TH1D *new_histo_group_WW_hww2l2v_13TeV_1jmm_AccDen_events211 = new TH1D("new_histo_group_WW_hww2l2v_13TeV_1jmm_AccDen_events211","histo_WW",1,0,2);
   new_histo_group_WW_hww2l2v_13TeV_1jmm_AccDen_events211->SetBinContent(1,2530.556);
   new_histo_group_WW_hww2l2v_13TeV_1jmm_AccDen_events211->SetBinError(1,23.03438);
   new_histo_group_WW_hww2l2v_13TeV_1jmm_AccDen_events211->SetEntries(17554);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_hww2l2v_13TeV_1jmm_AccDen_events211->SetFillColor(ci);
   new_histo_group_WW_hww2l2v_13TeV_1jmm_AccDen_events211->SetFillStyle(3001);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_hww2l2v_13TeV_1jmm_AccDen_events211->SetLineColor(ci);
   new_histo_group_WW_hww2l2v_13TeV_1jmm_AccDen_events211->GetXaxis()->SetLabelFont(42);
   new_histo_group_WW_hww2l2v_13TeV_1jmm_AccDen_events211->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WW_hww2l2v_13TeV_1jmm_AccDen_events211->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WW_hww2l2v_13TeV_1jmm_AccDen_events211->GetXaxis()->SetTitleFont(42);
   new_histo_group_WW_hww2l2v_13TeV_1jmm_AccDen_events211->GetYaxis()->SetLabelFont(42);
   new_histo_group_WW_hww2l2v_13TeV_1jmm_AccDen_events211->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WW_hww2l2v_13TeV_1jmm_AccDen_events211->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WW_hww2l2v_13TeV_1jmm_AccDen_events211->GetYaxis()->SetTitleFont(42);
   new_histo_group_WW_hww2l2v_13TeV_1jmm_AccDen_events211->GetZaxis()->SetLabelFont(42);
   new_histo_group_WW_hww2l2v_13TeV_1jmm_AccDen_events211->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WW_hww2l2v_13TeV_1jmm_AccDen_events211->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WW_hww2l2v_13TeV_1jmm_AccDen_events211->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_hww2l2v_13TeV_1jmm_AccDen_events->Add(new_histo_group_WW_hww2l2v_13TeV_1jmm_AccDen_events,"");
   
   TH1D *new_histo_group_VVV_hww2l2v_13TeV_1jmm_AccDen_events212 = new TH1D("new_histo_group_VVV_hww2l2v_13TeV_1jmm_AccDen_events212","histo_VVV",1,0,2);
   new_histo_group_VVV_hww2l2v_13TeV_1jmm_AccDen_events212->SetBinContent(1,11.73394);
   new_histo_group_VVV_hww2l2v_13TeV_1jmm_AccDen_events212->SetBinError(1,0.6370381);
   new_histo_group_VVV_hww2l2v_13TeV_1jmm_AccDen_events212->SetEntries(519);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_hww2l2v_13TeV_1jmm_AccDen_events212->SetFillColor(ci);
   new_histo_group_VVV_hww2l2v_13TeV_1jmm_AccDen_events212->SetFillStyle(3001);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_hww2l2v_13TeV_1jmm_AccDen_events212->SetLineColor(ci);
   new_histo_group_VVV_hww2l2v_13TeV_1jmm_AccDen_events212->GetXaxis()->SetLabelFont(42);
   new_histo_group_VVV_hww2l2v_13TeV_1jmm_AccDen_events212->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_hww2l2v_13TeV_1jmm_AccDen_events212->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_hww2l2v_13TeV_1jmm_AccDen_events212->GetXaxis()->SetTitleFont(42);
   new_histo_group_VVV_hww2l2v_13TeV_1jmm_AccDen_events212->GetYaxis()->SetLabelFont(42);
   new_histo_group_VVV_hww2l2v_13TeV_1jmm_AccDen_events212->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_hww2l2v_13TeV_1jmm_AccDen_events212->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_hww2l2v_13TeV_1jmm_AccDen_events212->GetYaxis()->SetTitleFont(42);
   new_histo_group_VVV_hww2l2v_13TeV_1jmm_AccDen_events212->GetZaxis()->SetLabelFont(42);
   new_histo_group_VVV_hww2l2v_13TeV_1jmm_AccDen_events212->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_hww2l2v_13TeV_1jmm_AccDen_events212->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_hww2l2v_13TeV_1jmm_AccDen_events212->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_hww2l2v_13TeV_1jmm_AccDen_events->Add(new_histo_group_VVV_hww2l2v_13TeV_1jmm_AccDen_events,"");
   
   TH1D *new_histo_group_VZ_hww2l2v_13TeV_1jmm_AccDen_events213 = new TH1D("new_histo_group_VZ_hww2l2v_13TeV_1jmm_AccDen_events213","histo_Vg",1,0,2);
   new_histo_group_VZ_hww2l2v_13TeV_1jmm_AccDen_events213->SetBinContent(1,425.1991);
   new_histo_group_VZ_hww2l2v_13TeV_1jmm_AccDen_events213->SetBinError(1,75.91552);
   new_histo_group_VZ_hww2l2v_13TeV_1jmm_AccDen_events213->SetEntries(25072);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_VZ_hww2l2v_13TeV_1jmm_AccDen_events213->SetFillColor(ci);
   new_histo_group_VZ_hww2l2v_13TeV_1jmm_AccDen_events213->SetFillStyle(3001);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_VZ_hww2l2v_13TeV_1jmm_AccDen_events213->SetLineColor(ci);
   new_histo_group_VZ_hww2l2v_13TeV_1jmm_AccDen_events213->GetXaxis()->SetLabelFont(42);
   new_histo_group_VZ_hww2l2v_13TeV_1jmm_AccDen_events213->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_VZ_hww2l2v_13TeV_1jmm_AccDen_events213->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_VZ_hww2l2v_13TeV_1jmm_AccDen_events213->GetXaxis()->SetTitleFont(42);
   new_histo_group_VZ_hww2l2v_13TeV_1jmm_AccDen_events213->GetYaxis()->SetLabelFont(42);
   new_histo_group_VZ_hww2l2v_13TeV_1jmm_AccDen_events213->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_VZ_hww2l2v_13TeV_1jmm_AccDen_events213->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_VZ_hww2l2v_13TeV_1jmm_AccDen_events213->GetYaxis()->SetTitleFont(42);
   new_histo_group_VZ_hww2l2v_13TeV_1jmm_AccDen_events213->GetZaxis()->SetLabelFont(42);
   new_histo_group_VZ_hww2l2v_13TeV_1jmm_AccDen_events213->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_VZ_hww2l2v_13TeV_1jmm_AccDen_events213->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_VZ_hww2l2v_13TeV_1jmm_AccDen_events213->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_hww2l2v_13TeV_1jmm_AccDen_events->Add(new_histo_group_VZ_hww2l2v_13TeV_1jmm_AccDen_events,"");
   
   TH1D *new_histo_group_Higgs_hww2l2v_13TeV_1jmm_AccDen_events214 = new TH1D("new_histo_group_Higgs_hww2l2v_13TeV_1jmm_AccDen_events214","histo_H_htt",1,0,2);
   new_histo_group_Higgs_hww2l2v_13TeV_1jmm_AccDen_events214->SetBinContent(1,249.8437);
   new_histo_group_Higgs_hww2l2v_13TeV_1jmm_AccDen_events214->SetBinError(1,3.959463);
   new_histo_group_Higgs_hww2l2v_13TeV_1jmm_AccDen_events214->SetEntries(9186);
   new_histo_group_Higgs_hww2l2v_13TeV_1jmm_AccDen_events214->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_hww2l2v_13TeV_1jmm_AccDen_events214->SetLineColor(ci);
   new_histo_group_Higgs_hww2l2v_13TeV_1jmm_AccDen_events214->SetLineWidth(2);
   new_histo_group_Higgs_hww2l2v_13TeV_1jmm_AccDen_events214->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_hww2l2v_13TeV_1jmm_AccDen_events214->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_hww2l2v_13TeV_1jmm_AccDen_events214->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_hww2l2v_13TeV_1jmm_AccDen_events214->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_hww2l2v_13TeV_1jmm_AccDen_events214->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_hww2l2v_13TeV_1jmm_AccDen_events214->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_hww2l2v_13TeV_1jmm_AccDen_events214->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_hww2l2v_13TeV_1jmm_AccDen_events214->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_hww2l2v_13TeV_1jmm_AccDen_events214->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_hww2l2v_13TeV_1jmm_AccDen_events214->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_hww2l2v_13TeV_1jmm_AccDen_events214->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_hww2l2v_13TeV_1jmm_AccDen_events214->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_hww2l2v_13TeV_1jmm_AccDen_events->Add(new_histo_group_Higgs_hww2l2v_13TeV_1jmm_AccDen_events,"");
   thsBackground_grouped_hww2l2v_13TeV_1jmm_AccDen_events->Draw("hist same");
   
   thsSignal_grouped_hww2l2v_13TeV_1jmm_AccDen_events = new THStack();
   thsSignal_grouped_hww2l2v_13TeV_1jmm_AccDen_events->SetName("thsSignal_grouped_hww2l2v_13TeV_1jmm_AccDen_events");
   thsSignal_grouped_hww2l2v_13TeV_1jmm_AccDen_events->SetTitle("thsSignal_grouped_hww2l2v_13TeV_1jmm_AccDen_events");
   
   TH1F *thsSignal_grouped_hww2l2v_13TeV_1jmm_AccDen_events_stack_48 = new TH1F("thsSignal_grouped_hww2l2v_13TeV_1jmm_AccDen_events_stack_48","thsSignal_grouped_hww2l2v_13TeV_1jmm_AccDen_events",1,0,2);
   thsSignal_grouped_hww2l2v_13TeV_1jmm_AccDen_events_stack_48->SetMinimum(0);
   thsSignal_grouped_hww2l2v_13TeV_1jmm_AccDen_events_stack_48->SetMaximum(266.4934);
   thsSignal_grouped_hww2l2v_13TeV_1jmm_AccDen_events_stack_48->SetDirectory(0);
   thsSignal_grouped_hww2l2v_13TeV_1jmm_AccDen_events_stack_48->SetStats(0);
   thsSignal_grouped_hww2l2v_13TeV_1jmm_AccDen_events_stack_48->SetLineStyle(0);
   thsSignal_grouped_hww2l2v_13TeV_1jmm_AccDen_events_stack_48->SetMarkerStyle(20);
   thsSignal_grouped_hww2l2v_13TeV_1jmm_AccDen_events_stack_48->GetXaxis()->SetLabelFont(42);
   thsSignal_grouped_hww2l2v_13TeV_1jmm_AccDen_events_stack_48->GetXaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_hww2l2v_13TeV_1jmm_AccDen_events_stack_48->GetXaxis()->SetLabelSize(0.05);
   thsSignal_grouped_hww2l2v_13TeV_1jmm_AccDen_events_stack_48->GetXaxis()->SetTitleSize(0.06);
   thsSignal_grouped_hww2l2v_13TeV_1jmm_AccDen_events_stack_48->GetXaxis()->SetTitleOffset(0.9);
   thsSignal_grouped_hww2l2v_13TeV_1jmm_AccDen_events_stack_48->GetXaxis()->SetTitleFont(42);
   thsSignal_grouped_hww2l2v_13TeV_1jmm_AccDen_events_stack_48->GetYaxis()->SetLabelFont(42);
   thsSignal_grouped_hww2l2v_13TeV_1jmm_AccDen_events_stack_48->GetYaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_hww2l2v_13TeV_1jmm_AccDen_events_stack_48->GetYaxis()->SetLabelSize(0.05);
   thsSignal_grouped_hww2l2v_13TeV_1jmm_AccDen_events_stack_48->GetYaxis()->SetTitleSize(0.06);
   thsSignal_grouped_hww2l2v_13TeV_1jmm_AccDen_events_stack_48->GetYaxis()->SetTitleOffset(1.25);
   thsSignal_grouped_hww2l2v_13TeV_1jmm_AccDen_events_stack_48->GetYaxis()->SetTitleFont(42);
   thsSignal_grouped_hww2l2v_13TeV_1jmm_AccDen_events_stack_48->GetZaxis()->SetLabelFont(42);
   thsSignal_grouped_hww2l2v_13TeV_1jmm_AccDen_events_stack_48->GetZaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_hww2l2v_13TeV_1jmm_AccDen_events_stack_48->GetZaxis()->SetLabelSize(0.05);
   thsSignal_grouped_hww2l2v_13TeV_1jmm_AccDen_events_stack_48->GetZaxis()->SetTitleSize(0.06);
   thsSignal_grouped_hww2l2v_13TeV_1jmm_AccDen_events_stack_48->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_hww2l2v_13TeV_1jmm_AccDen_events->SetHistogram(thsSignal_grouped_hww2l2v_13TeV_1jmm_AccDen_events_stack_48);
   
   
   TH1D *new_histo_group_Higgs_hww2l2v_13TeV_1jmm_AccDen_events215 = new TH1D("new_histo_group_Higgs_hww2l2v_13TeV_1jmm_AccDen_events215","histo_H_htt",1,0,2);
   new_histo_group_Higgs_hww2l2v_13TeV_1jmm_AccDen_events215->SetBinContent(1,249.8437);
   new_histo_group_Higgs_hww2l2v_13TeV_1jmm_AccDen_events215->SetBinError(1,3.959463);
   new_histo_group_Higgs_hww2l2v_13TeV_1jmm_AccDen_events215->SetEntries(9186);
   new_histo_group_Higgs_hww2l2v_13TeV_1jmm_AccDen_events215->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_hww2l2v_13TeV_1jmm_AccDen_events215->SetLineColor(ci);
   new_histo_group_Higgs_hww2l2v_13TeV_1jmm_AccDen_events215->SetLineWidth(2);
   new_histo_group_Higgs_hww2l2v_13TeV_1jmm_AccDen_events215->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_hww2l2v_13TeV_1jmm_AccDen_events215->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_hww2l2v_13TeV_1jmm_AccDen_events215->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_hww2l2v_13TeV_1jmm_AccDen_events215->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_hww2l2v_13TeV_1jmm_AccDen_events215->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_hww2l2v_13TeV_1jmm_AccDen_events215->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_hww2l2v_13TeV_1jmm_AccDen_events215->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_hww2l2v_13TeV_1jmm_AccDen_events215->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_hww2l2v_13TeV_1jmm_AccDen_events215->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_hww2l2v_13TeV_1jmm_AccDen_events215->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_hww2l2v_13TeV_1jmm_AccDen_events215->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_hww2l2v_13TeV_1jmm_AccDen_events215->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_hww2l2v_13TeV_1jmm_AccDen_events->Add(new_histo_group_Higgs_hww2l2v_13TeV_1jmm_AccDen_events,"");
   thsSignal_grouped_hww2l2v_13TeV_1jmm_AccDen_events->Draw("hist same noclear");
   
   Double_t _fx3031[1] = {
   1};
   Double_t _fy3031[1] = {
   37589};
   Double_t _felx3031[1] = {
   1};
   Double_t _fely3031[1] = {
   193.8822};
   Double_t _fehx3031[1] = {
   1};
   Double_t _fehy3031[1] = {
   194.8848};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(1,_fx3031,_fy3031,_felx3031,_fehx3031,_fely3031,_fehy3031);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(1);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3031 = new TH1F("Graph_Graph3031","",100,0,2.2);
   Graph_Graph3031->SetMinimum(37356.24);
   Graph_Graph3031->SetMaximum(37822.76);
   Graph_Graph3031->SetDirectory(0);
   Graph_Graph3031->SetStats(0);
   Graph_Graph3031->SetLineStyle(0);
   Graph_Graph3031->SetMarkerStyle(20);
   Graph_Graph3031->GetXaxis()->SetLabelFont(42);
   Graph_Graph3031->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3031->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3031->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3031->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3031->GetXaxis()->SetTitleFont(42);
   Graph_Graph3031->GetYaxis()->SetLabelFont(42);
   Graph_Graph3031->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3031->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3031->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3031->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3031->GetYaxis()->SetTitleFont(42);
   Graph_Graph3031->GetZaxis()->SetLabelFont(42);
   Graph_Graph3031->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3031->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3031->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3031->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3031);
   
   grae->Draw("p0");
   
   TLegend *leg = new TLegend(0.2,0.7,0.8,0.9,NULL,"brNDC");
   leg->SetTextFont(62);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("new_histo_group_DY_hww2l2v_13TeV_1jmm_AccDen_events","DY","F");

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
   entry=leg->AddEntry("new_histo_group_top_hww2l2v_13TeV_1jmm_AccDen_events","tW and t#bart","F");

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
   entry=leg->AddEntry("new_histo_group_WW_hww2l2v_13TeV_1jmm_AccDen_events","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_hww2l2v_13TeV_1jmm_AccDen_events","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_VZ_hww2l2v_13TeV_1jmm_AccDen_events","VZ/#gamma*/#gamma","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_hww2l2v_13TeV_1jmm_AccDen_events","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_hww2l2v_13TeV_1jmm_AccDen_events","Data","EPL");
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
   entry=leg->AddEntry("new_histo_group_DY_hww2l2v_13TeV_1jmm_AccDen_events","DY","F");

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
   entry=leg->AddEntry("new_histo_group_top_hww2l2v_13TeV_1jmm_AccDen_events","tW and t#bart","F");

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
   entry=leg->AddEntry("new_histo_group_WW_hww2l2v_13TeV_1jmm_AccDen_events","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_hww2l2v_13TeV_1jmm_AccDen_events","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_VZ_hww2l2v_13TeV_1jmm_AccDen_events","VZ/#gamma*/#gamma","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_hww2l2v_13TeV_1jmm_AccDen_events","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_hww2l2v_13TeV_1jmm_AccDen_events","Data","EPL");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   leg->Draw();
   
   TH1F *hframe_copy216 = new TH1F("hframe_copy216","",1000,0,2);
   hframe_copy216->SetMinimum(0);
   hframe_copy216->SetMaximum(94457.2);
   hframe_copy216->SetDirectory(0);
   hframe_copy216->SetStats(0);
   hframe_copy216->SetLineStyle(0);
   hframe_copy216->SetMarkerStyle(20);
   hframe_copy216->GetXaxis()->SetTitle("events");
   hframe_copy216->GetXaxis()->SetNdivisions(506);
   hframe_copy216->GetXaxis()->SetLabelFont(42);
   hframe_copy216->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy216->GetXaxis()->SetLabelSize(0.05);
   hframe_copy216->GetXaxis()->SetTitleSize(0.06);
   hframe_copy216->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy216->GetXaxis()->SetTitleFont(42);
   hframe_copy216->GetYaxis()->SetTitle("Events");
   hframe_copy216->GetYaxis()->SetLabelFont(42);
   hframe_copy216->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy216->GetYaxis()->SetLabelSize(0.05);
   hframe_copy216->GetYaxis()->SetTitleSize(0.06);
   hframe_copy216->GetYaxis()->SetTitleOffset(1.25);
   hframe_copy216->GetYaxis()->SetTitleFont(42);
   hframe_copy216->GetZaxis()->SetLabelFont(42);
   hframe_copy216->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy216->GetZaxis()->SetLabelSize(0.05);
   hframe_copy216->GetZaxis()->SetTitleSize(0.06);
   hframe_copy216->GetZaxis()->SetTitleFont(42);
   hframe_copy216->Draw("sameaxis");
   cchww2l2v_13TeV_1jmm_AccDen_events->Modified();
   cchww2l2v_13TeV_1jmm_AccDen_events->cd();
   cchww2l2v_13TeV_1jmm_AccDen_events->SetSelected(cchww2l2v_13TeV_1jmm_AccDen_events);
}
