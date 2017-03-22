void c_hww2l2v_13TeV_WW_1jee_events()
{
//=========Macro generated from canvas: cchww2l2v_13TeV_WW_1jee_events/cc
//=========  (Tue Mar 21 11:46:17 2017) by ROOT version6.02/13
   TCanvas *cchww2l2v_13TeV_WW_1jee_events = new TCanvas("cchww2l2v_13TeV_WW_1jee_events", "cc",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   cchww2l2v_13TeV_WW_1jee_events->SetHighLightColor(2);
   cchww2l2v_13TeV_WW_1jee_events->Range(-0.4,-340.3819,2.1,2277.94);
   cchww2l2v_13TeV_WW_1jee_events->SetFillColor(0);
   cchww2l2v_13TeV_WW_1jee_events->SetBorderMode(0);
   cchww2l2v_13TeV_WW_1jee_events->SetBorderSize(2);
   cchww2l2v_13TeV_WW_1jee_events->SetTickx(1);
   cchww2l2v_13TeV_WW_1jee_events->SetTicky(1);
   cchww2l2v_13TeV_WW_1jee_events->SetLeftMargin(0.16);
   cchww2l2v_13TeV_WW_1jee_events->SetRightMargin(0.04);
   cchww2l2v_13TeV_WW_1jee_events->SetTopMargin(0.05);
   cchww2l2v_13TeV_WW_1jee_events->SetBottomMargin(0.13);
   cchww2l2v_13TeV_WW_1jee_events->SetFrameFillStyle(0);
   cchww2l2v_13TeV_WW_1jee_events->SetFrameBorderMode(0);
   cchww2l2v_13TeV_WW_1jee_events->SetFrameFillStyle(0);
   cchww2l2v_13TeV_WW_1jee_events->SetFrameBorderMode(0);
   
   TH1F *hframe64 = new TH1F("hframe64","",1000,0,2);
   hframe64->SetMinimum(0);
   hframe64->SetMaximum(2147.024);
   hframe64->SetDirectory(0);
   hframe64->SetStats(0);
   hframe64->SetLineStyle(0);
   hframe64->SetMarkerStyle(20);
   hframe64->GetXaxis()->SetTitle("events");
   hframe64->GetXaxis()->SetNdivisions(506);
   hframe64->GetXaxis()->SetLabelFont(42);
   hframe64->GetXaxis()->SetLabelOffset(0.007);
   hframe64->GetXaxis()->SetLabelSize(0.05);
   hframe64->GetXaxis()->SetTitleSize(0.06);
   hframe64->GetXaxis()->SetTitleOffset(0.9);
   hframe64->GetXaxis()->SetTitleFont(42);
   hframe64->GetYaxis()->SetTitle("Events");
   hframe64->GetYaxis()->SetLabelFont(42);
   hframe64->GetYaxis()->SetLabelOffset(0.007);
   hframe64->GetYaxis()->SetLabelSize(0.05);
   hframe64->GetYaxis()->SetTitleSize(0.06);
   hframe64->GetYaxis()->SetTitleOffset(1.25);
   hframe64->GetYaxis()->SetTitleFont(42);
   hframe64->GetZaxis()->SetLabelFont(42);
   hframe64->GetZaxis()->SetLabelOffset(0.007);
   hframe64->GetZaxis()->SetLabelSize(0.05);
   hframe64->GetZaxis()->SetTitleSize(0.06);
   hframe64->GetZaxis()->SetTitleFont(42);
   hframe64->Draw(" ");
   
   THStack *thsBackground_grouped_hww2l2v_13TeV_WW_1jee_events = new THStack();
   thsBackground_grouped_hww2l2v_13TeV_WW_1jee_events->SetName("thsBackground_grouped_hww2l2v_13TeV_WW_1jee_events");
   thsBackground_grouped_hww2l2v_13TeV_WW_1jee_events->SetTitle("thsBackground_grouped_hww2l2v_13TeV_WW_1jee_events");
   
   TH1F *thsBackground_grouped_hww2l2v_13TeV_WW_1jee_events_stack_15 = new TH1F("thsBackground_grouped_hww2l2v_13TeV_WW_1jee_events_stack_15","thsBackground_grouped_hww2l2v_13TeV_WW_1jee_events",1,0,2);
   thsBackground_grouped_hww2l2v_13TeV_WW_1jee_events_stack_15->SetMinimum(0);
   thsBackground_grouped_hww2l2v_13TeV_WW_1jee_events_stack_15->SetMaximum(466.8139);
   thsBackground_grouped_hww2l2v_13TeV_WW_1jee_events_stack_15->SetDirectory(0);
   thsBackground_grouped_hww2l2v_13TeV_WW_1jee_events_stack_15->SetStats(0);
   thsBackground_grouped_hww2l2v_13TeV_WW_1jee_events_stack_15->SetLineStyle(0);
   thsBackground_grouped_hww2l2v_13TeV_WW_1jee_events_stack_15->SetMarkerStyle(20);
   thsBackground_grouped_hww2l2v_13TeV_WW_1jee_events_stack_15->GetXaxis()->SetLabelFont(42);
   thsBackground_grouped_hww2l2v_13TeV_WW_1jee_events_stack_15->GetXaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_hww2l2v_13TeV_WW_1jee_events_stack_15->GetXaxis()->SetLabelSize(0.05);
   thsBackground_grouped_hww2l2v_13TeV_WW_1jee_events_stack_15->GetXaxis()->SetTitleSize(0.06);
   thsBackground_grouped_hww2l2v_13TeV_WW_1jee_events_stack_15->GetXaxis()->SetTitleOffset(0.9);
   thsBackground_grouped_hww2l2v_13TeV_WW_1jee_events_stack_15->GetXaxis()->SetTitleFont(42);
   thsBackground_grouped_hww2l2v_13TeV_WW_1jee_events_stack_15->GetYaxis()->SetLabelFont(42);
   thsBackground_grouped_hww2l2v_13TeV_WW_1jee_events_stack_15->GetYaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_hww2l2v_13TeV_WW_1jee_events_stack_15->GetYaxis()->SetLabelSize(0.05);
   thsBackground_grouped_hww2l2v_13TeV_WW_1jee_events_stack_15->GetYaxis()->SetTitleSize(0.06);
   thsBackground_grouped_hww2l2v_13TeV_WW_1jee_events_stack_15->GetYaxis()->SetTitleOffset(1.25);
   thsBackground_grouped_hww2l2v_13TeV_WW_1jee_events_stack_15->GetYaxis()->SetTitleFont(42);
   thsBackground_grouped_hww2l2v_13TeV_WW_1jee_events_stack_15->GetZaxis()->SetLabelFont(42);
   thsBackground_grouped_hww2l2v_13TeV_WW_1jee_events_stack_15->GetZaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_hww2l2v_13TeV_WW_1jee_events_stack_15->GetZaxis()->SetLabelSize(0.05);
   thsBackground_grouped_hww2l2v_13TeV_WW_1jee_events_stack_15->GetZaxis()->SetTitleSize(0.06);
   thsBackground_grouped_hww2l2v_13TeV_WW_1jee_events_stack_15->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_hww2l2v_13TeV_WW_1jee_events->SetHistogram(thsBackground_grouped_hww2l2v_13TeV_WW_1jee_events_stack_15);
   
   
   TH1D *new_histo_group_DY_hww2l2v_13TeV_WW_1jee_events65 = new TH1D("new_histo_group_DY_hww2l2v_13TeV_WW_1jee_events65","histo_DY",1,0,2);
   new_histo_group_DY_hww2l2v_13TeV_WW_1jee_events65->SetBinContent(1,11.59954);
   new_histo_group_DY_hww2l2v_13TeV_WW_1jee_events65->SetBinError(1,7.947819);
   new_histo_group_DY_hww2l2v_13TeV_WW_1jee_events65->SetEntries(13);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#009900");
   new_histo_group_DY_hww2l2v_13TeV_WW_1jee_events65->SetFillColor(ci);
   new_histo_group_DY_hww2l2v_13TeV_WW_1jee_events65->SetFillStyle(3001);

   ci = TColor::GetColor("#009900");
   new_histo_group_DY_hww2l2v_13TeV_WW_1jee_events65->SetLineColor(ci);
   new_histo_group_DY_hww2l2v_13TeV_WW_1jee_events65->GetXaxis()->SetLabelFont(42);
   new_histo_group_DY_hww2l2v_13TeV_WW_1jee_events65->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_DY_hww2l2v_13TeV_WW_1jee_events65->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_DY_hww2l2v_13TeV_WW_1jee_events65->GetXaxis()->SetTitleFont(42);
   new_histo_group_DY_hww2l2v_13TeV_WW_1jee_events65->GetYaxis()->SetLabelFont(42);
   new_histo_group_DY_hww2l2v_13TeV_WW_1jee_events65->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_DY_hww2l2v_13TeV_WW_1jee_events65->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_DY_hww2l2v_13TeV_WW_1jee_events65->GetYaxis()->SetTitleFont(42);
   new_histo_group_DY_hww2l2v_13TeV_WW_1jee_events65->GetZaxis()->SetLabelFont(42);
   new_histo_group_DY_hww2l2v_13TeV_WW_1jee_events65->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_DY_hww2l2v_13TeV_WW_1jee_events65->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_DY_hww2l2v_13TeV_WW_1jee_events65->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_hww2l2v_13TeV_WW_1jee_events->Add(new_histo_group_DY_hww2l2v_13TeV_WW_1jee_events,"");
   
   TH1D *new_histo_group_top_hww2l2v_13TeV_WW_1jee_events66 = new TH1D("new_histo_group_top_hww2l2v_13TeV_WW_1jee_events66","histo_top",1,0,2);
   new_histo_group_top_hww2l2v_13TeV_WW_1jee_events66->SetBinContent(1,232.8479);
   new_histo_group_top_hww2l2v_13TeV_WW_1jee_events66->SetBinError(1,3.089116);
   new_histo_group_top_hww2l2v_13TeV_WW_1jee_events66->SetEntries(6219);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_top_hww2l2v_13TeV_WW_1jee_events66->SetFillColor(ci);
   new_histo_group_top_hww2l2v_13TeV_WW_1jee_events66->SetFillStyle(3001);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_top_hww2l2v_13TeV_WW_1jee_events66->SetLineColor(ci);
   new_histo_group_top_hww2l2v_13TeV_WW_1jee_events66->GetXaxis()->SetLabelFont(42);
   new_histo_group_top_hww2l2v_13TeV_WW_1jee_events66->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_top_hww2l2v_13TeV_WW_1jee_events66->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_top_hww2l2v_13TeV_WW_1jee_events66->GetXaxis()->SetTitleFont(42);
   new_histo_group_top_hww2l2v_13TeV_WW_1jee_events66->GetYaxis()->SetLabelFont(42);
   new_histo_group_top_hww2l2v_13TeV_WW_1jee_events66->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_top_hww2l2v_13TeV_WW_1jee_events66->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_top_hww2l2v_13TeV_WW_1jee_events66->GetYaxis()->SetTitleFont(42);
   new_histo_group_top_hww2l2v_13TeV_WW_1jee_events66->GetZaxis()->SetLabelFont(42);
   new_histo_group_top_hww2l2v_13TeV_WW_1jee_events66->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_top_hww2l2v_13TeV_WW_1jee_events66->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_top_hww2l2v_13TeV_WW_1jee_events66->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_hww2l2v_13TeV_WW_1jee_events->Add(new_histo_group_top_hww2l2v_13TeV_WW_1jee_events,"");
   
   TH1D *new_histo_group_WW_hww2l2v_13TeV_WW_1jee_events67 = new TH1D("new_histo_group_WW_hww2l2v_13TeV_WW_1jee_events67","histo_WW",1,0,2);
   new_histo_group_WW_hww2l2v_13TeV_WW_1jee_events67->SetBinContent(1,159.0183);
   new_histo_group_WW_hww2l2v_13TeV_WW_1jee_events67->SetBinError(1,5.419276);
   new_histo_group_WW_hww2l2v_13TeV_WW_1jee_events67->SetEntries(1208);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_hww2l2v_13TeV_WW_1jee_events67->SetFillColor(ci);
   new_histo_group_WW_hww2l2v_13TeV_WW_1jee_events67->SetFillStyle(3001);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_hww2l2v_13TeV_WW_1jee_events67->SetLineColor(ci);
   new_histo_group_WW_hww2l2v_13TeV_WW_1jee_events67->GetXaxis()->SetLabelFont(42);
   new_histo_group_WW_hww2l2v_13TeV_WW_1jee_events67->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WW_hww2l2v_13TeV_WW_1jee_events67->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WW_hww2l2v_13TeV_WW_1jee_events67->GetXaxis()->SetTitleFont(42);
   new_histo_group_WW_hww2l2v_13TeV_WW_1jee_events67->GetYaxis()->SetLabelFont(42);
   new_histo_group_WW_hww2l2v_13TeV_WW_1jee_events67->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WW_hww2l2v_13TeV_WW_1jee_events67->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WW_hww2l2v_13TeV_WW_1jee_events67->GetYaxis()->SetTitleFont(42);
   new_histo_group_WW_hww2l2v_13TeV_WW_1jee_events67->GetZaxis()->SetLabelFont(42);
   new_histo_group_WW_hww2l2v_13TeV_WW_1jee_events67->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WW_hww2l2v_13TeV_WW_1jee_events67->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WW_hww2l2v_13TeV_WW_1jee_events67->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_hww2l2v_13TeV_WW_1jee_events->Add(new_histo_group_WW_hww2l2v_13TeV_WW_1jee_events,"");
   
   TH1D *new_histo_group_VVV_hww2l2v_13TeV_WW_1jee_events68 = new TH1D("new_histo_group_VVV_hww2l2v_13TeV_WW_1jee_events68","histo_VVV",1,0,2);
   new_histo_group_VVV_hww2l2v_13TeV_WW_1jee_events68->SetBinContent(1,1.036229);
   new_histo_group_VVV_hww2l2v_13TeV_WW_1jee_events68->SetBinError(1,0.1791554);
   new_histo_group_VVV_hww2l2v_13TeV_WW_1jee_events68->SetEntries(50);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_hww2l2v_13TeV_WW_1jee_events68->SetFillColor(ci);
   new_histo_group_VVV_hww2l2v_13TeV_WW_1jee_events68->SetFillStyle(3001);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_hww2l2v_13TeV_WW_1jee_events68->SetLineColor(ci);
   new_histo_group_VVV_hww2l2v_13TeV_WW_1jee_events68->GetXaxis()->SetLabelFont(42);
   new_histo_group_VVV_hww2l2v_13TeV_WW_1jee_events68->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_hww2l2v_13TeV_WW_1jee_events68->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_hww2l2v_13TeV_WW_1jee_events68->GetXaxis()->SetTitleFont(42);
   new_histo_group_VVV_hww2l2v_13TeV_WW_1jee_events68->GetYaxis()->SetLabelFont(42);
   new_histo_group_VVV_hww2l2v_13TeV_WW_1jee_events68->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_hww2l2v_13TeV_WW_1jee_events68->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_hww2l2v_13TeV_WW_1jee_events68->GetYaxis()->SetTitleFont(42);
   new_histo_group_VVV_hww2l2v_13TeV_WW_1jee_events68->GetZaxis()->SetLabelFont(42);
   new_histo_group_VVV_hww2l2v_13TeV_WW_1jee_events68->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_hww2l2v_13TeV_WW_1jee_events68->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_hww2l2v_13TeV_WW_1jee_events68->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_hww2l2v_13TeV_WW_1jee_events->Add(new_histo_group_VVV_hww2l2v_13TeV_WW_1jee_events,"");
   
   TH1D *new_histo_group_VZ_hww2l2v_13TeV_WW_1jee_events69 = new TH1D("new_histo_group_VZ_hww2l2v_13TeV_WW_1jee_events69","histo_Vg",1,0,2);
   new_histo_group_VZ_hww2l2v_13TeV_WW_1jee_events69->SetBinContent(1,39.6094);
   new_histo_group_VZ_hww2l2v_13TeV_WW_1jee_events69->SetBinError(1,23.65339);
   new_histo_group_VZ_hww2l2v_13TeV_WW_1jee_events69->SetEntries(2150);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_VZ_hww2l2v_13TeV_WW_1jee_events69->SetFillColor(ci);
   new_histo_group_VZ_hww2l2v_13TeV_WW_1jee_events69->SetFillStyle(3001);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_VZ_hww2l2v_13TeV_WW_1jee_events69->SetLineColor(ci);
   new_histo_group_VZ_hww2l2v_13TeV_WW_1jee_events69->GetXaxis()->SetLabelFont(42);
   new_histo_group_VZ_hww2l2v_13TeV_WW_1jee_events69->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_VZ_hww2l2v_13TeV_WW_1jee_events69->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_VZ_hww2l2v_13TeV_WW_1jee_events69->GetXaxis()->SetTitleFont(42);
   new_histo_group_VZ_hww2l2v_13TeV_WW_1jee_events69->GetYaxis()->SetLabelFont(42);
   new_histo_group_VZ_hww2l2v_13TeV_WW_1jee_events69->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_VZ_hww2l2v_13TeV_WW_1jee_events69->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_VZ_hww2l2v_13TeV_WW_1jee_events69->GetYaxis()->SetTitleFont(42);
   new_histo_group_VZ_hww2l2v_13TeV_WW_1jee_events69->GetZaxis()->SetLabelFont(42);
   new_histo_group_VZ_hww2l2v_13TeV_WW_1jee_events69->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_VZ_hww2l2v_13TeV_WW_1jee_events69->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_VZ_hww2l2v_13TeV_WW_1jee_events69->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_hww2l2v_13TeV_WW_1jee_events->Add(new_histo_group_VZ_hww2l2v_13TeV_WW_1jee_events,"");
   
   TH1D *new_histo_group_Higgs_hww2l2v_13TeV_WW_1jee_events70 = new TH1D("new_histo_group_Higgs_hww2l2v_13TeV_WW_1jee_events70","histo_H_htt",1,0,2);
   new_histo_group_Higgs_hww2l2v_13TeV_WW_1jee_events70->SetBinContent(1,0.4732781);
   new_histo_group_Higgs_hww2l2v_13TeV_WW_1jee_events70->SetBinError(1,0.09094584);
   new_histo_group_Higgs_hww2l2v_13TeV_WW_1jee_events70->SetEntries(37);
   new_histo_group_Higgs_hww2l2v_13TeV_WW_1jee_events70->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_hww2l2v_13TeV_WW_1jee_events70->SetLineColor(ci);
   new_histo_group_Higgs_hww2l2v_13TeV_WW_1jee_events70->SetLineWidth(2);
   new_histo_group_Higgs_hww2l2v_13TeV_WW_1jee_events70->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_hww2l2v_13TeV_WW_1jee_events70->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_hww2l2v_13TeV_WW_1jee_events70->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_hww2l2v_13TeV_WW_1jee_events70->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_hww2l2v_13TeV_WW_1jee_events70->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_hww2l2v_13TeV_WW_1jee_events70->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_hww2l2v_13TeV_WW_1jee_events70->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_hww2l2v_13TeV_WW_1jee_events70->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_hww2l2v_13TeV_WW_1jee_events70->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_hww2l2v_13TeV_WW_1jee_events70->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_hww2l2v_13TeV_WW_1jee_events70->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_hww2l2v_13TeV_WW_1jee_events70->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_hww2l2v_13TeV_WW_1jee_events->Add(new_histo_group_Higgs_hww2l2v_13TeV_WW_1jee_events,"");
   thsBackground_grouped_hww2l2v_13TeV_WW_1jee_events->Draw("hist same");
   
   thsSignal_grouped_hww2l2v_13TeV_WW_1jee_events = new THStack();
   thsSignal_grouped_hww2l2v_13TeV_WW_1jee_events->SetName("thsSignal_grouped_hww2l2v_13TeV_WW_1jee_events");
   thsSignal_grouped_hww2l2v_13TeV_WW_1jee_events->SetTitle("thsSignal_grouped_hww2l2v_13TeV_WW_1jee_events");
   
   TH1F *thsSignal_grouped_hww2l2v_13TeV_WW_1jee_events_stack_16 = new TH1F("thsSignal_grouped_hww2l2v_13TeV_WW_1jee_events_stack_16","thsSignal_grouped_hww2l2v_13TeV_WW_1jee_events",1,0,2);
   thsSignal_grouped_hww2l2v_13TeV_WW_1jee_events_stack_16->SetMinimum(0);
   thsSignal_grouped_hww2l2v_13TeV_WW_1jee_events_stack_16->SetMaximum(0.5924351);
   thsSignal_grouped_hww2l2v_13TeV_WW_1jee_events_stack_16->SetDirectory(0);
   thsSignal_grouped_hww2l2v_13TeV_WW_1jee_events_stack_16->SetStats(0);
   thsSignal_grouped_hww2l2v_13TeV_WW_1jee_events_stack_16->SetLineStyle(0);
   thsSignal_grouped_hww2l2v_13TeV_WW_1jee_events_stack_16->SetMarkerStyle(20);
   thsSignal_grouped_hww2l2v_13TeV_WW_1jee_events_stack_16->GetXaxis()->SetLabelFont(42);
   thsSignal_grouped_hww2l2v_13TeV_WW_1jee_events_stack_16->GetXaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_hww2l2v_13TeV_WW_1jee_events_stack_16->GetXaxis()->SetLabelSize(0.05);
   thsSignal_grouped_hww2l2v_13TeV_WW_1jee_events_stack_16->GetXaxis()->SetTitleSize(0.06);
   thsSignal_grouped_hww2l2v_13TeV_WW_1jee_events_stack_16->GetXaxis()->SetTitleOffset(0.9);
   thsSignal_grouped_hww2l2v_13TeV_WW_1jee_events_stack_16->GetXaxis()->SetTitleFont(42);
   thsSignal_grouped_hww2l2v_13TeV_WW_1jee_events_stack_16->GetYaxis()->SetLabelFont(42);
   thsSignal_grouped_hww2l2v_13TeV_WW_1jee_events_stack_16->GetYaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_hww2l2v_13TeV_WW_1jee_events_stack_16->GetYaxis()->SetLabelSize(0.05);
   thsSignal_grouped_hww2l2v_13TeV_WW_1jee_events_stack_16->GetYaxis()->SetTitleSize(0.06);
   thsSignal_grouped_hww2l2v_13TeV_WW_1jee_events_stack_16->GetYaxis()->SetTitleOffset(1.25);
   thsSignal_grouped_hww2l2v_13TeV_WW_1jee_events_stack_16->GetYaxis()->SetTitleFont(42);
   thsSignal_grouped_hww2l2v_13TeV_WW_1jee_events_stack_16->GetZaxis()->SetLabelFont(42);
   thsSignal_grouped_hww2l2v_13TeV_WW_1jee_events_stack_16->GetZaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_hww2l2v_13TeV_WW_1jee_events_stack_16->GetZaxis()->SetLabelSize(0.05);
   thsSignal_grouped_hww2l2v_13TeV_WW_1jee_events_stack_16->GetZaxis()->SetTitleSize(0.06);
   thsSignal_grouped_hww2l2v_13TeV_WW_1jee_events_stack_16->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_hww2l2v_13TeV_WW_1jee_events->SetHistogram(thsSignal_grouped_hww2l2v_13TeV_WW_1jee_events_stack_16);
   
   
   TH1D *new_histo_group_Higgs_hww2l2v_13TeV_WW_1jee_events71 = new TH1D("new_histo_group_Higgs_hww2l2v_13TeV_WW_1jee_events71","histo_H_htt",1,0,2);
   new_histo_group_Higgs_hww2l2v_13TeV_WW_1jee_events71->SetBinContent(1,0.4732781);
   new_histo_group_Higgs_hww2l2v_13TeV_WW_1jee_events71->SetBinError(1,0.09094584);
   new_histo_group_Higgs_hww2l2v_13TeV_WW_1jee_events71->SetEntries(37);
   new_histo_group_Higgs_hww2l2v_13TeV_WW_1jee_events71->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_hww2l2v_13TeV_WW_1jee_events71->SetLineColor(ci);
   new_histo_group_Higgs_hww2l2v_13TeV_WW_1jee_events71->SetLineWidth(2);
   new_histo_group_Higgs_hww2l2v_13TeV_WW_1jee_events71->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_hww2l2v_13TeV_WW_1jee_events71->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_hww2l2v_13TeV_WW_1jee_events71->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_hww2l2v_13TeV_WW_1jee_events71->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_hww2l2v_13TeV_WW_1jee_events71->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_hww2l2v_13TeV_WW_1jee_events71->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_hww2l2v_13TeV_WW_1jee_events71->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_hww2l2v_13TeV_WW_1jee_events71->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_hww2l2v_13TeV_WW_1jee_events71->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_hww2l2v_13TeV_WW_1jee_events71->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_hww2l2v_13TeV_WW_1jee_events71->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_hww2l2v_13TeV_WW_1jee_events71->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_hww2l2v_13TeV_WW_1jee_events->Add(new_histo_group_Higgs_hww2l2v_13TeV_WW_1jee_events,"");
   thsSignal_grouped_hww2l2v_13TeV_WW_1jee_events->Draw("hist same noclear");
   
   Double_t _fx3010[1] = {
   1};
   Double_t _fy3010[1] = {
   444.1114};
   Double_t _felx3010[1] = {
   1};
   Double_t _fely3010[1] = {
   0};
   Double_t _fehx3010[1] = {
   1};
   Double_t _fehy3010[1] = {
   0};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(1,_fx3010,_fy3010,_felx3010,_fehx3010,_fely3010,_fehy3010);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(12);
   grae->SetFillStyle(3004);
   grae->SetLineColor(12);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3010 = new TH1F("Graph_Graph3010","",100,0,2.2);
   Graph_Graph3010->SetMinimum(444.0114);
   Graph_Graph3010->SetMaximum(445.2114);
   Graph_Graph3010->SetDirectory(0);
   Graph_Graph3010->SetStats(0);
   Graph_Graph3010->SetLineStyle(0);
   Graph_Graph3010->SetMarkerStyle(20);
   Graph_Graph3010->GetXaxis()->SetLabelFont(42);
   Graph_Graph3010->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3010->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3010->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3010->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3010->GetXaxis()->SetTitleFont(42);
   Graph_Graph3010->GetYaxis()->SetLabelFont(42);
   Graph_Graph3010->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3010->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3010->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3010->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3010->GetYaxis()->SetTitleFont(42);
   Graph_Graph3010->GetZaxis()->SetLabelFont(42);
   Graph_Graph3010->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3010->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3010->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3010->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3010);
   
   grae->Draw("2");
   
   Double_t _fx3011[1] = {
   1};
   Double_t _fy3011[1] = {
   830};
   Double_t _felx3011[1] = {
   1};
   Double_t _fely3011[1] = {
   28.80454};
   Double_t _fehx3011[1] = {
   1};
   Double_t _fehy3011[1] = {
   29.82194};
   grae = new TGraphAsymmErrors(1,_fx3011,_fy3011,_felx3011,_fehx3011,_fely3011,_fehy3011);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(1);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3011 = new TH1F("Graph_Graph3011","",100,0,2.2);
   Graph_Graph3011->SetMinimum(795.3328);
   Graph_Graph3011->SetMaximum(865.6846);
   Graph_Graph3011->SetDirectory(0);
   Graph_Graph3011->SetStats(0);
   Graph_Graph3011->SetLineStyle(0);
   Graph_Graph3011->SetMarkerStyle(20);
   Graph_Graph3011->GetXaxis()->SetLabelFont(42);
   Graph_Graph3011->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3011->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3011->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3011->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3011->GetXaxis()->SetTitleFont(42);
   Graph_Graph3011->GetYaxis()->SetLabelFont(42);
   Graph_Graph3011->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3011->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3011->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3011->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3011->GetYaxis()->SetTitleFont(42);
   Graph_Graph3011->GetZaxis()->SetLabelFont(42);
   Graph_Graph3011->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3011->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3011->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3011->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3011);
   
   grae->Draw("p0");
   
   TLegend *leg = new TLegend(0.2,0.7,0.8,0.9,NULL,"brNDC");
   leg->SetTextFont(62);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("new_histo_group_DY_hww2l2v_13TeV_WW_1jee_events","DY","F");

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
   entry=leg->AddEntry("new_histo_group_top_hww2l2v_13TeV_WW_1jee_events","tW and t#bart","F");

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
   entry=leg->AddEntry("new_histo_group_WW_hww2l2v_13TeV_WW_1jee_events","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_hww2l2v_13TeV_WW_1jee_events","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_VZ_hww2l2v_13TeV_WW_1jee_events","VZ/#gamma*/#gamma","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_hww2l2v_13TeV_WW_1jee_events","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_hww2l2v_13TeV_WW_1jee_events","Data","EPL");
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
   entry=leg->AddEntry("new_histo_group_DY_hww2l2v_13TeV_WW_1jee_events","DY","F");

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
   entry=leg->AddEntry("new_histo_group_top_hww2l2v_13TeV_WW_1jee_events","tW and t#bart","F");

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
   entry=leg->AddEntry("new_histo_group_WW_hww2l2v_13TeV_WW_1jee_events","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_hww2l2v_13TeV_WW_1jee_events","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_VZ_hww2l2v_13TeV_WW_1jee_events","VZ/#gamma*/#gamma","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_hww2l2v_13TeV_WW_1jee_events","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_hww2l2v_13TeV_WW_1jee_events","Data","EPL");
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
   
   TH1F *hframe_copy72 = new TH1F("hframe_copy72","",1000,0,2);
   hframe_copy72->SetMinimum(0);
   hframe_copy72->SetMaximum(2147.024);
   hframe_copy72->SetDirectory(0);
   hframe_copy72->SetStats(0);
   hframe_copy72->SetLineStyle(0);
   hframe_copy72->SetMarkerStyle(20);
   hframe_copy72->GetXaxis()->SetTitle("events");
   hframe_copy72->GetXaxis()->SetNdivisions(506);
   hframe_copy72->GetXaxis()->SetLabelFont(42);
   hframe_copy72->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy72->GetXaxis()->SetLabelSize(0.05);
   hframe_copy72->GetXaxis()->SetTitleSize(0.06);
   hframe_copy72->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy72->GetXaxis()->SetTitleFont(42);
   hframe_copy72->GetYaxis()->SetTitle("Events");
   hframe_copy72->GetYaxis()->SetLabelFont(42);
   hframe_copy72->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy72->GetYaxis()->SetLabelSize(0.05);
   hframe_copy72->GetYaxis()->SetTitleSize(0.06);
   hframe_copy72->GetYaxis()->SetTitleOffset(1.25);
   hframe_copy72->GetYaxis()->SetTitleFont(42);
   hframe_copy72->GetZaxis()->SetLabelFont(42);
   hframe_copy72->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy72->GetZaxis()->SetLabelSize(0.05);
   hframe_copy72->GetZaxis()->SetTitleSize(0.06);
   hframe_copy72->GetZaxis()->SetTitleFont(42);
   hframe_copy72->Draw("sameaxis");
   cchww2l2v_13TeV_WW_1jee_events->Modified();
   cchww2l2v_13TeV_WW_1jee_events->cd();
   cchww2l2v_13TeV_WW_1jee_events->SetSelected(cchww2l2v_13TeV_WW_1jee_events);
}
