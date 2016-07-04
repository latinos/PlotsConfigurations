void c_wh3l_MET_JetV_ZVeto_mll_13TeV_flagOSSF()
{
//=========Macro generated from canvas: ccwh3l_MET_JetV_ZVeto_mll_13TeV_flagOSSF/cc
//=========  (Sun Jul  3 01:22:21 2016) by ROOT version6.02/13
   TCanvas *ccwh3l_MET_JetV_ZVeto_mll_13TeV_flagOSSF = new TCanvas("ccwh3l_MET_JetV_ZVeto_mll_13TeV_flagOSSF", "cc",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   ccwh3l_MET_JetV_ZVeto_mll_13TeV_flagOSSF->SetHighLightColor(2);
   ccwh3l_MET_JetV_ZVeto_mll_13TeV_flagOSSF->Range(-0.4,-2.378049,2.1,15.91463);
   ccwh3l_MET_JetV_ZVeto_mll_13TeV_flagOSSF->SetFillColor(0);
   ccwh3l_MET_JetV_ZVeto_mll_13TeV_flagOSSF->SetBorderMode(0);
   ccwh3l_MET_JetV_ZVeto_mll_13TeV_flagOSSF->SetBorderSize(2);
   ccwh3l_MET_JetV_ZVeto_mll_13TeV_flagOSSF->SetTickx(1);
   ccwh3l_MET_JetV_ZVeto_mll_13TeV_flagOSSF->SetTicky(1);
   ccwh3l_MET_JetV_ZVeto_mll_13TeV_flagOSSF->SetLeftMargin(0.16);
   ccwh3l_MET_JetV_ZVeto_mll_13TeV_flagOSSF->SetRightMargin(0.04);
   ccwh3l_MET_JetV_ZVeto_mll_13TeV_flagOSSF->SetTopMargin(0.05);
   ccwh3l_MET_JetV_ZVeto_mll_13TeV_flagOSSF->SetBottomMargin(0.13);
   ccwh3l_MET_JetV_ZVeto_mll_13TeV_flagOSSF->SetFrameFillStyle(0);
   ccwh3l_MET_JetV_ZVeto_mll_13TeV_flagOSSF->SetFrameBorderMode(0);
   ccwh3l_MET_JetV_ZVeto_mll_13TeV_flagOSSF->SetFrameFillStyle(0);
   ccwh3l_MET_JetV_ZVeto_mll_13TeV_flagOSSF->SetFrameBorderMode(0);
   
   TH1F *hframe531 = new TH1F("hframe531","",1000,0,2);
   hframe531->SetMinimum(0);
   hframe531->SetMaximum(15);
   hframe531->SetDirectory(0);
   hframe531->SetStats(0);
   hframe531->SetLineStyle(0);
   hframe531->SetMarkerStyle(20);
   hframe531->GetXaxis()->SetTitle("flag OSSF");
   hframe531->GetXaxis()->SetNdivisions(506);
   hframe531->GetXaxis()->SetLabelFont(42);
   hframe531->GetXaxis()->SetLabelOffset(0.007);
   hframe531->GetXaxis()->SetLabelSize(0.05);
   hframe531->GetXaxis()->SetTitleSize(0.06);
   hframe531->GetXaxis()->SetTitleOffset(0.9);
   hframe531->GetXaxis()->SetTitleFont(42);
   hframe531->GetYaxis()->SetTitle("Events");
   hframe531->GetYaxis()->SetLabelFont(42);
   hframe531->GetYaxis()->SetLabelOffset(0.007);
   hframe531->GetYaxis()->SetLabelSize(0.05);
   hframe531->GetYaxis()->SetTitleSize(0.06);
   hframe531->GetYaxis()->SetTitleOffset(1.25);
   hframe531->GetYaxis()->SetTitleFont(42);
   hframe531->GetZaxis()->SetLabelFont(42);
   hframe531->GetZaxis()->SetLabelOffset(0.007);
   hframe531->GetZaxis()->SetLabelSize(0.05);
   hframe531->GetZaxis()->SetTitleSize(0.06);
   hframe531->GetZaxis()->SetTitleFont(42);
   hframe531->Draw(" ");
   
   THStack *thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_flagOSSF = new THStack();
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_flagOSSF->SetName("thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_flagOSSF");
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_flagOSSF->SetTitle("thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_flagOSSF");
   
   TH1F *thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_flagOSSF_stack_107 = new TH1F("thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_flagOSSF_stack_107","thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_flagOSSF",2,0,2);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_flagOSSF_stack_107->SetMinimum(0);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_flagOSSF_stack_107->SetMaximum(4.473803);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_flagOSSF_stack_107->SetDirectory(0);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_flagOSSF_stack_107->SetStats(0);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_flagOSSF_stack_107->SetLineStyle(0);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_flagOSSF_stack_107->SetMarkerStyle(20);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_flagOSSF_stack_107->GetXaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_flagOSSF_stack_107->GetXaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_flagOSSF_stack_107->GetXaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_flagOSSF_stack_107->GetXaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_flagOSSF_stack_107->GetXaxis()->SetTitleOffset(0.9);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_flagOSSF_stack_107->GetXaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_flagOSSF_stack_107->GetYaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_flagOSSF_stack_107->GetYaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_flagOSSF_stack_107->GetYaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_flagOSSF_stack_107->GetYaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_flagOSSF_stack_107->GetYaxis()->SetTitleOffset(1.25);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_flagOSSF_stack_107->GetYaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_flagOSSF_stack_107->GetZaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_flagOSSF_stack_107->GetZaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_flagOSSF_stack_107->GetZaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_flagOSSF_stack_107->GetZaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_flagOSSF_stack_107->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_flagOSSF->SetHistogram(thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_flagOSSF_stack_107);
   
   
   TH1D *new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_flagOSSF532 = new TH1D("new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_flagOSSF532","histo_Fake",2,0,2);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_flagOSSF532->SetBinContent(1,2.902626);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_flagOSSF532->SetBinError(1,1.358139);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_flagOSSF532->SetEntries(33);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_flagOSSF532->SetFillColor(ci);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_flagOSSF532->SetFillStyle(3001);

   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_flagOSSF532->SetLineColor(ci);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_flagOSSF532->GetXaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_flagOSSF532->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_flagOSSF532->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_flagOSSF532->GetXaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_flagOSSF532->GetYaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_flagOSSF532->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_flagOSSF532->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_flagOSSF532->GetYaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_flagOSSF532->GetZaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_flagOSSF532->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_flagOSSF532->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_flagOSSF532->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_flagOSSF->Add(new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_flagOSSF,"");
   
   TH1D *new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_flagOSSF533 = new TH1D("new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_flagOSSF533","histo_WW",2,0,2);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_flagOSSF533->SetBinContent(1,0.02651546);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_flagOSSF533->SetBinError(1,0.01918247);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_flagOSSF533->SetEntries(2);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_flagOSSF533->SetFillColor(ci);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_flagOSSF533->SetFillStyle(3001);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_flagOSSF533->SetLineColor(ci);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_flagOSSF533->GetXaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_flagOSSF533->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_flagOSSF533->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_flagOSSF533->GetXaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_flagOSSF533->GetYaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_flagOSSF533->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_flagOSSF533->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_flagOSSF533->GetYaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_flagOSSF533->GetZaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_flagOSSF533->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_flagOSSF533->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_flagOSSF533->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_flagOSSF->Add(new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_flagOSSF,"");
   
   TH1D *new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_flagOSSF534 = new TH1D("new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_flagOSSF534","histo_VVV",2,0,2);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_flagOSSF534->SetBinContent(1,0.1027931);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_flagOSSF534->SetBinError(1,0.01693453);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_flagOSSF534->SetEntries(62);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_flagOSSF534->SetFillColor(ci);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_flagOSSF534->SetFillStyle(3001);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_flagOSSF534->SetLineColor(ci);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_flagOSSF534->GetXaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_flagOSSF534->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_flagOSSF534->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_flagOSSF534->GetXaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_flagOSSF534->GetYaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_flagOSSF534->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_flagOSSF534->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_flagOSSF534->GetYaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_flagOSSF534->GetZaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_flagOSSF534->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_flagOSSF534->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_flagOSSF534->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_flagOSSF->Add(new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_flagOSSF,"");
   
   TH1D *new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_flagOSSF535 = new TH1D("new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_flagOSSF535","histo_Vg",2,0,2);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_flagOSSF535->SetBinContent(1,0.0522728);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_flagOSSF535->SetBinError(1,0.0522728);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_flagOSSF535->SetEntries(1);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_flagOSSF535->SetFillColor(ci);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_flagOSSF535->SetFillStyle(3001);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_flagOSSF535->SetLineColor(ci);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_flagOSSF535->GetXaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_flagOSSF535->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_flagOSSF535->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_flagOSSF535->GetXaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_flagOSSF535->GetYaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_flagOSSF535->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_flagOSSF535->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_flagOSSF535->GetYaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_flagOSSF535->GetZaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_flagOSSF535->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_flagOSSF535->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_flagOSSF535->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_flagOSSF->Add(new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_flagOSSF,"");
   
   TH1D *new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_flagOSSF536 = new TH1D("new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_flagOSSF536","histo_ZZ",2,0,2);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_flagOSSF536->SetBinContent(1,0.07785033);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_flagOSSF536->SetBinError(1,0.05530859);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_flagOSSF536->SetEntries(2);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_flagOSSF536->SetFillColor(ci);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_flagOSSF536->SetFillStyle(3001);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_flagOSSF536->SetLineColor(ci);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_flagOSSF536->GetXaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_flagOSSF536->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_flagOSSF536->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_flagOSSF536->GetXaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_flagOSSF536->GetYaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_flagOSSF536->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_flagOSSF536->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_flagOSSF536->GetYaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_flagOSSF536->GetZaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_flagOSSF536->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_flagOSSF536->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_flagOSSF536->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_flagOSSF->Add(new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_flagOSSF,"");
   
   TH1D *new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_flagOSSF537 = new TH1D("new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_flagOSSF537","histo_WZ",2,0,2);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_flagOSSF537->SetBinContent(1,0.6226629);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_flagOSSF537->SetBinError(1,0.05775432);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_flagOSSF537->SetEntries(128);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_flagOSSF537->SetFillColor(ci);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_flagOSSF537->SetFillStyle(3001);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_flagOSSF537->SetLineColor(ci);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_flagOSSF537->GetXaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_flagOSSF537->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_flagOSSF537->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_flagOSSF537->GetXaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_flagOSSF537->GetYaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_flagOSSF537->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_flagOSSF537->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_flagOSSF537->GetYaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_flagOSSF537->GetZaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_flagOSSF537->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_flagOSSF537->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_flagOSSF537->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_flagOSSF->Add(new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_flagOSSF,"");
   
   TH1D *new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_flagOSSF538 = new TH1D("new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_flagOSSF538","histo_H_htt",2,0,2);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_flagOSSF538->SetBinContent(1,0.2835517);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_flagOSSF538->SetBinError(1,0.01760248);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_flagOSSF538->SetEntries(512);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_flagOSSF538->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_flagOSSF538->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_flagOSSF538->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_flagOSSF538->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_flagOSSF538->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_flagOSSF538->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_flagOSSF538->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_flagOSSF538->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_flagOSSF538->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_flagOSSF538->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_flagOSSF538->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_flagOSSF538->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_flagOSSF538->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_flagOSSF538->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_flagOSSF538->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_flagOSSF->Add(new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_flagOSSF,"");
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_flagOSSF->Draw("hist same");
   
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_flagOSSF = new THStack();
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_flagOSSF->SetName("thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_flagOSSF");
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_flagOSSF->SetTitle("thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_flagOSSF");
   
   TH1F *thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_flagOSSF_stack_108 = new TH1F("thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_flagOSSF_stack_108","thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_flagOSSF",2,0,2);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_flagOSSF_stack_108->SetMinimum(0);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_flagOSSF_stack_108->SetMaximum(0.3162119);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_flagOSSF_stack_108->SetDirectory(0);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_flagOSSF_stack_108->SetStats(0);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_flagOSSF_stack_108->SetLineStyle(0);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_flagOSSF_stack_108->SetMarkerStyle(20);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_flagOSSF_stack_108->GetXaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_flagOSSF_stack_108->GetXaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_flagOSSF_stack_108->GetXaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_flagOSSF_stack_108->GetXaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_flagOSSF_stack_108->GetXaxis()->SetTitleOffset(0.9);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_flagOSSF_stack_108->GetXaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_flagOSSF_stack_108->GetYaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_flagOSSF_stack_108->GetYaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_flagOSSF_stack_108->GetYaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_flagOSSF_stack_108->GetYaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_flagOSSF_stack_108->GetYaxis()->SetTitleOffset(1.25);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_flagOSSF_stack_108->GetYaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_flagOSSF_stack_108->GetZaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_flagOSSF_stack_108->GetZaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_flagOSSF_stack_108->GetZaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_flagOSSF_stack_108->GetZaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_flagOSSF_stack_108->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_flagOSSF->SetHistogram(thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_flagOSSF_stack_108);
   
   
   TH1D *new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_flagOSSF539 = new TH1D("new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_flagOSSF539","histo_H_htt",2,0,2);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_flagOSSF539->SetBinContent(1,0.2835517);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_flagOSSF539->SetBinError(1,0.01760248);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_flagOSSF539->SetEntries(512);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_flagOSSF539->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_flagOSSF539->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_flagOSSF539->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_flagOSSF539->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_flagOSSF539->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_flagOSSF539->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_flagOSSF539->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_flagOSSF539->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_flagOSSF539->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_flagOSSF539->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_flagOSSF539->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_flagOSSF539->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_flagOSSF539->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_flagOSSF539->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_flagOSSF539->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_flagOSSF->Add(new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_flagOSSF,"");
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_flagOSSF->Draw("hist same noclear");
   
   Double_t _fx3107[2] = {
   0.5,
   1.5};
   Double_t _fy3107[2] = {
   3.78472,
   0};
   Double_t _felx3107[2] = {
   0.5,
   0.5};
   Double_t _fely3107[2] = {
   1.864364,
   0};
   Double_t _fehx3107[2] = {
   0.5,
   0.5};
   Double_t _fehy3107[2] = {
   1.864316,
   0};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(2,_fx3107,_fy3107,_felx3107,_fehx3107,_fely3107,_fehy3107);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(12);
   grae->SetFillStyle(3004);
   grae->SetLineColor(12);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3107 = new TH1F("Graph_Graph3107","",100,0,2.2);
   Graph_Graph3107->SetMinimum(0);
   Graph_Graph3107->SetMaximum(6.21394);
   Graph_Graph3107->SetDirectory(0);
   Graph_Graph3107->SetStats(0);
   Graph_Graph3107->SetLineStyle(0);
   Graph_Graph3107->SetMarkerStyle(20);
   Graph_Graph3107->GetXaxis()->SetLabelFont(42);
   Graph_Graph3107->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3107->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3107->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3107->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3107->GetXaxis()->SetTitleFont(42);
   Graph_Graph3107->GetYaxis()->SetLabelFont(42);
   Graph_Graph3107->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3107->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3107->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3107->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3107->GetYaxis()->SetTitleFont(42);
   Graph_Graph3107->GetZaxis()->SetLabelFont(42);
   Graph_Graph3107->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3107->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3107->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3107->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3107);
   
   grae->Draw("2");
   
   Double_t _fx3108[2] = {
   0.5,
   1.5};
   Double_t _fy3108[2] = {
   4,
   0};
   Double_t _felx3108[2] = {
   0.5,
   0.5};
   Double_t _fely3108[2] = {
   1.914367,
   0};
   Double_t _fehx3108[2] = {
   0.5,
   0.5};
   Double_t _fehy3108[2] = {
   3.162815,
   1.147908};
   grae = new TGraphAsymmErrors(2,_fx3108,_fy3108,_felx3108,_fehx3108,_fely3108,_fehy3108);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(1);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3108 = new TH1F("Graph_Graph3108","",100,0,2.2);
   Graph_Graph3108->SetMinimum(0);
   Graph_Graph3108->SetMaximum(7.879097);
   Graph_Graph3108->SetDirectory(0);
   Graph_Graph3108->SetStats(0);
   Graph_Graph3108->SetLineStyle(0);
   Graph_Graph3108->SetMarkerStyle(20);
   Graph_Graph3108->GetXaxis()->SetLabelFont(42);
   Graph_Graph3108->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3108->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3108->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3108->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3108->GetXaxis()->SetTitleFont(42);
   Graph_Graph3108->GetYaxis()->SetLabelFont(42);
   Graph_Graph3108->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3108->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3108->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3108->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3108->GetYaxis()->SetTitleFont(42);
   Graph_Graph3108->GetZaxis()->SetLabelFont(42);
   Graph_Graph3108->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3108->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3108->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3108->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3108);
   
   grae->Draw("p0");
   
   TLegend *leg = new TLegend(0.2,0.7,0.8,0.9,NULL,"brNDC");
   leg->SetTextFont(62);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_flagOSSF","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_flagOSSF","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_flagOSSF","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_flagOSSF","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_flagOSSF","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_flagOSSF","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_flagOSSF","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_MET_JetV_ZVeto_mll_13TeV_flagOSSF","Data","EPL");
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
   entry=leg->AddEntry("new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_flagOSSF","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_flagOSSF","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_flagOSSF","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_flagOSSF","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_flagOSSF","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_flagOSSF","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_flagOSSF","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_MET_JetV_ZVeto_mll_13TeV_flagOSSF","Data","EPL");
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
   
   TH1F *hframe_copy540 = new TH1F("hframe_copy540","",1000,0,2);
   hframe_copy540->SetMinimum(0);
   hframe_copy540->SetMaximum(15);
   hframe_copy540->SetDirectory(0);
   hframe_copy540->SetStats(0);
   hframe_copy540->SetLineStyle(0);
   hframe_copy540->SetMarkerStyle(20);
   hframe_copy540->GetXaxis()->SetTitle("flag OSSF");
   hframe_copy540->GetXaxis()->SetNdivisions(506);
   hframe_copy540->GetXaxis()->SetLabelFont(42);
   hframe_copy540->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy540->GetXaxis()->SetLabelSize(0.05);
   hframe_copy540->GetXaxis()->SetTitleSize(0.06);
   hframe_copy540->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy540->GetXaxis()->SetTitleFont(42);
   hframe_copy540->GetYaxis()->SetTitle("Events");
   hframe_copy540->GetYaxis()->SetLabelFont(42);
   hframe_copy540->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy540->GetYaxis()->SetLabelSize(0.05);
   hframe_copy540->GetYaxis()->SetTitleSize(0.06);
   hframe_copy540->GetYaxis()->SetTitleOffset(1.25);
   hframe_copy540->GetYaxis()->SetTitleFont(42);
   hframe_copy540->GetZaxis()->SetLabelFont(42);
   hframe_copy540->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy540->GetZaxis()->SetLabelSize(0.05);
   hframe_copy540->GetZaxis()->SetTitleSize(0.06);
   hframe_copy540->GetZaxis()->SetTitleFont(42);
   hframe_copy540->Draw("sameaxis");
   ccwh3l_MET_JetV_ZVeto_mll_13TeV_flagOSSF->Modified();
   ccwh3l_MET_JetV_ZVeto_mll_13TeV_flagOSSF->cd();
   ccwh3l_MET_JetV_ZVeto_mll_13TeV_flagOSSF->SetSelected(ccwh3l_MET_JetV_ZVeto_mll_13TeV_flagOSSF);
}
