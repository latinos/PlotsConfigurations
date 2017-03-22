void c_hww2l2v_13TeV_0jmm_AccDen_events()
{
//=========Macro generated from canvas: cchww2l2v_13TeV_0jmm_AccDen_events/cc
//=========  (Tue Mar 21 11:46:37 2017) by ROOT version6.02/13
   TCanvas *cchww2l2v_13TeV_0jmm_AccDen_events = new TCanvas("cchww2l2v_13TeV_0jmm_AccDen_events", "cc",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   cchww2l2v_13TeV_0jmm_AccDen_events->SetHighLightColor(2);
   cchww2l2v_13TeV_0jmm_AccDen_events->Range(-0.4,-37424.85,2.1,250458.6);
   cchww2l2v_13TeV_0jmm_AccDen_events->SetFillColor(0);
   cchww2l2v_13TeV_0jmm_AccDen_events->SetBorderMode(0);
   cchww2l2v_13TeV_0jmm_AccDen_events->SetBorderSize(2);
   cchww2l2v_13TeV_0jmm_AccDen_events->SetTickx(1);
   cchww2l2v_13TeV_0jmm_AccDen_events->SetTicky(1);
   cchww2l2v_13TeV_0jmm_AccDen_events->SetLeftMargin(0.16);
   cchww2l2v_13TeV_0jmm_AccDen_events->SetRightMargin(0.04);
   cchww2l2v_13TeV_0jmm_AccDen_events->SetTopMargin(0.05);
   cchww2l2v_13TeV_0jmm_AccDen_events->SetBottomMargin(0.13);
   cchww2l2v_13TeV_0jmm_AccDen_events->SetFrameFillStyle(0);
   cchww2l2v_13TeV_0jmm_AccDen_events->SetFrameBorderMode(0);
   cchww2l2v_13TeV_0jmm_AccDen_events->SetFrameFillStyle(0);
   cchww2l2v_13TeV_0jmm_AccDen_events->SetFrameBorderMode(0);
   
   TH1F *hframe226 = new TH1F("hframe226","",1000,0,2);
   hframe226->SetMinimum(0);
   hframe226->SetMaximum(236064.5);
   hframe226->SetDirectory(0);
   hframe226->SetStats(0);
   hframe226->SetLineStyle(0);
   hframe226->SetMarkerStyle(20);
   hframe226->GetXaxis()->SetTitle("events");
   hframe226->GetXaxis()->SetNdivisions(506);
   hframe226->GetXaxis()->SetLabelFont(42);
   hframe226->GetXaxis()->SetLabelOffset(0.007);
   hframe226->GetXaxis()->SetLabelSize(0.05);
   hframe226->GetXaxis()->SetTitleSize(0.06);
   hframe226->GetXaxis()->SetTitleOffset(0.9);
   hframe226->GetXaxis()->SetTitleFont(42);
   hframe226->GetYaxis()->SetTitle("Events");
   hframe226->GetYaxis()->SetLabelFont(42);
   hframe226->GetYaxis()->SetLabelOffset(0.007);
   hframe226->GetYaxis()->SetLabelSize(0.05);
   hframe226->GetYaxis()->SetTitleSize(0.06);
   hframe226->GetYaxis()->SetTitleOffset(1.25);
   hframe226->GetYaxis()->SetTitleFont(42);
   hframe226->GetZaxis()->SetLabelFont(42);
   hframe226->GetZaxis()->SetLabelOffset(0.007);
   hframe226->GetZaxis()->SetLabelSize(0.05);
   hframe226->GetZaxis()->SetTitleSize(0.06);
   hframe226->GetZaxis()->SetTitleFont(42);
   hframe226->Draw(" ");
   
   THStack *thsBackground_grouped_hww2l2v_13TeV_0jmm_AccDen_events = new THStack();
   thsBackground_grouped_hww2l2v_13TeV_0jmm_AccDen_events->SetName("thsBackground_grouped_hww2l2v_13TeV_0jmm_AccDen_events");
   thsBackground_grouped_hww2l2v_13TeV_0jmm_AccDen_events->SetTitle("thsBackground_grouped_hww2l2v_13TeV_0jmm_AccDen_events");
   
   TH1F *thsBackground_grouped_hww2l2v_13TeV_0jmm_AccDen_events_stack_51 = new TH1F("thsBackground_grouped_hww2l2v_13TeV_0jmm_AccDen_events_stack_51","thsBackground_grouped_hww2l2v_13TeV_0jmm_AccDen_events",1,0,2);
   thsBackground_grouped_hww2l2v_13TeV_0jmm_AccDen_events_stack_51->SetMinimum(0);
   thsBackground_grouped_hww2l2v_13TeV_0jmm_AccDen_events_stack_51->SetMaximum(50541.89);
   thsBackground_grouped_hww2l2v_13TeV_0jmm_AccDen_events_stack_51->SetDirectory(0);
   thsBackground_grouped_hww2l2v_13TeV_0jmm_AccDen_events_stack_51->SetStats(0);
   thsBackground_grouped_hww2l2v_13TeV_0jmm_AccDen_events_stack_51->SetLineStyle(0);
   thsBackground_grouped_hww2l2v_13TeV_0jmm_AccDen_events_stack_51->SetMarkerStyle(20);
   thsBackground_grouped_hww2l2v_13TeV_0jmm_AccDen_events_stack_51->GetXaxis()->SetLabelFont(42);
   thsBackground_grouped_hww2l2v_13TeV_0jmm_AccDen_events_stack_51->GetXaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_hww2l2v_13TeV_0jmm_AccDen_events_stack_51->GetXaxis()->SetLabelSize(0.05);
   thsBackground_grouped_hww2l2v_13TeV_0jmm_AccDen_events_stack_51->GetXaxis()->SetTitleSize(0.06);
   thsBackground_grouped_hww2l2v_13TeV_0jmm_AccDen_events_stack_51->GetXaxis()->SetTitleOffset(0.9);
   thsBackground_grouped_hww2l2v_13TeV_0jmm_AccDen_events_stack_51->GetXaxis()->SetTitleFont(42);
   thsBackground_grouped_hww2l2v_13TeV_0jmm_AccDen_events_stack_51->GetYaxis()->SetLabelFont(42);
   thsBackground_grouped_hww2l2v_13TeV_0jmm_AccDen_events_stack_51->GetYaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_hww2l2v_13TeV_0jmm_AccDen_events_stack_51->GetYaxis()->SetLabelSize(0.05);
   thsBackground_grouped_hww2l2v_13TeV_0jmm_AccDen_events_stack_51->GetYaxis()->SetTitleSize(0.06);
   thsBackground_grouped_hww2l2v_13TeV_0jmm_AccDen_events_stack_51->GetYaxis()->SetTitleOffset(1.25);
   thsBackground_grouped_hww2l2v_13TeV_0jmm_AccDen_events_stack_51->GetYaxis()->SetTitleFont(42);
   thsBackground_grouped_hww2l2v_13TeV_0jmm_AccDen_events_stack_51->GetZaxis()->SetLabelFont(42);
   thsBackground_grouped_hww2l2v_13TeV_0jmm_AccDen_events_stack_51->GetZaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_hww2l2v_13TeV_0jmm_AccDen_events_stack_51->GetZaxis()->SetLabelSize(0.05);
   thsBackground_grouped_hww2l2v_13TeV_0jmm_AccDen_events_stack_51->GetZaxis()->SetTitleSize(0.06);
   thsBackground_grouped_hww2l2v_13TeV_0jmm_AccDen_events_stack_51->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_hww2l2v_13TeV_0jmm_AccDen_events->SetHistogram(thsBackground_grouped_hww2l2v_13TeV_0jmm_AccDen_events_stack_51);
   
   
   TH1D *new_histo_group_DY_hww2l2v_13TeV_0jmm_AccDen_events227 = new TH1D("new_histo_group_DY_hww2l2v_13TeV_0jmm_AccDen_events227","histo_DY",1,0,2);
   new_histo_group_DY_hww2l2v_13TeV_0jmm_AccDen_events227->SetBinContent(1,38947.13);
   new_histo_group_DY_hww2l2v_13TeV_0jmm_AccDen_events227->SetBinError(1,1020.528);
   new_histo_group_DY_hww2l2v_13TeV_0jmm_AccDen_events227->SetEntries(12000);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#009900");
   new_histo_group_DY_hww2l2v_13TeV_0jmm_AccDen_events227->SetFillColor(ci);
   new_histo_group_DY_hww2l2v_13TeV_0jmm_AccDen_events227->SetFillStyle(3001);

   ci = TColor::GetColor("#009900");
   new_histo_group_DY_hww2l2v_13TeV_0jmm_AccDen_events227->SetLineColor(ci);
   new_histo_group_DY_hww2l2v_13TeV_0jmm_AccDen_events227->GetXaxis()->SetLabelFont(42);
   new_histo_group_DY_hww2l2v_13TeV_0jmm_AccDen_events227->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_DY_hww2l2v_13TeV_0jmm_AccDen_events227->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_DY_hww2l2v_13TeV_0jmm_AccDen_events227->GetXaxis()->SetTitleFont(42);
   new_histo_group_DY_hww2l2v_13TeV_0jmm_AccDen_events227->GetYaxis()->SetLabelFont(42);
   new_histo_group_DY_hww2l2v_13TeV_0jmm_AccDen_events227->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_DY_hww2l2v_13TeV_0jmm_AccDen_events227->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_DY_hww2l2v_13TeV_0jmm_AccDen_events227->GetYaxis()->SetTitleFont(42);
   new_histo_group_DY_hww2l2v_13TeV_0jmm_AccDen_events227->GetZaxis()->SetLabelFont(42);
   new_histo_group_DY_hww2l2v_13TeV_0jmm_AccDen_events227->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_DY_hww2l2v_13TeV_0jmm_AccDen_events227->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_DY_hww2l2v_13TeV_0jmm_AccDen_events227->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_hww2l2v_13TeV_0jmm_AccDen_events->Add(new_histo_group_DY_hww2l2v_13TeV_0jmm_AccDen_events,"");
   
   TH1D *new_histo_group_top_hww2l2v_13TeV_0jmm_AccDen_events228 = new TH1D("new_histo_group_top_hww2l2v_13TeV_0jmm_AccDen_events228","histo_top",1,0,2);
   new_histo_group_top_hww2l2v_13TeV_0jmm_AccDen_events228->SetBinContent(1,1195.753);
   new_histo_group_top_hww2l2v_13TeV_0jmm_AccDen_events228->SetBinError(1,7.148536);
   new_histo_group_top_hww2l2v_13TeV_0jmm_AccDen_events228->SetEntries(31317);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_top_hww2l2v_13TeV_0jmm_AccDen_events228->SetFillColor(ci);
   new_histo_group_top_hww2l2v_13TeV_0jmm_AccDen_events228->SetFillStyle(3001);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_top_hww2l2v_13TeV_0jmm_AccDen_events228->SetLineColor(ci);
   new_histo_group_top_hww2l2v_13TeV_0jmm_AccDen_events228->GetXaxis()->SetLabelFont(42);
   new_histo_group_top_hww2l2v_13TeV_0jmm_AccDen_events228->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_top_hww2l2v_13TeV_0jmm_AccDen_events228->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_top_hww2l2v_13TeV_0jmm_AccDen_events228->GetXaxis()->SetTitleFont(42);
   new_histo_group_top_hww2l2v_13TeV_0jmm_AccDen_events228->GetYaxis()->SetLabelFont(42);
   new_histo_group_top_hww2l2v_13TeV_0jmm_AccDen_events228->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_top_hww2l2v_13TeV_0jmm_AccDen_events228->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_top_hww2l2v_13TeV_0jmm_AccDen_events228->GetYaxis()->SetTitleFont(42);
   new_histo_group_top_hww2l2v_13TeV_0jmm_AccDen_events228->GetZaxis()->SetLabelFont(42);
   new_histo_group_top_hww2l2v_13TeV_0jmm_AccDen_events228->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_top_hww2l2v_13TeV_0jmm_AccDen_events228->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_top_hww2l2v_13TeV_0jmm_AccDen_events228->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_hww2l2v_13TeV_0jmm_AccDen_events->Add(new_histo_group_top_hww2l2v_13TeV_0jmm_AccDen_events,"");
   
   TH1D *new_histo_group_WW_hww2l2v_13TeV_0jmm_AccDen_events229 = new TH1D("new_histo_group_WW_hww2l2v_13TeV_0jmm_AccDen_events229","histo_WW",1,0,2);
   new_histo_group_WW_hww2l2v_13TeV_0jmm_AccDen_events229->SetBinContent(1,6674.573);
   new_histo_group_WW_hww2l2v_13TeV_0jmm_AccDen_events229->SetBinError(1,36.98937);
   new_histo_group_WW_hww2l2v_13TeV_0jmm_AccDen_events229->SetEntries(44781);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_hww2l2v_13TeV_0jmm_AccDen_events229->SetFillColor(ci);
   new_histo_group_WW_hww2l2v_13TeV_0jmm_AccDen_events229->SetFillStyle(3001);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_hww2l2v_13TeV_0jmm_AccDen_events229->SetLineColor(ci);
   new_histo_group_WW_hww2l2v_13TeV_0jmm_AccDen_events229->GetXaxis()->SetLabelFont(42);
   new_histo_group_WW_hww2l2v_13TeV_0jmm_AccDen_events229->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WW_hww2l2v_13TeV_0jmm_AccDen_events229->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WW_hww2l2v_13TeV_0jmm_AccDen_events229->GetXaxis()->SetTitleFont(42);
   new_histo_group_WW_hww2l2v_13TeV_0jmm_AccDen_events229->GetYaxis()->SetLabelFont(42);
   new_histo_group_WW_hww2l2v_13TeV_0jmm_AccDen_events229->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WW_hww2l2v_13TeV_0jmm_AccDen_events229->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WW_hww2l2v_13TeV_0jmm_AccDen_events229->GetYaxis()->SetTitleFont(42);
   new_histo_group_WW_hww2l2v_13TeV_0jmm_AccDen_events229->GetZaxis()->SetLabelFont(42);
   new_histo_group_WW_hww2l2v_13TeV_0jmm_AccDen_events229->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WW_hww2l2v_13TeV_0jmm_AccDen_events229->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WW_hww2l2v_13TeV_0jmm_AccDen_events229->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_hww2l2v_13TeV_0jmm_AccDen_events->Add(new_histo_group_WW_hww2l2v_13TeV_0jmm_AccDen_events,"");
   
   TH1D *new_histo_group_VVV_hww2l2v_13TeV_0jmm_AccDen_events230 = new TH1D("new_histo_group_VVV_hww2l2v_13TeV_0jmm_AccDen_events230","histo_VVV",1,0,2);
   new_histo_group_VVV_hww2l2v_13TeV_0jmm_AccDen_events230->SetBinContent(1,6.331931);
   new_histo_group_VVV_hww2l2v_13TeV_0jmm_AccDen_events230->SetBinError(1,0.4787728);
   new_histo_group_VVV_hww2l2v_13TeV_0jmm_AccDen_events230->SetEntries(290);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_hww2l2v_13TeV_0jmm_AccDen_events230->SetFillColor(ci);
   new_histo_group_VVV_hww2l2v_13TeV_0jmm_AccDen_events230->SetFillStyle(3001);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_hww2l2v_13TeV_0jmm_AccDen_events230->SetLineColor(ci);
   new_histo_group_VVV_hww2l2v_13TeV_0jmm_AccDen_events230->GetXaxis()->SetLabelFont(42);
   new_histo_group_VVV_hww2l2v_13TeV_0jmm_AccDen_events230->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_hww2l2v_13TeV_0jmm_AccDen_events230->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_hww2l2v_13TeV_0jmm_AccDen_events230->GetXaxis()->SetTitleFont(42);
   new_histo_group_VVV_hww2l2v_13TeV_0jmm_AccDen_events230->GetYaxis()->SetLabelFont(42);
   new_histo_group_VVV_hww2l2v_13TeV_0jmm_AccDen_events230->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_hww2l2v_13TeV_0jmm_AccDen_events230->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_hww2l2v_13TeV_0jmm_AccDen_events230->GetYaxis()->SetTitleFont(42);
   new_histo_group_VVV_hww2l2v_13TeV_0jmm_AccDen_events230->GetZaxis()->SetLabelFont(42);
   new_histo_group_VVV_hww2l2v_13TeV_0jmm_AccDen_events230->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_hww2l2v_13TeV_0jmm_AccDen_events230->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_hww2l2v_13TeV_0jmm_AccDen_events230->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_hww2l2v_13TeV_0jmm_AccDen_events->Add(new_histo_group_VVV_hww2l2v_13TeV_0jmm_AccDen_events,"");
   
   TH1D *new_histo_group_VZ_hww2l2v_13TeV_0jmm_AccDen_events231 = new TH1D("new_histo_group_VZ_hww2l2v_13TeV_0jmm_AccDen_events231","histo_Vg",1,0,2);
   new_histo_group_VZ_hww2l2v_13TeV_0jmm_AccDen_events231->SetBinContent(1,748.6249);
   new_histo_group_VZ_hww2l2v_13TeV_0jmm_AccDen_events231->SetBinError(1,99.6205);
   new_histo_group_VZ_hww2l2v_13TeV_0jmm_AccDen_events231->SetEntries(55245);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_VZ_hww2l2v_13TeV_0jmm_AccDen_events231->SetFillColor(ci);
   new_histo_group_VZ_hww2l2v_13TeV_0jmm_AccDen_events231->SetFillStyle(3001);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_VZ_hww2l2v_13TeV_0jmm_AccDen_events231->SetLineColor(ci);
   new_histo_group_VZ_hww2l2v_13TeV_0jmm_AccDen_events231->GetXaxis()->SetLabelFont(42);
   new_histo_group_VZ_hww2l2v_13TeV_0jmm_AccDen_events231->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_VZ_hww2l2v_13TeV_0jmm_AccDen_events231->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_VZ_hww2l2v_13TeV_0jmm_AccDen_events231->GetXaxis()->SetTitleFont(42);
   new_histo_group_VZ_hww2l2v_13TeV_0jmm_AccDen_events231->GetYaxis()->SetLabelFont(42);
   new_histo_group_VZ_hww2l2v_13TeV_0jmm_AccDen_events231->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_VZ_hww2l2v_13TeV_0jmm_AccDen_events231->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_VZ_hww2l2v_13TeV_0jmm_AccDen_events231->GetYaxis()->SetTitleFont(42);
   new_histo_group_VZ_hww2l2v_13TeV_0jmm_AccDen_events231->GetZaxis()->SetLabelFont(42);
   new_histo_group_VZ_hww2l2v_13TeV_0jmm_AccDen_events231->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_VZ_hww2l2v_13TeV_0jmm_AccDen_events231->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_VZ_hww2l2v_13TeV_0jmm_AccDen_events231->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_hww2l2v_13TeV_0jmm_AccDen_events->Add(new_histo_group_VZ_hww2l2v_13TeV_0jmm_AccDen_events,"");
   
   TH1D *new_histo_group_Higgs_hww2l2v_13TeV_0jmm_AccDen_events232 = new TH1D("new_histo_group_Higgs_hww2l2v_13TeV_0jmm_AccDen_events232","histo_H_htt",1,0,2);
   new_histo_group_Higgs_hww2l2v_13TeV_0jmm_AccDen_events232->SetBinContent(1,562.7204);
   new_histo_group_Higgs_hww2l2v_13TeV_0jmm_AccDen_events232->SetBinError(1,6.339564);
   new_histo_group_Higgs_hww2l2v_13TeV_0jmm_AccDen_events232->SetEntries(10714);
   new_histo_group_Higgs_hww2l2v_13TeV_0jmm_AccDen_events232->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_hww2l2v_13TeV_0jmm_AccDen_events232->SetLineColor(ci);
   new_histo_group_Higgs_hww2l2v_13TeV_0jmm_AccDen_events232->SetLineWidth(2);
   new_histo_group_Higgs_hww2l2v_13TeV_0jmm_AccDen_events232->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_hww2l2v_13TeV_0jmm_AccDen_events232->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_hww2l2v_13TeV_0jmm_AccDen_events232->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_hww2l2v_13TeV_0jmm_AccDen_events232->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_hww2l2v_13TeV_0jmm_AccDen_events232->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_hww2l2v_13TeV_0jmm_AccDen_events232->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_hww2l2v_13TeV_0jmm_AccDen_events232->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_hww2l2v_13TeV_0jmm_AccDen_events232->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_hww2l2v_13TeV_0jmm_AccDen_events232->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_hww2l2v_13TeV_0jmm_AccDen_events232->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_hww2l2v_13TeV_0jmm_AccDen_events232->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_hww2l2v_13TeV_0jmm_AccDen_events232->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_hww2l2v_13TeV_0jmm_AccDen_events->Add(new_histo_group_Higgs_hww2l2v_13TeV_0jmm_AccDen_events,"");
   thsBackground_grouped_hww2l2v_13TeV_0jmm_AccDen_events->Draw("hist same");
   
   thsSignal_grouped_hww2l2v_13TeV_0jmm_AccDen_events = new THStack();
   thsSignal_grouped_hww2l2v_13TeV_0jmm_AccDen_events->SetName("thsSignal_grouped_hww2l2v_13TeV_0jmm_AccDen_events");
   thsSignal_grouped_hww2l2v_13TeV_0jmm_AccDen_events->SetTitle("thsSignal_grouped_hww2l2v_13TeV_0jmm_AccDen_events");
   
   TH1F *thsSignal_grouped_hww2l2v_13TeV_0jmm_AccDen_events_stack_52 = new TH1F("thsSignal_grouped_hww2l2v_13TeV_0jmm_AccDen_events_stack_52","thsSignal_grouped_hww2l2v_13TeV_0jmm_AccDen_events",1,0,2);
   thsSignal_grouped_hww2l2v_13TeV_0jmm_AccDen_events_stack_52->SetMinimum(0);
   thsSignal_grouped_hww2l2v_13TeV_0jmm_AccDen_events_stack_52->SetMaximum(597.513);
   thsSignal_grouped_hww2l2v_13TeV_0jmm_AccDen_events_stack_52->SetDirectory(0);
   thsSignal_grouped_hww2l2v_13TeV_0jmm_AccDen_events_stack_52->SetStats(0);
   thsSignal_grouped_hww2l2v_13TeV_0jmm_AccDen_events_stack_52->SetLineStyle(0);
   thsSignal_grouped_hww2l2v_13TeV_0jmm_AccDen_events_stack_52->SetMarkerStyle(20);
   thsSignal_grouped_hww2l2v_13TeV_0jmm_AccDen_events_stack_52->GetXaxis()->SetLabelFont(42);
   thsSignal_grouped_hww2l2v_13TeV_0jmm_AccDen_events_stack_52->GetXaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_hww2l2v_13TeV_0jmm_AccDen_events_stack_52->GetXaxis()->SetLabelSize(0.05);
   thsSignal_grouped_hww2l2v_13TeV_0jmm_AccDen_events_stack_52->GetXaxis()->SetTitleSize(0.06);
   thsSignal_grouped_hww2l2v_13TeV_0jmm_AccDen_events_stack_52->GetXaxis()->SetTitleOffset(0.9);
   thsSignal_grouped_hww2l2v_13TeV_0jmm_AccDen_events_stack_52->GetXaxis()->SetTitleFont(42);
   thsSignal_grouped_hww2l2v_13TeV_0jmm_AccDen_events_stack_52->GetYaxis()->SetLabelFont(42);
   thsSignal_grouped_hww2l2v_13TeV_0jmm_AccDen_events_stack_52->GetYaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_hww2l2v_13TeV_0jmm_AccDen_events_stack_52->GetYaxis()->SetLabelSize(0.05);
   thsSignal_grouped_hww2l2v_13TeV_0jmm_AccDen_events_stack_52->GetYaxis()->SetTitleSize(0.06);
   thsSignal_grouped_hww2l2v_13TeV_0jmm_AccDen_events_stack_52->GetYaxis()->SetTitleOffset(1.25);
   thsSignal_grouped_hww2l2v_13TeV_0jmm_AccDen_events_stack_52->GetYaxis()->SetTitleFont(42);
   thsSignal_grouped_hww2l2v_13TeV_0jmm_AccDen_events_stack_52->GetZaxis()->SetLabelFont(42);
   thsSignal_grouped_hww2l2v_13TeV_0jmm_AccDen_events_stack_52->GetZaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_hww2l2v_13TeV_0jmm_AccDen_events_stack_52->GetZaxis()->SetLabelSize(0.05);
   thsSignal_grouped_hww2l2v_13TeV_0jmm_AccDen_events_stack_52->GetZaxis()->SetTitleSize(0.06);
   thsSignal_grouped_hww2l2v_13TeV_0jmm_AccDen_events_stack_52->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_hww2l2v_13TeV_0jmm_AccDen_events->SetHistogram(thsSignal_grouped_hww2l2v_13TeV_0jmm_AccDen_events_stack_52);
   
   
   TH1D *new_histo_group_Higgs_hww2l2v_13TeV_0jmm_AccDen_events233 = new TH1D("new_histo_group_Higgs_hww2l2v_13TeV_0jmm_AccDen_events233","histo_H_htt",1,0,2);
   new_histo_group_Higgs_hww2l2v_13TeV_0jmm_AccDen_events233->SetBinContent(1,562.7204);
   new_histo_group_Higgs_hww2l2v_13TeV_0jmm_AccDen_events233->SetBinError(1,6.339564);
   new_histo_group_Higgs_hww2l2v_13TeV_0jmm_AccDen_events233->SetEntries(10714);
   new_histo_group_Higgs_hww2l2v_13TeV_0jmm_AccDen_events233->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_hww2l2v_13TeV_0jmm_AccDen_events233->SetLineColor(ci);
   new_histo_group_Higgs_hww2l2v_13TeV_0jmm_AccDen_events233->SetLineWidth(2);
   new_histo_group_Higgs_hww2l2v_13TeV_0jmm_AccDen_events233->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_hww2l2v_13TeV_0jmm_AccDen_events233->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_hww2l2v_13TeV_0jmm_AccDen_events233->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_hww2l2v_13TeV_0jmm_AccDen_events233->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_hww2l2v_13TeV_0jmm_AccDen_events233->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_hww2l2v_13TeV_0jmm_AccDen_events233->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_hww2l2v_13TeV_0jmm_AccDen_events233->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_hww2l2v_13TeV_0jmm_AccDen_events233->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_hww2l2v_13TeV_0jmm_AccDen_events233->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_hww2l2v_13TeV_0jmm_AccDen_events233->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_hww2l2v_13TeV_0jmm_AccDen_events233->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_hww2l2v_13TeV_0jmm_AccDen_events233->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_hww2l2v_13TeV_0jmm_AccDen_events->Add(new_histo_group_Higgs_hww2l2v_13TeV_0jmm_AccDen_events,"");
   thsSignal_grouped_hww2l2v_13TeV_0jmm_AccDen_events->Draw("hist same noclear");
   
   Double_t _fx3033[1] = {
   1};
   Double_t _fy3033[1] = {
   94119};
   Double_t _felx3033[1] = {
   1};
   Double_t _fely3033[1] = {
   306.7943};
   Double_t _fehx3033[1] = {
   1};
   Double_t _fehy3033[1] = {
   307.796};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(1,_fx3033,_fy3033,_felx3033,_fehx3033,_fely3033,_fehy3033);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(1);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3033 = new TH1F("Graph_Graph3033","",100,0,2.2);
   Graph_Graph3033->SetMinimum(93750.75);
   Graph_Graph3033->SetMaximum(94488.25);
   Graph_Graph3033->SetDirectory(0);
   Graph_Graph3033->SetStats(0);
   Graph_Graph3033->SetLineStyle(0);
   Graph_Graph3033->SetMarkerStyle(20);
   Graph_Graph3033->GetXaxis()->SetLabelFont(42);
   Graph_Graph3033->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3033->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3033->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3033->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3033->GetXaxis()->SetTitleFont(42);
   Graph_Graph3033->GetYaxis()->SetLabelFont(42);
   Graph_Graph3033->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3033->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3033->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3033->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3033->GetYaxis()->SetTitleFont(42);
   Graph_Graph3033->GetZaxis()->SetLabelFont(42);
   Graph_Graph3033->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3033->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3033->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3033->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3033);
   
   grae->Draw("p0");
   
   TLegend *leg = new TLegend(0.2,0.7,0.8,0.9,NULL,"brNDC");
   leg->SetTextFont(62);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("new_histo_group_DY_hww2l2v_13TeV_0jmm_AccDen_events","DY","F");

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
   entry=leg->AddEntry("new_histo_group_top_hww2l2v_13TeV_0jmm_AccDen_events","tW and t#bart","F");

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
   entry=leg->AddEntry("new_histo_group_WW_hww2l2v_13TeV_0jmm_AccDen_events","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_hww2l2v_13TeV_0jmm_AccDen_events","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_VZ_hww2l2v_13TeV_0jmm_AccDen_events","VZ/#gamma*/#gamma","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_hww2l2v_13TeV_0jmm_AccDen_events","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_hww2l2v_13TeV_0jmm_AccDen_events","Data","EPL");
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
   entry=leg->AddEntry("new_histo_group_DY_hww2l2v_13TeV_0jmm_AccDen_events","DY","F");

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
   entry=leg->AddEntry("new_histo_group_top_hww2l2v_13TeV_0jmm_AccDen_events","tW and t#bart","F");

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
   entry=leg->AddEntry("new_histo_group_WW_hww2l2v_13TeV_0jmm_AccDen_events","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_hww2l2v_13TeV_0jmm_AccDen_events","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_VZ_hww2l2v_13TeV_0jmm_AccDen_events","VZ/#gamma*/#gamma","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_hww2l2v_13TeV_0jmm_AccDen_events","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_hww2l2v_13TeV_0jmm_AccDen_events","Data","EPL");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   leg->Draw();
   
   TH1F *hframe_copy234 = new TH1F("hframe_copy234","",1000,0,2);
   hframe_copy234->SetMinimum(0);
   hframe_copy234->SetMaximum(236064.5);
   hframe_copy234->SetDirectory(0);
   hframe_copy234->SetStats(0);
   hframe_copy234->SetLineStyle(0);
   hframe_copy234->SetMarkerStyle(20);
   hframe_copy234->GetXaxis()->SetTitle("events");
   hframe_copy234->GetXaxis()->SetNdivisions(506);
   hframe_copy234->GetXaxis()->SetLabelFont(42);
   hframe_copy234->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy234->GetXaxis()->SetLabelSize(0.05);
   hframe_copy234->GetXaxis()->SetTitleSize(0.06);
   hframe_copy234->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy234->GetXaxis()->SetTitleFont(42);
   hframe_copy234->GetYaxis()->SetTitle("Events");
   hframe_copy234->GetYaxis()->SetLabelFont(42);
   hframe_copy234->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy234->GetYaxis()->SetLabelSize(0.05);
   hframe_copy234->GetYaxis()->SetTitleSize(0.06);
   hframe_copy234->GetYaxis()->SetTitleOffset(1.25);
   hframe_copy234->GetYaxis()->SetTitleFont(42);
   hframe_copy234->GetZaxis()->SetLabelFont(42);
   hframe_copy234->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy234->GetZaxis()->SetLabelSize(0.05);
   hframe_copy234->GetZaxis()->SetTitleSize(0.06);
   hframe_copy234->GetZaxis()->SetTitleFont(42);
   hframe_copy234->Draw("sameaxis");
   cchww2l2v_13TeV_0jmm_AccDen_events->Modified();
   cchww2l2v_13TeV_0jmm_AccDen_events->cd();
   cchww2l2v_13TeV_0jmm_AccDen_events->SetSelected(cchww2l2v_13TeV_0jmm_AccDen_events);
}
