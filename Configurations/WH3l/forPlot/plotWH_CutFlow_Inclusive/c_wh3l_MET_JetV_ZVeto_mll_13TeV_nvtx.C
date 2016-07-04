void c_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx()
{
//=========Macro generated from canvas: ccwh3l_MET_JetV_ZVeto_mll_13TeV_nvtx/cc
//=========  (Sun Jul  3 16:19:19 2016) by ROOT version6.02/13
   TCanvas *ccwh3l_MET_JetV_ZVeto_mll_13TeV_nvtx = new TCanvas("ccwh3l_MET_JetV_ZVeto_mll_13TeV_nvtx", "cc",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   ccwh3l_MET_JetV_ZVeto_mll_13TeV_nvtx->SetHighLightColor(2);
   ccwh3l_MET_JetV_ZVeto_mll_13TeV_nvtx->Range(-8,-1.457109,42,9.751421);
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
   
   TH1F *hframe421 = new TH1F("hframe421","",1000,0,40);
   hframe421->SetMinimum(0);
   hframe421->SetMaximum(9.190994);
   hframe421->SetDirectory(0);
   hframe421->SetStats(0);
   hframe421->SetLineStyle(0);
   hframe421->SetMarkerStyle(20);
   hframe421->GetXaxis()->SetTitle("nvtx");
   hframe421->GetXaxis()->SetNdivisions(506);
   hframe421->GetXaxis()->SetLabelFont(42);
   hframe421->GetXaxis()->SetLabelOffset(0.007);
   hframe421->GetXaxis()->SetLabelSize(0.05);
   hframe421->GetXaxis()->SetTitleSize(0.06);
   hframe421->GetXaxis()->SetTitleOffset(0.9);
   hframe421->GetXaxis()->SetTitleFont(42);
   hframe421->GetYaxis()->SetTitle("Events");
   hframe421->GetYaxis()->SetLabelFont(42);
   hframe421->GetYaxis()->SetLabelOffset(0.007);
   hframe421->GetYaxis()->SetLabelSize(0.05);
   hframe421->GetYaxis()->SetTitleSize(0.06);
   hframe421->GetYaxis()->SetTitleOffset(1.25);
   hframe421->GetYaxis()->SetTitleFont(42);
   hframe421->GetZaxis()->SetLabelFont(42);
   hframe421->GetZaxis()->SetLabelOffset(0.007);
   hframe421->GetZaxis()->SetLabelSize(0.05);
   hframe421->GetZaxis()->SetTitleSize(0.06);
   hframe421->GetZaxis()->SetTitleFont(42);
   hframe421->Draw(" ");
   
   THStack *thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx = new THStack();
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx->SetName("thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx");
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx->SetTitle("thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx");
   
   TH1F *thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx_stack_85 = new TH1F("thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx_stack_85","thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx",40,0,40);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx_stack_85->SetMinimum(-0.607647);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx_stack_85->SetMaximum(3.860218);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx_stack_85->SetDirectory(0);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx_stack_85->SetStats(0);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx_stack_85->SetLineStyle(0);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx_stack_85->SetMarkerStyle(20);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx_stack_85->GetXaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx_stack_85->GetXaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx_stack_85->GetXaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx_stack_85->GetXaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx_stack_85->GetXaxis()->SetTitleOffset(0.9);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx_stack_85->GetXaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx_stack_85->GetYaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx_stack_85->GetYaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx_stack_85->GetYaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx_stack_85->GetYaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx_stack_85->GetYaxis()->SetTitleOffset(1.25);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx_stack_85->GetYaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx_stack_85->GetZaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx_stack_85->GetZaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx_stack_85->GetZaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx_stack_85->GetZaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx_stack_85->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx->SetHistogram(thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx_stack_85);
   
   
   TH1D *new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx422 = new TH1D("new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx422","histo_Fake",40,0,40);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx422->SetBinContent(4,-0.0005887331);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx422->SetBinContent(5,-0.1995587);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx422->SetBinContent(6,-0.07155994);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx422->SetBinContent(7,0.4548785);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx422->SetBinContent(8,1.861683);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx422->SetBinContent(9,1.619839);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx422->SetBinContent(10,-0.3100484);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx422->SetBinContent(11,2.166053);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx422->SetBinContent(12,1.415321);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx422->SetBinContent(13,0.895392);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx422->SetBinContent(14,1.78008);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx422->SetBinContent(15,0.006384889);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx422->SetBinContent(16,-0.3250522);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx422->SetBinContent(17,0.1358484);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx422->SetBinContent(18,0.3001484);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx422->SetBinError(4,0.0005887331);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx422->SetBinError(5,0.2509014);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx422->SetBinError(6,0.07155994);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx422->SetBinError(7,0.5509229);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx422->SetBinError(8,1.1625);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx422->SetBinError(9,1.021052);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx422->SetBinError(10,0.2975986);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx422->SetBinError(11,1.117564);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx422->SetBinError(12,1.052772);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx422->SetBinError(13,0.4646353);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx422->SetBinError(14,0.9939133);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx422->SetBinError(15,0.1839286);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx422->SetBinError(16,0.2111795);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx422->SetBinError(17,0.1102774);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx422->SetBinError(18,0.3099838);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx422->SetEntries(108);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx422->SetFillColor(ci);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx422->SetFillStyle(3001);

   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx422->SetLineColor(ci);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx422->GetXaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx422->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx422->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx422->GetXaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx422->GetYaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx422->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx422->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx422->GetYaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx422->GetZaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx422->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx422->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx422->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx->Add(new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx,"");
   
   TH1D *new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx423 = new TH1D("new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx423","histo_WW",40,0,40);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx423->SetBinContent(6,0.01530373);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx423->SetBinContent(8,0.01814939);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx423->SetBinContent(9,0.01447441);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx423->SetBinContent(10,0.0303325);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx423->SetBinContent(16,0.01044191);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx423->SetBinError(6,0.01530373);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx423->SetBinError(8,0.01814939);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx423->SetBinError(9,0.01447441);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx423->SetBinError(10,0.02149105);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx423->SetBinError(16,0.01044191);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx423->SetEntries(6);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx423->SetFillColor(ci);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx423->SetFillStyle(3001);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx423->SetLineColor(ci);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx423->GetXaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx423->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx423->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx423->GetXaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx423->GetYaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx423->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx423->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx423->GetYaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx423->GetZaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx423->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx423->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx423->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx->Add(new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx,"");
   
   TH1D *new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx424 = new TH1D("new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx424","histo_VVV",40,0,40);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx424->SetBinContent(2,0.00270524);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx424->SetBinContent(4,0.002687033);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx424->SetBinContent(5,0.01295131);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx424->SetBinContent(6,0.009374562);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx424->SetBinContent(7,0.02344658);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx424->SetBinContent(8,0.02987421);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx424->SetBinContent(9,0.04567618);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx424->SetBinContent(10,0.03546978);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx424->SetBinContent(11,0.03814204);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx424->SetBinContent(12,0.0208475);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx424->SetBinContent(13,0.01903103);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx424->SetBinContent(14,0.03077552);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx424->SetBinContent(15,0.01704408);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx424->SetBinContent(16,0.008738852);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx424->SetBinContent(17,0.01032878);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx424->SetBinContent(18,-0.0009339691);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx424->SetBinContent(19,0.004179113);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx424->SetBinContent(20,0.004019238);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx424->SetBinContent(26,0.0005054904);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx424->SetBinError(2,0.00270524);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx424->SetBinError(4,0.002687033);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx424->SetBinError(5,0.005803033);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx424->SetBinError(6,0.00494368);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx424->SetBinError(7,0.008694142);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx424->SetBinError(8,0.009982095);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx424->SetBinError(9,0.01028309);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx424->SetBinError(10,0.00952106);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx424->SetBinError(11,0.009990513);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx424->SetBinError(12,0.006912772);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx424->SetBinError(13,0.006994837);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx424->SetBinError(14,0.008043331);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx424->SetBinError(15,0.006084288);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx424->SetBinError(16,0.00499075);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx424->SetBinError(17,0.004743722);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx424->SetBinError(18,0.003122804);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx424->SetBinError(19,0.002941741);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx424->SetBinError(20,0.002861949);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx424->SetBinError(26,0.0005054904);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx424->SetEntries(180);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx424->SetFillColor(ci);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx424->SetFillStyle(3001);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx424->SetLineColor(ci);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx424->GetXaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx424->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx424->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx424->GetXaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx424->GetYaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx424->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx424->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx424->GetYaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx424->GetZaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx424->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx424->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx424->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx->Add(new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx,"");
   
   TH1D *new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx425 = new TH1D("new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx425","histo_Vg",40,0,40);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx425->SetBinContent(6,0.2283563);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx425->SetBinContent(7,0.1103645);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx425->SetBinContent(8,0.1257014);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx425->SetBinContent(9,0.2926692);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx425->SetBinContent(10,-0.1230777);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx425->SetBinContent(11,0.3259333);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx425->SetBinContent(12,0.2262168);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx425->SetBinContent(13,0.3314658);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx425->SetBinContent(14,0.06007751);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx425->SetBinContent(15,0.2412312);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx425->SetBinContent(16,0.2870735);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx425->SetBinContent(17,0.1416296);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx425->SetBinContent(18,0.2748712);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx425->SetBinContent(20,0.0510846);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx425->SetBinContent(21,0.07443925);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx425->SetBinContent(23,0.0001300264);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx425->SetBinContent(26,2.545572e-06);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx425->SetBinError(6,0.1614924);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx425->SetBinError(7,0.1103645);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx425->SetBinError(8,0.1257014);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx425->SetBinError(9,0.1731455);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx425->SetBinError(10,0.1230777);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx425->SetBinError(11,0.1894885);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx425->SetBinError(12,0.159977);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx425->SetBinError(13,0.2178615);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx425->SetBinError(14,0.1593412);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx425->SetBinError(15,0.1495982);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx425->SetBinError(16,0.167759);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx425->SetBinError(17,0.1157495);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx425->SetBinError(18,0.1477147);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx425->SetBinError(20,0.0510846);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx425->SetBinError(21,0.05537531);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx425->SetBinError(23,0.0001300264);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx425->SetBinError(26,2.545572e-06);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx425->SetEntries(42);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx425->SetFillColor(ci);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx425->SetFillStyle(3001);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx425->SetLineColor(ci);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx425->GetXaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx425->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx425->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx425->GetXaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx425->GetYaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx425->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx425->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx425->GetYaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx425->GetZaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx425->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx425->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx425->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx->Add(new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx,"");
   
   TH1D *new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx426 = new TH1D("new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx426","histo_ZZ",40,0,40);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx426->SetBinContent(7,0.04332869);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx426->SetBinContent(8,0.08704091);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx426->SetBinContent(9,0.0738407);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx426->SetBinContent(11,0.0793975);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx426->SetBinContent(12,0.1299406);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx426->SetBinContent(13,0.123111);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx426->SetBinContent(14,0.05352081);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx426->SetBinContent(17,0.03554041);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx426->SetBinContent(18,1.493259e-08);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx426->SetBinError(7,0.04332869);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx426->SetBinError(8,0.06158793);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx426->SetBinError(9,0.05353437);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx426->SetBinError(11,0.05830988);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx426->SetBinError(12,0.07019701);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx426->SetBinError(13,0.07111692);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx426->SetBinError(14,0.03784829);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx426->SetBinError(17,0.03554041);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx426->SetBinError(18,1.493259e-08);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx426->SetEntries(18);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx426->SetFillColor(ci);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx426->SetFillStyle(3001);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx426->SetLineColor(ci);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx426->GetXaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx426->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx426->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx426->GetXaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx426->GetYaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx426->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx426->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx426->GetYaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx426->GetZaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx426->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx426->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx426->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx->Add(new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx,"");
   
   TH1D *new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx427 = new TH1D("new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx427","histo_WZ",40,0,40);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx427->SetBinContent(3,0.03155519);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx427->SetBinContent(4,0.0825607);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx427->SetBinContent(5,0.1631303);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx427->SetBinContent(6,0.3930241);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx427->SetBinContent(7,0.4496957);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx427->SetBinContent(8,0.9101907);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx427->SetBinContent(9,0.7186519);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx427->SetBinContent(10,0.827865);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx427->SetBinContent(11,0.9785948);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx427->SetBinContent(12,0.7367376);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx427->SetBinContent(13,0.7191149);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx427->SetBinContent(14,0.5027731);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx427->SetBinContent(15,0.3095997);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx427->SetBinContent(16,0.2421898);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx427->SetBinContent(17,0.1566349);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx427->SetBinContent(18,0.06938627);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx427->SetBinContent(19,0.02780931);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx427->SetBinContent(20,0.02863149);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx427->SetBinContent(21,0.01172771);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx427->SetBinContent(22,0.01866725);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx427->SetBinContent(23,0.007272136);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx427->SetBinContent(24,1.521721e-06);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx427->SetBinContent(25,0.003047687);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx427->SetBinContent(26,0.0003541198);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx427->SetBinError(3,0.01601978);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx427->SetBinError(4,0.02316076);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx427->SetBinError(5,0.0312309);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx427->SetBinError(6,0.04868908);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx427->SetBinError(7,0.05079148);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx427->SetBinError(8,0.07343951);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx427->SetBinError(9,0.06360118);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx427->SetBinError(10,0.06816196);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx427->SetBinError(11,0.07311132);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx427->SetBinError(12,0.06196872);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx427->SetBinError(13,0.06060906);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx427->SetBinError(14,0.0501095);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx427->SetBinError(15,0.0387533);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx427->SetBinError(16,0.03377908);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx427->SetBinError(17,0.02658116);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx427->SetBinError(18,0.01611186);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx427->SetBinError(19,0.009661426);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx427->SetBinError(20,0.01014482);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx427->SetBinError(21,0.00661452);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx427->SetBinError(22,0.007970154);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx427->SetBinError(23,0.005157251);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx427->SetBinError(24,1.521721e-06);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx427->SetBinError(25,0.002248892);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx427->SetBinError(26,0.0003202393);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx427->SetEntries(1516);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx427->SetFillColor(ci);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx427->SetFillStyle(3001);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx427->SetLineColor(ci);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx427->GetXaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx427->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx427->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx427->GetXaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx427->GetYaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx427->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx427->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx427->GetYaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx427->GetZaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx427->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx427->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx427->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx->Add(new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx,"");
   
   TH1D *new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx428 = new TH1D("new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx428","histo_H_htt",40,0,40);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx428->SetBinContent(3,0.001293747);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx428->SetBinContent(4,0.01718799);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx428->SetBinContent(5,0.02031113);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx428->SetBinContent(6,0.04898293);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx428->SetBinContent(7,0.07348345);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx428->SetBinContent(8,0.07137351);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx428->SetBinContent(9,0.09171107);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx428->SetBinContent(10,0.09765754);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx428->SetBinContent(11,0.08827706);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx428->SetBinContent(12,0.07861781);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx428->SetBinContent(13,0.07739797);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx428->SetBinContent(14,0.05081851);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx428->SetBinContent(15,0.02801913);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx428->SetBinContent(16,0.02140022);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx428->SetBinContent(17,0.02057246);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx428->SetBinContent(18,0.01220549);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx428->SetBinContent(19,0.004133773);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx428->SetBinContent(20,0.004187651);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx428->SetBinContent(21,0.003849439);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx428->SetBinContent(22,7.784792e-05);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx428->SetBinContent(23,0.000447533);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx428->SetBinContent(25,-5.359337e-07);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx428->SetBinContent(27,3.321591e-07);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx428->SetBinContent(28,3.879855e-08);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx428->SetBinContent(29,1.622954e-06);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx428->SetBinContent(30,7.388786e-13);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx428->SetBinContent(34,2.647707e-11);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx428->SetBinError(3,0.001045706);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx428->SetBinError(4,0.005235127);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx428->SetBinError(5,0.004735912);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx428->SetBinError(6,0.008160546);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx428->SetBinError(7,0.01021812);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx428->SetBinError(8,0.008996077);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx428->SetBinError(9,0.01021808);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx428->SetBinError(10,0.0109307);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx428->SetBinError(11,0.01036503);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx428->SetBinError(12,0.00912215);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx428->SetBinError(13,0.00977843);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx428->SetBinError(14,0.007097829);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx428->SetBinError(15,0.005405541);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx428->SetBinError(16,0.004593266);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx428->SetBinError(17,0.004695857);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx428->SetBinError(18,0.003451942);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx428->SetBinError(19,0.001580502);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx428->SetBinError(20,0.001748222);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx428->SetBinError(21,0.001939349);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx428->SetBinError(22,6.230983e-05);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx428->SetBinError(23,0.0003515035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx428->SetBinError(25,5.359337e-07);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx428->SetBinError(27,3.302789e-07);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx428->SetBinError(28,3.876616e-08);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx428->SetBinError(29,1.622954e-06);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx428->SetBinError(30,7.388786e-13);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx428->SetBinError(34,2.647707e-11);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx428->SetEntries(1320);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx428->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx428->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx428->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx428->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx428->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx428->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx428->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx428->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx428->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx428->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx428->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx428->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx428->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx428->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx428->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx->Add(new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx,"");
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx->Draw("hist same");
   
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx = new THStack();
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx->SetName("thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx");
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx->SetTitle("thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx");
   
   TH1F *thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx_stack_86 = new TH1F("thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx_stack_86","thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx",40,0,40);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx_stack_86->SetMinimum(-1.071867e-06);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx_stack_86->SetMaximum(0.1140177);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx_stack_86->SetDirectory(0);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx_stack_86->SetStats(0);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx_stack_86->SetLineStyle(0);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx_stack_86->SetMarkerStyle(20);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx_stack_86->GetXaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx_stack_86->GetXaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx_stack_86->GetXaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx_stack_86->GetXaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx_stack_86->GetXaxis()->SetTitleOffset(0.9);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx_stack_86->GetXaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx_stack_86->GetYaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx_stack_86->GetYaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx_stack_86->GetYaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx_stack_86->GetYaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx_stack_86->GetYaxis()->SetTitleOffset(1.25);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx_stack_86->GetYaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx_stack_86->GetZaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx_stack_86->GetZaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx_stack_86->GetZaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx_stack_86->GetZaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx_stack_86->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx->SetHistogram(thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx_stack_86);
   
   
   TH1D *new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx429 = new TH1D("new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx429","histo_H_htt",40,0,40);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx429->SetBinContent(3,0.001293747);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx429->SetBinContent(4,0.01718799);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx429->SetBinContent(5,0.02031113);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx429->SetBinContent(6,0.04898293);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx429->SetBinContent(7,0.07348345);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx429->SetBinContent(8,0.07137351);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx429->SetBinContent(9,0.09171107);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx429->SetBinContent(10,0.09765754);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx429->SetBinContent(11,0.08827706);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx429->SetBinContent(12,0.07861781);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx429->SetBinContent(13,0.07739797);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx429->SetBinContent(14,0.05081851);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx429->SetBinContent(15,0.02801913);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx429->SetBinContent(16,0.02140022);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx429->SetBinContent(17,0.02057246);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx429->SetBinContent(18,0.01220549);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx429->SetBinContent(19,0.004133773);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx429->SetBinContent(20,0.004187651);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx429->SetBinContent(21,0.003849439);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx429->SetBinContent(22,7.784792e-05);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx429->SetBinContent(23,0.000447533);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx429->SetBinContent(25,-5.359337e-07);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx429->SetBinContent(27,3.321591e-07);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx429->SetBinContent(28,3.879855e-08);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx429->SetBinContent(29,1.622954e-06);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx429->SetBinContent(30,7.388786e-13);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx429->SetBinContent(34,2.647707e-11);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx429->SetBinError(3,0.001045706);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx429->SetBinError(4,0.005235127);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx429->SetBinError(5,0.004735912);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx429->SetBinError(6,0.008160546);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx429->SetBinError(7,0.01021812);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx429->SetBinError(8,0.008996077);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx429->SetBinError(9,0.01021808);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx429->SetBinError(10,0.0109307);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx429->SetBinError(11,0.01036503);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx429->SetBinError(12,0.00912215);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx429->SetBinError(13,0.00977843);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx429->SetBinError(14,0.007097829);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx429->SetBinError(15,0.005405541);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx429->SetBinError(16,0.004593266);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx429->SetBinError(17,0.004695857);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx429->SetBinError(18,0.003451942);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx429->SetBinError(19,0.001580502);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx429->SetBinError(20,0.001748222);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx429->SetBinError(21,0.001939349);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx429->SetBinError(22,6.230983e-05);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx429->SetBinError(23,0.0003515035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx429->SetBinError(25,5.359337e-07);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx429->SetBinError(27,3.302789e-07);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx429->SetBinError(28,3.876616e-08);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx429->SetBinError(29,1.622954e-06);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx429->SetBinError(30,7.388786e-13);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx429->SetBinError(34,2.647707e-11);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx429->SetEntries(1320);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx429->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx429->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx429->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx429->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx429->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx429->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx429->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx429->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx429->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx429->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx429->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx429->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx429->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx429->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx429->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx->Add(new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx,"");
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_nvtx->Draw("hist same noclear");
   
   Double_t _fx3085[40] = {
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
   Double_t _fy3085[40] = {
   0,
   0.00270524,
   0.03155519,
   0.084659,
   -0.02347711,
   0.5744987,
   1.081714,
   3.03264,
   2.765151,
   0.4605412,
   3.588121,
   2.529064,
   2.088115,
   2.427227,
   0.5742599,
   0.2233919,
   0.4799821,
   0.643472,
   0.03198842,
   0.08373532,
   0.08616696,
   0.01866725,
   0.007402163,
   1.521721e-06,
   0.003047687,
   0.0008621557,
   0,
   0,
   0,
   0,
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
   Double_t _felx3085[40] = {
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
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
   Double_t _fely3085[40] = {
   0,
   0.003826809,
   0.01604881,
   0.02687349,
   0.2967219,
   0.3042728,
   0.6878038,
   1.592,
   1.45285,
   0.5331914,
   1.636341,
   1.440661,
   0.8807943,
   1.308588,
   0.2026309,
   0.443625,
   0.2971774,
   0.4790487,
   0.01334564,
   0.06425274,
   0.06226256,
   0.00800262,
   0.00529246,
   1.528923e-06,
   0.002255277,
   0.0009705005,
   0,
   0,
   0,
   0,
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
   Double_t _fehx3085[40] = {
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
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
   Double_t _fehy3085[40] = {
   0,
   0.003826812,
   0.01604724,
   0.02683841,
   0.2472055,
   0.3042147,
   0.7813918,
   1.591992,
   1.452806,
   0.5331168,
   1.636277,
   1.440649,
   0.8805849,
   1.396597,
   0.379291,
   0.4435345,
   0.2971452,
   0.4864822,
   0.01334346,
   0.06425125,
   0.0622606,
   0.008002806,
   0.005291376,
   1.532244e-06,
   0.002253411,
   0.0009704909,
   0,
   0,
   0,
   0,
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
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(40,_fx3085,_fy3085,_felx3085,_fehx3085,_fely3085,_fehy3085);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(12);
   grae->SetFillStyle(3004);
   grae->SetLineColor(12);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3085 = new TH1F("Graph_Graph3085","",100,0,44);
   Graph_Graph3085->SetMinimum(-0.8746587);
   Graph_Graph3085->SetMaximum(5.778857);
   Graph_Graph3085->SetDirectory(0);
   Graph_Graph3085->SetStats(0);
   Graph_Graph3085->SetLineStyle(0);
   Graph_Graph3085->SetMarkerStyle(20);
   Graph_Graph3085->GetXaxis()->SetLabelFont(42);
   Graph_Graph3085->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3085->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3085->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3085->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3085->GetXaxis()->SetTitleFont(42);
   Graph_Graph3085->GetYaxis()->SetLabelFont(42);
   Graph_Graph3085->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3085->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3085->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3085->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3085->GetYaxis()->SetTitleFont(42);
   Graph_Graph3085->GetZaxis()->SetLabelFont(42);
   Graph_Graph3085->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3085->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3085->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3085->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3085);
   
   grae->Draw("2");
   
   Double_t _fx3086[40] = {
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
   Double_t _fy3086[40] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t _felx3086[40] = {
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
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
   Double_t _fely3086[40] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t _fehx3086[40] = {
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
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
   Double_t _fehy3086[40] = {
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
   grae = new TGraphAsymmErrors(40,_fx3086,_fy3086,_felx3086,_fehx3086,_fely3086,_fehy3086);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(1);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3086 = new TH1F("Graph_Graph3086","",100,0,44);
   Graph_Graph3086->SetMinimum(0);
   Graph_Graph3086->SetMaximum(1.262698);
   Graph_Graph3086->SetDirectory(0);
   Graph_Graph3086->SetStats(0);
   Graph_Graph3086->SetLineStyle(0);
   Graph_Graph3086->SetMarkerStyle(20);
   Graph_Graph3086->GetXaxis()->SetLabelFont(42);
   Graph_Graph3086->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3086->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3086->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3086->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3086->GetXaxis()->SetTitleFont(42);
   Graph_Graph3086->GetYaxis()->SetLabelFont(42);
   Graph_Graph3086->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3086->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3086->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3086->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3086->GetYaxis()->SetTitleFont(42);
   Graph_Graph3086->GetZaxis()->SetLabelFont(42);
   Graph_Graph3086->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3086->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3086->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3086->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3086);
   
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
   
   TH1F *hframe_copy430 = new TH1F("hframe_copy430","",1000,0,40);
   hframe_copy430->SetMinimum(0);
   hframe_copy430->SetMaximum(9.190994);
   hframe_copy430->SetDirectory(0);
   hframe_copy430->SetStats(0);
   hframe_copy430->SetLineStyle(0);
   hframe_copy430->SetMarkerStyle(20);
   hframe_copy430->GetXaxis()->SetTitle("nvtx");
   hframe_copy430->GetXaxis()->SetNdivisions(506);
   hframe_copy430->GetXaxis()->SetLabelFont(42);
   hframe_copy430->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy430->GetXaxis()->SetLabelSize(0.05);
   hframe_copy430->GetXaxis()->SetTitleSize(0.06);
   hframe_copy430->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy430->GetXaxis()->SetTitleFont(42);
   hframe_copy430->GetYaxis()->SetTitle("Events");
   hframe_copy430->GetYaxis()->SetLabelFont(42);
   hframe_copy430->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy430->GetYaxis()->SetLabelSize(0.05);
   hframe_copy430->GetYaxis()->SetTitleSize(0.06);
   hframe_copy430->GetYaxis()->SetTitleOffset(1.25);
   hframe_copy430->GetYaxis()->SetTitleFont(42);
   hframe_copy430->GetZaxis()->SetLabelFont(42);
   hframe_copy430->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy430->GetZaxis()->SetLabelSize(0.05);
   hframe_copy430->GetZaxis()->SetTitleSize(0.06);
   hframe_copy430->GetZaxis()->SetTitleFont(42);
   hframe_copy430->Draw("sameaxis");
   ccwh3l_MET_JetV_ZVeto_mll_13TeV_nvtx->Modified();
   ccwh3l_MET_JetV_ZVeto_mll_13TeV_nvtx->cd();
   ccwh3l_MET_JetV_ZVeto_mll_13TeV_nvtx->SetSelected(ccwh3l_MET_JetV_ZVeto_mll_13TeV_nvtx);
}
