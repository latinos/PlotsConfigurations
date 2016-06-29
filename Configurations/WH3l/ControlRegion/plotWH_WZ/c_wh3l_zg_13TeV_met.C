void c_wh3l_zg_13TeV_met()
{
//=========Macro generated from canvas: ccwh3l_zg_13TeV_met/cc
//=========  (Tue Jun 28 16:49:15 2016) by ROOT version6.02/13
   TCanvas *ccwh3l_zg_13TeV_met = new TCanvas("ccwh3l_zg_13TeV_met", "cc",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   ccwh3l_zg_13TeV_met->SetHighLightColor(2);
   ccwh3l_zg_13TeV_met->Range(-40,-13.62827,210,91.20455);
   ccwh3l_zg_13TeV_met->SetFillColor(0);
   ccwh3l_zg_13TeV_met->SetBorderMode(0);
   ccwh3l_zg_13TeV_met->SetBorderSize(2);
   ccwh3l_zg_13TeV_met->SetTickx(1);
   ccwh3l_zg_13TeV_met->SetTicky(1);
   ccwh3l_zg_13TeV_met->SetLeftMargin(0.16);
   ccwh3l_zg_13TeV_met->SetRightMargin(0.04);
   ccwh3l_zg_13TeV_met->SetTopMargin(0.05);
   ccwh3l_zg_13TeV_met->SetBottomMargin(0.13);
   ccwh3l_zg_13TeV_met->SetFrameFillStyle(0);
   ccwh3l_zg_13TeV_met->SetFrameBorderMode(0);
   ccwh3l_zg_13TeV_met->SetFrameFillStyle(0);
   ccwh3l_zg_13TeV_met->SetFrameBorderMode(0);
   
   TH1F *hframe249 = new TH1F("hframe249","",1000,0,200);
   hframe249->SetMinimum(0);
   hframe249->SetMaximum(85.96291);
   hframe249->SetDirectory(0);
   hframe249->SetStats(0);
   hframe249->SetLineStyle(0);
   hframe249->SetMarkerStyle(20);
   hframe249->GetXaxis()->SetTitle("pfmet [GeV]");
   hframe249->GetXaxis()->SetNdivisions(506);
   hframe249->GetXaxis()->SetLabelFont(42);
   hframe249->GetXaxis()->SetLabelOffset(0.007);
   hframe249->GetXaxis()->SetLabelSize(0.05);
   hframe249->GetXaxis()->SetTitleSize(0.06);
   hframe249->GetXaxis()->SetTitleOffset(0.9);
   hframe249->GetXaxis()->SetTitleFont(42);
   hframe249->GetYaxis()->SetTitle("Events");
   hframe249->GetYaxis()->SetLabelFont(42);
   hframe249->GetYaxis()->SetLabelOffset(0.007);
   hframe249->GetYaxis()->SetLabelSize(0.05);
   hframe249->GetYaxis()->SetTitleSize(0.06);
   hframe249->GetYaxis()->SetTitleOffset(1.25);
   hframe249->GetYaxis()->SetTitleFont(42);
   hframe249->GetZaxis()->SetLabelFont(42);
   hframe249->GetZaxis()->SetLabelOffset(0.007);
   hframe249->GetZaxis()->SetLabelSize(0.05);
   hframe249->GetZaxis()->SetTitleSize(0.06);
   hframe249->GetZaxis()->SetTitleFont(42);
   hframe249->Draw(" ");
   
   THStack *thsBackground_grouped_wh3l_zg_13TeV_met = new THStack();
   thsBackground_grouped_wh3l_zg_13TeV_met->SetName("thsBackground_grouped_wh3l_zg_13TeV_met");
   thsBackground_grouped_wh3l_zg_13TeV_met->SetTitle("thsBackground_grouped_wh3l_zg_13TeV_met");
   
   TH1F *thsBackground_grouped_wh3l_zg_13TeV_met_stack_32 = new TH1F("thsBackground_grouped_wh3l_zg_13TeV_met_stack_32","thsBackground_grouped_wh3l_zg_13TeV_met",40,0,200);
   thsBackground_grouped_wh3l_zg_13TeV_met_stack_32->SetMinimum(-0.458704);
   thsBackground_grouped_wh3l_zg_13TeV_met_stack_32->SetMaximum(31.70785);
   thsBackground_grouped_wh3l_zg_13TeV_met_stack_32->SetDirectory(0);
   thsBackground_grouped_wh3l_zg_13TeV_met_stack_32->SetStats(0);
   thsBackground_grouped_wh3l_zg_13TeV_met_stack_32->SetLineStyle(0);
   thsBackground_grouped_wh3l_zg_13TeV_met_stack_32->SetMarkerStyle(20);
   thsBackground_grouped_wh3l_zg_13TeV_met_stack_32->GetXaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_met_stack_32->GetXaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_zg_13TeV_met_stack_32->GetXaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_zg_13TeV_met_stack_32->GetXaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_zg_13TeV_met_stack_32->GetXaxis()->SetTitleOffset(0.9);
   thsBackground_grouped_wh3l_zg_13TeV_met_stack_32->GetXaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_met_stack_32->GetYaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_met_stack_32->GetYaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_zg_13TeV_met_stack_32->GetYaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_zg_13TeV_met_stack_32->GetYaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_zg_13TeV_met_stack_32->GetYaxis()->SetTitleOffset(1.25);
   thsBackground_grouped_wh3l_zg_13TeV_met_stack_32->GetYaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_met_stack_32->GetZaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_met_stack_32->GetZaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_zg_13TeV_met_stack_32->GetZaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_zg_13TeV_met_stack_32->GetZaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_zg_13TeV_met_stack_32->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_met->SetHistogram(thsBackground_grouped_wh3l_zg_13TeV_met_stack_32);
   
   
   TH1D *new_histo_group_Fake_wh3l_zg_13TeV_met250 = new TH1D("new_histo_group_Fake_wh3l_zg_13TeV_met250","histo_Fake",40,0,200);
   new_histo_group_Fake_wh3l_zg_13TeV_met250->SetBinContent(1,2.421352);
   new_histo_group_Fake_wh3l_zg_13TeV_met250->SetBinContent(2,1.716224);
   new_histo_group_Fake_wh3l_zg_13TeV_met250->SetBinContent(3,4.790001);
   new_histo_group_Fake_wh3l_zg_13TeV_met250->SetBinContent(4,7.33007);
   new_histo_group_Fake_wh3l_zg_13TeV_met250->SetBinContent(5,3.176627);
   new_histo_group_Fake_wh3l_zg_13TeV_met250->SetBinContent(6,3.521141);
   new_histo_group_Fake_wh3l_zg_13TeV_met250->SetBinContent(7,1.171537);
   new_histo_group_Fake_wh3l_zg_13TeV_met250->SetBinContent(8,0.02102673);
   new_histo_group_Fake_wh3l_zg_13TeV_met250->SetBinError(1,1.238713);
   new_histo_group_Fake_wh3l_zg_13TeV_met250->SetBinError(2,1.517918);
   new_histo_group_Fake_wh3l_zg_13TeV_met250->SetBinError(3,2.086224);
   new_histo_group_Fake_wh3l_zg_13TeV_met250->SetBinError(4,2.098173);
   new_histo_group_Fake_wh3l_zg_13TeV_met250->SetBinError(5,1.528059);
   new_histo_group_Fake_wh3l_zg_13TeV_met250->SetBinError(6,1.529261);
   new_histo_group_Fake_wh3l_zg_13TeV_met250->SetBinError(7,1.150845);
   new_histo_group_Fake_wh3l_zg_13TeV_met250->SetBinError(8,0.4797307);
   new_histo_group_Fake_wh3l_zg_13TeV_met250->SetEntries(461);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_zg_13TeV_met250->SetFillColor(ci);
   new_histo_group_Fake_wh3l_zg_13TeV_met250->SetFillStyle(3001);

   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_zg_13TeV_met250->SetLineColor(ci);
   new_histo_group_Fake_wh3l_zg_13TeV_met250->GetXaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_zg_13TeV_met250->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_zg_13TeV_met250->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_zg_13TeV_met250->GetXaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_zg_13TeV_met250->GetYaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_zg_13TeV_met250->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_zg_13TeV_met250->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_zg_13TeV_met250->GetYaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_zg_13TeV_met250->GetZaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_zg_13TeV_met250->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_zg_13TeV_met250->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_zg_13TeV_met250->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_met->Add(new_histo_group_Fake_wh3l_zg_13TeV_met,"");
   
   TH1D *new_histo_group_WW_wh3l_zg_13TeV_met251 = new TH1D("new_histo_group_WW_wh3l_zg_13TeV_met251","histo_WW",40,0,200);
   new_histo_group_WW_wh3l_zg_13TeV_met251->SetBinContent(5,0.009961222);
   new_histo_group_WW_wh3l_zg_13TeV_met251->SetBinError(5,0.009961222);
   new_histo_group_WW_wh3l_zg_13TeV_met251->SetEntries(1);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_zg_13TeV_met251->SetFillColor(ci);
   new_histo_group_WW_wh3l_zg_13TeV_met251->SetFillStyle(3001);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_zg_13TeV_met251->SetLineColor(ci);
   new_histo_group_WW_wh3l_zg_13TeV_met251->GetXaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_zg_13TeV_met251->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_zg_13TeV_met251->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_zg_13TeV_met251->GetXaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_zg_13TeV_met251->GetYaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_zg_13TeV_met251->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_zg_13TeV_met251->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_zg_13TeV_met251->GetYaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_zg_13TeV_met251->GetZaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_zg_13TeV_met251->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_zg_13TeV_met251->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_zg_13TeV_met251->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_met->Add(new_histo_group_WW_wh3l_zg_13TeV_met,"");
   
   TH1D *new_histo_group_VVV_wh3l_zg_13TeV_met252 = new TH1D("new_histo_group_VVV_wh3l_zg_13TeV_met252","histo_VVV",40,0,200);
   new_histo_group_VVV_wh3l_zg_13TeV_met252->SetBinContent(7,-0.0006863608);
   new_histo_group_VVV_wh3l_zg_13TeV_met252->SetBinError(7,0.0006863608);
   new_histo_group_VVV_wh3l_zg_13TeV_met252->SetEntries(1);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_zg_13TeV_met252->SetFillColor(ci);
   new_histo_group_VVV_wh3l_zg_13TeV_met252->SetFillStyle(3001);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_zg_13TeV_met252->SetLineColor(ci);
   new_histo_group_VVV_wh3l_zg_13TeV_met252->GetXaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_zg_13TeV_met252->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_zg_13TeV_met252->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_zg_13TeV_met252->GetXaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_zg_13TeV_met252->GetYaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_zg_13TeV_met252->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_zg_13TeV_met252->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_zg_13TeV_met252->GetYaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_zg_13TeV_met252->GetZaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_zg_13TeV_met252->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_zg_13TeV_met252->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_zg_13TeV_met252->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_met->Add(new_histo_group_VVV_wh3l_zg_13TeV_met,"");
   
   TH1D *new_histo_group_Vg_wh3l_zg_13TeV_met253 = new TH1D("new_histo_group_Vg_wh3l_zg_13TeV_met253","histo_Vg",40,0,200);
   new_histo_group_Vg_wh3l_zg_13TeV_met253->SetBinContent(1,5.897892);
   new_histo_group_Vg_wh3l_zg_13TeV_met253->SetBinContent(2,17.86219);
   new_histo_group_Vg_wh3l_zg_13TeV_met253->SetBinContent(3,21.53148);
   new_histo_group_Vg_wh3l_zg_13TeV_met253->SetBinContent(4,22.36815);
   new_histo_group_Vg_wh3l_zg_13TeV_met253->SetBinContent(5,14.06921);
   new_histo_group_Vg_wh3l_zg_13TeV_met253->SetBinContent(6,11.38229);
   new_histo_group_Vg_wh3l_zg_13TeV_met253->SetBinContent(7,7.082289);
   new_histo_group_Vg_wh3l_zg_13TeV_met253->SetBinContent(8,3.970827);
   new_histo_group_Vg_wh3l_zg_13TeV_met253->SetBinError(1,1.013065);
   new_histo_group_Vg_wh3l_zg_13TeV_met253->SetBinError(2,1.581677);
   new_histo_group_Vg_wh3l_zg_13TeV_met253->SetBinError(3,1.759008);
   new_histo_group_Vg_wh3l_zg_13TeV_met253->SetBinError(4,1.807183);
   new_histo_group_Vg_wh3l_zg_13TeV_met253->SetBinError(5,1.427355);
   new_histo_group_Vg_wh3l_zg_13TeV_met253->SetBinError(6,1.257522);
   new_histo_group_Vg_wh3l_zg_13TeV_met253->SetBinError(7,0.9588761);
   new_histo_group_Vg_wh3l_zg_13TeV_met253->SetBinError(8,0.7012155);
   new_histo_group_Vg_wh3l_zg_13TeV_met253->SetEntries(1378);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_zg_13TeV_met253->SetFillColor(ci);
   new_histo_group_Vg_wh3l_zg_13TeV_met253->SetFillStyle(3001);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_zg_13TeV_met253->SetLineColor(ci);
   new_histo_group_Vg_wh3l_zg_13TeV_met253->GetXaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_zg_13TeV_met253->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_zg_13TeV_met253->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_zg_13TeV_met253->GetXaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_zg_13TeV_met253->GetYaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_zg_13TeV_met253->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_zg_13TeV_met253->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_zg_13TeV_met253->GetYaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_zg_13TeV_met253->GetZaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_zg_13TeV_met253->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_zg_13TeV_met253->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_zg_13TeV_met253->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_met->Add(new_histo_group_Vg_wh3l_zg_13TeV_met,"");
   
   TH1D *new_histo_group_ZZ_wh3l_zg_13TeV_met254 = new TH1D("new_histo_group_ZZ_wh3l_zg_13TeV_met254","histo_ZZ",40,0,200);
   new_histo_group_ZZ_wh3l_zg_13TeV_met254->SetBinContent(2,0.1087932);
   new_histo_group_ZZ_wh3l_zg_13TeV_met254->SetBinContent(3,0.1873054);
   new_histo_group_ZZ_wh3l_zg_13TeV_met254->SetBinContent(4,0.2659183);
   new_histo_group_ZZ_wh3l_zg_13TeV_met254->SetBinContent(5,0.1108508);
   new_histo_group_ZZ_wh3l_zg_13TeV_met254->SetBinContent(6,0.0634734);
   new_histo_group_ZZ_wh3l_zg_13TeV_met254->SetBinError(2,0.06343333);
   new_histo_group_ZZ_wh3l_zg_13TeV_met254->SetBinError(3,0.08593516);
   new_histo_group_ZZ_wh3l_zg_13TeV_met254->SetBinError(4,0.1085147);
   new_histo_group_ZZ_wh3l_zg_13TeV_met254->SetBinError(5,0.06494655);
   new_histo_group_ZZ_wh3l_zg_13TeV_met254->SetBinError(6,0.04515405);
   new_histo_group_ZZ_wh3l_zg_13TeV_met254->SetEntries(20);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_zg_13TeV_met254->SetFillColor(ci);
   new_histo_group_ZZ_wh3l_zg_13TeV_met254->SetFillStyle(3001);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_zg_13TeV_met254->SetLineColor(ci);
   new_histo_group_ZZ_wh3l_zg_13TeV_met254->GetXaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_zg_13TeV_met254->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_zg_13TeV_met254->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_zg_13TeV_met254->GetXaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_zg_13TeV_met254->GetYaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_zg_13TeV_met254->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_zg_13TeV_met254->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_zg_13TeV_met254->GetYaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_zg_13TeV_met254->GetZaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_zg_13TeV_met254->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_zg_13TeV_met254->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_zg_13TeV_met254->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_met->Add(new_histo_group_ZZ_wh3l_zg_13TeV_met,"");
   
   TH1D *new_histo_group_WZ_wh3l_zg_13TeV_met255 = new TH1D("new_histo_group_WZ_wh3l_zg_13TeV_met255","histo_WZ",40,0,200);
   new_histo_group_WZ_wh3l_zg_13TeV_met255->SetBinContent(1,0.05282875);
   new_histo_group_WZ_wh3l_zg_13TeV_met255->SetBinContent(2,0.041395);
   new_histo_group_WZ_wh3l_zg_13TeV_met255->SetBinContent(3,0.1980493);
   new_histo_group_WZ_wh3l_zg_13TeV_met255->SetBinContent(4,0.2338188);
   new_histo_group_WZ_wh3l_zg_13TeV_met255->SetBinContent(5,0.2592659);
   new_histo_group_WZ_wh3l_zg_13TeV_met255->SetBinContent(6,0.3097498);
   new_histo_group_WZ_wh3l_zg_13TeV_met255->SetBinContent(7,0.3519368);
   new_histo_group_WZ_wh3l_zg_13TeV_met255->SetBinContent(8,0.4314798);
   new_histo_group_WZ_wh3l_zg_13TeV_met255->SetBinError(1,0.01707307);
   new_histo_group_WZ_wh3l_zg_13TeV_met255->SetBinError(2,0.01501421);
   new_histo_group_WZ_wh3l_zg_13TeV_met255->SetBinError(3,0.03247);
   new_histo_group_WZ_wh3l_zg_13TeV_met255->SetBinError(4,0.03614692);
   new_histo_group_WZ_wh3l_zg_13TeV_met255->SetBinError(5,0.03778944);
   new_histo_group_WZ_wh3l_zg_13TeV_met255->SetBinError(6,0.04020419);
   new_histo_group_WZ_wh3l_zg_13TeV_met255->SetBinError(7,0.04396201);
   new_histo_group_WZ_wh3l_zg_13TeV_met255->SetBinError(8,0.04868228);
   new_histo_group_WZ_wh3l_zg_13TeV_met255->SetEntries(376);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_zg_13TeV_met255->SetFillColor(ci);
   new_histo_group_WZ_wh3l_zg_13TeV_met255->SetFillStyle(3001);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_zg_13TeV_met255->SetLineColor(ci);
   new_histo_group_WZ_wh3l_zg_13TeV_met255->GetXaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_zg_13TeV_met255->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_zg_13TeV_met255->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_zg_13TeV_met255->GetXaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_zg_13TeV_met255->GetYaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_zg_13TeV_met255->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_zg_13TeV_met255->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_zg_13TeV_met255->GetYaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_zg_13TeV_met255->GetZaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_zg_13TeV_met255->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_zg_13TeV_met255->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_zg_13TeV_met255->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_met->Add(new_histo_group_WZ_wh3l_zg_13TeV_met,"");
   thsBackground_grouped_wh3l_zg_13TeV_met->Draw("hist same");
   
   Double_t _fx3063[40] = {
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
   Double_t _fy3063[40] = {
   8.372073,
   19.72861,
   26.70684,
   30.19795,
   17.62591,
   15.27666,
   8.605077,
   4.423333,
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
   Double_t _felx3063[40] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
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
   Double_t _fely3063[40] = {
   2.387615,
   3.255837,
   4.256676,
   4.648852,
   3.235475,
   3.075804,
   2.191209,
   0.7783692,
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
   Double_t _fehx3063[40] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
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
   Double_t _fehy3063[40] = {
   2.387615,
   3.255839,
   4.256674,
   4.648849,
   3.235475,
   3.075802,
   2.191208,
   1.23431,
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
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(40,_fx3063,_fy3063,_felx3063,_fehx3063,_fely3063,_fehy3063);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(12);
   grae->SetFillStyle(3004);
   grae->SetLineColor(12);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3063 = new TH1F("Graph_Graph3063","",100,0,220);
   Graph_Graph3063->SetMinimum(0);
   Graph_Graph3063->SetMaximum(38.33148);
   Graph_Graph3063->SetDirectory(0);
   Graph_Graph3063->SetStats(0);
   Graph_Graph3063->SetLineStyle(0);
   Graph_Graph3063->SetMarkerStyle(20);
   Graph_Graph3063->GetXaxis()->SetLabelFont(42);
   Graph_Graph3063->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3063->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3063->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3063->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3063->GetXaxis()->SetTitleFont(42);
   Graph_Graph3063->GetYaxis()->SetLabelFont(42);
   Graph_Graph3063->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3063->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3063->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3063->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3063->GetYaxis()->SetTitleFont(42);
   Graph_Graph3063->GetZaxis()->SetLabelFont(42);
   Graph_Graph3063->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3063->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3063->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3063->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3063);
   
   grae->Draw("2");
   
   Double_t _fx3064[40] = {
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
   Double_t _fy3064[40] = {
   10,
   29,
   28,
   25,
   20,
   6,
   10,
   5,
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
   Double_t _felx3064[40] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
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
   Double_t _fely3064[40] = {
   3.108748,
   5.354033,
   5.259811,
   4.966428,
   4.43453,
   2.379969,
   3.108748,
   2.159724,
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
   Double_t _fehx3064[40] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
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
   Double_t _fehy3064[40] = {
   4.267035,
   6.447153,
   6.354577,
   6.066714,
   5.546633,
   3.583713,
   4.267035,
   3.382539,
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
   grae = new TGraphAsymmErrors(40,_fx3064,_fy3064,_felx3064,_fehx3064,_fely3064,_fehy3064);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(1);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3064 = new TH1F("Graph_Graph3064","",100,0,220);
   Graph_Graph3064->SetMinimum(0);
   Graph_Graph3064->SetMaximum(38.99187);
   Graph_Graph3064->SetDirectory(0);
   Graph_Graph3064->SetStats(0);
   Graph_Graph3064->SetLineStyle(0);
   Graph_Graph3064->SetMarkerStyle(20);
   Graph_Graph3064->GetXaxis()->SetLabelFont(42);
   Graph_Graph3064->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3064->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3064->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3064->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3064->GetXaxis()->SetTitleFont(42);
   Graph_Graph3064->GetYaxis()->SetLabelFont(42);
   Graph_Graph3064->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3064->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3064->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3064->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3064->GetYaxis()->SetTitleFont(42);
   Graph_Graph3064->GetZaxis()->SetLabelFont(42);
   Graph_Graph3064->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3064->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3064->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3064->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3064);
   
   grae->Draw("p0");
   
   TLegend *leg = new TLegend(0.2,0.7,0.8,0.9,NULL,"brNDC");
   leg->SetTextFont(62);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("new_histo_group_Fake_wh3l_zg_13TeV_met","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_zg_13TeV_met","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_zg_13TeV_met","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_zg_13TeV_met","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_zg_13TeV_met","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_zg_13TeV_met","WZ","F");

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
   entry=leg->AddEntry("new_histo_DATA_wh3l_zg_13TeV_met","Data","EPL");
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
   entry=leg->AddEntry("new_histo_group_Fake_wh3l_zg_13TeV_met","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_zg_13TeV_met","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_zg_13TeV_met","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_zg_13TeV_met","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_zg_13TeV_met","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_zg_13TeV_met","WZ","F");

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
   entry=leg->AddEntry("new_histo_DATA_wh3l_zg_13TeV_met","Data","EPL");
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
   
   TH1F *hframe_copy256 = new TH1F("hframe_copy256","",1000,0,200);
   hframe_copy256->SetMinimum(0);
   hframe_copy256->SetMaximum(85.96291);
   hframe_copy256->SetDirectory(0);
   hframe_copy256->SetStats(0);
   hframe_copy256->SetLineStyle(0);
   hframe_copy256->SetMarkerStyle(20);
   hframe_copy256->GetXaxis()->SetTitle("pfmet [GeV]");
   hframe_copy256->GetXaxis()->SetNdivisions(506);
   hframe_copy256->GetXaxis()->SetLabelFont(42);
   hframe_copy256->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy256->GetXaxis()->SetLabelSize(0.05);
   hframe_copy256->GetXaxis()->SetTitleSize(0.06);
   hframe_copy256->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy256->GetXaxis()->SetTitleFont(42);
   hframe_copy256->GetYaxis()->SetTitle("Events");
   hframe_copy256->GetYaxis()->SetLabelFont(42);
   hframe_copy256->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy256->GetYaxis()->SetLabelSize(0.05);
   hframe_copy256->GetYaxis()->SetTitleSize(0.06);
   hframe_copy256->GetYaxis()->SetTitleOffset(1.25);
   hframe_copy256->GetYaxis()->SetTitleFont(42);
   hframe_copy256->GetZaxis()->SetLabelFont(42);
   hframe_copy256->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy256->GetZaxis()->SetLabelSize(0.05);
   hframe_copy256->GetZaxis()->SetTitleSize(0.06);
   hframe_copy256->GetZaxis()->SetTitleFont(42);
   hframe_copy256->Draw("sameaxis");
   ccwh3l_zg_13TeV_met->Modified();
   ccwh3l_zg_13TeV_met->cd();
   ccwh3l_zg_13TeV_met->SetSelected(ccwh3l_zg_13TeV_met);
}
