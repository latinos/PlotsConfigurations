void c_wh3l_Pre_13TeV_mlll()
{
//=========Macro generated from canvas: ccwh3l_Pre_13TeV_mlll/cc
//=========  (Sun Jul  3 01:22:06 2016) by ROOT version6.02/13
   TCanvas *ccwh3l_Pre_13TeV_mlll = new TCanvas("ccwh3l_Pre_13TeV_mlll", "cc",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   ccwh3l_Pre_13TeV_mlll->SetHighLightColor(2);
   ccwh3l_Pre_13TeV_mlll->Range(76,-0.7926829,101,5.304878);
   ccwh3l_Pre_13TeV_mlll->SetFillColor(0);
   ccwh3l_Pre_13TeV_mlll->SetBorderMode(0);
   ccwh3l_Pre_13TeV_mlll->SetBorderSize(2);
   ccwh3l_Pre_13TeV_mlll->SetTickx(1);
   ccwh3l_Pre_13TeV_mlll->SetTicky(1);
   ccwh3l_Pre_13TeV_mlll->SetLeftMargin(0.16);
   ccwh3l_Pre_13TeV_mlll->SetRightMargin(0.04);
   ccwh3l_Pre_13TeV_mlll->SetTopMargin(0.05);
   ccwh3l_Pre_13TeV_mlll->SetBottomMargin(0.13);
   ccwh3l_Pre_13TeV_mlll->SetFrameFillStyle(0);
   ccwh3l_Pre_13TeV_mlll->SetFrameBorderMode(0);
   ccwh3l_Pre_13TeV_mlll->SetFrameFillStyle(0);
   ccwh3l_Pre_13TeV_mlll->SetFrameBorderMode(0);
   
   TH1F *hframe351 = new TH1F("hframe351","",1000,80,100);
   hframe351->SetMinimum(0);
   hframe351->SetMaximum(5);
   hframe351->SetDirectory(0);
   hframe351->SetStats(0);
   hframe351->SetLineStyle(0);
   hframe351->SetMarkerStyle(20);
   hframe351->GetXaxis()->SetTitle("m_{lll} [GeV]");
   hframe351->GetXaxis()->SetNdivisions(506);
   hframe351->GetXaxis()->SetLabelFont(42);
   hframe351->GetXaxis()->SetLabelOffset(0.007);
   hframe351->GetXaxis()->SetLabelSize(0.05);
   hframe351->GetXaxis()->SetTitleSize(0.06);
   hframe351->GetXaxis()->SetTitleOffset(0.9);
   hframe351->GetXaxis()->SetTitleFont(42);
   hframe351->GetYaxis()->SetTitle("Events");
   hframe351->GetYaxis()->SetLabelFont(42);
   hframe351->GetYaxis()->SetLabelOffset(0.007);
   hframe351->GetYaxis()->SetLabelSize(0.05);
   hframe351->GetYaxis()->SetTitleSize(0.06);
   hframe351->GetYaxis()->SetTitleOffset(1.25);
   hframe351->GetYaxis()->SetTitleFont(42);
   hframe351->GetZaxis()->SetLabelFont(42);
   hframe351->GetZaxis()->SetLabelOffset(0.007);
   hframe351->GetZaxis()->SetLabelSize(0.05);
   hframe351->GetZaxis()->SetTitleSize(0.06);
   hframe351->GetZaxis()->SetTitleFont(42);
   hframe351->Draw(" ");
   
   THStack *thsBackground_grouped_wh3l_Pre_13TeV_mlll = new THStack();
   thsBackground_grouped_wh3l_Pre_13TeV_mlll->SetName("thsBackground_grouped_wh3l_Pre_13TeV_mlll");
   thsBackground_grouped_wh3l_Pre_13TeV_mlll->SetTitle("thsBackground_grouped_wh3l_Pre_13TeV_mlll");
   
   TH1F *thsBackground_grouped_wh3l_Pre_13TeV_mlll_stack_71 = new TH1F("thsBackground_grouped_wh3l_Pre_13TeV_mlll_stack_71","thsBackground_grouped_wh3l_Pre_13TeV_mlll",40,80,100);
   thsBackground_grouped_wh3l_Pre_13TeV_mlll_stack_71->SetMinimum(-0.2706445);
   thsBackground_grouped_wh3l_Pre_13TeV_mlll_stack_71->SetMaximum(1.115209);
   thsBackground_grouped_wh3l_Pre_13TeV_mlll_stack_71->SetDirectory(0);
   thsBackground_grouped_wh3l_Pre_13TeV_mlll_stack_71->SetStats(0);
   thsBackground_grouped_wh3l_Pre_13TeV_mlll_stack_71->SetLineStyle(0);
   thsBackground_grouped_wh3l_Pre_13TeV_mlll_stack_71->SetMarkerStyle(20);
   thsBackground_grouped_wh3l_Pre_13TeV_mlll_stack_71->GetXaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_Pre_13TeV_mlll_stack_71->GetXaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_Pre_13TeV_mlll_stack_71->GetXaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_Pre_13TeV_mlll_stack_71->GetXaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_Pre_13TeV_mlll_stack_71->GetXaxis()->SetTitleOffset(0.9);
   thsBackground_grouped_wh3l_Pre_13TeV_mlll_stack_71->GetXaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_Pre_13TeV_mlll_stack_71->GetYaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_Pre_13TeV_mlll_stack_71->GetYaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_Pre_13TeV_mlll_stack_71->GetYaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_Pre_13TeV_mlll_stack_71->GetYaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_Pre_13TeV_mlll_stack_71->GetYaxis()->SetTitleOffset(1.25);
   thsBackground_grouped_wh3l_Pre_13TeV_mlll_stack_71->GetYaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_Pre_13TeV_mlll_stack_71->GetZaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_Pre_13TeV_mlll_stack_71->GetZaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_Pre_13TeV_mlll_stack_71->GetZaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_Pre_13TeV_mlll_stack_71->GetZaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_Pre_13TeV_mlll_stack_71->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_Pre_13TeV_mlll->SetHistogram(thsBackground_grouped_wh3l_Pre_13TeV_mlll_stack_71);
   
   
   TH1D *new_histo_group_Fake_wh3l_Pre_13TeV_mlll352 = new TH1D("new_histo_group_Fake_wh3l_Pre_13TeV_mlll352","histo_Fake",40,80,100);
   new_histo_group_Fake_wh3l_Pre_13TeV_mlll352->SetBinContent(0,1.278417);
   new_histo_group_Fake_wh3l_Pre_13TeV_mlll352->SetBinContent(2,0.07666666);
   new_histo_group_Fake_wh3l_Pre_13TeV_mlll352->SetBinContent(4,-0.00599356);
   new_histo_group_Fake_wh3l_Pre_13TeV_mlll352->SetBinContent(6,0.07555473);
   new_histo_group_Fake_wh3l_Pre_13TeV_mlll352->SetBinContent(8,0.514986);
   new_histo_group_Fake_wh3l_Pre_13TeV_mlll352->SetBinContent(9,0.0875363);
   new_histo_group_Fake_wh3l_Pre_13TeV_mlll352->SetBinContent(12,0.011493);
   new_histo_group_Fake_wh3l_Pre_13TeV_mlll352->SetBinContent(13,0.5095075);
   new_histo_group_Fake_wh3l_Pre_13TeV_mlll352->SetBinContent(17,-0.1353222);
   new_histo_group_Fake_wh3l_Pre_13TeV_mlll352->SetBinContent(21,-0.1094371);
   new_histo_group_Fake_wh3l_Pre_13TeV_mlll352->SetBinContent(22,0.4062305);
   new_histo_group_Fake_wh3l_Pre_13TeV_mlll352->SetBinContent(25,0.4340901);
   new_histo_group_Fake_wh3l_Pre_13TeV_mlll352->SetBinContent(26,0.1173875);
   new_histo_group_Fake_wh3l_Pre_13TeV_mlll352->SetBinContent(31,-0.006812496);
   new_histo_group_Fake_wh3l_Pre_13TeV_mlll352->SetBinContent(35,-0.03770436);
   new_histo_group_Fake_wh3l_Pre_13TeV_mlll352->SetBinContent(37,-5.750344e-05);
   new_histo_group_Fake_wh3l_Pre_13TeV_mlll352->SetBinContent(39,0.442458);
   new_histo_group_Fake_wh3l_Pre_13TeV_mlll352->SetBinContent(41,18.5009);
   new_histo_group_Fake_wh3l_Pre_13TeV_mlll352->SetBinError(0,1.080275);
   new_histo_group_Fake_wh3l_Pre_13TeV_mlll352->SetBinError(2,0.1094957);
   new_histo_group_Fake_wh3l_Pre_13TeV_mlll352->SetBinError(4,0.00599356);
   new_histo_group_Fake_wh3l_Pre_13TeV_mlll352->SetBinError(6,0.07555473);
   new_histo_group_Fake_wh3l_Pre_13TeV_mlll352->SetBinError(8,0.514986);
   new_histo_group_Fake_wh3l_Pre_13TeV_mlll352->SetBinError(9,0.0875363);
   new_histo_group_Fake_wh3l_Pre_13TeV_mlll352->SetBinError(12,0.011493);
   new_histo_group_Fake_wh3l_Pre_13TeV_mlll352->SetBinError(13,0.5525967);
   new_histo_group_Fake_wh3l_Pre_13TeV_mlll352->SetBinError(17,0.1353222);
   new_histo_group_Fake_wh3l_Pre_13TeV_mlll352->SetBinError(21,0.1094371);
   new_histo_group_Fake_wh3l_Pre_13TeV_mlll352->SetBinError(22,0.4062305);
   new_histo_group_Fake_wh3l_Pre_13TeV_mlll352->SetBinError(25,0.4340901);
   new_histo_group_Fake_wh3l_Pre_13TeV_mlll352->SetBinError(26,0.08464429);
   new_histo_group_Fake_wh3l_Pre_13TeV_mlll352->SetBinError(31,0.006812496);
   new_histo_group_Fake_wh3l_Pre_13TeV_mlll352->SetBinError(35,0.03770436);
   new_histo_group_Fake_wh3l_Pre_13TeV_mlll352->SetBinError(37,5.750344e-05);
   new_histo_group_Fake_wh3l_Pre_13TeV_mlll352->SetBinError(39,0.3523526);
   new_histo_group_Fake_wh3l_Pre_13TeV_mlll352->SetBinError(41,2.810695);
   new_histo_group_Fake_wh3l_Pre_13TeV_mlll352->SetEntries(191);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_Pre_13TeV_mlll352->SetFillColor(ci);
   new_histo_group_Fake_wh3l_Pre_13TeV_mlll352->SetFillStyle(3001);

   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_Pre_13TeV_mlll352->SetLineColor(ci);
   new_histo_group_Fake_wh3l_Pre_13TeV_mlll352->GetXaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_Pre_13TeV_mlll352->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_Pre_13TeV_mlll352->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_Pre_13TeV_mlll352->GetXaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_Pre_13TeV_mlll352->GetYaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_Pre_13TeV_mlll352->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_Pre_13TeV_mlll352->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_Pre_13TeV_mlll352->GetYaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_Pre_13TeV_mlll352->GetZaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_Pre_13TeV_mlll352->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_Pre_13TeV_mlll352->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_Pre_13TeV_mlll352->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_Pre_13TeV_mlll->Add(new_histo_group_Fake_wh3l_Pre_13TeV_mlll,"");
   
   TH1D *new_histo_group_WW_wh3l_Pre_13TeV_mlll353 = new TH1D("new_histo_group_WW_wh3l_Pre_13TeV_mlll353","histo_WW",40,80,100);
   new_histo_group_WW_wh3l_Pre_13TeV_mlll353->SetBinContent(0,0.02360507);
   new_histo_group_WW_wh3l_Pre_13TeV_mlll353->SetBinContent(37,0.01528641);
   new_histo_group_WW_wh3l_Pre_13TeV_mlll353->SetBinContent(41,0.1566011);
   new_histo_group_WW_wh3l_Pre_13TeV_mlll353->SetBinError(0,0.01699916);
   new_histo_group_WW_wh3l_Pre_13TeV_mlll353->SetBinError(37,0.01528641);
   new_histo_group_WW_wh3l_Pre_13TeV_mlll353->SetBinError(41,0.0499083);
   new_histo_group_WW_wh3l_Pre_13TeV_mlll353->SetEntries(14);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_Pre_13TeV_mlll353->SetFillColor(ci);
   new_histo_group_WW_wh3l_Pre_13TeV_mlll353->SetFillStyle(3001);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_Pre_13TeV_mlll353->SetLineColor(ci);
   new_histo_group_WW_wh3l_Pre_13TeV_mlll353->GetXaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_Pre_13TeV_mlll353->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_Pre_13TeV_mlll353->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_Pre_13TeV_mlll353->GetXaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_Pre_13TeV_mlll353->GetYaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_Pre_13TeV_mlll353->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_Pre_13TeV_mlll353->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_Pre_13TeV_mlll353->GetYaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_Pre_13TeV_mlll353->GetZaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_Pre_13TeV_mlll353->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_Pre_13TeV_mlll353->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_Pre_13TeV_mlll353->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_Pre_13TeV_mlll->Add(new_histo_group_WW_wh3l_Pre_13TeV_mlll,"");
   
   TH1D *new_histo_group_VVV_wh3l_Pre_13TeV_mlll354 = new TH1D("new_histo_group_VVV_wh3l_Pre_13TeV_mlll354","histo_VVV",40,80,100);
   new_histo_group_VVV_wh3l_Pre_13TeV_mlll354->SetBinContent(0,0.009985713);
   new_histo_group_VVV_wh3l_Pre_13TeV_mlll354->SetBinContent(2,0.000833863);
   new_histo_group_VVV_wh3l_Pre_13TeV_mlll354->SetBinContent(3,0.002110594);
   new_histo_group_VVV_wh3l_Pre_13TeV_mlll354->SetBinContent(8,0.004232408);
   new_histo_group_VVV_wh3l_Pre_13TeV_mlll354->SetBinContent(10,0.002648953);
   new_histo_group_VVV_wh3l_Pre_13TeV_mlll354->SetBinContent(12,0.003162893);
   new_histo_group_VVV_wh3l_Pre_13TeV_mlll354->SetBinContent(15,0.002959082);
   new_histo_group_VVV_wh3l_Pre_13TeV_mlll354->SetBinContent(19,0.001552237);
   new_histo_group_VVV_wh3l_Pre_13TeV_mlll354->SetBinContent(22,-0.002623867);
   new_histo_group_VVV_wh3l_Pre_13TeV_mlll354->SetBinContent(31,0.001994133);
   new_histo_group_VVV_wh3l_Pre_13TeV_mlll354->SetBinContent(40,0.001149183);
   new_histo_group_VVV_wh3l_Pre_13TeV_mlll354->SetBinContent(41,0.3400707);
   new_histo_group_VVV_wh3l_Pre_13TeV_mlll354->SetBinError(0,0.004522574);
   new_histo_group_VVV_wh3l_Pre_13TeV_mlll354->SetBinError(2,0.000833863);
   new_histo_group_VVV_wh3l_Pre_13TeV_mlll354->SetBinError(3,0.002110594);
   new_histo_group_VVV_wh3l_Pre_13TeV_mlll354->SetBinError(8,0.003081126);
   new_histo_group_VVV_wh3l_Pre_13TeV_mlll354->SetBinError(10,0.002028894);
   new_histo_group_VVV_wh3l_Pre_13TeV_mlll354->SetBinError(12,0.003162893);
   new_histo_group_VVV_wh3l_Pre_13TeV_mlll354->SetBinError(15,0.002959082);
   new_histo_group_VVV_wh3l_Pre_13TeV_mlll354->SetBinError(19,0.001552237);
   new_histo_group_VVV_wh3l_Pre_13TeV_mlll354->SetBinError(22,0.002623867);
   new_histo_group_VVV_wh3l_Pre_13TeV_mlll354->SetBinError(31,0.001994133);
   new_histo_group_VVV_wh3l_Pre_13TeV_mlll354->SetBinError(40,0.0008145516);
   new_histo_group_VVV_wh3l_Pre_13TeV_mlll354->SetBinError(41,0.03029336);
   new_histo_group_VVV_wh3l_Pre_13TeV_mlll354->SetEntries(227);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_Pre_13TeV_mlll354->SetFillColor(ci);
   new_histo_group_VVV_wh3l_Pre_13TeV_mlll354->SetFillStyle(3001);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_Pre_13TeV_mlll354->SetLineColor(ci);
   new_histo_group_VVV_wh3l_Pre_13TeV_mlll354->GetXaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_Pre_13TeV_mlll354->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_Pre_13TeV_mlll354->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_Pre_13TeV_mlll354->GetXaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_Pre_13TeV_mlll354->GetYaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_Pre_13TeV_mlll354->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_Pre_13TeV_mlll354->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_Pre_13TeV_mlll354->GetYaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_Pre_13TeV_mlll354->GetZaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_Pre_13TeV_mlll354->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_Pre_13TeV_mlll354->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_Pre_13TeV_mlll354->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_Pre_13TeV_mlll->Add(new_histo_group_VVV_wh3l_Pre_13TeV_mlll,"");
   
   TH1D *new_histo_group_Vg_wh3l_Pre_13TeV_mlll355 = new TH1D("new_histo_group_Vg_wh3l_Pre_13TeV_mlll355","histo_Vg",40,80,100);
   new_histo_group_Vg_wh3l_Pre_13TeV_mlll355->SetBinContent(0,0.1782089);
   new_histo_group_Vg_wh3l_Pre_13TeV_mlll355->SetBinContent(1,-0.1276462);
   new_histo_group_Vg_wh3l_Pre_13TeV_mlll355->SetBinContent(11,0.07413695);
   new_histo_group_Vg_wh3l_Pre_13TeV_mlll355->SetBinContent(17,0.1156486);
   new_histo_group_Vg_wh3l_Pre_13TeV_mlll355->SetBinContent(41,-0.04046969);
   new_histo_group_Vg_wh3l_Pre_13TeV_mlll355->SetBinError(0,0.1242005);
   new_histo_group_Vg_wh3l_Pre_13TeV_mlll355->SetBinError(1,0.1276462);
   new_histo_group_Vg_wh3l_Pre_13TeV_mlll355->SetBinError(11,0.07413695);
   new_histo_group_Vg_wh3l_Pre_13TeV_mlll355->SetBinError(17,0.1156486);
   new_histo_group_Vg_wh3l_Pre_13TeV_mlll355->SetBinError(41,0.2025308);
   new_histo_group_Vg_wh3l_Pre_13TeV_mlll355->SetEntries(10);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_Pre_13TeV_mlll355->SetFillColor(ci);
   new_histo_group_Vg_wh3l_Pre_13TeV_mlll355->SetFillStyle(3001);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_Pre_13TeV_mlll355->SetLineColor(ci);
   new_histo_group_Vg_wh3l_Pre_13TeV_mlll355->GetXaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_Pre_13TeV_mlll355->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_Pre_13TeV_mlll355->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_Pre_13TeV_mlll355->GetXaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_Pre_13TeV_mlll355->GetYaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_Pre_13TeV_mlll355->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_Pre_13TeV_mlll355->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_Pre_13TeV_mlll355->GetYaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_Pre_13TeV_mlll355->GetZaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_Pre_13TeV_mlll355->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_Pre_13TeV_mlll355->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_Pre_13TeV_mlll355->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_Pre_13TeV_mlll->Add(new_histo_group_Vg_wh3l_Pre_13TeV_mlll,"");
   
   TH1D *new_histo_group_ZZ_wh3l_Pre_13TeV_mlll356 = new TH1D("new_histo_group_ZZ_wh3l_Pre_13TeV_mlll356","histo_ZZ",40,80,100);
   new_histo_group_ZZ_wh3l_Pre_13TeV_mlll356->SetBinContent(27,0.03984332);
   new_histo_group_ZZ_wh3l_Pre_13TeV_mlll356->SetBinContent(41,0.1255383);
   new_histo_group_ZZ_wh3l_Pre_13TeV_mlll356->SetBinError(27,0.03984332);
   new_histo_group_ZZ_wh3l_Pre_13TeV_mlll356->SetBinError(41,0.07302862);
   new_histo_group_ZZ_wh3l_Pre_13TeV_mlll356->SetEntries(4);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_Pre_13TeV_mlll356->SetFillColor(ci);
   new_histo_group_ZZ_wh3l_Pre_13TeV_mlll356->SetFillStyle(3001);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_Pre_13TeV_mlll356->SetLineColor(ci);
   new_histo_group_ZZ_wh3l_Pre_13TeV_mlll356->GetXaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_Pre_13TeV_mlll356->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_Pre_13TeV_mlll356->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_Pre_13TeV_mlll356->GetXaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_Pre_13TeV_mlll356->GetYaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_Pre_13TeV_mlll356->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_Pre_13TeV_mlll356->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_Pre_13TeV_mlll356->GetYaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_Pre_13TeV_mlll356->GetZaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_Pre_13TeV_mlll356->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_Pre_13TeV_mlll356->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_Pre_13TeV_mlll356->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_Pre_13TeV_mlll->Add(new_histo_group_ZZ_wh3l_Pre_13TeV_mlll,"");
   
   TH1D *new_histo_group_WZ_wh3l_Pre_13TeV_mlll357 = new TH1D("new_histo_group_WZ_wh3l_Pre_13TeV_mlll357","histo_WZ",40,80,100);
   new_histo_group_WZ_wh3l_Pre_13TeV_mlll357->SetBinContent(0,0.2051376);
   new_histo_group_WZ_wh3l_Pre_13TeV_mlll357->SetBinContent(2,0.005962193);
   new_histo_group_WZ_wh3l_Pre_13TeV_mlll357->SetBinContent(3,0.00355102);
   new_histo_group_WZ_wh3l_Pre_13TeV_mlll357->SetBinContent(4,0.006974654);
   new_histo_group_WZ_wh3l_Pre_13TeV_mlll357->SetBinContent(7,0.005488627);
   new_histo_group_WZ_wh3l_Pre_13TeV_mlll357->SetBinContent(8,0.004404521);
   new_histo_group_WZ_wh3l_Pre_13TeV_mlll357->SetBinContent(10,0.006201025);
   new_histo_group_WZ_wh3l_Pre_13TeV_mlll357->SetBinContent(11,0.006607107);
   new_histo_group_WZ_wh3l_Pre_13TeV_mlll357->SetBinContent(12,0.01039449);
   new_histo_group_WZ_wh3l_Pre_13TeV_mlll357->SetBinContent(13,0.004009541);
   new_histo_group_WZ_wh3l_Pre_13TeV_mlll357->SetBinContent(14,0.01070981);
   new_histo_group_WZ_wh3l_Pre_13TeV_mlll357->SetBinContent(15,0.00546934);
   new_histo_group_WZ_wh3l_Pre_13TeV_mlll357->SetBinContent(16,0.005599787);
   new_histo_group_WZ_wh3l_Pre_13TeV_mlll357->SetBinContent(17,0.001741456);
   new_histo_group_WZ_wh3l_Pre_13TeV_mlll357->SetBinContent(18,0.005329017);
   new_histo_group_WZ_wh3l_Pre_13TeV_mlll357->SetBinContent(20,0.004637908);
   new_histo_group_WZ_wh3l_Pre_13TeV_mlll357->SetBinContent(22,0.003668249);
   new_histo_group_WZ_wh3l_Pre_13TeV_mlll357->SetBinContent(24,0.008652606);
   new_histo_group_WZ_wh3l_Pre_13TeV_mlll357->SetBinContent(25,0.005943022);
   new_histo_group_WZ_wh3l_Pre_13TeV_mlll357->SetBinContent(26,0.005893175);
   new_histo_group_WZ_wh3l_Pre_13TeV_mlll357->SetBinContent(28,0.01199452);
   new_histo_group_WZ_wh3l_Pre_13TeV_mlll357->SetBinContent(29,0.00594491);
   new_histo_group_WZ_wh3l_Pre_13TeV_mlll357->SetBinContent(30,0.002697298);
   new_histo_group_WZ_wh3l_Pre_13TeV_mlll357->SetBinContent(31,0.003657803);
   new_histo_group_WZ_wh3l_Pre_13TeV_mlll357->SetBinContent(34,0.01107202);
   new_histo_group_WZ_wh3l_Pre_13TeV_mlll357->SetBinContent(35,0.005719688);
   new_histo_group_WZ_wh3l_Pre_13TeV_mlll357->SetBinContent(36,0.004876467);
   new_histo_group_WZ_wh3l_Pre_13TeV_mlll357->SetBinContent(37,0.0115825);
   new_histo_group_WZ_wh3l_Pre_13TeV_mlll357->SetBinContent(40,0.004000224);
   new_histo_group_WZ_wh3l_Pre_13TeV_mlll357->SetBinContent(41,1.117101);
   new_histo_group_WZ_wh3l_Pre_13TeV_mlll357->SetBinError(0,0.0334351);
   new_histo_group_WZ_wh3l_Pre_13TeV_mlll357->SetBinError(2,0.005962193);
   new_histo_group_WZ_wh3l_Pre_13TeV_mlll357->SetBinError(3,0.00355102);
   new_histo_group_WZ_wh3l_Pre_13TeV_mlll357->SetBinError(4,0.00512768);
   new_histo_group_WZ_wh3l_Pre_13TeV_mlll357->SetBinError(7,0.005488627);
   new_histo_group_WZ_wh3l_Pre_13TeV_mlll357->SetBinError(8,0.004404521);
   new_histo_group_WZ_wh3l_Pre_13TeV_mlll357->SetBinError(10,0.006201025);
   new_histo_group_WZ_wh3l_Pre_13TeV_mlll357->SetBinError(11,0.005154638);
   new_histo_group_WZ_wh3l_Pre_13TeV_mlll357->SetBinError(12,0.007350027);
   new_histo_group_WZ_wh3l_Pre_13TeV_mlll357->SetBinError(13,0.004009541);
   new_histo_group_WZ_wh3l_Pre_13TeV_mlll357->SetBinError(14,0.007575271);
   new_histo_group_WZ_wh3l_Pre_13TeV_mlll357->SetBinError(15,0.00546934);
   new_histo_group_WZ_wh3l_Pre_13TeV_mlll357->SetBinError(16,0.005599787);
   new_histo_group_WZ_wh3l_Pre_13TeV_mlll357->SetBinError(17,0.001741456);
   new_histo_group_WZ_wh3l_Pre_13TeV_mlll357->SetBinError(18,0.005329017);
   new_histo_group_WZ_wh3l_Pre_13TeV_mlll357->SetBinError(20,0.003752464);
   new_histo_group_WZ_wh3l_Pre_13TeV_mlll357->SetBinError(22,0.003668249);
   new_histo_group_WZ_wh3l_Pre_13TeV_mlll357->SetBinError(24,0.006807708);
   new_histo_group_WZ_wh3l_Pre_13TeV_mlll357->SetBinError(25,0.005943022);
   new_histo_group_WZ_wh3l_Pre_13TeV_mlll357->SetBinError(26,0.005893175);
   new_histo_group_WZ_wh3l_Pre_13TeV_mlll357->SetBinError(28,0.008488671);
   new_histo_group_WZ_wh3l_Pre_13TeV_mlll357->SetBinError(29,0.00594491);
   new_histo_group_WZ_wh3l_Pre_13TeV_mlll357->SetBinError(30,0.002697298);
   new_histo_group_WZ_wh3l_Pre_13TeV_mlll357->SetBinError(31,0.003657803);
   new_histo_group_WZ_wh3l_Pre_13TeV_mlll357->SetBinError(34,0.007858435);
   new_histo_group_WZ_wh3l_Pre_13TeV_mlll357->SetBinError(35,0.005719688);
   new_histo_group_WZ_wh3l_Pre_13TeV_mlll357->SetBinError(36,0.004876467);
   new_histo_group_WZ_wh3l_Pre_13TeV_mlll357->SetBinError(37,0.00819322);
   new_histo_group_WZ_wh3l_Pre_13TeV_mlll357->SetBinError(40,0.004000224);
   new_histo_group_WZ_wh3l_Pre_13TeV_mlll357->SetBinError(41,0.07863678);
   new_histo_group_WZ_wh3l_Pre_13TeV_mlll357->SetEntries(305);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_Pre_13TeV_mlll357->SetFillColor(ci);
   new_histo_group_WZ_wh3l_Pre_13TeV_mlll357->SetFillStyle(3001);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_Pre_13TeV_mlll357->SetLineColor(ci);
   new_histo_group_WZ_wh3l_Pre_13TeV_mlll357->GetXaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_Pre_13TeV_mlll357->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_Pre_13TeV_mlll357->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_Pre_13TeV_mlll357->GetXaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_Pre_13TeV_mlll357->GetYaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_Pre_13TeV_mlll357->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_Pre_13TeV_mlll357->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_Pre_13TeV_mlll357->GetYaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_Pre_13TeV_mlll357->GetZaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_Pre_13TeV_mlll357->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_Pre_13TeV_mlll357->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_Pre_13TeV_mlll357->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_Pre_13TeV_mlll->Add(new_histo_group_WZ_wh3l_Pre_13TeV_mlll,"");
   
   TH1D *new_histo_group_Higgs_wh3l_Pre_13TeV_mlll358 = new TH1D("new_histo_group_Higgs_wh3l_Pre_13TeV_mlll358","histo_H_htt",40,80,100);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mlll358->SetBinContent(0,0.06695791);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mlll358->SetBinContent(1,0.001994417);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mlll358->SetBinContent(2,0.002095116);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mlll358->SetBinContent(3,0.000463691);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mlll358->SetBinContent(4,0.0003056084);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mlll358->SetBinContent(5,0.002513205);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mlll358->SetBinContent(6,0.001703943);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mlll358->SetBinContent(7,0.001101106);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mlll358->SetBinContent(8,0.0009028082);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mlll358->SetBinContent(9,0.002146275);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mlll358->SetBinContent(10,0.002795137);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mlll358->SetBinContent(11,0.002438737);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mlll358->SetBinContent(12,0.00431072);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mlll358->SetBinContent(13,0.0007697563);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mlll358->SetBinContent(14,0.00212313);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mlll358->SetBinContent(15,0.000358745);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mlll358->SetBinContent(16,0.002287643);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mlll358->SetBinContent(17,0.0002481864);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mlll358->SetBinContent(18,0.001728631);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mlll358->SetBinContent(19,0.0008739134);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mlll358->SetBinContent(20,0.0004491749);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mlll358->SetBinContent(21,0.002890238);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mlll358->SetBinContent(22,0.002472647);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mlll358->SetBinContent(24,0.004057757);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mlll358->SetBinContent(25,0.0008656334);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mlll358->SetBinContent(26,0.001793908);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mlll358->SetBinContent(27,0.001798686);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mlll358->SetBinContent(28,0.002364883);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mlll358->SetBinContent(29,0.002129303);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mlll358->SetBinContent(30,0.004344714);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mlll358->SetBinContent(31,0.0004266451);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mlll358->SetBinContent(32,0.003994755);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mlll358->SetBinContent(33,0.001757511);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mlll358->SetBinContent(34,0.003216916);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mlll358->SetBinContent(35,0.000910344);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mlll358->SetBinContent(36,0.002578977);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mlll358->SetBinContent(37,0.0004096988);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mlll358->SetBinContent(38,0.003092296);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mlll358->SetBinContent(39,0.002140666);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mlll358->SetBinContent(40,0.001089544);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mlll358->SetBinContent(41,0.3591373);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mlll358->SetBinError(0,0.008549845);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mlll358->SetBinError(1,0.001661993);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mlll358->SetBinError(2,0.001808958);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mlll358->SetBinError(3,0.0003295641);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mlll358->SetBinError(4,0.0001925611);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mlll358->SetBinError(5,0.001717516);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mlll358->SetBinError(6,0.001453326);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mlll358->SetBinError(7,0.0004598965);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mlll358->SetBinError(8,0.0005363849);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mlll358->SetBinError(9,0.001229695);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mlll358->SetBinError(10,0.001901981);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mlll358->SetBinError(11,0.001901895);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mlll358->SetBinError(12,0.002381342);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mlll358->SetBinError(13,0.000459525);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mlll358->SetBinError(14,0.001369872);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mlll358->SetBinError(15,0.0002601799);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mlll358->SetBinError(16,0.001646725);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mlll358->SetBinError(17,0.002108701);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mlll358->SetBinError(18,0.001097277);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mlll358->SetBinError(19,0.0005110948);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mlll358->SetBinError(20,0.0003176741);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mlll358->SetBinError(21,0.001839966);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mlll358->SetBinError(22,0.001217216);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mlll358->SetBinError(24,0.002023612);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mlll358->SetBinError(25,0.0004634044);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mlll358->SetBinError(26,0.001388119);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mlll358->SetBinError(27,0.001405093);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mlll358->SetBinError(28,0.001200704);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mlll358->SetBinError(29,0.001381018);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mlll358->SetBinError(30,0.002359408);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mlll358->SetBinError(31,0.0003867884);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mlll358->SetBinError(32,0.002357333);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mlll358->SetBinError(33,0.001757511);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mlll358->SetBinError(34,0.002009136);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mlll358->SetBinError(35,0.0005256987);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mlll358->SetBinError(36,0.001499181);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mlll358->SetBinError(37,0.0002902012);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mlll358->SetBinError(38,0.002261767);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mlll358->SetBinError(39,0.001757933);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mlll358->SetBinError(40,0.000559258);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mlll358->SetBinError(41,0.01939884);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mlll358->SetEntries(916);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mlll358->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_Pre_13TeV_mlll358->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mlll358->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mlll358->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mlll358->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mlll358->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mlll358->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mlll358->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mlll358->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mlll358->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mlll358->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mlll358->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mlll358->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mlll358->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mlll358->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_Pre_13TeV_mlll->Add(new_histo_group_Higgs_wh3l_Pre_13TeV_mlll,"");
   thsBackground_grouped_wh3l_Pre_13TeV_mlll->Draw("hist same");
   
   thsSignal_grouped_wh3l_Pre_13TeV_mlll = new THStack();
   thsSignal_grouped_wh3l_Pre_13TeV_mlll->SetName("thsSignal_grouped_wh3l_Pre_13TeV_mlll");
   thsSignal_grouped_wh3l_Pre_13TeV_mlll->SetTitle("thsSignal_grouped_wh3l_Pre_13TeV_mlll");
   
   TH1F *thsSignal_grouped_wh3l_Pre_13TeV_mlll_stack_72 = new TH1F("thsSignal_grouped_wh3l_Pre_13TeV_mlll_stack_72","thsSignal_grouped_wh3l_Pre_13TeV_mlll",40,80,100);
   thsSignal_grouped_wh3l_Pre_13TeV_mlll_stack_72->SetMinimum(-0.001860515);
   thsSignal_grouped_wh3l_Pre_13TeV_mlll_stack_72->SetMaximum(0.007039328);
   thsSignal_grouped_wh3l_Pre_13TeV_mlll_stack_72->SetDirectory(0);
   thsSignal_grouped_wh3l_Pre_13TeV_mlll_stack_72->SetStats(0);
   thsSignal_grouped_wh3l_Pre_13TeV_mlll_stack_72->SetLineStyle(0);
   thsSignal_grouped_wh3l_Pre_13TeV_mlll_stack_72->SetMarkerStyle(20);
   thsSignal_grouped_wh3l_Pre_13TeV_mlll_stack_72->GetXaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_Pre_13TeV_mlll_stack_72->GetXaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_Pre_13TeV_mlll_stack_72->GetXaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_Pre_13TeV_mlll_stack_72->GetXaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_Pre_13TeV_mlll_stack_72->GetXaxis()->SetTitleOffset(0.9);
   thsSignal_grouped_wh3l_Pre_13TeV_mlll_stack_72->GetXaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_Pre_13TeV_mlll_stack_72->GetYaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_Pre_13TeV_mlll_stack_72->GetYaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_Pre_13TeV_mlll_stack_72->GetYaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_Pre_13TeV_mlll_stack_72->GetYaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_Pre_13TeV_mlll_stack_72->GetYaxis()->SetTitleOffset(1.25);
   thsSignal_grouped_wh3l_Pre_13TeV_mlll_stack_72->GetYaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_Pre_13TeV_mlll_stack_72->GetZaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_Pre_13TeV_mlll_stack_72->GetZaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_Pre_13TeV_mlll_stack_72->GetZaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_Pre_13TeV_mlll_stack_72->GetZaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_Pre_13TeV_mlll_stack_72->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_Pre_13TeV_mlll->SetHistogram(thsSignal_grouped_wh3l_Pre_13TeV_mlll_stack_72);
   
   
   TH1D *new_histo_group_Higgs_wh3l_Pre_13TeV_mlll359 = new TH1D("new_histo_group_Higgs_wh3l_Pre_13TeV_mlll359","histo_H_htt",40,80,100);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mlll359->SetBinContent(0,0.06695791);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mlll359->SetBinContent(1,0.001994417);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mlll359->SetBinContent(2,0.002095116);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mlll359->SetBinContent(3,0.000463691);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mlll359->SetBinContent(4,0.0003056084);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mlll359->SetBinContent(5,0.002513205);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mlll359->SetBinContent(6,0.001703943);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mlll359->SetBinContent(7,0.001101106);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mlll359->SetBinContent(8,0.0009028082);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mlll359->SetBinContent(9,0.002146275);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mlll359->SetBinContent(10,0.002795137);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mlll359->SetBinContent(11,0.002438737);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mlll359->SetBinContent(12,0.00431072);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mlll359->SetBinContent(13,0.0007697563);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mlll359->SetBinContent(14,0.00212313);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mlll359->SetBinContent(15,0.000358745);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mlll359->SetBinContent(16,0.002287643);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mlll359->SetBinContent(17,0.0002481864);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mlll359->SetBinContent(18,0.001728631);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mlll359->SetBinContent(19,0.0008739134);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mlll359->SetBinContent(20,0.0004491749);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mlll359->SetBinContent(21,0.002890238);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mlll359->SetBinContent(22,0.002472647);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mlll359->SetBinContent(24,0.004057757);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mlll359->SetBinContent(25,0.0008656334);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mlll359->SetBinContent(26,0.001793908);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mlll359->SetBinContent(27,0.001798686);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mlll359->SetBinContent(28,0.002364883);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mlll359->SetBinContent(29,0.002129303);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mlll359->SetBinContent(30,0.004344714);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mlll359->SetBinContent(31,0.0004266451);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mlll359->SetBinContent(32,0.003994755);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mlll359->SetBinContent(33,0.001757511);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mlll359->SetBinContent(34,0.003216916);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mlll359->SetBinContent(35,0.000910344);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mlll359->SetBinContent(36,0.002578977);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mlll359->SetBinContent(37,0.0004096988);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mlll359->SetBinContent(38,0.003092296);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mlll359->SetBinContent(39,0.002140666);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mlll359->SetBinContent(40,0.001089544);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mlll359->SetBinContent(41,0.3591373);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mlll359->SetBinError(0,0.008549845);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mlll359->SetBinError(1,0.001661993);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mlll359->SetBinError(2,0.001808958);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mlll359->SetBinError(3,0.0003295641);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mlll359->SetBinError(4,0.0001925611);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mlll359->SetBinError(5,0.001717516);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mlll359->SetBinError(6,0.001453326);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mlll359->SetBinError(7,0.0004598965);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mlll359->SetBinError(8,0.0005363849);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mlll359->SetBinError(9,0.001229695);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mlll359->SetBinError(10,0.001901981);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mlll359->SetBinError(11,0.001901895);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mlll359->SetBinError(12,0.002381342);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mlll359->SetBinError(13,0.000459525);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mlll359->SetBinError(14,0.001369872);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mlll359->SetBinError(15,0.0002601799);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mlll359->SetBinError(16,0.001646725);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mlll359->SetBinError(17,0.002108701);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mlll359->SetBinError(18,0.001097277);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mlll359->SetBinError(19,0.0005110948);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mlll359->SetBinError(20,0.0003176741);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mlll359->SetBinError(21,0.001839966);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mlll359->SetBinError(22,0.001217216);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mlll359->SetBinError(24,0.002023612);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mlll359->SetBinError(25,0.0004634044);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mlll359->SetBinError(26,0.001388119);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mlll359->SetBinError(27,0.001405093);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mlll359->SetBinError(28,0.001200704);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mlll359->SetBinError(29,0.001381018);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mlll359->SetBinError(30,0.002359408);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mlll359->SetBinError(31,0.0003867884);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mlll359->SetBinError(32,0.002357333);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mlll359->SetBinError(33,0.001757511);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mlll359->SetBinError(34,0.002009136);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mlll359->SetBinError(35,0.0005256987);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mlll359->SetBinError(36,0.001499181);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mlll359->SetBinError(37,0.0002902012);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mlll359->SetBinError(38,0.002261767);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mlll359->SetBinError(39,0.001757933);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mlll359->SetBinError(40,0.000559258);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mlll359->SetBinError(41,0.01939884);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mlll359->SetEntries(916);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mlll359->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_Pre_13TeV_mlll359->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mlll359->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mlll359->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mlll359->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mlll359->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mlll359->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mlll359->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mlll359->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mlll359->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mlll359->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mlll359->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mlll359->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mlll359->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_Pre_13TeV_mlll359->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_Pre_13TeV_mlll->Add(new_histo_group_Higgs_wh3l_Pre_13TeV_mlll,"");
   thsSignal_grouped_wh3l_Pre_13TeV_mlll->Draw("hist same noclear");
   
   Double_t _fx3071[40] = {
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
   Double_t _fy3071[40] = {
   -0.1276462,
   0.08346272,
   0.005661615,
   0.0009810944,
   0,
   0.07555473,
   0.005488627,
   0.523623,
   0.0875363,
   0.008849978,
   0.08074405,
   0.02505038,
   0.5135171,
   0.01070981,
   0.008428423,
   0.005599787,
   -0.01793219,
   0.005329018,
   0.001552237,
   0.004637908,
   -0.1094371,
   0.4072749,
   0,
   0.008652606,
   0.4400331,
   0.1232807,
   0.03984332,
   0.01199452,
   0.00594491,
   0.002697298,
   -0.00116056,
   0,
   0,
   0.01107202,
   -0.03198467,
   0.004876467,
   0.02681141,
   0,
   0.442458,
   0.005149407};
   Double_t _felx3071[40] = {
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
   Double_t _fely3071[40] = {
   0.1279747,
   0.08767501,
   0.006050412,
   0.01132571,
   0,
   0.0800488,
   0.005504885,
   0.5527051,
   0.09274305,
   0.008443678,
   0.0793255,
   0.02261017,
   0.5435997,
   0.007586387,
   0.008936495,
   0.005600638,
   0.257173,
   0.005329929,
   0.002197092,
   0.003752982,
   0.1159466,
   0.4363452,
   0,
   0.006842465,
   0.4655237,
   0.09942371,
   0.03986598,
   0.008502865,
   0.005965915,
   0.002697492,
   0.01284662,
   0,
   0,
   0.007931099,
   0.04538501,
   0.004877191,
   0.02354991,
   0,
   0.3848819,
   0.004826065};
   Double_t _fehx3071[40] = {
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
   Double_t _fehy3071[40] = {
   0.1279719,
   0.1193507,
   0.006049727,
   0.01132413,
   0,
   0.0800488,
   0.005490238,
   0.552705,
   0.09274305,
   0.008443625,
   0.07932556,
   0.02260622,
   0.5844752,
   0.007587303,
   0.008935411,
   0.005600655,
   0.2571746,
   0.005329928,
   0.002197264,
   0.003752986,
   0.1159466,
   0.4363452,
   0,
   0.006843402,
   0.4655237,
   0.09942369,
   0.03986609,
   0.008503046,
   0.005956679,
   0.002697492,
   0.01284643,
   0,
   0,
   0.007936968,
   0.04538501,
   0.004877078,
   0.02354961,
   0,
   0.3848819,
   0.004831984};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(40,_fx3071,_fy3071,_felx3071,_fehx3071,_fely3071,_fehy3071);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(12);
   grae->SetFillStyle(3004);
   grae->SetLineColor(12);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3071 = new TH1F("Graph_Graph3071","",100,78,102);
   Graph_Graph3071->SetMinimum(-0.412415);
   Graph_Graph3071->SetMaximum(1.235302);
   Graph_Graph3071->SetDirectory(0);
   Graph_Graph3071->SetStats(0);
   Graph_Graph3071->SetLineStyle(0);
   Graph_Graph3071->SetMarkerStyle(20);
   Graph_Graph3071->GetXaxis()->SetLabelFont(42);
   Graph_Graph3071->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3071->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3071->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3071->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3071->GetXaxis()->SetTitleFont(42);
   Graph_Graph3071->GetYaxis()->SetLabelFont(42);
   Graph_Graph3071->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3071->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3071->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3071->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3071->GetYaxis()->SetTitleFont(42);
   Graph_Graph3071->GetZaxis()->SetLabelFont(42);
   Graph_Graph3071->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3071->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3071->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3071->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3071);
   
   grae->Draw("2");
   
   Double_t _fx3072[40] = {
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
   Double_t _fy3072[40] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   0,
   0,
   0};
   Double_t _felx3072[40] = {
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
   Double_t _fely3072[40] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   0,
   0,
   0};
   Double_t _fehx3072[40] = {
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
   Double_t _fehy3072[40] = {
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
   1.147908,
   1.147908,
   1.147908};
   grae = new TGraphAsymmErrors(40,_fx3072,_fy3072,_felx3072,_fehx3072,_fely3072,_fehy3072);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(1);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3072 = new TH1F("Graph_Graph3072","",100,78,102);
   Graph_Graph3072->SetMinimum(0);
   Graph_Graph3072->SetMaximum(3.629527);
   Graph_Graph3072->SetDirectory(0);
   Graph_Graph3072->SetStats(0);
   Graph_Graph3072->SetLineStyle(0);
   Graph_Graph3072->SetMarkerStyle(20);
   Graph_Graph3072->GetXaxis()->SetLabelFont(42);
   Graph_Graph3072->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3072->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3072->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3072->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3072->GetXaxis()->SetTitleFont(42);
   Graph_Graph3072->GetYaxis()->SetLabelFont(42);
   Graph_Graph3072->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3072->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3072->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3072->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3072->GetYaxis()->SetTitleFont(42);
   Graph_Graph3072->GetZaxis()->SetLabelFont(42);
   Graph_Graph3072->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3072->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3072->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3072->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3072);
   
   grae->Draw("p0");
   
   TLegend *leg = new TLegend(0.2,0.7,0.8,0.9,NULL,"brNDC");
   leg->SetTextFont(62);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("new_histo_group_Fake_wh3l_Pre_13TeV_mlll","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_Pre_13TeV_mlll","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_Pre_13TeV_mlll","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_Pre_13TeV_mlll","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_Pre_13TeV_mlll","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_Pre_13TeV_mlll","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_Pre_13TeV_mlll","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_Pre_13TeV_mlll","Data","EPL");
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
   entry=leg->AddEntry("new_histo_group_Fake_wh3l_Pre_13TeV_mlll","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_Pre_13TeV_mlll","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_Pre_13TeV_mlll","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_Pre_13TeV_mlll","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_Pre_13TeV_mlll","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_Pre_13TeV_mlll","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_Pre_13TeV_mlll","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_Pre_13TeV_mlll","Data","EPL");
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
   
   TH1F *hframe_copy360 = new TH1F("hframe_copy360","",1000,80,100);
   hframe_copy360->SetMinimum(0);
   hframe_copy360->SetMaximum(5);
   hframe_copy360->SetDirectory(0);
   hframe_copy360->SetStats(0);
   hframe_copy360->SetLineStyle(0);
   hframe_copy360->SetMarkerStyle(20);
   hframe_copy360->GetXaxis()->SetTitle("m_{lll} [GeV]");
   hframe_copy360->GetXaxis()->SetNdivisions(506);
   hframe_copy360->GetXaxis()->SetLabelFont(42);
   hframe_copy360->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy360->GetXaxis()->SetLabelSize(0.05);
   hframe_copy360->GetXaxis()->SetTitleSize(0.06);
   hframe_copy360->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy360->GetXaxis()->SetTitleFont(42);
   hframe_copy360->GetYaxis()->SetTitle("Events");
   hframe_copy360->GetYaxis()->SetLabelFont(42);
   hframe_copy360->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy360->GetYaxis()->SetLabelSize(0.05);
   hframe_copy360->GetYaxis()->SetTitleSize(0.06);
   hframe_copy360->GetYaxis()->SetTitleOffset(1.25);
   hframe_copy360->GetYaxis()->SetTitleFont(42);
   hframe_copy360->GetZaxis()->SetLabelFont(42);
   hframe_copy360->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy360->GetZaxis()->SetLabelSize(0.05);
   hframe_copy360->GetZaxis()->SetTitleSize(0.06);
   hframe_copy360->GetZaxis()->SetTitleFont(42);
   hframe_copy360->Draw("sameaxis");
   ccwh3l_Pre_13TeV_mlll->Modified();
   ccwh3l_Pre_13TeV_mlll->cd();
   ccwh3l_Pre_13TeV_mlll->SetSelected(ccwh3l_Pre_13TeV_mlll);
}
