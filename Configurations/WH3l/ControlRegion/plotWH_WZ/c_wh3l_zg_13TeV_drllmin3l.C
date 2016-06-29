void c_wh3l_zg_13TeV_drllmin3l()
{
//=========Macro generated from canvas: ccwh3l_zg_13TeV_drllmin3l/cc
//=========  (Tue Jun 28 16:49:15 2016) by ROOT version6.02/13
   TCanvas *ccwh3l_zg_13TeV_drllmin3l = new TCanvas("ccwh3l_zg_13TeV_drllmin3l", "cc",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   ccwh3l_zg_13TeV_drllmin3l->SetHighLightColor(2);
   ccwh3l_zg_13TeV_drllmin3l->Range(-1.2,-25.58378,6.3,171.2145);
   ccwh3l_zg_13TeV_drllmin3l->SetFillColor(0);
   ccwh3l_zg_13TeV_drllmin3l->SetBorderMode(0);
   ccwh3l_zg_13TeV_drllmin3l->SetBorderSize(2);
   ccwh3l_zg_13TeV_drllmin3l->SetTickx(1);
   ccwh3l_zg_13TeV_drllmin3l->SetTicky(1);
   ccwh3l_zg_13TeV_drllmin3l->SetLeftMargin(0.16);
   ccwh3l_zg_13TeV_drllmin3l->SetRightMargin(0.04);
   ccwh3l_zg_13TeV_drllmin3l->SetTopMargin(0.05);
   ccwh3l_zg_13TeV_drllmin3l->SetBottomMargin(0.13);
   ccwh3l_zg_13TeV_drllmin3l->SetFrameFillStyle(0);
   ccwh3l_zg_13TeV_drllmin3l->SetFrameBorderMode(0);
   ccwh3l_zg_13TeV_drllmin3l->SetFrameFillStyle(0);
   ccwh3l_zg_13TeV_drllmin3l->SetFrameBorderMode(0);
   
   TH1F *hframe257 = new TH1F("hframe257","",1000,0,6);
   hframe257->SetMinimum(0);
   hframe257->SetMaximum(161.3746);
   hframe257->SetDirectory(0);
   hframe257->SetStats(0);
   hframe257->SetLineStyle(0);
   hframe257->SetMarkerStyle(20);
   hframe257->GetXaxis()->SetTitle("min #Delta Rm_{ll} [GeV]");
   hframe257->GetXaxis()->SetNdivisions(506);
   hframe257->GetXaxis()->SetLabelFont(42);
   hframe257->GetXaxis()->SetLabelOffset(0.007);
   hframe257->GetXaxis()->SetLabelSize(0.05);
   hframe257->GetXaxis()->SetTitleSize(0.06);
   hframe257->GetXaxis()->SetTitleOffset(0.9);
   hframe257->GetXaxis()->SetTitleFont(42);
   hframe257->GetYaxis()->SetTitle("Events");
   hframe257->GetYaxis()->SetLabelFont(42);
   hframe257->GetYaxis()->SetLabelOffset(0.007);
   hframe257->GetYaxis()->SetLabelSize(0.05);
   hframe257->GetYaxis()->SetTitleSize(0.06);
   hframe257->GetYaxis()->SetTitleOffset(1.25);
   hframe257->GetYaxis()->SetTitleFont(42);
   hframe257->GetZaxis()->SetLabelFont(42);
   hframe257->GetZaxis()->SetLabelOffset(0.007);
   hframe257->GetZaxis()->SetLabelSize(0.05);
   hframe257->GetZaxis()->SetTitleSize(0.06);
   hframe257->GetZaxis()->SetTitleFont(42);
   hframe257->Draw(" ");
   
   THStack *thsBackground_grouped_wh3l_zg_13TeV_drllmin3l = new THStack();
   thsBackground_grouped_wh3l_zg_13TeV_drllmin3l->SetName("thsBackground_grouped_wh3l_zg_13TeV_drllmin3l");
   thsBackground_grouped_wh3l_zg_13TeV_drllmin3l->SetTitle("thsBackground_grouped_wh3l_zg_13TeV_drllmin3l");
   
   TH1F *thsBackground_grouped_wh3l_zg_13TeV_drllmin3l_stack_33 = new TH1F("thsBackground_grouped_wh3l_zg_13TeV_drllmin3l_stack_33","thsBackground_grouped_wh3l_zg_13TeV_drllmin3l",5,0,6);
   thsBackground_grouped_wh3l_zg_13TeV_drllmin3l_stack_33->SetMinimum(-0.2325829);
   thsBackground_grouped_wh3l_zg_13TeV_drllmin3l_stack_33->SetMaximum(57.83972);
   thsBackground_grouped_wh3l_zg_13TeV_drllmin3l_stack_33->SetDirectory(0);
   thsBackground_grouped_wh3l_zg_13TeV_drllmin3l_stack_33->SetStats(0);
   thsBackground_grouped_wh3l_zg_13TeV_drllmin3l_stack_33->SetLineStyle(0);
   thsBackground_grouped_wh3l_zg_13TeV_drllmin3l_stack_33->SetMarkerStyle(20);
   thsBackground_grouped_wh3l_zg_13TeV_drllmin3l_stack_33->GetXaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_drllmin3l_stack_33->GetXaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_zg_13TeV_drllmin3l_stack_33->GetXaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_zg_13TeV_drllmin3l_stack_33->GetXaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_zg_13TeV_drllmin3l_stack_33->GetXaxis()->SetTitleOffset(0.9);
   thsBackground_grouped_wh3l_zg_13TeV_drllmin3l_stack_33->GetXaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_drllmin3l_stack_33->GetYaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_drllmin3l_stack_33->GetYaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_zg_13TeV_drllmin3l_stack_33->GetYaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_zg_13TeV_drllmin3l_stack_33->GetYaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_zg_13TeV_drllmin3l_stack_33->GetYaxis()->SetTitleOffset(1.25);
   thsBackground_grouped_wh3l_zg_13TeV_drllmin3l_stack_33->GetYaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_drllmin3l_stack_33->GetZaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_drllmin3l_stack_33->GetZaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_zg_13TeV_drllmin3l_stack_33->GetZaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_zg_13TeV_drllmin3l_stack_33->GetZaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_zg_13TeV_drllmin3l_stack_33->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_drllmin3l->SetHistogram(thsBackground_grouped_wh3l_zg_13TeV_drllmin3l_stack_33);
   
   
   TH1D *new_histo_group_Fake_wh3l_zg_13TeV_drllmin3l258 = new TH1D("new_histo_group_Fake_wh3l_zg_13TeV_drllmin3l258","histo_Fake",5,0,6);
   new_histo_group_Fake_wh3l_zg_13TeV_drllmin3l258->SetBinContent(1,6.258081);
   new_histo_group_Fake_wh3l_zg_13TeV_drllmin3l258->SetBinContent(2,7.141981);
   new_histo_group_Fake_wh3l_zg_13TeV_drllmin3l258->SetBinContent(3,10.75784);
   new_histo_group_Fake_wh3l_zg_13TeV_drllmin3l258->SetBinContent(4,-0.009922814);
   new_histo_group_Fake_wh3l_zg_13TeV_drllmin3l258->SetBinError(1,2.046222);
   new_histo_group_Fake_wh3l_zg_13TeV_drllmin3l258->SetBinError(2,2.360797);
   new_histo_group_Fake_wh3l_zg_13TeV_drllmin3l258->SetBinError(3,3.010124);
   new_histo_group_Fake_wh3l_zg_13TeV_drllmin3l258->SetBinError(4,0.009922814);
   new_histo_group_Fake_wh3l_zg_13TeV_drllmin3l258->SetEntries(461);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_zg_13TeV_drllmin3l258->SetFillColor(ci);
   new_histo_group_Fake_wh3l_zg_13TeV_drllmin3l258->SetFillStyle(3001);

   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_zg_13TeV_drllmin3l258->SetLineColor(ci);
   new_histo_group_Fake_wh3l_zg_13TeV_drllmin3l258->GetXaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_zg_13TeV_drllmin3l258->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_zg_13TeV_drllmin3l258->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_zg_13TeV_drllmin3l258->GetXaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_zg_13TeV_drllmin3l258->GetYaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_zg_13TeV_drllmin3l258->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_zg_13TeV_drllmin3l258->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_zg_13TeV_drllmin3l258->GetYaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_zg_13TeV_drllmin3l258->GetZaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_zg_13TeV_drllmin3l258->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_zg_13TeV_drllmin3l258->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_zg_13TeV_drllmin3l258->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_drllmin3l->Add(new_histo_group_Fake_wh3l_zg_13TeV_drllmin3l,"");
   
   TH1D *new_histo_group_WW_wh3l_zg_13TeV_drllmin3l259 = new TH1D("new_histo_group_WW_wh3l_zg_13TeV_drllmin3l259","histo_WW",5,0,6);
   new_histo_group_WW_wh3l_zg_13TeV_drllmin3l259->SetBinContent(2,0.009961222);
   new_histo_group_WW_wh3l_zg_13TeV_drllmin3l259->SetBinError(2,0.009961222);
   new_histo_group_WW_wh3l_zg_13TeV_drllmin3l259->SetEntries(1);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_zg_13TeV_drllmin3l259->SetFillColor(ci);
   new_histo_group_WW_wh3l_zg_13TeV_drllmin3l259->SetFillStyle(3001);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_zg_13TeV_drllmin3l259->SetLineColor(ci);
   new_histo_group_WW_wh3l_zg_13TeV_drllmin3l259->GetXaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_zg_13TeV_drllmin3l259->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_zg_13TeV_drllmin3l259->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_zg_13TeV_drllmin3l259->GetXaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_zg_13TeV_drllmin3l259->GetYaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_zg_13TeV_drllmin3l259->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_zg_13TeV_drllmin3l259->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_zg_13TeV_drllmin3l259->GetYaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_zg_13TeV_drllmin3l259->GetZaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_zg_13TeV_drllmin3l259->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_zg_13TeV_drllmin3l259->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_zg_13TeV_drllmin3l259->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_drllmin3l->Add(new_histo_group_WW_wh3l_zg_13TeV_drllmin3l,"");
   
   TH1D *new_histo_group_VVV_wh3l_zg_13TeV_drllmin3l260 = new TH1D("new_histo_group_VVV_wh3l_zg_13TeV_drllmin3l260","histo_VVV",5,0,6);
   new_histo_group_VVV_wh3l_zg_13TeV_drllmin3l260->SetBinContent(2,-0.0006863608);
   new_histo_group_VVV_wh3l_zg_13TeV_drllmin3l260->SetBinError(2,0.0006863608);
   new_histo_group_VVV_wh3l_zg_13TeV_drllmin3l260->SetEntries(1);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_zg_13TeV_drllmin3l260->SetFillColor(ci);
   new_histo_group_VVV_wh3l_zg_13TeV_drllmin3l260->SetFillStyle(3001);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_zg_13TeV_drllmin3l260->SetLineColor(ci);
   new_histo_group_VVV_wh3l_zg_13TeV_drllmin3l260->GetXaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_zg_13TeV_drllmin3l260->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_zg_13TeV_drllmin3l260->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_zg_13TeV_drllmin3l260->GetXaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_zg_13TeV_drllmin3l260->GetYaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_zg_13TeV_drllmin3l260->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_zg_13TeV_drllmin3l260->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_zg_13TeV_drllmin3l260->GetYaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_zg_13TeV_drllmin3l260->GetZaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_zg_13TeV_drllmin3l260->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_zg_13TeV_drllmin3l260->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_zg_13TeV_drllmin3l260->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_drllmin3l->Add(new_histo_group_VVV_wh3l_zg_13TeV_drllmin3l,"");
   
   TH1D *new_histo_group_Vg_wh3l_zg_13TeV_drllmin3l261 = new TH1D("new_histo_group_Vg_wh3l_zg_13TeV_drllmin3l261","histo_Vg",5,0,6);
   new_histo_group_Vg_wh3l_zg_13TeV_drllmin3l261->SetBinContent(1,21.58746);
   new_histo_group_Vg_wh3l_zg_13TeV_drllmin3l261->SetBinContent(2,38.97665);
   new_histo_group_Vg_wh3l_zg_13TeV_drllmin3l261->SetBinContent(3,43.71652);
   new_histo_group_Vg_wh3l_zg_13TeV_drllmin3l261->SetBinContent(4,-0.1162914);
   new_histo_group_Vg_wh3l_zg_13TeV_drllmin3l261->SetBinError(1,1.835943);
   new_histo_group_Vg_wh3l_zg_13TeV_drllmin3l261->SetBinError(2,2.366336);
   new_histo_group_Vg_wh3l_zg_13TeV_drllmin3l261->SetBinError(3,2.436005);
   new_histo_group_Vg_wh3l_zg_13TeV_drllmin3l261->SetBinError(4,0.1162914);
   new_histo_group_Vg_wh3l_zg_13TeV_drllmin3l261->SetEntries(1378);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_zg_13TeV_drllmin3l261->SetFillColor(ci);
   new_histo_group_Vg_wh3l_zg_13TeV_drllmin3l261->SetFillStyle(3001);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_zg_13TeV_drllmin3l261->SetLineColor(ci);
   new_histo_group_Vg_wh3l_zg_13TeV_drllmin3l261->GetXaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_zg_13TeV_drllmin3l261->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_zg_13TeV_drllmin3l261->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_zg_13TeV_drllmin3l261->GetXaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_zg_13TeV_drllmin3l261->GetYaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_zg_13TeV_drllmin3l261->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_zg_13TeV_drllmin3l261->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_zg_13TeV_drllmin3l261->GetYaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_zg_13TeV_drllmin3l261->GetZaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_zg_13TeV_drllmin3l261->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_zg_13TeV_drllmin3l261->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_zg_13TeV_drllmin3l261->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_drllmin3l->Add(new_histo_group_Vg_wh3l_zg_13TeV_drllmin3l,"");
   
   TH1D *new_histo_group_ZZ_wh3l_zg_13TeV_drllmin3l262 = new TH1D("new_histo_group_ZZ_wh3l_zg_13TeV_drllmin3l262","histo_ZZ",5,0,6);
   new_histo_group_ZZ_wh3l_zg_13TeV_drllmin3l262->SetBinContent(1,0.07919283);
   new_histo_group_ZZ_wh3l_zg_13TeV_drllmin3l262->SetBinContent(2,0.4225503);
   new_histo_group_ZZ_wh3l_zg_13TeV_drllmin3l262->SetBinContent(3,0.234598);
   new_histo_group_ZZ_wh3l_zg_13TeV_drllmin3l262->SetBinError(1,0.0582553);
   new_histo_group_ZZ_wh3l_zg_13TeV_drllmin3l262->SetBinError(2,0.128208);
   new_histo_group_ZZ_wh3l_zg_13TeV_drllmin3l262->SetBinError(3,0.09803083);
   new_histo_group_ZZ_wh3l_zg_13TeV_drllmin3l262->SetEntries(20);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_zg_13TeV_drllmin3l262->SetFillColor(ci);
   new_histo_group_ZZ_wh3l_zg_13TeV_drllmin3l262->SetFillStyle(3001);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_zg_13TeV_drllmin3l262->SetLineColor(ci);
   new_histo_group_ZZ_wh3l_zg_13TeV_drllmin3l262->GetXaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_zg_13TeV_drllmin3l262->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_zg_13TeV_drllmin3l262->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_zg_13TeV_drllmin3l262->GetXaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_zg_13TeV_drllmin3l262->GetYaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_zg_13TeV_drllmin3l262->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_zg_13TeV_drllmin3l262->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_zg_13TeV_drllmin3l262->GetYaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_zg_13TeV_drllmin3l262->GetZaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_zg_13TeV_drllmin3l262->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_zg_13TeV_drllmin3l262->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_zg_13TeV_drllmin3l262->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_drllmin3l->Add(new_histo_group_ZZ_wh3l_zg_13TeV_drllmin3l,"");
   
   TH1D *new_histo_group_WZ_wh3l_zg_13TeV_drllmin3l263 = new TH1D("new_histo_group_WZ_wh3l_zg_13TeV_drllmin3l263","histo_WZ",5,0,6);
   new_histo_group_WZ_wh3l_zg_13TeV_drllmin3l263->SetBinContent(1,0.4669007);
   new_histo_group_WZ_wh3l_zg_13TeV_drllmin3l263->SetBinContent(2,1.035127);
   new_histo_group_WZ_wh3l_zg_13TeV_drllmin3l263->SetBinContent(3,0.3764965);
   new_histo_group_WZ_wh3l_zg_13TeV_drllmin3l263->SetBinError(1,0.04955116);
   new_histo_group_WZ_wh3l_zg_13TeV_drllmin3l263->SetBinError(2,0.07582529);
   new_histo_group_WZ_wh3l_zg_13TeV_drllmin3l263->SetBinError(3,0.04494514);
   new_histo_group_WZ_wh3l_zg_13TeV_drllmin3l263->SetEntries(376);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_zg_13TeV_drllmin3l263->SetFillColor(ci);
   new_histo_group_WZ_wh3l_zg_13TeV_drllmin3l263->SetFillStyle(3001);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_zg_13TeV_drllmin3l263->SetLineColor(ci);
   new_histo_group_WZ_wh3l_zg_13TeV_drllmin3l263->GetXaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_zg_13TeV_drllmin3l263->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_zg_13TeV_drllmin3l263->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_zg_13TeV_drllmin3l263->GetXaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_zg_13TeV_drllmin3l263->GetYaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_zg_13TeV_drllmin3l263->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_zg_13TeV_drllmin3l263->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_zg_13TeV_drllmin3l263->GetYaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_zg_13TeV_drllmin3l263->GetZaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_zg_13TeV_drllmin3l263->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_zg_13TeV_drllmin3l263->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_zg_13TeV_drllmin3l263->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_drllmin3l->Add(new_histo_group_WZ_wh3l_zg_13TeV_drllmin3l,"");
   thsBackground_grouped_wh3l_zg_13TeV_drllmin3l->Draw("hist same");
   
   Double_t _fx3065[5] = {
   0.6,
   1.8,
   3,
   4.2,
   5.4};
   Double_t _fy3065[5] = {
   28.39163,
   47.58558,
   55.08545,
   -0.1262143,
   0};
   Double_t _felx3065[5] = {
   0.6,
   0.6,
   0.6,
   0.6,
   0.6};
   Double_t _fely3065[5] = {
   4.448243,
   5.490401,
   6.562178,
   0.1262884,
   0};
   Double_t _fehx3065[5] = {
   0.6,
   0.6,
   0.6,
   0.6,
   0.6};
   Double_t _fehy3065[5] = {
   4.448241,
   5.49039,
   6.56217,
   0.1262884,
   0};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(5,_fx3065,_fy3065,_felx3065,_fehx3065,_fely3065,_fehy3065);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(12);
   grae->SetFillStyle(3004);
   grae->SetLineColor(12);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3065 = new TH1F("Graph_Graph3065","",100,0,6.6);
   Graph_Graph3065->SetMinimum(-6.442515);
   Graph_Graph3065->SetMaximum(67.83764);
   Graph_Graph3065->SetDirectory(0);
   Graph_Graph3065->SetStats(0);
   Graph_Graph3065->SetLineStyle(0);
   Graph_Graph3065->SetMarkerStyle(20);
   Graph_Graph3065->GetXaxis()->SetLabelFont(42);
   Graph_Graph3065->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3065->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3065->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3065->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3065->GetXaxis()->SetTitleFont(42);
   Graph_Graph3065->GetYaxis()->SetLabelFont(42);
   Graph_Graph3065->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3065->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3065->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3065->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3065->GetYaxis()->SetTitleFont(42);
   Graph_Graph3065->GetZaxis()->SetLabelFont(42);
   Graph_Graph3065->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3065->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3065->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3065->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3065);
   
   grae->Draw("2");
   
   Double_t _fx3066[5] = {
   0.6,
   1.8,
   3,
   4.2,
   5.4};
   Double_t _fy3066[5] = {
   28,
   48,
   57,
   0,
   0};
   Double_t _felx3066[5] = {
   0.6,
   0.6,
   0.6,
   0.6,
   0.6};
   Double_t _fely3066[5] = {
   5.259811,
   6.904115,
   7.527768,
   0,
   0};
   Double_t _fehx3066[5] = {
   0.6,
   0.6,
   0.6,
   0.6,
   0.6};
   Double_t _fehy3066[5] = {
   6.354577,
   7.976496,
   8.594187,
   1.147908,
   1.147908};
   grae = new TGraphAsymmErrors(5,_fx3066,_fy3066,_felx3066,_fehx3066,_fely3066,_fehy3066);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(1);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3066 = new TH1F("Graph_Graph3066","",100,0,6.6);
   Graph_Graph3066->SetMinimum(0);
   Graph_Graph3066->SetMaximum(72.15361);
   Graph_Graph3066->SetDirectory(0);
   Graph_Graph3066->SetStats(0);
   Graph_Graph3066->SetLineStyle(0);
   Graph_Graph3066->SetMarkerStyle(20);
   Graph_Graph3066->GetXaxis()->SetLabelFont(42);
   Graph_Graph3066->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3066->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3066->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3066->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3066->GetXaxis()->SetTitleFont(42);
   Graph_Graph3066->GetYaxis()->SetLabelFont(42);
   Graph_Graph3066->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3066->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3066->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3066->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3066->GetYaxis()->SetTitleFont(42);
   Graph_Graph3066->GetZaxis()->SetLabelFont(42);
   Graph_Graph3066->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3066->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3066->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3066->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3066);
   
   grae->Draw("p0");
   
   TLegend *leg = new TLegend(0.2,0.7,0.8,0.9,NULL,"brNDC");
   leg->SetTextFont(62);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("new_histo_group_Fake_wh3l_zg_13TeV_drllmin3l","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_zg_13TeV_drllmin3l","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_zg_13TeV_drllmin3l","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_zg_13TeV_drllmin3l","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_zg_13TeV_drllmin3l","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_zg_13TeV_drllmin3l","WZ","F");

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
   entry=leg->AddEntry("new_histo_DATA_wh3l_zg_13TeV_drllmin3l","Data","EPL");
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
   entry=leg->AddEntry("new_histo_group_Fake_wh3l_zg_13TeV_drllmin3l","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_zg_13TeV_drllmin3l","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_zg_13TeV_drllmin3l","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_zg_13TeV_drllmin3l","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_zg_13TeV_drllmin3l","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_zg_13TeV_drllmin3l","WZ","F");

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
   entry=leg->AddEntry("new_histo_DATA_wh3l_zg_13TeV_drllmin3l","Data","EPL");
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
   
   TH1F *hframe_copy264 = new TH1F("hframe_copy264","",1000,0,6);
   hframe_copy264->SetMinimum(0);
   hframe_copy264->SetMaximum(161.3746);
   hframe_copy264->SetDirectory(0);
   hframe_copy264->SetStats(0);
   hframe_copy264->SetLineStyle(0);
   hframe_copy264->SetMarkerStyle(20);
   hframe_copy264->GetXaxis()->SetTitle("min #Delta Rm_{ll} [GeV]");
   hframe_copy264->GetXaxis()->SetNdivisions(506);
   hframe_copy264->GetXaxis()->SetLabelFont(42);
   hframe_copy264->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy264->GetXaxis()->SetLabelSize(0.05);
   hframe_copy264->GetXaxis()->SetTitleSize(0.06);
   hframe_copy264->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy264->GetXaxis()->SetTitleFont(42);
   hframe_copy264->GetYaxis()->SetTitle("Events");
   hframe_copy264->GetYaxis()->SetLabelFont(42);
   hframe_copy264->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy264->GetYaxis()->SetLabelSize(0.05);
   hframe_copy264->GetYaxis()->SetTitleSize(0.06);
   hframe_copy264->GetYaxis()->SetTitleOffset(1.25);
   hframe_copy264->GetYaxis()->SetTitleFont(42);
   hframe_copy264->GetZaxis()->SetLabelFont(42);
   hframe_copy264->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy264->GetZaxis()->SetLabelSize(0.05);
   hframe_copy264->GetZaxis()->SetTitleSize(0.06);
   hframe_copy264->GetZaxis()->SetTitleFont(42);
   hframe_copy264->Draw("sameaxis");
   ccwh3l_zg_13TeV_drllmin3l->Modified();
   ccwh3l_zg_13TeV_drllmin3l->cd();
   ccwh3l_zg_13TeV_drllmin3l->SetSelected(ccwh3l_zg_13TeV_drllmin3l);
}
