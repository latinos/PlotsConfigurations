void c_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l()
{
//=========Macro generated from canvas: ccwh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l/cc
//=========  (Sun Jul  3 16:19:19 2016) by ROOT version6.02/13
   TCanvas *ccwh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l = new TCanvas("ccwh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l", "cc",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   ccwh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l->SetHighLightColor(2);
   ccwh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l->Range(-20,-1.956377,105,13.09267);
   ccwh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l->SetFillColor(0);
   ccwh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l->SetBorderMode(0);
   ccwh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l->SetBorderSize(2);
   ccwh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l->SetTickx(1);
   ccwh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l->SetTicky(1);
   ccwh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l->SetLeftMargin(0.16);
   ccwh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l->SetRightMargin(0.04);
   ccwh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l->SetTopMargin(0.05);
   ccwh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l->SetBottomMargin(0.13);
   ccwh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l->SetFrameFillStyle(0);
   ccwh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l->SetFrameBorderMode(0);
   ccwh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l->SetFrameFillStyle(0);
   ccwh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l->SetFrameBorderMode(0);
   
   TH1F *hframe411 = new TH1F("hframe411","",1000,0,100);
   hframe411->SetMinimum(0);
   hframe411->SetMaximum(12.34022);
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
   
   THStack *thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l = new THStack();
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l->SetName("thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l");
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l->SetTitle("thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l");
   
   TH1F *thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l_stack_83 = new TH1F("thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l_stack_83","thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l",20,0,100);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l_stack_83->SetMinimum(-0.5896294);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l_stack_83->SetMaximum(5.242024);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l_stack_83->SetDirectory(0);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l_stack_83->SetStats(0);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l_stack_83->SetLineStyle(0);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l_stack_83->SetMarkerStyle(20);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l_stack_83->GetXaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l_stack_83->GetXaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l_stack_83->GetXaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l_stack_83->GetXaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l_stack_83->GetXaxis()->SetTitleOffset(0.9);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l_stack_83->GetXaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l_stack_83->GetYaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l_stack_83->GetYaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l_stack_83->GetYaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l_stack_83->GetYaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l_stack_83->GetYaxis()->SetTitleOffset(1.25);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l_stack_83->GetYaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l_stack_83->GetZaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l_stack_83->GetZaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l_stack_83->GetZaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l_stack_83->GetZaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l_stack_83->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l->SetHistogram(thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l_stack_83);
   
   
   TH1D *new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l412 = new TH1D("new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l412","histo_Fake",20,0,100);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l412->SetBinContent(6,0.404296);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l412->SetBinContent(7,0.2729209);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l412->SetBinContent(8,0.9469511);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l412->SetBinContent(9,0.8033053);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l412->SetBinContent(10,0.8009671);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l412->SetBinContent(11,1.023662);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l412->SetBinContent(12,0.5852319);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l412->SetBinContent(13,0.324549);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l412->SetBinContent(14,1.323319);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l412->SetBinContent(16,-0.3063235);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l412->SetBinContent(19,3.549941);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l412->SetBinError(6,0.8801949);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l412->SetBinError(7,0.2511714);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l412->SetBinError(8,0.7365228);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l412->SetBinError(9,0.8305977);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l412->SetBinError(10,0.7975911);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l412->SetBinError(11,0.8570452);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l412->SetBinError(12,0.4529688);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l412->SetBinError(13,0.4013769);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l412->SetBinError(14,0.7960512);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l412->SetBinError(16,0.2833059);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l412->SetBinError(19,1.442463);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l412->SetEntries(108);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l412->SetFillColor(ci);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l412->SetFillStyle(3001);

   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l412->SetLineColor(ci);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l412->GetXaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l412->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l412->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l412->GetXaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l412->GetYaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l412->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l412->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l412->GetYaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l412->GetZaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l412->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l412->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l412->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l->Add(new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l,"");
   
   TH1D *new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l413 = new TH1D("new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l413","histo_WW",20,0,100);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l413->SetBinContent(7,0.0142084);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l413->SetBinContent(10,0.01044191);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l413->SetBinContent(11,0.01814939);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l413->SetBinContent(12,0.01530373);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l413->SetBinContent(19,0.03059851);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l413->SetBinError(7,0.0142084);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l413->SetBinError(10,0.01044191);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l413->SetBinError(11,0.01814939);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l413->SetBinError(12,0.01530373);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l413->SetBinError(19,0.02166783);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l413->SetEntries(6);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l413->SetFillColor(ci);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l413->SetFillStyle(3001);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l413->SetLineColor(ci);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l413->GetXaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l413->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l413->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l413->GetXaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l413->GetYaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l413->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l413->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l413->GetYaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l413->GetZaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l413->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l413->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l413->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l->Add(new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l,"");
   
   TH1D *new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l414 = new TH1D("new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l414","histo_VVV",20,0,100);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l414->SetBinContent(6,0.03382351);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l414->SetBinContent(7,0.02125849);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l414->SetBinContent(8,0.03470191);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l414->SetBinContent(9,0.01984508);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l414->SetBinContent(10,0.00994201);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l414->SetBinContent(11,0.02147453);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l414->SetBinContent(12,0.01650746);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l414->SetBinContent(13,0.01991765);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l414->SetBinContent(14,0.006534619);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l414->SetBinContent(15,0.01040778);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l414->SetBinContent(16,0.004313373);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l414->SetBinContent(17,0.00181366);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l414->SetBinContent(18,0.005070793);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l414->SetBinContent(19,0.1092517);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l414->SetBinError(6,0.008841684);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l414->SetBinError(7,0.007452619);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l414->SetBinError(8,0.009187758);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l414->SetBinError(9,0.007429445);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l414->SetBinError(10,0.006351027);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l414->SetBinError(11,0.007199567);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l414->SetBinError(12,0.006046504);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l414->SetBinError(13,0.007078369);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l414->SetBinError(14,0.003787243);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l414->SetBinError(15,0.00468216);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l414->SetBinError(16,0.00487416);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l414->SetBinError(17,0.00181366);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l414->SetBinError(18,0.003587291);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l414->SetBinError(19,0.01698337);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l414->SetEntries(180);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l414->SetFillColor(ci);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l414->SetFillStyle(3001);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l414->SetLineColor(ci);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l414->GetXaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l414->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l414->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l414->GetXaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l414->GetYaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l414->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l414->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l414->GetYaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l414->GetZaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l414->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l414->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l414->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l->Add(new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l,"");
   
   TH1D *new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l415 = new TH1D("new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l415","histo_Vg",20,0,100);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l415->SetBinContent(6,1.1435);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l415->SetBinContent(7,0.4463941);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l415->SetBinContent(8,0.4470873);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l415->SetBinContent(9,0.1587635);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l415->SetBinContent(10,0.3358528);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l415->SetBinContent(11,0.09040196);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l415->SetBinContent(12,0.02616973);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l415->SetBinError(6,0.3385764);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l415->SetBinError(7,0.2373782);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l415->SetBinError(8,0.2664949);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l415->SetBinError(9,0.1191798);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l415->SetBinError(10,0.1724543);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l415->SetBinError(11,0.1957691);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l415->SetBinError(12,0.02616973);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l415->SetEntries(42);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l415->SetFillColor(ci);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l415->SetFillStyle(3001);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l415->SetLineColor(ci);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l415->GetXaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l415->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l415->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l415->GetXaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l415->GetYaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l415->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l415->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l415->GetYaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l415->GetZaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l415->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l415->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l415->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l->Add(new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l,"");
   
   TH1D *new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l416 = new TH1D("new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l416","histo_ZZ",20,0,100);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l416->SetBinContent(6,0.09825219);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l416->SetBinContent(7,0.1233438);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l416->SetBinContent(8,0.03939452);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l416->SetBinContent(9,0.02976017);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l416->SetBinContent(11,0.0704998);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l416->SetBinContent(12,0.02640386);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l416->SetBinContent(13,0.1149379);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l416->SetBinContent(19,0.1231284);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l416->SetBinError(6,0.06125685);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l416->SetBinError(7,0.07337062);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l416->SetBinError(8,0.03939452);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l416->SetBinError(9,0.02976016);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l416->SetBinError(11,0.05074004);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l416->SetBinError(12,0.02640386);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l416->SetBinError(13,0.06828736);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l416->SetBinError(19,0.0714783);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l416->SetEntries(18);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l416->SetFillColor(ci);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l416->SetFillStyle(3001);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l416->SetLineColor(ci);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l416->GetXaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l416->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l416->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l416->GetXaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l416->GetYaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l416->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l416->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l416->GetYaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l416->GetZaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l416->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l416->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l416->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l->Add(new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l,"");
   
   TH1D *new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l417 = new TH1D("new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l417","histo_WZ",20,0,100);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l417->SetBinContent(6,1.003038);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l417->SetBinContent(7,0.7592491);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l417->SetBinContent(8,0.7267044);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l417->SetBinContent(9,0.7066543);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l417->SetBinContent(10,0.635128);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l417->SetBinContent(11,0.5566121);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l417->SetBinContent(12,0.5001476);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l417->SetBinContent(13,0.4922324);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l417->SetBinContent(14,0.385523);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l417->SetBinContent(15,0.3529219);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l417->SetBinContent(16,0.3902687);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l417->SetBinContent(17,0.009517326);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l417->SetBinContent(18,0.0131633);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l417->SetBinContent(19,0.8580563);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l417->SetBinError(6,0.07352977);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l417->SetBinError(7,0.06414133);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l417->SetBinError(8,0.0631772);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l417->SetBinError(9,0.06197327);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l417->SetBinError(10,0.05979633);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l417->SetBinError(11,0.05498297);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l417->SetBinError(12,0.05210945);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l417->SetBinError(13,0.05181482);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l417->SetBinError(14,0.04521306);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l417->SetBinError(15,0.04396975);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l417->SetBinError(16,0.04573766);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l417->SetBinError(17,0.006799546);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l417->SetBinError(18,0.009323936);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l417->SetBinError(19,0.06755072);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l417->SetEntries(1516);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l417->SetFillColor(ci);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l417->SetFillStyle(3001);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l417->SetLineColor(ci);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l417->GetXaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l417->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l417->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l417->GetXaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l417->GetYaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l417->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l417->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l417->GetYaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l417->GetZaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l417->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l417->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l417->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l->Add(new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l,"");
   
   TH1D *new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l418 = new TH1D("new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l418","histo_H_htt",20,0,100);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l418->SetBinContent(6,0.06447969);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l418->SetBinContent(7,0.04954608);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l418->SetBinContent(8,0.07814128);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l418->SetBinContent(9,0.05633584);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l418->SetBinContent(10,0.06320348);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l418->SetBinContent(11,0.04357659);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l418->SetBinContent(12,0.06794768);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l418->SetBinContent(13,0.04523574);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l418->SetBinContent(14,0.03078258);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l418->SetBinContent(15,0.02821149);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l418->SetBinContent(16,0.01405709);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l418->SetBinContent(17,0.00266919);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l418->SetBinContent(18,0.002708116);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l418->SetBinContent(19,0.2651129);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l418->SetBinError(6,0.008798867);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l418->SetBinError(7,0.006927361);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l418->SetBinError(8,0.009410384);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l418->SetBinError(9,0.007759675);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l418->SetBinError(10,0.00846503);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l418->SetBinError(11,0.007566448);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l418->SetBinError(12,0.009589763);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l418->SetBinError(13,0.007951139);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l418->SetBinError(14,0.006309971);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l418->SetBinError(15,0.005904418);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l418->SetBinError(16,0.003809649);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l418->SetBinError(17,0.001930826);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l418->SetBinError(18,0.001733315);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l418->SetBinError(19,0.01740494);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l418->SetEntries(1320);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l418->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l418->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l418->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l418->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l418->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l418->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l418->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l418->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l418->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l418->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l418->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l418->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l418->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l418->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l418->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l->Add(new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l,"");
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l->Draw("hist same");
   
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l = new THStack();
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l->SetName("thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l");
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l->SetTitle("thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l");
   
   TH1F *thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l_stack_84 = new TH1F("thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l_stack_84","thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l",20,0,100);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l_stack_84->SetMinimum(0);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l_stack_84->SetMaximum(0.2966437);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l_stack_84->SetDirectory(0);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l_stack_84->SetStats(0);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l_stack_84->SetLineStyle(0);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l_stack_84->SetMarkerStyle(20);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l_stack_84->GetXaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l_stack_84->GetXaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l_stack_84->GetXaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l_stack_84->GetXaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l_stack_84->GetXaxis()->SetTitleOffset(0.9);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l_stack_84->GetXaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l_stack_84->GetYaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l_stack_84->GetYaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l_stack_84->GetYaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l_stack_84->GetYaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l_stack_84->GetYaxis()->SetTitleOffset(1.25);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l_stack_84->GetYaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l_stack_84->GetZaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l_stack_84->GetZaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l_stack_84->GetZaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l_stack_84->GetZaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l_stack_84->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l->SetHistogram(thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l_stack_84);
   
   
   TH1D *new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l419 = new TH1D("new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l419","histo_H_htt",20,0,100);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l419->SetBinContent(6,0.06447969);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l419->SetBinContent(7,0.04954608);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l419->SetBinContent(8,0.07814128);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l419->SetBinContent(9,0.05633584);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l419->SetBinContent(10,0.06320348);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l419->SetBinContent(11,0.04357659);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l419->SetBinContent(12,0.06794768);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l419->SetBinContent(13,0.04523574);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l419->SetBinContent(14,0.03078258);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l419->SetBinContent(15,0.02821149);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l419->SetBinContent(16,0.01405709);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l419->SetBinContent(17,0.00266919);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l419->SetBinContent(18,0.002708116);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l419->SetBinContent(19,0.2651129);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l419->SetBinError(6,0.008798867);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l419->SetBinError(7,0.006927361);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l419->SetBinError(8,0.009410384);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l419->SetBinError(9,0.007759675);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l419->SetBinError(10,0.00846503);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l419->SetBinError(11,0.007566448);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l419->SetBinError(12,0.009589763);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l419->SetBinError(13,0.007951139);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l419->SetBinError(14,0.006309971);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l419->SetBinError(15,0.005904418);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l419->SetBinError(16,0.003809649);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l419->SetBinError(17,0.001930826);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l419->SetBinError(18,0.001733315);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l419->SetBinError(19,0.01740494);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l419->SetEntries(1320);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l419->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l419->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l419->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l419->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l419->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l419->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l419->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l419->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l419->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l419->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l419->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l419->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l419->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l419->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l419->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l->Add(new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l,"");
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l->Draw("hist same noclear");
   
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
   2.682909,
   1.637375,
   2.194839,
   1.718328,
   1.792332,
   1.7808,
   1.169764,
   0.951637,
   1.715377,
   0.3633296,
   0.08825863,
   0.01133099,
   0.01823409,
   4.670976,
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
   0.9026343,
   0.6568114,
   1.16465,
   1.060606,
   1.084442,
   1.1372,
   0.6153628,
   0.4674974,
   0.9638609,
   0.05321592,
   0.3506843,
   0.008816663,
   0.01388149,
   2.044941,
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
   1.372695,
   0.6567308,
   1.164615,
   1.086888,
   1.084382,
   1.237557,
   0.6153285,
   0.5419375,
   0.9638482,
   0.05294904,
   0.3512134,
   0.008820421,
   0.0138694,
   2.044902,
   0};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(20,_fx3083,_fy3083,_felx3083,_fehx3083,_fely3083,_fehy3083);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(12);
   grae->SetFillStyle(3004);
   grae->SetLineColor(12);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3083 = new TH1F("Graph_Graph3083","",100,0,110);
   Graph_Graph3083->SetMinimum(-0.960256);
   Graph_Graph3083->SetMaximum(7.413708);
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
   grae = new TGraphAsymmErrors(20,_fx3084,_fy3084,_felx3084,_fehx3084,_fely3084,_fehy3084);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(1);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3084 = new TH1F("Graph_Graph3084","",100,0,110);
   Graph_Graph3084->SetMinimum(0);
   Graph_Graph3084->SetMaximum(1.262698);
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
   TLegendEntry *entry=leg->AddEntry("new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l","Data","EPL");
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
   entry=leg->AddEntry("new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l","Data","EPL");
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
   hframe_copy420->SetMaximum(12.34022);
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
   ccwh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l->Modified();
   ccwh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l->cd();
   ccwh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l->SetSelected(ccwh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l);
}
