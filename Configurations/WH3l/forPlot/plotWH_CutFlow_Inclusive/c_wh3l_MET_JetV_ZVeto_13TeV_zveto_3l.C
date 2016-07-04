void c_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l()
{
//=========Macro generated from canvas: ccwh3l_MET_JetV_ZVeto_13TeV_zveto_3l/cc
//=========  (Sun Jul  3 16:19:13 2016) by ROOT version6.02/13
   TCanvas *ccwh3l_MET_JetV_ZVeto_13TeV_zveto_3l = new TCanvas("ccwh3l_MET_JetV_ZVeto_13TeV_zveto_3l", "cc",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   ccwh3l_MET_JetV_ZVeto_13TeV_zveto_3l->SetHighLightColor(2);
   ccwh3l_MET_JetV_ZVeto_13TeV_zveto_3l->Range(-20,-2.59646,105,17.37631);
   ccwh3l_MET_JetV_ZVeto_13TeV_zveto_3l->SetFillColor(0);
   ccwh3l_MET_JetV_ZVeto_13TeV_zveto_3l->SetBorderMode(0);
   ccwh3l_MET_JetV_ZVeto_13TeV_zveto_3l->SetBorderSize(2);
   ccwh3l_MET_JetV_ZVeto_13TeV_zveto_3l->SetTickx(1);
   ccwh3l_MET_JetV_ZVeto_13TeV_zveto_3l->SetTicky(1);
   ccwh3l_MET_JetV_ZVeto_13TeV_zveto_3l->SetLeftMargin(0.16);
   ccwh3l_MET_JetV_ZVeto_13TeV_zveto_3l->SetRightMargin(0.04);
   ccwh3l_MET_JetV_ZVeto_13TeV_zveto_3l->SetTopMargin(0.05);
   ccwh3l_MET_JetV_ZVeto_13TeV_zveto_3l->SetBottomMargin(0.13);
   ccwh3l_MET_JetV_ZVeto_13TeV_zveto_3l->SetFrameFillStyle(0);
   ccwh3l_MET_JetV_ZVeto_13TeV_zveto_3l->SetFrameBorderMode(0);
   ccwh3l_MET_JetV_ZVeto_13TeV_zveto_3l->SetFrameFillStyle(0);
   ccwh3l_MET_JetV_ZVeto_13TeV_zveto_3l->SetFrameBorderMode(0);
   
   TH1F *hframe311 = new TH1F("hframe311","",1000,0,100);
   hframe311->SetMinimum(0);
   hframe311->SetMaximum(16.37767);
   hframe311->SetDirectory(0);
   hframe311->SetStats(0);
   hframe311->SetLineStyle(0);
   hframe311->SetMarkerStyle(20);
   hframe311->GetXaxis()->SetTitle("m_{ll} - M_{Z} [GeV]");
   hframe311->GetXaxis()->SetNdivisions(506);
   hframe311->GetXaxis()->SetLabelFont(42);
   hframe311->GetXaxis()->SetLabelOffset(0.007);
   hframe311->GetXaxis()->SetLabelSize(0.05);
   hframe311->GetXaxis()->SetTitleSize(0.06);
   hframe311->GetXaxis()->SetTitleOffset(0.9);
   hframe311->GetXaxis()->SetTitleFont(42);
   hframe311->GetYaxis()->SetTitle("Events");
   hframe311->GetYaxis()->SetLabelFont(42);
   hframe311->GetYaxis()->SetLabelOffset(0.007);
   hframe311->GetYaxis()->SetLabelSize(0.05);
   hframe311->GetYaxis()->SetTitleSize(0.06);
   hframe311->GetYaxis()->SetTitleOffset(1.25);
   hframe311->GetYaxis()->SetTitleFont(42);
   hframe311->GetZaxis()->SetLabelFont(42);
   hframe311->GetZaxis()->SetLabelOffset(0.007);
   hframe311->GetZaxis()->SetLabelSize(0.05);
   hframe311->GetZaxis()->SetTitleSize(0.06);
   hframe311->GetZaxis()->SetTitleFont(42);
   hframe311->Draw(" ");
   
   THStack *thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l = new THStack();
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l->SetName("thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l");
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l->SetTitle("thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l");
   
   TH1F *thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l_stack_63 = new TH1F("thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l_stack_63","thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l",20,0,100);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l_stack_63->SetMinimum(-0.5904275);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l_stack_63->SetMaximum(6.878621);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l_stack_63->SetDirectory(0);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l_stack_63->SetStats(0);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l_stack_63->SetLineStyle(0);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l_stack_63->SetMarkerStyle(20);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l_stack_63->GetXaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l_stack_63->GetXaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l_stack_63->GetXaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l_stack_63->GetXaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l_stack_63->GetXaxis()->SetTitleOffset(0.9);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l_stack_63->GetXaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l_stack_63->GetYaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l_stack_63->GetYaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l_stack_63->GetYaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l_stack_63->GetYaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l_stack_63->GetYaxis()->SetTitleOffset(1.25);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l_stack_63->GetYaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l_stack_63->GetZaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l_stack_63->GetZaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l_stack_63->GetZaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l_stack_63->GetZaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l_stack_63->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l->SetHistogram(thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l_stack_63);
   
   
   TH1D *new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l312 = new TH1D("new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l312","histo_Fake",20,0,100);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l312->SetBinContent(6,0.404296);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l312->SetBinContent(7,0.584341);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l312->SetBinContent(8,0.9469511);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l312->SetBinContent(9,0.7650418);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l312->SetBinContent(10,0.7963334);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l312->SetBinContent(11,1.023662);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l312->SetBinContent(12,0.5852319);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l312->SetBinContent(13,0.324549);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l312->SetBinContent(14,1.323319);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l312->SetBinContent(16,-0.3071204);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l312->SetBinContent(17,0.01024054);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l312->SetBinContent(19,4.138308);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l312->SetBinError(6,0.8801949);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l312->SetBinError(7,0.4000869);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l312->SetBinError(8,0.7365228);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l312->SetBinError(9,0.8314785);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l312->SetBinError(10,0.7976046);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l312->SetBinError(11,0.8570452);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l312->SetBinError(12,0.4529688);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l312->SetBinError(13,0.4013769);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l312->SetBinError(14,0.7960512);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l312->SetBinError(16,0.283307);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l312->SetBinError(17,0.01024054);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l312->SetBinError(19,1.512693);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l312->SetEntries(117);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l312->SetFillColor(ci);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l312->SetFillStyle(3001);

   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l312->SetLineColor(ci);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l312->GetXaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l312->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l312->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l312->GetXaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l312->GetYaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l312->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l312->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l312->GetYaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l312->GetZaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l312->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l312->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l312->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l->Add(new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l,"");
   
   TH1D *new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l313 = new TH1D("new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l313","histo_WW",20,0,100);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l313->SetBinContent(7,0.0142084);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l313->SetBinContent(10,0.01044191);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l313->SetBinContent(11,0.01814939);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l313->SetBinContent(12,0.01530373);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l313->SetBinContent(19,0.03059851);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l313->SetBinError(7,0.0142084);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l313->SetBinError(10,0.01044191);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l313->SetBinError(11,0.01814939);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l313->SetBinError(12,0.01530373);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l313->SetBinError(19,0.02166783);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l313->SetEntries(6);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l313->SetFillColor(ci);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l313->SetFillStyle(3001);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l313->SetLineColor(ci);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l313->GetXaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l313->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l313->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l313->GetXaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l313->GetYaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l313->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l313->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l313->GetYaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l313->GetZaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l313->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l313->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l313->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l->Add(new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l,"");
   
   TH1D *new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l314 = new TH1D("new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l314","histo_VVV",20,0,100);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l314->SetBinContent(6,0.04160643);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l314->SetBinContent(7,0.02757817);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l314->SetBinContent(8,0.0422288);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l314->SetBinContent(9,0.02791257);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l314->SetBinContent(10,0.01415853);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l314->SetBinContent(11,0.02147453);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l314->SetBinContent(12,0.01650746);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l314->SetBinContent(13,0.02642738);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l314->SetBinContent(14,0.006534619);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l314->SetBinContent(15,0.01154662);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l314->SetBinContent(16,0.005856125);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l314->SetBinContent(17,0.004349569);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l314->SetBinContent(18,0.005070793);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l314->SetBinContent(19,0.1783366);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l314->SetBinError(6,0.009926688);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l314->SetBinError(7,0.008324302);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l314->SetBinError(8,0.01017885);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l314->SetBinError(9,0.008432461);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l314->SetBinError(10,0.007230184);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l314->SetBinError(11,0.007199567);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l314->SetBinError(12,0.006046504);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l314->SetBinError(13,0.007864);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l314->SetBinError(14,0.003787243);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l314->SetBinError(15,0.00613419);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l314->SetBinError(16,0.005112487);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l314->SetBinError(17,0.003117723);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l314->SetBinError(18,0.003587291);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l314->SetBinError(19,0.02164873);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l314->SetEntries(250);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l314->SetFillColor(ci);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l314->SetFillStyle(3001);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l314->SetLineColor(ci);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l314->GetXaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l314->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l314->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l314->GetXaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l314->GetYaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l314->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l314->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l314->GetYaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l314->GetZaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l314->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l314->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l314->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l->Add(new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l,"");
   
   TH1D *new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l315 = new TH1D("new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l315","histo_Vg",20,0,100);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l315->SetBinContent(6,1.1435);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l315->SetBinContent(7,0.4463941);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l315->SetBinContent(8,0.4470873);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l315->SetBinContent(9,0.1587635);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l315->SetBinContent(10,0.3358528);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l315->SetBinContent(11,0.09040196);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l315->SetBinContent(12,0.02616973);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l315->SetBinContent(19,0.1058488);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l315->SetBinError(6,0.3385764);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l315->SetBinError(7,0.2373782);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l315->SetBinError(8,0.2664949);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l315->SetBinError(9,0.1191798);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l315->SetBinError(10,0.1724543);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l315->SetBinError(11,0.1957691);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l315->SetBinError(12,0.02616973);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l315->SetBinError(19,0.1058488);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l315->SetEntries(43);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l315->SetFillColor(ci);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l315->SetFillStyle(3001);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l315->SetLineColor(ci);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l315->GetXaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l315->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l315->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l315->GetXaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l315->GetYaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l315->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l315->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l315->GetYaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l315->GetZaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l315->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l315->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l315->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l->Add(new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l,"");
   
   TH1D *new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l316 = new TH1D("new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l316","histo_ZZ",20,0,100);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l316->SetBinContent(6,0.09825219);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l316->SetBinContent(7,0.1233438);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l316->SetBinContent(8,0.03939452);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l316->SetBinContent(9,0.02976017);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l316->SetBinContent(11,0.0704998);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l316->SetBinContent(12,0.02640386);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l316->SetBinContent(13,0.1149379);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l316->SetBinContent(19,0.1231284);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l316->SetBinError(6,0.06125685);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l316->SetBinError(7,0.07337062);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l316->SetBinError(8,0.03939452);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l316->SetBinError(9,0.02976016);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l316->SetBinError(11,0.05074004);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l316->SetBinError(12,0.02640386);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l316->SetBinError(13,0.06828736);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l316->SetBinError(19,0.0714783);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l316->SetEntries(18);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l316->SetFillColor(ci);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l316->SetFillStyle(3001);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l316->SetLineColor(ci);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l316->GetXaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l316->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l316->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l316->GetXaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l316->GetYaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l316->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l316->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l316->GetYaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l316->GetZaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l316->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l316->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l316->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l->Add(new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l,"");
   
   TH1D *new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l317 = new TH1D("new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l317","histo_WZ",20,0,100);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l317->SetBinContent(6,1.165147);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l317->SetBinContent(7,0.9791938);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l317->SetBinContent(8,0.8952803);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l317->SetBinContent(9,0.8430293);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l317->SetBinContent(10,0.7337703);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l317->SetBinContent(11,0.6508047);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l317->SetBinContent(12,0.5739258);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l317->SetBinContent(13,0.5461557);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l317->SetBinContent(14,0.4270278);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l317->SetBinContent(15,0.4293013);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l317->SetBinContent(16,0.4128241);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l317->SetBinContent(17,0.03667358);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l317->SetBinContent(18,0.05979598);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l317->SetBinContent(19,1.709735);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l317->SetBinError(6,0.07926738);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l317->SetBinError(7,0.07296996);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l317->SetBinError(8,0.07027891);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l317->SetBinError(9,0.06730616);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l317->SetBinError(10,0.06424746);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l317->SetBinError(11,0.05932829);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l317->SetBinError(12,0.05567756);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l317->SetBinError(13,0.05447657);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l317->SetBinError(14,0.04748225);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l317->SetBinError(15,0.0485523);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l317->SetBinError(16,0.04700815);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l317->SetBinError(17,0.01424065);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l317->SetBinError(18,0.01763162);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l317->SetBinError(19,0.09599308);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l317->SetEntries(1942);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l317->SetFillColor(ci);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l317->SetFillStyle(3001);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l317->SetLineColor(ci);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l317->GetXaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l317->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l317->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l317->GetXaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l317->GetYaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l317->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l317->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l317->GetYaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l317->GetZaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l317->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l317->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l317->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l->Add(new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l,"");
   
   TH1D *new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l318 = new TH1D("new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l318","histo_H_htt",20,0,100);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l318->SetBinContent(6,0.0668913);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l318->SetBinContent(7,0.04954608);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l318->SetBinContent(8,0.07814128);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l318->SetBinContent(9,0.05633584);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l318->SetBinContent(10,0.06320348);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l318->SetBinContent(11,0.04357659);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l318->SetBinContent(12,0.06794768);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l318->SetBinContent(13,0.04523574);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l318->SetBinContent(14,0.03078258);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l318->SetBinContent(15,0.0297702);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l318->SetBinContent(16,0.01405709);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l318->SetBinContent(17,0.00266919);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l318->SetBinContent(18,0.002708116);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l318->SetBinContent(19,0.2651129);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l318->SetBinError(6,0.008926731);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l318->SetBinError(7,0.006927361);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l318->SetBinError(8,0.009410384);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l318->SetBinError(9,0.007759675);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l318->SetBinError(10,0.00846503);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l318->SetBinError(11,0.007566448);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l318->SetBinError(12,0.009589763);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l318->SetBinError(13,0.007951139);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l318->SetBinError(14,0.006309971);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l318->SetBinError(15,0.006106694);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l318->SetBinError(16,0.003809649);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l318->SetBinError(17,0.001930826);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l318->SetBinError(18,0.001733315);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l318->SetBinError(19,0.01740494);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l318->SetEntries(1324);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l318->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l318->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l318->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l318->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l318->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l318->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l318->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l318->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l318->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l318->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l318->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l318->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l318->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l318->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l318->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l->Add(new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l,"");
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l->Draw("hist same");
   
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l = new THStack();
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l->SetName("thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l");
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l->SetTitle("thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l");
   
   TH1F *thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l_stack_64 = new TH1F("thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l_stack_64","thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l",20,0,100);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l_stack_64->SetMinimum(0);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l_stack_64->SetMaximum(0.2966437);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l_stack_64->SetDirectory(0);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l_stack_64->SetStats(0);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l_stack_64->SetLineStyle(0);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l_stack_64->SetMarkerStyle(20);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l_stack_64->GetXaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l_stack_64->GetXaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l_stack_64->GetXaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l_stack_64->GetXaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l_stack_64->GetXaxis()->SetTitleOffset(0.9);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l_stack_64->GetXaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l_stack_64->GetYaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l_stack_64->GetYaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l_stack_64->GetYaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l_stack_64->GetYaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l_stack_64->GetYaxis()->SetTitleOffset(1.25);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l_stack_64->GetYaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l_stack_64->GetZaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l_stack_64->GetZaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l_stack_64->GetZaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l_stack_64->GetZaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l_stack_64->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l->SetHistogram(thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l_stack_64);
   
   
   TH1D *new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l319 = new TH1D("new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l319","histo_H_htt",20,0,100);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l319->SetBinContent(6,0.0668913);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l319->SetBinContent(7,0.04954608);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l319->SetBinContent(8,0.07814128);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l319->SetBinContent(9,0.05633584);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l319->SetBinContent(10,0.06320348);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l319->SetBinContent(11,0.04357659);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l319->SetBinContent(12,0.06794768);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l319->SetBinContent(13,0.04523574);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l319->SetBinContent(14,0.03078258);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l319->SetBinContent(15,0.0297702);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l319->SetBinContent(16,0.01405709);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l319->SetBinContent(17,0.00266919);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l319->SetBinContent(18,0.002708116);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l319->SetBinContent(19,0.2651129);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l319->SetBinError(6,0.008926731);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l319->SetBinError(7,0.006927361);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l319->SetBinError(8,0.009410384);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l319->SetBinError(9,0.007759675);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l319->SetBinError(10,0.00846503);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l319->SetBinError(11,0.007566448);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l319->SetBinError(12,0.009589763);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l319->SetBinError(13,0.007951139);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l319->SetBinError(14,0.006309971);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l319->SetBinError(15,0.006106694);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l319->SetBinError(16,0.003809649);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l319->SetBinError(17,0.001930826);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l319->SetBinError(18,0.001733315);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l319->SetBinError(19,0.01740494);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l319->SetEntries(1324);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l319->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l319->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l319->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l319->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l319->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l319->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l319->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l319->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l319->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l319->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l319->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l319->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l319->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l319->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l319->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l->Add(new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l,"");
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l->Draw("hist same noclear");
   
   Double_t _fx3063[20] = {
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
   Double_t _fy3063[20] = {
   0,
   0,
   0,
   0,
   0,
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
   Double_t _felx3063[20] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
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
   Double_t _fely3063[20] = {
   0,
   0,
   0,
   0,
   0,
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
   Double_t _fehx3063[20] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
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
   Double_t _fehy3063[20] = {
   0,
   0,
   0,
   0,
   0,
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
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(20,_fx3063,_fy3063,_felx3063,_fehx3063,_fely3063,_fehy3063);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(12);
   grae->SetFillStyle(3004);
   grae->SetLineColor(12);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3063 = new TH1F("Graph_Graph3063","",100,0,110);
   Graph_Graph3063->SetMinimum(-1.128031);
   Graph_Graph3063->SetMaximum(9.513573);
   Graph_Graph3063->SetDirectory(0);
   Graph_Graph3063->SetStats(0);
   Graph_Graph3063->SetLineStyle(0);
   Graph_Graph3063->SetMarkerStyle(20);
   Graph_Graph3063->GetXaxis()->SetLabelFont(42);
   Graph_Graph3063->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3063->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3063->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3063->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3063->GetXaxis()->SetTitleFont(42);
   Graph_Graph3063->GetYaxis()->SetLabelFont(42);
   Graph_Graph3063->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3063->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3063->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3063->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3063->GetYaxis()->SetTitleFont(42);
   Graph_Graph3063->GetZaxis()->SetLabelFont(42);
   Graph_Graph3063->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3063->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3063->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3063->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3063);
   
   grae->Draw("2");
   
   Double_t _fx3064[20] = {
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
   Double_t _fy3064[20] = {
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
   Double_t _felx3064[20] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
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
   Double_t _fely3064[20] = {
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
   Double_t _fehx3064[20] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
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
   Double_t _fehy3064[20] = {
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
   grae = new TGraphAsymmErrors(20,_fx3064,_fy3064,_felx3064,_fehx3064,_fely3064,_fehy3064);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(1);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3064 = new TH1F("Graph_Graph3064","",100,0,110);
   Graph_Graph3064->SetMinimum(0);
   Graph_Graph3064->SetMaximum(1.262698);
   Graph_Graph3064->SetDirectory(0);
   Graph_Graph3064->SetStats(0);
   Graph_Graph3064->SetLineStyle(0);
   Graph_Graph3064->SetMarkerStyle(20);
   Graph_Graph3064->GetXaxis()->SetLabelFont(42);
   Graph_Graph3064->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3064->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3064->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3064->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3064->GetXaxis()->SetTitleFont(42);
   Graph_Graph3064->GetYaxis()->SetLabelFont(42);
   Graph_Graph3064->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3064->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3064->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3064->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3064->GetYaxis()->SetTitleFont(42);
   Graph_Graph3064->GetZaxis()->SetLabelFont(42);
   Graph_Graph3064->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3064->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3064->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3064->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3064);
   
   grae->Draw("p0");
   
   TLegend *leg = new TLegend(0.2,0.7,0.8,0.9,NULL,"brNDC");
   leg->SetTextFont(62);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l","Data","EPL");
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
   entry=leg->AddEntry("new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l","Data","EPL");
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
   
   TH1F *hframe_copy320 = new TH1F("hframe_copy320","",1000,0,100);
   hframe_copy320->SetMinimum(0);
   hframe_copy320->SetMaximum(16.37767);
   hframe_copy320->SetDirectory(0);
   hframe_copy320->SetStats(0);
   hframe_copy320->SetLineStyle(0);
   hframe_copy320->SetMarkerStyle(20);
   hframe_copy320->GetXaxis()->SetTitle("m_{ll} - M_{Z} [GeV]");
   hframe_copy320->GetXaxis()->SetNdivisions(506);
   hframe_copy320->GetXaxis()->SetLabelFont(42);
   hframe_copy320->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy320->GetXaxis()->SetLabelSize(0.05);
   hframe_copy320->GetXaxis()->SetTitleSize(0.06);
   hframe_copy320->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy320->GetXaxis()->SetTitleFont(42);
   hframe_copy320->GetYaxis()->SetTitle("Events");
   hframe_copy320->GetYaxis()->SetLabelFont(42);
   hframe_copy320->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy320->GetYaxis()->SetLabelSize(0.05);
   hframe_copy320->GetYaxis()->SetTitleSize(0.06);
   hframe_copy320->GetYaxis()->SetTitleOffset(1.25);
   hframe_copy320->GetYaxis()->SetTitleFont(42);
   hframe_copy320->GetZaxis()->SetLabelFont(42);
   hframe_copy320->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy320->GetZaxis()->SetLabelSize(0.05);
   hframe_copy320->GetZaxis()->SetTitleSize(0.06);
   hframe_copy320->GetZaxis()->SetTitleFont(42);
   hframe_copy320->Draw("sameaxis");
   ccwh3l_MET_JetV_ZVeto_13TeV_zveto_3l->Modified();
   ccwh3l_MET_JetV_ZVeto_13TeV_zveto_3l->cd();
   ccwh3l_MET_JetV_ZVeto_13TeV_zveto_3l->SetSelected(ccwh3l_MET_JetV_ZVeto_13TeV_zveto_3l);
}
