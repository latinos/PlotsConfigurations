void c_wh3l_top_13TeV_mllmin3l()
{
//=========Macro generated from canvas: ccwh3l_top_13TeV_mllmin3l/cc
//=========  (Sat Jul  2 20:39:41 2016) by ROOT version6.02/13
   TCanvas *ccwh3l_top_13TeV_mllmin3l = new TCanvas("ccwh3l_top_13TeV_mllmin3l", "cc",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   ccwh3l_top_13TeV_mllmin3l->SetHighLightColor(2);
   ccwh3l_top_13TeV_mllmin3l->Range(-28,-4.756097,209.5,31.82927);
   ccwh3l_top_13TeV_mllmin3l->SetFillColor(0);
   ccwh3l_top_13TeV_mllmin3l->SetBorderMode(0);
   ccwh3l_top_13TeV_mllmin3l->SetBorderSize(2);
   ccwh3l_top_13TeV_mllmin3l->SetTickx(1);
   ccwh3l_top_13TeV_mllmin3l->SetTicky(1);
   ccwh3l_top_13TeV_mllmin3l->SetLeftMargin(0.16);
   ccwh3l_top_13TeV_mllmin3l->SetRightMargin(0.04);
   ccwh3l_top_13TeV_mllmin3l->SetTopMargin(0.05);
   ccwh3l_top_13TeV_mllmin3l->SetBottomMargin(0.13);
   ccwh3l_top_13TeV_mllmin3l->SetFrameFillStyle(0);
   ccwh3l_top_13TeV_mllmin3l->SetFrameBorderMode(0);
   ccwh3l_top_13TeV_mllmin3l->SetFrameFillStyle(0);
   ccwh3l_top_13TeV_mllmin3l->SetFrameBorderMode(0);
   
   TH1F *hframe109 = new TH1F("hframe109","",1000,10,200);
   hframe109->SetMinimum(0);
   hframe109->SetMaximum(30);
   hframe109->SetDirectory(0);
   hframe109->SetStats(0);
   hframe109->SetLineStyle(0);
   hframe109->SetMarkerStyle(20);
   hframe109->GetXaxis()->SetTitle("min m_{ll} [GeV]");
   hframe109->GetXaxis()->SetNdivisions(506);
   hframe109->GetXaxis()->SetLabelFont(42);
   hframe109->GetXaxis()->SetLabelOffset(0.007);
   hframe109->GetXaxis()->SetLabelSize(0.05);
   hframe109->GetXaxis()->SetTitleSize(0.06);
   hframe109->GetXaxis()->SetTitleOffset(0.9);
   hframe109->GetXaxis()->SetTitleFont(42);
   hframe109->GetYaxis()->SetTitle("Events");
   hframe109->GetYaxis()->SetLabelFont(42);
   hframe109->GetYaxis()->SetLabelOffset(0.007);
   hframe109->GetYaxis()->SetLabelSize(0.05);
   hframe109->GetYaxis()->SetTitleSize(0.06);
   hframe109->GetYaxis()->SetTitleOffset(1.25);
   hframe109->GetYaxis()->SetTitleFont(42);
   hframe109->GetZaxis()->SetLabelFont(42);
   hframe109->GetZaxis()->SetLabelOffset(0.007);
   hframe109->GetZaxis()->SetLabelSize(0.05);
   hframe109->GetZaxis()->SetTitleSize(0.06);
   hframe109->GetZaxis()->SetTitleFont(42);
   hframe109->Draw(" ");
   
   THStack *thsBackground_grouped_wh3l_top_13TeV_mllmin3l = new THStack();
   thsBackground_grouped_wh3l_top_13TeV_mllmin3l->SetName("thsBackground_grouped_wh3l_top_13TeV_mllmin3l");
   thsBackground_grouped_wh3l_top_13TeV_mllmin3l->SetTitle("thsBackground_grouped_wh3l_top_13TeV_mllmin3l");
   
   TH1F *thsBackground_grouped_wh3l_top_13TeV_mllmin3l_stack_25 = new TH1F("thsBackground_grouped_wh3l_top_13TeV_mllmin3l_stack_25","thsBackground_grouped_wh3l_top_13TeV_mllmin3l",20,10,200);
   thsBackground_grouped_wh3l_top_13TeV_mllmin3l_stack_25->SetMinimum(-0.2136305);
   thsBackground_grouped_wh3l_top_13TeV_mllmin3l_stack_25->SetMaximum(9.724478);
   thsBackground_grouped_wh3l_top_13TeV_mllmin3l_stack_25->SetDirectory(0);
   thsBackground_grouped_wh3l_top_13TeV_mllmin3l_stack_25->SetStats(0);
   thsBackground_grouped_wh3l_top_13TeV_mllmin3l_stack_25->SetLineStyle(0);
   thsBackground_grouped_wh3l_top_13TeV_mllmin3l_stack_25->SetMarkerStyle(20);
   thsBackground_grouped_wh3l_top_13TeV_mllmin3l_stack_25->GetXaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_top_13TeV_mllmin3l_stack_25->GetXaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_top_13TeV_mllmin3l_stack_25->GetXaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_top_13TeV_mllmin3l_stack_25->GetXaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_top_13TeV_mllmin3l_stack_25->GetXaxis()->SetTitleOffset(0.9);
   thsBackground_grouped_wh3l_top_13TeV_mllmin3l_stack_25->GetXaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_top_13TeV_mllmin3l_stack_25->GetYaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_top_13TeV_mllmin3l_stack_25->GetYaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_top_13TeV_mllmin3l_stack_25->GetYaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_top_13TeV_mllmin3l_stack_25->GetYaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_top_13TeV_mllmin3l_stack_25->GetYaxis()->SetTitleOffset(1.25);
   thsBackground_grouped_wh3l_top_13TeV_mllmin3l_stack_25->GetYaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_top_13TeV_mllmin3l_stack_25->GetZaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_top_13TeV_mllmin3l_stack_25->GetZaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_top_13TeV_mllmin3l_stack_25->GetZaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_top_13TeV_mllmin3l_stack_25->GetZaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_top_13TeV_mllmin3l_stack_25->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_top_13TeV_mllmin3l->SetHistogram(thsBackground_grouped_wh3l_top_13TeV_mllmin3l_stack_25);
   
   
   TH1D *new_histo_group_Fake_wh3l_top_13TeV_mllmin3l110 = new TH1D("new_histo_group_Fake_wh3l_top_13TeV_mllmin3l110","histo_Fake",20,10,200);
   new_histo_group_Fake_wh3l_top_13TeV_mllmin3l110->SetBinContent(1,1.744435);
   new_histo_group_Fake_wh3l_top_13TeV_mllmin3l110->SetBinContent(2,4.360227);
   new_histo_group_Fake_wh3l_top_13TeV_mllmin3l110->SetBinContent(3,7.163975);
   new_histo_group_Fake_wh3l_top_13TeV_mllmin3l110->SetBinContent(4,6.782456);
   new_histo_group_Fake_wh3l_top_13TeV_mllmin3l110->SetBinContent(5,4.500451);
   new_histo_group_Fake_wh3l_top_13TeV_mllmin3l110->SetBinContent(6,6.101518);
   new_histo_group_Fake_wh3l_top_13TeV_mllmin3l110->SetBinContent(7,0.8142849);
   new_histo_group_Fake_wh3l_top_13TeV_mllmin3l110->SetBinContent(8,1.253309);
   new_histo_group_Fake_wh3l_top_13TeV_mllmin3l110->SetBinContent(9,1.78065);
   new_histo_group_Fake_wh3l_top_13TeV_mllmin3l110->SetBinContent(10,0.06221746);
   new_histo_group_Fake_wh3l_top_13TeV_mllmin3l110->SetBinContent(11,0.6729458);
   new_histo_group_Fake_wh3l_top_13TeV_mllmin3l110->SetBinContent(12,0.8881438);
   new_histo_group_Fake_wh3l_top_13TeV_mllmin3l110->SetBinContent(13,0.4430658);
   new_histo_group_Fake_wh3l_top_13TeV_mllmin3l110->SetBinContent(14,0.1271613);
   new_histo_group_Fake_wh3l_top_13TeV_mllmin3l110->SetBinContent(15,0.04210121);
   new_histo_group_Fake_wh3l_top_13TeV_mllmin3l110->SetBinContent(16,0.7622859);
   new_histo_group_Fake_wh3l_top_13TeV_mllmin3l110->SetBinContent(17,-0.01875976);
   new_histo_group_Fake_wh3l_top_13TeV_mllmin3l110->SetBinContent(18,0.07077175);
   new_histo_group_Fake_wh3l_top_13TeV_mllmin3l110->SetBinContent(19,0.0532403);
   new_histo_group_Fake_wh3l_top_13TeV_mllmin3l110->SetBinContent(20,0.07030044);
   new_histo_group_Fake_wh3l_top_13TeV_mllmin3l110->SetBinContent(21,0.01904956);
   new_histo_group_Fake_wh3l_top_13TeV_mllmin3l110->SetBinError(1,1.122916);
   new_histo_group_Fake_wh3l_top_13TeV_mllmin3l110->SetBinError(2,1.71623);
   new_histo_group_Fake_wh3l_top_13TeV_mllmin3l110->SetBinError(3,2.097432);
   new_histo_group_Fake_wh3l_top_13TeV_mllmin3l110->SetBinError(4,1.832843);
   new_histo_group_Fake_wh3l_top_13TeV_mllmin3l110->SetBinError(5,1.589384);
   new_histo_group_Fake_wh3l_top_13TeV_mllmin3l110->SetBinError(6,1.696765);
   new_histo_group_Fake_wh3l_top_13TeV_mllmin3l110->SetBinError(7,0.4879938);
   new_histo_group_Fake_wh3l_top_13TeV_mllmin3l110->SetBinError(8,0.6830737);
   new_histo_group_Fake_wh3l_top_13TeV_mllmin3l110->SetBinError(9,0.8856961);
   new_histo_group_Fake_wh3l_top_13TeV_mllmin3l110->SetBinError(10,0.2665608);
   new_histo_group_Fake_wh3l_top_13TeV_mllmin3l110->SetBinError(11,0.4768716);
   new_histo_group_Fake_wh3l_top_13TeV_mllmin3l110->SetBinError(12,0.5161626);
   new_histo_group_Fake_wh3l_top_13TeV_mllmin3l110->SetBinError(13,0.2221485);
   new_histo_group_Fake_wh3l_top_13TeV_mllmin3l110->SetBinError(14,0.1066825);
   new_histo_group_Fake_wh3l_top_13TeV_mllmin3l110->SetBinError(15,0.0746399);
   new_histo_group_Fake_wh3l_top_13TeV_mllmin3l110->SetBinError(16,0.6019507);
   new_histo_group_Fake_wh3l_top_13TeV_mllmin3l110->SetBinError(17,0.01875976);
   new_histo_group_Fake_wh3l_top_13TeV_mllmin3l110->SetBinError(18,0.07077175);
   new_histo_group_Fake_wh3l_top_13TeV_mllmin3l110->SetBinError(19,0.07176275);
   new_histo_group_Fake_wh3l_top_13TeV_mllmin3l110->SetBinError(20,0.07030044);
   new_histo_group_Fake_wh3l_top_13TeV_mllmin3l110->SetBinError(21,0.08512631);
   new_histo_group_Fake_wh3l_top_13TeV_mllmin3l110->SetEntries(317);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_top_13TeV_mllmin3l110->SetFillColor(ci);
   new_histo_group_Fake_wh3l_top_13TeV_mllmin3l110->SetFillStyle(3001);

   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_top_13TeV_mllmin3l110->SetLineColor(ci);
   new_histo_group_Fake_wh3l_top_13TeV_mllmin3l110->GetXaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_top_13TeV_mllmin3l110->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_top_13TeV_mllmin3l110->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_top_13TeV_mllmin3l110->GetXaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_top_13TeV_mllmin3l110->GetYaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_top_13TeV_mllmin3l110->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_top_13TeV_mllmin3l110->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_top_13TeV_mllmin3l110->GetYaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_top_13TeV_mllmin3l110->GetZaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_top_13TeV_mllmin3l110->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_top_13TeV_mllmin3l110->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_top_13TeV_mllmin3l110->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_top_13TeV_mllmin3l->Add(new_histo_group_Fake_wh3l_top_13TeV_mllmin3l,"");
   
   TH1D *new_histo_group_WW_wh3l_top_13TeV_mllmin3l111 = new TH1D("new_histo_group_WW_wh3l_top_13TeV_mllmin3l111","histo_WW",20,10,200);
   new_histo_group_WW_wh3l_top_13TeV_mllmin3l111->SetBinContent(1,0.004448378);
   new_histo_group_WW_wh3l_top_13TeV_mllmin3l111->SetBinContent(2,0.03488018);
   new_histo_group_WW_wh3l_top_13TeV_mllmin3l111->SetBinContent(4,0.01821101);
   new_histo_group_WW_wh3l_top_13TeV_mllmin3l111->SetBinContent(6,0.01595104);
   new_histo_group_WW_wh3l_top_13TeV_mllmin3l111->SetBinContent(7,0.01546857);
   new_histo_group_WW_wh3l_top_13TeV_mllmin3l111->SetBinContent(13,0.03054333);
   new_histo_group_WW_wh3l_top_13TeV_mllmin3l111->SetBinContent(14,0.0322348);
   new_histo_group_WW_wh3l_top_13TeV_mllmin3l111->SetBinContent(15,0.01632439);
   new_histo_group_WW_wh3l_top_13TeV_mllmin3l111->SetBinError(1,0.004448378);
   new_histo_group_WW_wh3l_top_13TeV_mllmin3l111->SetBinError(2,0.02485137);
   new_histo_group_WW_wh3l_top_13TeV_mllmin3l111->SetBinError(4,0.01821101);
   new_histo_group_WW_wh3l_top_13TeV_mllmin3l111->SetBinError(6,0.01595104);
   new_histo_group_WW_wh3l_top_13TeV_mllmin3l111->SetBinError(7,0.01546857);
   new_histo_group_WW_wh3l_top_13TeV_mllmin3l111->SetBinError(13,0.02182423);
   new_histo_group_WW_wh3l_top_13TeV_mllmin3l111->SetBinError(14,0.02289186);
   new_histo_group_WW_wh3l_top_13TeV_mllmin3l111->SetBinError(15,0.01632439);
   new_histo_group_WW_wh3l_top_13TeV_mllmin3l111->SetEntries(11);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_top_13TeV_mllmin3l111->SetFillColor(ci);
   new_histo_group_WW_wh3l_top_13TeV_mllmin3l111->SetFillStyle(3001);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_top_13TeV_mllmin3l111->SetLineColor(ci);
   new_histo_group_WW_wh3l_top_13TeV_mllmin3l111->GetXaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_top_13TeV_mllmin3l111->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_top_13TeV_mllmin3l111->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_top_13TeV_mllmin3l111->GetXaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_top_13TeV_mllmin3l111->GetYaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_top_13TeV_mllmin3l111->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_top_13TeV_mllmin3l111->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_top_13TeV_mllmin3l111->GetYaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_top_13TeV_mllmin3l111->GetZaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_top_13TeV_mllmin3l111->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_top_13TeV_mllmin3l111->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_top_13TeV_mllmin3l111->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_top_13TeV_mllmin3l->Add(new_histo_group_WW_wh3l_top_13TeV_mllmin3l,"");
   
   TH1D *new_histo_group_Vg_wh3l_top_13TeV_mllmin3l112 = new TH1D("new_histo_group_Vg_wh3l_top_13TeV_mllmin3l112","histo_Vg",20,10,200);
   new_histo_group_Vg_wh3l_top_13TeV_mllmin3l112->SetBinContent(1,0.111747);
   new_histo_group_Vg_wh3l_top_13TeV_mllmin3l112->SetBinContent(2,0.01895312);
   new_histo_group_Vg_wh3l_top_13TeV_mllmin3l112->SetBinContent(3,0.1852171);
   new_histo_group_Vg_wh3l_top_13TeV_mllmin3l112->SetBinContent(4,0.4842011);
   new_histo_group_Vg_wh3l_top_13TeV_mllmin3l112->SetBinContent(5,0.4044837);
   new_histo_group_Vg_wh3l_top_13TeV_mllmin3l112->SetBinContent(6,-0.09177828);
   new_histo_group_Vg_wh3l_top_13TeV_mllmin3l112->SetBinContent(12,0.1819414);
   new_histo_group_Vg_wh3l_top_13TeV_mllmin3l112->SetBinContent(13,0.09785095);
   new_histo_group_Vg_wh3l_top_13TeV_mllmin3l112->SetBinError(1,0.111747);
   new_histo_group_Vg_wh3l_top_13TeV_mllmin3l112->SetBinError(2,0.1858965);
   new_histo_group_Vg_wh3l_top_13TeV_mllmin3l112->SetBinError(3,0.1557859);
   new_histo_group_Vg_wh3l_top_13TeV_mllmin3l112->SetBinError(4,0.2330237);
   new_histo_group_Vg_wh3l_top_13TeV_mllmin3l112->SetBinError(5,0.1936897);
   new_histo_group_Vg_wh3l_top_13TeV_mllmin3l112->SetBinError(6,0.1218522);
   new_histo_group_Vg_wh3l_top_13TeV_mllmin3l112->SetBinError(12,0.1332888);
   new_histo_group_Vg_wh3l_top_13TeV_mllmin3l112->SetBinError(13,0.09785095);
   new_histo_group_Vg_wh3l_top_13TeV_mllmin3l112->SetEntries(25);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_top_13TeV_mllmin3l112->SetFillColor(ci);
   new_histo_group_Vg_wh3l_top_13TeV_mllmin3l112->SetFillStyle(3001);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_top_13TeV_mllmin3l112->SetLineColor(ci);
   new_histo_group_Vg_wh3l_top_13TeV_mllmin3l112->GetXaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_top_13TeV_mllmin3l112->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_top_13TeV_mllmin3l112->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_top_13TeV_mllmin3l112->GetXaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_top_13TeV_mllmin3l112->GetYaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_top_13TeV_mllmin3l112->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_top_13TeV_mllmin3l112->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_top_13TeV_mllmin3l112->GetYaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_top_13TeV_mllmin3l112->GetZaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_top_13TeV_mllmin3l112->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_top_13TeV_mllmin3l112->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_top_13TeV_mllmin3l112->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_top_13TeV_mllmin3l->Add(new_histo_group_Vg_wh3l_top_13TeV_mllmin3l,"");
   
   TH1D *new_histo_group_ZZ_wh3l_top_13TeV_mllmin3l113 = new TH1D("new_histo_group_ZZ_wh3l_top_13TeV_mllmin3l113","histo_ZZ",20,10,200);
   new_histo_group_ZZ_wh3l_top_13TeV_mllmin3l113->SetBinContent(1,0.09214541);
   new_histo_group_ZZ_wh3l_top_13TeV_mllmin3l113->SetBinContent(2,0.06125498);
   new_histo_group_ZZ_wh3l_top_13TeV_mllmin3l113->SetBinContent(3,0.08998948);
   new_histo_group_ZZ_wh3l_top_13TeV_mllmin3l113->SetBinContent(4,0.08679924);
   new_histo_group_ZZ_wh3l_top_13TeV_mllmin3l113->SetBinContent(5,0.1050518);
   new_histo_group_ZZ_wh3l_top_13TeV_mllmin3l113->SetBinContent(6,0.066695);
   new_histo_group_ZZ_wh3l_top_13TeV_mllmin3l113->SetBinContent(9,0.04332647);
   new_histo_group_ZZ_wh3l_top_13TeV_mllmin3l113->SetBinContent(12,0.0476643);
   new_histo_group_ZZ_wh3l_top_13TeV_mllmin3l113->SetBinContent(13,0.04545766);
   new_histo_group_ZZ_wh3l_top_13TeV_mllmin3l113->SetBinContent(21,0.04204432);
   new_histo_group_ZZ_wh3l_top_13TeV_mllmin3l113->SetBinError(1,0.06548722);
   new_histo_group_ZZ_wh3l_top_13TeV_mllmin3l113->SetBinError(2,0.0375437);
   new_histo_group_ZZ_wh3l_top_13TeV_mllmin3l113->SetBinError(3,0.06434838);
   new_histo_group_ZZ_wh3l_top_13TeV_mllmin3l113->SetBinError(4,0.06138467);
   new_histo_group_ZZ_wh3l_top_13TeV_mllmin3l113->SetBinError(5,0.06639606);
   new_histo_group_ZZ_wh3l_top_13TeV_mllmin3l113->SetBinError(6,0.05056569);
   new_histo_group_ZZ_wh3l_top_13TeV_mllmin3l113->SetBinError(9,0.04332647);
   new_histo_group_ZZ_wh3l_top_13TeV_mllmin3l113->SetBinError(12,0.0476643);
   new_histo_group_ZZ_wh3l_top_13TeV_mllmin3l113->SetBinError(13,0.04545766);
   new_histo_group_ZZ_wh3l_top_13TeV_mllmin3l113->SetBinError(21,0.04204432);
   new_histo_group_ZZ_wh3l_top_13TeV_mllmin3l113->SetEntries(18);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_top_13TeV_mllmin3l113->SetFillColor(ci);
   new_histo_group_ZZ_wh3l_top_13TeV_mllmin3l113->SetFillStyle(3001);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_top_13TeV_mllmin3l113->SetLineColor(ci);
   new_histo_group_ZZ_wh3l_top_13TeV_mllmin3l113->GetXaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_top_13TeV_mllmin3l113->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_top_13TeV_mllmin3l113->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_top_13TeV_mllmin3l113->GetXaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_top_13TeV_mllmin3l113->GetYaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_top_13TeV_mllmin3l113->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_top_13TeV_mllmin3l113->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_top_13TeV_mllmin3l113->GetYaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_top_13TeV_mllmin3l113->GetZaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_top_13TeV_mllmin3l113->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_top_13TeV_mllmin3l113->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_top_13TeV_mllmin3l113->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_top_13TeV_mllmin3l->Add(new_histo_group_ZZ_wh3l_top_13TeV_mllmin3l,"");
   
   TH1D *new_histo_group_WZ_wh3l_top_13TeV_mllmin3l114 = new TH1D("new_histo_group_WZ_wh3l_top_13TeV_mllmin3l114","histo_WZ",20,10,200);
   new_histo_group_WZ_wh3l_top_13TeV_mllmin3l114->SetBinContent(1,1.353596);
   new_histo_group_WZ_wh3l_top_13TeV_mllmin3l114->SetBinContent(2,1.428959);
   new_histo_group_WZ_wh3l_top_13TeV_mllmin3l114->SetBinContent(3,1.337983);
   new_histo_group_WZ_wh3l_top_13TeV_mllmin3l114->SetBinContent(4,1.224233);
   new_histo_group_WZ_wh3l_top_13TeV_mllmin3l114->SetBinContent(5,0.8545084);
   new_histo_group_WZ_wh3l_top_13TeV_mllmin3l114->SetBinContent(6,0.5947985);
   new_histo_group_WZ_wh3l_top_13TeV_mllmin3l114->SetBinContent(7,0.0938064);
   new_histo_group_WZ_wh3l_top_13TeV_mllmin3l114->SetBinContent(8,0.1035013);
   new_histo_group_WZ_wh3l_top_13TeV_mllmin3l114->SetBinContent(9,0.06891891);
   new_histo_group_WZ_wh3l_top_13TeV_mllmin3l114->SetBinContent(10,0.06255002);
   new_histo_group_WZ_wh3l_top_13TeV_mllmin3l114->SetBinContent(11,0.09471119);
   new_histo_group_WZ_wh3l_top_13TeV_mllmin3l114->SetBinContent(12,0.3426939);
   new_histo_group_WZ_wh3l_top_13TeV_mllmin3l114->SetBinContent(13,0.3105168);
   new_histo_group_WZ_wh3l_top_13TeV_mllmin3l114->SetBinContent(14,0.1508208);
   new_histo_group_WZ_wh3l_top_13TeV_mllmin3l114->SetBinContent(15,0.1374644);
   new_histo_group_WZ_wh3l_top_13TeV_mllmin3l114->SetBinContent(16,0.1158106);
   new_histo_group_WZ_wh3l_top_13TeV_mllmin3l114->SetBinContent(17,0.09648674);
   new_histo_group_WZ_wh3l_top_13TeV_mllmin3l114->SetBinContent(18,0.05258741);
   new_histo_group_WZ_wh3l_top_13TeV_mllmin3l114->SetBinContent(19,0.0601822);
   new_histo_group_WZ_wh3l_top_13TeV_mllmin3l114->SetBinContent(20,0.05115667);
   new_histo_group_WZ_wh3l_top_13TeV_mllmin3l114->SetBinContent(21,0.3325781);
   new_histo_group_WZ_wh3l_top_13TeV_mllmin3l114->SetBinError(1,0.08501058);
   new_histo_group_WZ_wh3l_top_13TeV_mllmin3l114->SetBinError(2,0.0876384);
   new_histo_group_WZ_wh3l_top_13TeV_mllmin3l114->SetBinError(3,0.0855769);
   new_histo_group_WZ_wh3l_top_13TeV_mllmin3l114->SetBinError(4,0.08304499);
   new_histo_group_WZ_wh3l_top_13TeV_mllmin3l114->SetBinError(5,0.06887903);
   new_histo_group_WZ_wh3l_top_13TeV_mllmin3l114->SetBinError(6,0.05664785);
   new_histo_group_WZ_wh3l_top_13TeV_mllmin3l114->SetBinError(7,0.02234337);
   new_histo_group_WZ_wh3l_top_13TeV_mllmin3l114->SetBinError(8,0.02402321);
   new_histo_group_WZ_wh3l_top_13TeV_mllmin3l114->SetBinError(9,0.01967915);
   new_histo_group_WZ_wh3l_top_13TeV_mllmin3l114->SetBinError(10,0.01902766);
   new_histo_group_WZ_wh3l_top_13TeV_mllmin3l114->SetBinError(11,0.02228395);
   new_histo_group_WZ_wh3l_top_13TeV_mllmin3l114->SetBinError(12,0.04341952);
   new_histo_group_WZ_wh3l_top_13TeV_mllmin3l114->SetBinError(13,0.0404916);
   new_histo_group_WZ_wh3l_top_13TeV_mllmin3l114->SetBinError(14,0.02860086);
   new_histo_group_WZ_wh3l_top_13TeV_mllmin3l114->SetBinError(15,0.02780039);
   new_histo_group_WZ_wh3l_top_13TeV_mllmin3l114->SetBinError(16,0.0246422);
   new_histo_group_WZ_wh3l_top_13TeV_mllmin3l114->SetBinError(17,0.02246487);
   new_histo_group_WZ_wh3l_top_13TeV_mllmin3l114->SetBinError(18,0.01720639);
   new_histo_group_WZ_wh3l_top_13TeV_mllmin3l114->SetBinError(19,0.01742306);
   new_histo_group_WZ_wh3l_top_13TeV_mllmin3l114->SetBinError(20,0.01604864);
   new_histo_group_WZ_wh3l_top_13TeV_mllmin3l114->SetBinError(21,0.04147411);
   new_histo_group_WZ_wh3l_top_13TeV_mllmin3l114->SetEntries(1805);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_top_13TeV_mllmin3l114->SetFillColor(ci);
   new_histo_group_WZ_wh3l_top_13TeV_mllmin3l114->SetFillStyle(3001);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_top_13TeV_mllmin3l114->SetLineColor(ci);
   new_histo_group_WZ_wh3l_top_13TeV_mllmin3l114->GetXaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_top_13TeV_mllmin3l114->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_top_13TeV_mllmin3l114->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_top_13TeV_mllmin3l114->GetXaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_top_13TeV_mllmin3l114->GetYaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_top_13TeV_mllmin3l114->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_top_13TeV_mllmin3l114->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_top_13TeV_mllmin3l114->GetYaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_top_13TeV_mllmin3l114->GetZaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_top_13TeV_mllmin3l114->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_top_13TeV_mllmin3l114->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_top_13TeV_mllmin3l114->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_top_13TeV_mllmin3l->Add(new_histo_group_WZ_wh3l_top_13TeV_mllmin3l,"");
   
   TH1D *new_histo_group_Higgs_wh3l_top_13TeV_mllmin3l115 = new TH1D("new_histo_group_Higgs_wh3l_top_13TeV_mllmin3l115","histo_H_htt",20,10,200);
   new_histo_group_Higgs_wh3l_top_13TeV_mllmin3l115->SetBinContent(1,0.04744261);
   new_histo_group_Higgs_wh3l_top_13TeV_mllmin3l115->SetBinContent(2,0.07717206);
   new_histo_group_Higgs_wh3l_top_13TeV_mllmin3l115->SetBinContent(3,0.09453767);
   new_histo_group_Higgs_wh3l_top_13TeV_mllmin3l115->SetBinContent(4,0.0746473);
   new_histo_group_Higgs_wh3l_top_13TeV_mllmin3l115->SetBinContent(5,0.05866031);
   new_histo_group_Higgs_wh3l_top_13TeV_mllmin3l115->SetBinContent(6,0.03719978);
   new_histo_group_Higgs_wh3l_top_13TeV_mllmin3l115->SetBinContent(7,0.003419085);
   new_histo_group_Higgs_wh3l_top_13TeV_mllmin3l115->SetBinContent(8,0.002719416);
   new_histo_group_Higgs_wh3l_top_13TeV_mllmin3l115->SetBinContent(9,0.001395556);
   new_histo_group_Higgs_wh3l_top_13TeV_mllmin3l115->SetBinContent(10,0.001801169);
   new_histo_group_Higgs_wh3l_top_13TeV_mllmin3l115->SetBinContent(11,0.0001459466);
   new_histo_group_Higgs_wh3l_top_13TeV_mllmin3l115->SetBinContent(12,0.001071362);
   new_histo_group_Higgs_wh3l_top_13TeV_mllmin3l115->SetBinContent(13,0.001315666);
   new_histo_group_Higgs_wh3l_top_13TeV_mllmin3l115->SetBinContent(14,0.0005219919);
   new_histo_group_Higgs_wh3l_top_13TeV_mllmin3l115->SetBinContent(15,0.003125029);
   new_histo_group_Higgs_wh3l_top_13TeV_mllmin3l115->SetBinContent(16,0.0003740154);
   new_histo_group_Higgs_wh3l_top_13TeV_mllmin3l115->SetBinContent(17,0.0004161421);
   new_histo_group_Higgs_wh3l_top_13TeV_mllmin3l115->SetBinError(1,0.00748086);
   new_histo_group_Higgs_wh3l_top_13TeV_mllmin3l115->SetBinError(2,0.009420793);
   new_histo_group_Higgs_wh3l_top_13TeV_mllmin3l115->SetBinError(3,0.009537835);
   new_histo_group_Higgs_wh3l_top_13TeV_mllmin3l115->SetBinError(4,0.008509196);
   new_histo_group_Higgs_wh3l_top_13TeV_mllmin3l115->SetBinError(5,0.007439918);
   new_histo_group_Higgs_wh3l_top_13TeV_mllmin3l115->SetBinError(6,0.005755814);
   new_histo_group_Higgs_wh3l_top_13TeV_mllmin3l115->SetBinError(7,0.001160371);
   new_histo_group_Higgs_wh3l_top_13TeV_mllmin3l115->SetBinError(8,0.001173907);
   new_histo_group_Higgs_wh3l_top_13TeV_mllmin3l115->SetBinError(9,0.0007324707);
   new_histo_group_Higgs_wh3l_top_13TeV_mllmin3l115->SetBinError(10,0.001324314);
   new_histo_group_Higgs_wh3l_top_13TeV_mllmin3l115->SetBinError(11,0.0001459466);
   new_histo_group_Higgs_wh3l_top_13TeV_mllmin3l115->SetBinError(12,0.0006505119);
   new_histo_group_Higgs_wh3l_top_13TeV_mllmin3l115->SetBinError(13,0.0007635342);
   new_histo_group_Higgs_wh3l_top_13TeV_mllmin3l115->SetBinError(14,0.0005219919);
   new_histo_group_Higgs_wh3l_top_13TeV_mllmin3l115->SetBinError(15,0.001963693);
   new_histo_group_Higgs_wh3l_top_13TeV_mllmin3l115->SetBinError(16,0.0003740154);
   new_histo_group_Higgs_wh3l_top_13TeV_mllmin3l115->SetBinError(17,0.0004161421);
   new_histo_group_Higgs_wh3l_top_13TeV_mllmin3l115->SetEntries(723);
   new_histo_group_Higgs_wh3l_top_13TeV_mllmin3l115->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_top_13TeV_mllmin3l115->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_top_13TeV_mllmin3l115->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_top_13TeV_mllmin3l115->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_top_13TeV_mllmin3l115->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_top_13TeV_mllmin3l115->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_top_13TeV_mllmin3l115->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_top_13TeV_mllmin3l115->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_top_13TeV_mllmin3l115->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_top_13TeV_mllmin3l115->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_top_13TeV_mllmin3l115->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_top_13TeV_mllmin3l115->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_top_13TeV_mllmin3l115->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_top_13TeV_mllmin3l115->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_top_13TeV_mllmin3l115->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_top_13TeV_mllmin3l->Add(new_histo_group_Higgs_wh3l_top_13TeV_mllmin3l,"");
   thsBackground_grouped_wh3l_top_13TeV_mllmin3l->Draw("hist same");
   
   thsSignal_grouped_wh3l_top_13TeV_mllmin3l = new THStack();
   thsSignal_grouped_wh3l_top_13TeV_mllmin3l->SetName("thsSignal_grouped_wh3l_top_13TeV_mllmin3l");
   thsSignal_grouped_wh3l_top_13TeV_mllmin3l->SetTitle("thsSignal_grouped_wh3l_top_13TeV_mllmin3l");
   
   TH1F *thsSignal_grouped_wh3l_top_13TeV_mllmin3l_stack_26 = new TH1F("thsSignal_grouped_wh3l_top_13TeV_mllmin3l_stack_26","thsSignal_grouped_wh3l_top_13TeV_mllmin3l",20,10,200);
   thsSignal_grouped_wh3l_top_13TeV_mllmin3l_stack_26->SetMinimum(0);
   thsSignal_grouped_wh3l_top_13TeV_mllmin3l_stack_26->SetMaximum(0.1092793);
   thsSignal_grouped_wh3l_top_13TeV_mllmin3l_stack_26->SetDirectory(0);
   thsSignal_grouped_wh3l_top_13TeV_mllmin3l_stack_26->SetStats(0);
   thsSignal_grouped_wh3l_top_13TeV_mllmin3l_stack_26->SetLineStyle(0);
   thsSignal_grouped_wh3l_top_13TeV_mllmin3l_stack_26->SetMarkerStyle(20);
   thsSignal_grouped_wh3l_top_13TeV_mllmin3l_stack_26->GetXaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_top_13TeV_mllmin3l_stack_26->GetXaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_top_13TeV_mllmin3l_stack_26->GetXaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_top_13TeV_mllmin3l_stack_26->GetXaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_top_13TeV_mllmin3l_stack_26->GetXaxis()->SetTitleOffset(0.9);
   thsSignal_grouped_wh3l_top_13TeV_mllmin3l_stack_26->GetXaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_top_13TeV_mllmin3l_stack_26->GetYaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_top_13TeV_mllmin3l_stack_26->GetYaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_top_13TeV_mllmin3l_stack_26->GetYaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_top_13TeV_mllmin3l_stack_26->GetYaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_top_13TeV_mllmin3l_stack_26->GetYaxis()->SetTitleOffset(1.25);
   thsSignal_grouped_wh3l_top_13TeV_mllmin3l_stack_26->GetYaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_top_13TeV_mllmin3l_stack_26->GetZaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_top_13TeV_mllmin3l_stack_26->GetZaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_top_13TeV_mllmin3l_stack_26->GetZaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_top_13TeV_mllmin3l_stack_26->GetZaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_top_13TeV_mllmin3l_stack_26->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_top_13TeV_mllmin3l->SetHistogram(thsSignal_grouped_wh3l_top_13TeV_mllmin3l_stack_26);
   
   
   TH1D *new_histo_group_Higgs_wh3l_top_13TeV_mllmin3l116 = new TH1D("new_histo_group_Higgs_wh3l_top_13TeV_mllmin3l116","histo_H_htt",20,10,200);
   new_histo_group_Higgs_wh3l_top_13TeV_mllmin3l116->SetBinContent(1,0.04744261);
   new_histo_group_Higgs_wh3l_top_13TeV_mllmin3l116->SetBinContent(2,0.07717206);
   new_histo_group_Higgs_wh3l_top_13TeV_mllmin3l116->SetBinContent(3,0.09453767);
   new_histo_group_Higgs_wh3l_top_13TeV_mllmin3l116->SetBinContent(4,0.0746473);
   new_histo_group_Higgs_wh3l_top_13TeV_mllmin3l116->SetBinContent(5,0.05866031);
   new_histo_group_Higgs_wh3l_top_13TeV_mllmin3l116->SetBinContent(6,0.03719978);
   new_histo_group_Higgs_wh3l_top_13TeV_mllmin3l116->SetBinContent(7,0.003419085);
   new_histo_group_Higgs_wh3l_top_13TeV_mllmin3l116->SetBinContent(8,0.002719416);
   new_histo_group_Higgs_wh3l_top_13TeV_mllmin3l116->SetBinContent(9,0.001395556);
   new_histo_group_Higgs_wh3l_top_13TeV_mllmin3l116->SetBinContent(10,0.001801169);
   new_histo_group_Higgs_wh3l_top_13TeV_mllmin3l116->SetBinContent(11,0.0001459466);
   new_histo_group_Higgs_wh3l_top_13TeV_mllmin3l116->SetBinContent(12,0.001071362);
   new_histo_group_Higgs_wh3l_top_13TeV_mllmin3l116->SetBinContent(13,0.001315666);
   new_histo_group_Higgs_wh3l_top_13TeV_mllmin3l116->SetBinContent(14,0.0005219919);
   new_histo_group_Higgs_wh3l_top_13TeV_mllmin3l116->SetBinContent(15,0.003125029);
   new_histo_group_Higgs_wh3l_top_13TeV_mllmin3l116->SetBinContent(16,0.0003740154);
   new_histo_group_Higgs_wh3l_top_13TeV_mllmin3l116->SetBinContent(17,0.0004161421);
   new_histo_group_Higgs_wh3l_top_13TeV_mllmin3l116->SetBinError(1,0.00748086);
   new_histo_group_Higgs_wh3l_top_13TeV_mllmin3l116->SetBinError(2,0.009420793);
   new_histo_group_Higgs_wh3l_top_13TeV_mllmin3l116->SetBinError(3,0.009537835);
   new_histo_group_Higgs_wh3l_top_13TeV_mllmin3l116->SetBinError(4,0.008509196);
   new_histo_group_Higgs_wh3l_top_13TeV_mllmin3l116->SetBinError(5,0.007439918);
   new_histo_group_Higgs_wh3l_top_13TeV_mllmin3l116->SetBinError(6,0.005755814);
   new_histo_group_Higgs_wh3l_top_13TeV_mllmin3l116->SetBinError(7,0.001160371);
   new_histo_group_Higgs_wh3l_top_13TeV_mllmin3l116->SetBinError(8,0.001173907);
   new_histo_group_Higgs_wh3l_top_13TeV_mllmin3l116->SetBinError(9,0.0007324707);
   new_histo_group_Higgs_wh3l_top_13TeV_mllmin3l116->SetBinError(10,0.001324314);
   new_histo_group_Higgs_wh3l_top_13TeV_mllmin3l116->SetBinError(11,0.0001459466);
   new_histo_group_Higgs_wh3l_top_13TeV_mllmin3l116->SetBinError(12,0.0006505119);
   new_histo_group_Higgs_wh3l_top_13TeV_mllmin3l116->SetBinError(13,0.0007635342);
   new_histo_group_Higgs_wh3l_top_13TeV_mllmin3l116->SetBinError(14,0.0005219919);
   new_histo_group_Higgs_wh3l_top_13TeV_mllmin3l116->SetBinError(15,0.001963693);
   new_histo_group_Higgs_wh3l_top_13TeV_mllmin3l116->SetBinError(16,0.0003740154);
   new_histo_group_Higgs_wh3l_top_13TeV_mllmin3l116->SetBinError(17,0.0004161421);
   new_histo_group_Higgs_wh3l_top_13TeV_mllmin3l116->SetEntries(723);
   new_histo_group_Higgs_wh3l_top_13TeV_mllmin3l116->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_top_13TeV_mllmin3l116->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_top_13TeV_mllmin3l116->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_top_13TeV_mllmin3l116->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_top_13TeV_mllmin3l116->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_top_13TeV_mllmin3l116->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_top_13TeV_mllmin3l116->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_top_13TeV_mllmin3l116->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_top_13TeV_mllmin3l116->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_top_13TeV_mllmin3l116->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_top_13TeV_mllmin3l116->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_top_13TeV_mllmin3l116->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_top_13TeV_mllmin3l116->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_top_13TeV_mllmin3l116->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_top_13TeV_mllmin3l116->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_top_13TeV_mllmin3l->Add(new_histo_group_Higgs_wh3l_top_13TeV_mllmin3l,"");
   thsSignal_grouped_wh3l_top_13TeV_mllmin3l->Draw("hist same noclear");
   
   Double_t _fx3025[20] = {
   14.75,
   24.25,
   33.75,
   43.25,
   52.75,
   62.25,
   71.75,
   81.25,
   90.75,
   100.25,
   109.75,
   119.25,
   128.75,
   138.25,
   147.75,
   157.25,
   166.75,
   176.25,
   185.75,
   195.25};
   Double_t _fy3025[20] = {
   3.306372,
   5.904275,
   8.777164,
   8.595901,
   5.864495,
   6.687184,
   0.9235598,
   1.356811,
   1.892896,
   0.1247675,
   0.767657,
   1.460443,
   0.9274345,
   0.3102169,
   0.19589,
   0.8780965,
   0.07772698,
   0.1233592,
   0.1134225,
   0.1214571};
   Double_t _felx3025[20] = {
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75};
   Double_t _fely3025[20] = {
   1.5197,
   2.426739,
   3.473628,
   3.256754,
   2.48247,
   2.886399,
   0.5980865,
   0.8321124,
   1.1351,
   0.08412033,
   0.5519376,
   0.8033073,
   0.4552844,
   0.1643983,
   0.08756043,
   0.6810405,
   0.0418196,
   0.09140997,
   0.07309055,
   0.08980814};
   Double_t _fehx3025[20] = {
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75};
   Double_t _fehy3025[20] = {
   1.519607,
   2.558638,
   3.4736,
   3.256599,
   2.482462,
   2.866249,
   0.5980864,
   0.8321115,
   1.1351,
   0.2864197,
   0.5519366,
   0.8032795,
   0.455285,
   0.1643926,
   0.1197293,
   0.6810407,
   0.04180949,
   0.09140997,
   0.09111986,
   0.08980676};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(20,_fx3025,_fy3025,_felx3025,_fehx3025,_fely3025,_fehy3025);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(12);
   grae->SetFillStyle(3004);
   grae->SetLineColor(12);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3025 = new TH1F("Graph_Graph3025","",100,0,219);
   Graph_Graph3025->SetMinimum(0);
   Graph_Graph3025->SetMaximum(13.47268);
   Graph_Graph3025->SetDirectory(0);
   Graph_Graph3025->SetStats(0);
   Graph_Graph3025->SetLineStyle(0);
   Graph_Graph3025->SetMarkerStyle(20);
   Graph_Graph3025->GetXaxis()->SetLabelFont(42);
   Graph_Graph3025->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3025->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3025->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3025->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3025->GetXaxis()->SetTitleFont(42);
   Graph_Graph3025->GetYaxis()->SetLabelFont(42);
   Graph_Graph3025->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3025->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3025->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3025->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3025->GetYaxis()->SetTitleFont(42);
   Graph_Graph3025->GetZaxis()->SetLabelFont(42);
   Graph_Graph3025->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3025->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3025->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3025->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3025);
   
   grae->Draw("2");
   
   Double_t _fx3026[20] = {
   14.75,
   24.25,
   33.75,
   43.25,
   52.75,
   62.25,
   71.75,
   81.25,
   90.75,
   100.25,
   109.75,
   119.25,
   128.75,
   138.25,
   147.75,
   157.25,
   166.75,
   176.25,
   185.75,
   195.25};
   Double_t _fy3026[20] = {
   2,
   6,
   9,
   3,
   7,
   3,
   0,
   2,
   1,
   1,
   0,
   1,
   1,
   1,
   1,
   0,
   0,
   0,
   1,
   0};
   Double_t _felx3026[20] = {
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75};
   Double_t _fely3026[20] = {
   1.29183,
   2.379969,
   2.943511,
   1.632727,
   2.581513,
   1.632727,
   0,
   1.29183,
   0.8272524,
   0.8272524,
   0,
   0.8272524,
   0.8272524,
   0.8272524,
   0.8272524,
   0,
   0,
   0,
   0.8272524,
   0};
   Double_t _fehx3026[20] = {
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75};
   Double_t _fehy3026[20] = {
   2.63791,
   3.583713,
   4.110286,
   2.918242,
   3.770356,
   2.918242,
   1.147908,
   2.63791,
   2.29957,
   2.29957,
   1.147908,
   2.29957,
   2.29957,
   2.29957,
   2.29957,
   1.147908,
   1.147908,
   1.147908,
   2.29957,
   1.147908};
   grae = new TGraphAsymmErrors(20,_fx3026,_fy3026,_felx3026,_fehx3026,_fely3026,_fehy3026);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(1);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3026 = new TH1F("Graph_Graph3026","",100,0,219);
   Graph_Graph3026->SetMinimum(0);
   Graph_Graph3026->SetMaximum(14.42131);
   Graph_Graph3026->SetDirectory(0);
   Graph_Graph3026->SetStats(0);
   Graph_Graph3026->SetLineStyle(0);
   Graph_Graph3026->SetMarkerStyle(20);
   Graph_Graph3026->GetXaxis()->SetLabelFont(42);
   Graph_Graph3026->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3026->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3026->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3026->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3026->GetXaxis()->SetTitleFont(42);
   Graph_Graph3026->GetYaxis()->SetLabelFont(42);
   Graph_Graph3026->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3026->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3026->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3026->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3026->GetYaxis()->SetTitleFont(42);
   Graph_Graph3026->GetZaxis()->SetLabelFont(42);
   Graph_Graph3026->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3026->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3026->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3026->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3026);
   
   grae->Draw("p0");
   
   TLegend *leg = new TLegend(0.2,0.7,0.8,0.9,NULL,"brNDC");
   leg->SetTextFont(62);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("new_histo_group_Fake_wh3l_top_13TeV_mllmin3l","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_top_13TeV_mllmin3l","WW","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_top_13TeV_mllmin3l","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_top_13TeV_mllmin3l","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_top_13TeV_mllmin3l","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_top_13TeV_mllmin3l","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_top_13TeV_mllmin3l","Data","EPL");
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
   entry=leg->AddEntry("new_histo_group_Fake_wh3l_top_13TeV_mllmin3l","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_top_13TeV_mllmin3l","WW","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_top_13TeV_mllmin3l","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_top_13TeV_mllmin3l","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_top_13TeV_mllmin3l","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_top_13TeV_mllmin3l","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_top_13TeV_mllmin3l","Data","EPL");
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
   
   TH1F *hframe_copy117 = new TH1F("hframe_copy117","",1000,10,200);
   hframe_copy117->SetMinimum(0);
   hframe_copy117->SetMaximum(30);
   hframe_copy117->SetDirectory(0);
   hframe_copy117->SetStats(0);
   hframe_copy117->SetLineStyle(0);
   hframe_copy117->SetMarkerStyle(20);
   hframe_copy117->GetXaxis()->SetTitle("min m_{ll} [GeV]");
   hframe_copy117->GetXaxis()->SetNdivisions(506);
   hframe_copy117->GetXaxis()->SetLabelFont(42);
   hframe_copy117->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy117->GetXaxis()->SetLabelSize(0.05);
   hframe_copy117->GetXaxis()->SetTitleSize(0.06);
   hframe_copy117->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy117->GetXaxis()->SetTitleFont(42);
   hframe_copy117->GetYaxis()->SetTitle("Events");
   hframe_copy117->GetYaxis()->SetLabelFont(42);
   hframe_copy117->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy117->GetYaxis()->SetLabelSize(0.05);
   hframe_copy117->GetYaxis()->SetTitleSize(0.06);
   hframe_copy117->GetYaxis()->SetTitleOffset(1.25);
   hframe_copy117->GetYaxis()->SetTitleFont(42);
   hframe_copy117->GetZaxis()->SetLabelFont(42);
   hframe_copy117->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy117->GetZaxis()->SetLabelSize(0.05);
   hframe_copy117->GetZaxis()->SetTitleSize(0.06);
   hframe_copy117->GetZaxis()->SetTitleFont(42);
   hframe_copy117->Draw("sameaxis");
   ccwh3l_top_13TeV_mllmin3l->Modified();
   ccwh3l_top_13TeV_mllmin3l->cd();
   ccwh3l_top_13TeV_mllmin3l->SetSelected(ccwh3l_top_13TeV_mllmin3l);
}
