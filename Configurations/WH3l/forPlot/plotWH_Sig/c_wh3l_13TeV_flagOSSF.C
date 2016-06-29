void c_wh3l_13TeV_flagOSSF()
{
//=========Macro generated from canvas: ccwh3l_13TeV_flagOSSF/cc
//=========  (Wed Jun 29 01:51:47 2016) by ROOT version6.02/13
   TCanvas *ccwh3l_13TeV_flagOSSF = new TCanvas("ccwh3l_13TeV_flagOSSF", "cc",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   ccwh3l_13TeV_flagOSSF->SetHighLightColor(2);
   ccwh3l_13TeV_flagOSSF->Range(-0.4,-6.94902,2.1,46.50498);
   ccwh3l_13TeV_flagOSSF->SetFillColor(0);
   ccwh3l_13TeV_flagOSSF->SetBorderMode(0);
   ccwh3l_13TeV_flagOSSF->SetBorderSize(2);
   ccwh3l_13TeV_flagOSSF->SetTickx(1);
   ccwh3l_13TeV_flagOSSF->SetTicky(1);
   ccwh3l_13TeV_flagOSSF->SetLeftMargin(0.16);
   ccwh3l_13TeV_flagOSSF->SetRightMargin(0.04);
   ccwh3l_13TeV_flagOSSF->SetTopMargin(0.05);
   ccwh3l_13TeV_flagOSSF->SetBottomMargin(0.13);
   ccwh3l_13TeV_flagOSSF->SetFrameFillStyle(0);
   ccwh3l_13TeV_flagOSSF->SetFrameBorderMode(0);
   ccwh3l_13TeV_flagOSSF->SetFrameFillStyle(0);
   ccwh3l_13TeV_flagOSSF->SetFrameBorderMode(0);
   
   TH1F *hframe311 = new TH1F("hframe311","",1000,0,2);
   hframe311->SetMinimum(0);
   hframe311->SetMaximum(43.83228);
   hframe311->SetDirectory(0);
   hframe311->SetStats(0);
   hframe311->SetLineStyle(0);
   hframe311->SetMarkerStyle(20);
   hframe311->GetXaxis()->SetTitle("flag OSSF");
   hframe311->GetXaxis()->SetNdivisions(506);
   hframe311->GetXaxis()->SetLabelFont(42);
   hframe311->GetXaxis()->SetLabelOffset(0.007);
   hframe311->GetXaxis()->SetLabelSize(0.05);
   hframe311->GetXaxis()->SetTitleSize(0.06);
   hframe311->GetXaxis()->SetTitleOffset(0.9);
   hframe311->GetXaxis()->SetTitleFont(42);
   hframe311->GetYaxis()->SetTitle("Events");
   hframe311->GetYaxis()->SetLabelFont(42);
   hframe311->GetYaxis()->SetLabelOffset(0.007);
   hframe311->GetYaxis()->SetLabelSize(0.05);
   hframe311->GetYaxis()->SetTitleSize(0.06);
   hframe311->GetYaxis()->SetTitleOffset(1.25);
   hframe311->GetYaxis()->SetTitleFont(42);
   hframe311->GetZaxis()->SetLabelFont(42);
   hframe311->GetZaxis()->SetLabelOffset(0.007);
   hframe311->GetZaxis()->SetLabelSize(0.05);
   hframe311->GetZaxis()->SetTitleSize(0.06);
   hframe311->GetZaxis()->SetTitleFont(42);
   hframe311->Draw(" ");
   
   THStack *thsBackground_grouped_wh3l_13TeV_flagOSSF = new THStack();
   thsBackground_grouped_wh3l_13TeV_flagOSSF->SetName("thsBackground_grouped_wh3l_13TeV_flagOSSF");
   thsBackground_grouped_wh3l_13TeV_flagOSSF->SetTitle("thsBackground_grouped_wh3l_13TeV_flagOSSF");
   
   TH1F *thsBackground_grouped_wh3l_13TeV_flagOSSF_stack_63 = new TH1F("thsBackground_grouped_wh3l_13TeV_flagOSSF_stack_63","thsBackground_grouped_wh3l_13TeV_flagOSSF",2,0,2);
   thsBackground_grouped_wh3l_13TeV_flagOSSF_stack_63->SetMinimum(0);
   thsBackground_grouped_wh3l_13TeV_flagOSSF_stack_63->SetMaximum(18.40956);
   thsBackground_grouped_wh3l_13TeV_flagOSSF_stack_63->SetDirectory(0);
   thsBackground_grouped_wh3l_13TeV_flagOSSF_stack_63->SetStats(0);
   thsBackground_grouped_wh3l_13TeV_flagOSSF_stack_63->SetLineStyle(0);
   thsBackground_grouped_wh3l_13TeV_flagOSSF_stack_63->SetMarkerStyle(20);
   thsBackground_grouped_wh3l_13TeV_flagOSSF_stack_63->GetXaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_13TeV_flagOSSF_stack_63->GetXaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_13TeV_flagOSSF_stack_63->GetXaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_13TeV_flagOSSF_stack_63->GetXaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_13TeV_flagOSSF_stack_63->GetXaxis()->SetTitleOffset(0.9);
   thsBackground_grouped_wh3l_13TeV_flagOSSF_stack_63->GetXaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_flagOSSF_stack_63->GetYaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_13TeV_flagOSSF_stack_63->GetYaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_13TeV_flagOSSF_stack_63->GetYaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_13TeV_flagOSSF_stack_63->GetYaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_13TeV_flagOSSF_stack_63->GetYaxis()->SetTitleOffset(1.25);
   thsBackground_grouped_wh3l_13TeV_flagOSSF_stack_63->GetYaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_flagOSSF_stack_63->GetZaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_13TeV_flagOSSF_stack_63->GetZaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_13TeV_flagOSSF_stack_63->GetZaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_13TeV_flagOSSF_stack_63->GetZaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_13TeV_flagOSSF_stack_63->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_flagOSSF->SetHistogram(thsBackground_grouped_wh3l_13TeV_flagOSSF_stack_63);
   
   
   TH1D *new_histo_group_Fake_wh3l_13TeV_flagOSSF312 = new TH1D("new_histo_group_Fake_wh3l_13TeV_flagOSSF312","histo_Fake",2,0,2);
   new_histo_group_Fake_wh3l_13TeV_flagOSSF312->SetBinContent(1,3.009384);
   new_histo_group_Fake_wh3l_13TeV_flagOSSF312->SetBinContent(2,6.718841);
   new_histo_group_Fake_wh3l_13TeV_flagOSSF312->SetBinError(1,1.328059);
   new_histo_group_Fake_wh3l_13TeV_flagOSSF312->SetBinError(2,2.199561);
   new_histo_group_Fake_wh3l_13TeV_flagOSSF312->SetEntries(109);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_13TeV_flagOSSF312->SetFillColor(ci);
   new_histo_group_Fake_wh3l_13TeV_flagOSSF312->SetFillStyle(3001);

   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_13TeV_flagOSSF312->SetLineColor(ci);
   new_histo_group_Fake_wh3l_13TeV_flagOSSF312->GetXaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_13TeV_flagOSSF312->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_13TeV_flagOSSF312->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_13TeV_flagOSSF312->GetXaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_13TeV_flagOSSF312->GetYaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_13TeV_flagOSSF312->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_13TeV_flagOSSF312->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_13TeV_flagOSSF312->GetYaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_13TeV_flagOSSF312->GetZaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_13TeV_flagOSSF312->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_13TeV_flagOSSF312->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_13TeV_flagOSSF312->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_flagOSSF->Add(new_histo_group_Fake_wh3l_13TeV_flagOSSF,"");
   
   TH1D *new_histo_group_WW_wh3l_13TeV_flagOSSF313 = new TH1D("new_histo_group_WW_wh3l_13TeV_flagOSSF313","histo_WW",2,0,2);
   new_histo_group_WW_wh3l_13TeV_flagOSSF313->SetBinContent(1,0.0161241);
   new_histo_group_WW_wh3l_13TeV_flagOSSF313->SetBinContent(2,0.07257783);
   new_histo_group_WW_wh3l_13TeV_flagOSSF313->SetBinError(1,0.0161241);
   new_histo_group_WW_wh3l_13TeV_flagOSSF313->SetBinError(2,0.03292453);
   new_histo_group_WW_wh3l_13TeV_flagOSSF313->SetEntries(6);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_13TeV_flagOSSF313->SetFillColor(ci);
   new_histo_group_WW_wh3l_13TeV_flagOSSF313->SetFillStyle(3001);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_13TeV_flagOSSF313->SetLineColor(ci);
   new_histo_group_WW_wh3l_13TeV_flagOSSF313->GetXaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_13TeV_flagOSSF313->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_13TeV_flagOSSF313->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_13TeV_flagOSSF313->GetXaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_13TeV_flagOSSF313->GetYaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_13TeV_flagOSSF313->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_13TeV_flagOSSF313->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_13TeV_flagOSSF313->GetYaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_13TeV_flagOSSF313->GetZaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_13TeV_flagOSSF313->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_13TeV_flagOSSF313->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_13TeV_flagOSSF313->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_flagOSSF->Add(new_histo_group_WW_wh3l_13TeV_flagOSSF,"");
   
   TH1D *new_histo_group_VVV_wh3l_13TeV_flagOSSF314 = new TH1D("new_histo_group_VVV_wh3l_13TeV_flagOSSF314","histo_VVV",2,0,2);
   new_histo_group_VVV_wh3l_13TeV_flagOSSF314->SetBinContent(1,0.001327523);
   new_histo_group_VVV_wh3l_13TeV_flagOSSF314->SetBinContent(2,0.006991269);
   new_histo_group_VVV_wh3l_13TeV_flagOSSF314->SetBinError(1,0.0009526094);
   new_histo_group_VVV_wh3l_13TeV_flagOSSF314->SetBinError(2,0.002085685);
   new_histo_group_VVV_wh3l_13TeV_flagOSSF314->SetEntries(14);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_13TeV_flagOSSF314->SetFillColor(ci);
   new_histo_group_VVV_wh3l_13TeV_flagOSSF314->SetFillStyle(3001);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_13TeV_flagOSSF314->SetLineColor(ci);
   new_histo_group_VVV_wh3l_13TeV_flagOSSF314->GetXaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_13TeV_flagOSSF314->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_13TeV_flagOSSF314->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_13TeV_flagOSSF314->GetXaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_13TeV_flagOSSF314->GetYaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_13TeV_flagOSSF314->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_13TeV_flagOSSF314->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_13TeV_flagOSSF314->GetYaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_13TeV_flagOSSF314->GetZaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_13TeV_flagOSSF314->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_13TeV_flagOSSF314->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_13TeV_flagOSSF314->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_flagOSSF->Add(new_histo_group_VVV_wh3l_13TeV_flagOSSF,"");
   
   TH1D *new_histo_group_Vg_wh3l_13TeV_flagOSSF315 = new TH1D("new_histo_group_Vg_wh3l_13TeV_flagOSSF315","histo_Vg",2,0,2);
   new_histo_group_Vg_wh3l_13TeV_flagOSSF315->SetBinContent(2,2.648169);
   new_histo_group_Vg_wh3l_13TeV_flagOSSF315->SetBinError(2,0.5700496);
   new_histo_group_Vg_wh3l_13TeV_flagOSSF315->SetEntries(42);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_13TeV_flagOSSF315->SetFillColor(ci);
   new_histo_group_Vg_wh3l_13TeV_flagOSSF315->SetFillStyle(3001);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_13TeV_flagOSSF315->SetLineColor(ci);
   new_histo_group_Vg_wh3l_13TeV_flagOSSF315->GetXaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_13TeV_flagOSSF315->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_13TeV_flagOSSF315->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_13TeV_flagOSSF315->GetXaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_13TeV_flagOSSF315->GetYaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_13TeV_flagOSSF315->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_13TeV_flagOSSF315->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_13TeV_flagOSSF315->GetYaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_13TeV_flagOSSF315->GetZaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_13TeV_flagOSSF315->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_13TeV_flagOSSF315->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_13TeV_flagOSSF315->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_flagOSSF->Add(new_histo_group_Vg_wh3l_13TeV_flagOSSF,"");
   
   TH1D *new_histo_group_ZZ_wh3l_13TeV_flagOSSF316 = new TH1D("new_histo_group_ZZ_wh3l_13TeV_flagOSSF316","histo_ZZ",2,0,2);
   new_histo_group_ZZ_wh3l_13TeV_flagOSSF316->SetBinContent(1,0.07785033);
   new_histo_group_ZZ_wh3l_13TeV_flagOSSF316->SetBinContent(2,0.5687563);
   new_histo_group_ZZ_wh3l_13TeV_flagOSSF316->SetBinError(1,0.05530859);
   new_histo_group_ZZ_wh3l_13TeV_flagOSSF316->SetBinError(2,0.1483053);
   new_histo_group_ZZ_wh3l_13TeV_flagOSSF316->SetEntries(19);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_13TeV_flagOSSF316->SetFillColor(ci);
   new_histo_group_ZZ_wh3l_13TeV_flagOSSF316->SetFillStyle(3001);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_13TeV_flagOSSF316->SetLineColor(ci);
   new_histo_group_ZZ_wh3l_13TeV_flagOSSF316->GetXaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_13TeV_flagOSSF316->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_13TeV_flagOSSF316->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_13TeV_flagOSSF316->GetXaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_13TeV_flagOSSF316->GetYaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_13TeV_flagOSSF316->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_13TeV_flagOSSF316->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_13TeV_flagOSSF316->GetYaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_13TeV_flagOSSF316->GetZaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_13TeV_flagOSSF316->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_13TeV_flagOSSF316->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_13TeV_flagOSSF316->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_flagOSSF->Add(new_histo_group_ZZ_wh3l_13TeV_flagOSSF,"");
   
   TH1D *new_histo_group_WZ_wh3l_13TeV_flagOSSF317 = new TH1D("new_histo_group_WZ_wh3l_13TeV_flagOSSF317","histo_WZ",2,0,2);
   new_histo_group_WZ_wh3l_13TeV_flagOSSF317->SetBinContent(1,0.4688381);
   new_histo_group_WZ_wh3l_13TeV_flagOSSF317->SetBinContent(2,6.920378);
   new_histo_group_WZ_wh3l_13TeV_flagOSSF317->SetBinError(1,0.04994954);
   new_histo_group_WZ_wh3l_13TeV_flagOSSF317->SetBinError(2,0.1939652);
   new_histo_group_WZ_wh3l_13TeV_flagOSSF317->SetEntries(1516);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_13TeV_flagOSSF317->SetFillColor(ci);
   new_histo_group_WZ_wh3l_13TeV_flagOSSF317->SetFillStyle(3001);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_13TeV_flagOSSF317->SetLineColor(ci);
   new_histo_group_WZ_wh3l_13TeV_flagOSSF317->GetXaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_13TeV_flagOSSF317->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_13TeV_flagOSSF317->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_13TeV_flagOSSF317->GetXaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_13TeV_flagOSSF317->GetYaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_13TeV_flagOSSF317->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_13TeV_flagOSSF317->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_13TeV_flagOSSF317->GetYaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_13TeV_flagOSSF317->GetZaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_13TeV_flagOSSF317->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_13TeV_flagOSSF317->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_13TeV_flagOSSF317->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_flagOSSF->Add(new_histo_group_WZ_wh3l_13TeV_flagOSSF,"");
   
   TH1D *new_histo_group_Higgs_wh3l_13TeV_flagOSSF318 = new TH1D("new_histo_group_Higgs_wh3l_13TeV_flagOSSF318","histo_H_htt",2,0,2);
   new_histo_group_Higgs_wh3l_13TeV_flagOSSF318->SetBinContent(1,0.2385246);
   new_histo_group_Higgs_wh3l_13TeV_flagOSSF318->SetBinContent(2,0.5972004);
   new_histo_group_Higgs_wh3l_13TeV_flagOSSF318->SetBinError(1,0.01632281);
   new_histo_group_Higgs_wh3l_13TeV_flagOSSF318->SetBinError(2,0.02673858);
   new_histo_group_Higgs_wh3l_13TeV_flagOSSF318->SetEntries(1360);
   new_histo_group_Higgs_wh3l_13TeV_flagOSSF318->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_13TeV_flagOSSF318->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_13TeV_flagOSSF318->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_13TeV_flagOSSF318->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_13TeV_flagOSSF318->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_flagOSSF318->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_flagOSSF318->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_13TeV_flagOSSF318->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_13TeV_flagOSSF318->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_flagOSSF318->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_flagOSSF318->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_13TeV_flagOSSF318->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_13TeV_flagOSSF318->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_flagOSSF318->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_flagOSSF318->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_flagOSSF->Add(new_histo_group_Higgs_wh3l_13TeV_flagOSSF,"");
   thsBackground_grouped_wh3l_13TeV_flagOSSF->Draw("hist same");
   
   thsSignal_grouped_wh3l_13TeV_flagOSSF = new THStack();
   thsSignal_grouped_wh3l_13TeV_flagOSSF->SetName("thsSignal_grouped_wh3l_13TeV_flagOSSF");
   thsSignal_grouped_wh3l_13TeV_flagOSSF->SetTitle("thsSignal_grouped_wh3l_13TeV_flagOSSF");
   
   TH1F *thsSignal_grouped_wh3l_13TeV_flagOSSF_stack_64 = new TH1F("thsSignal_grouped_wh3l_13TeV_flagOSSF_stack_64","thsSignal_grouped_wh3l_13TeV_flagOSSF",2,0,2);
   thsSignal_grouped_wh3l_13TeV_flagOSSF_stack_64->SetMinimum(0);
   thsSignal_grouped_wh3l_13TeV_flagOSSF_stack_64->SetMaximum(0.6551359);
   thsSignal_grouped_wh3l_13TeV_flagOSSF_stack_64->SetDirectory(0);
   thsSignal_grouped_wh3l_13TeV_flagOSSF_stack_64->SetStats(0);
   thsSignal_grouped_wh3l_13TeV_flagOSSF_stack_64->SetLineStyle(0);
   thsSignal_grouped_wh3l_13TeV_flagOSSF_stack_64->SetMarkerStyle(20);
   thsSignal_grouped_wh3l_13TeV_flagOSSF_stack_64->GetXaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_13TeV_flagOSSF_stack_64->GetXaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_13TeV_flagOSSF_stack_64->GetXaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_13TeV_flagOSSF_stack_64->GetXaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_13TeV_flagOSSF_stack_64->GetXaxis()->SetTitleOffset(0.9);
   thsSignal_grouped_wh3l_13TeV_flagOSSF_stack_64->GetXaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_13TeV_flagOSSF_stack_64->GetYaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_13TeV_flagOSSF_stack_64->GetYaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_13TeV_flagOSSF_stack_64->GetYaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_13TeV_flagOSSF_stack_64->GetYaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_13TeV_flagOSSF_stack_64->GetYaxis()->SetTitleOffset(1.25);
   thsSignal_grouped_wh3l_13TeV_flagOSSF_stack_64->GetYaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_13TeV_flagOSSF_stack_64->GetZaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_13TeV_flagOSSF_stack_64->GetZaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_13TeV_flagOSSF_stack_64->GetZaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_13TeV_flagOSSF_stack_64->GetZaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_13TeV_flagOSSF_stack_64->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_13TeV_flagOSSF->SetHistogram(thsSignal_grouped_wh3l_13TeV_flagOSSF_stack_64);
   
   
   TH1D *new_histo_group_Higgs_wh3l_13TeV_flagOSSF319 = new TH1D("new_histo_group_Higgs_wh3l_13TeV_flagOSSF319","histo_H_htt",2,0,2);
   new_histo_group_Higgs_wh3l_13TeV_flagOSSF319->SetBinContent(1,0.2385246);
   new_histo_group_Higgs_wh3l_13TeV_flagOSSF319->SetBinContent(2,0.5972004);
   new_histo_group_Higgs_wh3l_13TeV_flagOSSF319->SetBinError(1,0.01632281);
   new_histo_group_Higgs_wh3l_13TeV_flagOSSF319->SetBinError(2,0.02673858);
   new_histo_group_Higgs_wh3l_13TeV_flagOSSF319->SetEntries(1360);
   new_histo_group_Higgs_wh3l_13TeV_flagOSSF319->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_13TeV_flagOSSF319->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_13TeV_flagOSSF319->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_13TeV_flagOSSF319->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_13TeV_flagOSSF319->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_flagOSSF319->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_flagOSSF319->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_13TeV_flagOSSF319->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_13TeV_flagOSSF319->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_flagOSSF319->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_flagOSSF319->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_13TeV_flagOSSF319->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_13TeV_flagOSSF319->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_flagOSSF319->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_flagOSSF319->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_13TeV_flagOSSF->Add(new_histo_group_Higgs_wh3l_13TeV_flagOSSF,"");
   thsSignal_grouped_wh3l_13TeV_flagOSSF->Draw("hist same noclear");
   
   Double_t _fx3063[2] = {
   0.5,
   1.5};
   Double_t _fy3063[2] = {
   3.573524,
   16.93571};
   Double_t _felx3063[2] = {
   0.5,
   0.5};
   Double_t _fely3063[2] = {
   1.792618,
   3.952342};
   Double_t _fehx3063[2] = {
   0.5,
   0.5};
   Double_t _fehy3063[2] = {
   1.792608,
   3.950891};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(2,_fx3063,_fy3063,_felx3063,_fehx3063,_fely3063,_fehy3063);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(12);
   grae->SetFillStyle(3004);
   grae->SetLineColor(12);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3063 = new TH1F("Graph_Graph3063","",100,0,2.2);
   Graph_Graph3063->SetMinimum(0);
   Graph_Graph3063->SetMaximum(22.79717);
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
   
   Double_t _fx3064[2] = {
   0.5,
   1.5};
   Double_t _fy3064[2] = {
   0,
   0};
   Double_t _felx3064[2] = {
   0.5,
   0.5};
   Double_t _fely3064[2] = {
   0,
   0};
   Double_t _fehx3064[2] = {
   0.5,
   0.5};
   Double_t _fehy3064[2] = {
   1.147908,
   1.147908};
   grae = new TGraphAsymmErrors(2,_fx3064,_fy3064,_felx3064,_fehx3064,_fely3064,_fehy3064);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(1);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3064 = new TH1F("Graph_Graph3064","",100,0,2.2);
   Graph_Graph3064->SetMinimum(0);
   Graph_Graph3064->SetMaximum(1.262698);
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
   TLegendEntry *entry=leg->AddEntry("new_histo_group_Fake_wh3l_13TeV_flagOSSF","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_13TeV_flagOSSF","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_13TeV_flagOSSF","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_13TeV_flagOSSF","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_13TeV_flagOSSF","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_13TeV_flagOSSF","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_13TeV_flagOSSF","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_13TeV_flagOSSF","Data","EPL");
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
   entry=leg->AddEntry("new_histo_group_Fake_wh3l_13TeV_flagOSSF","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_13TeV_flagOSSF","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_13TeV_flagOSSF","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_13TeV_flagOSSF","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_13TeV_flagOSSF","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_13TeV_flagOSSF","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_13TeV_flagOSSF","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_13TeV_flagOSSF","Data","EPL");
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
   
   TH1F *hframe_copy320 = new TH1F("hframe_copy320","",1000,0,2);
   hframe_copy320->SetMinimum(0);
   hframe_copy320->SetMaximum(43.83228);
   hframe_copy320->SetDirectory(0);
   hframe_copy320->SetStats(0);
   hframe_copy320->SetLineStyle(0);
   hframe_copy320->SetMarkerStyle(20);
   hframe_copy320->GetXaxis()->SetTitle("flag OSSF");
   hframe_copy320->GetXaxis()->SetNdivisions(506);
   hframe_copy320->GetXaxis()->SetLabelFont(42);
   hframe_copy320->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy320->GetXaxis()->SetLabelSize(0.05);
   hframe_copy320->GetXaxis()->SetTitleSize(0.06);
   hframe_copy320->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy320->GetXaxis()->SetTitleFont(42);
   hframe_copy320->GetYaxis()->SetTitle("Events");
   hframe_copy320->GetYaxis()->SetLabelFont(42);
   hframe_copy320->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy320->GetYaxis()->SetLabelSize(0.05);
   hframe_copy320->GetYaxis()->SetTitleSize(0.06);
   hframe_copy320->GetYaxis()->SetTitleOffset(1.25);
   hframe_copy320->GetYaxis()->SetTitleFont(42);
   hframe_copy320->GetZaxis()->SetLabelFont(42);
   hframe_copy320->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy320->GetZaxis()->SetLabelSize(0.05);
   hframe_copy320->GetZaxis()->SetTitleSize(0.06);
   hframe_copy320->GetZaxis()->SetTitleFont(42);
   hframe_copy320->Draw("sameaxis");
   ccwh3l_13TeV_flagOSSF->Modified();
   ccwh3l_13TeV_flagOSSF->cd();
   ccwh3l_13TeV_flagOSSF->SetSelected(ccwh3l_13TeV_flagOSSF);
}
