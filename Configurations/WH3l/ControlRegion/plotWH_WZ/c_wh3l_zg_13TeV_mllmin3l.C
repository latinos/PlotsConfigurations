void c_wh3l_zg_13TeV_mllmin3l()
{
//=========Macro generated from canvas: ccwh3l_zg_13TeV_mllmin3l/cc
//=========  (Tue Jun 28 02:22:57 2016) by ROOT version6.02/13
   TCanvas *ccwh3l_zg_13TeV_mllmin3l = new TCanvas("ccwh3l_zg_13TeV_mllmin3l", "cc",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   ccwh3l_zg_13TeV_mllmin3l->SetHighLightColor(2);
   ccwh3l_zg_13TeV_mllmin3l->Range(-28,-15.78666,209.5,105.6492);
   ccwh3l_zg_13TeV_mllmin3l->SetFillColor(0);
   ccwh3l_zg_13TeV_mllmin3l->SetBorderMode(0);
   ccwh3l_zg_13TeV_mllmin3l->SetBorderSize(2);
   ccwh3l_zg_13TeV_mllmin3l->SetTickx(1);
   ccwh3l_zg_13TeV_mllmin3l->SetTicky(1);
   ccwh3l_zg_13TeV_mllmin3l->SetLeftMargin(0.16);
   ccwh3l_zg_13TeV_mllmin3l->SetRightMargin(0.04);
   ccwh3l_zg_13TeV_mllmin3l->SetTopMargin(0.05);
   ccwh3l_zg_13TeV_mllmin3l->SetBottomMargin(0.13);
   ccwh3l_zg_13TeV_mllmin3l->SetFrameFillStyle(0);
   ccwh3l_zg_13TeV_mllmin3l->SetFrameBorderMode(0);
   ccwh3l_zg_13TeV_mllmin3l->SetFrameFillStyle(0);
   ccwh3l_zg_13TeV_mllmin3l->SetFrameBorderMode(0);
   
   TH1F *hframe211 = new TH1F("hframe211","",1000,10,200);
   hframe211->SetMinimum(0);
   hframe211->SetMaximum(99.57738);
   hframe211->SetDirectory(0);
   hframe211->SetStats(0);
   hframe211->SetLineStyle(0);
   hframe211->SetMarkerStyle(20);
   hframe211->GetXaxis()->SetTitle("min m_{ll} [GeV]");
   hframe211->GetXaxis()->SetNdivisions(506);
   hframe211->GetXaxis()->SetLabelFont(42);
   hframe211->GetXaxis()->SetLabelOffset(0.007);
   hframe211->GetXaxis()->SetLabelSize(0.05);
   hframe211->GetXaxis()->SetTitleSize(0.06);
   hframe211->GetXaxis()->SetTitleOffset(0.9);
   hframe211->GetXaxis()->SetTitleFont(42);
   hframe211->GetYaxis()->SetTitle("Events");
   hframe211->GetYaxis()->SetLabelFont(42);
   hframe211->GetYaxis()->SetLabelOffset(0.007);
   hframe211->GetYaxis()->SetLabelSize(0.05);
   hframe211->GetYaxis()->SetTitleSize(0.06);
   hframe211->GetYaxis()->SetTitleOffset(1.25);
   hframe211->GetYaxis()->SetTitleFont(42);
   hframe211->GetZaxis()->SetLabelFont(42);
   hframe211->GetZaxis()->SetLabelOffset(0.007);
   hframe211->GetZaxis()->SetLabelSize(0.05);
   hframe211->GetZaxis()->SetTitleSize(0.06);
   hframe211->GetZaxis()->SetTitleFont(42);
   hframe211->Draw(" ");
   
   THStack *thsBackground_grouped_wh3l_zg_13TeV_mllmin3l = new THStack();
   thsBackground_grouped_wh3l_zg_13TeV_mllmin3l->SetName("thsBackground_grouped_wh3l_zg_13TeV_mllmin3l");
   thsBackground_grouped_wh3l_zg_13TeV_mllmin3l->SetTitle("thsBackground_grouped_wh3l_zg_13TeV_mllmin3l");
   
   TH1F *thsBackground_grouped_wh3l_zg_13TeV_mllmin3l_stack_43 = new TH1F("thsBackground_grouped_wh3l_zg_13TeV_mllmin3l_stack_43","thsBackground_grouped_wh3l_zg_13TeV_mllmin3l",20,10,200);
   thsBackground_grouped_wh3l_zg_13TeV_mllmin3l_stack_43->SetMinimum(-0.5755435);
   thsBackground_grouped_wh3l_zg_13TeV_mllmin3l_stack_43->SetMaximum(32.04688);
   thsBackground_grouped_wh3l_zg_13TeV_mllmin3l_stack_43->SetDirectory(0);
   thsBackground_grouped_wh3l_zg_13TeV_mllmin3l_stack_43->SetStats(0);
   thsBackground_grouped_wh3l_zg_13TeV_mllmin3l_stack_43->SetLineStyle(0);
   thsBackground_grouped_wh3l_zg_13TeV_mllmin3l_stack_43->SetMarkerStyle(20);
   thsBackground_grouped_wh3l_zg_13TeV_mllmin3l_stack_43->GetXaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_mllmin3l_stack_43->GetXaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_zg_13TeV_mllmin3l_stack_43->GetXaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_zg_13TeV_mllmin3l_stack_43->GetXaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_zg_13TeV_mllmin3l_stack_43->GetXaxis()->SetTitleOffset(0.9);
   thsBackground_grouped_wh3l_zg_13TeV_mllmin3l_stack_43->GetXaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_mllmin3l_stack_43->GetYaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_mllmin3l_stack_43->GetYaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_zg_13TeV_mllmin3l_stack_43->GetYaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_zg_13TeV_mllmin3l_stack_43->GetYaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_zg_13TeV_mllmin3l_stack_43->GetYaxis()->SetTitleOffset(1.25);
   thsBackground_grouped_wh3l_zg_13TeV_mllmin3l_stack_43->GetYaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_mllmin3l_stack_43->GetZaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_mllmin3l_stack_43->GetZaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_zg_13TeV_mllmin3l_stack_43->GetZaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_zg_13TeV_mllmin3l_stack_43->GetZaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_zg_13TeV_mllmin3l_stack_43->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_mllmin3l->SetHistogram(thsBackground_grouped_wh3l_zg_13TeV_mllmin3l_stack_43);
   
   
   TH1D *new_histo_group_Fake_wh3l_zg_13TeV_mllmin3l212 = new TH1D("new_histo_group_Fake_wh3l_zg_13TeV_mllmin3l212","histo_Fake",20,10,200);
   new_histo_group_Fake_wh3l_zg_13TeV_mllmin3l212->SetBinContent(1,2.067412);
   new_histo_group_Fake_wh3l_zg_13TeV_mllmin3l212->SetBinContent(2,5.847029);
   new_histo_group_Fake_wh3l_zg_13TeV_mllmin3l212->SetBinContent(3,0.5477029);
   new_histo_group_Fake_wh3l_zg_13TeV_mllmin3l212->SetBinContent(4,8.508531);
   new_histo_group_Fake_wh3l_zg_13TeV_mllmin3l212->SetBinContent(5,3.968581);
   new_histo_group_Fake_wh3l_zg_13TeV_mllmin3l212->SetBinContent(6,3.187697);
   new_histo_group_Fake_wh3l_zg_13TeV_mllmin3l212->SetBinError(1,1.440555);
   new_histo_group_Fake_wh3l_zg_13TeV_mllmin3l212->SetBinError(2,1.702564);
   new_histo_group_Fake_wh3l_zg_13TeV_mllmin3l212->SetBinError(3,1.123246);
   new_histo_group_Fake_wh3l_zg_13TeV_mllmin3l212->SetBinError(4,2.781731);
   new_histo_group_Fake_wh3l_zg_13TeV_mllmin3l212->SetBinError(5,1.547908);
   new_histo_group_Fake_wh3l_zg_13TeV_mllmin3l212->SetBinError(6,1.490486);
   new_histo_group_Fake_wh3l_zg_13TeV_mllmin3l212->SetEntries(442);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_zg_13TeV_mllmin3l212->SetFillColor(ci);
   new_histo_group_Fake_wh3l_zg_13TeV_mllmin3l212->SetFillStyle(3001);

   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_zg_13TeV_mllmin3l212->SetLineColor(ci);
   new_histo_group_Fake_wh3l_zg_13TeV_mllmin3l212->GetXaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_zg_13TeV_mllmin3l212->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_zg_13TeV_mllmin3l212->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_zg_13TeV_mllmin3l212->GetXaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_zg_13TeV_mllmin3l212->GetYaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_zg_13TeV_mllmin3l212->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_zg_13TeV_mllmin3l212->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_zg_13TeV_mllmin3l212->GetYaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_zg_13TeV_mllmin3l212->GetZaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_zg_13TeV_mllmin3l212->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_zg_13TeV_mllmin3l212->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_zg_13TeV_mllmin3l212->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_mllmin3l->Add(new_histo_group_Fake_wh3l_zg_13TeV_mllmin3l,"");
   
   TH1D *new_histo_group_WW_wh3l_zg_13TeV_mllmin3l213 = new TH1D("new_histo_group_WW_wh3l_zg_13TeV_mllmin3l213","histo_WW",20,10,200);
   new_histo_group_WW_wh3l_zg_13TeV_mllmin3l213->SetBinContent(3,0.009961222);
   new_histo_group_WW_wh3l_zg_13TeV_mllmin3l213->SetBinError(3,0.009961222);
   new_histo_group_WW_wh3l_zg_13TeV_mllmin3l213->SetEntries(1);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_zg_13TeV_mllmin3l213->SetFillColor(ci);
   new_histo_group_WW_wh3l_zg_13TeV_mllmin3l213->SetFillStyle(3001);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_zg_13TeV_mllmin3l213->SetLineColor(ci);
   new_histo_group_WW_wh3l_zg_13TeV_mllmin3l213->GetXaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_zg_13TeV_mllmin3l213->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_zg_13TeV_mllmin3l213->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_zg_13TeV_mllmin3l213->GetXaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_zg_13TeV_mllmin3l213->GetYaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_zg_13TeV_mllmin3l213->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_zg_13TeV_mllmin3l213->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_zg_13TeV_mllmin3l213->GetYaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_zg_13TeV_mllmin3l213->GetZaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_zg_13TeV_mllmin3l213->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_zg_13TeV_mllmin3l213->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_zg_13TeV_mllmin3l213->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_mllmin3l->Add(new_histo_group_WW_wh3l_zg_13TeV_mllmin3l,"");
   
   TH1D *new_histo_group_VVV_wh3l_zg_13TeV_mllmin3l214 = new TH1D("new_histo_group_VVV_wh3l_zg_13TeV_mllmin3l214","histo_VVV",20,10,200);
   new_histo_group_VVV_wh3l_zg_13TeV_mllmin3l214->SetBinContent(2,-0.0006863608);
   new_histo_group_VVV_wh3l_zg_13TeV_mllmin3l214->SetBinError(2,0.0006863608);
   new_histo_group_VVV_wh3l_zg_13TeV_mllmin3l214->SetEntries(1);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_zg_13TeV_mllmin3l214->SetFillColor(ci);
   new_histo_group_VVV_wh3l_zg_13TeV_mllmin3l214->SetFillStyle(3001);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_zg_13TeV_mllmin3l214->SetLineColor(ci);
   new_histo_group_VVV_wh3l_zg_13TeV_mllmin3l214->GetXaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_zg_13TeV_mllmin3l214->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_zg_13TeV_mllmin3l214->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_zg_13TeV_mllmin3l214->GetXaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_zg_13TeV_mllmin3l214->GetYaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_zg_13TeV_mllmin3l214->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_zg_13TeV_mllmin3l214->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_zg_13TeV_mllmin3l214->GetYaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_zg_13TeV_mllmin3l214->GetZaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_zg_13TeV_mllmin3l214->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_zg_13TeV_mllmin3l214->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_zg_13TeV_mllmin3l214->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_mllmin3l->Add(new_histo_group_VVV_wh3l_zg_13TeV_mllmin3l,"");
   
   TH1D *new_histo_group_Vg_wh3l_zg_13TeV_mllmin3l215 = new TH1D("new_histo_group_Vg_wh3l_zg_13TeV_mllmin3l215","histo_Vg",20,10,200);
   new_histo_group_Vg_wh3l_zg_13TeV_mllmin3l215->SetBinContent(1,15.56437);
   new_histo_group_Vg_wh3l_zg_13TeV_mllmin3l215->SetBinContent(2,11.30664);
   new_histo_group_Vg_wh3l_zg_13TeV_mllmin3l215->SetBinContent(3,15.39069);
   new_histo_group_Vg_wh3l_zg_13TeV_mllmin3l215->SetBinContent(4,21.64558);
   new_histo_group_Vg_wh3l_zg_13TeV_mllmin3l215->SetBinContent(5,21.78731);
   new_histo_group_Vg_wh3l_zg_13TeV_mllmin3l215->SetBinContent(6,14.37361);
   new_histo_group_Vg_wh3l_zg_13TeV_mllmin3l215->SetBinContent(7,0.1253075);
   new_histo_group_Vg_wh3l_zg_13TeV_mllmin3l215->SetBinError(1,1.532621);
   new_histo_group_Vg_wh3l_zg_13TeV_mllmin3l215->SetBinError(2,1.277618);
   new_histo_group_Vg_wh3l_zg_13TeV_mllmin3l215->SetBinError(3,1.43178);
   new_histo_group_Vg_wh3l_zg_13TeV_mllmin3l215->SetBinError(4,1.826663);
   new_histo_group_Vg_wh3l_zg_13TeV_mllmin3l215->SetBinError(5,1.818168);
   new_histo_group_Vg_wh3l_zg_13TeV_mllmin3l215->SetBinError(6,1.317878);
   new_histo_group_Vg_wh3l_zg_13TeV_mllmin3l215->SetBinError(7,0.1253075);
   new_histo_group_Vg_wh3l_zg_13TeV_mllmin3l215->SetEntries(1327);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_zg_13TeV_mllmin3l215->SetFillColor(ci);
   new_histo_group_Vg_wh3l_zg_13TeV_mllmin3l215->SetFillStyle(3001);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_zg_13TeV_mllmin3l215->SetLineColor(ci);
   new_histo_group_Vg_wh3l_zg_13TeV_mllmin3l215->GetXaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_zg_13TeV_mllmin3l215->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_zg_13TeV_mllmin3l215->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_zg_13TeV_mllmin3l215->GetXaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_zg_13TeV_mllmin3l215->GetYaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_zg_13TeV_mllmin3l215->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_zg_13TeV_mllmin3l215->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_zg_13TeV_mllmin3l215->GetYaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_zg_13TeV_mllmin3l215->GetZaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_zg_13TeV_mllmin3l215->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_zg_13TeV_mllmin3l215->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_zg_13TeV_mllmin3l215->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_mllmin3l->Add(new_histo_group_Vg_wh3l_zg_13TeV_mllmin3l,"");
   
   TH1D *new_histo_group_ZZ_wh3l_zg_13TeV_mllmin3l216 = new TH1D("new_histo_group_ZZ_wh3l_zg_13TeV_mllmin3l216","histo_ZZ",20,10,200);
   new_histo_group_ZZ_wh3l_zg_13TeV_mllmin3l216->SetBinContent(1,0.07919283);
   new_histo_group_ZZ_wh3l_zg_13TeV_mllmin3l216->SetBinContent(2,0.03523322);
   new_histo_group_ZZ_wh3l_zg_13TeV_mllmin3l216->SetBinContent(3,0.252727);
   new_histo_group_ZZ_wh3l_zg_13TeV_mllmin3l216->SetBinContent(4,0.176106);
   new_histo_group_ZZ_wh3l_zg_13TeV_mllmin3l216->SetBinContent(5,0.1473929);
   new_histo_group_ZZ_wh3l_zg_13TeV_mllmin3l216->SetBinContent(6,0.04568927);
   new_histo_group_ZZ_wh3l_zg_13TeV_mllmin3l216->SetBinError(1,0.0582553);
   new_histo_group_ZZ_wh3l_zg_13TeV_mllmin3l216->SetBinError(2,0.03523322);
   new_histo_group_ZZ_wh3l_zg_13TeV_mllmin3l216->SetBinError(3,0.09576141);
   new_histo_group_ZZ_wh3l_zg_13TeV_mllmin3l216->SetBinError(4,0.08820288);
   new_histo_group_ZZ_wh3l_zg_13TeV_mllmin3l216->SetBinError(5,0.07595037);
   new_histo_group_ZZ_wh3l_zg_13TeV_mllmin3l216->SetBinError(6,0.04568927);
   new_histo_group_ZZ_wh3l_zg_13TeV_mllmin3l216->SetEntries(20);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_zg_13TeV_mllmin3l216->SetFillColor(ci);
   new_histo_group_ZZ_wh3l_zg_13TeV_mllmin3l216->SetFillStyle(3001);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_zg_13TeV_mllmin3l216->SetLineColor(ci);
   new_histo_group_ZZ_wh3l_zg_13TeV_mllmin3l216->GetXaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_zg_13TeV_mllmin3l216->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_zg_13TeV_mllmin3l216->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_zg_13TeV_mllmin3l216->GetXaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_zg_13TeV_mllmin3l216->GetYaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_zg_13TeV_mllmin3l216->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_zg_13TeV_mllmin3l216->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_zg_13TeV_mllmin3l216->GetYaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_zg_13TeV_mllmin3l216->GetZaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_zg_13TeV_mllmin3l216->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_zg_13TeV_mllmin3l216->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_zg_13TeV_mllmin3l216->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_mllmin3l->Add(new_histo_group_ZZ_wh3l_zg_13TeV_mllmin3l,"");
   
   TH1D *new_histo_group_WZ_wh3l_zg_13TeV_mllmin3l217 = new TH1D("new_histo_group_WZ_wh3l_zg_13TeV_mllmin3l217","histo_ZZ",20,10,200);
   new_histo_group_WZ_wh3l_zg_13TeV_mllmin3l217->SetBinContent(1,0.07919283);
   new_histo_group_WZ_wh3l_zg_13TeV_mllmin3l217->SetBinContent(2,0.03523322);
   new_histo_group_WZ_wh3l_zg_13TeV_mllmin3l217->SetBinContent(3,0.252727);
   new_histo_group_WZ_wh3l_zg_13TeV_mllmin3l217->SetBinContent(4,0.176106);
   new_histo_group_WZ_wh3l_zg_13TeV_mllmin3l217->SetBinContent(5,0.1473929);
   new_histo_group_WZ_wh3l_zg_13TeV_mllmin3l217->SetBinContent(6,0.04568927);
   new_histo_group_WZ_wh3l_zg_13TeV_mllmin3l217->SetBinError(1,0.0582553);
   new_histo_group_WZ_wh3l_zg_13TeV_mllmin3l217->SetBinError(2,0.03523322);
   new_histo_group_WZ_wh3l_zg_13TeV_mllmin3l217->SetBinError(3,0.09576141);
   new_histo_group_WZ_wh3l_zg_13TeV_mllmin3l217->SetBinError(4,0.08820288);
   new_histo_group_WZ_wh3l_zg_13TeV_mllmin3l217->SetBinError(5,0.07595037);
   new_histo_group_WZ_wh3l_zg_13TeV_mllmin3l217->SetBinError(6,0.04568927);
   new_histo_group_WZ_wh3l_zg_13TeV_mllmin3l217->SetEntries(20);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_zg_13TeV_mllmin3l217->SetFillColor(ci);
   new_histo_group_WZ_wh3l_zg_13TeV_mllmin3l217->SetFillStyle(3001);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_zg_13TeV_mllmin3l217->SetLineColor(ci);
   new_histo_group_WZ_wh3l_zg_13TeV_mllmin3l217->GetXaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_zg_13TeV_mllmin3l217->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_zg_13TeV_mllmin3l217->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_zg_13TeV_mllmin3l217->GetXaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_zg_13TeV_mllmin3l217->GetYaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_zg_13TeV_mllmin3l217->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_zg_13TeV_mllmin3l217->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_zg_13TeV_mllmin3l217->GetYaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_zg_13TeV_mllmin3l217->GetZaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_zg_13TeV_mllmin3l217->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_zg_13TeV_mllmin3l217->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_zg_13TeV_mllmin3l217->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_mllmin3l->Add(new_histo_group_WZ_wh3l_zg_13TeV_mllmin3l,"");
   
   TH1D *new_histo_group_Higgs_wh3l_zg_13TeV_mllmin3l218 = new TH1D("new_histo_group_Higgs_wh3l_zg_13TeV_mllmin3l218","histo_H_htt",20,10,200);
   new_histo_group_Higgs_wh3l_zg_13TeV_mllmin3l218->SetBinContent(1,0.007631002);
   new_histo_group_Higgs_wh3l_zg_13TeV_mllmin3l218->SetBinContent(2,0.01086788);
   new_histo_group_Higgs_wh3l_zg_13TeV_mllmin3l218->SetBinContent(3,0.0207695);
   new_histo_group_Higgs_wh3l_zg_13TeV_mllmin3l218->SetBinContent(4,0.0145156);
   new_histo_group_Higgs_wh3l_zg_13TeV_mllmin3l218->SetBinContent(5,0.004349711);
   new_histo_group_Higgs_wh3l_zg_13TeV_mllmin3l218->SetBinContent(6,0.002670333);
   new_histo_group_Higgs_wh3l_zg_13TeV_mllmin3l218->SetBinError(1,0.003213218);
   new_histo_group_Higgs_wh3l_zg_13TeV_mllmin3l218->SetBinError(2,0.00418059);
   new_histo_group_Higgs_wh3l_zg_13TeV_mllmin3l218->SetBinError(3,0.005045695);
   new_histo_group_Higgs_wh3l_zg_13TeV_mllmin3l218->SetBinError(4,0.003116918);
   new_histo_group_Higgs_wh3l_zg_13TeV_mllmin3l218->SetBinError(5,0.001130545);
   new_histo_group_Higgs_wh3l_zg_13TeV_mllmin3l218->SetBinError(6,0.001300602);
   new_histo_group_Higgs_wh3l_zg_13TeV_mllmin3l218->SetEntries(136);
   new_histo_group_Higgs_wh3l_zg_13TeV_mllmin3l218->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_zg_13TeV_mllmin3l218->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_zg_13TeV_mllmin3l218->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_zg_13TeV_mllmin3l218->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_zg_13TeV_mllmin3l218->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_zg_13TeV_mllmin3l218->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_zg_13TeV_mllmin3l218->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_zg_13TeV_mllmin3l218->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_zg_13TeV_mllmin3l218->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_zg_13TeV_mllmin3l218->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_zg_13TeV_mllmin3l218->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_zg_13TeV_mllmin3l218->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_zg_13TeV_mllmin3l218->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_zg_13TeV_mllmin3l218->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_zg_13TeV_mllmin3l218->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_mllmin3l->Add(new_histo_group_Higgs_wh3l_zg_13TeV_mllmin3l,"");
   thsBackground_grouped_wh3l_zg_13TeV_mllmin3l->Draw("hist same");
   
   thsSignal_grouped_wh3l_zg_13TeV_mllmin3l = new THStack();
   thsSignal_grouped_wh3l_zg_13TeV_mllmin3l->SetName("thsSignal_grouped_wh3l_zg_13TeV_mllmin3l");
   thsSignal_grouped_wh3l_zg_13TeV_mllmin3l->SetTitle("thsSignal_grouped_wh3l_zg_13TeV_mllmin3l");
   
   TH1F *thsSignal_grouped_wh3l_zg_13TeV_mllmin3l_stack_44 = new TH1F("thsSignal_grouped_wh3l_zg_13TeV_mllmin3l_stack_44","thsSignal_grouped_wh3l_zg_13TeV_mllmin3l",20,10,200);
   thsSignal_grouped_wh3l_zg_13TeV_mllmin3l_stack_44->SetMinimum(0);
   thsSignal_grouped_wh3l_zg_13TeV_mllmin3l_stack_44->SetMaximum(0.02710596);
   thsSignal_grouped_wh3l_zg_13TeV_mllmin3l_stack_44->SetDirectory(0);
   thsSignal_grouped_wh3l_zg_13TeV_mllmin3l_stack_44->SetStats(0);
   thsSignal_grouped_wh3l_zg_13TeV_mllmin3l_stack_44->SetLineStyle(0);
   thsSignal_grouped_wh3l_zg_13TeV_mllmin3l_stack_44->SetMarkerStyle(20);
   thsSignal_grouped_wh3l_zg_13TeV_mllmin3l_stack_44->GetXaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_zg_13TeV_mllmin3l_stack_44->GetXaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_zg_13TeV_mllmin3l_stack_44->GetXaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_zg_13TeV_mllmin3l_stack_44->GetXaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_zg_13TeV_mllmin3l_stack_44->GetXaxis()->SetTitleOffset(0.9);
   thsSignal_grouped_wh3l_zg_13TeV_mllmin3l_stack_44->GetXaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_zg_13TeV_mllmin3l_stack_44->GetYaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_zg_13TeV_mllmin3l_stack_44->GetYaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_zg_13TeV_mllmin3l_stack_44->GetYaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_zg_13TeV_mllmin3l_stack_44->GetYaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_zg_13TeV_mllmin3l_stack_44->GetYaxis()->SetTitleOffset(1.25);
   thsSignal_grouped_wh3l_zg_13TeV_mllmin3l_stack_44->GetYaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_zg_13TeV_mllmin3l_stack_44->GetZaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_zg_13TeV_mllmin3l_stack_44->GetZaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_zg_13TeV_mllmin3l_stack_44->GetZaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_zg_13TeV_mllmin3l_stack_44->GetZaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_zg_13TeV_mllmin3l_stack_44->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_zg_13TeV_mllmin3l->SetHistogram(thsSignal_grouped_wh3l_zg_13TeV_mllmin3l_stack_44);
   
   
   TH1D *new_histo_group_Higgs_wh3l_zg_13TeV_mllmin3l219 = new TH1D("new_histo_group_Higgs_wh3l_zg_13TeV_mllmin3l219","histo_H_htt",20,10,200);
   new_histo_group_Higgs_wh3l_zg_13TeV_mllmin3l219->SetBinContent(1,0.007631002);
   new_histo_group_Higgs_wh3l_zg_13TeV_mllmin3l219->SetBinContent(2,0.01086788);
   new_histo_group_Higgs_wh3l_zg_13TeV_mllmin3l219->SetBinContent(3,0.0207695);
   new_histo_group_Higgs_wh3l_zg_13TeV_mllmin3l219->SetBinContent(4,0.0145156);
   new_histo_group_Higgs_wh3l_zg_13TeV_mllmin3l219->SetBinContent(5,0.004349711);
   new_histo_group_Higgs_wh3l_zg_13TeV_mllmin3l219->SetBinContent(6,0.002670333);
   new_histo_group_Higgs_wh3l_zg_13TeV_mllmin3l219->SetBinError(1,0.003213218);
   new_histo_group_Higgs_wh3l_zg_13TeV_mllmin3l219->SetBinError(2,0.00418059);
   new_histo_group_Higgs_wh3l_zg_13TeV_mllmin3l219->SetBinError(3,0.005045695);
   new_histo_group_Higgs_wh3l_zg_13TeV_mllmin3l219->SetBinError(4,0.003116918);
   new_histo_group_Higgs_wh3l_zg_13TeV_mllmin3l219->SetBinError(5,0.001130545);
   new_histo_group_Higgs_wh3l_zg_13TeV_mllmin3l219->SetBinError(6,0.001300602);
   new_histo_group_Higgs_wh3l_zg_13TeV_mllmin3l219->SetEntries(136);
   new_histo_group_Higgs_wh3l_zg_13TeV_mllmin3l219->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_zg_13TeV_mllmin3l219->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_zg_13TeV_mllmin3l219->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_zg_13TeV_mllmin3l219->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_zg_13TeV_mllmin3l219->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_zg_13TeV_mllmin3l219->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_zg_13TeV_mllmin3l219->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_zg_13TeV_mllmin3l219->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_zg_13TeV_mllmin3l219->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_zg_13TeV_mllmin3l219->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_zg_13TeV_mllmin3l219->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_zg_13TeV_mllmin3l219->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_zg_13TeV_mllmin3l219->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_zg_13TeV_mllmin3l219->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_zg_13TeV_mllmin3l219->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_zg_13TeV_mllmin3l->Add(new_histo_group_Higgs_wh3l_zg_13TeV_mllmin3l,"");
   thsSignal_grouped_wh3l_zg_13TeV_mllmin3l->Draw("hist same noclear");
   
   Double_t _fx3043[20] = {
   14.75,
   24.25,
   33.75,
   43.25,
   52.75,
   62.25,
   71.75,
   81.25,
   90.75,
   100.25,
   109.75,
   119.25,
   128.75,
   138.25,
   147.75,
   157.25,
   166.75,
   176.25,
   185.75,
   195.25};
   Double_t _fy3043[20] = {
   17.9663,
   17.43164,
   16.66331,
   30.62915,
   26.03284,
   17.66457,
   0.1253075,
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
   Double_t _felx3043[20] = {
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75};
   Double_t _fely3043[20] = {
   3.158692,
   3.534251,
   2.182364,
   5.413785,
   3.714519,
   3.051463,
   0.1253532,
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
   Double_t _fehx3043[20] = {
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75};
   Double_t _fehy3043[20] = {
   3.158695,
   3.534249,
   2.74795,
   5.413787,
   3.714519,
   3.051463,
   0.1253532,
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
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(20,_fx3043,_fy3043,_felx3043,_fehx3043,_fely3043,_fehy3043);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(12);
   grae->SetFillStyle(3004);
   grae->SetLineColor(12);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3043 = new TH1F("Graph_Graph3043","",100,0,219);
   Graph_Graph3043->SetMinimum(-3.604344);
   Graph_Graph3043->SetMaximum(39.64724);
   Graph_Graph3043->SetDirectory(0);
   Graph_Graph3043->SetStats(0);
   Graph_Graph3043->SetLineStyle(0);
   Graph_Graph3043->SetMarkerStyle(20);
   Graph_Graph3043->GetXaxis()->SetLabelFont(42);
   Graph_Graph3043->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3043->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3043->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3043->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3043->GetXaxis()->SetTitleFont(42);
   Graph_Graph3043->GetYaxis()->SetLabelFont(42);
   Graph_Graph3043->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3043->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3043->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3043->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3043->GetYaxis()->SetTitleFont(42);
   Graph_Graph3043->GetZaxis()->SetLabelFont(42);
   Graph_Graph3043->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3043->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3043->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3043->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3043);
   
   grae->Draw("2");
   
   Double_t _fx3044[20] = {
   14.75,
   24.25,
   33.75,
   43.25,
   52.75,
   62.25,
   71.75,
   81.25,
   90.75,
   100.25,
   109.75,
   119.25,
   128.75,
   138.25,
   147.75,
   157.25,
   166.75,
   176.25,
   185.75,
   195.25};
   Double_t _fy3044[20] = {
   21,
   11,
   21,
   34,
   26,
   15,
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
   Double_t _felx3044[20] = {
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75};
   Double_t _fely3044[20] = {
   4.545892,
   3.265636,
   4.545892,
   5.80224,
   5.066111,
   3.829449,
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
   Double_t _fehx3044[20] = {
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75};
   Double_t _fehy3044[20] = {
   5.655298,
   4.416609,
   5.655298,
   6.888243,
   6.164451,
   4.958839,
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
   grae = new TGraphAsymmErrors(20,_fx3044,_fy3044,_felx3044,_fehx3044,_fely3044,_fehy3044);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(1);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3044 = new TH1F("Graph_Graph3044","",100,0,219);
   Graph_Graph3044->SetMinimum(0);
   Graph_Graph3044->SetMaximum(44.97707);
   Graph_Graph3044->SetDirectory(0);
   Graph_Graph3044->SetStats(0);
   Graph_Graph3044->SetLineStyle(0);
   Graph_Graph3044->SetMarkerStyle(20);
   Graph_Graph3044->GetXaxis()->SetLabelFont(42);
   Graph_Graph3044->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3044->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3044->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3044->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3044->GetXaxis()->SetTitleFont(42);
   Graph_Graph3044->GetYaxis()->SetLabelFont(42);
   Graph_Graph3044->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3044->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3044->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3044->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3044->GetYaxis()->SetTitleFont(42);
   Graph_Graph3044->GetZaxis()->SetLabelFont(42);
   Graph_Graph3044->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3044->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3044->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3044->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3044);
   
   grae->Draw("p0");
   
   TLegend *leg = new TLegend(0.2,0.55,0.8,0.88,NULL,"brNDC");
   leg->SetTextFont(62);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("new_histo_group_Fake_wh3l_zg_13TeV_mllmin3l","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_zg_13TeV_mllmin3l","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_zg_13TeV_mllmin3l","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_zg_13TeV_mllmin3l","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_zg_13TeV_mllmin3l","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_zg_13TeV_mllmin3l","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_zg_13TeV_mllmin3l","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_zg_13TeV_mllmin3l","Data","EPL");
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
   
   leg = new TLegend(0.2,0.55,0.8,0.88,NULL,"brNDC");
   leg->SetTextFont(62);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   entry=leg->AddEntry("new_histo_group_Fake_wh3l_zg_13TeV_mllmin3l","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_zg_13TeV_mllmin3l","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_zg_13TeV_mllmin3l","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_zg_13TeV_mllmin3l","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_zg_13TeV_mllmin3l","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_zg_13TeV_mllmin3l","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_zg_13TeV_mllmin3l","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_zg_13TeV_mllmin3l","Data","EPL");
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
   
   TH1F *hframe_copy220 = new TH1F("hframe_copy220","",1000,10,200);
   hframe_copy220->SetMinimum(0);
   hframe_copy220->SetMaximum(99.57738);
   hframe_copy220->SetDirectory(0);
   hframe_copy220->SetStats(0);
   hframe_copy220->SetLineStyle(0);
   hframe_copy220->SetMarkerStyle(20);
   hframe_copy220->GetXaxis()->SetTitle("min m_{ll} [GeV]");
   hframe_copy220->GetXaxis()->SetNdivisions(506);
   hframe_copy220->GetXaxis()->SetLabelFont(42);
   hframe_copy220->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy220->GetXaxis()->SetLabelSize(0.05);
   hframe_copy220->GetXaxis()->SetTitleSize(0.06);
   hframe_copy220->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy220->GetXaxis()->SetTitleFont(42);
   hframe_copy220->GetYaxis()->SetTitle("Events");
   hframe_copy220->GetYaxis()->SetLabelFont(42);
   hframe_copy220->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy220->GetYaxis()->SetLabelSize(0.05);
   hframe_copy220->GetYaxis()->SetTitleSize(0.06);
   hframe_copy220->GetYaxis()->SetTitleOffset(1.25);
   hframe_copy220->GetYaxis()->SetTitleFont(42);
   hframe_copy220->GetZaxis()->SetLabelFont(42);
   hframe_copy220->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy220->GetZaxis()->SetLabelSize(0.05);
   hframe_copy220->GetZaxis()->SetTitleSize(0.06);
   hframe_copy220->GetZaxis()->SetTitleFont(42);
   hframe_copy220->Draw("sameaxis");
   ccwh3l_zg_13TeV_mllmin3l->Modified();
   ccwh3l_zg_13TeV_mllmin3l->cd();
   ccwh3l_zg_13TeV_mllmin3l->SetSelected(ccwh3l_zg_13TeV_mllmin3l);
}
