void c_wh3l_Pre_13TeV_njet_3l()
{
//=========Macro generated from canvas: ccwh3l_Pre_13TeV_njet_3l/cc
//=========  (Sun Jul  3 16:19:07 2016) by ROOT version6.02/13
   TCanvas *ccwh3l_Pre_13TeV_njet_3l = new TCanvas("ccwh3l_Pre_13TeV_njet_3l", "cc",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   ccwh3l_Pre_13TeV_njet_3l->SetHighLightColor(2);
   ccwh3l_Pre_13TeV_njet_3l->Range(-1.6,-246.812,8.4,1651.742);
   ccwh3l_Pre_13TeV_njet_3l->SetFillColor(0);
   ccwh3l_Pre_13TeV_njet_3l->SetBorderMode(0);
   ccwh3l_Pre_13TeV_njet_3l->SetBorderSize(2);
   ccwh3l_Pre_13TeV_njet_3l->SetTickx(1);
   ccwh3l_Pre_13TeV_njet_3l->SetTicky(1);
   ccwh3l_Pre_13TeV_njet_3l->SetLeftMargin(0.16);
   ccwh3l_Pre_13TeV_njet_3l->SetRightMargin(0.04);
   ccwh3l_Pre_13TeV_njet_3l->SetTopMargin(0.05);
   ccwh3l_Pre_13TeV_njet_3l->SetBottomMargin(0.13);
   ccwh3l_Pre_13TeV_njet_3l->SetFrameFillStyle(0);
   ccwh3l_Pre_13TeV_njet_3l->SetFrameBorderMode(0);
   ccwh3l_Pre_13TeV_njet_3l->SetFrameFillStyle(0);
   ccwh3l_Pre_13TeV_njet_3l->SetFrameBorderMode(0);
   
   TH1F *hframe201 = new TH1F("hframe201","",1000,0,8);
   hframe201->SetMinimum(0);
   hframe201->SetMaximum(1556.814);
   hframe201->SetDirectory(0);
   hframe201->SetStats(0);
   hframe201->SetLineStyle(0);
   hframe201->SetMarkerStyle(20);
   hframe201->GetXaxis()->SetTitle("N_Jets");
   hframe201->GetXaxis()->SetNdivisions(506);
   hframe201->GetXaxis()->SetLabelFont(42);
   hframe201->GetXaxis()->SetLabelOffset(0.007);
   hframe201->GetXaxis()->SetLabelSize(0.05);
   hframe201->GetXaxis()->SetTitleSize(0.06);
   hframe201->GetXaxis()->SetTitleOffset(0.9);
   hframe201->GetXaxis()->SetTitleFont(42);
   hframe201->GetYaxis()->SetTitle("Events");
   hframe201->GetYaxis()->SetLabelFont(42);
   hframe201->GetYaxis()->SetLabelOffset(0.007);
   hframe201->GetYaxis()->SetLabelSize(0.05);
   hframe201->GetYaxis()->SetTitleSize(0.06);
   hframe201->GetYaxis()->SetTitleOffset(1.25);
   hframe201->GetYaxis()->SetTitleFont(42);
   hframe201->GetZaxis()->SetLabelFont(42);
   hframe201->GetZaxis()->SetLabelOffset(0.007);
   hframe201->GetZaxis()->SetLabelSize(0.05);
   hframe201->GetZaxis()->SetTitleSize(0.06);
   hframe201->GetZaxis()->SetTitleFont(42);
   hframe201->Draw(" ");
   
   THStack *thsBackground_grouped_wh3l_Pre_13TeV_njet_3l = new THStack();
   thsBackground_grouped_wh3l_Pre_13TeV_njet_3l->SetName("thsBackground_grouped_wh3l_Pre_13TeV_njet_3l");
   thsBackground_grouped_wh3l_Pre_13TeV_njet_3l->SetTitle("thsBackground_grouped_wh3l_Pre_13TeV_njet_3l");
   
   TH1F *thsBackground_grouped_wh3l_Pre_13TeV_njet_3l_stack_41 = new TH1F("thsBackground_grouped_wh3l_Pre_13TeV_njet_3l_stack_41","thsBackground_grouped_wh3l_Pre_13TeV_njet_3l",8,0,8);
   thsBackground_grouped_wh3l_Pre_13TeV_njet_3l_stack_41->SetMinimum(0);
   thsBackground_grouped_wh3l_Pre_13TeV_njet_3l_stack_41->SetMaximum(653.862);
   thsBackground_grouped_wh3l_Pre_13TeV_njet_3l_stack_41->SetDirectory(0);
   thsBackground_grouped_wh3l_Pre_13TeV_njet_3l_stack_41->SetStats(0);
   thsBackground_grouped_wh3l_Pre_13TeV_njet_3l_stack_41->SetLineStyle(0);
   thsBackground_grouped_wh3l_Pre_13TeV_njet_3l_stack_41->SetMarkerStyle(20);
   thsBackground_grouped_wh3l_Pre_13TeV_njet_3l_stack_41->GetXaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_Pre_13TeV_njet_3l_stack_41->GetXaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_Pre_13TeV_njet_3l_stack_41->GetXaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_Pre_13TeV_njet_3l_stack_41->GetXaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_Pre_13TeV_njet_3l_stack_41->GetXaxis()->SetTitleOffset(0.9);
   thsBackground_grouped_wh3l_Pre_13TeV_njet_3l_stack_41->GetXaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_Pre_13TeV_njet_3l_stack_41->GetYaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_Pre_13TeV_njet_3l_stack_41->GetYaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_Pre_13TeV_njet_3l_stack_41->GetYaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_Pre_13TeV_njet_3l_stack_41->GetYaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_Pre_13TeV_njet_3l_stack_41->GetYaxis()->SetTitleOffset(1.25);
   thsBackground_grouped_wh3l_Pre_13TeV_njet_3l_stack_41->GetYaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_Pre_13TeV_njet_3l_stack_41->GetZaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_Pre_13TeV_njet_3l_stack_41->GetZaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_Pre_13TeV_njet_3l_stack_41->GetZaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_Pre_13TeV_njet_3l_stack_41->GetZaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_Pre_13TeV_njet_3l_stack_41->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_Pre_13TeV_njet_3l->SetHistogram(thsBackground_grouped_wh3l_Pre_13TeV_njet_3l_stack_41);
   
   
   TH1D *new_histo_group_Fake_wh3l_Pre_13TeV_njet_3l202 = new TH1D("new_histo_group_Fake_wh3l_Pre_13TeV_njet_3l202","histo_Fake",8,0,8);
   new_histo_group_Fake_wh3l_Pre_13TeV_njet_3l202->SetBinContent(1,193.156);
   new_histo_group_Fake_wh3l_Pre_13TeV_njet_3l202->SetBinContent(2,76.02005);
   new_histo_group_Fake_wh3l_Pre_13TeV_njet_3l202->SetBinContent(3,28.39369);
   new_histo_group_Fake_wh3l_Pre_13TeV_njet_3l202->SetBinContent(4,9.837563);
   new_histo_group_Fake_wh3l_Pre_13TeV_njet_3l202->SetBinContent(5,2.060372);
   new_histo_group_Fake_wh3l_Pre_13TeV_njet_3l202->SetBinContent(6,1.090782);
   new_histo_group_Fake_wh3l_Pre_13TeV_njet_3l202->SetBinContent(7,0.4586231);
   new_histo_group_Fake_wh3l_Pre_13TeV_njet_3l202->SetBinError(1,11.0589);
   new_histo_group_Fake_wh3l_Pre_13TeV_njet_3l202->SetBinError(2,6.801193);
   new_histo_group_Fake_wh3l_Pre_13TeV_njet_3l202->SetBinError(3,4.002848);
   new_histo_group_Fake_wh3l_Pre_13TeV_njet_3l202->SetBinError(4,2.168377);
   new_histo_group_Fake_wh3l_Pre_13TeV_njet_3l202->SetBinError(5,1.114903);
   new_histo_group_Fake_wh3l_Pre_13TeV_njet_3l202->SetBinError(6,0.7752609);
   new_histo_group_Fake_wh3l_Pre_13TeV_njet_3l202->SetBinError(7,0.3658202);
   new_histo_group_Fake_wh3l_Pre_13TeV_njet_3l202->SetEntries(4042);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_Pre_13TeV_njet_3l202->SetFillColor(ci);
   new_histo_group_Fake_wh3l_Pre_13TeV_njet_3l202->SetFillStyle(3001);

   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_Pre_13TeV_njet_3l202->SetLineColor(ci);
   new_histo_group_Fake_wh3l_Pre_13TeV_njet_3l202->GetXaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_Pre_13TeV_njet_3l202->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_Pre_13TeV_njet_3l202->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_Pre_13TeV_njet_3l202->GetXaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_Pre_13TeV_njet_3l202->GetYaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_Pre_13TeV_njet_3l202->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_Pre_13TeV_njet_3l202->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_Pre_13TeV_njet_3l202->GetYaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_Pre_13TeV_njet_3l202->GetZaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_Pre_13TeV_njet_3l202->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_Pre_13TeV_njet_3l202->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_Pre_13TeV_njet_3l202->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_Pre_13TeV_njet_3l->Add(new_histo_group_Fake_wh3l_Pre_13TeV_njet_3l,"");
   
   TH1D *new_histo_group_WW_wh3l_Pre_13TeV_njet_3l203 = new TH1D("new_histo_group_WW_wh3l_Pre_13TeV_njet_3l203","histo_WW",8,0,8);
   new_histo_group_WW_wh3l_Pre_13TeV_njet_3l203->SetBinContent(1,0.3835288);
   new_histo_group_WW_wh3l_Pre_13TeV_njet_3l203->SetBinContent(2,0.149428);
   new_histo_group_WW_wh3l_Pre_13TeV_njet_3l203->SetBinContent(3,0.08031039);
   new_histo_group_WW_wh3l_Pre_13TeV_njet_3l203->SetBinContent(4,0.01672248);
   new_histo_group_WW_wh3l_Pre_13TeV_njet_3l203->SetBinError(1,0.07695445);
   new_histo_group_WW_wh3l_Pre_13TeV_njet_3l203->SetBinError(2,0.04827392);
   new_histo_group_WW_wh3l_Pre_13TeV_njet_3l203->SetBinError(3,0.03486422);
   new_histo_group_WW_wh3l_Pre_13TeV_njet_3l203->SetBinError(4,0.01672248);
   new_histo_group_WW_wh3l_Pre_13TeV_njet_3l203->SetEntries(44);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_Pre_13TeV_njet_3l203->SetFillColor(ci);
   new_histo_group_WW_wh3l_Pre_13TeV_njet_3l203->SetFillStyle(3001);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_Pre_13TeV_njet_3l203->SetLineColor(ci);
   new_histo_group_WW_wh3l_Pre_13TeV_njet_3l203->GetXaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_Pre_13TeV_njet_3l203->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_Pre_13TeV_njet_3l203->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_Pre_13TeV_njet_3l203->GetXaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_Pre_13TeV_njet_3l203->GetYaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_Pre_13TeV_njet_3l203->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_Pre_13TeV_njet_3l203->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_Pre_13TeV_njet_3l203->GetYaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_Pre_13TeV_njet_3l203->GetZaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_Pre_13TeV_njet_3l203->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_Pre_13TeV_njet_3l203->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_Pre_13TeV_njet_3l203->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_Pre_13TeV_njet_3l->Add(new_histo_group_WW_wh3l_Pre_13TeV_njet_3l,"");
   
   TH1D *new_histo_group_VVV_wh3l_Pre_13TeV_njet_3l204 = new TH1D("new_histo_group_VVV_wh3l_Pre_13TeV_njet_3l204","histo_VVV",8,0,8);
   new_histo_group_VVV_wh3l_Pre_13TeV_njet_3l204->SetBinContent(1,1.370103);
   new_histo_group_VVV_wh3l_Pre_13TeV_njet_3l204->SetBinContent(2,1.676793);
   new_histo_group_VVV_wh3l_Pre_13TeV_njet_3l204->SetBinContent(3,1.406383);
   new_histo_group_VVV_wh3l_Pre_13TeV_njet_3l204->SetBinContent(4,0.7051888);
   new_histo_group_VVV_wh3l_Pre_13TeV_njet_3l204->SetBinContent(5,0.2831955);
   new_histo_group_VVV_wh3l_Pre_13TeV_njet_3l204->SetBinContent(6,0.1082226);
   new_histo_group_VVV_wh3l_Pre_13TeV_njet_3l204->SetBinContent(7,0.02158287);
   new_histo_group_VVV_wh3l_Pre_13TeV_njet_3l204->SetBinContent(8,0.00647171);
   new_histo_group_VVV_wh3l_Pre_13TeV_njet_3l204->SetBinError(1,0.05519947);
   new_histo_group_VVV_wh3l_Pre_13TeV_njet_3l204->SetBinError(2,0.05701127);
   new_histo_group_VVV_wh3l_Pre_13TeV_njet_3l204->SetBinError(3,0.05088163);
   new_histo_group_VVV_wh3l_Pre_13TeV_njet_3l204->SetBinError(4,0.0353116);
   new_histo_group_VVV_wh3l_Pre_13TeV_njet_3l204->SetBinError(5,0.02138875);
   new_histo_group_VVV_wh3l_Pre_13TeV_njet_3l204->SetBinError(6,0.01353621);
   new_histo_group_VVV_wh3l_Pre_13TeV_njet_3l204->SetBinError(7,0.0057686);
   new_histo_group_VVV_wh3l_Pre_13TeV_njet_3l204->SetBinError(8,0.002735907);
   new_histo_group_VVV_wh3l_Pre_13TeV_njet_3l204->SetEntries(5218);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_Pre_13TeV_njet_3l204->SetFillColor(ci);
   new_histo_group_VVV_wh3l_Pre_13TeV_njet_3l204->SetFillStyle(3001);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_Pre_13TeV_njet_3l204->SetLineColor(ci);
   new_histo_group_VVV_wh3l_Pre_13TeV_njet_3l204->GetXaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_Pre_13TeV_njet_3l204->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_Pre_13TeV_njet_3l204->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_Pre_13TeV_njet_3l204->GetXaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_Pre_13TeV_njet_3l204->GetYaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_Pre_13TeV_njet_3l204->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_Pre_13TeV_njet_3l204->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_Pre_13TeV_njet_3l204->GetYaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_Pre_13TeV_njet_3l204->GetZaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_Pre_13TeV_njet_3l204->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_Pre_13TeV_njet_3l204->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_Pre_13TeV_njet_3l204->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_Pre_13TeV_njet_3l->Add(new_histo_group_VVV_wh3l_Pre_13TeV_njet_3l,"");
   
   TH1D *new_histo_group_Vg_wh3l_Pre_13TeV_njet_3l205 = new TH1D("new_histo_group_Vg_wh3l_Pre_13TeV_njet_3l205","histo_Vg",8,0,8);
   new_histo_group_Vg_wh3l_Pre_13TeV_njet_3l205->SetBinContent(1,179.3736);
   new_histo_group_Vg_wh3l_Pre_13TeV_njet_3l205->SetBinContent(2,37.7015);
   new_histo_group_Vg_wh3l_Pre_13TeV_njet_3l205->SetBinContent(3,8.535551);
   new_histo_group_Vg_wh3l_Pre_13TeV_njet_3l205->SetBinContent(4,0.9798775);
   new_histo_group_Vg_wh3l_Pre_13TeV_njet_3l205->SetBinContent(5,0.1473827);
   new_histo_group_Vg_wh3l_Pre_13TeV_njet_3l205->SetBinError(1,5.056055);
   new_histo_group_Vg_wh3l_Pre_13TeV_njet_3l205->SetBinError(2,2.873945);
   new_histo_group_Vg_wh3l_Pre_13TeV_njet_3l205->SetBinError(3,1.30607);
   new_histo_group_Vg_wh3l_Pre_13TeV_njet_3l205->SetBinError(4,0.5384504);
   new_histo_group_Vg_wh3l_Pre_13TeV_njet_3l205->SetBinError(5,0.1242896);
   new_histo_group_Vg_wh3l_Pre_13TeV_njet_3l205->SetEntries(3347);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_Pre_13TeV_njet_3l205->SetFillColor(ci);
   new_histo_group_Vg_wh3l_Pre_13TeV_njet_3l205->SetFillStyle(3001);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_Pre_13TeV_njet_3l205->SetLineColor(ci);
   new_histo_group_Vg_wh3l_Pre_13TeV_njet_3l205->GetXaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_Pre_13TeV_njet_3l205->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_Pre_13TeV_njet_3l205->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_Pre_13TeV_njet_3l205->GetXaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_Pre_13TeV_njet_3l205->GetYaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_Pre_13TeV_njet_3l205->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_Pre_13TeV_njet_3l205->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_Pre_13TeV_njet_3l205->GetYaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_Pre_13TeV_njet_3l205->GetZaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_Pre_13TeV_njet_3l205->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_Pre_13TeV_njet_3l205->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_Pre_13TeV_njet_3l205->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_Pre_13TeV_njet_3l->Add(new_histo_group_Vg_wh3l_Pre_13TeV_njet_3l,"");
   
   TH1D *new_histo_group_ZZ_wh3l_Pre_13TeV_njet_3l206 = new TH1D("new_histo_group_ZZ_wh3l_Pre_13TeV_njet_3l206","histo_ZZ",8,0,8);
   new_histo_group_ZZ_wh3l_Pre_13TeV_njet_3l206->SetBinContent(1,31.82783);
   new_histo_group_ZZ_wh3l_Pre_13TeV_njet_3l206->SetBinContent(2,16.47499);
   new_histo_group_ZZ_wh3l_Pre_13TeV_njet_3l206->SetBinContent(3,4.608939);
   new_histo_group_ZZ_wh3l_Pre_13TeV_njet_3l206->SetBinContent(4,0.6752945);
   new_histo_group_ZZ_wh3l_Pre_13TeV_njet_3l206->SetBinContent(5,0.09603499);
   new_histo_group_ZZ_wh3l_Pre_13TeV_njet_3l206->SetBinError(1,1.146065);
   new_histo_group_ZZ_wh3l_Pre_13TeV_njet_3l206->SetBinError(2,0.8207707);
   new_histo_group_ZZ_wh3l_Pre_13TeV_njet_3l206->SetBinError(3,0.4377896);
   new_histo_group_ZZ_wh3l_Pre_13TeV_njet_3l206->SetBinError(4,0.1612237);
   new_histo_group_ZZ_wh3l_Pre_13TeV_njet_3l206->SetBinError(5,0.06172308);
   new_histo_group_ZZ_wh3l_Pre_13TeV_njet_3l206->SetEntries(1451);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_Pre_13TeV_njet_3l206->SetFillColor(ci);
   new_histo_group_ZZ_wh3l_Pre_13TeV_njet_3l206->SetFillStyle(3001);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_Pre_13TeV_njet_3l206->SetLineColor(ci);
   new_histo_group_ZZ_wh3l_Pre_13TeV_njet_3l206->GetXaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_Pre_13TeV_njet_3l206->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_Pre_13TeV_njet_3l206->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_Pre_13TeV_njet_3l206->GetXaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_Pre_13TeV_njet_3l206->GetYaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_Pre_13TeV_njet_3l206->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_Pre_13TeV_njet_3l206->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_Pre_13TeV_njet_3l206->GetYaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_Pre_13TeV_njet_3l206->GetZaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_Pre_13TeV_njet_3l206->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_Pre_13TeV_njet_3l206->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_Pre_13TeV_njet_3l206->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_Pre_13TeV_njet_3l->Add(new_histo_group_ZZ_wh3l_Pre_13TeV_njet_3l,"");
   
   TH1D *new_histo_group_WZ_wh3l_Pre_13TeV_njet_3l207 = new TH1D("new_histo_group_WZ_wh3l_Pre_13TeV_njet_3l207","histo_WZ",8,0,8);
   new_histo_group_WZ_wh3l_Pre_13TeV_njet_3l207->SetBinContent(1,213.8422);
   new_histo_group_WZ_wh3l_Pre_13TeV_njet_3l207->SetBinContent(2,110.5192);
   new_histo_group_WZ_wh3l_Pre_13TeV_njet_3l207->SetBinContent(3,34.57604);
   new_histo_group_WZ_wh3l_Pre_13TeV_njet_3l207->SetBinContent(4,8.708239);
   new_histo_group_WZ_wh3l_Pre_13TeV_njet_3l207->SetBinContent(5,1.998211);
   new_histo_group_WZ_wh3l_Pre_13TeV_njet_3l207->SetBinContent(6,0.4016955);
   new_histo_group_WZ_wh3l_Pre_13TeV_njet_3l207->SetBinContent(7,0.08245192);
   new_histo_group_WZ_wh3l_Pre_13TeV_njet_3l207->SetBinContent(8,0.01637294);
   new_histo_group_WZ_wh3l_Pre_13TeV_njet_3l207->SetBinError(1,1.07978);
   new_histo_group_WZ_wh3l_Pre_13TeV_njet_3l207->SetBinError(2,0.7757667);
   new_histo_group_WZ_wh3l_Pre_13TeV_njet_3l207->SetBinError(3,0.4341716);
   new_histo_group_WZ_wh3l_Pre_13TeV_njet_3l207->SetBinError(4,0.2175358);
   new_histo_group_WZ_wh3l_Pre_13TeV_njet_3l207->SetBinError(5,0.1039432);
   new_histo_group_WZ_wh3l_Pre_13TeV_njet_3l207->SetBinError(6,0.04620083);
   new_histo_group_WZ_wh3l_Pre_13TeV_njet_3l207->SetBinError(7,0.02072821);
   new_histo_group_WZ_wh3l_Pre_13TeV_njet_3l207->SetBinError(8,0.009485971);
   new_histo_group_WZ_wh3l_Pre_13TeV_njet_3l207->SetEntries(75011);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_Pre_13TeV_njet_3l207->SetFillColor(ci);
   new_histo_group_WZ_wh3l_Pre_13TeV_njet_3l207->SetFillStyle(3001);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_Pre_13TeV_njet_3l207->SetLineColor(ci);
   new_histo_group_WZ_wh3l_Pre_13TeV_njet_3l207->GetXaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_Pre_13TeV_njet_3l207->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_Pre_13TeV_njet_3l207->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_Pre_13TeV_njet_3l207->GetXaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_Pre_13TeV_njet_3l207->GetYaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_Pre_13TeV_njet_3l207->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_Pre_13TeV_njet_3l207->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_Pre_13TeV_njet_3l207->GetYaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_Pre_13TeV_njet_3l207->GetZaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_Pre_13TeV_njet_3l207->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_Pre_13TeV_njet_3l207->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_Pre_13TeV_njet_3l207->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_Pre_13TeV_njet_3l->Add(new_histo_group_WZ_wh3l_Pre_13TeV_njet_3l,"");
   
   TH1D *new_histo_group_Higgs_wh3l_Pre_13TeV_njet_3l208 = new TH1D("new_histo_group_Higgs_wh3l_Pre_13TeV_njet_3l208","histo_H_htt",8,0,8);
   new_histo_group_Higgs_wh3l_Pre_13TeV_njet_3l208->SetBinContent(1,2.772376);
   new_histo_group_Higgs_wh3l_Pre_13TeV_njet_3l208->SetBinContent(2,1.673348);
   new_histo_group_Higgs_wh3l_Pre_13TeV_njet_3l208->SetBinContent(3,0.696675);
   new_histo_group_Higgs_wh3l_Pre_13TeV_njet_3l208->SetBinContent(4,0.2625597);
   new_histo_group_Higgs_wh3l_Pre_13TeV_njet_3l208->SetBinContent(5,0.07651148);
   new_histo_group_Higgs_wh3l_Pre_13TeV_njet_3l208->SetBinContent(6,0.02239994);
   new_histo_group_Higgs_wh3l_Pre_13TeV_njet_3l208->SetBinContent(7,0.002523271);
   new_histo_group_Higgs_wh3l_Pre_13TeV_njet_3l208->SetBinContent(8,0.0008013493);
   new_histo_group_Higgs_wh3l_Pre_13TeV_njet_3l208->SetBinError(1,0.05721869);
   new_histo_group_Higgs_wh3l_Pre_13TeV_njet_3l208->SetBinError(2,0.04186389);
   new_histo_group_Higgs_wh3l_Pre_13TeV_njet_3l208->SetBinError(3,0.02402524);
   new_histo_group_Higgs_wh3l_Pre_13TeV_njet_3l208->SetBinError(4,0.01392835);
   new_histo_group_Higgs_wh3l_Pre_13TeV_njet_3l208->SetBinError(5,0.007518893);
   new_histo_group_Higgs_wh3l_Pre_13TeV_njet_3l208->SetBinError(6,0.003876241);
   new_histo_group_Higgs_wh3l_Pre_13TeV_njet_3l208->SetBinError(7,0.001037099);
   new_histo_group_Higgs_wh3l_Pre_13TeV_njet_3l208->SetBinError(8,0.0005713281);
   new_histo_group_Higgs_wh3l_Pre_13TeV_njet_3l208->SetEntries(8925);
   new_histo_group_Higgs_wh3l_Pre_13TeV_njet_3l208->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_Pre_13TeV_njet_3l208->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_Pre_13TeV_njet_3l208->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_Pre_13TeV_njet_3l208->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_Pre_13TeV_njet_3l208->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_Pre_13TeV_njet_3l208->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_Pre_13TeV_njet_3l208->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_Pre_13TeV_njet_3l208->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_Pre_13TeV_njet_3l208->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_Pre_13TeV_njet_3l208->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_Pre_13TeV_njet_3l208->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_Pre_13TeV_njet_3l208->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_Pre_13TeV_njet_3l208->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_Pre_13TeV_njet_3l208->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_Pre_13TeV_njet_3l208->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_Pre_13TeV_njet_3l->Add(new_histo_group_Higgs_wh3l_Pre_13TeV_njet_3l,"");
   thsBackground_grouped_wh3l_Pre_13TeV_njet_3l->Draw("hist same");
   
   thsSignal_grouped_wh3l_Pre_13TeV_njet_3l = new THStack();
   thsSignal_grouped_wh3l_Pre_13TeV_njet_3l->SetName("thsSignal_grouped_wh3l_Pre_13TeV_njet_3l");
   thsSignal_grouped_wh3l_Pre_13TeV_njet_3l->SetTitle("thsSignal_grouped_wh3l_Pre_13TeV_njet_3l");
   
   TH1F *thsSignal_grouped_wh3l_Pre_13TeV_njet_3l_stack_42 = new TH1F("thsSignal_grouped_wh3l_Pre_13TeV_njet_3l_stack_42","thsSignal_grouped_wh3l_Pre_13TeV_njet_3l",8,0,8);
   thsSignal_grouped_wh3l_Pre_13TeV_njet_3l_stack_42->SetMinimum(0);
   thsSignal_grouped_wh3l_Pre_13TeV_njet_3l_stack_42->SetMaximum(2.971074);
   thsSignal_grouped_wh3l_Pre_13TeV_njet_3l_stack_42->SetDirectory(0);
   thsSignal_grouped_wh3l_Pre_13TeV_njet_3l_stack_42->SetStats(0);
   thsSignal_grouped_wh3l_Pre_13TeV_njet_3l_stack_42->SetLineStyle(0);
   thsSignal_grouped_wh3l_Pre_13TeV_njet_3l_stack_42->SetMarkerStyle(20);
   thsSignal_grouped_wh3l_Pre_13TeV_njet_3l_stack_42->GetXaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_Pre_13TeV_njet_3l_stack_42->GetXaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_Pre_13TeV_njet_3l_stack_42->GetXaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_Pre_13TeV_njet_3l_stack_42->GetXaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_Pre_13TeV_njet_3l_stack_42->GetXaxis()->SetTitleOffset(0.9);
   thsSignal_grouped_wh3l_Pre_13TeV_njet_3l_stack_42->GetXaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_Pre_13TeV_njet_3l_stack_42->GetYaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_Pre_13TeV_njet_3l_stack_42->GetYaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_Pre_13TeV_njet_3l_stack_42->GetYaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_Pre_13TeV_njet_3l_stack_42->GetYaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_Pre_13TeV_njet_3l_stack_42->GetYaxis()->SetTitleOffset(1.25);
   thsSignal_grouped_wh3l_Pre_13TeV_njet_3l_stack_42->GetYaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_Pre_13TeV_njet_3l_stack_42->GetZaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_Pre_13TeV_njet_3l_stack_42->GetZaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_Pre_13TeV_njet_3l_stack_42->GetZaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_Pre_13TeV_njet_3l_stack_42->GetZaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_Pre_13TeV_njet_3l_stack_42->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_Pre_13TeV_njet_3l->SetHistogram(thsSignal_grouped_wh3l_Pre_13TeV_njet_3l_stack_42);
   
   
   TH1D *new_histo_group_Higgs_wh3l_Pre_13TeV_njet_3l209 = new TH1D("new_histo_group_Higgs_wh3l_Pre_13TeV_njet_3l209","histo_H_htt",8,0,8);
   new_histo_group_Higgs_wh3l_Pre_13TeV_njet_3l209->SetBinContent(1,2.772376);
   new_histo_group_Higgs_wh3l_Pre_13TeV_njet_3l209->SetBinContent(2,1.673348);
   new_histo_group_Higgs_wh3l_Pre_13TeV_njet_3l209->SetBinContent(3,0.696675);
   new_histo_group_Higgs_wh3l_Pre_13TeV_njet_3l209->SetBinContent(4,0.2625597);
   new_histo_group_Higgs_wh3l_Pre_13TeV_njet_3l209->SetBinContent(5,0.07651148);
   new_histo_group_Higgs_wh3l_Pre_13TeV_njet_3l209->SetBinContent(6,0.02239994);
   new_histo_group_Higgs_wh3l_Pre_13TeV_njet_3l209->SetBinContent(7,0.002523271);
   new_histo_group_Higgs_wh3l_Pre_13TeV_njet_3l209->SetBinContent(8,0.0008013493);
   new_histo_group_Higgs_wh3l_Pre_13TeV_njet_3l209->SetBinError(1,0.05721869);
   new_histo_group_Higgs_wh3l_Pre_13TeV_njet_3l209->SetBinError(2,0.04186389);
   new_histo_group_Higgs_wh3l_Pre_13TeV_njet_3l209->SetBinError(3,0.02402524);
   new_histo_group_Higgs_wh3l_Pre_13TeV_njet_3l209->SetBinError(4,0.01392835);
   new_histo_group_Higgs_wh3l_Pre_13TeV_njet_3l209->SetBinError(5,0.007518893);
   new_histo_group_Higgs_wh3l_Pre_13TeV_njet_3l209->SetBinError(6,0.003876241);
   new_histo_group_Higgs_wh3l_Pre_13TeV_njet_3l209->SetBinError(7,0.001037099);
   new_histo_group_Higgs_wh3l_Pre_13TeV_njet_3l209->SetBinError(8,0.0005713281);
   new_histo_group_Higgs_wh3l_Pre_13TeV_njet_3l209->SetEntries(8925);
   new_histo_group_Higgs_wh3l_Pre_13TeV_njet_3l209->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_Pre_13TeV_njet_3l209->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_Pre_13TeV_njet_3l209->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_Pre_13TeV_njet_3l209->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_Pre_13TeV_njet_3l209->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_Pre_13TeV_njet_3l209->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_Pre_13TeV_njet_3l209->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_Pre_13TeV_njet_3l209->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_Pre_13TeV_njet_3l209->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_Pre_13TeV_njet_3l209->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_Pre_13TeV_njet_3l209->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_Pre_13TeV_njet_3l209->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_Pre_13TeV_njet_3l209->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_Pre_13TeV_njet_3l209->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_Pre_13TeV_njet_3l209->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_Pre_13TeV_njet_3l->Add(new_histo_group_Higgs_wh3l_Pre_13TeV_njet_3l,"");
   thsSignal_grouped_wh3l_Pre_13TeV_njet_3l->Draw("hist same noclear");
   
   Double_t _fx3041[8] = {
   0.5,
   1.5,
   2.5,
   3.5,
   4.5,
   5.5,
   6.5,
   7.5};
   Double_t _fy3041[8] = {
   619.9533,
   242.542,
   77.60092,
   20.92288,
   4.585197,
   1.6007,
   0.5626579,
   0.02284465};
   Double_t _felx3041[8] = {
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5};
   Double_t _fely3041[8] = {
   71.26433,
   29.34647,
   11.87849,
   4.700634,
   1.613174,
   0.9218495,
   0.4242248,
   0.0127906};
   Double_t _fehx3041[8] = {
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5};
   Double_t _fehy3041[8] = {
   71.20361,
   29.31889,
   11.87335,
   4.696744,
   1.612264,
   0.9217223,
   0.4242072,
   0.0127917};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(8,_fx3041,_fy3041,_felx3041,_fehx3041,_fely3041,_fehy3041);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(12);
   grae->SetFillStyle(3004);
   grae->SetLineColor(12);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3041 = new TH1F("Graph_Graph3041","",100,0,8.8);
   Graph_Graph3041->SetMinimum(0);
   Graph_Graph3041->SetMaximum(760.2716);
   Graph_Graph3041->SetDirectory(0);
   Graph_Graph3041->SetStats(0);
   Graph_Graph3041->SetLineStyle(0);
   Graph_Graph3041->SetMarkerStyle(20);
   Graph_Graph3041->GetXaxis()->SetLabelFont(42);
   Graph_Graph3041->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3041->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3041->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3041->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3041->GetXaxis()->SetTitleFont(42);
   Graph_Graph3041->GetYaxis()->SetLabelFont(42);
   Graph_Graph3041->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3041->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3041->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3041->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3041->GetYaxis()->SetTitleFont(42);
   Graph_Graph3041->GetZaxis()->SetLabelFont(42);
   Graph_Graph3041->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3041->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3041->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3041->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3041);
   
   grae->Draw("2");
   
   Double_t _fx3042[8] = {
   0.5,
   1.5,
   2.5,
   3.5,
   4.5,
   5.5,
   6.5,
   7.5};
   Double_t _fy3042[8] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _felx3042[8] = {
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5};
   Double_t _fely3042[8] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fehx3042[8] = {
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5};
   Double_t _fehy3042[8] = {
   1.147908,
   1.147908,
   1.147908,
   1.147908,
   1.147908,
   1.147908,
   1.147908,
   1.147908};
   grae = new TGraphAsymmErrors(8,_fx3042,_fy3042,_felx3042,_fehx3042,_fely3042,_fehy3042);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(1);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3042 = new TH1F("Graph_Graph3042","",100,0,8.8);
   Graph_Graph3042->SetMinimum(0);
   Graph_Graph3042->SetMaximum(1.262698);
   Graph_Graph3042->SetDirectory(0);
   Graph_Graph3042->SetStats(0);
   Graph_Graph3042->SetLineStyle(0);
   Graph_Graph3042->SetMarkerStyle(20);
   Graph_Graph3042->GetXaxis()->SetLabelFont(42);
   Graph_Graph3042->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3042->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3042->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3042->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3042->GetXaxis()->SetTitleFont(42);
   Graph_Graph3042->GetYaxis()->SetLabelFont(42);
   Graph_Graph3042->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3042->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3042->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3042->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3042->GetYaxis()->SetTitleFont(42);
   Graph_Graph3042->GetZaxis()->SetLabelFont(42);
   Graph_Graph3042->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3042->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3042->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3042->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3042);
   
   grae->Draw("p0");
   
   TLegend *leg = new TLegend(0.2,0.7,0.8,0.9,NULL,"brNDC");
   leg->SetTextFont(62);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("new_histo_group_Fake_wh3l_Pre_13TeV_njet_3l","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_Pre_13TeV_njet_3l","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_Pre_13TeV_njet_3l","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_Pre_13TeV_njet_3l","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_Pre_13TeV_njet_3l","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_Pre_13TeV_njet_3l","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_Pre_13TeV_njet_3l","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_Pre_13TeV_njet_3l","Data","EPL");
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
   entry=leg->AddEntry("new_histo_group_Fake_wh3l_Pre_13TeV_njet_3l","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_Pre_13TeV_njet_3l","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_Pre_13TeV_njet_3l","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_Pre_13TeV_njet_3l","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_Pre_13TeV_njet_3l","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_Pre_13TeV_njet_3l","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_Pre_13TeV_njet_3l","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_Pre_13TeV_njet_3l","Data","EPL");
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
   
   TH1F *hframe_copy210 = new TH1F("hframe_copy210","",1000,0,8);
   hframe_copy210->SetMinimum(0);
   hframe_copy210->SetMaximum(1556.814);
   hframe_copy210->SetDirectory(0);
   hframe_copy210->SetStats(0);
   hframe_copy210->SetLineStyle(0);
   hframe_copy210->SetMarkerStyle(20);
   hframe_copy210->GetXaxis()->SetTitle("N_Jets");
   hframe_copy210->GetXaxis()->SetNdivisions(506);
   hframe_copy210->GetXaxis()->SetLabelFont(42);
   hframe_copy210->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy210->GetXaxis()->SetLabelSize(0.05);
   hframe_copy210->GetXaxis()->SetTitleSize(0.06);
   hframe_copy210->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy210->GetXaxis()->SetTitleFont(42);
   hframe_copy210->GetYaxis()->SetTitle("Events");
   hframe_copy210->GetYaxis()->SetLabelFont(42);
   hframe_copy210->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy210->GetYaxis()->SetLabelSize(0.05);
   hframe_copy210->GetYaxis()->SetTitleSize(0.06);
   hframe_copy210->GetYaxis()->SetTitleOffset(1.25);
   hframe_copy210->GetYaxis()->SetTitleFont(42);
   hframe_copy210->GetZaxis()->SetLabelFont(42);
   hframe_copy210->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy210->GetZaxis()->SetLabelSize(0.05);
   hframe_copy210->GetZaxis()->SetTitleSize(0.06);
   hframe_copy210->GetZaxis()->SetTitleFont(42);
   hframe_copy210->Draw("sameaxis");
   ccwh3l_Pre_13TeV_njet_3l->Modified();
   ccwh3l_Pre_13TeV_njet_3l->cd();
   ccwh3l_Pre_13TeV_njet_3l->SetSelected(ccwh3l_Pre_13TeV_njet_3l);
}
