void c_wh3l_MET_13TeV_events()
{
//=========Macro generated from canvas: ccwh3l_MET_13TeV_events/cc
//=========  (Sun Jul  3 01:21:59 2016) by ROOT version6.02/13
   TCanvas *ccwh3l_MET_13TeV_events = new TCanvas("ccwh3l_MET_13TeV_events", "cc",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   ccwh3l_MET_13TeV_events->SetHighLightColor(2);
   ccwh3l_MET_13TeV_events->Range(-0.4,-8.522051,2.1,57.03219);
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
   
   TH1F *hframe241 = new TH1F("hframe241","",1000,0,2);
   hframe241->SetMinimum(0);
   hframe241->SetMaximum(53.75448);
   hframe241->SetDirectory(0);
   hframe241->SetStats(0);
   hframe241->SetLineStyle(0);
   hframe241->SetMarkerStyle(20);
   hframe241->GetXaxis()->SetTitle("events");
   hframe241->GetXaxis()->SetNdivisions(506);
   hframe241->GetXaxis()->SetLabelFont(42);
   hframe241->GetXaxis()->SetLabelOffset(0.007);
   hframe241->GetXaxis()->SetLabelSize(0.05);
   hframe241->GetXaxis()->SetTitleSize(0.06);
   hframe241->GetXaxis()->SetTitleOffset(0.9);
   hframe241->GetXaxis()->SetTitleFont(42);
   hframe241->GetYaxis()->SetTitle("Events");
   hframe241->GetYaxis()->SetLabelFont(42);
   hframe241->GetYaxis()->SetLabelOffset(0.007);
   hframe241->GetYaxis()->SetLabelSize(0.05);
   hframe241->GetYaxis()->SetTitleSize(0.06);
   hframe241->GetYaxis()->SetTitleOffset(1.25);
   hframe241->GetYaxis()->SetTitleFont(42);
   hframe241->GetZaxis()->SetLabelFont(42);
   hframe241->GetZaxis()->SetLabelOffset(0.007);
   hframe241->GetZaxis()->SetLabelSize(0.05);
   hframe241->GetZaxis()->SetTitleSize(0.06);
   hframe241->GetZaxis()->SetTitleFont(42);
   hframe241->Draw(" ");
   
   THStack *thsBackground_grouped_wh3l_MET_13TeV_events = new THStack();
   thsBackground_grouped_wh3l_MET_13TeV_events->SetName("thsBackground_grouped_wh3l_MET_13TeV_events");
   thsBackground_grouped_wh3l_MET_13TeV_events->SetTitle("thsBackground_grouped_wh3l_MET_13TeV_events");
   
   TH1F *thsBackground_grouped_wh3l_MET_13TeV_events_stack_49 = new TH1F("thsBackground_grouped_wh3l_MET_13TeV_events_stack_49","thsBackground_grouped_wh3l_MET_13TeV_events",1,0,2);
   thsBackground_grouped_wh3l_MET_13TeV_events_stack_49->SetMinimum(-0.02343283);
   thsBackground_grouped_wh3l_MET_13TeV_events_stack_49->SetMaximum(23.26253);
   thsBackground_grouped_wh3l_MET_13TeV_events_stack_49->SetDirectory(0);
   thsBackground_grouped_wh3l_MET_13TeV_events_stack_49->SetStats(0);
   thsBackground_grouped_wh3l_MET_13TeV_events_stack_49->SetLineStyle(0);
   thsBackground_grouped_wh3l_MET_13TeV_events_stack_49->SetMarkerStyle(20);
   thsBackground_grouped_wh3l_MET_13TeV_events_stack_49->GetXaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_MET_13TeV_events_stack_49->GetXaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_MET_13TeV_events_stack_49->GetXaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_MET_13TeV_events_stack_49->GetXaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_MET_13TeV_events_stack_49->GetXaxis()->SetTitleOffset(0.9);
   thsBackground_grouped_wh3l_MET_13TeV_events_stack_49->GetXaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_13TeV_events_stack_49->GetYaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_MET_13TeV_events_stack_49->GetYaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_MET_13TeV_events_stack_49->GetYaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_MET_13TeV_events_stack_49->GetYaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_MET_13TeV_events_stack_49->GetYaxis()->SetTitleOffset(1.25);
   thsBackground_grouped_wh3l_MET_13TeV_events_stack_49->GetYaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_13TeV_events_stack_49->GetZaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_MET_13TeV_events_stack_49->GetZaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_MET_13TeV_events_stack_49->GetZaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_MET_13TeV_events_stack_49->GetZaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_MET_13TeV_events_stack_49->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_13TeV_events->SetHistogram(thsBackground_grouped_wh3l_MET_13TeV_events_stack_49);
   
   
   TH1D *new_histo_group_Fake_wh3l_MET_13TeV_events242 = new TH1D("new_histo_group_Fake_wh3l_MET_13TeV_events242","histo_Fake",1,0,2);
   new_histo_group_Fake_wh3l_MET_13TeV_events242->SetBinContent(1,19.17259);
   new_histo_group_Fake_wh3l_MET_13TeV_events242->SetBinError(1,2.982204);
   new_histo_group_Fake_wh3l_MET_13TeV_events242->SetEntries(161);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_MET_13TeV_events242->SetFillColor(ci);
   new_histo_group_Fake_wh3l_MET_13TeV_events242->SetFillStyle(3001);

   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_MET_13TeV_events242->SetLineColor(ci);
   new_histo_group_Fake_wh3l_MET_13TeV_events242->GetXaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_MET_13TeV_events242->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_MET_13TeV_events242->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_MET_13TeV_events242->GetXaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_MET_13TeV_events242->GetYaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_MET_13TeV_events242->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_MET_13TeV_events242->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_MET_13TeV_events242->GetYaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_MET_13TeV_events242->GetZaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_MET_13TeV_events242->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_MET_13TeV_events242->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_MET_13TeV_events242->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_13TeV_events->Add(new_histo_group_Fake_wh3l_MET_13TeV_events,"");
   
   TH1D *new_histo_group_WW_wh3l_MET_13TeV_events243 = new TH1D("new_histo_group_WW_wh3l_MET_13TeV_events243","histo_WW",1,0,2);
   new_histo_group_WW_wh3l_MET_13TeV_events243->SetBinContent(1,0.1110794);
   new_histo_group_WW_wh3l_MET_13TeV_events243->SetBinError(1,0.04090878);
   new_histo_group_WW_wh3l_MET_13TeV_events243->SetEntries(8);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_MET_13TeV_events243->SetFillColor(ci);
   new_histo_group_WW_wh3l_MET_13TeV_events243->SetFillStyle(3001);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_MET_13TeV_events243->SetLineColor(ci);
   new_histo_group_WW_wh3l_MET_13TeV_events243->GetXaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_MET_13TeV_events243->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_MET_13TeV_events243->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_MET_13TeV_events243->GetXaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_MET_13TeV_events243->GetYaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_MET_13TeV_events243->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_MET_13TeV_events243->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_MET_13TeV_events243->GetYaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_MET_13TeV_events243->GetZaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_MET_13TeV_events243->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_MET_13TeV_events243->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_MET_13TeV_events243->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_13TeV_events->Add(new_histo_group_WW_wh3l_MET_13TeV_events,"");
   
   TH1D *new_histo_group_VVV_wh3l_MET_13TeV_events244 = new TH1D("new_histo_group_VVV_wh3l_MET_13TeV_events244","histo_VVV",1,0,2);
   new_histo_group_VVV_wh3l_MET_13TeV_events244->SetBinContent(1,0.313563);
   new_histo_group_VVV_wh3l_MET_13TeV_events244->SetBinError(1,0.02940779);
   new_histo_group_VVV_wh3l_MET_13TeV_events244->SetEntries(198);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_MET_13TeV_events244->SetFillColor(ci);
   new_histo_group_VVV_wh3l_MET_13TeV_events244->SetFillStyle(3001);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_MET_13TeV_events244->SetLineColor(ci);
   new_histo_group_VVV_wh3l_MET_13TeV_events244->GetXaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_MET_13TeV_events244->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_MET_13TeV_events244->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_MET_13TeV_events244->GetXaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_MET_13TeV_events244->GetYaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_MET_13TeV_events244->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_MET_13TeV_events244->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_MET_13TeV_events244->GetYaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_MET_13TeV_events244->GetZaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_MET_13TeV_events244->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_MET_13TeV_events244->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_MET_13TeV_events244->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_13TeV_events->Add(new_histo_group_VVV_wh3l_MET_13TeV_events,"");
   
   TH1D *new_histo_group_Vg_wh3l_MET_13TeV_events245 = new TH1D("new_histo_group_Vg_wh3l_MET_13TeV_events245","histo_Vg",1,0,2);
   new_histo_group_Vg_wh3l_MET_13TeV_events245->SetBinContent(1,0.1801005);
   new_histo_group_Vg_wh3l_MET_13TeV_events245->SetBinError(1,0.2035333);
   new_histo_group_Vg_wh3l_MET_13TeV_events245->SetEntries(4);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_MET_13TeV_events245->SetFillColor(ci);
   new_histo_group_Vg_wh3l_MET_13TeV_events245->SetFillStyle(3001);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_MET_13TeV_events245->SetLineColor(ci);
   new_histo_group_Vg_wh3l_MET_13TeV_events245->GetXaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_MET_13TeV_events245->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_MET_13TeV_events245->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_MET_13TeV_events245->GetXaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_MET_13TeV_events245->GetYaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_MET_13TeV_events245->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_MET_13TeV_events245->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_MET_13TeV_events245->GetYaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_MET_13TeV_events245->GetZaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_MET_13TeV_events245->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_MET_13TeV_events245->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_MET_13TeV_events245->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_13TeV_events->Add(new_histo_group_Vg_wh3l_MET_13TeV_events,"");
   
   TH1D *new_histo_group_ZZ_wh3l_MET_13TeV_events246 = new TH1D("new_histo_group_ZZ_wh3l_MET_13TeV_events246","histo_ZZ",1,0,2);
   new_histo_group_ZZ_wh3l_MET_13TeV_events246->SetBinContent(1,0.1255383);
   new_histo_group_ZZ_wh3l_MET_13TeV_events246->SetBinError(1,0.07302862);
   new_histo_group_ZZ_wh3l_MET_13TeV_events246->SetEntries(3);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_MET_13TeV_events246->SetFillColor(ci);
   new_histo_group_ZZ_wh3l_MET_13TeV_events246->SetFillStyle(3001);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_MET_13TeV_events246->SetLineColor(ci);
   new_histo_group_ZZ_wh3l_MET_13TeV_events246->GetXaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_MET_13TeV_events246->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_MET_13TeV_events246->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_MET_13TeV_events246->GetXaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_MET_13TeV_events246->GetYaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_MET_13TeV_events246->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_MET_13TeV_events246->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_MET_13TeV_events246->GetYaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_MET_13TeV_events246->GetZaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_MET_13TeV_events246->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_MET_13TeV_events246->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_MET_13TeV_events246->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_13TeV_events->Add(new_histo_group_ZZ_wh3l_MET_13TeV_events,"");
   
   TH1D *new_histo_group_WZ_wh3l_MET_13TeV_events247 = new TH1D("new_histo_group_WZ_wh3l_MET_13TeV_events247","histo_WZ",1,0,2);
   new_histo_group_WZ_wh3l_MET_13TeV_events247->SetBinContent(1,1.186873);
   new_histo_group_WZ_wh3l_MET_13TeV_events247->SetBinError(1,0.08037284);
   new_histo_group_WZ_wh3l_MET_13TeV_events247->SetEntries(244);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_MET_13TeV_events247->SetFillColor(ci);
   new_histo_group_WZ_wh3l_MET_13TeV_events247->SetFillStyle(3001);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_MET_13TeV_events247->SetLineColor(ci);
   new_histo_group_WZ_wh3l_MET_13TeV_events247->GetXaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_MET_13TeV_events247->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_MET_13TeV_events247->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_MET_13TeV_events247->GetXaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_MET_13TeV_events247->GetYaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_MET_13TeV_events247->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_MET_13TeV_events247->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_MET_13TeV_events247->GetYaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_MET_13TeV_events247->GetZaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_MET_13TeV_events247->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_MET_13TeV_events247->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_MET_13TeV_events247->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_13TeV_events->Add(new_histo_group_WZ_wh3l_MET_13TeV_events,"");
   
   TH1D *new_histo_group_Higgs_wh3l_MET_13TeV_events248 = new TH1D("new_histo_group_Higgs_wh3l_MET_13TeV_events248","histo_H_htt",1,0,2);
   new_histo_group_Higgs_wh3l_MET_13TeV_events248->SetBinContent(1,0.4120507);
   new_histo_group_Higgs_wh3l_MET_13TeV_events248->SetBinError(1,0.02099632);
   new_histo_group_Higgs_wh3l_MET_13TeV_events248->SetEntries(741);
   new_histo_group_Higgs_wh3l_MET_13TeV_events248->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_MET_13TeV_events248->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_MET_13TeV_events248->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_MET_13TeV_events248->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_13TeV_events248->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_13TeV_events248->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_13TeV_events248->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_MET_13TeV_events248->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_13TeV_events248->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_13TeV_events248->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_13TeV_events248->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_MET_13TeV_events248->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_13TeV_events248->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_13TeV_events248->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_13TeV_events248->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_13TeV_events->Add(new_histo_group_Higgs_wh3l_MET_13TeV_events,"");
   thsBackground_grouped_wh3l_MET_13TeV_events->Draw("hist same");
   
   thsSignal_grouped_wh3l_MET_13TeV_events = new THStack();
   thsSignal_grouped_wh3l_MET_13TeV_events->SetName("thsSignal_grouped_wh3l_MET_13TeV_events");
   thsSignal_grouped_wh3l_MET_13TeV_events->SetTitle("thsSignal_grouped_wh3l_MET_13TeV_events");
   
   TH1F *thsSignal_grouped_wh3l_MET_13TeV_events_stack_50 = new TH1F("thsSignal_grouped_wh3l_MET_13TeV_events_stack_50","thsSignal_grouped_wh3l_MET_13TeV_events",1,0,2);
   thsSignal_grouped_wh3l_MET_13TeV_events_stack_50->SetMinimum(0);
   thsSignal_grouped_wh3l_MET_13TeV_events_stack_50->SetMaximum(0.4546993);
   thsSignal_grouped_wh3l_MET_13TeV_events_stack_50->SetDirectory(0);
   thsSignal_grouped_wh3l_MET_13TeV_events_stack_50->SetStats(0);
   thsSignal_grouped_wh3l_MET_13TeV_events_stack_50->SetLineStyle(0);
   thsSignal_grouped_wh3l_MET_13TeV_events_stack_50->SetMarkerStyle(20);
   thsSignal_grouped_wh3l_MET_13TeV_events_stack_50->GetXaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_MET_13TeV_events_stack_50->GetXaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_MET_13TeV_events_stack_50->GetXaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_MET_13TeV_events_stack_50->GetXaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_MET_13TeV_events_stack_50->GetXaxis()->SetTitleOffset(0.9);
   thsSignal_grouped_wh3l_MET_13TeV_events_stack_50->GetXaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_MET_13TeV_events_stack_50->GetYaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_MET_13TeV_events_stack_50->GetYaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_MET_13TeV_events_stack_50->GetYaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_MET_13TeV_events_stack_50->GetYaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_MET_13TeV_events_stack_50->GetYaxis()->SetTitleOffset(1.25);
   thsSignal_grouped_wh3l_MET_13TeV_events_stack_50->GetYaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_MET_13TeV_events_stack_50->GetZaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_MET_13TeV_events_stack_50->GetZaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_MET_13TeV_events_stack_50->GetZaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_MET_13TeV_events_stack_50->GetZaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_MET_13TeV_events_stack_50->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_MET_13TeV_events->SetHistogram(thsSignal_grouped_wh3l_MET_13TeV_events_stack_50);
   
   
   TH1D *new_histo_group_Higgs_wh3l_MET_13TeV_events249 = new TH1D("new_histo_group_Higgs_wh3l_MET_13TeV_events249","histo_H_htt",1,0,2);
   new_histo_group_Higgs_wh3l_MET_13TeV_events249->SetBinContent(1,0.4120507);
   new_histo_group_Higgs_wh3l_MET_13TeV_events249->SetBinError(1,0.02099632);
   new_histo_group_Higgs_wh3l_MET_13TeV_events249->SetEntries(741);
   new_histo_group_Higgs_wh3l_MET_13TeV_events249->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_MET_13TeV_events249->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_MET_13TeV_events249->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_MET_13TeV_events249->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_13TeV_events249->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_13TeV_events249->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_13TeV_events249->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_MET_13TeV_events249->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_13TeV_events249->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_13TeV_events249->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_13TeV_events249->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_MET_13TeV_events249->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_13TeV_events249->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_13TeV_events249->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_13TeV_events249->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_MET_13TeV_events->Add(new_histo_group_Higgs_wh3l_MET_13TeV_events,"");
   thsSignal_grouped_wh3l_MET_13TeV_events->Draw("hist same noclear");
   
   Double_t _fx3049[1] = {
   1};
   Double_t _fy3049[1] = {
   21.08974};
   Double_t _felx3049[1] = {
   1};
   Double_t _fely3049[1] = {
   7.522845};
   Double_t _fehx3049[1] = {
   1};
   Double_t _fehy3049[1] = {
   7.53336};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(1,_fx3049,_fy3049,_felx3049,_fehx3049,_fely3049,_fehy3049);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(12);
   grae->SetFillStyle(3004);
   grae->SetLineColor(12);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3049 = new TH1F("Graph_Graph3049","",100,0,2.2);
   Graph_Graph3049->SetMinimum(12.06128);
   Graph_Graph3049->SetMaximum(30.12872);
   Graph_Graph3049->SetDirectory(0);
   Graph_Graph3049->SetStats(0);
   Graph_Graph3049->SetLineStyle(0);
   Graph_Graph3049->SetMarkerStyle(20);
   Graph_Graph3049->GetXaxis()->SetLabelFont(42);
   Graph_Graph3049->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3049->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3049->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3049->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3049->GetXaxis()->SetTitleFont(42);
   Graph_Graph3049->GetYaxis()->SetLabelFont(42);
   Graph_Graph3049->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3049->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3049->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3049->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3049->GetYaxis()->SetTitleFont(42);
   Graph_Graph3049->GetZaxis()->SetLabelFont(42);
   Graph_Graph3049->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3049->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3049->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3049->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3049);
   
   grae->Draw("2");
   
   Double_t _fx3050[1] = {
   1};
   Double_t _fy3050[1] = {
   12};
   Double_t _felx3050[1] = {
   1};
   Double_t _fely3050[1] = {
   3.415326};
   Double_t _fehx3050[1] = {
   1};
   Double_t _fehy3050[1] = {
   4.559911};
   grae = new TGraphAsymmErrors(1,_fx3050,_fy3050,_felx3050,_fehx3050,_fely3050,_fehy3050);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(1);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3050 = new TH1F("Graph_Graph3050","",100,0,2.2);
   Graph_Graph3050->SetMinimum(7.78715);
   Graph_Graph3050->SetMaximum(17.35743);
   Graph_Graph3050->SetDirectory(0);
   Graph_Graph3050->SetStats(0);
   Graph_Graph3050->SetLineStyle(0);
   Graph_Graph3050->SetMarkerStyle(20);
   Graph_Graph3050->GetXaxis()->SetLabelFont(42);
   Graph_Graph3050->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3050->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3050->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3050->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3050->GetXaxis()->SetTitleFont(42);
   Graph_Graph3050->GetYaxis()->SetLabelFont(42);
   Graph_Graph3050->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3050->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3050->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3050->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3050->GetYaxis()->SetTitleFont(42);
   Graph_Graph3050->GetZaxis()->SetLabelFont(42);
   Graph_Graph3050->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3050->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3050->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3050->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3050);
   
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
   
   TH1F *hframe_copy250 = new TH1F("hframe_copy250","",1000,0,2);
   hframe_copy250->SetMinimum(0);
   hframe_copy250->SetMaximum(53.75448);
   hframe_copy250->SetDirectory(0);
   hframe_copy250->SetStats(0);
   hframe_copy250->SetLineStyle(0);
   hframe_copy250->SetMarkerStyle(20);
   hframe_copy250->GetXaxis()->SetTitle("events");
   hframe_copy250->GetXaxis()->SetNdivisions(506);
   hframe_copy250->GetXaxis()->SetLabelFont(42);
   hframe_copy250->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy250->GetXaxis()->SetLabelSize(0.05);
   hframe_copy250->GetXaxis()->SetTitleSize(0.06);
   hframe_copy250->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy250->GetXaxis()->SetTitleFont(42);
   hframe_copy250->GetYaxis()->SetTitle("Events");
   hframe_copy250->GetYaxis()->SetLabelFont(42);
   hframe_copy250->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy250->GetYaxis()->SetLabelSize(0.05);
   hframe_copy250->GetYaxis()->SetTitleSize(0.06);
   hframe_copy250->GetYaxis()->SetTitleOffset(1.25);
   hframe_copy250->GetYaxis()->SetTitleFont(42);
   hframe_copy250->GetZaxis()->SetLabelFont(42);
   hframe_copy250->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy250->GetZaxis()->SetLabelSize(0.05);
   hframe_copy250->GetZaxis()->SetTitleSize(0.06);
   hframe_copy250->GetZaxis()->SetTitleFont(42);
   hframe_copy250->Draw("sameaxis");
   ccwh3l_MET_13TeV_events->Modified();
   ccwh3l_MET_13TeV_events->cd();
   ccwh3l_MET_13TeV_events->SetSelected(ccwh3l_MET_13TeV_events);
}
