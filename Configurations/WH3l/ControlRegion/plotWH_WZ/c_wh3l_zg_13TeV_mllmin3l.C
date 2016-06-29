void c_wh3l_zg_13TeV_mllmin3l()
{
//=========Macro generated from canvas: ccwh3l_zg_13TeV_mllmin3l/cc
//=========  (Tue Jun 28 16:49:14 2016) by ROOT version6.02/13
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
   
   TH1F *hframe241 = new TH1F("hframe241","",1000,10,200);
   hframe241->SetMinimum(0);
   hframe241->SetMaximum(99.57738);
   hframe241->SetDirectory(0);
   hframe241->SetStats(0);
   hframe241->SetLineStyle(0);
   hframe241->SetMarkerStyle(20);
   hframe241->GetXaxis()->SetTitle("min m_{ll} [GeV]");
   hframe241->GetXaxis()->SetNdivisions(506);
   hframe241->GetXaxis()->SetLabelFont(42);
   hframe241->GetXaxis()->SetLabelOffset(0.007);
   hframe241->GetXaxis()->SetLabelSize(0.05);
   hframe241->GetXaxis()->SetTitleSize(0.06);
   hframe241->GetXaxis()->SetTitleOffset(0.9);
   hframe241->GetXaxis()->SetTitleFont(42);
   hframe241->GetYaxis()->SetTitle("Events");
   hframe241->GetYaxis()->SetLabelFont(42);
   hframe241->GetYaxis()->SetLabelOffset(0.007);
   hframe241->GetYaxis()->SetLabelSize(0.05);
   hframe241->GetYaxis()->SetTitleSize(0.06);
   hframe241->GetYaxis()->SetTitleOffset(1.25);
   hframe241->GetYaxis()->SetTitleFont(42);
   hframe241->GetZaxis()->SetLabelFont(42);
   hframe241->GetZaxis()->SetLabelOffset(0.007);
   hframe241->GetZaxis()->SetLabelSize(0.05);
   hframe241->GetZaxis()->SetTitleSize(0.06);
   hframe241->GetZaxis()->SetTitleFont(42);
   hframe241->Draw(" ");
   
   THStack *thsBackground_grouped_wh3l_zg_13TeV_mllmin3l = new THStack();
   thsBackground_grouped_wh3l_zg_13TeV_mllmin3l->SetName("thsBackground_grouped_wh3l_zg_13TeV_mllmin3l");
   thsBackground_grouped_wh3l_zg_13TeV_mllmin3l->SetTitle("thsBackground_grouped_wh3l_zg_13TeV_mllmin3l");
   
   TH1F *thsBackground_grouped_wh3l_zg_13TeV_mllmin3l_stack_31 = new TH1F("thsBackground_grouped_wh3l_zg_13TeV_mllmin3l_stack_31","thsBackground_grouped_wh3l_zg_13TeV_mllmin3l",20,10,200);
   thsBackground_grouped_wh3l_zg_13TeV_mllmin3l_stack_31->SetMinimum(-0.5960226);
   thsBackground_grouped_wh3l_zg_13TeV_mllmin3l_stack_31->SetMaximum(33.8086);
   thsBackground_grouped_wh3l_zg_13TeV_mllmin3l_stack_31->SetDirectory(0);
   thsBackground_grouped_wh3l_zg_13TeV_mllmin3l_stack_31->SetStats(0);
   thsBackground_grouped_wh3l_zg_13TeV_mllmin3l_stack_31->SetLineStyle(0);
   thsBackground_grouped_wh3l_zg_13TeV_mllmin3l_stack_31->SetMarkerStyle(20);
   thsBackground_grouped_wh3l_zg_13TeV_mllmin3l_stack_31->GetXaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_mllmin3l_stack_31->GetXaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_zg_13TeV_mllmin3l_stack_31->GetXaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_zg_13TeV_mllmin3l_stack_31->GetXaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_zg_13TeV_mllmin3l_stack_31->GetXaxis()->SetTitleOffset(0.9);
   thsBackground_grouped_wh3l_zg_13TeV_mllmin3l_stack_31->GetXaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_mllmin3l_stack_31->GetYaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_mllmin3l_stack_31->GetYaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_zg_13TeV_mllmin3l_stack_31->GetYaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_zg_13TeV_mllmin3l_stack_31->GetYaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_zg_13TeV_mllmin3l_stack_31->GetYaxis()->SetTitleOffset(1.25);
   thsBackground_grouped_wh3l_zg_13TeV_mllmin3l_stack_31->GetYaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_mllmin3l_stack_31->GetZaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_mllmin3l_stack_31->GetZaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_zg_13TeV_mllmin3l_stack_31->GetZaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_zg_13TeV_mllmin3l_stack_31->GetZaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_zg_13TeV_mllmin3l_stack_31->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_mllmin3l->SetHistogram(thsBackground_grouped_wh3l_zg_13TeV_mllmin3l_stack_31);
   
   
   TH1D *new_histo_group_Fake_wh3l_zg_13TeV_mllmin3l242 = new TH1D("new_histo_group_Fake_wh3l_zg_13TeV_mllmin3l242","histo_Fake",20,10,200);
   new_histo_group_Fake_wh3l_zg_13TeV_mllmin3l242->SetBinContent(1,2.094332);
   new_histo_group_Fake_wh3l_zg_13TeV_mllmin3l242->SetBinContent(2,5.441825);
   new_histo_group_Fake_wh3l_zg_13TeV_mllmin3l242->SetBinContent(3,0.532664);
   new_histo_group_Fake_wh3l_zg_13TeV_mllmin3l242->SetBinContent(4,8.805115);
   new_histo_group_Fake_wh3l_zg_13TeV_mllmin3l242->SetBinContent(5,4.086348);
   new_histo_group_Fake_wh3l_zg_13TeV_mllmin3l242->SetBinContent(6,3.187697);
   new_histo_group_Fake_wh3l_zg_13TeV_mllmin3l242->SetBinError(1,1.45677);
   new_histo_group_Fake_wh3l_zg_13TeV_mllmin3l242->SetBinError(2,1.72486);
   new_histo_group_Fake_wh3l_zg_13TeV_mllmin3l242->SetBinError(3,1.128687);
   new_histo_group_Fake_wh3l_zg_13TeV_mllmin3l242->SetBinError(4,2.789824);
   new_histo_group_Fake_wh3l_zg_13TeV_mllmin3l242->SetBinError(5,1.563783);
   new_histo_group_Fake_wh3l_zg_13TeV_mllmin3l242->SetBinError(6,1.490486);
   new_histo_group_Fake_wh3l_zg_13TeV_mllmin3l242->SetEntries(461);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_zg_13TeV_mllmin3l242->SetFillColor(ci);
   new_histo_group_Fake_wh3l_zg_13TeV_mllmin3l242->SetFillStyle(3001);

   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_zg_13TeV_mllmin3l242->SetLineColor(ci);
   new_histo_group_Fake_wh3l_zg_13TeV_mllmin3l242->GetXaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_zg_13TeV_mllmin3l242->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_zg_13TeV_mllmin3l242->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_zg_13TeV_mllmin3l242->GetXaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_zg_13TeV_mllmin3l242->GetYaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_zg_13TeV_mllmin3l242->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_zg_13TeV_mllmin3l242->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_zg_13TeV_mllmin3l242->GetYaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_zg_13TeV_mllmin3l242->GetZaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_zg_13TeV_mllmin3l242->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_zg_13TeV_mllmin3l242->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_zg_13TeV_mllmin3l242->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_mllmin3l->Add(new_histo_group_Fake_wh3l_zg_13TeV_mllmin3l,"");
   
   TH1D *new_histo_group_WW_wh3l_zg_13TeV_mllmin3l243 = new TH1D("new_histo_group_WW_wh3l_zg_13TeV_mllmin3l243","histo_WW",20,10,200);
   new_histo_group_WW_wh3l_zg_13TeV_mllmin3l243->SetBinContent(3,0.009961222);
   new_histo_group_WW_wh3l_zg_13TeV_mllmin3l243->SetBinError(3,0.009961222);
   new_histo_group_WW_wh3l_zg_13TeV_mllmin3l243->SetEntries(1);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_zg_13TeV_mllmin3l243->SetFillColor(ci);
   new_histo_group_WW_wh3l_zg_13TeV_mllmin3l243->SetFillStyle(3001);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_zg_13TeV_mllmin3l243->SetLineColor(ci);
   new_histo_group_WW_wh3l_zg_13TeV_mllmin3l243->GetXaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_zg_13TeV_mllmin3l243->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_zg_13TeV_mllmin3l243->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_zg_13TeV_mllmin3l243->GetXaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_zg_13TeV_mllmin3l243->GetYaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_zg_13TeV_mllmin3l243->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_zg_13TeV_mllmin3l243->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_zg_13TeV_mllmin3l243->GetYaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_zg_13TeV_mllmin3l243->GetZaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_zg_13TeV_mllmin3l243->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_zg_13TeV_mllmin3l243->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_zg_13TeV_mllmin3l243->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_mllmin3l->Add(new_histo_group_WW_wh3l_zg_13TeV_mllmin3l,"");
   
   TH1D *new_histo_group_VVV_wh3l_zg_13TeV_mllmin3l244 = new TH1D("new_histo_group_VVV_wh3l_zg_13TeV_mllmin3l244","histo_VVV",20,10,200);
   new_histo_group_VVV_wh3l_zg_13TeV_mllmin3l244->SetBinContent(2,-0.0006863608);
   new_histo_group_VVV_wh3l_zg_13TeV_mllmin3l244->SetBinError(2,0.0006863608);
   new_histo_group_VVV_wh3l_zg_13TeV_mllmin3l244->SetEntries(1);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_zg_13TeV_mllmin3l244->SetFillColor(ci);
   new_histo_group_VVV_wh3l_zg_13TeV_mllmin3l244->SetFillStyle(3001);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_zg_13TeV_mllmin3l244->SetLineColor(ci);
   new_histo_group_VVV_wh3l_zg_13TeV_mllmin3l244->GetXaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_zg_13TeV_mllmin3l244->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_zg_13TeV_mllmin3l244->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_zg_13TeV_mllmin3l244->GetXaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_zg_13TeV_mllmin3l244->GetYaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_zg_13TeV_mllmin3l244->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_zg_13TeV_mllmin3l244->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_zg_13TeV_mllmin3l244->GetYaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_zg_13TeV_mllmin3l244->GetZaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_zg_13TeV_mllmin3l244->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_zg_13TeV_mllmin3l244->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_zg_13TeV_mllmin3l244->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_mllmin3l->Add(new_histo_group_VVV_wh3l_zg_13TeV_mllmin3l,"");
   
   TH1D *new_histo_group_Vg_wh3l_zg_13TeV_mllmin3l245 = new TH1D("new_histo_group_Vg_wh3l_zg_13TeV_mllmin3l245","histo_Vg",20,10,200);
   new_histo_group_Vg_wh3l_zg_13TeV_mllmin3l245->SetBinContent(1,16.01458);
   new_histo_group_Vg_wh3l_zg_13TeV_mllmin3l245->SetBinContent(2,11.79445);
   new_histo_group_Vg_wh3l_zg_13TeV_mllmin3l245->SetBinContent(3,16.03735);
   new_histo_group_Vg_wh3l_zg_13TeV_mllmin3l245->SetBinContent(4,22.82632);
   new_histo_group_Vg_wh3l_zg_13TeV_mllmin3l245->SetBinContent(5,22.29709);
   new_histo_group_Vg_wh3l_zg_13TeV_mllmin3l245->SetBinContent(6,15.06923);
   new_histo_group_Vg_wh3l_zg_13TeV_mllmin3l245->SetBinContent(7,0.1253075);
   new_histo_group_Vg_wh3l_zg_13TeV_mllmin3l245->SetBinError(1,1.555114);
   new_histo_group_Vg_wh3l_zg_13TeV_mllmin3l245->SetBinError(2,1.29705);
   new_histo_group_Vg_wh3l_zg_13TeV_mllmin3l245->SetBinError(3,1.468122);
   new_histo_group_Vg_wh3l_zg_13TeV_mllmin3l245->SetBinError(4,1.867152);
   new_histo_group_Vg_wh3l_zg_13TeV_mllmin3l245->SetBinError(5,1.832564);
   new_histo_group_Vg_wh3l_zg_13TeV_mllmin3l245->SetBinError(6,1.342207);
   new_histo_group_Vg_wh3l_zg_13TeV_mllmin3l245->SetBinError(7,0.1253075);
   new_histo_group_Vg_wh3l_zg_13TeV_mllmin3l245->SetEntries(1378);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_zg_13TeV_mllmin3l245->SetFillColor(ci);
   new_histo_group_Vg_wh3l_zg_13TeV_mllmin3l245->SetFillStyle(3001);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_zg_13TeV_mllmin3l245->SetLineColor(ci);
   new_histo_group_Vg_wh3l_zg_13TeV_mllmin3l245->GetXaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_zg_13TeV_mllmin3l245->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_zg_13TeV_mllmin3l245->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_zg_13TeV_mllmin3l245->GetXaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_zg_13TeV_mllmin3l245->GetYaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_zg_13TeV_mllmin3l245->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_zg_13TeV_mllmin3l245->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_zg_13TeV_mllmin3l245->GetYaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_zg_13TeV_mllmin3l245->GetZaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_zg_13TeV_mllmin3l245->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_zg_13TeV_mllmin3l245->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_zg_13TeV_mllmin3l245->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_mllmin3l->Add(new_histo_group_Vg_wh3l_zg_13TeV_mllmin3l,"");
   
   TH1D *new_histo_group_ZZ_wh3l_zg_13TeV_mllmin3l246 = new TH1D("new_histo_group_ZZ_wh3l_zg_13TeV_mllmin3l246","histo_ZZ",20,10,200);
   new_histo_group_ZZ_wh3l_zg_13TeV_mllmin3l246->SetBinContent(1,0.07919283);
   new_histo_group_ZZ_wh3l_zg_13TeV_mllmin3l246->SetBinContent(2,0.03523322);
   new_histo_group_ZZ_wh3l_zg_13TeV_mllmin3l246->SetBinContent(3,0.252727);
   new_histo_group_ZZ_wh3l_zg_13TeV_mllmin3l246->SetBinContent(4,0.176106);
   new_histo_group_ZZ_wh3l_zg_13TeV_mllmin3l246->SetBinContent(5,0.1473929);
   new_histo_group_ZZ_wh3l_zg_13TeV_mllmin3l246->SetBinContent(6,0.04568927);
   new_histo_group_ZZ_wh3l_zg_13TeV_mllmin3l246->SetBinError(1,0.0582553);
   new_histo_group_ZZ_wh3l_zg_13TeV_mllmin3l246->SetBinError(2,0.03523322);
   new_histo_group_ZZ_wh3l_zg_13TeV_mllmin3l246->SetBinError(3,0.09576141);
   new_histo_group_ZZ_wh3l_zg_13TeV_mllmin3l246->SetBinError(4,0.08820288);
   new_histo_group_ZZ_wh3l_zg_13TeV_mllmin3l246->SetBinError(5,0.07595037);
   new_histo_group_ZZ_wh3l_zg_13TeV_mllmin3l246->SetBinError(6,0.04568927);
   new_histo_group_ZZ_wh3l_zg_13TeV_mllmin3l246->SetEntries(20);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_zg_13TeV_mllmin3l246->SetFillColor(ci);
   new_histo_group_ZZ_wh3l_zg_13TeV_mllmin3l246->SetFillStyle(3001);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_zg_13TeV_mllmin3l246->SetLineColor(ci);
   new_histo_group_ZZ_wh3l_zg_13TeV_mllmin3l246->GetXaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_zg_13TeV_mllmin3l246->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_zg_13TeV_mllmin3l246->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_zg_13TeV_mllmin3l246->GetXaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_zg_13TeV_mllmin3l246->GetYaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_zg_13TeV_mllmin3l246->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_zg_13TeV_mllmin3l246->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_zg_13TeV_mllmin3l246->GetYaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_zg_13TeV_mllmin3l246->GetZaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_zg_13TeV_mllmin3l246->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_zg_13TeV_mllmin3l246->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_zg_13TeV_mllmin3l246->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_mllmin3l->Add(new_histo_group_ZZ_wh3l_zg_13TeV_mllmin3l,"");
   
   TH1D *new_histo_group_WZ_wh3l_zg_13TeV_mllmin3l247 = new TH1D("new_histo_group_WZ_wh3l_zg_13TeV_mllmin3l247","histo_WZ",20,10,200);
   new_histo_group_WZ_wh3l_zg_13TeV_mllmin3l247->SetBinContent(1,0.3019466);
   new_histo_group_WZ_wh3l_zg_13TeV_mllmin3l247->SetBinContent(2,0.359145);
   new_histo_group_WZ_wh3l_zg_13TeV_mllmin3l247->SetBinContent(3,0.5738182);
   new_histo_group_WZ_wh3l_zg_13TeV_mllmin3l247->SetBinContent(4,0.3911272);
   new_histo_group_WZ_wh3l_zg_13TeV_mllmin3l247->SetBinContent(5,0.1893216);
   new_histo_group_WZ_wh3l_zg_13TeV_mllmin3l247->SetBinContent(6,0.06316562);
   new_histo_group_WZ_wh3l_zg_13TeV_mllmin3l247->SetBinError(1,0.03995352);
   new_histo_group_WZ_wh3l_zg_13TeV_mllmin3l247->SetBinError(2,0.04473542);
   new_histo_group_WZ_wh3l_zg_13TeV_mllmin3l247->SetBinError(3,0.05532363);
   new_histo_group_WZ_wh3l_zg_13TeV_mllmin3l247->SetBinError(4,0.04697528);
   new_histo_group_WZ_wh3l_zg_13TeV_mllmin3l247->SetBinError(5,0.03202421);
   new_histo_group_WZ_wh3l_zg_13TeV_mllmin3l247->SetBinError(6,0.01828619);
   new_histo_group_WZ_wh3l_zg_13TeV_mllmin3l247->SetEntries(376);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_zg_13TeV_mllmin3l247->SetFillColor(ci);
   new_histo_group_WZ_wh3l_zg_13TeV_mllmin3l247->SetFillStyle(3001);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_zg_13TeV_mllmin3l247->SetLineColor(ci);
   new_histo_group_WZ_wh3l_zg_13TeV_mllmin3l247->GetXaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_zg_13TeV_mllmin3l247->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_zg_13TeV_mllmin3l247->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_zg_13TeV_mllmin3l247->GetXaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_zg_13TeV_mllmin3l247->GetYaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_zg_13TeV_mllmin3l247->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_zg_13TeV_mllmin3l247->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_zg_13TeV_mllmin3l247->GetYaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_zg_13TeV_mllmin3l247->GetZaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_zg_13TeV_mllmin3l247->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_zg_13TeV_mllmin3l247->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_zg_13TeV_mllmin3l247->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_mllmin3l->Add(new_histo_group_WZ_wh3l_zg_13TeV_mllmin3l,"");
   thsBackground_grouped_wh3l_zg_13TeV_mllmin3l->Draw("hist same");
   
   Double_t _fx3061[20] = {
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
   Double_t _fy3061[20] = {
   18.49005,
   17.62997,
   17.40652,
   32.19867,
   26.72015,
   18.36578,
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
   Double_t _felx3061[20] = {
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
   Double_t _fely3061[20] = {
   3.202541,
   3.520387,
   2.211955,
   5.507104,
   3.761697,
   3.077627,
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
   Double_t _fehx3061[20] = {
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
   Double_t _fehy3061[20] = {
   3.202543,
   3.520387,
   2.79732,
   5.507101,
   3.761695,
   3.077625,
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
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(20,_fx3061,_fy3061,_felx3061,_fehx3061,_fely3061,_fehy3061);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(12);
   grae->SetFillStyle(3004);
   grae->SetLineColor(12);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3061 = new TH1F("Graph_Graph3061","",100,0,219);
   Graph_Graph3061->SetMinimum(-3.770627);
   Graph_Graph3061->SetMaximum(41.47635);
   Graph_Graph3061->SetDirectory(0);
   Graph_Graph3061->SetStats(0);
   Graph_Graph3061->SetLineStyle(0);
   Graph_Graph3061->SetMarkerStyle(20);
   Graph_Graph3061->GetXaxis()->SetLabelFont(42);
   Graph_Graph3061->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3061->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3061->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3061->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3061->GetXaxis()->SetTitleFont(42);
   Graph_Graph3061->GetYaxis()->SetLabelFont(42);
   Graph_Graph3061->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3061->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3061->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3061->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3061->GetYaxis()->SetTitleFont(42);
   Graph_Graph3061->GetZaxis()->SetLabelFont(42);
   Graph_Graph3061->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3061->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3061->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3061->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3061);
   
   grae->Draw("2");
   
   Double_t _fx3062[20] = {
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
   Double_t _fy3062[20] = {
   23,
   13,
   21,
   34,
   27,
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
   Double_t _felx3062[20] = {
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
   Double_t _fely3062[20] = {
   4.760806,
   3.558726,
   4.545892,
   5.80224,
   5.163869,
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
   Double_t _fehx3062[20] = {
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
   Double_t _fehy3062[20] = {
   5.865355,
   4.697669,
   5.655298,
   6.888243,
   6.260373,
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
   grae = new TGraphAsymmErrors(20,_fx3062,_fy3062,_felx3062,_fehx3062,_fely3062,_fehy3062);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(1);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3062 = new TH1F("Graph_Graph3062","",100,0,219);
   Graph_Graph3062->SetMinimum(0);
   Graph_Graph3062->SetMaximum(44.97707);
   Graph_Graph3062->SetDirectory(0);
   Graph_Graph3062->SetStats(0);
   Graph_Graph3062->SetLineStyle(0);
   Graph_Graph3062->SetMarkerStyle(20);
   Graph_Graph3062->GetXaxis()->SetLabelFont(42);
   Graph_Graph3062->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3062->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3062->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3062->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3062->GetXaxis()->SetTitleFont(42);
   Graph_Graph3062->GetYaxis()->SetLabelFont(42);
   Graph_Graph3062->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3062->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3062->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3062->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3062->GetYaxis()->SetTitleFont(42);
   Graph_Graph3062->GetZaxis()->SetLabelFont(42);
   Graph_Graph3062->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3062->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3062->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3062->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3062);
   
   grae->Draw("p0");
   
   TLegend *leg = new TLegend(0.2,0.7,0.8,0.9,NULL,"brNDC");
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
   
   leg = new TLegend(0.2,0.7,0.8,0.9,NULL,"brNDC");
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
   
   TH1F *hframe_copy248 = new TH1F("hframe_copy248","",1000,10,200);
   hframe_copy248->SetMinimum(0);
   hframe_copy248->SetMaximum(99.57738);
   hframe_copy248->SetDirectory(0);
   hframe_copy248->SetStats(0);
   hframe_copy248->SetLineStyle(0);
   hframe_copy248->SetMarkerStyle(20);
   hframe_copy248->GetXaxis()->SetTitle("min m_{ll} [GeV]");
   hframe_copy248->GetXaxis()->SetNdivisions(506);
   hframe_copy248->GetXaxis()->SetLabelFont(42);
   hframe_copy248->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy248->GetXaxis()->SetLabelSize(0.05);
   hframe_copy248->GetXaxis()->SetTitleSize(0.06);
   hframe_copy248->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy248->GetXaxis()->SetTitleFont(42);
   hframe_copy248->GetYaxis()->SetTitle("Events");
   hframe_copy248->GetYaxis()->SetLabelFont(42);
   hframe_copy248->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy248->GetYaxis()->SetLabelSize(0.05);
   hframe_copy248->GetYaxis()->SetTitleSize(0.06);
   hframe_copy248->GetYaxis()->SetTitleOffset(1.25);
   hframe_copy248->GetYaxis()->SetTitleFont(42);
   hframe_copy248->GetZaxis()->SetLabelFont(42);
   hframe_copy248->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy248->GetZaxis()->SetLabelSize(0.05);
   hframe_copy248->GetZaxis()->SetTitleSize(0.06);
   hframe_copy248->GetZaxis()->SetTitleFont(42);
   hframe_copy248->Draw("sameaxis");
   ccwh3l_zg_13TeV_mllmin3l->Modified();
   ccwh3l_zg_13TeV_mllmin3l->cd();
   ccwh3l_zg_13TeV_mllmin3l->SetSelected(ccwh3l_zg_13TeV_mllmin3l);
}
