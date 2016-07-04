void c_wh3l_Pre_13TeV_events()
{
//=========Macro generated from canvas: ccwh3l_Pre_13TeV_events/cc
//=========  (Sat Jul  2 21:43:49 2016) by ROOT version6.02/13
   TCanvas *ccwh3l_Pre_13TeV_events = new TCanvas("ccwh3l_Pre_13TeV_events", "cc",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   ccwh3l_Pre_13TeV_events->SetHighLightColor(2);
   ccwh3l_Pre_13TeV_events->Range(-0.4,-430.6113,2.1,2881.783);
   ccwh3l_Pre_13TeV_events->SetFillColor(0);
   ccwh3l_Pre_13TeV_events->SetBorderMode(0);
   ccwh3l_Pre_13TeV_events->SetBorderSize(2);
   ccwh3l_Pre_13TeV_events->SetTickx(1);
   ccwh3l_Pre_13TeV_events->SetTicky(1);
   ccwh3l_Pre_13TeV_events->SetLeftMargin(0.16);
   ccwh3l_Pre_13TeV_events->SetRightMargin(0.04);
   ccwh3l_Pre_13TeV_events->SetTopMargin(0.05);
   ccwh3l_Pre_13TeV_events->SetBottomMargin(0.13);
   ccwh3l_Pre_13TeV_events->SetFrameFillStyle(0);
   ccwh3l_Pre_13TeV_events->SetFrameBorderMode(0);
   ccwh3l_Pre_13TeV_events->SetFrameFillStyle(0);
   ccwh3l_Pre_13TeV_events->SetFrameBorderMode(0);
   
   TH1F *hframe371 = new TH1F("hframe371","",1000,0,2);
   hframe371->SetMinimum(0);
   hframe371->SetMaximum(2716.163);
   hframe371->SetDirectory(0);
   hframe371->SetStats(0);
   hframe371->SetLineStyle(0);
   hframe371->SetMarkerStyle(20);
   hframe371->GetXaxis()->SetTitle("events");
   hframe371->GetXaxis()->SetNdivisions(506);
   hframe371->GetXaxis()->SetLabelFont(42);
   hframe371->GetXaxis()->SetLabelOffset(0.007);
   hframe371->GetXaxis()->SetLabelSize(0.05);
   hframe371->GetXaxis()->SetTitleSize(0.06);
   hframe371->GetXaxis()->SetTitleOffset(0.9);
   hframe371->GetXaxis()->SetTitleFont(42);
   hframe371->GetYaxis()->SetTitle("Events");
   hframe371->GetYaxis()->SetLabelFont(42);
   hframe371->GetYaxis()->SetLabelOffset(0.007);
   hframe371->GetYaxis()->SetLabelSize(0.05);
   hframe371->GetYaxis()->SetTitleSize(0.06);
   hframe371->GetYaxis()->SetTitleOffset(1.25);
   hframe371->GetYaxis()->SetTitleFont(42);
   hframe371->GetZaxis()->SetLabelFont(42);
   hframe371->GetZaxis()->SetLabelOffset(0.007);
   hframe371->GetZaxis()->SetLabelSize(0.05);
   hframe371->GetZaxis()->SetTitleSize(0.06);
   hframe371->GetZaxis()->SetTitleFont(42);
   hframe371->Draw(" ");
   
   THStack *thsBackground_grouped_wh3l_Pre_13TeV_events = new THStack();
   thsBackground_grouped_wh3l_Pre_13TeV_events->SetName("thsBackground_grouped_wh3l_Pre_13TeV_events");
   thsBackground_grouped_wh3l_Pre_13TeV_events->SetTitle("thsBackground_grouped_wh3l_Pre_13TeV_events");
   
   TH1F *thsBackground_grouped_wh3l_Pre_13TeV_events_stack_75 = new TH1F("thsBackground_grouped_wh3l_Pre_13TeV_events_stack_75","thsBackground_grouped_wh3l_Pre_13TeV_events",1,0,2);
   thsBackground_grouped_wh3l_Pre_13TeV_events_stack_75->SetMinimum(0);
   thsBackground_grouped_wh3l_Pre_13TeV_events_stack_75->SetMaximum(995.6246);
   thsBackground_grouped_wh3l_Pre_13TeV_events_stack_75->SetDirectory(0);
   thsBackground_grouped_wh3l_Pre_13TeV_events_stack_75->SetStats(0);
   thsBackground_grouped_wh3l_Pre_13TeV_events_stack_75->SetLineStyle(0);
   thsBackground_grouped_wh3l_Pre_13TeV_events_stack_75->SetMarkerStyle(20);
   thsBackground_grouped_wh3l_Pre_13TeV_events_stack_75->GetXaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_Pre_13TeV_events_stack_75->GetXaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_Pre_13TeV_events_stack_75->GetXaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_Pre_13TeV_events_stack_75->GetXaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_Pre_13TeV_events_stack_75->GetXaxis()->SetTitleOffset(0.9);
   thsBackground_grouped_wh3l_Pre_13TeV_events_stack_75->GetXaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_Pre_13TeV_events_stack_75->GetYaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_Pre_13TeV_events_stack_75->GetYaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_Pre_13TeV_events_stack_75->GetYaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_Pre_13TeV_events_stack_75->GetYaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_Pre_13TeV_events_stack_75->GetYaxis()->SetTitleOffset(1.25);
   thsBackground_grouped_wh3l_Pre_13TeV_events_stack_75->GetYaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_Pre_13TeV_events_stack_75->GetZaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_Pre_13TeV_events_stack_75->GetZaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_Pre_13TeV_events_stack_75->GetZaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_Pre_13TeV_events_stack_75->GetZaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_Pre_13TeV_events_stack_75->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_Pre_13TeV_events->SetHistogram(thsBackground_grouped_wh3l_Pre_13TeV_events_stack_75);
   
   
   TH1D *new_histo_group_Fake_wh3l_Pre_13TeV_events372 = new TH1D("new_histo_group_Fake_wh3l_Pre_13TeV_events372","histo_Fake",1,0,2);
   new_histo_group_Fake_wh3l_Pre_13TeV_events372->SetBinContent(1,288.8572);
   new_histo_group_Fake_wh3l_Pre_13TeV_events372->SetBinError(1,13.45654);
   new_histo_group_Fake_wh3l_Pre_13TeV_events372->SetEntries(3851);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_Pre_13TeV_events372->SetFillColor(ci);
   new_histo_group_Fake_wh3l_Pre_13TeV_events372->SetFillStyle(3001);

   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_Pre_13TeV_events372->SetLineColor(ci);
   new_histo_group_Fake_wh3l_Pre_13TeV_events372->GetXaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_Pre_13TeV_events372->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_Pre_13TeV_events372->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_Pre_13TeV_events372->GetXaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_Pre_13TeV_events372->GetYaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_Pre_13TeV_events372->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_Pre_13TeV_events372->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_Pre_13TeV_events372->GetYaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_Pre_13TeV_events372->GetZaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_Pre_13TeV_events372->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_Pre_13TeV_events372->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_Pre_13TeV_events372->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_Pre_13TeV_events->Add(new_histo_group_Fake_wh3l_Pre_13TeV_events,"");
   
   TH1D *new_histo_group_WW_wh3l_Pre_13TeV_events373 = new TH1D("new_histo_group_WW_wh3l_Pre_13TeV_events373","histo_WW",1,0,2);
   new_histo_group_WW_wh3l_Pre_13TeV_events373->SetBinContent(1,0.4344971);
   new_histo_group_WW_wh3l_Pre_13TeV_events373->SetBinError(1,0.08206113);
   new_histo_group_WW_wh3l_Pre_13TeV_events373->SetEntries(30);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_Pre_13TeV_events373->SetFillColor(ci);
   new_histo_group_WW_wh3l_Pre_13TeV_events373->SetFillStyle(3001);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_Pre_13TeV_events373->SetLineColor(ci);
   new_histo_group_WW_wh3l_Pre_13TeV_events373->GetXaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_Pre_13TeV_events373->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_Pre_13TeV_events373->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_Pre_13TeV_events373->GetXaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_Pre_13TeV_events373->GetYaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_Pre_13TeV_events373->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_Pre_13TeV_events373->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_Pre_13TeV_events373->GetYaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_Pre_13TeV_events373->GetZaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_Pre_13TeV_events373->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_Pre_13TeV_events373->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_Pre_13TeV_events373->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_Pre_13TeV_events->Add(new_histo_group_WW_wh3l_Pre_13TeV_events,"");
   
   TH1D *new_histo_group_VVV_wh3l_Pre_13TeV_events374 = new TH1D("new_histo_group_VVV_wh3l_Pre_13TeV_events374","histo_VVV",1,0,2);
   new_histo_group_VVV_wh3l_Pre_13TeV_events374->SetBinContent(1,5.209865);
   new_histo_group_VVV_wh3l_Pre_13TeV_events374->SetBinError(1,0.09912109);
   new_histo_group_VVV_wh3l_Pre_13TeV_events374->SetEntries(4991);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_Pre_13TeV_events374->SetFillColor(ci);
   new_histo_group_VVV_wh3l_Pre_13TeV_events374->SetFillStyle(3001);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_Pre_13TeV_events374->SetLineColor(ci);
   new_histo_group_VVV_wh3l_Pre_13TeV_events374->GetXaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_Pre_13TeV_events374->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_Pre_13TeV_events374->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_Pre_13TeV_events374->GetXaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_Pre_13TeV_events374->GetYaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_Pre_13TeV_events374->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_Pre_13TeV_events374->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_Pre_13TeV_events374->GetYaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_Pre_13TeV_events374->GetZaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_Pre_13TeV_events374->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_Pre_13TeV_events374->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_Pre_13TeV_events374->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_Pre_13TeV_events->Add(new_histo_group_VVV_wh3l_Pre_13TeV_events,"");
   
   TH1D *new_histo_group_Vg_wh3l_Pre_13TeV_events375 = new TH1D("new_histo_group_Vg_wh3l_Pre_13TeV_events375","histo_Vg",1,0,2);
   new_histo_group_Vg_wh3l_Pre_13TeV_events375->SetBinContent(1,226.538);
   new_histo_group_Vg_wh3l_Pre_13TeV_events375->SetBinError(1,5.978531);
   new_histo_group_Vg_wh3l_Pre_13TeV_events375->SetEntries(3337);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_Pre_13TeV_events375->SetFillColor(ci);
   new_histo_group_Vg_wh3l_Pre_13TeV_events375->SetFillStyle(3001);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_Pre_13TeV_events375->SetLineColor(ci);
   new_histo_group_Vg_wh3l_Pre_13TeV_events375->GetXaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_Pre_13TeV_events375->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_Pre_13TeV_events375->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_Pre_13TeV_events375->GetXaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_Pre_13TeV_events375->GetYaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_Pre_13TeV_events375->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_Pre_13TeV_events375->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_Pre_13TeV_events375->GetYaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_Pre_13TeV_events375->GetZaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_Pre_13TeV_events375->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_Pre_13TeV_events375->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_Pre_13TeV_events375->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_Pre_13TeV_events->Add(new_histo_group_Vg_wh3l_Pre_13TeV_events,"");
   
   TH1D *new_histo_group_ZZ_wh3l_Pre_13TeV_events376 = new TH1D("new_histo_group_ZZ_wh3l_Pre_13TeV_events376","histo_ZZ",1,0,2);
   new_histo_group_ZZ_wh3l_Pre_13TeV_events376->SetBinContent(1,53.51771);
   new_histo_group_ZZ_wh3l_Pre_13TeV_events376->SetBinError(1,1.483803);
   new_histo_group_ZZ_wh3l_Pre_13TeV_events376->SetEntries(1447);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_Pre_13TeV_events376->SetFillColor(ci);
   new_histo_group_ZZ_wh3l_Pre_13TeV_events376->SetFillStyle(3001);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_Pre_13TeV_events376->SetLineColor(ci);
   new_histo_group_ZZ_wh3l_Pre_13TeV_events376->GetXaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_Pre_13TeV_events376->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_Pre_13TeV_events376->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_Pre_13TeV_events376->GetXaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_Pre_13TeV_events376->GetYaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_Pre_13TeV_events376->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_Pre_13TeV_events376->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_Pre_13TeV_events376->GetYaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_Pre_13TeV_events376->GetZaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_Pre_13TeV_events376->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_Pre_13TeV_events376->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_Pre_13TeV_events376->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_Pre_13TeV_events->Add(new_histo_group_ZZ_wh3l_Pre_13TeV_events,"");
   
   TH1D *new_histo_group_WZ_wh3l_Pre_13TeV_events377 = new TH1D("new_histo_group_WZ_wh3l_Pre_13TeV_events377","histo_WZ",1,0,2);
   new_histo_group_WZ_wh3l_Pre_13TeV_events377->SetBinContent(1,368.6494);
   new_histo_group_WZ_wh3l_Pre_13TeV_events377->SetBinError(1,1.417335);
   new_histo_group_WZ_wh3l_Pre_13TeV_events377->SetEntries(74706);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_Pre_13TeV_events377->SetFillColor(ci);
   new_histo_group_WZ_wh3l_Pre_13TeV_events377->SetFillStyle(3001);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_Pre_13TeV_events377->SetLineColor(ci);
   new_histo_group_WZ_wh3l_Pre_13TeV_events377->GetXaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_Pre_13TeV_events377->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_Pre_13TeV_events377->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_Pre_13TeV_events377->GetXaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_Pre_13TeV_events377->GetYaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_Pre_13TeV_events377->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_Pre_13TeV_events377->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_Pre_13TeV_events377->GetYaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_Pre_13TeV_events377->GetZaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_Pre_13TeV_events377->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_Pre_13TeV_events377->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_Pre_13TeV_events377->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_Pre_13TeV_events->Add(new_histo_group_WZ_wh3l_Pre_13TeV_events,"");
   
   TH1D *new_histo_group_Higgs_wh3l_Pre_13TeV_events378 = new TH1D("new_histo_group_Higgs_wh3l_Pre_13TeV_events378","histo_H_htt",1,0,2);
   new_histo_group_Higgs_wh3l_Pre_13TeV_events378->SetBinContent(1,5.007154);
   new_histo_group_Higgs_wh3l_Pre_13TeV_events378->SetBinError(1,0.07306387);
   new_histo_group_Higgs_wh3l_Pre_13TeV_events378->SetEntries(8009);
   new_histo_group_Higgs_wh3l_Pre_13TeV_events378->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_Pre_13TeV_events378->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_Pre_13TeV_events378->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_Pre_13TeV_events378->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_Pre_13TeV_events378->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_Pre_13TeV_events378->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_Pre_13TeV_events378->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_Pre_13TeV_events378->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_Pre_13TeV_events378->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_Pre_13TeV_events378->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_Pre_13TeV_events378->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_Pre_13TeV_events378->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_Pre_13TeV_events378->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_Pre_13TeV_events378->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_Pre_13TeV_events378->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_Pre_13TeV_events->Add(new_histo_group_Higgs_wh3l_Pre_13TeV_events,"");
   thsBackground_grouped_wh3l_Pre_13TeV_events->Draw("hist same");
   
   thsSignal_grouped_wh3l_Pre_13TeV_events = new THStack();
   thsSignal_grouped_wh3l_Pre_13TeV_events->SetName("thsSignal_grouped_wh3l_Pre_13TeV_events");
   thsSignal_grouped_wh3l_Pre_13TeV_events->SetTitle("thsSignal_grouped_wh3l_Pre_13TeV_events");
   
   TH1F *thsSignal_grouped_wh3l_Pre_13TeV_events_stack_76 = new TH1F("thsSignal_grouped_wh3l_Pre_13TeV_events_stack_76","thsSignal_grouped_wh3l_Pre_13TeV_events",1,0,2);
   thsSignal_grouped_wh3l_Pre_13TeV_events_stack_76->SetMinimum(0);
   thsSignal_grouped_wh3l_Pre_13TeV_events_stack_76->SetMaximum(5.334229);
   thsSignal_grouped_wh3l_Pre_13TeV_events_stack_76->SetDirectory(0);
   thsSignal_grouped_wh3l_Pre_13TeV_events_stack_76->SetStats(0);
   thsSignal_grouped_wh3l_Pre_13TeV_events_stack_76->SetLineStyle(0);
   thsSignal_grouped_wh3l_Pre_13TeV_events_stack_76->SetMarkerStyle(20);
   thsSignal_grouped_wh3l_Pre_13TeV_events_stack_76->GetXaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_Pre_13TeV_events_stack_76->GetXaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_Pre_13TeV_events_stack_76->GetXaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_Pre_13TeV_events_stack_76->GetXaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_Pre_13TeV_events_stack_76->GetXaxis()->SetTitleOffset(0.9);
   thsSignal_grouped_wh3l_Pre_13TeV_events_stack_76->GetXaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_Pre_13TeV_events_stack_76->GetYaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_Pre_13TeV_events_stack_76->GetYaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_Pre_13TeV_events_stack_76->GetYaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_Pre_13TeV_events_stack_76->GetYaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_Pre_13TeV_events_stack_76->GetYaxis()->SetTitleOffset(1.25);
   thsSignal_grouped_wh3l_Pre_13TeV_events_stack_76->GetYaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_Pre_13TeV_events_stack_76->GetZaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_Pre_13TeV_events_stack_76->GetZaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_Pre_13TeV_events_stack_76->GetZaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_Pre_13TeV_events_stack_76->GetZaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_Pre_13TeV_events_stack_76->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_Pre_13TeV_events->SetHistogram(thsSignal_grouped_wh3l_Pre_13TeV_events_stack_76);
   
   
   TH1D *new_histo_group_Higgs_wh3l_Pre_13TeV_events379 = new TH1D("new_histo_group_Higgs_wh3l_Pre_13TeV_events379","histo_H_htt",1,0,2);
   new_histo_group_Higgs_wh3l_Pre_13TeV_events379->SetBinContent(1,5.007154);
   new_histo_group_Higgs_wh3l_Pre_13TeV_events379->SetBinError(1,0.07306387);
   new_histo_group_Higgs_wh3l_Pre_13TeV_events379->SetEntries(8009);
   new_histo_group_Higgs_wh3l_Pre_13TeV_events379->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_Pre_13TeV_events379->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_Pre_13TeV_events379->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_Pre_13TeV_events379->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_Pre_13TeV_events379->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_Pre_13TeV_events379->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_Pre_13TeV_events379->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_Pre_13TeV_events379->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_Pre_13TeV_events379->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_Pre_13TeV_events379->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_Pre_13TeV_events379->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_Pre_13TeV_events379->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_Pre_13TeV_events379->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_Pre_13TeV_events379->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_Pre_13TeV_events379->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_Pre_13TeV_events->Add(new_histo_group_Higgs_wh3l_Pre_13TeV_events,"");
   thsSignal_grouped_wh3l_Pre_13TeV_events->Draw("hist same noclear");
   
   Double_t _fx3075[1] = {
   1};
   Double_t _fy3075[1] = {
   943.2067};
   Double_t _felx3075[1] = {
   1};
   Double_t _fely3075[1] = {
   105.4274};
   Double_t _fehx3075[1] = {
   1};
   Double_t _fehy3075[1] = {
   105.3191};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(1,_fx3075,_fy3075,_felx3075,_fehx3075,_fely3075,_fehy3075);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(12);
   grae->SetFillStyle(3004);
   grae->SetLineColor(12);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3075 = new TH1F("Graph_Graph3075","",100,0,2.2);
   Graph_Graph3075->SetMinimum(816.7047);
   Graph_Graph3075->SetMaximum(1069.601);
   Graph_Graph3075->SetDirectory(0);
   Graph_Graph3075->SetStats(0);
   Graph_Graph3075->SetLineStyle(0);
   Graph_Graph3075->SetMarkerStyle(20);
   Graph_Graph3075->GetXaxis()->SetLabelFont(42);
   Graph_Graph3075->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3075->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3075->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3075->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3075->GetXaxis()->SetTitleFont(42);
   Graph_Graph3075->GetYaxis()->SetLabelFont(42);
   Graph_Graph3075->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3075->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3075->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3075->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3075->GetYaxis()->SetTitleFont(42);
   Graph_Graph3075->GetZaxis()->SetLabelFont(42);
   Graph_Graph3075->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3075->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3075->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3075->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3075);
   
   grae->Draw("2");
   
   Double_t _fx3076[1] = {
   1};
   Double_t _fy3076[1] = {
   1054};
   Double_t _felx3076[1] = {
   1};
   Double_t _fely3076[1] = {
   32.46091};
   Double_t _fehx3076[1] = {
   1};
   Double_t _fehy3076[1] = {
   33.47636};
   grae = new TGraphAsymmErrors(1,_fx3076,_fy3076,_felx3076,_fehx3076,_fely3076,_fehy3076);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(1);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3076 = new TH1F("Graph_Graph3076","",100,0,2.2);
   Graph_Graph3076->SetMinimum(1014.945);
   Graph_Graph3076->SetMaximum(1094.07);
   Graph_Graph3076->SetDirectory(0);
   Graph_Graph3076->SetStats(0);
   Graph_Graph3076->SetLineStyle(0);
   Graph_Graph3076->SetMarkerStyle(20);
   Graph_Graph3076->GetXaxis()->SetLabelFont(42);
   Graph_Graph3076->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3076->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3076->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3076->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3076->GetXaxis()->SetTitleFont(42);
   Graph_Graph3076->GetYaxis()->SetLabelFont(42);
   Graph_Graph3076->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3076->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3076->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3076->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3076->GetYaxis()->SetTitleFont(42);
   Graph_Graph3076->GetZaxis()->SetLabelFont(42);
   Graph_Graph3076->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3076->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3076->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3076->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3076);
   
   grae->Draw("p0");
   
   TLegend *leg = new TLegend(0.2,0.7,0.8,0.9,NULL,"brNDC");
   leg->SetTextFont(62);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("new_histo_group_Fake_wh3l_Pre_13TeV_events","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_Pre_13TeV_events","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_Pre_13TeV_events","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_Pre_13TeV_events","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_Pre_13TeV_events","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_Pre_13TeV_events","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_Pre_13TeV_events","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_Pre_13TeV_events","Data","EPL");
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
   entry=leg->AddEntry("new_histo_group_Fake_wh3l_Pre_13TeV_events","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_Pre_13TeV_events","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_Pre_13TeV_events","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_Pre_13TeV_events","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_Pre_13TeV_events","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_Pre_13TeV_events","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_Pre_13TeV_events","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_Pre_13TeV_events","Data","EPL");
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
   
   TH1F *hframe_copy380 = new TH1F("hframe_copy380","",1000,0,2);
   hframe_copy380->SetMinimum(0);
   hframe_copy380->SetMaximum(2716.163);
   hframe_copy380->SetDirectory(0);
   hframe_copy380->SetStats(0);
   hframe_copy380->SetLineStyle(0);
   hframe_copy380->SetMarkerStyle(20);
   hframe_copy380->GetXaxis()->SetTitle("events");
   hframe_copy380->GetXaxis()->SetNdivisions(506);
   hframe_copy380->GetXaxis()->SetLabelFont(42);
   hframe_copy380->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy380->GetXaxis()->SetLabelSize(0.05);
   hframe_copy380->GetXaxis()->SetTitleSize(0.06);
   hframe_copy380->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy380->GetXaxis()->SetTitleFont(42);
   hframe_copy380->GetYaxis()->SetTitle("Events");
   hframe_copy380->GetYaxis()->SetLabelFont(42);
   hframe_copy380->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy380->GetYaxis()->SetLabelSize(0.05);
   hframe_copy380->GetYaxis()->SetTitleSize(0.06);
   hframe_copy380->GetYaxis()->SetTitleOffset(1.25);
   hframe_copy380->GetYaxis()->SetTitleFont(42);
   hframe_copy380->GetZaxis()->SetLabelFont(42);
   hframe_copy380->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy380->GetZaxis()->SetLabelSize(0.05);
   hframe_copy380->GetZaxis()->SetTitleSize(0.06);
   hframe_copy380->GetZaxis()->SetTitleFont(42);
   hframe_copy380->Draw("sameaxis");
   ccwh3l_Pre_13TeV_events->Modified();
   ccwh3l_Pre_13TeV_events->cd();
   ccwh3l_Pre_13TeV_events->SetSelected(ccwh3l_Pre_13TeV_events);
}
