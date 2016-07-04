void c_wh3l_zg_13TeV_pt1()
{
//=========Macro generated from canvas: ccwh3l_zg_13TeV_pt1/cc
//=========  (Sat Jul  2 20:39:50 2016) by ROOT version6.02/13
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
   
   TH1F *hframe235 = new TH1F("hframe235","",1000,10,200);
   hframe235->SetMinimum(0);
   hframe235->SetMaximum(153.3712);
   hframe235->SetDirectory(0);
   hframe235->SetStats(0);
   hframe235->SetLineStyle(0);
   hframe235->SetMarkerStyle(20);
   hframe235->GetXaxis()->SetTitle("lept1_p_{T} [GeV]");
   hframe235->GetXaxis()->SetNdivisions(506);
   hframe235->GetXaxis()->SetLabelFont(42);
   hframe235->GetXaxis()->SetLabelOffset(0.007);
   hframe235->GetXaxis()->SetLabelSize(0.05);
   hframe235->GetXaxis()->SetTitleSize(0.06);
   hframe235->GetXaxis()->SetTitleOffset(0.9);
   hframe235->GetXaxis()->SetTitleFont(42);
   hframe235->GetYaxis()->SetTitle("Events");
   hframe235->GetYaxis()->SetLabelFont(42);
   hframe235->GetYaxis()->SetLabelOffset(0.007);
   hframe235->GetYaxis()->SetLabelSize(0.05);
   hframe235->GetYaxis()->SetTitleSize(0.06);
   hframe235->GetYaxis()->SetTitleOffset(1.25);
   hframe235->GetYaxis()->SetTitleFont(42);
   hframe235->GetZaxis()->SetLabelFont(42);
   hframe235->GetZaxis()->SetLabelOffset(0.007);
   hframe235->GetZaxis()->SetLabelSize(0.05);
   hframe235->GetZaxis()->SetTitleSize(0.06);
   hframe235->GetZaxis()->SetTitleFont(42);
   hframe235->Draw(" ");
   
   THStack *thsBackground_grouped_wh3l_zg_13TeV_pt1 = new THStack();
   thsBackground_grouped_wh3l_zg_13TeV_pt1->SetName("thsBackground_grouped_wh3l_zg_13TeV_pt1");
   thsBackground_grouped_wh3l_zg_13TeV_pt1->SetTitle("thsBackground_grouped_wh3l_zg_13TeV_pt1");
   
   TH1F *thsBackground_grouped_wh3l_zg_13TeV_pt1_stack_53 = new TH1F("thsBackground_grouped_wh3l_zg_13TeV_pt1_stack_53","thsBackground_grouped_wh3l_zg_13TeV_pt1",25,10,200);
   thsBackground_grouped_wh3l_zg_13TeV_pt1_stack_53->SetMinimum(-1.347193);
   thsBackground_grouped_wh3l_zg_13TeV_pt1_stack_53->SetMaximum(56.72518);
   thsBackground_grouped_wh3l_zg_13TeV_pt1_stack_53->SetDirectory(0);
   thsBackground_grouped_wh3l_zg_13TeV_pt1_stack_53->SetStats(0);
   thsBackground_grouped_wh3l_zg_13TeV_pt1_stack_53->SetLineStyle(0);
   thsBackground_grouped_wh3l_zg_13TeV_pt1_stack_53->SetMarkerStyle(20);
   thsBackground_grouped_wh3l_zg_13TeV_pt1_stack_53->GetXaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_pt1_stack_53->GetXaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_zg_13TeV_pt1_stack_53->GetXaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_zg_13TeV_pt1_stack_53->GetXaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_zg_13TeV_pt1_stack_53->GetXaxis()->SetTitleOffset(0.9);
   thsBackground_grouped_wh3l_zg_13TeV_pt1_stack_53->GetXaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_pt1_stack_53->GetYaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_pt1_stack_53->GetYaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_zg_13TeV_pt1_stack_53->GetYaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_zg_13TeV_pt1_stack_53->GetYaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_zg_13TeV_pt1_stack_53->GetYaxis()->SetTitleOffset(1.25);
   thsBackground_grouped_wh3l_zg_13TeV_pt1_stack_53->GetYaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_pt1_stack_53->GetZaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_pt1_stack_53->GetZaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_zg_13TeV_pt1_stack_53->GetZaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_zg_13TeV_pt1_stack_53->GetZaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_zg_13TeV_pt1_stack_53->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_pt1->SetHistogram(thsBackground_grouped_wh3l_zg_13TeV_pt1_stack_53);
   
   
   TH1D *new_histo_group_Fake_wh3l_zg_13TeV_pt1236 = new TH1D("new_histo_group_Fake_wh3l_zg_13TeV_pt1236","histo_Fake",25,10,200);
   new_histo_group_Fake_wh3l_zg_13TeV_pt1236->SetBinContent(2,-0.648988);
   new_histo_group_Fake_wh3l_zg_13TeV_pt1236->SetBinContent(3,3.691734);
   new_histo_group_Fake_wh3l_zg_13TeV_pt1236->SetBinContent(4,10.18158);
   new_histo_group_Fake_wh3l_zg_13TeV_pt1236->SetBinContent(5,8.360321);
   new_histo_group_Fake_wh3l_zg_13TeV_pt1236->SetBinContent(6,2.07366);
   new_histo_group_Fake_wh3l_zg_13TeV_pt1236->SetBinContent(7,0.1242226);
   new_histo_group_Fake_wh3l_zg_13TeV_pt1236->SetBinContent(8,-0.1919688);
   new_histo_group_Fake_wh3l_zg_13TeV_pt1236->SetBinContent(12,-0.009756577);
   new_histo_group_Fake_wh3l_zg_13TeV_pt1236->SetBinError(2,0.6982045);
   new_histo_group_Fake_wh3l_zg_13TeV_pt1236->SetBinError(3,1.973557);
   new_histo_group_Fake_wh3l_zg_13TeV_pt1236->SetBinError(4,2.566911);
   new_histo_group_Fake_wh3l_zg_13TeV_pt1236->SetBinError(5,2.391573);
   new_histo_group_Fake_wh3l_zg_13TeV_pt1236->SetBinError(6,1.214989);
   new_histo_group_Fake_wh3l_zg_13TeV_pt1236->SetBinError(7,0.5556206);
   new_histo_group_Fake_wh3l_zg_13TeV_pt1236->SetBinError(8,0.153503);
   new_histo_group_Fake_wh3l_zg_13TeV_pt1236->SetBinError(12,0.009756577);
   new_histo_group_Fake_wh3l_zg_13TeV_pt1236->SetEntries(460);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_zg_13TeV_pt1236->SetFillColor(ci);
   new_histo_group_Fake_wh3l_zg_13TeV_pt1236->SetFillStyle(3001);

   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_zg_13TeV_pt1236->SetLineColor(ci);
   new_histo_group_Fake_wh3l_zg_13TeV_pt1236->GetXaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_zg_13TeV_pt1236->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_zg_13TeV_pt1236->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_zg_13TeV_pt1236->GetXaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_zg_13TeV_pt1236->GetYaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_zg_13TeV_pt1236->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_zg_13TeV_pt1236->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_zg_13TeV_pt1236->GetYaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_zg_13TeV_pt1236->GetZaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_zg_13TeV_pt1236->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_zg_13TeV_pt1236->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_zg_13TeV_pt1236->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_pt1->Add(new_histo_group_Fake_wh3l_zg_13TeV_pt1,"");
   
   TH1D *new_histo_group_WW_wh3l_zg_13TeV_pt1237 = new TH1D("new_histo_group_WW_wh3l_zg_13TeV_pt1237","histo_WW",25,10,200);
   new_histo_group_WW_wh3l_zg_13TeV_pt1237->SetBinContent(6,0.009961222);
   new_histo_group_WW_wh3l_zg_13TeV_pt1237->SetBinError(6,0.009961222);
   new_histo_group_WW_wh3l_zg_13TeV_pt1237->SetEntries(1);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_zg_13TeV_pt1237->SetFillColor(ci);
   new_histo_group_WW_wh3l_zg_13TeV_pt1237->SetFillStyle(3001);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_zg_13TeV_pt1237->SetLineColor(ci);
   new_histo_group_WW_wh3l_zg_13TeV_pt1237->GetXaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_zg_13TeV_pt1237->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_zg_13TeV_pt1237->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_zg_13TeV_pt1237->GetXaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_zg_13TeV_pt1237->GetYaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_zg_13TeV_pt1237->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_zg_13TeV_pt1237->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_zg_13TeV_pt1237->GetYaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_zg_13TeV_pt1237->GetZaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_zg_13TeV_pt1237->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_zg_13TeV_pt1237->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_zg_13TeV_pt1237->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_pt1->Add(new_histo_group_WW_wh3l_zg_13TeV_pt1,"");
   
   TH1D *new_histo_group_Vg_wh3l_zg_13TeV_pt1238 = new TH1D("new_histo_group_Vg_wh3l_zg_13TeV_pt1238","histo_Vg",25,10,200);
   new_histo_group_Vg_wh3l_zg_13TeV_pt1238->SetBinContent(2,3.457322);
   new_histo_group_Vg_wh3l_zg_13TeV_pt1238->SetBinContent(3,18.55493);
   new_histo_group_Vg_wh3l_zg_13TeV_pt1238->SetBinContent(4,43.07737);
   new_histo_group_Vg_wh3l_zg_13TeV_pt1238->SetBinContent(5,27.88438);
   new_histo_group_Vg_wh3l_zg_13TeV_pt1238->SetBinContent(6,8.02065);
   new_histo_group_Vg_wh3l_zg_13TeV_pt1238->SetBinContent(7,1.589216);
   new_histo_group_Vg_wh3l_zg_13TeV_pt1238->SetBinContent(8,1.245433);
   new_histo_group_Vg_wh3l_zg_13TeV_pt1238->SetBinContent(9,0.01888059);
   new_histo_group_Vg_wh3l_zg_13TeV_pt1238->SetBinContent(10,0.118661);
   new_histo_group_Vg_wh3l_zg_13TeV_pt1238->SetBinError(2,0.694917);
   new_histo_group_Vg_wh3l_zg_13TeV_pt1238->SetBinError(3,1.603207);
   new_histo_group_Vg_wh3l_zg_13TeV_pt1238->SetBinError(4,2.396959);
   new_histo_group_Vg_wh3l_zg_13TeV_pt1238->SetBinError(5,2.043017);
   new_histo_group_Vg_wh3l_zg_13TeV_pt1238->SetBinError(6,1.190291);
   new_histo_group_Vg_wh3l_zg_13TeV_pt1238->SetBinError(7,0.5395251);
   new_histo_group_Vg_wh3l_zg_13TeV_pt1238->SetBinError(8,0.3961816);
   new_histo_group_Vg_wh3l_zg_13TeV_pt1238->SetBinError(9,0.2123352);
   new_histo_group_Vg_wh3l_zg_13TeV_pt1238->SetBinError(10,0.118661);
   new_histo_group_Vg_wh3l_zg_13TeV_pt1238->SetEntries(1376);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_zg_13TeV_pt1238->SetFillColor(ci);
   new_histo_group_Vg_wh3l_zg_13TeV_pt1238->SetFillStyle(3001);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_zg_13TeV_pt1238->SetLineColor(ci);
   new_histo_group_Vg_wh3l_zg_13TeV_pt1238->GetXaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_zg_13TeV_pt1238->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_zg_13TeV_pt1238->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_zg_13TeV_pt1238->GetXaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_zg_13TeV_pt1238->GetYaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_zg_13TeV_pt1238->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_zg_13TeV_pt1238->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_zg_13TeV_pt1238->GetYaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_zg_13TeV_pt1238->GetZaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_zg_13TeV_pt1238->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_zg_13TeV_pt1238->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_zg_13TeV_pt1238->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_pt1->Add(new_histo_group_Vg_wh3l_zg_13TeV_pt1,"");
   
   TH1D *new_histo_group_ZZ_wh3l_zg_13TeV_pt1239 = new TH1D("new_histo_group_ZZ_wh3l_zg_13TeV_pt1239","histo_ZZ",25,10,200);
   new_histo_group_ZZ_wh3l_zg_13TeV_pt1239->SetBinContent(2,0.08567537);
   new_histo_group_ZZ_wh3l_zg_13TeV_pt1239->SetBinContent(3,0.1176394);
   new_histo_group_ZZ_wh3l_zg_13TeV_pt1239->SetBinContent(4,0.1216718);
   new_histo_group_ZZ_wh3l_zg_13TeV_pt1239->SetBinContent(5,0.2012711);
   new_histo_group_ZZ_wh3l_zg_13TeV_pt1239->SetBinContent(6,0.03645855);
   new_histo_group_ZZ_wh3l_zg_13TeV_pt1239->SetBinContent(7,0.002412119);
   new_histo_group_ZZ_wh3l_zg_13TeV_pt1239->SetBinContent(8,0.02824018);
   new_histo_group_ZZ_wh3l_zg_13TeV_pt1239->SetBinError(2,0.06072218);
   new_histo_group_ZZ_wh3l_zg_13TeV_pt1239->SetBinError(3,0.06912919);
   new_histo_group_ZZ_wh3l_zg_13TeV_pt1239->SetBinError(4,0.07033346);
   new_histo_group_ZZ_wh3l_zg_13TeV_pt1239->SetBinError(5,0.09196018);
   new_histo_group_ZZ_wh3l_zg_13TeV_pt1239->SetBinError(6,0.03645855);
   new_histo_group_ZZ_wh3l_zg_13TeV_pt1239->SetBinError(7,0.002412119);
   new_histo_group_ZZ_wh3l_zg_13TeV_pt1239->SetBinError(8,0.02824018);
   new_histo_group_ZZ_wh3l_zg_13TeV_pt1239->SetEntries(16);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_zg_13TeV_pt1239->SetFillColor(ci);
   new_histo_group_ZZ_wh3l_zg_13TeV_pt1239->SetFillStyle(3001);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_zg_13TeV_pt1239->SetLineColor(ci);
   new_histo_group_ZZ_wh3l_zg_13TeV_pt1239->GetXaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_zg_13TeV_pt1239->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_zg_13TeV_pt1239->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_zg_13TeV_pt1239->GetXaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_zg_13TeV_pt1239->GetYaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_zg_13TeV_pt1239->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_zg_13TeV_pt1239->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_zg_13TeV_pt1239->GetYaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_zg_13TeV_pt1239->GetZaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_zg_13TeV_pt1239->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_zg_13TeV_pt1239->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_zg_13TeV_pt1239->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_pt1->Add(new_histo_group_ZZ_wh3l_zg_13TeV_pt1,"");
   
   TH1D *new_histo_group_WZ_wh3l_zg_13TeV_pt1240 = new TH1D("new_histo_group_WZ_wh3l_zg_13TeV_pt1240","histo_WZ",25,10,200);
   new_histo_group_WZ_wh3l_zg_13TeV_pt1240->SetBinContent(2,0.09604622);
   new_histo_group_WZ_wh3l_zg_13TeV_pt1240->SetBinContent(3,0.3425023);
   new_histo_group_WZ_wh3l_zg_13TeV_pt1240->SetBinContent(4,0.6157995);
   new_histo_group_WZ_wh3l_zg_13TeV_pt1240->SetBinContent(5,0.3821572);
   new_histo_group_WZ_wh3l_zg_13TeV_pt1240->SetBinContent(6,0.2784936);
   new_histo_group_WZ_wh3l_zg_13TeV_pt1240->SetBinContent(7,0.07313556);
   new_histo_group_WZ_wh3l_zg_13TeV_pt1240->SetBinContent(8,0.04965948);
   new_histo_group_WZ_wh3l_zg_13TeV_pt1240->SetBinContent(9,0.0358967);
   new_histo_group_WZ_wh3l_zg_13TeV_pt1240->SetBinContent(10,0.004833604);
   new_histo_group_WZ_wh3l_zg_13TeV_pt1240->SetBinError(2,0.02268495);
   new_histo_group_WZ_wh3l_zg_13TeV_pt1240->SetBinError(3,0.0432124);
   new_histo_group_WZ_wh3l_zg_13TeV_pt1240->SetBinError(4,0.05831086);
   new_histo_group_WZ_wh3l_zg_13TeV_pt1240->SetBinError(5,0.04551885);
   new_histo_group_WZ_wh3l_zg_13TeV_pt1240->SetBinError(6,0.03849706);
   new_histo_group_WZ_wh3l_zg_13TeV_pt1240->SetBinError(7,0.01994098);
   new_histo_group_WZ_wh3l_zg_13TeV_pt1240->SetBinError(8,0.01675738);
   new_histo_group_WZ_wh3l_zg_13TeV_pt1240->SetBinError(9,0.01367397);
   new_histo_group_WZ_wh3l_zg_13TeV_pt1240->SetBinError(10,0.004833604);
   new_histo_group_WZ_wh3l_zg_13TeV_pt1240->SetEntries(376);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_zg_13TeV_pt1240->SetFillColor(ci);
   new_histo_group_WZ_wh3l_zg_13TeV_pt1240->SetFillStyle(3001);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_zg_13TeV_pt1240->SetLineColor(ci);
   new_histo_group_WZ_wh3l_zg_13TeV_pt1240->GetXaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_zg_13TeV_pt1240->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_zg_13TeV_pt1240->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_zg_13TeV_pt1240->GetXaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_zg_13TeV_pt1240->GetYaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_zg_13TeV_pt1240->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_zg_13TeV_pt1240->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_zg_13TeV_pt1240->GetYaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_zg_13TeV_pt1240->GetZaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_zg_13TeV_pt1240->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_zg_13TeV_pt1240->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_zg_13TeV_pt1240->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_pt1->Add(new_histo_group_WZ_wh3l_zg_13TeV_pt1,"");
   
   TH1D *new_histo_group_Higgs_wh3l_zg_13TeV_pt1241 = new TH1D("new_histo_group_Higgs_wh3l_zg_13TeV_pt1241","histo_H_htt",25,10,200);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt1241->SetBinContent(2,0.00321391);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt1241->SetBinContent(3,0.01123054);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt1241->SetBinContent(4,0.02755996);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt1241->SetBinContent(5,0.02935608);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt1241->SetBinContent(6,0.00812441);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt1241->SetBinContent(7,0.006490831);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt1241->SetBinContent(8,0.002494334);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt1241->SetBinContent(9,0.0003065907);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt1241->SetBinError(2,0.001933089);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt1241->SetBinError(3,0.0032285);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt1241->SetBinError(4,0.005172925);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt1241->SetBinError(5,0.006054892);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt1241->SetBinError(6,0.002938305);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt1241->SetBinError(7,0.002676181);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt1241->SetBinError(8,0.001274748);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt1241->SetBinError(9,0.0003065907);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt1241->SetEntries(180);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt1241->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_zg_13TeV_pt1241->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt1241->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt1241->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt1241->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt1241->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt1241->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt1241->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt1241->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt1241->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt1241->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt1241->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt1241->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt1241->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt1241->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_pt1->Add(new_histo_group_Higgs_wh3l_zg_13TeV_pt1,"");
   thsBackground_grouped_wh3l_zg_13TeV_pt1->Draw("hist same");
   
   thsSignal_grouped_wh3l_zg_13TeV_pt1 = new THStack();
   thsSignal_grouped_wh3l_zg_13TeV_pt1->SetName("thsSignal_grouped_wh3l_zg_13TeV_pt1");
   thsSignal_grouped_wh3l_zg_13TeV_pt1->SetTitle("thsSignal_grouped_wh3l_zg_13TeV_pt1");
   
   TH1F *thsSignal_grouped_wh3l_zg_13TeV_pt1_stack_54 = new TH1F("thsSignal_grouped_wh3l_zg_13TeV_pt1_stack_54","thsSignal_grouped_wh3l_zg_13TeV_pt1",25,10,200);
   thsSignal_grouped_wh3l_zg_13TeV_pt1_stack_54->SetMinimum(0);
   thsSignal_grouped_wh3l_zg_13TeV_pt1_stack_54->SetMaximum(0.03718152);
   thsSignal_grouped_wh3l_zg_13TeV_pt1_stack_54->SetDirectory(0);
   thsSignal_grouped_wh3l_zg_13TeV_pt1_stack_54->SetStats(0);
   thsSignal_grouped_wh3l_zg_13TeV_pt1_stack_54->SetLineStyle(0);
   thsSignal_grouped_wh3l_zg_13TeV_pt1_stack_54->SetMarkerStyle(20);
   thsSignal_grouped_wh3l_zg_13TeV_pt1_stack_54->GetXaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_zg_13TeV_pt1_stack_54->GetXaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_zg_13TeV_pt1_stack_54->GetXaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_zg_13TeV_pt1_stack_54->GetXaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_zg_13TeV_pt1_stack_54->GetXaxis()->SetTitleOffset(0.9);
   thsSignal_grouped_wh3l_zg_13TeV_pt1_stack_54->GetXaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_zg_13TeV_pt1_stack_54->GetYaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_zg_13TeV_pt1_stack_54->GetYaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_zg_13TeV_pt1_stack_54->GetYaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_zg_13TeV_pt1_stack_54->GetYaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_zg_13TeV_pt1_stack_54->GetYaxis()->SetTitleOffset(1.25);
   thsSignal_grouped_wh3l_zg_13TeV_pt1_stack_54->GetYaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_zg_13TeV_pt1_stack_54->GetZaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_zg_13TeV_pt1_stack_54->GetZaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_zg_13TeV_pt1_stack_54->GetZaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_zg_13TeV_pt1_stack_54->GetZaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_zg_13TeV_pt1_stack_54->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_zg_13TeV_pt1->SetHistogram(thsSignal_grouped_wh3l_zg_13TeV_pt1_stack_54);
   
   
   TH1D *new_histo_group_Higgs_wh3l_zg_13TeV_pt1242 = new TH1D("new_histo_group_Higgs_wh3l_zg_13TeV_pt1242","histo_H_htt",25,10,200);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt1242->SetBinContent(2,0.00321391);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt1242->SetBinContent(3,0.01123054);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt1242->SetBinContent(4,0.02755996);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt1242->SetBinContent(5,0.02935608);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt1242->SetBinContent(6,0.00812441);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt1242->SetBinContent(7,0.006490831);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt1242->SetBinContent(8,0.002494334);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt1242->SetBinContent(9,0.0003065907);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt1242->SetBinError(2,0.001933089);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt1242->SetBinError(3,0.0032285);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt1242->SetBinError(4,0.005172925);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt1242->SetBinError(5,0.006054892);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt1242->SetBinError(6,0.002938305);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt1242->SetBinError(7,0.002676181);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt1242->SetBinError(8,0.001274748);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt1242->SetBinError(9,0.0003065907);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt1242->SetEntries(180);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt1242->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_zg_13TeV_pt1242->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt1242->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt1242->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt1242->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt1242->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt1242->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt1242->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt1242->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt1242->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt1242->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt1242->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt1242->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt1242->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt1242->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_zg_13TeV_pt1->Add(new_histo_group_Higgs_wh3l_zg_13TeV_pt1,"");
   thsSignal_grouped_wh3l_zg_13TeV_pt1->Draw("hist same noclear");
   
   Double_t _fx3053[25] = {
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
   Double_t _fy3053[25] = {
   0,
   2.990056,
   22.7068,
   53.99642,
   36.82813,
   10.41922,
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
   Double_t _felx3053[25] = {
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
   Double_t _fely3053[25] = {
   0,
   1.509683,
   4.031689,
   6.498657,
   5.580901,
   2.623523,
   0.6915542,
   0.6044491,
   0.03267926,
   0.1236756,
   0,
   0.01033691,
   0,
   0,
   0,
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
   Double_t _fehx3053[25] = {
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
   Double_t _fehy3053[25] = {
   0,
   1.463082,
   4.025737,
   6.487866,
   5.57727,
   2.622474,
   1.120562,
   0.6047997,
   0.2260262,
   0.123683,
   0,
   0.01033691,
   0,
   0,
   0,
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
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(25,_fx3053,_fy3053,_felx3053,_fehx3053,_fely3053,_fehy3053);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(12);
   grae->SetFillStyle(3004);
   grae->SetLineColor(12);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3053 = new TH1F("Graph_Graph3053","",100,0,219);
   Graph_Graph3053->SetMinimum(-6.070531);
   Graph_Graph3053->SetMaximum(66.53472);
   Graph_Graph3053->SetDirectory(0);
   Graph_Graph3053->SetStats(0);
   Graph_Graph3053->SetLineStyle(0);
   Graph_Graph3053->SetMarkerStyle(20);
   Graph_Graph3053->GetXaxis()->SetLabelFont(42);
   Graph_Graph3053->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3053->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3053->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3053->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3053->GetXaxis()->SetTitleFont(42);
   Graph_Graph3053->GetYaxis()->SetLabelFont(42);
   Graph_Graph3053->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3053->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3053->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3053->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3053->GetYaxis()->SetTitleFont(42);
   Graph_Graph3053->GetZaxis()->SetLabelFont(42);
   Graph_Graph3053->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3053->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3053->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3053->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3053);
   
   grae->Draw("2");
   
   Double_t _fx3054[25] = {
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
   Double_t _fy3054[25] = {
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
   Double_t _felx3054[25] = {
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
   Double_t _fely3054[25] = {
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
   Double_t _fehx3054[25] = {
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
   Double_t _fehy3054[25] = {
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
   grae = new TGraphAsymmErrors(25,_fx3054,_fy3054,_felx3054,_fehx3054,_fely3054,_fehy3054);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(1);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3054 = new TH1F("Graph_Graph3054","",100,0,219);
   Graph_Graph3054->SetMinimum(0);
   Graph_Graph3054->SetMaximum(68.63343);
   Graph_Graph3054->SetDirectory(0);
   Graph_Graph3054->SetStats(0);
   Graph_Graph3054->SetLineStyle(0);
   Graph_Graph3054->SetMarkerStyle(20);
   Graph_Graph3054->GetXaxis()->SetLabelFont(42);
   Graph_Graph3054->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3054->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3054->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3054->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3054->GetXaxis()->SetTitleFont(42);
   Graph_Graph3054->GetYaxis()->SetLabelFont(42);
   Graph_Graph3054->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3054->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3054->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3054->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3054->GetYaxis()->SetTitleFont(42);
   Graph_Graph3054->GetZaxis()->SetLabelFont(42);
   Graph_Graph3054->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3054->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3054->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3054->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3054);
   
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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_zg_13TeV_pt1","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_zg_13TeV_pt1","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
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
   
   TH1F *hframe_copy243 = new TH1F("hframe_copy243","",1000,10,200);
   hframe_copy243->SetMinimum(0);
   hframe_copy243->SetMaximum(153.3712);
   hframe_copy243->SetDirectory(0);
   hframe_copy243->SetStats(0);
   hframe_copy243->SetLineStyle(0);
   hframe_copy243->SetMarkerStyle(20);
   hframe_copy243->GetXaxis()->SetTitle("lept1_p_{T} [GeV]");
   hframe_copy243->GetXaxis()->SetNdivisions(506);
   hframe_copy243->GetXaxis()->SetLabelFont(42);
   hframe_copy243->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy243->GetXaxis()->SetLabelSize(0.05);
   hframe_copy243->GetXaxis()->SetTitleSize(0.06);
   hframe_copy243->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy243->GetXaxis()->SetTitleFont(42);
   hframe_copy243->GetYaxis()->SetTitle("Events");
   hframe_copy243->GetYaxis()->SetLabelFont(42);
   hframe_copy243->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy243->GetYaxis()->SetLabelSize(0.05);
   hframe_copy243->GetYaxis()->SetTitleSize(0.06);
   hframe_copy243->GetYaxis()->SetTitleOffset(1.25);
   hframe_copy243->GetYaxis()->SetTitleFont(42);
   hframe_copy243->GetZaxis()->SetLabelFont(42);
   hframe_copy243->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy243->GetZaxis()->SetLabelSize(0.05);
   hframe_copy243->GetZaxis()->SetTitleSize(0.06);
   hframe_copy243->GetZaxis()->SetTitleFont(42);
   hframe_copy243->Draw("sameaxis");
   ccwh3l_zg_13TeV_pt1->Modified();
   ccwh3l_zg_13TeV_pt1->cd();
   ccwh3l_zg_13TeV_pt1->SetSelected(ccwh3l_zg_13TeV_pt1);
}
