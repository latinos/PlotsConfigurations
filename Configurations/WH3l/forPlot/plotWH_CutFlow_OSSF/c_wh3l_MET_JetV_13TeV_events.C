void c_wh3l_MET_JetV_13TeV_events()
{
//=========Macro generated from canvas: ccwh3l_MET_JetV_13TeV_events/cc
//=========  (Sat Jul  2 21:43:31 2016) by ROOT version6.02/13
   TCanvas *ccwh3l_MET_JetV_13TeV_events = new TCanvas("ccwh3l_MET_JetV_13TeV_events", "cc",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   ccwh3l_MET_JetV_13TeV_events->SetHighLightColor(2);
   ccwh3l_MET_JetV_13TeV_events->Range(-0.4,-80.76807,2.1,540.5248);
   ccwh3l_MET_JetV_13TeV_events->SetFillColor(0);
   ccwh3l_MET_JetV_13TeV_events->SetBorderMode(0);
   ccwh3l_MET_JetV_13TeV_events->SetBorderSize(2);
   ccwh3l_MET_JetV_13TeV_events->SetTickx(1);
   ccwh3l_MET_JetV_13TeV_events->SetTicky(1);
   ccwh3l_MET_JetV_13TeV_events->SetLeftMargin(0.16);
   ccwh3l_MET_JetV_13TeV_events->SetRightMargin(0.04);
   ccwh3l_MET_JetV_13TeV_events->SetTopMargin(0.05);
   ccwh3l_MET_JetV_13TeV_events->SetBottomMargin(0.13);
   ccwh3l_MET_JetV_13TeV_events->SetFrameFillStyle(0);
   ccwh3l_MET_JetV_13TeV_events->SetFrameBorderMode(0);
   ccwh3l_MET_JetV_13TeV_events->SetFrameFillStyle(0);
   ccwh3l_MET_JetV_13TeV_events->SetFrameBorderMode(0);
   
   TH1F *hframe111 = new TH1F("hframe111","",1000,0,2);
   hframe111->SetMinimum(0);
   hframe111->SetMaximum(509.4601);
   hframe111->SetDirectory(0);
   hframe111->SetStats(0);
   hframe111->SetLineStyle(0);
   hframe111->SetMarkerStyle(20);
   hframe111->GetXaxis()->SetTitle("events");
   hframe111->GetXaxis()->SetNdivisions(506);
   hframe111->GetXaxis()->SetLabelFont(42);
   hframe111->GetXaxis()->SetLabelOffset(0.007);
   hframe111->GetXaxis()->SetLabelSize(0.05);
   hframe111->GetXaxis()->SetTitleSize(0.06);
   hframe111->GetXaxis()->SetTitleOffset(0.9);
   hframe111->GetXaxis()->SetTitleFont(42);
   hframe111->GetYaxis()->SetTitle("Events");
   hframe111->GetYaxis()->SetLabelFont(42);
   hframe111->GetYaxis()->SetLabelOffset(0.007);
   hframe111->GetYaxis()->SetLabelSize(0.05);
   hframe111->GetYaxis()->SetTitleSize(0.06);
   hframe111->GetYaxis()->SetTitleOffset(1.25);
   hframe111->GetYaxis()->SetTitleFont(42);
   hframe111->GetZaxis()->SetLabelFont(42);
   hframe111->GetZaxis()->SetLabelOffset(0.007);
   hframe111->GetZaxis()->SetLabelSize(0.05);
   hframe111->GetZaxis()->SetTitleSize(0.06);
   hframe111->GetZaxis()->SetTitleFont(42);
   hframe111->Draw(" ");
   
   THStack *thsBackground_grouped_wh3l_MET_JetV_13TeV_events = new THStack();
   thsBackground_grouped_wh3l_MET_JetV_13TeV_events->SetName("thsBackground_grouped_wh3l_MET_JetV_13TeV_events");
   thsBackground_grouped_wh3l_MET_JetV_13TeV_events->SetTitle("thsBackground_grouped_wh3l_MET_JetV_13TeV_events");
   
   TH1F *thsBackground_grouped_wh3l_MET_JetV_13TeV_events_stack_23 = new TH1F("thsBackground_grouped_wh3l_MET_JetV_13TeV_events_stack_23","thsBackground_grouped_wh3l_MET_JetV_13TeV_events",1,0,2);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_events_stack_23->SetMinimum(0);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_events_stack_23->SetMaximum(161.0368);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_events_stack_23->SetDirectory(0);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_events_stack_23->SetStats(0);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_events_stack_23->SetLineStyle(0);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_events_stack_23->SetMarkerStyle(20);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_events_stack_23->GetXaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_events_stack_23->GetXaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_events_stack_23->GetXaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_events_stack_23->GetXaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_events_stack_23->GetXaxis()->SetTitleOffset(0.9);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_events_stack_23->GetXaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_events_stack_23->GetYaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_events_stack_23->GetYaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_events_stack_23->GetYaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_events_stack_23->GetYaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_events_stack_23->GetYaxis()->SetTitleOffset(1.25);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_events_stack_23->GetYaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_events_stack_23->GetZaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_events_stack_23->GetZaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_events_stack_23->GetZaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_events_stack_23->GetZaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_events_stack_23->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_events->SetHistogram(thsBackground_grouped_wh3l_MET_JetV_13TeV_events_stack_23);
   
   
   TH1D *new_histo_group_Fake_wh3l_MET_JetV_13TeV_events112 = new TH1D("new_histo_group_Fake_wh3l_MET_JetV_13TeV_events112","histo_Fake",1,0,2);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_events112->SetBinContent(1,18.17825);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_events112->SetBinError(1,4.026972);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_events112->SetEntries(425);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_events112->SetFillColor(ci);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_events112->SetFillStyle(3001);

   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_events112->SetLineColor(ci);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_events112->GetXaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_events112->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_events112->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_events112->GetXaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_events112->GetYaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_events112->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_events112->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_events112->GetYaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_events112->GetZaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_events112->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_events112->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_events112->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_events->Add(new_histo_group_Fake_wh3l_MET_JetV_13TeV_events,"");
   
   TH1D *new_histo_group_WW_wh3l_MET_JetV_13TeV_events113 = new TH1D("new_histo_group_WW_wh3l_MET_JetV_13TeV_events113","histo_WW",1,0,2);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_events113->SetBinContent(1,0.1479726);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_events113->SetBinError(1,0.04747452);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_events113->SetEntries(10);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_MET_JetV_13TeV_events113->SetFillColor(ci);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_events113->SetFillStyle(3001);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_MET_JetV_13TeV_events113->SetLineColor(ci);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_events113->GetXaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_events113->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_events113->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_events113->GetXaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_events113->GetYaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_events113->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_events113->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_events113->GetYaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_events113->GetZaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_events113->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_events113->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_events113->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_events->Add(new_histo_group_WW_wh3l_MET_JetV_13TeV_events,"");
   
   TH1D *new_histo_group_VVV_wh3l_MET_JetV_13TeV_events114 = new TH1D("new_histo_group_VVV_wh3l_MET_JetV_13TeV_events114","histo_VVV",1,0,2);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_events114->SetBinContent(1,0.897712);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_events114->SetBinError(1,0.04361753);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_events114->SetEntries(739);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_events114->SetFillColor(ci);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_events114->SetFillStyle(3001);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_events114->SetLineColor(ci);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_events114->GetXaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_events114->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_events114->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_events114->GetXaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_events114->GetYaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_events114->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_events114->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_events114->GetYaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_events114->GetZaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_events114->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_events114->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_events114->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_events->Add(new_histo_group_VVV_wh3l_MET_JetV_13TeV_events,"");
   
   TH1D *new_histo_group_Vg_wh3l_MET_JetV_13TeV_events115 = new TH1D("new_histo_group_Vg_wh3l_MET_JetV_13TeV_events115","histo_Vg",1,0,2);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_events115->SetBinContent(1,7.741773);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_events115->SetBinError(1,0.9827464);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_events115->SetEntries(106);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_events115->SetFillColor(ci);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_events115->SetFillStyle(3001);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_events115->SetLineColor(ci);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_events115->GetXaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_events115->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_events115->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_events115->GetXaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_events115->GetYaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_events115->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_events115->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_events115->GetYaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_events115->GetZaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_events115->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_events115->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_events115->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_events->Add(new_histo_group_Vg_wh3l_MET_JetV_13TeV_events,"");
   
   TH1D *new_histo_group_ZZ_wh3l_MET_JetV_13TeV_events116 = new TH1D("new_histo_group_ZZ_wh3l_MET_JetV_13TeV_events116","histo_ZZ",1,0,2);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_events116->SetBinContent(1,7.350997);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_events116->SetBinError(1,0.5547102);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_events116->SetEntries(198);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_events116->SetFillColor(ci);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_events116->SetFillStyle(3001);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_events116->SetLineColor(ci);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_events116->GetXaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_events116->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_events116->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_events116->GetXaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_events116->GetYaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_events116->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_events116->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_events116->GetYaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_events116->GetZaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_events116->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_events116->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_events116->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_events->Add(new_histo_group_ZZ_wh3l_MET_JetV_13TeV_events,"");
   
   TH1D *new_histo_group_WZ_wh3l_MET_JetV_13TeV_events117 = new TH1D("new_histo_group_WZ_wh3l_MET_JetV_13TeV_events117","histo_WZ",1,0,2);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_events117->SetBinContent(1,117.5748);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_events117->SetBinError(1,0.7994261);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_events117->SetEntries(23985);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_events117->SetFillColor(ci);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_events117->SetFillStyle(3001);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_events117->SetLineColor(ci);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_events117->GetXaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_events117->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_events117->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_events117->GetXaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_events117->GetYaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_events117->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_events117->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_events117->GetYaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_events117->GetZaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_events117->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_events117->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_events117->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_events->Add(new_histo_group_WZ_wh3l_MET_JetV_13TeV_events,"");
   
   TH1D *new_histo_group_Higgs_wh3l_MET_JetV_13TeV_events118 = new TH1D("new_histo_group_Higgs_wh3l_MET_JetV_13TeV_events118","histo_H_htt",1,0,2);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_events118->SetBinContent(1,1.4769);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_events118->SetBinError(1,0.04180294);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_events118->SetEntries(2204);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_events118->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_events118->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_events118->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_events118->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_events118->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_events118->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_events118->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_events118->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_events118->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_events118->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_events118->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_events118->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_events118->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_events118->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_events118->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_events->Add(new_histo_group_Higgs_wh3l_MET_JetV_13TeV_events,"");
   thsBackground_grouped_wh3l_MET_JetV_13TeV_events->Draw("hist same");
   
   thsSignal_grouped_wh3l_MET_JetV_13TeV_events = new THStack();
   thsSignal_grouped_wh3l_MET_JetV_13TeV_events->SetName("thsSignal_grouped_wh3l_MET_JetV_13TeV_events");
   thsSignal_grouped_wh3l_MET_JetV_13TeV_events->SetTitle("thsSignal_grouped_wh3l_MET_JetV_13TeV_events");
   
   TH1F *thsSignal_grouped_wh3l_MET_JetV_13TeV_events_stack_24 = new TH1F("thsSignal_grouped_wh3l_MET_JetV_13TeV_events_stack_24","thsSignal_grouped_wh3l_MET_JetV_13TeV_events",1,0,2);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_events_stack_24->SetMinimum(0);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_events_stack_24->SetMaximum(1.594638);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_events_stack_24->SetDirectory(0);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_events_stack_24->SetStats(0);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_events_stack_24->SetLineStyle(0);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_events_stack_24->SetMarkerStyle(20);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_events_stack_24->GetXaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_events_stack_24->GetXaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_events_stack_24->GetXaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_events_stack_24->GetXaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_events_stack_24->GetXaxis()->SetTitleOffset(0.9);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_events_stack_24->GetXaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_events_stack_24->GetYaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_events_stack_24->GetYaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_events_stack_24->GetYaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_events_stack_24->GetYaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_events_stack_24->GetYaxis()->SetTitleOffset(1.25);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_events_stack_24->GetYaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_events_stack_24->GetZaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_events_stack_24->GetZaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_events_stack_24->GetZaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_events_stack_24->GetZaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_events_stack_24->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_events->SetHistogram(thsSignal_grouped_wh3l_MET_JetV_13TeV_events_stack_24);
   
   
   TH1D *new_histo_group_Higgs_wh3l_MET_JetV_13TeV_events119 = new TH1D("new_histo_group_Higgs_wh3l_MET_JetV_13TeV_events119","histo_H_htt",1,0,2);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_events119->SetBinContent(1,1.4769);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_events119->SetBinError(1,0.04180294);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_events119->SetEntries(2204);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_events119->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_events119->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_events119->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_events119->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_events119->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_events119->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_events119->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_events119->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_events119->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_events119->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_events119->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_events119->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_events119->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_events119->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_events119->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_events->Add(new_histo_group_Higgs_wh3l_MET_JetV_13TeV_events,"");
   thsSignal_grouped_wh3l_MET_JetV_13TeV_events->Draw("hist same noclear");
   
   Double_t _fx3023[1] = {
   1};
   Double_t _fy3023[1] = {
   151.8915};
   Double_t _felx3023[1] = {
   1};
   Double_t _fely3023[1] = {
   9.666344};
   Double_t _fehx3023[1] = {
   1};
   Double_t _fehy3023[1] = {
   9.626553};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(1,_fx3023,_fy3023,_felx3023,_fehx3023,_fely3023,_fehy3023);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(12);
   grae->SetFillStyle(3004);
   grae->SetLineColor(12);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3023 = new TH1F("Graph_Graph3023","",100,0,2.2);
   Graph_Graph3023->SetMinimum(140.2959);
   Graph_Graph3023->SetMaximum(163.4474);
   Graph_Graph3023->SetDirectory(0);
   Graph_Graph3023->SetStats(0);
   Graph_Graph3023->SetLineStyle(0);
   Graph_Graph3023->SetMarkerStyle(20);
   Graph_Graph3023->GetXaxis()->SetLabelFont(42);
   Graph_Graph3023->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3023->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3023->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3023->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3023->GetXaxis()->SetTitleFont(42);
   Graph_Graph3023->GetYaxis()->SetLabelFont(42);
   Graph_Graph3023->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3023->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3023->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3023->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3023->GetYaxis()->SetTitleFont(42);
   Graph_Graph3023->GetZaxis()->SetLabelFont(42);
   Graph_Graph3023->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3023->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3023->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3023->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3023);
   
   grae->Draw("2");
   
   Double_t _fx3024[1] = {
   1};
   Double_t _fy3024[1] = {
   190};
   Double_t _felx3024[1] = {
   1};
   Double_t _fely3024[1] = {
   13.7722};
   Double_t _fehx3024[1] = {
   1};
   Double_t _fehy3024[1] = {
   14.80857};
   grae = new TGraphAsymmErrors(1,_fx3024,_fy3024,_felx3024,_fehx3024,_fely3024,_fehy3024);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(1);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3024 = new TH1F("Graph_Graph3024","",100,0,2.2);
   Graph_Graph3024->SetMinimum(173.3697);
   Graph_Graph3024->SetMaximum(207.6666);
   Graph_Graph3024->SetDirectory(0);
   Graph_Graph3024->SetStats(0);
   Graph_Graph3024->SetLineStyle(0);
   Graph_Graph3024->SetMarkerStyle(20);
   Graph_Graph3024->GetXaxis()->SetLabelFont(42);
   Graph_Graph3024->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3024->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3024->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3024->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3024->GetXaxis()->SetTitleFont(42);
   Graph_Graph3024->GetYaxis()->SetLabelFont(42);
   Graph_Graph3024->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3024->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3024->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3024->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3024->GetYaxis()->SetTitleFont(42);
   Graph_Graph3024->GetZaxis()->SetLabelFont(42);
   Graph_Graph3024->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3024->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3024->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3024->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3024);
   
   grae->Draw("p0");
   
   TLegend *leg = new TLegend(0.2,0.7,0.8,0.9,NULL,"brNDC");
   leg->SetTextFont(62);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("new_histo_group_Fake_wh3l_MET_JetV_13TeV_events","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_MET_JetV_13TeV_events","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_MET_JetV_13TeV_events","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_MET_JetV_13TeV_events","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_MET_JetV_13TeV_events","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_MET_JetV_13TeV_events","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_MET_JetV_13TeV_events","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_MET_JetV_13TeV_events","Data","EPL");
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
   entry=leg->AddEntry("new_histo_group_Fake_wh3l_MET_JetV_13TeV_events","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_MET_JetV_13TeV_events","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_MET_JetV_13TeV_events","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_MET_JetV_13TeV_events","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_MET_JetV_13TeV_events","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_MET_JetV_13TeV_events","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_MET_JetV_13TeV_events","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_MET_JetV_13TeV_events","Data","EPL");
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
   
   TH1F *hframe_copy120 = new TH1F("hframe_copy120","",1000,0,2);
   hframe_copy120->SetMinimum(0);
   hframe_copy120->SetMaximum(509.4601);
   hframe_copy120->SetDirectory(0);
   hframe_copy120->SetStats(0);
   hframe_copy120->SetLineStyle(0);
   hframe_copy120->SetMarkerStyle(20);
   hframe_copy120->GetXaxis()->SetTitle("events");
   hframe_copy120->GetXaxis()->SetNdivisions(506);
   hframe_copy120->GetXaxis()->SetLabelFont(42);
   hframe_copy120->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy120->GetXaxis()->SetLabelSize(0.05);
   hframe_copy120->GetXaxis()->SetTitleSize(0.06);
   hframe_copy120->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy120->GetXaxis()->SetTitleFont(42);
   hframe_copy120->GetYaxis()->SetTitle("Events");
   hframe_copy120->GetYaxis()->SetLabelFont(42);
   hframe_copy120->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy120->GetYaxis()->SetLabelSize(0.05);
   hframe_copy120->GetYaxis()->SetTitleSize(0.06);
   hframe_copy120->GetYaxis()->SetTitleOffset(1.25);
   hframe_copy120->GetYaxis()->SetTitleFont(42);
   hframe_copy120->GetZaxis()->SetLabelFont(42);
   hframe_copy120->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy120->GetZaxis()->SetLabelSize(0.05);
   hframe_copy120->GetZaxis()->SetTitleSize(0.06);
   hframe_copy120->GetZaxis()->SetTitleFont(42);
   hframe_copy120->Draw("sameaxis");
   ccwh3l_MET_JetV_13TeV_events->Modified();
   ccwh3l_MET_JetV_13TeV_events->cd();
   ccwh3l_MET_JetV_13TeV_events->SetSelected(ccwh3l_MET_JetV_13TeV_events);
}
