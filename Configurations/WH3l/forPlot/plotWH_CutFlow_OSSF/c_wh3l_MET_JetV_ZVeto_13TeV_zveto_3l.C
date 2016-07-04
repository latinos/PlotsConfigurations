void c_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l()
{
//=========Macro generated from canvas: ccwh3l_MET_JetV_ZVeto_13TeV_zveto_3l/cc
//=========  (Sat Jul  2 21:43:51 2016) by ROOT version6.02/13
   TCanvas *ccwh3l_MET_JetV_ZVeto_13TeV_zveto_3l = new TCanvas("ccwh3l_MET_JetV_ZVeto_13TeV_zveto_3l", "cc",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   ccwh3l_MET_JetV_ZVeto_13TeV_zveto_3l->SetHighLightColor(2);
   ccwh3l_MET_JetV_ZVeto_13TeV_zveto_3l->Range(-20,-4.756097,105,31.82927);
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
   
   TH1F *hframe411 = new TH1F("hframe411","",1000,0,100);
   hframe411->SetMinimum(0);
   hframe411->SetMaximum(30);
   hframe411->SetDirectory(0);
   hframe411->SetStats(0);
   hframe411->SetLineStyle(0);
   hframe411->SetMarkerStyle(20);
   hframe411->GetXaxis()->SetTitle("m_{ll} - M_{Z} [GeV]");
   hframe411->GetXaxis()->SetNdivisions(506);
   hframe411->GetXaxis()->SetLabelFont(42);
   hframe411->GetXaxis()->SetLabelOffset(0.007);
   hframe411->GetXaxis()->SetLabelSize(0.05);
   hframe411->GetXaxis()->SetTitleSize(0.06);
   hframe411->GetXaxis()->SetTitleOffset(0.9);
   hframe411->GetXaxis()->SetTitleFont(42);
   hframe411->GetYaxis()->SetTitle("Events");
   hframe411->GetYaxis()->SetLabelFont(42);
   hframe411->GetYaxis()->SetLabelOffset(0.007);
   hframe411->GetYaxis()->SetLabelSize(0.05);
   hframe411->GetYaxis()->SetTitleSize(0.06);
   hframe411->GetYaxis()->SetTitleOffset(1.25);
   hframe411->GetYaxis()->SetTitleFont(42);
   hframe411->GetZaxis()->SetLabelFont(42);
   hframe411->GetZaxis()->SetLabelOffset(0.007);
   hframe411->GetZaxis()->SetLabelSize(0.05);
   hframe411->GetZaxis()->SetTitleSize(0.06);
   hframe411->GetZaxis()->SetTitleFont(42);
   hframe411->Draw(" ");
   
   THStack *thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l = new THStack();
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l->SetName("thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l");
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l->SetTitle("thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l");
   
   TH1F *thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l_stack_83 = new TH1F("thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l_stack_83","thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l",20,0,100);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l_stack_83->SetMinimum(-0.5904275);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l_stack_83->SetMaximum(3.065677);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l_stack_83->SetDirectory(0);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l_stack_83->SetStats(0);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l_stack_83->SetLineStyle(0);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l_stack_83->SetMarkerStyle(20);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l_stack_83->GetXaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l_stack_83->GetXaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l_stack_83->GetXaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l_stack_83->GetXaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l_stack_83->GetXaxis()->SetTitleOffset(0.9);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l_stack_83->GetXaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l_stack_83->GetYaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l_stack_83->GetYaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l_stack_83->GetYaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l_stack_83->GetYaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l_stack_83->GetYaxis()->SetTitleOffset(1.25);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l_stack_83->GetYaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l_stack_83->GetZaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l_stack_83->GetZaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l_stack_83->GetZaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l_stack_83->GetZaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l_stack_83->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l->SetHistogram(thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l_stack_83);
   
   
   TH1D *new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l412 = new TH1D("new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l412","histo_Fake",20,0,100);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l412->SetBinContent(6,0.404296);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l412->SetBinContent(7,0.584341);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l412->SetBinContent(8,0.9469511);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l412->SetBinContent(9,0.7650418);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l412->SetBinContent(10,0.7963334);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l412->SetBinContent(11,1.023662);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l412->SetBinContent(12,0.5852319);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l412->SetBinContent(13,0.324549);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l412->SetBinContent(14,1.323319);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l412->SetBinContent(16,-0.3071204);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l412->SetBinContent(17,0.01024054);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l412->SetBinContent(19,1.14303);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l412->SetBinError(6,0.8801949);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l412->SetBinError(7,0.4000869);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l412->SetBinError(8,0.7365228);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l412->SetBinError(9,0.8314785);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l412->SetBinError(10,0.7976046);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l412->SetBinError(11,0.8570452);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l412->SetBinError(12,0.4529688);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l412->SetBinError(13,0.4013769);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l412->SetBinError(14,0.7960512);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l412->SetBinError(16,0.283307);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l412->SetBinError(17,0.01024054);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l412->SetBinError(19,0.724075);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l412->SetEntries(89);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l412->SetFillColor(ci);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l412->SetFillStyle(3001);

   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l412->SetLineColor(ci);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l412->GetXaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l412->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l412->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l412->GetXaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l412->GetYaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l412->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l412->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l412->GetYaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l412->GetZaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l412->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l412->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l412->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l->Add(new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l,"");
   
   TH1D *new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l413 = new TH1D("new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l413","histo_WW",20,0,100);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l413->SetBinContent(7,0.0142084);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l413->SetBinContent(10,0.01044191);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l413->SetBinContent(11,0.01814939);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l413->SetBinContent(12,0.01530373);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l413->SetBinContent(19,0.01447441);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l413->SetBinError(7,0.0142084);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l413->SetBinError(10,0.01044191);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l413->SetBinError(11,0.01814939);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l413->SetBinError(12,0.01530373);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l413->SetBinError(19,0.01447441);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l413->SetEntries(5);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l413->SetFillColor(ci);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l413->SetFillStyle(3001);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l413->SetLineColor(ci);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l413->GetXaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l413->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l413->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l413->GetXaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l413->GetYaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l413->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l413->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l413->GetYaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l413->GetZaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l413->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l413->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l413->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l->Add(new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l,"");
   
   TH1D *new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l414 = new TH1D("new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l414","histo_VVV",20,0,100);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l414->SetBinContent(6,0.04160643);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l414->SetBinContent(7,0.02757817);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l414->SetBinContent(8,0.0422288);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l414->SetBinContent(9,0.02791257);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l414->SetBinContent(10,0.01415853);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l414->SetBinContent(11,0.02147453);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l414->SetBinContent(12,0.01650746);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l414->SetBinContent(13,0.02642738);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l414->SetBinContent(14,0.006534619);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l414->SetBinContent(15,0.01154662);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l414->SetBinContent(16,0.005856125);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l414->SetBinContent(17,0.004349569);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l414->SetBinContent(18,0.005070793);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l414->SetBinContent(19,0.06488923);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l414->SetBinError(6,0.009926688);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l414->SetBinError(7,0.008324302);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l414->SetBinError(8,0.01017885);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l414->SetBinError(9,0.008432461);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l414->SetBinError(10,0.007230184);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l414->SetBinError(11,0.007199567);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l414->SetBinError(12,0.006046504);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l414->SetBinError(13,0.007864);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l414->SetBinError(14,0.003787243);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l414->SetBinError(15,0.00613419);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l414->SetBinError(16,0.005112487);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l414->SetBinError(17,0.003117723);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l414->SetBinError(18,0.003587291);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l414->SetBinError(19,0.0126518);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l414->SetEntries(183);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l414->SetFillColor(ci);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l414->SetFillStyle(3001);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l414->SetLineColor(ci);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l414->GetXaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l414->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l414->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l414->GetXaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l414->GetYaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l414->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l414->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l414->GetYaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l414->GetZaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l414->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l414->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l414->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l->Add(new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l,"");
   
   TH1D *new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l415 = new TH1D("new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l415","histo_Vg",20,0,100);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l415->SetBinContent(6,1.1435);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l415->SetBinContent(7,0.4463941);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l415->SetBinContent(8,0.4470873);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l415->SetBinContent(9,0.1587635);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l415->SetBinContent(10,0.3358528);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l415->SetBinContent(11,0.09040196);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l415->SetBinContent(12,0.02616973);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l415->SetBinContent(19,0.1058488);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l415->SetBinError(6,0.3385764);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l415->SetBinError(7,0.2373782);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l415->SetBinError(8,0.2664949);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l415->SetBinError(9,0.1191798);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l415->SetBinError(10,0.1724543);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l415->SetBinError(11,0.1957691);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l415->SetBinError(12,0.02616973);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l415->SetBinError(19,0.1058488);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l415->SetEntries(43);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l415->SetFillColor(ci);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l415->SetFillStyle(3001);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l415->SetLineColor(ci);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l415->GetXaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l415->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l415->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l415->GetXaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l415->GetYaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l415->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l415->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l415->GetYaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l415->GetZaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l415->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l415->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l415->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l->Add(new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l,"");
   
   TH1D *new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l416 = new TH1D("new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l416","histo_ZZ",20,0,100);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l416->SetBinContent(6,0.09825219);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l416->SetBinContent(7,0.1233438);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l416->SetBinContent(8,0.03939452);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l416->SetBinContent(9,0.02976017);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l416->SetBinContent(11,0.0704998);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l416->SetBinContent(12,0.02640386);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l416->SetBinContent(13,0.1149379);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l416->SetBinContent(19,0.04527812);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l416->SetBinError(6,0.06125685);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l416->SetBinError(7,0.07337062);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l416->SetBinError(8,0.03939452);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l416->SetBinError(9,0.02976016);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l416->SetBinError(11,0.05074004);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l416->SetBinError(12,0.02640386);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l416->SetBinError(13,0.06828736);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l416->SetBinError(19,0.04527812);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l416->SetEntries(16);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l416->SetFillColor(ci);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l416->SetFillStyle(3001);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l416->SetLineColor(ci);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l416->GetXaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l416->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l416->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l416->GetXaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l416->GetYaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l416->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l416->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l416->GetYaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l416->GetZaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l416->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l416->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l416->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l->Add(new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l,"");
   
   TH1D *new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l417 = new TH1D("new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l417","histo_WZ",20,0,100);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l417->SetBinContent(6,1.165147);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l417->SetBinContent(7,0.9791938);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l417->SetBinContent(8,0.8952803);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l417->SetBinContent(9,0.8430293);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l417->SetBinContent(10,0.7337703);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l417->SetBinContent(11,0.6508047);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l417->SetBinContent(12,0.5739258);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l417->SetBinContent(13,0.5461557);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l417->SetBinContent(14,0.4270278);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l417->SetBinContent(15,0.4293013);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l417->SetBinContent(16,0.4128241);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l417->SetBinContent(17,0.03667358);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l417->SetBinContent(18,0.05979598);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l417->SetBinContent(19,1.21864);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l417->SetBinError(6,0.07926738);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l417->SetBinError(7,0.07296996);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l417->SetBinError(8,0.07027891);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l417->SetBinError(9,0.06730616);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l417->SetBinError(10,0.06424746);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l417->SetBinError(11,0.05932829);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l417->SetBinError(12,0.05567756);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l417->SetBinError(13,0.05447657);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l417->SetBinError(14,0.04748225);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l417->SetBinError(15,0.0485523);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l417->SetBinError(16,0.04700815);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l417->SetBinError(17,0.01424065);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l417->SetBinError(18,0.01763162);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l417->SetBinError(19,0.08120843);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l417->SetEntries(1841);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l417->SetFillColor(ci);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l417->SetFillStyle(3001);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l417->SetLineColor(ci);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l417->GetXaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l417->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l417->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l417->GetXaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l417->GetYaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l417->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l417->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l417->GetYaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l417->GetZaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l417->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l417->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l417->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l->Add(new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l,"");
   
   TH1D *new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l418 = new TH1D("new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l418","histo_H_htt",20,0,100);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l418->SetBinContent(6,0.0668913);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l418->SetBinContent(7,0.04954608);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l418->SetBinContent(8,0.07814128);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l418->SetBinContent(9,0.05633584);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l418->SetBinContent(10,0.06320348);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l418->SetBinContent(11,0.04357659);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l418->SetBinContent(12,0.06794768);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l418->SetBinContent(13,0.04523574);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l418->SetBinContent(14,0.03078258);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l418->SetBinContent(15,0.0297702);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l418->SetBinContent(16,0.01405709);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l418->SetBinContent(17,0.00266919);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l418->SetBinContent(18,0.002708116);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l418->SetBinContent(19,0.03251118);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l418->SetBinError(6,0.008926731);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l418->SetBinError(7,0.006927361);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l418->SetBinError(8,0.009410384);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l418->SetBinError(9,0.007759675);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l418->SetBinError(10,0.00846503);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l418->SetBinError(11,0.007566448);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l418->SetBinError(12,0.009589763);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l418->SetBinError(13,0.007951139);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l418->SetBinError(14,0.006309971);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l418->SetBinError(15,0.006106694);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l418->SetBinError(16,0.003809649);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l418->SetBinError(17,0.001930826);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l418->SetBinError(18,0.001733315);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l418->SetBinError(19,0.006599585);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l418->SetEntries(919);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l418->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l418->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l418->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l418->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l418->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l418->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l418->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l418->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l418->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l418->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l418->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l418->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l418->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l418->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l418->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l->Add(new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l,"");
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l->Draw("hist same");
   
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l = new THStack();
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l->SetName("thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l");
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l->SetTitle("thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l");
   
   TH1F *thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l_stack_84 = new TH1F("thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l_stack_84","thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l",20,0,100);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l_stack_84->SetMinimum(0);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l_stack_84->SetMaximum(0.09192924);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l_stack_84->SetDirectory(0);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l_stack_84->SetStats(0);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l_stack_84->SetLineStyle(0);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l_stack_84->SetMarkerStyle(20);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l_stack_84->GetXaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l_stack_84->GetXaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l_stack_84->GetXaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l_stack_84->GetXaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l_stack_84->GetXaxis()->SetTitleOffset(0.9);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l_stack_84->GetXaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l_stack_84->GetYaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l_stack_84->GetYaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l_stack_84->GetYaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l_stack_84->GetYaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l_stack_84->GetYaxis()->SetTitleOffset(1.25);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l_stack_84->GetYaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l_stack_84->GetZaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l_stack_84->GetZaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l_stack_84->GetZaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l_stack_84->GetZaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l_stack_84->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l->SetHistogram(thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l_stack_84);
   
   
   TH1D *new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l419 = new TH1D("new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l419","histo_H_htt",20,0,100);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l419->SetBinContent(6,0.0668913);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l419->SetBinContent(7,0.04954608);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l419->SetBinContent(8,0.07814128);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l419->SetBinContent(9,0.05633584);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l419->SetBinContent(10,0.06320348);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l419->SetBinContent(11,0.04357659);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l419->SetBinContent(12,0.06794768);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l419->SetBinContent(13,0.04523574);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l419->SetBinContent(14,0.03078258);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l419->SetBinContent(15,0.0297702);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l419->SetBinContent(16,0.01405709);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l419->SetBinContent(17,0.00266919);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l419->SetBinContent(18,0.002708116);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l419->SetBinContent(19,0.03251118);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l419->SetBinError(6,0.008926731);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l419->SetBinError(7,0.006927361);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l419->SetBinError(8,0.009410384);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l419->SetBinError(9,0.007759675);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l419->SetBinError(10,0.00846503);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l419->SetBinError(11,0.007566448);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l419->SetBinError(12,0.009589763);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l419->SetBinError(13,0.007951139);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l419->SetBinError(14,0.006309971);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l419->SetBinError(15,0.006106694);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l419->SetBinError(16,0.003809649);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l419->SetBinError(17,0.001930826);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l419->SetBinError(18,0.001733315);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l419->SetBinError(19,0.006599585);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l419->SetEntries(919);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l419->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l419->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l419->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l419->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l419->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l419->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l419->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l419->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l419->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l419->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l419->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l419->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l419->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l419->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l419->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l->Add(new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l,"");
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_zveto_3l->Draw("hist same noclear");
   
   Double_t _fx3083[20] = {
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
   Double_t _fy3083[20] = {
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
   2.592161,
   0};
   Double_t _felx3083[20] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
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
   Double_t _fely3083[20] = {
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
   1.064559,
   0};
   Double_t _fehx3083[20] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
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
   Double_t _fehy3083[20] = {
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
   1.064412,
   0};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(20,_fx3083,_fy3083,_felx3083,_fehx3083,_fely3083,_fehy3083);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(12);
   grae->SetFillStyle(3004);
   grae->SetLineColor(12);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3083 = new TH1F("Graph_Graph3083","",100,0,110);
   Graph_Graph3083->SetMinimum(-0.6886217);
   Graph_Graph3083->SetMaximum(4.680073);
   Graph_Graph3083->SetDirectory(0);
   Graph_Graph3083->SetStats(0);
   Graph_Graph3083->SetLineStyle(0);
   Graph_Graph3083->SetMarkerStyle(20);
   Graph_Graph3083->GetXaxis()->SetLabelFont(42);
   Graph_Graph3083->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3083->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3083->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3083->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3083->GetXaxis()->SetTitleFont(42);
   Graph_Graph3083->GetYaxis()->SetLabelFont(42);
   Graph_Graph3083->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3083->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3083->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3083->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3083->GetYaxis()->SetTitleFont(42);
   Graph_Graph3083->GetZaxis()->SetLabelFont(42);
   Graph_Graph3083->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3083->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3083->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3083->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3083);
   
   grae->Draw("2");
   
   Double_t _fx3084[20] = {
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
   Double_t _fy3084[20] = {
   0,
   0,
   0,
   0,
   0,
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
   Double_t _felx3084[20] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
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
   Double_t _fely3084[20] = {
   0,
   0,
   0,
   0,
   0,
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
   Double_t _fehx3084[20] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
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
   Double_t _fehy3084[20] = {
   1.147908,
   1.147908,
   1.147908,
   1.147908,
   1.147908,
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
   grae = new TGraphAsymmErrors(20,_fx3084,_fy3084,_felx3084,_fehx3084,_fely3084,_fehy3084);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(1);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3084 = new TH1F("Graph_Graph3084","",100,0,110);
   Graph_Graph3084->SetMinimum(0);
   Graph_Graph3084->SetMaximum(14.42131);
   Graph_Graph3084->SetDirectory(0);
   Graph_Graph3084->SetStats(0);
   Graph_Graph3084->SetLineStyle(0);
   Graph_Graph3084->SetMarkerStyle(20);
   Graph_Graph3084->GetXaxis()->SetLabelFont(42);
   Graph_Graph3084->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3084->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3084->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3084->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3084->GetXaxis()->SetTitleFont(42);
   Graph_Graph3084->GetYaxis()->SetLabelFont(42);
   Graph_Graph3084->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3084->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3084->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3084->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3084->GetYaxis()->SetTitleFont(42);
   Graph_Graph3084->GetZaxis()->SetLabelFont(42);
   Graph_Graph3084->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3084->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3084->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3084->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3084);
   
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
   
   TH1F *hframe_copy420 = new TH1F("hframe_copy420","",1000,0,100);
   hframe_copy420->SetMinimum(0);
   hframe_copy420->SetMaximum(30);
   hframe_copy420->SetDirectory(0);
   hframe_copy420->SetStats(0);
   hframe_copy420->SetLineStyle(0);
   hframe_copy420->SetMarkerStyle(20);
   hframe_copy420->GetXaxis()->SetTitle("m_{ll} - M_{Z} [GeV]");
   hframe_copy420->GetXaxis()->SetNdivisions(506);
   hframe_copy420->GetXaxis()->SetLabelFont(42);
   hframe_copy420->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy420->GetXaxis()->SetLabelSize(0.05);
   hframe_copy420->GetXaxis()->SetTitleSize(0.06);
   hframe_copy420->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy420->GetXaxis()->SetTitleFont(42);
   hframe_copy420->GetYaxis()->SetTitle("Events");
   hframe_copy420->GetYaxis()->SetLabelFont(42);
   hframe_copy420->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy420->GetYaxis()->SetLabelSize(0.05);
   hframe_copy420->GetYaxis()->SetTitleSize(0.06);
   hframe_copy420->GetYaxis()->SetTitleOffset(1.25);
   hframe_copy420->GetYaxis()->SetTitleFont(42);
   hframe_copy420->GetZaxis()->SetLabelFont(42);
   hframe_copy420->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy420->GetZaxis()->SetLabelSize(0.05);
   hframe_copy420->GetZaxis()->SetTitleSize(0.06);
   hframe_copy420->GetZaxis()->SetTitleFont(42);
   hframe_copy420->Draw("sameaxis");
   ccwh3l_MET_JetV_ZVeto_13TeV_zveto_3l->Modified();
   ccwh3l_MET_JetV_ZVeto_13TeV_zveto_3l->cd();
   ccwh3l_MET_JetV_ZVeto_13TeV_zveto_3l->SetSelected(ccwh3l_MET_JetV_ZVeto_13TeV_zveto_3l);
}
