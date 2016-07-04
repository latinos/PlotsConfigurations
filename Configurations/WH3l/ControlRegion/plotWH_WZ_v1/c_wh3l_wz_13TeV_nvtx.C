void c_wh3l_wz_13TeV_nvtx()
{
//=========Macro generated from canvas: ccwh3l_wz_13TeV_nvtx/cc
//=========  (Sun Jul  3 22:54:18 2016) by ROOT version6.02/13
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
   
   TH1F *hframe21 = new TH1F("hframe21","",1000,0,40);
   hframe21->SetMinimum(0);
   hframe21->SetMaximum(83.22876);
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
   
   THStack *thsBackground_grouped_wh3l_wz_13TeV_nvtx = new THStack();
   thsBackground_grouped_wh3l_wz_13TeV_nvtx->SetName("thsBackground_grouped_wh3l_wz_13TeV_nvtx");
   thsBackground_grouped_wh3l_wz_13TeV_nvtx->SetTitle("thsBackground_grouped_wh3l_wz_13TeV_nvtx");
   
   TH1F *thsBackground_grouped_wh3l_wz_13TeV_nvtx_stack_5 = new TH1F("thsBackground_grouped_wh3l_wz_13TeV_nvtx_stack_5","thsBackground_grouped_wh3l_wz_13TeV_nvtx",40,0,40);
   thsBackground_grouped_wh3l_wz_13TeV_nvtx_stack_5->SetMinimum(-0.9720683);
   thsBackground_grouped_wh3l_wz_13TeV_nvtx_stack_5->SetMaximum(16.99277);
   thsBackground_grouped_wh3l_wz_13TeV_nvtx_stack_5->SetDirectory(0);
   thsBackground_grouped_wh3l_wz_13TeV_nvtx_stack_5->SetStats(0);
   thsBackground_grouped_wh3l_wz_13TeV_nvtx_stack_5->SetLineStyle(0);
   thsBackground_grouped_wh3l_wz_13TeV_nvtx_stack_5->SetMarkerStyle(20);
   thsBackground_grouped_wh3l_wz_13TeV_nvtx_stack_5->GetXaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_wz_13TeV_nvtx_stack_5->GetXaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_wz_13TeV_nvtx_stack_5->GetXaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_wz_13TeV_nvtx_stack_5->GetXaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_wz_13TeV_nvtx_stack_5->GetXaxis()->SetTitleOffset(0.9);
   thsBackground_grouped_wh3l_wz_13TeV_nvtx_stack_5->GetXaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_wz_13TeV_nvtx_stack_5->GetYaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_wz_13TeV_nvtx_stack_5->GetYaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_wz_13TeV_nvtx_stack_5->GetYaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_wz_13TeV_nvtx_stack_5->GetYaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_wz_13TeV_nvtx_stack_5->GetYaxis()->SetTitleOffset(1.25);
   thsBackground_grouped_wh3l_wz_13TeV_nvtx_stack_5->GetYaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_wz_13TeV_nvtx_stack_5->GetZaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_wz_13TeV_nvtx_stack_5->GetZaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_wz_13TeV_nvtx_stack_5->GetZaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_wz_13TeV_nvtx_stack_5->GetZaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_wz_13TeV_nvtx_stack_5->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_wz_13TeV_nvtx->SetHistogram(thsBackground_grouped_wh3l_wz_13TeV_nvtx_stack_5);
   
   
   TH1D *new_histo_group_Fake_wh3l_wz_13TeV_nvtx22 = new TH1D("new_histo_group_Fake_wh3l_wz_13TeV_nvtx22","histo_Fake",40,0,40);
   new_histo_group_Fake_wh3l_wz_13TeV_nvtx22->SetBinContent(5,-0.6096837);
   new_histo_group_Fake_wh3l_wz_13TeV_nvtx22->SetBinContent(6,-0.4244189);
   new_histo_group_Fake_wh3l_wz_13TeV_nvtx22->SetBinContent(7,0.5587018);
   new_histo_group_Fake_wh3l_wz_13TeV_nvtx22->SetBinContent(8,3.508278);
   new_histo_group_Fake_wh3l_wz_13TeV_nvtx22->SetBinContent(9,0.06043914);
   new_histo_group_Fake_wh3l_wz_13TeV_nvtx22->SetBinContent(10,0.6224386);
   new_histo_group_Fake_wh3l_wz_13TeV_nvtx22->SetBinContent(11,2.043073);
   new_histo_group_Fake_wh3l_wz_13TeV_nvtx22->SetBinContent(12,3.211894);
   new_histo_group_Fake_wh3l_wz_13TeV_nvtx22->SetBinContent(13,0.7640539);
   new_histo_group_Fake_wh3l_wz_13TeV_nvtx22->SetBinContent(14,-0.009719265);
   new_histo_group_Fake_wh3l_wz_13TeV_nvtx22->SetBinContent(15,-0.5019884);
   new_histo_group_Fake_wh3l_wz_13TeV_nvtx22->SetBinContent(16,1.143175);
   new_histo_group_Fake_wh3l_wz_13TeV_nvtx22->SetBinContent(17,-0.1404655);
   new_histo_group_Fake_wh3l_wz_13TeV_nvtx22->SetBinContent(18,0.286662);
   new_histo_group_Fake_wh3l_wz_13TeV_nvtx22->SetBinContent(19,0.07836232);
   new_histo_group_Fake_wh3l_wz_13TeV_nvtx22->SetBinContent(20,0.2177684);
   new_histo_group_Fake_wh3l_wz_13TeV_nvtx22->SetBinContent(21,-0.1589375);
   new_histo_group_Fake_wh3l_wz_13TeV_nvtx22->SetBinContent(22,-0.01182792);
   new_histo_group_Fake_wh3l_wz_13TeV_nvtx22->SetBinContent(23,-0.05886551);
   new_histo_group_Fake_wh3l_wz_13TeV_nvtx22->SetBinContent(30,-0.0005641188);
   new_histo_group_Fake_wh3l_wz_13TeV_nvtx22->SetBinError(5,0.2575394);
   new_histo_group_Fake_wh3l_wz_13TeV_nvtx22->SetBinError(6,0.2281865);
   new_histo_group_Fake_wh3l_wz_13TeV_nvtx22->SetBinError(7,0.7082279);
   new_histo_group_Fake_wh3l_wz_13TeV_nvtx22->SetBinError(8,1.539142);
   new_histo_group_Fake_wh3l_wz_13TeV_nvtx22->SetBinError(9,1.032507);
   new_histo_group_Fake_wh3l_wz_13TeV_nvtx22->SetBinError(10,0.8183658);
   new_histo_group_Fake_wh3l_wz_13TeV_nvtx22->SetBinError(11,1.340481);
   new_histo_group_Fake_wh3l_wz_13TeV_nvtx22->SetBinError(12,1.498443);
   new_histo_group_Fake_wh3l_wz_13TeV_nvtx22->SetBinError(13,0.7349613);
   new_histo_group_Fake_wh3l_wz_13TeV_nvtx22->SetBinError(14,0.8084151);
   new_histo_group_Fake_wh3l_wz_13TeV_nvtx22->SetBinError(15,0.3886881);
   new_histo_group_Fake_wh3l_wz_13TeV_nvtx22->SetBinError(16,0.7315439);
   new_histo_group_Fake_wh3l_wz_13TeV_nvtx22->SetBinError(17,0.1549514);
   new_histo_group_Fake_wh3l_wz_13TeV_nvtx22->SetBinError(18,0.5711945);
   new_histo_group_Fake_wh3l_wz_13TeV_nvtx22->SetBinError(19,0.159786);
   new_histo_group_Fake_wh3l_wz_13TeV_nvtx22->SetBinError(20,0.1859127);
   new_histo_group_Fake_wh3l_wz_13TeV_nvtx22->SetBinError(21,0.1080211);
   new_histo_group_Fake_wh3l_wz_13TeV_nvtx22->SetBinError(22,0.01182792);
   new_histo_group_Fake_wh3l_wz_13TeV_nvtx22->SetBinError(23,0.05886551);
   new_histo_group_Fake_wh3l_wz_13TeV_nvtx22->SetBinError(30,0.0005641188);
   new_histo_group_Fake_wh3l_wz_13TeV_nvtx22->SetEntries(336);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_wz_13TeV_nvtx22->SetFillColor(ci);
   new_histo_group_Fake_wh3l_wz_13TeV_nvtx22->SetFillStyle(3001);

   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_wz_13TeV_nvtx22->SetLineColor(ci);
   new_histo_group_Fake_wh3l_wz_13TeV_nvtx22->GetXaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_wz_13TeV_nvtx22->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_wz_13TeV_nvtx22->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_wz_13TeV_nvtx22->GetXaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_wz_13TeV_nvtx22->GetYaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_wz_13TeV_nvtx22->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_wz_13TeV_nvtx22->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_wz_13TeV_nvtx22->GetYaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_wz_13TeV_nvtx22->GetZaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_wz_13TeV_nvtx22->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_wz_13TeV_nvtx22->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_wz_13TeV_nvtx22->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_wz_13TeV_nvtx->Add(new_histo_group_Fake_wh3l_wz_13TeV_nvtx,"");
   
   TH1D *new_histo_group_WW_wh3l_wz_13TeV_nvtx23 = new TH1D("new_histo_group_WW_wh3l_wz_13TeV_nvtx23","histo_WW",40,0,40);
   new_histo_group_WW_wh3l_wz_13TeV_nvtx23->SetBinContent(10,0.01816071);
   new_histo_group_WW_wh3l_wz_13TeV_nvtx23->SetBinContent(11,0.01740127);
   new_histo_group_WW_wh3l_wz_13TeV_nvtx23->SetBinContent(12,0.02551711);
   new_histo_group_WW_wh3l_wz_13TeV_nvtx23->SetBinContent(14,0.01431565);
   new_histo_group_WW_wh3l_wz_13TeV_nvtx23->SetBinError(10,0.01816071);
   new_histo_group_WW_wh3l_wz_13TeV_nvtx23->SetBinError(11,0.01740127);
   new_histo_group_WW_wh3l_wz_13TeV_nvtx23->SetBinError(12,0.01822775);
   new_histo_group_WW_wh3l_wz_13TeV_nvtx23->SetBinError(14,0.01431565);
   new_histo_group_WW_wh3l_wz_13TeV_nvtx23->SetEntries(5);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_wz_13TeV_nvtx23->SetFillColor(ci);
   new_histo_group_WW_wh3l_wz_13TeV_nvtx23->SetFillStyle(3001);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_wz_13TeV_nvtx23->SetLineColor(ci);
   new_histo_group_WW_wh3l_wz_13TeV_nvtx23->GetXaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_wz_13TeV_nvtx23->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_wz_13TeV_nvtx23->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_wz_13TeV_nvtx23->GetXaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_wz_13TeV_nvtx23->GetYaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_wz_13TeV_nvtx23->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_wz_13TeV_nvtx23->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_wz_13TeV_nvtx23->GetYaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_wz_13TeV_nvtx23->GetZaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_wz_13TeV_nvtx23->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_wz_13TeV_nvtx23->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_wz_13TeV_nvtx23->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_wz_13TeV_nvtx->Add(new_histo_group_WW_wh3l_wz_13TeV_nvtx,"");
   
   TH1D *new_histo_group_VVV_wh3l_wz_13TeV_nvtx24 = new TH1D("new_histo_group_VVV_wh3l_wz_13TeV_nvtx24","histo_VVV",40,0,40);
   new_histo_group_VVV_wh3l_wz_13TeV_nvtx24->SetBinContent(2,0.0007728142);
   new_histo_group_VVV_wh3l_wz_13TeV_nvtx24->SetBinContent(4,0.004767447);
   new_histo_group_VVV_wh3l_wz_13TeV_nvtx24->SetBinContent(5,0.02801687);
   new_histo_group_VVV_wh3l_wz_13TeV_nvtx24->SetBinContent(6,0.02988252);
   new_histo_group_VVV_wh3l_wz_13TeV_nvtx24->SetBinContent(7,0.03748979);
   new_histo_group_VVV_wh3l_wz_13TeV_nvtx24->SetBinContent(8,0.05086131);
   new_histo_group_VVV_wh3l_wz_13TeV_nvtx24->SetBinContent(9,0.07045163);
   new_histo_group_VVV_wh3l_wz_13TeV_nvtx24->SetBinContent(10,0.0837819);
   new_histo_group_VVV_wh3l_wz_13TeV_nvtx24->SetBinContent(11,0.0701109);
   new_histo_group_VVV_wh3l_wz_13TeV_nvtx24->SetBinContent(12,0.05641029);
   new_histo_group_VVV_wh3l_wz_13TeV_nvtx24->SetBinContent(13,0.05196557);
   new_histo_group_VVV_wh3l_wz_13TeV_nvtx24->SetBinContent(14,0.02649462);
   new_histo_group_VVV_wh3l_wz_13TeV_nvtx24->SetBinContent(15,0.02620732);
   new_histo_group_VVV_wh3l_wz_13TeV_nvtx24->SetBinContent(16,0.02425681);
   new_histo_group_VVV_wh3l_wz_13TeV_nvtx24->SetBinContent(17,0.006687269);
   new_histo_group_VVV_wh3l_wz_13TeV_nvtx24->SetBinContent(18,0.00571064);
   new_histo_group_VVV_wh3l_wz_13TeV_nvtx24->SetBinContent(19,0.004133759);
   new_histo_group_VVV_wh3l_wz_13TeV_nvtx24->SetBinContent(20,0.0005334915);
   new_histo_group_VVV_wh3l_wz_13TeV_nvtx24->SetBinContent(21,3.412465e-05);
   new_histo_group_VVV_wh3l_wz_13TeV_nvtx24->SetBinContent(22,0.0003082858);
   new_histo_group_VVV_wh3l_wz_13TeV_nvtx24->SetBinContent(23,0.0008856061);
   new_histo_group_VVV_wh3l_wz_13TeV_nvtx24->SetBinContent(26,0.001808207);
   new_histo_group_VVV_wh3l_wz_13TeV_nvtx24->SetBinContent(28,8.334007e-10);
   new_histo_group_VVV_wh3l_wz_13TeV_nvtx24->SetBinError(2,0.0007728142);
   new_histo_group_VVV_wh3l_wz_13TeV_nvtx24->SetBinError(4,0.004875784);
   new_histo_group_VVV_wh3l_wz_13TeV_nvtx24->SetBinError(5,0.007343836);
   new_histo_group_VVV_wh3l_wz_13TeV_nvtx24->SetBinError(6,0.007417703);
   new_histo_group_VVV_wh3l_wz_13TeV_nvtx24->SetBinError(7,0.008724625);
   new_histo_group_VVV_wh3l_wz_13TeV_nvtx24->SetBinError(8,0.01019028);
   new_histo_group_VVV_wh3l_wz_13TeV_nvtx24->SetBinError(9,0.0114189);
   new_histo_group_VVV_wh3l_wz_13TeV_nvtx24->SetBinError(10,0.01271138);
   new_histo_group_VVV_wh3l_wz_13TeV_nvtx24->SetBinError(11,0.0113802);
   new_histo_group_VVV_wh3l_wz_13TeV_nvtx24->SetBinError(12,0.01088902);
   new_histo_group_VVV_wh3l_wz_13TeV_nvtx24->SetBinError(13,0.00923368);
   new_histo_group_VVV_wh3l_wz_13TeV_nvtx24->SetBinError(14,0.007373303);
   new_histo_group_VVV_wh3l_wz_13TeV_nvtx24->SetBinError(15,0.006423082);
   new_histo_group_VVV_wh3l_wz_13TeV_nvtx24->SetBinError(16,0.005872134);
   new_histo_group_VVV_wh3l_wz_13TeV_nvtx24->SetBinError(17,0.003166801);
   new_histo_group_VVV_wh3l_wz_13TeV_nvtx24->SetBinError(18,0.002279063);
   new_histo_group_VVV_wh3l_wz_13TeV_nvtx24->SetBinError(19,0.002145869);
   new_histo_group_VVV_wh3l_wz_13TeV_nvtx24->SetBinError(20,0.00199613);
   new_histo_group_VVV_wh3l_wz_13TeV_nvtx24->SetBinError(21,3.412465e-05);
   new_histo_group_VVV_wh3l_wz_13TeV_nvtx24->SetBinError(22,0.0003082858);
   new_histo_group_VVV_wh3l_wz_13TeV_nvtx24->SetBinError(23,0.0008856031);
   new_histo_group_VVV_wh3l_wz_13TeV_nvtx24->SetBinError(26,0.001808207);
   new_histo_group_VVV_wh3l_wz_13TeV_nvtx24->SetBinError(28,8.334007e-10);
   new_histo_group_VVV_wh3l_wz_13TeV_nvtx24->SetEntries(556);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_wz_13TeV_nvtx24->SetFillColor(ci);
   new_histo_group_VVV_wh3l_wz_13TeV_nvtx24->SetFillStyle(3001);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_wz_13TeV_nvtx24->SetLineColor(ci);
   new_histo_group_VVV_wh3l_wz_13TeV_nvtx24->GetXaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_wz_13TeV_nvtx24->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_wz_13TeV_nvtx24->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_wz_13TeV_nvtx24->GetXaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_wz_13TeV_nvtx24->GetYaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_wz_13TeV_nvtx24->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_wz_13TeV_nvtx24->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_wz_13TeV_nvtx24->GetYaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_wz_13TeV_nvtx24->GetZaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_wz_13TeV_nvtx24->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_wz_13TeV_nvtx24->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_wz_13TeV_nvtx24->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_wz_13TeV_nvtx->Add(new_histo_group_VVV_wh3l_wz_13TeV_nvtx,"");
   
   TH1D *new_histo_group_Vg_wh3l_wz_13TeV_nvtx25 = new TH1D("new_histo_group_Vg_wh3l_wz_13TeV_nvtx25","histo_Vg",40,0,40);
   new_histo_group_Vg_wh3l_wz_13TeV_nvtx25->SetBinContent(7,0.3709568);
   new_histo_group_Vg_wh3l_wz_13TeV_nvtx25->SetBinContent(8,0.4982107);
   new_histo_group_Vg_wh3l_wz_13TeV_nvtx25->SetBinContent(9,0.3519486);
   new_histo_group_Vg_wh3l_wz_13TeV_nvtx25->SetBinContent(10,0.6081493);
   new_histo_group_Vg_wh3l_wz_13TeV_nvtx25->SetBinContent(11,0.4006903);
   new_histo_group_Vg_wh3l_wz_13TeV_nvtx25->SetBinContent(12,0.7899634);
   new_histo_group_Vg_wh3l_wz_13TeV_nvtx25->SetBinContent(13,0.5311622);
   new_histo_group_Vg_wh3l_wz_13TeV_nvtx25->SetBinContent(14,0.2975123);
   new_histo_group_Vg_wh3l_wz_13TeV_nvtx25->SetBinContent(15,0.1633457);
   new_histo_group_Vg_wh3l_wz_13TeV_nvtx25->SetBinContent(16,0.5876691);
   new_histo_group_Vg_wh3l_wz_13TeV_nvtx25->SetBinContent(17,-0.01878599);
   new_histo_group_Vg_wh3l_wz_13TeV_nvtx25->SetBinContent(18,0.3961797);
   new_histo_group_Vg_wh3l_wz_13TeV_nvtx25->SetBinContent(21,0.03677323);
   new_histo_group_Vg_wh3l_wz_13TeV_nvtx25->SetBinContent(22,-0.02603303);
   new_histo_group_Vg_wh3l_wz_13TeV_nvtx25->SetBinContent(25,3.389801e-06);
   new_histo_group_Vg_wh3l_wz_13TeV_nvtx25->SetBinContent(27,9.17363e-06);
   new_histo_group_Vg_wh3l_wz_13TeV_nvtx25->SetBinError(7,0.2147378);
   new_histo_group_Vg_wh3l_wz_13TeV_nvtx25->SetBinError(8,0.2825916);
   new_histo_group_Vg_wh3l_wz_13TeV_nvtx25->SetBinError(9,0.2036167);
   new_histo_group_Vg_wh3l_wz_13TeV_nvtx25->SetBinError(10,0.2551473);
   new_histo_group_Vg_wh3l_wz_13TeV_nvtx25->SetBinError(11,0.2028598);
   new_histo_group_Vg_wh3l_wz_13TeV_nvtx25->SetBinError(12,0.3653162);
   new_histo_group_Vg_wh3l_wz_13TeV_nvtx25->SetBinError(13,0.2379959);
   new_histo_group_Vg_wh3l_wz_13TeV_nvtx25->SetBinError(14,0.1730802);
   new_histo_group_Vg_wh3l_wz_13TeV_nvtx25->SetBinError(15,0.1161148);
   new_histo_group_Vg_wh3l_wz_13TeV_nvtx25->SetBinError(16,0.2390373);
   new_histo_group_Vg_wh3l_wz_13TeV_nvtx25->SetBinError(17,0.1451509);
   new_histo_group_Vg_wh3l_wz_13TeV_nvtx25->SetBinError(18,0.2053596);
   new_histo_group_Vg_wh3l_wz_13TeV_nvtx25->SetBinError(21,0.03677323);
   new_histo_group_Vg_wh3l_wz_13TeV_nvtx25->SetBinError(22,0.02603303);
   new_histo_group_Vg_wh3l_wz_13TeV_nvtx25->SetBinError(25,2.780162e-06);
   new_histo_group_Vg_wh3l_wz_13TeV_nvtx25->SetBinError(27,9.17363e-06);
   new_histo_group_Vg_wh3l_wz_13TeV_nvtx25->SetEntries(63);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_wz_13TeV_nvtx25->SetFillColor(ci);
   new_histo_group_Vg_wh3l_wz_13TeV_nvtx25->SetFillStyle(3001);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_wz_13TeV_nvtx25->SetLineColor(ci);
   new_histo_group_Vg_wh3l_wz_13TeV_nvtx25->GetXaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_wz_13TeV_nvtx25->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_wz_13TeV_nvtx25->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_wz_13TeV_nvtx25->GetXaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_wz_13TeV_nvtx25->GetYaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_wz_13TeV_nvtx25->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_wz_13TeV_nvtx25->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_wz_13TeV_nvtx25->GetYaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_wz_13TeV_nvtx25->GetZaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_wz_13TeV_nvtx25->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_wz_13TeV_nvtx25->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_wz_13TeV_nvtx25->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_wz_13TeV_nvtx->Add(new_histo_group_Vg_wh3l_wz_13TeV_nvtx,"");
   
   TH1D *new_histo_group_ZZ_wh3l_wz_13TeV_nvtx26 = new TH1D("new_histo_group_ZZ_wh3l_wz_13TeV_nvtx26","histo_ZZ",40,0,40);
   new_histo_group_ZZ_wh3l_wz_13TeV_nvtx26->SetBinContent(5,0.2545422);
   new_histo_group_ZZ_wh3l_wz_13TeV_nvtx26->SetBinContent(6,0.3049806);
   new_histo_group_ZZ_wh3l_wz_13TeV_nvtx26->SetBinContent(7,0.660021);
   new_histo_group_ZZ_wh3l_wz_13TeV_nvtx26->SetBinContent(8,0.9020795);
   new_histo_group_ZZ_wh3l_wz_13TeV_nvtx26->SetBinContent(9,0.7829527);
   new_histo_group_ZZ_wh3l_wz_13TeV_nvtx26->SetBinContent(10,1.124052);
   new_histo_group_ZZ_wh3l_wz_13TeV_nvtx26->SetBinContent(11,0.4965108);
   new_histo_group_ZZ_wh3l_wz_13TeV_nvtx26->SetBinContent(12,0.7185491);
   new_histo_group_ZZ_wh3l_wz_13TeV_nvtx26->SetBinContent(13,0.4574985);
   new_histo_group_ZZ_wh3l_wz_13TeV_nvtx26->SetBinContent(14,0.2727762);
   new_histo_group_ZZ_wh3l_wz_13TeV_nvtx26->SetBinContent(15,0.2063382);
   new_histo_group_ZZ_wh3l_wz_13TeV_nvtx26->SetBinContent(16,0.176954);
   new_histo_group_ZZ_wh3l_wz_13TeV_nvtx26->SetBinContent(17,0.1411304);
   new_histo_group_ZZ_wh3l_wz_13TeV_nvtx26->SetBinContent(18,0.1162699);
   new_histo_group_ZZ_wh3l_wz_13TeV_nvtx26->SetBinContent(19,0.08611106);
   new_histo_group_ZZ_wh3l_wz_13TeV_nvtx26->SetBinContent(20,0.06756422);
   new_histo_group_ZZ_wh3l_wz_13TeV_nvtx26->SetBinContent(21,6.443625e-08);
   new_histo_group_ZZ_wh3l_wz_13TeV_nvtx26->SetBinContent(24,0.02757244);
   new_histo_group_ZZ_wh3l_wz_13TeV_nvtx26->SetBinContent(27,0.002374282);
   new_histo_group_ZZ_wh3l_wz_13TeV_nvtx26->SetBinContent(28,0.004849092);
   new_histo_group_ZZ_wh3l_wz_13TeV_nvtx26->SetBinError(5,0.1150057);
   new_histo_group_ZZ_wh3l_wz_13TeV_nvtx26->SetBinError(6,0.1158023);
   new_histo_group_ZZ_wh3l_wz_13TeV_nvtx26->SetBinError(7,0.1721006);
   new_histo_group_ZZ_wh3l_wz_13TeV_nvtx26->SetBinError(8,0.2024966);
   new_histo_group_ZZ_wh3l_wz_13TeV_nvtx26->SetBinError(9,0.1938229);
   new_histo_group_ZZ_wh3l_wz_13TeV_nvtx26->SetBinError(10,0.2224384);
   new_histo_group_ZZ_wh3l_wz_13TeV_nvtx26->SetBinError(11,0.143248);
   new_histo_group_ZZ_wh3l_wz_13TeV_nvtx26->SetBinError(12,0.1660663);
   new_histo_group_ZZ_wh3l_wz_13TeV_nvtx26->SetBinError(13,0.1258835);
   new_histo_group_ZZ_wh3l_wz_13TeV_nvtx26->SetBinError(14,0.1043174);
   new_histo_group_ZZ_wh3l_wz_13TeV_nvtx26->SetBinError(15,0.08471772);
   new_histo_group_ZZ_wh3l_wz_13TeV_nvtx26->SetBinError(16,0.07644714);
   new_histo_group_ZZ_wh3l_wz_13TeV_nvtx26->SetBinError(17,0.06617364);
   new_histo_group_ZZ_wh3l_wz_13TeV_nvtx26->SetBinError(18,0.06303628);
   new_histo_group_ZZ_wh3l_wz_13TeV_nvtx26->SetBinError(19,0.04967669);
   new_histo_group_ZZ_wh3l_wz_13TeV_nvtx26->SetBinError(20,0.0487984);
   new_histo_group_ZZ_wh3l_wz_13TeV_nvtx26->SetBinError(21,6.443625e-08);
   new_histo_group_ZZ_wh3l_wz_13TeV_nvtx26->SetBinError(24,0.02757244);
   new_histo_group_ZZ_wh3l_wz_13TeV_nvtx26->SetBinError(27,0.002374282);
   new_histo_group_ZZ_wh3l_wz_13TeV_nvtx26->SetBinError(28,0.004849092);
   new_histo_group_ZZ_wh3l_wz_13TeV_nvtx26->SetEntries(182);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_wz_13TeV_nvtx26->SetFillColor(ci);
   new_histo_group_ZZ_wh3l_wz_13TeV_nvtx26->SetFillStyle(3001);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_wz_13TeV_nvtx26->SetLineColor(ci);
   new_histo_group_ZZ_wh3l_wz_13TeV_nvtx26->GetXaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_wz_13TeV_nvtx26->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_wz_13TeV_nvtx26->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_wz_13TeV_nvtx26->GetXaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_wz_13TeV_nvtx26->GetYaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_wz_13TeV_nvtx26->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_wz_13TeV_nvtx26->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_wz_13TeV_nvtx26->GetYaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_wz_13TeV_nvtx26->GetZaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_wz_13TeV_nvtx26->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_wz_13TeV_nvtx26->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_wz_13TeV_nvtx26->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_wz_13TeV_nvtx->Add(new_histo_group_ZZ_wh3l_wz_13TeV_nvtx,"");
   
   TH1D *new_histo_group_WZ_wh3l_wz_13TeV_nvtx27 = new TH1D("new_histo_group_WZ_wh3l_wz_13TeV_nvtx27","histo_WZ",40,0,40);
   new_histo_group_WZ_wh3l_wz_13TeV_nvtx27->SetBinContent(2,0.04935735);
   new_histo_group_WZ_wh3l_wz_13TeV_nvtx27->SetBinContent(3,0.3831142);
   new_histo_group_WZ_wh3l_wz_13TeV_nvtx27->SetBinContent(4,1.347992);
   new_histo_group_WZ_wh3l_wz_13TeV_nvtx27->SetBinContent(5,2.878743);
   new_histo_group_WZ_wh3l_wz_13TeV_nvtx27->SetBinContent(6,5.513447);
   new_histo_group_WZ_wh3l_wz_13TeV_nvtx27->SetBinContent(7,8.435831);
   new_histo_group_WZ_wh3l_wz_13TeV_nvtx27->SetBinContent(8,10.97283);
   new_histo_group_WZ_wh3l_wz_13TeV_nvtx27->SetBinContent(9,12.32778);
   new_histo_group_WZ_wh3l_wz_13TeV_nvtx27->SetBinContent(10,13.35224);
   new_histo_group_WZ_wh3l_wz_13TeV_nvtx27->SetBinContent(11,12.72758);
   new_histo_group_WZ_wh3l_wz_13TeV_nvtx27->SetBinContent(12,11.28856);
   new_histo_group_WZ_wh3l_wz_13TeV_nvtx27->SetBinContent(13,9.079776);
   new_histo_group_WZ_wh3l_wz_13TeV_nvtx27->SetBinContent(14,6.881847);
   new_histo_group_WZ_wh3l_wz_13TeV_nvtx27->SetBinContent(15,4.604353);
   new_histo_group_WZ_wh3l_wz_13TeV_nvtx27->SetBinContent(16,3.406381);
   new_histo_group_WZ_wh3l_wz_13TeV_nvtx27->SetBinContent(17,2.096528);
   new_histo_group_WZ_wh3l_wz_13TeV_nvtx27->SetBinContent(18,1.470949);
   new_histo_group_WZ_wh3l_wz_13TeV_nvtx27->SetBinContent(19,0.8548838);
   new_histo_group_WZ_wh3l_wz_13TeV_nvtx27->SetBinContent(20,0.4250012);
   new_histo_group_WZ_wh3l_wz_13TeV_nvtx27->SetBinContent(21,0.2710986);
   new_histo_group_WZ_wh3l_wz_13TeV_nvtx27->SetBinContent(22,0.1335616);
   new_histo_group_WZ_wh3l_wz_13TeV_nvtx27->SetBinContent(23,0.04214756);
   new_histo_group_WZ_wh3l_wz_13TeV_nvtx27->SetBinContent(24,0.0233657);
   new_histo_group_WZ_wh3l_wz_13TeV_nvtx27->SetBinContent(25,0.01855784);
   new_histo_group_WZ_wh3l_wz_13TeV_nvtx27->SetBinContent(26,0.009176801);
   new_histo_group_WZ_wh3l_wz_13TeV_nvtx27->SetBinContent(27,0.003693751);
   new_histo_group_WZ_wh3l_wz_13TeV_nvtx27->SetBinContent(28,0.002151581);
   new_histo_group_WZ_wh3l_wz_13TeV_nvtx27->SetBinContent(29,0.001611183);
   new_histo_group_WZ_wh3l_wz_13TeV_nvtx27->SetBinContent(30,0.0006865517);
   new_histo_group_WZ_wh3l_wz_13TeV_nvtx27->SetBinContent(31,1.837325e-06);
   new_histo_group_WZ_wh3l_wz_13TeV_nvtx27->SetBinContent(32,6.893778e-06);
   new_histo_group_WZ_wh3l_wz_13TeV_nvtx27->SetBinContent(38,1.404431e-13);
   new_histo_group_WZ_wh3l_wz_13TeV_nvtx27->SetBinError(2,0.0178807);
   new_histo_group_WZ_wh3l_wz_13TeV_nvtx27->SetBinError(3,0.04964706);
   new_histo_group_WZ_wh3l_wz_13TeV_nvtx27->SetBinError(4,0.09288218);
   new_histo_group_WZ_wh3l_wz_13TeV_nvtx27->SetBinError(5,0.1343666);
   new_histo_group_WZ_wh3l_wz_13TeV_nvtx27->SetBinError(6,0.1835683);
   new_histo_group_WZ_wh3l_wz_13TeV_nvtx27->SetBinError(7,0.2247921);
   new_histo_group_WZ_wh3l_wz_13TeV_nvtx27->SetBinError(8,0.2525888);
   new_histo_group_WZ_wh3l_wz_13TeV_nvtx27->SetBinError(9,0.2641735);
   new_histo_group_WZ_wh3l_wz_13TeV_nvtx27->SetBinError(10,0.2720723);
   new_histo_group_WZ_wh3l_wz_13TeV_nvtx27->SetBinError(11,0.2628442);
   new_histo_group_WZ_wh3l_wz_13TeV_nvtx27->SetBinError(12,0.2437691);
   new_histo_group_WZ_wh3l_wz_13TeV_nvtx27->SetBinError(13,0.2150114);
   new_histo_group_WZ_wh3l_wz_13TeV_nvtx27->SetBinError(14,0.1853547);
   new_histo_group_WZ_wh3l_wz_13TeV_nvtx27->SetBinError(15,0.1488076);
   new_histo_group_WZ_wh3l_wz_13TeV_nvtx27->SetBinError(16,0.1251332);
   new_histo_group_WZ_wh3l_wz_13TeV_nvtx27->SetBinError(17,0.09700779);
   new_histo_group_WZ_wh3l_wz_13TeV_nvtx27->SetBinError(18,0.07801908);
   new_histo_group_WZ_wh3l_wz_13TeV_nvtx27->SetBinError(19,0.05907851);
   new_histo_group_WZ_wh3l_wz_13TeV_nvtx27->SetBinError(20,0.03876826);
   new_histo_group_WZ_wh3l_wz_13TeV_nvtx27->SetBinError(21,0.03122981);
   new_histo_group_WZ_wh3l_wz_13TeV_nvtx27->SetBinError(22,0.0211);
   new_histo_group_WZ_wh3l_wz_13TeV_nvtx27->SetBinError(23,0.01026929);
   new_histo_group_WZ_wh3l_wz_13TeV_nvtx27->SetBinError(24,0.007108383);
   new_histo_group_WZ_wh3l_wz_13TeV_nvtx27->SetBinError(25,0.006927361);
   new_histo_group_WZ_wh3l_wz_13TeV_nvtx27->SetBinError(26,0.005519943);
   new_histo_group_WZ_wh3l_wz_13TeV_nvtx27->SetBinError(27,0.002049928);
   new_histo_group_WZ_wh3l_wz_13TeV_nvtx27->SetBinError(28,0.001523363);
   new_histo_group_WZ_wh3l_wz_13TeV_nvtx27->SetBinError(29,0.001082697);
   new_histo_group_WZ_wh3l_wz_13TeV_nvtx27->SetBinError(30,0.0006864176);
   new_histo_group_WZ_wh3l_wz_13TeV_nvtx27->SetBinError(31,1.837325e-06);
   new_histo_group_WZ_wh3l_wz_13TeV_nvtx27->SetBinError(32,6.893778e-06);
   new_histo_group_WZ_wh3l_wz_13TeV_nvtx27->SetBinError(38,1.404431e-13);
   new_histo_group_WZ_wh3l_wz_13TeV_nvtx27->SetEntries(22144);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_wz_13TeV_nvtx27->SetFillColor(ci);
   new_histo_group_WZ_wh3l_wz_13TeV_nvtx27->SetFillStyle(3001);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_wz_13TeV_nvtx27->SetLineColor(ci);
   new_histo_group_WZ_wh3l_wz_13TeV_nvtx27->GetXaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_wz_13TeV_nvtx27->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_wz_13TeV_nvtx27->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_wz_13TeV_nvtx27->GetXaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_wz_13TeV_nvtx27->GetYaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_wz_13TeV_nvtx27->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_wz_13TeV_nvtx27->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_wz_13TeV_nvtx27->GetYaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_wz_13TeV_nvtx27->GetZaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_wz_13TeV_nvtx27->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_wz_13TeV_nvtx27->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_wz_13TeV_nvtx27->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_wz_13TeV_nvtx->Add(new_histo_group_WZ_wh3l_wz_13TeV_nvtx,"");
   
   TH1D *new_histo_group_Higgs_wh3l_wz_13TeV_nvtx28 = new TH1D("new_histo_group_Higgs_wh3l_wz_13TeV_nvtx28","histo_H_htt",40,0,40);
   new_histo_group_Higgs_wh3l_wz_13TeV_nvtx28->SetBinContent(2,0.001726781);
   new_histo_group_Higgs_wh3l_wz_13TeV_nvtx28->SetBinContent(3,0.002412936);
   new_histo_group_Higgs_wh3l_wz_13TeV_nvtx28->SetBinContent(4,0.008957373);
   new_histo_group_Higgs_wh3l_wz_13TeV_nvtx28->SetBinContent(5,0.02077761);
   new_histo_group_Higgs_wh3l_wz_13TeV_nvtx28->SetBinContent(6,0.04078466);
   new_histo_group_Higgs_wh3l_wz_13TeV_nvtx28->SetBinContent(7,0.07821075);
   new_histo_group_Higgs_wh3l_wz_13TeV_nvtx28->SetBinContent(8,0.1034088);
   new_histo_group_Higgs_wh3l_wz_13TeV_nvtx28->SetBinContent(9,0.1066069);
   new_histo_group_Higgs_wh3l_wz_13TeV_nvtx28->SetBinContent(10,0.1162509);
   new_histo_group_Higgs_wh3l_wz_13TeV_nvtx28->SetBinContent(11,0.09218059);
   new_histo_group_Higgs_wh3l_wz_13TeV_nvtx28->SetBinContent(12,0.09270008);
   new_histo_group_Higgs_wh3l_wz_13TeV_nvtx28->SetBinContent(13,0.06879073);
   new_histo_group_Higgs_wh3l_wz_13TeV_nvtx28->SetBinContent(14,0.05209491);
   new_histo_group_Higgs_wh3l_wz_13TeV_nvtx28->SetBinContent(15,0.03241949);
   new_histo_group_Higgs_wh3l_wz_13TeV_nvtx28->SetBinContent(16,0.03500925);
   new_histo_group_Higgs_wh3l_wz_13TeV_nvtx28->SetBinContent(17,0.02210258);
   new_histo_group_Higgs_wh3l_wz_13TeV_nvtx28->SetBinContent(18,0.006755418);
   new_histo_group_Higgs_wh3l_wz_13TeV_nvtx28->SetBinContent(19,0.004871022);
   new_histo_group_Higgs_wh3l_wz_13TeV_nvtx28->SetBinContent(20,0.005162702);
   new_histo_group_Higgs_wh3l_wz_13TeV_nvtx28->SetBinContent(21,0.0003887004);
   new_histo_group_Higgs_wh3l_wz_13TeV_nvtx28->SetBinContent(22,0.001336623);
   new_histo_group_Higgs_wh3l_wz_13TeV_nvtx28->SetBinContent(23,0.0005668121);
   new_histo_group_Higgs_wh3l_wz_13TeV_nvtx28->SetBinContent(24,7.929111e-06);
   new_histo_group_Higgs_wh3l_wz_13TeV_nvtx28->SetBinContent(29,3.434946e-07);
   new_histo_group_Higgs_wh3l_wz_13TeV_nvtx28->SetBinContent(33,1.679404e-12);
   new_histo_group_Higgs_wh3l_wz_13TeV_nvtx28->SetBinError(2,0.001726781);
   new_histo_group_Higgs_wh3l_wz_13TeV_nvtx28->SetBinError(3,0.001722512);
   new_histo_group_Higgs_wh3l_wz_13TeV_nvtx28->SetBinError(4,0.003208509);
   new_histo_group_Higgs_wh3l_wz_13TeV_nvtx28->SetBinError(5,0.004736528);
   new_histo_group_Higgs_wh3l_wz_13TeV_nvtx28->SetBinError(6,0.006848244);
   new_histo_group_Higgs_wh3l_wz_13TeV_nvtx28->SetBinError(7,0.0101234);
   new_histo_group_Higgs_wh3l_wz_13TeV_nvtx28->SetBinError(8,0.0114145);
   new_histo_group_Higgs_wh3l_wz_13TeV_nvtx28->SetBinError(9,0.01112929);
   new_histo_group_Higgs_wh3l_wz_13TeV_nvtx28->SetBinError(10,0.01210446);
   new_histo_group_Higgs_wh3l_wz_13TeV_nvtx28->SetBinError(11,0.0105566);
   new_histo_group_Higgs_wh3l_wz_13TeV_nvtx28->SetBinError(12,0.01069126);
   new_histo_group_Higgs_wh3l_wz_13TeV_nvtx28->SetBinError(13,0.008733352);
   new_histo_group_Higgs_wh3l_wz_13TeV_nvtx28->SetBinError(14,0.007346296);
   new_histo_group_Higgs_wh3l_wz_13TeV_nvtx28->SetBinError(15,0.005328123);
   new_histo_group_Higgs_wh3l_wz_13TeV_nvtx28->SetBinError(16,0.005883057);
   new_histo_group_Higgs_wh3l_wz_13TeV_nvtx28->SetBinError(17,0.004609508);
   new_histo_group_Higgs_wh3l_wz_13TeV_nvtx28->SetBinError(18,0.002394831);
   new_histo_group_Higgs_wh3l_wz_13TeV_nvtx28->SetBinError(19,0.001970527);
   new_histo_group_Higgs_wh3l_wz_13TeV_nvtx28->SetBinError(20,0.002120075);
   new_histo_group_Higgs_wh3l_wz_13TeV_nvtx28->SetBinError(21,0.000379971);
   new_histo_group_Higgs_wh3l_wz_13TeV_nvtx28->SetBinError(22,0.00126631);
   new_histo_group_Higgs_wh3l_wz_13TeV_nvtx28->SetBinError(23,0.0004711126);
   new_histo_group_Higgs_wh3l_wz_13TeV_nvtx28->SetBinError(24,7.892091e-06);
   new_histo_group_Higgs_wh3l_wz_13TeV_nvtx28->SetBinError(29,3.434946e-07);
   new_histo_group_Higgs_wh3l_wz_13TeV_nvtx28->SetBinError(33,1.679404e-12);
   new_histo_group_Higgs_wh3l_wz_13TeV_nvtx28->SetEntries(1285);
   new_histo_group_Higgs_wh3l_wz_13TeV_nvtx28->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_wz_13TeV_nvtx28->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_wz_13TeV_nvtx28->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_wz_13TeV_nvtx28->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_wz_13TeV_nvtx28->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_wz_13TeV_nvtx28->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_wz_13TeV_nvtx28->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_wz_13TeV_nvtx28->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_wz_13TeV_nvtx28->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_wz_13TeV_nvtx28->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_wz_13TeV_nvtx28->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_wz_13TeV_nvtx28->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_wz_13TeV_nvtx28->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_wz_13TeV_nvtx28->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_wz_13TeV_nvtx28->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_wz_13TeV_nvtx->Add(new_histo_group_Higgs_wh3l_wz_13TeV_nvtx,"");
   thsBackground_grouped_wh3l_wz_13TeV_nvtx->Draw("hist same");
   
   thsSignal_grouped_wh3l_wz_13TeV_nvtx = new THStack();
   thsSignal_grouped_wh3l_wz_13TeV_nvtx->SetName("thsSignal_grouped_wh3l_wz_13TeV_nvtx");
   thsSignal_grouped_wh3l_wz_13TeV_nvtx->SetTitle("thsSignal_grouped_wh3l_wz_13TeV_nvtx");
   
   TH1F *thsSignal_grouped_wh3l_wz_13TeV_nvtx_stack_6 = new TH1F("thsSignal_grouped_wh3l_wz_13TeV_nvtx_stack_6","thsSignal_grouped_wh3l_wz_13TeV_nvtx",40,0,40);
   thsSignal_grouped_wh3l_wz_13TeV_nvtx_stack_6->SetMinimum(0);
   thsSignal_grouped_wh3l_wz_13TeV_nvtx_stack_6->SetMaximum(0.1347731);
   thsSignal_grouped_wh3l_wz_13TeV_nvtx_stack_6->SetDirectory(0);
   thsSignal_grouped_wh3l_wz_13TeV_nvtx_stack_6->SetStats(0);
   thsSignal_grouped_wh3l_wz_13TeV_nvtx_stack_6->SetLineStyle(0);
   thsSignal_grouped_wh3l_wz_13TeV_nvtx_stack_6->SetMarkerStyle(20);
   thsSignal_grouped_wh3l_wz_13TeV_nvtx_stack_6->GetXaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_wz_13TeV_nvtx_stack_6->GetXaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_wz_13TeV_nvtx_stack_6->GetXaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_wz_13TeV_nvtx_stack_6->GetXaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_wz_13TeV_nvtx_stack_6->GetXaxis()->SetTitleOffset(0.9);
   thsSignal_grouped_wh3l_wz_13TeV_nvtx_stack_6->GetXaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_wz_13TeV_nvtx_stack_6->GetYaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_wz_13TeV_nvtx_stack_6->GetYaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_wz_13TeV_nvtx_stack_6->GetYaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_wz_13TeV_nvtx_stack_6->GetYaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_wz_13TeV_nvtx_stack_6->GetYaxis()->SetTitleOffset(1.25);
   thsSignal_grouped_wh3l_wz_13TeV_nvtx_stack_6->GetYaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_wz_13TeV_nvtx_stack_6->GetZaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_wz_13TeV_nvtx_stack_6->GetZaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_wz_13TeV_nvtx_stack_6->GetZaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_wz_13TeV_nvtx_stack_6->GetZaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_wz_13TeV_nvtx_stack_6->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_wz_13TeV_nvtx->SetHistogram(thsSignal_grouped_wh3l_wz_13TeV_nvtx_stack_6);
   
   
   TH1D *new_histo_group_Higgs_wh3l_wz_13TeV_nvtx29 = new TH1D("new_histo_group_Higgs_wh3l_wz_13TeV_nvtx29","histo_H_htt",40,0,40);
   new_histo_group_Higgs_wh3l_wz_13TeV_nvtx29->SetBinContent(2,0.001726781);
   new_histo_group_Higgs_wh3l_wz_13TeV_nvtx29->SetBinContent(3,0.002412936);
   new_histo_group_Higgs_wh3l_wz_13TeV_nvtx29->SetBinContent(4,0.008957373);
   new_histo_group_Higgs_wh3l_wz_13TeV_nvtx29->SetBinContent(5,0.02077761);
   new_histo_group_Higgs_wh3l_wz_13TeV_nvtx29->SetBinContent(6,0.04078466);
   new_histo_group_Higgs_wh3l_wz_13TeV_nvtx29->SetBinContent(7,0.07821075);
   new_histo_group_Higgs_wh3l_wz_13TeV_nvtx29->SetBinContent(8,0.1034088);
   new_histo_group_Higgs_wh3l_wz_13TeV_nvtx29->SetBinContent(9,0.1066069);
   new_histo_group_Higgs_wh3l_wz_13TeV_nvtx29->SetBinContent(10,0.1162509);
   new_histo_group_Higgs_wh3l_wz_13TeV_nvtx29->SetBinContent(11,0.09218059);
   new_histo_group_Higgs_wh3l_wz_13TeV_nvtx29->SetBinContent(12,0.09270008);
   new_histo_group_Higgs_wh3l_wz_13TeV_nvtx29->SetBinContent(13,0.06879073);
   new_histo_group_Higgs_wh3l_wz_13TeV_nvtx29->SetBinContent(14,0.05209491);
   new_histo_group_Higgs_wh3l_wz_13TeV_nvtx29->SetBinContent(15,0.03241949);
   new_histo_group_Higgs_wh3l_wz_13TeV_nvtx29->SetBinContent(16,0.03500925);
   new_histo_group_Higgs_wh3l_wz_13TeV_nvtx29->SetBinContent(17,0.02210258);
   new_histo_group_Higgs_wh3l_wz_13TeV_nvtx29->SetBinContent(18,0.006755418);
   new_histo_group_Higgs_wh3l_wz_13TeV_nvtx29->SetBinContent(19,0.004871022);
   new_histo_group_Higgs_wh3l_wz_13TeV_nvtx29->SetBinContent(20,0.005162702);
   new_histo_group_Higgs_wh3l_wz_13TeV_nvtx29->SetBinContent(21,0.0003887004);
   new_histo_group_Higgs_wh3l_wz_13TeV_nvtx29->SetBinContent(22,0.001336623);
   new_histo_group_Higgs_wh3l_wz_13TeV_nvtx29->SetBinContent(23,0.0005668121);
   new_histo_group_Higgs_wh3l_wz_13TeV_nvtx29->SetBinContent(24,7.929111e-06);
   new_histo_group_Higgs_wh3l_wz_13TeV_nvtx29->SetBinContent(29,3.434946e-07);
   new_histo_group_Higgs_wh3l_wz_13TeV_nvtx29->SetBinContent(33,1.679404e-12);
   new_histo_group_Higgs_wh3l_wz_13TeV_nvtx29->SetBinError(2,0.001726781);
   new_histo_group_Higgs_wh3l_wz_13TeV_nvtx29->SetBinError(3,0.001722512);
   new_histo_group_Higgs_wh3l_wz_13TeV_nvtx29->SetBinError(4,0.003208509);
   new_histo_group_Higgs_wh3l_wz_13TeV_nvtx29->SetBinError(5,0.004736528);
   new_histo_group_Higgs_wh3l_wz_13TeV_nvtx29->SetBinError(6,0.006848244);
   new_histo_group_Higgs_wh3l_wz_13TeV_nvtx29->SetBinError(7,0.0101234);
   new_histo_group_Higgs_wh3l_wz_13TeV_nvtx29->SetBinError(8,0.0114145);
   new_histo_group_Higgs_wh3l_wz_13TeV_nvtx29->SetBinError(9,0.01112929);
   new_histo_group_Higgs_wh3l_wz_13TeV_nvtx29->SetBinError(10,0.01210446);
   new_histo_group_Higgs_wh3l_wz_13TeV_nvtx29->SetBinError(11,0.0105566);
   new_histo_group_Higgs_wh3l_wz_13TeV_nvtx29->SetBinError(12,0.01069126);
   new_histo_group_Higgs_wh3l_wz_13TeV_nvtx29->SetBinError(13,0.008733352);
   new_histo_group_Higgs_wh3l_wz_13TeV_nvtx29->SetBinError(14,0.007346296);
   new_histo_group_Higgs_wh3l_wz_13TeV_nvtx29->SetBinError(15,0.005328123);
   new_histo_group_Higgs_wh3l_wz_13TeV_nvtx29->SetBinError(16,0.005883057);
   new_histo_group_Higgs_wh3l_wz_13TeV_nvtx29->SetBinError(17,0.004609508);
   new_histo_group_Higgs_wh3l_wz_13TeV_nvtx29->SetBinError(18,0.002394831);
   new_histo_group_Higgs_wh3l_wz_13TeV_nvtx29->SetBinError(19,0.001970527);
   new_histo_group_Higgs_wh3l_wz_13TeV_nvtx29->SetBinError(20,0.002120075);
   new_histo_group_Higgs_wh3l_wz_13TeV_nvtx29->SetBinError(21,0.000379971);
   new_histo_group_Higgs_wh3l_wz_13TeV_nvtx29->SetBinError(22,0.00126631);
   new_histo_group_Higgs_wh3l_wz_13TeV_nvtx29->SetBinError(23,0.0004711126);
   new_histo_group_Higgs_wh3l_wz_13TeV_nvtx29->SetBinError(24,7.892091e-06);
   new_histo_group_Higgs_wh3l_wz_13TeV_nvtx29->SetBinError(29,3.434946e-07);
   new_histo_group_Higgs_wh3l_wz_13TeV_nvtx29->SetBinError(33,1.679404e-12);
   new_histo_group_Higgs_wh3l_wz_13TeV_nvtx29->SetEntries(1285);
   new_histo_group_Higgs_wh3l_wz_13TeV_nvtx29->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_wz_13TeV_nvtx29->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_wz_13TeV_nvtx29->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_wz_13TeV_nvtx29->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_wz_13TeV_nvtx29->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_wz_13TeV_nvtx29->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_wz_13TeV_nvtx29->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_wz_13TeV_nvtx29->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_wz_13TeV_nvtx29->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_wz_13TeV_nvtx29->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_wz_13TeV_nvtx29->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_wz_13TeV_nvtx29->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_wz_13TeV_nvtx29->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_wz_13TeV_nvtx29->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_wz_13TeV_nvtx29->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_wz_13TeV_nvtx->Add(new_histo_group_Higgs_wh3l_wz_13TeV_nvtx,"");
   thsSignal_grouped_wh3l_wz_13TeV_nvtx->Draw("hist same noclear");
   
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
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(40,_fx3005,_fy3005,_felx3005,_fehx3005,_fely3005,_fehy3005);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(12);
   grae->SetFillStyle(3004);
   grae->SetLineColor(12);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3005 = new TH1F("Graph_Graph3005","",100,0,44);
   Graph_Graph3005->SetMinimum(-1.964516);
   Graph_Graph3005->SetMaximum(20.54371);
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
   grae = new TGraphAsymmErrors(40,_fx3006,_fy3006,_felx3006,_fehx3006,_fely3006,_fehy3006);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(1);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3006 = new TH1F("Graph_Graph3006","",100,0,44);
   Graph_Graph3006->SetMinimum(0);
   Graph_Graph3006->SetMaximum(37.79003);
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
   
   TH1F *hframe_copy30 = new TH1F("hframe_copy30","",1000,0,40);
   hframe_copy30->SetMinimum(0);
   hframe_copy30->SetMaximum(83.22876);
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
   ccwh3l_wz_13TeV_nvtx->Modified();
   ccwh3l_wz_13TeV_nvtx->cd();
   ccwh3l_wz_13TeV_nvtx->SetSelected(ccwh3l_wz_13TeV_nvtx);
}
