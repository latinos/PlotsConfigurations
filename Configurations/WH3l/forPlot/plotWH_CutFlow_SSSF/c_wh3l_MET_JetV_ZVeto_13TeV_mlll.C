void c_wh3l_MET_JetV_ZVeto_13TeV_mlll()
{
//=========Macro generated from canvas: ccwh3l_MET_JetV_ZVeto_13TeV_mlll/cc
//=========  (Sun Jul  3 01:22:16 2016) by ROOT version6.02/13
   TCanvas *ccwh3l_MET_JetV_ZVeto_13TeV_mlll = new TCanvas("ccwh3l_MET_JetV_ZVeto_13TeV_mlll", "cc",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   ccwh3l_MET_JetV_ZVeto_13TeV_mlll->SetHighLightColor(2);
   ccwh3l_MET_JetV_ZVeto_13TeV_mlll->Range(76,-0.2051016,101,1.372603);
   ccwh3l_MET_JetV_ZVeto_13TeV_mlll->SetFillColor(0);
   ccwh3l_MET_JetV_ZVeto_13TeV_mlll->SetBorderMode(0);
   ccwh3l_MET_JetV_ZVeto_13TeV_mlll->SetBorderSize(2);
   ccwh3l_MET_JetV_ZVeto_13TeV_mlll->SetTickx(1);
   ccwh3l_MET_JetV_ZVeto_13TeV_mlll->SetTicky(1);
   ccwh3l_MET_JetV_ZVeto_13TeV_mlll->SetLeftMargin(0.16);
   ccwh3l_MET_JetV_ZVeto_13TeV_mlll->SetRightMargin(0.04);
   ccwh3l_MET_JetV_ZVeto_13TeV_mlll->SetTopMargin(0.05);
   ccwh3l_MET_JetV_ZVeto_13TeV_mlll->SetBottomMargin(0.13);
   ccwh3l_MET_JetV_ZVeto_13TeV_mlll->SetFrameFillStyle(0);
   ccwh3l_MET_JetV_ZVeto_13TeV_mlll->SetFrameBorderMode(0);
   ccwh3l_MET_JetV_ZVeto_13TeV_mlll->SetFrameFillStyle(0);
   ccwh3l_MET_JetV_ZVeto_13TeV_mlll->SetFrameBorderMode(0);
   
   TH1F *hframe481 = new TH1F("hframe481","",1000,80,100);
   hframe481->SetMinimum(0);
   hframe481->SetMaximum(1.293718);
   hframe481->SetDirectory(0);
   hframe481->SetStats(0);
   hframe481->SetLineStyle(0);
   hframe481->SetMarkerStyle(20);
   hframe481->GetXaxis()->SetTitle("m_{lll} [GeV]");
   hframe481->GetXaxis()->SetNdivisions(506);
   hframe481->GetXaxis()->SetLabelFont(42);
   hframe481->GetXaxis()->SetLabelOffset(0.007);
   hframe481->GetXaxis()->SetLabelSize(0.05);
   hframe481->GetXaxis()->SetTitleSize(0.06);
   hframe481->GetXaxis()->SetTitleOffset(0.9);
   hframe481->GetXaxis()->SetTitleFont(42);
   hframe481->GetYaxis()->SetTitle("Events");
   hframe481->GetYaxis()->SetLabelFont(42);
   hframe481->GetYaxis()->SetLabelOffset(0.007);
   hframe481->GetYaxis()->SetLabelSize(0.05);
   hframe481->GetYaxis()->SetTitleSize(0.06);
   hframe481->GetYaxis()->SetTitleOffset(1.25);
   hframe481->GetYaxis()->SetTitleFont(42);
   hframe481->GetZaxis()->SetLabelFont(42);
   hframe481->GetZaxis()->SetLabelOffset(0.007);
   hframe481->GetZaxis()->SetLabelSize(0.05);
   hframe481->GetZaxis()->SetTitleSize(0.06);
   hframe481->GetZaxis()->SetTitleFont(42);
   hframe481->Draw(" ");
   
   THStack *thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_mlll = new THStack();
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_mlll->SetName("thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_mlll");
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_mlll->SetTitle("thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_mlll");
   
   TH1F *thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_mlll_stack_97 = new TH1F("thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_mlll_stack_97","thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_mlll",40,80,100);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_mlll_stack_97->SetMinimum(-0.002325781);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_mlll_stack_97->SetMaximum(1.081471);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_mlll_stack_97->SetDirectory(0);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_mlll_stack_97->SetStats(0);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_mlll_stack_97->SetLineStyle(0);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_mlll_stack_97->SetMarkerStyle(20);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_mlll_stack_97->GetXaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_mlll_stack_97->GetXaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_mlll_stack_97->GetXaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_mlll_stack_97->GetXaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_mlll_stack_97->GetXaxis()->SetTitleOffset(0.9);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_mlll_stack_97->GetXaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_mlll_stack_97->GetYaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_mlll_stack_97->GetYaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_mlll_stack_97->GetYaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_mlll_stack_97->GetYaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_mlll_stack_97->GetYaxis()->SetTitleOffset(1.25);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_mlll_stack_97->GetYaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_mlll_stack_97->GetZaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_mlll_stack_97->GetZaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_mlll_stack_97->GetZaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_mlll_stack_97->GetZaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_mlll_stack_97->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_mlll->SetHistogram(thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_mlll_stack_97);
   
   
   TH1D *new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_mlll482 = new TH1D("new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_mlll482","histo_Fake",40,80,100);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_mlll482->SetBinContent(0,-0.2946364);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_mlll482->SetBinContent(2,0.105603);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_mlll482->SetBinContent(8,0.514986);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_mlll482->SetBinContent(39,0.1066257);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_mlll482->SetBinContent(41,2.455345);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_mlll482->SetBinError(0,0.287696);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_mlll482->SetBinError(2,0.105603);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_mlll482->SetBinError(8,0.514986);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_mlll482->SetBinError(39,0.1066257);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_mlll482->SetBinError(41,1.21419);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_mlll482->SetEntries(34);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_mlll482->SetFillColor(ci);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_mlll482->SetFillStyle(3001);

   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_mlll482->SetLineColor(ci);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_mlll482->GetXaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_mlll482->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_mlll482->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_mlll482->GetXaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_mlll482->GetYaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_mlll482->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_mlll482->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_mlll482->GetYaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_mlll482->GetZaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_mlll482->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_mlll482->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_mlll482->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_mlll->Add(new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_mlll,"");
   
   TH1D *new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_mlll483 = new TH1D("new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_mlll483","histo_WW",40,80,100);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_mlll483->SetBinContent(0,0.0161241);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_mlll483->SetBinContent(41,0.02747647);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_mlll483->SetBinError(0,0.0161241);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_mlll483->SetBinError(41,0.01999703);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_mlll483->SetEntries(3);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_mlll483->SetFillColor(ci);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_mlll483->SetFillStyle(3001);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_mlll483->SetLineColor(ci);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_mlll483->GetXaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_mlll483->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_mlll483->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_mlll483->GetXaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_mlll483->GetYaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_mlll483->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_mlll483->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_mlll483->GetYaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_mlll483->GetZaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_mlll483->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_mlll483->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_mlll483->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_mlll->Add(new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_mlll,"");
   
   TH1D *new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_mlll484 = new TH1D("new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_mlll484","histo_VVV",40,80,100);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_mlll484->SetBinContent(0,0.003638329);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_mlll484->SetBinContent(2,0.000833863);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_mlll484->SetBinContent(3,0.002110594);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_mlll484->SetBinContent(8,0.001598179);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_mlll484->SetBinContent(10,0.001875808);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_mlll484->SetBinContent(31,0.001994133);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_mlll484->SetBinContent(41,0.1178914);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_mlll484->SetBinError(0,0.002574208);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_mlll484->SetBinError(2,0.000833863);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_mlll484->SetBinError(3,0.002110594);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_mlll484->SetBinError(8,0.001598179);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_mlll484->SetBinError(10,0.001875808);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_mlll484->SetBinError(31,0.001994133);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_mlll484->SetBinError(41,0.01863732);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_mlll484->SetEntries(80);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_mlll484->SetFillColor(ci);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_mlll484->SetFillStyle(3001);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_mlll484->SetLineColor(ci);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_mlll484->GetXaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_mlll484->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_mlll484->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_mlll484->GetXaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_mlll484->GetYaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_mlll484->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_mlll484->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_mlll484->GetYaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_mlll484->GetZaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_mlll484->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_mlll484->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_mlll484->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_mlll->Add(new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_mlll,"");
   
   TH1D *new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_mlll485 = new TH1D("new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_mlll485","histo_Vg",40,80,100);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_mlll485->SetBinContent(41,0.0522728);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_mlll485->SetBinError(41,0.0522728);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_mlll485->SetEntries(1);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_mlll485->SetFillColor(ci);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_mlll485->SetFillStyle(3001);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_mlll485->SetLineColor(ci);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_mlll485->GetXaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_mlll485->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_mlll485->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_mlll485->GetXaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_mlll485->GetYaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_mlll485->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_mlll485->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_mlll485->GetYaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_mlll485->GetZaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_mlll485->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_mlll485->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_mlll485->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_mlll->Add(new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_mlll,"");
   
   TH1D *new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_mlll486 = new TH1D("new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_mlll486","histo_ZZ",40,80,100);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_mlll486->SetBinContent(41,0.07785033);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_mlll486->SetBinError(41,0.05530859);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_mlll486->SetEntries(2);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_mlll486->SetFillColor(ci);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_mlll486->SetFillStyle(3001);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_mlll486->SetLineColor(ci);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_mlll486->GetXaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_mlll486->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_mlll486->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_mlll486->GetXaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_mlll486->GetYaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_mlll486->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_mlll486->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_mlll486->GetYaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_mlll486->GetZaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_mlll486->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_mlll486->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_mlll486->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_mlll->Add(new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_mlll,"");
   
   TH1D *new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_mlll487 = new TH1D("new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_mlll487","histo_WZ",40,80,100);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_mlll487->SetBinContent(0,0.08415457);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_mlll487->SetBinContent(2,0.005962193);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_mlll487->SetBinContent(3,0.00355102);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_mlll487->SetBinContent(7,0.005488627);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_mlll487->SetBinContent(10,0.006201025);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_mlll487->SetBinContent(11,0.00484358);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_mlll487->SetBinContent(13,0.004009541);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_mlll487->SetBinContent(14,0.005223083);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_mlll487->SetBinContent(16,0.005599787);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_mlll487->SetBinContent(17,0.001741456);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_mlll487->SetBinContent(18,0.005329017);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_mlll487->SetBinContent(22,0.003668249);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_mlll487->SetBinContent(28,0.01199452);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_mlll487->SetBinContent(29,0.00594491);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_mlll487->SetBinContent(30,0.002697298);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_mlll487->SetBinContent(31,0.003657803);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_mlll487->SetBinContent(34,0.006015707);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_mlll487->SetBinContent(36,0.004876467);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_mlll487->SetBinContent(37,0.005630503);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_mlll487->SetBinContent(40,0.004000224);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_mlll487->SetBinContent(41,0.4839191);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_mlll487->SetBinError(0,0.02140394);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_mlll487->SetBinError(2,0.005962193);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_mlll487->SetBinError(3,0.00355102);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_mlll487->SetBinError(7,0.005488627);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_mlll487->SetBinError(10,0.006201025);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_mlll487->SetBinError(11,0.00484358);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_mlll487->SetBinError(13,0.004009541);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_mlll487->SetBinError(14,0.005223083);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_mlll487->SetBinError(16,0.005599787);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_mlll487->SetBinError(17,0.001741456);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_mlll487->SetBinError(18,0.005329017);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_mlll487->SetBinError(22,0.003668249);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_mlll487->SetBinError(28,0.008488671);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_mlll487->SetBinError(29,0.00594491);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_mlll487->SetBinError(30,0.002697298);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_mlll487->SetBinError(31,0.003657803);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_mlll487->SetBinError(34,0.006015707);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_mlll487->SetBinError(36,0.004876467);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_mlll487->SetBinError(37,0.005630503);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_mlll487->SetBinError(40,0.004000224);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_mlll487->SetBinError(41,0.05104962);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_mlll487->SetEntries(136);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_mlll487->SetFillColor(ci);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_mlll487->SetFillStyle(3001);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_mlll487->SetLineColor(ci);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_mlll487->GetXaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_mlll487->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_mlll487->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_mlll487->GetXaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_mlll487->GetYaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_mlll487->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_mlll487->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_mlll487->GetYaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_mlll487->GetZaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_mlll487->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_mlll487->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_mlll487->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_mlll->Add(new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_mlll,"");
   
   TH1D *new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_mlll488 = new TH1D("new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_mlll488","histo_H_htt",40,80,100);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_mlll488->SetBinContent(0,0.03706913);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_mlll488->SetBinContent(1,0.001619049);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_mlll488->SetBinContent(2,0.001781579);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_mlll488->SetBinContent(4,0.0003056084);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_mlll488->SetBinContent(5,0.0008342523);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_mlll488->SetBinContent(6,0.0002773224);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_mlll488->SetBinContent(7,0.0006839016);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_mlll488->SetBinContent(8,0.0009028082);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_mlll488->SetBinContent(9,0.00147937);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_mlll488->SetBinContent(10,0.001615997);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_mlll488->SetBinContent(11,0.0003720735);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_mlll488->SetBinContent(12,0.003006798);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_mlll488->SetBinContent(13,0.0001670827);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_mlll488->SetBinContent(14,0.001451861);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_mlll488->SetBinContent(15,0.000358745);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_mlll488->SetBinContent(16,0.0019496);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_mlll488->SetBinContent(17,-0.0002858148);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_mlll488->SetBinContent(18,0.001550597);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_mlll488->SetBinContent(19,0.0003061784);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_mlll488->SetBinContent(20,0.0004491749);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_mlll488->SetBinContent(21,0.001513023);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_mlll488->SetBinContent(22,0.0016339);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_mlll488->SetBinContent(24,0.002898642);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_mlll488->SetBinContent(25,0.0004140987);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_mlll488->SetBinContent(27,0.001798686);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_mlll488->SetBinContent(28,0.002078047);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_mlll488->SetBinContent(29,0.001919134);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_mlll488->SetBinContent(30,0.001469533);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_mlll488->SetBinContent(31,0.0003844836);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_mlll488->SetBinContent(32,0.003994755);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_mlll488->SetBinContent(33,0.001757511);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_mlll488->SetBinContent(34,0.002969826);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_mlll488->SetBinContent(35,0.0005998736);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_mlll488->SetBinContent(36,0.0003207646);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_mlll488->SetBinContent(37,0.0001928041);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_mlll488->SetBinContent(38,0.001955075);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_mlll488->SetBinContent(39,0.001940039);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_mlll488->SetBinContent(40,0.0004275682);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_mlll488->SetBinContent(41,0.1993886);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_mlll488->SetBinError(0,0.006315146);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_mlll488->SetBinError(1,0.001619049);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_mlll488->SetBinError(2,0.001781579);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_mlll488->SetBinError(4,0.0001925611);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_mlll488->SetBinError(5,0.0008342523);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_mlll488->SetBinError(6,0.0002773224);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_mlll488->SetBinError(7,0.0003527997);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_mlll488->SetBinError(8,0.0005363849);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_mlll488->SetBinError(9,0.001125228);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_mlll488->SetBinError(10,0.001615997);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_mlll488->SetBinError(11,0.0003182324);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_mlll488->SetBinError(12,0.002078139);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_mlll488->SetBinError(13,0.0001670827);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_mlll488->SetBinError(14,0.001298801);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_mlll488->SetBinError(15,0.0002601799);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_mlll488->SetBinError(16,0.001611654);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_mlll488->SetBinError(17,0.002039967);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_mlll488->SetBinError(18,0.001082738);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_mlll488->SetBinError(19,0.0003061784);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_mlll488->SetBinError(20,0.0003176741);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_mlll488->SetBinError(21,0.001513023);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_mlll488->SetBinError(22,0.001095322);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_mlll488->SetBinError(24,0.001933042);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_mlll488->SetBinError(25,0.0003343163);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_mlll488->SetBinError(27,0.001405093);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_mlll488->SetBinError(28,0.00116594);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_mlll488->SetBinError(29,0.001364932);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_mlll488->SetBinError(30,0.001160323);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_mlll488->SetBinError(31,0.0003844836);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_mlll488->SetBinError(32,0.002357333);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_mlll488->SetBinError(33,0.001757511);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_mlll488->SetBinError(34,0.001993884);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_mlll488->SetBinError(35,0.0004242254);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_mlll488->SetBinError(36,0.0003207646);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_mlll488->SetBinError(37,0.0001928041);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_mlll488->SetBinError(38,0.001955075);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_mlll488->SetBinError(39,0.001746447);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_mlll488->SetBinError(40,0.0003037318);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_mlll488->SetBinError(41,0.01451924);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_mlll488->SetEntries(512);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_mlll488->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_mlll488->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_mlll488->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_mlll488->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_mlll488->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_mlll488->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_mlll488->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_mlll488->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_mlll488->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_mlll488->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_mlll488->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_mlll488->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_mlll488->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_mlll488->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_mlll488->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_mlll->Add(new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_mlll,"");
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_mlll->Draw("hist same");
   
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_mlll = new THStack();
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_mlll->SetName("thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_mlll");
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_mlll->SetTitle("thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_mlll");
   
   TH1F *thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_mlll_stack_98 = new TH1F("thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_mlll_stack_98","thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_mlll",40,80,100);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_mlll_stack_98->SetMinimum(-0.002325781);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_mlll_stack_98->SetMaximum(0.006669692);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_mlll_stack_98->SetDirectory(0);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_mlll_stack_98->SetStats(0);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_mlll_stack_98->SetLineStyle(0);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_mlll_stack_98->SetMarkerStyle(20);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_mlll_stack_98->GetXaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_mlll_stack_98->GetXaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_mlll_stack_98->GetXaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_mlll_stack_98->GetXaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_mlll_stack_98->GetXaxis()->SetTitleOffset(0.9);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_mlll_stack_98->GetXaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_mlll_stack_98->GetYaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_mlll_stack_98->GetYaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_mlll_stack_98->GetYaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_mlll_stack_98->GetYaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_mlll_stack_98->GetYaxis()->SetTitleOffset(1.25);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_mlll_stack_98->GetYaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_mlll_stack_98->GetZaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_mlll_stack_98->GetZaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_mlll_stack_98->GetZaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_mlll_stack_98->GetZaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_mlll_stack_98->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_mlll->SetHistogram(thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_mlll_stack_98);
   
   
   TH1D *new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_mlll489 = new TH1D("new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_mlll489","histo_H_htt",40,80,100);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_mlll489->SetBinContent(0,0.03706913);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_mlll489->SetBinContent(1,0.001619049);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_mlll489->SetBinContent(2,0.001781579);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_mlll489->SetBinContent(4,0.0003056084);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_mlll489->SetBinContent(5,0.0008342523);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_mlll489->SetBinContent(6,0.0002773224);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_mlll489->SetBinContent(7,0.0006839016);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_mlll489->SetBinContent(8,0.0009028082);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_mlll489->SetBinContent(9,0.00147937);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_mlll489->SetBinContent(10,0.001615997);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_mlll489->SetBinContent(11,0.0003720735);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_mlll489->SetBinContent(12,0.003006798);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_mlll489->SetBinContent(13,0.0001670827);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_mlll489->SetBinContent(14,0.001451861);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_mlll489->SetBinContent(15,0.000358745);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_mlll489->SetBinContent(16,0.0019496);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_mlll489->SetBinContent(17,-0.0002858148);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_mlll489->SetBinContent(18,0.001550597);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_mlll489->SetBinContent(19,0.0003061784);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_mlll489->SetBinContent(20,0.0004491749);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_mlll489->SetBinContent(21,0.001513023);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_mlll489->SetBinContent(22,0.0016339);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_mlll489->SetBinContent(24,0.002898642);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_mlll489->SetBinContent(25,0.0004140987);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_mlll489->SetBinContent(27,0.001798686);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_mlll489->SetBinContent(28,0.002078047);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_mlll489->SetBinContent(29,0.001919134);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_mlll489->SetBinContent(30,0.001469533);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_mlll489->SetBinContent(31,0.0003844836);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_mlll489->SetBinContent(32,0.003994755);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_mlll489->SetBinContent(33,0.001757511);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_mlll489->SetBinContent(34,0.002969826);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_mlll489->SetBinContent(35,0.0005998736);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_mlll489->SetBinContent(36,0.0003207646);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_mlll489->SetBinContent(37,0.0001928041);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_mlll489->SetBinContent(38,0.001955075);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_mlll489->SetBinContent(39,0.001940039);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_mlll489->SetBinContent(40,0.0004275682);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_mlll489->SetBinContent(41,0.1993886);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_mlll489->SetBinError(0,0.006315146);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_mlll489->SetBinError(1,0.001619049);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_mlll489->SetBinError(2,0.001781579);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_mlll489->SetBinError(4,0.0001925611);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_mlll489->SetBinError(5,0.0008342523);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_mlll489->SetBinError(6,0.0002773224);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_mlll489->SetBinError(7,0.0003527997);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_mlll489->SetBinError(8,0.0005363849);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_mlll489->SetBinError(9,0.001125228);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_mlll489->SetBinError(10,0.001615997);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_mlll489->SetBinError(11,0.0003182324);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_mlll489->SetBinError(12,0.002078139);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_mlll489->SetBinError(13,0.0001670827);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_mlll489->SetBinError(14,0.001298801);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_mlll489->SetBinError(15,0.0002601799);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_mlll489->SetBinError(16,0.001611654);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_mlll489->SetBinError(17,0.002039967);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_mlll489->SetBinError(18,0.001082738);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_mlll489->SetBinError(19,0.0003061784);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_mlll489->SetBinError(20,0.0003176741);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_mlll489->SetBinError(21,0.001513023);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_mlll489->SetBinError(22,0.001095322);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_mlll489->SetBinError(24,0.001933042);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_mlll489->SetBinError(25,0.0003343163);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_mlll489->SetBinError(27,0.001405093);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_mlll489->SetBinError(28,0.00116594);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_mlll489->SetBinError(29,0.001364932);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_mlll489->SetBinError(30,0.001160323);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_mlll489->SetBinError(31,0.0003844836);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_mlll489->SetBinError(32,0.002357333);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_mlll489->SetBinError(33,0.001757511);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_mlll489->SetBinError(34,0.001993884);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_mlll489->SetBinError(35,0.0004242254);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_mlll489->SetBinError(36,0.0003207646);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_mlll489->SetBinError(37,0.0001928041);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_mlll489->SetBinError(38,0.001955075);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_mlll489->SetBinError(39,0.001746447);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_mlll489->SetBinError(40,0.0003037318);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_mlll489->SetBinError(41,0.01451924);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_mlll489->SetEntries(512);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_mlll489->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_mlll489->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_mlll489->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_mlll489->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_mlll489->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_mlll489->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_mlll489->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_mlll489->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_mlll489->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_mlll489->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_mlll489->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_mlll489->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_mlll489->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_mlll489->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_mlll489->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_mlll->Add(new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_mlll,"");
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_mlll->Draw("hist same noclear");
   
   Double_t _fx3097[40] = {
   80.25,
   80.75,
   81.25,
   81.75,
   82.25,
   82.75,
   83.25,
   83.75,
   84.25,
   84.75,
   85.25,
   85.75,
   86.25,
   86.75,
   87.25,
   87.75,
   88.25,
   88.75,
   89.25,
   89.75,
   90.25,
   90.75,
   91.25,
   91.75,
   92.25,
   92.75,
   93.25,
   93.75,
   94.25,
   94.75,
   95.25,
   95.75,
   96.25,
   96.75,
   97.25,
   97.75,
   98.25,
   98.75,
   99.25,
   99.75};
   Double_t _fy3097[40] = {
   0,
   0.112399,
   0.005661615,
   0,
   0,
   0,
   0.005488627,
   0.5165842,
   0,
   0.008076833,
   0.00484358,
   0,
   0.004009541,
   0.005223083,
   0,
   0.005599787,
   0.001741456,
   0.005329018,
   0,
   0,
   0,
   0.003668249,
   0,
   0,
   0,
   0,
   0,
   0.01199452,
   0.00594491,
   0.002697298,
   0.005651935,
   0,
   0,
   0.006015707,
   0,
   0.004876467,
   0.005630503,
   0,
   0.1066257,
   0.004000224};
   Double_t _felx3097[40] = {
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25};
   Double_t _fely3097[40] = {
   0,
   0.1183238,
   0.006050412,
   0,
   0,
   0,
   0.005504885,
   0.5471289,
   0,
   0.008294063,
   0.004844662,
   0,
   0.004015323,
   0.005231841,
   0,
   0.005600638,
   0.001741688,
   0.005329929,
   0,
   0,
   0,
   0.003668871,
   0,
   0,
   0,
   0,
   0,
   0.008502865,
   0.005965915,
   0.002697492,
   0.005994403,
   0,
   0,
   0.006039518,
   0,
   0.004877191,
   0.005631764,
   0,
   0.112968,
   0.004012923};
   Double_t _fehx3097[40] = {
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25};
   Double_t _fehy3097[40] = {
   0,
   0.1183236,
   0.006049727,
   0,
   0,
   0,
   0.005490238,
   0.5471289,
   0,
   0.008294078,
   0.004844685,
   0,
   0.004014734,
   0.00523279,
   0,
   0.005600655,
   0.001741695,
   0.005329928,
   0,
   0,
   0,
   0.003668607,
   0,
   0,
   0,
   0,
   0,
   0.008503046,
   0.005956679,
   0.002697492,
   0.005993979,
   0,
   0,
   0.006038594,
   0,
   0.004877078,
   0.005631785,
   0,
   0.112968,
   0.004019879};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(40,_fx3097,_fy3097,_felx3097,_fehx3097,_fely3097,_fehy3097);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(12);
   grae->SetFillStyle(3004);
   grae->SetLineColor(12);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3097 = new TH1F("Graph_Graph3097","",100,78,102);
   Graph_Graph3097->SetMinimum(-0.1399705);
   Graph_Graph3097->SetMaximum(1.173139);
   Graph_Graph3097->SetDirectory(0);
   Graph_Graph3097->SetStats(0);
   Graph_Graph3097->SetLineStyle(0);
   Graph_Graph3097->SetMarkerStyle(20);
   Graph_Graph3097->GetXaxis()->SetLabelFont(42);
   Graph_Graph3097->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3097->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3097->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3097->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3097->GetXaxis()->SetTitleFont(42);
   Graph_Graph3097->GetYaxis()->SetLabelFont(42);
   Graph_Graph3097->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3097->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3097->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3097->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3097->GetYaxis()->SetTitleFont(42);
   Graph_Graph3097->GetZaxis()->SetLabelFont(42);
   Graph_Graph3097->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3097->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3097->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3097->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3097);
   
   grae->Draw("2");
   
   Double_t _fx3098[40] = {
   80.25,
   80.75,
   81.25,
   81.75,
   82.25,
   82.75,
   83.25,
   83.75,
   84.25,
   84.75,
   85.25,
   85.75,
   86.25,
   86.75,
   87.25,
   87.75,
   88.25,
   88.75,
   89.25,
   89.75,
   90.25,
   90.75,
   91.25,
   91.75,
   92.25,
   92.75,
   93.25,
   93.75,
   94.25,
   94.75,
   95.25,
   95.75,
   96.25,
   96.75,
   97.25,
   97.75,
   98.25,
   98.75,
   99.25,
   99.75};
   Double_t _fy3098[40] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _felx3098[40] = {
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25};
   Double_t _fely3098[40] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fehx3098[40] = {
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25};
   Double_t _fehy3098[40] = {
   1.147908,
   1.147908,
   1.147908,
   1.147908,
   1.147908,
   1.147908,
   1.147908,
   1.147908,
   1.147908,
   1.147908,
   1.147908,
   1.147908,
   1.147908,
   1.147908,
   1.147908,
   1.147908,
   1.147908,
   1.147908,
   1.147908,
   1.147908,
   1.147908,
   1.147908,
   1.147908,
   1.147908,
   1.147908,
   1.147908,
   1.147908,
   1.147908,
   1.147908,
   1.147908,
   1.147908,
   1.147908,
   1.147908,
   1.147908,
   1.147908,
   1.147908,
   1.147908,
   1.147908,
   1.147908,
   1.147908};
   grae = new TGraphAsymmErrors(40,_fx3098,_fy3098,_felx3098,_fehx3098,_fely3098,_fehy3098);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(1);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3098 = new TH1F("Graph_Graph3098","",100,78,102);
   Graph_Graph3098->SetMinimum(0);
   Graph_Graph3098->SetMaximum(1.262698);
   Graph_Graph3098->SetDirectory(0);
   Graph_Graph3098->SetStats(0);
   Graph_Graph3098->SetLineStyle(0);
   Graph_Graph3098->SetMarkerStyle(20);
   Graph_Graph3098->GetXaxis()->SetLabelFont(42);
   Graph_Graph3098->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3098->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3098->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3098->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3098->GetXaxis()->SetTitleFont(42);
   Graph_Graph3098->GetYaxis()->SetLabelFont(42);
   Graph_Graph3098->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3098->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3098->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3098->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3098->GetYaxis()->SetTitleFont(42);
   Graph_Graph3098->GetZaxis()->SetLabelFont(42);
   Graph_Graph3098->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3098->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3098->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3098->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3098);
   
   grae->Draw("p0");
   
   TLegend *leg = new TLegend(0.2,0.7,0.8,0.9,NULL,"brNDC");
   leg->SetTextFont(62);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_mlll","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_mlll","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_mlll","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_mlll","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_mlll","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_mlll","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_mlll","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_MET_JetV_ZVeto_13TeV_mlll","Data","EPL");
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
   entry=leg->AddEntry("new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_mlll","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_mlll","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_mlll","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_mlll","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_mlll","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_mlll","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_mlll","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_MET_JetV_ZVeto_13TeV_mlll","Data","EPL");
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
   
   TH1F *hframe_copy490 = new TH1F("hframe_copy490","",1000,80,100);
   hframe_copy490->SetMinimum(0);
   hframe_copy490->SetMaximum(1.293718);
   hframe_copy490->SetDirectory(0);
   hframe_copy490->SetStats(0);
   hframe_copy490->SetLineStyle(0);
   hframe_copy490->SetMarkerStyle(20);
   hframe_copy490->GetXaxis()->SetTitle("m_{lll} [GeV]");
   hframe_copy490->GetXaxis()->SetNdivisions(506);
   hframe_copy490->GetXaxis()->SetLabelFont(42);
   hframe_copy490->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy490->GetXaxis()->SetLabelSize(0.05);
   hframe_copy490->GetXaxis()->SetTitleSize(0.06);
   hframe_copy490->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy490->GetXaxis()->SetTitleFont(42);
   hframe_copy490->GetYaxis()->SetTitle("Events");
   hframe_copy490->GetYaxis()->SetLabelFont(42);
   hframe_copy490->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy490->GetYaxis()->SetLabelSize(0.05);
   hframe_copy490->GetYaxis()->SetTitleSize(0.06);
   hframe_copy490->GetYaxis()->SetTitleOffset(1.25);
   hframe_copy490->GetYaxis()->SetTitleFont(42);
   hframe_copy490->GetZaxis()->SetLabelFont(42);
   hframe_copy490->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy490->GetZaxis()->SetLabelSize(0.05);
   hframe_copy490->GetZaxis()->SetTitleSize(0.06);
   hframe_copy490->GetZaxis()->SetTitleFont(42);
   hframe_copy490->Draw("sameaxis");
   ccwh3l_MET_JetV_ZVeto_13TeV_mlll->Modified();
   ccwh3l_MET_JetV_ZVeto_13TeV_mlll->cd();
   ccwh3l_MET_JetV_ZVeto_13TeV_mlll->SetSelected(ccwh3l_MET_JetV_ZVeto_13TeV_mlll);
}
