void c_hww2l2v_13TeV_top_0jee_events()
{
//=========Macro generated from canvas: cchww2l2v_13TeV_top_0jee_events/cc
//=========  (Tue Mar 21 11:46:43 2017) by ROOT version6.02/13
   TCanvas *cchww2l2v_13TeV_top_0jee_events = new TCanvas("cchww2l2v_13TeV_top_0jee_events", "cc",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   cchww2l2v_13TeV_top_0jee_events->SetHighLightColor(2);
   cchww2l2v_13TeV_top_0jee_events->Range(-0.4,-361.3439,2.1,2418.225);
   cchww2l2v_13TeV_top_0jee_events->SetFillColor(0);
   cchww2l2v_13TeV_top_0jee_events->SetBorderMode(0);
   cchww2l2v_13TeV_top_0jee_events->SetBorderSize(2);
   cchww2l2v_13TeV_top_0jee_events->SetTickx(1);
   cchww2l2v_13TeV_top_0jee_events->SetTicky(1);
   cchww2l2v_13TeV_top_0jee_events->SetLeftMargin(0.16);
   cchww2l2v_13TeV_top_0jee_events->SetRightMargin(0.04);
   cchww2l2v_13TeV_top_0jee_events->SetTopMargin(0.05);
   cchww2l2v_13TeV_top_0jee_events->SetBottomMargin(0.13);
   cchww2l2v_13TeV_top_0jee_events->SetFrameFillStyle(0);
   cchww2l2v_13TeV_top_0jee_events->SetFrameBorderMode(0);
   cchww2l2v_13TeV_top_0jee_events->SetFrameFillStyle(0);
   cchww2l2v_13TeV_top_0jee_events->SetFrameBorderMode(0);
   
   TH1F *hframe280 = new TH1F("hframe280","",1000,0,2);
   hframe280->SetMinimum(0);
   hframe280->SetMaximum(2279.246);
   hframe280->SetDirectory(0);
   hframe280->SetStats(0);
   hframe280->SetLineStyle(0);
   hframe280->SetMarkerStyle(20);
   hframe280->GetXaxis()->SetTitle("events");
   hframe280->GetXaxis()->SetNdivisions(506);
   hframe280->GetXaxis()->SetLabelFont(42);
   hframe280->GetXaxis()->SetLabelOffset(0.007);
   hframe280->GetXaxis()->SetLabelSize(0.05);
   hframe280->GetXaxis()->SetTitleSize(0.06);
   hframe280->GetXaxis()->SetTitleOffset(0.9);
   hframe280->GetXaxis()->SetTitleFont(42);
   hframe280->GetYaxis()->SetTitle("Events");
   hframe280->GetYaxis()->SetLabelFont(42);
   hframe280->GetYaxis()->SetLabelOffset(0.007);
   hframe280->GetYaxis()->SetLabelSize(0.05);
   hframe280->GetYaxis()->SetTitleSize(0.06);
   hframe280->GetYaxis()->SetTitleOffset(1.25);
   hframe280->GetYaxis()->SetTitleFont(42);
   hframe280->GetZaxis()->SetLabelFont(42);
   hframe280->GetZaxis()->SetLabelOffset(0.007);
   hframe280->GetZaxis()->SetLabelSize(0.05);
   hframe280->GetZaxis()->SetTitleSize(0.06);
   hframe280->GetZaxis()->SetTitleFont(42);
   hframe280->Draw(" ");
   
   THStack *thsBackground_grouped_hww2l2v_13TeV_top_0jee_events = new THStack();
   thsBackground_grouped_hww2l2v_13TeV_top_0jee_events->SetName("thsBackground_grouped_hww2l2v_13TeV_top_0jee_events");
   thsBackground_grouped_hww2l2v_13TeV_top_0jee_events->SetTitle("thsBackground_grouped_hww2l2v_13TeV_top_0jee_events");
   
   TH1F *thsBackground_grouped_hww2l2v_13TeV_top_0jee_events_stack_63 = new TH1F("thsBackground_grouped_hww2l2v_13TeV_top_0jee_events_stack_63","thsBackground_grouped_hww2l2v_13TeV_top_0jee_events",1,0,2);
   thsBackground_grouped_hww2l2v_13TeV_top_0jee_events_stack_63->SetMinimum(0);
   thsBackground_grouped_hww2l2v_13TeV_top_0jee_events_stack_63->SetMaximum(521.6808);
   thsBackground_grouped_hww2l2v_13TeV_top_0jee_events_stack_63->SetDirectory(0);
   thsBackground_grouped_hww2l2v_13TeV_top_0jee_events_stack_63->SetStats(0);
   thsBackground_grouped_hww2l2v_13TeV_top_0jee_events_stack_63->SetLineStyle(0);
   thsBackground_grouped_hww2l2v_13TeV_top_0jee_events_stack_63->SetMarkerStyle(20);
   thsBackground_grouped_hww2l2v_13TeV_top_0jee_events_stack_63->GetXaxis()->SetLabelFont(42);
   thsBackground_grouped_hww2l2v_13TeV_top_0jee_events_stack_63->GetXaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_hww2l2v_13TeV_top_0jee_events_stack_63->GetXaxis()->SetLabelSize(0.05);
   thsBackground_grouped_hww2l2v_13TeV_top_0jee_events_stack_63->GetXaxis()->SetTitleSize(0.06);
   thsBackground_grouped_hww2l2v_13TeV_top_0jee_events_stack_63->GetXaxis()->SetTitleOffset(0.9);
   thsBackground_grouped_hww2l2v_13TeV_top_0jee_events_stack_63->GetXaxis()->SetTitleFont(42);
   thsBackground_grouped_hww2l2v_13TeV_top_0jee_events_stack_63->GetYaxis()->SetLabelFont(42);
   thsBackground_grouped_hww2l2v_13TeV_top_0jee_events_stack_63->GetYaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_hww2l2v_13TeV_top_0jee_events_stack_63->GetYaxis()->SetLabelSize(0.05);
   thsBackground_grouped_hww2l2v_13TeV_top_0jee_events_stack_63->GetYaxis()->SetTitleSize(0.06);
   thsBackground_grouped_hww2l2v_13TeV_top_0jee_events_stack_63->GetYaxis()->SetTitleOffset(1.25);
   thsBackground_grouped_hww2l2v_13TeV_top_0jee_events_stack_63->GetYaxis()->SetTitleFont(42);
   thsBackground_grouped_hww2l2v_13TeV_top_0jee_events_stack_63->GetZaxis()->SetLabelFont(42);
   thsBackground_grouped_hww2l2v_13TeV_top_0jee_events_stack_63->GetZaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_hww2l2v_13TeV_top_0jee_events_stack_63->GetZaxis()->SetLabelSize(0.05);
   thsBackground_grouped_hww2l2v_13TeV_top_0jee_events_stack_63->GetZaxis()->SetTitleSize(0.06);
   thsBackground_grouped_hww2l2v_13TeV_top_0jee_events_stack_63->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_hww2l2v_13TeV_top_0jee_events->SetHistogram(thsBackground_grouped_hww2l2v_13TeV_top_0jee_events_stack_63);
   
   
   TH1D *new_histo_group_DY_hww2l2v_13TeV_top_0jee_events281 = new TH1D("new_histo_group_DY_hww2l2v_13TeV_top_0jee_events281","histo_DY",1,0,2);
   new_histo_group_DY_hww2l2v_13TeV_top_0jee_events281->SetBinContent(1,125.4656);
   new_histo_group_DY_hww2l2v_13TeV_top_0jee_events281->SetBinError(1,43.49383);
   new_histo_group_DY_hww2l2v_13TeV_top_0jee_events281->SetEntries(39);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#009900");
   new_histo_group_DY_hww2l2v_13TeV_top_0jee_events281->SetFillColor(ci);
   new_histo_group_DY_hww2l2v_13TeV_top_0jee_events281->SetFillStyle(3001);

   ci = TColor::GetColor("#009900");
   new_histo_group_DY_hww2l2v_13TeV_top_0jee_events281->SetLineColor(ci);
   new_histo_group_DY_hww2l2v_13TeV_top_0jee_events281->GetXaxis()->SetLabelFont(42);
   new_histo_group_DY_hww2l2v_13TeV_top_0jee_events281->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_DY_hww2l2v_13TeV_top_0jee_events281->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_DY_hww2l2v_13TeV_top_0jee_events281->GetXaxis()->SetTitleFont(42);
   new_histo_group_DY_hww2l2v_13TeV_top_0jee_events281->GetYaxis()->SetLabelFont(42);
   new_histo_group_DY_hww2l2v_13TeV_top_0jee_events281->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_DY_hww2l2v_13TeV_top_0jee_events281->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_DY_hww2l2v_13TeV_top_0jee_events281->GetYaxis()->SetTitleFont(42);
   new_histo_group_DY_hww2l2v_13TeV_top_0jee_events281->GetZaxis()->SetLabelFont(42);
   new_histo_group_DY_hww2l2v_13TeV_top_0jee_events281->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_DY_hww2l2v_13TeV_top_0jee_events281->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_DY_hww2l2v_13TeV_top_0jee_events281->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_hww2l2v_13TeV_top_0jee_events->Add(new_histo_group_DY_hww2l2v_13TeV_top_0jee_events,"");
   
   TH1D *new_histo_group_top_hww2l2v_13TeV_top_0jee_events282 = new TH1D("new_histo_group_top_hww2l2v_13TeV_top_0jee_events282","histo_top",1,0,2);
   new_histo_group_top_hww2l2v_13TeV_top_0jee_events282->SetBinContent(1,288.9527);
   new_histo_group_top_hww2l2v_13TeV_top_0jee_events282->SetBinError(1,3.255144);
   new_histo_group_top_hww2l2v_13TeV_top_0jee_events282->SetEntries(8721);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_top_hww2l2v_13TeV_top_0jee_events282->SetFillColor(ci);
   new_histo_group_top_hww2l2v_13TeV_top_0jee_events282->SetFillStyle(3001);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_top_hww2l2v_13TeV_top_0jee_events282->SetLineColor(ci);
   new_histo_group_top_hww2l2v_13TeV_top_0jee_events282->GetXaxis()->SetLabelFont(42);
   new_histo_group_top_hww2l2v_13TeV_top_0jee_events282->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_top_hww2l2v_13TeV_top_0jee_events282->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_top_hww2l2v_13TeV_top_0jee_events282->GetXaxis()->SetTitleFont(42);
   new_histo_group_top_hww2l2v_13TeV_top_0jee_events282->GetYaxis()->SetLabelFont(42);
   new_histo_group_top_hww2l2v_13TeV_top_0jee_events282->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_top_hww2l2v_13TeV_top_0jee_events282->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_top_hww2l2v_13TeV_top_0jee_events282->GetYaxis()->SetTitleFont(42);
   new_histo_group_top_hww2l2v_13TeV_top_0jee_events282->GetZaxis()->SetLabelFont(42);
   new_histo_group_top_hww2l2v_13TeV_top_0jee_events282->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_top_hww2l2v_13TeV_top_0jee_events282->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_top_hww2l2v_13TeV_top_0jee_events282->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_hww2l2v_13TeV_top_0jee_events->Add(new_histo_group_top_hww2l2v_13TeV_top_0jee_events,"");
   
   TH1D *new_histo_group_WW_hww2l2v_13TeV_top_0jee_events283 = new TH1D("new_histo_group_WW_hww2l2v_13TeV_top_0jee_events283","histo_WW",1,0,2);
   new_histo_group_WW_hww2l2v_13TeV_top_0jee_events283->SetBinContent(1,46.75721);
   new_histo_group_WW_hww2l2v_13TeV_top_0jee_events283->SetBinError(1,2.905751);
   new_histo_group_WW_hww2l2v_13TeV_top_0jee_events283->SetEntries(394);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_hww2l2v_13TeV_top_0jee_events283->SetFillColor(ci);
   new_histo_group_WW_hww2l2v_13TeV_top_0jee_events283->SetFillStyle(3001);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_hww2l2v_13TeV_top_0jee_events283->SetLineColor(ci);
   new_histo_group_WW_hww2l2v_13TeV_top_0jee_events283->GetXaxis()->SetLabelFont(42);
   new_histo_group_WW_hww2l2v_13TeV_top_0jee_events283->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WW_hww2l2v_13TeV_top_0jee_events283->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WW_hww2l2v_13TeV_top_0jee_events283->GetXaxis()->SetTitleFont(42);
   new_histo_group_WW_hww2l2v_13TeV_top_0jee_events283->GetYaxis()->SetLabelFont(42);
   new_histo_group_WW_hww2l2v_13TeV_top_0jee_events283->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WW_hww2l2v_13TeV_top_0jee_events283->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WW_hww2l2v_13TeV_top_0jee_events283->GetYaxis()->SetTitleFont(42);
   new_histo_group_WW_hww2l2v_13TeV_top_0jee_events283->GetZaxis()->SetLabelFont(42);
   new_histo_group_WW_hww2l2v_13TeV_top_0jee_events283->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WW_hww2l2v_13TeV_top_0jee_events283->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WW_hww2l2v_13TeV_top_0jee_events283->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_hww2l2v_13TeV_top_0jee_events->Add(new_histo_group_WW_hww2l2v_13TeV_top_0jee_events,"");
   
   TH1D *new_histo_group_VVV_hww2l2v_13TeV_top_0jee_events284 = new TH1D("new_histo_group_VVV_hww2l2v_13TeV_top_0jee_events284","histo_VVV",1,0,2);
   new_histo_group_VVV_hww2l2v_13TeV_top_0jee_events284->SetBinContent(1,0.1867821);
   new_histo_group_VVV_hww2l2v_13TeV_top_0jee_events284->SetBinError(1,0.07656695);
   new_histo_group_VVV_hww2l2v_13TeV_top_0jee_events284->SetEntries(12);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_hww2l2v_13TeV_top_0jee_events284->SetFillColor(ci);
   new_histo_group_VVV_hww2l2v_13TeV_top_0jee_events284->SetFillStyle(3001);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_hww2l2v_13TeV_top_0jee_events284->SetLineColor(ci);
   new_histo_group_VVV_hww2l2v_13TeV_top_0jee_events284->GetXaxis()->SetLabelFont(42);
   new_histo_group_VVV_hww2l2v_13TeV_top_0jee_events284->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_hww2l2v_13TeV_top_0jee_events284->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_hww2l2v_13TeV_top_0jee_events284->GetXaxis()->SetTitleFont(42);
   new_histo_group_VVV_hww2l2v_13TeV_top_0jee_events284->GetYaxis()->SetLabelFont(42);
   new_histo_group_VVV_hww2l2v_13TeV_top_0jee_events284->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_hww2l2v_13TeV_top_0jee_events284->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_hww2l2v_13TeV_top_0jee_events284->GetYaxis()->SetTitleFont(42);
   new_histo_group_VVV_hww2l2v_13TeV_top_0jee_events284->GetZaxis()->SetLabelFont(42);
   new_histo_group_VVV_hww2l2v_13TeV_top_0jee_events284->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_hww2l2v_13TeV_top_0jee_events284->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_hww2l2v_13TeV_top_0jee_events284->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_hww2l2v_13TeV_top_0jee_events->Add(new_histo_group_VVV_hww2l2v_13TeV_top_0jee_events,"");
   
   TH1D *new_histo_group_VZ_hww2l2v_13TeV_top_0jee_events285 = new TH1D("new_histo_group_VZ_hww2l2v_13TeV_top_0jee_events285","histo_Vg",1,0,2);
   new_histo_group_VZ_hww2l2v_13TeV_top_0jee_events285->SetBinContent(1,32.1761);
   new_histo_group_VZ_hww2l2v_13TeV_top_0jee_events285->SetBinError(1,27.54253);
   new_histo_group_VZ_hww2l2v_13TeV_top_0jee_events285->SetEntries(571);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_VZ_hww2l2v_13TeV_top_0jee_events285->SetFillColor(ci);
   new_histo_group_VZ_hww2l2v_13TeV_top_0jee_events285->SetFillStyle(3001);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_VZ_hww2l2v_13TeV_top_0jee_events285->SetLineColor(ci);
   new_histo_group_VZ_hww2l2v_13TeV_top_0jee_events285->GetXaxis()->SetLabelFont(42);
   new_histo_group_VZ_hww2l2v_13TeV_top_0jee_events285->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_VZ_hww2l2v_13TeV_top_0jee_events285->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_VZ_hww2l2v_13TeV_top_0jee_events285->GetXaxis()->SetTitleFont(42);
   new_histo_group_VZ_hww2l2v_13TeV_top_0jee_events285->GetYaxis()->SetLabelFont(42);
   new_histo_group_VZ_hww2l2v_13TeV_top_0jee_events285->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_VZ_hww2l2v_13TeV_top_0jee_events285->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_VZ_hww2l2v_13TeV_top_0jee_events285->GetYaxis()->SetTitleFont(42);
   new_histo_group_VZ_hww2l2v_13TeV_top_0jee_events285->GetZaxis()->SetLabelFont(42);
   new_histo_group_VZ_hww2l2v_13TeV_top_0jee_events285->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_VZ_hww2l2v_13TeV_top_0jee_events285->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_VZ_hww2l2v_13TeV_top_0jee_events285->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_hww2l2v_13TeV_top_0jee_events->Add(new_histo_group_VZ_hww2l2v_13TeV_top_0jee_events,"");
   
   TH1D *new_histo_group_Higgs_hww2l2v_13TeV_top_0jee_events286 = new TH1D("new_histo_group_Higgs_hww2l2v_13TeV_top_0jee_events286","histo_H_htt",1,0,2);
   new_histo_group_Higgs_hww2l2v_13TeV_top_0jee_events286->SetBinContent(1,3.300479);
   new_histo_group_Higgs_hww2l2v_13TeV_top_0jee_events286->SetBinError(1,0.4500698);
   new_histo_group_Higgs_hww2l2v_13TeV_top_0jee_events286->SetEntries(83);
   new_histo_group_Higgs_hww2l2v_13TeV_top_0jee_events286->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_hww2l2v_13TeV_top_0jee_events286->SetLineColor(ci);
   new_histo_group_Higgs_hww2l2v_13TeV_top_0jee_events286->SetLineWidth(2);
   new_histo_group_Higgs_hww2l2v_13TeV_top_0jee_events286->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_hww2l2v_13TeV_top_0jee_events286->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_hww2l2v_13TeV_top_0jee_events286->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_hww2l2v_13TeV_top_0jee_events286->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_hww2l2v_13TeV_top_0jee_events286->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_hww2l2v_13TeV_top_0jee_events286->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_hww2l2v_13TeV_top_0jee_events286->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_hww2l2v_13TeV_top_0jee_events286->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_hww2l2v_13TeV_top_0jee_events286->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_hww2l2v_13TeV_top_0jee_events286->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_hww2l2v_13TeV_top_0jee_events286->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_hww2l2v_13TeV_top_0jee_events286->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_hww2l2v_13TeV_top_0jee_events->Add(new_histo_group_Higgs_hww2l2v_13TeV_top_0jee_events,"");
   thsBackground_grouped_hww2l2v_13TeV_top_0jee_events->Draw("hist same");
   
   thsSignal_grouped_hww2l2v_13TeV_top_0jee_events = new THStack();
   thsSignal_grouped_hww2l2v_13TeV_top_0jee_events->SetName("thsSignal_grouped_hww2l2v_13TeV_top_0jee_events");
   thsSignal_grouped_hww2l2v_13TeV_top_0jee_events->SetTitle("thsSignal_grouped_hww2l2v_13TeV_top_0jee_events");
   
   TH1F *thsSignal_grouped_hww2l2v_13TeV_top_0jee_events_stack_64 = new TH1F("thsSignal_grouped_hww2l2v_13TeV_top_0jee_events_stack_64","thsSignal_grouped_hww2l2v_13TeV_top_0jee_events",1,0,2);
   thsSignal_grouped_hww2l2v_13TeV_top_0jee_events_stack_64->SetMinimum(0);
   thsSignal_grouped_hww2l2v_13TeV_top_0jee_events_stack_64->SetMaximum(3.938076);
   thsSignal_grouped_hww2l2v_13TeV_top_0jee_events_stack_64->SetDirectory(0);
   thsSignal_grouped_hww2l2v_13TeV_top_0jee_events_stack_64->SetStats(0);
   thsSignal_grouped_hww2l2v_13TeV_top_0jee_events_stack_64->SetLineStyle(0);
   thsSignal_grouped_hww2l2v_13TeV_top_0jee_events_stack_64->SetMarkerStyle(20);
   thsSignal_grouped_hww2l2v_13TeV_top_0jee_events_stack_64->GetXaxis()->SetLabelFont(42);
   thsSignal_grouped_hww2l2v_13TeV_top_0jee_events_stack_64->GetXaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_hww2l2v_13TeV_top_0jee_events_stack_64->GetXaxis()->SetLabelSize(0.05);
   thsSignal_grouped_hww2l2v_13TeV_top_0jee_events_stack_64->GetXaxis()->SetTitleSize(0.06);
   thsSignal_grouped_hww2l2v_13TeV_top_0jee_events_stack_64->GetXaxis()->SetTitleOffset(0.9);
   thsSignal_grouped_hww2l2v_13TeV_top_0jee_events_stack_64->GetXaxis()->SetTitleFont(42);
   thsSignal_grouped_hww2l2v_13TeV_top_0jee_events_stack_64->GetYaxis()->SetLabelFont(42);
   thsSignal_grouped_hww2l2v_13TeV_top_0jee_events_stack_64->GetYaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_hww2l2v_13TeV_top_0jee_events_stack_64->GetYaxis()->SetLabelSize(0.05);
   thsSignal_grouped_hww2l2v_13TeV_top_0jee_events_stack_64->GetYaxis()->SetTitleSize(0.06);
   thsSignal_grouped_hww2l2v_13TeV_top_0jee_events_stack_64->GetYaxis()->SetTitleOffset(1.25);
   thsSignal_grouped_hww2l2v_13TeV_top_0jee_events_stack_64->GetYaxis()->SetTitleFont(42);
   thsSignal_grouped_hww2l2v_13TeV_top_0jee_events_stack_64->GetZaxis()->SetLabelFont(42);
   thsSignal_grouped_hww2l2v_13TeV_top_0jee_events_stack_64->GetZaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_hww2l2v_13TeV_top_0jee_events_stack_64->GetZaxis()->SetLabelSize(0.05);
   thsSignal_grouped_hww2l2v_13TeV_top_0jee_events_stack_64->GetZaxis()->SetTitleSize(0.06);
   thsSignal_grouped_hww2l2v_13TeV_top_0jee_events_stack_64->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_hww2l2v_13TeV_top_0jee_events->SetHistogram(thsSignal_grouped_hww2l2v_13TeV_top_0jee_events_stack_64);
   
   
   TH1D *new_histo_group_Higgs_hww2l2v_13TeV_top_0jee_events287 = new TH1D("new_histo_group_Higgs_hww2l2v_13TeV_top_0jee_events287","histo_H_htt",1,0,2);
   new_histo_group_Higgs_hww2l2v_13TeV_top_0jee_events287->SetBinContent(1,3.300479);
   new_histo_group_Higgs_hww2l2v_13TeV_top_0jee_events287->SetBinError(1,0.4500698);
   new_histo_group_Higgs_hww2l2v_13TeV_top_0jee_events287->SetEntries(83);
   new_histo_group_Higgs_hww2l2v_13TeV_top_0jee_events287->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_hww2l2v_13TeV_top_0jee_events287->SetLineColor(ci);
   new_histo_group_Higgs_hww2l2v_13TeV_top_0jee_events287->SetLineWidth(2);
   new_histo_group_Higgs_hww2l2v_13TeV_top_0jee_events287->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_hww2l2v_13TeV_top_0jee_events287->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_hww2l2v_13TeV_top_0jee_events287->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_hww2l2v_13TeV_top_0jee_events287->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_hww2l2v_13TeV_top_0jee_events287->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_hww2l2v_13TeV_top_0jee_events287->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_hww2l2v_13TeV_top_0jee_events287->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_hww2l2v_13TeV_top_0jee_events287->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_hww2l2v_13TeV_top_0jee_events287->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_hww2l2v_13TeV_top_0jee_events287->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_hww2l2v_13TeV_top_0jee_events287->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_hww2l2v_13TeV_top_0jee_events287->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_hww2l2v_13TeV_top_0jee_events->Add(new_histo_group_Higgs_hww2l2v_13TeV_top_0jee_events,"");
   thsSignal_grouped_hww2l2v_13TeV_top_0jee_events->Draw("hist same noclear");
   
   Double_t _fx3041[1] = {
   1};
   Double_t _fy3041[1] = {
   493.5384};
   Double_t _felx3041[1] = {
   1};
   Double_t _fely3041[1] = {
   6.103516e-05};
   Double_t _fehx3041[1] = {
   1};
   Double_t _fehy3041[1] = {
   6.103516e-05};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(1,_fx3041,_fy3041,_felx3041,_fehx3041,_fely3041,_fehy3041);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(12);
   grae->SetFillStyle(3004);
   grae->SetLineColor(12);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3041 = new TH1F("Graph_Graph3041","",100,0,2.2);
   Graph_Graph3041->SetMinimum(493.5383);
   Graph_Graph3041->SetMaximum(493.5385);
   Graph_Graph3041->SetDirectory(0);
   Graph_Graph3041->SetStats(0);
   Graph_Graph3041->SetLineStyle(0);
   Graph_Graph3041->SetMarkerStyle(20);
   Graph_Graph3041->GetXaxis()->SetLabelFont(42);
   Graph_Graph3041->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3041->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3041->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3041->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3041->GetXaxis()->SetTitleFont(42);
   Graph_Graph3041->GetYaxis()->SetLabelFont(42);
   Graph_Graph3041->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3041->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3041->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3041->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3041->GetYaxis()->SetTitleFont(42);
   Graph_Graph3041->GetZaxis()->SetLabelFont(42);
   Graph_Graph3041->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3041->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3041->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3041->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3041);
   
   grae->Draw("2");
   
   Double_t _fx3042[1] = {
   1};
   Double_t _fy3042[1] = {
   882};
   Double_t _felx3042[1] = {
   1};
   Double_t _fely3042[1] = {
   29.69349};
   Double_t _fehx3042[1] = {
   1};
   Double_t _fehy3042[1] = {
   30.71037};
   grae = new TGraphAsymmErrors(1,_fx3042,_fy3042,_felx3042,_fehx3042,_fely3042,_fehy3042);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(1);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3042 = new TH1F("Graph_Graph3042","",100,0,2.2);
   Graph_Graph3042->SetMinimum(846.2661);
   Graph_Graph3042->SetMaximum(918.7508);
   Graph_Graph3042->SetDirectory(0);
   Graph_Graph3042->SetStats(0);
   Graph_Graph3042->SetLineStyle(0);
   Graph_Graph3042->SetMarkerStyle(20);
   Graph_Graph3042->GetXaxis()->SetLabelFont(42);
   Graph_Graph3042->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3042->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3042->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3042->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3042->GetXaxis()->SetTitleFont(42);
   Graph_Graph3042->GetYaxis()->SetLabelFont(42);
   Graph_Graph3042->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3042->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3042->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3042->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3042->GetYaxis()->SetTitleFont(42);
   Graph_Graph3042->GetZaxis()->SetLabelFont(42);
   Graph_Graph3042->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3042->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3042->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3042->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3042);
   
   grae->Draw("p0");
   
   TLegend *leg = new TLegend(0.2,0.7,0.8,0.9,NULL,"brNDC");
   leg->SetTextFont(62);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("new_histo_group_DY_hww2l2v_13TeV_top_0jee_events","DY","F");

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
   entry=leg->AddEntry("new_histo_group_top_hww2l2v_13TeV_top_0jee_events","tW and t#bart","F");

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
   entry=leg->AddEntry("new_histo_group_WW_hww2l2v_13TeV_top_0jee_events","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_hww2l2v_13TeV_top_0jee_events","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_VZ_hww2l2v_13TeV_top_0jee_events","VZ/#gamma*/#gamma","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_hww2l2v_13TeV_top_0jee_events","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_hww2l2v_13TeV_top_0jee_events","Data","EPL");
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
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
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
   entry=leg->AddEntry("new_histo_group_DY_hww2l2v_13TeV_top_0jee_events","DY","F");

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
   entry=leg->AddEntry("new_histo_group_top_hww2l2v_13TeV_top_0jee_events","tW and t#bart","F");

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
   entry=leg->AddEntry("new_histo_group_WW_hww2l2v_13TeV_top_0jee_events","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_hww2l2v_13TeV_top_0jee_events","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_VZ_hww2l2v_13TeV_top_0jee_events","VZ/#gamma*/#gamma","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_hww2l2v_13TeV_top_0jee_events","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_hww2l2v_13TeV_top_0jee_events","Data","EPL");
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
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   leg->Draw();
   
   TH1F *hframe_copy288 = new TH1F("hframe_copy288","",1000,0,2);
   hframe_copy288->SetMinimum(0);
   hframe_copy288->SetMaximum(2279.246);
   hframe_copy288->SetDirectory(0);
   hframe_copy288->SetStats(0);
   hframe_copy288->SetLineStyle(0);
   hframe_copy288->SetMarkerStyle(20);
   hframe_copy288->GetXaxis()->SetTitle("events");
   hframe_copy288->GetXaxis()->SetNdivisions(506);
   hframe_copy288->GetXaxis()->SetLabelFont(42);
   hframe_copy288->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy288->GetXaxis()->SetLabelSize(0.05);
   hframe_copy288->GetXaxis()->SetTitleSize(0.06);
   hframe_copy288->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy288->GetXaxis()->SetTitleFont(42);
   hframe_copy288->GetYaxis()->SetTitle("Events");
   hframe_copy288->GetYaxis()->SetLabelFont(42);
   hframe_copy288->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy288->GetYaxis()->SetLabelSize(0.05);
   hframe_copy288->GetYaxis()->SetTitleSize(0.06);
   hframe_copy288->GetYaxis()->SetTitleOffset(1.25);
   hframe_copy288->GetYaxis()->SetTitleFont(42);
   hframe_copy288->GetZaxis()->SetLabelFont(42);
   hframe_copy288->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy288->GetZaxis()->SetLabelSize(0.05);
   hframe_copy288->GetZaxis()->SetTitleSize(0.06);
   hframe_copy288->GetZaxis()->SetTitleFont(42);
   hframe_copy288->Draw("sameaxis");
   cchww2l2v_13TeV_top_0jee_events->Modified();
   cchww2l2v_13TeV_top_0jee_events->cd();
   cchww2l2v_13TeV_top_0jee_events->SetSelected(cchww2l2v_13TeV_top_0jee_events);
}
