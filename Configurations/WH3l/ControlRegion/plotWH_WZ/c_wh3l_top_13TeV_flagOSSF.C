void c_wh3l_top_13TeV_flagOSSF()
{
//=========Macro generated from canvas: ccwh3l_top_13TeV_flagOSSF/cc
//=========  (Tue Jun 28 16:49:04 2016) by ROOT version6.02/13
   TCanvas *ccwh3l_top_13TeV_flagOSSF = new TCanvas("ccwh3l_top_13TeV_flagOSSF", "cc",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   ccwh3l_top_13TeV_flagOSSF->SetHighLightColor(2);
   ccwh3l_top_13TeV_flagOSSF->Range(-0.4,-16.21674,2.1,108.5274);
   ccwh3l_top_13TeV_flagOSSF->SetFillColor(0);
   ccwh3l_top_13TeV_flagOSSF->SetBorderMode(0);
   ccwh3l_top_13TeV_flagOSSF->SetBorderSize(2);
   ccwh3l_top_13TeV_flagOSSF->SetTickx(1);
   ccwh3l_top_13TeV_flagOSSF->SetTicky(1);
   ccwh3l_top_13TeV_flagOSSF->SetLeftMargin(0.16);
   ccwh3l_top_13TeV_flagOSSF->SetRightMargin(0.04);
   ccwh3l_top_13TeV_flagOSSF->SetTopMargin(0.05);
   ccwh3l_top_13TeV_flagOSSF->SetBottomMargin(0.13);
   ccwh3l_top_13TeV_flagOSSF->SetFrameFillStyle(0);
   ccwh3l_top_13TeV_flagOSSF->SetFrameBorderMode(0);
   ccwh3l_top_13TeV_flagOSSF->SetFrameFillStyle(0);
   ccwh3l_top_13TeV_flagOSSF->SetFrameBorderMode(0);
   
   TH1F *hframe145 = new TH1F("hframe145","",1000,0,2);
   hframe145->SetMinimum(0);
   hframe145->SetMaximum(102.2902);
   hframe145->SetDirectory(0);
   hframe145->SetStats(0);
   hframe145->SetLineStyle(0);
   hframe145->SetMarkerStyle(20);
   hframe145->GetXaxis()->SetTitle("flag OSSF");
   hframe145->GetXaxis()->SetNdivisions(506);
   hframe145->GetXaxis()->SetLabelFont(42);
   hframe145->GetXaxis()->SetLabelOffset(0.007);
   hframe145->GetXaxis()->SetLabelSize(0.05);
   hframe145->GetXaxis()->SetTitleSize(0.06);
   hframe145->GetXaxis()->SetTitleOffset(0.9);
   hframe145->GetXaxis()->SetTitleFont(42);
   hframe145->GetYaxis()->SetTitle("Events");
   hframe145->GetYaxis()->SetLabelFont(42);
   hframe145->GetYaxis()->SetLabelOffset(0.007);
   hframe145->GetYaxis()->SetLabelSize(0.05);
   hframe145->GetYaxis()->SetTitleSize(0.06);
   hframe145->GetYaxis()->SetTitleOffset(1.25);
   hframe145->GetYaxis()->SetTitleFont(42);
   hframe145->GetZaxis()->SetLabelFont(42);
   hframe145->GetZaxis()->SetLabelOffset(0.007);
   hframe145->GetZaxis()->SetLabelSize(0.05);
   hframe145->GetZaxis()->SetTitleSize(0.06);
   hframe145->GetZaxis()->SetTitleFont(42);
   hframe145->Draw(" ");
   
   THStack *thsBackground_grouped_wh3l_top_13TeV_flagOSSF = new THStack();
   thsBackground_grouped_wh3l_top_13TeV_flagOSSF->SetName("thsBackground_grouped_wh3l_top_13TeV_flagOSSF");
   thsBackground_grouped_wh3l_top_13TeV_flagOSSF->SetTitle("thsBackground_grouped_wh3l_top_13TeV_flagOSSF");
   
   TH1F *thsBackground_grouped_wh3l_top_13TeV_flagOSSF_stack_19 = new TH1F("thsBackground_grouped_wh3l_top_13TeV_flagOSSF_stack_19","thsBackground_grouped_wh3l_top_13TeV_flagOSSF",2,0,2);
   thsBackground_grouped_wh3l_top_13TeV_flagOSSF_stack_19->SetMinimum(-0.1456336);
   thsBackground_grouped_wh3l_top_13TeV_flagOSSF_stack_19->SetMaximum(35.07512);
   thsBackground_grouped_wh3l_top_13TeV_flagOSSF_stack_19->SetDirectory(0);
   thsBackground_grouped_wh3l_top_13TeV_flagOSSF_stack_19->SetStats(0);
   thsBackground_grouped_wh3l_top_13TeV_flagOSSF_stack_19->SetLineStyle(0);
   thsBackground_grouped_wh3l_top_13TeV_flagOSSF_stack_19->SetMarkerStyle(20);
   thsBackground_grouped_wh3l_top_13TeV_flagOSSF_stack_19->GetXaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_top_13TeV_flagOSSF_stack_19->GetXaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_top_13TeV_flagOSSF_stack_19->GetXaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_top_13TeV_flagOSSF_stack_19->GetXaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_top_13TeV_flagOSSF_stack_19->GetXaxis()->SetTitleOffset(0.9);
   thsBackground_grouped_wh3l_top_13TeV_flagOSSF_stack_19->GetXaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_top_13TeV_flagOSSF_stack_19->GetYaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_top_13TeV_flagOSSF_stack_19->GetYaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_top_13TeV_flagOSSF_stack_19->GetYaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_top_13TeV_flagOSSF_stack_19->GetYaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_top_13TeV_flagOSSF_stack_19->GetYaxis()->SetTitleOffset(1.25);
   thsBackground_grouped_wh3l_top_13TeV_flagOSSF_stack_19->GetYaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_top_13TeV_flagOSSF_stack_19->GetZaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_top_13TeV_flagOSSF_stack_19->GetZaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_top_13TeV_flagOSSF_stack_19->GetZaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_top_13TeV_flagOSSF_stack_19->GetZaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_top_13TeV_flagOSSF_stack_19->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_top_13TeV_flagOSSF->SetHistogram(thsBackground_grouped_wh3l_top_13TeV_flagOSSF_stack_19);
   
   
   TH1D *new_histo_group_Fake_wh3l_top_13TeV_flagOSSF146 = new TH1D("new_histo_group_Fake_wh3l_top_13TeV_flagOSSF146","histo_Fake",2,0,2);
   new_histo_group_Fake_wh3l_top_13TeV_flagOSSF146->SetBinContent(1,15.14497);
   new_histo_group_Fake_wh3l_top_13TeV_flagOSSF146->SetBinContent(2,22.54886);
   new_histo_group_Fake_wh3l_top_13TeV_flagOSSF146->SetBinError(1,2.576672);
   new_histo_group_Fake_wh3l_top_13TeV_flagOSSF146->SetBinError(2,3.638166);
   new_histo_group_Fake_wh3l_top_13TeV_flagOSSF146->SetEntries(317);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_top_13TeV_flagOSSF146->SetFillColor(ci);
   new_histo_group_Fake_wh3l_top_13TeV_flagOSSF146->SetFillStyle(3001);

   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_top_13TeV_flagOSSF146->SetLineColor(ci);
   new_histo_group_Fake_wh3l_top_13TeV_flagOSSF146->GetXaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_top_13TeV_flagOSSF146->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_top_13TeV_flagOSSF146->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_top_13TeV_flagOSSF146->GetXaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_top_13TeV_flagOSSF146->GetYaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_top_13TeV_flagOSSF146->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_top_13TeV_flagOSSF146->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_top_13TeV_flagOSSF146->GetYaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_top_13TeV_flagOSSF146->GetZaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_top_13TeV_flagOSSF146->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_top_13TeV_flagOSSF146->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_top_13TeV_flagOSSF146->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_top_13TeV_flagOSSF->Add(new_histo_group_Fake_wh3l_top_13TeV_flagOSSF,"");
   
   TH1D *new_histo_group_WW_wh3l_top_13TeV_flagOSSF147 = new TH1D("new_histo_group_WW_wh3l_top_13TeV_flagOSSF147","histo_WW",2,0,2);
   new_histo_group_WW_wh3l_top_13TeV_flagOSSF147->SetBinContent(1,0.06747879);
   new_histo_group_WW_wh3l_top_13TeV_flagOSSF147->SetBinContent(2,0.1005829);
   new_histo_group_WW_wh3l_top_13TeV_flagOSSF147->SetBinError(1,0.03183804);
   new_histo_group_WW_wh3l_top_13TeV_flagOSSF147->SetBinError(2,0.04142331);
   new_histo_group_WW_wh3l_top_13TeV_flagOSSF147->SetEntries(11);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_top_13TeV_flagOSSF147->SetFillColor(ci);
   new_histo_group_WW_wh3l_top_13TeV_flagOSSF147->SetFillStyle(3001);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_top_13TeV_flagOSSF147->SetLineColor(ci);
   new_histo_group_WW_wh3l_top_13TeV_flagOSSF147->GetXaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_top_13TeV_flagOSSF147->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_top_13TeV_flagOSSF147->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_top_13TeV_flagOSSF147->GetXaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_top_13TeV_flagOSSF147->GetYaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_top_13TeV_flagOSSF147->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_top_13TeV_flagOSSF147->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_top_13TeV_flagOSSF147->GetYaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_top_13TeV_flagOSSF147->GetZaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_top_13TeV_flagOSSF147->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_top_13TeV_flagOSSF147->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_top_13TeV_flagOSSF147->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_top_13TeV_flagOSSF->Add(new_histo_group_WW_wh3l_top_13TeV_flagOSSF,"");
   
   TH1D *new_histo_group_VVV_wh3l_top_13TeV_flagOSSF148 = new TH1D("new_histo_group_VVV_wh3l_top_13TeV_flagOSSF148","histo_VVV",2,0,2);
   new_histo_group_VVV_wh3l_top_13TeV_flagOSSF148->SetBinContent(1,0.007710301);
   new_histo_group_VVV_wh3l_top_13TeV_flagOSSF148->SetBinContent(2,0.02227476);
   new_histo_group_VVV_wh3l_top_13TeV_flagOSSF148->SetBinError(1,0.00227999);
   new_histo_group_VVV_wh3l_top_13TeV_flagOSSF148->SetBinError(2,0.003696545);
   new_histo_group_VVV_wh3l_top_13TeV_flagOSSF148->SetEntries(58);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_top_13TeV_flagOSSF148->SetFillColor(ci);
   new_histo_group_VVV_wh3l_top_13TeV_flagOSSF148->SetFillStyle(3001);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_top_13TeV_flagOSSF148->SetLineColor(ci);
   new_histo_group_VVV_wh3l_top_13TeV_flagOSSF148->GetXaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_top_13TeV_flagOSSF148->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_top_13TeV_flagOSSF148->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_top_13TeV_flagOSSF148->GetXaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_top_13TeV_flagOSSF148->GetYaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_top_13TeV_flagOSSF148->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_top_13TeV_flagOSSF148->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_top_13TeV_flagOSSF148->GetYaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_top_13TeV_flagOSSF148->GetZaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_top_13TeV_flagOSSF148->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_top_13TeV_flagOSSF148->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_top_13TeV_flagOSSF148->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_top_13TeV_flagOSSF->Add(new_histo_group_VVV_wh3l_top_13TeV_flagOSSF,"");
   
   TH1D *new_histo_group_Vg_wh3l_top_13TeV_flagOSSF149 = new TH1D("new_histo_group_Vg_wh3l_top_13TeV_flagOSSF149","histo_Vg",2,0,2);
   new_histo_group_Vg_wh3l_top_13TeV_flagOSSF149->SetBinContent(1,0.01661978);
   new_histo_group_Vg_wh3l_top_13TeV_flagOSSF149->SetBinContent(2,1.498047);
   new_histo_group_Vg_wh3l_top_13TeV_flagOSSF149->SetBinError(1,0.1622534);
   new_histo_group_Vg_wh3l_top_13TeV_flagOSSF149->SetBinError(2,0.4403281);
   new_histo_group_Vg_wh3l_top_13TeV_flagOSSF149->SetEntries(26);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_top_13TeV_flagOSSF149->SetFillColor(ci);
   new_histo_group_Vg_wh3l_top_13TeV_flagOSSF149->SetFillStyle(3001);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_top_13TeV_flagOSSF149->SetLineColor(ci);
   new_histo_group_Vg_wh3l_top_13TeV_flagOSSF149->GetXaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_top_13TeV_flagOSSF149->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_top_13TeV_flagOSSF149->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_top_13TeV_flagOSSF149->GetXaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_top_13TeV_flagOSSF149->GetYaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_top_13TeV_flagOSSF149->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_top_13TeV_flagOSSF149->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_top_13TeV_flagOSSF149->GetYaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_top_13TeV_flagOSSF149->GetZaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_top_13TeV_flagOSSF149->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_top_13TeV_flagOSSF149->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_top_13TeV_flagOSSF149->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_top_13TeV_flagOSSF->Add(new_histo_group_Vg_wh3l_top_13TeV_flagOSSF,"");
   
   TH1D *new_histo_group_ZZ_wh3l_top_13TeV_flagOSSF150 = new TH1D("new_histo_group_ZZ_wh3l_top_13TeV_flagOSSF150","histo_ZZ",2,0,2);
   new_histo_group_ZZ_wh3l_top_13TeV_flagOSSF150->SetBinContent(1,0.09365086);
   new_histo_group_ZZ_wh3l_top_13TeV_flagOSSF150->SetBinContent(2,0.8480326);
   new_histo_group_ZZ_wh3l_top_13TeV_flagOSSF150->SetBinError(1,0.06623239);
   new_histo_group_ZZ_wh3l_top_13TeV_flagOSSF150->SetBinError(2,0.1864318);
   new_histo_group_ZZ_wh3l_top_13TeV_flagOSSF150->SetEntries(25);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_top_13TeV_flagOSSF150->SetFillColor(ci);
   new_histo_group_ZZ_wh3l_top_13TeV_flagOSSF150->SetFillStyle(3001);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_top_13TeV_flagOSSF150->SetLineColor(ci);
   new_histo_group_ZZ_wh3l_top_13TeV_flagOSSF150->GetXaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_top_13TeV_flagOSSF150->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_top_13TeV_flagOSSF150->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_top_13TeV_flagOSSF150->GetXaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_top_13TeV_flagOSSF150->GetYaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_top_13TeV_flagOSSF150->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_top_13TeV_flagOSSF150->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_top_13TeV_flagOSSF150->GetYaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_top_13TeV_flagOSSF150->GetZaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_top_13TeV_flagOSSF150->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_top_13TeV_flagOSSF150->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_top_13TeV_flagOSSF150->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_top_13TeV_flagOSSF->Add(new_histo_group_ZZ_wh3l_top_13TeV_flagOSSF,"");
   
   TH1D *new_histo_group_WZ_wh3l_top_13TeV_flagOSSF151 = new TH1D("new_histo_group_WZ_wh3l_top_13TeV_flagOSSF151","histo_WZ",2,0,2);
   new_histo_group_WZ_wh3l_top_13TeV_flagOSSF151->SetBinContent(1,0.4991848);
   new_histo_group_WZ_wh3l_top_13TeV_flagOSSF151->SetBinContent(2,8.387077);
   new_histo_group_WZ_wh3l_top_13TeV_flagOSSF151->SetBinError(1,0.05264844);
   new_histo_group_WZ_wh3l_top_13TeV_flagOSSF151->SetBinError(2,0.2133653);
   new_histo_group_WZ_wh3l_top_13TeV_flagOSSF151->SetEntries(1809);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_top_13TeV_flagOSSF151->SetFillColor(ci);
   new_histo_group_WZ_wh3l_top_13TeV_flagOSSF151->SetFillStyle(3001);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_top_13TeV_flagOSSF151->SetLineColor(ci);
   new_histo_group_WZ_wh3l_top_13TeV_flagOSSF151->GetXaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_top_13TeV_flagOSSF151->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_top_13TeV_flagOSSF151->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_top_13TeV_flagOSSF151->GetXaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_top_13TeV_flagOSSF151->GetYaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_top_13TeV_flagOSSF151->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_top_13TeV_flagOSSF151->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_top_13TeV_flagOSSF151->GetYaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_top_13TeV_flagOSSF151->GetZaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_top_13TeV_flagOSSF151->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_top_13TeV_flagOSSF151->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_top_13TeV_flagOSSF151->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_top_13TeV_flagOSSF->Add(new_histo_group_WZ_wh3l_top_13TeV_flagOSSF,"");
   thsBackground_grouped_wh3l_top_13TeV_flagOSSF->Draw("hist same");
   
   Double_t _fx3037[2] = {
   0.5,
   1.5};
   Double_t _fy3037[2] = {
   15.82962,
   33.40487};
   Double_t _felx3037[2] = {
   0.5,
   0.5};
   Double_t _fely3037[2] = {
   5.308998,
   8.137956};
   Double_t _fehx3037[2] = {
   0.5,
   0.5};
   Double_t _fehy3037[2] = {
   5.385777,
   8.137946};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(2,_fx3037,_fy3037,_felx3037,_fehx3037,_fely3037,_fehy3037);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(12);
   grae->SetFillStyle(3004);
   grae->SetLineColor(12);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3037 = new TH1F("Graph_Graph3037","",100,0,2.2);
   Graph_Graph3037->SetMinimum(7.418399);
   Graph_Graph3037->SetMaximum(44.64504);
   Graph_Graph3037->SetDirectory(0);
   Graph_Graph3037->SetStats(0);
   Graph_Graph3037->SetLineStyle(0);
   Graph_Graph3037->SetMarkerStyle(20);
   Graph_Graph3037->GetXaxis()->SetLabelFont(42);
   Graph_Graph3037->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3037->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3037->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3037->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3037->GetXaxis()->SetTitleFont(42);
   Graph_Graph3037->GetYaxis()->SetLabelFont(42);
   Graph_Graph3037->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3037->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3037->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3037->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3037->GetYaxis()->SetTitleFont(42);
   Graph_Graph3037->GetZaxis()->SetLabelFont(42);
   Graph_Graph3037->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3037->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3037->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3037->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3037);
   
   grae->Draw("2");
   
   Double_t _fx3038[2] = {
   0.5,
   1.5};
   Double_t _fy3038[2] = {
   7,
   35};
   Double_t _felx3038[2] = {
   0.5,
   0.5};
   Double_t _fely3038[2] = {
   2.581513,
   5.887788};
   Double_t _fehx3038[2] = {
   0.5,
   0.5};
   Double_t _fehy3038[2] = {
   3.770356,
   6.972554};
   grae = new TGraphAsymmErrors(2,_fx3038,_fy3038,_felx3038,_fehx3038,_fely3038,_fehy3038);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(1);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3038 = new TH1F("Graph_Graph3038","",100,0,2.2);
   Graph_Graph3038->SetMinimum(0.6630806);
   Graph_Graph3038->SetMaximum(45.72796);
   Graph_Graph3038->SetDirectory(0);
   Graph_Graph3038->SetStats(0);
   Graph_Graph3038->SetLineStyle(0);
   Graph_Graph3038->SetMarkerStyle(20);
   Graph_Graph3038->GetXaxis()->SetLabelFont(42);
   Graph_Graph3038->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3038->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3038->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3038->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3038->GetXaxis()->SetTitleFont(42);
   Graph_Graph3038->GetYaxis()->SetLabelFont(42);
   Graph_Graph3038->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3038->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3038->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3038->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3038->GetYaxis()->SetTitleFont(42);
   Graph_Graph3038->GetZaxis()->SetLabelFont(42);
   Graph_Graph3038->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3038->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3038->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3038->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3038);
   
   grae->Draw("p0");
   
   TLegend *leg = new TLegend(0.2,0.7,0.8,0.9,NULL,"brNDC");
   leg->SetTextFont(62);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("new_histo_group_Fake_wh3l_top_13TeV_flagOSSF","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_top_13TeV_flagOSSF","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_top_13TeV_flagOSSF","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_top_13TeV_flagOSSF","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_top_13TeV_flagOSSF","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_top_13TeV_flagOSSF","WZ","F");

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
   entry=leg->AddEntry("new_histo_DATA_wh3l_top_13TeV_flagOSSF","Data","EPL");
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
   entry=leg->AddEntry("new_histo_group_Fake_wh3l_top_13TeV_flagOSSF","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_top_13TeV_flagOSSF","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_top_13TeV_flagOSSF","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_top_13TeV_flagOSSF","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_top_13TeV_flagOSSF","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_top_13TeV_flagOSSF","WZ","F");

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
   entry=leg->AddEntry("new_histo_DATA_wh3l_top_13TeV_flagOSSF","Data","EPL");
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
   
   TH1F *hframe_copy152 = new TH1F("hframe_copy152","",1000,0,2);
   hframe_copy152->SetMinimum(0);
   hframe_copy152->SetMaximum(102.2902);
   hframe_copy152->SetDirectory(0);
   hframe_copy152->SetStats(0);
   hframe_copy152->SetLineStyle(0);
   hframe_copy152->SetMarkerStyle(20);
   hframe_copy152->GetXaxis()->SetTitle("flag OSSF");
   hframe_copy152->GetXaxis()->SetNdivisions(506);
   hframe_copy152->GetXaxis()->SetLabelFont(42);
   hframe_copy152->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy152->GetXaxis()->SetLabelSize(0.05);
   hframe_copy152->GetXaxis()->SetTitleSize(0.06);
   hframe_copy152->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy152->GetXaxis()->SetTitleFont(42);
   hframe_copy152->GetYaxis()->SetTitle("Events");
   hframe_copy152->GetYaxis()->SetLabelFont(42);
   hframe_copy152->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy152->GetYaxis()->SetLabelSize(0.05);
   hframe_copy152->GetYaxis()->SetTitleSize(0.06);
   hframe_copy152->GetYaxis()->SetTitleOffset(1.25);
   hframe_copy152->GetYaxis()->SetTitleFont(42);
   hframe_copy152->GetZaxis()->SetLabelFont(42);
   hframe_copy152->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy152->GetZaxis()->SetLabelSize(0.05);
   hframe_copy152->GetZaxis()->SetTitleSize(0.06);
   hframe_copy152->GetZaxis()->SetTitleFont(42);
   hframe_copy152->Draw("sameaxis");
   ccwh3l_top_13TeV_flagOSSF->Modified();
   ccwh3l_top_13TeV_flagOSSF->cd();
   ccwh3l_top_13TeV_flagOSSF->SetSelected(ccwh3l_top_13TeV_flagOSSF);
}
