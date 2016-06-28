void c_wh3l_plot_13TeV_zveto_3l()
{
//=========Macro generated from canvas: ccwh3l_plot_13TeV_zveto_3l/cc
//=========  (Tue Jun 28 13:56:27 2016) by ROOT version6.02/13
   TCanvas *ccwh3l_plot_13TeV_zveto_3l = new TCanvas("ccwh3l_plot_13TeV_zveto_3l", "cc",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   ccwh3l_plot_13TeV_zveto_3l->SetHighLightColor(2);
   ccwh3l_plot_13TeV_zveto_3l->Range(-20,-41.37969,105,276.9257);
   ccwh3l_plot_13TeV_zveto_3l->SetFillColor(0);
   ccwh3l_plot_13TeV_zveto_3l->SetBorderMode(0);
   ccwh3l_plot_13TeV_zveto_3l->SetBorderSize(2);
   ccwh3l_plot_13TeV_zveto_3l->SetTickx(1);
   ccwh3l_plot_13TeV_zveto_3l->SetTicky(1);
   ccwh3l_plot_13TeV_zveto_3l->SetLeftMargin(0.16);
   ccwh3l_plot_13TeV_zveto_3l->SetRightMargin(0.04);
   ccwh3l_plot_13TeV_zveto_3l->SetTopMargin(0.05);
   ccwh3l_plot_13TeV_zveto_3l->SetBottomMargin(0.13);
   ccwh3l_plot_13TeV_zveto_3l->SetFrameFillStyle(0);
   ccwh3l_plot_13TeV_zveto_3l->SetFrameBorderMode(0);
   ccwh3l_plot_13TeV_zveto_3l->SetFrameFillStyle(0);
   ccwh3l_plot_13TeV_zveto_3l->SetFrameBorderMode(0);
   
   TH1F *hframe281 = new TH1F("hframe281","",1000,0,100);
   hframe281->SetMinimum(0);
   hframe281->SetMaximum(261.0104);
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
   
   THStack *thsBackground_grouped_wh3l_plot_13TeV_zveto_3l = new THStack();
   thsBackground_grouped_wh3l_plot_13TeV_zveto_3l->SetName("thsBackground_grouped_wh3l_plot_13TeV_zveto_3l");
   thsBackground_grouped_wh3l_plot_13TeV_zveto_3l->SetTitle("thsBackground_grouped_wh3l_plot_13TeV_zveto_3l");
   
   TH1F *thsBackground_grouped_wh3l_plot_13TeV_zveto_3l_stack_57 = new TH1F("thsBackground_grouped_wh3l_plot_13TeV_zveto_3l_stack_57","thsBackground_grouped_wh3l_plot_13TeV_zveto_3l",20,0,100);
   thsBackground_grouped_wh3l_plot_13TeV_zveto_3l_stack_57->SetMinimum(-0.6592924);
   thsBackground_grouped_wh3l_plot_13TeV_zveto_3l_stack_57->SetMaximum(109.6244);
   thsBackground_grouped_wh3l_plot_13TeV_zveto_3l_stack_57->SetDirectory(0);
   thsBackground_grouped_wh3l_plot_13TeV_zveto_3l_stack_57->SetStats(0);
   thsBackground_grouped_wh3l_plot_13TeV_zveto_3l_stack_57->SetLineStyle(0);
   thsBackground_grouped_wh3l_plot_13TeV_zveto_3l_stack_57->SetMarkerStyle(20);
   thsBackground_grouped_wh3l_plot_13TeV_zveto_3l_stack_57->GetXaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_plot_13TeV_zveto_3l_stack_57->GetXaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_plot_13TeV_zveto_3l_stack_57->GetXaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_plot_13TeV_zveto_3l_stack_57->GetXaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_plot_13TeV_zveto_3l_stack_57->GetXaxis()->SetTitleOffset(0.9);
   thsBackground_grouped_wh3l_plot_13TeV_zveto_3l_stack_57->GetXaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_plot_13TeV_zveto_3l_stack_57->GetYaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_plot_13TeV_zveto_3l_stack_57->GetYaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_plot_13TeV_zveto_3l_stack_57->GetYaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_plot_13TeV_zveto_3l_stack_57->GetYaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_plot_13TeV_zveto_3l_stack_57->GetYaxis()->SetTitleOffset(1.25);
   thsBackground_grouped_wh3l_plot_13TeV_zveto_3l_stack_57->GetYaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_plot_13TeV_zveto_3l_stack_57->GetZaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_plot_13TeV_zveto_3l_stack_57->GetZaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_plot_13TeV_zveto_3l_stack_57->GetZaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_plot_13TeV_zveto_3l_stack_57->GetZaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_plot_13TeV_zveto_3l_stack_57->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_plot_13TeV_zveto_3l->SetHistogram(thsBackground_grouped_wh3l_plot_13TeV_zveto_3l_stack_57);
   
   
   TH1D *new_histo_group_Fake_wh3l_plot_13TeV_zveto_3l282 = new TH1D("new_histo_group_Fake_wh3l_plot_13TeV_zveto_3l282","histo_Fake",20,0,100);
   new_histo_group_Fake_wh3l_plot_13TeV_zveto_3l282->SetBinContent(1,7.602749);
   new_histo_group_Fake_wh3l_plot_13TeV_zveto_3l282->SetBinContent(2,0.3812846);
   new_histo_group_Fake_wh3l_plot_13TeV_zveto_3l282->SetBinContent(3,2.102353);
   new_histo_group_Fake_wh3l_plot_13TeV_zveto_3l282->SetBinContent(4,0.6579952);
   new_histo_group_Fake_wh3l_plot_13TeV_zveto_3l282->SetBinContent(5,-0.1936938);
   new_histo_group_Fake_wh3l_plot_13TeV_zveto_3l282->SetBinContent(6,0.404296);
   new_histo_group_Fake_wh3l_plot_13TeV_zveto_3l282->SetBinContent(7,0.584341);
   new_histo_group_Fake_wh3l_plot_13TeV_zveto_3l282->SetBinContent(8,0.9469511);
   new_histo_group_Fake_wh3l_plot_13TeV_zveto_3l282->SetBinContent(9,0.7650418);
   new_histo_group_Fake_wh3l_plot_13TeV_zveto_3l282->SetBinContent(10,0.7963334);
   new_histo_group_Fake_wh3l_plot_13TeV_zveto_3l282->SetBinContent(11,1.023662);
   new_histo_group_Fake_wh3l_plot_13TeV_zveto_3l282->SetBinContent(12,0.5852319);
   new_histo_group_Fake_wh3l_plot_13TeV_zveto_3l282->SetBinContent(13,0.324549);
   new_histo_group_Fake_wh3l_plot_13TeV_zveto_3l282->SetBinContent(14,1.323319);
   new_histo_group_Fake_wh3l_plot_13TeV_zveto_3l282->SetBinContent(16,-0.3071204);
   new_histo_group_Fake_wh3l_plot_13TeV_zveto_3l282->SetBinContent(17,0.01024054);
   new_histo_group_Fake_wh3l_plot_13TeV_zveto_3l282->SetBinContent(19,4.137712);
   new_histo_group_Fake_wh3l_plot_13TeV_zveto_3l282->SetBinError(1,2.872935);
   new_histo_group_Fake_wh3l_plot_13TeV_zveto_3l282->SetBinError(2,1.001575);
   new_histo_group_Fake_wh3l_plot_13TeV_zveto_3l282->SetBinError(3,1.078301);
   new_histo_group_Fake_wh3l_plot_13TeV_zveto_3l282->SetBinError(4,0.6609701);
   new_histo_group_Fake_wh3l_plot_13TeV_zveto_3l282->SetBinError(5,0.4655986);
   new_histo_group_Fake_wh3l_plot_13TeV_zveto_3l282->SetBinError(6,0.8801949);
   new_histo_group_Fake_wh3l_plot_13TeV_zveto_3l282->SetBinError(7,0.4000869);
   new_histo_group_Fake_wh3l_plot_13TeV_zveto_3l282->SetBinError(8,0.7365228);
   new_histo_group_Fake_wh3l_plot_13TeV_zveto_3l282->SetBinError(9,0.8314785);
   new_histo_group_Fake_wh3l_plot_13TeV_zveto_3l282->SetBinError(10,0.7976046);
   new_histo_group_Fake_wh3l_plot_13TeV_zveto_3l282->SetBinError(11,0.8570452);
   new_histo_group_Fake_wh3l_plot_13TeV_zveto_3l282->SetBinError(12,0.4529688);
   new_histo_group_Fake_wh3l_plot_13TeV_zveto_3l282->SetBinError(13,0.4013769);
   new_histo_group_Fake_wh3l_plot_13TeV_zveto_3l282->SetBinError(14,0.7960512);
   new_histo_group_Fake_wh3l_plot_13TeV_zveto_3l282->SetBinError(16,0.283307);
   new_histo_group_Fake_wh3l_plot_13TeV_zveto_3l282->SetBinError(17,0.01024054);
   new_histo_group_Fake_wh3l_plot_13TeV_zveto_3l282->SetBinError(19,1.512693);
   new_histo_group_Fake_wh3l_plot_13TeV_zveto_3l282->SetEntries(455);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_plot_13TeV_zveto_3l282->SetFillColor(ci);
   new_histo_group_Fake_wh3l_plot_13TeV_zveto_3l282->SetFillStyle(3001);

   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_plot_13TeV_zveto_3l282->SetLineColor(ci);
   new_histo_group_Fake_wh3l_plot_13TeV_zveto_3l282->GetXaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_plot_13TeV_zveto_3l282->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_plot_13TeV_zveto_3l282->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_plot_13TeV_zveto_3l282->GetXaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_plot_13TeV_zveto_3l282->GetYaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_plot_13TeV_zveto_3l282->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_plot_13TeV_zveto_3l282->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_plot_13TeV_zveto_3l282->GetYaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_plot_13TeV_zveto_3l282->GetZaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_plot_13TeV_zveto_3l282->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_plot_13TeV_zveto_3l282->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_plot_13TeV_zveto_3l282->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_plot_13TeV_zveto_3l->Add(new_histo_group_Fake_wh3l_plot_13TeV_zveto_3l,"");
   
   TH1D *new_histo_group_WW_wh3l_plot_13TeV_zveto_3l283 = new TH1D("new_histo_group_WW_wh3l_plot_13TeV_zveto_3l283","histo_WW",20,0,100);
   new_histo_group_WW_wh3l_plot_13TeV_zveto_3l283->SetBinContent(1,0.04987764);
   new_histo_group_WW_wh3l_plot_13TeV_zveto_3l283->SetBinContent(5,0.02551711);
   new_histo_group_WW_wh3l_plot_13TeV_zveto_3l283->SetBinContent(7,0.0142084);
   new_histo_group_WW_wh3l_plot_13TeV_zveto_3l283->SetBinContent(10,0.01044191);
   new_histo_group_WW_wh3l_plot_13TeV_zveto_3l283->SetBinContent(11,0.01814939);
   new_histo_group_WW_wh3l_plot_13TeV_zveto_3l283->SetBinContent(12,0.01530373);
   new_histo_group_WW_wh3l_plot_13TeV_zveto_3l283->SetBinContent(19,0.03059851);
   new_histo_group_WW_wh3l_plot_13TeV_zveto_3l283->SetBinError(1,0.02894052);
   new_histo_group_WW_wh3l_plot_13TeV_zveto_3l283->SetBinError(5,0.01822775);
   new_histo_group_WW_wh3l_plot_13TeV_zveto_3l283->SetBinError(7,0.0142084);
   new_histo_group_WW_wh3l_plot_13TeV_zveto_3l283->SetBinError(10,0.01044191);
   new_histo_group_WW_wh3l_plot_13TeV_zveto_3l283->SetBinError(11,0.01814939);
   new_histo_group_WW_wh3l_plot_13TeV_zveto_3l283->SetBinError(12,0.01530373);
   new_histo_group_WW_wh3l_plot_13TeV_zveto_3l283->SetBinError(19,0.02166783);
   new_histo_group_WW_wh3l_plot_13TeV_zveto_3l283->SetEntries(11);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_plot_13TeV_zveto_3l283->SetFillColor(ci);
   new_histo_group_WW_wh3l_plot_13TeV_zveto_3l283->SetFillStyle(3001);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_plot_13TeV_zveto_3l283->SetLineColor(ci);
   new_histo_group_WW_wh3l_plot_13TeV_zveto_3l283->GetXaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_plot_13TeV_zveto_3l283->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_plot_13TeV_zveto_3l283->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_plot_13TeV_zveto_3l283->GetXaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_plot_13TeV_zveto_3l283->GetYaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_plot_13TeV_zveto_3l283->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_plot_13TeV_zveto_3l283->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_plot_13TeV_zveto_3l283->GetYaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_plot_13TeV_zveto_3l283->GetZaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_plot_13TeV_zveto_3l283->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_plot_13TeV_zveto_3l283->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_plot_13TeV_zveto_3l283->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_plot_13TeV_zveto_3l->Add(new_histo_group_WW_wh3l_plot_13TeV_zveto_3l,"");
   
   TH1D *new_histo_group_VVV_wh3l_plot_13TeV_zveto_3l284 = new TH1D("new_histo_group_VVV_wh3l_plot_13TeV_zveto_3l284","histo_VVV",20,0,100);
   new_histo_group_VVV_wh3l_plot_13TeV_zveto_3l284->SetBinContent(1,0.1375984);
   new_histo_group_VVV_wh3l_plot_13TeV_zveto_3l284->SetBinContent(2,0.01779733);
   new_histo_group_VVV_wh3l_plot_13TeV_zveto_3l284->SetBinContent(3,0.003370924);
   new_histo_group_VVV_wh3l_plot_13TeV_zveto_3l284->SetBinContent(4,0.003084539);
   new_histo_group_VVV_wh3l_plot_13TeV_zveto_3l284->SetBinContent(5,0.0006553935);
   new_histo_group_VVV_wh3l_plot_13TeV_zveto_3l284->SetBinContent(6,0.001278693);
   new_histo_group_VVV_wh3l_plot_13TeV_zveto_3l284->SetBinContent(7,0.002470527);
   new_histo_group_VVV_wh3l_plot_13TeV_zveto_3l284->SetBinContent(8,0.001810379);
   new_histo_group_VVV_wh3l_plot_13TeV_zveto_3l284->SetBinContent(9,0.001525599);
   new_histo_group_VVV_wh3l_plot_13TeV_zveto_3l284->SetBinContent(10,0.0002902478);
   new_histo_group_VVV_wh3l_plot_13TeV_zveto_3l284->SetBinContent(11,0.0005113052);
   new_histo_group_VVV_wh3l_plot_13TeV_zveto_3l284->SetBinContent(12,0.0006380157);
   new_histo_group_VVV_wh3l_plot_13TeV_zveto_3l284->SetBinContent(14,0.0004196011);
   new_histo_group_VVV_wh3l_plot_13TeV_zveto_3l284->SetBinContent(19,0.004576297);
   new_histo_group_VVV_wh3l_plot_13TeV_zveto_3l284->SetBinError(1,0.009877051);
   new_histo_group_VVV_wh3l_plot_13TeV_zveto_3l284->SetBinError(2,0.003573432);
   new_histo_group_VVV_wh3l_plot_13TeV_zveto_3l284->SetBinError(3,0.001362447);
   new_histo_group_VVV_wh3l_plot_13TeV_zveto_3l284->SetBinError(4,0.001558556);
   new_histo_group_VVV_wh3l_plot_13TeV_zveto_3l284->SetBinError(5,0.0006553935);
   new_histo_group_VVV_wh3l_plot_13TeV_zveto_3l284->SetBinError(6,0.0009044022);
   new_histo_group_VVV_wh3l_plot_13TeV_zveto_3l284->SetBinError(7,0.001240684);
   new_histo_group_VVV_wh3l_plot_13TeV_zveto_3l284->SetBinError(8,0.001048971);
   new_histo_group_VVV_wh3l_plot_13TeV_zveto_3l284->SetBinError(9,0.0009554437);
   new_histo_group_VVV_wh3l_plot_13TeV_zveto_3l284->SetBinError(10,0.0002902478);
   new_histo_group_VVV_wh3l_plot_13TeV_zveto_3l284->SetBinError(11,0.0005113052);
   new_histo_group_VVV_wh3l_plot_13TeV_zveto_3l284->SetBinError(12,0.0006380157);
   new_histo_group_VVV_wh3l_plot_13TeV_zveto_3l284->SetBinError(14,0.0004196011);
   new_histo_group_VVV_wh3l_plot_13TeV_zveto_3l284->SetBinError(19,0.001638661);
   new_histo_group_VVV_wh3l_plot_13TeV_zveto_3l284->SetEntries(351);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_plot_13TeV_zveto_3l284->SetFillColor(ci);
   new_histo_group_VVV_wh3l_plot_13TeV_zveto_3l284->SetFillStyle(3001);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_plot_13TeV_zveto_3l284->SetLineColor(ci);
   new_histo_group_VVV_wh3l_plot_13TeV_zveto_3l284->GetXaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_plot_13TeV_zveto_3l284->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_plot_13TeV_zveto_3l284->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_plot_13TeV_zveto_3l284->GetXaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_plot_13TeV_zveto_3l284->GetYaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_plot_13TeV_zveto_3l284->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_plot_13TeV_zveto_3l284->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_plot_13TeV_zveto_3l284->GetYaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_plot_13TeV_zveto_3l284->GetZaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_plot_13TeV_zveto_3l284->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_plot_13TeV_zveto_3l284->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_plot_13TeV_zveto_3l284->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_plot_13TeV_zveto_3l->Add(new_histo_group_VVV_wh3l_plot_13TeV_zveto_3l,"");
   
   TH1D *new_histo_group_Vg_wh3l_plot_13TeV_zveto_3l285 = new TH1D("new_histo_group_Vg_wh3l_plot_13TeV_zveto_3l285","histo_Vg",20,0,100);
   new_histo_group_Vg_wh3l_plot_13TeV_zveto_3l285->SetBinContent(1,1.585114);
   new_histo_group_Vg_wh3l_plot_13TeV_zveto_3l285->SetBinContent(2,0.3848401);
   new_histo_group_Vg_wh3l_plot_13TeV_zveto_3l285->SetBinContent(3,0.5328983);
   new_histo_group_Vg_wh3l_plot_13TeV_zveto_3l285->SetBinContent(4,1.096138);
   new_histo_group_Vg_wh3l_plot_13TeV_zveto_3l285->SetBinContent(5,1.41424);
   new_histo_group_Vg_wh3l_plot_13TeV_zveto_3l285->SetBinContent(6,1.1435);
   new_histo_group_Vg_wh3l_plot_13TeV_zveto_3l285->SetBinContent(7,0.4463941);
   new_histo_group_Vg_wh3l_plot_13TeV_zveto_3l285->SetBinContent(8,0.4470873);
   new_histo_group_Vg_wh3l_plot_13TeV_zveto_3l285->SetBinContent(9,0.1587635);
   new_histo_group_Vg_wh3l_plot_13TeV_zveto_3l285->SetBinContent(10,0.3358528);
   new_histo_group_Vg_wh3l_plot_13TeV_zveto_3l285->SetBinContent(11,0.09040196);
   new_histo_group_Vg_wh3l_plot_13TeV_zveto_3l285->SetBinContent(12,0.02616973);
   new_histo_group_Vg_wh3l_plot_13TeV_zveto_3l285->SetBinContent(19,0.1058488);
   new_histo_group_Vg_wh3l_plot_13TeV_zveto_3l285->SetBinError(1,0.4777896);
   new_histo_group_Vg_wh3l_plot_13TeV_zveto_3l285->SetBinError(2,0.2228427);
   new_histo_group_Vg_wh3l_plot_13TeV_zveto_3l285->SetBinError(3,0.23687);
   new_histo_group_Vg_wh3l_plot_13TeV_zveto_3l285->SetBinError(4,0.3478079);
   new_histo_group_Vg_wh3l_plot_13TeV_zveto_3l285->SetBinError(5,0.41864);
   new_histo_group_Vg_wh3l_plot_13TeV_zveto_3l285->SetBinError(6,0.3385764);
   new_histo_group_Vg_wh3l_plot_13TeV_zveto_3l285->SetBinError(7,0.2373782);
   new_histo_group_Vg_wh3l_plot_13TeV_zveto_3l285->SetBinError(8,0.2664949);
   new_histo_group_Vg_wh3l_plot_13TeV_zveto_3l285->SetBinError(9,0.1191798);
   new_histo_group_Vg_wh3l_plot_13TeV_zveto_3l285->SetBinError(10,0.1724543);
   new_histo_group_Vg_wh3l_plot_13TeV_zveto_3l285->SetBinError(11,0.1957691);
   new_histo_group_Vg_wh3l_plot_13TeV_zveto_3l285->SetBinError(12,0.02616973);
   new_histo_group_Vg_wh3l_plot_13TeV_zveto_3l285->SetBinError(19,0.1058488);
   new_histo_group_Vg_wh3l_plot_13TeV_zveto_3l285->SetEntries(107);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_plot_13TeV_zveto_3l285->SetFillColor(ci);
   new_histo_group_Vg_wh3l_plot_13TeV_zveto_3l285->SetFillStyle(3001);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_plot_13TeV_zveto_3l285->SetLineColor(ci);
   new_histo_group_Vg_wh3l_plot_13TeV_zveto_3l285->GetXaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_plot_13TeV_zveto_3l285->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_plot_13TeV_zveto_3l285->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_plot_13TeV_zveto_3l285->GetXaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_plot_13TeV_zveto_3l285->GetYaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_plot_13TeV_zveto_3l285->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_plot_13TeV_zveto_3l285->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_plot_13TeV_zveto_3l285->GetYaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_plot_13TeV_zveto_3l285->GetZaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_plot_13TeV_zveto_3l285->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_plot_13TeV_zveto_3l285->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_plot_13TeV_zveto_3l285->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_plot_13TeV_zveto_3l->Add(new_histo_group_Vg_wh3l_plot_13TeV_zveto_3l,"");
   
   TH1D *new_histo_group_ZZ_wh3l_plot_13TeV_zveto_3l286 = new TH1D("new_histo_group_ZZ_wh3l_plot_13TeV_zveto_3l286","histo_ZZ",20,0,100);
   new_histo_group_ZZ_wh3l_plot_13TeV_zveto_3l286->SetBinContent(1,6.558539);
   new_histo_group_ZZ_wh3l_plot_13TeV_zveto_3l286->SetBinContent(2,1.19177);
   new_histo_group_ZZ_wh3l_plot_13TeV_zveto_3l286->SetBinContent(3,0.4122734);
   new_histo_group_ZZ_wh3l_plot_13TeV_zveto_3l286->SetBinContent(4,0.09885735);
   new_histo_group_ZZ_wh3l_plot_13TeV_zveto_3l286->SetBinContent(5,0.06931598);
   new_histo_group_ZZ_wh3l_plot_13TeV_zveto_3l286->SetBinContent(6,0.09825219);
   new_histo_group_ZZ_wh3l_plot_13TeV_zveto_3l286->SetBinContent(7,0.1233438);
   new_histo_group_ZZ_wh3l_plot_13TeV_zveto_3l286->SetBinContent(8,0.03939452);
   new_histo_group_ZZ_wh3l_plot_13TeV_zveto_3l286->SetBinContent(9,0.02976017);
   new_histo_group_ZZ_wh3l_plot_13TeV_zveto_3l286->SetBinContent(11,0.0704998);
   new_histo_group_ZZ_wh3l_plot_13TeV_zveto_3l286->SetBinContent(12,0.02640386);
   new_histo_group_ZZ_wh3l_plot_13TeV_zveto_3l286->SetBinContent(13,0.1149379);
   new_histo_group_ZZ_wh3l_plot_13TeV_zveto_3l286->SetBinContent(19,0.1440144);
   new_histo_group_ZZ_wh3l_plot_13TeV_zveto_3l286->SetBinError(1,0.51827);
   new_histo_group_ZZ_wh3l_plot_13TeV_zveto_3l286->SetBinError(2,0.2176818);
   new_histo_group_ZZ_wh3l_plot_13TeV_zveto_3l286->SetBinError(3,0.1522521);
   new_histo_group_ZZ_wh3l_plot_13TeV_zveto_3l286->SetBinError(4,0.05932658);
   new_histo_group_ZZ_wh3l_plot_13TeV_zveto_3l286->SetBinError(5,0.05004546);
   new_histo_group_ZZ_wh3l_plot_13TeV_zveto_3l286->SetBinError(6,0.06125685);
   new_histo_group_ZZ_wh3l_plot_13TeV_zveto_3l286->SetBinError(7,0.07337062);
   new_histo_group_ZZ_wh3l_plot_13TeV_zveto_3l286->SetBinError(8,0.03939452);
   new_histo_group_ZZ_wh3l_plot_13TeV_zveto_3l286->SetBinError(9,0.02976016);
   new_histo_group_ZZ_wh3l_plot_13TeV_zveto_3l286->SetBinError(11,0.05074004);
   new_histo_group_ZZ_wh3l_plot_13TeV_zveto_3l286->SetBinError(12,0.02640386);
   new_histo_group_ZZ_wh3l_plot_13TeV_zveto_3l286->SetBinError(13,0.06828736);
   new_histo_group_ZZ_wh3l_plot_13TeV_zveto_3l286->SetBinError(19,0.07446725);
   new_histo_group_ZZ_wh3l_plot_13TeV_zveto_3l286->SetEntries(250);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_plot_13TeV_zveto_3l286->SetFillColor(ci);
   new_histo_group_ZZ_wh3l_plot_13TeV_zveto_3l286->SetFillStyle(3001);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_plot_13TeV_zveto_3l286->SetLineColor(ci);
   new_histo_group_ZZ_wh3l_plot_13TeV_zveto_3l286->GetXaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_plot_13TeV_zveto_3l286->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_plot_13TeV_zveto_3l286->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_plot_13TeV_zveto_3l286->GetXaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_plot_13TeV_zveto_3l286->GetYaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_plot_13TeV_zveto_3l286->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_plot_13TeV_zveto_3l286->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_plot_13TeV_zveto_3l286->GetYaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_plot_13TeV_zveto_3l286->GetZaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_plot_13TeV_zveto_3l286->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_plot_13TeV_zveto_3l286->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_plot_13TeV_zveto_3l286->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_plot_13TeV_zveto_3l->Add(new_histo_group_ZZ_wh3l_plot_13TeV_zveto_3l,"");
   
   TH1D *new_histo_group_WZ_wh3l_plot_13TeV_zveto_3l287 = new TH1D("new_histo_group_WZ_wh3l_plot_13TeV_zveto_3l287","histo_WZ",20,0,100);
   new_histo_group_WZ_wh3l_plot_13TeV_zveto_3l287->SetBinContent(1,87.73872);
   new_histo_group_WZ_wh3l_plot_13TeV_zveto_3l287->SetBinContent(2,12.72651);
   new_histo_group_WZ_wh3l_plot_13TeV_zveto_3l287->SetBinContent(3,4.300044);
   new_histo_group_WZ_wh3l_plot_13TeV_zveto_3l287->SetBinContent(4,2.233008);
   new_histo_group_WZ_wh3l_plot_13TeV_zveto_3l287->SetBinContent(5,1.639302);
   new_histo_group_WZ_wh3l_plot_13TeV_zveto_3l287->SetBinContent(6,1.167796);
   new_histo_group_WZ_wh3l_plot_13TeV_zveto_3l287->SetBinContent(7,0.9791938);
   new_histo_group_WZ_wh3l_plot_13TeV_zveto_3l287->SetBinContent(8,0.8952803);
   new_histo_group_WZ_wh3l_plot_13TeV_zveto_3l287->SetBinContent(9,0.8430293);
   new_histo_group_WZ_wh3l_plot_13TeV_zveto_3l287->SetBinContent(10,0.7337703);
   new_histo_group_WZ_wh3l_plot_13TeV_zveto_3l287->SetBinContent(11,0.6508047);
   new_histo_group_WZ_wh3l_plot_13TeV_zveto_3l287->SetBinContent(12,0.5739258);
   new_histo_group_WZ_wh3l_plot_13TeV_zveto_3l287->SetBinContent(13,0.5461557);
   new_histo_group_WZ_wh3l_plot_13TeV_zveto_3l287->SetBinContent(14,0.4270278);
   new_histo_group_WZ_wh3l_plot_13TeV_zveto_3l287->SetBinContent(15,0.4293013);
   new_histo_group_WZ_wh3l_plot_13TeV_zveto_3l287->SetBinContent(16,0.4128241);
   new_histo_group_WZ_wh3l_plot_13TeV_zveto_3l287->SetBinContent(17,0.03667358);
   new_histo_group_WZ_wh3l_plot_13TeV_zveto_3l287->SetBinContent(18,0.05979598);
   new_histo_group_WZ_wh3l_plot_13TeV_zveto_3l287->SetBinContent(19,1.720898);
   new_histo_group_WZ_wh3l_plot_13TeV_zveto_3l287->SetBinError(1,0.6909653);
   new_histo_group_WZ_wh3l_plot_13TeV_zveto_3l287->SetBinError(2,0.2627317);
   new_histo_group_WZ_wh3l_plot_13TeV_zveto_3l287->SetBinError(3,0.1523238);
   new_histo_group_WZ_wh3l_plot_13TeV_zveto_3l287->SetBinError(4,0.1090673);
   new_histo_group_WZ_wh3l_plot_13TeV_zveto_3l287->SetBinError(5,0.09485665);
   new_histo_group_WZ_wh3l_plot_13TeV_zveto_3l287->SetBinError(6,0.07931164);
   new_histo_group_WZ_wh3l_plot_13TeV_zveto_3l287->SetBinError(7,0.07296996);
   new_histo_group_WZ_wh3l_plot_13TeV_zveto_3l287->SetBinError(8,0.07027891);
   new_histo_group_WZ_wh3l_plot_13TeV_zveto_3l287->SetBinError(9,0.06730616);
   new_histo_group_WZ_wh3l_plot_13TeV_zveto_3l287->SetBinError(10,0.06424746);
   new_histo_group_WZ_wh3l_plot_13TeV_zveto_3l287->SetBinError(11,0.05932829);
   new_histo_group_WZ_wh3l_plot_13TeV_zveto_3l287->SetBinError(12,0.05567756);
   new_histo_group_WZ_wh3l_plot_13TeV_zveto_3l287->SetBinError(13,0.05447657);
   new_histo_group_WZ_wh3l_plot_13TeV_zveto_3l287->SetBinError(14,0.04748225);
   new_histo_group_WZ_wh3l_plot_13TeV_zveto_3l287->SetBinError(15,0.0485523);
   new_histo_group_WZ_wh3l_plot_13TeV_zveto_3l287->SetBinError(16,0.04700815);
   new_histo_group_WZ_wh3l_plot_13TeV_zveto_3l287->SetBinError(17,0.01424065);
   new_histo_group_WZ_wh3l_plot_13TeV_zveto_3l287->SetBinError(18,0.01763162);
   new_histo_group_WZ_wh3l_plot_13TeV_zveto_3l287->SetBinError(19,0.09631729);
   new_histo_group_WZ_wh3l_plot_13TeV_zveto_3l287->SetEntries(24096);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_plot_13TeV_zveto_3l287->SetFillColor(ci);
   new_histo_group_WZ_wh3l_plot_13TeV_zveto_3l287->SetFillStyle(3001);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_plot_13TeV_zveto_3l287->SetLineColor(ci);
   new_histo_group_WZ_wh3l_plot_13TeV_zveto_3l287->GetXaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_plot_13TeV_zveto_3l287->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_plot_13TeV_zveto_3l287->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_plot_13TeV_zveto_3l287->GetXaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_plot_13TeV_zveto_3l287->GetYaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_plot_13TeV_zveto_3l287->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_plot_13TeV_zveto_3l287->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_plot_13TeV_zveto_3l287->GetYaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_plot_13TeV_zveto_3l287->GetZaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_plot_13TeV_zveto_3l287->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_plot_13TeV_zveto_3l287->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_plot_13TeV_zveto_3l287->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_plot_13TeV_zveto_3l->Add(new_histo_group_WZ_wh3l_plot_13TeV_zveto_3l,"");
   
   TH1D *new_histo_group_Higgs_wh3l_plot_13TeV_zveto_3l288 = new TH1D("new_histo_group_Higgs_wh3l_plot_13TeV_zveto_3l288","histo_H_htt",20,0,100);
   new_histo_group_Higgs_wh3l_plot_13TeV_zveto_3l288->SetBinContent(1,0.7315597);
   new_histo_group_Higgs_wh3l_plot_13TeV_zveto_3l288->SetBinContent(2,0.1397004);
   new_histo_group_Higgs_wh3l_plot_13TeV_zveto_3l288->SetBinContent(3,0.06317233);
   new_histo_group_Higgs_wh3l_plot_13TeV_zveto_3l288->SetBinContent(4,0.04400988);
   new_histo_group_Higgs_wh3l_plot_13TeV_zveto_3l288->SetBinContent(5,0.05191052);
   new_histo_group_Higgs_wh3l_plot_13TeV_zveto_3l288->SetBinContent(6,0.06899975);
   new_histo_group_Higgs_wh3l_plot_13TeV_zveto_3l288->SetBinContent(7,0.05099779);
   new_histo_group_Higgs_wh3l_plot_13TeV_zveto_3l288->SetBinContent(8,0.07983971);
   new_histo_group_Higgs_wh3l_plot_13TeV_zveto_3l288->SetBinContent(9,0.05763549);
   new_histo_group_Higgs_wh3l_plot_13TeV_zveto_3l288->SetBinContent(10,0.0633468);
   new_histo_group_Higgs_wh3l_plot_13TeV_zveto_3l288->SetBinContent(11,0.0439497);
   new_histo_group_Higgs_wh3l_plot_13TeV_zveto_3l288->SetBinContent(12,0.07135419);
   new_histo_group_Higgs_wh3l_plot_13TeV_zveto_3l288->SetBinContent(13,0.04780221);
   new_histo_group_Higgs_wh3l_plot_13TeV_zveto_3l288->SetBinContent(14,0.03099094);
   new_histo_group_Higgs_wh3l_plot_13TeV_zveto_3l288->SetBinContent(15,0.03079793);
   new_histo_group_Higgs_wh3l_plot_13TeV_zveto_3l288->SetBinContent(16,0.01593661);
   new_histo_group_Higgs_wh3l_plot_13TeV_zveto_3l288->SetBinContent(17,0.00266919);
   new_histo_group_Higgs_wh3l_plot_13TeV_zveto_3l288->SetBinContent(18,0.002708116);
   new_histo_group_Higgs_wh3l_plot_13TeV_zveto_3l288->SetBinContent(19,0.2744313);
   new_histo_group_Higgs_wh3l_plot_13TeV_zveto_3l288->SetBinError(1,0.02949981);
   new_histo_group_Higgs_wh3l_plot_13TeV_zveto_3l288->SetBinError(2,0.01264783);
   new_histo_group_Higgs_wh3l_plot_13TeV_zveto_3l288->SetBinError(3,0.00840495);
   new_histo_group_Higgs_wh3l_plot_13TeV_zveto_3l288->SetBinError(4,0.006827722);
   new_histo_group_Higgs_wh3l_plot_13TeV_zveto_3l288->SetBinError(5,0.007651601);
   new_histo_group_Higgs_wh3l_plot_13TeV_zveto_3l288->SetBinError(6,0.009105933);
   new_histo_group_Higgs_wh3l_plot_13TeV_zveto_3l288->SetBinError(7,0.007077838);
   new_histo_group_Higgs_wh3l_plot_13TeV_zveto_3l288->SetBinError(8,0.009468989);
   new_histo_group_Higgs_wh3l_plot_13TeV_zveto_3l288->SetBinError(9,0.007803731);
   new_histo_group_Higgs_wh3l_plot_13TeV_zveto_3l288->SetBinError(10,0.008466243);
   new_histo_group_Higgs_wh3l_plot_13TeV_zveto_3l288->SetBinError(11,0.007575641);
   new_histo_group_Higgs_wh3l_plot_13TeV_zveto_3l288->SetBinError(12,0.009778967);
   new_histo_group_Higgs_wh3l_plot_13TeV_zveto_3l288->SetBinError(13,0.008130459);
   new_histo_group_Higgs_wh3l_plot_13TeV_zveto_3l288->SetBinError(14,0.00631341);
   new_histo_group_Higgs_wh3l_plot_13TeV_zveto_3l288->SetBinError(15,0.006142341);
   new_histo_group_Higgs_wh3l_plot_13TeV_zveto_3l288->SetBinError(16,0.004137944);
   new_histo_group_Higgs_wh3l_plot_13TeV_zveto_3l288->SetBinError(17,0.001930826);
   new_histo_group_Higgs_wh3l_plot_13TeV_zveto_3l288->SetBinError(18,0.001733315);
   new_histo_group_Higgs_wh3l_plot_13TeV_zveto_3l288->SetBinError(19,0.0177025);
   new_histo_group_Higgs_wh3l_plot_13TeV_zveto_3l288->SetEntries(2838);
   new_histo_group_Higgs_wh3l_plot_13TeV_zveto_3l288->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_plot_13TeV_zveto_3l288->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_plot_13TeV_zveto_3l288->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_plot_13TeV_zveto_3l288->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_plot_13TeV_zveto_3l288->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_plot_13TeV_zveto_3l288->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_plot_13TeV_zveto_3l288->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_plot_13TeV_zveto_3l288->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_plot_13TeV_zveto_3l288->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_plot_13TeV_zveto_3l288->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_plot_13TeV_zveto_3l288->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_plot_13TeV_zveto_3l288->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_plot_13TeV_zveto_3l288->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_plot_13TeV_zveto_3l288->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_plot_13TeV_zveto_3l288->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_plot_13TeV_zveto_3l->Add(new_histo_group_Higgs_wh3l_plot_13TeV_zveto_3l,"");
   thsBackground_grouped_wh3l_plot_13TeV_zveto_3l->Draw("hist same");
   
   thsSignal_grouped_wh3l_plot_13TeV_zveto_3l = new THStack();
   thsSignal_grouped_wh3l_plot_13TeV_zveto_3l->SetName("thsSignal_grouped_wh3l_plot_13TeV_zveto_3l");
   thsSignal_grouped_wh3l_plot_13TeV_zveto_3l->SetTitle("thsSignal_grouped_wh3l_plot_13TeV_zveto_3l");
   
   TH1F *thsSignal_grouped_wh3l_plot_13TeV_zveto_3l_stack_58 = new TH1F("thsSignal_grouped_wh3l_plot_13TeV_zveto_3l_stack_58","thsSignal_grouped_wh3l_plot_13TeV_zveto_3l",20,0,100);
   thsSignal_grouped_wh3l_plot_13TeV_zveto_3l_stack_58->SetMinimum(0);
   thsSignal_grouped_wh3l_plot_13TeV_zveto_3l_stack_58->SetMaximum(0.7991125);
   thsSignal_grouped_wh3l_plot_13TeV_zveto_3l_stack_58->SetDirectory(0);
   thsSignal_grouped_wh3l_plot_13TeV_zveto_3l_stack_58->SetStats(0);
   thsSignal_grouped_wh3l_plot_13TeV_zveto_3l_stack_58->SetLineStyle(0);
   thsSignal_grouped_wh3l_plot_13TeV_zveto_3l_stack_58->SetMarkerStyle(20);
   thsSignal_grouped_wh3l_plot_13TeV_zveto_3l_stack_58->GetXaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_plot_13TeV_zveto_3l_stack_58->GetXaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_plot_13TeV_zveto_3l_stack_58->GetXaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_plot_13TeV_zveto_3l_stack_58->GetXaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_plot_13TeV_zveto_3l_stack_58->GetXaxis()->SetTitleOffset(0.9);
   thsSignal_grouped_wh3l_plot_13TeV_zveto_3l_stack_58->GetXaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_plot_13TeV_zveto_3l_stack_58->GetYaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_plot_13TeV_zveto_3l_stack_58->GetYaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_plot_13TeV_zveto_3l_stack_58->GetYaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_plot_13TeV_zveto_3l_stack_58->GetYaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_plot_13TeV_zveto_3l_stack_58->GetYaxis()->SetTitleOffset(1.25);
   thsSignal_grouped_wh3l_plot_13TeV_zveto_3l_stack_58->GetYaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_plot_13TeV_zveto_3l_stack_58->GetZaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_plot_13TeV_zveto_3l_stack_58->GetZaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_plot_13TeV_zveto_3l_stack_58->GetZaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_plot_13TeV_zveto_3l_stack_58->GetZaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_plot_13TeV_zveto_3l_stack_58->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_plot_13TeV_zveto_3l->SetHistogram(thsSignal_grouped_wh3l_plot_13TeV_zveto_3l_stack_58);
   
   
   TH1D *new_histo_group_Higgs_wh3l_plot_13TeV_zveto_3l289 = new TH1D("new_histo_group_Higgs_wh3l_plot_13TeV_zveto_3l289","histo_H_htt",20,0,100);
   new_histo_group_Higgs_wh3l_plot_13TeV_zveto_3l289->SetBinContent(1,0.7315597);
   new_histo_group_Higgs_wh3l_plot_13TeV_zveto_3l289->SetBinContent(2,0.1397004);
   new_histo_group_Higgs_wh3l_plot_13TeV_zveto_3l289->SetBinContent(3,0.06317233);
   new_histo_group_Higgs_wh3l_plot_13TeV_zveto_3l289->SetBinContent(4,0.04400988);
   new_histo_group_Higgs_wh3l_plot_13TeV_zveto_3l289->SetBinContent(5,0.05191052);
   new_histo_group_Higgs_wh3l_plot_13TeV_zveto_3l289->SetBinContent(6,0.06899975);
   new_histo_group_Higgs_wh3l_plot_13TeV_zveto_3l289->SetBinContent(7,0.05099779);
   new_histo_group_Higgs_wh3l_plot_13TeV_zveto_3l289->SetBinContent(8,0.07983971);
   new_histo_group_Higgs_wh3l_plot_13TeV_zveto_3l289->SetBinContent(9,0.05763549);
   new_histo_group_Higgs_wh3l_plot_13TeV_zveto_3l289->SetBinContent(10,0.0633468);
   new_histo_group_Higgs_wh3l_plot_13TeV_zveto_3l289->SetBinContent(11,0.0439497);
   new_histo_group_Higgs_wh3l_plot_13TeV_zveto_3l289->SetBinContent(12,0.07135419);
   new_histo_group_Higgs_wh3l_plot_13TeV_zveto_3l289->SetBinContent(13,0.04780221);
   new_histo_group_Higgs_wh3l_plot_13TeV_zveto_3l289->SetBinContent(14,0.03099094);
   new_histo_group_Higgs_wh3l_plot_13TeV_zveto_3l289->SetBinContent(15,0.03079793);
   new_histo_group_Higgs_wh3l_plot_13TeV_zveto_3l289->SetBinContent(16,0.01593661);
   new_histo_group_Higgs_wh3l_plot_13TeV_zveto_3l289->SetBinContent(17,0.00266919);
   new_histo_group_Higgs_wh3l_plot_13TeV_zveto_3l289->SetBinContent(18,0.002708116);
   new_histo_group_Higgs_wh3l_plot_13TeV_zveto_3l289->SetBinContent(19,0.2744313);
   new_histo_group_Higgs_wh3l_plot_13TeV_zveto_3l289->SetBinError(1,0.02949981);
   new_histo_group_Higgs_wh3l_plot_13TeV_zveto_3l289->SetBinError(2,0.01264783);
   new_histo_group_Higgs_wh3l_plot_13TeV_zveto_3l289->SetBinError(3,0.00840495);
   new_histo_group_Higgs_wh3l_plot_13TeV_zveto_3l289->SetBinError(4,0.006827722);
   new_histo_group_Higgs_wh3l_plot_13TeV_zveto_3l289->SetBinError(5,0.007651601);
   new_histo_group_Higgs_wh3l_plot_13TeV_zveto_3l289->SetBinError(6,0.009105933);
   new_histo_group_Higgs_wh3l_plot_13TeV_zveto_3l289->SetBinError(7,0.007077838);
   new_histo_group_Higgs_wh3l_plot_13TeV_zveto_3l289->SetBinError(8,0.009468989);
   new_histo_group_Higgs_wh3l_plot_13TeV_zveto_3l289->SetBinError(9,0.007803731);
   new_histo_group_Higgs_wh3l_plot_13TeV_zveto_3l289->SetBinError(10,0.008466243);
   new_histo_group_Higgs_wh3l_plot_13TeV_zveto_3l289->SetBinError(11,0.007575641);
   new_histo_group_Higgs_wh3l_plot_13TeV_zveto_3l289->SetBinError(12,0.009778967);
   new_histo_group_Higgs_wh3l_plot_13TeV_zveto_3l289->SetBinError(13,0.008130459);
   new_histo_group_Higgs_wh3l_plot_13TeV_zveto_3l289->SetBinError(14,0.00631341);
   new_histo_group_Higgs_wh3l_plot_13TeV_zveto_3l289->SetBinError(15,0.006142341);
   new_histo_group_Higgs_wh3l_plot_13TeV_zveto_3l289->SetBinError(16,0.004137944);
   new_histo_group_Higgs_wh3l_plot_13TeV_zveto_3l289->SetBinError(17,0.001930826);
   new_histo_group_Higgs_wh3l_plot_13TeV_zveto_3l289->SetBinError(18,0.001733315);
   new_histo_group_Higgs_wh3l_plot_13TeV_zveto_3l289->SetBinError(19,0.0177025);
   new_histo_group_Higgs_wh3l_plot_13TeV_zveto_3l289->SetEntries(2838);
   new_histo_group_Higgs_wh3l_plot_13TeV_zveto_3l289->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_plot_13TeV_zveto_3l289->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_plot_13TeV_zveto_3l289->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_plot_13TeV_zveto_3l289->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_plot_13TeV_zveto_3l289->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_plot_13TeV_zveto_3l289->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_plot_13TeV_zveto_3l289->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_plot_13TeV_zveto_3l289->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_plot_13TeV_zveto_3l289->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_plot_13TeV_zveto_3l289->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_plot_13TeV_zveto_3l289->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_plot_13TeV_zveto_3l289->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_plot_13TeV_zveto_3l289->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_plot_13TeV_zveto_3l289->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_plot_13TeV_zveto_3l289->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_plot_13TeV_zveto_3l->Add(new_histo_group_Higgs_wh3l_plot_13TeV_zveto_3l,"");
   thsSignal_grouped_wh3l_plot_13TeV_zveto_3l->Draw("hist same noclear");
   
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
   103.6726,
   14.7022,
   7.35094,
   4.089083,
   2.955337,
   2.815123,
   2.149951,
   2.330524,
   1.79812,
   1.876689,
   1.85403,
   1.227673,
   0.9856427,
   1.750767,
   0.4293013,
   0.1057037,
   0.04691412,
   0.05979598,
   6.143648,
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
   5.138249,
   1.094957,
   1.739668,
   1.19265,
   1.050425,
   0.8932548,
   0.8184068,
   1.149476,
   1.008714,
   1.070799,
   1.119146,
   0.6032775,
   0.4577973,
   0.9326642,
   0.0485523,
   0.3429244,
   0.0246732,
   0.01763163,
   2.196943,
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
   5.138256,
   1.712772,
   1.739667,
   1.195582,
   0.7793581,
   1.366053,
   0.8184068,
   1.149476,
   1.073514,
   1.072039,
   1.220811,
   0.6032773,
   0.5331163,
   0.932664,
   0.04855233,
   0.3429244,
   0.0246732,
   0.01763164,
   2.196942,
   0};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(20,_fx3057,_fy3057,_felx3057,_fehx3057,_fely3057,_fehy3057);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(12);
   grae->SetFillStyle(3004);
   grae->SetLineColor(12);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3057 = new TH1F("Graph_Graph3057","",100,0,110);
   Graph_Graph3057->SetMinimum(-11.14203);
   Graph_Graph3057->SetMaximum(119.7157);
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
   grae = new TGraphAsymmErrors(20,_fx3058,_fy3058,_felx3058,_fehx3058,_fely3058,_fehy3058);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(1);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3058 = new TH1F("Graph_Graph3058","",100,0,110);
   Graph_Graph3058->SetMinimum(0);
   Graph_Graph3058->SetMaximum(1.262698);
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
   
   TLegend *leg = new TLegend(0.2,0.55,0.8,0.88,NULL,"brNDC");
   leg->SetTextFont(62);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("new_histo_group_Fake_wh3l_plot_13TeV_zveto_3l","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_plot_13TeV_zveto_3l","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_plot_13TeV_zveto_3l","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_plot_13TeV_zveto_3l","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_plot_13TeV_zveto_3l","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_plot_13TeV_zveto_3l","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_plot_13TeV_zveto_3l","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_plot_13TeV_zveto_3l","Data","EPL");
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
   entry=leg->AddEntry("new_histo_group_Fake_wh3l_plot_13TeV_zveto_3l","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_plot_13TeV_zveto_3l","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_plot_13TeV_zveto_3l","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_plot_13TeV_zveto_3l","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_plot_13TeV_zveto_3l","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_plot_13TeV_zveto_3l","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_plot_13TeV_zveto_3l","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_plot_13TeV_zveto_3l","Data","EPL");
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
   hframe_copy290->SetMaximum(261.0104);
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
   ccwh3l_plot_13TeV_zveto_3l->Modified();
   ccwh3l_plot_13TeV_zveto_3l->cd();
   ccwh3l_plot_13TeV_zveto_3l->SetSelected(ccwh3l_plot_13TeV_zveto_3l);
}
