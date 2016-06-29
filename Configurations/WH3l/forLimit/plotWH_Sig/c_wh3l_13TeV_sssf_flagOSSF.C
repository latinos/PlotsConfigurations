void c_wh3l_13TeV_sssf_flagOSSF()
{
//=========Macro generated from canvas: ccwh3l_13TeV_sssf_flagOSSF/cc
//=========  (Wed Jun 29 22:36:12 2016) by ROOT version6.02/13
   TCanvas *ccwh3l_13TeV_sssf_flagOSSF = new TCanvas("ccwh3l_13TeV_sssf_flagOSSF", "cc",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   ccwh3l_13TeV_sssf_flagOSSF->SetHighLightColor(2);
   ccwh3l_13TeV_sssf_flagOSSF->Range(-0.4,-1.571992,2.1,10.52026);
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
   
   TH1F *hframe91 = new TH1F("hframe91","",1000,0,2);
   hframe91->SetMinimum(0);
   hframe91->SetMaximum(9.915644);
   hframe91->SetDirectory(0);
   hframe91->SetStats(0);
   hframe91->SetLineStyle(0);
   hframe91->SetMarkerStyle(20);
   hframe91->GetXaxis()->SetTitle("flag OSSF");
   hframe91->GetXaxis()->SetNdivisions(506);
   hframe91->GetXaxis()->SetLabelFont(42);
   hframe91->GetXaxis()->SetLabelOffset(0.007);
   hframe91->GetXaxis()->SetLabelSize(0.05);
   hframe91->GetXaxis()->SetTitleSize(0.06);
   hframe91->GetXaxis()->SetTitleOffset(0.9);
   hframe91->GetXaxis()->SetTitleFont(42);
   hframe91->GetYaxis()->SetTitle("Events");
   hframe91->GetYaxis()->SetLabelFont(42);
   hframe91->GetYaxis()->SetLabelOffset(0.007);
   hframe91->GetYaxis()->SetLabelSize(0.05);
   hframe91->GetYaxis()->SetTitleSize(0.06);
   hframe91->GetYaxis()->SetTitleOffset(1.25);
   hframe91->GetYaxis()->SetTitleFont(42);
   hframe91->GetZaxis()->SetLabelFont(42);
   hframe91->GetZaxis()->SetLabelOffset(0.007);
   hframe91->GetZaxis()->SetLabelSize(0.05);
   hframe91->GetZaxis()->SetTitleSize(0.06);
   hframe91->GetZaxis()->SetTitleFont(42);
   hframe91->Draw(" ");
   
   THStack *thsBackground_grouped_wh3l_13TeV_sssf_flagOSSF = new THStack();
   thsBackground_grouped_wh3l_13TeV_sssf_flagOSSF->SetName("thsBackground_grouped_wh3l_13TeV_sssf_flagOSSF");
   thsBackground_grouped_wh3l_13TeV_sssf_flagOSSF->SetTitle("thsBackground_grouped_wh3l_13TeV_sssf_flagOSSF");
   
   TH1F *thsBackground_grouped_wh3l_13TeV_sssf_flagOSSF_stack_19 = new TH1F("thsBackground_grouped_wh3l_13TeV_sssf_flagOSSF_stack_19","thsBackground_grouped_wh3l_13TeV_sssf_flagOSSF",2,0,2);
   thsBackground_grouped_wh3l_13TeV_sssf_flagOSSF_stack_19->SetMinimum(0);
   thsBackground_grouped_wh3l_13TeV_sssf_flagOSSF_stack_19->SetMaximum(4.473803);
   thsBackground_grouped_wh3l_13TeV_sssf_flagOSSF_stack_19->SetDirectory(0);
   thsBackground_grouped_wh3l_13TeV_sssf_flagOSSF_stack_19->SetStats(0);
   thsBackground_grouped_wh3l_13TeV_sssf_flagOSSF_stack_19->SetLineStyle(0);
   thsBackground_grouped_wh3l_13TeV_sssf_flagOSSF_stack_19->SetMarkerStyle(20);
   thsBackground_grouped_wh3l_13TeV_sssf_flagOSSF_stack_19->GetXaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_13TeV_sssf_flagOSSF_stack_19->GetXaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_13TeV_sssf_flagOSSF_stack_19->GetXaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_13TeV_sssf_flagOSSF_stack_19->GetXaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_13TeV_sssf_flagOSSF_stack_19->GetXaxis()->SetTitleOffset(0.9);
   thsBackground_grouped_wh3l_13TeV_sssf_flagOSSF_stack_19->GetXaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_sssf_flagOSSF_stack_19->GetYaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_13TeV_sssf_flagOSSF_stack_19->GetYaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_13TeV_sssf_flagOSSF_stack_19->GetYaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_13TeV_sssf_flagOSSF_stack_19->GetYaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_13TeV_sssf_flagOSSF_stack_19->GetYaxis()->SetTitleOffset(1.25);
   thsBackground_grouped_wh3l_13TeV_sssf_flagOSSF_stack_19->GetYaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_sssf_flagOSSF_stack_19->GetZaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_13TeV_sssf_flagOSSF_stack_19->GetZaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_13TeV_sssf_flagOSSF_stack_19->GetZaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_13TeV_sssf_flagOSSF_stack_19->GetZaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_13TeV_sssf_flagOSSF_stack_19->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_sssf_flagOSSF->SetHistogram(thsBackground_grouped_wh3l_13TeV_sssf_flagOSSF_stack_19);
   
   
   TH1D *new_histo_group_Fake_wh3l_13TeV_sssf_flagOSSF92 = new TH1D("new_histo_group_Fake_wh3l_13TeV_sssf_flagOSSF92","histo_Fake",2,0,2);
   new_histo_group_Fake_wh3l_13TeV_sssf_flagOSSF92->SetBinContent(1,2.902626);
   new_histo_group_Fake_wh3l_13TeV_sssf_flagOSSF92->SetBinError(1,1.358139);
   new_histo_group_Fake_wh3l_13TeV_sssf_flagOSSF92->SetEntries(33);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_13TeV_sssf_flagOSSF92->SetFillColor(ci);
   new_histo_group_Fake_wh3l_13TeV_sssf_flagOSSF92->SetFillStyle(3001);

   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_13TeV_sssf_flagOSSF92->SetLineColor(ci);
   new_histo_group_Fake_wh3l_13TeV_sssf_flagOSSF92->GetXaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_13TeV_sssf_flagOSSF92->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_13TeV_sssf_flagOSSF92->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_13TeV_sssf_flagOSSF92->GetXaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_13TeV_sssf_flagOSSF92->GetYaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_13TeV_sssf_flagOSSF92->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_13TeV_sssf_flagOSSF92->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_13TeV_sssf_flagOSSF92->GetYaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_13TeV_sssf_flagOSSF92->GetZaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_13TeV_sssf_flagOSSF92->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_13TeV_sssf_flagOSSF92->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_13TeV_sssf_flagOSSF92->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_sssf_flagOSSF->Add(new_histo_group_Fake_wh3l_13TeV_sssf_flagOSSF,"");
   
   TH1D *new_histo_group_WW_wh3l_13TeV_sssf_flagOSSF93 = new TH1D("new_histo_group_WW_wh3l_13TeV_sssf_flagOSSF93","histo_WW",2,0,2);
   new_histo_group_WW_wh3l_13TeV_sssf_flagOSSF93->SetBinContent(1,0.02651546);
   new_histo_group_WW_wh3l_13TeV_sssf_flagOSSF93->SetBinError(1,0.01918247);
   new_histo_group_WW_wh3l_13TeV_sssf_flagOSSF93->SetEntries(2);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_13TeV_sssf_flagOSSF93->SetFillColor(ci);
   new_histo_group_WW_wh3l_13TeV_sssf_flagOSSF93->SetFillStyle(3001);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_13TeV_sssf_flagOSSF93->SetLineColor(ci);
   new_histo_group_WW_wh3l_13TeV_sssf_flagOSSF93->GetXaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_13TeV_sssf_flagOSSF93->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_13TeV_sssf_flagOSSF93->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_13TeV_sssf_flagOSSF93->GetXaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_13TeV_sssf_flagOSSF93->GetYaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_13TeV_sssf_flagOSSF93->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_13TeV_sssf_flagOSSF93->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_13TeV_sssf_flagOSSF93->GetYaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_13TeV_sssf_flagOSSF93->GetZaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_13TeV_sssf_flagOSSF93->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_13TeV_sssf_flagOSSF93->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_13TeV_sssf_flagOSSF93->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_sssf_flagOSSF->Add(new_histo_group_WW_wh3l_13TeV_sssf_flagOSSF,"");
   
   TH1D *new_histo_group_VVV_wh3l_13TeV_sssf_flagOSSF94 = new TH1D("new_histo_group_VVV_wh3l_13TeV_sssf_flagOSSF94","histo_VVV",2,0,2);
   new_histo_group_VVV_wh3l_13TeV_sssf_flagOSSF94->SetBinContent(1,0.0007784473);
   new_histo_group_VVV_wh3l_13TeV_sssf_flagOSSF94->SetBinError(1,0.0007784473);
   new_histo_group_VVV_wh3l_13TeV_sssf_flagOSSF94->SetEntries(1);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_13TeV_sssf_flagOSSF94->SetFillColor(ci);
   new_histo_group_VVV_wh3l_13TeV_sssf_flagOSSF94->SetFillStyle(3001);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_13TeV_sssf_flagOSSF94->SetLineColor(ci);
   new_histo_group_VVV_wh3l_13TeV_sssf_flagOSSF94->GetXaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_13TeV_sssf_flagOSSF94->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_13TeV_sssf_flagOSSF94->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_13TeV_sssf_flagOSSF94->GetXaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_13TeV_sssf_flagOSSF94->GetYaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_13TeV_sssf_flagOSSF94->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_13TeV_sssf_flagOSSF94->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_13TeV_sssf_flagOSSF94->GetYaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_13TeV_sssf_flagOSSF94->GetZaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_13TeV_sssf_flagOSSF94->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_13TeV_sssf_flagOSSF94->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_13TeV_sssf_flagOSSF94->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_sssf_flagOSSF->Add(new_histo_group_VVV_wh3l_13TeV_sssf_flagOSSF,"");
   
   TH1D *new_histo_group_Vg_wh3l_13TeV_sssf_flagOSSF95 = new TH1D("new_histo_group_Vg_wh3l_13TeV_sssf_flagOSSF95","histo_Vg",2,0,2);
   new_histo_group_Vg_wh3l_13TeV_sssf_flagOSSF95->SetBinContent(1,0.0522728);
   new_histo_group_Vg_wh3l_13TeV_sssf_flagOSSF95->SetBinError(1,0.0522728);
   new_histo_group_Vg_wh3l_13TeV_sssf_flagOSSF95->SetEntries(1);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_13TeV_sssf_flagOSSF95->SetFillColor(ci);
   new_histo_group_Vg_wh3l_13TeV_sssf_flagOSSF95->SetFillStyle(3001);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_13TeV_sssf_flagOSSF95->SetLineColor(ci);
   new_histo_group_Vg_wh3l_13TeV_sssf_flagOSSF95->GetXaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_13TeV_sssf_flagOSSF95->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_13TeV_sssf_flagOSSF95->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_13TeV_sssf_flagOSSF95->GetXaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_13TeV_sssf_flagOSSF95->GetYaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_13TeV_sssf_flagOSSF95->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_13TeV_sssf_flagOSSF95->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_13TeV_sssf_flagOSSF95->GetYaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_13TeV_sssf_flagOSSF95->GetZaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_13TeV_sssf_flagOSSF95->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_13TeV_sssf_flagOSSF95->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_13TeV_sssf_flagOSSF95->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_sssf_flagOSSF->Add(new_histo_group_Vg_wh3l_13TeV_sssf_flagOSSF,"");
   
   TH1D *new_histo_group_ZZ_wh3l_13TeV_sssf_flagOSSF96 = new TH1D("new_histo_group_ZZ_wh3l_13TeV_sssf_flagOSSF96","histo_ZZ",2,0,2);
   new_histo_group_ZZ_wh3l_13TeV_sssf_flagOSSF96->SetBinContent(1,0.07785033);
   new_histo_group_ZZ_wh3l_13TeV_sssf_flagOSSF96->SetBinError(1,0.05530859);
   new_histo_group_ZZ_wh3l_13TeV_sssf_flagOSSF96->SetEntries(2);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_13TeV_sssf_flagOSSF96->SetFillColor(ci);
   new_histo_group_ZZ_wh3l_13TeV_sssf_flagOSSF96->SetFillStyle(3001);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_13TeV_sssf_flagOSSF96->SetLineColor(ci);
   new_histo_group_ZZ_wh3l_13TeV_sssf_flagOSSF96->GetXaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_13TeV_sssf_flagOSSF96->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_13TeV_sssf_flagOSSF96->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_13TeV_sssf_flagOSSF96->GetXaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_13TeV_sssf_flagOSSF96->GetYaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_13TeV_sssf_flagOSSF96->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_13TeV_sssf_flagOSSF96->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_13TeV_sssf_flagOSSF96->GetYaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_13TeV_sssf_flagOSSF96->GetZaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_13TeV_sssf_flagOSSF96->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_13TeV_sssf_flagOSSF96->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_13TeV_sssf_flagOSSF96->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_sssf_flagOSSF->Add(new_histo_group_ZZ_wh3l_13TeV_sssf_flagOSSF,"");
   
   TH1D *new_histo_group_WZ_wh3l_13TeV_sssf_flagOSSF97 = new TH1D("new_histo_group_WZ_wh3l_13TeV_sssf_flagOSSF97","histo_WZ",2,0,2);
   new_histo_group_WZ_wh3l_13TeV_sssf_flagOSSF97->SetBinContent(1,0.6226629);
   new_histo_group_WZ_wh3l_13TeV_sssf_flagOSSF97->SetBinError(1,0.05775432);
   new_histo_group_WZ_wh3l_13TeV_sssf_flagOSSF97->SetEntries(128);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_13TeV_sssf_flagOSSF97->SetFillColor(ci);
   new_histo_group_WZ_wh3l_13TeV_sssf_flagOSSF97->SetFillStyle(3001);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_13TeV_sssf_flagOSSF97->SetLineColor(ci);
   new_histo_group_WZ_wh3l_13TeV_sssf_flagOSSF97->GetXaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_13TeV_sssf_flagOSSF97->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_13TeV_sssf_flagOSSF97->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_13TeV_sssf_flagOSSF97->GetXaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_13TeV_sssf_flagOSSF97->GetYaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_13TeV_sssf_flagOSSF97->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_13TeV_sssf_flagOSSF97->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_13TeV_sssf_flagOSSF97->GetYaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_13TeV_sssf_flagOSSF97->GetZaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_13TeV_sssf_flagOSSF97->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_13TeV_sssf_flagOSSF97->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_13TeV_sssf_flagOSSF97->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_sssf_flagOSSF->Add(new_histo_group_WZ_wh3l_13TeV_sssf_flagOSSF,"");
   
   TH1D *new_histo_group_Higgs_wh3l_13TeV_sssf_flagOSSF98 = new TH1D("new_histo_group_Higgs_wh3l_13TeV_sssf_flagOSSF98","histo_H_htt",2,0,2);
   new_histo_group_Higgs_wh3l_13TeV_sssf_flagOSSF98->SetBinContent(1,0.2835517);
   new_histo_group_Higgs_wh3l_13TeV_sssf_flagOSSF98->SetBinError(1,0.01760248);
   new_histo_group_Higgs_wh3l_13TeV_sssf_flagOSSF98->SetEntries(512);
   new_histo_group_Higgs_wh3l_13TeV_sssf_flagOSSF98->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_13TeV_sssf_flagOSSF98->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_13TeV_sssf_flagOSSF98->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_13TeV_sssf_flagOSSF98->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_13TeV_sssf_flagOSSF98->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_sssf_flagOSSF98->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_sssf_flagOSSF98->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_13TeV_sssf_flagOSSF98->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_13TeV_sssf_flagOSSF98->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_sssf_flagOSSF98->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_sssf_flagOSSF98->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_13TeV_sssf_flagOSSF98->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_13TeV_sssf_flagOSSF98->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_sssf_flagOSSF98->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_sssf_flagOSSF98->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_sssf_flagOSSF->Add(new_histo_group_Higgs_wh3l_13TeV_sssf_flagOSSF,"");
   thsBackground_grouped_wh3l_13TeV_sssf_flagOSSF->Draw("hist same");
   
   thsSignal_grouped_wh3l_13TeV_sssf_flagOSSF = new THStack();
   thsSignal_grouped_wh3l_13TeV_sssf_flagOSSF->SetName("thsSignal_grouped_wh3l_13TeV_sssf_flagOSSF");
   thsSignal_grouped_wh3l_13TeV_sssf_flagOSSF->SetTitle("thsSignal_grouped_wh3l_13TeV_sssf_flagOSSF");
   
   TH1F *thsSignal_grouped_wh3l_13TeV_sssf_flagOSSF_stack_20 = new TH1F("thsSignal_grouped_wh3l_13TeV_sssf_flagOSSF_stack_20","thsSignal_grouped_wh3l_13TeV_sssf_flagOSSF",2,0,2);
   thsSignal_grouped_wh3l_13TeV_sssf_flagOSSF_stack_20->SetMinimum(0);
   thsSignal_grouped_wh3l_13TeV_sssf_flagOSSF_stack_20->SetMaximum(0.3162119);
   thsSignal_grouped_wh3l_13TeV_sssf_flagOSSF_stack_20->SetDirectory(0);
   thsSignal_grouped_wh3l_13TeV_sssf_flagOSSF_stack_20->SetStats(0);
   thsSignal_grouped_wh3l_13TeV_sssf_flagOSSF_stack_20->SetLineStyle(0);
   thsSignal_grouped_wh3l_13TeV_sssf_flagOSSF_stack_20->SetMarkerStyle(20);
   thsSignal_grouped_wh3l_13TeV_sssf_flagOSSF_stack_20->GetXaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_13TeV_sssf_flagOSSF_stack_20->GetXaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_13TeV_sssf_flagOSSF_stack_20->GetXaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_13TeV_sssf_flagOSSF_stack_20->GetXaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_13TeV_sssf_flagOSSF_stack_20->GetXaxis()->SetTitleOffset(0.9);
   thsSignal_grouped_wh3l_13TeV_sssf_flagOSSF_stack_20->GetXaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_13TeV_sssf_flagOSSF_stack_20->GetYaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_13TeV_sssf_flagOSSF_stack_20->GetYaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_13TeV_sssf_flagOSSF_stack_20->GetYaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_13TeV_sssf_flagOSSF_stack_20->GetYaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_13TeV_sssf_flagOSSF_stack_20->GetYaxis()->SetTitleOffset(1.25);
   thsSignal_grouped_wh3l_13TeV_sssf_flagOSSF_stack_20->GetYaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_13TeV_sssf_flagOSSF_stack_20->GetZaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_13TeV_sssf_flagOSSF_stack_20->GetZaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_13TeV_sssf_flagOSSF_stack_20->GetZaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_13TeV_sssf_flagOSSF_stack_20->GetZaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_13TeV_sssf_flagOSSF_stack_20->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_13TeV_sssf_flagOSSF->SetHistogram(thsSignal_grouped_wh3l_13TeV_sssf_flagOSSF_stack_20);
   
   
   TH1D *new_histo_group_Higgs_wh3l_13TeV_sssf_flagOSSF99 = new TH1D("new_histo_group_Higgs_wh3l_13TeV_sssf_flagOSSF99","histo_H_htt",2,0,2);
   new_histo_group_Higgs_wh3l_13TeV_sssf_flagOSSF99->SetBinContent(1,0.2835517);
   new_histo_group_Higgs_wh3l_13TeV_sssf_flagOSSF99->SetBinError(1,0.01760248);
   new_histo_group_Higgs_wh3l_13TeV_sssf_flagOSSF99->SetEntries(512);
   new_histo_group_Higgs_wh3l_13TeV_sssf_flagOSSF99->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_13TeV_sssf_flagOSSF99->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_13TeV_sssf_flagOSSF99->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_13TeV_sssf_flagOSSF99->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_13TeV_sssf_flagOSSF99->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_sssf_flagOSSF99->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_sssf_flagOSSF99->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_13TeV_sssf_flagOSSF99->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_13TeV_sssf_flagOSSF99->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_sssf_flagOSSF99->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_sssf_flagOSSF99->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_13TeV_sssf_flagOSSF99->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_13TeV_sssf_flagOSSF99->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_sssf_flagOSSF99->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_sssf_flagOSSF99->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_13TeV_sssf_flagOSSF->Add(new_histo_group_Higgs_wh3l_13TeV_sssf_flagOSSF,"");
   thsSignal_grouped_wh3l_13TeV_sssf_flagOSSF->Draw("hist same noclear");
   
   Double_t _fx3019[2] = {
   0.5,
   1.5};
   Double_t _fy3019[2] = {
   3.682706,
   0};
   Double_t _felx3019[2] = {
   0.5,
   0.5};
   Double_t _fely3019[2] = {
   1.847999,
   0};
   Double_t _fehx3019[2] = {
   0.5,
   0.5};
   Double_t _fehy3019[2] = {
   1.847965,
   0};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(2,_fx3019,_fy3019,_felx3019,_fehx3019,_fely3019,_fehy3019);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(12);
   grae->SetFillStyle(3004);
   grae->SetLineColor(12);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3019 = new TH1F("Graph_Graph3019","",100,0,2.2);
   Graph_Graph3019->SetMinimum(0);
   Graph_Graph3019->SetMaximum(6.083738);
   Graph_Graph3019->SetDirectory(0);
   Graph_Graph3019->SetStats(0);
   Graph_Graph3019->SetLineStyle(0);
   Graph_Graph3019->SetMarkerStyle(20);
   Graph_Graph3019->GetXaxis()->SetLabelFont(42);
   Graph_Graph3019->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3019->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3019->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3019->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3019->GetXaxis()->SetTitleFont(42);
   Graph_Graph3019->GetYaxis()->SetLabelFont(42);
   Graph_Graph3019->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3019->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3019->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3019->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3019->GetYaxis()->SetTitleFont(42);
   Graph_Graph3019->GetZaxis()->SetLabelFont(42);
   Graph_Graph3019->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3019->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3019->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3019->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3019);
   
   grae->Draw("2");
   
   Double_t _fx3020[2] = {
   0.5,
   1.5};
   Double_t _fy3020[2] = {
   0,
   0};
   Double_t _felx3020[2] = {
   0.5,
   0.5};
   Double_t _fely3020[2] = {
   0,
   0};
   Double_t _fehx3020[2] = {
   0.5,
   0.5};
   Double_t _fehy3020[2] = {
   1.147908,
   1.147908};
   grae = new TGraphAsymmErrors(2,_fx3020,_fy3020,_felx3020,_fehx3020,_fely3020,_fehy3020);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(1);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3020 = new TH1F("Graph_Graph3020","",100,0,2.2);
   Graph_Graph3020->SetMinimum(0);
   Graph_Graph3020->SetMaximum(1.262698);
   Graph_Graph3020->SetDirectory(0);
   Graph_Graph3020->SetStats(0);
   Graph_Graph3020->SetLineStyle(0);
   Graph_Graph3020->SetMarkerStyle(20);
   Graph_Graph3020->GetXaxis()->SetLabelFont(42);
   Graph_Graph3020->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3020->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3020->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3020->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3020->GetXaxis()->SetTitleFont(42);
   Graph_Graph3020->GetYaxis()->SetLabelFont(42);
   Graph_Graph3020->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3020->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3020->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3020->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3020->GetYaxis()->SetTitleFont(42);
   Graph_Graph3020->GetZaxis()->SetLabelFont(42);
   Graph_Graph3020->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3020->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3020->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3020->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3020);
   
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
   
   TH1F *hframe_copy100 = new TH1F("hframe_copy100","",1000,0,2);
   hframe_copy100->SetMinimum(0);
   hframe_copy100->SetMaximum(9.915644);
   hframe_copy100->SetDirectory(0);
   hframe_copy100->SetStats(0);
   hframe_copy100->SetLineStyle(0);
   hframe_copy100->SetMarkerStyle(20);
   hframe_copy100->GetXaxis()->SetTitle("flag OSSF");
   hframe_copy100->GetXaxis()->SetNdivisions(506);
   hframe_copy100->GetXaxis()->SetLabelFont(42);
   hframe_copy100->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy100->GetXaxis()->SetLabelSize(0.05);
   hframe_copy100->GetXaxis()->SetTitleSize(0.06);
   hframe_copy100->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy100->GetXaxis()->SetTitleFont(42);
   hframe_copy100->GetYaxis()->SetTitle("Events");
   hframe_copy100->GetYaxis()->SetLabelFont(42);
   hframe_copy100->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy100->GetYaxis()->SetLabelSize(0.05);
   hframe_copy100->GetYaxis()->SetTitleSize(0.06);
   hframe_copy100->GetYaxis()->SetTitleOffset(1.25);
   hframe_copy100->GetYaxis()->SetTitleFont(42);
   hframe_copy100->GetZaxis()->SetLabelFont(42);
   hframe_copy100->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy100->GetZaxis()->SetLabelSize(0.05);
   hframe_copy100->GetZaxis()->SetTitleSize(0.06);
   hframe_copy100->GetZaxis()->SetTitleFont(42);
   hframe_copy100->Draw("sameaxis");
   ccwh3l_13TeV_sssf_flagOSSF->Modified();
   ccwh3l_13TeV_sssf_flagOSSF->cd();
   ccwh3l_13TeV_sssf_flagOSSF->SetSelected(ccwh3l_13TeV_sssf_flagOSSF);
}
