void c_wh3l_13TeV_nvtx()
{
//=========Macro generated from canvas: ccwh3l_13TeV_nvtx/cc
//=========  (Fri Jun 24 14:14:24 2016) by ROOT version6.02/13
   TCanvas *ccwh3l_13TeV_nvtx = new TCanvas("ccwh3l_13TeV_nvtx", "cc",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   ccwh3l_13TeV_nvtx->SetHighLightColor(2);
   ccwh3l_13TeV_nvtx->Range(-8,-26.72786,42,178.8711);
   ccwh3l_13TeV_nvtx->SetFillColor(0);
   ccwh3l_13TeV_nvtx->SetBorderMode(0);
   ccwh3l_13TeV_nvtx->SetBorderSize(2);
   ccwh3l_13TeV_nvtx->SetTickx(1);
   ccwh3l_13TeV_nvtx->SetTicky(1);
   ccwh3l_13TeV_nvtx->SetLeftMargin(0.16);
   ccwh3l_13TeV_nvtx->SetRightMargin(0.04);
   ccwh3l_13TeV_nvtx->SetTopMargin(0.05);
   ccwh3l_13TeV_nvtx->SetBottomMargin(0.13);
   ccwh3l_13TeV_nvtx->SetFrameFillStyle(0);
   ccwh3l_13TeV_nvtx->SetFrameBorderMode(0);
   ccwh3l_13TeV_nvtx->SetFrameFillStyle(0);
   ccwh3l_13TeV_nvtx->SetFrameBorderMode(0);
   
   TH1F *hframe10 = new TH1F("hframe10","",1000,0,40);
   hframe10->SetMinimum(0);
   hframe10->SetMaximum(168.5911);
   hframe10->SetDirectory(0);
   hframe10->SetStats(0);
   hframe10->SetLineStyle(0);
   hframe10->SetMarkerStyle(20);
   hframe10->GetXaxis()->SetTitle("nvtx");
   hframe10->GetXaxis()->SetNdivisions(506);
   hframe10->GetXaxis()->SetLabelFont(42);
   hframe10->GetXaxis()->SetLabelOffset(0.007);
   hframe10->GetXaxis()->SetLabelSize(0.05);
   hframe10->GetXaxis()->SetTitleSize(0.06);
   hframe10->GetXaxis()->SetTitleOffset(0.9);
   hframe10->GetXaxis()->SetTitleFont(42);
   hframe10->GetYaxis()->SetTitle("Events");
   hframe10->GetYaxis()->SetLabelFont(42);
   hframe10->GetYaxis()->SetLabelOffset(0.007);
   hframe10->GetYaxis()->SetLabelSize(0.05);
   hframe10->GetYaxis()->SetTitleSize(0.06);
   hframe10->GetYaxis()->SetTitleOffset(1.25);
   hframe10->GetYaxis()->SetTitleFont(42);
   hframe10->GetZaxis()->SetLabelFont(42);
   hframe10->GetZaxis()->SetLabelOffset(0.007);
   hframe10->GetZaxis()->SetLabelSize(0.05);
   hframe10->GetZaxis()->SetTitleSize(0.06);
   hframe10->GetZaxis()->SetTitleFont(42);
   hframe10->Draw(" ");
   
   THStack *thsBackground_grouped_wh3l_13TeV_nvtx = new THStack();
   thsBackground_grouped_wh3l_13TeV_nvtx->SetName("thsBackground_grouped_wh3l_13TeV_nvtx");
   thsBackground_grouped_wh3l_13TeV_nvtx->SetTitle("thsBackground_grouped_wh3l_13TeV_nvtx");
   
   TH1F *thsBackground_grouped_wh3l_13TeV_nvtx_stack_3 = new TH1F("thsBackground_grouped_wh3l_13TeV_nvtx_stack_3","thsBackground_grouped_wh3l_13TeV_nvtx",40,0,40);
   thsBackground_grouped_wh3l_13TeV_nvtx_stack_3->SetMinimum(-0.3911124);
   thsBackground_grouped_wh3l_13TeV_nvtx_stack_3->SetMaximum(70.80827);
   thsBackground_grouped_wh3l_13TeV_nvtx_stack_3->SetDirectory(0);
   thsBackground_grouped_wh3l_13TeV_nvtx_stack_3->SetStats(0);
   thsBackground_grouped_wh3l_13TeV_nvtx_stack_3->SetLineStyle(0);
   thsBackground_grouped_wh3l_13TeV_nvtx_stack_3->SetMarkerStyle(20);
   thsBackground_grouped_wh3l_13TeV_nvtx_stack_3->GetXaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_13TeV_nvtx_stack_3->GetXaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_13TeV_nvtx_stack_3->GetXaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_13TeV_nvtx_stack_3->GetXaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_13TeV_nvtx_stack_3->GetXaxis()->SetTitleOffset(0.9);
   thsBackground_grouped_wh3l_13TeV_nvtx_stack_3->GetXaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_nvtx_stack_3->GetYaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_13TeV_nvtx_stack_3->GetYaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_13TeV_nvtx_stack_3->GetYaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_13TeV_nvtx_stack_3->GetYaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_13TeV_nvtx_stack_3->GetYaxis()->SetTitleOffset(1.25);
   thsBackground_grouped_wh3l_13TeV_nvtx_stack_3->GetYaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_nvtx_stack_3->GetZaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_13TeV_nvtx_stack_3->GetZaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_13TeV_nvtx_stack_3->GetZaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_13TeV_nvtx_stack_3->GetZaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_13TeV_nvtx_stack_3->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_nvtx->SetHistogram(thsBackground_grouped_wh3l_13TeV_nvtx_stack_3);
   
   
   TH1D *new_histo_group_DY_wh3l_13TeV_nvtx11 = new TH1D("new_histo_group_DY_wh3l_13TeV_nvtx11","histo_DY",40,0,40);
   new_histo_group_DY_wh3l_13TeV_nvtx11->SetBinContent(3,2.936769);
   new_histo_group_DY_wh3l_13TeV_nvtx11->SetBinContent(4,2.516825);
   new_histo_group_DY_wh3l_13TeV_nvtx11->SetBinContent(5,4.703192);
   new_histo_group_DY_wh3l_13TeV_nvtx11->SetBinContent(6,15.57649);
   new_histo_group_DY_wh3l_13TeV_nvtx11->SetBinContent(7,8.158785);
   new_histo_group_DY_wh3l_13TeV_nvtx11->SetBinContent(8,17.84224);
   new_histo_group_DY_wh3l_13TeV_nvtx11->SetBinContent(9,26.94886);
   new_histo_group_DY_wh3l_13TeV_nvtx11->SetBinContent(10,31.03518);
   new_histo_group_DY_wh3l_13TeV_nvtx11->SetBinContent(11,19.80416);
   new_histo_group_DY_wh3l_13TeV_nvtx11->SetBinContent(12,17.17897);
   new_histo_group_DY_wh3l_13TeV_nvtx11->SetBinContent(13,17.80482);
   new_histo_group_DY_wh3l_13TeV_nvtx11->SetBinContent(14,10.9361);
   new_histo_group_DY_wh3l_13TeV_nvtx11->SetBinContent(15,9.150151);
   new_histo_group_DY_wh3l_13TeV_nvtx11->SetBinContent(16,4.059334);
   new_histo_group_DY_wh3l_13TeV_nvtx11->SetBinContent(17,6.030629);
   new_histo_group_DY_wh3l_13TeV_nvtx11->SetBinContent(18,5.694221);
   new_histo_group_DY_wh3l_13TeV_nvtx11->SetBinContent(19,1.223467);
   new_histo_group_DY_wh3l_13TeV_nvtx11->SetBinContent(20,2.034858);
   new_histo_group_DY_wh3l_13TeV_nvtx11->SetBinContent(22,-0.007123063);
   new_histo_group_DY_wh3l_13TeV_nvtx11->SetBinContent(23,0.532807);
   new_histo_group_DY_wh3l_13TeV_nvtx11->SetBinContent(24,0.01342191);
   new_histo_group_DY_wh3l_13TeV_nvtx11->SetBinError(3,1.48225);
   new_histo_group_DY_wh3l_13TeV_nvtx11->SetBinError(4,2.44876);
   new_histo_group_DY_wh3l_13TeV_nvtx11->SetBinError(5,2.50422);
   new_histo_group_DY_wh3l_13TeV_nvtx11->SetBinError(6,3.869107);
   new_histo_group_DY_wh3l_13TeV_nvtx11->SetBinError(7,3.185529);
   new_histo_group_DY_wh3l_13TeV_nvtx11->SetBinError(8,4.664875);
   new_histo_group_DY_wh3l_13TeV_nvtx11->SetBinError(9,5.457333);
   new_histo_group_DY_wh3l_13TeV_nvtx11->SetBinError(10,5.58527);
   new_histo_group_DY_wh3l_13TeV_nvtx11->SetBinError(11,5.181805);
   new_histo_group_DY_wh3l_13TeV_nvtx11->SetBinError(12,4.196628);
   new_histo_group_DY_wh3l_13TeV_nvtx11->SetBinError(13,4.181888);
   new_histo_group_DY_wh3l_13TeV_nvtx11->SetBinError(14,3.320263);
   new_histo_group_DY_wh3l_13TeV_nvtx11->SetBinError(15,3.195285);
   new_histo_group_DY_wh3l_13TeV_nvtx11->SetBinError(16,2.176522);
   new_histo_group_DY_wh3l_13TeV_nvtx11->SetBinError(17,1.93671);
   new_histo_group_DY_wh3l_13TeV_nvtx11->SetBinError(18,1.708442);
   new_histo_group_DY_wh3l_13TeV_nvtx11->SetBinError(19,0.5809368);
   new_histo_group_DY_wh3l_13TeV_nvtx11->SetBinError(20,1.260636);
   new_histo_group_DY_wh3l_13TeV_nvtx11->SetBinError(22,0.3839893);
   new_histo_group_DY_wh3l_13TeV_nvtx11->SetBinError(23,0.378404);
   new_histo_group_DY_wh3l_13TeV_nvtx11->SetBinError(24,0.01342191);
   new_histo_group_DY_wh3l_13TeV_nvtx11->SetEntries(546);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#009900");
   new_histo_group_DY_wh3l_13TeV_nvtx11->SetFillColor(ci);
   new_histo_group_DY_wh3l_13TeV_nvtx11->SetFillStyle(3001);

   ci = TColor::GetColor("#009900");
   new_histo_group_DY_wh3l_13TeV_nvtx11->SetLineColor(ci);
   new_histo_group_DY_wh3l_13TeV_nvtx11->GetXaxis()->SetLabelFont(42);
   new_histo_group_DY_wh3l_13TeV_nvtx11->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_DY_wh3l_13TeV_nvtx11->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_DY_wh3l_13TeV_nvtx11->GetXaxis()->SetTitleFont(42);
   new_histo_group_DY_wh3l_13TeV_nvtx11->GetYaxis()->SetLabelFont(42);
   new_histo_group_DY_wh3l_13TeV_nvtx11->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_DY_wh3l_13TeV_nvtx11->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_DY_wh3l_13TeV_nvtx11->GetYaxis()->SetTitleFont(42);
   new_histo_group_DY_wh3l_13TeV_nvtx11->GetZaxis()->SetLabelFont(42);
   new_histo_group_DY_wh3l_13TeV_nvtx11->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_DY_wh3l_13TeV_nvtx11->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_DY_wh3l_13TeV_nvtx11->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_nvtx->Add(new_histo_group_DY_wh3l_13TeV_nvtx,"");
   
   TH1D *new_histo_group_top_wh3l_13TeV_nvtx12 = new TH1D("new_histo_group_top_wh3l_13TeV_nvtx12","histo_top",40,0,40);
   new_histo_group_top_wh3l_13TeV_nvtx12->SetBinContent(3,0.05530491);
   new_histo_group_top_wh3l_13TeV_nvtx12->SetBinContent(4,0.05120598);
   new_histo_group_top_wh3l_13TeV_nvtx12->SetBinContent(5,0.0978672);
   new_histo_group_top_wh3l_13TeV_nvtx12->SetBinContent(6,0.1636057);
   new_histo_group_top_wh3l_13TeV_nvtx12->SetBinContent(7,0.8329151);
   new_histo_group_top_wh3l_13TeV_nvtx12->SetBinContent(8,0.5651942);
   new_histo_group_top_wh3l_13TeV_nvtx12->SetBinContent(9,0.8714938);
   new_histo_group_top_wh3l_13TeV_nvtx12->SetBinContent(10,1.18935);
   new_histo_group_top_wh3l_13TeV_nvtx12->SetBinContent(11,0.8637216);
   new_histo_group_top_wh3l_13TeV_nvtx12->SetBinContent(12,0.9198568);
   new_histo_group_top_wh3l_13TeV_nvtx12->SetBinContent(13,0.9149943);
   new_histo_group_top_wh3l_13TeV_nvtx12->SetBinContent(14,0.4324112);
   new_histo_group_top_wh3l_13TeV_nvtx12->SetBinContent(15,0.4212189);
   new_histo_group_top_wh3l_13TeV_nvtx12->SetBinContent(16,0.3304348);
   new_histo_group_top_wh3l_13TeV_nvtx12->SetBinContent(17,0.2024812);
   new_histo_group_top_wh3l_13TeV_nvtx12->SetBinContent(18,0.060978);
   new_histo_group_top_wh3l_13TeV_nvtx12->SetBinContent(19,0.1012423);
   new_histo_group_top_wh3l_13TeV_nvtx12->SetBinContent(20,0.06356226);
   new_histo_group_top_wh3l_13TeV_nvtx12->SetBinContent(21,0.02441499);
   new_histo_group_top_wh3l_13TeV_nvtx12->SetBinContent(22,6.742091e-06);
   new_histo_group_top_wh3l_13TeV_nvtx12->SetBinContent(23,0.00333675);
   new_histo_group_top_wh3l_13TeV_nvtx12->SetBinContent(24,2.616343e-05);
   new_histo_group_top_wh3l_13TeV_nvtx12->SetBinContent(27,1.84053e-07);
   new_histo_group_top_wh3l_13TeV_nvtx12->SetBinContent(30,3.686109e-08);
   new_histo_group_top_wh3l_13TeV_nvtx12->SetBinContent(34,4.034349e-12);
   new_histo_group_top_wh3l_13TeV_nvtx12->SetBinError(3,0.03926477);
   new_histo_group_top_wh3l_13TeV_nvtx12->SetBinError(4,0.03629562);
   new_histo_group_top_wh3l_13TeV_nvtx12->SetBinError(5,0.04913162);
   new_histo_group_top_wh3l_13TeV_nvtx12->SetBinError(6,0.06229409);
   new_histo_group_top_wh3l_13TeV_nvtx12->SetBinError(7,0.1909291);
   new_histo_group_top_wh3l_13TeV_nvtx12->SetBinError(8,0.1449613);
   new_histo_group_top_wh3l_13TeV_nvtx12->SetBinError(9,0.1681946);
   new_histo_group_top_wh3l_13TeV_nvtx12->SetBinError(10,0.1855594);
   new_histo_group_top_wh3l_13TeV_nvtx12->SetBinError(11,0.159477);
   new_histo_group_top_wh3l_13TeV_nvtx12->SetBinError(12,0.1611778);
   new_histo_group_top_wh3l_13TeV_nvtx12->SetBinError(13,0.1905699);
   new_histo_group_top_wh3l_13TeV_nvtx12->SetBinError(14,0.09445378);
   new_histo_group_top_wh3l_13TeV_nvtx12->SetBinError(15,0.1137206);
   new_histo_group_top_wh3l_13TeV_nvtx12->SetBinError(16,0.08038929);
   new_histo_group_top_wh3l_13TeV_nvtx12->SetBinError(17,0.07904896);
   new_histo_group_top_wh3l_13TeV_nvtx12->SetBinError(18,0.03017666);
   new_histo_group_top_wh3l_13TeV_nvtx12->SetBinError(19,0.04160495);
   new_histo_group_top_wh3l_13TeV_nvtx12->SetBinError(20,0.03279961);
   new_histo_group_top_wh3l_13TeV_nvtx12->SetBinError(21,0.02441499);
   new_histo_group_top_wh3l_13TeV_nvtx12->SetBinError(22,6.742091e-06);
   new_histo_group_top_wh3l_13TeV_nvtx12->SetBinError(23,0.00333674);
   new_histo_group_top_wh3l_13TeV_nvtx12->SetBinError(24,2.616343e-05);
   new_histo_group_top_wh3l_13TeV_nvtx12->SetBinError(27,1.5104e-07);
   new_histo_group_top_wh3l_13TeV_nvtx12->SetBinError(30,3.686063e-08);
   new_histo_group_top_wh3l_13TeV_nvtx12->SetBinError(34,4.034349e-12);
   new_histo_group_top_wh3l_13TeV_nvtx12->SetEntries(377);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_top_wh3l_13TeV_nvtx12->SetFillColor(ci);
   new_histo_group_top_wh3l_13TeV_nvtx12->SetFillStyle(3001);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_top_wh3l_13TeV_nvtx12->SetLineColor(ci);
   new_histo_group_top_wh3l_13TeV_nvtx12->GetXaxis()->SetLabelFont(42);
   new_histo_group_top_wh3l_13TeV_nvtx12->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_top_wh3l_13TeV_nvtx12->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_top_wh3l_13TeV_nvtx12->GetXaxis()->SetTitleFont(42);
   new_histo_group_top_wh3l_13TeV_nvtx12->GetYaxis()->SetLabelFont(42);
   new_histo_group_top_wh3l_13TeV_nvtx12->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_top_wh3l_13TeV_nvtx12->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_top_wh3l_13TeV_nvtx12->GetYaxis()->SetTitleFont(42);
   new_histo_group_top_wh3l_13TeV_nvtx12->GetZaxis()->SetLabelFont(42);
   new_histo_group_top_wh3l_13TeV_nvtx12->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_top_wh3l_13TeV_nvtx12->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_top_wh3l_13TeV_nvtx12->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_nvtx->Add(new_histo_group_top_wh3l_13TeV_nvtx,"");
   
   TH1D *new_histo_group_WW_wh3l_13TeV_nvtx13 = new TH1D("new_histo_group_WW_wh3l_13TeV_nvtx13","histo_WW",40,0,40);
   new_histo_group_WW_wh3l_13TeV_nvtx13->SetBinContent(5,0.02742383);
   new_histo_group_WW_wh3l_13TeV_nvtx13->SetBinContent(6,0.01530474);
   new_histo_group_WW_wh3l_13TeV_nvtx13->SetBinContent(7,0.01398351);
   new_histo_group_WW_wh3l_13TeV_nvtx13->SetBinContent(8,0.06923039);
   new_histo_group_WW_wh3l_13TeV_nvtx13->SetBinContent(9,0.031041);
   new_histo_group_WW_wh3l_13TeV_nvtx13->SetBinContent(10,0.04801869);
   new_histo_group_WW_wh3l_13TeV_nvtx13->SetBinContent(11,0.03519726);
   new_histo_group_WW_wh3l_13TeV_nvtx13->SetBinContent(12,0.01711409);
   new_histo_group_WW_wh3l_13TeV_nvtx13->SetBinContent(13,0.01022165);
   new_histo_group_WW_wh3l_13TeV_nvtx13->SetBinContent(14,0.001363452);
   new_histo_group_WW_wh3l_13TeV_nvtx13->SetBinContent(16,0.009960908);
   new_histo_group_WW_wh3l_13TeV_nvtx13->SetBinContent(18,0.02314106);
   new_histo_group_WW_wh3l_13TeV_nvtx13->SetBinContent(24,0.003273078);
   new_histo_group_WW_wh3l_13TeV_nvtx13->SetBinError(5,0.01995209);
   new_histo_group_WW_wh3l_13TeV_nvtx13->SetBinError(6,0.01530474);
   new_histo_group_WW_wh3l_13TeV_nvtx13->SetBinError(7,0.01398351);
   new_histo_group_WW_wh3l_13TeV_nvtx13->SetBinError(8,0.03465441);
   new_histo_group_WW_wh3l_13TeV_nvtx13->SetBinError(9,0.02037039);
   new_histo_group_WW_wh3l_13TeV_nvtx13->SetBinError(10,0.02782655);
   new_histo_group_WW_wh3l_13TeV_nvtx13->SetBinError(11,0.02148649);
   new_histo_group_WW_wh3l_13TeV_nvtx13->SetBinError(12,0.01480448);
   new_histo_group_WW_wh3l_13TeV_nvtx13->SetBinError(13,0.01022165);
   new_histo_group_WW_wh3l_13TeV_nvtx13->SetBinError(14,0.001363452);
   new_histo_group_WW_wh3l_13TeV_nvtx13->SetBinError(16,0.009960908);
   new_histo_group_WW_wh3l_13TeV_nvtx13->SetBinError(18,0.01650315);
   new_histo_group_WW_wh3l_13TeV_nvtx13->SetBinError(24,0.003273078);
   new_histo_group_WW_wh3l_13TeV_nvtx13->SetEntries(26);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_13TeV_nvtx13->SetFillColor(ci);
   new_histo_group_WW_wh3l_13TeV_nvtx13->SetFillStyle(3001);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_13TeV_nvtx13->SetLineColor(ci);
   new_histo_group_WW_wh3l_13TeV_nvtx13->GetXaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_13TeV_nvtx13->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_13TeV_nvtx13->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_13TeV_nvtx13->GetXaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_13TeV_nvtx13->GetYaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_13TeV_nvtx13->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_13TeV_nvtx13->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_13TeV_nvtx13->GetYaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_13TeV_nvtx13->GetZaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_13TeV_nvtx13->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_13TeV_nvtx13->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_13TeV_nvtx13->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_nvtx->Add(new_histo_group_WW_wh3l_13TeV_nvtx,"");
   
   TH1D *new_histo_group_VVV_wh3l_13TeV_nvtx14 = new TH1D("new_histo_group_VVV_wh3l_13TeV_nvtx14","histo_VVV",40,0,40);
   new_histo_group_VVV_wh3l_13TeV_nvtx14->SetBinContent(2,0.0007726462);
   new_histo_group_VVV_wh3l_13TeV_nvtx14->SetBinContent(4,0.001210536);
   new_histo_group_VVV_wh3l_13TeV_nvtx14->SetBinContent(5,0.01126645);
   new_histo_group_VVV_wh3l_13TeV_nvtx14->SetBinContent(6,0.01351417);
   new_histo_group_VVV_wh3l_13TeV_nvtx14->SetBinContent(7,0.02030603);
   new_histo_group_VVV_wh3l_13TeV_nvtx14->SetBinContent(8,0.03007639);
   new_histo_group_VVV_wh3l_13TeV_nvtx14->SetBinContent(9,0.02846422);
   new_histo_group_VVV_wh3l_13TeV_nvtx14->SetBinContent(10,0.03212415);
   new_histo_group_VVV_wh3l_13TeV_nvtx14->SetBinContent(11,0.02199519);
   new_histo_group_VVV_wh3l_13TeV_nvtx14->SetBinContent(12,0.02032697);
   new_histo_group_VVV_wh3l_13TeV_nvtx14->SetBinContent(13,0.01967388);
   new_histo_group_VVV_wh3l_13TeV_nvtx14->SetBinContent(14,0.01439901);
   new_histo_group_VVV_wh3l_13TeV_nvtx14->SetBinContent(15,0.009053089);
   new_histo_group_VVV_wh3l_13TeV_nvtx14->SetBinContent(16,0.009108448);
   new_histo_group_VVV_wh3l_13TeV_nvtx14->SetBinContent(17,0.003793608);
   new_histo_group_VVV_wh3l_13TeV_nvtx14->SetBinContent(18,0.002109267);
   new_histo_group_VVV_wh3l_13TeV_nvtx14->SetBinContent(19,0.002017581);
   new_histo_group_VVV_wh3l_13TeV_nvtx14->SetBinContent(20,0.000421395);
   new_histo_group_VVV_wh3l_13TeV_nvtx14->SetBinContent(21,1.946464e-07);
   new_histo_group_VVV_wh3l_13TeV_nvtx14->SetBinContent(22,0.0003082413);
   new_histo_group_VVV_wh3l_13TeV_nvtx14->SetBinContent(26,2.385058e-10);
   new_histo_group_VVV_wh3l_13TeV_nvtx14->SetBinError(2,0.0007726462);
   new_histo_group_VVV_wh3l_13TeV_nvtx14->SetBinError(4,0.001210536);
   new_histo_group_VVV_wh3l_13TeV_nvtx14->SetBinError(5,0.003004473);
   new_histo_group_VVV_wh3l_13TeV_nvtx14->SetBinError(6,0.003197806);
   new_histo_group_VVV_wh3l_13TeV_nvtx14->SetBinError(7,0.003844443);
   new_histo_group_VVV_wh3l_13TeV_nvtx14->SetBinError(8,0.004718281);
   new_histo_group_VVV_wh3l_13TeV_nvtx14->SetBinError(9,0.004698542);
   new_histo_group_VVV_wh3l_13TeV_nvtx14->SetBinError(10,0.004786456);
   new_histo_group_VVV_wh3l_13TeV_nvtx14->SetBinError(11,0.004020655);
   new_histo_group_VVV_wh3l_13TeV_nvtx14->SetBinError(12,0.003861207);
   new_histo_group_VVV_wh3l_13TeV_nvtx14->SetBinError(13,0.003381714);
   new_histo_group_VVV_wh3l_13TeV_nvtx14->SetBinError(14,0.002800392);
   new_histo_group_VVV_wh3l_13TeV_nvtx14->SetBinError(15,0.002551688);
   new_histo_group_VVV_wh3l_13TeV_nvtx14->SetBinError(16,0.002106556);
   new_histo_group_VVV_wh3l_13TeV_nvtx14->SetBinError(17,0.001258106);
   new_histo_group_VVV_wh3l_13TeV_nvtx14->SetBinError(18,0.0009431968);
   new_histo_group_VVV_wh3l_13TeV_nvtx14->SetBinError(19,0.0008776475);
   new_histo_group_VVV_wh3l_13TeV_nvtx14->SetBinError(20,0.0002441527);
   new_histo_group_VVV_wh3l_13TeV_nvtx14->SetBinError(21,1.946464e-07);
   new_histo_group_VVV_wh3l_13TeV_nvtx14->SetBinError(22,0.0003082413);
   new_histo_group_VVV_wh3l_13TeV_nvtx14->SetBinError(26,2.385058e-10);
   new_histo_group_VVV_wh3l_13TeV_nvtx14->SetEntries(478);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_13TeV_nvtx14->SetFillColor(ci);
   new_histo_group_VVV_wh3l_13TeV_nvtx14->SetFillStyle(3001);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_13TeV_nvtx14->SetLineColor(ci);
   new_histo_group_VVV_wh3l_13TeV_nvtx14->GetXaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_13TeV_nvtx14->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_13TeV_nvtx14->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_13TeV_nvtx14->GetXaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_13TeV_nvtx14->GetYaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_13TeV_nvtx14->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_13TeV_nvtx14->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_13TeV_nvtx14->GetYaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_13TeV_nvtx14->GetZaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_13TeV_nvtx14->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_13TeV_nvtx14->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_13TeV_nvtx14->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_nvtx->Add(new_histo_group_VVV_wh3l_13TeV_nvtx,"");
   
   TH1D *new_histo_group_VZ_wh3l_13TeV_nvtx15 = new TH1D("new_histo_group_VZ_wh3l_13TeV_nvtx15","histo_VZ",40,0,40);
   new_histo_group_VZ_wh3l_13TeV_nvtx15->SetBinContent(2,0.2533232);
   new_histo_group_VZ_wh3l_13TeV_nvtx15->SetBinContent(3,0.984743);
   new_histo_group_VZ_wh3l_13TeV_nvtx15->SetBinContent(4,3.489536);
   new_histo_group_VZ_wh3l_13TeV_nvtx15->SetBinContent(5,7.893649);
   new_histo_group_VZ_wh3l_13TeV_nvtx15->SetBinContent(6,14.70333);
   new_histo_group_VZ_wh3l_13TeV_nvtx15->SetBinContent(7,22.19875);
   new_histo_group_VZ_wh3l_13TeV_nvtx15->SetBinContent(8,29.39);
   new_histo_group_VZ_wh3l_13TeV_nvtx15->SetBinContent(9,32.08833);
   new_histo_group_VZ_wh3l_13TeV_nvtx15->SetBinContent(10,34.94336);
   new_histo_group_VZ_wh3l_13TeV_nvtx15->SetBinContent(11,31.58519);
   new_histo_group_VZ_wh3l_13TeV_nvtx15->SetBinContent(12,28.37003);
   new_histo_group_VZ_wh3l_13TeV_nvtx15->SetBinContent(13,23.30166);
   new_histo_group_VZ_wh3l_13TeV_nvtx15->SetBinContent(14,17.22049);
   new_histo_group_VZ_wh3l_13TeV_nvtx15->SetBinContent(15,11.90457);
   new_histo_group_VZ_wh3l_13TeV_nvtx15->SetBinContent(16,7.89981);
   new_histo_group_VZ_wh3l_13TeV_nvtx15->SetBinContent(17,5.113202);
   new_histo_group_VZ_wh3l_13TeV_nvtx15->SetBinContent(18,3.44774);
   new_histo_group_VZ_wh3l_13TeV_nvtx15->SetBinContent(19,2.037033);
   new_histo_group_VZ_wh3l_13TeV_nvtx15->SetBinContent(20,1.062956);
   new_histo_group_VZ_wh3l_13TeV_nvtx15->SetBinContent(21,0.5917756);
   new_histo_group_VZ_wh3l_13TeV_nvtx15->SetBinContent(22,0.3271424);
   new_histo_group_VZ_wh3l_13TeV_nvtx15->SetBinContent(23,0.1195777);
   new_histo_group_VZ_wh3l_13TeV_nvtx15->SetBinContent(24,0.07319715);
   new_histo_group_VZ_wh3l_13TeV_nvtx15->SetBinContent(25,0.03676293);
   new_histo_group_VZ_wh3l_13TeV_nvtx15->SetBinContent(26,0.01373099);
   new_histo_group_VZ_wh3l_13TeV_nvtx15->SetBinContent(27,0.0091173);
   new_histo_group_VZ_wh3l_13TeV_nvtx15->SetBinContent(28,0.008242076);
   new_histo_group_VZ_wh3l_13TeV_nvtx15->SetBinContent(29,0.002625607);
   new_histo_group_VZ_wh3l_13TeV_nvtx15->SetBinContent(30,0.0006757635);
   new_histo_group_VZ_wh3l_13TeV_nvtx15->SetBinContent(31,0.002275775);
   new_histo_group_VZ_wh3l_13TeV_nvtx15->SetBinContent(32,6.902785e-06);
   new_histo_group_VZ_wh3l_13TeV_nvtx15->SetBinContent(38,9.49741e-07);
   new_histo_group_VZ_wh3l_13TeV_nvtx15->SetBinContent(39,5.235933e-13);
   new_histo_group_VZ_wh3l_13TeV_nvtx15->SetBinError(2,0.07644852);
   new_histo_group_VZ_wh3l_13TeV_nvtx15->SetBinError(3,0.1275692);
   new_histo_group_VZ_wh3l_13TeV_nvtx15->SetBinError(4,0.2356476);
   new_histo_group_VZ_wh3l_13TeV_nvtx15->SetBinError(5,0.3656593);
   new_histo_group_VZ_wh3l_13TeV_nvtx15->SetBinError(6,0.4561901);
   new_histo_group_VZ_wh3l_13TeV_nvtx15->SetBinError(7,0.5636072);
   new_histo_group_VZ_wh3l_13TeV_nvtx15->SetBinError(8,0.6394888);
   new_histo_group_VZ_wh3l_13TeV_nvtx15->SetBinError(9,0.6608243);
   new_histo_group_VZ_wh3l_13TeV_nvtx15->SetBinError(10,0.6911809);
   new_histo_group_VZ_wh3l_13TeV_nvtx15->SetBinError(11,0.6207171);
   new_histo_group_VZ_wh3l_13TeV_nvtx15->SetBinError(12,0.5859794);
   new_histo_group_VZ_wh3l_13TeV_nvtx15->SetBinError(13,0.5386822);
   new_histo_group_VZ_wh3l_13TeV_nvtx15->SetBinError(14,0.4584784);
   new_histo_group_VZ_wh3l_13TeV_nvtx15->SetBinError(15,0.3660095);
   new_histo_group_VZ_wh3l_13TeV_nvtx15->SetBinError(16,0.2762103);
   new_histo_group_VZ_wh3l_13TeV_nvtx15->SetBinError(17,0.2291769);
   new_histo_group_VZ_wh3l_13TeV_nvtx15->SetBinError(18,0.196459);
   new_histo_group_VZ_wh3l_13TeV_nvtx15->SetBinError(19,0.1379687);
   new_histo_group_VZ_wh3l_13TeV_nvtx15->SetBinError(20,0.1036649);
   new_histo_group_VZ_wh3l_13TeV_nvtx15->SetBinError(21,0.06437581);
   new_histo_group_VZ_wh3l_13TeV_nvtx15->SetBinError(22,0.04699225);
   new_histo_group_VZ_wh3l_13TeV_nvtx15->SetBinError(23,0.02540886);
   new_histo_group_VZ_wh3l_13TeV_nvtx15->SetBinError(24,0.02966927);
   new_histo_group_VZ_wh3l_13TeV_nvtx15->SetBinError(25,0.0095126);
   new_histo_group_VZ_wh3l_13TeV_nvtx15->SetBinError(26,0.005892341);
   new_histo_group_VZ_wh3l_13TeV_nvtx15->SetBinError(27,0.00414495);
   new_histo_group_VZ_wh3l_13TeV_nvtx15->SetBinError(28,0.005169597);
   new_histo_group_VZ_wh3l_13TeV_nvtx15->SetBinError(29,0.001479305);
   new_histo_group_VZ_wh3l_13TeV_nvtx15->SetBinError(30,0.0006751464);
   new_histo_group_VZ_wh3l_13TeV_nvtx15->SetBinError(31,0.00227393);
   new_histo_group_VZ_wh3l_13TeV_nvtx15->SetBinError(32,6.892381e-06);
   new_histo_group_VZ_wh3l_13TeV_nvtx15->SetBinError(38,9.497408e-07);
   new_histo_group_VZ_wh3l_13TeV_nvtx15->SetBinError(39,5.235933e-13);
   new_histo_group_VZ_wh3l_13TeV_nvtx15->SetEntries(46249);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_VZ_wh3l_13TeV_nvtx15->SetFillColor(ci);
   new_histo_group_VZ_wh3l_13TeV_nvtx15->SetFillStyle(3001);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_VZ_wh3l_13TeV_nvtx15->SetLineColor(ci);
   new_histo_group_VZ_wh3l_13TeV_nvtx15->GetXaxis()->SetLabelFont(42);
   new_histo_group_VZ_wh3l_13TeV_nvtx15->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_VZ_wh3l_13TeV_nvtx15->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_VZ_wh3l_13TeV_nvtx15->GetXaxis()->SetTitleFont(42);
   new_histo_group_VZ_wh3l_13TeV_nvtx15->GetYaxis()->SetLabelFont(42);
   new_histo_group_VZ_wh3l_13TeV_nvtx15->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_VZ_wh3l_13TeV_nvtx15->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_VZ_wh3l_13TeV_nvtx15->GetYaxis()->SetTitleFont(42);
   new_histo_group_VZ_wh3l_13TeV_nvtx15->GetZaxis()->SetLabelFont(42);
   new_histo_group_VZ_wh3l_13TeV_nvtx15->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_VZ_wh3l_13TeV_nvtx15->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_VZ_wh3l_13TeV_nvtx15->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_nvtx->Add(new_histo_group_VZ_wh3l_13TeV_nvtx,"");
   
   TH1D *new_histo_group_Higgs_wh3l_13TeV_nvtx16 = new TH1D("new_histo_group_Higgs_wh3l_13TeV_nvtx16","histo_H_htt",40,0,40);
   new_histo_group_Higgs_wh3l_13TeV_nvtx16->SetBinContent(2,0.001426318);
   new_histo_group_Higgs_wh3l_13TeV_nvtx16->SetBinContent(3,0.002807211);
   new_histo_group_Higgs_wh3l_13TeV_nvtx16->SetBinContent(4,0.02985243);
   new_histo_group_Higgs_wh3l_13TeV_nvtx16->SetBinContent(5,0.04341802);
   new_histo_group_Higgs_wh3l_13TeV_nvtx16->SetBinContent(6,0.08477728);
   new_histo_group_Higgs_wh3l_13TeV_nvtx16->SetBinContent(7,0.1386854);
   new_histo_group_Higgs_wh3l_13TeV_nvtx16->SetBinContent(8,0.1390839);
   new_histo_group_Higgs_wh3l_13TeV_nvtx16->SetBinContent(9,0.1664824);
   new_histo_group_Higgs_wh3l_13TeV_nvtx16->SetBinContent(10,0.1884124);
   new_histo_group_Higgs_wh3l_13TeV_nvtx16->SetBinContent(11,0.1664133);
   new_histo_group_Higgs_wh3l_13TeV_nvtx16->SetBinContent(12,0.1670481);
   new_histo_group_Higgs_wh3l_13TeV_nvtx16->SetBinContent(13,0.1414243);
   new_histo_group_Higgs_wh3l_13TeV_nvtx16->SetBinContent(14,0.08473367);
   new_histo_group_Higgs_wh3l_13TeV_nvtx16->SetBinContent(15,0.05294698);
   new_histo_group_Higgs_wh3l_13TeV_nvtx16->SetBinContent(16,0.03997141);
   new_histo_group_Higgs_wh3l_13TeV_nvtx16->SetBinContent(17,0.03072516);
   new_histo_group_Higgs_wh3l_13TeV_nvtx16->SetBinContent(18,0.01925966);
   new_histo_group_Higgs_wh3l_13TeV_nvtx16->SetBinContent(19,0.006147575);
   new_histo_group_Higgs_wh3l_13TeV_nvtx16->SetBinContent(20,0.006669325);
   new_histo_group_Higgs_wh3l_13TeV_nvtx16->SetBinContent(21,0.00543541);
   new_histo_group_Higgs_wh3l_13TeV_nvtx16->SetBinContent(22,0.0003894684);
   new_histo_group_Higgs_wh3l_13TeV_nvtx16->SetBinContent(23,0.001045932);
   new_histo_group_Higgs_wh3l_13TeV_nvtx16->SetBinContent(24,0.0006636595);
   new_histo_group_Higgs_wh3l_13TeV_nvtx16->SetBinContent(25,-1.303662e-07);
   new_histo_group_Higgs_wh3l_13TeV_nvtx16->SetBinContent(27,3.272666e-07);
   new_histo_group_Higgs_wh3l_13TeV_nvtx16->SetBinContent(28,3.879789e-08);
   new_histo_group_Higgs_wh3l_13TeV_nvtx16->SetBinContent(29,1.954607e-06);
   new_histo_group_Higgs_wh3l_13TeV_nvtx16->SetBinContent(30,7.388747e-13);
   new_histo_group_Higgs_wh3l_13TeV_nvtx16->SetBinContent(31,1.303543e-10);
   new_histo_group_Higgs_wh3l_13TeV_nvtx16->SetBinContent(34,2.647547e-11);
   new_histo_group_Higgs_wh3l_13TeV_nvtx16->SetBinError(2,0.001426318);
   new_histo_group_Higgs_wh3l_13TeV_nvtx16->SetBinError(3,0.001258158);
   new_histo_group_Higgs_wh3l_13TeV_nvtx16->SetBinError(4,0.006559931);
   new_histo_group_Higgs_wh3l_13TeV_nvtx16->SetBinError(5,0.006817045);
   new_histo_group_Higgs_wh3l_13TeV_nvtx16->SetBinError(6,0.01052334);
   new_histo_group_Higgs_wh3l_13TeV_nvtx16->SetBinError(7,0.01398621);
   new_histo_group_Higgs_wh3l_13TeV_nvtx16->SetBinError(8,0.01255526);
   new_histo_group_Higgs_wh3l_13TeV_nvtx16->SetBinError(9,0.01401823);
   new_histo_group_Higgs_wh3l_13TeV_nvtx16->SetBinError(10,0.01457882);
   new_histo_group_Higgs_wh3l_13TeV_nvtx16->SetBinError(11,0.01367956);
   new_histo_group_Higgs_wh3l_13TeV_nvtx16->SetBinError(12,0.01355776);
   new_histo_group_Higgs_wh3l_13TeV_nvtx16->SetBinError(13,0.01273006);
   new_histo_group_Higgs_wh3l_13TeV_nvtx16->SetBinError(14,0.008738468);
   new_histo_group_Higgs_wh3l_13TeV_nvtx16->SetBinError(15,0.007358659);
   new_histo_group_Higgs_wh3l_13TeV_nvtx16->SetBinError(16,0.005956172);
   new_histo_group_Higgs_wh3l_13TeV_nvtx16->SetBinError(17,0.005646794);
   new_histo_group_Higgs_wh3l_13TeV_nvtx16->SetBinError(18,0.004259042);
   new_histo_group_Higgs_wh3l_13TeV_nvtx16->SetBinError(19,0.001779457);
   new_histo_group_Higgs_wh3l_13TeV_nvtx16->SetBinError(20,0.0020469);
   new_histo_group_Higgs_wh3l_13TeV_nvtx16->SetBinError(21,0.002132848);
   new_histo_group_Higgs_wh3l_13TeV_nvtx16->SetBinError(22,0.0002368959);
   new_histo_group_Higgs_wh3l_13TeV_nvtx16->SetBinError(23,0.0004630727);
   new_histo_group_Higgs_wh3l_13TeV_nvtx16->SetBinError(24,0.0006636595);
   new_histo_group_Higgs_wh3l_13TeV_nvtx16->SetBinError(25,6.662418e-07);
   new_histo_group_Higgs_wh3l_13TeV_nvtx16->SetBinError(27,3.253864e-07);
   new_histo_group_Higgs_wh3l_13TeV_nvtx16->SetBinError(28,3.876611e-08);
   new_histo_group_Higgs_wh3l_13TeV_nvtx16->SetBinError(29,1.651878e-06);
   new_histo_group_Higgs_wh3l_13TeV_nvtx16->SetBinError(30,7.388747e-13);
   new_histo_group_Higgs_wh3l_13TeV_nvtx16->SetBinError(31,1.303543e-10);
   new_histo_group_Higgs_wh3l_13TeV_nvtx16->SetBinError(34,2.647547e-11);
   new_histo_group_Higgs_wh3l_13TeV_nvtx16->SetEntries(2720);
   new_histo_group_Higgs_wh3l_13TeV_nvtx16->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_13TeV_nvtx16->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_13TeV_nvtx16->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_13TeV_nvtx16->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_13TeV_nvtx16->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_nvtx16->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_nvtx16->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_13TeV_nvtx16->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_13TeV_nvtx16->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_nvtx16->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_nvtx16->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_13TeV_nvtx16->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_13TeV_nvtx16->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_nvtx16->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_nvtx16->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_nvtx->Add(new_histo_group_Higgs_wh3l_13TeV_nvtx,"");
   thsBackground_grouped_wh3l_13TeV_nvtx->Draw("hist same");
   
   thsSignal_grouped_wh3l_13TeV_nvtx = new THStack();
   thsSignal_grouped_wh3l_13TeV_nvtx->SetName("thsSignal_grouped_wh3l_13TeV_nvtx");
   thsSignal_grouped_wh3l_13TeV_nvtx->SetTitle("thsSignal_grouped_wh3l_13TeV_nvtx");
   
   TH1F *thsSignal_grouped_wh3l_13TeV_nvtx_stack_4 = new TH1F("thsSignal_grouped_wh3l_13TeV_nvtx_stack_4","thsSignal_grouped_wh3l_13TeV_nvtx",40,0,40);
   thsSignal_grouped_wh3l_13TeV_nvtx_stack_4->SetMinimum(-7.966079e-07);
   thsSignal_grouped_wh3l_13TeV_nvtx_stack_4->SetMaximum(0.2131408);
   thsSignal_grouped_wh3l_13TeV_nvtx_stack_4->SetDirectory(0);
   thsSignal_grouped_wh3l_13TeV_nvtx_stack_4->SetStats(0);
   thsSignal_grouped_wh3l_13TeV_nvtx_stack_4->SetLineStyle(0);
   thsSignal_grouped_wh3l_13TeV_nvtx_stack_4->SetMarkerStyle(20);
   thsSignal_grouped_wh3l_13TeV_nvtx_stack_4->GetXaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_13TeV_nvtx_stack_4->GetXaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_13TeV_nvtx_stack_4->GetXaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_13TeV_nvtx_stack_4->GetXaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_13TeV_nvtx_stack_4->GetXaxis()->SetTitleOffset(0.9);
   thsSignal_grouped_wh3l_13TeV_nvtx_stack_4->GetXaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_13TeV_nvtx_stack_4->GetYaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_13TeV_nvtx_stack_4->GetYaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_13TeV_nvtx_stack_4->GetYaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_13TeV_nvtx_stack_4->GetYaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_13TeV_nvtx_stack_4->GetYaxis()->SetTitleOffset(1.25);
   thsSignal_grouped_wh3l_13TeV_nvtx_stack_4->GetYaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_13TeV_nvtx_stack_4->GetZaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_13TeV_nvtx_stack_4->GetZaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_13TeV_nvtx_stack_4->GetZaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_13TeV_nvtx_stack_4->GetZaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_13TeV_nvtx_stack_4->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_13TeV_nvtx->SetHistogram(thsSignal_grouped_wh3l_13TeV_nvtx_stack_4);
   
   
   TH1D *new_histo_group_Higgs_wh3l_13TeV_nvtx17 = new TH1D("new_histo_group_Higgs_wh3l_13TeV_nvtx17","histo_H_htt",40,0,40);
   new_histo_group_Higgs_wh3l_13TeV_nvtx17->SetBinContent(2,0.001426318);
   new_histo_group_Higgs_wh3l_13TeV_nvtx17->SetBinContent(3,0.002807211);
   new_histo_group_Higgs_wh3l_13TeV_nvtx17->SetBinContent(4,0.02985243);
   new_histo_group_Higgs_wh3l_13TeV_nvtx17->SetBinContent(5,0.04341802);
   new_histo_group_Higgs_wh3l_13TeV_nvtx17->SetBinContent(6,0.08477728);
   new_histo_group_Higgs_wh3l_13TeV_nvtx17->SetBinContent(7,0.1386854);
   new_histo_group_Higgs_wh3l_13TeV_nvtx17->SetBinContent(8,0.1390839);
   new_histo_group_Higgs_wh3l_13TeV_nvtx17->SetBinContent(9,0.1664824);
   new_histo_group_Higgs_wh3l_13TeV_nvtx17->SetBinContent(10,0.1884124);
   new_histo_group_Higgs_wh3l_13TeV_nvtx17->SetBinContent(11,0.1664133);
   new_histo_group_Higgs_wh3l_13TeV_nvtx17->SetBinContent(12,0.1670481);
   new_histo_group_Higgs_wh3l_13TeV_nvtx17->SetBinContent(13,0.1414243);
   new_histo_group_Higgs_wh3l_13TeV_nvtx17->SetBinContent(14,0.08473367);
   new_histo_group_Higgs_wh3l_13TeV_nvtx17->SetBinContent(15,0.05294698);
   new_histo_group_Higgs_wh3l_13TeV_nvtx17->SetBinContent(16,0.03997141);
   new_histo_group_Higgs_wh3l_13TeV_nvtx17->SetBinContent(17,0.03072516);
   new_histo_group_Higgs_wh3l_13TeV_nvtx17->SetBinContent(18,0.01925966);
   new_histo_group_Higgs_wh3l_13TeV_nvtx17->SetBinContent(19,0.006147575);
   new_histo_group_Higgs_wh3l_13TeV_nvtx17->SetBinContent(20,0.006669325);
   new_histo_group_Higgs_wh3l_13TeV_nvtx17->SetBinContent(21,0.00543541);
   new_histo_group_Higgs_wh3l_13TeV_nvtx17->SetBinContent(22,0.0003894684);
   new_histo_group_Higgs_wh3l_13TeV_nvtx17->SetBinContent(23,0.001045932);
   new_histo_group_Higgs_wh3l_13TeV_nvtx17->SetBinContent(24,0.0006636595);
   new_histo_group_Higgs_wh3l_13TeV_nvtx17->SetBinContent(25,-1.303662e-07);
   new_histo_group_Higgs_wh3l_13TeV_nvtx17->SetBinContent(27,3.272666e-07);
   new_histo_group_Higgs_wh3l_13TeV_nvtx17->SetBinContent(28,3.879789e-08);
   new_histo_group_Higgs_wh3l_13TeV_nvtx17->SetBinContent(29,1.954607e-06);
   new_histo_group_Higgs_wh3l_13TeV_nvtx17->SetBinContent(30,7.388747e-13);
   new_histo_group_Higgs_wh3l_13TeV_nvtx17->SetBinContent(31,1.303543e-10);
   new_histo_group_Higgs_wh3l_13TeV_nvtx17->SetBinContent(34,2.647547e-11);
   new_histo_group_Higgs_wh3l_13TeV_nvtx17->SetBinError(2,0.001426318);
   new_histo_group_Higgs_wh3l_13TeV_nvtx17->SetBinError(3,0.001258158);
   new_histo_group_Higgs_wh3l_13TeV_nvtx17->SetBinError(4,0.006559931);
   new_histo_group_Higgs_wh3l_13TeV_nvtx17->SetBinError(5,0.006817045);
   new_histo_group_Higgs_wh3l_13TeV_nvtx17->SetBinError(6,0.01052334);
   new_histo_group_Higgs_wh3l_13TeV_nvtx17->SetBinError(7,0.01398621);
   new_histo_group_Higgs_wh3l_13TeV_nvtx17->SetBinError(8,0.01255526);
   new_histo_group_Higgs_wh3l_13TeV_nvtx17->SetBinError(9,0.01401823);
   new_histo_group_Higgs_wh3l_13TeV_nvtx17->SetBinError(10,0.01457882);
   new_histo_group_Higgs_wh3l_13TeV_nvtx17->SetBinError(11,0.01367956);
   new_histo_group_Higgs_wh3l_13TeV_nvtx17->SetBinError(12,0.01355776);
   new_histo_group_Higgs_wh3l_13TeV_nvtx17->SetBinError(13,0.01273006);
   new_histo_group_Higgs_wh3l_13TeV_nvtx17->SetBinError(14,0.008738468);
   new_histo_group_Higgs_wh3l_13TeV_nvtx17->SetBinError(15,0.007358659);
   new_histo_group_Higgs_wh3l_13TeV_nvtx17->SetBinError(16,0.005956172);
   new_histo_group_Higgs_wh3l_13TeV_nvtx17->SetBinError(17,0.005646794);
   new_histo_group_Higgs_wh3l_13TeV_nvtx17->SetBinError(18,0.004259042);
   new_histo_group_Higgs_wh3l_13TeV_nvtx17->SetBinError(19,0.001779457);
   new_histo_group_Higgs_wh3l_13TeV_nvtx17->SetBinError(20,0.0020469);
   new_histo_group_Higgs_wh3l_13TeV_nvtx17->SetBinError(21,0.002132848);
   new_histo_group_Higgs_wh3l_13TeV_nvtx17->SetBinError(22,0.0002368959);
   new_histo_group_Higgs_wh3l_13TeV_nvtx17->SetBinError(23,0.0004630727);
   new_histo_group_Higgs_wh3l_13TeV_nvtx17->SetBinError(24,0.0006636595);
   new_histo_group_Higgs_wh3l_13TeV_nvtx17->SetBinError(25,6.662418e-07);
   new_histo_group_Higgs_wh3l_13TeV_nvtx17->SetBinError(27,3.253864e-07);
   new_histo_group_Higgs_wh3l_13TeV_nvtx17->SetBinError(28,3.876611e-08);
   new_histo_group_Higgs_wh3l_13TeV_nvtx17->SetBinError(29,1.651878e-06);
   new_histo_group_Higgs_wh3l_13TeV_nvtx17->SetBinError(30,7.388747e-13);
   new_histo_group_Higgs_wh3l_13TeV_nvtx17->SetBinError(31,1.303543e-10);
   new_histo_group_Higgs_wh3l_13TeV_nvtx17->SetBinError(34,2.647547e-11);
   new_histo_group_Higgs_wh3l_13TeV_nvtx17->SetEntries(2720);
   new_histo_group_Higgs_wh3l_13TeV_nvtx17->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_13TeV_nvtx17->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_13TeV_nvtx17->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_13TeV_nvtx17->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_13TeV_nvtx17->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_nvtx17->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_nvtx17->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_13TeV_nvtx17->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_13TeV_nvtx17->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_nvtx17->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_nvtx17->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_13TeV_nvtx17->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_13TeV_nvtx17->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_nvtx17->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_nvtx17->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_13TeV_nvtx->Add(new_histo_group_Higgs_wh3l_13TeV_nvtx,"");
   thsSignal_grouped_wh3l_13TeV_nvtx->Draw("hist same noclear");
   
   Double_t _fx3002[40] = {
   0.5,
   1.5,
   2.5,
   3.5,
   4.5,
   5.5,
   6.5,
   7.5,
   8.5,
   9.5,
   10.5,
   11.5,
   12.5,
   13.5,
   14.5,
   15.5,
   16.5,
   17.5,
   18.5,
   19.5,
   20.5,
   21.5,
   22.5,
   23.5,
   24.5,
   25.5,
   26.5,
   27.5,
   28.5,
   29.5,
   30.5,
   31.5,
   32.5,
   33.5,
   34.5,
   35.5,
   36.5,
   37.5,
   38.5,
   39.5};
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
   0.5,
   0.5};
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
   0.5,
   0.5};
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
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(40,_fx3002,_fy3002,_felx3002,_fehx3002,_fely3002,_fehy3002);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(1);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3002 = new TH1F("Graph_Graph3002","",100,0,44);
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
   
   TLegend *leg = new TLegend(0.2,0.55,0.8,0.88,NULL,"brNDC");
   leg->SetTextFont(62);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("new_histo_group_DY_wh3l_13TeV_nvtx","DY","F");

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
   entry=leg->AddEntry("new_histo_group_top_wh3l_13TeV_nvtx","tW and t#bart","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_13TeV_nvtx","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_13TeV_nvtx","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_VZ_wh3l_13TeV_nvtx","VZ/#gamma*/#gamma","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_13TeV_nvtx","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_13TeV_nvtx","Data","EPL");
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
   entry=leg->AddEntry("new_histo_group_DY_wh3l_13TeV_nvtx","DY","F");

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
   entry=leg->AddEntry("new_histo_group_top_wh3l_13TeV_nvtx","tW and t#bart","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_13TeV_nvtx","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_13TeV_nvtx","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_VZ_wh3l_13TeV_nvtx","VZ/#gamma*/#gamma","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_13TeV_nvtx","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_13TeV_nvtx","Data","EPL");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   leg->Draw();
   
   TH1F *hframe_copy18 = new TH1F("hframe_copy18","",1000,0,40);
   hframe_copy18->SetMinimum(0);
   hframe_copy18->SetMaximum(168.5911);
   hframe_copy18->SetDirectory(0);
   hframe_copy18->SetStats(0);
   hframe_copy18->SetLineStyle(0);
   hframe_copy18->SetMarkerStyle(20);
   hframe_copy18->GetXaxis()->SetTitle("nvtx");
   hframe_copy18->GetXaxis()->SetNdivisions(506);
   hframe_copy18->GetXaxis()->SetLabelFont(42);
   hframe_copy18->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy18->GetXaxis()->SetLabelSize(0.05);
   hframe_copy18->GetXaxis()->SetTitleSize(0.06);
   hframe_copy18->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy18->GetXaxis()->SetTitleFont(42);
   hframe_copy18->GetYaxis()->SetTitle("Events");
   hframe_copy18->GetYaxis()->SetLabelFont(42);
   hframe_copy18->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy18->GetYaxis()->SetLabelSize(0.05);
   hframe_copy18->GetYaxis()->SetTitleSize(0.06);
   hframe_copy18->GetYaxis()->SetTitleOffset(1.25);
   hframe_copy18->GetYaxis()->SetTitleFont(42);
   hframe_copy18->GetZaxis()->SetLabelFont(42);
   hframe_copy18->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy18->GetZaxis()->SetLabelSize(0.05);
   hframe_copy18->GetZaxis()->SetTitleSize(0.06);
   hframe_copy18->GetZaxis()->SetTitleFont(42);
   hframe_copy18->Draw("sameaxis");
   ccwh3l_13TeV_nvtx->Modified();
   ccwh3l_13TeV_nvtx->cd();
   ccwh3l_13TeV_nvtx->SetSelected(ccwh3l_13TeV_nvtx);
}
