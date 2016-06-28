void c_wh3l_13TeV_met()
{
//=========Macro generated from canvas: ccwh3l_13TeV_met/cc
//=========  (Tue Jun 28 13:56:24 2016) by ROOT version6.02/13
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
   
   TH1F *hframe221 = new TH1F("hframe221","",1000,0,200);
   hframe221->SetMinimum(0);
   hframe221->SetMaximum(10.68387);
   hframe221->SetDirectory(0);
   hframe221->SetStats(0);
   hframe221->SetLineStyle(0);
   hframe221->SetMarkerStyle(20);
   hframe221->GetXaxis()->SetTitle("pfmet [GeV]");
   hframe221->GetXaxis()->SetNdivisions(506);
   hframe221->GetXaxis()->SetLabelFont(42);
   hframe221->GetXaxis()->SetLabelOffset(0.007);
   hframe221->GetXaxis()->SetLabelSize(0.05);
   hframe221->GetXaxis()->SetTitleSize(0.06);
   hframe221->GetXaxis()->SetTitleOffset(0.9);
   hframe221->GetXaxis()->SetTitleFont(42);
   hframe221->GetYaxis()->SetTitle("Events");
   hframe221->GetYaxis()->SetLabelFont(42);
   hframe221->GetYaxis()->SetLabelOffset(0.007);
   hframe221->GetYaxis()->SetLabelSize(0.05);
   hframe221->GetYaxis()->SetTitleSize(0.06);
   hframe221->GetYaxis()->SetTitleOffset(1.25);
   hframe221->GetYaxis()->SetTitleFont(42);
   hframe221->GetZaxis()->SetLabelFont(42);
   hframe221->GetZaxis()->SetLabelOffset(0.007);
   hframe221->GetZaxis()->SetLabelSize(0.05);
   hframe221->GetZaxis()->SetTitleSize(0.06);
   hframe221->GetZaxis()->SetTitleFont(42);
   hframe221->Draw(" ");
   
   THStack *thsBackground_grouped_wh3l_13TeV_met = new THStack();
   thsBackground_grouped_wh3l_13TeV_met->SetName("thsBackground_grouped_wh3l_13TeV_met");
   thsBackground_grouped_wh3l_13TeV_met->SetTitle("thsBackground_grouped_wh3l_13TeV_met");
   
   TH1F *thsBackground_grouped_wh3l_13TeV_met_stack_45 = new TH1F("thsBackground_grouped_wh3l_13TeV_met_stack_45","thsBackground_grouped_wh3l_13TeV_met",40,0,200);
   thsBackground_grouped_wh3l_13TeV_met_stack_45->SetMinimum(-0.2978284);
   thsBackground_grouped_wh3l_13TeV_met_stack_45->SetMaximum(4.487225);
   thsBackground_grouped_wh3l_13TeV_met_stack_45->SetDirectory(0);
   thsBackground_grouped_wh3l_13TeV_met_stack_45->SetStats(0);
   thsBackground_grouped_wh3l_13TeV_met_stack_45->SetLineStyle(0);
   thsBackground_grouped_wh3l_13TeV_met_stack_45->SetMarkerStyle(20);
   thsBackground_grouped_wh3l_13TeV_met_stack_45->GetXaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_13TeV_met_stack_45->GetXaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_13TeV_met_stack_45->GetXaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_13TeV_met_stack_45->GetXaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_13TeV_met_stack_45->GetXaxis()->SetTitleOffset(0.9);
   thsBackground_grouped_wh3l_13TeV_met_stack_45->GetXaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_met_stack_45->GetYaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_13TeV_met_stack_45->GetYaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_13TeV_met_stack_45->GetYaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_13TeV_met_stack_45->GetYaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_13TeV_met_stack_45->GetYaxis()->SetTitleOffset(1.25);
   thsBackground_grouped_wh3l_13TeV_met_stack_45->GetYaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_met_stack_45->GetZaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_13TeV_met_stack_45->GetZaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_13TeV_met_stack_45->GetZaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_13TeV_met_stack_45->GetZaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_13TeV_met_stack_45->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_met->SetHistogram(thsBackground_grouped_wh3l_13TeV_met_stack_45);
   
   
   TH1D *new_histo_group_Fake_wh3l_13TeV_met222 = new TH1D("new_histo_group_Fake_wh3l_13TeV_met222","histo_Fake",40,0,200);
   new_histo_group_Fake_wh3l_13TeV_met222->SetBinContent(9,1.03744);
   new_histo_group_Fake_wh3l_13TeV_met222->SetBinContent(10,1.153169);
   new_histo_group_Fake_wh3l_13TeV_met222->SetBinContent(11,2.724946);
   new_histo_group_Fake_wh3l_13TeV_met222->SetBinContent(12,1.178965);
   new_histo_group_Fake_wh3l_13TeV_met222->SetBinContent(13,0.3145562);
   new_histo_group_Fake_wh3l_13TeV_met222->SetBinContent(14,0.3810413);
   new_histo_group_Fake_wh3l_13TeV_met222->SetBinContent(15,0.5416734);
   new_histo_group_Fake_wh3l_13TeV_met222->SetBinContent(16,-0.13877);
   new_histo_group_Fake_wh3l_13TeV_met222->SetBinContent(17,1.215007);
   new_histo_group_Fake_wh3l_13TeV_met222->SetBinContent(18,-0.05269274);
   new_histo_group_Fake_wh3l_13TeV_met222->SetBinContent(19,-0.0444209);
   new_histo_group_Fake_wh3l_13TeV_met222->SetBinContent(20,0.4113768);
   new_histo_group_Fake_wh3l_13TeV_met222->SetBinContent(21,-0.05601251);
   new_histo_group_Fake_wh3l_13TeV_met222->SetBinContent(22,1.027331);
   new_histo_group_Fake_wh3l_13TeV_met222->SetBinContent(23,0.1339182);
   new_histo_group_Fake_wh3l_13TeV_met222->SetBinContent(25,-0.1741594);
   new_histo_group_Fake_wh3l_13TeV_met222->SetBinContent(26,0.08972475);
   new_histo_group_Fake_wh3l_13TeV_met222->SetBinContent(28,-0.006674166);
   new_histo_group_Fake_wh3l_13TeV_met222->SetBinContent(37,-0.008195123);
   new_histo_group_Fake_wh3l_13TeV_met222->SetBinError(9,1.091324);
   new_histo_group_Fake_wh3l_13TeV_met222->SetBinError(10,0.8604807);
   new_histo_group_Fake_wh3l_13TeV_met222->SetBinError(11,1.131477);
   new_histo_group_Fake_wh3l_13TeV_met222->SetBinError(12,0.9025345);
   new_histo_group_Fake_wh3l_13TeV_met222->SetBinError(13,0.4306849);
   new_histo_group_Fake_wh3l_13TeV_met222->SetBinError(14,0.6486743);
   new_histo_group_Fake_wh3l_13TeV_met222->SetBinError(15,0.549266);
   new_histo_group_Fake_wh3l_13TeV_met222->SetBinError(16,0.1274148);
   new_histo_group_Fake_wh3l_13TeV_met222->SetBinError(17,0.7296101);
   new_histo_group_Fake_wh3l_13TeV_met222->SetBinError(18,0.05210733);
   new_histo_group_Fake_wh3l_13TeV_met222->SetBinError(19,0.2341298);
   new_histo_group_Fake_wh3l_13TeV_met222->SetBinError(20,0.5309904);
   new_histo_group_Fake_wh3l_13TeV_met222->SetBinError(21,0.05545482);
   new_histo_group_Fake_wh3l_13TeV_met222->SetBinError(22,0.8574354);
   new_histo_group_Fake_wh3l_13TeV_met222->SetBinError(23,0.1345152);
   new_histo_group_Fake_wh3l_13TeV_met222->SetBinError(25,0.1236689);
   new_histo_group_Fake_wh3l_13TeV_met222->SetBinError(26,0.08835359);
   new_histo_group_Fake_wh3l_13TeV_met222->SetBinError(28,0.006674166);
   new_histo_group_Fake_wh3l_13TeV_met222->SetBinError(37,0.008195123);
   new_histo_group_Fake_wh3l_13TeV_met222->SetEntries(109);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_13TeV_met222->SetFillColor(ci);
   new_histo_group_Fake_wh3l_13TeV_met222->SetFillStyle(3001);

   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_13TeV_met222->SetLineColor(ci);
   new_histo_group_Fake_wh3l_13TeV_met222->GetXaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_13TeV_met222->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_13TeV_met222->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_13TeV_met222->GetXaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_13TeV_met222->GetYaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_13TeV_met222->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_13TeV_met222->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_13TeV_met222->GetYaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_13TeV_met222->GetZaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_13TeV_met222->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_13TeV_met222->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_13TeV_met222->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_met->Add(new_histo_group_Fake_wh3l_13TeV_met,"");
   
   TH1D *new_histo_group_WW_wh3l_13TeV_met223 = new TH1D("new_histo_group_WW_wh3l_13TeV_met223","histo_WW",40,0,200);
   new_histo_group_WW_wh3l_13TeV_met223->SetBinContent(9,0.0303325);
   new_histo_group_WW_wh3l_13TeV_met223->SetBinContent(10,0.03345312);
   new_histo_group_WW_wh3l_13TeV_met223->SetBinContent(13,0.01447441);
   new_histo_group_WW_wh3l_13TeV_met223->SetBinContent(16,0.01044191);
   new_histo_group_WW_wh3l_13TeV_met223->SetBinError(9,0.02149105);
   new_histo_group_WW_wh3l_13TeV_met223->SetBinError(10,0.02374035);
   new_histo_group_WW_wh3l_13TeV_met223->SetBinError(13,0.01447441);
   new_histo_group_WW_wh3l_13TeV_met223->SetBinError(16,0.01044191);
   new_histo_group_WW_wh3l_13TeV_met223->SetEntries(6);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_13TeV_met223->SetFillColor(ci);
   new_histo_group_WW_wh3l_13TeV_met223->SetFillStyle(3001);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_13TeV_met223->SetLineColor(ci);
   new_histo_group_WW_wh3l_13TeV_met223->GetXaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_13TeV_met223->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_13TeV_met223->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_13TeV_met223->GetXaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_13TeV_met223->GetYaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_13TeV_met223->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_13TeV_met223->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_13TeV_met223->GetYaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_13TeV_met223->GetZaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_13TeV_met223->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_13TeV_met223->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_13TeV_met223->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_met->Add(new_histo_group_WW_wh3l_13TeV_met,"");
   
   TH1D *new_histo_group_VVV_wh3l_13TeV_met224 = new TH1D("new_histo_group_VVV_wh3l_13TeV_met224","histo_VVV",40,0,200);
   new_histo_group_VVV_wh3l_13TeV_met224->SetBinContent(9,0.0006249245);
   new_histo_group_VVV_wh3l_13TeV_met224->SetBinContent(10,0.001240314);
   new_histo_group_VVV_wh3l_13TeV_met224->SetBinContent(11,0.0008959455);
   new_histo_group_VVV_wh3l_13TeV_met224->SetBinContent(13,0.001631847);
   new_histo_group_VVV_wh3l_13TeV_met224->SetBinContent(14,0.0006729142);
   new_histo_group_VVV_wh3l_13TeV_met224->SetBinContent(22,0.0006343185);
   new_histo_group_VVV_wh3l_13TeV_met224->SetBinContent(23,0.0006504452);
   new_histo_group_VVV_wh3l_13TeV_met224->SetBinContent(27,0.0007784473);
   new_histo_group_VVV_wh3l_13TeV_met224->SetBinContent(35,0.0006405607);
   new_histo_group_VVV_wh3l_13TeV_met224->SetBinContent(41,0.0005490761);
   new_histo_group_VVV_wh3l_13TeV_met224->SetBinError(9,0.0006249245);
   new_histo_group_VVV_wh3l_13TeV_met224->SetBinError(10,0.0008770975);
   new_histo_group_VVV_wh3l_13TeV_met224->SetBinError(11,0.0007189671);
   new_histo_group_VVV_wh3l_13TeV_met224->SetBinError(13,0.0009923548);
   new_histo_group_VVV_wh3l_13TeV_met224->SetBinError(14,0.0006729142);
   new_histo_group_VVV_wh3l_13TeV_met224->SetBinError(22,0.0006343185);
   new_histo_group_VVV_wh3l_13TeV_met224->SetBinError(23,0.0006504452);
   new_histo_group_VVV_wh3l_13TeV_met224->SetBinError(27,0.0007784473);
   new_histo_group_VVV_wh3l_13TeV_met224->SetBinError(35,0.0006405607);
   new_histo_group_VVV_wh3l_13TeV_met224->SetBinError(41,0.0005490761);
   new_histo_group_VVV_wh3l_13TeV_met224->SetEntries(14);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_13TeV_met224->SetFillColor(ci);
   new_histo_group_VVV_wh3l_13TeV_met224->SetFillStyle(3001);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_13TeV_met224->SetLineColor(ci);
   new_histo_group_VVV_wh3l_13TeV_met224->GetXaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_13TeV_met224->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_13TeV_met224->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_13TeV_met224->GetXaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_13TeV_met224->GetYaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_13TeV_met224->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_13TeV_met224->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_13TeV_met224->GetYaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_13TeV_met224->GetZaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_13TeV_met224->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_13TeV_met224->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_13TeV_met224->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_met->Add(new_histo_group_VVV_wh3l_13TeV_met,"");
   
   TH1D *new_histo_group_Vg_wh3l_13TeV_met225 = new TH1D("new_histo_group_Vg_wh3l_13TeV_met225","histo_Vg",40,0,200);
   new_histo_group_Vg_wh3l_13TeV_met225->SetBinContent(9,0.9327583);
   new_histo_group_Vg_wh3l_13TeV_met225->SetBinContent(10,0.8533485);
   new_histo_group_Vg_wh3l_13TeV_met225->SetBinContent(11,0.4091599);
   new_histo_group_Vg_wh3l_13TeV_met225->SetBinContent(12,0.4529023);
   new_histo_group_Vg_wh3l_13TeV_met225->SetBinError(9,0.3944573);
   new_histo_group_Vg_wh3l_13TeV_met225->SetBinError(10,0.2991175);
   new_histo_group_Vg_wh3l_13TeV_met225->SetBinError(11,0.1891369);
   new_histo_group_Vg_wh3l_13TeV_met225->SetBinError(12,0.2100381);
   new_histo_group_Vg_wh3l_13TeV_met225->SetEntries(42);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_13TeV_met225->SetFillColor(ci);
   new_histo_group_Vg_wh3l_13TeV_met225->SetFillStyle(3001);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_13TeV_met225->SetLineColor(ci);
   new_histo_group_Vg_wh3l_13TeV_met225->GetXaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_13TeV_met225->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_13TeV_met225->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_13TeV_met225->GetXaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_13TeV_met225->GetYaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_13TeV_met225->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_13TeV_met225->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_13TeV_met225->GetYaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_13TeV_met225->GetZaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_13TeV_met225->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_13TeV_met225->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_13TeV_met225->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_met->Add(new_histo_group_Vg_wh3l_13TeV_met,"");
   
   TH1D *new_histo_group_ZZ_wh3l_13TeV_met226 = new TH1D("new_histo_group_ZZ_wh3l_13TeV_met226","histo_ZZ",40,0,200);
   new_histo_group_ZZ_wh3l_13TeV_met226->SetBinContent(9,0.1619121);
   new_histo_group_ZZ_wh3l_13TeV_met226->SetBinContent(10,0.1514073);
   new_histo_group_ZZ_wh3l_13TeV_met226->SetBinContent(11,0.1278668);
   new_histo_group_ZZ_wh3l_13TeV_met226->SetBinContent(12,0.04271351);
   new_histo_group_ZZ_wh3l_13TeV_met226->SetBinContent(13,0.07189054);
   new_histo_group_ZZ_wh3l_13TeV_met226->SetBinContent(15,0.02711696);
   new_histo_group_ZZ_wh3l_13TeV_met226->SetBinContent(24,0.02856258);
   new_histo_group_ZZ_wh3l_13TeV_met226->SetBinContent(33,0.03513683);
   new_histo_group_ZZ_wh3l_13TeV_met226->SetBinError(9,0.08296664);
   new_histo_group_ZZ_wh3l_13TeV_met226->SetBinError(10,0.07657922);
   new_histo_group_ZZ_wh3l_13TeV_met226->SetBinError(11,0.07072701);
   new_histo_group_ZZ_wh3l_13TeV_met226->SetBinError(12,0.0427135);
   new_histo_group_ZZ_wh3l_13TeV_met226->SetBinError(13,0.05189561);
   new_histo_group_ZZ_wh3l_13TeV_met226->SetBinError(15,0.02711696);
   new_histo_group_ZZ_wh3l_13TeV_met226->SetBinError(24,0.02856258);
   new_histo_group_ZZ_wh3l_13TeV_met226->SetBinError(33,0.03513683);
   new_histo_group_ZZ_wh3l_13TeV_met226->SetEntries(19);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_13TeV_met226->SetFillColor(ci);
   new_histo_group_ZZ_wh3l_13TeV_met226->SetFillStyle(3001);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_13TeV_met226->SetLineColor(ci);
   new_histo_group_ZZ_wh3l_13TeV_met226->GetXaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_13TeV_met226->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_13TeV_met226->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_13TeV_met226->GetXaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_13TeV_met226->GetYaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_13TeV_met226->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_13TeV_met226->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_13TeV_met226->GetYaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_13TeV_met226->GetZaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_13TeV_met226->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_13TeV_met226->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_13TeV_met226->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_met->Add(new_histo_group_ZZ_wh3l_13TeV_met,"");
   
   TH1D *new_histo_group_WZ_wh3l_13TeV_met227 = new TH1D("new_histo_group_WZ_wh3l_13TeV_met227","histo_WZ",40,0,200);
   new_histo_group_WZ_wh3l_13TeV_met227->SetBinContent(9,1.16208);
   new_histo_group_WZ_wh3l_13TeV_met227->SetBinContent(10,1.181193);
   new_histo_group_WZ_wh3l_13TeV_met227->SetBinContent(11,0.9192245);
   new_histo_group_WZ_wh3l_13TeV_met227->SetBinContent(12,0.891361);
   new_histo_group_WZ_wh3l_13TeV_met227->SetBinContent(13,0.605267);
   new_histo_group_WZ_wh3l_13TeV_met227->SetBinContent(14,0.5657088);
   new_histo_group_WZ_wh3l_13TeV_met227->SetBinContent(15,0.4029578);
   new_histo_group_WZ_wh3l_13TeV_met227->SetBinContent(16,0.3312264);
   new_histo_group_WZ_wh3l_13TeV_met227->SetBinContent(17,0.2539586);
   new_histo_group_WZ_wh3l_13TeV_met227->SetBinContent(18,0.1703759);
   new_histo_group_WZ_wh3l_13TeV_met227->SetBinContent(19,0.1058463);
   new_histo_group_WZ_wh3l_13TeV_met227->SetBinContent(20,0.1201328);
   new_histo_group_WZ_wh3l_13TeV_met227->SetBinContent(21,0.1095509);
   new_histo_group_WZ_wh3l_13TeV_met227->SetBinContent(22,0.09274451);
   new_histo_group_WZ_wh3l_13TeV_met227->SetBinContent(23,0.07088707);
   new_histo_group_WZ_wh3l_13TeV_met227->SetBinContent(24,0.04896016);
   new_histo_group_WZ_wh3l_13TeV_met227->SetBinContent(25,0.03687642);
   new_histo_group_WZ_wh3l_13TeV_met227->SetBinContent(26,0.02323807);
   new_histo_group_WZ_wh3l_13TeV_met227->SetBinContent(27,0.01927328);
   new_histo_group_WZ_wh3l_13TeV_met227->SetBinContent(28,0.00988046);
   new_histo_group_WZ_wh3l_13TeV_met227->SetBinContent(29,0.03026687);
   new_histo_group_WZ_wh3l_13TeV_met227->SetBinContent(30,0.01662978);
   new_histo_group_WZ_wh3l_13TeV_met227->SetBinContent(31,0.01053258);
   new_histo_group_WZ_wh3l_13TeV_met227->SetBinContent(32,0.02028379);
   new_histo_group_WZ_wh3l_13TeV_met227->SetBinContent(33,0.01843559);
   new_histo_group_WZ_wh3l_13TeV_met227->SetBinContent(34,0.01204565);
   new_histo_group_WZ_wh3l_13TeV_met227->SetBinContent(35,0.01084022);
   new_histo_group_WZ_wh3l_13TeV_met227->SetBinContent(36,0.01123944);
   new_histo_group_WZ_wh3l_13TeV_met227->SetBinContent(37,0.02264966);
   new_histo_group_WZ_wh3l_13TeV_met227->SetBinContent(38,0.002637757);
   new_histo_group_WZ_wh3l_13TeV_met227->SetBinContent(39,0.01342807);
   new_histo_group_WZ_wh3l_13TeV_met227->SetBinContent(40,0.008730846);
   new_histo_group_WZ_wh3l_13TeV_met227->SetBinContent(41,0.09075244);
   new_histo_group_WZ_wh3l_13TeV_met227->SetBinError(9,0.07927261);
   new_histo_group_WZ_wh3l_13TeV_met227->SetBinError(10,0.08039532);
   new_histo_group_WZ_wh3l_13TeV_met227->SetBinError(11,0.07098663);
   new_histo_group_WZ_wh3l_13TeV_met227->SetBinError(12,0.07018987);
   new_histo_group_WZ_wh3l_13TeV_met227->SetBinError(13,0.05742151);
   new_histo_group_WZ_wh3l_13TeV_met227->SetBinError(14,0.05576128);
   new_histo_group_WZ_wh3l_13TeV_met227->SetBinError(15,0.04682014);
   new_histo_group_WZ_wh3l_13TeV_met227->SetBinError(16,0.04238436);
   new_histo_group_WZ_wh3l_13TeV_met227->SetBinError(17,0.03639115);
   new_histo_group_WZ_wh3l_13TeV_met227->SetBinError(18,0.03044673);
   new_histo_group_WZ_wh3l_13TeV_met227->SetBinError(19,0.02257112);
   new_histo_group_WZ_wh3l_13TeV_met227->SetBinError(20,0.0250881);
   new_histo_group_WZ_wh3l_13TeV_met227->SetBinError(21,0.02417563);
   new_histo_group_WZ_wh3l_13TeV_met227->SetBinError(22,0.02262537);
   new_histo_group_WZ_wh3l_13TeV_met227->SetBinError(23,0.01915326);
   new_histo_group_WZ_wh3l_13TeV_met227->SetBinError(24,0.01578889);
   new_histo_group_WZ_wh3l_13TeV_met227->SetBinError(25,0.01453736);
   new_histo_group_WZ_wh3l_13TeV_met227->SetBinError(26,0.01130215);
   new_histo_group_WZ_wh3l_13TeV_met227->SetBinError(27,0.009952158);
   new_histo_group_WZ_wh3l_13TeV_met227->SetBinError(28,0.006766018);
   new_histo_group_WZ_wh3l_13TeV_met227->SetBinError(29,0.01287621);
   new_histo_group_WZ_wh3l_13TeV_met227->SetBinError(30,0.009454112);
   new_histo_group_WZ_wh3l_13TeV_met227->SetBinError(31,0.007354234);
   new_histo_group_WZ_wh3l_13TeV_met227->SetBinError(32,0.01018666);
   new_histo_group_WZ_wh3l_13TeV_met227->SetBinError(33,0.01065415);
   new_histo_group_WZ_wh3l_13TeV_met227->SetBinError(34,0.007001037);
   new_histo_group_WZ_wh3l_13TeV_met227->SetBinError(35,0.007665218);
   new_histo_group_WZ_wh3l_13TeV_met227->SetBinError(36,0.007952499);
   new_histo_group_WZ_wh3l_13TeV_met227->SetBinError(37,0.01109833);
   new_histo_group_WZ_wh3l_13TeV_met227->SetBinError(38,0.002610874);
   new_histo_group_WZ_wh3l_13TeV_met227->SetBinError(39,0.008016728);
   new_histo_group_WZ_wh3l_13TeV_met227->SetBinError(40,0.006779719);
   new_histo_group_WZ_wh3l_13TeV_met227->SetBinError(41,0.0220158);
   new_histo_group_WZ_wh3l_13TeV_met227->SetEntries(1516);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_13TeV_met227->SetFillColor(ci);
   new_histo_group_WZ_wh3l_13TeV_met227->SetFillStyle(3001);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_13TeV_met227->SetLineColor(ci);
   new_histo_group_WZ_wh3l_13TeV_met227->GetXaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_13TeV_met227->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_13TeV_met227->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_13TeV_met227->GetXaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_13TeV_met227->GetYaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_13TeV_met227->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_13TeV_met227->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_13TeV_met227->GetYaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_13TeV_met227->GetZaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_13TeV_met227->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_13TeV_met227->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_13TeV_met227->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_met->Add(new_histo_group_WZ_wh3l_13TeV_met,"");
   
   TH1D *new_histo_group_Higgs_wh3l_13TeV_met228 = new TH1D("new_histo_group_Higgs_wh3l_13TeV_met228","histo_H_htt",40,0,200);
   new_histo_group_Higgs_wh3l_13TeV_met228->SetBinContent(9,0.1105939);
   new_histo_group_Higgs_wh3l_13TeV_met228->SetBinContent(10,0.07640479);
   new_histo_group_Higgs_wh3l_13TeV_met228->SetBinContent(11,0.09145428);
   new_histo_group_Higgs_wh3l_13TeV_met228->SetBinContent(12,0.05335606);
   new_histo_group_Higgs_wh3l_13TeV_met228->SetBinContent(13,0.06085159);
   new_histo_group_Higgs_wh3l_13TeV_met228->SetBinContent(14,0.06878171);
   new_histo_group_Higgs_wh3l_13TeV_met228->SetBinContent(15,0.05592964);
   new_histo_group_Higgs_wh3l_13TeV_met228->SetBinContent(16,0.05188913);
   new_histo_group_Higgs_wh3l_13TeV_met228->SetBinContent(17,0.04462155);
   new_histo_group_Higgs_wh3l_13TeV_met228->SetBinContent(18,0.0411532);
   new_histo_group_Higgs_wh3l_13TeV_met228->SetBinContent(19,0.03831102);
   new_histo_group_Higgs_wh3l_13TeV_met228->SetBinContent(20,0.02296404);
   new_histo_group_Higgs_wh3l_13TeV_met228->SetBinContent(21,0.02459011);
   new_histo_group_Higgs_wh3l_13TeV_met228->SetBinContent(22,0.02267602);
   new_histo_group_Higgs_wh3l_13TeV_met228->SetBinContent(23,0.01821363);
   new_histo_group_Higgs_wh3l_13TeV_met228->SetBinContent(24,0.0100092);
   new_histo_group_Higgs_wh3l_13TeV_met228->SetBinContent(25,0.005155546);
   new_histo_group_Higgs_wh3l_13TeV_met228->SetBinContent(26,0.005650542);
   new_histo_group_Higgs_wh3l_13TeV_met228->SetBinContent(27,0.005294731);
   new_histo_group_Higgs_wh3l_13TeV_met228->SetBinContent(28,0.005979878);
   new_histo_group_Higgs_wh3l_13TeV_met228->SetBinContent(29,0.0003050854);
   new_histo_group_Higgs_wh3l_13TeV_met228->SetBinContent(30,0.001676727);
   new_histo_group_Higgs_wh3l_13TeV_met228->SetBinContent(31,0.002416236);
   new_histo_group_Higgs_wh3l_13TeV_met228->SetBinContent(32,0.002680088);
   new_histo_group_Higgs_wh3l_13TeV_met228->SetBinContent(33,0.0002870945);
   new_histo_group_Higgs_wh3l_13TeV_met228->SetBinContent(34,0.001635037);
   new_histo_group_Higgs_wh3l_13TeV_met228->SetBinContent(35,0.00221761);
   new_histo_group_Higgs_wh3l_13TeV_met228->SetBinContent(36,0.002324693);
   new_histo_group_Higgs_wh3l_13TeV_met228->SetBinContent(37,0.0002200187);
   new_histo_group_Higgs_wh3l_13TeV_met228->SetBinContent(38,0.0001986669);
   new_histo_group_Higgs_wh3l_13TeV_met228->SetBinContent(39,0.002418081);
   new_histo_group_Higgs_wh3l_13TeV_met228->SetBinContent(41,0.005465086);
   new_histo_group_Higgs_wh3l_13TeV_met228->SetBinError(9,0.0110518);
   new_histo_group_Higgs_wh3l_13TeV_met228->SetBinError(10,0.008954865);
   new_histo_group_Higgs_wh3l_13TeV_met228->SetBinError(11,0.009719946);
   new_histo_group_Higgs_wh3l_13TeV_met228->SetBinError(12,0.007645774);
   new_histo_group_Higgs_wh3l_13TeV_met228->SetBinError(13,0.009006466);
   new_histo_group_Higgs_wh3l_13TeV_met228->SetBinError(14,0.009138649);
   new_histo_group_Higgs_wh3l_13TeV_met228->SetBinError(15,0.008050278);
   new_histo_group_Higgs_wh3l_13TeV_met228->SetBinError(16,0.007708275);
   new_histo_group_Higgs_wh3l_13TeV_met228->SetBinError(17,0.007571394);
   new_histo_group_Higgs_wh3l_13TeV_met228->SetBinError(18,0.007047335);
   new_histo_group_Higgs_wh3l_13TeV_met228->SetBinError(19,0.007445635);
   new_histo_group_Higgs_wh3l_13TeV_met228->SetBinError(20,0.004803986);
   new_histo_group_Higgs_wh3l_13TeV_met228->SetBinError(21,0.005555955);
   new_histo_group_Higgs_wh3l_13TeV_met228->SetBinError(22,0.005364827);
   new_histo_group_Higgs_wh3l_13TeV_met228->SetBinError(23,0.005079565);
   new_histo_group_Higgs_wh3l_13TeV_met228->SetBinError(24,0.003359873);
   new_histo_group_Higgs_wh3l_13TeV_met228->SetBinError(25,0.002351029);
   new_histo_group_Higgs_wh3l_13TeV_met228->SetBinError(26,0.003230786);
   new_histo_group_Higgs_wh3l_13TeV_met228->SetBinError(27,0.00295857);
   new_histo_group_Higgs_wh3l_13TeV_met228->SetBinError(28,0.002766112);
   new_histo_group_Higgs_wh3l_13TeV_met228->SetBinError(29,0.0003050854);
   new_histo_group_Higgs_wh3l_13TeV_met228->SetBinError(30,0.001230824);
   new_histo_group_Higgs_wh3l_13TeV_met228->SetBinError(31,0.001661297);
   new_histo_group_Higgs_wh3l_13TeV_met228->SetBinError(32,0.001792574);
   new_histo_group_Higgs_wh3l_13TeV_met228->SetBinError(33,0.0002870945);
   new_histo_group_Higgs_wh3l_13TeV_met228->SetBinError(34,0.001175821);
   new_histo_group_Higgs_wh3l_13TeV_met228->SetBinError(35,0.0009676967);
   new_histo_group_Higgs_wh3l_13TeV_met228->SetBinError(36,0.001642078);
   new_histo_group_Higgs_wh3l_13TeV_met228->SetBinError(37,0.0002200187);
   new_histo_group_Higgs_wh3l_13TeV_met228->SetBinError(38,0.0001986669);
   new_histo_group_Higgs_wh3l_13TeV_met228->SetBinError(39,0.001712831);
   new_histo_group_Higgs_wh3l_13TeV_met228->SetBinError(41,0.002635342);
   new_histo_group_Higgs_wh3l_13TeV_met228->SetEntries(1360);
   new_histo_group_Higgs_wh3l_13TeV_met228->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_13TeV_met228->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_13TeV_met228->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_13TeV_met228->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_13TeV_met228->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_met228->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_met228->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_13TeV_met228->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_13TeV_met228->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_met228->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_met228->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_13TeV_met228->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_13TeV_met228->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_met228->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_met228->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_met->Add(new_histo_group_Higgs_wh3l_13TeV_met,"");
   thsBackground_grouped_wh3l_13TeV_met->Draw("hist same");
   
   thsSignal_grouped_wh3l_13TeV_met = new THStack();
   thsSignal_grouped_wh3l_13TeV_met->SetName("thsSignal_grouped_wh3l_13TeV_met");
   thsSignal_grouped_wh3l_13TeV_met->SetTitle("thsSignal_grouped_wh3l_13TeV_met");
   
   TH1F *thsSignal_grouped_wh3l_13TeV_met_stack_46 = new TH1F("thsSignal_grouped_wh3l_13TeV_met_stack_46","thsSignal_grouped_wh3l_13TeV_met",40,0,200);
   thsSignal_grouped_wh3l_13TeV_met_stack_46->SetMinimum(0);
   thsSignal_grouped_wh3l_13TeV_met_stack_46->SetMaximum(0.127728);
   thsSignal_grouped_wh3l_13TeV_met_stack_46->SetDirectory(0);
   thsSignal_grouped_wh3l_13TeV_met_stack_46->SetStats(0);
   thsSignal_grouped_wh3l_13TeV_met_stack_46->SetLineStyle(0);
   thsSignal_grouped_wh3l_13TeV_met_stack_46->SetMarkerStyle(20);
   thsSignal_grouped_wh3l_13TeV_met_stack_46->GetXaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_13TeV_met_stack_46->GetXaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_13TeV_met_stack_46->GetXaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_13TeV_met_stack_46->GetXaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_13TeV_met_stack_46->GetXaxis()->SetTitleOffset(0.9);
   thsSignal_grouped_wh3l_13TeV_met_stack_46->GetXaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_13TeV_met_stack_46->GetYaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_13TeV_met_stack_46->GetYaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_13TeV_met_stack_46->GetYaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_13TeV_met_stack_46->GetYaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_13TeV_met_stack_46->GetYaxis()->SetTitleOffset(1.25);
   thsSignal_grouped_wh3l_13TeV_met_stack_46->GetYaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_13TeV_met_stack_46->GetZaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_13TeV_met_stack_46->GetZaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_13TeV_met_stack_46->GetZaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_13TeV_met_stack_46->GetZaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_13TeV_met_stack_46->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_13TeV_met->SetHistogram(thsSignal_grouped_wh3l_13TeV_met_stack_46);
   
   
   TH1D *new_histo_group_Higgs_wh3l_13TeV_met229 = new TH1D("new_histo_group_Higgs_wh3l_13TeV_met229","histo_H_htt",40,0,200);
   new_histo_group_Higgs_wh3l_13TeV_met229->SetBinContent(9,0.1105939);
   new_histo_group_Higgs_wh3l_13TeV_met229->SetBinContent(10,0.07640479);
   new_histo_group_Higgs_wh3l_13TeV_met229->SetBinContent(11,0.09145428);
   new_histo_group_Higgs_wh3l_13TeV_met229->SetBinContent(12,0.05335606);
   new_histo_group_Higgs_wh3l_13TeV_met229->SetBinContent(13,0.06085159);
   new_histo_group_Higgs_wh3l_13TeV_met229->SetBinContent(14,0.06878171);
   new_histo_group_Higgs_wh3l_13TeV_met229->SetBinContent(15,0.05592964);
   new_histo_group_Higgs_wh3l_13TeV_met229->SetBinContent(16,0.05188913);
   new_histo_group_Higgs_wh3l_13TeV_met229->SetBinContent(17,0.04462155);
   new_histo_group_Higgs_wh3l_13TeV_met229->SetBinContent(18,0.0411532);
   new_histo_group_Higgs_wh3l_13TeV_met229->SetBinContent(19,0.03831102);
   new_histo_group_Higgs_wh3l_13TeV_met229->SetBinContent(20,0.02296404);
   new_histo_group_Higgs_wh3l_13TeV_met229->SetBinContent(21,0.02459011);
   new_histo_group_Higgs_wh3l_13TeV_met229->SetBinContent(22,0.02267602);
   new_histo_group_Higgs_wh3l_13TeV_met229->SetBinContent(23,0.01821363);
   new_histo_group_Higgs_wh3l_13TeV_met229->SetBinContent(24,0.0100092);
   new_histo_group_Higgs_wh3l_13TeV_met229->SetBinContent(25,0.005155546);
   new_histo_group_Higgs_wh3l_13TeV_met229->SetBinContent(26,0.005650542);
   new_histo_group_Higgs_wh3l_13TeV_met229->SetBinContent(27,0.005294731);
   new_histo_group_Higgs_wh3l_13TeV_met229->SetBinContent(28,0.005979878);
   new_histo_group_Higgs_wh3l_13TeV_met229->SetBinContent(29,0.0003050854);
   new_histo_group_Higgs_wh3l_13TeV_met229->SetBinContent(30,0.001676727);
   new_histo_group_Higgs_wh3l_13TeV_met229->SetBinContent(31,0.002416236);
   new_histo_group_Higgs_wh3l_13TeV_met229->SetBinContent(32,0.002680088);
   new_histo_group_Higgs_wh3l_13TeV_met229->SetBinContent(33,0.0002870945);
   new_histo_group_Higgs_wh3l_13TeV_met229->SetBinContent(34,0.001635037);
   new_histo_group_Higgs_wh3l_13TeV_met229->SetBinContent(35,0.00221761);
   new_histo_group_Higgs_wh3l_13TeV_met229->SetBinContent(36,0.002324693);
   new_histo_group_Higgs_wh3l_13TeV_met229->SetBinContent(37,0.0002200187);
   new_histo_group_Higgs_wh3l_13TeV_met229->SetBinContent(38,0.0001986669);
   new_histo_group_Higgs_wh3l_13TeV_met229->SetBinContent(39,0.002418081);
   new_histo_group_Higgs_wh3l_13TeV_met229->SetBinContent(41,0.005465086);
   new_histo_group_Higgs_wh3l_13TeV_met229->SetBinError(9,0.0110518);
   new_histo_group_Higgs_wh3l_13TeV_met229->SetBinError(10,0.008954865);
   new_histo_group_Higgs_wh3l_13TeV_met229->SetBinError(11,0.009719946);
   new_histo_group_Higgs_wh3l_13TeV_met229->SetBinError(12,0.007645774);
   new_histo_group_Higgs_wh3l_13TeV_met229->SetBinError(13,0.009006466);
   new_histo_group_Higgs_wh3l_13TeV_met229->SetBinError(14,0.009138649);
   new_histo_group_Higgs_wh3l_13TeV_met229->SetBinError(15,0.008050278);
   new_histo_group_Higgs_wh3l_13TeV_met229->SetBinError(16,0.007708275);
   new_histo_group_Higgs_wh3l_13TeV_met229->SetBinError(17,0.007571394);
   new_histo_group_Higgs_wh3l_13TeV_met229->SetBinError(18,0.007047335);
   new_histo_group_Higgs_wh3l_13TeV_met229->SetBinError(19,0.007445635);
   new_histo_group_Higgs_wh3l_13TeV_met229->SetBinError(20,0.004803986);
   new_histo_group_Higgs_wh3l_13TeV_met229->SetBinError(21,0.005555955);
   new_histo_group_Higgs_wh3l_13TeV_met229->SetBinError(22,0.005364827);
   new_histo_group_Higgs_wh3l_13TeV_met229->SetBinError(23,0.005079565);
   new_histo_group_Higgs_wh3l_13TeV_met229->SetBinError(24,0.003359873);
   new_histo_group_Higgs_wh3l_13TeV_met229->SetBinError(25,0.002351029);
   new_histo_group_Higgs_wh3l_13TeV_met229->SetBinError(26,0.003230786);
   new_histo_group_Higgs_wh3l_13TeV_met229->SetBinError(27,0.00295857);
   new_histo_group_Higgs_wh3l_13TeV_met229->SetBinError(28,0.002766112);
   new_histo_group_Higgs_wh3l_13TeV_met229->SetBinError(29,0.0003050854);
   new_histo_group_Higgs_wh3l_13TeV_met229->SetBinError(30,0.001230824);
   new_histo_group_Higgs_wh3l_13TeV_met229->SetBinError(31,0.001661297);
   new_histo_group_Higgs_wh3l_13TeV_met229->SetBinError(32,0.001792574);
   new_histo_group_Higgs_wh3l_13TeV_met229->SetBinError(33,0.0002870945);
   new_histo_group_Higgs_wh3l_13TeV_met229->SetBinError(34,0.001175821);
   new_histo_group_Higgs_wh3l_13TeV_met229->SetBinError(35,0.0009676967);
   new_histo_group_Higgs_wh3l_13TeV_met229->SetBinError(36,0.001642078);
   new_histo_group_Higgs_wh3l_13TeV_met229->SetBinError(37,0.0002200187);
   new_histo_group_Higgs_wh3l_13TeV_met229->SetBinError(38,0.0001986669);
   new_histo_group_Higgs_wh3l_13TeV_met229->SetBinError(39,0.001712831);
   new_histo_group_Higgs_wh3l_13TeV_met229->SetBinError(41,0.002635342);
   new_histo_group_Higgs_wh3l_13TeV_met229->SetEntries(1360);
   new_histo_group_Higgs_wh3l_13TeV_met229->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_13TeV_met229->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_13TeV_met229->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_13TeV_met229->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_13TeV_met229->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_met229->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_met229->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_13TeV_met229->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_13TeV_met229->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_met229->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_met229->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_13TeV_met229->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_13TeV_met229->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_met229->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_met229->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_13TeV_met->Add(new_histo_group_Higgs_wh3l_13TeV_met,"");
   thsSignal_grouped_wh3l_13TeV_met->Draw("hist same noclear");
   
   Double_t _fx3045[40] = {
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
   Double_t _fy3045[40] = {
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
   Double_t _felx3045[40] = {
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
   Double_t _fely3045[40] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   1.646227,
   1.385374,
   1.676006,
   1.275565,
   0.4493667,
   0.4521639,
   0.6366976,
   0.1849867,
   0.8483041,
   0.08405391,
   0.2570466,
   0.4535773,
   0.08138411,
   0.9330652,
   0.1588851,
   0.04435818,
   0.1477526,
   0.103227,
   0.01073063,
   0.01358851,
   0.01287621,
   0.009454112,
   0.007354234,
   0.01018666,
   0.04580081,
   0.007001037,
   0.008305796,
   0.0079525,
   0.01944946,
   0.002610874,
   0.008016737,
   0.006779719};
   Double_t _fehx3045[40] = {
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
   Double_t _fehy3045[40] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   1.699161,
   1.385374,
   1.676006,
   1.275565,
   0.5634326,
   0.7143148,
   0.6440415,
   0.1849867,
   0.8483039,
   0.08405391,
   0.06830462,
   0.5696087,
   0.08138412,
   0.9330651,
   0.1594628,
   0.04435818,
   0.1477525,
   0.103227,
   0.01073062,
   0.01358851,
   0.01287621,
   0.009454112,
   0.007354234,
   0.01018666,
   0.0458008,
   0.007001037,
   0.008305797,
   0.007952499,
   0.01944946,
   0.002610875,
   0.008016738,
   0.00677972};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(40,_fx3045,_fy3045,_felx3045,_fehx3045,_fely3045,_fehy3045);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(12);
   grae->SetFillStyle(3004);
   grae->SetLineColor(12);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3045 = new TH1F("Graph_Graph3045","",100,0,220);
   Graph_Graph3045->SetMinimum(-0.8993491);
   Graph_Graph3045->SetMaximum(6.472413);
   Graph_Graph3045->SetDirectory(0);
   Graph_Graph3045->SetStats(0);
   Graph_Graph3045->SetLineStyle(0);
   Graph_Graph3045->SetMarkerStyle(20);
   Graph_Graph3045->GetXaxis()->SetLabelFont(42);
   Graph_Graph3045->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3045->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3045->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3045->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3045->GetXaxis()->SetTitleFont(42);
   Graph_Graph3045->GetYaxis()->SetLabelFont(42);
   Graph_Graph3045->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3045->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3045->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3045->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3045->GetYaxis()->SetTitleFont(42);
   Graph_Graph3045->GetZaxis()->SetLabelFont(42);
   Graph_Graph3045->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3045->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3045->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3045->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3045);
   
   grae->Draw("2");
   
   Double_t _fx3046[40] = {
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
   Double_t _fy3046[40] = {
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
   Double_t _felx3046[40] = {
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
   Double_t _fely3046[40] = {
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
   Double_t _fehx3046[40] = {
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
   Double_t _fehy3046[40] = {
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
   grae = new TGraphAsymmErrors(40,_fx3046,_fy3046,_felx3046,_fehx3046,_fely3046,_fehy3046);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(1);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3046 = new TH1F("Graph_Graph3046","",100,0,220);
   Graph_Graph3046->SetMinimum(0);
   Graph_Graph3046->SetMaximum(1.262698);
   Graph_Graph3046->SetDirectory(0);
   Graph_Graph3046->SetStats(0);
   Graph_Graph3046->SetLineStyle(0);
   Graph_Graph3046->SetMarkerStyle(20);
   Graph_Graph3046->GetXaxis()->SetLabelFont(42);
   Graph_Graph3046->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3046->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3046->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3046->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3046->GetXaxis()->SetTitleFont(42);
   Graph_Graph3046->GetYaxis()->SetLabelFont(42);
   Graph_Graph3046->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3046->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3046->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3046->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3046->GetYaxis()->SetTitleFont(42);
   Graph_Graph3046->GetZaxis()->SetLabelFont(42);
   Graph_Graph3046->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3046->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3046->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3046->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3046);
   
   grae->Draw("p0");
   
   TLegend *leg = new TLegend(0.2,0.55,0.8,0.88,NULL,"brNDC");
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
   
   leg = new TLegend(0.2,0.55,0.8,0.88,NULL,"brNDC");
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
   
   TH1F *hframe_copy230 = new TH1F("hframe_copy230","",1000,0,200);
   hframe_copy230->SetMinimum(0);
   hframe_copy230->SetMaximum(10.68387);
   hframe_copy230->SetDirectory(0);
   hframe_copy230->SetStats(0);
   hframe_copy230->SetLineStyle(0);
   hframe_copy230->SetMarkerStyle(20);
   hframe_copy230->GetXaxis()->SetTitle("pfmet [GeV]");
   hframe_copy230->GetXaxis()->SetNdivisions(506);
   hframe_copy230->GetXaxis()->SetLabelFont(42);
   hframe_copy230->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy230->GetXaxis()->SetLabelSize(0.05);
   hframe_copy230->GetXaxis()->SetTitleSize(0.06);
   hframe_copy230->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy230->GetXaxis()->SetTitleFont(42);
   hframe_copy230->GetYaxis()->SetTitle("Events");
   hframe_copy230->GetYaxis()->SetLabelFont(42);
   hframe_copy230->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy230->GetYaxis()->SetLabelSize(0.05);
   hframe_copy230->GetYaxis()->SetTitleSize(0.06);
   hframe_copy230->GetYaxis()->SetTitleOffset(1.25);
   hframe_copy230->GetYaxis()->SetTitleFont(42);
   hframe_copy230->GetZaxis()->SetLabelFont(42);
   hframe_copy230->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy230->GetZaxis()->SetLabelSize(0.05);
   hframe_copy230->GetZaxis()->SetTitleSize(0.06);
   hframe_copy230->GetZaxis()->SetTitleFont(42);
   hframe_copy230->Draw("sameaxis");
   ccwh3l_13TeV_met->Modified();
   ccwh3l_13TeV_met->cd();
   ccwh3l_13TeV_met->SetSelected(ccwh3l_13TeV_met);
}
