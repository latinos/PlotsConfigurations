void c_wh3l_MET_JetV_ZVeto_13TeV_flagOSSF()
{
//=========Macro generated from canvas: ccwh3l_MET_JetV_ZVeto_13TeV_flagOSSF/cc
//=========  (Sun Jul  3 01:22:10 2016) by ROOT version6.02/13
   TCanvas *ccwh3l_MET_JetV_ZVeto_13TeV_flagOSSF = new TCanvas("ccwh3l_MET_JetV_ZVeto_13TeV_flagOSSF", "cc",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   ccwh3l_MET_JetV_ZVeto_13TeV_flagOSSF->SetHighLightColor(2);
   ccwh3l_MET_JetV_ZVeto_13TeV_flagOSSF->Range(-0.4,-2.867954,2.1,19.19323);
   ccwh3l_MET_JetV_ZVeto_13TeV_flagOSSF->SetFillColor(0);
   ccwh3l_MET_JetV_ZVeto_13TeV_flagOSSF->SetBorderMode(0);
   ccwh3l_MET_JetV_ZVeto_13TeV_flagOSSF->SetBorderSize(2);
   ccwh3l_MET_JetV_ZVeto_13TeV_flagOSSF->SetTickx(1);
   ccwh3l_MET_JetV_ZVeto_13TeV_flagOSSF->SetTicky(1);
   ccwh3l_MET_JetV_ZVeto_13TeV_flagOSSF->SetLeftMargin(0.16);
   ccwh3l_MET_JetV_ZVeto_13TeV_flagOSSF->SetRightMargin(0.04);
   ccwh3l_MET_JetV_ZVeto_13TeV_flagOSSF->SetTopMargin(0.05);
   ccwh3l_MET_JetV_ZVeto_13TeV_flagOSSF->SetBottomMargin(0.13);
   ccwh3l_MET_JetV_ZVeto_13TeV_flagOSSF->SetFrameFillStyle(0);
   ccwh3l_MET_JetV_ZVeto_13TeV_flagOSSF->SetFrameBorderMode(0);
   ccwh3l_MET_JetV_ZVeto_13TeV_flagOSSF->SetFrameFillStyle(0);
   ccwh3l_MET_JetV_ZVeto_13TeV_flagOSSF->SetFrameBorderMode(0);
   
   TH1F *hframe401 = new TH1F("hframe401","",1000,0,2);
   hframe401->SetMinimum(0);
   hframe401->SetMaximum(18.09017);
   hframe401->SetDirectory(0);
   hframe401->SetStats(0);
   hframe401->SetLineStyle(0);
   hframe401->SetMarkerStyle(20);
   hframe401->GetXaxis()->SetTitle("flag OSSF");
   hframe401->GetXaxis()->SetNdivisions(506);
   hframe401->GetXaxis()->SetLabelFont(42);
   hframe401->GetXaxis()->SetLabelOffset(0.007);
   hframe401->GetXaxis()->SetLabelSize(0.05);
   hframe401->GetXaxis()->SetTitleSize(0.06);
   hframe401->GetXaxis()->SetTitleOffset(0.9);
   hframe401->GetXaxis()->SetTitleFont(42);
   hframe401->GetYaxis()->SetTitle("Events");
   hframe401->GetYaxis()->SetLabelFont(42);
   hframe401->GetYaxis()->SetLabelOffset(0.007);
   hframe401->GetYaxis()->SetLabelSize(0.05);
   hframe401->GetYaxis()->SetTitleSize(0.06);
   hframe401->GetYaxis()->SetTitleOffset(1.25);
   hframe401->GetYaxis()->SetTitleFont(42);
   hframe401->GetZaxis()->SetLabelFont(42);
   hframe401->GetZaxis()->SetLabelOffset(0.007);
   hframe401->GetZaxis()->SetLabelSize(0.05);
   hframe401->GetZaxis()->SetTitleSize(0.06);
   hframe401->GetZaxis()->SetTitleFont(42);
   hframe401->Draw(" ");
   
   THStack *thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_flagOSSF = new THStack();
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_flagOSSF->SetName("thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_flagOSSF");
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_flagOSSF->SetTitle("thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_flagOSSF");
   
   TH1F *thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_flagOSSF_stack_81 = new TH1F("thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_flagOSSF_stack_81","thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_flagOSSF",2,0,2);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_flagOSSF_stack_81->SetMinimum(0);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_flagOSSF_stack_81->SetMaximum(4.45845);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_flagOSSF_stack_81->SetDirectory(0);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_flagOSSF_stack_81->SetStats(0);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_flagOSSF_stack_81->SetLineStyle(0);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_flagOSSF_stack_81->SetMarkerStyle(20);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_flagOSSF_stack_81->GetXaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_flagOSSF_stack_81->GetXaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_flagOSSF_stack_81->GetXaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_flagOSSF_stack_81->GetXaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_flagOSSF_stack_81->GetXaxis()->SetTitleOffset(0.9);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_flagOSSF_stack_81->GetXaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_flagOSSF_stack_81->GetYaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_flagOSSF_stack_81->GetYaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_flagOSSF_stack_81->GetYaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_flagOSSF_stack_81->GetYaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_flagOSSF_stack_81->GetYaxis()->SetTitleOffset(1.25);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_flagOSSF_stack_81->GetYaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_flagOSSF_stack_81->GetZaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_flagOSSF_stack_81->GetZaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_flagOSSF_stack_81->GetZaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_flagOSSF_stack_81->GetZaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_flagOSSF_stack_81->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_flagOSSF->SetHistogram(thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_flagOSSF_stack_81);
   
   
   TH1D *new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_flagOSSF402 = new TH1D("new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_flagOSSF402","histo_Fake",2,0,2);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_flagOSSF402->SetBinContent(1,2.887924);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_flagOSSF402->SetBinError(1,1.358219);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_flagOSSF402->SetEntries(34);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_flagOSSF402->SetFillColor(ci);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_flagOSSF402->SetFillStyle(3001);

   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_flagOSSF402->SetLineColor(ci);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_flagOSSF402->GetXaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_flagOSSF402->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_flagOSSF402->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_flagOSSF402->GetXaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_flagOSSF402->GetYaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_flagOSSF402->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_flagOSSF402->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_flagOSSF402->GetYaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_flagOSSF402->GetZaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_flagOSSF402->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_flagOSSF402->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_flagOSSF402->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_flagOSSF->Add(new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_flagOSSF,"");
   
   TH1D *new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_flagOSSF403 = new TH1D("new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_flagOSSF403","histo_WW",2,0,2);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_flagOSSF403->SetBinContent(1,0.04360057);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_flagOSSF403->SetBinError(1,0.02568789);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_flagOSSF403->SetEntries(3);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_flagOSSF403->SetFillColor(ci);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_flagOSSF403->SetFillStyle(3001);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_flagOSSF403->SetLineColor(ci);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_flagOSSF403->GetXaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_flagOSSF403->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_flagOSSF403->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_flagOSSF403->GetXaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_flagOSSF403->GetYaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_flagOSSF403->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_flagOSSF403->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_flagOSSF403->GetYaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_flagOSSF403->GetZaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_flagOSSF403->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_flagOSSF403->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_flagOSSF403->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_flagOSSF->Add(new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_flagOSSF,"");
   
   TH1D *new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_flagOSSF404 = new TH1D("new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_flagOSSF404","histo_VVV",2,0,2);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_flagOSSF404->SetBinContent(1,0.1299423);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_flagOSSF404->SetBinError(1,0.01921394);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_flagOSSF404->SetEntries(80);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_flagOSSF404->SetFillColor(ci);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_flagOSSF404->SetFillStyle(3001);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_flagOSSF404->SetLineColor(ci);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_flagOSSF404->GetXaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_flagOSSF404->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_flagOSSF404->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_flagOSSF404->GetXaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_flagOSSF404->GetYaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_flagOSSF404->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_flagOSSF404->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_flagOSSF404->GetYaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_flagOSSF404->GetZaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_flagOSSF404->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_flagOSSF404->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_flagOSSF404->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_flagOSSF->Add(new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_flagOSSF,"");
   
   TH1D *new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_flagOSSF405 = new TH1D("new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_flagOSSF405","histo_Vg",2,0,2);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_flagOSSF405->SetBinContent(1,0.0522728);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_flagOSSF405->SetBinError(1,0.0522728);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_flagOSSF405->SetEntries(1);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_flagOSSF405->SetFillColor(ci);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_flagOSSF405->SetFillStyle(3001);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_flagOSSF405->SetLineColor(ci);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_flagOSSF405->GetXaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_flagOSSF405->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_flagOSSF405->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_flagOSSF405->GetXaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_flagOSSF405->GetYaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_flagOSSF405->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_flagOSSF405->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_flagOSSF405->GetYaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_flagOSSF405->GetZaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_flagOSSF405->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_flagOSSF405->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_flagOSSF405->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_flagOSSF->Add(new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_flagOSSF,"");
   
   TH1D *new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_flagOSSF406 = new TH1D("new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_flagOSSF406","histo_ZZ",2,0,2);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_flagOSSF406->SetBinContent(1,0.07785033);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_flagOSSF406->SetBinError(1,0.05530859);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_flagOSSF406->SetEntries(2);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_flagOSSF406->SetFillColor(ci);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_flagOSSF406->SetFillStyle(3001);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_flagOSSF406->SetLineColor(ci);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_flagOSSF406->GetXaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_flagOSSF406->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_flagOSSF406->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_flagOSSF406->GetXaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_flagOSSF406->GetYaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_flagOSSF406->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_flagOSSF406->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_flagOSSF406->GetYaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_flagOSSF406->GetZaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_flagOSSF406->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_flagOSSF406->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_flagOSSF406->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_flagOSSF->Add(new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_flagOSSF,"");
   
   TH1D *new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_flagOSSF407 = new TH1D("new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_flagOSSF407","histo_WZ",2,0,2);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_flagOSSF407->SetBinContent(1,0.6645087);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_flagOSSF407->SetBinError(1,0.05966337);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_flagOSSF407->SetEntries(136);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_flagOSSF407->SetFillColor(ci);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_flagOSSF407->SetFillStyle(3001);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_flagOSSF407->SetLineColor(ci);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_flagOSSF407->GetXaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_flagOSSF407->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_flagOSSF407->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_flagOSSF407->GetXaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_flagOSSF407->GetYaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_flagOSSF407->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_flagOSSF407->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_flagOSSF407->GetYaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_flagOSSF407->GetZaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_flagOSSF407->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_flagOSSF407->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_flagOSSF407->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_flagOSSF->Add(new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_flagOSSF,"");
   
   TH1D *new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_flagOSSF408 = new TH1D("new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_flagOSSF408","histo_H_htt",2,0,2);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_flagOSSF408->SetBinContent(1,0.2835517);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_flagOSSF408->SetBinError(1,0.01760248);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_flagOSSF408->SetEntries(512);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_flagOSSF408->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_flagOSSF408->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_flagOSSF408->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_flagOSSF408->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_flagOSSF408->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_flagOSSF408->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_flagOSSF408->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_flagOSSF408->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_flagOSSF408->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_flagOSSF408->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_flagOSSF408->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_flagOSSF408->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_flagOSSF408->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_flagOSSF408->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_flagOSSF408->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_flagOSSF->Add(new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_flagOSSF,"");
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_flagOSSF->Draw("hist same");
   
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_flagOSSF = new THStack();
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_flagOSSF->SetName("thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_flagOSSF");
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_flagOSSF->SetTitle("thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_flagOSSF");
   
   TH1F *thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_flagOSSF_stack_82 = new TH1F("thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_flagOSSF_stack_82","thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_flagOSSF",2,0,2);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_flagOSSF_stack_82->SetMinimum(0);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_flagOSSF_stack_82->SetMaximum(0.3162119);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_flagOSSF_stack_82->SetDirectory(0);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_flagOSSF_stack_82->SetStats(0);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_flagOSSF_stack_82->SetLineStyle(0);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_flagOSSF_stack_82->SetMarkerStyle(20);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_flagOSSF_stack_82->GetXaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_flagOSSF_stack_82->GetXaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_flagOSSF_stack_82->GetXaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_flagOSSF_stack_82->GetXaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_flagOSSF_stack_82->GetXaxis()->SetTitleOffset(0.9);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_flagOSSF_stack_82->GetXaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_flagOSSF_stack_82->GetYaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_flagOSSF_stack_82->GetYaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_flagOSSF_stack_82->GetYaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_flagOSSF_stack_82->GetYaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_flagOSSF_stack_82->GetYaxis()->SetTitleOffset(1.25);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_flagOSSF_stack_82->GetYaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_flagOSSF_stack_82->GetZaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_flagOSSF_stack_82->GetZaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_flagOSSF_stack_82->GetZaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_flagOSSF_stack_82->GetZaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_flagOSSF_stack_82->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_flagOSSF->SetHistogram(thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_flagOSSF_stack_82);
   
   
   TH1D *new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_flagOSSF409 = new TH1D("new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_flagOSSF409","histo_H_htt",2,0,2);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_flagOSSF409->SetBinContent(1,0.2835517);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_flagOSSF409->SetBinError(1,0.01760248);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_flagOSSF409->SetEntries(512);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_flagOSSF409->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_flagOSSF409->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_flagOSSF409->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_flagOSSF409->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_flagOSSF409->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_flagOSSF409->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_flagOSSF409->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_flagOSSF409->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_flagOSSF409->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_flagOSSF409->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_flagOSSF409->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_flagOSSF409->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_flagOSSF409->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_flagOSSF409->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_flagOSSF409->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_flagOSSF->Add(new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_flagOSSF,"");
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_flagOSSF->Draw("hist same noclear");
   
   Double_t _fx3081[2] = {
   0.5,
   1.5};
   Double_t _fy3081[2] = {
   3.856098,
   0};
   Double_t _felx3081[2] = {
   0.5,
   0.5};
   Double_t _fely3081[2] = {
   1.87231,
   0};
   Double_t _fehx3081[2] = {
   0.5,
   0.5};
   Double_t _fehy3081[2] = {
   1.872253,
   0};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(2,_fx3081,_fy3081,_felx3081,_fehx3081,_fely3081,_fehy3081);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(12);
   grae->SetFillStyle(3004);
   grae->SetLineColor(12);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3081 = new TH1F("Graph_Graph3081","",100,0,2.2);
   Graph_Graph3081->SetMinimum(0);
   Graph_Graph3081->SetMaximum(6.301187);
   Graph_Graph3081->SetDirectory(0);
   Graph_Graph3081->SetStats(0);
   Graph_Graph3081->SetLineStyle(0);
   Graph_Graph3081->SetMarkerStyle(20);
   Graph_Graph3081->GetXaxis()->SetLabelFont(42);
   Graph_Graph3081->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3081->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3081->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3081->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3081->GetXaxis()->SetTitleFont(42);
   Graph_Graph3081->GetYaxis()->SetLabelFont(42);
   Graph_Graph3081->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3081->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3081->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3081->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3081->GetYaxis()->SetTitleFont(42);
   Graph_Graph3081->GetZaxis()->SetLabelFont(42);
   Graph_Graph3081->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3081->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3081->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3081->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3081);
   
   grae->Draw("2");
   
   Double_t _fx3082[2] = {
   0.5,
   1.5};
   Double_t _fy3082[2] = {
   5,
   0};
   Double_t _felx3082[2] = {
   0.5,
   0.5};
   Double_t _fely3082[2] = {
   2.159724,
   0};
   Double_t _fehx3082[2] = {
   0.5,
   0.5};
   Double_t _fehy3082[2] = {
   3.382539,
   1.147908};
   grae = new TGraphAsymmErrors(2,_fx3082,_fy3082,_felx3082,_fehx3082,_fely3082,_fehy3082);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(1);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3082 = new TH1F("Graph_Graph3082","",100,0,2.2);
   Graph_Graph3082->SetMinimum(0);
   Graph_Graph3082->SetMaximum(9.220793);
   Graph_Graph3082->SetDirectory(0);
   Graph_Graph3082->SetStats(0);
   Graph_Graph3082->SetLineStyle(0);
   Graph_Graph3082->SetMarkerStyle(20);
   Graph_Graph3082->GetXaxis()->SetLabelFont(42);
   Graph_Graph3082->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3082->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3082->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3082->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3082->GetXaxis()->SetTitleFont(42);
   Graph_Graph3082->GetYaxis()->SetLabelFont(42);
   Graph_Graph3082->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3082->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3082->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3082->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3082->GetYaxis()->SetTitleFont(42);
   Graph_Graph3082->GetZaxis()->SetLabelFont(42);
   Graph_Graph3082->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3082->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3082->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3082->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3082);
   
   grae->Draw("p0");
   
   TLegend *leg = new TLegend(0.2,0.7,0.8,0.9,NULL,"brNDC");
   leg->SetTextFont(62);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_flagOSSF","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_flagOSSF","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_flagOSSF","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_flagOSSF","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_flagOSSF","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_flagOSSF","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_flagOSSF","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_MET_JetV_ZVeto_13TeV_flagOSSF","Data","EPL");
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
   entry=leg->AddEntry("new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_flagOSSF","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_flagOSSF","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_flagOSSF","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_flagOSSF","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_flagOSSF","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_flagOSSF","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_flagOSSF","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_MET_JetV_ZVeto_13TeV_flagOSSF","Data","EPL");
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
   
   TH1F *hframe_copy410 = new TH1F("hframe_copy410","",1000,0,2);
   hframe_copy410->SetMinimum(0);
   hframe_copy410->SetMaximum(18.09017);
   hframe_copy410->SetDirectory(0);
   hframe_copy410->SetStats(0);
   hframe_copy410->SetLineStyle(0);
   hframe_copy410->SetMarkerStyle(20);
   hframe_copy410->GetXaxis()->SetTitle("flag OSSF");
   hframe_copy410->GetXaxis()->SetNdivisions(506);
   hframe_copy410->GetXaxis()->SetLabelFont(42);
   hframe_copy410->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy410->GetXaxis()->SetLabelSize(0.05);
   hframe_copy410->GetXaxis()->SetTitleSize(0.06);
   hframe_copy410->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy410->GetXaxis()->SetTitleFont(42);
   hframe_copy410->GetYaxis()->SetTitle("Events");
   hframe_copy410->GetYaxis()->SetLabelFont(42);
   hframe_copy410->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy410->GetYaxis()->SetLabelSize(0.05);
   hframe_copy410->GetYaxis()->SetTitleSize(0.06);
   hframe_copy410->GetYaxis()->SetTitleOffset(1.25);
   hframe_copy410->GetYaxis()->SetTitleFont(42);
   hframe_copy410->GetZaxis()->SetLabelFont(42);
   hframe_copy410->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy410->GetZaxis()->SetLabelSize(0.05);
   hframe_copy410->GetZaxis()->SetTitleSize(0.06);
   hframe_copy410->GetZaxis()->SetTitleFont(42);
   hframe_copy410->Draw("sameaxis");
   ccwh3l_MET_JetV_ZVeto_13TeV_flagOSSF->Modified();
   ccwh3l_MET_JetV_ZVeto_13TeV_flagOSSF->cd();
   ccwh3l_MET_JetV_ZVeto_13TeV_flagOSSF->SetSelected(ccwh3l_MET_JetV_ZVeto_13TeV_flagOSSF);
}
