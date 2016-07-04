void c_wh3l_MET_JetV_ZVeto_mll_13TeV_events()
{
//=========Macro generated from canvas: ccwh3l_MET_JetV_ZVeto_mll_13TeV_events/cc
//=========  (Sun Jul  3 16:19:24 2016) by ROOT version6.02/13
   TCanvas *ccwh3l_MET_JetV_ZVeto_mll_13TeV_events = new TCanvas("ccwh3l_MET_JetV_ZVeto_mll_13TeV_events", "cc",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   ccwh3l_MET_JetV_ZVeto_mll_13TeV_events->SetHighLightColor(2);
   ccwh3l_MET_JetV_ZVeto_mll_13TeV_events->Range(-0.4,-8.563947,2.1,57.31257);
   ccwh3l_MET_JetV_ZVeto_mll_13TeV_events->SetFillColor(0);
   ccwh3l_MET_JetV_ZVeto_mll_13TeV_events->SetBorderMode(0);
   ccwh3l_MET_JetV_ZVeto_mll_13TeV_events->SetBorderSize(2);
   ccwh3l_MET_JetV_ZVeto_mll_13TeV_events->SetTickx(1);
   ccwh3l_MET_JetV_ZVeto_mll_13TeV_events->SetTicky(1);
   ccwh3l_MET_JetV_ZVeto_mll_13TeV_events->SetLeftMargin(0.16);
   ccwh3l_MET_JetV_ZVeto_mll_13TeV_events->SetRightMargin(0.04);
   ccwh3l_MET_JetV_ZVeto_mll_13TeV_events->SetTopMargin(0.05);
   ccwh3l_MET_JetV_ZVeto_mll_13TeV_events->SetBottomMargin(0.13);
   ccwh3l_MET_JetV_ZVeto_mll_13TeV_events->SetFrameFillStyle(0);
   ccwh3l_MET_JetV_ZVeto_mll_13TeV_events->SetFrameBorderMode(0);
   ccwh3l_MET_JetV_ZVeto_mll_13TeV_events->SetFrameFillStyle(0);
   ccwh3l_MET_JetV_ZVeto_mll_13TeV_events->SetFrameBorderMode(0);
   
   TH1F *hframe481 = new TH1F("hframe481","",1000,0,2);
   hframe481->SetMinimum(0);
   hframe481->SetMaximum(54.01875);
   hframe481->SetDirectory(0);
   hframe481->SetStats(0);
   hframe481->SetLineStyle(0);
   hframe481->SetMarkerStyle(20);
   hframe481->GetXaxis()->SetTitle("events");
   hframe481->GetXaxis()->SetNdivisions(506);
   hframe481->GetXaxis()->SetLabelFont(42);
   hframe481->GetXaxis()->SetLabelOffset(0.007);
   hframe481->GetXaxis()->SetLabelSize(0.05);
   hframe481->GetXaxis()->SetTitleSize(0.06);
   hframe481->GetXaxis()->SetTitleOffset(0.9);
   hframe481->GetXaxis()->SetTitleFont(42);
   hframe481->GetYaxis()->SetTitle("Events");
   hframe481->GetYaxis()->SetLabelFont(42);
   hframe481->GetYaxis()->SetLabelOffset(0.007);
   hframe481->GetYaxis()->SetLabelSize(0.05);
   hframe481->GetYaxis()->SetTitleSize(0.06);
   hframe481->GetYaxis()->SetTitleOffset(1.25);
   hframe481->GetYaxis()->SetTitleFont(42);
   hframe481->GetZaxis()->SetLabelFont(42);
   hframe481->GetZaxis()->SetLabelOffset(0.007);
   hframe481->GetZaxis()->SetLabelSize(0.05);
   hframe481->GetZaxis()->SetTitleSize(0.06);
   hframe481->GetZaxis()->SetTitleFont(42);
   hframe481->Draw(" ");
   
   THStack *thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_events = new THStack();
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_events->SetName("thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_events");
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_events->SetTitle("thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_events");
   
   TH1F *thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_events_stack_97 = new TH1F("thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_events_stack_97","thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_events",1,0,2);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_events_stack_97->SetMinimum(0);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_events_stack_97->SetMaximum(22.68787);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_events_stack_97->SetDirectory(0);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_events_stack_97->SetStats(0);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_events_stack_97->SetLineStyle(0);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_events_stack_97->SetMarkerStyle(20);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_events_stack_97->GetXaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_events_stack_97->GetXaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_events_stack_97->GetXaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_events_stack_97->GetXaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_events_stack_97->GetXaxis()->SetTitleOffset(0.9);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_events_stack_97->GetXaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_events_stack_97->GetYaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_events_stack_97->GetYaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_events_stack_97->GetYaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_events_stack_97->GetYaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_events_stack_97->GetYaxis()->SetTitleOffset(1.25);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_events_stack_97->GetYaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_events_stack_97->GetZaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_events_stack_97->GetZaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_events_stack_97->GetZaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_events_stack_97->GetZaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_events_stack_97->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_events->SetHistogram(thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_events_stack_97);
   
   
   TH1D *new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_events482 = new TH1D("new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_events482","histo_Fake",1,0,2);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_events482->SetBinContent(1,9.72882);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_events482->SetBinError(1,2.569399);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_events482->SetEntries(108);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_events482->SetFillColor(ci);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_events482->SetFillStyle(3001);

   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_events482->SetLineColor(ci);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_events482->GetXaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_events482->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_events482->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_events482->GetXaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_events482->GetYaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_events482->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_events482->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_events482->GetYaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_events482->GetZaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_events482->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_events482->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_events482->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_events->Add(new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_events,"");
   
   TH1D *new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_events483 = new TH1D("new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_events483","histo_WW",1,0,2);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_events483->SetBinContent(1,0.08870193);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_events483->SetBinError(1,0.03666076);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_events483->SetEntries(6);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_events483->SetFillColor(ci);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_events483->SetFillStyle(3001);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_events483->SetLineColor(ci);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_events483->GetXaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_events483->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_events483->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_events483->GetXaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_events483->GetYaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_events483->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_events483->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_events483->GetYaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_events483->GetZaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_events483->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_events483->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_events483->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_events->Add(new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_events,"");
   
   TH1D *new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_events484 = new TH1D("new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_events484","histo_VVV",1,0,2);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_events484->SetBinContent(1,0.3148626);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_events484->SetBinError(1,0.02857932);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_events484->SetEntries(180);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_events484->SetFillColor(ci);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_events484->SetFillStyle(3001);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_events484->SetLineColor(ci);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_events484->GetXaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_events484->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_events484->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_events484->GetXaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_events484->GetYaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_events484->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_events484->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_events484->GetYaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_events484->GetZaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_events484->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_events484->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_events484->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_events->Add(new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_events,"");
   
   TH1D *new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_events485 = new TH1D("new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_events485","histo_Vg",1,0,2);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_events485->SetBinContent(1,2.648169);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_events485->SetBinError(1,0.5700496);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_events485->SetEntries(42);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_events485->SetFillColor(ci);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_events485->SetFillStyle(3001);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_events485->SetLineColor(ci);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_events485->GetXaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_events485->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_events485->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_events485->GetXaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_events485->GetYaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_events485->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_events485->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_events485->GetYaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_events485->GetZaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_events485->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_events485->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_events485->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_events->Add(new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_events,"");
   
   TH1D *new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_events486 = new TH1D("new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_events486","histo_ZZ",1,0,2);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_events486->SetBinContent(1,0.6257207);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_events486->SetBinError(1,0.1568989);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_events486->SetEntries(18);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_events486->SetFillColor(ci);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_events486->SetFillStyle(3001);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_events486->SetLineColor(ci);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_events486->GetXaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_events486->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_events486->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_events486->GetXaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_events486->GetYaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_events486->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_events486->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_events486->GetYaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_events486->GetZaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_events486->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_events486->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_events486->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_events->Add(new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_events,"");
   
   TH1D *new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_events487 = new TH1D("new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_events487","histo_WZ",1,0,2);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_events487->SetBinContent(1,7.389216);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_events487->SetBinError(1,0.2002934);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_events487->SetEntries(1516);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_events487->SetFillColor(ci);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_events487->SetFillStyle(3001);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_events487->SetLineColor(ci);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_events487->GetXaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_events487->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_events487->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_events487->GetXaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_events487->GetYaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_events487->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_events487->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_events487->GetYaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_events487->GetZaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_events487->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_events487->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_events487->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_events->Add(new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_events,"");
   
   TH1D *new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_events488 = new TH1D("new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_events488","histo_H_htt",1,0,2);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_events488->SetBinContent(1,0.8120077);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_events488->SetBinError(1,0.03093742);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_events488->SetEntries(1320);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_events488->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_events488->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_events488->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_events488->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_events488->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_events488->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_events488->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_events488->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_events488->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_events488->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_events488->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_events488->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_events488->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_events488->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_events488->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_events->Add(new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_events,"");
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_events->Draw("hist same");
   
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_events = new THStack();
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_events->SetName("thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_events");
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_events->SetTitle("thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_events");
   
   TH1F *thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_events_stack_98 = new TH1F("thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_events_stack_98","thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_events",1,0,2);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_events_stack_98->SetMinimum(0);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_events_stack_98->SetMaximum(0.8850924);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_events_stack_98->SetDirectory(0);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_events_stack_98->SetStats(0);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_events_stack_98->SetLineStyle(0);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_events_stack_98->SetMarkerStyle(20);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_events_stack_98->GetXaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_events_stack_98->GetXaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_events_stack_98->GetXaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_events_stack_98->GetXaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_events_stack_98->GetXaxis()->SetTitleOffset(0.9);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_events_stack_98->GetXaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_events_stack_98->GetYaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_events_stack_98->GetYaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_events_stack_98->GetYaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_events_stack_98->GetYaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_events_stack_98->GetYaxis()->SetTitleOffset(1.25);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_events_stack_98->GetYaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_events_stack_98->GetZaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_events_stack_98->GetZaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_events_stack_98->GetZaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_events_stack_98->GetZaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_events_stack_98->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_events->SetHistogram(thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_events_stack_98);
   
   
   TH1D *new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_events489 = new TH1D("new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_events489","histo_H_htt",1,0,2);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_events489->SetBinContent(1,0.8120077);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_events489->SetBinError(1,0.03093742);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_events489->SetEntries(1320);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_events489->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_events489->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_events489->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_events489->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_events489->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_events489->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_events489->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_events489->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_events489->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_events489->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_events489->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_events489->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_events489->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_events489->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_events489->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_events->Add(new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_events,"");
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_events->Draw("hist same noclear");
   
   Double_t _fx3097[1] = {
   1};
   Double_t _fy3097[1] = {
   20.79549};
   Double_t _felx3097[1] = {
   1};
   Double_t _fely3097[1] = {
   4.959341};
   Double_t _fehx3097[1] = {
   1};
   Double_t _fehy3097[1] = {
   4.957812};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(1,_fx3097,_fy3097,_felx3097,_fehx3097,_fely3097,_fehy3097);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(12);
   grae->SetFillStyle(3004);
   grae->SetLineColor(12);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3097 = new TH1F("Graph_Graph3097","",100,0,2.2);
   Graph_Graph3097->SetMinimum(14.84443);
   Graph_Graph3097->SetMaximum(26.74502);
   Graph_Graph3097->SetDirectory(0);
   Graph_Graph3097->SetStats(0);
   Graph_Graph3097->SetLineStyle(0);
   Graph_Graph3097->SetMarkerStyle(20);
   Graph_Graph3097->GetXaxis()->SetLabelFont(42);
   Graph_Graph3097->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3097->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3097->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3097->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3097->GetXaxis()->SetTitleFont(42);
   Graph_Graph3097->GetYaxis()->SetLabelFont(42);
   Graph_Graph3097->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3097->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3097->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3097->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3097->GetYaxis()->SetTitleFont(42);
   Graph_Graph3097->GetZaxis()->SetLabelFont(42);
   Graph_Graph3097->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3097->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3097->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3097->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3097);
   
   grae->Draw("2");
   
   Double_t _fx3098[1] = {
   1};
   Double_t _fy3098[1] = {
   0};
   Double_t _felx3098[1] = {
   1};
   Double_t _fely3098[1] = {
   0};
   Double_t _fehx3098[1] = {
   1};
   Double_t _fehy3098[1] = {
   1.147908};
   grae = new TGraphAsymmErrors(1,_fx3098,_fy3098,_felx3098,_fehx3098,_fely3098,_fehy3098);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(1);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3098 = new TH1F("Graph_Graph3098","",100,0,2.2);
   Graph_Graph3098->SetMinimum(0);
   Graph_Graph3098->SetMaximum(1.262698);
   Graph_Graph3098->SetDirectory(0);
   Graph_Graph3098->SetStats(0);
   Graph_Graph3098->SetLineStyle(0);
   Graph_Graph3098->SetMarkerStyle(20);
   Graph_Graph3098->GetXaxis()->SetLabelFont(42);
   Graph_Graph3098->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3098->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3098->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3098->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3098->GetXaxis()->SetTitleFont(42);
   Graph_Graph3098->GetYaxis()->SetLabelFont(42);
   Graph_Graph3098->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3098->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3098->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3098->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3098->GetYaxis()->SetTitleFont(42);
   Graph_Graph3098->GetZaxis()->SetLabelFont(42);
   Graph_Graph3098->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3098->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3098->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3098->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3098);
   
   grae->Draw("p0");
   
   TLegend *leg = new TLegend(0.2,0.7,0.8,0.9,NULL,"brNDC");
   leg->SetTextFont(62);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_events","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_events","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_events","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_events","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_events","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_events","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_events","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_MET_JetV_ZVeto_mll_13TeV_events","Data","EPL");
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
   entry=leg->AddEntry("new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_events","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_events","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_events","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_events","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_events","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_events","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_events","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_MET_JetV_ZVeto_mll_13TeV_events","Data","EPL");
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
   
   TH1F *hframe_copy490 = new TH1F("hframe_copy490","",1000,0,2);
   hframe_copy490->SetMinimum(0);
   hframe_copy490->SetMaximum(54.01875);
   hframe_copy490->SetDirectory(0);
   hframe_copy490->SetStats(0);
   hframe_copy490->SetLineStyle(0);
   hframe_copy490->SetMarkerStyle(20);
   hframe_copy490->GetXaxis()->SetTitle("events");
   hframe_copy490->GetXaxis()->SetNdivisions(506);
   hframe_copy490->GetXaxis()->SetLabelFont(42);
   hframe_copy490->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy490->GetXaxis()->SetLabelSize(0.05);
   hframe_copy490->GetXaxis()->SetTitleSize(0.06);
   hframe_copy490->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy490->GetXaxis()->SetTitleFont(42);
   hframe_copy490->GetYaxis()->SetTitle("Events");
   hframe_copy490->GetYaxis()->SetLabelFont(42);
   hframe_copy490->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy490->GetYaxis()->SetLabelSize(0.05);
   hframe_copy490->GetYaxis()->SetTitleSize(0.06);
   hframe_copy490->GetYaxis()->SetTitleOffset(1.25);
   hframe_copy490->GetYaxis()->SetTitleFont(42);
   hframe_copy490->GetZaxis()->SetLabelFont(42);
   hframe_copy490->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy490->GetZaxis()->SetLabelSize(0.05);
   hframe_copy490->GetZaxis()->SetTitleSize(0.06);
   hframe_copy490->GetZaxis()->SetTitleFont(42);
   hframe_copy490->Draw("sameaxis");
   ccwh3l_MET_JetV_ZVeto_mll_13TeV_events->Modified();
   ccwh3l_MET_JetV_ZVeto_mll_13TeV_events->cd();
   ccwh3l_MET_JetV_ZVeto_mll_13TeV_events->SetSelected(ccwh3l_MET_JetV_ZVeto_mll_13TeV_events);
}
