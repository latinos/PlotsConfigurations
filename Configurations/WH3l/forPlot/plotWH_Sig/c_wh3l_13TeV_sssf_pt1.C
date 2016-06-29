void c_wh3l_13TeV_sssf_pt1()
{
//=========Macro generated from canvas: ccwh3l_13TeV_sssf_pt1/cc
//=========  (Wed Jun 29 01:34:27 2016) by ROOT version6.02/13
   TCanvas *ccwh3l_13TeV_sssf_pt1 = new TCanvas("ccwh3l_13TeV_sssf_pt1", "cc",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   ccwh3l_13TeV_sssf_pt1->SetHighLightColor(2);
   ccwh3l_13TeV_sssf_pt1->Range(-28,-0.4722691,209.5,3.16057);
   ccwh3l_13TeV_sssf_pt1->SetFillColor(0);
   ccwh3l_13TeV_sssf_pt1->SetBorderMode(0);
   ccwh3l_13TeV_sssf_pt1->SetBorderSize(2);
   ccwh3l_13TeV_sssf_pt1->SetTickx(1);
   ccwh3l_13TeV_sssf_pt1->SetTicky(1);
   ccwh3l_13TeV_sssf_pt1->SetLeftMargin(0.16);
   ccwh3l_13TeV_sssf_pt1->SetRightMargin(0.04);
   ccwh3l_13TeV_sssf_pt1->SetTopMargin(0.05);
   ccwh3l_13TeV_sssf_pt1->SetBottomMargin(0.13);
   ccwh3l_13TeV_sssf_pt1->SetFrameFillStyle(0);
   ccwh3l_13TeV_sssf_pt1->SetFrameBorderMode(0);
   ccwh3l_13TeV_sssf_pt1->SetFrameFillStyle(0);
   ccwh3l_13TeV_sssf_pt1->SetFrameBorderMode(0);
   
   TH1F *hframe691 = new TH1F("hframe691","",1000,10,200);
   hframe691->SetMinimum(0);
   hframe691->SetMaximum(2.978928);
   hframe691->SetDirectory(0);
   hframe691->SetStats(0);
   hframe691->SetLineStyle(0);
   hframe691->SetMarkerStyle(20);
   hframe691->GetXaxis()->SetTitle("lept1_p_{T} [GeV]");
   hframe691->GetXaxis()->SetNdivisions(506);
   hframe691->GetXaxis()->SetLabelFont(42);
   hframe691->GetXaxis()->SetLabelOffset(0.007);
   hframe691->GetXaxis()->SetLabelSize(0.05);
   hframe691->GetXaxis()->SetTitleSize(0.06);
   hframe691->GetXaxis()->SetTitleOffset(0.9);
   hframe691->GetXaxis()->SetTitleFont(42);
   hframe691->GetYaxis()->SetTitle("Events");
   hframe691->GetYaxis()->SetLabelFont(42);
   hframe691->GetYaxis()->SetLabelOffset(0.007);
   hframe691->GetYaxis()->SetLabelSize(0.05);
   hframe691->GetYaxis()->SetTitleSize(0.06);
   hframe691->GetYaxis()->SetTitleOffset(1.25);
   hframe691->GetYaxis()->SetTitleFont(42);
   hframe691->GetZaxis()->SetLabelFont(42);
   hframe691->GetZaxis()->SetLabelOffset(0.007);
   hframe691->GetZaxis()->SetLabelSize(0.05);
   hframe691->GetZaxis()->SetTitleSize(0.06);
   hframe691->GetZaxis()->SetTitleFont(42);
   hframe691->Draw(" ");
   
   THStack *thsBackground_grouped_wh3l_13TeV_sssf_pt1 = new THStack();
   thsBackground_grouped_wh3l_13TeV_sssf_pt1->SetName("thsBackground_grouped_wh3l_13TeV_sssf_pt1");
   thsBackground_grouped_wh3l_13TeV_sssf_pt1->SetTitle("thsBackground_grouped_wh3l_13TeV_sssf_pt1");
   
   TH1F *thsBackground_grouped_wh3l_13TeV_sssf_pt1_stack_139 = new TH1F("thsBackground_grouped_wh3l_13TeV_sssf_pt1_stack_139","thsBackground_grouped_wh3l_13TeV_sssf_pt1",25,10,200);
   thsBackground_grouped_wh3l_13TeV_sssf_pt1_stack_139->SetMinimum(-0.510441);
   thsBackground_grouped_wh3l_13TeV_sssf_pt1_stack_139->SetMaximum(2.107509);
   thsBackground_grouped_wh3l_13TeV_sssf_pt1_stack_139->SetDirectory(0);
   thsBackground_grouped_wh3l_13TeV_sssf_pt1_stack_139->SetStats(0);
   thsBackground_grouped_wh3l_13TeV_sssf_pt1_stack_139->SetLineStyle(0);
   thsBackground_grouped_wh3l_13TeV_sssf_pt1_stack_139->SetMarkerStyle(20);
   thsBackground_grouped_wh3l_13TeV_sssf_pt1_stack_139->GetXaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_13TeV_sssf_pt1_stack_139->GetXaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_13TeV_sssf_pt1_stack_139->GetXaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_13TeV_sssf_pt1_stack_139->GetXaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_13TeV_sssf_pt1_stack_139->GetXaxis()->SetTitleOffset(0.9);
   thsBackground_grouped_wh3l_13TeV_sssf_pt1_stack_139->GetXaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_sssf_pt1_stack_139->GetYaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_13TeV_sssf_pt1_stack_139->GetYaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_13TeV_sssf_pt1_stack_139->GetYaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_13TeV_sssf_pt1_stack_139->GetYaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_13TeV_sssf_pt1_stack_139->GetYaxis()->SetTitleOffset(1.25);
   thsBackground_grouped_wh3l_13TeV_sssf_pt1_stack_139->GetYaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_sssf_pt1_stack_139->GetZaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_13TeV_sssf_pt1_stack_139->GetZaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_13TeV_sssf_pt1_stack_139->GetZaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_13TeV_sssf_pt1_stack_139->GetZaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_13TeV_sssf_pt1_stack_139->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_sssf_pt1->SetHistogram(thsBackground_grouped_wh3l_13TeV_sssf_pt1_stack_139);
   
   
   TH1D *new_histo_group_Fake_wh3l_13TeV_sssf_pt1692 = new TH1D("new_histo_group_Fake_wh3l_13TeV_sssf_pt1692","histo_Fake",25,10,200);
   new_histo_group_Fake_wh3l_13TeV_sssf_pt1692->SetBinContent(2,-0.03820547);
   new_histo_group_Fake_wh3l_13TeV_sssf_pt1692->SetBinContent(3,0.0391984);
   new_histo_group_Fake_wh3l_13TeV_sssf_pt1692->SetBinContent(4,-0.2300273);
   new_histo_group_Fake_wh3l_13TeV_sssf_pt1692->SetBinContent(5,0.5562551);
   new_histo_group_Fake_wh3l_13TeV_sssf_pt1692->SetBinContent(6,0.2214166);
   new_histo_group_Fake_wh3l_13TeV_sssf_pt1692->SetBinContent(7,-0.008101332);
   new_histo_group_Fake_wh3l_13TeV_sssf_pt1692->SetBinContent(8,1.1263);
   new_histo_group_Fake_wh3l_13TeV_sssf_pt1692->SetBinContent(9,0.6436369);
   new_histo_group_Fake_wh3l_13TeV_sssf_pt1692->SetBinContent(10,0.4637505);
   new_histo_group_Fake_wh3l_13TeV_sssf_pt1692->SetBinContent(13,-0.006707157);
   new_histo_group_Fake_wh3l_13TeV_sssf_pt1692->SetBinContent(25,0.1345139);
   new_histo_group_Fake_wh3l_13TeV_sssf_pt1692->SetBinError(2,0.03820547);
   new_histo_group_Fake_wh3l_13TeV_sssf_pt1692->SetBinError(3,0.1428288);
   new_histo_group_Fake_wh3l_13TeV_sssf_pt1692->SetBinError(4,0.2804138);
   new_histo_group_Fake_wh3l_13TeV_sssf_pt1692->SetBinError(5,0.5340191);
   new_histo_group_Fake_wh3l_13TeV_sssf_pt1692->SetBinError(6,0.2798715);
   new_histo_group_Fake_wh3l_13TeV_sssf_pt1692->SetBinError(7,0.007561613);
   new_histo_group_Fake_wh3l_13TeV_sssf_pt1692->SetBinError(8,0.8808511);
   new_histo_group_Fake_wh3l_13TeV_sssf_pt1692->SetBinError(9,0.6434307);
   new_histo_group_Fake_wh3l_13TeV_sssf_pt1692->SetBinError(10,0.4152694);
   new_histo_group_Fake_wh3l_13TeV_sssf_pt1692->SetBinError(13,0.006707157);
   new_histo_group_Fake_wh3l_13TeV_sssf_pt1692->SetBinError(25,0.1345139);
   new_histo_group_Fake_wh3l_13TeV_sssf_pt1692->SetEntries(34);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_13TeV_sssf_pt1692->SetFillColor(ci);
   new_histo_group_Fake_wh3l_13TeV_sssf_pt1692->SetFillStyle(3001);

   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_13TeV_sssf_pt1692->SetLineColor(ci);
   new_histo_group_Fake_wh3l_13TeV_sssf_pt1692->GetXaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_13TeV_sssf_pt1692->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_13TeV_sssf_pt1692->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_13TeV_sssf_pt1692->GetXaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_13TeV_sssf_pt1692->GetYaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_13TeV_sssf_pt1692->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_13TeV_sssf_pt1692->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_13TeV_sssf_pt1692->GetYaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_13TeV_sssf_pt1692->GetZaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_13TeV_sssf_pt1692->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_13TeV_sssf_pt1692->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_13TeV_sssf_pt1692->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_sssf_pt1->Add(new_histo_group_Fake_wh3l_13TeV_sssf_pt1,"");
   
   TH1D *new_histo_group_WW_wh3l_13TeV_sssf_pt1693 = new TH1D("new_histo_group_WW_wh3l_13TeV_sssf_pt1693","histo_WW",25,10,200);
   new_histo_group_WW_wh3l_13TeV_sssf_pt1693->SetBinContent(3,0.0161241);
   new_histo_group_WW_wh3l_13TeV_sssf_pt1693->SetBinContent(7,0.01039136);
   new_histo_group_WW_wh3l_13TeV_sssf_pt1693->SetBinError(3,0.0161241);
   new_histo_group_WW_wh3l_13TeV_sssf_pt1693->SetBinError(7,0.01039136);
   new_histo_group_WW_wh3l_13TeV_sssf_pt1693->SetEntries(2);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_13TeV_sssf_pt1693->SetFillColor(ci);
   new_histo_group_WW_wh3l_13TeV_sssf_pt1693->SetFillStyle(3001);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_13TeV_sssf_pt1693->SetLineColor(ci);
   new_histo_group_WW_wh3l_13TeV_sssf_pt1693->GetXaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_13TeV_sssf_pt1693->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_13TeV_sssf_pt1693->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_13TeV_sssf_pt1693->GetXaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_13TeV_sssf_pt1693->GetYaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_13TeV_sssf_pt1693->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_13TeV_sssf_pt1693->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_13TeV_sssf_pt1693->GetYaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_13TeV_sssf_pt1693->GetZaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_13TeV_sssf_pt1693->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_13TeV_sssf_pt1693->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_13TeV_sssf_pt1693->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_sssf_pt1->Add(new_histo_group_WW_wh3l_13TeV_sssf_pt1,"");
   
   TH1D *new_histo_group_VVV_wh3l_13TeV_sssf_pt1694 = new TH1D("new_histo_group_VVV_wh3l_13TeV_sssf_pt1694","histo_VVV",25,10,200);
   new_histo_group_VVV_wh3l_13TeV_sssf_pt1694->SetBinContent(15,0.0007784473);
   new_histo_group_VVV_wh3l_13TeV_sssf_pt1694->SetBinContent(26,0.0005490761);
   new_histo_group_VVV_wh3l_13TeV_sssf_pt1694->SetBinError(15,0.0007784473);
   new_histo_group_VVV_wh3l_13TeV_sssf_pt1694->SetBinError(26,0.0005490761);
   new_histo_group_VVV_wh3l_13TeV_sssf_pt1694->SetEntries(2);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_13TeV_sssf_pt1694->SetFillColor(ci);
   new_histo_group_VVV_wh3l_13TeV_sssf_pt1694->SetFillStyle(3001);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_13TeV_sssf_pt1694->SetLineColor(ci);
   new_histo_group_VVV_wh3l_13TeV_sssf_pt1694->GetXaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_13TeV_sssf_pt1694->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_13TeV_sssf_pt1694->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_13TeV_sssf_pt1694->GetXaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_13TeV_sssf_pt1694->GetYaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_13TeV_sssf_pt1694->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_13TeV_sssf_pt1694->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_13TeV_sssf_pt1694->GetYaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_13TeV_sssf_pt1694->GetZaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_13TeV_sssf_pt1694->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_13TeV_sssf_pt1694->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_13TeV_sssf_pt1694->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_sssf_pt1->Add(new_histo_group_VVV_wh3l_13TeV_sssf_pt1,"");
   
   TH1D *new_histo_group_Vg_wh3l_13TeV_sssf_pt1695 = new TH1D("new_histo_group_Vg_wh3l_13TeV_sssf_pt1695","histo_Vg",25,10,200);
   new_histo_group_Vg_wh3l_13TeV_sssf_pt1695->SetBinContent(6,0.0522728);
   new_histo_group_Vg_wh3l_13TeV_sssf_pt1695->SetBinError(6,0.0522728);
   new_histo_group_Vg_wh3l_13TeV_sssf_pt1695->SetEntries(1);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_13TeV_sssf_pt1695->SetFillColor(ci);
   new_histo_group_Vg_wh3l_13TeV_sssf_pt1695->SetFillStyle(3001);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_13TeV_sssf_pt1695->SetLineColor(ci);
   new_histo_group_Vg_wh3l_13TeV_sssf_pt1695->GetXaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_13TeV_sssf_pt1695->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_13TeV_sssf_pt1695->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_13TeV_sssf_pt1695->GetXaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_13TeV_sssf_pt1695->GetYaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_13TeV_sssf_pt1695->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_13TeV_sssf_pt1695->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_13TeV_sssf_pt1695->GetYaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_13TeV_sssf_pt1695->GetZaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_13TeV_sssf_pt1695->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_13TeV_sssf_pt1695->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_13TeV_sssf_pt1695->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_sssf_pt1->Add(new_histo_group_Vg_wh3l_13TeV_sssf_pt1,"");
   
   TH1D *new_histo_group_ZZ_wh3l_13TeV_sssf_pt1696 = new TH1D("new_histo_group_ZZ_wh3l_13TeV_sssf_pt1696","histo_ZZ",25,10,200);
   new_histo_group_ZZ_wh3l_13TeV_sssf_pt1696->SetBinContent(7,0.0427135);
   new_histo_group_ZZ_wh3l_13TeV_sssf_pt1696->SetBinContent(26,0.03513683);
   new_histo_group_ZZ_wh3l_13TeV_sssf_pt1696->SetBinError(7,0.0427135);
   new_histo_group_ZZ_wh3l_13TeV_sssf_pt1696->SetBinError(26,0.03513683);
   new_histo_group_ZZ_wh3l_13TeV_sssf_pt1696->SetEntries(2);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_13TeV_sssf_pt1696->SetFillColor(ci);
   new_histo_group_ZZ_wh3l_13TeV_sssf_pt1696->SetFillStyle(3001);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_13TeV_sssf_pt1696->SetLineColor(ci);
   new_histo_group_ZZ_wh3l_13TeV_sssf_pt1696->GetXaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_13TeV_sssf_pt1696->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_13TeV_sssf_pt1696->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_13TeV_sssf_pt1696->GetXaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_13TeV_sssf_pt1696->GetYaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_13TeV_sssf_pt1696->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_13TeV_sssf_pt1696->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_13TeV_sssf_pt1696->GetYaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_13TeV_sssf_pt1696->GetZaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_13TeV_sssf_pt1696->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_13TeV_sssf_pt1696->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_13TeV_sssf_pt1696->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_sssf_pt1->Add(new_histo_group_ZZ_wh3l_13TeV_sssf_pt1,"");
   
   TH1D *new_histo_group_WZ_wh3l_13TeV_sssf_pt1697 = new TH1D("new_histo_group_WZ_wh3l_13TeV_sssf_pt1697","histo_WZ",25,10,200);
   new_histo_group_WZ_wh3l_13TeV_sssf_pt1697->SetBinContent(2,0.01250105);
   new_histo_group_WZ_wh3l_13TeV_sssf_pt1697->SetBinContent(3,0.07038392);
   new_histo_group_WZ_wh3l_13TeV_sssf_pt1697->SetBinContent(4,0.0804238);
   new_histo_group_WZ_wh3l_13TeV_sssf_pt1697->SetBinContent(5,0.09261466);
   new_histo_group_WZ_wh3l_13TeV_sssf_pt1697->SetBinContent(6,0.1048172);
   new_histo_group_WZ_wh3l_13TeV_sssf_pt1697->SetBinContent(7,0.05421446);
   new_histo_group_WZ_wh3l_13TeV_sssf_pt1697->SetBinContent(8,0.04269779);
   new_histo_group_WZ_wh3l_13TeV_sssf_pt1697->SetBinContent(9,0.0393536);
   new_histo_group_WZ_wh3l_13TeV_sssf_pt1697->SetBinContent(10,0.01536861);
   new_histo_group_WZ_wh3l_13TeV_sssf_pt1697->SetBinContent(11,0.005487993);
   new_histo_group_WZ_wh3l_13TeV_sssf_pt1697->SetBinContent(12,0.02792931);
   new_histo_group_WZ_wh3l_13TeV_sssf_pt1697->SetBinContent(13,0.01691928);
   new_histo_group_WZ_wh3l_13TeV_sssf_pt1697->SetBinContent(15,0.01068012);
   new_histo_group_WZ_wh3l_13TeV_sssf_pt1697->SetBinContent(16,0.005956865);
   new_histo_group_WZ_wh3l_13TeV_sssf_pt1697->SetBinContent(17,0.002384166);
   new_histo_group_WZ_wh3l_13TeV_sssf_pt1697->SetBinContent(18,0.005629369);
   new_histo_group_WZ_wh3l_13TeV_sssf_pt1697->SetBinContent(19,0.006664773);
   new_histo_group_WZ_wh3l_13TeV_sssf_pt1697->SetBinContent(21,0.0121873);
   new_histo_group_WZ_wh3l_13TeV_sssf_pt1697->SetBinContent(22,0.005488627);
   new_histo_group_WZ_wh3l_13TeV_sssf_pt1697->SetBinContent(23,0.005246641);
   new_histo_group_WZ_wh3l_13TeV_sssf_pt1697->SetBinContent(26,0.005713332);
   new_histo_group_WZ_wh3l_13TeV_sssf_pt1697->SetBinError(2,0.00866789);
   new_histo_group_WZ_wh3l_13TeV_sssf_pt1697->SetBinError(3,0.01890205);
   new_histo_group_WZ_wh3l_13TeV_sssf_pt1697->SetBinError(4,0.02062158);
   new_histo_group_WZ_wh3l_13TeV_sssf_pt1697->SetBinError(5,0.02156458);
   new_histo_group_WZ_wh3l_13TeV_sssf_pt1697->SetBinError(6,0.02350696);
   new_histo_group_WZ_wh3l_13TeV_sssf_pt1697->SetBinError(7,0.01782308);
   new_histo_group_WZ_wh3l_13TeV_sssf_pt1697->SetBinError(8,0.01546249);
   new_histo_group_WZ_wh3l_13TeV_sssf_pt1697->SetBinError(9,0.01380998);
   new_histo_group_WZ_wh3l_13TeV_sssf_pt1697->SetBinError(10,0.008884622);
   new_histo_group_WZ_wh3l_13TeV_sssf_pt1697->SetBinError(11,0.005487993);
   new_histo_group_WZ_wh3l_13TeV_sssf_pt1697->SetBinError(12,0.0131814);
   new_histo_group_WZ_wh3l_13TeV_sssf_pt1697->SetBinError(13,0.01009139);
   new_histo_group_WZ_wh3l_13TeV_sssf_pt1697->SetBinError(15,0.006797004);
   new_histo_group_WZ_wh3l_13TeV_sssf_pt1697->SetBinError(16,0.005956865);
   new_histo_group_WZ_wh3l_13TeV_sssf_pt1697->SetBinError(17,0.002384166);
   new_histo_group_WZ_wh3l_13TeV_sssf_pt1697->SetBinError(18,0.005629369);
   new_histo_group_WZ_wh3l_13TeV_sssf_pt1697->SetBinError(19,0.006664773);
   new_histo_group_WZ_wh3l_13TeV_sssf_pt1697->SetBinError(21,0.00862591);
   new_histo_group_WZ_wh3l_13TeV_sssf_pt1697->SetBinError(22,0.005488627);
   new_histo_group_WZ_wh3l_13TeV_sssf_pt1697->SetBinError(23,0.005246641);
   new_histo_group_WZ_wh3l_13TeV_sssf_pt1697->SetBinError(26,0.005713332);
   new_histo_group_WZ_wh3l_13TeV_sssf_pt1697->SetEntries(128);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_13TeV_sssf_pt1697->SetFillColor(ci);
   new_histo_group_WZ_wh3l_13TeV_sssf_pt1697->SetFillStyle(3001);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_13TeV_sssf_pt1697->SetLineColor(ci);
   new_histo_group_WZ_wh3l_13TeV_sssf_pt1697->GetXaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_13TeV_sssf_pt1697->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_13TeV_sssf_pt1697->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_13TeV_sssf_pt1697->GetXaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_13TeV_sssf_pt1697->GetYaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_13TeV_sssf_pt1697->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_13TeV_sssf_pt1697->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_13TeV_sssf_pt1697->GetYaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_13TeV_sssf_pt1697->GetZaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_13TeV_sssf_pt1697->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_13TeV_sssf_pt1697->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_13TeV_sssf_pt1697->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_sssf_pt1->Add(new_histo_group_WZ_wh3l_13TeV_sssf_pt1,"");
   
   TH1D *new_histo_group_Higgs_wh3l_13TeV_sssf_pt1698 = new TH1D("new_histo_group_Higgs_wh3l_13TeV_sssf_pt1698","histo_H_htt",25,10,200);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt1698->SetBinContent(2,0.001298338);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt1698->SetBinContent(3,0.01399981);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt1698->SetBinContent(4,0.02865634);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt1698->SetBinContent(5,0.02854711);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt1698->SetBinContent(6,0.03475917);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt1698->SetBinContent(7,0.03831008);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt1698->SetBinContent(8,0.02257349);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt1698->SetBinContent(9,0.01765581);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt1698->SetBinContent(10,0.01787152);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt1698->SetBinContent(11,0.01767254);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt1698->SetBinContent(12,0.006707015);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt1698->SetBinContent(13,0.007938048);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt1698->SetBinContent(14,0.01093931);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt1698->SetBinContent(15,0.002779566);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt1698->SetBinContent(16,0.00571077);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt1698->SetBinContent(17,0.009527956);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt1698->SetBinContent(18,0.007696015);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt1698->SetBinContent(19,0.003580051);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt1698->SetBinContent(20,0.003625271);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt1698->SetBinContent(21,0.001578325);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt1698->SetBinContent(22,0.0003849663);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt1698->SetBinContent(23,0.0003709679);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt1698->SetBinContent(25,0.003694924);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt1698->SetBinContent(26,0.003971215);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt1698->SetBinError(2,0.0005920712);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt1698->SetBinError(3,0.003403003);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt1698->SetBinError(4,0.005780734);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt1698->SetBinError(5,0.005201743);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt1698->SetBinError(6,0.00597943);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt1698->SetBinError(7,0.006357172);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt1698->SetBinError(8,0.005223023);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt1698->SetBinError(9,0.004730876);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt1698->SetBinError(10,0.005572985);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt1698->SetBinError(11,0.00430465);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt1698->SetBinError(12,0.00227595);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt1698->SetBinError(13,0.003150416);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt1698->SetBinError(14,0.003290005);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt1698->SetBinError(15,0.001038463);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt1698->SetBinError(16,0.0027406);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt1698->SetBinError(17,0.003304202);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt1698->SetBinError(18,0.00333497);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt1698->SetBinError(19,0.001985782);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt1698->SetBinError(20,0.001566432);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt1698->SetBinError(21,0.001084103);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt1698->SetBinError(22,0.0002738482);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt1698->SetBinError(23,0.0003709679);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt1698->SetBinError(25,0.001949716);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt1698->SetBinError(26,0.001037617);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt1698->SetEntries(522);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt1698->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt1698->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt1698->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt1698->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt1698->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt1698->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt1698->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt1698->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt1698->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt1698->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt1698->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt1698->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt1698->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt1698->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt1698->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_sssf_pt1->Add(new_histo_group_Higgs_wh3l_13TeV_sssf_pt1,"");
   thsBackground_grouped_wh3l_13TeV_sssf_pt1->Draw("hist same");
   
   thsSignal_grouped_wh3l_13TeV_sssf_pt1 = new THStack();
   thsSignal_grouped_wh3l_13TeV_sssf_pt1->SetName("thsSignal_grouped_wh3l_13TeV_sssf_pt1");
   thsSignal_grouped_wh3l_13TeV_sssf_pt1->SetTitle("thsSignal_grouped_wh3l_13TeV_sssf_pt1");
   
   TH1F *thsSignal_grouped_wh3l_13TeV_sssf_pt1_stack_140 = new TH1F("thsSignal_grouped_wh3l_13TeV_sssf_pt1_stack_140","thsSignal_grouped_wh3l_13TeV_sssf_pt1",25,10,200);
   thsSignal_grouped_wh3l_13TeV_sssf_pt1_stack_140->SetMinimum(0);
   thsSignal_grouped_wh3l_13TeV_sssf_pt1_stack_140->SetMaximum(0.04690061);
   thsSignal_grouped_wh3l_13TeV_sssf_pt1_stack_140->SetDirectory(0);
   thsSignal_grouped_wh3l_13TeV_sssf_pt1_stack_140->SetStats(0);
   thsSignal_grouped_wh3l_13TeV_sssf_pt1_stack_140->SetLineStyle(0);
   thsSignal_grouped_wh3l_13TeV_sssf_pt1_stack_140->SetMarkerStyle(20);
   thsSignal_grouped_wh3l_13TeV_sssf_pt1_stack_140->GetXaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_13TeV_sssf_pt1_stack_140->GetXaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_13TeV_sssf_pt1_stack_140->GetXaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_13TeV_sssf_pt1_stack_140->GetXaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_13TeV_sssf_pt1_stack_140->GetXaxis()->SetTitleOffset(0.9);
   thsSignal_grouped_wh3l_13TeV_sssf_pt1_stack_140->GetXaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_13TeV_sssf_pt1_stack_140->GetYaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_13TeV_sssf_pt1_stack_140->GetYaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_13TeV_sssf_pt1_stack_140->GetYaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_13TeV_sssf_pt1_stack_140->GetYaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_13TeV_sssf_pt1_stack_140->GetYaxis()->SetTitleOffset(1.25);
   thsSignal_grouped_wh3l_13TeV_sssf_pt1_stack_140->GetYaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_13TeV_sssf_pt1_stack_140->GetZaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_13TeV_sssf_pt1_stack_140->GetZaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_13TeV_sssf_pt1_stack_140->GetZaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_13TeV_sssf_pt1_stack_140->GetZaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_13TeV_sssf_pt1_stack_140->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_13TeV_sssf_pt1->SetHistogram(thsSignal_grouped_wh3l_13TeV_sssf_pt1_stack_140);
   
   
   TH1D *new_histo_group_Higgs_wh3l_13TeV_sssf_pt1699 = new TH1D("new_histo_group_Higgs_wh3l_13TeV_sssf_pt1699","histo_H_htt",25,10,200);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt1699->SetBinContent(2,0.001298338);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt1699->SetBinContent(3,0.01399981);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt1699->SetBinContent(4,0.02865634);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt1699->SetBinContent(5,0.02854711);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt1699->SetBinContent(6,0.03475917);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt1699->SetBinContent(7,0.03831008);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt1699->SetBinContent(8,0.02257349);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt1699->SetBinContent(9,0.01765581);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt1699->SetBinContent(10,0.01787152);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt1699->SetBinContent(11,0.01767254);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt1699->SetBinContent(12,0.006707015);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt1699->SetBinContent(13,0.007938048);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt1699->SetBinContent(14,0.01093931);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt1699->SetBinContent(15,0.002779566);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt1699->SetBinContent(16,0.00571077);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt1699->SetBinContent(17,0.009527956);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt1699->SetBinContent(18,0.007696015);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt1699->SetBinContent(19,0.003580051);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt1699->SetBinContent(20,0.003625271);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt1699->SetBinContent(21,0.001578325);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt1699->SetBinContent(22,0.0003849663);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt1699->SetBinContent(23,0.0003709679);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt1699->SetBinContent(25,0.003694924);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt1699->SetBinContent(26,0.003971215);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt1699->SetBinError(2,0.0005920712);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt1699->SetBinError(3,0.003403003);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt1699->SetBinError(4,0.005780734);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt1699->SetBinError(5,0.005201743);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt1699->SetBinError(6,0.00597943);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt1699->SetBinError(7,0.006357172);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt1699->SetBinError(8,0.005223023);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt1699->SetBinError(9,0.004730876);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt1699->SetBinError(10,0.005572985);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt1699->SetBinError(11,0.00430465);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt1699->SetBinError(12,0.00227595);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt1699->SetBinError(13,0.003150416);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt1699->SetBinError(14,0.003290005);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt1699->SetBinError(15,0.001038463);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt1699->SetBinError(16,0.0027406);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt1699->SetBinError(17,0.003304202);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt1699->SetBinError(18,0.00333497);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt1699->SetBinError(19,0.001985782);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt1699->SetBinError(20,0.001566432);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt1699->SetBinError(21,0.001084103);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt1699->SetBinError(22,0.0002738482);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt1699->SetBinError(23,0.0003709679);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt1699->SetBinError(25,0.001949716);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt1699->SetBinError(26,0.001037617);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt1699->SetEntries(522);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt1699->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt1699->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt1699->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt1699->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt1699->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt1699->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt1699->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt1699->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt1699->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt1699->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt1699->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt1699->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt1699->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt1699->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt1699->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_13TeV_sssf_pt1->Add(new_histo_group_Higgs_wh3l_13TeV_sssf_pt1,"");
   thsSignal_grouped_wh3l_13TeV_sssf_pt1->Draw("hist same noclear");
   
   Double_t _fx3139[25] = {
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
   Double_t _fy3139[25] = {
   0,
   -0.02570442,
   0.1257064,
   -0.1496035,
   0.6488698,
   0.3785066,
   0.09921799,
   1.168998,
   0.6829905,
   0.4791191,
   0.005487993,
   0.02792931,
   0.01021212,
   0,
   0.01145857,
   0.005956865,
   0.002384166,
   0.00562937,
   0.006664773,
   0,
   0.0121873,
   0.005488627,
   0.005246641,
   0,
   0.1345139};
   Double_t _felx3139[25] = {
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
   Double_t _fely3139[25] = {
   0,
   0.0487574,
   0.07566917,
   0.3116317,
   0.5887112,
   0.3072038,
   0.07858902,
   0.9791722,
   0.6947764,
   0.4541498,
   0.005489333,
   0.01323608,
   0.01697333,
   0,
   0.007581308,
   0.005975003,
   0.002394048,
   0.005631911,
   0.00666865,
   0,
   0.008632326,
   0.005504886,
   0.00524912,
   0,
   0.1425149};
   Double_t _fehx3139[25] = {
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
   Double_t _fehy3139[25] = {
   0,
   0.04875499,
   0.1784626,
   0.2632807,
   0.5887114,
   0.3640305,
   0.07859057,
   0.9791722,
   0.6947764,
   0.4541498,
   0.005489367,
   0.01321402,
   0.01697375,
   0,
   0.007580485,
   0.005975315,
   0.002396137,
   0.005632123,
   0.006668883,
   0,
   0.008629647,
   0.005490238,
   0.005249275,
   0,
   0.1425149};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(25,_fx3139,_fy3139,_felx3139,_fehx3139,_fely3139,_fehy3139);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(12);
   grae->SetFillStyle(3004);
   grae->SetLineColor(12);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3139 = new TH1F("Graph_Graph3139","",100,0,219);
   Graph_Graph3139->SetMinimum(-0.7221757);
   Graph_Graph3139->SetMaximum(2.40911);
   Graph_Graph3139->SetDirectory(0);
   Graph_Graph3139->SetStats(0);
   Graph_Graph3139->SetLineStyle(0);
   Graph_Graph3139->SetMarkerStyle(20);
   Graph_Graph3139->GetXaxis()->SetLabelFont(42);
   Graph_Graph3139->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3139->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3139->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3139->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3139->GetXaxis()->SetTitleFont(42);
   Graph_Graph3139->GetYaxis()->SetLabelFont(42);
   Graph_Graph3139->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3139->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3139->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3139->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3139->GetYaxis()->SetTitleFont(42);
   Graph_Graph3139->GetZaxis()->SetLabelFont(42);
   Graph_Graph3139->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3139->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3139->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3139->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3139);
   
   grae->Draw("2");
   
   Double_t _fx3140[25] = {
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
   Double_t _fy3140[25] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t _felx3140[25] = {
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
   Double_t _fely3140[25] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t _fehx3140[25] = {
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
   Double_t _fehy3140[25] = {
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
   grae = new TGraphAsymmErrors(25,_fx3140,_fy3140,_felx3140,_fehx3140,_fely3140,_fehy3140);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(1);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3140 = new TH1F("Graph_Graph3140","",100,0,219);
   Graph_Graph3140->SetMinimum(0);
   Graph_Graph3140->SetMaximum(1.262698);
   Graph_Graph3140->SetDirectory(0);
   Graph_Graph3140->SetStats(0);
   Graph_Graph3140->SetLineStyle(0);
   Graph_Graph3140->SetMarkerStyle(20);
   Graph_Graph3140->GetXaxis()->SetLabelFont(42);
   Graph_Graph3140->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3140->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3140->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3140->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3140->GetXaxis()->SetTitleFont(42);
   Graph_Graph3140->GetYaxis()->SetLabelFont(42);
   Graph_Graph3140->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3140->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3140->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3140->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3140->GetYaxis()->SetTitleFont(42);
   Graph_Graph3140->GetZaxis()->SetLabelFont(42);
   Graph_Graph3140->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3140->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3140->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3140->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3140);
   
   grae->Draw("p0");
   
   TLegend *leg = new TLegend(0.2,0.7,0.8,0.9,NULL,"brNDC");
   leg->SetTextFont(62);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("new_histo_group_Fake_wh3l_13TeV_sssf_pt1","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_13TeV_sssf_pt1","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_13TeV_sssf_pt1","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_13TeV_sssf_pt1","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_13TeV_sssf_pt1","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_13TeV_sssf_pt1","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_13TeV_sssf_pt1","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_13TeV_sssf_pt1","Data","EPL");
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
   entry=leg->AddEntry("new_histo_group_Fake_wh3l_13TeV_sssf_pt1","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_13TeV_sssf_pt1","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_13TeV_sssf_pt1","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_13TeV_sssf_pt1","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_13TeV_sssf_pt1","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_13TeV_sssf_pt1","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_13TeV_sssf_pt1","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_13TeV_sssf_pt1","Data","EPL");
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
   
   TH1F *hframe_copy700 = new TH1F("hframe_copy700","",1000,10,200);
   hframe_copy700->SetMinimum(0);
   hframe_copy700->SetMaximum(2.978928);
   hframe_copy700->SetDirectory(0);
   hframe_copy700->SetStats(0);
   hframe_copy700->SetLineStyle(0);
   hframe_copy700->SetMarkerStyle(20);
   hframe_copy700->GetXaxis()->SetTitle("lept1_p_{T} [GeV]");
   hframe_copy700->GetXaxis()->SetNdivisions(506);
   hframe_copy700->GetXaxis()->SetLabelFont(42);
   hframe_copy700->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy700->GetXaxis()->SetLabelSize(0.05);
   hframe_copy700->GetXaxis()->SetTitleSize(0.06);
   hframe_copy700->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy700->GetXaxis()->SetTitleFont(42);
   hframe_copy700->GetYaxis()->SetTitle("Events");
   hframe_copy700->GetYaxis()->SetLabelFont(42);
   hframe_copy700->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy700->GetYaxis()->SetLabelSize(0.05);
   hframe_copy700->GetYaxis()->SetTitleSize(0.06);
   hframe_copy700->GetYaxis()->SetTitleOffset(1.25);
   hframe_copy700->GetYaxis()->SetTitleFont(42);
   hframe_copy700->GetZaxis()->SetLabelFont(42);
   hframe_copy700->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy700->GetZaxis()->SetLabelSize(0.05);
   hframe_copy700->GetZaxis()->SetTitleSize(0.06);
   hframe_copy700->GetZaxis()->SetTitleFont(42);
   hframe_copy700->Draw("sameaxis");
   ccwh3l_13TeV_sssf_pt1->Modified();
   ccwh3l_13TeV_sssf_pt1->cd();
   ccwh3l_13TeV_sssf_pt1->SetSelected(ccwh3l_13TeV_sssf_pt1);
}
