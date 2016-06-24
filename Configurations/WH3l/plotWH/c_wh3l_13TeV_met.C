void c_wh3l_13TeV_met()
{
//=========Macro generated from canvas: ccwh3l_13TeV_met/cc
//=========  (Fri Jun 24 14:14:50 2016) by ROOT version6.02/13
   TCanvas *ccwh3l_13TeV_met = new TCanvas("ccwh3l_13TeV_met", "cc",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   ccwh3l_13TeV_met->SetHighLightColor(2);
   ccwh3l_13TeV_met->Range(-40,-0.1585366,210,1.060976);
   ccwh3l_13TeV_met->SetFillColor(0);
   ccwh3l_13TeV_met->SetBorderMode(0);
   ccwh3l_13TeV_met->SetBorderSize(2);
   ccwh3l_13TeV_met->SetTickx(1);
   ccwh3l_13TeV_met->SetTicky(1);
   ccwh3l_13TeV_met->SetLeftMargin(0.16);
   ccwh3l_13TeV_met->SetRightMargin(0.04);
   ccwh3l_13TeV_met->SetTopMargin(0.05);
   ccwh3l_13TeV_met->SetBottomMargin(0.13);
   ccwh3l_13TeV_met->SetFrameFillStyle(0);
   ccwh3l_13TeV_met->SetFrameBorderMode(0);
   ccwh3l_13TeV_met->SetFrameFillStyle(0);
   ccwh3l_13TeV_met->SetFrameBorderMode(0);
   
   TH1F *hframe46 = new TH1F("hframe46","",1000,0,200);
   hframe46->SetMinimum(0);
   hframe46->SetMaximum(0);
   hframe46->SetDirectory(0);
   hframe46->SetStats(0);
   hframe46->SetLineStyle(0);
   hframe46->SetMarkerStyle(20);
   hframe46->GetXaxis()->SetTitle("pfmet [GeV]");
   hframe46->GetXaxis()->SetNdivisions(506);
   hframe46->GetXaxis()->SetLabelFont(42);
   hframe46->GetXaxis()->SetLabelOffset(0.007);
   hframe46->GetXaxis()->SetLabelSize(0.05);
   hframe46->GetXaxis()->SetTitleSize(0.06);
   hframe46->GetXaxis()->SetTitleOffset(0.9);
   hframe46->GetXaxis()->SetTitleFont(42);
   hframe46->GetYaxis()->SetTitle("Events");
   hframe46->GetYaxis()->SetLabelFont(42);
   hframe46->GetYaxis()->SetLabelOffset(0.007);
   hframe46->GetYaxis()->SetLabelSize(0.05);
   hframe46->GetYaxis()->SetTitleSize(0.06);
   hframe46->GetYaxis()->SetTitleOffset(1.25);
   hframe46->GetYaxis()->SetTitleFont(42);
   hframe46->GetZaxis()->SetLabelFont(42);
   hframe46->GetZaxis()->SetLabelOffset(0.007);
   hframe46->GetZaxis()->SetLabelSize(0.05);
   hframe46->GetZaxis()->SetTitleSize(0.06);
   hframe46->GetZaxis()->SetTitleFont(42);
   hframe46->Draw(" ");
   
   THStack *thsBackground_grouped_wh3l_13TeV_met = new THStack();
   thsBackground_grouped_wh3l_13TeV_met->SetName("thsBackground_grouped_wh3l_13TeV_met");
   thsBackground_grouped_wh3l_13TeV_met->SetTitle("thsBackground_grouped_wh3l_13TeV_met");
   
   TH1F *thsBackground_grouped_wh3l_13TeV_met_stack_11 = new TH1F("thsBackground_grouped_wh3l_13TeV_met_stack_11","thsBackground_grouped_wh3l_13TeV_met",20,0,200);
   thsBackground_grouped_wh3l_13TeV_met_stack_11->SetMinimum(0);
   thsBackground_grouped_wh3l_13TeV_met_stack_11->SetMaximum(0);
   thsBackground_grouped_wh3l_13TeV_met_stack_11->SetDirectory(0);
   thsBackground_grouped_wh3l_13TeV_met_stack_11->SetStats(0);
   thsBackground_grouped_wh3l_13TeV_met_stack_11->SetLineStyle(0);
   thsBackground_grouped_wh3l_13TeV_met_stack_11->SetMarkerStyle(20);
   thsBackground_grouped_wh3l_13TeV_met_stack_11->GetXaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_13TeV_met_stack_11->GetXaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_13TeV_met_stack_11->GetXaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_13TeV_met_stack_11->GetXaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_13TeV_met_stack_11->GetXaxis()->SetTitleOffset(0.9);
   thsBackground_grouped_wh3l_13TeV_met_stack_11->GetXaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_met_stack_11->GetYaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_13TeV_met_stack_11->GetYaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_13TeV_met_stack_11->GetYaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_13TeV_met_stack_11->GetYaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_13TeV_met_stack_11->GetYaxis()->SetTitleOffset(1.25);
   thsBackground_grouped_wh3l_13TeV_met_stack_11->GetYaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_met_stack_11->GetZaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_13TeV_met_stack_11->GetZaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_13TeV_met_stack_11->GetZaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_13TeV_met_stack_11->GetZaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_13TeV_met_stack_11->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_met->SetHistogram(thsBackground_grouped_wh3l_13TeV_met_stack_11);
   
   
   TH1D *new_histo_group_DY_wh3l_13TeV_met47 = new TH1D("new_histo_group_DY_wh3l_13TeV_met47","histo_DY",20,0,200);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#009900");
   new_histo_group_DY_wh3l_13TeV_met47->SetFillColor(ci);
   new_histo_group_DY_wh3l_13TeV_met47->SetFillStyle(3001);

   ci = TColor::GetColor("#009900");
   new_histo_group_DY_wh3l_13TeV_met47->SetLineColor(ci);
   new_histo_group_DY_wh3l_13TeV_met47->GetXaxis()->SetLabelFont(42);
   new_histo_group_DY_wh3l_13TeV_met47->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_DY_wh3l_13TeV_met47->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_DY_wh3l_13TeV_met47->GetXaxis()->SetTitleFont(42);
   new_histo_group_DY_wh3l_13TeV_met47->GetYaxis()->SetLabelFont(42);
   new_histo_group_DY_wh3l_13TeV_met47->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_DY_wh3l_13TeV_met47->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_DY_wh3l_13TeV_met47->GetYaxis()->SetTitleFont(42);
   new_histo_group_DY_wh3l_13TeV_met47->GetZaxis()->SetLabelFont(42);
   new_histo_group_DY_wh3l_13TeV_met47->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_DY_wh3l_13TeV_met47->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_DY_wh3l_13TeV_met47->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_met->Add(new_histo_group_DY_wh3l_13TeV_met,"");
   
   TH1D *new_histo_group_top_wh3l_13TeV_met48 = new TH1D("new_histo_group_top_wh3l_13TeV_met48","histo_top",20,0,200);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_top_wh3l_13TeV_met48->SetFillColor(ci);
   new_histo_group_top_wh3l_13TeV_met48->SetFillStyle(3001);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_top_wh3l_13TeV_met48->SetLineColor(ci);
   new_histo_group_top_wh3l_13TeV_met48->GetXaxis()->SetLabelFont(42);
   new_histo_group_top_wh3l_13TeV_met48->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_top_wh3l_13TeV_met48->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_top_wh3l_13TeV_met48->GetXaxis()->SetTitleFont(42);
   new_histo_group_top_wh3l_13TeV_met48->GetYaxis()->SetLabelFont(42);
   new_histo_group_top_wh3l_13TeV_met48->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_top_wh3l_13TeV_met48->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_top_wh3l_13TeV_met48->GetYaxis()->SetTitleFont(42);
   new_histo_group_top_wh3l_13TeV_met48->GetZaxis()->SetLabelFont(42);
   new_histo_group_top_wh3l_13TeV_met48->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_top_wh3l_13TeV_met48->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_top_wh3l_13TeV_met48->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_met->Add(new_histo_group_top_wh3l_13TeV_met,"");
   
   TH1D *new_histo_group_WW_wh3l_13TeV_met49 = new TH1D("new_histo_group_WW_wh3l_13TeV_met49","histo_WW",20,0,200);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_13TeV_met49->SetFillColor(ci);
   new_histo_group_WW_wh3l_13TeV_met49->SetFillStyle(3001);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_13TeV_met49->SetLineColor(ci);
   new_histo_group_WW_wh3l_13TeV_met49->GetXaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_13TeV_met49->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_13TeV_met49->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_13TeV_met49->GetXaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_13TeV_met49->GetYaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_13TeV_met49->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_13TeV_met49->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_13TeV_met49->GetYaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_13TeV_met49->GetZaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_13TeV_met49->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_13TeV_met49->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_13TeV_met49->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_met->Add(new_histo_group_WW_wh3l_13TeV_met,"");
   
   TH1D *new_histo_group_VVV_wh3l_13TeV_met50 = new TH1D("new_histo_group_VVV_wh3l_13TeV_met50","histo_VVV",20,0,200);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_13TeV_met50->SetFillColor(ci);
   new_histo_group_VVV_wh3l_13TeV_met50->SetFillStyle(3001);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_13TeV_met50->SetLineColor(ci);
   new_histo_group_VVV_wh3l_13TeV_met50->GetXaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_13TeV_met50->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_13TeV_met50->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_13TeV_met50->GetXaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_13TeV_met50->GetYaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_13TeV_met50->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_13TeV_met50->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_13TeV_met50->GetYaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_13TeV_met50->GetZaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_13TeV_met50->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_13TeV_met50->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_13TeV_met50->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_met->Add(new_histo_group_VVV_wh3l_13TeV_met,"");
   
   TH1D *new_histo_group_VZ_wh3l_13TeV_met51 = new TH1D("new_histo_group_VZ_wh3l_13TeV_met51","histo_VZ",20,0,200);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_VZ_wh3l_13TeV_met51->SetFillColor(ci);
   new_histo_group_VZ_wh3l_13TeV_met51->SetFillStyle(3001);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_VZ_wh3l_13TeV_met51->SetLineColor(ci);
   new_histo_group_VZ_wh3l_13TeV_met51->GetXaxis()->SetLabelFont(42);
   new_histo_group_VZ_wh3l_13TeV_met51->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_VZ_wh3l_13TeV_met51->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_VZ_wh3l_13TeV_met51->GetXaxis()->SetTitleFont(42);
   new_histo_group_VZ_wh3l_13TeV_met51->GetYaxis()->SetLabelFont(42);
   new_histo_group_VZ_wh3l_13TeV_met51->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_VZ_wh3l_13TeV_met51->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_VZ_wh3l_13TeV_met51->GetYaxis()->SetTitleFont(42);
   new_histo_group_VZ_wh3l_13TeV_met51->GetZaxis()->SetLabelFont(42);
   new_histo_group_VZ_wh3l_13TeV_met51->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_VZ_wh3l_13TeV_met51->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_VZ_wh3l_13TeV_met51->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_met->Add(new_histo_group_VZ_wh3l_13TeV_met,"");
   
   TH1D *new_histo_group_Higgs_wh3l_13TeV_met52 = new TH1D("new_histo_group_Higgs_wh3l_13TeV_met52","histo_H_htt",20,0,200);
   new_histo_group_Higgs_wh3l_13TeV_met52->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_13TeV_met52->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_13TeV_met52->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_13TeV_met52->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_13TeV_met52->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_met52->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_met52->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_13TeV_met52->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_13TeV_met52->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_met52->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_met52->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_13TeV_met52->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_13TeV_met52->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_met52->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_met52->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_met->Add(new_histo_group_Higgs_wh3l_13TeV_met,"");
   thsBackground_grouped_wh3l_13TeV_met->Draw("hist same");
   
   thsSignal_grouped_wh3l_13TeV_met = new THStack();
   thsSignal_grouped_wh3l_13TeV_met->SetName("thsSignal_grouped_wh3l_13TeV_met");
   thsSignal_grouped_wh3l_13TeV_met->SetTitle("thsSignal_grouped_wh3l_13TeV_met");
   
   TH1F *thsSignal_grouped_wh3l_13TeV_met_stack_12 = new TH1F("thsSignal_grouped_wh3l_13TeV_met_stack_12","thsSignal_grouped_wh3l_13TeV_met",20,0,200);
   thsSignal_grouped_wh3l_13TeV_met_stack_12->SetMinimum(0);
   thsSignal_grouped_wh3l_13TeV_met_stack_12->SetMaximum(0);
   thsSignal_grouped_wh3l_13TeV_met_stack_12->SetDirectory(0);
   thsSignal_grouped_wh3l_13TeV_met_stack_12->SetStats(0);
   thsSignal_grouped_wh3l_13TeV_met_stack_12->SetLineStyle(0);
   thsSignal_grouped_wh3l_13TeV_met_stack_12->SetMarkerStyle(20);
   thsSignal_grouped_wh3l_13TeV_met_stack_12->GetXaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_13TeV_met_stack_12->GetXaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_13TeV_met_stack_12->GetXaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_13TeV_met_stack_12->GetXaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_13TeV_met_stack_12->GetXaxis()->SetTitleOffset(0.9);
   thsSignal_grouped_wh3l_13TeV_met_stack_12->GetXaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_13TeV_met_stack_12->GetYaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_13TeV_met_stack_12->GetYaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_13TeV_met_stack_12->GetYaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_13TeV_met_stack_12->GetYaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_13TeV_met_stack_12->GetYaxis()->SetTitleOffset(1.25);
   thsSignal_grouped_wh3l_13TeV_met_stack_12->GetYaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_13TeV_met_stack_12->GetZaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_13TeV_met_stack_12->GetZaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_13TeV_met_stack_12->GetZaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_13TeV_met_stack_12->GetZaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_13TeV_met_stack_12->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_13TeV_met->SetHistogram(thsSignal_grouped_wh3l_13TeV_met_stack_12);
   
   
   TH1D *new_histo_group_Higgs_wh3l_13TeV_met53 = new TH1D("new_histo_group_Higgs_wh3l_13TeV_met53","histo_H_htt",20,0,200);
   new_histo_group_Higgs_wh3l_13TeV_met53->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_13TeV_met53->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_13TeV_met53->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_13TeV_met53->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_13TeV_met53->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_met53->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_met53->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_13TeV_met53->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_13TeV_met53->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_met53->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_met53->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_13TeV_met53->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_13TeV_met53->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_met53->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_met53->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_13TeV_met->Add(new_histo_group_Higgs_wh3l_13TeV_met,"");
   thsSignal_grouped_wh3l_13TeV_met->Draw("hist same noclear");
   
   Double_t _fx3006[20] = {
   5,
   15,
   25,
   35,
   45,
   55,
   65,
   75,
   85,
   95,
   105,
   115,
   125,
   135,
   145,
   155,
   165,
   175,
   185,
   195};
   Double_t _fy3006[20] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t _felx3006[20] = {
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5};
   Double_t _fely3006[20] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t _fehx3006[20] = {
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5};
   Double_t _fehy3006[20] = {
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
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(20,_fx3006,_fy3006,_felx3006,_fehx3006,_fely3006,_fehy3006);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(1);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3006 = new TH1F("Graph_Graph3006","",100,0,220);
   Graph_Graph3006->SetMinimum(0);
   Graph_Graph3006->SetMaximum(1.262698);
   Graph_Graph3006->SetDirectory(0);
   Graph_Graph3006->SetStats(0);
   Graph_Graph3006->SetLineStyle(0);
   Graph_Graph3006->SetMarkerStyle(20);
   Graph_Graph3006->GetXaxis()->SetLabelFont(42);
   Graph_Graph3006->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3006->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3006->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3006->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3006->GetXaxis()->SetTitleFont(42);
   Graph_Graph3006->GetYaxis()->SetLabelFont(42);
   Graph_Graph3006->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3006->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3006->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3006->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3006->GetYaxis()->SetTitleFont(42);
   Graph_Graph3006->GetZaxis()->SetLabelFont(42);
   Graph_Graph3006->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3006->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3006->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3006->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3006);
   
   grae->Draw("p0");
   
   TLegend *leg = new TLegend(0.2,0.55,0.8,0.88,NULL,"brNDC");
   leg->SetTextFont(62);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("new_histo_group_DY_wh3l_13TeV_met","DY","F");

   ci = TColor::GetColor("#009900");
   entry->SetFillColor(ci);
   entry->SetFillStyle(3001);

   ci = TColor::GetColor("#009900");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_group_top_wh3l_13TeV_met","tW and t#bart","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_13TeV_met","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_13TeV_met","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_VZ_wh3l_13TeV_met","VZ/#gamma*/#gamma","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_13TeV_met","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_13TeV_met","Data","EPL");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
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
   entry=leg->AddEntry("new_histo_group_DY_wh3l_13TeV_met","DY","F");

   ci = TColor::GetColor("#009900");
   entry->SetFillColor(ci);
   entry->SetFillStyle(3001);

   ci = TColor::GetColor("#009900");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_group_top_wh3l_13TeV_met","tW and t#bart","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_13TeV_met","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_13TeV_met","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_VZ_wh3l_13TeV_met","VZ/#gamma*/#gamma","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_13TeV_met","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_13TeV_met","Data","EPL");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   leg->Draw();
   
   TH1F *hframe_copy54 = new TH1F("hframe_copy54","",1000,0,200);
   hframe_copy54->SetMinimum(0);
   hframe_copy54->SetMaximum(0);
   hframe_copy54->SetDirectory(0);
   hframe_copy54->SetStats(0);
   hframe_copy54->SetLineStyle(0);
   hframe_copy54->SetMarkerStyle(20);
   hframe_copy54->GetXaxis()->SetTitle("pfmet [GeV]");
   hframe_copy54->GetXaxis()->SetNdivisions(506);
   hframe_copy54->GetXaxis()->SetLabelFont(42);
   hframe_copy54->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy54->GetXaxis()->SetLabelSize(0.05);
   hframe_copy54->GetXaxis()->SetTitleSize(0.06);
   hframe_copy54->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy54->GetXaxis()->SetTitleFont(42);
   hframe_copy54->GetYaxis()->SetTitle("Events");
   hframe_copy54->GetYaxis()->SetLabelFont(42);
   hframe_copy54->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy54->GetYaxis()->SetLabelSize(0.05);
   hframe_copy54->GetYaxis()->SetTitleSize(0.06);
   hframe_copy54->GetYaxis()->SetTitleOffset(1.25);
   hframe_copy54->GetYaxis()->SetTitleFont(42);
   hframe_copy54->GetZaxis()->SetLabelFont(42);
   hframe_copy54->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy54->GetZaxis()->SetLabelSize(0.05);
   hframe_copy54->GetZaxis()->SetTitleSize(0.06);
   hframe_copy54->GetZaxis()->SetTitleFont(42);
   hframe_copy54->Draw("sameaxis");
   ccwh3l_13TeV_met->Modified();
   ccwh3l_13TeV_met->cd();
   ccwh3l_13TeV_met->SetSelected(ccwh3l_13TeV_met);
}
