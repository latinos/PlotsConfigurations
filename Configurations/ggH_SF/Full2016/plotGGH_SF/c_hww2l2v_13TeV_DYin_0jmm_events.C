void c_hww2l2v_13TeV_DYin_0jmm_events()
{
//=========Macro generated from canvas: cchww2l2v_13TeV_DYin_0jmm_events/cc
//=========  (Tue Mar 21 11:46:14 2017) by ROOT version6.02/13
   TCanvas *cchww2l2v_13TeV_DYin_0jmm_events = new TCanvas("cchww2l2v_13TeV_DYin_0jmm_events", "cc",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   cchww2l2v_13TeV_DYin_0jmm_events->SetHighLightColor(2);
   cchww2l2v_13TeV_DYin_0jmm_events->Range(-0.4,-14130.09,2.1,94562.94);
   cchww2l2v_13TeV_DYin_0jmm_events->SetFillColor(0);
   cchww2l2v_13TeV_DYin_0jmm_events->SetBorderMode(0);
   cchww2l2v_13TeV_DYin_0jmm_events->SetBorderSize(2);
   cchww2l2v_13TeV_DYin_0jmm_events->SetTickx(1);
   cchww2l2v_13TeV_DYin_0jmm_events->SetTicky(1);
   cchww2l2v_13TeV_DYin_0jmm_events->SetLeftMargin(0.16);
   cchww2l2v_13TeV_DYin_0jmm_events->SetRightMargin(0.04);
   cchww2l2v_13TeV_DYin_0jmm_events->SetTopMargin(0.05);
   cchww2l2v_13TeV_DYin_0jmm_events->SetBottomMargin(0.13);
   cchww2l2v_13TeV_DYin_0jmm_events->SetFrameFillStyle(0);
   cchww2l2v_13TeV_DYin_0jmm_events->SetFrameBorderMode(0);
   cchww2l2v_13TeV_DYin_0jmm_events->SetFrameFillStyle(0);
   cchww2l2v_13TeV_DYin_0jmm_events->SetFrameBorderMode(0);
   
   TH1F *hframe28 = new TH1F("hframe28","",1000,0,2);
   hframe28->SetMinimum(0);
   hframe28->SetMaximum(89128.29);
   hframe28->SetDirectory(0);
   hframe28->SetStats(0);
   hframe28->SetLineStyle(0);
   hframe28->SetMarkerStyle(20);
   hframe28->GetXaxis()->SetTitle("events");
   hframe28->GetXaxis()->SetNdivisions(506);
   hframe28->GetXaxis()->SetLabelFont(42);
   hframe28->GetXaxis()->SetLabelOffset(0.007);
   hframe28->GetXaxis()->SetLabelSize(0.05);
   hframe28->GetXaxis()->SetTitleSize(0.06);
   hframe28->GetXaxis()->SetTitleOffset(0.9);
   hframe28->GetXaxis()->SetTitleFont(42);
   hframe28->GetYaxis()->SetTitle("Events");
   hframe28->GetYaxis()->SetLabelFont(42);
   hframe28->GetYaxis()->SetLabelOffset(0.007);
   hframe28->GetYaxis()->SetLabelSize(0.05);
   hframe28->GetYaxis()->SetTitleSize(0.06);
   hframe28->GetYaxis()->SetTitleOffset(1.25);
   hframe28->GetYaxis()->SetTitleFont(42);
   hframe28->GetZaxis()->SetLabelFont(42);
   hframe28->GetZaxis()->SetLabelOffset(0.007);
   hframe28->GetZaxis()->SetLabelSize(0.05);
   hframe28->GetZaxis()->SetTitleSize(0.06);
   hframe28->GetZaxis()->SetTitleFont(42);
   hframe28->Draw(" ");
   
   THStack *thsBackground_grouped_hww2l2v_13TeV_DYin_0jmm_events = new THStack();
   thsBackground_grouped_hww2l2v_13TeV_DYin_0jmm_events->SetName("thsBackground_grouped_hww2l2v_13TeV_DYin_0jmm_events");
   thsBackground_grouped_hww2l2v_13TeV_DYin_0jmm_events->SetTitle("thsBackground_grouped_hww2l2v_13TeV_DYin_0jmm_events");
   
   TH1F *thsBackground_grouped_hww2l2v_13TeV_DYin_0jmm_events_stack_7 = new TH1F("thsBackground_grouped_hww2l2v_13TeV_DYin_0jmm_events_stack_7","thsBackground_grouped_hww2l2v_13TeV_DYin_0jmm_events",1,0,2);
   thsBackground_grouped_hww2l2v_13TeV_DYin_0jmm_events_stack_7->SetMinimum(0);
   thsBackground_grouped_hww2l2v_13TeV_DYin_0jmm_events_stack_7->SetMaximum(16952.64);
   thsBackground_grouped_hww2l2v_13TeV_DYin_0jmm_events_stack_7->SetDirectory(0);
   thsBackground_grouped_hww2l2v_13TeV_DYin_0jmm_events_stack_7->SetStats(0);
   thsBackground_grouped_hww2l2v_13TeV_DYin_0jmm_events_stack_7->SetLineStyle(0);
   thsBackground_grouped_hww2l2v_13TeV_DYin_0jmm_events_stack_7->SetMarkerStyle(20);
   thsBackground_grouped_hww2l2v_13TeV_DYin_0jmm_events_stack_7->GetXaxis()->SetLabelFont(42);
   thsBackground_grouped_hww2l2v_13TeV_DYin_0jmm_events_stack_7->GetXaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_hww2l2v_13TeV_DYin_0jmm_events_stack_7->GetXaxis()->SetLabelSize(0.05);
   thsBackground_grouped_hww2l2v_13TeV_DYin_0jmm_events_stack_7->GetXaxis()->SetTitleSize(0.06);
   thsBackground_grouped_hww2l2v_13TeV_DYin_0jmm_events_stack_7->GetXaxis()->SetTitleOffset(0.9);
   thsBackground_grouped_hww2l2v_13TeV_DYin_0jmm_events_stack_7->GetXaxis()->SetTitleFont(42);
   thsBackground_grouped_hww2l2v_13TeV_DYin_0jmm_events_stack_7->GetYaxis()->SetLabelFont(42);
   thsBackground_grouped_hww2l2v_13TeV_DYin_0jmm_events_stack_7->GetYaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_hww2l2v_13TeV_DYin_0jmm_events_stack_7->GetYaxis()->SetLabelSize(0.05);
   thsBackground_grouped_hww2l2v_13TeV_DYin_0jmm_events_stack_7->GetYaxis()->SetTitleSize(0.06);
   thsBackground_grouped_hww2l2v_13TeV_DYin_0jmm_events_stack_7->GetYaxis()->SetTitleOffset(1.25);
   thsBackground_grouped_hww2l2v_13TeV_DYin_0jmm_events_stack_7->GetYaxis()->SetTitleFont(42);
   thsBackground_grouped_hww2l2v_13TeV_DYin_0jmm_events_stack_7->GetZaxis()->SetLabelFont(42);
   thsBackground_grouped_hww2l2v_13TeV_DYin_0jmm_events_stack_7->GetZaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_hww2l2v_13TeV_DYin_0jmm_events_stack_7->GetZaxis()->SetLabelSize(0.05);
   thsBackground_grouped_hww2l2v_13TeV_DYin_0jmm_events_stack_7->GetZaxis()->SetTitleSize(0.06);
   thsBackground_grouped_hww2l2v_13TeV_DYin_0jmm_events_stack_7->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_hww2l2v_13TeV_DYin_0jmm_events->SetHistogram(thsBackground_grouped_hww2l2v_13TeV_DYin_0jmm_events_stack_7);
   
   
   TH1D *new_histo_group_DY_hww2l2v_13TeV_DYin_0jmm_events29 = new TH1D("new_histo_group_DY_hww2l2v_13TeV_DYin_0jmm_events29","histo_DY",1,0,2);
   new_histo_group_DY_hww2l2v_13TeV_DYin_0jmm_events29->SetBinContent(1,14194.07);
   new_histo_group_DY_hww2l2v_13TeV_DYin_0jmm_events29->SetBinError(1,268.6075);
   new_histo_group_DY_hww2l2v_13TeV_DYin_0jmm_events29->SetEntries(11739);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#009900");
   new_histo_group_DY_hww2l2v_13TeV_DYin_0jmm_events29->SetFillColor(ci);
   new_histo_group_DY_hww2l2v_13TeV_DYin_0jmm_events29->SetFillStyle(3001);

   ci = TColor::GetColor("#009900");
   new_histo_group_DY_hww2l2v_13TeV_DYin_0jmm_events29->SetLineColor(ci);
   new_histo_group_DY_hww2l2v_13TeV_DYin_0jmm_events29->GetXaxis()->SetLabelFont(42);
   new_histo_group_DY_hww2l2v_13TeV_DYin_0jmm_events29->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_DY_hww2l2v_13TeV_DYin_0jmm_events29->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_DY_hww2l2v_13TeV_DYin_0jmm_events29->GetXaxis()->SetTitleFont(42);
   new_histo_group_DY_hww2l2v_13TeV_DYin_0jmm_events29->GetYaxis()->SetLabelFont(42);
   new_histo_group_DY_hww2l2v_13TeV_DYin_0jmm_events29->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_DY_hww2l2v_13TeV_DYin_0jmm_events29->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_DY_hww2l2v_13TeV_DYin_0jmm_events29->GetYaxis()->SetTitleFont(42);
   new_histo_group_DY_hww2l2v_13TeV_DYin_0jmm_events29->GetZaxis()->SetLabelFont(42);
   new_histo_group_DY_hww2l2v_13TeV_DYin_0jmm_events29->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_DY_hww2l2v_13TeV_DYin_0jmm_events29->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_DY_hww2l2v_13TeV_DYin_0jmm_events29->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_hww2l2v_13TeV_DYin_0jmm_events->Add(new_histo_group_DY_hww2l2v_13TeV_DYin_0jmm_events,"");
   
   TH1D *new_histo_group_top_hww2l2v_13TeV_DYin_0jmm_events30 = new TH1D("new_histo_group_top_hww2l2v_13TeV_DYin_0jmm_events30","histo_top",1,0,2);
   new_histo_group_top_hww2l2v_13TeV_DYin_0jmm_events30->SetBinContent(1,103.4261);
   new_histo_group_top_hww2l2v_13TeV_DYin_0jmm_events30->SetBinError(1,2.097323);
   new_histo_group_top_hww2l2v_13TeV_DYin_0jmm_events30->SetEntries(2717);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_top_hww2l2v_13TeV_DYin_0jmm_events30->SetFillColor(ci);
   new_histo_group_top_hww2l2v_13TeV_DYin_0jmm_events30->SetFillStyle(3001);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_top_hww2l2v_13TeV_DYin_0jmm_events30->SetLineColor(ci);
   new_histo_group_top_hww2l2v_13TeV_DYin_0jmm_events30->GetXaxis()->SetLabelFont(42);
   new_histo_group_top_hww2l2v_13TeV_DYin_0jmm_events30->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_top_hww2l2v_13TeV_DYin_0jmm_events30->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_top_hww2l2v_13TeV_DYin_0jmm_events30->GetXaxis()->SetTitleFont(42);
   new_histo_group_top_hww2l2v_13TeV_DYin_0jmm_events30->GetYaxis()->SetLabelFont(42);
   new_histo_group_top_hww2l2v_13TeV_DYin_0jmm_events30->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_top_hww2l2v_13TeV_DYin_0jmm_events30->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_top_hww2l2v_13TeV_DYin_0jmm_events30->GetYaxis()->SetTitleFont(42);
   new_histo_group_top_hww2l2v_13TeV_DYin_0jmm_events30->GetZaxis()->SetLabelFont(42);
   new_histo_group_top_hww2l2v_13TeV_DYin_0jmm_events30->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_top_hww2l2v_13TeV_DYin_0jmm_events30->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_top_hww2l2v_13TeV_DYin_0jmm_events30->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_hww2l2v_13TeV_DYin_0jmm_events->Add(new_histo_group_top_hww2l2v_13TeV_DYin_0jmm_events,"");
   
   TH1D *new_histo_group_WW_hww2l2v_13TeV_DYin_0jmm_events31 = new TH1D("new_histo_group_WW_hww2l2v_13TeV_DYin_0jmm_events31","histo_WW",1,0,2);
   new_histo_group_WW_hww2l2v_13TeV_DYin_0jmm_events31->SetBinContent(1,529.5829);
   new_histo_group_WW_hww2l2v_13TeV_DYin_0jmm_events31->SetBinError(1,10.39721);
   new_histo_group_WW_hww2l2v_13TeV_DYin_0jmm_events31->SetEntries(3571);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_hww2l2v_13TeV_DYin_0jmm_events31->SetFillColor(ci);
   new_histo_group_WW_hww2l2v_13TeV_DYin_0jmm_events31->SetFillStyle(3001);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_hww2l2v_13TeV_DYin_0jmm_events31->SetLineColor(ci);
   new_histo_group_WW_hww2l2v_13TeV_DYin_0jmm_events31->GetXaxis()->SetLabelFont(42);
   new_histo_group_WW_hww2l2v_13TeV_DYin_0jmm_events31->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WW_hww2l2v_13TeV_DYin_0jmm_events31->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WW_hww2l2v_13TeV_DYin_0jmm_events31->GetXaxis()->SetTitleFont(42);
   new_histo_group_WW_hww2l2v_13TeV_DYin_0jmm_events31->GetYaxis()->SetLabelFont(42);
   new_histo_group_WW_hww2l2v_13TeV_DYin_0jmm_events31->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WW_hww2l2v_13TeV_DYin_0jmm_events31->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WW_hww2l2v_13TeV_DYin_0jmm_events31->GetYaxis()->SetTitleFont(42);
   new_histo_group_WW_hww2l2v_13TeV_DYin_0jmm_events31->GetZaxis()->SetLabelFont(42);
   new_histo_group_WW_hww2l2v_13TeV_DYin_0jmm_events31->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WW_hww2l2v_13TeV_DYin_0jmm_events31->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WW_hww2l2v_13TeV_DYin_0jmm_events31->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_hww2l2v_13TeV_DYin_0jmm_events->Add(new_histo_group_WW_hww2l2v_13TeV_DYin_0jmm_events,"");
   
   TH1D *new_histo_group_VVV_hww2l2v_13TeV_DYin_0jmm_events32 = new TH1D("new_histo_group_VVV_hww2l2v_13TeV_DYin_0jmm_events32","histo_VVV",1,0,2);
   new_histo_group_VVV_hww2l2v_13TeV_DYin_0jmm_events32->SetBinContent(1,1.767679);
   new_histo_group_VVV_hww2l2v_13TeV_DYin_0jmm_events32->SetBinError(1,0.1905405);
   new_histo_group_VVV_hww2l2v_13TeV_DYin_0jmm_events32->SetEntries(321);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_hww2l2v_13TeV_DYin_0jmm_events32->SetFillColor(ci);
   new_histo_group_VVV_hww2l2v_13TeV_DYin_0jmm_events32->SetFillStyle(3001);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_hww2l2v_13TeV_DYin_0jmm_events32->SetLineColor(ci);
   new_histo_group_VVV_hww2l2v_13TeV_DYin_0jmm_events32->GetXaxis()->SetLabelFont(42);
   new_histo_group_VVV_hww2l2v_13TeV_DYin_0jmm_events32->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_hww2l2v_13TeV_DYin_0jmm_events32->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_hww2l2v_13TeV_DYin_0jmm_events32->GetXaxis()->SetTitleFont(42);
   new_histo_group_VVV_hww2l2v_13TeV_DYin_0jmm_events32->GetYaxis()->SetLabelFont(42);
   new_histo_group_VVV_hww2l2v_13TeV_DYin_0jmm_events32->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_hww2l2v_13TeV_DYin_0jmm_events32->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_hww2l2v_13TeV_DYin_0jmm_events32->GetYaxis()->SetTitleFont(42);
   new_histo_group_VVV_hww2l2v_13TeV_DYin_0jmm_events32->GetZaxis()->SetLabelFont(42);
   new_histo_group_VVV_hww2l2v_13TeV_DYin_0jmm_events32->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_hww2l2v_13TeV_DYin_0jmm_events32->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_hww2l2v_13TeV_DYin_0jmm_events32->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_hww2l2v_13TeV_DYin_0jmm_events->Add(new_histo_group_VVV_hww2l2v_13TeV_DYin_0jmm_events,"");
   
   TH1D *new_histo_group_VZ_hww2l2v_13TeV_DYin_0jmm_events33 = new TH1D("new_histo_group_VZ_hww2l2v_13TeV_DYin_0jmm_events33","histo_Vg",1,0,2);
   new_histo_group_VZ_hww2l2v_13TeV_DYin_0jmm_events33->SetBinContent(1,1314.149);
   new_histo_group_VZ_hww2l2v_13TeV_DYin_0jmm_events33->SetBinError(1,37.05486);
   new_histo_group_VZ_hww2l2v_13TeV_DYin_0jmm_events33->SetEntries(369720);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_VZ_hww2l2v_13TeV_DYin_0jmm_events33->SetFillColor(ci);
   new_histo_group_VZ_hww2l2v_13TeV_DYin_0jmm_events33->SetFillStyle(3001);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_VZ_hww2l2v_13TeV_DYin_0jmm_events33->SetLineColor(ci);
   new_histo_group_VZ_hww2l2v_13TeV_DYin_0jmm_events33->GetXaxis()->SetLabelFont(42);
   new_histo_group_VZ_hww2l2v_13TeV_DYin_0jmm_events33->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_VZ_hww2l2v_13TeV_DYin_0jmm_events33->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_VZ_hww2l2v_13TeV_DYin_0jmm_events33->GetXaxis()->SetTitleFont(42);
   new_histo_group_VZ_hww2l2v_13TeV_DYin_0jmm_events33->GetYaxis()->SetLabelFont(42);
   new_histo_group_VZ_hww2l2v_13TeV_DYin_0jmm_events33->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_VZ_hww2l2v_13TeV_DYin_0jmm_events33->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_VZ_hww2l2v_13TeV_DYin_0jmm_events33->GetYaxis()->SetTitleFont(42);
   new_histo_group_VZ_hww2l2v_13TeV_DYin_0jmm_events33->GetZaxis()->SetLabelFont(42);
   new_histo_group_VZ_hww2l2v_13TeV_DYin_0jmm_events33->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_VZ_hww2l2v_13TeV_DYin_0jmm_events33->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_VZ_hww2l2v_13TeV_DYin_0jmm_events33->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_hww2l2v_13TeV_DYin_0jmm_events->Add(new_histo_group_VZ_hww2l2v_13TeV_DYin_0jmm_events,"");
   
   TH1D *new_histo_group_Higgs_hww2l2v_13TeV_DYin_0jmm_events34 = new TH1D("new_histo_group_Higgs_hww2l2v_13TeV_DYin_0jmm_events34","histo_H_htt",1,0,2);
   new_histo_group_Higgs_hww2l2v_13TeV_DYin_0jmm_events34->SetBinContent(1,2.378784);
   new_histo_group_Higgs_hww2l2v_13TeV_DYin_0jmm_events34->SetBinError(1,0.2480795);
   new_histo_group_Higgs_hww2l2v_13TeV_DYin_0jmm_events34->SetEntries(166);
   new_histo_group_Higgs_hww2l2v_13TeV_DYin_0jmm_events34->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_hww2l2v_13TeV_DYin_0jmm_events34->SetLineColor(ci);
   new_histo_group_Higgs_hww2l2v_13TeV_DYin_0jmm_events34->SetLineWidth(2);
   new_histo_group_Higgs_hww2l2v_13TeV_DYin_0jmm_events34->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_hww2l2v_13TeV_DYin_0jmm_events34->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_hww2l2v_13TeV_DYin_0jmm_events34->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_hww2l2v_13TeV_DYin_0jmm_events34->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_hww2l2v_13TeV_DYin_0jmm_events34->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_hww2l2v_13TeV_DYin_0jmm_events34->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_hww2l2v_13TeV_DYin_0jmm_events34->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_hww2l2v_13TeV_DYin_0jmm_events34->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_hww2l2v_13TeV_DYin_0jmm_events34->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_hww2l2v_13TeV_DYin_0jmm_events34->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_hww2l2v_13TeV_DYin_0jmm_events34->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_hww2l2v_13TeV_DYin_0jmm_events34->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_hww2l2v_13TeV_DYin_0jmm_events->Add(new_histo_group_Higgs_hww2l2v_13TeV_DYin_0jmm_events,"");
   thsBackground_grouped_hww2l2v_13TeV_DYin_0jmm_events->Draw("hist same");
   
   thsSignal_grouped_hww2l2v_13TeV_DYin_0jmm_events = new THStack();
   thsSignal_grouped_hww2l2v_13TeV_DYin_0jmm_events->SetName("thsSignal_grouped_hww2l2v_13TeV_DYin_0jmm_events");
   thsSignal_grouped_hww2l2v_13TeV_DYin_0jmm_events->SetTitle("thsSignal_grouped_hww2l2v_13TeV_DYin_0jmm_events");
   
   TH1F *thsSignal_grouped_hww2l2v_13TeV_DYin_0jmm_events_stack_8 = new TH1F("thsSignal_grouped_hww2l2v_13TeV_DYin_0jmm_events_stack_8","thsSignal_grouped_hww2l2v_13TeV_DYin_0jmm_events",1,0,2);
   thsSignal_grouped_hww2l2v_13TeV_DYin_0jmm_events_stack_8->SetMinimum(0);
   thsSignal_grouped_hww2l2v_13TeV_DYin_0jmm_events_stack_8->SetMaximum(2.758207);
   thsSignal_grouped_hww2l2v_13TeV_DYin_0jmm_events_stack_8->SetDirectory(0);
   thsSignal_grouped_hww2l2v_13TeV_DYin_0jmm_events_stack_8->SetStats(0);
   thsSignal_grouped_hww2l2v_13TeV_DYin_0jmm_events_stack_8->SetLineStyle(0);
   thsSignal_grouped_hww2l2v_13TeV_DYin_0jmm_events_stack_8->SetMarkerStyle(20);
   thsSignal_grouped_hww2l2v_13TeV_DYin_0jmm_events_stack_8->GetXaxis()->SetLabelFont(42);
   thsSignal_grouped_hww2l2v_13TeV_DYin_0jmm_events_stack_8->GetXaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_hww2l2v_13TeV_DYin_0jmm_events_stack_8->GetXaxis()->SetLabelSize(0.05);
   thsSignal_grouped_hww2l2v_13TeV_DYin_0jmm_events_stack_8->GetXaxis()->SetTitleSize(0.06);
   thsSignal_grouped_hww2l2v_13TeV_DYin_0jmm_events_stack_8->GetXaxis()->SetTitleOffset(0.9);
   thsSignal_grouped_hww2l2v_13TeV_DYin_0jmm_events_stack_8->GetXaxis()->SetTitleFont(42);
   thsSignal_grouped_hww2l2v_13TeV_DYin_0jmm_events_stack_8->GetYaxis()->SetLabelFont(42);
   thsSignal_grouped_hww2l2v_13TeV_DYin_0jmm_events_stack_8->GetYaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_hww2l2v_13TeV_DYin_0jmm_events_stack_8->GetYaxis()->SetLabelSize(0.05);
   thsSignal_grouped_hww2l2v_13TeV_DYin_0jmm_events_stack_8->GetYaxis()->SetTitleSize(0.06);
   thsSignal_grouped_hww2l2v_13TeV_DYin_0jmm_events_stack_8->GetYaxis()->SetTitleOffset(1.25);
   thsSignal_grouped_hww2l2v_13TeV_DYin_0jmm_events_stack_8->GetYaxis()->SetTitleFont(42);
   thsSignal_grouped_hww2l2v_13TeV_DYin_0jmm_events_stack_8->GetZaxis()->SetLabelFont(42);
   thsSignal_grouped_hww2l2v_13TeV_DYin_0jmm_events_stack_8->GetZaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_hww2l2v_13TeV_DYin_0jmm_events_stack_8->GetZaxis()->SetLabelSize(0.05);
   thsSignal_grouped_hww2l2v_13TeV_DYin_0jmm_events_stack_8->GetZaxis()->SetTitleSize(0.06);
   thsSignal_grouped_hww2l2v_13TeV_DYin_0jmm_events_stack_8->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_hww2l2v_13TeV_DYin_0jmm_events->SetHistogram(thsSignal_grouped_hww2l2v_13TeV_DYin_0jmm_events_stack_8);
   
   
   TH1D *new_histo_group_Higgs_hww2l2v_13TeV_DYin_0jmm_events35 = new TH1D("new_histo_group_Higgs_hww2l2v_13TeV_DYin_0jmm_events35","histo_H_htt",1,0,2);
   new_histo_group_Higgs_hww2l2v_13TeV_DYin_0jmm_events35->SetBinContent(1,2.378784);
   new_histo_group_Higgs_hww2l2v_13TeV_DYin_0jmm_events35->SetBinError(1,0.2480795);
   new_histo_group_Higgs_hww2l2v_13TeV_DYin_0jmm_events35->SetEntries(166);
   new_histo_group_Higgs_hww2l2v_13TeV_DYin_0jmm_events35->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_hww2l2v_13TeV_DYin_0jmm_events35->SetLineColor(ci);
   new_histo_group_Higgs_hww2l2v_13TeV_DYin_0jmm_events35->SetLineWidth(2);
   new_histo_group_Higgs_hww2l2v_13TeV_DYin_0jmm_events35->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_hww2l2v_13TeV_DYin_0jmm_events35->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_hww2l2v_13TeV_DYin_0jmm_events35->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_hww2l2v_13TeV_DYin_0jmm_events35->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_hww2l2v_13TeV_DYin_0jmm_events35->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_hww2l2v_13TeV_DYin_0jmm_events35->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_hww2l2v_13TeV_DYin_0jmm_events35->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_hww2l2v_13TeV_DYin_0jmm_events35->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_hww2l2v_13TeV_DYin_0jmm_events35->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_hww2l2v_13TeV_DYin_0jmm_events35->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_hww2l2v_13TeV_DYin_0jmm_events35->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_hww2l2v_13TeV_DYin_0jmm_events35->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_hww2l2v_13TeV_DYin_0jmm_events->Add(new_histo_group_Higgs_hww2l2v_13TeV_DYin_0jmm_events,"");
   thsSignal_grouped_hww2l2v_13TeV_DYin_0jmm_events->Draw("hist same noclear");
   
   Double_t _fx3005[1] = {
   1};
   Double_t _fy3005[1] = {
   35463};
   Double_t _felx3005[1] = {
   1};
   Double_t _fely3005[1] = {
   188.3194};
   Double_t _fehx3005[1] = {
   1};
   Double_t _fehy3005[1] = {
   189.3221};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(1,_fx3005,_fy3005,_felx3005,_fehx3005,_fely3005,_fehy3005);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(1);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3005 = new TH1F("Graph_Graph3005","",100,0,2.2);
   Graph_Graph3005->SetMinimum(35236.92);
   Graph_Graph3005->SetMaximum(35690.09);
   Graph_Graph3005->SetDirectory(0);
   Graph_Graph3005->SetStats(0);
   Graph_Graph3005->SetLineStyle(0);
   Graph_Graph3005->SetMarkerStyle(20);
   Graph_Graph3005->GetXaxis()->SetLabelFont(42);
   Graph_Graph3005->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3005->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3005->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3005->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3005->GetXaxis()->SetTitleFont(42);
   Graph_Graph3005->GetYaxis()->SetLabelFont(42);
   Graph_Graph3005->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3005->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3005->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3005->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3005->GetYaxis()->SetTitleFont(42);
   Graph_Graph3005->GetZaxis()->SetLabelFont(42);
   Graph_Graph3005->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3005->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3005->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3005->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3005);
   
   grae->Draw("p0");
   
   TLegend *leg = new TLegend(0.2,0.7,0.8,0.9,NULL,"brNDC");
   leg->SetTextFont(62);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("new_histo_group_DY_hww2l2v_13TeV_DYin_0jmm_events","DY","F");

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
   entry=leg->AddEntry("new_histo_group_top_hww2l2v_13TeV_DYin_0jmm_events","tW and t#bart","F");

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
   entry=leg->AddEntry("new_histo_group_WW_hww2l2v_13TeV_DYin_0jmm_events","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_hww2l2v_13TeV_DYin_0jmm_events","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_VZ_hww2l2v_13TeV_DYin_0jmm_events","VZ/#gamma*/#gamma","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_hww2l2v_13TeV_DYin_0jmm_events","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_hww2l2v_13TeV_DYin_0jmm_events","Data","EPL");
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
   entry=leg->AddEntry("new_histo_group_DY_hww2l2v_13TeV_DYin_0jmm_events","DY","F");

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
   entry=leg->AddEntry("new_histo_group_top_hww2l2v_13TeV_DYin_0jmm_events","tW and t#bart","F");

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
   entry=leg->AddEntry("new_histo_group_WW_hww2l2v_13TeV_DYin_0jmm_events","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_hww2l2v_13TeV_DYin_0jmm_events","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_VZ_hww2l2v_13TeV_DYin_0jmm_events","VZ/#gamma*/#gamma","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_hww2l2v_13TeV_DYin_0jmm_events","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_hww2l2v_13TeV_DYin_0jmm_events","Data","EPL");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   leg->Draw();
   
   TH1F *hframe_copy36 = new TH1F("hframe_copy36","",1000,0,2);
   hframe_copy36->SetMinimum(0);
   hframe_copy36->SetMaximum(89128.29);
   hframe_copy36->SetDirectory(0);
   hframe_copy36->SetStats(0);
   hframe_copy36->SetLineStyle(0);
   hframe_copy36->SetMarkerStyle(20);
   hframe_copy36->GetXaxis()->SetTitle("events");
   hframe_copy36->GetXaxis()->SetNdivisions(506);
   hframe_copy36->GetXaxis()->SetLabelFont(42);
   hframe_copy36->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy36->GetXaxis()->SetLabelSize(0.05);
   hframe_copy36->GetXaxis()->SetTitleSize(0.06);
   hframe_copy36->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy36->GetXaxis()->SetTitleFont(42);
   hframe_copy36->GetYaxis()->SetTitle("Events");
   hframe_copy36->GetYaxis()->SetLabelFont(42);
   hframe_copy36->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy36->GetYaxis()->SetLabelSize(0.05);
   hframe_copy36->GetYaxis()->SetTitleSize(0.06);
   hframe_copy36->GetYaxis()->SetTitleOffset(1.25);
   hframe_copy36->GetYaxis()->SetTitleFont(42);
   hframe_copy36->GetZaxis()->SetLabelFont(42);
   hframe_copy36->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy36->GetZaxis()->SetLabelSize(0.05);
   hframe_copy36->GetZaxis()->SetTitleSize(0.06);
   hframe_copy36->GetZaxis()->SetTitleFont(42);
   hframe_copy36->Draw("sameaxis");
   cchww2l2v_13TeV_DYin_0jmm_events->Modified();
   cchww2l2v_13TeV_DYin_0jmm_events->cd();
   cchww2l2v_13TeV_DYin_0jmm_events->SetSelected(cchww2l2v_13TeV_DYin_0jmm_events);
}
