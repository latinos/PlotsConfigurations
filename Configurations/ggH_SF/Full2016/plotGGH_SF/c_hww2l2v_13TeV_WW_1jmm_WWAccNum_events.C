void c_hww2l2v_13TeV_WW_1jmm_WWAccNum_events()
{
//=========Macro generated from canvas: cchww2l2v_13TeV_WW_1jmm_WWAccNum_events/cc
//=========  (Tue Mar 21 11:46:21 2017) by ROOT version6.02/13
   TCanvas *cchww2l2v_13TeV_WW_1jmm_WWAccNum_events = new TCanvas("cchww2l2v_13TeV_WW_1jmm_WWAccNum_events", "cc",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   cchww2l2v_13TeV_WW_1jmm_WWAccNum_events->SetHighLightColor(2);
   cchww2l2v_13TeV_WW_1jmm_WWAccNum_events->Range(-0.4,-3413.413,2.1,22843.61);
   cchww2l2v_13TeV_WW_1jmm_WWAccNum_events->SetFillColor(0);
   cchww2l2v_13TeV_WW_1jmm_WWAccNum_events->SetBorderMode(0);
   cchww2l2v_13TeV_WW_1jmm_WWAccNum_events->SetBorderSize(2);
   cchww2l2v_13TeV_WW_1jmm_WWAccNum_events->SetTickx(1);
   cchww2l2v_13TeV_WW_1jmm_WWAccNum_events->SetTicky(1);
   cchww2l2v_13TeV_WW_1jmm_WWAccNum_events->SetLeftMargin(0.16);
   cchww2l2v_13TeV_WW_1jmm_WWAccNum_events->SetRightMargin(0.04);
   cchww2l2v_13TeV_WW_1jmm_WWAccNum_events->SetTopMargin(0.05);
   cchww2l2v_13TeV_WW_1jmm_WWAccNum_events->SetBottomMargin(0.13);
   cchww2l2v_13TeV_WW_1jmm_WWAccNum_events->SetFrameFillStyle(0);
   cchww2l2v_13TeV_WW_1jmm_WWAccNum_events->SetFrameBorderMode(0);
   cchww2l2v_13TeV_WW_1jmm_WWAccNum_events->SetFrameFillStyle(0);
   cchww2l2v_13TeV_WW_1jmm_WWAccNum_events->SetFrameBorderMode(0);
   
   TH1F *hframe91 = new TH1F("hframe91","",1000,0,2);
   hframe91->SetMinimum(0);
   hframe91->SetMaximum(21530.76);
   hframe91->SetDirectory(0);
   hframe91->SetStats(0);
   hframe91->SetLineStyle(0);
   hframe91->SetMarkerStyle(20);
   hframe91->GetXaxis()->SetTitle("events");
   hframe91->GetXaxis()->SetNdivisions(506);
   hframe91->GetXaxis()->SetLabelFont(42);
   hframe91->GetXaxis()->SetLabelOffset(0.007);
   hframe91->GetXaxis()->SetLabelSize(0.05);
   hframe91->GetXaxis()->SetTitleSize(0.06);
   hframe91->GetXaxis()->SetTitleOffset(0.9);
   hframe91->GetXaxis()->SetTitleFont(42);
   hframe91->GetYaxis()->SetTitle("Events");
   hframe91->GetYaxis()->SetLabelFont(42);
   hframe91->GetYaxis()->SetLabelOffset(0.007);
   hframe91->GetYaxis()->SetLabelSize(0.05);
   hframe91->GetYaxis()->SetTitleSize(0.06);
   hframe91->GetYaxis()->SetTitleOffset(1.25);
   hframe91->GetYaxis()->SetTitleFont(42);
   hframe91->GetZaxis()->SetLabelFont(42);
   hframe91->GetZaxis()->SetLabelOffset(0.007);
   hframe91->GetZaxis()->SetLabelSize(0.05);
   hframe91->GetZaxis()->SetTitleSize(0.06);
   hframe91->GetZaxis()->SetTitleFont(42);
   hframe91->Draw(" ");
   
   THStack *thsBackground_grouped_hww2l2v_13TeV_WW_1jmm_WWAccNum_events = new THStack();
   thsBackground_grouped_hww2l2v_13TeV_WW_1jmm_WWAccNum_events->SetName("thsBackground_grouped_hww2l2v_13TeV_WW_1jmm_WWAccNum_events");
   thsBackground_grouped_hww2l2v_13TeV_WW_1jmm_WWAccNum_events->SetTitle("thsBackground_grouped_hww2l2v_13TeV_WW_1jmm_WWAccNum_events");
   
   TH1F *thsBackground_grouped_hww2l2v_13TeV_WW_1jmm_WWAccNum_events_stack_21 = new TH1F("thsBackground_grouped_hww2l2v_13TeV_WW_1jmm_WWAccNum_events_stack_21","thsBackground_grouped_hww2l2v_13TeV_WW_1jmm_WWAccNum_events",1,0,2);
   thsBackground_grouped_hww2l2v_13TeV_WW_1jmm_WWAccNum_events_stack_21->SetMinimum(0);
   thsBackground_grouped_hww2l2v_13TeV_WW_1jmm_WWAccNum_events_stack_21->SetMaximum(4160.444);
   thsBackground_grouped_hww2l2v_13TeV_WW_1jmm_WWAccNum_events_stack_21->SetDirectory(0);
   thsBackground_grouped_hww2l2v_13TeV_WW_1jmm_WWAccNum_events_stack_21->SetStats(0);
   thsBackground_grouped_hww2l2v_13TeV_WW_1jmm_WWAccNum_events_stack_21->SetLineStyle(0);
   thsBackground_grouped_hww2l2v_13TeV_WW_1jmm_WWAccNum_events_stack_21->SetMarkerStyle(20);
   thsBackground_grouped_hww2l2v_13TeV_WW_1jmm_WWAccNum_events_stack_21->GetXaxis()->SetLabelFont(42);
   thsBackground_grouped_hww2l2v_13TeV_WW_1jmm_WWAccNum_events_stack_21->GetXaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_hww2l2v_13TeV_WW_1jmm_WWAccNum_events_stack_21->GetXaxis()->SetLabelSize(0.05);
   thsBackground_grouped_hww2l2v_13TeV_WW_1jmm_WWAccNum_events_stack_21->GetXaxis()->SetTitleSize(0.06);
   thsBackground_grouped_hww2l2v_13TeV_WW_1jmm_WWAccNum_events_stack_21->GetXaxis()->SetTitleOffset(0.9);
   thsBackground_grouped_hww2l2v_13TeV_WW_1jmm_WWAccNum_events_stack_21->GetXaxis()->SetTitleFont(42);
   thsBackground_grouped_hww2l2v_13TeV_WW_1jmm_WWAccNum_events_stack_21->GetYaxis()->SetLabelFont(42);
   thsBackground_grouped_hww2l2v_13TeV_WW_1jmm_WWAccNum_events_stack_21->GetYaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_hww2l2v_13TeV_WW_1jmm_WWAccNum_events_stack_21->GetYaxis()->SetLabelSize(0.05);
   thsBackground_grouped_hww2l2v_13TeV_WW_1jmm_WWAccNum_events_stack_21->GetYaxis()->SetTitleSize(0.06);
   thsBackground_grouped_hww2l2v_13TeV_WW_1jmm_WWAccNum_events_stack_21->GetYaxis()->SetTitleOffset(1.25);
   thsBackground_grouped_hww2l2v_13TeV_WW_1jmm_WWAccNum_events_stack_21->GetYaxis()->SetTitleFont(42);
   thsBackground_grouped_hww2l2v_13TeV_WW_1jmm_WWAccNum_events_stack_21->GetZaxis()->SetLabelFont(42);
   thsBackground_grouped_hww2l2v_13TeV_WW_1jmm_WWAccNum_events_stack_21->GetZaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_hww2l2v_13TeV_WW_1jmm_WWAccNum_events_stack_21->GetZaxis()->SetLabelSize(0.05);
   thsBackground_grouped_hww2l2v_13TeV_WW_1jmm_WWAccNum_events_stack_21->GetZaxis()->SetTitleSize(0.06);
   thsBackground_grouped_hww2l2v_13TeV_WW_1jmm_WWAccNum_events_stack_21->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_hww2l2v_13TeV_WW_1jmm_WWAccNum_events->SetHistogram(thsBackground_grouped_hww2l2v_13TeV_WW_1jmm_WWAccNum_events_stack_21);
   
   
   TH1D *new_histo_group_DY_hww2l2v_13TeV_WW_1jmm_WWAccNum_events92 = new TH1D("new_histo_group_DY_hww2l2v_13TeV_WW_1jmm_WWAccNum_events92","histo_DY",1,0,2);
   new_histo_group_DY_hww2l2v_13TeV_WW_1jmm_WWAccNum_events92->SetBinContent(1,1491.254);
   new_histo_group_DY_hww2l2v_13TeV_WW_1jmm_WWAccNum_events92->SetBinError(1,105.5484);
   new_histo_group_DY_hww2l2v_13TeV_WW_1jmm_WWAccNum_events92->SetEntries(1751);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#009900");
   new_histo_group_DY_hww2l2v_13TeV_WW_1jmm_WWAccNum_events92->SetFillColor(ci);
   new_histo_group_DY_hww2l2v_13TeV_WW_1jmm_WWAccNum_events92->SetFillStyle(3001);

   ci = TColor::GetColor("#009900");
   new_histo_group_DY_hww2l2v_13TeV_WW_1jmm_WWAccNum_events92->SetLineColor(ci);
   new_histo_group_DY_hww2l2v_13TeV_WW_1jmm_WWAccNum_events92->GetXaxis()->SetLabelFont(42);
   new_histo_group_DY_hww2l2v_13TeV_WW_1jmm_WWAccNum_events92->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_DY_hww2l2v_13TeV_WW_1jmm_WWAccNum_events92->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_DY_hww2l2v_13TeV_WW_1jmm_WWAccNum_events92->GetXaxis()->SetTitleFont(42);
   new_histo_group_DY_hww2l2v_13TeV_WW_1jmm_WWAccNum_events92->GetYaxis()->SetLabelFont(42);
   new_histo_group_DY_hww2l2v_13TeV_WW_1jmm_WWAccNum_events92->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_DY_hww2l2v_13TeV_WW_1jmm_WWAccNum_events92->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_DY_hww2l2v_13TeV_WW_1jmm_WWAccNum_events92->GetYaxis()->SetTitleFont(42);
   new_histo_group_DY_hww2l2v_13TeV_WW_1jmm_WWAccNum_events92->GetZaxis()->SetLabelFont(42);
   new_histo_group_DY_hww2l2v_13TeV_WW_1jmm_WWAccNum_events92->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_DY_hww2l2v_13TeV_WW_1jmm_WWAccNum_events92->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_DY_hww2l2v_13TeV_WW_1jmm_WWAccNum_events92->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_hww2l2v_13TeV_WW_1jmm_WWAccNum_events->Add(new_histo_group_DY_hww2l2v_13TeV_WW_1jmm_WWAccNum_events,"");
   
   TH1D *new_histo_group_top_hww2l2v_13TeV_WW_1jmm_WWAccNum_events93 = new TH1D("new_histo_group_top_hww2l2v_13TeV_WW_1jmm_WWAccNum_events93","histo_top",1,0,2);
   new_histo_group_top_hww2l2v_13TeV_WW_1jmm_WWAccNum_events93->SetBinContent(1,1328.595);
   new_histo_group_top_hww2l2v_13TeV_WW_1jmm_WWAccNum_events93->SetBinError(1,7.875711);
   new_histo_group_top_hww2l2v_13TeV_WW_1jmm_WWAccNum_events93->SetEntries(31893);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_top_hww2l2v_13TeV_WW_1jmm_WWAccNum_events93->SetFillColor(ci);
   new_histo_group_top_hww2l2v_13TeV_WW_1jmm_WWAccNum_events93->SetFillStyle(3001);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_top_hww2l2v_13TeV_WW_1jmm_WWAccNum_events93->SetLineColor(ci);
   new_histo_group_top_hww2l2v_13TeV_WW_1jmm_WWAccNum_events93->GetXaxis()->SetLabelFont(42);
   new_histo_group_top_hww2l2v_13TeV_WW_1jmm_WWAccNum_events93->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_top_hww2l2v_13TeV_WW_1jmm_WWAccNum_events93->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_top_hww2l2v_13TeV_WW_1jmm_WWAccNum_events93->GetXaxis()->SetTitleFont(42);
   new_histo_group_top_hww2l2v_13TeV_WW_1jmm_WWAccNum_events93->GetYaxis()->SetLabelFont(42);
   new_histo_group_top_hww2l2v_13TeV_WW_1jmm_WWAccNum_events93->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_top_hww2l2v_13TeV_WW_1jmm_WWAccNum_events93->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_top_hww2l2v_13TeV_WW_1jmm_WWAccNum_events93->GetYaxis()->SetTitleFont(42);
   new_histo_group_top_hww2l2v_13TeV_WW_1jmm_WWAccNum_events93->GetZaxis()->SetLabelFont(42);
   new_histo_group_top_hww2l2v_13TeV_WW_1jmm_WWAccNum_events93->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_top_hww2l2v_13TeV_WW_1jmm_WWAccNum_events93->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_top_hww2l2v_13TeV_WW_1jmm_WWAccNum_events93->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_hww2l2v_13TeV_WW_1jmm_WWAccNum_events->Add(new_histo_group_top_hww2l2v_13TeV_WW_1jmm_WWAccNum_events,"");
   
   TH1D *new_histo_group_WW_hww2l2v_13TeV_WW_1jmm_WWAccNum_events94 = new TH1D("new_histo_group_WW_hww2l2v_13TeV_WW_1jmm_WWAccNum_events94","histo_WW",1,0,2);
   new_histo_group_WW_hww2l2v_13TeV_WW_1jmm_WWAccNum_events94->SetBinContent(1,1046.593);
   new_histo_group_WW_hww2l2v_13TeV_WW_1jmm_WWAccNum_events94->SetBinError(1,15.07766);
   new_histo_group_WW_hww2l2v_13TeV_WW_1jmm_WWAccNum_events94->SetEntries(6592);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_hww2l2v_13TeV_WW_1jmm_WWAccNum_events94->SetFillColor(ci);
   new_histo_group_WW_hww2l2v_13TeV_WW_1jmm_WWAccNum_events94->SetFillStyle(3001);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_hww2l2v_13TeV_WW_1jmm_WWAccNum_events94->SetLineColor(ci);
   new_histo_group_WW_hww2l2v_13TeV_WW_1jmm_WWAccNum_events94->GetXaxis()->SetLabelFont(42);
   new_histo_group_WW_hww2l2v_13TeV_WW_1jmm_WWAccNum_events94->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WW_hww2l2v_13TeV_WW_1jmm_WWAccNum_events94->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WW_hww2l2v_13TeV_WW_1jmm_WWAccNum_events94->GetXaxis()->SetTitleFont(42);
   new_histo_group_WW_hww2l2v_13TeV_WW_1jmm_WWAccNum_events94->GetYaxis()->SetLabelFont(42);
   new_histo_group_WW_hww2l2v_13TeV_WW_1jmm_WWAccNum_events94->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WW_hww2l2v_13TeV_WW_1jmm_WWAccNum_events94->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WW_hww2l2v_13TeV_WW_1jmm_WWAccNum_events94->GetYaxis()->SetTitleFont(42);
   new_histo_group_WW_hww2l2v_13TeV_WW_1jmm_WWAccNum_events94->GetZaxis()->SetLabelFont(42);
   new_histo_group_WW_hww2l2v_13TeV_WW_1jmm_WWAccNum_events94->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WW_hww2l2v_13TeV_WW_1jmm_WWAccNum_events94->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WW_hww2l2v_13TeV_WW_1jmm_WWAccNum_events94->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_hww2l2v_13TeV_WW_1jmm_WWAccNum_events->Add(new_histo_group_WW_hww2l2v_13TeV_WW_1jmm_WWAccNum_events,"");
   
   TH1D *new_histo_group_VVV_hww2l2v_13TeV_WW_1jmm_WWAccNum_events95 = new TH1D("new_histo_group_VVV_hww2l2v_13TeV_WW_1jmm_WWAccNum_events95","histo_VVV",1,0,2);
   new_histo_group_VVV_hww2l2v_13TeV_WW_1jmm_WWAccNum_events95->SetBinContent(1,5.911447);
   new_histo_group_VVV_hww2l2v_13TeV_WW_1jmm_WWAccNum_events95->SetBinError(1,0.4636245);
   new_histo_group_VVV_hww2l2v_13TeV_WW_1jmm_WWAccNum_events95->SetEntries(263);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_hww2l2v_13TeV_WW_1jmm_WWAccNum_events95->SetFillColor(ci);
   new_histo_group_VVV_hww2l2v_13TeV_WW_1jmm_WWAccNum_events95->SetFillStyle(3001);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_hww2l2v_13TeV_WW_1jmm_WWAccNum_events95->SetLineColor(ci);
   new_histo_group_VVV_hww2l2v_13TeV_WW_1jmm_WWAccNum_events95->GetXaxis()->SetLabelFont(42);
   new_histo_group_VVV_hww2l2v_13TeV_WW_1jmm_WWAccNum_events95->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_hww2l2v_13TeV_WW_1jmm_WWAccNum_events95->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_hww2l2v_13TeV_WW_1jmm_WWAccNum_events95->GetXaxis()->SetTitleFont(42);
   new_histo_group_VVV_hww2l2v_13TeV_WW_1jmm_WWAccNum_events95->GetYaxis()->SetLabelFont(42);
   new_histo_group_VVV_hww2l2v_13TeV_WW_1jmm_WWAccNum_events95->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_hww2l2v_13TeV_WW_1jmm_WWAccNum_events95->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_hww2l2v_13TeV_WW_1jmm_WWAccNum_events95->GetYaxis()->SetTitleFont(42);
   new_histo_group_VVV_hww2l2v_13TeV_WW_1jmm_WWAccNum_events95->GetZaxis()->SetLabelFont(42);
   new_histo_group_VVV_hww2l2v_13TeV_WW_1jmm_WWAccNum_events95->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_hww2l2v_13TeV_WW_1jmm_WWAccNum_events95->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_hww2l2v_13TeV_WW_1jmm_WWAccNum_events95->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_hww2l2v_13TeV_WW_1jmm_WWAccNum_events->Add(new_histo_group_VVV_hww2l2v_13TeV_WW_1jmm_WWAccNum_events,"");
   
   TH1D *new_histo_group_VZ_hww2l2v_13TeV_WW_1jmm_WWAccNum_events96 = new TH1D("new_histo_group_VZ_hww2l2v_13TeV_WW_1jmm_WWAccNum_events96","histo_Vg",1,0,2);
   new_histo_group_VZ_hww2l2v_13TeV_WW_1jmm_WWAccNum_events96->SetBinContent(1,87.97066);
   new_histo_group_VZ_hww2l2v_13TeV_WW_1jmm_WWAccNum_events96->SetBinError(1,2.336745);
   new_histo_group_VZ_hww2l2v_13TeV_WW_1jmm_WWAccNum_events96->SetEntries(10211);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_VZ_hww2l2v_13TeV_WW_1jmm_WWAccNum_events96->SetFillColor(ci);
   new_histo_group_VZ_hww2l2v_13TeV_WW_1jmm_WWAccNum_events96->SetFillStyle(3001);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_VZ_hww2l2v_13TeV_WW_1jmm_WWAccNum_events96->SetLineColor(ci);
   new_histo_group_VZ_hww2l2v_13TeV_WW_1jmm_WWAccNum_events96->GetXaxis()->SetLabelFont(42);
   new_histo_group_VZ_hww2l2v_13TeV_WW_1jmm_WWAccNum_events96->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_VZ_hww2l2v_13TeV_WW_1jmm_WWAccNum_events96->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_VZ_hww2l2v_13TeV_WW_1jmm_WWAccNum_events96->GetXaxis()->SetTitleFont(42);
   new_histo_group_VZ_hww2l2v_13TeV_WW_1jmm_WWAccNum_events96->GetYaxis()->SetLabelFont(42);
   new_histo_group_VZ_hww2l2v_13TeV_WW_1jmm_WWAccNum_events96->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_VZ_hww2l2v_13TeV_WW_1jmm_WWAccNum_events96->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_VZ_hww2l2v_13TeV_WW_1jmm_WWAccNum_events96->GetYaxis()->SetTitleFont(42);
   new_histo_group_VZ_hww2l2v_13TeV_WW_1jmm_WWAccNum_events96->GetZaxis()->SetLabelFont(42);
   new_histo_group_VZ_hww2l2v_13TeV_WW_1jmm_WWAccNum_events96->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_VZ_hww2l2v_13TeV_WW_1jmm_WWAccNum_events96->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_VZ_hww2l2v_13TeV_WW_1jmm_WWAccNum_events96->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_hww2l2v_13TeV_WW_1jmm_WWAccNum_events->Add(new_histo_group_VZ_hww2l2v_13TeV_WW_1jmm_WWAccNum_events,"");
   
   TH1D *new_histo_group_Higgs_hww2l2v_13TeV_WW_1jmm_WWAccNum_events97 = new TH1D("new_histo_group_Higgs_hww2l2v_13TeV_WW_1jmm_WWAccNum_events97","histo_H_htt",1,0,2);
   new_histo_group_Higgs_hww2l2v_13TeV_WW_1jmm_WWAccNum_events97->SetBinContent(1,2.00347);
   new_histo_group_Higgs_hww2l2v_13TeV_WW_1jmm_WWAccNum_events97->SetBinError(1,0.2120842);
   new_histo_group_Higgs_hww2l2v_13TeV_WW_1jmm_WWAccNum_events97->SetEntries(127);
   new_histo_group_Higgs_hww2l2v_13TeV_WW_1jmm_WWAccNum_events97->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_hww2l2v_13TeV_WW_1jmm_WWAccNum_events97->SetLineColor(ci);
   new_histo_group_Higgs_hww2l2v_13TeV_WW_1jmm_WWAccNum_events97->SetLineWidth(2);
   new_histo_group_Higgs_hww2l2v_13TeV_WW_1jmm_WWAccNum_events97->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_hww2l2v_13TeV_WW_1jmm_WWAccNum_events97->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_hww2l2v_13TeV_WW_1jmm_WWAccNum_events97->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_hww2l2v_13TeV_WW_1jmm_WWAccNum_events97->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_hww2l2v_13TeV_WW_1jmm_WWAccNum_events97->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_hww2l2v_13TeV_WW_1jmm_WWAccNum_events97->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_hww2l2v_13TeV_WW_1jmm_WWAccNum_events97->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_hww2l2v_13TeV_WW_1jmm_WWAccNum_events97->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_hww2l2v_13TeV_WW_1jmm_WWAccNum_events97->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_hww2l2v_13TeV_WW_1jmm_WWAccNum_events97->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_hww2l2v_13TeV_WW_1jmm_WWAccNum_events97->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_hww2l2v_13TeV_WW_1jmm_WWAccNum_events97->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_hww2l2v_13TeV_WW_1jmm_WWAccNum_events->Add(new_histo_group_Higgs_hww2l2v_13TeV_WW_1jmm_WWAccNum_events,"");
   thsBackground_grouped_hww2l2v_13TeV_WW_1jmm_WWAccNum_events->Draw("hist same");
   
   thsSignal_grouped_hww2l2v_13TeV_WW_1jmm_WWAccNum_events = new THStack();
   thsSignal_grouped_hww2l2v_13TeV_WW_1jmm_WWAccNum_events->SetName("thsSignal_grouped_hww2l2v_13TeV_WW_1jmm_WWAccNum_events");
   thsSignal_grouped_hww2l2v_13TeV_WW_1jmm_WWAccNum_events->SetTitle("thsSignal_grouped_hww2l2v_13TeV_WW_1jmm_WWAccNum_events");
   
   TH1F *thsSignal_grouped_hww2l2v_13TeV_WW_1jmm_WWAccNum_events_stack_22 = new TH1F("thsSignal_grouped_hww2l2v_13TeV_WW_1jmm_WWAccNum_events_stack_22","thsSignal_grouped_hww2l2v_13TeV_WW_1jmm_WWAccNum_events",1,0,2);
   thsSignal_grouped_hww2l2v_13TeV_WW_1jmm_WWAccNum_events_stack_22->SetMinimum(0);
   thsSignal_grouped_hww2l2v_13TeV_WW_1jmm_WWAccNum_events_stack_22->SetMaximum(2.326332);
   thsSignal_grouped_hww2l2v_13TeV_WW_1jmm_WWAccNum_events_stack_22->SetDirectory(0);
   thsSignal_grouped_hww2l2v_13TeV_WW_1jmm_WWAccNum_events_stack_22->SetStats(0);
   thsSignal_grouped_hww2l2v_13TeV_WW_1jmm_WWAccNum_events_stack_22->SetLineStyle(0);
   thsSignal_grouped_hww2l2v_13TeV_WW_1jmm_WWAccNum_events_stack_22->SetMarkerStyle(20);
   thsSignal_grouped_hww2l2v_13TeV_WW_1jmm_WWAccNum_events_stack_22->GetXaxis()->SetLabelFont(42);
   thsSignal_grouped_hww2l2v_13TeV_WW_1jmm_WWAccNum_events_stack_22->GetXaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_hww2l2v_13TeV_WW_1jmm_WWAccNum_events_stack_22->GetXaxis()->SetLabelSize(0.05);
   thsSignal_grouped_hww2l2v_13TeV_WW_1jmm_WWAccNum_events_stack_22->GetXaxis()->SetTitleSize(0.06);
   thsSignal_grouped_hww2l2v_13TeV_WW_1jmm_WWAccNum_events_stack_22->GetXaxis()->SetTitleOffset(0.9);
   thsSignal_grouped_hww2l2v_13TeV_WW_1jmm_WWAccNum_events_stack_22->GetXaxis()->SetTitleFont(42);
   thsSignal_grouped_hww2l2v_13TeV_WW_1jmm_WWAccNum_events_stack_22->GetYaxis()->SetLabelFont(42);
   thsSignal_grouped_hww2l2v_13TeV_WW_1jmm_WWAccNum_events_stack_22->GetYaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_hww2l2v_13TeV_WW_1jmm_WWAccNum_events_stack_22->GetYaxis()->SetLabelSize(0.05);
   thsSignal_grouped_hww2l2v_13TeV_WW_1jmm_WWAccNum_events_stack_22->GetYaxis()->SetTitleSize(0.06);
   thsSignal_grouped_hww2l2v_13TeV_WW_1jmm_WWAccNum_events_stack_22->GetYaxis()->SetTitleOffset(1.25);
   thsSignal_grouped_hww2l2v_13TeV_WW_1jmm_WWAccNum_events_stack_22->GetYaxis()->SetTitleFont(42);
   thsSignal_grouped_hww2l2v_13TeV_WW_1jmm_WWAccNum_events_stack_22->GetZaxis()->SetLabelFont(42);
   thsSignal_grouped_hww2l2v_13TeV_WW_1jmm_WWAccNum_events_stack_22->GetZaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_hww2l2v_13TeV_WW_1jmm_WWAccNum_events_stack_22->GetZaxis()->SetLabelSize(0.05);
   thsSignal_grouped_hww2l2v_13TeV_WW_1jmm_WWAccNum_events_stack_22->GetZaxis()->SetTitleSize(0.06);
   thsSignal_grouped_hww2l2v_13TeV_WW_1jmm_WWAccNum_events_stack_22->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_hww2l2v_13TeV_WW_1jmm_WWAccNum_events->SetHistogram(thsSignal_grouped_hww2l2v_13TeV_WW_1jmm_WWAccNum_events_stack_22);
   
   
   TH1D *new_histo_group_Higgs_hww2l2v_13TeV_WW_1jmm_WWAccNum_events98 = new TH1D("new_histo_group_Higgs_hww2l2v_13TeV_WW_1jmm_WWAccNum_events98","histo_H_htt",1,0,2);
   new_histo_group_Higgs_hww2l2v_13TeV_WW_1jmm_WWAccNum_events98->SetBinContent(1,2.00347);
   new_histo_group_Higgs_hww2l2v_13TeV_WW_1jmm_WWAccNum_events98->SetBinError(1,0.2120842);
   new_histo_group_Higgs_hww2l2v_13TeV_WW_1jmm_WWAccNum_events98->SetEntries(127);
   new_histo_group_Higgs_hww2l2v_13TeV_WW_1jmm_WWAccNum_events98->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_hww2l2v_13TeV_WW_1jmm_WWAccNum_events98->SetLineColor(ci);
   new_histo_group_Higgs_hww2l2v_13TeV_WW_1jmm_WWAccNum_events98->SetLineWidth(2);
   new_histo_group_Higgs_hww2l2v_13TeV_WW_1jmm_WWAccNum_events98->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_hww2l2v_13TeV_WW_1jmm_WWAccNum_events98->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_hww2l2v_13TeV_WW_1jmm_WWAccNum_events98->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_hww2l2v_13TeV_WW_1jmm_WWAccNum_events98->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_hww2l2v_13TeV_WW_1jmm_WWAccNum_events98->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_hww2l2v_13TeV_WW_1jmm_WWAccNum_events98->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_hww2l2v_13TeV_WW_1jmm_WWAccNum_events98->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_hww2l2v_13TeV_WW_1jmm_WWAccNum_events98->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_hww2l2v_13TeV_WW_1jmm_WWAccNum_events98->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_hww2l2v_13TeV_WW_1jmm_WWAccNum_events98->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_hww2l2v_13TeV_WW_1jmm_WWAccNum_events98->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_hww2l2v_13TeV_WW_1jmm_WWAccNum_events98->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_hww2l2v_13TeV_WW_1jmm_WWAccNum_events->Add(new_histo_group_Higgs_hww2l2v_13TeV_WW_1jmm_WWAccNum_events,"");
   thsSignal_grouped_hww2l2v_13TeV_WW_1jmm_WWAccNum_events->Draw("hist same noclear");
   
   Double_t _fx3015[1] = {
   1};
   Double_t _fy3015[1] = {
   8520};
   Double_t _felx3015[1] = {
   1};
   Double_t _fely3015[1] = {
   92.30403};
   Double_t _fehx3015[1] = {
   1};
   Double_t _fehy3015[1] = {
   93.30948};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(1,_fx3015,_fy3015,_felx3015,_fehx3015,_fely3015,_fehy3015);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(1);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3015 = new TH1F("Graph_Graph3015","",100,0,2.2);
   Graph_Graph3015->SetMinimum(8409.135);
   Graph_Graph3015->SetMaximum(8631.871);
   Graph_Graph3015->SetDirectory(0);
   Graph_Graph3015->SetStats(0);
   Graph_Graph3015->SetLineStyle(0);
   Graph_Graph3015->SetMarkerStyle(20);
   Graph_Graph3015->GetXaxis()->SetLabelFont(42);
   Graph_Graph3015->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3015->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3015->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3015->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3015->GetXaxis()->SetTitleFont(42);
   Graph_Graph3015->GetYaxis()->SetLabelFont(42);
   Graph_Graph3015->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3015->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3015->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3015->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3015->GetYaxis()->SetTitleFont(42);
   Graph_Graph3015->GetZaxis()->SetLabelFont(42);
   Graph_Graph3015->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3015->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3015->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3015->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3015);
   
   grae->Draw("p0");
   
   TLegend *leg = new TLegend(0.2,0.7,0.8,0.9,NULL,"brNDC");
   leg->SetTextFont(62);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("new_histo_group_DY_hww2l2v_13TeV_WW_1jmm_WWAccNum_events","DY","F");

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
   entry=leg->AddEntry("new_histo_group_top_hww2l2v_13TeV_WW_1jmm_WWAccNum_events","tW and t#bart","F");

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
   entry=leg->AddEntry("new_histo_group_WW_hww2l2v_13TeV_WW_1jmm_WWAccNum_events","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_hww2l2v_13TeV_WW_1jmm_WWAccNum_events","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_VZ_hww2l2v_13TeV_WW_1jmm_WWAccNum_events","VZ/#gamma*/#gamma","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_hww2l2v_13TeV_WW_1jmm_WWAccNum_events","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_hww2l2v_13TeV_WW_1jmm_WWAccNum_events","Data","EPL");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   leg->Draw();
   TLatex *   tex = new TLatex(0.96,0.96,"L = 35.9/fb (13 TeV)");
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
   entry=leg->AddEntry("new_histo_group_DY_hww2l2v_13TeV_WW_1jmm_WWAccNum_events","DY","F");

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
   entry=leg->AddEntry("new_histo_group_top_hww2l2v_13TeV_WW_1jmm_WWAccNum_events","tW and t#bart","F");

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
   entry=leg->AddEntry("new_histo_group_WW_hww2l2v_13TeV_WW_1jmm_WWAccNum_events","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_hww2l2v_13TeV_WW_1jmm_WWAccNum_events","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_VZ_hww2l2v_13TeV_WW_1jmm_WWAccNum_events","VZ/#gamma*/#gamma","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_hww2l2v_13TeV_WW_1jmm_WWAccNum_events","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_hww2l2v_13TeV_WW_1jmm_WWAccNum_events","Data","EPL");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   leg->Draw();
   
   TH1F *hframe_copy99 = new TH1F("hframe_copy99","",1000,0,2);
   hframe_copy99->SetMinimum(0);
   hframe_copy99->SetMaximum(21530.76);
   hframe_copy99->SetDirectory(0);
   hframe_copy99->SetStats(0);
   hframe_copy99->SetLineStyle(0);
   hframe_copy99->SetMarkerStyle(20);
   hframe_copy99->GetXaxis()->SetTitle("events");
   hframe_copy99->GetXaxis()->SetNdivisions(506);
   hframe_copy99->GetXaxis()->SetLabelFont(42);
   hframe_copy99->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy99->GetXaxis()->SetLabelSize(0.05);
   hframe_copy99->GetXaxis()->SetTitleSize(0.06);
   hframe_copy99->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy99->GetXaxis()->SetTitleFont(42);
   hframe_copy99->GetYaxis()->SetTitle("Events");
   hframe_copy99->GetYaxis()->SetLabelFont(42);
   hframe_copy99->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy99->GetYaxis()->SetLabelSize(0.05);
   hframe_copy99->GetYaxis()->SetTitleSize(0.06);
   hframe_copy99->GetYaxis()->SetTitleOffset(1.25);
   hframe_copy99->GetYaxis()->SetTitleFont(42);
   hframe_copy99->GetZaxis()->SetLabelFont(42);
   hframe_copy99->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy99->GetZaxis()->SetLabelSize(0.05);
   hframe_copy99->GetZaxis()->SetTitleSize(0.06);
   hframe_copy99->GetZaxis()->SetTitleFont(42);
   hframe_copy99->Draw("sameaxis");
   cchww2l2v_13TeV_WW_1jmm_WWAccNum_events->Modified();
   cchww2l2v_13TeV_WW_1jmm_WWAccNum_events->cd();
   cchww2l2v_13TeV_WW_1jmm_WWAccNum_events->SetSelected(cchww2l2v_13TeV_WW_1jmm_WWAccNum_events);
}
