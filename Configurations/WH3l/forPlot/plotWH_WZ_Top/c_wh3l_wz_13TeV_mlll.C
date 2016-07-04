void c_wh3l_wz_13TeV_mlll()
{
//=========Macro generated from canvas: ccwh3l_wz_13TeV_mlll/cc
//=========  (Sun Jul  3 02:18:02 2016) by ROOT version6.02/13
   TCanvas *ccwh3l_wz_13TeV_mlll = new TCanvas("ccwh3l_wz_13TeV_mlll", "cc",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   ccwh3l_wz_13TeV_mlll->SetHighLightColor(2);
   ccwh3l_wz_13TeV_mlll->Range(76,-0.7926829,101,5.304878);
   ccwh3l_wz_13TeV_mlll->SetFillColor(0);
   ccwh3l_wz_13TeV_mlll->SetBorderMode(0);
   ccwh3l_wz_13TeV_mlll->SetBorderSize(2);
   ccwh3l_wz_13TeV_mlll->SetTickx(1);
   ccwh3l_wz_13TeV_mlll->SetTicky(1);
   ccwh3l_wz_13TeV_mlll->SetLeftMargin(0.16);
   ccwh3l_wz_13TeV_mlll->SetRightMargin(0.04);
   ccwh3l_wz_13TeV_mlll->SetTopMargin(0.05);
   ccwh3l_wz_13TeV_mlll->SetBottomMargin(0.13);
   ccwh3l_wz_13TeV_mlll->SetFrameFillStyle(0);
   ccwh3l_wz_13TeV_mlll->SetFrameBorderMode(0);
   ccwh3l_wz_13TeV_mlll->SetFrameFillStyle(0);
   ccwh3l_wz_13TeV_mlll->SetFrameBorderMode(0);
   
   TH1F *hframe31 = new TH1F("hframe31","",1000,80,100);
   hframe31->SetMinimum(0);
   hframe31->SetMaximum(5);
   hframe31->SetDirectory(0);
   hframe31->SetStats(0);
   hframe31->SetLineStyle(0);
   hframe31->SetMarkerStyle(20);
   hframe31->GetXaxis()->SetTitle("m_{lll} [GeV]");
   hframe31->GetXaxis()->SetNdivisions(506);
   hframe31->GetXaxis()->SetLabelFont(42);
   hframe31->GetXaxis()->SetLabelOffset(0.007);
   hframe31->GetXaxis()->SetLabelSize(0.05);
   hframe31->GetXaxis()->SetTitleSize(0.06);
   hframe31->GetXaxis()->SetTitleOffset(0.9);
   hframe31->GetXaxis()->SetTitleFont(42);
   hframe31->GetYaxis()->SetTitle("Events");
   hframe31->GetYaxis()->SetLabelFont(42);
   hframe31->GetYaxis()->SetLabelOffset(0.007);
   hframe31->GetYaxis()->SetLabelSize(0.05);
   hframe31->GetYaxis()->SetTitleSize(0.06);
   hframe31->GetYaxis()->SetTitleOffset(1.25);
   hframe31->GetYaxis()->SetTitleFont(42);
   hframe31->GetZaxis()->SetLabelFont(42);
   hframe31->GetZaxis()->SetLabelOffset(0.007);
   hframe31->GetZaxis()->SetLabelSize(0.05);
   hframe31->GetZaxis()->SetTitleSize(0.06);
   hframe31->GetZaxis()->SetTitleFont(42);
   hframe31->Draw(" ");
   
   THStack *thsBackground_grouped_wh3l_wz_13TeV_mlll = new THStack();
   thsBackground_grouped_wh3l_wz_13TeV_mlll->SetName("thsBackground_grouped_wh3l_wz_13TeV_mlll");
   thsBackground_grouped_wh3l_wz_13TeV_mlll->SetTitle("thsBackground_grouped_wh3l_wz_13TeV_mlll");
   
   TH1F *thsBackground_grouped_wh3l_wz_13TeV_mlll_stack_7 = new TH1F("thsBackground_grouped_wh3l_wz_13TeV_mlll_stack_7","thsBackground_grouped_wh3l_wz_13TeV_mlll",20,80,100);
   thsBackground_grouped_wh3l_wz_13TeV_mlll_stack_7->SetMinimum(-0.5204061);
   thsBackground_grouped_wh3l_wz_13TeV_mlll_stack_7->SetMaximum(0.9262647);
   thsBackground_grouped_wh3l_wz_13TeV_mlll_stack_7->SetDirectory(0);
   thsBackground_grouped_wh3l_wz_13TeV_mlll_stack_7->SetStats(0);
   thsBackground_grouped_wh3l_wz_13TeV_mlll_stack_7->SetLineStyle(0);
   thsBackground_grouped_wh3l_wz_13TeV_mlll_stack_7->SetMarkerStyle(20);
   thsBackground_grouped_wh3l_wz_13TeV_mlll_stack_7->GetXaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_wz_13TeV_mlll_stack_7->GetXaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_wz_13TeV_mlll_stack_7->GetXaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_wz_13TeV_mlll_stack_7->GetXaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_wz_13TeV_mlll_stack_7->GetXaxis()->SetTitleOffset(0.9);
   thsBackground_grouped_wh3l_wz_13TeV_mlll_stack_7->GetXaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_wz_13TeV_mlll_stack_7->GetYaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_wz_13TeV_mlll_stack_7->GetYaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_wz_13TeV_mlll_stack_7->GetYaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_wz_13TeV_mlll_stack_7->GetYaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_wz_13TeV_mlll_stack_7->GetYaxis()->SetTitleOffset(1.25);
   thsBackground_grouped_wh3l_wz_13TeV_mlll_stack_7->GetYaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_wz_13TeV_mlll_stack_7->GetZaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_wz_13TeV_mlll_stack_7->GetZaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_wz_13TeV_mlll_stack_7->GetZaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_wz_13TeV_mlll_stack_7->GetZaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_wz_13TeV_mlll_stack_7->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_wz_13TeV_mlll->SetHistogram(thsBackground_grouped_wh3l_wz_13TeV_mlll_stack_7);
   
   
   TH1D *new_histo_group_Fake_wh3l_wz_13TeV_mlll32 = new TH1D("new_histo_group_Fake_wh3l_wz_13TeV_mlll32","histo_Fake",20,80,100);
   new_histo_group_Fake_wh3l_wz_13TeV_mlll32->SetBinContent(6,-0.05537848);
   new_histo_group_Fake_wh3l_wz_13TeV_mlll32->SetBinContent(7,-0.05997786);
   new_histo_group_Fake_wh3l_wz_13TeV_mlll32->SetBinContent(8,0.1704005);
   new_histo_group_Fake_wh3l_wz_13TeV_mlll32->SetBinContent(9,-0.261436);
   new_histo_group_Fake_wh3l_wz_13TeV_mlll32->SetBinContent(11,-0.1613812);
   new_histo_group_Fake_wh3l_wz_13TeV_mlll32->SetBinContent(12,-0.1648294);
   new_histo_group_Fake_wh3l_wz_13TeV_mlll32->SetBinContent(14,0.4785124);
   new_histo_group_Fake_wh3l_wz_13TeV_mlll32->SetBinContent(15,-0.103976);
   new_histo_group_Fake_wh3l_wz_13TeV_mlll32->SetBinContent(18,-0.2200636);
   new_histo_group_Fake_wh3l_wz_13TeV_mlll32->SetBinContent(19,-0.0006540682);
   new_histo_group_Fake_wh3l_wz_13TeV_mlll32->SetBinContent(20,-0.02173306);
   new_histo_group_Fake_wh3l_wz_13TeV_mlll32->SetBinContent(21,10.97889);
   new_histo_group_Fake_wh3l_wz_13TeV_mlll32->SetBinError(6,0.04166645);
   new_histo_group_Fake_wh3l_wz_13TeV_mlll32->SetBinError(7,0.05997786);
   new_histo_group_Fake_wh3l_wz_13TeV_mlll32->SetBinError(8,0.1704005);
   new_histo_group_Fake_wh3l_wz_13TeV_mlll32->SetBinError(9,0.2589701);
   new_histo_group_Fake_wh3l_wz_13TeV_mlll32->SetBinError(11,0.1613916);
   new_histo_group_Fake_wh3l_wz_13TeV_mlll32->SetBinError(12,0.1648294);
   new_histo_group_Fake_wh3l_wz_13TeV_mlll32->SetBinError(14,0.4036444);
   new_histo_group_Fake_wh3l_wz_13TeV_mlll32->SetBinError(15,0.1394753);
   new_histo_group_Fake_wh3l_wz_13TeV_mlll32->SetBinError(18,0.2200636);
   new_histo_group_Fake_wh3l_wz_13TeV_mlll32->SetBinError(19,0.0006540682);
   new_histo_group_Fake_wh3l_wz_13TeV_mlll32->SetBinError(20,0.02173306);
   new_histo_group_Fake_wh3l_wz_13TeV_mlll32->SetBinError(21,3.269037);
   new_histo_group_Fake_wh3l_wz_13TeV_mlll32->SetEntries(336);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_wz_13TeV_mlll32->SetFillColor(ci);
   new_histo_group_Fake_wh3l_wz_13TeV_mlll32->SetFillStyle(3001);

   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_wz_13TeV_mlll32->SetLineColor(ci);
   new_histo_group_Fake_wh3l_wz_13TeV_mlll32->GetXaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_wz_13TeV_mlll32->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_wz_13TeV_mlll32->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_wz_13TeV_mlll32->GetXaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_wz_13TeV_mlll32->GetYaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_wz_13TeV_mlll32->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_wz_13TeV_mlll32->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_wz_13TeV_mlll32->GetYaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_wz_13TeV_mlll32->GetZaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_wz_13TeV_mlll32->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_wz_13TeV_mlll32->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_wz_13TeV_mlll32->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_wz_13TeV_mlll->Add(new_histo_group_Fake_wh3l_wz_13TeV_mlll,"");
   
   TH1D *new_histo_group_WW_wh3l_wz_13TeV_mlll33 = new TH1D("new_histo_group_WW_wh3l_wz_13TeV_mlll33","histo_WW",20,80,100);
   new_histo_group_WW_wh3l_wz_13TeV_mlll33->SetBinContent(20,0.01816071);
   new_histo_group_WW_wh3l_wz_13TeV_mlll33->SetBinContent(21,0.05723403);
   new_histo_group_WW_wh3l_wz_13TeV_mlll33->SetBinError(20,0.01816071);
   new_histo_group_WW_wh3l_wz_13TeV_mlll33->SetBinError(21,0.02898263);
   new_histo_group_WW_wh3l_wz_13TeV_mlll33->SetEntries(5);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_wz_13TeV_mlll33->SetFillColor(ci);
   new_histo_group_WW_wh3l_wz_13TeV_mlll33->SetFillStyle(3001);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_wz_13TeV_mlll33->SetLineColor(ci);
   new_histo_group_WW_wh3l_wz_13TeV_mlll33->GetXaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_wz_13TeV_mlll33->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_wz_13TeV_mlll33->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_wz_13TeV_mlll33->GetXaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_wz_13TeV_mlll33->GetYaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_wz_13TeV_mlll33->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_wz_13TeV_mlll33->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_wz_13TeV_mlll33->GetYaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_wz_13TeV_mlll33->GetZaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_wz_13TeV_mlll33->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_wz_13TeV_mlll33->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_wz_13TeV_mlll33->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_wz_13TeV_mlll->Add(new_histo_group_WW_wh3l_wz_13TeV_mlll,"");
   
   TH1D *new_histo_group_VVV_wh3l_wz_13TeV_mlll34 = new TH1D("new_histo_group_VVV_wh3l_wz_13TeV_mlll34","histo_VVV",20,80,100);
   new_histo_group_VVV_wh3l_wz_13TeV_mlll34->SetBinContent(11,0.002813099);
   new_histo_group_VVV_wh3l_wz_13TeV_mlll34->SetBinContent(13,0.0002738525);
   new_histo_group_VVV_wh3l_wz_13TeV_mlll34->SetBinContent(16,0.00221283);
   new_histo_group_VVV_wh3l_wz_13TeV_mlll34->SetBinContent(18,0.002445783);
   new_histo_group_VVV_wh3l_wz_13TeV_mlll34->SetBinContent(19,0.001938286);
   new_histo_group_VVV_wh3l_wz_13TeV_mlll34->SetBinContent(21,0.5718873);
   new_histo_group_VVV_wh3l_wz_13TeV_mlll34->SetBinError(11,0.002813099);
   new_histo_group_VVV_wh3l_wz_13TeV_mlll34->SetBinError(13,0.0002738525);
   new_histo_group_VVV_wh3l_wz_13TeV_mlll34->SetBinError(16,0.001707835);
   new_histo_group_VVV_wh3l_wz_13TeV_mlll34->SetBinError(18,0.002445783);
   new_histo_group_VVV_wh3l_wz_13TeV_mlll34->SetBinError(19,0.001938058);
   new_histo_group_VVV_wh3l_wz_13TeV_mlll34->SetBinError(21,0.03280273);
   new_histo_group_VVV_wh3l_wz_13TeV_mlll34->SetEntries(556);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_wz_13TeV_mlll34->SetFillColor(ci);
   new_histo_group_VVV_wh3l_wz_13TeV_mlll34->SetFillStyle(3001);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_wz_13TeV_mlll34->SetLineColor(ci);
   new_histo_group_VVV_wh3l_wz_13TeV_mlll34->GetXaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_wz_13TeV_mlll34->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_wz_13TeV_mlll34->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_wz_13TeV_mlll34->GetXaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_wz_13TeV_mlll34->GetYaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_wz_13TeV_mlll34->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_wz_13TeV_mlll34->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_wz_13TeV_mlll34->GetYaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_wz_13TeV_mlll34->GetZaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_wz_13TeV_mlll34->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_wz_13TeV_mlll34->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_wz_13TeV_mlll34->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_wz_13TeV_mlll->Add(new_histo_group_VVV_wh3l_wz_13TeV_mlll,"");
   
   TH1D *new_histo_group_Vg_wh3l_wz_13TeV_mlll35 = new TH1D("new_histo_group_Vg_wh3l_wz_13TeV_mlll35","histo_Vg",20,80,100);
   new_histo_group_Vg_wh3l_wz_13TeV_mlll35->SetBinContent(0,-0.1183663);
   new_histo_group_Vg_wh3l_wz_13TeV_mlll35->SetBinContent(3,0.1074905);
   new_histo_group_Vg_wh3l_wz_13TeV_mlll35->SetBinContent(4,0.105726);
   new_histo_group_Vg_wh3l_wz_13TeV_mlll35->SetBinContent(5,0.2462778);
   new_histo_group_Vg_wh3l_wz_13TeV_mlll35->SetBinContent(6,0.1501771);
   new_histo_group_Vg_wh3l_wz_13TeV_mlll35->SetBinContent(9,0.4526311);
   new_histo_group_Vg_wh3l_wz_13TeV_mlll35->SetBinContent(10,0.08699926);
   new_histo_group_Vg_wh3l_wz_13TeV_mlll35->SetBinContent(11,0.5361524);
   new_histo_group_Vg_wh3l_wz_13TeV_mlll35->SetBinContent(12,0.5972679);
   new_histo_group_Vg_wh3l_wz_13TeV_mlll35->SetBinContent(13,0.4260346);
   new_histo_group_Vg_wh3l_wz_13TeV_mlll35->SetBinContent(14,-0.02603303);
   new_histo_group_Vg_wh3l_wz_13TeV_mlll35->SetBinContent(17,0.05067601);
   new_histo_group_Vg_wh3l_wz_13TeV_mlll35->SetBinContent(19,2.690874e-06);
   new_histo_group_Vg_wh3l_wz_13TeV_mlll35->SetBinContent(21,2.372719);
   new_histo_group_Vg_wh3l_wz_13TeV_mlll35->SetBinError(0,0.1183663);
   new_histo_group_Vg_wh3l_wz_13TeV_mlll35->SetBinError(3,0.1074905);
   new_histo_group_Vg_wh3l_wz_13TeV_mlll35->SetBinError(4,0.1057253);
   new_histo_group_Vg_wh3l_wz_13TeV_mlll35->SetBinError(5,0.1746061);
   new_histo_group_Vg_wh3l_wz_13TeV_mlll35->SetBinError(6,0.1191448);
   new_histo_group_Vg_wh3l_wz_13TeV_mlll35->SetBinError(9,0.2048536);
   new_histo_group_Vg_wh3l_wz_13TeV_mlll35->SetBinError(10,0.08699926);
   new_histo_group_Vg_wh3l_wz_13TeV_mlll35->SetBinError(11,0.2403729);
   new_histo_group_Vg_wh3l_wz_13TeV_mlll35->SetBinError(12,0.2579104);
   new_histo_group_Vg_wh3l_wz_13TeV_mlll35->SetBinError(13,0.2151595);
   new_histo_group_Vg_wh3l_wz_13TeV_mlll35->SetBinError(14,0.02603303);
   new_histo_group_Vg_wh3l_wz_13TeV_mlll35->SetBinError(17,0.05067601);
   new_histo_group_Vg_wh3l_wz_13TeV_mlll35->SetBinError(19,2.690874e-06);
   new_histo_group_Vg_wh3l_wz_13TeV_mlll35->SetBinError(21,0.5699424);
   new_histo_group_Vg_wh3l_wz_13TeV_mlll35->SetEntries(63);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_wz_13TeV_mlll35->SetFillColor(ci);
   new_histo_group_Vg_wh3l_wz_13TeV_mlll35->SetFillStyle(3001);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_wz_13TeV_mlll35->SetLineColor(ci);
   new_histo_group_Vg_wh3l_wz_13TeV_mlll35->GetXaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_wz_13TeV_mlll35->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_wz_13TeV_mlll35->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_wz_13TeV_mlll35->GetXaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_wz_13TeV_mlll35->GetYaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_wz_13TeV_mlll35->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_wz_13TeV_mlll35->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_wz_13TeV_mlll35->GetYaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_wz_13TeV_mlll35->GetZaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_wz_13TeV_mlll35->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_wz_13TeV_mlll35->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_wz_13TeV_mlll35->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_wz_13TeV_mlll->Add(new_histo_group_Vg_wh3l_wz_13TeV_mlll,"");
   
   TH1D *new_histo_group_ZZ_wh3l_wz_13TeV_mlll36 = new TH1D("new_histo_group_ZZ_wh3l_wz_13TeV_mlll36","histo_ZZ",20,80,100);
   new_histo_group_ZZ_wh3l_wz_13TeV_mlll36->SetBinContent(5,0.04180627);
   new_histo_group_ZZ_wh3l_wz_13TeV_mlll36->SetBinContent(12,0.045192);
   new_histo_group_ZZ_wh3l_wz_13TeV_mlll36->SetBinContent(14,0.08696561);
   new_histo_group_ZZ_wh3l_wz_13TeV_mlll36->SetBinContent(18,0.05233701);
   new_histo_group_ZZ_wh3l_wz_13TeV_mlll36->SetBinContent(19,0.03876194);
   new_histo_group_ZZ_wh3l_wz_13TeV_mlll36->SetBinContent(21,6.538064);
   new_histo_group_ZZ_wh3l_wz_13TeV_mlll36->SetBinError(5,0.04180627);
   new_histo_group_ZZ_wh3l_wz_13TeV_mlll36->SetBinError(12,0.045192);
   new_histo_group_ZZ_wh3l_wz_13TeV_mlll36->SetBinError(14,0.08696561);
   new_histo_group_ZZ_wh3l_wz_13TeV_mlll36->SetBinError(18,0.05233701);
   new_histo_group_ZZ_wh3l_wz_13TeV_mlll36->SetBinError(19,0.03876194);
   new_histo_group_ZZ_wh3l_wz_13TeV_mlll36->SetBinError(21,0.5201446);
   new_histo_group_ZZ_wh3l_wz_13TeV_mlll36->SetEntries(182);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_wz_13TeV_mlll36->SetFillColor(ci);
   new_histo_group_ZZ_wh3l_wz_13TeV_mlll36->SetFillStyle(3001);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_wz_13TeV_mlll36->SetLineColor(ci);
   new_histo_group_ZZ_wh3l_wz_13TeV_mlll36->GetXaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_wz_13TeV_mlll36->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_wz_13TeV_mlll36->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_wz_13TeV_mlll36->GetXaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_wz_13TeV_mlll36->GetYaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_wz_13TeV_mlll36->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_wz_13TeV_mlll36->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_wz_13TeV_mlll36->GetYaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_wz_13TeV_mlll36->GetZaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_wz_13TeV_mlll36->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_wz_13TeV_mlll36->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_wz_13TeV_mlll36->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_wz_13TeV_mlll->Add(new_histo_group_ZZ_wh3l_wz_13TeV_mlll,"");
   
   TH1D *new_histo_group_WZ_wh3l_wz_13TeV_mlll37 = new TH1D("new_histo_group_WZ_wh3l_wz_13TeV_mlll37","histo_WZ",20,80,100);
   new_histo_group_WZ_wh3l_wz_13TeV_mlll37->SetBinContent(0,0.02227521);
   new_histo_group_WZ_wh3l_wz_13TeV_mlll37->SetBinContent(1,0.001085515);
   new_histo_group_WZ_wh3l_wz_13TeV_mlll37->SetBinContent(2,0.01370592);
   new_histo_group_WZ_wh3l_wz_13TeV_mlll37->SetBinContent(3,0.02131477);
   new_histo_group_WZ_wh3l_wz_13TeV_mlll37->SetBinContent(4,0.002657321);
   new_histo_group_WZ_wh3l_wz_13TeV_mlll37->SetBinContent(5,0.009544376);
   new_histo_group_WZ_wh3l_wz_13TeV_mlll37->SetBinContent(6,0.04277444);
   new_histo_group_WZ_wh3l_wz_13TeV_mlll37->SetBinContent(7,0.02112227);
   new_histo_group_WZ_wh3l_wz_13TeV_mlll37->SetBinContent(8,0.0447863);
   new_histo_group_WZ_wh3l_wz_13TeV_mlll37->SetBinContent(9,0.02284467);
   new_histo_group_WZ_wh3l_wz_13TeV_mlll37->SetBinContent(10,0.06420495);
   new_histo_group_WZ_wh3l_wz_13TeV_mlll37->SetBinContent(11,0.05288188);
   new_histo_group_WZ_wh3l_wz_13TeV_mlll37->SetBinContent(12,0.0491861);
   new_histo_group_WZ_wh3l_wz_13TeV_mlll37->SetBinContent(13,0.05731553);
   new_histo_group_WZ_wh3l_wz_13TeV_mlll37->SetBinContent(14,0.08396071);
   new_histo_group_WZ_wh3l_wz_13TeV_mlll37->SetBinContent(15,0.1152981);
   new_histo_group_WZ_wh3l_wz_13TeV_mlll37->SetBinContent(16,0.1021013);
   new_histo_group_WZ_wh3l_wz_13TeV_mlll37->SetBinContent(17,0.1434817);
   new_histo_group_WZ_wh3l_wz_13TeV_mlll37->SetBinContent(18,0.1555641);
   new_histo_group_WZ_wh3l_wz_13TeV_mlll37->SetBinContent(19,0.1861373);
   new_histo_group_WZ_wh3l_wz_13TeV_mlll37->SetBinContent(20,0.2414822);
   new_histo_group_WZ_wh3l_wz_13TeV_mlll37->SetBinContent(21,107.1495);
   new_histo_group_WZ_wh3l_wz_13TeV_mlll37->SetBinError(0,0.01117438);
   new_histo_group_WZ_wh3l_wz_13TeV_mlll37->SetBinError(1,0.001085515);
   new_histo_group_WZ_wh3l_wz_13TeV_mlll37->SetBinError(2,0.008215899);
   new_histo_group_WZ_wh3l_wz_13TeV_mlll37->SetBinError(3,0.01068682);
   new_histo_group_WZ_wh3l_wz_13TeV_mlll37->SetBinError(4,0.002657321);
   new_histo_group_WZ_wh3l_wz_13TeV_mlll37->SetBinError(5,0.006813448);
   new_histo_group_WZ_wh3l_wz_13TeV_mlll37->SetBinError(6,0.01527016);
   new_histo_group_WZ_wh3l_wz_13TeV_mlll37->SetBinError(7,0.01101992);
   new_histo_group_WZ_wh3l_wz_13TeV_mlll37->SetBinError(8,0.01633552);
   new_histo_group_WZ_wh3l_wz_13TeV_mlll37->SetBinError(9,0.01093203);
   new_histo_group_WZ_wh3l_wz_13TeV_mlll37->SetBinError(10,0.01919689);
   new_histo_group_WZ_wh3l_wz_13TeV_mlll37->SetBinError(11,0.01772467);
   new_histo_group_WZ_wh3l_wz_13TeV_mlll37->SetBinError(12,0.01545065);
   new_histo_group_WZ_wh3l_wz_13TeV_mlll37->SetBinError(13,0.01783964);
   new_histo_group_WZ_wh3l_wz_13TeV_mlll37->SetBinError(14,0.02132455);
   new_histo_group_WZ_wh3l_wz_13TeV_mlll37->SetBinError(15,0.02431914);
   new_histo_group_WZ_wh3l_wz_13TeV_mlll37->SetBinError(16,0.02392838);
   new_histo_group_WZ_wh3l_wz_13TeV_mlll37->SetBinError(17,0.02816629);
   new_histo_group_WZ_wh3l_wz_13TeV_mlll37->SetBinError(18,0.02920661);
   new_histo_group_WZ_wh3l_wz_13TeV_mlll37->SetBinError(19,0.03121485);
   new_histo_group_WZ_wh3l_wz_13TeV_mlll37->SetBinError(20,0.03587551);
   new_histo_group_WZ_wh3l_wz_13TeV_mlll37->SetBinError(21,0.7632111);
   new_histo_group_WZ_wh3l_wz_13TeV_mlll37->SetEntries(22144);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_wz_13TeV_mlll37->SetFillColor(ci);
   new_histo_group_WZ_wh3l_wz_13TeV_mlll37->SetFillStyle(3001);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_wz_13TeV_mlll37->SetLineColor(ci);
   new_histo_group_WZ_wh3l_wz_13TeV_mlll37->GetXaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_wz_13TeV_mlll37->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_wz_13TeV_mlll37->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_wz_13TeV_mlll37->GetXaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_wz_13TeV_mlll37->GetYaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_wz_13TeV_mlll37->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_wz_13TeV_mlll37->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_wz_13TeV_mlll37->GetYaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_wz_13TeV_mlll37->GetZaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_wz_13TeV_mlll37->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_wz_13TeV_mlll37->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_wz_13TeV_mlll37->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_wz_13TeV_mlll->Add(new_histo_group_WZ_wh3l_wz_13TeV_mlll,"");
   
   TH1D *new_histo_group_Higgs_wh3l_wz_13TeV_mlll38 = new TH1D("new_histo_group_Higgs_wh3l_wz_13TeV_mlll38","histo_H_htt",20,80,100);
   new_histo_group_Higgs_wh3l_wz_13TeV_mlll38->SetBinContent(0,0.001096658);
   new_histo_group_Higgs_wh3l_wz_13TeV_mlll38->SetBinContent(2,0.003729886);
   new_histo_group_Higgs_wh3l_wz_13TeV_mlll38->SetBinContent(3,0.0003639938);
   new_histo_group_Higgs_wh3l_wz_13TeV_mlll38->SetBinContent(4,0.0001657291);
   new_histo_group_Higgs_wh3l_wz_13TeV_mlll38->SetBinContent(5,0.00179307);
   new_histo_group_Higgs_wh3l_wz_13TeV_mlll38->SetBinContent(6,0.001628499);
   new_histo_group_Higgs_wh3l_wz_13TeV_mlll38->SetBinContent(7,0.001045389);
   new_histo_group_Higgs_wh3l_wz_13TeV_mlll38->SetBinContent(9,0.001738568);
   new_histo_group_Higgs_wh3l_wz_13TeV_mlll38->SetBinContent(10,0.003582235);
   new_histo_group_Higgs_wh3l_wz_13TeV_mlll38->SetBinContent(11,-0.001108655);
   new_histo_group_Higgs_wh3l_wz_13TeV_mlll38->SetBinContent(12,0.001681878);
   new_histo_group_Higgs_wh3l_wz_13TeV_mlll38->SetBinContent(13,0.0001967198);
   new_histo_group_Higgs_wh3l_wz_13TeV_mlll38->SetBinContent(14,0.001777798);
   new_histo_group_Higgs_wh3l_wz_13TeV_mlll38->SetBinContent(15,0.001721189);
   new_histo_group_Higgs_wh3l_wz_13TeV_mlll38->SetBinContent(16,0.0001644806);
   new_histo_group_Higgs_wh3l_wz_13TeV_mlll38->SetBinContent(17,0.002906171);
   new_histo_group_Higgs_wh3l_wz_13TeV_mlll38->SetBinContent(18,0.001839106);
   new_histo_group_Higgs_wh3l_wz_13TeV_mlll38->SetBinContent(19,0.006016765);
   new_histo_group_Higgs_wh3l_wz_13TeV_mlll38->SetBinContent(20,0.001203673);
   new_histo_group_Higgs_wh3l_wz_13TeV_mlll38->SetBinContent(21,0.8619807);
   new_histo_group_Higgs_wh3l_wz_13TeV_mlll38->SetBinError(0,0.001096658);
   new_histo_group_Higgs_wh3l_wz_13TeV_mlll38->SetBinError(2,0.00241789);
   new_histo_group_Higgs_wh3l_wz_13TeV_mlll38->SetBinError(3,0.0003639938);
   new_histo_group_Higgs_wh3l_wz_13TeV_mlll38->SetBinError(4,0.0001657291);
   new_histo_group_Higgs_wh3l_wz_13TeV_mlll38->SetBinError(5,0.001298662);
   new_histo_group_Higgs_wh3l_wz_13TeV_mlll38->SetBinError(6,0.001252882);
   new_histo_group_Higgs_wh3l_wz_13TeV_mlll38->SetBinError(7,0.0009596314);
   new_histo_group_Higgs_wh3l_wz_13TeV_mlll38->SetBinError(9,0.001240639);
   new_histo_group_Higgs_wh3l_wz_13TeV_mlll38->SetBinError(10,0.002124597);
   new_histo_group_Higgs_wh3l_wz_13TeV_mlll38->SetBinError(11,0.001703921);
   new_histo_group_Higgs_wh3l_wz_13TeV_mlll38->SetBinError(12,0.001681878);
   new_histo_group_Higgs_wh3l_wz_13TeV_mlll38->SetBinError(13,0.0001967198);
   new_histo_group_Higgs_wh3l_wz_13TeV_mlll38->SetBinError(14,0.001777798);
   new_histo_group_Higgs_wh3l_wz_13TeV_mlll38->SetBinError(15,0.001721189);
   new_histo_group_Higgs_wh3l_wz_13TeV_mlll38->SetBinError(16,0.0001978212);
   new_histo_group_Higgs_wh3l_wz_13TeV_mlll38->SetBinError(17,0.001793775);
   new_histo_group_Higgs_wh3l_wz_13TeV_mlll38->SetBinError(18,0.001454661);
   new_histo_group_Higgs_wh3l_wz_13TeV_mlll38->SetBinError(19,0.002947378);
   new_histo_group_Higgs_wh3l_wz_13TeV_mlll38->SetBinError(20,0.0009339273);
   new_histo_group_Higgs_wh3l_wz_13TeV_mlll38->SetBinError(21,0.03163509);
   new_histo_group_Higgs_wh3l_wz_13TeV_mlll38->SetEntries(1285);
   new_histo_group_Higgs_wh3l_wz_13TeV_mlll38->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_wz_13TeV_mlll38->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_wz_13TeV_mlll38->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_wz_13TeV_mlll38->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_wz_13TeV_mlll38->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_wz_13TeV_mlll38->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_wz_13TeV_mlll38->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_wz_13TeV_mlll38->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_wz_13TeV_mlll38->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_wz_13TeV_mlll38->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_wz_13TeV_mlll38->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_wz_13TeV_mlll38->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_wz_13TeV_mlll38->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_wz_13TeV_mlll38->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_wz_13TeV_mlll38->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_wz_13TeV_mlll->Add(new_histo_group_Higgs_wh3l_wz_13TeV_mlll,"");
   thsBackground_grouped_wh3l_wz_13TeV_mlll->Draw("hist same");
   
   thsSignal_grouped_wh3l_wz_13TeV_mlll = new THStack();
   thsSignal_grouped_wh3l_wz_13TeV_mlll->SetName("thsSignal_grouped_wh3l_wz_13TeV_mlll");
   thsSignal_grouped_wh3l_wz_13TeV_mlll->SetTitle("thsSignal_grouped_wh3l_wz_13TeV_mlll");
   
   TH1F *thsSignal_grouped_wh3l_wz_13TeV_mlll_stack_8 = new TH1F("thsSignal_grouped_wh3l_wz_13TeV_mlll_stack_8","thsSignal_grouped_wh3l_wz_13TeV_mlll",20,80,100);
   thsSignal_grouped_wh3l_wz_13TeV_mlll_stack_8->SetMinimum(-0.002812576);
   thsSignal_grouped_wh3l_wz_13TeV_mlll_stack_8->SetMaximum(0.00941235);
   thsSignal_grouped_wh3l_wz_13TeV_mlll_stack_8->SetDirectory(0);
   thsSignal_grouped_wh3l_wz_13TeV_mlll_stack_8->SetStats(0);
   thsSignal_grouped_wh3l_wz_13TeV_mlll_stack_8->SetLineStyle(0);
   thsSignal_grouped_wh3l_wz_13TeV_mlll_stack_8->SetMarkerStyle(20);
   thsSignal_grouped_wh3l_wz_13TeV_mlll_stack_8->GetXaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_wz_13TeV_mlll_stack_8->GetXaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_wz_13TeV_mlll_stack_8->GetXaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_wz_13TeV_mlll_stack_8->GetXaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_wz_13TeV_mlll_stack_8->GetXaxis()->SetTitleOffset(0.9);
   thsSignal_grouped_wh3l_wz_13TeV_mlll_stack_8->GetXaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_wz_13TeV_mlll_stack_8->GetYaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_wz_13TeV_mlll_stack_8->GetYaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_wz_13TeV_mlll_stack_8->GetYaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_wz_13TeV_mlll_stack_8->GetYaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_wz_13TeV_mlll_stack_8->GetYaxis()->SetTitleOffset(1.25);
   thsSignal_grouped_wh3l_wz_13TeV_mlll_stack_8->GetYaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_wz_13TeV_mlll_stack_8->GetZaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_wz_13TeV_mlll_stack_8->GetZaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_wz_13TeV_mlll_stack_8->GetZaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_wz_13TeV_mlll_stack_8->GetZaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_wz_13TeV_mlll_stack_8->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_wz_13TeV_mlll->SetHistogram(thsSignal_grouped_wh3l_wz_13TeV_mlll_stack_8);
   
   
   TH1D *new_histo_group_Higgs_wh3l_wz_13TeV_mlll39 = new TH1D("new_histo_group_Higgs_wh3l_wz_13TeV_mlll39","histo_H_htt",20,80,100);
   new_histo_group_Higgs_wh3l_wz_13TeV_mlll39->SetBinContent(0,0.001096658);
   new_histo_group_Higgs_wh3l_wz_13TeV_mlll39->SetBinContent(2,0.003729886);
   new_histo_group_Higgs_wh3l_wz_13TeV_mlll39->SetBinContent(3,0.0003639938);
   new_histo_group_Higgs_wh3l_wz_13TeV_mlll39->SetBinContent(4,0.0001657291);
   new_histo_group_Higgs_wh3l_wz_13TeV_mlll39->SetBinContent(5,0.00179307);
   new_histo_group_Higgs_wh3l_wz_13TeV_mlll39->SetBinContent(6,0.001628499);
   new_histo_group_Higgs_wh3l_wz_13TeV_mlll39->SetBinContent(7,0.001045389);
   new_histo_group_Higgs_wh3l_wz_13TeV_mlll39->SetBinContent(9,0.001738568);
   new_histo_group_Higgs_wh3l_wz_13TeV_mlll39->SetBinContent(10,0.003582235);
   new_histo_group_Higgs_wh3l_wz_13TeV_mlll39->SetBinContent(11,-0.001108655);
   new_histo_group_Higgs_wh3l_wz_13TeV_mlll39->SetBinContent(12,0.001681878);
   new_histo_group_Higgs_wh3l_wz_13TeV_mlll39->SetBinContent(13,0.0001967198);
   new_histo_group_Higgs_wh3l_wz_13TeV_mlll39->SetBinContent(14,0.001777798);
   new_histo_group_Higgs_wh3l_wz_13TeV_mlll39->SetBinContent(15,0.001721189);
   new_histo_group_Higgs_wh3l_wz_13TeV_mlll39->SetBinContent(16,0.0001644806);
   new_histo_group_Higgs_wh3l_wz_13TeV_mlll39->SetBinContent(17,0.002906171);
   new_histo_group_Higgs_wh3l_wz_13TeV_mlll39->SetBinContent(18,0.001839106);
   new_histo_group_Higgs_wh3l_wz_13TeV_mlll39->SetBinContent(19,0.006016765);
   new_histo_group_Higgs_wh3l_wz_13TeV_mlll39->SetBinContent(20,0.001203673);
   new_histo_group_Higgs_wh3l_wz_13TeV_mlll39->SetBinContent(21,0.8619807);
   new_histo_group_Higgs_wh3l_wz_13TeV_mlll39->SetBinError(0,0.001096658);
   new_histo_group_Higgs_wh3l_wz_13TeV_mlll39->SetBinError(2,0.00241789);
   new_histo_group_Higgs_wh3l_wz_13TeV_mlll39->SetBinError(3,0.0003639938);
   new_histo_group_Higgs_wh3l_wz_13TeV_mlll39->SetBinError(4,0.0001657291);
   new_histo_group_Higgs_wh3l_wz_13TeV_mlll39->SetBinError(5,0.001298662);
   new_histo_group_Higgs_wh3l_wz_13TeV_mlll39->SetBinError(6,0.001252882);
   new_histo_group_Higgs_wh3l_wz_13TeV_mlll39->SetBinError(7,0.0009596314);
   new_histo_group_Higgs_wh3l_wz_13TeV_mlll39->SetBinError(9,0.001240639);
   new_histo_group_Higgs_wh3l_wz_13TeV_mlll39->SetBinError(10,0.002124597);
   new_histo_group_Higgs_wh3l_wz_13TeV_mlll39->SetBinError(11,0.001703921);
   new_histo_group_Higgs_wh3l_wz_13TeV_mlll39->SetBinError(12,0.001681878);
   new_histo_group_Higgs_wh3l_wz_13TeV_mlll39->SetBinError(13,0.0001967198);
   new_histo_group_Higgs_wh3l_wz_13TeV_mlll39->SetBinError(14,0.001777798);
   new_histo_group_Higgs_wh3l_wz_13TeV_mlll39->SetBinError(15,0.001721189);
   new_histo_group_Higgs_wh3l_wz_13TeV_mlll39->SetBinError(16,0.0001978212);
   new_histo_group_Higgs_wh3l_wz_13TeV_mlll39->SetBinError(17,0.001793775);
   new_histo_group_Higgs_wh3l_wz_13TeV_mlll39->SetBinError(18,0.001454661);
   new_histo_group_Higgs_wh3l_wz_13TeV_mlll39->SetBinError(19,0.002947378);
   new_histo_group_Higgs_wh3l_wz_13TeV_mlll39->SetBinError(20,0.0009339273);
   new_histo_group_Higgs_wh3l_wz_13TeV_mlll39->SetBinError(21,0.03163509);
   new_histo_group_Higgs_wh3l_wz_13TeV_mlll39->SetEntries(1285);
   new_histo_group_Higgs_wh3l_wz_13TeV_mlll39->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_wz_13TeV_mlll39->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_wz_13TeV_mlll39->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_wz_13TeV_mlll39->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_wz_13TeV_mlll39->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_wz_13TeV_mlll39->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_wz_13TeV_mlll39->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_wz_13TeV_mlll39->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_wz_13TeV_mlll39->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_wz_13TeV_mlll39->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_wz_13TeV_mlll39->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_wz_13TeV_mlll39->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_wz_13TeV_mlll39->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_wz_13TeV_mlll39->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_wz_13TeV_mlll39->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_wz_13TeV_mlll->Add(new_histo_group_Higgs_wh3l_wz_13TeV_mlll,"");
   thsSignal_grouped_wh3l_wz_13TeV_mlll->Draw("hist same noclear");
   
   Double_t _fx3007[20] = {
   80.5,
   81.5,
   82.5,
   83.5,
   84.5,
   85.5,
   86.5,
   87.5,
   88.5,
   89.5,
   90.5,
   91.5,
   92.5,
   93.5,
   94.5,
   95.5,
   96.5,
   97.5,
   98.5,
   99.5};
   Double_t _fy3007[20] = {
   0.001085515,
   0.01370592,
   0.1288053,
   0.1083833,
   0.2976285,
   0.137573,
   -0.03885559,
   0.2151868,
   0.2140397,
   0.1512042,
   0.4304663,
   0.5268165,
   0.483624,
   0.6234058,
   0.01132214,
   0.1043141,
   0.1941577,
   -0.009716723,
   0.2261862,
   0.2379098};
   Double_t _felx3007[20] = {
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5};
   Double_t _fely3007[20] = {
   0.001093197,
   0.008260726,
   0.118471,
   0.1085603,
   0.2237253,
   0.1772816,
   0.07406054,
   0.1960426,
   0.4837468,
   0.1062635,
   0.4276239,
   0.4873932,
   0.2341894,
   0.5635355,
   0.1678508,
   0.02624339,
   0.07921582,
   0.3138202,
   0.07376923,
   0.0772372};
   Double_t _fehx3007[20] = {
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5};
   Double_t _fehy3007[20] = {
   0.001095939,
   0.00824692,
   0.1184806,
   0.1084933,
   0.2235819,
   0.1772815,
   0.07405615,
   0.1960437,
   0.4837525,
   0.1062629,
   0.4275564,
   0.4873987,
   0.234169,
   0.56354,
   0.1334281,
   0.02620095,
   0.0792127,
   0.3137882,
   0.07389391,
   0.07718218};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(20,_fx3007,_fy3007,_felx3007,_fehx3007,_fely3007,_fehy3007);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(12);
   grae->SetFillStyle(3004);
   grae->SetLineColor(12);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3007 = new TH1F("Graph_Graph3007","",100,78,102);
   Graph_Graph3007->SetMinimum(-0.4745852);
   Graph_Graph3007->SetMaximum(1.337994);
   Graph_Graph3007->SetDirectory(0);
   Graph_Graph3007->SetStats(0);
   Graph_Graph3007->SetLineStyle(0);
   Graph_Graph3007->SetMarkerStyle(20);
   Graph_Graph3007->GetXaxis()->SetLabelFont(42);
   Graph_Graph3007->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3007->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3007->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3007->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3007->GetXaxis()->SetTitleFont(42);
   Graph_Graph3007->GetYaxis()->SetLabelFont(42);
   Graph_Graph3007->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3007->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3007->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3007->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3007->GetYaxis()->SetTitleFont(42);
   Graph_Graph3007->GetZaxis()->SetLabelFont(42);
   Graph_Graph3007->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3007->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3007->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3007->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3007);
   
   grae->Draw("2");
   
   Double_t _fx3008[20] = {
   80.5,
   81.5,
   82.5,
   83.5,
   84.5,
   85.5,
   86.5,
   87.5,
   88.5,
   89.5,
   90.5,
   91.5,
   92.5,
   93.5,
   94.5,
   95.5,
   96.5,
   97.5,
   98.5,
   99.5};
   Double_t _fy3008[20] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   1,
   0,
   1,
   0,
   0,
   0,
   1,
   0,
   0,
   1,
   1,
   0};
   Double_t _felx3008[20] = {
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5};
   Double_t _fely3008[20] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0.8272524,
   0,
   0.8272524,
   0,
   0,
   0,
   0.8272524,
   0,
   0,
   0.8272524,
   0.8272524,
   0};
   Double_t _fehx3008[20] = {
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5};
   Double_t _fehy3008[20] = {
   1.147908,
   1.147908,
   1.147908,
   1.147908,
   1.147908,
   1.147908,
   1.147908,
   1.147908,
   2.29957,
   1.147908,
   2.29957,
   1.147908,
   1.147908,
   1.147908,
   2.29957,
   1.147908,
   1.147908,
   2.29957,
   2.29957,
   1.147908};
   grae = new TGraphAsymmErrors(20,_fx3008,_fy3008,_felx3008,_fehx3008,_fely3008,_fehy3008);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(1);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3008 = new TH1F("Graph_Graph3008","",100,78,102);
   Graph_Graph3008->SetMinimum(0);
   Graph_Graph3008->SetMaximum(3.629527);
   Graph_Graph3008->SetDirectory(0);
   Graph_Graph3008->SetStats(0);
   Graph_Graph3008->SetLineStyle(0);
   Graph_Graph3008->SetMarkerStyle(20);
   Graph_Graph3008->GetXaxis()->SetLabelFont(42);
   Graph_Graph3008->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3008->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3008->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3008->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3008->GetXaxis()->SetTitleFont(42);
   Graph_Graph3008->GetYaxis()->SetLabelFont(42);
   Graph_Graph3008->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3008->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3008->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3008->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3008->GetYaxis()->SetTitleFont(42);
   Graph_Graph3008->GetZaxis()->SetLabelFont(42);
   Graph_Graph3008->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3008->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3008->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3008->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3008);
   
   grae->Draw("p0");
   
   TLegend *leg = new TLegend(0.2,0.7,0.8,0.9,NULL,"brNDC");
   leg->SetTextFont(62);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("new_histo_group_Fake_wh3l_wz_13TeV_mlll","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_wz_13TeV_mlll","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_wz_13TeV_mlll","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_wz_13TeV_mlll","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_wz_13TeV_mlll","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_wz_13TeV_mlll","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_wz_13TeV_mlll","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_wz_13TeV_mlll","Data","EPL");
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
   entry=leg->AddEntry("new_histo_group_Fake_wh3l_wz_13TeV_mlll","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_wz_13TeV_mlll","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_wz_13TeV_mlll","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_wz_13TeV_mlll","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_wz_13TeV_mlll","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_wz_13TeV_mlll","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_wz_13TeV_mlll","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_wz_13TeV_mlll","Data","EPL");
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
   
   TH1F *hframe_copy40 = new TH1F("hframe_copy40","",1000,80,100);
   hframe_copy40->SetMinimum(0);
   hframe_copy40->SetMaximum(5);
   hframe_copy40->SetDirectory(0);
   hframe_copy40->SetStats(0);
   hframe_copy40->SetLineStyle(0);
   hframe_copy40->SetMarkerStyle(20);
   hframe_copy40->GetXaxis()->SetTitle("m_{lll} [GeV]");
   hframe_copy40->GetXaxis()->SetNdivisions(506);
   hframe_copy40->GetXaxis()->SetLabelFont(42);
   hframe_copy40->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy40->GetXaxis()->SetLabelSize(0.05);
   hframe_copy40->GetXaxis()->SetTitleSize(0.06);
   hframe_copy40->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy40->GetXaxis()->SetTitleFont(42);
   hframe_copy40->GetYaxis()->SetTitle("Events");
   hframe_copy40->GetYaxis()->SetLabelFont(42);
   hframe_copy40->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy40->GetYaxis()->SetLabelSize(0.05);
   hframe_copy40->GetYaxis()->SetTitleSize(0.06);
   hframe_copy40->GetYaxis()->SetTitleOffset(1.25);
   hframe_copy40->GetYaxis()->SetTitleFont(42);
   hframe_copy40->GetZaxis()->SetLabelFont(42);
   hframe_copy40->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy40->GetZaxis()->SetLabelSize(0.05);
   hframe_copy40->GetZaxis()->SetTitleSize(0.06);
   hframe_copy40->GetZaxis()->SetTitleFont(42);
   hframe_copy40->Draw("sameaxis");
   ccwh3l_wz_13TeV_mlll->Modified();
   ccwh3l_wz_13TeV_mlll->cd();
   ccwh3l_wz_13TeV_mlll->SetSelected(ccwh3l_wz_13TeV_mlll);
}
