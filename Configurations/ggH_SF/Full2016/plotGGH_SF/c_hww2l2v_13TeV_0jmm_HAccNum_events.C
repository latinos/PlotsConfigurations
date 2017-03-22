void c_hww2l2v_13TeV_0jmm_HAccNum_events()
{
//=========Macro generated from canvas: cchww2l2v_13TeV_0jmm_HAccNum_events/cc
//=========  (Tue Mar 21 11:46:32 2017) by ROOT version6.02/13
   TCanvas *cchww2l2v_13TeV_0jmm_HAccNum_events = new TCanvas("cchww2l2v_13TeV_0jmm_HAccNum_events", "cc",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   cchww2l2v_13TeV_0jmm_HAccNum_events->SetHighLightColor(2);
   cchww2l2v_13TeV_0jmm_HAccNum_events->Range(-0.4,-21409.54,2.1,143279.2);
   cchww2l2v_13TeV_0jmm_HAccNum_events->SetFillColor(0);
   cchww2l2v_13TeV_0jmm_HAccNum_events->SetBorderMode(0);
   cchww2l2v_13TeV_0jmm_HAccNum_events->SetBorderSize(2);
   cchww2l2v_13TeV_0jmm_HAccNum_events->SetTickx(1);
   cchww2l2v_13TeV_0jmm_HAccNum_events->SetTicky(1);
   cchww2l2v_13TeV_0jmm_HAccNum_events->SetLeftMargin(0.16);
   cchww2l2v_13TeV_0jmm_HAccNum_events->SetRightMargin(0.04);
   cchww2l2v_13TeV_0jmm_HAccNum_events->SetTopMargin(0.05);
   cchww2l2v_13TeV_0jmm_HAccNum_events->SetBottomMargin(0.13);
   cchww2l2v_13TeV_0jmm_HAccNum_events->SetFrameFillStyle(0);
   cchww2l2v_13TeV_0jmm_HAccNum_events->SetFrameBorderMode(0);
   cchww2l2v_13TeV_0jmm_HAccNum_events->SetFrameFillStyle(0);
   cchww2l2v_13TeV_0jmm_HAccNum_events->SetFrameBorderMode(0);
   
   TH1F *hframe172 = new TH1F("hframe172","",1000,0,2);
   hframe172->SetMinimum(0);
   hframe172->SetMaximum(135044.8);
   hframe172->SetDirectory(0);
   hframe172->SetStats(0);
   hframe172->SetLineStyle(0);
   hframe172->SetMarkerStyle(20);
   hframe172->GetXaxis()->SetTitle("events");
   hframe172->GetXaxis()->SetNdivisions(506);
   hframe172->GetXaxis()->SetLabelFont(42);
   hframe172->GetXaxis()->SetLabelOffset(0.007);
   hframe172->GetXaxis()->SetLabelSize(0.05);
   hframe172->GetXaxis()->SetTitleSize(0.06);
   hframe172->GetXaxis()->SetTitleOffset(0.9);
   hframe172->GetXaxis()->SetTitleFont(42);
   hframe172->GetYaxis()->SetTitle("Events");
   hframe172->GetYaxis()->SetLabelFont(42);
   hframe172->GetYaxis()->SetLabelOffset(0.007);
   hframe172->GetYaxis()->SetLabelSize(0.05);
   hframe172->GetYaxis()->SetTitleSize(0.06);
   hframe172->GetYaxis()->SetTitleOffset(1.25);
   hframe172->GetYaxis()->SetTitleFont(42);
   hframe172->GetZaxis()->SetLabelFont(42);
   hframe172->GetZaxis()->SetLabelOffset(0.007);
   hframe172->GetZaxis()->SetLabelSize(0.05);
   hframe172->GetZaxis()->SetTitleSize(0.06);
   hframe172->GetZaxis()->SetTitleFont(42);
   hframe172->Draw(" ");
   
   THStack *thsBackground_grouped_hww2l2v_13TeV_0jmm_HAccNum_events = new THStack();
   thsBackground_grouped_hww2l2v_13TeV_0jmm_HAccNum_events->SetName("thsBackground_grouped_hww2l2v_13TeV_0jmm_HAccNum_events");
   thsBackground_grouped_hww2l2v_13TeV_0jmm_HAccNum_events->SetTitle("thsBackground_grouped_hww2l2v_13TeV_0jmm_HAccNum_events");
   
   TH1F *thsBackground_grouped_hww2l2v_13TeV_0jmm_HAccNum_events_stack_39 = new TH1F("thsBackground_grouped_hww2l2v_13TeV_0jmm_HAccNum_events_stack_39","thsBackground_grouped_hww2l2v_13TeV_0jmm_HAccNum_events",1,0,2);
   thsBackground_grouped_hww2l2v_13TeV_0jmm_HAccNum_events_stack_39->SetMinimum(0);
   thsBackground_grouped_hww2l2v_13TeV_0jmm_HAccNum_events_stack_39->SetMaximum(30585.89);
   thsBackground_grouped_hww2l2v_13TeV_0jmm_HAccNum_events_stack_39->SetDirectory(0);
   thsBackground_grouped_hww2l2v_13TeV_0jmm_HAccNum_events_stack_39->SetStats(0);
   thsBackground_grouped_hww2l2v_13TeV_0jmm_HAccNum_events_stack_39->SetLineStyle(0);
   thsBackground_grouped_hww2l2v_13TeV_0jmm_HAccNum_events_stack_39->SetMarkerStyle(20);
   thsBackground_grouped_hww2l2v_13TeV_0jmm_HAccNum_events_stack_39->GetXaxis()->SetLabelFont(42);
   thsBackground_grouped_hww2l2v_13TeV_0jmm_HAccNum_events_stack_39->GetXaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_hww2l2v_13TeV_0jmm_HAccNum_events_stack_39->GetXaxis()->SetLabelSize(0.05);
   thsBackground_grouped_hww2l2v_13TeV_0jmm_HAccNum_events_stack_39->GetXaxis()->SetTitleSize(0.06);
   thsBackground_grouped_hww2l2v_13TeV_0jmm_HAccNum_events_stack_39->GetXaxis()->SetTitleOffset(0.9);
   thsBackground_grouped_hww2l2v_13TeV_0jmm_HAccNum_events_stack_39->GetXaxis()->SetTitleFont(42);
   thsBackground_grouped_hww2l2v_13TeV_0jmm_HAccNum_events_stack_39->GetYaxis()->SetLabelFont(42);
   thsBackground_grouped_hww2l2v_13TeV_0jmm_HAccNum_events_stack_39->GetYaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_hww2l2v_13TeV_0jmm_HAccNum_events_stack_39->GetYaxis()->SetLabelSize(0.05);
   thsBackground_grouped_hww2l2v_13TeV_0jmm_HAccNum_events_stack_39->GetYaxis()->SetTitleSize(0.06);
   thsBackground_grouped_hww2l2v_13TeV_0jmm_HAccNum_events_stack_39->GetYaxis()->SetTitleOffset(1.25);
   thsBackground_grouped_hww2l2v_13TeV_0jmm_HAccNum_events_stack_39->GetYaxis()->SetTitleFont(42);
   thsBackground_grouped_hww2l2v_13TeV_0jmm_HAccNum_events_stack_39->GetZaxis()->SetLabelFont(42);
   thsBackground_grouped_hww2l2v_13TeV_0jmm_HAccNum_events_stack_39->GetZaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_hww2l2v_13TeV_0jmm_HAccNum_events_stack_39->GetZaxis()->SetLabelSize(0.05);
   thsBackground_grouped_hww2l2v_13TeV_0jmm_HAccNum_events_stack_39->GetZaxis()->SetTitleSize(0.06);
   thsBackground_grouped_hww2l2v_13TeV_0jmm_HAccNum_events_stack_39->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_hww2l2v_13TeV_0jmm_HAccNum_events->SetHistogram(thsBackground_grouped_hww2l2v_13TeV_0jmm_HAccNum_events_stack_39);
   
   
   TH1D *new_histo_group_DY_hww2l2v_13TeV_0jmm_HAccNum_events173 = new TH1D("new_histo_group_DY_hww2l2v_13TeV_0jmm_HAccNum_events173","histo_DY",1,0,2);
   new_histo_group_DY_hww2l2v_13TeV_0jmm_HAccNum_events173->SetBinContent(1,26059.67);
   new_histo_group_DY_hww2l2v_13TeV_0jmm_HAccNum_events173->SetBinError(1,944.5675);
   new_histo_group_DY_hww2l2v_13TeV_0jmm_HAccNum_events173->SetEntries(3375);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#009900");
   new_histo_group_DY_hww2l2v_13TeV_0jmm_HAccNum_events173->SetFillColor(ci);
   new_histo_group_DY_hww2l2v_13TeV_0jmm_HAccNum_events173->SetFillStyle(3001);

   ci = TColor::GetColor("#009900");
   new_histo_group_DY_hww2l2v_13TeV_0jmm_HAccNum_events173->SetLineColor(ci);
   new_histo_group_DY_hww2l2v_13TeV_0jmm_HAccNum_events173->GetXaxis()->SetLabelFont(42);
   new_histo_group_DY_hww2l2v_13TeV_0jmm_HAccNum_events173->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_DY_hww2l2v_13TeV_0jmm_HAccNum_events173->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_DY_hww2l2v_13TeV_0jmm_HAccNum_events173->GetXaxis()->SetTitleFont(42);
   new_histo_group_DY_hww2l2v_13TeV_0jmm_HAccNum_events173->GetYaxis()->SetLabelFont(42);
   new_histo_group_DY_hww2l2v_13TeV_0jmm_HAccNum_events173->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_DY_hww2l2v_13TeV_0jmm_HAccNum_events173->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_DY_hww2l2v_13TeV_0jmm_HAccNum_events173->GetYaxis()->SetTitleFont(42);
   new_histo_group_DY_hww2l2v_13TeV_0jmm_HAccNum_events173->GetZaxis()->SetLabelFont(42);
   new_histo_group_DY_hww2l2v_13TeV_0jmm_HAccNum_events173->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_DY_hww2l2v_13TeV_0jmm_HAccNum_events173->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_DY_hww2l2v_13TeV_0jmm_HAccNum_events173->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_hww2l2v_13TeV_0jmm_HAccNum_events->Add(new_histo_group_DY_hww2l2v_13TeV_0jmm_HAccNum_events,"");
   
   TH1D *new_histo_group_top_hww2l2v_13TeV_0jmm_HAccNum_events174 = new TH1D("new_histo_group_top_hww2l2v_13TeV_0jmm_HAccNum_events174","histo_top",1,0,2);
   new_histo_group_top_hww2l2v_13TeV_0jmm_HAccNum_events174->SetBinContent(1,168.9494);
   new_histo_group_top_hww2l2v_13TeV_0jmm_HAccNum_events174->SetBinError(1,2.654334);
   new_histo_group_top_hww2l2v_13TeV_0jmm_HAccNum_events174->SetEntries(4532);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_top_hww2l2v_13TeV_0jmm_HAccNum_events174->SetFillColor(ci);
   new_histo_group_top_hww2l2v_13TeV_0jmm_HAccNum_events174->SetFillStyle(3001);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_top_hww2l2v_13TeV_0jmm_HAccNum_events174->SetLineColor(ci);
   new_histo_group_top_hww2l2v_13TeV_0jmm_HAccNum_events174->GetXaxis()->SetLabelFont(42);
   new_histo_group_top_hww2l2v_13TeV_0jmm_HAccNum_events174->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_top_hww2l2v_13TeV_0jmm_HAccNum_events174->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_top_hww2l2v_13TeV_0jmm_HAccNum_events174->GetXaxis()->SetTitleFont(42);
   new_histo_group_top_hww2l2v_13TeV_0jmm_HAccNum_events174->GetYaxis()->SetLabelFont(42);
   new_histo_group_top_hww2l2v_13TeV_0jmm_HAccNum_events174->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_top_hww2l2v_13TeV_0jmm_HAccNum_events174->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_top_hww2l2v_13TeV_0jmm_HAccNum_events174->GetYaxis()->SetTitleFont(42);
   new_histo_group_top_hww2l2v_13TeV_0jmm_HAccNum_events174->GetZaxis()->SetLabelFont(42);
   new_histo_group_top_hww2l2v_13TeV_0jmm_HAccNum_events174->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_top_hww2l2v_13TeV_0jmm_HAccNum_events174->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_top_hww2l2v_13TeV_0jmm_HAccNum_events174->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_hww2l2v_13TeV_0jmm_HAccNum_events->Add(new_histo_group_top_hww2l2v_13TeV_0jmm_HAccNum_events,"");
   
   TH1D *new_histo_group_WW_hww2l2v_13TeV_0jmm_HAccNum_events175 = new TH1D("new_histo_group_WW_hww2l2v_13TeV_0jmm_HAccNum_events175","histo_WW",1,0,2);
   new_histo_group_WW_hww2l2v_13TeV_0jmm_HAccNum_events175->SetBinContent(1,2065.797);
   new_histo_group_WW_hww2l2v_13TeV_0jmm_HAccNum_events175->SetBinError(1,20.4414);
   new_histo_group_WW_hww2l2v_13TeV_0jmm_HAccNum_events175->SetEntries(13953);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_hww2l2v_13TeV_0jmm_HAccNum_events175->SetFillColor(ci);
   new_histo_group_WW_hww2l2v_13TeV_0jmm_HAccNum_events175->SetFillStyle(3001);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_hww2l2v_13TeV_0jmm_HAccNum_events175->SetLineColor(ci);
   new_histo_group_WW_hww2l2v_13TeV_0jmm_HAccNum_events175->GetXaxis()->SetLabelFont(42);
   new_histo_group_WW_hww2l2v_13TeV_0jmm_HAccNum_events175->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WW_hww2l2v_13TeV_0jmm_HAccNum_events175->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WW_hww2l2v_13TeV_0jmm_HAccNum_events175->GetXaxis()->SetTitleFont(42);
   new_histo_group_WW_hww2l2v_13TeV_0jmm_HAccNum_events175->GetYaxis()->SetLabelFont(42);
   new_histo_group_WW_hww2l2v_13TeV_0jmm_HAccNum_events175->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WW_hww2l2v_13TeV_0jmm_HAccNum_events175->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WW_hww2l2v_13TeV_0jmm_HAccNum_events175->GetYaxis()->SetTitleFont(42);
   new_histo_group_WW_hww2l2v_13TeV_0jmm_HAccNum_events175->GetZaxis()->SetLabelFont(42);
   new_histo_group_WW_hww2l2v_13TeV_0jmm_HAccNum_events175->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WW_hww2l2v_13TeV_0jmm_HAccNum_events175->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WW_hww2l2v_13TeV_0jmm_HAccNum_events175->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_hww2l2v_13TeV_0jmm_HAccNum_events->Add(new_histo_group_WW_hww2l2v_13TeV_0jmm_HAccNum_events,"");
   
   TH1D *new_histo_group_VVV_hww2l2v_13TeV_0jmm_HAccNum_events176 = new TH1D("new_histo_group_VVV_hww2l2v_13TeV_0jmm_HAccNum_events176","histo_VVV",1,0,2);
   new_histo_group_VVV_hww2l2v_13TeV_0jmm_HAccNum_events176->SetBinContent(1,1.125121);
   new_histo_group_VVV_hww2l2v_13TeV_0jmm_HAccNum_events176->SetBinError(1,0.1952372);
   new_histo_group_VVV_hww2l2v_13TeV_0jmm_HAccNum_events176->SetEntries(47);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_hww2l2v_13TeV_0jmm_HAccNum_events176->SetFillColor(ci);
   new_histo_group_VVV_hww2l2v_13TeV_0jmm_HAccNum_events176->SetFillStyle(3001);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_hww2l2v_13TeV_0jmm_HAccNum_events176->SetLineColor(ci);
   new_histo_group_VVV_hww2l2v_13TeV_0jmm_HAccNum_events176->GetXaxis()->SetLabelFont(42);
   new_histo_group_VVV_hww2l2v_13TeV_0jmm_HAccNum_events176->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_hww2l2v_13TeV_0jmm_HAccNum_events176->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_hww2l2v_13TeV_0jmm_HAccNum_events176->GetXaxis()->SetTitleFont(42);
   new_histo_group_VVV_hww2l2v_13TeV_0jmm_HAccNum_events176->GetYaxis()->SetLabelFont(42);
   new_histo_group_VVV_hww2l2v_13TeV_0jmm_HAccNum_events176->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_hww2l2v_13TeV_0jmm_HAccNum_events176->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_hww2l2v_13TeV_0jmm_HAccNum_events176->GetYaxis()->SetTitleFont(42);
   new_histo_group_VVV_hww2l2v_13TeV_0jmm_HAccNum_events176->GetZaxis()->SetLabelFont(42);
   new_histo_group_VVV_hww2l2v_13TeV_0jmm_HAccNum_events176->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_hww2l2v_13TeV_0jmm_HAccNum_events176->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_hww2l2v_13TeV_0jmm_HAccNum_events176->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_hww2l2v_13TeV_0jmm_HAccNum_events->Add(new_histo_group_VVV_hww2l2v_13TeV_0jmm_HAccNum_events,"");
   
   TH1D *new_histo_group_VZ_hww2l2v_13TeV_0jmm_HAccNum_events177 = new TH1D("new_histo_group_VZ_hww2l2v_13TeV_0jmm_HAccNum_events177","histo_Vg",1,0,2);
   new_histo_group_VZ_hww2l2v_13TeV_0jmm_HAccNum_events177->SetBinContent(1,378.7401);
   new_histo_group_VZ_hww2l2v_13TeV_0jmm_HAccNum_events177->SetBinError(1,85.30408);
   new_histo_group_VZ_hww2l2v_13TeV_0jmm_HAccNum_events177->SetEntries(8839);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_VZ_hww2l2v_13TeV_0jmm_HAccNum_events177->SetFillColor(ci);
   new_histo_group_VZ_hww2l2v_13TeV_0jmm_HAccNum_events177->SetFillStyle(3001);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_VZ_hww2l2v_13TeV_0jmm_HAccNum_events177->SetLineColor(ci);
   new_histo_group_VZ_hww2l2v_13TeV_0jmm_HAccNum_events177->GetXaxis()->SetLabelFont(42);
   new_histo_group_VZ_hww2l2v_13TeV_0jmm_HAccNum_events177->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_VZ_hww2l2v_13TeV_0jmm_HAccNum_events177->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_VZ_hww2l2v_13TeV_0jmm_HAccNum_events177->GetXaxis()->SetTitleFont(42);
   new_histo_group_VZ_hww2l2v_13TeV_0jmm_HAccNum_events177->GetYaxis()->SetLabelFont(42);
   new_histo_group_VZ_hww2l2v_13TeV_0jmm_HAccNum_events177->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_VZ_hww2l2v_13TeV_0jmm_HAccNum_events177->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_VZ_hww2l2v_13TeV_0jmm_HAccNum_events177->GetYaxis()->SetTitleFont(42);
   new_histo_group_VZ_hww2l2v_13TeV_0jmm_HAccNum_events177->GetZaxis()->SetLabelFont(42);
   new_histo_group_VZ_hww2l2v_13TeV_0jmm_HAccNum_events177->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_VZ_hww2l2v_13TeV_0jmm_HAccNum_events177->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_VZ_hww2l2v_13TeV_0jmm_HAccNum_events177->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_hww2l2v_13TeV_0jmm_HAccNum_events->Add(new_histo_group_VZ_hww2l2v_13TeV_0jmm_HAccNum_events,"");
   
   TH1D *new_histo_group_Higgs_hww2l2v_13TeV_0jmm_HAccNum_events178 = new TH1D("new_histo_group_Higgs_hww2l2v_13TeV_0jmm_HAccNum_events178","histo_H_htt",1,0,2);
   new_histo_group_Higgs_hww2l2v_13TeV_0jmm_HAccNum_events178->SetBinContent(1,455.1377);
   new_histo_group_Higgs_hww2l2v_13TeV_0jmm_HAccNum_events178->SetBinError(1,5.734016);
   new_histo_group_Higgs_hww2l2v_13TeV_0jmm_HAccNum_events178->SetEntries(8056);
   new_histo_group_Higgs_hww2l2v_13TeV_0jmm_HAccNum_events178->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_hww2l2v_13TeV_0jmm_HAccNum_events178->SetLineColor(ci);
   new_histo_group_Higgs_hww2l2v_13TeV_0jmm_HAccNum_events178->SetLineWidth(2);
   new_histo_group_Higgs_hww2l2v_13TeV_0jmm_HAccNum_events178->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_hww2l2v_13TeV_0jmm_HAccNum_events178->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_hww2l2v_13TeV_0jmm_HAccNum_events178->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_hww2l2v_13TeV_0jmm_HAccNum_events178->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_hww2l2v_13TeV_0jmm_HAccNum_events178->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_hww2l2v_13TeV_0jmm_HAccNum_events178->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_hww2l2v_13TeV_0jmm_HAccNum_events178->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_hww2l2v_13TeV_0jmm_HAccNum_events178->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_hww2l2v_13TeV_0jmm_HAccNum_events178->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_hww2l2v_13TeV_0jmm_HAccNum_events178->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_hww2l2v_13TeV_0jmm_HAccNum_events178->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_hww2l2v_13TeV_0jmm_HAccNum_events178->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_hww2l2v_13TeV_0jmm_HAccNum_events->Add(new_histo_group_Higgs_hww2l2v_13TeV_0jmm_HAccNum_events,"");
   thsBackground_grouped_hww2l2v_13TeV_0jmm_HAccNum_events->Draw("hist same");
   
   thsSignal_grouped_hww2l2v_13TeV_0jmm_HAccNum_events = new THStack();
   thsSignal_grouped_hww2l2v_13TeV_0jmm_HAccNum_events->SetName("thsSignal_grouped_hww2l2v_13TeV_0jmm_HAccNum_events");
   thsSignal_grouped_hww2l2v_13TeV_0jmm_HAccNum_events->SetTitle("thsSignal_grouped_hww2l2v_13TeV_0jmm_HAccNum_events");
   
   TH1F *thsSignal_grouped_hww2l2v_13TeV_0jmm_HAccNum_events_stack_40 = new TH1F("thsSignal_grouped_hww2l2v_13TeV_0jmm_HAccNum_events_stack_40","thsSignal_grouped_hww2l2v_13TeV_0jmm_HAccNum_events",1,0,2);
   thsSignal_grouped_hww2l2v_13TeV_0jmm_HAccNum_events_stack_40->SetMinimum(0);
   thsSignal_grouped_hww2l2v_13TeV_0jmm_HAccNum_events_stack_40->SetMaximum(483.9153);
   thsSignal_grouped_hww2l2v_13TeV_0jmm_HAccNum_events_stack_40->SetDirectory(0);
   thsSignal_grouped_hww2l2v_13TeV_0jmm_HAccNum_events_stack_40->SetStats(0);
   thsSignal_grouped_hww2l2v_13TeV_0jmm_HAccNum_events_stack_40->SetLineStyle(0);
   thsSignal_grouped_hww2l2v_13TeV_0jmm_HAccNum_events_stack_40->SetMarkerStyle(20);
   thsSignal_grouped_hww2l2v_13TeV_0jmm_HAccNum_events_stack_40->GetXaxis()->SetLabelFont(42);
   thsSignal_grouped_hww2l2v_13TeV_0jmm_HAccNum_events_stack_40->GetXaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_hww2l2v_13TeV_0jmm_HAccNum_events_stack_40->GetXaxis()->SetLabelSize(0.05);
   thsSignal_grouped_hww2l2v_13TeV_0jmm_HAccNum_events_stack_40->GetXaxis()->SetTitleSize(0.06);
   thsSignal_grouped_hww2l2v_13TeV_0jmm_HAccNum_events_stack_40->GetXaxis()->SetTitleOffset(0.9);
   thsSignal_grouped_hww2l2v_13TeV_0jmm_HAccNum_events_stack_40->GetXaxis()->SetTitleFont(42);
   thsSignal_grouped_hww2l2v_13TeV_0jmm_HAccNum_events_stack_40->GetYaxis()->SetLabelFont(42);
   thsSignal_grouped_hww2l2v_13TeV_0jmm_HAccNum_events_stack_40->GetYaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_hww2l2v_13TeV_0jmm_HAccNum_events_stack_40->GetYaxis()->SetLabelSize(0.05);
   thsSignal_grouped_hww2l2v_13TeV_0jmm_HAccNum_events_stack_40->GetYaxis()->SetTitleSize(0.06);
   thsSignal_grouped_hww2l2v_13TeV_0jmm_HAccNum_events_stack_40->GetYaxis()->SetTitleOffset(1.25);
   thsSignal_grouped_hww2l2v_13TeV_0jmm_HAccNum_events_stack_40->GetYaxis()->SetTitleFont(42);
   thsSignal_grouped_hww2l2v_13TeV_0jmm_HAccNum_events_stack_40->GetZaxis()->SetLabelFont(42);
   thsSignal_grouped_hww2l2v_13TeV_0jmm_HAccNum_events_stack_40->GetZaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_hww2l2v_13TeV_0jmm_HAccNum_events_stack_40->GetZaxis()->SetLabelSize(0.05);
   thsSignal_grouped_hww2l2v_13TeV_0jmm_HAccNum_events_stack_40->GetZaxis()->SetTitleSize(0.06);
   thsSignal_grouped_hww2l2v_13TeV_0jmm_HAccNum_events_stack_40->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_hww2l2v_13TeV_0jmm_HAccNum_events->SetHistogram(thsSignal_grouped_hww2l2v_13TeV_0jmm_HAccNum_events_stack_40);
   
   
   TH1D *new_histo_group_Higgs_hww2l2v_13TeV_0jmm_HAccNum_events179 = new TH1D("new_histo_group_Higgs_hww2l2v_13TeV_0jmm_HAccNum_events179","histo_H_htt",1,0,2);
   new_histo_group_Higgs_hww2l2v_13TeV_0jmm_HAccNum_events179->SetBinContent(1,455.1377);
   new_histo_group_Higgs_hww2l2v_13TeV_0jmm_HAccNum_events179->SetBinError(1,5.734016);
   new_histo_group_Higgs_hww2l2v_13TeV_0jmm_HAccNum_events179->SetEntries(8056);
   new_histo_group_Higgs_hww2l2v_13TeV_0jmm_HAccNum_events179->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_hww2l2v_13TeV_0jmm_HAccNum_events179->SetLineColor(ci);
   new_histo_group_Higgs_hww2l2v_13TeV_0jmm_HAccNum_events179->SetLineWidth(2);
   new_histo_group_Higgs_hww2l2v_13TeV_0jmm_HAccNum_events179->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_hww2l2v_13TeV_0jmm_HAccNum_events179->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_hww2l2v_13TeV_0jmm_HAccNum_events179->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_hww2l2v_13TeV_0jmm_HAccNum_events179->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_hww2l2v_13TeV_0jmm_HAccNum_events179->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_hww2l2v_13TeV_0jmm_HAccNum_events179->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_hww2l2v_13TeV_0jmm_HAccNum_events179->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_hww2l2v_13TeV_0jmm_HAccNum_events179->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_hww2l2v_13TeV_0jmm_HAccNum_events179->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_hww2l2v_13TeV_0jmm_HAccNum_events179->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_hww2l2v_13TeV_0jmm_HAccNum_events179->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_hww2l2v_13TeV_0jmm_HAccNum_events179->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_hww2l2v_13TeV_0jmm_HAccNum_events->Add(new_histo_group_Higgs_hww2l2v_13TeV_0jmm_HAccNum_events,"");
   thsSignal_grouped_hww2l2v_13TeV_0jmm_HAccNum_events->Draw("hist same noclear");
   
   Double_t _fx3027[1] = {
   1};
   Double_t _fy3027[1] = {
   53786};
   Double_t _felx3027[1] = {
   1};
   Double_t _fely3027[1] = {
   231.9224};
   Double_t _fehx3027[1] = {
   1};
   Double_t _fehy3027[1] = {
   232.9246};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(1,_fx3027,_fy3027,_felx3027,_fehx3027,_fely3027,_fehy3027);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(1);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3027 = new TH1F("Graph_Graph3027","",100,0,2.2);
   Graph_Graph3027->SetMinimum(53507.59);
   Graph_Graph3027->SetMaximum(54065.41);
   Graph_Graph3027->SetDirectory(0);
   Graph_Graph3027->SetStats(0);
   Graph_Graph3027->SetLineStyle(0);
   Graph_Graph3027->SetMarkerStyle(20);
   Graph_Graph3027->GetXaxis()->SetLabelFont(42);
   Graph_Graph3027->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3027->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3027->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3027->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3027->GetXaxis()->SetTitleFont(42);
   Graph_Graph3027->GetYaxis()->SetLabelFont(42);
   Graph_Graph3027->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3027->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3027->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3027->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3027->GetYaxis()->SetTitleFont(42);
   Graph_Graph3027->GetZaxis()->SetLabelFont(42);
   Graph_Graph3027->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3027->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3027->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3027->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3027);
   
   grae->Draw("p0");
   
   TLegend *leg = new TLegend(0.2,0.7,0.8,0.9,NULL,"brNDC");
   leg->SetTextFont(62);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("new_histo_group_DY_hww2l2v_13TeV_0jmm_HAccNum_events","DY","F");

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
   entry=leg->AddEntry("new_histo_group_top_hww2l2v_13TeV_0jmm_HAccNum_events","tW and t#bart","F");

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
   entry=leg->AddEntry("new_histo_group_WW_hww2l2v_13TeV_0jmm_HAccNum_events","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_hww2l2v_13TeV_0jmm_HAccNum_events","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_VZ_hww2l2v_13TeV_0jmm_HAccNum_events","VZ/#gamma*/#gamma","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_hww2l2v_13TeV_0jmm_HAccNum_events","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_hww2l2v_13TeV_0jmm_HAccNum_events","Data","EPL");
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
   entry=leg->AddEntry("new_histo_group_DY_hww2l2v_13TeV_0jmm_HAccNum_events","DY","F");

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
   entry=leg->AddEntry("new_histo_group_top_hww2l2v_13TeV_0jmm_HAccNum_events","tW and t#bart","F");

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
   entry=leg->AddEntry("new_histo_group_WW_hww2l2v_13TeV_0jmm_HAccNum_events","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_hww2l2v_13TeV_0jmm_HAccNum_events","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_VZ_hww2l2v_13TeV_0jmm_HAccNum_events","VZ/#gamma*/#gamma","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_hww2l2v_13TeV_0jmm_HAccNum_events","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_hww2l2v_13TeV_0jmm_HAccNum_events","Data","EPL");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   leg->Draw();
   
   TH1F *hframe_copy180 = new TH1F("hframe_copy180","",1000,0,2);
   hframe_copy180->SetMinimum(0);
   hframe_copy180->SetMaximum(135044.8);
   hframe_copy180->SetDirectory(0);
   hframe_copy180->SetStats(0);
   hframe_copy180->SetLineStyle(0);
   hframe_copy180->SetMarkerStyle(20);
   hframe_copy180->GetXaxis()->SetTitle("events");
   hframe_copy180->GetXaxis()->SetNdivisions(506);
   hframe_copy180->GetXaxis()->SetLabelFont(42);
   hframe_copy180->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy180->GetXaxis()->SetLabelSize(0.05);
   hframe_copy180->GetXaxis()->SetTitleSize(0.06);
   hframe_copy180->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy180->GetXaxis()->SetTitleFont(42);
   hframe_copy180->GetYaxis()->SetTitle("Events");
   hframe_copy180->GetYaxis()->SetLabelFont(42);
   hframe_copy180->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy180->GetYaxis()->SetLabelSize(0.05);
   hframe_copy180->GetYaxis()->SetTitleSize(0.06);
   hframe_copy180->GetYaxis()->SetTitleOffset(1.25);
   hframe_copy180->GetYaxis()->SetTitleFont(42);
   hframe_copy180->GetZaxis()->SetLabelFont(42);
   hframe_copy180->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy180->GetZaxis()->SetLabelSize(0.05);
   hframe_copy180->GetZaxis()->SetTitleSize(0.06);
   hframe_copy180->GetZaxis()->SetTitleFont(42);
   hframe_copy180->Draw("sameaxis");
   cchww2l2v_13TeV_0jmm_HAccNum_events->Modified();
   cchww2l2v_13TeV_0jmm_HAccNum_events->cd();
   cchww2l2v_13TeV_0jmm_HAccNum_events->SetSelected(cchww2l2v_13TeV_0jmm_HAccNum_events);
}
