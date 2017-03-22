void c_hww2l2v_13TeV_DYin_0jdf_events()
{
//=========Macro generated from canvas: cchww2l2v_13TeV_DYin_0jdf_events/cc
//=========  (Tue Mar 21 11:46:25 2017) by ROOT version6.02/13
   TCanvas *cchww2l2v_13TeV_DYin_0jdf_events = new TCanvas("cchww2l2v_13TeV_DYin_0jdf_events", "cc",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   cchww2l2v_13TeV_DYin_0jdf_events->SetHighLightColor(2);
   cchww2l2v_13TeV_DYin_0jdf_events->Range(-0.4,-400.8221,2.1,2682.425);
   cchww2l2v_13TeV_DYin_0jdf_events->SetFillColor(0);
   cchww2l2v_13TeV_DYin_0jdf_events->SetBorderMode(0);
   cchww2l2v_13TeV_DYin_0jdf_events->SetBorderSize(2);
   cchww2l2v_13TeV_DYin_0jdf_events->SetTickx(1);
   cchww2l2v_13TeV_DYin_0jdf_events->SetTicky(1);
   cchww2l2v_13TeV_DYin_0jdf_events->SetLeftMargin(0.16);
   cchww2l2v_13TeV_DYin_0jdf_events->SetRightMargin(0.04);
   cchww2l2v_13TeV_DYin_0jdf_events->SetTopMargin(0.05);
   cchww2l2v_13TeV_DYin_0jdf_events->SetBottomMargin(0.13);
   cchww2l2v_13TeV_DYin_0jdf_events->SetFrameFillStyle(0);
   cchww2l2v_13TeV_DYin_0jdf_events->SetFrameBorderMode(0);
   cchww2l2v_13TeV_DYin_0jdf_events->SetFrameFillStyle(0);
   cchww2l2v_13TeV_DYin_0jdf_events->SetFrameBorderMode(0);
   
   TH1F *hframe109 = new TH1F("hframe109","",1000,0,2);
   hframe109->SetMinimum(0);
   hframe109->SetMaximum(2528.262);
   hframe109->SetDirectory(0);
   hframe109->SetStats(0);
   hframe109->SetLineStyle(0);
   hframe109->SetMarkerStyle(20);
   hframe109->GetXaxis()->SetTitle("events");
   hframe109->GetXaxis()->SetNdivisions(506);
   hframe109->GetXaxis()->SetLabelFont(42);
   hframe109->GetXaxis()->SetLabelOffset(0.007);
   hframe109->GetXaxis()->SetLabelSize(0.05);
   hframe109->GetXaxis()->SetTitleSize(0.06);
   hframe109->GetXaxis()->SetTitleOffset(0.9);
   hframe109->GetXaxis()->SetTitleFont(42);
   hframe109->GetYaxis()->SetTitle("Events");
   hframe109->GetYaxis()->SetLabelFont(42);
   hframe109->GetYaxis()->SetLabelOffset(0.007);
   hframe109->GetYaxis()->SetLabelSize(0.05);
   hframe109->GetYaxis()->SetTitleSize(0.06);
   hframe109->GetYaxis()->SetTitleOffset(1.25);
   hframe109->GetYaxis()->SetTitleFont(42);
   hframe109->GetZaxis()->SetLabelFont(42);
   hframe109->GetZaxis()->SetLabelOffset(0.007);
   hframe109->GetZaxis()->SetLabelSize(0.05);
   hframe109->GetZaxis()->SetTitleSize(0.06);
   hframe109->GetZaxis()->SetTitleFont(42);
   hframe109->Draw(" ");
   
   THStack *thsBackground_grouped_hww2l2v_13TeV_DYin_0jdf_events = new THStack();
   thsBackground_grouped_hww2l2v_13TeV_DYin_0jdf_events->SetName("thsBackground_grouped_hww2l2v_13TeV_DYin_0jdf_events");
   thsBackground_grouped_hww2l2v_13TeV_DYin_0jdf_events->SetTitle("thsBackground_grouped_hww2l2v_13TeV_DYin_0jdf_events");
   
   TH1F *thsBackground_grouped_hww2l2v_13TeV_DYin_0jdf_events_stack_25 = new TH1F("thsBackground_grouped_hww2l2v_13TeV_DYin_0jdf_events_stack_25","thsBackground_grouped_hww2l2v_13TeV_DYin_0jdf_events",1,0,2);
   thsBackground_grouped_hww2l2v_13TeV_DYin_0jdf_events_stack_25->SetMinimum(0);
   thsBackground_grouped_hww2l2v_13TeV_DYin_0jdf_events_stack_25->SetMaximum(824.3943);
   thsBackground_grouped_hww2l2v_13TeV_DYin_0jdf_events_stack_25->SetDirectory(0);
   thsBackground_grouped_hww2l2v_13TeV_DYin_0jdf_events_stack_25->SetStats(0);
   thsBackground_grouped_hww2l2v_13TeV_DYin_0jdf_events_stack_25->SetLineStyle(0);
   thsBackground_grouped_hww2l2v_13TeV_DYin_0jdf_events_stack_25->SetMarkerStyle(20);
   thsBackground_grouped_hww2l2v_13TeV_DYin_0jdf_events_stack_25->GetXaxis()->SetLabelFont(42);
   thsBackground_grouped_hww2l2v_13TeV_DYin_0jdf_events_stack_25->GetXaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_hww2l2v_13TeV_DYin_0jdf_events_stack_25->GetXaxis()->SetLabelSize(0.05);
   thsBackground_grouped_hww2l2v_13TeV_DYin_0jdf_events_stack_25->GetXaxis()->SetTitleSize(0.06);
   thsBackground_grouped_hww2l2v_13TeV_DYin_0jdf_events_stack_25->GetXaxis()->SetTitleOffset(0.9);
   thsBackground_grouped_hww2l2v_13TeV_DYin_0jdf_events_stack_25->GetXaxis()->SetTitleFont(42);
   thsBackground_grouped_hww2l2v_13TeV_DYin_0jdf_events_stack_25->GetYaxis()->SetLabelFont(42);
   thsBackground_grouped_hww2l2v_13TeV_DYin_0jdf_events_stack_25->GetYaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_hww2l2v_13TeV_DYin_0jdf_events_stack_25->GetYaxis()->SetLabelSize(0.05);
   thsBackground_grouped_hww2l2v_13TeV_DYin_0jdf_events_stack_25->GetYaxis()->SetTitleSize(0.06);
   thsBackground_grouped_hww2l2v_13TeV_DYin_0jdf_events_stack_25->GetYaxis()->SetTitleOffset(1.25);
   thsBackground_grouped_hww2l2v_13TeV_DYin_0jdf_events_stack_25->GetYaxis()->SetTitleFont(42);
   thsBackground_grouped_hww2l2v_13TeV_DYin_0jdf_events_stack_25->GetZaxis()->SetLabelFont(42);
   thsBackground_grouped_hww2l2v_13TeV_DYin_0jdf_events_stack_25->GetZaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_hww2l2v_13TeV_DYin_0jdf_events_stack_25->GetZaxis()->SetLabelSize(0.05);
   thsBackground_grouped_hww2l2v_13TeV_DYin_0jdf_events_stack_25->GetZaxis()->SetTitleSize(0.06);
   thsBackground_grouped_hww2l2v_13TeV_DYin_0jdf_events_stack_25->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_hww2l2v_13TeV_DYin_0jdf_events->SetHistogram(thsBackground_grouped_hww2l2v_13TeV_DYin_0jdf_events_stack_25);
   
   
   TH1D *new_histo_group_DY_hww2l2v_13TeV_DYin_0jdf_events110 = new TH1D("new_histo_group_DY_hww2l2v_13TeV_DYin_0jdf_events110","histo_DY",1,0,2);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#009900");
   new_histo_group_DY_hww2l2v_13TeV_DYin_0jdf_events110->SetFillColor(ci);
   new_histo_group_DY_hww2l2v_13TeV_DYin_0jdf_events110->SetFillStyle(3001);

   ci = TColor::GetColor("#009900");
   new_histo_group_DY_hww2l2v_13TeV_DYin_0jdf_events110->SetLineColor(ci);
   new_histo_group_DY_hww2l2v_13TeV_DYin_0jdf_events110->GetXaxis()->SetLabelFont(42);
   new_histo_group_DY_hww2l2v_13TeV_DYin_0jdf_events110->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_DY_hww2l2v_13TeV_DYin_0jdf_events110->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_DY_hww2l2v_13TeV_DYin_0jdf_events110->GetXaxis()->SetTitleFont(42);
   new_histo_group_DY_hww2l2v_13TeV_DYin_0jdf_events110->GetYaxis()->SetLabelFont(42);
   new_histo_group_DY_hww2l2v_13TeV_DYin_0jdf_events110->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_DY_hww2l2v_13TeV_DYin_0jdf_events110->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_DY_hww2l2v_13TeV_DYin_0jdf_events110->GetYaxis()->SetTitleFont(42);
   new_histo_group_DY_hww2l2v_13TeV_DYin_0jdf_events110->GetZaxis()->SetLabelFont(42);
   new_histo_group_DY_hww2l2v_13TeV_DYin_0jdf_events110->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_DY_hww2l2v_13TeV_DYin_0jdf_events110->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_DY_hww2l2v_13TeV_DYin_0jdf_events110->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_hww2l2v_13TeV_DYin_0jdf_events->Add(new_histo_group_DY_hww2l2v_13TeV_DYin_0jdf_events,"");
   
   TH1D *new_histo_group_top_hww2l2v_13TeV_DYin_0jdf_events111 = new TH1D("new_histo_group_top_hww2l2v_13TeV_DYin_0jdf_events111","histo_top",1,0,2);
   new_histo_group_top_hww2l2v_13TeV_DYin_0jdf_events111->SetBinContent(1,115.5113);
   new_histo_group_top_hww2l2v_13TeV_DYin_0jdf_events111->SetBinError(1,2.151002);
   new_histo_group_top_hww2l2v_13TeV_DYin_0jdf_events111->SetEntries(3209);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_top_hww2l2v_13TeV_DYin_0jdf_events111->SetFillColor(ci);
   new_histo_group_top_hww2l2v_13TeV_DYin_0jdf_events111->SetFillStyle(3001);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_top_hww2l2v_13TeV_DYin_0jdf_events111->SetLineColor(ci);
   new_histo_group_top_hww2l2v_13TeV_DYin_0jdf_events111->GetXaxis()->SetLabelFont(42);
   new_histo_group_top_hww2l2v_13TeV_DYin_0jdf_events111->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_top_hww2l2v_13TeV_DYin_0jdf_events111->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_top_hww2l2v_13TeV_DYin_0jdf_events111->GetXaxis()->SetTitleFont(42);
   new_histo_group_top_hww2l2v_13TeV_DYin_0jdf_events111->GetYaxis()->SetLabelFont(42);
   new_histo_group_top_hww2l2v_13TeV_DYin_0jdf_events111->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_top_hww2l2v_13TeV_DYin_0jdf_events111->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_top_hww2l2v_13TeV_DYin_0jdf_events111->GetYaxis()->SetTitleFont(42);
   new_histo_group_top_hww2l2v_13TeV_DYin_0jdf_events111->GetZaxis()->SetLabelFont(42);
   new_histo_group_top_hww2l2v_13TeV_DYin_0jdf_events111->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_top_hww2l2v_13TeV_DYin_0jdf_events111->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_top_hww2l2v_13TeV_DYin_0jdf_events111->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_hww2l2v_13TeV_DYin_0jdf_events->Add(new_histo_group_top_hww2l2v_13TeV_DYin_0jdf_events,"");
   
   TH1D *new_histo_group_WW_hww2l2v_13TeV_DYin_0jdf_events112 = new TH1D("new_histo_group_WW_hww2l2v_13TeV_DYin_0jdf_events112","histo_WW",1,0,2);
   new_histo_group_WW_hww2l2v_13TeV_DYin_0jdf_events112->SetBinContent(1,595.0128);
   new_histo_group_WW_hww2l2v_13TeV_DYin_0jdf_events112->SetBinError(1,10.62394);
   new_histo_group_WW_hww2l2v_13TeV_DYin_0jdf_events112->SetEntries(4283);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_hww2l2v_13TeV_DYin_0jdf_events112->SetFillColor(ci);
   new_histo_group_WW_hww2l2v_13TeV_DYin_0jdf_events112->SetFillStyle(3001);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_hww2l2v_13TeV_DYin_0jdf_events112->SetLineColor(ci);
   new_histo_group_WW_hww2l2v_13TeV_DYin_0jdf_events112->GetXaxis()->SetLabelFont(42);
   new_histo_group_WW_hww2l2v_13TeV_DYin_0jdf_events112->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WW_hww2l2v_13TeV_DYin_0jdf_events112->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WW_hww2l2v_13TeV_DYin_0jdf_events112->GetXaxis()->SetTitleFont(42);
   new_histo_group_WW_hww2l2v_13TeV_DYin_0jdf_events112->GetYaxis()->SetLabelFont(42);
   new_histo_group_WW_hww2l2v_13TeV_DYin_0jdf_events112->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WW_hww2l2v_13TeV_DYin_0jdf_events112->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WW_hww2l2v_13TeV_DYin_0jdf_events112->GetYaxis()->SetTitleFont(42);
   new_histo_group_WW_hww2l2v_13TeV_DYin_0jdf_events112->GetZaxis()->SetLabelFont(42);
   new_histo_group_WW_hww2l2v_13TeV_DYin_0jdf_events112->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WW_hww2l2v_13TeV_DYin_0jdf_events112->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WW_hww2l2v_13TeV_DYin_0jdf_events112->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_hww2l2v_13TeV_DYin_0jdf_events->Add(new_histo_group_WW_hww2l2v_13TeV_DYin_0jdf_events,"");
   
   TH1D *new_histo_group_VVV_hww2l2v_13TeV_DYin_0jdf_events113 = new TH1D("new_histo_group_VVV_hww2l2v_13TeV_DYin_0jdf_events113","histo_VVV",1,0,2);
   new_histo_group_VVV_hww2l2v_13TeV_DYin_0jdf_events113->SetBinContent(1,0.6336778);
   new_histo_group_VVV_hww2l2v_13TeV_DYin_0jdf_events113->SetBinError(1,0.146524);
   new_histo_group_VVV_hww2l2v_13TeV_DYin_0jdf_events113->SetEntries(26);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_hww2l2v_13TeV_DYin_0jdf_events113->SetFillColor(ci);
   new_histo_group_VVV_hww2l2v_13TeV_DYin_0jdf_events113->SetFillStyle(3001);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_hww2l2v_13TeV_DYin_0jdf_events113->SetLineColor(ci);
   new_histo_group_VVV_hww2l2v_13TeV_DYin_0jdf_events113->GetXaxis()->SetLabelFont(42);
   new_histo_group_VVV_hww2l2v_13TeV_DYin_0jdf_events113->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_hww2l2v_13TeV_DYin_0jdf_events113->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_hww2l2v_13TeV_DYin_0jdf_events113->GetXaxis()->SetTitleFont(42);
   new_histo_group_VVV_hww2l2v_13TeV_DYin_0jdf_events113->GetYaxis()->SetLabelFont(42);
   new_histo_group_VVV_hww2l2v_13TeV_DYin_0jdf_events113->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_hww2l2v_13TeV_DYin_0jdf_events113->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_hww2l2v_13TeV_DYin_0jdf_events113->GetYaxis()->SetTitleFont(42);
   new_histo_group_VVV_hww2l2v_13TeV_DYin_0jdf_events113->GetZaxis()->SetLabelFont(42);
   new_histo_group_VVV_hww2l2v_13TeV_DYin_0jdf_events113->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_hww2l2v_13TeV_DYin_0jdf_events113->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_hww2l2v_13TeV_DYin_0jdf_events113->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_hww2l2v_13TeV_DYin_0jdf_events->Add(new_histo_group_VVV_hww2l2v_13TeV_DYin_0jdf_events,"");
   
   TH1D *new_histo_group_VZ_hww2l2v_13TeV_DYin_0jdf_events114 = new TH1D("new_histo_group_VZ_hww2l2v_13TeV_DYin_0jdf_events114","histo_Vg",1,0,2);
   new_histo_group_VZ_hww2l2v_13TeV_DYin_0jdf_events114->SetBinContent(1,73.3451);
   new_histo_group_VZ_hww2l2v_13TeV_DYin_0jdf_events114->SetBinError(1,40.33071);
   new_histo_group_VZ_hww2l2v_13TeV_DYin_0jdf_events114->SetEntries(281);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_VZ_hww2l2v_13TeV_DYin_0jdf_events114->SetFillColor(ci);
   new_histo_group_VZ_hww2l2v_13TeV_DYin_0jdf_events114->SetFillStyle(3001);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_VZ_hww2l2v_13TeV_DYin_0jdf_events114->SetLineColor(ci);
   new_histo_group_VZ_hww2l2v_13TeV_DYin_0jdf_events114->GetXaxis()->SetLabelFont(42);
   new_histo_group_VZ_hww2l2v_13TeV_DYin_0jdf_events114->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_VZ_hww2l2v_13TeV_DYin_0jdf_events114->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_VZ_hww2l2v_13TeV_DYin_0jdf_events114->GetXaxis()->SetTitleFont(42);
   new_histo_group_VZ_hww2l2v_13TeV_DYin_0jdf_events114->GetYaxis()->SetLabelFont(42);
   new_histo_group_VZ_hww2l2v_13TeV_DYin_0jdf_events114->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_VZ_hww2l2v_13TeV_DYin_0jdf_events114->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_VZ_hww2l2v_13TeV_DYin_0jdf_events114->GetYaxis()->SetTitleFont(42);
   new_histo_group_VZ_hww2l2v_13TeV_DYin_0jdf_events114->GetZaxis()->SetLabelFont(42);
   new_histo_group_VZ_hww2l2v_13TeV_DYin_0jdf_events114->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_VZ_hww2l2v_13TeV_DYin_0jdf_events114->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_VZ_hww2l2v_13TeV_DYin_0jdf_events114->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_hww2l2v_13TeV_DYin_0jdf_events->Add(new_histo_group_VZ_hww2l2v_13TeV_DYin_0jdf_events,"");
   
   TH1D *new_histo_group_Higgs_hww2l2v_13TeV_DYin_0jdf_events115 = new TH1D("new_histo_group_Higgs_hww2l2v_13TeV_DYin_0jdf_events115","histo_H_htt",1,0,2);
   new_histo_group_Higgs_hww2l2v_13TeV_DYin_0jdf_events115->SetBinContent(1,0.6344882);
   new_histo_group_Higgs_hww2l2v_13TeV_DYin_0jdf_events115->SetBinError(1,0.129547);
   new_histo_group_Higgs_hww2l2v_13TeV_DYin_0jdf_events115->SetEntries(37);
   new_histo_group_Higgs_hww2l2v_13TeV_DYin_0jdf_events115->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_hww2l2v_13TeV_DYin_0jdf_events115->SetLineColor(ci);
   new_histo_group_Higgs_hww2l2v_13TeV_DYin_0jdf_events115->SetLineWidth(2);
   new_histo_group_Higgs_hww2l2v_13TeV_DYin_0jdf_events115->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_hww2l2v_13TeV_DYin_0jdf_events115->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_hww2l2v_13TeV_DYin_0jdf_events115->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_hww2l2v_13TeV_DYin_0jdf_events115->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_hww2l2v_13TeV_DYin_0jdf_events115->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_hww2l2v_13TeV_DYin_0jdf_events115->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_hww2l2v_13TeV_DYin_0jdf_events115->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_hww2l2v_13TeV_DYin_0jdf_events115->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_hww2l2v_13TeV_DYin_0jdf_events115->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_hww2l2v_13TeV_DYin_0jdf_events115->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_hww2l2v_13TeV_DYin_0jdf_events115->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_hww2l2v_13TeV_DYin_0jdf_events115->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_hww2l2v_13TeV_DYin_0jdf_events->Add(new_histo_group_Higgs_hww2l2v_13TeV_DYin_0jdf_events,"");
   thsBackground_grouped_hww2l2v_13TeV_DYin_0jdf_events->Draw("hist same");
   
   thsSignal_grouped_hww2l2v_13TeV_DYin_0jdf_events = new THStack();
   thsSignal_grouped_hww2l2v_13TeV_DYin_0jdf_events->SetName("thsSignal_grouped_hww2l2v_13TeV_DYin_0jdf_events");
   thsSignal_grouped_hww2l2v_13TeV_DYin_0jdf_events->SetTitle("thsSignal_grouped_hww2l2v_13TeV_DYin_0jdf_events");
   
   TH1F *thsSignal_grouped_hww2l2v_13TeV_DYin_0jdf_events_stack_26 = new TH1F("thsSignal_grouped_hww2l2v_13TeV_DYin_0jdf_events_stack_26","thsSignal_grouped_hww2l2v_13TeV_DYin_0jdf_events",1,0,2);
   thsSignal_grouped_hww2l2v_13TeV_DYin_0jdf_events_stack_26->SetMinimum(0);
   thsSignal_grouped_hww2l2v_13TeV_DYin_0jdf_events_stack_26->SetMaximum(0.8022369);
   thsSignal_grouped_hww2l2v_13TeV_DYin_0jdf_events_stack_26->SetDirectory(0);
   thsSignal_grouped_hww2l2v_13TeV_DYin_0jdf_events_stack_26->SetStats(0);
   thsSignal_grouped_hww2l2v_13TeV_DYin_0jdf_events_stack_26->SetLineStyle(0);
   thsSignal_grouped_hww2l2v_13TeV_DYin_0jdf_events_stack_26->SetMarkerStyle(20);
   thsSignal_grouped_hww2l2v_13TeV_DYin_0jdf_events_stack_26->GetXaxis()->SetLabelFont(42);
   thsSignal_grouped_hww2l2v_13TeV_DYin_0jdf_events_stack_26->GetXaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_hww2l2v_13TeV_DYin_0jdf_events_stack_26->GetXaxis()->SetLabelSize(0.05);
   thsSignal_grouped_hww2l2v_13TeV_DYin_0jdf_events_stack_26->GetXaxis()->SetTitleSize(0.06);
   thsSignal_grouped_hww2l2v_13TeV_DYin_0jdf_events_stack_26->GetXaxis()->SetTitleOffset(0.9);
   thsSignal_grouped_hww2l2v_13TeV_DYin_0jdf_events_stack_26->GetXaxis()->SetTitleFont(42);
   thsSignal_grouped_hww2l2v_13TeV_DYin_0jdf_events_stack_26->GetYaxis()->SetLabelFont(42);
   thsSignal_grouped_hww2l2v_13TeV_DYin_0jdf_events_stack_26->GetYaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_hww2l2v_13TeV_DYin_0jdf_events_stack_26->GetYaxis()->SetLabelSize(0.05);
   thsSignal_grouped_hww2l2v_13TeV_DYin_0jdf_events_stack_26->GetYaxis()->SetTitleSize(0.06);
   thsSignal_grouped_hww2l2v_13TeV_DYin_0jdf_events_stack_26->GetYaxis()->SetTitleOffset(1.25);
   thsSignal_grouped_hww2l2v_13TeV_DYin_0jdf_events_stack_26->GetYaxis()->SetTitleFont(42);
   thsSignal_grouped_hww2l2v_13TeV_DYin_0jdf_events_stack_26->GetZaxis()->SetLabelFont(42);
   thsSignal_grouped_hww2l2v_13TeV_DYin_0jdf_events_stack_26->GetZaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_hww2l2v_13TeV_DYin_0jdf_events_stack_26->GetZaxis()->SetLabelSize(0.05);
   thsSignal_grouped_hww2l2v_13TeV_DYin_0jdf_events_stack_26->GetZaxis()->SetTitleSize(0.06);
   thsSignal_grouped_hww2l2v_13TeV_DYin_0jdf_events_stack_26->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_hww2l2v_13TeV_DYin_0jdf_events->SetHistogram(thsSignal_grouped_hww2l2v_13TeV_DYin_0jdf_events_stack_26);
   
   
   TH1D *new_histo_group_Higgs_hww2l2v_13TeV_DYin_0jdf_events116 = new TH1D("new_histo_group_Higgs_hww2l2v_13TeV_DYin_0jdf_events116","histo_H_htt",1,0,2);
   new_histo_group_Higgs_hww2l2v_13TeV_DYin_0jdf_events116->SetBinContent(1,0.6344882);
   new_histo_group_Higgs_hww2l2v_13TeV_DYin_0jdf_events116->SetBinError(1,0.129547);
   new_histo_group_Higgs_hww2l2v_13TeV_DYin_0jdf_events116->SetEntries(37);
   new_histo_group_Higgs_hww2l2v_13TeV_DYin_0jdf_events116->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_hww2l2v_13TeV_DYin_0jdf_events116->SetLineColor(ci);
   new_histo_group_Higgs_hww2l2v_13TeV_DYin_0jdf_events116->SetLineWidth(2);
   new_histo_group_Higgs_hww2l2v_13TeV_DYin_0jdf_events116->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_hww2l2v_13TeV_DYin_0jdf_events116->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_hww2l2v_13TeV_DYin_0jdf_events116->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_hww2l2v_13TeV_DYin_0jdf_events116->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_hww2l2v_13TeV_DYin_0jdf_events116->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_hww2l2v_13TeV_DYin_0jdf_events116->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_hww2l2v_13TeV_DYin_0jdf_events116->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_hww2l2v_13TeV_DYin_0jdf_events116->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_hww2l2v_13TeV_DYin_0jdf_events116->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_hww2l2v_13TeV_DYin_0jdf_events116->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_hww2l2v_13TeV_DYin_0jdf_events116->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_hww2l2v_13TeV_DYin_0jdf_events116->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_hww2l2v_13TeV_DYin_0jdf_events->Add(new_histo_group_Higgs_hww2l2v_13TeV_DYin_0jdf_events,"");
   thsSignal_grouped_hww2l2v_13TeV_DYin_0jdf_events->Draw("hist same noclear");
   
   Double_t _fx3018[1] = {
   1};
   Double_t _fy3018[1] = {
   980};
   Double_t _felx3018[1] = {
   1};
   Double_t _fely3018[1] = {
   31.30029};
   Double_t _fehx3018[1] = {
   1};
   Double_t _fehy3018[1] = {
   32.3163};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(1,_fx3018,_fy3018,_felx3018,_fehx3018,_fely3018,_fehy3018);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(1);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3018 = new TH1F("Graph_Graph3018","",100,0,2.2);
   Graph_Graph3018->SetMinimum(942.3381);
   Graph_Graph3018->SetMaximum(1018.678);
   Graph_Graph3018->SetDirectory(0);
   Graph_Graph3018->SetStats(0);
   Graph_Graph3018->SetLineStyle(0);
   Graph_Graph3018->SetMarkerStyle(20);
   Graph_Graph3018->GetXaxis()->SetLabelFont(42);
   Graph_Graph3018->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3018->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3018->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3018->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3018->GetXaxis()->SetTitleFont(42);
   Graph_Graph3018->GetYaxis()->SetLabelFont(42);
   Graph_Graph3018->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3018->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3018->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3018->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3018->GetYaxis()->SetTitleFont(42);
   Graph_Graph3018->GetZaxis()->SetLabelFont(42);
   Graph_Graph3018->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3018->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3018->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3018->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3018);
   
   grae->Draw("p0");
   
   TLegend *leg = new TLegend(0.2,0.7,0.8,0.9,NULL,"brNDC");
   leg->SetTextFont(62);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("new_histo_group_DY_hww2l2v_13TeV_DYin_0jdf_events","DY","F");

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
   entry=leg->AddEntry("new_histo_group_top_hww2l2v_13TeV_DYin_0jdf_events","tW and t#bart","F");

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
   entry=leg->AddEntry("new_histo_group_WW_hww2l2v_13TeV_DYin_0jdf_events","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_hww2l2v_13TeV_DYin_0jdf_events","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_VZ_hww2l2v_13TeV_DYin_0jdf_events","VZ/#gamma*/#gamma","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_hww2l2v_13TeV_DYin_0jdf_events","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_hww2l2v_13TeV_DYin_0jdf_events","Data","EPL");
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
   entry=leg->AddEntry("new_histo_group_DY_hww2l2v_13TeV_DYin_0jdf_events","DY","F");

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
   entry=leg->AddEntry("new_histo_group_top_hww2l2v_13TeV_DYin_0jdf_events","tW and t#bart","F");

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
   entry=leg->AddEntry("new_histo_group_WW_hww2l2v_13TeV_DYin_0jdf_events","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_hww2l2v_13TeV_DYin_0jdf_events","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_VZ_hww2l2v_13TeV_DYin_0jdf_events","VZ/#gamma*/#gamma","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_hww2l2v_13TeV_DYin_0jdf_events","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_hww2l2v_13TeV_DYin_0jdf_events","Data","EPL");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   leg->Draw();
   
   TH1F *hframe_copy117 = new TH1F("hframe_copy117","",1000,0,2);
   hframe_copy117->SetMinimum(0);
   hframe_copy117->SetMaximum(2528.262);
   hframe_copy117->SetDirectory(0);
   hframe_copy117->SetStats(0);
   hframe_copy117->SetLineStyle(0);
   hframe_copy117->SetMarkerStyle(20);
   hframe_copy117->GetXaxis()->SetTitle("events");
   hframe_copy117->GetXaxis()->SetNdivisions(506);
   hframe_copy117->GetXaxis()->SetLabelFont(42);
   hframe_copy117->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy117->GetXaxis()->SetLabelSize(0.05);
   hframe_copy117->GetXaxis()->SetTitleSize(0.06);
   hframe_copy117->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy117->GetXaxis()->SetTitleFont(42);
   hframe_copy117->GetYaxis()->SetTitle("Events");
   hframe_copy117->GetYaxis()->SetLabelFont(42);
   hframe_copy117->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy117->GetYaxis()->SetLabelSize(0.05);
   hframe_copy117->GetYaxis()->SetTitleSize(0.06);
   hframe_copy117->GetYaxis()->SetTitleOffset(1.25);
   hframe_copy117->GetYaxis()->SetTitleFont(42);
   hframe_copy117->GetZaxis()->SetLabelFont(42);
   hframe_copy117->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy117->GetZaxis()->SetLabelSize(0.05);
   hframe_copy117->GetZaxis()->SetTitleSize(0.06);
   hframe_copy117->GetZaxis()->SetTitleFont(42);
   hframe_copy117->Draw("sameaxis");
   cchww2l2v_13TeV_DYin_0jdf_events->Modified();
   cchww2l2v_13TeV_DYin_0jdf_events->cd();
   cchww2l2v_13TeV_DYin_0jdf_events->SetSelected(cchww2l2v_13TeV_DYin_0jdf_events);
}
