void c_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l()
{
//=========Macro generated from canvas: ccwh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l/cc
//=========  (Sun Jul  3 16:19:18 2016) by ROOT version6.02/13
   TCanvas *ccwh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l = new TCanvas("ccwh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l", "cc",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   ccwh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l->SetHighLightColor(2);
   ccwh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l->Range(-1.6,-8.563947,8.4,57.31257);
   ccwh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l->SetFillColor(0);
   ccwh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l->SetBorderMode(0);
   ccwh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l->SetBorderSize(2);
   ccwh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l->SetTickx(1);
   ccwh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l->SetTicky(1);
   ccwh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l->SetLeftMargin(0.16);
   ccwh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l->SetRightMargin(0.04);
   ccwh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l->SetTopMargin(0.05);
   ccwh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l->SetBottomMargin(0.13);
   ccwh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l->SetFrameFillStyle(0);
   ccwh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l->SetFrameBorderMode(0);
   ccwh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l->SetFrameFillStyle(0);
   ccwh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l->SetFrameBorderMode(0);
   
   TH1F *hframe401 = new TH1F("hframe401","",1000,0,8);
   hframe401->SetMinimum(0);
   hframe401->SetMaximum(54.01875);
   hframe401->SetDirectory(0);
   hframe401->SetStats(0);
   hframe401->SetLineStyle(0);
   hframe401->SetMarkerStyle(20);
   hframe401->GetXaxis()->SetTitle("N_Jets");
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
   
   THStack *thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l = new THStack();
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l->SetName("thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l");
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l->SetTitle("thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l");
   
   TH1F *thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l_stack_81 = new TH1F("thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l_stack_81","thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l",8,0,8);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l_stack_81->SetMinimum(0);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l_stack_81->SetMaximum(22.68787);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l_stack_81->SetDirectory(0);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l_stack_81->SetStats(0);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l_stack_81->SetLineStyle(0);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l_stack_81->SetMarkerStyle(20);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l_stack_81->GetXaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l_stack_81->GetXaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l_stack_81->GetXaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l_stack_81->GetXaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l_stack_81->GetXaxis()->SetTitleOffset(0.9);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l_stack_81->GetXaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l_stack_81->GetYaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l_stack_81->GetYaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l_stack_81->GetYaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l_stack_81->GetYaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l_stack_81->GetYaxis()->SetTitleOffset(1.25);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l_stack_81->GetYaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l_stack_81->GetZaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l_stack_81->GetZaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l_stack_81->GetZaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l_stack_81->GetZaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l_stack_81->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l->SetHistogram(thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l_stack_81);
   
   
   TH1D *new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l402 = new TH1D("new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l402","histo_Fake",8,0,8);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l402->SetBinContent(1,9.72882);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l402->SetBinError(1,2.569399);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l402->SetEntries(108);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l402->SetFillColor(ci);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l402->SetFillStyle(3001);

   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l402->SetLineColor(ci);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l402->GetXaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l402->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l402->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l402->GetXaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l402->GetYaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l402->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l402->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l402->GetYaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l402->GetZaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l402->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l402->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l402->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l->Add(new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l,"");
   
   TH1D *new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l403 = new TH1D("new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l403","histo_WW",8,0,8);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l403->SetBinContent(1,0.08870193);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l403->SetBinError(1,0.03666076);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l403->SetEntries(6);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l403->SetFillColor(ci);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l403->SetFillStyle(3001);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l403->SetLineColor(ci);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l403->GetXaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l403->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l403->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l403->GetXaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l403->GetYaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l403->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l403->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l403->GetYaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l403->GetZaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l403->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l403->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l403->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l->Add(new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l,"");
   
   TH1D *new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l404 = new TH1D("new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l404","histo_VVV",8,0,8);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l404->SetBinContent(1,0.3148626);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l404->SetBinError(1,0.02857932);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l404->SetEntries(180);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l404->SetFillColor(ci);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l404->SetFillStyle(3001);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l404->SetLineColor(ci);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l404->GetXaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l404->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l404->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l404->GetXaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l404->GetYaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l404->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l404->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l404->GetYaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l404->GetZaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l404->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l404->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l404->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l->Add(new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l,"");
   
   TH1D *new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l405 = new TH1D("new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l405","histo_Vg",8,0,8);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l405->SetBinContent(1,2.648169);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l405->SetBinError(1,0.5700496);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l405->SetEntries(42);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l405->SetFillColor(ci);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l405->SetFillStyle(3001);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l405->SetLineColor(ci);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l405->GetXaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l405->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l405->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l405->GetXaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l405->GetYaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l405->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l405->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l405->GetYaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l405->GetZaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l405->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l405->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l405->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l->Add(new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l,"");
   
   TH1D *new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l406 = new TH1D("new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l406","histo_ZZ",8,0,8);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l406->SetBinContent(1,0.6257207);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l406->SetBinError(1,0.1568989);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l406->SetEntries(18);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l406->SetFillColor(ci);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l406->SetFillStyle(3001);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l406->SetLineColor(ci);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l406->GetXaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l406->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l406->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l406->GetXaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l406->GetYaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l406->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l406->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l406->GetYaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l406->GetZaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l406->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l406->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l406->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l->Add(new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l,"");
   
   TH1D *new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l407 = new TH1D("new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l407","histo_WZ",8,0,8);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l407->SetBinContent(1,7.389216);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l407->SetBinError(1,0.2002934);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l407->SetEntries(1516);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l407->SetFillColor(ci);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l407->SetFillStyle(3001);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l407->SetLineColor(ci);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l407->GetXaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l407->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l407->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l407->GetXaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l407->GetYaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l407->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l407->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l407->GetYaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l407->GetZaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l407->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l407->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l407->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l->Add(new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l,"");
   
   TH1D *new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l408 = new TH1D("new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l408","histo_H_htt",8,0,8);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l408->SetBinContent(1,0.8120077);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l408->SetBinError(1,0.03093742);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l408->SetEntries(1320);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l408->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l408->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l408->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l408->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l408->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l408->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l408->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l408->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l408->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l408->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l408->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l408->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l408->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l408->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l408->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l->Add(new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l,"");
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l->Draw("hist same");
   
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l = new THStack();
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l->SetName("thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l");
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l->SetTitle("thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l");
   
   TH1F *thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l_stack_82 = new TH1F("thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l_stack_82","thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l",8,0,8);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l_stack_82->SetMinimum(0);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l_stack_82->SetMaximum(0.8850924);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l_stack_82->SetDirectory(0);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l_stack_82->SetStats(0);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l_stack_82->SetLineStyle(0);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l_stack_82->SetMarkerStyle(20);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l_stack_82->GetXaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l_stack_82->GetXaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l_stack_82->GetXaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l_stack_82->GetXaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l_stack_82->GetXaxis()->SetTitleOffset(0.9);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l_stack_82->GetXaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l_stack_82->GetYaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l_stack_82->GetYaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l_stack_82->GetYaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l_stack_82->GetYaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l_stack_82->GetYaxis()->SetTitleOffset(1.25);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l_stack_82->GetYaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l_stack_82->GetZaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l_stack_82->GetZaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l_stack_82->GetZaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l_stack_82->GetZaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l_stack_82->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l->SetHistogram(thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l_stack_82);
   
   
   TH1D *new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l409 = new TH1D("new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l409","histo_H_htt",8,0,8);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l409->SetBinContent(1,0.8120077);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l409->SetBinError(1,0.03093742);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l409->SetEntries(1320);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l409->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l409->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l409->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l409->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l409->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l409->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l409->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l409->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l409->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l409->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l409->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l409->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l409->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l409->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l409->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l->Add(new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l,"");
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l->Draw("hist same noclear");
   
   Double_t _fx3081[8] = {
   0.5,
   1.5,
   2.5,
   3.5,
   4.5,
   5.5,
   6.5,
   7.5};
   Double_t _fy3081[8] = {
   20.79549,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _felx3081[8] = {
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5};
   Double_t _fely3081[8] = {
   4.959341,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fehx3081[8] = {
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5};
   Double_t _fehy3081[8] = {
   4.957812,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(8,_fx3081,_fy3081,_felx3081,_fehx3081,_fely3081,_fehy3081);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(12);
   grae->SetFillStyle(3004);
   grae->SetLineColor(12);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3081 = new TH1F("Graph_Graph3081","",100,0,8.8);
   Graph_Graph3081->SetMinimum(0);
   Graph_Graph3081->SetMaximum(28.32863);
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
   
   Double_t _fx3082[8] = {
   0.5,
   1.5,
   2.5,
   3.5,
   4.5,
   5.5,
   6.5,
   7.5};
   Double_t _fy3082[8] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _felx3082[8] = {
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5};
   Double_t _fely3082[8] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fehx3082[8] = {
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5};
   Double_t _fehy3082[8] = {
   1.147908,
   1.147908,
   1.147908,
   1.147908,
   1.147908,
   1.147908,
   1.147908,
   1.147908};
   grae = new TGraphAsymmErrors(8,_fx3082,_fy3082,_felx3082,_fehx3082,_fely3082,_fehy3082);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(1);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3082 = new TH1F("Graph_Graph3082","",100,0,8.8);
   Graph_Graph3082->SetMinimum(0);
   Graph_Graph3082->SetMaximum(1.262698);
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
   TLegendEntry *entry=leg->AddEntry("new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l","Data","EPL");
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
   entry=leg->AddEntry("new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l","Data","EPL");
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
   
   TH1F *hframe_copy410 = new TH1F("hframe_copy410","",1000,0,8);
   hframe_copy410->SetMinimum(0);
   hframe_copy410->SetMaximum(54.01875);
   hframe_copy410->SetDirectory(0);
   hframe_copy410->SetStats(0);
   hframe_copy410->SetLineStyle(0);
   hframe_copy410->SetMarkerStyle(20);
   hframe_copy410->GetXaxis()->SetTitle("N_Jets");
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
   ccwh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l->Modified();
   ccwh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l->cd();
   ccwh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l->SetSelected(ccwh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l);
}
