void c_wh3l_zg_13TeV_events()
{
//=========Macro generated from canvas: ccwh3l_zg_13TeV_events/cc
//=========  (Sun Jul  3 02:18:06 2016) by ROOT version6.02/13
   TCanvas *ccwh3l_zg_13TeV_events = new TCanvas("ccwh3l_zg_13TeV_events", "cc",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   ccwh3l_zg_13TeV_events->SetHighLightColor(2);
   ccwh3l_zg_13TeV_events->Range(-0.4,-57.28425,2.1,383.3638);
   ccwh3l_zg_13TeV_events->SetFillColor(0);
   ccwh3l_zg_13TeV_events->SetBorderMode(0);
   ccwh3l_zg_13TeV_events->SetBorderSize(2);
   ccwh3l_zg_13TeV_events->SetTickx(1);
   ccwh3l_zg_13TeV_events->SetTicky(1);
   ccwh3l_zg_13TeV_events->SetLeftMargin(0.16);
   ccwh3l_zg_13TeV_events->SetRightMargin(0.04);
   ccwh3l_zg_13TeV_events->SetTopMargin(0.05);
   ccwh3l_zg_13TeV_events->SetBottomMargin(0.13);
   ccwh3l_zg_13TeV_events->SetFrameFillStyle(0);
   ccwh3l_zg_13TeV_events->SetFrameBorderMode(0);
   ccwh3l_zg_13TeV_events->SetFrameFillStyle(0);
   ccwh3l_zg_13TeV_events->SetFrameBorderMode(0);
   
   TH1F *hframe101 = new TH1F("hframe101","",1000,0,2);
   hframe101->SetMinimum(0);
   hframe101->SetMaximum(361.3314);
   hframe101->SetDirectory(0);
   hframe101->SetStats(0);
   hframe101->SetLineStyle(0);
   hframe101->SetMarkerStyle(20);
   hframe101->GetXaxis()->SetTitle("events");
   hframe101->GetXaxis()->SetNdivisions(506);
   hframe101->GetXaxis()->SetLabelFont(42);
   hframe101->GetXaxis()->SetLabelOffset(0.007);
   hframe101->GetXaxis()->SetLabelSize(0.05);
   hframe101->GetXaxis()->SetTitleSize(0.06);
   hframe101->GetXaxis()->SetTitleOffset(0.9);
   hframe101->GetXaxis()->SetTitleFont(42);
   hframe101->GetYaxis()->SetTitle("Events");
   hframe101->GetYaxis()->SetLabelFont(42);
   hframe101->GetYaxis()->SetLabelOffset(0.007);
   hframe101->GetYaxis()->SetLabelSize(0.05);
   hframe101->GetYaxis()->SetTitleSize(0.06);
   hframe101->GetYaxis()->SetTitleOffset(1.25);
   hframe101->GetYaxis()->SetTitleFont(42);
   hframe101->GetZaxis()->SetLabelFont(42);
   hframe101->GetZaxis()->SetLabelOffset(0.007);
   hframe101->GetZaxis()->SetLabelSize(0.05);
   hframe101->GetZaxis()->SetTitleSize(0.06);
   hframe101->GetZaxis()->SetTitleFont(42);
   hframe101->Draw(" ");
   
   THStack *thsBackground_grouped_wh3l_zg_13TeV_events = new THStack();
   thsBackground_grouped_wh3l_zg_13TeV_events->SetName("thsBackground_grouped_wh3l_zg_13TeV_events");
   thsBackground_grouped_wh3l_zg_13TeV_events->SetTitle("thsBackground_grouped_wh3l_zg_13TeV_events");
   
   TH1F *thsBackground_grouped_wh3l_zg_13TeV_events_stack_21 = new TH1F("thsBackground_grouped_wh3l_zg_13TeV_events_stack_21","thsBackground_grouped_wh3l_zg_13TeV_events",1,0,2);
   thsBackground_grouped_wh3l_zg_13TeV_events_stack_21->SetMinimum(0);
   thsBackground_grouped_wh3l_zg_13TeV_events_stack_21->SetMaximum(136.6394);
   thsBackground_grouped_wh3l_zg_13TeV_events_stack_21->SetDirectory(0);
   thsBackground_grouped_wh3l_zg_13TeV_events_stack_21->SetStats(0);
   thsBackground_grouped_wh3l_zg_13TeV_events_stack_21->SetLineStyle(0);
   thsBackground_grouped_wh3l_zg_13TeV_events_stack_21->SetMarkerStyle(20);
   thsBackground_grouped_wh3l_zg_13TeV_events_stack_21->GetXaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_events_stack_21->GetXaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_zg_13TeV_events_stack_21->GetXaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_zg_13TeV_events_stack_21->GetXaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_zg_13TeV_events_stack_21->GetXaxis()->SetTitleOffset(0.9);
   thsBackground_grouped_wh3l_zg_13TeV_events_stack_21->GetXaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_events_stack_21->GetYaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_events_stack_21->GetYaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_zg_13TeV_events_stack_21->GetYaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_zg_13TeV_events_stack_21->GetYaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_zg_13TeV_events_stack_21->GetYaxis()->SetTitleOffset(1.25);
   thsBackground_grouped_wh3l_zg_13TeV_events_stack_21->GetYaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_events_stack_21->GetZaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_events_stack_21->GetZaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_zg_13TeV_events_stack_21->GetZaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_zg_13TeV_events_stack_21->GetZaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_zg_13TeV_events_stack_21->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_events->SetHistogram(thsBackground_grouped_wh3l_zg_13TeV_events_stack_21);
   
   
   TH1D *new_histo_group_Fake_wh3l_zg_13TeV_events102 = new TH1D("new_histo_group_Fake_wh3l_zg_13TeV_events102","histo_Fake",1,0,2);
   new_histo_group_Fake_wh3l_zg_13TeV_events102->SetBinContent(1,23.5808);
   new_histo_group_Fake_wh3l_zg_13TeV_events102->SetBinError(1,4.301121);
   new_histo_group_Fake_wh3l_zg_13TeV_events102->SetEntries(460);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_zg_13TeV_events102->SetFillColor(ci);
   new_histo_group_Fake_wh3l_zg_13TeV_events102->SetFillStyle(3001);

   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_zg_13TeV_events102->SetLineColor(ci);
   new_histo_group_Fake_wh3l_zg_13TeV_events102->GetXaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_zg_13TeV_events102->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_zg_13TeV_events102->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_zg_13TeV_events102->GetXaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_zg_13TeV_events102->GetYaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_zg_13TeV_events102->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_zg_13TeV_events102->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_zg_13TeV_events102->GetYaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_zg_13TeV_events102->GetZaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_zg_13TeV_events102->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_zg_13TeV_events102->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_zg_13TeV_events102->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_events->Add(new_histo_group_Fake_wh3l_zg_13TeV_events,"");
   
   TH1D *new_histo_group_WW_wh3l_zg_13TeV_events103 = new TH1D("new_histo_group_WW_wh3l_zg_13TeV_events103","histo_WW",1,0,2);
   new_histo_group_WW_wh3l_zg_13TeV_events103->SetBinContent(1,0.009961222);
   new_histo_group_WW_wh3l_zg_13TeV_events103->SetBinError(1,0.009961222);
   new_histo_group_WW_wh3l_zg_13TeV_events103->SetEntries(1);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_zg_13TeV_events103->SetFillColor(ci);
   new_histo_group_WW_wh3l_zg_13TeV_events103->SetFillStyle(3001);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_zg_13TeV_events103->SetLineColor(ci);
   new_histo_group_WW_wh3l_zg_13TeV_events103->GetXaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_zg_13TeV_events103->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_zg_13TeV_events103->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_zg_13TeV_events103->GetXaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_zg_13TeV_events103->GetYaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_zg_13TeV_events103->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_zg_13TeV_events103->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_zg_13TeV_events103->GetYaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_zg_13TeV_events103->GetZaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_zg_13TeV_events103->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_zg_13TeV_events103->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_zg_13TeV_events103->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_events->Add(new_histo_group_WW_wh3l_zg_13TeV_events,"");
   
   TH1D *new_histo_group_VVV_wh3l_zg_13TeV_events104 = new TH1D("new_histo_group_VVV_wh3l_zg_13TeV_events104","histo_VVV",1,0,2);
   new_histo_group_VVV_wh3l_zg_13TeV_events104->SetBinContent(1,0.01448303);
   new_histo_group_VVV_wh3l_zg_13TeV_events104->SetBinError(1,0.006262887);
   new_histo_group_VVV_wh3l_zg_13TeV_events104->SetEntries(7);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_zg_13TeV_events104->SetFillColor(ci);
   new_histo_group_VVV_wh3l_zg_13TeV_events104->SetFillStyle(3001);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_zg_13TeV_events104->SetLineColor(ci);
   new_histo_group_VVV_wh3l_zg_13TeV_events104->GetXaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_zg_13TeV_events104->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_zg_13TeV_events104->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_zg_13TeV_events104->GetXaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_zg_13TeV_events104->GetYaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_zg_13TeV_events104->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_zg_13TeV_events104->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_zg_13TeV_events104->GetYaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_zg_13TeV_events104->GetZaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_zg_13TeV_events104->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_zg_13TeV_events104->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_zg_13TeV_events104->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_events->Add(new_histo_group_VVV_wh3l_zg_13TeV_events,"");
   
   TH1D *new_histo_group_Vg_wh3l_zg_13TeV_events105 = new TH1D("new_histo_group_Vg_wh3l_zg_13TeV_events105","histo_Vg",1,0,2);
   new_histo_group_Vg_wh3l_zg_13TeV_events105->SetBinContent(1,103.9668);
   new_histo_group_Vg_wh3l_zg_13TeV_events105->SetBinError(1,3.859601);
   new_histo_group_Vg_wh3l_zg_13TeV_events105->SetEntries(1376);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_zg_13TeV_events105->SetFillColor(ci);
   new_histo_group_Vg_wh3l_zg_13TeV_events105->SetFillStyle(3001);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_zg_13TeV_events105->SetLineColor(ci);
   new_histo_group_Vg_wh3l_zg_13TeV_events105->GetXaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_zg_13TeV_events105->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_zg_13TeV_events105->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_zg_13TeV_events105->GetXaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_zg_13TeV_events105->GetYaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_zg_13TeV_events105->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_zg_13TeV_events105->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_zg_13TeV_events105->GetYaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_zg_13TeV_events105->GetZaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_zg_13TeV_events105->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_zg_13TeV_events105->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_zg_13TeV_events105->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_events->Add(new_histo_group_Vg_wh3l_zg_13TeV_events,"");
   
   TH1D *new_histo_group_ZZ_wh3l_zg_13TeV_events106 = new TH1D("new_histo_group_ZZ_wh3l_zg_13TeV_events106","histo_ZZ",1,0,2);
   new_histo_group_ZZ_wh3l_zg_13TeV_events106->SetBinContent(1,0.5933684);
   new_histo_group_ZZ_wh3l_zg_13TeV_events106->SetBinError(1,0.1549259);
   new_histo_group_ZZ_wh3l_zg_13TeV_events106->SetEntries(16);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_zg_13TeV_events106->SetFillColor(ci);
   new_histo_group_ZZ_wh3l_zg_13TeV_events106->SetFillStyle(3001);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_zg_13TeV_events106->SetLineColor(ci);
   new_histo_group_ZZ_wh3l_zg_13TeV_events106->GetXaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_zg_13TeV_events106->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_zg_13TeV_events106->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_zg_13TeV_events106->GetXaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_zg_13TeV_events106->GetYaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_zg_13TeV_events106->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_zg_13TeV_events106->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_zg_13TeV_events106->GetYaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_zg_13TeV_events106->GetZaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_zg_13TeV_events106->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_zg_13TeV_events106->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_zg_13TeV_events106->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_events->Add(new_histo_group_ZZ_wh3l_zg_13TeV_events,"");
   
   TH1D *new_histo_group_WZ_wh3l_zg_13TeV_events107 = new TH1D("new_histo_group_WZ_wh3l_zg_13TeV_events107","histo_WZ",1,0,2);
   new_histo_group_WZ_wh3l_zg_13TeV_events107->SetBinContent(1,1.878524);
   new_histo_group_WZ_wh3l_zg_13TeV_events107->SetBinError(1,0.101118);
   new_histo_group_WZ_wh3l_zg_13TeV_events107->SetEntries(376);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_zg_13TeV_events107->SetFillColor(ci);
   new_histo_group_WZ_wh3l_zg_13TeV_events107->SetFillStyle(3001);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_zg_13TeV_events107->SetLineColor(ci);
   new_histo_group_WZ_wh3l_zg_13TeV_events107->GetXaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_zg_13TeV_events107->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_zg_13TeV_events107->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_zg_13TeV_events107->GetXaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_zg_13TeV_events107->GetYaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_zg_13TeV_events107->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_zg_13TeV_events107->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_zg_13TeV_events107->GetYaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_zg_13TeV_events107->GetZaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_zg_13TeV_events107->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_zg_13TeV_events107->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_zg_13TeV_events107->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_events->Add(new_histo_group_WZ_wh3l_zg_13TeV_events,"");
   
   TH1D *new_histo_group_Higgs_wh3l_zg_13TeV_events108 = new TH1D("new_histo_group_Higgs_wh3l_zg_13TeV_events108","histo_H_htt",1,0,2);
   new_histo_group_Higgs_wh3l_zg_13TeV_events108->SetBinContent(1,0.08877665);
   new_histo_group_Higgs_wh3l_zg_13TeV_events108->SetBinError(1,0.009751691);
   new_histo_group_Higgs_wh3l_zg_13TeV_events108->SetEntries(180);
   new_histo_group_Higgs_wh3l_zg_13TeV_events108->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_zg_13TeV_events108->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_zg_13TeV_events108->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_zg_13TeV_events108->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_zg_13TeV_events108->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_zg_13TeV_events108->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_zg_13TeV_events108->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_zg_13TeV_events108->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_zg_13TeV_events108->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_zg_13TeV_events108->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_zg_13TeV_events108->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_zg_13TeV_events108->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_zg_13TeV_events108->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_zg_13TeV_events108->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_zg_13TeV_events108->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_events->Add(new_histo_group_Higgs_wh3l_zg_13TeV_events,"");
   thsBackground_grouped_wh3l_zg_13TeV_events->Draw("hist same");
   
   thsSignal_grouped_wh3l_zg_13TeV_events = new THStack();
   thsSignal_grouped_wh3l_zg_13TeV_events->SetName("thsSignal_grouped_wh3l_zg_13TeV_events");
   thsSignal_grouped_wh3l_zg_13TeV_events->SetTitle("thsSignal_grouped_wh3l_zg_13TeV_events");
   
   TH1F *thsSignal_grouped_wh3l_zg_13TeV_events_stack_22 = new TH1F("thsSignal_grouped_wh3l_zg_13TeV_events_stack_22","thsSignal_grouped_wh3l_zg_13TeV_events",1,0,2);
   thsSignal_grouped_wh3l_zg_13TeV_events_stack_22->SetMinimum(0);
   thsSignal_grouped_wh3l_zg_13TeV_events_stack_22->SetMaximum(0.1034548);
   thsSignal_grouped_wh3l_zg_13TeV_events_stack_22->SetDirectory(0);
   thsSignal_grouped_wh3l_zg_13TeV_events_stack_22->SetStats(0);
   thsSignal_grouped_wh3l_zg_13TeV_events_stack_22->SetLineStyle(0);
   thsSignal_grouped_wh3l_zg_13TeV_events_stack_22->SetMarkerStyle(20);
   thsSignal_grouped_wh3l_zg_13TeV_events_stack_22->GetXaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_zg_13TeV_events_stack_22->GetXaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_zg_13TeV_events_stack_22->GetXaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_zg_13TeV_events_stack_22->GetXaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_zg_13TeV_events_stack_22->GetXaxis()->SetTitleOffset(0.9);
   thsSignal_grouped_wh3l_zg_13TeV_events_stack_22->GetXaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_zg_13TeV_events_stack_22->GetYaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_zg_13TeV_events_stack_22->GetYaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_zg_13TeV_events_stack_22->GetYaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_zg_13TeV_events_stack_22->GetYaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_zg_13TeV_events_stack_22->GetYaxis()->SetTitleOffset(1.25);
   thsSignal_grouped_wh3l_zg_13TeV_events_stack_22->GetYaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_zg_13TeV_events_stack_22->GetZaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_zg_13TeV_events_stack_22->GetZaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_zg_13TeV_events_stack_22->GetZaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_zg_13TeV_events_stack_22->GetZaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_zg_13TeV_events_stack_22->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_zg_13TeV_events->SetHistogram(thsSignal_grouped_wh3l_zg_13TeV_events_stack_22);
   
   
   TH1D *new_histo_group_Higgs_wh3l_zg_13TeV_events109 = new TH1D("new_histo_group_Higgs_wh3l_zg_13TeV_events109","histo_H_htt",1,0,2);
   new_histo_group_Higgs_wh3l_zg_13TeV_events109->SetBinContent(1,0.08877665);
   new_histo_group_Higgs_wh3l_zg_13TeV_events109->SetBinError(1,0.009751691);
   new_histo_group_Higgs_wh3l_zg_13TeV_events109->SetEntries(180);
   new_histo_group_Higgs_wh3l_zg_13TeV_events109->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_zg_13TeV_events109->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_zg_13TeV_events109->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_zg_13TeV_events109->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_zg_13TeV_events109->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_zg_13TeV_events109->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_zg_13TeV_events109->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_zg_13TeV_events109->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_zg_13TeV_events109->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_zg_13TeV_events109->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_zg_13TeV_events109->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_zg_13TeV_events109->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_zg_13TeV_events109->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_zg_13TeV_events109->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_zg_13TeV_events109->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_zg_13TeV_events->Add(new_histo_group_Higgs_wh3l_zg_13TeV_events,"");
   thsSignal_grouped_wh3l_zg_13TeV_events->Draw("hist same noclear");
   
   Double_t _fx3021[1] = {
   1};
   Double_t _fy3021[1] = {
   130.044};
   Double_t _felx3021[1] = {
   1};
   Double_t _fely3021[1] = {
   12.79439};
   Double_t _fehx3021[1] = {
   1};
   Double_t _fehy3021[1] = {
   12.76388};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(1,_fx3021,_fy3021,_felx3021,_fehx3021,_fely3021,_fehy3021);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(12);
   grae->SetFillStyle(3004);
   grae->SetLineColor(12);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3021 = new TH1F("Graph_Graph3021","",100,0,2.2);
   Graph_Graph3021->SetMinimum(114.6938);
   Graph_Graph3021->SetMaximum(145.3637);
   Graph_Graph3021->SetDirectory(0);
   Graph_Graph3021->SetStats(0);
   Graph_Graph3021->SetLineStyle(0);
   Graph_Graph3021->SetMarkerStyle(20);
   Graph_Graph3021->GetXaxis()->SetLabelFont(42);
   Graph_Graph3021->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3021->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3021->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3021->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3021->GetXaxis()->SetTitleFont(42);
   Graph_Graph3021->GetYaxis()->SetLabelFont(42);
   Graph_Graph3021->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3021->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3021->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3021->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3021->GetYaxis()->SetTitleFont(42);
   Graph_Graph3021->GetZaxis()->SetLabelFont(42);
   Graph_Graph3021->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3021->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3021->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3021->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3021);
   
   grae->Draw("2");
   
   Double_t _fx3022[1] = {
   1};
   Double_t _fy3022[1] = {
   133};
   Double_t _felx3022[1] = {
   1};
   Double_t _fely3022[1] = {
   11.51829};
   Double_t _fehx3022[1] = {
   1};
   Double_t _fehy3022[1] = {
   12.56176};
   grae = new TGraphAsymmErrors(1,_fx3022,_fy3022,_felx3022,_fehx3022,_fely3022,_fehy3022);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(1);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3022 = new TH1F("Graph_Graph3022","",100,0,2.2);
   Graph_Graph3022->SetMinimum(119.0737);
   Graph_Graph3022->SetMaximum(147.9698);
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
   TLegendEntry *entry=leg->AddEntry("new_histo_group_Fake_wh3l_zg_13TeV_events","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_zg_13TeV_events","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_zg_13TeV_events","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_zg_13TeV_events","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_zg_13TeV_events","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_zg_13TeV_events","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_zg_13TeV_events","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_zg_13TeV_events","Data","EPL");
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
   entry=leg->AddEntry("new_histo_group_Fake_wh3l_zg_13TeV_events","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_zg_13TeV_events","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_zg_13TeV_events","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_zg_13TeV_events","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_zg_13TeV_events","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_zg_13TeV_events","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_zg_13TeV_events","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_zg_13TeV_events","Data","EPL");
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
   
   TH1F *hframe_copy110 = new TH1F("hframe_copy110","",1000,0,2);
   hframe_copy110->SetMinimum(0);
   hframe_copy110->SetMaximum(361.3314);
   hframe_copy110->SetDirectory(0);
   hframe_copy110->SetStats(0);
   hframe_copy110->SetLineStyle(0);
   hframe_copy110->SetMarkerStyle(20);
   hframe_copy110->GetXaxis()->SetTitle("events");
   hframe_copy110->GetXaxis()->SetNdivisions(506);
   hframe_copy110->GetXaxis()->SetLabelFont(42);
   hframe_copy110->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy110->GetXaxis()->SetLabelSize(0.05);
   hframe_copy110->GetXaxis()->SetTitleSize(0.06);
   hframe_copy110->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy110->GetXaxis()->SetTitleFont(42);
   hframe_copy110->GetYaxis()->SetTitle("Events");
   hframe_copy110->GetYaxis()->SetLabelFont(42);
   hframe_copy110->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy110->GetYaxis()->SetLabelSize(0.05);
   hframe_copy110->GetYaxis()->SetTitleSize(0.06);
   hframe_copy110->GetYaxis()->SetTitleOffset(1.25);
   hframe_copy110->GetYaxis()->SetTitleFont(42);
   hframe_copy110->GetZaxis()->SetLabelFont(42);
   hframe_copy110->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy110->GetZaxis()->SetLabelSize(0.05);
   hframe_copy110->GetZaxis()->SetTitleSize(0.06);
   hframe_copy110->GetZaxis()->SetTitleFont(42);
   hframe_copy110->Draw("sameaxis");
   ccwh3l_zg_13TeV_events->Modified();
   ccwh3l_zg_13TeV_events->cd();
   ccwh3l_zg_13TeV_events->SetSelected(ccwh3l_zg_13TeV_events);
}
