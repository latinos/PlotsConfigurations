void c_wh3l_zg_13TeV_nvtx()
{
//=========Macro generated from canvas: ccwh3l_zg_13TeV_nvtx/cc
//=========  (Tue Jun 28 16:49:13 2016) by ROOT version6.02/13
   TCanvas *ccwh3l_zg_13TeV_nvtx = new TCanvas("ccwh3l_zg_13TeV_nvtx", "cc",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   ccwh3l_zg_13TeV_nvtx->SetHighLightColor(2);
   ccwh3l_zg_13TeV_nvtx->Range(-8,-9.699322,42,64.91085);
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
   
   TH1F *hframe233 = new TH1F("hframe233","",1000,0,40);
   hframe233->SetMinimum(0);
   hframe233->SetMaximum(61.18034);
   hframe233->SetDirectory(0);
   hframe233->SetStats(0);
   hframe233->SetLineStyle(0);
   hframe233->SetMarkerStyle(20);
   hframe233->GetXaxis()->SetTitle("nvtx");
   hframe233->GetXaxis()->SetNdivisions(506);
   hframe233->GetXaxis()->SetLabelFont(42);
   hframe233->GetXaxis()->SetLabelOffset(0.007);
   hframe233->GetXaxis()->SetLabelSize(0.05);
   hframe233->GetXaxis()->SetTitleSize(0.06);
   hframe233->GetXaxis()->SetTitleOffset(0.9);
   hframe233->GetXaxis()->SetTitleFont(42);
   hframe233->GetYaxis()->SetTitle("Events");
   hframe233->GetYaxis()->SetLabelFont(42);
   hframe233->GetYaxis()->SetLabelOffset(0.007);
   hframe233->GetYaxis()->SetLabelSize(0.05);
   hframe233->GetYaxis()->SetTitleSize(0.06);
   hframe233->GetYaxis()->SetTitleOffset(1.25);
   hframe233->GetYaxis()->SetTitleFont(42);
   hframe233->GetZaxis()->SetLabelFont(42);
   hframe233->GetZaxis()->SetLabelOffset(0.007);
   hframe233->GetZaxis()->SetLabelSize(0.05);
   hframe233->GetZaxis()->SetTitleSize(0.06);
   hframe233->GetZaxis()->SetTitleFont(42);
   hframe233->Draw(" ");
   
   THStack *thsBackground_grouped_wh3l_zg_13TeV_nvtx = new THStack();
   thsBackground_grouped_wh3l_zg_13TeV_nvtx->SetName("thsBackground_grouped_wh3l_zg_13TeV_nvtx");
   thsBackground_grouped_wh3l_zg_13TeV_nvtx->SetTitle("thsBackground_grouped_wh3l_zg_13TeV_nvtx");
   
   TH1F *thsBackground_grouped_wh3l_zg_13TeV_nvtx_stack_30 = new TH1F("thsBackground_grouped_wh3l_zg_13TeV_nvtx_stack_30","thsBackground_grouped_wh3l_zg_13TeV_nvtx",40,0,40);
   thsBackground_grouped_wh3l_zg_13TeV_nvtx_stack_30->SetMinimum(-0.5037822);
   thsBackground_grouped_wh3l_zg_13TeV_nvtx_stack_30->SetMaximum(17.58857);
   thsBackground_grouped_wh3l_zg_13TeV_nvtx_stack_30->SetDirectory(0);
   thsBackground_grouped_wh3l_zg_13TeV_nvtx_stack_30->SetStats(0);
   thsBackground_grouped_wh3l_zg_13TeV_nvtx_stack_30->SetLineStyle(0);
   thsBackground_grouped_wh3l_zg_13TeV_nvtx_stack_30->SetMarkerStyle(20);
   thsBackground_grouped_wh3l_zg_13TeV_nvtx_stack_30->GetXaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_nvtx_stack_30->GetXaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_zg_13TeV_nvtx_stack_30->GetXaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_zg_13TeV_nvtx_stack_30->GetXaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_zg_13TeV_nvtx_stack_30->GetXaxis()->SetTitleOffset(0.9);
   thsBackground_grouped_wh3l_zg_13TeV_nvtx_stack_30->GetXaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_nvtx_stack_30->GetYaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_nvtx_stack_30->GetYaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_zg_13TeV_nvtx_stack_30->GetYaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_zg_13TeV_nvtx_stack_30->GetYaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_zg_13TeV_nvtx_stack_30->GetYaxis()->SetTitleOffset(1.25);
   thsBackground_grouped_wh3l_zg_13TeV_nvtx_stack_30->GetYaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_nvtx_stack_30->GetZaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_nvtx_stack_30->GetZaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_zg_13TeV_nvtx_stack_30->GetZaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_zg_13TeV_nvtx_stack_30->GetZaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_zg_13TeV_nvtx_stack_30->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_nvtx->SetHistogram(thsBackground_grouped_wh3l_zg_13TeV_nvtx_stack_30);
   
   
   TH1D *new_histo_group_Fake_wh3l_zg_13TeV_nvtx234 = new TH1D("new_histo_group_Fake_wh3l_zg_13TeV_nvtx234","histo_Fake",40,0,40);
   new_histo_group_Fake_wh3l_zg_13TeV_nvtx234->SetBinContent(2,-0.007202128);
   new_histo_group_Fake_wh3l_zg_13TeV_nvtx234->SetBinContent(3,0.005392462);
   new_histo_group_Fake_wh3l_zg_13TeV_nvtx234->SetBinContent(4,0.4043149);
   new_histo_group_Fake_wh3l_zg_13TeV_nvtx234->SetBinContent(5,0.2989986);
   new_histo_group_Fake_wh3l_zg_13TeV_nvtx234->SetBinContent(6,1.393944);
   new_histo_group_Fake_wh3l_zg_13TeV_nvtx234->SetBinContent(7,2.437928);
   new_histo_group_Fake_wh3l_zg_13TeV_nvtx234->SetBinContent(8,0.9133347);
   new_histo_group_Fake_wh3l_zg_13TeV_nvtx234->SetBinContent(9,1.971844);
   new_histo_group_Fake_wh3l_zg_13TeV_nvtx234->SetBinContent(10,2.3099);
   new_histo_group_Fake_wh3l_zg_13TeV_nvtx234->SetBinContent(11,4.552754);
   new_histo_group_Fake_wh3l_zg_13TeV_nvtx234->SetBinContent(12,2.994637);
   new_histo_group_Fake_wh3l_zg_13TeV_nvtx234->SetBinContent(13,2.374647);
   new_histo_group_Fake_wh3l_zg_13TeV_nvtx234->SetBinContent(14,0.9885482);
   new_histo_group_Fake_wh3l_zg_13TeV_nvtx234->SetBinContent(15,1.285424);
   new_histo_group_Fake_wh3l_zg_13TeV_nvtx234->SetBinContent(16,0.08121552);
   new_histo_group_Fake_wh3l_zg_13TeV_nvtx234->SetBinContent(17,1.317642);
   new_histo_group_Fake_wh3l_zg_13TeV_nvtx234->SetBinContent(18,0.7451644);
   new_histo_group_Fake_wh3l_zg_13TeV_nvtx234->SetBinContent(19,-0.1307349);
   new_histo_group_Fake_wh3l_zg_13TeV_nvtx234->SetBinContent(21,0.1384125);
   new_histo_group_Fake_wh3l_zg_13TeV_nvtx234->SetBinContent(22,0.07181522);
   new_histo_group_Fake_wh3l_zg_13TeV_nvtx234->SetBinError(2,0.007202128);
   new_histo_group_Fake_wh3l_zg_13TeV_nvtx234->SetBinError(3,0.1353779);
   new_histo_group_Fake_wh3l_zg_13TeV_nvtx234->SetBinError(4,0.2068983);
   new_histo_group_Fake_wh3l_zg_13TeV_nvtx234->SetBinError(5,0.8027808);
   new_histo_group_Fake_wh3l_zg_13TeV_nvtx234->SetBinError(6,0.9638045);
   new_histo_group_Fake_wh3l_zg_13TeV_nvtx234->SetBinError(7,1.330176);
   new_histo_group_Fake_wh3l_zg_13TeV_nvtx234->SetBinError(8,1.087076);
   new_histo_group_Fake_wh3l_zg_13TeV_nvtx234->SetBinError(9,1.603437);
   new_histo_group_Fake_wh3l_zg_13TeV_nvtx234->SetBinError(10,1.357628);
   new_histo_group_Fake_wh3l_zg_13TeV_nvtx234->SetBinError(11,1.340534);
   new_histo_group_Fake_wh3l_zg_13TeV_nvtx234->SetBinError(12,1.715072);
   new_histo_group_Fake_wh3l_zg_13TeV_nvtx234->SetBinError(13,1.550767);
   new_histo_group_Fake_wh3l_zg_13TeV_nvtx234->SetBinError(14,0.7790306);
   new_histo_group_Fake_wh3l_zg_13TeV_nvtx234->SetBinError(15,0.8818858);
   new_histo_group_Fake_wh3l_zg_13TeV_nvtx234->SetBinError(16,0.4524674);
   new_histo_group_Fake_wh3l_zg_13TeV_nvtx234->SetBinError(17,0.8115049);
   new_histo_group_Fake_wh3l_zg_13TeV_nvtx234->SetBinError(18,0.5988731);
   new_histo_group_Fake_wh3l_zg_13TeV_nvtx234->SetBinError(19,0.2174466);
   new_histo_group_Fake_wh3l_zg_13TeV_nvtx234->SetBinError(21,0.1384125);
   new_histo_group_Fake_wh3l_zg_13TeV_nvtx234->SetBinError(22,0.07181522);
   new_histo_group_Fake_wh3l_zg_13TeV_nvtx234->SetEntries(461);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_zg_13TeV_nvtx234->SetFillColor(ci);
   new_histo_group_Fake_wh3l_zg_13TeV_nvtx234->SetFillStyle(3001);

   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_zg_13TeV_nvtx234->SetLineColor(ci);
   new_histo_group_Fake_wh3l_zg_13TeV_nvtx234->GetXaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_zg_13TeV_nvtx234->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_zg_13TeV_nvtx234->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_zg_13TeV_nvtx234->GetXaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_zg_13TeV_nvtx234->GetYaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_zg_13TeV_nvtx234->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_zg_13TeV_nvtx234->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_zg_13TeV_nvtx234->GetYaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_zg_13TeV_nvtx234->GetZaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_zg_13TeV_nvtx234->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_zg_13TeV_nvtx234->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_zg_13TeV_nvtx234->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_nvtx->Add(new_histo_group_Fake_wh3l_zg_13TeV_nvtx,"");
   
   TH1D *new_histo_group_WW_wh3l_zg_13TeV_nvtx235 = new TH1D("new_histo_group_WW_wh3l_zg_13TeV_nvtx235","histo_WW",40,0,40);
   new_histo_group_WW_wh3l_zg_13TeV_nvtx235->SetBinContent(16,0.009961222);
   new_histo_group_WW_wh3l_zg_13TeV_nvtx235->SetBinError(16,0.009961222);
   new_histo_group_WW_wh3l_zg_13TeV_nvtx235->SetEntries(1);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_zg_13TeV_nvtx235->SetFillColor(ci);
   new_histo_group_WW_wh3l_zg_13TeV_nvtx235->SetFillStyle(3001);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_zg_13TeV_nvtx235->SetLineColor(ci);
   new_histo_group_WW_wh3l_zg_13TeV_nvtx235->GetXaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_zg_13TeV_nvtx235->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_zg_13TeV_nvtx235->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_zg_13TeV_nvtx235->GetXaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_zg_13TeV_nvtx235->GetYaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_zg_13TeV_nvtx235->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_zg_13TeV_nvtx235->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_zg_13TeV_nvtx235->GetYaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_zg_13TeV_nvtx235->GetZaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_zg_13TeV_nvtx235->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_zg_13TeV_nvtx235->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_zg_13TeV_nvtx235->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_nvtx->Add(new_histo_group_WW_wh3l_zg_13TeV_nvtx,"");
   
   TH1D *new_histo_group_VVV_wh3l_zg_13TeV_nvtx236 = new TH1D("new_histo_group_VVV_wh3l_zg_13TeV_nvtx236","histo_VVV",40,0,40);
   new_histo_group_VVV_wh3l_zg_13TeV_nvtx236->SetBinContent(15,-0.0006863608);
   new_histo_group_VVV_wh3l_zg_13TeV_nvtx236->SetBinError(15,0.0006863608);
   new_histo_group_VVV_wh3l_zg_13TeV_nvtx236->SetEntries(1);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_zg_13TeV_nvtx236->SetFillColor(ci);
   new_histo_group_VVV_wh3l_zg_13TeV_nvtx236->SetFillStyle(3001);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_zg_13TeV_nvtx236->SetLineColor(ci);
   new_histo_group_VVV_wh3l_zg_13TeV_nvtx236->GetXaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_zg_13TeV_nvtx236->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_zg_13TeV_nvtx236->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_zg_13TeV_nvtx236->GetXaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_zg_13TeV_nvtx236->GetYaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_zg_13TeV_nvtx236->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_zg_13TeV_nvtx236->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_zg_13TeV_nvtx236->GetYaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_zg_13TeV_nvtx236->GetZaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_zg_13TeV_nvtx236->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_zg_13TeV_nvtx236->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_zg_13TeV_nvtx236->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_nvtx->Add(new_histo_group_VVV_wh3l_zg_13TeV_nvtx,"");
   
   TH1D *new_histo_group_Vg_wh3l_zg_13TeV_nvtx237 = new TH1D("new_histo_group_Vg_wh3l_zg_13TeV_nvtx237","histo_Vg",40,0,40);
   new_histo_group_Vg_wh3l_zg_13TeV_nvtx237->SetBinContent(3,0.2249779);
   new_histo_group_Vg_wh3l_zg_13TeV_nvtx237->SetBinContent(4,0.7361533);
   new_histo_group_Vg_wh3l_zg_13TeV_nvtx237->SetBinContent(5,4.26918);
   new_histo_group_Vg_wh3l_zg_13TeV_nvtx237->SetBinContent(6,5.18226);
   new_histo_group_Vg_wh3l_zg_13TeV_nvtx237->SetBinContent(7,6.709586);
   new_histo_group_Vg_wh3l_zg_13TeV_nvtx237->SetBinContent(8,10.03869);
   new_histo_group_Vg_wh3l_zg_13TeV_nvtx237->SetBinContent(9,14.27113);
   new_histo_group_Vg_wh3l_zg_13TeV_nvtx237->SetBinContent(10,13.94391);
   new_histo_group_Vg_wh3l_zg_13TeV_nvtx237->SetBinContent(11,10.71032);
   new_histo_group_Vg_wh3l_zg_13TeV_nvtx237->SetBinContent(12,11.23956);
   new_histo_group_Vg_wh3l_zg_13TeV_nvtx237->SetBinContent(13,9.101963);
   new_histo_group_Vg_wh3l_zg_13TeV_nvtx237->SetBinContent(14,7.247431);
   new_histo_group_Vg_wh3l_zg_13TeV_nvtx237->SetBinContent(15,4.817917);
   new_histo_group_Vg_wh3l_zg_13TeV_nvtx237->SetBinContent(16,2.436118);
   new_histo_group_Vg_wh3l_zg_13TeV_nvtx237->SetBinContent(17,1.414921);
   new_histo_group_Vg_wh3l_zg_13TeV_nvtx237->SetBinContent(18,0.7057932);
   new_histo_group_Vg_wh3l_zg_13TeV_nvtx237->SetBinContent(19,0.4046562);
   new_histo_group_Vg_wh3l_zg_13TeV_nvtx237->SetBinContent(20,0.3647049);
   new_histo_group_Vg_wh3l_zg_13TeV_nvtx237->SetBinContent(21,0.2129954);
   new_histo_group_Vg_wh3l_zg_13TeV_nvtx237->SetBinContent(22,0.1819512);
   new_histo_group_Vg_wh3l_zg_13TeV_nvtx237->SetBinContent(23,2.677784e-06);
   new_histo_group_Vg_wh3l_zg_13TeV_nvtx237->SetBinContent(24,0.02435116);
   new_histo_group_Vg_wh3l_zg_13TeV_nvtx237->SetBinContent(25,-0.07424437);
   new_histo_group_Vg_wh3l_zg_13TeV_nvtx237->SetBinContent(26,1.107037e-08);
   new_histo_group_Vg_wh3l_zg_13TeV_nvtx237->SetBinContent(28,6.521099e-07);
   new_histo_group_Vg_wh3l_zg_13TeV_nvtx237->SetBinContent(34,1.905084e-09);
   new_histo_group_Vg_wh3l_zg_13TeV_nvtx237->SetBinError(3,0.159919);
   new_histo_group_Vg_wh3l_zg_13TeV_nvtx237->SetBinError(4,0.4517781);
   new_histo_group_Vg_wh3l_zg_13TeV_nvtx237->SetBinError(5,0.820459);
   new_histo_group_Vg_wh3l_zg_13TeV_nvtx237->SetBinError(6,0.983764);
   new_histo_group_Vg_wh3l_zg_13TeV_nvtx237->SetBinError(7,0.9817858);
   new_histo_group_Vg_wh3l_zg_13TeV_nvtx237->SetBinError(8,1.294576);
   new_histo_group_Vg_wh3l_zg_13TeV_nvtx237->SetBinError(9,1.412649);
   new_histo_group_Vg_wh3l_zg_13TeV_nvtx237->SetBinError(10,1.443433);
   new_histo_group_Vg_wh3l_zg_13TeV_nvtx237->SetBinError(11,1.248681);
   new_histo_group_Vg_wh3l_zg_13TeV_nvtx237->SetBinError(12,1.250702);
   new_histo_group_Vg_wh3l_zg_13TeV_nvtx237->SetBinError(13,1.056514);
   new_histo_group_Vg_wh3l_zg_13TeV_nvtx237->SetBinError(14,0.8980216);
   new_histo_group_Vg_wh3l_zg_13TeV_nvtx237->SetBinError(15,0.7448369);
   new_histo_group_Vg_wh3l_zg_13TeV_nvtx237->SetBinError(16,0.527805);
   new_histo_group_Vg_wh3l_zg_13TeV_nvtx237->SetBinError(17,0.5182417);
   new_histo_group_Vg_wh3l_zg_13TeV_nvtx237->SetBinError(18,0.2803531);
   new_histo_group_Vg_wh3l_zg_13TeV_nvtx237->SetBinError(19,0.1882631);
   new_histo_group_Vg_wh3l_zg_13TeV_nvtx237->SetBinError(20,0.1895583);
   new_histo_group_Vg_wh3l_zg_13TeV_nvtx237->SetBinError(21,0.09891799);
   new_histo_group_Vg_wh3l_zg_13TeV_nvtx237->SetBinError(22,0.1200854);
   new_histo_group_Vg_wh3l_zg_13TeV_nvtx237->SetBinError(23,2.677784e-06);
   new_histo_group_Vg_wh3l_zg_13TeV_nvtx237->SetBinError(24,0.02433177);
   new_histo_group_Vg_wh3l_zg_13TeV_nvtx237->SetBinError(25,0.074235);
   new_histo_group_Vg_wh3l_zg_13TeV_nvtx237->SetBinError(26,1.107037e-08);
   new_histo_group_Vg_wh3l_zg_13TeV_nvtx237->SetBinError(28,6.521099e-07);
   new_histo_group_Vg_wh3l_zg_13TeV_nvtx237->SetBinError(34,1.905084e-09);
   new_histo_group_Vg_wh3l_zg_13TeV_nvtx237->SetEntries(1378);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_zg_13TeV_nvtx237->SetFillColor(ci);
   new_histo_group_Vg_wh3l_zg_13TeV_nvtx237->SetFillStyle(3001);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_zg_13TeV_nvtx237->SetLineColor(ci);
   new_histo_group_Vg_wh3l_zg_13TeV_nvtx237->GetXaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_zg_13TeV_nvtx237->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_zg_13TeV_nvtx237->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_zg_13TeV_nvtx237->GetXaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_zg_13TeV_nvtx237->GetYaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_zg_13TeV_nvtx237->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_zg_13TeV_nvtx237->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_zg_13TeV_nvtx237->GetYaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_zg_13TeV_nvtx237->GetZaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_zg_13TeV_nvtx237->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_zg_13TeV_nvtx237->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_zg_13TeV_nvtx237->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_nvtx->Add(new_histo_group_Vg_wh3l_zg_13TeV_nvtx,"");
   
   TH1D *new_histo_group_ZZ_wh3l_zg_13TeV_nvtx238 = new TH1D("new_histo_group_ZZ_wh3l_zg_13TeV_nvtx238","histo_ZZ",40,0,40);
   new_histo_group_ZZ_wh3l_zg_13TeV_nvtx238->SetBinContent(5,0.03249944);
   new_histo_group_ZZ_wh3l_zg_13TeV_nvtx238->SetBinContent(6,0.04202887);
   new_histo_group_ZZ_wh3l_zg_13TeV_nvtx238->SetBinContent(7,0.08642198);
   new_histo_group_ZZ_wh3l_zg_13TeV_nvtx238->SetBinContent(8,0.03645855);
   new_histo_group_ZZ_wh3l_zg_13TeV_nvtx238->SetBinContent(9,0.04575732);
   new_histo_group_ZZ_wh3l_zg_13TeV_nvtx238->SetBinContent(10,0.2551516);
   new_histo_group_ZZ_wh3l_zg_13TeV_nvtx238->SetBinContent(12,0.1136824);
   new_histo_group_ZZ_wh3l_zg_13TeV_nvtx238->SetBinContent(13,0.07232913);
   new_histo_group_ZZ_wh3l_zg_13TeV_nvtx238->SetBinContent(14,0.04959978);
   new_histo_group_ZZ_wh3l_zg_13TeV_nvtx238->SetBinContent(22,0.002412119);
   new_histo_group_ZZ_wh3l_zg_13TeV_nvtx238->SetBinError(5,0.03249944);
   new_histo_group_ZZ_wh3l_zg_13TeV_nvtx238->SetBinError(6,0.04202887);
   new_histo_group_ZZ_wh3l_zg_13TeV_nvtx238->SetBinError(7,0.06129487);
   new_histo_group_ZZ_wh3l_zg_13TeV_nvtx238->SetBinError(8,0.03645855);
   new_histo_group_ZZ_wh3l_zg_13TeV_nvtx238->SetBinError(9,0.04575732);
   new_histo_group_ZZ_wh3l_zg_13TeV_nvtx238->SetBinError(10,0.1055395);
   new_histo_group_ZZ_wh3l_zg_13TeV_nvtx238->SetBinError(12,0.06572274);
   new_histo_group_ZZ_wh3l_zg_13TeV_nvtx238->SetBinError(13,0.05212968);
   new_histo_group_ZZ_wh3l_zg_13TeV_nvtx238->SetBinError(14,0.03545384);
   new_histo_group_ZZ_wh3l_zg_13TeV_nvtx238->SetBinError(22,0.002412119);
   new_histo_group_ZZ_wh3l_zg_13TeV_nvtx238->SetEntries(20);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_zg_13TeV_nvtx238->SetFillColor(ci);
   new_histo_group_ZZ_wh3l_zg_13TeV_nvtx238->SetFillStyle(3001);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_zg_13TeV_nvtx238->SetLineColor(ci);
   new_histo_group_ZZ_wh3l_zg_13TeV_nvtx238->GetXaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_zg_13TeV_nvtx238->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_zg_13TeV_nvtx238->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_zg_13TeV_nvtx238->GetXaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_zg_13TeV_nvtx238->GetYaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_zg_13TeV_nvtx238->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_zg_13TeV_nvtx238->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_zg_13TeV_nvtx238->GetYaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_zg_13TeV_nvtx238->GetZaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_zg_13TeV_nvtx238->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_zg_13TeV_nvtx238->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_zg_13TeV_nvtx238->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_nvtx->Add(new_histo_group_ZZ_wh3l_zg_13TeV_nvtx,"");
   
   TH1D *new_histo_group_WZ_wh3l_zg_13TeV_nvtx239 = new TH1D("new_histo_group_WZ_wh3l_zg_13TeV_nvtx239","histo_WZ",40,0,40);
   new_histo_group_WZ_wh3l_zg_13TeV_nvtx239->SetBinContent(4,0.01208537);
   new_histo_group_WZ_wh3l_zg_13TeV_nvtx239->SetBinContent(5,0.06845817);
   new_histo_group_WZ_wh3l_zg_13TeV_nvtx239->SetBinContent(6,0.1253179);
   new_histo_group_WZ_wh3l_zg_13TeV_nvtx239->SetBinContent(7,0.1786277);
   new_histo_group_WZ_wh3l_zg_13TeV_nvtx239->SetBinContent(8,0.1852012);
   new_histo_group_WZ_wh3l_zg_13TeV_nvtx239->SetBinContent(9,0.2394513);
   new_histo_group_WZ_wh3l_zg_13TeV_nvtx239->SetBinContent(10,0.2420552);
   new_histo_group_WZ_wh3l_zg_13TeV_nvtx239->SetBinContent(11,0.2126052);
   new_histo_group_WZ_wh3l_zg_13TeV_nvtx239->SetBinContent(12,0.1731557);
   new_histo_group_WZ_wh3l_zg_13TeV_nvtx239->SetBinContent(13,0.1378588);
   new_histo_group_WZ_wh3l_zg_13TeV_nvtx239->SetBinContent(14,0.1046082);
   new_histo_group_WZ_wh3l_zg_13TeV_nvtx239->SetBinContent(15,0.09419603);
   new_histo_group_WZ_wh3l_zg_13TeV_nvtx239->SetBinContent(16,0.04615917);
   new_histo_group_WZ_wh3l_zg_13TeV_nvtx239->SetBinContent(17,0.01746517);
   new_histo_group_WZ_wh3l_zg_13TeV_nvtx239->SetBinContent(18,0.02763017);
   new_histo_group_WZ_wh3l_zg_13TeV_nvtx239->SetBinContent(19,0.003829751);
   new_histo_group_WZ_wh3l_zg_13TeV_nvtx239->SetBinContent(20,0.001139302);
   new_histo_group_WZ_wh3l_zg_13TeV_nvtx239->SetBinContent(21,0.005883264);
   new_histo_group_WZ_wh3l_zg_13TeV_nvtx239->SetBinContent(22,0.001746862);
   new_histo_group_WZ_wh3l_zg_13TeV_nvtx239->SetBinContent(23,1.100137e-10);
   new_histo_group_WZ_wh3l_zg_13TeV_nvtx239->SetBinContent(25,0.001049616);
   new_histo_group_WZ_wh3l_zg_13TeV_nvtx239->SetBinContent(27,2.290836e-09);
   new_histo_group_WZ_wh3l_zg_13TeV_nvtx239->SetBinError(4,0.008548019);
   new_histo_group_WZ_wh3l_zg_13TeV_nvtx239->SetBinError(5,0.02069522);
   new_histo_group_WZ_wh3l_zg_13TeV_nvtx239->SetBinError(6,0.02748578);
   new_histo_group_WZ_wh3l_zg_13TeV_nvtx239->SetBinError(7,0.03225388);
   new_histo_group_WZ_wh3l_zg_13TeV_nvtx239->SetBinError(8,0.03204975);
   new_histo_group_WZ_wh3l_zg_13TeV_nvtx239->SetBinError(9,0.03659783);
   new_histo_group_WZ_wh3l_zg_13TeV_nvtx239->SetBinError(10,0.03666702);
   new_histo_group_WZ_wh3l_zg_13TeV_nvtx239->SetBinError(11,0.03382215);
   new_histo_group_WZ_wh3l_zg_13TeV_nvtx239->SetBinError(12,0.02973199);
   new_histo_group_WZ_wh3l_zg_13TeV_nvtx239->SetBinError(13,0.02710765);
   new_histo_group_WZ_wh3l_zg_13TeV_nvtx239->SetBinError(14,0.02309621);
   new_histo_group_WZ_wh3l_zg_13TeV_nvtx239->SetBinError(15,0.02163347);
   new_histo_group_WZ_wh3l_zg_13TeV_nvtx239->SetBinError(16,0.01431948);
   new_histo_group_WZ_wh3l_zg_13TeV_nvtx239->SetBinError(17,0.008585987);
   new_histo_group_WZ_wh3l_zg_13TeV_nvtx239->SetBinError(18,0.01106926);
   new_histo_group_WZ_wh3l_zg_13TeV_nvtx239->SetBinError(19,0.00382777);
   new_histo_group_WZ_wh3l_zg_13TeV_nvtx239->SetBinError(20,0.001139302);
   new_histo_group_WZ_wh3l_zg_13TeV_nvtx239->SetBinError(21,0.0055735);
   new_histo_group_WZ_wh3l_zg_13TeV_nvtx239->SetBinError(22,0.001746862);
   new_histo_group_WZ_wh3l_zg_13TeV_nvtx239->SetBinError(23,1.100137e-10);
   new_histo_group_WZ_wh3l_zg_13TeV_nvtx239->SetBinError(25,0.001049616);
   new_histo_group_WZ_wh3l_zg_13TeV_nvtx239->SetBinError(27,2.290836e-09);
   new_histo_group_WZ_wh3l_zg_13TeV_nvtx239->SetEntries(376);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_zg_13TeV_nvtx239->SetFillColor(ci);
   new_histo_group_WZ_wh3l_zg_13TeV_nvtx239->SetFillStyle(3001);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_zg_13TeV_nvtx239->SetLineColor(ci);
   new_histo_group_WZ_wh3l_zg_13TeV_nvtx239->GetXaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_zg_13TeV_nvtx239->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_zg_13TeV_nvtx239->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_zg_13TeV_nvtx239->GetXaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_zg_13TeV_nvtx239->GetYaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_zg_13TeV_nvtx239->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_zg_13TeV_nvtx239->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_zg_13TeV_nvtx239->GetYaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_zg_13TeV_nvtx239->GetZaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_zg_13TeV_nvtx239->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_zg_13TeV_nvtx239->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_zg_13TeV_nvtx239->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_nvtx->Add(new_histo_group_WZ_wh3l_zg_13TeV_nvtx,"");
   thsBackground_grouped_wh3l_zg_13TeV_nvtx->Draw("hist same");
   
   Double_t _fx3059[40] = {
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
   Double_t _fy3059[40] = {
   0,
   -0.007202128,
   0.2303703,
   1.152554,
   4.669137,
   6.74355,
   9.412563,
   11.17368,
   16.52819,
   16.75102,
   15.47567,
   14.52104,
   11.6868,
   8.390187,
   6.196851,
   2.573454,
   2.750029,
   1.478588,
   0.277751,
   0.3658442,
   0.3572912,
   0.2579254,
   2.677894e-06,
   0.02435116,
   -0.07319475,
   1.107037e-08,
   2.290836e-09,
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
   Double_t _felx3059[40] = {
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
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
   Double_t _fely3059[40] = {
   0,
   0.007519243,
   0.1654309,
   0.678451,
   1.181799,
   2.0648,
   2.520925,
   2.308931,
   3.178003,
   3.04795,
   2.971441,
   3.205026,
   2.790384,
   1.771746,
   1.698519,
   0.6372017,
   1.396012,
   0.9181303,
   0.4115562,
   0.1909517,
   0.2464947,
   0.1973027,
   2.67887e-06,
   0.02434065,
   0.0753113,
   1.107441e-08,
   2.290836e-09,
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
   Double_t _fehx3059[40] = {
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
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
   Double_t _fehy3059[40] = {
   0,
   0.007519243,
   0.2953638,
   0.6784511,
   1.682845,
   2.0648,
   2.520926,
   2.480396,
   3.178002,
   3.047954,
   2.971441,
   3.205027,
   2.790386,
   1.771746,
   1.698519,
   1.007017,
   1.396012,
   0.9181303,
   0.325383,
   0.1909517,
   0.2464947,
   0.1973026,
   2.67887e-06,
   0.02434066,
   0.0753113,
   1.107441e-08,
   2.290836e-09,
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
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(40,_fx3059,_fy3059,_felx3059,_fehx3059,_fely3059,_fehy3059);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(12);
   grae->SetFillStyle(3004);
   grae->SetLineColor(12);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3059 = new TH1F("Graph_Graph3059","",100,0,44);
   Graph_Graph3059->SetMinimum(-2.143254);
   Graph_Graph3059->SetMaximum(21.79372);
   Graph_Graph3059->SetDirectory(0);
   Graph_Graph3059->SetStats(0);
   Graph_Graph3059->SetLineStyle(0);
   Graph_Graph3059->SetMarkerStyle(20);
   Graph_Graph3059->GetXaxis()->SetLabelFont(42);
   Graph_Graph3059->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3059->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3059->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3059->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3059->GetXaxis()->SetTitleFont(42);
   Graph_Graph3059->GetYaxis()->SetLabelFont(42);
   Graph_Graph3059->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3059->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3059->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3059->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3059->GetYaxis()->SetTitleFont(42);
   Graph_Graph3059->GetZaxis()->SetLabelFont(42);
   Graph_Graph3059->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3059->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3059->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3059->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3059);
   
   grae->Draw("2");
   
   Double_t _fx3060[40] = {
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
   Double_t _fy3060[40] = {
   0,
   0,
   1,
   0,
   7,
   10,
   13,
   17,
   20,
   14,
   4,
   13,
   16,
   9,
   4,
   3,
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
   Double_t _felx3060[40] = {
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
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
   Double_t _fely3060[40] = {
   0,
   0,
   0.8272524,
   0,
   2.581513,
   3.108748,
   3.558726,
   4.082258,
   4.43453,
   3.696567,
   1.914367,
   3.558726,
   3.957873,
   2.943511,
   1.914367,
   1.632727,
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
   Double_t _fehx3060[40] = {
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
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
   Double_t _fehy3060[40] = {
   1.147908,
   1.147908,
   2.29957,
   1.147908,
   3.770356,
   4.267035,
   4.697669,
   5.203825,
   5.546633,
   4.830479,
   3.162815,
   4.697669,
   5.083169,
   4.110286,
   3.162815,
   2.918242,
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
   grae = new TGraphAsymmErrors(40,_fx3060,_fy3060,_felx3060,_fehx3060,_fely3060,_fehy3060);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(1);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3060 = new TH1F("Graph_Graph3060","",100,0,44);
   Graph_Graph3060->SetMinimum(0);
   Graph_Graph3060->SetMaximum(28.1013);
   Graph_Graph3060->SetDirectory(0);
   Graph_Graph3060->SetStats(0);
   Graph_Graph3060->SetLineStyle(0);
   Graph_Graph3060->SetMarkerStyle(20);
   Graph_Graph3060->GetXaxis()->SetLabelFont(42);
   Graph_Graph3060->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3060->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3060->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3060->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3060->GetXaxis()->SetTitleFont(42);
   Graph_Graph3060->GetYaxis()->SetLabelFont(42);
   Graph_Graph3060->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3060->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3060->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3060->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3060->GetYaxis()->SetTitleFont(42);
   Graph_Graph3060->GetZaxis()->SetLabelFont(42);
   Graph_Graph3060->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3060->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3060->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3060->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3060);
   
   grae->Draw("p0");
   
   TLegend *leg = new TLegend(0.2,0.7,0.8,0.9,NULL,"brNDC");
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
   
   leg = new TLegend(0.2,0.7,0.8,0.9,NULL,"brNDC");
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
   
   TH1F *hframe_copy240 = new TH1F("hframe_copy240","",1000,0,40);
   hframe_copy240->SetMinimum(0);
   hframe_copy240->SetMaximum(61.18034);
   hframe_copy240->SetDirectory(0);
   hframe_copy240->SetStats(0);
   hframe_copy240->SetLineStyle(0);
   hframe_copy240->SetMarkerStyle(20);
   hframe_copy240->GetXaxis()->SetTitle("nvtx");
   hframe_copy240->GetXaxis()->SetNdivisions(506);
   hframe_copy240->GetXaxis()->SetLabelFont(42);
   hframe_copy240->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy240->GetXaxis()->SetLabelSize(0.05);
   hframe_copy240->GetXaxis()->SetTitleSize(0.06);
   hframe_copy240->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy240->GetXaxis()->SetTitleFont(42);
   hframe_copy240->GetYaxis()->SetTitle("Events");
   hframe_copy240->GetYaxis()->SetLabelFont(42);
   hframe_copy240->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy240->GetYaxis()->SetLabelSize(0.05);
   hframe_copy240->GetYaxis()->SetTitleSize(0.06);
   hframe_copy240->GetYaxis()->SetTitleOffset(1.25);
   hframe_copy240->GetYaxis()->SetTitleFont(42);
   hframe_copy240->GetZaxis()->SetLabelFont(42);
   hframe_copy240->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy240->GetZaxis()->SetLabelSize(0.05);
   hframe_copy240->GetZaxis()->SetTitleSize(0.06);
   hframe_copy240->GetZaxis()->SetTitleFont(42);
   hframe_copy240->Draw("sameaxis");
   ccwh3l_zg_13TeV_nvtx->Modified();
   ccwh3l_zg_13TeV_nvtx->cd();
   ccwh3l_zg_13TeV_nvtx->SetSelected(ccwh3l_zg_13TeV_nvtx);
}
