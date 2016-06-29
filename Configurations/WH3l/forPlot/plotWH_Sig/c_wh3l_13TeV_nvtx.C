void c_wh3l_13TeV_nvtx()
{
//=========Macro generated from canvas: ccwh3l_13TeV_nvtx/cc
//=========  (Tue Jun 28 15:27:36 2016) by ROOT version6.02/13
   TCanvas *ccwh3l_13TeV_nvtx = new TCanvas("ccwh3l_13TeV_nvtx", "cc",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   ccwh3l_13TeV_nvtx->SetHighLightColor(2);
   ccwh3l_13TeV_nvtx->Range(-8,-1.44281,42,9.655732);
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
   
   TH1F *hframe201 = new TH1F("hframe201","",1000,0,40);
   hframe201->SetMinimum(0);
   hframe201->SetMaximum(9.100805);
   hframe201->SetDirectory(0);
   hframe201->SetStats(0);
   hframe201->SetLineStyle(0);
   hframe201->SetMarkerStyle(20);
   hframe201->GetXaxis()->SetTitle("nvtx");
   hframe201->GetXaxis()->SetNdivisions(506);
   hframe201->GetXaxis()->SetLabelFont(42);
   hframe201->GetXaxis()->SetLabelOffset(0.007);
   hframe201->GetXaxis()->SetLabelSize(0.05);
   hframe201->GetXaxis()->SetTitleSize(0.06);
   hframe201->GetXaxis()->SetTitleOffset(0.9);
   hframe201->GetXaxis()->SetTitleFont(42);
   hframe201->GetYaxis()->SetTitle("Events");
   hframe201->GetYaxis()->SetLabelFont(42);
   hframe201->GetYaxis()->SetLabelOffset(0.007);
   hframe201->GetYaxis()->SetLabelSize(0.05);
   hframe201->GetYaxis()->SetTitleSize(0.06);
   hframe201->GetYaxis()->SetTitleOffset(1.25);
   hframe201->GetYaxis()->SetTitleFont(42);
   hframe201->GetZaxis()->SetLabelFont(42);
   hframe201->GetZaxis()->SetLabelOffset(0.007);
   hframe201->GetZaxis()->SetLabelSize(0.05);
   hframe201->GetZaxis()->SetTitleSize(0.06);
   hframe201->GetZaxis()->SetTitleFont(42);
   hframe201->Draw(" ");
   
   THStack *thsBackground_grouped_wh3l_13TeV_nvtx = new THStack();
   thsBackground_grouped_wh3l_13TeV_nvtx->SetName("thsBackground_grouped_wh3l_13TeV_nvtx");
   thsBackground_grouped_wh3l_13TeV_nvtx->SetTitle("thsBackground_grouped_wh3l_13TeV_nvtx");
   
   TH1F *thsBackground_grouped_wh3l_13TeV_nvtx_stack_41 = new TH1F("thsBackground_grouped_wh3l_13TeV_nvtx_stack_41","thsBackground_grouped_wh3l_13TeV_nvtx",40,0,40);
   thsBackground_grouped_wh3l_13TeV_nvtx_stack_41->SetMinimum(-0.607647);
   thsBackground_grouped_wh3l_13TeV_nvtx_stack_41->SetMaximum(3.822338);
   thsBackground_grouped_wh3l_13TeV_nvtx_stack_41->SetDirectory(0);
   thsBackground_grouped_wh3l_13TeV_nvtx_stack_41->SetStats(0);
   thsBackground_grouped_wh3l_13TeV_nvtx_stack_41->SetLineStyle(0);
   thsBackground_grouped_wh3l_13TeV_nvtx_stack_41->SetMarkerStyle(20);
   thsBackground_grouped_wh3l_13TeV_nvtx_stack_41->GetXaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_13TeV_nvtx_stack_41->GetXaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_13TeV_nvtx_stack_41->GetXaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_13TeV_nvtx_stack_41->GetXaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_13TeV_nvtx_stack_41->GetXaxis()->SetTitleOffset(0.9);
   thsBackground_grouped_wh3l_13TeV_nvtx_stack_41->GetXaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_nvtx_stack_41->GetYaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_13TeV_nvtx_stack_41->GetYaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_13TeV_nvtx_stack_41->GetYaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_13TeV_nvtx_stack_41->GetYaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_13TeV_nvtx_stack_41->GetYaxis()->SetTitleOffset(1.25);
   thsBackground_grouped_wh3l_13TeV_nvtx_stack_41->GetYaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_nvtx_stack_41->GetZaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_13TeV_nvtx_stack_41->GetZaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_13TeV_nvtx_stack_41->GetZaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_13TeV_nvtx_stack_41->GetZaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_13TeV_nvtx_stack_41->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_nvtx->SetHistogram(thsBackground_grouped_wh3l_13TeV_nvtx_stack_41);
   
   
   TH1D *new_histo_group_Fake_wh3l_13TeV_nvtx202 = new TH1D("new_histo_group_Fake_wh3l_13TeV_nvtx202","histo_Fake",40,0,40);
   new_histo_group_Fake_wh3l_13TeV_nvtx202->SetBinContent(4,-0.0005887331);
   new_histo_group_Fake_wh3l_13TeV_nvtx202->SetBinContent(5,-0.2001544);
   new_histo_group_Fake_wh3l_13TeV_nvtx202->SetBinContent(6,-0.07155994);
   new_histo_group_Fake_wh3l_13TeV_nvtx202->SetBinContent(7,0.4548785);
   new_histo_group_Fake_wh3l_13TeV_nvtx202->SetBinContent(8,1.861683);
   new_histo_group_Fake_wh3l_13TeV_nvtx202->SetBinContent(9,1.619839);
   new_histo_group_Fake_wh3l_13TeV_nvtx202->SetBinContent(10,-0.3100484);
   new_histo_group_Fake_wh3l_13TeV_nvtx202->SetBinContent(11,2.166053);
   new_histo_group_Fake_wh3l_13TeV_nvtx202->SetBinContent(12,1.415321);
   new_histo_group_Fake_wh3l_13TeV_nvtx202->SetBinContent(13,0.895392);
   new_histo_group_Fake_wh3l_13TeV_nvtx202->SetBinContent(14,1.78008);
   new_histo_group_Fake_wh3l_13TeV_nvtx202->SetBinContent(15,0.006384889);
   new_histo_group_Fake_wh3l_13TeV_nvtx202->SetBinContent(16,-0.3250522);
   new_histo_group_Fake_wh3l_13TeV_nvtx202->SetBinContent(17,0.1358484);
   new_histo_group_Fake_wh3l_13TeV_nvtx202->SetBinContent(18,0.3001484);
   new_histo_group_Fake_wh3l_13TeV_nvtx202->SetBinError(4,0.0005887331);
   new_histo_group_Fake_wh3l_13TeV_nvtx202->SetBinError(5,0.2509021);
   new_histo_group_Fake_wh3l_13TeV_nvtx202->SetBinError(6,0.07155994);
   new_histo_group_Fake_wh3l_13TeV_nvtx202->SetBinError(7,0.5509229);
   new_histo_group_Fake_wh3l_13TeV_nvtx202->SetBinError(8,1.1625);
   new_histo_group_Fake_wh3l_13TeV_nvtx202->SetBinError(9,1.021052);
   new_histo_group_Fake_wh3l_13TeV_nvtx202->SetBinError(10,0.2975986);
   new_histo_group_Fake_wh3l_13TeV_nvtx202->SetBinError(11,1.117564);
   new_histo_group_Fake_wh3l_13TeV_nvtx202->SetBinError(12,1.052772);
   new_histo_group_Fake_wh3l_13TeV_nvtx202->SetBinError(13,0.4646353);
   new_histo_group_Fake_wh3l_13TeV_nvtx202->SetBinError(14,0.9939133);
   new_histo_group_Fake_wh3l_13TeV_nvtx202->SetBinError(15,0.1839286);
   new_histo_group_Fake_wh3l_13TeV_nvtx202->SetBinError(16,0.2111795);
   new_histo_group_Fake_wh3l_13TeV_nvtx202->SetBinError(17,0.1102774);
   new_histo_group_Fake_wh3l_13TeV_nvtx202->SetBinError(18,0.3099838);
   new_histo_group_Fake_wh3l_13TeV_nvtx202->SetEntries(109);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_13TeV_nvtx202->SetFillColor(ci);
   new_histo_group_Fake_wh3l_13TeV_nvtx202->SetFillStyle(3001);

   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_13TeV_nvtx202->SetLineColor(ci);
   new_histo_group_Fake_wh3l_13TeV_nvtx202->GetXaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_13TeV_nvtx202->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_13TeV_nvtx202->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_13TeV_nvtx202->GetXaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_13TeV_nvtx202->GetYaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_13TeV_nvtx202->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_13TeV_nvtx202->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_13TeV_nvtx202->GetYaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_13TeV_nvtx202->GetZaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_13TeV_nvtx202->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_13TeV_nvtx202->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_13TeV_nvtx202->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_nvtx->Add(new_histo_group_Fake_wh3l_13TeV_nvtx,"");
   
   TH1D *new_histo_group_WW_wh3l_13TeV_nvtx203 = new TH1D("new_histo_group_WW_wh3l_13TeV_nvtx203","histo_WW",40,0,40);
   new_histo_group_WW_wh3l_13TeV_nvtx203->SetBinContent(6,0.01530373);
   new_histo_group_WW_wh3l_13TeV_nvtx203->SetBinContent(8,0.01814939);
   new_histo_group_WW_wh3l_13TeV_nvtx203->SetBinContent(9,0.01447441);
   new_histo_group_WW_wh3l_13TeV_nvtx203->SetBinContent(10,0.0303325);
   new_histo_group_WW_wh3l_13TeV_nvtx203->SetBinContent(16,0.01044191);
   new_histo_group_WW_wh3l_13TeV_nvtx203->SetBinError(6,0.01530373);
   new_histo_group_WW_wh3l_13TeV_nvtx203->SetBinError(8,0.01814939);
   new_histo_group_WW_wh3l_13TeV_nvtx203->SetBinError(9,0.01447441);
   new_histo_group_WW_wh3l_13TeV_nvtx203->SetBinError(10,0.02149105);
   new_histo_group_WW_wh3l_13TeV_nvtx203->SetBinError(16,0.01044191);
   new_histo_group_WW_wh3l_13TeV_nvtx203->SetEntries(6);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_13TeV_nvtx203->SetFillColor(ci);
   new_histo_group_WW_wh3l_13TeV_nvtx203->SetFillStyle(3001);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_13TeV_nvtx203->SetLineColor(ci);
   new_histo_group_WW_wh3l_13TeV_nvtx203->GetXaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_13TeV_nvtx203->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_13TeV_nvtx203->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_13TeV_nvtx203->GetXaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_13TeV_nvtx203->GetYaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_13TeV_nvtx203->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_13TeV_nvtx203->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_13TeV_nvtx203->GetYaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_13TeV_nvtx203->GetZaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_13TeV_nvtx203->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_13TeV_nvtx203->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_13TeV_nvtx203->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_nvtx->Add(new_histo_group_WW_wh3l_13TeV_nvtx,"");
   
   TH1D *new_histo_group_VVV_wh3l_13TeV_nvtx204 = new TH1D("new_histo_group_VVV_wh3l_13TeV_nvtx204","histo_VVV",40,0,40);
   new_histo_group_VVV_wh3l_13TeV_nvtx204->SetBinContent(6,0.001236907);
   new_histo_group_VVV_wh3l_13TeV_nvtx204->SetBinContent(8,0.001297839);
   new_histo_group_VVV_wh3l_13TeV_nvtx204->SetBinContent(9,0.001470758);
   new_histo_group_VVV_wh3l_13TeV_nvtx204->SetBinContent(13,0.0007784473);
   new_histo_group_VVV_wh3l_13TeV_nvtx204->SetBinContent(14,0.001268165);
   new_histo_group_VVV_wh3l_13TeV_nvtx204->SetBinContent(15,0.0006883418);
   new_histo_group_VVV_wh3l_13TeV_nvtx204->SetBinContent(16,0.0009245663);
   new_histo_group_VVV_wh3l_13TeV_nvtx204->SetBinContent(18,0.000653768);
   new_histo_group_VVV_wh3l_13TeV_nvtx204->SetBinError(6,0.0008801115);
   new_histo_group_VVV_wh3l_13TeV_nvtx204->SetBinError(8,0.0009183377);
   new_histo_group_VVV_wh3l_13TeV_nvtx204->SetBinError(9,0.0009173828);
   new_histo_group_VVV_wh3l_13TeV_nvtx204->SetBinError(13,0.0007784473);
   new_histo_group_VVV_wh3l_13TeV_nvtx204->SetBinError(14,0.0008967749);
   new_histo_group_VVV_wh3l_13TeV_nvtx204->SetBinError(15,0.0006883418);
   new_histo_group_VVV_wh3l_13TeV_nvtx204->SetBinError(16,0.0006975699);
   new_histo_group_VVV_wh3l_13TeV_nvtx204->SetBinError(18,0.000653768);
   new_histo_group_VVV_wh3l_13TeV_nvtx204->SetEntries(14);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_13TeV_nvtx204->SetFillColor(ci);
   new_histo_group_VVV_wh3l_13TeV_nvtx204->SetFillStyle(3001);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_13TeV_nvtx204->SetLineColor(ci);
   new_histo_group_VVV_wh3l_13TeV_nvtx204->GetXaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_13TeV_nvtx204->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_13TeV_nvtx204->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_13TeV_nvtx204->GetXaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_13TeV_nvtx204->GetYaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_13TeV_nvtx204->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_13TeV_nvtx204->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_13TeV_nvtx204->GetYaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_13TeV_nvtx204->GetZaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_13TeV_nvtx204->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_13TeV_nvtx204->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_13TeV_nvtx204->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_nvtx->Add(new_histo_group_VVV_wh3l_13TeV_nvtx,"");
   
   TH1D *new_histo_group_Vg_wh3l_13TeV_nvtx205 = new TH1D("new_histo_group_Vg_wh3l_13TeV_nvtx205","histo_Vg",40,0,40);
   new_histo_group_Vg_wh3l_13TeV_nvtx205->SetBinContent(6,0.2283563);
   new_histo_group_Vg_wh3l_13TeV_nvtx205->SetBinContent(7,0.1103645);
   new_histo_group_Vg_wh3l_13TeV_nvtx205->SetBinContent(8,0.1257014);
   new_histo_group_Vg_wh3l_13TeV_nvtx205->SetBinContent(9,0.2926692);
   new_histo_group_Vg_wh3l_13TeV_nvtx205->SetBinContent(10,-0.1230777);
   new_histo_group_Vg_wh3l_13TeV_nvtx205->SetBinContent(11,0.3259333);
   new_histo_group_Vg_wh3l_13TeV_nvtx205->SetBinContent(12,0.2262168);
   new_histo_group_Vg_wh3l_13TeV_nvtx205->SetBinContent(13,0.3314658);
   new_histo_group_Vg_wh3l_13TeV_nvtx205->SetBinContent(14,0.06007751);
   new_histo_group_Vg_wh3l_13TeV_nvtx205->SetBinContent(15,0.2412312);
   new_histo_group_Vg_wh3l_13TeV_nvtx205->SetBinContent(16,0.2870735);
   new_histo_group_Vg_wh3l_13TeV_nvtx205->SetBinContent(17,0.1416296);
   new_histo_group_Vg_wh3l_13TeV_nvtx205->SetBinContent(18,0.2748712);
   new_histo_group_Vg_wh3l_13TeV_nvtx205->SetBinContent(20,0.0510846);
   new_histo_group_Vg_wh3l_13TeV_nvtx205->SetBinContent(21,0.07443925);
   new_histo_group_Vg_wh3l_13TeV_nvtx205->SetBinContent(23,0.0001300264);
   new_histo_group_Vg_wh3l_13TeV_nvtx205->SetBinContent(26,2.545572e-06);
   new_histo_group_Vg_wh3l_13TeV_nvtx205->SetBinError(6,0.1614924);
   new_histo_group_Vg_wh3l_13TeV_nvtx205->SetBinError(7,0.1103645);
   new_histo_group_Vg_wh3l_13TeV_nvtx205->SetBinError(8,0.1257014);
   new_histo_group_Vg_wh3l_13TeV_nvtx205->SetBinError(9,0.1731455);
   new_histo_group_Vg_wh3l_13TeV_nvtx205->SetBinError(10,0.1230777);
   new_histo_group_Vg_wh3l_13TeV_nvtx205->SetBinError(11,0.1894885);
   new_histo_group_Vg_wh3l_13TeV_nvtx205->SetBinError(12,0.159977);
   new_histo_group_Vg_wh3l_13TeV_nvtx205->SetBinError(13,0.2178615);
   new_histo_group_Vg_wh3l_13TeV_nvtx205->SetBinError(14,0.1593412);
   new_histo_group_Vg_wh3l_13TeV_nvtx205->SetBinError(15,0.1495982);
   new_histo_group_Vg_wh3l_13TeV_nvtx205->SetBinError(16,0.167759);
   new_histo_group_Vg_wh3l_13TeV_nvtx205->SetBinError(17,0.1157495);
   new_histo_group_Vg_wh3l_13TeV_nvtx205->SetBinError(18,0.1477147);
   new_histo_group_Vg_wh3l_13TeV_nvtx205->SetBinError(20,0.0510846);
   new_histo_group_Vg_wh3l_13TeV_nvtx205->SetBinError(21,0.05537531);
   new_histo_group_Vg_wh3l_13TeV_nvtx205->SetBinError(23,0.0001300264);
   new_histo_group_Vg_wh3l_13TeV_nvtx205->SetBinError(26,2.545572e-06);
   new_histo_group_Vg_wh3l_13TeV_nvtx205->SetEntries(42);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_13TeV_nvtx205->SetFillColor(ci);
   new_histo_group_Vg_wh3l_13TeV_nvtx205->SetFillStyle(3001);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_13TeV_nvtx205->SetLineColor(ci);
   new_histo_group_Vg_wh3l_13TeV_nvtx205->GetXaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_13TeV_nvtx205->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_13TeV_nvtx205->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_13TeV_nvtx205->GetXaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_13TeV_nvtx205->GetYaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_13TeV_nvtx205->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_13TeV_nvtx205->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_13TeV_nvtx205->GetYaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_13TeV_nvtx205->GetZaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_13TeV_nvtx205->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_13TeV_nvtx205->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_13TeV_nvtx205->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_nvtx->Add(new_histo_group_Vg_wh3l_13TeV_nvtx,"");
   
   TH1D *new_histo_group_ZZ_wh3l_13TeV_nvtx206 = new TH1D("new_histo_group_ZZ_wh3l_13TeV_nvtx206","histo_ZZ",40,0,40);
   new_histo_group_ZZ_wh3l_13TeV_nvtx206->SetBinContent(7,0.04332869);
   new_histo_group_ZZ_wh3l_13TeV_nvtx206->SetBinContent(8,0.08704091);
   new_histo_group_ZZ_wh3l_13TeV_nvtx206->SetBinContent(9,0.0738407);
   new_histo_group_ZZ_wh3l_13TeV_nvtx206->SetBinContent(11,0.0793975);
   new_histo_group_ZZ_wh3l_13TeV_nvtx206->SetBinContent(12,0.1299406);
   new_histo_group_ZZ_wh3l_13TeV_nvtx206->SetBinContent(13,0.123111);
   new_histo_group_ZZ_wh3l_13TeV_nvtx206->SetBinContent(14,0.05352081);
   new_histo_group_ZZ_wh3l_13TeV_nvtx206->SetBinContent(17,0.03554041);
   new_histo_group_ZZ_wh3l_13TeV_nvtx206->SetBinContent(18,1.493259e-08);
   new_histo_group_ZZ_wh3l_13TeV_nvtx206->SetBinContent(21,0.02088597);
   new_histo_group_ZZ_wh3l_13TeV_nvtx206->SetBinError(7,0.04332869);
   new_histo_group_ZZ_wh3l_13TeV_nvtx206->SetBinError(8,0.06158793);
   new_histo_group_ZZ_wh3l_13TeV_nvtx206->SetBinError(9,0.05353437);
   new_histo_group_ZZ_wh3l_13TeV_nvtx206->SetBinError(11,0.05830988);
   new_histo_group_ZZ_wh3l_13TeV_nvtx206->SetBinError(12,0.07019701);
   new_histo_group_ZZ_wh3l_13TeV_nvtx206->SetBinError(13,0.07111692);
   new_histo_group_ZZ_wh3l_13TeV_nvtx206->SetBinError(14,0.03784829);
   new_histo_group_ZZ_wh3l_13TeV_nvtx206->SetBinError(17,0.03554041);
   new_histo_group_ZZ_wh3l_13TeV_nvtx206->SetBinError(18,1.493259e-08);
   new_histo_group_ZZ_wh3l_13TeV_nvtx206->SetBinError(21,0.02088597);
   new_histo_group_ZZ_wh3l_13TeV_nvtx206->SetEntries(19);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_13TeV_nvtx206->SetFillColor(ci);
   new_histo_group_ZZ_wh3l_13TeV_nvtx206->SetFillStyle(3001);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_13TeV_nvtx206->SetLineColor(ci);
   new_histo_group_ZZ_wh3l_13TeV_nvtx206->GetXaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_13TeV_nvtx206->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_13TeV_nvtx206->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_13TeV_nvtx206->GetXaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_13TeV_nvtx206->GetYaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_13TeV_nvtx206->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_13TeV_nvtx206->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_13TeV_nvtx206->GetYaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_13TeV_nvtx206->GetZaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_13TeV_nvtx206->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_13TeV_nvtx206->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_13TeV_nvtx206->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_nvtx->Add(new_histo_group_ZZ_wh3l_13TeV_nvtx,"");
   
   TH1D *new_histo_group_WZ_wh3l_13TeV_nvtx207 = new TH1D("new_histo_group_WZ_wh3l_13TeV_nvtx207","histo_WZ",40,0,40);
   new_histo_group_WZ_wh3l_13TeV_nvtx207->SetBinContent(3,0.03155519);
   new_histo_group_WZ_wh3l_13TeV_nvtx207->SetBinContent(4,0.0825607);
   new_histo_group_WZ_wh3l_13TeV_nvtx207->SetBinContent(5,0.1631303);
   new_histo_group_WZ_wh3l_13TeV_nvtx207->SetBinContent(6,0.3930241);
   new_histo_group_WZ_wh3l_13TeV_nvtx207->SetBinContent(7,0.4496957);
   new_histo_group_WZ_wh3l_13TeV_nvtx207->SetBinContent(8,0.9101907);
   new_histo_group_WZ_wh3l_13TeV_nvtx207->SetBinContent(9,0.7186519);
   new_histo_group_WZ_wh3l_13TeV_nvtx207->SetBinContent(10,0.827865);
   new_histo_group_WZ_wh3l_13TeV_nvtx207->SetBinContent(11,0.9785948);
   new_histo_group_WZ_wh3l_13TeV_nvtx207->SetBinContent(12,0.7367376);
   new_histo_group_WZ_wh3l_13TeV_nvtx207->SetBinContent(13,0.7191149);
   new_histo_group_WZ_wh3l_13TeV_nvtx207->SetBinContent(14,0.5027731);
   new_histo_group_WZ_wh3l_13TeV_nvtx207->SetBinContent(15,0.3095997);
   new_histo_group_WZ_wh3l_13TeV_nvtx207->SetBinContent(16,0.2421898);
   new_histo_group_WZ_wh3l_13TeV_nvtx207->SetBinContent(17,0.1566349);
   new_histo_group_WZ_wh3l_13TeV_nvtx207->SetBinContent(18,0.06938627);
   new_histo_group_WZ_wh3l_13TeV_nvtx207->SetBinContent(19,0.02780931);
   new_histo_group_WZ_wh3l_13TeV_nvtx207->SetBinContent(20,0.02863149);
   new_histo_group_WZ_wh3l_13TeV_nvtx207->SetBinContent(21,0.01172771);
   new_histo_group_WZ_wh3l_13TeV_nvtx207->SetBinContent(22,0.01866725);
   new_histo_group_WZ_wh3l_13TeV_nvtx207->SetBinContent(23,0.007272136);
   new_histo_group_WZ_wh3l_13TeV_nvtx207->SetBinContent(24,1.521721e-06);
   new_histo_group_WZ_wh3l_13TeV_nvtx207->SetBinContent(25,0.003047687);
   new_histo_group_WZ_wh3l_13TeV_nvtx207->SetBinContent(26,0.0003541198);
   new_histo_group_WZ_wh3l_13TeV_nvtx207->SetBinError(3,0.01601978);
   new_histo_group_WZ_wh3l_13TeV_nvtx207->SetBinError(4,0.02316076);
   new_histo_group_WZ_wh3l_13TeV_nvtx207->SetBinError(5,0.0312309);
   new_histo_group_WZ_wh3l_13TeV_nvtx207->SetBinError(6,0.04868908);
   new_histo_group_WZ_wh3l_13TeV_nvtx207->SetBinError(7,0.05079148);
   new_histo_group_WZ_wh3l_13TeV_nvtx207->SetBinError(8,0.07343951);
   new_histo_group_WZ_wh3l_13TeV_nvtx207->SetBinError(9,0.06360118);
   new_histo_group_WZ_wh3l_13TeV_nvtx207->SetBinError(10,0.06816196);
   new_histo_group_WZ_wh3l_13TeV_nvtx207->SetBinError(11,0.07311132);
   new_histo_group_WZ_wh3l_13TeV_nvtx207->SetBinError(12,0.06196872);
   new_histo_group_WZ_wh3l_13TeV_nvtx207->SetBinError(13,0.06060906);
   new_histo_group_WZ_wh3l_13TeV_nvtx207->SetBinError(14,0.0501095);
   new_histo_group_WZ_wh3l_13TeV_nvtx207->SetBinError(15,0.0387533);
   new_histo_group_WZ_wh3l_13TeV_nvtx207->SetBinError(16,0.03377908);
   new_histo_group_WZ_wh3l_13TeV_nvtx207->SetBinError(17,0.02658116);
   new_histo_group_WZ_wh3l_13TeV_nvtx207->SetBinError(18,0.01611186);
   new_histo_group_WZ_wh3l_13TeV_nvtx207->SetBinError(19,0.009661426);
   new_histo_group_WZ_wh3l_13TeV_nvtx207->SetBinError(20,0.01014482);
   new_histo_group_WZ_wh3l_13TeV_nvtx207->SetBinError(21,0.00661452);
   new_histo_group_WZ_wh3l_13TeV_nvtx207->SetBinError(22,0.007970154);
   new_histo_group_WZ_wh3l_13TeV_nvtx207->SetBinError(23,0.005157251);
   new_histo_group_WZ_wh3l_13TeV_nvtx207->SetBinError(24,1.521721e-06);
   new_histo_group_WZ_wh3l_13TeV_nvtx207->SetBinError(25,0.002248892);
   new_histo_group_WZ_wh3l_13TeV_nvtx207->SetBinError(26,0.0003202393);
   new_histo_group_WZ_wh3l_13TeV_nvtx207->SetEntries(1516);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_13TeV_nvtx207->SetFillColor(ci);
   new_histo_group_WZ_wh3l_13TeV_nvtx207->SetFillStyle(3001);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_13TeV_nvtx207->SetLineColor(ci);
   new_histo_group_WZ_wh3l_13TeV_nvtx207->GetXaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_13TeV_nvtx207->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_13TeV_nvtx207->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_13TeV_nvtx207->GetXaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_13TeV_nvtx207->GetYaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_13TeV_nvtx207->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_13TeV_nvtx207->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_13TeV_nvtx207->GetYaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_13TeV_nvtx207->GetZaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_13TeV_nvtx207->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_13TeV_nvtx207->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_13TeV_nvtx207->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_nvtx->Add(new_histo_group_WZ_wh3l_13TeV_nvtx,"");
   
   TH1D *new_histo_group_Higgs_wh3l_13TeV_nvtx208 = new TH1D("new_histo_group_Higgs_wh3l_13TeV_nvtx208","histo_H_htt",40,0,40);
   new_histo_group_Higgs_wh3l_13TeV_nvtx208->SetBinContent(3,0.001293747);
   new_histo_group_Higgs_wh3l_13TeV_nvtx208->SetBinContent(4,0.0180605);
   new_histo_group_Higgs_wh3l_13TeV_nvtx208->SetBinContent(5,0.02031113);
   new_histo_group_Higgs_wh3l_13TeV_nvtx208->SetBinContent(6,0.04898293);
   new_histo_group_Higgs_wh3l_13TeV_nvtx208->SetBinContent(7,0.07837664);
   new_histo_group_Higgs_wh3l_13TeV_nvtx208->SetBinContent(8,0.07228125);
   new_histo_group_Higgs_wh3l_13TeV_nvtx208->SetBinContent(9,0.0951216);
   new_histo_group_Higgs_wh3l_13TeV_nvtx208->SetBinContent(10,0.1028509);
   new_histo_group_Higgs_wh3l_13TeV_nvtx208->SetBinContent(11,0.09034321);
   new_histo_group_Higgs_wh3l_13TeV_nvtx208->SetBinContent(12,0.07965897);
   new_histo_group_Higgs_wh3l_13TeV_nvtx208->SetBinContent(13,0.07784943);
   new_histo_group_Higgs_wh3l_13TeV_nvtx208->SetBinContent(14,0.05215585);
   new_histo_group_Higgs_wh3l_13TeV_nvtx208->SetBinContent(15,0.02963084);
   new_histo_group_Higgs_wh3l_13TeV_nvtx208->SetBinContent(16,0.02187126);
   new_histo_group_Higgs_wh3l_13TeV_nvtx208->SetBinContent(17,0.02067786);
   new_histo_group_Higgs_wh3l_13TeV_nvtx208->SetBinContent(18,0.0125786);
   new_histo_group_Higgs_wh3l_13TeV_nvtx208->SetBinContent(19,0.004133773);
   new_histo_group_Higgs_wh3l_13TeV_nvtx208->SetBinContent(20,0.004889399);
   new_histo_group_Higgs_wh3l_13TeV_nvtx208->SetBinContent(21,0.003849439);
   new_histo_group_Higgs_wh3l_13TeV_nvtx208->SetBinContent(22,0.0002530684);
   new_histo_group_Higgs_wh3l_13TeV_nvtx208->SetBinContent(23,0.0005531693);
   new_histo_group_Higgs_wh3l_13TeV_nvtx208->SetBinContent(25,-5.359337e-07);
   new_histo_group_Higgs_wh3l_13TeV_nvtx208->SetBinContent(27,3.321591e-07);
   new_histo_group_Higgs_wh3l_13TeV_nvtx208->SetBinContent(28,3.879855e-08);
   new_histo_group_Higgs_wh3l_13TeV_nvtx208->SetBinContent(29,1.622954e-06);
   new_histo_group_Higgs_wh3l_13TeV_nvtx208->SetBinContent(30,7.388786e-13);
   new_histo_group_Higgs_wh3l_13TeV_nvtx208->SetBinContent(34,2.647707e-11);
   new_histo_group_Higgs_wh3l_13TeV_nvtx208->SetBinError(3,0.001045706);
   new_histo_group_Higgs_wh3l_13TeV_nvtx208->SetBinError(4,0.005307336);
   new_histo_group_Higgs_wh3l_13TeV_nvtx208->SetBinError(5,0.004735912);
   new_histo_group_Higgs_wh3l_13TeV_nvtx208->SetBinError(6,0.008160546);
   new_histo_group_Higgs_wh3l_13TeV_nvtx208->SetBinError(7,0.01049995);
   new_histo_group_Higgs_wh3l_13TeV_nvtx208->SetBinError(8,0.009019134);
   new_histo_group_Higgs_wh3l_13TeV_nvtx208->SetBinError(9,0.01038438);
   new_histo_group_Higgs_wh3l_13TeV_nvtx208->SetBinError(10,0.01121997);
   new_histo_group_Higgs_wh3l_13TeV_nvtx208->SetBinError(11,0.01041788);
   new_histo_group_Higgs_wh3l_13TeV_nvtx208->SetBinError(12,0.009260142);
   new_histo_group_Higgs_wh3l_13TeV_nvtx208->SetBinError(13,0.009788846);
   new_histo_group_Higgs_wh3l_13TeV_nvtx208->SetBinError(14,0.007140522);
   new_histo_group_Higgs_wh3l_13TeV_nvtx208->SetBinError(15,0.005603266);
   new_histo_group_Higgs_wh3l_13TeV_nvtx208->SetBinError(16,0.004604609);
   new_histo_group_Higgs_wh3l_13TeV_nvtx208->SetBinError(17,0.00469704);
   new_histo_group_Higgs_wh3l_13TeV_nvtx208->SetBinError(18,0.003472047);
   new_histo_group_Higgs_wh3l_13TeV_nvtx208->SetBinError(19,0.001580502);
   new_histo_group_Higgs_wh3l_13TeV_nvtx208->SetBinError(20,0.001883807);
   new_histo_group_Higgs_wh3l_13TeV_nvtx208->SetBinError(21,0.001939349);
   new_histo_group_Higgs_wh3l_13TeV_nvtx208->SetBinError(22,0.0001859697);
   new_histo_group_Higgs_wh3l_13TeV_nvtx208->SetBinError(23,0.0003670337);
   new_histo_group_Higgs_wh3l_13TeV_nvtx208->SetBinError(25,5.359337e-07);
   new_histo_group_Higgs_wh3l_13TeV_nvtx208->SetBinError(27,3.302789e-07);
   new_histo_group_Higgs_wh3l_13TeV_nvtx208->SetBinError(28,3.876616e-08);
   new_histo_group_Higgs_wh3l_13TeV_nvtx208->SetBinError(29,1.622954e-06);
   new_histo_group_Higgs_wh3l_13TeV_nvtx208->SetBinError(30,7.388786e-13);
   new_histo_group_Higgs_wh3l_13TeV_nvtx208->SetBinError(34,2.647707e-11);
   new_histo_group_Higgs_wh3l_13TeV_nvtx208->SetEntries(1360);
   new_histo_group_Higgs_wh3l_13TeV_nvtx208->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_13TeV_nvtx208->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_13TeV_nvtx208->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_13TeV_nvtx208->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_13TeV_nvtx208->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_nvtx208->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_nvtx208->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_13TeV_nvtx208->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_13TeV_nvtx208->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_nvtx208->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_nvtx208->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_13TeV_nvtx208->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_13TeV_nvtx208->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_nvtx208->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_nvtx208->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_nvtx->Add(new_histo_group_Higgs_wh3l_13TeV_nvtx,"");
   thsBackground_grouped_wh3l_13TeV_nvtx->Draw("hist same");
   
   thsSignal_grouped_wh3l_13TeV_nvtx = new THStack();
   thsSignal_grouped_wh3l_13TeV_nvtx->SetName("thsSignal_grouped_wh3l_13TeV_nvtx");
   thsSignal_grouped_wh3l_13TeV_nvtx->SetTitle("thsSignal_grouped_wh3l_13TeV_nvtx");
   
   TH1F *thsSignal_grouped_wh3l_13TeV_nvtx_stack_42 = new TH1F("thsSignal_grouped_wh3l_13TeV_nvtx_stack_42","thsSignal_grouped_wh3l_13TeV_nvtx",40,0,40);
   thsSignal_grouped_wh3l_13TeV_nvtx_stack_42->SetMinimum(-1.071867e-06);
   thsSignal_grouped_wh3l_13TeV_nvtx_stack_42->SetMaximum(0.1197744);
   thsSignal_grouped_wh3l_13TeV_nvtx_stack_42->SetDirectory(0);
   thsSignal_grouped_wh3l_13TeV_nvtx_stack_42->SetStats(0);
   thsSignal_grouped_wh3l_13TeV_nvtx_stack_42->SetLineStyle(0);
   thsSignal_grouped_wh3l_13TeV_nvtx_stack_42->SetMarkerStyle(20);
   thsSignal_grouped_wh3l_13TeV_nvtx_stack_42->GetXaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_13TeV_nvtx_stack_42->GetXaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_13TeV_nvtx_stack_42->GetXaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_13TeV_nvtx_stack_42->GetXaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_13TeV_nvtx_stack_42->GetXaxis()->SetTitleOffset(0.9);
   thsSignal_grouped_wh3l_13TeV_nvtx_stack_42->GetXaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_13TeV_nvtx_stack_42->GetYaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_13TeV_nvtx_stack_42->GetYaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_13TeV_nvtx_stack_42->GetYaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_13TeV_nvtx_stack_42->GetYaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_13TeV_nvtx_stack_42->GetYaxis()->SetTitleOffset(1.25);
   thsSignal_grouped_wh3l_13TeV_nvtx_stack_42->GetYaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_13TeV_nvtx_stack_42->GetZaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_13TeV_nvtx_stack_42->GetZaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_13TeV_nvtx_stack_42->GetZaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_13TeV_nvtx_stack_42->GetZaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_13TeV_nvtx_stack_42->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_13TeV_nvtx->SetHistogram(thsSignal_grouped_wh3l_13TeV_nvtx_stack_42);
   
   
   TH1D *new_histo_group_Higgs_wh3l_13TeV_nvtx209 = new TH1D("new_histo_group_Higgs_wh3l_13TeV_nvtx209","histo_H_htt",40,0,40);
   new_histo_group_Higgs_wh3l_13TeV_nvtx209->SetBinContent(3,0.001293747);
   new_histo_group_Higgs_wh3l_13TeV_nvtx209->SetBinContent(4,0.0180605);
   new_histo_group_Higgs_wh3l_13TeV_nvtx209->SetBinContent(5,0.02031113);
   new_histo_group_Higgs_wh3l_13TeV_nvtx209->SetBinContent(6,0.04898293);
   new_histo_group_Higgs_wh3l_13TeV_nvtx209->SetBinContent(7,0.07837664);
   new_histo_group_Higgs_wh3l_13TeV_nvtx209->SetBinContent(8,0.07228125);
   new_histo_group_Higgs_wh3l_13TeV_nvtx209->SetBinContent(9,0.0951216);
   new_histo_group_Higgs_wh3l_13TeV_nvtx209->SetBinContent(10,0.1028509);
   new_histo_group_Higgs_wh3l_13TeV_nvtx209->SetBinContent(11,0.09034321);
   new_histo_group_Higgs_wh3l_13TeV_nvtx209->SetBinContent(12,0.07965897);
   new_histo_group_Higgs_wh3l_13TeV_nvtx209->SetBinContent(13,0.07784943);
   new_histo_group_Higgs_wh3l_13TeV_nvtx209->SetBinContent(14,0.05215585);
   new_histo_group_Higgs_wh3l_13TeV_nvtx209->SetBinContent(15,0.02963084);
   new_histo_group_Higgs_wh3l_13TeV_nvtx209->SetBinContent(16,0.02187126);
   new_histo_group_Higgs_wh3l_13TeV_nvtx209->SetBinContent(17,0.02067786);
   new_histo_group_Higgs_wh3l_13TeV_nvtx209->SetBinContent(18,0.0125786);
   new_histo_group_Higgs_wh3l_13TeV_nvtx209->SetBinContent(19,0.004133773);
   new_histo_group_Higgs_wh3l_13TeV_nvtx209->SetBinContent(20,0.004889399);
   new_histo_group_Higgs_wh3l_13TeV_nvtx209->SetBinContent(21,0.003849439);
   new_histo_group_Higgs_wh3l_13TeV_nvtx209->SetBinContent(22,0.0002530684);
   new_histo_group_Higgs_wh3l_13TeV_nvtx209->SetBinContent(23,0.0005531693);
   new_histo_group_Higgs_wh3l_13TeV_nvtx209->SetBinContent(25,-5.359337e-07);
   new_histo_group_Higgs_wh3l_13TeV_nvtx209->SetBinContent(27,3.321591e-07);
   new_histo_group_Higgs_wh3l_13TeV_nvtx209->SetBinContent(28,3.879855e-08);
   new_histo_group_Higgs_wh3l_13TeV_nvtx209->SetBinContent(29,1.622954e-06);
   new_histo_group_Higgs_wh3l_13TeV_nvtx209->SetBinContent(30,7.388786e-13);
   new_histo_group_Higgs_wh3l_13TeV_nvtx209->SetBinContent(34,2.647707e-11);
   new_histo_group_Higgs_wh3l_13TeV_nvtx209->SetBinError(3,0.001045706);
   new_histo_group_Higgs_wh3l_13TeV_nvtx209->SetBinError(4,0.005307336);
   new_histo_group_Higgs_wh3l_13TeV_nvtx209->SetBinError(5,0.004735912);
   new_histo_group_Higgs_wh3l_13TeV_nvtx209->SetBinError(6,0.008160546);
   new_histo_group_Higgs_wh3l_13TeV_nvtx209->SetBinError(7,0.01049995);
   new_histo_group_Higgs_wh3l_13TeV_nvtx209->SetBinError(8,0.009019134);
   new_histo_group_Higgs_wh3l_13TeV_nvtx209->SetBinError(9,0.01038438);
   new_histo_group_Higgs_wh3l_13TeV_nvtx209->SetBinError(10,0.01121997);
   new_histo_group_Higgs_wh3l_13TeV_nvtx209->SetBinError(11,0.01041788);
   new_histo_group_Higgs_wh3l_13TeV_nvtx209->SetBinError(12,0.009260142);
   new_histo_group_Higgs_wh3l_13TeV_nvtx209->SetBinError(13,0.009788846);
   new_histo_group_Higgs_wh3l_13TeV_nvtx209->SetBinError(14,0.007140522);
   new_histo_group_Higgs_wh3l_13TeV_nvtx209->SetBinError(15,0.005603266);
   new_histo_group_Higgs_wh3l_13TeV_nvtx209->SetBinError(16,0.004604609);
   new_histo_group_Higgs_wh3l_13TeV_nvtx209->SetBinError(17,0.00469704);
   new_histo_group_Higgs_wh3l_13TeV_nvtx209->SetBinError(18,0.003472047);
   new_histo_group_Higgs_wh3l_13TeV_nvtx209->SetBinError(19,0.001580502);
   new_histo_group_Higgs_wh3l_13TeV_nvtx209->SetBinError(20,0.001883807);
   new_histo_group_Higgs_wh3l_13TeV_nvtx209->SetBinError(21,0.001939349);
   new_histo_group_Higgs_wh3l_13TeV_nvtx209->SetBinError(22,0.0001859697);
   new_histo_group_Higgs_wh3l_13TeV_nvtx209->SetBinError(23,0.0003670337);
   new_histo_group_Higgs_wh3l_13TeV_nvtx209->SetBinError(25,5.359337e-07);
   new_histo_group_Higgs_wh3l_13TeV_nvtx209->SetBinError(27,3.302789e-07);
   new_histo_group_Higgs_wh3l_13TeV_nvtx209->SetBinError(28,3.876616e-08);
   new_histo_group_Higgs_wh3l_13TeV_nvtx209->SetBinError(29,1.622954e-06);
   new_histo_group_Higgs_wh3l_13TeV_nvtx209->SetBinError(30,7.388786e-13);
   new_histo_group_Higgs_wh3l_13TeV_nvtx209->SetBinError(34,2.647707e-11);
   new_histo_group_Higgs_wh3l_13TeV_nvtx209->SetEntries(1360);
   new_histo_group_Higgs_wh3l_13TeV_nvtx209->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_13TeV_nvtx209->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_13TeV_nvtx209->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_13TeV_nvtx209->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_13TeV_nvtx209->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_nvtx209->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_nvtx209->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_13TeV_nvtx209->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_13TeV_nvtx209->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_nvtx209->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_nvtx209->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_13TeV_nvtx209->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_13TeV_nvtx209->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_nvtx209->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_nvtx209->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_13TeV_nvtx->Add(new_histo_group_Higgs_wh3l_13TeV_nvtx,"");
   thsSignal_grouped_wh3l_13TeV_nvtx->Draw("hist same noclear");
   
   Double_t _fx3041[40] = {
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
   Double_t _fy3041[40] = {
   0,
   0,
   0.03155519,
   0.08197197,
   -0.03702413,
   0.566361,
   1.058267,
   3.004063,
   2.720946,
   0.4250714,
   3.549979,
   2.508216,
   2.069862,
   2.39772,
   0.5579042,
   0.2155776,
   0.4696533,
   0.6450596,
   0.02780931,
   0.07971609,
   0.1070529,
   0.01866725,
   0.007402163,
   1.521721e-06,
   0.003047687,
   0.0003566653,
   0,
   0,
   0,
   0,
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
   Double_t _felx3041[40] = {
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
   Double_t _fely3041[40] = {
   0,
   0,
   0.01601978,
   0.02375015,
   0.2884521,
   0.2987708,
   0.6733494,
   1.546669,
   1.412959,
   0.5187427,
   1.578476,
   1.410379,
   0.8582153,
   1.261462,
   0.1955433,
   0.4350046,
   0.2910556,
   0.473332,
   0.009661427,
   0.06124496,
   0.08291577,
   0.007970153,
   0.005287279,
   1.521721e-06,
   0.002248892,
   0.0003227849,
   0,
   0,
   0,
   0,
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
   Double_t _fehx3041[40] = {
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
   Double_t _fehy3041[40] = {
   0,
   0,
   0.01601978,
   0.02375016,
   0.2390496,
   0.2987709,
   0.767646,
   1.546669,
   1.412959,
   0.5187427,
   1.578476,
   1.410379,
   0.8582152,
   1.352045,
   0.3730305,
   0.4350046,
   0.2910555,
   0.4829901,
   0.009661425,
   0.06124496,
   0.08291576,
   0.007970154,
   0.005287278,
   1.521721e-06,
   0.002248892,
   0.0003227849,
   0,
   0,
   0,
   0,
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
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(40,_fx3041,_fy3041,_felx3041,_fehx3041,_fely3041,_fehy3041);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(12);
   grae->SetFillStyle(3004);
   grae->SetLineColor(12);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3041 = new TH1F("Graph_Graph3041","",100,0,44);
   Graph_Graph3041->SetMinimum(-0.8708694);
   Graph_Graph3041->SetMaximum(5.673848);
   Graph_Graph3041->SetDirectory(0);
   Graph_Graph3041->SetStats(0);
   Graph_Graph3041->SetLineStyle(0);
   Graph_Graph3041->SetMarkerStyle(20);
   Graph_Graph3041->GetXaxis()->SetLabelFont(42);
   Graph_Graph3041->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3041->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3041->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3041->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3041->GetXaxis()->SetTitleFont(42);
   Graph_Graph3041->GetYaxis()->SetLabelFont(42);
   Graph_Graph3041->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3041->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3041->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3041->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3041->GetYaxis()->SetTitleFont(42);
   Graph_Graph3041->GetZaxis()->SetLabelFont(42);
   Graph_Graph3041->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3041->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3041->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3041->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3041);
   
   grae->Draw("2");
   
   Double_t _fx3042[40] = {
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
   Double_t _fy3042[40] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t _felx3042[40] = {
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
   Double_t _fely3042[40] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t _fehx3042[40] = {
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
   Double_t _fehy3042[40] = {
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
   grae = new TGraphAsymmErrors(40,_fx3042,_fy3042,_felx3042,_fehx3042,_fely3042,_fehy3042);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(1);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3042 = new TH1F("Graph_Graph3042","",100,0,44);
   Graph_Graph3042->SetMinimum(0);
   Graph_Graph3042->SetMaximum(1.262698);
   Graph_Graph3042->SetDirectory(0);
   Graph_Graph3042->SetStats(0);
   Graph_Graph3042->SetLineStyle(0);
   Graph_Graph3042->SetMarkerStyle(20);
   Graph_Graph3042->GetXaxis()->SetLabelFont(42);
   Graph_Graph3042->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3042->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3042->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3042->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3042->GetXaxis()->SetTitleFont(42);
   Graph_Graph3042->GetYaxis()->SetLabelFont(42);
   Graph_Graph3042->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3042->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3042->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3042->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3042->GetYaxis()->SetTitleFont(42);
   Graph_Graph3042->GetZaxis()->SetLabelFont(42);
   Graph_Graph3042->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3042->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3042->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3042->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3042);
   
   grae->Draw("p0");
   
   TLegend *leg = new TLegend(0.2,0.7,0.8,0.9,NULL,"brNDC");
   leg->SetTextFont(62);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("new_histo_group_Fake_wh3l_13TeV_nvtx","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_13TeV_nvtx","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_13TeV_nvtx","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_13TeV_nvtx","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Fake_wh3l_13TeV_nvtx","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_13TeV_nvtx","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_13TeV_nvtx","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_13TeV_nvtx","WZ","F");

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
   
   TH1F *hframe_copy210 = new TH1F("hframe_copy210","",1000,0,40);
   hframe_copy210->SetMinimum(0);
   hframe_copy210->SetMaximum(9.100805);
   hframe_copy210->SetDirectory(0);
   hframe_copy210->SetStats(0);
   hframe_copy210->SetLineStyle(0);
   hframe_copy210->SetMarkerStyle(20);
   hframe_copy210->GetXaxis()->SetTitle("nvtx");
   hframe_copy210->GetXaxis()->SetNdivisions(506);
   hframe_copy210->GetXaxis()->SetLabelFont(42);
   hframe_copy210->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy210->GetXaxis()->SetLabelSize(0.05);
   hframe_copy210->GetXaxis()->SetTitleSize(0.06);
   hframe_copy210->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy210->GetXaxis()->SetTitleFont(42);
   hframe_copy210->GetYaxis()->SetTitle("Events");
   hframe_copy210->GetYaxis()->SetLabelFont(42);
   hframe_copy210->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy210->GetYaxis()->SetLabelSize(0.05);
   hframe_copy210->GetYaxis()->SetTitleSize(0.06);
   hframe_copy210->GetYaxis()->SetTitleOffset(1.25);
   hframe_copy210->GetYaxis()->SetTitleFont(42);
   hframe_copy210->GetZaxis()->SetLabelFont(42);
   hframe_copy210->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy210->GetZaxis()->SetLabelSize(0.05);
   hframe_copy210->GetZaxis()->SetTitleSize(0.06);
   hframe_copy210->GetZaxis()->SetTitleFont(42);
   hframe_copy210->Draw("sameaxis");
   ccwh3l_13TeV_nvtx->Modified();
   ccwh3l_13TeV_nvtx->cd();
   ccwh3l_13TeV_nvtx->SetSelected(ccwh3l_13TeV_nvtx);
}
