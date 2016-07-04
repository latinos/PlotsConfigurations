void c_wh3l_MET_JetV_ZVeto_mll_13TeV_nbjet_3l()
{
//=========Macro generated from canvas: ccwh3l_MET_JetV_ZVeto_mll_13TeV_nbjet_3l/cc
//=========  (Sun Jul  3 16:19:22 2016) by ROOT version6.02/13
   TCanvas *ccwh3l_MET_JetV_ZVeto_mll_13TeV_nbjet_3l = new TCanvas("ccwh3l_MET_JetV_ZVeto_mll_13TeV_nbjet_3l", "cc",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   ccwh3l_MET_JetV_ZVeto_mll_13TeV_nbjet_3l->SetHighLightColor(2);
   ccwh3l_MET_JetV_ZVeto_mll_13TeV_nbjet_3l->Range(-1,-8.563947,5.25,57.31257);
   ccwh3l_MET_JetV_ZVeto_mll_13TeV_nbjet_3l->SetFillColor(0);
   ccwh3l_MET_JetV_ZVeto_mll_13TeV_nbjet_3l->SetBorderMode(0);
   ccwh3l_MET_JetV_ZVeto_mll_13TeV_nbjet_3l->SetBorderSize(2);
   ccwh3l_MET_JetV_ZVeto_mll_13TeV_nbjet_3l->SetTickx(1);
   ccwh3l_MET_JetV_ZVeto_mll_13TeV_nbjet_3l->SetTicky(1);
   ccwh3l_MET_JetV_ZVeto_mll_13TeV_nbjet_3l->SetLeftMargin(0.16);
   ccwh3l_MET_JetV_ZVeto_mll_13TeV_nbjet_3l->SetRightMargin(0.04);
   ccwh3l_MET_JetV_ZVeto_mll_13TeV_nbjet_3l->SetTopMargin(0.05);
   ccwh3l_MET_JetV_ZVeto_mll_13TeV_nbjet_3l->SetBottomMargin(0.13);
   ccwh3l_MET_JetV_ZVeto_mll_13TeV_nbjet_3l->SetFrameFillStyle(0);
   ccwh3l_MET_JetV_ZVeto_mll_13TeV_nbjet_3l->SetFrameBorderMode(0);
   ccwh3l_MET_JetV_ZVeto_mll_13TeV_nbjet_3l->SetFrameFillStyle(0);
   ccwh3l_MET_JetV_ZVeto_mll_13TeV_nbjet_3l->SetFrameBorderMode(0);
   
   TH1F *hframe461 = new TH1F("hframe461","",1000,0,5);
   hframe461->SetMinimum(0);
   hframe461->SetMaximum(54.01875);
   hframe461->SetDirectory(0);
   hframe461->SetStats(0);
   hframe461->SetLineStyle(0);
   hframe461->SetMarkerStyle(20);
   hframe461->GetXaxis()->SetTitle("N_bJets");
   hframe461->GetXaxis()->SetNdivisions(506);
   hframe461->GetXaxis()->SetLabelFont(42);
   hframe461->GetXaxis()->SetLabelOffset(0.007);
   hframe461->GetXaxis()->SetLabelSize(0.05);
   hframe461->GetXaxis()->SetTitleSize(0.06);
   hframe461->GetXaxis()->SetTitleOffset(0.9);
   hframe461->GetXaxis()->SetTitleFont(42);
   hframe461->GetYaxis()->SetTitle("Events");
   hframe461->GetYaxis()->SetLabelFont(42);
   hframe461->GetYaxis()->SetLabelOffset(0.007);
   hframe461->GetYaxis()->SetLabelSize(0.05);
   hframe461->GetYaxis()->SetTitleSize(0.06);
   hframe461->GetYaxis()->SetTitleOffset(1.25);
   hframe461->GetYaxis()->SetTitleFont(42);
   hframe461->GetZaxis()->SetLabelFont(42);
   hframe461->GetZaxis()->SetLabelOffset(0.007);
   hframe461->GetZaxis()->SetLabelSize(0.05);
   hframe461->GetZaxis()->SetTitleSize(0.06);
   hframe461->GetZaxis()->SetTitleFont(42);
   hframe461->Draw(" ");
   
   THStack *thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_nbjet_3l = new THStack();
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_nbjet_3l->SetName("thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_nbjet_3l");
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_nbjet_3l->SetTitle("thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_nbjet_3l");
   
   TH1F *thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_nbjet_3l_stack_93 = new TH1F("thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_nbjet_3l_stack_93","thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_nbjet_3l",5,0,5);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_nbjet_3l_stack_93->SetMinimum(0);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_nbjet_3l_stack_93->SetMaximum(22.68787);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_nbjet_3l_stack_93->SetDirectory(0);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_nbjet_3l_stack_93->SetStats(0);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_nbjet_3l_stack_93->SetLineStyle(0);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_nbjet_3l_stack_93->SetMarkerStyle(20);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_nbjet_3l_stack_93->GetXaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_nbjet_3l_stack_93->GetXaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_nbjet_3l_stack_93->GetXaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_nbjet_3l_stack_93->GetXaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_nbjet_3l_stack_93->GetXaxis()->SetTitleOffset(0.9);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_nbjet_3l_stack_93->GetXaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_nbjet_3l_stack_93->GetYaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_nbjet_3l_stack_93->GetYaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_nbjet_3l_stack_93->GetYaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_nbjet_3l_stack_93->GetYaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_nbjet_3l_stack_93->GetYaxis()->SetTitleOffset(1.25);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_nbjet_3l_stack_93->GetYaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_nbjet_3l_stack_93->GetZaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_nbjet_3l_stack_93->GetZaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_nbjet_3l_stack_93->GetZaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_nbjet_3l_stack_93->GetZaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_nbjet_3l_stack_93->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_nbjet_3l->SetHistogram(thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_nbjet_3l_stack_93);
   
   
   TH1D *new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_nbjet_3l462 = new TH1D("new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_nbjet_3l462","histo_Fake",5,0,5);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_nbjet_3l462->SetBinContent(1,9.72882);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_nbjet_3l462->SetBinError(1,2.569399);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_nbjet_3l462->SetEntries(108);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_nbjet_3l462->SetFillColor(ci);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_nbjet_3l462->SetFillStyle(3001);

   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_nbjet_3l462->SetLineColor(ci);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_nbjet_3l462->GetXaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_nbjet_3l462->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_nbjet_3l462->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_nbjet_3l462->GetXaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_nbjet_3l462->GetYaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_nbjet_3l462->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_nbjet_3l462->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_nbjet_3l462->GetYaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_nbjet_3l462->GetZaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_nbjet_3l462->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_nbjet_3l462->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_nbjet_3l462->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_nbjet_3l->Add(new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_nbjet_3l,"");
   
   TH1D *new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_nbjet_3l463 = new TH1D("new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_nbjet_3l463","histo_WW",5,0,5);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_nbjet_3l463->SetBinContent(1,0.08870193);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_nbjet_3l463->SetBinError(1,0.03666076);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_nbjet_3l463->SetEntries(6);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_nbjet_3l463->SetFillColor(ci);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_nbjet_3l463->SetFillStyle(3001);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_nbjet_3l463->SetLineColor(ci);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_nbjet_3l463->GetXaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_nbjet_3l463->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_nbjet_3l463->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_nbjet_3l463->GetXaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_nbjet_3l463->GetYaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_nbjet_3l463->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_nbjet_3l463->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_nbjet_3l463->GetYaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_nbjet_3l463->GetZaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_nbjet_3l463->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_nbjet_3l463->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_nbjet_3l463->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_nbjet_3l->Add(new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_nbjet_3l,"");
   
   TH1D *new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_nbjet_3l464 = new TH1D("new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_nbjet_3l464","histo_VVV",5,0,5);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_nbjet_3l464->SetBinContent(1,0.3148626);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_nbjet_3l464->SetBinError(1,0.02857932);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_nbjet_3l464->SetEntries(180);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_nbjet_3l464->SetFillColor(ci);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_nbjet_3l464->SetFillStyle(3001);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_nbjet_3l464->SetLineColor(ci);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_nbjet_3l464->GetXaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_nbjet_3l464->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_nbjet_3l464->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_nbjet_3l464->GetXaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_nbjet_3l464->GetYaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_nbjet_3l464->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_nbjet_3l464->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_nbjet_3l464->GetYaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_nbjet_3l464->GetZaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_nbjet_3l464->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_nbjet_3l464->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_nbjet_3l464->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_nbjet_3l->Add(new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_nbjet_3l,"");
   
   TH1D *new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_nbjet_3l465 = new TH1D("new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_nbjet_3l465","histo_Vg",5,0,5);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_nbjet_3l465->SetBinContent(1,2.648169);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_nbjet_3l465->SetBinError(1,0.5700496);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_nbjet_3l465->SetEntries(42);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_nbjet_3l465->SetFillColor(ci);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_nbjet_3l465->SetFillStyle(3001);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_nbjet_3l465->SetLineColor(ci);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_nbjet_3l465->GetXaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_nbjet_3l465->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_nbjet_3l465->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_nbjet_3l465->GetXaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_nbjet_3l465->GetYaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_nbjet_3l465->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_nbjet_3l465->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_nbjet_3l465->GetYaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_nbjet_3l465->GetZaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_nbjet_3l465->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_nbjet_3l465->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_nbjet_3l465->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_nbjet_3l->Add(new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_nbjet_3l,"");
   
   TH1D *new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_nbjet_3l466 = new TH1D("new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_nbjet_3l466","histo_ZZ",5,0,5);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_nbjet_3l466->SetBinContent(1,0.6257207);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_nbjet_3l466->SetBinError(1,0.1568989);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_nbjet_3l466->SetEntries(18);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_nbjet_3l466->SetFillColor(ci);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_nbjet_3l466->SetFillStyle(3001);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_nbjet_3l466->SetLineColor(ci);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_nbjet_3l466->GetXaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_nbjet_3l466->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_nbjet_3l466->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_nbjet_3l466->GetXaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_nbjet_3l466->GetYaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_nbjet_3l466->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_nbjet_3l466->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_nbjet_3l466->GetYaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_nbjet_3l466->GetZaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_nbjet_3l466->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_nbjet_3l466->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_nbjet_3l466->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_nbjet_3l->Add(new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_nbjet_3l,"");
   
   TH1D *new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_nbjet_3l467 = new TH1D("new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_nbjet_3l467","histo_WZ",5,0,5);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_nbjet_3l467->SetBinContent(1,7.389216);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_nbjet_3l467->SetBinError(1,0.2002934);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_nbjet_3l467->SetEntries(1516);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_nbjet_3l467->SetFillColor(ci);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_nbjet_3l467->SetFillStyle(3001);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_nbjet_3l467->SetLineColor(ci);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_nbjet_3l467->GetXaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_nbjet_3l467->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_nbjet_3l467->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_nbjet_3l467->GetXaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_nbjet_3l467->GetYaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_nbjet_3l467->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_nbjet_3l467->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_nbjet_3l467->GetYaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_nbjet_3l467->GetZaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_nbjet_3l467->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_nbjet_3l467->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_nbjet_3l467->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_nbjet_3l->Add(new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_nbjet_3l,"");
   
   TH1D *new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_nbjet_3l468 = new TH1D("new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_nbjet_3l468","histo_H_htt",5,0,5);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_nbjet_3l468->SetBinContent(1,0.8120077);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_nbjet_3l468->SetBinError(1,0.03093742);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_nbjet_3l468->SetEntries(1320);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_nbjet_3l468->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_nbjet_3l468->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_nbjet_3l468->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_nbjet_3l468->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_nbjet_3l468->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_nbjet_3l468->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_nbjet_3l468->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_nbjet_3l468->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_nbjet_3l468->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_nbjet_3l468->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_nbjet_3l468->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_nbjet_3l468->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_nbjet_3l468->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_nbjet_3l468->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_nbjet_3l468->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_nbjet_3l->Add(new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_nbjet_3l,"");
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_nbjet_3l->Draw("hist same");
   
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_nbjet_3l = new THStack();
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_nbjet_3l->SetName("thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_nbjet_3l");
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_nbjet_3l->SetTitle("thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_nbjet_3l");
   
   TH1F *thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_nbjet_3l_stack_94 = new TH1F("thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_nbjet_3l_stack_94","thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_nbjet_3l",5,0,5);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_nbjet_3l_stack_94->SetMinimum(0);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_nbjet_3l_stack_94->SetMaximum(0.8850924);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_nbjet_3l_stack_94->SetDirectory(0);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_nbjet_3l_stack_94->SetStats(0);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_nbjet_3l_stack_94->SetLineStyle(0);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_nbjet_3l_stack_94->SetMarkerStyle(20);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_nbjet_3l_stack_94->GetXaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_nbjet_3l_stack_94->GetXaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_nbjet_3l_stack_94->GetXaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_nbjet_3l_stack_94->GetXaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_nbjet_3l_stack_94->GetXaxis()->SetTitleOffset(0.9);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_nbjet_3l_stack_94->GetXaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_nbjet_3l_stack_94->GetYaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_nbjet_3l_stack_94->GetYaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_nbjet_3l_stack_94->GetYaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_nbjet_3l_stack_94->GetYaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_nbjet_3l_stack_94->GetYaxis()->SetTitleOffset(1.25);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_nbjet_3l_stack_94->GetYaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_nbjet_3l_stack_94->GetZaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_nbjet_3l_stack_94->GetZaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_nbjet_3l_stack_94->GetZaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_nbjet_3l_stack_94->GetZaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_nbjet_3l_stack_94->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_nbjet_3l->SetHistogram(thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_nbjet_3l_stack_94);
   
   
   TH1D *new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_nbjet_3l469 = new TH1D("new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_nbjet_3l469","histo_H_htt",5,0,5);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_nbjet_3l469->SetBinContent(1,0.8120077);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_nbjet_3l469->SetBinError(1,0.03093742);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_nbjet_3l469->SetEntries(1320);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_nbjet_3l469->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_nbjet_3l469->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_nbjet_3l469->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_nbjet_3l469->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_nbjet_3l469->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_nbjet_3l469->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_nbjet_3l469->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_nbjet_3l469->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_nbjet_3l469->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_nbjet_3l469->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_nbjet_3l469->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_nbjet_3l469->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_nbjet_3l469->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_nbjet_3l469->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_nbjet_3l469->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_nbjet_3l->Add(new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_nbjet_3l,"");
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_nbjet_3l->Draw("hist same noclear");
   
   Double_t _fx3093[5] = {
   0.5,
   1.5,
   2.5,
   3.5,
   4.5};
   Double_t _fy3093[5] = {
   20.79549,
   0,
   0,
   0,
   0};
   Double_t _felx3093[5] = {
   0.5,
   0.5,
   0.5,
   0.5,
   0.5};
   Double_t _fely3093[5] = {
   4.959341,
   0,
   0,
   0,
   0};
   Double_t _fehx3093[5] = {
   0.5,
   0.5,
   0.5,
   0.5,
   0.5};
   Double_t _fehy3093[5] = {
   4.957812,
   0,
   0,
   0,
   0};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(5,_fx3093,_fy3093,_felx3093,_fehx3093,_fely3093,_fehy3093);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(12);
   grae->SetFillStyle(3004);
   grae->SetLineColor(12);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3093 = new TH1F("Graph_Graph3093","",100,0,5.5);
   Graph_Graph3093->SetMinimum(0);
   Graph_Graph3093->SetMaximum(28.32863);
   Graph_Graph3093->SetDirectory(0);
   Graph_Graph3093->SetStats(0);
   Graph_Graph3093->SetLineStyle(0);
   Graph_Graph3093->SetMarkerStyle(20);
   Graph_Graph3093->GetXaxis()->SetLabelFont(42);
   Graph_Graph3093->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3093->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3093->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3093->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3093->GetXaxis()->SetTitleFont(42);
   Graph_Graph3093->GetYaxis()->SetLabelFont(42);
   Graph_Graph3093->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3093->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3093->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3093->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3093->GetYaxis()->SetTitleFont(42);
   Graph_Graph3093->GetZaxis()->SetLabelFont(42);
   Graph_Graph3093->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3093->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3093->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3093->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3093);
   
   grae->Draw("2");
   
   Double_t _fx3094[5] = {
   0.5,
   1.5,
   2.5,
   3.5,
   4.5};
   Double_t _fy3094[5] = {
   0,
   0,
   0,
   0,
   0};
   Double_t _felx3094[5] = {
   0.5,
   0.5,
   0.5,
   0.5,
   0.5};
   Double_t _fely3094[5] = {
   0,
   0,
   0,
   0,
   0};
   Double_t _fehx3094[5] = {
   0.5,
   0.5,
   0.5,
   0.5,
   0.5};
   Double_t _fehy3094[5] = {
   1.147908,
   1.147908,
   1.147908,
   1.147908,
   1.147908};
   grae = new TGraphAsymmErrors(5,_fx3094,_fy3094,_felx3094,_fehx3094,_fely3094,_fehy3094);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(1);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3094 = new TH1F("Graph_Graph3094","",100,0,5.5);
   Graph_Graph3094->SetMinimum(0);
   Graph_Graph3094->SetMaximum(1.262698);
   Graph_Graph3094->SetDirectory(0);
   Graph_Graph3094->SetStats(0);
   Graph_Graph3094->SetLineStyle(0);
   Graph_Graph3094->SetMarkerStyle(20);
   Graph_Graph3094->GetXaxis()->SetLabelFont(42);
   Graph_Graph3094->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3094->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3094->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3094->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3094->GetXaxis()->SetTitleFont(42);
   Graph_Graph3094->GetYaxis()->SetLabelFont(42);
   Graph_Graph3094->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3094->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3094->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3094->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3094->GetYaxis()->SetTitleFont(42);
   Graph_Graph3094->GetZaxis()->SetLabelFont(42);
   Graph_Graph3094->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3094->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3094->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3094->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3094);
   
   grae->Draw("p0");
   
   TLegend *leg = new TLegend(0.2,0.7,0.8,0.9,NULL,"brNDC");
   leg->SetTextFont(62);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_nbjet_3l","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_nbjet_3l","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_nbjet_3l","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_nbjet_3l","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_nbjet_3l","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_nbjet_3l","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_nbjet_3l","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_MET_JetV_ZVeto_mll_13TeV_nbjet_3l","Data","EPL");
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
   entry=leg->AddEntry("new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_nbjet_3l","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_nbjet_3l","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_nbjet_3l","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_nbjet_3l","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_nbjet_3l","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_nbjet_3l","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_nbjet_3l","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_MET_JetV_ZVeto_mll_13TeV_nbjet_3l","Data","EPL");
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
   
   TH1F *hframe_copy470 = new TH1F("hframe_copy470","",1000,0,5);
   hframe_copy470->SetMinimum(0);
   hframe_copy470->SetMaximum(54.01875);
   hframe_copy470->SetDirectory(0);
   hframe_copy470->SetStats(0);
   hframe_copy470->SetLineStyle(0);
   hframe_copy470->SetMarkerStyle(20);
   hframe_copy470->GetXaxis()->SetTitle("N_bJets");
   hframe_copy470->GetXaxis()->SetNdivisions(506);
   hframe_copy470->GetXaxis()->SetLabelFont(42);
   hframe_copy470->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy470->GetXaxis()->SetLabelSize(0.05);
   hframe_copy470->GetXaxis()->SetTitleSize(0.06);
   hframe_copy470->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy470->GetXaxis()->SetTitleFont(42);
   hframe_copy470->GetYaxis()->SetTitle("Events");
   hframe_copy470->GetYaxis()->SetLabelFont(42);
   hframe_copy470->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy470->GetYaxis()->SetLabelSize(0.05);
   hframe_copy470->GetYaxis()->SetTitleSize(0.06);
   hframe_copy470->GetYaxis()->SetTitleOffset(1.25);
   hframe_copy470->GetYaxis()->SetTitleFont(42);
   hframe_copy470->GetZaxis()->SetLabelFont(42);
   hframe_copy470->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy470->GetZaxis()->SetLabelSize(0.05);
   hframe_copy470->GetZaxis()->SetTitleSize(0.06);
   hframe_copy470->GetZaxis()->SetTitleFont(42);
   hframe_copy470->Draw("sameaxis");
   ccwh3l_MET_JetV_ZVeto_mll_13TeV_nbjet_3l->Modified();
   ccwh3l_MET_JetV_ZVeto_mll_13TeV_nbjet_3l->cd();
   ccwh3l_MET_JetV_ZVeto_mll_13TeV_nbjet_3l->SetSelected(ccwh3l_MET_JetV_ZVeto_mll_13TeV_nbjet_3l);
}
