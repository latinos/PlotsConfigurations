void c_wh3l_13TeV_sssf_njet_3l()
{
//=========Macro generated from canvas: ccwh3l_13TeV_sssf_njet_3l/cc
//=========  (Wed Jun 29 01:34:21 2016) by ROOT version6.02/13
   TCanvas *ccwh3l_13TeV_sssf_njet_3l = new TCanvas("ccwh3l_13TeV_sssf_njet_3l", "cc",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   ccwh3l_13TeV_sssf_njet_3l->SetHighLightColor(2);
   ccwh3l_13TeV_sssf_njet_3l->Range(-1.6,-1.574469,8.4,10.53683);
   ccwh3l_13TeV_sssf_njet_3l->SetFillColor(0);
   ccwh3l_13TeV_sssf_njet_3l->SetBorderMode(0);
   ccwh3l_13TeV_sssf_njet_3l->SetBorderSize(2);
   ccwh3l_13TeV_sssf_njet_3l->SetTickx(1);
   ccwh3l_13TeV_sssf_njet_3l->SetTicky(1);
   ccwh3l_13TeV_sssf_njet_3l->SetLeftMargin(0.16);
   ccwh3l_13TeV_sssf_njet_3l->SetRightMargin(0.04);
   ccwh3l_13TeV_sssf_njet_3l->SetTopMargin(0.05);
   ccwh3l_13TeV_sssf_njet_3l->SetBottomMargin(0.13);
   ccwh3l_13TeV_sssf_njet_3l->SetFrameFillStyle(0);
   ccwh3l_13TeV_sssf_njet_3l->SetFrameBorderMode(0);
   ccwh3l_13TeV_sssf_njet_3l->SetFrameFillStyle(0);
   ccwh3l_13TeV_sssf_njet_3l->SetFrameBorderMode(0);
   
   TH1F *hframe601 = new TH1F("hframe601","",1000,0,8);
   hframe601->SetMinimum(0);
   hframe601->SetMaximum(9.931269);
   hframe601->SetDirectory(0);
   hframe601->SetStats(0);
   hframe601->SetLineStyle(0);
   hframe601->SetMarkerStyle(20);
   hframe601->GetXaxis()->SetTitle("N_Jets");
   hframe601->GetXaxis()->SetNdivisions(506);
   hframe601->GetXaxis()->SetLabelFont(42);
   hframe601->GetXaxis()->SetLabelOffset(0.007);
   hframe601->GetXaxis()->SetLabelSize(0.05);
   hframe601->GetXaxis()->SetTitleSize(0.06);
   hframe601->GetXaxis()->SetTitleOffset(0.9);
   hframe601->GetXaxis()->SetTitleFont(42);
   hframe601->GetYaxis()->SetTitle("Events");
   hframe601->GetYaxis()->SetLabelFont(42);
   hframe601->GetYaxis()->SetLabelOffset(0.007);
   hframe601->GetYaxis()->SetLabelSize(0.05);
   hframe601->GetYaxis()->SetTitleSize(0.06);
   hframe601->GetYaxis()->SetTitleOffset(1.25);
   hframe601->GetYaxis()->SetTitleFont(42);
   hframe601->GetZaxis()->SetLabelFont(42);
   hframe601->GetZaxis()->SetLabelOffset(0.007);
   hframe601->GetZaxis()->SetLabelSize(0.05);
   hframe601->GetZaxis()->SetTitleSize(0.06);
   hframe601->GetZaxis()->SetTitleFont(42);
   hframe601->Draw(" ");
   
   THStack *thsBackground_grouped_wh3l_13TeV_sssf_njet_3l = new THStack();
   thsBackground_grouped_wh3l_13TeV_sssf_njet_3l->SetName("thsBackground_grouped_wh3l_13TeV_sssf_njet_3l");
   thsBackground_grouped_wh3l_13TeV_sssf_njet_3l->SetTitle("thsBackground_grouped_wh3l_13TeV_sssf_njet_3l");
   
   TH1F *thsBackground_grouped_wh3l_13TeV_sssf_njet_3l_stack_121 = new TH1F("thsBackground_grouped_wh3l_13TeV_sssf_njet_3l_stack_121","thsBackground_grouped_wh3l_13TeV_sssf_njet_3l",8,0,8);
   thsBackground_grouped_wh3l_13TeV_sssf_njet_3l_stack_121->SetMinimum(0);
   thsBackground_grouped_wh3l_13TeV_sssf_njet_3l_stack_121->SetMaximum(4.473178);
   thsBackground_grouped_wh3l_13TeV_sssf_njet_3l_stack_121->SetDirectory(0);
   thsBackground_grouped_wh3l_13TeV_sssf_njet_3l_stack_121->SetStats(0);
   thsBackground_grouped_wh3l_13TeV_sssf_njet_3l_stack_121->SetLineStyle(0);
   thsBackground_grouped_wh3l_13TeV_sssf_njet_3l_stack_121->SetMarkerStyle(20);
   thsBackground_grouped_wh3l_13TeV_sssf_njet_3l_stack_121->GetXaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_13TeV_sssf_njet_3l_stack_121->GetXaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_13TeV_sssf_njet_3l_stack_121->GetXaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_13TeV_sssf_njet_3l_stack_121->GetXaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_13TeV_sssf_njet_3l_stack_121->GetXaxis()->SetTitleOffset(0.9);
   thsBackground_grouped_wh3l_13TeV_sssf_njet_3l_stack_121->GetXaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_sssf_njet_3l_stack_121->GetYaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_13TeV_sssf_njet_3l_stack_121->GetYaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_13TeV_sssf_njet_3l_stack_121->GetYaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_13TeV_sssf_njet_3l_stack_121->GetYaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_13TeV_sssf_njet_3l_stack_121->GetYaxis()->SetTitleOffset(1.25);
   thsBackground_grouped_wh3l_13TeV_sssf_njet_3l_stack_121->GetYaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_sssf_njet_3l_stack_121->GetZaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_13TeV_sssf_njet_3l_stack_121->GetZaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_13TeV_sssf_njet_3l_stack_121->GetZaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_13TeV_sssf_njet_3l_stack_121->GetZaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_13TeV_sssf_njet_3l_stack_121->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_sssf_njet_3l->SetHistogram(thsBackground_grouped_wh3l_13TeV_sssf_njet_3l_stack_121);
   
   
   TH1D *new_histo_group_Fake_wh3l_13TeV_sssf_njet_3l602 = new TH1D("new_histo_group_Fake_wh3l_13TeV_sssf_njet_3l602","histo_Fake",8,0,8);
   new_histo_group_Fake_wh3l_13TeV_sssf_njet_3l602->SetBinContent(1,2.90203);
   new_histo_group_Fake_wh3l_13TeV_sssf_njet_3l602->SetBinError(1,1.358139);
   new_histo_group_Fake_wh3l_13TeV_sssf_njet_3l602->SetEntries(34);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_13TeV_sssf_njet_3l602->SetFillColor(ci);
   new_histo_group_Fake_wh3l_13TeV_sssf_njet_3l602->SetFillStyle(3001);

   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_13TeV_sssf_njet_3l602->SetLineColor(ci);
   new_histo_group_Fake_wh3l_13TeV_sssf_njet_3l602->GetXaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_13TeV_sssf_njet_3l602->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_13TeV_sssf_njet_3l602->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_13TeV_sssf_njet_3l602->GetXaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_13TeV_sssf_njet_3l602->GetYaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_13TeV_sssf_njet_3l602->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_13TeV_sssf_njet_3l602->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_13TeV_sssf_njet_3l602->GetYaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_13TeV_sssf_njet_3l602->GetZaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_13TeV_sssf_njet_3l602->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_13TeV_sssf_njet_3l602->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_13TeV_sssf_njet_3l602->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_sssf_njet_3l->Add(new_histo_group_Fake_wh3l_13TeV_sssf_njet_3l,"");
   
   TH1D *new_histo_group_WW_wh3l_13TeV_sssf_njet_3l603 = new TH1D("new_histo_group_WW_wh3l_13TeV_sssf_njet_3l603","histo_WW",8,0,8);
   new_histo_group_WW_wh3l_13TeV_sssf_njet_3l603->SetBinContent(1,0.02651546);
   new_histo_group_WW_wh3l_13TeV_sssf_njet_3l603->SetBinError(1,0.01918247);
   new_histo_group_WW_wh3l_13TeV_sssf_njet_3l603->SetEntries(2);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_13TeV_sssf_njet_3l603->SetFillColor(ci);
   new_histo_group_WW_wh3l_13TeV_sssf_njet_3l603->SetFillStyle(3001);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_13TeV_sssf_njet_3l603->SetLineColor(ci);
   new_histo_group_WW_wh3l_13TeV_sssf_njet_3l603->GetXaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_13TeV_sssf_njet_3l603->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_13TeV_sssf_njet_3l603->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_13TeV_sssf_njet_3l603->GetXaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_13TeV_sssf_njet_3l603->GetYaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_13TeV_sssf_njet_3l603->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_13TeV_sssf_njet_3l603->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_13TeV_sssf_njet_3l603->GetYaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_13TeV_sssf_njet_3l603->GetZaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_13TeV_sssf_njet_3l603->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_13TeV_sssf_njet_3l603->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_13TeV_sssf_njet_3l603->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_sssf_njet_3l->Add(new_histo_group_WW_wh3l_13TeV_sssf_njet_3l,"");
   
   TH1D *new_histo_group_VVV_wh3l_13TeV_sssf_njet_3l604 = new TH1D("new_histo_group_VVV_wh3l_13TeV_sssf_njet_3l604","histo_VVV",8,0,8);
   new_histo_group_VVV_wh3l_13TeV_sssf_njet_3l604->SetBinContent(1,0.001327523);
   new_histo_group_VVV_wh3l_13TeV_sssf_njet_3l604->SetBinError(1,0.0009526094);
   new_histo_group_VVV_wh3l_13TeV_sssf_njet_3l604->SetEntries(2);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_13TeV_sssf_njet_3l604->SetFillColor(ci);
   new_histo_group_VVV_wh3l_13TeV_sssf_njet_3l604->SetFillStyle(3001);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_13TeV_sssf_njet_3l604->SetLineColor(ci);
   new_histo_group_VVV_wh3l_13TeV_sssf_njet_3l604->GetXaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_13TeV_sssf_njet_3l604->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_13TeV_sssf_njet_3l604->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_13TeV_sssf_njet_3l604->GetXaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_13TeV_sssf_njet_3l604->GetYaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_13TeV_sssf_njet_3l604->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_13TeV_sssf_njet_3l604->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_13TeV_sssf_njet_3l604->GetYaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_13TeV_sssf_njet_3l604->GetZaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_13TeV_sssf_njet_3l604->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_13TeV_sssf_njet_3l604->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_13TeV_sssf_njet_3l604->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_sssf_njet_3l->Add(new_histo_group_VVV_wh3l_13TeV_sssf_njet_3l,"");
   
   TH1D *new_histo_group_Vg_wh3l_13TeV_sssf_njet_3l605 = new TH1D("new_histo_group_Vg_wh3l_13TeV_sssf_njet_3l605","histo_Vg",8,0,8);
   new_histo_group_Vg_wh3l_13TeV_sssf_njet_3l605->SetBinContent(1,0.0522728);
   new_histo_group_Vg_wh3l_13TeV_sssf_njet_3l605->SetBinError(1,0.0522728);
   new_histo_group_Vg_wh3l_13TeV_sssf_njet_3l605->SetEntries(1);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_13TeV_sssf_njet_3l605->SetFillColor(ci);
   new_histo_group_Vg_wh3l_13TeV_sssf_njet_3l605->SetFillStyle(3001);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_13TeV_sssf_njet_3l605->SetLineColor(ci);
   new_histo_group_Vg_wh3l_13TeV_sssf_njet_3l605->GetXaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_13TeV_sssf_njet_3l605->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_13TeV_sssf_njet_3l605->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_13TeV_sssf_njet_3l605->GetXaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_13TeV_sssf_njet_3l605->GetYaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_13TeV_sssf_njet_3l605->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_13TeV_sssf_njet_3l605->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_13TeV_sssf_njet_3l605->GetYaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_13TeV_sssf_njet_3l605->GetZaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_13TeV_sssf_njet_3l605->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_13TeV_sssf_njet_3l605->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_13TeV_sssf_njet_3l605->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_sssf_njet_3l->Add(new_histo_group_Vg_wh3l_13TeV_sssf_njet_3l,"");
   
   TH1D *new_histo_group_ZZ_wh3l_13TeV_sssf_njet_3l606 = new TH1D("new_histo_group_ZZ_wh3l_13TeV_sssf_njet_3l606","histo_ZZ",8,0,8);
   new_histo_group_ZZ_wh3l_13TeV_sssf_njet_3l606->SetBinContent(1,0.07785033);
   new_histo_group_ZZ_wh3l_13TeV_sssf_njet_3l606->SetBinError(1,0.05530859);
   new_histo_group_ZZ_wh3l_13TeV_sssf_njet_3l606->SetEntries(2);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_13TeV_sssf_njet_3l606->SetFillColor(ci);
   new_histo_group_ZZ_wh3l_13TeV_sssf_njet_3l606->SetFillStyle(3001);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_13TeV_sssf_njet_3l606->SetLineColor(ci);
   new_histo_group_ZZ_wh3l_13TeV_sssf_njet_3l606->GetXaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_13TeV_sssf_njet_3l606->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_13TeV_sssf_njet_3l606->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_13TeV_sssf_njet_3l606->GetXaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_13TeV_sssf_njet_3l606->GetYaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_13TeV_sssf_njet_3l606->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_13TeV_sssf_njet_3l606->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_13TeV_sssf_njet_3l606->GetYaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_13TeV_sssf_njet_3l606->GetZaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_13TeV_sssf_njet_3l606->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_13TeV_sssf_njet_3l606->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_13TeV_sssf_njet_3l606->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_sssf_njet_3l->Add(new_histo_group_ZZ_wh3l_13TeV_sssf_njet_3l,"");
   
   TH1D *new_histo_group_WZ_wh3l_13TeV_sssf_njet_3l607 = new TH1D("new_histo_group_WZ_wh3l_13TeV_sssf_njet_3l607","histo_WZ",8,0,8);
   new_histo_group_WZ_wh3l_13TeV_sssf_njet_3l607->SetBinContent(1,0.6226629);
   new_histo_group_WZ_wh3l_13TeV_sssf_njet_3l607->SetBinError(1,0.05775432);
   new_histo_group_WZ_wh3l_13TeV_sssf_njet_3l607->SetEntries(128);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_13TeV_sssf_njet_3l607->SetFillColor(ci);
   new_histo_group_WZ_wh3l_13TeV_sssf_njet_3l607->SetFillStyle(3001);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_13TeV_sssf_njet_3l607->SetLineColor(ci);
   new_histo_group_WZ_wh3l_13TeV_sssf_njet_3l607->GetXaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_13TeV_sssf_njet_3l607->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_13TeV_sssf_njet_3l607->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_13TeV_sssf_njet_3l607->GetXaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_13TeV_sssf_njet_3l607->GetYaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_13TeV_sssf_njet_3l607->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_13TeV_sssf_njet_3l607->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_13TeV_sssf_njet_3l607->GetYaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_13TeV_sssf_njet_3l607->GetZaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_13TeV_sssf_njet_3l607->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_13TeV_sssf_njet_3l607->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_13TeV_sssf_njet_3l607->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_sssf_njet_3l->Add(new_histo_group_WZ_wh3l_13TeV_sssf_njet_3l,"");
   
   TH1D *new_histo_group_Higgs_wh3l_13TeV_sssf_njet_3l608 = new TH1D("new_histo_group_Higgs_wh3l_13TeV_sssf_njet_3l608","histo_H_htt",8,0,8);
   new_histo_group_Higgs_wh3l_13TeV_sssf_njet_3l608->SetBinContent(1,0.2898486);
   new_histo_group_Higgs_wh3l_13TeV_sssf_njet_3l608->SetBinError(1,0.01780572);
   new_histo_group_Higgs_wh3l_13TeV_sssf_njet_3l608->SetEntries(522);
   new_histo_group_Higgs_wh3l_13TeV_sssf_njet_3l608->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_13TeV_sssf_njet_3l608->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_13TeV_sssf_njet_3l608->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_13TeV_sssf_njet_3l608->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_13TeV_sssf_njet_3l608->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_sssf_njet_3l608->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_sssf_njet_3l608->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_13TeV_sssf_njet_3l608->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_13TeV_sssf_njet_3l608->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_sssf_njet_3l608->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_sssf_njet_3l608->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_13TeV_sssf_njet_3l608->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_13TeV_sssf_njet_3l608->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_sssf_njet_3l608->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_sssf_njet_3l608->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_sssf_njet_3l->Add(new_histo_group_Higgs_wh3l_13TeV_sssf_njet_3l,"");
   thsBackground_grouped_wh3l_13TeV_sssf_njet_3l->Draw("hist same");
   
   thsSignal_grouped_wh3l_13TeV_sssf_njet_3l = new THStack();
   thsSignal_grouped_wh3l_13TeV_sssf_njet_3l->SetName("thsSignal_grouped_wh3l_13TeV_sssf_njet_3l");
   thsSignal_grouped_wh3l_13TeV_sssf_njet_3l->SetTitle("thsSignal_grouped_wh3l_13TeV_sssf_njet_3l");
   
   TH1F *thsSignal_grouped_wh3l_13TeV_sssf_njet_3l_stack_122 = new TH1F("thsSignal_grouped_wh3l_13TeV_sssf_njet_3l_stack_122","thsSignal_grouped_wh3l_13TeV_sssf_njet_3l",8,0,8);
   thsSignal_grouped_wh3l_13TeV_sssf_njet_3l_stack_122->SetMinimum(0);
   thsSignal_grouped_wh3l_13TeV_sssf_njet_3l_stack_122->SetMaximum(0.323037);
   thsSignal_grouped_wh3l_13TeV_sssf_njet_3l_stack_122->SetDirectory(0);
   thsSignal_grouped_wh3l_13TeV_sssf_njet_3l_stack_122->SetStats(0);
   thsSignal_grouped_wh3l_13TeV_sssf_njet_3l_stack_122->SetLineStyle(0);
   thsSignal_grouped_wh3l_13TeV_sssf_njet_3l_stack_122->SetMarkerStyle(20);
   thsSignal_grouped_wh3l_13TeV_sssf_njet_3l_stack_122->GetXaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_13TeV_sssf_njet_3l_stack_122->GetXaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_13TeV_sssf_njet_3l_stack_122->GetXaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_13TeV_sssf_njet_3l_stack_122->GetXaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_13TeV_sssf_njet_3l_stack_122->GetXaxis()->SetTitleOffset(0.9);
   thsSignal_grouped_wh3l_13TeV_sssf_njet_3l_stack_122->GetXaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_13TeV_sssf_njet_3l_stack_122->GetYaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_13TeV_sssf_njet_3l_stack_122->GetYaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_13TeV_sssf_njet_3l_stack_122->GetYaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_13TeV_sssf_njet_3l_stack_122->GetYaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_13TeV_sssf_njet_3l_stack_122->GetYaxis()->SetTitleOffset(1.25);
   thsSignal_grouped_wh3l_13TeV_sssf_njet_3l_stack_122->GetYaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_13TeV_sssf_njet_3l_stack_122->GetZaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_13TeV_sssf_njet_3l_stack_122->GetZaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_13TeV_sssf_njet_3l_stack_122->GetZaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_13TeV_sssf_njet_3l_stack_122->GetZaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_13TeV_sssf_njet_3l_stack_122->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_13TeV_sssf_njet_3l->SetHistogram(thsSignal_grouped_wh3l_13TeV_sssf_njet_3l_stack_122);
   
   
   TH1D *new_histo_group_Higgs_wh3l_13TeV_sssf_njet_3l609 = new TH1D("new_histo_group_Higgs_wh3l_13TeV_sssf_njet_3l609","histo_H_htt",8,0,8);
   new_histo_group_Higgs_wh3l_13TeV_sssf_njet_3l609->SetBinContent(1,0.2898486);
   new_histo_group_Higgs_wh3l_13TeV_sssf_njet_3l609->SetBinError(1,0.01780572);
   new_histo_group_Higgs_wh3l_13TeV_sssf_njet_3l609->SetEntries(522);
   new_histo_group_Higgs_wh3l_13TeV_sssf_njet_3l609->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_13TeV_sssf_njet_3l609->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_13TeV_sssf_njet_3l609->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_13TeV_sssf_njet_3l609->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_13TeV_sssf_njet_3l609->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_sssf_njet_3l609->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_sssf_njet_3l609->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_13TeV_sssf_njet_3l609->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_13TeV_sssf_njet_3l609->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_sssf_njet_3l609->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_sssf_njet_3l609->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_13TeV_sssf_njet_3l609->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_13TeV_sssf_njet_3l609->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_sssf_njet_3l609->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_sssf_njet_3l609->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_13TeV_sssf_njet_3l->Add(new_histo_group_Higgs_wh3l_13TeV_sssf_njet_3l,"");
   thsSignal_grouped_wh3l_13TeV_sssf_njet_3l->Draw("hist same noclear");
   
   Double_t _fx3121[8] = {
   0.5,
   1.5,
   2.5,
   3.5,
   4.5,
   5.5,
   6.5,
   7.5};
   Double_t _fy3121[8] = {
   3.682659,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _felx3121[8] = {
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5};
   Double_t _fely3121[8] = {
   1.84803,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fehx3121[8] = {
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5};
   Double_t _fehy3121[8] = {
   1.847996,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(8,_fx3121,_fy3121,_felx3121,_fehx3121,_fely3121,_fehy3121);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(12);
   grae->SetFillStyle(3004);
   grae->SetLineColor(12);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3121 = new TH1F("Graph_Graph3121","",100,0,8.8);
   Graph_Graph3121->SetMinimum(0);
   Graph_Graph3121->SetMaximum(6.083721);
   Graph_Graph3121->SetDirectory(0);
   Graph_Graph3121->SetStats(0);
   Graph_Graph3121->SetLineStyle(0);
   Graph_Graph3121->SetMarkerStyle(20);
   Graph_Graph3121->GetXaxis()->SetLabelFont(42);
   Graph_Graph3121->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3121->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3121->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3121->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3121->GetXaxis()->SetTitleFont(42);
   Graph_Graph3121->GetYaxis()->SetLabelFont(42);
   Graph_Graph3121->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3121->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3121->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3121->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3121->GetYaxis()->SetTitleFont(42);
   Graph_Graph3121->GetZaxis()->SetLabelFont(42);
   Graph_Graph3121->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3121->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3121->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3121->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3121);
   
   grae->Draw("2");
   
   Double_t _fx3122[8] = {
   0.5,
   1.5,
   2.5,
   3.5,
   4.5,
   5.5,
   6.5,
   7.5};
   Double_t _fy3122[8] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _felx3122[8] = {
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5};
   Double_t _fely3122[8] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fehx3122[8] = {
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5};
   Double_t _fehy3122[8] = {
   1.147908,
   1.147908,
   1.147908,
   1.147908,
   1.147908,
   1.147908,
   1.147908,
   1.147908};
   grae = new TGraphAsymmErrors(8,_fx3122,_fy3122,_felx3122,_fehx3122,_fely3122,_fehy3122);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(1);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3122 = new TH1F("Graph_Graph3122","",100,0,8.8);
   Graph_Graph3122->SetMinimum(0);
   Graph_Graph3122->SetMaximum(1.262698);
   Graph_Graph3122->SetDirectory(0);
   Graph_Graph3122->SetStats(0);
   Graph_Graph3122->SetLineStyle(0);
   Graph_Graph3122->SetMarkerStyle(20);
   Graph_Graph3122->GetXaxis()->SetLabelFont(42);
   Graph_Graph3122->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3122->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3122->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3122->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3122->GetXaxis()->SetTitleFont(42);
   Graph_Graph3122->GetYaxis()->SetLabelFont(42);
   Graph_Graph3122->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3122->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3122->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3122->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3122->GetYaxis()->SetTitleFont(42);
   Graph_Graph3122->GetZaxis()->SetLabelFont(42);
   Graph_Graph3122->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3122->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3122->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3122->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3122);
   
   grae->Draw("p0");
   
   TLegend *leg = new TLegend(0.2,0.7,0.8,0.9,NULL,"brNDC");
   leg->SetTextFont(62);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("new_histo_group_Fake_wh3l_13TeV_sssf_njet_3l","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_13TeV_sssf_njet_3l","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_13TeV_sssf_njet_3l","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_13TeV_sssf_njet_3l","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_13TeV_sssf_njet_3l","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_13TeV_sssf_njet_3l","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_13TeV_sssf_njet_3l","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_13TeV_sssf_njet_3l","Data","EPL");
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
   entry=leg->AddEntry("new_histo_group_Fake_wh3l_13TeV_sssf_njet_3l","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_13TeV_sssf_njet_3l","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_13TeV_sssf_njet_3l","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_13TeV_sssf_njet_3l","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_13TeV_sssf_njet_3l","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_13TeV_sssf_njet_3l","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_13TeV_sssf_njet_3l","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_13TeV_sssf_njet_3l","Data","EPL");
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
   
   TH1F *hframe_copy610 = new TH1F("hframe_copy610","",1000,0,8);
   hframe_copy610->SetMinimum(0);
   hframe_copy610->SetMaximum(9.931269);
   hframe_copy610->SetDirectory(0);
   hframe_copy610->SetStats(0);
   hframe_copy610->SetLineStyle(0);
   hframe_copy610->SetMarkerStyle(20);
   hframe_copy610->GetXaxis()->SetTitle("N_Jets");
   hframe_copy610->GetXaxis()->SetNdivisions(506);
   hframe_copy610->GetXaxis()->SetLabelFont(42);
   hframe_copy610->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy610->GetXaxis()->SetLabelSize(0.05);
   hframe_copy610->GetXaxis()->SetTitleSize(0.06);
   hframe_copy610->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy610->GetXaxis()->SetTitleFont(42);
   hframe_copy610->GetYaxis()->SetTitle("Events");
   hframe_copy610->GetYaxis()->SetLabelFont(42);
   hframe_copy610->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy610->GetYaxis()->SetLabelSize(0.05);
   hframe_copy610->GetYaxis()->SetTitleSize(0.06);
   hframe_copy610->GetYaxis()->SetTitleOffset(1.25);
   hframe_copy610->GetYaxis()->SetTitleFont(42);
   hframe_copy610->GetZaxis()->SetLabelFont(42);
   hframe_copy610->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy610->GetZaxis()->SetLabelSize(0.05);
   hframe_copy610->GetZaxis()->SetTitleSize(0.06);
   hframe_copy610->GetZaxis()->SetTitleFont(42);
   hframe_copy610->Draw("sameaxis");
   ccwh3l_13TeV_sssf_njet_3l->Modified();
   ccwh3l_13TeV_sssf_njet_3l->cd();
   ccwh3l_13TeV_sssf_njet_3l->SetSelected(ccwh3l_13TeV_sssf_njet_3l);
}
