void c_wh3l_Pre_13TeV_nbjet_3l()
{
//=========Macro generated from canvas: ccwh3l_Pre_13TeV_nbjet_3l/cc
//=========  (Sun Jul  3 01:22:06 2016) by ROOT version6.02/13
   TCanvas *ccwh3l_Pre_13TeV_nbjet_3l = new TCanvas("ccwh3l_Pre_13TeV_nbjet_3l", "cc",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   ccwh3l_Pre_13TeV_nbjet_3l->SetHighLightColor(2);
   ccwh3l_Pre_13TeV_nbjet_3l->Range(-1,-9.430284,5.25,63.11036);
   ccwh3l_Pre_13TeV_nbjet_3l->SetFillColor(0);
   ccwh3l_Pre_13TeV_nbjet_3l->SetBorderMode(0);
   ccwh3l_Pre_13TeV_nbjet_3l->SetBorderSize(2);
   ccwh3l_Pre_13TeV_nbjet_3l->SetTickx(1);
   ccwh3l_Pre_13TeV_nbjet_3l->SetTicky(1);
   ccwh3l_Pre_13TeV_nbjet_3l->SetLeftMargin(0.16);
   ccwh3l_Pre_13TeV_nbjet_3l->SetRightMargin(0.04);
   ccwh3l_Pre_13TeV_nbjet_3l->SetTopMargin(0.05);
   ccwh3l_Pre_13TeV_nbjet_3l->SetBottomMargin(0.13);
   ccwh3l_Pre_13TeV_nbjet_3l->SetFrameFillStyle(0);
   ccwh3l_Pre_13TeV_nbjet_3l->SetFrameBorderMode(0);
   ccwh3l_Pre_13TeV_nbjet_3l->SetFrameFillStyle(0);
   ccwh3l_Pre_13TeV_nbjet_3l->SetFrameBorderMode(0);
   
   TH1F *hframe341 = new TH1F("hframe341","",1000,0,5);
   hframe341->SetMinimum(0);
   hframe341->SetMaximum(59.48333);
   hframe341->SetDirectory(0);
   hframe341->SetStats(0);
   hframe341->SetLineStyle(0);
   hframe341->SetMarkerStyle(20);
   hframe341->GetXaxis()->SetTitle("N_bJets");
   hframe341->GetXaxis()->SetNdivisions(506);
   hframe341->GetXaxis()->SetLabelFont(42);
   hframe341->GetXaxis()->SetLabelOffset(0.007);
   hframe341->GetXaxis()->SetLabelSize(0.05);
   hframe341->GetXaxis()->SetTitleSize(0.06);
   hframe341->GetXaxis()->SetTitleOffset(0.9);
   hframe341->GetXaxis()->SetTitleFont(42);
   hframe341->GetYaxis()->SetTitle("Events");
   hframe341->GetYaxis()->SetLabelFont(42);
   hframe341->GetYaxis()->SetLabelOffset(0.007);
   hframe341->GetYaxis()->SetLabelSize(0.05);
   hframe341->GetYaxis()->SetTitleSize(0.06);
   hframe341->GetYaxis()->SetTitleOffset(1.25);
   hframe341->GetYaxis()->SetTitleFont(42);
   hframe341->GetZaxis()->SetLabelFont(42);
   hframe341->GetZaxis()->SetLabelOffset(0.007);
   hframe341->GetZaxis()->SetLabelSize(0.05);
   hframe341->GetZaxis()->SetTitleSize(0.06);
   hframe341->GetZaxis()->SetTitleFont(42);
   hframe341->Draw(" ");
   
   THStack *thsBackground_grouped_wh3l_Pre_13TeV_nbjet_3l = new THStack();
   thsBackground_grouped_wh3l_Pre_13TeV_nbjet_3l->SetName("thsBackground_grouped_wh3l_Pre_13TeV_nbjet_3l");
   thsBackground_grouped_wh3l_Pre_13TeV_nbjet_3l->SetTitle("thsBackground_grouped_wh3l_Pre_13TeV_nbjet_3l");
   
   TH1F *thsBackground_grouped_wh3l_Pre_13TeV_nbjet_3l_stack_69 = new TH1F("thsBackground_grouped_wh3l_Pre_13TeV_nbjet_3l_stack_69","thsBackground_grouped_wh3l_Pre_13TeV_nbjet_3l",5,0,5);
   thsBackground_grouped_wh3l_Pre_13TeV_nbjet_3l_stack_69->SetMinimum(-0.102791);
   thsBackground_grouped_wh3l_Pre_13TeV_nbjet_3l_stack_69->SetMaximum(25.18342);
   thsBackground_grouped_wh3l_Pre_13TeV_nbjet_3l_stack_69->SetDirectory(0);
   thsBackground_grouped_wh3l_Pre_13TeV_nbjet_3l_stack_69->SetStats(0);
   thsBackground_grouped_wh3l_Pre_13TeV_nbjet_3l_stack_69->SetLineStyle(0);
   thsBackground_grouped_wh3l_Pre_13TeV_nbjet_3l_stack_69->SetMarkerStyle(20);
   thsBackground_grouped_wh3l_Pre_13TeV_nbjet_3l_stack_69->GetXaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_Pre_13TeV_nbjet_3l_stack_69->GetXaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_Pre_13TeV_nbjet_3l_stack_69->GetXaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_Pre_13TeV_nbjet_3l_stack_69->GetXaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_Pre_13TeV_nbjet_3l_stack_69->GetXaxis()->SetTitleOffset(0.9);
   thsBackground_grouped_wh3l_Pre_13TeV_nbjet_3l_stack_69->GetXaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_Pre_13TeV_nbjet_3l_stack_69->GetYaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_Pre_13TeV_nbjet_3l_stack_69->GetYaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_Pre_13TeV_nbjet_3l_stack_69->GetYaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_Pre_13TeV_nbjet_3l_stack_69->GetYaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_Pre_13TeV_nbjet_3l_stack_69->GetYaxis()->SetTitleOffset(1.25);
   thsBackground_grouped_wh3l_Pre_13TeV_nbjet_3l_stack_69->GetYaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_Pre_13TeV_nbjet_3l_stack_69->GetZaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_Pre_13TeV_nbjet_3l_stack_69->GetZaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_Pre_13TeV_nbjet_3l_stack_69->GetZaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_Pre_13TeV_nbjet_3l_stack_69->GetZaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_Pre_13TeV_nbjet_3l_stack_69->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_Pre_13TeV_nbjet_3l->SetHistogram(thsBackground_grouped_wh3l_Pre_13TeV_nbjet_3l_stack_69);
   
   
   TH1D *new_histo_group_Fake_wh3l_Pre_13TeV_nbjet_3l342 = new TH1D("new_histo_group_Fake_wh3l_Pre_13TeV_nbjet_3l342","histo_Fake",5,0,5);
   new_histo_group_Fake_wh3l_Pre_13TeV_nbjet_3l342->SetBinContent(1,20.88884);
   new_histo_group_Fake_wh3l_Pre_13TeV_nbjet_3l342->SetBinContent(2,1.271059);
   new_histo_group_Fake_wh3l_Pre_13TeV_nbjet_3l342->SetBinError(1,3.095366);
   new_histo_group_Fake_wh3l_Pre_13TeV_nbjet_3l342->SetBinError(2,0.7735264);
   new_histo_group_Fake_wh3l_Pre_13TeV_nbjet_3l342->SetEntries(191);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_Pre_13TeV_nbjet_3l342->SetFillColor(ci);
   new_histo_group_Fake_wh3l_Pre_13TeV_nbjet_3l342->SetFillStyle(3001);

   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_Pre_13TeV_nbjet_3l342->SetLineColor(ci);
   new_histo_group_Fake_wh3l_Pre_13TeV_nbjet_3l342->GetXaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_Pre_13TeV_nbjet_3l342->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_Pre_13TeV_nbjet_3l342->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_Pre_13TeV_nbjet_3l342->GetXaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_Pre_13TeV_nbjet_3l342->GetYaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_Pre_13TeV_nbjet_3l342->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_Pre_13TeV_nbjet_3l342->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_Pre_13TeV_nbjet_3l342->GetYaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_Pre_13TeV_nbjet_3l342->GetZaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_Pre_13TeV_nbjet_3l342->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_Pre_13TeV_nbjet_3l342->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_Pre_13TeV_nbjet_3l342->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_Pre_13TeV_nbjet_3l->Add(new_histo_group_Fake_wh3l_Pre_13TeV_nbjet_3l,"");
   
   TH1D *new_histo_group_WW_wh3l_Pre_13TeV_nbjet_3l343 = new TH1D("new_histo_group_WW_wh3l_Pre_13TeV_nbjet_3l343","histo_WW",5,0,5);
   new_histo_group_WW_wh3l_Pre_13TeV_nbjet_3l343->SetBinContent(1,0.1795415);
   new_histo_group_WW_wh3l_Pre_13TeV_nbjet_3l343->SetBinContent(2,0.01595104);
   new_histo_group_WW_wh3l_Pre_13TeV_nbjet_3l343->SetBinError(1,0.05252664);
   new_histo_group_WW_wh3l_Pre_13TeV_nbjet_3l343->SetBinError(2,0.01595104);
   new_histo_group_WW_wh3l_Pre_13TeV_nbjet_3l343->SetEntries(14);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_Pre_13TeV_nbjet_3l343->SetFillColor(ci);
   new_histo_group_WW_wh3l_Pre_13TeV_nbjet_3l343->SetFillStyle(3001);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_Pre_13TeV_nbjet_3l343->SetLineColor(ci);
   new_histo_group_WW_wh3l_Pre_13TeV_nbjet_3l343->GetXaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_Pre_13TeV_nbjet_3l343->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_Pre_13TeV_nbjet_3l343->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_Pre_13TeV_nbjet_3l343->GetXaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_Pre_13TeV_nbjet_3l343->GetYaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_Pre_13TeV_nbjet_3l343->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_Pre_13TeV_nbjet_3l343->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_Pre_13TeV_nbjet_3l343->GetYaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_Pre_13TeV_nbjet_3l343->GetZaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_Pre_13TeV_nbjet_3l343->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_Pre_13TeV_nbjet_3l343->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_Pre_13TeV_nbjet_3l343->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_Pre_13TeV_nbjet_3l->Add(new_histo_group_WW_wh3l_Pre_13TeV_nbjet_3l,"");
   
   TH1D *new_histo_group_VVV_wh3l_Pre_13TeV_nbjet_3l344 = new TH1D("new_histo_group_VVV_wh3l_Pre_13TeV_nbjet_3l344","histo_VVV",5,0,5);
   new_histo_group_VVV_wh3l_Pre_13TeV_nbjet_3l344->SetBinContent(1,0.3674614);
   new_histo_group_VVV_wh3l_Pre_13TeV_nbjet_3l344->SetBinContent(2,0.0006144888);
   new_histo_group_VVV_wh3l_Pre_13TeV_nbjet_3l344->SetBinError(1,0.03145183);
   new_histo_group_VVV_wh3l_Pre_13TeV_nbjet_3l344->SetBinError(2,0.0006144888);
   new_histo_group_VVV_wh3l_Pre_13TeV_nbjet_3l344->SetEntries(227);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_Pre_13TeV_nbjet_3l344->SetFillColor(ci);
   new_histo_group_VVV_wh3l_Pre_13TeV_nbjet_3l344->SetFillStyle(3001);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_Pre_13TeV_nbjet_3l344->SetLineColor(ci);
   new_histo_group_VVV_wh3l_Pre_13TeV_nbjet_3l344->GetXaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_Pre_13TeV_nbjet_3l344->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_Pre_13TeV_nbjet_3l344->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_Pre_13TeV_nbjet_3l344->GetXaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_Pre_13TeV_nbjet_3l344->GetYaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_Pre_13TeV_nbjet_3l344->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_Pre_13TeV_nbjet_3l344->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_Pre_13TeV_nbjet_3l344->GetYaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_Pre_13TeV_nbjet_3l344->GetZaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_Pre_13TeV_nbjet_3l344->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_Pre_13TeV_nbjet_3l344->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_Pre_13TeV_nbjet_3l344->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_Pre_13TeV_nbjet_3l->Add(new_histo_group_VVV_wh3l_Pre_13TeV_nbjet_3l,"");
   
   TH1D *new_histo_group_Vg_wh3l_Pre_13TeV_nbjet_3l345 = new TH1D("new_histo_group_Vg_wh3l_Pre_13TeV_nbjet_3l345","histo_Vg",5,0,5);
   new_histo_group_Vg_wh3l_Pre_13TeV_nbjet_3l345->SetBinContent(1,0.1998786);
   new_histo_group_Vg_wh3l_Pre_13TeV_nbjet_3l345->SetBinError(1,0.3026696);
   new_histo_group_Vg_wh3l_Pre_13TeV_nbjet_3l345->SetEntries(10);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_Pre_13TeV_nbjet_3l345->SetFillColor(ci);
   new_histo_group_Vg_wh3l_Pre_13TeV_nbjet_3l345->SetFillStyle(3001);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_Pre_13TeV_nbjet_3l345->SetLineColor(ci);
   new_histo_group_Vg_wh3l_Pre_13TeV_nbjet_3l345->GetXaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_Pre_13TeV_nbjet_3l345->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_Pre_13TeV_nbjet_3l345->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_Pre_13TeV_nbjet_3l345->GetXaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_Pre_13TeV_nbjet_3l345->GetYaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_Pre_13TeV_nbjet_3l345->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_Pre_13TeV_nbjet_3l345->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_Pre_13TeV_nbjet_3l345->GetYaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_Pre_13TeV_nbjet_3l345->GetZaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_Pre_13TeV_nbjet_3l345->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_Pre_13TeV_nbjet_3l345->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_Pre_13TeV_nbjet_3l345->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_Pre_13TeV_nbjet_3l->Add(new_histo_group_Vg_wh3l_Pre_13TeV_nbjet_3l,"");
   
   TH1D *new_histo_group_ZZ_wh3l_Pre_13TeV_nbjet_3l346 = new TH1D("new_histo_group_ZZ_wh3l_Pre_13TeV_nbjet_3l346","histo_ZZ",5,0,5);
   new_histo_group_ZZ_wh3l_Pre_13TeV_nbjet_3l346->SetBinContent(1,0.1653816);
   new_histo_group_ZZ_wh3l_Pre_13TeV_nbjet_3l346->SetBinError(1,0.08319056);
   new_histo_group_ZZ_wh3l_Pre_13TeV_nbjet_3l346->SetEntries(4);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_Pre_13TeV_nbjet_3l346->SetFillColor(ci);
   new_histo_group_ZZ_wh3l_Pre_13TeV_nbjet_3l346->SetFillStyle(3001);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_Pre_13TeV_nbjet_3l346->SetLineColor(ci);
   new_histo_group_ZZ_wh3l_Pre_13TeV_nbjet_3l346->GetXaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_Pre_13TeV_nbjet_3l346->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_Pre_13TeV_nbjet_3l346->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_Pre_13TeV_nbjet_3l346->GetXaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_Pre_13TeV_nbjet_3l346->GetYaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_Pre_13TeV_nbjet_3l346->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_Pre_13TeV_nbjet_3l346->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_Pre_13TeV_nbjet_3l346->GetYaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_Pre_13TeV_nbjet_3l346->GetZaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_Pre_13TeV_nbjet_3l346->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_Pre_13TeV_nbjet_3l346->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_Pre_13TeV_nbjet_3l346->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_Pre_13TeV_nbjet_3l->Add(new_histo_group_ZZ_wh3l_Pre_13TeV_nbjet_3l,"");
   
   TH1D *new_histo_group_WZ_wh3l_Pre_13TeV_nbjet_3l347 = new TH1D("new_histo_group_WZ_wh3l_Pre_13TeV_nbjet_3l347","histo_WZ",5,0,5);
   new_histo_group_WZ_wh3l_Pre_13TeV_nbjet_3l347->SetBinContent(1,1.494993);
   new_histo_group_WZ_wh3l_Pre_13TeV_nbjet_3l347->SetBinContent(2,2.84582e-05);
   new_histo_group_WZ_wh3l_Pre_13TeV_nbjet_3l347->SetBinError(1,0.09046657);
   new_histo_group_WZ_wh3l_Pre_13TeV_nbjet_3l347->SetBinError(2,2.84582e-05);
   new_histo_group_WZ_wh3l_Pre_13TeV_nbjet_3l347->SetEntries(305);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_Pre_13TeV_nbjet_3l347->SetFillColor(ci);
   new_histo_group_WZ_wh3l_Pre_13TeV_nbjet_3l347->SetFillStyle(3001);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_Pre_13TeV_nbjet_3l347->SetLineColor(ci);
   new_histo_group_WZ_wh3l_Pre_13TeV_nbjet_3l347->GetXaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_Pre_13TeV_nbjet_3l347->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_Pre_13TeV_nbjet_3l347->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_Pre_13TeV_nbjet_3l347->GetXaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_Pre_13TeV_nbjet_3l347->GetYaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_Pre_13TeV_nbjet_3l347->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_Pre_13TeV_nbjet_3l347->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_Pre_13TeV_nbjet_3l347->GetYaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_Pre_13TeV_nbjet_3l347->GetZaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_Pre_13TeV_nbjet_3l347->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_Pre_13TeV_nbjet_3l347->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_Pre_13TeV_nbjet_3l347->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_Pre_13TeV_nbjet_3l->Add(new_histo_group_WZ_wh3l_Pre_13TeV_nbjet_3l,"");
   
   TH1D *new_histo_group_Higgs_wh3l_Pre_13TeV_nbjet_3l348 = new TH1D("new_histo_group_Higgs_wh3l_Pre_13TeV_nbjet_3l348","histo_H_htt",5,0,5);
   new_histo_group_Higgs_wh3l_Pre_13TeV_nbjet_3l348->SetBinContent(1,0.4972331);
   new_histo_group_Higgs_wh3l_Pre_13TeV_nbjet_3l348->SetBinContent(2,0.002807149);
   new_histo_group_Higgs_wh3l_Pre_13TeV_nbjet_3l348->SetBinError(1,0.02301807);
   new_histo_group_Higgs_wh3l_Pre_13TeV_nbjet_3l348->SetBinError(2,0.001604544);
   new_histo_group_Higgs_wh3l_Pre_13TeV_nbjet_3l348->SetEntries(916);
   new_histo_group_Higgs_wh3l_Pre_13TeV_nbjet_3l348->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_Pre_13TeV_nbjet_3l348->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_Pre_13TeV_nbjet_3l348->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_Pre_13TeV_nbjet_3l348->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_Pre_13TeV_nbjet_3l348->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_Pre_13TeV_nbjet_3l348->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_Pre_13TeV_nbjet_3l348->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_Pre_13TeV_nbjet_3l348->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_Pre_13TeV_nbjet_3l348->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_Pre_13TeV_nbjet_3l348->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_Pre_13TeV_nbjet_3l348->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_Pre_13TeV_nbjet_3l348->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_Pre_13TeV_nbjet_3l348->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_Pre_13TeV_nbjet_3l348->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_Pre_13TeV_nbjet_3l348->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_Pre_13TeV_nbjet_3l->Add(new_histo_group_Higgs_wh3l_Pre_13TeV_nbjet_3l,"");
   thsBackground_grouped_wh3l_Pre_13TeV_nbjet_3l->Draw("hist same");
   
   thsSignal_grouped_wh3l_Pre_13TeV_nbjet_3l = new THStack();
   thsSignal_grouped_wh3l_Pre_13TeV_nbjet_3l->SetName("thsSignal_grouped_wh3l_Pre_13TeV_nbjet_3l");
   thsSignal_grouped_wh3l_Pre_13TeV_nbjet_3l->SetTitle("thsSignal_grouped_wh3l_Pre_13TeV_nbjet_3l");
   
   TH1F *thsSignal_grouped_wh3l_Pre_13TeV_nbjet_3l_stack_70 = new TH1F("thsSignal_grouped_wh3l_Pre_13TeV_nbjet_3l_stack_70","thsSignal_grouped_wh3l_Pre_13TeV_nbjet_3l",5,0,5);
   thsSignal_grouped_wh3l_Pre_13TeV_nbjet_3l_stack_70->SetMinimum(0);
   thsSignal_grouped_wh3l_Pre_13TeV_nbjet_3l_stack_70->SetMaximum(0.5462637);
   thsSignal_grouped_wh3l_Pre_13TeV_nbjet_3l_stack_70->SetDirectory(0);
   thsSignal_grouped_wh3l_Pre_13TeV_nbjet_3l_stack_70->SetStats(0);
   thsSignal_grouped_wh3l_Pre_13TeV_nbjet_3l_stack_70->SetLineStyle(0);
   thsSignal_grouped_wh3l_Pre_13TeV_nbjet_3l_stack_70->SetMarkerStyle(20);
   thsSignal_grouped_wh3l_Pre_13TeV_nbjet_3l_stack_70->GetXaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_Pre_13TeV_nbjet_3l_stack_70->GetXaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_Pre_13TeV_nbjet_3l_stack_70->GetXaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_Pre_13TeV_nbjet_3l_stack_70->GetXaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_Pre_13TeV_nbjet_3l_stack_70->GetXaxis()->SetTitleOffset(0.9);
   thsSignal_grouped_wh3l_Pre_13TeV_nbjet_3l_stack_70->GetXaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_Pre_13TeV_nbjet_3l_stack_70->GetYaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_Pre_13TeV_nbjet_3l_stack_70->GetYaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_Pre_13TeV_nbjet_3l_stack_70->GetYaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_Pre_13TeV_nbjet_3l_stack_70->GetYaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_Pre_13TeV_nbjet_3l_stack_70->GetYaxis()->SetTitleOffset(1.25);
   thsSignal_grouped_wh3l_Pre_13TeV_nbjet_3l_stack_70->GetYaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_Pre_13TeV_nbjet_3l_stack_70->GetZaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_Pre_13TeV_nbjet_3l_stack_70->GetZaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_Pre_13TeV_nbjet_3l_stack_70->GetZaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_Pre_13TeV_nbjet_3l_stack_70->GetZaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_Pre_13TeV_nbjet_3l_stack_70->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_Pre_13TeV_nbjet_3l->SetHistogram(thsSignal_grouped_wh3l_Pre_13TeV_nbjet_3l_stack_70);
   
   
   TH1D *new_histo_group_Higgs_wh3l_Pre_13TeV_nbjet_3l349 = new TH1D("new_histo_group_Higgs_wh3l_Pre_13TeV_nbjet_3l349","histo_H_htt",5,0,5);
   new_histo_group_Higgs_wh3l_Pre_13TeV_nbjet_3l349->SetBinContent(1,0.4972331);
   new_histo_group_Higgs_wh3l_Pre_13TeV_nbjet_3l349->SetBinContent(2,0.002807149);
   new_histo_group_Higgs_wh3l_Pre_13TeV_nbjet_3l349->SetBinError(1,0.02301807);
   new_histo_group_Higgs_wh3l_Pre_13TeV_nbjet_3l349->SetBinError(2,0.001604544);
   new_histo_group_Higgs_wh3l_Pre_13TeV_nbjet_3l349->SetEntries(916);
   new_histo_group_Higgs_wh3l_Pre_13TeV_nbjet_3l349->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_Pre_13TeV_nbjet_3l349->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_Pre_13TeV_nbjet_3l349->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_Pre_13TeV_nbjet_3l349->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_Pre_13TeV_nbjet_3l349->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_Pre_13TeV_nbjet_3l349->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_Pre_13TeV_nbjet_3l349->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_Pre_13TeV_nbjet_3l349->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_Pre_13TeV_nbjet_3l349->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_Pre_13TeV_nbjet_3l349->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_Pre_13TeV_nbjet_3l349->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_Pre_13TeV_nbjet_3l349->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_Pre_13TeV_nbjet_3l349->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_Pre_13TeV_nbjet_3l349->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_Pre_13TeV_nbjet_3l349->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_Pre_13TeV_nbjet_3l->Add(new_histo_group_Higgs_wh3l_Pre_13TeV_nbjet_3l,"");
   thsSignal_grouped_wh3l_Pre_13TeV_nbjet_3l->Draw("hist same noclear");
   
   Double_t _fx3069[5] = {
   0.5,
   1.5,
   2.5,
   3.5,
   4.5};
   Double_t _fy3069[5] = {
   23.2961,
   1.287653,
   0,
   0,
   0};
   Double_t _felx3069[5] = {
   0.5,
   0.5,
   0.5,
   0.5,
   0.5};
   Double_t _fely3069[5] = {
   8.137036,
   0.9067526,
   0,
   0,
   0};
   Double_t _fehx3069[5] = {
   0.5,
   0.5,
   0.5,
   0.5,
   0.5};
   Double_t _fehy3069[5] = {
   8.182345,
   0.9067527,
   0,
   0,
   0};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(5,_fx3069,_fy3069,_felx3069,_fehx3069,_fely3069,_fehy3069);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(12);
   grae->SetFillStyle(3004);
   grae->SetLineColor(12);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3069 = new TH1F("Graph_Graph3069","",100,0,5.5);
   Graph_Graph3069->SetMinimum(0);
   Graph_Graph3069->SetMaximum(34.62629);
   Graph_Graph3069->SetDirectory(0);
   Graph_Graph3069->SetStats(0);
   Graph_Graph3069->SetLineStyle(0);
   Graph_Graph3069->SetMarkerStyle(20);
   Graph_Graph3069->GetXaxis()->SetLabelFont(42);
   Graph_Graph3069->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3069->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3069->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3069->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3069->GetXaxis()->SetTitleFont(42);
   Graph_Graph3069->GetYaxis()->SetLabelFont(42);
   Graph_Graph3069->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3069->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3069->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3069->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3069->GetYaxis()->SetTitleFont(42);
   Graph_Graph3069->GetZaxis()->SetLabelFont(42);
   Graph_Graph3069->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3069->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3069->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3069->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3069);
   
   grae->Draw("2");
   
   Double_t _fx3070[5] = {
   0.5,
   1.5,
   2.5,
   3.5,
   4.5};
   Double_t _fy3070[5] = {
   14,
   0,
   0,
   0,
   0};
   Double_t _felx3070[5] = {
   0.5,
   0.5,
   0.5,
   0.5,
   0.5};
   Double_t _fely3070[5] = {
   3.696567,
   0,
   0,
   0,
   0};
   Double_t _fehx3070[5] = {
   0.5,
   0.5,
   0.5,
   0.5,
   0.5};
   Double_t _fehy3070[5] = {
   4.830479,
   1.147908,
   1.147908,
   1.147908,
   1.147908};
   grae = new TGraphAsymmErrors(5,_fx3070,_fy3070,_felx3070,_fehx3070,_fely3070,_fehy3070);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(1);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3070 = new TH1F("Graph_Graph3070","",100,0,5.5);
   Graph_Graph3070->SetMinimum(0);
   Graph_Graph3070->SetMaximum(20.71353);
   Graph_Graph3070->SetDirectory(0);
   Graph_Graph3070->SetStats(0);
   Graph_Graph3070->SetLineStyle(0);
   Graph_Graph3070->SetMarkerStyle(20);
   Graph_Graph3070->GetXaxis()->SetLabelFont(42);
   Graph_Graph3070->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3070->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3070->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3070->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3070->GetXaxis()->SetTitleFont(42);
   Graph_Graph3070->GetYaxis()->SetLabelFont(42);
   Graph_Graph3070->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3070->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3070->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3070->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3070->GetYaxis()->SetTitleFont(42);
   Graph_Graph3070->GetZaxis()->SetLabelFont(42);
   Graph_Graph3070->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3070->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3070->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3070->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3070);
   
   grae->Draw("p0");
   
   TLegend *leg = new TLegend(0.2,0.7,0.8,0.9,NULL,"brNDC");
   leg->SetTextFont(62);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("new_histo_group_Fake_wh3l_Pre_13TeV_nbjet_3l","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_Pre_13TeV_nbjet_3l","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_Pre_13TeV_nbjet_3l","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_Pre_13TeV_nbjet_3l","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_Pre_13TeV_nbjet_3l","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_Pre_13TeV_nbjet_3l","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_Pre_13TeV_nbjet_3l","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_Pre_13TeV_nbjet_3l","Data","EPL");
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
   entry=leg->AddEntry("new_histo_group_Fake_wh3l_Pre_13TeV_nbjet_3l","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_Pre_13TeV_nbjet_3l","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_Pre_13TeV_nbjet_3l","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_Pre_13TeV_nbjet_3l","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_Pre_13TeV_nbjet_3l","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_Pre_13TeV_nbjet_3l","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_Pre_13TeV_nbjet_3l","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_Pre_13TeV_nbjet_3l","Data","EPL");
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
   
   TH1F *hframe_copy350 = new TH1F("hframe_copy350","",1000,0,5);
   hframe_copy350->SetMinimum(0);
   hframe_copy350->SetMaximum(59.48333);
   hframe_copy350->SetDirectory(0);
   hframe_copy350->SetStats(0);
   hframe_copy350->SetLineStyle(0);
   hframe_copy350->SetMarkerStyle(20);
   hframe_copy350->GetXaxis()->SetTitle("N_bJets");
   hframe_copy350->GetXaxis()->SetNdivisions(506);
   hframe_copy350->GetXaxis()->SetLabelFont(42);
   hframe_copy350->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy350->GetXaxis()->SetLabelSize(0.05);
   hframe_copy350->GetXaxis()->SetTitleSize(0.06);
   hframe_copy350->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy350->GetXaxis()->SetTitleFont(42);
   hframe_copy350->GetYaxis()->SetTitle("Events");
   hframe_copy350->GetYaxis()->SetLabelFont(42);
   hframe_copy350->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy350->GetYaxis()->SetLabelSize(0.05);
   hframe_copy350->GetYaxis()->SetTitleSize(0.06);
   hframe_copy350->GetYaxis()->SetTitleOffset(1.25);
   hframe_copy350->GetYaxis()->SetTitleFont(42);
   hframe_copy350->GetZaxis()->SetLabelFont(42);
   hframe_copy350->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy350->GetZaxis()->SetLabelSize(0.05);
   hframe_copy350->GetZaxis()->SetTitleSize(0.06);
   hframe_copy350->GetZaxis()->SetTitleFont(42);
   hframe_copy350->Draw("sameaxis");
   ccwh3l_Pre_13TeV_nbjet_3l->Modified();
   ccwh3l_Pre_13TeV_nbjet_3l->cd();
   ccwh3l_Pre_13TeV_nbjet_3l->SetSelected(ccwh3l_Pre_13TeV_nbjet_3l);
}
