void c_wh3l_MET_13TeV_events()
{
//=========Macro generated from canvas: ccwh3l_MET_13TeV_events/cc
//=========  (Sun Jul  3 16:19:06 2016) by ROOT version6.02/13
   TCanvas *ccwh3l_MET_13TeV_events = new TCanvas("ccwh3l_MET_13TeV_events", "cc",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   ccwh3l_MET_13TeV_events->SetHighLightColor(2);
   ccwh3l_MET_13TeV_events->Range(-0.4,-134.5112,2.1,900.1901);
   ccwh3l_MET_13TeV_events->SetFillColor(0);
   ccwh3l_MET_13TeV_events->SetBorderMode(0);
   ccwh3l_MET_13TeV_events->SetBorderSize(2);
   ccwh3l_MET_13TeV_events->SetTickx(1);
   ccwh3l_MET_13TeV_events->SetTicky(1);
   ccwh3l_MET_13TeV_events->SetLeftMargin(0.16);
   ccwh3l_MET_13TeV_events->SetRightMargin(0.04);
   ccwh3l_MET_13TeV_events->SetTopMargin(0.05);
   ccwh3l_MET_13TeV_events->SetBottomMargin(0.13);
   ccwh3l_MET_13TeV_events->SetFrameFillStyle(0);
   ccwh3l_MET_13TeV_events->SetFrameBorderMode(0);
   ccwh3l_MET_13TeV_events->SetFrameFillStyle(0);
   ccwh3l_MET_13TeV_events->SetFrameBorderMode(0);
   
   TH1F *hframe181 = new TH1F("hframe181","",1000,0,2);
   hframe181->SetMinimum(0);
   hframe181->SetMaximum(848.4551);
   hframe181->SetDirectory(0);
   hframe181->SetStats(0);
   hframe181->SetLineStyle(0);
   hframe181->SetMarkerStyle(20);
   hframe181->GetXaxis()->SetTitle("events");
   hframe181->GetXaxis()->SetNdivisions(506);
   hframe181->GetXaxis()->SetLabelFont(42);
   hframe181->GetXaxis()->SetLabelOffset(0.007);
   hframe181->GetXaxis()->SetLabelSize(0.05);
   hframe181->GetXaxis()->SetTitleSize(0.06);
   hframe181->GetXaxis()->SetTitleOffset(0.9);
   hframe181->GetXaxis()->SetTitleFont(42);
   hframe181->GetYaxis()->SetTitle("Events");
   hframe181->GetYaxis()->SetLabelFont(42);
   hframe181->GetYaxis()->SetLabelOffset(0.007);
   hframe181->GetYaxis()->SetLabelSize(0.05);
   hframe181->GetYaxis()->SetTitleSize(0.06);
   hframe181->GetYaxis()->SetTitleOffset(1.25);
   hframe181->GetYaxis()->SetTitleFont(42);
   hframe181->GetZaxis()->SetLabelFont(42);
   hframe181->GetZaxis()->SetLabelOffset(0.007);
   hframe181->GetZaxis()->SetLabelSize(0.05);
   hframe181->GetZaxis()->SetTitleSize(0.06);
   hframe181->GetZaxis()->SetTitleFont(42);
   hframe181->Draw(" ");
   
   THStack *thsBackground_grouped_wh3l_MET_13TeV_events = new THStack();
   thsBackground_grouped_wh3l_MET_13TeV_events->SetName("thsBackground_grouped_wh3l_MET_13TeV_events");
   thsBackground_grouped_wh3l_MET_13TeV_events->SetTitle("thsBackground_grouped_wh3l_MET_13TeV_events");
   
   TH1F *thsBackground_grouped_wh3l_MET_13TeV_events_stack_37 = new TH1F("thsBackground_grouped_wh3l_MET_13TeV_events_stack_37","thsBackground_grouped_wh3l_MET_13TeV_events",1,0,2);
   thsBackground_grouped_wh3l_MET_13TeV_events_stack_37->SetMinimum(0);
   thsBackground_grouped_wh3l_MET_13TeV_events_stack_37->SetMaximum(356.3511);
   thsBackground_grouped_wh3l_MET_13TeV_events_stack_37->SetDirectory(0);
   thsBackground_grouped_wh3l_MET_13TeV_events_stack_37->SetStats(0);
   thsBackground_grouped_wh3l_MET_13TeV_events_stack_37->SetLineStyle(0);
   thsBackground_grouped_wh3l_MET_13TeV_events_stack_37->SetMarkerStyle(20);
   thsBackground_grouped_wh3l_MET_13TeV_events_stack_37->GetXaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_MET_13TeV_events_stack_37->GetXaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_MET_13TeV_events_stack_37->GetXaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_MET_13TeV_events_stack_37->GetXaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_MET_13TeV_events_stack_37->GetXaxis()->SetTitleOffset(0.9);
   thsBackground_grouped_wh3l_MET_13TeV_events_stack_37->GetXaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_13TeV_events_stack_37->GetYaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_MET_13TeV_events_stack_37->GetYaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_MET_13TeV_events_stack_37->GetYaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_MET_13TeV_events_stack_37->GetYaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_MET_13TeV_events_stack_37->GetYaxis()->SetTitleOffset(1.25);
   thsBackground_grouped_wh3l_MET_13TeV_events_stack_37->GetYaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_13TeV_events_stack_37->GetZaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_MET_13TeV_events_stack_37->GetZaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_MET_13TeV_events_stack_37->GetZaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_MET_13TeV_events_stack_37->GetZaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_MET_13TeV_events_stack_37->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_13TeV_events->SetHistogram(thsBackground_grouped_wh3l_MET_13TeV_events_stack_37);
   
   
   TH1D *new_histo_group_Fake_wh3l_MET_13TeV_events182 = new TH1D("new_histo_group_Fake_wh3l_MET_13TeV_events182","histo_Fake",1,0,2);
   new_histo_group_Fake_wh3l_MET_13TeV_events182->SetBinContent(1,86.25504);
   new_histo_group_Fake_wh3l_MET_13TeV_events182->SetBinError(1,7.529552);
   new_histo_group_Fake_wh3l_MET_13TeV_events182->SetEntries(1194);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_MET_13TeV_events182->SetFillColor(ci);
   new_histo_group_Fake_wh3l_MET_13TeV_events182->SetFillStyle(3001);

   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_MET_13TeV_events182->SetLineColor(ci);
   new_histo_group_Fake_wh3l_MET_13TeV_events182->GetXaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_MET_13TeV_events182->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_MET_13TeV_events182->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_MET_13TeV_events182->GetXaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_MET_13TeV_events182->GetYaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_MET_13TeV_events182->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_MET_13TeV_events182->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_MET_13TeV_events182->GetYaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_MET_13TeV_events182->GetZaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_MET_13TeV_events182->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_MET_13TeV_events182->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_MET_13TeV_events182->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_13TeV_events->Add(new_histo_group_Fake_wh3l_MET_13TeV_events,"");
   
   TH1D *new_histo_group_WW_wh3l_MET_13TeV_events183 = new TH1D("new_histo_group_WW_wh3l_MET_13TeV_events183","histo_WW",1,0,2);
   new_histo_group_WW_wh3l_MET_13TeV_events183->SetBinContent(1,0.3676866);
   new_histo_group_WW_wh3l_MET_13TeV_events183->SetBinError(1,0.07576438);
   new_histo_group_WW_wh3l_MET_13TeV_events183->SetEntries(25);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_MET_13TeV_events183->SetFillColor(ci);
   new_histo_group_WW_wh3l_MET_13TeV_events183->SetFillStyle(3001);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_MET_13TeV_events183->SetLineColor(ci);
   new_histo_group_WW_wh3l_MET_13TeV_events183->GetXaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_MET_13TeV_events183->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_MET_13TeV_events183->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_MET_13TeV_events183->GetXaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_MET_13TeV_events183->GetYaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_MET_13TeV_events183->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_MET_13TeV_events183->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_MET_13TeV_events183->GetYaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_MET_13TeV_events183->GetZaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_MET_13TeV_events183->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_MET_13TeV_events183->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_MET_13TeV_events183->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_13TeV_events->Add(new_histo_group_WW_wh3l_MET_13TeV_events,"");
   
   TH1D *new_histo_group_VVV_wh3l_MET_13TeV_events184 = new TH1D("new_histo_group_VVV_wh3l_MET_13TeV_events184","histo_VVV",1,0,2);
   new_histo_group_VVV_wh3l_MET_13TeV_events184->SetBinContent(1,4.141068);
   new_histo_group_VVV_wh3l_MET_13TeV_events184->SetBinError(1,0.09031822);
   new_histo_group_VVV_wh3l_MET_13TeV_events184->SetEntries(3817);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_MET_13TeV_events184->SetFillColor(ci);
   new_histo_group_VVV_wh3l_MET_13TeV_events184->SetFillStyle(3001);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_MET_13TeV_events184->SetLineColor(ci);
   new_histo_group_VVV_wh3l_MET_13TeV_events184->GetXaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_MET_13TeV_events184->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_MET_13TeV_events184->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_MET_13TeV_events184->GetXaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_MET_13TeV_events184->GetYaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_MET_13TeV_events184->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_MET_13TeV_events184->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_MET_13TeV_events184->GetYaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_MET_13TeV_events184->GetZaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_MET_13TeV_events184->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_MET_13TeV_events184->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_MET_13TeV_events184->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_13TeV_events->Add(new_histo_group_VVV_wh3l_MET_13TeV_events,"");
   
   TH1D *new_histo_group_Vg_wh3l_MET_13TeV_events185 = new TH1D("new_histo_group_Vg_wh3l_MET_13TeV_events185","histo_Vg",1,0,2);
   new_histo_group_Vg_wh3l_MET_13TeV_events185->SetBinContent(1,11.8183);
   new_histo_group_Vg_wh3l_MET_13TeV_events185->SetBinError(1,1.296283);
   new_histo_group_Vg_wh3l_MET_13TeV_events185->SetEntries(194);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_MET_13TeV_events185->SetFillColor(ci);
   new_histo_group_Vg_wh3l_MET_13TeV_events185->SetFillStyle(3001);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_MET_13TeV_events185->SetLineColor(ci);
   new_histo_group_Vg_wh3l_MET_13TeV_events185->GetXaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_MET_13TeV_events185->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_MET_13TeV_events185->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_MET_13TeV_events185->GetXaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_MET_13TeV_events185->GetYaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_MET_13TeV_events185->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_MET_13TeV_events185->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_MET_13TeV_events185->GetYaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_MET_13TeV_events185->GetZaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_MET_13TeV_events185->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_MET_13TeV_events185->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_MET_13TeV_events185->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_13TeV_events->Add(new_histo_group_Vg_wh3l_MET_13TeV_events,"");
   
   TH1D *new_histo_group_ZZ_wh3l_MET_13TeV_events186 = new TH1D("new_histo_group_ZZ_wh3l_MET_13TeV_events186","histo_ZZ",1,0,2);
   new_histo_group_ZZ_wh3l_MET_13TeV_events186->SetBinContent(1,12.73403);
   new_histo_group_ZZ_wh3l_MET_13TeV_events186->SetBinError(1,0.7250189);
   new_histo_group_ZZ_wh3l_MET_13TeV_events186->SetEntries(350);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_MET_13TeV_events186->SetFillColor(ci);
   new_histo_group_ZZ_wh3l_MET_13TeV_events186->SetFillStyle(3001);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_MET_13TeV_events186->SetLineColor(ci);
   new_histo_group_ZZ_wh3l_MET_13TeV_events186->GetXaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_MET_13TeV_events186->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_MET_13TeV_events186->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_MET_13TeV_events186->GetXaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_MET_13TeV_events186->GetYaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_MET_13TeV_events186->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_MET_13TeV_events186->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_MET_13TeV_events186->GetYaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_MET_13TeV_events186->GetZaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_MET_13TeV_events186->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_MET_13TeV_events186->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_MET_13TeV_events186->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_13TeV_events->Add(new_histo_group_ZZ_wh3l_MET_13TeV_events,"");
   
   TH1D *new_histo_group_WZ_wh3l_MET_13TeV_events187 = new TH1D("new_histo_group_WZ_wh3l_MET_13TeV_events187","histo_WZ",1,0,2);
   new_histo_group_WZ_wh3l_MET_13TeV_events187->SetBinContent(1,220.7434);
   new_histo_group_WZ_wh3l_MET_13TeV_events187->SetBinError(1,1.095117);
   new_histo_group_WZ_wh3l_MET_13TeV_events187->SetEntries(45061);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_MET_13TeV_events187->SetFillColor(ci);
   new_histo_group_WZ_wh3l_MET_13TeV_events187->SetFillStyle(3001);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_MET_13TeV_events187->SetLineColor(ci);
   new_histo_group_WZ_wh3l_MET_13TeV_events187->GetXaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_MET_13TeV_events187->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_MET_13TeV_events187->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_MET_13TeV_events187->GetXaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_MET_13TeV_events187->GetYaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_MET_13TeV_events187->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_MET_13TeV_events187->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_MET_13TeV_events187->GetYaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_MET_13TeV_events187->GetZaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_MET_13TeV_events187->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_MET_13TeV_events187->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_MET_13TeV_events187->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_13TeV_events->Add(new_histo_group_WZ_wh3l_MET_13TeV_events,"");
   
   TH1D *new_histo_group_Higgs_wh3l_MET_13TeV_events188 = new TH1D("new_histo_group_Higgs_wh3l_MET_13TeV_events188","histo_H_htt",1,0,2);
   new_histo_group_Higgs_wh3l_MET_13TeV_events188->SetBinContent(1,3.322487);
   new_histo_group_Higgs_wh3l_MET_13TeV_events188->SetBinError(1,0.05882824);
   new_histo_group_Higgs_wh3l_MET_13TeV_events188->SetEntries(5541);
   new_histo_group_Higgs_wh3l_MET_13TeV_events188->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_MET_13TeV_events188->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_MET_13TeV_events188->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_MET_13TeV_events188->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_13TeV_events188->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_13TeV_events188->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_13TeV_events188->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_MET_13TeV_events188->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_13TeV_events188->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_13TeV_events188->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_13TeV_events188->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_MET_13TeV_events188->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_13TeV_events188->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_13TeV_events188->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_13TeV_events188->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_13TeV_events->Add(new_histo_group_Higgs_wh3l_MET_13TeV_events,"");
   thsBackground_grouped_wh3l_MET_13TeV_events->Draw("hist same");
   
   thsSignal_grouped_wh3l_MET_13TeV_events = new THStack();
   thsSignal_grouped_wh3l_MET_13TeV_events->SetName("thsSignal_grouped_wh3l_MET_13TeV_events");
   thsSignal_grouped_wh3l_MET_13TeV_events->SetTitle("thsSignal_grouped_wh3l_MET_13TeV_events");
   
   TH1F *thsSignal_grouped_wh3l_MET_13TeV_events_stack_38 = new TH1F("thsSignal_grouped_wh3l_MET_13TeV_events_stack_38","thsSignal_grouped_wh3l_MET_13TeV_events",1,0,2);
   thsSignal_grouped_wh3l_MET_13TeV_events_stack_38->SetMinimum(0);
   thsSignal_grouped_wh3l_MET_13TeV_events_stack_38->SetMaximum(3.550381);
   thsSignal_grouped_wh3l_MET_13TeV_events_stack_38->SetDirectory(0);
   thsSignal_grouped_wh3l_MET_13TeV_events_stack_38->SetStats(0);
   thsSignal_grouped_wh3l_MET_13TeV_events_stack_38->SetLineStyle(0);
   thsSignal_grouped_wh3l_MET_13TeV_events_stack_38->SetMarkerStyle(20);
   thsSignal_grouped_wh3l_MET_13TeV_events_stack_38->GetXaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_MET_13TeV_events_stack_38->GetXaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_MET_13TeV_events_stack_38->GetXaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_MET_13TeV_events_stack_38->GetXaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_MET_13TeV_events_stack_38->GetXaxis()->SetTitleOffset(0.9);
   thsSignal_grouped_wh3l_MET_13TeV_events_stack_38->GetXaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_MET_13TeV_events_stack_38->GetYaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_MET_13TeV_events_stack_38->GetYaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_MET_13TeV_events_stack_38->GetYaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_MET_13TeV_events_stack_38->GetYaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_MET_13TeV_events_stack_38->GetYaxis()->SetTitleOffset(1.25);
   thsSignal_grouped_wh3l_MET_13TeV_events_stack_38->GetYaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_MET_13TeV_events_stack_38->GetZaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_MET_13TeV_events_stack_38->GetZaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_MET_13TeV_events_stack_38->GetZaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_MET_13TeV_events_stack_38->GetZaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_MET_13TeV_events_stack_38->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_MET_13TeV_events->SetHistogram(thsSignal_grouped_wh3l_MET_13TeV_events_stack_38);
   
   
   TH1D *new_histo_group_Higgs_wh3l_MET_13TeV_events189 = new TH1D("new_histo_group_Higgs_wh3l_MET_13TeV_events189","histo_H_htt",1,0,2);
   new_histo_group_Higgs_wh3l_MET_13TeV_events189->SetBinContent(1,3.322487);
   new_histo_group_Higgs_wh3l_MET_13TeV_events189->SetBinError(1,0.05882824);
   new_histo_group_Higgs_wh3l_MET_13TeV_events189->SetEntries(5541);
   new_histo_group_Higgs_wh3l_MET_13TeV_events189->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_MET_13TeV_events189->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_MET_13TeV_events189->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_MET_13TeV_events189->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_13TeV_events189->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_13TeV_events189->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_13TeV_events189->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_MET_13TeV_events189->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_13TeV_events189->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_13TeV_events189->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_13TeV_events189->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_MET_13TeV_events189->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_13TeV_events189->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_13TeV_events189->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_13TeV_events189->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_MET_13TeV_events->Add(new_histo_group_Higgs_wh3l_MET_13TeV_events,"");
   thsSignal_grouped_wh3l_MET_13TeV_events->Draw("hist same noclear");
   
   Double_t _fx3037[1] = {
   1};
   Double_t _fy3037[1] = {
   336.0595};
   Double_t _felx3037[1] = {
   1};
   Double_t _fely3037[1] = {
   32.86827};
   Double_t _fehx3037[1] = {
   1};
   Double_t _fehy3037[1] = {
   32.8191};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(1,_fx3037,_fy3037,_felx3037,_fehx3037,_fely3037,_fehy3037);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(12);
   grae->SetFillStyle(3004);
   grae->SetLineColor(12);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3037 = new TH1F("Graph_Graph3037","",100,0,2.2);
   Graph_Graph3037->SetMinimum(296.6225);
   Graph_Graph3037->SetMaximum(375.4474);
   Graph_Graph3037->SetDirectory(0);
   Graph_Graph3037->SetStats(0);
   Graph_Graph3037->SetLineStyle(0);
   Graph_Graph3037->SetMarkerStyle(20);
   Graph_Graph3037->GetXaxis()->SetLabelFont(42);
   Graph_Graph3037->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3037->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3037->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3037->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3037->GetXaxis()->SetTitleFont(42);
   Graph_Graph3037->GetYaxis()->SetLabelFont(42);
   Graph_Graph3037->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3037->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3037->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3037->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3037->GetYaxis()->SetTitleFont(42);
   Graph_Graph3037->GetZaxis()->SetLabelFont(42);
   Graph_Graph3037->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3037->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3037->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3037->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3037);
   
   grae->Draw("2");
   
   Double_t _fx3038[1] = {
   1};
   Double_t _fy3038[1] = {
   0};
   Double_t _felx3038[1] = {
   1};
   Double_t _fely3038[1] = {
   0};
   Double_t _fehx3038[1] = {
   1};
   Double_t _fehy3038[1] = {
   1.147908};
   grae = new TGraphAsymmErrors(1,_fx3038,_fy3038,_felx3038,_fehx3038,_fely3038,_fehy3038);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(1);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3038 = new TH1F("Graph_Graph3038","",100,0,2.2);
   Graph_Graph3038->SetMinimum(0);
   Graph_Graph3038->SetMaximum(1.262698);
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
   
   grae->Draw("p0");
   
   TLegend *leg = new TLegend(0.2,0.7,0.8,0.9,NULL,"brNDC");
   leg->SetTextFont(62);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("new_histo_group_Fake_wh3l_MET_13TeV_events","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_MET_13TeV_events","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_MET_13TeV_events","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_MET_13TeV_events","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_MET_13TeV_events","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_MET_13TeV_events","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_MET_13TeV_events","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_MET_13TeV_events","Data","EPL");
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
   entry=leg->AddEntry("new_histo_group_Fake_wh3l_MET_13TeV_events","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_MET_13TeV_events","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_MET_13TeV_events","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_MET_13TeV_events","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_MET_13TeV_events","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_MET_13TeV_events","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_MET_13TeV_events","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_MET_13TeV_events","Data","EPL");
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
   
   TH1F *hframe_copy190 = new TH1F("hframe_copy190","",1000,0,2);
   hframe_copy190->SetMinimum(0);
   hframe_copy190->SetMaximum(848.4551);
   hframe_copy190->SetDirectory(0);
   hframe_copy190->SetStats(0);
   hframe_copy190->SetLineStyle(0);
   hframe_copy190->SetMarkerStyle(20);
   hframe_copy190->GetXaxis()->SetTitle("events");
   hframe_copy190->GetXaxis()->SetNdivisions(506);
   hframe_copy190->GetXaxis()->SetLabelFont(42);
   hframe_copy190->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy190->GetXaxis()->SetLabelSize(0.05);
   hframe_copy190->GetXaxis()->SetTitleSize(0.06);
   hframe_copy190->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy190->GetXaxis()->SetTitleFont(42);
   hframe_copy190->GetYaxis()->SetTitle("Events");
   hframe_copy190->GetYaxis()->SetLabelFont(42);
   hframe_copy190->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy190->GetYaxis()->SetLabelSize(0.05);
   hframe_copy190->GetYaxis()->SetTitleSize(0.06);
   hframe_copy190->GetYaxis()->SetTitleOffset(1.25);
   hframe_copy190->GetYaxis()->SetTitleFont(42);
   hframe_copy190->GetZaxis()->SetLabelFont(42);
   hframe_copy190->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy190->GetZaxis()->SetLabelSize(0.05);
   hframe_copy190->GetZaxis()->SetTitleSize(0.06);
   hframe_copy190->GetZaxis()->SetTitleFont(42);
   hframe_copy190->Draw("sameaxis");
   ccwh3l_MET_13TeV_events->Modified();
   ccwh3l_MET_13TeV_events->cd();
   ccwh3l_MET_13TeV_events->SetSelected(ccwh3l_MET_13TeV_events);
}
