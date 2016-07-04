void c_wh3l_zg_13TeV_drllmin3l()
{
//=========Macro generated from canvas: ccwh3l_zg_13TeV_drllmin3l/cc
//=========  (Sat Jul  2 20:39:48 2016) by ROOT version6.02/13
   TCanvas *ccwh3l_zg_13TeV_drllmin3l = new TCanvas("ccwh3l_zg_13TeV_drllmin3l", "cc",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   ccwh3l_zg_13TeV_drllmin3l->SetHighLightColor(2);
   ccwh3l_zg_13TeV_drllmin3l->Range(-0.8,-27.27235,4.2,182.515);
   ccwh3l_zg_13TeV_drllmin3l->SetFillColor(0);
   ccwh3l_zg_13TeV_drllmin3l->SetBorderMode(0);
   ccwh3l_zg_13TeV_drllmin3l->SetBorderSize(2);
   ccwh3l_zg_13TeV_drllmin3l->SetTickx(1);
   ccwh3l_zg_13TeV_drllmin3l->SetTicky(1);
   ccwh3l_zg_13TeV_drllmin3l->SetLeftMargin(0.16);
   ccwh3l_zg_13TeV_drllmin3l->SetRightMargin(0.04);
   ccwh3l_zg_13TeV_drllmin3l->SetTopMargin(0.05);
   ccwh3l_zg_13TeV_drllmin3l->SetBottomMargin(0.13);
   ccwh3l_zg_13TeV_drllmin3l->SetFrameFillStyle(0);
   ccwh3l_zg_13TeV_drllmin3l->SetFrameBorderMode(0);
   ccwh3l_zg_13TeV_drllmin3l->SetFrameFillStyle(0);
   ccwh3l_zg_13TeV_drllmin3l->SetFrameBorderMode(0);
   
   TH1F *hframe208 = new TH1F("hframe208","",1000,0,4);
   hframe208->SetMinimum(0);
   hframe208->SetMaximum(172.0256);
   hframe208->SetDirectory(0);
   hframe208->SetStats(0);
   hframe208->SetLineStyle(0);
   hframe208->SetMarkerStyle(20);
   hframe208->GetXaxis()->SetTitle("min #Delta Rm_{ll} [GeV]");
   hframe208->GetXaxis()->SetNdivisions(506);
   hframe208->GetXaxis()->SetLabelFont(42);
   hframe208->GetXaxis()->SetLabelOffset(0.007);
   hframe208->GetXaxis()->SetLabelSize(0.05);
   hframe208->GetXaxis()->SetTitleSize(0.06);
   hframe208->GetXaxis()->SetTitleOffset(0.9);
   hframe208->GetXaxis()->SetTitleFont(42);
   hframe208->GetYaxis()->SetTitle("Events");
   hframe208->GetYaxis()->SetLabelFont(42);
   hframe208->GetYaxis()->SetLabelOffset(0.007);
   hframe208->GetYaxis()->SetLabelSize(0.05);
   hframe208->GetYaxis()->SetTitleSize(0.06);
   hframe208->GetYaxis()->SetTitleOffset(1.25);
   hframe208->GetYaxis()->SetTitleFont(42);
   hframe208->GetZaxis()->SetLabelFont(42);
   hframe208->GetZaxis()->SetLabelOffset(0.007);
   hframe208->GetZaxis()->SetLabelSize(0.05);
   hframe208->GetZaxis()->SetTitleSize(0.06);
   hframe208->GetZaxis()->SetTitleFont(42);
   hframe208->Draw(" ");
   
   THStack *thsBackground_grouped_wh3l_zg_13TeV_drllmin3l = new THStack();
   thsBackground_grouped_wh3l_zg_13TeV_drllmin3l->SetName("thsBackground_grouped_wh3l_zg_13TeV_drllmin3l");
   thsBackground_grouped_wh3l_zg_13TeV_drllmin3l->SetTitle("thsBackground_grouped_wh3l_zg_13TeV_drllmin3l");
   
   TH1F *thsBackground_grouped_wh3l_zg_13TeV_drllmin3l_stack_47 = new TH1F("thsBackground_grouped_wh3l_zg_13TeV_drllmin3l_stack_47","thsBackground_grouped_wh3l_zg_13TeV_drllmin3l",3,0,4);
   thsBackground_grouped_wh3l_zg_13TeV_drllmin3l_stack_47->SetMinimum(0);
   thsBackground_grouped_wh3l_zg_13TeV_drllmin3l_stack_47->SetMaximum(63.89638);
   thsBackground_grouped_wh3l_zg_13TeV_drllmin3l_stack_47->SetDirectory(0);
   thsBackground_grouped_wh3l_zg_13TeV_drllmin3l_stack_47->SetStats(0);
   thsBackground_grouped_wh3l_zg_13TeV_drllmin3l_stack_47->SetLineStyle(0);
   thsBackground_grouped_wh3l_zg_13TeV_drllmin3l_stack_47->SetMarkerStyle(20);
   thsBackground_grouped_wh3l_zg_13TeV_drllmin3l_stack_47->GetXaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_drllmin3l_stack_47->GetXaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_zg_13TeV_drllmin3l_stack_47->GetXaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_zg_13TeV_drllmin3l_stack_47->GetXaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_zg_13TeV_drllmin3l_stack_47->GetXaxis()->SetTitleOffset(0.9);
   thsBackground_grouped_wh3l_zg_13TeV_drllmin3l_stack_47->GetXaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_drllmin3l_stack_47->GetYaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_drllmin3l_stack_47->GetYaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_zg_13TeV_drllmin3l_stack_47->GetYaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_zg_13TeV_drllmin3l_stack_47->GetYaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_zg_13TeV_drllmin3l_stack_47->GetYaxis()->SetTitleOffset(1.25);
   thsBackground_grouped_wh3l_zg_13TeV_drllmin3l_stack_47->GetYaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_drllmin3l_stack_47->GetZaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_drllmin3l_stack_47->GetZaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_zg_13TeV_drllmin3l_stack_47->GetZaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_zg_13TeV_drllmin3l_stack_47->GetZaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_zg_13TeV_drllmin3l_stack_47->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_drllmin3l->SetHistogram(thsBackground_grouped_wh3l_zg_13TeV_drllmin3l_stack_47);
   
   
   TH1D *new_histo_group_Fake_wh3l_zg_13TeV_drllmin3l209 = new TH1D("new_histo_group_Fake_wh3l_zg_13TeV_drllmin3l209","histo_Fake",3,0,4);
   new_histo_group_Fake_wh3l_zg_13TeV_drllmin3l209->SetBinContent(1,7.672206);
   new_histo_group_Fake_wh3l_zg_13TeV_drllmin3l209->SetBinContent(2,8.946375);
   new_histo_group_Fake_wh3l_zg_13TeV_drllmin3l209->SetBinContent(3,6.962221);
   new_histo_group_Fake_wh3l_zg_13TeV_drllmin3l209->SetBinError(1,2.200364);
   new_histo_group_Fake_wh3l_zg_13TeV_drllmin3l209->SetBinError(2,2.890403);
   new_histo_group_Fake_wh3l_zg_13TeV_drllmin3l209->SetBinError(3,2.302958);
   new_histo_group_Fake_wh3l_zg_13TeV_drllmin3l209->SetEntries(460);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_zg_13TeV_drllmin3l209->SetFillColor(ci);
   new_histo_group_Fake_wh3l_zg_13TeV_drllmin3l209->SetFillStyle(3001);

   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_zg_13TeV_drllmin3l209->SetLineColor(ci);
   new_histo_group_Fake_wh3l_zg_13TeV_drllmin3l209->GetXaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_zg_13TeV_drllmin3l209->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_zg_13TeV_drllmin3l209->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_zg_13TeV_drllmin3l209->GetXaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_zg_13TeV_drllmin3l209->GetYaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_zg_13TeV_drllmin3l209->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_zg_13TeV_drllmin3l209->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_zg_13TeV_drllmin3l209->GetYaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_zg_13TeV_drllmin3l209->GetZaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_zg_13TeV_drllmin3l209->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_zg_13TeV_drllmin3l209->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_zg_13TeV_drllmin3l209->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_drllmin3l->Add(new_histo_group_Fake_wh3l_zg_13TeV_drllmin3l,"");
   
   TH1D *new_histo_group_WW_wh3l_zg_13TeV_drllmin3l210 = new TH1D("new_histo_group_WW_wh3l_zg_13TeV_drllmin3l210","histo_WW",3,0,4);
   new_histo_group_WW_wh3l_zg_13TeV_drllmin3l210->SetBinContent(2,0.009961222);
   new_histo_group_WW_wh3l_zg_13TeV_drllmin3l210->SetBinError(2,0.009961222);
   new_histo_group_WW_wh3l_zg_13TeV_drllmin3l210->SetEntries(1);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_zg_13TeV_drllmin3l210->SetFillColor(ci);
   new_histo_group_WW_wh3l_zg_13TeV_drllmin3l210->SetFillStyle(3001);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_zg_13TeV_drllmin3l210->SetLineColor(ci);
   new_histo_group_WW_wh3l_zg_13TeV_drllmin3l210->GetXaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_zg_13TeV_drllmin3l210->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_zg_13TeV_drllmin3l210->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_zg_13TeV_drllmin3l210->GetXaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_zg_13TeV_drllmin3l210->GetYaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_zg_13TeV_drllmin3l210->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_zg_13TeV_drllmin3l210->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_zg_13TeV_drllmin3l210->GetYaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_zg_13TeV_drllmin3l210->GetZaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_zg_13TeV_drllmin3l210->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_zg_13TeV_drllmin3l210->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_zg_13TeV_drllmin3l210->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_drllmin3l->Add(new_histo_group_WW_wh3l_zg_13TeV_drllmin3l,"");
   
   TH1D *new_histo_group_Vg_wh3l_zg_13TeV_drllmin3l211 = new TH1D("new_histo_group_Vg_wh3l_zg_13TeV_drllmin3l211","histo_Vg",3,0,4);
   new_histo_group_Vg_wh3l_zg_13TeV_drllmin3l211->SetBinContent(1,25.09766);
   new_histo_group_Vg_wh3l_zg_13TeV_drllmin3l211->SetBinContent(2,50.34664);
   new_histo_group_Vg_wh3l_zg_13TeV_drllmin3l211->SetBinContent(3,28.52255);
   new_histo_group_Vg_wh3l_zg_13TeV_drllmin3l211->SetBinError(1,1.955777);
   new_histo_group_Vg_wh3l_zg_13TeV_drllmin3l211->SetBinError(2,2.653876);
   new_histo_group_Vg_wh3l_zg_13TeV_drllmin3l211->SetBinError(3,2.007086);
   new_histo_group_Vg_wh3l_zg_13TeV_drllmin3l211->SetEntries(1376);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_zg_13TeV_drllmin3l211->SetFillColor(ci);
   new_histo_group_Vg_wh3l_zg_13TeV_drllmin3l211->SetFillStyle(3001);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_zg_13TeV_drllmin3l211->SetLineColor(ci);
   new_histo_group_Vg_wh3l_zg_13TeV_drllmin3l211->GetXaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_zg_13TeV_drllmin3l211->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_zg_13TeV_drllmin3l211->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_zg_13TeV_drllmin3l211->GetXaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_zg_13TeV_drllmin3l211->GetYaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_zg_13TeV_drllmin3l211->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_zg_13TeV_drllmin3l211->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_zg_13TeV_drllmin3l211->GetYaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_zg_13TeV_drllmin3l211->GetZaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_zg_13TeV_drllmin3l211->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_zg_13TeV_drllmin3l211->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_zg_13TeV_drllmin3l211->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_drllmin3l->Add(new_histo_group_Vg_wh3l_zg_13TeV_drllmin3l,"");
   
   TH1D *new_histo_group_ZZ_wh3l_zg_13TeV_drllmin3l212 = new TH1D("new_histo_group_ZZ_wh3l_zg_13TeV_drllmin3l212","histo_ZZ",3,0,4);
   new_histo_group_ZZ_wh3l_zg_13TeV_drllmin3l212->SetBinContent(1,0.1076606);
   new_histo_group_ZZ_wh3l_zg_13TeV_drllmin3l212->SetBinContent(2,0.3992858);
   new_histo_group_ZZ_wh3l_zg_13TeV_drllmin3l212->SetBinContent(3,0.08642198);
   new_histo_group_ZZ_wh3l_zg_13TeV_drllmin3l212->SetBinError(1,0.06483897);
   new_histo_group_ZZ_wh3l_zg_13TeV_drllmin3l212->SetBinError(2,0.1266527);
   new_histo_group_ZZ_wh3l_zg_13TeV_drllmin3l212->SetBinError(3,0.06129487);
   new_histo_group_ZZ_wh3l_zg_13TeV_drllmin3l212->SetEntries(16);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_zg_13TeV_drllmin3l212->SetFillColor(ci);
   new_histo_group_ZZ_wh3l_zg_13TeV_drllmin3l212->SetFillStyle(3001);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_zg_13TeV_drllmin3l212->SetLineColor(ci);
   new_histo_group_ZZ_wh3l_zg_13TeV_drllmin3l212->GetXaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_zg_13TeV_drllmin3l212->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_zg_13TeV_drllmin3l212->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_zg_13TeV_drllmin3l212->GetXaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_zg_13TeV_drllmin3l212->GetYaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_zg_13TeV_drllmin3l212->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_zg_13TeV_drllmin3l212->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_zg_13TeV_drllmin3l212->GetYaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_zg_13TeV_drllmin3l212->GetZaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_zg_13TeV_drllmin3l212->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_zg_13TeV_drllmin3l212->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_zg_13TeV_drllmin3l212->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_drllmin3l->Add(new_histo_group_ZZ_wh3l_zg_13TeV_drllmin3l,"");
   
   TH1D *new_histo_group_WZ_wh3l_zg_13TeV_drllmin3l213 = new TH1D("new_histo_group_WZ_wh3l_zg_13TeV_drllmin3l213","histo_WZ",3,0,4);
   new_histo_group_WZ_wh3l_zg_13TeV_drllmin3l213->SetBinContent(1,0.5806592);
   new_histo_group_WZ_wh3l_zg_13TeV_drllmin3l213->SetBinContent(2,1.100328);
   new_histo_group_WZ_wh3l_zg_13TeV_drllmin3l213->SetBinContent(3,0.1975365);
   new_histo_group_WZ_wh3l_zg_13TeV_drllmin3l213->SetBinError(1,0.05564258);
   new_histo_group_WZ_wh3l_zg_13TeV_drllmin3l213->SetBinError(2,0.07776555);
   new_histo_group_WZ_wh3l_zg_13TeV_drllmin3l213->SetBinError(3,0.03288283);
   new_histo_group_WZ_wh3l_zg_13TeV_drllmin3l213->SetEntries(376);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_zg_13TeV_drllmin3l213->SetFillColor(ci);
   new_histo_group_WZ_wh3l_zg_13TeV_drllmin3l213->SetFillStyle(3001);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_zg_13TeV_drllmin3l213->SetLineColor(ci);
   new_histo_group_WZ_wh3l_zg_13TeV_drllmin3l213->GetXaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_zg_13TeV_drllmin3l213->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_zg_13TeV_drllmin3l213->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_zg_13TeV_drllmin3l213->GetXaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_zg_13TeV_drllmin3l213->GetYaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_zg_13TeV_drllmin3l213->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_zg_13TeV_drllmin3l213->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_zg_13TeV_drllmin3l213->GetYaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_zg_13TeV_drllmin3l213->GetZaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_zg_13TeV_drllmin3l213->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_zg_13TeV_drllmin3l213->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_zg_13TeV_drllmin3l213->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_drllmin3l->Add(new_histo_group_WZ_wh3l_zg_13TeV_drllmin3l,"");
   
   TH1D *new_histo_group_Higgs_wh3l_zg_13TeV_drllmin3l214 = new TH1D("new_histo_group_Higgs_wh3l_zg_13TeV_drllmin3l214","histo_H_htt",3,0,4);
   new_histo_group_Higgs_wh3l_zg_13TeV_drllmin3l214->SetBinContent(1,0.03275255);
   new_histo_group_Higgs_wh3l_zg_13TeV_drllmin3l214->SetBinContent(2,0.05110711);
   new_histo_group_Higgs_wh3l_zg_13TeV_drllmin3l214->SetBinContent(3,0.004916991);
   new_histo_group_Higgs_wh3l_zg_13TeV_drllmin3l214->SetBinError(1,0.006615382);
   new_histo_group_Higgs_wh3l_zg_13TeV_drllmin3l214->SetBinError(2,0.006913988);
   new_histo_group_Higgs_wh3l_zg_13TeV_drllmin3l214->SetBinError(3,0.001878556);
   new_histo_group_Higgs_wh3l_zg_13TeV_drllmin3l214->SetEntries(180);
   new_histo_group_Higgs_wh3l_zg_13TeV_drllmin3l214->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_zg_13TeV_drllmin3l214->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_zg_13TeV_drllmin3l214->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_zg_13TeV_drllmin3l214->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_zg_13TeV_drllmin3l214->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_zg_13TeV_drllmin3l214->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_zg_13TeV_drllmin3l214->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_zg_13TeV_drllmin3l214->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_zg_13TeV_drllmin3l214->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_zg_13TeV_drllmin3l214->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_zg_13TeV_drllmin3l214->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_zg_13TeV_drllmin3l214->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_zg_13TeV_drllmin3l214->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_zg_13TeV_drllmin3l214->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_zg_13TeV_drllmin3l214->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_drllmin3l->Add(new_histo_group_Higgs_wh3l_zg_13TeV_drllmin3l,"");
   thsBackground_grouped_wh3l_zg_13TeV_drllmin3l->Draw("hist same");
   
   thsSignal_grouped_wh3l_zg_13TeV_drllmin3l = new THStack();
   thsSignal_grouped_wh3l_zg_13TeV_drllmin3l->SetName("thsSignal_grouped_wh3l_zg_13TeV_drllmin3l");
   thsSignal_grouped_wh3l_zg_13TeV_drllmin3l->SetTitle("thsSignal_grouped_wh3l_zg_13TeV_drllmin3l");
   
   TH1F *thsSignal_grouped_wh3l_zg_13TeV_drllmin3l_stack_48 = new TH1F("thsSignal_grouped_wh3l_zg_13TeV_drllmin3l_stack_48","thsSignal_grouped_wh3l_zg_13TeV_drllmin3l",3,0,4);
   thsSignal_grouped_wh3l_zg_13TeV_drllmin3l_stack_48->SetMinimum(0);
   thsSignal_grouped_wh3l_zg_13TeV_drllmin3l_stack_48->SetMaximum(0.06092215);
   thsSignal_grouped_wh3l_zg_13TeV_drllmin3l_stack_48->SetDirectory(0);
   thsSignal_grouped_wh3l_zg_13TeV_drllmin3l_stack_48->SetStats(0);
   thsSignal_grouped_wh3l_zg_13TeV_drllmin3l_stack_48->SetLineStyle(0);
   thsSignal_grouped_wh3l_zg_13TeV_drllmin3l_stack_48->SetMarkerStyle(20);
   thsSignal_grouped_wh3l_zg_13TeV_drllmin3l_stack_48->GetXaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_zg_13TeV_drllmin3l_stack_48->GetXaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_zg_13TeV_drllmin3l_stack_48->GetXaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_zg_13TeV_drllmin3l_stack_48->GetXaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_zg_13TeV_drllmin3l_stack_48->GetXaxis()->SetTitleOffset(0.9);
   thsSignal_grouped_wh3l_zg_13TeV_drllmin3l_stack_48->GetXaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_zg_13TeV_drllmin3l_stack_48->GetYaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_zg_13TeV_drllmin3l_stack_48->GetYaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_zg_13TeV_drllmin3l_stack_48->GetYaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_zg_13TeV_drllmin3l_stack_48->GetYaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_zg_13TeV_drllmin3l_stack_48->GetYaxis()->SetTitleOffset(1.25);
   thsSignal_grouped_wh3l_zg_13TeV_drllmin3l_stack_48->GetYaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_zg_13TeV_drllmin3l_stack_48->GetZaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_zg_13TeV_drllmin3l_stack_48->GetZaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_zg_13TeV_drllmin3l_stack_48->GetZaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_zg_13TeV_drllmin3l_stack_48->GetZaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_zg_13TeV_drllmin3l_stack_48->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_zg_13TeV_drllmin3l->SetHistogram(thsSignal_grouped_wh3l_zg_13TeV_drllmin3l_stack_48);
   
   
   TH1D *new_histo_group_Higgs_wh3l_zg_13TeV_drllmin3l215 = new TH1D("new_histo_group_Higgs_wh3l_zg_13TeV_drllmin3l215","histo_H_htt",3,0,4);
   new_histo_group_Higgs_wh3l_zg_13TeV_drllmin3l215->SetBinContent(1,0.03275255);
   new_histo_group_Higgs_wh3l_zg_13TeV_drllmin3l215->SetBinContent(2,0.05110711);
   new_histo_group_Higgs_wh3l_zg_13TeV_drllmin3l215->SetBinContent(3,0.004916991);
   new_histo_group_Higgs_wh3l_zg_13TeV_drllmin3l215->SetBinError(1,0.006615382);
   new_histo_group_Higgs_wh3l_zg_13TeV_drllmin3l215->SetBinError(2,0.006913988);
   new_histo_group_Higgs_wh3l_zg_13TeV_drllmin3l215->SetBinError(3,0.001878556);
   new_histo_group_Higgs_wh3l_zg_13TeV_drllmin3l215->SetEntries(180);
   new_histo_group_Higgs_wh3l_zg_13TeV_drllmin3l215->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_zg_13TeV_drllmin3l215->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_zg_13TeV_drllmin3l215->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_zg_13TeV_drllmin3l215->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_zg_13TeV_drllmin3l215->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_zg_13TeV_drllmin3l215->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_zg_13TeV_drllmin3l215->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_zg_13TeV_drllmin3l215->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_zg_13TeV_drllmin3l215->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_zg_13TeV_drllmin3l215->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_zg_13TeV_drllmin3l215->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_zg_13TeV_drllmin3l215->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_zg_13TeV_drllmin3l215->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_zg_13TeV_drllmin3l215->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_zg_13TeV_drllmin3l215->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_zg_13TeV_drllmin3l->Add(new_histo_group_Higgs_wh3l_zg_13TeV_drllmin3l,"");
   thsSignal_grouped_wh3l_zg_13TeV_drllmin3l->Draw("hist same noclear");
   
   Double_t _fx3047[3] = {
   0.6666667,
   2,
   3.333333};
   Double_t _fy3047[3] = {
   33.45818,
   60.80259,
   35.76872};
   Double_t _felx3047[3] = {
   0.6666667,
   0.6666667,
   0.6666667};
   Double_t _fely3047[3] = {
   5.198233,
   6.974266,
   5.206627};
   Double_t _fehx3047[3] = {
   0.6666667,
   0.6666667,
   0.6666667};
   Double_t _fehy3047[3] = {
   5.191688,
   6.955302,
   5.207616};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(3,_fx3047,_fy3047,_felx3047,_fehx3047,_fely3047,_fehy3047);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(12);
   grae->SetFillStyle(3004);
   grae->SetLineColor(12);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3047 = new TH1F("Graph_Graph3047","",100,0,4.4);
   Graph_Graph3047->SetMinimum(24.31015);
   Graph_Graph3047->SetMaximum(71.70769);
   Graph_Graph3047->SetDirectory(0);
   Graph_Graph3047->SetStats(0);
   Graph_Graph3047->SetLineStyle(0);
   Graph_Graph3047->SetMarkerStyle(20);
   Graph_Graph3047->GetXaxis()->SetLabelFont(42);
   Graph_Graph3047->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3047->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3047->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3047->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3047->GetXaxis()->SetTitleFont(42);
   Graph_Graph3047->GetYaxis()->SetLabelFont(42);
   Graph_Graph3047->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3047->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3047->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3047->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3047->GetYaxis()->SetTitleFont(42);
   Graph_Graph3047->GetZaxis()->SetLabelFont(42);
   Graph_Graph3047->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3047->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3047->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3047->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3047);
   
   grae->Draw("2");
   
   Double_t _fx3048[3] = {
   0.6666667,
   2,
   3.333333};
   Double_t _fy3048[3] = {
   32,
   61,
   40};
   Double_t _felx3048[3] = {
   0.6666667,
   0.6666667,
   0.6666667};
   Double_t _fely3048[3] = {
   5.627243,
   7.788934,
   6.298123};
   Double_t _fehx3048[3] = {
   0.6666667,
   0.6666667,
   0.6666667};
   Double_t _fehy3048[3] = {
   6.715892,
   8.853137,
   7.377414};
   grae = new TGraphAsymmErrors(3,_fx3048,_fy3048,_felx3048,_fehx3048,_fely3048,_fehy3048);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(1);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3048 = new TH1F("Graph_Graph3048","",100,0,4.4);
   Graph_Graph3048->SetMinimum(22.02472);
   Graph_Graph3048->SetMaximum(74.20118);
   Graph_Graph3048->SetDirectory(0);
   Graph_Graph3048->SetStats(0);
   Graph_Graph3048->SetLineStyle(0);
   Graph_Graph3048->SetMarkerStyle(20);
   Graph_Graph3048->GetXaxis()->SetLabelFont(42);
   Graph_Graph3048->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3048->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3048->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3048->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3048->GetXaxis()->SetTitleFont(42);
   Graph_Graph3048->GetYaxis()->SetLabelFont(42);
   Graph_Graph3048->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3048->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3048->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3048->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3048->GetYaxis()->SetTitleFont(42);
   Graph_Graph3048->GetZaxis()->SetLabelFont(42);
   Graph_Graph3048->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3048->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3048->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3048->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3048);
   
   grae->Draw("p0");
   
   TLegend *leg = new TLegend(0.2,0.7,0.8,0.9,NULL,"brNDC");
   leg->SetTextFont(62);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("new_histo_group_Fake_wh3l_zg_13TeV_drllmin3l","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_zg_13TeV_drllmin3l","WW","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_zg_13TeV_drllmin3l","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_zg_13TeV_drllmin3l","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_zg_13TeV_drllmin3l","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_zg_13TeV_drllmin3l","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_zg_13TeV_drllmin3l","Data","EPL");
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
   entry=leg->AddEntry("new_histo_group_Fake_wh3l_zg_13TeV_drllmin3l","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_zg_13TeV_drllmin3l","WW","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_zg_13TeV_drllmin3l","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_zg_13TeV_drllmin3l","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_zg_13TeV_drllmin3l","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_zg_13TeV_drllmin3l","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_zg_13TeV_drllmin3l","Data","EPL");
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
   
   TH1F *hframe_copy216 = new TH1F("hframe_copy216","",1000,0,4);
   hframe_copy216->SetMinimum(0);
   hframe_copy216->SetMaximum(172.0256);
   hframe_copy216->SetDirectory(0);
   hframe_copy216->SetStats(0);
   hframe_copy216->SetLineStyle(0);
   hframe_copy216->SetMarkerStyle(20);
   hframe_copy216->GetXaxis()->SetTitle("min #Delta Rm_{ll} [GeV]");
   hframe_copy216->GetXaxis()->SetNdivisions(506);
   hframe_copy216->GetXaxis()->SetLabelFont(42);
   hframe_copy216->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy216->GetXaxis()->SetLabelSize(0.05);
   hframe_copy216->GetXaxis()->SetTitleSize(0.06);
   hframe_copy216->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy216->GetXaxis()->SetTitleFont(42);
   hframe_copy216->GetYaxis()->SetTitle("Events");
   hframe_copy216->GetYaxis()->SetLabelFont(42);
   hframe_copy216->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy216->GetYaxis()->SetLabelSize(0.05);
   hframe_copy216->GetYaxis()->SetTitleSize(0.06);
   hframe_copy216->GetYaxis()->SetTitleOffset(1.25);
   hframe_copy216->GetYaxis()->SetTitleFont(42);
   hframe_copy216->GetZaxis()->SetLabelFont(42);
   hframe_copy216->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy216->GetZaxis()->SetLabelSize(0.05);
   hframe_copy216->GetZaxis()->SetTitleSize(0.06);
   hframe_copy216->GetZaxis()->SetTitleFont(42);
   hframe_copy216->Draw("sameaxis");
   ccwh3l_zg_13TeV_drllmin3l->Modified();
   ccwh3l_zg_13TeV_drllmin3l->cd();
   ccwh3l_zg_13TeV_drllmin3l->SetSelected(ccwh3l_zg_13TeV_drllmin3l);
}
