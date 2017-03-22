void c_hww2l2v_13TeV_WW_0jee_events()
{
//=========Macro generated from canvas: cchww2l2v_13TeV_WW_0jee_events/cc
//=========  (Tue Mar 21 11:46:13 2017) by ROOT version6.02/13
   TCanvas *cchww2l2v_13TeV_WW_0jee_events = new TCanvas("cchww2l2v_13TeV_WW_0jee_events", "cc",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   cchww2l2v_13TeV_WW_0jee_events->SetHighLightColor(2);
   cchww2l2v_13TeV_WW_0jee_events->Range(-0.4,-719.0011,2.1,4811.777);
   cchww2l2v_13TeV_WW_0jee_events->SetFillColor(0);
   cchww2l2v_13TeV_WW_0jee_events->SetBorderMode(0);
   cchww2l2v_13TeV_WW_0jee_events->SetBorderSize(2);
   cchww2l2v_13TeV_WW_0jee_events->SetTickx(1);
   cchww2l2v_13TeV_WW_0jee_events->SetTicky(1);
   cchww2l2v_13TeV_WW_0jee_events->SetLeftMargin(0.16);
   cchww2l2v_13TeV_WW_0jee_events->SetRightMargin(0.04);
   cchww2l2v_13TeV_WW_0jee_events->SetTopMargin(0.05);
   cchww2l2v_13TeV_WW_0jee_events->SetBottomMargin(0.13);
   cchww2l2v_13TeV_WW_0jee_events->SetFrameFillStyle(0);
   cchww2l2v_13TeV_WW_0jee_events->SetFrameBorderMode(0);
   cchww2l2v_13TeV_WW_0jee_events->SetFrameFillStyle(0);
   cchww2l2v_13TeV_WW_0jee_events->SetFrameBorderMode(0);
   
   TH1F *hframe19 = new TH1F("hframe19","",1000,0,2);
   hframe19->SetMinimum(0);
   hframe19->SetMaximum(4535.238);
   hframe19->SetDirectory(0);
   hframe19->SetStats(0);
   hframe19->SetLineStyle(0);
   hframe19->SetMarkerStyle(20);
   hframe19->GetXaxis()->SetTitle("events");
   hframe19->GetXaxis()->SetNdivisions(506);
   hframe19->GetXaxis()->SetLabelFont(42);
   hframe19->GetXaxis()->SetLabelOffset(0.007);
   hframe19->GetXaxis()->SetLabelSize(0.05);
   hframe19->GetXaxis()->SetTitleSize(0.06);
   hframe19->GetXaxis()->SetTitleOffset(0.9);
   hframe19->GetXaxis()->SetTitleFont(42);
   hframe19->GetYaxis()->SetTitle("Events");
   hframe19->GetYaxis()->SetLabelFont(42);
   hframe19->GetYaxis()->SetLabelOffset(0.007);
   hframe19->GetYaxis()->SetLabelSize(0.05);
   hframe19->GetYaxis()->SetTitleSize(0.06);
   hframe19->GetYaxis()->SetTitleOffset(1.25);
   hframe19->GetYaxis()->SetTitleFont(42);
   hframe19->GetZaxis()->SetLabelFont(42);
   hframe19->GetZaxis()->SetLabelOffset(0.007);
   hframe19->GetZaxis()->SetLabelSize(0.05);
   hframe19->GetZaxis()->SetTitleSize(0.06);
   hframe19->GetZaxis()->SetTitleFont(42);
   hframe19->Draw(" ");
   
   THStack *thsBackground_grouped_hww2l2v_13TeV_WW_0jee_events = new THStack();
   thsBackground_grouped_hww2l2v_13TeV_WW_0jee_events->SetName("thsBackground_grouped_hww2l2v_13TeV_WW_0jee_events");
   thsBackground_grouped_hww2l2v_13TeV_WW_0jee_events->SetTitle("thsBackground_grouped_hww2l2v_13TeV_WW_0jee_events");
   
   TH1F *thsBackground_grouped_hww2l2v_13TeV_WW_0jee_events_stack_5 = new TH1F("thsBackground_grouped_hww2l2v_13TeV_WW_0jee_events_stack_5","thsBackground_grouped_hww2l2v_13TeV_WW_0jee_events",1,0,2);
   thsBackground_grouped_hww2l2v_13TeV_WW_0jee_events_stack_5->SetMinimum(0);
   thsBackground_grouped_hww2l2v_13TeV_WW_0jee_events_stack_5->SetMaximum(1114.265);
   thsBackground_grouped_hww2l2v_13TeV_WW_0jee_events_stack_5->SetDirectory(0);
   thsBackground_grouped_hww2l2v_13TeV_WW_0jee_events_stack_5->SetStats(0);
   thsBackground_grouped_hww2l2v_13TeV_WW_0jee_events_stack_5->SetLineStyle(0);
   thsBackground_grouped_hww2l2v_13TeV_WW_0jee_events_stack_5->SetMarkerStyle(20);
   thsBackground_grouped_hww2l2v_13TeV_WW_0jee_events_stack_5->GetXaxis()->SetLabelFont(42);
   thsBackground_grouped_hww2l2v_13TeV_WW_0jee_events_stack_5->GetXaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_hww2l2v_13TeV_WW_0jee_events_stack_5->GetXaxis()->SetLabelSize(0.05);
   thsBackground_grouped_hww2l2v_13TeV_WW_0jee_events_stack_5->GetXaxis()->SetTitleSize(0.06);
   thsBackground_grouped_hww2l2v_13TeV_WW_0jee_events_stack_5->GetXaxis()->SetTitleOffset(0.9);
   thsBackground_grouped_hww2l2v_13TeV_WW_0jee_events_stack_5->GetXaxis()->SetTitleFont(42);
   thsBackground_grouped_hww2l2v_13TeV_WW_0jee_events_stack_5->GetYaxis()->SetLabelFont(42);
   thsBackground_grouped_hww2l2v_13TeV_WW_0jee_events_stack_5->GetYaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_hww2l2v_13TeV_WW_0jee_events_stack_5->GetYaxis()->SetLabelSize(0.05);
   thsBackground_grouped_hww2l2v_13TeV_WW_0jee_events_stack_5->GetYaxis()->SetTitleSize(0.06);
   thsBackground_grouped_hww2l2v_13TeV_WW_0jee_events_stack_5->GetYaxis()->SetTitleOffset(1.25);
   thsBackground_grouped_hww2l2v_13TeV_WW_0jee_events_stack_5->GetYaxis()->SetTitleFont(42);
   thsBackground_grouped_hww2l2v_13TeV_WW_0jee_events_stack_5->GetZaxis()->SetLabelFont(42);
   thsBackground_grouped_hww2l2v_13TeV_WW_0jee_events_stack_5->GetZaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_hww2l2v_13TeV_WW_0jee_events_stack_5->GetZaxis()->SetLabelSize(0.05);
   thsBackground_grouped_hww2l2v_13TeV_WW_0jee_events_stack_5->GetZaxis()->SetTitleSize(0.06);
   thsBackground_grouped_hww2l2v_13TeV_WW_0jee_events_stack_5->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_hww2l2v_13TeV_WW_0jee_events->SetHistogram(thsBackground_grouped_hww2l2v_13TeV_WW_0jee_events_stack_5);
   
   
   TH1D *new_histo_group_DY_hww2l2v_13TeV_WW_0jee_events20 = new TH1D("new_histo_group_DY_hww2l2v_13TeV_WW_0jee_events20","histo_DY",1,0,2);
   new_histo_group_DY_hww2l2v_13TeV_WW_0jee_events20->SetBinContent(1,153.0472);
   new_histo_group_DY_hww2l2v_13TeV_WW_0jee_events20->SetBinError(1,25.93741);
   new_histo_group_DY_hww2l2v_13TeV_WW_0jee_events20->SetEntries(143);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#009900");
   new_histo_group_DY_hww2l2v_13TeV_WW_0jee_events20->SetFillColor(ci);
   new_histo_group_DY_hww2l2v_13TeV_WW_0jee_events20->SetFillStyle(3001);

   ci = TColor::GetColor("#009900");
   new_histo_group_DY_hww2l2v_13TeV_WW_0jee_events20->SetLineColor(ci);
   new_histo_group_DY_hww2l2v_13TeV_WW_0jee_events20->GetXaxis()->SetLabelFont(42);
   new_histo_group_DY_hww2l2v_13TeV_WW_0jee_events20->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_DY_hww2l2v_13TeV_WW_0jee_events20->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_DY_hww2l2v_13TeV_WW_0jee_events20->GetXaxis()->SetTitleFont(42);
   new_histo_group_DY_hww2l2v_13TeV_WW_0jee_events20->GetYaxis()->SetLabelFont(42);
   new_histo_group_DY_hww2l2v_13TeV_WW_0jee_events20->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_DY_hww2l2v_13TeV_WW_0jee_events20->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_DY_hww2l2v_13TeV_WW_0jee_events20->GetYaxis()->SetTitleFont(42);
   new_histo_group_DY_hww2l2v_13TeV_WW_0jee_events20->GetZaxis()->SetLabelFont(42);
   new_histo_group_DY_hww2l2v_13TeV_WW_0jee_events20->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_DY_hww2l2v_13TeV_WW_0jee_events20->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_DY_hww2l2v_13TeV_WW_0jee_events20->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_hww2l2v_13TeV_WW_0jee_events->Add(new_histo_group_DY_hww2l2v_13TeV_WW_0jee_events,"");
   
   TH1D *new_histo_group_top_hww2l2v_13TeV_WW_0jee_events21 = new TH1D("new_histo_group_top_hww2l2v_13TeV_WW_0jee_events21","histo_top",1,0,2);
   new_histo_group_top_hww2l2v_13TeV_WW_0jee_events21->SetBinContent(1,175.1368);
   new_histo_group_top_hww2l2v_13TeV_WW_0jee_events21->SetBinError(1,2.572732);
   new_histo_group_top_hww2l2v_13TeV_WW_0jee_events21->SetEntries(5079);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_top_hww2l2v_13TeV_WW_0jee_events21->SetFillColor(ci);
   new_histo_group_top_hww2l2v_13TeV_WW_0jee_events21->SetFillStyle(3001);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_top_hww2l2v_13TeV_WW_0jee_events21->SetLineColor(ci);
   new_histo_group_top_hww2l2v_13TeV_WW_0jee_events21->GetXaxis()->SetLabelFont(42);
   new_histo_group_top_hww2l2v_13TeV_WW_0jee_events21->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_top_hww2l2v_13TeV_WW_0jee_events21->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_top_hww2l2v_13TeV_WW_0jee_events21->GetXaxis()->SetTitleFont(42);
   new_histo_group_top_hww2l2v_13TeV_WW_0jee_events21->GetYaxis()->SetLabelFont(42);
   new_histo_group_top_hww2l2v_13TeV_WW_0jee_events21->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_top_hww2l2v_13TeV_WW_0jee_events21->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_top_hww2l2v_13TeV_WW_0jee_events21->GetYaxis()->SetTitleFont(42);
   new_histo_group_top_hww2l2v_13TeV_WW_0jee_events21->GetZaxis()->SetLabelFont(42);
   new_histo_group_top_hww2l2v_13TeV_WW_0jee_events21->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_top_hww2l2v_13TeV_WW_0jee_events21->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_top_hww2l2v_13TeV_WW_0jee_events21->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_hww2l2v_13TeV_WW_0jee_events->Add(new_histo_group_top_hww2l2v_13TeV_WW_0jee_events,"");
   
   TH1D *new_histo_group_WW_hww2l2v_13TeV_WW_0jee_events22 = new TH1D("new_histo_group_WW_hww2l2v_13TeV_WW_0jee_events22","histo_WW",1,0,2);
   new_histo_group_WW_hww2l2v_13TeV_WW_0jee_events22->SetBinContent(1,550.0019);
   new_histo_group_WW_hww2l2v_13TeV_WW_0jee_events22->SetBinError(1,9.925909);
   new_histo_group_WW_hww2l2v_13TeV_WW_0jee_events22->SetEntries(3940);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_hww2l2v_13TeV_WW_0jee_events22->SetFillColor(ci);
   new_histo_group_WW_hww2l2v_13TeV_WW_0jee_events22->SetFillStyle(3001);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_hww2l2v_13TeV_WW_0jee_events22->SetLineColor(ci);
   new_histo_group_WW_hww2l2v_13TeV_WW_0jee_events22->GetXaxis()->SetLabelFont(42);
   new_histo_group_WW_hww2l2v_13TeV_WW_0jee_events22->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WW_hww2l2v_13TeV_WW_0jee_events22->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WW_hww2l2v_13TeV_WW_0jee_events22->GetXaxis()->SetTitleFont(42);
   new_histo_group_WW_hww2l2v_13TeV_WW_0jee_events22->GetYaxis()->SetLabelFont(42);
   new_histo_group_WW_hww2l2v_13TeV_WW_0jee_events22->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WW_hww2l2v_13TeV_WW_0jee_events22->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WW_hww2l2v_13TeV_WW_0jee_events22->GetYaxis()->SetTitleFont(42);
   new_histo_group_WW_hww2l2v_13TeV_WW_0jee_events22->GetZaxis()->SetLabelFont(42);
   new_histo_group_WW_hww2l2v_13TeV_WW_0jee_events22->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WW_hww2l2v_13TeV_WW_0jee_events22->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WW_hww2l2v_13TeV_WW_0jee_events22->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_hww2l2v_13TeV_WW_0jee_events->Add(new_histo_group_WW_hww2l2v_13TeV_WW_0jee_events,"");
   
   TH1D *new_histo_group_VVV_hww2l2v_13TeV_WW_0jee_events23 = new TH1D("new_histo_group_VVV_hww2l2v_13TeV_WW_0jee_events23","histo_VVV",1,0,2);
   new_histo_group_VVV_hww2l2v_13TeV_WW_0jee_events23->SetBinContent(1,0.8102255);
   new_histo_group_VVV_hww2l2v_13TeV_WW_0jee_events23->SetBinError(1,0.1559271);
   new_histo_group_VVV_hww2l2v_13TeV_WW_0jee_events23->SetEntries(45);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_hww2l2v_13TeV_WW_0jee_events23->SetFillColor(ci);
   new_histo_group_VVV_hww2l2v_13TeV_WW_0jee_events23->SetFillStyle(3001);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_hww2l2v_13TeV_WW_0jee_events23->SetLineColor(ci);
   new_histo_group_VVV_hww2l2v_13TeV_WW_0jee_events23->GetXaxis()->SetLabelFont(42);
   new_histo_group_VVV_hww2l2v_13TeV_WW_0jee_events23->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_hww2l2v_13TeV_WW_0jee_events23->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_hww2l2v_13TeV_WW_0jee_events23->GetXaxis()->SetTitleFont(42);
   new_histo_group_VVV_hww2l2v_13TeV_WW_0jee_events23->GetYaxis()->SetLabelFont(42);
   new_histo_group_VVV_hww2l2v_13TeV_WW_0jee_events23->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_hww2l2v_13TeV_WW_0jee_events23->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_hww2l2v_13TeV_WW_0jee_events23->GetYaxis()->SetTitleFont(42);
   new_histo_group_VVV_hww2l2v_13TeV_WW_0jee_events23->GetZaxis()->SetLabelFont(42);
   new_histo_group_VVV_hww2l2v_13TeV_WW_0jee_events23->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_hww2l2v_13TeV_WW_0jee_events23->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_hww2l2v_13TeV_WW_0jee_events23->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_hww2l2v_13TeV_WW_0jee_events->Add(new_histo_group_VVV_hww2l2v_13TeV_WW_0jee_events,"");
   
   TH1D *new_histo_group_VZ_hww2l2v_13TeV_WW_0jee_events24 = new TH1D("new_histo_group_VZ_hww2l2v_13TeV_WW_0jee_events24","histo_Vg",1,0,2);
   new_histo_group_VZ_hww2l2v_13TeV_WW_0jee_events24->SetBinContent(1,181.5849);
   new_histo_group_VZ_hww2l2v_13TeV_WW_0jee_events24->SetBinError(1,67.19695);
   new_histo_group_VZ_hww2l2v_13TeV_WW_0jee_events24->SetEntries(7827);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_VZ_hww2l2v_13TeV_WW_0jee_events24->SetFillColor(ci);
   new_histo_group_VZ_hww2l2v_13TeV_WW_0jee_events24->SetFillStyle(3001);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_VZ_hww2l2v_13TeV_WW_0jee_events24->SetLineColor(ci);
   new_histo_group_VZ_hww2l2v_13TeV_WW_0jee_events24->GetXaxis()->SetLabelFont(42);
   new_histo_group_VZ_hww2l2v_13TeV_WW_0jee_events24->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_VZ_hww2l2v_13TeV_WW_0jee_events24->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_VZ_hww2l2v_13TeV_WW_0jee_events24->GetXaxis()->SetTitleFont(42);
   new_histo_group_VZ_hww2l2v_13TeV_WW_0jee_events24->GetYaxis()->SetLabelFont(42);
   new_histo_group_VZ_hww2l2v_13TeV_WW_0jee_events24->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_VZ_hww2l2v_13TeV_WW_0jee_events24->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_VZ_hww2l2v_13TeV_WW_0jee_events24->GetYaxis()->SetTitleFont(42);
   new_histo_group_VZ_hww2l2v_13TeV_WW_0jee_events24->GetZaxis()->SetLabelFont(42);
   new_histo_group_VZ_hww2l2v_13TeV_WW_0jee_events24->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_VZ_hww2l2v_13TeV_WW_0jee_events24->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_VZ_hww2l2v_13TeV_WW_0jee_events24->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_hww2l2v_13TeV_WW_0jee_events->Add(new_histo_group_VZ_hww2l2v_13TeV_WW_0jee_events,"");
   
   TH1D *new_histo_group_Higgs_hww2l2v_13TeV_WW_0jee_events25 = new TH1D("new_histo_group_Higgs_hww2l2v_13TeV_WW_0jee_events25","histo_H_htt",1,0,2);
   new_histo_group_Higgs_hww2l2v_13TeV_WW_0jee_events25->SetBinContent(1,0.6235877);
   new_histo_group_Higgs_hww2l2v_13TeV_WW_0jee_events25->SetBinError(1,0.1085497);
   new_histo_group_Higgs_hww2l2v_13TeV_WW_0jee_events25->SetEntries(38);
   new_histo_group_Higgs_hww2l2v_13TeV_WW_0jee_events25->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_hww2l2v_13TeV_WW_0jee_events25->SetLineColor(ci);
   new_histo_group_Higgs_hww2l2v_13TeV_WW_0jee_events25->SetLineWidth(2);
   new_histo_group_Higgs_hww2l2v_13TeV_WW_0jee_events25->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_hww2l2v_13TeV_WW_0jee_events25->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_hww2l2v_13TeV_WW_0jee_events25->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_hww2l2v_13TeV_WW_0jee_events25->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_hww2l2v_13TeV_WW_0jee_events25->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_hww2l2v_13TeV_WW_0jee_events25->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_hww2l2v_13TeV_WW_0jee_events25->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_hww2l2v_13TeV_WW_0jee_events25->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_hww2l2v_13TeV_WW_0jee_events25->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_hww2l2v_13TeV_WW_0jee_events25->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_hww2l2v_13TeV_WW_0jee_events25->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_hww2l2v_13TeV_WW_0jee_events25->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_hww2l2v_13TeV_WW_0jee_events->Add(new_histo_group_Higgs_hww2l2v_13TeV_WW_0jee_events,"");
   thsBackground_grouped_hww2l2v_13TeV_WW_0jee_events->Draw("hist same");
   
   thsSignal_grouped_hww2l2v_13TeV_WW_0jee_events = new THStack();
   thsSignal_grouped_hww2l2v_13TeV_WW_0jee_events->SetName("thsSignal_grouped_hww2l2v_13TeV_WW_0jee_events");
   thsSignal_grouped_hww2l2v_13TeV_WW_0jee_events->SetTitle("thsSignal_grouped_hww2l2v_13TeV_WW_0jee_events");
   
   TH1F *thsSignal_grouped_hww2l2v_13TeV_WW_0jee_events_stack_6 = new TH1F("thsSignal_grouped_hww2l2v_13TeV_WW_0jee_events_stack_6","thsSignal_grouped_hww2l2v_13TeV_WW_0jee_events",1,0,2);
   thsSignal_grouped_hww2l2v_13TeV_WW_0jee_events_stack_6->SetMinimum(0);
   thsSignal_grouped_hww2l2v_13TeV_WW_0jee_events_stack_6->SetMaximum(0.7687443);
   thsSignal_grouped_hww2l2v_13TeV_WW_0jee_events_stack_6->SetDirectory(0);
   thsSignal_grouped_hww2l2v_13TeV_WW_0jee_events_stack_6->SetStats(0);
   thsSignal_grouped_hww2l2v_13TeV_WW_0jee_events_stack_6->SetLineStyle(0);
   thsSignal_grouped_hww2l2v_13TeV_WW_0jee_events_stack_6->SetMarkerStyle(20);
   thsSignal_grouped_hww2l2v_13TeV_WW_0jee_events_stack_6->GetXaxis()->SetLabelFont(42);
   thsSignal_grouped_hww2l2v_13TeV_WW_0jee_events_stack_6->GetXaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_hww2l2v_13TeV_WW_0jee_events_stack_6->GetXaxis()->SetLabelSize(0.05);
   thsSignal_grouped_hww2l2v_13TeV_WW_0jee_events_stack_6->GetXaxis()->SetTitleSize(0.06);
   thsSignal_grouped_hww2l2v_13TeV_WW_0jee_events_stack_6->GetXaxis()->SetTitleOffset(0.9);
   thsSignal_grouped_hww2l2v_13TeV_WW_0jee_events_stack_6->GetXaxis()->SetTitleFont(42);
   thsSignal_grouped_hww2l2v_13TeV_WW_0jee_events_stack_6->GetYaxis()->SetLabelFont(42);
   thsSignal_grouped_hww2l2v_13TeV_WW_0jee_events_stack_6->GetYaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_hww2l2v_13TeV_WW_0jee_events_stack_6->GetYaxis()->SetLabelSize(0.05);
   thsSignal_grouped_hww2l2v_13TeV_WW_0jee_events_stack_6->GetYaxis()->SetTitleSize(0.06);
   thsSignal_grouped_hww2l2v_13TeV_WW_0jee_events_stack_6->GetYaxis()->SetTitleOffset(1.25);
   thsSignal_grouped_hww2l2v_13TeV_WW_0jee_events_stack_6->GetYaxis()->SetTitleFont(42);
   thsSignal_grouped_hww2l2v_13TeV_WW_0jee_events_stack_6->GetZaxis()->SetLabelFont(42);
   thsSignal_grouped_hww2l2v_13TeV_WW_0jee_events_stack_6->GetZaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_hww2l2v_13TeV_WW_0jee_events_stack_6->GetZaxis()->SetLabelSize(0.05);
   thsSignal_grouped_hww2l2v_13TeV_WW_0jee_events_stack_6->GetZaxis()->SetTitleSize(0.06);
   thsSignal_grouped_hww2l2v_13TeV_WW_0jee_events_stack_6->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_hww2l2v_13TeV_WW_0jee_events->SetHistogram(thsSignal_grouped_hww2l2v_13TeV_WW_0jee_events_stack_6);
   
   
   TH1D *new_histo_group_Higgs_hww2l2v_13TeV_WW_0jee_events26 = new TH1D("new_histo_group_Higgs_hww2l2v_13TeV_WW_0jee_events26","histo_H_htt",1,0,2);
   new_histo_group_Higgs_hww2l2v_13TeV_WW_0jee_events26->SetBinContent(1,0.6235877);
   new_histo_group_Higgs_hww2l2v_13TeV_WW_0jee_events26->SetBinError(1,0.1085497);
   new_histo_group_Higgs_hww2l2v_13TeV_WW_0jee_events26->SetEntries(38);
   new_histo_group_Higgs_hww2l2v_13TeV_WW_0jee_events26->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_hww2l2v_13TeV_WW_0jee_events26->SetLineColor(ci);
   new_histo_group_Higgs_hww2l2v_13TeV_WW_0jee_events26->SetLineWidth(2);
   new_histo_group_Higgs_hww2l2v_13TeV_WW_0jee_events26->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_hww2l2v_13TeV_WW_0jee_events26->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_hww2l2v_13TeV_WW_0jee_events26->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_hww2l2v_13TeV_WW_0jee_events26->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_hww2l2v_13TeV_WW_0jee_events26->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_hww2l2v_13TeV_WW_0jee_events26->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_hww2l2v_13TeV_WW_0jee_events26->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_hww2l2v_13TeV_WW_0jee_events26->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_hww2l2v_13TeV_WW_0jee_events26->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_hww2l2v_13TeV_WW_0jee_events26->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_hww2l2v_13TeV_WW_0jee_events26->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_hww2l2v_13TeV_WW_0jee_events26->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_hww2l2v_13TeV_WW_0jee_events->Add(new_histo_group_Higgs_hww2l2v_13TeV_WW_0jee_events,"");
   thsSignal_grouped_hww2l2v_13TeV_WW_0jee_events->Draw("hist same noclear");
   
   Double_t _fx3003[1] = {
   1};
   Double_t _fy3003[1] = {
   1060.581};
   Double_t _felx3003[1] = {
   1};
   Double_t _fely3003[1] = {
   0};
   Double_t _fehx3003[1] = {
   1};
   Double_t _fehy3003[1] = {
   0};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(1,_fx3003,_fy3003,_felx3003,_fehx3003,_fely3003,_fehy3003);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(12);
   grae->SetFillStyle(3004);
   grae->SetLineColor(12);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3003 = new TH1F("Graph_Graph3003","",100,0,2.2);
   Graph_Graph3003->SetMinimum(1060.481);
   Graph_Graph3003->SetMaximum(1061.681);
   Graph_Graph3003->SetDirectory(0);
   Graph_Graph3003->SetStats(0);
   Graph_Graph3003->SetLineStyle(0);
   Graph_Graph3003->SetMarkerStyle(20);
   Graph_Graph3003->GetXaxis()->SetLabelFont(42);
   Graph_Graph3003->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3003->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3003->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3003->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3003->GetXaxis()->SetTitleFont(42);
   Graph_Graph3003->GetYaxis()->SetLabelFont(42);
   Graph_Graph3003->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3003->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3003->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3003->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3003->GetYaxis()->SetTitleFont(42);
   Graph_Graph3003->GetZaxis()->SetLabelFont(42);
   Graph_Graph3003->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3003->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3003->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3003->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3003);
   
   grae->Draw("2");
   
   Double_t _fx3004[1] = {
   1};
   Double_t _fy3004[1] = {
   1772};
   Double_t _felx3004[1] = {
   1};
   Double_t _fely3004[1] = {
   42.09207};
   Double_t _fehx3004[1] = {
   1};
   Double_t _fehy3004[1] = {
   43.10398};
   grae = new TGraphAsymmErrors(1,_fx3004,_fy3004,_felx3004,_fehx3004,_fely3004,_fehy3004);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(1);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3004 = new TH1F("Graph_Graph3004","",100,0,2.2);
   Graph_Graph3004->SetMinimum(1721.388);
   Graph_Graph3004->SetMaximum(1823.624);
   Graph_Graph3004->SetDirectory(0);
   Graph_Graph3004->SetStats(0);
   Graph_Graph3004->SetLineStyle(0);
   Graph_Graph3004->SetMarkerStyle(20);
   Graph_Graph3004->GetXaxis()->SetLabelFont(42);
   Graph_Graph3004->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3004->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3004->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3004->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3004->GetXaxis()->SetTitleFont(42);
   Graph_Graph3004->GetYaxis()->SetLabelFont(42);
   Graph_Graph3004->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3004->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3004->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3004->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3004->GetYaxis()->SetTitleFont(42);
   Graph_Graph3004->GetZaxis()->SetLabelFont(42);
   Graph_Graph3004->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3004->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3004->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3004->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3004);
   
   grae->Draw("p0");
   
   TLegend *leg = new TLegend(0.2,0.7,0.8,0.9,NULL,"brNDC");
   leg->SetTextFont(62);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("new_histo_group_DY_hww2l2v_13TeV_WW_0jee_events","DY","F");

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
   entry=leg->AddEntry("new_histo_group_top_hww2l2v_13TeV_WW_0jee_events","tW and t#bart","F");

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
   entry=leg->AddEntry("new_histo_group_WW_hww2l2v_13TeV_WW_0jee_events","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_hww2l2v_13TeV_WW_0jee_events","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_VZ_hww2l2v_13TeV_WW_0jee_events","VZ/#gamma*/#gamma","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_hww2l2v_13TeV_WW_0jee_events","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_hww2l2v_13TeV_WW_0jee_events","Data","EPL");
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
   entry=leg->AddEntry("new_histo_group_DY_hww2l2v_13TeV_WW_0jee_events","DY","F");

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
   entry=leg->AddEntry("new_histo_group_top_hww2l2v_13TeV_WW_0jee_events","tW and t#bart","F");

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
   entry=leg->AddEntry("new_histo_group_WW_hww2l2v_13TeV_WW_0jee_events","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_hww2l2v_13TeV_WW_0jee_events","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_VZ_hww2l2v_13TeV_WW_0jee_events","VZ/#gamma*/#gamma","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_hww2l2v_13TeV_WW_0jee_events","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_hww2l2v_13TeV_WW_0jee_events","Data","EPL");
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
   
   TH1F *hframe_copy27 = new TH1F("hframe_copy27","",1000,0,2);
   hframe_copy27->SetMinimum(0);
   hframe_copy27->SetMaximum(4535.238);
   hframe_copy27->SetDirectory(0);
   hframe_copy27->SetStats(0);
   hframe_copy27->SetLineStyle(0);
   hframe_copy27->SetMarkerStyle(20);
   hframe_copy27->GetXaxis()->SetTitle("events");
   hframe_copy27->GetXaxis()->SetNdivisions(506);
   hframe_copy27->GetXaxis()->SetLabelFont(42);
   hframe_copy27->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy27->GetXaxis()->SetLabelSize(0.05);
   hframe_copy27->GetXaxis()->SetTitleSize(0.06);
   hframe_copy27->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy27->GetXaxis()->SetTitleFont(42);
   hframe_copy27->GetYaxis()->SetTitle("Events");
   hframe_copy27->GetYaxis()->SetLabelFont(42);
   hframe_copy27->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy27->GetYaxis()->SetLabelSize(0.05);
   hframe_copy27->GetYaxis()->SetTitleSize(0.06);
   hframe_copy27->GetYaxis()->SetTitleOffset(1.25);
   hframe_copy27->GetYaxis()->SetTitleFont(42);
   hframe_copy27->GetZaxis()->SetLabelFont(42);
   hframe_copy27->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy27->GetZaxis()->SetLabelSize(0.05);
   hframe_copy27->GetZaxis()->SetTitleSize(0.06);
   hframe_copy27->GetZaxis()->SetTitleFont(42);
   hframe_copy27->Draw("sameaxis");
   cchww2l2v_13TeV_WW_0jee_events->Modified();
   cchww2l2v_13TeV_WW_0jee_events->cd();
   cchww2l2v_13TeV_WW_0jee_events->SetSelected(cchww2l2v_13TeV_WW_0jee_events);
}
