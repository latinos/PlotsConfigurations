void c_wh3l_zg_13TeV_nvtx()
{
//=========Macro generated from canvas: ccwh3l_zg_13TeV_nvtx/cc
//=========  (Tue Jun 28 02:22:56 2016) by ROOT version6.02/13
   TCanvas *ccwh3l_zg_13TeV_nvtx = new TCanvas("ccwh3l_zg_13TeV_nvtx", "cc",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   ccwh3l_zg_13TeV_nvtx->SetHighLightColor(2);
   ccwh3l_zg_13TeV_nvtx->Range(-8,-9.2581,42,61.95806);
   ccwh3l_zg_13TeV_nvtx->SetFillColor(0);
   ccwh3l_zg_13TeV_nvtx->SetBorderMode(0);
   ccwh3l_zg_13TeV_nvtx->SetBorderSize(2);
   ccwh3l_zg_13TeV_nvtx->SetTickx(1);
   ccwh3l_zg_13TeV_nvtx->SetTicky(1);
   ccwh3l_zg_13TeV_nvtx->SetLeftMargin(0.16);
   ccwh3l_zg_13TeV_nvtx->SetRightMargin(0.04);
   ccwh3l_zg_13TeV_nvtx->SetTopMargin(0.05);
   ccwh3l_zg_13TeV_nvtx->SetBottomMargin(0.13);
   ccwh3l_zg_13TeV_nvtx->SetFrameFillStyle(0);
   ccwh3l_zg_13TeV_nvtx->SetFrameBorderMode(0);
   ccwh3l_zg_13TeV_nvtx->SetFrameFillStyle(0);
   ccwh3l_zg_13TeV_nvtx->SetFrameBorderMode(0);
   
   TH1F *hframe201 = new TH1F("hframe201","",1000,0,40);
   hframe201->SetMinimum(0);
   hframe201->SetMaximum(58.39725);
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
   
   THStack *thsBackground_grouped_wh3l_zg_13TeV_nvtx = new THStack();
   thsBackground_grouped_wh3l_zg_13TeV_nvtx->SetName("thsBackground_grouped_wh3l_zg_13TeV_nvtx");
   thsBackground_grouped_wh3l_zg_13TeV_nvtx->SetTitle("thsBackground_grouped_wh3l_zg_13TeV_nvtx");
   
   TH1F *thsBackground_grouped_wh3l_zg_13TeV_nvtx_stack_41 = new TH1F("thsBackground_grouped_wh3l_zg_13TeV_nvtx_stack_41","thsBackground_grouped_wh3l_zg_13TeV_nvtx",40,0,40);
   thsBackground_grouped_wh3l_zg_13TeV_nvtx_stack_41->SetMinimum(-0.5037822);
   thsBackground_grouped_wh3l_zg_13TeV_nvtx_stack_41->SetMaximum(17.10252);
   thsBackground_grouped_wh3l_zg_13TeV_nvtx_stack_41->SetDirectory(0);
   thsBackground_grouped_wh3l_zg_13TeV_nvtx_stack_41->SetStats(0);
   thsBackground_grouped_wh3l_zg_13TeV_nvtx_stack_41->SetLineStyle(0);
   thsBackground_grouped_wh3l_zg_13TeV_nvtx_stack_41->SetMarkerStyle(20);
   thsBackground_grouped_wh3l_zg_13TeV_nvtx_stack_41->GetXaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_nvtx_stack_41->GetXaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_zg_13TeV_nvtx_stack_41->GetXaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_zg_13TeV_nvtx_stack_41->GetXaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_zg_13TeV_nvtx_stack_41->GetXaxis()->SetTitleOffset(0.9);
   thsBackground_grouped_wh3l_zg_13TeV_nvtx_stack_41->GetXaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_nvtx_stack_41->GetYaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_nvtx_stack_41->GetYaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_zg_13TeV_nvtx_stack_41->GetYaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_zg_13TeV_nvtx_stack_41->GetYaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_zg_13TeV_nvtx_stack_41->GetYaxis()->SetTitleOffset(1.25);
   thsBackground_grouped_wh3l_zg_13TeV_nvtx_stack_41->GetYaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_nvtx_stack_41->GetZaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_nvtx_stack_41->GetZaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_zg_13TeV_nvtx_stack_41->GetZaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_zg_13TeV_nvtx_stack_41->GetZaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_zg_13TeV_nvtx_stack_41->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_nvtx->SetHistogram(thsBackground_grouped_wh3l_zg_13TeV_nvtx_stack_41);
   
   
   TH1D *new_histo_group_Fake_wh3l_zg_13TeV_nvtx202 = new TH1D("new_histo_group_Fake_wh3l_zg_13TeV_nvtx202","histo_Fake",40,0,40);
   new_histo_group_Fake_wh3l_zg_13TeV_nvtx202->SetBinContent(2,-0.007202128);
   new_histo_group_Fake_wh3l_zg_13TeV_nvtx202->SetBinContent(3,0.005392462);
   new_histo_group_Fake_wh3l_zg_13TeV_nvtx202->SetBinContent(4,0.4043149);
   new_histo_group_Fake_wh3l_zg_13TeV_nvtx202->SetBinContent(5,0.2989986);
   new_histo_group_Fake_wh3l_zg_13TeV_nvtx202->SetBinContent(6,1.393944);
   new_histo_group_Fake_wh3l_zg_13TeV_nvtx202->SetBinContent(7,2.475011);
   new_histo_group_Fake_wh3l_zg_13TeV_nvtx202->SetBinContent(8,0.7886053);
   new_histo_group_Fake_wh3l_zg_13TeV_nvtx202->SetBinContent(9,2.164859);
   new_histo_group_Fake_wh3l_zg_13TeV_nvtx202->SetBinContent(10,2.3099);
   new_histo_group_Fake_wh3l_zg_13TeV_nvtx202->SetBinContent(11,4.317569);
   new_histo_group_Fake_wh3l_zg_13TeV_nvtx202->SetBinContent(12,2.735455);
   new_histo_group_Fake_wh3l_zg_13TeV_nvtx202->SetBinContent(13,2.497513);
   new_histo_group_Fake_wh3l_zg_13TeV_nvtx202->SetBinContent(14,1.019556);
   new_histo_group_Fake_wh3l_zg_13TeV_nvtx202->SetBinContent(15,1.300673);
   new_histo_group_Fake_wh3l_zg_13TeV_nvtx202->SetBinContent(16,0.2801187);
   new_histo_group_Fake_wh3l_zg_13TeV_nvtx202->SetBinContent(17,1.317588);
   new_histo_group_Fake_wh3l_zg_13TeV_nvtx202->SetBinContent(18,0.7451644);
   new_histo_group_Fake_wh3l_zg_13TeV_nvtx202->SetBinContent(19,-0.1307349);
   new_histo_group_Fake_wh3l_zg_13TeV_nvtx202->SetBinContent(21,0.1384125);
   new_histo_group_Fake_wh3l_zg_13TeV_nvtx202->SetBinContent(22,0.07181522);
   new_histo_group_Fake_wh3l_zg_13TeV_nvtx202->SetBinError(2,0.007202128);
   new_histo_group_Fake_wh3l_zg_13TeV_nvtx202->SetBinError(3,0.1353779);
   new_histo_group_Fake_wh3l_zg_13TeV_nvtx202->SetBinError(4,0.2068983);
   new_histo_group_Fake_wh3l_zg_13TeV_nvtx202->SetBinError(5,0.8027808);
   new_histo_group_Fake_wh3l_zg_13TeV_nvtx202->SetBinError(6,0.9638045);
   new_histo_group_Fake_wh3l_zg_13TeV_nvtx202->SetBinError(7,1.329659);
   new_histo_group_Fake_wh3l_zg_13TeV_nvtx202->SetBinError(8,1.079897);
   new_histo_group_Fake_wh3l_zg_13TeV_nvtx202->SetBinError(9,1.592571);
   new_histo_group_Fake_wh3l_zg_13TeV_nvtx202->SetBinError(10,1.357628);
   new_histo_group_Fake_wh3l_zg_13TeV_nvtx202->SetBinError(11,1.320512);
   new_histo_group_Fake_wh3l_zg_13TeV_nvtx202->SetBinError(12,1.704131);
   new_histo_group_Fake_wh3l_zg_13TeV_nvtx202->SetBinError(13,1.547232);
   new_histo_group_Fake_wh3l_zg_13TeV_nvtx202->SetBinError(14,0.7419277);
   new_histo_group_Fake_wh3l_zg_13TeV_nvtx202->SetBinError(15,0.8817539);
   new_histo_group_Fake_wh3l_zg_13TeV_nvtx202->SetBinError(16,0.4295951);
   new_histo_group_Fake_wh3l_zg_13TeV_nvtx202->SetBinError(17,0.8115049);
   new_histo_group_Fake_wh3l_zg_13TeV_nvtx202->SetBinError(18,0.5988731);
   new_histo_group_Fake_wh3l_zg_13TeV_nvtx202->SetBinError(19,0.2174466);
   new_histo_group_Fake_wh3l_zg_13TeV_nvtx202->SetBinError(21,0.1384125);
   new_histo_group_Fake_wh3l_zg_13TeV_nvtx202->SetBinError(22,0.07181522);
   new_histo_group_Fake_wh3l_zg_13TeV_nvtx202->SetEntries(442);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_zg_13TeV_nvtx202->SetFillColor(ci);
   new_histo_group_Fake_wh3l_zg_13TeV_nvtx202->SetFillStyle(3001);

   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_zg_13TeV_nvtx202->SetLineColor(ci);
   new_histo_group_Fake_wh3l_zg_13TeV_nvtx202->GetXaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_zg_13TeV_nvtx202->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_zg_13TeV_nvtx202->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_zg_13TeV_nvtx202->GetXaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_zg_13TeV_nvtx202->GetYaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_zg_13TeV_nvtx202->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_zg_13TeV_nvtx202->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_zg_13TeV_nvtx202->GetYaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_zg_13TeV_nvtx202->GetZaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_zg_13TeV_nvtx202->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_zg_13TeV_nvtx202->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_zg_13TeV_nvtx202->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_nvtx->Add(new_histo_group_Fake_wh3l_zg_13TeV_nvtx,"");
   
   TH1D *new_histo_group_WW_wh3l_zg_13TeV_nvtx203 = new TH1D("new_histo_group_WW_wh3l_zg_13TeV_nvtx203","histo_WW",40,0,40);
   new_histo_group_WW_wh3l_zg_13TeV_nvtx203->SetBinContent(16,0.009961222);
   new_histo_group_WW_wh3l_zg_13TeV_nvtx203->SetBinError(16,0.009961222);
   new_histo_group_WW_wh3l_zg_13TeV_nvtx203->SetEntries(1);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_zg_13TeV_nvtx203->SetFillColor(ci);
   new_histo_group_WW_wh3l_zg_13TeV_nvtx203->SetFillStyle(3001);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_zg_13TeV_nvtx203->SetLineColor(ci);
   new_histo_group_WW_wh3l_zg_13TeV_nvtx203->GetXaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_zg_13TeV_nvtx203->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_zg_13TeV_nvtx203->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_zg_13TeV_nvtx203->GetXaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_zg_13TeV_nvtx203->GetYaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_zg_13TeV_nvtx203->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_zg_13TeV_nvtx203->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_zg_13TeV_nvtx203->GetYaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_zg_13TeV_nvtx203->GetZaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_zg_13TeV_nvtx203->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_zg_13TeV_nvtx203->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_zg_13TeV_nvtx203->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_nvtx->Add(new_histo_group_WW_wh3l_zg_13TeV_nvtx,"");
   
   TH1D *new_histo_group_VVV_wh3l_zg_13TeV_nvtx204 = new TH1D("new_histo_group_VVV_wh3l_zg_13TeV_nvtx204","histo_VVV",40,0,40);
   new_histo_group_VVV_wh3l_zg_13TeV_nvtx204->SetBinContent(15,-0.0006863608);
   new_histo_group_VVV_wh3l_zg_13TeV_nvtx204->SetBinError(15,0.0006863608);
   new_histo_group_VVV_wh3l_zg_13TeV_nvtx204->SetEntries(1);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_zg_13TeV_nvtx204->SetFillColor(ci);
   new_histo_group_VVV_wh3l_zg_13TeV_nvtx204->SetFillStyle(3001);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_zg_13TeV_nvtx204->SetLineColor(ci);
   new_histo_group_VVV_wh3l_zg_13TeV_nvtx204->GetXaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_zg_13TeV_nvtx204->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_zg_13TeV_nvtx204->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_zg_13TeV_nvtx204->GetXaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_zg_13TeV_nvtx204->GetYaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_zg_13TeV_nvtx204->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_zg_13TeV_nvtx204->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_zg_13TeV_nvtx204->GetYaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_zg_13TeV_nvtx204->GetZaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_zg_13TeV_nvtx204->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_zg_13TeV_nvtx204->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_zg_13TeV_nvtx204->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_nvtx->Add(new_histo_group_VVV_wh3l_zg_13TeV_nvtx,"");
   
   TH1D *new_histo_group_Vg_wh3l_zg_13TeV_nvtx205 = new TH1D("new_histo_group_Vg_wh3l_zg_13TeV_nvtx205","histo_Vg",40,0,40);
   new_histo_group_Vg_wh3l_zg_13TeV_nvtx205->SetBinContent(3,0.2249779);
   new_histo_group_Vg_wh3l_zg_13TeV_nvtx205->SetBinContent(4,0.7361533);
   new_histo_group_Vg_wh3l_zg_13TeV_nvtx205->SetBinContent(5,4.26918);
   new_histo_group_Vg_wh3l_zg_13TeV_nvtx205->SetBinContent(6,4.958249);
   new_histo_group_Vg_wh3l_zg_13TeV_nvtx205->SetBinContent(7,6.584903);
   new_histo_group_Vg_wh3l_zg_13TeV_nvtx205->SetBinContent(8,10.03869);
   new_histo_group_Vg_wh3l_zg_13TeV_nvtx205->SetBinContent(9,13.91206);
   new_histo_group_Vg_wh3l_zg_13TeV_nvtx205->SetBinContent(10,13.45891);
   new_histo_group_Vg_wh3l_zg_13TeV_nvtx205->SetBinContent(11,10.14052);
   new_histo_group_Vg_wh3l_zg_13TeV_nvtx205->SetBinContent(12,11.01454);
   new_histo_group_Vg_wh3l_zg_13TeV_nvtx205->SetBinContent(13,8.398781);
   new_histo_group_Vg_wh3l_zg_13TeV_nvtx205->SetBinContent(14,6.827518);
   new_histo_group_Vg_wh3l_zg_13TeV_nvtx205->SetBinContent(15,4.41085);
   new_histo_group_Vg_wh3l_zg_13TeV_nvtx205->SetBinContent(16,2.327506);
   new_histo_group_Vg_wh3l_zg_13TeV_nvtx205->SetBinContent(17,1.222704);
   new_histo_group_Vg_wh3l_zg_13TeV_nvtx205->SetBinContent(18,0.6441004);
   new_histo_group_Vg_wh3l_zg_13TeV_nvtx205->SetBinContent(19,0.4046562);
   new_histo_group_Vg_wh3l_zg_13TeV_nvtx205->SetBinContent(20,0.2940138);
   new_histo_group_Vg_wh3l_zg_13TeV_nvtx205->SetBinContent(21,0.193133);
   new_histo_group_Vg_wh3l_zg_13TeV_nvtx205->SetBinContent(22,0.1819512);
   new_histo_group_Vg_wh3l_zg_13TeV_nvtx205->SetBinContent(23,2.677784e-06);
   new_histo_group_Vg_wh3l_zg_13TeV_nvtx205->SetBinContent(24,0.02435116);
   new_histo_group_Vg_wh3l_zg_13TeV_nvtx205->SetBinContent(25,-0.07424437);
   new_histo_group_Vg_wh3l_zg_13TeV_nvtx205->SetBinContent(26,1.107037e-08);
   new_histo_group_Vg_wh3l_zg_13TeV_nvtx205->SetBinContent(28,6.521099e-07);
   new_histo_group_Vg_wh3l_zg_13TeV_nvtx205->SetBinContent(34,1.905084e-09);
   new_histo_group_Vg_wh3l_zg_13TeV_nvtx205->SetBinError(3,0.159919);
   new_histo_group_Vg_wh3l_zg_13TeV_nvtx205->SetBinError(4,0.4517781);
   new_histo_group_Vg_wh3l_zg_13TeV_nvtx205->SetBinError(5,0.820459);
   new_histo_group_Vg_wh3l_zg_13TeV_nvtx205->SetBinError(6,0.9704715);
   new_histo_group_Vg_wh3l_zg_13TeV_nvtx205->SetBinError(7,0.9738365);
   new_histo_group_Vg_wh3l_zg_13TeV_nvtx205->SetBinError(8,1.294576);
   new_histo_group_Vg_wh3l_zg_13TeV_nvtx205->SetBinError(9,1.38881);
   new_histo_group_Vg_wh3l_zg_13TeV_nvtx205->SetBinError(10,1.412691);
   new_histo_group_Vg_wh3l_zg_13TeV_nvtx205->SetBinError(11,1.223931);
   new_histo_group_Vg_wh3l_zg_13TeV_nvtx205->SetBinError(12,1.24243);
   new_histo_group_Vg_wh3l_zg_13TeV_nvtx205->SetBinError(13,1.020274);
   new_histo_group_Vg_wh3l_zg_13TeV_nvtx205->SetBinError(14,0.8784798);
   new_histo_group_Vg_wh3l_zg_13TeV_nvtx205->SetBinError(15,0.7000913);
   new_histo_group_Vg_wh3l_zg_13TeV_nvtx205->SetBinError(16,0.5165091);
   new_histo_group_Vg_wh3l_zg_13TeV_nvtx205->SetBinError(17,0.5004262);
   new_histo_group_Vg_wh3l_zg_13TeV_nvtx205->SetBinError(18,0.273481);
   new_histo_group_Vg_wh3l_zg_13TeV_nvtx205->SetBinError(19,0.1882631);
   new_histo_group_Vg_wh3l_zg_13TeV_nvtx205->SetBinError(20,0.1758838);
   new_histo_group_Vg_wh3l_zg_13TeV_nvtx205->SetBinError(21,0.09692765);
   new_histo_group_Vg_wh3l_zg_13TeV_nvtx205->SetBinError(22,0.1200854);
   new_histo_group_Vg_wh3l_zg_13TeV_nvtx205->SetBinError(23,2.677784e-06);
   new_histo_group_Vg_wh3l_zg_13TeV_nvtx205->SetBinError(24,0.02433177);
   new_histo_group_Vg_wh3l_zg_13TeV_nvtx205->SetBinError(25,0.074235);
   new_histo_group_Vg_wh3l_zg_13TeV_nvtx205->SetBinError(26,1.107037e-08);
   new_histo_group_Vg_wh3l_zg_13TeV_nvtx205->SetBinError(28,6.521099e-07);
   new_histo_group_Vg_wh3l_zg_13TeV_nvtx205->SetBinError(34,1.905084e-09);
   new_histo_group_Vg_wh3l_zg_13TeV_nvtx205->SetEntries(1327);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_zg_13TeV_nvtx205->SetFillColor(ci);
   new_histo_group_Vg_wh3l_zg_13TeV_nvtx205->SetFillStyle(3001);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_zg_13TeV_nvtx205->SetLineColor(ci);
   new_histo_group_Vg_wh3l_zg_13TeV_nvtx205->GetXaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_zg_13TeV_nvtx205->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_zg_13TeV_nvtx205->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_zg_13TeV_nvtx205->GetXaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_zg_13TeV_nvtx205->GetYaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_zg_13TeV_nvtx205->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_zg_13TeV_nvtx205->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_zg_13TeV_nvtx205->GetYaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_zg_13TeV_nvtx205->GetZaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_zg_13TeV_nvtx205->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_zg_13TeV_nvtx205->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_zg_13TeV_nvtx205->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_nvtx->Add(new_histo_group_Vg_wh3l_zg_13TeV_nvtx,"");
   
   TH1D *new_histo_group_ZZ_wh3l_zg_13TeV_nvtx206 = new TH1D("new_histo_group_ZZ_wh3l_zg_13TeV_nvtx206","histo_ZZ",40,0,40);
   new_histo_group_ZZ_wh3l_zg_13TeV_nvtx206->SetBinContent(5,0.03249944);
   new_histo_group_ZZ_wh3l_zg_13TeV_nvtx206->SetBinContent(6,0.04202887);
   new_histo_group_ZZ_wh3l_zg_13TeV_nvtx206->SetBinContent(7,0.08642198);
   new_histo_group_ZZ_wh3l_zg_13TeV_nvtx206->SetBinContent(8,0.03645855);
   new_histo_group_ZZ_wh3l_zg_13TeV_nvtx206->SetBinContent(9,0.04575732);
   new_histo_group_ZZ_wh3l_zg_13TeV_nvtx206->SetBinContent(10,0.2551516);
   new_histo_group_ZZ_wh3l_zg_13TeV_nvtx206->SetBinContent(12,0.1136824);
   new_histo_group_ZZ_wh3l_zg_13TeV_nvtx206->SetBinContent(13,0.07232913);
   new_histo_group_ZZ_wh3l_zg_13TeV_nvtx206->SetBinContent(14,0.04959978);
   new_histo_group_ZZ_wh3l_zg_13TeV_nvtx206->SetBinContent(22,0.002412119);
   new_histo_group_ZZ_wh3l_zg_13TeV_nvtx206->SetBinError(5,0.03249944);
   new_histo_group_ZZ_wh3l_zg_13TeV_nvtx206->SetBinError(6,0.04202887);
   new_histo_group_ZZ_wh3l_zg_13TeV_nvtx206->SetBinError(7,0.06129487);
   new_histo_group_ZZ_wh3l_zg_13TeV_nvtx206->SetBinError(8,0.03645855);
   new_histo_group_ZZ_wh3l_zg_13TeV_nvtx206->SetBinError(9,0.04575732);
   new_histo_group_ZZ_wh3l_zg_13TeV_nvtx206->SetBinError(10,0.1055395);
   new_histo_group_ZZ_wh3l_zg_13TeV_nvtx206->SetBinError(12,0.06572274);
   new_histo_group_ZZ_wh3l_zg_13TeV_nvtx206->SetBinError(13,0.05212968);
   new_histo_group_ZZ_wh3l_zg_13TeV_nvtx206->SetBinError(14,0.03545384);
   new_histo_group_ZZ_wh3l_zg_13TeV_nvtx206->SetBinError(22,0.002412119);
   new_histo_group_ZZ_wh3l_zg_13TeV_nvtx206->SetEntries(20);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_zg_13TeV_nvtx206->SetFillColor(ci);
   new_histo_group_ZZ_wh3l_zg_13TeV_nvtx206->SetFillStyle(3001);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_zg_13TeV_nvtx206->SetLineColor(ci);
   new_histo_group_ZZ_wh3l_zg_13TeV_nvtx206->GetXaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_zg_13TeV_nvtx206->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_zg_13TeV_nvtx206->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_zg_13TeV_nvtx206->GetXaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_zg_13TeV_nvtx206->GetYaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_zg_13TeV_nvtx206->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_zg_13TeV_nvtx206->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_zg_13TeV_nvtx206->GetYaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_zg_13TeV_nvtx206->GetZaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_zg_13TeV_nvtx206->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_zg_13TeV_nvtx206->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_zg_13TeV_nvtx206->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_nvtx->Add(new_histo_group_ZZ_wh3l_zg_13TeV_nvtx,"");
   
   TH1D *new_histo_group_WZ_wh3l_zg_13TeV_nvtx207 = new TH1D("new_histo_group_WZ_wh3l_zg_13TeV_nvtx207","histo_ZZ",40,0,40);
   new_histo_group_WZ_wh3l_zg_13TeV_nvtx207->SetBinContent(5,0.03249944);
   new_histo_group_WZ_wh3l_zg_13TeV_nvtx207->SetBinContent(6,0.04202887);
   new_histo_group_WZ_wh3l_zg_13TeV_nvtx207->SetBinContent(7,0.08642198);
   new_histo_group_WZ_wh3l_zg_13TeV_nvtx207->SetBinContent(8,0.03645855);
   new_histo_group_WZ_wh3l_zg_13TeV_nvtx207->SetBinContent(9,0.04575732);
   new_histo_group_WZ_wh3l_zg_13TeV_nvtx207->SetBinContent(10,0.2551516);
   new_histo_group_WZ_wh3l_zg_13TeV_nvtx207->SetBinContent(12,0.1136824);
   new_histo_group_WZ_wh3l_zg_13TeV_nvtx207->SetBinContent(13,0.07232913);
   new_histo_group_WZ_wh3l_zg_13TeV_nvtx207->SetBinContent(14,0.04959978);
   new_histo_group_WZ_wh3l_zg_13TeV_nvtx207->SetBinContent(22,0.002412119);
   new_histo_group_WZ_wh3l_zg_13TeV_nvtx207->SetBinError(5,0.03249944);
   new_histo_group_WZ_wh3l_zg_13TeV_nvtx207->SetBinError(6,0.04202887);
   new_histo_group_WZ_wh3l_zg_13TeV_nvtx207->SetBinError(7,0.06129487);
   new_histo_group_WZ_wh3l_zg_13TeV_nvtx207->SetBinError(8,0.03645855);
   new_histo_group_WZ_wh3l_zg_13TeV_nvtx207->SetBinError(9,0.04575732);
   new_histo_group_WZ_wh3l_zg_13TeV_nvtx207->SetBinError(10,0.1055395);
   new_histo_group_WZ_wh3l_zg_13TeV_nvtx207->SetBinError(12,0.06572274);
   new_histo_group_WZ_wh3l_zg_13TeV_nvtx207->SetBinError(13,0.05212968);
   new_histo_group_WZ_wh3l_zg_13TeV_nvtx207->SetBinError(14,0.03545384);
   new_histo_group_WZ_wh3l_zg_13TeV_nvtx207->SetBinError(22,0.002412119);
   new_histo_group_WZ_wh3l_zg_13TeV_nvtx207->SetEntries(20);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_zg_13TeV_nvtx207->SetFillColor(ci);
   new_histo_group_WZ_wh3l_zg_13TeV_nvtx207->SetFillStyle(3001);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_zg_13TeV_nvtx207->SetLineColor(ci);
   new_histo_group_WZ_wh3l_zg_13TeV_nvtx207->GetXaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_zg_13TeV_nvtx207->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_zg_13TeV_nvtx207->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_zg_13TeV_nvtx207->GetXaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_zg_13TeV_nvtx207->GetYaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_zg_13TeV_nvtx207->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_zg_13TeV_nvtx207->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_zg_13TeV_nvtx207->GetYaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_zg_13TeV_nvtx207->GetZaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_zg_13TeV_nvtx207->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_zg_13TeV_nvtx207->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_zg_13TeV_nvtx207->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_nvtx->Add(new_histo_group_WZ_wh3l_zg_13TeV_nvtx,"");
   
   TH1D *new_histo_group_Higgs_wh3l_zg_13TeV_nvtx208 = new TH1D("new_histo_group_Higgs_wh3l_zg_13TeV_nvtx208","histo_H_htt",40,0,40);
   new_histo_group_Higgs_wh3l_zg_13TeV_nvtx208->SetBinContent(4,0.0002045297);
   new_histo_group_Higgs_wh3l_zg_13TeV_nvtx208->SetBinContent(5,0.0006294883);
   new_histo_group_Higgs_wh3l_zg_13TeV_nvtx208->SetBinContent(6,0.00442913);
   new_histo_group_Higgs_wh3l_zg_13TeV_nvtx208->SetBinContent(7,0.008026194);
   new_histo_group_Higgs_wh3l_zg_13TeV_nvtx208->SetBinContent(8,0.00992167);
   new_histo_group_Higgs_wh3l_zg_13TeV_nvtx208->SetBinContent(9,0.002891342);
   new_histo_group_Higgs_wh3l_zg_13TeV_nvtx208->SetBinContent(10,0.009007335);
   new_histo_group_Higgs_wh3l_zg_13TeV_nvtx208->SetBinContent(11,0.009512097);
   new_histo_group_Higgs_wh3l_zg_13TeV_nvtx208->SetBinContent(12,0.004873551);
   new_histo_group_Higgs_wh3l_zg_13TeV_nvtx208->SetBinContent(13,0.006442326);
   new_histo_group_Higgs_wh3l_zg_13TeV_nvtx208->SetBinContent(14,0.002774264);
   new_histo_group_Higgs_wh3l_zg_13TeV_nvtx208->SetBinContent(15,-0.0002179468);
   new_histo_group_Higgs_wh3l_zg_13TeV_nvtx208->SetBinContent(16,0.001125788);
   new_histo_group_Higgs_wh3l_zg_13TeV_nvtx208->SetBinContent(17,0.0007073872);
   new_histo_group_Higgs_wh3l_zg_13TeV_nvtx208->SetBinContent(19,0.0002691248);
   new_histo_group_Higgs_wh3l_zg_13TeV_nvtx208->SetBinContent(20,0.0002077542);
   new_histo_group_Higgs_wh3l_zg_13TeV_nvtx208->SetBinContent(31,1.309013e-10);
   new_histo_group_Higgs_wh3l_zg_13TeV_nvtx208->SetBinError(4,0.0002045297);
   new_histo_group_Higgs_wh3l_zg_13TeV_nvtx208->SetBinError(5,0.0004455522);
   new_histo_group_Higgs_wh3l_zg_13TeV_nvtx208->SetBinError(6,0.002450601);
   new_histo_group_Higgs_wh3l_zg_13TeV_nvtx208->SetBinError(7,0.003138833);
   new_histo_group_Higgs_wh3l_zg_13TeV_nvtx208->SetBinError(8,0.003365361);
   new_histo_group_Higgs_wh3l_zg_13TeV_nvtx208->SetBinError(9,0.001272097);
   new_histo_group_Higgs_wh3l_zg_13TeV_nvtx208->SetBinError(10,0.003122395);
   new_histo_group_Higgs_wh3l_zg_13TeV_nvtx208->SetBinError(11,0.003293795);
   new_histo_group_Higgs_wh3l_zg_13TeV_nvtx208->SetBinError(12,0.001734253);
   new_histo_group_Higgs_wh3l_zg_13TeV_nvtx208->SetBinError(13,0.002992579);
   new_histo_group_Higgs_wh3l_zg_13TeV_nvtx208->SetBinError(14,0.001526344);
   new_histo_group_Higgs_wh3l_zg_13TeV_nvtx208->SetBinError(15,0.001098363);
   new_histo_group_Higgs_wh3l_zg_13TeV_nvtx208->SetBinError(16,0.0007316709);
   new_histo_group_Higgs_wh3l_zg_13TeV_nvtx208->SetBinError(17,0.0004111143);
   new_histo_group_Higgs_wh3l_zg_13TeV_nvtx208->SetBinError(19,0.0002691248);
   new_histo_group_Higgs_wh3l_zg_13TeV_nvtx208->SetBinError(20,0.000171931);
   new_histo_group_Higgs_wh3l_zg_13TeV_nvtx208->SetBinError(31,1.309013e-10);
   new_histo_group_Higgs_wh3l_zg_13TeV_nvtx208->SetEntries(136);
   new_histo_group_Higgs_wh3l_zg_13TeV_nvtx208->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_zg_13TeV_nvtx208->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_zg_13TeV_nvtx208->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_zg_13TeV_nvtx208->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_zg_13TeV_nvtx208->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_zg_13TeV_nvtx208->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_zg_13TeV_nvtx208->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_zg_13TeV_nvtx208->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_zg_13TeV_nvtx208->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_zg_13TeV_nvtx208->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_zg_13TeV_nvtx208->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_zg_13TeV_nvtx208->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_zg_13TeV_nvtx208->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_zg_13TeV_nvtx208->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_zg_13TeV_nvtx208->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_nvtx->Add(new_histo_group_Higgs_wh3l_zg_13TeV_nvtx,"");
   thsBackground_grouped_wh3l_zg_13TeV_nvtx->Draw("hist same");
   
   thsSignal_grouped_wh3l_zg_13TeV_nvtx = new THStack();
   thsSignal_grouped_wh3l_zg_13TeV_nvtx->SetName("thsSignal_grouped_wh3l_zg_13TeV_nvtx");
   thsSignal_grouped_wh3l_zg_13TeV_nvtx->SetTitle("thsSignal_grouped_wh3l_zg_13TeV_nvtx");
   
   TH1F *thsSignal_grouped_wh3l_zg_13TeV_nvtx_stack_42 = new TH1F("thsSignal_grouped_wh3l_zg_13TeV_nvtx_stack_42","thsSignal_grouped_wh3l_zg_13TeV_nvtx",40,0,40);
   thsSignal_grouped_wh3l_zg_13TeV_nvtx_stack_42->SetMinimum(-0.00131631);
   thsSignal_grouped_wh3l_zg_13TeV_nvtx_stack_42->SetMaximum(0.01395138);
   thsSignal_grouped_wh3l_zg_13TeV_nvtx_stack_42->SetDirectory(0);
   thsSignal_grouped_wh3l_zg_13TeV_nvtx_stack_42->SetStats(0);
   thsSignal_grouped_wh3l_zg_13TeV_nvtx_stack_42->SetLineStyle(0);
   thsSignal_grouped_wh3l_zg_13TeV_nvtx_stack_42->SetMarkerStyle(20);
   thsSignal_grouped_wh3l_zg_13TeV_nvtx_stack_42->GetXaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_zg_13TeV_nvtx_stack_42->GetXaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_zg_13TeV_nvtx_stack_42->GetXaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_zg_13TeV_nvtx_stack_42->GetXaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_zg_13TeV_nvtx_stack_42->GetXaxis()->SetTitleOffset(0.9);
   thsSignal_grouped_wh3l_zg_13TeV_nvtx_stack_42->GetXaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_zg_13TeV_nvtx_stack_42->GetYaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_zg_13TeV_nvtx_stack_42->GetYaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_zg_13TeV_nvtx_stack_42->GetYaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_zg_13TeV_nvtx_stack_42->GetYaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_zg_13TeV_nvtx_stack_42->GetYaxis()->SetTitleOffset(1.25);
   thsSignal_grouped_wh3l_zg_13TeV_nvtx_stack_42->GetYaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_zg_13TeV_nvtx_stack_42->GetZaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_zg_13TeV_nvtx_stack_42->GetZaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_zg_13TeV_nvtx_stack_42->GetZaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_zg_13TeV_nvtx_stack_42->GetZaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_zg_13TeV_nvtx_stack_42->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_zg_13TeV_nvtx->SetHistogram(thsSignal_grouped_wh3l_zg_13TeV_nvtx_stack_42);
   
   
   TH1D *new_histo_group_Higgs_wh3l_zg_13TeV_nvtx209 = new TH1D("new_histo_group_Higgs_wh3l_zg_13TeV_nvtx209","histo_H_htt",40,0,40);
   new_histo_group_Higgs_wh3l_zg_13TeV_nvtx209->SetBinContent(4,0.0002045297);
   new_histo_group_Higgs_wh3l_zg_13TeV_nvtx209->SetBinContent(5,0.0006294883);
   new_histo_group_Higgs_wh3l_zg_13TeV_nvtx209->SetBinContent(6,0.00442913);
   new_histo_group_Higgs_wh3l_zg_13TeV_nvtx209->SetBinContent(7,0.008026194);
   new_histo_group_Higgs_wh3l_zg_13TeV_nvtx209->SetBinContent(8,0.00992167);
   new_histo_group_Higgs_wh3l_zg_13TeV_nvtx209->SetBinContent(9,0.002891342);
   new_histo_group_Higgs_wh3l_zg_13TeV_nvtx209->SetBinContent(10,0.009007335);
   new_histo_group_Higgs_wh3l_zg_13TeV_nvtx209->SetBinContent(11,0.009512097);
   new_histo_group_Higgs_wh3l_zg_13TeV_nvtx209->SetBinContent(12,0.004873551);
   new_histo_group_Higgs_wh3l_zg_13TeV_nvtx209->SetBinContent(13,0.006442326);
   new_histo_group_Higgs_wh3l_zg_13TeV_nvtx209->SetBinContent(14,0.002774264);
   new_histo_group_Higgs_wh3l_zg_13TeV_nvtx209->SetBinContent(15,-0.0002179468);
   new_histo_group_Higgs_wh3l_zg_13TeV_nvtx209->SetBinContent(16,0.001125788);
   new_histo_group_Higgs_wh3l_zg_13TeV_nvtx209->SetBinContent(17,0.0007073872);
   new_histo_group_Higgs_wh3l_zg_13TeV_nvtx209->SetBinContent(19,0.0002691248);
   new_histo_group_Higgs_wh3l_zg_13TeV_nvtx209->SetBinContent(20,0.0002077542);
   new_histo_group_Higgs_wh3l_zg_13TeV_nvtx209->SetBinContent(31,1.309013e-10);
   new_histo_group_Higgs_wh3l_zg_13TeV_nvtx209->SetBinError(4,0.0002045297);
   new_histo_group_Higgs_wh3l_zg_13TeV_nvtx209->SetBinError(5,0.0004455522);
   new_histo_group_Higgs_wh3l_zg_13TeV_nvtx209->SetBinError(6,0.002450601);
   new_histo_group_Higgs_wh3l_zg_13TeV_nvtx209->SetBinError(7,0.003138833);
   new_histo_group_Higgs_wh3l_zg_13TeV_nvtx209->SetBinError(8,0.003365361);
   new_histo_group_Higgs_wh3l_zg_13TeV_nvtx209->SetBinError(9,0.001272097);
   new_histo_group_Higgs_wh3l_zg_13TeV_nvtx209->SetBinError(10,0.003122395);
   new_histo_group_Higgs_wh3l_zg_13TeV_nvtx209->SetBinError(11,0.003293795);
   new_histo_group_Higgs_wh3l_zg_13TeV_nvtx209->SetBinError(12,0.001734253);
   new_histo_group_Higgs_wh3l_zg_13TeV_nvtx209->SetBinError(13,0.002992579);
   new_histo_group_Higgs_wh3l_zg_13TeV_nvtx209->SetBinError(14,0.001526344);
   new_histo_group_Higgs_wh3l_zg_13TeV_nvtx209->SetBinError(15,0.001098363);
   new_histo_group_Higgs_wh3l_zg_13TeV_nvtx209->SetBinError(16,0.0007316709);
   new_histo_group_Higgs_wh3l_zg_13TeV_nvtx209->SetBinError(17,0.0004111143);
   new_histo_group_Higgs_wh3l_zg_13TeV_nvtx209->SetBinError(19,0.0002691248);
   new_histo_group_Higgs_wh3l_zg_13TeV_nvtx209->SetBinError(20,0.000171931);
   new_histo_group_Higgs_wh3l_zg_13TeV_nvtx209->SetBinError(31,1.309013e-10);
   new_histo_group_Higgs_wh3l_zg_13TeV_nvtx209->SetEntries(136);
   new_histo_group_Higgs_wh3l_zg_13TeV_nvtx209->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_zg_13TeV_nvtx209->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_zg_13TeV_nvtx209->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_zg_13TeV_nvtx209->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_zg_13TeV_nvtx209->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_zg_13TeV_nvtx209->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_zg_13TeV_nvtx209->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_zg_13TeV_nvtx209->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_zg_13TeV_nvtx209->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_zg_13TeV_nvtx209->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_zg_13TeV_nvtx209->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_zg_13TeV_nvtx209->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_zg_13TeV_nvtx209->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_zg_13TeV_nvtx209->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_zg_13TeV_nvtx209->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_zg_13TeV_nvtx->Add(new_histo_group_Higgs_wh3l_zg_13TeV_nvtx,"");
   thsSignal_grouped_wh3l_zg_13TeV_nvtx->Draw("hist same noclear");
   
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
   -0.007202128,
   0.2303703,
   1.152554,
   4.657616,
   6.5086,
   9.279551,
   10.9901,
   16.31292,
   16.21635,
   14.61339,
   14.00072,
   11.07503,
   7.976245,
   5.778313,
   2.652398,
   2.549917,
   1.407976,
   0.277751,
   0.2940138,
   0.3374288,
   0.2579254,
   2.677894e-06,
   0.02435116,
   -0.07319475,
   1.107037e-08,
   0,
   6.521099e-07,
   0,
   0,
   0,
   0,
   0,
   1.905084e-09,
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
   0.007519243,
   0.1654309,
   0.678451,
   1.18013,
   2.050303,
   2.511752,
   2.176195,
   3.150588,
   3.012805,
   2.893504,
   3.1617,
   2.757088,
   1.713643,
   1.651607,
   0.8257132,
   1.375668,
   0.9099957,
   0.4115562,
   0.1760629,
   0.2445216,
   0.1973027,
   2.67887e-06,
   0.02434065,
   0.0753113,
   1.107441e-08,
   0,
   6.523476e-07,
   0,
   0,
   0,
   0,
   0,
   1.905778e-09,
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
   0.007519243,
   0.2953638,
   0.6784511,
   1.681169,
   2.050304,
   2.511752,
   2.463934,
   3.150591,
   3.012802,
   2.893505,
   3.1617,
   2.757088,
   1.713643,
   1.651606,
   0.9741598,
   1.375669,
   0.9099957,
   0.325383,
   0.1760628,
   0.2445216,
   0.1973026,
   2.67887e-06,
   0.02434066,
   0.0753113,
   1.107441e-08,
   0,
   6.523476e-07,
   0,
   0,
   0,
   0,
   0,
   1.905778e-09,
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
   Graph_Graph3041->SetMinimum(-2.109708);
   Graph_Graph3041->SetMaximum(21.42471);
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
   1,
   0,
   7,
   10,
   13,
   17,
   19,
   14,
   3,
   13,
   15,
   8,
   4,
   2,
   1,
   0,
   1,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   0.8272524,
   0,
   2.581513,
   3.108748,
   3.558726,
   4.082258,
   4.320299,
   3.696567,
   1.632727,
   3.558726,
   3.829449,
   2.768432,
   1.914367,
   1.29183,
   0.8272524,
   0,
   0.8272524,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   2.29957,
   1.147908,
   3.770356,
   4.267035,
   4.697669,
   5.203825,
   5.435307,
   4.830479,
   2.918242,
   4.697669,
   4.958839,
   3.94522,
   3.162815,
   2.63791,
   2.29957,
   1.147908,
   2.29957,
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
   Graph_Graph3042->SetMaximum(26.87884);
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
   
   TLegend *leg = new TLegend(0.2,0.55,0.8,0.88,NULL,"brNDC");
   leg->SetTextFont(62);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("new_histo_group_Fake_wh3l_zg_13TeV_nvtx","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_zg_13TeV_nvtx","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_zg_13TeV_nvtx","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_zg_13TeV_nvtx","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_zg_13TeV_nvtx","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_zg_13TeV_nvtx","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_zg_13TeV_nvtx","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_zg_13TeV_nvtx","Data","EPL");
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
   entry=leg->AddEntry("new_histo_group_Fake_wh3l_zg_13TeV_nvtx","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_zg_13TeV_nvtx","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_zg_13TeV_nvtx","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_zg_13TeV_nvtx","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_zg_13TeV_nvtx","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_zg_13TeV_nvtx","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_zg_13TeV_nvtx","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_zg_13TeV_nvtx","Data","EPL");
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
   hframe_copy210->SetMaximum(58.39725);
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
   ccwh3l_zg_13TeV_nvtx->Modified();
   ccwh3l_zg_13TeV_nvtx->cd();
   ccwh3l_zg_13TeV_nvtx->SetSelected(ccwh3l_zg_13TeV_nvtx);
}
