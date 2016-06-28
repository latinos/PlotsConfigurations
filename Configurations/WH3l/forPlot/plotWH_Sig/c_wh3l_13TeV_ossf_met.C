void c_wh3l_13TeV_ossf_met()
{
//=========Macro generated from canvas: ccwh3l_13TeV_ossf_met/cc
//=========  (Tue Jun 28 13:56:15 2016) by ROOT version6.02/13
   TCanvas *ccwh3l_13TeV_ossf_met = new TCanvas("ccwh3l_13TeV_ossf_met", "cc",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   ccwh3l_13TeV_ossf_met->SetHighLightColor(2);
   ccwh3l_13TeV_ossf_met->Range(-40,-1.40785,210,9.421764);
   ccwh3l_13TeV_ossf_met->SetFillColor(0);
   ccwh3l_13TeV_ossf_met->SetBorderMode(0);
   ccwh3l_13TeV_ossf_met->SetBorderSize(2);
   ccwh3l_13TeV_ossf_met->SetTickx(1);
   ccwh3l_13TeV_ossf_met->SetTicky(1);
   ccwh3l_13TeV_ossf_met->SetLeftMargin(0.16);
   ccwh3l_13TeV_ossf_met->SetRightMargin(0.04);
   ccwh3l_13TeV_ossf_met->SetTopMargin(0.05);
   ccwh3l_13TeV_ossf_met->SetBottomMargin(0.13);
   ccwh3l_13TeV_ossf_met->SetFrameFillStyle(0);
   ccwh3l_13TeV_ossf_met->SetFrameBorderMode(0);
   ccwh3l_13TeV_ossf_met->SetFrameFillStyle(0);
   ccwh3l_13TeV_ossf_met->SetFrameBorderMode(0);
   
   TH1F *hframe41 = new TH1F("hframe41","",1000,0,200);
   hframe41->SetMinimum(0);
   hframe41->SetMaximum(8.880283);
   hframe41->SetDirectory(0);
   hframe41->SetStats(0);
   hframe41->SetLineStyle(0);
   hframe41->SetMarkerStyle(20);
   hframe41->GetXaxis()->SetTitle("pfmet [GeV]");
   hframe41->GetXaxis()->SetNdivisions(506);
   hframe41->GetXaxis()->SetLabelFont(42);
   hframe41->GetXaxis()->SetLabelOffset(0.007);
   hframe41->GetXaxis()->SetLabelSize(0.05);
   hframe41->GetXaxis()->SetTitleSize(0.06);
   hframe41->GetXaxis()->SetTitleOffset(0.9);
   hframe41->GetXaxis()->SetTitleFont(42);
   hframe41->GetYaxis()->SetTitle("Events");
   hframe41->GetYaxis()->SetLabelFont(42);
   hframe41->GetYaxis()->SetLabelOffset(0.007);
   hframe41->GetYaxis()->SetLabelSize(0.05);
   hframe41->GetYaxis()->SetTitleSize(0.06);
   hframe41->GetYaxis()->SetTitleOffset(1.25);
   hframe41->GetYaxis()->SetTitleFont(42);
   hframe41->GetZaxis()->SetLabelFont(42);
   hframe41->GetZaxis()->SetLabelOffset(0.007);
   hframe41->GetZaxis()->SetLabelSize(0.05);
   hframe41->GetZaxis()->SetTitleSize(0.06);
   hframe41->GetZaxis()->SetTitleFont(42);
   hframe41->Draw(" ");
   
   THStack *thsBackground_grouped_wh3l_13TeV_ossf_met = new THStack();
   thsBackground_grouped_wh3l_13TeV_ossf_met->SetName("thsBackground_grouped_wh3l_13TeV_ossf_met");
   thsBackground_grouped_wh3l_13TeV_ossf_met->SetTitle("thsBackground_grouped_wh3l_13TeV_ossf_met");
   
   TH1F *thsBackground_grouped_wh3l_13TeV_ossf_met_stack_9 = new TH1F("thsBackground_grouped_wh3l_13TeV_ossf_met_stack_9","thsBackground_grouped_wh3l_13TeV_ossf_met",40,0,200);
   thsBackground_grouped_wh3l_13TeV_ossf_met_stack_9->SetMinimum(-0.5832256);
   thsBackground_grouped_wh3l_13TeV_ossf_met_stack_9->SetMaximum(3.729719);
   thsBackground_grouped_wh3l_13TeV_ossf_met_stack_9->SetDirectory(0);
   thsBackground_grouped_wh3l_13TeV_ossf_met_stack_9->SetStats(0);
   thsBackground_grouped_wh3l_13TeV_ossf_met_stack_9->SetLineStyle(0);
   thsBackground_grouped_wh3l_13TeV_ossf_met_stack_9->SetMarkerStyle(20);
   thsBackground_grouped_wh3l_13TeV_ossf_met_stack_9->GetXaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_13TeV_ossf_met_stack_9->GetXaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_13TeV_ossf_met_stack_9->GetXaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_13TeV_ossf_met_stack_9->GetXaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_13TeV_ossf_met_stack_9->GetXaxis()->SetTitleOffset(0.9);
   thsBackground_grouped_wh3l_13TeV_ossf_met_stack_9->GetXaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_ossf_met_stack_9->GetYaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_13TeV_ossf_met_stack_9->GetYaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_13TeV_ossf_met_stack_9->GetYaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_13TeV_ossf_met_stack_9->GetYaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_13TeV_ossf_met_stack_9->GetYaxis()->SetTitleOffset(1.25);
   thsBackground_grouped_wh3l_13TeV_ossf_met_stack_9->GetYaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_ossf_met_stack_9->GetZaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_13TeV_ossf_met_stack_9->GetZaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_13TeV_ossf_met_stack_9->GetZaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_13TeV_ossf_met_stack_9->GetZaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_13TeV_ossf_met_stack_9->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_ossf_met->SetHistogram(thsBackground_grouped_wh3l_13TeV_ossf_met_stack_9);
   
   
   TH1D *new_histo_group_Fake_wh3l_13TeV_ossf_met42 = new TH1D("new_histo_group_Fake_wh3l_13TeV_ossf_met42","histo_Fake",40,0,200);
   new_histo_group_Fake_wh3l_13TeV_ossf_met42->SetBinContent(9,1.147206);
   new_histo_group_Fake_wh3l_13TeV_ossf_met42->SetBinContent(10,1.153169);
   new_histo_group_Fake_wh3l_13TeV_ossf_met42->SetBinContent(11,2.081309);
   new_histo_group_Fake_wh3l_13TeV_ossf_met42->SetBinContent(12,0.2044218);
   new_histo_group_Fake_wh3l_13TeV_ossf_met42->SetBinContent(13,-0.06872484);
   new_histo_group_Fake_wh3l_13TeV_ossf_met42->SetBinContent(14,-0.2047972);
   new_histo_group_Fake_wh3l_13TeV_ossf_met42->SetBinContent(15,0.5492142);
   new_histo_group_Fake_wh3l_13TeV_ossf_met42->SetBinContent(16,-0.1271619);
   new_histo_group_Fake_wh3l_13TeV_ossf_met42->SetBinContent(17,0.849891);
   new_histo_group_Fake_wh3l_13TeV_ossf_met42->SetBinContent(18,-0.05269274);
   new_histo_group_Fake_wh3l_13TeV_ossf_met42->SetBinContent(19,-0.1117942);
   new_histo_group_Fake_wh3l_13TeV_ossf_met42->SetBinContent(20,0.5148117);
   new_histo_group_Fake_wh3l_13TeV_ossf_met42->SetBinContent(21,-0.05545199);
   new_histo_group_Fake_wh3l_13TeV_ossf_met42->SetBinContent(22,0.8476363);
   new_histo_group_Fake_wh3l_13TeV_ossf_met42->SetBinContent(37,-0.008195123);
   new_histo_group_Fake_wh3l_13TeV_ossf_met42->SetBinError(9,1.088305);
   new_histo_group_Fake_wh3l_13TeV_ossf_met42->SetBinError(10,0.8604807);
   new_histo_group_Fake_wh3l_13TeV_ossf_met42->SetBinError(11,0.9307186);
   new_histo_group_Fake_wh3l_13TeV_ossf_met42->SetBinError(12,0.3210928);
   new_histo_group_Fake_wh3l_13TeV_ossf_met42->SetBinError(13,0.1949162);
   new_histo_group_Fake_wh3l_13TeV_ossf_met42->SetBinError(14,0.3784285);
   new_histo_group_Fake_wh3l_13TeV_ossf_met42->SetBinError(15,0.5492142);
   new_histo_group_Fake_wh3l_13TeV_ossf_met42->SetBinError(16,0.1271437);
   new_histo_group_Fake_wh3l_13TeV_ossf_met42->SetBinError(17,0.6316814);
   new_histo_group_Fake_wh3l_13TeV_ossf_met42->SetBinError(18,0.05210733);
   new_histo_group_Fake_wh3l_13TeV_ossf_met42->SetBinError(19,0.2242267);
   new_histo_group_Fake_wh3l_13TeV_ossf_met42->SetBinError(20,0.5208186);
   new_histo_group_Fake_wh3l_13TeV_ossf_met42->SetBinError(21,0.05545199);
   new_histo_group_Fake_wh3l_13TeV_ossf_met42->SetBinError(22,0.8476363);
   new_histo_group_Fake_wh3l_13TeV_ossf_met42->SetBinError(37,0.008195123);
   new_histo_group_Fake_wh3l_13TeV_ossf_met42->SetEntries(81);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_13TeV_ossf_met42->SetFillColor(ci);
   new_histo_group_Fake_wh3l_13TeV_ossf_met42->SetFillStyle(3001);

   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_13TeV_ossf_met42->SetLineColor(ci);
   new_histo_group_Fake_wh3l_13TeV_ossf_met42->GetXaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_13TeV_ossf_met42->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_13TeV_ossf_met42->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_13TeV_ossf_met42->GetXaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_13TeV_ossf_met42->GetYaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_13TeV_ossf_met42->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_13TeV_ossf_met42->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_13TeV_ossf_met42->GetYaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_13TeV_ossf_met42->GetZaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_13TeV_ossf_met42->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_13TeV_ossf_met42->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_13TeV_ossf_met42->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_ossf_met->Add(new_histo_group_Fake_wh3l_13TeV_ossf_met,"");
   
   TH1D *new_histo_group_WW_wh3l_13TeV_ossf_met43 = new TH1D("new_histo_group_WW_wh3l_13TeV_ossf_met43","histo_WW",40,0,200);
   new_histo_group_WW_wh3l_13TeV_ossf_met43->SetBinContent(9,0.0142084);
   new_histo_group_WW_wh3l_13TeV_ossf_met43->SetBinContent(10,0.03345312);
   new_histo_group_WW_wh3l_13TeV_ossf_met43->SetBinContent(13,0.01447441);
   new_histo_group_WW_wh3l_13TeV_ossf_met43->SetBinContent(16,0.01044191);
   new_histo_group_WW_wh3l_13TeV_ossf_met43->SetBinError(9,0.0142084);
   new_histo_group_WW_wh3l_13TeV_ossf_met43->SetBinError(10,0.02374035);
   new_histo_group_WW_wh3l_13TeV_ossf_met43->SetBinError(13,0.01447441);
   new_histo_group_WW_wh3l_13TeV_ossf_met43->SetBinError(16,0.01044191);
   new_histo_group_WW_wh3l_13TeV_ossf_met43->SetEntries(5);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_13TeV_ossf_met43->SetFillColor(ci);
   new_histo_group_WW_wh3l_13TeV_ossf_met43->SetFillStyle(3001);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_13TeV_ossf_met43->SetLineColor(ci);
   new_histo_group_WW_wh3l_13TeV_ossf_met43->GetXaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_13TeV_ossf_met43->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_13TeV_ossf_met43->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_13TeV_ossf_met43->GetXaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_13TeV_ossf_met43->GetYaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_13TeV_ossf_met43->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_13TeV_ossf_met43->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_13TeV_ossf_met43->GetYaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_13TeV_ossf_met43->GetZaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_13TeV_ossf_met43->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_13TeV_ossf_met43->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_13TeV_ossf_met43->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_ossf_met->Add(new_histo_group_WW_wh3l_13TeV_ossf_met,"");
   
   TH1D *new_histo_group_VVV_wh3l_13TeV_ossf_met44 = new TH1D("new_histo_group_VVV_wh3l_13TeV_ossf_met44","histo_VVV",40,0,200);
   new_histo_group_VVV_wh3l_13TeV_ossf_met44->SetBinContent(9,0.0006249245);
   new_histo_group_VVV_wh3l_13TeV_ossf_met44->SetBinContent(10,0.001240314);
   new_histo_group_VVV_wh3l_13TeV_ossf_met44->SetBinContent(11,0.0008959455);
   new_histo_group_VVV_wh3l_13TeV_ossf_met44->SetBinContent(13,0.001631847);
   new_histo_group_VVV_wh3l_13TeV_ossf_met44->SetBinContent(14,0.0006729142);
   new_histo_group_VVV_wh3l_13TeV_ossf_met44->SetBinContent(22,0.0006343185);
   new_histo_group_VVV_wh3l_13TeV_ossf_met44->SetBinContent(23,0.0006504452);
   new_histo_group_VVV_wh3l_13TeV_ossf_met44->SetBinContent(35,0.0006405607);
   new_histo_group_VVV_wh3l_13TeV_ossf_met44->SetBinError(9,0.0006249245);
   new_histo_group_VVV_wh3l_13TeV_ossf_met44->SetBinError(10,0.0008770975);
   new_histo_group_VVV_wh3l_13TeV_ossf_met44->SetBinError(11,0.0007189671);
   new_histo_group_VVV_wh3l_13TeV_ossf_met44->SetBinError(13,0.0009923548);
   new_histo_group_VVV_wh3l_13TeV_ossf_met44->SetBinError(14,0.0006729142);
   new_histo_group_VVV_wh3l_13TeV_ossf_met44->SetBinError(22,0.0006343185);
   new_histo_group_VVV_wh3l_13TeV_ossf_met44->SetBinError(23,0.0006504452);
   new_histo_group_VVV_wh3l_13TeV_ossf_met44->SetBinError(35,0.0006405607);
   new_histo_group_VVV_wh3l_13TeV_ossf_met44->SetEntries(12);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_13TeV_ossf_met44->SetFillColor(ci);
   new_histo_group_VVV_wh3l_13TeV_ossf_met44->SetFillStyle(3001);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_13TeV_ossf_met44->SetLineColor(ci);
   new_histo_group_VVV_wh3l_13TeV_ossf_met44->GetXaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_13TeV_ossf_met44->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_13TeV_ossf_met44->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_13TeV_ossf_met44->GetXaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_13TeV_ossf_met44->GetYaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_13TeV_ossf_met44->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_13TeV_ossf_met44->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_13TeV_ossf_met44->GetYaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_13TeV_ossf_met44->GetZaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_13TeV_ossf_met44->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_13TeV_ossf_met44->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_13TeV_ossf_met44->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_ossf_met->Add(new_histo_group_VVV_wh3l_13TeV_ossf_met,"");
   
   TH1D *new_histo_group_Vg_wh3l_13TeV_ossf_met45 = new TH1D("new_histo_group_Vg_wh3l_13TeV_ossf_met45","histo_Vg",40,0,200);
   new_histo_group_Vg_wh3l_13TeV_ossf_met45->SetBinContent(9,0.9327583);
   new_histo_group_Vg_wh3l_13TeV_ossf_met45->SetBinContent(10,0.8533485);
   new_histo_group_Vg_wh3l_13TeV_ossf_met45->SetBinContent(11,0.4091599);
   new_histo_group_Vg_wh3l_13TeV_ossf_met45->SetBinContent(12,0.4529023);
   new_histo_group_Vg_wh3l_13TeV_ossf_met45->SetBinError(9,0.3944573);
   new_histo_group_Vg_wh3l_13TeV_ossf_met45->SetBinError(10,0.2991175);
   new_histo_group_Vg_wh3l_13TeV_ossf_met45->SetBinError(11,0.1891369);
   new_histo_group_Vg_wh3l_13TeV_ossf_met45->SetBinError(12,0.2100381);
   new_histo_group_Vg_wh3l_13TeV_ossf_met45->SetEntries(42);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_13TeV_ossf_met45->SetFillColor(ci);
   new_histo_group_Vg_wh3l_13TeV_ossf_met45->SetFillStyle(3001);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_13TeV_ossf_met45->SetLineColor(ci);
   new_histo_group_Vg_wh3l_13TeV_ossf_met45->GetXaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_13TeV_ossf_met45->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_13TeV_ossf_met45->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_13TeV_ossf_met45->GetXaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_13TeV_ossf_met45->GetYaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_13TeV_ossf_met45->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_13TeV_ossf_met45->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_13TeV_ossf_met45->GetYaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_13TeV_ossf_met45->GetZaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_13TeV_ossf_met45->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_13TeV_ossf_met45->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_13TeV_ossf_met45->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_ossf_met->Add(new_histo_group_Vg_wh3l_13TeV_ossf_met,"");
   
   TH1D *new_histo_group_ZZ_wh3l_13TeV_ossf_met46 = new TH1D("new_histo_group_ZZ_wh3l_13TeV_ossf_met46","histo_ZZ",40,0,200);
   new_histo_group_ZZ_wh3l_13TeV_ossf_met46->SetBinContent(9,0.1619121);
   new_histo_group_ZZ_wh3l_13TeV_ossf_met46->SetBinContent(10,0.1514073);
   new_histo_group_ZZ_wh3l_13TeV_ossf_met46->SetBinContent(11,0.1278668);
   new_histo_group_ZZ_wh3l_13TeV_ossf_met46->SetBinContent(12,1.493259e-08);
   new_histo_group_ZZ_wh3l_13TeV_ossf_met46->SetBinContent(13,0.07189054);
   new_histo_group_ZZ_wh3l_13TeV_ossf_met46->SetBinContent(15,0.02711696);
   new_histo_group_ZZ_wh3l_13TeV_ossf_met46->SetBinContent(24,0.02856258);
   new_histo_group_ZZ_wh3l_13TeV_ossf_met46->SetBinError(9,0.08296664);
   new_histo_group_ZZ_wh3l_13TeV_ossf_met46->SetBinError(10,0.07657922);
   new_histo_group_ZZ_wh3l_13TeV_ossf_met46->SetBinError(11,0.07072701);
   new_histo_group_ZZ_wh3l_13TeV_ossf_met46->SetBinError(12,1.493259e-08);
   new_histo_group_ZZ_wh3l_13TeV_ossf_met46->SetBinError(13,0.05189561);
   new_histo_group_ZZ_wh3l_13TeV_ossf_met46->SetBinError(15,0.02711696);
   new_histo_group_ZZ_wh3l_13TeV_ossf_met46->SetBinError(24,0.02856258);
   new_histo_group_ZZ_wh3l_13TeV_ossf_met46->SetEntries(17);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_13TeV_ossf_met46->SetFillColor(ci);
   new_histo_group_ZZ_wh3l_13TeV_ossf_met46->SetFillStyle(3001);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_13TeV_ossf_met46->SetLineColor(ci);
   new_histo_group_ZZ_wh3l_13TeV_ossf_met46->GetXaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_13TeV_ossf_met46->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_13TeV_ossf_met46->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_13TeV_ossf_met46->GetXaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_13TeV_ossf_met46->GetYaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_13TeV_ossf_met46->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_13TeV_ossf_met46->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_13TeV_ossf_met46->GetYaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_13TeV_ossf_met46->GetZaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_13TeV_ossf_met46->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_13TeV_ossf_met46->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_13TeV_ossf_met46->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_ossf_met->Add(new_histo_group_ZZ_wh3l_13TeV_ossf_met,"");
   
   TH1D *new_histo_group_WZ_wh3l_13TeV_ossf_met47 = new TH1D("new_histo_group_WZ_wh3l_13TeV_ossf_met47","histo_WZ",40,0,200);
   new_histo_group_WZ_wh3l_13TeV_ossf_met47->SetBinContent(9,1.094464);
   new_histo_group_WZ_wh3l_13TeV_ossf_met47->SetBinContent(10,1.0994);
   new_histo_group_WZ_wh3l_13TeV_ossf_met47->SetBinContent(11,0.8741848);
   new_histo_group_WZ_wh3l_13TeV_ossf_met47->SetBinContent(12,0.8273664);
   new_histo_group_WZ_wh3l_13TeV_ossf_met47->SetBinContent(13,0.5807382);
   new_histo_group_WZ_wh3l_13TeV_ossf_met47->SetBinContent(14,0.503703);
   new_histo_group_WZ_wh3l_13TeV_ossf_met47->SetBinContent(15,0.3687481);
   new_histo_group_WZ_wh3l_13TeV_ossf_met47->SetBinContent(16,0.2969857);
   new_histo_group_WZ_wh3l_13TeV_ossf_met47->SetBinContent(17,0.2465318);
   new_histo_group_WZ_wh3l_13TeV_ossf_met47->SetBinContent(18,0.1703759);
   new_histo_group_WZ_wh3l_13TeV_ossf_met47->SetBinContent(19,0.1010132);
   new_histo_group_WZ_wh3l_13TeV_ossf_met47->SetBinContent(20,0.09898924);
   new_histo_group_WZ_wh3l_13TeV_ossf_met47->SetBinContent(21,0.1028862);
   new_histo_group_WZ_wh3l_13TeV_ossf_met47->SetBinContent(22,0.09274451);
   new_histo_group_WZ_wh3l_13TeV_ossf_met47->SetBinContent(23,0.07088707);
   new_histo_group_WZ_wh3l_13TeV_ossf_met47->SetBinContent(24,0.04896016);
   new_histo_group_WZ_wh3l_13TeV_ossf_met47->SetBinContent(25,0.03687642);
   new_histo_group_WZ_wh3l_13TeV_ossf_met47->SetBinContent(26,0.02323807);
   new_histo_group_WZ_wh3l_13TeV_ossf_met47->SetBinContent(27,0.01927328);
   new_histo_group_WZ_wh3l_13TeV_ossf_met47->SetBinContent(28,0.00988046);
   new_histo_group_WZ_wh3l_13TeV_ossf_met47->SetBinContent(29,0.02842813);
   new_histo_group_WZ_wh3l_13TeV_ossf_met47->SetBinContent(30,0.01662978);
   new_histo_group_WZ_wh3l_13TeV_ossf_met47->SetBinContent(31,0.01053258);
   new_histo_group_WZ_wh3l_13TeV_ossf_met47->SetBinContent(32,0.02028379);
   new_histo_group_WZ_wh3l_13TeV_ossf_met47->SetBinContent(33,0.01843559);
   new_histo_group_WZ_wh3l_13TeV_ossf_met47->SetBinContent(34,0.01204565);
   new_histo_group_WZ_wh3l_13TeV_ossf_met47->SetBinContent(35,0.01084022);
   new_histo_group_WZ_wh3l_13TeV_ossf_met47->SetBinContent(36,0.01123944);
   new_histo_group_WZ_wh3l_13TeV_ossf_met47->SetBinContent(37,0.02264966);
   new_histo_group_WZ_wh3l_13TeV_ossf_met47->SetBinContent(38,0.002637757);
   new_histo_group_WZ_wh3l_13TeV_ossf_met47->SetBinContent(39,0.01342807);
   new_histo_group_WZ_wh3l_13TeV_ossf_met47->SetBinContent(40,0.00634668);
   new_histo_group_WZ_wh3l_13TeV_ossf_met47->SetBinContent(41,0.07963444);
   new_histo_group_WZ_wh3l_13TeV_ossf_met47->SetBinError(9,0.07705982);
   new_histo_group_WZ_wh3l_13TeV_ossf_met47->SetBinError(10,0.07773178);
   new_histo_group_WZ_wh3l_13TeV_ossf_met47->SetBinError(11,0.06908481);
   new_histo_group_WZ_wh3l_13TeV_ossf_met47->SetBinError(12,0.06773342);
   new_histo_group_WZ_wh3l_13TeV_ossf_met47->SetBinError(13,0.05620768);
   new_histo_group_WZ_wh3l_13TeV_ossf_met47->SetBinError(14,0.05273352);
   new_histo_group_WZ_wh3l_13TeV_ossf_met47->SetBinError(15,0.04481629);
   new_histo_group_WZ_wh3l_13TeV_ossf_met47->SetBinError(16,0.03997816);
   new_histo_group_WZ_wh3l_13TeV_ossf_met47->SetBinError(17,0.03607656);
   new_histo_group_WZ_wh3l_13TeV_ossf_met47->SetBinError(18,0.03044673);
   new_histo_group_WZ_wh3l_13TeV_ossf_met47->SetBinError(19,0.0220476);
   new_histo_group_WZ_wh3l_13TeV_ossf_met47->SetBinError(20,0.02272537);
   new_histo_group_WZ_wh3l_13TeV_ossf_met47->SetBinError(21,0.0232388);
   new_histo_group_WZ_wh3l_13TeV_ossf_met47->SetBinError(22,0.02262537);
   new_histo_group_WZ_wh3l_13TeV_ossf_met47->SetBinError(23,0.01915326);
   new_histo_group_WZ_wh3l_13TeV_ossf_met47->SetBinError(24,0.01578889);
   new_histo_group_WZ_wh3l_13TeV_ossf_met47->SetBinError(25,0.01453736);
   new_histo_group_WZ_wh3l_13TeV_ossf_met47->SetBinError(26,0.01130215);
   new_histo_group_WZ_wh3l_13TeV_ossf_met47->SetBinError(27,0.009952158);
   new_histo_group_WZ_wh3l_13TeV_ossf_met47->SetBinError(28,0.006766018);
   new_histo_group_WZ_wh3l_13TeV_ossf_met47->SetBinError(29,0.01274425);
   new_histo_group_WZ_wh3l_13TeV_ossf_met47->SetBinError(30,0.009454112);
   new_histo_group_WZ_wh3l_13TeV_ossf_met47->SetBinError(31,0.007354234);
   new_histo_group_WZ_wh3l_13TeV_ossf_met47->SetBinError(32,0.01018666);
   new_histo_group_WZ_wh3l_13TeV_ossf_met47->SetBinError(33,0.01065415);
   new_histo_group_WZ_wh3l_13TeV_ossf_met47->SetBinError(34,0.007001037);
   new_histo_group_WZ_wh3l_13TeV_ossf_met47->SetBinError(35,0.007665218);
   new_histo_group_WZ_wh3l_13TeV_ossf_met47->SetBinError(36,0.007952499);
   new_histo_group_WZ_wh3l_13TeV_ossf_met47->SetBinError(37,0.01109833);
   new_histo_group_WZ_wh3l_13TeV_ossf_met47->SetBinError(38,0.002610874);
   new_histo_group_WZ_wh3l_13TeV_ossf_met47->SetBinError(39,0.008016728);
   new_histo_group_WZ_wh3l_13TeV_ossf_met47->SetBinError(40,0.00634668);
   new_histo_group_WZ_wh3l_13TeV_ossf_met47->SetBinError(41,0.02056406);
   new_histo_group_WZ_wh3l_13TeV_ossf_met47->SetEntries(1419);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_13TeV_ossf_met47->SetFillColor(ci);
   new_histo_group_WZ_wh3l_13TeV_ossf_met47->SetFillStyle(3001);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_13TeV_ossf_met47->SetLineColor(ci);
   new_histo_group_WZ_wh3l_13TeV_ossf_met47->GetXaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_13TeV_ossf_met47->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_13TeV_ossf_met47->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_13TeV_ossf_met47->GetXaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_13TeV_ossf_met47->GetYaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_13TeV_ossf_met47->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_13TeV_ossf_met47->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_13TeV_ossf_met47->GetYaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_13TeV_ossf_met47->GetZaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_13TeV_ossf_met47->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_13TeV_ossf_met47->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_13TeV_ossf_met47->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_ossf_met->Add(new_histo_group_WZ_wh3l_13TeV_ossf_met,"");
   
   TH1D *new_histo_group_Higgs_wh3l_13TeV_ossf_met48 = new TH1D("new_histo_group_Higgs_wh3l_13TeV_ossf_met48","histo_H_htt",40,0,200);
   new_histo_group_Higgs_wh3l_13TeV_ossf_met48->SetBinContent(9,0.07630462);
   new_histo_group_Higgs_wh3l_13TeV_ossf_met48->SetBinContent(10,0.04787202);
   new_histo_group_Higgs_wh3l_13TeV_ossf_met48->SetBinContent(11,0.05869628);
   new_histo_group_Higgs_wh3l_13TeV_ossf_met48->SetBinContent(12,0.0405445);
   new_histo_group_Higgs_wh3l_13TeV_ossf_met48->SetBinContent(13,0.04815231);
   new_histo_group_Higgs_wh3l_13TeV_ossf_met48->SetBinContent(14,0.05517352);
   new_histo_group_Higgs_wh3l_13TeV_ossf_met48->SetBinContent(15,0.03698865);
   new_histo_group_Higgs_wh3l_13TeV_ossf_met48->SetBinContent(16,0.0378505);
   new_histo_group_Higgs_wh3l_13TeV_ossf_met48->SetBinContent(17,0.03272754);
   new_histo_group_Higgs_wh3l_13TeV_ossf_met48->SetBinContent(18,0.02879806);
   new_histo_group_Higgs_wh3l_13TeV_ossf_met48->SetBinContent(19,0.0293155);
   new_histo_group_Higgs_wh3l_13TeV_ossf_met48->SetBinContent(20,0.01465449);
   new_histo_group_Higgs_wh3l_13TeV_ossf_met48->SetBinContent(21,0.02053347);
   new_histo_group_Higgs_wh3l_13TeV_ossf_met48->SetBinContent(22,0.01548955);
   new_histo_group_Higgs_wh3l_13TeV_ossf_met48->SetBinContent(23,0.01245599);
   new_histo_group_Higgs_wh3l_13TeV_ossf_met48->SetBinContent(24,0.006056201);
   new_histo_group_Higgs_wh3l_13TeV_ossf_met48->SetBinContent(25,0.00464452);
   new_histo_group_Higgs_wh3l_13TeV_ossf_met48->SetBinContent(26,0.005454139);
   new_histo_group_Higgs_wh3l_13TeV_ossf_met48->SetBinContent(27,0.002945882);
   new_histo_group_Higgs_wh3l_13TeV_ossf_met48->SetBinContent(28,0.004498212);
   new_histo_group_Higgs_wh3l_13TeV_ossf_met48->SetBinContent(29,0.0003050854);
   new_histo_group_Higgs_wh3l_13TeV_ossf_met48->SetBinContent(30,0.001676727);
   new_histo_group_Higgs_wh3l_13TeV_ossf_met48->SetBinContent(31,0.002416131);
   new_histo_group_Higgs_wh3l_13TeV_ossf_met48->SetBinContent(32,0.002680088);
   new_histo_group_Higgs_wh3l_13TeV_ossf_met48->SetBinContent(33,0.0002870945);
   new_histo_group_Higgs_wh3l_13TeV_ossf_met48->SetBinContent(34,0.001635037);
   new_histo_group_Higgs_wh3l_13TeV_ossf_met48->SetBinContent(35,0.001133816);
   new_histo_group_Higgs_wh3l_13TeV_ossf_met48->SetBinContent(36,0.001936098);
   new_histo_group_Higgs_wh3l_13TeV_ossf_met48->SetBinContent(38,0.0001986669);
   new_histo_group_Higgs_wh3l_13TeV_ossf_met48->SetBinContent(39,0.002418081);
   new_histo_group_Higgs_wh3l_13TeV_ossf_met48->SetBinContent(41,0.003357599);
   new_histo_group_Higgs_wh3l_13TeV_ossf_met48->SetBinError(9,0.009229075);
   new_histo_group_Higgs_wh3l_13TeV_ossf_met48->SetBinError(10,0.007175388);
   new_histo_group_Higgs_wh3l_13TeV_ossf_met48->SetBinError(11,0.007705597);
   new_histo_group_Higgs_wh3l_13TeV_ossf_met48->SetBinError(12,0.00664137);
   new_histo_group_Higgs_wh3l_13TeV_ossf_met48->SetBinError(13,0.008165027);
   new_histo_group_Higgs_wh3l_13TeV_ossf_met48->SetBinError(14,0.008027982);
   new_histo_group_Higgs_wh3l_13TeV_ossf_met48->SetBinError(15,0.006775689);
   new_histo_group_Higgs_wh3l_13TeV_ossf_met48->SetBinError(16,0.006820869);
   new_histo_group_Higgs_wh3l_13TeV_ossf_met48->SetBinError(17,0.006419052);
   new_histo_group_Higgs_wh3l_13TeV_ossf_met48->SetBinError(18,0.005731769);
   new_histo_group_Higgs_wh3l_13TeV_ossf_met48->SetBinError(19,0.006662101);
   new_histo_group_Higgs_wh3l_13TeV_ossf_met48->SetBinError(20,0.003697374);
   new_histo_group_Higgs_wh3l_13TeV_ossf_met48->SetBinError(21,0.005226964);
   new_histo_group_Higgs_wh3l_13TeV_ossf_met48->SetBinError(22,0.004353353);
   new_histo_group_Higgs_wh3l_13TeV_ossf_met48->SetBinError(23,0.004194506);
   new_histo_group_Higgs_wh3l_13TeV_ossf_met48->SetBinError(24,0.002622062);
   new_histo_group_Higgs_wh3l_13TeV_ossf_met48->SetBinError(25,0.002321973);
   new_histo_group_Higgs_wh3l_13TeV_ossf_met48->SetBinError(26,0.00322481);
   new_histo_group_Higgs_wh3l_13TeV_ossf_met48->SetBinError(27,0.002330168);
   new_histo_group_Higgs_wh3l_13TeV_ossf_met48->SetBinError(28,0.002509928);
   new_histo_group_Higgs_wh3l_13TeV_ossf_met48->SetBinError(29,0.0003050854);
   new_histo_group_Higgs_wh3l_13TeV_ossf_met48->SetBinError(30,0.001230824);
   new_histo_group_Higgs_wh3l_13TeV_ossf_met48->SetBinError(31,0.001661297);
   new_histo_group_Higgs_wh3l_13TeV_ossf_met48->SetBinError(32,0.001792574);
   new_histo_group_Higgs_wh3l_13TeV_ossf_met48->SetBinError(33,0.0002870945);
   new_histo_group_Higgs_wh3l_13TeV_ossf_met48->SetBinError(34,0.001175821);
   new_histo_group_Higgs_wh3l_13TeV_ossf_met48->SetBinError(35,0.0007658713);
   new_histo_group_Higgs_wh3l_13TeV_ossf_met48->SetBinError(36,0.00161891);
   new_histo_group_Higgs_wh3l_13TeV_ossf_met48->SetBinError(38,0.0001986669);
   new_histo_group_Higgs_wh3l_13TeV_ossf_met48->SetBinError(39,0.001712831);
   new_histo_group_Higgs_wh3l_13TeV_ossf_met48->SetBinError(41,0.002377921);
   new_histo_group_Higgs_wh3l_13TeV_ossf_met48->SetEntries(946);
   new_histo_group_Higgs_wh3l_13TeV_ossf_met48->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_13TeV_ossf_met48->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_13TeV_ossf_met48->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_13TeV_ossf_met48->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_13TeV_ossf_met48->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_ossf_met48->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_ossf_met48->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_13TeV_ossf_met48->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_13TeV_ossf_met48->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_ossf_met48->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_ossf_met48->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_13TeV_ossf_met48->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_13TeV_ossf_met48->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_ossf_met48->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_ossf_met48->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_ossf_met->Add(new_histo_group_Higgs_wh3l_13TeV_ossf_met,"");
   thsBackground_grouped_wh3l_13TeV_ossf_met->Draw("hist same");
   
   thsSignal_grouped_wh3l_13TeV_ossf_met = new THStack();
   thsSignal_grouped_wh3l_13TeV_ossf_met->SetName("thsSignal_grouped_wh3l_13TeV_ossf_met");
   thsSignal_grouped_wh3l_13TeV_ossf_met->SetTitle("thsSignal_grouped_wh3l_13TeV_ossf_met");
   
   TH1F *thsSignal_grouped_wh3l_13TeV_ossf_met_stack_10 = new TH1F("thsSignal_grouped_wh3l_13TeV_ossf_met_stack_10","thsSignal_grouped_wh3l_13TeV_ossf_met",40,0,200);
   thsSignal_grouped_wh3l_13TeV_ossf_met_stack_10->SetMinimum(0);
   thsSignal_grouped_wh3l_13TeV_ossf_met_stack_10->SetMaximum(0.08981038);
   thsSignal_grouped_wh3l_13TeV_ossf_met_stack_10->SetDirectory(0);
   thsSignal_grouped_wh3l_13TeV_ossf_met_stack_10->SetStats(0);
   thsSignal_grouped_wh3l_13TeV_ossf_met_stack_10->SetLineStyle(0);
   thsSignal_grouped_wh3l_13TeV_ossf_met_stack_10->SetMarkerStyle(20);
   thsSignal_grouped_wh3l_13TeV_ossf_met_stack_10->GetXaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_13TeV_ossf_met_stack_10->GetXaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_13TeV_ossf_met_stack_10->GetXaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_13TeV_ossf_met_stack_10->GetXaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_13TeV_ossf_met_stack_10->GetXaxis()->SetTitleOffset(0.9);
   thsSignal_grouped_wh3l_13TeV_ossf_met_stack_10->GetXaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_13TeV_ossf_met_stack_10->GetYaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_13TeV_ossf_met_stack_10->GetYaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_13TeV_ossf_met_stack_10->GetYaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_13TeV_ossf_met_stack_10->GetYaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_13TeV_ossf_met_stack_10->GetYaxis()->SetTitleOffset(1.25);
   thsSignal_grouped_wh3l_13TeV_ossf_met_stack_10->GetYaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_13TeV_ossf_met_stack_10->GetZaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_13TeV_ossf_met_stack_10->GetZaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_13TeV_ossf_met_stack_10->GetZaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_13TeV_ossf_met_stack_10->GetZaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_13TeV_ossf_met_stack_10->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_13TeV_ossf_met->SetHistogram(thsSignal_grouped_wh3l_13TeV_ossf_met_stack_10);
   
   
   TH1D *new_histo_group_Higgs_wh3l_13TeV_ossf_met49 = new TH1D("new_histo_group_Higgs_wh3l_13TeV_ossf_met49","histo_H_htt",40,0,200);
   new_histo_group_Higgs_wh3l_13TeV_ossf_met49->SetBinContent(9,0.07630462);
   new_histo_group_Higgs_wh3l_13TeV_ossf_met49->SetBinContent(10,0.04787202);
   new_histo_group_Higgs_wh3l_13TeV_ossf_met49->SetBinContent(11,0.05869628);
   new_histo_group_Higgs_wh3l_13TeV_ossf_met49->SetBinContent(12,0.0405445);
   new_histo_group_Higgs_wh3l_13TeV_ossf_met49->SetBinContent(13,0.04815231);
   new_histo_group_Higgs_wh3l_13TeV_ossf_met49->SetBinContent(14,0.05517352);
   new_histo_group_Higgs_wh3l_13TeV_ossf_met49->SetBinContent(15,0.03698865);
   new_histo_group_Higgs_wh3l_13TeV_ossf_met49->SetBinContent(16,0.0378505);
   new_histo_group_Higgs_wh3l_13TeV_ossf_met49->SetBinContent(17,0.03272754);
   new_histo_group_Higgs_wh3l_13TeV_ossf_met49->SetBinContent(18,0.02879806);
   new_histo_group_Higgs_wh3l_13TeV_ossf_met49->SetBinContent(19,0.0293155);
   new_histo_group_Higgs_wh3l_13TeV_ossf_met49->SetBinContent(20,0.01465449);
   new_histo_group_Higgs_wh3l_13TeV_ossf_met49->SetBinContent(21,0.02053347);
   new_histo_group_Higgs_wh3l_13TeV_ossf_met49->SetBinContent(22,0.01548955);
   new_histo_group_Higgs_wh3l_13TeV_ossf_met49->SetBinContent(23,0.01245599);
   new_histo_group_Higgs_wh3l_13TeV_ossf_met49->SetBinContent(24,0.006056201);
   new_histo_group_Higgs_wh3l_13TeV_ossf_met49->SetBinContent(25,0.00464452);
   new_histo_group_Higgs_wh3l_13TeV_ossf_met49->SetBinContent(26,0.005454139);
   new_histo_group_Higgs_wh3l_13TeV_ossf_met49->SetBinContent(27,0.002945882);
   new_histo_group_Higgs_wh3l_13TeV_ossf_met49->SetBinContent(28,0.004498212);
   new_histo_group_Higgs_wh3l_13TeV_ossf_met49->SetBinContent(29,0.0003050854);
   new_histo_group_Higgs_wh3l_13TeV_ossf_met49->SetBinContent(30,0.001676727);
   new_histo_group_Higgs_wh3l_13TeV_ossf_met49->SetBinContent(31,0.002416131);
   new_histo_group_Higgs_wh3l_13TeV_ossf_met49->SetBinContent(32,0.002680088);
   new_histo_group_Higgs_wh3l_13TeV_ossf_met49->SetBinContent(33,0.0002870945);
   new_histo_group_Higgs_wh3l_13TeV_ossf_met49->SetBinContent(34,0.001635037);
   new_histo_group_Higgs_wh3l_13TeV_ossf_met49->SetBinContent(35,0.001133816);
   new_histo_group_Higgs_wh3l_13TeV_ossf_met49->SetBinContent(36,0.001936098);
   new_histo_group_Higgs_wh3l_13TeV_ossf_met49->SetBinContent(38,0.0001986669);
   new_histo_group_Higgs_wh3l_13TeV_ossf_met49->SetBinContent(39,0.002418081);
   new_histo_group_Higgs_wh3l_13TeV_ossf_met49->SetBinContent(41,0.003357599);
   new_histo_group_Higgs_wh3l_13TeV_ossf_met49->SetBinError(9,0.009229075);
   new_histo_group_Higgs_wh3l_13TeV_ossf_met49->SetBinError(10,0.007175388);
   new_histo_group_Higgs_wh3l_13TeV_ossf_met49->SetBinError(11,0.007705597);
   new_histo_group_Higgs_wh3l_13TeV_ossf_met49->SetBinError(12,0.00664137);
   new_histo_group_Higgs_wh3l_13TeV_ossf_met49->SetBinError(13,0.008165027);
   new_histo_group_Higgs_wh3l_13TeV_ossf_met49->SetBinError(14,0.008027982);
   new_histo_group_Higgs_wh3l_13TeV_ossf_met49->SetBinError(15,0.006775689);
   new_histo_group_Higgs_wh3l_13TeV_ossf_met49->SetBinError(16,0.006820869);
   new_histo_group_Higgs_wh3l_13TeV_ossf_met49->SetBinError(17,0.006419052);
   new_histo_group_Higgs_wh3l_13TeV_ossf_met49->SetBinError(18,0.005731769);
   new_histo_group_Higgs_wh3l_13TeV_ossf_met49->SetBinError(19,0.006662101);
   new_histo_group_Higgs_wh3l_13TeV_ossf_met49->SetBinError(20,0.003697374);
   new_histo_group_Higgs_wh3l_13TeV_ossf_met49->SetBinError(21,0.005226964);
   new_histo_group_Higgs_wh3l_13TeV_ossf_met49->SetBinError(22,0.004353353);
   new_histo_group_Higgs_wh3l_13TeV_ossf_met49->SetBinError(23,0.004194506);
   new_histo_group_Higgs_wh3l_13TeV_ossf_met49->SetBinError(24,0.002622062);
   new_histo_group_Higgs_wh3l_13TeV_ossf_met49->SetBinError(25,0.002321973);
   new_histo_group_Higgs_wh3l_13TeV_ossf_met49->SetBinError(26,0.00322481);
   new_histo_group_Higgs_wh3l_13TeV_ossf_met49->SetBinError(27,0.002330168);
   new_histo_group_Higgs_wh3l_13TeV_ossf_met49->SetBinError(28,0.002509928);
   new_histo_group_Higgs_wh3l_13TeV_ossf_met49->SetBinError(29,0.0003050854);
   new_histo_group_Higgs_wh3l_13TeV_ossf_met49->SetBinError(30,0.001230824);
   new_histo_group_Higgs_wh3l_13TeV_ossf_met49->SetBinError(31,0.001661297);
   new_histo_group_Higgs_wh3l_13TeV_ossf_met49->SetBinError(32,0.001792574);
   new_histo_group_Higgs_wh3l_13TeV_ossf_met49->SetBinError(33,0.0002870945);
   new_histo_group_Higgs_wh3l_13TeV_ossf_met49->SetBinError(34,0.001175821);
   new_histo_group_Higgs_wh3l_13TeV_ossf_met49->SetBinError(35,0.0007658713);
   new_histo_group_Higgs_wh3l_13TeV_ossf_met49->SetBinError(36,0.00161891);
   new_histo_group_Higgs_wh3l_13TeV_ossf_met49->SetBinError(38,0.0001986669);
   new_histo_group_Higgs_wh3l_13TeV_ossf_met49->SetBinError(39,0.001712831);
   new_histo_group_Higgs_wh3l_13TeV_ossf_met49->SetBinError(41,0.002377921);
   new_histo_group_Higgs_wh3l_13TeV_ossf_met49->SetEntries(946);
   new_histo_group_Higgs_wh3l_13TeV_ossf_met49->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_13TeV_ossf_met49->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_13TeV_ossf_met49->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_13TeV_ossf_met49->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_13TeV_ossf_met49->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_ossf_met49->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_ossf_met49->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_13TeV_ossf_met49->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_13TeV_ossf_met49->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_ossf_met49->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_ossf_met49->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_13TeV_ossf_met49->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_13TeV_ossf_met49->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_ossf_met49->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_ossf_met49->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_13TeV_ossf_met->Add(new_histo_group_Higgs_wh3l_13TeV_ossf_met,"");
   thsSignal_grouped_wh3l_13TeV_ossf_met->Draw("hist same noclear");
   
   Double_t _fx3009[40] = {
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
   97.5,
   102.5,
   107.5,
   112.5,
   117.5,
   122.5,
   127.5,
   132.5,
   137.5,
   142.5,
   147.5,
   152.5,
   157.5,
   162.5,
   167.5,
   172.5,
   177.5,
   182.5,
   187.5,
   192.5,
   197.5};
   Double_t _fy3009[40] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   3.351174,
   3.292017,
   3.493417,
   1.48469,
   0.6000101,
   0.2995787,
   0.9450793,
   0.1802657,
   1.096423,
   0.1176832,
   -0.01078108,
   0.6138009,
   0.04743417,
   0.9410151,
   0.07153752,
   0.07752274,
   0.03687642,
   0.02323807,
   0.01927328,
   0.00988046,
   0.02842813,
   0.01662978,
   0.01053258,
   0.02028379,
   0.01843559,
   0.01204565,
   0.01148078,
   0.01123944,
   0.01445454,
   0.002637757,
   0.01342807,
   0.00634668};
   Double_t _felx3009[40] = {
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
   2.5,
   2.5};
   Double_t _fely3009[40] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   1.693238,
   1.382795,
   1.406645,
   0.4862312,
   0.3191617,
   0.4361838,
   0.642629,
   0.1816158,
   0.7147789,
   0.08405391,
   0.2485475,
   0.5592843,
   0.08042999,
   0.9072616,
   0.01980371,
   0.04435818,
   0.01453736,
   0.01130215,
   0.009952158,
   0.006766018,
   0.01274425,
   0.009454112,
   0.007354234,
   0.01018666,
   0.01065415,
   0.007001037,
   0.008305796,
   0.0079525,
   0.01944946,
   0.002610874,
   0.008016737,
   0.00634668};
   Double_t _fehx3009[40] = {
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
   2.5,
   2.5};
   Double_t _fehy3009[40] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   1.693238,
   1.382796,
   1.406646,
   0.6021204,
   0.1934117,
   0.2654128,
   0.642629,
   0.1816158,
   0.714779,
   0.08405391,
   0.1379799,
   0.5650601,
   0.08042999,
   0.9072616,
   0.01980372,
   0.04435818,
   0.01453736,
   0.01130215,
   0.009952158,
   0.006766018,
   0.01274425,
   0.009454112,
   0.007354234,
   0.01018666,
   0.01065415,
   0.007001037,
   0.008305797,
   0.007952499,
   0.01944946,
   0.002610875,
   0.008016738,
   0.00634668};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(40,_fx3009,_fy3009,_felx3009,_fehx3009,_fely3009,_fehy3009);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(12);
   grae->SetFillStyle(3004);
   grae->SetLineColor(12);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3009 = new TH1F("Graph_Graph3009","",100,0,220);
   Graph_Graph3009->SetMinimum(-0.7897026);
   Graph_Graph3009->SetMaximum(5.574786);
   Graph_Graph3009->SetDirectory(0);
   Graph_Graph3009->SetStats(0);
   Graph_Graph3009->SetLineStyle(0);
   Graph_Graph3009->SetMarkerStyle(20);
   Graph_Graph3009->GetXaxis()->SetLabelFont(42);
   Graph_Graph3009->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3009->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3009->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3009->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3009->GetXaxis()->SetTitleFont(42);
   Graph_Graph3009->GetYaxis()->SetLabelFont(42);
   Graph_Graph3009->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3009->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3009->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3009->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3009->GetYaxis()->SetTitleFont(42);
   Graph_Graph3009->GetZaxis()->SetLabelFont(42);
   Graph_Graph3009->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3009->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3009->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3009->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3009);
   
   grae->Draw("2");
   
   Double_t _fx3010[40] = {
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
   97.5,
   102.5,
   107.5,
   112.5,
   117.5,
   122.5,
   127.5,
   132.5,
   137.5,
   142.5,
   147.5,
   152.5,
   157.5,
   162.5,
   167.5,
   172.5,
   177.5,
   182.5,
   187.5,
   192.5,
   197.5};
   Double_t _fy3010[40] = {
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
   Double_t _felx3010[40] = {
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
   2.5,
   2.5};
   Double_t _fely3010[40] = {
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
   Double_t _fehx3010[40] = {
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
   2.5,
   2.5};
   Double_t _fehy3010[40] = {
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
   grae = new TGraphAsymmErrors(40,_fx3010,_fy3010,_felx3010,_fehx3010,_fely3010,_fehy3010);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(1);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3010 = new TH1F("Graph_Graph3010","",100,0,220);
   Graph_Graph3010->SetMinimum(0);
   Graph_Graph3010->SetMaximum(1.262698);
   Graph_Graph3010->SetDirectory(0);
   Graph_Graph3010->SetStats(0);
   Graph_Graph3010->SetLineStyle(0);
   Graph_Graph3010->SetMarkerStyle(20);
   Graph_Graph3010->GetXaxis()->SetLabelFont(42);
   Graph_Graph3010->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3010->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3010->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3010->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3010->GetXaxis()->SetTitleFont(42);
   Graph_Graph3010->GetYaxis()->SetLabelFont(42);
   Graph_Graph3010->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3010->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3010->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3010->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3010->GetYaxis()->SetTitleFont(42);
   Graph_Graph3010->GetZaxis()->SetLabelFont(42);
   Graph_Graph3010->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3010->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3010->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3010->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3010);
   
   grae->Draw("p0");
   
   TLegend *leg = new TLegend(0.2,0.55,0.8,0.88,NULL,"brNDC");
   leg->SetTextFont(62);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("new_histo_group_Fake_wh3l_13TeV_ossf_met","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_13TeV_ossf_met","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_13TeV_ossf_met","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_13TeV_ossf_met","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_13TeV_ossf_met","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_13TeV_ossf_met","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_13TeV_ossf_met","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_13TeV_ossf_met","Data","EPL");
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
   
   leg = new TLegend(0.2,0.55,0.8,0.88,NULL,"brNDC");
   leg->SetTextFont(62);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   entry=leg->AddEntry("new_histo_group_Fake_wh3l_13TeV_ossf_met","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_13TeV_ossf_met","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_13TeV_ossf_met","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_13TeV_ossf_met","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_13TeV_ossf_met","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_13TeV_ossf_met","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_13TeV_ossf_met","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_13TeV_ossf_met","Data","EPL");
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
   
   TH1F *hframe_copy50 = new TH1F("hframe_copy50","",1000,0,200);
   hframe_copy50->SetMinimum(0);
   hframe_copy50->SetMaximum(8.880283);
   hframe_copy50->SetDirectory(0);
   hframe_copy50->SetStats(0);
   hframe_copy50->SetLineStyle(0);
   hframe_copy50->SetMarkerStyle(20);
   hframe_copy50->GetXaxis()->SetTitle("pfmet [GeV]");
   hframe_copy50->GetXaxis()->SetNdivisions(506);
   hframe_copy50->GetXaxis()->SetLabelFont(42);
   hframe_copy50->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy50->GetXaxis()->SetLabelSize(0.05);
   hframe_copy50->GetXaxis()->SetTitleSize(0.06);
   hframe_copy50->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy50->GetXaxis()->SetTitleFont(42);
   hframe_copy50->GetYaxis()->SetTitle("Events");
   hframe_copy50->GetYaxis()->SetLabelFont(42);
   hframe_copy50->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy50->GetYaxis()->SetLabelSize(0.05);
   hframe_copy50->GetYaxis()->SetTitleSize(0.06);
   hframe_copy50->GetYaxis()->SetTitleOffset(1.25);
   hframe_copy50->GetYaxis()->SetTitleFont(42);
   hframe_copy50->GetZaxis()->SetLabelFont(42);
   hframe_copy50->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy50->GetZaxis()->SetLabelSize(0.05);
   hframe_copy50->GetZaxis()->SetTitleSize(0.06);
   hframe_copy50->GetZaxis()->SetTitleFont(42);
   hframe_copy50->Draw("sameaxis");
   ccwh3l_13TeV_ossf_met->Modified();
   ccwh3l_13TeV_ossf_met->cd();
   ccwh3l_13TeV_ossf_met->SetSelected(ccwh3l_13TeV_ossf_met);
}
