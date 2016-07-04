void c_wh3l_Pre_13TeV_zveto_3l()
{
//=========Macro generated from canvas: ccwh3l_Pre_13TeV_zveto_3l/cc
//=========  (Sat Jul  2 21:43:41 2016) by ROOT version6.02/13
   TCanvas *ccwh3l_Pre_13TeV_zveto_3l = new TCanvas("ccwh3l_Pre_13TeV_zveto_3l", "cc",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   ccwh3l_Pre_13TeV_zveto_3l->SetHighLightColor(2);
   ccwh3l_Pre_13TeV_zveto_3l->Range(-20,-251.1528,105,1680.792);
   ccwh3l_Pre_13TeV_zveto_3l->SetFillColor(0);
   ccwh3l_Pre_13TeV_zveto_3l->SetBorderMode(0);
   ccwh3l_Pre_13TeV_zveto_3l->SetBorderSize(2);
   ccwh3l_Pre_13TeV_zveto_3l->SetTickx(1);
   ccwh3l_Pre_13TeV_zveto_3l->SetTicky(1);
   ccwh3l_Pre_13TeV_zveto_3l->SetLeftMargin(0.16);
   ccwh3l_Pre_13TeV_zveto_3l->SetRightMargin(0.04);
   ccwh3l_Pre_13TeV_zveto_3l->SetTopMargin(0.05);
   ccwh3l_Pre_13TeV_zveto_3l->SetBottomMargin(0.13);
   ccwh3l_Pre_13TeV_zveto_3l->SetFrameFillStyle(0);
   ccwh3l_Pre_13TeV_zveto_3l->SetFrameBorderMode(0);
   ccwh3l_Pre_13TeV_zveto_3l->SetFrameFillStyle(0);
   ccwh3l_Pre_13TeV_zveto_3l->SetFrameBorderMode(0);
   
   TH1F *hframe281 = new TH1F("hframe281","",1000,0,100);
   hframe281->SetMinimum(0);
   hframe281->SetMaximum(1584.195);
   hframe281->SetDirectory(0);
   hframe281->SetStats(0);
   hframe281->SetLineStyle(0);
   hframe281->SetMarkerStyle(20);
   hframe281->GetXaxis()->SetTitle("m_{ll} - M_{Z} [GeV]");
   hframe281->GetXaxis()->SetNdivisions(506);
   hframe281->GetXaxis()->SetLabelFont(42);
   hframe281->GetXaxis()->SetLabelOffset(0.007);
   hframe281->GetXaxis()->SetLabelSize(0.05);
   hframe281->GetXaxis()->SetTitleSize(0.06);
   hframe281->GetXaxis()->SetTitleOffset(0.9);
   hframe281->GetXaxis()->SetTitleFont(42);
   hframe281->GetYaxis()->SetTitle("Events");
   hframe281->GetYaxis()->SetLabelFont(42);
   hframe281->GetYaxis()->SetLabelOffset(0.007);
   hframe281->GetYaxis()->SetLabelSize(0.05);
   hframe281->GetYaxis()->SetTitleSize(0.06);
   hframe281->GetYaxis()->SetTitleOffset(1.25);
   hframe281->GetYaxis()->SetTitleFont(42);
   hframe281->GetZaxis()->SetLabelFont(42);
   hframe281->GetZaxis()->SetLabelOffset(0.007);
   hframe281->GetZaxis()->SetLabelSize(0.05);
   hframe281->GetZaxis()->SetTitleSize(0.06);
   hframe281->GetZaxis()->SetTitleFont(42);
   hframe281->Draw(" ");
   
   THStack *thsBackground_grouped_wh3l_Pre_13TeV_zveto_3l = new THStack();
   thsBackground_grouped_wh3l_Pre_13TeV_zveto_3l->SetName("thsBackground_grouped_wh3l_Pre_13TeV_zveto_3l");
   thsBackground_grouped_wh3l_Pre_13TeV_zveto_3l->SetTitle("thsBackground_grouped_wh3l_Pre_13TeV_zveto_3l");
   
   TH1F *thsBackground_grouped_wh3l_Pre_13TeV_zveto_3l_stack_57 = new TH1F("thsBackground_grouped_wh3l_Pre_13TeV_zveto_3l_stack_57","thsBackground_grouped_wh3l_Pre_13TeV_zveto_3l",20,0,100);
   thsBackground_grouped_wh3l_Pre_13TeV_zveto_3l_stack_57->SetMinimum(-0.1422528);
   thsBackground_grouped_wh3l_Pre_13TeV_zveto_3l_stack_57->SetMaximum(547.9534);
   thsBackground_grouped_wh3l_Pre_13TeV_zveto_3l_stack_57->SetDirectory(0);
   thsBackground_grouped_wh3l_Pre_13TeV_zveto_3l_stack_57->SetStats(0);
   thsBackground_grouped_wh3l_Pre_13TeV_zveto_3l_stack_57->SetLineStyle(0);
   thsBackground_grouped_wh3l_Pre_13TeV_zveto_3l_stack_57->SetMarkerStyle(20);
   thsBackground_grouped_wh3l_Pre_13TeV_zveto_3l_stack_57->GetXaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_Pre_13TeV_zveto_3l_stack_57->GetXaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_Pre_13TeV_zveto_3l_stack_57->GetXaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_Pre_13TeV_zveto_3l_stack_57->GetXaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_Pre_13TeV_zveto_3l_stack_57->GetXaxis()->SetTitleOffset(0.9);
   thsBackground_grouped_wh3l_Pre_13TeV_zveto_3l_stack_57->GetXaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_Pre_13TeV_zveto_3l_stack_57->GetYaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_Pre_13TeV_zveto_3l_stack_57->GetYaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_Pre_13TeV_zveto_3l_stack_57->GetYaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_Pre_13TeV_zveto_3l_stack_57->GetYaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_Pre_13TeV_zveto_3l_stack_57->GetYaxis()->SetTitleOffset(1.25);
   thsBackground_grouped_wh3l_Pre_13TeV_zveto_3l_stack_57->GetYaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_Pre_13TeV_zveto_3l_stack_57->GetZaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_Pre_13TeV_zveto_3l_stack_57->GetZaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_Pre_13TeV_zveto_3l_stack_57->GetZaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_Pre_13TeV_zveto_3l_stack_57->GetZaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_Pre_13TeV_zveto_3l_stack_57->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_Pre_13TeV_zveto_3l->SetHistogram(thsBackground_grouped_wh3l_Pre_13TeV_zveto_3l_stack_57);
   
   
   TH1D *new_histo_group_Fake_wh3l_Pre_13TeV_zveto_3l282 = new TH1D("new_histo_group_Fake_wh3l_Pre_13TeV_zveto_3l282","histo_Fake",20,0,100);
   new_histo_group_Fake_wh3l_Pre_13TeV_zveto_3l282->SetBinContent(1,158.9459);
   new_histo_group_Fake_wh3l_Pre_13TeV_zveto_3l282->SetBinContent(2,25.08334);
   new_histo_group_Fake_wh3l_Pre_13TeV_zveto_3l282->SetBinContent(3,12.36328);
   new_histo_group_Fake_wh3l_Pre_13TeV_zveto_3l282->SetBinContent(4,12.01791);
   new_histo_group_Fake_wh3l_Pre_13TeV_zveto_3l282->SetBinContent(5,12.75658);
   new_histo_group_Fake_wh3l_Pre_13TeV_zveto_3l282->SetBinContent(6,9.033586);
   new_histo_group_Fake_wh3l_Pre_13TeV_zveto_3l282->SetBinContent(7,10.0461);
   new_histo_group_Fake_wh3l_Pre_13TeV_zveto_3l282->SetBinContent(8,6.532215);
   new_histo_group_Fake_wh3l_Pre_13TeV_zveto_3l282->SetBinContent(9,7.040833);
   new_histo_group_Fake_wh3l_Pre_13TeV_zveto_3l282->SetBinContent(10,8.269906);
   new_histo_group_Fake_wh3l_Pre_13TeV_zveto_3l282->SetBinContent(11,5.319719);
   new_histo_group_Fake_wh3l_Pre_13TeV_zveto_3l282->SetBinContent(12,5.565836);
   new_histo_group_Fake_wh3l_Pre_13TeV_zveto_3l282->SetBinContent(13,4.854774);
   new_histo_group_Fake_wh3l_Pre_13TeV_zveto_3l282->SetBinContent(14,3.370606);
   new_histo_group_Fake_wh3l_Pre_13TeV_zveto_3l282->SetBinContent(15,3.195197);
   new_histo_group_Fake_wh3l_Pre_13TeV_zveto_3l282->SetBinContent(16,2.141076);
   new_histo_group_Fake_wh3l_Pre_13TeV_zveto_3l282->SetBinContent(17,0.2751589);
   new_histo_group_Fake_wh3l_Pre_13TeV_zveto_3l282->SetBinContent(19,2.045231);
   new_histo_group_Fake_wh3l_Pre_13TeV_zveto_3l282->SetBinError(1,9.828032);
   new_histo_group_Fake_wh3l_Pre_13TeV_zveto_3l282->SetBinError(2,3.916992);
   new_histo_group_Fake_wh3l_Pre_13TeV_zveto_3l282->SetBinError(3,2.784271);
   new_histo_group_Fake_wh3l_Pre_13TeV_zveto_3l282->SetBinError(4,2.574126);
   new_histo_group_Fake_wh3l_Pre_13TeV_zveto_3l282->SetBinError(5,2.759748);
   new_histo_group_Fake_wh3l_Pre_13TeV_zveto_3l282->SetBinError(6,2.610105);
   new_histo_group_Fake_wh3l_Pre_13TeV_zveto_3l282->SetBinError(7,2.429903);
   new_histo_group_Fake_wh3l_Pre_13TeV_zveto_3l282->SetBinError(8,2.048183);
   new_histo_group_Fake_wh3l_Pre_13TeV_zveto_3l282->SetBinError(9,2.284161);
   new_histo_group_Fake_wh3l_Pre_13TeV_zveto_3l282->SetBinError(10,2.653835);
   new_histo_group_Fake_wh3l_Pre_13TeV_zveto_3l282->SetBinError(11,2.304217);
   new_histo_group_Fake_wh3l_Pre_13TeV_zveto_3l282->SetBinError(12,1.766587);
   new_histo_group_Fake_wh3l_Pre_13TeV_zveto_3l282->SetBinError(13,1.884376);
   new_histo_group_Fake_wh3l_Pre_13TeV_zveto_3l282->SetBinError(14,1.470276);
   new_histo_group_Fake_wh3l_Pre_13TeV_zveto_3l282->SetBinError(15,1.37213);
   new_histo_group_Fake_wh3l_Pre_13TeV_zveto_3l282->SetBinError(16,1.13592);
   new_histo_group_Fake_wh3l_Pre_13TeV_zveto_3l282->SetBinError(17,0.1555927);
   new_histo_group_Fake_wh3l_Pre_13TeV_zveto_3l282->SetBinError(19,0.7990417);
   new_histo_group_Fake_wh3l_Pre_13TeV_zveto_3l282->SetEntries(3851);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_Pre_13TeV_zveto_3l282->SetFillColor(ci);
   new_histo_group_Fake_wh3l_Pre_13TeV_zveto_3l282->SetFillStyle(3001);

   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_Pre_13TeV_zveto_3l282->SetLineColor(ci);
   new_histo_group_Fake_wh3l_Pre_13TeV_zveto_3l282->GetXaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_Pre_13TeV_zveto_3l282->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_Pre_13TeV_zveto_3l282->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_Pre_13TeV_zveto_3l282->GetXaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_Pre_13TeV_zveto_3l282->GetYaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_Pre_13TeV_zveto_3l282->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_Pre_13TeV_zveto_3l282->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_Pre_13TeV_zveto_3l282->GetYaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_Pre_13TeV_zveto_3l282->GetZaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_Pre_13TeV_zveto_3l282->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_Pre_13TeV_zveto_3l282->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_Pre_13TeV_zveto_3l282->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_Pre_13TeV_zveto_3l->Add(new_histo_group_Fake_wh3l_Pre_13TeV_zveto_3l,"");
   
   TH1D *new_histo_group_WW_wh3l_Pre_13TeV_zveto_3l283 = new TH1D("new_histo_group_WW_wh3l_Pre_13TeV_zveto_3l283","histo_WW",20,0,100);
   new_histo_group_WW_wh3l_Pre_13TeV_zveto_3l283->SetBinContent(1,0.06494686);
   new_histo_group_WW_wh3l_Pre_13TeV_zveto_3l283->SetBinContent(2,0.01566606);
   new_histo_group_WW_wh3l_Pre_13TeV_zveto_3l283->SetBinContent(5,0.04065372);
   new_histo_group_WW_wh3l_Pre_13TeV_zveto_3l283->SetBinContent(6,0.01821101);
   new_histo_group_WW_wh3l_Pre_13TeV_zveto_3l283->SetBinContent(7,0.04971555);
   new_histo_group_WW_wh3l_Pre_13TeV_zveto_3l283->SetBinContent(8,0.03608106);
   new_histo_group_WW_wh3l_Pre_13TeV_zveto_3l283->SetBinContent(10,0.01044191);
   new_histo_group_WW_wh3l_Pre_13TeV_zveto_3l283->SetBinContent(11,0.04562689);
   new_histo_group_WW_wh3l_Pre_13TeV_zveto_3l283->SetBinContent(12,0.0324642);
   new_histo_group_WW_wh3l_Pre_13TeV_zveto_3l283->SetBinContent(13,0.01273931);
   new_histo_group_WW_wh3l_Pre_13TeV_zveto_3l283->SetBinContent(14,0.01959378);
   new_histo_group_WW_wh3l_Pre_13TeV_zveto_3l283->SetBinContent(15,0.04660166);
   new_histo_group_WW_wh3l_Pre_13TeV_zveto_3l283->SetBinContent(19,0.04175506);
   new_histo_group_WW_wh3l_Pre_13TeV_zveto_3l283->SetBinError(1,0.03109464);
   new_histo_group_WW_wh3l_Pre_13TeV_zveto_3l283->SetBinError(2,0.01566606);
   new_histo_group_WW_wh3l_Pre_13TeV_zveto_3l283->SetBinError(5,0.0236932);
   new_histo_group_WW_wh3l_Pre_13TeV_zveto_3l283->SetBinError(6,0.01821101);
   new_histo_group_WW_wh3l_Pre_13TeV_zveto_3l283->SetBinError(7,0.02885126);
   new_histo_group_WW_wh3l_Pre_13TeV_zveto_3l283->SetBinError(8,0.02647039);
   new_histo_group_WW_wh3l_Pre_13TeV_zveto_3l283->SetBinError(10,0.01044191);
   new_histo_group_WW_wh3l_Pre_13TeV_zveto_3l283->SetBinError(11,0.02661679);
   new_histo_group_WW_wh3l_Pre_13TeV_zveto_3l283->SetBinError(12,0.01962802);
   new_histo_group_WW_wh3l_Pre_13TeV_zveto_3l283->SetBinError(13,0.01273931);
   new_histo_group_WW_wh3l_Pre_13TeV_zveto_3l283->SetBinError(14,0.01959378);
   new_histo_group_WW_wh3l_Pre_13TeV_zveto_3l283->SetBinError(15,0.02708211);
   new_histo_group_WW_wh3l_Pre_13TeV_zveto_3l283->SetBinError(19,0.02476386);
   new_histo_group_WW_wh3l_Pre_13TeV_zveto_3l283->SetEntries(30);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_Pre_13TeV_zveto_3l283->SetFillColor(ci);
   new_histo_group_WW_wh3l_Pre_13TeV_zveto_3l283->SetFillStyle(3001);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_Pre_13TeV_zveto_3l283->SetLineColor(ci);
   new_histo_group_WW_wh3l_Pre_13TeV_zveto_3l283->GetXaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_Pre_13TeV_zveto_3l283->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_Pre_13TeV_zveto_3l283->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_Pre_13TeV_zveto_3l283->GetXaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_Pre_13TeV_zveto_3l283->GetYaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_Pre_13TeV_zveto_3l283->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_Pre_13TeV_zveto_3l283->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_Pre_13TeV_zveto_3l283->GetYaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_Pre_13TeV_zveto_3l283->GetZaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_Pre_13TeV_zveto_3l283->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_Pre_13TeV_zveto_3l283->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_Pre_13TeV_zveto_3l283->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_Pre_13TeV_zveto_3l->Add(new_histo_group_WW_wh3l_Pre_13TeV_zveto_3l,"");
   
   TH1D *new_histo_group_VVV_wh3l_Pre_13TeV_zveto_3l284 = new TH1D("new_histo_group_VVV_wh3l_Pre_13TeV_zveto_3l284","histo_VVV",20,0,100);
   new_histo_group_VVV_wh3l_Pre_13TeV_zveto_3l284->SetBinContent(1,3.269158);
   new_histo_group_VVV_wh3l_Pre_13TeV_zveto_3l284->SetBinContent(2,0.5525334);
   new_histo_group_VVV_wh3l_Pre_13TeV_zveto_3l284->SetBinContent(3,0.227966);
   new_histo_group_VVV_wh3l_Pre_13TeV_zveto_3l284->SetBinContent(4,0.1760362);
   new_histo_group_VVV_wh3l_Pre_13TeV_zveto_3l284->SetBinContent(5,0.09967426);
   new_histo_group_VVV_wh3l_Pre_13TeV_zveto_3l284->SetBinContent(6,0.1090466);
   new_histo_group_VVV_wh3l_Pre_13TeV_zveto_3l284->SetBinContent(7,0.08767095);
   new_histo_group_VVV_wh3l_Pre_13TeV_zveto_3l284->SetBinContent(8,0.09695143);
   new_histo_group_VVV_wh3l_Pre_13TeV_zveto_3l284->SetBinContent(9,0.06709181);
   new_histo_group_VVV_wh3l_Pre_13TeV_zveto_3l284->SetBinContent(10,0.04829983);
   new_histo_group_VVV_wh3l_Pre_13TeV_zveto_3l284->SetBinContent(11,0.06684829);
   new_histo_group_VVV_wh3l_Pre_13TeV_zveto_3l284->SetBinContent(12,0.0411139);
   new_histo_group_VVV_wh3l_Pre_13TeV_zveto_3l284->SetBinContent(13,0.04151057);
   new_histo_group_VVV_wh3l_Pre_13TeV_zveto_3l284->SetBinContent(14,0.02963014);
   new_histo_group_VVV_wh3l_Pre_13TeV_zveto_3l284->SetBinContent(15,0.02580375);
   new_histo_group_VVV_wh3l_Pre_13TeV_zveto_3l284->SetBinContent(16,0.02111029);
   new_histo_group_VVV_wh3l_Pre_13TeV_zveto_3l284->SetBinContent(17,0.009564092);
   new_histo_group_VVV_wh3l_Pre_13TeV_zveto_3l284->SetBinContent(18,0.007715708);
   new_histo_group_VVV_wh3l_Pre_13TeV_zveto_3l284->SetBinContent(19,0.2321389);
   new_histo_group_VVV_wh3l_Pre_13TeV_zveto_3l284->SetBinError(1,0.07361406);
   new_histo_group_VVV_wh3l_Pre_13TeV_zveto_3l284->SetBinError(2,0.03281894);
   new_histo_group_VVV_wh3l_Pre_13TeV_zveto_3l284->SetBinError(3,0.02143336);
   new_histo_group_VVV_wh3l_Pre_13TeV_zveto_3l284->SetBinError(4,0.02008831);
   new_histo_group_VVV_wh3l_Pre_13TeV_zveto_3l284->SetBinError(5,0.0162102);
   new_histo_group_VVV_wh3l_Pre_13TeV_zveto_3l284->SetBinError(6,0.01601682);
   new_histo_group_VVV_wh3l_Pre_13TeV_zveto_3l284->SetBinError(7,0.01417407);
   new_histo_group_VVV_wh3l_Pre_13TeV_zveto_3l284->SetBinError(8,0.01515464);
   new_histo_group_VVV_wh3l_Pre_13TeV_zveto_3l284->SetBinError(9,0.01280273);
   new_histo_group_VVV_wh3l_Pre_13TeV_zveto_3l284->SetBinError(10,0.01183432);
   new_histo_group_VVV_wh3l_Pre_13TeV_zveto_3l284->SetBinError(11,0.01290992);
   new_histo_group_VVV_wh3l_Pre_13TeV_zveto_3l284->SetBinError(12,0.01013613);
   new_histo_group_VVV_wh3l_Pre_13TeV_zveto_3l284->SetBinError(13,0.009413976);
   new_histo_group_VVV_wh3l_Pre_13TeV_zveto_3l284->SetBinError(14,0.009018043);
   new_histo_group_VVV_wh3l_Pre_13TeV_zveto_3l284->SetBinError(15,0.00838729);
   new_histo_group_VVV_wh3l_Pre_13TeV_zveto_3l284->SetBinError(16,0.007816846);
   new_histo_group_VVV_wh3l_Pre_13TeV_zveto_3l284->SetBinError(17,0.004477143);
   new_histo_group_VVV_wh3l_Pre_13TeV_zveto_3l284->SetBinError(18,0.004456931);
   new_histo_group_VVV_wh3l_Pre_13TeV_zveto_3l284->SetBinError(19,0.02452338);
   new_histo_group_VVV_wh3l_Pre_13TeV_zveto_3l284->SetEntries(4991);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_Pre_13TeV_zveto_3l284->SetFillColor(ci);
   new_histo_group_VVV_wh3l_Pre_13TeV_zveto_3l284->SetFillStyle(3001);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_Pre_13TeV_zveto_3l284->SetLineColor(ci);
   new_histo_group_VVV_wh3l_Pre_13TeV_zveto_3l284->GetXaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_Pre_13TeV_zveto_3l284->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_Pre_13TeV_zveto_3l284->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_Pre_13TeV_zveto_3l284->GetXaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_Pre_13TeV_zveto_3l284->GetYaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_Pre_13TeV_zveto_3l284->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_Pre_13TeV_zveto_3l284->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_Pre_13TeV_zveto_3l284->GetYaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_Pre_13TeV_zveto_3l284->GetZaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_Pre_13TeV_zveto_3l284->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_Pre_13TeV_zveto_3l284->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_Pre_13TeV_zveto_3l284->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_Pre_13TeV_zveto_3l->Add(new_histo_group_VVV_wh3l_Pre_13TeV_zveto_3l,"");
   
   TH1D *new_histo_group_Vg_wh3l_Pre_13TeV_zveto_3l285 = new TH1D("new_histo_group_Vg_wh3l_Pre_13TeV_zveto_3l285","histo_Vg",20,0,100);
   new_histo_group_Vg_wh3l_Pre_13TeV_zveto_3l285->SetBinContent(1,47.42997);
   new_histo_group_Vg_wh3l_Pre_13TeV_zveto_3l285->SetBinContent(2,12.30322);
   new_histo_group_Vg_wh3l_Pre_13TeV_zveto_3l285->SetBinContent(3,18.61588);
   new_histo_group_Vg_wh3l_Pre_13TeV_zveto_3l285->SetBinContent(4,24.00455);
   new_histo_group_Vg_wh3l_Pre_13TeV_zveto_3l285->SetBinContent(5,26.80982);
   new_histo_group_Vg_wh3l_Pre_13TeV_zveto_3l285->SetBinContent(6,27.40324);
   new_histo_group_Vg_wh3l_Pre_13TeV_zveto_3l285->SetBinContent(7,21.78043);
   new_histo_group_Vg_wh3l_Pre_13TeV_zveto_3l285->SetBinContent(8,12.89548);
   new_histo_group_Vg_wh3l_Pre_13TeV_zveto_3l285->SetBinContent(9,10.03575);
   new_histo_group_Vg_wh3l_Pre_13TeV_zveto_3l285->SetBinContent(10,9.472188);
   new_histo_group_Vg_wh3l_Pre_13TeV_zveto_3l285->SetBinContent(11,6.507441);
   new_histo_group_Vg_wh3l_Pre_13TeV_zveto_3l285->SetBinContent(12,4.614054);
   new_histo_group_Vg_wh3l_Pre_13TeV_zveto_3l285->SetBinContent(13,0.8446248);
   new_histo_group_Vg_wh3l_Pre_13TeV_zveto_3l285->SetBinContent(14,0.3487137);
   new_histo_group_Vg_wh3l_Pre_13TeV_zveto_3l285->SetBinContent(15,0.5389209);
   new_histo_group_Vg_wh3l_Pre_13TeV_zveto_3l285->SetBinContent(16,0.3106022);
   new_histo_group_Vg_wh3l_Pre_13TeV_zveto_3l285->SetBinContent(17,0.3005722);
   new_histo_group_Vg_wh3l_Pre_13TeV_zveto_3l285->SetBinContent(18,0.02971771);
   new_histo_group_Vg_wh3l_Pre_13TeV_zveto_3l285->SetBinContent(19,2.292836);
   new_histo_group_Vg_wh3l_Pre_13TeV_zveto_3l285->SetBinError(1,2.907747);
   new_histo_group_Vg_wh3l_Pre_13TeV_zveto_3l285->SetBinError(2,1.489034);
   new_histo_group_Vg_wh3l_Pre_13TeV_zveto_3l285->SetBinError(3,1.692728);
   new_histo_group_Vg_wh3l_Pre_13TeV_zveto_3l285->SetBinError(4,1.959843);
   new_histo_group_Vg_wh3l_Pre_13TeV_zveto_3l285->SetBinError(5,2.012654);
   new_histo_group_Vg_wh3l_Pre_13TeV_zveto_3l285->SetBinError(6,1.993581);
   new_histo_group_Vg_wh3l_Pre_13TeV_zveto_3l285->SetBinError(7,1.765893);
   new_histo_group_Vg_wh3l_Pre_13TeV_zveto_3l285->SetBinError(8,1.462151);
   new_histo_group_Vg_wh3l_Pre_13TeV_zveto_3l285->SetBinError(9,1.257637);
   new_histo_group_Vg_wh3l_Pre_13TeV_zveto_3l285->SetBinError(10,1.110263);
   new_histo_group_Vg_wh3l_Pre_13TeV_zveto_3l285->SetBinError(11,1.002242);
   new_histo_group_Vg_wh3l_Pre_13TeV_zveto_3l285->SetBinError(12,0.7576399);
   new_histo_group_Vg_wh3l_Pre_13TeV_zveto_3l285->SetBinError(13,0.3876744);
   new_histo_group_Vg_wh3l_Pre_13TeV_zveto_3l285->SetBinError(14,0.2404921);
   new_histo_group_Vg_wh3l_Pre_13TeV_zveto_3l285->SetBinError(15,0.2966585);
   new_histo_group_Vg_wh3l_Pre_13TeV_zveto_3l285->SetBinError(16,0.1833314);
   new_histo_group_Vg_wh3l_Pre_13TeV_zveto_3l285->SetBinError(17,0.1766922);
   new_histo_group_Vg_wh3l_Pre_13TeV_zveto_3l285->SetBinError(18,0.1719706);
   new_histo_group_Vg_wh3l_Pre_13TeV_zveto_3l285->SetBinError(19,0.5472794);
   new_histo_group_Vg_wh3l_Pre_13TeV_zveto_3l285->SetEntries(3337);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_Pre_13TeV_zveto_3l285->SetFillColor(ci);
   new_histo_group_Vg_wh3l_Pre_13TeV_zveto_3l285->SetFillStyle(3001);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_Pre_13TeV_zveto_3l285->SetLineColor(ci);
   new_histo_group_Vg_wh3l_Pre_13TeV_zveto_3l285->GetXaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_Pre_13TeV_zveto_3l285->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_Pre_13TeV_zveto_3l285->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_Pre_13TeV_zveto_3l285->GetXaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_Pre_13TeV_zveto_3l285->GetYaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_Pre_13TeV_zveto_3l285->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_Pre_13TeV_zveto_3l285->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_Pre_13TeV_zveto_3l285->GetYaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_Pre_13TeV_zveto_3l285->GetZaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_Pre_13TeV_zveto_3l285->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_Pre_13TeV_zveto_3l285->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_Pre_13TeV_zveto_3l285->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_Pre_13TeV_zveto_3l->Add(new_histo_group_Vg_wh3l_Pre_13TeV_zveto_3l,"");
   
   TH1D *new_histo_group_ZZ_wh3l_Pre_13TeV_zveto_3l286 = new TH1D("new_histo_group_ZZ_wh3l_Pre_13TeV_zveto_3l286","histo_ZZ",20,0,100);
   new_histo_group_ZZ_wh3l_Pre_13TeV_zveto_3l286->SetBinContent(1,38.7667);
   new_histo_group_ZZ_wh3l_Pre_13TeV_zveto_3l286->SetBinContent(2,6.669062);
   new_histo_group_ZZ_wh3l_Pre_13TeV_zveto_3l286->SetBinContent(3,2.215688);
   new_histo_group_ZZ_wh3l_Pre_13TeV_zveto_3l286->SetBinContent(4,1.085666);
   new_histo_group_ZZ_wh3l_Pre_13TeV_zveto_3l286->SetBinContent(5,0.4769796);
   new_histo_group_ZZ_wh3l_Pre_13TeV_zveto_3l286->SetBinContent(6,0.3455095);
   new_histo_group_ZZ_wh3l_Pre_13TeV_zveto_3l286->SetBinContent(7,0.7180723);
   new_histo_group_ZZ_wh3l_Pre_13TeV_zveto_3l286->SetBinContent(8,0.5691641);
   new_histo_group_ZZ_wh3l_Pre_13TeV_zveto_3l286->SetBinContent(9,0.2479038);
   new_histo_group_ZZ_wh3l_Pre_13TeV_zveto_3l286->SetBinContent(10,0.4822824);
   new_histo_group_ZZ_wh3l_Pre_13TeV_zveto_3l286->SetBinContent(11,0.3050274);
   new_histo_group_ZZ_wh3l_Pre_13TeV_zveto_3l286->SetBinContent(12,0.3971472);
   new_histo_group_ZZ_wh3l_Pre_13TeV_zveto_3l286->SetBinContent(13,0.3684379);
   new_histo_group_ZZ_wh3l_Pre_13TeV_zveto_3l286->SetBinContent(14,0.06125498);
   new_histo_group_ZZ_wh3l_Pre_13TeV_zveto_3l286->SetBinContent(15,0.3229046);
   new_histo_group_ZZ_wh3l_Pre_13TeV_zveto_3l286->SetBinContent(16,0.2207351);
   new_histo_group_ZZ_wh3l_Pre_13TeV_zveto_3l286->SetBinContent(19,0.2651827);
   new_histo_group_ZZ_wh3l_Pre_13TeV_zveto_3l286->SetBinError(1,1.262912);
   new_histo_group_ZZ_wh3l_Pre_13TeV_zveto_3l286->SetBinError(2,0.5238273);
   new_histo_group_ZZ_wh3l_Pre_13TeV_zveto_3l286->SetBinError(3,0.3080267);
   new_histo_group_ZZ_wh3l_Pre_13TeV_zveto_3l286->SetBinError(4,0.2099543);
   new_histo_group_ZZ_wh3l_Pre_13TeV_zveto_3l286->SetBinError(5,0.1303156);
   new_histo_group_ZZ_wh3l_Pre_13TeV_zveto_3l286->SetBinError(6,0.1149873);
   new_histo_group_ZZ_wh3l_Pre_13TeV_zveto_3l286->SetBinError(7,0.1737635);
   new_histo_group_ZZ_wh3l_Pre_13TeV_zveto_3l286->SetBinError(8,0.1560053);
   new_histo_group_ZZ_wh3l_Pre_13TeV_zveto_3l286->SetBinError(9,0.09031794);
   new_histo_group_ZZ_wh3l_Pre_13TeV_zveto_3l286->SetBinError(10,0.1436947);
   new_histo_group_ZZ_wh3l_Pre_13TeV_zveto_3l286->SetBinError(11,0.1093796);
   new_histo_group_ZZ_wh3l_Pre_13TeV_zveto_3l286->SetBinError(12,0.1290942);
   new_histo_group_ZZ_wh3l_Pre_13TeV_zveto_3l286->SetBinError(13,0.1266639);
   new_histo_group_ZZ_wh3l_Pre_13TeV_zveto_3l286->SetBinError(14,0.0375437);
   new_histo_group_ZZ_wh3l_Pre_13TeV_zveto_3l286->SetBinError(15,0.1169517);
   new_histo_group_ZZ_wh3l_Pre_13TeV_zveto_3l286->SetBinError(16,0.09392409);
   new_histo_group_ZZ_wh3l_Pre_13TeV_zveto_3l286->SetBinError(19,0.1060398);
   new_histo_group_ZZ_wh3l_Pre_13TeV_zveto_3l286->SetEntries(1447);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_Pre_13TeV_zveto_3l286->SetFillColor(ci);
   new_histo_group_ZZ_wh3l_Pre_13TeV_zveto_3l286->SetFillStyle(3001);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_Pre_13TeV_zveto_3l286->SetLineColor(ci);
   new_histo_group_ZZ_wh3l_Pre_13TeV_zveto_3l286->GetXaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_Pre_13TeV_zveto_3l286->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_Pre_13TeV_zveto_3l286->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_Pre_13TeV_zveto_3l286->GetXaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_Pre_13TeV_zveto_3l286->GetYaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_Pre_13TeV_zveto_3l286->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_Pre_13TeV_zveto_3l286->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_Pre_13TeV_zveto_3l286->GetYaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_Pre_13TeV_zveto_3l286->GetZaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_Pre_13TeV_zveto_3l286->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_Pre_13TeV_zveto_3l286->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_Pre_13TeV_zveto_3l286->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_Pre_13TeV_zveto_3l->Add(new_histo_group_ZZ_wh3l_Pre_13TeV_zveto_3l,"");
   
   TH1D *new_histo_group_WZ_wh3l_Pre_13TeV_zveto_3l287 = new TH1D("new_histo_group_WZ_wh3l_Pre_13TeV_zveto_3l287","histo_WZ",20,0,100);
   new_histo_group_WZ_wh3l_Pre_13TeV_zveto_3l287->SetBinContent(1,270.6261);
   new_histo_group_WZ_wh3l_Pre_13TeV_zveto_3l287->SetBinContent(2,39.7735);
   new_histo_group_WZ_wh3l_Pre_13TeV_zveto_3l287->SetBinContent(3,13.76352);
   new_histo_group_WZ_wh3l_Pre_13TeV_zveto_3l287->SetBinContent(4,7.479264);
   new_histo_group_WZ_wh3l_Pre_13TeV_zveto_3l287->SetBinContent(5,5.391168);
   new_histo_group_WZ_wh3l_Pre_13TeV_zveto_3l287->SetBinContent(6,3.945496);
   new_histo_group_WZ_wh3l_Pre_13TeV_zveto_3l287->SetBinContent(7,3.225383);
   new_histo_group_WZ_wh3l_Pre_13TeV_zveto_3l287->SetBinContent(8,3.027479);
   new_histo_group_WZ_wh3l_Pre_13TeV_zveto_3l287->SetBinContent(9,2.773981);
   new_histo_group_WZ_wh3l_Pre_13TeV_zveto_3l287->SetBinContent(10,2.69968);
   new_histo_group_WZ_wh3l_Pre_13TeV_zveto_3l287->SetBinContent(11,2.460634);
   new_histo_group_WZ_wh3l_Pre_13TeV_zveto_3l287->SetBinContent(12,2.16415);
   new_histo_group_WZ_wh3l_Pre_13TeV_zveto_3l287->SetBinContent(13,2.128453);
   new_histo_group_WZ_wh3l_Pre_13TeV_zveto_3l287->SetBinContent(14,1.961004);
   new_histo_group_WZ_wh3l_Pre_13TeV_zveto_3l287->SetBinContent(15,1.973162);
   new_histo_group_WZ_wh3l_Pre_13TeV_zveto_3l287->SetBinContent(16,1.829553);
   new_histo_group_WZ_wh3l_Pre_13TeV_zveto_3l287->SetBinContent(17,0.1649345);
   new_histo_group_WZ_wh3l_Pre_13TeV_zveto_3l287->SetBinContent(18,0.1765828);
   new_histo_group_WZ_wh3l_Pre_13TeV_zveto_3l287->SetBinContent(19,3.085389);
   new_histo_group_WZ_wh3l_Pre_13TeV_zveto_3l287->SetBinError(1,1.214634);
   new_histo_group_WZ_wh3l_Pre_13TeV_zveto_3l287->SetBinError(2,0.4654928);
   new_histo_group_WZ_wh3l_Pre_13TeV_zveto_3l287->SetBinError(3,0.27345);
   new_histo_group_WZ_wh3l_Pre_13TeV_zveto_3l287->SetBinError(4,0.2011129);
   new_histo_group_WZ_wh3l_Pre_13TeV_zveto_3l287->SetBinError(5,0.1713346);
   new_histo_group_WZ_wh3l_Pre_13TeV_zveto_3l287->SetBinError(6,0.146688);
   new_histo_group_WZ_wh3l_Pre_13TeV_zveto_3l287->SetBinError(7,0.1323929);
   new_histo_group_WZ_wh3l_Pre_13TeV_zveto_3l287->SetBinError(8,0.129506);
   new_histo_group_WZ_wh3l_Pre_13TeV_zveto_3l287->SetBinError(9,0.1235488);
   new_histo_group_WZ_wh3l_Pre_13TeV_zveto_3l287->SetBinError(10,0.1224978);
   new_histo_group_WZ_wh3l_Pre_13TeV_zveto_3l287->SetBinError(11,0.1152192);
   new_histo_group_WZ_wh3l_Pre_13TeV_zveto_3l287->SetBinError(12,0.1086235);
   new_histo_group_WZ_wh3l_Pre_13TeV_zveto_3l287->SetBinError(13,0.1071208);
   new_histo_group_WZ_wh3l_Pre_13TeV_zveto_3l287->SetBinError(14,0.1025204);
   new_histo_group_WZ_wh3l_Pre_13TeV_zveto_3l287->SetBinError(15,0.1034637);
   new_histo_group_WZ_wh3l_Pre_13TeV_zveto_3l287->SetBinError(16,0.09987165);
   new_histo_group_WZ_wh3l_Pre_13TeV_zveto_3l287->SetBinError(17,0.02985954);
   new_histo_group_WZ_wh3l_Pre_13TeV_zveto_3l287->SetBinError(18,0.03107935);
   new_histo_group_WZ_wh3l_Pre_13TeV_zveto_3l287->SetBinError(19,0.1286813);
   new_histo_group_WZ_wh3l_Pre_13TeV_zveto_3l287->SetEntries(74706);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_Pre_13TeV_zveto_3l287->SetFillColor(ci);
   new_histo_group_WZ_wh3l_Pre_13TeV_zveto_3l287->SetFillStyle(3001);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_Pre_13TeV_zveto_3l287->SetLineColor(ci);
   new_histo_group_WZ_wh3l_Pre_13TeV_zveto_3l287->GetXaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_Pre_13TeV_zveto_3l287->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_Pre_13TeV_zveto_3l287->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_Pre_13TeV_zveto_3l287->GetXaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_Pre_13TeV_zveto_3l287->GetYaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_Pre_13TeV_zveto_3l287->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_Pre_13TeV_zveto_3l287->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_Pre_13TeV_zveto_3l287->GetYaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_Pre_13TeV_zveto_3l287->GetZaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_Pre_13TeV_zveto_3l287->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_Pre_13TeV_zveto_3l287->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_Pre_13TeV_zveto_3l287->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_Pre_13TeV_zveto_3l->Add(new_histo_group_WZ_wh3l_Pre_13TeV_zveto_3l,"");
   
   TH1D *new_histo_group_Higgs_wh3l_Pre_13TeV_zveto_3l288 = new TH1D("new_histo_group_Higgs_wh3l_Pre_13TeV_zveto_3l288","histo_H_htt",20,0,100);
   new_histo_group_Higgs_wh3l_Pre_13TeV_zveto_3l288->SetBinContent(1,2.757655);
   new_histo_group_Higgs_wh3l_Pre_13TeV_zveto_3l288->SetBinContent(2,0.4887348);
   new_histo_group_Higgs_wh3l_Pre_13TeV_zveto_3l288->SetBinContent(3,0.231782);
   new_histo_group_Higgs_wh3l_Pre_13TeV_zveto_3l288->SetBinContent(4,0.1480997);
   new_histo_group_Higgs_wh3l_Pre_13TeV_zveto_3l288->SetBinContent(5,0.132549);
   new_histo_group_Higgs_wh3l_Pre_13TeV_zveto_3l288->SetBinContent(6,0.1482359);
   new_histo_group_Higgs_wh3l_Pre_13TeV_zveto_3l288->SetBinContent(7,0.1340546);
   new_histo_group_Higgs_wh3l_Pre_13TeV_zveto_3l288->SetBinContent(8,0.1716696);
   new_histo_group_Higgs_wh3l_Pre_13TeV_zveto_3l288->SetBinContent(9,0.1207805);
   new_histo_group_Higgs_wh3l_Pre_13TeV_zveto_3l288->SetBinContent(10,0.1294817);
   new_histo_group_Higgs_wh3l_Pre_13TeV_zveto_3l288->SetBinContent(11,0.09136382);
   new_histo_group_Higgs_wh3l_Pre_13TeV_zveto_3l288->SetBinContent(12,0.131421);
   new_histo_group_Higgs_wh3l_Pre_13TeV_zveto_3l288->SetBinContent(13,0.09067681);
   new_histo_group_Higgs_wh3l_Pre_13TeV_zveto_3l288->SetBinContent(14,0.07559333);
   new_histo_group_Higgs_wh3l_Pre_13TeV_zveto_3l288->SetBinContent(15,0.05867915);
   new_histo_group_Higgs_wh3l_Pre_13TeV_zveto_3l288->SetBinContent(16,0.02913869);
   new_histo_group_Higgs_wh3l_Pre_13TeV_zveto_3l288->SetBinContent(17,0.004976142);
   new_histo_group_Higgs_wh3l_Pre_13TeV_zveto_3l288->SetBinContent(18,0.008209562);
   new_histo_group_Higgs_wh3l_Pre_13TeV_zveto_3l288->SetBinContent(19,0.05405339);
   new_histo_group_Higgs_wh3l_Pre_13TeV_zveto_3l288->SetBinError(1,0.05355981);
   new_histo_group_Higgs_wh3l_Pre_13TeV_zveto_3l288->SetBinError(2,0.02276373);
   new_histo_group_Higgs_wh3l_Pre_13TeV_zveto_3l288->SetBinError(3,0.01592558);
   new_histo_group_Higgs_wh3l_Pre_13TeV_zveto_3l288->SetBinError(4,0.0120146);
   new_histo_group_Higgs_wh3l_Pre_13TeV_zveto_3l288->SetBinError(5,0.0115938);
   new_histo_group_Higgs_wh3l_Pre_13TeV_zveto_3l288->SetBinError(6,0.01269517);
   new_histo_group_Higgs_wh3l_Pre_13TeV_zveto_3l288->SetBinError(7,0.01167021);
   new_histo_group_Higgs_wh3l_Pre_13TeV_zveto_3l288->SetBinError(8,0.0132824);
   new_histo_group_Higgs_wh3l_Pre_13TeV_zveto_3l288->SetBinError(9,0.01110366);
   new_histo_group_Higgs_wh3l_Pre_13TeV_zveto_3l288->SetBinError(10,0.01176104);
   new_histo_group_Higgs_wh3l_Pre_13TeV_zveto_3l288->SetBinError(11,0.01024956);
   new_histo_group_Higgs_wh3l_Pre_13TeV_zveto_3l288->SetBinError(12,0.01308091);
   new_histo_group_Higgs_wh3l_Pre_13TeV_zveto_3l288->SetBinError(13,0.01091109);
   new_histo_group_Higgs_wh3l_Pre_13TeV_zveto_3l288->SetBinError(14,0.009658659);
   new_histo_group_Higgs_wh3l_Pre_13TeV_zveto_3l288->SetBinError(15,0.008812188);
   new_histo_group_Higgs_wh3l_Pre_13TeV_zveto_3l288->SetBinError(16,0.006055644);
   new_histo_group_Higgs_wh3l_Pre_13TeV_zveto_3l288->SetBinError(17,0.002624588);
   new_histo_group_Higgs_wh3l_Pre_13TeV_zveto_3l288->SetBinError(18,0.00320534);
   new_histo_group_Higgs_wh3l_Pre_13TeV_zveto_3l288->SetBinError(19,0.007981693);
   new_histo_group_Higgs_wh3l_Pre_13TeV_zveto_3l288->SetEntries(8009);
   new_histo_group_Higgs_wh3l_Pre_13TeV_zveto_3l288->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_Pre_13TeV_zveto_3l288->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_Pre_13TeV_zveto_3l288->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_Pre_13TeV_zveto_3l288->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_Pre_13TeV_zveto_3l288->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_Pre_13TeV_zveto_3l288->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_Pre_13TeV_zveto_3l288->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_Pre_13TeV_zveto_3l288->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_Pre_13TeV_zveto_3l288->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_Pre_13TeV_zveto_3l288->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_Pre_13TeV_zveto_3l288->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_Pre_13TeV_zveto_3l288->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_Pre_13TeV_zveto_3l288->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_Pre_13TeV_zveto_3l288->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_Pre_13TeV_zveto_3l288->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_Pre_13TeV_zveto_3l->Add(new_histo_group_Higgs_wh3l_Pre_13TeV_zveto_3l,"");
   thsBackground_grouped_wh3l_Pre_13TeV_zveto_3l->Draw("hist same");
   
   thsSignal_grouped_wh3l_Pre_13TeV_zveto_3l = new THStack();
   thsSignal_grouped_wh3l_Pre_13TeV_zveto_3l->SetName("thsSignal_grouped_wh3l_Pre_13TeV_zveto_3l");
   thsSignal_grouped_wh3l_Pre_13TeV_zveto_3l->SetTitle("thsSignal_grouped_wh3l_Pre_13TeV_zveto_3l");
   
   TH1F *thsSignal_grouped_wh3l_Pre_13TeV_zveto_3l_stack_58 = new TH1F("thsSignal_grouped_wh3l_Pre_13TeV_zveto_3l_stack_58","thsSignal_grouped_wh3l_Pre_13TeV_zveto_3l",20,0,100);
   thsSignal_grouped_wh3l_Pre_13TeV_zveto_3l_stack_58->SetMinimum(0);
   thsSignal_grouped_wh3l_Pre_13TeV_zveto_3l_stack_58->SetMaximum(2.951775);
   thsSignal_grouped_wh3l_Pre_13TeV_zveto_3l_stack_58->SetDirectory(0);
   thsSignal_grouped_wh3l_Pre_13TeV_zveto_3l_stack_58->SetStats(0);
   thsSignal_grouped_wh3l_Pre_13TeV_zveto_3l_stack_58->SetLineStyle(0);
   thsSignal_grouped_wh3l_Pre_13TeV_zveto_3l_stack_58->SetMarkerStyle(20);
   thsSignal_grouped_wh3l_Pre_13TeV_zveto_3l_stack_58->GetXaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_Pre_13TeV_zveto_3l_stack_58->GetXaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_Pre_13TeV_zveto_3l_stack_58->GetXaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_Pre_13TeV_zveto_3l_stack_58->GetXaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_Pre_13TeV_zveto_3l_stack_58->GetXaxis()->SetTitleOffset(0.9);
   thsSignal_grouped_wh3l_Pre_13TeV_zveto_3l_stack_58->GetXaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_Pre_13TeV_zveto_3l_stack_58->GetYaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_Pre_13TeV_zveto_3l_stack_58->GetYaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_Pre_13TeV_zveto_3l_stack_58->GetYaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_Pre_13TeV_zveto_3l_stack_58->GetYaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_Pre_13TeV_zveto_3l_stack_58->GetYaxis()->SetTitleOffset(1.25);
   thsSignal_grouped_wh3l_Pre_13TeV_zveto_3l_stack_58->GetYaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_Pre_13TeV_zveto_3l_stack_58->GetZaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_Pre_13TeV_zveto_3l_stack_58->GetZaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_Pre_13TeV_zveto_3l_stack_58->GetZaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_Pre_13TeV_zveto_3l_stack_58->GetZaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_Pre_13TeV_zveto_3l_stack_58->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_Pre_13TeV_zveto_3l->SetHistogram(thsSignal_grouped_wh3l_Pre_13TeV_zveto_3l_stack_58);
   
   
   TH1D *new_histo_group_Higgs_wh3l_Pre_13TeV_zveto_3l289 = new TH1D("new_histo_group_Higgs_wh3l_Pre_13TeV_zveto_3l289","histo_H_htt",20,0,100);
   new_histo_group_Higgs_wh3l_Pre_13TeV_zveto_3l289->SetBinContent(1,2.757655);
   new_histo_group_Higgs_wh3l_Pre_13TeV_zveto_3l289->SetBinContent(2,0.4887348);
   new_histo_group_Higgs_wh3l_Pre_13TeV_zveto_3l289->SetBinContent(3,0.231782);
   new_histo_group_Higgs_wh3l_Pre_13TeV_zveto_3l289->SetBinContent(4,0.1480997);
   new_histo_group_Higgs_wh3l_Pre_13TeV_zveto_3l289->SetBinContent(5,0.132549);
   new_histo_group_Higgs_wh3l_Pre_13TeV_zveto_3l289->SetBinContent(6,0.1482359);
   new_histo_group_Higgs_wh3l_Pre_13TeV_zveto_3l289->SetBinContent(7,0.1340546);
   new_histo_group_Higgs_wh3l_Pre_13TeV_zveto_3l289->SetBinContent(8,0.1716696);
   new_histo_group_Higgs_wh3l_Pre_13TeV_zveto_3l289->SetBinContent(9,0.1207805);
   new_histo_group_Higgs_wh3l_Pre_13TeV_zveto_3l289->SetBinContent(10,0.1294817);
   new_histo_group_Higgs_wh3l_Pre_13TeV_zveto_3l289->SetBinContent(11,0.09136382);
   new_histo_group_Higgs_wh3l_Pre_13TeV_zveto_3l289->SetBinContent(12,0.131421);
   new_histo_group_Higgs_wh3l_Pre_13TeV_zveto_3l289->SetBinContent(13,0.09067681);
   new_histo_group_Higgs_wh3l_Pre_13TeV_zveto_3l289->SetBinContent(14,0.07559333);
   new_histo_group_Higgs_wh3l_Pre_13TeV_zveto_3l289->SetBinContent(15,0.05867915);
   new_histo_group_Higgs_wh3l_Pre_13TeV_zveto_3l289->SetBinContent(16,0.02913869);
   new_histo_group_Higgs_wh3l_Pre_13TeV_zveto_3l289->SetBinContent(17,0.004976142);
   new_histo_group_Higgs_wh3l_Pre_13TeV_zveto_3l289->SetBinContent(18,0.008209562);
   new_histo_group_Higgs_wh3l_Pre_13TeV_zveto_3l289->SetBinContent(19,0.05405339);
   new_histo_group_Higgs_wh3l_Pre_13TeV_zveto_3l289->SetBinError(1,0.05355981);
   new_histo_group_Higgs_wh3l_Pre_13TeV_zveto_3l289->SetBinError(2,0.02276373);
   new_histo_group_Higgs_wh3l_Pre_13TeV_zveto_3l289->SetBinError(3,0.01592558);
   new_histo_group_Higgs_wh3l_Pre_13TeV_zveto_3l289->SetBinError(4,0.0120146);
   new_histo_group_Higgs_wh3l_Pre_13TeV_zveto_3l289->SetBinError(5,0.0115938);
   new_histo_group_Higgs_wh3l_Pre_13TeV_zveto_3l289->SetBinError(6,0.01269517);
   new_histo_group_Higgs_wh3l_Pre_13TeV_zveto_3l289->SetBinError(7,0.01167021);
   new_histo_group_Higgs_wh3l_Pre_13TeV_zveto_3l289->SetBinError(8,0.0132824);
   new_histo_group_Higgs_wh3l_Pre_13TeV_zveto_3l289->SetBinError(9,0.01110366);
   new_histo_group_Higgs_wh3l_Pre_13TeV_zveto_3l289->SetBinError(10,0.01176104);
   new_histo_group_Higgs_wh3l_Pre_13TeV_zveto_3l289->SetBinError(11,0.01024956);
   new_histo_group_Higgs_wh3l_Pre_13TeV_zveto_3l289->SetBinError(12,0.01308091);
   new_histo_group_Higgs_wh3l_Pre_13TeV_zveto_3l289->SetBinError(13,0.01091109);
   new_histo_group_Higgs_wh3l_Pre_13TeV_zveto_3l289->SetBinError(14,0.009658659);
   new_histo_group_Higgs_wh3l_Pre_13TeV_zveto_3l289->SetBinError(15,0.008812188);
   new_histo_group_Higgs_wh3l_Pre_13TeV_zveto_3l289->SetBinError(16,0.006055644);
   new_histo_group_Higgs_wh3l_Pre_13TeV_zveto_3l289->SetBinError(17,0.002624588);
   new_histo_group_Higgs_wh3l_Pre_13TeV_zveto_3l289->SetBinError(18,0.00320534);
   new_histo_group_Higgs_wh3l_Pre_13TeV_zveto_3l289->SetBinError(19,0.007981693);
   new_histo_group_Higgs_wh3l_Pre_13TeV_zveto_3l289->SetEntries(8009);
   new_histo_group_Higgs_wh3l_Pre_13TeV_zveto_3l289->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_Pre_13TeV_zveto_3l289->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_Pre_13TeV_zveto_3l289->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_Pre_13TeV_zveto_3l289->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_Pre_13TeV_zveto_3l289->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_Pre_13TeV_zveto_3l289->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_Pre_13TeV_zveto_3l289->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_Pre_13TeV_zveto_3l289->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_Pre_13TeV_zveto_3l289->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_Pre_13TeV_zveto_3l289->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_Pre_13TeV_zveto_3l289->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_Pre_13TeV_zveto_3l289->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_Pre_13TeV_zveto_3l289->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_Pre_13TeV_zveto_3l289->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_Pre_13TeV_zveto_3l289->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_Pre_13TeV_zveto_3l->Add(new_histo_group_Higgs_wh3l_Pre_13TeV_zveto_3l,"");
   thsSignal_grouped_wh3l_Pre_13TeV_zveto_3l->Draw("hist same noclear");
   
   Double_t _fx3057[20] = {
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
   Double_t _fy3057[20] = {
   519.1027,
   84.39732,
   47.18632,
   44.76342,
   45.57488,
   40.85509,
   35.90737,
   23.15737,
   20.16556,
   20.9828,
   14.7053,
   12.81477,
   8.25054,
   5.790803,
   6.10259,
   4.523076,
   0.7502296,
   0.2140162,
   7.962533,
   0};
   Double_t _felx3057[20] = {
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
   Double_t _fely3057[20] = {
   58.33468,
   10.99959,
   6.766667,
   6.6207,
   6.909209,
   5.965344,
   5.845244,
   4.527081,
   4.56087,
   5.027709,
   4.064226,
   3.430163,
   3.051634,
   2.221053,
   2.230162,
   1.699822,
   0.37957,
   0.06588617,
   1.808569,
   0};
   Double_t _fehx3057[20] = {
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
   Double_t _fehy3057[20] = {
   58.29674,
   10.99056,
   6.763178,
   6.617146,
   6.904914,
   5.962556,
   5.842563,
   4.522941,
   4.559429,
   5.024858,
   4.058961,
   3.427337,
   3.050851,
   2.221032,
   2.229809,
   1.6989,
   0.379557,
   0.2076959,
   1.803797,
   0};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(20,_fx3057,_fy3057,_felx3057,_fehx3057,_fely3057,_fehy3057);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(12);
   grae->SetFillStyle(3004);
   grae->SetLineColor(12);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3057 = new TH1F("Graph_Graph3057","",100,0,110);
   Graph_Graph3057->SetMinimum(0);
   Graph_Graph3057->SetMaximum(635.1394);
   Graph_Graph3057->SetDirectory(0);
   Graph_Graph3057->SetStats(0);
   Graph_Graph3057->SetLineStyle(0);
   Graph_Graph3057->SetMarkerStyle(20);
   Graph_Graph3057->GetXaxis()->SetLabelFont(42);
   Graph_Graph3057->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3057->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3057->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3057->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3057->GetXaxis()->SetTitleFont(42);
   Graph_Graph3057->GetYaxis()->SetLabelFont(42);
   Graph_Graph3057->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3057->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3057->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3057->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3057->GetYaxis()->SetTitleFont(42);
   Graph_Graph3057->GetZaxis()->SetLabelFont(42);
   Graph_Graph3057->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3057->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3057->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3057->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3057);
   
   grae->Draw("2");
   
   Double_t _fx3058[20] = {
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
   Double_t _fy3058[20] = {
   609,
   94,
   57,
   47,
   45,
   44,
   30,
   29,
   24,
   23,
   11,
   9,
   7,
   5,
   8,
   5,
   0,
   0,
   7,
   0};
   Double_t _felx3058[20] = {
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
   Double_t _fely3058[20] = {
   24.67168,
   9.678282,
   7.527768,
   6.831306,
   6.68331,
   6.608069,
   5.446627,
   5.354033,
   4.864704,
   4.760806,
   3.265636,
   2.943511,
   2.581513,
   2.159724,
   2.768432,
   2.159724,
   0,
   0,
   2.581513,
   0};
   Double_t _fehx3058[20] = {
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
   Double_t _fehy3058[20] = {
   25.69199,
   10.72999,
   8.594187,
   7.904454,
   7.758066,
   7.68367,
   6.538181,
   6.447153,
   5.967054,
   5.865355,
   4.416609,
   4.110286,
   3.770356,
   3.382539,
   3.94522,
   3.382539,
   1.147908,
   1.147908,
   3.770356,
   1.147908};
   grae = new TGraphAsymmErrors(20,_fx3058,_fy3058,_felx3058,_fehx3058,_fely3058,_fehy3058);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(1);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3058 = new TH1F("Graph_Graph3058","",100,0,110);
   Graph_Graph3058->SetMinimum(0);
   Graph_Graph3058->SetMaximum(698.1612);
   Graph_Graph3058->SetDirectory(0);
   Graph_Graph3058->SetStats(0);
   Graph_Graph3058->SetLineStyle(0);
   Graph_Graph3058->SetMarkerStyle(20);
   Graph_Graph3058->GetXaxis()->SetLabelFont(42);
   Graph_Graph3058->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3058->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3058->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3058->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3058->GetXaxis()->SetTitleFont(42);
   Graph_Graph3058->GetYaxis()->SetLabelFont(42);
   Graph_Graph3058->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3058->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3058->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3058->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3058->GetYaxis()->SetTitleFont(42);
   Graph_Graph3058->GetZaxis()->SetLabelFont(42);
   Graph_Graph3058->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3058->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3058->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3058->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3058);
   
   grae->Draw("p0");
   
   TLegend *leg = new TLegend(0.2,0.7,0.8,0.9,NULL,"brNDC");
   leg->SetTextFont(62);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("new_histo_group_Fake_wh3l_Pre_13TeV_zveto_3l","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_Pre_13TeV_zveto_3l","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_Pre_13TeV_zveto_3l","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_Pre_13TeV_zveto_3l","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_Pre_13TeV_zveto_3l","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_Pre_13TeV_zveto_3l","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_Pre_13TeV_zveto_3l","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_Pre_13TeV_zveto_3l","Data","EPL");
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
   entry=leg->AddEntry("new_histo_group_Fake_wh3l_Pre_13TeV_zveto_3l","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_Pre_13TeV_zveto_3l","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_Pre_13TeV_zveto_3l","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_Pre_13TeV_zveto_3l","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_Pre_13TeV_zveto_3l","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_Pre_13TeV_zveto_3l","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_Pre_13TeV_zveto_3l","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_Pre_13TeV_zveto_3l","Data","EPL");
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
   
   TH1F *hframe_copy290 = new TH1F("hframe_copy290","",1000,0,100);
   hframe_copy290->SetMinimum(0);
   hframe_copy290->SetMaximum(1584.195);
   hframe_copy290->SetDirectory(0);
   hframe_copy290->SetStats(0);
   hframe_copy290->SetLineStyle(0);
   hframe_copy290->SetMarkerStyle(20);
   hframe_copy290->GetXaxis()->SetTitle("m_{ll} - M_{Z} [GeV]");
   hframe_copy290->GetXaxis()->SetNdivisions(506);
   hframe_copy290->GetXaxis()->SetLabelFont(42);
   hframe_copy290->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy290->GetXaxis()->SetLabelSize(0.05);
   hframe_copy290->GetXaxis()->SetTitleSize(0.06);
   hframe_copy290->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy290->GetXaxis()->SetTitleFont(42);
   hframe_copy290->GetYaxis()->SetTitle("Events");
   hframe_copy290->GetYaxis()->SetLabelFont(42);
   hframe_copy290->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy290->GetYaxis()->SetLabelSize(0.05);
   hframe_copy290->GetYaxis()->SetTitleSize(0.06);
   hframe_copy290->GetYaxis()->SetTitleOffset(1.25);
   hframe_copy290->GetYaxis()->SetTitleFont(42);
   hframe_copy290->GetZaxis()->SetLabelFont(42);
   hframe_copy290->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy290->GetZaxis()->SetLabelSize(0.05);
   hframe_copy290->GetZaxis()->SetTitleSize(0.06);
   hframe_copy290->GetZaxis()->SetTitleFont(42);
   hframe_copy290->Draw("sameaxis");
   ccwh3l_Pre_13TeV_zveto_3l->Modified();
   ccwh3l_Pre_13TeV_zveto_3l->cd();
   ccwh3l_Pre_13TeV_zveto_3l->SetSelected(ccwh3l_Pre_13TeV_zveto_3l);
}
