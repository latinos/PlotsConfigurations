void c_wh3l_13TeV_met()
{
//=========Macro generated from canvas: ccwh3l_13TeV_met/cc
//=========  (Wed Jun 29 01:51:49 2016) by ROOT version6.02/13
   TCanvas *ccwh3l_13TeV_met = new TCanvas("ccwh3l_13TeV_met", "cc",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   ccwh3l_13TeV_met->SetHighLightColor(2);
   ccwh3l_13TeV_met->Range(-40,-1.693784,210,11.33533);
   ccwh3l_13TeV_met->SetFillColor(0);
   ccwh3l_13TeV_met->SetBorderMode(0);
   ccwh3l_13TeV_met->SetBorderSize(2);
   ccwh3l_13TeV_met->SetTickx(1);
   ccwh3l_13TeV_met->SetTicky(1);
   ccwh3l_13TeV_met->SetLeftMargin(0.16);
   ccwh3l_13TeV_met->SetRightMargin(0.04);
   ccwh3l_13TeV_met->SetTopMargin(0.05);
   ccwh3l_13TeV_met->SetBottomMargin(0.13);
   ccwh3l_13TeV_met->SetFrameFillStyle(0);
   ccwh3l_13TeV_met->SetFrameBorderMode(0);
   ccwh3l_13TeV_met->SetFrameFillStyle(0);
   ccwh3l_13TeV_met->SetFrameBorderMode(0);
   
   TH1F *hframe341 = new TH1F("hframe341","",1000,0,200);
   hframe341->SetMinimum(0);
   hframe341->SetMaximum(10.68387);
   hframe341->SetDirectory(0);
   hframe341->SetStats(0);
   hframe341->SetLineStyle(0);
   hframe341->SetMarkerStyle(20);
   hframe341->GetXaxis()->SetTitle("pfmet [GeV]");
   hframe341->GetXaxis()->SetNdivisions(506);
   hframe341->GetXaxis()->SetLabelFont(42);
   hframe341->GetXaxis()->SetLabelOffset(0.007);
   hframe341->GetXaxis()->SetLabelSize(0.05);
   hframe341->GetXaxis()->SetTitleSize(0.06);
   hframe341->GetXaxis()->SetTitleOffset(0.9);
   hframe341->GetXaxis()->SetTitleFont(42);
   hframe341->GetYaxis()->SetTitle("Events");
   hframe341->GetYaxis()->SetLabelFont(42);
   hframe341->GetYaxis()->SetLabelOffset(0.007);
   hframe341->GetYaxis()->SetLabelSize(0.05);
   hframe341->GetYaxis()->SetTitleSize(0.06);
   hframe341->GetYaxis()->SetTitleOffset(1.25);
   hframe341->GetYaxis()->SetTitleFont(42);
   hframe341->GetZaxis()->SetLabelFont(42);
   hframe341->GetZaxis()->SetLabelOffset(0.007);
   hframe341->GetZaxis()->SetLabelSize(0.05);
   hframe341->GetZaxis()->SetTitleSize(0.06);
   hframe341->GetZaxis()->SetTitleFont(42);
   hframe341->Draw(" ");
   
   THStack *thsBackground_grouped_wh3l_13TeV_met = new THStack();
   thsBackground_grouped_wh3l_13TeV_met->SetName("thsBackground_grouped_wh3l_13TeV_met");
   thsBackground_grouped_wh3l_13TeV_met->SetTitle("thsBackground_grouped_wh3l_13TeV_met");
   
   TH1F *thsBackground_grouped_wh3l_13TeV_met_stack_69 = new TH1F("thsBackground_grouped_wh3l_13TeV_met_stack_69","thsBackground_grouped_wh3l_13TeV_met",40,0,200);
   thsBackground_grouped_wh3l_13TeV_met_stack_69->SetMinimum(-0.2978284);
   thsBackground_grouped_wh3l_13TeV_met_stack_69->SetMaximum(4.487225);
   thsBackground_grouped_wh3l_13TeV_met_stack_69->SetDirectory(0);
   thsBackground_grouped_wh3l_13TeV_met_stack_69->SetStats(0);
   thsBackground_grouped_wh3l_13TeV_met_stack_69->SetLineStyle(0);
   thsBackground_grouped_wh3l_13TeV_met_stack_69->SetMarkerStyle(20);
   thsBackground_grouped_wh3l_13TeV_met_stack_69->GetXaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_13TeV_met_stack_69->GetXaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_13TeV_met_stack_69->GetXaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_13TeV_met_stack_69->GetXaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_13TeV_met_stack_69->GetXaxis()->SetTitleOffset(0.9);
   thsBackground_grouped_wh3l_13TeV_met_stack_69->GetXaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_met_stack_69->GetYaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_13TeV_met_stack_69->GetYaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_13TeV_met_stack_69->GetYaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_13TeV_met_stack_69->GetYaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_13TeV_met_stack_69->GetYaxis()->SetTitleOffset(1.25);
   thsBackground_grouped_wh3l_13TeV_met_stack_69->GetYaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_met_stack_69->GetZaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_13TeV_met_stack_69->GetZaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_13TeV_met_stack_69->GetZaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_13TeV_met_stack_69->GetZaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_13TeV_met_stack_69->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_met->SetHistogram(thsBackground_grouped_wh3l_13TeV_met_stack_69);
   
   
   TH1D *new_histo_group_Fake_wh3l_13TeV_met342 = new TH1D("new_histo_group_Fake_wh3l_13TeV_met342","histo_Fake",40,0,200);
   new_histo_group_Fake_wh3l_13TeV_met342->SetBinContent(9,1.03744);
   new_histo_group_Fake_wh3l_13TeV_met342->SetBinContent(10,1.153169);
   new_histo_group_Fake_wh3l_13TeV_met342->SetBinContent(11,2.724946);
   new_histo_group_Fake_wh3l_13TeV_met342->SetBinContent(12,1.178965);
   new_histo_group_Fake_wh3l_13TeV_met342->SetBinContent(13,0.3145562);
   new_histo_group_Fake_wh3l_13TeV_met342->SetBinContent(14,0.3810413);
   new_histo_group_Fake_wh3l_13TeV_met342->SetBinContent(15,0.5416734);
   new_histo_group_Fake_wh3l_13TeV_met342->SetBinContent(16,-0.13877);
   new_histo_group_Fake_wh3l_13TeV_met342->SetBinContent(17,1.215007);
   new_histo_group_Fake_wh3l_13TeV_met342->SetBinContent(18,-0.05269274);
   new_histo_group_Fake_wh3l_13TeV_met342->SetBinContent(19,-0.0444209);
   new_histo_group_Fake_wh3l_13TeV_met342->SetBinContent(20,0.4113768);
   new_histo_group_Fake_wh3l_13TeV_met342->SetBinContent(21,-0.05601251);
   new_histo_group_Fake_wh3l_13TeV_met342->SetBinContent(22,1.027331);
   new_histo_group_Fake_wh3l_13TeV_met342->SetBinContent(23,0.1339182);
   new_histo_group_Fake_wh3l_13TeV_met342->SetBinContent(25,-0.1741594);
   new_histo_group_Fake_wh3l_13TeV_met342->SetBinContent(26,0.08972475);
   new_histo_group_Fake_wh3l_13TeV_met342->SetBinContent(28,-0.006674166);
   new_histo_group_Fake_wh3l_13TeV_met342->SetBinContent(37,-0.008195123);
   new_histo_group_Fake_wh3l_13TeV_met342->SetBinError(9,1.091324);
   new_histo_group_Fake_wh3l_13TeV_met342->SetBinError(10,0.8604807);
   new_histo_group_Fake_wh3l_13TeV_met342->SetBinError(11,1.131477);
   new_histo_group_Fake_wh3l_13TeV_met342->SetBinError(12,0.9025345);
   new_histo_group_Fake_wh3l_13TeV_met342->SetBinError(13,0.4306849);
   new_histo_group_Fake_wh3l_13TeV_met342->SetBinError(14,0.6486743);
   new_histo_group_Fake_wh3l_13TeV_met342->SetBinError(15,0.549266);
   new_histo_group_Fake_wh3l_13TeV_met342->SetBinError(16,0.1274148);
   new_histo_group_Fake_wh3l_13TeV_met342->SetBinError(17,0.7296101);
   new_histo_group_Fake_wh3l_13TeV_met342->SetBinError(18,0.05210733);
   new_histo_group_Fake_wh3l_13TeV_met342->SetBinError(19,0.2341298);
   new_histo_group_Fake_wh3l_13TeV_met342->SetBinError(20,0.5309904);
   new_histo_group_Fake_wh3l_13TeV_met342->SetBinError(21,0.05545482);
   new_histo_group_Fake_wh3l_13TeV_met342->SetBinError(22,0.8574354);
   new_histo_group_Fake_wh3l_13TeV_met342->SetBinError(23,0.1345152);
   new_histo_group_Fake_wh3l_13TeV_met342->SetBinError(25,0.1236689);
   new_histo_group_Fake_wh3l_13TeV_met342->SetBinError(26,0.08835359);
   new_histo_group_Fake_wh3l_13TeV_met342->SetBinError(28,0.006674166);
   new_histo_group_Fake_wh3l_13TeV_met342->SetBinError(37,0.008195123);
   new_histo_group_Fake_wh3l_13TeV_met342->SetEntries(109);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_13TeV_met342->SetFillColor(ci);
   new_histo_group_Fake_wh3l_13TeV_met342->SetFillStyle(3001);

   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_13TeV_met342->SetLineColor(ci);
   new_histo_group_Fake_wh3l_13TeV_met342->GetXaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_13TeV_met342->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_13TeV_met342->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_13TeV_met342->GetXaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_13TeV_met342->GetYaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_13TeV_met342->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_13TeV_met342->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_13TeV_met342->GetYaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_13TeV_met342->GetZaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_13TeV_met342->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_13TeV_met342->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_13TeV_met342->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_met->Add(new_histo_group_Fake_wh3l_13TeV_met,"");
   
   TH1D *new_histo_group_WW_wh3l_13TeV_met343 = new TH1D("new_histo_group_WW_wh3l_13TeV_met343","histo_WW",40,0,200);
   new_histo_group_WW_wh3l_13TeV_met343->SetBinContent(9,0.0303325);
   new_histo_group_WW_wh3l_13TeV_met343->SetBinContent(10,0.03345312);
   new_histo_group_WW_wh3l_13TeV_met343->SetBinContent(13,0.01447441);
   new_histo_group_WW_wh3l_13TeV_met343->SetBinContent(16,0.01044191);
   new_histo_group_WW_wh3l_13TeV_met343->SetBinError(9,0.02149105);
   new_histo_group_WW_wh3l_13TeV_met343->SetBinError(10,0.02374035);
   new_histo_group_WW_wh3l_13TeV_met343->SetBinError(13,0.01447441);
   new_histo_group_WW_wh3l_13TeV_met343->SetBinError(16,0.01044191);
   new_histo_group_WW_wh3l_13TeV_met343->SetEntries(6);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_13TeV_met343->SetFillColor(ci);
   new_histo_group_WW_wh3l_13TeV_met343->SetFillStyle(3001);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_13TeV_met343->SetLineColor(ci);
   new_histo_group_WW_wh3l_13TeV_met343->GetXaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_13TeV_met343->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_13TeV_met343->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_13TeV_met343->GetXaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_13TeV_met343->GetYaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_13TeV_met343->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_13TeV_met343->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_13TeV_met343->GetYaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_13TeV_met343->GetZaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_13TeV_met343->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_13TeV_met343->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_13TeV_met343->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_met->Add(new_histo_group_WW_wh3l_13TeV_met,"");
   
   TH1D *new_histo_group_VVV_wh3l_13TeV_met344 = new TH1D("new_histo_group_VVV_wh3l_13TeV_met344","histo_VVV",40,0,200);
   new_histo_group_VVV_wh3l_13TeV_met344->SetBinContent(9,0.0006249245);
   new_histo_group_VVV_wh3l_13TeV_met344->SetBinContent(10,0.001240314);
   new_histo_group_VVV_wh3l_13TeV_met344->SetBinContent(11,0.0008959455);
   new_histo_group_VVV_wh3l_13TeV_met344->SetBinContent(13,0.001631847);
   new_histo_group_VVV_wh3l_13TeV_met344->SetBinContent(14,0.0006729142);
   new_histo_group_VVV_wh3l_13TeV_met344->SetBinContent(22,0.0006343185);
   new_histo_group_VVV_wh3l_13TeV_met344->SetBinContent(23,0.0006504452);
   new_histo_group_VVV_wh3l_13TeV_met344->SetBinContent(27,0.0007784473);
   new_histo_group_VVV_wh3l_13TeV_met344->SetBinContent(35,0.0006405607);
   new_histo_group_VVV_wh3l_13TeV_met344->SetBinContent(41,0.0005490761);
   new_histo_group_VVV_wh3l_13TeV_met344->SetBinError(9,0.0006249245);
   new_histo_group_VVV_wh3l_13TeV_met344->SetBinError(10,0.0008770975);
   new_histo_group_VVV_wh3l_13TeV_met344->SetBinError(11,0.0007189671);
   new_histo_group_VVV_wh3l_13TeV_met344->SetBinError(13,0.0009923548);
   new_histo_group_VVV_wh3l_13TeV_met344->SetBinError(14,0.0006729142);
   new_histo_group_VVV_wh3l_13TeV_met344->SetBinError(22,0.0006343185);
   new_histo_group_VVV_wh3l_13TeV_met344->SetBinError(23,0.0006504452);
   new_histo_group_VVV_wh3l_13TeV_met344->SetBinError(27,0.0007784473);
   new_histo_group_VVV_wh3l_13TeV_met344->SetBinError(35,0.0006405607);
   new_histo_group_VVV_wh3l_13TeV_met344->SetBinError(41,0.0005490761);
   new_histo_group_VVV_wh3l_13TeV_met344->SetEntries(14);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_13TeV_met344->SetFillColor(ci);
   new_histo_group_VVV_wh3l_13TeV_met344->SetFillStyle(3001);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_13TeV_met344->SetLineColor(ci);
   new_histo_group_VVV_wh3l_13TeV_met344->GetXaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_13TeV_met344->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_13TeV_met344->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_13TeV_met344->GetXaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_13TeV_met344->GetYaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_13TeV_met344->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_13TeV_met344->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_13TeV_met344->GetYaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_13TeV_met344->GetZaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_13TeV_met344->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_13TeV_met344->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_13TeV_met344->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_met->Add(new_histo_group_VVV_wh3l_13TeV_met,"");
   
   TH1D *new_histo_group_Vg_wh3l_13TeV_met345 = new TH1D("new_histo_group_Vg_wh3l_13TeV_met345","histo_Vg",40,0,200);
   new_histo_group_Vg_wh3l_13TeV_met345->SetBinContent(9,0.9327583);
   new_histo_group_Vg_wh3l_13TeV_met345->SetBinContent(10,0.8533485);
   new_histo_group_Vg_wh3l_13TeV_met345->SetBinContent(11,0.4091599);
   new_histo_group_Vg_wh3l_13TeV_met345->SetBinContent(12,0.4529023);
   new_histo_group_Vg_wh3l_13TeV_met345->SetBinError(9,0.3944573);
   new_histo_group_Vg_wh3l_13TeV_met345->SetBinError(10,0.2991175);
   new_histo_group_Vg_wh3l_13TeV_met345->SetBinError(11,0.1891369);
   new_histo_group_Vg_wh3l_13TeV_met345->SetBinError(12,0.2100381);
   new_histo_group_Vg_wh3l_13TeV_met345->SetEntries(42);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_13TeV_met345->SetFillColor(ci);
   new_histo_group_Vg_wh3l_13TeV_met345->SetFillStyle(3001);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_13TeV_met345->SetLineColor(ci);
   new_histo_group_Vg_wh3l_13TeV_met345->GetXaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_13TeV_met345->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_13TeV_met345->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_13TeV_met345->GetXaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_13TeV_met345->GetYaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_13TeV_met345->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_13TeV_met345->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_13TeV_met345->GetYaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_13TeV_met345->GetZaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_13TeV_met345->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_13TeV_met345->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_13TeV_met345->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_met->Add(new_histo_group_Vg_wh3l_13TeV_met,"");
   
   TH1D *new_histo_group_ZZ_wh3l_13TeV_met346 = new TH1D("new_histo_group_ZZ_wh3l_13TeV_met346","histo_ZZ",40,0,200);
   new_histo_group_ZZ_wh3l_13TeV_met346->SetBinContent(9,0.1619121);
   new_histo_group_ZZ_wh3l_13TeV_met346->SetBinContent(10,0.1514073);
   new_histo_group_ZZ_wh3l_13TeV_met346->SetBinContent(11,0.1278668);
   new_histo_group_ZZ_wh3l_13TeV_met346->SetBinContent(12,0.04271351);
   new_histo_group_ZZ_wh3l_13TeV_met346->SetBinContent(13,0.07189054);
   new_histo_group_ZZ_wh3l_13TeV_met346->SetBinContent(15,0.02711696);
   new_histo_group_ZZ_wh3l_13TeV_met346->SetBinContent(24,0.02856258);
   new_histo_group_ZZ_wh3l_13TeV_met346->SetBinContent(33,0.03513683);
   new_histo_group_ZZ_wh3l_13TeV_met346->SetBinError(9,0.08296664);
   new_histo_group_ZZ_wh3l_13TeV_met346->SetBinError(10,0.07657922);
   new_histo_group_ZZ_wh3l_13TeV_met346->SetBinError(11,0.07072701);
   new_histo_group_ZZ_wh3l_13TeV_met346->SetBinError(12,0.0427135);
   new_histo_group_ZZ_wh3l_13TeV_met346->SetBinError(13,0.05189561);
   new_histo_group_ZZ_wh3l_13TeV_met346->SetBinError(15,0.02711696);
   new_histo_group_ZZ_wh3l_13TeV_met346->SetBinError(24,0.02856258);
   new_histo_group_ZZ_wh3l_13TeV_met346->SetBinError(33,0.03513683);
   new_histo_group_ZZ_wh3l_13TeV_met346->SetEntries(19);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_13TeV_met346->SetFillColor(ci);
   new_histo_group_ZZ_wh3l_13TeV_met346->SetFillStyle(3001);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_13TeV_met346->SetLineColor(ci);
   new_histo_group_ZZ_wh3l_13TeV_met346->GetXaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_13TeV_met346->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_13TeV_met346->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_13TeV_met346->GetXaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_13TeV_met346->GetYaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_13TeV_met346->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_13TeV_met346->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_13TeV_met346->GetYaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_13TeV_met346->GetZaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_13TeV_met346->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_13TeV_met346->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_13TeV_met346->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_met->Add(new_histo_group_ZZ_wh3l_13TeV_met,"");
   
   TH1D *new_histo_group_WZ_wh3l_13TeV_met347 = new TH1D("new_histo_group_WZ_wh3l_13TeV_met347","histo_WZ",40,0,200);
   new_histo_group_WZ_wh3l_13TeV_met347->SetBinContent(9,1.16208);
   new_histo_group_WZ_wh3l_13TeV_met347->SetBinContent(10,1.181193);
   new_histo_group_WZ_wh3l_13TeV_met347->SetBinContent(11,0.9192245);
   new_histo_group_WZ_wh3l_13TeV_met347->SetBinContent(12,0.891361);
   new_histo_group_WZ_wh3l_13TeV_met347->SetBinContent(13,0.605267);
   new_histo_group_WZ_wh3l_13TeV_met347->SetBinContent(14,0.5657088);
   new_histo_group_WZ_wh3l_13TeV_met347->SetBinContent(15,0.4029578);
   new_histo_group_WZ_wh3l_13TeV_met347->SetBinContent(16,0.3312264);
   new_histo_group_WZ_wh3l_13TeV_met347->SetBinContent(17,0.2539586);
   new_histo_group_WZ_wh3l_13TeV_met347->SetBinContent(18,0.1703759);
   new_histo_group_WZ_wh3l_13TeV_met347->SetBinContent(19,0.1058463);
   new_histo_group_WZ_wh3l_13TeV_met347->SetBinContent(20,0.1201328);
   new_histo_group_WZ_wh3l_13TeV_met347->SetBinContent(21,0.1095509);
   new_histo_group_WZ_wh3l_13TeV_met347->SetBinContent(22,0.09274451);
   new_histo_group_WZ_wh3l_13TeV_met347->SetBinContent(23,0.07088707);
   new_histo_group_WZ_wh3l_13TeV_met347->SetBinContent(24,0.04896016);
   new_histo_group_WZ_wh3l_13TeV_met347->SetBinContent(25,0.03687642);
   new_histo_group_WZ_wh3l_13TeV_met347->SetBinContent(26,0.02323807);
   new_histo_group_WZ_wh3l_13TeV_met347->SetBinContent(27,0.01927328);
   new_histo_group_WZ_wh3l_13TeV_met347->SetBinContent(28,0.00988046);
   new_histo_group_WZ_wh3l_13TeV_met347->SetBinContent(29,0.03026687);
   new_histo_group_WZ_wh3l_13TeV_met347->SetBinContent(30,0.01662978);
   new_histo_group_WZ_wh3l_13TeV_met347->SetBinContent(31,0.01053258);
   new_histo_group_WZ_wh3l_13TeV_met347->SetBinContent(32,0.02028379);
   new_histo_group_WZ_wh3l_13TeV_met347->SetBinContent(33,0.01843559);
   new_histo_group_WZ_wh3l_13TeV_met347->SetBinContent(34,0.01204565);
   new_histo_group_WZ_wh3l_13TeV_met347->SetBinContent(35,0.01084022);
   new_histo_group_WZ_wh3l_13TeV_met347->SetBinContent(36,0.01123944);
   new_histo_group_WZ_wh3l_13TeV_met347->SetBinContent(37,0.02264966);
   new_histo_group_WZ_wh3l_13TeV_met347->SetBinContent(38,0.002637757);
   new_histo_group_WZ_wh3l_13TeV_met347->SetBinContent(39,0.01342807);
   new_histo_group_WZ_wh3l_13TeV_met347->SetBinContent(40,0.008730846);
   new_histo_group_WZ_wh3l_13TeV_met347->SetBinContent(41,0.09075244);
   new_histo_group_WZ_wh3l_13TeV_met347->SetBinError(9,0.07927261);
   new_histo_group_WZ_wh3l_13TeV_met347->SetBinError(10,0.08039532);
   new_histo_group_WZ_wh3l_13TeV_met347->SetBinError(11,0.07098663);
   new_histo_group_WZ_wh3l_13TeV_met347->SetBinError(12,0.07018987);
   new_histo_group_WZ_wh3l_13TeV_met347->SetBinError(13,0.05742151);
   new_histo_group_WZ_wh3l_13TeV_met347->SetBinError(14,0.05576128);
   new_histo_group_WZ_wh3l_13TeV_met347->SetBinError(15,0.04682014);
   new_histo_group_WZ_wh3l_13TeV_met347->SetBinError(16,0.04238436);
   new_histo_group_WZ_wh3l_13TeV_met347->SetBinError(17,0.03639115);
   new_histo_group_WZ_wh3l_13TeV_met347->SetBinError(18,0.03044673);
   new_histo_group_WZ_wh3l_13TeV_met347->SetBinError(19,0.02257112);
   new_histo_group_WZ_wh3l_13TeV_met347->SetBinError(20,0.0250881);
   new_histo_group_WZ_wh3l_13TeV_met347->SetBinError(21,0.02417563);
   new_histo_group_WZ_wh3l_13TeV_met347->SetBinError(22,0.02262537);
   new_histo_group_WZ_wh3l_13TeV_met347->SetBinError(23,0.01915326);
   new_histo_group_WZ_wh3l_13TeV_met347->SetBinError(24,0.01578889);
   new_histo_group_WZ_wh3l_13TeV_met347->SetBinError(25,0.01453736);
   new_histo_group_WZ_wh3l_13TeV_met347->SetBinError(26,0.01130215);
   new_histo_group_WZ_wh3l_13TeV_met347->SetBinError(27,0.009952158);
   new_histo_group_WZ_wh3l_13TeV_met347->SetBinError(28,0.006766018);
   new_histo_group_WZ_wh3l_13TeV_met347->SetBinError(29,0.01287621);
   new_histo_group_WZ_wh3l_13TeV_met347->SetBinError(30,0.009454112);
   new_histo_group_WZ_wh3l_13TeV_met347->SetBinError(31,0.007354234);
   new_histo_group_WZ_wh3l_13TeV_met347->SetBinError(32,0.01018666);
   new_histo_group_WZ_wh3l_13TeV_met347->SetBinError(33,0.01065415);
   new_histo_group_WZ_wh3l_13TeV_met347->SetBinError(34,0.007001037);
   new_histo_group_WZ_wh3l_13TeV_met347->SetBinError(35,0.007665218);
   new_histo_group_WZ_wh3l_13TeV_met347->SetBinError(36,0.007952499);
   new_histo_group_WZ_wh3l_13TeV_met347->SetBinError(37,0.01109833);
   new_histo_group_WZ_wh3l_13TeV_met347->SetBinError(38,0.002610874);
   new_histo_group_WZ_wh3l_13TeV_met347->SetBinError(39,0.008016728);
   new_histo_group_WZ_wh3l_13TeV_met347->SetBinError(40,0.006779719);
   new_histo_group_WZ_wh3l_13TeV_met347->SetBinError(41,0.0220158);
   new_histo_group_WZ_wh3l_13TeV_met347->SetEntries(1516);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_13TeV_met347->SetFillColor(ci);
   new_histo_group_WZ_wh3l_13TeV_met347->SetFillStyle(3001);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_13TeV_met347->SetLineColor(ci);
   new_histo_group_WZ_wh3l_13TeV_met347->GetXaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_13TeV_met347->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_13TeV_met347->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_13TeV_met347->GetXaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_13TeV_met347->GetYaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_13TeV_met347->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_13TeV_met347->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_13TeV_met347->GetYaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_13TeV_met347->GetZaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_13TeV_met347->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_13TeV_met347->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_13TeV_met347->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_met->Add(new_histo_group_WZ_wh3l_13TeV_met,"");
   
   TH1D *new_histo_group_Higgs_wh3l_13TeV_met348 = new TH1D("new_histo_group_Higgs_wh3l_13TeV_met348","histo_H_htt",40,0,200);
   new_histo_group_Higgs_wh3l_13TeV_met348->SetBinContent(9,0.1105939);
   new_histo_group_Higgs_wh3l_13TeV_met348->SetBinContent(10,0.07640479);
   new_histo_group_Higgs_wh3l_13TeV_met348->SetBinContent(11,0.09145428);
   new_histo_group_Higgs_wh3l_13TeV_met348->SetBinContent(12,0.05335606);
   new_histo_group_Higgs_wh3l_13TeV_met348->SetBinContent(13,0.06085159);
   new_histo_group_Higgs_wh3l_13TeV_met348->SetBinContent(14,0.06878171);
   new_histo_group_Higgs_wh3l_13TeV_met348->SetBinContent(15,0.05592964);
   new_histo_group_Higgs_wh3l_13TeV_met348->SetBinContent(16,0.05188913);
   new_histo_group_Higgs_wh3l_13TeV_met348->SetBinContent(17,0.04462155);
   new_histo_group_Higgs_wh3l_13TeV_met348->SetBinContent(18,0.0411532);
   new_histo_group_Higgs_wh3l_13TeV_met348->SetBinContent(19,0.03831102);
   new_histo_group_Higgs_wh3l_13TeV_met348->SetBinContent(20,0.02296404);
   new_histo_group_Higgs_wh3l_13TeV_met348->SetBinContent(21,0.02459011);
   new_histo_group_Higgs_wh3l_13TeV_met348->SetBinContent(22,0.02267602);
   new_histo_group_Higgs_wh3l_13TeV_met348->SetBinContent(23,0.01821363);
   new_histo_group_Higgs_wh3l_13TeV_met348->SetBinContent(24,0.0100092);
   new_histo_group_Higgs_wh3l_13TeV_met348->SetBinContent(25,0.005155546);
   new_histo_group_Higgs_wh3l_13TeV_met348->SetBinContent(26,0.005650542);
   new_histo_group_Higgs_wh3l_13TeV_met348->SetBinContent(27,0.005294731);
   new_histo_group_Higgs_wh3l_13TeV_met348->SetBinContent(28,0.005979878);
   new_histo_group_Higgs_wh3l_13TeV_met348->SetBinContent(29,0.0003050854);
   new_histo_group_Higgs_wh3l_13TeV_met348->SetBinContent(30,0.001676727);
   new_histo_group_Higgs_wh3l_13TeV_met348->SetBinContent(31,0.002416236);
   new_histo_group_Higgs_wh3l_13TeV_met348->SetBinContent(32,0.002680088);
   new_histo_group_Higgs_wh3l_13TeV_met348->SetBinContent(33,0.0002870945);
   new_histo_group_Higgs_wh3l_13TeV_met348->SetBinContent(34,0.001635037);
   new_histo_group_Higgs_wh3l_13TeV_met348->SetBinContent(35,0.00221761);
   new_histo_group_Higgs_wh3l_13TeV_met348->SetBinContent(36,0.002324693);
   new_histo_group_Higgs_wh3l_13TeV_met348->SetBinContent(37,0.0002200187);
   new_histo_group_Higgs_wh3l_13TeV_met348->SetBinContent(38,0.0001986669);
   new_histo_group_Higgs_wh3l_13TeV_met348->SetBinContent(39,0.002418081);
   new_histo_group_Higgs_wh3l_13TeV_met348->SetBinContent(41,0.005465086);
   new_histo_group_Higgs_wh3l_13TeV_met348->SetBinError(9,0.0110518);
   new_histo_group_Higgs_wh3l_13TeV_met348->SetBinError(10,0.008954865);
   new_histo_group_Higgs_wh3l_13TeV_met348->SetBinError(11,0.009719946);
   new_histo_group_Higgs_wh3l_13TeV_met348->SetBinError(12,0.007645774);
   new_histo_group_Higgs_wh3l_13TeV_met348->SetBinError(13,0.009006466);
   new_histo_group_Higgs_wh3l_13TeV_met348->SetBinError(14,0.009138649);
   new_histo_group_Higgs_wh3l_13TeV_met348->SetBinError(15,0.008050278);
   new_histo_group_Higgs_wh3l_13TeV_met348->SetBinError(16,0.007708275);
   new_histo_group_Higgs_wh3l_13TeV_met348->SetBinError(17,0.007571394);
   new_histo_group_Higgs_wh3l_13TeV_met348->SetBinError(18,0.007047335);
   new_histo_group_Higgs_wh3l_13TeV_met348->SetBinError(19,0.007445635);
   new_histo_group_Higgs_wh3l_13TeV_met348->SetBinError(20,0.004803986);
   new_histo_group_Higgs_wh3l_13TeV_met348->SetBinError(21,0.005555955);
   new_histo_group_Higgs_wh3l_13TeV_met348->SetBinError(22,0.005364827);
   new_histo_group_Higgs_wh3l_13TeV_met348->SetBinError(23,0.005079565);
   new_histo_group_Higgs_wh3l_13TeV_met348->SetBinError(24,0.003359873);
   new_histo_group_Higgs_wh3l_13TeV_met348->SetBinError(25,0.002351029);
   new_histo_group_Higgs_wh3l_13TeV_met348->SetBinError(26,0.003230786);
   new_histo_group_Higgs_wh3l_13TeV_met348->SetBinError(27,0.00295857);
   new_histo_group_Higgs_wh3l_13TeV_met348->SetBinError(28,0.002766112);
   new_histo_group_Higgs_wh3l_13TeV_met348->SetBinError(29,0.0003050854);
   new_histo_group_Higgs_wh3l_13TeV_met348->SetBinError(30,0.001230824);
   new_histo_group_Higgs_wh3l_13TeV_met348->SetBinError(31,0.001661297);
   new_histo_group_Higgs_wh3l_13TeV_met348->SetBinError(32,0.001792574);
   new_histo_group_Higgs_wh3l_13TeV_met348->SetBinError(33,0.0002870945);
   new_histo_group_Higgs_wh3l_13TeV_met348->SetBinError(34,0.001175821);
   new_histo_group_Higgs_wh3l_13TeV_met348->SetBinError(35,0.0009676967);
   new_histo_group_Higgs_wh3l_13TeV_met348->SetBinError(36,0.001642078);
   new_histo_group_Higgs_wh3l_13TeV_met348->SetBinError(37,0.0002200187);
   new_histo_group_Higgs_wh3l_13TeV_met348->SetBinError(38,0.0001986669);
   new_histo_group_Higgs_wh3l_13TeV_met348->SetBinError(39,0.001712831);
   new_histo_group_Higgs_wh3l_13TeV_met348->SetBinError(41,0.002635342);
   new_histo_group_Higgs_wh3l_13TeV_met348->SetEntries(1360);
   new_histo_group_Higgs_wh3l_13TeV_met348->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_13TeV_met348->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_13TeV_met348->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_13TeV_met348->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_13TeV_met348->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_met348->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_met348->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_13TeV_met348->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_13TeV_met348->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_met348->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_met348->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_13TeV_met348->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_13TeV_met348->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_met348->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_met348->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_met->Add(new_histo_group_Higgs_wh3l_13TeV_met,"");
   thsBackground_grouped_wh3l_13TeV_met->Draw("hist same");
   
   thsSignal_grouped_wh3l_13TeV_met = new THStack();
   thsSignal_grouped_wh3l_13TeV_met->SetName("thsSignal_grouped_wh3l_13TeV_met");
   thsSignal_grouped_wh3l_13TeV_met->SetTitle("thsSignal_grouped_wh3l_13TeV_met");
   
   TH1F *thsSignal_grouped_wh3l_13TeV_met_stack_70 = new TH1F("thsSignal_grouped_wh3l_13TeV_met_stack_70","thsSignal_grouped_wh3l_13TeV_met",40,0,200);
   thsSignal_grouped_wh3l_13TeV_met_stack_70->SetMinimum(0);
   thsSignal_grouped_wh3l_13TeV_met_stack_70->SetMaximum(0.127728);
   thsSignal_grouped_wh3l_13TeV_met_stack_70->SetDirectory(0);
   thsSignal_grouped_wh3l_13TeV_met_stack_70->SetStats(0);
   thsSignal_grouped_wh3l_13TeV_met_stack_70->SetLineStyle(0);
   thsSignal_grouped_wh3l_13TeV_met_stack_70->SetMarkerStyle(20);
   thsSignal_grouped_wh3l_13TeV_met_stack_70->GetXaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_13TeV_met_stack_70->GetXaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_13TeV_met_stack_70->GetXaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_13TeV_met_stack_70->GetXaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_13TeV_met_stack_70->GetXaxis()->SetTitleOffset(0.9);
   thsSignal_grouped_wh3l_13TeV_met_stack_70->GetXaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_13TeV_met_stack_70->GetYaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_13TeV_met_stack_70->GetYaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_13TeV_met_stack_70->GetYaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_13TeV_met_stack_70->GetYaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_13TeV_met_stack_70->GetYaxis()->SetTitleOffset(1.25);
   thsSignal_grouped_wh3l_13TeV_met_stack_70->GetYaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_13TeV_met_stack_70->GetZaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_13TeV_met_stack_70->GetZaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_13TeV_met_stack_70->GetZaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_13TeV_met_stack_70->GetZaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_13TeV_met_stack_70->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_13TeV_met->SetHistogram(thsSignal_grouped_wh3l_13TeV_met_stack_70);
   
   
   TH1D *new_histo_group_Higgs_wh3l_13TeV_met349 = new TH1D("new_histo_group_Higgs_wh3l_13TeV_met349","histo_H_htt",40,0,200);
   new_histo_group_Higgs_wh3l_13TeV_met349->SetBinContent(9,0.1105939);
   new_histo_group_Higgs_wh3l_13TeV_met349->SetBinContent(10,0.07640479);
   new_histo_group_Higgs_wh3l_13TeV_met349->SetBinContent(11,0.09145428);
   new_histo_group_Higgs_wh3l_13TeV_met349->SetBinContent(12,0.05335606);
   new_histo_group_Higgs_wh3l_13TeV_met349->SetBinContent(13,0.06085159);
   new_histo_group_Higgs_wh3l_13TeV_met349->SetBinContent(14,0.06878171);
   new_histo_group_Higgs_wh3l_13TeV_met349->SetBinContent(15,0.05592964);
   new_histo_group_Higgs_wh3l_13TeV_met349->SetBinContent(16,0.05188913);
   new_histo_group_Higgs_wh3l_13TeV_met349->SetBinContent(17,0.04462155);
   new_histo_group_Higgs_wh3l_13TeV_met349->SetBinContent(18,0.0411532);
   new_histo_group_Higgs_wh3l_13TeV_met349->SetBinContent(19,0.03831102);
   new_histo_group_Higgs_wh3l_13TeV_met349->SetBinContent(20,0.02296404);
   new_histo_group_Higgs_wh3l_13TeV_met349->SetBinContent(21,0.02459011);
   new_histo_group_Higgs_wh3l_13TeV_met349->SetBinContent(22,0.02267602);
   new_histo_group_Higgs_wh3l_13TeV_met349->SetBinContent(23,0.01821363);
   new_histo_group_Higgs_wh3l_13TeV_met349->SetBinContent(24,0.0100092);
   new_histo_group_Higgs_wh3l_13TeV_met349->SetBinContent(25,0.005155546);
   new_histo_group_Higgs_wh3l_13TeV_met349->SetBinContent(26,0.005650542);
   new_histo_group_Higgs_wh3l_13TeV_met349->SetBinContent(27,0.005294731);
   new_histo_group_Higgs_wh3l_13TeV_met349->SetBinContent(28,0.005979878);
   new_histo_group_Higgs_wh3l_13TeV_met349->SetBinContent(29,0.0003050854);
   new_histo_group_Higgs_wh3l_13TeV_met349->SetBinContent(30,0.001676727);
   new_histo_group_Higgs_wh3l_13TeV_met349->SetBinContent(31,0.002416236);
   new_histo_group_Higgs_wh3l_13TeV_met349->SetBinContent(32,0.002680088);
   new_histo_group_Higgs_wh3l_13TeV_met349->SetBinContent(33,0.0002870945);
   new_histo_group_Higgs_wh3l_13TeV_met349->SetBinContent(34,0.001635037);
   new_histo_group_Higgs_wh3l_13TeV_met349->SetBinContent(35,0.00221761);
   new_histo_group_Higgs_wh3l_13TeV_met349->SetBinContent(36,0.002324693);
   new_histo_group_Higgs_wh3l_13TeV_met349->SetBinContent(37,0.0002200187);
   new_histo_group_Higgs_wh3l_13TeV_met349->SetBinContent(38,0.0001986669);
   new_histo_group_Higgs_wh3l_13TeV_met349->SetBinContent(39,0.002418081);
   new_histo_group_Higgs_wh3l_13TeV_met349->SetBinContent(41,0.005465086);
   new_histo_group_Higgs_wh3l_13TeV_met349->SetBinError(9,0.0110518);
   new_histo_group_Higgs_wh3l_13TeV_met349->SetBinError(10,0.008954865);
   new_histo_group_Higgs_wh3l_13TeV_met349->SetBinError(11,0.009719946);
   new_histo_group_Higgs_wh3l_13TeV_met349->SetBinError(12,0.007645774);
   new_histo_group_Higgs_wh3l_13TeV_met349->SetBinError(13,0.009006466);
   new_histo_group_Higgs_wh3l_13TeV_met349->SetBinError(14,0.009138649);
   new_histo_group_Higgs_wh3l_13TeV_met349->SetBinError(15,0.008050278);
   new_histo_group_Higgs_wh3l_13TeV_met349->SetBinError(16,0.007708275);
   new_histo_group_Higgs_wh3l_13TeV_met349->SetBinError(17,0.007571394);
   new_histo_group_Higgs_wh3l_13TeV_met349->SetBinError(18,0.007047335);
   new_histo_group_Higgs_wh3l_13TeV_met349->SetBinError(19,0.007445635);
   new_histo_group_Higgs_wh3l_13TeV_met349->SetBinError(20,0.004803986);
   new_histo_group_Higgs_wh3l_13TeV_met349->SetBinError(21,0.005555955);
   new_histo_group_Higgs_wh3l_13TeV_met349->SetBinError(22,0.005364827);
   new_histo_group_Higgs_wh3l_13TeV_met349->SetBinError(23,0.005079565);
   new_histo_group_Higgs_wh3l_13TeV_met349->SetBinError(24,0.003359873);
   new_histo_group_Higgs_wh3l_13TeV_met349->SetBinError(25,0.002351029);
   new_histo_group_Higgs_wh3l_13TeV_met349->SetBinError(26,0.003230786);
   new_histo_group_Higgs_wh3l_13TeV_met349->SetBinError(27,0.00295857);
   new_histo_group_Higgs_wh3l_13TeV_met349->SetBinError(28,0.002766112);
   new_histo_group_Higgs_wh3l_13TeV_met349->SetBinError(29,0.0003050854);
   new_histo_group_Higgs_wh3l_13TeV_met349->SetBinError(30,0.001230824);
   new_histo_group_Higgs_wh3l_13TeV_met349->SetBinError(31,0.001661297);
   new_histo_group_Higgs_wh3l_13TeV_met349->SetBinError(32,0.001792574);
   new_histo_group_Higgs_wh3l_13TeV_met349->SetBinError(33,0.0002870945);
   new_histo_group_Higgs_wh3l_13TeV_met349->SetBinError(34,0.001175821);
   new_histo_group_Higgs_wh3l_13TeV_met349->SetBinError(35,0.0009676967);
   new_histo_group_Higgs_wh3l_13TeV_met349->SetBinError(36,0.001642078);
   new_histo_group_Higgs_wh3l_13TeV_met349->SetBinError(37,0.0002200187);
   new_histo_group_Higgs_wh3l_13TeV_met349->SetBinError(38,0.0001986669);
   new_histo_group_Higgs_wh3l_13TeV_met349->SetBinError(39,0.001712831);
   new_histo_group_Higgs_wh3l_13TeV_met349->SetBinError(41,0.002635342);
   new_histo_group_Higgs_wh3l_13TeV_met349->SetEntries(1360);
   new_histo_group_Higgs_wh3l_13TeV_met349->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_13TeV_met349->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_13TeV_met349->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_13TeV_met349->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_13TeV_met349->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_met349->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_met349->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_13TeV_met349->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_13TeV_met349->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_met349->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_met349->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_13TeV_met349->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_13TeV_met349->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_met349->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_met349->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_13TeV_met->Add(new_histo_group_Higgs_wh3l_13TeV_met,"");
   thsSignal_grouped_wh3l_13TeV_met->Draw("hist same noclear");
   
   Double_t _fx3069[40] = {
   2.5,
   7.5,
   12.5,
   17.5,
   22.5,
   27.5,
   32.5,
   37.5,
   42.5,
   47.5,
   52.5,
   57.5,
   62.5,
   67.5,
   72.5,
   77.5,
   82.5,
   87.5,
   92.5,
   97.5,
   102.5,
   107.5,
   112.5,
   117.5,
   122.5,
   127.5,
   132.5,
   137.5,
   142.5,
   147.5,
   152.5,
   157.5,
   162.5,
   167.5,
   172.5,
   177.5,
   182.5,
   187.5,
   192.5,
   197.5};
   Double_t _fy3069[40] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   3.325149,
   3.373811,
   4.182094,
   2.565942,
   1.00782,
   0.947423,
   0.9717482,
   0.2028983,
   1.468966,
   0.1176832,
   0.06142536,
   0.5315096,
   0.05353842,
   1.12071,
   0.2054557,
   0.07752274,
   -0.137283,
   0.1129628,
   0.02005173,
   0.003206294,
   0.03026687,
   0.01662978,
   0.01053258,
   0.02028379,
   0.05357242,
   0.01204565,
   0.01148078,
   0.01123944,
   0.01445454,
   0.002637757,
   0.01342807,
   0.008730846};
   Double_t _felx3069[40] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5};
   Double_t _fely3069[40] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   1.659732,
   1.403719,
   1.747728,
   1.294584,
   0.4537657,
   0.4579407,
   0.6443537,
   0.1870433,
   0.87617,
   0.0848212,
   0.2572019,
   0.4596325,
   0.08214149,
   0.9512754,
   0.1607194,
   0.04444806,
   0.1510577,
   0.1044989,
   0.01078255,
   0.01364247,
   0.0129109,
   0.009458466,
   0.007368754,
   0.01026351,
   0.04582616,
   0.007045674,
   0.008314284,
   0.007961769,
   0.01951811,
   0.002611914,
   0.008041352,
   0.006818806};
   Double_t _fehx3069[40] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5};
   Double_t _fehy3069[40] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   1.712074,
   1.40364,
   1.747655,
   1.294355,
   0.5669107,
   0.7179896,
   0.6516033,
   0.1870474,
   0.8761679,
   0.0848224,
   0.06889421,
   0.5744373,
   0.08213409,
   0.9512748,
   0.1612897,
   0.04441882,
   0.1510573,
   0.1044931,
   0.01078719,
   0.01364244,
   0.01291938,
   0.00945885,
   0.007371601,
   0.01026621,
   0.04582335,
   0.00703932,
   0.008314919,
   0.007962424,
   0.01951426,
   0.002611954,
   0.008040859,
   0.006814825};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(40,_fx3069,_fy3069,_felx3069,_fehx3069,_fely3069,_fehy3069);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(12);
   grae->SetFillStyle(3004);
   grae->SetLineColor(12);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3069 = new TH1F("Graph_Graph3069","",100,0,220);
   Graph_Graph3069->SetMinimum(-0.9101496);
   Graph_Graph3069->SetMaximum(6.551557);
   Graph_Graph3069->SetDirectory(0);
   Graph_Graph3069->SetStats(0);
   Graph_Graph3069->SetLineStyle(0);
   Graph_Graph3069->SetMarkerStyle(20);
   Graph_Graph3069->GetXaxis()->SetLabelFont(42);
   Graph_Graph3069->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3069->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3069->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3069->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3069->GetXaxis()->SetTitleFont(42);
   Graph_Graph3069->GetYaxis()->SetLabelFont(42);
   Graph_Graph3069->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3069->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3069->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3069->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3069->GetYaxis()->SetTitleFont(42);
   Graph_Graph3069->GetZaxis()->SetLabelFont(42);
   Graph_Graph3069->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3069->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3069->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3069->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3069);
   
   grae->Draw("2");
   
   Double_t _fx3070[40] = {
   2.5,
   7.5,
   12.5,
   17.5,
   22.5,
   27.5,
   32.5,
   37.5,
   42.5,
   47.5,
   52.5,
   57.5,
   62.5,
   67.5,
   72.5,
   77.5,
   82.5,
   87.5,
   92.5,
   97.5,
   102.5,
   107.5,
   112.5,
   117.5,
   122.5,
   127.5,
   132.5,
   137.5,
   142.5,
   147.5,
   152.5,
   157.5,
   162.5,
   167.5,
   172.5,
   177.5,
   182.5,
   187.5,
   192.5,
   197.5};
   Double_t _fy3070[40] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _felx3070[40] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5};
   Double_t _fely3070[40] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fehx3070[40] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5};
   Double_t _fehy3070[40] = {
   1.147908,
   1.147908,
   1.147908,
   1.147908,
   1.147908,
   1.147908,
   1.147908,
   1.147908,
   1.147908,
   1.147908,
   1.147908,
   1.147908,
   1.147908,
   1.147908,
   1.147908,
   1.147908,
   1.147908,
   1.147908,
   1.147908,
   1.147908,
   1.147908,
   1.147908,
   1.147908,
   1.147908,
   1.147908,
   1.147908,
   1.147908,
   1.147908,
   1.147908,
   1.147908,
   1.147908,
   1.147908,
   1.147908,
   1.147908,
   1.147908,
   1.147908,
   1.147908,
   1.147908,
   1.147908,
   1.147908};
   grae = new TGraphAsymmErrors(40,_fx3070,_fy3070,_felx3070,_fehx3070,_fely3070,_fehy3070);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(1);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3070 = new TH1F("Graph_Graph3070","",100,0,220);
   Graph_Graph3070->SetMinimum(0);
   Graph_Graph3070->SetMaximum(1.262698);
   Graph_Graph3070->SetDirectory(0);
   Graph_Graph3070->SetStats(0);
   Graph_Graph3070->SetLineStyle(0);
   Graph_Graph3070->SetMarkerStyle(20);
   Graph_Graph3070->GetXaxis()->SetLabelFont(42);
   Graph_Graph3070->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3070->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3070->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3070->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3070->GetXaxis()->SetTitleFont(42);
   Graph_Graph3070->GetYaxis()->SetLabelFont(42);
   Graph_Graph3070->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3070->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3070->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3070->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3070->GetYaxis()->SetTitleFont(42);
   Graph_Graph3070->GetZaxis()->SetLabelFont(42);
   Graph_Graph3070->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3070->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3070->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3070->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3070);
   
   grae->Draw("p0");
   
   TLegend *leg = new TLegend(0.2,0.7,0.8,0.9,NULL,"brNDC");
   leg->SetTextFont(62);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("new_histo_group_Fake_wh3l_13TeV_met","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_13TeV_met","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_13TeV_met","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_13TeV_met","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_13TeV_met","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_13TeV_met","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_13TeV_met","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_13TeV_met","Data","EPL");
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
   entry=leg->AddEntry("new_histo_group_Fake_wh3l_13TeV_met","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_13TeV_met","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_13TeV_met","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_13TeV_met","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_13TeV_met","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_13TeV_met","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_13TeV_met","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_13TeV_met","Data","EPL");
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
   
   TH1F *hframe_copy350 = new TH1F("hframe_copy350","",1000,0,200);
   hframe_copy350->SetMinimum(0);
   hframe_copy350->SetMaximum(10.68387);
   hframe_copy350->SetDirectory(0);
   hframe_copy350->SetStats(0);
   hframe_copy350->SetLineStyle(0);
   hframe_copy350->SetMarkerStyle(20);
   hframe_copy350->GetXaxis()->SetTitle("pfmet [GeV]");
   hframe_copy350->GetXaxis()->SetNdivisions(506);
   hframe_copy350->GetXaxis()->SetLabelFont(42);
   hframe_copy350->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy350->GetXaxis()->SetLabelSize(0.05);
   hframe_copy350->GetXaxis()->SetTitleSize(0.06);
   hframe_copy350->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy350->GetXaxis()->SetTitleFont(42);
   hframe_copy350->GetYaxis()->SetTitle("Events");
   hframe_copy350->GetYaxis()->SetLabelFont(42);
   hframe_copy350->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy350->GetYaxis()->SetLabelSize(0.05);
   hframe_copy350->GetYaxis()->SetTitleSize(0.06);
   hframe_copy350->GetYaxis()->SetTitleOffset(1.25);
   hframe_copy350->GetYaxis()->SetTitleFont(42);
   hframe_copy350->GetZaxis()->SetLabelFont(42);
   hframe_copy350->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy350->GetZaxis()->SetLabelSize(0.05);
   hframe_copy350->GetZaxis()->SetTitleSize(0.06);
   hframe_copy350->GetZaxis()->SetTitleFont(42);
   hframe_copy350->Draw("sameaxis");
   ccwh3l_13TeV_met->Modified();
   ccwh3l_13TeV_met->cd();
   ccwh3l_13TeV_met->SetSelected(ccwh3l_13TeV_met);
}
