void c_hww2l2v_13TeV_0jmm_events()
{
//=========Macro generated from canvas: cchww2l2v_13TeV_0jmm_events/cc
//=========  (Tue Mar 21 11:46:30 2017) by ROOT version6.02/13
   TCanvas *cchww2l2v_13TeV_0jmm_events = new TCanvas("cchww2l2v_13TeV_0jmm_events", "cc",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   cchww2l2v_13TeV_0jmm_events->SetHighLightColor(2);
   cchww2l2v_13TeV_0jmm_events->Range(-0.4,-4678.871,2.1,31312.45);
   cchww2l2v_13TeV_0jmm_events->SetFillColor(0);
   cchww2l2v_13TeV_0jmm_events->SetBorderMode(0);
   cchww2l2v_13TeV_0jmm_events->SetBorderSize(2);
   cchww2l2v_13TeV_0jmm_events->SetTickx(1);
   cchww2l2v_13TeV_0jmm_events->SetTicky(1);
   cchww2l2v_13TeV_0jmm_events->SetLeftMargin(0.16);
   cchww2l2v_13TeV_0jmm_events->SetRightMargin(0.04);
   cchww2l2v_13TeV_0jmm_events->SetTopMargin(0.05);
   cchww2l2v_13TeV_0jmm_events->SetBottomMargin(0.13);
   cchww2l2v_13TeV_0jmm_events->SetFrameFillStyle(0);
   cchww2l2v_13TeV_0jmm_events->SetFrameBorderMode(0);
   cchww2l2v_13TeV_0jmm_events->SetFrameFillStyle(0);
   cchww2l2v_13TeV_0jmm_events->SetFrameBorderMode(0);
   
   TH1F *hframe145 = new TH1F("hframe145","",1000,0,2);
   hframe145->SetMinimum(0);
   hframe145->SetMaximum(29512.88);
   hframe145->SetDirectory(0);
   hframe145->SetStats(0);
   hframe145->SetLineStyle(0);
   hframe145->SetMarkerStyle(20);
   hframe145->GetXaxis()->SetTitle("events");
   hframe145->GetXaxis()->SetNdivisions(506);
   hframe145->GetXaxis()->SetLabelFont(42);
   hframe145->GetXaxis()->SetLabelOffset(0.007);
   hframe145->GetXaxis()->SetLabelSize(0.05);
   hframe145->GetXaxis()->SetTitleSize(0.06);
   hframe145->GetXaxis()->SetTitleOffset(0.9);
   hframe145->GetXaxis()->SetTitleFont(42);
   hframe145->GetYaxis()->SetTitle("Events");
   hframe145->GetYaxis()->SetLabelFont(42);
   hframe145->GetYaxis()->SetLabelOffset(0.007);
   hframe145->GetYaxis()->SetLabelSize(0.05);
   hframe145->GetYaxis()->SetTitleSize(0.06);
   hframe145->GetYaxis()->SetTitleOffset(1.25);
   hframe145->GetYaxis()->SetTitleFont(42);
   hframe145->GetZaxis()->SetLabelFont(42);
   hframe145->GetZaxis()->SetLabelOffset(0.007);
   hframe145->GetZaxis()->SetLabelSize(0.05);
   hframe145->GetZaxis()->SetTitleSize(0.06);
   hframe145->GetZaxis()->SetTitleFont(42);
   hframe145->Draw(" ");
   
   THStack *thsBackground_grouped_hww2l2v_13TeV_0jmm_events = new THStack();
   thsBackground_grouped_hww2l2v_13TeV_0jmm_events->SetName("thsBackground_grouped_hww2l2v_13TeV_0jmm_events");
   thsBackground_grouped_hww2l2v_13TeV_0jmm_events->SetTitle("thsBackground_grouped_hww2l2v_13TeV_0jmm_events");
   
   TH1F *thsBackground_grouped_hww2l2v_13TeV_0jmm_events_stack_33 = new TH1F("thsBackground_grouped_hww2l2v_13TeV_0jmm_events_stack_33","thsBackground_grouped_hww2l2v_13TeV_0jmm_events",1,0,2);
   thsBackground_grouped_hww2l2v_13TeV_0jmm_events_stack_33->SetMinimum(0);
   thsBackground_grouped_hww2l2v_13TeV_0jmm_events_stack_33->SetMaximum(5890.031);
   thsBackground_grouped_hww2l2v_13TeV_0jmm_events_stack_33->SetDirectory(0);
   thsBackground_grouped_hww2l2v_13TeV_0jmm_events_stack_33->SetStats(0);
   thsBackground_grouped_hww2l2v_13TeV_0jmm_events_stack_33->SetLineStyle(0);
   thsBackground_grouped_hww2l2v_13TeV_0jmm_events_stack_33->SetMarkerStyle(20);
   thsBackground_grouped_hww2l2v_13TeV_0jmm_events_stack_33->GetXaxis()->SetLabelFont(42);
   thsBackground_grouped_hww2l2v_13TeV_0jmm_events_stack_33->GetXaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_hww2l2v_13TeV_0jmm_events_stack_33->GetXaxis()->SetLabelSize(0.05);
   thsBackground_grouped_hww2l2v_13TeV_0jmm_events_stack_33->GetXaxis()->SetTitleSize(0.06);
   thsBackground_grouped_hww2l2v_13TeV_0jmm_events_stack_33->GetXaxis()->SetTitleOffset(0.9);
   thsBackground_grouped_hww2l2v_13TeV_0jmm_events_stack_33->GetXaxis()->SetTitleFont(42);
   thsBackground_grouped_hww2l2v_13TeV_0jmm_events_stack_33->GetYaxis()->SetLabelFont(42);
   thsBackground_grouped_hww2l2v_13TeV_0jmm_events_stack_33->GetYaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_hww2l2v_13TeV_0jmm_events_stack_33->GetYaxis()->SetLabelSize(0.05);
   thsBackground_grouped_hww2l2v_13TeV_0jmm_events_stack_33->GetYaxis()->SetTitleSize(0.06);
   thsBackground_grouped_hww2l2v_13TeV_0jmm_events_stack_33->GetYaxis()->SetTitleOffset(1.25);
   thsBackground_grouped_hww2l2v_13TeV_0jmm_events_stack_33->GetYaxis()->SetTitleFont(42);
   thsBackground_grouped_hww2l2v_13TeV_0jmm_events_stack_33->GetZaxis()->SetLabelFont(42);
   thsBackground_grouped_hww2l2v_13TeV_0jmm_events_stack_33->GetZaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_hww2l2v_13TeV_0jmm_events_stack_33->GetZaxis()->SetLabelSize(0.05);
   thsBackground_grouped_hww2l2v_13TeV_0jmm_events_stack_33->GetZaxis()->SetTitleSize(0.06);
   thsBackground_grouped_hww2l2v_13TeV_0jmm_events_stack_33->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_hww2l2v_13TeV_0jmm_events->SetHistogram(thsBackground_grouped_hww2l2v_13TeV_0jmm_events_stack_33);
   
   
   TH1D *new_histo_group_DY_hww2l2v_13TeV_0jmm_events146 = new TH1D("new_histo_group_DY_hww2l2v_13TeV_0jmm_events146","histo_DY",1,0,2);
   new_histo_group_DY_hww2l2v_13TeV_0jmm_events146->SetBinContent(1,3472.319);
   new_histo_group_DY_hww2l2v_13TeV_0jmm_events146->SetBinError(1,356.195);
   new_histo_group_DY_hww2l2v_13TeV_0jmm_events146->SetEntries(388);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#009900");
   new_histo_group_DY_hww2l2v_13TeV_0jmm_events146->SetFillColor(ci);
   new_histo_group_DY_hww2l2v_13TeV_0jmm_events146->SetFillStyle(3001);

   ci = TColor::GetColor("#009900");
   new_histo_group_DY_hww2l2v_13TeV_0jmm_events146->SetLineColor(ci);
   new_histo_group_DY_hww2l2v_13TeV_0jmm_events146->GetXaxis()->SetLabelFont(42);
   new_histo_group_DY_hww2l2v_13TeV_0jmm_events146->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_DY_hww2l2v_13TeV_0jmm_events146->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_DY_hww2l2v_13TeV_0jmm_events146->GetXaxis()->SetTitleFont(42);
   new_histo_group_DY_hww2l2v_13TeV_0jmm_events146->GetYaxis()->SetLabelFont(42);
   new_histo_group_DY_hww2l2v_13TeV_0jmm_events146->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_DY_hww2l2v_13TeV_0jmm_events146->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_DY_hww2l2v_13TeV_0jmm_events146->GetYaxis()->SetTitleFont(42);
   new_histo_group_DY_hww2l2v_13TeV_0jmm_events146->GetZaxis()->SetLabelFont(42);
   new_histo_group_DY_hww2l2v_13TeV_0jmm_events146->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_DY_hww2l2v_13TeV_0jmm_events146->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_DY_hww2l2v_13TeV_0jmm_events146->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_hww2l2v_13TeV_0jmm_events->Add(new_histo_group_DY_hww2l2v_13TeV_0jmm_events,"");
   
   TH1D *new_histo_group_top_hww2l2v_13TeV_0jmm_events147 = new TH1D("new_histo_group_top_hww2l2v_13TeV_0jmm_events147","histo_top",1,0,2);
   new_histo_group_top_hww2l2v_13TeV_0jmm_events147->SetBinContent(1,119.123);
   new_histo_group_top_hww2l2v_13TeV_0jmm_events147->SetBinError(1,2.225797);
   new_histo_group_top_hww2l2v_13TeV_0jmm_events147->SetEntries(3192);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_top_hww2l2v_13TeV_0jmm_events147->SetFillColor(ci);
   new_histo_group_top_hww2l2v_13TeV_0jmm_events147->SetFillStyle(3001);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_top_hww2l2v_13TeV_0jmm_events147->SetLineColor(ci);
   new_histo_group_top_hww2l2v_13TeV_0jmm_events147->GetXaxis()->SetLabelFont(42);
   new_histo_group_top_hww2l2v_13TeV_0jmm_events147->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_top_hww2l2v_13TeV_0jmm_events147->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_top_hww2l2v_13TeV_0jmm_events147->GetXaxis()->SetTitleFont(42);
   new_histo_group_top_hww2l2v_13TeV_0jmm_events147->GetYaxis()->SetLabelFont(42);
   new_histo_group_top_hww2l2v_13TeV_0jmm_events147->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_top_hww2l2v_13TeV_0jmm_events147->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_top_hww2l2v_13TeV_0jmm_events147->GetYaxis()->SetTitleFont(42);
   new_histo_group_top_hww2l2v_13TeV_0jmm_events147->GetZaxis()->SetLabelFont(42);
   new_histo_group_top_hww2l2v_13TeV_0jmm_events147->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_top_hww2l2v_13TeV_0jmm_events147->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_top_hww2l2v_13TeV_0jmm_events147->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_hww2l2v_13TeV_0jmm_events->Add(new_histo_group_top_hww2l2v_13TeV_0jmm_events,"");
   
   TH1D *new_histo_group_WW_hww2l2v_13TeV_0jmm_events148 = new TH1D("new_histo_group_WW_hww2l2v_13TeV_0jmm_events148","histo_WW",1,0,2);
   new_histo_group_WW_hww2l2v_13TeV_0jmm_events148->SetBinContent(1,1516.489);
   new_histo_group_WW_hww2l2v_13TeV_0jmm_events148->SetBinError(1,17.46956);
   new_histo_group_WW_hww2l2v_13TeV_0jmm_events148->SetEntries(10432);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_hww2l2v_13TeV_0jmm_events148->SetFillColor(ci);
   new_histo_group_WW_hww2l2v_13TeV_0jmm_events148->SetFillStyle(3001);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_hww2l2v_13TeV_0jmm_events148->SetLineColor(ci);
   new_histo_group_WW_hww2l2v_13TeV_0jmm_events148->GetXaxis()->SetLabelFont(42);
   new_histo_group_WW_hww2l2v_13TeV_0jmm_events148->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WW_hww2l2v_13TeV_0jmm_events148->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WW_hww2l2v_13TeV_0jmm_events148->GetXaxis()->SetTitleFont(42);
   new_histo_group_WW_hww2l2v_13TeV_0jmm_events148->GetYaxis()->SetLabelFont(42);
   new_histo_group_WW_hww2l2v_13TeV_0jmm_events148->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WW_hww2l2v_13TeV_0jmm_events148->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WW_hww2l2v_13TeV_0jmm_events148->GetYaxis()->SetTitleFont(42);
   new_histo_group_WW_hww2l2v_13TeV_0jmm_events148->GetZaxis()->SetLabelFont(42);
   new_histo_group_WW_hww2l2v_13TeV_0jmm_events148->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WW_hww2l2v_13TeV_0jmm_events148->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WW_hww2l2v_13TeV_0jmm_events148->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_hww2l2v_13TeV_0jmm_events->Add(new_histo_group_WW_hww2l2v_13TeV_0jmm_events,"");
   
   TH1D *new_histo_group_VVV_hww2l2v_13TeV_0jmm_events149 = new TH1D("new_histo_group_VVV_hww2l2v_13TeV_0jmm_events149","histo_VVV",1,0,2);
   new_histo_group_VVV_hww2l2v_13TeV_0jmm_events149->SetBinContent(1,0.8996336);
   new_histo_group_VVV_hww2l2v_13TeV_0jmm_events149->SetBinError(1,0.1782797);
   new_histo_group_VVV_hww2l2v_13TeV_0jmm_events149->SetEntries(37);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_hww2l2v_13TeV_0jmm_events149->SetFillColor(ci);
   new_histo_group_VVV_hww2l2v_13TeV_0jmm_events149->SetFillStyle(3001);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_hww2l2v_13TeV_0jmm_events149->SetLineColor(ci);
   new_histo_group_VVV_hww2l2v_13TeV_0jmm_events149->GetXaxis()->SetLabelFont(42);
   new_histo_group_VVV_hww2l2v_13TeV_0jmm_events149->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_hww2l2v_13TeV_0jmm_events149->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_hww2l2v_13TeV_0jmm_events149->GetXaxis()->SetTitleFont(42);
   new_histo_group_VVV_hww2l2v_13TeV_0jmm_events149->GetYaxis()->SetLabelFont(42);
   new_histo_group_VVV_hww2l2v_13TeV_0jmm_events149->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_hww2l2v_13TeV_0jmm_events149->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_hww2l2v_13TeV_0jmm_events149->GetYaxis()->SetTitleFont(42);
   new_histo_group_VVV_hww2l2v_13TeV_0jmm_events149->GetZaxis()->SetLabelFont(42);
   new_histo_group_VVV_hww2l2v_13TeV_0jmm_events149->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_hww2l2v_13TeV_0jmm_events149->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_hww2l2v_13TeV_0jmm_events149->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_hww2l2v_13TeV_0jmm_events->Add(new_histo_group_VVV_hww2l2v_13TeV_0jmm_events,"");
   
   TH1D *new_histo_group_VZ_hww2l2v_13TeV_0jmm_events150 = new TH1D("new_histo_group_VZ_hww2l2v_13TeV_0jmm_events150","histo_Vg",1,0,2);
   new_histo_group_VZ_hww2l2v_13TeV_0jmm_events150->SetBinContent(1,177.9016);
   new_histo_group_VZ_hww2l2v_13TeV_0jmm_events150->SetBinError(1,48.88318);
   new_histo_group_VZ_hww2l2v_13TeV_0jmm_events150->SetEntries(4459);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_VZ_hww2l2v_13TeV_0jmm_events150->SetFillColor(ci);
   new_histo_group_VZ_hww2l2v_13TeV_0jmm_events150->SetFillStyle(3001);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_VZ_hww2l2v_13TeV_0jmm_events150->SetLineColor(ci);
   new_histo_group_VZ_hww2l2v_13TeV_0jmm_events150->GetXaxis()->SetLabelFont(42);
   new_histo_group_VZ_hww2l2v_13TeV_0jmm_events150->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_VZ_hww2l2v_13TeV_0jmm_events150->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_VZ_hww2l2v_13TeV_0jmm_events150->GetXaxis()->SetTitleFont(42);
   new_histo_group_VZ_hww2l2v_13TeV_0jmm_events150->GetYaxis()->SetLabelFont(42);
   new_histo_group_VZ_hww2l2v_13TeV_0jmm_events150->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_VZ_hww2l2v_13TeV_0jmm_events150->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_VZ_hww2l2v_13TeV_0jmm_events150->GetYaxis()->SetTitleFont(42);
   new_histo_group_VZ_hww2l2v_13TeV_0jmm_events150->GetZaxis()->SetLabelFont(42);
   new_histo_group_VZ_hww2l2v_13TeV_0jmm_events150->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_VZ_hww2l2v_13TeV_0jmm_events150->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_VZ_hww2l2v_13TeV_0jmm_events150->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_hww2l2v_13TeV_0jmm_events->Add(new_histo_group_VZ_hww2l2v_13TeV_0jmm_events,"");
   
   TH1D *new_histo_group_Higgs_hww2l2v_13TeV_0jmm_events151 = new TH1D("new_histo_group_Higgs_hww2l2v_13TeV_0jmm_events151","histo_H_htt",1,0,2);
   new_histo_group_Higgs_hww2l2v_13TeV_0jmm_events151->SetBinContent(1,322.8218);
   new_histo_group_Higgs_hww2l2v_13TeV_0jmm_events151->SetBinError(1,4.840548);
   new_histo_group_Higgs_hww2l2v_13TeV_0jmm_events151->SetEntries(5542);
   new_histo_group_Higgs_hww2l2v_13TeV_0jmm_events151->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_hww2l2v_13TeV_0jmm_events151->SetLineColor(ci);
   new_histo_group_Higgs_hww2l2v_13TeV_0jmm_events151->SetLineWidth(2);
   new_histo_group_Higgs_hww2l2v_13TeV_0jmm_events151->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_hww2l2v_13TeV_0jmm_events151->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_hww2l2v_13TeV_0jmm_events151->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_hww2l2v_13TeV_0jmm_events151->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_hww2l2v_13TeV_0jmm_events151->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_hww2l2v_13TeV_0jmm_events151->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_hww2l2v_13TeV_0jmm_events151->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_hww2l2v_13TeV_0jmm_events151->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_hww2l2v_13TeV_0jmm_events151->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_hww2l2v_13TeV_0jmm_events151->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_hww2l2v_13TeV_0jmm_events151->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_hww2l2v_13TeV_0jmm_events151->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_hww2l2v_13TeV_0jmm_events->Add(new_histo_group_Higgs_hww2l2v_13TeV_0jmm_events,"");
   thsBackground_grouped_hww2l2v_13TeV_0jmm_events->Draw("hist same");
   
   thsSignal_grouped_hww2l2v_13TeV_0jmm_events = new THStack();
   thsSignal_grouped_hww2l2v_13TeV_0jmm_events->SetName("thsSignal_grouped_hww2l2v_13TeV_0jmm_events");
   thsSignal_grouped_hww2l2v_13TeV_0jmm_events->SetTitle("thsSignal_grouped_hww2l2v_13TeV_0jmm_events");
   
   TH1F *thsSignal_grouped_hww2l2v_13TeV_0jmm_events_stack_34 = new TH1F("thsSignal_grouped_hww2l2v_13TeV_0jmm_events_stack_34","thsSignal_grouped_hww2l2v_13TeV_0jmm_events",1,0,2);
   thsSignal_grouped_hww2l2v_13TeV_0jmm_events_stack_34->SetMinimum(0);
   thsSignal_grouped_hww2l2v_13TeV_0jmm_events_stack_34->SetMaximum(344.0455);
   thsSignal_grouped_hww2l2v_13TeV_0jmm_events_stack_34->SetDirectory(0);
   thsSignal_grouped_hww2l2v_13TeV_0jmm_events_stack_34->SetStats(0);
   thsSignal_grouped_hww2l2v_13TeV_0jmm_events_stack_34->SetLineStyle(0);
   thsSignal_grouped_hww2l2v_13TeV_0jmm_events_stack_34->SetMarkerStyle(20);
   thsSignal_grouped_hww2l2v_13TeV_0jmm_events_stack_34->GetXaxis()->SetLabelFont(42);
   thsSignal_grouped_hww2l2v_13TeV_0jmm_events_stack_34->GetXaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_hww2l2v_13TeV_0jmm_events_stack_34->GetXaxis()->SetLabelSize(0.05);
   thsSignal_grouped_hww2l2v_13TeV_0jmm_events_stack_34->GetXaxis()->SetTitleSize(0.06);
   thsSignal_grouped_hww2l2v_13TeV_0jmm_events_stack_34->GetXaxis()->SetTitleOffset(0.9);
   thsSignal_grouped_hww2l2v_13TeV_0jmm_events_stack_34->GetXaxis()->SetTitleFont(42);
   thsSignal_grouped_hww2l2v_13TeV_0jmm_events_stack_34->GetYaxis()->SetLabelFont(42);
   thsSignal_grouped_hww2l2v_13TeV_0jmm_events_stack_34->GetYaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_hww2l2v_13TeV_0jmm_events_stack_34->GetYaxis()->SetLabelSize(0.05);
   thsSignal_grouped_hww2l2v_13TeV_0jmm_events_stack_34->GetYaxis()->SetTitleSize(0.06);
   thsSignal_grouped_hww2l2v_13TeV_0jmm_events_stack_34->GetYaxis()->SetTitleOffset(1.25);
   thsSignal_grouped_hww2l2v_13TeV_0jmm_events_stack_34->GetYaxis()->SetTitleFont(42);
   thsSignal_grouped_hww2l2v_13TeV_0jmm_events_stack_34->GetZaxis()->SetLabelFont(42);
   thsSignal_grouped_hww2l2v_13TeV_0jmm_events_stack_34->GetZaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_hww2l2v_13TeV_0jmm_events_stack_34->GetZaxis()->SetLabelSize(0.05);
   thsSignal_grouped_hww2l2v_13TeV_0jmm_events_stack_34->GetZaxis()->SetTitleSize(0.06);
   thsSignal_grouped_hww2l2v_13TeV_0jmm_events_stack_34->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_hww2l2v_13TeV_0jmm_events->SetHistogram(thsSignal_grouped_hww2l2v_13TeV_0jmm_events_stack_34);
   
   
   TH1D *new_histo_group_Higgs_hww2l2v_13TeV_0jmm_events152 = new TH1D("new_histo_group_Higgs_hww2l2v_13TeV_0jmm_events152","histo_H_htt",1,0,2);
   new_histo_group_Higgs_hww2l2v_13TeV_0jmm_events152->SetBinContent(1,322.8218);
   new_histo_group_Higgs_hww2l2v_13TeV_0jmm_events152->SetBinError(1,4.840548);
   new_histo_group_Higgs_hww2l2v_13TeV_0jmm_events152->SetEntries(5542);
   new_histo_group_Higgs_hww2l2v_13TeV_0jmm_events152->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_hww2l2v_13TeV_0jmm_events152->SetLineColor(ci);
   new_histo_group_Higgs_hww2l2v_13TeV_0jmm_events152->SetLineWidth(2);
   new_histo_group_Higgs_hww2l2v_13TeV_0jmm_events152->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_hww2l2v_13TeV_0jmm_events152->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_hww2l2v_13TeV_0jmm_events152->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_hww2l2v_13TeV_0jmm_events152->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_hww2l2v_13TeV_0jmm_events152->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_hww2l2v_13TeV_0jmm_events152->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_hww2l2v_13TeV_0jmm_events152->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_hww2l2v_13TeV_0jmm_events152->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_hww2l2v_13TeV_0jmm_events152->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_hww2l2v_13TeV_0jmm_events152->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_hww2l2v_13TeV_0jmm_events152->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_hww2l2v_13TeV_0jmm_events152->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_hww2l2v_13TeV_0jmm_events->Add(new_histo_group_Higgs_hww2l2v_13TeV_0jmm_events,"");
   thsSignal_grouped_hww2l2v_13TeV_0jmm_events->Draw("hist same noclear");
   
   Double_t _fx3023[1] = {
   1};
   Double_t _fy3023[1] = {
   5286.732};
   Double_t _felx3023[1] = {
   1};
   Double_t _fely3023[1] = {
   0};
   Double_t _fehx3023[1] = {
   1};
   Double_t _fehy3023[1] = {
   0};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(1,_fx3023,_fy3023,_felx3023,_fehx3023,_fely3023,_fehy3023);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(12);
   grae->SetFillStyle(3004);
   grae->SetLineColor(12);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3023 = new TH1F("Graph_Graph3023","",100,0,2.2);
   Graph_Graph3023->SetMinimum(5286.632);
   Graph_Graph3023->SetMaximum(5287.832);
   Graph_Graph3023->SetDirectory(0);
   Graph_Graph3023->SetStats(0);
   Graph_Graph3023->SetLineStyle(0);
   Graph_Graph3023->SetMarkerStyle(20);
   Graph_Graph3023->GetXaxis()->SetLabelFont(42);
   Graph_Graph3023->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3023->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3023->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3023->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3023->GetXaxis()->SetTitleFont(42);
   Graph_Graph3023->GetYaxis()->SetLabelFont(42);
   Graph_Graph3023->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3023->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3023->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3023->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3023->GetYaxis()->SetTitleFont(42);
   Graph_Graph3023->GetZaxis()->SetLabelFont(42);
   Graph_Graph3023->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3023->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3023->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3023->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3023);
   
   grae->Draw("2");
   
   Double_t _fx3024[1] = {
   1};
   Double_t _fy3024[1] = {
   11697};
   Double_t _felx3024[1] = {
   1};
   Double_t _fely3024[1] = {
   108.1535};
   Double_t _fehx3024[1] = {
   1};
   Double_t _fehy3024[1] = {
   109.1581};
   grae = new TGraphAsymmErrors(1,_fx3024,_fy3024,_felx3024,_fehx3024,_fely3024,_fehy3024);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(1);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3024 = new TH1F("Graph_Graph3024","",100,0,2.2);
   Graph_Graph3024->SetMinimum(11567.12);
   Graph_Graph3024->SetMaximum(11827.89);
   Graph_Graph3024->SetDirectory(0);
   Graph_Graph3024->SetStats(0);
   Graph_Graph3024->SetLineStyle(0);
   Graph_Graph3024->SetMarkerStyle(20);
   Graph_Graph3024->GetXaxis()->SetLabelFont(42);
   Graph_Graph3024->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3024->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3024->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3024->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3024->GetXaxis()->SetTitleFont(42);
   Graph_Graph3024->GetYaxis()->SetLabelFont(42);
   Graph_Graph3024->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3024->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3024->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3024->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3024->GetYaxis()->SetTitleFont(42);
   Graph_Graph3024->GetZaxis()->SetLabelFont(42);
   Graph_Graph3024->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3024->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3024->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3024->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3024);
   
   grae->Draw("p0");
   
   TLegend *leg = new TLegend(0.2,0.7,0.8,0.9,NULL,"brNDC");
   leg->SetTextFont(62);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("new_histo_group_DY_hww2l2v_13TeV_0jmm_events","DY","F");

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
   entry=leg->AddEntry("new_histo_group_top_hww2l2v_13TeV_0jmm_events","tW and t#bart","F");

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
   entry=leg->AddEntry("new_histo_group_WW_hww2l2v_13TeV_0jmm_events","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_hww2l2v_13TeV_0jmm_events","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_VZ_hww2l2v_13TeV_0jmm_events","VZ/#gamma*/#gamma","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_hww2l2v_13TeV_0jmm_events","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_hww2l2v_13TeV_0jmm_events","Data","EPL");
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
   entry=leg->AddEntry("new_histo_group_DY_hww2l2v_13TeV_0jmm_events","DY","F");

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
   entry=leg->AddEntry("new_histo_group_top_hww2l2v_13TeV_0jmm_events","tW and t#bart","F");

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
   entry=leg->AddEntry("new_histo_group_WW_hww2l2v_13TeV_0jmm_events","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_hww2l2v_13TeV_0jmm_events","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_VZ_hww2l2v_13TeV_0jmm_events","VZ/#gamma*/#gamma","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_hww2l2v_13TeV_0jmm_events","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_hww2l2v_13TeV_0jmm_events","Data","EPL");
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
   
   TH1F *hframe_copy153 = new TH1F("hframe_copy153","",1000,0,2);
   hframe_copy153->SetMinimum(0);
   hframe_copy153->SetMaximum(29512.88);
   hframe_copy153->SetDirectory(0);
   hframe_copy153->SetStats(0);
   hframe_copy153->SetLineStyle(0);
   hframe_copy153->SetMarkerStyle(20);
   hframe_copy153->GetXaxis()->SetTitle("events");
   hframe_copy153->GetXaxis()->SetNdivisions(506);
   hframe_copy153->GetXaxis()->SetLabelFont(42);
   hframe_copy153->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy153->GetXaxis()->SetLabelSize(0.05);
   hframe_copy153->GetXaxis()->SetTitleSize(0.06);
   hframe_copy153->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy153->GetXaxis()->SetTitleFont(42);
   hframe_copy153->GetYaxis()->SetTitle("Events");
   hframe_copy153->GetYaxis()->SetLabelFont(42);
   hframe_copy153->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy153->GetYaxis()->SetLabelSize(0.05);
   hframe_copy153->GetYaxis()->SetTitleSize(0.06);
   hframe_copy153->GetYaxis()->SetTitleOffset(1.25);
   hframe_copy153->GetYaxis()->SetTitleFont(42);
   hframe_copy153->GetZaxis()->SetLabelFont(42);
   hframe_copy153->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy153->GetZaxis()->SetLabelSize(0.05);
   hframe_copy153->GetZaxis()->SetTitleSize(0.06);
   hframe_copy153->GetZaxis()->SetTitleFont(42);
   hframe_copy153->Draw("sameaxis");
   cchww2l2v_13TeV_0jmm_events->Modified();
   cchww2l2v_13TeV_0jmm_events->cd();
   cchww2l2v_13TeV_0jmm_events->SetSelected(cchww2l2v_13TeV_0jmm_events);
}
