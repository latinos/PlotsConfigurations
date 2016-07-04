void c_wh3l_wz_13TeV_flagOSSF()
{
//=========Macro generated from canvas: ccwh3l_wz_13TeV_flagOSSF/cc
//=========  (Sat Jul  2 20:39:34 2016) by ROOT version6.02/13
   TCanvas *ccwh3l_wz_13TeV_flagOSSF = new TCanvas("ccwh3l_wz_13TeV_flagOSSF", "cc",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   ccwh3l_wz_13TeV_flagOSSF->SetHighLightColor(2);
   ccwh3l_wz_13TeV_flagOSSF->Range(-0.4,-70.48744,2.1,471.7236);
   ccwh3l_wz_13TeV_flagOSSF->SetFillColor(0);
   ccwh3l_wz_13TeV_flagOSSF->SetBorderMode(0);
   ccwh3l_wz_13TeV_flagOSSF->SetBorderSize(2);
   ccwh3l_wz_13TeV_flagOSSF->SetTickx(1);
   ccwh3l_wz_13TeV_flagOSSF->SetTicky(1);
   ccwh3l_wz_13TeV_flagOSSF->SetLeftMargin(0.16);
   ccwh3l_wz_13TeV_flagOSSF->SetRightMargin(0.04);
   ccwh3l_wz_13TeV_flagOSSF->SetTopMargin(0.05);
   ccwh3l_wz_13TeV_flagOSSF->SetBottomMargin(0.13);
   ccwh3l_wz_13TeV_flagOSSF->SetFrameFillStyle(0);
   ccwh3l_wz_13TeV_flagOSSF->SetFrameBorderMode(0);
   ccwh3l_wz_13TeV_flagOSSF->SetFrameFillStyle(0);
   ccwh3l_wz_13TeV_flagOSSF->SetFrameBorderMode(0);
   
   TH1F *hframe1 = new TH1F("hframe1","",1000,0,2);
   hframe1->SetMinimum(0);
   hframe1->SetMaximum(444.6131);
   hframe1->SetDirectory(0);
   hframe1->SetStats(0);
   hframe1->SetLineStyle(0);
   hframe1->SetMarkerStyle(20);
   hframe1->GetXaxis()->SetTitle("flag OSSF");
   hframe1->GetXaxis()->SetNdivisions(506);
   hframe1->GetXaxis()->SetLabelFont(42);
   hframe1->GetXaxis()->SetLabelOffset(0.007);
   hframe1->GetXaxis()->SetLabelSize(0.05);
   hframe1->GetXaxis()->SetTitleSize(0.06);
   hframe1->GetXaxis()->SetTitleOffset(0.9);
   hframe1->GetXaxis()->SetTitleFont(42);
   hframe1->GetYaxis()->SetTitle("Events");
   hframe1->GetYaxis()->SetLabelFont(42);
   hframe1->GetYaxis()->SetLabelOffset(0.007);
   hframe1->GetYaxis()->SetLabelSize(0.05);
   hframe1->GetYaxis()->SetTitleSize(0.06);
   hframe1->GetYaxis()->SetTitleOffset(1.25);
   hframe1->GetYaxis()->SetTitleFont(42);
   hframe1->GetZaxis()->SetLabelFont(42);
   hframe1->GetZaxis()->SetLabelOffset(0.007);
   hframe1->GetZaxis()->SetLabelSize(0.05);
   hframe1->GetZaxis()->SetTitleSize(0.06);
   hframe1->GetZaxis()->SetTitleFont(42);
   hframe1->Draw(" ");
   
   THStack *thsBackground_grouped_wh3l_wz_13TeV_flagOSSF = new THStack();
   thsBackground_grouped_wh3l_wz_13TeV_flagOSSF->SetName("thsBackground_grouped_wh3l_wz_13TeV_flagOSSF");
   thsBackground_grouped_wh3l_wz_13TeV_flagOSSF->SetTitle("thsBackground_grouped_wh3l_wz_13TeV_flagOSSF");
   
   TH1F *thsBackground_grouped_wh3l_wz_13TeV_flagOSSF_stack_1 = new TH1F("thsBackground_grouped_wh3l_wz_13TeV_flagOSSF_stack_1","thsBackground_grouped_wh3l_wz_13TeV_flagOSSF",2,0,2);
   thsBackground_grouped_wh3l_wz_13TeV_flagOSSF_stack_1->SetMinimum(0);
   thsBackground_grouped_wh3l_wz_13TeV_flagOSSF_stack_1->SetMaximum(138.5385);
   thsBackground_grouped_wh3l_wz_13TeV_flagOSSF_stack_1->SetDirectory(0);
   thsBackground_grouped_wh3l_wz_13TeV_flagOSSF_stack_1->SetStats(0);
   thsBackground_grouped_wh3l_wz_13TeV_flagOSSF_stack_1->SetLineStyle(0);
   thsBackground_grouped_wh3l_wz_13TeV_flagOSSF_stack_1->SetMarkerStyle(20);
   thsBackground_grouped_wh3l_wz_13TeV_flagOSSF_stack_1->GetXaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_wz_13TeV_flagOSSF_stack_1->GetXaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_wz_13TeV_flagOSSF_stack_1->GetXaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_wz_13TeV_flagOSSF_stack_1->GetXaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_wz_13TeV_flagOSSF_stack_1->GetXaxis()->SetTitleOffset(0.9);
   thsBackground_grouped_wh3l_wz_13TeV_flagOSSF_stack_1->GetXaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_wz_13TeV_flagOSSF_stack_1->GetYaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_wz_13TeV_flagOSSF_stack_1->GetYaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_wz_13TeV_flagOSSF_stack_1->GetYaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_wz_13TeV_flagOSSF_stack_1->GetYaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_wz_13TeV_flagOSSF_stack_1->GetYaxis()->SetTitleOffset(1.25);
   thsBackground_grouped_wh3l_wz_13TeV_flagOSSF_stack_1->GetYaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_wz_13TeV_flagOSSF_stack_1->GetZaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_wz_13TeV_flagOSSF_stack_1->GetZaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_wz_13TeV_flagOSSF_stack_1->GetZaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_wz_13TeV_flagOSSF_stack_1->GetZaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_wz_13TeV_flagOSSF_stack_1->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_wz_13TeV_flagOSSF->SetHistogram(thsBackground_grouped_wh3l_wz_13TeV_flagOSSF_stack_1);
   
   
   TH1D *new_histo_group_Fake_wh3l_wz_13TeV_flagOSSF2 = new TH1D("new_histo_group_Fake_wh3l_wz_13TeV_flagOSSF2","histo_Fake",2,0,2);
   new_histo_group_Fake_wh3l_wz_13TeV_flagOSSF2->SetBinContent(2,10.57838);
   new_histo_group_Fake_wh3l_wz_13TeV_flagOSSF2->SetBinError(2,3.327542);
   new_histo_group_Fake_wh3l_wz_13TeV_flagOSSF2->SetEntries(336);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_wz_13TeV_flagOSSF2->SetFillColor(ci);
   new_histo_group_Fake_wh3l_wz_13TeV_flagOSSF2->SetFillStyle(3001);

   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_wz_13TeV_flagOSSF2->SetLineColor(ci);
   new_histo_group_Fake_wh3l_wz_13TeV_flagOSSF2->GetXaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_wz_13TeV_flagOSSF2->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_wz_13TeV_flagOSSF2->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_wz_13TeV_flagOSSF2->GetXaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_wz_13TeV_flagOSSF2->GetYaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_wz_13TeV_flagOSSF2->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_wz_13TeV_flagOSSF2->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_wz_13TeV_flagOSSF2->GetYaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_wz_13TeV_flagOSSF2->GetZaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_wz_13TeV_flagOSSF2->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_wz_13TeV_flagOSSF2->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_wz_13TeV_flagOSSF2->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_wz_13TeV_flagOSSF->Add(new_histo_group_Fake_wh3l_wz_13TeV_flagOSSF,"");
   
   TH1D *new_histo_group_WW_wh3l_wz_13TeV_flagOSSF3 = new TH1D("new_histo_group_WW_wh3l_wz_13TeV_flagOSSF3","histo_WW",2,0,2);
   new_histo_group_WW_wh3l_wz_13TeV_flagOSSF3->SetBinContent(2,0.07539475);
   new_histo_group_WW_wh3l_wz_13TeV_flagOSSF3->SetBinError(2,0.03420241);
   new_histo_group_WW_wh3l_wz_13TeV_flagOSSF3->SetEntries(5);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_wz_13TeV_flagOSSF3->SetFillColor(ci);
   new_histo_group_WW_wh3l_wz_13TeV_flagOSSF3->SetFillStyle(3001);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_wz_13TeV_flagOSSF3->SetLineColor(ci);
   new_histo_group_WW_wh3l_wz_13TeV_flagOSSF3->GetXaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_wz_13TeV_flagOSSF3->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_wz_13TeV_flagOSSF3->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_wz_13TeV_flagOSSF3->GetXaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_wz_13TeV_flagOSSF3->GetYaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_wz_13TeV_flagOSSF3->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_wz_13TeV_flagOSSF3->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_wz_13TeV_flagOSSF3->GetYaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_wz_13TeV_flagOSSF3->GetZaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_wz_13TeV_flagOSSF3->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_wz_13TeV_flagOSSF3->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_wz_13TeV_flagOSSF3->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_wz_13TeV_flagOSSF->Add(new_histo_group_WW_wh3l_wz_13TeV_flagOSSF,"");
   
   TH1D *new_histo_group_Vg_wh3l_wz_13TeV_flagOSSF4 = new TH1D("new_histo_group_Vg_wh3l_wz_13TeV_flagOSSF4","histo_Vg",2,0,2);
   new_histo_group_Vg_wh3l_wz_13TeV_flagOSSF4->SetBinContent(2,4.987755);
   new_histo_group_Vg_wh3l_wz_13TeV_flagOSSF4->SetBinError(2,0.7934922);
   new_histo_group_Vg_wh3l_wz_13TeV_flagOSSF4->SetEntries(63);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_wz_13TeV_flagOSSF4->SetFillColor(ci);
   new_histo_group_Vg_wh3l_wz_13TeV_flagOSSF4->SetFillStyle(3001);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_wz_13TeV_flagOSSF4->SetLineColor(ci);
   new_histo_group_Vg_wh3l_wz_13TeV_flagOSSF4->GetXaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_wz_13TeV_flagOSSF4->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_wz_13TeV_flagOSSF4->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_wz_13TeV_flagOSSF4->GetXaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_wz_13TeV_flagOSSF4->GetYaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_wz_13TeV_flagOSSF4->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_wz_13TeV_flagOSSF4->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_wz_13TeV_flagOSSF4->GetYaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_wz_13TeV_flagOSSF4->GetZaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_wz_13TeV_flagOSSF4->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_wz_13TeV_flagOSSF4->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_wz_13TeV_flagOSSF4->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_wz_13TeV_flagOSSF->Add(new_histo_group_Vg_wh3l_wz_13TeV_flagOSSF,"");
   
   TH1D *new_histo_group_ZZ_wh3l_wz_13TeV_flagOSSF5 = new TH1D("new_histo_group_ZZ_wh3l_wz_13TeV_flagOSSF5","histo_ZZ",2,0,2);
   new_histo_group_ZZ_wh3l_wz_13TeV_flagOSSF5->SetBinContent(2,6.803126);
   new_histo_group_ZZ_wh3l_wz_13TeV_flagOSSF5->SetBinError(2,0.5349253);
   new_histo_group_ZZ_wh3l_wz_13TeV_flagOSSF5->SetEntries(182);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_wz_13TeV_flagOSSF5->SetFillColor(ci);
   new_histo_group_ZZ_wh3l_wz_13TeV_flagOSSF5->SetFillStyle(3001);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_wz_13TeV_flagOSSF5->SetLineColor(ci);
   new_histo_group_ZZ_wh3l_wz_13TeV_flagOSSF5->GetXaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_wz_13TeV_flagOSSF5->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_wz_13TeV_flagOSSF5->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_wz_13TeV_flagOSSF5->GetXaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_wz_13TeV_flagOSSF5->GetYaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_wz_13TeV_flagOSSF5->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_wz_13TeV_flagOSSF5->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_wz_13TeV_flagOSSF5->GetYaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_wz_13TeV_flagOSSF5->GetZaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_wz_13TeV_flagOSSF5->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_wz_13TeV_flagOSSF5->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_wz_13TeV_flagOSSF5->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_wz_13TeV_flagOSSF->Add(new_histo_group_ZZ_wh3l_wz_13TeV_flagOSSF,"");
   
   TH1D *new_histo_group_WZ_wh3l_wz_13TeV_flagOSSF6 = new TH1D("new_histo_group_WZ_wh3l_wz_13TeV_flagOSSF6","histo_WZ",2,0,2);
   new_histo_group_WZ_wh3l_wz_13TeV_flagOSSF6->SetBinContent(2,108.6032);
   new_histo_group_WZ_wh3l_wz_13TeV_flagOSSF6->SetBinError(2,0.7683485);
   new_histo_group_WZ_wh3l_wz_13TeV_flagOSSF6->SetEntries(22144);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_wz_13TeV_flagOSSF6->SetFillColor(ci);
   new_histo_group_WZ_wh3l_wz_13TeV_flagOSSF6->SetFillStyle(3001);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_wz_13TeV_flagOSSF6->SetLineColor(ci);
   new_histo_group_WZ_wh3l_wz_13TeV_flagOSSF6->GetXaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_wz_13TeV_flagOSSF6->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_wz_13TeV_flagOSSF6->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_wz_13TeV_flagOSSF6->GetXaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_wz_13TeV_flagOSSF6->GetYaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_wz_13TeV_flagOSSF6->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_wz_13TeV_flagOSSF6->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_wz_13TeV_flagOSSF6->GetYaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_wz_13TeV_flagOSSF6->GetZaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_wz_13TeV_flagOSSF6->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_wz_13TeV_flagOSSF6->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_wz_13TeV_flagOSSF6->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_wz_13TeV_flagOSSF->Add(new_histo_group_WZ_wh3l_wz_13TeV_flagOSSF,"");
   
   TH1D *new_histo_group_Higgs_wh3l_wz_13TeV_flagOSSF7 = new TH1D("new_histo_group_Higgs_wh3l_wz_13TeV_flagOSSF7","histo_H_htt",2,0,2);
   new_histo_group_Higgs_wh3l_wz_13TeV_flagOSSF7->SetBinContent(2,0.8935238);
   new_histo_group_Higgs_wh3l_wz_13TeV_flagOSSF7->SetBinError(2,0.03232713);
   new_histo_group_Higgs_wh3l_wz_13TeV_flagOSSF7->SetEntries(1285);
   new_histo_group_Higgs_wh3l_wz_13TeV_flagOSSF7->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_wz_13TeV_flagOSSF7->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_wz_13TeV_flagOSSF7->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_wz_13TeV_flagOSSF7->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_wz_13TeV_flagOSSF7->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_wz_13TeV_flagOSSF7->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_wz_13TeV_flagOSSF7->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_wz_13TeV_flagOSSF7->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_wz_13TeV_flagOSSF7->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_wz_13TeV_flagOSSF7->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_wz_13TeV_flagOSSF7->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_wz_13TeV_flagOSSF7->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_wz_13TeV_flagOSSF7->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_wz_13TeV_flagOSSF7->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_wz_13TeV_flagOSSF7->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_wz_13TeV_flagOSSF->Add(new_histo_group_Higgs_wh3l_wz_13TeV_flagOSSF,"");
   thsBackground_grouped_wh3l_wz_13TeV_flagOSSF->Draw("hist same");
   
   thsSignal_grouped_wh3l_wz_13TeV_flagOSSF = new THStack();
   thsSignal_grouped_wh3l_wz_13TeV_flagOSSF->SetName("thsSignal_grouped_wh3l_wz_13TeV_flagOSSF");
   thsSignal_grouped_wh3l_wz_13TeV_flagOSSF->SetTitle("thsSignal_grouped_wh3l_wz_13TeV_flagOSSF");
   
   TH1F *thsSignal_grouped_wh3l_wz_13TeV_flagOSSF_stack_2 = new TH1F("thsSignal_grouped_wh3l_wz_13TeV_flagOSSF_stack_2","thsSignal_grouped_wh3l_wz_13TeV_flagOSSF",2,0,2);
   thsSignal_grouped_wh3l_wz_13TeV_flagOSSF_stack_2->SetMinimum(0);
   thsSignal_grouped_wh3l_wz_13TeV_flagOSSF_stack_2->SetMaximum(0.9721435);
   thsSignal_grouped_wh3l_wz_13TeV_flagOSSF_stack_2->SetDirectory(0);
   thsSignal_grouped_wh3l_wz_13TeV_flagOSSF_stack_2->SetStats(0);
   thsSignal_grouped_wh3l_wz_13TeV_flagOSSF_stack_2->SetLineStyle(0);
   thsSignal_grouped_wh3l_wz_13TeV_flagOSSF_stack_2->SetMarkerStyle(20);
   thsSignal_grouped_wh3l_wz_13TeV_flagOSSF_stack_2->GetXaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_wz_13TeV_flagOSSF_stack_2->GetXaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_wz_13TeV_flagOSSF_stack_2->GetXaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_wz_13TeV_flagOSSF_stack_2->GetXaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_wz_13TeV_flagOSSF_stack_2->GetXaxis()->SetTitleOffset(0.9);
   thsSignal_grouped_wh3l_wz_13TeV_flagOSSF_stack_2->GetXaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_wz_13TeV_flagOSSF_stack_2->GetYaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_wz_13TeV_flagOSSF_stack_2->GetYaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_wz_13TeV_flagOSSF_stack_2->GetYaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_wz_13TeV_flagOSSF_stack_2->GetYaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_wz_13TeV_flagOSSF_stack_2->GetYaxis()->SetTitleOffset(1.25);
   thsSignal_grouped_wh3l_wz_13TeV_flagOSSF_stack_2->GetYaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_wz_13TeV_flagOSSF_stack_2->GetZaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_wz_13TeV_flagOSSF_stack_2->GetZaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_wz_13TeV_flagOSSF_stack_2->GetZaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_wz_13TeV_flagOSSF_stack_2->GetZaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_wz_13TeV_flagOSSF_stack_2->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_wz_13TeV_flagOSSF->SetHistogram(thsSignal_grouped_wh3l_wz_13TeV_flagOSSF_stack_2);
   
   
   TH1D *new_histo_group_Higgs_wh3l_wz_13TeV_flagOSSF8 = new TH1D("new_histo_group_Higgs_wh3l_wz_13TeV_flagOSSF8","histo_H_htt",2,0,2);
   new_histo_group_Higgs_wh3l_wz_13TeV_flagOSSF8->SetBinContent(2,0.8935238);
   new_histo_group_Higgs_wh3l_wz_13TeV_flagOSSF8->SetBinError(2,0.03232713);
   new_histo_group_Higgs_wh3l_wz_13TeV_flagOSSF8->SetEntries(1285);
   new_histo_group_Higgs_wh3l_wz_13TeV_flagOSSF8->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_wz_13TeV_flagOSSF8->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_wz_13TeV_flagOSSF8->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_wz_13TeV_flagOSSF8->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_wz_13TeV_flagOSSF8->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_wz_13TeV_flagOSSF8->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_wz_13TeV_flagOSSF8->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_wz_13TeV_flagOSSF8->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_wz_13TeV_flagOSSF8->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_wz_13TeV_flagOSSF8->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_wz_13TeV_flagOSSF8->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_wz_13TeV_flagOSSF8->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_wz_13TeV_flagOSSF8->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_wz_13TeV_flagOSSF8->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_wz_13TeV_flagOSSF8->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_wz_13TeV_flagOSSF->Add(new_histo_group_Higgs_wh3l_wz_13TeV_flagOSSF,"");
   thsSignal_grouped_wh3l_wz_13TeV_flagOSSF->Draw("hist same noclear");
   
   Double_t _fx3001[2] = {
   0.5,
   1.5};
   Double_t _fy3001[2] = {
   0,
   131.0479};
   Double_t _felx3001[2] = {
   0.5,
   0.5};
   Double_t _fely3001[2] = {
   0,
   7.150069};
   Double_t _fehx3001[2] = {
   0.5,
   0.5};
   Double_t _fehy3001[2] = {
   0,
   7.115102};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(2,_fx3001,_fy3001,_felx3001,_fehx3001,_fely3001,_fehy3001);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(12);
   grae->SetFillStyle(3004);
   grae->SetLineColor(12);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3001 = new TH1F("Graph_Graph3001","",100,0,2.2);
   Graph_Graph3001->SetMinimum(0);
   Graph_Graph3001->SetMaximum(151.9793);
   Graph_Graph3001->SetDirectory(0);
   Graph_Graph3001->SetStats(0);
   Graph_Graph3001->SetLineStyle(0);
   Graph_Graph3001->SetMarkerStyle(20);
   Graph_Graph3001->GetXaxis()->SetLabelFont(42);
   Graph_Graph3001->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3001->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3001->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3001->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3001->GetXaxis()->SetTitleFont(42);
   Graph_Graph3001->GetYaxis()->SetLabelFont(42);
   Graph_Graph3001->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3001->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3001->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3001->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3001->GetYaxis()->SetTitleFont(42);
   Graph_Graph3001->GetZaxis()->SetLabelFont(42);
   Graph_Graph3001->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3001->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3001->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3001->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3001);
   
   grae->Draw("2");
   
   Double_t _fx3002[2] = {
   0.5,
   1.5};
   Double_t _fy3002[2] = {
   0,
   165};
   Double_t _felx3002[2] = {
   0.5,
   0.5};
   Double_t _fely3002[2] = {
   0,
   12.83247};
   Double_t _fehx3002[2] = {
   0.5,
   0.5};
   Double_t _fehy3002[2] = {
   1.147908,
   13.8715};
   grae = new TGraphAsymmErrors(2,_fx3002,_fy3002,_felx3002,_fehx3002,_fely3002,_fehy3002);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(1);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3002 = new TH1F("Graph_Graph3002","",100,0,2.2);
   Graph_Graph3002->SetMinimum(0);
   Graph_Graph3002->SetMaximum(196.7587);
   Graph_Graph3002->SetDirectory(0);
   Graph_Graph3002->SetStats(0);
   Graph_Graph3002->SetLineStyle(0);
   Graph_Graph3002->SetMarkerStyle(20);
   Graph_Graph3002->GetXaxis()->SetLabelFont(42);
   Graph_Graph3002->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3002->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3002->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3002->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3002->GetXaxis()->SetTitleFont(42);
   Graph_Graph3002->GetYaxis()->SetLabelFont(42);
   Graph_Graph3002->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3002->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3002->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3002->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3002->GetYaxis()->SetTitleFont(42);
   Graph_Graph3002->GetZaxis()->SetLabelFont(42);
   Graph_Graph3002->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3002->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3002->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3002->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3002);
   
   grae->Draw("p0");
   
   TLegend *leg = new TLegend(0.2,0.7,0.8,0.9,NULL,"brNDC");
   leg->SetTextFont(62);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("new_histo_group_Fake_wh3l_wz_13TeV_flagOSSF","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_wz_13TeV_flagOSSF","WW","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_wz_13TeV_flagOSSF","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_wz_13TeV_flagOSSF","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_wz_13TeV_flagOSSF","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_wz_13TeV_flagOSSF","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_wz_13TeV_flagOSSF","Data","EPL");
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
   entry=leg->AddEntry("new_histo_group_Fake_wh3l_wz_13TeV_flagOSSF","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_wz_13TeV_flagOSSF","WW","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_wz_13TeV_flagOSSF","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_wz_13TeV_flagOSSF","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_wz_13TeV_flagOSSF","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_wz_13TeV_flagOSSF","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_wz_13TeV_flagOSSF","Data","EPL");
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
   
   TH1F *hframe_copy9 = new TH1F("hframe_copy9","",1000,0,2);
   hframe_copy9->SetMinimum(0);
   hframe_copy9->SetMaximum(444.6131);
   hframe_copy9->SetDirectory(0);
   hframe_copy9->SetStats(0);
   hframe_copy9->SetLineStyle(0);
   hframe_copy9->SetMarkerStyle(20);
   hframe_copy9->GetXaxis()->SetTitle("flag OSSF");
   hframe_copy9->GetXaxis()->SetNdivisions(506);
   hframe_copy9->GetXaxis()->SetLabelFont(42);
   hframe_copy9->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy9->GetXaxis()->SetLabelSize(0.05);
   hframe_copy9->GetXaxis()->SetTitleSize(0.06);
   hframe_copy9->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy9->GetXaxis()->SetTitleFont(42);
   hframe_copy9->GetYaxis()->SetTitle("Events");
   hframe_copy9->GetYaxis()->SetLabelFont(42);
   hframe_copy9->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy9->GetYaxis()->SetLabelSize(0.05);
   hframe_copy9->GetYaxis()->SetTitleSize(0.06);
   hframe_copy9->GetYaxis()->SetTitleOffset(1.25);
   hframe_copy9->GetYaxis()->SetTitleFont(42);
   hframe_copy9->GetZaxis()->SetLabelFont(42);
   hframe_copy9->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy9->GetZaxis()->SetLabelSize(0.05);
   hframe_copy9->GetZaxis()->SetTitleSize(0.06);
   hframe_copy9->GetZaxis()->SetTitleFont(42);
   hframe_copy9->Draw("sameaxis");
   ccwh3l_wz_13TeV_flagOSSF->Modified();
   ccwh3l_wz_13TeV_flagOSSF->cd();
   ccwh3l_wz_13TeV_flagOSSF->SetSelected(ccwh3l_wz_13TeV_flagOSSF);
}
