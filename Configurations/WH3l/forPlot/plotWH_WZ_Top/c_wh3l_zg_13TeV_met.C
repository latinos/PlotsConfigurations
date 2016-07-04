void c_wh3l_zg_13TeV_met()
{
//=========Macro generated from canvas: ccwh3l_zg_13TeV_met/cc
//=========  (Sun Jul  3 02:18:05 2016) by ROOT version6.02/13
   TCanvas *ccwh3l_zg_13TeV_met = new TCanvas("ccwh3l_zg_13TeV_met", "cc",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   ccwh3l_zg_13TeV_met->SetHighLightColor(2);
   ccwh3l_zg_13TeV_met->Range(8.000001,-0.1585366,208,1.060976);
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
   
   TH1F *hframe81 = new TH1F("hframe81","",1000,40,200);
   hframe81->SetMinimum(0);
   hframe81->SetMaximum(0);
   hframe81->SetDirectory(0);
   hframe81->SetStats(0);
   hframe81->SetLineStyle(0);
   hframe81->SetMarkerStyle(20);
   hframe81->GetXaxis()->SetTitle("pfmet [GeV]");
   hframe81->GetXaxis()->SetNdivisions(506);
   hframe81->GetXaxis()->SetLabelFont(42);
   hframe81->GetXaxis()->SetLabelOffset(0.007);
   hframe81->GetXaxis()->SetLabelSize(0.05);
   hframe81->GetXaxis()->SetTitleSize(0.06);
   hframe81->GetXaxis()->SetTitleOffset(0.9);
   hframe81->GetXaxis()->SetTitleFont(42);
   hframe81->GetYaxis()->SetTitle("Events");
   hframe81->GetYaxis()->SetLabelFont(42);
   hframe81->GetYaxis()->SetLabelOffset(0.007);
   hframe81->GetYaxis()->SetLabelSize(0.05);
   hframe81->GetYaxis()->SetTitleSize(0.06);
   hframe81->GetYaxis()->SetTitleOffset(1.25);
   hframe81->GetYaxis()->SetTitleFont(42);
   hframe81->GetZaxis()->SetLabelFont(42);
   hframe81->GetZaxis()->SetLabelOffset(0.007);
   hframe81->GetZaxis()->SetLabelSize(0.05);
   hframe81->GetZaxis()->SetTitleSize(0.06);
   hframe81->GetZaxis()->SetTitleFont(42);
   hframe81->Draw(" ");
   
   THStack *thsBackground_grouped_wh3l_zg_13TeV_met = new THStack();
   thsBackground_grouped_wh3l_zg_13TeV_met->SetName("thsBackground_grouped_wh3l_zg_13TeV_met");
   thsBackground_grouped_wh3l_zg_13TeV_met->SetTitle("thsBackground_grouped_wh3l_zg_13TeV_met");
   
   TH1F *thsBackground_grouped_wh3l_zg_13TeV_met_stack_17 = new TH1F("thsBackground_grouped_wh3l_zg_13TeV_met_stack_17","thsBackground_grouped_wh3l_zg_13TeV_met",40,40,200);
   thsBackground_grouped_wh3l_zg_13TeV_met_stack_17->SetMinimum(0);
   thsBackground_grouped_wh3l_zg_13TeV_met_stack_17->SetMaximum(0);
   thsBackground_grouped_wh3l_zg_13TeV_met_stack_17->SetDirectory(0);
   thsBackground_grouped_wh3l_zg_13TeV_met_stack_17->SetStats(0);
   thsBackground_grouped_wh3l_zg_13TeV_met_stack_17->SetLineStyle(0);
   thsBackground_grouped_wh3l_zg_13TeV_met_stack_17->SetMarkerStyle(20);
   thsBackground_grouped_wh3l_zg_13TeV_met_stack_17->GetXaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_met_stack_17->GetXaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_zg_13TeV_met_stack_17->GetXaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_zg_13TeV_met_stack_17->GetXaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_zg_13TeV_met_stack_17->GetXaxis()->SetTitleOffset(0.9);
   thsBackground_grouped_wh3l_zg_13TeV_met_stack_17->GetXaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_met_stack_17->GetYaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_met_stack_17->GetYaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_zg_13TeV_met_stack_17->GetYaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_zg_13TeV_met_stack_17->GetYaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_zg_13TeV_met_stack_17->GetYaxis()->SetTitleOffset(1.25);
   thsBackground_grouped_wh3l_zg_13TeV_met_stack_17->GetYaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_met_stack_17->GetZaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_met_stack_17->GetZaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_zg_13TeV_met_stack_17->GetZaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_zg_13TeV_met_stack_17->GetZaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_zg_13TeV_met_stack_17->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_met->SetHistogram(thsBackground_grouped_wh3l_zg_13TeV_met_stack_17);
   
   
   TH1D *new_histo_group_Fake_wh3l_zg_13TeV_met82 = new TH1D("new_histo_group_Fake_wh3l_zg_13TeV_met82","histo_Fake",40,40,200);
   new_histo_group_Fake_wh3l_zg_13TeV_met82->SetBinContent(0,23.5808);
   new_histo_group_Fake_wh3l_zg_13TeV_met82->SetBinError(0,4.301121);
   new_histo_group_Fake_wh3l_zg_13TeV_met82->SetEntries(460);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_zg_13TeV_met82->SetFillColor(ci);
   new_histo_group_Fake_wh3l_zg_13TeV_met82->SetFillStyle(3001);

   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_zg_13TeV_met82->SetLineColor(ci);
   new_histo_group_Fake_wh3l_zg_13TeV_met82->GetXaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_zg_13TeV_met82->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_zg_13TeV_met82->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_zg_13TeV_met82->GetXaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_zg_13TeV_met82->GetYaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_zg_13TeV_met82->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_zg_13TeV_met82->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_zg_13TeV_met82->GetYaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_zg_13TeV_met82->GetZaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_zg_13TeV_met82->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_zg_13TeV_met82->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_zg_13TeV_met82->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_met->Add(new_histo_group_Fake_wh3l_zg_13TeV_met,"");
   
   TH1D *new_histo_group_WW_wh3l_zg_13TeV_met83 = new TH1D("new_histo_group_WW_wh3l_zg_13TeV_met83","histo_WW",40,40,200);
   new_histo_group_WW_wh3l_zg_13TeV_met83->SetBinContent(0,0.009961222);
   new_histo_group_WW_wh3l_zg_13TeV_met83->SetBinError(0,0.009961222);
   new_histo_group_WW_wh3l_zg_13TeV_met83->SetEntries(1);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_zg_13TeV_met83->SetFillColor(ci);
   new_histo_group_WW_wh3l_zg_13TeV_met83->SetFillStyle(3001);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_zg_13TeV_met83->SetLineColor(ci);
   new_histo_group_WW_wh3l_zg_13TeV_met83->GetXaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_zg_13TeV_met83->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_zg_13TeV_met83->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_zg_13TeV_met83->GetXaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_zg_13TeV_met83->GetYaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_zg_13TeV_met83->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_zg_13TeV_met83->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_zg_13TeV_met83->GetYaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_zg_13TeV_met83->GetZaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_zg_13TeV_met83->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_zg_13TeV_met83->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_zg_13TeV_met83->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_met->Add(new_histo_group_WW_wh3l_zg_13TeV_met,"");
   
   TH1D *new_histo_group_VVV_wh3l_zg_13TeV_met84 = new TH1D("new_histo_group_VVV_wh3l_zg_13TeV_met84","histo_VVV",40,40,200);
   new_histo_group_VVV_wh3l_zg_13TeV_met84->SetBinContent(0,0.01448303);
   new_histo_group_VVV_wh3l_zg_13TeV_met84->SetBinError(0,0.006262887);
   new_histo_group_VVV_wh3l_zg_13TeV_met84->SetEntries(7);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_zg_13TeV_met84->SetFillColor(ci);
   new_histo_group_VVV_wh3l_zg_13TeV_met84->SetFillStyle(3001);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_zg_13TeV_met84->SetLineColor(ci);
   new_histo_group_VVV_wh3l_zg_13TeV_met84->GetXaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_zg_13TeV_met84->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_zg_13TeV_met84->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_zg_13TeV_met84->GetXaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_zg_13TeV_met84->GetYaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_zg_13TeV_met84->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_zg_13TeV_met84->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_zg_13TeV_met84->GetYaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_zg_13TeV_met84->GetZaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_zg_13TeV_met84->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_zg_13TeV_met84->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_zg_13TeV_met84->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_met->Add(new_histo_group_VVV_wh3l_zg_13TeV_met,"");
   
   TH1D *new_histo_group_Vg_wh3l_zg_13TeV_met85 = new TH1D("new_histo_group_Vg_wh3l_zg_13TeV_met85","histo_Vg",40,40,200);
   new_histo_group_Vg_wh3l_zg_13TeV_met85->SetBinContent(0,103.9668);
   new_histo_group_Vg_wh3l_zg_13TeV_met85->SetBinError(0,3.859601);
   new_histo_group_Vg_wh3l_zg_13TeV_met85->SetEntries(1376);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_zg_13TeV_met85->SetFillColor(ci);
   new_histo_group_Vg_wh3l_zg_13TeV_met85->SetFillStyle(3001);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_zg_13TeV_met85->SetLineColor(ci);
   new_histo_group_Vg_wh3l_zg_13TeV_met85->GetXaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_zg_13TeV_met85->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_zg_13TeV_met85->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_zg_13TeV_met85->GetXaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_zg_13TeV_met85->GetYaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_zg_13TeV_met85->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_zg_13TeV_met85->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_zg_13TeV_met85->GetYaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_zg_13TeV_met85->GetZaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_zg_13TeV_met85->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_zg_13TeV_met85->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_zg_13TeV_met85->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_met->Add(new_histo_group_Vg_wh3l_zg_13TeV_met,"");
   
   TH1D *new_histo_group_ZZ_wh3l_zg_13TeV_met86 = new TH1D("new_histo_group_ZZ_wh3l_zg_13TeV_met86","histo_ZZ",40,40,200);
   new_histo_group_ZZ_wh3l_zg_13TeV_met86->SetBinContent(0,0.5933684);
   new_histo_group_ZZ_wh3l_zg_13TeV_met86->SetBinError(0,0.1549259);
   new_histo_group_ZZ_wh3l_zg_13TeV_met86->SetEntries(16);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_zg_13TeV_met86->SetFillColor(ci);
   new_histo_group_ZZ_wh3l_zg_13TeV_met86->SetFillStyle(3001);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_zg_13TeV_met86->SetLineColor(ci);
   new_histo_group_ZZ_wh3l_zg_13TeV_met86->GetXaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_zg_13TeV_met86->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_zg_13TeV_met86->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_zg_13TeV_met86->GetXaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_zg_13TeV_met86->GetYaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_zg_13TeV_met86->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_zg_13TeV_met86->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_zg_13TeV_met86->GetYaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_zg_13TeV_met86->GetZaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_zg_13TeV_met86->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_zg_13TeV_met86->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_zg_13TeV_met86->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_met->Add(new_histo_group_ZZ_wh3l_zg_13TeV_met,"");
   
   TH1D *new_histo_group_WZ_wh3l_zg_13TeV_met87 = new TH1D("new_histo_group_WZ_wh3l_zg_13TeV_met87","histo_WZ",40,40,200);
   new_histo_group_WZ_wh3l_zg_13TeV_met87->SetBinContent(0,1.878524);
   new_histo_group_WZ_wh3l_zg_13TeV_met87->SetBinError(0,0.101118);
   new_histo_group_WZ_wh3l_zg_13TeV_met87->SetEntries(376);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_zg_13TeV_met87->SetFillColor(ci);
   new_histo_group_WZ_wh3l_zg_13TeV_met87->SetFillStyle(3001);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_zg_13TeV_met87->SetLineColor(ci);
   new_histo_group_WZ_wh3l_zg_13TeV_met87->GetXaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_zg_13TeV_met87->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_zg_13TeV_met87->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_zg_13TeV_met87->GetXaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_zg_13TeV_met87->GetYaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_zg_13TeV_met87->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_zg_13TeV_met87->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_zg_13TeV_met87->GetYaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_zg_13TeV_met87->GetZaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_zg_13TeV_met87->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_zg_13TeV_met87->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_zg_13TeV_met87->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_met->Add(new_histo_group_WZ_wh3l_zg_13TeV_met,"");
   
   TH1D *new_histo_group_Higgs_wh3l_zg_13TeV_met88 = new TH1D("new_histo_group_Higgs_wh3l_zg_13TeV_met88","histo_H_htt",40,40,200);
   new_histo_group_Higgs_wh3l_zg_13TeV_met88->SetBinContent(0,0.08877665);
   new_histo_group_Higgs_wh3l_zg_13TeV_met88->SetBinError(0,0.009751691);
   new_histo_group_Higgs_wh3l_zg_13TeV_met88->SetEntries(180);
   new_histo_group_Higgs_wh3l_zg_13TeV_met88->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_zg_13TeV_met88->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_zg_13TeV_met88->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_zg_13TeV_met88->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_zg_13TeV_met88->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_zg_13TeV_met88->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_zg_13TeV_met88->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_zg_13TeV_met88->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_zg_13TeV_met88->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_zg_13TeV_met88->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_zg_13TeV_met88->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_zg_13TeV_met88->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_zg_13TeV_met88->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_zg_13TeV_met88->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_zg_13TeV_met88->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_met->Add(new_histo_group_Higgs_wh3l_zg_13TeV_met,"");
   thsBackground_grouped_wh3l_zg_13TeV_met->Draw("hist same");
   
   thsSignal_grouped_wh3l_zg_13TeV_met = new THStack();
   thsSignal_grouped_wh3l_zg_13TeV_met->SetName("thsSignal_grouped_wh3l_zg_13TeV_met");
   thsSignal_grouped_wh3l_zg_13TeV_met->SetTitle("thsSignal_grouped_wh3l_zg_13TeV_met");
   
   TH1F *thsSignal_grouped_wh3l_zg_13TeV_met_stack_18 = new TH1F("thsSignal_grouped_wh3l_zg_13TeV_met_stack_18","thsSignal_grouped_wh3l_zg_13TeV_met",40,40,200);
   thsSignal_grouped_wh3l_zg_13TeV_met_stack_18->SetMinimum(0);
   thsSignal_grouped_wh3l_zg_13TeV_met_stack_18->SetMaximum(0);
   thsSignal_grouped_wh3l_zg_13TeV_met_stack_18->SetDirectory(0);
   thsSignal_grouped_wh3l_zg_13TeV_met_stack_18->SetStats(0);
   thsSignal_grouped_wh3l_zg_13TeV_met_stack_18->SetLineStyle(0);
   thsSignal_grouped_wh3l_zg_13TeV_met_stack_18->SetMarkerStyle(20);
   thsSignal_grouped_wh3l_zg_13TeV_met_stack_18->GetXaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_zg_13TeV_met_stack_18->GetXaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_zg_13TeV_met_stack_18->GetXaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_zg_13TeV_met_stack_18->GetXaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_zg_13TeV_met_stack_18->GetXaxis()->SetTitleOffset(0.9);
   thsSignal_grouped_wh3l_zg_13TeV_met_stack_18->GetXaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_zg_13TeV_met_stack_18->GetYaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_zg_13TeV_met_stack_18->GetYaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_zg_13TeV_met_stack_18->GetYaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_zg_13TeV_met_stack_18->GetYaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_zg_13TeV_met_stack_18->GetYaxis()->SetTitleOffset(1.25);
   thsSignal_grouped_wh3l_zg_13TeV_met_stack_18->GetYaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_zg_13TeV_met_stack_18->GetZaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_zg_13TeV_met_stack_18->GetZaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_zg_13TeV_met_stack_18->GetZaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_zg_13TeV_met_stack_18->GetZaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_zg_13TeV_met_stack_18->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_zg_13TeV_met->SetHistogram(thsSignal_grouped_wh3l_zg_13TeV_met_stack_18);
   
   
   TH1D *new_histo_group_Higgs_wh3l_zg_13TeV_met89 = new TH1D("new_histo_group_Higgs_wh3l_zg_13TeV_met89","histo_H_htt",40,40,200);
   new_histo_group_Higgs_wh3l_zg_13TeV_met89->SetBinContent(0,0.08877665);
   new_histo_group_Higgs_wh3l_zg_13TeV_met89->SetBinError(0,0.009751691);
   new_histo_group_Higgs_wh3l_zg_13TeV_met89->SetEntries(180);
   new_histo_group_Higgs_wh3l_zg_13TeV_met89->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_zg_13TeV_met89->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_zg_13TeV_met89->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_zg_13TeV_met89->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_zg_13TeV_met89->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_zg_13TeV_met89->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_zg_13TeV_met89->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_zg_13TeV_met89->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_zg_13TeV_met89->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_zg_13TeV_met89->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_zg_13TeV_met89->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_zg_13TeV_met89->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_zg_13TeV_met89->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_zg_13TeV_met89->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_zg_13TeV_met89->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_zg_13TeV_met->Add(new_histo_group_Higgs_wh3l_zg_13TeV_met,"");
   thsSignal_grouped_wh3l_zg_13TeV_met->Draw("hist same noclear");
   
   Double_t _fx3017[40] = {
   42,
   46,
   50,
   54,
   58,
   62,
   66,
   70,
   74,
   78,
   82,
   86,
   90,
   94,
   98,
   102,
   106,
   110,
   114,
   118,
   122,
   126,
   130,
   134,
   138,
   142,
   146,
   150,
   154,
   158,
   162,
   166,
   170,
   174,
   178,
   182,
   186,
   190,
   194,
   198};
   Double_t _fy3017[40] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t _felx3017[40] = {
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2};
   Double_t _fely3017[40] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t _fehx3017[40] = {
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2};
   Double_t _fehy3017[40] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(40,_fx3017,_fy3017,_felx3017,_fehx3017,_fely3017,_fehy3017);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(12);
   grae->SetFillStyle(3004);
   grae->SetLineColor(12);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3017 = new TH1F("Graph_Graph3017","",100,24,216);
   Graph_Graph3017->SetMinimum(0);
   Graph_Graph3017->SetMaximum(1.1);
   Graph_Graph3017->SetDirectory(0);
   Graph_Graph3017->SetStats(0);
   Graph_Graph3017->SetLineStyle(0);
   Graph_Graph3017->SetMarkerStyle(20);
   Graph_Graph3017->GetXaxis()->SetLabelFont(42);
   Graph_Graph3017->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3017->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3017->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3017->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3017->GetXaxis()->SetTitleFont(42);
   Graph_Graph3017->GetYaxis()->SetLabelFont(42);
   Graph_Graph3017->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3017->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3017->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3017->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3017->GetYaxis()->SetTitleFont(42);
   Graph_Graph3017->GetZaxis()->SetLabelFont(42);
   Graph_Graph3017->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3017->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3017->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3017->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3017);
   
   grae->Draw("2");
   
   Double_t _fx3018[40] = {
   42,
   46,
   50,
   54,
   58,
   62,
   66,
   70,
   74,
   78,
   82,
   86,
   90,
   94,
   98,
   102,
   106,
   110,
   114,
   118,
   122,
   126,
   130,
   134,
   138,
   142,
   146,
   150,
   154,
   158,
   162,
   166,
   170,
   174,
   178,
   182,
   186,
   190,
   194,
   198};
   Double_t _fy3018[40] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t _felx3018[40] = {
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2};
   Double_t _fely3018[40] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t _fehx3018[40] = {
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2};
   Double_t _fehy3018[40] = {
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
   grae = new TGraphAsymmErrors(40,_fx3018,_fy3018,_felx3018,_fehx3018,_fely3018,_fehy3018);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(1);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3018 = new TH1F("Graph_Graph3018","",100,24,216);
   Graph_Graph3018->SetMinimum(0);
   Graph_Graph3018->SetMaximum(1.262698);
   Graph_Graph3018->SetDirectory(0);
   Graph_Graph3018->SetStats(0);
   Graph_Graph3018->SetLineStyle(0);
   Graph_Graph3018->SetMarkerStyle(20);
   Graph_Graph3018->GetXaxis()->SetLabelFont(42);
   Graph_Graph3018->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3018->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3018->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3018->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3018->GetXaxis()->SetTitleFont(42);
   Graph_Graph3018->GetYaxis()->SetLabelFont(42);
   Graph_Graph3018->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3018->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3018->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3018->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3018->GetYaxis()->SetTitleFont(42);
   Graph_Graph3018->GetZaxis()->SetLabelFont(42);
   Graph_Graph3018->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3018->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3018->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3018->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3018);
   
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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_zg_13TeV_met","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_zg_13TeV_met","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
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
   
   TH1F *hframe_copy90 = new TH1F("hframe_copy90","",1000,40,200);
   hframe_copy90->SetMinimum(0);
   hframe_copy90->SetMaximum(0);
   hframe_copy90->SetDirectory(0);
   hframe_copy90->SetStats(0);
   hframe_copy90->SetLineStyle(0);
   hframe_copy90->SetMarkerStyle(20);
   hframe_copy90->GetXaxis()->SetTitle("pfmet [GeV]");
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
   ccwh3l_zg_13TeV_met->Modified();
   ccwh3l_zg_13TeV_met->cd();
   ccwh3l_zg_13TeV_met->SetSelected(ccwh3l_zg_13TeV_met);
}
