void c_wh3l_MET_JetV_13TeV_nbjet_3l()
{
//=========Macro generated from canvas: ccwh3l_MET_JetV_13TeV_nbjet_3l/cc
//=========  (Sun Jul  3 16:19:00 2016) by ROOT version6.02/13
   TCanvas *ccwh3l_MET_JetV_13TeV_nbjet_3l = new TCanvas("ccwh3l_MET_JetV_13TeV_nbjet_3l", "cc",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   ccwh3l_MET_JetV_13TeV_nbjet_3l->SetHighLightColor(2);
   ccwh3l_MET_JetV_13TeV_nbjet_3l->Range(-1,-62.34245,5.25,417.2149);
   ccwh3l_MET_JetV_13TeV_nbjet_3l->SetFillColor(0);
   ccwh3l_MET_JetV_13TeV_nbjet_3l->SetBorderMode(0);
   ccwh3l_MET_JetV_13TeV_nbjet_3l->SetBorderSize(2);
   ccwh3l_MET_JetV_13TeV_nbjet_3l->SetTickx(1);
   ccwh3l_MET_JetV_13TeV_nbjet_3l->SetTicky(1);
   ccwh3l_MET_JetV_13TeV_nbjet_3l->SetLeftMargin(0.16);
   ccwh3l_MET_JetV_13TeV_nbjet_3l->SetRightMargin(0.04);
   ccwh3l_MET_JetV_13TeV_nbjet_3l->SetTopMargin(0.05);
   ccwh3l_MET_JetV_13TeV_nbjet_3l->SetBottomMargin(0.13);
   ccwh3l_MET_JetV_13TeV_nbjet_3l->SetFrameFillStyle(0);
   ccwh3l_MET_JetV_13TeV_nbjet_3l->SetFrameBorderMode(0);
   ccwh3l_MET_JetV_13TeV_nbjet_3l->SetFrameFillStyle(0);
   ccwh3l_MET_JetV_13TeV_nbjet_3l->SetFrameBorderMode(0);
   
   TH1F *hframe61 = new TH1F("hframe61","",1000,0,5);
   hframe61->SetMinimum(0);
   hframe61->SetMaximum(393.237);
   hframe61->SetDirectory(0);
   hframe61->SetStats(0);
   hframe61->SetLineStyle(0);
   hframe61->SetMarkerStyle(20);
   hframe61->GetXaxis()->SetTitle("N_bJets");
   hframe61->GetXaxis()->SetNdivisions(506);
   hframe61->GetXaxis()->SetLabelFont(42);
   hframe61->GetXaxis()->SetLabelOffset(0.007);
   hframe61->GetXaxis()->SetLabelSize(0.05);
   hframe61->GetXaxis()->SetTitleSize(0.06);
   hframe61->GetXaxis()->SetTitleOffset(0.9);
   hframe61->GetXaxis()->SetTitleFont(42);
   hframe61->GetYaxis()->SetTitle("Events");
   hframe61->GetYaxis()->SetLabelFont(42);
   hframe61->GetYaxis()->SetLabelOffset(0.007);
   hframe61->GetYaxis()->SetLabelSize(0.05);
   hframe61->GetYaxis()->SetTitleSize(0.06);
   hframe61->GetYaxis()->SetTitleOffset(1.25);
   hframe61->GetYaxis()->SetTitleFont(42);
   hframe61->GetZaxis()->SetLabelFont(42);
   hframe61->GetZaxis()->SetLabelOffset(0.007);
   hframe61->GetZaxis()->SetLabelSize(0.05);
   hframe61->GetZaxis()->SetTitleSize(0.06);
   hframe61->GetZaxis()->SetTitleFont(42);
   hframe61->Draw(" ");
   
   THStack *thsBackground_grouped_wh3l_MET_JetV_13TeV_nbjet_3l = new THStack();
   thsBackground_grouped_wh3l_MET_JetV_13TeV_nbjet_3l->SetName("thsBackground_grouped_wh3l_MET_JetV_13TeV_nbjet_3l");
   thsBackground_grouped_wh3l_MET_JetV_13TeV_nbjet_3l->SetTitle("thsBackground_grouped_wh3l_MET_JetV_13TeV_nbjet_3l");
   
   TH1F *thsBackground_grouped_wh3l_MET_JetV_13TeV_nbjet_3l_stack_13 = new TH1F("thsBackground_grouped_wh3l_MET_JetV_13TeV_nbjet_3l_stack_13","thsBackground_grouped_wh3l_MET_JetV_13TeV_nbjet_3l",5,0,5);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_nbjet_3l_stack_13->SetMinimum(0);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_nbjet_3l_stack_13->SetMaximum(165.1596);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_nbjet_3l_stack_13->SetDirectory(0);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_nbjet_3l_stack_13->SetStats(0);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_nbjet_3l_stack_13->SetLineStyle(0);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_nbjet_3l_stack_13->SetMarkerStyle(20);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_nbjet_3l_stack_13->GetXaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_nbjet_3l_stack_13->GetXaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_nbjet_3l_stack_13->GetXaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_nbjet_3l_stack_13->GetXaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_nbjet_3l_stack_13->GetXaxis()->SetTitleOffset(0.9);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_nbjet_3l_stack_13->GetXaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_nbjet_3l_stack_13->GetYaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_nbjet_3l_stack_13->GetYaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_nbjet_3l_stack_13->GetYaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_nbjet_3l_stack_13->GetYaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_nbjet_3l_stack_13->GetYaxis()->SetTitleOffset(1.25);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_nbjet_3l_stack_13->GetYaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_nbjet_3l_stack_13->GetZaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_nbjet_3l_stack_13->GetZaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_nbjet_3l_stack_13->GetZaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_nbjet_3l_stack_13->GetZaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_nbjet_3l_stack_13->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_nbjet_3l->SetHistogram(thsBackground_grouped_wh3l_MET_JetV_13TeV_nbjet_3l_stack_13);
   
   
   TH1D *new_histo_group_Fake_wh3l_MET_JetV_13TeV_nbjet_3l62 = new TH1D("new_histo_group_Fake_wh3l_MET_JetV_13TeV_nbjet_3l62","histo_Fake",5,0,5);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_nbjet_3l62->SetBinContent(1,21.17353);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_nbjet_3l62->SetBinError(1,4.240337);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_nbjet_3l62->SetEntries(453);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_nbjet_3l62->SetFillColor(ci);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_nbjet_3l62->SetFillStyle(3001);

   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_nbjet_3l62->SetLineColor(ci);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_nbjet_3l62->GetXaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_nbjet_3l62->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_nbjet_3l62->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_nbjet_3l62->GetXaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_nbjet_3l62->GetYaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_nbjet_3l62->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_nbjet_3l62->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_nbjet_3l62->GetYaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_nbjet_3l62->GetZaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_nbjet_3l62->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_nbjet_3l62->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_nbjet_3l62->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_nbjet_3l->Add(new_histo_group_Fake_wh3l_MET_JetV_13TeV_nbjet_3l,"");
   
   TH1D *new_histo_group_WW_wh3l_MET_JetV_13TeV_nbjet_3l63 = new TH1D("new_histo_group_WW_wh3l_MET_JetV_13TeV_nbjet_3l63","histo_WW",5,0,5);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_nbjet_3l63->SetBinContent(1,0.1640967);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_nbjet_3l63->SetBinError(1,0.05013797);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_nbjet_3l63->SetEntries(11);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_MET_JetV_13TeV_nbjet_3l63->SetFillColor(ci);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_nbjet_3l63->SetFillStyle(3001);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_MET_JetV_13TeV_nbjet_3l63->SetLineColor(ci);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_nbjet_3l63->GetXaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_nbjet_3l63->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_nbjet_3l63->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_nbjet_3l63->GetXaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_nbjet_3l63->GetYaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_nbjet_3l63->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_nbjet_3l63->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_nbjet_3l63->GetYaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_nbjet_3l63->GetZaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_nbjet_3l63->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_nbjet_3l63->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_nbjet_3l63->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_nbjet_3l->Add(new_histo_group_WW_wh3l_MET_JetV_13TeV_nbjet_3l,"");
   
   TH1D *new_histo_group_VVV_wh3l_MET_JetV_13TeV_nbjet_3l64 = new TH1D("new_histo_group_VVV_wh3l_MET_JetV_13TeV_nbjet_3l64","histo_VVV",5,0,5);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_nbjet_3l64->SetBinContent(1,1.011159);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_nbjet_3l64->SetBinError(1,0.04702221);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_nbjet_3l64->SetEntries(806);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_nbjet_3l64->SetFillColor(ci);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_nbjet_3l64->SetFillStyle(3001);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_nbjet_3l64->SetLineColor(ci);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_nbjet_3l64->GetXaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_nbjet_3l64->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_nbjet_3l64->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_nbjet_3l64->GetXaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_nbjet_3l64->GetYaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_nbjet_3l64->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_nbjet_3l64->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_nbjet_3l64->GetYaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_nbjet_3l64->GetZaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_nbjet_3l64->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_nbjet_3l64->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_nbjet_3l64->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_nbjet_3l->Add(new_histo_group_VVV_wh3l_MET_JetV_13TeV_nbjet_3l,"");
   
   TH1D *new_histo_group_Vg_wh3l_MET_JetV_13TeV_nbjet_3l65 = new TH1D("new_histo_group_Vg_wh3l_MET_JetV_13TeV_nbjet_3l65","histo_Vg",5,0,5);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_nbjet_3l65->SetBinContent(1,7.741773);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_nbjet_3l65->SetBinError(1,0.9827464);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_nbjet_3l65->SetEntries(106);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_nbjet_3l65->SetFillColor(ci);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_nbjet_3l65->SetFillStyle(3001);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_nbjet_3l65->SetLineColor(ci);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_nbjet_3l65->GetXaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_nbjet_3l65->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_nbjet_3l65->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_nbjet_3l65->GetXaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_nbjet_3l65->GetYaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_nbjet_3l65->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_nbjet_3l65->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_nbjet_3l65->GetYaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_nbjet_3l65->GetZaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_nbjet_3l65->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_nbjet_3l65->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_nbjet_3l65->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_nbjet_3l->Add(new_histo_group_Vg_wh3l_MET_JetV_13TeV_nbjet_3l,"");
   
   TH1D *new_histo_group_ZZ_wh3l_MET_JetV_13TeV_nbjet_3l66 = new TH1D("new_histo_group_ZZ_wh3l_MET_JetV_13TeV_nbjet_3l66","histo_ZZ",5,0,5);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_nbjet_3l66->SetBinContent(1,7.428847);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_nbjet_3l66->SetBinError(1,0.5574607);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_nbjet_3l66->SetEntries(200);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_nbjet_3l66->SetFillColor(ci);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_nbjet_3l66->SetFillStyle(3001);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_nbjet_3l66->SetLineColor(ci);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_nbjet_3l66->GetXaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_nbjet_3l66->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_nbjet_3l66->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_nbjet_3l66->GetXaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_nbjet_3l66->GetYaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_nbjet_3l66->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_nbjet_3l66->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_nbjet_3l66->GetYaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_nbjet_3l66->GetZaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_nbjet_3l66->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_nbjet_3l66->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_nbjet_3l66->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_nbjet_3l->Add(new_histo_group_ZZ_wh3l_MET_JetV_13TeV_nbjet_3l,"");
   
   TH1D *new_histo_group_WZ_wh3l_MET_JetV_13TeV_nbjet_3l67 = new TH1D("new_histo_group_WZ_wh3l_MET_JetV_13TeV_nbjet_3l67","histo_WZ",5,0,5);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_nbjet_3l67->SetBinContent(1,118.0659);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_nbjet_3l67->SetBinError(1,0.801063);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_nbjet_3l67->SetEntries(24086);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_nbjet_3l67->SetFillColor(ci);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_nbjet_3l67->SetFillStyle(3001);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_nbjet_3l67->SetLineColor(ci);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_nbjet_3l67->GetXaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_nbjet_3l67->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_nbjet_3l67->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_nbjet_3l67->GetXaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_nbjet_3l67->GetYaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_nbjet_3l67->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_nbjet_3l67->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_nbjet_3l67->GetYaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_nbjet_3l67->GetZaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_nbjet_3l67->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_nbjet_3l67->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_nbjet_3l67->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_nbjet_3l->Add(new_histo_group_WZ_wh3l_MET_JetV_13TeV_nbjet_3l,"");
   
   TH1D *new_histo_group_Higgs_wh3l_MET_JetV_13TeV_nbjet_3l68 = new TH1D("new_histo_group_Higgs_wh3l_MET_JetV_13TeV_nbjet_3l68","histo_H_htt",5,0,5);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_nbjet_3l68->SetBinContent(1,1.709502);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_nbjet_3l68->SetBinError(1,0.04479803);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_nbjet_3l68->SetEntries(2609);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_nbjet_3l68->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_nbjet_3l68->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_nbjet_3l68->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_nbjet_3l68->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_nbjet_3l68->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_nbjet_3l68->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_nbjet_3l68->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_nbjet_3l68->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_nbjet_3l68->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_nbjet_3l68->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_nbjet_3l68->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_nbjet_3l68->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_nbjet_3l68->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_nbjet_3l68->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_nbjet_3l68->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_nbjet_3l->Add(new_histo_group_Higgs_wh3l_MET_JetV_13TeV_nbjet_3l,"");
   thsBackground_grouped_wh3l_MET_JetV_13TeV_nbjet_3l->Draw("hist same");
   
   thsSignal_grouped_wh3l_MET_JetV_13TeV_nbjet_3l = new THStack();
   thsSignal_grouped_wh3l_MET_JetV_13TeV_nbjet_3l->SetName("thsSignal_grouped_wh3l_MET_JetV_13TeV_nbjet_3l");
   thsSignal_grouped_wh3l_MET_JetV_13TeV_nbjet_3l->SetTitle("thsSignal_grouped_wh3l_MET_JetV_13TeV_nbjet_3l");
   
   TH1F *thsSignal_grouped_wh3l_MET_JetV_13TeV_nbjet_3l_stack_14 = new TH1F("thsSignal_grouped_wh3l_MET_JetV_13TeV_nbjet_3l_stack_14","thsSignal_grouped_wh3l_MET_JetV_13TeV_nbjet_3l",5,0,5);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_nbjet_3l_stack_14->SetMinimum(0);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_nbjet_3l_stack_14->SetMaximum(1.842015);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_nbjet_3l_stack_14->SetDirectory(0);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_nbjet_3l_stack_14->SetStats(0);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_nbjet_3l_stack_14->SetLineStyle(0);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_nbjet_3l_stack_14->SetMarkerStyle(20);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_nbjet_3l_stack_14->GetXaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_nbjet_3l_stack_14->GetXaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_nbjet_3l_stack_14->GetXaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_nbjet_3l_stack_14->GetXaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_nbjet_3l_stack_14->GetXaxis()->SetTitleOffset(0.9);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_nbjet_3l_stack_14->GetXaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_nbjet_3l_stack_14->GetYaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_nbjet_3l_stack_14->GetYaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_nbjet_3l_stack_14->GetYaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_nbjet_3l_stack_14->GetYaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_nbjet_3l_stack_14->GetYaxis()->SetTitleOffset(1.25);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_nbjet_3l_stack_14->GetYaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_nbjet_3l_stack_14->GetZaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_nbjet_3l_stack_14->GetZaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_nbjet_3l_stack_14->GetZaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_nbjet_3l_stack_14->GetZaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_nbjet_3l_stack_14->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_nbjet_3l->SetHistogram(thsSignal_grouped_wh3l_MET_JetV_13TeV_nbjet_3l_stack_14);
   
   
   TH1D *new_histo_group_Higgs_wh3l_MET_JetV_13TeV_nbjet_3l69 = new TH1D("new_histo_group_Higgs_wh3l_MET_JetV_13TeV_nbjet_3l69","histo_H_htt",5,0,5);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_nbjet_3l69->SetBinContent(1,1.709502);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_nbjet_3l69->SetBinError(1,0.04479803);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_nbjet_3l69->SetEntries(2609);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_nbjet_3l69->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_nbjet_3l69->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_nbjet_3l69->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_nbjet_3l69->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_nbjet_3l69->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_nbjet_3l69->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_nbjet_3l69->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_nbjet_3l69->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_nbjet_3l69->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_nbjet_3l69->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_nbjet_3l69->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_nbjet_3l69->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_nbjet_3l69->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_nbjet_3l69->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_nbjet_3l69->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_nbjet_3l->Add(new_histo_group_Higgs_wh3l_MET_JetV_13TeV_nbjet_3l,"");
   thsSignal_grouped_wh3l_MET_JetV_13TeV_nbjet_3l->Draw("hist same noclear");
   
   Double_t _fx3013[5] = {
   0.5,
   1.5,
   2.5,
   3.5,
   4.5};
   Double_t _fy3013[5] = {
   155.5853,
   0,
   0,
   0,
   0};
   Double_t _felx3013[5] = {
   0.5,
   0.5,
   0.5,
   0.5,
   0.5};
   Double_t _fely3013[5] = {
   10.54346,
   0,
   0,
   0,
   0};
   Double_t _fehx3013[5] = {
   0.5,
   0.5,
   0.5,
   0.5,
   0.5};
   Double_t _fehy3013[5] = {
   10.50599,
   0,
   0,
   0,
   0};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(5,_fx3013,_fy3013,_felx3013,_fehx3013,_fely3013,_fehy3013);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(12);
   grae->SetFillStyle(3004);
   grae->SetLineColor(12);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3013 = new TH1F("Graph_Graph3013","",100,0,5.5);
   Graph_Graph3013->SetMinimum(0);
   Graph_Graph3013->SetMaximum(182.7004);
   Graph_Graph3013->SetDirectory(0);
   Graph_Graph3013->SetStats(0);
   Graph_Graph3013->SetLineStyle(0);
   Graph_Graph3013->SetMarkerStyle(20);
   Graph_Graph3013->GetXaxis()->SetLabelFont(42);
   Graph_Graph3013->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3013->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3013->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3013->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3013->GetXaxis()->SetTitleFont(42);
   Graph_Graph3013->GetYaxis()->SetLabelFont(42);
   Graph_Graph3013->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3013->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3013->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3013->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3013->GetYaxis()->SetTitleFont(42);
   Graph_Graph3013->GetZaxis()->SetLabelFont(42);
   Graph_Graph3013->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3013->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3013->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3013->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3013);
   
   grae->Draw("2");
   
   Double_t _fx3014[5] = {
   0.5,
   1.5,
   2.5,
   3.5,
   4.5};
   Double_t _fy3014[5] = {
   0,
   0,
   0,
   0,
   0};
   Double_t _felx3014[5] = {
   0.5,
   0.5,
   0.5,
   0.5,
   0.5};
   Double_t _fely3014[5] = {
   0,
   0,
   0,
   0,
   0};
   Double_t _fehx3014[5] = {
   0.5,
   0.5,
   0.5,
   0.5,
   0.5};
   Double_t _fehy3014[5] = {
   1.147908,
   1.147908,
   1.147908,
   1.147908,
   1.147908};
   grae = new TGraphAsymmErrors(5,_fx3014,_fy3014,_felx3014,_fehx3014,_fely3014,_fehy3014);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(1);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3014 = new TH1F("Graph_Graph3014","",100,0,5.5);
   Graph_Graph3014->SetMinimum(0);
   Graph_Graph3014->SetMaximum(1.262698);
   Graph_Graph3014->SetDirectory(0);
   Graph_Graph3014->SetStats(0);
   Graph_Graph3014->SetLineStyle(0);
   Graph_Graph3014->SetMarkerStyle(20);
   Graph_Graph3014->GetXaxis()->SetLabelFont(42);
   Graph_Graph3014->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3014->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3014->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3014->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3014->GetXaxis()->SetTitleFont(42);
   Graph_Graph3014->GetYaxis()->SetLabelFont(42);
   Graph_Graph3014->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3014->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3014->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3014->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3014->GetYaxis()->SetTitleFont(42);
   Graph_Graph3014->GetZaxis()->SetLabelFont(42);
   Graph_Graph3014->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3014->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3014->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3014->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3014);
   
   grae->Draw("p0");
   
   TLegend *leg = new TLegend(0.2,0.7,0.8,0.9,NULL,"brNDC");
   leg->SetTextFont(62);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("new_histo_group_Fake_wh3l_MET_JetV_13TeV_nbjet_3l","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_MET_JetV_13TeV_nbjet_3l","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_MET_JetV_13TeV_nbjet_3l","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_MET_JetV_13TeV_nbjet_3l","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_MET_JetV_13TeV_nbjet_3l","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_MET_JetV_13TeV_nbjet_3l","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_MET_JetV_13TeV_nbjet_3l","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_MET_JetV_13TeV_nbjet_3l","Data","EPL");
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
   entry=leg->AddEntry("new_histo_group_Fake_wh3l_MET_JetV_13TeV_nbjet_3l","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_MET_JetV_13TeV_nbjet_3l","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_MET_JetV_13TeV_nbjet_3l","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_MET_JetV_13TeV_nbjet_3l","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_MET_JetV_13TeV_nbjet_3l","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_MET_JetV_13TeV_nbjet_3l","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_MET_JetV_13TeV_nbjet_3l","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_MET_JetV_13TeV_nbjet_3l","Data","EPL");
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
   
   TH1F *hframe_copy70 = new TH1F("hframe_copy70","",1000,0,5);
   hframe_copy70->SetMinimum(0);
   hframe_copy70->SetMaximum(393.237);
   hframe_copy70->SetDirectory(0);
   hframe_copy70->SetStats(0);
   hframe_copy70->SetLineStyle(0);
   hframe_copy70->SetMarkerStyle(20);
   hframe_copy70->GetXaxis()->SetTitle("N_bJets");
   hframe_copy70->GetXaxis()->SetNdivisions(506);
   hframe_copy70->GetXaxis()->SetLabelFont(42);
   hframe_copy70->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy70->GetXaxis()->SetLabelSize(0.05);
   hframe_copy70->GetXaxis()->SetTitleSize(0.06);
   hframe_copy70->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy70->GetXaxis()->SetTitleFont(42);
   hframe_copy70->GetYaxis()->SetTitle("Events");
   hframe_copy70->GetYaxis()->SetLabelFont(42);
   hframe_copy70->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy70->GetYaxis()->SetLabelSize(0.05);
   hframe_copy70->GetYaxis()->SetTitleSize(0.06);
   hframe_copy70->GetYaxis()->SetTitleOffset(1.25);
   hframe_copy70->GetYaxis()->SetTitleFont(42);
   hframe_copy70->GetZaxis()->SetLabelFont(42);
   hframe_copy70->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy70->GetZaxis()->SetLabelSize(0.05);
   hframe_copy70->GetZaxis()->SetTitleSize(0.06);
   hframe_copy70->GetZaxis()->SetTitleFont(42);
   hframe_copy70->Draw("sameaxis");
   ccwh3l_MET_JetV_13TeV_nbjet_3l->Modified();
   ccwh3l_MET_JetV_13TeV_nbjet_3l->cd();
   ccwh3l_MET_JetV_13TeV_nbjet_3l->SetSelected(ccwh3l_MET_JetV_13TeV_nbjet_3l);
}
