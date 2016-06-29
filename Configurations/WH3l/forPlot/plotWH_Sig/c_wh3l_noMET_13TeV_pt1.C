void c_wh3l_noMET_13TeV_pt1()
{
//=========Macro generated from canvas: ccwh3l_noMET_13TeV_pt1/cc
//=========  (Wed Jun 29 01:51:37 2016) by ROOT version6.02/13
   TCanvas *ccwh3l_noMET_13TeV_pt1 = new TCanvas("ccwh3l_noMET_13TeV_pt1", "cc",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   ccwh3l_noMET_13TeV_pt1->SetHighLightColor(2);
   ccwh3l_noMET_13TeV_pt1->Range(-28,-15.35284,209.5,102.746);
   ccwh3l_noMET_13TeV_pt1->SetFillColor(0);
   ccwh3l_noMET_13TeV_pt1->SetBorderMode(0);
   ccwh3l_noMET_13TeV_pt1->SetBorderSize(2);
   ccwh3l_noMET_13TeV_pt1->SetTickx(1);
   ccwh3l_noMET_13TeV_pt1->SetTicky(1);
   ccwh3l_noMET_13TeV_pt1->SetLeftMargin(0.16);
   ccwh3l_noMET_13TeV_pt1->SetRightMargin(0.04);
   ccwh3l_noMET_13TeV_pt1->SetTopMargin(0.05);
   ccwh3l_noMET_13TeV_pt1->SetBottomMargin(0.13);
   ccwh3l_noMET_13TeV_pt1->SetFrameFillStyle(0);
   ccwh3l_noMET_13TeV_pt1->SetFrameBorderMode(0);
   ccwh3l_noMET_13TeV_pt1->SetFrameFillStyle(0);
   ccwh3l_noMET_13TeV_pt1->SetFrameBorderMode(0);
   
   TH1F *hframe91 = new TH1F("hframe91","",1000,10,200);
   hframe91->SetMinimum(0);
   hframe91->SetMaximum(96.84102);
   hframe91->SetDirectory(0);
   hframe91->SetStats(0);
   hframe91->SetLineStyle(0);
   hframe91->SetMarkerStyle(20);
   hframe91->GetXaxis()->SetTitle("lept1_p_{T} [GeV]");
   hframe91->GetXaxis()->SetNdivisions(506);
   hframe91->GetXaxis()->SetLabelFont(42);
   hframe91->GetXaxis()->SetLabelOffset(0.007);
   hframe91->GetXaxis()->SetLabelSize(0.05);
   hframe91->GetXaxis()->SetTitleSize(0.06);
   hframe91->GetXaxis()->SetTitleOffset(0.9);
   hframe91->GetXaxis()->SetTitleFont(42);
   hframe91->GetYaxis()->SetTitle("Events");
   hframe91->GetYaxis()->SetLabelFont(42);
   hframe91->GetYaxis()->SetLabelOffset(0.007);
   hframe91->GetYaxis()->SetLabelSize(0.05);
   hframe91->GetYaxis()->SetTitleSize(0.06);
   hframe91->GetYaxis()->SetTitleOffset(1.25);
   hframe91->GetYaxis()->SetTitleFont(42);
   hframe91->GetZaxis()->SetLabelFont(42);
   hframe91->GetZaxis()->SetLabelOffset(0.007);
   hframe91->GetZaxis()->SetLabelSize(0.05);
   hframe91->GetZaxis()->SetTitleSize(0.06);
   hframe91->GetZaxis()->SetTitleFont(42);
   hframe91->Draw(" ");
   
   THStack *thsBackground_grouped_wh3l_noMET_13TeV_pt1 = new THStack();
   thsBackground_grouped_wh3l_noMET_13TeV_pt1->SetName("thsBackground_grouped_wh3l_noMET_13TeV_pt1");
   thsBackground_grouped_wh3l_noMET_13TeV_pt1->SetTitle("thsBackground_grouped_wh3l_noMET_13TeV_pt1");
   
   TH1F *thsBackground_grouped_wh3l_noMET_13TeV_pt1_stack_19 = new TH1F("thsBackground_grouped_wh3l_noMET_13TeV_pt1_stack_19","thsBackground_grouped_wh3l_noMET_13TeV_pt1",25,10,200);
   thsBackground_grouped_wh3l_noMET_13TeV_pt1_stack_19->SetMinimum(-0.4968429);
   thsBackground_grouped_wh3l_noMET_13TeV_pt1_stack_19->SetMaximum(40.67323);
   thsBackground_grouped_wh3l_noMET_13TeV_pt1_stack_19->SetDirectory(0);
   thsBackground_grouped_wh3l_noMET_13TeV_pt1_stack_19->SetStats(0);
   thsBackground_grouped_wh3l_noMET_13TeV_pt1_stack_19->SetLineStyle(0);
   thsBackground_grouped_wh3l_noMET_13TeV_pt1_stack_19->SetMarkerStyle(20);
   thsBackground_grouped_wh3l_noMET_13TeV_pt1_stack_19->GetXaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_noMET_13TeV_pt1_stack_19->GetXaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_noMET_13TeV_pt1_stack_19->GetXaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_noMET_13TeV_pt1_stack_19->GetXaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_noMET_13TeV_pt1_stack_19->GetXaxis()->SetTitleOffset(0.9);
   thsBackground_grouped_wh3l_noMET_13TeV_pt1_stack_19->GetXaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_noMET_13TeV_pt1_stack_19->GetYaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_noMET_13TeV_pt1_stack_19->GetYaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_noMET_13TeV_pt1_stack_19->GetYaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_noMET_13TeV_pt1_stack_19->GetYaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_noMET_13TeV_pt1_stack_19->GetYaxis()->SetTitleOffset(1.25);
   thsBackground_grouped_wh3l_noMET_13TeV_pt1_stack_19->GetYaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_noMET_13TeV_pt1_stack_19->GetZaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_noMET_13TeV_pt1_stack_19->GetZaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_noMET_13TeV_pt1_stack_19->GetZaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_noMET_13TeV_pt1_stack_19->GetZaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_noMET_13TeV_pt1_stack_19->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_noMET_13TeV_pt1->SetHistogram(thsBackground_grouped_wh3l_noMET_13TeV_pt1_stack_19);
   
   
   TH1D *new_histo_group_Fake_wh3l_noMET_13TeV_pt192 = new TH1D("new_histo_group_Fake_wh3l_noMET_13TeV_pt192","histo_Fake",25,10,200);
   new_histo_group_Fake_wh3l_noMET_13TeV_pt192->SetBinContent(2,4.016206);
   new_histo_group_Fake_wh3l_noMET_13TeV_pt192->SetBinContent(3,7.894566);
   new_histo_group_Fake_wh3l_noMET_13TeV_pt192->SetBinContent(4,9.53568);
   new_histo_group_Fake_wh3l_noMET_13TeV_pt192->SetBinContent(5,5.662425);
   new_histo_group_Fake_wh3l_noMET_13TeV_pt192->SetBinContent(6,4.223634);
   new_histo_group_Fake_wh3l_noMET_13TeV_pt192->SetBinContent(7,0.2684388);
   new_histo_group_Fake_wh3l_noMET_13TeV_pt192->SetBinContent(8,1.714517);
   new_histo_group_Fake_wh3l_noMET_13TeV_pt192->SetBinContent(9,1.463764);
   new_histo_group_Fake_wh3l_noMET_13TeV_pt192->SetBinContent(10,0.8995623);
   new_histo_group_Fake_wh3l_noMET_13TeV_pt192->SetBinContent(11,1.160702);
   new_histo_group_Fake_wh3l_noMET_13TeV_pt192->SetBinContent(12,0.2119505);
   new_histo_group_Fake_wh3l_noMET_13TeV_pt192->SetBinContent(13,0.06602898);
   new_histo_group_Fake_wh3l_noMET_13TeV_pt192->SetBinContent(14,0.3252222);
   new_histo_group_Fake_wh3l_noMET_13TeV_pt192->SetBinContent(15,0.01047671);
   new_histo_group_Fake_wh3l_noMET_13TeV_pt192->SetBinContent(17,-0.03580275);
   new_histo_group_Fake_wh3l_noMET_13TeV_pt192->SetBinContent(20,0.0482645);
   new_histo_group_Fake_wh3l_noMET_13TeV_pt192->SetBinContent(21,0.8476363);
   new_histo_group_Fake_wh3l_noMET_13TeV_pt192->SetBinContent(22,0.06677944);
   new_histo_group_Fake_wh3l_noMET_13TeV_pt192->SetBinContent(23,-0.05192989);
   new_histo_group_Fake_wh3l_noMET_13TeV_pt192->SetBinContent(24,-0.01470217);
   new_histo_group_Fake_wh3l_noMET_13TeV_pt192->SetBinContent(25,0.1345139);
   new_histo_group_Fake_wh3l_noMET_13TeV_pt192->SetBinContent(26,-0.05466183);
   new_histo_group_Fake_wh3l_noMET_13TeV_pt192->SetBinError(2,2.174926);
   new_histo_group_Fake_wh3l_noMET_13TeV_pt192->SetBinError(3,2.551998);
   new_histo_group_Fake_wh3l_noMET_13TeV_pt192->SetBinError(4,2.536967);
   new_histo_group_Fake_wh3l_noMET_13TeV_pt192->SetBinError(5,2.08883);
   new_histo_group_Fake_wh3l_noMET_13TeV_pt192->SetBinError(6,1.698667);
   new_histo_group_Fake_wh3l_noMET_13TeV_pt192->SetBinError(7,0.7652818);
   new_histo_group_Fake_wh3l_noMET_13TeV_pt192->SetBinError(8,0.9580325);
   new_histo_group_Fake_wh3l_noMET_13TeV_pt192->SetBinError(9,0.76606);
   new_histo_group_Fake_wh3l_noMET_13TeV_pt192->SetBinError(10,0.4613123);
   new_histo_group_Fake_wh3l_noMET_13TeV_pt192->SetBinError(11,0.8590528);
   new_histo_group_Fake_wh3l_noMET_13TeV_pt192->SetBinError(12,0.3652074);
   new_histo_group_Fake_wh3l_noMET_13TeV_pt192->SetBinError(13,0.1595992);
   new_histo_group_Fake_wh3l_noMET_13TeV_pt192->SetBinError(14,0.3577038);
   new_histo_group_Fake_wh3l_noMET_13TeV_pt192->SetBinError(15,0.01024327);
   new_histo_group_Fake_wh3l_noMET_13TeV_pt192->SetBinError(17,0.03501484);
   new_histo_group_Fake_wh3l_noMET_13TeV_pt192->SetBinError(20,0.07435289);
   new_histo_group_Fake_wh3l_noMET_13TeV_pt192->SetBinError(21,0.8476363);
   new_histo_group_Fake_wh3l_noMET_13TeV_pt192->SetBinError(22,0.06677944);
   new_histo_group_Fake_wh3l_noMET_13TeV_pt192->SetBinError(23,0.04449595);
   new_histo_group_Fake_wh3l_noMET_13TeV_pt192->SetBinError(24,0.01470217);
   new_histo_group_Fake_wh3l_noMET_13TeV_pt192->SetBinError(25,0.1345139);
   new_histo_group_Fake_wh3l_noMET_13TeV_pt192->SetBinError(26,0.03568042);
   new_histo_group_Fake_wh3l_noMET_13TeV_pt192->SetEntries(607);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_noMET_13TeV_pt192->SetFillColor(ci);
   new_histo_group_Fake_wh3l_noMET_13TeV_pt192->SetFillStyle(3001);

   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_noMET_13TeV_pt192->SetLineColor(ci);
   new_histo_group_Fake_wh3l_noMET_13TeV_pt192->GetXaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_noMET_13TeV_pt192->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_noMET_13TeV_pt192->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_noMET_13TeV_pt192->GetXaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_noMET_13TeV_pt192->GetYaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_noMET_13TeV_pt192->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_noMET_13TeV_pt192->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_noMET_13TeV_pt192->GetYaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_noMET_13TeV_pt192->GetZaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_noMET_13TeV_pt192->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_noMET_13TeV_pt192->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_noMET_13TeV_pt192->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_noMET_13TeV_pt1->Add(new_histo_group_Fake_wh3l_noMET_13TeV_pt1,"");
   
   TH1D *new_histo_group_WW_wh3l_noMET_13TeV_pt193 = new TH1D("new_histo_group_WW_wh3l_noMET_13TeV_pt193","histo_WW",25,10,200);
   new_histo_group_WW_wh3l_noMET_13TeV_pt193->SetBinContent(3,0.05650155);
   new_histo_group_WW_wh3l_noMET_13TeV_pt193->SetBinContent(4,0.01285941);
   new_histo_group_WW_wh3l_noMET_13TeV_pt193->SetBinContent(5,0.02752702);
   new_histo_group_WW_wh3l_noMET_13TeV_pt193->SetBinContent(6,0.04231901);
   new_histo_group_WW_wh3l_noMET_13TeV_pt193->SetBinContent(7,0.04349409);
   new_histo_group_WW_wh3l_noMET_13TeV_pt193->SetBinContent(8,0.01273931);
   new_histo_group_WW_wh3l_noMET_13TeV_pt193->SetBinContent(9,0.02977813);
   new_histo_group_WW_wh3l_noMET_13TeV_pt193->SetBinContent(10,0.03384612);
   new_histo_group_WW_wh3l_noMET_13TeV_pt193->SetBinContent(14,0.009663942);
   new_histo_group_WW_wh3l_noMET_13TeV_pt193->SetBinContent(15,0.0131107);
   new_histo_group_WW_wh3l_noMET_13TeV_pt193->SetBinError(3,0.0330346);
   new_histo_group_WW_wh3l_noMET_13TeV_pt193->SetBinError(4,0.01285941);
   new_histo_group_WW_wh3l_noMET_13TeV_pt193->SetBinError(5,0.02002335);
   new_histo_group_WW_wh3l_noMET_13TeV_pt193->SetBinError(6,0.02510986);
   new_histo_group_WW_wh3l_noMET_13TeV_pt193->SetBinError(7,0.02561661);
   new_histo_group_WW_wh3l_noMET_13TeV_pt193->SetBinError(8,0.01273931);
   new_histo_group_WW_wh3l_noMET_13TeV_pt193->SetBinError(9,0.02106448);
   new_histo_group_WW_wh3l_noMET_13TeV_pt193->SetBinError(10,0.02398271);
   new_histo_group_WW_wh3l_noMET_13TeV_pt193->SetBinError(14,0.009663942);
   new_histo_group_WW_wh3l_noMET_13TeV_pt193->SetBinError(15,0.0131107);
   new_histo_group_WW_wh3l_noMET_13TeV_pt193->SetEntries(19);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_noMET_13TeV_pt193->SetFillColor(ci);
   new_histo_group_WW_wh3l_noMET_13TeV_pt193->SetFillStyle(3001);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_noMET_13TeV_pt193->SetLineColor(ci);
   new_histo_group_WW_wh3l_noMET_13TeV_pt193->GetXaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_noMET_13TeV_pt193->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_noMET_13TeV_pt193->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_noMET_13TeV_pt193->GetXaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_noMET_13TeV_pt193->GetYaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_noMET_13TeV_pt193->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_noMET_13TeV_pt193->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_noMET_13TeV_pt193->GetYaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_noMET_13TeV_pt193->GetZaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_noMET_13TeV_pt193->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_noMET_13TeV_pt193->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_noMET_13TeV_pt193->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_noMET_13TeV_pt1->Add(new_histo_group_WW_wh3l_noMET_13TeV_pt1,"");
   
   TH1D *new_histo_group_VVV_wh3l_noMET_13TeV_pt194 = new TH1D("new_histo_group_VVV_wh3l_noMET_13TeV_pt194","histo_VVV",25,10,200);
   new_histo_group_VVV_wh3l_noMET_13TeV_pt194->SetBinContent(4,0.0006249245);
   new_histo_group_VVV_wh3l_noMET_13TeV_pt194->SetBinContent(5,0.0002076036);
   new_histo_group_VVV_wh3l_noMET_13TeV_pt194->SetBinContent(6,-0.0006863608);
   new_histo_group_VVV_wh3l_noMET_13TeV_pt194->SetBinContent(7,0.0006883418);
   new_histo_group_VVV_wh3l_noMET_13TeV_pt194->SetBinContent(8,0.001250725);
   new_histo_group_VVV_wh3l_noMET_13TeV_pt194->SetBinContent(9,0.0008277855);
   new_histo_group_VVV_wh3l_noMET_13TeV_pt194->SetBinContent(10,0.0006836765);
   new_histo_group_VVV_wh3l_noMET_13TeV_pt194->SetBinContent(11,0.001907969);
   new_histo_group_VVV_wh3l_noMET_13TeV_pt194->SetBinContent(12,0.001261525);
   new_histo_group_VVV_wh3l_noMET_13TeV_pt194->SetBinContent(13,0.002585046);
   new_histo_group_VVV_wh3l_noMET_13TeV_pt194->SetBinContent(14,0.0006504452);
   new_histo_group_VVV_wh3l_noMET_13TeV_pt194->SetBinContent(15,0.001310777);
   new_histo_group_VVV_wh3l_noMET_13TeV_pt194->SetBinContent(18,0.0006405607);
   new_histo_group_VVV_wh3l_noMET_13TeV_pt194->SetBinContent(20,0.0006343185);
   new_histo_group_VVV_wh3l_noMET_13TeV_pt194->SetBinContent(23,0.0005170208);
   new_histo_group_VVV_wh3l_noMET_13TeV_pt194->SetBinContent(25,0.0006729142);
   new_histo_group_VVV_wh3l_noMET_13TeV_pt194->SetBinContent(26,0.001077991);
   new_histo_group_VVV_wh3l_noMET_13TeV_pt194->SetBinError(4,0.0006249245);
   new_histo_group_VVV_wh3l_noMET_13TeV_pt194->SetBinError(5,0.0002076036);
   new_histo_group_VVV_wh3l_noMET_13TeV_pt194->SetBinError(6,0.0006863608);
   new_histo_group_VVV_wh3l_noMET_13TeV_pt194->SetBinError(7,0.0006883418);
   new_histo_group_VVV_wh3l_noMET_13TeV_pt194->SetBinError(8,0.0008845773);
   new_histo_group_VVV_wh3l_noMET_13TeV_pt194->SetBinError(9,0.0006108933);
   new_histo_group_VVV_wh3l_noMET_13TeV_pt194->SetBinError(10,0.0006836765);
   new_histo_group_VVV_wh3l_noMET_13TeV_pt194->SetBinError(11,0.00111659);
   new_histo_group_VVV_wh3l_noMET_13TeV_pt194->SetBinError(12,0.0008203178);
   new_histo_group_VVV_wh3l_noMET_13TeV_pt194->SetBinError(13,0.001224129);
   new_histo_group_VVV_wh3l_noMET_13TeV_pt194->SetBinError(14,0.0006504452);
   new_histo_group_VVV_wh3l_noMET_13TeV_pt194->SetBinError(15,0.0009430562);
   new_histo_group_VVV_wh3l_noMET_13TeV_pt194->SetBinError(18,0.0006405607);
   new_histo_group_VVV_wh3l_noMET_13TeV_pt194->SetBinError(20,0.0006343185);
   new_histo_group_VVV_wh3l_noMET_13TeV_pt194->SetBinError(23,0.0005170208);
   new_histo_group_VVV_wh3l_noMET_13TeV_pt194->SetBinError(25,0.0006729142);
   new_histo_group_VVV_wh3l_noMET_13TeV_pt194->SetBinError(26,0.0007623883);
   new_histo_group_VVV_wh3l_noMET_13TeV_pt194->SetEntries(29);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_noMET_13TeV_pt194->SetFillColor(ci);
   new_histo_group_VVV_wh3l_noMET_13TeV_pt194->SetFillStyle(3001);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_noMET_13TeV_pt194->SetLineColor(ci);
   new_histo_group_VVV_wh3l_noMET_13TeV_pt194->GetXaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_noMET_13TeV_pt194->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_noMET_13TeV_pt194->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_noMET_13TeV_pt194->GetXaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_noMET_13TeV_pt194->GetYaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_noMET_13TeV_pt194->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_noMET_13TeV_pt194->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_noMET_13TeV_pt194->GetYaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_noMET_13TeV_pt194->GetZaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_noMET_13TeV_pt194->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_noMET_13TeV_pt194->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_noMET_13TeV_pt194->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_noMET_13TeV_pt1->Add(new_histo_group_VVV_wh3l_noMET_13TeV_pt1,"");
   
   TH1D *new_histo_group_Vg_wh3l_noMET_13TeV_pt195 = new TH1D("new_histo_group_Vg_wh3l_noMET_13TeV_pt195","histo_Vg",25,10,200);
   new_histo_group_Vg_wh3l_noMET_13TeV_pt195->SetBinContent(2,4.306081);
   new_histo_group_Vg_wh3l_noMET_13TeV_pt195->SetBinContent(3,20.62691);
   new_histo_group_Vg_wh3l_noMET_13TeV_pt195->SetBinContent(4,26.20381);
   new_histo_group_Vg_wh3l_noMET_13TeV_pt195->SetBinContent(5,16.00851);
   new_histo_group_Vg_wh3l_noMET_13TeV_pt195->SetBinContent(6,5.952498);
   new_histo_group_Vg_wh3l_noMET_13TeV_pt195->SetBinContent(7,1.431692);
   new_histo_group_Vg_wh3l_noMET_13TeV_pt195->SetBinContent(8,1.429668);
   new_histo_group_Vg_wh3l_noMET_13TeV_pt195->SetBinContent(9,0.6050514);
   new_histo_group_Vg_wh3l_noMET_13TeV_pt195->SetBinContent(10,0.6316483);
   new_histo_group_Vg_wh3l_noMET_13TeV_pt195->SetBinContent(11,0.3122799);
   new_histo_group_Vg_wh3l_noMET_13TeV_pt195->SetBinContent(12,0.2403776);
   new_histo_group_Vg_wh3l_noMET_13TeV_pt195->SetBinContent(13,0.3277253);
   new_histo_group_Vg_wh3l_noMET_13TeV_pt195->SetBinContent(14,0.4861367);
   new_histo_group_Vg_wh3l_noMET_13TeV_pt195->SetBinContent(15,0.5157191);
   new_histo_group_Vg_wh3l_noMET_13TeV_pt195->SetBinContent(16,0.1679126);
   new_histo_group_Vg_wh3l_noMET_13TeV_pt195->SetBinContent(17,0.07149484);
   new_histo_group_Vg_wh3l_noMET_13TeV_pt195->SetBinContent(18,0.2167063);
   new_histo_group_Vg_wh3l_noMET_13TeV_pt195->SetBinContent(19,0.1058488);
   new_histo_group_Vg_wh3l_noMET_13TeV_pt195->SetBinContent(20,0.07294232);
   new_histo_group_Vg_wh3l_noMET_13TeV_pt195->SetBinContent(23,0.2402762);
   new_histo_group_Vg_wh3l_noMET_13TeV_pt195->SetBinContent(25,0.1100928);
   new_histo_group_Vg_wh3l_noMET_13TeV_pt195->SetBinContent(26,0.5656204);
   new_histo_group_Vg_wh3l_noMET_13TeV_pt195->SetBinError(2,0.7560536);
   new_histo_group_Vg_wh3l_noMET_13TeV_pt195->SetBinError(3,1.603233);
   new_histo_group_Vg_wh3l_noMET_13TeV_pt195->SetBinError(4,1.925171);
   new_histo_group_Vg_wh3l_noMET_13TeV_pt195->SetBinError(5,1.502361);
   new_histo_group_Vg_wh3l_noMET_13TeV_pt195->SetBinError(6,0.9353288);
   new_histo_group_Vg_wh3l_noMET_13TeV_pt195->SetBinError(7,0.4619665);
   new_histo_group_Vg_wh3l_noMET_13TeV_pt195->SetBinError(8,0.4146925);
   new_histo_group_Vg_wh3l_noMET_13TeV_pt195->SetBinError(9,0.4507262);
   new_histo_group_Vg_wh3l_noMET_13TeV_pt195->SetBinError(10,0.2587261);
   new_histo_group_Vg_wh3l_noMET_13TeV_pt195->SetBinError(11,0.1809815);
   new_histo_group_Vg_wh3l_noMET_13TeV_pt195->SetBinError(12,0.2303027);
   new_histo_group_Vg_wh3l_noMET_13TeV_pt195->SetBinError(13,0.2656213);
   new_histo_group_Vg_wh3l_noMET_13TeV_pt195->SetBinError(14,0.243357);
   new_histo_group_Vg_wh3l_noMET_13TeV_pt195->SetBinError(15,0.2339973);
   new_histo_group_Vg_wh3l_noMET_13TeV_pt195->SetBinError(16,0.127216);
   new_histo_group_Vg_wh3l_noMET_13TeV_pt195->SetBinError(17,0.07149484);
   new_histo_group_Vg_wh3l_noMET_13TeV_pt195->SetBinError(18,0.1532482);
   new_histo_group_Vg_wh3l_noMET_13TeV_pt195->SetBinError(19,0.1058488);
   new_histo_group_Vg_wh3l_noMET_13TeV_pt195->SetBinError(20,0.07294232);
   new_histo_group_Vg_wh3l_noMET_13TeV_pt195->SetBinError(23,0.1699686);
   new_histo_group_Vg_wh3l_noMET_13TeV_pt195->SetBinError(25,0.1100928);
   new_histo_group_Vg_wh3l_noMET_13TeV_pt195->SetBinError(26,0.2543334);
   new_histo_group_Vg_wh3l_noMET_13TeV_pt195->SetEntries(1050);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_noMET_13TeV_pt195->SetFillColor(ci);
   new_histo_group_Vg_wh3l_noMET_13TeV_pt195->SetFillStyle(3001);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_noMET_13TeV_pt195->SetLineColor(ci);
   new_histo_group_Vg_wh3l_noMET_13TeV_pt195->GetXaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_noMET_13TeV_pt195->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_noMET_13TeV_pt195->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_noMET_13TeV_pt195->GetXaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_noMET_13TeV_pt195->GetYaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_noMET_13TeV_pt195->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_noMET_13TeV_pt195->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_noMET_13TeV_pt195->GetYaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_noMET_13TeV_pt195->GetZaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_noMET_13TeV_pt195->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_noMET_13TeV_pt195->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_noMET_13TeV_pt195->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_noMET_13TeV_pt1->Add(new_histo_group_Vg_wh3l_noMET_13TeV_pt1,"");
   
   TH1D *new_histo_group_ZZ_wh3l_noMET_13TeV_pt196 = new TH1D("new_histo_group_ZZ_wh3l_noMET_13TeV_pt196","histo_ZZ",25,10,200);
   new_histo_group_ZZ_wh3l_noMET_13TeV_pt196->SetBinContent(2,0.4106798);
   new_histo_group_ZZ_wh3l_noMET_13TeV_pt196->SetBinContent(3,0.5188819);
   new_histo_group_ZZ_wh3l_noMET_13TeV_pt196->SetBinContent(4,0.3835199);
   new_histo_group_ZZ_wh3l_noMET_13TeV_pt196->SetBinContent(5,0.3106045);
   new_histo_group_ZZ_wh3l_noMET_13TeV_pt196->SetBinContent(6,0.2432545);
   new_histo_group_ZZ_wh3l_noMET_13TeV_pt196->SetBinContent(7,0.2132071);
   new_histo_group_ZZ_wh3l_noMET_13TeV_pt196->SetBinContent(8,0.2421523);
   new_histo_group_ZZ_wh3l_noMET_13TeV_pt196->SetBinContent(9,0.1457858);
   new_histo_group_ZZ_wh3l_noMET_13TeV_pt196->SetBinContent(10,0.3237501);
   new_histo_group_ZZ_wh3l_noMET_13TeV_pt196->SetBinContent(11,0.1168791);
   new_histo_group_ZZ_wh3l_noMET_13TeV_pt196->SetBinContent(12,0.1738984);
   new_histo_group_ZZ_wh3l_noMET_13TeV_pt196->SetBinContent(13,0.06897881);
   new_histo_group_ZZ_wh3l_noMET_13TeV_pt196->SetBinContent(14,0.1612499);
   new_histo_group_ZZ_wh3l_noMET_13TeV_pt196->SetBinContent(15,0.1281175);
   new_histo_group_ZZ_wh3l_noMET_13TeV_pt196->SetBinContent(16,0.007786774);
   new_histo_group_ZZ_wh3l_noMET_13TeV_pt196->SetBinContent(17,0.09913668);
   new_histo_group_ZZ_wh3l_noMET_13TeV_pt196->SetBinContent(19,0.04494832);
   new_histo_group_ZZ_wh3l_noMET_13TeV_pt196->SetBinContent(20,0.009867454);
   new_histo_group_ZZ_wh3l_noMET_13TeV_pt196->SetBinContent(21,0.04635774);
   new_histo_group_ZZ_wh3l_noMET_13TeV_pt196->SetBinContent(23,0.04134612);
   new_histo_group_ZZ_wh3l_noMET_13TeV_pt196->SetBinContent(26,0.2459206);
   new_histo_group_ZZ_wh3l_noMET_13TeV_pt196->SetBinError(2,0.1274542);
   new_histo_group_ZZ_wh3l_noMET_13TeV_pt196->SetBinError(3,0.1467029);
   new_histo_group_ZZ_wh3l_noMET_13TeV_pt196->SetBinError(4,0.1305887);
   new_histo_group_ZZ_wh3l_noMET_13TeV_pt196->SetBinError(5,0.1131837);
   new_histo_group_ZZ_wh3l_noMET_13TeV_pt196->SetBinError(6,0.0930822);
   new_histo_group_ZZ_wh3l_noMET_13TeV_pt196->SetBinError(7,0.09560821);
   new_histo_group_ZZ_wh3l_noMET_13TeV_pt196->SetBinError(8,0.09977856);
   new_histo_group_ZZ_wh3l_noMET_13TeV_pt196->SetBinError(9,0.07049308);
   new_histo_group_ZZ_wh3l_noMET_13TeV_pt196->SetBinError(10,0.1169758);
   new_histo_group_ZZ_wh3l_noMET_13TeV_pt196->SetBinError(11,0.06867231);
   new_histo_group_ZZ_wh3l_noMET_13TeV_pt196->SetBinError(12,0.0819668);
   new_histo_group_ZZ_wh3l_noMET_13TeV_pt196->SetBinError(13,0.04987729);
   new_histo_group_ZZ_wh3l_noMET_13TeV_pt196->SetBinError(14,0.08082043);
   new_histo_group_ZZ_wh3l_noMET_13TeV_pt196->SetBinError(15,0.07404959);
   new_histo_group_ZZ_wh3l_noMET_13TeV_pt196->SetBinError(16,0.007786774);
   new_histo_group_ZZ_wh3l_noMET_13TeV_pt196->SetBinError(17,0.06078645);
   new_histo_group_ZZ_wh3l_noMET_13TeV_pt196->SetBinError(19,0.04494832);
   new_histo_group_ZZ_wh3l_noMET_13TeV_pt196->SetBinError(20,0.009867454);
   new_histo_group_ZZ_wh3l_noMET_13TeV_pt196->SetBinError(21,0.04635774);
   new_histo_group_ZZ_wh3l_noMET_13TeV_pt196->SetBinError(23,0.04134612);
   new_histo_group_ZZ_wh3l_noMET_13TeV_pt196->SetBinError(26,0.1010835);
   new_histo_group_ZZ_wh3l_noMET_13TeV_pt196->SetEntries(105);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_noMET_13TeV_pt196->SetFillColor(ci);
   new_histo_group_ZZ_wh3l_noMET_13TeV_pt196->SetFillStyle(3001);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_noMET_13TeV_pt196->SetLineColor(ci);
   new_histo_group_ZZ_wh3l_noMET_13TeV_pt196->GetXaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_noMET_13TeV_pt196->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_noMET_13TeV_pt196->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_noMET_13TeV_pt196->GetXaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_noMET_13TeV_pt196->GetYaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_noMET_13TeV_pt196->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_noMET_13TeV_pt196->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_noMET_13TeV_pt196->GetYaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_noMET_13TeV_pt196->GetZaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_noMET_13TeV_pt196->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_noMET_13TeV_pt196->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_noMET_13TeV_pt196->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_noMET_13TeV_pt1->Add(new_histo_group_ZZ_wh3l_noMET_13TeV_pt1,"");
   
   TH1D *new_histo_group_WZ_wh3l_noMET_13TeV_pt197 = new TH1D("new_histo_group_WZ_wh3l_noMET_13TeV_pt197","histo_WZ",25,10,200);
   new_histo_group_WZ_wh3l_noMET_13TeV_pt197->SetBinContent(2,1.07403);
   new_histo_group_WZ_wh3l_noMET_13TeV_pt197->SetBinContent(3,2.417144);
   new_histo_group_WZ_wh3l_noMET_13TeV_pt197->SetBinContent(4,2.457692);
   new_histo_group_WZ_wh3l_noMET_13TeV_pt197->SetBinContent(5,2.282572);
   new_histo_group_WZ_wh3l_noMET_13TeV_pt197->SetBinContent(6,1.680659);
   new_histo_group_WZ_wh3l_noMET_13TeV_pt197->SetBinContent(7,1.210351);
   new_histo_group_WZ_wh3l_noMET_13TeV_pt197->SetBinContent(8,1.177614);
   new_histo_group_WZ_wh3l_noMET_13TeV_pt197->SetBinContent(9,0.9509389);
   new_histo_group_WZ_wh3l_noMET_13TeV_pt197->SetBinContent(10,0.964588);
   new_histo_group_WZ_wh3l_noMET_13TeV_pt197->SetBinContent(11,0.6859627);
   new_histo_group_WZ_wh3l_noMET_13TeV_pt197->SetBinContent(12,0.7239541);
   new_histo_group_WZ_wh3l_noMET_13TeV_pt197->SetBinContent(13,0.4966703);
   new_histo_group_WZ_wh3l_noMET_13TeV_pt197->SetBinContent(14,0.4185142);
   new_histo_group_WZ_wh3l_noMET_13TeV_pt197->SetBinContent(15,0.3368644);
   new_histo_group_WZ_wh3l_noMET_13TeV_pt197->SetBinContent(16,0.2630399);
   new_histo_group_WZ_wh3l_noMET_13TeV_pt197->SetBinContent(17,0.2229492);
   new_histo_group_WZ_wh3l_noMET_13TeV_pt197->SetBinContent(18,0.1332727);
   new_histo_group_WZ_wh3l_noMET_13TeV_pt197->SetBinContent(19,0.1959519);
   new_histo_group_WZ_wh3l_noMET_13TeV_pt197->SetBinContent(20,0.1103799);
   new_histo_group_WZ_wh3l_noMET_13TeV_pt197->SetBinContent(21,0.1131502);
   new_histo_group_WZ_wh3l_noMET_13TeV_pt197->SetBinContent(22,0.1314645);
   new_histo_group_WZ_wh3l_noMET_13TeV_pt197->SetBinContent(23,0.117226);
   new_histo_group_WZ_wh3l_noMET_13TeV_pt197->SetBinContent(24,0.06683111);
   new_histo_group_WZ_wh3l_noMET_13TeV_pt197->SetBinContent(25,0.07005927);
   new_histo_group_WZ_wh3l_noMET_13TeV_pt197->SetBinContent(26,0.9099674);
   new_histo_group_WZ_wh3l_noMET_13TeV_pt197->SetBinError(2,0.07666915);
   new_histo_group_WZ_wh3l_noMET_13TeV_pt197->SetBinError(3,0.1150465);
   new_histo_group_WZ_wh3l_noMET_13TeV_pt197->SetBinError(4,0.1158593);
   new_histo_group_WZ_wh3l_noMET_13TeV_pt197->SetBinError(5,0.1124115);
   new_histo_group_WZ_wh3l_noMET_13TeV_pt197->SetBinError(6,0.09530354);
   new_histo_group_WZ_wh3l_noMET_13TeV_pt197->SetBinError(7,0.08068401);
   new_histo_group_WZ_wh3l_noMET_13TeV_pt197->SetBinError(8,0.07926403);
   new_histo_group_WZ_wh3l_noMET_13TeV_pt197->SetBinError(9,0.07218873);
   new_histo_group_WZ_wh3l_noMET_13TeV_pt197->SetBinError(10,0.07348869);
   new_histo_group_WZ_wh3l_noMET_13TeV_pt197->SetBinError(11,0.06070478);
   new_histo_group_WZ_wh3l_noMET_13TeV_pt197->SetBinError(12,0.06289793);
   new_histo_group_WZ_wh3l_noMET_13TeV_pt197->SetBinError(13,0.05273629);
   new_histo_group_WZ_wh3l_noMET_13TeV_pt197->SetBinError(14,0.04759303);
   new_histo_group_WZ_wh3l_noMET_13TeV_pt197->SetBinError(15,0.04215707);
   new_histo_group_WZ_wh3l_noMET_13TeV_pt197->SetBinError(16,0.03831772);
   new_histo_group_WZ_wh3l_noMET_13TeV_pt197->SetBinError(17,0.03420792);
   new_histo_group_WZ_wh3l_noMET_13TeV_pt197->SetBinError(18,0.02653136);
   new_histo_group_WZ_wh3l_noMET_13TeV_pt197->SetBinError(19,0.03246549);
   new_histo_group_WZ_wh3l_noMET_13TeV_pt197->SetBinError(20,0.0234963);
   new_histo_group_WZ_wh3l_noMET_13TeV_pt197->SetBinError(21,0.02443911);
   new_histo_group_WZ_wh3l_noMET_13TeV_pt197->SetBinError(22,0.02694703);
   new_histo_group_WZ_wh3l_noMET_13TeV_pt197->SetBinError(23,0.02546744);
   new_histo_group_WZ_wh3l_noMET_13TeV_pt197->SetBinError(24,0.0190505);
   new_histo_group_WZ_wh3l_noMET_13TeV_pt197->SetBinError(25,0.01868691);
   new_histo_group_WZ_wh3l_noMET_13TeV_pt197->SetBinError(26,0.0699007);
   new_histo_group_WZ_wh3l_noMET_13TeV_pt197->SetEntries(3898);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_noMET_13TeV_pt197->SetFillColor(ci);
   new_histo_group_WZ_wh3l_noMET_13TeV_pt197->SetFillStyle(3001);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_noMET_13TeV_pt197->SetLineColor(ci);
   new_histo_group_WZ_wh3l_noMET_13TeV_pt197->GetXaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_noMET_13TeV_pt197->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_noMET_13TeV_pt197->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_noMET_13TeV_pt197->GetXaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_noMET_13TeV_pt197->GetYaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_noMET_13TeV_pt197->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_noMET_13TeV_pt197->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_noMET_13TeV_pt197->GetYaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_noMET_13TeV_pt197->GetZaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_noMET_13TeV_pt197->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_noMET_13TeV_pt197->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_noMET_13TeV_pt197->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_noMET_13TeV_pt1->Add(new_histo_group_WZ_wh3l_noMET_13TeV_pt1,"");
   
   TH1D *new_histo_group_Higgs_wh3l_noMET_13TeV_pt198 = new TH1D("new_histo_group_Higgs_wh3l_noMET_13TeV_pt198","histo_H_htt",25,10,200);
   new_histo_group_Higgs_wh3l_noMET_13TeV_pt198->SetBinContent(2,0.02381934);
   new_histo_group_Higgs_wh3l_noMET_13TeV_pt198->SetBinContent(3,0.075587);
   new_histo_group_Higgs_wh3l_noMET_13TeV_pt198->SetBinContent(4,0.1422214);
   new_histo_group_Higgs_wh3l_noMET_13TeV_pt198->SetBinContent(5,0.1571227);
   new_histo_group_Higgs_wh3l_noMET_13TeV_pt198->SetBinContent(6,0.1179583);
   new_histo_group_Higgs_wh3l_noMET_13TeV_pt198->SetBinContent(7,0.1199285);
   new_histo_group_Higgs_wh3l_noMET_13TeV_pt198->SetBinContent(8,0.09808248);
   new_histo_group_Higgs_wh3l_noMET_13TeV_pt198->SetBinContent(9,0.07600423);
   new_histo_group_Higgs_wh3l_noMET_13TeV_pt198->SetBinContent(10,0.07405652);
   new_histo_group_Higgs_wh3l_noMET_13TeV_pt198->SetBinContent(11,0.05501157);
   new_histo_group_Higgs_wh3l_noMET_13TeV_pt198->SetBinContent(12,0.03752374);
   new_histo_group_Higgs_wh3l_noMET_13TeV_pt198->SetBinContent(13,0.0414069);
   new_histo_group_Higgs_wh3l_noMET_13TeV_pt198->SetBinContent(14,0.03998314);
   new_histo_group_Higgs_wh3l_noMET_13TeV_pt198->SetBinContent(15,0.02465045);
   new_histo_group_Higgs_wh3l_noMET_13TeV_pt198->SetBinContent(16,0.03925045);
   new_histo_group_Higgs_wh3l_noMET_13TeV_pt198->SetBinContent(17,0.02377901);
   new_histo_group_Higgs_wh3l_noMET_13TeV_pt198->SetBinContent(18,0.01970415);
   new_histo_group_Higgs_wh3l_noMET_13TeV_pt198->SetBinContent(19,0.01052674);
   new_histo_group_Higgs_wh3l_noMET_13TeV_pt198->SetBinContent(20,0.007404411);
   new_histo_group_Higgs_wh3l_noMET_13TeV_pt198->SetBinContent(21,0.004614075);
   new_histo_group_Higgs_wh3l_noMET_13TeV_pt198->SetBinContent(22,0.005210303);
   new_histo_group_Higgs_wh3l_noMET_13TeV_pt198->SetBinContent(23,0.002729654);
   new_histo_group_Higgs_wh3l_noMET_13TeV_pt198->SetBinContent(24,0.003992403);
   new_histo_group_Higgs_wh3l_noMET_13TeV_pt198->SetBinContent(25,0.009184059);
   new_histo_group_Higgs_wh3l_noMET_13TeV_pt198->SetBinContent(26,0.03075087);
   new_histo_group_Higgs_wh3l_noMET_13TeV_pt198->SetBinError(2,0.005147779);
   new_histo_group_Higgs_wh3l_noMET_13TeV_pt198->SetBinError(3,0.008678711);
   new_histo_group_Higgs_wh3l_noMET_13TeV_pt198->SetBinError(4,0.01233201);
   new_histo_group_Higgs_wh3l_noMET_13TeV_pt198->SetBinError(5,0.0137433);
   new_histo_group_Higgs_wh3l_noMET_13TeV_pt198->SetBinError(6,0.01174784);
   new_histo_group_Higgs_wh3l_noMET_13TeV_pt198->SetBinError(7,0.0123121);
   new_histo_group_Higgs_wh3l_noMET_13TeV_pt198->SetBinError(8,0.0102696);
   new_histo_group_Higgs_wh3l_noMET_13TeV_pt198->SetBinError(9,0.009557239);
   new_histo_group_Higgs_wh3l_noMET_13TeV_pt198->SetBinError(10,0.009992866);
   new_histo_group_Higgs_wh3l_noMET_13TeV_pt198->SetBinError(11,0.008395753);
   new_histo_group_Higgs_wh3l_noMET_13TeV_pt198->SetBinError(12,0.006553917);
   new_histo_group_Higgs_wh3l_noMET_13TeV_pt198->SetBinError(13,0.00677506);
   new_histo_group_Higgs_wh3l_noMET_13TeV_pt198->SetBinError(14,0.006859433);
   new_histo_group_Higgs_wh3l_noMET_13TeV_pt198->SetBinError(15,0.004874248);
   new_histo_group_Higgs_wh3l_noMET_13TeV_pt198->SetBinError(16,0.007233242);
   new_histo_group_Higgs_wh3l_noMET_13TeV_pt198->SetBinError(17,0.005258483);
   new_histo_group_Higgs_wh3l_noMET_13TeV_pt198->SetBinError(18,0.005009454);
   new_histo_group_Higgs_wh3l_noMET_13TeV_pt198->SetBinError(19,0.003362007);
   new_histo_group_Higgs_wh3l_noMET_13TeV_pt198->SetBinError(20,0.0020122);
   new_histo_group_Higgs_wh3l_noMET_13TeV_pt198->SetBinError(21,0.001717686);
   new_histo_group_Higgs_wh3l_noMET_13TeV_pt198->SetBinError(22,0.001998471);
   new_histo_group_Higgs_wh3l_noMET_13TeV_pt198->SetBinError(23,0.001035055);
   new_histo_group_Higgs_wh3l_noMET_13TeV_pt198->SetBinError(24,0.001812398);
   new_histo_group_Higgs_wh3l_noMET_13TeV_pt198->SetBinError(25,0.003470913);
   new_histo_group_Higgs_wh3l_noMET_13TeV_pt198->SetBinError(26,0.005776314);
   new_histo_group_Higgs_wh3l_noMET_13TeV_pt198->SetEntries(2122);
   new_histo_group_Higgs_wh3l_noMET_13TeV_pt198->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_noMET_13TeV_pt198->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_noMET_13TeV_pt198->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_noMET_13TeV_pt198->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_noMET_13TeV_pt198->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_noMET_13TeV_pt198->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_noMET_13TeV_pt198->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_noMET_13TeV_pt198->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_noMET_13TeV_pt198->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_noMET_13TeV_pt198->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_noMET_13TeV_pt198->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_noMET_13TeV_pt198->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_noMET_13TeV_pt198->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_noMET_13TeV_pt198->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_noMET_13TeV_pt198->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_noMET_13TeV_pt1->Add(new_histo_group_Higgs_wh3l_noMET_13TeV_pt1,"");
   thsBackground_grouped_wh3l_noMET_13TeV_pt1->Draw("hist same");
   
   thsSignal_grouped_wh3l_noMET_13TeV_pt1 = new THStack();
   thsSignal_grouped_wh3l_noMET_13TeV_pt1->SetName("thsSignal_grouped_wh3l_noMET_13TeV_pt1");
   thsSignal_grouped_wh3l_noMET_13TeV_pt1->SetTitle("thsSignal_grouped_wh3l_noMET_13TeV_pt1");
   
   TH1F *thsSignal_grouped_wh3l_noMET_13TeV_pt1_stack_20 = new TH1F("thsSignal_grouped_wh3l_noMET_13TeV_pt1_stack_20","thsSignal_grouped_wh3l_noMET_13TeV_pt1",25,10,200);
   thsSignal_grouped_wh3l_noMET_13TeV_pt1_stack_20->SetMinimum(0);
   thsSignal_grouped_wh3l_noMET_13TeV_pt1_stack_20->SetMaximum(0.1794093);
   thsSignal_grouped_wh3l_noMET_13TeV_pt1_stack_20->SetDirectory(0);
   thsSignal_grouped_wh3l_noMET_13TeV_pt1_stack_20->SetStats(0);
   thsSignal_grouped_wh3l_noMET_13TeV_pt1_stack_20->SetLineStyle(0);
   thsSignal_grouped_wh3l_noMET_13TeV_pt1_stack_20->SetMarkerStyle(20);
   thsSignal_grouped_wh3l_noMET_13TeV_pt1_stack_20->GetXaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_noMET_13TeV_pt1_stack_20->GetXaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_noMET_13TeV_pt1_stack_20->GetXaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_noMET_13TeV_pt1_stack_20->GetXaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_noMET_13TeV_pt1_stack_20->GetXaxis()->SetTitleOffset(0.9);
   thsSignal_grouped_wh3l_noMET_13TeV_pt1_stack_20->GetXaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_noMET_13TeV_pt1_stack_20->GetYaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_noMET_13TeV_pt1_stack_20->GetYaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_noMET_13TeV_pt1_stack_20->GetYaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_noMET_13TeV_pt1_stack_20->GetYaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_noMET_13TeV_pt1_stack_20->GetYaxis()->SetTitleOffset(1.25);
   thsSignal_grouped_wh3l_noMET_13TeV_pt1_stack_20->GetYaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_noMET_13TeV_pt1_stack_20->GetZaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_noMET_13TeV_pt1_stack_20->GetZaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_noMET_13TeV_pt1_stack_20->GetZaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_noMET_13TeV_pt1_stack_20->GetZaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_noMET_13TeV_pt1_stack_20->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_noMET_13TeV_pt1->SetHistogram(thsSignal_grouped_wh3l_noMET_13TeV_pt1_stack_20);
   
   
   TH1D *new_histo_group_Higgs_wh3l_noMET_13TeV_pt199 = new TH1D("new_histo_group_Higgs_wh3l_noMET_13TeV_pt199","histo_H_htt",25,10,200);
   new_histo_group_Higgs_wh3l_noMET_13TeV_pt199->SetBinContent(2,0.02381934);
   new_histo_group_Higgs_wh3l_noMET_13TeV_pt199->SetBinContent(3,0.075587);
   new_histo_group_Higgs_wh3l_noMET_13TeV_pt199->SetBinContent(4,0.1422214);
   new_histo_group_Higgs_wh3l_noMET_13TeV_pt199->SetBinContent(5,0.1571227);
   new_histo_group_Higgs_wh3l_noMET_13TeV_pt199->SetBinContent(6,0.1179583);
   new_histo_group_Higgs_wh3l_noMET_13TeV_pt199->SetBinContent(7,0.1199285);
   new_histo_group_Higgs_wh3l_noMET_13TeV_pt199->SetBinContent(8,0.09808248);
   new_histo_group_Higgs_wh3l_noMET_13TeV_pt199->SetBinContent(9,0.07600423);
   new_histo_group_Higgs_wh3l_noMET_13TeV_pt199->SetBinContent(10,0.07405652);
   new_histo_group_Higgs_wh3l_noMET_13TeV_pt199->SetBinContent(11,0.05501157);
   new_histo_group_Higgs_wh3l_noMET_13TeV_pt199->SetBinContent(12,0.03752374);
   new_histo_group_Higgs_wh3l_noMET_13TeV_pt199->SetBinContent(13,0.0414069);
   new_histo_group_Higgs_wh3l_noMET_13TeV_pt199->SetBinContent(14,0.03998314);
   new_histo_group_Higgs_wh3l_noMET_13TeV_pt199->SetBinContent(15,0.02465045);
   new_histo_group_Higgs_wh3l_noMET_13TeV_pt199->SetBinContent(16,0.03925045);
   new_histo_group_Higgs_wh3l_noMET_13TeV_pt199->SetBinContent(17,0.02377901);
   new_histo_group_Higgs_wh3l_noMET_13TeV_pt199->SetBinContent(18,0.01970415);
   new_histo_group_Higgs_wh3l_noMET_13TeV_pt199->SetBinContent(19,0.01052674);
   new_histo_group_Higgs_wh3l_noMET_13TeV_pt199->SetBinContent(20,0.007404411);
   new_histo_group_Higgs_wh3l_noMET_13TeV_pt199->SetBinContent(21,0.004614075);
   new_histo_group_Higgs_wh3l_noMET_13TeV_pt199->SetBinContent(22,0.005210303);
   new_histo_group_Higgs_wh3l_noMET_13TeV_pt199->SetBinContent(23,0.002729654);
   new_histo_group_Higgs_wh3l_noMET_13TeV_pt199->SetBinContent(24,0.003992403);
   new_histo_group_Higgs_wh3l_noMET_13TeV_pt199->SetBinContent(25,0.009184059);
   new_histo_group_Higgs_wh3l_noMET_13TeV_pt199->SetBinContent(26,0.03075087);
   new_histo_group_Higgs_wh3l_noMET_13TeV_pt199->SetBinError(2,0.005147779);
   new_histo_group_Higgs_wh3l_noMET_13TeV_pt199->SetBinError(3,0.008678711);
   new_histo_group_Higgs_wh3l_noMET_13TeV_pt199->SetBinError(4,0.01233201);
   new_histo_group_Higgs_wh3l_noMET_13TeV_pt199->SetBinError(5,0.0137433);
   new_histo_group_Higgs_wh3l_noMET_13TeV_pt199->SetBinError(6,0.01174784);
   new_histo_group_Higgs_wh3l_noMET_13TeV_pt199->SetBinError(7,0.0123121);
   new_histo_group_Higgs_wh3l_noMET_13TeV_pt199->SetBinError(8,0.0102696);
   new_histo_group_Higgs_wh3l_noMET_13TeV_pt199->SetBinError(9,0.009557239);
   new_histo_group_Higgs_wh3l_noMET_13TeV_pt199->SetBinError(10,0.009992866);
   new_histo_group_Higgs_wh3l_noMET_13TeV_pt199->SetBinError(11,0.008395753);
   new_histo_group_Higgs_wh3l_noMET_13TeV_pt199->SetBinError(12,0.006553917);
   new_histo_group_Higgs_wh3l_noMET_13TeV_pt199->SetBinError(13,0.00677506);
   new_histo_group_Higgs_wh3l_noMET_13TeV_pt199->SetBinError(14,0.006859433);
   new_histo_group_Higgs_wh3l_noMET_13TeV_pt199->SetBinError(15,0.004874248);
   new_histo_group_Higgs_wh3l_noMET_13TeV_pt199->SetBinError(16,0.007233242);
   new_histo_group_Higgs_wh3l_noMET_13TeV_pt199->SetBinError(17,0.005258483);
   new_histo_group_Higgs_wh3l_noMET_13TeV_pt199->SetBinError(18,0.005009454);
   new_histo_group_Higgs_wh3l_noMET_13TeV_pt199->SetBinError(19,0.003362007);
   new_histo_group_Higgs_wh3l_noMET_13TeV_pt199->SetBinError(20,0.0020122);
   new_histo_group_Higgs_wh3l_noMET_13TeV_pt199->SetBinError(21,0.001717686);
   new_histo_group_Higgs_wh3l_noMET_13TeV_pt199->SetBinError(22,0.001998471);
   new_histo_group_Higgs_wh3l_noMET_13TeV_pt199->SetBinError(23,0.001035055);
   new_histo_group_Higgs_wh3l_noMET_13TeV_pt199->SetBinError(24,0.001812398);
   new_histo_group_Higgs_wh3l_noMET_13TeV_pt199->SetBinError(25,0.003470913);
   new_histo_group_Higgs_wh3l_noMET_13TeV_pt199->SetBinError(26,0.005776314);
   new_histo_group_Higgs_wh3l_noMET_13TeV_pt199->SetEntries(2122);
   new_histo_group_Higgs_wh3l_noMET_13TeV_pt199->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_noMET_13TeV_pt199->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_noMET_13TeV_pt199->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_noMET_13TeV_pt199->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_noMET_13TeV_pt199->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_noMET_13TeV_pt199->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_noMET_13TeV_pt199->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_noMET_13TeV_pt199->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_noMET_13TeV_pt199->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_noMET_13TeV_pt199->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_noMET_13TeV_pt199->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_noMET_13TeV_pt199->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_noMET_13TeV_pt199->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_noMET_13TeV_pt199->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_noMET_13TeV_pt199->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_noMET_13TeV_pt1->Add(new_histo_group_Higgs_wh3l_noMET_13TeV_pt1,"");
   thsSignal_grouped_wh3l_noMET_13TeV_pt1->Draw("hist same noclear");
   
   Double_t _fx3019[25] = {
   13.8,
   21.4,
   29,
   36.6,
   44.2,
   51.8,
   59.4,
   67,
   74.6,
   82.2,
   89.8,
   97.4,
   105,
   112.6,
   120.2,
   127.8,
   135.4,
   143,
   150.6,
   158.2,
   165.8,
   173.4,
   181,
   188.6,
   196.2};
   Double_t _fy3019[25] = {
   0,
   9.806997,
   31.514,
   38.59418,
   24.29184,
   12.14168,
   3.167871,
   4.577941,
   3.196146,
   2.854078,
   2.277732,
   1.351442,
   0.9619884,
   1.401437,
   1.005599,
   0.4387393,
   0.357778,
   0.3506195,
   0.3467491,
   0.2420885,
   1.007144,
   0.198244,
   0.3474354,
   0.05212894,
   0.3153388};
   Double_t _felx3019[25] = {
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8};
   Double_t _fely3019[25] = {
   0,
   3.454844,
   5.371645,
   5.930398,
   4.413571,
   3.233424,
   0.9466484,
   1.679309,
   1.473774,
   0.9876038,
   1.23922,
   0.5931545,
   0.4376152,
   0.7178324,
   0.3763205,
   0.1736519,
   0.2021742,
   0.181042,
   0.1836248,
   0.156188,
   0.9651701,
   0.09671655,
   0.2844403,
   0.03416861,
   0.2681609};
   Double_t _fehx3019[25] = {
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8};
   Double_t _fehy3019[25] = {
   0,
   3.454482,
   5.365912,
   5.921473,
   4.411407,
   3.23081,
   1.438146,
   1.679262,
   1.473719,
   0.9875903,
   1.239223,
   0.7453433,
   0.5303665,
   0.7496522,
   0.3758483,
   0.1736014,
   0.2021382,
   0.1810587,
   0.1835357,
   0.182137,
   0.9651697,
   0.09668516,
   0.28326,
   0.03416678,
   0.2681603};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(25,_fx3019,_fy3019,_felx3019,_fehx3019,_fely3019,_fehy3019);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(12);
   grae->SetFillStyle(3004);
   grae->SetLineColor(12);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3019 = new TH1F("Graph_Graph3019","",100,0,219);
   Graph_Graph3019->SetMinimum(0);
   Graph_Graph3019->SetMaximum(48.96722);
   Graph_Graph3019->SetDirectory(0);
   Graph_Graph3019->SetStats(0);
   Graph_Graph3019->SetLineStyle(0);
   Graph_Graph3019->SetMarkerStyle(20);
   Graph_Graph3019->GetXaxis()->SetLabelFont(42);
   Graph_Graph3019->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3019->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3019->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3019->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3019->GetXaxis()->SetTitleFont(42);
   Graph_Graph3019->GetYaxis()->SetLabelFont(42);
   Graph_Graph3019->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3019->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3019->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3019->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3019->GetYaxis()->SetTitleFont(42);
   Graph_Graph3019->GetZaxis()->SetLabelFont(42);
   Graph_Graph3019->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3019->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3019->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3019->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3019);
   
   grae->Draw("2");
   
   Double_t _fx3020[25] = {
   13.8,
   21.4,
   29,
   36.6,
   44.2,
   51.8,
   59.4,
   67,
   74.6,
   82.2,
   89.8,
   97.4,
   105,
   112.6,
   120.2,
   127.8,
   135.4,
   143,
   150.6,
   158.2,
   165.8,
   173.4,
   181,
   188.6,
   196.2};
   Double_t _fy3020[25] = {
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
   Double_t _felx3020[25] = {
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8};
   Double_t _fely3020[25] = {
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
   Double_t _fehx3020[25] = {
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8};
   Double_t _fehy3020[25] = {
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
   grae = new TGraphAsymmErrors(25,_fx3020,_fy3020,_felx3020,_fehx3020,_fely3020,_fehy3020);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(1);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3020 = new TH1F("Graph_Graph3020","",100,0,219);
   Graph_Graph3020->SetMinimum(0);
   Graph_Graph3020->SetMaximum(1.262698);
   Graph_Graph3020->SetDirectory(0);
   Graph_Graph3020->SetStats(0);
   Graph_Graph3020->SetLineStyle(0);
   Graph_Graph3020->SetMarkerStyle(20);
   Graph_Graph3020->GetXaxis()->SetLabelFont(42);
   Graph_Graph3020->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3020->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3020->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3020->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3020->GetXaxis()->SetTitleFont(42);
   Graph_Graph3020->GetYaxis()->SetLabelFont(42);
   Graph_Graph3020->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3020->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3020->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3020->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3020->GetYaxis()->SetTitleFont(42);
   Graph_Graph3020->GetZaxis()->SetLabelFont(42);
   Graph_Graph3020->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3020->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3020->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3020->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3020);
   
   grae->Draw("p0");
   
   TLegend *leg = new TLegend(0.2,0.7,0.8,0.9,NULL,"brNDC");
   leg->SetTextFont(62);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("new_histo_group_Fake_wh3l_noMET_13TeV_pt1","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_noMET_13TeV_pt1","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_noMET_13TeV_pt1","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_noMET_13TeV_pt1","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_noMET_13TeV_pt1","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_noMET_13TeV_pt1","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_noMET_13TeV_pt1","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_noMET_13TeV_pt1","Data","EPL");
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
   entry=leg->AddEntry("new_histo_group_Fake_wh3l_noMET_13TeV_pt1","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_noMET_13TeV_pt1","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_noMET_13TeV_pt1","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_noMET_13TeV_pt1","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_noMET_13TeV_pt1","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_noMET_13TeV_pt1","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_noMET_13TeV_pt1","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_noMET_13TeV_pt1","Data","EPL");
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
   
   TH1F *hframe_copy100 = new TH1F("hframe_copy100","",1000,10,200);
   hframe_copy100->SetMinimum(0);
   hframe_copy100->SetMaximum(96.84102);
   hframe_copy100->SetDirectory(0);
   hframe_copy100->SetStats(0);
   hframe_copy100->SetLineStyle(0);
   hframe_copy100->SetMarkerStyle(20);
   hframe_copy100->GetXaxis()->SetTitle("lept1_p_{T} [GeV]");
   hframe_copy100->GetXaxis()->SetNdivisions(506);
   hframe_copy100->GetXaxis()->SetLabelFont(42);
   hframe_copy100->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy100->GetXaxis()->SetLabelSize(0.05);
   hframe_copy100->GetXaxis()->SetTitleSize(0.06);
   hframe_copy100->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy100->GetXaxis()->SetTitleFont(42);
   hframe_copy100->GetYaxis()->SetTitle("Events");
   hframe_copy100->GetYaxis()->SetLabelFont(42);
   hframe_copy100->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy100->GetYaxis()->SetLabelSize(0.05);
   hframe_copy100->GetYaxis()->SetTitleSize(0.06);
   hframe_copy100->GetYaxis()->SetTitleOffset(1.25);
   hframe_copy100->GetYaxis()->SetTitleFont(42);
   hframe_copy100->GetZaxis()->SetLabelFont(42);
   hframe_copy100->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy100->GetZaxis()->SetLabelSize(0.05);
   hframe_copy100->GetZaxis()->SetTitleSize(0.06);
   hframe_copy100->GetZaxis()->SetTitleFont(42);
   hframe_copy100->Draw("sameaxis");
   ccwh3l_noMET_13TeV_pt1->Modified();
   ccwh3l_noMET_13TeV_pt1->cd();
   ccwh3l_noMET_13TeV_pt1->SetSelected(ccwh3l_noMET_13TeV_pt1);
}
