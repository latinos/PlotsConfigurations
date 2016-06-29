void c_wh3l_top_13TeV_zveto_3l()
{
//=========Macro generated from canvas: ccwh3l_top_13TeV_zveto_3l/cc
//=========  (Tue Jun 28 16:49:05 2016) by ROOT version6.02/13
   TCanvas *ccwh3l_top_13TeV_zveto_3l = new TCanvas("ccwh3l_top_13TeV_zveto_3l", "cc",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   ccwh3l_top_13TeV_zveto_3l->SetHighLightColor(2);
   ccwh3l_top_13TeV_zveto_3l->Range(-20,-6.939656,105,46.44231);
   ccwh3l_top_13TeV_zveto_3l->SetFillColor(0);
   ccwh3l_top_13TeV_zveto_3l->SetBorderMode(0);
   ccwh3l_top_13TeV_zveto_3l->SetBorderSize(2);
   ccwh3l_top_13TeV_zveto_3l->SetTickx(1);
   ccwh3l_top_13TeV_zveto_3l->SetTicky(1);
   ccwh3l_top_13TeV_zveto_3l->SetLeftMargin(0.16);
   ccwh3l_top_13TeV_zveto_3l->SetRightMargin(0.04);
   ccwh3l_top_13TeV_zveto_3l->SetTopMargin(0.05);
   ccwh3l_top_13TeV_zveto_3l->SetBottomMargin(0.13);
   ccwh3l_top_13TeV_zveto_3l->SetFrameFillStyle(0);
   ccwh3l_top_13TeV_zveto_3l->SetFrameBorderMode(0);
   ccwh3l_top_13TeV_zveto_3l->SetFrameFillStyle(0);
   ccwh3l_top_13TeV_zveto_3l->SetFrameBorderMode(0);
   
   TH1F *hframe153 = new TH1F("hframe153","",1000,0,100);
   hframe153->SetMinimum(0);
   hframe153->SetMaximum(43.77322);
   hframe153->SetDirectory(0);
   hframe153->SetStats(0);
   hframe153->SetLineStyle(0);
   hframe153->SetMarkerStyle(20);
   hframe153->GetXaxis()->SetTitle("m_{ll} - M_{Z} [GeV]");
   hframe153->GetXaxis()->SetNdivisions(506);
   hframe153->GetXaxis()->SetLabelFont(42);
   hframe153->GetXaxis()->SetLabelOffset(0.007);
   hframe153->GetXaxis()->SetLabelSize(0.05);
   hframe153->GetXaxis()->SetTitleSize(0.06);
   hframe153->GetXaxis()->SetTitleOffset(0.9);
   hframe153->GetXaxis()->SetTitleFont(42);
   hframe153->GetYaxis()->SetTitle("Events");
   hframe153->GetYaxis()->SetLabelFont(42);
   hframe153->GetYaxis()->SetLabelOffset(0.007);
   hframe153->GetYaxis()->SetLabelSize(0.05);
   hframe153->GetYaxis()->SetTitleSize(0.06);
   hframe153->GetYaxis()->SetTitleOffset(1.25);
   hframe153->GetYaxis()->SetTitleFont(42);
   hframe153->GetZaxis()->SetLabelFont(42);
   hframe153->GetZaxis()->SetLabelOffset(0.007);
   hframe153->GetZaxis()->SetLabelSize(0.05);
   hframe153->GetZaxis()->SetTitleSize(0.06);
   hframe153->GetZaxis()->SetTitleFont(42);
   hframe153->Draw(" ");
   
   THStack *thsBackground_grouped_wh3l_top_13TeV_zveto_3l = new THStack();
   thsBackground_grouped_wh3l_top_13TeV_zveto_3l->SetName("thsBackground_grouped_wh3l_top_13TeV_zveto_3l");
   thsBackground_grouped_wh3l_top_13TeV_zveto_3l->SetTitle("thsBackground_grouped_wh3l_top_13TeV_zveto_3l");
   
   TH1F *thsBackground_grouped_wh3l_top_13TeV_zveto_3l_stack_20 = new TH1F("thsBackground_grouped_wh3l_top_13TeV_zveto_3l_stack_20","thsBackground_grouped_wh3l_top_13TeV_zveto_3l",20,0,100);
   thsBackground_grouped_wh3l_top_13TeV_zveto_3l_stack_20->SetMinimum(-0.2990534);
   thsBackground_grouped_wh3l_top_13TeV_zveto_3l_stack_20->SetMaximum(19.27472);
   thsBackground_grouped_wh3l_top_13TeV_zveto_3l_stack_20->SetDirectory(0);
   thsBackground_grouped_wh3l_top_13TeV_zveto_3l_stack_20->SetStats(0);
   thsBackground_grouped_wh3l_top_13TeV_zveto_3l_stack_20->SetLineStyle(0);
   thsBackground_grouped_wh3l_top_13TeV_zveto_3l_stack_20->SetMarkerStyle(20);
   thsBackground_grouped_wh3l_top_13TeV_zveto_3l_stack_20->GetXaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_top_13TeV_zveto_3l_stack_20->GetXaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_top_13TeV_zveto_3l_stack_20->GetXaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_top_13TeV_zveto_3l_stack_20->GetXaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_top_13TeV_zveto_3l_stack_20->GetXaxis()->SetTitleOffset(0.9);
   thsBackground_grouped_wh3l_top_13TeV_zveto_3l_stack_20->GetXaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_top_13TeV_zveto_3l_stack_20->GetYaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_top_13TeV_zveto_3l_stack_20->GetYaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_top_13TeV_zveto_3l_stack_20->GetYaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_top_13TeV_zveto_3l_stack_20->GetYaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_top_13TeV_zveto_3l_stack_20->GetYaxis()->SetTitleOffset(1.25);
   thsBackground_grouped_wh3l_top_13TeV_zveto_3l_stack_20->GetYaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_top_13TeV_zveto_3l_stack_20->GetZaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_top_13TeV_zveto_3l_stack_20->GetZaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_top_13TeV_zveto_3l_stack_20->GetZaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_top_13TeV_zveto_3l_stack_20->GetZaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_top_13TeV_zveto_3l_stack_20->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_top_13TeV_zveto_3l->SetHistogram(thsBackground_grouped_wh3l_top_13TeV_zveto_3l_stack_20);
   
   
   TH1D *new_histo_group_Fake_wh3l_top_13TeV_zveto_3l154 = new TH1D("new_histo_group_Fake_wh3l_top_13TeV_zveto_3l154","histo_Fake",20,0,100);
   new_histo_group_Fake_wh3l_top_13TeV_zveto_3l154->SetBinContent(6,3.557818);
   new_histo_group_Fake_wh3l_top_13TeV_zveto_3l154->SetBinContent(7,4.769483);
   new_histo_group_Fake_wh3l_top_13TeV_zveto_3l154->SetBinContent(8,2.680785);
   new_histo_group_Fake_wh3l_top_13TeV_zveto_3l154->SetBinContent(9,2.200094);
   new_histo_group_Fake_wh3l_top_13TeV_zveto_3l154->SetBinContent(10,1.237152);
   new_histo_group_Fake_wh3l_top_13TeV_zveto_3l154->SetBinContent(11,2.322643);
   new_histo_group_Fake_wh3l_top_13TeV_zveto_3l154->SetBinContent(12,1.350281);
   new_histo_group_Fake_wh3l_top_13TeV_zveto_3l154->SetBinContent(13,2.405961);
   new_histo_group_Fake_wh3l_top_13TeV_zveto_3l154->SetBinContent(14,-0.08277722);
   new_histo_group_Fake_wh3l_top_13TeV_zveto_3l154->SetBinContent(15,1.009244);
   new_histo_group_Fake_wh3l_top_13TeV_zveto_3l154->SetBinContent(16,0.2794171);
   new_histo_group_Fake_wh3l_top_13TeV_zveto_3l154->SetBinContent(17,0.1981389);
   new_histo_group_Fake_wh3l_top_13TeV_zveto_3l154->SetBinContent(19,15.76559);
   new_histo_group_Fake_wh3l_top_13TeV_zveto_3l154->SetBinError(6,1.378303);
   new_histo_group_Fake_wh3l_top_13TeV_zveto_3l154->SetBinError(7,1.630975);
   new_histo_group_Fake_wh3l_top_13TeV_zveto_3l154->SetBinError(8,1.080101);
   new_histo_group_Fake_wh3l_top_13TeV_zveto_3l154->SetBinError(9,1.07959);
   new_histo_group_Fake_wh3l_top_13TeV_zveto_3l154->SetBinError(10,1.10308);
   new_histo_group_Fake_wh3l_top_13TeV_zveto_3l154->SetBinError(11,1.225197);
   new_histo_group_Fake_wh3l_top_13TeV_zveto_3l154->SetBinError(12,1.111666);
   new_histo_group_Fake_wh3l_top_13TeV_zveto_3l154->SetBinError(13,1.158651);
   new_histo_group_Fake_wh3l_top_13TeV_zveto_3l154->SetBinError(14,0.2162761);
   new_histo_group_Fake_wh3l_top_13TeV_zveto_3l154->SetBinError(15,0.8929173);
   new_histo_group_Fake_wh3l_top_13TeV_zveto_3l154->SetBinError(16,0.3300218);
   new_histo_group_Fake_wh3l_top_13TeV_zveto_3l154->SetBinError(17,0.1401597);
   new_histo_group_Fake_wh3l_top_13TeV_zveto_3l154->SetBinError(19,2.591285);
   new_histo_group_Fake_wh3l_top_13TeV_zveto_3l154->SetEntries(317);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_top_13TeV_zveto_3l154->SetFillColor(ci);
   new_histo_group_Fake_wh3l_top_13TeV_zveto_3l154->SetFillStyle(3001);

   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_top_13TeV_zveto_3l154->SetLineColor(ci);
   new_histo_group_Fake_wh3l_top_13TeV_zveto_3l154->GetXaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_top_13TeV_zveto_3l154->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_top_13TeV_zveto_3l154->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_top_13TeV_zveto_3l154->GetXaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_top_13TeV_zveto_3l154->GetYaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_top_13TeV_zveto_3l154->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_top_13TeV_zveto_3l154->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_top_13TeV_zveto_3l154->GetYaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_top_13TeV_zveto_3l154->GetZaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_top_13TeV_zveto_3l154->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_top_13TeV_zveto_3l154->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_top_13TeV_zveto_3l154->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_top_13TeV_zveto_3l->Add(new_histo_group_Fake_wh3l_top_13TeV_zveto_3l,"");
   
   TH1D *new_histo_group_WW_wh3l_top_13TeV_zveto_3l155 = new TH1D("new_histo_group_WW_wh3l_top_13TeV_zveto_3l155","histo_WW",20,0,100);
   new_histo_group_WW_wh3l_top_13TeV_zveto_3l155->SetBinContent(6,0.01821101);
   new_histo_group_WW_wh3l_top_13TeV_zveto_3l155->SetBinContent(7,0.01749081);
   new_histo_group_WW_wh3l_top_13TeV_zveto_3l155->SetBinContent(8,0.01305253);
   new_histo_group_WW_wh3l_top_13TeV_zveto_3l155->SetBinContent(11,0.01461809);
   new_histo_group_WW_wh3l_top_13TeV_zveto_3l155->SetBinContent(14,0.01959378);
   new_histo_group_WW_wh3l_top_13TeV_zveto_3l155->SetBinContent(19,0.0850955);
   new_histo_group_WW_wh3l_top_13TeV_zveto_3l155->SetBinError(6,0.01821101);
   new_histo_group_WW_wh3l_top_13TeV_zveto_3l155->SetBinError(7,0.01749081);
   new_histo_group_WW_wh3l_top_13TeV_zveto_3l155->SetBinError(8,0.01305253);
   new_histo_group_WW_wh3l_top_13TeV_zveto_3l155->SetBinError(11,0.01461809);
   new_histo_group_WW_wh3l_top_13TeV_zveto_3l155->SetBinError(14,0.01959378);
   new_histo_group_WW_wh3l_top_13TeV_zveto_3l155->SetBinError(19,0.03638693);
   new_histo_group_WW_wh3l_top_13TeV_zveto_3l155->SetEntries(11);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_top_13TeV_zveto_3l155->SetFillColor(ci);
   new_histo_group_WW_wh3l_top_13TeV_zveto_3l155->SetFillStyle(3001);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_top_13TeV_zveto_3l155->SetLineColor(ci);
   new_histo_group_WW_wh3l_top_13TeV_zveto_3l155->GetXaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_top_13TeV_zveto_3l155->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_top_13TeV_zveto_3l155->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_top_13TeV_zveto_3l155->GetXaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_top_13TeV_zveto_3l155->GetYaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_top_13TeV_zveto_3l155->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_top_13TeV_zveto_3l155->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_top_13TeV_zveto_3l155->GetYaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_top_13TeV_zveto_3l155->GetZaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_top_13TeV_zveto_3l155->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_top_13TeV_zveto_3l155->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_top_13TeV_zveto_3l155->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_top_13TeV_zveto_3l->Add(new_histo_group_WW_wh3l_top_13TeV_zveto_3l,"");
   
   TH1D *new_histo_group_VVV_wh3l_top_13TeV_zveto_3l156 = new TH1D("new_histo_group_VVV_wh3l_top_13TeV_zveto_3l156","histo_VVV",20,0,100);
   new_histo_group_VVV_wh3l_top_13TeV_zveto_3l156->SetBinContent(6,0.00445033);
   new_histo_group_VVV_wh3l_top_13TeV_zveto_3l156->SetBinContent(7,0.002736496);
   new_histo_group_VVV_wh3l_top_13TeV_zveto_3l156->SetBinContent(8,0.004390822);
   new_histo_group_VVV_wh3l_top_13TeV_zveto_3l156->SetBinContent(9,0.002537707);
   new_histo_group_VVV_wh3l_top_13TeV_zveto_3l156->SetBinContent(10,0.0005854479);
   new_histo_group_VVV_wh3l_top_13TeV_zveto_3l156->SetBinContent(11,-1.231497e-05);
   new_histo_group_VVV_wh3l_top_13TeV_zveto_3l156->SetBinContent(13,0.001188531);
   new_histo_group_VVV_wh3l_top_13TeV_zveto_3l156->SetBinContent(14,0.001411548);
   new_histo_group_VVV_wh3l_top_13TeV_zveto_3l156->SetBinContent(18,0.000761464);
   new_histo_group_VVV_wh3l_top_13TeV_zveto_3l156->SetBinContent(19,0.01193503);
   new_histo_group_VVV_wh3l_top_13TeV_zveto_3l156->SetBinError(6,0.001473178);
   new_histo_group_VVV_wh3l_top_13TeV_zveto_3l156->SetBinError(7,0.001248578);
   new_histo_group_VVV_wh3l_top_13TeV_zveto_3l156->SetBinError(8,0.001620367);
   new_histo_group_VVV_wh3l_top_13TeV_zveto_3l156->SetBinError(9,0.001223592);
   new_histo_group_VVV_wh3l_top_13TeV_zveto_3l156->SetBinError(10,0.0005854479);
   new_histo_group_VVV_wh3l_top_13TeV_zveto_3l156->SetBinError(11,0.0008808498);
   new_histo_group_VVV_wh3l_top_13TeV_zveto_3l156->SetBinError(13,0.0008454088);
   new_histo_group_VVV_wh3l_top_13TeV_zveto_3l156->SetBinError(14,0.001003534);
   new_histo_group_VVV_wh3l_top_13TeV_zveto_3l156->SetBinError(18,0.000761464);
   new_histo_group_VVV_wh3l_top_13TeV_zveto_3l156->SetBinError(19,0.002755098);
   new_histo_group_VVV_wh3l_top_13TeV_zveto_3l156->SetEntries(58);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_top_13TeV_zveto_3l156->SetFillColor(ci);
   new_histo_group_VVV_wh3l_top_13TeV_zveto_3l156->SetFillStyle(3001);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_top_13TeV_zveto_3l156->SetLineColor(ci);
   new_histo_group_VVV_wh3l_top_13TeV_zveto_3l156->GetXaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_top_13TeV_zveto_3l156->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_top_13TeV_zveto_3l156->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_top_13TeV_zveto_3l156->GetXaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_top_13TeV_zveto_3l156->GetYaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_top_13TeV_zveto_3l156->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_top_13TeV_zveto_3l156->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_top_13TeV_zveto_3l156->GetYaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_top_13TeV_zveto_3l156->GetZaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_top_13TeV_zveto_3l156->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_top_13TeV_zveto_3l156->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_top_13TeV_zveto_3l156->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_top_13TeV_zveto_3l->Add(new_histo_group_VVV_wh3l_top_13TeV_zveto_3l,"");
   
   TH1D *new_histo_group_Vg_wh3l_top_13TeV_zveto_3l157 = new TH1D("new_histo_group_Vg_wh3l_top_13TeV_zveto_3l157","histo_Vg",20,0,100);
   new_histo_group_Vg_wh3l_top_13TeV_zveto_3l157->SetBinContent(6,0.2671853);
   new_histo_group_Vg_wh3l_top_13TeV_zveto_3l157->SetBinContent(7,0.1573751);
   new_histo_group_Vg_wh3l_top_13TeV_zveto_3l157->SetBinContent(8,0.3372647);
   new_histo_group_Vg_wh3l_top_13TeV_zveto_3l157->SetBinContent(10,0.2365957);
   new_histo_group_Vg_wh3l_top_13TeV_zveto_3l157->SetBinContent(11,0.1241958);
   new_histo_group_Vg_wh3l_top_13TeV_zveto_3l157->SetBinContent(12,0.211252);
   new_histo_group_Vg_wh3l_top_13TeV_zveto_3l157->SetBinContent(19,0.1807983);
   new_histo_group_Vg_wh3l_top_13TeV_zveto_3l157->SetBinError(6,0.257937);
   new_histo_group_Vg_wh3l_top_13TeV_zveto_3l157->SetBinError(7,0.1152831);
   new_histo_group_Vg_wh3l_top_13TeV_zveto_3l157->SetBinError(8,0.179749);
   new_histo_group_Vg_wh3l_top_13TeV_zveto_3l157->SetBinError(10,0.153771);
   new_histo_group_Vg_wh3l_top_13TeV_zveto_3l157->SetBinError(11,0.1241958);
   new_histo_group_Vg_wh3l_top_13TeV_zveto_3l157->SetBinError(12,0.1694495);
   new_histo_group_Vg_wh3l_top_13TeV_zveto_3l157->SetBinError(19,0.2007494);
   new_histo_group_Vg_wh3l_top_13TeV_zveto_3l157->SetEntries(26);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_top_13TeV_zveto_3l157->SetFillColor(ci);
   new_histo_group_Vg_wh3l_top_13TeV_zveto_3l157->SetFillStyle(3001);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_top_13TeV_zveto_3l157->SetLineColor(ci);
   new_histo_group_Vg_wh3l_top_13TeV_zveto_3l157->GetXaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_top_13TeV_zveto_3l157->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_top_13TeV_zveto_3l157->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_top_13TeV_zveto_3l157->GetXaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_top_13TeV_zveto_3l157->GetYaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_top_13TeV_zveto_3l157->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_top_13TeV_zveto_3l157->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_top_13TeV_zveto_3l157->GetYaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_top_13TeV_zveto_3l157->GetZaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_top_13TeV_zveto_3l157->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_top_13TeV_zveto_3l157->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_top_13TeV_zveto_3l157->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_top_13TeV_zveto_3l->Add(new_histo_group_Vg_wh3l_top_13TeV_zveto_3l,"");
   
   TH1D *new_histo_group_ZZ_wh3l_top_13TeV_zveto_3l158 = new TH1D("new_histo_group_ZZ_wh3l_top_13TeV_zveto_3l158","histo_ZZ",20,0,100);
   new_histo_group_ZZ_wh3l_top_13TeV_zveto_3l158->SetBinContent(6,0.1506329);
   new_histo_group_ZZ_wh3l_top_13TeV_zveto_3l158->SetBinContent(7,0.1518454);
   new_histo_group_ZZ_wh3l_top_13TeV_zveto_3l158->SetBinContent(8,0.1388612);
   new_histo_group_ZZ_wh3l_top_13TeV_zveto_3l158->SetBinContent(10,0.06406219);
   new_histo_group_ZZ_wh3l_top_13TeV_zveto_3l158->SetBinContent(11,0.04332647);
   new_histo_group_ZZ_wh3l_top_13TeV_zveto_3l158->SetBinContent(12,0.08998948);
   new_histo_group_ZZ_wh3l_top_13TeV_zveto_3l158->SetBinContent(14,0.105262);
   new_histo_group_ZZ_wh3l_top_13TeV_zveto_3l158->SetBinContent(16,0.04142581);
   new_histo_group_ZZ_wh3l_top_13TeV_zveto_3l158->SetBinContent(19,0.156278);
   new_histo_group_ZZ_wh3l_top_13TeV_zveto_3l158->SetBinError(6,0.07798991);
   new_histo_group_ZZ_wh3l_top_13TeV_zveto_3l158->SetBinError(7,0.0812283);
   new_histo_group_ZZ_wh3l_top_13TeV_zveto_3l158->SetBinError(8,0.08037906);
   new_histo_group_ZZ_wh3l_top_13TeV_zveto_3l158->SetBinError(10,0.04841528);
   new_histo_group_ZZ_wh3l_top_13TeV_zveto_3l158->SetBinError(11,0.04332647);
   new_histo_group_ZZ_wh3l_top_13TeV_zveto_3l158->SetBinError(12,0.06434838);
   new_histo_group_ZZ_wh3l_top_13TeV_zveto_3l158->SetBinError(14,0.05784587);
   new_histo_group_ZZ_wh3l_top_13TeV_zveto_3l158->SetBinError(16,0.04142581);
   new_histo_group_ZZ_wh3l_top_13TeV_zveto_3l158->SetBinError(19,0.08110553);
   new_histo_group_ZZ_wh3l_top_13TeV_zveto_3l158->SetEntries(25);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_top_13TeV_zveto_3l158->SetFillColor(ci);
   new_histo_group_ZZ_wh3l_top_13TeV_zveto_3l158->SetFillStyle(3001);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_top_13TeV_zveto_3l158->SetLineColor(ci);
   new_histo_group_ZZ_wh3l_top_13TeV_zveto_3l158->GetXaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_top_13TeV_zveto_3l158->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_top_13TeV_zveto_3l158->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_top_13TeV_zveto_3l158->GetXaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_top_13TeV_zveto_3l158->GetYaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_top_13TeV_zveto_3l158->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_top_13TeV_zveto_3l158->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_top_13TeV_zveto_3l158->GetYaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_top_13TeV_zveto_3l158->GetZaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_top_13TeV_zveto_3l158->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_top_13TeV_zveto_3l158->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_top_13TeV_zveto_3l158->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_top_13TeV_zveto_3l->Add(new_histo_group_ZZ_wh3l_top_13TeV_zveto_3l,"");
   
   TH1D *new_histo_group_WZ_wh3l_top_13TeV_zveto_3l159 = new TH1D("new_histo_group_WZ_wh3l_top_13TeV_zveto_3l159","histo_WZ",20,0,100);
   new_histo_group_WZ_wh3l_top_13TeV_zveto_3l159->SetBinContent(6,0.9505331);
   new_histo_group_WZ_wh3l_top_13TeV_zveto_3l159->SetBinContent(7,0.96884);
   new_histo_group_WZ_wh3l_top_13TeV_zveto_3l159->SetBinContent(8,0.8413991);
   new_histo_group_WZ_wh3l_top_13TeV_zveto_3l159->SetBinContent(9,0.7141216);
   new_histo_group_WZ_wh3l_top_13TeV_zveto_3l159->SetBinContent(10,0.7768993);
   new_histo_group_WZ_wh3l_top_13TeV_zveto_3l159->SetBinContent(11,0.6286101);
   new_histo_group_WZ_wh3l_top_13TeV_zveto_3l159->SetBinContent(12,0.6026987);
   new_histo_group_WZ_wh3l_top_13TeV_zveto_3l159->SetBinContent(13,0.5648541);
   new_histo_group_WZ_wh3l_top_13TeV_zveto_3l159->SetBinContent(14,0.4508072);
   new_histo_group_WZ_wh3l_top_13TeV_zveto_3l159->SetBinContent(15,0.5407534);
   new_histo_group_WZ_wh3l_top_13TeV_zveto_3l159->SetBinContent(16,0.4439344);
   new_histo_group_WZ_wh3l_top_13TeV_zveto_3l159->SetBinContent(17,0.03584222);
   new_histo_group_WZ_wh3l_top_13TeV_zveto_3l159->SetBinContent(18,0.05737896);
   new_histo_group_WZ_wh3l_top_13TeV_zveto_3l159->SetBinContent(19,1.30959);
   new_histo_group_WZ_wh3l_top_13TeV_zveto_3l159->SetBinError(6,0.07169596);
   new_histo_group_WZ_wh3l_top_13TeV_zveto_3l159->SetBinError(7,0.07253099);
   new_histo_group_WZ_wh3l_top_13TeV_zveto_3l159->SetBinError(8,0.06816238);
   new_histo_group_WZ_wh3l_top_13TeV_zveto_3l159->SetBinError(9,0.06320629);
   new_histo_group_WZ_wh3l_top_13TeV_zveto_3l159->SetBinError(10,0.06614073);
   new_histo_group_WZ_wh3l_top_13TeV_zveto_3l159->SetBinError(11,0.05799047);
   new_histo_group_WZ_wh3l_top_13TeV_zveto_3l159->SetBinError(12,0.05848827);
   new_histo_group_WZ_wh3l_top_13TeV_zveto_3l159->SetBinError(13,0.0548379);
   new_histo_group_WZ_wh3l_top_13TeV_zveto_3l159->SetBinError(14,0.04865118);
   new_histo_group_WZ_wh3l_top_13TeV_zveto_3l159->SetBinError(15,0.05365192);
   new_histo_group_WZ_wh3l_top_13TeV_zveto_3l159->SetBinError(16,0.04840493);
   new_histo_group_WZ_wh3l_top_13TeV_zveto_3l159->SetBinError(17,0.01366587);
   new_histo_group_WZ_wh3l_top_13TeV_zveto_3l159->SetBinError(18,0.01832339);
   new_histo_group_WZ_wh3l_top_13TeV_zveto_3l159->SetBinError(19,0.08353358);
   new_histo_group_WZ_wh3l_top_13TeV_zveto_3l159->SetEntries(1809);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_top_13TeV_zveto_3l159->SetFillColor(ci);
   new_histo_group_WZ_wh3l_top_13TeV_zveto_3l159->SetFillStyle(3001);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_top_13TeV_zveto_3l159->SetLineColor(ci);
   new_histo_group_WZ_wh3l_top_13TeV_zveto_3l159->GetXaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_top_13TeV_zveto_3l159->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_top_13TeV_zveto_3l159->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_top_13TeV_zveto_3l159->GetXaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_top_13TeV_zveto_3l159->GetYaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_top_13TeV_zveto_3l159->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_top_13TeV_zveto_3l159->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_top_13TeV_zveto_3l159->GetYaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_top_13TeV_zveto_3l159->GetZaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_top_13TeV_zveto_3l159->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_top_13TeV_zveto_3l159->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_top_13TeV_zveto_3l159->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_top_13TeV_zveto_3l->Add(new_histo_group_WZ_wh3l_top_13TeV_zveto_3l,"");
   thsBackground_grouped_wh3l_top_13TeV_zveto_3l->Draw("hist same");
   
   Double_t _fx3039[20] = {
   2.5,
   7.5,
   12.5,
   17.5,
   22.5,
   27.5,
   32.5,
   37.5,
   42.5,
   47.5,
   52.5,
   57.5,
   62.5,
   67.5,
   72.5,
   77.5,
   82.5,
   87.5,
   92.5,
   97.5};
   Double_t _fy3039[20] = {
   0,
   0,
   0,
   0,
   0,
   4.948831,
   6.067771,
   4.015753,
   2.916754,
   2.315295,
   3.133381,
   2.254221,
   2.972004,
   0.4942972,
   1.549998,
   0.7647773,
   0.2339811,
   0.05814042,
   17.50929,
   0};
   Double_t _felx3039[20] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5};
   Double_t _fely3039[20] = {
   0,
   0,
   0,
   0,
   0,
   2.097523,
   2.393538,
   1.634652,
   1.320765,
   1.42133,
   1.623364,
   1.461246,
   1.412652,
   0.3442911,
   0.9938134,
   0.3786448,
   0.1649109,
   0.01908488,
   5.588001,
   0};
   Double_t _fehx3039[20] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5};
   Double_t _fehy3039[20] = {
   0,
   0,
   0,
   0,
   0,
   2.097522,
   2.393538,
   1.634651,
   1.320765,
   1.42133,
   1.62258,
   1.461246,
   1.412652,
   0.2113744,
   0.9938134,
   0.4281402,
   0.1649109,
   0.01908488,
   5.598649,
   0};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(20,_fx3039,_fy3039,_felx3039,_fehx3039,_fely3039,_fehy3039);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(12);
   grae->SetFillStyle(3004);
   grae->SetLineColor(12);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3039 = new TH1F("Graph_Graph3039","",100,0,110);
   Graph_Graph3039->SetMinimum(0);
   Graph_Graph3039->SetMaximum(25.41873);
   Graph_Graph3039->SetDirectory(0);
   Graph_Graph3039->SetStats(0);
   Graph_Graph3039->SetLineStyle(0);
   Graph_Graph3039->SetMarkerStyle(20);
   Graph_Graph3039->GetXaxis()->SetLabelFont(42);
   Graph_Graph3039->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3039->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3039->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3039->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3039->GetXaxis()->SetTitleFont(42);
   Graph_Graph3039->GetYaxis()->SetLabelFont(42);
   Graph_Graph3039->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3039->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3039->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3039->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3039->GetYaxis()->SetTitleFont(42);
   Graph_Graph3039->GetZaxis()->SetLabelFont(42);
   Graph_Graph3039->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3039->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3039->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3039->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3039);
   
   grae->Draw("2");
   
   Double_t _fx3040[20] = {
   2.5,
   7.5,
   12.5,
   17.5,
   22.5,
   27.5,
   32.5,
   37.5,
   42.5,
   47.5,
   52.5,
   57.5,
   62.5,
   67.5,
   72.5,
   77.5,
   82.5,
   87.5,
   92.5,
   97.5};
   Double_t _fy3040[20] = {
   0,
   0,
   0,
   0,
   0,
   3,
   3,
   3,
   3,
   7,
   1,
   4,
   3,
   2,
   1,
   1,
   0,
   0,
   11,
   0};
   Double_t _felx3040[20] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5};
   Double_t _fely3040[20] = {
   0,
   0,
   0,
   0,
   0,
   1.632727,
   1.632727,
   1.632727,
   1.632727,
   2.581513,
   0.8272524,
   1.914367,
   1.632727,
   1.29183,
   0.8272524,
   0.8272524,
   0,
   0,
   3.265636,
   0};
   Double_t _fehx3040[20] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5};
   Double_t _fehy3040[20] = {
   1.147908,
   1.147908,
   1.147908,
   1.147908,
   1.147908,
   2.918242,
   2.918242,
   2.918242,
   2.918242,
   3.770356,
   2.29957,
   3.162815,
   2.918242,
   2.63791,
   2.29957,
   2.29957,
   1.147908,
   1.147908,
   4.416609,
   1.147908};
   grae = new TGraphAsymmErrors(20,_fx3040,_fy3040,_felx3040,_fehx3040,_fely3040,_fehy3040);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(1);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3040 = new TH1F("Graph_Graph3040","",100,0,110);
   Graph_Graph3040->SetMinimum(0);
   Graph_Graph3040->SetMaximum(16.95827);
   Graph_Graph3040->SetDirectory(0);
   Graph_Graph3040->SetStats(0);
   Graph_Graph3040->SetLineStyle(0);
   Graph_Graph3040->SetMarkerStyle(20);
   Graph_Graph3040->GetXaxis()->SetLabelFont(42);
   Graph_Graph3040->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3040->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3040->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3040->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3040->GetXaxis()->SetTitleFont(42);
   Graph_Graph3040->GetYaxis()->SetLabelFont(42);
   Graph_Graph3040->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3040->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3040->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3040->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3040->GetYaxis()->SetTitleFont(42);
   Graph_Graph3040->GetZaxis()->SetLabelFont(42);
   Graph_Graph3040->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3040->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3040->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3040->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3040);
   
   grae->Draw("p0");
   
   TLegend *leg = new TLegend(0.2,0.7,0.8,0.9,NULL,"brNDC");
   leg->SetTextFont(62);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("new_histo_group_Fake_wh3l_top_13TeV_zveto_3l","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_top_13TeV_zveto_3l","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_top_13TeV_zveto_3l","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_top_13TeV_zveto_3l","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_top_13TeV_zveto_3l","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_top_13TeV_zveto_3l","WZ","F");

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
   entry=leg->AddEntry("new_histo_DATA_wh3l_top_13TeV_zveto_3l","Data","EPL");
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
   entry=leg->AddEntry("new_histo_group_Fake_wh3l_top_13TeV_zveto_3l","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_top_13TeV_zveto_3l","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_top_13TeV_zveto_3l","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_top_13TeV_zveto_3l","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_top_13TeV_zveto_3l","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_top_13TeV_zveto_3l","WZ","F");

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
   entry=leg->AddEntry("new_histo_DATA_wh3l_top_13TeV_zveto_3l","Data","EPL");
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
   
   TH1F *hframe_copy160 = new TH1F("hframe_copy160","",1000,0,100);
   hframe_copy160->SetMinimum(0);
   hframe_copy160->SetMaximum(43.77322);
   hframe_copy160->SetDirectory(0);
   hframe_copy160->SetStats(0);
   hframe_copy160->SetLineStyle(0);
   hframe_copy160->SetMarkerStyle(20);
   hframe_copy160->GetXaxis()->SetTitle("m_{ll} - M_{Z} [GeV]");
   hframe_copy160->GetXaxis()->SetNdivisions(506);
   hframe_copy160->GetXaxis()->SetLabelFont(42);
   hframe_copy160->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy160->GetXaxis()->SetLabelSize(0.05);
   hframe_copy160->GetXaxis()->SetTitleSize(0.06);
   hframe_copy160->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy160->GetXaxis()->SetTitleFont(42);
   hframe_copy160->GetYaxis()->SetTitle("Events");
   hframe_copy160->GetYaxis()->SetLabelFont(42);
   hframe_copy160->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy160->GetYaxis()->SetLabelSize(0.05);
   hframe_copy160->GetYaxis()->SetTitleSize(0.06);
   hframe_copy160->GetYaxis()->SetTitleOffset(1.25);
   hframe_copy160->GetYaxis()->SetTitleFont(42);
   hframe_copy160->GetZaxis()->SetLabelFont(42);
   hframe_copy160->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy160->GetZaxis()->SetLabelSize(0.05);
   hframe_copy160->GetZaxis()->SetTitleSize(0.06);
   hframe_copy160->GetZaxis()->SetTitleFont(42);
   hframe_copy160->Draw("sameaxis");
   ccwh3l_top_13TeV_zveto_3l->Modified();
   ccwh3l_top_13TeV_zveto_3l->cd();
   ccwh3l_top_13TeV_zveto_3l->SetSelected(ccwh3l_top_13TeV_zveto_3l);
}
