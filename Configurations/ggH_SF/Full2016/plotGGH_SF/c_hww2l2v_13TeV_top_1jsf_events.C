void c_hww2l2v_13TeV_top_1jsf_events()
{
//=========Macro generated from canvas: cchww2l2v_13TeV_top_1jsf_events/cc
//=========  (Tue Mar 21 11:46:35 2017) by ROOT version6.02/13
   TCanvas *cchww2l2v_13TeV_top_1jsf_events = new TCanvas("cchww2l2v_13TeV_top_1jsf_events", "cc",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   cchww2l2v_13TeV_top_1jsf_events->SetHighLightColor(2);
   cchww2l2v_13TeV_top_1jsf_events->Range(-0.4,-8968.385,2.1,60019.2);
   cchww2l2v_13TeV_top_1jsf_events->SetFillColor(0);
   cchww2l2v_13TeV_top_1jsf_events->SetBorderMode(0);
   cchww2l2v_13TeV_top_1jsf_events->SetBorderSize(2);
   cchww2l2v_13TeV_top_1jsf_events->SetTickx(1);
   cchww2l2v_13TeV_top_1jsf_events->SetTicky(1);
   cchww2l2v_13TeV_top_1jsf_events->SetLeftMargin(0.16);
   cchww2l2v_13TeV_top_1jsf_events->SetRightMargin(0.04);
   cchww2l2v_13TeV_top_1jsf_events->SetTopMargin(0.05);
   cchww2l2v_13TeV_top_1jsf_events->SetBottomMargin(0.13);
   cchww2l2v_13TeV_top_1jsf_events->SetFrameFillStyle(0);
   cchww2l2v_13TeV_top_1jsf_events->SetFrameBorderMode(0);
   cchww2l2v_13TeV_top_1jsf_events->SetFrameFillStyle(0);
   cchww2l2v_13TeV_top_1jsf_events->SetFrameBorderMode(0);
   
   TH1F *hframe199 = new TH1F("hframe199","",1000,0,2);
   hframe199->SetMinimum(0);
   hframe199->SetMaximum(56569.82);
   hframe199->SetDirectory(0);
   hframe199->SetStats(0);
   hframe199->SetLineStyle(0);
   hframe199->SetMarkerStyle(20);
   hframe199->GetXaxis()->SetTitle("events");
   hframe199->GetXaxis()->SetNdivisions(506);
   hframe199->GetXaxis()->SetLabelFont(42);
   hframe199->GetXaxis()->SetLabelOffset(0.007);
   hframe199->GetXaxis()->SetLabelSize(0.05);
   hframe199->GetXaxis()->SetTitleSize(0.06);
   hframe199->GetXaxis()->SetTitleOffset(0.9);
   hframe199->GetXaxis()->SetTitleFont(42);
   hframe199->GetYaxis()->SetTitle("Events");
   hframe199->GetYaxis()->SetLabelFont(42);
   hframe199->GetYaxis()->SetLabelOffset(0.007);
   hframe199->GetYaxis()->SetLabelSize(0.05);
   hframe199->GetYaxis()->SetTitleSize(0.06);
   hframe199->GetYaxis()->SetTitleOffset(1.25);
   hframe199->GetYaxis()->SetTitleFont(42);
   hframe199->GetZaxis()->SetLabelFont(42);
   hframe199->GetZaxis()->SetLabelOffset(0.007);
   hframe199->GetZaxis()->SetLabelSize(0.05);
   hframe199->GetZaxis()->SetTitleSize(0.06);
   hframe199->GetZaxis()->SetTitleFont(42);
   hframe199->Draw(" ");
   
   THStack *thsBackground_grouped_hww2l2v_13TeV_top_1jsf_events = new THStack();
   thsBackground_grouped_hww2l2v_13TeV_top_1jsf_events->SetName("thsBackground_grouped_hww2l2v_13TeV_top_1jsf_events");
   thsBackground_grouped_hww2l2v_13TeV_top_1jsf_events->SetTitle("thsBackground_grouped_hww2l2v_13TeV_top_1jsf_events");
   
   TH1F *thsBackground_grouped_hww2l2v_13TeV_top_1jsf_events_stack_45 = new TH1F("thsBackground_grouped_hww2l2v_13TeV_top_1jsf_events_stack_45","thsBackground_grouped_hww2l2v_13TeV_top_1jsf_events",1,0,2);
   thsBackground_grouped_hww2l2v_13TeV_top_1jsf_events_stack_45->SetMinimum(0);
   thsBackground_grouped_hww2l2v_13TeV_top_1jsf_events_stack_45->SetMaximum(11498.02);
   thsBackground_grouped_hww2l2v_13TeV_top_1jsf_events_stack_45->SetDirectory(0);
   thsBackground_grouped_hww2l2v_13TeV_top_1jsf_events_stack_45->SetStats(0);
   thsBackground_grouped_hww2l2v_13TeV_top_1jsf_events_stack_45->SetLineStyle(0);
   thsBackground_grouped_hww2l2v_13TeV_top_1jsf_events_stack_45->SetMarkerStyle(20);
   thsBackground_grouped_hww2l2v_13TeV_top_1jsf_events_stack_45->GetXaxis()->SetLabelFont(42);
   thsBackground_grouped_hww2l2v_13TeV_top_1jsf_events_stack_45->GetXaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_hww2l2v_13TeV_top_1jsf_events_stack_45->GetXaxis()->SetLabelSize(0.05);
   thsBackground_grouped_hww2l2v_13TeV_top_1jsf_events_stack_45->GetXaxis()->SetTitleSize(0.06);
   thsBackground_grouped_hww2l2v_13TeV_top_1jsf_events_stack_45->GetXaxis()->SetTitleOffset(0.9);
   thsBackground_grouped_hww2l2v_13TeV_top_1jsf_events_stack_45->GetXaxis()->SetTitleFont(42);
   thsBackground_grouped_hww2l2v_13TeV_top_1jsf_events_stack_45->GetYaxis()->SetLabelFont(42);
   thsBackground_grouped_hww2l2v_13TeV_top_1jsf_events_stack_45->GetYaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_hww2l2v_13TeV_top_1jsf_events_stack_45->GetYaxis()->SetLabelSize(0.05);
   thsBackground_grouped_hww2l2v_13TeV_top_1jsf_events_stack_45->GetYaxis()->SetTitleSize(0.06);
   thsBackground_grouped_hww2l2v_13TeV_top_1jsf_events_stack_45->GetYaxis()->SetTitleOffset(1.25);
   thsBackground_grouped_hww2l2v_13TeV_top_1jsf_events_stack_45->GetYaxis()->SetTitleFont(42);
   thsBackground_grouped_hww2l2v_13TeV_top_1jsf_events_stack_45->GetZaxis()->SetLabelFont(42);
   thsBackground_grouped_hww2l2v_13TeV_top_1jsf_events_stack_45->GetZaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_hww2l2v_13TeV_top_1jsf_events_stack_45->GetZaxis()->SetLabelSize(0.05);
   thsBackground_grouped_hww2l2v_13TeV_top_1jsf_events_stack_45->GetZaxis()->SetTitleSize(0.06);
   thsBackground_grouped_hww2l2v_13TeV_top_1jsf_events_stack_45->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_hww2l2v_13TeV_top_1jsf_events->SetHistogram(thsBackground_grouped_hww2l2v_13TeV_top_1jsf_events_stack_45);
   
   
   TH1D *new_histo_group_DY_hww2l2v_13TeV_top_1jsf_events200 = new TH1D("new_histo_group_DY_hww2l2v_13TeV_top_1jsf_events200","histo_DY",1,0,2);
   new_histo_group_DY_hww2l2v_13TeV_top_1jsf_events200->SetBinContent(1,81.68886);
   new_histo_group_DY_hww2l2v_13TeV_top_1jsf_events200->SetBinError(1,56.19255);
   new_histo_group_DY_hww2l2v_13TeV_top_1jsf_events200->SetEntries(58);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#009900");
   new_histo_group_DY_hww2l2v_13TeV_top_1jsf_events200->SetFillColor(ci);
   new_histo_group_DY_hww2l2v_13TeV_top_1jsf_events200->SetFillStyle(3001);

   ci = TColor::GetColor("#009900");
   new_histo_group_DY_hww2l2v_13TeV_top_1jsf_events200->SetLineColor(ci);
   new_histo_group_DY_hww2l2v_13TeV_top_1jsf_events200->GetXaxis()->SetLabelFont(42);
   new_histo_group_DY_hww2l2v_13TeV_top_1jsf_events200->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_DY_hww2l2v_13TeV_top_1jsf_events200->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_DY_hww2l2v_13TeV_top_1jsf_events200->GetXaxis()->SetTitleFont(42);
   new_histo_group_DY_hww2l2v_13TeV_top_1jsf_events200->GetYaxis()->SetLabelFont(42);
   new_histo_group_DY_hww2l2v_13TeV_top_1jsf_events200->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_DY_hww2l2v_13TeV_top_1jsf_events200->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_DY_hww2l2v_13TeV_top_1jsf_events200->GetYaxis()->SetTitleFont(42);
   new_histo_group_DY_hww2l2v_13TeV_top_1jsf_events200->GetZaxis()->SetLabelFont(42);
   new_histo_group_DY_hww2l2v_13TeV_top_1jsf_events200->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_DY_hww2l2v_13TeV_top_1jsf_events200->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_DY_hww2l2v_13TeV_top_1jsf_events200->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_hww2l2v_13TeV_top_1jsf_events->Add(new_histo_group_DY_hww2l2v_13TeV_top_1jsf_events,"");
   
   TH1D *new_histo_group_top_hww2l2v_13TeV_top_1jsf_events201 = new TH1D("new_histo_group_top_hww2l2v_13TeV_top_1jsf_events201","histo_top",1,0,2);
   new_histo_group_top_hww2l2v_13TeV_top_1jsf_events201->SetBinContent(1,10504.28);
   new_histo_group_top_hww2l2v_13TeV_top_1jsf_events201->SetBinError(1,20.53555);
   new_histo_group_top_hww2l2v_13TeV_top_1jsf_events201->SetEntries(290778);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_top_hww2l2v_13TeV_top_1jsf_events201->SetFillColor(ci);
   new_histo_group_top_hww2l2v_13TeV_top_1jsf_events201->SetFillStyle(3001);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_top_hww2l2v_13TeV_top_1jsf_events201->SetLineColor(ci);
   new_histo_group_top_hww2l2v_13TeV_top_1jsf_events201->GetXaxis()->SetLabelFont(42);
   new_histo_group_top_hww2l2v_13TeV_top_1jsf_events201->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_top_hww2l2v_13TeV_top_1jsf_events201->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_top_hww2l2v_13TeV_top_1jsf_events201->GetXaxis()->SetTitleFont(42);
   new_histo_group_top_hww2l2v_13TeV_top_1jsf_events201->GetYaxis()->SetLabelFont(42);
   new_histo_group_top_hww2l2v_13TeV_top_1jsf_events201->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_top_hww2l2v_13TeV_top_1jsf_events201->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_top_hww2l2v_13TeV_top_1jsf_events201->GetYaxis()->SetTitleFont(42);
   new_histo_group_top_hww2l2v_13TeV_top_1jsf_events201->GetZaxis()->SetLabelFont(42);
   new_histo_group_top_hww2l2v_13TeV_top_1jsf_events201->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_top_hww2l2v_13TeV_top_1jsf_events201->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_top_hww2l2v_13TeV_top_1jsf_events201->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_hww2l2v_13TeV_top_1jsf_events->Add(new_histo_group_top_hww2l2v_13TeV_top_1jsf_events,"");
   
   TH1D *new_histo_group_WW_hww2l2v_13TeV_top_1jsf_events202 = new TH1D("new_histo_group_WW_hww2l2v_13TeV_top_1jsf_events202","histo_WW",1,0,2);
   new_histo_group_WW_hww2l2v_13TeV_top_1jsf_events202->SetBinContent(1,293.2);
   new_histo_group_WW_hww2l2v_13TeV_top_1jsf_events202->SetBinError(1,7.725616);
   new_histo_group_WW_hww2l2v_13TeV_top_1jsf_events202->SetEntries(2110);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_hww2l2v_13TeV_top_1jsf_events202->SetFillColor(ci);
   new_histo_group_WW_hww2l2v_13TeV_top_1jsf_events202->SetFillStyle(3001);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_hww2l2v_13TeV_top_1jsf_events202->SetLineColor(ci);
   new_histo_group_WW_hww2l2v_13TeV_top_1jsf_events202->GetXaxis()->SetLabelFont(42);
   new_histo_group_WW_hww2l2v_13TeV_top_1jsf_events202->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WW_hww2l2v_13TeV_top_1jsf_events202->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WW_hww2l2v_13TeV_top_1jsf_events202->GetXaxis()->SetTitleFont(42);
   new_histo_group_WW_hww2l2v_13TeV_top_1jsf_events202->GetYaxis()->SetLabelFont(42);
   new_histo_group_WW_hww2l2v_13TeV_top_1jsf_events202->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WW_hww2l2v_13TeV_top_1jsf_events202->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WW_hww2l2v_13TeV_top_1jsf_events202->GetYaxis()->SetTitleFont(42);
   new_histo_group_WW_hww2l2v_13TeV_top_1jsf_events202->GetZaxis()->SetLabelFont(42);
   new_histo_group_WW_hww2l2v_13TeV_top_1jsf_events202->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WW_hww2l2v_13TeV_top_1jsf_events202->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WW_hww2l2v_13TeV_top_1jsf_events202->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_hww2l2v_13TeV_top_1jsf_events->Add(new_histo_group_WW_hww2l2v_13TeV_top_1jsf_events,"");
   
   TH1D *new_histo_group_VVV_hww2l2v_13TeV_top_1jsf_events203 = new TH1D("new_histo_group_VVV_hww2l2v_13TeV_top_1jsf_events203","histo_VVV",1,0,2);
   new_histo_group_VVV_hww2l2v_13TeV_top_1jsf_events203->SetBinContent(1,2.267545);
   new_histo_group_VVV_hww2l2v_13TeV_top_1jsf_events203->SetBinError(1,0.2813886);
   new_histo_group_VVV_hww2l2v_13TeV_top_1jsf_events203->SetEntries(118);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_hww2l2v_13TeV_top_1jsf_events203->SetFillColor(ci);
   new_histo_group_VVV_hww2l2v_13TeV_top_1jsf_events203->SetFillStyle(3001);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_hww2l2v_13TeV_top_1jsf_events203->SetLineColor(ci);
   new_histo_group_VVV_hww2l2v_13TeV_top_1jsf_events203->GetXaxis()->SetLabelFont(42);
   new_histo_group_VVV_hww2l2v_13TeV_top_1jsf_events203->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_hww2l2v_13TeV_top_1jsf_events203->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_hww2l2v_13TeV_top_1jsf_events203->GetXaxis()->SetTitleFont(42);
   new_histo_group_VVV_hww2l2v_13TeV_top_1jsf_events203->GetYaxis()->SetLabelFont(42);
   new_histo_group_VVV_hww2l2v_13TeV_top_1jsf_events203->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_hww2l2v_13TeV_top_1jsf_events203->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_hww2l2v_13TeV_top_1jsf_events203->GetYaxis()->SetTitleFont(42);
   new_histo_group_VVV_hww2l2v_13TeV_top_1jsf_events203->GetZaxis()->SetLabelFont(42);
   new_histo_group_VVV_hww2l2v_13TeV_top_1jsf_events203->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_hww2l2v_13TeV_top_1jsf_events203->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_hww2l2v_13TeV_top_1jsf_events203->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_hww2l2v_13TeV_top_1jsf_events->Add(new_histo_group_VVV_hww2l2v_13TeV_top_1jsf_events,"");
   
   TH1D *new_histo_group_VZ_hww2l2v_13TeV_top_1jsf_events204 = new TH1D("new_histo_group_VZ_hww2l2v_13TeV_top_1jsf_events204","histo_Vg",1,0,2);
   new_histo_group_VZ_hww2l2v_13TeV_top_1jsf_events204->SetBinContent(1,51.1393);
   new_histo_group_VZ_hww2l2v_13TeV_top_1jsf_events204->SetBinError(1,22.7342);
   new_histo_group_VZ_hww2l2v_13TeV_top_1jsf_events204->SetEntries(2833);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_VZ_hww2l2v_13TeV_top_1jsf_events204->SetFillColor(ci);
   new_histo_group_VZ_hww2l2v_13TeV_top_1jsf_events204->SetFillStyle(3001);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_VZ_hww2l2v_13TeV_top_1jsf_events204->SetLineColor(ci);
   new_histo_group_VZ_hww2l2v_13TeV_top_1jsf_events204->GetXaxis()->SetLabelFont(42);
   new_histo_group_VZ_hww2l2v_13TeV_top_1jsf_events204->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_VZ_hww2l2v_13TeV_top_1jsf_events204->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_VZ_hww2l2v_13TeV_top_1jsf_events204->GetXaxis()->SetTitleFont(42);
   new_histo_group_VZ_hww2l2v_13TeV_top_1jsf_events204->GetYaxis()->SetLabelFont(42);
   new_histo_group_VZ_hww2l2v_13TeV_top_1jsf_events204->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_VZ_hww2l2v_13TeV_top_1jsf_events204->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_VZ_hww2l2v_13TeV_top_1jsf_events204->GetYaxis()->SetTitleFont(42);
   new_histo_group_VZ_hww2l2v_13TeV_top_1jsf_events204->GetZaxis()->SetLabelFont(42);
   new_histo_group_VZ_hww2l2v_13TeV_top_1jsf_events204->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_VZ_hww2l2v_13TeV_top_1jsf_events204->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_VZ_hww2l2v_13TeV_top_1jsf_events204->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_hww2l2v_13TeV_top_1jsf_events->Add(new_histo_group_VZ_hww2l2v_13TeV_top_1jsf_events,"");
   
   TH1D *new_histo_group_Higgs_hww2l2v_13TeV_top_1jsf_events205 = new TH1D("new_histo_group_Higgs_hww2l2v_13TeV_top_1jsf_events205","histo_H_htt",1,0,2);
   new_histo_group_Higgs_hww2l2v_13TeV_top_1jsf_events205->SetBinContent(1,17.91456);
   new_histo_group_Higgs_hww2l2v_13TeV_top_1jsf_events205->SetBinError(1,1.019565);
   new_histo_group_Higgs_hww2l2v_13TeV_top_1jsf_events205->SetEntries(747);
   new_histo_group_Higgs_hww2l2v_13TeV_top_1jsf_events205->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_hww2l2v_13TeV_top_1jsf_events205->SetLineColor(ci);
   new_histo_group_Higgs_hww2l2v_13TeV_top_1jsf_events205->SetLineWidth(2);
   new_histo_group_Higgs_hww2l2v_13TeV_top_1jsf_events205->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_hww2l2v_13TeV_top_1jsf_events205->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_hww2l2v_13TeV_top_1jsf_events205->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_hww2l2v_13TeV_top_1jsf_events205->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_hww2l2v_13TeV_top_1jsf_events205->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_hww2l2v_13TeV_top_1jsf_events205->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_hww2l2v_13TeV_top_1jsf_events205->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_hww2l2v_13TeV_top_1jsf_events205->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_hww2l2v_13TeV_top_1jsf_events205->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_hww2l2v_13TeV_top_1jsf_events205->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_hww2l2v_13TeV_top_1jsf_events205->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_hww2l2v_13TeV_top_1jsf_events205->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_hww2l2v_13TeV_top_1jsf_events->Add(new_histo_group_Higgs_hww2l2v_13TeV_top_1jsf_events,"");
   thsBackground_grouped_hww2l2v_13TeV_top_1jsf_events->Draw("hist same");
   
   thsSignal_grouped_hww2l2v_13TeV_top_1jsf_events = new THStack();
   thsSignal_grouped_hww2l2v_13TeV_top_1jsf_events->SetName("thsSignal_grouped_hww2l2v_13TeV_top_1jsf_events");
   thsSignal_grouped_hww2l2v_13TeV_top_1jsf_events->SetTitle("thsSignal_grouped_hww2l2v_13TeV_top_1jsf_events");
   
   TH1F *thsSignal_grouped_hww2l2v_13TeV_top_1jsf_events_stack_46 = new TH1F("thsSignal_grouped_hww2l2v_13TeV_top_1jsf_events_stack_46","thsSignal_grouped_hww2l2v_13TeV_top_1jsf_events",1,0,2);
   thsSignal_grouped_hww2l2v_13TeV_top_1jsf_events_stack_46->SetMinimum(0);
   thsSignal_grouped_hww2l2v_13TeV_top_1jsf_events_stack_46->SetMaximum(19.88083);
   thsSignal_grouped_hww2l2v_13TeV_top_1jsf_events_stack_46->SetDirectory(0);
   thsSignal_grouped_hww2l2v_13TeV_top_1jsf_events_stack_46->SetStats(0);
   thsSignal_grouped_hww2l2v_13TeV_top_1jsf_events_stack_46->SetLineStyle(0);
   thsSignal_grouped_hww2l2v_13TeV_top_1jsf_events_stack_46->SetMarkerStyle(20);
   thsSignal_grouped_hww2l2v_13TeV_top_1jsf_events_stack_46->GetXaxis()->SetLabelFont(42);
   thsSignal_grouped_hww2l2v_13TeV_top_1jsf_events_stack_46->GetXaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_hww2l2v_13TeV_top_1jsf_events_stack_46->GetXaxis()->SetLabelSize(0.05);
   thsSignal_grouped_hww2l2v_13TeV_top_1jsf_events_stack_46->GetXaxis()->SetTitleSize(0.06);
   thsSignal_grouped_hww2l2v_13TeV_top_1jsf_events_stack_46->GetXaxis()->SetTitleOffset(0.9);
   thsSignal_grouped_hww2l2v_13TeV_top_1jsf_events_stack_46->GetXaxis()->SetTitleFont(42);
   thsSignal_grouped_hww2l2v_13TeV_top_1jsf_events_stack_46->GetYaxis()->SetLabelFont(42);
   thsSignal_grouped_hww2l2v_13TeV_top_1jsf_events_stack_46->GetYaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_hww2l2v_13TeV_top_1jsf_events_stack_46->GetYaxis()->SetLabelSize(0.05);
   thsSignal_grouped_hww2l2v_13TeV_top_1jsf_events_stack_46->GetYaxis()->SetTitleSize(0.06);
   thsSignal_grouped_hww2l2v_13TeV_top_1jsf_events_stack_46->GetYaxis()->SetTitleOffset(1.25);
   thsSignal_grouped_hww2l2v_13TeV_top_1jsf_events_stack_46->GetYaxis()->SetTitleFont(42);
   thsSignal_grouped_hww2l2v_13TeV_top_1jsf_events_stack_46->GetZaxis()->SetLabelFont(42);
   thsSignal_grouped_hww2l2v_13TeV_top_1jsf_events_stack_46->GetZaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_hww2l2v_13TeV_top_1jsf_events_stack_46->GetZaxis()->SetLabelSize(0.05);
   thsSignal_grouped_hww2l2v_13TeV_top_1jsf_events_stack_46->GetZaxis()->SetTitleSize(0.06);
   thsSignal_grouped_hww2l2v_13TeV_top_1jsf_events_stack_46->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_hww2l2v_13TeV_top_1jsf_events->SetHistogram(thsSignal_grouped_hww2l2v_13TeV_top_1jsf_events_stack_46);
   
   
   TH1D *new_histo_group_Higgs_hww2l2v_13TeV_top_1jsf_events206 = new TH1D("new_histo_group_Higgs_hww2l2v_13TeV_top_1jsf_events206","histo_H_htt",1,0,2);
   new_histo_group_Higgs_hww2l2v_13TeV_top_1jsf_events206->SetBinContent(1,17.91456);
   new_histo_group_Higgs_hww2l2v_13TeV_top_1jsf_events206->SetBinError(1,1.019565);
   new_histo_group_Higgs_hww2l2v_13TeV_top_1jsf_events206->SetEntries(747);
   new_histo_group_Higgs_hww2l2v_13TeV_top_1jsf_events206->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_hww2l2v_13TeV_top_1jsf_events206->SetLineColor(ci);
   new_histo_group_Higgs_hww2l2v_13TeV_top_1jsf_events206->SetLineWidth(2);
   new_histo_group_Higgs_hww2l2v_13TeV_top_1jsf_events206->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_hww2l2v_13TeV_top_1jsf_events206->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_hww2l2v_13TeV_top_1jsf_events206->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_hww2l2v_13TeV_top_1jsf_events206->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_hww2l2v_13TeV_top_1jsf_events206->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_hww2l2v_13TeV_top_1jsf_events206->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_hww2l2v_13TeV_top_1jsf_events206->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_hww2l2v_13TeV_top_1jsf_events206->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_hww2l2v_13TeV_top_1jsf_events206->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_hww2l2v_13TeV_top_1jsf_events206->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_hww2l2v_13TeV_top_1jsf_events206->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_hww2l2v_13TeV_top_1jsf_events206->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_hww2l2v_13TeV_top_1jsf_events->Add(new_histo_group_Higgs_hww2l2v_13TeV_top_1jsf_events,"");
   thsSignal_grouped_hww2l2v_13TeV_top_1jsf_events->Draw("hist same noclear");
   
   Double_t _fx3030[1] = {
   1};
   Double_t _fy3030[1] = {
   22478};
   Double_t _felx3030[1] = {
   1};
   Double_t _fely3030[1] = {
   149.9288};
   Double_t _fehx3030[1] = {
   1};
   Double_t _fehy3030[1] = {
   150.9321};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(1,_fx3030,_fy3030,_felx3030,_fehx3030,_fely3030,_fehy3030);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(1);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3030 = new TH1F("Graph_Graph3030","",100,0,2.2);
   Graph_Graph3030->SetMinimum(22297.99);
   Graph_Graph3030->SetMaximum(22659.02);
   Graph_Graph3030->SetDirectory(0);
   Graph_Graph3030->SetStats(0);
   Graph_Graph3030->SetLineStyle(0);
   Graph_Graph3030->SetMarkerStyle(20);
   Graph_Graph3030->GetXaxis()->SetLabelFont(42);
   Graph_Graph3030->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3030->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3030->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3030->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3030->GetXaxis()->SetTitleFont(42);
   Graph_Graph3030->GetYaxis()->SetLabelFont(42);
   Graph_Graph3030->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3030->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3030->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3030->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3030->GetYaxis()->SetTitleFont(42);
   Graph_Graph3030->GetZaxis()->SetLabelFont(42);
   Graph_Graph3030->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3030->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3030->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3030->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3030);
   
   grae->Draw("p0");
   
   TLegend *leg = new TLegend(0.2,0.7,0.8,0.9,NULL,"brNDC");
   leg->SetTextFont(62);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("new_histo_group_DY_hww2l2v_13TeV_top_1jsf_events","DY","F");

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
   entry=leg->AddEntry("new_histo_group_top_hww2l2v_13TeV_top_1jsf_events","tW and t#bart","F");

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
   entry=leg->AddEntry("new_histo_group_WW_hww2l2v_13TeV_top_1jsf_events","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_hww2l2v_13TeV_top_1jsf_events","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_VZ_hww2l2v_13TeV_top_1jsf_events","VZ/#gamma*/#gamma","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_hww2l2v_13TeV_top_1jsf_events","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_hww2l2v_13TeV_top_1jsf_events","Data","EPL");
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
   entry=leg->AddEntry("new_histo_group_DY_hww2l2v_13TeV_top_1jsf_events","DY","F");

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
   entry=leg->AddEntry("new_histo_group_top_hww2l2v_13TeV_top_1jsf_events","tW and t#bart","F");

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
   entry=leg->AddEntry("new_histo_group_WW_hww2l2v_13TeV_top_1jsf_events","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_hww2l2v_13TeV_top_1jsf_events","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_VZ_hww2l2v_13TeV_top_1jsf_events","VZ/#gamma*/#gamma","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_hww2l2v_13TeV_top_1jsf_events","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_hww2l2v_13TeV_top_1jsf_events","Data","EPL");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   leg->Draw();
   
   TH1F *hframe_copy207 = new TH1F("hframe_copy207","",1000,0,2);
   hframe_copy207->SetMinimum(0);
   hframe_copy207->SetMaximum(56569.82);
   hframe_copy207->SetDirectory(0);
   hframe_copy207->SetStats(0);
   hframe_copy207->SetLineStyle(0);
   hframe_copy207->SetMarkerStyle(20);
   hframe_copy207->GetXaxis()->SetTitle("events");
   hframe_copy207->GetXaxis()->SetNdivisions(506);
   hframe_copy207->GetXaxis()->SetLabelFont(42);
   hframe_copy207->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy207->GetXaxis()->SetLabelSize(0.05);
   hframe_copy207->GetXaxis()->SetTitleSize(0.06);
   hframe_copy207->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy207->GetXaxis()->SetTitleFont(42);
   hframe_copy207->GetYaxis()->SetTitle("Events");
   hframe_copy207->GetYaxis()->SetLabelFont(42);
   hframe_copy207->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy207->GetYaxis()->SetLabelSize(0.05);
   hframe_copy207->GetYaxis()->SetTitleSize(0.06);
   hframe_copy207->GetYaxis()->SetTitleOffset(1.25);
   hframe_copy207->GetYaxis()->SetTitleFont(42);
   hframe_copy207->GetZaxis()->SetLabelFont(42);
   hframe_copy207->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy207->GetZaxis()->SetLabelSize(0.05);
   hframe_copy207->GetZaxis()->SetTitleSize(0.06);
   hframe_copy207->GetZaxis()->SetTitleFont(42);
   hframe_copy207->Draw("sameaxis");
   cchww2l2v_13TeV_top_1jsf_events->Modified();
   cchww2l2v_13TeV_top_1jsf_events->cd();
   cchww2l2v_13TeV_top_1jsf_events->SetSelected(cchww2l2v_13TeV_top_1jsf_events);
}
