void c_wh3l_MET_JetV_13TeV_zveto_3l()
{
//=========Macro generated from canvas: ccwh3l_MET_JetV_13TeV_zveto_3l/cc
//=========  (Sat Jul  2 21:43:25 2016) by ROOT version6.02/13
   TCanvas *ccwh3l_MET_JetV_13TeV_zveto_3l = new TCanvas("ccwh3l_MET_JetV_13TeV_zveto_3l", "cc",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   ccwh3l_MET_JetV_13TeV_zveto_3l->SetHighLightColor(2);
   ccwh3l_MET_JetV_13TeV_zveto_3l->Range(-20,-53.97391,105,361.21);
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
   
   TH1F *hframe21 = new TH1F("hframe21","",1000,0,100);
   hframe21->SetMinimum(0);
   hframe21->SetMaximum(340.4508);
   hframe21->SetDirectory(0);
   hframe21->SetStats(0);
   hframe21->SetLineStyle(0);
   hframe21->SetMarkerStyle(20);
   hframe21->GetXaxis()->SetTitle("m_{ll} - M_{Z} [GeV]");
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
   
   THStack *thsBackground_grouped_wh3l_MET_JetV_13TeV_zveto_3l = new THStack();
   thsBackground_grouped_wh3l_MET_JetV_13TeV_zveto_3l->SetName("thsBackground_grouped_wh3l_MET_JetV_13TeV_zveto_3l");
   thsBackground_grouped_wh3l_MET_JetV_13TeV_zveto_3l->SetTitle("thsBackground_grouped_wh3l_MET_JetV_13TeV_zveto_3l");
   
   TH1F *thsBackground_grouped_wh3l_MET_JetV_13TeV_zveto_3l_stack_5 = new TH1F("thsBackground_grouped_wh3l_MET_JetV_13TeV_zveto_3l_stack_5","thsBackground_grouped_wh3l_MET_JetV_13TeV_zveto_3l",20,0,100);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_zveto_3l_stack_5->SetMinimum(-0.6592924);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_zveto_3l_stack_5->SetMaximum(108.4185);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_zveto_3l_stack_5->SetDirectory(0);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_zveto_3l_stack_5->SetStats(0);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_zveto_3l_stack_5->SetLineStyle(0);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_zveto_3l_stack_5->SetMarkerStyle(20);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_zveto_3l_stack_5->GetXaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_zveto_3l_stack_5->GetXaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_zveto_3l_stack_5->GetXaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_zveto_3l_stack_5->GetXaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_zveto_3l_stack_5->GetXaxis()->SetTitleOffset(0.9);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_zveto_3l_stack_5->GetXaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_zveto_3l_stack_5->GetYaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_zveto_3l_stack_5->GetYaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_zveto_3l_stack_5->GetYaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_zveto_3l_stack_5->GetYaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_zveto_3l_stack_5->GetYaxis()->SetTitleOffset(1.25);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_zveto_3l_stack_5->GetYaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_zveto_3l_stack_5->GetZaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_zveto_3l_stack_5->GetZaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_zveto_3l_stack_5->GetZaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_zveto_3l_stack_5->GetZaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_zveto_3l_stack_5->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_zveto_3l->SetHistogram(thsBackground_grouped_wh3l_MET_JetV_13TeV_zveto_3l_stack_5);
   
   
   TH1D *new_histo_group_Fake_wh3l_MET_JetV_13TeV_zveto_3l22 = new TH1D("new_histo_group_Fake_wh3l_MET_JetV_13TeV_zveto_3l22","histo_Fake",20,0,100);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_zveto_3l22->SetBinContent(1,7.630437);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_zveto_3l22->SetBinContent(2,0.3812846);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_zveto_3l22->SetBinContent(3,2.102353);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_zveto_3l22->SetBinContent(4,0.6579952);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_zveto_3l22->SetBinContent(5,-0.1936938);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_zveto_3l22->SetBinContent(6,0.404296);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_zveto_3l22->SetBinContent(7,0.584341);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_zveto_3l22->SetBinContent(8,0.9469511);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_zveto_3l22->SetBinContent(9,0.7650418);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_zveto_3l22->SetBinContent(10,0.7963334);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_zveto_3l22->SetBinContent(11,1.023662);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_zveto_3l22->SetBinContent(12,0.5852319);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_zveto_3l22->SetBinContent(13,0.324549);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_zveto_3l22->SetBinContent(14,1.323319);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_zveto_3l22->SetBinContent(16,-0.3071204);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_zveto_3l22->SetBinContent(17,0.01024054);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_zveto_3l22->SetBinContent(19,1.14303);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_zveto_3l22->SetBinError(1,2.872801);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_zveto_3l22->SetBinError(2,1.001575);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_zveto_3l22->SetBinError(3,1.078301);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_zveto_3l22->SetBinError(4,0.6609701);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_zveto_3l22->SetBinError(5,0.4655986);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_zveto_3l22->SetBinError(6,0.8801949);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_zveto_3l22->SetBinError(7,0.4000869);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_zveto_3l22->SetBinError(8,0.7365228);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_zveto_3l22->SetBinError(9,0.8314785);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_zveto_3l22->SetBinError(10,0.7976046);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_zveto_3l22->SetBinError(11,0.8570452);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_zveto_3l22->SetBinError(12,0.4529688);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_zveto_3l22->SetBinError(13,0.4013769);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_zveto_3l22->SetBinError(14,0.7960512);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_zveto_3l22->SetBinError(16,0.283307);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_zveto_3l22->SetBinError(17,0.01024054);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_zveto_3l22->SetBinError(19,0.724075);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_zveto_3l22->SetEntries(425);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_zveto_3l22->SetFillColor(ci);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_zveto_3l22->SetFillStyle(3001);

   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_zveto_3l22->SetLineColor(ci);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_zveto_3l22->GetXaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_zveto_3l22->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_zveto_3l22->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_zveto_3l22->GetXaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_zveto_3l22->GetYaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_zveto_3l22->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_zveto_3l22->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_zveto_3l22->GetYaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_zveto_3l22->GetZaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_zveto_3l22->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_zveto_3l22->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_zveto_3l22->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_zveto_3l->Add(new_histo_group_Fake_wh3l_MET_JetV_13TeV_zveto_3l,"");
   
   TH1D *new_histo_group_WW_wh3l_MET_JetV_13TeV_zveto_3l23 = new TH1D("new_histo_group_WW_wh3l_MET_JetV_13TeV_zveto_3l23","histo_WW",20,0,100);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_zveto_3l23->SetBinContent(1,0.04987764);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_zveto_3l23->SetBinContent(5,0.02551711);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_zveto_3l23->SetBinContent(7,0.0142084);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_zveto_3l23->SetBinContent(10,0.01044191);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_zveto_3l23->SetBinContent(11,0.01814939);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_zveto_3l23->SetBinContent(12,0.01530373);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_zveto_3l23->SetBinContent(19,0.01447441);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_zveto_3l23->SetBinError(1,0.02894052);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_zveto_3l23->SetBinError(5,0.01822775);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_zveto_3l23->SetBinError(7,0.0142084);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_zveto_3l23->SetBinError(10,0.01044191);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_zveto_3l23->SetBinError(11,0.01814939);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_zveto_3l23->SetBinError(12,0.01530373);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_zveto_3l23->SetBinError(19,0.01447441);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_zveto_3l23->SetEntries(10);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_MET_JetV_13TeV_zveto_3l23->SetFillColor(ci);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_zveto_3l23->SetFillStyle(3001);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_MET_JetV_13TeV_zveto_3l23->SetLineColor(ci);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_zveto_3l23->GetXaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_zveto_3l23->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_zveto_3l23->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_zveto_3l23->GetXaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_zveto_3l23->GetYaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_zveto_3l23->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_zveto_3l23->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_zveto_3l23->GetYaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_zveto_3l23->GetZaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_zveto_3l23->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_zveto_3l23->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_zveto_3l23->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_zveto_3l->Add(new_histo_group_WW_wh3l_MET_JetV_13TeV_zveto_3l,"");
   
   TH1D *new_histo_group_VVV_wh3l_MET_JetV_13TeV_zveto_3l24 = new TH1D("new_histo_group_VVV_wh3l_MET_JetV_13TeV_zveto_3l24","histo_VVV",20,0,100);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_zveto_3l24->SetBinContent(1,0.3845323);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_zveto_3l24->SetBinContent(2,0.0767087);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_zveto_3l24->SetBinContent(3,0.04235903);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_zveto_3l24->SetBinContent(4,0.04557108);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_zveto_3l24->SetBinContent(5,0.03240002);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_zveto_3l24->SetBinContent(6,0.04160643);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_zveto_3l24->SetBinContent(7,0.02757817);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_zveto_3l24->SetBinContent(8,0.0422288);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_zveto_3l24->SetBinContent(9,0.02791257);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_zveto_3l24->SetBinContent(10,0.01415853);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_zveto_3l24->SetBinContent(11,0.02147453);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_zveto_3l24->SetBinContent(12,0.01650746);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_zveto_3l24->SetBinContent(13,0.02642738);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_zveto_3l24->SetBinContent(14,0.006534619);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_zveto_3l24->SetBinContent(15,0.01154662);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_zveto_3l24->SetBinContent(16,0.005856125);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_zveto_3l24->SetBinContent(17,0.004349569);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_zveto_3l24->SetBinContent(18,0.005070793);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_zveto_3l24->SetBinContent(19,0.06488923);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_zveto_3l24->SetBinError(1,0.02514461);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_zveto_3l24->SetBinError(2,0.01238971);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_zveto_3l24->SetBinError(3,0.01026977);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_zveto_3l24->SetBinError(4,0.009573255);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_zveto_3l24->SetBinError(5,0.01066727);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_zveto_3l24->SetBinError(6,0.009926688);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_zveto_3l24->SetBinError(7,0.008324302);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_zveto_3l24->SetBinError(8,0.01017885);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_zveto_3l24->SetBinError(9,0.008432461);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_zveto_3l24->SetBinError(10,0.007230184);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_zveto_3l24->SetBinError(11,0.007199567);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_zveto_3l24->SetBinError(12,0.006046504);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_zveto_3l24->SetBinError(13,0.007864);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_zveto_3l24->SetBinError(14,0.003787243);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_zveto_3l24->SetBinError(15,0.00613419);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_zveto_3l24->SetBinError(16,0.005112487);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_zveto_3l24->SetBinError(17,0.003117723);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_zveto_3l24->SetBinError(18,0.003587291);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_zveto_3l24->SetBinError(19,0.0126518);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_zveto_3l24->SetEntries(739);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_zveto_3l24->SetFillColor(ci);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_zveto_3l24->SetFillStyle(3001);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_zveto_3l24->SetLineColor(ci);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_zveto_3l24->GetXaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_zveto_3l24->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_zveto_3l24->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_zveto_3l24->GetXaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_zveto_3l24->GetYaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_zveto_3l24->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_zveto_3l24->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_zveto_3l24->GetYaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_zveto_3l24->GetZaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_zveto_3l24->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_zveto_3l24->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_zveto_3l24->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_zveto_3l->Add(new_histo_group_VVV_wh3l_MET_JetV_13TeV_zveto_3l,"");
   
   TH1D *new_histo_group_Vg_wh3l_MET_JetV_13TeV_zveto_3l25 = new TH1D("new_histo_group_Vg_wh3l_MET_JetV_13TeV_zveto_3l25","histo_Vg",20,0,100);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_zveto_3l25->SetBinContent(1,1.585114);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_zveto_3l25->SetBinContent(2,0.359364);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_zveto_3l25->SetBinContent(3,0.5328983);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_zveto_3l25->SetBinContent(4,1.096138);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_zveto_3l25->SetBinContent(5,1.41424);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_zveto_3l25->SetBinContent(6,1.1435);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_zveto_3l25->SetBinContent(7,0.4463941);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_zveto_3l25->SetBinContent(8,0.4470873);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_zveto_3l25->SetBinContent(9,0.1587635);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_zveto_3l25->SetBinContent(10,0.3358528);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_zveto_3l25->SetBinContent(11,0.09040196);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_zveto_3l25->SetBinContent(12,0.02616973);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_zveto_3l25->SetBinContent(19,0.1058488);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_zveto_3l25->SetBinError(1,0.4777896);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_zveto_3l25->SetBinError(2,0.2213816);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_zveto_3l25->SetBinError(3,0.23687);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_zveto_3l25->SetBinError(4,0.3478079);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_zveto_3l25->SetBinError(5,0.41864);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_zveto_3l25->SetBinError(6,0.3385764);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_zveto_3l25->SetBinError(7,0.2373782);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_zveto_3l25->SetBinError(8,0.2664949);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_zveto_3l25->SetBinError(9,0.1191798);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_zveto_3l25->SetBinError(10,0.1724543);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_zveto_3l25->SetBinError(11,0.1957691);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_zveto_3l25->SetBinError(12,0.02616973);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_zveto_3l25->SetBinError(19,0.1058488);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_zveto_3l25->SetEntries(106);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_zveto_3l25->SetFillColor(ci);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_zveto_3l25->SetFillStyle(3001);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_zveto_3l25->SetLineColor(ci);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_zveto_3l25->GetXaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_zveto_3l25->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_zveto_3l25->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_zveto_3l25->GetXaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_zveto_3l25->GetYaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_zveto_3l25->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_zveto_3l25->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_zveto_3l25->GetYaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_zveto_3l25->GetZaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_zveto_3l25->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_zveto_3l25->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_zveto_3l25->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_zveto_3l->Add(new_histo_group_Vg_wh3l_MET_JetV_13TeV_zveto_3l,"");
   
   TH1D *new_histo_group_ZZ_wh3l_MET_JetV_13TeV_zveto_3l26 = new TH1D("new_histo_group_ZZ_wh3l_MET_JetV_13TeV_zveto_3l26","histo_ZZ",20,0,100);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_zveto_3l26->SetBinContent(1,5.260219);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_zveto_3l26->SetBinContent(2,0.9828467);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_zveto_3l26->SetBinContent(3,0.4122734);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_zveto_3l26->SetBinContent(4,0.07847158);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_zveto_3l26->SetBinContent(5,0.06931598);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_zveto_3l26->SetBinContent(6,0.09825219);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_zveto_3l26->SetBinContent(7,0.1233438);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_zveto_3l26->SetBinContent(8,0.03939452);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_zveto_3l26->SetBinContent(9,0.02976017);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_zveto_3l26->SetBinContent(11,0.0704998);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_zveto_3l26->SetBinContent(12,0.02640386);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_zveto_3l26->SetBinContent(13,0.1149379);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_zveto_3l26->SetBinContent(19,0.04527812);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_zveto_3l26->SetBinError(1,0.4661092);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_zveto_3l26->SetBinError(2,0.200245);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_zveto_3l26->SetBinError(3,0.1522521);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_zveto_3l26->SetBinError(4,0.05571412);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_zveto_3l26->SetBinError(5,0.05004546);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_zveto_3l26->SetBinError(6,0.06125685);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_zveto_3l26->SetBinError(7,0.07337062);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_zveto_3l26->SetBinError(8,0.03939452);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_zveto_3l26->SetBinError(9,0.02976016);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_zveto_3l26->SetBinError(11,0.05074004);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_zveto_3l26->SetBinError(12,0.02640386);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_zveto_3l26->SetBinError(13,0.06828736);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_zveto_3l26->SetBinError(19,0.04527812);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_zveto_3l26->SetEntries(198);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_zveto_3l26->SetFillColor(ci);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_zveto_3l26->SetFillStyle(3001);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_zveto_3l26->SetLineColor(ci);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_zveto_3l26->GetXaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_zveto_3l26->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_zveto_3l26->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_zveto_3l26->GetXaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_zveto_3l26->GetYaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_zveto_3l26->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_zveto_3l26->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_zveto_3l26->GetYaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_zveto_3l26->GetZaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_zveto_3l26->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_zveto_3l26->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_zveto_3l26->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_zveto_3l->Add(new_histo_group_ZZ_wh3l_MET_JetV_13TeV_zveto_3l,"");
   
   TH1D *new_histo_group_WZ_wh3l_MET_JetV_13TeV_zveto_3l27 = new TH1D("new_histo_group_WZ_wh3l_MET_JetV_13TeV_zveto_3l27","histo_WZ",20,0,100);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_zveto_3l27->SetBinContent(1,87.72253);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_zveto_3l27->SetBinContent(2,12.72651);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_zveto_3l27->SetBinContent(3,4.288334);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_zveto_3l27->SetBinContent(4,2.233008);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_zveto_3l27->SetBinContent(5,1.632858);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_zveto_3l27->SetBinContent(6,1.165147);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_zveto_3l27->SetBinContent(7,0.9791938);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_zveto_3l27->SetBinContent(8,0.8952803);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_zveto_3l27->SetBinContent(9,0.8430293);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_zveto_3l27->SetBinContent(10,0.7337703);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_zveto_3l27->SetBinContent(11,0.6508047);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_zveto_3l27->SetBinContent(12,0.5739258);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_zveto_3l27->SetBinContent(13,0.5461557);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_zveto_3l27->SetBinContent(14,0.4270278);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_zveto_3l27->SetBinContent(15,0.4293013);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_zveto_3l27->SetBinContent(16,0.4128241);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_zveto_3l27->SetBinContent(17,0.03667358);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_zveto_3l27->SetBinContent(18,0.05979598);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_zveto_3l27->SetBinContent(19,1.21864);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_zveto_3l27->SetBinError(1,0.6909023);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_zveto_3l27->SetBinError(2,0.2627317);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_zveto_3l27->SetBinError(3,0.1520976);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_zveto_3l27->SetBinError(4,0.1090673);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_zveto_3l27->SetBinError(5,0.09463752);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_zveto_3l27->SetBinError(6,0.07926738);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_zveto_3l27->SetBinError(7,0.07296996);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_zveto_3l27->SetBinError(8,0.07027891);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_zveto_3l27->SetBinError(9,0.06730616);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_zveto_3l27->SetBinError(10,0.06424746);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_zveto_3l27->SetBinError(11,0.05932829);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_zveto_3l27->SetBinError(12,0.05567756);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_zveto_3l27->SetBinError(13,0.05447657);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_zveto_3l27->SetBinError(14,0.04748225);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_zveto_3l27->SetBinError(15,0.0485523);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_zveto_3l27->SetBinError(16,0.04700815);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_zveto_3l27->SetBinError(17,0.01424065);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_zveto_3l27->SetBinError(18,0.01763162);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_zveto_3l27->SetBinError(19,0.08120843);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_zveto_3l27->SetEntries(23985);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_zveto_3l27->SetFillColor(ci);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_zveto_3l27->SetFillStyle(3001);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_zveto_3l27->SetLineColor(ci);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_zveto_3l27->GetXaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_zveto_3l27->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_zveto_3l27->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_zveto_3l27->GetXaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_zveto_3l27->GetYaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_zveto_3l27->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_zveto_3l27->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_zveto_3l27->GetYaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_zveto_3l27->GetZaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_zveto_3l27->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_zveto_3l27->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_zveto_3l27->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_zveto_3l->Add(new_histo_group_WZ_wh3l_MET_JetV_13TeV_zveto_3l,"");
   
   TH1D *new_histo_group_Higgs_wh3l_MET_JetV_13TeV_zveto_3l28 = new TH1D("new_histo_group_Higgs_wh3l_MET_JetV_13TeV_zveto_3l28","histo_H_htt",20,0,100);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_zveto_3l28->SetBinContent(1,0.6229593);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_zveto_3l28->SetBinContent(2,0.1245154);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_zveto_3l28->SetBinContent(3,0.05500727);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_zveto_3l28->SetBinContent(4,0.04305257);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_zveto_3l28->SetBinContent(5,0.04798927);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_zveto_3l28->SetBinContent(6,0.0668913);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_zveto_3l28->SetBinContent(7,0.04954608);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_zveto_3l28->SetBinContent(8,0.07814128);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_zveto_3l28->SetBinContent(9,0.05633584);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_zveto_3l28->SetBinContent(10,0.06320348);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_zveto_3l28->SetBinContent(11,0.04357659);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_zveto_3l28->SetBinContent(12,0.06794768);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_zveto_3l28->SetBinContent(13,0.04523574);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_zveto_3l28->SetBinContent(14,0.03078258);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_zveto_3l28->SetBinContent(15,0.0297702);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_zveto_3l28->SetBinContent(16,0.01405709);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_zveto_3l28->SetBinContent(17,0.00266919);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_zveto_3l28->SetBinContent(18,0.002708116);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_zveto_3l28->SetBinContent(19,0.03251118);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_zveto_3l28->SetBinError(1,0.02717862);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_zveto_3l28->SetBinError(2,0.01198938);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_zveto_3l28->SetBinError(3,0.007849315);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_zveto_3l28->SetBinError(4,0.006794082);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_zveto_3l28->SetBinError(5,0.007406042);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_zveto_3l28->SetBinError(6,0.008926731);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_zveto_3l28->SetBinError(7,0.006927361);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_zveto_3l28->SetBinError(8,0.009410384);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_zveto_3l28->SetBinError(9,0.007759675);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_zveto_3l28->SetBinError(10,0.00846503);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_zveto_3l28->SetBinError(11,0.007566448);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_zveto_3l28->SetBinError(12,0.009589763);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_zveto_3l28->SetBinError(13,0.007951139);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_zveto_3l28->SetBinError(14,0.006309971);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_zveto_3l28->SetBinError(15,0.006106694);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_zveto_3l28->SetBinError(16,0.003809649);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_zveto_3l28->SetBinError(17,0.001930826);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_zveto_3l28->SetBinError(18,0.001733315);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_zveto_3l28->SetBinError(19,0.006599585);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_zveto_3l28->SetEntries(2204);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_zveto_3l28->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_zveto_3l28->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_zveto_3l28->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_zveto_3l28->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_zveto_3l28->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_zveto_3l28->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_zveto_3l28->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_zveto_3l28->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_zveto_3l28->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_zveto_3l28->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_zveto_3l28->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_zveto_3l28->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_zveto_3l28->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_zveto_3l28->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_zveto_3l28->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_zveto_3l->Add(new_histo_group_Higgs_wh3l_MET_JetV_13TeV_zveto_3l,"");
   thsBackground_grouped_wh3l_MET_JetV_13TeV_zveto_3l->Draw("hist same");
   
   thsSignal_grouped_wh3l_MET_JetV_13TeV_zveto_3l = new THStack();
   thsSignal_grouped_wh3l_MET_JetV_13TeV_zveto_3l->SetName("thsSignal_grouped_wh3l_MET_JetV_13TeV_zveto_3l");
   thsSignal_grouped_wh3l_MET_JetV_13TeV_zveto_3l->SetTitle("thsSignal_grouped_wh3l_MET_JetV_13TeV_zveto_3l");
   
   TH1F *thsSignal_grouped_wh3l_MET_JetV_13TeV_zveto_3l_stack_6 = new TH1F("thsSignal_grouped_wh3l_MET_JetV_13TeV_zveto_3l_stack_6","thsSignal_grouped_wh3l_MET_JetV_13TeV_zveto_3l",20,0,100);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_zveto_3l_stack_6->SetMinimum(0);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_zveto_3l_stack_6->SetMaximum(0.6826449);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_zveto_3l_stack_6->SetDirectory(0);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_zveto_3l_stack_6->SetStats(0);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_zveto_3l_stack_6->SetLineStyle(0);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_zveto_3l_stack_6->SetMarkerStyle(20);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_zveto_3l_stack_6->GetXaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_zveto_3l_stack_6->GetXaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_zveto_3l_stack_6->GetXaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_zveto_3l_stack_6->GetXaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_zveto_3l_stack_6->GetXaxis()->SetTitleOffset(0.9);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_zveto_3l_stack_6->GetXaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_zveto_3l_stack_6->GetYaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_zveto_3l_stack_6->GetYaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_zveto_3l_stack_6->GetYaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_zveto_3l_stack_6->GetYaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_zveto_3l_stack_6->GetYaxis()->SetTitleOffset(1.25);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_zveto_3l_stack_6->GetYaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_zveto_3l_stack_6->GetZaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_zveto_3l_stack_6->GetZaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_zveto_3l_stack_6->GetZaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_zveto_3l_stack_6->GetZaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_zveto_3l_stack_6->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_zveto_3l->SetHistogram(thsSignal_grouped_wh3l_MET_JetV_13TeV_zveto_3l_stack_6);
   
   
   TH1D *new_histo_group_Higgs_wh3l_MET_JetV_13TeV_zveto_3l29 = new TH1D("new_histo_group_Higgs_wh3l_MET_JetV_13TeV_zveto_3l29","histo_H_htt",20,0,100);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_zveto_3l29->SetBinContent(1,0.6229593);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_zveto_3l29->SetBinContent(2,0.1245154);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_zveto_3l29->SetBinContent(3,0.05500727);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_zveto_3l29->SetBinContent(4,0.04305257);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_zveto_3l29->SetBinContent(5,0.04798927);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_zveto_3l29->SetBinContent(6,0.0668913);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_zveto_3l29->SetBinContent(7,0.04954608);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_zveto_3l29->SetBinContent(8,0.07814128);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_zveto_3l29->SetBinContent(9,0.05633584);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_zveto_3l29->SetBinContent(10,0.06320348);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_zveto_3l29->SetBinContent(11,0.04357659);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_zveto_3l29->SetBinContent(12,0.06794768);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_zveto_3l29->SetBinContent(13,0.04523574);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_zveto_3l29->SetBinContent(14,0.03078258);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_zveto_3l29->SetBinContent(15,0.0297702);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_zveto_3l29->SetBinContent(16,0.01405709);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_zveto_3l29->SetBinContent(17,0.00266919);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_zveto_3l29->SetBinContent(18,0.002708116);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_zveto_3l29->SetBinContent(19,0.03251118);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_zveto_3l29->SetBinError(1,0.02717862);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_zveto_3l29->SetBinError(2,0.01198938);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_zveto_3l29->SetBinError(3,0.007849315);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_zveto_3l29->SetBinError(4,0.006794082);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_zveto_3l29->SetBinError(5,0.007406042);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_zveto_3l29->SetBinError(6,0.008926731);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_zveto_3l29->SetBinError(7,0.006927361);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_zveto_3l29->SetBinError(8,0.009410384);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_zveto_3l29->SetBinError(9,0.007759675);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_zveto_3l29->SetBinError(10,0.00846503);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_zveto_3l29->SetBinError(11,0.007566448);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_zveto_3l29->SetBinError(12,0.009589763);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_zveto_3l29->SetBinError(13,0.007951139);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_zveto_3l29->SetBinError(14,0.006309971);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_zveto_3l29->SetBinError(15,0.006106694);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_zveto_3l29->SetBinError(16,0.003809649);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_zveto_3l29->SetBinError(17,0.001930826);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_zveto_3l29->SetBinError(18,0.001733315);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_zveto_3l29->SetBinError(19,0.006599585);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_zveto_3l29->SetEntries(2204);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_zveto_3l29->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_zveto_3l29->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_zveto_3l29->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_zveto_3l29->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_zveto_3l29->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_zveto_3l29->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_zveto_3l29->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_zveto_3l29->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_zveto_3l29->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_zveto_3l29->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_zveto_3l29->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_zveto_3l29->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_zveto_3l29->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_zveto_3l29->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_zveto_3l29->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_zveto_3l->Add(new_histo_group_Higgs_wh3l_MET_JetV_13TeV_zveto_3l,"");
   thsSignal_grouped_wh3l_MET_JetV_13TeV_zveto_3l->Draw("hist same noclear");
   
   Double_t _fx3005[20] = {
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
   Double_t _fy3005[20] = {
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
   2.592161,
   0};
   Double_t _felx3005[20] = {
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
   Double_t _fely3005[20] = {
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
   1.064559,
   0};
   Double_t _fehx3005[20] = {
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
   Double_t _fehy3005[20] = {
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
   1.064412,
   0};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(20,_fx3005,_fy3005,_felx3005,_fehx3005,_fely3005,_fehy3005);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(12);
   grae->SetFillStyle(3004);
   grae->SetLineColor(12);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3005 = new TH1F("Graph_Graph3005","",100,0,110);
   Graph_Graph3005->SetMinimum(-11.09612);
   Graph_Graph3005->SetMaximum(119.1626);
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
   
   Double_t _fx3006[20] = {
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
   Double_t _fy3006[20] = {
   125,
   24,
   8,
   4,
   4,
   9,
   4,
   2,
   4,
   1,
   1,
   0,
   0,
   0,
   1,
   2,
   0,
   0,
   1,
   0};
   Double_t _felx3006[20] = {
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
   Double_t _fely3006[20] = {
   11.1656,
   4.864704,
   2.768432,
   1.914367,
   1.914367,
   2.943511,
   1.914367,
   1.29183,
   1.914367,
   0.8272524,
   0.8272524,
   0,
   0,
   0,
   0.8272524,
   1.29183,
   0,
   0,
   0.8272524,
   0};
   Double_t _fehx3006[20] = {
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
   Double_t _fehy3006[20] = {
   12.21044,
   5.967054,
   3.94522,
   3.162815,
   3.162815,
   4.110286,
   3.162815,
   2.63791,
   3.162815,
   2.29957,
   2.29957,
   1.147908,
   1.147908,
   1.147908,
   2.29957,
   2.63791,
   1.147908,
   1.147908,
   2.29957,
   1.147908};
   grae = new TGraphAsymmErrors(20,_fx3006,_fy3006,_felx3006,_fehx3006,_fely3006,_fehy3006);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(1);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3006 = new TH1F("Graph_Graph3006","",100,0,110);
   Graph_Graph3006->SetMinimum(0);
   Graph_Graph3006->SetMaximum(150.9315);
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
   
   TH1F *hframe_copy30 = new TH1F("hframe_copy30","",1000,0,100);
   hframe_copy30->SetMinimum(0);
   hframe_copy30->SetMaximum(340.4508);
   hframe_copy30->SetDirectory(0);
   hframe_copy30->SetStats(0);
   hframe_copy30->SetLineStyle(0);
   hframe_copy30->SetMarkerStyle(20);
   hframe_copy30->GetXaxis()->SetTitle("m_{ll} - M_{Z} [GeV]");
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
   ccwh3l_MET_JetV_13TeV_zveto_3l->Modified();
   ccwh3l_MET_JetV_13TeV_zveto_3l->cd();
   ccwh3l_MET_JetV_13TeV_zveto_3l->SetSelected(ccwh3l_MET_JetV_13TeV_zveto_3l);
}
