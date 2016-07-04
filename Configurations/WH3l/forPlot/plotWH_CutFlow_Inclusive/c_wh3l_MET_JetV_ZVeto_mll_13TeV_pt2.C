void c_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2()
{
//=========Macro generated from canvas: ccwh3l_MET_JetV_ZVeto_mll_13TeV_pt2/cc
//=========  (Sun Jul  3 16:19:20 2016) by ROOT version6.02/13
   TCanvas *ccwh3l_MET_JetV_ZVeto_mll_13TeV_pt2 = new TCanvas("ccwh3l_MET_JetV_ZVeto_mll_13TeV_pt2", "cc",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   ccwh3l_MET_JetV_ZVeto_mll_13TeV_pt2->SetHighLightColor(2);
   ccwh3l_MET_JetV_ZVeto_mll_13TeV_pt2->Range(-12,-2.161843,156.75,14.46772);
   ccwh3l_MET_JetV_ZVeto_mll_13TeV_pt2->SetFillColor(0);
   ccwh3l_MET_JetV_ZVeto_mll_13TeV_pt2->SetBorderMode(0);
   ccwh3l_MET_JetV_ZVeto_mll_13TeV_pt2->SetBorderSize(2);
   ccwh3l_MET_JetV_ZVeto_mll_13TeV_pt2->SetTickx(1);
   ccwh3l_MET_JetV_ZVeto_mll_13TeV_pt2->SetTicky(1);
   ccwh3l_MET_JetV_ZVeto_mll_13TeV_pt2->SetLeftMargin(0.16);
   ccwh3l_MET_JetV_ZVeto_mll_13TeV_pt2->SetRightMargin(0.04);
   ccwh3l_MET_JetV_ZVeto_mll_13TeV_pt2->SetTopMargin(0.05);
   ccwh3l_MET_JetV_ZVeto_mll_13TeV_pt2->SetBottomMargin(0.13);
   ccwh3l_MET_JetV_ZVeto_mll_13TeV_pt2->SetFrameFillStyle(0);
   ccwh3l_MET_JetV_ZVeto_mll_13TeV_pt2->SetFrameBorderMode(0);
   ccwh3l_MET_JetV_ZVeto_mll_13TeV_pt2->SetFrameFillStyle(0);
   ccwh3l_MET_JetV_ZVeto_mll_13TeV_pt2->SetFrameBorderMode(0);
   
   TH1F *hframe431 = new TH1F("hframe431","",1000,15,150);
   hframe431->SetMinimum(0);
   hframe431->SetMaximum(13.63624);
   hframe431->SetDirectory(0);
   hframe431->SetStats(0);
   hframe431->SetLineStyle(0);
   hframe431->SetMarkerStyle(20);
   hframe431->GetXaxis()->SetTitle("lept2_p_{T} [GeV]");
   hframe431->GetXaxis()->SetNdivisions(506);
   hframe431->GetXaxis()->SetLabelFont(42);
   hframe431->GetXaxis()->SetLabelOffset(0.007);
   hframe431->GetXaxis()->SetLabelSize(0.05);
   hframe431->GetXaxis()->SetTitleSize(0.06);
   hframe431->GetXaxis()->SetTitleOffset(0.9);
   hframe431->GetXaxis()->SetTitleFont(42);
   hframe431->GetYaxis()->SetTitle("Events");
   hframe431->GetYaxis()->SetLabelFont(42);
   hframe431->GetYaxis()->SetLabelOffset(0.007);
   hframe431->GetYaxis()->SetLabelSize(0.05);
   hframe431->GetYaxis()->SetTitleSize(0.06);
   hframe431->GetYaxis()->SetTitleOffset(1.25);
   hframe431->GetYaxis()->SetTitleFont(42);
   hframe431->GetZaxis()->SetLabelFont(42);
   hframe431->GetZaxis()->SetLabelOffset(0.007);
   hframe431->GetZaxis()->SetLabelSize(0.05);
   hframe431->GetZaxis()->SetTitleSize(0.06);
   hframe431->GetZaxis()->SetTitleFont(42);
   hframe431->Draw(" ");
   
   THStack *thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2 = new THStack();
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2->SetName("thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2");
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2->SetTitle("thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2");
   
   TH1F *thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2_stack_87 = new TH1F("thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2_stack_87","thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2",25,15,150);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2_stack_87->SetMinimum(-1.138982);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2_stack_87->SetMaximum(5.727222);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2_stack_87->SetDirectory(0);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2_stack_87->SetStats(0);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2_stack_87->SetLineStyle(0);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2_stack_87->SetMarkerStyle(20);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2_stack_87->GetXaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2_stack_87->GetXaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2_stack_87->GetXaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2_stack_87->GetXaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2_stack_87->GetXaxis()->SetTitleOffset(0.9);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2_stack_87->GetXaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2_stack_87->GetYaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2_stack_87->GetYaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2_stack_87->GetYaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2_stack_87->GetYaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2_stack_87->GetYaxis()->SetTitleOffset(1.25);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2_stack_87->GetYaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2_stack_87->GetZaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2_stack_87->GetZaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2_stack_87->GetZaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2_stack_87->GetZaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2_stack_87->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2->SetHistogram(thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2_stack_87);
   
   
   TH1D *new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2432 = new TH1D("new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2432","histo_Fake",25,15,150);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2432->SetBinContent(1,-0.3678217);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2432->SetBinContent(2,1.838026);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2432->SetBinContent(3,3.713187);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2432->SetBinContent(4,0.6013895);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2432->SetBinContent(5,1.747731);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2432->SetBinContent(6,-0.04457319);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2432->SetBinContent(7,1.424504);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2432->SetBinContent(8,0.1278649);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2432->SetBinContent(9,-0.0005213583);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2432->SetBinContent(10,0.4022812);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2432->SetBinContent(11,0.2755572);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2432->SetBinContent(12,0.01119502);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2432->SetBinError(1,0.7711607);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2432->SetBinError(2,0.7623793);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2432->SetBinError(3,1.545455);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2432->SetBinError(4,0.8642366);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2432->SetBinError(5,1.088344);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2432->SetBinError(6,0.1347064);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2432->SetBinError(7,0.9261894);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2432->SetBinError(8,0.1356155);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2432->SetBinError(9,0.0005618895);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2432->SetBinError(10,0.3670605);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2432->SetBinError(11,0.2772125);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2432->SetBinError(12,0.01119502);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2432->SetEntries(108);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2432->SetFillColor(ci);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2432->SetFillStyle(3001);

   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2432->SetLineColor(ci);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2432->GetXaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2432->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2432->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2432->GetXaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2432->GetYaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2432->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2432->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2432->GetYaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2432->GetZaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2432->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2432->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2432->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2->Add(new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2,"");
   
   TH1D *new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2433 = new TH1D("new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2433","histo_WW",25,15,150);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2433->SetBinContent(2,0.0161241);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2433->SetBinContent(3,0.0285913);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2433->SetBinContent(4,0.01447441);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2433->SetBinContent(6,0.0142084);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2433->SetBinContent(10,0.01530373);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2433->SetBinError(2,0.0161241);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2433->SetBinError(3,0.02093881);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2433->SetBinError(4,0.01447441);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2433->SetBinError(6,0.0142084);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2433->SetBinError(10,0.01530373);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2433->SetEntries(6);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2433->SetFillColor(ci);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2433->SetFillStyle(3001);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2433->SetLineColor(ci);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2433->GetXaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2433->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2433->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2433->GetXaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2433->GetYaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2433->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2433->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2433->GetYaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2433->GetZaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2433->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2433->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2433->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2->Add(new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2,"");
   
   TH1D *new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2434 = new TH1D("new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2434","histo_VVV",25,15,150);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2434->SetBinContent(1,0.007171459);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2434->SetBinContent(2,0.03522307);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2434->SetBinContent(3,0.03606625);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2434->SetBinContent(4,0.04903123);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2434->SetBinContent(5,0.0381019);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2434->SetBinContent(6,0.02958745);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2434->SetBinContent(7,0.03647343);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2434->SetBinContent(8,0.02685526);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2434->SetBinContent(9,0.0144117);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2434->SetBinContent(10,0.0122759);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2434->SetBinContent(11,0.01198411);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2434->SetBinContent(12,-0.002836462);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2434->SetBinContent(13,0.0006046216);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2434->SetBinContent(14,0.00685648);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2434->SetBinContent(15,0.004291641);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2434->SetBinContent(16,0.001928762);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2434->SetBinContent(17,0.002276835);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2434->SetBinContent(19,0.0006845661);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2434->SetBinContent(20,0.002142702);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2434->SetBinContent(23,0.00159006);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2434->SetBinContent(24,-0.002686125);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2434->SetBinContent(26,0.002827735);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2434->SetBinError(1,0.003835332);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2434->SetBinError(2,0.008989707);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2434->SetBinError(3,0.01028585);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2434->SetBinError(4,0.01042349);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2434->SetBinError(5,0.009564051);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2434->SetBinError(6,0.01068876);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2434->SetBinError(7,0.009250792);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2434->SetBinError(8,0.007624535);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2434->SetBinError(9,0.005590699);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2434->SetBinError(10,0.005058018);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2434->SetBinError(11,0.00515619);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2434->SetBinError(12,0.002836462);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2434->SetBinError(13,0.0006046216);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2434->SetBinError(14,0.003998519);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2434->SetBinError(15,0.003073303);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2434->SetBinError(16,0.001928762);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2434->SetBinError(17,0.002276835);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2434->SetBinError(19,0.003351122);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2434->SetBinError(20,0.002142702);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2434->SetBinError(23,0.00159006);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2434->SetBinError(24,0.002686125);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2434->SetBinError(26,0.002373698);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2434->SetEntries(180);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2434->SetFillColor(ci);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2434->SetFillStyle(3001);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2434->SetLineColor(ci);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2434->GetXaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2434->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2434->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2434->GetXaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2434->GetYaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2434->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2434->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2434->GetYaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2434->GetZaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2434->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2434->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2434->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2->Add(new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2,"");
   
   TH1D *new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2435 = new TH1D("new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2435","histo_Vg",25,15,150);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2435->SetBinContent(1,0.3572982);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2435->SetBinContent(2,1.600766);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2435->SetBinContent(3,0.2597775);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2435->SetBinContent(4,0.2327434);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2435->SetBinContent(5,0.09276484);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2435->SetBinContent(6,0.1048186);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2435->SetBinError(1,0.1719672);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2435->SetBinError(2,0.4034132);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2435->SetBinError(3,0.2693479);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2435->SetBinError(4,0.201249);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2435->SetBinError(5,0.09276484);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2435->SetBinError(6,0.1048186);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2435->SetEntries(42);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2435->SetFillColor(ci);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2435->SetFillStyle(3001);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2435->SetLineColor(ci);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2435->GetXaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2435->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2435->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2435->GetXaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2435->GetYaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2435->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2435->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2435->GetYaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2435->GetZaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2435->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2435->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2435->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2->Add(new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2,"");
   
   TH1D *new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2436 = new TH1D("new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2436","histo_ZZ",25,15,150);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2436->SetBinContent(1,0.1317747);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2436->SetBinContent(2,0.08348535);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2436->SetBinContent(3,0.1378766);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2436->SetBinContent(4,0.04332869);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2436->SetBinContent(5,0.03939452);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2436->SetBinContent(7,0.05112314);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2436->SetBinContent(8,0.03513683);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2436->SetBinContent(9,0.02976016);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2436->SetBinContent(10,0.04527812);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2436->SetBinContent(13,0.02856258);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2436->SetBinError(1,0.06723137);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2436->SetBinError(2,0.05187297);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2436->SetBinError(3,0.07985823);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2436->SetBinError(4,0.04332869);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2436->SetBinError(5,0.03939452);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2436->SetBinError(7,0.05112314);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2436->SetBinError(8,0.03513683);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2436->SetBinError(9,0.02976016);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2436->SetBinError(10,0.04527812);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2436->SetBinError(13,0.02856258);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2436->SetEntries(18);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2436->SetFillColor(ci);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2436->SetFillStyle(3001);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2436->SetLineColor(ci);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2436->GetXaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2436->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2436->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2436->GetXaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2436->GetYaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2436->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2436->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2436->GetYaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2436->GetZaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2436->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2436->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2436->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2->Add(new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2,"");
   
   TH1D *new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2437 = new TH1D("new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2437","histo_WZ",25,15,150);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2437->SetBinContent(1,1.149171);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2437->SetBinContent(2,1.409063);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2437->SetBinContent(3,1.151237);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2437->SetBinContent(4,0.7699854);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2437->SetBinContent(5,0.6627581);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2437->SetBinContent(6,0.4829937);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2437->SetBinContent(7,0.3846287);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2437->SetBinContent(8,0.2739875);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2437->SetBinContent(9,0.1984251);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2437->SetBinContent(10,0.1877628);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2437->SetBinContent(11,0.120332);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2437->SetBinContent(12,0.08349378);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2437->SetBinContent(13,0.07585878);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2437->SetBinContent(14,0.07531324);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2437->SetBinContent(15,0.05541796);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2437->SetBinContent(16,0.05671911);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2437->SetBinContent(17,0.02569102);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2437->SetBinContent(18,0.02605523);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2437->SetBinContent(19,0.04281897);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2437->SetBinContent(20,0.02161285);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2437->SetBinContent(21,0.01872941);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2437->SetBinContent(22,0.006186721);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2437->SetBinContent(23,0.005827953);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2437->SetBinContent(24,0.007172836);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2437->SetBinContent(25,0.01633981);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2437->SetBinContent(26,0.08163405);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2437->SetBinError(1,0.07863106);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2437->SetBinError(2,0.08842179);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2437->SetBinError(3,0.07919056);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2437->SetBinError(4,0.06443793);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2437->SetBinError(5,0.05958564);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2437->SetBinError(6,0.05131717);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2437->SetBinError(7,0.04590597);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2437->SetBinError(8,0.03848004);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2437->SetBinError(9,0.0323654);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2437->SetBinError(10,0.03212858);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2437->SetBinError(11,0.0255472);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2437->SetBinError(12,0.02152296);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2437->SetBinError(13,0.0200335);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2437->SetBinError(14,0.01895285);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2437->SetBinError(15,0.01797398);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2437->SetBinError(16,0.01727423);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2437->SetBinError(17,0.01110437);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2437->SetBinError(18,0.01178602);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2437->SetBinError(19,0.01458039);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2437->SetBinError(20,0.01081512);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2437->SetBinError(21,0.01082053);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2437->SetBinError(22,0.006186721);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2437->SetBinError(23,0.005827953);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2437->SetBinError(24,0.005273836);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2437->SetBinError(25,0.009467613);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2437->SetBinError(26,0.02108558);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2437->SetEntries(1516);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2437->SetFillColor(ci);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2437->SetFillStyle(3001);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2437->SetLineColor(ci);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2437->GetXaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2437->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2437->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2437->GetXaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2437->GetYaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2437->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2437->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2437->GetYaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2437->GetZaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2437->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2437->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2437->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2->Add(new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2,"");
   
   TH1D *new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2438 = new TH1D("new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2438","histo_H_htt",25,15,150);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2438->SetBinContent(1,0.07168962);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2438->SetBinContent(2,0.09333819);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2438->SetBinContent(3,0.1277613);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2438->SetBinContent(4,0.1182337);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2438->SetBinContent(5,0.07616498);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2438->SetBinContent(6,0.05431291);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2438->SetBinContent(7,0.06037554);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2438->SetBinContent(8,0.0430441);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2438->SetBinContent(9,0.02543809);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2438->SetBinContent(10,0.02264802);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2438->SetBinContent(11,0.02174519);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2438->SetBinContent(12,0.01670568);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2438->SetBinContent(13,0.01485864);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2438->SetBinContent(14,0.01412485);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2438->SetBinContent(15,0.009494404);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2438->SetBinContent(16,0.009113916);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2438->SetBinContent(17,0.01239273);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2438->SetBinContent(18,0.001874538);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2438->SetBinContent(19,0.001695584);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2438->SetBinContent(20,0.0006046926);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2438->SetBinContent(21,0.003084204);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2438->SetBinContent(22,0.001005085);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2438->SetBinContent(23,0.0002145779);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2438->SetBinContent(24,0.001339214);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2438->SetBinContent(25,0.001706028);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2438->SetBinContent(26,0.009041972);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2438->SetBinError(1,0.009476501);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2438->SetBinError(2,0.01032179);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2438->SetBinError(3,0.01199419);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2438->SetBinError(4,0.01192829);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2438->SetBinError(5,0.009246898);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2438->SetBinError(6,0.007611749);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2438->SetBinError(7,0.008760607);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2438->SetBinError(8,0.00721);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2438->SetBinError(9,0.005143071);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2438->SetBinError(10,0.005145657);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2438->SetBinError(11,0.00527393);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2438->SetBinError(12,0.004956921);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2438->SetBinError(13,0.0042736);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2438->SetBinError(14,0.004382365);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2438->SetBinError(15,0.003294607);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2438->SetBinError(16,0.003221877);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2438->SetBinError(17,0.004172641);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2438->SetBinError(18,0.001561799);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2438->SetBinError(19,0.001695584);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2438->SetBinError(20,0.0003994273);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2438->SetBinError(21,0.001771028);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2438->SetBinError(22,0.001005085);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2438->SetBinError(23,0.0002145779);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2438->SetBinError(24,0.001149454);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2438->SetBinError(25,0.001362109);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2438->SetBinError(26,0.002861429);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2438->SetEntries(1320);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2438->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2438->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2438->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2438->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2438->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2438->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2438->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2438->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2438->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2438->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2438->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2438->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2438->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2438->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2438->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2->Add(new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2,"");
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2->Draw("hist same");
   
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2 = new THStack();
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2->SetName("thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2");
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2->SetTitle("thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2");
   
   TH1F *thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2_stack_88 = new TH1F("thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2_stack_88","thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2",25,15,150);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2_stack_88->SetMinimum(0);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2_stack_88->SetMaximum(0.1467433);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2_stack_88->SetDirectory(0);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2_stack_88->SetStats(0);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2_stack_88->SetLineStyle(0);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2_stack_88->SetMarkerStyle(20);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2_stack_88->GetXaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2_stack_88->GetXaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2_stack_88->GetXaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2_stack_88->GetXaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2_stack_88->GetXaxis()->SetTitleOffset(0.9);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2_stack_88->GetXaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2_stack_88->GetYaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2_stack_88->GetYaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2_stack_88->GetYaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2_stack_88->GetYaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2_stack_88->GetYaxis()->SetTitleOffset(1.25);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2_stack_88->GetYaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2_stack_88->GetZaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2_stack_88->GetZaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2_stack_88->GetZaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2_stack_88->GetZaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2_stack_88->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2->SetHistogram(thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2_stack_88);
   
   
   TH1D *new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2439 = new TH1D("new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2439","histo_H_htt",25,15,150);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2439->SetBinContent(1,0.07168962);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2439->SetBinContent(2,0.09333819);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2439->SetBinContent(3,0.1277613);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2439->SetBinContent(4,0.1182337);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2439->SetBinContent(5,0.07616498);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2439->SetBinContent(6,0.05431291);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2439->SetBinContent(7,0.06037554);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2439->SetBinContent(8,0.0430441);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2439->SetBinContent(9,0.02543809);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2439->SetBinContent(10,0.02264802);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2439->SetBinContent(11,0.02174519);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2439->SetBinContent(12,0.01670568);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2439->SetBinContent(13,0.01485864);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2439->SetBinContent(14,0.01412485);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2439->SetBinContent(15,0.009494404);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2439->SetBinContent(16,0.009113916);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2439->SetBinContent(17,0.01239273);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2439->SetBinContent(18,0.001874538);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2439->SetBinContent(19,0.001695584);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2439->SetBinContent(20,0.0006046926);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2439->SetBinContent(21,0.003084204);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2439->SetBinContent(22,0.001005085);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2439->SetBinContent(23,0.0002145779);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2439->SetBinContent(24,0.001339214);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2439->SetBinContent(25,0.001706028);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2439->SetBinContent(26,0.009041972);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2439->SetBinError(1,0.009476501);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2439->SetBinError(2,0.01032179);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2439->SetBinError(3,0.01199419);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2439->SetBinError(4,0.01192829);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2439->SetBinError(5,0.009246898);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2439->SetBinError(6,0.007611749);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2439->SetBinError(7,0.008760607);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2439->SetBinError(8,0.00721);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2439->SetBinError(9,0.005143071);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2439->SetBinError(10,0.005145657);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2439->SetBinError(11,0.00527393);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2439->SetBinError(12,0.004956921);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2439->SetBinError(13,0.0042736);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2439->SetBinError(14,0.004382365);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2439->SetBinError(15,0.003294607);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2439->SetBinError(16,0.003221877);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2439->SetBinError(17,0.004172641);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2439->SetBinError(18,0.001561799);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2439->SetBinError(19,0.001695584);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2439->SetBinError(20,0.0003994273);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2439->SetBinError(21,0.001771028);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2439->SetBinError(22,0.001005085);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2439->SetBinError(23,0.0002145779);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2439->SetBinError(24,0.001149454);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2439->SetBinError(25,0.001362109);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2439->SetBinError(26,0.002861429);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2439->SetEntries(1320);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2439->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2439->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2439->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2439->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2439->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2439->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2439->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2439->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2439->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2439->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2439->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2439->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2439->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2439->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2439->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2->Add(new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2,"");
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2->Draw("hist same noclear");
   
   Double_t _fx3087[25] = {
   17.7,
   23.1,
   28.5,
   33.9,
   39.3,
   44.7,
   50.1,
   55.5,
   60.9,
   66.3,
   71.7,
   77.1,
   82.5,
   87.9,
   93.3,
   98.7,
   104.1,
   109.5,
   114.9,
   120.3,
   125.7,
   131.1,
   136.5,
   141.9,
   147.3};
   Double_t _fy3087[25] = {
   1.277594,
   4.982687,
   5.326735,
   1.710953,
   2.580751,
   0.5870349,
   1.89673,
   0.4638444,
   0.2420756,
   0.6629018,
   0.4078734,
   0.09185234,
   0.105026,
   0.08216973,
   0.0597096,
   0.05864787,
   0.02796786,
   0.02605523,
   0.04350354,
   0.02375555,
   0.01872941,
   0.006186721,
   0.007418013,
   0.00448671,
   0.01633981};
   Double_t _felx3087[25] = {
   2.7,
   2.7,
   2.7,
   2.7,
   2.7,
   2.7,
   2.7,
   2.7,
   2.7,
   2.7,
   2.7,
   2.7,
   2.7,
   2.7,
   2.7,
   2.7,
   2.7,
   2.7,
   2.7,
   2.7,
   2.7,
   2.7,
   2.7,
   2.7,
   2.7};
   Double_t _fely3087[25] = {
   1.108017,
   1.485855,
   2.382352,
   0.9605706,
   1.428068,
   0.3179253,
   1.147186,
   0.2156524,
   0.07017932,
   0.4858855,
   0.3213458,
   0.03592979,
   0.04928247,
   0.0242619,
   0.02153302,
   0.01949773,
   0.01359946,
   0.01183351,
   0.01540342,
   0.01319083,
   0.01084683,
   0.006186937,
   0.007592005,
   0.008404247,
   0.009498932};
   Double_t _fehx3087[25] = {
   2.7,
   2.7,
   2.7,
   2.7,
   2.7,
   2.7,
   2.7,
   2.7,
   2.7,
   2.7,
   2.7,
   2.7,
   2.7,
   2.7,
   2.7,
   2.7,
   2.7,
   2.7,
   2.7,
   2.7,
   2.7,
   2.7,
   2.7,
   2.7,
   2.7};
   Double_t _fehy3087[25] = {
   0.712392,
   1.485525,
   2.39033,
   1.217965,
   1.428038,
   0.2285464,
   1.147178,
   0.2231454,
   0.07020859,
   0.4858833,
   0.3229217,
   0.0359343,
   0.04928865,
   0.02416322,
   0.02152485,
   0.01945508,
   0.01358917,
   0.01180666,
   0.01805963,
   0.01319734,
   0.0108494,
   0.006186938,
   0.007589343,
   0.008410467,
   0.009497046};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(25,_fx3087,_fy3087,_felx3087,_fehx3087,_fely3087,_fehy3087);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(12);
   grae->SetFillStyle(3004);
   grae->SetLineColor(12);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3087 = new TH1F("Graph_Graph3087","",100,1.5,163.5);
   Graph_Graph3087->SetMinimum(-0.7760158);
   Graph_Graph3087->SetMaximum(8.489164);
   Graph_Graph3087->SetDirectory(0);
   Graph_Graph3087->SetStats(0);
   Graph_Graph3087->SetLineStyle(0);
   Graph_Graph3087->SetMarkerStyle(20);
   Graph_Graph3087->GetXaxis()->SetLabelFont(42);
   Graph_Graph3087->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3087->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3087->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3087->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3087->GetXaxis()->SetTitleFont(42);
   Graph_Graph3087->GetYaxis()->SetLabelFont(42);
   Graph_Graph3087->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3087->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3087->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3087->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3087->GetYaxis()->SetTitleFont(42);
   Graph_Graph3087->GetZaxis()->SetLabelFont(42);
   Graph_Graph3087->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3087->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3087->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3087->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3087);
   
   grae->Draw("2");
   
   Double_t _fx3088[25] = {
   17.7,
   23.1,
   28.5,
   33.9,
   39.3,
   44.7,
   50.1,
   55.5,
   60.9,
   66.3,
   71.7,
   77.1,
   82.5,
   87.9,
   93.3,
   98.7,
   104.1,
   109.5,
   114.9,
   120.3,
   125.7,
   131.1,
   136.5,
   141.9,
   147.3};
   Double_t _fy3088[25] = {
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
   Double_t _felx3088[25] = {
   2.7,
   2.7,
   2.7,
   2.7,
   2.7,
   2.7,
   2.7,
   2.7,
   2.7,
   2.7,
   2.7,
   2.7,
   2.7,
   2.7,
   2.7,
   2.7,
   2.7,
   2.7,
   2.7,
   2.7,
   2.7,
   2.7,
   2.7,
   2.7,
   2.7};
   Double_t _fely3088[25] = {
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
   Double_t _fehx3088[25] = {
   2.7,
   2.7,
   2.7,
   2.7,
   2.7,
   2.7,
   2.7,
   2.7,
   2.7,
   2.7,
   2.7,
   2.7,
   2.7,
   2.7,
   2.7,
   2.7,
   2.7,
   2.7,
   2.7,
   2.7,
   2.7,
   2.7,
   2.7,
   2.7,
   2.7};
   Double_t _fehy3088[25] = {
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
   grae = new TGraphAsymmErrors(25,_fx3088,_fy3088,_felx3088,_fehx3088,_fely3088,_fehy3088);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(1);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3088 = new TH1F("Graph_Graph3088","",100,1.5,163.5);
   Graph_Graph3088->SetMinimum(0);
   Graph_Graph3088->SetMaximum(1.262698);
   Graph_Graph3088->SetDirectory(0);
   Graph_Graph3088->SetStats(0);
   Graph_Graph3088->SetLineStyle(0);
   Graph_Graph3088->SetMarkerStyle(20);
   Graph_Graph3088->GetXaxis()->SetLabelFont(42);
   Graph_Graph3088->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3088->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3088->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3088->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3088->GetXaxis()->SetTitleFont(42);
   Graph_Graph3088->GetYaxis()->SetLabelFont(42);
   Graph_Graph3088->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3088->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3088->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3088->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3088->GetYaxis()->SetTitleFont(42);
   Graph_Graph3088->GetZaxis()->SetLabelFont(42);
   Graph_Graph3088->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3088->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3088->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3088->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3088);
   
   grae->Draw("p0");
   
   TLegend *leg = new TLegend(0.2,0.7,0.8,0.9,NULL,"brNDC");
   leg->SetTextFont(62);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2","Data","EPL");
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
   entry=leg->AddEntry("new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2","Data","EPL");
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
   
   TH1F *hframe_copy440 = new TH1F("hframe_copy440","",1000,15,150);
   hframe_copy440->SetMinimum(0);
   hframe_copy440->SetMaximum(13.63624);
   hframe_copy440->SetDirectory(0);
   hframe_copy440->SetStats(0);
   hframe_copy440->SetLineStyle(0);
   hframe_copy440->SetMarkerStyle(20);
   hframe_copy440->GetXaxis()->SetTitle("lept2_p_{T} [GeV]");
   hframe_copy440->GetXaxis()->SetNdivisions(506);
   hframe_copy440->GetXaxis()->SetLabelFont(42);
   hframe_copy440->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy440->GetXaxis()->SetLabelSize(0.05);
   hframe_copy440->GetXaxis()->SetTitleSize(0.06);
   hframe_copy440->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy440->GetXaxis()->SetTitleFont(42);
   hframe_copy440->GetYaxis()->SetTitle("Events");
   hframe_copy440->GetYaxis()->SetLabelFont(42);
   hframe_copy440->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy440->GetYaxis()->SetLabelSize(0.05);
   hframe_copy440->GetYaxis()->SetTitleSize(0.06);
   hframe_copy440->GetYaxis()->SetTitleOffset(1.25);
   hframe_copy440->GetYaxis()->SetTitleFont(42);
   hframe_copy440->GetZaxis()->SetLabelFont(42);
   hframe_copy440->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy440->GetZaxis()->SetLabelSize(0.05);
   hframe_copy440->GetZaxis()->SetTitleSize(0.06);
   hframe_copy440->GetZaxis()->SetTitleFont(42);
   hframe_copy440->Draw("sameaxis");
   ccwh3l_MET_JetV_ZVeto_mll_13TeV_pt2->Modified();
   ccwh3l_MET_JetV_ZVeto_mll_13TeV_pt2->cd();
   ccwh3l_MET_JetV_ZVeto_mll_13TeV_pt2->SetSelected(ccwh3l_MET_JetV_ZVeto_mll_13TeV_pt2);
}
