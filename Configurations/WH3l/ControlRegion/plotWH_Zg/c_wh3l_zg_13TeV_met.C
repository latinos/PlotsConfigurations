void c_wh3l_zg_13TeV_met()
{
//=========Macro generated from canvas: ccwh3l_zg_13TeV_met/cc
//=========  (Sun Jul  3 22:42:32 2016) by ROOT version6.02/13
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
   
   TH1F *hframe46 = new TH1F("hframe46","",1000,0,200);
   hframe46->SetMinimum(0);
   hframe46->SetMaximum(85.96291);
   hframe46->SetDirectory(0);
   hframe46->SetStats(0);
   hframe46->SetLineStyle(0);
   hframe46->SetMarkerStyle(20);
   hframe46->GetXaxis()->SetTitle("pfmet [GeV]");
   hframe46->GetXaxis()->SetNdivisions(506);
   hframe46->GetXaxis()->SetLabelFont(42);
   hframe46->GetXaxis()->SetLabelOffset(0.007);
   hframe46->GetXaxis()->SetLabelSize(0.05);
   hframe46->GetXaxis()->SetTitleSize(0.06);
   hframe46->GetXaxis()->SetTitleOffset(0.9);
   hframe46->GetXaxis()->SetTitleFont(42);
   hframe46->GetYaxis()->SetTitle("Events");
   hframe46->GetYaxis()->SetLabelFont(42);
   hframe46->GetYaxis()->SetLabelOffset(0.007);
   hframe46->GetYaxis()->SetLabelSize(0.05);
   hframe46->GetYaxis()->SetTitleSize(0.06);
   hframe46->GetYaxis()->SetTitleOffset(1.25);
   hframe46->GetYaxis()->SetTitleFont(42);
   hframe46->GetZaxis()->SetLabelFont(42);
   hframe46->GetZaxis()->SetLabelOffset(0.007);
   hframe46->GetZaxis()->SetLabelSize(0.05);
   hframe46->GetZaxis()->SetTitleSize(0.06);
   hframe46->GetZaxis()->SetTitleFont(42);
   hframe46->Draw(" ");
   
   THStack *thsBackground_grouped_wh3l_zg_13TeV_met = new THStack();
   thsBackground_grouped_wh3l_zg_13TeV_met->SetName("thsBackground_grouped_wh3l_zg_13TeV_met");
   thsBackground_grouped_wh3l_zg_13TeV_met->SetTitle("thsBackground_grouped_wh3l_zg_13TeV_met");
   
   TH1F *thsBackground_grouped_wh3l_zg_13TeV_met_stack_11 = new TH1F("thsBackground_grouped_wh3l_zg_13TeV_met_stack_11","thsBackground_grouped_wh3l_zg_13TeV_met",40,0,200);
   thsBackground_grouped_wh3l_zg_13TeV_met_stack_11->SetMinimum(-0.458704);
   thsBackground_grouped_wh3l_zg_13TeV_met_stack_11->SetMaximum(31.58726);
   thsBackground_grouped_wh3l_zg_13TeV_met_stack_11->SetDirectory(0);
   thsBackground_grouped_wh3l_zg_13TeV_met_stack_11->SetStats(0);
   thsBackground_grouped_wh3l_zg_13TeV_met_stack_11->SetLineStyle(0);
   thsBackground_grouped_wh3l_zg_13TeV_met_stack_11->SetMarkerStyle(20);
   thsBackground_grouped_wh3l_zg_13TeV_met_stack_11->GetXaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_met_stack_11->GetXaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_zg_13TeV_met_stack_11->GetXaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_zg_13TeV_met_stack_11->GetXaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_zg_13TeV_met_stack_11->GetXaxis()->SetTitleOffset(0.9);
   thsBackground_grouped_wh3l_zg_13TeV_met_stack_11->GetXaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_met_stack_11->GetYaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_met_stack_11->GetYaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_zg_13TeV_met_stack_11->GetYaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_zg_13TeV_met_stack_11->GetYaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_zg_13TeV_met_stack_11->GetYaxis()->SetTitleOffset(1.25);
   thsBackground_grouped_wh3l_zg_13TeV_met_stack_11->GetYaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_met_stack_11->GetZaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_met_stack_11->GetZaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_zg_13TeV_met_stack_11->GetZaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_zg_13TeV_met_stack_11->GetZaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_zg_13TeV_met_stack_11->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_met->SetHistogram(thsBackground_grouped_wh3l_zg_13TeV_met_stack_11);
   
   
   TH1D *new_histo_group_Fake_wh3l_zg_13TeV_met47 = new TH1D("new_histo_group_Fake_wh3l_zg_13TeV_met47","histo_Fake",40,0,200);
   new_histo_group_Fake_wh3l_zg_13TeV_met47->SetBinContent(1,2.421352);
   new_histo_group_Fake_wh3l_zg_13TeV_met47->SetBinContent(2,1.716224);
   new_histo_group_Fake_wh3l_zg_13TeV_met47->SetBinContent(3,4.790001);
   new_histo_group_Fake_wh3l_zg_13TeV_met47->SetBinContent(4,7.33007);
   new_histo_group_Fake_wh3l_zg_13TeV_met47->SetBinContent(5,3.176627);
   new_histo_group_Fake_wh3l_zg_13TeV_met47->SetBinContent(6,2.953963);
   new_histo_group_Fake_wh3l_zg_13TeV_met47->SetBinContent(7,1.171537);
   new_histo_group_Fake_wh3l_zg_13TeV_met47->SetBinContent(8,0.02102673);
   new_histo_group_Fake_wh3l_zg_13TeV_met47->SetBinError(1,1.238713);
   new_histo_group_Fake_wh3l_zg_13TeV_met47->SetBinError(2,1.517918);
   new_histo_group_Fake_wh3l_zg_13TeV_met47->SetBinError(3,2.086224);
   new_histo_group_Fake_wh3l_zg_13TeV_met47->SetBinError(4,2.098173);
   new_histo_group_Fake_wh3l_zg_13TeV_met47->SetBinError(5,1.528059);
   new_histo_group_Fake_wh3l_zg_13TeV_met47->SetBinError(6,1.420193);
   new_histo_group_Fake_wh3l_zg_13TeV_met47->SetBinError(7,1.150845);
   new_histo_group_Fake_wh3l_zg_13TeV_met47->SetBinError(8,0.4797307);
   new_histo_group_Fake_wh3l_zg_13TeV_met47->SetEntries(460);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_zg_13TeV_met47->SetFillColor(ci);
   new_histo_group_Fake_wh3l_zg_13TeV_met47->SetFillStyle(3001);

   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_zg_13TeV_met47->SetLineColor(ci);
   new_histo_group_Fake_wh3l_zg_13TeV_met47->GetXaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_zg_13TeV_met47->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_zg_13TeV_met47->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_zg_13TeV_met47->GetXaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_zg_13TeV_met47->GetYaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_zg_13TeV_met47->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_zg_13TeV_met47->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_zg_13TeV_met47->GetYaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_zg_13TeV_met47->GetZaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_zg_13TeV_met47->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_zg_13TeV_met47->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_zg_13TeV_met47->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_met->Add(new_histo_group_Fake_wh3l_zg_13TeV_met,"");
   
   TH1D *new_histo_group_WW_wh3l_zg_13TeV_met48 = new TH1D("new_histo_group_WW_wh3l_zg_13TeV_met48","histo_WW",40,0,200);
   new_histo_group_WW_wh3l_zg_13TeV_met48->SetBinContent(5,0.009961222);
   new_histo_group_WW_wh3l_zg_13TeV_met48->SetBinError(5,0.009961222);
   new_histo_group_WW_wh3l_zg_13TeV_met48->SetEntries(1);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_zg_13TeV_met48->SetFillColor(ci);
   new_histo_group_WW_wh3l_zg_13TeV_met48->SetFillStyle(3001);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_zg_13TeV_met48->SetLineColor(ci);
   new_histo_group_WW_wh3l_zg_13TeV_met48->GetXaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_zg_13TeV_met48->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_zg_13TeV_met48->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_zg_13TeV_met48->GetXaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_zg_13TeV_met48->GetYaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_zg_13TeV_met48->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_zg_13TeV_met48->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_zg_13TeV_met48->GetYaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_zg_13TeV_met48->GetZaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_zg_13TeV_met48->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_zg_13TeV_met48->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_zg_13TeV_met48->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_met->Add(new_histo_group_WW_wh3l_zg_13TeV_met,"");
   
   TH1D *new_histo_group_Vg_wh3l_zg_13TeV_met49 = new TH1D("new_histo_group_Vg_wh3l_zg_13TeV_met49","histo_Vg",40,0,200);
   new_histo_group_Vg_wh3l_zg_13TeV_met49->SetBinContent(1,5.829568);
   new_histo_group_Vg_wh3l_zg_13TeV_met49->SetBinContent(2,17.86219);
   new_histo_group_Vg_wh3l_zg_13TeV_met49->SetBinContent(3,21.53148);
   new_histo_group_Vg_wh3l_zg_13TeV_met49->SetBinContent(4,22.23898);
   new_histo_group_Vg_wh3l_zg_13TeV_met49->SetBinContent(5,14.06921);
   new_histo_group_Vg_wh3l_zg_13TeV_met49->SetBinContent(6,11.38229);
   new_histo_group_Vg_wh3l_zg_13TeV_met49->SetBinContent(7,7.082289);
   new_histo_group_Vg_wh3l_zg_13TeV_met49->SetBinContent(8,3.970827);
   new_histo_group_Vg_wh3l_zg_13TeV_met49->SetBinError(1,1.010758);
   new_histo_group_Vg_wh3l_zg_13TeV_met49->SetBinError(2,1.581677);
   new_histo_group_Vg_wh3l_zg_13TeV_met49->SetBinError(3,1.759008);
   new_histo_group_Vg_wh3l_zg_13TeV_met49->SetBinError(4,1.802561);
   new_histo_group_Vg_wh3l_zg_13TeV_met49->SetBinError(5,1.427355);
   new_histo_group_Vg_wh3l_zg_13TeV_met49->SetBinError(6,1.257522);
   new_histo_group_Vg_wh3l_zg_13TeV_met49->SetBinError(7,0.9588761);
   new_histo_group_Vg_wh3l_zg_13TeV_met49->SetBinError(8,0.7012155);
   new_histo_group_Vg_wh3l_zg_13TeV_met49->SetEntries(1376);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_zg_13TeV_met49->SetFillColor(ci);
   new_histo_group_Vg_wh3l_zg_13TeV_met49->SetFillStyle(3001);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_zg_13TeV_met49->SetLineColor(ci);
   new_histo_group_Vg_wh3l_zg_13TeV_met49->GetXaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_zg_13TeV_met49->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_zg_13TeV_met49->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_zg_13TeV_met49->GetXaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_zg_13TeV_met49->GetYaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_zg_13TeV_met49->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_zg_13TeV_met49->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_zg_13TeV_met49->GetYaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_zg_13TeV_met49->GetZaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_zg_13TeV_met49->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_zg_13TeV_met49->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_zg_13TeV_met49->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_met->Add(new_histo_group_Vg_wh3l_zg_13TeV_met,"");
   
   TH1D *new_histo_group_ZZ_wh3l_zg_13TeV_met50 = new TH1D("new_histo_group_ZZ_wh3l_zg_13TeV_met50","histo_ZZ",40,0,200);
   new_histo_group_ZZ_wh3l_zg_13TeV_met50->SetBinContent(2,0.1087932);
   new_histo_group_ZZ_wh3l_zg_13TeV_met50->SetBinContent(3,0.1234178);
   new_histo_group_ZZ_wh3l_zg_13TeV_met50->SetBinContent(4,0.2659183);
   new_histo_group_ZZ_wh3l_zg_13TeV_met50->SetBinContent(5,0.06699887);
   new_histo_group_ZZ_wh3l_zg_13TeV_met50->SetBinContent(6,0.02824018);
   new_histo_group_ZZ_wh3l_zg_13TeV_met50->SetBinError(2,0.06343333);
   new_histo_group_ZZ_wh3l_zg_13TeV_met50->SetBinError(3,0.07148601);
   new_histo_group_ZZ_wh3l_zg_13TeV_met50->SetBinError(4,0.1085147);
   new_histo_group_ZZ_wh3l_zg_13TeV_met50->SetBinError(5,0.04790679);
   new_histo_group_ZZ_wh3l_zg_13TeV_met50->SetBinError(6,0.02824018);
   new_histo_group_ZZ_wh3l_zg_13TeV_met50->SetEntries(16);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_zg_13TeV_met50->SetFillColor(ci);
   new_histo_group_ZZ_wh3l_zg_13TeV_met50->SetFillStyle(3001);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_zg_13TeV_met50->SetLineColor(ci);
   new_histo_group_ZZ_wh3l_zg_13TeV_met50->GetXaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_zg_13TeV_met50->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_zg_13TeV_met50->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_zg_13TeV_met50->GetXaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_zg_13TeV_met50->GetYaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_zg_13TeV_met50->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_zg_13TeV_met50->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_zg_13TeV_met50->GetYaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_zg_13TeV_met50->GetZaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_zg_13TeV_met50->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_zg_13TeV_met50->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_zg_13TeV_met50->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_met->Add(new_histo_group_ZZ_wh3l_zg_13TeV_met,"");
   
   TH1D *new_histo_group_WZ_wh3l_zg_13TeV_met51 = new TH1D("new_histo_group_WZ_wh3l_zg_13TeV_met51","histo_WZ",40,0,200);
   new_histo_group_WZ_wh3l_zg_13TeV_met51->SetBinContent(1,0.05282875);
   new_histo_group_WZ_wh3l_zg_13TeV_met51->SetBinContent(2,0.041395);
   new_histo_group_WZ_wh3l_zg_13TeV_met51->SetBinContent(3,0.1980493);
   new_histo_group_WZ_wh3l_zg_13TeV_met51->SetBinContent(4,0.2338188);
   new_histo_group_WZ_wh3l_zg_13TeV_met51->SetBinContent(5,0.2592659);
   new_histo_group_WZ_wh3l_zg_13TeV_met51->SetBinContent(6,0.3097498);
   new_histo_group_WZ_wh3l_zg_13TeV_met51->SetBinContent(7,0.3519368);
   new_histo_group_WZ_wh3l_zg_13TeV_met51->SetBinContent(8,0.4314798);
   new_histo_group_WZ_wh3l_zg_13TeV_met51->SetBinError(1,0.01707307);
   new_histo_group_WZ_wh3l_zg_13TeV_met51->SetBinError(2,0.01501421);
   new_histo_group_WZ_wh3l_zg_13TeV_met51->SetBinError(3,0.03247);
   new_histo_group_WZ_wh3l_zg_13TeV_met51->SetBinError(4,0.03614692);
   new_histo_group_WZ_wh3l_zg_13TeV_met51->SetBinError(5,0.03778944);
   new_histo_group_WZ_wh3l_zg_13TeV_met51->SetBinError(6,0.04020419);
   new_histo_group_WZ_wh3l_zg_13TeV_met51->SetBinError(7,0.04396201);
   new_histo_group_WZ_wh3l_zg_13TeV_met51->SetBinError(8,0.04868228);
   new_histo_group_WZ_wh3l_zg_13TeV_met51->SetEntries(376);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_zg_13TeV_met51->SetFillColor(ci);
   new_histo_group_WZ_wh3l_zg_13TeV_met51->SetFillStyle(3001);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_zg_13TeV_met51->SetLineColor(ci);
   new_histo_group_WZ_wh3l_zg_13TeV_met51->GetXaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_zg_13TeV_met51->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_zg_13TeV_met51->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_zg_13TeV_met51->GetXaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_zg_13TeV_met51->GetYaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_zg_13TeV_met51->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_zg_13TeV_met51->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_zg_13TeV_met51->GetYaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_zg_13TeV_met51->GetZaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_zg_13TeV_met51->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_zg_13TeV_met51->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_zg_13TeV_met51->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_met->Add(new_histo_group_WZ_wh3l_zg_13TeV_met,"");
   
   TH1D *new_histo_group_Higgs_wh3l_zg_13TeV_met52 = new TH1D("new_histo_group_Higgs_wh3l_zg_13TeV_met52","histo_H_htt",40,0,200);
   new_histo_group_Higgs_wh3l_zg_13TeV_met52->SetBinContent(1,0.0006229462);
   new_histo_group_Higgs_wh3l_zg_13TeV_met52->SetBinContent(2,0.00624209);
   new_histo_group_Higgs_wh3l_zg_13TeV_met52->SetBinContent(3,0.007358827);
   new_histo_group_Higgs_wh3l_zg_13TeV_met52->SetBinContent(4,0.01431604);
   new_histo_group_Higgs_wh3l_zg_13TeV_met52->SetBinContent(5,0.009062088);
   new_histo_group_Higgs_wh3l_zg_13TeV_met52->SetBinContent(6,0.01154924);
   new_histo_group_Higgs_wh3l_zg_13TeV_met52->SetBinContent(7,0.0116528);
   new_histo_group_Higgs_wh3l_zg_13TeV_met52->SetBinContent(8,0.02797262);
   new_histo_group_Higgs_wh3l_zg_13TeV_met52->SetBinError(1,0.0004444357);
   new_histo_group_Higgs_wh3l_zg_13TeV_met52->SetBinError(2,0.003149423);
   new_histo_group_Higgs_wh3l_zg_13TeV_met52->SetBinError(3,0.003181172);
   new_histo_group_Higgs_wh3l_zg_13TeV_met52->SetBinError(4,0.003913516);
   new_histo_group_Higgs_wh3l_zg_13TeV_met52->SetBinError(5,0.002357696);
   new_histo_group_Higgs_wh3l_zg_13TeV_met52->SetBinError(6,0.003708895);
   new_histo_group_Higgs_wh3l_zg_13TeV_met52->SetBinError(7,0.003328596);
   new_histo_group_Higgs_wh3l_zg_13TeV_met52->SetBinError(8,0.005399023);
   new_histo_group_Higgs_wh3l_zg_13TeV_met52->SetEntries(180);
   new_histo_group_Higgs_wh3l_zg_13TeV_met52->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_zg_13TeV_met52->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_zg_13TeV_met52->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_zg_13TeV_met52->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_zg_13TeV_met52->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_zg_13TeV_met52->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_zg_13TeV_met52->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_zg_13TeV_met52->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_zg_13TeV_met52->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_zg_13TeV_met52->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_zg_13TeV_met52->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_zg_13TeV_met52->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_zg_13TeV_met52->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_zg_13TeV_met52->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_zg_13TeV_met52->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_met->Add(new_histo_group_Higgs_wh3l_zg_13TeV_met,"");
   thsBackground_grouped_wh3l_zg_13TeV_met->Draw("hist same");
   
   thsSignal_grouped_wh3l_zg_13TeV_met = new THStack();
   thsSignal_grouped_wh3l_zg_13TeV_met->SetName("thsSignal_grouped_wh3l_zg_13TeV_met");
   thsSignal_grouped_wh3l_zg_13TeV_met->SetTitle("thsSignal_grouped_wh3l_zg_13TeV_met");
   
   TH1F *thsSignal_grouped_wh3l_zg_13TeV_met_stack_12 = new TH1F("thsSignal_grouped_wh3l_zg_13TeV_met_stack_12","thsSignal_grouped_wh3l_zg_13TeV_met",40,0,200);
   thsSignal_grouped_wh3l_zg_13TeV_met_stack_12->SetMinimum(0);
   thsSignal_grouped_wh3l_zg_13TeV_met_stack_12->SetMaximum(0.03504022);
   thsSignal_grouped_wh3l_zg_13TeV_met_stack_12->SetDirectory(0);
   thsSignal_grouped_wh3l_zg_13TeV_met_stack_12->SetStats(0);
   thsSignal_grouped_wh3l_zg_13TeV_met_stack_12->SetLineStyle(0);
   thsSignal_grouped_wh3l_zg_13TeV_met_stack_12->SetMarkerStyle(20);
   thsSignal_grouped_wh3l_zg_13TeV_met_stack_12->GetXaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_zg_13TeV_met_stack_12->GetXaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_zg_13TeV_met_stack_12->GetXaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_zg_13TeV_met_stack_12->GetXaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_zg_13TeV_met_stack_12->GetXaxis()->SetTitleOffset(0.9);
   thsSignal_grouped_wh3l_zg_13TeV_met_stack_12->GetXaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_zg_13TeV_met_stack_12->GetYaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_zg_13TeV_met_stack_12->GetYaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_zg_13TeV_met_stack_12->GetYaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_zg_13TeV_met_stack_12->GetYaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_zg_13TeV_met_stack_12->GetYaxis()->SetTitleOffset(1.25);
   thsSignal_grouped_wh3l_zg_13TeV_met_stack_12->GetYaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_zg_13TeV_met_stack_12->GetZaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_zg_13TeV_met_stack_12->GetZaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_zg_13TeV_met_stack_12->GetZaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_zg_13TeV_met_stack_12->GetZaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_zg_13TeV_met_stack_12->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_zg_13TeV_met->SetHistogram(thsSignal_grouped_wh3l_zg_13TeV_met_stack_12);
   
   
   TH1D *new_histo_group_Higgs_wh3l_zg_13TeV_met53 = new TH1D("new_histo_group_Higgs_wh3l_zg_13TeV_met53","histo_H_htt",40,0,200);
   new_histo_group_Higgs_wh3l_zg_13TeV_met53->SetBinContent(1,0.0006229462);
   new_histo_group_Higgs_wh3l_zg_13TeV_met53->SetBinContent(2,0.00624209);
   new_histo_group_Higgs_wh3l_zg_13TeV_met53->SetBinContent(3,0.007358827);
   new_histo_group_Higgs_wh3l_zg_13TeV_met53->SetBinContent(4,0.01431604);
   new_histo_group_Higgs_wh3l_zg_13TeV_met53->SetBinContent(5,0.009062088);
   new_histo_group_Higgs_wh3l_zg_13TeV_met53->SetBinContent(6,0.01154924);
   new_histo_group_Higgs_wh3l_zg_13TeV_met53->SetBinContent(7,0.0116528);
   new_histo_group_Higgs_wh3l_zg_13TeV_met53->SetBinContent(8,0.02797262);
   new_histo_group_Higgs_wh3l_zg_13TeV_met53->SetBinError(1,0.0004444357);
   new_histo_group_Higgs_wh3l_zg_13TeV_met53->SetBinError(2,0.003149423);
   new_histo_group_Higgs_wh3l_zg_13TeV_met53->SetBinError(3,0.003181172);
   new_histo_group_Higgs_wh3l_zg_13TeV_met53->SetBinError(4,0.003913516);
   new_histo_group_Higgs_wh3l_zg_13TeV_met53->SetBinError(5,0.002357696);
   new_histo_group_Higgs_wh3l_zg_13TeV_met53->SetBinError(6,0.003708895);
   new_histo_group_Higgs_wh3l_zg_13TeV_met53->SetBinError(7,0.003328596);
   new_histo_group_Higgs_wh3l_zg_13TeV_met53->SetBinError(8,0.005399023);
   new_histo_group_Higgs_wh3l_zg_13TeV_met53->SetEntries(180);
   new_histo_group_Higgs_wh3l_zg_13TeV_met53->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_zg_13TeV_met53->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_zg_13TeV_met53->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_zg_13TeV_met53->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_zg_13TeV_met53->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_zg_13TeV_met53->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_zg_13TeV_met53->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_zg_13TeV_met53->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_zg_13TeV_met53->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_zg_13TeV_met53->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_zg_13TeV_met53->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_zg_13TeV_met53->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_zg_13TeV_met53->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_zg_13TeV_met53->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_zg_13TeV_met53->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_zg_13TeV_met->Add(new_histo_group_Higgs_wh3l_zg_13TeV_met,"");
   thsSignal_grouped_wh3l_zg_13TeV_met->Draw("hist same noclear");
   
   Double_t _fx3011[40] = {
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
   Double_t _fy3011[40] = {
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
   Double_t _felx3011[40] = {
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
   Double_t _fely3011[40] = {
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
   Double_t _fehx3011[40] = {
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
   Double_t _fehy3011[40] = {
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
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(40,_fx3011,_fy3011,_felx3011,_fehx3011,_fely3011,_fehy3011);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(12);
   grae->SetFillStyle(3004);
   grae->SetLineColor(12);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3011 = new TH1F("Graph_Graph3011","",100,0,220);
   Graph_Graph3011->SetMinimum(0);
   Graph_Graph3011->SetMaximum(38.47354);
   Graph_Graph3011->SetDirectory(0);
   Graph_Graph3011->SetStats(0);
   Graph_Graph3011->SetLineStyle(0);
   Graph_Graph3011->SetMarkerStyle(20);
   Graph_Graph3011->GetXaxis()->SetLabelFont(42);
   Graph_Graph3011->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3011->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3011->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3011->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3011->GetXaxis()->SetTitleFont(42);
   Graph_Graph3011->GetYaxis()->SetLabelFont(42);
   Graph_Graph3011->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3011->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3011->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3011->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3011->GetYaxis()->SetTitleFont(42);
   Graph_Graph3011->GetZaxis()->SetLabelFont(42);
   Graph_Graph3011->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3011->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3011->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3011->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3011);
   
   grae->Draw("2");
   
   Double_t _fx3012[40] = {
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
   Double_t _fy3012[40] = {
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
   Double_t _felx3012[40] = {
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
   Double_t _fely3012[40] = {
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
   Double_t _fehx3012[40] = {
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
   Double_t _fehy3012[40] = {
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
   grae = new TGraphAsymmErrors(40,_fx3012,_fy3012,_felx3012,_fehx3012,_fely3012,_fehy3012);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(1);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3012 = new TH1F("Graph_Graph3012","",100,0,220);
   Graph_Graph3012->SetMinimum(0);
   Graph_Graph3012->SetMaximum(38.99187);
   Graph_Graph3012->SetDirectory(0);
   Graph_Graph3012->SetStats(0);
   Graph_Graph3012->SetLineStyle(0);
   Graph_Graph3012->SetMarkerStyle(20);
   Graph_Graph3012->GetXaxis()->SetLabelFont(42);
   Graph_Graph3012->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3012->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3012->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3012->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3012->GetXaxis()->SetTitleFont(42);
   Graph_Graph3012->GetYaxis()->SetLabelFont(42);
   Graph_Graph3012->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3012->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3012->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3012->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3012->GetYaxis()->SetTitleFont(42);
   Graph_Graph3012->GetZaxis()->SetLabelFont(42);
   Graph_Graph3012->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3012->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3012->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3012->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3012);
   
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
   
   TH1F *hframe_copy54 = new TH1F("hframe_copy54","",1000,0,200);
   hframe_copy54->SetMinimum(0);
   hframe_copy54->SetMaximum(85.96291);
   hframe_copy54->SetDirectory(0);
   hframe_copy54->SetStats(0);
   hframe_copy54->SetLineStyle(0);
   hframe_copy54->SetMarkerStyle(20);
   hframe_copy54->GetXaxis()->SetTitle("pfmet [GeV]");
   hframe_copy54->GetXaxis()->SetNdivisions(506);
   hframe_copy54->GetXaxis()->SetLabelFont(42);
   hframe_copy54->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy54->GetXaxis()->SetLabelSize(0.05);
   hframe_copy54->GetXaxis()->SetTitleSize(0.06);
   hframe_copy54->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy54->GetXaxis()->SetTitleFont(42);
   hframe_copy54->GetYaxis()->SetTitle("Events");
   hframe_copy54->GetYaxis()->SetLabelFont(42);
   hframe_copy54->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy54->GetYaxis()->SetLabelSize(0.05);
   hframe_copy54->GetYaxis()->SetTitleSize(0.06);
   hframe_copy54->GetYaxis()->SetTitleOffset(1.25);
   hframe_copy54->GetYaxis()->SetTitleFont(42);
   hframe_copy54->GetZaxis()->SetLabelFont(42);
   hframe_copy54->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy54->GetZaxis()->SetLabelSize(0.05);
   hframe_copy54->GetZaxis()->SetTitleSize(0.06);
   hframe_copy54->GetZaxis()->SetTitleFont(42);
   hframe_copy54->Draw("sameaxis");
   ccwh3l_zg_13TeV_met->Modified();
   ccwh3l_zg_13TeV_met->cd();
   ccwh3l_zg_13TeV_met->SetSelected(ccwh3l_zg_13TeV_met);
}
