void c_wh3l_zg_13TeV_nvtx()
{
//=========Macro generated from canvas: ccwh3l_zg_13TeV_nvtx/cc
//=========  (Sat Jul  2 21:05:42 2016) by ROOT version6.02/13
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
   
   TH1F *hframe31 = new TH1F("hframe31","",1000,0,40);
   hframe31->SetMinimum(0);
   hframe31->SetMaximum(61.18034);
   hframe31->SetDirectory(0);
   hframe31->SetStats(0);
   hframe31->SetLineStyle(0);
   hframe31->SetMarkerStyle(20);
   hframe31->GetXaxis()->SetTitle("nvtx");
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
   
   THStack *thsBackground_grouped_wh3l_zg_13TeV_nvtx = new THStack();
   thsBackground_grouped_wh3l_zg_13TeV_nvtx->SetName("thsBackground_grouped_wh3l_zg_13TeV_nvtx");
   thsBackground_grouped_wh3l_zg_13TeV_nvtx->SetTitle("thsBackground_grouped_wh3l_zg_13TeV_nvtx");
   
   TH1F *thsBackground_grouped_wh3l_zg_13TeV_nvtx_stack_7 = new TH1F("thsBackground_grouped_wh3l_zg_13TeV_nvtx_stack_7","thsBackground_grouped_wh3l_zg_13TeV_nvtx",40,0,40);
   thsBackground_grouped_wh3l_zg_13TeV_nvtx_stack_7->SetMinimum(-0.5037822);
   thsBackground_grouped_wh3l_zg_13TeV_nvtx_stack_7->SetMaximum(17.51134);
   thsBackground_grouped_wh3l_zg_13TeV_nvtx_stack_7->SetDirectory(0);
   thsBackground_grouped_wh3l_zg_13TeV_nvtx_stack_7->SetStats(0);
   thsBackground_grouped_wh3l_zg_13TeV_nvtx_stack_7->SetLineStyle(0);
   thsBackground_grouped_wh3l_zg_13TeV_nvtx_stack_7->SetMarkerStyle(20);
   thsBackground_grouped_wh3l_zg_13TeV_nvtx_stack_7->GetXaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_nvtx_stack_7->GetXaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_zg_13TeV_nvtx_stack_7->GetXaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_zg_13TeV_nvtx_stack_7->GetXaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_zg_13TeV_nvtx_stack_7->GetXaxis()->SetTitleOffset(0.9);
   thsBackground_grouped_wh3l_zg_13TeV_nvtx_stack_7->GetXaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_nvtx_stack_7->GetYaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_nvtx_stack_7->GetYaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_zg_13TeV_nvtx_stack_7->GetYaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_zg_13TeV_nvtx_stack_7->GetYaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_zg_13TeV_nvtx_stack_7->GetYaxis()->SetTitleOffset(1.25);
   thsBackground_grouped_wh3l_zg_13TeV_nvtx_stack_7->GetYaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_nvtx_stack_7->GetZaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_nvtx_stack_7->GetZaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_zg_13TeV_nvtx_stack_7->GetZaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_zg_13TeV_nvtx_stack_7->GetZaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_zg_13TeV_nvtx_stack_7->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_nvtx->SetHistogram(thsBackground_grouped_wh3l_zg_13TeV_nvtx_stack_7);
   
   
   TH1D *new_histo_group_Fake_wh3l_zg_13TeV_nvtx32 = new TH1D("new_histo_group_Fake_wh3l_zg_13TeV_nvtx32","histo_Fake",40,0,40);
   new_histo_group_Fake_wh3l_zg_13TeV_nvtx32->SetBinContent(2,-0.007202128);
   new_histo_group_Fake_wh3l_zg_13TeV_nvtx32->SetBinContent(3,0.005392462);
   new_histo_group_Fake_wh3l_zg_13TeV_nvtx32->SetBinContent(4,0.4043149);
   new_histo_group_Fake_wh3l_zg_13TeV_nvtx32->SetBinContent(5,0.2989986);
   new_histo_group_Fake_wh3l_zg_13TeV_nvtx32->SetBinContent(6,1.393944);
   new_histo_group_Fake_wh3l_zg_13TeV_nvtx32->SetBinContent(7,2.437928);
   new_histo_group_Fake_wh3l_zg_13TeV_nvtx32->SetBinContent(8,0.9133347);
   new_histo_group_Fake_wh3l_zg_13TeV_nvtx32->SetBinContent(9,1.971844);
   new_histo_group_Fake_wh3l_zg_13TeV_nvtx32->SetBinContent(10,2.3099);
   new_histo_group_Fake_wh3l_zg_13TeV_nvtx32->SetBinContent(11,4.552754);
   new_histo_group_Fake_wh3l_zg_13TeV_nvtx32->SetBinContent(12,2.994637);
   new_histo_group_Fake_wh3l_zg_13TeV_nvtx32->SetBinContent(13,2.374647);
   new_histo_group_Fake_wh3l_zg_13TeV_nvtx32->SetBinContent(14,0.9885482);
   new_histo_group_Fake_wh3l_zg_13TeV_nvtx32->SetBinContent(15,0.7182459);
   new_histo_group_Fake_wh3l_zg_13TeV_nvtx32->SetBinContent(16,0.08121552);
   new_histo_group_Fake_wh3l_zg_13TeV_nvtx32->SetBinContent(17,1.317642);
   new_histo_group_Fake_wh3l_zg_13TeV_nvtx32->SetBinContent(18,0.7451644);
   new_histo_group_Fake_wh3l_zg_13TeV_nvtx32->SetBinContent(19,-0.1307349);
   new_histo_group_Fake_wh3l_zg_13TeV_nvtx32->SetBinContent(21,0.1384125);
   new_histo_group_Fake_wh3l_zg_13TeV_nvtx32->SetBinContent(22,0.07181522);
   new_histo_group_Fake_wh3l_zg_13TeV_nvtx32->SetBinError(2,0.007202128);
   new_histo_group_Fake_wh3l_zg_13TeV_nvtx32->SetBinError(3,0.1353779);
   new_histo_group_Fake_wh3l_zg_13TeV_nvtx32->SetBinError(4,0.2068983);
   new_histo_group_Fake_wh3l_zg_13TeV_nvtx32->SetBinError(5,0.8027808);
   new_histo_group_Fake_wh3l_zg_13TeV_nvtx32->SetBinError(6,0.9638045);
   new_histo_group_Fake_wh3l_zg_13TeV_nvtx32->SetBinError(7,1.330176);
   new_histo_group_Fake_wh3l_zg_13TeV_nvtx32->SetBinError(8,1.087076);
   new_histo_group_Fake_wh3l_zg_13TeV_nvtx32->SetBinError(9,1.603437);
   new_histo_group_Fake_wh3l_zg_13TeV_nvtx32->SetBinError(10,1.357628);
   new_histo_group_Fake_wh3l_zg_13TeV_nvtx32->SetBinError(11,1.340534);
   new_histo_group_Fake_wh3l_zg_13TeV_nvtx32->SetBinError(12,1.715072);
   new_histo_group_Fake_wh3l_zg_13TeV_nvtx32->SetBinError(13,1.550767);
   new_histo_group_Fake_wh3l_zg_13TeV_nvtx32->SetBinError(14,0.7790306);
   new_histo_group_Fake_wh3l_zg_13TeV_nvtx32->SetBinError(15,0.6753007);
   new_histo_group_Fake_wh3l_zg_13TeV_nvtx32->SetBinError(16,0.4524674);
   new_histo_group_Fake_wh3l_zg_13TeV_nvtx32->SetBinError(17,0.8115049);
   new_histo_group_Fake_wh3l_zg_13TeV_nvtx32->SetBinError(18,0.5988731);
   new_histo_group_Fake_wh3l_zg_13TeV_nvtx32->SetBinError(19,0.2174466);
   new_histo_group_Fake_wh3l_zg_13TeV_nvtx32->SetBinError(21,0.1384125);
   new_histo_group_Fake_wh3l_zg_13TeV_nvtx32->SetBinError(22,0.07181522);
   new_histo_group_Fake_wh3l_zg_13TeV_nvtx32->SetEntries(460);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_zg_13TeV_nvtx32->SetFillColor(ci);
   new_histo_group_Fake_wh3l_zg_13TeV_nvtx32->SetFillStyle(3001);

   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_zg_13TeV_nvtx32->SetLineColor(ci);
   new_histo_group_Fake_wh3l_zg_13TeV_nvtx32->GetXaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_zg_13TeV_nvtx32->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_zg_13TeV_nvtx32->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_zg_13TeV_nvtx32->GetXaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_zg_13TeV_nvtx32->GetYaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_zg_13TeV_nvtx32->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_zg_13TeV_nvtx32->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_zg_13TeV_nvtx32->GetYaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_zg_13TeV_nvtx32->GetZaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_zg_13TeV_nvtx32->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_zg_13TeV_nvtx32->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_zg_13TeV_nvtx32->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_nvtx->Add(new_histo_group_Fake_wh3l_zg_13TeV_nvtx,"");
   
   TH1D *new_histo_group_WW_wh3l_zg_13TeV_nvtx33 = new TH1D("new_histo_group_WW_wh3l_zg_13TeV_nvtx33","histo_WW",40,0,40);
   new_histo_group_WW_wh3l_zg_13TeV_nvtx33->SetBinContent(16,0.009961222);
   new_histo_group_WW_wh3l_zg_13TeV_nvtx33->SetBinError(16,0.009961222);
   new_histo_group_WW_wh3l_zg_13TeV_nvtx33->SetEntries(1);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_zg_13TeV_nvtx33->SetFillColor(ci);
   new_histo_group_WW_wh3l_zg_13TeV_nvtx33->SetFillStyle(3001);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_zg_13TeV_nvtx33->SetLineColor(ci);
   new_histo_group_WW_wh3l_zg_13TeV_nvtx33->GetXaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_zg_13TeV_nvtx33->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_zg_13TeV_nvtx33->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_zg_13TeV_nvtx33->GetXaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_zg_13TeV_nvtx33->GetYaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_zg_13TeV_nvtx33->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_zg_13TeV_nvtx33->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_zg_13TeV_nvtx33->GetYaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_zg_13TeV_nvtx33->GetZaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_zg_13TeV_nvtx33->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_zg_13TeV_nvtx33->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_zg_13TeV_nvtx33->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_nvtx->Add(new_histo_group_WW_wh3l_zg_13TeV_nvtx,"");
   
   TH1D *new_histo_group_VVV_wh3l_zg_13TeV_nvtx34 = new TH1D("new_histo_group_VVV_wh3l_zg_13TeV_nvtx34","histo_VVV",40,0,40);
   new_histo_group_VVV_wh3l_zg_13TeV_nvtx34->SetBinContent(4,0.002475685);
   new_histo_group_VVV_wh3l_zg_13TeV_nvtx34->SetBinContent(10,0.002503076);
   new_histo_group_VVV_wh3l_zg_13TeV_nvtx34->SetBinContent(11,0.002735143);
   new_histo_group_VVV_wh3l_zg_13TeV_nvtx34->SetBinContent(13,0.005285523);
   new_histo_group_VVV_wh3l_zg_13TeV_nvtx34->SetBinContent(15,-0.0006863608);
   new_histo_group_VVV_wh3l_zg_13TeV_nvtx34->SetBinContent(16,0.002169967);
   new_histo_group_VVV_wh3l_zg_13TeV_nvtx34->SetBinError(4,0.002475685);
   new_histo_group_VVV_wh3l_zg_13TeV_nvtx34->SetBinError(10,0.002503076);
   new_histo_group_VVV_wh3l_zg_13TeV_nvtx34->SetBinError(11,0.002735143);
   new_histo_group_VVV_wh3l_zg_13TeV_nvtx34->SetBinError(13,0.003764106);
   new_histo_group_VVV_wh3l_zg_13TeV_nvtx34->SetBinError(15,0.0006863608);
   new_histo_group_VVV_wh3l_zg_13TeV_nvtx34->SetBinError(16,0.002169967);
   new_histo_group_VVV_wh3l_zg_13TeV_nvtx34->SetEntries(7);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_zg_13TeV_nvtx34->SetFillColor(ci);
   new_histo_group_VVV_wh3l_zg_13TeV_nvtx34->SetFillStyle(3001);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_zg_13TeV_nvtx34->SetLineColor(ci);
   new_histo_group_VVV_wh3l_zg_13TeV_nvtx34->GetXaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_zg_13TeV_nvtx34->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_zg_13TeV_nvtx34->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_zg_13TeV_nvtx34->GetXaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_zg_13TeV_nvtx34->GetYaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_zg_13TeV_nvtx34->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_zg_13TeV_nvtx34->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_zg_13TeV_nvtx34->GetYaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_zg_13TeV_nvtx34->GetZaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_zg_13TeV_nvtx34->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_zg_13TeV_nvtx34->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_zg_13TeV_nvtx34->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_nvtx->Add(new_histo_group_VVV_wh3l_zg_13TeV_nvtx,"");
   
   TH1D *new_histo_group_Vg_wh3l_zg_13TeV_nvtx35 = new TH1D("new_histo_group_Vg_wh3l_zg_13TeV_nvtx35","histo_Vg",40,0,40);
   new_histo_group_Vg_wh3l_zg_13TeV_nvtx35->SetBinContent(3,0.2249779);
   new_histo_group_Vg_wh3l_zg_13TeV_nvtx35->SetBinContent(4,0.7361533);
   new_histo_group_Vg_wh3l_zg_13TeV_nvtx35->SetBinContent(5,4.140012);
   new_histo_group_Vg_wh3l_zg_13TeV_nvtx35->SetBinContent(6,5.18226);
   new_histo_group_Vg_wh3l_zg_13TeV_nvtx35->SetBinContent(7,6.709586);
   new_histo_group_Vg_wh3l_zg_13TeV_nvtx35->SetBinContent(8,10.03869);
   new_histo_group_Vg_wh3l_zg_13TeV_nvtx35->SetBinContent(9,14.27113);
   new_histo_group_Vg_wh3l_zg_13TeV_nvtx35->SetBinContent(10,13.94391);
   new_histo_group_Vg_wh3l_zg_13TeV_nvtx35->SetBinContent(11,10.71032);
   new_histo_group_Vg_wh3l_zg_13TeV_nvtx35->SetBinContent(12,11.23956);
   new_histo_group_Vg_wh3l_zg_13TeV_nvtx35->SetBinContent(13,9.101963);
   new_histo_group_Vg_wh3l_zg_13TeV_nvtx35->SetBinContent(14,7.247431);
   new_histo_group_Vg_wh3l_zg_13TeV_nvtx35->SetBinContent(15,4.817917);
   new_histo_group_Vg_wh3l_zg_13TeV_nvtx35->SetBinContent(16,2.436118);
   new_histo_group_Vg_wh3l_zg_13TeV_nvtx35->SetBinContent(17,1.346597);
   new_histo_group_Vg_wh3l_zg_13TeV_nvtx35->SetBinContent(18,0.7057932);
   new_histo_group_Vg_wh3l_zg_13TeV_nvtx35->SetBinContent(19,0.4046562);
   new_histo_group_Vg_wh3l_zg_13TeV_nvtx35->SetBinContent(20,0.3647049);
   new_histo_group_Vg_wh3l_zg_13TeV_nvtx35->SetBinContent(21,0.2129954);
   new_histo_group_Vg_wh3l_zg_13TeV_nvtx35->SetBinContent(22,0.1819512);
   new_histo_group_Vg_wh3l_zg_13TeV_nvtx35->SetBinContent(23,2.677784e-06);
   new_histo_group_Vg_wh3l_zg_13TeV_nvtx35->SetBinContent(24,0.02435116);
   new_histo_group_Vg_wh3l_zg_13TeV_nvtx35->SetBinContent(25,-0.07424437);
   new_histo_group_Vg_wh3l_zg_13TeV_nvtx35->SetBinContent(26,1.107037e-08);
   new_histo_group_Vg_wh3l_zg_13TeV_nvtx35->SetBinContent(28,6.521099e-07);
   new_histo_group_Vg_wh3l_zg_13TeV_nvtx35->SetBinContent(34,1.905084e-09);
   new_histo_group_Vg_wh3l_zg_13TeV_nvtx35->SetBinError(3,0.159919);
   new_histo_group_Vg_wh3l_zg_13TeV_nvtx35->SetBinError(4,0.4517781);
   new_histo_group_Vg_wh3l_zg_13TeV_nvtx35->SetBinError(5,0.8102275);
   new_histo_group_Vg_wh3l_zg_13TeV_nvtx35->SetBinError(6,0.983764);
   new_histo_group_Vg_wh3l_zg_13TeV_nvtx35->SetBinError(7,0.9817858);
   new_histo_group_Vg_wh3l_zg_13TeV_nvtx35->SetBinError(8,1.294576);
   new_histo_group_Vg_wh3l_zg_13TeV_nvtx35->SetBinError(9,1.412649);
   new_histo_group_Vg_wh3l_zg_13TeV_nvtx35->SetBinError(10,1.443433);
   new_histo_group_Vg_wh3l_zg_13TeV_nvtx35->SetBinError(11,1.248681);
   new_histo_group_Vg_wh3l_zg_13TeV_nvtx35->SetBinError(12,1.250702);
   new_histo_group_Vg_wh3l_zg_13TeV_nvtx35->SetBinError(13,1.056514);
   new_histo_group_Vg_wh3l_zg_13TeV_nvtx35->SetBinError(14,0.8980216);
   new_histo_group_Vg_wh3l_zg_13TeV_nvtx35->SetBinError(15,0.7448369);
   new_histo_group_Vg_wh3l_zg_13TeV_nvtx35->SetBinError(16,0.527805);
   new_histo_group_Vg_wh3l_zg_13TeV_nvtx35->SetBinError(17,0.5137181);
   new_histo_group_Vg_wh3l_zg_13TeV_nvtx35->SetBinError(18,0.2803531);
   new_histo_group_Vg_wh3l_zg_13TeV_nvtx35->SetBinError(19,0.1882631);
   new_histo_group_Vg_wh3l_zg_13TeV_nvtx35->SetBinError(20,0.1895583);
   new_histo_group_Vg_wh3l_zg_13TeV_nvtx35->SetBinError(21,0.09891799);
   new_histo_group_Vg_wh3l_zg_13TeV_nvtx35->SetBinError(22,0.1200854);
   new_histo_group_Vg_wh3l_zg_13TeV_nvtx35->SetBinError(23,2.677784e-06);
   new_histo_group_Vg_wh3l_zg_13TeV_nvtx35->SetBinError(24,0.02433177);
   new_histo_group_Vg_wh3l_zg_13TeV_nvtx35->SetBinError(25,0.074235);
   new_histo_group_Vg_wh3l_zg_13TeV_nvtx35->SetBinError(26,1.107037e-08);
   new_histo_group_Vg_wh3l_zg_13TeV_nvtx35->SetBinError(28,6.521099e-07);
   new_histo_group_Vg_wh3l_zg_13TeV_nvtx35->SetBinError(34,1.905084e-09);
   new_histo_group_Vg_wh3l_zg_13TeV_nvtx35->SetEntries(1376);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_zg_13TeV_nvtx35->SetFillColor(ci);
   new_histo_group_Vg_wh3l_zg_13TeV_nvtx35->SetFillStyle(3001);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_zg_13TeV_nvtx35->SetLineColor(ci);
   new_histo_group_Vg_wh3l_zg_13TeV_nvtx35->GetXaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_zg_13TeV_nvtx35->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_zg_13TeV_nvtx35->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_zg_13TeV_nvtx35->GetXaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_zg_13TeV_nvtx35->GetYaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_zg_13TeV_nvtx35->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_zg_13TeV_nvtx35->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_zg_13TeV_nvtx35->GetYaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_zg_13TeV_nvtx35->GetZaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_zg_13TeV_nvtx35->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_zg_13TeV_nvtx35->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_zg_13TeV_nvtx35->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_nvtx->Add(new_histo_group_Vg_wh3l_zg_13TeV_nvtx,"");
   
   TH1D *new_histo_group_ZZ_wh3l_zg_13TeV_nvtx36 = new TH1D("new_histo_group_ZZ_wh3l_zg_13TeV_nvtx36","histo_ZZ",40,0,40);
   new_histo_group_ZZ_wh3l_zg_13TeV_nvtx36->SetBinContent(5,0.03249944);
   new_histo_group_ZZ_wh3l_zg_13TeV_nvtx36->SetBinContent(6,0.04202887);
   new_histo_group_ZZ_wh3l_zg_13TeV_nvtx36->SetBinContent(7,0.08642198);
   new_histo_group_ZZ_wh3l_zg_13TeV_nvtx36->SetBinContent(8,0.03645855);
   new_histo_group_ZZ_wh3l_zg_13TeV_nvtx36->SetBinContent(9,0.04575732);
   new_histo_group_ZZ_wh3l_zg_13TeV_nvtx36->SetBinContent(10,0.1685441);
   new_histo_group_ZZ_wh3l_zg_13TeV_nvtx36->SetBinContent(12,0.07844918);
   new_histo_group_ZZ_wh3l_zg_13TeV_nvtx36->SetBinContent(13,0.07232913);
   new_histo_group_ZZ_wh3l_zg_13TeV_nvtx36->SetBinContent(14,0.02846774);
   new_histo_group_ZZ_wh3l_zg_13TeV_nvtx36->SetBinContent(22,0.002412119);
   new_histo_group_ZZ_wh3l_zg_13TeV_nvtx36->SetBinError(5,0.03249944);
   new_histo_group_ZZ_wh3l_zg_13TeV_nvtx36->SetBinError(6,0.04202887);
   new_histo_group_ZZ_wh3l_zg_13TeV_nvtx36->SetBinError(7,0.06129487);
   new_histo_group_ZZ_wh3l_zg_13TeV_nvtx36->SetBinError(8,0.03645855);
   new_histo_group_ZZ_wh3l_zg_13TeV_nvtx36->SetBinError(9,0.04575732);
   new_histo_group_ZZ_wh3l_zg_13TeV_nvtx36->SetBinError(10,0.0859509);
   new_histo_group_ZZ_wh3l_zg_13TeV_nvtx36->SetBinError(12,0.05548062);
   new_histo_group_ZZ_wh3l_zg_13TeV_nvtx36->SetBinError(13,0.05212968);
   new_histo_group_ZZ_wh3l_zg_13TeV_nvtx36->SetBinError(14,0.02846774);
   new_histo_group_ZZ_wh3l_zg_13TeV_nvtx36->SetBinError(22,0.002412119);
   new_histo_group_ZZ_wh3l_zg_13TeV_nvtx36->SetEntries(16);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_zg_13TeV_nvtx36->SetFillColor(ci);
   new_histo_group_ZZ_wh3l_zg_13TeV_nvtx36->SetFillStyle(3001);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_zg_13TeV_nvtx36->SetLineColor(ci);
   new_histo_group_ZZ_wh3l_zg_13TeV_nvtx36->GetXaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_zg_13TeV_nvtx36->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_zg_13TeV_nvtx36->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_zg_13TeV_nvtx36->GetXaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_zg_13TeV_nvtx36->GetYaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_zg_13TeV_nvtx36->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_zg_13TeV_nvtx36->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_zg_13TeV_nvtx36->GetYaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_zg_13TeV_nvtx36->GetZaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_zg_13TeV_nvtx36->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_zg_13TeV_nvtx36->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_zg_13TeV_nvtx36->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_nvtx->Add(new_histo_group_ZZ_wh3l_zg_13TeV_nvtx,"");
   
   TH1D *new_histo_group_WZ_wh3l_zg_13TeV_nvtx37 = new TH1D("new_histo_group_WZ_wh3l_zg_13TeV_nvtx37","histo_WZ",40,0,40);
   new_histo_group_WZ_wh3l_zg_13TeV_nvtx37->SetBinContent(4,0.01208537);
   new_histo_group_WZ_wh3l_zg_13TeV_nvtx37->SetBinContent(5,0.06845817);
   new_histo_group_WZ_wh3l_zg_13TeV_nvtx37->SetBinContent(6,0.1253179);
   new_histo_group_WZ_wh3l_zg_13TeV_nvtx37->SetBinContent(7,0.1786277);
   new_histo_group_WZ_wh3l_zg_13TeV_nvtx37->SetBinContent(8,0.1852012);
   new_histo_group_WZ_wh3l_zg_13TeV_nvtx37->SetBinContent(9,0.2394513);
   new_histo_group_WZ_wh3l_zg_13TeV_nvtx37->SetBinContent(10,0.2420552);
   new_histo_group_WZ_wh3l_zg_13TeV_nvtx37->SetBinContent(11,0.2126052);
   new_histo_group_WZ_wh3l_zg_13TeV_nvtx37->SetBinContent(12,0.1731557);
   new_histo_group_WZ_wh3l_zg_13TeV_nvtx37->SetBinContent(13,0.1378588);
   new_histo_group_WZ_wh3l_zg_13TeV_nvtx37->SetBinContent(14,0.1046082);
   new_histo_group_WZ_wh3l_zg_13TeV_nvtx37->SetBinContent(15,0.09419603);
   new_histo_group_WZ_wh3l_zg_13TeV_nvtx37->SetBinContent(16,0.04615917);
   new_histo_group_WZ_wh3l_zg_13TeV_nvtx37->SetBinContent(17,0.01746517);
   new_histo_group_WZ_wh3l_zg_13TeV_nvtx37->SetBinContent(18,0.02763017);
   new_histo_group_WZ_wh3l_zg_13TeV_nvtx37->SetBinContent(19,0.003829751);
   new_histo_group_WZ_wh3l_zg_13TeV_nvtx37->SetBinContent(20,0.001139302);
   new_histo_group_WZ_wh3l_zg_13TeV_nvtx37->SetBinContent(21,0.005883264);
   new_histo_group_WZ_wh3l_zg_13TeV_nvtx37->SetBinContent(22,0.001746862);
   new_histo_group_WZ_wh3l_zg_13TeV_nvtx37->SetBinContent(23,1.100137e-10);
   new_histo_group_WZ_wh3l_zg_13TeV_nvtx37->SetBinContent(25,0.001049616);
   new_histo_group_WZ_wh3l_zg_13TeV_nvtx37->SetBinContent(27,2.290836e-09);
   new_histo_group_WZ_wh3l_zg_13TeV_nvtx37->SetBinError(4,0.008548019);
   new_histo_group_WZ_wh3l_zg_13TeV_nvtx37->SetBinError(5,0.02069522);
   new_histo_group_WZ_wh3l_zg_13TeV_nvtx37->SetBinError(6,0.02748578);
   new_histo_group_WZ_wh3l_zg_13TeV_nvtx37->SetBinError(7,0.03225388);
   new_histo_group_WZ_wh3l_zg_13TeV_nvtx37->SetBinError(8,0.03204975);
   new_histo_group_WZ_wh3l_zg_13TeV_nvtx37->SetBinError(9,0.03659783);
   new_histo_group_WZ_wh3l_zg_13TeV_nvtx37->SetBinError(10,0.03666702);
   new_histo_group_WZ_wh3l_zg_13TeV_nvtx37->SetBinError(11,0.03382215);
   new_histo_group_WZ_wh3l_zg_13TeV_nvtx37->SetBinError(12,0.02973199);
   new_histo_group_WZ_wh3l_zg_13TeV_nvtx37->SetBinError(13,0.02710765);
   new_histo_group_WZ_wh3l_zg_13TeV_nvtx37->SetBinError(14,0.02309621);
   new_histo_group_WZ_wh3l_zg_13TeV_nvtx37->SetBinError(15,0.02163347);
   new_histo_group_WZ_wh3l_zg_13TeV_nvtx37->SetBinError(16,0.01431948);
   new_histo_group_WZ_wh3l_zg_13TeV_nvtx37->SetBinError(17,0.008585987);
   new_histo_group_WZ_wh3l_zg_13TeV_nvtx37->SetBinError(18,0.01106926);
   new_histo_group_WZ_wh3l_zg_13TeV_nvtx37->SetBinError(19,0.00382777);
   new_histo_group_WZ_wh3l_zg_13TeV_nvtx37->SetBinError(20,0.001139302);
   new_histo_group_WZ_wh3l_zg_13TeV_nvtx37->SetBinError(21,0.0055735);
   new_histo_group_WZ_wh3l_zg_13TeV_nvtx37->SetBinError(22,0.001746862);
   new_histo_group_WZ_wh3l_zg_13TeV_nvtx37->SetBinError(23,1.100137e-10);
   new_histo_group_WZ_wh3l_zg_13TeV_nvtx37->SetBinError(25,0.001049616);
   new_histo_group_WZ_wh3l_zg_13TeV_nvtx37->SetBinError(27,2.290836e-09);
   new_histo_group_WZ_wh3l_zg_13TeV_nvtx37->SetEntries(376);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_zg_13TeV_nvtx37->SetFillColor(ci);
   new_histo_group_WZ_wh3l_zg_13TeV_nvtx37->SetFillStyle(3001);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_zg_13TeV_nvtx37->SetLineColor(ci);
   new_histo_group_WZ_wh3l_zg_13TeV_nvtx37->GetXaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_zg_13TeV_nvtx37->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_zg_13TeV_nvtx37->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_zg_13TeV_nvtx37->GetXaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_zg_13TeV_nvtx37->GetYaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_zg_13TeV_nvtx37->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_zg_13TeV_nvtx37->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_zg_13TeV_nvtx37->GetYaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_zg_13TeV_nvtx37->GetZaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_zg_13TeV_nvtx37->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_zg_13TeV_nvtx37->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_zg_13TeV_nvtx37->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_nvtx->Add(new_histo_group_WZ_wh3l_zg_13TeV_nvtx,"");
   
   TH1D *new_histo_group_Higgs_wh3l_zg_13TeV_nvtx38 = new TH1D("new_histo_group_Higgs_wh3l_zg_13TeV_nvtx38","histo_H_htt",40,0,40);
   new_histo_group_Higgs_wh3l_zg_13TeV_nvtx38->SetBinContent(4,0.001360304);
   new_histo_group_Higgs_wh3l_zg_13TeV_nvtx38->SetBinContent(5,0.0006294883);
   new_histo_group_Higgs_wh3l_zg_13TeV_nvtx38->SetBinContent(6,0.00628012);
   new_histo_group_Higgs_wh3l_zg_13TeV_nvtx38->SetBinContent(7,0.01011899);
   new_histo_group_Higgs_wh3l_zg_13TeV_nvtx38->SetBinContent(8,0.01303869);
   new_histo_group_Higgs_wh3l_zg_13TeV_nvtx38->SetBinContent(9,0.005842877);
   new_histo_group_Higgs_wh3l_zg_13TeV_nvtx38->SetBinContent(10,0.01055393);
   new_histo_group_Higgs_wh3l_zg_13TeV_nvtx38->SetBinContent(11,0.01231734);
   new_histo_group_Higgs_wh3l_zg_13TeV_nvtx38->SetBinContent(12,0.01007873);
   new_histo_group_Higgs_wh3l_zg_13TeV_nvtx38->SetBinContent(13,0.009789666);
   new_histo_group_Higgs_wh3l_zg_13TeV_nvtx38->SetBinContent(14,0.003117549);
   new_histo_group_Higgs_wh3l_zg_13TeV_nvtx38->SetBinContent(15,0.002529575);
   new_histo_group_Higgs_wh3l_zg_13TeV_nvtx38->SetBinContent(16,0.001331258);
   new_histo_group_Higgs_wh3l_zg_13TeV_nvtx38->SetBinContent(17,0.001216437);
   new_histo_group_Higgs_wh3l_zg_13TeV_nvtx38->SetBinContent(18,6.900733e-05);
   new_histo_group_Higgs_wh3l_zg_13TeV_nvtx38->SetBinContent(19,0.0002691248);
   new_histo_group_Higgs_wh3l_zg_13TeV_nvtx38->SetBinContent(20,0.0002077542);
   new_histo_group_Higgs_wh3l_zg_13TeV_nvtx38->SetBinContent(21,2.58193e-05);
   new_histo_group_Higgs_wh3l_zg_13TeV_nvtx38->SetBinContent(31,1.309013e-10);
   new_histo_group_Higgs_wh3l_zg_13TeV_nvtx38->SetBinError(4,0.001173732);
   new_histo_group_Higgs_wh3l_zg_13TeV_nvtx38->SetBinError(5,0.0004455522);
   new_histo_group_Higgs_wh3l_zg_13TeV_nvtx38->SetBinError(6,0.002899811);
   new_histo_group_Higgs_wh3l_zg_13TeV_nvtx38->SetBinError(7,0.003470568);
   new_histo_group_Higgs_wh3l_zg_13TeV_nvtx38->SetBinError(8,0.003916948);
   new_histo_group_Higgs_wh3l_zg_13TeV_nvtx38->SetBinError(9,0.002350152);
   new_histo_group_Higgs_wh3l_zg_13TeV_nvtx38->SetBinError(10,0.003201013);
   new_histo_group_Higgs_wh3l_zg_13TeV_nvtx38->SetBinError(11,0.003521001);
   new_histo_group_Higgs_wh3l_zg_13TeV_nvtx38->SetBinError(12,0.003100377);
   new_histo_group_Higgs_wh3l_zg_13TeV_nvtx38->SetBinError(13,0.003477022);
   new_histo_group_Higgs_wh3l_zg_13TeV_nvtx38->SetBinError(14,0.001564471);
   new_histo_group_Higgs_wh3l_zg_13TeV_nvtx38->SetBinError(15,0.002072013);
   new_histo_group_Higgs_wh3l_zg_13TeV_nvtx38->SetBinError(16,0.0007599738);
   new_histo_group_Higgs_wh3l_zg_13TeV_nvtx38->SetBinError(17,0.0006543294);
   new_histo_group_Higgs_wh3l_zg_13TeV_nvtx38->SetBinError(18,6.900733e-05);
   new_histo_group_Higgs_wh3l_zg_13TeV_nvtx38->SetBinError(19,0.0002691248);
   new_histo_group_Higgs_wh3l_zg_13TeV_nvtx38->SetBinError(20,0.000171931);
   new_histo_group_Higgs_wh3l_zg_13TeV_nvtx38->SetBinError(21,2.58193e-05);
   new_histo_group_Higgs_wh3l_zg_13TeV_nvtx38->SetBinError(31,1.309013e-10);
   new_histo_group_Higgs_wh3l_zg_13TeV_nvtx38->SetEntries(180);
   new_histo_group_Higgs_wh3l_zg_13TeV_nvtx38->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_zg_13TeV_nvtx38->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_zg_13TeV_nvtx38->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_zg_13TeV_nvtx38->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_zg_13TeV_nvtx38->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_zg_13TeV_nvtx38->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_zg_13TeV_nvtx38->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_zg_13TeV_nvtx38->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_zg_13TeV_nvtx38->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_zg_13TeV_nvtx38->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_zg_13TeV_nvtx38->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_zg_13TeV_nvtx38->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_zg_13TeV_nvtx38->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_zg_13TeV_nvtx38->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_zg_13TeV_nvtx38->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_nvtx->Add(new_histo_group_Higgs_wh3l_zg_13TeV_nvtx,"");
   thsBackground_grouped_wh3l_zg_13TeV_nvtx->Draw("hist same");
   
   thsSignal_grouped_wh3l_zg_13TeV_nvtx = new THStack();
   thsSignal_grouped_wh3l_zg_13TeV_nvtx->SetName("thsSignal_grouped_wh3l_zg_13TeV_nvtx");
   thsSignal_grouped_wh3l_zg_13TeV_nvtx->SetTitle("thsSignal_grouped_wh3l_zg_13TeV_nvtx");
   
   TH1F *thsSignal_grouped_wh3l_zg_13TeV_nvtx_stack_8 = new TH1F("thsSignal_grouped_wh3l_zg_13TeV_nvtx_stack_8","thsSignal_grouped_wh3l_zg_13TeV_nvtx",40,0,40);
   thsSignal_grouped_wh3l_zg_13TeV_nvtx_stack_8->SetMinimum(0);
   thsSignal_grouped_wh3l_zg_13TeV_nvtx_stack_8->SetMaximum(0.01780342);
   thsSignal_grouped_wh3l_zg_13TeV_nvtx_stack_8->SetDirectory(0);
   thsSignal_grouped_wh3l_zg_13TeV_nvtx_stack_8->SetStats(0);
   thsSignal_grouped_wh3l_zg_13TeV_nvtx_stack_8->SetLineStyle(0);
   thsSignal_grouped_wh3l_zg_13TeV_nvtx_stack_8->SetMarkerStyle(20);
   thsSignal_grouped_wh3l_zg_13TeV_nvtx_stack_8->GetXaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_zg_13TeV_nvtx_stack_8->GetXaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_zg_13TeV_nvtx_stack_8->GetXaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_zg_13TeV_nvtx_stack_8->GetXaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_zg_13TeV_nvtx_stack_8->GetXaxis()->SetTitleOffset(0.9);
   thsSignal_grouped_wh3l_zg_13TeV_nvtx_stack_8->GetXaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_zg_13TeV_nvtx_stack_8->GetYaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_zg_13TeV_nvtx_stack_8->GetYaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_zg_13TeV_nvtx_stack_8->GetYaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_zg_13TeV_nvtx_stack_8->GetYaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_zg_13TeV_nvtx_stack_8->GetYaxis()->SetTitleOffset(1.25);
   thsSignal_grouped_wh3l_zg_13TeV_nvtx_stack_8->GetYaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_zg_13TeV_nvtx_stack_8->GetZaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_zg_13TeV_nvtx_stack_8->GetZaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_zg_13TeV_nvtx_stack_8->GetZaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_zg_13TeV_nvtx_stack_8->GetZaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_zg_13TeV_nvtx_stack_8->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_zg_13TeV_nvtx->SetHistogram(thsSignal_grouped_wh3l_zg_13TeV_nvtx_stack_8);
   
   
   TH1D *new_histo_group_Higgs_wh3l_zg_13TeV_nvtx39 = new TH1D("new_histo_group_Higgs_wh3l_zg_13TeV_nvtx39","histo_H_htt",40,0,40);
   new_histo_group_Higgs_wh3l_zg_13TeV_nvtx39->SetBinContent(4,0.001360304);
   new_histo_group_Higgs_wh3l_zg_13TeV_nvtx39->SetBinContent(5,0.0006294883);
   new_histo_group_Higgs_wh3l_zg_13TeV_nvtx39->SetBinContent(6,0.00628012);
   new_histo_group_Higgs_wh3l_zg_13TeV_nvtx39->SetBinContent(7,0.01011899);
   new_histo_group_Higgs_wh3l_zg_13TeV_nvtx39->SetBinContent(8,0.01303869);
   new_histo_group_Higgs_wh3l_zg_13TeV_nvtx39->SetBinContent(9,0.005842877);
   new_histo_group_Higgs_wh3l_zg_13TeV_nvtx39->SetBinContent(10,0.01055393);
   new_histo_group_Higgs_wh3l_zg_13TeV_nvtx39->SetBinContent(11,0.01231734);
   new_histo_group_Higgs_wh3l_zg_13TeV_nvtx39->SetBinContent(12,0.01007873);
   new_histo_group_Higgs_wh3l_zg_13TeV_nvtx39->SetBinContent(13,0.009789666);
   new_histo_group_Higgs_wh3l_zg_13TeV_nvtx39->SetBinContent(14,0.003117549);
   new_histo_group_Higgs_wh3l_zg_13TeV_nvtx39->SetBinContent(15,0.002529575);
   new_histo_group_Higgs_wh3l_zg_13TeV_nvtx39->SetBinContent(16,0.001331258);
   new_histo_group_Higgs_wh3l_zg_13TeV_nvtx39->SetBinContent(17,0.001216437);
   new_histo_group_Higgs_wh3l_zg_13TeV_nvtx39->SetBinContent(18,6.900733e-05);
   new_histo_group_Higgs_wh3l_zg_13TeV_nvtx39->SetBinContent(19,0.0002691248);
   new_histo_group_Higgs_wh3l_zg_13TeV_nvtx39->SetBinContent(20,0.0002077542);
   new_histo_group_Higgs_wh3l_zg_13TeV_nvtx39->SetBinContent(21,2.58193e-05);
   new_histo_group_Higgs_wh3l_zg_13TeV_nvtx39->SetBinContent(31,1.309013e-10);
   new_histo_group_Higgs_wh3l_zg_13TeV_nvtx39->SetBinError(4,0.001173732);
   new_histo_group_Higgs_wh3l_zg_13TeV_nvtx39->SetBinError(5,0.0004455522);
   new_histo_group_Higgs_wh3l_zg_13TeV_nvtx39->SetBinError(6,0.002899811);
   new_histo_group_Higgs_wh3l_zg_13TeV_nvtx39->SetBinError(7,0.003470568);
   new_histo_group_Higgs_wh3l_zg_13TeV_nvtx39->SetBinError(8,0.003916948);
   new_histo_group_Higgs_wh3l_zg_13TeV_nvtx39->SetBinError(9,0.002350152);
   new_histo_group_Higgs_wh3l_zg_13TeV_nvtx39->SetBinError(10,0.003201013);
   new_histo_group_Higgs_wh3l_zg_13TeV_nvtx39->SetBinError(11,0.003521001);
   new_histo_group_Higgs_wh3l_zg_13TeV_nvtx39->SetBinError(12,0.003100377);
   new_histo_group_Higgs_wh3l_zg_13TeV_nvtx39->SetBinError(13,0.003477022);
   new_histo_group_Higgs_wh3l_zg_13TeV_nvtx39->SetBinError(14,0.001564471);
   new_histo_group_Higgs_wh3l_zg_13TeV_nvtx39->SetBinError(15,0.002072013);
   new_histo_group_Higgs_wh3l_zg_13TeV_nvtx39->SetBinError(16,0.0007599738);
   new_histo_group_Higgs_wh3l_zg_13TeV_nvtx39->SetBinError(17,0.0006543294);
   new_histo_group_Higgs_wh3l_zg_13TeV_nvtx39->SetBinError(18,6.900733e-05);
   new_histo_group_Higgs_wh3l_zg_13TeV_nvtx39->SetBinError(19,0.0002691248);
   new_histo_group_Higgs_wh3l_zg_13TeV_nvtx39->SetBinError(20,0.000171931);
   new_histo_group_Higgs_wh3l_zg_13TeV_nvtx39->SetBinError(21,2.58193e-05);
   new_histo_group_Higgs_wh3l_zg_13TeV_nvtx39->SetBinError(31,1.309013e-10);
   new_histo_group_Higgs_wh3l_zg_13TeV_nvtx39->SetEntries(180);
   new_histo_group_Higgs_wh3l_zg_13TeV_nvtx39->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_zg_13TeV_nvtx39->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_zg_13TeV_nvtx39->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_zg_13TeV_nvtx39->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_zg_13TeV_nvtx39->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_zg_13TeV_nvtx39->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_zg_13TeV_nvtx39->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_zg_13TeV_nvtx39->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_zg_13TeV_nvtx39->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_zg_13TeV_nvtx39->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_zg_13TeV_nvtx39->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_zg_13TeV_nvtx39->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_zg_13TeV_nvtx39->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_zg_13TeV_nvtx39->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_zg_13TeV_nvtx39->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_zg_13TeV_nvtx->Add(new_histo_group_Higgs_wh3l_zg_13TeV_nvtx,"");
   thsSignal_grouped_wh3l_zg_13TeV_nvtx->Draw("hist same noclear");
   
   Double_t _fx3007[40] = {
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
   Double_t _fy3007[40] = {
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
   Double_t _felx3007[40] = {
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
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
   Double_t _fely3007[40] = {
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
   Double_t _fehx3007[40] = {
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
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
   Double_t _fehy3007[40] = {
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
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(40,_fx3007,_fy3007,_felx3007,_fehx3007,_fely3007,_fehy3007);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(12);
   grae->SetFillStyle(3004);
   grae->SetLineColor(12);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3007 = new TH1F("Graph_Graph3007","",100,0,44);
   Graph_Graph3007->SetMinimum(-2.140571);
   Graph_Graph3007->SetMaximum(21.76416);
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
   
   Double_t _fx3008[40] = {
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
   Double_t _fy3008[40] = {
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
   Double_t _felx3008[40] = {
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
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
   Double_t _fely3008[40] = {
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
   Double_t _fehx3008[40] = {
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
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
   Double_t _fehy3008[40] = {
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
   grae = new TGraphAsymmErrors(40,_fx3008,_fy3008,_felx3008,_fehx3008,_fely3008,_fehy3008);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(1);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3008 = new TH1F("Graph_Graph3008","",100,0,44);
   Graph_Graph3008->SetMinimum(0);
   Graph_Graph3008->SetMaximum(28.1013);
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
   
   TH1F *hframe_copy40 = new TH1F("hframe_copy40","",1000,0,40);
   hframe_copy40->SetMinimum(0);
   hframe_copy40->SetMaximum(61.18034);
   hframe_copy40->SetDirectory(0);
   hframe_copy40->SetStats(0);
   hframe_copy40->SetLineStyle(0);
   hframe_copy40->SetMarkerStyle(20);
   hframe_copy40->GetXaxis()->SetTitle("nvtx");
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
   ccwh3l_zg_13TeV_nvtx->Modified();
   ccwh3l_zg_13TeV_nvtx->cd();
   ccwh3l_zg_13TeV_nvtx->SetSelected(ccwh3l_zg_13TeV_nvtx);
}
