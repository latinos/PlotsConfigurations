void c_wh3l_top_13TeV_events()
{
//=========Macro generated from canvas: ccwh3l_top_13TeV_events/cc
//=========  (Sun Jul  3 02:18:04 2016) by ROOT version6.02/13
   TCanvas *ccwh3l_top_13TeV_events = new TCanvas("ccwh3l_top_13TeV_events", "cc",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   ccwh3l_top_13TeV_events->SetHighLightColor(2);
   ccwh3l_top_13TeV_events->Range(-0.4,-19.73124,2.1,132.0475);
   ccwh3l_top_13TeV_events->SetFillColor(0);
   ccwh3l_top_13TeV_events->SetBorderMode(0);
   ccwh3l_top_13TeV_events->SetBorderSize(2);
   ccwh3l_top_13TeV_events->SetTickx(1);
   ccwh3l_top_13TeV_events->SetTicky(1);
   ccwh3l_top_13TeV_events->SetLeftMargin(0.16);
   ccwh3l_top_13TeV_events->SetRightMargin(0.04);
   ccwh3l_top_13TeV_events->SetTopMargin(0.05);
   ccwh3l_top_13TeV_events->SetBottomMargin(0.13);
   ccwh3l_top_13TeV_events->SetFrameFillStyle(0);
   ccwh3l_top_13TeV_events->SetFrameBorderMode(0);
   ccwh3l_top_13TeV_events->SetFrameFillStyle(0);
   ccwh3l_top_13TeV_events->SetFrameBorderMode(0);
   
   TH1F *hframe61 = new TH1F("hframe61","",1000,0,2);
   hframe61->SetMinimum(0);
   hframe61->SetMaximum(124.4586);
   hframe61->SetDirectory(0);
   hframe61->SetStats(0);
   hframe61->SetLineStyle(0);
   hframe61->SetMarkerStyle(20);
   hframe61->GetXaxis()->SetTitle("events");
   hframe61->GetXaxis()->SetNdivisions(506);
   hframe61->GetXaxis()->SetLabelFont(42);
   hframe61->GetXaxis()->SetLabelOffset(0.007);
   hframe61->GetXaxis()->SetLabelSize(0.05);
   hframe61->GetXaxis()->SetTitleSize(0.06);
   hframe61->GetXaxis()->SetTitleOffset(0.9);
   hframe61->GetXaxis()->SetTitleFont(42);
   hframe61->GetYaxis()->SetTitle("Events");
   hframe61->GetYaxis()->SetLabelFont(42);
   hframe61->GetYaxis()->SetLabelOffset(0.007);
   hframe61->GetYaxis()->SetLabelSize(0.05);
   hframe61->GetYaxis()->SetTitleSize(0.06);
   hframe61->GetYaxis()->SetTitleOffset(1.25);
   hframe61->GetYaxis()->SetTitleFont(42);
   hframe61->GetZaxis()->SetLabelFont(42);
   hframe61->GetZaxis()->SetLabelOffset(0.007);
   hframe61->GetZaxis()->SetLabelSize(0.05);
   hframe61->GetZaxis()->SetTitleSize(0.06);
   hframe61->GetZaxis()->SetTitleFont(42);
   hframe61->Draw(" ");
   
   THStack *thsBackground_grouped_wh3l_top_13TeV_events = new THStack();
   thsBackground_grouped_wh3l_top_13TeV_events->SetName("thsBackground_grouped_wh3l_top_13TeV_events");
   thsBackground_grouped_wh3l_top_13TeV_events->SetTitle("thsBackground_grouped_wh3l_top_13TeV_events");
   
   TH1F *thsBackground_grouped_wh3l_top_13TeV_events_stack_13 = new TH1F("thsBackground_grouped_wh3l_top_13TeV_events_stack_13","thsBackground_grouped_wh3l_top_13TeV_events",1,0,2);
   thsBackground_grouped_wh3l_top_13TeV_events_stack_13->SetMinimum(0);
   thsBackground_grouped_wh3l_top_13TeV_events_stack_13->SetMaximum(52.2726);
   thsBackground_grouped_wh3l_top_13TeV_events_stack_13->SetDirectory(0);
   thsBackground_grouped_wh3l_top_13TeV_events_stack_13->SetStats(0);
   thsBackground_grouped_wh3l_top_13TeV_events_stack_13->SetLineStyle(0);
   thsBackground_grouped_wh3l_top_13TeV_events_stack_13->SetMarkerStyle(20);
   thsBackground_grouped_wh3l_top_13TeV_events_stack_13->GetXaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_top_13TeV_events_stack_13->GetXaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_top_13TeV_events_stack_13->GetXaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_top_13TeV_events_stack_13->GetXaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_top_13TeV_events_stack_13->GetXaxis()->SetTitleOffset(0.9);
   thsBackground_grouped_wh3l_top_13TeV_events_stack_13->GetXaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_top_13TeV_events_stack_13->GetYaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_top_13TeV_events_stack_13->GetYaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_top_13TeV_events_stack_13->GetYaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_top_13TeV_events_stack_13->GetYaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_top_13TeV_events_stack_13->GetYaxis()->SetTitleOffset(1.25);
   thsBackground_grouped_wh3l_top_13TeV_events_stack_13->GetYaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_top_13TeV_events_stack_13->GetZaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_top_13TeV_events_stack_13->GetZaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_top_13TeV_events_stack_13->GetZaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_top_13TeV_events_stack_13->GetZaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_top_13TeV_events_stack_13->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_top_13TeV_events->SetHistogram(thsBackground_grouped_wh3l_top_13TeV_events_stack_13);
   
   
   TH1D *new_histo_group_Fake_wh3l_top_13TeV_events62 = new TH1D("new_histo_group_Fake_wh3l_top_13TeV_events62","histo_Fake",1,0,2);
   new_histo_group_Fake_wh3l_top_13TeV_events62->SetBinContent(1,37.69383);
   new_histo_group_Fake_wh3l_top_13TeV_events62->SetBinError(1,4.458194);
   new_histo_group_Fake_wh3l_top_13TeV_events62->SetEntries(317);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_top_13TeV_events62->SetFillColor(ci);
   new_histo_group_Fake_wh3l_top_13TeV_events62->SetFillStyle(3001);

   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_top_13TeV_events62->SetLineColor(ci);
   new_histo_group_Fake_wh3l_top_13TeV_events62->GetXaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_top_13TeV_events62->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_top_13TeV_events62->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_top_13TeV_events62->GetXaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_top_13TeV_events62->GetYaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_top_13TeV_events62->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_top_13TeV_events62->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_top_13TeV_events62->GetYaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_top_13TeV_events62->GetZaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_top_13TeV_events62->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_top_13TeV_events62->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_top_13TeV_events62->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_top_13TeV_events->Add(new_histo_group_Fake_wh3l_top_13TeV_events,"");
   
   TH1D *new_histo_group_WW_wh3l_top_13TeV_events63 = new TH1D("new_histo_group_WW_wh3l_top_13TeV_events63","histo_WW",1,0,2);
   new_histo_group_WW_wh3l_top_13TeV_events63->SetBinContent(1,0.1680617);
   new_histo_group_WW_wh3l_top_13TeV_events63->SetBinError(1,0.05224511);
   new_histo_group_WW_wh3l_top_13TeV_events63->SetEntries(11);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_top_13TeV_events63->SetFillColor(ci);
   new_histo_group_WW_wh3l_top_13TeV_events63->SetFillStyle(3001);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_top_13TeV_events63->SetLineColor(ci);
   new_histo_group_WW_wh3l_top_13TeV_events63->GetXaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_top_13TeV_events63->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_top_13TeV_events63->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_top_13TeV_events63->GetXaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_top_13TeV_events63->GetYaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_top_13TeV_events63->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_top_13TeV_events63->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_top_13TeV_events63->GetYaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_top_13TeV_events63->GetZaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_top_13TeV_events63->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_top_13TeV_events63->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_top_13TeV_events63->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_top_13TeV_events->Add(new_histo_group_WW_wh3l_top_13TeV_events,"");
   
   TH1D *new_histo_group_VVV_wh3l_top_13TeV_events64 = new TH1D("new_histo_group_VVV_wh3l_top_13TeV_events64","histo_VVV",1,0,2);
   new_histo_group_VVV_wh3l_top_13TeV_events64->SetBinContent(1,0.5746595);
   new_histo_group_VVV_wh3l_top_13TeV_events64->SetBinError(1,0.03809955);
   new_histo_group_VVV_wh3l_top_13TeV_events64->SetEntries(364);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_top_13TeV_events64->SetFillColor(ci);
   new_histo_group_VVV_wh3l_top_13TeV_events64->SetFillStyle(3001);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_top_13TeV_events64->SetLineColor(ci);
   new_histo_group_VVV_wh3l_top_13TeV_events64->GetXaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_top_13TeV_events64->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_top_13TeV_events64->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_top_13TeV_events64->GetXaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_top_13TeV_events64->GetYaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_top_13TeV_events64->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_top_13TeV_events64->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_top_13TeV_events64->GetYaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_top_13TeV_events64->GetZaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_top_13TeV_events64->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_top_13TeV_events64->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_top_13TeV_events64->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_top_13TeV_events->Add(new_histo_group_VVV_wh3l_top_13TeV_events,"");
   
   TH1D *new_histo_group_Vg_wh3l_top_13TeV_events65 = new TH1D("new_histo_group_Vg_wh3l_top_13TeV_events65","histo_Vg",1,0,2);
   new_histo_group_Vg_wh3l_top_13TeV_events65->SetBinContent(1,1.392616);
   new_histo_group_Vg_wh3l_top_13TeV_events65->SetBinError(1,0.453121);
   new_histo_group_Vg_wh3l_top_13TeV_events65->SetEntries(25);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_top_13TeV_events65->SetFillColor(ci);
   new_histo_group_Vg_wh3l_top_13TeV_events65->SetFillStyle(3001);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_top_13TeV_events65->SetLineColor(ci);
   new_histo_group_Vg_wh3l_top_13TeV_events65->GetXaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_top_13TeV_events65->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_top_13TeV_events65->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_top_13TeV_events65->GetXaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_top_13TeV_events65->GetYaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_top_13TeV_events65->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_top_13TeV_events65->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_top_13TeV_events65->GetYaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_top_13TeV_events65->GetZaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_top_13TeV_events65->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_top_13TeV_events65->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_top_13TeV_events65->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_top_13TeV_events->Add(new_histo_group_Vg_wh3l_top_13TeV_events,"");
   
   TH1D *new_histo_group_ZZ_wh3l_top_13TeV_events66 = new TH1D("new_histo_group_ZZ_wh3l_top_13TeV_events66","histo_ZZ",1,0,2);
   new_histo_group_ZZ_wh3l_top_13TeV_events66->SetBinContent(1,0.6804287);
   new_histo_group_ZZ_wh3l_top_13TeV_events66->SetBinError(1,0.1689835);
   new_histo_group_ZZ_wh3l_top_13TeV_events66->SetEntries(18);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_top_13TeV_events66->SetFillColor(ci);
   new_histo_group_ZZ_wh3l_top_13TeV_events66->SetFillStyle(3001);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_top_13TeV_events66->SetLineColor(ci);
   new_histo_group_ZZ_wh3l_top_13TeV_events66->GetXaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_top_13TeV_events66->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_top_13TeV_events66->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_top_13TeV_events66->GetXaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_top_13TeV_events66->GetYaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_top_13TeV_events66->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_top_13TeV_events66->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_top_13TeV_events66->GetYaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_top_13TeV_events66->GetZaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_top_13TeV_events66->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_top_13TeV_events66->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_top_13TeV_events66->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_top_13TeV_events->Add(new_histo_group_ZZ_wh3l_top_13TeV_events,"");
   
   TH1D *new_histo_group_WZ_wh3l_top_13TeV_events67 = new TH1D("new_histo_group_WZ_wh3l_top_13TeV_events67","histo_WZ",1,0,2);
   new_histo_group_WZ_wh3l_top_13TeV_events67->SetBinContent(1,8.867864);
   new_histo_group_WZ_wh3l_top_13TeV_events67->SetBinError(1,0.2195623);
   new_histo_group_WZ_wh3l_top_13TeV_events67->SetEntries(1805);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_top_13TeV_events67->SetFillColor(ci);
   new_histo_group_WZ_wh3l_top_13TeV_events67->SetFillStyle(3001);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_top_13TeV_events67->SetLineColor(ci);
   new_histo_group_WZ_wh3l_top_13TeV_events67->GetXaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_top_13TeV_events67->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_top_13TeV_events67->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_top_13TeV_events67->GetXaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_top_13TeV_events67->GetYaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_top_13TeV_events67->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_top_13TeV_events67->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_top_13TeV_events67->GetYaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_top_13TeV_events67->GetZaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_top_13TeV_events67->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_top_13TeV_events67->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_top_13TeV_events67->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_top_13TeV_events->Add(new_histo_group_WZ_wh3l_top_13TeV_events,"");
   
   TH1D *new_histo_group_Higgs_wh3l_top_13TeV_events68 = new TH1D("new_histo_group_Higgs_wh3l_top_13TeV_events68","histo_H_htt",1,0,2);
   new_histo_group_Higgs_wh3l_top_13TeV_events68->SetBinContent(1,0.4059651);
   new_histo_group_Higgs_wh3l_top_13TeV_events68->SetBinError(1,0.02017565);
   new_histo_group_Higgs_wh3l_top_13TeV_events68->SetEntries(723);
   new_histo_group_Higgs_wh3l_top_13TeV_events68->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_top_13TeV_events68->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_top_13TeV_events68->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_top_13TeV_events68->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_top_13TeV_events68->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_top_13TeV_events68->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_top_13TeV_events68->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_top_13TeV_events68->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_top_13TeV_events68->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_top_13TeV_events68->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_top_13TeV_events68->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_top_13TeV_events68->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_top_13TeV_events68->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_top_13TeV_events68->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_top_13TeV_events68->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_top_13TeV_events->Add(new_histo_group_Higgs_wh3l_top_13TeV_events,"");
   thsBackground_grouped_wh3l_top_13TeV_events->Draw("hist same");
   
   thsSignal_grouped_wh3l_top_13TeV_events = new THStack();
   thsSignal_grouped_wh3l_top_13TeV_events->SetName("thsSignal_grouped_wh3l_top_13TeV_events");
   thsSignal_grouped_wh3l_top_13TeV_events->SetTitle("thsSignal_grouped_wh3l_top_13TeV_events");
   
   TH1F *thsSignal_grouped_wh3l_top_13TeV_events_stack_14 = new TH1F("thsSignal_grouped_wh3l_top_13TeV_events_stack_14","thsSignal_grouped_wh3l_top_13TeV_events",1,0,2);
   thsSignal_grouped_wh3l_top_13TeV_events_stack_14->SetMinimum(0);
   thsSignal_grouped_wh3l_top_13TeV_events_stack_14->SetMaximum(0.4474478);
   thsSignal_grouped_wh3l_top_13TeV_events_stack_14->SetDirectory(0);
   thsSignal_grouped_wh3l_top_13TeV_events_stack_14->SetStats(0);
   thsSignal_grouped_wh3l_top_13TeV_events_stack_14->SetLineStyle(0);
   thsSignal_grouped_wh3l_top_13TeV_events_stack_14->SetMarkerStyle(20);
   thsSignal_grouped_wh3l_top_13TeV_events_stack_14->GetXaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_top_13TeV_events_stack_14->GetXaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_top_13TeV_events_stack_14->GetXaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_top_13TeV_events_stack_14->GetXaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_top_13TeV_events_stack_14->GetXaxis()->SetTitleOffset(0.9);
   thsSignal_grouped_wh3l_top_13TeV_events_stack_14->GetXaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_top_13TeV_events_stack_14->GetYaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_top_13TeV_events_stack_14->GetYaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_top_13TeV_events_stack_14->GetYaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_top_13TeV_events_stack_14->GetYaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_top_13TeV_events_stack_14->GetYaxis()->SetTitleOffset(1.25);
   thsSignal_grouped_wh3l_top_13TeV_events_stack_14->GetYaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_top_13TeV_events_stack_14->GetZaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_top_13TeV_events_stack_14->GetZaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_top_13TeV_events_stack_14->GetZaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_top_13TeV_events_stack_14->GetZaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_top_13TeV_events_stack_14->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_top_13TeV_events->SetHistogram(thsSignal_grouped_wh3l_top_13TeV_events_stack_14);
   
   
   TH1D *new_histo_group_Higgs_wh3l_top_13TeV_events69 = new TH1D("new_histo_group_Higgs_wh3l_top_13TeV_events69","histo_H_htt",1,0,2);
   new_histo_group_Higgs_wh3l_top_13TeV_events69->SetBinContent(1,0.4059651);
   new_histo_group_Higgs_wh3l_top_13TeV_events69->SetBinError(1,0.02017565);
   new_histo_group_Higgs_wh3l_top_13TeV_events69->SetEntries(723);
   new_histo_group_Higgs_wh3l_top_13TeV_events69->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_top_13TeV_events69->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_top_13TeV_events69->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_top_13TeV_events69->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_top_13TeV_events69->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_top_13TeV_events69->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_top_13TeV_events69->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_top_13TeV_events69->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_top_13TeV_events69->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_top_13TeV_events69->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_top_13TeV_events69->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_top_13TeV_events69->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_top_13TeV_events69->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_top_13TeV_events69->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_top_13TeV_events69->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_top_13TeV_events->Add(new_histo_group_Higgs_wh3l_top_13TeV_events,"");
   thsSignal_grouped_wh3l_top_13TeV_events->Draw("hist same noclear");
   
   Double_t _fx3013[1] = {
   1};
   Double_t _fy3013[1] = {
   49.37746};
   Double_t _felx3013[1] = {
   1};
   Double_t _fely3013[1] = {
   14.26887};
   Double_t _fehx3013[1] = {
   1};
   Double_t _fehy3013[1] = {
   14.26842};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(1,_fx3013,_fy3013,_felx3013,_fehx3013,_fely3013,_fehy3013);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(12);
   grae->SetFillStyle(3004);
   grae->SetLineColor(12);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3013 = new TH1F("Graph_Graph3013","",100,0,2.2);
   Graph_Graph3013->SetMinimum(32.25486);
   Graph_Graph3013->SetMaximum(66.49961);
   Graph_Graph3013->SetDirectory(0);
   Graph_Graph3013->SetStats(0);
   Graph_Graph3013->SetLineStyle(0);
   Graph_Graph3013->SetMarkerStyle(20);
   Graph_Graph3013->GetXaxis()->SetLabelFont(42);
   Graph_Graph3013->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3013->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3013->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3013->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3013->GetXaxis()->SetTitleFont(42);
   Graph_Graph3013->GetYaxis()->SetLabelFont(42);
   Graph_Graph3013->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3013->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3013->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3013->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3013->GetYaxis()->SetTitleFont(42);
   Graph_Graph3013->GetZaxis()->SetLabelFont(42);
   Graph_Graph3013->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3013->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3013->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3013->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3013);
   
   grae->Draw("2");
   
   Double_t _fx3014[1] = {
   1};
   Double_t _fy3014[1] = {
   41};
   Double_t _felx3014[1] = {
   1};
   Double_t _fely3014[1] = {
   6.377022};
   Double_t _fehx3014[1] = {
   1};
   Double_t _fehy3014[1] = {
   7.45534};
   grae = new TGraphAsymmErrors(1,_fx3014,_fy3014,_felx3014,_fehx3014,_fely3014,_fehy3014);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(1);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3014 = new TH1F("Graph_Graph3014","",100,0,2.2);
   Graph_Graph3014->SetMinimum(33.23974);
   Graph_Graph3014->SetMaximum(49.83858);
   Graph_Graph3014->SetDirectory(0);
   Graph_Graph3014->SetStats(0);
   Graph_Graph3014->SetLineStyle(0);
   Graph_Graph3014->SetMarkerStyle(20);
   Graph_Graph3014->GetXaxis()->SetLabelFont(42);
   Graph_Graph3014->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3014->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3014->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3014->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3014->GetXaxis()->SetTitleFont(42);
   Graph_Graph3014->GetYaxis()->SetLabelFont(42);
   Graph_Graph3014->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3014->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3014->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3014->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3014->GetYaxis()->SetTitleFont(42);
   Graph_Graph3014->GetZaxis()->SetLabelFont(42);
   Graph_Graph3014->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3014->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3014->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3014->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3014);
   
   grae->Draw("p0");
   
   TLegend *leg = new TLegend(0.2,0.7,0.8,0.9,NULL,"brNDC");
   leg->SetTextFont(62);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("new_histo_group_Fake_wh3l_top_13TeV_events","Fake","F");

   ci = TColor::GetColor("#999999");
   entry->SetFillColor(ci);
   entry->SetFillStyle(3001);

   ci = TColor::GetColor("#999999");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_group_WW_wh3l_top_13TeV_events","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_top_13TeV_events","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_top_13TeV_events","Zg","F");

   ci = TColor::GetColor("#0033cc");
   entry->SetFillColor(ci);
   entry->SetFillStyle(3001);

   ci = TColor::GetColor("#0033cc");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_top_13TeV_events","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_top_13TeV_events","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_top_13TeV_events","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_top_13TeV_events","Data","EPL");
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
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   leg->Draw();
   TLatex *   tex = new TLatex(0.96,0.96,"L = 2.3/fb (13 TeV)");
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
   entry=leg->AddEntry("new_histo_group_Fake_wh3l_top_13TeV_events","Fake","F");

   ci = TColor::GetColor("#999999");
   entry->SetFillColor(ci);
   entry->SetFillStyle(3001);

   ci = TColor::GetColor("#999999");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_group_WW_wh3l_top_13TeV_events","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_top_13TeV_events","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_top_13TeV_events","Zg","F");

   ci = TColor::GetColor("#0033cc");
   entry->SetFillColor(ci);
   entry->SetFillStyle(3001);

   ci = TColor::GetColor("#0033cc");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_top_13TeV_events","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_top_13TeV_events","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_top_13TeV_events","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_top_13TeV_events","Data","EPL");
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
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   leg->Draw();
   
   TH1F *hframe_copy70 = new TH1F("hframe_copy70","",1000,0,2);
   hframe_copy70->SetMinimum(0);
   hframe_copy70->SetMaximum(124.4586);
   hframe_copy70->SetDirectory(0);
   hframe_copy70->SetStats(0);
   hframe_copy70->SetLineStyle(0);
   hframe_copy70->SetMarkerStyle(20);
   hframe_copy70->GetXaxis()->SetTitle("events");
   hframe_copy70->GetXaxis()->SetNdivisions(506);
   hframe_copy70->GetXaxis()->SetLabelFont(42);
   hframe_copy70->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy70->GetXaxis()->SetLabelSize(0.05);
   hframe_copy70->GetXaxis()->SetTitleSize(0.06);
   hframe_copy70->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy70->GetXaxis()->SetTitleFont(42);
   hframe_copy70->GetYaxis()->SetTitle("Events");
   hframe_copy70->GetYaxis()->SetLabelFont(42);
   hframe_copy70->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy70->GetYaxis()->SetLabelSize(0.05);
   hframe_copy70->GetYaxis()->SetTitleSize(0.06);
   hframe_copy70->GetYaxis()->SetTitleOffset(1.25);
   hframe_copy70->GetYaxis()->SetTitleFont(42);
   hframe_copy70->GetZaxis()->SetLabelFont(42);
   hframe_copy70->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy70->GetZaxis()->SetLabelSize(0.05);
   hframe_copy70->GetZaxis()->SetTitleSize(0.06);
   hframe_copy70->GetZaxis()->SetTitleFont(42);
   hframe_copy70->Draw("sameaxis");
   ccwh3l_top_13TeV_events->Modified();
   ccwh3l_top_13TeV_events->cd();
   ccwh3l_top_13TeV_events->SetSelected(ccwh3l_top_13TeV_events);
}
