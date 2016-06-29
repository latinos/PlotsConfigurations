void c_wh3l_13TeV_ossf_met()
{
//=========Macro generated from canvas: ccwh3l_13TeV_ossf_met/cc
//=========  (Wed Jun 29 01:33:56 2016) by ROOT version6.02/13
   TCanvas *ccwh3l_13TeV_ossf_met = new TCanvas("ccwh3l_13TeV_ossf_met", "cc",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   ccwh3l_13TeV_ossf_met->SetHighLightColor(2);
   ccwh3l_13TeV_ossf_met->Range(-40,-1.40785,210,9.421764);
   ccwh3l_13TeV_ossf_met->SetFillColor(0);
   ccwh3l_13TeV_ossf_met->SetBorderMode(0);
   ccwh3l_13TeV_ossf_met->SetBorderSize(2);
   ccwh3l_13TeV_ossf_met->SetTickx(1);
   ccwh3l_13TeV_ossf_met->SetTicky(1);
   ccwh3l_13TeV_ossf_met->SetLeftMargin(0.16);
   ccwh3l_13TeV_ossf_met->SetRightMargin(0.04);
   ccwh3l_13TeV_ossf_met->SetTopMargin(0.05);
   ccwh3l_13TeV_ossf_met->SetBottomMargin(0.13);
   ccwh3l_13TeV_ossf_met->SetFrameFillStyle(0);
   ccwh3l_13TeV_ossf_met->SetFrameBorderMode(0);
   ccwh3l_13TeV_ossf_met->SetFrameFillStyle(0);
   ccwh3l_13TeV_ossf_met->SetFrameBorderMode(0);
   
   TH1F *hframe141 = new TH1F("hframe141","",1000,0,200);
   hframe141->SetMinimum(0);
   hframe141->SetMaximum(8.880283);
   hframe141->SetDirectory(0);
   hframe141->SetStats(0);
   hframe141->SetLineStyle(0);
   hframe141->SetMarkerStyle(20);
   hframe141->GetXaxis()->SetTitle("pfmet [GeV]");
   hframe141->GetXaxis()->SetNdivisions(506);
   hframe141->GetXaxis()->SetLabelFont(42);
   hframe141->GetXaxis()->SetLabelOffset(0.007);
   hframe141->GetXaxis()->SetLabelSize(0.05);
   hframe141->GetXaxis()->SetTitleSize(0.06);
   hframe141->GetXaxis()->SetTitleOffset(0.9);
   hframe141->GetXaxis()->SetTitleFont(42);
   hframe141->GetYaxis()->SetTitle("Events");
   hframe141->GetYaxis()->SetLabelFont(42);
   hframe141->GetYaxis()->SetLabelOffset(0.007);
   hframe141->GetYaxis()->SetLabelSize(0.05);
   hframe141->GetYaxis()->SetTitleSize(0.06);
   hframe141->GetYaxis()->SetTitleOffset(1.25);
   hframe141->GetYaxis()->SetTitleFont(42);
   hframe141->GetZaxis()->SetLabelFont(42);
   hframe141->GetZaxis()->SetLabelOffset(0.007);
   hframe141->GetZaxis()->SetLabelSize(0.05);
   hframe141->GetZaxis()->SetTitleSize(0.06);
   hframe141->GetZaxis()->SetTitleFont(42);
   hframe141->Draw(" ");
   
   THStack *thsBackground_grouped_wh3l_13TeV_ossf_met = new THStack();
   thsBackground_grouped_wh3l_13TeV_ossf_met->SetName("thsBackground_grouped_wh3l_13TeV_ossf_met");
   thsBackground_grouped_wh3l_13TeV_ossf_met->SetTitle("thsBackground_grouped_wh3l_13TeV_ossf_met");
   
   TH1F *thsBackground_grouped_wh3l_13TeV_ossf_met_stack_29 = new TH1F("thsBackground_grouped_wh3l_13TeV_ossf_met_stack_29","thsBackground_grouped_wh3l_13TeV_ossf_met",40,0,200);
   thsBackground_grouped_wh3l_13TeV_ossf_met_stack_29->SetMinimum(-0.5832256);
   thsBackground_grouped_wh3l_13TeV_ossf_met_stack_29->SetMaximum(3.729719);
   thsBackground_grouped_wh3l_13TeV_ossf_met_stack_29->SetDirectory(0);
   thsBackground_grouped_wh3l_13TeV_ossf_met_stack_29->SetStats(0);
   thsBackground_grouped_wh3l_13TeV_ossf_met_stack_29->SetLineStyle(0);
   thsBackground_grouped_wh3l_13TeV_ossf_met_stack_29->SetMarkerStyle(20);
   thsBackground_grouped_wh3l_13TeV_ossf_met_stack_29->GetXaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_13TeV_ossf_met_stack_29->GetXaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_13TeV_ossf_met_stack_29->GetXaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_13TeV_ossf_met_stack_29->GetXaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_13TeV_ossf_met_stack_29->GetXaxis()->SetTitleOffset(0.9);
   thsBackground_grouped_wh3l_13TeV_ossf_met_stack_29->GetXaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_ossf_met_stack_29->GetYaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_13TeV_ossf_met_stack_29->GetYaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_13TeV_ossf_met_stack_29->GetYaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_13TeV_ossf_met_stack_29->GetYaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_13TeV_ossf_met_stack_29->GetYaxis()->SetTitleOffset(1.25);
   thsBackground_grouped_wh3l_13TeV_ossf_met_stack_29->GetYaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_ossf_met_stack_29->GetZaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_13TeV_ossf_met_stack_29->GetZaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_13TeV_ossf_met_stack_29->GetZaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_13TeV_ossf_met_stack_29->GetZaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_13TeV_ossf_met_stack_29->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_ossf_met->SetHistogram(thsBackground_grouped_wh3l_13TeV_ossf_met_stack_29);
   
   
   TH1D *new_histo_group_Fake_wh3l_13TeV_ossf_met142 = new TH1D("new_histo_group_Fake_wh3l_13TeV_ossf_met142","histo_Fake",40,0,200);
   new_histo_group_Fake_wh3l_13TeV_ossf_met142->SetBinContent(9,1.147206);
   new_histo_group_Fake_wh3l_13TeV_ossf_met142->SetBinContent(10,1.153169);
   new_histo_group_Fake_wh3l_13TeV_ossf_met142->SetBinContent(11,2.081309);
   new_histo_group_Fake_wh3l_13TeV_ossf_met142->SetBinContent(12,0.2044218);
   new_histo_group_Fake_wh3l_13TeV_ossf_met142->SetBinContent(13,-0.06872484);
   new_histo_group_Fake_wh3l_13TeV_ossf_met142->SetBinContent(14,-0.2047972);
   new_histo_group_Fake_wh3l_13TeV_ossf_met142->SetBinContent(15,0.5492142);
   new_histo_group_Fake_wh3l_13TeV_ossf_met142->SetBinContent(16,-0.1271619);
   new_histo_group_Fake_wh3l_13TeV_ossf_met142->SetBinContent(17,0.849891);
   new_histo_group_Fake_wh3l_13TeV_ossf_met142->SetBinContent(18,-0.05269274);
   new_histo_group_Fake_wh3l_13TeV_ossf_met142->SetBinContent(19,-0.1117942);
   new_histo_group_Fake_wh3l_13TeV_ossf_met142->SetBinContent(20,0.5148117);
   new_histo_group_Fake_wh3l_13TeV_ossf_met142->SetBinContent(21,-0.05545199);
   new_histo_group_Fake_wh3l_13TeV_ossf_met142->SetBinContent(22,0.8476363);
   new_histo_group_Fake_wh3l_13TeV_ossf_met142->SetBinContent(37,-0.008195123);
   new_histo_group_Fake_wh3l_13TeV_ossf_met142->SetBinError(9,1.088305);
   new_histo_group_Fake_wh3l_13TeV_ossf_met142->SetBinError(10,0.8604807);
   new_histo_group_Fake_wh3l_13TeV_ossf_met142->SetBinError(11,0.9307186);
   new_histo_group_Fake_wh3l_13TeV_ossf_met142->SetBinError(12,0.3210928);
   new_histo_group_Fake_wh3l_13TeV_ossf_met142->SetBinError(13,0.1949162);
   new_histo_group_Fake_wh3l_13TeV_ossf_met142->SetBinError(14,0.3784285);
   new_histo_group_Fake_wh3l_13TeV_ossf_met142->SetBinError(15,0.5492142);
   new_histo_group_Fake_wh3l_13TeV_ossf_met142->SetBinError(16,0.1271437);
   new_histo_group_Fake_wh3l_13TeV_ossf_met142->SetBinError(17,0.6316814);
   new_histo_group_Fake_wh3l_13TeV_ossf_met142->SetBinError(18,0.05210733);
   new_histo_group_Fake_wh3l_13TeV_ossf_met142->SetBinError(19,0.2242267);
   new_histo_group_Fake_wh3l_13TeV_ossf_met142->SetBinError(20,0.5208186);
   new_histo_group_Fake_wh3l_13TeV_ossf_met142->SetBinError(21,0.05545199);
   new_histo_group_Fake_wh3l_13TeV_ossf_met142->SetBinError(22,0.8476363);
   new_histo_group_Fake_wh3l_13TeV_ossf_met142->SetBinError(37,0.008195123);
   new_histo_group_Fake_wh3l_13TeV_ossf_met142->SetEntries(81);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_13TeV_ossf_met142->SetFillColor(ci);
   new_histo_group_Fake_wh3l_13TeV_ossf_met142->SetFillStyle(3001);

   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_13TeV_ossf_met142->SetLineColor(ci);
   new_histo_group_Fake_wh3l_13TeV_ossf_met142->GetXaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_13TeV_ossf_met142->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_13TeV_ossf_met142->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_13TeV_ossf_met142->GetXaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_13TeV_ossf_met142->GetYaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_13TeV_ossf_met142->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_13TeV_ossf_met142->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_13TeV_ossf_met142->GetYaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_13TeV_ossf_met142->GetZaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_13TeV_ossf_met142->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_13TeV_ossf_met142->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_13TeV_ossf_met142->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_ossf_met->Add(new_histo_group_Fake_wh3l_13TeV_ossf_met,"");
   
   TH1D *new_histo_group_WW_wh3l_13TeV_ossf_met143 = new TH1D("new_histo_group_WW_wh3l_13TeV_ossf_met143","histo_WW",40,0,200);
   new_histo_group_WW_wh3l_13TeV_ossf_met143->SetBinContent(9,0.0142084);
   new_histo_group_WW_wh3l_13TeV_ossf_met143->SetBinContent(10,0.03345312);
   new_histo_group_WW_wh3l_13TeV_ossf_met143->SetBinContent(13,0.01447441);
   new_histo_group_WW_wh3l_13TeV_ossf_met143->SetBinContent(16,0.01044191);
   new_histo_group_WW_wh3l_13TeV_ossf_met143->SetBinError(9,0.0142084);
   new_histo_group_WW_wh3l_13TeV_ossf_met143->SetBinError(10,0.02374035);
   new_histo_group_WW_wh3l_13TeV_ossf_met143->SetBinError(13,0.01447441);
   new_histo_group_WW_wh3l_13TeV_ossf_met143->SetBinError(16,0.01044191);
   new_histo_group_WW_wh3l_13TeV_ossf_met143->SetEntries(5);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_13TeV_ossf_met143->SetFillColor(ci);
   new_histo_group_WW_wh3l_13TeV_ossf_met143->SetFillStyle(3001);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_13TeV_ossf_met143->SetLineColor(ci);
   new_histo_group_WW_wh3l_13TeV_ossf_met143->GetXaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_13TeV_ossf_met143->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_13TeV_ossf_met143->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_13TeV_ossf_met143->GetXaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_13TeV_ossf_met143->GetYaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_13TeV_ossf_met143->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_13TeV_ossf_met143->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_13TeV_ossf_met143->GetYaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_13TeV_ossf_met143->GetZaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_13TeV_ossf_met143->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_13TeV_ossf_met143->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_13TeV_ossf_met143->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_ossf_met->Add(new_histo_group_WW_wh3l_13TeV_ossf_met,"");
   
   TH1D *new_histo_group_VVV_wh3l_13TeV_ossf_met144 = new TH1D("new_histo_group_VVV_wh3l_13TeV_ossf_met144","histo_VVV",40,0,200);
   new_histo_group_VVV_wh3l_13TeV_ossf_met144->SetBinContent(9,0.0006249245);
   new_histo_group_VVV_wh3l_13TeV_ossf_met144->SetBinContent(10,0.001240314);
   new_histo_group_VVV_wh3l_13TeV_ossf_met144->SetBinContent(11,0.0008959455);
   new_histo_group_VVV_wh3l_13TeV_ossf_met144->SetBinContent(13,0.001631847);
   new_histo_group_VVV_wh3l_13TeV_ossf_met144->SetBinContent(14,0.0006729142);
   new_histo_group_VVV_wh3l_13TeV_ossf_met144->SetBinContent(22,0.0006343185);
   new_histo_group_VVV_wh3l_13TeV_ossf_met144->SetBinContent(23,0.0006504452);
   new_histo_group_VVV_wh3l_13TeV_ossf_met144->SetBinContent(35,0.0006405607);
   new_histo_group_VVV_wh3l_13TeV_ossf_met144->SetBinError(9,0.0006249245);
   new_histo_group_VVV_wh3l_13TeV_ossf_met144->SetBinError(10,0.0008770975);
   new_histo_group_VVV_wh3l_13TeV_ossf_met144->SetBinError(11,0.0007189671);
   new_histo_group_VVV_wh3l_13TeV_ossf_met144->SetBinError(13,0.0009923548);
   new_histo_group_VVV_wh3l_13TeV_ossf_met144->SetBinError(14,0.0006729142);
   new_histo_group_VVV_wh3l_13TeV_ossf_met144->SetBinError(22,0.0006343185);
   new_histo_group_VVV_wh3l_13TeV_ossf_met144->SetBinError(23,0.0006504452);
   new_histo_group_VVV_wh3l_13TeV_ossf_met144->SetBinError(35,0.0006405607);
   new_histo_group_VVV_wh3l_13TeV_ossf_met144->SetEntries(12);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_13TeV_ossf_met144->SetFillColor(ci);
   new_histo_group_VVV_wh3l_13TeV_ossf_met144->SetFillStyle(3001);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_13TeV_ossf_met144->SetLineColor(ci);
   new_histo_group_VVV_wh3l_13TeV_ossf_met144->GetXaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_13TeV_ossf_met144->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_13TeV_ossf_met144->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_13TeV_ossf_met144->GetXaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_13TeV_ossf_met144->GetYaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_13TeV_ossf_met144->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_13TeV_ossf_met144->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_13TeV_ossf_met144->GetYaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_13TeV_ossf_met144->GetZaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_13TeV_ossf_met144->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_13TeV_ossf_met144->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_13TeV_ossf_met144->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_ossf_met->Add(new_histo_group_VVV_wh3l_13TeV_ossf_met,"");
   
   TH1D *new_histo_group_Vg_wh3l_13TeV_ossf_met145 = new TH1D("new_histo_group_Vg_wh3l_13TeV_ossf_met145","histo_Vg",40,0,200);
   new_histo_group_Vg_wh3l_13TeV_ossf_met145->SetBinContent(9,0.9327583);
   new_histo_group_Vg_wh3l_13TeV_ossf_met145->SetBinContent(10,0.8533485);
   new_histo_group_Vg_wh3l_13TeV_ossf_met145->SetBinContent(11,0.4091599);
   new_histo_group_Vg_wh3l_13TeV_ossf_met145->SetBinContent(12,0.4529023);
   new_histo_group_Vg_wh3l_13TeV_ossf_met145->SetBinError(9,0.3944573);
   new_histo_group_Vg_wh3l_13TeV_ossf_met145->SetBinError(10,0.2991175);
   new_histo_group_Vg_wh3l_13TeV_ossf_met145->SetBinError(11,0.1891369);
   new_histo_group_Vg_wh3l_13TeV_ossf_met145->SetBinError(12,0.2100381);
   new_histo_group_Vg_wh3l_13TeV_ossf_met145->SetEntries(42);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_13TeV_ossf_met145->SetFillColor(ci);
   new_histo_group_Vg_wh3l_13TeV_ossf_met145->SetFillStyle(3001);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_13TeV_ossf_met145->SetLineColor(ci);
   new_histo_group_Vg_wh3l_13TeV_ossf_met145->GetXaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_13TeV_ossf_met145->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_13TeV_ossf_met145->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_13TeV_ossf_met145->GetXaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_13TeV_ossf_met145->GetYaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_13TeV_ossf_met145->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_13TeV_ossf_met145->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_13TeV_ossf_met145->GetYaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_13TeV_ossf_met145->GetZaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_13TeV_ossf_met145->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_13TeV_ossf_met145->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_13TeV_ossf_met145->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_ossf_met->Add(new_histo_group_Vg_wh3l_13TeV_ossf_met,"");
   
   TH1D *new_histo_group_ZZ_wh3l_13TeV_ossf_met146 = new TH1D("new_histo_group_ZZ_wh3l_13TeV_ossf_met146","histo_ZZ",40,0,200);
   new_histo_group_ZZ_wh3l_13TeV_ossf_met146->SetBinContent(9,0.1619121);
   new_histo_group_ZZ_wh3l_13TeV_ossf_met146->SetBinContent(10,0.1514073);
   new_histo_group_ZZ_wh3l_13TeV_ossf_met146->SetBinContent(11,0.1278668);
   new_histo_group_ZZ_wh3l_13TeV_ossf_met146->SetBinContent(12,1.493259e-08);
   new_histo_group_ZZ_wh3l_13TeV_ossf_met146->SetBinContent(13,0.07189054);
   new_histo_group_ZZ_wh3l_13TeV_ossf_met146->SetBinContent(15,0.02711696);
   new_histo_group_ZZ_wh3l_13TeV_ossf_met146->SetBinContent(24,0.02856258);
   new_histo_group_ZZ_wh3l_13TeV_ossf_met146->SetBinError(9,0.08296664);
   new_histo_group_ZZ_wh3l_13TeV_ossf_met146->SetBinError(10,0.07657922);
   new_histo_group_ZZ_wh3l_13TeV_ossf_met146->SetBinError(11,0.07072701);
   new_histo_group_ZZ_wh3l_13TeV_ossf_met146->SetBinError(12,1.493259e-08);
   new_histo_group_ZZ_wh3l_13TeV_ossf_met146->SetBinError(13,0.05189561);
   new_histo_group_ZZ_wh3l_13TeV_ossf_met146->SetBinError(15,0.02711696);
   new_histo_group_ZZ_wh3l_13TeV_ossf_met146->SetBinError(24,0.02856258);
   new_histo_group_ZZ_wh3l_13TeV_ossf_met146->SetEntries(17);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_13TeV_ossf_met146->SetFillColor(ci);
   new_histo_group_ZZ_wh3l_13TeV_ossf_met146->SetFillStyle(3001);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_13TeV_ossf_met146->SetLineColor(ci);
   new_histo_group_ZZ_wh3l_13TeV_ossf_met146->GetXaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_13TeV_ossf_met146->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_13TeV_ossf_met146->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_13TeV_ossf_met146->GetXaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_13TeV_ossf_met146->GetYaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_13TeV_ossf_met146->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_13TeV_ossf_met146->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_13TeV_ossf_met146->GetYaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_13TeV_ossf_met146->GetZaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_13TeV_ossf_met146->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_13TeV_ossf_met146->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_13TeV_ossf_met146->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_ossf_met->Add(new_histo_group_ZZ_wh3l_13TeV_ossf_met,"");
   
   TH1D *new_histo_group_WZ_wh3l_13TeV_ossf_met147 = new TH1D("new_histo_group_WZ_wh3l_13TeV_ossf_met147","histo_WZ",40,0,200);
   new_histo_group_WZ_wh3l_13TeV_ossf_met147->SetBinContent(9,1.094464);
   new_histo_group_WZ_wh3l_13TeV_ossf_met147->SetBinContent(10,1.0994);
   new_histo_group_WZ_wh3l_13TeV_ossf_met147->SetBinContent(11,0.8741848);
   new_histo_group_WZ_wh3l_13TeV_ossf_met147->SetBinContent(12,0.8273664);
   new_histo_group_WZ_wh3l_13TeV_ossf_met147->SetBinContent(13,0.5807382);
   new_histo_group_WZ_wh3l_13TeV_ossf_met147->SetBinContent(14,0.503703);
   new_histo_group_WZ_wh3l_13TeV_ossf_met147->SetBinContent(15,0.3687481);
   new_histo_group_WZ_wh3l_13TeV_ossf_met147->SetBinContent(16,0.2969857);
   new_histo_group_WZ_wh3l_13TeV_ossf_met147->SetBinContent(17,0.2465318);
   new_histo_group_WZ_wh3l_13TeV_ossf_met147->SetBinContent(18,0.1703759);
   new_histo_group_WZ_wh3l_13TeV_ossf_met147->SetBinContent(19,0.1010132);
   new_histo_group_WZ_wh3l_13TeV_ossf_met147->SetBinContent(20,0.09898924);
   new_histo_group_WZ_wh3l_13TeV_ossf_met147->SetBinContent(21,0.1028862);
   new_histo_group_WZ_wh3l_13TeV_ossf_met147->SetBinContent(22,0.09274451);
   new_histo_group_WZ_wh3l_13TeV_ossf_met147->SetBinContent(23,0.07088707);
   new_histo_group_WZ_wh3l_13TeV_ossf_met147->SetBinContent(24,0.04896016);
   new_histo_group_WZ_wh3l_13TeV_ossf_met147->SetBinContent(25,0.03687642);
   new_histo_group_WZ_wh3l_13TeV_ossf_met147->SetBinContent(26,0.02323807);
   new_histo_group_WZ_wh3l_13TeV_ossf_met147->SetBinContent(27,0.01927328);
   new_histo_group_WZ_wh3l_13TeV_ossf_met147->SetBinContent(28,0.00988046);
   new_histo_group_WZ_wh3l_13TeV_ossf_met147->SetBinContent(29,0.02842813);
   new_histo_group_WZ_wh3l_13TeV_ossf_met147->SetBinContent(30,0.01662978);
   new_histo_group_WZ_wh3l_13TeV_ossf_met147->SetBinContent(31,0.01053258);
   new_histo_group_WZ_wh3l_13TeV_ossf_met147->SetBinContent(32,0.02028379);
   new_histo_group_WZ_wh3l_13TeV_ossf_met147->SetBinContent(33,0.01843559);
   new_histo_group_WZ_wh3l_13TeV_ossf_met147->SetBinContent(34,0.01204565);
   new_histo_group_WZ_wh3l_13TeV_ossf_met147->SetBinContent(35,0.01084022);
   new_histo_group_WZ_wh3l_13TeV_ossf_met147->SetBinContent(36,0.01123944);
   new_histo_group_WZ_wh3l_13TeV_ossf_met147->SetBinContent(37,0.02264966);
   new_histo_group_WZ_wh3l_13TeV_ossf_met147->SetBinContent(38,0.002637757);
   new_histo_group_WZ_wh3l_13TeV_ossf_met147->SetBinContent(39,0.01342807);
   new_histo_group_WZ_wh3l_13TeV_ossf_met147->SetBinContent(40,0.00634668);
   new_histo_group_WZ_wh3l_13TeV_ossf_met147->SetBinContent(41,0.07963444);
   new_histo_group_WZ_wh3l_13TeV_ossf_met147->SetBinError(9,0.07705982);
   new_histo_group_WZ_wh3l_13TeV_ossf_met147->SetBinError(10,0.07773178);
   new_histo_group_WZ_wh3l_13TeV_ossf_met147->SetBinError(11,0.06908481);
   new_histo_group_WZ_wh3l_13TeV_ossf_met147->SetBinError(12,0.06773342);
   new_histo_group_WZ_wh3l_13TeV_ossf_met147->SetBinError(13,0.05620768);
   new_histo_group_WZ_wh3l_13TeV_ossf_met147->SetBinError(14,0.05273352);
   new_histo_group_WZ_wh3l_13TeV_ossf_met147->SetBinError(15,0.04481629);
   new_histo_group_WZ_wh3l_13TeV_ossf_met147->SetBinError(16,0.03997816);
   new_histo_group_WZ_wh3l_13TeV_ossf_met147->SetBinError(17,0.03607656);
   new_histo_group_WZ_wh3l_13TeV_ossf_met147->SetBinError(18,0.03044673);
   new_histo_group_WZ_wh3l_13TeV_ossf_met147->SetBinError(19,0.0220476);
   new_histo_group_WZ_wh3l_13TeV_ossf_met147->SetBinError(20,0.02272537);
   new_histo_group_WZ_wh3l_13TeV_ossf_met147->SetBinError(21,0.0232388);
   new_histo_group_WZ_wh3l_13TeV_ossf_met147->SetBinError(22,0.02262537);
   new_histo_group_WZ_wh3l_13TeV_ossf_met147->SetBinError(23,0.01915326);
   new_histo_group_WZ_wh3l_13TeV_ossf_met147->SetBinError(24,0.01578889);
   new_histo_group_WZ_wh3l_13TeV_ossf_met147->SetBinError(25,0.01453736);
   new_histo_group_WZ_wh3l_13TeV_ossf_met147->SetBinError(26,0.01130215);
   new_histo_group_WZ_wh3l_13TeV_ossf_met147->SetBinError(27,0.009952158);
   new_histo_group_WZ_wh3l_13TeV_ossf_met147->SetBinError(28,0.006766018);
   new_histo_group_WZ_wh3l_13TeV_ossf_met147->SetBinError(29,0.01274425);
   new_histo_group_WZ_wh3l_13TeV_ossf_met147->SetBinError(30,0.009454112);
   new_histo_group_WZ_wh3l_13TeV_ossf_met147->SetBinError(31,0.007354234);
   new_histo_group_WZ_wh3l_13TeV_ossf_met147->SetBinError(32,0.01018666);
   new_histo_group_WZ_wh3l_13TeV_ossf_met147->SetBinError(33,0.01065415);
   new_histo_group_WZ_wh3l_13TeV_ossf_met147->SetBinError(34,0.007001037);
   new_histo_group_WZ_wh3l_13TeV_ossf_met147->SetBinError(35,0.007665218);
   new_histo_group_WZ_wh3l_13TeV_ossf_met147->SetBinError(36,0.007952499);
   new_histo_group_WZ_wh3l_13TeV_ossf_met147->SetBinError(37,0.01109833);
   new_histo_group_WZ_wh3l_13TeV_ossf_met147->SetBinError(38,0.002610874);
   new_histo_group_WZ_wh3l_13TeV_ossf_met147->SetBinError(39,0.008016728);
   new_histo_group_WZ_wh3l_13TeV_ossf_met147->SetBinError(40,0.00634668);
   new_histo_group_WZ_wh3l_13TeV_ossf_met147->SetBinError(41,0.02056406);
   new_histo_group_WZ_wh3l_13TeV_ossf_met147->SetEntries(1419);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_13TeV_ossf_met147->SetFillColor(ci);
   new_histo_group_WZ_wh3l_13TeV_ossf_met147->SetFillStyle(3001);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_13TeV_ossf_met147->SetLineColor(ci);
   new_histo_group_WZ_wh3l_13TeV_ossf_met147->GetXaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_13TeV_ossf_met147->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_13TeV_ossf_met147->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_13TeV_ossf_met147->GetXaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_13TeV_ossf_met147->GetYaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_13TeV_ossf_met147->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_13TeV_ossf_met147->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_13TeV_ossf_met147->GetYaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_13TeV_ossf_met147->GetZaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_13TeV_ossf_met147->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_13TeV_ossf_met147->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_13TeV_ossf_met147->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_ossf_met->Add(new_histo_group_WZ_wh3l_13TeV_ossf_met,"");
   
   TH1D *new_histo_group_Higgs_wh3l_13TeV_ossf_met148 = new TH1D("new_histo_group_Higgs_wh3l_13TeV_ossf_met148","histo_H_htt",40,0,200);
   new_histo_group_Higgs_wh3l_13TeV_ossf_met148->SetBinContent(9,0.07630462);
   new_histo_group_Higgs_wh3l_13TeV_ossf_met148->SetBinContent(10,0.04787202);
   new_histo_group_Higgs_wh3l_13TeV_ossf_met148->SetBinContent(11,0.05869628);
   new_histo_group_Higgs_wh3l_13TeV_ossf_met148->SetBinContent(12,0.0405445);
   new_histo_group_Higgs_wh3l_13TeV_ossf_met148->SetBinContent(13,0.04815231);
   new_histo_group_Higgs_wh3l_13TeV_ossf_met148->SetBinContent(14,0.05517352);
   new_histo_group_Higgs_wh3l_13TeV_ossf_met148->SetBinContent(15,0.03698865);
   new_histo_group_Higgs_wh3l_13TeV_ossf_met148->SetBinContent(16,0.0378505);
   new_histo_group_Higgs_wh3l_13TeV_ossf_met148->SetBinContent(17,0.03272754);
   new_histo_group_Higgs_wh3l_13TeV_ossf_met148->SetBinContent(18,0.02879806);
   new_histo_group_Higgs_wh3l_13TeV_ossf_met148->SetBinContent(19,0.0293155);
   new_histo_group_Higgs_wh3l_13TeV_ossf_met148->SetBinContent(20,0.01465449);
   new_histo_group_Higgs_wh3l_13TeV_ossf_met148->SetBinContent(21,0.02053347);
   new_histo_group_Higgs_wh3l_13TeV_ossf_met148->SetBinContent(22,0.01548955);
   new_histo_group_Higgs_wh3l_13TeV_ossf_met148->SetBinContent(23,0.01245599);
   new_histo_group_Higgs_wh3l_13TeV_ossf_met148->SetBinContent(24,0.006056201);
   new_histo_group_Higgs_wh3l_13TeV_ossf_met148->SetBinContent(25,0.00464452);
   new_histo_group_Higgs_wh3l_13TeV_ossf_met148->SetBinContent(26,0.005454139);
   new_histo_group_Higgs_wh3l_13TeV_ossf_met148->SetBinContent(27,0.002945882);
   new_histo_group_Higgs_wh3l_13TeV_ossf_met148->SetBinContent(28,0.004498212);
   new_histo_group_Higgs_wh3l_13TeV_ossf_met148->SetBinContent(29,0.0003050854);
   new_histo_group_Higgs_wh3l_13TeV_ossf_met148->SetBinContent(30,0.001676727);
   new_histo_group_Higgs_wh3l_13TeV_ossf_met148->SetBinContent(31,0.002416131);
   new_histo_group_Higgs_wh3l_13TeV_ossf_met148->SetBinContent(32,0.002680088);
   new_histo_group_Higgs_wh3l_13TeV_ossf_met148->SetBinContent(33,0.0002870945);
   new_histo_group_Higgs_wh3l_13TeV_ossf_met148->SetBinContent(34,0.001635037);
   new_histo_group_Higgs_wh3l_13TeV_ossf_met148->SetBinContent(35,0.001133816);
   new_histo_group_Higgs_wh3l_13TeV_ossf_met148->SetBinContent(36,0.001936098);
   new_histo_group_Higgs_wh3l_13TeV_ossf_met148->SetBinContent(38,0.0001986669);
   new_histo_group_Higgs_wh3l_13TeV_ossf_met148->SetBinContent(39,0.002418081);
   new_histo_group_Higgs_wh3l_13TeV_ossf_met148->SetBinContent(41,0.003357599);
   new_histo_group_Higgs_wh3l_13TeV_ossf_met148->SetBinError(9,0.009229075);
   new_histo_group_Higgs_wh3l_13TeV_ossf_met148->SetBinError(10,0.007175388);
   new_histo_group_Higgs_wh3l_13TeV_ossf_met148->SetBinError(11,0.007705597);
   new_histo_group_Higgs_wh3l_13TeV_ossf_met148->SetBinError(12,0.00664137);
   new_histo_group_Higgs_wh3l_13TeV_ossf_met148->SetBinError(13,0.008165027);
   new_histo_group_Higgs_wh3l_13TeV_ossf_met148->SetBinError(14,0.008027982);
   new_histo_group_Higgs_wh3l_13TeV_ossf_met148->SetBinError(15,0.006775689);
   new_histo_group_Higgs_wh3l_13TeV_ossf_met148->SetBinError(16,0.006820869);
   new_histo_group_Higgs_wh3l_13TeV_ossf_met148->SetBinError(17,0.006419052);
   new_histo_group_Higgs_wh3l_13TeV_ossf_met148->SetBinError(18,0.005731769);
   new_histo_group_Higgs_wh3l_13TeV_ossf_met148->SetBinError(19,0.006662101);
   new_histo_group_Higgs_wh3l_13TeV_ossf_met148->SetBinError(20,0.003697374);
   new_histo_group_Higgs_wh3l_13TeV_ossf_met148->SetBinError(21,0.005226964);
   new_histo_group_Higgs_wh3l_13TeV_ossf_met148->SetBinError(22,0.004353353);
   new_histo_group_Higgs_wh3l_13TeV_ossf_met148->SetBinError(23,0.004194506);
   new_histo_group_Higgs_wh3l_13TeV_ossf_met148->SetBinError(24,0.002622062);
   new_histo_group_Higgs_wh3l_13TeV_ossf_met148->SetBinError(25,0.002321973);
   new_histo_group_Higgs_wh3l_13TeV_ossf_met148->SetBinError(26,0.00322481);
   new_histo_group_Higgs_wh3l_13TeV_ossf_met148->SetBinError(27,0.002330168);
   new_histo_group_Higgs_wh3l_13TeV_ossf_met148->SetBinError(28,0.002509928);
   new_histo_group_Higgs_wh3l_13TeV_ossf_met148->SetBinError(29,0.0003050854);
   new_histo_group_Higgs_wh3l_13TeV_ossf_met148->SetBinError(30,0.001230824);
   new_histo_group_Higgs_wh3l_13TeV_ossf_met148->SetBinError(31,0.001661297);
   new_histo_group_Higgs_wh3l_13TeV_ossf_met148->SetBinError(32,0.001792574);
   new_histo_group_Higgs_wh3l_13TeV_ossf_met148->SetBinError(33,0.0002870945);
   new_histo_group_Higgs_wh3l_13TeV_ossf_met148->SetBinError(34,0.001175821);
   new_histo_group_Higgs_wh3l_13TeV_ossf_met148->SetBinError(35,0.0007658713);
   new_histo_group_Higgs_wh3l_13TeV_ossf_met148->SetBinError(36,0.00161891);
   new_histo_group_Higgs_wh3l_13TeV_ossf_met148->SetBinError(38,0.0001986669);
   new_histo_group_Higgs_wh3l_13TeV_ossf_met148->SetBinError(39,0.001712831);
   new_histo_group_Higgs_wh3l_13TeV_ossf_met148->SetBinError(41,0.002377921);
   new_histo_group_Higgs_wh3l_13TeV_ossf_met148->SetEntries(946);
   new_histo_group_Higgs_wh3l_13TeV_ossf_met148->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_13TeV_ossf_met148->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_13TeV_ossf_met148->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_13TeV_ossf_met148->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_13TeV_ossf_met148->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_ossf_met148->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_ossf_met148->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_13TeV_ossf_met148->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_13TeV_ossf_met148->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_ossf_met148->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_ossf_met148->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_13TeV_ossf_met148->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_13TeV_ossf_met148->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_ossf_met148->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_ossf_met148->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_ossf_met->Add(new_histo_group_Higgs_wh3l_13TeV_ossf_met,"");
   thsBackground_grouped_wh3l_13TeV_ossf_met->Draw("hist same");
   
   thsSignal_grouped_wh3l_13TeV_ossf_met = new THStack();
   thsSignal_grouped_wh3l_13TeV_ossf_met->SetName("thsSignal_grouped_wh3l_13TeV_ossf_met");
   thsSignal_grouped_wh3l_13TeV_ossf_met->SetTitle("thsSignal_grouped_wh3l_13TeV_ossf_met");
   
   TH1F *thsSignal_grouped_wh3l_13TeV_ossf_met_stack_30 = new TH1F("thsSignal_grouped_wh3l_13TeV_ossf_met_stack_30","thsSignal_grouped_wh3l_13TeV_ossf_met",40,0,200);
   thsSignal_grouped_wh3l_13TeV_ossf_met_stack_30->SetMinimum(0);
   thsSignal_grouped_wh3l_13TeV_ossf_met_stack_30->SetMaximum(0.08981038);
   thsSignal_grouped_wh3l_13TeV_ossf_met_stack_30->SetDirectory(0);
   thsSignal_grouped_wh3l_13TeV_ossf_met_stack_30->SetStats(0);
   thsSignal_grouped_wh3l_13TeV_ossf_met_stack_30->SetLineStyle(0);
   thsSignal_grouped_wh3l_13TeV_ossf_met_stack_30->SetMarkerStyle(20);
   thsSignal_grouped_wh3l_13TeV_ossf_met_stack_30->GetXaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_13TeV_ossf_met_stack_30->GetXaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_13TeV_ossf_met_stack_30->GetXaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_13TeV_ossf_met_stack_30->GetXaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_13TeV_ossf_met_stack_30->GetXaxis()->SetTitleOffset(0.9);
   thsSignal_grouped_wh3l_13TeV_ossf_met_stack_30->GetXaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_13TeV_ossf_met_stack_30->GetYaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_13TeV_ossf_met_stack_30->GetYaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_13TeV_ossf_met_stack_30->GetYaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_13TeV_ossf_met_stack_30->GetYaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_13TeV_ossf_met_stack_30->GetYaxis()->SetTitleOffset(1.25);
   thsSignal_grouped_wh3l_13TeV_ossf_met_stack_30->GetYaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_13TeV_ossf_met_stack_30->GetZaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_13TeV_ossf_met_stack_30->GetZaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_13TeV_ossf_met_stack_30->GetZaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_13TeV_ossf_met_stack_30->GetZaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_13TeV_ossf_met_stack_30->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_13TeV_ossf_met->SetHistogram(thsSignal_grouped_wh3l_13TeV_ossf_met_stack_30);
   
   
   TH1D *new_histo_group_Higgs_wh3l_13TeV_ossf_met149 = new TH1D("new_histo_group_Higgs_wh3l_13TeV_ossf_met149","histo_H_htt",40,0,200);
   new_histo_group_Higgs_wh3l_13TeV_ossf_met149->SetBinContent(9,0.07630462);
   new_histo_group_Higgs_wh3l_13TeV_ossf_met149->SetBinContent(10,0.04787202);
   new_histo_group_Higgs_wh3l_13TeV_ossf_met149->SetBinContent(11,0.05869628);
   new_histo_group_Higgs_wh3l_13TeV_ossf_met149->SetBinContent(12,0.0405445);
   new_histo_group_Higgs_wh3l_13TeV_ossf_met149->SetBinContent(13,0.04815231);
   new_histo_group_Higgs_wh3l_13TeV_ossf_met149->SetBinContent(14,0.05517352);
   new_histo_group_Higgs_wh3l_13TeV_ossf_met149->SetBinContent(15,0.03698865);
   new_histo_group_Higgs_wh3l_13TeV_ossf_met149->SetBinContent(16,0.0378505);
   new_histo_group_Higgs_wh3l_13TeV_ossf_met149->SetBinContent(17,0.03272754);
   new_histo_group_Higgs_wh3l_13TeV_ossf_met149->SetBinContent(18,0.02879806);
   new_histo_group_Higgs_wh3l_13TeV_ossf_met149->SetBinContent(19,0.0293155);
   new_histo_group_Higgs_wh3l_13TeV_ossf_met149->SetBinContent(20,0.01465449);
   new_histo_group_Higgs_wh3l_13TeV_ossf_met149->SetBinContent(21,0.02053347);
   new_histo_group_Higgs_wh3l_13TeV_ossf_met149->SetBinContent(22,0.01548955);
   new_histo_group_Higgs_wh3l_13TeV_ossf_met149->SetBinContent(23,0.01245599);
   new_histo_group_Higgs_wh3l_13TeV_ossf_met149->SetBinContent(24,0.006056201);
   new_histo_group_Higgs_wh3l_13TeV_ossf_met149->SetBinContent(25,0.00464452);
   new_histo_group_Higgs_wh3l_13TeV_ossf_met149->SetBinContent(26,0.005454139);
   new_histo_group_Higgs_wh3l_13TeV_ossf_met149->SetBinContent(27,0.002945882);
   new_histo_group_Higgs_wh3l_13TeV_ossf_met149->SetBinContent(28,0.004498212);
   new_histo_group_Higgs_wh3l_13TeV_ossf_met149->SetBinContent(29,0.0003050854);
   new_histo_group_Higgs_wh3l_13TeV_ossf_met149->SetBinContent(30,0.001676727);
   new_histo_group_Higgs_wh3l_13TeV_ossf_met149->SetBinContent(31,0.002416131);
   new_histo_group_Higgs_wh3l_13TeV_ossf_met149->SetBinContent(32,0.002680088);
   new_histo_group_Higgs_wh3l_13TeV_ossf_met149->SetBinContent(33,0.0002870945);
   new_histo_group_Higgs_wh3l_13TeV_ossf_met149->SetBinContent(34,0.001635037);
   new_histo_group_Higgs_wh3l_13TeV_ossf_met149->SetBinContent(35,0.001133816);
   new_histo_group_Higgs_wh3l_13TeV_ossf_met149->SetBinContent(36,0.001936098);
   new_histo_group_Higgs_wh3l_13TeV_ossf_met149->SetBinContent(38,0.0001986669);
   new_histo_group_Higgs_wh3l_13TeV_ossf_met149->SetBinContent(39,0.002418081);
   new_histo_group_Higgs_wh3l_13TeV_ossf_met149->SetBinContent(41,0.003357599);
   new_histo_group_Higgs_wh3l_13TeV_ossf_met149->SetBinError(9,0.009229075);
   new_histo_group_Higgs_wh3l_13TeV_ossf_met149->SetBinError(10,0.007175388);
   new_histo_group_Higgs_wh3l_13TeV_ossf_met149->SetBinError(11,0.007705597);
   new_histo_group_Higgs_wh3l_13TeV_ossf_met149->SetBinError(12,0.00664137);
   new_histo_group_Higgs_wh3l_13TeV_ossf_met149->SetBinError(13,0.008165027);
   new_histo_group_Higgs_wh3l_13TeV_ossf_met149->SetBinError(14,0.008027982);
   new_histo_group_Higgs_wh3l_13TeV_ossf_met149->SetBinError(15,0.006775689);
   new_histo_group_Higgs_wh3l_13TeV_ossf_met149->SetBinError(16,0.006820869);
   new_histo_group_Higgs_wh3l_13TeV_ossf_met149->SetBinError(17,0.006419052);
   new_histo_group_Higgs_wh3l_13TeV_ossf_met149->SetBinError(18,0.005731769);
   new_histo_group_Higgs_wh3l_13TeV_ossf_met149->SetBinError(19,0.006662101);
   new_histo_group_Higgs_wh3l_13TeV_ossf_met149->SetBinError(20,0.003697374);
   new_histo_group_Higgs_wh3l_13TeV_ossf_met149->SetBinError(21,0.005226964);
   new_histo_group_Higgs_wh3l_13TeV_ossf_met149->SetBinError(22,0.004353353);
   new_histo_group_Higgs_wh3l_13TeV_ossf_met149->SetBinError(23,0.004194506);
   new_histo_group_Higgs_wh3l_13TeV_ossf_met149->SetBinError(24,0.002622062);
   new_histo_group_Higgs_wh3l_13TeV_ossf_met149->SetBinError(25,0.002321973);
   new_histo_group_Higgs_wh3l_13TeV_ossf_met149->SetBinError(26,0.00322481);
   new_histo_group_Higgs_wh3l_13TeV_ossf_met149->SetBinError(27,0.002330168);
   new_histo_group_Higgs_wh3l_13TeV_ossf_met149->SetBinError(28,0.002509928);
   new_histo_group_Higgs_wh3l_13TeV_ossf_met149->SetBinError(29,0.0003050854);
   new_histo_group_Higgs_wh3l_13TeV_ossf_met149->SetBinError(30,0.001230824);
   new_histo_group_Higgs_wh3l_13TeV_ossf_met149->SetBinError(31,0.001661297);
   new_histo_group_Higgs_wh3l_13TeV_ossf_met149->SetBinError(32,0.001792574);
   new_histo_group_Higgs_wh3l_13TeV_ossf_met149->SetBinError(33,0.0002870945);
   new_histo_group_Higgs_wh3l_13TeV_ossf_met149->SetBinError(34,0.001175821);
   new_histo_group_Higgs_wh3l_13TeV_ossf_met149->SetBinError(35,0.0007658713);
   new_histo_group_Higgs_wh3l_13TeV_ossf_met149->SetBinError(36,0.00161891);
   new_histo_group_Higgs_wh3l_13TeV_ossf_met149->SetBinError(38,0.0001986669);
   new_histo_group_Higgs_wh3l_13TeV_ossf_met149->SetBinError(39,0.001712831);
   new_histo_group_Higgs_wh3l_13TeV_ossf_met149->SetBinError(41,0.002377921);
   new_histo_group_Higgs_wh3l_13TeV_ossf_met149->SetEntries(946);
   new_histo_group_Higgs_wh3l_13TeV_ossf_met149->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_13TeV_ossf_met149->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_13TeV_ossf_met149->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_13TeV_ossf_met149->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_13TeV_ossf_met149->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_ossf_met149->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_ossf_met149->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_13TeV_ossf_met149->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_13TeV_ossf_met149->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_ossf_met149->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_ossf_met149->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_13TeV_ossf_met149->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_13TeV_ossf_met149->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_ossf_met149->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_ossf_met149->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_13TeV_ossf_met->Add(new_histo_group_Higgs_wh3l_13TeV_ossf_met,"");
   thsSignal_grouped_wh3l_13TeV_ossf_met->Draw("hist same noclear");
   
   Double_t _fx3029[40] = {
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
   Double_t _fy3029[40] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   3.351174,
   3.292017,
   3.493417,
   1.48469,
   0.6000101,
   0.2995787,
   0.9450793,
   0.1802657,
   1.096423,
   0.1176832,
   -0.01078108,
   0.6138009,
   0.04743417,
   0.9410151,
   0.07153752,
   0.07752274,
   0.03687642,
   0.02323807,
   0.01927328,
   0.00988046,
   0.02842813,
   0.01662978,
   0.01053258,
   0.02028379,
   0.01843559,
   0.01204565,
   0.01148078,
   0.01123944,
   0.01445454,
   0.002637757,
   0.01342807,
   0.00634668};
   Double_t _felx3029[40] = {
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
   Double_t _fely3029[40] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   1.708451,
   1.400984,
   1.457225,
   0.4910421,
   0.320507,
   0.4382284,
   0.6503946,
   0.1833494,
   0.7310633,
   0.0848212,
   0.2493938,
   0.5669503,
   0.08117102,
   0.9200478,
   0.01988938,
   0.04444806,
   0.0146001,
   0.01141468,
   0.01000631,
   0.006767619,
   0.01277508,
   0.009458466,
   0.007368754,
   0.01026351,
   0.01066949,
   0.007045674,
   0.008314284,
   0.007961769,
   0.01951811,
   0.002611914,
   0.008041352,
   0.006367292};
   Double_t _fehx3029[40] = {
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
   Double_t _fehy3029[40] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   1.708296,
   1.400909,
   1.457145,
   0.6055427,
   0.1955426,
   0.2687569,
   0.6503869,
   0.1833542,
   0.7310614,
   0.0848224,
   0.1395023,
   0.5726464,
   0.08116354,
   0.9200472,
   0.01988224,
   0.04441882,
   0.01459636,
   0.01136139,
   0.01001122,
   0.006767559,
   0.01278299,
   0.00945885,
   0.007371601,
   0.01026621,
   0.01066366,
   0.00703932,
   0.008314919,
   0.007962424,
   0.01951426,
   0.002611954,
   0.008040859,
   0.006362736};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(40,_fx3029,_fy3029,_felx3029,_fehx3029,_fely3029,_fehy3029);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(12);
   grae->SetFillStyle(3004);
   grae->SetLineColor(12);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3029 = new TH1F("Graph_Graph3029","",100,0,220);
   Graph_Graph3029->SetMinimum(-0.7921393);
   Graph_Graph3029->SetMaximum(5.591434);
   Graph_Graph3029->SetDirectory(0);
   Graph_Graph3029->SetStats(0);
   Graph_Graph3029->SetLineStyle(0);
   Graph_Graph3029->SetMarkerStyle(20);
   Graph_Graph3029->GetXaxis()->SetLabelFont(42);
   Graph_Graph3029->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3029->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3029->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3029->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3029->GetXaxis()->SetTitleFont(42);
   Graph_Graph3029->GetYaxis()->SetLabelFont(42);
   Graph_Graph3029->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3029->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3029->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3029->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3029->GetYaxis()->SetTitleFont(42);
   Graph_Graph3029->GetZaxis()->SetLabelFont(42);
   Graph_Graph3029->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3029->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3029->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3029->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3029);
   
   grae->Draw("2");
   
   Double_t _fx3030[40] = {
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
   Double_t _fy3030[40] = {
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
   Double_t _felx3030[40] = {
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
   Double_t _fely3030[40] = {
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
   Double_t _fehx3030[40] = {
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
   Double_t _fehy3030[40] = {
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
   grae = new TGraphAsymmErrors(40,_fx3030,_fy3030,_felx3030,_fehx3030,_fely3030,_fehy3030);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(1);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3030 = new TH1F("Graph_Graph3030","",100,0,220);
   Graph_Graph3030->SetMinimum(0);
   Graph_Graph3030->SetMaximum(1.262698);
   Graph_Graph3030->SetDirectory(0);
   Graph_Graph3030->SetStats(0);
   Graph_Graph3030->SetLineStyle(0);
   Graph_Graph3030->SetMarkerStyle(20);
   Graph_Graph3030->GetXaxis()->SetLabelFont(42);
   Graph_Graph3030->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3030->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3030->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3030->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3030->GetXaxis()->SetTitleFont(42);
   Graph_Graph3030->GetYaxis()->SetLabelFont(42);
   Graph_Graph3030->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3030->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3030->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3030->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3030->GetYaxis()->SetTitleFont(42);
   Graph_Graph3030->GetZaxis()->SetLabelFont(42);
   Graph_Graph3030->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3030->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3030->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3030->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3030);
   
   grae->Draw("p0");
   
   TLegend *leg = new TLegend(0.2,0.7,0.8,0.9,NULL,"brNDC");
   leg->SetTextFont(62);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("new_histo_group_Fake_wh3l_13TeV_ossf_met","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_13TeV_ossf_met","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_13TeV_ossf_met","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_13TeV_ossf_met","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_13TeV_ossf_met","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_13TeV_ossf_met","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_13TeV_ossf_met","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_13TeV_ossf_met","Data","EPL");
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
   entry=leg->AddEntry("new_histo_group_Fake_wh3l_13TeV_ossf_met","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_13TeV_ossf_met","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_13TeV_ossf_met","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_13TeV_ossf_met","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_13TeV_ossf_met","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_13TeV_ossf_met","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_13TeV_ossf_met","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_13TeV_ossf_met","Data","EPL");
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
   
   TH1F *hframe_copy150 = new TH1F("hframe_copy150","",1000,0,200);
   hframe_copy150->SetMinimum(0);
   hframe_copy150->SetMaximum(8.880283);
   hframe_copy150->SetDirectory(0);
   hframe_copy150->SetStats(0);
   hframe_copy150->SetLineStyle(0);
   hframe_copy150->SetMarkerStyle(20);
   hframe_copy150->GetXaxis()->SetTitle("pfmet [GeV]");
   hframe_copy150->GetXaxis()->SetNdivisions(506);
   hframe_copy150->GetXaxis()->SetLabelFont(42);
   hframe_copy150->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy150->GetXaxis()->SetLabelSize(0.05);
   hframe_copy150->GetXaxis()->SetTitleSize(0.06);
   hframe_copy150->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy150->GetXaxis()->SetTitleFont(42);
   hframe_copy150->GetYaxis()->SetTitle("Events");
   hframe_copy150->GetYaxis()->SetLabelFont(42);
   hframe_copy150->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy150->GetYaxis()->SetLabelSize(0.05);
   hframe_copy150->GetYaxis()->SetTitleSize(0.06);
   hframe_copy150->GetYaxis()->SetTitleOffset(1.25);
   hframe_copy150->GetYaxis()->SetTitleFont(42);
   hframe_copy150->GetZaxis()->SetLabelFont(42);
   hframe_copy150->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy150->GetZaxis()->SetLabelSize(0.05);
   hframe_copy150->GetZaxis()->SetTitleSize(0.06);
   hframe_copy150->GetZaxis()->SetTitleFont(42);
   hframe_copy150->Draw("sameaxis");
   ccwh3l_13TeV_ossf_met->Modified();
   ccwh3l_13TeV_ossf_met->cd();
   ccwh3l_13TeV_ossf_met->SetSelected(ccwh3l_13TeV_ossf_met);
}
