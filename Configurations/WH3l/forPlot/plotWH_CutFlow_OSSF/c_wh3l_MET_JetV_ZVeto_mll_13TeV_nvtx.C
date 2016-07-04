void c_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx()
{
//=========Macro generated from canvas: ccwh3l_MET_JetV_ZVeto_mll_13TeV_nvtx/cc
//=========  (Sat Jul  2 21:44:03 2016) by ROOT version6.02/13
   TCanvas *ccwh3l_MET_JetV_ZVeto_mll_13TeV_nvtx = new TCanvas("ccwh3l_MET_JetV_ZVeto_mll_13TeV_nvtx", "cc",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   ccwh3l_MET_JetV_ZVeto_mll_13TeV_nvtx->SetHighLightColor(2);
   ccwh3l_MET_JetV_ZVeto_mll_13TeV_nvtx->Range(-8,-1.353194,42,9.055993);
   ccwh3l_MET_JetV_ZVeto_mll_13TeV_nvtx->SetFillColor(0);
   ccwh3l_MET_JetV_ZVeto_mll_13TeV_nvtx->SetBorderMode(0);
   ccwh3l_MET_JetV_ZVeto_mll_13TeV_nvtx->SetBorderSize(2);
   ccwh3l_MET_JetV_ZVeto_mll_13TeV_nvtx->SetTickx(1);
   ccwh3l_MET_JetV_ZVeto_mll_13TeV_nvtx->SetTicky(1);
   ccwh3l_MET_JetV_ZVeto_mll_13TeV_nvtx->SetLeftMargin(0.16);
   ccwh3l_MET_JetV_ZVeto_mll_13TeV_nvtx->SetRightMargin(0.04);
   ccwh3l_MET_JetV_ZVeto_mll_13TeV_nvtx->SetTopMargin(0.05);
   ccwh3l_MET_JetV_ZVeto_mll_13TeV_nvtx->SetBottomMargin(0.13);
   ccwh3l_MET_JetV_ZVeto_mll_13TeV_nvtx->SetFrameFillStyle(0);
   ccwh3l_MET_JetV_ZVeto_mll_13TeV_nvtx->SetFrameBorderMode(0);
   ccwh3l_MET_JetV_ZVeto_mll_13TeV_nvtx->SetFrameFillStyle(0);
   ccwh3l_MET_JetV_ZVeto_mll_13TeV_nvtx->SetFrameBorderMode(0);
   
   TH1F *hframe551 = new TH1F("hframe551","",1000,0,40);
   hframe551->SetMinimum(0);
   hframe551->SetMaximum(8.535534);
   hframe551->SetDirectory(0);
   hframe551->SetStats(0);
   hframe551->SetLineStyle(0);
   hframe551->SetMarkerStyle(20);
   hframe551->GetXaxis()->SetTitle("nvtx");
   hframe551->GetXaxis()->SetNdivisions(506);
   hframe551->GetXaxis()->SetLabelFont(42);
   hframe551->GetXaxis()->SetLabelOffset(0.007);
   hframe551->GetXaxis()->SetLabelSize(0.05);
   hframe551->GetXaxis()->SetTitleSize(0.06);
   hframe551->GetXaxis()->SetTitleOffset(0.9);
   hframe551->GetXaxis()->SetTitleFont(42);
   hframe551->GetYaxis()->SetTitle("Events");
   hframe551->GetYaxis()->SetLabelFont(42);
   hframe551->GetYaxis()->SetLabelOffset(0.007);
   hframe551->GetYaxis()->SetLabelSize(0.05);
   hframe551->GetYaxis()->SetTitleSize(0.06);
   hframe551->GetYaxis()->SetTitleOffset(1.25);
   hframe551->GetYaxis()->SetTitleFont(42);
   hframe551->GetZaxis()->SetLabelFont(42);
   hframe551->GetZaxis()->SetLabelOffset(0.007);
   hframe551->GetZaxis()->SetLabelSize(0.05);
   hframe551->GetZaxis()->SetTitleSize(0.06);
   hframe551->GetZaxis()->SetTitleFont(42);
   hframe551->Draw(" ");
   
   THStack *thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx = new THStack();
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx->SetName("thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx");
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx->SetTitle("thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx");
   
   TH1F *thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx_stack_111 = new TH1F("thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx_stack_111","thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx",40,0,40);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx_stack_111->SetMinimum(-0.4448694);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx_stack_111->SetMaximum(1.946671);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx_stack_111->SetDirectory(0);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx_stack_111->SetStats(0);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx_stack_111->SetLineStyle(0);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx_stack_111->SetMarkerStyle(20);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx_stack_111->GetXaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx_stack_111->GetXaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx_stack_111->GetXaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx_stack_111->GetXaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx_stack_111->GetXaxis()->SetTitleOffset(0.9);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx_stack_111->GetXaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx_stack_111->GetYaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx_stack_111->GetYaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx_stack_111->GetYaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx_stack_111->GetYaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx_stack_111->GetYaxis()->SetTitleOffset(1.25);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx_stack_111->GetYaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx_stack_111->GetZaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx_stack_111->GetZaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx_stack_111->GetZaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx_stack_111->GetZaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx_stack_111->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx->SetHistogram(thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx_stack_111);
   
   
   TH1D *new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx552 = new TH1D("new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx552","histo_Fake",40,0,40);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx552->SetBinContent(4,-0.0005887331);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx552->SetBinContent(7,0.4403841);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx552->SetBinContent(8,0.5475639);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx552->SetBinContent(9,0.04509894);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx552->SetBinContent(10,-0.03546656);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx552->SetBinContent(11,0.8849365);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx552->SetBinContent(12,0.2869638);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx552->SetBinContent(13,0.3497454);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx552->SetBinContent(14,0.6274838);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx552->SetBinContent(15,0.1354057);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx552->SetBinContent(17,-0.009263914);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx552->SetBinError(4,0.0005887331);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx552->SetBinError(7,0.5294692);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx552->SetBinError(8,0.5492167);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx552->SetBinError(9,0.4899683);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx552->SetBinError(10,0.2272163);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx552->SetBinError(11,0.6474419);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx552->SetBinError(12,0.5813421);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx552->SetBinError(13,0.1997156);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx552->SetBinError(14,0.5316024);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx552->SetBinError(15,0.1354057);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx552->SetBinError(17,0.006598898);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx552->SetEntries(36);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx552->SetFillColor(ci);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx552->SetFillStyle(3001);

   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx552->SetLineColor(ci);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx552->GetXaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx552->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx552->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx552->GetXaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx552->GetYaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx552->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx552->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx552->GetYaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx552->GetZaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx552->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx552->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx552->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx->Add(new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx,"");
   
   TH1D *new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx553 = new TH1D("new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx553","histo_WW",40,0,40);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx553->SetBinContent(6,0.01530373);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx553->SetBinError(6,0.01530373);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx553->SetEntries(1);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx553->SetFillColor(ci);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx553->SetFillStyle(3001);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx553->SetLineColor(ci);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx553->GetXaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx553->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx553->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx553->GetXaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx553->GetYaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx553->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx553->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx553->GetYaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx553->GetZaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx553->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx553->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx553->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx->Add(new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx,"");
   
   TH1D *new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx554 = new TH1D("new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx554","histo_VVV",40,0,40);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx554->SetBinContent(2,0.00270524);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx554->SetBinContent(5,0.005501321);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx554->SetBinContent(6,0.002290095);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx554->SetBinContent(7,0.007717719);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx554->SetBinContent(8,0.01008697);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx554->SetBinContent(9,0.008548766);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx554->SetBinContent(10,0.01049353);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx554->SetBinContent(11,0.008525357);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx554->SetBinContent(12,0.004803465);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx554->SetBinContent(13,0.002361406);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx554->SetBinContent(14,0.008707834);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx554->SetBinContent(15,0.004126929);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx554->SetBinContent(16,0.002242147);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx554->SetBinContent(17,0.00211058);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx554->SetBinContent(18,0.0007801091);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx554->SetBinContent(20,0.002354171);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx554->SetBinError(2,0.00270524);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx554->SetBinError(5,0.003890245);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx554->SetBinError(6,0.002290095);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx554->SetBinError(7,0.004275725);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx554->SetBinError(8,0.005076368);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx554->SetBinError(9,0.004302319);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx554->SetBinError(10,0.004745924);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx554->SetBinError(11,0.005718943);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx554->SetBinError(12,0.003399916);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx554->SetBinError(13,0.002361406);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx554->SetBinError(14,0.004399924);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx554->SetBinError(15,0.002919967);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx554->SetBinError(16,0.002242147);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx554->SetBinError(17,0.00211058);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx554->SetBinError(18,0.0007801091);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx554->SetBinError(20,0.002354171);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx554->SetEntries(41);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx554->SetFillColor(ci);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx554->SetFillStyle(3001);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx554->SetLineColor(ci);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx554->GetXaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx554->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx554->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx554->GetXaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx554->GetYaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx554->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx554->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx554->GetYaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx554->GetZaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx554->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx554->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx554->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx->Add(new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx,"");
   
   TH1D *new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx555 = new TH1D("new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx555","histo_Vg",40,0,40);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx555->SetBinContent(6,0.1123769);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx555->SetBinContent(7,0.1103645);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx555->SetBinContent(8,0.1257014);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx555->SetBinContent(9,0.1207149);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx555->SetBinContent(11,0.3259333);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx555->SetBinContent(12,0.1147861);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx555->SetBinContent(13,0.2115821);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx555->SetBinContent(14,-0.1065842);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx555->SetBinContent(15,0.1013396);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx555->SetBinContent(18,0.04963029);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx555->SetBinContent(21,0.07443925);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx555->SetBinContent(23,0.0001300264);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx555->SetBinError(6,0.1123769);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx555->SetBinError(7,0.1103645);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx555->SetBinError(8,0.1257014);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx555->SetBinError(9,0.1207149);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx555->SetBinError(11,0.1894885);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx555->SetBinError(12,0.1147861);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx555->SetBinError(13,0.1366849);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx555->SetBinError(14,0.1065842);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx555->SetBinError(15,0.1013396);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx555->SetBinError(18,0.03514616);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx555->SetBinError(21,0.05537531);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx555->SetBinError(23,0.0001300264);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx555->SetEntries(18);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx555->SetFillColor(ci);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx555->SetFillStyle(3001);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx555->SetLineColor(ci);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx555->GetXaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx555->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx555->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx555->GetXaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx555->GetYaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx555->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx555->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx555->GetYaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx555->GetZaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx555->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx555->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx555->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx->Add(new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx,"");
   
   TH1D *new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx556 = new TH1D("new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx556","histo_ZZ",40,0,40);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx556->SetBinContent(8,0.04193722);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx556->SetBinContent(11,0.0793975);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx556->SetBinContent(13,0.04100299);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx556->SetBinContent(14,0.05352081);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx556->SetBinContent(17,0.03554041);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx556->SetBinError(8,0.04193722);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx556->SetBinError(11,0.05830988);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx556->SetBinError(13,0.04100299);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx556->SetBinError(14,0.03784829);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx556->SetBinError(17,0.03554041);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx556->SetEntries(7);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx556->SetFillColor(ci);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx556->SetFillStyle(3001);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx556->SetLineColor(ci);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx556->GetXaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx556->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx556->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx556->GetXaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx556->GetYaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx556->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx556->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx556->GetYaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx556->GetZaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx556->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx556->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx556->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx->Add(new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx,"");
   
   TH1D *new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx557 = new TH1D("new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx557","histo_WZ",40,0,40);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx557->SetBinContent(3,0.0171767);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx557->SetBinContent(4,0.03285688);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx557->SetBinContent(5,0.09183958);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx557->SetBinContent(6,0.2266431);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx557->SetBinContent(7,0.279904);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx557->SetBinContent(8,0.5315053);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx557->SetBinContent(9,0.4113268);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx557->SetBinContent(10,0.4528331);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx557->SetBinContent(11,0.5207037);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx557->SetBinContent(12,0.4051297);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx557->SetBinContent(13,0.3934346);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx557->SetBinContent(14,0.2752026);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx557->SetBinContent(15,0.1710556);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx557->SetBinContent(16,0.1174074);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx557->SetBinContent(17,0.06095286);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx557->SetBinContent(18,0.04829629);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx557->SetBinContent(19,0.01555202);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx557->SetBinContent(20,0.0139511);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx557->SetBinContent(21,0.005308898);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx557->SetBinContent(22,0.01130063);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx557->SetBinContent(23,0.001802461);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx557->SetBinContent(24,1.521721e-06);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx557->SetBinContent(25,0.003045879);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx557->SetBinContent(26,0.000345352);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx557->SetBinError(3,0.01235792);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx557->SetBinError(4,0.01501645);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx557->SetBinError(5,0.02325824);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx557->SetBinError(6,0.03705223);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx557->SetBinError(7,0.0401627);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx557->SetBinError(8,0.05523665);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx557->SetBinError(9,0.04780691);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx557->SetBinError(10,0.05096395);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx557->SetBinError(11,0.05347418);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx557->SetBinError(12,0.04560884);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx557->SetBinError(13,0.04492035);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx557->SetBinError(14,0.03754761);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx557->SetBinError(15,0.02887656);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx557->SetBinError(16,0.02419363);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx557->SetBinError(17,0.01529347);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx557->SetBinError(18,0.0138785);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx557->SetBinError(19,0.006823962);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx557->SetBinError(20,0.006893867);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx557->SetBinError(21,0.004748829);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx557->SetBinError(22,0.005807142);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx557->SetBinError(23,0.001800575);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx557->SetBinError(24,1.521721e-06);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx557->SetBinError(25,0.002248891);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx557->SetBinError(26,0.0003201584);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx557->SetEntries(837);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx557->SetFillColor(ci);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx557->SetFillStyle(3001);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx557->SetLineColor(ci);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx557->GetXaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx557->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx557->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx557->GetXaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx557->GetYaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx557->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx557->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx557->GetYaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx557->GetZaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx557->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx557->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx557->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx->Add(new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx,"");
   
   TH1D *new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx558 = new TH1D("new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx558","histo_H_htt",40,0,40);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx558->SetBinContent(3,0.0002886772);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx558->SetBinContent(4,0.002211026);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx558->SetBinContent(5,0.007256486);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx558->SetBinContent(6,0.02042976);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx558->SetBinContent(7,0.03799898);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx558->SetBinContent(8,0.0309653);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx558->SetBinContent(9,0.03767347);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx558->SetBinContent(10,0.03889598);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx558->SetBinContent(11,0.03447642);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx558->SetBinContent(12,0.03625741);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx558->SetBinContent(13,0.03912409);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx558->SetBinContent(14,0.02493068);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx558->SetBinContent(15,0.0116561);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx558->SetBinContent(16,0.01108117);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx558->SetBinContent(17,0.01173654);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx558->SetBinContent(18,0.007114632);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx558->SetBinContent(19,0.001393731);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx558->SetBinContent(20,0.001339475);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx558->SetBinContent(21,0.002087682);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx558->SetBinContent(23,0.0001149743);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx558->SetBinContent(28,3.879855e-08);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx558->SetBinContent(34,2.647707e-11);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx558->SetBinError(3,0.0002886772);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx558->SetBinError(4,0.001765777);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx558->SetBinError(5,0.002947784);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx558->SetBinError(6,0.005669631);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx558->SetBinError(7,0.007726388);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx558->SetBinError(8,0.00615497);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx558->SetBinError(9,0.006994094);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx558->SetBinError(10,0.007302342);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx558->SetBinError(11,0.006484093);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx558->SetBinError(12,0.006592184);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx558->SetBinError(13,0.007309751);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx558->SetBinError(14,0.005323064);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx558->SetBinError(15,0.003935207);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx558->SetBinError(16,0.003557071);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx558->SetBinError(17,0.003691333);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx558->SetBinError(18,0.002921155);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx558->SetBinError(19,0.0008091457);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx558->SetBinError(20,0.0009011945);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx558->SetBinError(21,0.001476899);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx558->SetBinError(23,0.0001149743);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx558->SetBinError(28,3.876616e-08);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx558->SetBinError(34,2.647707e-11);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx558->SetEntries(471);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx558->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx558->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx558->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx558->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx558->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx558->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx558->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx558->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx558->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx558->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx558->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx558->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx558->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx558->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx558->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx->Add(new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx,"");
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx->Draw("hist same");
   
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx = new THStack();
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx->SetName("thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx");
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx->SetTitle("thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx");
   
   TH1F *thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx_stack_112 = new TH1F("thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx_stack_112","thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx",40,0,40);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx_stack_112->SetMinimum(0);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx_stack_112->SetMaximum(0.04875554);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx_stack_112->SetDirectory(0);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx_stack_112->SetStats(0);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx_stack_112->SetLineStyle(0);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx_stack_112->SetMarkerStyle(20);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx_stack_112->GetXaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx_stack_112->GetXaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx_stack_112->GetXaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx_stack_112->GetXaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx_stack_112->GetXaxis()->SetTitleOffset(0.9);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx_stack_112->GetXaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx_stack_112->GetYaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx_stack_112->GetYaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx_stack_112->GetYaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx_stack_112->GetYaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx_stack_112->GetYaxis()->SetTitleOffset(1.25);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx_stack_112->GetYaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx_stack_112->GetZaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx_stack_112->GetZaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx_stack_112->GetZaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx_stack_112->GetZaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx_stack_112->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx->SetHistogram(thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx_stack_112);
   
   
   TH1D *new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx559 = new TH1D("new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx559","histo_H_htt",40,0,40);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx559->SetBinContent(3,0.0002886772);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx559->SetBinContent(4,0.002211026);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx559->SetBinContent(5,0.007256486);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx559->SetBinContent(6,0.02042976);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx559->SetBinContent(7,0.03799898);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx559->SetBinContent(8,0.0309653);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx559->SetBinContent(9,0.03767347);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx559->SetBinContent(10,0.03889598);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx559->SetBinContent(11,0.03447642);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx559->SetBinContent(12,0.03625741);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx559->SetBinContent(13,0.03912409);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx559->SetBinContent(14,0.02493068);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx559->SetBinContent(15,0.0116561);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx559->SetBinContent(16,0.01108117);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx559->SetBinContent(17,0.01173654);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx559->SetBinContent(18,0.007114632);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx559->SetBinContent(19,0.001393731);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx559->SetBinContent(20,0.001339475);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx559->SetBinContent(21,0.002087682);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx559->SetBinContent(23,0.0001149743);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx559->SetBinContent(28,3.879855e-08);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx559->SetBinContent(34,2.647707e-11);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx559->SetBinError(3,0.0002886772);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx559->SetBinError(4,0.001765777);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx559->SetBinError(5,0.002947784);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx559->SetBinError(6,0.005669631);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx559->SetBinError(7,0.007726388);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx559->SetBinError(8,0.00615497);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx559->SetBinError(9,0.006994094);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx559->SetBinError(10,0.007302342);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx559->SetBinError(11,0.006484093);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx559->SetBinError(12,0.006592184);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx559->SetBinError(13,0.007309751);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx559->SetBinError(14,0.005323064);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx559->SetBinError(15,0.003935207);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx559->SetBinError(16,0.003557071);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx559->SetBinError(17,0.003691333);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx559->SetBinError(18,0.002921155);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx559->SetBinError(19,0.0008091457);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx559->SetBinError(20,0.0009011945);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx559->SetBinError(21,0.001476899);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx559->SetBinError(23,0.0001149743);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx559->SetBinError(28,3.876616e-08);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx559->SetBinError(34,2.647707e-11);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx559->SetEntries(471);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx559->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx559->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx559->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx559->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx559->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx559->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx559->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx559->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx559->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx559->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx559->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx559->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx559->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx559->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx559->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx->Add(new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx,"");
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx->Draw("hist same noclear");
   
   Double_t _fx3111[40] = {
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
   Double_t _fy3111[40] = {
   0,
   0.00270524,
   0.0171767,
   0.03226814,
   0.0973409,
   0.3566138,
   0.8383704,
   1.256795,
   0.5856894,
   0.4278601,
   1.819496,
   0.8116831,
   0.9981264,
   0.8583309,
   0.4119278,
   0.1196496,
   0.08933993,
   0.09870669,
   0.01555202,
   0.01630527,
   0.07974815,
   0.01130063,
   0.001932487,
   1.521721e-06,
   0.003045879,
   0.000345352,
   0,
   0,
   0,
   0,
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
   Double_t _felx3111[40] = {
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
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
   Double_t _fely3111[40] = {
   0,
   0.003826809,
   0.01236817,
   0.01575463,
   0.0282672,
   0.1677606,
   0.6152807,
   0.7998082,
   0.2204634,
   0.2843796,
   1.004319,
   0.4627541,
   0.4437993,
   0.7510779,
   0.2730383,
   0.02759801,
   0.06001096,
   0.05027727,
   0.006864413,
   0.009564601,
   0.0603933,
   0.005822584,
   0.001933439,
   1.528923e-06,
   0.002255274,
   0.0003202025,
   0,
   0,
   0,
   0,
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
   Double_t _fehx3111[40] = {
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
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
   Double_t _fehy3111[40] = {
   0,
   0.003826812,
   0.01236658,
   0.01574465,
   0.02821676,
   0.1677414,
   0.7018053,
   0.8014452,
   0.6635936,
   0.09537788,
   1.004304,
   0.7524138,
   0.4434983,
   0.751061,
   0.2730184,
   0.02741955,
   0.05992987,
   0.0502223,
   0.00685831,
   0.009565297,
   0.06039112,
   0.005821637,
   0.001932174,
   1.532244e-06,
   0.00225341,
   0.0003202027,
   0,
   0,
   0,
   0,
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
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(40,_fx3111,_fy3111,_felx3111,_fehx3111,_fely3111,_fehy3111);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(12);
   grae->SetFillStyle(3004);
   grae->SetLineColor(12);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3111 = new TH1F("Graph_Graph3111","",100,0,44);
   Graph_Graph3111->SetMinimum(-0.2836138);
   Graph_Graph3111->SetMaximum(3.106293);
   Graph_Graph3111->SetDirectory(0);
   Graph_Graph3111->SetStats(0);
   Graph_Graph3111->SetLineStyle(0);
   Graph_Graph3111->SetMarkerStyle(20);
   Graph_Graph3111->GetXaxis()->SetLabelFont(42);
   Graph_Graph3111->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3111->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3111->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3111->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3111->GetXaxis()->SetTitleFont(42);
   Graph_Graph3111->GetYaxis()->SetLabelFont(42);
   Graph_Graph3111->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3111->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3111->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3111->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3111->GetYaxis()->SetTitleFont(42);
   Graph_Graph3111->GetZaxis()->SetLabelFont(42);
   Graph_Graph3111->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3111->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3111->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3111->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3111);
   
   grae->Draw("2");
   
   Double_t _fx3112[40] = {
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
   Double_t _fy3112[40] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   1,
   2,
   1,
   0,
   2,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t _felx3112[40] = {
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
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
   Double_t _fely3112[40] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0.8272524,
   1.29183,
   0.8272524,
   0,
   1.29183,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t _fehx3112[40] = {
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
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
   Double_t _fehy3112[40] = {
   1.147908,
   1.147908,
   1.147908,
   1.147908,
   1.147908,
   1.147908,
   1.147908,
   2.29957,
   2.63791,
   2.29957,
   1.147908,
   2.63791,
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
   grae = new TGraphAsymmErrors(40,_fx3112,_fy3112,_felx3112,_fehx3112,_fely3112,_fehy3112);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(1);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3112 = new TH1F("Graph_Graph3112","",100,0,44);
   Graph_Graph3112->SetMinimum(0);
   Graph_Graph3112->SetMaximum(5.101701);
   Graph_Graph3112->SetDirectory(0);
   Graph_Graph3112->SetStats(0);
   Graph_Graph3112->SetLineStyle(0);
   Graph_Graph3112->SetMarkerStyle(20);
   Graph_Graph3112->GetXaxis()->SetLabelFont(42);
   Graph_Graph3112->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3112->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3112->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3112->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3112->GetXaxis()->SetTitleFont(42);
   Graph_Graph3112->GetYaxis()->SetLabelFont(42);
   Graph_Graph3112->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3112->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3112->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3112->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3112->GetYaxis()->SetTitleFont(42);
   Graph_Graph3112->GetZaxis()->SetLabelFont(42);
   Graph_Graph3112->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3112->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3112->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3112->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3112);
   
   grae->Draw("p0");
   
   TLegend *leg = new TLegend(0.2,0.7,0.8,0.9,NULL,"brNDC");
   leg->SetTextFont(62);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx","Data","EPL");
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
   entry=leg->AddEntry("new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx","Data","EPL");
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
   
   TH1F *hframe_copy560 = new TH1F("hframe_copy560","",1000,0,40);
   hframe_copy560->SetMinimum(0);
   hframe_copy560->SetMaximum(8.535534);
   hframe_copy560->SetDirectory(0);
   hframe_copy560->SetStats(0);
   hframe_copy560->SetLineStyle(0);
   hframe_copy560->SetMarkerStyle(20);
   hframe_copy560->GetXaxis()->SetTitle("nvtx");
   hframe_copy560->GetXaxis()->SetNdivisions(506);
   hframe_copy560->GetXaxis()->SetLabelFont(42);
   hframe_copy560->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy560->GetXaxis()->SetLabelSize(0.05);
   hframe_copy560->GetXaxis()->SetTitleSize(0.06);
   hframe_copy560->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy560->GetXaxis()->SetTitleFont(42);
   hframe_copy560->GetYaxis()->SetTitle("Events");
   hframe_copy560->GetYaxis()->SetLabelFont(42);
   hframe_copy560->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy560->GetYaxis()->SetLabelSize(0.05);
   hframe_copy560->GetYaxis()->SetTitleSize(0.06);
   hframe_copy560->GetYaxis()->SetTitleOffset(1.25);
   hframe_copy560->GetYaxis()->SetTitleFont(42);
   hframe_copy560->GetZaxis()->SetLabelFont(42);
   hframe_copy560->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy560->GetZaxis()->SetLabelSize(0.05);
   hframe_copy560->GetZaxis()->SetTitleSize(0.06);
   hframe_copy560->GetZaxis()->SetTitleFont(42);
   hframe_copy560->Draw("sameaxis");
   ccwh3l_MET_JetV_ZVeto_mll_13TeV_nvtx->Modified();
   ccwh3l_MET_JetV_ZVeto_mll_13TeV_nvtx->cd();
   ccwh3l_MET_JetV_ZVeto_mll_13TeV_nvtx->SetSelected(ccwh3l_MET_JetV_ZVeto_mll_13TeV_nvtx);
}
