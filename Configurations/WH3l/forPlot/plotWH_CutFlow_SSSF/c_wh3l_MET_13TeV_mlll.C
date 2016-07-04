void c_wh3l_MET_13TeV_mlll()
{
//=========Macro generated from canvas: ccwh3l_MET_13TeV_mlll/cc
//=========  (Sun Jul  3 01:21:58 2016) by ROOT version6.02/13
   TCanvas *ccwh3l_MET_13TeV_mlll = new TCanvas("ccwh3l_MET_13TeV_mlll", "cc",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   ccwh3l_MET_13TeV_mlll->SetHighLightColor(2);
   ccwh3l_MET_13TeV_mlll->Range(76,-0.2061456,101,1.37959);
   ccwh3l_MET_13TeV_mlll->SetFillColor(0);
   ccwh3l_MET_13TeV_mlll->SetBorderMode(0);
   ccwh3l_MET_13TeV_mlll->SetBorderSize(2);
   ccwh3l_MET_13TeV_mlll->SetTickx(1);
   ccwh3l_MET_13TeV_mlll->SetTicky(1);
   ccwh3l_MET_13TeV_mlll->SetLeftMargin(0.16);
   ccwh3l_MET_13TeV_mlll->SetRightMargin(0.04);
   ccwh3l_MET_13TeV_mlll->SetTopMargin(0.05);
   ccwh3l_MET_13TeV_mlll->SetBottomMargin(0.13);
   ccwh3l_MET_13TeV_mlll->SetFrameFillStyle(0);
   ccwh3l_MET_13TeV_mlll->SetFrameBorderMode(0);
   ccwh3l_MET_13TeV_mlll->SetFrameFillStyle(0);
   ccwh3l_MET_13TeV_mlll->SetFrameBorderMode(0);
   
   TH1F *hframe221 = new TH1F("hframe221","",1000,80,100);
   hframe221->SetMinimum(0);
   hframe221->SetMaximum(1.300303);
   hframe221->SetDirectory(0);
   hframe221->SetStats(0);
   hframe221->SetLineStyle(0);
   hframe221->SetMarkerStyle(20);
   hframe221->GetXaxis()->SetTitle("m_{lll} [GeV]");
   hframe221->GetXaxis()->SetNdivisions(506);
   hframe221->GetXaxis()->SetLabelFont(42);
   hframe221->GetXaxis()->SetLabelOffset(0.007);
   hframe221->GetXaxis()->SetLabelSize(0.05);
   hframe221->GetXaxis()->SetTitleSize(0.06);
   hframe221->GetXaxis()->SetTitleOffset(0.9);
   hframe221->GetXaxis()->SetTitleFont(42);
   hframe221->GetYaxis()->SetTitle("Events");
   hframe221->GetYaxis()->SetLabelFont(42);
   hframe221->GetYaxis()->SetLabelOffset(0.007);
   hframe221->GetYaxis()->SetLabelSize(0.05);
   hframe221->GetYaxis()->SetTitleSize(0.06);
   hframe221->GetYaxis()->SetTitleOffset(1.25);
   hframe221->GetYaxis()->SetTitleFont(42);
   hframe221->GetZaxis()->SetLabelFont(42);
   hframe221->GetZaxis()->SetLabelOffset(0.007);
   hframe221->GetZaxis()->SetLabelSize(0.05);
   hframe221->GetZaxis()->SetTitleSize(0.06);
   hframe221->GetZaxis()->SetTitleFont(42);
   hframe221->Draw(" ");
   
   THStack *thsBackground_grouped_wh3l_MET_13TeV_mlll = new THStack();
   thsBackground_grouped_wh3l_MET_13TeV_mlll->SetName("thsBackground_grouped_wh3l_MET_13TeV_mlll");
   thsBackground_grouped_wh3l_MET_13TeV_mlll->SetTitle("thsBackground_grouped_wh3l_MET_13TeV_mlll");
   
   TH1F *thsBackground_grouped_wh3l_MET_13TeV_mlll_stack_45 = new TH1F("thsBackground_grouped_wh3l_MET_13TeV_mlll_stack_45","thsBackground_grouped_wh3l_MET_13TeV_mlll",40,80,100);
   thsBackground_grouped_wh3l_MET_13TeV_mlll_stack_45->SetMinimum(-0.2188743);
   thsBackground_grouped_wh3l_MET_13TeV_mlll_stack_45->SetMaximum(1.115209);
   thsBackground_grouped_wh3l_MET_13TeV_mlll_stack_45->SetDirectory(0);
   thsBackground_grouped_wh3l_MET_13TeV_mlll_stack_45->SetStats(0);
   thsBackground_grouped_wh3l_MET_13TeV_mlll_stack_45->SetLineStyle(0);
   thsBackground_grouped_wh3l_MET_13TeV_mlll_stack_45->SetMarkerStyle(20);
   thsBackground_grouped_wh3l_MET_13TeV_mlll_stack_45->GetXaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_MET_13TeV_mlll_stack_45->GetXaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_MET_13TeV_mlll_stack_45->GetXaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_MET_13TeV_mlll_stack_45->GetXaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_MET_13TeV_mlll_stack_45->GetXaxis()->SetTitleOffset(0.9);
   thsBackground_grouped_wh3l_MET_13TeV_mlll_stack_45->GetXaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_13TeV_mlll_stack_45->GetYaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_MET_13TeV_mlll_stack_45->GetYaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_MET_13TeV_mlll_stack_45->GetYaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_MET_13TeV_mlll_stack_45->GetYaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_MET_13TeV_mlll_stack_45->GetYaxis()->SetTitleOffset(1.25);
   thsBackground_grouped_wh3l_MET_13TeV_mlll_stack_45->GetYaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_13TeV_mlll_stack_45->GetZaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_MET_13TeV_mlll_stack_45->GetZaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_MET_13TeV_mlll_stack_45->GetZaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_MET_13TeV_mlll_stack_45->GetZaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_MET_13TeV_mlll_stack_45->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_13TeV_mlll->SetHistogram(thsBackground_grouped_wh3l_MET_13TeV_mlll_stack_45);
   
   
   TH1D *new_histo_group_Fake_wh3l_MET_13TeV_mlll222 = new TH1D("new_histo_group_Fake_wh3l_MET_13TeV_mlll222","histo_Fake",40,80,100);
   new_histo_group_Fake_wh3l_MET_13TeV_mlll222->SetBinContent(0,0.9658812);
   new_histo_group_Fake_wh3l_MET_13TeV_mlll222->SetBinContent(2,0.07666666);
   new_histo_group_Fake_wh3l_MET_13TeV_mlll222->SetBinContent(8,0.514986);
   new_histo_group_Fake_wh3l_MET_13TeV_mlll222->SetBinContent(9,0.0875363);
   new_histo_group_Fake_wh3l_MET_13TeV_mlll222->SetBinContent(13,0.5095075);
   new_histo_group_Fake_wh3l_MET_13TeV_mlll222->SetBinContent(21,-0.1094371);
   new_histo_group_Fake_wh3l_MET_13TeV_mlll222->SetBinContent(22,0.4062305);
   new_histo_group_Fake_wh3l_MET_13TeV_mlll222->SetBinContent(25,0.4340901);
   new_histo_group_Fake_wh3l_MET_13TeV_mlll222->SetBinContent(26,0.07041435);
   new_histo_group_Fake_wh3l_MET_13TeV_mlll222->SetBinContent(31,-0.006812496);
   new_histo_group_Fake_wh3l_MET_13TeV_mlll222->SetBinContent(37,-5.750344e-05);
   new_histo_group_Fake_wh3l_MET_13TeV_mlll222->SetBinContent(39,0.442458);
   new_histo_group_Fake_wh3l_MET_13TeV_mlll222->SetBinContent(41,15.78112);
   new_histo_group_Fake_wh3l_MET_13TeV_mlll222->SetBinError(0,1.062614);
   new_histo_group_Fake_wh3l_MET_13TeV_mlll222->SetBinError(2,0.1094957);
   new_histo_group_Fake_wh3l_MET_13TeV_mlll222->SetBinError(8,0.514986);
   new_histo_group_Fake_wh3l_MET_13TeV_mlll222->SetBinError(9,0.0875363);
   new_histo_group_Fake_wh3l_MET_13TeV_mlll222->SetBinError(13,0.5525967);
   new_histo_group_Fake_wh3l_MET_13TeV_mlll222->SetBinError(21,0.1094371);
   new_histo_group_Fake_wh3l_MET_13TeV_mlll222->SetBinError(22,0.4062305);
   new_histo_group_Fake_wh3l_MET_13TeV_mlll222->SetBinError(25,0.4340901);
   new_histo_group_Fake_wh3l_MET_13TeV_mlll222->SetBinError(26,0.07041435);
   new_histo_group_Fake_wh3l_MET_13TeV_mlll222->SetBinError(31,0.006812496);
   new_histo_group_Fake_wh3l_MET_13TeV_mlll222->SetBinError(37,5.750344e-05);
   new_histo_group_Fake_wh3l_MET_13TeV_mlll222->SetBinError(39,0.3523526);
   new_histo_group_Fake_wh3l_MET_13TeV_mlll222->SetBinError(41,2.584488);
   new_histo_group_Fake_wh3l_MET_13TeV_mlll222->SetEntries(161);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_MET_13TeV_mlll222->SetFillColor(ci);
   new_histo_group_Fake_wh3l_MET_13TeV_mlll222->SetFillStyle(3001);

   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_MET_13TeV_mlll222->SetLineColor(ci);
   new_histo_group_Fake_wh3l_MET_13TeV_mlll222->GetXaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_MET_13TeV_mlll222->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_MET_13TeV_mlll222->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_MET_13TeV_mlll222->GetXaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_MET_13TeV_mlll222->GetYaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_MET_13TeV_mlll222->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_MET_13TeV_mlll222->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_MET_13TeV_mlll222->GetYaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_MET_13TeV_mlll222->GetZaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_MET_13TeV_mlll222->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_MET_13TeV_mlll222->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_MET_13TeV_mlll222->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_13TeV_mlll->Add(new_histo_group_Fake_wh3l_MET_13TeV_mlll,"");
   
   TH1D *new_histo_group_WW_wh3l_MET_13TeV_mlll223 = new TH1D("new_histo_group_WW_wh3l_MET_13TeV_mlll223","histo_WW",40,80,100);
   new_histo_group_WW_wh3l_MET_13TeV_mlll223->SetBinContent(0,0.02057248);
   new_histo_group_WW_wh3l_MET_13TeV_mlll223->SetBinContent(37,0.01528641);
   new_histo_group_WW_wh3l_MET_13TeV_mlll223->SetBinContent(41,0.07522048);
   new_histo_group_WW_wh3l_MET_13TeV_mlll223->SetBinError(0,0.01672647);
   new_histo_group_WW_wh3l_MET_13TeV_mlll223->SetBinError(37,0.01528641);
   new_histo_group_WW_wh3l_MET_13TeV_mlll223->SetBinError(41,0.03405994);
   new_histo_group_WW_wh3l_MET_13TeV_mlll223->SetEntries(8);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_MET_13TeV_mlll223->SetFillColor(ci);
   new_histo_group_WW_wh3l_MET_13TeV_mlll223->SetFillStyle(3001);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_MET_13TeV_mlll223->SetLineColor(ci);
   new_histo_group_WW_wh3l_MET_13TeV_mlll223->GetXaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_MET_13TeV_mlll223->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_MET_13TeV_mlll223->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_MET_13TeV_mlll223->GetXaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_MET_13TeV_mlll223->GetYaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_MET_13TeV_mlll223->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_MET_13TeV_mlll223->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_MET_13TeV_mlll223->GetYaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_MET_13TeV_mlll223->GetZaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_MET_13TeV_mlll223->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_MET_13TeV_mlll223->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_MET_13TeV_mlll223->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_13TeV_mlll->Add(new_histo_group_WW_wh3l_MET_13TeV_mlll,"");
   
   TH1D *new_histo_group_VVV_wh3l_MET_13TeV_mlll224 = new TH1D("new_histo_group_VVV_wh3l_MET_13TeV_mlll224","histo_VVV",40,80,100);
   new_histo_group_VVV_wh3l_MET_13TeV_mlll224->SetBinContent(0,0.006172669);
   new_histo_group_VVV_wh3l_MET_13TeV_mlll224->SetBinContent(2,0.000833863);
   new_histo_group_VVV_wh3l_MET_13TeV_mlll224->SetBinContent(3,0.002110594);
   new_histo_group_VVV_wh3l_MET_13TeV_mlll224->SetBinContent(8,0.004232408);
   new_histo_group_VVV_wh3l_MET_13TeV_mlll224->SetBinContent(10,0.002648953);
   new_histo_group_VVV_wh3l_MET_13TeV_mlll224->SetBinContent(12,0.003162893);
   new_histo_group_VVV_wh3l_MET_13TeV_mlll224->SetBinContent(19,0.001552237);
   new_histo_group_VVV_wh3l_MET_13TeV_mlll224->SetBinContent(22,-0.002623867);
   new_histo_group_VVV_wh3l_MET_13TeV_mlll224->SetBinContent(31,0.001994133);
   new_histo_group_VVV_wh3l_MET_13TeV_mlll224->SetBinContent(40,0.0006144888);
   new_histo_group_VVV_wh3l_MET_13TeV_mlll224->SetBinContent(41,0.2928646);
   new_histo_group_VVV_wh3l_MET_13TeV_mlll224->SetBinError(0,0.003612399);
   new_histo_group_VVV_wh3l_MET_13TeV_mlll224->SetBinError(2,0.000833863);
   new_histo_group_VVV_wh3l_MET_13TeV_mlll224->SetBinError(3,0.002110594);
   new_histo_group_VVV_wh3l_MET_13TeV_mlll224->SetBinError(8,0.003081126);
   new_histo_group_VVV_wh3l_MET_13TeV_mlll224->SetBinError(10,0.002028894);
   new_histo_group_VVV_wh3l_MET_13TeV_mlll224->SetBinError(12,0.003162893);
   new_histo_group_VVV_wh3l_MET_13TeV_mlll224->SetBinError(19,0.001552237);
   new_histo_group_VVV_wh3l_MET_13TeV_mlll224->SetBinError(22,0.002623867);
   new_histo_group_VVV_wh3l_MET_13TeV_mlll224->SetBinError(31,0.001994133);
   new_histo_group_VVV_wh3l_MET_13TeV_mlll224->SetBinError(40,0.0006144888);
   new_histo_group_VVV_wh3l_MET_13TeV_mlll224->SetBinError(41,0.02844919);
   new_histo_group_VVV_wh3l_MET_13TeV_mlll224->SetEntries(198);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_MET_13TeV_mlll224->SetFillColor(ci);
   new_histo_group_VVV_wh3l_MET_13TeV_mlll224->SetFillStyle(3001);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_MET_13TeV_mlll224->SetLineColor(ci);
   new_histo_group_VVV_wh3l_MET_13TeV_mlll224->GetXaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_MET_13TeV_mlll224->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_MET_13TeV_mlll224->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_MET_13TeV_mlll224->GetXaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_MET_13TeV_mlll224->GetYaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_MET_13TeV_mlll224->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_MET_13TeV_mlll224->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_MET_13TeV_mlll224->GetYaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_MET_13TeV_mlll224->GetZaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_MET_13TeV_mlll224->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_MET_13TeV_mlll224->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_MET_13TeV_mlll224->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_13TeV_mlll->Add(new_histo_group_VVV_wh3l_MET_13TeV_mlll,"");
   
   TH1D *new_histo_group_Vg_wh3l_MET_13TeV_mlll225 = new TH1D("new_histo_group_Vg_wh3l_MET_13TeV_mlll225","histo_Vg",40,80,100);
   new_histo_group_Vg_wh3l_MET_13TeV_mlll225->SetBinContent(0,0.1112079);
   new_histo_group_Vg_wh3l_MET_13TeV_mlll225->SetBinContent(41,0.06889259);
   new_histo_group_Vg_wh3l_MET_13TeV_mlll225->SetBinError(0,0.1112079);
   new_histo_group_Vg_wh3l_MET_13TeV_mlll225->SetBinError(41,0.1704659);
   new_histo_group_Vg_wh3l_MET_13TeV_mlll225->SetEntries(4);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_MET_13TeV_mlll225->SetFillColor(ci);
   new_histo_group_Vg_wh3l_MET_13TeV_mlll225->SetFillStyle(3001);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_MET_13TeV_mlll225->SetLineColor(ci);
   new_histo_group_Vg_wh3l_MET_13TeV_mlll225->GetXaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_MET_13TeV_mlll225->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_MET_13TeV_mlll225->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_MET_13TeV_mlll225->GetXaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_MET_13TeV_mlll225->GetYaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_MET_13TeV_mlll225->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_MET_13TeV_mlll225->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_MET_13TeV_mlll225->GetYaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_MET_13TeV_mlll225->GetZaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_MET_13TeV_mlll225->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_MET_13TeV_mlll225->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_MET_13TeV_mlll225->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_13TeV_mlll->Add(new_histo_group_Vg_wh3l_MET_13TeV_mlll,"");
   
   TH1D *new_histo_group_ZZ_wh3l_MET_13TeV_mlll226 = new TH1D("new_histo_group_ZZ_wh3l_MET_13TeV_mlll226","histo_ZZ",40,80,100);
   new_histo_group_ZZ_wh3l_MET_13TeV_mlll226->SetBinContent(41,0.1255383);
   new_histo_group_ZZ_wh3l_MET_13TeV_mlll226->SetBinError(41,0.07302862);
   new_histo_group_ZZ_wh3l_MET_13TeV_mlll226->SetEntries(3);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_MET_13TeV_mlll226->SetFillColor(ci);
   new_histo_group_ZZ_wh3l_MET_13TeV_mlll226->SetFillStyle(3001);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_MET_13TeV_mlll226->SetLineColor(ci);
   new_histo_group_ZZ_wh3l_MET_13TeV_mlll226->GetXaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_MET_13TeV_mlll226->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_MET_13TeV_mlll226->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_MET_13TeV_mlll226->GetXaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_MET_13TeV_mlll226->GetYaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_MET_13TeV_mlll226->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_MET_13TeV_mlll226->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_MET_13TeV_mlll226->GetYaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_MET_13TeV_mlll226->GetZaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_MET_13TeV_mlll226->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_MET_13TeV_mlll226->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_MET_13TeV_mlll226->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_13TeV_mlll->Add(new_histo_group_ZZ_wh3l_MET_13TeV_mlll,"");
   
   TH1D *new_histo_group_WZ_wh3l_MET_13TeV_mlll227 = new TH1D("new_histo_group_WZ_wh3l_MET_13TeV_mlll227","histo_WZ",40,80,100);
   new_histo_group_WZ_wh3l_MET_13TeV_mlll227->SetBinContent(0,0.1580712);
   new_histo_group_WZ_wh3l_MET_13TeV_mlll227->SetBinContent(2,0.005962193);
   new_histo_group_WZ_wh3l_MET_13TeV_mlll227->SetBinContent(3,0.00355102);
   new_histo_group_WZ_wh3l_MET_13TeV_mlll227->SetBinContent(7,0.005488627);
   new_histo_group_WZ_wh3l_MET_13TeV_mlll227->SetBinContent(10,0.006201025);
   new_histo_group_WZ_wh3l_MET_13TeV_mlll227->SetBinContent(11,0.00484358);
   new_histo_group_WZ_wh3l_MET_13TeV_mlll227->SetBinContent(12,0.005188271);
   new_histo_group_WZ_wh3l_MET_13TeV_mlll227->SetBinContent(13,0.004009541);
   new_histo_group_WZ_wh3l_MET_13TeV_mlll227->SetBinContent(14,0.005223083);
   new_histo_group_WZ_wh3l_MET_13TeV_mlll227->SetBinContent(15,0.00546934);
   new_histo_group_WZ_wh3l_MET_13TeV_mlll227->SetBinContent(16,0.005599787);
   new_histo_group_WZ_wh3l_MET_13TeV_mlll227->SetBinContent(17,0.001741456);
   new_histo_group_WZ_wh3l_MET_13TeV_mlll227->SetBinContent(18,0.005329017);
   new_histo_group_WZ_wh3l_MET_13TeV_mlll227->SetBinContent(20,0.004637908);
   new_histo_group_WZ_wh3l_MET_13TeV_mlll227->SetBinContent(22,0.003668249);
   new_histo_group_WZ_wh3l_MET_13TeV_mlll227->SetBinContent(24,0.00643712);
   new_histo_group_WZ_wh3l_MET_13TeV_mlll227->SetBinContent(25,0.005943022);
   new_histo_group_WZ_wh3l_MET_13TeV_mlll227->SetBinContent(26,0.005893175);
   new_histo_group_WZ_wh3l_MET_13TeV_mlll227->SetBinContent(28,0.01199452);
   new_histo_group_WZ_wh3l_MET_13TeV_mlll227->SetBinContent(29,0.00594491);
   new_histo_group_WZ_wh3l_MET_13TeV_mlll227->SetBinContent(30,0.002697298);
   new_histo_group_WZ_wh3l_MET_13TeV_mlll227->SetBinContent(31,0.003657803);
   new_histo_group_WZ_wh3l_MET_13TeV_mlll227->SetBinContent(34,0.01107202);
   new_histo_group_WZ_wh3l_MET_13TeV_mlll227->SetBinContent(35,0.005719688);
   new_histo_group_WZ_wh3l_MET_13TeV_mlll227->SetBinContent(36,0.004876467);
   new_histo_group_WZ_wh3l_MET_13TeV_mlll227->SetBinContent(37,0.005630503);
   new_histo_group_WZ_wh3l_MET_13TeV_mlll227->SetBinContent(40,0.004000224);
   new_histo_group_WZ_wh3l_MET_13TeV_mlll227->SetBinContent(41,0.8880215);
   new_histo_group_WZ_wh3l_MET_13TeV_mlll227->SetBinError(0,0.02911112);
   new_histo_group_WZ_wh3l_MET_13TeV_mlll227->SetBinError(2,0.005962193);
   new_histo_group_WZ_wh3l_MET_13TeV_mlll227->SetBinError(3,0.00355102);
   new_histo_group_WZ_wh3l_MET_13TeV_mlll227->SetBinError(7,0.005488627);
   new_histo_group_WZ_wh3l_MET_13TeV_mlll227->SetBinError(10,0.006201025);
   new_histo_group_WZ_wh3l_MET_13TeV_mlll227->SetBinError(11,0.00484358);
   new_histo_group_WZ_wh3l_MET_13TeV_mlll227->SetBinError(12,0.005188271);
   new_histo_group_WZ_wh3l_MET_13TeV_mlll227->SetBinError(13,0.004009541);
   new_histo_group_WZ_wh3l_MET_13TeV_mlll227->SetBinError(14,0.005223083);
   new_histo_group_WZ_wh3l_MET_13TeV_mlll227->SetBinError(15,0.00546934);
   new_histo_group_WZ_wh3l_MET_13TeV_mlll227->SetBinError(16,0.005599787);
   new_histo_group_WZ_wh3l_MET_13TeV_mlll227->SetBinError(17,0.001741456);
   new_histo_group_WZ_wh3l_MET_13TeV_mlll227->SetBinError(18,0.005329017);
   new_histo_group_WZ_wh3l_MET_13TeV_mlll227->SetBinError(20,0.003752464);
   new_histo_group_WZ_wh3l_MET_13TeV_mlll227->SetBinError(22,0.003668249);
   new_histo_group_WZ_wh3l_MET_13TeV_mlll227->SetBinError(24,0.00643712);
   new_histo_group_WZ_wh3l_MET_13TeV_mlll227->SetBinError(25,0.005943022);
   new_histo_group_WZ_wh3l_MET_13TeV_mlll227->SetBinError(26,0.005893175);
   new_histo_group_WZ_wh3l_MET_13TeV_mlll227->SetBinError(28,0.008488671);
   new_histo_group_WZ_wh3l_MET_13TeV_mlll227->SetBinError(29,0.00594491);
   new_histo_group_WZ_wh3l_MET_13TeV_mlll227->SetBinError(30,0.002697298);
   new_histo_group_WZ_wh3l_MET_13TeV_mlll227->SetBinError(31,0.003657803);
   new_histo_group_WZ_wh3l_MET_13TeV_mlll227->SetBinError(34,0.007858435);
   new_histo_group_WZ_wh3l_MET_13TeV_mlll227->SetBinError(35,0.005719688);
   new_histo_group_WZ_wh3l_MET_13TeV_mlll227->SetBinError(36,0.004876467);
   new_histo_group_WZ_wh3l_MET_13TeV_mlll227->SetBinError(37,0.005630503);
   new_histo_group_WZ_wh3l_MET_13TeV_mlll227->SetBinError(40,0.004000224);
   new_histo_group_WZ_wh3l_MET_13TeV_mlll227->SetBinError(41,0.0698293);
   new_histo_group_WZ_wh3l_MET_13TeV_mlll227->SetEntries(244);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_MET_13TeV_mlll227->SetFillColor(ci);
   new_histo_group_WZ_wh3l_MET_13TeV_mlll227->SetFillStyle(3001);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_MET_13TeV_mlll227->SetLineColor(ci);
   new_histo_group_WZ_wh3l_MET_13TeV_mlll227->GetXaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_MET_13TeV_mlll227->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_MET_13TeV_mlll227->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_MET_13TeV_mlll227->GetXaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_MET_13TeV_mlll227->GetYaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_MET_13TeV_mlll227->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_MET_13TeV_mlll227->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_MET_13TeV_mlll227->GetYaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_MET_13TeV_mlll227->GetZaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_MET_13TeV_mlll227->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_MET_13TeV_mlll227->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_MET_13TeV_mlll227->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_13TeV_mlll->Add(new_histo_group_WZ_wh3l_MET_13TeV_mlll,"");
   
   TH1D *new_histo_group_Higgs_wh3l_MET_13TeV_mlll228 = new TH1D("new_histo_group_Higgs_wh3l_MET_13TeV_mlll228","histo_H_htt",40,80,100);
   new_histo_group_Higgs_wh3l_MET_13TeV_mlll228->SetBinContent(0,0.05733323);
   new_histo_group_Higgs_wh3l_MET_13TeV_mlll228->SetBinContent(1,0.001994417);
   new_histo_group_Higgs_wh3l_MET_13TeV_mlll228->SetBinContent(2,0.001781579);
   new_histo_group_Higgs_wh3l_MET_13TeV_mlll228->SetBinContent(4,0.0003056084);
   new_histo_group_Higgs_wh3l_MET_13TeV_mlll228->SetBinContent(5,0.0008342523);
   new_histo_group_Higgs_wh3l_MET_13TeV_mlll228->SetBinContent(6,0.0002773224);
   new_histo_group_Higgs_wh3l_MET_13TeV_mlll228->SetBinContent(7,0.0008905589);
   new_histo_group_Higgs_wh3l_MET_13TeV_mlll228->SetBinContent(8,0.0009028082);
   new_histo_group_Higgs_wh3l_MET_13TeV_mlll228->SetBinContent(9,0.001921524);
   new_histo_group_Higgs_wh3l_MET_13TeV_mlll228->SetBinContent(10,0.002599839);
   new_histo_group_Higgs_wh3l_MET_13TeV_mlll228->SetBinContent(11,0.002438737);
   new_histo_group_Higgs_wh3l_MET_13TeV_mlll228->SetBinContent(12,0.003006798);
   new_histo_group_Higgs_wh3l_MET_13TeV_mlll228->SetBinContent(13,0.0004397943);
   new_histo_group_Higgs_wh3l_MET_13TeV_mlll228->SetBinContent(14,0.001680797);
   new_histo_group_Higgs_wh3l_MET_13TeV_mlll228->SetBinContent(15,0.000358745);
   new_histo_group_Higgs_wh3l_MET_13TeV_mlll228->SetBinContent(16,0.002287643);
   new_histo_group_Higgs_wh3l_MET_13TeV_mlll228->SetBinContent(17,-0.0002858148);
   new_histo_group_Higgs_wh3l_MET_13TeV_mlll228->SetBinContent(18,0.001550597);
   new_histo_group_Higgs_wh3l_MET_13TeV_mlll228->SetBinContent(19,0.0005338714);
   new_histo_group_Higgs_wh3l_MET_13TeV_mlll228->SetBinContent(20,0.0004491749);
   new_histo_group_Higgs_wh3l_MET_13TeV_mlll228->SetBinContent(21,0.002890238);
   new_histo_group_Higgs_wh3l_MET_13TeV_mlll228->SetBinContent(22,0.002330806);
   new_histo_group_Higgs_wh3l_MET_13TeV_mlll228->SetBinContent(24,0.003365031);
   new_histo_group_Higgs_wh3l_MET_13TeV_mlll228->SetBinContent(25,0.0006171226);
   new_histo_group_Higgs_wh3l_MET_13TeV_mlll228->SetBinContent(26,0.001352402);
   new_histo_group_Higgs_wh3l_MET_13TeV_mlll228->SetBinContent(27,0.001798686);
   new_histo_group_Higgs_wh3l_MET_13TeV_mlll228->SetBinContent(28,0.002078047);
   new_histo_group_Higgs_wh3l_MET_13TeV_mlll228->SetBinContent(29,0.001919134);
   new_histo_group_Higgs_wh3l_MET_13TeV_mlll228->SetBinContent(30,0.004344714);
   new_histo_group_Higgs_wh3l_MET_13TeV_mlll228->SetBinContent(31,0.0004266451);
   new_histo_group_Higgs_wh3l_MET_13TeV_mlll228->SetBinContent(32,0.003994755);
   new_histo_group_Higgs_wh3l_MET_13TeV_mlll228->SetBinContent(33,0.001757511);
   new_histo_group_Higgs_wh3l_MET_13TeV_mlll228->SetBinContent(34,0.002969826);
   new_histo_group_Higgs_wh3l_MET_13TeV_mlll228->SetBinContent(35,0.0005998736);
   new_histo_group_Higgs_wh3l_MET_13TeV_mlll228->SetBinContent(36,0.002370745);
   new_histo_group_Higgs_wh3l_MET_13TeV_mlll228->SetBinContent(37,0.0004096988);
   new_histo_group_Higgs_wh3l_MET_13TeV_mlll228->SetBinContent(38,0.001955075);
   new_histo_group_Higgs_wh3l_MET_13TeV_mlll228->SetBinContent(39,0.002140666);
   new_histo_group_Higgs_wh3l_MET_13TeV_mlll228->SetBinContent(40,0.0007319968);
   new_histo_group_Higgs_wh3l_MET_13TeV_mlll228->SetBinContent(41,0.2926962);
   new_histo_group_Higgs_wh3l_MET_13TeV_mlll228->SetBinError(0,0.007960125);
   new_histo_group_Higgs_wh3l_MET_13TeV_mlll228->SetBinError(1,0.001661993);
   new_histo_group_Higgs_wh3l_MET_13TeV_mlll228->SetBinError(2,0.001781579);
   new_histo_group_Higgs_wh3l_MET_13TeV_mlll228->SetBinError(4,0.0001925611);
   new_histo_group_Higgs_wh3l_MET_13TeV_mlll228->SetBinError(5,0.0008342523);
   new_histo_group_Higgs_wh3l_MET_13TeV_mlll228->SetBinError(6,0.0002773224);
   new_histo_group_Higgs_wh3l_MET_13TeV_mlll228->SetBinError(7,0.0004088703);
   new_histo_group_Higgs_wh3l_MET_13TeV_mlll228->SetBinError(8,0.0005363849);
   new_histo_group_Higgs_wh3l_MET_13TeV_mlll228->SetBinError(9,0.001208982);
   new_histo_group_Higgs_wh3l_MET_13TeV_mlll228->SetBinError(10,0.001891928);
   new_histo_group_Higgs_wh3l_MET_13TeV_mlll228->SetBinError(11,0.001901895);
   new_histo_group_Higgs_wh3l_MET_13TeV_mlll228->SetBinError(12,0.002078139);
   new_histo_group_Higgs_wh3l_MET_13TeV_mlll228->SetBinError(13,0.0003198253);
   new_histo_group_Higgs_wh3l_MET_13TeV_mlll228->SetBinError(14,0.001318824);
   new_histo_group_Higgs_wh3l_MET_13TeV_mlll228->SetBinError(15,0.0002601799);
   new_histo_group_Higgs_wh3l_MET_13TeV_mlll228->SetBinError(16,0.001646725);
   new_histo_group_Higgs_wh3l_MET_13TeV_mlll228->SetBinError(17,0.002039967);
   new_histo_group_Higgs_wh3l_MET_13TeV_mlll228->SetBinError(18,0.001082738);
   new_histo_group_Higgs_wh3l_MET_13TeV_mlll228->SetBinError(19,0.0003815617);
   new_histo_group_Higgs_wh3l_MET_13TeV_mlll228->SetBinError(20,0.0003176741);
   new_histo_group_Higgs_wh3l_MET_13TeV_mlll228->SetBinError(21,0.001839966);
   new_histo_group_Higgs_wh3l_MET_13TeV_mlll228->SetBinError(22,0.001212708);
   new_histo_group_Higgs_wh3l_MET_13TeV_mlll228->SetBinError(24,0.001973556);
   new_histo_group_Higgs_wh3l_MET_13TeV_mlll228->SetBinError(25,0.0003911344);
   new_histo_group_Higgs_wh3l_MET_13TeV_mlll228->SetBinError(26,0.001352402);
   new_histo_group_Higgs_wh3l_MET_13TeV_mlll228->SetBinError(27,0.001405093);
   new_histo_group_Higgs_wh3l_MET_13TeV_mlll228->SetBinError(28,0.00116594);
   new_histo_group_Higgs_wh3l_MET_13TeV_mlll228->SetBinError(29,0.001364932);
   new_histo_group_Higgs_wh3l_MET_13TeV_mlll228->SetBinError(30,0.002359408);
   new_histo_group_Higgs_wh3l_MET_13TeV_mlll228->SetBinError(31,0.0003867884);
   new_histo_group_Higgs_wh3l_MET_13TeV_mlll228->SetBinError(32,0.002357333);
   new_histo_group_Higgs_wh3l_MET_13TeV_mlll228->SetBinError(33,0.001757511);
   new_histo_group_Higgs_wh3l_MET_13TeV_mlll228->SetBinError(34,0.001993884);
   new_histo_group_Higgs_wh3l_MET_13TeV_mlll228->SetBinError(35,0.0004242254);
   new_histo_group_Higgs_wh3l_MET_13TeV_mlll228->SetBinError(36,0.001484649);
   new_histo_group_Higgs_wh3l_MET_13TeV_mlll228->SetBinError(37,0.0002902012);
   new_histo_group_Higgs_wh3l_MET_13TeV_mlll228->SetBinError(38,0.001955075);
   new_histo_group_Higgs_wh3l_MET_13TeV_mlll228->SetBinError(39,0.001757933);
   new_histo_group_Higgs_wh3l_MET_13TeV_mlll228->SetBinError(40,0.0004300346);
   new_histo_group_Higgs_wh3l_MET_13TeV_mlll228->SetBinError(41,0.01741462);
   new_histo_group_Higgs_wh3l_MET_13TeV_mlll228->SetEntries(741);
   new_histo_group_Higgs_wh3l_MET_13TeV_mlll228->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_MET_13TeV_mlll228->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_MET_13TeV_mlll228->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_MET_13TeV_mlll228->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_13TeV_mlll228->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_13TeV_mlll228->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_13TeV_mlll228->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_MET_13TeV_mlll228->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_13TeV_mlll228->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_13TeV_mlll228->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_13TeV_mlll228->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_MET_13TeV_mlll228->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_13TeV_mlll228->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_13TeV_mlll228->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_13TeV_mlll228->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_13TeV_mlll->Add(new_histo_group_Higgs_wh3l_MET_13TeV_mlll,"");
   thsBackground_grouped_wh3l_MET_13TeV_mlll->Draw("hist same");
   
   thsSignal_grouped_wh3l_MET_13TeV_mlll = new THStack();
   thsSignal_grouped_wh3l_MET_13TeV_mlll->SetName("thsSignal_grouped_wh3l_MET_13TeV_mlll");
   thsSignal_grouped_wh3l_MET_13TeV_mlll->SetTitle("thsSignal_grouped_wh3l_MET_13TeV_mlll");
   
   TH1F *thsSignal_grouped_wh3l_MET_13TeV_mlll_stack_46 = new TH1F("thsSignal_grouped_wh3l_MET_13TeV_mlll_stack_46","thsSignal_grouped_wh3l_MET_13TeV_mlll",40,80,100);
   thsSignal_grouped_wh3l_MET_13TeV_mlll_stack_46->SetMinimum(-0.002325781);
   thsSignal_grouped_wh3l_MET_13TeV_mlll_stack_46->SetMaximum(0.007039328);
   thsSignal_grouped_wh3l_MET_13TeV_mlll_stack_46->SetDirectory(0);
   thsSignal_grouped_wh3l_MET_13TeV_mlll_stack_46->SetStats(0);
   thsSignal_grouped_wh3l_MET_13TeV_mlll_stack_46->SetLineStyle(0);
   thsSignal_grouped_wh3l_MET_13TeV_mlll_stack_46->SetMarkerStyle(20);
   thsSignal_grouped_wh3l_MET_13TeV_mlll_stack_46->GetXaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_MET_13TeV_mlll_stack_46->GetXaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_MET_13TeV_mlll_stack_46->GetXaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_MET_13TeV_mlll_stack_46->GetXaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_MET_13TeV_mlll_stack_46->GetXaxis()->SetTitleOffset(0.9);
   thsSignal_grouped_wh3l_MET_13TeV_mlll_stack_46->GetXaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_MET_13TeV_mlll_stack_46->GetYaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_MET_13TeV_mlll_stack_46->GetYaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_MET_13TeV_mlll_stack_46->GetYaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_MET_13TeV_mlll_stack_46->GetYaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_MET_13TeV_mlll_stack_46->GetYaxis()->SetTitleOffset(1.25);
   thsSignal_grouped_wh3l_MET_13TeV_mlll_stack_46->GetYaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_MET_13TeV_mlll_stack_46->GetZaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_MET_13TeV_mlll_stack_46->GetZaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_MET_13TeV_mlll_stack_46->GetZaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_MET_13TeV_mlll_stack_46->GetZaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_MET_13TeV_mlll_stack_46->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_MET_13TeV_mlll->SetHistogram(thsSignal_grouped_wh3l_MET_13TeV_mlll_stack_46);
   
   
   TH1D *new_histo_group_Higgs_wh3l_MET_13TeV_mlll229 = new TH1D("new_histo_group_Higgs_wh3l_MET_13TeV_mlll229","histo_H_htt",40,80,100);
   new_histo_group_Higgs_wh3l_MET_13TeV_mlll229->SetBinContent(0,0.05733323);
   new_histo_group_Higgs_wh3l_MET_13TeV_mlll229->SetBinContent(1,0.001994417);
   new_histo_group_Higgs_wh3l_MET_13TeV_mlll229->SetBinContent(2,0.001781579);
   new_histo_group_Higgs_wh3l_MET_13TeV_mlll229->SetBinContent(4,0.0003056084);
   new_histo_group_Higgs_wh3l_MET_13TeV_mlll229->SetBinContent(5,0.0008342523);
   new_histo_group_Higgs_wh3l_MET_13TeV_mlll229->SetBinContent(6,0.0002773224);
   new_histo_group_Higgs_wh3l_MET_13TeV_mlll229->SetBinContent(7,0.0008905589);
   new_histo_group_Higgs_wh3l_MET_13TeV_mlll229->SetBinContent(8,0.0009028082);
   new_histo_group_Higgs_wh3l_MET_13TeV_mlll229->SetBinContent(9,0.001921524);
   new_histo_group_Higgs_wh3l_MET_13TeV_mlll229->SetBinContent(10,0.002599839);
   new_histo_group_Higgs_wh3l_MET_13TeV_mlll229->SetBinContent(11,0.002438737);
   new_histo_group_Higgs_wh3l_MET_13TeV_mlll229->SetBinContent(12,0.003006798);
   new_histo_group_Higgs_wh3l_MET_13TeV_mlll229->SetBinContent(13,0.0004397943);
   new_histo_group_Higgs_wh3l_MET_13TeV_mlll229->SetBinContent(14,0.001680797);
   new_histo_group_Higgs_wh3l_MET_13TeV_mlll229->SetBinContent(15,0.000358745);
   new_histo_group_Higgs_wh3l_MET_13TeV_mlll229->SetBinContent(16,0.002287643);
   new_histo_group_Higgs_wh3l_MET_13TeV_mlll229->SetBinContent(17,-0.0002858148);
   new_histo_group_Higgs_wh3l_MET_13TeV_mlll229->SetBinContent(18,0.001550597);
   new_histo_group_Higgs_wh3l_MET_13TeV_mlll229->SetBinContent(19,0.0005338714);
   new_histo_group_Higgs_wh3l_MET_13TeV_mlll229->SetBinContent(20,0.0004491749);
   new_histo_group_Higgs_wh3l_MET_13TeV_mlll229->SetBinContent(21,0.002890238);
   new_histo_group_Higgs_wh3l_MET_13TeV_mlll229->SetBinContent(22,0.002330806);
   new_histo_group_Higgs_wh3l_MET_13TeV_mlll229->SetBinContent(24,0.003365031);
   new_histo_group_Higgs_wh3l_MET_13TeV_mlll229->SetBinContent(25,0.0006171226);
   new_histo_group_Higgs_wh3l_MET_13TeV_mlll229->SetBinContent(26,0.001352402);
   new_histo_group_Higgs_wh3l_MET_13TeV_mlll229->SetBinContent(27,0.001798686);
   new_histo_group_Higgs_wh3l_MET_13TeV_mlll229->SetBinContent(28,0.002078047);
   new_histo_group_Higgs_wh3l_MET_13TeV_mlll229->SetBinContent(29,0.001919134);
   new_histo_group_Higgs_wh3l_MET_13TeV_mlll229->SetBinContent(30,0.004344714);
   new_histo_group_Higgs_wh3l_MET_13TeV_mlll229->SetBinContent(31,0.0004266451);
   new_histo_group_Higgs_wh3l_MET_13TeV_mlll229->SetBinContent(32,0.003994755);
   new_histo_group_Higgs_wh3l_MET_13TeV_mlll229->SetBinContent(33,0.001757511);
   new_histo_group_Higgs_wh3l_MET_13TeV_mlll229->SetBinContent(34,0.002969826);
   new_histo_group_Higgs_wh3l_MET_13TeV_mlll229->SetBinContent(35,0.0005998736);
   new_histo_group_Higgs_wh3l_MET_13TeV_mlll229->SetBinContent(36,0.002370745);
   new_histo_group_Higgs_wh3l_MET_13TeV_mlll229->SetBinContent(37,0.0004096988);
   new_histo_group_Higgs_wh3l_MET_13TeV_mlll229->SetBinContent(38,0.001955075);
   new_histo_group_Higgs_wh3l_MET_13TeV_mlll229->SetBinContent(39,0.002140666);
   new_histo_group_Higgs_wh3l_MET_13TeV_mlll229->SetBinContent(40,0.0007319968);
   new_histo_group_Higgs_wh3l_MET_13TeV_mlll229->SetBinContent(41,0.2926962);
   new_histo_group_Higgs_wh3l_MET_13TeV_mlll229->SetBinError(0,0.007960125);
   new_histo_group_Higgs_wh3l_MET_13TeV_mlll229->SetBinError(1,0.001661993);
   new_histo_group_Higgs_wh3l_MET_13TeV_mlll229->SetBinError(2,0.001781579);
   new_histo_group_Higgs_wh3l_MET_13TeV_mlll229->SetBinError(4,0.0001925611);
   new_histo_group_Higgs_wh3l_MET_13TeV_mlll229->SetBinError(5,0.0008342523);
   new_histo_group_Higgs_wh3l_MET_13TeV_mlll229->SetBinError(6,0.0002773224);
   new_histo_group_Higgs_wh3l_MET_13TeV_mlll229->SetBinError(7,0.0004088703);
   new_histo_group_Higgs_wh3l_MET_13TeV_mlll229->SetBinError(8,0.0005363849);
   new_histo_group_Higgs_wh3l_MET_13TeV_mlll229->SetBinError(9,0.001208982);
   new_histo_group_Higgs_wh3l_MET_13TeV_mlll229->SetBinError(10,0.001891928);
   new_histo_group_Higgs_wh3l_MET_13TeV_mlll229->SetBinError(11,0.001901895);
   new_histo_group_Higgs_wh3l_MET_13TeV_mlll229->SetBinError(12,0.002078139);
   new_histo_group_Higgs_wh3l_MET_13TeV_mlll229->SetBinError(13,0.0003198253);
   new_histo_group_Higgs_wh3l_MET_13TeV_mlll229->SetBinError(14,0.001318824);
   new_histo_group_Higgs_wh3l_MET_13TeV_mlll229->SetBinError(15,0.0002601799);
   new_histo_group_Higgs_wh3l_MET_13TeV_mlll229->SetBinError(16,0.001646725);
   new_histo_group_Higgs_wh3l_MET_13TeV_mlll229->SetBinError(17,0.002039967);
   new_histo_group_Higgs_wh3l_MET_13TeV_mlll229->SetBinError(18,0.001082738);
   new_histo_group_Higgs_wh3l_MET_13TeV_mlll229->SetBinError(19,0.0003815617);
   new_histo_group_Higgs_wh3l_MET_13TeV_mlll229->SetBinError(20,0.0003176741);
   new_histo_group_Higgs_wh3l_MET_13TeV_mlll229->SetBinError(21,0.001839966);
   new_histo_group_Higgs_wh3l_MET_13TeV_mlll229->SetBinError(22,0.001212708);
   new_histo_group_Higgs_wh3l_MET_13TeV_mlll229->SetBinError(24,0.001973556);
   new_histo_group_Higgs_wh3l_MET_13TeV_mlll229->SetBinError(25,0.0003911344);
   new_histo_group_Higgs_wh3l_MET_13TeV_mlll229->SetBinError(26,0.001352402);
   new_histo_group_Higgs_wh3l_MET_13TeV_mlll229->SetBinError(27,0.001405093);
   new_histo_group_Higgs_wh3l_MET_13TeV_mlll229->SetBinError(28,0.00116594);
   new_histo_group_Higgs_wh3l_MET_13TeV_mlll229->SetBinError(29,0.001364932);
   new_histo_group_Higgs_wh3l_MET_13TeV_mlll229->SetBinError(30,0.002359408);
   new_histo_group_Higgs_wh3l_MET_13TeV_mlll229->SetBinError(31,0.0003867884);
   new_histo_group_Higgs_wh3l_MET_13TeV_mlll229->SetBinError(32,0.002357333);
   new_histo_group_Higgs_wh3l_MET_13TeV_mlll229->SetBinError(33,0.001757511);
   new_histo_group_Higgs_wh3l_MET_13TeV_mlll229->SetBinError(34,0.001993884);
   new_histo_group_Higgs_wh3l_MET_13TeV_mlll229->SetBinError(35,0.0004242254);
   new_histo_group_Higgs_wh3l_MET_13TeV_mlll229->SetBinError(36,0.001484649);
   new_histo_group_Higgs_wh3l_MET_13TeV_mlll229->SetBinError(37,0.0002902012);
   new_histo_group_Higgs_wh3l_MET_13TeV_mlll229->SetBinError(38,0.001955075);
   new_histo_group_Higgs_wh3l_MET_13TeV_mlll229->SetBinError(39,0.001757933);
   new_histo_group_Higgs_wh3l_MET_13TeV_mlll229->SetBinError(40,0.0004300346);
   new_histo_group_Higgs_wh3l_MET_13TeV_mlll229->SetBinError(41,0.01741462);
   new_histo_group_Higgs_wh3l_MET_13TeV_mlll229->SetEntries(741);
   new_histo_group_Higgs_wh3l_MET_13TeV_mlll229->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_MET_13TeV_mlll229->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_MET_13TeV_mlll229->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_MET_13TeV_mlll229->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_13TeV_mlll229->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_13TeV_mlll229->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_13TeV_mlll229->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_MET_13TeV_mlll229->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_13TeV_mlll229->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_13TeV_mlll229->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_13TeV_mlll229->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_MET_13TeV_mlll229->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_13TeV_mlll229->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_13TeV_mlll229->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_13TeV_mlll229->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_MET_13TeV_mlll->Add(new_histo_group_Higgs_wh3l_MET_13TeV_mlll,"");
   thsSignal_grouped_wh3l_MET_13TeV_mlll->Draw("hist same noclear");
   
   Double_t _fx3045[40] = {
   80.25,
   80.75,
   81.25,
   81.75,
   82.25,
   82.75,
   83.25,
   83.75,
   84.25,
   84.75,
   85.25,
   85.75,
   86.25,
   86.75,
   87.25,
   87.75,
   88.25,
   88.75,
   89.25,
   89.75,
   90.25,
   90.75,
   91.25,
   91.75,
   92.25,
   92.75,
   93.25,
   93.75,
   94.25,
   94.75,
   95.25,
   95.75,
   96.25,
   96.75,
   97.25,
   97.75,
   98.25,
   98.75,
   99.25,
   99.75};
   Double_t _fy3045[40] = {
   0,
   0.08346272,
   0.005661615,
   0,
   0,
   0,
   0.005488627,
   0.5192184,
   0.0875363,
   0.008849978,
   0.00484358,
   0.008351164,
   0.5135171,
   0.005223083,
   0.00546934,
   0.005599787,
   0.001741456,
   0.005329018,
   0.001552237,
   0.004637908,
   -0.1094371,
   0.4072749,
   0,
   0.00643712,
   0.4400331,
   0.07630753,
   0,
   0.01199452,
   0.00594491,
   0.002697298,
   -0.00116056,
   0,
   0,
   0.01107202,
   0.005719688,
   0.004876467,
   0.02085941,
   0,
   0.442458,
   0.004614713};
   Double_t _felx3045[40] = {
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25};
   Double_t _fely3045[40] = {
   0,
   0.08767501,
   0.006050412,
   0,
   0,
   0,
   0.005504885,
   0.5485433,
   0.09274305,
   0.008443678,
   0.004844662,
   0.008951274,
   0.5435997,
   0.005231841,
   0.005469558,
   0.005600638,
   0.001741688,
   0.005329929,
   0.002197092,
   0.003752982,
   0.1159466,
   0.4363452,
   0,
   0.006459973,
   0.4655237,
   0.08018871,
   0,
   0.008502865,
   0.005965915,
   0.002697492,
   0.01284662,
   0,
   0,
   0.007931099,
   0.005720015,
   0.004877191,
   0.02098285,
   0,
   0.3848819,
   0.004625924};
   Double_t _fehx3045[40] = {
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25};
   Double_t _fehy3045[40] = {
   0,
   0.1193507,
   0.006049727,
   0,
   0,
   0,
   0.005490238,
   0.5485433,
   0.09274305,
   0.008443625,
   0.004844685,
   0.008942297,
   0.5844752,
   0.00523279,
   0.005469559,
   0.005600655,
   0.001741695,
   0.005329928,
   0.002197264,
   0.003752986,
   0.1159466,
   0.4363452,
   0,
   0.006458127,
   0.4655237,
   0.08018868,
   0,
   0.008503046,
   0.005956679,
   0.002697492,
   0.01284643,
   0,
   0,
   0.007936968,
   0.005720016,
   0.004877078,
   0.02098264,
   0,
   0.3848819,
   0.004631984};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(40,_fx3045,_fy3045,_felx3045,_fehx3045,_fely3045,_fehy3045);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(12);
   grae->SetFillStyle(3004);
   grae->SetLineColor(12);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3045 = new TH1F("Graph_Graph3045","",100,78,102);
   Graph_Graph3045->SetMinimum(-0.3577213);
   Graph_Graph3045->SetMaximum(1.23033);
   Graph_Graph3045->SetDirectory(0);
   Graph_Graph3045->SetStats(0);
   Graph_Graph3045->SetLineStyle(0);
   Graph_Graph3045->SetMarkerStyle(20);
   Graph_Graph3045->GetXaxis()->SetLabelFont(42);
   Graph_Graph3045->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3045->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3045->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3045->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3045->GetXaxis()->SetTitleFont(42);
   Graph_Graph3045->GetYaxis()->SetLabelFont(42);
   Graph_Graph3045->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3045->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3045->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3045->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3045->GetYaxis()->SetTitleFont(42);
   Graph_Graph3045->GetZaxis()->SetLabelFont(42);
   Graph_Graph3045->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3045->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3045->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3045->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3045);
   
   grae->Draw("2");
   
   Double_t _fx3046[40] = {
   80.25,
   80.75,
   81.25,
   81.75,
   82.25,
   82.75,
   83.25,
   83.75,
   84.25,
   84.75,
   85.25,
   85.75,
   86.25,
   86.75,
   87.25,
   87.75,
   88.25,
   88.75,
   89.25,
   89.75,
   90.25,
   90.75,
   91.25,
   91.75,
   92.25,
   92.75,
   93.25,
   93.75,
   94.25,
   94.75,
   95.25,
   95.75,
   96.25,
   96.75,
   97.25,
   97.75,
   98.25,
   98.75,
   99.25,
   99.75};
   Double_t _fy3046[40] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t _felx3046[40] = {
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25};
   Double_t _fely3046[40] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t _fehx3046[40] = {
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25};
   Double_t _fehy3046[40] = {
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
   grae = new TGraphAsymmErrors(40,_fx3046,_fy3046,_felx3046,_fehx3046,_fely3046,_fehy3046);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(1);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3046 = new TH1F("Graph_Graph3046","",100,78,102);
   Graph_Graph3046->SetMinimum(0);
   Graph_Graph3046->SetMaximum(1.262698);
   Graph_Graph3046->SetDirectory(0);
   Graph_Graph3046->SetStats(0);
   Graph_Graph3046->SetLineStyle(0);
   Graph_Graph3046->SetMarkerStyle(20);
   Graph_Graph3046->GetXaxis()->SetLabelFont(42);
   Graph_Graph3046->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3046->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3046->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3046->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3046->GetXaxis()->SetTitleFont(42);
   Graph_Graph3046->GetYaxis()->SetLabelFont(42);
   Graph_Graph3046->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3046->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3046->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3046->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3046->GetYaxis()->SetTitleFont(42);
   Graph_Graph3046->GetZaxis()->SetLabelFont(42);
   Graph_Graph3046->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3046->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3046->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3046->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3046);
   
   grae->Draw("p0");
   
   TLegend *leg = new TLegend(0.2,0.7,0.8,0.9,NULL,"brNDC");
   leg->SetTextFont(62);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("new_histo_group_Fake_wh3l_MET_13TeV_mlll","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_MET_13TeV_mlll","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_MET_13TeV_mlll","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_MET_13TeV_mlll","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_MET_13TeV_mlll","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_MET_13TeV_mlll","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_MET_13TeV_mlll","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_MET_13TeV_mlll","Data","EPL");
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
   entry=leg->AddEntry("new_histo_group_Fake_wh3l_MET_13TeV_mlll","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_MET_13TeV_mlll","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_MET_13TeV_mlll","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_MET_13TeV_mlll","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_MET_13TeV_mlll","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_MET_13TeV_mlll","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_MET_13TeV_mlll","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_MET_13TeV_mlll","Data","EPL");
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
   
   TH1F *hframe_copy230 = new TH1F("hframe_copy230","",1000,80,100);
   hframe_copy230->SetMinimum(0);
   hframe_copy230->SetMaximum(1.300303);
   hframe_copy230->SetDirectory(0);
   hframe_copy230->SetStats(0);
   hframe_copy230->SetLineStyle(0);
   hframe_copy230->SetMarkerStyle(20);
   hframe_copy230->GetXaxis()->SetTitle("m_{lll} [GeV]");
   hframe_copy230->GetXaxis()->SetNdivisions(506);
   hframe_copy230->GetXaxis()->SetLabelFont(42);
   hframe_copy230->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy230->GetXaxis()->SetLabelSize(0.05);
   hframe_copy230->GetXaxis()->SetTitleSize(0.06);
   hframe_copy230->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy230->GetXaxis()->SetTitleFont(42);
   hframe_copy230->GetYaxis()->SetTitle("Events");
   hframe_copy230->GetYaxis()->SetLabelFont(42);
   hframe_copy230->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy230->GetYaxis()->SetLabelSize(0.05);
   hframe_copy230->GetYaxis()->SetTitleSize(0.06);
   hframe_copy230->GetYaxis()->SetTitleOffset(1.25);
   hframe_copy230->GetYaxis()->SetTitleFont(42);
   hframe_copy230->GetZaxis()->SetLabelFont(42);
   hframe_copy230->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy230->GetZaxis()->SetLabelSize(0.05);
   hframe_copy230->GetZaxis()->SetTitleSize(0.06);
   hframe_copy230->GetZaxis()->SetTitleFont(42);
   hframe_copy230->Draw("sameaxis");
   ccwh3l_MET_13TeV_mlll->Modified();
   ccwh3l_MET_13TeV_mlll->cd();
   ccwh3l_MET_13TeV_mlll->SetSelected(ccwh3l_MET_13TeV_mlll);
}
