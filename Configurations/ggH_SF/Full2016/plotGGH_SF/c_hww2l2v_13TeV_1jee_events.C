void c_hww2l2v_13TeV_1jee_events()
{
//=========Macro generated from canvas: cchww2l2v_13TeV_1jee_events/cc
//=========  (Tue Mar 21 11:46:41 2017) by ROOT version6.02/13
   TCanvas *cchww2l2v_13TeV_1jee_events = new TCanvas("cchww2l2v_13TeV_1jee_events", "cc",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   cchww2l2v_13TeV_1jee_events->SetHighLightColor(2);
   cchww2l2v_13TeV_1jee_events->Range(-0.4,-165.6509,2.1,1108.587);
   cchww2l2v_13TeV_1jee_events->SetFillColor(0);
   cchww2l2v_13TeV_1jee_events->SetBorderMode(0);
   cchww2l2v_13TeV_1jee_events->SetBorderSize(2);
   cchww2l2v_13TeV_1jee_events->SetTickx(1);
   cchww2l2v_13TeV_1jee_events->SetTicky(1);
   cchww2l2v_13TeV_1jee_events->SetLeftMargin(0.16);
   cchww2l2v_13TeV_1jee_events->SetRightMargin(0.04);
   cchww2l2v_13TeV_1jee_events->SetTopMargin(0.05);
   cchww2l2v_13TeV_1jee_events->SetBottomMargin(0.13);
   cchww2l2v_13TeV_1jee_events->SetFrameFillStyle(0);
   cchww2l2v_13TeV_1jee_events->SetFrameBorderMode(0);
   cchww2l2v_13TeV_1jee_events->SetFrameFillStyle(0);
   cchww2l2v_13TeV_1jee_events->SetFrameBorderMode(0);
   
   TH1F *hframe262 = new TH1F("hframe262","",1000,0,2);
   hframe262->SetMinimum(0);
   hframe262->SetMaximum(1044.875);
   hframe262->SetDirectory(0);
   hframe262->SetStats(0);
   hframe262->SetLineStyle(0);
   hframe262->SetMarkerStyle(20);
   hframe262->GetXaxis()->SetTitle("events");
   hframe262->GetXaxis()->SetNdivisions(506);
   hframe262->GetXaxis()->SetLabelFont(42);
   hframe262->GetXaxis()->SetLabelOffset(0.007);
   hframe262->GetXaxis()->SetLabelSize(0.05);
   hframe262->GetXaxis()->SetTitleSize(0.06);
   hframe262->GetXaxis()->SetTitleOffset(0.9);
   hframe262->GetXaxis()->SetTitleFont(42);
   hframe262->GetYaxis()->SetTitle("Events");
   hframe262->GetYaxis()->SetLabelFont(42);
   hframe262->GetYaxis()->SetLabelOffset(0.007);
   hframe262->GetYaxis()->SetLabelSize(0.05);
   hframe262->GetYaxis()->SetTitleSize(0.06);
   hframe262->GetYaxis()->SetTitleOffset(1.25);
   hframe262->GetYaxis()->SetTitleFont(42);
   hframe262->GetZaxis()->SetLabelFont(42);
   hframe262->GetZaxis()->SetLabelOffset(0.007);
   hframe262->GetZaxis()->SetLabelSize(0.05);
   hframe262->GetZaxis()->SetTitleSize(0.06);
   hframe262->GetZaxis()->SetTitleFont(42);
   hframe262->Draw(" ");
   
   THStack *thsBackground_grouped_hww2l2v_13TeV_1jee_events = new THStack();
   thsBackground_grouped_hww2l2v_13TeV_1jee_events->SetName("thsBackground_grouped_hww2l2v_13TeV_1jee_events");
   thsBackground_grouped_hww2l2v_13TeV_1jee_events->SetTitle("thsBackground_grouped_hww2l2v_13TeV_1jee_events");
   
   TH1F *thsBackground_grouped_hww2l2v_13TeV_1jee_events_stack_59 = new TH1F("thsBackground_grouped_hww2l2v_13TeV_1jee_events_stack_59","thsBackground_grouped_hww2l2v_13TeV_1jee_events",1,0,2);
   thsBackground_grouped_hww2l2v_13TeV_1jee_events_stack_59->SetMinimum(-19.33419);
   thsBackground_grouped_hww2l2v_13TeV_1jee_events_stack_59->SetMaximum(225.5534);
   thsBackground_grouped_hww2l2v_13TeV_1jee_events_stack_59->SetDirectory(0);
   thsBackground_grouped_hww2l2v_13TeV_1jee_events_stack_59->SetStats(0);
   thsBackground_grouped_hww2l2v_13TeV_1jee_events_stack_59->SetLineStyle(0);
   thsBackground_grouped_hww2l2v_13TeV_1jee_events_stack_59->SetMarkerStyle(20);
   thsBackground_grouped_hww2l2v_13TeV_1jee_events_stack_59->GetXaxis()->SetLabelFont(42);
   thsBackground_grouped_hww2l2v_13TeV_1jee_events_stack_59->GetXaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_hww2l2v_13TeV_1jee_events_stack_59->GetXaxis()->SetLabelSize(0.05);
   thsBackground_grouped_hww2l2v_13TeV_1jee_events_stack_59->GetXaxis()->SetTitleSize(0.06);
   thsBackground_grouped_hww2l2v_13TeV_1jee_events_stack_59->GetXaxis()->SetTitleOffset(0.9);
   thsBackground_grouped_hww2l2v_13TeV_1jee_events_stack_59->GetXaxis()->SetTitleFont(42);
   thsBackground_grouped_hww2l2v_13TeV_1jee_events_stack_59->GetYaxis()->SetLabelFont(42);
   thsBackground_grouped_hww2l2v_13TeV_1jee_events_stack_59->GetYaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_hww2l2v_13TeV_1jee_events_stack_59->GetYaxis()->SetLabelSize(0.05);
   thsBackground_grouped_hww2l2v_13TeV_1jee_events_stack_59->GetYaxis()->SetTitleSize(0.06);
   thsBackground_grouped_hww2l2v_13TeV_1jee_events_stack_59->GetYaxis()->SetTitleOffset(1.25);
   thsBackground_grouped_hww2l2v_13TeV_1jee_events_stack_59->GetYaxis()->SetTitleFont(42);
   thsBackground_grouped_hww2l2v_13TeV_1jee_events_stack_59->GetZaxis()->SetLabelFont(42);
   thsBackground_grouped_hww2l2v_13TeV_1jee_events_stack_59->GetZaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_hww2l2v_13TeV_1jee_events_stack_59->GetZaxis()->SetLabelSize(0.05);
   thsBackground_grouped_hww2l2v_13TeV_1jee_events_stack_59->GetZaxis()->SetTitleSize(0.06);
   thsBackground_grouped_hww2l2v_13TeV_1jee_events_stack_59->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_hww2l2v_13TeV_1jee_events->SetHistogram(thsBackground_grouped_hww2l2v_13TeV_1jee_events_stack_59);
   
   
   TH1D *new_histo_group_DY_hww2l2v_13TeV_1jee_events263 = new TH1D("new_histo_group_DY_hww2l2v_13TeV_1jee_events263","histo_DY",1,0,2);
   new_histo_group_DY_hww2l2v_13TeV_1jee_events263->SetBinContent(1,31.05822);
   new_histo_group_DY_hww2l2v_13TeV_1jee_events263->SetBinError(1,50.39241);
   new_histo_group_DY_hww2l2v_13TeV_1jee_events263->SetEntries(9);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#009900");
   new_histo_group_DY_hww2l2v_13TeV_1jee_events263->SetFillColor(ci);
   new_histo_group_DY_hww2l2v_13TeV_1jee_events263->SetFillStyle(3001);

   ci = TColor::GetColor("#009900");
   new_histo_group_DY_hww2l2v_13TeV_1jee_events263->SetLineColor(ci);
   new_histo_group_DY_hww2l2v_13TeV_1jee_events263->GetXaxis()->SetLabelFont(42);
   new_histo_group_DY_hww2l2v_13TeV_1jee_events263->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_DY_hww2l2v_13TeV_1jee_events263->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_DY_hww2l2v_13TeV_1jee_events263->GetXaxis()->SetTitleFont(42);
   new_histo_group_DY_hww2l2v_13TeV_1jee_events263->GetYaxis()->SetLabelFont(42);
   new_histo_group_DY_hww2l2v_13TeV_1jee_events263->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_DY_hww2l2v_13TeV_1jee_events263->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_DY_hww2l2v_13TeV_1jee_events263->GetYaxis()->SetTitleFont(42);
   new_histo_group_DY_hww2l2v_13TeV_1jee_events263->GetZaxis()->SetLabelFont(42);
   new_histo_group_DY_hww2l2v_13TeV_1jee_events263->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_DY_hww2l2v_13TeV_1jee_events263->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_DY_hww2l2v_13TeV_1jee_events263->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_hww2l2v_13TeV_1jee_events->Add(new_histo_group_DY_hww2l2v_13TeV_1jee_events,"");
   
   TH1D *new_histo_group_top_hww2l2v_13TeV_1jee_events264 = new TH1D("new_histo_group_top_hww2l2v_13TeV_1jee_events264","histo_top",1,0,2);
   new_histo_group_top_hww2l2v_13TeV_1jee_events264->SetBinContent(1,62.40228);
   new_histo_group_top_hww2l2v_13TeV_1jee_events264->SetBinError(1,1.582426);
   new_histo_group_top_hww2l2v_13TeV_1jee_events264->SetEntries(1710);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_top_hww2l2v_13TeV_1jee_events264->SetFillColor(ci);
   new_histo_group_top_hww2l2v_13TeV_1jee_events264->SetFillStyle(3001);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_top_hww2l2v_13TeV_1jee_events264->SetLineColor(ci);
   new_histo_group_top_hww2l2v_13TeV_1jee_events264->GetXaxis()->SetLabelFont(42);
   new_histo_group_top_hww2l2v_13TeV_1jee_events264->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_top_hww2l2v_13TeV_1jee_events264->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_top_hww2l2v_13TeV_1jee_events264->GetXaxis()->SetTitleFont(42);
   new_histo_group_top_hww2l2v_13TeV_1jee_events264->GetYaxis()->SetLabelFont(42);
   new_histo_group_top_hww2l2v_13TeV_1jee_events264->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_top_hww2l2v_13TeV_1jee_events264->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_top_hww2l2v_13TeV_1jee_events264->GetYaxis()->SetTitleFont(42);
   new_histo_group_top_hww2l2v_13TeV_1jee_events264->GetZaxis()->SetLabelFont(42);
   new_histo_group_top_hww2l2v_13TeV_1jee_events264->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_top_hww2l2v_13TeV_1jee_events264->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_top_hww2l2v_13TeV_1jee_events264->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_hww2l2v_13TeV_1jee_events->Add(new_histo_group_top_hww2l2v_13TeV_1jee_events,"");
   
   TH1D *new_histo_group_WW_hww2l2v_13TeV_1jee_events265 = new TH1D("new_histo_group_WW_hww2l2v_13TeV_1jee_events265","histo_WW",1,0,2);
   new_histo_group_WW_hww2l2v_13TeV_1jee_events265->SetBinContent(1,78.14823);
   new_histo_group_WW_hww2l2v_13TeV_1jee_events265->SetBinError(1,3.658668);
   new_histo_group_WW_hww2l2v_13TeV_1jee_events265->SetEntries(709);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_hww2l2v_13TeV_1jee_events265->SetFillColor(ci);
   new_histo_group_WW_hww2l2v_13TeV_1jee_events265->SetFillStyle(3001);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_hww2l2v_13TeV_1jee_events265->SetLineColor(ci);
   new_histo_group_WW_hww2l2v_13TeV_1jee_events265->GetXaxis()->SetLabelFont(42);
   new_histo_group_WW_hww2l2v_13TeV_1jee_events265->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WW_hww2l2v_13TeV_1jee_events265->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WW_hww2l2v_13TeV_1jee_events265->GetXaxis()->SetTitleFont(42);
   new_histo_group_WW_hww2l2v_13TeV_1jee_events265->GetYaxis()->SetLabelFont(42);
   new_histo_group_WW_hww2l2v_13TeV_1jee_events265->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WW_hww2l2v_13TeV_1jee_events265->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WW_hww2l2v_13TeV_1jee_events265->GetYaxis()->SetTitleFont(42);
   new_histo_group_WW_hww2l2v_13TeV_1jee_events265->GetZaxis()->SetLabelFont(42);
   new_histo_group_WW_hww2l2v_13TeV_1jee_events265->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WW_hww2l2v_13TeV_1jee_events265->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WW_hww2l2v_13TeV_1jee_events265->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_hww2l2v_13TeV_1jee_events->Add(new_histo_group_WW_hww2l2v_13TeV_1jee_events,"");
   
   TH1D *new_histo_group_VVV_hww2l2v_13TeV_1jee_events266 = new TH1D("new_histo_group_VVV_hww2l2v_13TeV_1jee_events266","histo_VVV",1,0,2);
   new_histo_group_VVV_hww2l2v_13TeV_1jee_events266->SetBinContent(1,0.3720441);
   new_histo_group_VVV_hww2l2v_13TeV_1jee_events266->SetBinError(1,0.0994875);
   new_histo_group_VVV_hww2l2v_13TeV_1jee_events266->SetEntries(16);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_hww2l2v_13TeV_1jee_events266->SetFillColor(ci);
   new_histo_group_VVV_hww2l2v_13TeV_1jee_events266->SetFillStyle(3001);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_hww2l2v_13TeV_1jee_events266->SetLineColor(ci);
   new_histo_group_VVV_hww2l2v_13TeV_1jee_events266->GetXaxis()->SetLabelFont(42);
   new_histo_group_VVV_hww2l2v_13TeV_1jee_events266->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_hww2l2v_13TeV_1jee_events266->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_hww2l2v_13TeV_1jee_events266->GetXaxis()->SetTitleFont(42);
   new_histo_group_VVV_hww2l2v_13TeV_1jee_events266->GetYaxis()->SetLabelFont(42);
   new_histo_group_VVV_hww2l2v_13TeV_1jee_events266->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_hww2l2v_13TeV_1jee_events266->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_hww2l2v_13TeV_1jee_events266->GetYaxis()->SetTitleFont(42);
   new_histo_group_VVV_hww2l2v_13TeV_1jee_events266->GetZaxis()->SetLabelFont(42);
   new_histo_group_VVV_hww2l2v_13TeV_1jee_events266->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_hww2l2v_13TeV_1jee_events266->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_hww2l2v_13TeV_1jee_events266->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_hww2l2v_13TeV_1jee_events->Add(new_histo_group_VVV_hww2l2v_13TeV_1jee_events,"");
   
   TH1D *new_histo_group_VZ_hww2l2v_13TeV_1jee_events267 = new TH1D("new_histo_group_VZ_hww2l2v_13TeV_1jee_events267","histo_Vg",1,0,2);
   new_histo_group_VZ_hww2l2v_13TeV_1jee_events267->SetBinContent(1,29.99715);
   new_histo_group_VZ_hww2l2v_13TeV_1jee_events267->SetBinError(1,23.63445);
   new_histo_group_VZ_hww2l2v_13TeV_1jee_events267->SetEntries(277);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_VZ_hww2l2v_13TeV_1jee_events267->SetFillColor(ci);
   new_histo_group_VZ_hww2l2v_13TeV_1jee_events267->SetFillStyle(3001);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_VZ_hww2l2v_13TeV_1jee_events267->SetLineColor(ci);
   new_histo_group_VZ_hww2l2v_13TeV_1jee_events267->GetXaxis()->SetLabelFont(42);
   new_histo_group_VZ_hww2l2v_13TeV_1jee_events267->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_VZ_hww2l2v_13TeV_1jee_events267->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_VZ_hww2l2v_13TeV_1jee_events267->GetXaxis()->SetTitleFont(42);
   new_histo_group_VZ_hww2l2v_13TeV_1jee_events267->GetYaxis()->SetLabelFont(42);
   new_histo_group_VZ_hww2l2v_13TeV_1jee_events267->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_VZ_hww2l2v_13TeV_1jee_events267->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_VZ_hww2l2v_13TeV_1jee_events267->GetYaxis()->SetTitleFont(42);
   new_histo_group_VZ_hww2l2v_13TeV_1jee_events267->GetZaxis()->SetLabelFont(42);
   new_histo_group_VZ_hww2l2v_13TeV_1jee_events267->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_VZ_hww2l2v_13TeV_1jee_events267->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_VZ_hww2l2v_13TeV_1jee_events267->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_hww2l2v_13TeV_1jee_events->Add(new_histo_group_VZ_hww2l2v_13TeV_1jee_events,"");
   
   TH1D *new_histo_group_Higgs_hww2l2v_13TeV_1jee_events268 = new TH1D("new_histo_group_Higgs_hww2l2v_13TeV_1jee_events268","histo_H_htt",1,0,2);
   new_histo_group_Higgs_hww2l2v_13TeV_1jee_events268->SetBinContent(1,12.83486);
   new_histo_group_Higgs_hww2l2v_13TeV_1jee_events268->SetBinError(1,0.8399619);
   new_histo_group_Higgs_hww2l2v_13TeV_1jee_events268->SetEntries(519);
   new_histo_group_Higgs_hww2l2v_13TeV_1jee_events268->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_hww2l2v_13TeV_1jee_events268->SetLineColor(ci);
   new_histo_group_Higgs_hww2l2v_13TeV_1jee_events268->SetLineWidth(2);
   new_histo_group_Higgs_hww2l2v_13TeV_1jee_events268->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_hww2l2v_13TeV_1jee_events268->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_hww2l2v_13TeV_1jee_events268->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_hww2l2v_13TeV_1jee_events268->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_hww2l2v_13TeV_1jee_events268->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_hww2l2v_13TeV_1jee_events268->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_hww2l2v_13TeV_1jee_events268->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_hww2l2v_13TeV_1jee_events268->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_hww2l2v_13TeV_1jee_events268->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_hww2l2v_13TeV_1jee_events268->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_hww2l2v_13TeV_1jee_events268->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_hww2l2v_13TeV_1jee_events268->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_hww2l2v_13TeV_1jee_events->Add(new_histo_group_Higgs_hww2l2v_13TeV_1jee_events,"");
   thsBackground_grouped_hww2l2v_13TeV_1jee_events->Draw("hist same");
   
   thsSignal_grouped_hww2l2v_13TeV_1jee_events = new THStack();
   thsSignal_grouped_hww2l2v_13TeV_1jee_events->SetName("thsSignal_grouped_hww2l2v_13TeV_1jee_events");
   thsSignal_grouped_hww2l2v_13TeV_1jee_events->SetTitle("thsSignal_grouped_hww2l2v_13TeV_1jee_events");
   
   TH1F *thsSignal_grouped_hww2l2v_13TeV_1jee_events_stack_60 = new TH1F("thsSignal_grouped_hww2l2v_13TeV_1jee_events_stack_60","thsSignal_grouped_hww2l2v_13TeV_1jee_events",1,0,2);
   thsSignal_grouped_hww2l2v_13TeV_1jee_events_stack_60->SetMinimum(0);
   thsSignal_grouped_hww2l2v_13TeV_1jee_events_stack_60->SetMaximum(14.35856);
   thsSignal_grouped_hww2l2v_13TeV_1jee_events_stack_60->SetDirectory(0);
   thsSignal_grouped_hww2l2v_13TeV_1jee_events_stack_60->SetStats(0);
   thsSignal_grouped_hww2l2v_13TeV_1jee_events_stack_60->SetLineStyle(0);
   thsSignal_grouped_hww2l2v_13TeV_1jee_events_stack_60->SetMarkerStyle(20);
   thsSignal_grouped_hww2l2v_13TeV_1jee_events_stack_60->GetXaxis()->SetLabelFont(42);
   thsSignal_grouped_hww2l2v_13TeV_1jee_events_stack_60->GetXaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_hww2l2v_13TeV_1jee_events_stack_60->GetXaxis()->SetLabelSize(0.05);
   thsSignal_grouped_hww2l2v_13TeV_1jee_events_stack_60->GetXaxis()->SetTitleSize(0.06);
   thsSignal_grouped_hww2l2v_13TeV_1jee_events_stack_60->GetXaxis()->SetTitleOffset(0.9);
   thsSignal_grouped_hww2l2v_13TeV_1jee_events_stack_60->GetXaxis()->SetTitleFont(42);
   thsSignal_grouped_hww2l2v_13TeV_1jee_events_stack_60->GetYaxis()->SetLabelFont(42);
   thsSignal_grouped_hww2l2v_13TeV_1jee_events_stack_60->GetYaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_hww2l2v_13TeV_1jee_events_stack_60->GetYaxis()->SetLabelSize(0.05);
   thsSignal_grouped_hww2l2v_13TeV_1jee_events_stack_60->GetYaxis()->SetTitleSize(0.06);
   thsSignal_grouped_hww2l2v_13TeV_1jee_events_stack_60->GetYaxis()->SetTitleOffset(1.25);
   thsSignal_grouped_hww2l2v_13TeV_1jee_events_stack_60->GetYaxis()->SetTitleFont(42);
   thsSignal_grouped_hww2l2v_13TeV_1jee_events_stack_60->GetZaxis()->SetLabelFont(42);
   thsSignal_grouped_hww2l2v_13TeV_1jee_events_stack_60->GetZaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_hww2l2v_13TeV_1jee_events_stack_60->GetZaxis()->SetLabelSize(0.05);
   thsSignal_grouped_hww2l2v_13TeV_1jee_events_stack_60->GetZaxis()->SetTitleSize(0.06);
   thsSignal_grouped_hww2l2v_13TeV_1jee_events_stack_60->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_hww2l2v_13TeV_1jee_events->SetHistogram(thsSignal_grouped_hww2l2v_13TeV_1jee_events_stack_60);
   
   
   TH1D *new_histo_group_Higgs_hww2l2v_13TeV_1jee_events269 = new TH1D("new_histo_group_Higgs_hww2l2v_13TeV_1jee_events269","histo_H_htt",1,0,2);
   new_histo_group_Higgs_hww2l2v_13TeV_1jee_events269->SetBinContent(1,12.83486);
   new_histo_group_Higgs_hww2l2v_13TeV_1jee_events269->SetBinError(1,0.8399619);
   new_histo_group_Higgs_hww2l2v_13TeV_1jee_events269->SetEntries(519);
   new_histo_group_Higgs_hww2l2v_13TeV_1jee_events269->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_hww2l2v_13TeV_1jee_events269->SetLineColor(ci);
   new_histo_group_Higgs_hww2l2v_13TeV_1jee_events269->SetLineWidth(2);
   new_histo_group_Higgs_hww2l2v_13TeV_1jee_events269->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_hww2l2v_13TeV_1jee_events269->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_hww2l2v_13TeV_1jee_events269->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_hww2l2v_13TeV_1jee_events269->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_hww2l2v_13TeV_1jee_events269->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_hww2l2v_13TeV_1jee_events269->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_hww2l2v_13TeV_1jee_events269->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_hww2l2v_13TeV_1jee_events269->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_hww2l2v_13TeV_1jee_events269->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_hww2l2v_13TeV_1jee_events269->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_hww2l2v_13TeV_1jee_events269->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_hww2l2v_13TeV_1jee_events269->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_hww2l2v_13TeV_1jee_events->Add(new_histo_group_Higgs_hww2l2v_13TeV_1jee_events,"");
   thsSignal_grouped_hww2l2v_13TeV_1jee_events->Draw("hist same noclear");
   
   Double_t _fx3038[1] = {
   1};
   Double_t _fy3038[1] = {
   201.9779};
   Double_t _felx3038[1] = {
   1};
   Double_t _fely3038[1] = {
   1.525879e-05};
   Double_t _fehx3038[1] = {
   1};
   Double_t _fehy3038[1] = {
   1.525879e-05};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(1,_fx3038,_fy3038,_felx3038,_fehx3038,_fely3038,_fehy3038);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(12);
   grae->SetFillStyle(3004);
   grae->SetLineColor(12);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3038 = new TH1F("Graph_Graph3038","",100,0,2.2);
   Graph_Graph3038->SetMinimum(201.9779);
   Graph_Graph3038->SetMaximum(201.9779);
   Graph_Graph3038->SetDirectory(0);
   Graph_Graph3038->SetStats(0);
   Graph_Graph3038->SetLineStyle(0);
   Graph_Graph3038->SetMarkerStyle(20);
   Graph_Graph3038->GetXaxis()->SetLabelFont(42);
   Graph_Graph3038->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3038->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3038->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3038->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3038->GetXaxis()->SetTitleFont(42);
   Graph_Graph3038->GetYaxis()->SetLabelFont(42);
   Graph_Graph3038->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3038->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3038->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3038->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3038->GetYaxis()->SetTitleFont(42);
   Graph_Graph3038->GetZaxis()->SetLabelFont(42);
   Graph_Graph3038->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3038->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3038->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3038->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3038);
   
   grae->Draw("2");
   
   Double_t _fx3039[1] = {
   1};
   Double_t _fy3039[1] = {
   398};
   Double_t _felx3039[1] = {
   1};
   Double_t _fely3039[1] = {
   19.94198};
   Double_t _fehx3039[1] = {
   1};
   Double_t _fehy3039[1] = {
   20.96711};
   grae = new TGraphAsymmErrors(1,_fx3039,_fy3039,_felx3039,_fehx3039,_fely3039,_fehy3039);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(1);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3039 = new TH1F("Graph_Graph3039","",100,0,2.2);
   Graph_Graph3039->SetMinimum(373.9671);
   Graph_Graph3039->SetMaximum(423.058);
   Graph_Graph3039->SetDirectory(0);
   Graph_Graph3039->SetStats(0);
   Graph_Graph3039->SetLineStyle(0);
   Graph_Graph3039->SetMarkerStyle(20);
   Graph_Graph3039->GetXaxis()->SetLabelFont(42);
   Graph_Graph3039->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3039->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3039->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3039->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3039->GetXaxis()->SetTitleFont(42);
   Graph_Graph3039->GetYaxis()->SetLabelFont(42);
   Graph_Graph3039->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3039->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3039->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3039->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3039->GetYaxis()->SetTitleFont(42);
   Graph_Graph3039->GetZaxis()->SetLabelFont(42);
   Graph_Graph3039->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3039->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3039->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3039->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3039);
   
   grae->Draw("p0");
   
   TLegend *leg = new TLegend(0.2,0.7,0.8,0.9,NULL,"brNDC");
   leg->SetTextFont(62);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("new_histo_group_DY_hww2l2v_13TeV_1jee_events","DY","F");

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
   entry=leg->AddEntry("new_histo_group_top_hww2l2v_13TeV_1jee_events","tW and t#bart","F");

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
   entry=leg->AddEntry("new_histo_group_WW_hww2l2v_13TeV_1jee_events","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_hww2l2v_13TeV_1jee_events","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_VZ_hww2l2v_13TeV_1jee_events","VZ/#gamma*/#gamma","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_hww2l2v_13TeV_1jee_events","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_hww2l2v_13TeV_1jee_events","Data","EPL");
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
   entry=leg->AddEntry("new_histo_group_DY_hww2l2v_13TeV_1jee_events","DY","F");

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
   entry=leg->AddEntry("new_histo_group_top_hww2l2v_13TeV_1jee_events","tW and t#bart","F");

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
   entry=leg->AddEntry("new_histo_group_WW_hww2l2v_13TeV_1jee_events","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_hww2l2v_13TeV_1jee_events","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_VZ_hww2l2v_13TeV_1jee_events","VZ/#gamma*/#gamma","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_hww2l2v_13TeV_1jee_events","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_hww2l2v_13TeV_1jee_events","Data","EPL");
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
   
   TH1F *hframe_copy270 = new TH1F("hframe_copy270","",1000,0,2);
   hframe_copy270->SetMinimum(0);
   hframe_copy270->SetMaximum(1044.875);
   hframe_copy270->SetDirectory(0);
   hframe_copy270->SetStats(0);
   hframe_copy270->SetLineStyle(0);
   hframe_copy270->SetMarkerStyle(20);
   hframe_copy270->GetXaxis()->SetTitle("events");
   hframe_copy270->GetXaxis()->SetNdivisions(506);
   hframe_copy270->GetXaxis()->SetLabelFont(42);
   hframe_copy270->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy270->GetXaxis()->SetLabelSize(0.05);
   hframe_copy270->GetXaxis()->SetTitleSize(0.06);
   hframe_copy270->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy270->GetXaxis()->SetTitleFont(42);
   hframe_copy270->GetYaxis()->SetTitle("Events");
   hframe_copy270->GetYaxis()->SetLabelFont(42);
   hframe_copy270->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy270->GetYaxis()->SetLabelSize(0.05);
   hframe_copy270->GetYaxis()->SetTitleSize(0.06);
   hframe_copy270->GetYaxis()->SetTitleOffset(1.25);
   hframe_copy270->GetYaxis()->SetTitleFont(42);
   hframe_copy270->GetZaxis()->SetLabelFont(42);
   hframe_copy270->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy270->GetZaxis()->SetLabelSize(0.05);
   hframe_copy270->GetZaxis()->SetTitleSize(0.06);
   hframe_copy270->GetZaxis()->SetTitleFont(42);
   hframe_copy270->Draw("sameaxis");
   cchww2l2v_13TeV_1jee_events->Modified();
   cchww2l2v_13TeV_1jee_events->cd();
   cchww2l2v_13TeV_1jee_events->SetSelected(cchww2l2v_13TeV_1jee_events);
}
