void c_hww2l2v_13TeV_0jee_HAccNum_events()
{
//=========Macro generated from canvas: cchww2l2v_13TeV_0jee_HAccNum_events/cc
//=========  (Tue Mar 21 11:46:29 2017) by ROOT version6.02/13
   TCanvas *cchww2l2v_13TeV_0jee_HAccNum_events = new TCanvas("cchww2l2v_13TeV_0jee_HAccNum_events", "cc",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   cchww2l2v_13TeV_0jee_HAccNum_events->SetHighLightColor(2);
   cchww2l2v_13TeV_0jee_HAccNum_events->Range(-0.4,-3213.754,2.1,21507.43);
   cchww2l2v_13TeV_0jee_HAccNum_events->SetFillColor(0);
   cchww2l2v_13TeV_0jee_HAccNum_events->SetBorderMode(0);
   cchww2l2v_13TeV_0jee_HAccNum_events->SetBorderSize(2);
   cchww2l2v_13TeV_0jee_HAccNum_events->SetTickx(1);
   cchww2l2v_13TeV_0jee_HAccNum_events->SetTicky(1);
   cchww2l2v_13TeV_0jee_HAccNum_events->SetLeftMargin(0.16);
   cchww2l2v_13TeV_0jee_HAccNum_events->SetRightMargin(0.04);
   cchww2l2v_13TeV_0jee_HAccNum_events->SetTopMargin(0.05);
   cchww2l2v_13TeV_0jee_HAccNum_events->SetBottomMargin(0.13);
   cchww2l2v_13TeV_0jee_HAccNum_events->SetFrameFillStyle(0);
   cchww2l2v_13TeV_0jee_HAccNum_events->SetFrameBorderMode(0);
   cchww2l2v_13TeV_0jee_HAccNum_events->SetFrameFillStyle(0);
   cchww2l2v_13TeV_0jee_HAccNum_events->SetFrameBorderMode(0);
   
   TH1F *hframe136 = new TH1F("hframe136","",1000,0,2);
   hframe136->SetMinimum(0);
   hframe136->SetMaximum(20271.37);
   hframe136->SetDirectory(0);
   hframe136->SetStats(0);
   hframe136->SetLineStyle(0);
   hframe136->SetMarkerStyle(20);
   hframe136->GetXaxis()->SetTitle("events");
   hframe136->GetXaxis()->SetNdivisions(506);
   hframe136->GetXaxis()->SetLabelFont(42);
   hframe136->GetXaxis()->SetLabelOffset(0.007);
   hframe136->GetXaxis()->SetLabelSize(0.05);
   hframe136->GetXaxis()->SetTitleSize(0.06);
   hframe136->GetXaxis()->SetTitleOffset(0.9);
   hframe136->GetXaxis()->SetTitleFont(42);
   hframe136->GetYaxis()->SetTitle("Events");
   hframe136->GetYaxis()->SetLabelFont(42);
   hframe136->GetYaxis()->SetLabelOffset(0.007);
   hframe136->GetYaxis()->SetLabelSize(0.05);
   hframe136->GetYaxis()->SetTitleSize(0.06);
   hframe136->GetYaxis()->SetTitleOffset(1.25);
   hframe136->GetYaxis()->SetTitleFont(42);
   hframe136->GetZaxis()->SetLabelFont(42);
   hframe136->GetZaxis()->SetLabelOffset(0.007);
   hframe136->GetZaxis()->SetLabelSize(0.05);
   hframe136->GetZaxis()->SetTitleSize(0.06);
   hframe136->GetZaxis()->SetTitleFont(42);
   hframe136->Draw(" ");
   
   THStack *thsBackground_grouped_hww2l2v_13TeV_0jee_HAccNum_events = new THStack();
   thsBackground_grouped_hww2l2v_13TeV_0jee_HAccNum_events->SetName("thsBackground_grouped_hww2l2v_13TeV_0jee_HAccNum_events");
   thsBackground_grouped_hww2l2v_13TeV_0jee_HAccNum_events->SetTitle("thsBackground_grouped_hww2l2v_13TeV_0jee_HAccNum_events");
   
   TH1F *thsBackground_grouped_hww2l2v_13TeV_0jee_HAccNum_events_stack_31 = new TH1F("thsBackground_grouped_hww2l2v_13TeV_0jee_HAccNum_events_stack_31","thsBackground_grouped_hww2l2v_13TeV_0jee_HAccNum_events",1,0,2);
   thsBackground_grouped_hww2l2v_13TeV_0jee_HAccNum_events_stack_31->SetMinimum(0);
   thsBackground_grouped_hww2l2v_13TeV_0jee_HAccNum_events_stack_31->SetMaximum(5259.914);
   thsBackground_grouped_hww2l2v_13TeV_0jee_HAccNum_events_stack_31->SetDirectory(0);
   thsBackground_grouped_hww2l2v_13TeV_0jee_HAccNum_events_stack_31->SetStats(0);
   thsBackground_grouped_hww2l2v_13TeV_0jee_HAccNum_events_stack_31->SetLineStyle(0);
   thsBackground_grouped_hww2l2v_13TeV_0jee_HAccNum_events_stack_31->SetMarkerStyle(20);
   thsBackground_grouped_hww2l2v_13TeV_0jee_HAccNum_events_stack_31->GetXaxis()->SetLabelFont(42);
   thsBackground_grouped_hww2l2v_13TeV_0jee_HAccNum_events_stack_31->GetXaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_hww2l2v_13TeV_0jee_HAccNum_events_stack_31->GetXaxis()->SetLabelSize(0.05);
   thsBackground_grouped_hww2l2v_13TeV_0jee_HAccNum_events_stack_31->GetXaxis()->SetTitleSize(0.06);
   thsBackground_grouped_hww2l2v_13TeV_0jee_HAccNum_events_stack_31->GetXaxis()->SetTitleOffset(0.9);
   thsBackground_grouped_hww2l2v_13TeV_0jee_HAccNum_events_stack_31->GetXaxis()->SetTitleFont(42);
   thsBackground_grouped_hww2l2v_13TeV_0jee_HAccNum_events_stack_31->GetYaxis()->SetLabelFont(42);
   thsBackground_grouped_hww2l2v_13TeV_0jee_HAccNum_events_stack_31->GetYaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_hww2l2v_13TeV_0jee_HAccNum_events_stack_31->GetYaxis()->SetLabelSize(0.05);
   thsBackground_grouped_hww2l2v_13TeV_0jee_HAccNum_events_stack_31->GetYaxis()->SetTitleSize(0.06);
   thsBackground_grouped_hww2l2v_13TeV_0jee_HAccNum_events_stack_31->GetYaxis()->SetTitleOffset(1.25);
   thsBackground_grouped_hww2l2v_13TeV_0jee_HAccNum_events_stack_31->GetYaxis()->SetTitleFont(42);
   thsBackground_grouped_hww2l2v_13TeV_0jee_HAccNum_events_stack_31->GetZaxis()->SetLabelFont(42);
   thsBackground_grouped_hww2l2v_13TeV_0jee_HAccNum_events_stack_31->GetZaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_hww2l2v_13TeV_0jee_HAccNum_events_stack_31->GetZaxis()->SetLabelSize(0.05);
   thsBackground_grouped_hww2l2v_13TeV_0jee_HAccNum_events_stack_31->GetZaxis()->SetTitleSize(0.06);
   thsBackground_grouped_hww2l2v_13TeV_0jee_HAccNum_events_stack_31->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_hww2l2v_13TeV_0jee_HAccNum_events->SetHistogram(thsBackground_grouped_hww2l2v_13TeV_0jee_HAccNum_events_stack_31);
   
   
   TH1D *new_histo_group_DY_hww2l2v_13TeV_0jee_HAccNum_events137 = new TH1D("new_histo_group_DY_hww2l2v_13TeV_0jee_HAccNum_events137","histo_DY",1,0,2);
   new_histo_group_DY_hww2l2v_13TeV_0jee_HAccNum_events137->SetBinContent(1,3880.742);
   new_histo_group_DY_hww2l2v_13TeV_0jee_HAccNum_events137->SetBinError(1,341.3988);
   new_histo_group_DY_hww2l2v_13TeV_0jee_HAccNum_events137->SetEntries(769);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#009900");
   new_histo_group_DY_hww2l2v_13TeV_0jee_HAccNum_events137->SetFillColor(ci);
   new_histo_group_DY_hww2l2v_13TeV_0jee_HAccNum_events137->SetFillStyle(3001);

   ci = TColor::GetColor("#009900");
   new_histo_group_DY_hww2l2v_13TeV_0jee_HAccNum_events137->SetLineColor(ci);
   new_histo_group_DY_hww2l2v_13TeV_0jee_HAccNum_events137->GetXaxis()->SetLabelFont(42);
   new_histo_group_DY_hww2l2v_13TeV_0jee_HAccNum_events137->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_DY_hww2l2v_13TeV_0jee_HAccNum_events137->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_DY_hww2l2v_13TeV_0jee_HAccNum_events137->GetXaxis()->SetTitleFont(42);
   new_histo_group_DY_hww2l2v_13TeV_0jee_HAccNum_events137->GetYaxis()->SetLabelFont(42);
   new_histo_group_DY_hww2l2v_13TeV_0jee_HAccNum_events137->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_DY_hww2l2v_13TeV_0jee_HAccNum_events137->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_DY_hww2l2v_13TeV_0jee_HAccNum_events137->GetYaxis()->SetTitleFont(42);
   new_histo_group_DY_hww2l2v_13TeV_0jee_HAccNum_events137->GetZaxis()->SetLabelFont(42);
   new_histo_group_DY_hww2l2v_13TeV_0jee_HAccNum_events137->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_DY_hww2l2v_13TeV_0jee_HAccNum_events137->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_DY_hww2l2v_13TeV_0jee_HAccNum_events137->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_hww2l2v_13TeV_0jee_HAccNum_events->Add(new_histo_group_DY_hww2l2v_13TeV_0jee_HAccNum_events,"");
   
   TH1D *new_histo_group_top_hww2l2v_13TeV_0jee_HAccNum_events138 = new TH1D("new_histo_group_top_hww2l2v_13TeV_0jee_HAccNum_events138","histo_top",1,0,2);
   new_histo_group_top_hww2l2v_13TeV_0jee_HAccNum_events138->SetBinContent(1,39.73364);
   new_histo_group_top_hww2l2v_13TeV_0jee_HAccNum_events138->SetBinError(1,1.203772);
   new_histo_group_top_hww2l2v_13TeV_0jee_HAccNum_events138->SetEntries(1202);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_top_hww2l2v_13TeV_0jee_HAccNum_events138->SetFillColor(ci);
   new_histo_group_top_hww2l2v_13TeV_0jee_HAccNum_events138->SetFillStyle(3001);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_top_hww2l2v_13TeV_0jee_HAccNum_events138->SetLineColor(ci);
   new_histo_group_top_hww2l2v_13TeV_0jee_HAccNum_events138->GetXaxis()->SetLabelFont(42);
   new_histo_group_top_hww2l2v_13TeV_0jee_HAccNum_events138->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_top_hww2l2v_13TeV_0jee_HAccNum_events138->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_top_hww2l2v_13TeV_0jee_HAccNum_events138->GetXaxis()->SetTitleFont(42);
   new_histo_group_top_hww2l2v_13TeV_0jee_HAccNum_events138->GetYaxis()->SetLabelFont(42);
   new_histo_group_top_hww2l2v_13TeV_0jee_HAccNum_events138->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_top_hww2l2v_13TeV_0jee_HAccNum_events138->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_top_hww2l2v_13TeV_0jee_HAccNum_events138->GetYaxis()->SetTitleFont(42);
   new_histo_group_top_hww2l2v_13TeV_0jee_HAccNum_events138->GetZaxis()->SetLabelFont(42);
   new_histo_group_top_hww2l2v_13TeV_0jee_HAccNum_events138->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_top_hww2l2v_13TeV_0jee_HAccNum_events138->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_top_hww2l2v_13TeV_0jee_HAccNum_events138->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_hww2l2v_13TeV_0jee_HAccNum_events->Add(new_histo_group_top_hww2l2v_13TeV_0jee_HAccNum_events,"");
   
   TH1D *new_histo_group_WW_hww2l2v_13TeV_0jee_HAccNum_events139 = new TH1D("new_histo_group_WW_hww2l2v_13TeV_0jee_HAccNum_events139","histo_WW",1,0,2);
   new_histo_group_WW_hww2l2v_13TeV_0jee_HAccNum_events139->SetBinContent(1,476.2839);
   new_histo_group_WW_hww2l2v_13TeV_0jee_HAccNum_events139->SetBinError(1,9.055244);
   new_histo_group_WW_hww2l2v_13TeV_0jee_HAccNum_events139->SetEntries(3754);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_hww2l2v_13TeV_0jee_HAccNum_events139->SetFillColor(ci);
   new_histo_group_WW_hww2l2v_13TeV_0jee_HAccNum_events139->SetFillStyle(3001);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_hww2l2v_13TeV_0jee_HAccNum_events139->SetLineColor(ci);
   new_histo_group_WW_hww2l2v_13TeV_0jee_HAccNum_events139->GetXaxis()->SetLabelFont(42);
   new_histo_group_WW_hww2l2v_13TeV_0jee_HAccNum_events139->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WW_hww2l2v_13TeV_0jee_HAccNum_events139->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WW_hww2l2v_13TeV_0jee_HAccNum_events139->GetXaxis()->SetTitleFont(42);
   new_histo_group_WW_hww2l2v_13TeV_0jee_HAccNum_events139->GetYaxis()->SetLabelFont(42);
   new_histo_group_WW_hww2l2v_13TeV_0jee_HAccNum_events139->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WW_hww2l2v_13TeV_0jee_HAccNum_events139->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WW_hww2l2v_13TeV_0jee_HAccNum_events139->GetYaxis()->SetTitleFont(42);
   new_histo_group_WW_hww2l2v_13TeV_0jee_HAccNum_events139->GetZaxis()->SetLabelFont(42);
   new_histo_group_WW_hww2l2v_13TeV_0jee_HAccNum_events139->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WW_hww2l2v_13TeV_0jee_HAccNum_events139->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WW_hww2l2v_13TeV_0jee_HAccNum_events139->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_hww2l2v_13TeV_0jee_HAccNum_events->Add(new_histo_group_WW_hww2l2v_13TeV_0jee_HAccNum_events,"");
   
   TH1D *new_histo_group_VVV_hww2l2v_13TeV_0jee_HAccNum_events140 = new TH1D("new_histo_group_VVV_hww2l2v_13TeV_0jee_HAccNum_events140","histo_VVV",1,0,2);
   new_histo_group_VVV_hww2l2v_13TeV_0jee_HAccNum_events140->SetBinContent(1,0.2588802);
   new_histo_group_VVV_hww2l2v_13TeV_0jee_HAccNum_events140->SetBinError(1,0.07854668);
   new_histo_group_VVV_hww2l2v_13TeV_0jee_HAccNum_events140->SetEntries(12);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_hww2l2v_13TeV_0jee_HAccNum_events140->SetFillColor(ci);
   new_histo_group_VVV_hww2l2v_13TeV_0jee_HAccNum_events140->SetFillStyle(3001);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_hww2l2v_13TeV_0jee_HAccNum_events140->SetLineColor(ci);
   new_histo_group_VVV_hww2l2v_13TeV_0jee_HAccNum_events140->GetXaxis()->SetLabelFont(42);
   new_histo_group_VVV_hww2l2v_13TeV_0jee_HAccNum_events140->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_hww2l2v_13TeV_0jee_HAccNum_events140->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_hww2l2v_13TeV_0jee_HAccNum_events140->GetXaxis()->SetTitleFont(42);
   new_histo_group_VVV_hww2l2v_13TeV_0jee_HAccNum_events140->GetYaxis()->SetLabelFont(42);
   new_histo_group_VVV_hww2l2v_13TeV_0jee_HAccNum_events140->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_hww2l2v_13TeV_0jee_HAccNum_events140->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_hww2l2v_13TeV_0jee_HAccNum_events140->GetYaxis()->SetTitleFont(42);
   new_histo_group_VVV_hww2l2v_13TeV_0jee_HAccNum_events140->GetZaxis()->SetLabelFont(42);
   new_histo_group_VVV_hww2l2v_13TeV_0jee_HAccNum_events140->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_hww2l2v_13TeV_0jee_HAccNum_events140->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_hww2l2v_13TeV_0jee_HAccNum_events140->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_hww2l2v_13TeV_0jee_HAccNum_events->Add(new_histo_group_VVV_hww2l2v_13TeV_0jee_HAccNum_events,"");
   
   TH1D *new_histo_group_VZ_hww2l2v_13TeV_0jee_HAccNum_events141 = new TH1D("new_histo_group_VZ_hww2l2v_13TeV_0jee_HAccNum_events141","histo_Vg",1,0,2);
   new_histo_group_VZ_hww2l2v_13TeV_0jee_HAccNum_events141->SetBinContent(1,516.0227);
   new_histo_group_VZ_hww2l2v_13TeV_0jee_HAccNum_events141->SetBinError(1,122.3337);
   new_histo_group_VZ_hww2l2v_13TeV_0jee_HAccNum_events141->SetEntries(2051);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_VZ_hww2l2v_13TeV_0jee_HAccNum_events141->SetFillColor(ci);
   new_histo_group_VZ_hww2l2v_13TeV_0jee_HAccNum_events141->SetFillStyle(3001);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_VZ_hww2l2v_13TeV_0jee_HAccNum_events141->SetLineColor(ci);
   new_histo_group_VZ_hww2l2v_13TeV_0jee_HAccNum_events141->GetXaxis()->SetLabelFont(42);
   new_histo_group_VZ_hww2l2v_13TeV_0jee_HAccNum_events141->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_VZ_hww2l2v_13TeV_0jee_HAccNum_events141->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_VZ_hww2l2v_13TeV_0jee_HAccNum_events141->GetXaxis()->SetTitleFont(42);
   new_histo_group_VZ_hww2l2v_13TeV_0jee_HAccNum_events141->GetYaxis()->SetLabelFont(42);
   new_histo_group_VZ_hww2l2v_13TeV_0jee_HAccNum_events141->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_VZ_hww2l2v_13TeV_0jee_HAccNum_events141->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_VZ_hww2l2v_13TeV_0jee_HAccNum_events141->GetYaxis()->SetTitleFont(42);
   new_histo_group_VZ_hww2l2v_13TeV_0jee_HAccNum_events141->GetZaxis()->SetLabelFont(42);
   new_histo_group_VZ_hww2l2v_13TeV_0jee_HAccNum_events141->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_VZ_hww2l2v_13TeV_0jee_HAccNum_events141->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_VZ_hww2l2v_13TeV_0jee_HAccNum_events141->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_hww2l2v_13TeV_0jee_HAccNum_events->Add(new_histo_group_VZ_hww2l2v_13TeV_0jee_HAccNum_events,"");
   
   TH1D *new_histo_group_Higgs_hww2l2v_13TeV_0jee_HAccNum_events142 = new TH1D("new_histo_group_Higgs_hww2l2v_13TeV_0jee_HAccNum_events142","histo_H_htt",1,0,2);
   new_histo_group_Higgs_hww2l2v_13TeV_0jee_HAccNum_events142->SetBinContent(1,96.40076);
   new_histo_group_Higgs_hww2l2v_13TeV_0jee_HAccNum_events142->SetBinError(1,2.470422);
   new_histo_group_Higgs_hww2l2v_13TeV_0jee_HAccNum_events142->SetEntries(1956);
   new_histo_group_Higgs_hww2l2v_13TeV_0jee_HAccNum_events142->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_hww2l2v_13TeV_0jee_HAccNum_events142->SetLineColor(ci);
   new_histo_group_Higgs_hww2l2v_13TeV_0jee_HAccNum_events142->SetLineWidth(2);
   new_histo_group_Higgs_hww2l2v_13TeV_0jee_HAccNum_events142->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_hww2l2v_13TeV_0jee_HAccNum_events142->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_hww2l2v_13TeV_0jee_HAccNum_events142->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_hww2l2v_13TeV_0jee_HAccNum_events142->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_hww2l2v_13TeV_0jee_HAccNum_events142->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_hww2l2v_13TeV_0jee_HAccNum_events142->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_hww2l2v_13TeV_0jee_HAccNum_events142->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_hww2l2v_13TeV_0jee_HAccNum_events142->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_hww2l2v_13TeV_0jee_HAccNum_events142->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_hww2l2v_13TeV_0jee_HAccNum_events142->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_hww2l2v_13TeV_0jee_HAccNum_events142->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_hww2l2v_13TeV_0jee_HAccNum_events142->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_hww2l2v_13TeV_0jee_HAccNum_events->Add(new_histo_group_Higgs_hww2l2v_13TeV_0jee_HAccNum_events,"");
   thsBackground_grouped_hww2l2v_13TeV_0jee_HAccNum_events->Draw("hist same");
   
   thsSignal_grouped_hww2l2v_13TeV_0jee_HAccNum_events = new THStack();
   thsSignal_grouped_hww2l2v_13TeV_0jee_HAccNum_events->SetName("thsSignal_grouped_hww2l2v_13TeV_0jee_HAccNum_events");
   thsSignal_grouped_hww2l2v_13TeV_0jee_HAccNum_events->SetTitle("thsSignal_grouped_hww2l2v_13TeV_0jee_HAccNum_events");
   
   TH1F *thsSignal_grouped_hww2l2v_13TeV_0jee_HAccNum_events_stack_32 = new TH1F("thsSignal_grouped_hww2l2v_13TeV_0jee_HAccNum_events_stack_32","thsSignal_grouped_hww2l2v_13TeV_0jee_HAccNum_events",1,0,2);
   thsSignal_grouped_hww2l2v_13TeV_0jee_HAccNum_events_stack_32->SetMinimum(0);
   thsSignal_grouped_hww2l2v_13TeV_0jee_HAccNum_events_stack_32->SetMaximum(103.8147);
   thsSignal_grouped_hww2l2v_13TeV_0jee_HAccNum_events_stack_32->SetDirectory(0);
   thsSignal_grouped_hww2l2v_13TeV_0jee_HAccNum_events_stack_32->SetStats(0);
   thsSignal_grouped_hww2l2v_13TeV_0jee_HAccNum_events_stack_32->SetLineStyle(0);
   thsSignal_grouped_hww2l2v_13TeV_0jee_HAccNum_events_stack_32->SetMarkerStyle(20);
   thsSignal_grouped_hww2l2v_13TeV_0jee_HAccNum_events_stack_32->GetXaxis()->SetLabelFont(42);
   thsSignal_grouped_hww2l2v_13TeV_0jee_HAccNum_events_stack_32->GetXaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_hww2l2v_13TeV_0jee_HAccNum_events_stack_32->GetXaxis()->SetLabelSize(0.05);
   thsSignal_grouped_hww2l2v_13TeV_0jee_HAccNum_events_stack_32->GetXaxis()->SetTitleSize(0.06);
   thsSignal_grouped_hww2l2v_13TeV_0jee_HAccNum_events_stack_32->GetXaxis()->SetTitleOffset(0.9);
   thsSignal_grouped_hww2l2v_13TeV_0jee_HAccNum_events_stack_32->GetXaxis()->SetTitleFont(42);
   thsSignal_grouped_hww2l2v_13TeV_0jee_HAccNum_events_stack_32->GetYaxis()->SetLabelFont(42);
   thsSignal_grouped_hww2l2v_13TeV_0jee_HAccNum_events_stack_32->GetYaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_hww2l2v_13TeV_0jee_HAccNum_events_stack_32->GetYaxis()->SetLabelSize(0.05);
   thsSignal_grouped_hww2l2v_13TeV_0jee_HAccNum_events_stack_32->GetYaxis()->SetTitleSize(0.06);
   thsSignal_grouped_hww2l2v_13TeV_0jee_HAccNum_events_stack_32->GetYaxis()->SetTitleOffset(1.25);
   thsSignal_grouped_hww2l2v_13TeV_0jee_HAccNum_events_stack_32->GetYaxis()->SetTitleFont(42);
   thsSignal_grouped_hww2l2v_13TeV_0jee_HAccNum_events_stack_32->GetZaxis()->SetLabelFont(42);
   thsSignal_grouped_hww2l2v_13TeV_0jee_HAccNum_events_stack_32->GetZaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_hww2l2v_13TeV_0jee_HAccNum_events_stack_32->GetZaxis()->SetLabelSize(0.05);
   thsSignal_grouped_hww2l2v_13TeV_0jee_HAccNum_events_stack_32->GetZaxis()->SetTitleSize(0.06);
   thsSignal_grouped_hww2l2v_13TeV_0jee_HAccNum_events_stack_32->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_hww2l2v_13TeV_0jee_HAccNum_events->SetHistogram(thsSignal_grouped_hww2l2v_13TeV_0jee_HAccNum_events_stack_32);
   
   
   TH1D *new_histo_group_Higgs_hww2l2v_13TeV_0jee_HAccNum_events143 = new TH1D("new_histo_group_Higgs_hww2l2v_13TeV_0jee_HAccNum_events143","histo_H_htt",1,0,2);
   new_histo_group_Higgs_hww2l2v_13TeV_0jee_HAccNum_events143->SetBinContent(1,96.40076);
   new_histo_group_Higgs_hww2l2v_13TeV_0jee_HAccNum_events143->SetBinError(1,2.470422);
   new_histo_group_Higgs_hww2l2v_13TeV_0jee_HAccNum_events143->SetEntries(1956);
   new_histo_group_Higgs_hww2l2v_13TeV_0jee_HAccNum_events143->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_hww2l2v_13TeV_0jee_HAccNum_events143->SetLineColor(ci);
   new_histo_group_Higgs_hww2l2v_13TeV_0jee_HAccNum_events143->SetLineWidth(2);
   new_histo_group_Higgs_hww2l2v_13TeV_0jee_HAccNum_events143->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_hww2l2v_13TeV_0jee_HAccNum_events143->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_hww2l2v_13TeV_0jee_HAccNum_events143->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_hww2l2v_13TeV_0jee_HAccNum_events143->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_hww2l2v_13TeV_0jee_HAccNum_events143->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_hww2l2v_13TeV_0jee_HAccNum_events143->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_hww2l2v_13TeV_0jee_HAccNum_events143->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_hww2l2v_13TeV_0jee_HAccNum_events143->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_hww2l2v_13TeV_0jee_HAccNum_events143->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_hww2l2v_13TeV_0jee_HAccNum_events143->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_hww2l2v_13TeV_0jee_HAccNum_events143->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_hww2l2v_13TeV_0jee_HAccNum_events143->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_hww2l2v_13TeV_0jee_HAccNum_events->Add(new_histo_group_Higgs_hww2l2v_13TeV_0jee_HAccNum_events,"");
   thsSignal_grouped_hww2l2v_13TeV_0jee_HAccNum_events->Draw("hist same noclear");
   
   Double_t _fx3022[1] = {
   1};
   Double_t _fy3022[1] = {
   8019};
   Double_t _felx3022[1] = {
   1};
   Double_t _fely3022[1] = {
   89.54893};
   Double_t _fehx3022[1] = {
   1};
   Double_t _fehy3022[1] = {
   90.55455};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(1,_fx3022,_fy3022,_felx3022,_fehx3022,_fely3022,_fehy3022);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(1);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3022 = new TH1F("Graph_Graph3022","",100,0,2.2);
   Graph_Graph3022->SetMinimum(7911.441);
   Graph_Graph3022->SetMaximum(8127.565);
   Graph_Graph3022->SetDirectory(0);
   Graph_Graph3022->SetStats(0);
   Graph_Graph3022->SetLineStyle(0);
   Graph_Graph3022->SetMarkerStyle(20);
   Graph_Graph3022->GetXaxis()->SetLabelFont(42);
   Graph_Graph3022->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3022->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3022->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3022->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3022->GetXaxis()->SetTitleFont(42);
   Graph_Graph3022->GetYaxis()->SetLabelFont(42);
   Graph_Graph3022->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3022->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3022->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3022->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3022->GetYaxis()->SetTitleFont(42);
   Graph_Graph3022->GetZaxis()->SetLabelFont(42);
   Graph_Graph3022->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3022->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3022->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3022->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3022);
   
   grae->Draw("p0");
   
   TLegend *leg = new TLegend(0.2,0.7,0.8,0.9,NULL,"brNDC");
   leg->SetTextFont(62);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("new_histo_group_DY_hww2l2v_13TeV_0jee_HAccNum_events","DY","F");

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
   entry=leg->AddEntry("new_histo_group_top_hww2l2v_13TeV_0jee_HAccNum_events","tW and t#bart","F");

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
   entry=leg->AddEntry("new_histo_group_WW_hww2l2v_13TeV_0jee_HAccNum_events","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_hww2l2v_13TeV_0jee_HAccNum_events","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_VZ_hww2l2v_13TeV_0jee_HAccNum_events","VZ/#gamma*/#gamma","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_hww2l2v_13TeV_0jee_HAccNum_events","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_hww2l2v_13TeV_0jee_HAccNum_events","Data","EPL");
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
   entry=leg->AddEntry("new_histo_group_DY_hww2l2v_13TeV_0jee_HAccNum_events","DY","F");

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
   entry=leg->AddEntry("new_histo_group_top_hww2l2v_13TeV_0jee_HAccNum_events","tW and t#bart","F");

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
   entry=leg->AddEntry("new_histo_group_WW_hww2l2v_13TeV_0jee_HAccNum_events","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_hww2l2v_13TeV_0jee_HAccNum_events","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_VZ_hww2l2v_13TeV_0jee_HAccNum_events","VZ/#gamma*/#gamma","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_hww2l2v_13TeV_0jee_HAccNum_events","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_hww2l2v_13TeV_0jee_HAccNum_events","Data","EPL");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   leg->Draw();
   
   TH1F *hframe_copy144 = new TH1F("hframe_copy144","",1000,0,2);
   hframe_copy144->SetMinimum(0);
   hframe_copy144->SetMaximum(20271.37);
   hframe_copy144->SetDirectory(0);
   hframe_copy144->SetStats(0);
   hframe_copy144->SetLineStyle(0);
   hframe_copy144->SetMarkerStyle(20);
   hframe_copy144->GetXaxis()->SetTitle("events");
   hframe_copy144->GetXaxis()->SetNdivisions(506);
   hframe_copy144->GetXaxis()->SetLabelFont(42);
   hframe_copy144->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy144->GetXaxis()->SetLabelSize(0.05);
   hframe_copy144->GetXaxis()->SetTitleSize(0.06);
   hframe_copy144->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy144->GetXaxis()->SetTitleFont(42);
   hframe_copy144->GetYaxis()->SetTitle("Events");
   hframe_copy144->GetYaxis()->SetLabelFont(42);
   hframe_copy144->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy144->GetYaxis()->SetLabelSize(0.05);
   hframe_copy144->GetYaxis()->SetTitleSize(0.06);
   hframe_copy144->GetYaxis()->SetTitleOffset(1.25);
   hframe_copy144->GetYaxis()->SetTitleFont(42);
   hframe_copy144->GetZaxis()->SetLabelFont(42);
   hframe_copy144->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy144->GetZaxis()->SetLabelSize(0.05);
   hframe_copy144->GetZaxis()->SetTitleSize(0.06);
   hframe_copy144->GetZaxis()->SetTitleFont(42);
   hframe_copy144->Draw("sameaxis");
   cchww2l2v_13TeV_0jee_HAccNum_events->Modified();
   cchww2l2v_13TeV_0jee_HAccNum_events->cd();
   cchww2l2v_13TeV_0jee_HAccNum_events->SetSelected(cchww2l2v_13TeV_0jee_HAccNum_events);
}
