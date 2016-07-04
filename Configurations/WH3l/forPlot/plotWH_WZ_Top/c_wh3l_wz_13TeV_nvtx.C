void c_wh3l_wz_13TeV_nvtx()
{
//=========Macro generated from canvas: ccwh3l_wz_13TeV_nvtx/cc
//=========  (Sat Jul  2 20:54:27 2016) by ROOT version6.02/13
   TCanvas *ccwh3l_wz_13TeV_nvtx = new TCanvas("ccwh3l_wz_13TeV_nvtx", "cc",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   ccwh3l_wz_13TeV_nvtx->SetHighLightColor(2);
   ccwh3l_wz_13TeV_nvtx->Range(-8,-13.1948,42,88.30368);
   ccwh3l_wz_13TeV_nvtx->SetFillColor(0);
   ccwh3l_wz_13TeV_nvtx->SetBorderMode(0);
   ccwh3l_wz_13TeV_nvtx->SetBorderSize(2);
   ccwh3l_wz_13TeV_nvtx->SetTickx(1);
   ccwh3l_wz_13TeV_nvtx->SetTicky(1);
   ccwh3l_wz_13TeV_nvtx->SetLeftMargin(0.16);
   ccwh3l_wz_13TeV_nvtx->SetRightMargin(0.04);
   ccwh3l_wz_13TeV_nvtx->SetTopMargin(0.05);
   ccwh3l_wz_13TeV_nvtx->SetBottomMargin(0.13);
   ccwh3l_wz_13TeV_nvtx->SetFrameFillStyle(0);
   ccwh3l_wz_13TeV_nvtx->SetFrameBorderMode(0);
   ccwh3l_wz_13TeV_nvtx->SetFrameFillStyle(0);
   ccwh3l_wz_13TeV_nvtx->SetFrameBorderMode(0);
   
   TH1F *hframe31 = new TH1F("hframe31","",1000,0,40);
   hframe31->SetMinimum(0);
   hframe31->SetMaximum(83.22876);
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
   
   THStack *thsBackground_grouped_wh3l_wz_13TeV_nvtx = new THStack();
   thsBackground_grouped_wh3l_wz_13TeV_nvtx->SetName("thsBackground_grouped_wh3l_wz_13TeV_nvtx");
   thsBackground_grouped_wh3l_wz_13TeV_nvtx->SetTitle("thsBackground_grouped_wh3l_wz_13TeV_nvtx");
   
   TH1F *thsBackground_grouped_wh3l_wz_13TeV_nvtx_stack_7 = new TH1F("thsBackground_grouped_wh3l_wz_13TeV_nvtx_stack_7","thsBackground_grouped_wh3l_wz_13TeV_nvtx",40,0,40);
   thsBackground_grouped_wh3l_wz_13TeV_nvtx_stack_7->SetMinimum(-0.9720683);
   thsBackground_grouped_wh3l_wz_13TeV_nvtx_stack_7->SetMaximum(16.99277);
   thsBackground_grouped_wh3l_wz_13TeV_nvtx_stack_7->SetDirectory(0);
   thsBackground_grouped_wh3l_wz_13TeV_nvtx_stack_7->SetStats(0);
   thsBackground_grouped_wh3l_wz_13TeV_nvtx_stack_7->SetLineStyle(0);
   thsBackground_grouped_wh3l_wz_13TeV_nvtx_stack_7->SetMarkerStyle(20);
   thsBackground_grouped_wh3l_wz_13TeV_nvtx_stack_7->GetXaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_wz_13TeV_nvtx_stack_7->GetXaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_wz_13TeV_nvtx_stack_7->GetXaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_wz_13TeV_nvtx_stack_7->GetXaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_wz_13TeV_nvtx_stack_7->GetXaxis()->SetTitleOffset(0.9);
   thsBackground_grouped_wh3l_wz_13TeV_nvtx_stack_7->GetXaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_wz_13TeV_nvtx_stack_7->GetYaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_wz_13TeV_nvtx_stack_7->GetYaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_wz_13TeV_nvtx_stack_7->GetYaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_wz_13TeV_nvtx_stack_7->GetYaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_wz_13TeV_nvtx_stack_7->GetYaxis()->SetTitleOffset(1.25);
   thsBackground_grouped_wh3l_wz_13TeV_nvtx_stack_7->GetYaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_wz_13TeV_nvtx_stack_7->GetZaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_wz_13TeV_nvtx_stack_7->GetZaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_wz_13TeV_nvtx_stack_7->GetZaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_wz_13TeV_nvtx_stack_7->GetZaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_wz_13TeV_nvtx_stack_7->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_wz_13TeV_nvtx->SetHistogram(thsBackground_grouped_wh3l_wz_13TeV_nvtx_stack_7);
   
   
   TH1D *new_histo_group_Fake_wh3l_wz_13TeV_nvtx32 = new TH1D("new_histo_group_Fake_wh3l_wz_13TeV_nvtx32","histo_Fake",40,0,40);
   new_histo_group_Fake_wh3l_wz_13TeV_nvtx32->SetBinContent(5,-0.6096837);
   new_histo_group_Fake_wh3l_wz_13TeV_nvtx32->SetBinContent(6,-0.4244189);
   new_histo_group_Fake_wh3l_wz_13TeV_nvtx32->SetBinContent(7,0.5587018);
   new_histo_group_Fake_wh3l_wz_13TeV_nvtx32->SetBinContent(8,3.508278);
   new_histo_group_Fake_wh3l_wz_13TeV_nvtx32->SetBinContent(9,0.06043914);
   new_histo_group_Fake_wh3l_wz_13TeV_nvtx32->SetBinContent(10,0.6224386);
   new_histo_group_Fake_wh3l_wz_13TeV_nvtx32->SetBinContent(11,2.043073);
   new_histo_group_Fake_wh3l_wz_13TeV_nvtx32->SetBinContent(12,3.211894);
   new_histo_group_Fake_wh3l_wz_13TeV_nvtx32->SetBinContent(13,0.7640539);
   new_histo_group_Fake_wh3l_wz_13TeV_nvtx32->SetBinContent(14,-0.009719265);
   new_histo_group_Fake_wh3l_wz_13TeV_nvtx32->SetBinContent(15,-0.5019884);
   new_histo_group_Fake_wh3l_wz_13TeV_nvtx32->SetBinContent(16,1.143175);
   new_histo_group_Fake_wh3l_wz_13TeV_nvtx32->SetBinContent(17,-0.1404655);
   new_histo_group_Fake_wh3l_wz_13TeV_nvtx32->SetBinContent(18,0.286662);
   new_histo_group_Fake_wh3l_wz_13TeV_nvtx32->SetBinContent(19,0.07836232);
   new_histo_group_Fake_wh3l_wz_13TeV_nvtx32->SetBinContent(20,0.2177684);
   new_histo_group_Fake_wh3l_wz_13TeV_nvtx32->SetBinContent(21,-0.1589375);
   new_histo_group_Fake_wh3l_wz_13TeV_nvtx32->SetBinContent(22,-0.01182792);
   new_histo_group_Fake_wh3l_wz_13TeV_nvtx32->SetBinContent(23,-0.05886551);
   new_histo_group_Fake_wh3l_wz_13TeV_nvtx32->SetBinContent(30,-0.0005641188);
   new_histo_group_Fake_wh3l_wz_13TeV_nvtx32->SetBinError(5,0.2575394);
   new_histo_group_Fake_wh3l_wz_13TeV_nvtx32->SetBinError(6,0.2281865);
   new_histo_group_Fake_wh3l_wz_13TeV_nvtx32->SetBinError(7,0.7082279);
   new_histo_group_Fake_wh3l_wz_13TeV_nvtx32->SetBinError(8,1.539142);
   new_histo_group_Fake_wh3l_wz_13TeV_nvtx32->SetBinError(9,1.032507);
   new_histo_group_Fake_wh3l_wz_13TeV_nvtx32->SetBinError(10,0.8183658);
   new_histo_group_Fake_wh3l_wz_13TeV_nvtx32->SetBinError(11,1.340481);
   new_histo_group_Fake_wh3l_wz_13TeV_nvtx32->SetBinError(12,1.498443);
   new_histo_group_Fake_wh3l_wz_13TeV_nvtx32->SetBinError(13,0.7349613);
   new_histo_group_Fake_wh3l_wz_13TeV_nvtx32->SetBinError(14,0.8084151);
   new_histo_group_Fake_wh3l_wz_13TeV_nvtx32->SetBinError(15,0.3886881);
   new_histo_group_Fake_wh3l_wz_13TeV_nvtx32->SetBinError(16,0.7315439);
   new_histo_group_Fake_wh3l_wz_13TeV_nvtx32->SetBinError(17,0.1549514);
   new_histo_group_Fake_wh3l_wz_13TeV_nvtx32->SetBinError(18,0.5711945);
   new_histo_group_Fake_wh3l_wz_13TeV_nvtx32->SetBinError(19,0.159786);
   new_histo_group_Fake_wh3l_wz_13TeV_nvtx32->SetBinError(20,0.1859127);
   new_histo_group_Fake_wh3l_wz_13TeV_nvtx32->SetBinError(21,0.1080211);
   new_histo_group_Fake_wh3l_wz_13TeV_nvtx32->SetBinError(22,0.01182792);
   new_histo_group_Fake_wh3l_wz_13TeV_nvtx32->SetBinError(23,0.05886551);
   new_histo_group_Fake_wh3l_wz_13TeV_nvtx32->SetBinError(30,0.0005641188);
   new_histo_group_Fake_wh3l_wz_13TeV_nvtx32->SetEntries(336);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_wz_13TeV_nvtx32->SetFillColor(ci);
   new_histo_group_Fake_wh3l_wz_13TeV_nvtx32->SetFillStyle(3001);

   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_wz_13TeV_nvtx32->SetLineColor(ci);
   new_histo_group_Fake_wh3l_wz_13TeV_nvtx32->GetXaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_wz_13TeV_nvtx32->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_wz_13TeV_nvtx32->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_wz_13TeV_nvtx32->GetXaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_wz_13TeV_nvtx32->GetYaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_wz_13TeV_nvtx32->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_wz_13TeV_nvtx32->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_wz_13TeV_nvtx32->GetYaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_wz_13TeV_nvtx32->GetZaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_wz_13TeV_nvtx32->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_wz_13TeV_nvtx32->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_wz_13TeV_nvtx32->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_wz_13TeV_nvtx->Add(new_histo_group_Fake_wh3l_wz_13TeV_nvtx,"");
   
   TH1D *new_histo_group_WW_wh3l_wz_13TeV_nvtx33 = new TH1D("new_histo_group_WW_wh3l_wz_13TeV_nvtx33","histo_WW",40,0,40);
   new_histo_group_WW_wh3l_wz_13TeV_nvtx33->SetBinContent(10,0.01816071);
   new_histo_group_WW_wh3l_wz_13TeV_nvtx33->SetBinContent(11,0.01740127);
   new_histo_group_WW_wh3l_wz_13TeV_nvtx33->SetBinContent(12,0.02551711);
   new_histo_group_WW_wh3l_wz_13TeV_nvtx33->SetBinContent(14,0.01431565);
   new_histo_group_WW_wh3l_wz_13TeV_nvtx33->SetBinError(10,0.01816071);
   new_histo_group_WW_wh3l_wz_13TeV_nvtx33->SetBinError(11,0.01740127);
   new_histo_group_WW_wh3l_wz_13TeV_nvtx33->SetBinError(12,0.01822775);
   new_histo_group_WW_wh3l_wz_13TeV_nvtx33->SetBinError(14,0.01431565);
   new_histo_group_WW_wh3l_wz_13TeV_nvtx33->SetEntries(5);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_wz_13TeV_nvtx33->SetFillColor(ci);
   new_histo_group_WW_wh3l_wz_13TeV_nvtx33->SetFillStyle(3001);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_wz_13TeV_nvtx33->SetLineColor(ci);
   new_histo_group_WW_wh3l_wz_13TeV_nvtx33->GetXaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_wz_13TeV_nvtx33->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_wz_13TeV_nvtx33->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_wz_13TeV_nvtx33->GetXaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_wz_13TeV_nvtx33->GetYaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_wz_13TeV_nvtx33->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_wz_13TeV_nvtx33->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_wz_13TeV_nvtx33->GetYaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_wz_13TeV_nvtx33->GetZaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_wz_13TeV_nvtx33->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_wz_13TeV_nvtx33->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_wz_13TeV_nvtx33->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_wz_13TeV_nvtx->Add(new_histo_group_WW_wh3l_wz_13TeV_nvtx,"");
   
   TH1D *new_histo_group_VVV_wh3l_wz_13TeV_nvtx34 = new TH1D("new_histo_group_VVV_wh3l_wz_13TeV_nvtx34","histo_VVV",40,0,40);
   new_histo_group_VVV_wh3l_wz_13TeV_nvtx34->SetBinContent(2,0.0007728142);
   new_histo_group_VVV_wh3l_wz_13TeV_nvtx34->SetBinContent(4,0.004767447);
   new_histo_group_VVV_wh3l_wz_13TeV_nvtx34->SetBinContent(5,0.02801687);
   new_histo_group_VVV_wh3l_wz_13TeV_nvtx34->SetBinContent(6,0.02988252);
   new_histo_group_VVV_wh3l_wz_13TeV_nvtx34->SetBinContent(7,0.03748979);
   new_histo_group_VVV_wh3l_wz_13TeV_nvtx34->SetBinContent(8,0.05086131);
   new_histo_group_VVV_wh3l_wz_13TeV_nvtx34->SetBinContent(9,0.07045163);
   new_histo_group_VVV_wh3l_wz_13TeV_nvtx34->SetBinContent(10,0.0837819);
   new_histo_group_VVV_wh3l_wz_13TeV_nvtx34->SetBinContent(11,0.0701109);
   new_histo_group_VVV_wh3l_wz_13TeV_nvtx34->SetBinContent(12,0.05641029);
   new_histo_group_VVV_wh3l_wz_13TeV_nvtx34->SetBinContent(13,0.05196557);
   new_histo_group_VVV_wh3l_wz_13TeV_nvtx34->SetBinContent(14,0.02649462);
   new_histo_group_VVV_wh3l_wz_13TeV_nvtx34->SetBinContent(15,0.02620732);
   new_histo_group_VVV_wh3l_wz_13TeV_nvtx34->SetBinContent(16,0.02425681);
   new_histo_group_VVV_wh3l_wz_13TeV_nvtx34->SetBinContent(17,0.006687269);
   new_histo_group_VVV_wh3l_wz_13TeV_nvtx34->SetBinContent(18,0.00571064);
   new_histo_group_VVV_wh3l_wz_13TeV_nvtx34->SetBinContent(19,0.004133759);
   new_histo_group_VVV_wh3l_wz_13TeV_nvtx34->SetBinContent(20,0.0005334915);
   new_histo_group_VVV_wh3l_wz_13TeV_nvtx34->SetBinContent(21,3.412465e-05);
   new_histo_group_VVV_wh3l_wz_13TeV_nvtx34->SetBinContent(22,0.0003082858);
   new_histo_group_VVV_wh3l_wz_13TeV_nvtx34->SetBinContent(23,0.0008856061);
   new_histo_group_VVV_wh3l_wz_13TeV_nvtx34->SetBinContent(26,0.001808207);
   new_histo_group_VVV_wh3l_wz_13TeV_nvtx34->SetBinContent(28,8.334007e-10);
   new_histo_group_VVV_wh3l_wz_13TeV_nvtx34->SetBinError(2,0.0007728142);
   new_histo_group_VVV_wh3l_wz_13TeV_nvtx34->SetBinError(4,0.004875784);
   new_histo_group_VVV_wh3l_wz_13TeV_nvtx34->SetBinError(5,0.007343836);
   new_histo_group_VVV_wh3l_wz_13TeV_nvtx34->SetBinError(6,0.007417703);
   new_histo_group_VVV_wh3l_wz_13TeV_nvtx34->SetBinError(7,0.008724625);
   new_histo_group_VVV_wh3l_wz_13TeV_nvtx34->SetBinError(8,0.01019028);
   new_histo_group_VVV_wh3l_wz_13TeV_nvtx34->SetBinError(9,0.0114189);
   new_histo_group_VVV_wh3l_wz_13TeV_nvtx34->SetBinError(10,0.01271138);
   new_histo_group_VVV_wh3l_wz_13TeV_nvtx34->SetBinError(11,0.0113802);
   new_histo_group_VVV_wh3l_wz_13TeV_nvtx34->SetBinError(12,0.01088902);
   new_histo_group_VVV_wh3l_wz_13TeV_nvtx34->SetBinError(13,0.00923368);
   new_histo_group_VVV_wh3l_wz_13TeV_nvtx34->SetBinError(14,0.007373303);
   new_histo_group_VVV_wh3l_wz_13TeV_nvtx34->SetBinError(15,0.006423082);
   new_histo_group_VVV_wh3l_wz_13TeV_nvtx34->SetBinError(16,0.005872134);
   new_histo_group_VVV_wh3l_wz_13TeV_nvtx34->SetBinError(17,0.003166801);
   new_histo_group_VVV_wh3l_wz_13TeV_nvtx34->SetBinError(18,0.002279063);
   new_histo_group_VVV_wh3l_wz_13TeV_nvtx34->SetBinError(19,0.002145869);
   new_histo_group_VVV_wh3l_wz_13TeV_nvtx34->SetBinError(20,0.00199613);
   new_histo_group_VVV_wh3l_wz_13TeV_nvtx34->SetBinError(21,3.412465e-05);
   new_histo_group_VVV_wh3l_wz_13TeV_nvtx34->SetBinError(22,0.0003082858);
   new_histo_group_VVV_wh3l_wz_13TeV_nvtx34->SetBinError(23,0.0008856031);
   new_histo_group_VVV_wh3l_wz_13TeV_nvtx34->SetBinError(26,0.001808207);
   new_histo_group_VVV_wh3l_wz_13TeV_nvtx34->SetBinError(28,8.334007e-10);
   new_histo_group_VVV_wh3l_wz_13TeV_nvtx34->SetEntries(556);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_wz_13TeV_nvtx34->SetFillColor(ci);
   new_histo_group_VVV_wh3l_wz_13TeV_nvtx34->SetFillStyle(3001);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_wz_13TeV_nvtx34->SetLineColor(ci);
   new_histo_group_VVV_wh3l_wz_13TeV_nvtx34->GetXaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_wz_13TeV_nvtx34->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_wz_13TeV_nvtx34->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_wz_13TeV_nvtx34->GetXaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_wz_13TeV_nvtx34->GetYaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_wz_13TeV_nvtx34->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_wz_13TeV_nvtx34->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_wz_13TeV_nvtx34->GetYaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_wz_13TeV_nvtx34->GetZaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_wz_13TeV_nvtx34->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_wz_13TeV_nvtx34->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_wz_13TeV_nvtx34->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_wz_13TeV_nvtx->Add(new_histo_group_VVV_wh3l_wz_13TeV_nvtx,"");
   
   TH1D *new_histo_group_Vg_wh3l_wz_13TeV_nvtx35 = new TH1D("new_histo_group_Vg_wh3l_wz_13TeV_nvtx35","histo_Vg",40,0,40);
   new_histo_group_Vg_wh3l_wz_13TeV_nvtx35->SetBinContent(7,0.3709568);
   new_histo_group_Vg_wh3l_wz_13TeV_nvtx35->SetBinContent(8,0.4982107);
   new_histo_group_Vg_wh3l_wz_13TeV_nvtx35->SetBinContent(9,0.3519486);
   new_histo_group_Vg_wh3l_wz_13TeV_nvtx35->SetBinContent(10,0.6081493);
   new_histo_group_Vg_wh3l_wz_13TeV_nvtx35->SetBinContent(11,0.4006903);
   new_histo_group_Vg_wh3l_wz_13TeV_nvtx35->SetBinContent(12,0.7899634);
   new_histo_group_Vg_wh3l_wz_13TeV_nvtx35->SetBinContent(13,0.5311622);
   new_histo_group_Vg_wh3l_wz_13TeV_nvtx35->SetBinContent(14,0.2975123);
   new_histo_group_Vg_wh3l_wz_13TeV_nvtx35->SetBinContent(15,0.1633457);
   new_histo_group_Vg_wh3l_wz_13TeV_nvtx35->SetBinContent(16,0.5876691);
   new_histo_group_Vg_wh3l_wz_13TeV_nvtx35->SetBinContent(17,-0.01878599);
   new_histo_group_Vg_wh3l_wz_13TeV_nvtx35->SetBinContent(18,0.3961797);
   new_histo_group_Vg_wh3l_wz_13TeV_nvtx35->SetBinContent(21,0.03677323);
   new_histo_group_Vg_wh3l_wz_13TeV_nvtx35->SetBinContent(22,-0.02603303);
   new_histo_group_Vg_wh3l_wz_13TeV_nvtx35->SetBinContent(25,3.389801e-06);
   new_histo_group_Vg_wh3l_wz_13TeV_nvtx35->SetBinContent(27,9.17363e-06);
   new_histo_group_Vg_wh3l_wz_13TeV_nvtx35->SetBinError(7,0.2147378);
   new_histo_group_Vg_wh3l_wz_13TeV_nvtx35->SetBinError(8,0.2825916);
   new_histo_group_Vg_wh3l_wz_13TeV_nvtx35->SetBinError(9,0.2036167);
   new_histo_group_Vg_wh3l_wz_13TeV_nvtx35->SetBinError(10,0.2551473);
   new_histo_group_Vg_wh3l_wz_13TeV_nvtx35->SetBinError(11,0.2028598);
   new_histo_group_Vg_wh3l_wz_13TeV_nvtx35->SetBinError(12,0.3653162);
   new_histo_group_Vg_wh3l_wz_13TeV_nvtx35->SetBinError(13,0.2379959);
   new_histo_group_Vg_wh3l_wz_13TeV_nvtx35->SetBinError(14,0.1730802);
   new_histo_group_Vg_wh3l_wz_13TeV_nvtx35->SetBinError(15,0.1161148);
   new_histo_group_Vg_wh3l_wz_13TeV_nvtx35->SetBinError(16,0.2390373);
   new_histo_group_Vg_wh3l_wz_13TeV_nvtx35->SetBinError(17,0.1451509);
   new_histo_group_Vg_wh3l_wz_13TeV_nvtx35->SetBinError(18,0.2053596);
   new_histo_group_Vg_wh3l_wz_13TeV_nvtx35->SetBinError(21,0.03677323);
   new_histo_group_Vg_wh3l_wz_13TeV_nvtx35->SetBinError(22,0.02603303);
   new_histo_group_Vg_wh3l_wz_13TeV_nvtx35->SetBinError(25,2.780162e-06);
   new_histo_group_Vg_wh3l_wz_13TeV_nvtx35->SetBinError(27,9.17363e-06);
   new_histo_group_Vg_wh3l_wz_13TeV_nvtx35->SetEntries(63);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_wz_13TeV_nvtx35->SetFillColor(ci);
   new_histo_group_Vg_wh3l_wz_13TeV_nvtx35->SetFillStyle(3001);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_wz_13TeV_nvtx35->SetLineColor(ci);
   new_histo_group_Vg_wh3l_wz_13TeV_nvtx35->GetXaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_wz_13TeV_nvtx35->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_wz_13TeV_nvtx35->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_wz_13TeV_nvtx35->GetXaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_wz_13TeV_nvtx35->GetYaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_wz_13TeV_nvtx35->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_wz_13TeV_nvtx35->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_wz_13TeV_nvtx35->GetYaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_wz_13TeV_nvtx35->GetZaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_wz_13TeV_nvtx35->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_wz_13TeV_nvtx35->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_wz_13TeV_nvtx35->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_wz_13TeV_nvtx->Add(new_histo_group_Vg_wh3l_wz_13TeV_nvtx,"");
   
   TH1D *new_histo_group_ZZ_wh3l_wz_13TeV_nvtx36 = new TH1D("new_histo_group_ZZ_wh3l_wz_13TeV_nvtx36","histo_ZZ",40,0,40);
   new_histo_group_ZZ_wh3l_wz_13TeV_nvtx36->SetBinContent(5,0.2545422);
   new_histo_group_ZZ_wh3l_wz_13TeV_nvtx36->SetBinContent(6,0.3049806);
   new_histo_group_ZZ_wh3l_wz_13TeV_nvtx36->SetBinContent(7,0.660021);
   new_histo_group_ZZ_wh3l_wz_13TeV_nvtx36->SetBinContent(8,0.9020795);
   new_histo_group_ZZ_wh3l_wz_13TeV_nvtx36->SetBinContent(9,0.7829527);
   new_histo_group_ZZ_wh3l_wz_13TeV_nvtx36->SetBinContent(10,1.124052);
   new_histo_group_ZZ_wh3l_wz_13TeV_nvtx36->SetBinContent(11,0.4965108);
   new_histo_group_ZZ_wh3l_wz_13TeV_nvtx36->SetBinContent(12,0.7185491);
   new_histo_group_ZZ_wh3l_wz_13TeV_nvtx36->SetBinContent(13,0.4574985);
   new_histo_group_ZZ_wh3l_wz_13TeV_nvtx36->SetBinContent(14,0.2727762);
   new_histo_group_ZZ_wh3l_wz_13TeV_nvtx36->SetBinContent(15,0.2063382);
   new_histo_group_ZZ_wh3l_wz_13TeV_nvtx36->SetBinContent(16,0.176954);
   new_histo_group_ZZ_wh3l_wz_13TeV_nvtx36->SetBinContent(17,0.1411304);
   new_histo_group_ZZ_wh3l_wz_13TeV_nvtx36->SetBinContent(18,0.1162699);
   new_histo_group_ZZ_wh3l_wz_13TeV_nvtx36->SetBinContent(19,0.08611106);
   new_histo_group_ZZ_wh3l_wz_13TeV_nvtx36->SetBinContent(20,0.06756422);
   new_histo_group_ZZ_wh3l_wz_13TeV_nvtx36->SetBinContent(21,6.443625e-08);
   new_histo_group_ZZ_wh3l_wz_13TeV_nvtx36->SetBinContent(24,0.02757244);
   new_histo_group_ZZ_wh3l_wz_13TeV_nvtx36->SetBinContent(27,0.002374282);
   new_histo_group_ZZ_wh3l_wz_13TeV_nvtx36->SetBinContent(28,0.004849092);
   new_histo_group_ZZ_wh3l_wz_13TeV_nvtx36->SetBinError(5,0.1150057);
   new_histo_group_ZZ_wh3l_wz_13TeV_nvtx36->SetBinError(6,0.1158023);
   new_histo_group_ZZ_wh3l_wz_13TeV_nvtx36->SetBinError(7,0.1721006);
   new_histo_group_ZZ_wh3l_wz_13TeV_nvtx36->SetBinError(8,0.2024966);
   new_histo_group_ZZ_wh3l_wz_13TeV_nvtx36->SetBinError(9,0.1938229);
   new_histo_group_ZZ_wh3l_wz_13TeV_nvtx36->SetBinError(10,0.2224384);
   new_histo_group_ZZ_wh3l_wz_13TeV_nvtx36->SetBinError(11,0.143248);
   new_histo_group_ZZ_wh3l_wz_13TeV_nvtx36->SetBinError(12,0.1660663);
   new_histo_group_ZZ_wh3l_wz_13TeV_nvtx36->SetBinError(13,0.1258835);
   new_histo_group_ZZ_wh3l_wz_13TeV_nvtx36->SetBinError(14,0.1043174);
   new_histo_group_ZZ_wh3l_wz_13TeV_nvtx36->SetBinError(15,0.08471772);
   new_histo_group_ZZ_wh3l_wz_13TeV_nvtx36->SetBinError(16,0.07644714);
   new_histo_group_ZZ_wh3l_wz_13TeV_nvtx36->SetBinError(17,0.06617364);
   new_histo_group_ZZ_wh3l_wz_13TeV_nvtx36->SetBinError(18,0.06303628);
   new_histo_group_ZZ_wh3l_wz_13TeV_nvtx36->SetBinError(19,0.04967669);
   new_histo_group_ZZ_wh3l_wz_13TeV_nvtx36->SetBinError(20,0.0487984);
   new_histo_group_ZZ_wh3l_wz_13TeV_nvtx36->SetBinError(21,6.443625e-08);
   new_histo_group_ZZ_wh3l_wz_13TeV_nvtx36->SetBinError(24,0.02757244);
   new_histo_group_ZZ_wh3l_wz_13TeV_nvtx36->SetBinError(27,0.002374282);
   new_histo_group_ZZ_wh3l_wz_13TeV_nvtx36->SetBinError(28,0.004849092);
   new_histo_group_ZZ_wh3l_wz_13TeV_nvtx36->SetEntries(182);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_wz_13TeV_nvtx36->SetFillColor(ci);
   new_histo_group_ZZ_wh3l_wz_13TeV_nvtx36->SetFillStyle(3001);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_wz_13TeV_nvtx36->SetLineColor(ci);
   new_histo_group_ZZ_wh3l_wz_13TeV_nvtx36->GetXaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_wz_13TeV_nvtx36->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_wz_13TeV_nvtx36->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_wz_13TeV_nvtx36->GetXaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_wz_13TeV_nvtx36->GetYaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_wz_13TeV_nvtx36->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_wz_13TeV_nvtx36->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_wz_13TeV_nvtx36->GetYaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_wz_13TeV_nvtx36->GetZaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_wz_13TeV_nvtx36->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_wz_13TeV_nvtx36->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_wz_13TeV_nvtx36->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_wz_13TeV_nvtx->Add(new_histo_group_ZZ_wh3l_wz_13TeV_nvtx,"");
   
   TH1D *new_histo_group_WZ_wh3l_wz_13TeV_nvtx37 = new TH1D("new_histo_group_WZ_wh3l_wz_13TeV_nvtx37","histo_WZ",40,0,40);
   new_histo_group_WZ_wh3l_wz_13TeV_nvtx37->SetBinContent(2,0.04935735);
   new_histo_group_WZ_wh3l_wz_13TeV_nvtx37->SetBinContent(3,0.3831142);
   new_histo_group_WZ_wh3l_wz_13TeV_nvtx37->SetBinContent(4,1.347992);
   new_histo_group_WZ_wh3l_wz_13TeV_nvtx37->SetBinContent(5,2.878743);
   new_histo_group_WZ_wh3l_wz_13TeV_nvtx37->SetBinContent(6,5.513447);
   new_histo_group_WZ_wh3l_wz_13TeV_nvtx37->SetBinContent(7,8.435831);
   new_histo_group_WZ_wh3l_wz_13TeV_nvtx37->SetBinContent(8,10.97283);
   new_histo_group_WZ_wh3l_wz_13TeV_nvtx37->SetBinContent(9,12.32778);
   new_histo_group_WZ_wh3l_wz_13TeV_nvtx37->SetBinContent(10,13.35224);
   new_histo_group_WZ_wh3l_wz_13TeV_nvtx37->SetBinContent(11,12.72758);
   new_histo_group_WZ_wh3l_wz_13TeV_nvtx37->SetBinContent(12,11.28856);
   new_histo_group_WZ_wh3l_wz_13TeV_nvtx37->SetBinContent(13,9.079776);
   new_histo_group_WZ_wh3l_wz_13TeV_nvtx37->SetBinContent(14,6.881847);
   new_histo_group_WZ_wh3l_wz_13TeV_nvtx37->SetBinContent(15,4.604353);
   new_histo_group_WZ_wh3l_wz_13TeV_nvtx37->SetBinContent(16,3.406381);
   new_histo_group_WZ_wh3l_wz_13TeV_nvtx37->SetBinContent(17,2.096528);
   new_histo_group_WZ_wh3l_wz_13TeV_nvtx37->SetBinContent(18,1.470949);
   new_histo_group_WZ_wh3l_wz_13TeV_nvtx37->SetBinContent(19,0.8548838);
   new_histo_group_WZ_wh3l_wz_13TeV_nvtx37->SetBinContent(20,0.4250012);
   new_histo_group_WZ_wh3l_wz_13TeV_nvtx37->SetBinContent(21,0.2710986);
   new_histo_group_WZ_wh3l_wz_13TeV_nvtx37->SetBinContent(22,0.1335616);
   new_histo_group_WZ_wh3l_wz_13TeV_nvtx37->SetBinContent(23,0.04214756);
   new_histo_group_WZ_wh3l_wz_13TeV_nvtx37->SetBinContent(24,0.0233657);
   new_histo_group_WZ_wh3l_wz_13TeV_nvtx37->SetBinContent(25,0.01855784);
   new_histo_group_WZ_wh3l_wz_13TeV_nvtx37->SetBinContent(26,0.009176801);
   new_histo_group_WZ_wh3l_wz_13TeV_nvtx37->SetBinContent(27,0.003693751);
   new_histo_group_WZ_wh3l_wz_13TeV_nvtx37->SetBinContent(28,0.002151581);
   new_histo_group_WZ_wh3l_wz_13TeV_nvtx37->SetBinContent(29,0.001611183);
   new_histo_group_WZ_wh3l_wz_13TeV_nvtx37->SetBinContent(30,0.0006865517);
   new_histo_group_WZ_wh3l_wz_13TeV_nvtx37->SetBinContent(31,1.837325e-06);
   new_histo_group_WZ_wh3l_wz_13TeV_nvtx37->SetBinContent(32,6.893778e-06);
   new_histo_group_WZ_wh3l_wz_13TeV_nvtx37->SetBinContent(38,1.404431e-13);
   new_histo_group_WZ_wh3l_wz_13TeV_nvtx37->SetBinError(2,0.0178807);
   new_histo_group_WZ_wh3l_wz_13TeV_nvtx37->SetBinError(3,0.04964706);
   new_histo_group_WZ_wh3l_wz_13TeV_nvtx37->SetBinError(4,0.09288218);
   new_histo_group_WZ_wh3l_wz_13TeV_nvtx37->SetBinError(5,0.1343666);
   new_histo_group_WZ_wh3l_wz_13TeV_nvtx37->SetBinError(6,0.1835683);
   new_histo_group_WZ_wh3l_wz_13TeV_nvtx37->SetBinError(7,0.2247921);
   new_histo_group_WZ_wh3l_wz_13TeV_nvtx37->SetBinError(8,0.2525888);
   new_histo_group_WZ_wh3l_wz_13TeV_nvtx37->SetBinError(9,0.2641735);
   new_histo_group_WZ_wh3l_wz_13TeV_nvtx37->SetBinError(10,0.2720723);
   new_histo_group_WZ_wh3l_wz_13TeV_nvtx37->SetBinError(11,0.2628442);
   new_histo_group_WZ_wh3l_wz_13TeV_nvtx37->SetBinError(12,0.2437691);
   new_histo_group_WZ_wh3l_wz_13TeV_nvtx37->SetBinError(13,0.2150114);
   new_histo_group_WZ_wh3l_wz_13TeV_nvtx37->SetBinError(14,0.1853547);
   new_histo_group_WZ_wh3l_wz_13TeV_nvtx37->SetBinError(15,0.1488076);
   new_histo_group_WZ_wh3l_wz_13TeV_nvtx37->SetBinError(16,0.1251332);
   new_histo_group_WZ_wh3l_wz_13TeV_nvtx37->SetBinError(17,0.09700779);
   new_histo_group_WZ_wh3l_wz_13TeV_nvtx37->SetBinError(18,0.07801908);
   new_histo_group_WZ_wh3l_wz_13TeV_nvtx37->SetBinError(19,0.05907851);
   new_histo_group_WZ_wh3l_wz_13TeV_nvtx37->SetBinError(20,0.03876826);
   new_histo_group_WZ_wh3l_wz_13TeV_nvtx37->SetBinError(21,0.03122981);
   new_histo_group_WZ_wh3l_wz_13TeV_nvtx37->SetBinError(22,0.0211);
   new_histo_group_WZ_wh3l_wz_13TeV_nvtx37->SetBinError(23,0.01026929);
   new_histo_group_WZ_wh3l_wz_13TeV_nvtx37->SetBinError(24,0.007108383);
   new_histo_group_WZ_wh3l_wz_13TeV_nvtx37->SetBinError(25,0.006927361);
   new_histo_group_WZ_wh3l_wz_13TeV_nvtx37->SetBinError(26,0.005519943);
   new_histo_group_WZ_wh3l_wz_13TeV_nvtx37->SetBinError(27,0.002049928);
   new_histo_group_WZ_wh3l_wz_13TeV_nvtx37->SetBinError(28,0.001523363);
   new_histo_group_WZ_wh3l_wz_13TeV_nvtx37->SetBinError(29,0.001082697);
   new_histo_group_WZ_wh3l_wz_13TeV_nvtx37->SetBinError(30,0.0006864176);
   new_histo_group_WZ_wh3l_wz_13TeV_nvtx37->SetBinError(31,1.837325e-06);
   new_histo_group_WZ_wh3l_wz_13TeV_nvtx37->SetBinError(32,6.893778e-06);
   new_histo_group_WZ_wh3l_wz_13TeV_nvtx37->SetBinError(38,1.404431e-13);
   new_histo_group_WZ_wh3l_wz_13TeV_nvtx37->SetEntries(22144);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_wz_13TeV_nvtx37->SetFillColor(ci);
   new_histo_group_WZ_wh3l_wz_13TeV_nvtx37->SetFillStyle(3001);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_wz_13TeV_nvtx37->SetLineColor(ci);
   new_histo_group_WZ_wh3l_wz_13TeV_nvtx37->GetXaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_wz_13TeV_nvtx37->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_wz_13TeV_nvtx37->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_wz_13TeV_nvtx37->GetXaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_wz_13TeV_nvtx37->GetYaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_wz_13TeV_nvtx37->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_wz_13TeV_nvtx37->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_wz_13TeV_nvtx37->GetYaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_wz_13TeV_nvtx37->GetZaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_wz_13TeV_nvtx37->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_wz_13TeV_nvtx37->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_wz_13TeV_nvtx37->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_wz_13TeV_nvtx->Add(new_histo_group_WZ_wh3l_wz_13TeV_nvtx,"");
   
   TH1D *new_histo_group_Higgs_wh3l_wz_13TeV_nvtx38 = new TH1D("new_histo_group_Higgs_wh3l_wz_13TeV_nvtx38","histo_H_htt",40,0,40);
   new_histo_group_Higgs_wh3l_wz_13TeV_nvtx38->SetBinContent(2,0.001726781);
   new_histo_group_Higgs_wh3l_wz_13TeV_nvtx38->SetBinContent(3,0.002412936);
   new_histo_group_Higgs_wh3l_wz_13TeV_nvtx38->SetBinContent(4,0.008957373);
   new_histo_group_Higgs_wh3l_wz_13TeV_nvtx38->SetBinContent(5,0.02077761);
   new_histo_group_Higgs_wh3l_wz_13TeV_nvtx38->SetBinContent(6,0.04078466);
   new_histo_group_Higgs_wh3l_wz_13TeV_nvtx38->SetBinContent(7,0.07821075);
   new_histo_group_Higgs_wh3l_wz_13TeV_nvtx38->SetBinContent(8,0.1034088);
   new_histo_group_Higgs_wh3l_wz_13TeV_nvtx38->SetBinContent(9,0.1066069);
   new_histo_group_Higgs_wh3l_wz_13TeV_nvtx38->SetBinContent(10,0.1162509);
   new_histo_group_Higgs_wh3l_wz_13TeV_nvtx38->SetBinContent(11,0.09218059);
   new_histo_group_Higgs_wh3l_wz_13TeV_nvtx38->SetBinContent(12,0.09270008);
   new_histo_group_Higgs_wh3l_wz_13TeV_nvtx38->SetBinContent(13,0.06879073);
   new_histo_group_Higgs_wh3l_wz_13TeV_nvtx38->SetBinContent(14,0.05209491);
   new_histo_group_Higgs_wh3l_wz_13TeV_nvtx38->SetBinContent(15,0.03241949);
   new_histo_group_Higgs_wh3l_wz_13TeV_nvtx38->SetBinContent(16,0.03500925);
   new_histo_group_Higgs_wh3l_wz_13TeV_nvtx38->SetBinContent(17,0.02210258);
   new_histo_group_Higgs_wh3l_wz_13TeV_nvtx38->SetBinContent(18,0.006755418);
   new_histo_group_Higgs_wh3l_wz_13TeV_nvtx38->SetBinContent(19,0.004871022);
   new_histo_group_Higgs_wh3l_wz_13TeV_nvtx38->SetBinContent(20,0.005162702);
   new_histo_group_Higgs_wh3l_wz_13TeV_nvtx38->SetBinContent(21,0.0003887004);
   new_histo_group_Higgs_wh3l_wz_13TeV_nvtx38->SetBinContent(22,0.001336623);
   new_histo_group_Higgs_wh3l_wz_13TeV_nvtx38->SetBinContent(23,0.0005668121);
   new_histo_group_Higgs_wh3l_wz_13TeV_nvtx38->SetBinContent(24,7.929111e-06);
   new_histo_group_Higgs_wh3l_wz_13TeV_nvtx38->SetBinContent(29,3.434946e-07);
   new_histo_group_Higgs_wh3l_wz_13TeV_nvtx38->SetBinContent(33,1.679404e-12);
   new_histo_group_Higgs_wh3l_wz_13TeV_nvtx38->SetBinError(2,0.001726781);
   new_histo_group_Higgs_wh3l_wz_13TeV_nvtx38->SetBinError(3,0.001722512);
   new_histo_group_Higgs_wh3l_wz_13TeV_nvtx38->SetBinError(4,0.003208509);
   new_histo_group_Higgs_wh3l_wz_13TeV_nvtx38->SetBinError(5,0.004736528);
   new_histo_group_Higgs_wh3l_wz_13TeV_nvtx38->SetBinError(6,0.006848244);
   new_histo_group_Higgs_wh3l_wz_13TeV_nvtx38->SetBinError(7,0.0101234);
   new_histo_group_Higgs_wh3l_wz_13TeV_nvtx38->SetBinError(8,0.0114145);
   new_histo_group_Higgs_wh3l_wz_13TeV_nvtx38->SetBinError(9,0.01112929);
   new_histo_group_Higgs_wh3l_wz_13TeV_nvtx38->SetBinError(10,0.01210446);
   new_histo_group_Higgs_wh3l_wz_13TeV_nvtx38->SetBinError(11,0.0105566);
   new_histo_group_Higgs_wh3l_wz_13TeV_nvtx38->SetBinError(12,0.01069126);
   new_histo_group_Higgs_wh3l_wz_13TeV_nvtx38->SetBinError(13,0.008733352);
   new_histo_group_Higgs_wh3l_wz_13TeV_nvtx38->SetBinError(14,0.007346296);
   new_histo_group_Higgs_wh3l_wz_13TeV_nvtx38->SetBinError(15,0.005328123);
   new_histo_group_Higgs_wh3l_wz_13TeV_nvtx38->SetBinError(16,0.005883057);
   new_histo_group_Higgs_wh3l_wz_13TeV_nvtx38->SetBinError(17,0.004609508);
   new_histo_group_Higgs_wh3l_wz_13TeV_nvtx38->SetBinError(18,0.002394831);
   new_histo_group_Higgs_wh3l_wz_13TeV_nvtx38->SetBinError(19,0.001970527);
   new_histo_group_Higgs_wh3l_wz_13TeV_nvtx38->SetBinError(20,0.002120075);
   new_histo_group_Higgs_wh3l_wz_13TeV_nvtx38->SetBinError(21,0.000379971);
   new_histo_group_Higgs_wh3l_wz_13TeV_nvtx38->SetBinError(22,0.00126631);
   new_histo_group_Higgs_wh3l_wz_13TeV_nvtx38->SetBinError(23,0.0004711126);
   new_histo_group_Higgs_wh3l_wz_13TeV_nvtx38->SetBinError(24,7.892091e-06);
   new_histo_group_Higgs_wh3l_wz_13TeV_nvtx38->SetBinError(29,3.434946e-07);
   new_histo_group_Higgs_wh3l_wz_13TeV_nvtx38->SetBinError(33,1.679404e-12);
   new_histo_group_Higgs_wh3l_wz_13TeV_nvtx38->SetEntries(1285);
   new_histo_group_Higgs_wh3l_wz_13TeV_nvtx38->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_wz_13TeV_nvtx38->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_wz_13TeV_nvtx38->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_wz_13TeV_nvtx38->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_wz_13TeV_nvtx38->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_wz_13TeV_nvtx38->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_wz_13TeV_nvtx38->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_wz_13TeV_nvtx38->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_wz_13TeV_nvtx38->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_wz_13TeV_nvtx38->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_wz_13TeV_nvtx38->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_wz_13TeV_nvtx38->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_wz_13TeV_nvtx38->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_wz_13TeV_nvtx38->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_wz_13TeV_nvtx38->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_wz_13TeV_nvtx->Add(new_histo_group_Higgs_wh3l_wz_13TeV_nvtx,"");
   thsBackground_grouped_wh3l_wz_13TeV_nvtx->Draw("hist same");
   
   thsSignal_grouped_wh3l_wz_13TeV_nvtx = new THStack();
   thsSignal_grouped_wh3l_wz_13TeV_nvtx->SetName("thsSignal_grouped_wh3l_wz_13TeV_nvtx");
   thsSignal_grouped_wh3l_wz_13TeV_nvtx->SetTitle("thsSignal_grouped_wh3l_wz_13TeV_nvtx");
   
   TH1F *thsSignal_grouped_wh3l_wz_13TeV_nvtx_stack_8 = new TH1F("thsSignal_grouped_wh3l_wz_13TeV_nvtx_stack_8","thsSignal_grouped_wh3l_wz_13TeV_nvtx",40,0,40);
   thsSignal_grouped_wh3l_wz_13TeV_nvtx_stack_8->SetMinimum(0);
   thsSignal_grouped_wh3l_wz_13TeV_nvtx_stack_8->SetMaximum(0.1347731);
   thsSignal_grouped_wh3l_wz_13TeV_nvtx_stack_8->SetDirectory(0);
   thsSignal_grouped_wh3l_wz_13TeV_nvtx_stack_8->SetStats(0);
   thsSignal_grouped_wh3l_wz_13TeV_nvtx_stack_8->SetLineStyle(0);
   thsSignal_grouped_wh3l_wz_13TeV_nvtx_stack_8->SetMarkerStyle(20);
   thsSignal_grouped_wh3l_wz_13TeV_nvtx_stack_8->GetXaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_wz_13TeV_nvtx_stack_8->GetXaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_wz_13TeV_nvtx_stack_8->GetXaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_wz_13TeV_nvtx_stack_8->GetXaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_wz_13TeV_nvtx_stack_8->GetXaxis()->SetTitleOffset(0.9);
   thsSignal_grouped_wh3l_wz_13TeV_nvtx_stack_8->GetXaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_wz_13TeV_nvtx_stack_8->GetYaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_wz_13TeV_nvtx_stack_8->GetYaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_wz_13TeV_nvtx_stack_8->GetYaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_wz_13TeV_nvtx_stack_8->GetYaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_wz_13TeV_nvtx_stack_8->GetYaxis()->SetTitleOffset(1.25);
   thsSignal_grouped_wh3l_wz_13TeV_nvtx_stack_8->GetYaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_wz_13TeV_nvtx_stack_8->GetZaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_wz_13TeV_nvtx_stack_8->GetZaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_wz_13TeV_nvtx_stack_8->GetZaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_wz_13TeV_nvtx_stack_8->GetZaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_wz_13TeV_nvtx_stack_8->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_wz_13TeV_nvtx->SetHistogram(thsSignal_grouped_wh3l_wz_13TeV_nvtx_stack_8);
   
   
   TH1D *new_histo_group_Higgs_wh3l_wz_13TeV_nvtx39 = new TH1D("new_histo_group_Higgs_wh3l_wz_13TeV_nvtx39","histo_H_htt",40,0,40);
   new_histo_group_Higgs_wh3l_wz_13TeV_nvtx39->SetBinContent(2,0.001726781);
   new_histo_group_Higgs_wh3l_wz_13TeV_nvtx39->SetBinContent(3,0.002412936);
   new_histo_group_Higgs_wh3l_wz_13TeV_nvtx39->SetBinContent(4,0.008957373);
   new_histo_group_Higgs_wh3l_wz_13TeV_nvtx39->SetBinContent(5,0.02077761);
   new_histo_group_Higgs_wh3l_wz_13TeV_nvtx39->SetBinContent(6,0.04078466);
   new_histo_group_Higgs_wh3l_wz_13TeV_nvtx39->SetBinContent(7,0.07821075);
   new_histo_group_Higgs_wh3l_wz_13TeV_nvtx39->SetBinContent(8,0.1034088);
   new_histo_group_Higgs_wh3l_wz_13TeV_nvtx39->SetBinContent(9,0.1066069);
   new_histo_group_Higgs_wh3l_wz_13TeV_nvtx39->SetBinContent(10,0.1162509);
   new_histo_group_Higgs_wh3l_wz_13TeV_nvtx39->SetBinContent(11,0.09218059);
   new_histo_group_Higgs_wh3l_wz_13TeV_nvtx39->SetBinContent(12,0.09270008);
   new_histo_group_Higgs_wh3l_wz_13TeV_nvtx39->SetBinContent(13,0.06879073);
   new_histo_group_Higgs_wh3l_wz_13TeV_nvtx39->SetBinContent(14,0.05209491);
   new_histo_group_Higgs_wh3l_wz_13TeV_nvtx39->SetBinContent(15,0.03241949);
   new_histo_group_Higgs_wh3l_wz_13TeV_nvtx39->SetBinContent(16,0.03500925);
   new_histo_group_Higgs_wh3l_wz_13TeV_nvtx39->SetBinContent(17,0.02210258);
   new_histo_group_Higgs_wh3l_wz_13TeV_nvtx39->SetBinContent(18,0.006755418);
   new_histo_group_Higgs_wh3l_wz_13TeV_nvtx39->SetBinContent(19,0.004871022);
   new_histo_group_Higgs_wh3l_wz_13TeV_nvtx39->SetBinContent(20,0.005162702);
   new_histo_group_Higgs_wh3l_wz_13TeV_nvtx39->SetBinContent(21,0.0003887004);
   new_histo_group_Higgs_wh3l_wz_13TeV_nvtx39->SetBinContent(22,0.001336623);
   new_histo_group_Higgs_wh3l_wz_13TeV_nvtx39->SetBinContent(23,0.0005668121);
   new_histo_group_Higgs_wh3l_wz_13TeV_nvtx39->SetBinContent(24,7.929111e-06);
   new_histo_group_Higgs_wh3l_wz_13TeV_nvtx39->SetBinContent(29,3.434946e-07);
   new_histo_group_Higgs_wh3l_wz_13TeV_nvtx39->SetBinContent(33,1.679404e-12);
   new_histo_group_Higgs_wh3l_wz_13TeV_nvtx39->SetBinError(2,0.001726781);
   new_histo_group_Higgs_wh3l_wz_13TeV_nvtx39->SetBinError(3,0.001722512);
   new_histo_group_Higgs_wh3l_wz_13TeV_nvtx39->SetBinError(4,0.003208509);
   new_histo_group_Higgs_wh3l_wz_13TeV_nvtx39->SetBinError(5,0.004736528);
   new_histo_group_Higgs_wh3l_wz_13TeV_nvtx39->SetBinError(6,0.006848244);
   new_histo_group_Higgs_wh3l_wz_13TeV_nvtx39->SetBinError(7,0.0101234);
   new_histo_group_Higgs_wh3l_wz_13TeV_nvtx39->SetBinError(8,0.0114145);
   new_histo_group_Higgs_wh3l_wz_13TeV_nvtx39->SetBinError(9,0.01112929);
   new_histo_group_Higgs_wh3l_wz_13TeV_nvtx39->SetBinError(10,0.01210446);
   new_histo_group_Higgs_wh3l_wz_13TeV_nvtx39->SetBinError(11,0.0105566);
   new_histo_group_Higgs_wh3l_wz_13TeV_nvtx39->SetBinError(12,0.01069126);
   new_histo_group_Higgs_wh3l_wz_13TeV_nvtx39->SetBinError(13,0.008733352);
   new_histo_group_Higgs_wh3l_wz_13TeV_nvtx39->SetBinError(14,0.007346296);
   new_histo_group_Higgs_wh3l_wz_13TeV_nvtx39->SetBinError(15,0.005328123);
   new_histo_group_Higgs_wh3l_wz_13TeV_nvtx39->SetBinError(16,0.005883057);
   new_histo_group_Higgs_wh3l_wz_13TeV_nvtx39->SetBinError(17,0.004609508);
   new_histo_group_Higgs_wh3l_wz_13TeV_nvtx39->SetBinError(18,0.002394831);
   new_histo_group_Higgs_wh3l_wz_13TeV_nvtx39->SetBinError(19,0.001970527);
   new_histo_group_Higgs_wh3l_wz_13TeV_nvtx39->SetBinError(20,0.002120075);
   new_histo_group_Higgs_wh3l_wz_13TeV_nvtx39->SetBinError(21,0.000379971);
   new_histo_group_Higgs_wh3l_wz_13TeV_nvtx39->SetBinError(22,0.00126631);
   new_histo_group_Higgs_wh3l_wz_13TeV_nvtx39->SetBinError(23,0.0004711126);
   new_histo_group_Higgs_wh3l_wz_13TeV_nvtx39->SetBinError(24,7.892091e-06);
   new_histo_group_Higgs_wh3l_wz_13TeV_nvtx39->SetBinError(29,3.434946e-07);
   new_histo_group_Higgs_wh3l_wz_13TeV_nvtx39->SetBinError(33,1.679404e-12);
   new_histo_group_Higgs_wh3l_wz_13TeV_nvtx39->SetEntries(1285);
   new_histo_group_Higgs_wh3l_wz_13TeV_nvtx39->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_wz_13TeV_nvtx39->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_wz_13TeV_nvtx39->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_wz_13TeV_nvtx39->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_wz_13TeV_nvtx39->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_wz_13TeV_nvtx39->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_wz_13TeV_nvtx39->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_wz_13TeV_nvtx39->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_wz_13TeV_nvtx39->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_wz_13TeV_nvtx39->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_wz_13TeV_nvtx39->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_wz_13TeV_nvtx39->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_wz_13TeV_nvtx39->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_wz_13TeV_nvtx39->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_wz_13TeV_nvtx39->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_wz_13TeV_nvtx->Add(new_histo_group_Higgs_wh3l_wz_13TeV_nvtx,"");
   thsSignal_grouped_wh3l_wz_13TeV_nvtx->Draw("hist same noclear");
   
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
   0.05013016,
   0.3831142,
   1.35276,
   2.551619,
   5.423891,
   10.063,
   15.93226,
   13.59357,
   15.80882,
   15.75536,
   16.09089,
   10.88446,
   7.483226,
   4.498255,
   5.338436,
   2.085094,
   2.275771,
   1.023491,
   0.7108674,
   0.1489686,
   0.09600891,
   -0.01583234,
   0.05093814,
   0.01856123,
   0.01098501,
   0.006077207,
   0.007000674,
   0.001611183,
   0.0001224329,
   1.837325e-06,
   6.893778e-06,
   0,
   0,
   0,
   0,
   0,
   1.404431e-13,
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
   0.0186628,
   0.05039326,
   0.1022683,
   0.5619846,
   0.5718407,
   1.214662,
   2.612466,
   0.8019643,
   1.460712,
   2.126904,
   2.577859,
   1.370252,
   1.303771,
   0.7739135,
   1.248603,
   0.4725775,
   0.6456255,
   0.1927036,
   0.2848301,
   0.1847907,
   0.05950464,
   0.07299756,
   0.03470304,
   0.006940004,
   0.007552308,
   0.004434062,
   0.00637467,
   0.001083366,
   0.001266052,
   1.837742e-06,
   6.895136e-06,
   0,
   0,
   0,
   0,
   0,
   1.404481e-13,
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
   0.01866268,
   0.05040008,
   0.1018943,
   0.5616491,
   0.5702022,
   1.359329,
   2.610983,
   1.733969,
   1.647143,
   2.125926,
   2.577138,
   1.368897,
   0.5207949,
   0.7733639,
   1.248099,
   0.3342441,
   0.9268083,
   0.2729986,
   0.2862399,
   0.1847881,
   0.05949476,
   0.07299711,
   0.03470289,
   0.006939841,
   0.00755253,
   0.004434054,
   0.006374646,
   0.001083246,
   0.001266052,
   1.837755e-06,
   6.895173e-06,
   0,
   0,
   0,
   0,
   0,
   1.404482e-13,
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
   Graph_Graph3007->SetMinimum(-1.964516);
   Graph_Graph3007->SetMaximum(20.54371);
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
   0,
   0,
   8,
   9,
   14,
   11,
   22,
   18,
   28,
   11,
   9,
   12,
   8,
   4,
   3,
   2,
   2,
   1,
   2,
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
   0,
   0,
   2.768432,
   2.943511,
   3.696567,
   3.265636,
   4.654589,
   4.202964,
   5.259811,
   3.265636,
   2.943511,
   3.415326,
   2.768432,
   1.914367,
   1.632727,
   1.29183,
   1.29183,
   0.8272524,
   1.29183,
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
   1.147908,
   1.147908,
   3.94522,
   4.110286,
   4.830479,
   4.416609,
   5.761485,
   5.321116,
   6.354577,
   4.416609,
   4.110286,
   4.559911,
   3.94522,
   3.162815,
   2.918242,
   2.63791,
   2.63791,
   2.29957,
   2.63791,
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
   1.147908};
   grae = new TGraphAsymmErrors(40,_fx3008,_fy3008,_felx3008,_fehx3008,_fely3008,_fehy3008);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(1);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3008 = new TH1F("Graph_Graph3008","",100,0,44);
   Graph_Graph3008->SetMinimum(0);
   Graph_Graph3008->SetMaximum(37.79003);
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
   TLegendEntry *entry=leg->AddEntry("new_histo_group_Fake_wh3l_wz_13TeV_nvtx","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_wz_13TeV_nvtx","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_wz_13TeV_nvtx","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_wz_13TeV_nvtx","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_wz_13TeV_nvtx","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_wz_13TeV_nvtx","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_wz_13TeV_nvtx","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_wz_13TeV_nvtx","Data","EPL");
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
   entry=leg->AddEntry("new_histo_group_Fake_wh3l_wz_13TeV_nvtx","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_wz_13TeV_nvtx","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_wz_13TeV_nvtx","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_wz_13TeV_nvtx","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_wz_13TeV_nvtx","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_wz_13TeV_nvtx","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_wz_13TeV_nvtx","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_wz_13TeV_nvtx","Data","EPL");
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
   hframe_copy40->SetMaximum(83.22876);
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
   ccwh3l_wz_13TeV_nvtx->Modified();
   ccwh3l_wz_13TeV_nvtx->cd();
   ccwh3l_wz_13TeV_nvtx->SetSelected(ccwh3l_wz_13TeV_nvtx);
}
