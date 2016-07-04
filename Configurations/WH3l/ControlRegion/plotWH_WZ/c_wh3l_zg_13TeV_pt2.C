void c_wh3l_zg_13TeV_pt2()
{
//=========Macro generated from canvas: ccwh3l_zg_13TeV_pt2/cc
//=========  (Sat Jul  2 20:39:49 2016) by ROOT version6.02/13
   TCanvas *ccwh3l_zg_13TeV_pt2 = new TCanvas("ccwh3l_zg_13TeV_pt2", "cc",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   ccwh3l_zg_13TeV_pt2->SetHighLightColor(2);
   ccwh3l_zg_13TeV_pt2->Range(-28,-29.37843,209.5,196.6095);
   ccwh3l_zg_13TeV_pt2->SetFillColor(0);
   ccwh3l_zg_13TeV_pt2->SetBorderMode(0);
   ccwh3l_zg_13TeV_pt2->SetBorderSize(2);
   ccwh3l_zg_13TeV_pt2->SetTickx(1);
   ccwh3l_zg_13TeV_pt2->SetTicky(1);
   ccwh3l_zg_13TeV_pt2->SetLeftMargin(0.16);
   ccwh3l_zg_13TeV_pt2->SetRightMargin(0.04);
   ccwh3l_zg_13TeV_pt2->SetTopMargin(0.05);
   ccwh3l_zg_13TeV_pt2->SetBottomMargin(0.13);
   ccwh3l_zg_13TeV_pt2->SetFrameFillStyle(0);
   ccwh3l_zg_13TeV_pt2->SetFrameBorderMode(0);
   ccwh3l_zg_13TeV_pt2->SetFrameFillStyle(0);
   ccwh3l_zg_13TeV_pt2->SetFrameBorderMode(0);
   
   TH1F *hframe226 = new TH1F("hframe226","",1000,10,200);
   hframe226->SetMinimum(0);
   hframe226->SetMaximum(185.3101);
   hframe226->SetDirectory(0);
   hframe226->SetStats(0);
   hframe226->SetLineStyle(0);
   hframe226->SetMarkerStyle(20);
   hframe226->GetXaxis()->SetTitle("lept2_p_{T} [GeV]");
   hframe226->GetXaxis()->SetNdivisions(506);
   hframe226->GetXaxis()->SetLabelFont(42);
   hframe226->GetXaxis()->SetLabelOffset(0.007);
   hframe226->GetXaxis()->SetLabelSize(0.05);
   hframe226->GetXaxis()->SetTitleSize(0.06);
   hframe226->GetXaxis()->SetTitleOffset(0.9);
   hframe226->GetXaxis()->SetTitleFont(42);
   hframe226->GetYaxis()->SetTitle("Events");
   hframe226->GetYaxis()->SetLabelFont(42);
   hframe226->GetYaxis()->SetLabelOffset(0.007);
   hframe226->GetYaxis()->SetLabelSize(0.05);
   hframe226->GetYaxis()->SetTitleSize(0.06);
   hframe226->GetYaxis()->SetTitleOffset(1.25);
   hframe226->GetYaxis()->SetTitleFont(42);
   hframe226->GetZaxis()->SetLabelFont(42);
   hframe226->GetZaxis()->SetLabelOffset(0.007);
   hframe226->GetZaxis()->SetLabelSize(0.05);
   hframe226->GetZaxis()->SetTitleSize(0.06);
   hframe226->GetZaxis()->SetTitleFont(42);
   hframe226->Draw(" ");
   
   THStack *thsBackground_grouped_wh3l_zg_13TeV_pt2 = new THStack();
   thsBackground_grouped_wh3l_zg_13TeV_pt2->SetName("thsBackground_grouped_wh3l_zg_13TeV_pt2");
   thsBackground_grouped_wh3l_zg_13TeV_pt2->SetTitle("thsBackground_grouped_wh3l_zg_13TeV_pt2");
   
   TH1F *thsBackground_grouped_wh3l_zg_13TeV_pt2_stack_51 = new TH1F("thsBackground_grouped_wh3l_zg_13TeV_pt2_stack_51","thsBackground_grouped_wh3l_zg_13TeV_pt2",25,10,200);
   thsBackground_grouped_wh3l_zg_13TeV_pt2_stack_51->SetMinimum(-0.09376672);
   thsBackground_grouped_wh3l_zg_13TeV_pt2_stack_51->SetMaximum(55.53922);
   thsBackground_grouped_wh3l_zg_13TeV_pt2_stack_51->SetDirectory(0);
   thsBackground_grouped_wh3l_zg_13TeV_pt2_stack_51->SetStats(0);
   thsBackground_grouped_wh3l_zg_13TeV_pt2_stack_51->SetLineStyle(0);
   thsBackground_grouped_wh3l_zg_13TeV_pt2_stack_51->SetMarkerStyle(20);
   thsBackground_grouped_wh3l_zg_13TeV_pt2_stack_51->GetXaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_pt2_stack_51->GetXaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_zg_13TeV_pt2_stack_51->GetXaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_zg_13TeV_pt2_stack_51->GetXaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_zg_13TeV_pt2_stack_51->GetXaxis()->SetTitleOffset(0.9);
   thsBackground_grouped_wh3l_zg_13TeV_pt2_stack_51->GetXaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_pt2_stack_51->GetYaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_pt2_stack_51->GetYaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_zg_13TeV_pt2_stack_51->GetYaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_zg_13TeV_pt2_stack_51->GetYaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_zg_13TeV_pt2_stack_51->GetYaxis()->SetTitleOffset(1.25);
   thsBackground_grouped_wh3l_zg_13TeV_pt2_stack_51->GetYaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_pt2_stack_51->GetZaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_pt2_stack_51->GetZaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_zg_13TeV_pt2_stack_51->GetZaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_zg_13TeV_pt2_stack_51->GetZaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_zg_13TeV_pt2_stack_51->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_pt2->SetHistogram(thsBackground_grouped_wh3l_zg_13TeV_pt2_stack_51);
   
   
   TH1D *new_histo_group_Fake_wh3l_zg_13TeV_pt2227 = new TH1D("new_histo_group_Fake_wh3l_zg_13TeV_pt2227","histo_Fake",25,10,200);
   new_histo_group_Fake_wh3l_zg_13TeV_pt2227->SetBinContent(1,0.7910128);
   new_histo_group_Fake_wh3l_zg_13TeV_pt2227->SetBinContent(2,7.360365);
   new_histo_group_Fake_wh3l_zg_13TeV_pt2227->SetBinContent(3,10.18288);
   new_histo_group_Fake_wh3l_zg_13TeV_pt2227->SetBinContent(4,4.888568);
   new_histo_group_Fake_wh3l_zg_13TeV_pt2227->SetBinContent(5,0.3579774);
   new_histo_group_Fake_wh3l_zg_13TeV_pt2227->SetBinError(1,0.7011956);
   new_histo_group_Fake_wh3l_zg_13TeV_pt2227->SetBinError(2,2.61405);
   new_histo_group_Fake_wh3l_zg_13TeV_pt2227->SetBinError(3,2.787009);
   new_histo_group_Fake_wh3l_zg_13TeV_pt2227->SetBinError(4,1.823267);
   new_histo_group_Fake_wh3l_zg_13TeV_pt2227->SetBinError(5,0.2880862);
   new_histo_group_Fake_wh3l_zg_13TeV_pt2227->SetEntries(460);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_zg_13TeV_pt2227->SetFillColor(ci);
   new_histo_group_Fake_wh3l_zg_13TeV_pt2227->SetFillStyle(3001);

   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_zg_13TeV_pt2227->SetLineColor(ci);
   new_histo_group_Fake_wh3l_zg_13TeV_pt2227->GetXaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_zg_13TeV_pt2227->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_zg_13TeV_pt2227->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_zg_13TeV_pt2227->GetXaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_zg_13TeV_pt2227->GetYaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_zg_13TeV_pt2227->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_zg_13TeV_pt2227->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_zg_13TeV_pt2227->GetYaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_zg_13TeV_pt2227->GetZaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_zg_13TeV_pt2227->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_zg_13TeV_pt2227->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_zg_13TeV_pt2227->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_pt2->Add(new_histo_group_Fake_wh3l_zg_13TeV_pt2,"");
   
   TH1D *new_histo_group_WW_wh3l_zg_13TeV_pt2228 = new TH1D("new_histo_group_WW_wh3l_zg_13TeV_pt2228","histo_WW",25,10,200);
   new_histo_group_WW_wh3l_zg_13TeV_pt2228->SetBinContent(4,0.009961222);
   new_histo_group_WW_wh3l_zg_13TeV_pt2228->SetBinError(4,0.009961222);
   new_histo_group_WW_wh3l_zg_13TeV_pt2228->SetEntries(1);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_zg_13TeV_pt2228->SetFillColor(ci);
   new_histo_group_WW_wh3l_zg_13TeV_pt2228->SetFillStyle(3001);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_zg_13TeV_pt2228->SetLineColor(ci);
   new_histo_group_WW_wh3l_zg_13TeV_pt2228->GetXaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_zg_13TeV_pt2228->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_zg_13TeV_pt2228->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_zg_13TeV_pt2228->GetXaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_zg_13TeV_pt2228->GetYaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_zg_13TeV_pt2228->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_zg_13TeV_pt2228->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_zg_13TeV_pt2228->GetYaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_zg_13TeV_pt2228->GetZaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_zg_13TeV_pt2228->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_zg_13TeV_pt2228->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_zg_13TeV_pt2228->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_pt2->Add(new_histo_group_WW_wh3l_zg_13TeV_pt2,"");
   
   TH1D *new_histo_group_Vg_wh3l_zg_13TeV_pt2229 = new TH1D("new_histo_group_Vg_wh3l_zg_13TeV_pt2229","histo_Vg",25,10,200);
   new_histo_group_Vg_wh3l_zg_13TeV_pt2229->SetBinContent(1,4.400265);
   new_histo_group_Vg_wh3l_zg_13TeV_pt2229->SetBinContent(2,40.62695);
   new_histo_group_Vg_wh3l_zg_13TeV_pt2229->SetBinContent(3,41.86953);
   new_histo_group_Vg_wh3l_zg_13TeV_pt2229->SetBinContent(4,16.33122);
   new_histo_group_Vg_wh3l_zg_13TeV_pt2229->SetBinContent(5,0.6911122);
   new_histo_group_Vg_wh3l_zg_13TeV_pt2229->SetBinContent(6,0.04775747);
   new_histo_group_Vg_wh3l_zg_13TeV_pt2229->SetBinError(1,0.8489752);
   new_histo_group_Vg_wh3l_zg_13TeV_pt2229->SetBinError(2,2.381971);
   new_histo_group_Vg_wh3l_zg_13TeV_pt2229->SetBinError(3,2.445639);
   new_histo_group_Vg_wh3l_zg_13TeV_pt2229->SetBinError(4,1.546618);
   new_histo_group_Vg_wh3l_zg_13TeV_pt2229->SetBinError(5,0.3297975);
   new_histo_group_Vg_wh3l_zg_13TeV_pt2229->SetBinError(6,0.1415242);
   new_histo_group_Vg_wh3l_zg_13TeV_pt2229->SetEntries(1376);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_zg_13TeV_pt2229->SetFillColor(ci);
   new_histo_group_Vg_wh3l_zg_13TeV_pt2229->SetFillStyle(3001);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_zg_13TeV_pt2229->SetLineColor(ci);
   new_histo_group_Vg_wh3l_zg_13TeV_pt2229->GetXaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_zg_13TeV_pt2229->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_zg_13TeV_pt2229->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_zg_13TeV_pt2229->GetXaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_zg_13TeV_pt2229->GetYaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_zg_13TeV_pt2229->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_zg_13TeV_pt2229->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_zg_13TeV_pt2229->GetYaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_zg_13TeV_pt2229->GetZaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_zg_13TeV_pt2229->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_zg_13TeV_pt2229->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_zg_13TeV_pt2229->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_pt2->Add(new_histo_group_Vg_wh3l_zg_13TeV_pt2,"");
   
   TH1D *new_histo_group_ZZ_wh3l_zg_13TeV_pt2230 = new TH1D("new_histo_group_ZZ_wh3l_zg_13TeV_pt2230","histo_ZZ",25,10,200);
   new_histo_group_ZZ_wh3l_zg_13TeV_pt2230->SetBinContent(2,0.2954788);
   new_histo_group_ZZ_wh3l_zg_13TeV_pt2230->SetBinContent(3,0.2217282);
   new_histo_group_ZZ_wh3l_zg_13TeV_pt2230->SetBinContent(4,0.0761614);
   new_histo_group_ZZ_wh3l_zg_13TeV_pt2230->SetBinError(2,0.1062902);
   new_histo_group_ZZ_wh3l_zg_13TeV_pt2230->SetBinError(3,0.09870092);
   new_histo_group_ZZ_wh3l_zg_13TeV_pt2230->SetBinError(4,0.05442959);
   new_histo_group_ZZ_wh3l_zg_13TeV_pt2230->SetEntries(16);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_zg_13TeV_pt2230->SetFillColor(ci);
   new_histo_group_ZZ_wh3l_zg_13TeV_pt2230->SetFillStyle(3001);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_zg_13TeV_pt2230->SetLineColor(ci);
   new_histo_group_ZZ_wh3l_zg_13TeV_pt2230->GetXaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_zg_13TeV_pt2230->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_zg_13TeV_pt2230->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_zg_13TeV_pt2230->GetXaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_zg_13TeV_pt2230->GetYaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_zg_13TeV_pt2230->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_zg_13TeV_pt2230->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_zg_13TeV_pt2230->GetYaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_zg_13TeV_pt2230->GetZaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_zg_13TeV_pt2230->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_zg_13TeV_pt2230->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_zg_13TeV_pt2230->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_pt2->Add(new_histo_group_ZZ_wh3l_zg_13TeV_pt2,"");
   
   TH1D *new_histo_group_WZ_wh3l_zg_13TeV_pt2231 = new TH1D("new_histo_group_WZ_wh3l_zg_13TeV_pt2231","histo_WZ",25,10,200);
   new_histo_group_WZ_wh3l_zg_13TeV_pt2231->SetBinContent(1,0.1322435);
   new_histo_group_WZ_wh3l_zg_13TeV_pt2231->SetBinContent(2,0.9268316);
   new_histo_group_WZ_wh3l_zg_13TeV_pt2231->SetBinContent(3,0.5848124);
   new_histo_group_WZ_wh3l_zg_13TeV_pt2231->SetBinContent(4,0.2046216);
   new_histo_group_WZ_wh3l_zg_13TeV_pt2231->SetBinContent(5,0.03001505);
   new_histo_group_WZ_wh3l_zg_13TeV_pt2231->SetBinError(1,0.0267455);
   new_histo_group_WZ_wh3l_zg_13TeV_pt2231->SetBinError(2,0.07168591);
   new_histo_group_WZ_wh3l_zg_13TeV_pt2231->SetBinError(3,0.05612615);
   new_histo_group_WZ_wh3l_zg_13TeV_pt2231->SetBinError(4,0.03260299);
   new_histo_group_WZ_wh3l_zg_13TeV_pt2231->SetBinError(5,0.01255257);
   new_histo_group_WZ_wh3l_zg_13TeV_pt2231->SetEntries(376);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_zg_13TeV_pt2231->SetFillColor(ci);
   new_histo_group_WZ_wh3l_zg_13TeV_pt2231->SetFillStyle(3001);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_zg_13TeV_pt2231->SetLineColor(ci);
   new_histo_group_WZ_wh3l_zg_13TeV_pt2231->GetXaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_zg_13TeV_pt2231->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_zg_13TeV_pt2231->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_zg_13TeV_pt2231->GetXaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_zg_13TeV_pt2231->GetYaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_zg_13TeV_pt2231->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_zg_13TeV_pt2231->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_zg_13TeV_pt2231->GetYaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_zg_13TeV_pt2231->GetZaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_zg_13TeV_pt2231->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_zg_13TeV_pt2231->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_zg_13TeV_pt2231->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_pt2->Add(new_histo_group_WZ_wh3l_zg_13TeV_pt2,"");
   
   TH1D *new_histo_group_Higgs_wh3l_zg_13TeV_pt2232 = new TH1D("new_histo_group_Higgs_wh3l_zg_13TeV_pt2232","histo_H_htt",25,10,200);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt2232->SetBinContent(1,0.003295073);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt2232->SetBinContent(2,0.03279834);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt2232->SetBinContent(3,0.03554916);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt2232->SetBinContent(4,0.01371769);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt2232->SetBinContent(5,0.002420074);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt2232->SetBinContent(6,0.0009963103);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt2232->SetBinError(1,0.00159901);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt2232->SetBinError(2,0.005812903);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt2232->SetBinError(3,0.00611322);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt2232->SetBinError(4,0.004168475);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt2232->SetBinError(5,0.001734508);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt2232->SetBinError(6,0.0009963103);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt2232->SetEntries(180);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt2232->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_zg_13TeV_pt2232->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt2232->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt2232->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt2232->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt2232->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt2232->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt2232->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt2232->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt2232->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt2232->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt2232->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt2232->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt2232->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt2232->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_pt2->Add(new_histo_group_Higgs_wh3l_zg_13TeV_pt2,"");
   thsBackground_grouped_wh3l_zg_13TeV_pt2->Draw("hist same");
   
   thsSignal_grouped_wh3l_zg_13TeV_pt2 = new THStack();
   thsSignal_grouped_wh3l_zg_13TeV_pt2->SetName("thsSignal_grouped_wh3l_zg_13TeV_pt2");
   thsSignal_grouped_wh3l_zg_13TeV_pt2->SetTitle("thsSignal_grouped_wh3l_zg_13TeV_pt2");
   
   TH1F *thsSignal_grouped_wh3l_zg_13TeV_pt2_stack_52 = new TH1F("thsSignal_grouped_wh3l_zg_13TeV_pt2_stack_52","thsSignal_grouped_wh3l_zg_13TeV_pt2",25,10,200);
   thsSignal_grouped_wh3l_zg_13TeV_pt2_stack_52->SetMinimum(0);
   thsSignal_grouped_wh3l_zg_13TeV_pt2_stack_52->SetMaximum(0.0437455);
   thsSignal_grouped_wh3l_zg_13TeV_pt2_stack_52->SetDirectory(0);
   thsSignal_grouped_wh3l_zg_13TeV_pt2_stack_52->SetStats(0);
   thsSignal_grouped_wh3l_zg_13TeV_pt2_stack_52->SetLineStyle(0);
   thsSignal_grouped_wh3l_zg_13TeV_pt2_stack_52->SetMarkerStyle(20);
   thsSignal_grouped_wh3l_zg_13TeV_pt2_stack_52->GetXaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_zg_13TeV_pt2_stack_52->GetXaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_zg_13TeV_pt2_stack_52->GetXaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_zg_13TeV_pt2_stack_52->GetXaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_zg_13TeV_pt2_stack_52->GetXaxis()->SetTitleOffset(0.9);
   thsSignal_grouped_wh3l_zg_13TeV_pt2_stack_52->GetXaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_zg_13TeV_pt2_stack_52->GetYaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_zg_13TeV_pt2_stack_52->GetYaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_zg_13TeV_pt2_stack_52->GetYaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_zg_13TeV_pt2_stack_52->GetYaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_zg_13TeV_pt2_stack_52->GetYaxis()->SetTitleOffset(1.25);
   thsSignal_grouped_wh3l_zg_13TeV_pt2_stack_52->GetYaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_zg_13TeV_pt2_stack_52->GetZaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_zg_13TeV_pt2_stack_52->GetZaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_zg_13TeV_pt2_stack_52->GetZaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_zg_13TeV_pt2_stack_52->GetZaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_zg_13TeV_pt2_stack_52->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_zg_13TeV_pt2->SetHistogram(thsSignal_grouped_wh3l_zg_13TeV_pt2_stack_52);
   
   
   TH1D *new_histo_group_Higgs_wh3l_zg_13TeV_pt2233 = new TH1D("new_histo_group_Higgs_wh3l_zg_13TeV_pt2233","histo_H_htt",25,10,200);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt2233->SetBinContent(1,0.003295073);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt2233->SetBinContent(2,0.03279834);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt2233->SetBinContent(3,0.03554916);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt2233->SetBinContent(4,0.01371769);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt2233->SetBinContent(5,0.002420074);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt2233->SetBinContent(6,0.0009963103);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt2233->SetBinError(1,0.00159901);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt2233->SetBinError(2,0.005812903);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt2233->SetBinError(3,0.00611322);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt2233->SetBinError(4,0.004168475);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt2233->SetBinError(5,0.001734508);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt2233->SetBinError(6,0.0009963103);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt2233->SetEntries(180);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt2233->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_zg_13TeV_pt2233->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt2233->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt2233->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt2233->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt2233->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt2233->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt2233->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt2233->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt2233->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt2233->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt2233->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt2233->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt2233->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt2233->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_zg_13TeV_pt2->Add(new_histo_group_Higgs_wh3l_zg_13TeV_pt2,"");
   thsSignal_grouped_wh3l_zg_13TeV_pt2->Draw("hist same noclear");
   
   Double_t _fx3051[25] = {
   13.8,
   21.4,
   29,
   36.6,
   44.2,
   51.8,
   59.4,
   67,
   74.6,
   82.2,
   89.8,
   97.4,
   105,
   112.6,
   120.2,
   127.8,
   135.4,
   143,
   150.6,
   158.2,
   165.8,
   173.4,
   181,
   188.6,
   196.2};
   Double_t _fy3051[25] = {
   5.323522,
   49.20963,
   52.85895,
   21.51053,
   1.079105,
   0.04775747,
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
   Double_t _felx3051[25] = {
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8};
   Double_t _fely3051[25] = {
   1.632973,
   6.154547,
   6.686904,
   3.943265,
   0.6435018,
   0.04781725,
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
   Double_t _fehx3051[25] = {
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8};
   Double_t _fehy3051[25] = {
   1.634706,
   6.139713,
   6.680718,
   3.939697,
   0.6434937,
   0.1415447,
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
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(25,_fx3051,_fy3051,_felx3051,_fehx3051,_fely3051,_fehy3051);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(12);
   grae->SetFillStyle(3004);
   grae->SetLineColor(12);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3051 = new TH1F("Graph_Graph3051","",100,0,219);
   Graph_Graph3051->SetMinimum(-5.954033);
   Graph_Graph3051->SetMaximum(65.49364);
   Graph_Graph3051->SetDirectory(0);
   Graph_Graph3051->SetStats(0);
   Graph_Graph3051->SetLineStyle(0);
   Graph_Graph3051->SetMarkerStyle(20);
   Graph_Graph3051->GetXaxis()->SetLabelFont(42);
   Graph_Graph3051->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3051->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3051->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3051->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3051->GetXaxis()->SetTitleFont(42);
   Graph_Graph3051->GetYaxis()->SetLabelFont(42);
   Graph_Graph3051->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3051->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3051->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3051->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3051->GetYaxis()->SetTitleFont(42);
   Graph_Graph3051->GetZaxis()->SetLabelFont(42);
   Graph_Graph3051->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3051->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3051->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3051->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3051);
   
   grae->Draw("2");
   
   Double_t _fx3052[25] = {
   13.8,
   21.4,
   29,
   36.6,
   44.2,
   51.8,
   59.4,
   67,
   74.6,
   82.2,
   89.8,
   97.4,
   105,
   112.6,
   120.2,
   127.8,
   135.4,
   143,
   150.6,
   158.2,
   165.8,
   173.4,
   181,
   188.6,
   196.2};
   Double_t _fy3052[25] = {
   4,
   48,
   66,
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
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _felx3052[25] = {
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8};
   Double_t _fely3052[25] = {
   1.914367,
   6.904115,
   8.103564,
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
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fehx3052[25] = {
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8};
   Double_t _fehy3052[25] = {
   3.162815,
   7.976496,
   9.165286,
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
   1.147908,
   1.147908,
   1.147908,
   1.147908,
   1.147908,
   1.147908,
   1.147908,
   1.147908};
   grae = new TGraphAsymmErrors(25,_fx3052,_fy3052,_felx3052,_fehx3052,_fely3052,_fehy3052);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(1);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3052 = new TH1F("Graph_Graph3052","",100,0,219);
   Graph_Graph3052->SetMinimum(0);
   Graph_Graph3052->SetMaximum(82.68181);
   Graph_Graph3052->SetDirectory(0);
   Graph_Graph3052->SetStats(0);
   Graph_Graph3052->SetLineStyle(0);
   Graph_Graph3052->SetMarkerStyle(20);
   Graph_Graph3052->GetXaxis()->SetLabelFont(42);
   Graph_Graph3052->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3052->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3052->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3052->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3052->GetXaxis()->SetTitleFont(42);
   Graph_Graph3052->GetYaxis()->SetLabelFont(42);
   Graph_Graph3052->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3052->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3052->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3052->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3052->GetYaxis()->SetTitleFont(42);
   Graph_Graph3052->GetZaxis()->SetLabelFont(42);
   Graph_Graph3052->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3052->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3052->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3052->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3052);
   
   grae->Draw("p0");
   
   TLegend *leg = new TLegend(0.2,0.7,0.8,0.9,NULL,"brNDC");
   leg->SetTextFont(62);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("new_histo_group_Fake_wh3l_zg_13TeV_pt2","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_zg_13TeV_pt2","WW","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_zg_13TeV_pt2","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_zg_13TeV_pt2","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_zg_13TeV_pt2","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_zg_13TeV_pt2","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_zg_13TeV_pt2","Data","EPL");
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
   entry=leg->AddEntry("new_histo_group_Fake_wh3l_zg_13TeV_pt2","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_zg_13TeV_pt2","WW","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_zg_13TeV_pt2","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_zg_13TeV_pt2","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_zg_13TeV_pt2","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_zg_13TeV_pt2","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_zg_13TeV_pt2","Data","EPL");
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
   
   TH1F *hframe_copy234 = new TH1F("hframe_copy234","",1000,10,200);
   hframe_copy234->SetMinimum(0);
   hframe_copy234->SetMaximum(185.3101);
   hframe_copy234->SetDirectory(0);
   hframe_copy234->SetStats(0);
   hframe_copy234->SetLineStyle(0);
   hframe_copy234->SetMarkerStyle(20);
   hframe_copy234->GetXaxis()->SetTitle("lept2_p_{T} [GeV]");
   hframe_copy234->GetXaxis()->SetNdivisions(506);
   hframe_copy234->GetXaxis()->SetLabelFont(42);
   hframe_copy234->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy234->GetXaxis()->SetLabelSize(0.05);
   hframe_copy234->GetXaxis()->SetTitleSize(0.06);
   hframe_copy234->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy234->GetXaxis()->SetTitleFont(42);
   hframe_copy234->GetYaxis()->SetTitle("Events");
   hframe_copy234->GetYaxis()->SetLabelFont(42);
   hframe_copy234->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy234->GetYaxis()->SetLabelSize(0.05);
   hframe_copy234->GetYaxis()->SetTitleSize(0.06);
   hframe_copy234->GetYaxis()->SetTitleOffset(1.25);
   hframe_copy234->GetYaxis()->SetTitleFont(42);
   hframe_copy234->GetZaxis()->SetLabelFont(42);
   hframe_copy234->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy234->GetZaxis()->SetLabelSize(0.05);
   hframe_copy234->GetZaxis()->SetTitleSize(0.06);
   hframe_copy234->GetZaxis()->SetTitleFont(42);
   hframe_copy234->Draw("sameaxis");
   ccwh3l_zg_13TeV_pt2->Modified();
   ccwh3l_zg_13TeV_pt2->cd();
   ccwh3l_zg_13TeV_pt2->SetSelected(ccwh3l_zg_13TeV_pt2);
}
