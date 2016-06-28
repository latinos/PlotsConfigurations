void c_wh3l_13TeV_ossf_flagOSSF()
{
//=========Macro generated from canvas: ccwh3l_13TeV_ossf_flagOSSF/cc
//=========  (Tue Jun 28 13:56:13 2016) by ROOT version6.02/13
   TCanvas *ccwh3l_13TeV_ossf_flagOSSF = new TCanvas("ccwh3l_13TeV_ossf_flagOSSF", "cc",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   ccwh3l_13TeV_ossf_flagOSSF->SetHighLightColor(2);
   ccwh3l_13TeV_ossf_flagOSSF->Range(-0.4,-6.94902,2.1,46.50498);
   ccwh3l_13TeV_ossf_flagOSSF->SetFillColor(0);
   ccwh3l_13TeV_ossf_flagOSSF->SetBorderMode(0);
   ccwh3l_13TeV_ossf_flagOSSF->SetBorderSize(2);
   ccwh3l_13TeV_ossf_flagOSSF->SetTickx(1);
   ccwh3l_13TeV_ossf_flagOSSF->SetTicky(1);
   ccwh3l_13TeV_ossf_flagOSSF->SetLeftMargin(0.16);
   ccwh3l_13TeV_ossf_flagOSSF->SetRightMargin(0.04);
   ccwh3l_13TeV_ossf_flagOSSF->SetTopMargin(0.05);
   ccwh3l_13TeV_ossf_flagOSSF->SetBottomMargin(0.13);
   ccwh3l_13TeV_ossf_flagOSSF->SetFrameFillStyle(0);
   ccwh3l_13TeV_ossf_flagOSSF->SetFrameBorderMode(0);
   ccwh3l_13TeV_ossf_flagOSSF->SetFrameFillStyle(0);
   ccwh3l_13TeV_ossf_flagOSSF->SetFrameBorderMode(0);
   
   TH1F *hframe1 = new TH1F("hframe1","",1000,0,2);
   hframe1->SetMinimum(0);
   hframe1->SetMaximum(43.83228);
   hframe1->SetDirectory(0);
   hframe1->SetStats(0);
   hframe1->SetLineStyle(0);
   hframe1->SetMarkerStyle(20);
   hframe1->GetXaxis()->SetTitle("flag OSSF");
   hframe1->GetXaxis()->SetNdivisions(506);
   hframe1->GetXaxis()->SetLabelFont(42);
   hframe1->GetXaxis()->SetLabelOffset(0.007);
   hframe1->GetXaxis()->SetLabelSize(0.05);
   hframe1->GetXaxis()->SetTitleSize(0.06);
   hframe1->GetXaxis()->SetTitleOffset(0.9);
   hframe1->GetXaxis()->SetTitleFont(42);
   hframe1->GetYaxis()->SetTitle("Events");
   hframe1->GetYaxis()->SetLabelFont(42);
   hframe1->GetYaxis()->SetLabelOffset(0.007);
   hframe1->GetYaxis()->SetLabelSize(0.05);
   hframe1->GetYaxis()->SetTitleSize(0.06);
   hframe1->GetYaxis()->SetTitleOffset(1.25);
   hframe1->GetYaxis()->SetTitleFont(42);
   hframe1->GetZaxis()->SetLabelFont(42);
   hframe1->GetZaxis()->SetLabelOffset(0.007);
   hframe1->GetZaxis()->SetLabelSize(0.05);
   hframe1->GetZaxis()->SetTitleSize(0.06);
   hframe1->GetZaxis()->SetTitleFont(42);
   hframe1->Draw(" ");
   
   THStack *thsBackground_grouped_wh3l_13TeV_ossf_flagOSSF = new THStack();
   thsBackground_grouped_wh3l_13TeV_ossf_flagOSSF->SetName("thsBackground_grouped_wh3l_13TeV_ossf_flagOSSF");
   thsBackground_grouped_wh3l_13TeV_ossf_flagOSSF->SetTitle("thsBackground_grouped_wh3l_13TeV_ossf_flagOSSF");
   
   TH1F *thsBackground_grouped_wh3l_13TeV_ossf_flagOSSF_stack_1 = new TH1F("thsBackground_grouped_wh3l_13TeV_ossf_flagOSSF_stack_1","thsBackground_grouped_wh3l_13TeV_ossf_flagOSSF",2,0,2);
   thsBackground_grouped_wh3l_13TeV_ossf_flagOSSF_stack_1->SetMinimum(0);
   thsBackground_grouped_wh3l_13TeV_ossf_flagOSSF_stack_1->SetMaximum(18.40956);
   thsBackground_grouped_wh3l_13TeV_ossf_flagOSSF_stack_1->SetDirectory(0);
   thsBackground_grouped_wh3l_13TeV_ossf_flagOSSF_stack_1->SetStats(0);
   thsBackground_grouped_wh3l_13TeV_ossf_flagOSSF_stack_1->SetLineStyle(0);
   thsBackground_grouped_wh3l_13TeV_ossf_flagOSSF_stack_1->SetMarkerStyle(20);
   thsBackground_grouped_wh3l_13TeV_ossf_flagOSSF_stack_1->GetXaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_13TeV_ossf_flagOSSF_stack_1->GetXaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_13TeV_ossf_flagOSSF_stack_1->GetXaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_13TeV_ossf_flagOSSF_stack_1->GetXaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_13TeV_ossf_flagOSSF_stack_1->GetXaxis()->SetTitleOffset(0.9);
   thsBackground_grouped_wh3l_13TeV_ossf_flagOSSF_stack_1->GetXaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_ossf_flagOSSF_stack_1->GetYaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_13TeV_ossf_flagOSSF_stack_1->GetYaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_13TeV_ossf_flagOSSF_stack_1->GetYaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_13TeV_ossf_flagOSSF_stack_1->GetYaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_13TeV_ossf_flagOSSF_stack_1->GetYaxis()->SetTitleOffset(1.25);
   thsBackground_grouped_wh3l_13TeV_ossf_flagOSSF_stack_1->GetYaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_ossf_flagOSSF_stack_1->GetZaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_13TeV_ossf_flagOSSF_stack_1->GetZaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_13TeV_ossf_flagOSSF_stack_1->GetZaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_13TeV_ossf_flagOSSF_stack_1->GetZaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_13TeV_ossf_flagOSSF_stack_1->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_ossf_flagOSSF->SetHistogram(thsBackground_grouped_wh3l_13TeV_ossf_flagOSSF_stack_1);
   
   
   TH1D *new_histo_group_Fake_wh3l_13TeV_ossf_flagOSSF2 = new TH1D("new_histo_group_Fake_wh3l_13TeV_ossf_flagOSSF2","histo_Fake",2,0,2);
   new_histo_group_Fake_wh3l_13TeV_ossf_flagOSSF2->SetBinContent(2,6.718841);
   new_histo_group_Fake_wh3l_13TeV_ossf_flagOSSF2->SetBinError(2,2.199561);
   new_histo_group_Fake_wh3l_13TeV_ossf_flagOSSF2->SetEntries(81);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_13TeV_ossf_flagOSSF2->SetFillColor(ci);
   new_histo_group_Fake_wh3l_13TeV_ossf_flagOSSF2->SetFillStyle(3001);

   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_13TeV_ossf_flagOSSF2->SetLineColor(ci);
   new_histo_group_Fake_wh3l_13TeV_ossf_flagOSSF2->GetXaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_13TeV_ossf_flagOSSF2->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_13TeV_ossf_flagOSSF2->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_13TeV_ossf_flagOSSF2->GetXaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_13TeV_ossf_flagOSSF2->GetYaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_13TeV_ossf_flagOSSF2->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_13TeV_ossf_flagOSSF2->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_13TeV_ossf_flagOSSF2->GetYaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_13TeV_ossf_flagOSSF2->GetZaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_13TeV_ossf_flagOSSF2->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_13TeV_ossf_flagOSSF2->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_13TeV_ossf_flagOSSF2->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_ossf_flagOSSF->Add(new_histo_group_Fake_wh3l_13TeV_ossf_flagOSSF,"");
   
   TH1D *new_histo_group_WW_wh3l_13TeV_ossf_flagOSSF3 = new TH1D("new_histo_group_WW_wh3l_13TeV_ossf_flagOSSF3","histo_WW",2,0,2);
   new_histo_group_WW_wh3l_13TeV_ossf_flagOSSF3->SetBinContent(2,0.07257783);
   new_histo_group_WW_wh3l_13TeV_ossf_flagOSSF3->SetBinError(2,0.03292453);
   new_histo_group_WW_wh3l_13TeV_ossf_flagOSSF3->SetEntries(5);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_13TeV_ossf_flagOSSF3->SetFillColor(ci);
   new_histo_group_WW_wh3l_13TeV_ossf_flagOSSF3->SetFillStyle(3001);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_13TeV_ossf_flagOSSF3->SetLineColor(ci);
   new_histo_group_WW_wh3l_13TeV_ossf_flagOSSF3->GetXaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_13TeV_ossf_flagOSSF3->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_13TeV_ossf_flagOSSF3->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_13TeV_ossf_flagOSSF3->GetXaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_13TeV_ossf_flagOSSF3->GetYaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_13TeV_ossf_flagOSSF3->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_13TeV_ossf_flagOSSF3->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_13TeV_ossf_flagOSSF3->GetYaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_13TeV_ossf_flagOSSF3->GetZaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_13TeV_ossf_flagOSSF3->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_13TeV_ossf_flagOSSF3->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_13TeV_ossf_flagOSSF3->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_ossf_flagOSSF->Add(new_histo_group_WW_wh3l_13TeV_ossf_flagOSSF,"");
   
   TH1D *new_histo_group_VVV_wh3l_13TeV_ossf_flagOSSF4 = new TH1D("new_histo_group_VVV_wh3l_13TeV_ossf_flagOSSF4","histo_VVV",2,0,2);
   new_histo_group_VVV_wh3l_13TeV_ossf_flagOSSF4->SetBinContent(2,0.006991269);
   new_histo_group_VVV_wh3l_13TeV_ossf_flagOSSF4->SetBinError(2,0.002085685);
   new_histo_group_VVV_wh3l_13TeV_ossf_flagOSSF4->SetEntries(12);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_13TeV_ossf_flagOSSF4->SetFillColor(ci);
   new_histo_group_VVV_wh3l_13TeV_ossf_flagOSSF4->SetFillStyle(3001);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_13TeV_ossf_flagOSSF4->SetLineColor(ci);
   new_histo_group_VVV_wh3l_13TeV_ossf_flagOSSF4->GetXaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_13TeV_ossf_flagOSSF4->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_13TeV_ossf_flagOSSF4->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_13TeV_ossf_flagOSSF4->GetXaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_13TeV_ossf_flagOSSF4->GetYaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_13TeV_ossf_flagOSSF4->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_13TeV_ossf_flagOSSF4->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_13TeV_ossf_flagOSSF4->GetYaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_13TeV_ossf_flagOSSF4->GetZaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_13TeV_ossf_flagOSSF4->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_13TeV_ossf_flagOSSF4->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_13TeV_ossf_flagOSSF4->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_ossf_flagOSSF->Add(new_histo_group_VVV_wh3l_13TeV_ossf_flagOSSF,"");
   
   TH1D *new_histo_group_Vg_wh3l_13TeV_ossf_flagOSSF5 = new TH1D("new_histo_group_Vg_wh3l_13TeV_ossf_flagOSSF5","histo_Vg",2,0,2);
   new_histo_group_Vg_wh3l_13TeV_ossf_flagOSSF5->SetBinContent(2,2.648169);
   new_histo_group_Vg_wh3l_13TeV_ossf_flagOSSF5->SetBinError(2,0.5700496);
   new_histo_group_Vg_wh3l_13TeV_ossf_flagOSSF5->SetEntries(42);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_13TeV_ossf_flagOSSF5->SetFillColor(ci);
   new_histo_group_Vg_wh3l_13TeV_ossf_flagOSSF5->SetFillStyle(3001);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_13TeV_ossf_flagOSSF5->SetLineColor(ci);
   new_histo_group_Vg_wh3l_13TeV_ossf_flagOSSF5->GetXaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_13TeV_ossf_flagOSSF5->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_13TeV_ossf_flagOSSF5->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_13TeV_ossf_flagOSSF5->GetXaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_13TeV_ossf_flagOSSF5->GetYaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_13TeV_ossf_flagOSSF5->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_13TeV_ossf_flagOSSF5->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_13TeV_ossf_flagOSSF5->GetYaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_13TeV_ossf_flagOSSF5->GetZaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_13TeV_ossf_flagOSSF5->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_13TeV_ossf_flagOSSF5->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_13TeV_ossf_flagOSSF5->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_ossf_flagOSSF->Add(new_histo_group_Vg_wh3l_13TeV_ossf_flagOSSF,"");
   
   TH1D *new_histo_group_ZZ_wh3l_13TeV_ossf_flagOSSF6 = new TH1D("new_histo_group_ZZ_wh3l_13TeV_ossf_flagOSSF6","histo_ZZ",2,0,2);
   new_histo_group_ZZ_wh3l_13TeV_ossf_flagOSSF6->SetBinContent(2,0.5687563);
   new_histo_group_ZZ_wh3l_13TeV_ossf_flagOSSF6->SetBinError(2,0.1483053);
   new_histo_group_ZZ_wh3l_13TeV_ossf_flagOSSF6->SetEntries(17);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_13TeV_ossf_flagOSSF6->SetFillColor(ci);
   new_histo_group_ZZ_wh3l_13TeV_ossf_flagOSSF6->SetFillStyle(3001);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_13TeV_ossf_flagOSSF6->SetLineColor(ci);
   new_histo_group_ZZ_wh3l_13TeV_ossf_flagOSSF6->GetXaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_13TeV_ossf_flagOSSF6->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_13TeV_ossf_flagOSSF6->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_13TeV_ossf_flagOSSF6->GetXaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_13TeV_ossf_flagOSSF6->GetYaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_13TeV_ossf_flagOSSF6->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_13TeV_ossf_flagOSSF6->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_13TeV_ossf_flagOSSF6->GetYaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_13TeV_ossf_flagOSSF6->GetZaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_13TeV_ossf_flagOSSF6->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_13TeV_ossf_flagOSSF6->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_13TeV_ossf_flagOSSF6->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_ossf_flagOSSF->Add(new_histo_group_ZZ_wh3l_13TeV_ossf_flagOSSF,"");
   
   TH1D *new_histo_group_WZ_wh3l_13TeV_ossf_flagOSSF7 = new TH1D("new_histo_group_WZ_wh3l_13TeV_ossf_flagOSSF7","histo_WZ",2,0,2);
   new_histo_group_WZ_wh3l_13TeV_ossf_flagOSSF7->SetBinContent(2,6.920378);
   new_histo_group_WZ_wh3l_13TeV_ossf_flagOSSF7->SetBinError(2,0.1939652);
   new_histo_group_WZ_wh3l_13TeV_ossf_flagOSSF7->SetEntries(1419);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_13TeV_ossf_flagOSSF7->SetFillColor(ci);
   new_histo_group_WZ_wh3l_13TeV_ossf_flagOSSF7->SetFillStyle(3001);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_13TeV_ossf_flagOSSF7->SetLineColor(ci);
   new_histo_group_WZ_wh3l_13TeV_ossf_flagOSSF7->GetXaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_13TeV_ossf_flagOSSF7->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_13TeV_ossf_flagOSSF7->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_13TeV_ossf_flagOSSF7->GetXaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_13TeV_ossf_flagOSSF7->GetYaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_13TeV_ossf_flagOSSF7->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_13TeV_ossf_flagOSSF7->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_13TeV_ossf_flagOSSF7->GetYaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_13TeV_ossf_flagOSSF7->GetZaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_13TeV_ossf_flagOSSF7->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_13TeV_ossf_flagOSSF7->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_13TeV_ossf_flagOSSF7->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_ossf_flagOSSF->Add(new_histo_group_WZ_wh3l_13TeV_ossf_flagOSSF,"");
   
   TH1D *new_histo_group_Higgs_wh3l_13TeV_ossf_flagOSSF8 = new TH1D("new_histo_group_Higgs_wh3l_13TeV_ossf_flagOSSF8","histo_H_htt",2,0,2);
   new_histo_group_Higgs_wh3l_13TeV_ossf_flagOSSF8->SetBinContent(2,0.5972004);
   new_histo_group_Higgs_wh3l_13TeV_ossf_flagOSSF8->SetBinError(2,0.02673858);
   new_histo_group_Higgs_wh3l_13TeV_ossf_flagOSSF8->SetEntries(946);
   new_histo_group_Higgs_wh3l_13TeV_ossf_flagOSSF8->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_13TeV_ossf_flagOSSF8->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_13TeV_ossf_flagOSSF8->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_13TeV_ossf_flagOSSF8->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_13TeV_ossf_flagOSSF8->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_ossf_flagOSSF8->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_ossf_flagOSSF8->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_13TeV_ossf_flagOSSF8->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_13TeV_ossf_flagOSSF8->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_ossf_flagOSSF8->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_ossf_flagOSSF8->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_13TeV_ossf_flagOSSF8->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_13TeV_ossf_flagOSSF8->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_ossf_flagOSSF8->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_ossf_flagOSSF8->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_ossf_flagOSSF->Add(new_histo_group_Higgs_wh3l_13TeV_ossf_flagOSSF,"");
   thsBackground_grouped_wh3l_13TeV_ossf_flagOSSF->Draw("hist same");
   
   thsSignal_grouped_wh3l_13TeV_ossf_flagOSSF = new THStack();
   thsSignal_grouped_wh3l_13TeV_ossf_flagOSSF->SetName("thsSignal_grouped_wh3l_13TeV_ossf_flagOSSF");
   thsSignal_grouped_wh3l_13TeV_ossf_flagOSSF->SetTitle("thsSignal_grouped_wh3l_13TeV_ossf_flagOSSF");
   
   TH1F *thsSignal_grouped_wh3l_13TeV_ossf_flagOSSF_stack_2 = new TH1F("thsSignal_grouped_wh3l_13TeV_ossf_flagOSSF_stack_2","thsSignal_grouped_wh3l_13TeV_ossf_flagOSSF",2,0,2);
   thsSignal_grouped_wh3l_13TeV_ossf_flagOSSF_stack_2->SetMinimum(0);
   thsSignal_grouped_wh3l_13TeV_ossf_flagOSSF_stack_2->SetMaximum(0.6551359);
   thsSignal_grouped_wh3l_13TeV_ossf_flagOSSF_stack_2->SetDirectory(0);
   thsSignal_grouped_wh3l_13TeV_ossf_flagOSSF_stack_2->SetStats(0);
   thsSignal_grouped_wh3l_13TeV_ossf_flagOSSF_stack_2->SetLineStyle(0);
   thsSignal_grouped_wh3l_13TeV_ossf_flagOSSF_stack_2->SetMarkerStyle(20);
   thsSignal_grouped_wh3l_13TeV_ossf_flagOSSF_stack_2->GetXaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_13TeV_ossf_flagOSSF_stack_2->GetXaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_13TeV_ossf_flagOSSF_stack_2->GetXaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_13TeV_ossf_flagOSSF_stack_2->GetXaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_13TeV_ossf_flagOSSF_stack_2->GetXaxis()->SetTitleOffset(0.9);
   thsSignal_grouped_wh3l_13TeV_ossf_flagOSSF_stack_2->GetXaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_13TeV_ossf_flagOSSF_stack_2->GetYaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_13TeV_ossf_flagOSSF_stack_2->GetYaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_13TeV_ossf_flagOSSF_stack_2->GetYaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_13TeV_ossf_flagOSSF_stack_2->GetYaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_13TeV_ossf_flagOSSF_stack_2->GetYaxis()->SetTitleOffset(1.25);
   thsSignal_grouped_wh3l_13TeV_ossf_flagOSSF_stack_2->GetYaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_13TeV_ossf_flagOSSF_stack_2->GetZaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_13TeV_ossf_flagOSSF_stack_2->GetZaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_13TeV_ossf_flagOSSF_stack_2->GetZaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_13TeV_ossf_flagOSSF_stack_2->GetZaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_13TeV_ossf_flagOSSF_stack_2->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_13TeV_ossf_flagOSSF->SetHistogram(thsSignal_grouped_wh3l_13TeV_ossf_flagOSSF_stack_2);
   
   
   TH1D *new_histo_group_Higgs_wh3l_13TeV_ossf_flagOSSF9 = new TH1D("new_histo_group_Higgs_wh3l_13TeV_ossf_flagOSSF9","histo_H_htt",2,0,2);
   new_histo_group_Higgs_wh3l_13TeV_ossf_flagOSSF9->SetBinContent(2,0.5972004);
   new_histo_group_Higgs_wh3l_13TeV_ossf_flagOSSF9->SetBinError(2,0.02673858);
   new_histo_group_Higgs_wh3l_13TeV_ossf_flagOSSF9->SetEntries(946);
   new_histo_group_Higgs_wh3l_13TeV_ossf_flagOSSF9->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_13TeV_ossf_flagOSSF9->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_13TeV_ossf_flagOSSF9->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_13TeV_ossf_flagOSSF9->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_13TeV_ossf_flagOSSF9->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_ossf_flagOSSF9->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_ossf_flagOSSF9->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_13TeV_ossf_flagOSSF9->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_13TeV_ossf_flagOSSF9->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_ossf_flagOSSF9->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_ossf_flagOSSF9->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_13TeV_ossf_flagOSSF9->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_13TeV_ossf_flagOSSF9->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_ossf_flagOSSF9->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_ossf_flagOSSF9->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_13TeV_ossf_flagOSSF->Add(new_histo_group_Higgs_wh3l_13TeV_ossf_flagOSSF,"");
   thsSignal_grouped_wh3l_13TeV_ossf_flagOSSF->Draw("hist same noclear");
   
   Double_t _fx3001[2] = {
   0.5,
   1.5};
   Double_t _fy3001[2] = {
   0,
   16.93571};
   Double_t _felx3001[2] = {
   0.5,
   0.5};
   Double_t _fely3001[2] = {
   0,
   3.738141};
   Double_t _fehx3001[2] = {
   0.5,
   0.5};
   Double_t _fehy3001[2] = {
   0,
   3.738142};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(2,_fx3001,_fy3001,_felx3001,_fehx3001,_fely3001,_fehy3001);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(12);
   grae->SetFillStyle(3004);
   grae->SetLineColor(12);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3001 = new TH1F("Graph_Graph3001","",100,0,2.2);
   Graph_Graph3001->SetMinimum(0);
   Graph_Graph3001->SetMaximum(22.74124);
   Graph_Graph3001->SetDirectory(0);
   Graph_Graph3001->SetStats(0);
   Graph_Graph3001->SetLineStyle(0);
   Graph_Graph3001->SetMarkerStyle(20);
   Graph_Graph3001->GetXaxis()->SetLabelFont(42);
   Graph_Graph3001->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3001->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3001->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3001->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3001->GetXaxis()->SetTitleFont(42);
   Graph_Graph3001->GetYaxis()->SetLabelFont(42);
   Graph_Graph3001->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3001->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3001->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3001->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3001->GetYaxis()->SetTitleFont(42);
   Graph_Graph3001->GetZaxis()->SetLabelFont(42);
   Graph_Graph3001->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3001->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3001->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3001->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3001);
   
   grae->Draw("2");
   
   Double_t _fx3002[2] = {
   0.5,
   1.5};
   Double_t _fy3002[2] = {
   0,
   0};
   Double_t _felx3002[2] = {
   0.5,
   0.5};
   Double_t _fely3002[2] = {
   0,
   0};
   Double_t _fehx3002[2] = {
   0.5,
   0.5};
   Double_t _fehy3002[2] = {
   1.147908,
   1.147908};
   grae = new TGraphAsymmErrors(2,_fx3002,_fy3002,_felx3002,_fehx3002,_fely3002,_fehy3002);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(1);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3002 = new TH1F("Graph_Graph3002","",100,0,2.2);
   Graph_Graph3002->SetMinimum(0);
   Graph_Graph3002->SetMaximum(1.262698);
   Graph_Graph3002->SetDirectory(0);
   Graph_Graph3002->SetStats(0);
   Graph_Graph3002->SetLineStyle(0);
   Graph_Graph3002->SetMarkerStyle(20);
   Graph_Graph3002->GetXaxis()->SetLabelFont(42);
   Graph_Graph3002->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3002->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3002->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3002->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3002->GetXaxis()->SetTitleFont(42);
   Graph_Graph3002->GetYaxis()->SetLabelFont(42);
   Graph_Graph3002->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3002->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3002->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3002->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3002->GetYaxis()->SetTitleFont(42);
   Graph_Graph3002->GetZaxis()->SetLabelFont(42);
   Graph_Graph3002->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3002->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3002->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3002->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3002);
   
   grae->Draw("p0");
   
   TLegend *leg = new TLegend(0.2,0.55,0.8,0.88,NULL,"brNDC");
   leg->SetTextFont(62);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("new_histo_group_Fake_wh3l_13TeV_ossf_flagOSSF","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_13TeV_ossf_flagOSSF","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_13TeV_ossf_flagOSSF","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_13TeV_ossf_flagOSSF","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_13TeV_ossf_flagOSSF","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_13TeV_ossf_flagOSSF","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_13TeV_ossf_flagOSSF","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_13TeV_ossf_flagOSSF","Data","EPL");
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
   entry=leg->AddEntry("new_histo_group_Fake_wh3l_13TeV_ossf_flagOSSF","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_13TeV_ossf_flagOSSF","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_13TeV_ossf_flagOSSF","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_13TeV_ossf_flagOSSF","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_13TeV_ossf_flagOSSF","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_13TeV_ossf_flagOSSF","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_13TeV_ossf_flagOSSF","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_13TeV_ossf_flagOSSF","Data","EPL");
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
   
   TH1F *hframe_copy10 = new TH1F("hframe_copy10","",1000,0,2);
   hframe_copy10->SetMinimum(0);
   hframe_copy10->SetMaximum(43.83228);
   hframe_copy10->SetDirectory(0);
   hframe_copy10->SetStats(0);
   hframe_copy10->SetLineStyle(0);
   hframe_copy10->SetMarkerStyle(20);
   hframe_copy10->GetXaxis()->SetTitle("flag OSSF");
   hframe_copy10->GetXaxis()->SetNdivisions(506);
   hframe_copy10->GetXaxis()->SetLabelFont(42);
   hframe_copy10->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy10->GetXaxis()->SetLabelSize(0.05);
   hframe_copy10->GetXaxis()->SetTitleSize(0.06);
   hframe_copy10->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy10->GetXaxis()->SetTitleFont(42);
   hframe_copy10->GetYaxis()->SetTitle("Events");
   hframe_copy10->GetYaxis()->SetLabelFont(42);
   hframe_copy10->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy10->GetYaxis()->SetLabelSize(0.05);
   hframe_copy10->GetYaxis()->SetTitleSize(0.06);
   hframe_copy10->GetYaxis()->SetTitleOffset(1.25);
   hframe_copy10->GetYaxis()->SetTitleFont(42);
   hframe_copy10->GetZaxis()->SetLabelFont(42);
   hframe_copy10->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy10->GetZaxis()->SetLabelSize(0.05);
   hframe_copy10->GetZaxis()->SetTitleSize(0.06);
   hframe_copy10->GetZaxis()->SetTitleFont(42);
   hframe_copy10->Draw("sameaxis");
   ccwh3l_13TeV_ossf_flagOSSF->Modified();
   ccwh3l_13TeV_ossf_flagOSSF->cd();
   ccwh3l_13TeV_ossf_flagOSSF->SetSelected(ccwh3l_13TeV_ossf_flagOSSF);
}
