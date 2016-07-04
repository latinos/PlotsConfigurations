void c_wh3l_zjets_13TeV_met()
{
//=========Macro generated from canvas: ccwh3l_zjets_13TeV_met/cc
//=========  (Sun Jul  3 13:02:09 2016) by ROOT version6.02/13
   TCanvas *ccwh3l_zjets_13TeV_met = new TCanvas("ccwh3l_zjets_13TeV_met", "cc",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   ccwh3l_zjets_13TeV_met->SetHighLightColor(2);
   ccwh3l_zjets_13TeV_met->Range(8.000001,-0.1585366,208,1.060976);
   ccwh3l_zjets_13TeV_met->SetFillColor(0);
   ccwh3l_zjets_13TeV_met->SetBorderMode(0);
   ccwh3l_zjets_13TeV_met->SetBorderSize(2);
   ccwh3l_zjets_13TeV_met->SetTickx(1);
   ccwh3l_zjets_13TeV_met->SetTicky(1);
   ccwh3l_zjets_13TeV_met->SetLeftMargin(0.16);
   ccwh3l_zjets_13TeV_met->SetRightMargin(0.04);
   ccwh3l_zjets_13TeV_met->SetTopMargin(0.05);
   ccwh3l_zjets_13TeV_met->SetBottomMargin(0.13);
   ccwh3l_zjets_13TeV_met->SetFrameFillStyle(0);
   ccwh3l_zjets_13TeV_met->SetFrameBorderMode(0);
   ccwh3l_zjets_13TeV_met->SetFrameFillStyle(0);
   ccwh3l_zjets_13TeV_met->SetFrameBorderMode(0);
   
   TH1F *hframe1 = new TH1F("hframe1","",1000,40,200);
   hframe1->SetMinimum(0);
   hframe1->SetMaximum(0);
   hframe1->SetDirectory(0);
   hframe1->SetStats(0);
   hframe1->SetLineStyle(0);
   hframe1->SetMarkerStyle(20);
   hframe1->GetXaxis()->SetTitle("pfmet [GeV]");
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
   
   THStack *thsBackground_grouped_wh3l_zjets_13TeV_met = new THStack();
   thsBackground_grouped_wh3l_zjets_13TeV_met->SetName("thsBackground_grouped_wh3l_zjets_13TeV_met");
   thsBackground_grouped_wh3l_zjets_13TeV_met->SetTitle("thsBackground_grouped_wh3l_zjets_13TeV_met");
   
   TH1F *thsBackground_grouped_wh3l_zjets_13TeV_met_stack_1 = new TH1F("thsBackground_grouped_wh3l_zjets_13TeV_met_stack_1","thsBackground_grouped_wh3l_zjets_13TeV_met",40,40,200);
   thsBackground_grouped_wh3l_zjets_13TeV_met_stack_1->SetMinimum(0);
   thsBackground_grouped_wh3l_zjets_13TeV_met_stack_1->SetMaximum(0);
   thsBackground_grouped_wh3l_zjets_13TeV_met_stack_1->SetDirectory(0);
   thsBackground_grouped_wh3l_zjets_13TeV_met_stack_1->SetStats(0);
   thsBackground_grouped_wh3l_zjets_13TeV_met_stack_1->SetLineStyle(0);
   thsBackground_grouped_wh3l_zjets_13TeV_met_stack_1->SetMarkerStyle(20);
   thsBackground_grouped_wh3l_zjets_13TeV_met_stack_1->GetXaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_zjets_13TeV_met_stack_1->GetXaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_zjets_13TeV_met_stack_1->GetXaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_zjets_13TeV_met_stack_1->GetXaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_zjets_13TeV_met_stack_1->GetXaxis()->SetTitleOffset(0.9);
   thsBackground_grouped_wh3l_zjets_13TeV_met_stack_1->GetXaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_zjets_13TeV_met_stack_1->GetYaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_zjets_13TeV_met_stack_1->GetYaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_zjets_13TeV_met_stack_1->GetYaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_zjets_13TeV_met_stack_1->GetYaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_zjets_13TeV_met_stack_1->GetYaxis()->SetTitleOffset(1.25);
   thsBackground_grouped_wh3l_zjets_13TeV_met_stack_1->GetYaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_zjets_13TeV_met_stack_1->GetZaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_zjets_13TeV_met_stack_1->GetZaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_zjets_13TeV_met_stack_1->GetZaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_zjets_13TeV_met_stack_1->GetZaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_zjets_13TeV_met_stack_1->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_zjets_13TeV_met->SetHistogram(thsBackground_grouped_wh3l_zjets_13TeV_met_stack_1);
   
   
   TH1D *new_histo_group_Fake_wh3l_zjets_13TeV_met2 = new TH1D("new_histo_group_Fake_wh3l_zjets_13TeV_met2","histo_Fake",40,40,200);
   new_histo_group_Fake_wh3l_zjets_13TeV_met2->SetBinContent(0,136.0349);
   new_histo_group_Fake_wh3l_zjets_13TeV_met2->SetBinError(0,8.798273);
   new_histo_group_Fake_wh3l_zjets_13TeV_met2->SetEntries(1524);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_zjets_13TeV_met2->SetFillColor(ci);
   new_histo_group_Fake_wh3l_zjets_13TeV_met2->SetFillStyle(3001);

   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_zjets_13TeV_met2->SetLineColor(ci);
   new_histo_group_Fake_wh3l_zjets_13TeV_met2->GetXaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_zjets_13TeV_met2->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_zjets_13TeV_met2->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_zjets_13TeV_met2->GetXaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_zjets_13TeV_met2->GetYaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_zjets_13TeV_met2->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_zjets_13TeV_met2->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_zjets_13TeV_met2->GetYaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_zjets_13TeV_met2->GetZaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_zjets_13TeV_met2->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_zjets_13TeV_met2->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_zjets_13TeV_met2->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_zjets_13TeV_met->Add(new_histo_group_Fake_wh3l_zjets_13TeV_met,"");
   
   TH1D *new_histo_group_WW_wh3l_zjets_13TeV_met3 = new TH1D("new_histo_group_WW_wh3l_zjets_13TeV_met3","histo_WW",40,40,200);
   new_histo_group_WW_wh3l_zjets_13TeV_met3->SetBinContent(0,0.01034371);
   new_histo_group_WW_wh3l_zjets_13TeV_met3->SetBinError(0,0.01034371);
   new_histo_group_WW_wh3l_zjets_13TeV_met3->SetEntries(1);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_zjets_13TeV_met3->SetFillColor(ci);
   new_histo_group_WW_wh3l_zjets_13TeV_met3->SetFillStyle(3001);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_zjets_13TeV_met3->SetLineColor(ci);
   new_histo_group_WW_wh3l_zjets_13TeV_met3->GetXaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_zjets_13TeV_met3->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_zjets_13TeV_met3->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_zjets_13TeV_met3->GetXaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_zjets_13TeV_met3->GetYaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_zjets_13TeV_met3->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_zjets_13TeV_met3->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_zjets_13TeV_met3->GetYaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_zjets_13TeV_met3->GetZaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_zjets_13TeV_met3->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_zjets_13TeV_met3->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_zjets_13TeV_met3->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_zjets_13TeV_met->Add(new_histo_group_WW_wh3l_zjets_13TeV_met,"");
   
   TH1D *new_histo_group_VVV_wh3l_zjets_13TeV_met4 = new TH1D("new_histo_group_VVV_wh3l_zjets_13TeV_met4","histo_VVV",40,40,200);
   new_histo_group_VVV_wh3l_zjets_13TeV_met4->SetBinContent(0,0.2007015);
   new_histo_group_VVV_wh3l_zjets_13TeV_met4->SetBinError(0,0.02053675);
   new_histo_group_VVV_wh3l_zjets_13TeV_met4->SetEntries(193);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_zjets_13TeV_met4->SetFillColor(ci);
   new_histo_group_VVV_wh3l_zjets_13TeV_met4->SetFillStyle(3001);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_zjets_13TeV_met4->SetLineColor(ci);
   new_histo_group_VVV_wh3l_zjets_13TeV_met4->GetXaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_zjets_13TeV_met4->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_zjets_13TeV_met4->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_zjets_13TeV_met4->GetXaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_zjets_13TeV_met4->GetYaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_zjets_13TeV_met4->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_zjets_13TeV_met4->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_zjets_13TeV_met4->GetYaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_zjets_13TeV_met4->GetZaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_zjets_13TeV_met4->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_zjets_13TeV_met4->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_zjets_13TeV_met4->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_zjets_13TeV_met->Add(new_histo_group_VVV_wh3l_zjets_13TeV_met,"");
   
   TH1D *new_histo_group_Vg_wh3l_zjets_13TeV_met5 = new TH1D("new_histo_group_Vg_wh3l_zjets_13TeV_met5","histo_Vg",40,40,200);
   new_histo_group_Vg_wh3l_zjets_13TeV_met5->SetBinContent(0,93.16702);
   new_histo_group_Vg_wh3l_zjets_13TeV_met5->SetBinError(0,3.718423);
   new_histo_group_Vg_wh3l_zjets_13TeV_met5->SetEntries(1250);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_zjets_13TeV_met5->SetFillColor(ci);
   new_histo_group_Vg_wh3l_zjets_13TeV_met5->SetFillStyle(3001);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_zjets_13TeV_met5->SetLineColor(ci);
   new_histo_group_Vg_wh3l_zjets_13TeV_met5->GetXaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_zjets_13TeV_met5->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_zjets_13TeV_met5->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_zjets_13TeV_met5->GetXaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_zjets_13TeV_met5->GetYaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_zjets_13TeV_met5->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_zjets_13TeV_met5->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_zjets_13TeV_met5->GetYaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_zjets_13TeV_met5->GetZaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_zjets_13TeV_met5->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_zjets_13TeV_met5->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_zjets_13TeV_met5->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_zjets_13TeV_met->Add(new_histo_group_Vg_wh3l_zjets_13TeV_met,"");
   
   TH1D *new_histo_group_ZZ_wh3l_zjets_13TeV_met6 = new TH1D("new_histo_group_ZZ_wh3l_zjets_13TeV_met6","histo_ZZ",40,40,200);
   new_histo_group_ZZ_wh3l_zjets_13TeV_met6->SetBinContent(0,22.58258);
   new_histo_group_ZZ_wh3l_zjets_13TeV_met6->SetBinError(0,0.9640078);
   new_histo_group_ZZ_wh3l_zjets_13TeV_met6->SetEntries(604);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_zjets_13TeV_met6->SetFillColor(ci);
   new_histo_group_ZZ_wh3l_zjets_13TeV_met6->SetFillStyle(3001);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_zjets_13TeV_met6->SetLineColor(ci);
   new_histo_group_ZZ_wh3l_zjets_13TeV_met6->GetXaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_zjets_13TeV_met6->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_zjets_13TeV_met6->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_zjets_13TeV_met6->GetXaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_zjets_13TeV_met6->GetYaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_zjets_13TeV_met6->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_zjets_13TeV_met6->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_zjets_13TeV_met6->GetYaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_zjets_13TeV_met6->GetZaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_zjets_13TeV_met6->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_zjets_13TeV_met6->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_zjets_13TeV_met6->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_zjets_13TeV_met->Add(new_histo_group_ZZ_wh3l_zjets_13TeV_met,"");
   
   TH1D *new_histo_group_WZ_wh3l_zjets_13TeV_met7 = new TH1D("new_histo_group_WZ_wh3l_zjets_13TeV_met7","histo_WZ",40,40,200);
   new_histo_group_WZ_wh3l_zjets_13TeV_met7->SetBinContent(0,85.59901);
   new_histo_group_WZ_wh3l_zjets_13TeV_met7->SetBinError(0,0.684582);
   new_histo_group_WZ_wh3l_zjets_13TeV_met7->SetEntries(17146);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_zjets_13TeV_met7->SetFillColor(ci);
   new_histo_group_WZ_wh3l_zjets_13TeV_met7->SetFillStyle(3001);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_zjets_13TeV_met7->SetLineColor(ci);
   new_histo_group_WZ_wh3l_zjets_13TeV_met7->GetXaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_zjets_13TeV_met7->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_zjets_13TeV_met7->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_zjets_13TeV_met7->GetXaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_zjets_13TeV_met7->GetYaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_zjets_13TeV_met7->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_zjets_13TeV_met7->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_zjets_13TeV_met7->GetYaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_zjets_13TeV_met7->GetZaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_zjets_13TeV_met7->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_zjets_13TeV_met7->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_zjets_13TeV_met7->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_zjets_13TeV_met->Add(new_histo_group_WZ_wh3l_zjets_13TeV_met,"");
   
   TH1D *new_histo_group_Higgs_wh3l_zjets_13TeV_met8 = new TH1D("new_histo_group_Higgs_wh3l_zjets_13TeV_met8","histo_H_htt",40,40,200);
   new_histo_group_Higgs_wh3l_zjets_13TeV_met8->SetBinContent(0,0.6671209);
   new_histo_group_Higgs_wh3l_zjets_13TeV_met8->SetBinError(0,0.02874608);
   new_histo_group_Higgs_wh3l_zjets_13TeV_met8->SetEntries(855);
   new_histo_group_Higgs_wh3l_zjets_13TeV_met8->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_zjets_13TeV_met8->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_zjets_13TeV_met8->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_zjets_13TeV_met8->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_zjets_13TeV_met8->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_zjets_13TeV_met8->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_zjets_13TeV_met8->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_zjets_13TeV_met8->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_zjets_13TeV_met8->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_zjets_13TeV_met8->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_zjets_13TeV_met8->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_zjets_13TeV_met8->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_zjets_13TeV_met8->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_zjets_13TeV_met8->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_zjets_13TeV_met8->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_zjets_13TeV_met->Add(new_histo_group_Higgs_wh3l_zjets_13TeV_met,"");
   thsBackground_grouped_wh3l_zjets_13TeV_met->Draw("hist same");
   
   thsSignal_grouped_wh3l_zjets_13TeV_met = new THStack();
   thsSignal_grouped_wh3l_zjets_13TeV_met->SetName("thsSignal_grouped_wh3l_zjets_13TeV_met");
   thsSignal_grouped_wh3l_zjets_13TeV_met->SetTitle("thsSignal_grouped_wh3l_zjets_13TeV_met");
   
   TH1F *thsSignal_grouped_wh3l_zjets_13TeV_met_stack_2 = new TH1F("thsSignal_grouped_wh3l_zjets_13TeV_met_stack_2","thsSignal_grouped_wh3l_zjets_13TeV_met",40,40,200);
   thsSignal_grouped_wh3l_zjets_13TeV_met_stack_2->SetMinimum(0);
   thsSignal_grouped_wh3l_zjets_13TeV_met_stack_2->SetMaximum(0);
   thsSignal_grouped_wh3l_zjets_13TeV_met_stack_2->SetDirectory(0);
   thsSignal_grouped_wh3l_zjets_13TeV_met_stack_2->SetStats(0);
   thsSignal_grouped_wh3l_zjets_13TeV_met_stack_2->SetLineStyle(0);
   thsSignal_grouped_wh3l_zjets_13TeV_met_stack_2->SetMarkerStyle(20);
   thsSignal_grouped_wh3l_zjets_13TeV_met_stack_2->GetXaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_zjets_13TeV_met_stack_2->GetXaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_zjets_13TeV_met_stack_2->GetXaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_zjets_13TeV_met_stack_2->GetXaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_zjets_13TeV_met_stack_2->GetXaxis()->SetTitleOffset(0.9);
   thsSignal_grouped_wh3l_zjets_13TeV_met_stack_2->GetXaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_zjets_13TeV_met_stack_2->GetYaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_zjets_13TeV_met_stack_2->GetYaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_zjets_13TeV_met_stack_2->GetYaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_zjets_13TeV_met_stack_2->GetYaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_zjets_13TeV_met_stack_2->GetYaxis()->SetTitleOffset(1.25);
   thsSignal_grouped_wh3l_zjets_13TeV_met_stack_2->GetYaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_zjets_13TeV_met_stack_2->GetZaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_zjets_13TeV_met_stack_2->GetZaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_zjets_13TeV_met_stack_2->GetZaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_zjets_13TeV_met_stack_2->GetZaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_zjets_13TeV_met_stack_2->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_zjets_13TeV_met->SetHistogram(thsSignal_grouped_wh3l_zjets_13TeV_met_stack_2);
   
   
   TH1D *new_histo_group_Higgs_wh3l_zjets_13TeV_met9 = new TH1D("new_histo_group_Higgs_wh3l_zjets_13TeV_met9","histo_H_htt",40,40,200);
   new_histo_group_Higgs_wh3l_zjets_13TeV_met9->SetBinContent(0,0.6671209);
   new_histo_group_Higgs_wh3l_zjets_13TeV_met9->SetBinError(0,0.02874608);
   new_histo_group_Higgs_wh3l_zjets_13TeV_met9->SetEntries(855);
   new_histo_group_Higgs_wh3l_zjets_13TeV_met9->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_zjets_13TeV_met9->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_zjets_13TeV_met9->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_zjets_13TeV_met9->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_zjets_13TeV_met9->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_zjets_13TeV_met9->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_zjets_13TeV_met9->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_zjets_13TeV_met9->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_zjets_13TeV_met9->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_zjets_13TeV_met9->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_zjets_13TeV_met9->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_zjets_13TeV_met9->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_zjets_13TeV_met9->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_zjets_13TeV_met9->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_zjets_13TeV_met9->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_zjets_13TeV_met->Add(new_histo_group_Higgs_wh3l_zjets_13TeV_met,"");
   thsSignal_grouped_wh3l_zjets_13TeV_met->Draw("hist same noclear");
   
   Double_t _fx3001[40] = {
   42,
   46,
   50,
   54,
   58,
   62,
   66,
   70,
   74,
   78,
   82,
   86,
   90,
   94,
   98,
   102,
   106,
   110,
   114,
   118,
   122,
   126,
   130,
   134,
   138,
   142,
   146,
   150,
   154,
   158,
   162,
   166,
   170,
   174,
   178,
   182,
   186,
   190,
   194,
   198};
   Double_t _fy3001[40] = {
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
   Double_t _felx3001[40] = {
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2};
   Double_t _fely3001[40] = {
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
   Double_t _fehx3001[40] = {
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2};
   Double_t _fehy3001[40] = {
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
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(40,_fx3001,_fy3001,_felx3001,_fehx3001,_fely3001,_fehy3001);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(12);
   grae->SetFillStyle(3004);
   grae->SetLineColor(12);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3001 = new TH1F("Graph_Graph3001","",100,24,216);
   Graph_Graph3001->SetMinimum(0);
   Graph_Graph3001->SetMaximum(1.1);
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
   
   Double_t _fx3002[40] = {
   42,
   46,
   50,
   54,
   58,
   62,
   66,
   70,
   74,
   78,
   82,
   86,
   90,
   94,
   98,
   102,
   106,
   110,
   114,
   118,
   122,
   126,
   130,
   134,
   138,
   142,
   146,
   150,
   154,
   158,
   162,
   166,
   170,
   174,
   178,
   182,
   186,
   190,
   194,
   198};
   Double_t _fy3002[40] = {
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
   Double_t _felx3002[40] = {
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2};
   Double_t _fely3002[40] = {
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
   Double_t _fehx3002[40] = {
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2};
   Double_t _fehy3002[40] = {
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
   grae = new TGraphAsymmErrors(40,_fx3002,_fy3002,_felx3002,_fehx3002,_fely3002,_fehy3002);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(1);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3002 = new TH1F("Graph_Graph3002","",100,24,216);
   Graph_Graph3002->SetMinimum(0);
   Graph_Graph3002->SetMaximum(1.262698);
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
   TLegendEntry *entry=leg->AddEntry("new_histo_group_Fake_wh3l_zjets_13TeV_met","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_zjets_13TeV_met","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_zjets_13TeV_met","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_zjets_13TeV_met","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_zjets_13TeV_met","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_zjets_13TeV_met","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_zjets_13TeV_met","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_zjets_13TeV_met","Data","EPL");
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
   entry=leg->AddEntry("new_histo_group_Fake_wh3l_zjets_13TeV_met","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_zjets_13TeV_met","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_zjets_13TeV_met","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_zjets_13TeV_met","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_zjets_13TeV_met","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_zjets_13TeV_met","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_zjets_13TeV_met","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_zjets_13TeV_met","Data","EPL");
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
   
   TH1F *hframe_copy10 = new TH1F("hframe_copy10","",1000,40,200);
   hframe_copy10->SetMinimum(0);
   hframe_copy10->SetMaximum(0);
   hframe_copy10->SetDirectory(0);
   hframe_copy10->SetStats(0);
   hframe_copy10->SetLineStyle(0);
   hframe_copy10->SetMarkerStyle(20);
   hframe_copy10->GetXaxis()->SetTitle("pfmet [GeV]");
   hframe_copy10->GetXaxis()->SetNdivisions(506);
   hframe_copy10->GetXaxis()->SetLabelFont(42);
   hframe_copy10->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy10->GetXaxis()->SetLabelSize(0.05);
   hframe_copy10->GetXaxis()->SetTitleSize(0.06);
   hframe_copy10->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy10->GetXaxis()->SetTitleFont(42);
   hframe_copy10->GetYaxis()->SetTitle("Events");
   hframe_copy10->GetYaxis()->SetLabelFont(42);
   hframe_copy10->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy10->GetYaxis()->SetLabelSize(0.05);
   hframe_copy10->GetYaxis()->SetTitleSize(0.06);
   hframe_copy10->GetYaxis()->SetTitleOffset(1.25);
   hframe_copy10->GetYaxis()->SetTitleFont(42);
   hframe_copy10->GetZaxis()->SetLabelFont(42);
   hframe_copy10->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy10->GetZaxis()->SetLabelSize(0.05);
   hframe_copy10->GetZaxis()->SetTitleSize(0.06);
   hframe_copy10->GetZaxis()->SetTitleFont(42);
   hframe_copy10->Draw("sameaxis");
   ccwh3l_zjets_13TeV_met->Modified();
   ccwh3l_zjets_13TeV_met->cd();
   ccwh3l_zjets_13TeV_met->SetSelected(ccwh3l_zjets_13TeV_met);
}
