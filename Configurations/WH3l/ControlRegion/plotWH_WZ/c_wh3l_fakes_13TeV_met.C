void c_wh3l_fakes_13TeV_met()
{
//=========Macro generated from canvas: ccwh3l_fakes_13TeV_met/cc
//=========  (Sat Jul  2 19:44:32 2016) by ROOT version6.02/13
   TCanvas *ccwh3l_fakes_13TeV_met = new TCanvas("ccwh3l_fakes_13TeV_met", "cc",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   ccwh3l_fakes_13TeV_met->SetHighLightColor(2);
   ccwh3l_fakes_13TeV_met->Range(-40,-0.1585366,210,1.060976);
   ccwh3l_fakes_13TeV_met->SetFillColor(0);
   ccwh3l_fakes_13TeV_met->SetBorderMode(0);
   ccwh3l_fakes_13TeV_met->SetBorderSize(2);
   ccwh3l_fakes_13TeV_met->SetTickx(1);
   ccwh3l_fakes_13TeV_met->SetTicky(1);
   ccwh3l_fakes_13TeV_met->SetLeftMargin(0.16);
   ccwh3l_fakes_13TeV_met->SetRightMargin(0.04);
   ccwh3l_fakes_13TeV_met->SetTopMargin(0.05);
   ccwh3l_fakes_13TeV_met->SetBottomMargin(0.13);
   ccwh3l_fakes_13TeV_met->SetFrameFillStyle(0);
   ccwh3l_fakes_13TeV_met->SetFrameBorderMode(0);
   ccwh3l_fakes_13TeV_met->SetFrameFillStyle(0);
   ccwh3l_fakes_13TeV_met->SetFrameBorderMode(0);
   
   TH1F *hframe37 = new TH1F("hframe37","",1000,0,200);
   hframe37->SetMinimum(0);
   hframe37->SetMaximum(0);
   hframe37->SetDirectory(0);
   hframe37->SetStats(0);
   hframe37->SetLineStyle(0);
   hframe37->SetMarkerStyle(20);
   hframe37->GetXaxis()->SetTitle("pfmet [GeV]");
   hframe37->GetXaxis()->SetNdivisions(506);
   hframe37->GetXaxis()->SetLabelFont(42);
   hframe37->GetXaxis()->SetLabelOffset(0.007);
   hframe37->GetXaxis()->SetLabelSize(0.05);
   hframe37->GetXaxis()->SetTitleSize(0.06);
   hframe37->GetXaxis()->SetTitleOffset(0.9);
   hframe37->GetXaxis()->SetTitleFont(42);
   hframe37->GetYaxis()->SetTitle("Events");
   hframe37->GetYaxis()->SetLabelFont(42);
   hframe37->GetYaxis()->SetLabelOffset(0.007);
   hframe37->GetYaxis()->SetLabelSize(0.05);
   hframe37->GetYaxis()->SetTitleSize(0.06);
   hframe37->GetYaxis()->SetTitleOffset(1.25);
   hframe37->GetYaxis()->SetTitleFont(42);
   hframe37->GetZaxis()->SetLabelFont(42);
   hframe37->GetZaxis()->SetLabelOffset(0.007);
   hframe37->GetZaxis()->SetLabelSize(0.05);
   hframe37->GetZaxis()->SetTitleSize(0.06);
   hframe37->GetZaxis()->SetTitleFont(42);
   hframe37->Draw(" ");
   
   THStack *thsBackground_grouped_wh3l_fakes_13TeV_met = new THStack();
   thsBackground_grouped_wh3l_fakes_13TeV_met->SetName("thsBackground_grouped_wh3l_fakes_13TeV_met");
   thsBackground_grouped_wh3l_fakes_13TeV_met->SetTitle("thsBackground_grouped_wh3l_fakes_13TeV_met");
   
   TH1F *thsBackground_grouped_wh3l_fakes_13TeV_met_stack_9 = new TH1F("thsBackground_grouped_wh3l_fakes_13TeV_met_stack_9","thsBackground_grouped_wh3l_fakes_13TeV_met",40,0,200);
   thsBackground_grouped_wh3l_fakes_13TeV_met_stack_9->SetMinimum(0);
   thsBackground_grouped_wh3l_fakes_13TeV_met_stack_9->SetMaximum(0);
   thsBackground_grouped_wh3l_fakes_13TeV_met_stack_9->SetDirectory(0);
   thsBackground_grouped_wh3l_fakes_13TeV_met_stack_9->SetStats(0);
   thsBackground_grouped_wh3l_fakes_13TeV_met_stack_9->SetLineStyle(0);
   thsBackground_grouped_wh3l_fakes_13TeV_met_stack_9->SetMarkerStyle(20);
   thsBackground_grouped_wh3l_fakes_13TeV_met_stack_9->GetXaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_fakes_13TeV_met_stack_9->GetXaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_fakes_13TeV_met_stack_9->GetXaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_fakes_13TeV_met_stack_9->GetXaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_fakes_13TeV_met_stack_9->GetXaxis()->SetTitleOffset(0.9);
   thsBackground_grouped_wh3l_fakes_13TeV_met_stack_9->GetXaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_fakes_13TeV_met_stack_9->GetYaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_fakes_13TeV_met_stack_9->GetYaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_fakes_13TeV_met_stack_9->GetYaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_fakes_13TeV_met_stack_9->GetYaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_fakes_13TeV_met_stack_9->GetYaxis()->SetTitleOffset(1.25);
   thsBackground_grouped_wh3l_fakes_13TeV_met_stack_9->GetYaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_fakes_13TeV_met_stack_9->GetZaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_fakes_13TeV_met_stack_9->GetZaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_fakes_13TeV_met_stack_9->GetZaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_fakes_13TeV_met_stack_9->GetZaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_fakes_13TeV_met_stack_9->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_fakes_13TeV_met->SetHistogram(thsBackground_grouped_wh3l_fakes_13TeV_met_stack_9);
   
   
   TH1D *new_histo_group_Fake_wh3l_fakes_13TeV_met38 = new TH1D("new_histo_group_Fake_wh3l_fakes_13TeV_met38","histo_Fake",40,0,200);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_fakes_13TeV_met38->SetFillColor(ci);
   new_histo_group_Fake_wh3l_fakes_13TeV_met38->SetFillStyle(3001);

   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_fakes_13TeV_met38->SetLineColor(ci);
   new_histo_group_Fake_wh3l_fakes_13TeV_met38->GetXaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_fakes_13TeV_met38->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_fakes_13TeV_met38->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_fakes_13TeV_met38->GetXaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_fakes_13TeV_met38->GetYaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_fakes_13TeV_met38->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_fakes_13TeV_met38->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_fakes_13TeV_met38->GetYaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_fakes_13TeV_met38->GetZaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_fakes_13TeV_met38->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_fakes_13TeV_met38->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_fakes_13TeV_met38->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_fakes_13TeV_met->Add(new_histo_group_Fake_wh3l_fakes_13TeV_met,"");
   
   TH1D *new_histo_group_WW_wh3l_fakes_13TeV_met39 = new TH1D("new_histo_group_WW_wh3l_fakes_13TeV_met39","histo_WW",40,0,200);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_fakes_13TeV_met39->SetFillColor(ci);
   new_histo_group_WW_wh3l_fakes_13TeV_met39->SetFillStyle(3001);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_fakes_13TeV_met39->SetLineColor(ci);
   new_histo_group_WW_wh3l_fakes_13TeV_met39->GetXaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_fakes_13TeV_met39->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_fakes_13TeV_met39->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_fakes_13TeV_met39->GetXaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_fakes_13TeV_met39->GetYaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_fakes_13TeV_met39->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_fakes_13TeV_met39->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_fakes_13TeV_met39->GetYaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_fakes_13TeV_met39->GetZaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_fakes_13TeV_met39->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_fakes_13TeV_met39->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_fakes_13TeV_met39->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_fakes_13TeV_met->Add(new_histo_group_WW_wh3l_fakes_13TeV_met,"");
   
   TH1D *new_histo_group_Vg_wh3l_fakes_13TeV_met40 = new TH1D("new_histo_group_Vg_wh3l_fakes_13TeV_met40","histo_Vg",40,0,200);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_fakes_13TeV_met40->SetFillColor(ci);
   new_histo_group_Vg_wh3l_fakes_13TeV_met40->SetFillStyle(3001);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_fakes_13TeV_met40->SetLineColor(ci);
   new_histo_group_Vg_wh3l_fakes_13TeV_met40->GetXaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_fakes_13TeV_met40->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_fakes_13TeV_met40->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_fakes_13TeV_met40->GetXaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_fakes_13TeV_met40->GetYaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_fakes_13TeV_met40->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_fakes_13TeV_met40->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_fakes_13TeV_met40->GetYaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_fakes_13TeV_met40->GetZaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_fakes_13TeV_met40->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_fakes_13TeV_met40->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_fakes_13TeV_met40->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_fakes_13TeV_met->Add(new_histo_group_Vg_wh3l_fakes_13TeV_met,"");
   
   TH1D *new_histo_group_ZZ_wh3l_fakes_13TeV_met41 = new TH1D("new_histo_group_ZZ_wh3l_fakes_13TeV_met41","histo_ZZ",40,0,200);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_fakes_13TeV_met41->SetFillColor(ci);
   new_histo_group_ZZ_wh3l_fakes_13TeV_met41->SetFillStyle(3001);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_fakes_13TeV_met41->SetLineColor(ci);
   new_histo_group_ZZ_wh3l_fakes_13TeV_met41->GetXaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_fakes_13TeV_met41->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_fakes_13TeV_met41->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_fakes_13TeV_met41->GetXaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_fakes_13TeV_met41->GetYaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_fakes_13TeV_met41->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_fakes_13TeV_met41->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_fakes_13TeV_met41->GetYaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_fakes_13TeV_met41->GetZaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_fakes_13TeV_met41->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_fakes_13TeV_met41->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_fakes_13TeV_met41->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_fakes_13TeV_met->Add(new_histo_group_ZZ_wh3l_fakes_13TeV_met,"");
   
   TH1D *new_histo_group_WZ_wh3l_fakes_13TeV_met42 = new TH1D("new_histo_group_WZ_wh3l_fakes_13TeV_met42","histo_WZ",40,0,200);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_fakes_13TeV_met42->SetFillColor(ci);
   new_histo_group_WZ_wh3l_fakes_13TeV_met42->SetFillStyle(3001);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_fakes_13TeV_met42->SetLineColor(ci);
   new_histo_group_WZ_wh3l_fakes_13TeV_met42->GetXaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_fakes_13TeV_met42->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_fakes_13TeV_met42->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_fakes_13TeV_met42->GetXaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_fakes_13TeV_met42->GetYaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_fakes_13TeV_met42->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_fakes_13TeV_met42->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_fakes_13TeV_met42->GetYaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_fakes_13TeV_met42->GetZaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_fakes_13TeV_met42->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_fakes_13TeV_met42->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_fakes_13TeV_met42->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_fakes_13TeV_met->Add(new_histo_group_WZ_wh3l_fakes_13TeV_met,"");
   
   TH1D *new_histo_group_Higgs_wh3l_fakes_13TeV_met43 = new TH1D("new_histo_group_Higgs_wh3l_fakes_13TeV_met43","histo_H_htt",40,0,200);
   new_histo_group_Higgs_wh3l_fakes_13TeV_met43->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_fakes_13TeV_met43->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_fakes_13TeV_met43->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_fakes_13TeV_met43->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_fakes_13TeV_met43->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_fakes_13TeV_met43->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_fakes_13TeV_met43->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_fakes_13TeV_met43->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_fakes_13TeV_met43->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_fakes_13TeV_met43->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_fakes_13TeV_met43->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_fakes_13TeV_met43->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_fakes_13TeV_met43->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_fakes_13TeV_met43->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_fakes_13TeV_met43->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_fakes_13TeV_met->Add(new_histo_group_Higgs_wh3l_fakes_13TeV_met,"");
   thsBackground_grouped_wh3l_fakes_13TeV_met->Draw("hist same");
   
   thsSignal_grouped_wh3l_fakes_13TeV_met = new THStack();
   thsSignal_grouped_wh3l_fakes_13TeV_met->SetName("thsSignal_grouped_wh3l_fakes_13TeV_met");
   thsSignal_grouped_wh3l_fakes_13TeV_met->SetTitle("thsSignal_grouped_wh3l_fakes_13TeV_met");
   
   TH1F *thsSignal_grouped_wh3l_fakes_13TeV_met_stack_10 = new TH1F("thsSignal_grouped_wh3l_fakes_13TeV_met_stack_10","thsSignal_grouped_wh3l_fakes_13TeV_met",40,0,200);
   thsSignal_grouped_wh3l_fakes_13TeV_met_stack_10->SetMinimum(0);
   thsSignal_grouped_wh3l_fakes_13TeV_met_stack_10->SetMaximum(0);
   thsSignal_grouped_wh3l_fakes_13TeV_met_stack_10->SetDirectory(0);
   thsSignal_grouped_wh3l_fakes_13TeV_met_stack_10->SetStats(0);
   thsSignal_grouped_wh3l_fakes_13TeV_met_stack_10->SetLineStyle(0);
   thsSignal_grouped_wh3l_fakes_13TeV_met_stack_10->SetMarkerStyle(20);
   thsSignal_grouped_wh3l_fakes_13TeV_met_stack_10->GetXaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_fakes_13TeV_met_stack_10->GetXaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_fakes_13TeV_met_stack_10->GetXaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_fakes_13TeV_met_stack_10->GetXaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_fakes_13TeV_met_stack_10->GetXaxis()->SetTitleOffset(0.9);
   thsSignal_grouped_wh3l_fakes_13TeV_met_stack_10->GetXaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_fakes_13TeV_met_stack_10->GetYaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_fakes_13TeV_met_stack_10->GetYaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_fakes_13TeV_met_stack_10->GetYaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_fakes_13TeV_met_stack_10->GetYaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_fakes_13TeV_met_stack_10->GetYaxis()->SetTitleOffset(1.25);
   thsSignal_grouped_wh3l_fakes_13TeV_met_stack_10->GetYaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_fakes_13TeV_met_stack_10->GetZaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_fakes_13TeV_met_stack_10->GetZaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_fakes_13TeV_met_stack_10->GetZaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_fakes_13TeV_met_stack_10->GetZaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_fakes_13TeV_met_stack_10->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_fakes_13TeV_met->SetHistogram(thsSignal_grouped_wh3l_fakes_13TeV_met_stack_10);
   
   
   TH1D *new_histo_group_Higgs_wh3l_fakes_13TeV_met44 = new TH1D("new_histo_group_Higgs_wh3l_fakes_13TeV_met44","histo_H_htt",40,0,200);
   new_histo_group_Higgs_wh3l_fakes_13TeV_met44->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_fakes_13TeV_met44->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_fakes_13TeV_met44->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_fakes_13TeV_met44->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_fakes_13TeV_met44->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_fakes_13TeV_met44->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_fakes_13TeV_met44->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_fakes_13TeV_met44->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_fakes_13TeV_met44->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_fakes_13TeV_met44->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_fakes_13TeV_met44->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_fakes_13TeV_met44->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_fakes_13TeV_met44->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_fakes_13TeV_met44->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_fakes_13TeV_met44->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_fakes_13TeV_met->Add(new_histo_group_Higgs_wh3l_fakes_13TeV_met,"");
   thsSignal_grouped_wh3l_fakes_13TeV_met->Draw("hist same noclear");
   
   Double_t _fx3009[40] = {
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
   Double_t _fy3009[40] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t _felx3009[40] = {
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
   Double_t _fely3009[40] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t _fehx3009[40] = {
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
   Double_t _fehy3009[40] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(40,_fx3009,_fy3009,_felx3009,_fehx3009,_fely3009,_fehy3009);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(12);
   grae->SetFillStyle(3004);
   grae->SetLineColor(12);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3009 = new TH1F("Graph_Graph3009","",100,0,220);
   Graph_Graph3009->SetMinimum(0);
   Graph_Graph3009->SetMaximum(1.1);
   Graph_Graph3009->SetDirectory(0);
   Graph_Graph3009->SetStats(0);
   Graph_Graph3009->SetLineStyle(0);
   Graph_Graph3009->SetMarkerStyle(20);
   Graph_Graph3009->GetXaxis()->SetLabelFont(42);
   Graph_Graph3009->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3009->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3009->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3009->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3009->GetXaxis()->SetTitleFont(42);
   Graph_Graph3009->GetYaxis()->SetLabelFont(42);
   Graph_Graph3009->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3009->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3009->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3009->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3009->GetYaxis()->SetTitleFont(42);
   Graph_Graph3009->GetZaxis()->SetLabelFont(42);
   Graph_Graph3009->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3009->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3009->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3009->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3009);
   
   grae->Draw("2");
   
   Double_t _fx3010[40] = {
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
   Double_t _fy3010[40] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t _felx3010[40] = {
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
   Double_t _fely3010[40] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t _fehx3010[40] = {
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
   Double_t _fehy3010[40] = {
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
   grae = new TGraphAsymmErrors(40,_fx3010,_fy3010,_felx3010,_fehx3010,_fely3010,_fehy3010);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(1);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3010 = new TH1F("Graph_Graph3010","",100,0,220);
   Graph_Graph3010->SetMinimum(0);
   Graph_Graph3010->SetMaximum(1.262698);
   Graph_Graph3010->SetDirectory(0);
   Graph_Graph3010->SetStats(0);
   Graph_Graph3010->SetLineStyle(0);
   Graph_Graph3010->SetMarkerStyle(20);
   Graph_Graph3010->GetXaxis()->SetLabelFont(42);
   Graph_Graph3010->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3010->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3010->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3010->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3010->GetXaxis()->SetTitleFont(42);
   Graph_Graph3010->GetYaxis()->SetLabelFont(42);
   Graph_Graph3010->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3010->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3010->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3010->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3010->GetYaxis()->SetTitleFont(42);
   Graph_Graph3010->GetZaxis()->SetLabelFont(42);
   Graph_Graph3010->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3010->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3010->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3010->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3010);
   
   grae->Draw("p0");
   
   TLegend *leg = new TLegend(0.2,0.7,0.8,0.9,NULL,"brNDC");
   leg->SetTextFont(62);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("new_histo_group_Fake_wh3l_fakes_13TeV_met","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_fakes_13TeV_met","WW","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_fakes_13TeV_met","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_fakes_13TeV_met","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_fakes_13TeV_met","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_fakes_13TeV_met","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_fakes_13TeV_met","Data","EPL");
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
   entry=leg->AddEntry("new_histo_group_Fake_wh3l_fakes_13TeV_met","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_fakes_13TeV_met","WW","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_fakes_13TeV_met","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_fakes_13TeV_met","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_fakes_13TeV_met","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_fakes_13TeV_met","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_fakes_13TeV_met","Data","EPL");
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
   
   TH1F *hframe_copy45 = new TH1F("hframe_copy45","",1000,0,200);
   hframe_copy45->SetMinimum(0);
   hframe_copy45->SetMaximum(0);
   hframe_copy45->SetDirectory(0);
   hframe_copy45->SetStats(0);
   hframe_copy45->SetLineStyle(0);
   hframe_copy45->SetMarkerStyle(20);
   hframe_copy45->GetXaxis()->SetTitle("pfmet [GeV]");
   hframe_copy45->GetXaxis()->SetNdivisions(506);
   hframe_copy45->GetXaxis()->SetLabelFont(42);
   hframe_copy45->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy45->GetXaxis()->SetLabelSize(0.05);
   hframe_copy45->GetXaxis()->SetTitleSize(0.06);
   hframe_copy45->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy45->GetXaxis()->SetTitleFont(42);
   hframe_copy45->GetYaxis()->SetTitle("Events");
   hframe_copy45->GetYaxis()->SetLabelFont(42);
   hframe_copy45->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy45->GetYaxis()->SetLabelSize(0.05);
   hframe_copy45->GetYaxis()->SetTitleSize(0.06);
   hframe_copy45->GetYaxis()->SetTitleOffset(1.25);
   hframe_copy45->GetYaxis()->SetTitleFont(42);
   hframe_copy45->GetZaxis()->SetLabelFont(42);
   hframe_copy45->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy45->GetZaxis()->SetLabelSize(0.05);
   hframe_copy45->GetZaxis()->SetTitleSize(0.06);
   hframe_copy45->GetZaxis()->SetTitleFont(42);
   hframe_copy45->Draw("sameaxis");
   ccwh3l_fakes_13TeV_met->Modified();
   ccwh3l_fakes_13TeV_met->cd();
   ccwh3l_fakes_13TeV_met->SetSelected(ccwh3l_fakes_13TeV_met);
}
