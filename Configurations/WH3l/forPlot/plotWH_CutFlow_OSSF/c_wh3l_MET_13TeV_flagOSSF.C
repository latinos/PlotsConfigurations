void c_wh3l_MET_13TeV_flagOSSF()
{
//=========Macro generated from canvas: ccwh3l_MET_13TeV_flagOSSF/cc
//=========  (Sat Jul  2 21:43:33 2016) by ROOT version6.02/13
   TCanvas *ccwh3l_MET_13TeV_flagOSSF = new TCanvas("ccwh3l_MET_13TeV_flagOSSF", "cc",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   ccwh3l_MET_13TeV_flagOSSF->SetHighLightColor(2);
   ccwh3l_MET_13TeV_flagOSSF->Range(-0.4,-0.1585366,2.1,1.060976);
   ccwh3l_MET_13TeV_flagOSSF->SetFillColor(0);
   ccwh3l_MET_13TeV_flagOSSF->SetBorderMode(0);
   ccwh3l_MET_13TeV_flagOSSF->SetBorderSize(2);
   ccwh3l_MET_13TeV_flagOSSF->SetTickx(1);
   ccwh3l_MET_13TeV_flagOSSF->SetTicky(1);
   ccwh3l_MET_13TeV_flagOSSF->SetLeftMargin(0.16);
   ccwh3l_MET_13TeV_flagOSSF->SetRightMargin(0.04);
   ccwh3l_MET_13TeV_flagOSSF->SetTopMargin(0.05);
   ccwh3l_MET_13TeV_flagOSSF->SetBottomMargin(0.13);
   ccwh3l_MET_13TeV_flagOSSF->SetFrameFillStyle(0);
   ccwh3l_MET_13TeV_flagOSSF->SetFrameBorderMode(0);
   ccwh3l_MET_13TeV_flagOSSF->SetFrameFillStyle(0);
   ccwh3l_MET_13TeV_flagOSSF->SetFrameBorderMode(0);
   
   TH1F *hframe141 = new TH1F("hframe141","",1000,0,2);
   hframe141->SetMinimum(0);
   hframe141->SetMaximum(0);
   hframe141->SetDirectory(0);
   hframe141->SetStats(0);
   hframe141->SetLineStyle(0);
   hframe141->SetMarkerStyle(20);
   hframe141->GetXaxis()->SetTitle("flag OSSF");
   hframe141->GetXaxis()->SetNdivisions(506);
   hframe141->GetXaxis()->SetLabelFont(42);
   hframe141->GetXaxis()->SetLabelOffset(0.007);
   hframe141->GetXaxis()->SetLabelSize(0.05);
   hframe141->GetXaxis()->SetTitleSize(0.06);
   hframe141->GetXaxis()->SetTitleOffset(0.9);
   hframe141->GetXaxis()->SetTitleFont(42);
   hframe141->GetYaxis()->SetTitle("Events");
   hframe141->GetYaxis()->SetLabelFont(42);
   hframe141->GetYaxis()->SetLabelOffset(0.007);
   hframe141->GetYaxis()->SetLabelSize(0.05);
   hframe141->GetYaxis()->SetTitleSize(0.06);
   hframe141->GetYaxis()->SetTitleOffset(1.25);
   hframe141->GetYaxis()->SetTitleFont(42);
   hframe141->GetZaxis()->SetLabelFont(42);
   hframe141->GetZaxis()->SetLabelOffset(0.007);
   hframe141->GetZaxis()->SetLabelSize(0.05);
   hframe141->GetZaxis()->SetTitleSize(0.06);
   hframe141->GetZaxis()->SetTitleFont(42);
   hframe141->Draw(" ");
   
   THStack *thsBackground_grouped_wh3l_MET_13TeV_flagOSSF = new THStack();
   thsBackground_grouped_wh3l_MET_13TeV_flagOSSF->SetName("thsBackground_grouped_wh3l_MET_13TeV_flagOSSF");
   thsBackground_grouped_wh3l_MET_13TeV_flagOSSF->SetTitle("thsBackground_grouped_wh3l_MET_13TeV_flagOSSF");
   
   TH1F *thsBackground_grouped_wh3l_MET_13TeV_flagOSSF_stack_29 = new TH1F("thsBackground_grouped_wh3l_MET_13TeV_flagOSSF_stack_29","thsBackground_grouped_wh3l_MET_13TeV_flagOSSF",2,0,2);
   thsBackground_grouped_wh3l_MET_13TeV_flagOSSF_stack_29->SetMinimum(0);
   thsBackground_grouped_wh3l_MET_13TeV_flagOSSF_stack_29->SetMaximum(0);
   thsBackground_grouped_wh3l_MET_13TeV_flagOSSF_stack_29->SetDirectory(0);
   thsBackground_grouped_wh3l_MET_13TeV_flagOSSF_stack_29->SetStats(0);
   thsBackground_grouped_wh3l_MET_13TeV_flagOSSF_stack_29->SetLineStyle(0);
   thsBackground_grouped_wh3l_MET_13TeV_flagOSSF_stack_29->SetMarkerStyle(20);
   thsBackground_grouped_wh3l_MET_13TeV_flagOSSF_stack_29->GetXaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_MET_13TeV_flagOSSF_stack_29->GetXaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_MET_13TeV_flagOSSF_stack_29->GetXaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_MET_13TeV_flagOSSF_stack_29->GetXaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_MET_13TeV_flagOSSF_stack_29->GetXaxis()->SetTitleOffset(0.9);
   thsBackground_grouped_wh3l_MET_13TeV_flagOSSF_stack_29->GetXaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_13TeV_flagOSSF_stack_29->GetYaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_MET_13TeV_flagOSSF_stack_29->GetYaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_MET_13TeV_flagOSSF_stack_29->GetYaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_MET_13TeV_flagOSSF_stack_29->GetYaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_MET_13TeV_flagOSSF_stack_29->GetYaxis()->SetTitleOffset(1.25);
   thsBackground_grouped_wh3l_MET_13TeV_flagOSSF_stack_29->GetYaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_13TeV_flagOSSF_stack_29->GetZaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_MET_13TeV_flagOSSF_stack_29->GetZaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_MET_13TeV_flagOSSF_stack_29->GetZaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_MET_13TeV_flagOSSF_stack_29->GetZaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_MET_13TeV_flagOSSF_stack_29->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_13TeV_flagOSSF->SetHistogram(thsBackground_grouped_wh3l_MET_13TeV_flagOSSF_stack_29);
   
   
   TH1D *new_histo_group_Fake_wh3l_MET_13TeV_flagOSSF142 = new TH1D("new_histo_group_Fake_wh3l_MET_13TeV_flagOSSF142","histo_Fake",2,0,2);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_MET_13TeV_flagOSSF142->SetFillColor(ci);
   new_histo_group_Fake_wh3l_MET_13TeV_flagOSSF142->SetFillStyle(3001);

   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_MET_13TeV_flagOSSF142->SetLineColor(ci);
   new_histo_group_Fake_wh3l_MET_13TeV_flagOSSF142->GetXaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_MET_13TeV_flagOSSF142->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_MET_13TeV_flagOSSF142->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_MET_13TeV_flagOSSF142->GetXaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_MET_13TeV_flagOSSF142->GetYaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_MET_13TeV_flagOSSF142->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_MET_13TeV_flagOSSF142->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_MET_13TeV_flagOSSF142->GetYaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_MET_13TeV_flagOSSF142->GetZaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_MET_13TeV_flagOSSF142->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_MET_13TeV_flagOSSF142->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_MET_13TeV_flagOSSF142->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_13TeV_flagOSSF->Add(new_histo_group_Fake_wh3l_MET_13TeV_flagOSSF,"");
   
   TH1D *new_histo_group_WW_wh3l_MET_13TeV_flagOSSF143 = new TH1D("new_histo_group_WW_wh3l_MET_13TeV_flagOSSF143","histo_WW",2,0,2);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_MET_13TeV_flagOSSF143->SetFillColor(ci);
   new_histo_group_WW_wh3l_MET_13TeV_flagOSSF143->SetFillStyle(3001);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_MET_13TeV_flagOSSF143->SetLineColor(ci);
   new_histo_group_WW_wh3l_MET_13TeV_flagOSSF143->GetXaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_MET_13TeV_flagOSSF143->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_MET_13TeV_flagOSSF143->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_MET_13TeV_flagOSSF143->GetXaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_MET_13TeV_flagOSSF143->GetYaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_MET_13TeV_flagOSSF143->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_MET_13TeV_flagOSSF143->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_MET_13TeV_flagOSSF143->GetYaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_MET_13TeV_flagOSSF143->GetZaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_MET_13TeV_flagOSSF143->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_MET_13TeV_flagOSSF143->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_MET_13TeV_flagOSSF143->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_13TeV_flagOSSF->Add(new_histo_group_WW_wh3l_MET_13TeV_flagOSSF,"");
   
   TH1D *new_histo_group_VVV_wh3l_MET_13TeV_flagOSSF144 = new TH1D("new_histo_group_VVV_wh3l_MET_13TeV_flagOSSF144","histo_VVV",2,0,2);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_MET_13TeV_flagOSSF144->SetFillColor(ci);
   new_histo_group_VVV_wh3l_MET_13TeV_flagOSSF144->SetFillStyle(3001);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_MET_13TeV_flagOSSF144->SetLineColor(ci);
   new_histo_group_VVV_wh3l_MET_13TeV_flagOSSF144->GetXaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_MET_13TeV_flagOSSF144->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_MET_13TeV_flagOSSF144->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_MET_13TeV_flagOSSF144->GetXaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_MET_13TeV_flagOSSF144->GetYaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_MET_13TeV_flagOSSF144->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_MET_13TeV_flagOSSF144->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_MET_13TeV_flagOSSF144->GetYaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_MET_13TeV_flagOSSF144->GetZaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_MET_13TeV_flagOSSF144->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_MET_13TeV_flagOSSF144->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_MET_13TeV_flagOSSF144->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_13TeV_flagOSSF->Add(new_histo_group_VVV_wh3l_MET_13TeV_flagOSSF,"");
   
   TH1D *new_histo_group_Vg_wh3l_MET_13TeV_flagOSSF145 = new TH1D("new_histo_group_Vg_wh3l_MET_13TeV_flagOSSF145","histo_Vg",2,0,2);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_MET_13TeV_flagOSSF145->SetFillColor(ci);
   new_histo_group_Vg_wh3l_MET_13TeV_flagOSSF145->SetFillStyle(3001);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_MET_13TeV_flagOSSF145->SetLineColor(ci);
   new_histo_group_Vg_wh3l_MET_13TeV_flagOSSF145->GetXaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_MET_13TeV_flagOSSF145->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_MET_13TeV_flagOSSF145->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_MET_13TeV_flagOSSF145->GetXaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_MET_13TeV_flagOSSF145->GetYaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_MET_13TeV_flagOSSF145->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_MET_13TeV_flagOSSF145->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_MET_13TeV_flagOSSF145->GetYaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_MET_13TeV_flagOSSF145->GetZaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_MET_13TeV_flagOSSF145->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_MET_13TeV_flagOSSF145->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_MET_13TeV_flagOSSF145->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_13TeV_flagOSSF->Add(new_histo_group_Vg_wh3l_MET_13TeV_flagOSSF,"");
   
   TH1D *new_histo_group_ZZ_wh3l_MET_13TeV_flagOSSF146 = new TH1D("new_histo_group_ZZ_wh3l_MET_13TeV_flagOSSF146","histo_ZZ",2,0,2);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_MET_13TeV_flagOSSF146->SetFillColor(ci);
   new_histo_group_ZZ_wh3l_MET_13TeV_flagOSSF146->SetFillStyle(3001);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_MET_13TeV_flagOSSF146->SetLineColor(ci);
   new_histo_group_ZZ_wh3l_MET_13TeV_flagOSSF146->GetXaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_MET_13TeV_flagOSSF146->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_MET_13TeV_flagOSSF146->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_MET_13TeV_flagOSSF146->GetXaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_MET_13TeV_flagOSSF146->GetYaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_MET_13TeV_flagOSSF146->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_MET_13TeV_flagOSSF146->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_MET_13TeV_flagOSSF146->GetYaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_MET_13TeV_flagOSSF146->GetZaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_MET_13TeV_flagOSSF146->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_MET_13TeV_flagOSSF146->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_MET_13TeV_flagOSSF146->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_13TeV_flagOSSF->Add(new_histo_group_ZZ_wh3l_MET_13TeV_flagOSSF,"");
   
   TH1D *new_histo_group_WZ_wh3l_MET_13TeV_flagOSSF147 = new TH1D("new_histo_group_WZ_wh3l_MET_13TeV_flagOSSF147","histo_WZ",2,0,2);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_MET_13TeV_flagOSSF147->SetFillColor(ci);
   new_histo_group_WZ_wh3l_MET_13TeV_flagOSSF147->SetFillStyle(3001);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_MET_13TeV_flagOSSF147->SetLineColor(ci);
   new_histo_group_WZ_wh3l_MET_13TeV_flagOSSF147->GetXaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_MET_13TeV_flagOSSF147->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_MET_13TeV_flagOSSF147->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_MET_13TeV_flagOSSF147->GetXaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_MET_13TeV_flagOSSF147->GetYaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_MET_13TeV_flagOSSF147->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_MET_13TeV_flagOSSF147->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_MET_13TeV_flagOSSF147->GetYaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_MET_13TeV_flagOSSF147->GetZaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_MET_13TeV_flagOSSF147->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_MET_13TeV_flagOSSF147->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_MET_13TeV_flagOSSF147->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_13TeV_flagOSSF->Add(new_histo_group_WZ_wh3l_MET_13TeV_flagOSSF,"");
   
   TH1D *new_histo_group_Higgs_wh3l_MET_13TeV_flagOSSF148 = new TH1D("new_histo_group_Higgs_wh3l_MET_13TeV_flagOSSF148","histo_H_htt",2,0,2);
   new_histo_group_Higgs_wh3l_MET_13TeV_flagOSSF148->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_MET_13TeV_flagOSSF148->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_MET_13TeV_flagOSSF148->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_MET_13TeV_flagOSSF148->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_13TeV_flagOSSF148->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_13TeV_flagOSSF148->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_13TeV_flagOSSF148->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_MET_13TeV_flagOSSF148->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_13TeV_flagOSSF148->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_13TeV_flagOSSF148->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_13TeV_flagOSSF148->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_MET_13TeV_flagOSSF148->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_13TeV_flagOSSF148->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_13TeV_flagOSSF148->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_13TeV_flagOSSF148->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_13TeV_flagOSSF->Add(new_histo_group_Higgs_wh3l_MET_13TeV_flagOSSF,"");
   thsBackground_grouped_wh3l_MET_13TeV_flagOSSF->Draw("hist same");
   
   thsSignal_grouped_wh3l_MET_13TeV_flagOSSF = new THStack();
   thsSignal_grouped_wh3l_MET_13TeV_flagOSSF->SetName("thsSignal_grouped_wh3l_MET_13TeV_flagOSSF");
   thsSignal_grouped_wh3l_MET_13TeV_flagOSSF->SetTitle("thsSignal_grouped_wh3l_MET_13TeV_flagOSSF");
   
   TH1F *thsSignal_grouped_wh3l_MET_13TeV_flagOSSF_stack_30 = new TH1F("thsSignal_grouped_wh3l_MET_13TeV_flagOSSF_stack_30","thsSignal_grouped_wh3l_MET_13TeV_flagOSSF",2,0,2);
   thsSignal_grouped_wh3l_MET_13TeV_flagOSSF_stack_30->SetMinimum(0);
   thsSignal_grouped_wh3l_MET_13TeV_flagOSSF_stack_30->SetMaximum(0);
   thsSignal_grouped_wh3l_MET_13TeV_flagOSSF_stack_30->SetDirectory(0);
   thsSignal_grouped_wh3l_MET_13TeV_flagOSSF_stack_30->SetStats(0);
   thsSignal_grouped_wh3l_MET_13TeV_flagOSSF_stack_30->SetLineStyle(0);
   thsSignal_grouped_wh3l_MET_13TeV_flagOSSF_stack_30->SetMarkerStyle(20);
   thsSignal_grouped_wh3l_MET_13TeV_flagOSSF_stack_30->GetXaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_MET_13TeV_flagOSSF_stack_30->GetXaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_MET_13TeV_flagOSSF_stack_30->GetXaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_MET_13TeV_flagOSSF_stack_30->GetXaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_MET_13TeV_flagOSSF_stack_30->GetXaxis()->SetTitleOffset(0.9);
   thsSignal_grouped_wh3l_MET_13TeV_flagOSSF_stack_30->GetXaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_MET_13TeV_flagOSSF_stack_30->GetYaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_MET_13TeV_flagOSSF_stack_30->GetYaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_MET_13TeV_flagOSSF_stack_30->GetYaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_MET_13TeV_flagOSSF_stack_30->GetYaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_MET_13TeV_flagOSSF_stack_30->GetYaxis()->SetTitleOffset(1.25);
   thsSignal_grouped_wh3l_MET_13TeV_flagOSSF_stack_30->GetYaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_MET_13TeV_flagOSSF_stack_30->GetZaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_MET_13TeV_flagOSSF_stack_30->GetZaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_MET_13TeV_flagOSSF_stack_30->GetZaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_MET_13TeV_flagOSSF_stack_30->GetZaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_MET_13TeV_flagOSSF_stack_30->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_MET_13TeV_flagOSSF->SetHistogram(thsSignal_grouped_wh3l_MET_13TeV_flagOSSF_stack_30);
   
   
   TH1D *new_histo_group_Higgs_wh3l_MET_13TeV_flagOSSF149 = new TH1D("new_histo_group_Higgs_wh3l_MET_13TeV_flagOSSF149","histo_H_htt",2,0,2);
   new_histo_group_Higgs_wh3l_MET_13TeV_flagOSSF149->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_MET_13TeV_flagOSSF149->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_MET_13TeV_flagOSSF149->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_MET_13TeV_flagOSSF149->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_13TeV_flagOSSF149->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_13TeV_flagOSSF149->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_13TeV_flagOSSF149->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_MET_13TeV_flagOSSF149->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_13TeV_flagOSSF149->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_13TeV_flagOSSF149->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_13TeV_flagOSSF149->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_MET_13TeV_flagOSSF149->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_13TeV_flagOSSF149->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_13TeV_flagOSSF149->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_13TeV_flagOSSF149->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_MET_13TeV_flagOSSF->Add(new_histo_group_Higgs_wh3l_MET_13TeV_flagOSSF,"");
   thsSignal_grouped_wh3l_MET_13TeV_flagOSSF->Draw("hist same noclear");
   
   Double_t _fx3029[2] = {
   0.5,
   1.5};
   Double_t _fy3029[2] = {
   0,
   0};
   Double_t _felx3029[2] = {
   0.5,
   0.5};
   Double_t _fely3029[2] = {
   0,
   0};
   Double_t _fehx3029[2] = {
   0.5,
   0.5};
   Double_t _fehy3029[2] = {
   0,
   0};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(2,_fx3029,_fy3029,_felx3029,_fehx3029,_fely3029,_fehy3029);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(12);
   grae->SetFillStyle(3004);
   grae->SetLineColor(12);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3029 = new TH1F("Graph_Graph3029","",100,0,2.2);
   Graph_Graph3029->SetMinimum(0);
   Graph_Graph3029->SetMaximum(1.1);
   Graph_Graph3029->SetDirectory(0);
   Graph_Graph3029->SetStats(0);
   Graph_Graph3029->SetLineStyle(0);
   Graph_Graph3029->SetMarkerStyle(20);
   Graph_Graph3029->GetXaxis()->SetLabelFont(42);
   Graph_Graph3029->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3029->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3029->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3029->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3029->GetXaxis()->SetTitleFont(42);
   Graph_Graph3029->GetYaxis()->SetLabelFont(42);
   Graph_Graph3029->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3029->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3029->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3029->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3029->GetYaxis()->SetTitleFont(42);
   Graph_Graph3029->GetZaxis()->SetLabelFont(42);
   Graph_Graph3029->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3029->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3029->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3029->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3029);
   
   grae->Draw("2");
   
   Double_t _fx3030[2] = {
   0.5,
   1.5};
   Double_t _fy3030[2] = {
   0,
   0};
   Double_t _felx3030[2] = {
   0.5,
   0.5};
   Double_t _fely3030[2] = {
   0,
   0};
   Double_t _fehx3030[2] = {
   0.5,
   0.5};
   Double_t _fehy3030[2] = {
   1.147908,
   1.147908};
   grae = new TGraphAsymmErrors(2,_fx3030,_fy3030,_felx3030,_fehx3030,_fely3030,_fehy3030);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(1);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3030 = new TH1F("Graph_Graph3030","",100,0,2.2);
   Graph_Graph3030->SetMinimum(0);
   Graph_Graph3030->SetMaximum(1.262698);
   Graph_Graph3030->SetDirectory(0);
   Graph_Graph3030->SetStats(0);
   Graph_Graph3030->SetLineStyle(0);
   Graph_Graph3030->SetMarkerStyle(20);
   Graph_Graph3030->GetXaxis()->SetLabelFont(42);
   Graph_Graph3030->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3030->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3030->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3030->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3030->GetXaxis()->SetTitleFont(42);
   Graph_Graph3030->GetYaxis()->SetLabelFont(42);
   Graph_Graph3030->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3030->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3030->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3030->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3030->GetYaxis()->SetTitleFont(42);
   Graph_Graph3030->GetZaxis()->SetLabelFont(42);
   Graph_Graph3030->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3030->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3030->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3030->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3030);
   
   grae->Draw("p0");
   
   TLegend *leg = new TLegend(0.2,0.7,0.8,0.9,NULL,"brNDC");
   leg->SetTextFont(62);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("new_histo_group_Fake_wh3l_MET_13TeV_flagOSSF","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_MET_13TeV_flagOSSF","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_MET_13TeV_flagOSSF","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_MET_13TeV_flagOSSF","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_MET_13TeV_flagOSSF","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_MET_13TeV_flagOSSF","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_MET_13TeV_flagOSSF","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_MET_13TeV_flagOSSF","Data","EPL");
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
   entry=leg->AddEntry("new_histo_group_Fake_wh3l_MET_13TeV_flagOSSF","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_MET_13TeV_flagOSSF","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_MET_13TeV_flagOSSF","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_MET_13TeV_flagOSSF","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_MET_13TeV_flagOSSF","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_MET_13TeV_flagOSSF","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_MET_13TeV_flagOSSF","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_MET_13TeV_flagOSSF","Data","EPL");
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
   
   TH1F *hframe_copy150 = new TH1F("hframe_copy150","",1000,0,2);
   hframe_copy150->SetMinimum(0);
   hframe_copy150->SetMaximum(0);
   hframe_copy150->SetDirectory(0);
   hframe_copy150->SetStats(0);
   hframe_copy150->SetLineStyle(0);
   hframe_copy150->SetMarkerStyle(20);
   hframe_copy150->GetXaxis()->SetTitle("flag OSSF");
   hframe_copy150->GetXaxis()->SetNdivisions(506);
   hframe_copy150->GetXaxis()->SetLabelFont(42);
   hframe_copy150->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy150->GetXaxis()->SetLabelSize(0.05);
   hframe_copy150->GetXaxis()->SetTitleSize(0.06);
   hframe_copy150->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy150->GetXaxis()->SetTitleFont(42);
   hframe_copy150->GetYaxis()->SetTitle("Events");
   hframe_copy150->GetYaxis()->SetLabelFont(42);
   hframe_copy150->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy150->GetYaxis()->SetLabelSize(0.05);
   hframe_copy150->GetYaxis()->SetTitleSize(0.06);
   hframe_copy150->GetYaxis()->SetTitleOffset(1.25);
   hframe_copy150->GetYaxis()->SetTitleFont(42);
   hframe_copy150->GetZaxis()->SetLabelFont(42);
   hframe_copy150->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy150->GetZaxis()->SetLabelSize(0.05);
   hframe_copy150->GetZaxis()->SetTitleSize(0.06);
   hframe_copy150->GetZaxis()->SetTitleFont(42);
   hframe_copy150->Draw("sameaxis");
   ccwh3l_MET_13TeV_flagOSSF->Modified();
   ccwh3l_MET_13TeV_flagOSSF->cd();
   ccwh3l_MET_13TeV_flagOSSF->SetSelected(ccwh3l_MET_13TeV_flagOSSF);
}
