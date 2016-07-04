void c_wh3l_zg_13TeV_nvtx()
{
//=========Macro generated from canvas: ccwh3l_zg_13TeV_nvtx/cc
//=========  (Sun Jul  3 22:45:39 2016) by ROOT version6.02/13
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
   
   TH1F *hframe21 = new TH1F("hframe21","",1000,0,40);
   hframe21->SetMinimum(0);
   hframe21->SetMaximum(61.18034);
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
   
   THStack *thsBackground_grouped_wh3l_zg_13TeV_nvtx = new THStack();
   thsBackground_grouped_wh3l_zg_13TeV_nvtx->SetName("thsBackground_grouped_wh3l_zg_13TeV_nvtx");
   thsBackground_grouped_wh3l_zg_13TeV_nvtx->SetTitle("thsBackground_grouped_wh3l_zg_13TeV_nvtx");
   
   TH1F *thsBackground_grouped_wh3l_zg_13TeV_nvtx_stack_5 = new TH1F("thsBackground_grouped_wh3l_zg_13TeV_nvtx_stack_5","thsBackground_grouped_wh3l_zg_13TeV_nvtx",40,0,40);
   thsBackground_grouped_wh3l_zg_13TeV_nvtx_stack_5->SetMinimum(-0.5037822);
   thsBackground_grouped_wh3l_zg_13TeV_nvtx_stack_5->SetMaximum(17.51134);
   thsBackground_grouped_wh3l_zg_13TeV_nvtx_stack_5->SetDirectory(0);
   thsBackground_grouped_wh3l_zg_13TeV_nvtx_stack_5->SetStats(0);
   thsBackground_grouped_wh3l_zg_13TeV_nvtx_stack_5->SetLineStyle(0);
   thsBackground_grouped_wh3l_zg_13TeV_nvtx_stack_5->SetMarkerStyle(20);
   thsBackground_grouped_wh3l_zg_13TeV_nvtx_stack_5->GetXaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_nvtx_stack_5->GetXaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_zg_13TeV_nvtx_stack_5->GetXaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_zg_13TeV_nvtx_stack_5->GetXaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_zg_13TeV_nvtx_stack_5->GetXaxis()->SetTitleOffset(0.9);
   thsBackground_grouped_wh3l_zg_13TeV_nvtx_stack_5->GetXaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_nvtx_stack_5->GetYaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_nvtx_stack_5->GetYaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_zg_13TeV_nvtx_stack_5->GetYaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_zg_13TeV_nvtx_stack_5->GetYaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_zg_13TeV_nvtx_stack_5->GetYaxis()->SetTitleOffset(1.25);
   thsBackground_grouped_wh3l_zg_13TeV_nvtx_stack_5->GetYaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_nvtx_stack_5->GetZaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_nvtx_stack_5->GetZaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_zg_13TeV_nvtx_stack_5->GetZaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_zg_13TeV_nvtx_stack_5->GetZaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_zg_13TeV_nvtx_stack_5->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_nvtx->SetHistogram(thsBackground_grouped_wh3l_zg_13TeV_nvtx_stack_5);
   
   
   TH1D *new_histo_group_Fake_wh3l_zg_13TeV_nvtx22 = new TH1D("new_histo_group_Fake_wh3l_zg_13TeV_nvtx22","histo_Fake",40,0,40);
   new_histo_group_Fake_wh3l_zg_13TeV_nvtx22->SetBinContent(2,-0.007202128);
   new_histo_group_Fake_wh3l_zg_13TeV_nvtx22->SetBinContent(3,0.005392462);
   new_histo_group_Fake_wh3l_zg_13TeV_nvtx22->SetBinContent(4,0.4043149);
   new_histo_group_Fake_wh3l_zg_13TeV_nvtx22->SetBinContent(5,0.2989986);
   new_histo_group_Fake_wh3l_zg_13TeV_nvtx22->SetBinContent(6,1.393944);
   new_histo_group_Fake_wh3l_zg_13TeV_nvtx22->SetBinContent(7,2.437928);
   new_histo_group_Fake_wh3l_zg_13TeV_nvtx22->SetBinContent(8,0.9133347);
   new_histo_group_Fake_wh3l_zg_13TeV_nvtx22->SetBinContent(9,1.971844);
   new_histo_group_Fake_wh3l_zg_13TeV_nvtx22->SetBinContent(10,2.3099);
   new_histo_group_Fake_wh3l_zg_13TeV_nvtx22->SetBinContent(11,4.552754);
   new_histo_group_Fake_wh3l_zg_13TeV_nvtx22->SetBinContent(12,2.994637);
   new_histo_group_Fake_wh3l_zg_13TeV_nvtx22->SetBinContent(13,2.374647);
   new_histo_group_Fake_wh3l_zg_13TeV_nvtx22->SetBinContent(14,0.9885482);
   new_histo_group_Fake_wh3l_zg_13TeV_nvtx22->SetBinContent(15,0.7182459);
   new_histo_group_Fake_wh3l_zg_13TeV_nvtx22->SetBinContent(16,0.08121552);
   new_histo_group_Fake_wh3l_zg_13TeV_nvtx22->SetBinContent(17,1.317642);
   new_histo_group_Fake_wh3l_zg_13TeV_nvtx22->SetBinContent(18,0.7451644);
   new_histo_group_Fake_wh3l_zg_13TeV_nvtx22->SetBinContent(19,-0.1307349);
   new_histo_group_Fake_wh3l_zg_13TeV_nvtx22->SetBinContent(21,0.1384125);
   new_histo_group_Fake_wh3l_zg_13TeV_nvtx22->SetBinContent(22,0.07181522);
   new_histo_group_Fake_wh3l_zg_13TeV_nvtx22->SetBinError(2,0.007202128);
   new_histo_group_Fake_wh3l_zg_13TeV_nvtx22->SetBinError(3,0.1353779);
   new_histo_group_Fake_wh3l_zg_13TeV_nvtx22->SetBinError(4,0.2068983);
   new_histo_group_Fake_wh3l_zg_13TeV_nvtx22->SetBinError(5,0.8027808);
   new_histo_group_Fake_wh3l_zg_13TeV_nvtx22->SetBinError(6,0.9638045);
   new_histo_group_Fake_wh3l_zg_13TeV_nvtx22->SetBinError(7,1.330176);
   new_histo_group_Fake_wh3l_zg_13TeV_nvtx22->SetBinError(8,1.087076);
   new_histo_group_Fake_wh3l_zg_13TeV_nvtx22->SetBinError(9,1.603437);
   new_histo_group_Fake_wh3l_zg_13TeV_nvtx22->SetBinError(10,1.357628);
   new_histo_group_Fake_wh3l_zg_13TeV_nvtx22->SetBinError(11,1.340534);
   new_histo_group_Fake_wh3l_zg_13TeV_nvtx22->SetBinError(12,1.715072);
   new_histo_group_Fake_wh3l_zg_13TeV_nvtx22->SetBinError(13,1.550767);
   new_histo_group_Fake_wh3l_zg_13TeV_nvtx22->SetBinError(14,0.7790306);
   new_histo_group_Fake_wh3l_zg_13TeV_nvtx22->SetBinError(15,0.6753007);
   new_histo_group_Fake_wh3l_zg_13TeV_nvtx22->SetBinError(16,0.4524674);
   new_histo_group_Fake_wh3l_zg_13TeV_nvtx22->SetBinError(17,0.8115049);
   new_histo_group_Fake_wh3l_zg_13TeV_nvtx22->SetBinError(18,0.5988731);
   new_histo_group_Fake_wh3l_zg_13TeV_nvtx22->SetBinError(19,0.2174466);
   new_histo_group_Fake_wh3l_zg_13TeV_nvtx22->SetBinError(21,0.1384125);
   new_histo_group_Fake_wh3l_zg_13TeV_nvtx22->SetBinError(22,0.07181522);
   new_histo_group_Fake_wh3l_zg_13TeV_nvtx22->SetEntries(460);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_zg_13TeV_nvtx22->SetFillColor(ci);
   new_histo_group_Fake_wh3l_zg_13TeV_nvtx22->SetFillStyle(3001);

   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_zg_13TeV_nvtx22->SetLineColor(ci);
   new_histo_group_Fake_wh3l_zg_13TeV_nvtx22->GetXaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_zg_13TeV_nvtx22->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_zg_13TeV_nvtx22->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_zg_13TeV_nvtx22->GetXaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_zg_13TeV_nvtx22->GetYaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_zg_13TeV_nvtx22->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_zg_13TeV_nvtx22->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_zg_13TeV_nvtx22->GetYaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_zg_13TeV_nvtx22->GetZaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_zg_13TeV_nvtx22->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_zg_13TeV_nvtx22->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_zg_13TeV_nvtx22->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_nvtx->Add(new_histo_group_Fake_wh3l_zg_13TeV_nvtx,"");
   
   TH1D *new_histo_group_WW_wh3l_zg_13TeV_nvtx23 = new TH1D("new_histo_group_WW_wh3l_zg_13TeV_nvtx23","histo_WW",40,0,40);
   new_histo_group_WW_wh3l_zg_13TeV_nvtx23->SetBinContent(16,0.009961222);
   new_histo_group_WW_wh3l_zg_13TeV_nvtx23->SetBinError(16,0.009961222);
   new_histo_group_WW_wh3l_zg_13TeV_nvtx23->SetEntries(1);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_zg_13TeV_nvtx23->SetFillColor(ci);
   new_histo_group_WW_wh3l_zg_13TeV_nvtx23->SetFillStyle(3001);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_zg_13TeV_nvtx23->SetLineColor(ci);
   new_histo_group_WW_wh3l_zg_13TeV_nvtx23->GetXaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_zg_13TeV_nvtx23->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_zg_13TeV_nvtx23->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_zg_13TeV_nvtx23->GetXaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_zg_13TeV_nvtx23->GetYaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_zg_13TeV_nvtx23->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_zg_13TeV_nvtx23->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_zg_13TeV_nvtx23->GetYaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_zg_13TeV_nvtx23->GetZaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_zg_13TeV_nvtx23->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_zg_13TeV_nvtx23->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_zg_13TeV_nvtx23->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_nvtx->Add(new_histo_group_WW_wh3l_zg_13TeV_nvtx,"");
   
   TH1D *new_histo_group_VVV_wh3l_zg_13TeV_nvtx24 = new TH1D("new_histo_group_VVV_wh3l_zg_13TeV_nvtx24","histo_VVV",40,0,40);
   new_histo_group_VVV_wh3l_zg_13TeV_nvtx24->SetBinContent(4,0.002475685);
   new_histo_group_VVV_wh3l_zg_13TeV_nvtx24->SetBinContent(10,0.002503076);
   new_histo_group_VVV_wh3l_zg_13TeV_nvtx24->SetBinContent(11,0.002735143);
   new_histo_group_VVV_wh3l_zg_13TeV_nvtx24->SetBinContent(13,0.005285523);
   new_histo_group_VVV_wh3l_zg_13TeV_nvtx24->SetBinContent(15,-0.0006863608);
   new_histo_group_VVV_wh3l_zg_13TeV_nvtx24->SetBinContent(16,0.002169967);
   new_histo_group_VVV_wh3l_zg_13TeV_nvtx24->SetBinError(4,0.002475685);
   new_histo_group_VVV_wh3l_zg_13TeV_nvtx24->SetBinError(10,0.002503076);
   new_histo_group_VVV_wh3l_zg_13TeV_nvtx24->SetBinError(11,0.002735143);
   new_histo_group_VVV_wh3l_zg_13TeV_nvtx24->SetBinError(13,0.003764106);
   new_histo_group_VVV_wh3l_zg_13TeV_nvtx24->SetBinError(15,0.0006863608);
   new_histo_group_VVV_wh3l_zg_13TeV_nvtx24->SetBinError(16,0.002169967);
   new_histo_group_VVV_wh3l_zg_13TeV_nvtx24->SetEntries(7);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_zg_13TeV_nvtx24->SetFillColor(ci);
   new_histo_group_VVV_wh3l_zg_13TeV_nvtx24->SetFillStyle(3001);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_zg_13TeV_nvtx24->SetLineColor(ci);
   new_histo_group_VVV_wh3l_zg_13TeV_nvtx24->GetXaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_zg_13TeV_nvtx24->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_zg_13TeV_nvtx24->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_zg_13TeV_nvtx24->GetXaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_zg_13TeV_nvtx24->GetYaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_zg_13TeV_nvtx24->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_zg_13TeV_nvtx24->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_zg_13TeV_nvtx24->GetYaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_zg_13TeV_nvtx24->GetZaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_zg_13TeV_nvtx24->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_zg_13TeV_nvtx24->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_zg_13TeV_nvtx24->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_nvtx->Add(new_histo_group_VVV_wh3l_zg_13TeV_nvtx,"");
   
   TH1D *new_histo_group_Vg_wh3l_zg_13TeV_nvtx25 = new TH1D("new_histo_group_Vg_wh3l_zg_13TeV_nvtx25","histo_Vg",40,0,40);
   new_histo_group_Vg_wh3l_zg_13TeV_nvtx25->SetBinContent(3,0.2249779);
   new_histo_group_Vg_wh3l_zg_13TeV_nvtx25->SetBinContent(4,0.7361533);
   new_histo_group_Vg_wh3l_zg_13TeV_nvtx25->SetBinContent(5,4.140012);
   new_histo_group_Vg_wh3l_zg_13TeV_nvtx25->SetBinContent(6,5.18226);
   new_histo_group_Vg_wh3l_zg_13TeV_nvtx25->SetBinContent(7,6.709586);
   new_histo_group_Vg_wh3l_zg_13TeV_nvtx25->SetBinContent(8,10.03869);
   new_histo_group_Vg_wh3l_zg_13TeV_nvtx25->SetBinContent(9,14.27113);
   new_histo_group_Vg_wh3l_zg_13TeV_nvtx25->SetBinContent(10,13.94391);
   new_histo_group_Vg_wh3l_zg_13TeV_nvtx25->SetBinContent(11,10.71032);
   new_histo_group_Vg_wh3l_zg_13TeV_nvtx25->SetBinContent(12,11.23956);
   new_histo_group_Vg_wh3l_zg_13TeV_nvtx25->SetBinContent(13,9.101963);
   new_histo_group_Vg_wh3l_zg_13TeV_nvtx25->SetBinContent(14,7.247431);
   new_histo_group_Vg_wh3l_zg_13TeV_nvtx25->SetBinContent(15,4.817917);
   new_histo_group_Vg_wh3l_zg_13TeV_nvtx25->SetBinContent(16,2.436118);
   new_histo_group_Vg_wh3l_zg_13TeV_nvtx25->SetBinContent(17,1.346597);
   new_histo_group_Vg_wh3l_zg_13TeV_nvtx25->SetBinContent(18,0.7057932);
   new_histo_group_Vg_wh3l_zg_13TeV_nvtx25->SetBinContent(19,0.4046562);
   new_histo_group_Vg_wh3l_zg_13TeV_nvtx25->SetBinContent(20,0.3647049);
   new_histo_group_Vg_wh3l_zg_13TeV_nvtx25->SetBinContent(21,0.2129954);
   new_histo_group_Vg_wh3l_zg_13TeV_nvtx25->SetBinContent(22,0.1819512);
   new_histo_group_Vg_wh3l_zg_13TeV_nvtx25->SetBinContent(23,2.677784e-06);
   new_histo_group_Vg_wh3l_zg_13TeV_nvtx25->SetBinContent(24,0.02435116);
   new_histo_group_Vg_wh3l_zg_13TeV_nvtx25->SetBinContent(25,-0.07424437);
   new_histo_group_Vg_wh3l_zg_13TeV_nvtx25->SetBinContent(26,1.107037e-08);
   new_histo_group_Vg_wh3l_zg_13TeV_nvtx25->SetBinContent(28,6.521099e-07);
   new_histo_group_Vg_wh3l_zg_13TeV_nvtx25->SetBinContent(34,1.905084e-09);
   new_histo_group_Vg_wh3l_zg_13TeV_nvtx25->SetBinError(3,0.159919);
   new_histo_group_Vg_wh3l_zg_13TeV_nvtx25->SetBinError(4,0.4517781);
   new_histo_group_Vg_wh3l_zg_13TeV_nvtx25->SetBinError(5,0.8102275);
   new_histo_group_Vg_wh3l_zg_13TeV_nvtx25->SetBinError(6,0.983764);
   new_histo_group_Vg_wh3l_zg_13TeV_nvtx25->SetBinError(7,0.9817858);
   new_histo_group_Vg_wh3l_zg_13TeV_nvtx25->SetBinError(8,1.294576);
   new_histo_group_Vg_wh3l_zg_13TeV_nvtx25->SetBinError(9,1.412649);
   new_histo_group_Vg_wh3l_zg_13TeV_nvtx25->SetBinError(10,1.443433);
   new_histo_group_Vg_wh3l_zg_13TeV_nvtx25->SetBinError(11,1.248681);
   new_histo_group_Vg_wh3l_zg_13TeV_nvtx25->SetBinError(12,1.250702);
   new_histo_group_Vg_wh3l_zg_13TeV_nvtx25->SetBinError(13,1.056514);
   new_histo_group_Vg_wh3l_zg_13TeV_nvtx25->SetBinError(14,0.8980216);
   new_histo_group_Vg_wh3l_zg_13TeV_nvtx25->SetBinError(15,0.7448369);
   new_histo_group_Vg_wh3l_zg_13TeV_nvtx25->SetBinError(16,0.527805);
   new_histo_group_Vg_wh3l_zg_13TeV_nvtx25->SetBinError(17,0.5137181);
   new_histo_group_Vg_wh3l_zg_13TeV_nvtx25->SetBinError(18,0.2803531);
   new_histo_group_Vg_wh3l_zg_13TeV_nvtx25->SetBinError(19,0.1882631);
   new_histo_group_Vg_wh3l_zg_13TeV_nvtx25->SetBinError(20,0.1895583);
   new_histo_group_Vg_wh3l_zg_13TeV_nvtx25->SetBinError(21,0.09891799);
   new_histo_group_Vg_wh3l_zg_13TeV_nvtx25->SetBinError(22,0.1200854);
   new_histo_group_Vg_wh3l_zg_13TeV_nvtx25->SetBinError(23,2.677784e-06);
   new_histo_group_Vg_wh3l_zg_13TeV_nvtx25->SetBinError(24,0.02433177);
   new_histo_group_Vg_wh3l_zg_13TeV_nvtx25->SetBinError(25,0.074235);
   new_histo_group_Vg_wh3l_zg_13TeV_nvtx25->SetBinError(26,1.107037e-08);
   new_histo_group_Vg_wh3l_zg_13TeV_nvtx25->SetBinError(28,6.521099e-07);
   new_histo_group_Vg_wh3l_zg_13TeV_nvtx25->SetBinError(34,1.905084e-09);
   new_histo_group_Vg_wh3l_zg_13TeV_nvtx25->SetEntries(1376);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_zg_13TeV_nvtx25->SetFillColor(ci);
   new_histo_group_Vg_wh3l_zg_13TeV_nvtx25->SetFillStyle(3001);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_zg_13TeV_nvtx25->SetLineColor(ci);
   new_histo_group_Vg_wh3l_zg_13TeV_nvtx25->GetXaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_zg_13TeV_nvtx25->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_zg_13TeV_nvtx25->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_zg_13TeV_nvtx25->GetXaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_zg_13TeV_nvtx25->GetYaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_zg_13TeV_nvtx25->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_zg_13TeV_nvtx25->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_zg_13TeV_nvtx25->GetYaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_zg_13TeV_nvtx25->GetZaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_zg_13TeV_nvtx25->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_zg_13TeV_nvtx25->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_zg_13TeV_nvtx25->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_nvtx->Add(new_histo_group_Vg_wh3l_zg_13TeV_nvtx,"");
   
   TH1D *new_histo_group_ZZ_wh3l_zg_13TeV_nvtx26 = new TH1D("new_histo_group_ZZ_wh3l_zg_13TeV_nvtx26","histo_ZZ",40,0,40);
   new_histo_group_ZZ_wh3l_zg_13TeV_nvtx26->SetBinContent(5,0.03249944);
   new_histo_group_ZZ_wh3l_zg_13TeV_nvtx26->SetBinContent(6,0.04202887);
   new_histo_group_ZZ_wh3l_zg_13TeV_nvtx26->SetBinContent(7,0.08642198);
   new_histo_group_ZZ_wh3l_zg_13TeV_nvtx26->SetBinContent(8,0.03645855);
   new_histo_group_ZZ_wh3l_zg_13TeV_nvtx26->SetBinContent(9,0.04575732);
   new_histo_group_ZZ_wh3l_zg_13TeV_nvtx26->SetBinContent(10,0.1685441);
   new_histo_group_ZZ_wh3l_zg_13TeV_nvtx26->SetBinContent(12,0.07844918);
   new_histo_group_ZZ_wh3l_zg_13TeV_nvtx26->SetBinContent(13,0.07232913);
   new_histo_group_ZZ_wh3l_zg_13TeV_nvtx26->SetBinContent(14,0.02846774);
   new_histo_group_ZZ_wh3l_zg_13TeV_nvtx26->SetBinContent(22,0.002412119);
   new_histo_group_ZZ_wh3l_zg_13TeV_nvtx26->SetBinError(5,0.03249944);
   new_histo_group_ZZ_wh3l_zg_13TeV_nvtx26->SetBinError(6,0.04202887);
   new_histo_group_ZZ_wh3l_zg_13TeV_nvtx26->SetBinError(7,0.06129487);
   new_histo_group_ZZ_wh3l_zg_13TeV_nvtx26->SetBinError(8,0.03645855);
   new_histo_group_ZZ_wh3l_zg_13TeV_nvtx26->SetBinError(9,0.04575732);
   new_histo_group_ZZ_wh3l_zg_13TeV_nvtx26->SetBinError(10,0.0859509);
   new_histo_group_ZZ_wh3l_zg_13TeV_nvtx26->SetBinError(12,0.05548062);
   new_histo_group_ZZ_wh3l_zg_13TeV_nvtx26->SetBinError(13,0.05212968);
   new_histo_group_ZZ_wh3l_zg_13TeV_nvtx26->SetBinError(14,0.02846774);
   new_histo_group_ZZ_wh3l_zg_13TeV_nvtx26->SetBinError(22,0.002412119);
   new_histo_group_ZZ_wh3l_zg_13TeV_nvtx26->SetEntries(16);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_zg_13TeV_nvtx26->SetFillColor(ci);
   new_histo_group_ZZ_wh3l_zg_13TeV_nvtx26->SetFillStyle(3001);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_zg_13TeV_nvtx26->SetLineColor(ci);
   new_histo_group_ZZ_wh3l_zg_13TeV_nvtx26->GetXaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_zg_13TeV_nvtx26->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_zg_13TeV_nvtx26->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_zg_13TeV_nvtx26->GetXaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_zg_13TeV_nvtx26->GetYaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_zg_13TeV_nvtx26->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_zg_13TeV_nvtx26->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_zg_13TeV_nvtx26->GetYaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_zg_13TeV_nvtx26->GetZaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_zg_13TeV_nvtx26->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_zg_13TeV_nvtx26->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_zg_13TeV_nvtx26->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_nvtx->Add(new_histo_group_ZZ_wh3l_zg_13TeV_nvtx,"");
   
   TH1D *new_histo_group_WZ_wh3l_zg_13TeV_nvtx27 = new TH1D("new_histo_group_WZ_wh3l_zg_13TeV_nvtx27","histo_WZ",40,0,40);
   new_histo_group_WZ_wh3l_zg_13TeV_nvtx27->SetBinContent(4,0.01208537);
   new_histo_group_WZ_wh3l_zg_13TeV_nvtx27->SetBinContent(5,0.06845817);
   new_histo_group_WZ_wh3l_zg_13TeV_nvtx27->SetBinContent(6,0.1253179);
   new_histo_group_WZ_wh3l_zg_13TeV_nvtx27->SetBinContent(7,0.1786277);
   new_histo_group_WZ_wh3l_zg_13TeV_nvtx27->SetBinContent(8,0.1852012);
   new_histo_group_WZ_wh3l_zg_13TeV_nvtx27->SetBinContent(9,0.2394513);
   new_histo_group_WZ_wh3l_zg_13TeV_nvtx27->SetBinContent(10,0.2420552);
   new_histo_group_WZ_wh3l_zg_13TeV_nvtx27->SetBinContent(11,0.2126052);
   new_histo_group_WZ_wh3l_zg_13TeV_nvtx27->SetBinContent(12,0.1731557);
   new_histo_group_WZ_wh3l_zg_13TeV_nvtx27->SetBinContent(13,0.1378588);
   new_histo_group_WZ_wh3l_zg_13TeV_nvtx27->SetBinContent(14,0.1046082);
   new_histo_group_WZ_wh3l_zg_13TeV_nvtx27->SetBinContent(15,0.09419603);
   new_histo_group_WZ_wh3l_zg_13TeV_nvtx27->SetBinContent(16,0.04615917);
   new_histo_group_WZ_wh3l_zg_13TeV_nvtx27->SetBinContent(17,0.01746517);
   new_histo_group_WZ_wh3l_zg_13TeV_nvtx27->SetBinContent(18,0.02763017);
   new_histo_group_WZ_wh3l_zg_13TeV_nvtx27->SetBinContent(19,0.003829751);
   new_histo_group_WZ_wh3l_zg_13TeV_nvtx27->SetBinContent(20,0.001139302);
   new_histo_group_WZ_wh3l_zg_13TeV_nvtx27->SetBinContent(21,0.005883264);
   new_histo_group_WZ_wh3l_zg_13TeV_nvtx27->SetBinContent(22,0.001746862);
   new_histo_group_WZ_wh3l_zg_13TeV_nvtx27->SetBinContent(23,1.100137e-10);
   new_histo_group_WZ_wh3l_zg_13TeV_nvtx27->SetBinContent(25,0.001049616);
   new_histo_group_WZ_wh3l_zg_13TeV_nvtx27->SetBinContent(27,2.290836e-09);
   new_histo_group_WZ_wh3l_zg_13TeV_nvtx27->SetBinError(4,0.008548019);
   new_histo_group_WZ_wh3l_zg_13TeV_nvtx27->SetBinError(5,0.02069522);
   new_histo_group_WZ_wh3l_zg_13TeV_nvtx27->SetBinError(6,0.02748578);
   new_histo_group_WZ_wh3l_zg_13TeV_nvtx27->SetBinError(7,0.03225388);
   new_histo_group_WZ_wh3l_zg_13TeV_nvtx27->SetBinError(8,0.03204975);
   new_histo_group_WZ_wh3l_zg_13TeV_nvtx27->SetBinError(9,0.03659783);
   new_histo_group_WZ_wh3l_zg_13TeV_nvtx27->SetBinError(10,0.03666702);
   new_histo_group_WZ_wh3l_zg_13TeV_nvtx27->SetBinError(11,0.03382215);
   new_histo_group_WZ_wh3l_zg_13TeV_nvtx27->SetBinError(12,0.02973199);
   new_histo_group_WZ_wh3l_zg_13TeV_nvtx27->SetBinError(13,0.02710765);
   new_histo_group_WZ_wh3l_zg_13TeV_nvtx27->SetBinError(14,0.02309621);
   new_histo_group_WZ_wh3l_zg_13TeV_nvtx27->SetBinError(15,0.02163347);
   new_histo_group_WZ_wh3l_zg_13TeV_nvtx27->SetBinError(16,0.01431948);
   new_histo_group_WZ_wh3l_zg_13TeV_nvtx27->SetBinError(17,0.008585987);
   new_histo_group_WZ_wh3l_zg_13TeV_nvtx27->SetBinError(18,0.01106926);
   new_histo_group_WZ_wh3l_zg_13TeV_nvtx27->SetBinError(19,0.00382777);
   new_histo_group_WZ_wh3l_zg_13TeV_nvtx27->SetBinError(20,0.001139302);
   new_histo_group_WZ_wh3l_zg_13TeV_nvtx27->SetBinError(21,0.0055735);
   new_histo_group_WZ_wh3l_zg_13TeV_nvtx27->SetBinError(22,0.001746862);
   new_histo_group_WZ_wh3l_zg_13TeV_nvtx27->SetBinError(23,1.100137e-10);
   new_histo_group_WZ_wh3l_zg_13TeV_nvtx27->SetBinError(25,0.001049616);
   new_histo_group_WZ_wh3l_zg_13TeV_nvtx27->SetBinError(27,2.290836e-09);
   new_histo_group_WZ_wh3l_zg_13TeV_nvtx27->SetEntries(376);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_zg_13TeV_nvtx27->SetFillColor(ci);
   new_histo_group_WZ_wh3l_zg_13TeV_nvtx27->SetFillStyle(3001);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_zg_13TeV_nvtx27->SetLineColor(ci);
   new_histo_group_WZ_wh3l_zg_13TeV_nvtx27->GetXaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_zg_13TeV_nvtx27->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_zg_13TeV_nvtx27->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_zg_13TeV_nvtx27->GetXaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_zg_13TeV_nvtx27->GetYaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_zg_13TeV_nvtx27->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_zg_13TeV_nvtx27->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_zg_13TeV_nvtx27->GetYaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_zg_13TeV_nvtx27->GetZaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_zg_13TeV_nvtx27->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_zg_13TeV_nvtx27->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_zg_13TeV_nvtx27->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_nvtx->Add(new_histo_group_WZ_wh3l_zg_13TeV_nvtx,"");
   
   TH1D *new_histo_group_Higgs_wh3l_zg_13TeV_nvtx28 = new TH1D("new_histo_group_Higgs_wh3l_zg_13TeV_nvtx28","histo_H_htt",40,0,40);
   new_histo_group_Higgs_wh3l_zg_13TeV_nvtx28->SetBinContent(4,0.001360304);
   new_histo_group_Higgs_wh3l_zg_13TeV_nvtx28->SetBinContent(5,0.0006294883);
   new_histo_group_Higgs_wh3l_zg_13TeV_nvtx28->SetBinContent(6,0.00628012);
   new_histo_group_Higgs_wh3l_zg_13TeV_nvtx28->SetBinContent(7,0.01011899);
   new_histo_group_Higgs_wh3l_zg_13TeV_nvtx28->SetBinContent(8,0.01303869);
   new_histo_group_Higgs_wh3l_zg_13TeV_nvtx28->SetBinContent(9,0.005842877);
   new_histo_group_Higgs_wh3l_zg_13TeV_nvtx28->SetBinContent(10,0.01055393);
   new_histo_group_Higgs_wh3l_zg_13TeV_nvtx28->SetBinContent(11,0.01231734);
   new_histo_group_Higgs_wh3l_zg_13TeV_nvtx28->SetBinContent(12,0.01007873);
   new_histo_group_Higgs_wh3l_zg_13TeV_nvtx28->SetBinContent(13,0.009789666);
   new_histo_group_Higgs_wh3l_zg_13TeV_nvtx28->SetBinContent(14,0.003117549);
   new_histo_group_Higgs_wh3l_zg_13TeV_nvtx28->SetBinContent(15,0.002529575);
   new_histo_group_Higgs_wh3l_zg_13TeV_nvtx28->SetBinContent(16,0.001331258);
   new_histo_group_Higgs_wh3l_zg_13TeV_nvtx28->SetBinContent(17,0.001216437);
   new_histo_group_Higgs_wh3l_zg_13TeV_nvtx28->SetBinContent(18,6.900733e-05);
   new_histo_group_Higgs_wh3l_zg_13TeV_nvtx28->SetBinContent(19,0.0002691248);
   new_histo_group_Higgs_wh3l_zg_13TeV_nvtx28->SetBinContent(20,0.0002077542);
   new_histo_group_Higgs_wh3l_zg_13TeV_nvtx28->SetBinContent(21,2.58193e-05);
   new_histo_group_Higgs_wh3l_zg_13TeV_nvtx28->SetBinContent(31,1.309013e-10);
   new_histo_group_Higgs_wh3l_zg_13TeV_nvtx28->SetBinError(4,0.001173732);
   new_histo_group_Higgs_wh3l_zg_13TeV_nvtx28->SetBinError(5,0.0004455522);
   new_histo_group_Higgs_wh3l_zg_13TeV_nvtx28->SetBinError(6,0.002899811);
   new_histo_group_Higgs_wh3l_zg_13TeV_nvtx28->SetBinError(7,0.003470568);
   new_histo_group_Higgs_wh3l_zg_13TeV_nvtx28->SetBinError(8,0.003916948);
   new_histo_group_Higgs_wh3l_zg_13TeV_nvtx28->SetBinError(9,0.002350152);
   new_histo_group_Higgs_wh3l_zg_13TeV_nvtx28->SetBinError(10,0.003201013);
   new_histo_group_Higgs_wh3l_zg_13TeV_nvtx28->SetBinError(11,0.003521001);
   new_histo_group_Higgs_wh3l_zg_13TeV_nvtx28->SetBinError(12,0.003100377);
   new_histo_group_Higgs_wh3l_zg_13TeV_nvtx28->SetBinError(13,0.003477022);
   new_histo_group_Higgs_wh3l_zg_13TeV_nvtx28->SetBinError(14,0.001564471);
   new_histo_group_Higgs_wh3l_zg_13TeV_nvtx28->SetBinError(15,0.002072013);
   new_histo_group_Higgs_wh3l_zg_13TeV_nvtx28->SetBinError(16,0.0007599738);
   new_histo_group_Higgs_wh3l_zg_13TeV_nvtx28->SetBinError(17,0.0006543294);
   new_histo_group_Higgs_wh3l_zg_13TeV_nvtx28->SetBinError(18,6.900733e-05);
   new_histo_group_Higgs_wh3l_zg_13TeV_nvtx28->SetBinError(19,0.0002691248);
   new_histo_group_Higgs_wh3l_zg_13TeV_nvtx28->SetBinError(20,0.000171931);
   new_histo_group_Higgs_wh3l_zg_13TeV_nvtx28->SetBinError(21,2.58193e-05);
   new_histo_group_Higgs_wh3l_zg_13TeV_nvtx28->SetBinError(31,1.309013e-10);
   new_histo_group_Higgs_wh3l_zg_13TeV_nvtx28->SetEntries(180);
   new_histo_group_Higgs_wh3l_zg_13TeV_nvtx28->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_zg_13TeV_nvtx28->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_zg_13TeV_nvtx28->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_zg_13TeV_nvtx28->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_zg_13TeV_nvtx28->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_zg_13TeV_nvtx28->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_zg_13TeV_nvtx28->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_zg_13TeV_nvtx28->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_zg_13TeV_nvtx28->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_zg_13TeV_nvtx28->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_zg_13TeV_nvtx28->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_zg_13TeV_nvtx28->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_zg_13TeV_nvtx28->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_zg_13TeV_nvtx28->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_zg_13TeV_nvtx28->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_nvtx->Add(new_histo_group_Higgs_wh3l_zg_13TeV_nvtx,"");
   thsBackground_grouped_wh3l_zg_13TeV_nvtx->Draw("hist same");
   
   thsSignal_grouped_wh3l_zg_13TeV_nvtx = new THStack();
   thsSignal_grouped_wh3l_zg_13TeV_nvtx->SetName("thsSignal_grouped_wh3l_zg_13TeV_nvtx");
   thsSignal_grouped_wh3l_zg_13TeV_nvtx->SetTitle("thsSignal_grouped_wh3l_zg_13TeV_nvtx");
   
   TH1F *thsSignal_grouped_wh3l_zg_13TeV_nvtx_stack_6 = new TH1F("thsSignal_grouped_wh3l_zg_13TeV_nvtx_stack_6","thsSignal_grouped_wh3l_zg_13TeV_nvtx",40,0,40);
   thsSignal_grouped_wh3l_zg_13TeV_nvtx_stack_6->SetMinimum(0);
   thsSignal_grouped_wh3l_zg_13TeV_nvtx_stack_6->SetMaximum(0.01780342);
   thsSignal_grouped_wh3l_zg_13TeV_nvtx_stack_6->SetDirectory(0);
   thsSignal_grouped_wh3l_zg_13TeV_nvtx_stack_6->SetStats(0);
   thsSignal_grouped_wh3l_zg_13TeV_nvtx_stack_6->SetLineStyle(0);
   thsSignal_grouped_wh3l_zg_13TeV_nvtx_stack_6->SetMarkerStyle(20);
   thsSignal_grouped_wh3l_zg_13TeV_nvtx_stack_6->GetXaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_zg_13TeV_nvtx_stack_6->GetXaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_zg_13TeV_nvtx_stack_6->GetXaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_zg_13TeV_nvtx_stack_6->GetXaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_zg_13TeV_nvtx_stack_6->GetXaxis()->SetTitleOffset(0.9);
   thsSignal_grouped_wh3l_zg_13TeV_nvtx_stack_6->GetXaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_zg_13TeV_nvtx_stack_6->GetYaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_zg_13TeV_nvtx_stack_6->GetYaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_zg_13TeV_nvtx_stack_6->GetYaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_zg_13TeV_nvtx_stack_6->GetYaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_zg_13TeV_nvtx_stack_6->GetYaxis()->SetTitleOffset(1.25);
   thsSignal_grouped_wh3l_zg_13TeV_nvtx_stack_6->GetYaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_zg_13TeV_nvtx_stack_6->GetZaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_zg_13TeV_nvtx_stack_6->GetZaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_zg_13TeV_nvtx_stack_6->GetZaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_zg_13TeV_nvtx_stack_6->GetZaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_zg_13TeV_nvtx_stack_6->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_zg_13TeV_nvtx->SetHistogram(thsSignal_grouped_wh3l_zg_13TeV_nvtx_stack_6);
   
   
   TH1D *new_histo_group_Higgs_wh3l_zg_13TeV_nvtx29 = new TH1D("new_histo_group_Higgs_wh3l_zg_13TeV_nvtx29","histo_H_htt",40,0,40);
   new_histo_group_Higgs_wh3l_zg_13TeV_nvtx29->SetBinContent(4,0.001360304);
   new_histo_group_Higgs_wh3l_zg_13TeV_nvtx29->SetBinContent(5,0.0006294883);
   new_histo_group_Higgs_wh3l_zg_13TeV_nvtx29->SetBinContent(6,0.00628012);
   new_histo_group_Higgs_wh3l_zg_13TeV_nvtx29->SetBinContent(7,0.01011899);
   new_histo_group_Higgs_wh3l_zg_13TeV_nvtx29->SetBinContent(8,0.01303869);
   new_histo_group_Higgs_wh3l_zg_13TeV_nvtx29->SetBinContent(9,0.005842877);
   new_histo_group_Higgs_wh3l_zg_13TeV_nvtx29->SetBinContent(10,0.01055393);
   new_histo_group_Higgs_wh3l_zg_13TeV_nvtx29->SetBinContent(11,0.01231734);
   new_histo_group_Higgs_wh3l_zg_13TeV_nvtx29->SetBinContent(12,0.01007873);
   new_histo_group_Higgs_wh3l_zg_13TeV_nvtx29->SetBinContent(13,0.009789666);
   new_histo_group_Higgs_wh3l_zg_13TeV_nvtx29->SetBinContent(14,0.003117549);
   new_histo_group_Higgs_wh3l_zg_13TeV_nvtx29->SetBinContent(15,0.002529575);
   new_histo_group_Higgs_wh3l_zg_13TeV_nvtx29->SetBinContent(16,0.001331258);
   new_histo_group_Higgs_wh3l_zg_13TeV_nvtx29->SetBinContent(17,0.001216437);
   new_histo_group_Higgs_wh3l_zg_13TeV_nvtx29->SetBinContent(18,6.900733e-05);
   new_histo_group_Higgs_wh3l_zg_13TeV_nvtx29->SetBinContent(19,0.0002691248);
   new_histo_group_Higgs_wh3l_zg_13TeV_nvtx29->SetBinContent(20,0.0002077542);
   new_histo_group_Higgs_wh3l_zg_13TeV_nvtx29->SetBinContent(21,2.58193e-05);
   new_histo_group_Higgs_wh3l_zg_13TeV_nvtx29->SetBinContent(31,1.309013e-10);
   new_histo_group_Higgs_wh3l_zg_13TeV_nvtx29->SetBinError(4,0.001173732);
   new_histo_group_Higgs_wh3l_zg_13TeV_nvtx29->SetBinError(5,0.0004455522);
   new_histo_group_Higgs_wh3l_zg_13TeV_nvtx29->SetBinError(6,0.002899811);
   new_histo_group_Higgs_wh3l_zg_13TeV_nvtx29->SetBinError(7,0.003470568);
   new_histo_group_Higgs_wh3l_zg_13TeV_nvtx29->SetBinError(8,0.003916948);
   new_histo_group_Higgs_wh3l_zg_13TeV_nvtx29->SetBinError(9,0.002350152);
   new_histo_group_Higgs_wh3l_zg_13TeV_nvtx29->SetBinError(10,0.003201013);
   new_histo_group_Higgs_wh3l_zg_13TeV_nvtx29->SetBinError(11,0.003521001);
   new_histo_group_Higgs_wh3l_zg_13TeV_nvtx29->SetBinError(12,0.003100377);
   new_histo_group_Higgs_wh3l_zg_13TeV_nvtx29->SetBinError(13,0.003477022);
   new_histo_group_Higgs_wh3l_zg_13TeV_nvtx29->SetBinError(14,0.001564471);
   new_histo_group_Higgs_wh3l_zg_13TeV_nvtx29->SetBinError(15,0.002072013);
   new_histo_group_Higgs_wh3l_zg_13TeV_nvtx29->SetBinError(16,0.0007599738);
   new_histo_group_Higgs_wh3l_zg_13TeV_nvtx29->SetBinError(17,0.0006543294);
   new_histo_group_Higgs_wh3l_zg_13TeV_nvtx29->SetBinError(18,6.900733e-05);
   new_histo_group_Higgs_wh3l_zg_13TeV_nvtx29->SetBinError(19,0.0002691248);
   new_histo_group_Higgs_wh3l_zg_13TeV_nvtx29->SetBinError(20,0.000171931);
   new_histo_group_Higgs_wh3l_zg_13TeV_nvtx29->SetBinError(21,2.58193e-05);
   new_histo_group_Higgs_wh3l_zg_13TeV_nvtx29->SetBinError(31,1.309013e-10);
   new_histo_group_Higgs_wh3l_zg_13TeV_nvtx29->SetEntries(180);
   new_histo_group_Higgs_wh3l_zg_13TeV_nvtx29->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_zg_13TeV_nvtx29->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_zg_13TeV_nvtx29->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_zg_13TeV_nvtx29->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_zg_13TeV_nvtx29->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_zg_13TeV_nvtx29->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_zg_13TeV_nvtx29->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_zg_13TeV_nvtx29->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_zg_13TeV_nvtx29->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_zg_13TeV_nvtx29->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_zg_13TeV_nvtx29->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_zg_13TeV_nvtx29->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_zg_13TeV_nvtx29->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_zg_13TeV_nvtx29->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_zg_13TeV_nvtx29->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_zg_13TeV_nvtx->Add(new_histo_group_Higgs_wh3l_zg_13TeV_nvtx,"");
   thsSignal_grouped_wh3l_zg_13TeV_nvtx->Draw("hist same noclear");
   
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
   -0.007202128,
   0.2303703,
   1.155029,
   4.539968,
   6.74355,
   9.412563,
   11.17368,
   16.52819,
   16.66692,
   15.47841,
   14.4858,
   11.69208,
   8.369055,
   5.629673,
   2.575624,
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
   0.007630518,
   0.1660378,
   0.6856267,
   1.183647,
   2.087422,
   2.576327,
   2.342946,
   3.238271,
   3.107099,
   3.110893,
   3.280961,
   2.850285,
   1.794587,
   1.481956,
   0.6483602,
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
   0.007630518,
   0.2957029,
   0.6856225,
   1.68086,
   2.087649,
   2.574275,
   2.51152,
   3.236906,
   3.105181,
   3.111907,
   3.277772,
   2.848314,
   1.793219,
   1.481053,
   1.01448,
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
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(40,_fx3005,_fy3005,_felx3005,_fehx3005,_fely3005,_fehy3005);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(12);
   grae->SetFillStyle(3004);
   grae->SetLineColor(12);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3005 = new TH1F("Graph_Graph3005","",100,0,44);
   Graph_Graph3005->SetMinimum(-2.140571);
   Graph_Graph3005->SetMaximum(21.76416);
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
   grae = new TGraphAsymmErrors(40,_fx3006,_fy3006,_felx3006,_fehx3006,_fely3006,_fehy3006);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(1);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3006 = new TH1F("Graph_Graph3006","",100,0,44);
   Graph_Graph3006->SetMinimum(0);
   Graph_Graph3006->SetMaximum(28.1013);
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
   
   TH1F *hframe_copy30 = new TH1F("hframe_copy30","",1000,0,40);
   hframe_copy30->SetMinimum(0);
   hframe_copy30->SetMaximum(61.18034);
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
   ccwh3l_zg_13TeV_nvtx->Modified();
   ccwh3l_zg_13TeV_nvtx->cd();
   ccwh3l_zg_13TeV_nvtx->SetSelected(ccwh3l_zg_13TeV_nvtx);
}
