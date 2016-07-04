void c_wh3l_fakes_13TeV_pt3()
{
//=========Macro generated from canvas: ccwh3l_fakes_13TeV_pt3/cc
//=========  (Sat Jul  2 19:44:33 2016) by ROOT version6.02/13
   TCanvas *ccwh3l_fakes_13TeV_pt3 = new TCanvas("ccwh3l_fakes_13TeV_pt3", "cc",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   ccwh3l_fakes_13TeV_pt3->SetHighLightColor(2);
   ccwh3l_fakes_13TeV_pt3->Range(-28,-0.1585366,209.5,1.060976);
   ccwh3l_fakes_13TeV_pt3->SetFillColor(0);
   ccwh3l_fakes_13TeV_pt3->SetBorderMode(0);
   ccwh3l_fakes_13TeV_pt3->SetBorderSize(2);
   ccwh3l_fakes_13TeV_pt3->SetTickx(1);
   ccwh3l_fakes_13TeV_pt3->SetTicky(1);
   ccwh3l_fakes_13TeV_pt3->SetLeftMargin(0.16);
   ccwh3l_fakes_13TeV_pt3->SetRightMargin(0.04);
   ccwh3l_fakes_13TeV_pt3->SetTopMargin(0.05);
   ccwh3l_fakes_13TeV_pt3->SetBottomMargin(0.13);
   ccwh3l_fakes_13TeV_pt3->SetFrameFillStyle(0);
   ccwh3l_fakes_13TeV_pt3->SetFrameBorderMode(0);
   ccwh3l_fakes_13TeV_pt3->SetFrameFillStyle(0);
   ccwh3l_fakes_13TeV_pt3->SetFrameBorderMode(0);
   
   TH1F *hframe55 = new TH1F("hframe55","",1000,10,200);
   hframe55->SetMinimum(0);
   hframe55->SetMaximum(0);
   hframe55->SetDirectory(0);
   hframe55->SetStats(0);
   hframe55->SetLineStyle(0);
   hframe55->SetMarkerStyle(20);
   hframe55->GetXaxis()->SetTitle("lept3_p_{T} [GeV]");
   hframe55->GetXaxis()->SetNdivisions(506);
   hframe55->GetXaxis()->SetLabelFont(42);
   hframe55->GetXaxis()->SetLabelOffset(0.007);
   hframe55->GetXaxis()->SetLabelSize(0.05);
   hframe55->GetXaxis()->SetTitleSize(0.06);
   hframe55->GetXaxis()->SetTitleOffset(0.9);
   hframe55->GetXaxis()->SetTitleFont(42);
   hframe55->GetYaxis()->SetTitle("Events");
   hframe55->GetYaxis()->SetLabelFont(42);
   hframe55->GetYaxis()->SetLabelOffset(0.007);
   hframe55->GetYaxis()->SetLabelSize(0.05);
   hframe55->GetYaxis()->SetTitleSize(0.06);
   hframe55->GetYaxis()->SetTitleOffset(1.25);
   hframe55->GetYaxis()->SetTitleFont(42);
   hframe55->GetZaxis()->SetLabelFont(42);
   hframe55->GetZaxis()->SetLabelOffset(0.007);
   hframe55->GetZaxis()->SetLabelSize(0.05);
   hframe55->GetZaxis()->SetTitleSize(0.06);
   hframe55->GetZaxis()->SetTitleFont(42);
   hframe55->Draw(" ");
   
   THStack *thsBackground_grouped_wh3l_fakes_13TeV_pt3 = new THStack();
   thsBackground_grouped_wh3l_fakes_13TeV_pt3->SetName("thsBackground_grouped_wh3l_fakes_13TeV_pt3");
   thsBackground_grouped_wh3l_fakes_13TeV_pt3->SetTitle("thsBackground_grouped_wh3l_fakes_13TeV_pt3");
   
   TH1F *thsBackground_grouped_wh3l_fakes_13TeV_pt3_stack_13 = new TH1F("thsBackground_grouped_wh3l_fakes_13TeV_pt3_stack_13","thsBackground_grouped_wh3l_fakes_13TeV_pt3",25,10,200);
   thsBackground_grouped_wh3l_fakes_13TeV_pt3_stack_13->SetMinimum(0);
   thsBackground_grouped_wh3l_fakes_13TeV_pt3_stack_13->SetMaximum(0);
   thsBackground_grouped_wh3l_fakes_13TeV_pt3_stack_13->SetDirectory(0);
   thsBackground_grouped_wh3l_fakes_13TeV_pt3_stack_13->SetStats(0);
   thsBackground_grouped_wh3l_fakes_13TeV_pt3_stack_13->SetLineStyle(0);
   thsBackground_grouped_wh3l_fakes_13TeV_pt3_stack_13->SetMarkerStyle(20);
   thsBackground_grouped_wh3l_fakes_13TeV_pt3_stack_13->GetXaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_fakes_13TeV_pt3_stack_13->GetXaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_fakes_13TeV_pt3_stack_13->GetXaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_fakes_13TeV_pt3_stack_13->GetXaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_fakes_13TeV_pt3_stack_13->GetXaxis()->SetTitleOffset(0.9);
   thsBackground_grouped_wh3l_fakes_13TeV_pt3_stack_13->GetXaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_fakes_13TeV_pt3_stack_13->GetYaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_fakes_13TeV_pt3_stack_13->GetYaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_fakes_13TeV_pt3_stack_13->GetYaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_fakes_13TeV_pt3_stack_13->GetYaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_fakes_13TeV_pt3_stack_13->GetYaxis()->SetTitleOffset(1.25);
   thsBackground_grouped_wh3l_fakes_13TeV_pt3_stack_13->GetYaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_fakes_13TeV_pt3_stack_13->GetZaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_fakes_13TeV_pt3_stack_13->GetZaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_fakes_13TeV_pt3_stack_13->GetZaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_fakes_13TeV_pt3_stack_13->GetZaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_fakes_13TeV_pt3_stack_13->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_fakes_13TeV_pt3->SetHistogram(thsBackground_grouped_wh3l_fakes_13TeV_pt3_stack_13);
   
   
   TH1D *new_histo_group_Fake_wh3l_fakes_13TeV_pt356 = new TH1D("new_histo_group_Fake_wh3l_fakes_13TeV_pt356","histo_Fake",25,10,200);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_fakes_13TeV_pt356->SetFillColor(ci);
   new_histo_group_Fake_wh3l_fakes_13TeV_pt356->SetFillStyle(3001);

   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_fakes_13TeV_pt356->SetLineColor(ci);
   new_histo_group_Fake_wh3l_fakes_13TeV_pt356->GetXaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_fakes_13TeV_pt356->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_fakes_13TeV_pt356->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_fakes_13TeV_pt356->GetXaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_fakes_13TeV_pt356->GetYaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_fakes_13TeV_pt356->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_fakes_13TeV_pt356->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_fakes_13TeV_pt356->GetYaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_fakes_13TeV_pt356->GetZaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_fakes_13TeV_pt356->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_fakes_13TeV_pt356->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_fakes_13TeV_pt356->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_fakes_13TeV_pt3->Add(new_histo_group_Fake_wh3l_fakes_13TeV_pt3,"");
   
   TH1D *new_histo_group_WW_wh3l_fakes_13TeV_pt357 = new TH1D("new_histo_group_WW_wh3l_fakes_13TeV_pt357","histo_WW",25,10,200);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_fakes_13TeV_pt357->SetFillColor(ci);
   new_histo_group_WW_wh3l_fakes_13TeV_pt357->SetFillStyle(3001);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_fakes_13TeV_pt357->SetLineColor(ci);
   new_histo_group_WW_wh3l_fakes_13TeV_pt357->GetXaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_fakes_13TeV_pt357->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_fakes_13TeV_pt357->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_fakes_13TeV_pt357->GetXaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_fakes_13TeV_pt357->GetYaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_fakes_13TeV_pt357->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_fakes_13TeV_pt357->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_fakes_13TeV_pt357->GetYaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_fakes_13TeV_pt357->GetZaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_fakes_13TeV_pt357->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_fakes_13TeV_pt357->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_fakes_13TeV_pt357->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_fakes_13TeV_pt3->Add(new_histo_group_WW_wh3l_fakes_13TeV_pt3,"");
   
   TH1D *new_histo_group_Vg_wh3l_fakes_13TeV_pt358 = new TH1D("new_histo_group_Vg_wh3l_fakes_13TeV_pt358","histo_Vg",25,10,200);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_fakes_13TeV_pt358->SetFillColor(ci);
   new_histo_group_Vg_wh3l_fakes_13TeV_pt358->SetFillStyle(3001);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_fakes_13TeV_pt358->SetLineColor(ci);
   new_histo_group_Vg_wh3l_fakes_13TeV_pt358->GetXaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_fakes_13TeV_pt358->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_fakes_13TeV_pt358->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_fakes_13TeV_pt358->GetXaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_fakes_13TeV_pt358->GetYaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_fakes_13TeV_pt358->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_fakes_13TeV_pt358->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_fakes_13TeV_pt358->GetYaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_fakes_13TeV_pt358->GetZaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_fakes_13TeV_pt358->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_fakes_13TeV_pt358->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_fakes_13TeV_pt358->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_fakes_13TeV_pt3->Add(new_histo_group_Vg_wh3l_fakes_13TeV_pt3,"");
   
   TH1D *new_histo_group_ZZ_wh3l_fakes_13TeV_pt359 = new TH1D("new_histo_group_ZZ_wh3l_fakes_13TeV_pt359","histo_ZZ",25,10,200);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_fakes_13TeV_pt359->SetFillColor(ci);
   new_histo_group_ZZ_wh3l_fakes_13TeV_pt359->SetFillStyle(3001);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_fakes_13TeV_pt359->SetLineColor(ci);
   new_histo_group_ZZ_wh3l_fakes_13TeV_pt359->GetXaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_fakes_13TeV_pt359->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_fakes_13TeV_pt359->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_fakes_13TeV_pt359->GetXaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_fakes_13TeV_pt359->GetYaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_fakes_13TeV_pt359->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_fakes_13TeV_pt359->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_fakes_13TeV_pt359->GetYaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_fakes_13TeV_pt359->GetZaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_fakes_13TeV_pt359->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_fakes_13TeV_pt359->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_fakes_13TeV_pt359->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_fakes_13TeV_pt3->Add(new_histo_group_ZZ_wh3l_fakes_13TeV_pt3,"");
   
   TH1D *new_histo_group_WZ_wh3l_fakes_13TeV_pt360 = new TH1D("new_histo_group_WZ_wh3l_fakes_13TeV_pt360","histo_WZ",25,10,200);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_fakes_13TeV_pt360->SetFillColor(ci);
   new_histo_group_WZ_wh3l_fakes_13TeV_pt360->SetFillStyle(3001);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_fakes_13TeV_pt360->SetLineColor(ci);
   new_histo_group_WZ_wh3l_fakes_13TeV_pt360->GetXaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_fakes_13TeV_pt360->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_fakes_13TeV_pt360->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_fakes_13TeV_pt360->GetXaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_fakes_13TeV_pt360->GetYaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_fakes_13TeV_pt360->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_fakes_13TeV_pt360->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_fakes_13TeV_pt360->GetYaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_fakes_13TeV_pt360->GetZaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_fakes_13TeV_pt360->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_fakes_13TeV_pt360->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_fakes_13TeV_pt360->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_fakes_13TeV_pt3->Add(new_histo_group_WZ_wh3l_fakes_13TeV_pt3,"");
   
   TH1D *new_histo_group_Higgs_wh3l_fakes_13TeV_pt361 = new TH1D("new_histo_group_Higgs_wh3l_fakes_13TeV_pt361","histo_H_htt",25,10,200);
   new_histo_group_Higgs_wh3l_fakes_13TeV_pt361->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_fakes_13TeV_pt361->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_fakes_13TeV_pt361->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_fakes_13TeV_pt361->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_fakes_13TeV_pt361->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_fakes_13TeV_pt361->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_fakes_13TeV_pt361->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_fakes_13TeV_pt361->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_fakes_13TeV_pt361->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_fakes_13TeV_pt361->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_fakes_13TeV_pt361->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_fakes_13TeV_pt361->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_fakes_13TeV_pt361->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_fakes_13TeV_pt361->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_fakes_13TeV_pt361->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_fakes_13TeV_pt3->Add(new_histo_group_Higgs_wh3l_fakes_13TeV_pt3,"");
   thsBackground_grouped_wh3l_fakes_13TeV_pt3->Draw("hist same");
   
   thsSignal_grouped_wh3l_fakes_13TeV_pt3 = new THStack();
   thsSignal_grouped_wh3l_fakes_13TeV_pt3->SetName("thsSignal_grouped_wh3l_fakes_13TeV_pt3");
   thsSignal_grouped_wh3l_fakes_13TeV_pt3->SetTitle("thsSignal_grouped_wh3l_fakes_13TeV_pt3");
   
   TH1F *thsSignal_grouped_wh3l_fakes_13TeV_pt3_stack_14 = new TH1F("thsSignal_grouped_wh3l_fakes_13TeV_pt3_stack_14","thsSignal_grouped_wh3l_fakes_13TeV_pt3",25,10,200);
   thsSignal_grouped_wh3l_fakes_13TeV_pt3_stack_14->SetMinimum(0);
   thsSignal_grouped_wh3l_fakes_13TeV_pt3_stack_14->SetMaximum(0);
   thsSignal_grouped_wh3l_fakes_13TeV_pt3_stack_14->SetDirectory(0);
   thsSignal_grouped_wh3l_fakes_13TeV_pt3_stack_14->SetStats(0);
   thsSignal_grouped_wh3l_fakes_13TeV_pt3_stack_14->SetLineStyle(0);
   thsSignal_grouped_wh3l_fakes_13TeV_pt3_stack_14->SetMarkerStyle(20);
   thsSignal_grouped_wh3l_fakes_13TeV_pt3_stack_14->GetXaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_fakes_13TeV_pt3_stack_14->GetXaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_fakes_13TeV_pt3_stack_14->GetXaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_fakes_13TeV_pt3_stack_14->GetXaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_fakes_13TeV_pt3_stack_14->GetXaxis()->SetTitleOffset(0.9);
   thsSignal_grouped_wh3l_fakes_13TeV_pt3_stack_14->GetXaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_fakes_13TeV_pt3_stack_14->GetYaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_fakes_13TeV_pt3_stack_14->GetYaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_fakes_13TeV_pt3_stack_14->GetYaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_fakes_13TeV_pt3_stack_14->GetYaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_fakes_13TeV_pt3_stack_14->GetYaxis()->SetTitleOffset(1.25);
   thsSignal_grouped_wh3l_fakes_13TeV_pt3_stack_14->GetYaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_fakes_13TeV_pt3_stack_14->GetZaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_fakes_13TeV_pt3_stack_14->GetZaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_fakes_13TeV_pt3_stack_14->GetZaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_fakes_13TeV_pt3_stack_14->GetZaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_fakes_13TeV_pt3_stack_14->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_fakes_13TeV_pt3->SetHistogram(thsSignal_grouped_wh3l_fakes_13TeV_pt3_stack_14);
   
   
   TH1D *new_histo_group_Higgs_wh3l_fakes_13TeV_pt362 = new TH1D("new_histo_group_Higgs_wh3l_fakes_13TeV_pt362","histo_H_htt",25,10,200);
   new_histo_group_Higgs_wh3l_fakes_13TeV_pt362->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_fakes_13TeV_pt362->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_fakes_13TeV_pt362->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_fakes_13TeV_pt362->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_fakes_13TeV_pt362->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_fakes_13TeV_pt362->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_fakes_13TeV_pt362->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_fakes_13TeV_pt362->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_fakes_13TeV_pt362->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_fakes_13TeV_pt362->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_fakes_13TeV_pt362->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_fakes_13TeV_pt362->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_fakes_13TeV_pt362->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_fakes_13TeV_pt362->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_fakes_13TeV_pt362->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_fakes_13TeV_pt3->Add(new_histo_group_Higgs_wh3l_fakes_13TeV_pt3,"");
   thsSignal_grouped_wh3l_fakes_13TeV_pt3->Draw("hist same noclear");
   
   Double_t _fx3013[25] = {
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
   Double_t _fy3013[25] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t _felx3013[25] = {
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
   Double_t _fely3013[25] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t _fehx3013[25] = {
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
   Double_t _fehy3013[25] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(25,_fx3013,_fy3013,_felx3013,_fehx3013,_fely3013,_fehy3013);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(12);
   grae->SetFillStyle(3004);
   grae->SetLineColor(12);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3013 = new TH1F("Graph_Graph3013","",100,0,219);
   Graph_Graph3013->SetMinimum(0);
   Graph_Graph3013->SetMaximum(1.1);
   Graph_Graph3013->SetDirectory(0);
   Graph_Graph3013->SetStats(0);
   Graph_Graph3013->SetLineStyle(0);
   Graph_Graph3013->SetMarkerStyle(20);
   Graph_Graph3013->GetXaxis()->SetLabelFont(42);
   Graph_Graph3013->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3013->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3013->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3013->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3013->GetXaxis()->SetTitleFont(42);
   Graph_Graph3013->GetYaxis()->SetLabelFont(42);
   Graph_Graph3013->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3013->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3013->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3013->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3013->GetYaxis()->SetTitleFont(42);
   Graph_Graph3013->GetZaxis()->SetLabelFont(42);
   Graph_Graph3013->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3013->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3013->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3013->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3013);
   
   grae->Draw("2");
   
   Double_t _fx3014[25] = {
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
   Double_t _fy3014[25] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t _felx3014[25] = {
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
   Double_t _fely3014[25] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t _fehx3014[25] = {
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
   Double_t _fehy3014[25] = {
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
   grae = new TGraphAsymmErrors(25,_fx3014,_fy3014,_felx3014,_fehx3014,_fely3014,_fehy3014);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(1);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3014 = new TH1F("Graph_Graph3014","",100,0,219);
   Graph_Graph3014->SetMinimum(0);
   Graph_Graph3014->SetMaximum(1.262698);
   Graph_Graph3014->SetDirectory(0);
   Graph_Graph3014->SetStats(0);
   Graph_Graph3014->SetLineStyle(0);
   Graph_Graph3014->SetMarkerStyle(20);
   Graph_Graph3014->GetXaxis()->SetLabelFont(42);
   Graph_Graph3014->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3014->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3014->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3014->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3014->GetXaxis()->SetTitleFont(42);
   Graph_Graph3014->GetYaxis()->SetLabelFont(42);
   Graph_Graph3014->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3014->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3014->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3014->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3014->GetYaxis()->SetTitleFont(42);
   Graph_Graph3014->GetZaxis()->SetLabelFont(42);
   Graph_Graph3014->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3014->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3014->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3014->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3014);
   
   grae->Draw("p0");
   
   TLegend *leg = new TLegend(0.2,0.7,0.8,0.9,NULL,"brNDC");
   leg->SetTextFont(62);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("new_histo_group_Fake_wh3l_fakes_13TeV_pt3","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_fakes_13TeV_pt3","WW","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_fakes_13TeV_pt3","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_fakes_13TeV_pt3","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_fakes_13TeV_pt3","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_fakes_13TeV_pt3","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_fakes_13TeV_pt3","Data","EPL");
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
   entry=leg->AddEntry("new_histo_group_Fake_wh3l_fakes_13TeV_pt3","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_fakes_13TeV_pt3","WW","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_fakes_13TeV_pt3","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_fakes_13TeV_pt3","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_fakes_13TeV_pt3","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_fakes_13TeV_pt3","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_fakes_13TeV_pt3","Data","EPL");
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
   
   TH1F *hframe_copy63 = new TH1F("hframe_copy63","",1000,10,200);
   hframe_copy63->SetMinimum(0);
   hframe_copy63->SetMaximum(0);
   hframe_copy63->SetDirectory(0);
   hframe_copy63->SetStats(0);
   hframe_copy63->SetLineStyle(0);
   hframe_copy63->SetMarkerStyle(20);
   hframe_copy63->GetXaxis()->SetTitle("lept3_p_{T} [GeV]");
   hframe_copy63->GetXaxis()->SetNdivisions(506);
   hframe_copy63->GetXaxis()->SetLabelFont(42);
   hframe_copy63->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy63->GetXaxis()->SetLabelSize(0.05);
   hframe_copy63->GetXaxis()->SetTitleSize(0.06);
   hframe_copy63->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy63->GetXaxis()->SetTitleFont(42);
   hframe_copy63->GetYaxis()->SetTitle("Events");
   hframe_copy63->GetYaxis()->SetLabelFont(42);
   hframe_copy63->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy63->GetYaxis()->SetLabelSize(0.05);
   hframe_copy63->GetYaxis()->SetTitleSize(0.06);
   hframe_copy63->GetYaxis()->SetTitleOffset(1.25);
   hframe_copy63->GetYaxis()->SetTitleFont(42);
   hframe_copy63->GetZaxis()->SetLabelFont(42);
   hframe_copy63->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy63->GetZaxis()->SetLabelSize(0.05);
   hframe_copy63->GetZaxis()->SetTitleSize(0.06);
   hframe_copy63->GetZaxis()->SetTitleFont(42);
   hframe_copy63->Draw("sameaxis");
   ccwh3l_fakes_13TeV_pt3->Modified();
   ccwh3l_fakes_13TeV_pt3->cd();
   ccwh3l_fakes_13TeV_pt3->SetSelected(ccwh3l_fakes_13TeV_pt3);
}
