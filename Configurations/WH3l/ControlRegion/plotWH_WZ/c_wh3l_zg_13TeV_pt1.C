void c_wh3l_zg_13TeV_pt1()
{
//=========Macro generated from canvas: ccwh3l_zg_13TeV_pt1/cc
//=========  (Tue Jun 28 16:49:18 2016) by ROOT version6.02/13
   TCanvas *ccwh3l_zg_13TeV_pt1 = new TCanvas("ccwh3l_zg_13TeV_pt1", "cc",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   ccwh3l_zg_13TeV_pt1->SetHighLightColor(2);
   ccwh3l_zg_13TeV_pt1->Range(-28,-24.31494,209.5,162.7231);
   ccwh3l_zg_13TeV_pt1->SetFillColor(0);
   ccwh3l_zg_13TeV_pt1->SetBorderMode(0);
   ccwh3l_zg_13TeV_pt1->SetBorderSize(2);
   ccwh3l_zg_13TeV_pt1->SetTickx(1);
   ccwh3l_zg_13TeV_pt1->SetTicky(1);
   ccwh3l_zg_13TeV_pt1->SetLeftMargin(0.16);
   ccwh3l_zg_13TeV_pt1->SetRightMargin(0.04);
   ccwh3l_zg_13TeV_pt1->SetTopMargin(0.05);
   ccwh3l_zg_13TeV_pt1->SetBottomMargin(0.13);
   ccwh3l_zg_13TeV_pt1->SetFrameFillStyle(0);
   ccwh3l_zg_13TeV_pt1->SetFrameBorderMode(0);
   ccwh3l_zg_13TeV_pt1->SetFrameFillStyle(0);
   ccwh3l_zg_13TeV_pt1->SetFrameBorderMode(0);
   
   TH1F *hframe281 = new TH1F("hframe281","",1000,10,200);
   hframe281->SetMinimum(0);
   hframe281->SetMaximum(153.3712);
   hframe281->SetDirectory(0);
   hframe281->SetStats(0);
   hframe281->SetLineStyle(0);
   hframe281->SetMarkerStyle(20);
   hframe281->GetXaxis()->SetTitle("lept1_p_{T} [GeV]");
   hframe281->GetXaxis()->SetNdivisions(506);
   hframe281->GetXaxis()->SetLabelFont(42);
   hframe281->GetXaxis()->SetLabelOffset(0.007);
   hframe281->GetXaxis()->SetLabelSize(0.05);
   hframe281->GetXaxis()->SetTitleSize(0.06);
   hframe281->GetXaxis()->SetTitleOffset(0.9);
   hframe281->GetXaxis()->SetTitleFont(42);
   hframe281->GetYaxis()->SetTitle("Events");
   hframe281->GetYaxis()->SetLabelFont(42);
   hframe281->GetYaxis()->SetLabelOffset(0.007);
   hframe281->GetYaxis()->SetLabelSize(0.05);
   hframe281->GetYaxis()->SetTitleSize(0.06);
   hframe281->GetYaxis()->SetTitleOffset(1.25);
   hframe281->GetYaxis()->SetTitleFont(42);
   hframe281->GetZaxis()->SetLabelFont(42);
   hframe281->GetZaxis()->SetLabelOffset(0.007);
   hframe281->GetZaxis()->SetLabelSize(0.05);
   hframe281->GetZaxis()->SetTitleSize(0.06);
   hframe281->GetZaxis()->SetTitleFont(42);
   hframe281->Draw(" ");
   
   THStack *thsBackground_grouped_wh3l_zg_13TeV_pt1 = new THStack();
   thsBackground_grouped_wh3l_zg_13TeV_pt1->SetName("thsBackground_grouped_wh3l_zg_13TeV_pt1");
   thsBackground_grouped_wh3l_zg_13TeV_pt1->SetTitle("thsBackground_grouped_wh3l_zg_13TeV_pt1");
   
   TH1F *thsBackground_grouped_wh3l_zg_13TeV_pt1_stack_36 = new TH1F("thsBackground_grouped_wh3l_zg_13TeV_pt1_stack_36","thsBackground_grouped_wh3l_zg_13TeV_pt1",25,10,200);
   thsBackground_grouped_wh3l_zg_13TeV_pt1_stack_36->SetMinimum(-1.347193);
   thsBackground_grouped_wh3l_zg_13TeV_pt1_stack_36->SetMaximum(56.71843);
   thsBackground_grouped_wh3l_zg_13TeV_pt1_stack_36->SetDirectory(0);
   thsBackground_grouped_wh3l_zg_13TeV_pt1_stack_36->SetStats(0);
   thsBackground_grouped_wh3l_zg_13TeV_pt1_stack_36->SetLineStyle(0);
   thsBackground_grouped_wh3l_zg_13TeV_pt1_stack_36->SetMarkerStyle(20);
   thsBackground_grouped_wh3l_zg_13TeV_pt1_stack_36->GetXaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_pt1_stack_36->GetXaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_zg_13TeV_pt1_stack_36->GetXaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_zg_13TeV_pt1_stack_36->GetXaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_zg_13TeV_pt1_stack_36->GetXaxis()->SetTitleOffset(0.9);
   thsBackground_grouped_wh3l_zg_13TeV_pt1_stack_36->GetXaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_pt1_stack_36->GetYaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_pt1_stack_36->GetYaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_zg_13TeV_pt1_stack_36->GetYaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_zg_13TeV_pt1_stack_36->GetYaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_zg_13TeV_pt1_stack_36->GetYaxis()->SetTitleOffset(1.25);
   thsBackground_grouped_wh3l_zg_13TeV_pt1_stack_36->GetYaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_pt1_stack_36->GetZaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_pt1_stack_36->GetZaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_zg_13TeV_pt1_stack_36->GetZaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_zg_13TeV_pt1_stack_36->GetZaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_zg_13TeV_pt1_stack_36->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_pt1->SetHistogram(thsBackground_grouped_wh3l_zg_13TeV_pt1_stack_36);
   
   
   TH1D *new_histo_group_Fake_wh3l_zg_13TeV_pt1282 = new TH1D("new_histo_group_Fake_wh3l_zg_13TeV_pt1282","histo_Fake",25,10,200);
   new_histo_group_Fake_wh3l_zg_13TeV_pt1282->SetBinContent(2,-0.648988);
   new_histo_group_Fake_wh3l_zg_13TeV_pt1282->SetBinContent(3,3.691734);
   new_histo_group_Fake_wh3l_zg_13TeV_pt1282->SetBinContent(4,10.18158);
   new_histo_group_Fake_wh3l_zg_13TeV_pt1282->SetBinContent(5,8.9275);
   new_histo_group_Fake_wh3l_zg_13TeV_pt1282->SetBinContent(6,2.07366);
   new_histo_group_Fake_wh3l_zg_13TeV_pt1282->SetBinContent(7,0.1242226);
   new_histo_group_Fake_wh3l_zg_13TeV_pt1282->SetBinContent(8,-0.1919688);
   new_histo_group_Fake_wh3l_zg_13TeV_pt1282->SetBinContent(12,-0.009756577);
   new_histo_group_Fake_wh3l_zg_13TeV_pt1282->SetBinError(2,0.6982045);
   new_histo_group_Fake_wh3l_zg_13TeV_pt1282->SetBinError(3,1.973557);
   new_histo_group_Fake_wh3l_zg_13TeV_pt1282->SetBinError(4,2.566911);
   new_histo_group_Fake_wh3l_zg_13TeV_pt1282->SetBinError(5,2.457909);
   new_histo_group_Fake_wh3l_zg_13TeV_pt1282->SetBinError(6,1.214989);
   new_histo_group_Fake_wh3l_zg_13TeV_pt1282->SetBinError(7,0.5556206);
   new_histo_group_Fake_wh3l_zg_13TeV_pt1282->SetBinError(8,0.153503);
   new_histo_group_Fake_wh3l_zg_13TeV_pt1282->SetBinError(12,0.009756577);
   new_histo_group_Fake_wh3l_zg_13TeV_pt1282->SetEntries(461);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_zg_13TeV_pt1282->SetFillColor(ci);
   new_histo_group_Fake_wh3l_zg_13TeV_pt1282->SetFillStyle(3001);

   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_zg_13TeV_pt1282->SetLineColor(ci);
   new_histo_group_Fake_wh3l_zg_13TeV_pt1282->GetXaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_zg_13TeV_pt1282->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_zg_13TeV_pt1282->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_zg_13TeV_pt1282->GetXaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_zg_13TeV_pt1282->GetYaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_zg_13TeV_pt1282->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_zg_13TeV_pt1282->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_zg_13TeV_pt1282->GetYaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_zg_13TeV_pt1282->GetZaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_zg_13TeV_pt1282->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_zg_13TeV_pt1282->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_zg_13TeV_pt1282->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_pt1->Add(new_histo_group_Fake_wh3l_zg_13TeV_pt1,"");
   
   TH1D *new_histo_group_WW_wh3l_zg_13TeV_pt1283 = new TH1D("new_histo_group_WW_wh3l_zg_13TeV_pt1283","histo_WW",25,10,200);
   new_histo_group_WW_wh3l_zg_13TeV_pt1283->SetBinContent(6,0.009961222);
   new_histo_group_WW_wh3l_zg_13TeV_pt1283->SetBinError(6,0.009961222);
   new_histo_group_WW_wh3l_zg_13TeV_pt1283->SetEntries(1);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_zg_13TeV_pt1283->SetFillColor(ci);
   new_histo_group_WW_wh3l_zg_13TeV_pt1283->SetFillStyle(3001);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_zg_13TeV_pt1283->SetLineColor(ci);
   new_histo_group_WW_wh3l_zg_13TeV_pt1283->GetXaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_zg_13TeV_pt1283->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_zg_13TeV_pt1283->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_zg_13TeV_pt1283->GetXaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_zg_13TeV_pt1283->GetYaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_zg_13TeV_pt1283->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_zg_13TeV_pt1283->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_zg_13TeV_pt1283->GetYaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_zg_13TeV_pt1283->GetZaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_zg_13TeV_pt1283->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_zg_13TeV_pt1283->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_zg_13TeV_pt1283->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_pt1->Add(new_histo_group_WW_wh3l_zg_13TeV_pt1,"");
   
   TH1D *new_histo_group_VVV_wh3l_zg_13TeV_pt1284 = new TH1D("new_histo_group_VVV_wh3l_zg_13TeV_pt1284","histo_VVV",25,10,200);
   new_histo_group_VVV_wh3l_zg_13TeV_pt1284->SetBinContent(6,-0.0006863608);
   new_histo_group_VVV_wh3l_zg_13TeV_pt1284->SetBinError(6,0.0006863608);
   new_histo_group_VVV_wh3l_zg_13TeV_pt1284->SetEntries(1);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_zg_13TeV_pt1284->SetFillColor(ci);
   new_histo_group_VVV_wh3l_zg_13TeV_pt1284->SetFillStyle(3001);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_zg_13TeV_pt1284->SetLineColor(ci);
   new_histo_group_VVV_wh3l_zg_13TeV_pt1284->GetXaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_zg_13TeV_pt1284->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_zg_13TeV_pt1284->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_zg_13TeV_pt1284->GetXaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_zg_13TeV_pt1284->GetYaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_zg_13TeV_pt1284->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_zg_13TeV_pt1284->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_zg_13TeV_pt1284->GetYaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_zg_13TeV_pt1284->GetZaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_zg_13TeV_pt1284->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_zg_13TeV_pt1284->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_zg_13TeV_pt1284->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_pt1->Add(new_histo_group_VVV_wh3l_zg_13TeV_pt1,"");
   
   TH1D *new_histo_group_Vg_wh3l_zg_13TeV_pt1285 = new TH1D("new_histo_group_Vg_wh3l_zg_13TeV_pt1285","histo_Vg",25,10,200);
   new_histo_group_Vg_wh3l_zg_13TeV_pt1285->SetBinContent(2,3.457322);
   new_histo_group_Vg_wh3l_zg_13TeV_pt1285->SetBinContent(3,18.55493);
   new_histo_group_Vg_wh3l_zg_13TeV_pt1285->SetBinContent(4,43.07737);
   new_histo_group_Vg_wh3l_zg_13TeV_pt1285->SetBinContent(5,28.08187);
   new_histo_group_Vg_wh3l_zg_13TeV_pt1285->SetBinContent(6,8.02065);
   new_histo_group_Vg_wh3l_zg_13TeV_pt1285->SetBinContent(7,1.589216);
   new_histo_group_Vg_wh3l_zg_13TeV_pt1285->SetBinContent(8,1.245433);
   new_histo_group_Vg_wh3l_zg_13TeV_pt1285->SetBinContent(9,0.01888059);
   new_histo_group_Vg_wh3l_zg_13TeV_pt1285->SetBinContent(10,0.118661);
   new_histo_group_Vg_wh3l_zg_13TeV_pt1285->SetBinError(2,0.694917);
   new_histo_group_Vg_wh3l_zg_13TeV_pt1285->SetBinError(3,1.603207);
   new_histo_group_Vg_wh3l_zg_13TeV_pt1285->SetBinError(4,2.396959);
   new_histo_group_Vg_wh3l_zg_13TeV_pt1285->SetBinError(5,2.048236);
   new_histo_group_Vg_wh3l_zg_13TeV_pt1285->SetBinError(6,1.190291);
   new_histo_group_Vg_wh3l_zg_13TeV_pt1285->SetBinError(7,0.5395251);
   new_histo_group_Vg_wh3l_zg_13TeV_pt1285->SetBinError(8,0.3961816);
   new_histo_group_Vg_wh3l_zg_13TeV_pt1285->SetBinError(9,0.2123352);
   new_histo_group_Vg_wh3l_zg_13TeV_pt1285->SetBinError(10,0.118661);
   new_histo_group_Vg_wh3l_zg_13TeV_pt1285->SetEntries(1378);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_zg_13TeV_pt1285->SetFillColor(ci);
   new_histo_group_Vg_wh3l_zg_13TeV_pt1285->SetFillStyle(3001);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_zg_13TeV_pt1285->SetLineColor(ci);
   new_histo_group_Vg_wh3l_zg_13TeV_pt1285->GetXaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_zg_13TeV_pt1285->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_zg_13TeV_pt1285->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_zg_13TeV_pt1285->GetXaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_zg_13TeV_pt1285->GetYaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_zg_13TeV_pt1285->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_zg_13TeV_pt1285->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_zg_13TeV_pt1285->GetYaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_zg_13TeV_pt1285->GetZaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_zg_13TeV_pt1285->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_zg_13TeV_pt1285->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_zg_13TeV_pt1285->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_pt1->Add(new_histo_group_Vg_wh3l_zg_13TeV_pt1,"");
   
   TH1D *new_histo_group_ZZ_wh3l_zg_13TeV_pt1286 = new TH1D("new_histo_group_ZZ_wh3l_zg_13TeV_pt1286","histo_ZZ",25,10,200);
   new_histo_group_ZZ_wh3l_zg_13TeV_pt1286->SetBinContent(2,0.1209086);
   new_histo_group_ZZ_wh3l_zg_13TeV_pt1286->SetBinContent(3,0.1176394);
   new_histo_group_ZZ_wh3l_zg_13TeV_pt1286->SetBinContent(4,0.1428038);
   new_histo_group_ZZ_wh3l_zg_13TeV_pt1286->SetBinContent(5,0.2440266);
   new_histo_group_ZZ_wh3l_zg_13TeV_pt1286->SetBinContent(6,0.0803105);
   new_histo_group_ZZ_wh3l_zg_13TeV_pt1286->SetBinContent(7,0.002412119);
   new_histo_group_ZZ_wh3l_zg_13TeV_pt1286->SetBinContent(8,0.02824018);
   new_histo_group_ZZ_wh3l_zg_13TeV_pt1286->SetBinError(2,0.07020372);
   new_histo_group_ZZ_wh3l_zg_13TeV_pt1286->SetBinError(3,0.06912919);
   new_histo_group_ZZ_wh3l_zg_13TeV_pt1286->SetBinError(4,0.07343949);
   new_histo_group_ZZ_wh3l_zg_13TeV_pt1286->SetBinError(5,0.1014136);
   new_histo_group_ZZ_wh3l_zg_13TeV_pt1286->SetBinError(6,0.05702824);
   new_histo_group_ZZ_wh3l_zg_13TeV_pt1286->SetBinError(7,0.002412119);
   new_histo_group_ZZ_wh3l_zg_13TeV_pt1286->SetBinError(8,0.02824018);
   new_histo_group_ZZ_wh3l_zg_13TeV_pt1286->SetEntries(20);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_zg_13TeV_pt1286->SetFillColor(ci);
   new_histo_group_ZZ_wh3l_zg_13TeV_pt1286->SetFillStyle(3001);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_zg_13TeV_pt1286->SetLineColor(ci);
   new_histo_group_ZZ_wh3l_zg_13TeV_pt1286->GetXaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_zg_13TeV_pt1286->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_zg_13TeV_pt1286->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_zg_13TeV_pt1286->GetXaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_zg_13TeV_pt1286->GetYaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_zg_13TeV_pt1286->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_zg_13TeV_pt1286->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_zg_13TeV_pt1286->GetYaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_zg_13TeV_pt1286->GetZaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_zg_13TeV_pt1286->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_zg_13TeV_pt1286->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_zg_13TeV_pt1286->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_pt1->Add(new_histo_group_ZZ_wh3l_zg_13TeV_pt1,"");
   
   TH1D *new_histo_group_WZ_wh3l_zg_13TeV_pt1287 = new TH1D("new_histo_group_WZ_wh3l_zg_13TeV_pt1287","histo_WZ",25,10,200);
   new_histo_group_WZ_wh3l_zg_13TeV_pt1287->SetBinContent(2,0.09604622);
   new_histo_group_WZ_wh3l_zg_13TeV_pt1287->SetBinContent(3,0.3425023);
   new_histo_group_WZ_wh3l_zg_13TeV_pt1287->SetBinContent(4,0.6157995);
   new_histo_group_WZ_wh3l_zg_13TeV_pt1287->SetBinContent(5,0.3821572);
   new_histo_group_WZ_wh3l_zg_13TeV_pt1287->SetBinContent(6,0.2784936);
   new_histo_group_WZ_wh3l_zg_13TeV_pt1287->SetBinContent(7,0.07313556);
   new_histo_group_WZ_wh3l_zg_13TeV_pt1287->SetBinContent(8,0.04965948);
   new_histo_group_WZ_wh3l_zg_13TeV_pt1287->SetBinContent(9,0.0358967);
   new_histo_group_WZ_wh3l_zg_13TeV_pt1287->SetBinContent(10,0.004833604);
   new_histo_group_WZ_wh3l_zg_13TeV_pt1287->SetBinError(2,0.02268495);
   new_histo_group_WZ_wh3l_zg_13TeV_pt1287->SetBinError(3,0.0432124);
   new_histo_group_WZ_wh3l_zg_13TeV_pt1287->SetBinError(4,0.05831086);
   new_histo_group_WZ_wh3l_zg_13TeV_pt1287->SetBinError(5,0.04551885);
   new_histo_group_WZ_wh3l_zg_13TeV_pt1287->SetBinError(6,0.03849706);
   new_histo_group_WZ_wh3l_zg_13TeV_pt1287->SetBinError(7,0.01994098);
   new_histo_group_WZ_wh3l_zg_13TeV_pt1287->SetBinError(8,0.01675738);
   new_histo_group_WZ_wh3l_zg_13TeV_pt1287->SetBinError(9,0.01367397);
   new_histo_group_WZ_wh3l_zg_13TeV_pt1287->SetBinError(10,0.004833604);
   new_histo_group_WZ_wh3l_zg_13TeV_pt1287->SetEntries(376);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_zg_13TeV_pt1287->SetFillColor(ci);
   new_histo_group_WZ_wh3l_zg_13TeV_pt1287->SetFillStyle(3001);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_zg_13TeV_pt1287->SetLineColor(ci);
   new_histo_group_WZ_wh3l_zg_13TeV_pt1287->GetXaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_zg_13TeV_pt1287->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_zg_13TeV_pt1287->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_zg_13TeV_pt1287->GetXaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_zg_13TeV_pt1287->GetYaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_zg_13TeV_pt1287->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_zg_13TeV_pt1287->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_zg_13TeV_pt1287->GetYaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_zg_13TeV_pt1287->GetZaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_zg_13TeV_pt1287->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_zg_13TeV_pt1287->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_zg_13TeV_pt1287->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_pt1->Add(new_histo_group_WZ_wh3l_zg_13TeV_pt1,"");
   thsBackground_grouped_wh3l_zg_13TeV_pt1->Draw("hist same");
   
   Double_t _fx3071[25] = {
   13.8,
   21.4,
   29,
   36.6,
   44.2,
   51.8,
   59.4,
   67,
   74.6,
   82.2,
   89.8,
   97.4,
   105,
   112.6,
   120.2,
   127.8,
   135.4,
   143,
   150.6,
   158.2,
   165.8,
   173.4,
   181,
   188.6,
   196.2};
   Double_t _fy3071[25] = {
   0,
   3.025289,
   22.7068,
   54.01755,
   37.63556,
   10.46239,
   1.788986,
   1.131364,
   0.0547773,
   0.1234946,
   0,
   -0.009756577,
   0,
   0,
   0,
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
   Double_t _felx3071[25] = {
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8};
   Double_t _fely3071[25] = {
   0,
   1.501821,
   3.884621,
   6.054498,
   5.423019,
   2.596606,
   0.6884549,
   0.5984539,
   0.03256107,
   0.1235361,
   0,
   0.01018617,
   0,
   0,
   0,
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
   Double_t _fehx3071[25] = {
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8};
   Double_t _fehy3071[25] = {
   0,
   1.45314,
   3.884624,
   6.054492,
   5.423019,
   2.596605,
   1.118945,
   0.5984539,
   0.2260101,
   0.1235361,
   0,
   0.01018617,
   0,
   0,
   0,
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
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(25,_fx3071,_fy3071,_felx3071,_fehx3071,_fely3071,_fehy3071);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(12);
   grae->SetFillStyle(3004);
   grae->SetLineColor(12);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3071 = new TH1F("Graph_Graph3071","",100,0,219);
   Graph_Graph3071->SetMinimum(-6.029141);
   Graph_Graph3071->SetMaximum(66.08124);
   Graph_Graph3071->SetDirectory(0);
   Graph_Graph3071->SetStats(0);
   Graph_Graph3071->SetLineStyle(0);
   Graph_Graph3071->SetMarkerStyle(20);
   Graph_Graph3071->GetXaxis()->SetLabelFont(42);
   Graph_Graph3071->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3071->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3071->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3071->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3071->GetXaxis()->SetTitleFont(42);
   Graph_Graph3071->GetYaxis()->SetLabelFont(42);
   Graph_Graph3071->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3071->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3071->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3071->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3071->GetYaxis()->SetTitleFont(42);
   Graph_Graph3071->GetZaxis()->SetLabelFont(42);
   Graph_Graph3071->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3071->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3071->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3071->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3071);
   
   grae->Draw("2");
   
   Double_t _fx3072[25] = {
   13.8,
   21.4,
   29,
   36.6,
   44.2,
   51.8,
   59.4,
   67,
   74.6,
   82.2,
   89.8,
   97.4,
   105,
   112.6,
   120.2,
   127.8,
   135.4,
   143,
   150.6,
   158.2,
   165.8,
   173.4,
   181,
   188.6,
   196.2};
   Double_t _fy3072[25] = {
   0,
   6,
   24,
   54,
   39,
   7,
   1,
   1,
   1,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t _felx3072[25] = {
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8};
   Double_t _fely3072[25] = {
   0,
   2.379969,
   4.864704,
   7.325785,
   6.218223,
   2.581513,
   0.8272524,
   0.8272524,
   0.8272524,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t _fehx3072[25] = {
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8};
   Double_t _fehy3072[25] = {
   1.147908,
   3.583713,
   5.967054,
   8.394025,
   7.298524,
   3.770356,
   2.29957,
   2.29957,
   2.29957,
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
   grae = new TGraphAsymmErrors(25,_fx3072,_fy3072,_felx3072,_fehx3072,_fely3072,_fehy3072);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(1);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3072 = new TH1F("Graph_Graph3072","",100,0,219);
   Graph_Graph3072->SetMinimum(0);
   Graph_Graph3072->SetMaximum(68.63343);
   Graph_Graph3072->SetDirectory(0);
   Graph_Graph3072->SetStats(0);
   Graph_Graph3072->SetLineStyle(0);
   Graph_Graph3072->SetMarkerStyle(20);
   Graph_Graph3072->GetXaxis()->SetLabelFont(42);
   Graph_Graph3072->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3072->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3072->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3072->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3072->GetXaxis()->SetTitleFont(42);
   Graph_Graph3072->GetYaxis()->SetLabelFont(42);
   Graph_Graph3072->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3072->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3072->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3072->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3072->GetYaxis()->SetTitleFont(42);
   Graph_Graph3072->GetZaxis()->SetLabelFont(42);
   Graph_Graph3072->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3072->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3072->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3072->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3072);
   
   grae->Draw("p0");
   
   TLegend *leg = new TLegend(0.2,0.7,0.8,0.9,NULL,"brNDC");
   leg->SetTextFont(62);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("new_histo_group_Fake_wh3l_zg_13TeV_pt1","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_zg_13TeV_pt1","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_zg_13TeV_pt1","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_zg_13TeV_pt1","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_zg_13TeV_pt1","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_zg_13TeV_pt1","WZ","F");

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
   entry=leg->AddEntry("new_histo_DATA_wh3l_zg_13TeV_pt1","Data","EPL");
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
   entry=leg->AddEntry("new_histo_group_Fake_wh3l_zg_13TeV_pt1","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_zg_13TeV_pt1","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_zg_13TeV_pt1","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_zg_13TeV_pt1","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_zg_13TeV_pt1","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_zg_13TeV_pt1","WZ","F");

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
   entry=leg->AddEntry("new_histo_DATA_wh3l_zg_13TeV_pt1","Data","EPL");
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
   
   TH1F *hframe_copy288 = new TH1F("hframe_copy288","",1000,10,200);
   hframe_copy288->SetMinimum(0);
   hframe_copy288->SetMaximum(153.3712);
   hframe_copy288->SetDirectory(0);
   hframe_copy288->SetStats(0);
   hframe_copy288->SetLineStyle(0);
   hframe_copy288->SetMarkerStyle(20);
   hframe_copy288->GetXaxis()->SetTitle("lept1_p_{T} [GeV]");
   hframe_copy288->GetXaxis()->SetNdivisions(506);
   hframe_copy288->GetXaxis()->SetLabelFont(42);
   hframe_copy288->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy288->GetXaxis()->SetLabelSize(0.05);
   hframe_copy288->GetXaxis()->SetTitleSize(0.06);
   hframe_copy288->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy288->GetXaxis()->SetTitleFont(42);
   hframe_copy288->GetYaxis()->SetTitle("Events");
   hframe_copy288->GetYaxis()->SetLabelFont(42);
   hframe_copy288->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy288->GetYaxis()->SetLabelSize(0.05);
   hframe_copy288->GetYaxis()->SetTitleSize(0.06);
   hframe_copy288->GetYaxis()->SetTitleOffset(1.25);
   hframe_copy288->GetYaxis()->SetTitleFont(42);
   hframe_copy288->GetZaxis()->SetLabelFont(42);
   hframe_copy288->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy288->GetZaxis()->SetLabelSize(0.05);
   hframe_copy288->GetZaxis()->SetTitleSize(0.06);
   hframe_copy288->GetZaxis()->SetTitleFont(42);
   hframe_copy288->Draw("sameaxis");
   ccwh3l_zg_13TeV_pt1->Modified();
   ccwh3l_zg_13TeV_pt1->cd();
   ccwh3l_zg_13TeV_pt1->SetSelected(ccwh3l_zg_13TeV_pt1);
}
