void c_wh3l_MET_13TeV_mlll()
{
//=========Macro generated from canvas: ccwh3l_MET_13TeV_mlll/cc
//=========  (Sat Jul  2 21:43:38 2016) by ROOT version6.02/13
   TCanvas *ccwh3l_MET_13TeV_mlll = new TCanvas("ccwh3l_MET_13TeV_mlll", "cc",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   ccwh3l_MET_13TeV_mlll->SetHighLightColor(2);
   ccwh3l_MET_13TeV_mlll->Range(76,-0.1585366,101,1.060976);
   ccwh3l_MET_13TeV_mlll->SetFillColor(0);
   ccwh3l_MET_13TeV_mlll->SetBorderMode(0);
   ccwh3l_MET_13TeV_mlll->SetBorderSize(2);
   ccwh3l_MET_13TeV_mlll->SetTickx(1);
   ccwh3l_MET_13TeV_mlll->SetTicky(1);
   ccwh3l_MET_13TeV_mlll->SetLeftMargin(0.16);
   ccwh3l_MET_13TeV_mlll->SetRightMargin(0.04);
   ccwh3l_MET_13TeV_mlll->SetTopMargin(0.05);
   ccwh3l_MET_13TeV_mlll->SetBottomMargin(0.13);
   ccwh3l_MET_13TeV_mlll->SetFrameFillStyle(0);
   ccwh3l_MET_13TeV_mlll->SetFrameBorderMode(0);
   ccwh3l_MET_13TeV_mlll->SetFrameFillStyle(0);
   ccwh3l_MET_13TeV_mlll->SetFrameBorderMode(0);
   
   TH1F *hframe221 = new TH1F("hframe221","",1000,80,100);
   hframe221->SetMinimum(0);
   hframe221->SetMaximum(0);
   hframe221->SetDirectory(0);
   hframe221->SetStats(0);
   hframe221->SetLineStyle(0);
   hframe221->SetMarkerStyle(20);
   hframe221->GetXaxis()->SetTitle("m_{lll} [GeV]");
   hframe221->GetXaxis()->SetNdivisions(506);
   hframe221->GetXaxis()->SetLabelFont(42);
   hframe221->GetXaxis()->SetLabelOffset(0.007);
   hframe221->GetXaxis()->SetLabelSize(0.05);
   hframe221->GetXaxis()->SetTitleSize(0.06);
   hframe221->GetXaxis()->SetTitleOffset(0.9);
   hframe221->GetXaxis()->SetTitleFont(42);
   hframe221->GetYaxis()->SetTitle("Events");
   hframe221->GetYaxis()->SetLabelFont(42);
   hframe221->GetYaxis()->SetLabelOffset(0.007);
   hframe221->GetYaxis()->SetLabelSize(0.05);
   hframe221->GetYaxis()->SetTitleSize(0.06);
   hframe221->GetYaxis()->SetTitleOffset(1.25);
   hframe221->GetYaxis()->SetTitleFont(42);
   hframe221->GetZaxis()->SetLabelFont(42);
   hframe221->GetZaxis()->SetLabelOffset(0.007);
   hframe221->GetZaxis()->SetLabelSize(0.05);
   hframe221->GetZaxis()->SetTitleSize(0.06);
   hframe221->GetZaxis()->SetTitleFont(42);
   hframe221->Draw(" ");
   
   THStack *thsBackground_grouped_wh3l_MET_13TeV_mlll = new THStack();
   thsBackground_grouped_wh3l_MET_13TeV_mlll->SetName("thsBackground_grouped_wh3l_MET_13TeV_mlll");
   thsBackground_grouped_wh3l_MET_13TeV_mlll->SetTitle("thsBackground_grouped_wh3l_MET_13TeV_mlll");
   
   TH1F *thsBackground_grouped_wh3l_MET_13TeV_mlll_stack_45 = new TH1F("thsBackground_grouped_wh3l_MET_13TeV_mlll_stack_45","thsBackground_grouped_wh3l_MET_13TeV_mlll",40,80,100);
   thsBackground_grouped_wh3l_MET_13TeV_mlll_stack_45->SetMinimum(0);
   thsBackground_grouped_wh3l_MET_13TeV_mlll_stack_45->SetMaximum(0);
   thsBackground_grouped_wh3l_MET_13TeV_mlll_stack_45->SetDirectory(0);
   thsBackground_grouped_wh3l_MET_13TeV_mlll_stack_45->SetStats(0);
   thsBackground_grouped_wh3l_MET_13TeV_mlll_stack_45->SetLineStyle(0);
   thsBackground_grouped_wh3l_MET_13TeV_mlll_stack_45->SetMarkerStyle(20);
   thsBackground_grouped_wh3l_MET_13TeV_mlll_stack_45->GetXaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_MET_13TeV_mlll_stack_45->GetXaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_MET_13TeV_mlll_stack_45->GetXaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_MET_13TeV_mlll_stack_45->GetXaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_MET_13TeV_mlll_stack_45->GetXaxis()->SetTitleOffset(0.9);
   thsBackground_grouped_wh3l_MET_13TeV_mlll_stack_45->GetXaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_13TeV_mlll_stack_45->GetYaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_MET_13TeV_mlll_stack_45->GetYaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_MET_13TeV_mlll_stack_45->GetYaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_MET_13TeV_mlll_stack_45->GetYaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_MET_13TeV_mlll_stack_45->GetYaxis()->SetTitleOffset(1.25);
   thsBackground_grouped_wh3l_MET_13TeV_mlll_stack_45->GetYaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_13TeV_mlll_stack_45->GetZaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_MET_13TeV_mlll_stack_45->GetZaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_MET_13TeV_mlll_stack_45->GetZaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_MET_13TeV_mlll_stack_45->GetZaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_MET_13TeV_mlll_stack_45->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_13TeV_mlll->SetHistogram(thsBackground_grouped_wh3l_MET_13TeV_mlll_stack_45);
   
   
   TH1D *new_histo_group_Fake_wh3l_MET_13TeV_mlll222 = new TH1D("new_histo_group_Fake_wh3l_MET_13TeV_mlll222","histo_Fake",40,80,100);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_MET_13TeV_mlll222->SetFillColor(ci);
   new_histo_group_Fake_wh3l_MET_13TeV_mlll222->SetFillStyle(3001);

   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_MET_13TeV_mlll222->SetLineColor(ci);
   new_histo_group_Fake_wh3l_MET_13TeV_mlll222->GetXaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_MET_13TeV_mlll222->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_MET_13TeV_mlll222->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_MET_13TeV_mlll222->GetXaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_MET_13TeV_mlll222->GetYaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_MET_13TeV_mlll222->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_MET_13TeV_mlll222->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_MET_13TeV_mlll222->GetYaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_MET_13TeV_mlll222->GetZaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_MET_13TeV_mlll222->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_MET_13TeV_mlll222->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_MET_13TeV_mlll222->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_13TeV_mlll->Add(new_histo_group_Fake_wh3l_MET_13TeV_mlll,"");
   
   TH1D *new_histo_group_WW_wh3l_MET_13TeV_mlll223 = new TH1D("new_histo_group_WW_wh3l_MET_13TeV_mlll223","histo_WW",40,80,100);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_MET_13TeV_mlll223->SetFillColor(ci);
   new_histo_group_WW_wh3l_MET_13TeV_mlll223->SetFillStyle(3001);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_MET_13TeV_mlll223->SetLineColor(ci);
   new_histo_group_WW_wh3l_MET_13TeV_mlll223->GetXaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_MET_13TeV_mlll223->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_MET_13TeV_mlll223->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_MET_13TeV_mlll223->GetXaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_MET_13TeV_mlll223->GetYaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_MET_13TeV_mlll223->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_MET_13TeV_mlll223->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_MET_13TeV_mlll223->GetYaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_MET_13TeV_mlll223->GetZaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_MET_13TeV_mlll223->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_MET_13TeV_mlll223->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_MET_13TeV_mlll223->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_13TeV_mlll->Add(new_histo_group_WW_wh3l_MET_13TeV_mlll,"");
   
   TH1D *new_histo_group_VVV_wh3l_MET_13TeV_mlll224 = new TH1D("new_histo_group_VVV_wh3l_MET_13TeV_mlll224","histo_VVV",40,80,100);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_MET_13TeV_mlll224->SetFillColor(ci);
   new_histo_group_VVV_wh3l_MET_13TeV_mlll224->SetFillStyle(3001);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_MET_13TeV_mlll224->SetLineColor(ci);
   new_histo_group_VVV_wh3l_MET_13TeV_mlll224->GetXaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_MET_13TeV_mlll224->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_MET_13TeV_mlll224->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_MET_13TeV_mlll224->GetXaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_MET_13TeV_mlll224->GetYaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_MET_13TeV_mlll224->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_MET_13TeV_mlll224->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_MET_13TeV_mlll224->GetYaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_MET_13TeV_mlll224->GetZaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_MET_13TeV_mlll224->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_MET_13TeV_mlll224->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_MET_13TeV_mlll224->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_13TeV_mlll->Add(new_histo_group_VVV_wh3l_MET_13TeV_mlll,"");
   
   TH1D *new_histo_group_Vg_wh3l_MET_13TeV_mlll225 = new TH1D("new_histo_group_Vg_wh3l_MET_13TeV_mlll225","histo_Vg",40,80,100);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_MET_13TeV_mlll225->SetFillColor(ci);
   new_histo_group_Vg_wh3l_MET_13TeV_mlll225->SetFillStyle(3001);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_MET_13TeV_mlll225->SetLineColor(ci);
   new_histo_group_Vg_wh3l_MET_13TeV_mlll225->GetXaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_MET_13TeV_mlll225->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_MET_13TeV_mlll225->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_MET_13TeV_mlll225->GetXaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_MET_13TeV_mlll225->GetYaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_MET_13TeV_mlll225->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_MET_13TeV_mlll225->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_MET_13TeV_mlll225->GetYaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_MET_13TeV_mlll225->GetZaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_MET_13TeV_mlll225->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_MET_13TeV_mlll225->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_MET_13TeV_mlll225->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_13TeV_mlll->Add(new_histo_group_Vg_wh3l_MET_13TeV_mlll,"");
   
   TH1D *new_histo_group_ZZ_wh3l_MET_13TeV_mlll226 = new TH1D("new_histo_group_ZZ_wh3l_MET_13TeV_mlll226","histo_ZZ",40,80,100);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_MET_13TeV_mlll226->SetFillColor(ci);
   new_histo_group_ZZ_wh3l_MET_13TeV_mlll226->SetFillStyle(3001);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_MET_13TeV_mlll226->SetLineColor(ci);
   new_histo_group_ZZ_wh3l_MET_13TeV_mlll226->GetXaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_MET_13TeV_mlll226->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_MET_13TeV_mlll226->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_MET_13TeV_mlll226->GetXaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_MET_13TeV_mlll226->GetYaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_MET_13TeV_mlll226->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_MET_13TeV_mlll226->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_MET_13TeV_mlll226->GetYaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_MET_13TeV_mlll226->GetZaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_MET_13TeV_mlll226->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_MET_13TeV_mlll226->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_MET_13TeV_mlll226->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_13TeV_mlll->Add(new_histo_group_ZZ_wh3l_MET_13TeV_mlll,"");
   
   TH1D *new_histo_group_WZ_wh3l_MET_13TeV_mlll227 = new TH1D("new_histo_group_WZ_wh3l_MET_13TeV_mlll227","histo_WZ",40,80,100);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_MET_13TeV_mlll227->SetFillColor(ci);
   new_histo_group_WZ_wh3l_MET_13TeV_mlll227->SetFillStyle(3001);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_MET_13TeV_mlll227->SetLineColor(ci);
   new_histo_group_WZ_wh3l_MET_13TeV_mlll227->GetXaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_MET_13TeV_mlll227->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_MET_13TeV_mlll227->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_MET_13TeV_mlll227->GetXaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_MET_13TeV_mlll227->GetYaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_MET_13TeV_mlll227->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_MET_13TeV_mlll227->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_MET_13TeV_mlll227->GetYaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_MET_13TeV_mlll227->GetZaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_MET_13TeV_mlll227->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_MET_13TeV_mlll227->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_MET_13TeV_mlll227->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_13TeV_mlll->Add(new_histo_group_WZ_wh3l_MET_13TeV_mlll,"");
   
   TH1D *new_histo_group_Higgs_wh3l_MET_13TeV_mlll228 = new TH1D("new_histo_group_Higgs_wh3l_MET_13TeV_mlll228","histo_H_htt",40,80,100);
   new_histo_group_Higgs_wh3l_MET_13TeV_mlll228->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_MET_13TeV_mlll228->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_MET_13TeV_mlll228->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_MET_13TeV_mlll228->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_13TeV_mlll228->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_13TeV_mlll228->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_13TeV_mlll228->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_MET_13TeV_mlll228->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_13TeV_mlll228->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_13TeV_mlll228->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_13TeV_mlll228->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_MET_13TeV_mlll228->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_13TeV_mlll228->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_13TeV_mlll228->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_13TeV_mlll228->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_13TeV_mlll->Add(new_histo_group_Higgs_wh3l_MET_13TeV_mlll,"");
   thsBackground_grouped_wh3l_MET_13TeV_mlll->Draw("hist same");
   
   thsSignal_grouped_wh3l_MET_13TeV_mlll = new THStack();
   thsSignal_grouped_wh3l_MET_13TeV_mlll->SetName("thsSignal_grouped_wh3l_MET_13TeV_mlll");
   thsSignal_grouped_wh3l_MET_13TeV_mlll->SetTitle("thsSignal_grouped_wh3l_MET_13TeV_mlll");
   
   TH1F *thsSignal_grouped_wh3l_MET_13TeV_mlll_stack_46 = new TH1F("thsSignal_grouped_wh3l_MET_13TeV_mlll_stack_46","thsSignal_grouped_wh3l_MET_13TeV_mlll",40,80,100);
   thsSignal_grouped_wh3l_MET_13TeV_mlll_stack_46->SetMinimum(0);
   thsSignal_grouped_wh3l_MET_13TeV_mlll_stack_46->SetMaximum(0);
   thsSignal_grouped_wh3l_MET_13TeV_mlll_stack_46->SetDirectory(0);
   thsSignal_grouped_wh3l_MET_13TeV_mlll_stack_46->SetStats(0);
   thsSignal_grouped_wh3l_MET_13TeV_mlll_stack_46->SetLineStyle(0);
   thsSignal_grouped_wh3l_MET_13TeV_mlll_stack_46->SetMarkerStyle(20);
   thsSignal_grouped_wh3l_MET_13TeV_mlll_stack_46->GetXaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_MET_13TeV_mlll_stack_46->GetXaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_MET_13TeV_mlll_stack_46->GetXaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_MET_13TeV_mlll_stack_46->GetXaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_MET_13TeV_mlll_stack_46->GetXaxis()->SetTitleOffset(0.9);
   thsSignal_grouped_wh3l_MET_13TeV_mlll_stack_46->GetXaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_MET_13TeV_mlll_stack_46->GetYaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_MET_13TeV_mlll_stack_46->GetYaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_MET_13TeV_mlll_stack_46->GetYaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_MET_13TeV_mlll_stack_46->GetYaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_MET_13TeV_mlll_stack_46->GetYaxis()->SetTitleOffset(1.25);
   thsSignal_grouped_wh3l_MET_13TeV_mlll_stack_46->GetYaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_MET_13TeV_mlll_stack_46->GetZaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_MET_13TeV_mlll_stack_46->GetZaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_MET_13TeV_mlll_stack_46->GetZaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_MET_13TeV_mlll_stack_46->GetZaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_MET_13TeV_mlll_stack_46->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_MET_13TeV_mlll->SetHistogram(thsSignal_grouped_wh3l_MET_13TeV_mlll_stack_46);
   
   
   TH1D *new_histo_group_Higgs_wh3l_MET_13TeV_mlll229 = new TH1D("new_histo_group_Higgs_wh3l_MET_13TeV_mlll229","histo_H_htt",40,80,100);
   new_histo_group_Higgs_wh3l_MET_13TeV_mlll229->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_MET_13TeV_mlll229->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_MET_13TeV_mlll229->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_MET_13TeV_mlll229->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_13TeV_mlll229->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_13TeV_mlll229->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_13TeV_mlll229->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_MET_13TeV_mlll229->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_13TeV_mlll229->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_13TeV_mlll229->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_13TeV_mlll229->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_MET_13TeV_mlll229->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_13TeV_mlll229->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_13TeV_mlll229->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_13TeV_mlll229->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_MET_13TeV_mlll->Add(new_histo_group_Higgs_wh3l_MET_13TeV_mlll,"");
   thsSignal_grouped_wh3l_MET_13TeV_mlll->Draw("hist same noclear");
   
   Double_t _fx3045[40] = {
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
   Double_t _fy3045[40] = {
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
   Double_t _felx3045[40] = {
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
   Double_t _fely3045[40] = {
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
   Double_t _fehx3045[40] = {
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
   Double_t _fehy3045[40] = {
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
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(40,_fx3045,_fy3045,_felx3045,_fehx3045,_fely3045,_fehy3045);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(12);
   grae->SetFillStyle(3004);
   grae->SetLineColor(12);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3045 = new TH1F("Graph_Graph3045","",100,78,102);
   Graph_Graph3045->SetMinimum(0);
   Graph_Graph3045->SetMaximum(1.1);
   Graph_Graph3045->SetDirectory(0);
   Graph_Graph3045->SetStats(0);
   Graph_Graph3045->SetLineStyle(0);
   Graph_Graph3045->SetMarkerStyle(20);
   Graph_Graph3045->GetXaxis()->SetLabelFont(42);
   Graph_Graph3045->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3045->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3045->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3045->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3045->GetXaxis()->SetTitleFont(42);
   Graph_Graph3045->GetYaxis()->SetLabelFont(42);
   Graph_Graph3045->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3045->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3045->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3045->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3045->GetYaxis()->SetTitleFont(42);
   Graph_Graph3045->GetZaxis()->SetLabelFont(42);
   Graph_Graph3045->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3045->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3045->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3045->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3045);
   
   grae->Draw("2");
   
   Double_t _fx3046[40] = {
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
   Double_t _fy3046[40] = {
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
   Double_t _felx3046[40] = {
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
   Double_t _fely3046[40] = {
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
   Double_t _fehx3046[40] = {
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
   Double_t _fehy3046[40] = {
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
   grae = new TGraphAsymmErrors(40,_fx3046,_fy3046,_felx3046,_fehx3046,_fely3046,_fehy3046);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(1);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3046 = new TH1F("Graph_Graph3046","",100,78,102);
   Graph_Graph3046->SetMinimum(0);
   Graph_Graph3046->SetMaximum(1.262698);
   Graph_Graph3046->SetDirectory(0);
   Graph_Graph3046->SetStats(0);
   Graph_Graph3046->SetLineStyle(0);
   Graph_Graph3046->SetMarkerStyle(20);
   Graph_Graph3046->GetXaxis()->SetLabelFont(42);
   Graph_Graph3046->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3046->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3046->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3046->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3046->GetXaxis()->SetTitleFont(42);
   Graph_Graph3046->GetYaxis()->SetLabelFont(42);
   Graph_Graph3046->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3046->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3046->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3046->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3046->GetYaxis()->SetTitleFont(42);
   Graph_Graph3046->GetZaxis()->SetLabelFont(42);
   Graph_Graph3046->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3046->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3046->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3046->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3046);
   
   grae->Draw("p0");
   
   TLegend *leg = new TLegend(0.2,0.7,0.8,0.9,NULL,"brNDC");
   leg->SetTextFont(62);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("new_histo_group_Fake_wh3l_MET_13TeV_mlll","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_MET_13TeV_mlll","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_MET_13TeV_mlll","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_MET_13TeV_mlll","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_MET_13TeV_mlll","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_MET_13TeV_mlll","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_MET_13TeV_mlll","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_MET_13TeV_mlll","Data","EPL");
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
   entry=leg->AddEntry("new_histo_group_Fake_wh3l_MET_13TeV_mlll","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_MET_13TeV_mlll","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_MET_13TeV_mlll","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_MET_13TeV_mlll","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_MET_13TeV_mlll","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_MET_13TeV_mlll","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_MET_13TeV_mlll","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_MET_13TeV_mlll","Data","EPL");
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
   
   TH1F *hframe_copy230 = new TH1F("hframe_copy230","",1000,80,100);
   hframe_copy230->SetMinimum(0);
   hframe_copy230->SetMaximum(0);
   hframe_copy230->SetDirectory(0);
   hframe_copy230->SetStats(0);
   hframe_copy230->SetLineStyle(0);
   hframe_copy230->SetMarkerStyle(20);
   hframe_copy230->GetXaxis()->SetTitle("m_{lll} [GeV]");
   hframe_copy230->GetXaxis()->SetNdivisions(506);
   hframe_copy230->GetXaxis()->SetLabelFont(42);
   hframe_copy230->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy230->GetXaxis()->SetLabelSize(0.05);
   hframe_copy230->GetXaxis()->SetTitleSize(0.06);
   hframe_copy230->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy230->GetXaxis()->SetTitleFont(42);
   hframe_copy230->GetYaxis()->SetTitle("Events");
   hframe_copy230->GetYaxis()->SetLabelFont(42);
   hframe_copy230->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy230->GetYaxis()->SetLabelSize(0.05);
   hframe_copy230->GetYaxis()->SetTitleSize(0.06);
   hframe_copy230->GetYaxis()->SetTitleOffset(1.25);
   hframe_copy230->GetYaxis()->SetTitleFont(42);
   hframe_copy230->GetZaxis()->SetLabelFont(42);
   hframe_copy230->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy230->GetZaxis()->SetLabelSize(0.05);
   hframe_copy230->GetZaxis()->SetTitleSize(0.06);
   hframe_copy230->GetZaxis()->SetTitleFont(42);
   hframe_copy230->Draw("sameaxis");
   ccwh3l_MET_13TeV_mlll->Modified();
   ccwh3l_MET_13TeV_mlll->cd();
   ccwh3l_MET_13TeV_mlll->SetSelected(ccwh3l_MET_13TeV_mlll);
}
