void c_wh3l_13TeV_mll()
{
//=========Macro generated from canvas: ccwh3l_13TeV_mll/cc
//=========  (Fri Jun 24 14:14:38 2016) by ROOT version6.02/13
   TCanvas *ccwh3l_13TeV_mll = new TCanvas("ccwh3l_13TeV_mll", "cc",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   ccwh3l_13TeV_mll->SetHighLightColor(2);
   ccwh3l_13TeV_mll->Range(-28,-65.17744,209.5,436.1875);
   ccwh3l_13TeV_mll->SetFillColor(0);
   ccwh3l_13TeV_mll->SetBorderMode(0);
   ccwh3l_13TeV_mll->SetBorderSize(2);
   ccwh3l_13TeV_mll->SetTickx(1);
   ccwh3l_13TeV_mll->SetTicky(1);
   ccwh3l_13TeV_mll->SetLeftMargin(0.16);
   ccwh3l_13TeV_mll->SetRightMargin(0.04);
   ccwh3l_13TeV_mll->SetTopMargin(0.05);
   ccwh3l_13TeV_mll->SetBottomMargin(0.13);
   ccwh3l_13TeV_mll->SetFrameFillStyle(0);
   ccwh3l_13TeV_mll->SetFrameBorderMode(0);
   ccwh3l_13TeV_mll->SetFrameFillStyle(0);
   ccwh3l_13TeV_mll->SetFrameBorderMode(0);
   
   TH1F *hframe28 = new TH1F("hframe28","",1000,10,200);
   hframe28->SetMinimum(0);
   hframe28->SetMaximum(411.1192);
   hframe28->SetDirectory(0);
   hframe28->SetStats(0);
   hframe28->SetLineStyle(0);
   hframe28->SetMarkerStyle(20);
   hframe28->GetXaxis()->SetTitle("m_{ll} [GeV]");
   hframe28->GetXaxis()->SetNdivisions(506);
   hframe28->GetXaxis()->SetLabelFont(42);
   hframe28->GetXaxis()->SetLabelOffset(0.007);
   hframe28->GetXaxis()->SetLabelSize(0.05);
   hframe28->GetXaxis()->SetTitleSize(0.06);
   hframe28->GetXaxis()->SetTitleOffset(0.9);
   hframe28->GetXaxis()->SetTitleFont(42);
   hframe28->GetYaxis()->SetTitle("Events");
   hframe28->GetYaxis()->SetLabelFont(42);
   hframe28->GetYaxis()->SetLabelOffset(0.007);
   hframe28->GetYaxis()->SetLabelSize(0.05);
   hframe28->GetYaxis()->SetTitleSize(0.06);
   hframe28->GetYaxis()->SetTitleOffset(1.25);
   hframe28->GetYaxis()->SetTitleFont(42);
   hframe28->GetZaxis()->SetLabelFont(42);
   hframe28->GetZaxis()->SetLabelOffset(0.007);
   hframe28->GetZaxis()->SetLabelSize(0.05);
   hframe28->GetZaxis()->SetTitleSize(0.06);
   hframe28->GetZaxis()->SetTitleFont(42);
   hframe28->Draw(" ");
   
   THStack *thsBackground_grouped_wh3l_13TeV_mll = new THStack();
   thsBackground_grouped_wh3l_13TeV_mll->SetName("thsBackground_grouped_wh3l_13TeV_mll");
   thsBackground_grouped_wh3l_13TeV_mll->SetTitle("thsBackground_grouped_wh3l_13TeV_mll");
   
   TH1F *thsBackground_grouped_wh3l_13TeV_mll_stack_7 = new TH1F("thsBackground_grouped_wh3l_13TeV_mll_stack_7","thsBackground_grouped_wh3l_13TeV_mll",20,10,200);
   thsBackground_grouped_wh3l_13TeV_mll_stack_7->SetMinimum(-1.67408);
   thsBackground_grouped_wh3l_13TeV_mll_stack_7->SetMaximum(172.6701);
   thsBackground_grouped_wh3l_13TeV_mll_stack_7->SetDirectory(0);
   thsBackground_grouped_wh3l_13TeV_mll_stack_7->SetStats(0);
   thsBackground_grouped_wh3l_13TeV_mll_stack_7->SetLineStyle(0);
   thsBackground_grouped_wh3l_13TeV_mll_stack_7->SetMarkerStyle(20);
   thsBackground_grouped_wh3l_13TeV_mll_stack_7->GetXaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_13TeV_mll_stack_7->GetXaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_13TeV_mll_stack_7->GetXaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_13TeV_mll_stack_7->GetXaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_13TeV_mll_stack_7->GetXaxis()->SetTitleOffset(0.9);
   thsBackground_grouped_wh3l_13TeV_mll_stack_7->GetXaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_mll_stack_7->GetYaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_13TeV_mll_stack_7->GetYaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_13TeV_mll_stack_7->GetYaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_13TeV_mll_stack_7->GetYaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_13TeV_mll_stack_7->GetYaxis()->SetTitleOffset(1.25);
   thsBackground_grouped_wh3l_13TeV_mll_stack_7->GetYaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_mll_stack_7->GetZaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_13TeV_mll_stack_7->GetZaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_13TeV_mll_stack_7->GetZaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_13TeV_mll_stack_7->GetZaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_13TeV_mll_stack_7->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_mll->SetHistogram(thsBackground_grouped_wh3l_13TeV_mll_stack_7);
   
   
   TH1D *new_histo_group_DY_wh3l_13TeV_mll29 = new TH1D("new_histo_group_DY_wh3l_13TeV_mll29","histo_DY",20,10,200);
   new_histo_group_DY_wh3l_13TeV_mll29->SetBinContent(1,0.5040217);
   new_histo_group_DY_wh3l_13TeV_mll29->SetBinContent(2,-0.06485773);
   new_histo_group_DY_wh3l_13TeV_mll29->SetBinContent(3,1.117213);
   new_histo_group_DY_wh3l_13TeV_mll29->SetBinContent(4,5.711136);
   new_histo_group_DY_wh3l_13TeV_mll29->SetBinContent(5,16.52073);
   new_histo_group_DY_wh3l_13TeV_mll29->SetBinContent(6,25.84832);
   new_histo_group_DY_wh3l_13TeV_mll29->SetBinContent(7,31.55349);
   new_histo_group_DY_wh3l_13TeV_mll29->SetBinContent(8,21.61781);
   new_histo_group_DY_wh3l_13TeV_mll29->SetBinContent(9,78.45617);
   new_histo_group_DY_wh3l_13TeV_mll29->SetBinContent(10,11.20677);
   new_histo_group_DY_wh3l_13TeV_mll29->SetBinContent(11,2.058664);
   new_histo_group_DY_wh3l_13TeV_mll29->SetBinContent(12,1.865245);
   new_histo_group_DY_wh3l_13TeV_mll29->SetBinContent(13,1.689043);
   new_histo_group_DY_wh3l_13TeV_mll29->SetBinContent(14,3.591626);
   new_histo_group_DY_wh3l_13TeV_mll29->SetBinContent(15,0.5504344);
   new_histo_group_DY_wh3l_13TeV_mll29->SetBinContent(17,-0.83704);
   new_histo_group_DY_wh3l_13TeV_mll29->SetBinContent(18,0.3205103);
   new_histo_group_DY_wh3l_13TeV_mll29->SetBinContent(19,0.6489129);
   new_histo_group_DY_wh3l_13TeV_mll29->SetBinContent(21,1.815971);
   new_histo_group_DY_wh3l_13TeV_mll29->SetBinError(1,0.8890887);
   new_histo_group_DY_wh3l_13TeV_mll29->SetBinError(2,0.77211);
   new_histo_group_DY_wh3l_13TeV_mll29->SetBinError(3,1.217742);
   new_histo_group_DY_wh3l_13TeV_mll29->SetBinError(4,2.329215);
   new_histo_group_DY_wh3l_13TeV_mll29->SetBinError(5,3.600634);
   new_histo_group_DY_wh3l_13TeV_mll29->SetBinError(6,4.857865);
   new_histo_group_DY_wh3l_13TeV_mll29->SetBinError(7,5.59422);
   new_histo_group_DY_wh3l_13TeV_mll29->SetBinError(8,4.414739);
   new_histo_group_DY_wh3l_13TeV_mll29->SetBinError(9,10.04002);
   new_histo_group_DY_wh3l_13TeV_mll29->SetBinError(10,3.14062);
   new_histo_group_DY_wh3l_13TeV_mll29->SetBinError(11,1.2177);
   new_histo_group_DY_wh3l_13TeV_mll29->SetBinError(12,1.313266);
   new_histo_group_DY_wh3l_13TeV_mll29->SetBinError(13,1.559537);
   new_histo_group_DY_wh3l_13TeV_mll29->SetBinError(14,1.631086);
   new_histo_group_DY_wh3l_13TeV_mll29->SetBinError(15,1.083899);
   new_histo_group_DY_wh3l_13TeV_mll29->SetBinError(17,0.83704);
   new_histo_group_DY_wh3l_13TeV_mll29->SetBinError(18,0.3205103);
   new_histo_group_DY_wh3l_13TeV_mll29->SetBinError(19,0.6489129);
   new_histo_group_DY_wh3l_13TeV_mll29->SetBinError(21,1.456736);
   new_histo_group_DY_wh3l_13TeV_mll29->SetEntries(546);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#009900");
   new_histo_group_DY_wh3l_13TeV_mll29->SetFillColor(ci);
   new_histo_group_DY_wh3l_13TeV_mll29->SetFillStyle(3001);

   ci = TColor::GetColor("#009900");
   new_histo_group_DY_wh3l_13TeV_mll29->SetLineColor(ci);
   new_histo_group_DY_wh3l_13TeV_mll29->GetXaxis()->SetLabelFont(42);
   new_histo_group_DY_wh3l_13TeV_mll29->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_DY_wh3l_13TeV_mll29->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_DY_wh3l_13TeV_mll29->GetXaxis()->SetTitleFont(42);
   new_histo_group_DY_wh3l_13TeV_mll29->GetYaxis()->SetLabelFont(42);
   new_histo_group_DY_wh3l_13TeV_mll29->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_DY_wh3l_13TeV_mll29->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_DY_wh3l_13TeV_mll29->GetYaxis()->SetTitleFont(42);
   new_histo_group_DY_wh3l_13TeV_mll29->GetZaxis()->SetLabelFont(42);
   new_histo_group_DY_wh3l_13TeV_mll29->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_DY_wh3l_13TeV_mll29->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_DY_wh3l_13TeV_mll29->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_mll->Add(new_histo_group_DY_wh3l_13TeV_mll,"");
   
   TH1D *new_histo_group_top_wh3l_13TeV_mll30 = new TH1D("new_histo_group_top_wh3l_13TeV_mll30","histo_top",20,10,200);
   new_histo_group_top_wh3l_13TeV_mll30->SetBinContent(1,0.09954555);
   new_histo_group_top_wh3l_13TeV_mll30->SetBinContent(2,0.1415136);
   new_histo_group_top_wh3l_13TeV_mll30->SetBinContent(3,0.3138026);
   new_histo_group_top_wh3l_13TeV_mll30->SetBinContent(4,0.2736811);
   new_histo_group_top_wh3l_13TeV_mll30->SetBinContent(5,0.5996058);
   new_histo_group_top_wh3l_13TeV_mll30->SetBinContent(6,0.6138415);
   new_histo_group_top_wh3l_13TeV_mll30->SetBinContent(7,0.2798582);
   new_histo_group_top_wh3l_13TeV_mll30->SetBinContent(8,0.7103002);
   new_histo_group_top_wh3l_13TeV_mll30->SetBinContent(9,0.4927468);
   new_histo_group_top_wh3l_13TeV_mll30->SetBinContent(10,0.5630752);
   new_histo_group_top_wh3l_13TeV_mll30->SetBinContent(11,0.5300501);
   new_histo_group_top_wh3l_13TeV_mll30->SetBinContent(12,0.6191187);
   new_histo_group_top_wh3l_13TeV_mll30->SetBinContent(13,0.2505157);
   new_histo_group_top_wh3l_13TeV_mll30->SetBinContent(14,0.2043653);
   new_histo_group_top_wh3l_13TeV_mll30->SetBinContent(15,0.2952773);
   new_histo_group_top_wh3l_13TeV_mll30->SetBinContent(16,0.3351662);
   new_histo_group_top_wh3l_13TeV_mll30->SetBinContent(17,0.1434314);
   new_histo_group_top_wh3l_13TeV_mll30->SetBinContent(18,0.2402025);
   new_histo_group_top_wh3l_13TeV_mll30->SetBinContent(19,0.09201413);
   new_histo_group_top_wh3l_13TeV_mll30->SetBinContent(20,0.2219766);
   new_histo_group_top_wh3l_13TeV_mll30->SetBinContent(21,1.145534);
   new_histo_group_top_wh3l_13TeV_mll30->SetBinError(1,0.04999396);
   new_histo_group_top_wh3l_13TeV_mll30->SetBinError(2,0.05552758);
   new_histo_group_top_wh3l_13TeV_mll30->SetBinError(3,0.1010152);
   new_histo_group_top_wh3l_13TeV_mll30->SetBinError(4,0.07783538);
   new_histo_group_top_wh3l_13TeV_mll30->SetBinError(5,0.1465158);
   new_histo_group_top_wh3l_13TeV_mll30->SetBinError(6,0.1166322);
   new_histo_group_top_wh3l_13TeV_mll30->SetBinError(7,0.07271548);
   new_histo_group_top_wh3l_13TeV_mll30->SetBinError(8,0.153508);
   new_histo_group_top_wh3l_13TeV_mll30->SetBinError(9,0.1039774);
   new_histo_group_top_wh3l_13TeV_mll30->SetBinError(10,0.1411428);
   new_histo_group_top_wh3l_13TeV_mll30->SetBinError(11,0.1654178);
   new_histo_group_top_wh3l_13TeV_mll30->SetBinError(12,0.1642497);
   new_histo_group_top_wh3l_13TeV_mll30->SetBinError(13,0.07574922);
   new_histo_group_top_wh3l_13TeV_mll30->SetBinError(14,0.06657144);
   new_histo_group_top_wh3l_13TeV_mll30->SetBinError(15,0.1108766);
   new_histo_group_top_wh3l_13TeV_mll30->SetBinError(16,0.08650243);
   new_histo_group_top_wh3l_13TeV_mll30->SetBinError(17,0.05196415);
   new_histo_group_top_wh3l_13TeV_mll30->SetBinError(18,0.07259298);
   new_histo_group_top_wh3l_13TeV_mll30->SetBinError(19,0.04332873);
   new_histo_group_top_wh3l_13TeV_mll30->SetBinError(20,0.1037205);
   new_histo_group_top_wh3l_13TeV_mll30->SetBinError(21,0.1859261);
   new_histo_group_top_wh3l_13TeV_mll30->SetEntries(377);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_top_wh3l_13TeV_mll30->SetFillColor(ci);
   new_histo_group_top_wh3l_13TeV_mll30->SetFillStyle(3001);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_top_wh3l_13TeV_mll30->SetLineColor(ci);
   new_histo_group_top_wh3l_13TeV_mll30->GetXaxis()->SetLabelFont(42);
   new_histo_group_top_wh3l_13TeV_mll30->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_top_wh3l_13TeV_mll30->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_top_wh3l_13TeV_mll30->GetXaxis()->SetTitleFont(42);
   new_histo_group_top_wh3l_13TeV_mll30->GetYaxis()->SetLabelFont(42);
   new_histo_group_top_wh3l_13TeV_mll30->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_top_wh3l_13TeV_mll30->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_top_wh3l_13TeV_mll30->GetYaxis()->SetTitleFont(42);
   new_histo_group_top_wh3l_13TeV_mll30->GetZaxis()->SetLabelFont(42);
   new_histo_group_top_wh3l_13TeV_mll30->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_top_wh3l_13TeV_mll30->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_top_wh3l_13TeV_mll30->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_mll->Add(new_histo_group_top_wh3l_13TeV_mll,"");
   
   TH1D *new_histo_group_WW_wh3l_13TeV_mll31 = new TH1D("new_histo_group_WW_wh3l_13TeV_mll31","histo_WW",20,10,200);
   new_histo_group_WW_wh3l_13TeV_mll31->SetBinContent(2,0.01635321);
   new_histo_group_WW_wh3l_13TeV_mll31->SetBinContent(4,0.01814846);
   new_histo_group_WW_wh3l_13TeV_mll31->SetBinContent(5,0.01612369);
   new_histo_group_WW_wh3l_13TeV_mll31->SetBinContent(6,0.01022165);
   new_histo_group_WW_wh3l_13TeV_mll31->SetBinContent(7,0.01267667);
   new_histo_group_WW_wh3l_13TeV_mll31->SetBinContent(8,0.02035224);
   new_histo_group_WW_wh3l_13TeV_mll31->SetBinContent(9,0.0337767);
   new_histo_group_WW_wh3l_13TeV_mll31->SetBinContent(10,0.02150233);
   new_histo_group_WW_wh3l_13TeV_mll31->SetBinContent(11,0.03129211);
   new_histo_group_WW_wh3l_13TeV_mll31->SetBinContent(12,0.03187802);
   new_histo_group_WW_wh3l_13TeV_mll31->SetBinContent(13,0.003600395);
   new_histo_group_WW_wh3l_13TeV_mll31->SetBinContent(14,0.003279302);
   new_histo_group_WW_wh3l_13TeV_mll31->SetBinContent(15,0.04337506);
   new_histo_group_WW_wh3l_13TeV_mll31->SetBinContent(16,0.01692435);
   new_histo_group_WW_wh3l_13TeV_mll31->SetBinContent(17,0.01268246);
   new_histo_group_WW_wh3l_13TeV_mll31->SetBinContent(21,0.01308702);
   new_histo_group_WW_wh3l_13TeV_mll31->SetBinError(2,0.01418288);
   new_histo_group_WW_wh3l_13TeV_mll31->SetBinError(4,0.01814846);
   new_histo_group_WW_wh3l_13TeV_mll31->SetBinError(5,0.01612369);
   new_histo_group_WW_wh3l_13TeV_mll31->SetBinError(6,0.01022165);
   new_histo_group_WW_wh3l_13TeV_mll31->SetBinError(7,0.01045963);
   new_histo_group_WW_wh3l_13TeV_mll31->SetBinError(8,0.01439442);
   new_histo_group_WW_wh3l_13TeV_mll31->SetBinError(9,0.02390709);
   new_histo_group_WW_wh3l_13TeV_mll31->SetBinError(10,0.01723447);
   new_histo_group_WW_wh3l_13TeV_mll31->SetBinError(11,0.02221357);
   new_histo_group_WW_wh3l_13TeV_mll31->SetBinError(12,0.02262208);
   new_histo_group_WW_wh3l_13TeV_mll31->SetBinError(13,0.003600395);
   new_histo_group_WW_wh3l_13TeV_mll31->SetBinError(14,0.003279302);
   new_histo_group_WW_wh3l_13TeV_mll31->SetBinError(15,0.02568862);
   new_histo_group_WW_wh3l_13TeV_mll31->SetBinError(16,0.01692435);
   new_histo_group_WW_wh3l_13TeV_mll31->SetBinError(17,0.01268246);
   new_histo_group_WW_wh3l_13TeV_mll31->SetBinError(21,0.01308702);
   new_histo_group_WW_wh3l_13TeV_mll31->SetEntries(26);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_13TeV_mll31->SetFillColor(ci);
   new_histo_group_WW_wh3l_13TeV_mll31->SetFillStyle(3001);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_13TeV_mll31->SetLineColor(ci);
   new_histo_group_WW_wh3l_13TeV_mll31->GetXaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_13TeV_mll31->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_13TeV_mll31->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_13TeV_mll31->GetXaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_13TeV_mll31->GetYaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_13TeV_mll31->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_13TeV_mll31->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_13TeV_mll31->GetYaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_13TeV_mll31->GetZaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_13TeV_mll31->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_13TeV_mll31->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_13TeV_mll31->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_mll->Add(new_histo_group_WW_wh3l_13TeV_mll,"");
   
   TH1D *new_histo_group_VVV_wh3l_13TeV_mll32 = new TH1D("new_histo_group_VVV_wh3l_13TeV_mll32","histo_VVV",20,10,200);
   new_histo_group_VVV_wh3l_13TeV_mll32->SetBinContent(2,0.00203447);
   new_histo_group_VVV_wh3l_13TeV_mll32->SetBinContent(3,0.001403269);
   new_histo_group_VVV_wh3l_13TeV_mll32->SetBinContent(4,0.003343357);
   new_histo_group_VVV_wh3l_13TeV_mll32->SetBinContent(5,0.001556149);
   new_histo_group_VVV_wh3l_13TeV_mll32->SetBinContent(6,0.005489006);
   new_histo_group_VVV_wh3l_13TeV_mll32->SetBinContent(7,0.006757861);
   new_histo_group_VVV_wh3l_13TeV_mll32->SetBinContent(8,0.01373456);
   new_histo_group_VVV_wh3l_13TeV_mll32->SetBinContent(9,0.07175376);
   new_histo_group_VVV_wh3l_13TeV_mll32->SetBinContent(10,0.01722243);
   new_histo_group_VVV_wh3l_13TeV_mll32->SetBinContent(11,0.005418112);
   new_histo_group_VVV_wh3l_13TeV_mll32->SetBinContent(12,0.01097813);
   new_histo_group_VVV_wh3l_13TeV_mll32->SetBinContent(13,0.00908649);
   new_histo_group_VVV_wh3l_13TeV_mll32->SetBinContent(14,0.004326015);
   new_histo_group_VVV_wh3l_13TeV_mll32->SetBinContent(15,0.009392391);
   new_histo_group_VVV_wh3l_13TeV_mll32->SetBinContent(16,0.009833358);
   new_histo_group_VVV_wh3l_13TeV_mll32->SetBinContent(17,0.006086262);
   new_histo_group_VVV_wh3l_13TeV_mll32->SetBinContent(18,0.0046575);
   new_histo_group_VVV_wh3l_13TeV_mll32->SetBinContent(19,0.004037591);
   new_histo_group_VVV_wh3l_13TeV_mll32->SetBinContent(20,0.004190845);
   new_histo_group_VVV_wh3l_13TeV_mll32->SetBinContent(21,0.04963992);
   new_histo_group_VVV_wh3l_13TeV_mll32->SetBinError(2,0.001176554);
   new_histo_group_VVV_wh3l_13TeV_mll32->SetBinError(3,0.001059049);
   new_histo_group_VVV_wh3l_13TeV_mll32->SetBinError(4,0.001380669);
   new_histo_group_VVV_wh3l_13TeV_mll32->SetBinError(5,0.001379331);
   new_histo_group_VVV_wh3l_13TeV_mll32->SetBinError(6,0.002144588);
   new_histo_group_VVV_wh3l_13TeV_mll32->SetBinError(7,0.002057726);
   new_histo_group_VVV_wh3l_13TeV_mll32->SetBinError(8,0.002859022);
   new_histo_group_VVV_wh3l_13TeV_mll32->SetBinError(9,0.007062184);
   new_histo_group_VVV_wh3l_13TeV_mll32->SetBinError(10,0.003383814);
   new_histo_group_VVV_wh3l_13TeV_mll32->SetBinError(11,0.002220943);
   new_histo_group_VVV_wh3l_13TeV_mll32->SetBinError(12,0.002915058);
   new_histo_group_VVV_wh3l_13TeV_mll32->SetBinError(13,0.002313869);
   new_histo_group_VVV_wh3l_13TeV_mll32->SetBinError(14,0.00185215);
   new_histo_group_VVV_wh3l_13TeV_mll32->SetBinError(15,0.002641908);
   new_histo_group_VVV_wh3l_13TeV_mll32->SetBinError(16,0.002662419);
   new_histo_group_VVV_wh3l_13TeV_mll32->SetBinError(17,0.002230175);
   new_histo_group_VVV_wh3l_13TeV_mll32->SetBinError(18,0.001700685);
   new_histo_group_VVV_wh3l_13TeV_mll32->SetBinError(19,0.001573334);
   new_histo_group_VVV_wh3l_13TeV_mll32->SetBinError(20,0.00176822);
   new_histo_group_VVV_wh3l_13TeV_mll32->SetBinError(21,0.005800418);
   new_histo_group_VVV_wh3l_13TeV_mll32->SetEntries(478);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_13TeV_mll32->SetFillColor(ci);
   new_histo_group_VVV_wh3l_13TeV_mll32->SetFillStyle(3001);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_13TeV_mll32->SetLineColor(ci);
   new_histo_group_VVV_wh3l_13TeV_mll32->GetXaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_13TeV_mll32->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_13TeV_mll32->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_13TeV_mll32->GetXaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_13TeV_mll32->GetYaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_13TeV_mll32->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_13TeV_mll32->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_13TeV_mll32->GetYaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_13TeV_mll32->GetZaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_13TeV_mll32->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_13TeV_mll32->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_13TeV_mll32->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_mll->Add(new_histo_group_VVV_wh3l_13TeV_mll,"");
   
   TH1D *new_histo_group_VZ_wh3l_13TeV_mll33 = new TH1D("new_histo_group_VZ_wh3l_13TeV_mll33","histo_VZ",20,10,200);
   new_histo_group_VZ_wh3l_13TeV_mll33->SetBinContent(1,1.34621);
   new_histo_group_VZ_wh3l_13TeV_mll33->SetBinContent(2,2.448765);
   new_histo_group_VZ_wh3l_13TeV_mll33->SetBinContent(3,3.377858);
   new_histo_group_VZ_wh3l_13TeV_mll33->SetBinContent(4,4.285376);
   new_histo_group_VZ_wh3l_13TeV_mll33->SetBinContent(5,5.431449);
   new_histo_group_VZ_wh3l_13TeV_mll33->SetBinContent(6,6.120241);
   new_histo_group_VZ_wh3l_13TeV_mll33->SetBinContent(7,8.930293);
   new_histo_group_VZ_wh3l_13TeV_mll33->SetBinContent(8,16.22876);
   new_histo_group_VZ_wh3l_13TeV_mll33->SetBinContent(9,85.27629);
   new_histo_group_VZ_wh3l_13TeV_mll33->SetBinContent(10,18.25053);
   new_histo_group_VZ_wh3l_13TeV_mll33->SetBinContent(11,12.36083);
   new_histo_group_VZ_wh3l_13TeV_mll33->SetBinContent(12,12.74554);
   new_histo_group_VZ_wh3l_13TeV_mll33->SetBinContent(13,11.1638);
   new_histo_group_VZ_wh3l_13TeV_mll33->SetBinContent(14,10.08494);
   new_histo_group_VZ_wh3l_13TeV_mll33->SetBinContent(15,9.013043);
   new_histo_group_VZ_wh3l_13TeV_mll33->SetBinContent(16,7.771424);
   new_histo_group_VZ_wh3l_13TeV_mll33->SetBinContent(17,7.284673);
   new_histo_group_VZ_wh3l_13TeV_mll33->SetBinContent(18,6.285645);
   new_histo_group_VZ_wh3l_13TeV_mll33->SetBinContent(19,5.859955);
   new_histo_group_VZ_wh3l_13TeV_mll33->SetBinContent(20,4.978555);
   new_histo_group_VZ_wh3l_13TeV_mll33->SetBinContent(21,39.82864);
   new_histo_group_VZ_wh3l_13TeV_mll33->SetBinError(1,0.09390696);
   new_histo_group_VZ_wh3l_13TeV_mll33->SetBinError(2,0.1532186);
   new_histo_group_VZ_wh3l_13TeV_mll33->SetBinError(3,0.202476);
   new_histo_group_VZ_wh3l_13TeV_mll33->SetBinError(4,0.2020161);
   new_histo_group_VZ_wh3l_13TeV_mll33->SetBinError(5,0.2523963);
   new_histo_group_VZ_wh3l_13TeV_mll33->SetBinError(6,0.2610733);
   new_histo_group_VZ_wh3l_13TeV_mll33->SetBinError(7,0.3380421);
   new_histo_group_VZ_wh3l_13TeV_mll33->SetBinError(8,0.4602483);
   new_histo_group_VZ_wh3l_13TeV_mll33->SetBinError(9,1.0232);
   new_histo_group_VZ_wh3l_13TeV_mll33->SetBinError(10,0.4807236);
   new_histo_group_VZ_wh3l_13TeV_mll33->SetBinError(11,0.3987541);
   new_histo_group_VZ_wh3l_13TeV_mll33->SetBinError(12,0.4450905);
   new_histo_group_VZ_wh3l_13TeV_mll33->SetBinError(13,0.3954944);
   new_histo_group_VZ_wh3l_13TeV_mll33->SetBinError(14,0.3828715);
   new_histo_group_VZ_wh3l_13TeV_mll33->SetBinError(15,0.3627744);
   new_histo_group_VZ_wh3l_13TeV_mll33->SetBinError(16,0.3101532);
   new_histo_group_VZ_wh3l_13TeV_mll33->SetBinError(17,0.3102072);
   new_histo_group_VZ_wh3l_13TeV_mll33->SetBinError(18,0.2993357);
   new_histo_group_VZ_wh3l_13TeV_mll33->SetBinError(19,0.30452);
   new_histo_group_VZ_wh3l_13TeV_mll33->SetBinError(20,0.2617342);
   new_histo_group_VZ_wh3l_13TeV_mll33->SetBinError(21,0.7373276);
   new_histo_group_VZ_wh3l_13TeV_mll33->SetEntries(46249);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_VZ_wh3l_13TeV_mll33->SetFillColor(ci);
   new_histo_group_VZ_wh3l_13TeV_mll33->SetFillStyle(3001);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_VZ_wh3l_13TeV_mll33->SetLineColor(ci);
   new_histo_group_VZ_wh3l_13TeV_mll33->GetXaxis()->SetLabelFont(42);
   new_histo_group_VZ_wh3l_13TeV_mll33->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_VZ_wh3l_13TeV_mll33->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_VZ_wh3l_13TeV_mll33->GetXaxis()->SetTitleFont(42);
   new_histo_group_VZ_wh3l_13TeV_mll33->GetYaxis()->SetLabelFont(42);
   new_histo_group_VZ_wh3l_13TeV_mll33->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_VZ_wh3l_13TeV_mll33->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_VZ_wh3l_13TeV_mll33->GetYaxis()->SetTitleFont(42);
   new_histo_group_VZ_wh3l_13TeV_mll33->GetZaxis()->SetLabelFont(42);
   new_histo_group_VZ_wh3l_13TeV_mll33->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_VZ_wh3l_13TeV_mll33->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_VZ_wh3l_13TeV_mll33->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_mll->Add(new_histo_group_VZ_wh3l_13TeV_mll,"");
   
   TH1D *new_histo_group_Higgs_wh3l_13TeV_mll34 = new TH1D("new_histo_group_Higgs_wh3l_13TeV_mll34","histo_H_htt",20,10,200);
   new_histo_group_Higgs_wh3l_13TeV_mll34->SetBinContent(1,0.02589139);
   new_histo_group_Higgs_wh3l_13TeV_mll34->SetBinContent(2,0.06368193);
   new_histo_group_Higgs_wh3l_13TeV_mll34->SetBinContent(3,0.0784602);
   new_histo_group_Higgs_wh3l_13TeV_mll34->SetBinContent(4,0.08849653);
   new_histo_group_Higgs_wh3l_13TeV_mll34->SetBinContent(5,0.09922689);
   new_histo_group_Higgs_wh3l_13TeV_mll34->SetBinContent(6,0.1094885);
   new_histo_group_Higgs_wh3l_13TeV_mll34->SetBinContent(7,0.1093167);
   new_histo_group_Higgs_wh3l_13TeV_mll34->SetBinContent(8,0.1112055);
   new_histo_group_Higgs_wh3l_13TeV_mll34->SetBinContent(9,0.116956);
   new_histo_group_Higgs_wh3l_13TeV_mll34->SetBinContent(10,0.1136515);
   new_histo_group_Higgs_wh3l_13TeV_mll34->SetBinContent(11,0.08724009);
   new_histo_group_Higgs_wh3l_13TeV_mll34->SetBinContent(12,0.0802676);
   new_histo_group_Higgs_wh3l_13TeV_mll34->SetBinContent(13,0.062912);
   new_histo_group_Higgs_wh3l_13TeV_mll34->SetBinContent(14,0.04553902);
   new_histo_group_Higgs_wh3l_13TeV_mll34->SetBinContent(15,0.04603817);
   new_histo_group_Higgs_wh3l_13TeV_mll34->SetBinContent(16,0.0415026);
   new_histo_group_Higgs_wh3l_13TeV_mll34->SetBinContent(17,0.02745535);
   new_histo_group_Higgs_wh3l_13TeV_mll34->SetBinContent(18,0.02695372);
   new_histo_group_Higgs_wh3l_13TeV_mll34->SetBinContent(19,0.01823531);
   new_histo_group_Higgs_wh3l_13TeV_mll34->SetBinContent(20,0.02269726);
   new_histo_group_Higgs_wh3l_13TeV_mll34->SetBinContent(21,0.142605);
   new_histo_group_Higgs_wh3l_13TeV_mll34->SetBinError(1,0.006009377);
   new_histo_group_Higgs_wh3l_13TeV_mll34->SetBinError(2,0.008700437);
   new_histo_group_Higgs_wh3l_13TeV_mll34->SetBinError(3,0.0103265);
   new_histo_group_Higgs_wh3l_13TeV_mll34->SetBinError(4,0.01028465);
   new_histo_group_Higgs_wh3l_13TeV_mll34->SetBinError(5,0.01095081);
   new_histo_group_Higgs_wh3l_13TeV_mll34->SetBinError(6,0.01002074);
   new_histo_group_Higgs_wh3l_13TeV_mll34->SetBinError(7,0.01115031);
   new_histo_group_Higgs_wh3l_13TeV_mll34->SetBinError(8,0.01038328);
   new_histo_group_Higgs_wh3l_13TeV_mll34->SetBinError(9,0.01127847);
   new_histo_group_Higgs_wh3l_13TeV_mll34->SetBinError(10,0.0118282);
   new_histo_group_Higgs_wh3l_13TeV_mll34->SetBinError(11,0.009914783);
   new_histo_group_Higgs_wh3l_13TeV_mll34->SetBinError(12,0.009279005);
   new_histo_group_Higgs_wh3l_13TeV_mll34->SetBinError(13,0.008380912);
   new_histo_group_Higgs_wh3l_13TeV_mll34->SetBinError(14,0.007311646);
   new_histo_group_Higgs_wh3l_13TeV_mll34->SetBinError(15,0.007798376);
   new_histo_group_Higgs_wh3l_13TeV_mll34->SetBinError(16,0.00668622);
   new_histo_group_Higgs_wh3l_13TeV_mll34->SetBinError(17,0.005254757);
   new_histo_group_Higgs_wh3l_13TeV_mll34->SetBinError(18,0.005741276);
   new_histo_group_Higgs_wh3l_13TeV_mll34->SetBinError(19,0.004645633);
   new_histo_group_Higgs_wh3l_13TeV_mll34->SetBinError(20,0.005149187);
   new_histo_group_Higgs_wh3l_13TeV_mll34->SetBinError(21,0.01271569);
   new_histo_group_Higgs_wh3l_13TeV_mll34->SetEntries(2720);
   new_histo_group_Higgs_wh3l_13TeV_mll34->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_13TeV_mll34->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_13TeV_mll34->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_13TeV_mll34->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_13TeV_mll34->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_mll34->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_mll34->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_13TeV_mll34->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_13TeV_mll34->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_mll34->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_mll34->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_13TeV_mll34->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_13TeV_mll34->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_mll34->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_mll34->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_mll->Add(new_histo_group_Higgs_wh3l_13TeV_mll,"");
   thsBackground_grouped_wh3l_13TeV_mll->Draw("hist same");
   
   thsSignal_grouped_wh3l_13TeV_mll = new THStack();
   thsSignal_grouped_wh3l_13TeV_mll->SetName("thsSignal_grouped_wh3l_13TeV_mll");
   thsSignal_grouped_wh3l_13TeV_mll->SetTitle("thsSignal_grouped_wh3l_13TeV_mll");
   
   TH1F *thsSignal_grouped_wh3l_13TeV_mll_stack_8 = new TH1F("thsSignal_grouped_wh3l_13TeV_mll_stack_8","thsSignal_grouped_wh3l_13TeV_mll",20,10,200);
   thsSignal_grouped_wh3l_13TeV_mll_stack_8->SetMinimum(0);
   thsSignal_grouped_wh3l_13TeV_mll_stack_8->SetMaximum(0.1346462);
   thsSignal_grouped_wh3l_13TeV_mll_stack_8->SetDirectory(0);
   thsSignal_grouped_wh3l_13TeV_mll_stack_8->SetStats(0);
   thsSignal_grouped_wh3l_13TeV_mll_stack_8->SetLineStyle(0);
   thsSignal_grouped_wh3l_13TeV_mll_stack_8->SetMarkerStyle(20);
   thsSignal_grouped_wh3l_13TeV_mll_stack_8->GetXaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_13TeV_mll_stack_8->GetXaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_13TeV_mll_stack_8->GetXaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_13TeV_mll_stack_8->GetXaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_13TeV_mll_stack_8->GetXaxis()->SetTitleOffset(0.9);
   thsSignal_grouped_wh3l_13TeV_mll_stack_8->GetXaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_13TeV_mll_stack_8->GetYaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_13TeV_mll_stack_8->GetYaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_13TeV_mll_stack_8->GetYaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_13TeV_mll_stack_8->GetYaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_13TeV_mll_stack_8->GetYaxis()->SetTitleOffset(1.25);
   thsSignal_grouped_wh3l_13TeV_mll_stack_8->GetYaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_13TeV_mll_stack_8->GetZaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_13TeV_mll_stack_8->GetZaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_13TeV_mll_stack_8->GetZaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_13TeV_mll_stack_8->GetZaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_13TeV_mll_stack_8->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_13TeV_mll->SetHistogram(thsSignal_grouped_wh3l_13TeV_mll_stack_8);
   
   
   TH1D *new_histo_group_Higgs_wh3l_13TeV_mll35 = new TH1D("new_histo_group_Higgs_wh3l_13TeV_mll35","histo_H_htt",20,10,200);
   new_histo_group_Higgs_wh3l_13TeV_mll35->SetBinContent(1,0.02589139);
   new_histo_group_Higgs_wh3l_13TeV_mll35->SetBinContent(2,0.06368193);
   new_histo_group_Higgs_wh3l_13TeV_mll35->SetBinContent(3,0.0784602);
   new_histo_group_Higgs_wh3l_13TeV_mll35->SetBinContent(4,0.08849653);
   new_histo_group_Higgs_wh3l_13TeV_mll35->SetBinContent(5,0.09922689);
   new_histo_group_Higgs_wh3l_13TeV_mll35->SetBinContent(6,0.1094885);
   new_histo_group_Higgs_wh3l_13TeV_mll35->SetBinContent(7,0.1093167);
   new_histo_group_Higgs_wh3l_13TeV_mll35->SetBinContent(8,0.1112055);
   new_histo_group_Higgs_wh3l_13TeV_mll35->SetBinContent(9,0.116956);
   new_histo_group_Higgs_wh3l_13TeV_mll35->SetBinContent(10,0.1136515);
   new_histo_group_Higgs_wh3l_13TeV_mll35->SetBinContent(11,0.08724009);
   new_histo_group_Higgs_wh3l_13TeV_mll35->SetBinContent(12,0.0802676);
   new_histo_group_Higgs_wh3l_13TeV_mll35->SetBinContent(13,0.062912);
   new_histo_group_Higgs_wh3l_13TeV_mll35->SetBinContent(14,0.04553902);
   new_histo_group_Higgs_wh3l_13TeV_mll35->SetBinContent(15,0.04603817);
   new_histo_group_Higgs_wh3l_13TeV_mll35->SetBinContent(16,0.0415026);
   new_histo_group_Higgs_wh3l_13TeV_mll35->SetBinContent(17,0.02745535);
   new_histo_group_Higgs_wh3l_13TeV_mll35->SetBinContent(18,0.02695372);
   new_histo_group_Higgs_wh3l_13TeV_mll35->SetBinContent(19,0.01823531);
   new_histo_group_Higgs_wh3l_13TeV_mll35->SetBinContent(20,0.02269726);
   new_histo_group_Higgs_wh3l_13TeV_mll35->SetBinContent(21,0.142605);
   new_histo_group_Higgs_wh3l_13TeV_mll35->SetBinError(1,0.006009377);
   new_histo_group_Higgs_wh3l_13TeV_mll35->SetBinError(2,0.008700437);
   new_histo_group_Higgs_wh3l_13TeV_mll35->SetBinError(3,0.0103265);
   new_histo_group_Higgs_wh3l_13TeV_mll35->SetBinError(4,0.01028465);
   new_histo_group_Higgs_wh3l_13TeV_mll35->SetBinError(5,0.01095081);
   new_histo_group_Higgs_wh3l_13TeV_mll35->SetBinError(6,0.01002074);
   new_histo_group_Higgs_wh3l_13TeV_mll35->SetBinError(7,0.01115031);
   new_histo_group_Higgs_wh3l_13TeV_mll35->SetBinError(8,0.01038328);
   new_histo_group_Higgs_wh3l_13TeV_mll35->SetBinError(9,0.01127847);
   new_histo_group_Higgs_wh3l_13TeV_mll35->SetBinError(10,0.0118282);
   new_histo_group_Higgs_wh3l_13TeV_mll35->SetBinError(11,0.009914783);
   new_histo_group_Higgs_wh3l_13TeV_mll35->SetBinError(12,0.009279005);
   new_histo_group_Higgs_wh3l_13TeV_mll35->SetBinError(13,0.008380912);
   new_histo_group_Higgs_wh3l_13TeV_mll35->SetBinError(14,0.007311646);
   new_histo_group_Higgs_wh3l_13TeV_mll35->SetBinError(15,0.007798376);
   new_histo_group_Higgs_wh3l_13TeV_mll35->SetBinError(16,0.00668622);
   new_histo_group_Higgs_wh3l_13TeV_mll35->SetBinError(17,0.005254757);
   new_histo_group_Higgs_wh3l_13TeV_mll35->SetBinError(18,0.005741276);
   new_histo_group_Higgs_wh3l_13TeV_mll35->SetBinError(19,0.004645633);
   new_histo_group_Higgs_wh3l_13TeV_mll35->SetBinError(20,0.005149187);
   new_histo_group_Higgs_wh3l_13TeV_mll35->SetBinError(21,0.01271569);
   new_histo_group_Higgs_wh3l_13TeV_mll35->SetEntries(2720);
   new_histo_group_Higgs_wh3l_13TeV_mll35->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_13TeV_mll35->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_13TeV_mll35->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_13TeV_mll35->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_13TeV_mll35->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_mll35->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_mll35->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_13TeV_mll35->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_13TeV_mll35->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_mll35->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_mll35->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_13TeV_mll35->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_13TeV_mll35->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_mll35->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_mll35->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_13TeV_mll->Add(new_histo_group_Higgs_wh3l_13TeV_mll,"");
   thsSignal_grouped_wh3l_13TeV_mll->Draw("hist same noclear");
   
   Double_t _fx3004[20] = {
   14.75,
   24.25,
   33.75,
   43.25,
   52.75,
   62.25,
   71.75,
   81.25,
   90.75,
   100.25,
   109.75,
   119.25,
   128.75,
   138.25,
   147.75,
   157.25,
   166.75,
   176.25,
   185.75,
   195.25};
   Double_t _fy3004[20] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t _felx3004[20] = {
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75};
   Double_t _fely3004[20] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t _fehx3004[20] = {
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75};
   Double_t _fehy3004[20] = {
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
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(20,_fx3004,_fy3004,_felx3004,_fehx3004,_fely3004,_fehy3004);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(1);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3004 = new TH1F("Graph_Graph3004","",100,0,219);
   Graph_Graph3004->SetMinimum(0);
   Graph_Graph3004->SetMaximum(1.262698);
   Graph_Graph3004->SetDirectory(0);
   Graph_Graph3004->SetStats(0);
   Graph_Graph3004->SetLineStyle(0);
   Graph_Graph3004->SetMarkerStyle(20);
   Graph_Graph3004->GetXaxis()->SetLabelFont(42);
   Graph_Graph3004->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3004->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3004->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3004->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3004->GetXaxis()->SetTitleFont(42);
   Graph_Graph3004->GetYaxis()->SetLabelFont(42);
   Graph_Graph3004->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3004->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3004->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3004->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3004->GetYaxis()->SetTitleFont(42);
   Graph_Graph3004->GetZaxis()->SetLabelFont(42);
   Graph_Graph3004->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3004->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3004->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3004->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3004);
   
   grae->Draw("p0");
   
   TLegend *leg = new TLegend(0.2,0.55,0.8,0.88,NULL,"brNDC");
   leg->SetTextFont(62);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("new_histo_group_DY_wh3l_13TeV_mll","DY","F");

   ci = TColor::GetColor("#009900");
   entry->SetFillColor(ci);
   entry->SetFillStyle(3001);

   ci = TColor::GetColor("#009900");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_group_top_wh3l_13TeV_mll","tW and t#bart","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_13TeV_mll","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_13TeV_mll","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_VZ_wh3l_13TeV_mll","VZ/#gamma*/#gamma","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_13TeV_mll","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_13TeV_mll","Data","EPL");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
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
   
   leg = new TLegend(0.2,0.55,0.8,0.88,NULL,"brNDC");
   leg->SetTextFont(62);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   entry=leg->AddEntry("new_histo_group_DY_wh3l_13TeV_mll","DY","F");

   ci = TColor::GetColor("#009900");
   entry->SetFillColor(ci);
   entry->SetFillStyle(3001);

   ci = TColor::GetColor("#009900");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_group_top_wh3l_13TeV_mll","tW and t#bart","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_13TeV_mll","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_13TeV_mll","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_VZ_wh3l_13TeV_mll","VZ/#gamma*/#gamma","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_13TeV_mll","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_13TeV_mll","Data","EPL");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   leg->Draw();
   
   TH1F *hframe_copy36 = new TH1F("hframe_copy36","",1000,10,200);
   hframe_copy36->SetMinimum(0);
   hframe_copy36->SetMaximum(411.1192);
   hframe_copy36->SetDirectory(0);
   hframe_copy36->SetStats(0);
   hframe_copy36->SetLineStyle(0);
   hframe_copy36->SetMarkerStyle(20);
   hframe_copy36->GetXaxis()->SetTitle("m_{ll} [GeV]");
   hframe_copy36->GetXaxis()->SetNdivisions(506);
   hframe_copy36->GetXaxis()->SetLabelFont(42);
   hframe_copy36->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy36->GetXaxis()->SetLabelSize(0.05);
   hframe_copy36->GetXaxis()->SetTitleSize(0.06);
   hframe_copy36->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy36->GetXaxis()->SetTitleFont(42);
   hframe_copy36->GetYaxis()->SetTitle("Events");
   hframe_copy36->GetYaxis()->SetLabelFont(42);
   hframe_copy36->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy36->GetYaxis()->SetLabelSize(0.05);
   hframe_copy36->GetYaxis()->SetTitleSize(0.06);
   hframe_copy36->GetYaxis()->SetTitleOffset(1.25);
   hframe_copy36->GetYaxis()->SetTitleFont(42);
   hframe_copy36->GetZaxis()->SetLabelFont(42);
   hframe_copy36->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy36->GetZaxis()->SetLabelSize(0.05);
   hframe_copy36->GetZaxis()->SetTitleSize(0.06);
   hframe_copy36->GetZaxis()->SetTitleFont(42);
   hframe_copy36->Draw("sameaxis");
   ccwh3l_13TeV_mll->Modified();
   ccwh3l_13TeV_mll->cd();
   ccwh3l_13TeV_mll->SetSelected(ccwh3l_13TeV_mll);
}
