void c_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l()
{
//=========Macro generated from canvas: ccwh3l_MET_JetV_ZVeto_13TeV_nbjet_3l/cc
//=========  (Sun Jul  3 16:19:16 2016) by ROOT version6.02/13
   TCanvas *ccwh3l_MET_JetV_ZVeto_13TeV_nbjet_3l = new TCanvas("ccwh3l_MET_JetV_ZVeto_13TeV_nbjet_3l", "cc",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   ccwh3l_MET_JetV_ZVeto_13TeV_nbjet_3l->SetHighLightColor(2);
   ccwh3l_MET_JetV_ZVeto_13TeV_nbjet_3l->Range(-1,-9.818101,5.25,65.70575);
   ccwh3l_MET_JetV_ZVeto_13TeV_nbjet_3l->SetFillColor(0);
   ccwh3l_MET_JetV_ZVeto_13TeV_nbjet_3l->SetBorderMode(0);
   ccwh3l_MET_JetV_ZVeto_13TeV_nbjet_3l->SetBorderSize(2);
   ccwh3l_MET_JetV_ZVeto_13TeV_nbjet_3l->SetTickx(1);
   ccwh3l_MET_JetV_ZVeto_13TeV_nbjet_3l->SetTicky(1);
   ccwh3l_MET_JetV_ZVeto_13TeV_nbjet_3l->SetLeftMargin(0.16);
   ccwh3l_MET_JetV_ZVeto_13TeV_nbjet_3l->SetRightMargin(0.04);
   ccwh3l_MET_JetV_ZVeto_13TeV_nbjet_3l->SetTopMargin(0.05);
   ccwh3l_MET_JetV_ZVeto_13TeV_nbjet_3l->SetBottomMargin(0.13);
   ccwh3l_MET_JetV_ZVeto_13TeV_nbjet_3l->SetFrameFillStyle(0);
   ccwh3l_MET_JetV_ZVeto_13TeV_nbjet_3l->SetFrameBorderMode(0);
   ccwh3l_MET_JetV_ZVeto_13TeV_nbjet_3l->SetFrameFillStyle(0);
   ccwh3l_MET_JetV_ZVeto_13TeV_nbjet_3l->SetFrameBorderMode(0);
   
   TH1F *hframe361 = new TH1F("hframe361","",1000,0,5);
   hframe361->SetMinimum(0);
   hframe361->SetMaximum(61.92956);
   hframe361->SetDirectory(0);
   hframe361->SetStats(0);
   hframe361->SetLineStyle(0);
   hframe361->SetMarkerStyle(20);
   hframe361->GetXaxis()->SetTitle("N_bJets");
   hframe361->GetXaxis()->SetNdivisions(506);
   hframe361->GetXaxis()->SetLabelFont(42);
   hframe361->GetXaxis()->SetLabelOffset(0.007);
   hframe361->GetXaxis()->SetLabelSize(0.05);
   hframe361->GetXaxis()->SetTitleSize(0.06);
   hframe361->GetXaxis()->SetTitleOffset(0.9);
   hframe361->GetXaxis()->SetTitleFont(42);
   hframe361->GetYaxis()->SetTitle("Events");
   hframe361->GetYaxis()->SetLabelFont(42);
   hframe361->GetYaxis()->SetLabelOffset(0.007);
   hframe361->GetYaxis()->SetLabelSize(0.05);
   hframe361->GetYaxis()->SetTitleSize(0.06);
   hframe361->GetYaxis()->SetTitleOffset(1.25);
   hframe361->GetYaxis()->SetTitleFont(42);
   hframe361->GetZaxis()->SetLabelFont(42);
   hframe361->GetZaxis()->SetLabelOffset(0.007);
   hframe361->GetZaxis()->SetLabelSize(0.05);
   hframe361->GetZaxis()->SetTitleSize(0.06);
   hframe361->GetZaxis()->SetTitleFont(42);
   hframe361->Draw(" ");
   
   THStack *thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l = new THStack();
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l->SetName("thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l");
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l->SetTitle("thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l");
   
   TH1F *thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l_stack_73 = new TH1F("thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l_stack_73","thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l",5,0,5);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l_stack_73->SetMinimum(0);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l_stack_73->SetMaximum(26.01042);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l_stack_73->SetDirectory(0);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l_stack_73->SetStats(0);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l_stack_73->SetLineStyle(0);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l_stack_73->SetMarkerStyle(20);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l_stack_73->GetXaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l_stack_73->GetXaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l_stack_73->GetXaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l_stack_73->GetXaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l_stack_73->GetXaxis()->SetTitleOffset(0.9);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l_stack_73->GetXaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l_stack_73->GetYaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l_stack_73->GetYaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l_stack_73->GetYaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l_stack_73->GetYaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l_stack_73->GetYaxis()->SetTitleOffset(1.25);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l_stack_73->GetYaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l_stack_73->GetZaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l_stack_73->GetZaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l_stack_73->GetZaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l_stack_73->GetZaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l_stack_73->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l->SetHistogram(thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l_stack_73);
   
   
   TH1D *new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l362 = new TH1D("new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l362","histo_Fake",5,0,5);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l362->SetBinContent(1,10.59515);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l362->SetBinError(1,2.628293);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l362->SetEntries(117);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l362->SetFillColor(ci);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l362->SetFillStyle(3001);

   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l362->SetLineColor(ci);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l362->GetXaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l362->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l362->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l362->GetXaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l362->GetYaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l362->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l362->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l362->GetYaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l362->GetZaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l362->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l362->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l362->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l->Add(new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l,"");
   
   TH1D *new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l363 = new TH1D("new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l363","histo_WW",5,0,5);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l363->SetBinContent(1,0.08870193);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l363->SetBinError(1,0.03666076);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l363->SetEntries(6);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l363->SetFillColor(ci);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l363->SetFillStyle(3001);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l363->SetLineColor(ci);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l363->GetXaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l363->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l363->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l363->GetXaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l363->GetYaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l363->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l363->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l363->GetYaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l363->GetZaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l363->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l363->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l363->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l->Add(new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l,"");
   
   TH1D *new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l364 = new TH1D("new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l364","histo_VVV",5,0,5);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l364->SetBinContent(1,0.4295882);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l364->SetBinError(1,0.03338302);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l364->SetEntries(250);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l364->SetFillColor(ci);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l364->SetFillStyle(3001);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l364->SetLineColor(ci);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l364->GetXaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l364->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l364->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l364->GetXaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l364->GetYaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l364->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l364->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l364->GetYaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l364->GetZaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l364->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l364->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l364->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l->Add(new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l,"");
   
   TH1D *new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l365 = new TH1D("new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l365","histo_Vg",5,0,5);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l365->SetBinContent(1,2.754018);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l365->SetBinError(1,0.5797935);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l365->SetEntries(43);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l365->SetFillColor(ci);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l365->SetFillStyle(3001);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l365->SetLineColor(ci);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l365->GetXaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l365->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l365->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l365->GetXaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l365->GetYaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l365->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l365->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l365->GetYaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l365->GetZaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l365->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l365->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l365->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l->Add(new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l,"");
   
   TH1D *new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l366 = new TH1D("new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l366","histo_ZZ",5,0,5);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l366->SetBinContent(1,0.6257207);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l366->SetBinError(1,0.1568989);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l366->SetEntries(18);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l366->SetFillColor(ci);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l366->SetFillStyle(3001);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l366->SetLineColor(ci);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l366->GetXaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l366->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l366->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l366->GetXaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l366->GetYaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l366->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l366->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l366->GetYaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l366->GetZaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l366->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l366->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l366->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l->Add(new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l,"");
   
   TH1D *new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l367 = new TH1D("new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l367","histo_WZ",5,0,5);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l367->SetBinContent(1,9.462664);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l367->SetBinError(1,0.2265887);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l367->SetEntries(1942);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l367->SetFillColor(ci);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l367->SetFillStyle(3001);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l367->SetLineColor(ci);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l367->GetXaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l367->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l367->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l367->GetXaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l367->GetYaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l367->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l367->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l367->GetYaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l367->GetZaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l367->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l367->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l367->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l->Add(new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l,"");
   
   TH1D *new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l368 = new TH1D("new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l368","histo_H_htt",5,0,5);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l368->SetBinContent(1,0.815978);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l368->SetBinError(1,0.03101323);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l368->SetEntries(1324);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l368->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l368->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l368->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l368->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l368->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l368->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l368->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l368->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l368->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l368->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l368->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l368->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l368->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l368->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l368->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l->Add(new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l,"");
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l->Draw("hist same");
   
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l = new THStack();
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l->SetName("thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l");
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l->SetTitle("thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l");
   
   TH1F *thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l_stack_74 = new TH1F("thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l_stack_74","thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l",5,0,5);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l_stack_74->SetMinimum(0);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l_stack_74->SetMaximum(0.8893408);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l_stack_74->SetDirectory(0);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l_stack_74->SetStats(0);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l_stack_74->SetLineStyle(0);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l_stack_74->SetMarkerStyle(20);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l_stack_74->GetXaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l_stack_74->GetXaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l_stack_74->GetXaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l_stack_74->GetXaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l_stack_74->GetXaxis()->SetTitleOffset(0.9);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l_stack_74->GetXaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l_stack_74->GetYaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l_stack_74->GetYaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l_stack_74->GetYaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l_stack_74->GetYaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l_stack_74->GetYaxis()->SetTitleOffset(1.25);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l_stack_74->GetYaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l_stack_74->GetZaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l_stack_74->GetZaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l_stack_74->GetZaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l_stack_74->GetZaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l_stack_74->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l->SetHistogram(thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l_stack_74);
   
   
   TH1D *new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l369 = new TH1D("new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l369","histo_H_htt",5,0,5);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l369->SetBinContent(1,0.815978);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l369->SetBinError(1,0.03101323);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l369->SetEntries(1324);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l369->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l369->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l369->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l369->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l369->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l369->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l369->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l369->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l369->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l369->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l369->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l369->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l369->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l369->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l369->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l->Add(new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l,"");
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l->Draw("hist same noclear");
   
   Double_t _fx3073[5] = {
   0.5,
   1.5,
   2.5,
   3.5,
   4.5};
   Double_t _fy3073[5] = {
   23.95585,
   0,
   0,
   0,
   0};
   Double_t _felx3073[5] = {
   0.5,
   0.5,
   0.5,
   0.5,
   0.5};
   Double_t _fely3073[5] = {
   5.25481,
   0,
   0,
   0,
   0};
   Double_t _fehx3073[5] = {
   0.5,
   0.5,
   0.5,
   0.5,
   0.5};
   Double_t _fehy3073[5] = {
   5.252579,
   0,
   0,
   0,
   0};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(5,_fx3073,_fy3073,_felx3073,_fehx3073,_fely3073,_fehy3073);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(12);
   grae->SetFillStyle(3004);
   grae->SetLineColor(12);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3073 = new TH1F("Graph_Graph3073","",100,0,5.5);
   Graph_Graph3073->SetMinimum(0);
   Graph_Graph3073->SetMaximum(32.12927);
   Graph_Graph3073->SetDirectory(0);
   Graph_Graph3073->SetStats(0);
   Graph_Graph3073->SetLineStyle(0);
   Graph_Graph3073->SetMarkerStyle(20);
   Graph_Graph3073->GetXaxis()->SetLabelFont(42);
   Graph_Graph3073->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3073->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3073->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3073->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3073->GetXaxis()->SetTitleFont(42);
   Graph_Graph3073->GetYaxis()->SetLabelFont(42);
   Graph_Graph3073->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3073->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3073->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3073->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3073->GetYaxis()->SetTitleFont(42);
   Graph_Graph3073->GetZaxis()->SetLabelFont(42);
   Graph_Graph3073->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3073->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3073->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3073->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3073);
   
   grae->Draw("2");
   
   Double_t _fx3074[5] = {
   0.5,
   1.5,
   2.5,
   3.5,
   4.5};
   Double_t _fy3074[5] = {
   0,
   0,
   0,
   0,
   0};
   Double_t _felx3074[5] = {
   0.5,
   0.5,
   0.5,
   0.5,
   0.5};
   Double_t _fely3074[5] = {
   0,
   0,
   0,
   0,
   0};
   Double_t _fehx3074[5] = {
   0.5,
   0.5,
   0.5,
   0.5,
   0.5};
   Double_t _fehy3074[5] = {
   1.147908,
   1.147908,
   1.147908,
   1.147908,
   1.147908};
   grae = new TGraphAsymmErrors(5,_fx3074,_fy3074,_felx3074,_fehx3074,_fely3074,_fehy3074);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(1);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3074 = new TH1F("Graph_Graph3074","",100,0,5.5);
   Graph_Graph3074->SetMinimum(0);
   Graph_Graph3074->SetMaximum(1.262698);
   Graph_Graph3074->SetDirectory(0);
   Graph_Graph3074->SetStats(0);
   Graph_Graph3074->SetLineStyle(0);
   Graph_Graph3074->SetMarkerStyle(20);
   Graph_Graph3074->GetXaxis()->SetLabelFont(42);
   Graph_Graph3074->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3074->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3074->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3074->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3074->GetXaxis()->SetTitleFont(42);
   Graph_Graph3074->GetYaxis()->SetLabelFont(42);
   Graph_Graph3074->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3074->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3074->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3074->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3074->GetYaxis()->SetTitleFont(42);
   Graph_Graph3074->GetZaxis()->SetLabelFont(42);
   Graph_Graph3074->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3074->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3074->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3074->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3074);
   
   grae->Draw("p0");
   
   TLegend *leg = new TLegend(0.2,0.7,0.8,0.9,NULL,"brNDC");
   leg->SetTextFont(62);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l","Data","EPL");
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
   entry=leg->AddEntry("new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l","Data","EPL");
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
   
   TH1F *hframe_copy370 = new TH1F("hframe_copy370","",1000,0,5);
   hframe_copy370->SetMinimum(0);
   hframe_copy370->SetMaximum(61.92956);
   hframe_copy370->SetDirectory(0);
   hframe_copy370->SetStats(0);
   hframe_copy370->SetLineStyle(0);
   hframe_copy370->SetMarkerStyle(20);
   hframe_copy370->GetXaxis()->SetTitle("N_bJets");
   hframe_copy370->GetXaxis()->SetNdivisions(506);
   hframe_copy370->GetXaxis()->SetLabelFont(42);
   hframe_copy370->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy370->GetXaxis()->SetLabelSize(0.05);
   hframe_copy370->GetXaxis()->SetTitleSize(0.06);
   hframe_copy370->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy370->GetXaxis()->SetTitleFont(42);
   hframe_copy370->GetYaxis()->SetTitle("Events");
   hframe_copy370->GetYaxis()->SetLabelFont(42);
   hframe_copy370->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy370->GetYaxis()->SetLabelSize(0.05);
   hframe_copy370->GetYaxis()->SetTitleSize(0.06);
   hframe_copy370->GetYaxis()->SetTitleOffset(1.25);
   hframe_copy370->GetYaxis()->SetTitleFont(42);
   hframe_copy370->GetZaxis()->SetLabelFont(42);
   hframe_copy370->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy370->GetZaxis()->SetLabelSize(0.05);
   hframe_copy370->GetZaxis()->SetTitleSize(0.06);
   hframe_copy370->GetZaxis()->SetTitleFont(42);
   hframe_copy370->Draw("sameaxis");
   ccwh3l_MET_JetV_ZVeto_13TeV_nbjet_3l->Modified();
   ccwh3l_MET_JetV_ZVeto_13TeV_nbjet_3l->cd();
   ccwh3l_MET_JetV_ZVeto_13TeV_nbjet_3l->SetSelected(ccwh3l_MET_JetV_ZVeto_13TeV_nbjet_3l);
}
