void c_wh3l_zg_13TeV_nvtx()
{
//=========Macro generated from canvas: ccwh3l_zg_13TeV_nvtx/cc
//=========  (Sat Jul  2 20:39:46 2016) by ROOT version6.02/13
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
   
   TH1F *hframe181 = new TH1F("hframe181","",1000,0,40);
   hframe181->SetMinimum(0);
   hframe181->SetMaximum(61.18034);
   hframe181->SetDirectory(0);
   hframe181->SetStats(0);
   hframe181->SetLineStyle(0);
   hframe181->SetMarkerStyle(20);
   hframe181->GetXaxis()->SetTitle("nvtx");
   hframe181->GetXaxis()->SetNdivisions(506);
   hframe181->GetXaxis()->SetLabelFont(42);
   hframe181->GetXaxis()->SetLabelOffset(0.007);
   hframe181->GetXaxis()->SetLabelSize(0.05);
   hframe181->GetXaxis()->SetTitleSize(0.06);
   hframe181->GetXaxis()->SetTitleOffset(0.9);
   hframe181->GetXaxis()->SetTitleFont(42);
   hframe181->GetYaxis()->SetTitle("Events");
   hframe181->GetYaxis()->SetLabelFont(42);
   hframe181->GetYaxis()->SetLabelOffset(0.007);
   hframe181->GetYaxis()->SetLabelSize(0.05);
   hframe181->GetYaxis()->SetTitleSize(0.06);
   hframe181->GetYaxis()->SetTitleOffset(1.25);
   hframe181->GetYaxis()->SetTitleFont(42);
   hframe181->GetZaxis()->SetLabelFont(42);
   hframe181->GetZaxis()->SetLabelOffset(0.007);
   hframe181->GetZaxis()->SetLabelSize(0.05);
   hframe181->GetZaxis()->SetTitleSize(0.06);
   hframe181->GetZaxis()->SetTitleFont(42);
   hframe181->Draw(" ");
   
   THStack *thsBackground_grouped_wh3l_zg_13TeV_nvtx = new THStack();
   thsBackground_grouped_wh3l_zg_13TeV_nvtx->SetName("thsBackground_grouped_wh3l_zg_13TeV_nvtx");
   thsBackground_grouped_wh3l_zg_13TeV_nvtx->SetTitle("thsBackground_grouped_wh3l_zg_13TeV_nvtx");
   
   TH1F *thsBackground_grouped_wh3l_zg_13TeV_nvtx_stack_41 = new TH1F("thsBackground_grouped_wh3l_zg_13TeV_nvtx_stack_41","thsBackground_grouped_wh3l_zg_13TeV_nvtx",40,0,40);
   thsBackground_grouped_wh3l_zg_13TeV_nvtx_stack_41->SetMinimum(-0.5037822);
   thsBackground_grouped_wh3l_zg_13TeV_nvtx_stack_41->SetMaximum(17.50872);
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
   
   
   TH1D *new_histo_group_Fake_wh3l_zg_13TeV_nvtx182 = new TH1D("new_histo_group_Fake_wh3l_zg_13TeV_nvtx182","histo_Fake",40,0,40);
   new_histo_group_Fake_wh3l_zg_13TeV_nvtx182->SetBinContent(2,-0.007202128);
   new_histo_group_Fake_wh3l_zg_13TeV_nvtx182->SetBinContent(3,0.005392462);
   new_histo_group_Fake_wh3l_zg_13TeV_nvtx182->SetBinContent(4,0.4043149);
   new_histo_group_Fake_wh3l_zg_13TeV_nvtx182->SetBinContent(5,0.2989986);
   new_histo_group_Fake_wh3l_zg_13TeV_nvtx182->SetBinContent(6,1.393944);
   new_histo_group_Fake_wh3l_zg_13TeV_nvtx182->SetBinContent(7,2.437928);
   new_histo_group_Fake_wh3l_zg_13TeV_nvtx182->SetBinContent(8,0.9133347);
   new_histo_group_Fake_wh3l_zg_13TeV_nvtx182->SetBinContent(9,1.971844);
   new_histo_group_Fake_wh3l_zg_13TeV_nvtx182->SetBinContent(10,2.3099);
   new_histo_group_Fake_wh3l_zg_13TeV_nvtx182->SetBinContent(11,4.552754);
   new_histo_group_Fake_wh3l_zg_13TeV_nvtx182->SetBinContent(12,2.994637);
   new_histo_group_Fake_wh3l_zg_13TeV_nvtx182->SetBinContent(13,2.374647);
   new_histo_group_Fake_wh3l_zg_13TeV_nvtx182->SetBinContent(14,0.9885482);
   new_histo_group_Fake_wh3l_zg_13TeV_nvtx182->SetBinContent(15,0.7182459);
   new_histo_group_Fake_wh3l_zg_13TeV_nvtx182->SetBinContent(16,0.08121552);
   new_histo_group_Fake_wh3l_zg_13TeV_nvtx182->SetBinContent(17,1.317642);
   new_histo_group_Fake_wh3l_zg_13TeV_nvtx182->SetBinContent(18,0.7451644);
   new_histo_group_Fake_wh3l_zg_13TeV_nvtx182->SetBinContent(19,-0.1307349);
   new_histo_group_Fake_wh3l_zg_13TeV_nvtx182->SetBinContent(21,0.1384125);
   new_histo_group_Fake_wh3l_zg_13TeV_nvtx182->SetBinContent(22,0.07181522);
   new_histo_group_Fake_wh3l_zg_13TeV_nvtx182->SetBinError(2,0.007202128);
   new_histo_group_Fake_wh3l_zg_13TeV_nvtx182->SetBinError(3,0.1353779);
   new_histo_group_Fake_wh3l_zg_13TeV_nvtx182->SetBinError(4,0.2068983);
   new_histo_group_Fake_wh3l_zg_13TeV_nvtx182->SetBinError(5,0.8027808);
   new_histo_group_Fake_wh3l_zg_13TeV_nvtx182->SetBinError(6,0.9638045);
   new_histo_group_Fake_wh3l_zg_13TeV_nvtx182->SetBinError(7,1.330176);
   new_histo_group_Fake_wh3l_zg_13TeV_nvtx182->SetBinError(8,1.087076);
   new_histo_group_Fake_wh3l_zg_13TeV_nvtx182->SetBinError(9,1.603437);
   new_histo_group_Fake_wh3l_zg_13TeV_nvtx182->SetBinError(10,1.357628);
   new_histo_group_Fake_wh3l_zg_13TeV_nvtx182->SetBinError(11,1.340534);
   new_histo_group_Fake_wh3l_zg_13TeV_nvtx182->SetBinError(12,1.715072);
   new_histo_group_Fake_wh3l_zg_13TeV_nvtx182->SetBinError(13,1.550767);
   new_histo_group_Fake_wh3l_zg_13TeV_nvtx182->SetBinError(14,0.7790306);
   new_histo_group_Fake_wh3l_zg_13TeV_nvtx182->SetBinError(15,0.6753007);
   new_histo_group_Fake_wh3l_zg_13TeV_nvtx182->SetBinError(16,0.4524674);
   new_histo_group_Fake_wh3l_zg_13TeV_nvtx182->SetBinError(17,0.8115049);
   new_histo_group_Fake_wh3l_zg_13TeV_nvtx182->SetBinError(18,0.5988731);
   new_histo_group_Fake_wh3l_zg_13TeV_nvtx182->SetBinError(19,0.2174466);
   new_histo_group_Fake_wh3l_zg_13TeV_nvtx182->SetBinError(21,0.1384125);
   new_histo_group_Fake_wh3l_zg_13TeV_nvtx182->SetBinError(22,0.07181522);
   new_histo_group_Fake_wh3l_zg_13TeV_nvtx182->SetEntries(460);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_zg_13TeV_nvtx182->SetFillColor(ci);
   new_histo_group_Fake_wh3l_zg_13TeV_nvtx182->SetFillStyle(3001);

   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_zg_13TeV_nvtx182->SetLineColor(ci);
   new_histo_group_Fake_wh3l_zg_13TeV_nvtx182->GetXaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_zg_13TeV_nvtx182->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_zg_13TeV_nvtx182->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_zg_13TeV_nvtx182->GetXaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_zg_13TeV_nvtx182->GetYaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_zg_13TeV_nvtx182->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_zg_13TeV_nvtx182->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_zg_13TeV_nvtx182->GetYaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_zg_13TeV_nvtx182->GetZaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_zg_13TeV_nvtx182->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_zg_13TeV_nvtx182->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_zg_13TeV_nvtx182->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_nvtx->Add(new_histo_group_Fake_wh3l_zg_13TeV_nvtx,"");
   
   TH1D *new_histo_group_WW_wh3l_zg_13TeV_nvtx183 = new TH1D("new_histo_group_WW_wh3l_zg_13TeV_nvtx183","histo_WW",40,0,40);
   new_histo_group_WW_wh3l_zg_13TeV_nvtx183->SetBinContent(16,0.009961222);
   new_histo_group_WW_wh3l_zg_13TeV_nvtx183->SetBinError(16,0.009961222);
   new_histo_group_WW_wh3l_zg_13TeV_nvtx183->SetEntries(1);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_zg_13TeV_nvtx183->SetFillColor(ci);
   new_histo_group_WW_wh3l_zg_13TeV_nvtx183->SetFillStyle(3001);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_zg_13TeV_nvtx183->SetLineColor(ci);
   new_histo_group_WW_wh3l_zg_13TeV_nvtx183->GetXaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_zg_13TeV_nvtx183->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_zg_13TeV_nvtx183->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_zg_13TeV_nvtx183->GetXaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_zg_13TeV_nvtx183->GetYaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_zg_13TeV_nvtx183->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_zg_13TeV_nvtx183->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_zg_13TeV_nvtx183->GetYaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_zg_13TeV_nvtx183->GetZaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_zg_13TeV_nvtx183->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_zg_13TeV_nvtx183->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_zg_13TeV_nvtx183->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_nvtx->Add(new_histo_group_WW_wh3l_zg_13TeV_nvtx,"");
   
   TH1D *new_histo_group_Vg_wh3l_zg_13TeV_nvtx184 = new TH1D("new_histo_group_Vg_wh3l_zg_13TeV_nvtx184","histo_Vg",40,0,40);
   new_histo_group_Vg_wh3l_zg_13TeV_nvtx184->SetBinContent(3,0.2249779);
   new_histo_group_Vg_wh3l_zg_13TeV_nvtx184->SetBinContent(4,0.7361533);
   new_histo_group_Vg_wh3l_zg_13TeV_nvtx184->SetBinContent(5,4.140012);
   new_histo_group_Vg_wh3l_zg_13TeV_nvtx184->SetBinContent(6,5.18226);
   new_histo_group_Vg_wh3l_zg_13TeV_nvtx184->SetBinContent(7,6.709586);
   new_histo_group_Vg_wh3l_zg_13TeV_nvtx184->SetBinContent(8,10.03869);
   new_histo_group_Vg_wh3l_zg_13TeV_nvtx184->SetBinContent(9,14.27113);
   new_histo_group_Vg_wh3l_zg_13TeV_nvtx184->SetBinContent(10,13.94391);
   new_histo_group_Vg_wh3l_zg_13TeV_nvtx184->SetBinContent(11,10.71032);
   new_histo_group_Vg_wh3l_zg_13TeV_nvtx184->SetBinContent(12,11.23956);
   new_histo_group_Vg_wh3l_zg_13TeV_nvtx184->SetBinContent(13,9.101963);
   new_histo_group_Vg_wh3l_zg_13TeV_nvtx184->SetBinContent(14,7.247431);
   new_histo_group_Vg_wh3l_zg_13TeV_nvtx184->SetBinContent(15,4.817917);
   new_histo_group_Vg_wh3l_zg_13TeV_nvtx184->SetBinContent(16,2.436118);
   new_histo_group_Vg_wh3l_zg_13TeV_nvtx184->SetBinContent(17,1.346597);
   new_histo_group_Vg_wh3l_zg_13TeV_nvtx184->SetBinContent(18,0.7057932);
   new_histo_group_Vg_wh3l_zg_13TeV_nvtx184->SetBinContent(19,0.4046562);
   new_histo_group_Vg_wh3l_zg_13TeV_nvtx184->SetBinContent(20,0.3647049);
   new_histo_group_Vg_wh3l_zg_13TeV_nvtx184->SetBinContent(21,0.2129954);
   new_histo_group_Vg_wh3l_zg_13TeV_nvtx184->SetBinContent(22,0.1819512);
   new_histo_group_Vg_wh3l_zg_13TeV_nvtx184->SetBinContent(23,2.677784e-06);
   new_histo_group_Vg_wh3l_zg_13TeV_nvtx184->SetBinContent(24,0.02435116);
   new_histo_group_Vg_wh3l_zg_13TeV_nvtx184->SetBinContent(25,-0.07424437);
   new_histo_group_Vg_wh3l_zg_13TeV_nvtx184->SetBinContent(26,1.107037e-08);
   new_histo_group_Vg_wh3l_zg_13TeV_nvtx184->SetBinContent(28,6.521099e-07);
   new_histo_group_Vg_wh3l_zg_13TeV_nvtx184->SetBinContent(34,1.905084e-09);
   new_histo_group_Vg_wh3l_zg_13TeV_nvtx184->SetBinError(3,0.159919);
   new_histo_group_Vg_wh3l_zg_13TeV_nvtx184->SetBinError(4,0.4517781);
   new_histo_group_Vg_wh3l_zg_13TeV_nvtx184->SetBinError(5,0.8102275);
   new_histo_group_Vg_wh3l_zg_13TeV_nvtx184->SetBinError(6,0.983764);
   new_histo_group_Vg_wh3l_zg_13TeV_nvtx184->SetBinError(7,0.9817858);
   new_histo_group_Vg_wh3l_zg_13TeV_nvtx184->SetBinError(8,1.294576);
   new_histo_group_Vg_wh3l_zg_13TeV_nvtx184->SetBinError(9,1.412649);
   new_histo_group_Vg_wh3l_zg_13TeV_nvtx184->SetBinError(10,1.443433);
   new_histo_group_Vg_wh3l_zg_13TeV_nvtx184->SetBinError(11,1.248681);
   new_histo_group_Vg_wh3l_zg_13TeV_nvtx184->SetBinError(12,1.250702);
   new_histo_group_Vg_wh3l_zg_13TeV_nvtx184->SetBinError(13,1.056514);
   new_histo_group_Vg_wh3l_zg_13TeV_nvtx184->SetBinError(14,0.8980216);
   new_histo_group_Vg_wh3l_zg_13TeV_nvtx184->SetBinError(15,0.7448369);
   new_histo_group_Vg_wh3l_zg_13TeV_nvtx184->SetBinError(16,0.527805);
   new_histo_group_Vg_wh3l_zg_13TeV_nvtx184->SetBinError(17,0.5137181);
   new_histo_group_Vg_wh3l_zg_13TeV_nvtx184->SetBinError(18,0.2803531);
   new_histo_group_Vg_wh3l_zg_13TeV_nvtx184->SetBinError(19,0.1882631);
   new_histo_group_Vg_wh3l_zg_13TeV_nvtx184->SetBinError(20,0.1895583);
   new_histo_group_Vg_wh3l_zg_13TeV_nvtx184->SetBinError(21,0.09891799);
   new_histo_group_Vg_wh3l_zg_13TeV_nvtx184->SetBinError(22,0.1200854);
   new_histo_group_Vg_wh3l_zg_13TeV_nvtx184->SetBinError(23,2.677784e-06);
   new_histo_group_Vg_wh3l_zg_13TeV_nvtx184->SetBinError(24,0.02433177);
   new_histo_group_Vg_wh3l_zg_13TeV_nvtx184->SetBinError(25,0.074235);
   new_histo_group_Vg_wh3l_zg_13TeV_nvtx184->SetBinError(26,1.107037e-08);
   new_histo_group_Vg_wh3l_zg_13TeV_nvtx184->SetBinError(28,6.521099e-07);
   new_histo_group_Vg_wh3l_zg_13TeV_nvtx184->SetBinError(34,1.905084e-09);
   new_histo_group_Vg_wh3l_zg_13TeV_nvtx184->SetEntries(1376);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_zg_13TeV_nvtx184->SetFillColor(ci);
   new_histo_group_Vg_wh3l_zg_13TeV_nvtx184->SetFillStyle(3001);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_zg_13TeV_nvtx184->SetLineColor(ci);
   new_histo_group_Vg_wh3l_zg_13TeV_nvtx184->GetXaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_zg_13TeV_nvtx184->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_zg_13TeV_nvtx184->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_zg_13TeV_nvtx184->GetXaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_zg_13TeV_nvtx184->GetYaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_zg_13TeV_nvtx184->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_zg_13TeV_nvtx184->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_zg_13TeV_nvtx184->GetYaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_zg_13TeV_nvtx184->GetZaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_zg_13TeV_nvtx184->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_zg_13TeV_nvtx184->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_zg_13TeV_nvtx184->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_nvtx->Add(new_histo_group_Vg_wh3l_zg_13TeV_nvtx,"");
   
   TH1D *new_histo_group_ZZ_wh3l_zg_13TeV_nvtx185 = new TH1D("new_histo_group_ZZ_wh3l_zg_13TeV_nvtx185","histo_ZZ",40,0,40);
   new_histo_group_ZZ_wh3l_zg_13TeV_nvtx185->SetBinContent(5,0.03249944);
   new_histo_group_ZZ_wh3l_zg_13TeV_nvtx185->SetBinContent(6,0.04202887);
   new_histo_group_ZZ_wh3l_zg_13TeV_nvtx185->SetBinContent(7,0.08642198);
   new_histo_group_ZZ_wh3l_zg_13TeV_nvtx185->SetBinContent(8,0.03645855);
   new_histo_group_ZZ_wh3l_zg_13TeV_nvtx185->SetBinContent(9,0.04575732);
   new_histo_group_ZZ_wh3l_zg_13TeV_nvtx185->SetBinContent(10,0.1685441);
   new_histo_group_ZZ_wh3l_zg_13TeV_nvtx185->SetBinContent(12,0.07844918);
   new_histo_group_ZZ_wh3l_zg_13TeV_nvtx185->SetBinContent(13,0.07232913);
   new_histo_group_ZZ_wh3l_zg_13TeV_nvtx185->SetBinContent(14,0.02846774);
   new_histo_group_ZZ_wh3l_zg_13TeV_nvtx185->SetBinContent(22,0.002412119);
   new_histo_group_ZZ_wh3l_zg_13TeV_nvtx185->SetBinError(5,0.03249944);
   new_histo_group_ZZ_wh3l_zg_13TeV_nvtx185->SetBinError(6,0.04202887);
   new_histo_group_ZZ_wh3l_zg_13TeV_nvtx185->SetBinError(7,0.06129487);
   new_histo_group_ZZ_wh3l_zg_13TeV_nvtx185->SetBinError(8,0.03645855);
   new_histo_group_ZZ_wh3l_zg_13TeV_nvtx185->SetBinError(9,0.04575732);
   new_histo_group_ZZ_wh3l_zg_13TeV_nvtx185->SetBinError(10,0.0859509);
   new_histo_group_ZZ_wh3l_zg_13TeV_nvtx185->SetBinError(12,0.05548062);
   new_histo_group_ZZ_wh3l_zg_13TeV_nvtx185->SetBinError(13,0.05212968);
   new_histo_group_ZZ_wh3l_zg_13TeV_nvtx185->SetBinError(14,0.02846774);
   new_histo_group_ZZ_wh3l_zg_13TeV_nvtx185->SetBinError(22,0.002412119);
   new_histo_group_ZZ_wh3l_zg_13TeV_nvtx185->SetEntries(16);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_zg_13TeV_nvtx185->SetFillColor(ci);
   new_histo_group_ZZ_wh3l_zg_13TeV_nvtx185->SetFillStyle(3001);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_zg_13TeV_nvtx185->SetLineColor(ci);
   new_histo_group_ZZ_wh3l_zg_13TeV_nvtx185->GetXaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_zg_13TeV_nvtx185->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_zg_13TeV_nvtx185->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_zg_13TeV_nvtx185->GetXaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_zg_13TeV_nvtx185->GetYaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_zg_13TeV_nvtx185->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_zg_13TeV_nvtx185->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_zg_13TeV_nvtx185->GetYaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_zg_13TeV_nvtx185->GetZaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_zg_13TeV_nvtx185->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_zg_13TeV_nvtx185->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_zg_13TeV_nvtx185->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_nvtx->Add(new_histo_group_ZZ_wh3l_zg_13TeV_nvtx,"");
   
   TH1D *new_histo_group_WZ_wh3l_zg_13TeV_nvtx186 = new TH1D("new_histo_group_WZ_wh3l_zg_13TeV_nvtx186","histo_WZ",40,0,40);
   new_histo_group_WZ_wh3l_zg_13TeV_nvtx186->SetBinContent(4,0.01208537);
   new_histo_group_WZ_wh3l_zg_13TeV_nvtx186->SetBinContent(5,0.06845817);
   new_histo_group_WZ_wh3l_zg_13TeV_nvtx186->SetBinContent(6,0.1253179);
   new_histo_group_WZ_wh3l_zg_13TeV_nvtx186->SetBinContent(7,0.1786277);
   new_histo_group_WZ_wh3l_zg_13TeV_nvtx186->SetBinContent(8,0.1852012);
   new_histo_group_WZ_wh3l_zg_13TeV_nvtx186->SetBinContent(9,0.2394513);
   new_histo_group_WZ_wh3l_zg_13TeV_nvtx186->SetBinContent(10,0.2420552);
   new_histo_group_WZ_wh3l_zg_13TeV_nvtx186->SetBinContent(11,0.2126052);
   new_histo_group_WZ_wh3l_zg_13TeV_nvtx186->SetBinContent(12,0.1731557);
   new_histo_group_WZ_wh3l_zg_13TeV_nvtx186->SetBinContent(13,0.1378588);
   new_histo_group_WZ_wh3l_zg_13TeV_nvtx186->SetBinContent(14,0.1046082);
   new_histo_group_WZ_wh3l_zg_13TeV_nvtx186->SetBinContent(15,0.09419603);
   new_histo_group_WZ_wh3l_zg_13TeV_nvtx186->SetBinContent(16,0.04615917);
   new_histo_group_WZ_wh3l_zg_13TeV_nvtx186->SetBinContent(17,0.01746517);
   new_histo_group_WZ_wh3l_zg_13TeV_nvtx186->SetBinContent(18,0.02763017);
   new_histo_group_WZ_wh3l_zg_13TeV_nvtx186->SetBinContent(19,0.003829751);
   new_histo_group_WZ_wh3l_zg_13TeV_nvtx186->SetBinContent(20,0.001139302);
   new_histo_group_WZ_wh3l_zg_13TeV_nvtx186->SetBinContent(21,0.005883264);
   new_histo_group_WZ_wh3l_zg_13TeV_nvtx186->SetBinContent(22,0.001746862);
   new_histo_group_WZ_wh3l_zg_13TeV_nvtx186->SetBinContent(23,1.100137e-10);
   new_histo_group_WZ_wh3l_zg_13TeV_nvtx186->SetBinContent(25,0.001049616);
   new_histo_group_WZ_wh3l_zg_13TeV_nvtx186->SetBinContent(27,2.290836e-09);
   new_histo_group_WZ_wh3l_zg_13TeV_nvtx186->SetBinError(4,0.008548019);
   new_histo_group_WZ_wh3l_zg_13TeV_nvtx186->SetBinError(5,0.02069522);
   new_histo_group_WZ_wh3l_zg_13TeV_nvtx186->SetBinError(6,0.02748578);
   new_histo_group_WZ_wh3l_zg_13TeV_nvtx186->SetBinError(7,0.03225388);
   new_histo_group_WZ_wh3l_zg_13TeV_nvtx186->SetBinError(8,0.03204975);
   new_histo_group_WZ_wh3l_zg_13TeV_nvtx186->SetBinError(9,0.03659783);
   new_histo_group_WZ_wh3l_zg_13TeV_nvtx186->SetBinError(10,0.03666702);
   new_histo_group_WZ_wh3l_zg_13TeV_nvtx186->SetBinError(11,0.03382215);
   new_histo_group_WZ_wh3l_zg_13TeV_nvtx186->SetBinError(12,0.02973199);
   new_histo_group_WZ_wh3l_zg_13TeV_nvtx186->SetBinError(13,0.02710765);
   new_histo_group_WZ_wh3l_zg_13TeV_nvtx186->SetBinError(14,0.02309621);
   new_histo_group_WZ_wh3l_zg_13TeV_nvtx186->SetBinError(15,0.02163347);
   new_histo_group_WZ_wh3l_zg_13TeV_nvtx186->SetBinError(16,0.01431948);
   new_histo_group_WZ_wh3l_zg_13TeV_nvtx186->SetBinError(17,0.008585987);
   new_histo_group_WZ_wh3l_zg_13TeV_nvtx186->SetBinError(18,0.01106926);
   new_histo_group_WZ_wh3l_zg_13TeV_nvtx186->SetBinError(19,0.00382777);
   new_histo_group_WZ_wh3l_zg_13TeV_nvtx186->SetBinError(20,0.001139302);
   new_histo_group_WZ_wh3l_zg_13TeV_nvtx186->SetBinError(21,0.0055735);
   new_histo_group_WZ_wh3l_zg_13TeV_nvtx186->SetBinError(22,0.001746862);
   new_histo_group_WZ_wh3l_zg_13TeV_nvtx186->SetBinError(23,1.100137e-10);
   new_histo_group_WZ_wh3l_zg_13TeV_nvtx186->SetBinError(25,0.001049616);
   new_histo_group_WZ_wh3l_zg_13TeV_nvtx186->SetBinError(27,2.290836e-09);
   new_histo_group_WZ_wh3l_zg_13TeV_nvtx186->SetEntries(376);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_zg_13TeV_nvtx186->SetFillColor(ci);
   new_histo_group_WZ_wh3l_zg_13TeV_nvtx186->SetFillStyle(3001);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_zg_13TeV_nvtx186->SetLineColor(ci);
   new_histo_group_WZ_wh3l_zg_13TeV_nvtx186->GetXaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_zg_13TeV_nvtx186->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_zg_13TeV_nvtx186->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_zg_13TeV_nvtx186->GetXaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_zg_13TeV_nvtx186->GetYaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_zg_13TeV_nvtx186->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_zg_13TeV_nvtx186->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_zg_13TeV_nvtx186->GetYaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_zg_13TeV_nvtx186->GetZaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_zg_13TeV_nvtx186->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_zg_13TeV_nvtx186->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_zg_13TeV_nvtx186->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_nvtx->Add(new_histo_group_WZ_wh3l_zg_13TeV_nvtx,"");
   
   TH1D *new_histo_group_Higgs_wh3l_zg_13TeV_nvtx187 = new TH1D("new_histo_group_Higgs_wh3l_zg_13TeV_nvtx187","histo_H_htt",40,0,40);
   new_histo_group_Higgs_wh3l_zg_13TeV_nvtx187->SetBinContent(4,0.001360304);
   new_histo_group_Higgs_wh3l_zg_13TeV_nvtx187->SetBinContent(5,0.0006294883);
   new_histo_group_Higgs_wh3l_zg_13TeV_nvtx187->SetBinContent(6,0.00628012);
   new_histo_group_Higgs_wh3l_zg_13TeV_nvtx187->SetBinContent(7,0.01011899);
   new_histo_group_Higgs_wh3l_zg_13TeV_nvtx187->SetBinContent(8,0.01303869);
   new_histo_group_Higgs_wh3l_zg_13TeV_nvtx187->SetBinContent(9,0.005842877);
   new_histo_group_Higgs_wh3l_zg_13TeV_nvtx187->SetBinContent(10,0.01055393);
   new_histo_group_Higgs_wh3l_zg_13TeV_nvtx187->SetBinContent(11,0.01231734);
   new_histo_group_Higgs_wh3l_zg_13TeV_nvtx187->SetBinContent(12,0.01007873);
   new_histo_group_Higgs_wh3l_zg_13TeV_nvtx187->SetBinContent(13,0.009789666);
   new_histo_group_Higgs_wh3l_zg_13TeV_nvtx187->SetBinContent(14,0.003117549);
   new_histo_group_Higgs_wh3l_zg_13TeV_nvtx187->SetBinContent(15,0.002529575);
   new_histo_group_Higgs_wh3l_zg_13TeV_nvtx187->SetBinContent(16,0.001331258);
   new_histo_group_Higgs_wh3l_zg_13TeV_nvtx187->SetBinContent(17,0.001216437);
   new_histo_group_Higgs_wh3l_zg_13TeV_nvtx187->SetBinContent(18,6.900733e-05);
   new_histo_group_Higgs_wh3l_zg_13TeV_nvtx187->SetBinContent(19,0.0002691248);
   new_histo_group_Higgs_wh3l_zg_13TeV_nvtx187->SetBinContent(20,0.0002077542);
   new_histo_group_Higgs_wh3l_zg_13TeV_nvtx187->SetBinContent(21,2.58193e-05);
   new_histo_group_Higgs_wh3l_zg_13TeV_nvtx187->SetBinContent(31,1.309013e-10);
   new_histo_group_Higgs_wh3l_zg_13TeV_nvtx187->SetBinError(4,0.001173732);
   new_histo_group_Higgs_wh3l_zg_13TeV_nvtx187->SetBinError(5,0.0004455522);
   new_histo_group_Higgs_wh3l_zg_13TeV_nvtx187->SetBinError(6,0.002899811);
   new_histo_group_Higgs_wh3l_zg_13TeV_nvtx187->SetBinError(7,0.003470568);
   new_histo_group_Higgs_wh3l_zg_13TeV_nvtx187->SetBinError(8,0.003916948);
   new_histo_group_Higgs_wh3l_zg_13TeV_nvtx187->SetBinError(9,0.002350152);
   new_histo_group_Higgs_wh3l_zg_13TeV_nvtx187->SetBinError(10,0.003201013);
   new_histo_group_Higgs_wh3l_zg_13TeV_nvtx187->SetBinError(11,0.003521001);
   new_histo_group_Higgs_wh3l_zg_13TeV_nvtx187->SetBinError(12,0.003100377);
   new_histo_group_Higgs_wh3l_zg_13TeV_nvtx187->SetBinError(13,0.003477022);
   new_histo_group_Higgs_wh3l_zg_13TeV_nvtx187->SetBinError(14,0.001564471);
   new_histo_group_Higgs_wh3l_zg_13TeV_nvtx187->SetBinError(15,0.002072013);
   new_histo_group_Higgs_wh3l_zg_13TeV_nvtx187->SetBinError(16,0.0007599738);
   new_histo_group_Higgs_wh3l_zg_13TeV_nvtx187->SetBinError(17,0.0006543294);
   new_histo_group_Higgs_wh3l_zg_13TeV_nvtx187->SetBinError(18,6.900733e-05);
   new_histo_group_Higgs_wh3l_zg_13TeV_nvtx187->SetBinError(19,0.0002691248);
   new_histo_group_Higgs_wh3l_zg_13TeV_nvtx187->SetBinError(20,0.000171931);
   new_histo_group_Higgs_wh3l_zg_13TeV_nvtx187->SetBinError(21,2.58193e-05);
   new_histo_group_Higgs_wh3l_zg_13TeV_nvtx187->SetBinError(31,1.309013e-10);
   new_histo_group_Higgs_wh3l_zg_13TeV_nvtx187->SetEntries(180);
   new_histo_group_Higgs_wh3l_zg_13TeV_nvtx187->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_zg_13TeV_nvtx187->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_zg_13TeV_nvtx187->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_zg_13TeV_nvtx187->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_zg_13TeV_nvtx187->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_zg_13TeV_nvtx187->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_zg_13TeV_nvtx187->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_zg_13TeV_nvtx187->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_zg_13TeV_nvtx187->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_zg_13TeV_nvtx187->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_zg_13TeV_nvtx187->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_zg_13TeV_nvtx187->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_zg_13TeV_nvtx187->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_zg_13TeV_nvtx187->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_zg_13TeV_nvtx187->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_nvtx->Add(new_histo_group_Higgs_wh3l_zg_13TeV_nvtx,"");
   thsBackground_grouped_wh3l_zg_13TeV_nvtx->Draw("hist same");
   
   thsSignal_grouped_wh3l_zg_13TeV_nvtx = new THStack();
   thsSignal_grouped_wh3l_zg_13TeV_nvtx->SetName("thsSignal_grouped_wh3l_zg_13TeV_nvtx");
   thsSignal_grouped_wh3l_zg_13TeV_nvtx->SetTitle("thsSignal_grouped_wh3l_zg_13TeV_nvtx");
   
   TH1F *thsSignal_grouped_wh3l_zg_13TeV_nvtx_stack_42 = new TH1F("thsSignal_grouped_wh3l_zg_13TeV_nvtx_stack_42","thsSignal_grouped_wh3l_zg_13TeV_nvtx",40,0,40);
   thsSignal_grouped_wh3l_zg_13TeV_nvtx_stack_42->SetMinimum(0);
   thsSignal_grouped_wh3l_zg_13TeV_nvtx_stack_42->SetMaximum(0.01780342);
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
   
   
   TH1D *new_histo_group_Higgs_wh3l_zg_13TeV_nvtx188 = new TH1D("new_histo_group_Higgs_wh3l_zg_13TeV_nvtx188","histo_H_htt",40,0,40);
   new_histo_group_Higgs_wh3l_zg_13TeV_nvtx188->SetBinContent(4,0.001360304);
   new_histo_group_Higgs_wh3l_zg_13TeV_nvtx188->SetBinContent(5,0.0006294883);
   new_histo_group_Higgs_wh3l_zg_13TeV_nvtx188->SetBinContent(6,0.00628012);
   new_histo_group_Higgs_wh3l_zg_13TeV_nvtx188->SetBinContent(7,0.01011899);
   new_histo_group_Higgs_wh3l_zg_13TeV_nvtx188->SetBinContent(8,0.01303869);
   new_histo_group_Higgs_wh3l_zg_13TeV_nvtx188->SetBinContent(9,0.005842877);
   new_histo_group_Higgs_wh3l_zg_13TeV_nvtx188->SetBinContent(10,0.01055393);
   new_histo_group_Higgs_wh3l_zg_13TeV_nvtx188->SetBinContent(11,0.01231734);
   new_histo_group_Higgs_wh3l_zg_13TeV_nvtx188->SetBinContent(12,0.01007873);
   new_histo_group_Higgs_wh3l_zg_13TeV_nvtx188->SetBinContent(13,0.009789666);
   new_histo_group_Higgs_wh3l_zg_13TeV_nvtx188->SetBinContent(14,0.003117549);
   new_histo_group_Higgs_wh3l_zg_13TeV_nvtx188->SetBinContent(15,0.002529575);
   new_histo_group_Higgs_wh3l_zg_13TeV_nvtx188->SetBinContent(16,0.001331258);
   new_histo_group_Higgs_wh3l_zg_13TeV_nvtx188->SetBinContent(17,0.001216437);
   new_histo_group_Higgs_wh3l_zg_13TeV_nvtx188->SetBinContent(18,6.900733e-05);
   new_histo_group_Higgs_wh3l_zg_13TeV_nvtx188->SetBinContent(19,0.0002691248);
   new_histo_group_Higgs_wh3l_zg_13TeV_nvtx188->SetBinContent(20,0.0002077542);
   new_histo_group_Higgs_wh3l_zg_13TeV_nvtx188->SetBinContent(21,2.58193e-05);
   new_histo_group_Higgs_wh3l_zg_13TeV_nvtx188->SetBinContent(31,1.309013e-10);
   new_histo_group_Higgs_wh3l_zg_13TeV_nvtx188->SetBinError(4,0.001173732);
   new_histo_group_Higgs_wh3l_zg_13TeV_nvtx188->SetBinError(5,0.0004455522);
   new_histo_group_Higgs_wh3l_zg_13TeV_nvtx188->SetBinError(6,0.002899811);
   new_histo_group_Higgs_wh3l_zg_13TeV_nvtx188->SetBinError(7,0.003470568);
   new_histo_group_Higgs_wh3l_zg_13TeV_nvtx188->SetBinError(8,0.003916948);
   new_histo_group_Higgs_wh3l_zg_13TeV_nvtx188->SetBinError(9,0.002350152);
   new_histo_group_Higgs_wh3l_zg_13TeV_nvtx188->SetBinError(10,0.003201013);
   new_histo_group_Higgs_wh3l_zg_13TeV_nvtx188->SetBinError(11,0.003521001);
   new_histo_group_Higgs_wh3l_zg_13TeV_nvtx188->SetBinError(12,0.003100377);
   new_histo_group_Higgs_wh3l_zg_13TeV_nvtx188->SetBinError(13,0.003477022);
   new_histo_group_Higgs_wh3l_zg_13TeV_nvtx188->SetBinError(14,0.001564471);
   new_histo_group_Higgs_wh3l_zg_13TeV_nvtx188->SetBinError(15,0.002072013);
   new_histo_group_Higgs_wh3l_zg_13TeV_nvtx188->SetBinError(16,0.0007599738);
   new_histo_group_Higgs_wh3l_zg_13TeV_nvtx188->SetBinError(17,0.0006543294);
   new_histo_group_Higgs_wh3l_zg_13TeV_nvtx188->SetBinError(18,6.900733e-05);
   new_histo_group_Higgs_wh3l_zg_13TeV_nvtx188->SetBinError(19,0.0002691248);
   new_histo_group_Higgs_wh3l_zg_13TeV_nvtx188->SetBinError(20,0.000171931);
   new_histo_group_Higgs_wh3l_zg_13TeV_nvtx188->SetBinError(21,2.58193e-05);
   new_histo_group_Higgs_wh3l_zg_13TeV_nvtx188->SetBinError(31,1.309013e-10);
   new_histo_group_Higgs_wh3l_zg_13TeV_nvtx188->SetEntries(180);
   new_histo_group_Higgs_wh3l_zg_13TeV_nvtx188->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_zg_13TeV_nvtx188->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_zg_13TeV_nvtx188->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_zg_13TeV_nvtx188->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_zg_13TeV_nvtx188->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_zg_13TeV_nvtx188->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_zg_13TeV_nvtx188->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_zg_13TeV_nvtx188->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_zg_13TeV_nvtx188->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_zg_13TeV_nvtx188->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_zg_13TeV_nvtx188->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_zg_13TeV_nvtx188->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_zg_13TeV_nvtx188->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_zg_13TeV_nvtx188->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_zg_13TeV_nvtx188->GetZaxis()->SetTitleFont(42);
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
   4.539968,
   6.74355,
   9.412563,
   11.17368,
   16.52819,
   16.66441,
   15.47567,
   14.4858,
   11.6868,
   8.369055,
   5.630359,
   2.573454,
   2.681705,
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
   0.007630518,
   0.1660378,
   0.6831946,
   1.183647,
   2.087422,
   2.576327,
   2.342946,
   3.238271,
   3.10471,
   3.108557,
   3.280961,
   2.846695,
   1.794587,
   1.481297,
   0.6461976,
   1.412526,
   0.9291777,
   0.4125333,
   0.1922935,
   0.2478755,
   0.1977919,
   2.679574e-06,
   0.02436827,
   0.07531527,
   1.107692e-08,
   2.308272e-09,
   6.586574e-07,
   0,
   0,
   0,
   0,
   0,
   1.911595e-09,
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
   0.007630518,
   0.2957029,
   0.6831912,
   1.68086,
   2.087649,
   2.574275,
   2.51152,
   3.236906,
   3.102788,
   3.109581,
   3.277772,
   2.844727,
   1.793219,
   1.480392,
   1.012303,
   1.412571,
   0.9290164,
   0.3265712,
   0.1919294,
   0.2478783,
   0.1977998,
   2.6796e-06,
   0.02436964,
   0.07531516,
   1.107692e-08,
   2.303366e-09,
   6.584802e-07,
   0,
   0,
   0,
   0,
   0,
   1.914293e-09,
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
   Graph_Graph3041->SetMinimum(-2.140081);
   Graph_Graph3041->SetMaximum(21.75877);
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
   grae = new TGraphAsymmErrors(40,_fx3042,_fy3042,_felx3042,_fehx3042,_fely3042,_fehy3042);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(1);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3042 = new TH1F("Graph_Graph3042","",100,0,44);
   Graph_Graph3042->SetMinimum(0);
   Graph_Graph3042->SetMaximum(28.1013);
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
   
   TH1F *hframe_copy189 = new TH1F("hframe_copy189","",1000,0,40);
   hframe_copy189->SetMinimum(0);
   hframe_copy189->SetMaximum(61.18034);
   hframe_copy189->SetDirectory(0);
   hframe_copy189->SetStats(0);
   hframe_copy189->SetLineStyle(0);
   hframe_copy189->SetMarkerStyle(20);
   hframe_copy189->GetXaxis()->SetTitle("nvtx");
   hframe_copy189->GetXaxis()->SetNdivisions(506);
   hframe_copy189->GetXaxis()->SetLabelFont(42);
   hframe_copy189->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy189->GetXaxis()->SetLabelSize(0.05);
   hframe_copy189->GetXaxis()->SetTitleSize(0.06);
   hframe_copy189->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy189->GetXaxis()->SetTitleFont(42);
   hframe_copy189->GetYaxis()->SetTitle("Events");
   hframe_copy189->GetYaxis()->SetLabelFont(42);
   hframe_copy189->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy189->GetYaxis()->SetLabelSize(0.05);
   hframe_copy189->GetYaxis()->SetTitleSize(0.06);
   hframe_copy189->GetYaxis()->SetTitleOffset(1.25);
   hframe_copy189->GetYaxis()->SetTitleFont(42);
   hframe_copy189->GetZaxis()->SetLabelFont(42);
   hframe_copy189->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy189->GetZaxis()->SetLabelSize(0.05);
   hframe_copy189->GetZaxis()->SetTitleSize(0.06);
   hframe_copy189->GetZaxis()->SetTitleFont(42);
   hframe_copy189->Draw("sameaxis");
   ccwh3l_zg_13TeV_nvtx->Modified();
   ccwh3l_zg_13TeV_nvtx->cd();
   ccwh3l_zg_13TeV_nvtx->SetSelected(ccwh3l_zg_13TeV_nvtx);
}
