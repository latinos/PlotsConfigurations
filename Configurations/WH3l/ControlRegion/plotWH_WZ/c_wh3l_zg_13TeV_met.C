void c_wh3l_zg_13TeV_met()
{
//=========Macro generated from canvas: ccwh3l_zg_13TeV_met/cc
//=========  (Sat Jul  2 20:39:47 2016) by ROOT version6.02/13
   TCanvas *ccwh3l_zg_13TeV_met = new TCanvas("ccwh3l_zg_13TeV_met", "cc",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   ccwh3l_zg_13TeV_met->SetHighLightColor(2);
   ccwh3l_zg_13TeV_met->Range(-40,-13.62827,210,91.20455);
   ccwh3l_zg_13TeV_met->SetFillColor(0);
   ccwh3l_zg_13TeV_met->SetBorderMode(0);
   ccwh3l_zg_13TeV_met->SetBorderSize(2);
   ccwh3l_zg_13TeV_met->SetTickx(1);
   ccwh3l_zg_13TeV_met->SetTicky(1);
   ccwh3l_zg_13TeV_met->SetLeftMargin(0.16);
   ccwh3l_zg_13TeV_met->SetRightMargin(0.04);
   ccwh3l_zg_13TeV_met->SetTopMargin(0.05);
   ccwh3l_zg_13TeV_met->SetBottomMargin(0.13);
   ccwh3l_zg_13TeV_met->SetFrameFillStyle(0);
   ccwh3l_zg_13TeV_met->SetFrameBorderMode(0);
   ccwh3l_zg_13TeV_met->SetFrameFillStyle(0);
   ccwh3l_zg_13TeV_met->SetFrameBorderMode(0);
   
   TH1F *hframe199 = new TH1F("hframe199","",1000,0,200);
   hframe199->SetMinimum(0);
   hframe199->SetMaximum(85.96291);
   hframe199->SetDirectory(0);
   hframe199->SetStats(0);
   hframe199->SetLineStyle(0);
   hframe199->SetMarkerStyle(20);
   hframe199->GetXaxis()->SetTitle("pfmet [GeV]");
   hframe199->GetXaxis()->SetNdivisions(506);
   hframe199->GetXaxis()->SetLabelFont(42);
   hframe199->GetXaxis()->SetLabelOffset(0.007);
   hframe199->GetXaxis()->SetLabelSize(0.05);
   hframe199->GetXaxis()->SetTitleSize(0.06);
   hframe199->GetXaxis()->SetTitleOffset(0.9);
   hframe199->GetXaxis()->SetTitleFont(42);
   hframe199->GetYaxis()->SetTitle("Events");
   hframe199->GetYaxis()->SetLabelFont(42);
   hframe199->GetYaxis()->SetLabelOffset(0.007);
   hframe199->GetYaxis()->SetLabelSize(0.05);
   hframe199->GetYaxis()->SetTitleSize(0.06);
   hframe199->GetYaxis()->SetTitleOffset(1.25);
   hframe199->GetYaxis()->SetTitleFont(42);
   hframe199->GetZaxis()->SetLabelFont(42);
   hframe199->GetZaxis()->SetLabelOffset(0.007);
   hframe199->GetZaxis()->SetLabelSize(0.05);
   hframe199->GetZaxis()->SetTitleSize(0.06);
   hframe199->GetZaxis()->SetTitleFont(42);
   hframe199->Draw(" ");
   
   THStack *thsBackground_grouped_wh3l_zg_13TeV_met = new THStack();
   thsBackground_grouped_wh3l_zg_13TeV_met->SetName("thsBackground_grouped_wh3l_zg_13TeV_met");
   thsBackground_grouped_wh3l_zg_13TeV_met->SetTitle("thsBackground_grouped_wh3l_zg_13TeV_met");
   
   TH1F *thsBackground_grouped_wh3l_zg_13TeV_met_stack_45 = new TH1F("thsBackground_grouped_wh3l_zg_13TeV_met_stack_45","thsBackground_grouped_wh3l_zg_13TeV_met",40,0,200);
   thsBackground_grouped_wh3l_zg_13TeV_met_stack_45->SetMinimum(-0.458704);
   thsBackground_grouped_wh3l_zg_13TeV_met_stack_45->SetMaximum(31.58726);
   thsBackground_grouped_wh3l_zg_13TeV_met_stack_45->SetDirectory(0);
   thsBackground_grouped_wh3l_zg_13TeV_met_stack_45->SetStats(0);
   thsBackground_grouped_wh3l_zg_13TeV_met_stack_45->SetLineStyle(0);
   thsBackground_grouped_wh3l_zg_13TeV_met_stack_45->SetMarkerStyle(20);
   thsBackground_grouped_wh3l_zg_13TeV_met_stack_45->GetXaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_met_stack_45->GetXaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_zg_13TeV_met_stack_45->GetXaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_zg_13TeV_met_stack_45->GetXaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_zg_13TeV_met_stack_45->GetXaxis()->SetTitleOffset(0.9);
   thsBackground_grouped_wh3l_zg_13TeV_met_stack_45->GetXaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_met_stack_45->GetYaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_met_stack_45->GetYaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_zg_13TeV_met_stack_45->GetYaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_zg_13TeV_met_stack_45->GetYaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_zg_13TeV_met_stack_45->GetYaxis()->SetTitleOffset(1.25);
   thsBackground_grouped_wh3l_zg_13TeV_met_stack_45->GetYaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_met_stack_45->GetZaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_met_stack_45->GetZaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_zg_13TeV_met_stack_45->GetZaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_zg_13TeV_met_stack_45->GetZaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_zg_13TeV_met_stack_45->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_met->SetHistogram(thsBackground_grouped_wh3l_zg_13TeV_met_stack_45);
   
   
   TH1D *new_histo_group_Fake_wh3l_zg_13TeV_met200 = new TH1D("new_histo_group_Fake_wh3l_zg_13TeV_met200","histo_Fake",40,0,200);
   new_histo_group_Fake_wh3l_zg_13TeV_met200->SetBinContent(1,2.421352);
   new_histo_group_Fake_wh3l_zg_13TeV_met200->SetBinContent(2,1.716224);
   new_histo_group_Fake_wh3l_zg_13TeV_met200->SetBinContent(3,4.790001);
   new_histo_group_Fake_wh3l_zg_13TeV_met200->SetBinContent(4,7.33007);
   new_histo_group_Fake_wh3l_zg_13TeV_met200->SetBinContent(5,3.176627);
   new_histo_group_Fake_wh3l_zg_13TeV_met200->SetBinContent(6,2.953963);
   new_histo_group_Fake_wh3l_zg_13TeV_met200->SetBinContent(7,1.171537);
   new_histo_group_Fake_wh3l_zg_13TeV_met200->SetBinContent(8,0.02102673);
   new_histo_group_Fake_wh3l_zg_13TeV_met200->SetBinError(1,1.238713);
   new_histo_group_Fake_wh3l_zg_13TeV_met200->SetBinError(2,1.517918);
   new_histo_group_Fake_wh3l_zg_13TeV_met200->SetBinError(3,2.086224);
   new_histo_group_Fake_wh3l_zg_13TeV_met200->SetBinError(4,2.098173);
   new_histo_group_Fake_wh3l_zg_13TeV_met200->SetBinError(5,1.528059);
   new_histo_group_Fake_wh3l_zg_13TeV_met200->SetBinError(6,1.420193);
   new_histo_group_Fake_wh3l_zg_13TeV_met200->SetBinError(7,1.150845);
   new_histo_group_Fake_wh3l_zg_13TeV_met200->SetBinError(8,0.4797307);
   new_histo_group_Fake_wh3l_zg_13TeV_met200->SetEntries(460);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_zg_13TeV_met200->SetFillColor(ci);
   new_histo_group_Fake_wh3l_zg_13TeV_met200->SetFillStyle(3001);

   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_zg_13TeV_met200->SetLineColor(ci);
   new_histo_group_Fake_wh3l_zg_13TeV_met200->GetXaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_zg_13TeV_met200->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_zg_13TeV_met200->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_zg_13TeV_met200->GetXaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_zg_13TeV_met200->GetYaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_zg_13TeV_met200->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_zg_13TeV_met200->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_zg_13TeV_met200->GetYaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_zg_13TeV_met200->GetZaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_zg_13TeV_met200->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_zg_13TeV_met200->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_zg_13TeV_met200->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_met->Add(new_histo_group_Fake_wh3l_zg_13TeV_met,"");
   
   TH1D *new_histo_group_WW_wh3l_zg_13TeV_met201 = new TH1D("new_histo_group_WW_wh3l_zg_13TeV_met201","histo_WW",40,0,200);
   new_histo_group_WW_wh3l_zg_13TeV_met201->SetBinContent(5,0.009961222);
   new_histo_group_WW_wh3l_zg_13TeV_met201->SetBinError(5,0.009961222);
   new_histo_group_WW_wh3l_zg_13TeV_met201->SetEntries(1);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_zg_13TeV_met201->SetFillColor(ci);
   new_histo_group_WW_wh3l_zg_13TeV_met201->SetFillStyle(3001);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_zg_13TeV_met201->SetLineColor(ci);
   new_histo_group_WW_wh3l_zg_13TeV_met201->GetXaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_zg_13TeV_met201->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_zg_13TeV_met201->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_zg_13TeV_met201->GetXaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_zg_13TeV_met201->GetYaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_zg_13TeV_met201->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_zg_13TeV_met201->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_zg_13TeV_met201->GetYaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_zg_13TeV_met201->GetZaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_zg_13TeV_met201->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_zg_13TeV_met201->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_zg_13TeV_met201->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_met->Add(new_histo_group_WW_wh3l_zg_13TeV_met,"");
   
   TH1D *new_histo_group_Vg_wh3l_zg_13TeV_met202 = new TH1D("new_histo_group_Vg_wh3l_zg_13TeV_met202","histo_Vg",40,0,200);
   new_histo_group_Vg_wh3l_zg_13TeV_met202->SetBinContent(1,5.829568);
   new_histo_group_Vg_wh3l_zg_13TeV_met202->SetBinContent(2,17.86219);
   new_histo_group_Vg_wh3l_zg_13TeV_met202->SetBinContent(3,21.53148);
   new_histo_group_Vg_wh3l_zg_13TeV_met202->SetBinContent(4,22.23898);
   new_histo_group_Vg_wh3l_zg_13TeV_met202->SetBinContent(5,14.06921);
   new_histo_group_Vg_wh3l_zg_13TeV_met202->SetBinContent(6,11.38229);
   new_histo_group_Vg_wh3l_zg_13TeV_met202->SetBinContent(7,7.082289);
   new_histo_group_Vg_wh3l_zg_13TeV_met202->SetBinContent(8,3.970827);
   new_histo_group_Vg_wh3l_zg_13TeV_met202->SetBinError(1,1.010758);
   new_histo_group_Vg_wh3l_zg_13TeV_met202->SetBinError(2,1.581677);
   new_histo_group_Vg_wh3l_zg_13TeV_met202->SetBinError(3,1.759008);
   new_histo_group_Vg_wh3l_zg_13TeV_met202->SetBinError(4,1.802561);
   new_histo_group_Vg_wh3l_zg_13TeV_met202->SetBinError(5,1.427355);
   new_histo_group_Vg_wh3l_zg_13TeV_met202->SetBinError(6,1.257522);
   new_histo_group_Vg_wh3l_zg_13TeV_met202->SetBinError(7,0.9588761);
   new_histo_group_Vg_wh3l_zg_13TeV_met202->SetBinError(8,0.7012155);
   new_histo_group_Vg_wh3l_zg_13TeV_met202->SetEntries(1376);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_zg_13TeV_met202->SetFillColor(ci);
   new_histo_group_Vg_wh3l_zg_13TeV_met202->SetFillStyle(3001);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_zg_13TeV_met202->SetLineColor(ci);
   new_histo_group_Vg_wh3l_zg_13TeV_met202->GetXaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_zg_13TeV_met202->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_zg_13TeV_met202->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_zg_13TeV_met202->GetXaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_zg_13TeV_met202->GetYaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_zg_13TeV_met202->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_zg_13TeV_met202->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_zg_13TeV_met202->GetYaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_zg_13TeV_met202->GetZaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_zg_13TeV_met202->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_zg_13TeV_met202->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_zg_13TeV_met202->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_met->Add(new_histo_group_Vg_wh3l_zg_13TeV_met,"");
   
   TH1D *new_histo_group_ZZ_wh3l_zg_13TeV_met203 = new TH1D("new_histo_group_ZZ_wh3l_zg_13TeV_met203","histo_ZZ",40,0,200);
   new_histo_group_ZZ_wh3l_zg_13TeV_met203->SetBinContent(2,0.1087932);
   new_histo_group_ZZ_wh3l_zg_13TeV_met203->SetBinContent(3,0.1234178);
   new_histo_group_ZZ_wh3l_zg_13TeV_met203->SetBinContent(4,0.2659183);
   new_histo_group_ZZ_wh3l_zg_13TeV_met203->SetBinContent(5,0.06699887);
   new_histo_group_ZZ_wh3l_zg_13TeV_met203->SetBinContent(6,0.02824018);
   new_histo_group_ZZ_wh3l_zg_13TeV_met203->SetBinError(2,0.06343333);
   new_histo_group_ZZ_wh3l_zg_13TeV_met203->SetBinError(3,0.07148601);
   new_histo_group_ZZ_wh3l_zg_13TeV_met203->SetBinError(4,0.1085147);
   new_histo_group_ZZ_wh3l_zg_13TeV_met203->SetBinError(5,0.04790679);
   new_histo_group_ZZ_wh3l_zg_13TeV_met203->SetBinError(6,0.02824018);
   new_histo_group_ZZ_wh3l_zg_13TeV_met203->SetEntries(16);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_zg_13TeV_met203->SetFillColor(ci);
   new_histo_group_ZZ_wh3l_zg_13TeV_met203->SetFillStyle(3001);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_zg_13TeV_met203->SetLineColor(ci);
   new_histo_group_ZZ_wh3l_zg_13TeV_met203->GetXaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_zg_13TeV_met203->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_zg_13TeV_met203->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_zg_13TeV_met203->GetXaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_zg_13TeV_met203->GetYaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_zg_13TeV_met203->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_zg_13TeV_met203->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_zg_13TeV_met203->GetYaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_zg_13TeV_met203->GetZaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_zg_13TeV_met203->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_zg_13TeV_met203->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_zg_13TeV_met203->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_met->Add(new_histo_group_ZZ_wh3l_zg_13TeV_met,"");
   
   TH1D *new_histo_group_WZ_wh3l_zg_13TeV_met204 = new TH1D("new_histo_group_WZ_wh3l_zg_13TeV_met204","histo_WZ",40,0,200);
   new_histo_group_WZ_wh3l_zg_13TeV_met204->SetBinContent(1,0.05282875);
   new_histo_group_WZ_wh3l_zg_13TeV_met204->SetBinContent(2,0.041395);
   new_histo_group_WZ_wh3l_zg_13TeV_met204->SetBinContent(3,0.1980493);
   new_histo_group_WZ_wh3l_zg_13TeV_met204->SetBinContent(4,0.2338188);
   new_histo_group_WZ_wh3l_zg_13TeV_met204->SetBinContent(5,0.2592659);
   new_histo_group_WZ_wh3l_zg_13TeV_met204->SetBinContent(6,0.3097498);
   new_histo_group_WZ_wh3l_zg_13TeV_met204->SetBinContent(7,0.3519368);
   new_histo_group_WZ_wh3l_zg_13TeV_met204->SetBinContent(8,0.4314798);
   new_histo_group_WZ_wh3l_zg_13TeV_met204->SetBinError(1,0.01707307);
   new_histo_group_WZ_wh3l_zg_13TeV_met204->SetBinError(2,0.01501421);
   new_histo_group_WZ_wh3l_zg_13TeV_met204->SetBinError(3,0.03247);
   new_histo_group_WZ_wh3l_zg_13TeV_met204->SetBinError(4,0.03614692);
   new_histo_group_WZ_wh3l_zg_13TeV_met204->SetBinError(5,0.03778944);
   new_histo_group_WZ_wh3l_zg_13TeV_met204->SetBinError(6,0.04020419);
   new_histo_group_WZ_wh3l_zg_13TeV_met204->SetBinError(7,0.04396201);
   new_histo_group_WZ_wh3l_zg_13TeV_met204->SetBinError(8,0.04868228);
   new_histo_group_WZ_wh3l_zg_13TeV_met204->SetEntries(376);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_zg_13TeV_met204->SetFillColor(ci);
   new_histo_group_WZ_wh3l_zg_13TeV_met204->SetFillStyle(3001);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_zg_13TeV_met204->SetLineColor(ci);
   new_histo_group_WZ_wh3l_zg_13TeV_met204->GetXaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_zg_13TeV_met204->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_zg_13TeV_met204->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_zg_13TeV_met204->GetXaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_zg_13TeV_met204->GetYaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_zg_13TeV_met204->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_zg_13TeV_met204->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_zg_13TeV_met204->GetYaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_zg_13TeV_met204->GetZaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_zg_13TeV_met204->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_zg_13TeV_met204->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_zg_13TeV_met204->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_met->Add(new_histo_group_WZ_wh3l_zg_13TeV_met,"");
   
   TH1D *new_histo_group_Higgs_wh3l_zg_13TeV_met205 = new TH1D("new_histo_group_Higgs_wh3l_zg_13TeV_met205","histo_H_htt",40,0,200);
   new_histo_group_Higgs_wh3l_zg_13TeV_met205->SetBinContent(1,0.0006229462);
   new_histo_group_Higgs_wh3l_zg_13TeV_met205->SetBinContent(2,0.00624209);
   new_histo_group_Higgs_wh3l_zg_13TeV_met205->SetBinContent(3,0.007358827);
   new_histo_group_Higgs_wh3l_zg_13TeV_met205->SetBinContent(4,0.01431604);
   new_histo_group_Higgs_wh3l_zg_13TeV_met205->SetBinContent(5,0.009062088);
   new_histo_group_Higgs_wh3l_zg_13TeV_met205->SetBinContent(6,0.01154924);
   new_histo_group_Higgs_wh3l_zg_13TeV_met205->SetBinContent(7,0.0116528);
   new_histo_group_Higgs_wh3l_zg_13TeV_met205->SetBinContent(8,0.02797262);
   new_histo_group_Higgs_wh3l_zg_13TeV_met205->SetBinError(1,0.0004444357);
   new_histo_group_Higgs_wh3l_zg_13TeV_met205->SetBinError(2,0.003149423);
   new_histo_group_Higgs_wh3l_zg_13TeV_met205->SetBinError(3,0.003181172);
   new_histo_group_Higgs_wh3l_zg_13TeV_met205->SetBinError(4,0.003913516);
   new_histo_group_Higgs_wh3l_zg_13TeV_met205->SetBinError(5,0.002357696);
   new_histo_group_Higgs_wh3l_zg_13TeV_met205->SetBinError(6,0.003708895);
   new_histo_group_Higgs_wh3l_zg_13TeV_met205->SetBinError(7,0.003328596);
   new_histo_group_Higgs_wh3l_zg_13TeV_met205->SetBinError(8,0.005399023);
   new_histo_group_Higgs_wh3l_zg_13TeV_met205->SetEntries(180);
   new_histo_group_Higgs_wh3l_zg_13TeV_met205->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_zg_13TeV_met205->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_zg_13TeV_met205->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_zg_13TeV_met205->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_zg_13TeV_met205->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_zg_13TeV_met205->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_zg_13TeV_met205->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_zg_13TeV_met205->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_zg_13TeV_met205->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_zg_13TeV_met205->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_zg_13TeV_met205->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_zg_13TeV_met205->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_zg_13TeV_met205->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_zg_13TeV_met205->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_zg_13TeV_met205->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_met->Add(new_histo_group_Higgs_wh3l_zg_13TeV_met,"");
   thsBackground_grouped_wh3l_zg_13TeV_met->Draw("hist same");
   
   thsSignal_grouped_wh3l_zg_13TeV_met = new THStack();
   thsSignal_grouped_wh3l_zg_13TeV_met->SetName("thsSignal_grouped_wh3l_zg_13TeV_met");
   thsSignal_grouped_wh3l_zg_13TeV_met->SetTitle("thsSignal_grouped_wh3l_zg_13TeV_met");
   
   TH1F *thsSignal_grouped_wh3l_zg_13TeV_met_stack_46 = new TH1F("thsSignal_grouped_wh3l_zg_13TeV_met_stack_46","thsSignal_grouped_wh3l_zg_13TeV_met",40,0,200);
   thsSignal_grouped_wh3l_zg_13TeV_met_stack_46->SetMinimum(0);
   thsSignal_grouped_wh3l_zg_13TeV_met_stack_46->SetMaximum(0.03504022);
   thsSignal_grouped_wh3l_zg_13TeV_met_stack_46->SetDirectory(0);
   thsSignal_grouped_wh3l_zg_13TeV_met_stack_46->SetStats(0);
   thsSignal_grouped_wh3l_zg_13TeV_met_stack_46->SetLineStyle(0);
   thsSignal_grouped_wh3l_zg_13TeV_met_stack_46->SetMarkerStyle(20);
   thsSignal_grouped_wh3l_zg_13TeV_met_stack_46->GetXaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_zg_13TeV_met_stack_46->GetXaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_zg_13TeV_met_stack_46->GetXaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_zg_13TeV_met_stack_46->GetXaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_zg_13TeV_met_stack_46->GetXaxis()->SetTitleOffset(0.9);
   thsSignal_grouped_wh3l_zg_13TeV_met_stack_46->GetXaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_zg_13TeV_met_stack_46->GetYaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_zg_13TeV_met_stack_46->GetYaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_zg_13TeV_met_stack_46->GetYaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_zg_13TeV_met_stack_46->GetYaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_zg_13TeV_met_stack_46->GetYaxis()->SetTitleOffset(1.25);
   thsSignal_grouped_wh3l_zg_13TeV_met_stack_46->GetYaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_zg_13TeV_met_stack_46->GetZaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_zg_13TeV_met_stack_46->GetZaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_zg_13TeV_met_stack_46->GetZaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_zg_13TeV_met_stack_46->GetZaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_zg_13TeV_met_stack_46->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_zg_13TeV_met->SetHistogram(thsSignal_grouped_wh3l_zg_13TeV_met_stack_46);
   
   
   TH1D *new_histo_group_Higgs_wh3l_zg_13TeV_met206 = new TH1D("new_histo_group_Higgs_wh3l_zg_13TeV_met206","histo_H_htt",40,0,200);
   new_histo_group_Higgs_wh3l_zg_13TeV_met206->SetBinContent(1,0.0006229462);
   new_histo_group_Higgs_wh3l_zg_13TeV_met206->SetBinContent(2,0.00624209);
   new_histo_group_Higgs_wh3l_zg_13TeV_met206->SetBinContent(3,0.007358827);
   new_histo_group_Higgs_wh3l_zg_13TeV_met206->SetBinContent(4,0.01431604);
   new_histo_group_Higgs_wh3l_zg_13TeV_met206->SetBinContent(5,0.009062088);
   new_histo_group_Higgs_wh3l_zg_13TeV_met206->SetBinContent(6,0.01154924);
   new_histo_group_Higgs_wh3l_zg_13TeV_met206->SetBinContent(7,0.0116528);
   new_histo_group_Higgs_wh3l_zg_13TeV_met206->SetBinContent(8,0.02797262);
   new_histo_group_Higgs_wh3l_zg_13TeV_met206->SetBinError(1,0.0004444357);
   new_histo_group_Higgs_wh3l_zg_13TeV_met206->SetBinError(2,0.003149423);
   new_histo_group_Higgs_wh3l_zg_13TeV_met206->SetBinError(3,0.003181172);
   new_histo_group_Higgs_wh3l_zg_13TeV_met206->SetBinError(4,0.003913516);
   new_histo_group_Higgs_wh3l_zg_13TeV_met206->SetBinError(5,0.002357696);
   new_histo_group_Higgs_wh3l_zg_13TeV_met206->SetBinError(6,0.003708895);
   new_histo_group_Higgs_wh3l_zg_13TeV_met206->SetBinError(7,0.003328596);
   new_histo_group_Higgs_wh3l_zg_13TeV_met206->SetBinError(8,0.005399023);
   new_histo_group_Higgs_wh3l_zg_13TeV_met206->SetEntries(180);
   new_histo_group_Higgs_wh3l_zg_13TeV_met206->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_zg_13TeV_met206->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_zg_13TeV_met206->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_zg_13TeV_met206->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_zg_13TeV_met206->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_zg_13TeV_met206->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_zg_13TeV_met206->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_zg_13TeV_met206->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_zg_13TeV_met206->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_zg_13TeV_met206->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_zg_13TeV_met206->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_zg_13TeV_met206->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_zg_13TeV_met206->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_zg_13TeV_met206->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_zg_13TeV_met206->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_zg_13TeV_met->Add(new_histo_group_Higgs_wh3l_zg_13TeV_met,"");
   thsSignal_grouped_wh3l_zg_13TeV_met->Draw("hist same noclear");
   
   Double_t _fx3045[40] = {
   2.5,
   7.5,
   12.5,
   17.5,
   22.5,
   27.5,
   32.5,
   37.5,
   42.5,
   47.5,
   52.5,
   57.5,
   62.5,
   67.5,
   72.5,
   77.5,
   82.5,
   87.5,
   92.5,
   97.5,
   102.5,
   107.5,
   112.5,
   117.5,
   122.5,
   127.5,
   132.5,
   137.5,
   142.5,
   147.5,
   152.5,
   157.5,
   162.5,
   167.5,
   172.5,
   177.5,
   182.5,
   187.5,
   192.5,
   197.5};
   Double_t _fy3045[40] = {
   8.303749,
   19.72861,
   26.64295,
   30.06879,
   17.58206,
   14.67425,
   8.605762,
   4.423333,
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
   Double_t _felx3045[40] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5};
   Double_t _fely3045[40] = {
   2.435722,
   3.342208,
   4.404871,
   4.910488,
   3.306322,
   2.986696,
   2.219906,
   0.8031094,
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
   Double_t _fehx3045[40] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5};
   Double_t _fehy3045[40] = {
   2.435593,
   3.338735,
   4.400323,
   4.907156,
   3.303286,
   2.98569,
   2.219179,
   1.249881,
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
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(40,_fx3045,_fy3045,_felx3045,_fehx3045,_fely3045,_fehy3045);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(12);
   grae->SetFillStyle(3004);
   grae->SetLineColor(12);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3045 = new TH1F("Graph_Graph3045","",100,0,220);
   Graph_Graph3045->SetMinimum(0);
   Graph_Graph3045->SetMaximum(38.47354);
   Graph_Graph3045->SetDirectory(0);
   Graph_Graph3045->SetStats(0);
   Graph_Graph3045->SetLineStyle(0);
   Graph_Graph3045->SetMarkerStyle(20);
   Graph_Graph3045->GetXaxis()->SetLabelFont(42);
   Graph_Graph3045->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3045->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3045->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3045->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3045->GetXaxis()->SetTitleFont(42);
   Graph_Graph3045->GetYaxis()->SetLabelFont(42);
   Graph_Graph3045->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3045->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3045->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3045->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3045->GetYaxis()->SetTitleFont(42);
   Graph_Graph3045->GetZaxis()->SetLabelFont(42);
   Graph_Graph3045->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3045->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3045->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3045->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3045);
   
   grae->Draw("2");
   
   Double_t _fx3046[40] = {
   2.5,
   7.5,
   12.5,
   17.5,
   22.5,
   27.5,
   32.5,
   37.5,
   42.5,
   47.5,
   52.5,
   57.5,
   62.5,
   67.5,
   72.5,
   77.5,
   82.5,
   87.5,
   92.5,
   97.5,
   102.5,
   107.5,
   112.5,
   117.5,
   122.5,
   127.5,
   132.5,
   137.5,
   142.5,
   147.5,
   152.5,
   157.5,
   162.5,
   167.5,
   172.5,
   177.5,
   182.5,
   187.5,
   192.5,
   197.5};
   Double_t _fy3046[40] = {
   10,
   29,
   28,
   25,
   20,
   6,
   10,
   5,
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
   Double_t _felx3046[40] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5};
   Double_t _fely3046[40] = {
   3.108748,
   5.354033,
   5.259811,
   4.966428,
   4.43453,
   2.379969,
   3.108748,
   2.159724,
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
   Double_t _fehx3046[40] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5};
   Double_t _fehy3046[40] = {
   4.267035,
   6.447153,
   6.354577,
   6.066714,
   5.546633,
   3.583713,
   4.267035,
   3.382539,
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
   grae = new TGraphAsymmErrors(40,_fx3046,_fy3046,_felx3046,_fehx3046,_fely3046,_fehy3046);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(1);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3046 = new TH1F("Graph_Graph3046","",100,0,220);
   Graph_Graph3046->SetMinimum(0);
   Graph_Graph3046->SetMaximum(38.99187);
   Graph_Graph3046->SetDirectory(0);
   Graph_Graph3046->SetStats(0);
   Graph_Graph3046->SetLineStyle(0);
   Graph_Graph3046->SetMarkerStyle(20);
   Graph_Graph3046->GetXaxis()->SetLabelFont(42);
   Graph_Graph3046->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3046->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3046->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3046->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3046->GetXaxis()->SetTitleFont(42);
   Graph_Graph3046->GetYaxis()->SetLabelFont(42);
   Graph_Graph3046->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3046->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3046->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3046->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3046->GetYaxis()->SetTitleFont(42);
   Graph_Graph3046->GetZaxis()->SetLabelFont(42);
   Graph_Graph3046->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3046->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3046->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3046->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3046);
   
   grae->Draw("p0");
   
   TLegend *leg = new TLegend(0.2,0.7,0.8,0.9,NULL,"brNDC");
   leg->SetTextFont(62);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("new_histo_group_Fake_wh3l_zg_13TeV_met","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_zg_13TeV_met","WW","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_zg_13TeV_met","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_zg_13TeV_met","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_zg_13TeV_met","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_zg_13TeV_met","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_zg_13TeV_met","Data","EPL");
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
   entry=leg->AddEntry("new_histo_group_Fake_wh3l_zg_13TeV_met","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_zg_13TeV_met","WW","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_zg_13TeV_met","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_zg_13TeV_met","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_zg_13TeV_met","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_zg_13TeV_met","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_zg_13TeV_met","Data","EPL");
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
   
   TH1F *hframe_copy207 = new TH1F("hframe_copy207","",1000,0,200);
   hframe_copy207->SetMinimum(0);
   hframe_copy207->SetMaximum(85.96291);
   hframe_copy207->SetDirectory(0);
   hframe_copy207->SetStats(0);
   hframe_copy207->SetLineStyle(0);
   hframe_copy207->SetMarkerStyle(20);
   hframe_copy207->GetXaxis()->SetTitle("pfmet [GeV]");
   hframe_copy207->GetXaxis()->SetNdivisions(506);
   hframe_copy207->GetXaxis()->SetLabelFont(42);
   hframe_copy207->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy207->GetXaxis()->SetLabelSize(0.05);
   hframe_copy207->GetXaxis()->SetTitleSize(0.06);
   hframe_copy207->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy207->GetXaxis()->SetTitleFont(42);
   hframe_copy207->GetYaxis()->SetTitle("Events");
   hframe_copy207->GetYaxis()->SetLabelFont(42);
   hframe_copy207->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy207->GetYaxis()->SetLabelSize(0.05);
   hframe_copy207->GetYaxis()->SetTitleSize(0.06);
   hframe_copy207->GetYaxis()->SetTitleOffset(1.25);
   hframe_copy207->GetYaxis()->SetTitleFont(42);
   hframe_copy207->GetZaxis()->SetLabelFont(42);
   hframe_copy207->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy207->GetZaxis()->SetLabelSize(0.05);
   hframe_copy207->GetZaxis()->SetTitleSize(0.06);
   hframe_copy207->GetZaxis()->SetTitleFont(42);
   hframe_copy207->Draw("sameaxis");
   ccwh3l_zg_13TeV_met->Modified();
   ccwh3l_zg_13TeV_met->cd();
   ccwh3l_zg_13TeV_met->SetSelected(ccwh3l_zg_13TeV_met);
}
