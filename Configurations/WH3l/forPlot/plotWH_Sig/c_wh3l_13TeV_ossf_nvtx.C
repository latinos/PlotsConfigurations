void c_wh3l_13TeV_ossf_nvtx()
{
//=========Macro generated from canvas: ccwh3l_13TeV_ossf_nvtx/cc
//=========  (Tue Jun 28 13:56:14 2016) by ROOT version6.02/13
   TCanvas *ccwh3l_13TeV_ossf_nvtx = new TCanvas("ccwh3l_13TeV_ossf_nvtx", "cc",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   ccwh3l_13TeV_ossf_nvtx->SetHighLightColor(2);
   ccwh3l_13TeV_ossf_nvtx->Range(-8,-1.394417,42,9.331868);
   ccwh3l_13TeV_ossf_nvtx->SetFillColor(0);
   ccwh3l_13TeV_ossf_nvtx->SetBorderMode(0);
   ccwh3l_13TeV_ossf_nvtx->SetBorderSize(2);
   ccwh3l_13TeV_ossf_nvtx->SetTickx(1);
   ccwh3l_13TeV_ossf_nvtx->SetTicky(1);
   ccwh3l_13TeV_ossf_nvtx->SetLeftMargin(0.16);
   ccwh3l_13TeV_ossf_nvtx->SetRightMargin(0.04);
   ccwh3l_13TeV_ossf_nvtx->SetTopMargin(0.05);
   ccwh3l_13TeV_ossf_nvtx->SetBottomMargin(0.13);
   ccwh3l_13TeV_ossf_nvtx->SetFrameFillStyle(0);
   ccwh3l_13TeV_ossf_nvtx->SetFrameBorderMode(0);
   ccwh3l_13TeV_ossf_nvtx->SetFrameFillStyle(0);
   ccwh3l_13TeV_ossf_nvtx->SetFrameBorderMode(0);
   
   TH1F *hframe21 = new TH1F("hframe21","",1000,0,40);
   hframe21->SetMinimum(0);
   hframe21->SetMaximum(8.795554);
   hframe21->SetDirectory(0);
   hframe21->SetStats(0);
   hframe21->SetLineStyle(0);
   hframe21->SetMarkerStyle(20);
   hframe21->GetXaxis()->SetTitle("nvtx");
   hframe21->GetXaxis()->SetNdivisions(506);
   hframe21->GetXaxis()->SetLabelFont(42);
   hframe21->GetXaxis()->SetLabelOffset(0.007);
   hframe21->GetXaxis()->SetLabelSize(0.05);
   hframe21->GetXaxis()->SetTitleSize(0.06);
   hframe21->GetXaxis()->SetTitleOffset(0.9);
   hframe21->GetXaxis()->SetTitleFont(42);
   hframe21->GetYaxis()->SetTitle("Events");
   hframe21->GetYaxis()->SetLabelFont(42);
   hframe21->GetYaxis()->SetLabelOffset(0.007);
   hframe21->GetYaxis()->SetLabelSize(0.05);
   hframe21->GetYaxis()->SetTitleSize(0.06);
   hframe21->GetYaxis()->SetTitleOffset(1.25);
   hframe21->GetYaxis()->SetTitleFont(42);
   hframe21->GetZaxis()->SetLabelFont(42);
   hframe21->GetZaxis()->SetLabelOffset(0.007);
   hframe21->GetZaxis()->SetLabelSize(0.05);
   hframe21->GetZaxis()->SetTitleSize(0.06);
   hframe21->GetZaxis()->SetTitleFont(42);
   hframe21->Draw(" ");
   
   THStack *thsBackground_grouped_wh3l_13TeV_ossf_nvtx = new THStack();
   thsBackground_grouped_wh3l_13TeV_ossf_nvtx->SetName("thsBackground_grouped_wh3l_13TeV_ossf_nvtx");
   thsBackground_grouped_wh3l_13TeV_ossf_nvtx->SetTitle("thsBackground_grouped_wh3l_13TeV_ossf_nvtx");
   
   TH1F *thsBackground_grouped_wh3l_13TeV_ossf_nvtx_stack_5 = new TH1F("thsBackground_grouped_wh3l_13TeV_ossf_nvtx_stack_5","thsBackground_grouped_wh3l_13TeV_ossf_nvtx",40,0,40);
   thsBackground_grouped_wh3l_13TeV_ossf_nvtx_stack_5->SetMinimum(-0.5354585);
   thsBackground_grouped_wh3l_13TeV_ossf_nvtx_stack_5->SetMaximum(3.694133);
   thsBackground_grouped_wh3l_13TeV_ossf_nvtx_stack_5->SetDirectory(0);
   thsBackground_grouped_wh3l_13TeV_ossf_nvtx_stack_5->SetStats(0);
   thsBackground_grouped_wh3l_13TeV_ossf_nvtx_stack_5->SetLineStyle(0);
   thsBackground_grouped_wh3l_13TeV_ossf_nvtx_stack_5->SetMarkerStyle(20);
   thsBackground_grouped_wh3l_13TeV_ossf_nvtx_stack_5->GetXaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_13TeV_ossf_nvtx_stack_5->GetXaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_13TeV_ossf_nvtx_stack_5->GetXaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_13TeV_ossf_nvtx_stack_5->GetXaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_13TeV_ossf_nvtx_stack_5->GetXaxis()->SetTitleOffset(0.9);
   thsBackground_grouped_wh3l_13TeV_ossf_nvtx_stack_5->GetXaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_ossf_nvtx_stack_5->GetYaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_13TeV_ossf_nvtx_stack_5->GetYaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_13TeV_ossf_nvtx_stack_5->GetYaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_13TeV_ossf_nvtx_stack_5->GetYaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_13TeV_ossf_nvtx_stack_5->GetYaxis()->SetTitleOffset(1.25);
   thsBackground_grouped_wh3l_13TeV_ossf_nvtx_stack_5->GetYaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_ossf_nvtx_stack_5->GetZaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_13TeV_ossf_nvtx_stack_5->GetZaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_13TeV_ossf_nvtx_stack_5->GetZaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_13TeV_ossf_nvtx_stack_5->GetZaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_13TeV_ossf_nvtx_stack_5->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_ossf_nvtx->SetHistogram(thsBackground_grouped_wh3l_13TeV_ossf_nvtx_stack_5);
   
   
   TH1D *new_histo_group_Fake_wh3l_13TeV_ossf_nvtx22 = new TH1D("new_histo_group_Fake_wh3l_13TeV_ossf_nvtx22","histo_Fake",40,0,40);
   new_histo_group_Fake_wh3l_13TeV_ossf_nvtx22->SetBinContent(4,-0.0005887331);
   new_histo_group_Fake_wh3l_13TeV_ossf_nvtx22->SetBinContent(5,-0.2879015);
   new_histo_group_Fake_wh3l_13TeV_ossf_nvtx22->SetBinContent(7,0.3848701);
   new_histo_group_Fake_wh3l_13TeV_ossf_nvtx22->SetBinContent(8,0.547613);
   new_histo_group_Fake_wh3l_13TeV_ossf_nvtx22->SetBinContent(9,0.5567433);
   new_histo_group_Fake_wh3l_13TeV_ossf_nvtx22->SetBinContent(10,-0.171863);
   new_histo_group_Fake_wh3l_13TeV_ossf_nvtx22->SetBinContent(11,2.140082);
   new_histo_group_Fake_wh3l_13TeV_ossf_nvtx22->SetBinContent(12,1.347948);
   new_histo_group_Fake_wh3l_13TeV_ossf_nvtx22->SetBinContent(13,0.43827);
   new_histo_group_Fake_wh3l_13TeV_ossf_nvtx22->SetBinContent(14,1.645566);
   new_histo_group_Fake_wh3l_13TeV_ossf_nvtx22->SetBinContent(15,0.006384889);
   new_histo_group_Fake_wh3l_13TeV_ossf_nvtx22->SetBinContent(16,-0.3242804);
   new_histo_group_Fake_wh3l_13TeV_ossf_nvtx22->SetBinContent(17,0.1358484);
   new_histo_group_Fake_wh3l_13TeV_ossf_nvtx22->SetBinContent(18,0.3001484);
   new_histo_group_Fake_wh3l_13TeV_ossf_nvtx22->SetBinError(4,0.0005887331);
   new_histo_group_Fake_wh3l_13TeV_ossf_nvtx22->SetBinError(5,0.2348342);
   new_histo_group_Fake_wh3l_13TeV_ossf_nvtx22->SetBinError(7,0.5391525);
   new_histo_group_Fake_wh3l_13TeV_ossf_nvtx22->SetBinError(8,0.5492167);
   new_histo_group_Fake_wh3l_13TeV_ossf_nvtx22->SetBinError(9,0.7477362);
   new_histo_group_Fake_wh3l_13TeV_ossf_nvtx22->SetBinError(10,0.2768728);
   new_histo_group_Fake_wh3l_13TeV_ossf_nvtx22->SetBinError(11,1.10975);
   new_histo_group_Fake_wh3l_13TeV_ossf_nvtx22->SetBinError(12,1.050614);
   new_histo_group_Fake_wh3l_13TeV_ossf_nvtx22->SetBinError(13,0.2510981);
   new_histo_group_Fake_wh3l_13TeV_ossf_nvtx22->SetBinError(14,0.9847688);
   new_histo_group_Fake_wh3l_13TeV_ossf_nvtx22->SetBinError(15,0.1839286);
   new_histo_group_Fake_wh3l_13TeV_ossf_nvtx22->SetBinError(16,0.211178);
   new_histo_group_Fake_wh3l_13TeV_ossf_nvtx22->SetBinError(17,0.1102774);
   new_histo_group_Fake_wh3l_13TeV_ossf_nvtx22->SetBinError(18,0.3099838);
   new_histo_group_Fake_wh3l_13TeV_ossf_nvtx22->SetEntries(81);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_13TeV_ossf_nvtx22->SetFillColor(ci);
   new_histo_group_Fake_wh3l_13TeV_ossf_nvtx22->SetFillStyle(3001);

   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_13TeV_ossf_nvtx22->SetLineColor(ci);
   new_histo_group_Fake_wh3l_13TeV_ossf_nvtx22->GetXaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_13TeV_ossf_nvtx22->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_13TeV_ossf_nvtx22->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_13TeV_ossf_nvtx22->GetXaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_13TeV_ossf_nvtx22->GetYaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_13TeV_ossf_nvtx22->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_13TeV_ossf_nvtx22->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_13TeV_ossf_nvtx22->GetYaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_13TeV_ossf_nvtx22->GetZaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_13TeV_ossf_nvtx22->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_13TeV_ossf_nvtx22->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_13TeV_ossf_nvtx22->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_ossf_nvtx->Add(new_histo_group_Fake_wh3l_13TeV_ossf_nvtx,"");
   
   TH1D *new_histo_group_WW_wh3l_13TeV_ossf_nvtx23 = new TH1D("new_histo_group_WW_wh3l_13TeV_ossf_nvtx23","histo_WW",40,0,40);
   new_histo_group_WW_wh3l_13TeV_ossf_nvtx23->SetBinContent(6,0.01530373);
   new_histo_group_WW_wh3l_13TeV_ossf_nvtx23->SetBinContent(8,0.01814939);
   new_histo_group_WW_wh3l_13TeV_ossf_nvtx23->SetBinContent(9,0.01447441);
   new_histo_group_WW_wh3l_13TeV_ossf_nvtx23->SetBinContent(10,0.0142084);
   new_histo_group_WW_wh3l_13TeV_ossf_nvtx23->SetBinContent(16,0.01044191);
   new_histo_group_WW_wh3l_13TeV_ossf_nvtx23->SetBinError(6,0.01530373);
   new_histo_group_WW_wh3l_13TeV_ossf_nvtx23->SetBinError(8,0.01814939);
   new_histo_group_WW_wh3l_13TeV_ossf_nvtx23->SetBinError(9,0.01447441);
   new_histo_group_WW_wh3l_13TeV_ossf_nvtx23->SetBinError(10,0.0142084);
   new_histo_group_WW_wh3l_13TeV_ossf_nvtx23->SetBinError(16,0.01044191);
   new_histo_group_WW_wh3l_13TeV_ossf_nvtx23->SetEntries(5);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_13TeV_ossf_nvtx23->SetFillColor(ci);
   new_histo_group_WW_wh3l_13TeV_ossf_nvtx23->SetFillStyle(3001);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_13TeV_ossf_nvtx23->SetLineColor(ci);
   new_histo_group_WW_wh3l_13TeV_ossf_nvtx23->GetXaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_13TeV_ossf_nvtx23->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_13TeV_ossf_nvtx23->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_13TeV_ossf_nvtx23->GetXaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_13TeV_ossf_nvtx23->GetYaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_13TeV_ossf_nvtx23->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_13TeV_ossf_nvtx23->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_13TeV_ossf_nvtx23->GetYaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_13TeV_ossf_nvtx23->GetZaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_13TeV_ossf_nvtx23->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_13TeV_ossf_nvtx23->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_13TeV_ossf_nvtx23->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_ossf_nvtx->Add(new_histo_group_WW_wh3l_13TeV_ossf_nvtx,"");
   
   TH1D *new_histo_group_VVV_wh3l_13TeV_ossf_nvtx24 = new TH1D("new_histo_group_VVV_wh3l_13TeV_ossf_nvtx24","histo_VVV",40,0,40);
   new_histo_group_VVV_wh3l_13TeV_ossf_nvtx24->SetBinContent(6,0.0006878311);
   new_histo_group_VVV_wh3l_13TeV_ossf_nvtx24->SetBinContent(8,0.001297839);
   new_histo_group_VVV_wh3l_13TeV_ossf_nvtx24->SetBinContent(9,0.001470758);
   new_histo_group_VVV_wh3l_13TeV_ossf_nvtx24->SetBinContent(14,0.001268165);
   new_histo_group_VVV_wh3l_13TeV_ossf_nvtx24->SetBinContent(15,0.0006883418);
   new_histo_group_VVV_wh3l_13TeV_ossf_nvtx24->SetBinContent(16,0.0009245663);
   new_histo_group_VVV_wh3l_13TeV_ossf_nvtx24->SetBinContent(18,0.000653768);
   new_histo_group_VVV_wh3l_13TeV_ossf_nvtx24->SetBinError(6,0.0006878311);
   new_histo_group_VVV_wh3l_13TeV_ossf_nvtx24->SetBinError(8,0.0009183377);
   new_histo_group_VVV_wh3l_13TeV_ossf_nvtx24->SetBinError(9,0.0009173828);
   new_histo_group_VVV_wh3l_13TeV_ossf_nvtx24->SetBinError(14,0.0008967749);
   new_histo_group_VVV_wh3l_13TeV_ossf_nvtx24->SetBinError(15,0.0006883418);
   new_histo_group_VVV_wh3l_13TeV_ossf_nvtx24->SetBinError(16,0.0006975699);
   new_histo_group_VVV_wh3l_13TeV_ossf_nvtx24->SetBinError(18,0.000653768);
   new_histo_group_VVV_wh3l_13TeV_ossf_nvtx24->SetEntries(12);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_13TeV_ossf_nvtx24->SetFillColor(ci);
   new_histo_group_VVV_wh3l_13TeV_ossf_nvtx24->SetFillStyle(3001);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_13TeV_ossf_nvtx24->SetLineColor(ci);
   new_histo_group_VVV_wh3l_13TeV_ossf_nvtx24->GetXaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_13TeV_ossf_nvtx24->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_13TeV_ossf_nvtx24->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_13TeV_ossf_nvtx24->GetXaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_13TeV_ossf_nvtx24->GetYaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_13TeV_ossf_nvtx24->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_13TeV_ossf_nvtx24->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_13TeV_ossf_nvtx24->GetYaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_13TeV_ossf_nvtx24->GetZaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_13TeV_ossf_nvtx24->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_13TeV_ossf_nvtx24->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_13TeV_ossf_nvtx24->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_ossf_nvtx->Add(new_histo_group_VVV_wh3l_13TeV_ossf_nvtx,"");
   
   TH1D *new_histo_group_Vg_wh3l_13TeV_ossf_nvtx25 = new TH1D("new_histo_group_Vg_wh3l_13TeV_ossf_nvtx25","histo_Vg",40,0,40);
   new_histo_group_Vg_wh3l_13TeV_ossf_nvtx25->SetBinContent(6,0.2283563);
   new_histo_group_Vg_wh3l_13TeV_ossf_nvtx25->SetBinContent(7,0.1103645);
   new_histo_group_Vg_wh3l_13TeV_ossf_nvtx25->SetBinContent(8,0.1257014);
   new_histo_group_Vg_wh3l_13TeV_ossf_nvtx25->SetBinContent(9,0.2926692);
   new_histo_group_Vg_wh3l_13TeV_ossf_nvtx25->SetBinContent(10,-0.1230777);
   new_histo_group_Vg_wh3l_13TeV_ossf_nvtx25->SetBinContent(11,0.3259333);
   new_histo_group_Vg_wh3l_13TeV_ossf_nvtx25->SetBinContent(12,0.2262168);
   new_histo_group_Vg_wh3l_13TeV_ossf_nvtx25->SetBinContent(13,0.3314658);
   new_histo_group_Vg_wh3l_13TeV_ossf_nvtx25->SetBinContent(14,0.06007751);
   new_histo_group_Vg_wh3l_13TeV_ossf_nvtx25->SetBinContent(15,0.2412312);
   new_histo_group_Vg_wh3l_13TeV_ossf_nvtx25->SetBinContent(16,0.2870735);
   new_histo_group_Vg_wh3l_13TeV_ossf_nvtx25->SetBinContent(17,0.1416296);
   new_histo_group_Vg_wh3l_13TeV_ossf_nvtx25->SetBinContent(18,0.2748712);
   new_histo_group_Vg_wh3l_13TeV_ossf_nvtx25->SetBinContent(20,0.0510846);
   new_histo_group_Vg_wh3l_13TeV_ossf_nvtx25->SetBinContent(21,0.07443925);
   new_histo_group_Vg_wh3l_13TeV_ossf_nvtx25->SetBinContent(23,0.0001300264);
   new_histo_group_Vg_wh3l_13TeV_ossf_nvtx25->SetBinContent(26,2.545572e-06);
   new_histo_group_Vg_wh3l_13TeV_ossf_nvtx25->SetBinError(6,0.1614924);
   new_histo_group_Vg_wh3l_13TeV_ossf_nvtx25->SetBinError(7,0.1103645);
   new_histo_group_Vg_wh3l_13TeV_ossf_nvtx25->SetBinError(8,0.1257014);
   new_histo_group_Vg_wh3l_13TeV_ossf_nvtx25->SetBinError(9,0.1731455);
   new_histo_group_Vg_wh3l_13TeV_ossf_nvtx25->SetBinError(10,0.1230777);
   new_histo_group_Vg_wh3l_13TeV_ossf_nvtx25->SetBinError(11,0.1894885);
   new_histo_group_Vg_wh3l_13TeV_ossf_nvtx25->SetBinError(12,0.159977);
   new_histo_group_Vg_wh3l_13TeV_ossf_nvtx25->SetBinError(13,0.2178615);
   new_histo_group_Vg_wh3l_13TeV_ossf_nvtx25->SetBinError(14,0.1593412);
   new_histo_group_Vg_wh3l_13TeV_ossf_nvtx25->SetBinError(15,0.1495982);
   new_histo_group_Vg_wh3l_13TeV_ossf_nvtx25->SetBinError(16,0.167759);
   new_histo_group_Vg_wh3l_13TeV_ossf_nvtx25->SetBinError(17,0.1157495);
   new_histo_group_Vg_wh3l_13TeV_ossf_nvtx25->SetBinError(18,0.1477147);
   new_histo_group_Vg_wh3l_13TeV_ossf_nvtx25->SetBinError(20,0.0510846);
   new_histo_group_Vg_wh3l_13TeV_ossf_nvtx25->SetBinError(21,0.05537531);
   new_histo_group_Vg_wh3l_13TeV_ossf_nvtx25->SetBinError(23,0.0001300264);
   new_histo_group_Vg_wh3l_13TeV_ossf_nvtx25->SetBinError(26,2.545572e-06);
   new_histo_group_Vg_wh3l_13TeV_ossf_nvtx25->SetEntries(42);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_13TeV_ossf_nvtx25->SetFillColor(ci);
   new_histo_group_Vg_wh3l_13TeV_ossf_nvtx25->SetFillStyle(3001);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_13TeV_ossf_nvtx25->SetLineColor(ci);
   new_histo_group_Vg_wh3l_13TeV_ossf_nvtx25->GetXaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_13TeV_ossf_nvtx25->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_13TeV_ossf_nvtx25->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_13TeV_ossf_nvtx25->GetXaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_13TeV_ossf_nvtx25->GetYaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_13TeV_ossf_nvtx25->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_13TeV_ossf_nvtx25->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_13TeV_ossf_nvtx25->GetYaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_13TeV_ossf_nvtx25->GetZaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_13TeV_ossf_nvtx25->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_13TeV_ossf_nvtx25->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_13TeV_ossf_nvtx25->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_ossf_nvtx->Add(new_histo_group_Vg_wh3l_13TeV_ossf_nvtx,"");
   
   TH1D *new_histo_group_ZZ_wh3l_13TeV_ossf_nvtx26 = new TH1D("new_histo_group_ZZ_wh3l_13TeV_ossf_nvtx26","histo_ZZ",40,0,40);
   new_histo_group_ZZ_wh3l_13TeV_ossf_nvtx26->SetBinContent(7,0.04332869);
   new_histo_group_ZZ_wh3l_13TeV_ossf_nvtx26->SetBinContent(8,0.08704091);
   new_histo_group_ZZ_wh3l_13TeV_ossf_nvtx26->SetBinContent(9,0.0738407);
   new_histo_group_ZZ_wh3l_13TeV_ossf_nvtx26->SetBinContent(11,0.0793975);
   new_histo_group_ZZ_wh3l_13TeV_ossf_nvtx26->SetBinContent(12,0.09480382);
   new_histo_group_ZZ_wh3l_13TeV_ossf_nvtx26->SetBinContent(13,0.08039751);
   new_histo_group_ZZ_wh3l_13TeV_ossf_nvtx26->SetBinContent(14,0.05352081);
   new_histo_group_ZZ_wh3l_13TeV_ossf_nvtx26->SetBinContent(17,0.03554041);
   new_histo_group_ZZ_wh3l_13TeV_ossf_nvtx26->SetBinContent(18,1.493259e-08);
   new_histo_group_ZZ_wh3l_13TeV_ossf_nvtx26->SetBinContent(21,0.02088597);
   new_histo_group_ZZ_wh3l_13TeV_ossf_nvtx26->SetBinError(7,0.04332869);
   new_histo_group_ZZ_wh3l_13TeV_ossf_nvtx26->SetBinError(8,0.06158793);
   new_histo_group_ZZ_wh3l_13TeV_ossf_nvtx26->SetBinError(9,0.05353437);
   new_histo_group_ZZ_wh3l_13TeV_ossf_nvtx26->SetBinError(11,0.05830988);
   new_histo_group_ZZ_wh3l_13TeV_ossf_nvtx26->SetBinError(12,0.06077025);
   new_histo_group_ZZ_wh3l_13TeV_ossf_nvtx26->SetBinError(13,0.056861);
   new_histo_group_ZZ_wh3l_13TeV_ossf_nvtx26->SetBinError(14,0.03784829);
   new_histo_group_ZZ_wh3l_13TeV_ossf_nvtx26->SetBinError(17,0.03554041);
   new_histo_group_ZZ_wh3l_13TeV_ossf_nvtx26->SetBinError(18,1.493259e-08);
   new_histo_group_ZZ_wh3l_13TeV_ossf_nvtx26->SetBinError(21,0.02088597);
   new_histo_group_ZZ_wh3l_13TeV_ossf_nvtx26->SetEntries(17);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_13TeV_ossf_nvtx26->SetFillColor(ci);
   new_histo_group_ZZ_wh3l_13TeV_ossf_nvtx26->SetFillStyle(3001);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_13TeV_ossf_nvtx26->SetLineColor(ci);
   new_histo_group_ZZ_wh3l_13TeV_ossf_nvtx26->GetXaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_13TeV_ossf_nvtx26->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_13TeV_ossf_nvtx26->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_13TeV_ossf_nvtx26->GetXaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_13TeV_ossf_nvtx26->GetYaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_13TeV_ossf_nvtx26->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_13TeV_ossf_nvtx26->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_13TeV_ossf_nvtx26->GetYaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_13TeV_ossf_nvtx26->GetZaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_13TeV_ossf_nvtx26->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_13TeV_ossf_nvtx26->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_13TeV_ossf_nvtx26->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_ossf_nvtx->Add(new_histo_group_ZZ_wh3l_13TeV_ossf_nvtx,"");
   
   TH1D *new_histo_group_WZ_wh3l_13TeV_ossf_nvtx27 = new TH1D("new_histo_group_WZ_wh3l_13TeV_ossf_nvtx27","histo_WZ",40,0,40);
   new_histo_group_WZ_wh3l_13TeV_ossf_nvtx27->SetBinContent(3,0.02384408);
   new_histo_group_WZ_wh3l_13TeV_ossf_nvtx27->SetBinContent(4,0.0825607);
   new_histo_group_WZ_wh3l_13TeV_ossf_nvtx27->SetBinContent(5,0.1454842);
   new_histo_group_WZ_wh3l_13TeV_ossf_nvtx27->SetBinContent(6,0.3852238);
   new_histo_group_WZ_wh3l_13TeV_ossf_nvtx27->SetBinContent(7,0.4290308);
   new_histo_group_WZ_wh3l_13TeV_ossf_nvtx27->SetBinContent(8,0.8990652);
   new_histo_group_WZ_wh3l_13TeV_ossf_nvtx27->SetBinContent(9,0.6776221);
   new_histo_group_WZ_wh3l_13TeV_ossf_nvtx27->SetBinContent(10,0.7545567);
   new_histo_group_WZ_wh3l_13TeV_ossf_nvtx27->SetBinContent(11,0.9120113);
   new_histo_group_WZ_wh3l_13TeV_ossf_nvtx27->SetBinContent(12,0.7113803);
   new_histo_group_WZ_wh3l_13TeV_ossf_nvtx27->SetBinContent(13,0.6645556);
   new_histo_group_WZ_wh3l_13TeV_ossf_nvtx27->SetBinContent(14,0.446339);
   new_histo_group_WZ_wh3l_13TeV_ossf_nvtx27->SetBinContent(15,0.279474);
   new_histo_group_WZ_wh3l_13TeV_ossf_nvtx27->SetBinContent(16,0.2168567);
   new_histo_group_WZ_wh3l_13TeV_ossf_nvtx27->SetBinContent(17,0.1424778);
   new_histo_group_WZ_wh3l_13TeV_ossf_nvtx27->SetBinContent(18,0.06302188);
   new_histo_group_WZ_wh3l_13TeV_ossf_nvtx27->SetBinContent(19,0.02242902);
   new_histo_group_WZ_wh3l_13TeV_ossf_nvtx27->SetBinContent(20,0.02863149);
   new_histo_group_WZ_wh3l_13TeV_ossf_nvtx27->SetBinContent(21,0.01172771);
   new_histo_group_WZ_wh3l_13TeV_ossf_nvtx27->SetBinContent(22,0.01341719);
   new_histo_group_WZ_wh3l_13TeV_ossf_nvtx27->SetBinContent(23,0.007272136);
   new_histo_group_WZ_wh3l_13TeV_ossf_nvtx27->SetBinContent(24,1.521721e-06);
   new_histo_group_WZ_wh3l_13TeV_ossf_nvtx27->SetBinContent(25,0.003047687);
   new_histo_group_WZ_wh3l_13TeV_ossf_nvtx27->SetBinContent(26,0.000347147);
   new_histo_group_WZ_wh3l_13TeV_ossf_nvtx27->SetBinError(3,0.0140418);
   new_histo_group_WZ_wh3l_13TeV_ossf_nvtx27->SetBinError(4,0.02316076);
   new_histo_group_WZ_wh3l_13TeV_ossf_nvtx27->SetBinError(5,0.02947974);
   new_histo_group_WZ_wh3l_13TeV_ossf_nvtx27->SetBinError(6,0.04822751);
   new_histo_group_WZ_wh3l_13TeV_ossf_nvtx27->SetBinError(7,0.0496463);
   new_histo_group_WZ_wh3l_13TeV_ossf_nvtx27->SetBinError(8,0.07301688);
   new_histo_group_WZ_wh3l_13TeV_ossf_nvtx27->SetBinError(9,0.06167013);
   new_histo_group_WZ_wh3l_13TeV_ossf_nvtx27->SetBinError(10,0.06494046);
   new_histo_group_WZ_wh3l_13TeV_ossf_nvtx27->SetBinError(11,0.07046922);
   new_histo_group_WZ_wh3l_13TeV_ossf_nvtx27->SetBinError(12,0.06102155);
   new_histo_group_WZ_wh3l_13TeV_ossf_nvtx27->SetBinError(13,0.05854183);
   new_histo_group_WZ_wh3l_13TeV_ossf_nvtx27->SetBinError(14,0.04715623);
   new_histo_group_WZ_wh3l_13TeV_ossf_nvtx27->SetBinError(15,0.0366884);
   new_histo_group_WZ_wh3l_13TeV_ossf_nvtx27->SetBinError(16,0.0320059);
   new_histo_group_WZ_wh3l_13TeV_ossf_nvtx27->SetBinError(17,0.02547111);
   new_histo_group_WZ_wh3l_13TeV_ossf_nvtx27->SetBinError(18,0.01545597);
   new_histo_group_WZ_wh3l_13TeV_ossf_nvtx27->SetBinError(19,0.008024686);
   new_histo_group_WZ_wh3l_13TeV_ossf_nvtx27->SetBinError(20,0.01014482);
   new_histo_group_WZ_wh3l_13TeV_ossf_nvtx27->SetBinError(21,0.00661452);
   new_histo_group_WZ_wh3l_13TeV_ossf_nvtx27->SetBinError(22,0.005996686);
   new_histo_group_WZ_wh3l_13TeV_ossf_nvtx27->SetBinError(23,0.005157251);
   new_histo_group_WZ_wh3l_13TeV_ossf_nvtx27->SetBinError(24,1.521721e-06);
   new_histo_group_WZ_wh3l_13TeV_ossf_nvtx27->SetBinError(25,0.002248892);
   new_histo_group_WZ_wh3l_13TeV_ossf_nvtx27->SetBinError(26,0.0003201634);
   new_histo_group_WZ_wh3l_13TeV_ossf_nvtx27->SetEntries(1419);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_13TeV_ossf_nvtx27->SetFillColor(ci);
   new_histo_group_WZ_wh3l_13TeV_ossf_nvtx27->SetFillStyle(3001);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_13TeV_ossf_nvtx27->SetLineColor(ci);
   new_histo_group_WZ_wh3l_13TeV_ossf_nvtx27->GetXaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_13TeV_ossf_nvtx27->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_13TeV_ossf_nvtx27->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_13TeV_ossf_nvtx27->GetXaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_13TeV_ossf_nvtx27->GetYaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_13TeV_ossf_nvtx27->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_13TeV_ossf_nvtx27->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_13TeV_ossf_nvtx27->GetYaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_13TeV_ossf_nvtx27->GetZaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_13TeV_ossf_nvtx27->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_13TeV_ossf_nvtx27->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_13TeV_ossf_nvtx27->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_ossf_nvtx->Add(new_histo_group_WZ_wh3l_13TeV_ossf_nvtx,"");
   
   TH1D *new_histo_group_Higgs_wh3l_13TeV_ossf_nvtx28 = new TH1D("new_histo_group_Higgs_wh3l_13TeV_ossf_nvtx28","histo_H_htt",40,0,40);
   new_histo_group_Higgs_wh3l_13TeV_ossf_nvtx28->SetBinContent(3,0.0002886772);
   new_histo_group_Higgs_wh3l_13TeV_ossf_nvtx28->SetBinContent(4,0.01141837);
   new_histo_group_Higgs_wh3l_13TeV_ossf_nvtx28->SetBinContent(5,0.01321902);
   new_histo_group_Higgs_wh3l_13TeV_ossf_nvtx28->SetBinContent(6,0.03206474);
   new_histo_group_Higgs_wh3l_13TeV_ossf_nvtx28->SetBinContent(7,0.06139746);
   new_histo_group_Higgs_wh3l_13TeV_ossf_nvtx28->SetBinContent(8,0.05065806);
   new_histo_group_Higgs_wh3l_13TeV_ossf_nvtx28->SetBinContent(9,0.06751898);
   new_histo_group_Higgs_wh3l_13TeV_ossf_nvtx28->SetBinContent(10,0.07344209);
   new_histo_group_Higgs_wh3l_13TeV_ossf_nvtx28->SetBinContent(11,0.06079722);
   new_histo_group_Higgs_wh3l_13TeV_ossf_nvtx28->SetBinContent(12,0.06039876);
   new_histo_group_Higgs_wh3l_13TeV_ossf_nvtx28->SetBinContent(13,0.05662255);
   new_histo_group_Higgs_wh3l_13TeV_ossf_nvtx28->SetBinContent(14,0.04347234);
   new_histo_group_Higgs_wh3l_13TeV_ossf_nvtx28->SetBinContent(15,0.01859149);
   new_histo_group_Higgs_wh3l_13TeV_ossf_nvtx28->SetBinContent(16,0.01486223);
   new_histo_group_Higgs_wh3l_13TeV_ossf_nvtx28->SetBinContent(17,0.01519423);
   new_histo_group_Higgs_wh3l_13TeV_ossf_nvtx28->SetBinContent(18,0.009896193);
   new_histo_group_Higgs_wh3l_13TeV_ossf_nvtx28->SetBinContent(19,0.00168225);
   new_histo_group_Higgs_wh3l_13TeV_ossf_nvtx28->SetBinContent(20,0.00327857);
   new_histo_group_Higgs_wh3l_13TeV_ossf_nvtx28->SetBinContent(21,0.002087682);
   new_histo_group_Higgs_wh3l_13TeV_ossf_nvtx28->SetBinContent(22,0.0001933485);
   new_histo_group_Higgs_wh3l_13TeV_ossf_nvtx28->SetBinContent(23,0.0001149743);
   new_histo_group_Higgs_wh3l_13TeV_ossf_nvtx28->SetBinContent(25,-5.359337e-07);
   new_histo_group_Higgs_wh3l_13TeV_ossf_nvtx28->SetBinContent(27,1.885581e-09);
   new_histo_group_Higgs_wh3l_13TeV_ossf_nvtx28->SetBinContent(28,3.879855e-08);
   new_histo_group_Higgs_wh3l_13TeV_ossf_nvtx28->SetBinContent(29,1.622954e-06);
   new_histo_group_Higgs_wh3l_13TeV_ossf_nvtx28->SetBinContent(30,7.388786e-13);
   new_histo_group_Higgs_wh3l_13TeV_ossf_nvtx28->SetBinContent(34,2.647707e-11);
   new_histo_group_Higgs_wh3l_13TeV_ossf_nvtx28->SetBinError(3,0.0002886772);
   new_histo_group_Higgs_wh3l_13TeV_ossf_nvtx28->SetBinError(4,0.00428925);
   new_histo_group_Higgs_wh3l_13TeV_ossf_nvtx28->SetBinError(5,0.003913955);
   new_histo_group_Higgs_wh3l_13TeV_ossf_nvtx28->SetBinError(6,0.006563857);
   new_histo_group_Higgs_wh3l_13TeV_ossf_nvtx28->SetBinError(7,0.009453146);
   new_histo_group_Higgs_wh3l_13TeV_ossf_nvtx28->SetBinError(8,0.007544584);
   new_histo_group_Higgs_wh3l_13TeV_ossf_nvtx28->SetBinError(9,0.008920219);
   new_histo_group_Higgs_wh3l_13TeV_ossf_nvtx28->SetBinError(10,0.009661851);
   new_histo_group_Higgs_wh3l_13TeV_ossf_nvtx28->SetBinError(11,0.008339398);
   new_histo_group_Higgs_wh3l_13TeV_ossf_nvtx28->SetBinError(12,0.008275725);
   new_histo_group_Higgs_wh3l_13TeV_ossf_nvtx28->SetBinError(13,0.008159981);
   new_histo_group_Higgs_wh3l_13TeV_ossf_nvtx28->SetBinError(14,0.006708986);
   new_histo_group_Higgs_wh3l_13TeV_ossf_nvtx28->SetBinError(15,0.004602885);
   new_histo_group_Higgs_wh3l_13TeV_ossf_nvtx28->SetBinError(16,0.003957093);
   new_histo_group_Higgs_wh3l_13TeV_ossf_nvtx28->SetBinError(17,0.004050322);
   new_histo_group_Higgs_wh3l_13TeV_ossf_nvtx28->SetBinError(18,0.003222374);
   new_histo_group_Higgs_wh3l_13TeV_ossf_nvtx28->SetBinError(19,0.0008257527);
   new_histo_group_Higgs_wh3l_13TeV_ossf_nvtx28->SetBinError(20,0.001640981);
   new_histo_group_Higgs_wh3l_13TeV_ossf_nvtx28->SetBinError(21,0.001476899);
   new_histo_group_Higgs_wh3l_13TeV_ossf_nvtx28->SetBinError(22,0.0001761557);
   new_histo_group_Higgs_wh3l_13TeV_ossf_nvtx28->SetBinError(23,0.0001149743);
   new_histo_group_Higgs_wh3l_13TeV_ossf_nvtx28->SetBinError(25,5.359337e-07);
   new_histo_group_Higgs_wh3l_13TeV_ossf_nvtx28->SetBinError(27,1.885581e-09);
   new_histo_group_Higgs_wh3l_13TeV_ossf_nvtx28->SetBinError(28,3.876616e-08);
   new_histo_group_Higgs_wh3l_13TeV_ossf_nvtx28->SetBinError(29,1.622954e-06);
   new_histo_group_Higgs_wh3l_13TeV_ossf_nvtx28->SetBinError(30,7.388786e-13);
   new_histo_group_Higgs_wh3l_13TeV_ossf_nvtx28->SetBinError(34,2.647707e-11);
   new_histo_group_Higgs_wh3l_13TeV_ossf_nvtx28->SetEntries(946);
   new_histo_group_Higgs_wh3l_13TeV_ossf_nvtx28->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_13TeV_ossf_nvtx28->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_13TeV_ossf_nvtx28->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_13TeV_ossf_nvtx28->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_13TeV_ossf_nvtx28->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_ossf_nvtx28->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_ossf_nvtx28->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_13TeV_ossf_nvtx28->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_13TeV_ossf_nvtx28->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_ossf_nvtx28->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_ossf_nvtx28->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_13TeV_ossf_nvtx28->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_13TeV_ossf_nvtx28->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_ossf_nvtx28->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_ossf_nvtx28->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_ossf_nvtx->Add(new_histo_group_Higgs_wh3l_13TeV_ossf_nvtx,"");
   thsBackground_grouped_wh3l_13TeV_ossf_nvtx->Draw("hist same");
   
   thsSignal_grouped_wh3l_13TeV_ossf_nvtx = new THStack();
   thsSignal_grouped_wh3l_13TeV_ossf_nvtx->SetName("thsSignal_grouped_wh3l_13TeV_ossf_nvtx");
   thsSignal_grouped_wh3l_13TeV_ossf_nvtx->SetTitle("thsSignal_grouped_wh3l_13TeV_ossf_nvtx");
   
   TH1F *thsSignal_grouped_wh3l_13TeV_ossf_nvtx_stack_6 = new TH1F("thsSignal_grouped_wh3l_13TeV_ossf_nvtx_stack_6","thsSignal_grouped_wh3l_13TeV_ossf_nvtx",40,0,40);
   thsSignal_grouped_wh3l_13TeV_ossf_nvtx_stack_6->SetMinimum(-1.071867e-06);
   thsSignal_grouped_wh3l_13TeV_ossf_nvtx_stack_6->SetMaximum(0.08725914);
   thsSignal_grouped_wh3l_13TeV_ossf_nvtx_stack_6->SetDirectory(0);
   thsSignal_grouped_wh3l_13TeV_ossf_nvtx_stack_6->SetStats(0);
   thsSignal_grouped_wh3l_13TeV_ossf_nvtx_stack_6->SetLineStyle(0);
   thsSignal_grouped_wh3l_13TeV_ossf_nvtx_stack_6->SetMarkerStyle(20);
   thsSignal_grouped_wh3l_13TeV_ossf_nvtx_stack_6->GetXaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_13TeV_ossf_nvtx_stack_6->GetXaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_13TeV_ossf_nvtx_stack_6->GetXaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_13TeV_ossf_nvtx_stack_6->GetXaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_13TeV_ossf_nvtx_stack_6->GetXaxis()->SetTitleOffset(0.9);
   thsSignal_grouped_wh3l_13TeV_ossf_nvtx_stack_6->GetXaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_13TeV_ossf_nvtx_stack_6->GetYaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_13TeV_ossf_nvtx_stack_6->GetYaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_13TeV_ossf_nvtx_stack_6->GetYaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_13TeV_ossf_nvtx_stack_6->GetYaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_13TeV_ossf_nvtx_stack_6->GetYaxis()->SetTitleOffset(1.25);
   thsSignal_grouped_wh3l_13TeV_ossf_nvtx_stack_6->GetYaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_13TeV_ossf_nvtx_stack_6->GetZaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_13TeV_ossf_nvtx_stack_6->GetZaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_13TeV_ossf_nvtx_stack_6->GetZaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_13TeV_ossf_nvtx_stack_6->GetZaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_13TeV_ossf_nvtx_stack_6->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_13TeV_ossf_nvtx->SetHistogram(thsSignal_grouped_wh3l_13TeV_ossf_nvtx_stack_6);
   
   
   TH1D *new_histo_group_Higgs_wh3l_13TeV_ossf_nvtx29 = new TH1D("new_histo_group_Higgs_wh3l_13TeV_ossf_nvtx29","histo_H_htt",40,0,40);
   new_histo_group_Higgs_wh3l_13TeV_ossf_nvtx29->SetBinContent(3,0.0002886772);
   new_histo_group_Higgs_wh3l_13TeV_ossf_nvtx29->SetBinContent(4,0.01141837);
   new_histo_group_Higgs_wh3l_13TeV_ossf_nvtx29->SetBinContent(5,0.01321902);
   new_histo_group_Higgs_wh3l_13TeV_ossf_nvtx29->SetBinContent(6,0.03206474);
   new_histo_group_Higgs_wh3l_13TeV_ossf_nvtx29->SetBinContent(7,0.06139746);
   new_histo_group_Higgs_wh3l_13TeV_ossf_nvtx29->SetBinContent(8,0.05065806);
   new_histo_group_Higgs_wh3l_13TeV_ossf_nvtx29->SetBinContent(9,0.06751898);
   new_histo_group_Higgs_wh3l_13TeV_ossf_nvtx29->SetBinContent(10,0.07344209);
   new_histo_group_Higgs_wh3l_13TeV_ossf_nvtx29->SetBinContent(11,0.06079722);
   new_histo_group_Higgs_wh3l_13TeV_ossf_nvtx29->SetBinContent(12,0.06039876);
   new_histo_group_Higgs_wh3l_13TeV_ossf_nvtx29->SetBinContent(13,0.05662255);
   new_histo_group_Higgs_wh3l_13TeV_ossf_nvtx29->SetBinContent(14,0.04347234);
   new_histo_group_Higgs_wh3l_13TeV_ossf_nvtx29->SetBinContent(15,0.01859149);
   new_histo_group_Higgs_wh3l_13TeV_ossf_nvtx29->SetBinContent(16,0.01486223);
   new_histo_group_Higgs_wh3l_13TeV_ossf_nvtx29->SetBinContent(17,0.01519423);
   new_histo_group_Higgs_wh3l_13TeV_ossf_nvtx29->SetBinContent(18,0.009896193);
   new_histo_group_Higgs_wh3l_13TeV_ossf_nvtx29->SetBinContent(19,0.00168225);
   new_histo_group_Higgs_wh3l_13TeV_ossf_nvtx29->SetBinContent(20,0.00327857);
   new_histo_group_Higgs_wh3l_13TeV_ossf_nvtx29->SetBinContent(21,0.002087682);
   new_histo_group_Higgs_wh3l_13TeV_ossf_nvtx29->SetBinContent(22,0.0001933485);
   new_histo_group_Higgs_wh3l_13TeV_ossf_nvtx29->SetBinContent(23,0.0001149743);
   new_histo_group_Higgs_wh3l_13TeV_ossf_nvtx29->SetBinContent(25,-5.359337e-07);
   new_histo_group_Higgs_wh3l_13TeV_ossf_nvtx29->SetBinContent(27,1.885581e-09);
   new_histo_group_Higgs_wh3l_13TeV_ossf_nvtx29->SetBinContent(28,3.879855e-08);
   new_histo_group_Higgs_wh3l_13TeV_ossf_nvtx29->SetBinContent(29,1.622954e-06);
   new_histo_group_Higgs_wh3l_13TeV_ossf_nvtx29->SetBinContent(30,7.388786e-13);
   new_histo_group_Higgs_wh3l_13TeV_ossf_nvtx29->SetBinContent(34,2.647707e-11);
   new_histo_group_Higgs_wh3l_13TeV_ossf_nvtx29->SetBinError(3,0.0002886772);
   new_histo_group_Higgs_wh3l_13TeV_ossf_nvtx29->SetBinError(4,0.00428925);
   new_histo_group_Higgs_wh3l_13TeV_ossf_nvtx29->SetBinError(5,0.003913955);
   new_histo_group_Higgs_wh3l_13TeV_ossf_nvtx29->SetBinError(6,0.006563857);
   new_histo_group_Higgs_wh3l_13TeV_ossf_nvtx29->SetBinError(7,0.009453146);
   new_histo_group_Higgs_wh3l_13TeV_ossf_nvtx29->SetBinError(8,0.007544584);
   new_histo_group_Higgs_wh3l_13TeV_ossf_nvtx29->SetBinError(9,0.008920219);
   new_histo_group_Higgs_wh3l_13TeV_ossf_nvtx29->SetBinError(10,0.009661851);
   new_histo_group_Higgs_wh3l_13TeV_ossf_nvtx29->SetBinError(11,0.008339398);
   new_histo_group_Higgs_wh3l_13TeV_ossf_nvtx29->SetBinError(12,0.008275725);
   new_histo_group_Higgs_wh3l_13TeV_ossf_nvtx29->SetBinError(13,0.008159981);
   new_histo_group_Higgs_wh3l_13TeV_ossf_nvtx29->SetBinError(14,0.006708986);
   new_histo_group_Higgs_wh3l_13TeV_ossf_nvtx29->SetBinError(15,0.004602885);
   new_histo_group_Higgs_wh3l_13TeV_ossf_nvtx29->SetBinError(16,0.003957093);
   new_histo_group_Higgs_wh3l_13TeV_ossf_nvtx29->SetBinError(17,0.004050322);
   new_histo_group_Higgs_wh3l_13TeV_ossf_nvtx29->SetBinError(18,0.003222374);
   new_histo_group_Higgs_wh3l_13TeV_ossf_nvtx29->SetBinError(19,0.0008257527);
   new_histo_group_Higgs_wh3l_13TeV_ossf_nvtx29->SetBinError(20,0.001640981);
   new_histo_group_Higgs_wh3l_13TeV_ossf_nvtx29->SetBinError(21,0.001476899);
   new_histo_group_Higgs_wh3l_13TeV_ossf_nvtx29->SetBinError(22,0.0001761557);
   new_histo_group_Higgs_wh3l_13TeV_ossf_nvtx29->SetBinError(23,0.0001149743);
   new_histo_group_Higgs_wh3l_13TeV_ossf_nvtx29->SetBinError(25,5.359337e-07);
   new_histo_group_Higgs_wh3l_13TeV_ossf_nvtx29->SetBinError(27,1.885581e-09);
   new_histo_group_Higgs_wh3l_13TeV_ossf_nvtx29->SetBinError(28,3.876616e-08);
   new_histo_group_Higgs_wh3l_13TeV_ossf_nvtx29->SetBinError(29,1.622954e-06);
   new_histo_group_Higgs_wh3l_13TeV_ossf_nvtx29->SetBinError(30,7.388786e-13);
   new_histo_group_Higgs_wh3l_13TeV_ossf_nvtx29->SetBinError(34,2.647707e-11);
   new_histo_group_Higgs_wh3l_13TeV_ossf_nvtx29->SetEntries(946);
   new_histo_group_Higgs_wh3l_13TeV_ossf_nvtx29->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_13TeV_ossf_nvtx29->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_13TeV_ossf_nvtx29->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_13TeV_ossf_nvtx29->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_13TeV_ossf_nvtx29->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_ossf_nvtx29->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_ossf_nvtx29->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_13TeV_ossf_nvtx29->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_13TeV_ossf_nvtx29->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_ossf_nvtx29->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_ossf_nvtx29->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_13TeV_ossf_nvtx29->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_13TeV_ossf_nvtx29->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_ossf_nvtx29->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_ossf_nvtx29->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_13TeV_ossf_nvtx->Add(new_histo_group_Higgs_wh3l_13TeV_ossf_nvtx,"");
   thsSignal_grouped_wh3l_13TeV_ossf_nvtx->Draw("hist same noclear");
   
   Double_t _fx3005[40] = {
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
   Double_t _fy3005[40] = {
   0,
   0,
   0.02384408,
   0.08197197,
   -0.1424173,
   0.6295716,
   0.9675941,
   1.678868,
   1.61682,
   0.4738244,
   3.457424,
   2.380349,
   1.514689,
   2.206772,
   0.5277784,
   0.1910163,
   0.4554962,
   0.6386953,
   0.02242902,
   0.07971609,
   0.1070529,
   0.01341719,
   0.007402163,
   1.521721e-06,
   0.003047687,
   0.0003496926,
   0,
   0,
   0,
   0,
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
   Double_t _felx3005[40] = {
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
   Double_t _fely3005[40] = {
   0,
   0,
   0.0140418,
   0.02375015,
   0.2780678,
   0.2258078,
   0.599449,
   0.8431701,
   0.876606,
   0.4818746,
   1.565742,
   1.392424,
   0.5990747,
   1.233819,
   0.1934796,
   0.4332237,
   0.2899566,
   0.4726882,
   0.008024688,
   0.06124496,
   0.08291577,
   0.005996686,
   0.005287279,
   1.521721e-06,
   0.002248892,
   0.000322709,
   0,
   0,
   0,
   0,
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
   Double_t _fehx3005[40] = {
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
   Double_t _fehy3005[40] = {
   0,
   0,
   0.0140418,
   0.02375016,
   0.2780678,
   0.2258079,
   0.7514272,
   0.844743,
   1.064711,
   0.3776373,
   1.565742,
   1.392424,
   0.5990744,
   1.325386,
   0.370966,
   0.4332237,
   0.2899566,
   0.4823458,
   0.008024686,
   0.06124496,
   0.08291576,
   0.005996685,
   0.005287278,
   1.521721e-06,
   0.002248892,
   0.0003227089,
   0,
   0,
   0,
   0,
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
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(40,_fx3005,_fy3005,_felx3005,_fehx3005,_fely3005,_fehy3005);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(12);
   grae->SetFillStyle(3004);
   grae->SetLineColor(12);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3005 = new TH1F("Graph_Graph3005","",100,0,44);
   Graph_Graph3005->SetMinimum(-0.9648503);
   Graph_Graph3005->SetMaximum(5.567532);
   Graph_Graph3005->SetDirectory(0);
   Graph_Graph3005->SetStats(0);
   Graph_Graph3005->SetLineStyle(0);
   Graph_Graph3005->SetMarkerStyle(20);
   Graph_Graph3005->GetXaxis()->SetLabelFont(42);
   Graph_Graph3005->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3005->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3005->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3005->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3005->GetXaxis()->SetTitleFont(42);
   Graph_Graph3005->GetYaxis()->SetLabelFont(42);
   Graph_Graph3005->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3005->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3005->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3005->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3005->GetYaxis()->SetTitleFont(42);
   Graph_Graph3005->GetZaxis()->SetLabelFont(42);
   Graph_Graph3005->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3005->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3005->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3005->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3005);
   
   grae->Draw("2");
   
   Double_t _fx3006[40] = {
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
   Double_t _fy3006[40] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t _felx3006[40] = {
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
   Double_t _fely3006[40] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t _fehx3006[40] = {
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
   Double_t _fehy3006[40] = {
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
   grae = new TGraphAsymmErrors(40,_fx3006,_fy3006,_felx3006,_fehx3006,_fely3006,_fehy3006);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(1);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3006 = new TH1F("Graph_Graph3006","",100,0,44);
   Graph_Graph3006->SetMinimum(0);
   Graph_Graph3006->SetMaximum(1.262698);
   Graph_Graph3006->SetDirectory(0);
   Graph_Graph3006->SetStats(0);
   Graph_Graph3006->SetLineStyle(0);
   Graph_Graph3006->SetMarkerStyle(20);
   Graph_Graph3006->GetXaxis()->SetLabelFont(42);
   Graph_Graph3006->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3006->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3006->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3006->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3006->GetXaxis()->SetTitleFont(42);
   Graph_Graph3006->GetYaxis()->SetLabelFont(42);
   Graph_Graph3006->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3006->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3006->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3006->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3006->GetYaxis()->SetTitleFont(42);
   Graph_Graph3006->GetZaxis()->SetLabelFont(42);
   Graph_Graph3006->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3006->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3006->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3006->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3006);
   
   grae->Draw("p0");
   
   TLegend *leg = new TLegend(0.2,0.55,0.8,0.88,NULL,"brNDC");
   leg->SetTextFont(62);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("new_histo_group_Fake_wh3l_13TeV_ossf_nvtx","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_13TeV_ossf_nvtx","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_13TeV_ossf_nvtx","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_13TeV_ossf_nvtx","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_13TeV_ossf_nvtx","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_13TeV_ossf_nvtx","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_13TeV_ossf_nvtx","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_13TeV_ossf_nvtx","Data","EPL");
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
   
   leg = new TLegend(0.2,0.55,0.8,0.88,NULL,"brNDC");
   leg->SetTextFont(62);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   entry=leg->AddEntry("new_histo_group_Fake_wh3l_13TeV_ossf_nvtx","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_13TeV_ossf_nvtx","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_13TeV_ossf_nvtx","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_13TeV_ossf_nvtx","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_13TeV_ossf_nvtx","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_13TeV_ossf_nvtx","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_13TeV_ossf_nvtx","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_13TeV_ossf_nvtx","Data","EPL");
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
   
   TH1F *hframe_copy30 = new TH1F("hframe_copy30","",1000,0,40);
   hframe_copy30->SetMinimum(0);
   hframe_copy30->SetMaximum(8.795554);
   hframe_copy30->SetDirectory(0);
   hframe_copy30->SetStats(0);
   hframe_copy30->SetLineStyle(0);
   hframe_copy30->SetMarkerStyle(20);
   hframe_copy30->GetXaxis()->SetTitle("nvtx");
   hframe_copy30->GetXaxis()->SetNdivisions(506);
   hframe_copy30->GetXaxis()->SetLabelFont(42);
   hframe_copy30->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy30->GetXaxis()->SetLabelSize(0.05);
   hframe_copy30->GetXaxis()->SetTitleSize(0.06);
   hframe_copy30->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy30->GetXaxis()->SetTitleFont(42);
   hframe_copy30->GetYaxis()->SetTitle("Events");
   hframe_copy30->GetYaxis()->SetLabelFont(42);
   hframe_copy30->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy30->GetYaxis()->SetLabelSize(0.05);
   hframe_copy30->GetYaxis()->SetTitleSize(0.06);
   hframe_copy30->GetYaxis()->SetTitleOffset(1.25);
   hframe_copy30->GetYaxis()->SetTitleFont(42);
   hframe_copy30->GetZaxis()->SetLabelFont(42);
   hframe_copy30->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy30->GetZaxis()->SetLabelSize(0.05);
   hframe_copy30->GetZaxis()->SetTitleSize(0.06);
   hframe_copy30->GetZaxis()->SetTitleFont(42);
   hframe_copy30->Draw("sameaxis");
   ccwh3l_13TeV_ossf_nvtx->Modified();
   ccwh3l_13TeV_ossf_nvtx->cd();
   ccwh3l_13TeV_ossf_nvtx->SetSelected(ccwh3l_13TeV_ossf_nvtx);
}
