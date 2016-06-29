void c_wh3l_plot_13TeV_met()
{
//=========Macro generated from canvas: ccwh3l_plot_13TeV_met/cc
//=========  (Wed Jun 29 01:51:39 2016) by ROOT version6.02/13
   TCanvas *ccwh3l_plot_13TeV_met = new TCanvas("ccwh3l_plot_13TeV_met", "cc",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   ccwh3l_plot_13TeV_met->SetHighLightColor(2);
   ccwh3l_plot_13TeV_met->Range(-40,-1.804319,210,12.07506);
   ccwh3l_plot_13TeV_met->SetFillColor(0);
   ccwh3l_plot_13TeV_met->SetBorderMode(0);
   ccwh3l_plot_13TeV_met->SetBorderSize(2);
   ccwh3l_plot_13TeV_met->SetTickx(1);
   ccwh3l_plot_13TeV_met->SetTicky(1);
   ccwh3l_plot_13TeV_met->SetLeftMargin(0.16);
   ccwh3l_plot_13TeV_met->SetRightMargin(0.04);
   ccwh3l_plot_13TeV_met->SetTopMargin(0.05);
   ccwh3l_plot_13TeV_met->SetBottomMargin(0.13);
   ccwh3l_plot_13TeV_met->SetFrameFillStyle(0);
   ccwh3l_plot_13TeV_met->SetFrameBorderMode(0);
   ccwh3l_plot_13TeV_met->SetFrameFillStyle(0);
   ccwh3l_plot_13TeV_met->SetFrameBorderMode(0);
   
   TH1F *hframe141 = new TH1F("hframe141","",1000,0,200);
   hframe141->SetMinimum(0);
   hframe141->SetMaximum(11.38109);
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
   
   THStack *thsBackground_grouped_wh3l_plot_13TeV_met = new THStack();
   thsBackground_grouped_wh3l_plot_13TeV_met->SetName("thsBackground_grouped_wh3l_plot_13TeV_met");
   thsBackground_grouped_wh3l_plot_13TeV_met->SetTitle("thsBackground_grouped_wh3l_plot_13TeV_met");
   
   TH1F *thsBackground_grouped_wh3l_plot_13TeV_met_stack_29 = new TH1F("thsBackground_grouped_wh3l_plot_13TeV_met_stack_29","thsBackground_grouped_wh3l_plot_13TeV_met",40,0,200);
   thsBackground_grouped_wh3l_plot_13TeV_met_stack_29->SetMinimum(-0.2978284);
   thsBackground_grouped_wh3l_plot_13TeV_met_stack_29->SetMaximum(4.780058);
   thsBackground_grouped_wh3l_plot_13TeV_met_stack_29->SetDirectory(0);
   thsBackground_grouped_wh3l_plot_13TeV_met_stack_29->SetStats(0);
   thsBackground_grouped_wh3l_plot_13TeV_met_stack_29->SetLineStyle(0);
   thsBackground_grouped_wh3l_plot_13TeV_met_stack_29->SetMarkerStyle(20);
   thsBackground_grouped_wh3l_plot_13TeV_met_stack_29->GetXaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_plot_13TeV_met_stack_29->GetXaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_plot_13TeV_met_stack_29->GetXaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_plot_13TeV_met_stack_29->GetXaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_plot_13TeV_met_stack_29->GetXaxis()->SetTitleOffset(0.9);
   thsBackground_grouped_wh3l_plot_13TeV_met_stack_29->GetXaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_plot_13TeV_met_stack_29->GetYaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_plot_13TeV_met_stack_29->GetYaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_plot_13TeV_met_stack_29->GetYaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_plot_13TeV_met_stack_29->GetYaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_plot_13TeV_met_stack_29->GetYaxis()->SetTitleOffset(1.25);
   thsBackground_grouped_wh3l_plot_13TeV_met_stack_29->GetYaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_plot_13TeV_met_stack_29->GetZaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_plot_13TeV_met_stack_29->GetZaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_plot_13TeV_met_stack_29->GetZaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_plot_13TeV_met_stack_29->GetZaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_plot_13TeV_met_stack_29->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_plot_13TeV_met->SetHistogram(thsBackground_grouped_wh3l_plot_13TeV_met_stack_29);
   
   
   TH1D *new_histo_group_Fake_wh3l_plot_13TeV_met142 = new TH1D("new_histo_group_Fake_wh3l_plot_13TeV_met142","histo_Fake",40,0,200);
   new_histo_group_Fake_wh3l_plot_13TeV_met142->SetBinContent(9,0.99838);
   new_histo_group_Fake_wh3l_plot_13TeV_met142->SetBinContent(10,1.153169);
   new_histo_group_Fake_wh3l_plot_13TeV_met142->SetBinContent(11,2.735187);
   new_histo_group_Fake_wh3l_plot_13TeV_met142->SetBinContent(12,1.174332);
   new_histo_group_Fake_wh3l_plot_13TeV_met142->SetBinContent(13,0.9477159);
   new_histo_group_Fake_wh3l_plot_13TeV_met142->SetBinContent(14,0.3810413);
   new_histo_group_Fake_wh3l_plot_13TeV_met142->SetBinContent(15,0.5416734);
   new_histo_group_Fake_wh3l_plot_13TeV_met142->SetBinContent(16,0.1425594);
   new_histo_group_Fake_wh3l_plot_13TeV_met142->SetBinContent(17,1.215007);
   new_histo_group_Fake_wh3l_plot_13TeV_met142->SetBinContent(18,-0.05269274);
   new_histo_group_Fake_wh3l_plot_13TeV_met142->SetBinContent(19,-0.0444209);
   new_histo_group_Fake_wh3l_plot_13TeV_met142->SetBinContent(20,0.4113768);
   new_histo_group_Fake_wh3l_plot_13TeV_met142->SetBinContent(21,-0.05601251);
   new_histo_group_Fake_wh3l_plot_13TeV_met142->SetBinContent(22,1.027331);
   new_histo_group_Fake_wh3l_plot_13TeV_met142->SetBinContent(23,0.119216);
   new_histo_group_Fake_wh3l_plot_13TeV_met142->SetBinContent(25,-0.1741594);
   new_histo_group_Fake_wh3l_plot_13TeV_met142->SetBinContent(26,0.08972475);
   new_histo_group_Fake_wh3l_plot_13TeV_met142->SetBinContent(28,-0.006674166);
   new_histo_group_Fake_wh3l_plot_13TeV_met142->SetBinContent(37,-0.008195123);
   new_histo_group_Fake_wh3l_plot_13TeV_met142->SetBinError(9,1.091995);
   new_histo_group_Fake_wh3l_plot_13TeV_met142->SetBinError(10,0.8604807);
   new_histo_group_Fake_wh3l_plot_13TeV_met142->SetBinError(11,1.131523);
   new_histo_group_Fake_wh3l_plot_13TeV_met142->SetBinError(12,0.9025463);
   new_histo_group_Fake_wh3l_plot_13TeV_met142->SetBinError(13,0.6408201);
   new_histo_group_Fake_wh3l_plot_13TeV_met142->SetBinError(14,0.6486743);
   new_histo_group_Fake_wh3l_plot_13TeV_met142->SetBinError(15,0.549266);
   new_histo_group_Fake_wh3l_plot_13TeV_met142->SetBinError(16,0.3088377);
   new_histo_group_Fake_wh3l_plot_13TeV_met142->SetBinError(17,0.7296101);
   new_histo_group_Fake_wh3l_plot_13TeV_met142->SetBinError(18,0.05210733);
   new_histo_group_Fake_wh3l_plot_13TeV_met142->SetBinError(19,0.2341298);
   new_histo_group_Fake_wh3l_plot_13TeV_met142->SetBinError(20,0.5309904);
   new_histo_group_Fake_wh3l_plot_13TeV_met142->SetBinError(21,0.05545482);
   new_histo_group_Fake_wh3l_plot_13TeV_met142->SetBinError(22,0.8574354);
   new_histo_group_Fake_wh3l_plot_13TeV_met142->SetBinError(23,0.1353163);
   new_histo_group_Fake_wh3l_plot_13TeV_met142->SetBinError(25,0.1236689);
   new_histo_group_Fake_wh3l_plot_13TeV_met142->SetBinError(26,0.08835359);
   new_histo_group_Fake_wh3l_plot_13TeV_met142->SetBinError(28,0.006674166);
   new_histo_group_Fake_wh3l_plot_13TeV_met142->SetBinError(37,0.008195123);
   new_histo_group_Fake_wh3l_plot_13TeV_met142->SetEntries(118);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_plot_13TeV_met142->SetFillColor(ci);
   new_histo_group_Fake_wh3l_plot_13TeV_met142->SetFillStyle(3001);

   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_plot_13TeV_met142->SetLineColor(ci);
   new_histo_group_Fake_wh3l_plot_13TeV_met142->GetXaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_plot_13TeV_met142->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_plot_13TeV_met142->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_plot_13TeV_met142->GetXaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_plot_13TeV_met142->GetYaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_plot_13TeV_met142->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_plot_13TeV_met142->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_plot_13TeV_met142->GetYaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_plot_13TeV_met142->GetZaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_plot_13TeV_met142->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_plot_13TeV_met142->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_plot_13TeV_met142->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_plot_13TeV_met->Add(new_histo_group_Fake_wh3l_plot_13TeV_met,"");
   
   TH1D *new_histo_group_WW_wh3l_plot_13TeV_met143 = new TH1D("new_histo_group_WW_wh3l_plot_13TeV_met143","histo_WW",40,0,200);
   new_histo_group_WW_wh3l_plot_13TeV_met143->SetBinContent(9,0.0303325);
   new_histo_group_WW_wh3l_plot_13TeV_met143->SetBinContent(10,0.03345312);
   new_histo_group_WW_wh3l_plot_13TeV_met143->SetBinContent(13,0.01447441);
   new_histo_group_WW_wh3l_plot_13TeV_met143->SetBinContent(16,0.01044191);
   new_histo_group_WW_wh3l_plot_13TeV_met143->SetBinError(9,0.02149105);
   new_histo_group_WW_wh3l_plot_13TeV_met143->SetBinError(10,0.02374035);
   new_histo_group_WW_wh3l_plot_13TeV_met143->SetBinError(13,0.01447441);
   new_histo_group_WW_wh3l_plot_13TeV_met143->SetBinError(16,0.01044191);
   new_histo_group_WW_wh3l_plot_13TeV_met143->SetEntries(6);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_plot_13TeV_met143->SetFillColor(ci);
   new_histo_group_WW_wh3l_plot_13TeV_met143->SetFillStyle(3001);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_plot_13TeV_met143->SetLineColor(ci);
   new_histo_group_WW_wh3l_plot_13TeV_met143->GetXaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_plot_13TeV_met143->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_plot_13TeV_met143->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_plot_13TeV_met143->GetXaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_plot_13TeV_met143->GetYaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_plot_13TeV_met143->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_plot_13TeV_met143->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_plot_13TeV_met143->GetYaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_plot_13TeV_met143->GetZaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_plot_13TeV_met143->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_plot_13TeV_met143->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_plot_13TeV_met143->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_plot_13TeV_met->Add(new_histo_group_WW_wh3l_plot_13TeV_met,"");
   
   TH1D *new_histo_group_VVV_wh3l_plot_13TeV_met144 = new TH1D("new_histo_group_VVV_wh3l_plot_13TeV_met144","histo_VVV",40,0,200);
   new_histo_group_VVV_wh3l_plot_13TeV_met144->SetBinContent(9,0.0007790172);
   new_histo_group_VVV_wh3l_plot_13TeV_met144->SetBinContent(10,0.00217122);
   new_histo_group_VVV_wh3l_plot_13TeV_met144->SetBinContent(11,0.001412966);
   new_histo_group_VVV_wh3l_plot_13TeV_met144->SetBinContent(12,0.002275849);
   new_histo_group_VVV_wh3l_plot_13TeV_met144->SetBinContent(13,0.001631847);
   new_histo_group_VVV_wh3l_plot_13TeV_met144->SetBinContent(14,0.001784694);
   new_histo_group_VVV_wh3l_plot_13TeV_met144->SetBinContent(20,0.0002122233);
   new_histo_group_VVV_wh3l_plot_13TeV_met144->SetBinContent(22,0.0006343185);
   new_histo_group_VVV_wh3l_plot_13TeV_met144->SetBinContent(23,0.0006504452);
   new_histo_group_VVV_wh3l_plot_13TeV_met144->SetBinContent(27,0.0007784473);
   new_histo_group_VVV_wh3l_plot_13TeV_met144->SetBinContent(35,0.0006405607);
   new_histo_group_VVV_wh3l_plot_13TeV_met144->SetBinContent(41,0.0005490761);
   new_histo_group_VVV_wh3l_plot_13TeV_met144->SetBinError(9,0.0006436421);
   new_histo_group_VVV_wh3l_plot_13TeV_met144->SetBinError(10,0.001098544);
   new_histo_group_VVV_wh3l_plot_13TeV_met144->SetBinError(11,0.0008855644);
   new_histo_group_VVV_wh3l_plot_13TeV_met144->SetBinError(12,0.001141335);
   new_histo_group_VVV_wh3l_plot_13TeV_met144->SetBinError(13,0.0009923548);
   new_histo_group_VVV_wh3l_plot_13TeV_met144->SetBinError(14,0.001050476);
   new_histo_group_VVV_wh3l_plot_13TeV_met144->SetBinError(20,0.0002122233);
   new_histo_group_VVV_wh3l_plot_13TeV_met144->SetBinError(22,0.0006343185);
   new_histo_group_VVV_wh3l_plot_13TeV_met144->SetBinError(23,0.0006504452);
   new_histo_group_VVV_wh3l_plot_13TeV_met144->SetBinError(27,0.0007784473);
   new_histo_group_VVV_wh3l_plot_13TeV_met144->SetBinError(35,0.0006405607);
   new_histo_group_VVV_wh3l_plot_13TeV_met144->SetBinError(41,0.0005490761);
   new_histo_group_VVV_wh3l_plot_13TeV_met144->SetEntries(25);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_plot_13TeV_met144->SetFillColor(ci);
   new_histo_group_VVV_wh3l_plot_13TeV_met144->SetFillStyle(3001);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_plot_13TeV_met144->SetLineColor(ci);
   new_histo_group_VVV_wh3l_plot_13TeV_met144->GetXaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_plot_13TeV_met144->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_plot_13TeV_met144->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_plot_13TeV_met144->GetXaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_plot_13TeV_met144->GetYaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_plot_13TeV_met144->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_plot_13TeV_met144->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_plot_13TeV_met144->GetYaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_plot_13TeV_met144->GetZaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_plot_13TeV_met144->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_plot_13TeV_met144->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_plot_13TeV_met144->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_plot_13TeV_met->Add(new_histo_group_VVV_wh3l_plot_13TeV_met,"");
   
   TH1D *new_histo_group_Vg_wh3l_plot_13TeV_met145 = new TH1D("new_histo_group_Vg_wh3l_plot_13TeV_met145","histo_Vg",40,0,200);
   new_histo_group_Vg_wh3l_plot_13TeV_met145->SetBinContent(9,0.9327583);
   new_histo_group_Vg_wh3l_plot_13TeV_met145->SetBinContent(10,0.9591974);
   new_histo_group_Vg_wh3l_plot_13TeV_met145->SetBinContent(11,0.4091599);
   new_histo_group_Vg_wh3l_plot_13TeV_met145->SetBinContent(12,0.4529023);
   new_histo_group_Vg_wh3l_plot_13TeV_met145->SetBinError(9,0.3944573);
   new_histo_group_Vg_wh3l_plot_13TeV_met145->SetBinError(10,0.3172936);
   new_histo_group_Vg_wh3l_plot_13TeV_met145->SetBinError(11,0.1891369);
   new_histo_group_Vg_wh3l_plot_13TeV_met145->SetBinError(12,0.2100381);
   new_histo_group_Vg_wh3l_plot_13TeV_met145->SetEntries(43);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_plot_13TeV_met145->SetFillColor(ci);
   new_histo_group_Vg_wh3l_plot_13TeV_met145->SetFillStyle(3001);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_plot_13TeV_met145->SetLineColor(ci);
   new_histo_group_Vg_wh3l_plot_13TeV_met145->GetXaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_plot_13TeV_met145->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_plot_13TeV_met145->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_plot_13TeV_met145->GetXaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_plot_13TeV_met145->GetYaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_plot_13TeV_met145->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_plot_13TeV_met145->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_plot_13TeV_met145->GetYaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_plot_13TeV_met145->GetZaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_plot_13TeV_met145->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_plot_13TeV_met145->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_plot_13TeV_met145->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_plot_13TeV_met->Add(new_histo_group_Vg_wh3l_plot_13TeV_met,"");
   
   TH1D *new_histo_group_ZZ_wh3l_plot_13TeV_met146 = new TH1D("new_histo_group_ZZ_wh3l_plot_13TeV_met146","histo_ZZ",40,0,200);
   new_histo_group_ZZ_wh3l_plot_13TeV_met146->SetBinContent(9,0.1619121);
   new_histo_group_ZZ_wh3l_plot_13TeV_met146->SetBinContent(10,0.1514073);
   new_histo_group_ZZ_wh3l_plot_13TeV_met146->SetBinContent(11,0.1278668);
   new_histo_group_ZZ_wh3l_plot_13TeV_met146->SetBinContent(12,0.04271351);
   new_histo_group_ZZ_wh3l_plot_13TeV_met146->SetBinContent(13,0.07189054);
   new_histo_group_ZZ_wh3l_plot_13TeV_met146->SetBinContent(15,0.02711696);
   new_histo_group_ZZ_wh3l_plot_13TeV_met146->SetBinContent(24,0.02856258);
   new_histo_group_ZZ_wh3l_plot_13TeV_met146->SetBinContent(33,0.03513683);
   new_histo_group_ZZ_wh3l_plot_13TeV_met146->SetBinError(9,0.08296664);
   new_histo_group_ZZ_wh3l_plot_13TeV_met146->SetBinError(10,0.07657922);
   new_histo_group_ZZ_wh3l_plot_13TeV_met146->SetBinError(11,0.07072701);
   new_histo_group_ZZ_wh3l_plot_13TeV_met146->SetBinError(12,0.0427135);
   new_histo_group_ZZ_wh3l_plot_13TeV_met146->SetBinError(13,0.05189561);
   new_histo_group_ZZ_wh3l_plot_13TeV_met146->SetBinError(15,0.02711696);
   new_histo_group_ZZ_wh3l_plot_13TeV_met146->SetBinError(24,0.02856258);
   new_histo_group_ZZ_wh3l_plot_13TeV_met146->SetBinError(33,0.03513683);
   new_histo_group_ZZ_wh3l_plot_13TeV_met146->SetEntries(19);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_plot_13TeV_met146->SetFillColor(ci);
   new_histo_group_ZZ_wh3l_plot_13TeV_met146->SetFillStyle(3001);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_plot_13TeV_met146->SetLineColor(ci);
   new_histo_group_ZZ_wh3l_plot_13TeV_met146->GetXaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_plot_13TeV_met146->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_plot_13TeV_met146->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_plot_13TeV_met146->GetXaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_plot_13TeV_met146->GetYaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_plot_13TeV_met146->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_plot_13TeV_met146->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_plot_13TeV_met146->GetYaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_plot_13TeV_met146->GetZaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_plot_13TeV_met146->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_plot_13TeV_met146->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_plot_13TeV_met146->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_plot_13TeV_met->Add(new_histo_group_ZZ_wh3l_plot_13TeV_met,"");
   
   TH1D *new_histo_group_WZ_wh3l_plot_13TeV_met147 = new TH1D("new_histo_group_WZ_wh3l_plot_13TeV_met147","histo_WZ",40,0,200);
   new_histo_group_WZ_wh3l_plot_13TeV_met147->SetBinContent(9,1.461308);
   new_histo_group_WZ_wh3l_plot_13TeV_met147->SetBinContent(10,1.43554);
   new_histo_group_WZ_wh3l_plot_13TeV_met147->SetBinContent(11,1.186993);
   new_histo_group_WZ_wh3l_plot_13TeV_met147->SetBinContent(12,1.093505);
   new_histo_group_WZ_wh3l_plot_13TeV_met147->SetBinContent(13,0.7509788);
   new_histo_group_WZ_wh3l_plot_13TeV_met147->SetBinContent(14,0.6795345);
   new_histo_group_WZ_wh3l_plot_13TeV_met147->SetBinContent(15,0.5173764);
   new_histo_group_WZ_wh3l_plot_13TeV_met147->SetBinContent(16,0.4053558);
   new_histo_group_WZ_wh3l_plot_13TeV_met147->SetBinContent(17,0.3205807);
   new_histo_group_WZ_wh3l_plot_13TeV_met147->SetBinContent(18,0.2606384);
   new_histo_group_WZ_wh3l_plot_13TeV_met147->SetBinContent(19,0.1653567);
   new_histo_group_WZ_wh3l_plot_13TeV_met147->SetBinContent(20,0.165102);
   new_histo_group_WZ_wh3l_plot_13TeV_met147->SetBinContent(21,0.185146);
   new_histo_group_WZ_wh3l_plot_13TeV_met147->SetBinContent(22,0.1375776);
   new_histo_group_WZ_wh3l_plot_13TeV_met147->SetBinContent(23,0.08004025);
   new_histo_group_WZ_wh3l_plot_13TeV_met147->SetBinContent(24,0.06810781);
   new_histo_group_WZ_wh3l_plot_13TeV_met147->SetBinContent(25,0.06956016);
   new_histo_group_WZ_wh3l_plot_13TeV_met147->SetBinContent(26,0.03543945);
   new_histo_group_WZ_wh3l_plot_13TeV_met147->SetBinContent(27,0.03038646);
   new_histo_group_WZ_wh3l_plot_13TeV_met147->SetBinContent(28,0.02112059);
   new_histo_group_WZ_wh3l_plot_13TeV_met147->SetBinContent(29,0.03026687);
   new_histo_group_WZ_wh3l_plot_13TeV_met147->SetBinContent(30,0.02346947);
   new_histo_group_WZ_wh3l_plot_13TeV_met147->SetBinContent(31,0.02888142);
   new_histo_group_WZ_wh3l_plot_13TeV_met147->SetBinContent(32,0.03072592);
   new_histo_group_WZ_wh3l_plot_13TeV_met147->SetBinContent(33,0.02349149);
   new_histo_group_WZ_wh3l_plot_13TeV_met147->SetBinContent(34,0.02155747);
   new_histo_group_WZ_wh3l_plot_13TeV_met147->SetBinContent(35,0.02235717);
   new_histo_group_WZ_wh3l_plot_13TeV_met147->SetBinContent(36,0.01123944);
   new_histo_group_WZ_wh3l_plot_13TeV_met147->SetBinContent(37,0.02764854);
   new_histo_group_WZ_wh3l_plot_13TeV_met147->SetBinContent(38,0.002637757);
   new_histo_group_WZ_wh3l_plot_13TeV_met147->SetBinContent(39,0.01853313);
   new_histo_group_WZ_wh3l_plot_13TeV_met147->SetBinContent(40,0.008730846);
   new_histo_group_WZ_wh3l_plot_13TeV_met147->SetBinContent(41,0.1572888);
   new_histo_group_WZ_wh3l_plot_13TeV_met147->SetBinError(9,0.08916556);
   new_histo_group_WZ_wh3l_plot_13TeV_met147->SetBinError(10,0.08834986);
   new_histo_group_WZ_wh3l_plot_13TeV_met147->SetBinError(11,0.08069314);
   new_histo_group_WZ_wh3l_plot_13TeV_met147->SetBinError(12,0.07755645);
   new_histo_group_WZ_wh3l_plot_13TeV_met147->SetBinError(13,0.06386641);
   new_histo_group_WZ_wh3l_plot_13TeV_met147->SetBinError(14,0.06056897);
   new_histo_group_WZ_wh3l_plot_13TeV_met147->SetBinError(15,0.05291383);
   new_histo_group_WZ_wh3l_plot_13TeV_met147->SetBinError(16,0.04685931);
   new_histo_group_WZ_wh3l_plot_13TeV_met147->SetBinError(17,0.04119868);
   new_histo_group_WZ_wh3l_plot_13TeV_met147->SetBinError(18,0.03749565);
   new_histo_group_WZ_wh3l_plot_13TeV_met147->SetBinError(19,0.02870971);
   new_histo_group_WZ_wh3l_plot_13TeV_met147->SetBinError(20,0.02982306);
   new_histo_group_WZ_wh3l_plot_13TeV_met147->SetBinError(21,0.03196062);
   new_histo_group_WZ_wh3l_plot_13TeV_met147->SetBinError(22,0.02749561);
   new_histo_group_WZ_wh3l_plot_13TeV_met147->SetBinError(23,0.02022515);
   new_histo_group_WZ_wh3l_plot_13TeV_met147->SetBinError(24,0.01883037);
   new_histo_group_WZ_wh3l_plot_13TeV_met147->SetBinError(25,0.01960446);
   new_histo_group_WZ_wh3l_plot_13TeV_met147->SetBinError(26,0.01423327);
   new_histo_group_WZ_wh3l_plot_13TeV_met147->SetBinError(27,0.01268113);
   new_histo_group_WZ_wh3l_plot_13TeV_met147->SetBinError(28,0.01044943);
   new_histo_group_WZ_wh3l_plot_13TeV_met147->SetBinError(29,0.01287621);
   new_histo_group_WZ_wh3l_plot_13TeV_met147->SetBinError(30,0.01111583);
   new_histo_group_WZ_wh3l_plot_13TeV_met147->SetBinError(31,0.01292358);
   new_histo_group_WZ_wh3l_plot_13TeV_met147->SetBinError(32,0.01225916);
   new_histo_group_WZ_wh3l_plot_13TeV_met147->SetBinError(33,0.01179292);
   new_histo_group_WZ_wh3l_plot_13TeV_met147->SetBinError(34,0.009819687);
   new_histo_group_WZ_wh3l_plot_13TeV_met147->SetBinError(35,0.01126499);
   new_histo_group_WZ_wh3l_plot_13TeV_met147->SetBinError(36,0.007952499);
   new_histo_group_WZ_wh3l_plot_13TeV_met147->SetBinError(37,0.01217217);
   new_histo_group_WZ_wh3l_plot_13TeV_met147->SetBinError(38,0.002610874);
   new_histo_group_WZ_wh3l_plot_13TeV_met147->SetBinError(39,0.009504185);
   new_histo_group_WZ_wh3l_plot_13TeV_met147->SetBinError(40,0.006779719);
   new_histo_group_WZ_wh3l_plot_13TeV_met147->SetBinError(41,0.02911181);
   new_histo_group_WZ_wh3l_plot_13TeV_met147->SetEntries(1945);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_plot_13TeV_met147->SetFillColor(ci);
   new_histo_group_WZ_wh3l_plot_13TeV_met147->SetFillStyle(3001);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_plot_13TeV_met147->SetLineColor(ci);
   new_histo_group_WZ_wh3l_plot_13TeV_met147->GetXaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_plot_13TeV_met147->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_plot_13TeV_met147->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_plot_13TeV_met147->GetXaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_plot_13TeV_met147->GetYaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_plot_13TeV_met147->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_plot_13TeV_met147->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_plot_13TeV_met147->GetYaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_plot_13TeV_met147->GetZaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_plot_13TeV_met147->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_plot_13TeV_met147->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_plot_13TeV_met147->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_plot_13TeV_met->Add(new_histo_group_WZ_wh3l_plot_13TeV_met,"");
   
   TH1D *new_histo_group_Higgs_wh3l_plot_13TeV_met148 = new TH1D("new_histo_group_Higgs_wh3l_plot_13TeV_met148","histo_H_htt",40,0,200);
   new_histo_group_Higgs_wh3l_plot_13TeV_met148->SetBinContent(9,0.1133113);
   new_histo_group_Higgs_wh3l_plot_13TeV_met148->SetBinContent(10,0.07640479);
   new_histo_group_Higgs_wh3l_plot_13TeV_met148->SetBinContent(11,0.09181707);
   new_histo_group_Higgs_wh3l_plot_13TeV_met148->SetBinContent(12,0.05335606);
   new_histo_group_Higgs_wh3l_plot_13TeV_met148->SetBinContent(13,0.06085159);
   new_histo_group_Higgs_wh3l_plot_13TeV_met148->SetBinContent(14,0.06878171);
   new_histo_group_Higgs_wh3l_plot_13TeV_met148->SetBinContent(15,0.05592964);
   new_histo_group_Higgs_wh3l_plot_13TeV_met148->SetBinContent(16,0.05188913);
   new_histo_group_Higgs_wh3l_plot_13TeV_met148->SetBinContent(17,0.04462155);
   new_histo_group_Higgs_wh3l_plot_13TeV_met148->SetBinContent(18,0.0411532);
   new_histo_group_Higgs_wh3l_plot_13TeV_met148->SetBinContent(19,0.03831102);
   new_histo_group_Higgs_wh3l_plot_13TeV_met148->SetBinContent(20,0.02296404);
   new_histo_group_Higgs_wh3l_plot_13TeV_met148->SetBinContent(21,0.02459011);
   new_histo_group_Higgs_wh3l_plot_13TeV_met148->SetBinContent(22,0.02267602);
   new_histo_group_Higgs_wh3l_plot_13TeV_met148->SetBinContent(23,0.01821363);
   new_histo_group_Higgs_wh3l_plot_13TeV_met148->SetBinContent(24,0.0100092);
   new_histo_group_Higgs_wh3l_plot_13TeV_met148->SetBinContent(25,0.005155546);
   new_histo_group_Higgs_wh3l_plot_13TeV_met148->SetBinContent(26,0.005650542);
   new_histo_group_Higgs_wh3l_plot_13TeV_met148->SetBinContent(27,0.007949331);
   new_histo_group_Higgs_wh3l_plot_13TeV_met148->SetBinContent(28,0.005979878);
   new_histo_group_Higgs_wh3l_plot_13TeV_met148->SetBinContent(29,0.0003050854);
   new_histo_group_Higgs_wh3l_plot_13TeV_met148->SetBinContent(30,0.001676727);
   new_histo_group_Higgs_wh3l_plot_13TeV_met148->SetBinContent(31,0.002416236);
   new_histo_group_Higgs_wh3l_plot_13TeV_met148->SetBinContent(32,0.002680088);
   new_histo_group_Higgs_wh3l_plot_13TeV_met148->SetBinContent(33,0.0002870945);
   new_histo_group_Higgs_wh3l_plot_13TeV_met148->SetBinContent(34,0.001635037);
   new_histo_group_Higgs_wh3l_plot_13TeV_met148->SetBinContent(35,0.00221761);
   new_histo_group_Higgs_wh3l_plot_13TeV_met148->SetBinContent(36,0.002324693);
   new_histo_group_Higgs_wh3l_plot_13TeV_met148->SetBinContent(37,0.0002200187);
   new_histo_group_Higgs_wh3l_plot_13TeV_met148->SetBinContent(38,0.0001986669);
   new_histo_group_Higgs_wh3l_plot_13TeV_met148->SetBinContent(39,0.002418081);
   new_histo_group_Higgs_wh3l_plot_13TeV_met148->SetBinContent(41,0.005465086);
   new_histo_group_Higgs_wh3l_plot_13TeV_met148->SetBinError(9,0.01122115);
   new_histo_group_Higgs_wh3l_plot_13TeV_met148->SetBinError(10,0.008954865);
   new_histo_group_Higgs_wh3l_plot_13TeV_met148->SetBinError(11,0.009726714);
   new_histo_group_Higgs_wh3l_plot_13TeV_met148->SetBinError(12,0.007645774);
   new_histo_group_Higgs_wh3l_plot_13TeV_met148->SetBinError(13,0.009006466);
   new_histo_group_Higgs_wh3l_plot_13TeV_met148->SetBinError(14,0.009138649);
   new_histo_group_Higgs_wh3l_plot_13TeV_met148->SetBinError(15,0.008050278);
   new_histo_group_Higgs_wh3l_plot_13TeV_met148->SetBinError(16,0.007708275);
   new_histo_group_Higgs_wh3l_plot_13TeV_met148->SetBinError(17,0.007571394);
   new_histo_group_Higgs_wh3l_plot_13TeV_met148->SetBinError(18,0.007047335);
   new_histo_group_Higgs_wh3l_plot_13TeV_met148->SetBinError(19,0.007445635);
   new_histo_group_Higgs_wh3l_plot_13TeV_met148->SetBinError(20,0.004803986);
   new_histo_group_Higgs_wh3l_plot_13TeV_met148->SetBinError(21,0.005555955);
   new_histo_group_Higgs_wh3l_plot_13TeV_met148->SetBinError(22,0.005364827);
   new_histo_group_Higgs_wh3l_plot_13TeV_met148->SetBinError(23,0.005079565);
   new_histo_group_Higgs_wh3l_plot_13TeV_met148->SetBinError(24,0.003359873);
   new_histo_group_Higgs_wh3l_plot_13TeV_met148->SetBinError(25,0.002351029);
   new_histo_group_Higgs_wh3l_plot_13TeV_met148->SetBinError(26,0.003230786);
   new_histo_group_Higgs_wh3l_plot_13TeV_met148->SetBinError(27,0.003557908);
   new_histo_group_Higgs_wh3l_plot_13TeV_met148->SetBinError(28,0.002766112);
   new_histo_group_Higgs_wh3l_plot_13TeV_met148->SetBinError(29,0.0003050854);
   new_histo_group_Higgs_wh3l_plot_13TeV_met148->SetBinError(30,0.001230824);
   new_histo_group_Higgs_wh3l_plot_13TeV_met148->SetBinError(31,0.001661297);
   new_histo_group_Higgs_wh3l_plot_13TeV_met148->SetBinError(32,0.001792574);
   new_histo_group_Higgs_wh3l_plot_13TeV_met148->SetBinError(33,0.0002870945);
   new_histo_group_Higgs_wh3l_plot_13TeV_met148->SetBinError(34,0.001175821);
   new_histo_group_Higgs_wh3l_plot_13TeV_met148->SetBinError(35,0.0009676967);
   new_histo_group_Higgs_wh3l_plot_13TeV_met148->SetBinError(36,0.001642078);
   new_histo_group_Higgs_wh3l_plot_13TeV_met148->SetBinError(37,0.0002200187);
   new_histo_group_Higgs_wh3l_plot_13TeV_met148->SetBinError(38,0.0001986669);
   new_histo_group_Higgs_wh3l_plot_13TeV_met148->SetBinError(39,0.001712831);
   new_histo_group_Higgs_wh3l_plot_13TeV_met148->SetBinError(41,0.002635342);
   new_histo_group_Higgs_wh3l_plot_13TeV_met148->SetEntries(1365);
   new_histo_group_Higgs_wh3l_plot_13TeV_met148->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_plot_13TeV_met148->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_plot_13TeV_met148->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_plot_13TeV_met148->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_plot_13TeV_met148->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_plot_13TeV_met148->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_plot_13TeV_met148->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_plot_13TeV_met148->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_plot_13TeV_met148->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_plot_13TeV_met148->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_plot_13TeV_met148->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_plot_13TeV_met148->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_plot_13TeV_met148->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_plot_13TeV_met148->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_plot_13TeV_met148->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_plot_13TeV_met->Add(new_histo_group_Higgs_wh3l_plot_13TeV_met,"");
   thsBackground_grouped_wh3l_plot_13TeV_met->Draw("hist same");
   
   thsSignal_grouped_wh3l_plot_13TeV_met = new THStack();
   thsSignal_grouped_wh3l_plot_13TeV_met->SetName("thsSignal_grouped_wh3l_plot_13TeV_met");
   thsSignal_grouped_wh3l_plot_13TeV_met->SetTitle("thsSignal_grouped_wh3l_plot_13TeV_met");
   
   TH1F *thsSignal_grouped_wh3l_plot_13TeV_met_stack_30 = new TH1F("thsSignal_grouped_wh3l_plot_13TeV_met_stack_30","thsSignal_grouped_wh3l_plot_13TeV_met",40,0,200);
   thsSignal_grouped_wh3l_plot_13TeV_met_stack_30->SetMinimum(0);
   thsSignal_grouped_wh3l_plot_13TeV_met_stack_30->SetMaximum(0.130759);
   thsSignal_grouped_wh3l_plot_13TeV_met_stack_30->SetDirectory(0);
   thsSignal_grouped_wh3l_plot_13TeV_met_stack_30->SetStats(0);
   thsSignal_grouped_wh3l_plot_13TeV_met_stack_30->SetLineStyle(0);
   thsSignal_grouped_wh3l_plot_13TeV_met_stack_30->SetMarkerStyle(20);
   thsSignal_grouped_wh3l_plot_13TeV_met_stack_30->GetXaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_plot_13TeV_met_stack_30->GetXaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_plot_13TeV_met_stack_30->GetXaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_plot_13TeV_met_stack_30->GetXaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_plot_13TeV_met_stack_30->GetXaxis()->SetTitleOffset(0.9);
   thsSignal_grouped_wh3l_plot_13TeV_met_stack_30->GetXaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_plot_13TeV_met_stack_30->GetYaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_plot_13TeV_met_stack_30->GetYaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_plot_13TeV_met_stack_30->GetYaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_plot_13TeV_met_stack_30->GetYaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_plot_13TeV_met_stack_30->GetYaxis()->SetTitleOffset(1.25);
   thsSignal_grouped_wh3l_plot_13TeV_met_stack_30->GetYaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_plot_13TeV_met_stack_30->GetZaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_plot_13TeV_met_stack_30->GetZaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_plot_13TeV_met_stack_30->GetZaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_plot_13TeV_met_stack_30->GetZaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_plot_13TeV_met_stack_30->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_plot_13TeV_met->SetHistogram(thsSignal_grouped_wh3l_plot_13TeV_met_stack_30);
   
   
   TH1D *new_histo_group_Higgs_wh3l_plot_13TeV_met149 = new TH1D("new_histo_group_Higgs_wh3l_plot_13TeV_met149","histo_H_htt",40,0,200);
   new_histo_group_Higgs_wh3l_plot_13TeV_met149->SetBinContent(9,0.1133113);
   new_histo_group_Higgs_wh3l_plot_13TeV_met149->SetBinContent(10,0.07640479);
   new_histo_group_Higgs_wh3l_plot_13TeV_met149->SetBinContent(11,0.09181707);
   new_histo_group_Higgs_wh3l_plot_13TeV_met149->SetBinContent(12,0.05335606);
   new_histo_group_Higgs_wh3l_plot_13TeV_met149->SetBinContent(13,0.06085159);
   new_histo_group_Higgs_wh3l_plot_13TeV_met149->SetBinContent(14,0.06878171);
   new_histo_group_Higgs_wh3l_plot_13TeV_met149->SetBinContent(15,0.05592964);
   new_histo_group_Higgs_wh3l_plot_13TeV_met149->SetBinContent(16,0.05188913);
   new_histo_group_Higgs_wh3l_plot_13TeV_met149->SetBinContent(17,0.04462155);
   new_histo_group_Higgs_wh3l_plot_13TeV_met149->SetBinContent(18,0.0411532);
   new_histo_group_Higgs_wh3l_plot_13TeV_met149->SetBinContent(19,0.03831102);
   new_histo_group_Higgs_wh3l_plot_13TeV_met149->SetBinContent(20,0.02296404);
   new_histo_group_Higgs_wh3l_plot_13TeV_met149->SetBinContent(21,0.02459011);
   new_histo_group_Higgs_wh3l_plot_13TeV_met149->SetBinContent(22,0.02267602);
   new_histo_group_Higgs_wh3l_plot_13TeV_met149->SetBinContent(23,0.01821363);
   new_histo_group_Higgs_wh3l_plot_13TeV_met149->SetBinContent(24,0.0100092);
   new_histo_group_Higgs_wh3l_plot_13TeV_met149->SetBinContent(25,0.005155546);
   new_histo_group_Higgs_wh3l_plot_13TeV_met149->SetBinContent(26,0.005650542);
   new_histo_group_Higgs_wh3l_plot_13TeV_met149->SetBinContent(27,0.007949331);
   new_histo_group_Higgs_wh3l_plot_13TeV_met149->SetBinContent(28,0.005979878);
   new_histo_group_Higgs_wh3l_plot_13TeV_met149->SetBinContent(29,0.0003050854);
   new_histo_group_Higgs_wh3l_plot_13TeV_met149->SetBinContent(30,0.001676727);
   new_histo_group_Higgs_wh3l_plot_13TeV_met149->SetBinContent(31,0.002416236);
   new_histo_group_Higgs_wh3l_plot_13TeV_met149->SetBinContent(32,0.002680088);
   new_histo_group_Higgs_wh3l_plot_13TeV_met149->SetBinContent(33,0.0002870945);
   new_histo_group_Higgs_wh3l_plot_13TeV_met149->SetBinContent(34,0.001635037);
   new_histo_group_Higgs_wh3l_plot_13TeV_met149->SetBinContent(35,0.00221761);
   new_histo_group_Higgs_wh3l_plot_13TeV_met149->SetBinContent(36,0.002324693);
   new_histo_group_Higgs_wh3l_plot_13TeV_met149->SetBinContent(37,0.0002200187);
   new_histo_group_Higgs_wh3l_plot_13TeV_met149->SetBinContent(38,0.0001986669);
   new_histo_group_Higgs_wh3l_plot_13TeV_met149->SetBinContent(39,0.002418081);
   new_histo_group_Higgs_wh3l_plot_13TeV_met149->SetBinContent(41,0.005465086);
   new_histo_group_Higgs_wh3l_plot_13TeV_met149->SetBinError(9,0.01122115);
   new_histo_group_Higgs_wh3l_plot_13TeV_met149->SetBinError(10,0.008954865);
   new_histo_group_Higgs_wh3l_plot_13TeV_met149->SetBinError(11,0.009726714);
   new_histo_group_Higgs_wh3l_plot_13TeV_met149->SetBinError(12,0.007645774);
   new_histo_group_Higgs_wh3l_plot_13TeV_met149->SetBinError(13,0.009006466);
   new_histo_group_Higgs_wh3l_plot_13TeV_met149->SetBinError(14,0.009138649);
   new_histo_group_Higgs_wh3l_plot_13TeV_met149->SetBinError(15,0.008050278);
   new_histo_group_Higgs_wh3l_plot_13TeV_met149->SetBinError(16,0.007708275);
   new_histo_group_Higgs_wh3l_plot_13TeV_met149->SetBinError(17,0.007571394);
   new_histo_group_Higgs_wh3l_plot_13TeV_met149->SetBinError(18,0.007047335);
   new_histo_group_Higgs_wh3l_plot_13TeV_met149->SetBinError(19,0.007445635);
   new_histo_group_Higgs_wh3l_plot_13TeV_met149->SetBinError(20,0.004803986);
   new_histo_group_Higgs_wh3l_plot_13TeV_met149->SetBinError(21,0.005555955);
   new_histo_group_Higgs_wh3l_plot_13TeV_met149->SetBinError(22,0.005364827);
   new_histo_group_Higgs_wh3l_plot_13TeV_met149->SetBinError(23,0.005079565);
   new_histo_group_Higgs_wh3l_plot_13TeV_met149->SetBinError(24,0.003359873);
   new_histo_group_Higgs_wh3l_plot_13TeV_met149->SetBinError(25,0.002351029);
   new_histo_group_Higgs_wh3l_plot_13TeV_met149->SetBinError(26,0.003230786);
   new_histo_group_Higgs_wh3l_plot_13TeV_met149->SetBinError(27,0.003557908);
   new_histo_group_Higgs_wh3l_plot_13TeV_met149->SetBinError(28,0.002766112);
   new_histo_group_Higgs_wh3l_plot_13TeV_met149->SetBinError(29,0.0003050854);
   new_histo_group_Higgs_wh3l_plot_13TeV_met149->SetBinError(30,0.001230824);
   new_histo_group_Higgs_wh3l_plot_13TeV_met149->SetBinError(31,0.001661297);
   new_histo_group_Higgs_wh3l_plot_13TeV_met149->SetBinError(32,0.001792574);
   new_histo_group_Higgs_wh3l_plot_13TeV_met149->SetBinError(33,0.0002870945);
   new_histo_group_Higgs_wh3l_plot_13TeV_met149->SetBinError(34,0.001175821);
   new_histo_group_Higgs_wh3l_plot_13TeV_met149->SetBinError(35,0.0009676967);
   new_histo_group_Higgs_wh3l_plot_13TeV_met149->SetBinError(36,0.001642078);
   new_histo_group_Higgs_wh3l_plot_13TeV_met149->SetBinError(37,0.0002200187);
   new_histo_group_Higgs_wh3l_plot_13TeV_met149->SetBinError(38,0.0001986669);
   new_histo_group_Higgs_wh3l_plot_13TeV_met149->SetBinError(39,0.001712831);
   new_histo_group_Higgs_wh3l_plot_13TeV_met149->SetBinError(41,0.002635342);
   new_histo_group_Higgs_wh3l_plot_13TeV_met149->SetEntries(1365);
   new_histo_group_Higgs_wh3l_plot_13TeV_met149->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_plot_13TeV_met149->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_plot_13TeV_met149->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_plot_13TeV_met149->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_plot_13TeV_met149->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_plot_13TeV_met149->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_plot_13TeV_met149->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_plot_13TeV_met149->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_plot_13TeV_met149->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_plot_13TeV_met149->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_plot_13TeV_met149->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_plot_13TeV_met149->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_plot_13TeV_met149->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_plot_13TeV_met149->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_plot_13TeV_met149->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_plot_13TeV_met->Add(new_histo_group_Higgs_wh3l_plot_13TeV_met,"");
   thsSignal_grouped_wh3l_plot_13TeV_met->Draw("hist same noclear");
   
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
   3.58547,
   3.734938,
   4.460619,
   2.765729,
   1.786692,
   1.062361,
   1.086167,
   0.5583571,
   1.535588,
   0.2079457,
   0.1209358,
   0.576691,
   0.1291335,
   1.165543,
   0.1999067,
   0.0966704,
   -0.1045993,
   0.1251642,
   0.03116491,
   0.01444642,
   0.03026687,
   0.02346947,
   0.02888142,
   0.03072592,
   0.05862832,
   0.02155747,
   0.02299774,
   0.01123944,
   0.01945342,
   0.002637757,
   0.01853313,
   0.008730846};
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
   1.628731,
   1.42938,
   1.758179,
   1.302347,
   0.8408901,
   0.4631137,
   0.6502576,
   0.2065054,
   0.8803998,
   0.09193943,
   0.2633533,
   0.464365,
   0.08985102,
   0.9557921,
   0.146199,
   0.04750401,
   0.1557219,
   0.1072981,
   0.01356764,
   0.01730165,
   0.0129109,
   0.01112507,
   0.01301852,
   0.01236113,
   0.04696977,
   0.009877398,
   0.01191331,
   0.007961769,
   0.020593,
   0.002611914,
   0.009566722,
   0.006818806};
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
   1.719861,
   1.429293,
   1.758086,
   1.30207,
   0.8408545,
   0.7231976,
   0.6575117,
   0.3697865,
   0.8803948,
   0.09190742,
   0.07495736,
   0.5792491,
   0.08983018,
   0.9557919,
   0.1616912,
   0.04746802,
   0.1557209,
   0.1072923,
   0.01354543,
   0.01729843,
   0.01291938,
   0.01112582,
   0.01297873,
   0.01235992,
   0.04696692,
   0.009870464,
   0.01191379,
   0.007962424,
   0.02058684,
   0.002611954,
   0.009571074,
   0.006814825};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(40,_fx3029,_fy3029,_felx3029,_fehx3029,_fely3029,_fehy3029);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(12);
   grae->SetFillStyle(3004);
   grae->SetLineColor(12);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3029 = new TH1F("Graph_Graph3029","",100,0,220);
   Graph_Graph3029->SetMinimum(-0.9082239);
   Graph_Graph3029->SetMaximum(6.866608);
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
   TLegendEntry *entry=leg->AddEntry("new_histo_group_Fake_wh3l_plot_13TeV_met","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_plot_13TeV_met","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_plot_13TeV_met","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_plot_13TeV_met","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_plot_13TeV_met","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_plot_13TeV_met","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_plot_13TeV_met","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_plot_13TeV_met","Data","EPL");
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
   entry=leg->AddEntry("new_histo_group_Fake_wh3l_plot_13TeV_met","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_plot_13TeV_met","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_plot_13TeV_met","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_plot_13TeV_met","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_plot_13TeV_met","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_plot_13TeV_met","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_plot_13TeV_met","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_plot_13TeV_met","Data","EPL");
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
   hframe_copy150->SetMaximum(11.38109);
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
   ccwh3l_plot_13TeV_met->Modified();
   ccwh3l_plot_13TeV_met->cd();
   ccwh3l_plot_13TeV_met->SetSelected(ccwh3l_plot_13TeV_met);
}
