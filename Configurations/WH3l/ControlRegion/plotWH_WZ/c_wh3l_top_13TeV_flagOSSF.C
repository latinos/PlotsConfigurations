void c_wh3l_top_13TeV_flagOSSF()
{
//=========Macro generated from canvas: ccwh3l_top_13TeV_flagOSSF/cc
//=========  (Sat Jul  2 20:39:39 2016) by ROOT version6.02/13
   TCanvas *ccwh3l_top_13TeV_flagOSSF = new TCanvas("ccwh3l_top_13TeV_flagOSSF", "cc",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   ccwh3l_top_13TeV_flagOSSF->SetHighLightColor(2);
   ccwh3l_top_13TeV_flagOSSF->Range(-0.4,-15.78666,2.1,105.6492);
   ccwh3l_top_13TeV_flagOSSF->SetFillColor(0);
   ccwh3l_top_13TeV_flagOSSF->SetBorderMode(0);
   ccwh3l_top_13TeV_flagOSSF->SetBorderSize(2);
   ccwh3l_top_13TeV_flagOSSF->SetTickx(1);
   ccwh3l_top_13TeV_flagOSSF->SetTicky(1);
   ccwh3l_top_13TeV_flagOSSF->SetLeftMargin(0.16);
   ccwh3l_top_13TeV_flagOSSF->SetRightMargin(0.04);
   ccwh3l_top_13TeV_flagOSSF->SetTopMargin(0.05);
   ccwh3l_top_13TeV_flagOSSF->SetBottomMargin(0.13);
   ccwh3l_top_13TeV_flagOSSF->SetFrameFillStyle(0);
   ccwh3l_top_13TeV_flagOSSF->SetFrameBorderMode(0);
   ccwh3l_top_13TeV_flagOSSF->SetFrameFillStyle(0);
   ccwh3l_top_13TeV_flagOSSF->SetFrameBorderMode(0);
   
   TH1F *hframe82 = new TH1F("hframe82","",1000,0,2);
   hframe82->SetMinimum(0);
   hframe82->SetMaximum(99.57738);
   hframe82->SetDirectory(0);
   hframe82->SetStats(0);
   hframe82->SetLineStyle(0);
   hframe82->SetMarkerStyle(20);
   hframe82->GetXaxis()->SetTitle("flag OSSF");
   hframe82->GetXaxis()->SetNdivisions(506);
   hframe82->GetXaxis()->SetLabelFont(42);
   hframe82->GetXaxis()->SetLabelOffset(0.007);
   hframe82->GetXaxis()->SetLabelSize(0.05);
   hframe82->GetXaxis()->SetTitleSize(0.06);
   hframe82->GetXaxis()->SetTitleOffset(0.9);
   hframe82->GetXaxis()->SetTitleFont(42);
   hframe82->GetYaxis()->SetTitle("Events");
   hframe82->GetYaxis()->SetLabelFont(42);
   hframe82->GetYaxis()->SetLabelOffset(0.007);
   hframe82->GetYaxis()->SetLabelSize(0.05);
   hframe82->GetYaxis()->SetTitleSize(0.06);
   hframe82->GetYaxis()->SetTitleOffset(1.25);
   hframe82->GetYaxis()->SetTitleFont(42);
   hframe82->GetZaxis()->SetLabelFont(42);
   hframe82->GetZaxis()->SetLabelOffset(0.007);
   hframe82->GetZaxis()->SetLabelSize(0.05);
   hframe82->GetZaxis()->SetTitleSize(0.06);
   hframe82->GetZaxis()->SetTitleFont(42);
   hframe82->Draw(" ");
   
   THStack *thsBackground_grouped_wh3l_top_13TeV_flagOSSF = new THStack();
   thsBackground_grouped_wh3l_top_13TeV_flagOSSF->SetName("thsBackground_grouped_wh3l_top_13TeV_flagOSSF");
   thsBackground_grouped_wh3l_top_13TeV_flagOSSF->SetTitle("thsBackground_grouped_wh3l_top_13TeV_flagOSSF");
   
   TH1F *thsBackground_grouped_wh3l_top_13TeV_flagOSSF_stack_19 = new TH1F("thsBackground_grouped_wh3l_top_13TeV_flagOSSF_stack_19","thsBackground_grouped_wh3l_top_13TeV_flagOSSF",2,0,2);
   thsBackground_grouped_wh3l_top_13TeV_flagOSSF_stack_19->SetMinimum(-0.1456336);
   thsBackground_grouped_wh3l_top_13TeV_flagOSSF_stack_19->SetMaximum(34.98546);
   thsBackground_grouped_wh3l_top_13TeV_flagOSSF_stack_19->SetDirectory(0);
   thsBackground_grouped_wh3l_top_13TeV_flagOSSF_stack_19->SetStats(0);
   thsBackground_grouped_wh3l_top_13TeV_flagOSSF_stack_19->SetLineStyle(0);
   thsBackground_grouped_wh3l_top_13TeV_flagOSSF_stack_19->SetMarkerStyle(20);
   thsBackground_grouped_wh3l_top_13TeV_flagOSSF_stack_19->GetXaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_top_13TeV_flagOSSF_stack_19->GetXaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_top_13TeV_flagOSSF_stack_19->GetXaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_top_13TeV_flagOSSF_stack_19->GetXaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_top_13TeV_flagOSSF_stack_19->GetXaxis()->SetTitleOffset(0.9);
   thsBackground_grouped_wh3l_top_13TeV_flagOSSF_stack_19->GetXaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_top_13TeV_flagOSSF_stack_19->GetYaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_top_13TeV_flagOSSF_stack_19->GetYaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_top_13TeV_flagOSSF_stack_19->GetYaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_top_13TeV_flagOSSF_stack_19->GetYaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_top_13TeV_flagOSSF_stack_19->GetYaxis()->SetTitleOffset(1.25);
   thsBackground_grouped_wh3l_top_13TeV_flagOSSF_stack_19->GetYaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_top_13TeV_flagOSSF_stack_19->GetZaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_top_13TeV_flagOSSF_stack_19->GetZaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_top_13TeV_flagOSSF_stack_19->GetZaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_top_13TeV_flagOSSF_stack_19->GetZaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_top_13TeV_flagOSSF_stack_19->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_top_13TeV_flagOSSF->SetHistogram(thsBackground_grouped_wh3l_top_13TeV_flagOSSF_stack_19);
   
   
   TH1D *new_histo_group_Fake_wh3l_top_13TeV_flagOSSF83 = new TH1D("new_histo_group_Fake_wh3l_top_13TeV_flagOSSF83","histo_Fake",2,0,2);
   new_histo_group_Fake_wh3l_top_13TeV_flagOSSF83->SetBinContent(1,15.14497);
   new_histo_group_Fake_wh3l_top_13TeV_flagOSSF83->SetBinContent(2,22.54886);
   new_histo_group_Fake_wh3l_top_13TeV_flagOSSF83->SetBinError(1,2.576672);
   new_histo_group_Fake_wh3l_top_13TeV_flagOSSF83->SetBinError(2,3.638166);
   new_histo_group_Fake_wh3l_top_13TeV_flagOSSF83->SetEntries(317);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_top_13TeV_flagOSSF83->SetFillColor(ci);
   new_histo_group_Fake_wh3l_top_13TeV_flagOSSF83->SetFillStyle(3001);

   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_top_13TeV_flagOSSF83->SetLineColor(ci);
   new_histo_group_Fake_wh3l_top_13TeV_flagOSSF83->GetXaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_top_13TeV_flagOSSF83->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_top_13TeV_flagOSSF83->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_top_13TeV_flagOSSF83->GetXaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_top_13TeV_flagOSSF83->GetYaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_top_13TeV_flagOSSF83->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_top_13TeV_flagOSSF83->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_top_13TeV_flagOSSF83->GetYaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_top_13TeV_flagOSSF83->GetZaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_top_13TeV_flagOSSF83->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_top_13TeV_flagOSSF83->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_top_13TeV_flagOSSF83->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_top_13TeV_flagOSSF->Add(new_histo_group_Fake_wh3l_top_13TeV_flagOSSF,"");
   
   TH1D *new_histo_group_WW_wh3l_top_13TeV_flagOSSF84 = new TH1D("new_histo_group_WW_wh3l_top_13TeV_flagOSSF84","histo_WW",2,0,2);
   new_histo_group_WW_wh3l_top_13TeV_flagOSSF84->SetBinContent(1,0.06747879);
   new_histo_group_WW_wh3l_top_13TeV_flagOSSF84->SetBinContent(2,0.1005829);
   new_histo_group_WW_wh3l_top_13TeV_flagOSSF84->SetBinError(1,0.03183804);
   new_histo_group_WW_wh3l_top_13TeV_flagOSSF84->SetBinError(2,0.04142331);
   new_histo_group_WW_wh3l_top_13TeV_flagOSSF84->SetEntries(11);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_top_13TeV_flagOSSF84->SetFillColor(ci);
   new_histo_group_WW_wh3l_top_13TeV_flagOSSF84->SetFillStyle(3001);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_top_13TeV_flagOSSF84->SetLineColor(ci);
   new_histo_group_WW_wh3l_top_13TeV_flagOSSF84->GetXaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_top_13TeV_flagOSSF84->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_top_13TeV_flagOSSF84->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_top_13TeV_flagOSSF84->GetXaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_top_13TeV_flagOSSF84->GetYaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_top_13TeV_flagOSSF84->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_top_13TeV_flagOSSF84->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_top_13TeV_flagOSSF84->GetYaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_top_13TeV_flagOSSF84->GetZaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_top_13TeV_flagOSSF84->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_top_13TeV_flagOSSF84->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_top_13TeV_flagOSSF84->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_top_13TeV_flagOSSF->Add(new_histo_group_WW_wh3l_top_13TeV_flagOSSF,"");
   
   TH1D *new_histo_group_Vg_wh3l_top_13TeV_flagOSSF85 = new TH1D("new_histo_group_Vg_wh3l_top_13TeV_flagOSSF85","histo_Vg",2,0,2);
   new_histo_group_Vg_wh3l_top_13TeV_flagOSSF85->SetBinContent(1,0.01661978);
   new_histo_group_Vg_wh3l_top_13TeV_flagOSSF85->SetBinContent(2,1.375996);
   new_histo_group_Vg_wh3l_top_13TeV_flagOSSF85->SetBinError(1,0.1622534);
   new_histo_group_Vg_wh3l_top_13TeV_flagOSSF85->SetBinError(2,0.423075);
   new_histo_group_Vg_wh3l_top_13TeV_flagOSSF85->SetEntries(25);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_top_13TeV_flagOSSF85->SetFillColor(ci);
   new_histo_group_Vg_wh3l_top_13TeV_flagOSSF85->SetFillStyle(3001);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_top_13TeV_flagOSSF85->SetLineColor(ci);
   new_histo_group_Vg_wh3l_top_13TeV_flagOSSF85->GetXaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_top_13TeV_flagOSSF85->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_top_13TeV_flagOSSF85->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_top_13TeV_flagOSSF85->GetXaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_top_13TeV_flagOSSF85->GetYaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_top_13TeV_flagOSSF85->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_top_13TeV_flagOSSF85->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_top_13TeV_flagOSSF85->GetYaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_top_13TeV_flagOSSF85->GetZaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_top_13TeV_flagOSSF85->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_top_13TeV_flagOSSF85->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_top_13TeV_flagOSSF85->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_top_13TeV_flagOSSF->Add(new_histo_group_Vg_wh3l_top_13TeV_flagOSSF,"");
   
   TH1D *new_histo_group_ZZ_wh3l_top_13TeV_flagOSSF86 = new TH1D("new_histo_group_ZZ_wh3l_top_13TeV_flagOSSF86","histo_ZZ",2,0,2);
   new_histo_group_ZZ_wh3l_top_13TeV_flagOSSF86->SetBinContent(1,0.04768794);
   new_histo_group_ZZ_wh3l_top_13TeV_flagOSSF86->SetBinContent(2,0.6327408);
   new_histo_group_ZZ_wh3l_top_13TeV_flagOSSF86->SetBinError(1,0.04768794);
   new_histo_group_ZZ_wh3l_top_13TeV_flagOSSF86->SetBinError(2,0.162115);
   new_histo_group_ZZ_wh3l_top_13TeV_flagOSSF86->SetEntries(18);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_top_13TeV_flagOSSF86->SetFillColor(ci);
   new_histo_group_ZZ_wh3l_top_13TeV_flagOSSF86->SetFillStyle(3001);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_top_13TeV_flagOSSF86->SetLineColor(ci);
   new_histo_group_ZZ_wh3l_top_13TeV_flagOSSF86->GetXaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_top_13TeV_flagOSSF86->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_top_13TeV_flagOSSF86->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_top_13TeV_flagOSSF86->GetXaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_top_13TeV_flagOSSF86->GetYaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_top_13TeV_flagOSSF86->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_top_13TeV_flagOSSF86->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_top_13TeV_flagOSSF86->GetYaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_top_13TeV_flagOSSF86->GetZaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_top_13TeV_flagOSSF86->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_top_13TeV_flagOSSF86->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_top_13TeV_flagOSSF86->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_top_13TeV_flagOSSF->Add(new_histo_group_ZZ_wh3l_top_13TeV_flagOSSF,"");
   
   TH1D *new_histo_group_WZ_wh3l_top_13TeV_flagOSSF87 = new TH1D("new_histo_group_WZ_wh3l_top_13TeV_flagOSSF87","histo_WZ",2,0,2);
   new_histo_group_WZ_wh3l_top_13TeV_flagOSSF87->SetBinContent(1,0.4991848);
   new_histo_group_WZ_wh3l_top_13TeV_flagOSSF87->SetBinContent(2,8.368679);
   new_histo_group_WZ_wh3l_top_13TeV_flagOSSF87->SetBinError(1,0.05264844);
   new_histo_group_WZ_wh3l_top_13TeV_flagOSSF87->SetBinError(2,0.2131566);
   new_histo_group_WZ_wh3l_top_13TeV_flagOSSF87->SetEntries(1805);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_top_13TeV_flagOSSF87->SetFillColor(ci);
   new_histo_group_WZ_wh3l_top_13TeV_flagOSSF87->SetFillStyle(3001);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_top_13TeV_flagOSSF87->SetLineColor(ci);
   new_histo_group_WZ_wh3l_top_13TeV_flagOSSF87->GetXaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_top_13TeV_flagOSSF87->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_top_13TeV_flagOSSF87->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_top_13TeV_flagOSSF87->GetXaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_top_13TeV_flagOSSF87->GetYaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_top_13TeV_flagOSSF87->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_top_13TeV_flagOSSF87->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_top_13TeV_flagOSSF87->GetYaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_top_13TeV_flagOSSF87->GetZaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_top_13TeV_flagOSSF87->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_top_13TeV_flagOSSF87->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_top_13TeV_flagOSSF87->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_top_13TeV_flagOSSF->Add(new_histo_group_WZ_wh3l_top_13TeV_flagOSSF,"");
   
   TH1D *new_histo_group_Higgs_wh3l_top_13TeV_flagOSSF88 = new TH1D("new_histo_group_Higgs_wh3l_top_13TeV_flagOSSF88","histo_H_htt",2,0,2);
   new_histo_group_Higgs_wh3l_top_13TeV_flagOSSF88->SetBinContent(1,0.1133326);
   new_histo_group_Higgs_wh3l_top_13TeV_flagOSSF88->SetBinContent(2,0.2926325);
   new_histo_group_Higgs_wh3l_top_13TeV_flagOSSF88->SetBinError(1,0.01073606);
   new_histo_group_Higgs_wh3l_top_13TeV_flagOSSF88->SetBinError(2,0.01708198);
   new_histo_group_Higgs_wh3l_top_13TeV_flagOSSF88->SetEntries(723);
   new_histo_group_Higgs_wh3l_top_13TeV_flagOSSF88->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_top_13TeV_flagOSSF88->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_top_13TeV_flagOSSF88->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_top_13TeV_flagOSSF88->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_top_13TeV_flagOSSF88->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_top_13TeV_flagOSSF88->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_top_13TeV_flagOSSF88->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_top_13TeV_flagOSSF88->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_top_13TeV_flagOSSF88->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_top_13TeV_flagOSSF88->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_top_13TeV_flagOSSF88->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_top_13TeV_flagOSSF88->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_top_13TeV_flagOSSF88->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_top_13TeV_flagOSSF88->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_top_13TeV_flagOSSF88->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_top_13TeV_flagOSSF->Add(new_histo_group_Higgs_wh3l_top_13TeV_flagOSSF,"");
   thsBackground_grouped_wh3l_top_13TeV_flagOSSF->Draw("hist same");
   
   thsSignal_grouped_wh3l_top_13TeV_flagOSSF = new THStack();
   thsSignal_grouped_wh3l_top_13TeV_flagOSSF->SetName("thsSignal_grouped_wh3l_top_13TeV_flagOSSF");
   thsSignal_grouped_wh3l_top_13TeV_flagOSSF->SetTitle("thsSignal_grouped_wh3l_top_13TeV_flagOSSF");
   
   TH1F *thsSignal_grouped_wh3l_top_13TeV_flagOSSF_stack_20 = new TH1F("thsSignal_grouped_wh3l_top_13TeV_flagOSSF_stack_20","thsSignal_grouped_wh3l_top_13TeV_flagOSSF",2,0,2);
   thsSignal_grouped_wh3l_top_13TeV_flagOSSF_stack_20->SetMinimum(0);
   thsSignal_grouped_wh3l_top_13TeV_flagOSSF_stack_20->SetMaximum(0.3252002);
   thsSignal_grouped_wh3l_top_13TeV_flagOSSF_stack_20->SetDirectory(0);
   thsSignal_grouped_wh3l_top_13TeV_flagOSSF_stack_20->SetStats(0);
   thsSignal_grouped_wh3l_top_13TeV_flagOSSF_stack_20->SetLineStyle(0);
   thsSignal_grouped_wh3l_top_13TeV_flagOSSF_stack_20->SetMarkerStyle(20);
   thsSignal_grouped_wh3l_top_13TeV_flagOSSF_stack_20->GetXaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_top_13TeV_flagOSSF_stack_20->GetXaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_top_13TeV_flagOSSF_stack_20->GetXaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_top_13TeV_flagOSSF_stack_20->GetXaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_top_13TeV_flagOSSF_stack_20->GetXaxis()->SetTitleOffset(0.9);
   thsSignal_grouped_wh3l_top_13TeV_flagOSSF_stack_20->GetXaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_top_13TeV_flagOSSF_stack_20->GetYaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_top_13TeV_flagOSSF_stack_20->GetYaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_top_13TeV_flagOSSF_stack_20->GetYaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_top_13TeV_flagOSSF_stack_20->GetYaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_top_13TeV_flagOSSF_stack_20->GetYaxis()->SetTitleOffset(1.25);
   thsSignal_grouped_wh3l_top_13TeV_flagOSSF_stack_20->GetYaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_top_13TeV_flagOSSF_stack_20->GetZaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_top_13TeV_flagOSSF_stack_20->GetZaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_top_13TeV_flagOSSF_stack_20->GetZaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_top_13TeV_flagOSSF_stack_20->GetZaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_top_13TeV_flagOSSF_stack_20->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_top_13TeV_flagOSSF->SetHistogram(thsSignal_grouped_wh3l_top_13TeV_flagOSSF_stack_20);
   
   
   TH1D *new_histo_group_Higgs_wh3l_top_13TeV_flagOSSF89 = new TH1D("new_histo_group_Higgs_wh3l_top_13TeV_flagOSSF89","histo_H_htt",2,0,2);
   new_histo_group_Higgs_wh3l_top_13TeV_flagOSSF89->SetBinContent(1,0.1133326);
   new_histo_group_Higgs_wh3l_top_13TeV_flagOSSF89->SetBinContent(2,0.2926325);
   new_histo_group_Higgs_wh3l_top_13TeV_flagOSSF89->SetBinError(1,0.01073606);
   new_histo_group_Higgs_wh3l_top_13TeV_flagOSSF89->SetBinError(2,0.01708198);
   new_histo_group_Higgs_wh3l_top_13TeV_flagOSSF89->SetEntries(723);
   new_histo_group_Higgs_wh3l_top_13TeV_flagOSSF89->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_top_13TeV_flagOSSF89->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_top_13TeV_flagOSSF89->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_top_13TeV_flagOSSF89->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_top_13TeV_flagOSSF89->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_top_13TeV_flagOSSF89->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_top_13TeV_flagOSSF89->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_top_13TeV_flagOSSF89->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_top_13TeV_flagOSSF89->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_top_13TeV_flagOSSF89->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_top_13TeV_flagOSSF89->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_top_13TeV_flagOSSF89->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_top_13TeV_flagOSSF89->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_top_13TeV_flagOSSF89->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_top_13TeV_flagOSSF89->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_top_13TeV_flagOSSF->Add(new_histo_group_Higgs_wh3l_top_13TeV_flagOSSF,"");
   thsSignal_grouped_wh3l_top_13TeV_flagOSSF->Draw("hist same noclear");
   
   Double_t _fx3019[2] = {
   0.5,
   1.5};
   Double_t _fy3019[2] = {
   15.77594,
   33.02686};
   Double_t _felx3019[2] = {
   0.5,
   0.5};
   Double_t _fely3019[2] = {
   5.960398,
   9.082839};
   Double_t _fehx3019[2] = {
   0.5,
   0.5};
   Double_t _fehy3019[2] = {
   6.028381,
   9.082137};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(2,_fx3019,_fy3019,_felx3019,_fehx3019,_fely3019,_fehy3019);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(12);
   grae->SetFillStyle(3004);
   grae->SetLineColor(12);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3019 = new TH1F("Graph_Graph3019","",100,0,2.2);
   Graph_Graph3019->SetMinimum(6.586201);
   Graph_Graph3019->SetMaximum(45.33834);
   Graph_Graph3019->SetDirectory(0);
   Graph_Graph3019->SetStats(0);
   Graph_Graph3019->SetLineStyle(0);
   Graph_Graph3019->SetMarkerStyle(20);
   Graph_Graph3019->GetXaxis()->SetLabelFont(42);
   Graph_Graph3019->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3019->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3019->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3019->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3019->GetXaxis()->SetTitleFont(42);
   Graph_Graph3019->GetYaxis()->SetLabelFont(42);
   Graph_Graph3019->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3019->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3019->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3019->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3019->GetYaxis()->SetTitleFont(42);
   Graph_Graph3019->GetZaxis()->SetLabelFont(42);
   Graph_Graph3019->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3019->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3019->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3019->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3019);
   
   grae->Draw("2");
   
   Double_t _fx3020[2] = {
   0.5,
   1.5};
   Double_t _fy3020[2] = {
   7,
   34};
   Double_t _felx3020[2] = {
   0.5,
   0.5};
   Double_t _fely3020[2] = {
   2.581513,
   5.80224};
   Double_t _fehx3020[2] = {
   0.5,
   0.5};
   Double_t _fehy3020[2] = {
   3.770356,
   6.888243};
   grae = new TGraphAsymmErrors(2,_fx3020,_fy3020,_felx3020,_fehx3020,_fely3020,_fehy3020);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(1);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3020 = new TH1F("Graph_Graph3020","",100,0,2.2);
   Graph_Graph3020->SetMinimum(0.7715117);
   Graph_Graph3020->SetMaximum(44.53522);
   Graph_Graph3020->SetDirectory(0);
   Graph_Graph3020->SetStats(0);
   Graph_Graph3020->SetLineStyle(0);
   Graph_Graph3020->SetMarkerStyle(20);
   Graph_Graph3020->GetXaxis()->SetLabelFont(42);
   Graph_Graph3020->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3020->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3020->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3020->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3020->GetXaxis()->SetTitleFont(42);
   Graph_Graph3020->GetYaxis()->SetLabelFont(42);
   Graph_Graph3020->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3020->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3020->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3020->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3020->GetYaxis()->SetTitleFont(42);
   Graph_Graph3020->GetZaxis()->SetLabelFont(42);
   Graph_Graph3020->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3020->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3020->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3020->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3020);
   
   grae->Draw("p0");
   
   TLegend *leg = new TLegend(0.2,0.7,0.8,0.9,NULL,"brNDC");
   leg->SetTextFont(62);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("new_histo_group_Fake_wh3l_top_13TeV_flagOSSF","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_top_13TeV_flagOSSF","WW","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_top_13TeV_flagOSSF","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_top_13TeV_flagOSSF","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_top_13TeV_flagOSSF","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_top_13TeV_flagOSSF","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_top_13TeV_flagOSSF","Data","EPL");
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
   entry=leg->AddEntry("new_histo_group_Fake_wh3l_top_13TeV_flagOSSF","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_top_13TeV_flagOSSF","WW","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_top_13TeV_flagOSSF","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_top_13TeV_flagOSSF","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_top_13TeV_flagOSSF","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_top_13TeV_flagOSSF","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_top_13TeV_flagOSSF","Data","EPL");
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
   
   TH1F *hframe_copy90 = new TH1F("hframe_copy90","",1000,0,2);
   hframe_copy90->SetMinimum(0);
   hframe_copy90->SetMaximum(99.57738);
   hframe_copy90->SetDirectory(0);
   hframe_copy90->SetStats(0);
   hframe_copy90->SetLineStyle(0);
   hframe_copy90->SetMarkerStyle(20);
   hframe_copy90->GetXaxis()->SetTitle("flag OSSF");
   hframe_copy90->GetXaxis()->SetNdivisions(506);
   hframe_copy90->GetXaxis()->SetLabelFont(42);
   hframe_copy90->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy90->GetXaxis()->SetLabelSize(0.05);
   hframe_copy90->GetXaxis()->SetTitleSize(0.06);
   hframe_copy90->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy90->GetXaxis()->SetTitleFont(42);
   hframe_copy90->GetYaxis()->SetTitle("Events");
   hframe_copy90->GetYaxis()->SetLabelFont(42);
   hframe_copy90->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy90->GetYaxis()->SetLabelSize(0.05);
   hframe_copy90->GetYaxis()->SetTitleSize(0.06);
   hframe_copy90->GetYaxis()->SetTitleOffset(1.25);
   hframe_copy90->GetYaxis()->SetTitleFont(42);
   hframe_copy90->GetZaxis()->SetLabelFont(42);
   hframe_copy90->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy90->GetZaxis()->SetLabelSize(0.05);
   hframe_copy90->GetZaxis()->SetTitleSize(0.06);
   hframe_copy90->GetZaxis()->SetTitleFont(42);
   hframe_copy90->Draw("sameaxis");
   ccwh3l_top_13TeV_flagOSSF->Modified();
   ccwh3l_top_13TeV_flagOSSF->cd();
   ccwh3l_top_13TeV_flagOSSF->SetSelected(ccwh3l_top_13TeV_flagOSSF);
}
