void c_hww2l2v_13TeV_DYin_1jee_events()
{
//=========Macro generated from canvas: cchww2l2v_13TeV_DYin_1jee_events/cc
//=========  (Tue Mar 21 11:46:17 2017) by ROOT version6.02/13
   TCanvas *cchww2l2v_13TeV_DYin_1jee_events = new TCanvas("cchww2l2v_13TeV_DYin_1jee_events", "cc",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   cchww2l2v_13TeV_DYin_1jee_events->SetHighLightColor(2);
   cchww2l2v_13TeV_DYin_1jee_events->Range(-0.4,-490.5456,2.1,3282.882);
   cchww2l2v_13TeV_DYin_1jee_events->SetFillColor(0);
   cchww2l2v_13TeV_DYin_1jee_events->SetBorderMode(0);
   cchww2l2v_13TeV_DYin_1jee_events->SetBorderSize(2);
   cchww2l2v_13TeV_DYin_1jee_events->SetTickx(1);
   cchww2l2v_13TeV_DYin_1jee_events->SetTicky(1);
   cchww2l2v_13TeV_DYin_1jee_events->SetLeftMargin(0.16);
   cchww2l2v_13TeV_DYin_1jee_events->SetRightMargin(0.04);
   cchww2l2v_13TeV_DYin_1jee_events->SetTopMargin(0.05);
   cchww2l2v_13TeV_DYin_1jee_events->SetBottomMargin(0.13);
   cchww2l2v_13TeV_DYin_1jee_events->SetFrameFillStyle(0);
   cchww2l2v_13TeV_DYin_1jee_events->SetFrameBorderMode(0);
   cchww2l2v_13TeV_DYin_1jee_events->SetFrameFillStyle(0);
   cchww2l2v_13TeV_DYin_1jee_events->SetFrameBorderMode(0);
   
   TH1F *hframe55 = new TH1F("hframe55","",1000,0,2);
   hframe55->SetMinimum(0);
   hframe55->SetMaximum(3094.211);
   hframe55->SetDirectory(0);
   hframe55->SetStats(0);
   hframe55->SetLineStyle(0);
   hframe55->SetMarkerStyle(20);
   hframe55->GetXaxis()->SetTitle("events");
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
   
   THStack *thsBackground_grouped_hww2l2v_13TeV_DYin_1jee_events = new THStack();
   thsBackground_grouped_hww2l2v_13TeV_DYin_1jee_events->SetName("thsBackground_grouped_hww2l2v_13TeV_DYin_1jee_events");
   thsBackground_grouped_hww2l2v_13TeV_DYin_1jee_events->SetTitle("thsBackground_grouped_hww2l2v_13TeV_DYin_1jee_events");
   
   TH1F *thsBackground_grouped_hww2l2v_13TeV_DYin_1jee_events_stack_13 = new TH1F("thsBackground_grouped_hww2l2v_13TeV_DYin_1jee_events_stack_13","thsBackground_grouped_hww2l2v_13TeV_DYin_1jee_events",1,0,2);
   thsBackground_grouped_hww2l2v_13TeV_DYin_1jee_events_stack_13->SetMinimum(0);
   thsBackground_grouped_hww2l2v_13TeV_DYin_1jee_events_stack_13->SetMaximum(620.19);
   thsBackground_grouped_hww2l2v_13TeV_DYin_1jee_events_stack_13->SetDirectory(0);
   thsBackground_grouped_hww2l2v_13TeV_DYin_1jee_events_stack_13->SetStats(0);
   thsBackground_grouped_hww2l2v_13TeV_DYin_1jee_events_stack_13->SetLineStyle(0);
   thsBackground_grouped_hww2l2v_13TeV_DYin_1jee_events_stack_13->SetMarkerStyle(20);
   thsBackground_grouped_hww2l2v_13TeV_DYin_1jee_events_stack_13->GetXaxis()->SetLabelFont(42);
   thsBackground_grouped_hww2l2v_13TeV_DYin_1jee_events_stack_13->GetXaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_hww2l2v_13TeV_DYin_1jee_events_stack_13->GetXaxis()->SetLabelSize(0.05);
   thsBackground_grouped_hww2l2v_13TeV_DYin_1jee_events_stack_13->GetXaxis()->SetTitleSize(0.06);
   thsBackground_grouped_hww2l2v_13TeV_DYin_1jee_events_stack_13->GetXaxis()->SetTitleOffset(0.9);
   thsBackground_grouped_hww2l2v_13TeV_DYin_1jee_events_stack_13->GetXaxis()->SetTitleFont(42);
   thsBackground_grouped_hww2l2v_13TeV_DYin_1jee_events_stack_13->GetYaxis()->SetLabelFont(42);
   thsBackground_grouped_hww2l2v_13TeV_DYin_1jee_events_stack_13->GetYaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_hww2l2v_13TeV_DYin_1jee_events_stack_13->GetYaxis()->SetLabelSize(0.05);
   thsBackground_grouped_hww2l2v_13TeV_DYin_1jee_events_stack_13->GetYaxis()->SetTitleSize(0.06);
   thsBackground_grouped_hww2l2v_13TeV_DYin_1jee_events_stack_13->GetYaxis()->SetTitleOffset(1.25);
   thsBackground_grouped_hww2l2v_13TeV_DYin_1jee_events_stack_13->GetYaxis()->SetTitleFont(42);
   thsBackground_grouped_hww2l2v_13TeV_DYin_1jee_events_stack_13->GetZaxis()->SetLabelFont(42);
   thsBackground_grouped_hww2l2v_13TeV_DYin_1jee_events_stack_13->GetZaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_hww2l2v_13TeV_DYin_1jee_events_stack_13->GetZaxis()->SetLabelSize(0.05);
   thsBackground_grouped_hww2l2v_13TeV_DYin_1jee_events_stack_13->GetZaxis()->SetTitleSize(0.06);
   thsBackground_grouped_hww2l2v_13TeV_DYin_1jee_events_stack_13->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_hww2l2v_13TeV_DYin_1jee_events->SetHistogram(thsBackground_grouped_hww2l2v_13TeV_DYin_1jee_events_stack_13);
   
   
   TH1D *new_histo_group_DY_hww2l2v_13TeV_DYin_1jee_events56 = new TH1D("new_histo_group_DY_hww2l2v_13TeV_DYin_1jee_events56","histo_DY",1,0,2);
   new_histo_group_DY_hww2l2v_13TeV_DYin_1jee_events56->SetBinContent(1,335.5512);
   new_histo_group_DY_hww2l2v_13TeV_DYin_1jee_events56->SetBinError(1,51.10728);
   new_histo_group_DY_hww2l2v_13TeV_DYin_1jee_events56->SetEntries(505);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#009900");
   new_histo_group_DY_hww2l2v_13TeV_DYin_1jee_events56->SetFillColor(ci);
   new_histo_group_DY_hww2l2v_13TeV_DYin_1jee_events56->SetFillStyle(3001);

   ci = TColor::GetColor("#009900");
   new_histo_group_DY_hww2l2v_13TeV_DYin_1jee_events56->SetLineColor(ci);
   new_histo_group_DY_hww2l2v_13TeV_DYin_1jee_events56->GetXaxis()->SetLabelFont(42);
   new_histo_group_DY_hww2l2v_13TeV_DYin_1jee_events56->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_DY_hww2l2v_13TeV_DYin_1jee_events56->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_DY_hww2l2v_13TeV_DYin_1jee_events56->GetXaxis()->SetTitleFont(42);
   new_histo_group_DY_hww2l2v_13TeV_DYin_1jee_events56->GetYaxis()->SetLabelFont(42);
   new_histo_group_DY_hww2l2v_13TeV_DYin_1jee_events56->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_DY_hww2l2v_13TeV_DYin_1jee_events56->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_DY_hww2l2v_13TeV_DYin_1jee_events56->GetYaxis()->SetTitleFont(42);
   new_histo_group_DY_hww2l2v_13TeV_DYin_1jee_events56->GetZaxis()->SetLabelFont(42);
   new_histo_group_DY_hww2l2v_13TeV_DYin_1jee_events56->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_DY_hww2l2v_13TeV_DYin_1jee_events56->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_DY_hww2l2v_13TeV_DYin_1jee_events56->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_hww2l2v_13TeV_DYin_1jee_events->Add(new_histo_group_DY_hww2l2v_13TeV_DYin_1jee_events,"");
   
   TH1D *new_histo_group_top_hww2l2v_13TeV_DYin_1jee_events57 = new TH1D("new_histo_group_top_hww2l2v_13TeV_DYin_1jee_events57","histo_top",1,0,2);
   new_histo_group_top_hww2l2v_13TeV_DYin_1jee_events57->SetBinContent(1,56.77756);
   new_histo_group_top_hww2l2v_13TeV_DYin_1jee_events57->SetBinError(1,1.519052);
   new_histo_group_top_hww2l2v_13TeV_DYin_1jee_events57->SetEntries(1539);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_top_hww2l2v_13TeV_DYin_1jee_events57->SetFillColor(ci);
   new_histo_group_top_hww2l2v_13TeV_DYin_1jee_events57->SetFillStyle(3001);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_top_hww2l2v_13TeV_DYin_1jee_events57->SetLineColor(ci);
   new_histo_group_top_hww2l2v_13TeV_DYin_1jee_events57->GetXaxis()->SetLabelFont(42);
   new_histo_group_top_hww2l2v_13TeV_DYin_1jee_events57->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_top_hww2l2v_13TeV_DYin_1jee_events57->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_top_hww2l2v_13TeV_DYin_1jee_events57->GetXaxis()->SetTitleFont(42);
   new_histo_group_top_hww2l2v_13TeV_DYin_1jee_events57->GetYaxis()->SetLabelFont(42);
   new_histo_group_top_hww2l2v_13TeV_DYin_1jee_events57->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_top_hww2l2v_13TeV_DYin_1jee_events57->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_top_hww2l2v_13TeV_DYin_1jee_events57->GetYaxis()->SetTitleFont(42);
   new_histo_group_top_hww2l2v_13TeV_DYin_1jee_events57->GetZaxis()->SetLabelFont(42);
   new_histo_group_top_hww2l2v_13TeV_DYin_1jee_events57->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_top_hww2l2v_13TeV_DYin_1jee_events57->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_top_hww2l2v_13TeV_DYin_1jee_events57->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_hww2l2v_13TeV_DYin_1jee_events->Add(new_histo_group_top_hww2l2v_13TeV_DYin_1jee_events,"");
   
   TH1D *new_histo_group_WW_hww2l2v_13TeV_DYin_1jee_events58 = new TH1D("new_histo_group_WW_hww2l2v_13TeV_DYin_1jee_events58","histo_WW",1,0,2);
   new_histo_group_WW_hww2l2v_13TeV_DYin_1jee_events58->SetBinContent(1,49.24771);
   new_histo_group_WW_hww2l2v_13TeV_DYin_1jee_events58->SetBinError(1,3.003326);
   new_histo_group_WW_hww2l2v_13TeV_DYin_1jee_events58->SetEntries(380);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_hww2l2v_13TeV_DYin_1jee_events58->SetFillColor(ci);
   new_histo_group_WW_hww2l2v_13TeV_DYin_1jee_events58->SetFillStyle(3001);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_hww2l2v_13TeV_DYin_1jee_events58->SetLineColor(ci);
   new_histo_group_WW_hww2l2v_13TeV_DYin_1jee_events58->GetXaxis()->SetLabelFont(42);
   new_histo_group_WW_hww2l2v_13TeV_DYin_1jee_events58->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WW_hww2l2v_13TeV_DYin_1jee_events58->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WW_hww2l2v_13TeV_DYin_1jee_events58->GetXaxis()->SetTitleFont(42);
   new_histo_group_WW_hww2l2v_13TeV_DYin_1jee_events58->GetYaxis()->SetLabelFont(42);
   new_histo_group_WW_hww2l2v_13TeV_DYin_1jee_events58->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WW_hww2l2v_13TeV_DYin_1jee_events58->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WW_hww2l2v_13TeV_DYin_1jee_events58->GetYaxis()->SetTitleFont(42);
   new_histo_group_WW_hww2l2v_13TeV_DYin_1jee_events58->GetZaxis()->SetLabelFont(42);
   new_histo_group_WW_hww2l2v_13TeV_DYin_1jee_events58->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WW_hww2l2v_13TeV_DYin_1jee_events58->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WW_hww2l2v_13TeV_DYin_1jee_events58->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_hww2l2v_13TeV_DYin_1jee_events->Add(new_histo_group_WW_hww2l2v_13TeV_DYin_1jee_events,"");
   
   TH1D *new_histo_group_VVV_hww2l2v_13TeV_DYin_1jee_events59 = new TH1D("new_histo_group_VVV_hww2l2v_13TeV_DYin_1jee_events59","histo_VVV",1,0,2);
   new_histo_group_VVV_hww2l2v_13TeV_DYin_1jee_events59->SetBinContent(1,1.168296);
   new_histo_group_VVV_hww2l2v_13TeV_DYin_1jee_events59->SetBinError(1,0.1515191);
   new_histo_group_VVV_hww2l2v_13TeV_DYin_1jee_events59->SetEntries(200);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_hww2l2v_13TeV_DYin_1jee_events59->SetFillColor(ci);
   new_histo_group_VVV_hww2l2v_13TeV_DYin_1jee_events59->SetFillStyle(3001);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_hww2l2v_13TeV_DYin_1jee_events59->SetLineColor(ci);
   new_histo_group_VVV_hww2l2v_13TeV_DYin_1jee_events59->GetXaxis()->SetLabelFont(42);
   new_histo_group_VVV_hww2l2v_13TeV_DYin_1jee_events59->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_hww2l2v_13TeV_DYin_1jee_events59->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_hww2l2v_13TeV_DYin_1jee_events59->GetXaxis()->SetTitleFont(42);
   new_histo_group_VVV_hww2l2v_13TeV_DYin_1jee_events59->GetYaxis()->SetLabelFont(42);
   new_histo_group_VVV_hww2l2v_13TeV_DYin_1jee_events59->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_hww2l2v_13TeV_DYin_1jee_events59->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_hww2l2v_13TeV_DYin_1jee_events59->GetYaxis()->SetTitleFont(42);
   new_histo_group_VVV_hww2l2v_13TeV_DYin_1jee_events59->GetZaxis()->SetLabelFont(42);
   new_histo_group_VVV_hww2l2v_13TeV_DYin_1jee_events59->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_hww2l2v_13TeV_DYin_1jee_events59->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_hww2l2v_13TeV_DYin_1jee_events59->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_hww2l2v_13TeV_DYin_1jee_events->Add(new_histo_group_VVV_hww2l2v_13TeV_DYin_1jee_events,"");
   
   TH1D *new_histo_group_VZ_hww2l2v_13TeV_DYin_1jee_events60 = new TH1D("new_histo_group_VZ_hww2l2v_13TeV_DYin_1jee_events60","histo_Vg",1,0,2);
   new_histo_group_VZ_hww2l2v_13TeV_DYin_1jee_events60->SetBinContent(1,147.4518);
   new_histo_group_VZ_hww2l2v_13TeV_DYin_1jee_events60->SetBinError(1,2.396321);
   new_histo_group_VZ_hww2l2v_13TeV_DYin_1jee_events60->SetEntries(37346);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_VZ_hww2l2v_13TeV_DYin_1jee_events60->SetFillColor(ci);
   new_histo_group_VZ_hww2l2v_13TeV_DYin_1jee_events60->SetFillStyle(3001);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_VZ_hww2l2v_13TeV_DYin_1jee_events60->SetLineColor(ci);
   new_histo_group_VZ_hww2l2v_13TeV_DYin_1jee_events60->GetXaxis()->SetLabelFont(42);
   new_histo_group_VZ_hww2l2v_13TeV_DYin_1jee_events60->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_VZ_hww2l2v_13TeV_DYin_1jee_events60->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_VZ_hww2l2v_13TeV_DYin_1jee_events60->GetXaxis()->SetTitleFont(42);
   new_histo_group_VZ_hww2l2v_13TeV_DYin_1jee_events60->GetYaxis()->SetLabelFont(42);
   new_histo_group_VZ_hww2l2v_13TeV_DYin_1jee_events60->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_VZ_hww2l2v_13TeV_DYin_1jee_events60->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_VZ_hww2l2v_13TeV_DYin_1jee_events60->GetYaxis()->SetTitleFont(42);
   new_histo_group_VZ_hww2l2v_13TeV_DYin_1jee_events60->GetZaxis()->SetLabelFont(42);
   new_histo_group_VZ_hww2l2v_13TeV_DYin_1jee_events60->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_VZ_hww2l2v_13TeV_DYin_1jee_events60->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_VZ_hww2l2v_13TeV_DYin_1jee_events60->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_hww2l2v_13TeV_DYin_1jee_events->Add(new_histo_group_VZ_hww2l2v_13TeV_DYin_1jee_events,"");
   
   TH1D *new_histo_group_Higgs_hww2l2v_13TeV_DYin_1jee_events61 = new TH1D("new_histo_group_Higgs_hww2l2v_13TeV_DYin_1jee_events61","histo_H_htt",1,0,2);
   new_histo_group_Higgs_hww2l2v_13TeV_DYin_1jee_events61->SetBinContent(1,0.4605819);
   new_histo_group_Higgs_hww2l2v_13TeV_DYin_1jee_events61->SetBinError(1,0.1088389);
   new_histo_group_Higgs_hww2l2v_13TeV_DYin_1jee_events61->SetEntries(50);
   new_histo_group_Higgs_hww2l2v_13TeV_DYin_1jee_events61->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_hww2l2v_13TeV_DYin_1jee_events61->SetLineColor(ci);
   new_histo_group_Higgs_hww2l2v_13TeV_DYin_1jee_events61->SetLineWidth(2);
   new_histo_group_Higgs_hww2l2v_13TeV_DYin_1jee_events61->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_hww2l2v_13TeV_DYin_1jee_events61->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_hww2l2v_13TeV_DYin_1jee_events61->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_hww2l2v_13TeV_DYin_1jee_events61->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_hww2l2v_13TeV_DYin_1jee_events61->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_hww2l2v_13TeV_DYin_1jee_events61->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_hww2l2v_13TeV_DYin_1jee_events61->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_hww2l2v_13TeV_DYin_1jee_events61->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_hww2l2v_13TeV_DYin_1jee_events61->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_hww2l2v_13TeV_DYin_1jee_events61->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_hww2l2v_13TeV_DYin_1jee_events61->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_hww2l2v_13TeV_DYin_1jee_events61->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_hww2l2v_13TeV_DYin_1jee_events->Add(new_histo_group_Higgs_hww2l2v_13TeV_DYin_1jee_events,"");
   thsBackground_grouped_hww2l2v_13TeV_DYin_1jee_events->Draw("hist same");
   
   thsSignal_grouped_hww2l2v_13TeV_DYin_1jee_events = new THStack();
   thsSignal_grouped_hww2l2v_13TeV_DYin_1jee_events->SetName("thsSignal_grouped_hww2l2v_13TeV_DYin_1jee_events");
   thsSignal_grouped_hww2l2v_13TeV_DYin_1jee_events->SetTitle("thsSignal_grouped_hww2l2v_13TeV_DYin_1jee_events");
   
   TH1F *thsSignal_grouped_hww2l2v_13TeV_DYin_1jee_events_stack_14 = new TH1F("thsSignal_grouped_hww2l2v_13TeV_DYin_1jee_events_stack_14","thsSignal_grouped_hww2l2v_13TeV_DYin_1jee_events",1,0,2);
   thsSignal_grouped_hww2l2v_13TeV_DYin_1jee_events_stack_14->SetMinimum(0);
   thsSignal_grouped_hww2l2v_13TeV_DYin_1jee_events_stack_14->SetMaximum(0.5978919);
   thsSignal_grouped_hww2l2v_13TeV_DYin_1jee_events_stack_14->SetDirectory(0);
   thsSignal_grouped_hww2l2v_13TeV_DYin_1jee_events_stack_14->SetStats(0);
   thsSignal_grouped_hww2l2v_13TeV_DYin_1jee_events_stack_14->SetLineStyle(0);
   thsSignal_grouped_hww2l2v_13TeV_DYin_1jee_events_stack_14->SetMarkerStyle(20);
   thsSignal_grouped_hww2l2v_13TeV_DYin_1jee_events_stack_14->GetXaxis()->SetLabelFont(42);
   thsSignal_grouped_hww2l2v_13TeV_DYin_1jee_events_stack_14->GetXaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_hww2l2v_13TeV_DYin_1jee_events_stack_14->GetXaxis()->SetLabelSize(0.05);
   thsSignal_grouped_hww2l2v_13TeV_DYin_1jee_events_stack_14->GetXaxis()->SetTitleSize(0.06);
   thsSignal_grouped_hww2l2v_13TeV_DYin_1jee_events_stack_14->GetXaxis()->SetTitleOffset(0.9);
   thsSignal_grouped_hww2l2v_13TeV_DYin_1jee_events_stack_14->GetXaxis()->SetTitleFont(42);
   thsSignal_grouped_hww2l2v_13TeV_DYin_1jee_events_stack_14->GetYaxis()->SetLabelFont(42);
   thsSignal_grouped_hww2l2v_13TeV_DYin_1jee_events_stack_14->GetYaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_hww2l2v_13TeV_DYin_1jee_events_stack_14->GetYaxis()->SetLabelSize(0.05);
   thsSignal_grouped_hww2l2v_13TeV_DYin_1jee_events_stack_14->GetYaxis()->SetTitleSize(0.06);
   thsSignal_grouped_hww2l2v_13TeV_DYin_1jee_events_stack_14->GetYaxis()->SetTitleOffset(1.25);
   thsSignal_grouped_hww2l2v_13TeV_DYin_1jee_events_stack_14->GetYaxis()->SetTitleFont(42);
   thsSignal_grouped_hww2l2v_13TeV_DYin_1jee_events_stack_14->GetZaxis()->SetLabelFont(42);
   thsSignal_grouped_hww2l2v_13TeV_DYin_1jee_events_stack_14->GetZaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_hww2l2v_13TeV_DYin_1jee_events_stack_14->GetZaxis()->SetLabelSize(0.05);
   thsSignal_grouped_hww2l2v_13TeV_DYin_1jee_events_stack_14->GetZaxis()->SetTitleSize(0.06);
   thsSignal_grouped_hww2l2v_13TeV_DYin_1jee_events_stack_14->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_hww2l2v_13TeV_DYin_1jee_events->SetHistogram(thsSignal_grouped_hww2l2v_13TeV_DYin_1jee_events_stack_14);
   
   
   TH1D *new_histo_group_Higgs_hww2l2v_13TeV_DYin_1jee_events62 = new TH1D("new_histo_group_Higgs_hww2l2v_13TeV_DYin_1jee_events62","histo_H_htt",1,0,2);
   new_histo_group_Higgs_hww2l2v_13TeV_DYin_1jee_events62->SetBinContent(1,0.4605819);
   new_histo_group_Higgs_hww2l2v_13TeV_DYin_1jee_events62->SetBinError(1,0.1088389);
   new_histo_group_Higgs_hww2l2v_13TeV_DYin_1jee_events62->SetEntries(50);
   new_histo_group_Higgs_hww2l2v_13TeV_DYin_1jee_events62->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_hww2l2v_13TeV_DYin_1jee_events62->SetLineColor(ci);
   new_histo_group_Higgs_hww2l2v_13TeV_DYin_1jee_events62->SetLineWidth(2);
   new_histo_group_Higgs_hww2l2v_13TeV_DYin_1jee_events62->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_hww2l2v_13TeV_DYin_1jee_events62->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_hww2l2v_13TeV_DYin_1jee_events62->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_hww2l2v_13TeV_DYin_1jee_events62->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_hww2l2v_13TeV_DYin_1jee_events62->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_hww2l2v_13TeV_DYin_1jee_events62->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_hww2l2v_13TeV_DYin_1jee_events62->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_hww2l2v_13TeV_DYin_1jee_events62->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_hww2l2v_13TeV_DYin_1jee_events62->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_hww2l2v_13TeV_DYin_1jee_events62->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_hww2l2v_13TeV_DYin_1jee_events62->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_hww2l2v_13TeV_DYin_1jee_events62->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_hww2l2v_13TeV_DYin_1jee_events->Add(new_histo_group_Higgs_hww2l2v_13TeV_DYin_1jee_events,"");
   thsSignal_grouped_hww2l2v_13TeV_DYin_1jee_events->Draw("hist same noclear");
   
   Double_t _fx3009[1] = {
   1};
   Double_t _fy3009[1] = {
   1203};
   Double_t _felx3009[1] = {
   1};
   Double_t _fely3009[1] = {
   34.68022};
   Double_t _fehx3009[1] = {
   1};
   Double_t _fehy3009[1] = {
   35.69468};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(1,_fx3009,_fy3009,_felx3009,_fehx3009,_fely3009,_fehy3009);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(1);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3009 = new TH1F("Graph_Graph3009","",100,0,2.2);
   Graph_Graph3009->SetMinimum(1161.282);
   Graph_Graph3009->SetMaximum(1245.732);
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
   
   grae->Draw("p0");
   
   TLegend *leg = new TLegend(0.2,0.7,0.8,0.9,NULL,"brNDC");
   leg->SetTextFont(62);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("new_histo_group_DY_hww2l2v_13TeV_DYin_1jee_events","DY","F");

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
   entry=leg->AddEntry("new_histo_group_top_hww2l2v_13TeV_DYin_1jee_events","tW and t#bart","F");

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
   entry=leg->AddEntry("new_histo_group_WW_hww2l2v_13TeV_DYin_1jee_events","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_hww2l2v_13TeV_DYin_1jee_events","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_VZ_hww2l2v_13TeV_DYin_1jee_events","VZ/#gamma*/#gamma","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_hww2l2v_13TeV_DYin_1jee_events","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_hww2l2v_13TeV_DYin_1jee_events","Data","EPL");
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
   entry=leg->AddEntry("new_histo_group_DY_hww2l2v_13TeV_DYin_1jee_events","DY","F");

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
   entry=leg->AddEntry("new_histo_group_top_hww2l2v_13TeV_DYin_1jee_events","tW and t#bart","F");

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
   entry=leg->AddEntry("new_histo_group_WW_hww2l2v_13TeV_DYin_1jee_events","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_hww2l2v_13TeV_DYin_1jee_events","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_VZ_hww2l2v_13TeV_DYin_1jee_events","VZ/#gamma*/#gamma","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_hww2l2v_13TeV_DYin_1jee_events","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_hww2l2v_13TeV_DYin_1jee_events","Data","EPL");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   leg->Draw();
   
   TH1F *hframe_copy63 = new TH1F("hframe_copy63","",1000,0,2);
   hframe_copy63->SetMinimum(0);
   hframe_copy63->SetMaximum(3094.211);
   hframe_copy63->SetDirectory(0);
   hframe_copy63->SetStats(0);
   hframe_copy63->SetLineStyle(0);
   hframe_copy63->SetMarkerStyle(20);
   hframe_copy63->GetXaxis()->SetTitle("events");
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
   cchww2l2v_13TeV_DYin_1jee_events->Modified();
   cchww2l2v_13TeV_DYin_1jee_events->cd();
   cchww2l2v_13TeV_DYin_1jee_events->SetSelected(cchww2l2v_13TeV_DYin_1jee_events);
}
