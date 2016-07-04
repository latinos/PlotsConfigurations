void c_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l()
{
//=========Macro generated from canvas: ccwh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l/cc
//=========  (Sun Jul  3 01:22:20 2016) by ROOT version6.02/13
   TCanvas *ccwh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l = new TCanvas("ccwh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l", "cc",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   ccwh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l->SetHighLightColor(2);
   ccwh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l->Range(-1.6,-2.378049,8.4,15.91463);
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
   
   TH1F *hframe521 = new TH1F("hframe521","",1000,0,8);
   hframe521->SetMinimum(0);
   hframe521->SetMaximum(15);
   hframe521->SetDirectory(0);
   hframe521->SetStats(0);
   hframe521->SetLineStyle(0);
   hframe521->SetMarkerStyle(20);
   hframe521->GetXaxis()->SetTitle("N_Jets");
   hframe521->GetXaxis()->SetNdivisions(506);
   hframe521->GetXaxis()->SetLabelFont(42);
   hframe521->GetXaxis()->SetLabelOffset(0.007);
   hframe521->GetXaxis()->SetLabelSize(0.05);
   hframe521->GetXaxis()->SetTitleSize(0.06);
   hframe521->GetXaxis()->SetTitleOffset(0.9);
   hframe521->GetXaxis()->SetTitleFont(42);
   hframe521->GetYaxis()->SetTitle("Events");
   hframe521->GetYaxis()->SetLabelFont(42);
   hframe521->GetYaxis()->SetLabelOffset(0.007);
   hframe521->GetYaxis()->SetLabelSize(0.05);
   hframe521->GetYaxis()->SetTitleSize(0.06);
   hframe521->GetYaxis()->SetTitleOffset(1.25);
   hframe521->GetYaxis()->SetTitleFont(42);
   hframe521->GetZaxis()->SetLabelFont(42);
   hframe521->GetZaxis()->SetLabelOffset(0.007);
   hframe521->GetZaxis()->SetLabelSize(0.05);
   hframe521->GetZaxis()->SetTitleSize(0.06);
   hframe521->GetZaxis()->SetTitleFont(42);
   hframe521->Draw(" ");
   
   THStack *thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l = new THStack();
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l->SetName("thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l");
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l->SetTitle("thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l");
   
   TH1F *thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l_stack_105 = new TH1F("thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l_stack_105","thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l",8,0,8);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l_stack_105->SetMinimum(0);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l_stack_105->SetMaximum(4.473803);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l_stack_105->SetDirectory(0);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l_stack_105->SetStats(0);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l_stack_105->SetLineStyle(0);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l_stack_105->SetMarkerStyle(20);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l_stack_105->GetXaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l_stack_105->GetXaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l_stack_105->GetXaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l_stack_105->GetXaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l_stack_105->GetXaxis()->SetTitleOffset(0.9);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l_stack_105->GetXaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l_stack_105->GetYaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l_stack_105->GetYaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l_stack_105->GetYaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l_stack_105->GetYaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l_stack_105->GetYaxis()->SetTitleOffset(1.25);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l_stack_105->GetYaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l_stack_105->GetZaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l_stack_105->GetZaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l_stack_105->GetZaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l_stack_105->GetZaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l_stack_105->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l->SetHistogram(thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l_stack_105);
   
   
   TH1D *new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l522 = new TH1D("new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l522","histo_Fake",8,0,8);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l522->SetBinContent(1,2.902626);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l522->SetBinError(1,1.358139);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l522->SetEntries(33);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l522->SetFillColor(ci);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l522->SetFillStyle(3001);

   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l522->SetLineColor(ci);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l522->GetXaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l522->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l522->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l522->GetXaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l522->GetYaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l522->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l522->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l522->GetYaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l522->GetZaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l522->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l522->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l522->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l->Add(new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l,"");
   
   TH1D *new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l523 = new TH1D("new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l523","histo_WW",8,0,8);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l523->SetBinContent(1,0.02651546);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l523->SetBinError(1,0.01918247);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l523->SetEntries(2);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l523->SetFillColor(ci);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l523->SetFillStyle(3001);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l523->SetLineColor(ci);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l523->GetXaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l523->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l523->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l523->GetXaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l523->GetYaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l523->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l523->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l523->GetYaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l523->GetZaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l523->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l523->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l523->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l->Add(new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l,"");
   
   TH1D *new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l524 = new TH1D("new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l524","histo_VVV",8,0,8);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l524->SetBinContent(1,0.1027931);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l524->SetBinError(1,0.01693453);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l524->SetEntries(62);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l524->SetFillColor(ci);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l524->SetFillStyle(3001);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l524->SetLineColor(ci);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l524->GetXaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l524->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l524->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l524->GetXaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l524->GetYaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l524->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l524->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l524->GetYaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l524->GetZaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l524->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l524->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l524->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l->Add(new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l,"");
   
   TH1D *new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l525 = new TH1D("new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l525","histo_Vg",8,0,8);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l525->SetBinContent(1,0.0522728);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l525->SetBinError(1,0.0522728);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l525->SetEntries(1);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l525->SetFillColor(ci);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l525->SetFillStyle(3001);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l525->SetLineColor(ci);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l525->GetXaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l525->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l525->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l525->GetXaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l525->GetYaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l525->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l525->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l525->GetYaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l525->GetZaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l525->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l525->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l525->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l->Add(new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l,"");
   
   TH1D *new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l526 = new TH1D("new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l526","histo_ZZ",8,0,8);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l526->SetBinContent(1,0.07785033);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l526->SetBinError(1,0.05530859);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l526->SetEntries(2);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l526->SetFillColor(ci);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l526->SetFillStyle(3001);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l526->SetLineColor(ci);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l526->GetXaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l526->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l526->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l526->GetXaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l526->GetYaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l526->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l526->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l526->GetYaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l526->GetZaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l526->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l526->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l526->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l->Add(new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l,"");
   
   TH1D *new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l527 = new TH1D("new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l527","histo_WZ",8,0,8);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l527->SetBinContent(1,0.6226629);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l527->SetBinError(1,0.05775432);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l527->SetEntries(128);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l527->SetFillColor(ci);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l527->SetFillStyle(3001);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l527->SetLineColor(ci);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l527->GetXaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l527->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l527->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l527->GetXaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l527->GetYaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l527->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l527->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l527->GetYaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l527->GetZaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l527->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l527->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l527->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l->Add(new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l,"");
   
   TH1D *new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l528 = new TH1D("new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l528","histo_H_htt",8,0,8);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l528->SetBinContent(1,0.2835517);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l528->SetBinError(1,0.01760248);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l528->SetEntries(512);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l528->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l528->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l528->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l528->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l528->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l528->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l528->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l528->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l528->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l528->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l528->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l528->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l528->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l528->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l528->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l->Add(new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l,"");
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l->Draw("hist same");
   
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l = new THStack();
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l->SetName("thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l");
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l->SetTitle("thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l");
   
   TH1F *thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l_stack_106 = new TH1F("thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l_stack_106","thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l",8,0,8);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l_stack_106->SetMinimum(0);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l_stack_106->SetMaximum(0.3162119);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l_stack_106->SetDirectory(0);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l_stack_106->SetStats(0);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l_stack_106->SetLineStyle(0);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l_stack_106->SetMarkerStyle(20);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l_stack_106->GetXaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l_stack_106->GetXaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l_stack_106->GetXaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l_stack_106->GetXaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l_stack_106->GetXaxis()->SetTitleOffset(0.9);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l_stack_106->GetXaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l_stack_106->GetYaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l_stack_106->GetYaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l_stack_106->GetYaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l_stack_106->GetYaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l_stack_106->GetYaxis()->SetTitleOffset(1.25);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l_stack_106->GetYaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l_stack_106->GetZaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l_stack_106->GetZaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l_stack_106->GetZaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l_stack_106->GetZaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l_stack_106->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l->SetHistogram(thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l_stack_106);
   
   
   TH1D *new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l529 = new TH1D("new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l529","histo_H_htt",8,0,8);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l529->SetBinContent(1,0.2835517);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l529->SetBinError(1,0.01760248);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l529->SetEntries(512);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l529->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l529->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l529->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l529->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l529->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l529->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l529->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l529->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l529->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l529->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l529->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l529->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l529->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l529->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l529->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l->Add(new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l,"");
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l->Draw("hist same noclear");
   
   Double_t _fx3105[8] = {
   0.5,
   1.5,
   2.5,
   3.5,
   4.5,
   5.5,
   6.5,
   7.5};
   Double_t _fy3105[8] = {
   3.78472,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _felx3105[8] = {
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5};
   Double_t _fely3105[8] = {
   1.864364,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fehx3105[8] = {
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5};
   Double_t _fehy3105[8] = {
   1.864316,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(8,_fx3105,_fy3105,_felx3105,_fehx3105,_fely3105,_fehy3105);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(12);
   grae->SetFillStyle(3004);
   grae->SetLineColor(12);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3105 = new TH1F("Graph_Graph3105","",100,0,8.8);
   Graph_Graph3105->SetMinimum(0);
   Graph_Graph3105->SetMaximum(6.21394);
   Graph_Graph3105->SetDirectory(0);
   Graph_Graph3105->SetStats(0);
   Graph_Graph3105->SetLineStyle(0);
   Graph_Graph3105->SetMarkerStyle(20);
   Graph_Graph3105->GetXaxis()->SetLabelFont(42);
   Graph_Graph3105->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3105->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3105->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3105->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3105->GetXaxis()->SetTitleFont(42);
   Graph_Graph3105->GetYaxis()->SetLabelFont(42);
   Graph_Graph3105->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3105->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3105->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3105->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3105->GetYaxis()->SetTitleFont(42);
   Graph_Graph3105->GetZaxis()->SetLabelFont(42);
   Graph_Graph3105->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3105->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3105->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3105->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3105);
   
   grae->Draw("2");
   
   Double_t _fx3106[8] = {
   0.5,
   1.5,
   2.5,
   3.5,
   4.5,
   5.5,
   6.5,
   7.5};
   Double_t _fy3106[8] = {
   4,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _felx3106[8] = {
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5};
   Double_t _fely3106[8] = {
   1.914367,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fehx3106[8] = {
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5};
   Double_t _fehy3106[8] = {
   3.162815,
   1.147908,
   1.147908,
   1.147908,
   1.147908,
   1.147908,
   1.147908,
   1.147908};
   grae = new TGraphAsymmErrors(8,_fx3106,_fy3106,_felx3106,_fehx3106,_fely3106,_fehy3106);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(1);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3106 = new TH1F("Graph_Graph3106","",100,0,8.8);
   Graph_Graph3106->SetMinimum(0);
   Graph_Graph3106->SetMaximum(7.879097);
   Graph_Graph3106->SetDirectory(0);
   Graph_Graph3106->SetStats(0);
   Graph_Graph3106->SetLineStyle(0);
   Graph_Graph3106->SetMarkerStyle(20);
   Graph_Graph3106->GetXaxis()->SetLabelFont(42);
   Graph_Graph3106->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3106->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3106->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3106->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3106->GetXaxis()->SetTitleFont(42);
   Graph_Graph3106->GetYaxis()->SetLabelFont(42);
   Graph_Graph3106->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3106->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3106->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3106->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3106->GetYaxis()->SetTitleFont(42);
   Graph_Graph3106->GetZaxis()->SetLabelFont(42);
   Graph_Graph3106->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3106->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3106->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3106->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3106);
   
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
   
   TH1F *hframe_copy530 = new TH1F("hframe_copy530","",1000,0,8);
   hframe_copy530->SetMinimum(0);
   hframe_copy530->SetMaximum(15);
   hframe_copy530->SetDirectory(0);
   hframe_copy530->SetStats(0);
   hframe_copy530->SetLineStyle(0);
   hframe_copy530->SetMarkerStyle(20);
   hframe_copy530->GetXaxis()->SetTitle("N_Jets");
   hframe_copy530->GetXaxis()->SetNdivisions(506);
   hframe_copy530->GetXaxis()->SetLabelFont(42);
   hframe_copy530->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy530->GetXaxis()->SetLabelSize(0.05);
   hframe_copy530->GetXaxis()->SetTitleSize(0.06);
   hframe_copy530->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy530->GetXaxis()->SetTitleFont(42);
   hframe_copy530->GetYaxis()->SetTitle("Events");
   hframe_copy530->GetYaxis()->SetLabelFont(42);
   hframe_copy530->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy530->GetYaxis()->SetLabelSize(0.05);
   hframe_copy530->GetYaxis()->SetTitleSize(0.06);
   hframe_copy530->GetYaxis()->SetTitleOffset(1.25);
   hframe_copy530->GetYaxis()->SetTitleFont(42);
   hframe_copy530->GetZaxis()->SetLabelFont(42);
   hframe_copy530->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy530->GetZaxis()->SetLabelSize(0.05);
   hframe_copy530->GetZaxis()->SetTitleSize(0.06);
   hframe_copy530->GetZaxis()->SetTitleFont(42);
   hframe_copy530->Draw("sameaxis");
   ccwh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l->Modified();
   ccwh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l->cd();
   ccwh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l->SetSelected(ccwh3l_MET_JetV_ZVeto_mll_13TeV_njet_3l);
}
