void c_wh3l_MET_JetV_13TeV_zveto_3l()
{
//=========Macro generated from canvas: ccwh3l_MET_JetV_13TeV_zveto_3l/cc
//=========  (Sun Jul  3 16:18:57 2016) by ROOT version6.02/13
   TCanvas *ccwh3l_MET_JetV_13TeV_zveto_3l = new TCanvas("ccwh3l_MET_JetV_13TeV_zveto_3l", "cc",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   ccwh3l_MET_JetV_13TeV_zveto_3l->SetHighLightColor(2);
   ccwh3l_MET_JetV_13TeV_zveto_3l->Range(-20,-40.9245,105,273.8794);
   ccwh3l_MET_JetV_13TeV_zveto_3l->SetFillColor(0);
   ccwh3l_MET_JetV_13TeV_zveto_3l->SetBorderMode(0);
   ccwh3l_MET_JetV_13TeV_zveto_3l->SetBorderSize(2);
   ccwh3l_MET_JetV_13TeV_zveto_3l->SetTickx(1);
   ccwh3l_MET_JetV_13TeV_zveto_3l->SetTicky(1);
   ccwh3l_MET_JetV_13TeV_zveto_3l->SetLeftMargin(0.16);
   ccwh3l_MET_JetV_13TeV_zveto_3l->SetRightMargin(0.04);
   ccwh3l_MET_JetV_13TeV_zveto_3l->SetTopMargin(0.05);
   ccwh3l_MET_JetV_13TeV_zveto_3l->SetBottomMargin(0.13);
   ccwh3l_MET_JetV_13TeV_zveto_3l->SetFrameFillStyle(0);
   ccwh3l_MET_JetV_13TeV_zveto_3l->SetFrameBorderMode(0);
   ccwh3l_MET_JetV_13TeV_zveto_3l->SetFrameFillStyle(0);
   ccwh3l_MET_JetV_13TeV_zveto_3l->SetFrameBorderMode(0);
   
   TH1F *hframe11 = new TH1F("hframe11","",1000,0,100);
   hframe11->SetMinimum(0);
   hframe11->SetMaximum(258.1392);
   hframe11->SetDirectory(0);
   hframe11->SetStats(0);
   hframe11->SetLineStyle(0);
   hframe11->SetMarkerStyle(20);
   hframe11->GetXaxis()->SetTitle("m_{ll} - M_{Z} [GeV]");
   hframe11->GetXaxis()->SetNdivisions(506);
   hframe11->GetXaxis()->SetLabelFont(42);
   hframe11->GetXaxis()->SetLabelOffset(0.007);
   hframe11->GetXaxis()->SetLabelSize(0.05);
   hframe11->GetXaxis()->SetTitleSize(0.06);
   hframe11->GetXaxis()->SetTitleOffset(0.9);
   hframe11->GetXaxis()->SetTitleFont(42);
   hframe11->GetYaxis()->SetTitle("Events");
   hframe11->GetYaxis()->SetLabelFont(42);
   hframe11->GetYaxis()->SetLabelOffset(0.007);
   hframe11->GetYaxis()->SetLabelSize(0.05);
   hframe11->GetYaxis()->SetTitleSize(0.06);
   hframe11->GetYaxis()->SetTitleOffset(1.25);
   hframe11->GetYaxis()->SetTitleFont(42);
   hframe11->GetZaxis()->SetLabelFont(42);
   hframe11->GetZaxis()->SetLabelOffset(0.007);
   hframe11->GetZaxis()->SetLabelSize(0.05);
   hframe11->GetZaxis()->SetTitleSize(0.06);
   hframe11->GetZaxis()->SetTitleFont(42);
   hframe11->Draw(" ");
   
   THStack *thsBackground_grouped_wh3l_MET_JetV_13TeV_zveto_3l = new THStack();
   thsBackground_grouped_wh3l_MET_JetV_13TeV_zveto_3l->SetName("thsBackground_grouped_wh3l_MET_JetV_13TeV_zveto_3l");
   thsBackground_grouped_wh3l_MET_JetV_13TeV_zveto_3l->SetTitle("thsBackground_grouped_wh3l_MET_JetV_13TeV_zveto_3l");
   
   TH1F *thsBackground_grouped_wh3l_MET_JetV_13TeV_zveto_3l_stack_3 = new TH1F("thsBackground_grouped_wh3l_MET_JetV_13TeV_zveto_3l_stack_3","thsBackground_grouped_wh3l_MET_JetV_13TeV_zveto_3l",20,0,100);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_zveto_3l_stack_3->SetMinimum(-0.6592924);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_zveto_3l_stack_3->SetMaximum(108.4185);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_zveto_3l_stack_3->SetDirectory(0);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_zveto_3l_stack_3->SetStats(0);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_zveto_3l_stack_3->SetLineStyle(0);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_zveto_3l_stack_3->SetMarkerStyle(20);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_zveto_3l_stack_3->GetXaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_zveto_3l_stack_3->GetXaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_zveto_3l_stack_3->GetXaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_zveto_3l_stack_3->GetXaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_zveto_3l_stack_3->GetXaxis()->SetTitleOffset(0.9);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_zveto_3l_stack_3->GetXaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_zveto_3l_stack_3->GetYaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_zveto_3l_stack_3->GetYaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_zveto_3l_stack_3->GetYaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_zveto_3l_stack_3->GetYaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_zveto_3l_stack_3->GetYaxis()->SetTitleOffset(1.25);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_zveto_3l_stack_3->GetYaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_zveto_3l_stack_3->GetZaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_zveto_3l_stack_3->GetZaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_zveto_3l_stack_3->GetZaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_zveto_3l_stack_3->GetZaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_zveto_3l_stack_3->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_zveto_3l->SetHistogram(thsBackground_grouped_wh3l_MET_JetV_13TeV_zveto_3l_stack_3);
   
   
   TH1D *new_histo_group_Fake_wh3l_MET_JetV_13TeV_zveto_3l12 = new TH1D("new_histo_group_Fake_wh3l_MET_JetV_13TeV_zveto_3l12","histo_Fake",20,0,100);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_zveto_3l12->SetBinContent(1,7.630437);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_zveto_3l12->SetBinContent(2,0.3812846);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_zveto_3l12->SetBinContent(3,2.102353);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_zveto_3l12->SetBinContent(4,0.6579952);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_zveto_3l12->SetBinContent(5,-0.1936938);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_zveto_3l12->SetBinContent(6,0.404296);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_zveto_3l12->SetBinContent(7,0.584341);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_zveto_3l12->SetBinContent(8,0.9469511);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_zveto_3l12->SetBinContent(9,0.7650418);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_zveto_3l12->SetBinContent(10,0.7963334);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_zveto_3l12->SetBinContent(11,1.023662);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_zveto_3l12->SetBinContent(12,0.5852319);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_zveto_3l12->SetBinContent(13,0.324549);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_zveto_3l12->SetBinContent(14,1.323319);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_zveto_3l12->SetBinContent(16,-0.3071204);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_zveto_3l12->SetBinContent(17,0.01024054);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_zveto_3l12->SetBinContent(19,4.138308);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_zveto_3l12->SetBinError(1,2.872801);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_zveto_3l12->SetBinError(2,1.001575);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_zveto_3l12->SetBinError(3,1.078301);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_zveto_3l12->SetBinError(4,0.6609701);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_zveto_3l12->SetBinError(5,0.4655986);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_zveto_3l12->SetBinError(6,0.8801949);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_zveto_3l12->SetBinError(7,0.4000869);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_zveto_3l12->SetBinError(8,0.7365228);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_zveto_3l12->SetBinError(9,0.8314785);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_zveto_3l12->SetBinError(10,0.7976046);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_zveto_3l12->SetBinError(11,0.8570452);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_zveto_3l12->SetBinError(12,0.4529688);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_zveto_3l12->SetBinError(13,0.4013769);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_zveto_3l12->SetBinError(14,0.7960512);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_zveto_3l12->SetBinError(16,0.283307);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_zveto_3l12->SetBinError(17,0.01024054);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_zveto_3l12->SetBinError(19,1.512693);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_zveto_3l12->SetEntries(453);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_zveto_3l12->SetFillColor(ci);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_zveto_3l12->SetFillStyle(3001);

   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_zveto_3l12->SetLineColor(ci);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_zveto_3l12->GetXaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_zveto_3l12->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_zveto_3l12->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_zveto_3l12->GetXaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_zveto_3l12->GetYaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_zveto_3l12->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_zveto_3l12->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_zveto_3l12->GetYaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_zveto_3l12->GetZaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_zveto_3l12->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_zveto_3l12->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_zveto_3l12->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_zveto_3l->Add(new_histo_group_Fake_wh3l_MET_JetV_13TeV_zveto_3l,"");
   
   TH1D *new_histo_group_WW_wh3l_MET_JetV_13TeV_zveto_3l13 = new TH1D("new_histo_group_WW_wh3l_MET_JetV_13TeV_zveto_3l13","histo_WW",20,0,100);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_zveto_3l13->SetBinContent(1,0.04987764);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_zveto_3l13->SetBinContent(5,0.02551711);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_zveto_3l13->SetBinContent(7,0.0142084);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_zveto_3l13->SetBinContent(10,0.01044191);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_zveto_3l13->SetBinContent(11,0.01814939);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_zveto_3l13->SetBinContent(12,0.01530373);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_zveto_3l13->SetBinContent(19,0.03059851);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_zveto_3l13->SetBinError(1,0.02894052);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_zveto_3l13->SetBinError(5,0.01822775);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_zveto_3l13->SetBinError(7,0.0142084);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_zveto_3l13->SetBinError(10,0.01044191);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_zveto_3l13->SetBinError(11,0.01814939);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_zveto_3l13->SetBinError(12,0.01530373);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_zveto_3l13->SetBinError(19,0.02166783);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_zveto_3l13->SetEntries(11);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_MET_JetV_13TeV_zveto_3l13->SetFillColor(ci);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_zveto_3l13->SetFillStyle(3001);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_MET_JetV_13TeV_zveto_3l13->SetLineColor(ci);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_zveto_3l13->GetXaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_zveto_3l13->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_zveto_3l13->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_zveto_3l13->GetXaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_zveto_3l13->GetYaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_zveto_3l13->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_zveto_3l13->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_zveto_3l13->GetYaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_zveto_3l13->GetZaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_zveto_3l13->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_zveto_3l13->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_zveto_3l13->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_zveto_3l->Add(new_histo_group_WW_wh3l_MET_JetV_13TeV_zveto_3l,"");
   
   TH1D *new_histo_group_VVV_wh3l_MET_JetV_13TeV_zveto_3l14 = new TH1D("new_histo_group_VVV_wh3l_MET_JetV_13TeV_zveto_3l14","histo_VVV",20,0,100);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_zveto_3l14->SetBinContent(1,0.3845323);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_zveto_3l14->SetBinContent(2,0.0767087);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_zveto_3l14->SetBinContent(3,0.04235903);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_zveto_3l14->SetBinContent(4,0.04557108);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_zveto_3l14->SetBinContent(5,0.03240002);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_zveto_3l14->SetBinContent(6,0.04160643);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_zveto_3l14->SetBinContent(7,0.02757817);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_zveto_3l14->SetBinContent(8,0.0422288);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_zveto_3l14->SetBinContent(9,0.02791257);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_zveto_3l14->SetBinContent(10,0.01415853);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_zveto_3l14->SetBinContent(11,0.02147453);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_zveto_3l14->SetBinContent(12,0.01650746);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_zveto_3l14->SetBinContent(13,0.02642738);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_zveto_3l14->SetBinContent(14,0.006534619);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_zveto_3l14->SetBinContent(15,0.01154662);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_zveto_3l14->SetBinContent(16,0.005856125);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_zveto_3l14->SetBinContent(17,0.004349569);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_zveto_3l14->SetBinContent(18,0.005070793);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_zveto_3l14->SetBinContent(19,0.1783366);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_zveto_3l14->SetBinError(1,0.02514461);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_zveto_3l14->SetBinError(2,0.01238971);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_zveto_3l14->SetBinError(3,0.01026977);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_zveto_3l14->SetBinError(4,0.009573255);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_zveto_3l14->SetBinError(5,0.01066727);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_zveto_3l14->SetBinError(6,0.009926688);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_zveto_3l14->SetBinError(7,0.008324302);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_zveto_3l14->SetBinError(8,0.01017885);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_zveto_3l14->SetBinError(9,0.008432461);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_zveto_3l14->SetBinError(10,0.007230184);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_zveto_3l14->SetBinError(11,0.007199567);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_zveto_3l14->SetBinError(12,0.006046504);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_zveto_3l14->SetBinError(13,0.007864);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_zveto_3l14->SetBinError(14,0.003787243);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_zveto_3l14->SetBinError(15,0.00613419);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_zveto_3l14->SetBinError(16,0.005112487);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_zveto_3l14->SetBinError(17,0.003117723);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_zveto_3l14->SetBinError(18,0.003587291);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_zveto_3l14->SetBinError(19,0.02164873);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_zveto_3l14->SetEntries(806);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_zveto_3l14->SetFillColor(ci);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_zveto_3l14->SetFillStyle(3001);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_zveto_3l14->SetLineColor(ci);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_zveto_3l14->GetXaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_zveto_3l14->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_zveto_3l14->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_zveto_3l14->GetXaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_zveto_3l14->GetYaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_zveto_3l14->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_zveto_3l14->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_zveto_3l14->GetYaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_zveto_3l14->GetZaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_zveto_3l14->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_zveto_3l14->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_zveto_3l14->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_zveto_3l->Add(new_histo_group_VVV_wh3l_MET_JetV_13TeV_zveto_3l,"");
   
   TH1D *new_histo_group_Vg_wh3l_MET_JetV_13TeV_zveto_3l15 = new TH1D("new_histo_group_Vg_wh3l_MET_JetV_13TeV_zveto_3l15","histo_Vg",20,0,100);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_zveto_3l15->SetBinContent(1,1.585114);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_zveto_3l15->SetBinContent(2,0.359364);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_zveto_3l15->SetBinContent(3,0.5328983);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_zveto_3l15->SetBinContent(4,1.096138);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_zveto_3l15->SetBinContent(5,1.41424);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_zveto_3l15->SetBinContent(6,1.1435);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_zveto_3l15->SetBinContent(7,0.4463941);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_zveto_3l15->SetBinContent(8,0.4470873);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_zveto_3l15->SetBinContent(9,0.1587635);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_zveto_3l15->SetBinContent(10,0.3358528);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_zveto_3l15->SetBinContent(11,0.09040196);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_zveto_3l15->SetBinContent(12,0.02616973);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_zveto_3l15->SetBinContent(19,0.1058488);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_zveto_3l15->SetBinError(1,0.4777896);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_zveto_3l15->SetBinError(2,0.2213816);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_zveto_3l15->SetBinError(3,0.23687);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_zveto_3l15->SetBinError(4,0.3478079);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_zveto_3l15->SetBinError(5,0.41864);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_zveto_3l15->SetBinError(6,0.3385764);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_zveto_3l15->SetBinError(7,0.2373782);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_zveto_3l15->SetBinError(8,0.2664949);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_zveto_3l15->SetBinError(9,0.1191798);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_zveto_3l15->SetBinError(10,0.1724543);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_zveto_3l15->SetBinError(11,0.1957691);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_zveto_3l15->SetBinError(12,0.02616973);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_zveto_3l15->SetBinError(19,0.1058488);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_zveto_3l15->SetEntries(106);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_zveto_3l15->SetFillColor(ci);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_zveto_3l15->SetFillStyle(3001);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_zveto_3l15->SetLineColor(ci);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_zveto_3l15->GetXaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_zveto_3l15->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_zveto_3l15->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_zveto_3l15->GetXaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_zveto_3l15->GetYaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_zveto_3l15->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_zveto_3l15->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_zveto_3l15->GetYaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_zveto_3l15->GetZaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_zveto_3l15->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_zveto_3l15->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_zveto_3l15->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_zveto_3l->Add(new_histo_group_Vg_wh3l_MET_JetV_13TeV_zveto_3l,"");
   
   TH1D *new_histo_group_ZZ_wh3l_MET_JetV_13TeV_zveto_3l16 = new TH1D("new_histo_group_ZZ_wh3l_MET_JetV_13TeV_zveto_3l16","histo_ZZ",20,0,100);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_zveto_3l16->SetBinContent(1,5.260219);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_zveto_3l16->SetBinContent(2,0.9828467);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_zveto_3l16->SetBinContent(3,0.4122734);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_zveto_3l16->SetBinContent(4,0.07847158);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_zveto_3l16->SetBinContent(5,0.06931598);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_zveto_3l16->SetBinContent(6,0.09825219);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_zveto_3l16->SetBinContent(7,0.1233438);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_zveto_3l16->SetBinContent(8,0.03939452);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_zveto_3l16->SetBinContent(9,0.02976017);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_zveto_3l16->SetBinContent(11,0.0704998);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_zveto_3l16->SetBinContent(12,0.02640386);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_zveto_3l16->SetBinContent(13,0.1149379);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_zveto_3l16->SetBinContent(19,0.1231284);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_zveto_3l16->SetBinError(1,0.4661092);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_zveto_3l16->SetBinError(2,0.200245);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_zveto_3l16->SetBinError(3,0.1522521);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_zveto_3l16->SetBinError(4,0.05571412);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_zveto_3l16->SetBinError(5,0.05004546);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_zveto_3l16->SetBinError(6,0.06125685);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_zveto_3l16->SetBinError(7,0.07337062);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_zveto_3l16->SetBinError(8,0.03939452);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_zveto_3l16->SetBinError(9,0.02976016);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_zveto_3l16->SetBinError(11,0.05074004);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_zveto_3l16->SetBinError(12,0.02640386);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_zveto_3l16->SetBinError(13,0.06828736);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_zveto_3l16->SetBinError(19,0.0714783);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_zveto_3l16->SetEntries(200);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_zveto_3l16->SetFillColor(ci);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_zveto_3l16->SetFillStyle(3001);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_zveto_3l16->SetLineColor(ci);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_zveto_3l16->GetXaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_zveto_3l16->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_zveto_3l16->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_zveto_3l16->GetXaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_zveto_3l16->GetYaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_zveto_3l16->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_zveto_3l16->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_zveto_3l16->GetYaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_zveto_3l16->GetZaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_zveto_3l16->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_zveto_3l16->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_zveto_3l16->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_zveto_3l->Add(new_histo_group_ZZ_wh3l_MET_JetV_13TeV_zveto_3l,"");
   
   TH1D *new_histo_group_WZ_wh3l_MET_JetV_13TeV_zveto_3l17 = new TH1D("new_histo_group_WZ_wh3l_MET_JetV_13TeV_zveto_3l17","histo_WZ",20,0,100);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_zveto_3l17->SetBinContent(1,87.72253);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_zveto_3l17->SetBinContent(2,12.72651);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_zveto_3l17->SetBinContent(3,4.288334);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_zveto_3l17->SetBinContent(4,2.233008);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_zveto_3l17->SetBinContent(5,1.632858);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_zveto_3l17->SetBinContent(6,1.165147);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_zveto_3l17->SetBinContent(7,0.9791938);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_zveto_3l17->SetBinContent(8,0.8952803);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_zveto_3l17->SetBinContent(9,0.8430293);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_zveto_3l17->SetBinContent(10,0.7337703);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_zveto_3l17->SetBinContent(11,0.6508047);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_zveto_3l17->SetBinContent(12,0.5739258);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_zveto_3l17->SetBinContent(13,0.5461557);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_zveto_3l17->SetBinContent(14,0.4270278);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_zveto_3l17->SetBinContent(15,0.4293013);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_zveto_3l17->SetBinContent(16,0.4128241);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_zveto_3l17->SetBinContent(17,0.03667358);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_zveto_3l17->SetBinContent(18,0.05979598);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_zveto_3l17->SetBinContent(19,1.709735);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_zveto_3l17->SetBinError(1,0.6909023);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_zveto_3l17->SetBinError(2,0.2627317);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_zveto_3l17->SetBinError(3,0.1520976);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_zveto_3l17->SetBinError(4,0.1090673);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_zveto_3l17->SetBinError(5,0.09463752);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_zveto_3l17->SetBinError(6,0.07926738);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_zveto_3l17->SetBinError(7,0.07296996);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_zveto_3l17->SetBinError(8,0.07027891);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_zveto_3l17->SetBinError(9,0.06730616);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_zveto_3l17->SetBinError(10,0.06424746);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_zveto_3l17->SetBinError(11,0.05932829);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_zveto_3l17->SetBinError(12,0.05567756);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_zveto_3l17->SetBinError(13,0.05447657);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_zveto_3l17->SetBinError(14,0.04748225);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_zveto_3l17->SetBinError(15,0.0485523);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_zveto_3l17->SetBinError(16,0.04700815);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_zveto_3l17->SetBinError(17,0.01424065);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_zveto_3l17->SetBinError(18,0.01763162);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_zveto_3l17->SetBinError(19,0.09599308);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_zveto_3l17->SetEntries(24086);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_zveto_3l17->SetFillColor(ci);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_zveto_3l17->SetFillStyle(3001);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_zveto_3l17->SetLineColor(ci);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_zveto_3l17->GetXaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_zveto_3l17->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_zveto_3l17->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_zveto_3l17->GetXaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_zveto_3l17->GetYaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_zveto_3l17->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_zveto_3l17->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_zveto_3l17->GetYaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_zveto_3l17->GetZaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_zveto_3l17->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_zveto_3l17->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_zveto_3l17->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_zveto_3l->Add(new_histo_group_WZ_wh3l_MET_JetV_13TeV_zveto_3l,"");
   
   TH1D *new_histo_group_Higgs_wh3l_MET_JetV_13TeV_zveto_3l18 = new TH1D("new_histo_group_Higgs_wh3l_MET_JetV_13TeV_zveto_3l18","histo_H_htt",20,0,100);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_zveto_3l18->SetBinContent(1,0.6229593);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_zveto_3l18->SetBinContent(2,0.1245154);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_zveto_3l18->SetBinContent(3,0.05500727);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_zveto_3l18->SetBinContent(4,0.04305257);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_zveto_3l18->SetBinContent(5,0.04798927);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_zveto_3l18->SetBinContent(6,0.0668913);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_zveto_3l18->SetBinContent(7,0.04954608);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_zveto_3l18->SetBinContent(8,0.07814128);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_zveto_3l18->SetBinContent(9,0.05633584);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_zveto_3l18->SetBinContent(10,0.06320348);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_zveto_3l18->SetBinContent(11,0.04357659);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_zveto_3l18->SetBinContent(12,0.06794768);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_zveto_3l18->SetBinContent(13,0.04523574);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_zveto_3l18->SetBinContent(14,0.03078258);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_zveto_3l18->SetBinContent(15,0.0297702);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_zveto_3l18->SetBinContent(16,0.01405709);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_zveto_3l18->SetBinContent(17,0.00266919);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_zveto_3l18->SetBinContent(18,0.002708116);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_zveto_3l18->SetBinContent(19,0.2651129);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_zveto_3l18->SetBinError(1,0.02717862);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_zveto_3l18->SetBinError(2,0.01198938);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_zveto_3l18->SetBinError(3,0.007849315);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_zveto_3l18->SetBinError(4,0.006794082);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_zveto_3l18->SetBinError(5,0.007406042);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_zveto_3l18->SetBinError(6,0.008926731);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_zveto_3l18->SetBinError(7,0.006927361);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_zveto_3l18->SetBinError(8,0.009410384);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_zveto_3l18->SetBinError(9,0.007759675);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_zveto_3l18->SetBinError(10,0.00846503);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_zveto_3l18->SetBinError(11,0.007566448);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_zveto_3l18->SetBinError(12,0.009589763);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_zveto_3l18->SetBinError(13,0.007951139);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_zveto_3l18->SetBinError(14,0.006309971);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_zveto_3l18->SetBinError(15,0.006106694);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_zveto_3l18->SetBinError(16,0.003809649);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_zveto_3l18->SetBinError(17,0.001930826);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_zveto_3l18->SetBinError(18,0.001733315);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_zveto_3l18->SetBinError(19,0.01740494);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_zveto_3l18->SetEntries(2609);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_zveto_3l18->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_zveto_3l18->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_zveto_3l18->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_zveto_3l18->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_zveto_3l18->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_zveto_3l18->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_zveto_3l18->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_zveto_3l18->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_zveto_3l18->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_zveto_3l18->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_zveto_3l18->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_zveto_3l18->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_zveto_3l18->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_zveto_3l18->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_zveto_3l18->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_zveto_3l->Add(new_histo_group_Higgs_wh3l_MET_JetV_13TeV_zveto_3l,"");
   thsBackground_grouped_wh3l_MET_JetV_13TeV_zveto_3l->Draw("hist same");
   
   thsSignal_grouped_wh3l_MET_JetV_13TeV_zveto_3l = new THStack();
   thsSignal_grouped_wh3l_MET_JetV_13TeV_zveto_3l->SetName("thsSignal_grouped_wh3l_MET_JetV_13TeV_zveto_3l");
   thsSignal_grouped_wh3l_MET_JetV_13TeV_zveto_3l->SetTitle("thsSignal_grouped_wh3l_MET_JetV_13TeV_zveto_3l");
   
   TH1F *thsSignal_grouped_wh3l_MET_JetV_13TeV_zveto_3l_stack_4 = new TH1F("thsSignal_grouped_wh3l_MET_JetV_13TeV_zveto_3l_stack_4","thsSignal_grouped_wh3l_MET_JetV_13TeV_zveto_3l",20,0,100);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_zveto_3l_stack_4->SetMinimum(0);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_zveto_3l_stack_4->SetMaximum(0.6826449);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_zveto_3l_stack_4->SetDirectory(0);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_zveto_3l_stack_4->SetStats(0);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_zveto_3l_stack_4->SetLineStyle(0);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_zveto_3l_stack_4->SetMarkerStyle(20);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_zveto_3l_stack_4->GetXaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_zveto_3l_stack_4->GetXaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_zveto_3l_stack_4->GetXaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_zveto_3l_stack_4->GetXaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_zveto_3l_stack_4->GetXaxis()->SetTitleOffset(0.9);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_zveto_3l_stack_4->GetXaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_zveto_3l_stack_4->GetYaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_zveto_3l_stack_4->GetYaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_zveto_3l_stack_4->GetYaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_zveto_3l_stack_4->GetYaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_zveto_3l_stack_4->GetYaxis()->SetTitleOffset(1.25);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_zveto_3l_stack_4->GetYaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_zveto_3l_stack_4->GetZaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_zveto_3l_stack_4->GetZaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_zveto_3l_stack_4->GetZaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_zveto_3l_stack_4->GetZaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_zveto_3l_stack_4->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_zveto_3l->SetHistogram(thsSignal_grouped_wh3l_MET_JetV_13TeV_zveto_3l_stack_4);
   
   
   TH1D *new_histo_group_Higgs_wh3l_MET_JetV_13TeV_zveto_3l19 = new TH1D("new_histo_group_Higgs_wh3l_MET_JetV_13TeV_zveto_3l19","histo_H_htt",20,0,100);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_zveto_3l19->SetBinContent(1,0.6229593);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_zveto_3l19->SetBinContent(2,0.1245154);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_zveto_3l19->SetBinContent(3,0.05500727);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_zveto_3l19->SetBinContent(4,0.04305257);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_zveto_3l19->SetBinContent(5,0.04798927);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_zveto_3l19->SetBinContent(6,0.0668913);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_zveto_3l19->SetBinContent(7,0.04954608);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_zveto_3l19->SetBinContent(8,0.07814128);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_zveto_3l19->SetBinContent(9,0.05633584);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_zveto_3l19->SetBinContent(10,0.06320348);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_zveto_3l19->SetBinContent(11,0.04357659);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_zveto_3l19->SetBinContent(12,0.06794768);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_zveto_3l19->SetBinContent(13,0.04523574);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_zveto_3l19->SetBinContent(14,0.03078258);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_zveto_3l19->SetBinContent(15,0.0297702);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_zveto_3l19->SetBinContent(16,0.01405709);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_zveto_3l19->SetBinContent(17,0.00266919);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_zveto_3l19->SetBinContent(18,0.002708116);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_zveto_3l19->SetBinContent(19,0.2651129);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_zveto_3l19->SetBinError(1,0.02717862);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_zveto_3l19->SetBinError(2,0.01198938);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_zveto_3l19->SetBinError(3,0.007849315);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_zveto_3l19->SetBinError(4,0.006794082);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_zveto_3l19->SetBinError(5,0.007406042);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_zveto_3l19->SetBinError(6,0.008926731);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_zveto_3l19->SetBinError(7,0.006927361);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_zveto_3l19->SetBinError(8,0.009410384);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_zveto_3l19->SetBinError(9,0.007759675);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_zveto_3l19->SetBinError(10,0.00846503);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_zveto_3l19->SetBinError(11,0.007566448);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_zveto_3l19->SetBinError(12,0.009589763);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_zveto_3l19->SetBinError(13,0.007951139);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_zveto_3l19->SetBinError(14,0.006309971);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_zveto_3l19->SetBinError(15,0.006106694);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_zveto_3l19->SetBinError(16,0.003809649);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_zveto_3l19->SetBinError(17,0.001930826);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_zveto_3l19->SetBinError(18,0.001733315);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_zveto_3l19->SetBinError(19,0.01740494);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_zveto_3l19->SetEntries(2609);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_zveto_3l19->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_zveto_3l19->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_zveto_3l19->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_zveto_3l19->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_zveto_3l19->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_zveto_3l19->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_zveto_3l19->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_zveto_3l19->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_zveto_3l19->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_zveto_3l19->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_zveto_3l19->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_zveto_3l19->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_zveto_3l19->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_zveto_3l19->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_zveto_3l19->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_zveto_3l->Add(new_histo_group_Higgs_wh3l_MET_JetV_13TeV_zveto_3l,"");
   thsSignal_grouped_wh3l_MET_JetV_13TeV_zveto_3l->Draw("hist same noclear");
   
   Double_t _fx3003[20] = {
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
   Double_t _fy3003[20] = {
   102.6327,
   14.52671,
   7.378218,
   4.111183,
   2.980637,
   2.852801,
   2.175059,
   2.370942,
   1.824507,
   1.890557,
   1.874993,
   1.243542,
   1.01207,
   1.756882,
   0.4408479,
   0.1115598,
   0.05126369,
   0.06486677,
   6.285955,
   0};
   Double_t _felx3003[20] = {
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
   Double_t _fely3003[20] = {
   5.699347,
   1.14082,
   1.79544,
   1.206559,
   1.064044,
   0.9099852,
   0.8339972,
   1.172798,
   1.026604,
   1.088069,
   1.141401,
   0.6188401,
   0.4712271,
   0.9658744,
   0.05965476,
   0.3527904,
   0.02819031,
   0.02190676,
   2.340973,
   0};
   Double_t _fehx3003[20] = {
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
   Double_t _fehy3003[20] = {
   5.674967,
   1.735057,
   1.794957,
   1.209295,
   0.7940122,
   1.379881,
   0.8338752,
   1.172757,
   1.090739,
   1.089231,
   1.241779,
   0.6187894,
   0.5456362,
   0.96586,
   0.05928058,
   0.3527874,
   0.02818612,
   0.02188808,
   2.340818,
   0};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(20,_fx3003,_fy3003,_felx3003,_fehx3003,_fely3003,_fehy3003);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(12);
   grae->SetFillStyle(3004);
   grae->SetLineColor(12);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3003 = new TH1F("Graph_Graph3003","",100,0,110);
   Graph_Graph3003->SetMinimum(-11.09612);
   Graph_Graph3003->SetMaximum(119.1626);
   Graph_Graph3003->SetDirectory(0);
   Graph_Graph3003->SetStats(0);
   Graph_Graph3003->SetLineStyle(0);
   Graph_Graph3003->SetMarkerStyle(20);
   Graph_Graph3003->GetXaxis()->SetLabelFont(42);
   Graph_Graph3003->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3003->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3003->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3003->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3003->GetXaxis()->SetTitleFont(42);
   Graph_Graph3003->GetYaxis()->SetLabelFont(42);
   Graph_Graph3003->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3003->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3003->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3003->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3003->GetYaxis()->SetTitleFont(42);
   Graph_Graph3003->GetZaxis()->SetLabelFont(42);
   Graph_Graph3003->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3003->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3003->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3003->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3003);
   
   grae->Draw("2");
   
   Double_t _fx3004[20] = {
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
   Double_t _fy3004[20] = {
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
   Double_t _felx3004[20] = {
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
   Double_t _fely3004[20] = {
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
   Double_t _fehx3004[20] = {
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
   Double_t _fehy3004[20] = {
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
   grae = new TGraphAsymmErrors(20,_fx3004,_fy3004,_felx3004,_fehx3004,_fely3004,_fehy3004);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(1);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3004 = new TH1F("Graph_Graph3004","",100,0,110);
   Graph_Graph3004->SetMinimum(0);
   Graph_Graph3004->SetMaximum(1.262698);
   Graph_Graph3004->SetDirectory(0);
   Graph_Graph3004->SetStats(0);
   Graph_Graph3004->SetLineStyle(0);
   Graph_Graph3004->SetMarkerStyle(20);
   Graph_Graph3004->GetXaxis()->SetLabelFont(42);
   Graph_Graph3004->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3004->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3004->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3004->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3004->GetXaxis()->SetTitleFont(42);
   Graph_Graph3004->GetYaxis()->SetLabelFont(42);
   Graph_Graph3004->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3004->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3004->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3004->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3004->GetYaxis()->SetTitleFont(42);
   Graph_Graph3004->GetZaxis()->SetLabelFont(42);
   Graph_Graph3004->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3004->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3004->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3004->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3004);
   
   grae->Draw("p0");
   
   TLegend *leg = new TLegend(0.2,0.7,0.8,0.9,NULL,"brNDC");
   leg->SetTextFont(62);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("new_histo_group_Fake_wh3l_MET_JetV_13TeV_zveto_3l","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_MET_JetV_13TeV_zveto_3l","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_MET_JetV_13TeV_zveto_3l","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_MET_JetV_13TeV_zveto_3l","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_MET_JetV_13TeV_zveto_3l","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_MET_JetV_13TeV_zveto_3l","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_MET_JetV_13TeV_zveto_3l","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_MET_JetV_13TeV_zveto_3l","Data","EPL");
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
   entry=leg->AddEntry("new_histo_group_Fake_wh3l_MET_JetV_13TeV_zveto_3l","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_MET_JetV_13TeV_zveto_3l","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_MET_JetV_13TeV_zveto_3l","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_MET_JetV_13TeV_zveto_3l","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_MET_JetV_13TeV_zveto_3l","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_MET_JetV_13TeV_zveto_3l","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_MET_JetV_13TeV_zveto_3l","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_MET_JetV_13TeV_zveto_3l","Data","EPL");
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
   
   TH1F *hframe_copy20 = new TH1F("hframe_copy20","",1000,0,100);
   hframe_copy20->SetMinimum(0);
   hframe_copy20->SetMaximum(258.1392);
   hframe_copy20->SetDirectory(0);
   hframe_copy20->SetStats(0);
   hframe_copy20->SetLineStyle(0);
   hframe_copy20->SetMarkerStyle(20);
   hframe_copy20->GetXaxis()->SetTitle("m_{ll} - M_{Z} [GeV]");
   hframe_copy20->GetXaxis()->SetNdivisions(506);
   hframe_copy20->GetXaxis()->SetLabelFont(42);
   hframe_copy20->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy20->GetXaxis()->SetLabelSize(0.05);
   hframe_copy20->GetXaxis()->SetTitleSize(0.06);
   hframe_copy20->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy20->GetXaxis()->SetTitleFont(42);
   hframe_copy20->GetYaxis()->SetTitle("Events");
   hframe_copy20->GetYaxis()->SetLabelFont(42);
   hframe_copy20->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy20->GetYaxis()->SetLabelSize(0.05);
   hframe_copy20->GetYaxis()->SetTitleSize(0.06);
   hframe_copy20->GetYaxis()->SetTitleOffset(1.25);
   hframe_copy20->GetYaxis()->SetTitleFont(42);
   hframe_copy20->GetZaxis()->SetLabelFont(42);
   hframe_copy20->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy20->GetZaxis()->SetLabelSize(0.05);
   hframe_copy20->GetZaxis()->SetTitleSize(0.06);
   hframe_copy20->GetZaxis()->SetTitleFont(42);
   hframe_copy20->Draw("sameaxis");
   ccwh3l_MET_JetV_13TeV_zveto_3l->Modified();
   ccwh3l_MET_JetV_13TeV_zveto_3l->cd();
   ccwh3l_MET_JetV_13TeV_zveto_3l->SetSelected(ccwh3l_MET_JetV_13TeV_zveto_3l);
}
