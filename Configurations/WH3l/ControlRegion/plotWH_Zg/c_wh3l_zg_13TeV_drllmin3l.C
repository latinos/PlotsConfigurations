void c_wh3l_zg_13TeV_drllmin3l()
{
//=========Macro generated from canvas: ccwh3l_zg_13TeV_drllmin3l/cc
//=========  (Sun Jul  3 22:42:32 2016) by ROOT version6.02/13
   TCanvas *ccwh3l_zg_13TeV_drllmin3l = new TCanvas("ccwh3l_zg_13TeV_drllmin3l", "cc",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   ccwh3l_zg_13TeV_drllmin3l->SetHighLightColor(2);
   ccwh3l_zg_13TeV_drllmin3l->Range(-0.8,-27.27235,4.2,182.515);
   ccwh3l_zg_13TeV_drllmin3l->SetFillColor(0);
   ccwh3l_zg_13TeV_drllmin3l->SetBorderMode(0);
   ccwh3l_zg_13TeV_drllmin3l->SetBorderSize(2);
   ccwh3l_zg_13TeV_drllmin3l->SetTickx(1);
   ccwh3l_zg_13TeV_drllmin3l->SetTicky(1);
   ccwh3l_zg_13TeV_drllmin3l->SetLeftMargin(0.16);
   ccwh3l_zg_13TeV_drllmin3l->SetRightMargin(0.04);
   ccwh3l_zg_13TeV_drllmin3l->SetTopMargin(0.05);
   ccwh3l_zg_13TeV_drllmin3l->SetBottomMargin(0.13);
   ccwh3l_zg_13TeV_drllmin3l->SetFrameFillStyle(0);
   ccwh3l_zg_13TeV_drllmin3l->SetFrameBorderMode(0);
   ccwh3l_zg_13TeV_drllmin3l->SetFrameFillStyle(0);
   ccwh3l_zg_13TeV_drllmin3l->SetFrameBorderMode(0);
   
   TH1F *hframe55 = new TH1F("hframe55","",1000,0,4);
   hframe55->SetMinimum(0);
   hframe55->SetMaximum(172.0256);
   hframe55->SetDirectory(0);
   hframe55->SetStats(0);
   hframe55->SetLineStyle(0);
   hframe55->SetMarkerStyle(20);
   hframe55->GetXaxis()->SetTitle("min #Delta Rm_{ll} [GeV]");
   hframe55->GetXaxis()->SetNdivisions(506);
   hframe55->GetXaxis()->SetLabelFont(42);
   hframe55->GetXaxis()->SetLabelOffset(0.007);
   hframe55->GetXaxis()->SetLabelSize(0.05);
   hframe55->GetXaxis()->SetTitleSize(0.06);
   hframe55->GetXaxis()->SetTitleOffset(0.9);
   hframe55->GetXaxis()->SetTitleFont(42);
   hframe55->GetYaxis()->SetTitle("Events");
   hframe55->GetYaxis()->SetLabelFont(42);
   hframe55->GetYaxis()->SetLabelOffset(0.007);
   hframe55->GetYaxis()->SetLabelSize(0.05);
   hframe55->GetYaxis()->SetTitleSize(0.06);
   hframe55->GetYaxis()->SetTitleOffset(1.25);
   hframe55->GetYaxis()->SetTitleFont(42);
   hframe55->GetZaxis()->SetLabelFont(42);
   hframe55->GetZaxis()->SetLabelOffset(0.007);
   hframe55->GetZaxis()->SetLabelSize(0.05);
   hframe55->GetZaxis()->SetTitleSize(0.06);
   hframe55->GetZaxis()->SetTitleFont(42);
   hframe55->Draw(" ");
   
   THStack *thsBackground_grouped_wh3l_zg_13TeV_drllmin3l = new THStack();
   thsBackground_grouped_wh3l_zg_13TeV_drllmin3l->SetName("thsBackground_grouped_wh3l_zg_13TeV_drllmin3l");
   thsBackground_grouped_wh3l_zg_13TeV_drllmin3l->SetTitle("thsBackground_grouped_wh3l_zg_13TeV_drllmin3l");
   
   TH1F *thsBackground_grouped_wh3l_zg_13TeV_drllmin3l_stack_13 = new TH1F("thsBackground_grouped_wh3l_zg_13TeV_drllmin3l_stack_13","thsBackground_grouped_wh3l_zg_13TeV_drllmin3l",3,0,4);
   thsBackground_grouped_wh3l_zg_13TeV_drllmin3l_stack_13->SetMinimum(0);
   thsBackground_grouped_wh3l_zg_13TeV_drllmin3l_stack_13->SetMaximum(63.89638);
   thsBackground_grouped_wh3l_zg_13TeV_drllmin3l_stack_13->SetDirectory(0);
   thsBackground_grouped_wh3l_zg_13TeV_drllmin3l_stack_13->SetStats(0);
   thsBackground_grouped_wh3l_zg_13TeV_drllmin3l_stack_13->SetLineStyle(0);
   thsBackground_grouped_wh3l_zg_13TeV_drllmin3l_stack_13->SetMarkerStyle(20);
   thsBackground_grouped_wh3l_zg_13TeV_drllmin3l_stack_13->GetXaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_drllmin3l_stack_13->GetXaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_zg_13TeV_drllmin3l_stack_13->GetXaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_zg_13TeV_drllmin3l_stack_13->GetXaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_zg_13TeV_drllmin3l_stack_13->GetXaxis()->SetTitleOffset(0.9);
   thsBackground_grouped_wh3l_zg_13TeV_drllmin3l_stack_13->GetXaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_drllmin3l_stack_13->GetYaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_drllmin3l_stack_13->GetYaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_zg_13TeV_drllmin3l_stack_13->GetYaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_zg_13TeV_drllmin3l_stack_13->GetYaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_zg_13TeV_drllmin3l_stack_13->GetYaxis()->SetTitleOffset(1.25);
   thsBackground_grouped_wh3l_zg_13TeV_drllmin3l_stack_13->GetYaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_drllmin3l_stack_13->GetZaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_drllmin3l_stack_13->GetZaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_zg_13TeV_drllmin3l_stack_13->GetZaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_zg_13TeV_drllmin3l_stack_13->GetZaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_zg_13TeV_drllmin3l_stack_13->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_drllmin3l->SetHistogram(thsBackground_grouped_wh3l_zg_13TeV_drllmin3l_stack_13);
   
   
   TH1D *new_histo_group_Fake_wh3l_zg_13TeV_drllmin3l56 = new TH1D("new_histo_group_Fake_wh3l_zg_13TeV_drllmin3l56","histo_Fake",3,0,4);
   new_histo_group_Fake_wh3l_zg_13TeV_drllmin3l56->SetBinContent(1,7.672206);
   new_histo_group_Fake_wh3l_zg_13TeV_drllmin3l56->SetBinContent(2,8.946375);
   new_histo_group_Fake_wh3l_zg_13TeV_drllmin3l56->SetBinContent(3,6.962221);
   new_histo_group_Fake_wh3l_zg_13TeV_drllmin3l56->SetBinError(1,2.200364);
   new_histo_group_Fake_wh3l_zg_13TeV_drllmin3l56->SetBinError(2,2.890403);
   new_histo_group_Fake_wh3l_zg_13TeV_drllmin3l56->SetBinError(3,2.302958);
   new_histo_group_Fake_wh3l_zg_13TeV_drllmin3l56->SetEntries(460);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_zg_13TeV_drllmin3l56->SetFillColor(ci);
   new_histo_group_Fake_wh3l_zg_13TeV_drllmin3l56->SetFillStyle(3001);

   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_zg_13TeV_drllmin3l56->SetLineColor(ci);
   new_histo_group_Fake_wh3l_zg_13TeV_drllmin3l56->GetXaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_zg_13TeV_drllmin3l56->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_zg_13TeV_drllmin3l56->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_zg_13TeV_drllmin3l56->GetXaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_zg_13TeV_drllmin3l56->GetYaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_zg_13TeV_drllmin3l56->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_zg_13TeV_drllmin3l56->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_zg_13TeV_drllmin3l56->GetYaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_zg_13TeV_drllmin3l56->GetZaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_zg_13TeV_drllmin3l56->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_zg_13TeV_drllmin3l56->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_zg_13TeV_drllmin3l56->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_drllmin3l->Add(new_histo_group_Fake_wh3l_zg_13TeV_drllmin3l,"");
   
   TH1D *new_histo_group_WW_wh3l_zg_13TeV_drllmin3l57 = new TH1D("new_histo_group_WW_wh3l_zg_13TeV_drllmin3l57","histo_WW",3,0,4);
   new_histo_group_WW_wh3l_zg_13TeV_drllmin3l57->SetBinContent(2,0.009961222);
   new_histo_group_WW_wh3l_zg_13TeV_drllmin3l57->SetBinError(2,0.009961222);
   new_histo_group_WW_wh3l_zg_13TeV_drllmin3l57->SetEntries(1);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_zg_13TeV_drllmin3l57->SetFillColor(ci);
   new_histo_group_WW_wh3l_zg_13TeV_drllmin3l57->SetFillStyle(3001);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_zg_13TeV_drllmin3l57->SetLineColor(ci);
   new_histo_group_WW_wh3l_zg_13TeV_drllmin3l57->GetXaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_zg_13TeV_drllmin3l57->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_zg_13TeV_drllmin3l57->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_zg_13TeV_drllmin3l57->GetXaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_zg_13TeV_drllmin3l57->GetYaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_zg_13TeV_drllmin3l57->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_zg_13TeV_drllmin3l57->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_zg_13TeV_drllmin3l57->GetYaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_zg_13TeV_drllmin3l57->GetZaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_zg_13TeV_drllmin3l57->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_zg_13TeV_drllmin3l57->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_zg_13TeV_drllmin3l57->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_drllmin3l->Add(new_histo_group_WW_wh3l_zg_13TeV_drllmin3l,"");
   
   TH1D *new_histo_group_Vg_wh3l_zg_13TeV_drllmin3l58 = new TH1D("new_histo_group_Vg_wh3l_zg_13TeV_drllmin3l58","histo_Vg",3,0,4);
   new_histo_group_Vg_wh3l_zg_13TeV_drllmin3l58->SetBinContent(1,25.09766);
   new_histo_group_Vg_wh3l_zg_13TeV_drllmin3l58->SetBinContent(2,50.34664);
   new_histo_group_Vg_wh3l_zg_13TeV_drllmin3l58->SetBinContent(3,28.52255);
   new_histo_group_Vg_wh3l_zg_13TeV_drllmin3l58->SetBinError(1,1.955777);
   new_histo_group_Vg_wh3l_zg_13TeV_drllmin3l58->SetBinError(2,2.653876);
   new_histo_group_Vg_wh3l_zg_13TeV_drllmin3l58->SetBinError(3,2.007086);
   new_histo_group_Vg_wh3l_zg_13TeV_drllmin3l58->SetEntries(1376);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_zg_13TeV_drllmin3l58->SetFillColor(ci);
   new_histo_group_Vg_wh3l_zg_13TeV_drllmin3l58->SetFillStyle(3001);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_zg_13TeV_drllmin3l58->SetLineColor(ci);
   new_histo_group_Vg_wh3l_zg_13TeV_drllmin3l58->GetXaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_zg_13TeV_drllmin3l58->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_zg_13TeV_drllmin3l58->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_zg_13TeV_drllmin3l58->GetXaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_zg_13TeV_drllmin3l58->GetYaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_zg_13TeV_drllmin3l58->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_zg_13TeV_drllmin3l58->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_zg_13TeV_drllmin3l58->GetYaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_zg_13TeV_drllmin3l58->GetZaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_zg_13TeV_drllmin3l58->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_zg_13TeV_drllmin3l58->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_zg_13TeV_drllmin3l58->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_drllmin3l->Add(new_histo_group_Vg_wh3l_zg_13TeV_drllmin3l,"");
   
   TH1D *new_histo_group_ZZ_wh3l_zg_13TeV_drllmin3l59 = new TH1D("new_histo_group_ZZ_wh3l_zg_13TeV_drllmin3l59","histo_ZZ",3,0,4);
   new_histo_group_ZZ_wh3l_zg_13TeV_drllmin3l59->SetBinContent(1,0.1076606);
   new_histo_group_ZZ_wh3l_zg_13TeV_drllmin3l59->SetBinContent(2,0.3992858);
   new_histo_group_ZZ_wh3l_zg_13TeV_drllmin3l59->SetBinContent(3,0.08642198);
   new_histo_group_ZZ_wh3l_zg_13TeV_drllmin3l59->SetBinError(1,0.06483897);
   new_histo_group_ZZ_wh3l_zg_13TeV_drllmin3l59->SetBinError(2,0.1266527);
   new_histo_group_ZZ_wh3l_zg_13TeV_drllmin3l59->SetBinError(3,0.06129487);
   new_histo_group_ZZ_wh3l_zg_13TeV_drllmin3l59->SetEntries(16);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_zg_13TeV_drllmin3l59->SetFillColor(ci);
   new_histo_group_ZZ_wh3l_zg_13TeV_drllmin3l59->SetFillStyle(3001);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_zg_13TeV_drllmin3l59->SetLineColor(ci);
   new_histo_group_ZZ_wh3l_zg_13TeV_drllmin3l59->GetXaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_zg_13TeV_drllmin3l59->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_zg_13TeV_drllmin3l59->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_zg_13TeV_drllmin3l59->GetXaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_zg_13TeV_drllmin3l59->GetYaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_zg_13TeV_drllmin3l59->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_zg_13TeV_drllmin3l59->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_zg_13TeV_drllmin3l59->GetYaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_zg_13TeV_drllmin3l59->GetZaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_zg_13TeV_drllmin3l59->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_zg_13TeV_drllmin3l59->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_zg_13TeV_drllmin3l59->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_drllmin3l->Add(new_histo_group_ZZ_wh3l_zg_13TeV_drllmin3l,"");
   
   TH1D *new_histo_group_WZ_wh3l_zg_13TeV_drllmin3l60 = new TH1D("new_histo_group_WZ_wh3l_zg_13TeV_drllmin3l60","histo_WZ",3,0,4);
   new_histo_group_WZ_wh3l_zg_13TeV_drllmin3l60->SetBinContent(1,0.5806592);
   new_histo_group_WZ_wh3l_zg_13TeV_drllmin3l60->SetBinContent(2,1.100328);
   new_histo_group_WZ_wh3l_zg_13TeV_drllmin3l60->SetBinContent(3,0.1975365);
   new_histo_group_WZ_wh3l_zg_13TeV_drllmin3l60->SetBinError(1,0.05564258);
   new_histo_group_WZ_wh3l_zg_13TeV_drllmin3l60->SetBinError(2,0.07776555);
   new_histo_group_WZ_wh3l_zg_13TeV_drllmin3l60->SetBinError(3,0.03288283);
   new_histo_group_WZ_wh3l_zg_13TeV_drllmin3l60->SetEntries(376);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_zg_13TeV_drllmin3l60->SetFillColor(ci);
   new_histo_group_WZ_wh3l_zg_13TeV_drllmin3l60->SetFillStyle(3001);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_zg_13TeV_drllmin3l60->SetLineColor(ci);
   new_histo_group_WZ_wh3l_zg_13TeV_drllmin3l60->GetXaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_zg_13TeV_drllmin3l60->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_zg_13TeV_drllmin3l60->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_zg_13TeV_drllmin3l60->GetXaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_zg_13TeV_drllmin3l60->GetYaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_zg_13TeV_drllmin3l60->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_zg_13TeV_drllmin3l60->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_zg_13TeV_drllmin3l60->GetYaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_zg_13TeV_drllmin3l60->GetZaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_zg_13TeV_drllmin3l60->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_zg_13TeV_drllmin3l60->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_zg_13TeV_drllmin3l60->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_drllmin3l->Add(new_histo_group_WZ_wh3l_zg_13TeV_drllmin3l,"");
   
   TH1D *new_histo_group_Higgs_wh3l_zg_13TeV_drllmin3l61 = new TH1D("new_histo_group_Higgs_wh3l_zg_13TeV_drllmin3l61","histo_H_htt",3,0,4);
   new_histo_group_Higgs_wh3l_zg_13TeV_drllmin3l61->SetBinContent(1,0.03275255);
   new_histo_group_Higgs_wh3l_zg_13TeV_drllmin3l61->SetBinContent(2,0.05110711);
   new_histo_group_Higgs_wh3l_zg_13TeV_drllmin3l61->SetBinContent(3,0.004916991);
   new_histo_group_Higgs_wh3l_zg_13TeV_drllmin3l61->SetBinError(1,0.006615382);
   new_histo_group_Higgs_wh3l_zg_13TeV_drllmin3l61->SetBinError(2,0.006913988);
   new_histo_group_Higgs_wh3l_zg_13TeV_drllmin3l61->SetBinError(3,0.001878556);
   new_histo_group_Higgs_wh3l_zg_13TeV_drllmin3l61->SetEntries(180);
   new_histo_group_Higgs_wh3l_zg_13TeV_drllmin3l61->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_zg_13TeV_drllmin3l61->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_zg_13TeV_drllmin3l61->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_zg_13TeV_drllmin3l61->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_zg_13TeV_drllmin3l61->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_zg_13TeV_drllmin3l61->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_zg_13TeV_drllmin3l61->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_zg_13TeV_drllmin3l61->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_zg_13TeV_drllmin3l61->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_zg_13TeV_drllmin3l61->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_zg_13TeV_drllmin3l61->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_zg_13TeV_drllmin3l61->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_zg_13TeV_drllmin3l61->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_zg_13TeV_drllmin3l61->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_zg_13TeV_drllmin3l61->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_drllmin3l->Add(new_histo_group_Higgs_wh3l_zg_13TeV_drllmin3l,"");
   thsBackground_grouped_wh3l_zg_13TeV_drllmin3l->Draw("hist same");
   
   thsSignal_grouped_wh3l_zg_13TeV_drllmin3l = new THStack();
   thsSignal_grouped_wh3l_zg_13TeV_drllmin3l->SetName("thsSignal_grouped_wh3l_zg_13TeV_drllmin3l");
   thsSignal_grouped_wh3l_zg_13TeV_drllmin3l->SetTitle("thsSignal_grouped_wh3l_zg_13TeV_drllmin3l");
   
   TH1F *thsSignal_grouped_wh3l_zg_13TeV_drllmin3l_stack_14 = new TH1F("thsSignal_grouped_wh3l_zg_13TeV_drllmin3l_stack_14","thsSignal_grouped_wh3l_zg_13TeV_drllmin3l",3,0,4);
   thsSignal_grouped_wh3l_zg_13TeV_drllmin3l_stack_14->SetMinimum(0);
   thsSignal_grouped_wh3l_zg_13TeV_drllmin3l_stack_14->SetMaximum(0.06092215);
   thsSignal_grouped_wh3l_zg_13TeV_drllmin3l_stack_14->SetDirectory(0);
   thsSignal_grouped_wh3l_zg_13TeV_drllmin3l_stack_14->SetStats(0);
   thsSignal_grouped_wh3l_zg_13TeV_drllmin3l_stack_14->SetLineStyle(0);
   thsSignal_grouped_wh3l_zg_13TeV_drllmin3l_stack_14->SetMarkerStyle(20);
   thsSignal_grouped_wh3l_zg_13TeV_drllmin3l_stack_14->GetXaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_zg_13TeV_drllmin3l_stack_14->GetXaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_zg_13TeV_drllmin3l_stack_14->GetXaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_zg_13TeV_drllmin3l_stack_14->GetXaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_zg_13TeV_drllmin3l_stack_14->GetXaxis()->SetTitleOffset(0.9);
   thsSignal_grouped_wh3l_zg_13TeV_drllmin3l_stack_14->GetXaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_zg_13TeV_drllmin3l_stack_14->GetYaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_zg_13TeV_drllmin3l_stack_14->GetYaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_zg_13TeV_drllmin3l_stack_14->GetYaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_zg_13TeV_drllmin3l_stack_14->GetYaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_zg_13TeV_drllmin3l_stack_14->GetYaxis()->SetTitleOffset(1.25);
   thsSignal_grouped_wh3l_zg_13TeV_drllmin3l_stack_14->GetYaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_zg_13TeV_drllmin3l_stack_14->GetZaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_zg_13TeV_drllmin3l_stack_14->GetZaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_zg_13TeV_drllmin3l_stack_14->GetZaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_zg_13TeV_drllmin3l_stack_14->GetZaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_zg_13TeV_drllmin3l_stack_14->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_zg_13TeV_drllmin3l->SetHistogram(thsSignal_grouped_wh3l_zg_13TeV_drllmin3l_stack_14);
   
   
   TH1D *new_histo_group_Higgs_wh3l_zg_13TeV_drllmin3l62 = new TH1D("new_histo_group_Higgs_wh3l_zg_13TeV_drllmin3l62","histo_H_htt",3,0,4);
   new_histo_group_Higgs_wh3l_zg_13TeV_drllmin3l62->SetBinContent(1,0.03275255);
   new_histo_group_Higgs_wh3l_zg_13TeV_drllmin3l62->SetBinContent(2,0.05110711);
   new_histo_group_Higgs_wh3l_zg_13TeV_drllmin3l62->SetBinContent(3,0.004916991);
   new_histo_group_Higgs_wh3l_zg_13TeV_drllmin3l62->SetBinError(1,0.006615382);
   new_histo_group_Higgs_wh3l_zg_13TeV_drllmin3l62->SetBinError(2,0.006913988);
   new_histo_group_Higgs_wh3l_zg_13TeV_drllmin3l62->SetBinError(3,0.001878556);
   new_histo_group_Higgs_wh3l_zg_13TeV_drllmin3l62->SetEntries(180);
   new_histo_group_Higgs_wh3l_zg_13TeV_drllmin3l62->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_zg_13TeV_drllmin3l62->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_zg_13TeV_drllmin3l62->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_zg_13TeV_drllmin3l62->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_zg_13TeV_drllmin3l62->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_zg_13TeV_drllmin3l62->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_zg_13TeV_drllmin3l62->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_zg_13TeV_drllmin3l62->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_zg_13TeV_drllmin3l62->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_zg_13TeV_drllmin3l62->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_zg_13TeV_drllmin3l62->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_zg_13TeV_drllmin3l62->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_zg_13TeV_drllmin3l62->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_zg_13TeV_drllmin3l62->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_zg_13TeV_drllmin3l62->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_zg_13TeV_drllmin3l->Add(new_histo_group_Higgs_wh3l_zg_13TeV_drllmin3l,"");
   thsSignal_grouped_wh3l_zg_13TeV_drllmin3l->Draw("hist same noclear");
   
   Double_t _fx3013[3] = {
   0.6666667,
   2,
   3.333333};
   Double_t _fy3013[3] = {
   33.45818,
   60.80259,
   35.76872};
   Double_t _felx3013[3] = {
   0.6666667,
   0.6666667,
   0.6666667};
   Double_t _fely3013[3] = {
   5.198233,
   6.974266,
   5.206627};
   Double_t _fehx3013[3] = {
   0.6666667,
   0.6666667,
   0.6666667};
   Double_t _fehy3013[3] = {
   5.191688,
   6.955302,
   5.207616};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(3,_fx3013,_fy3013,_felx3013,_fehx3013,_fely3013,_fehy3013);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(12);
   grae->SetFillStyle(3004);
   grae->SetLineColor(12);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3013 = new TH1F("Graph_Graph3013","",100,0,4.4);
   Graph_Graph3013->SetMinimum(24.31015);
   Graph_Graph3013->SetMaximum(71.70769);
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
   
   Double_t _fx3014[3] = {
   0.6666667,
   2,
   3.333333};
   Double_t _fy3014[3] = {
   32,
   61,
   40};
   Double_t _felx3014[3] = {
   0.6666667,
   0.6666667,
   0.6666667};
   Double_t _fely3014[3] = {
   5.627243,
   7.788934,
   6.298123};
   Double_t _fehx3014[3] = {
   0.6666667,
   0.6666667,
   0.6666667};
   Double_t _fehy3014[3] = {
   6.715892,
   8.853137,
   7.377414};
   grae = new TGraphAsymmErrors(3,_fx3014,_fy3014,_felx3014,_fehx3014,_fely3014,_fehy3014);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(1);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3014 = new TH1F("Graph_Graph3014","",100,0,4.4);
   Graph_Graph3014->SetMinimum(22.02472);
   Graph_Graph3014->SetMaximum(74.20118);
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
   TLegendEntry *entry=leg->AddEntry("new_histo_group_Fake_wh3l_zg_13TeV_drllmin3l","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_zg_13TeV_drllmin3l","WW","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_zg_13TeV_drllmin3l","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_zg_13TeV_drllmin3l","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_zg_13TeV_drllmin3l","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_zg_13TeV_drllmin3l","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_zg_13TeV_drllmin3l","Data","EPL");
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
   entry=leg->AddEntry("new_histo_group_Fake_wh3l_zg_13TeV_drllmin3l","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_zg_13TeV_drllmin3l","WW","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_zg_13TeV_drllmin3l","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_zg_13TeV_drllmin3l","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_zg_13TeV_drllmin3l","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_zg_13TeV_drllmin3l","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_zg_13TeV_drllmin3l","Data","EPL");
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
   
   TH1F *hframe_copy63 = new TH1F("hframe_copy63","",1000,0,4);
   hframe_copy63->SetMinimum(0);
   hframe_copy63->SetMaximum(172.0256);
   hframe_copy63->SetDirectory(0);
   hframe_copy63->SetStats(0);
   hframe_copy63->SetLineStyle(0);
   hframe_copy63->SetMarkerStyle(20);
   hframe_copy63->GetXaxis()->SetTitle("min #Delta Rm_{ll} [GeV]");
   hframe_copy63->GetXaxis()->SetNdivisions(506);
   hframe_copy63->GetXaxis()->SetLabelFont(42);
   hframe_copy63->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy63->GetXaxis()->SetLabelSize(0.05);
   hframe_copy63->GetXaxis()->SetTitleSize(0.06);
   hframe_copy63->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy63->GetXaxis()->SetTitleFont(42);
   hframe_copy63->GetYaxis()->SetTitle("Events");
   hframe_copy63->GetYaxis()->SetLabelFont(42);
   hframe_copy63->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy63->GetYaxis()->SetLabelSize(0.05);
   hframe_copy63->GetYaxis()->SetTitleSize(0.06);
   hframe_copy63->GetYaxis()->SetTitleOffset(1.25);
   hframe_copy63->GetYaxis()->SetTitleFont(42);
   hframe_copy63->GetZaxis()->SetLabelFont(42);
   hframe_copy63->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy63->GetZaxis()->SetLabelSize(0.05);
   hframe_copy63->GetZaxis()->SetTitleSize(0.06);
   hframe_copy63->GetZaxis()->SetTitleFont(42);
   hframe_copy63->Draw("sameaxis");
   ccwh3l_zg_13TeV_drllmin3l->Modified();
   ccwh3l_zg_13TeV_drllmin3l->cd();
   ccwh3l_zg_13TeV_drllmin3l->SetSelected(ccwh3l_zg_13TeV_drllmin3l);
}
