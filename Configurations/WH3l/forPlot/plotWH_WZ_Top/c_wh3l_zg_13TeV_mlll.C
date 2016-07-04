void c_wh3l_zg_13TeV_mlll()
{
//=========Macro generated from canvas: ccwh3l_zg_13TeV_mlll/cc
//=========  (Sun Jul  3 02:18:07 2016) by ROOT version6.02/13
   TCanvas *ccwh3l_zg_13TeV_mlll = new TCanvas("ccwh3l_zg_13TeV_mlll", "cc",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   ccwh3l_zg_13TeV_mlll->SetHighLightColor(2);
   ccwh3l_zg_13TeV_mlll->Range(76,-8.371962,101,56.02775);
   ccwh3l_zg_13TeV_mlll->SetFillColor(0);
   ccwh3l_zg_13TeV_mlll->SetBorderMode(0);
   ccwh3l_zg_13TeV_mlll->SetBorderSize(2);
   ccwh3l_zg_13TeV_mlll->SetTickx(1);
   ccwh3l_zg_13TeV_mlll->SetTicky(1);
   ccwh3l_zg_13TeV_mlll->SetLeftMargin(0.16);
   ccwh3l_zg_13TeV_mlll->SetRightMargin(0.04);
   ccwh3l_zg_13TeV_mlll->SetTopMargin(0.05);
   ccwh3l_zg_13TeV_mlll->SetBottomMargin(0.13);
   ccwh3l_zg_13TeV_mlll->SetFrameFillStyle(0);
   ccwh3l_zg_13TeV_mlll->SetFrameBorderMode(0);
   ccwh3l_zg_13TeV_mlll->SetFrameFillStyle(0);
   ccwh3l_zg_13TeV_mlll->SetFrameBorderMode(0);
   
   TH1F *hframe111 = new TH1F("hframe111","",1000,80,100);
   hframe111->SetMinimum(0);
   hframe111->SetMaximum(52.80776);
   hframe111->SetDirectory(0);
   hframe111->SetStats(0);
   hframe111->SetLineStyle(0);
   hframe111->SetMarkerStyle(20);
   hframe111->GetXaxis()->SetTitle("m_{lll} [GeV]");
   hframe111->GetXaxis()->SetNdivisions(506);
   hframe111->GetXaxis()->SetLabelFont(42);
   hframe111->GetXaxis()->SetLabelOffset(0.007);
   hframe111->GetXaxis()->SetLabelSize(0.05);
   hframe111->GetXaxis()->SetTitleSize(0.06);
   hframe111->GetXaxis()->SetTitleOffset(0.9);
   hframe111->GetXaxis()->SetTitleFont(42);
   hframe111->GetYaxis()->SetTitle("Events");
   hframe111->GetYaxis()->SetLabelFont(42);
   hframe111->GetYaxis()->SetLabelOffset(0.007);
   hframe111->GetYaxis()->SetLabelSize(0.05);
   hframe111->GetYaxis()->SetTitleSize(0.06);
   hframe111->GetYaxis()->SetTitleOffset(1.25);
   hframe111->GetYaxis()->SetTitleFont(42);
   hframe111->GetZaxis()->SetLabelFont(42);
   hframe111->GetZaxis()->SetLabelOffset(0.007);
   hframe111->GetZaxis()->SetLabelSize(0.05);
   hframe111->GetZaxis()->SetTitleSize(0.06);
   hframe111->GetZaxis()->SetTitleFont(42);
   hframe111->Draw(" ");
   
   THStack *thsBackground_grouped_wh3l_zg_13TeV_mlll = new THStack();
   thsBackground_grouped_wh3l_zg_13TeV_mlll->SetName("thsBackground_grouped_wh3l_zg_13TeV_mlll");
   thsBackground_grouped_wh3l_zg_13TeV_mlll->SetTitle("thsBackground_grouped_wh3l_zg_13TeV_mlll");
   
   TH1F *thsBackground_grouped_wh3l_zg_13TeV_mlll_stack_23 = new TH1F("thsBackground_grouped_wh3l_zg_13TeV_mlll_stack_23","thsBackground_grouped_wh3l_zg_13TeV_mlll",20,80,100);
   thsBackground_grouped_wh3l_zg_13TeV_mlll_stack_23->SetMinimum(-2.547952);
   thsBackground_grouped_wh3l_zg_13TeV_mlll_stack_23->SetMaximum(19.27585);
   thsBackground_grouped_wh3l_zg_13TeV_mlll_stack_23->SetDirectory(0);
   thsBackground_grouped_wh3l_zg_13TeV_mlll_stack_23->SetStats(0);
   thsBackground_grouped_wh3l_zg_13TeV_mlll_stack_23->SetLineStyle(0);
   thsBackground_grouped_wh3l_zg_13TeV_mlll_stack_23->SetMarkerStyle(20);
   thsBackground_grouped_wh3l_zg_13TeV_mlll_stack_23->GetXaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_mlll_stack_23->GetXaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_zg_13TeV_mlll_stack_23->GetXaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_zg_13TeV_mlll_stack_23->GetXaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_zg_13TeV_mlll_stack_23->GetXaxis()->SetTitleOffset(0.9);
   thsBackground_grouped_wh3l_zg_13TeV_mlll_stack_23->GetXaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_mlll_stack_23->GetYaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_mlll_stack_23->GetYaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_zg_13TeV_mlll_stack_23->GetYaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_zg_13TeV_mlll_stack_23->GetYaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_zg_13TeV_mlll_stack_23->GetYaxis()->SetTitleOffset(1.25);
   thsBackground_grouped_wh3l_zg_13TeV_mlll_stack_23->GetYaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_mlll_stack_23->GetZaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_mlll_stack_23->GetZaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_zg_13TeV_mlll_stack_23->GetZaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_zg_13TeV_mlll_stack_23->GetZaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_zg_13TeV_mlll_stack_23->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_mlll->SetHistogram(thsBackground_grouped_wh3l_zg_13TeV_mlll_stack_23);
   
   
   TH1D *new_histo_group_Fake_wh3l_zg_13TeV_mlll112 = new TH1D("new_histo_group_Fake_wh3l_zg_13TeV_mlll112","histo_Fake",20,80,100);
   new_histo_group_Fake_wh3l_zg_13TeV_mlll112->SetBinContent(1,-0.3662092);
   new_histo_group_Fake_wh3l_zg_13TeV_mlll112->SetBinContent(2,-0.07841497);
   new_histo_group_Fake_wh3l_zg_13TeV_mlll112->SetBinContent(3,1.272593);
   new_histo_group_Fake_wh3l_zg_13TeV_mlll112->SetBinContent(4,0.6911072);
   new_histo_group_Fake_wh3l_zg_13TeV_mlll112->SetBinContent(5,1.169806);
   new_histo_group_Fake_wh3l_zg_13TeV_mlll112->SetBinContent(6,-0.2586683);
   new_histo_group_Fake_wh3l_zg_13TeV_mlll112->SetBinContent(7,-1.662539);
   new_histo_group_Fake_wh3l_zg_13TeV_mlll112->SetBinContent(8,1.824396);
   new_histo_group_Fake_wh3l_zg_13TeV_mlll112->SetBinContent(9,0.7159771);
   new_histo_group_Fake_wh3l_zg_13TeV_mlll112->SetBinContent(10,5.499512);
   new_histo_group_Fake_wh3l_zg_13TeV_mlll112->SetBinContent(11,2.780932);
   new_histo_group_Fake_wh3l_zg_13TeV_mlll112->SetBinContent(12,2.334229);
   new_histo_group_Fake_wh3l_zg_13TeV_mlll112->SetBinContent(13,3.854811);
   new_histo_group_Fake_wh3l_zg_13TeV_mlll112->SetBinContent(14,0.8658404);
   new_histo_group_Fake_wh3l_zg_13TeV_mlll112->SetBinContent(15,0.2907802);
   new_histo_group_Fake_wh3l_zg_13TeV_mlll112->SetBinContent(16,2.321786);
   new_histo_group_Fake_wh3l_zg_13TeV_mlll112->SetBinContent(17,0.2540904);
   new_histo_group_Fake_wh3l_zg_13TeV_mlll112->SetBinContent(18,0.4304403);
   new_histo_group_Fake_wh3l_zg_13TeV_mlll112->SetBinContent(19,0.6588276);
   new_histo_group_Fake_wh3l_zg_13TeV_mlll112->SetBinContent(20,0.9815035);
   new_histo_group_Fake_wh3l_zg_13TeV_mlll112->SetBinError(1,0.37882);
   new_histo_group_Fake_wh3l_zg_13TeV_mlll112->SetBinError(2,0.2753745);
   new_histo_group_Fake_wh3l_zg_13TeV_mlll112->SetBinError(3,1.055915);
   new_histo_group_Fake_wh3l_zg_13TeV_mlll112->SetBinError(4,0.6644295);
   new_histo_group_Fake_wh3l_zg_13TeV_mlll112->SetBinError(5,0.8642615);
   new_histo_group_Fake_wh3l_zg_13TeV_mlll112->SetBinError(6,0.8795474);
   new_histo_group_Fake_wh3l_zg_13TeV_mlll112->SetBinError(7,0.8854126);
   new_histo_group_Fake_wh3l_zg_13TeV_mlll112->SetBinError(8,1.325277);
   new_histo_group_Fake_wh3l_zg_13TeV_mlll112->SetBinError(9,1.077708);
   new_histo_group_Fake_wh3l_zg_13TeV_mlll112->SetBinError(10,1.664091);
   new_histo_group_Fake_wh3l_zg_13TeV_mlll112->SetBinError(11,1.422728);
   new_histo_group_Fake_wh3l_zg_13TeV_mlll112->SetBinError(12,1.050724);
   new_histo_group_Fake_wh3l_zg_13TeV_mlll112->SetBinError(13,1.318486);
   new_histo_group_Fake_wh3l_zg_13TeV_mlll112->SetBinError(14,0.9997712);
   new_histo_group_Fake_wh3l_zg_13TeV_mlll112->SetBinError(15,0.4532073);
   new_histo_group_Fake_wh3l_zg_13TeV_mlll112->SetBinError(16,1.188963);
   new_histo_group_Fake_wh3l_zg_13TeV_mlll112->SetBinError(17,0.4061274);
   new_histo_group_Fake_wh3l_zg_13TeV_mlll112->SetBinError(18,0.3298423);
   new_histo_group_Fake_wh3l_zg_13TeV_mlll112->SetBinError(19,0.5612167);
   new_histo_group_Fake_wh3l_zg_13TeV_mlll112->SetBinError(20,0.8114881);
   new_histo_group_Fake_wh3l_zg_13TeV_mlll112->SetEntries(460);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_zg_13TeV_mlll112->SetFillColor(ci);
   new_histo_group_Fake_wh3l_zg_13TeV_mlll112->SetFillStyle(3001);

   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_zg_13TeV_mlll112->SetLineColor(ci);
   new_histo_group_Fake_wh3l_zg_13TeV_mlll112->GetXaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_zg_13TeV_mlll112->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_zg_13TeV_mlll112->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_zg_13TeV_mlll112->GetXaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_zg_13TeV_mlll112->GetYaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_zg_13TeV_mlll112->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_zg_13TeV_mlll112->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_zg_13TeV_mlll112->GetYaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_zg_13TeV_mlll112->GetZaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_zg_13TeV_mlll112->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_zg_13TeV_mlll112->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_zg_13TeV_mlll112->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_mlll->Add(new_histo_group_Fake_wh3l_zg_13TeV_mlll,"");
   
   TH1D *new_histo_group_WW_wh3l_zg_13TeV_mlll113 = new TH1D("new_histo_group_WW_wh3l_zg_13TeV_mlll113","histo_WW",20,80,100);
   new_histo_group_WW_wh3l_zg_13TeV_mlll113->SetBinContent(14,0.009961222);
   new_histo_group_WW_wh3l_zg_13TeV_mlll113->SetBinError(14,0.009961222);
   new_histo_group_WW_wh3l_zg_13TeV_mlll113->SetEntries(1);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_zg_13TeV_mlll113->SetFillColor(ci);
   new_histo_group_WW_wh3l_zg_13TeV_mlll113->SetFillStyle(3001);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_zg_13TeV_mlll113->SetLineColor(ci);
   new_histo_group_WW_wh3l_zg_13TeV_mlll113->GetXaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_zg_13TeV_mlll113->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_zg_13TeV_mlll113->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_zg_13TeV_mlll113->GetXaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_zg_13TeV_mlll113->GetYaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_zg_13TeV_mlll113->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_zg_13TeV_mlll113->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_zg_13TeV_mlll113->GetYaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_zg_13TeV_mlll113->GetZaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_zg_13TeV_mlll113->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_zg_13TeV_mlll113->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_zg_13TeV_mlll113->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_mlll->Add(new_histo_group_WW_wh3l_zg_13TeV_mlll,"");
   
   TH1D *new_histo_group_VVV_wh3l_zg_13TeV_mlll114 = new TH1D("new_histo_group_VVV_wh3l_zg_13TeV_mlll114","histo_VVV",20,80,100);
   new_histo_group_VVV_wh3l_zg_13TeV_mlll114->SetBinContent(2,0.002326441);
   new_histo_group_VVV_wh3l_zg_13TeV_mlll114->SetBinContent(6,0.002503076);
   new_histo_group_VVV_wh3l_zg_13TeV_mlll114->SetBinContent(7,0.002735143);
   new_histo_group_VVV_wh3l_zg_13TeV_mlll114->SetBinContent(8,0.002272721);
   new_histo_group_VVV_wh3l_zg_13TeV_mlll114->SetBinContent(15,0.002475685);
   new_histo_group_VVV_wh3l_zg_13TeV_mlll114->SetBinContent(20,0.002169967);
   new_histo_group_VVV_wh3l_zg_13TeV_mlll114->SetBinError(2,0.002326441);
   new_histo_group_VVV_wh3l_zg_13TeV_mlll114->SetBinError(6,0.002503076);
   new_histo_group_VVV_wh3l_zg_13TeV_mlll114->SetBinError(7,0.002735143);
   new_histo_group_VVV_wh3l_zg_13TeV_mlll114->SetBinError(8,0.00303764);
   new_histo_group_VVV_wh3l_zg_13TeV_mlll114->SetBinError(15,0.002475685);
   new_histo_group_VVV_wh3l_zg_13TeV_mlll114->SetBinError(20,0.002169967);
   new_histo_group_VVV_wh3l_zg_13TeV_mlll114->SetEntries(7);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_zg_13TeV_mlll114->SetFillColor(ci);
   new_histo_group_VVV_wh3l_zg_13TeV_mlll114->SetFillStyle(3001);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_zg_13TeV_mlll114->SetLineColor(ci);
   new_histo_group_VVV_wh3l_zg_13TeV_mlll114->GetXaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_zg_13TeV_mlll114->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_zg_13TeV_mlll114->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_zg_13TeV_mlll114->GetXaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_zg_13TeV_mlll114->GetYaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_zg_13TeV_mlll114->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_zg_13TeV_mlll114->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_zg_13TeV_mlll114->GetYaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_zg_13TeV_mlll114->GetZaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_zg_13TeV_mlll114->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_zg_13TeV_mlll114->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_zg_13TeV_mlll114->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_mlll->Add(new_histo_group_VVV_wh3l_zg_13TeV_mlll,"");
   
   TH1D *new_histo_group_Vg_wh3l_zg_13TeV_mlll115 = new TH1D("new_histo_group_Vg_wh3l_zg_13TeV_mlll115","histo_Vg",20,80,100);
   new_histo_group_Vg_wh3l_zg_13TeV_mlll115->SetBinContent(1,1.167734);
   new_histo_group_Vg_wh3l_zg_13TeV_mlll115->SetBinContent(2,1.511699);
   new_histo_group_Vg_wh3l_zg_13TeV_mlll115->SetBinContent(3,2.346267);
   new_histo_group_Vg_wh3l_zg_13TeV_mlll115->SetBinContent(4,2.345072);
   new_histo_group_Vg_wh3l_zg_13TeV_mlll115->SetBinContent(5,4.056028);
   new_histo_group_Vg_wh3l_zg_13TeV_mlll115->SetBinContent(6,5.276254);
   new_histo_group_Vg_wh3l_zg_13TeV_mlll115->SetBinContent(7,5.571064);
   new_histo_group_Vg_wh3l_zg_13TeV_mlll115->SetBinContent(8,6.424774);
   new_histo_group_Vg_wh3l_zg_13TeV_mlll115->SetBinContent(9,10.29606);
   new_histo_group_Vg_wh3l_zg_13TeV_mlll115->SetBinContent(10,12.51575);
   new_histo_group_Vg_wh3l_zg_13TeV_mlll115->SetBinContent(11,15.47239);
   new_histo_group_Vg_wh3l_zg_13TeV_mlll115->SetBinContent(12,11.8728);
   new_histo_group_Vg_wh3l_zg_13TeV_mlll115->SetBinContent(13,9.44256);
   new_histo_group_Vg_wh3l_zg_13TeV_mlll115->SetBinContent(14,5.579369);
   new_histo_group_Vg_wh3l_zg_13TeV_mlll115->SetBinContent(15,2.943019);
   new_histo_group_Vg_wh3l_zg_13TeV_mlll115->SetBinContent(16,1.518169);
   new_histo_group_Vg_wh3l_zg_13TeV_mlll115->SetBinContent(17,1.715259);
   new_histo_group_Vg_wh3l_zg_13TeV_mlll115->SetBinContent(18,2.140321);
   new_histo_group_Vg_wh3l_zg_13TeV_mlll115->SetBinContent(19,0.8795927);
   new_histo_group_Vg_wh3l_zg_13TeV_mlll115->SetBinContent(20,0.8926684);
   new_histo_group_Vg_wh3l_zg_13TeV_mlll115->SetBinError(1,0.4286198);
   new_histo_group_Vg_wh3l_zg_13TeV_mlll115->SetBinError(2,0.4055907);
   new_histo_group_Vg_wh3l_zg_13TeV_mlll115->SetBinError(3,0.567474);
   new_histo_group_Vg_wh3l_zg_13TeV_mlll115->SetBinError(4,0.543969);
   new_histo_group_Vg_wh3l_zg_13TeV_mlll115->SetBinError(5,0.7137705);
   new_histo_group_Vg_wh3l_zg_13TeV_mlll115->SetBinError(6,0.8249004);
   new_histo_group_Vg_wh3l_zg_13TeV_mlll115->SetBinError(7,0.9117906);
   new_histo_group_Vg_wh3l_zg_13TeV_mlll115->SetBinError(8,1.04059);
   new_histo_group_Vg_wh3l_zg_13TeV_mlll115->SetBinError(9,1.243785);
   new_histo_group_Vg_wh3l_zg_13TeV_mlll115->SetBinError(10,1.276104);
   new_histo_group_Vg_wh3l_zg_13TeV_mlll115->SetBinError(11,1.504002);
   new_histo_group_Vg_wh3l_zg_13TeV_mlll115->SetBinError(12,1.283287);
   new_histo_group_Vg_wh3l_zg_13TeV_mlll115->SetBinError(13,1.181842);
   new_histo_group_Vg_wh3l_zg_13TeV_mlll115->SetBinError(14,0.8832451);
   new_histo_group_Vg_wh3l_zg_13TeV_mlll115->SetBinError(15,0.6488338);
   new_histo_group_Vg_wh3l_zg_13TeV_mlll115->SetBinError(16,0.5662709);
   new_histo_group_Vg_wh3l_zg_13TeV_mlll115->SetBinError(17,0.4997674);
   new_histo_group_Vg_wh3l_zg_13TeV_mlll115->SetBinError(18,0.5295366);
   new_histo_group_Vg_wh3l_zg_13TeV_mlll115->SetBinError(19,0.3183768);
   new_histo_group_Vg_wh3l_zg_13TeV_mlll115->SetBinError(20,0.4380667);
   new_histo_group_Vg_wh3l_zg_13TeV_mlll115->SetEntries(1376);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_zg_13TeV_mlll115->SetFillColor(ci);
   new_histo_group_Vg_wh3l_zg_13TeV_mlll115->SetFillStyle(3001);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_zg_13TeV_mlll115->SetLineColor(ci);
   new_histo_group_Vg_wh3l_zg_13TeV_mlll115->GetXaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_zg_13TeV_mlll115->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_zg_13TeV_mlll115->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_zg_13TeV_mlll115->GetXaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_zg_13TeV_mlll115->GetYaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_zg_13TeV_mlll115->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_zg_13TeV_mlll115->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_zg_13TeV_mlll115->GetYaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_zg_13TeV_mlll115->GetZaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_zg_13TeV_mlll115->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_zg_13TeV_mlll115->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_zg_13TeV_mlll115->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_mlll->Add(new_histo_group_Vg_wh3l_zg_13TeV_mlll,"");
   
   TH1D *new_histo_group_ZZ_wh3l_zg_13TeV_mlll116 = new TH1D("new_histo_group_ZZ_wh3l_zg_13TeV_mlll116","histo_ZZ",20,80,100);
   new_histo_group_ZZ_wh3l_zg_13TeV_mlll116->SetBinContent(3,0.04575732);
   new_histo_group_ZZ_wh3l_zg_13TeV_mlll116->SetBinContent(4,0.04202887);
   new_histo_group_ZZ_wh3l_zg_13TeV_mlll116->SetBinContent(7,0.07269379);
   new_histo_group_ZZ_wh3l_zg_13TeV_mlll116->SetBinContent(8,0.05095265);
   new_histo_group_ZZ_wh3l_zg_13TeV_mlll116->SetBinContent(12,0.04568927);
   new_histo_group_ZZ_wh3l_zg_13TeV_mlll116->SetBinContent(14,0.03984332);
   new_histo_group_ZZ_wh3l_zg_13TeV_mlll116->SetBinContent(15,0.002412119);
   new_histo_group_ZZ_wh3l_zg_13TeV_mlll116->SetBinContent(16,0.04329731);
   new_histo_group_ZZ_wh3l_zg_13TeV_mlll116->SetBinContent(17,0.02824018);
   new_histo_group_ZZ_wh3l_zg_13TeV_mlll116->SetBinContent(18,0.1149077);
   new_histo_group_ZZ_wh3l_zg_13TeV_mlll116->SetBinContent(19,0.04657866);
   new_histo_group_ZZ_wh3l_zg_13TeV_mlll116->SetBinContent(20,0.06096717);
   new_histo_group_ZZ_wh3l_zg_13TeV_mlll116->SetBinError(3,0.04575732);
   new_histo_group_ZZ_wh3l_zg_13TeV_mlll116->SetBinError(4,0.04202887);
   new_histo_group_ZZ_wh3l_zg_13TeV_mlll116->SetBinError(7,0.05243295);
   new_histo_group_ZZ_wh3l_zg_13TeV_mlll116->SetBinError(8,0.05095265);
   new_histo_group_ZZ_wh3l_zg_13TeV_mlll116->SetBinError(12,0.04568927);
   new_histo_group_ZZ_wh3l_zg_13TeV_mlll116->SetBinError(14,0.03984332);
   new_histo_group_ZZ_wh3l_zg_13TeV_mlll116->SetBinError(15,0.002412119);
   new_histo_group_ZZ_wh3l_zg_13TeV_mlll116->SetBinError(16,0.04329731);
   new_histo_group_ZZ_wh3l_zg_13TeV_mlll116->SetBinError(17,0.02824018);
   new_histo_group_ZZ_wh3l_zg_13TeV_mlll116->SetBinError(18,0.06638768);
   new_histo_group_ZZ_wh3l_zg_13TeV_mlll116->SetBinError(19,0.04657866);
   new_histo_group_ZZ_wh3l_zg_13TeV_mlll116->SetBinError(20,0.04320446);
   new_histo_group_ZZ_wh3l_zg_13TeV_mlll116->SetEntries(16);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_zg_13TeV_mlll116->SetFillColor(ci);
   new_histo_group_ZZ_wh3l_zg_13TeV_mlll116->SetFillStyle(3001);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_zg_13TeV_mlll116->SetLineColor(ci);
   new_histo_group_ZZ_wh3l_zg_13TeV_mlll116->GetXaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_zg_13TeV_mlll116->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_zg_13TeV_mlll116->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_zg_13TeV_mlll116->GetXaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_zg_13TeV_mlll116->GetYaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_zg_13TeV_mlll116->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_zg_13TeV_mlll116->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_zg_13TeV_mlll116->GetYaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_zg_13TeV_mlll116->GetZaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_zg_13TeV_mlll116->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_zg_13TeV_mlll116->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_zg_13TeV_mlll116->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_mlll->Add(new_histo_group_ZZ_wh3l_zg_13TeV_mlll,"");
   
   TH1D *new_histo_group_WZ_wh3l_zg_13TeV_mlll117 = new TH1D("new_histo_group_WZ_wh3l_zg_13TeV_mlll117","histo_WZ",20,80,100);
   new_histo_group_WZ_wh3l_zg_13TeV_mlll117->SetBinContent(1,0.0978039);
   new_histo_group_WZ_wh3l_zg_13TeV_mlll117->SetBinContent(2,0.1278557);
   new_histo_group_WZ_wh3l_zg_13TeV_mlll117->SetBinContent(3,0.04520155);
   new_histo_group_WZ_wh3l_zg_13TeV_mlll117->SetBinContent(4,0.06874357);
   new_histo_group_WZ_wh3l_zg_13TeV_mlll117->SetBinContent(5,0.06271076);
   new_histo_group_WZ_wh3l_zg_13TeV_mlll117->SetBinContent(6,0.1077697);
   new_histo_group_WZ_wh3l_zg_13TeV_mlll117->SetBinContent(7,0.0798485);
   new_histo_group_WZ_wh3l_zg_13TeV_mlll117->SetBinContent(8,0.06397292);
   new_histo_group_WZ_wh3l_zg_13TeV_mlll117->SetBinContent(9,0.05857503);
   new_histo_group_WZ_wh3l_zg_13TeV_mlll117->SetBinContent(10,0.1214553);
   new_histo_group_WZ_wh3l_zg_13TeV_mlll117->SetBinContent(11,0.0983068);
   new_histo_group_WZ_wh3l_zg_13TeV_mlll117->SetBinContent(12,0.09571306);
   new_histo_group_WZ_wh3l_zg_13TeV_mlll117->SetBinContent(13,0.1100317);
   new_histo_group_WZ_wh3l_zg_13TeV_mlll117->SetBinContent(14,0.1043201);
   new_histo_group_WZ_wh3l_zg_13TeV_mlll117->SetBinContent(15,0.1041014);
   new_histo_group_WZ_wh3l_zg_13TeV_mlll117->SetBinContent(16,0.07427282);
   new_histo_group_WZ_wh3l_zg_13TeV_mlll117->SetBinContent(17,0.09708856);
   new_histo_group_WZ_wh3l_zg_13TeV_mlll117->SetBinContent(18,0.1035168);
   new_histo_group_WZ_wh3l_zg_13TeV_mlll117->SetBinContent(19,0.120738);
   new_histo_group_WZ_wh3l_zg_13TeV_mlll117->SetBinContent(20,0.1364979);
   new_histo_group_WZ_wh3l_zg_13TeV_mlll117->SetBinError(1,0.0227342);
   new_histo_group_WZ_wh3l_zg_13TeV_mlll117->SetBinError(2,0.02612868);
   new_histo_group_WZ_wh3l_zg_13TeV_mlll117->SetBinError(3,0.01550861);
   new_histo_group_WZ_wh3l_zg_13TeV_mlll117->SetBinError(4,0.01939823);
   new_histo_group_WZ_wh3l_zg_13TeV_mlll117->SetBinError(5,0.01861438);
   new_histo_group_WZ_wh3l_zg_13TeV_mlll117->SetBinError(6,0.0241593);
   new_histo_group_WZ_wh3l_zg_13TeV_mlll117->SetBinError(7,0.02073365);
   new_histo_group_WZ_wh3l_zg_13TeV_mlll117->SetBinError(8,0.01878755);
   new_histo_group_WZ_wh3l_zg_13TeV_mlll117->SetBinError(9,0.01829082);
   new_histo_group_WZ_wh3l_zg_13TeV_mlll117->SetBinError(10,0.02597272);
   new_histo_group_WZ_wh3l_zg_13TeV_mlll117->SetBinError(11,0.02387284);
   new_histo_group_WZ_wh3l_zg_13TeV_mlll117->SetBinError(12,0.02263475);
   new_histo_group_WZ_wh3l_zg_13TeV_mlll117->SetBinError(13,0.02469998);
   new_histo_group_WZ_wh3l_zg_13TeV_mlll117->SetBinError(14,0.02370639);
   new_histo_group_WZ_wh3l_zg_13TeV_mlll117->SetBinError(15,0.0229772);
   new_histo_group_WZ_wh3l_zg_13TeV_mlll117->SetBinError(16,0.02017611);
   new_histo_group_WZ_wh3l_zg_13TeV_mlll117->SetBinError(17,0.02241096);
   new_histo_group_WZ_wh3l_zg_13TeV_mlll117->SetBinError(18,0.02384265);
   new_histo_group_WZ_wh3l_zg_13TeV_mlll117->SetBinError(19,0.02609031);
   new_histo_group_WZ_wh3l_zg_13TeV_mlll117->SetBinError(20,0.02730489);
   new_histo_group_WZ_wh3l_zg_13TeV_mlll117->SetEntries(376);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_zg_13TeV_mlll117->SetFillColor(ci);
   new_histo_group_WZ_wh3l_zg_13TeV_mlll117->SetFillStyle(3001);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_zg_13TeV_mlll117->SetLineColor(ci);
   new_histo_group_WZ_wh3l_zg_13TeV_mlll117->GetXaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_zg_13TeV_mlll117->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_zg_13TeV_mlll117->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_zg_13TeV_mlll117->GetXaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_zg_13TeV_mlll117->GetYaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_zg_13TeV_mlll117->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_zg_13TeV_mlll117->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_zg_13TeV_mlll117->GetYaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_zg_13TeV_mlll117->GetZaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_zg_13TeV_mlll117->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_zg_13TeV_mlll117->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_zg_13TeV_mlll117->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_mlll->Add(new_histo_group_WZ_wh3l_zg_13TeV_mlll,"");
   
   TH1D *new_histo_group_Higgs_wh3l_zg_13TeV_mlll118 = new TH1D("new_histo_group_Higgs_wh3l_zg_13TeV_mlll118","histo_H_htt",20,80,100);
   new_histo_group_Higgs_wh3l_zg_13TeV_mlll118->SetBinContent(1,0.002804977);
   new_histo_group_Higgs_wh3l_zg_13TeV_mlll118->SetBinContent(2,0.001747821);
   new_histo_group_Higgs_wh3l_zg_13TeV_mlll118->SetBinContent(3,0.006064351);
   new_histo_group_Higgs_wh3l_zg_13TeV_mlll118->SetBinContent(4,0.004447393);
   new_histo_group_Higgs_wh3l_zg_13TeV_mlll118->SetBinContent(5,0.002668425);
   new_histo_group_Higgs_wh3l_zg_13TeV_mlll118->SetBinContent(6,0.007077613);
   new_histo_group_Higgs_wh3l_zg_13TeV_mlll118->SetBinContent(7,0.004438575);
   new_histo_group_Higgs_wh3l_zg_13TeV_mlll118->SetBinContent(8,0.002672956);
   new_histo_group_Higgs_wh3l_zg_13TeV_mlll118->SetBinContent(9,0.00441802);
   new_histo_group_Higgs_wh3l_zg_13TeV_mlll118->SetBinContent(10,0.003031301);
   new_histo_group_Higgs_wh3l_zg_13TeV_mlll118->SetBinContent(11,0.006326519);
   new_histo_group_Higgs_wh3l_zg_13TeV_mlll118->SetBinContent(12,0.003384755);
   new_histo_group_Higgs_wh3l_zg_13TeV_mlll118->SetBinContent(13,0.00334585);
   new_histo_group_Higgs_wh3l_zg_13TeV_mlll118->SetBinContent(14,0.005332867);
   new_histo_group_Higgs_wh3l_zg_13TeV_mlll118->SetBinContent(15,0.003718129);
   new_histo_group_Higgs_wh3l_zg_13TeV_mlll118->SetBinContent(16,0.004761036);
   new_histo_group_Higgs_wh3l_zg_13TeV_mlll118->SetBinContent(17,0.00964969);
   new_histo_group_Higgs_wh3l_zg_13TeV_mlll118->SetBinContent(18,0.001131754);
   new_histo_group_Higgs_wh3l_zg_13TeV_mlll118->SetBinContent(19,0.005467602);
   new_histo_group_Higgs_wh3l_zg_13TeV_mlll118->SetBinContent(20,0.006287014);
   new_histo_group_Higgs_wh3l_zg_13TeV_mlll118->SetBinError(1,0.00114044);
   new_histo_group_Higgs_wh3l_zg_13TeV_mlll118->SetBinError(2,0.0006243199);
   new_histo_group_Higgs_wh3l_zg_13TeV_mlll118->SetBinError(3,0.002641981);
   new_histo_group_Higgs_wh3l_zg_13TeV_mlll118->SetBinError(4,0.002241708);
   new_histo_group_Higgs_wh3l_zg_13TeV_mlll118->SetBinError(5,0.001160134);
   new_histo_group_Higgs_wh3l_zg_13TeV_mlll118->SetBinError(6,0.002969245);
   new_histo_group_Higgs_wh3l_zg_13TeV_mlll118->SetBinError(7,0.001976969);
   new_histo_group_Higgs_wh3l_zg_13TeV_mlll118->SetBinError(8,0.001693682);
   new_histo_group_Higgs_wh3l_zg_13TeV_mlll118->SetBinError(9,0.00183035);
   new_histo_group_Higgs_wh3l_zg_13TeV_mlll118->SetBinError(10,0.00137478);
   new_histo_group_Higgs_wh3l_zg_13TeV_mlll118->SetBinError(11,0.003148783);
   new_histo_group_Higgs_wh3l_zg_13TeV_mlll118->SetBinError(12,0.001343038);
   new_histo_group_Higgs_wh3l_zg_13TeV_mlll118->SetBinError(13,0.002180717);
   new_histo_group_Higgs_wh3l_zg_13TeV_mlll118->SetBinError(14,0.002444457);
   new_histo_group_Higgs_wh3l_zg_13TeV_mlll118->SetBinError(15,0.002047);
   new_histo_group_Higgs_wh3l_zg_13TeV_mlll118->SetBinError(16,0.002453771);
   new_histo_group_Higgs_wh3l_zg_13TeV_mlll118->SetBinError(17,0.003094789);
   new_histo_group_Higgs_wh3l_zg_13TeV_mlll118->SetBinError(18,0.000572504);
   new_histo_group_Higgs_wh3l_zg_13TeV_mlll118->SetBinError(19,0.002536487);
   new_histo_group_Higgs_wh3l_zg_13TeV_mlll118->SetBinError(20,0.00319693);
   new_histo_group_Higgs_wh3l_zg_13TeV_mlll118->SetEntries(180);
   new_histo_group_Higgs_wh3l_zg_13TeV_mlll118->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_zg_13TeV_mlll118->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_zg_13TeV_mlll118->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_zg_13TeV_mlll118->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_zg_13TeV_mlll118->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_zg_13TeV_mlll118->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_zg_13TeV_mlll118->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_zg_13TeV_mlll118->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_zg_13TeV_mlll118->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_zg_13TeV_mlll118->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_zg_13TeV_mlll118->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_zg_13TeV_mlll118->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_zg_13TeV_mlll118->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_zg_13TeV_mlll118->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_zg_13TeV_mlll118->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_mlll->Add(new_histo_group_Higgs_wh3l_zg_13TeV_mlll,"");
   thsBackground_grouped_wh3l_zg_13TeV_mlll->Draw("hist same");
   
   thsSignal_grouped_wh3l_zg_13TeV_mlll = new THStack();
   thsSignal_grouped_wh3l_zg_13TeV_mlll->SetName("thsSignal_grouped_wh3l_zg_13TeV_mlll");
   thsSignal_grouped_wh3l_zg_13TeV_mlll->SetTitle("thsSignal_grouped_wh3l_zg_13TeV_mlll");
   
   TH1F *thsSignal_grouped_wh3l_zg_13TeV_mlll_stack_24 = new TH1F("thsSignal_grouped_wh3l_zg_13TeV_mlll_stack_24","thsSignal_grouped_wh3l_zg_13TeV_mlll",20,80,100);
   thsSignal_grouped_wh3l_zg_13TeV_mlll_stack_24->SetMinimum(0);
   thsSignal_grouped_wh3l_zg_13TeV_mlll_stack_24->SetMaximum(0.0133817);
   thsSignal_grouped_wh3l_zg_13TeV_mlll_stack_24->SetDirectory(0);
   thsSignal_grouped_wh3l_zg_13TeV_mlll_stack_24->SetStats(0);
   thsSignal_grouped_wh3l_zg_13TeV_mlll_stack_24->SetLineStyle(0);
   thsSignal_grouped_wh3l_zg_13TeV_mlll_stack_24->SetMarkerStyle(20);
   thsSignal_grouped_wh3l_zg_13TeV_mlll_stack_24->GetXaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_zg_13TeV_mlll_stack_24->GetXaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_zg_13TeV_mlll_stack_24->GetXaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_zg_13TeV_mlll_stack_24->GetXaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_zg_13TeV_mlll_stack_24->GetXaxis()->SetTitleOffset(0.9);
   thsSignal_grouped_wh3l_zg_13TeV_mlll_stack_24->GetXaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_zg_13TeV_mlll_stack_24->GetYaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_zg_13TeV_mlll_stack_24->GetYaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_zg_13TeV_mlll_stack_24->GetYaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_zg_13TeV_mlll_stack_24->GetYaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_zg_13TeV_mlll_stack_24->GetYaxis()->SetTitleOffset(1.25);
   thsSignal_grouped_wh3l_zg_13TeV_mlll_stack_24->GetYaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_zg_13TeV_mlll_stack_24->GetZaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_zg_13TeV_mlll_stack_24->GetZaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_zg_13TeV_mlll_stack_24->GetZaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_zg_13TeV_mlll_stack_24->GetZaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_zg_13TeV_mlll_stack_24->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_zg_13TeV_mlll->SetHistogram(thsSignal_grouped_wh3l_zg_13TeV_mlll_stack_24);
   
   
   TH1D *new_histo_group_Higgs_wh3l_zg_13TeV_mlll119 = new TH1D("new_histo_group_Higgs_wh3l_zg_13TeV_mlll119","histo_H_htt",20,80,100);
   new_histo_group_Higgs_wh3l_zg_13TeV_mlll119->SetBinContent(1,0.002804977);
   new_histo_group_Higgs_wh3l_zg_13TeV_mlll119->SetBinContent(2,0.001747821);
   new_histo_group_Higgs_wh3l_zg_13TeV_mlll119->SetBinContent(3,0.006064351);
   new_histo_group_Higgs_wh3l_zg_13TeV_mlll119->SetBinContent(4,0.004447393);
   new_histo_group_Higgs_wh3l_zg_13TeV_mlll119->SetBinContent(5,0.002668425);
   new_histo_group_Higgs_wh3l_zg_13TeV_mlll119->SetBinContent(6,0.007077613);
   new_histo_group_Higgs_wh3l_zg_13TeV_mlll119->SetBinContent(7,0.004438575);
   new_histo_group_Higgs_wh3l_zg_13TeV_mlll119->SetBinContent(8,0.002672956);
   new_histo_group_Higgs_wh3l_zg_13TeV_mlll119->SetBinContent(9,0.00441802);
   new_histo_group_Higgs_wh3l_zg_13TeV_mlll119->SetBinContent(10,0.003031301);
   new_histo_group_Higgs_wh3l_zg_13TeV_mlll119->SetBinContent(11,0.006326519);
   new_histo_group_Higgs_wh3l_zg_13TeV_mlll119->SetBinContent(12,0.003384755);
   new_histo_group_Higgs_wh3l_zg_13TeV_mlll119->SetBinContent(13,0.00334585);
   new_histo_group_Higgs_wh3l_zg_13TeV_mlll119->SetBinContent(14,0.005332867);
   new_histo_group_Higgs_wh3l_zg_13TeV_mlll119->SetBinContent(15,0.003718129);
   new_histo_group_Higgs_wh3l_zg_13TeV_mlll119->SetBinContent(16,0.004761036);
   new_histo_group_Higgs_wh3l_zg_13TeV_mlll119->SetBinContent(17,0.00964969);
   new_histo_group_Higgs_wh3l_zg_13TeV_mlll119->SetBinContent(18,0.001131754);
   new_histo_group_Higgs_wh3l_zg_13TeV_mlll119->SetBinContent(19,0.005467602);
   new_histo_group_Higgs_wh3l_zg_13TeV_mlll119->SetBinContent(20,0.006287014);
   new_histo_group_Higgs_wh3l_zg_13TeV_mlll119->SetBinError(1,0.00114044);
   new_histo_group_Higgs_wh3l_zg_13TeV_mlll119->SetBinError(2,0.0006243199);
   new_histo_group_Higgs_wh3l_zg_13TeV_mlll119->SetBinError(3,0.002641981);
   new_histo_group_Higgs_wh3l_zg_13TeV_mlll119->SetBinError(4,0.002241708);
   new_histo_group_Higgs_wh3l_zg_13TeV_mlll119->SetBinError(5,0.001160134);
   new_histo_group_Higgs_wh3l_zg_13TeV_mlll119->SetBinError(6,0.002969245);
   new_histo_group_Higgs_wh3l_zg_13TeV_mlll119->SetBinError(7,0.001976969);
   new_histo_group_Higgs_wh3l_zg_13TeV_mlll119->SetBinError(8,0.001693682);
   new_histo_group_Higgs_wh3l_zg_13TeV_mlll119->SetBinError(9,0.00183035);
   new_histo_group_Higgs_wh3l_zg_13TeV_mlll119->SetBinError(10,0.00137478);
   new_histo_group_Higgs_wh3l_zg_13TeV_mlll119->SetBinError(11,0.003148783);
   new_histo_group_Higgs_wh3l_zg_13TeV_mlll119->SetBinError(12,0.001343038);
   new_histo_group_Higgs_wh3l_zg_13TeV_mlll119->SetBinError(13,0.002180717);
   new_histo_group_Higgs_wh3l_zg_13TeV_mlll119->SetBinError(14,0.002444457);
   new_histo_group_Higgs_wh3l_zg_13TeV_mlll119->SetBinError(15,0.002047);
   new_histo_group_Higgs_wh3l_zg_13TeV_mlll119->SetBinError(16,0.002453771);
   new_histo_group_Higgs_wh3l_zg_13TeV_mlll119->SetBinError(17,0.003094789);
   new_histo_group_Higgs_wh3l_zg_13TeV_mlll119->SetBinError(18,0.000572504);
   new_histo_group_Higgs_wh3l_zg_13TeV_mlll119->SetBinError(19,0.002536487);
   new_histo_group_Higgs_wh3l_zg_13TeV_mlll119->SetBinError(20,0.00319693);
   new_histo_group_Higgs_wh3l_zg_13TeV_mlll119->SetEntries(180);
   new_histo_group_Higgs_wh3l_zg_13TeV_mlll119->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_zg_13TeV_mlll119->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_zg_13TeV_mlll119->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_zg_13TeV_mlll119->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_zg_13TeV_mlll119->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_zg_13TeV_mlll119->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_zg_13TeV_mlll119->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_zg_13TeV_mlll119->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_zg_13TeV_mlll119->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_zg_13TeV_mlll119->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_zg_13TeV_mlll119->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_zg_13TeV_mlll119->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_zg_13TeV_mlll119->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_zg_13TeV_mlll119->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_zg_13TeV_mlll119->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_zg_13TeV_mlll->Add(new_histo_group_Higgs_wh3l_zg_13TeV_mlll,"");
   thsSignal_grouped_wh3l_zg_13TeV_mlll->Draw("hist same noclear");
   
   Double_t _fx3023[20] = {
   80.5,
   81.5,
   82.5,
   83.5,
   84.5,
   85.5,
   86.5,
   87.5,
   88.5,
   89.5,
   90.5,
   91.5,
   92.5,
   93.5,
   94.5,
   95.5,
   96.5,
   97.5,
   98.5,
   99.5};
   Double_t _fy3023[20] = {
   0.8993289,
   1.563466,
   3.709819,
   3.146951,
   5.288546,
   5.127858,
   4.063802,
   8.366369,
   11.07061,
   18.13671,
   18.35163,
   14.34843,
   13.4074,
   6.599334,
   3.342789,
   3.957525,
   2.094678,
   2.789186,
   1.705737,
   2.073807};
   Double_t _felx3023[20] = {
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5};
   Double_t _fely3023[20] = {
   0.8437067,
   0.7137451,
   1.748656,
   1.30177,
   1.665491,
   1.76096,
   1.985267,
   2.540501,
   2.055746,
   3.574055,
   3.179953,
   2.594778,
   2.890312,
   1.866071,
   0.9827711,
   1.99325,
   0.8136854,
   0.9664305,
   0.980485,
   1.366964};
   Double_t _fehx3023[20] = {
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5};
   Double_t _fehy3023[20] = {
   0.8311199,
   0.518247,
   1.748216,
   1.300704,
   1.664304,
   1.154491,
   1.986346,
   2.541033,
   2.404134,
   3.573909,
   3.180109,
   2.592536,
   2.888613,
   1.995845,
   1.142377,
   1.993017,
   0.964361,
   0.9665041,
   0.9804689,
   1.366947};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(20,_fx3023,_fy3023,_felx3023,_fehx3023,_fely3023,_fehy3023);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(12);
   grae->SetFillStyle(3004);
   grae->SetLineColor(12);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3023 = new TH1F("Graph_Graph3023","",100,78,102);
   Graph_Graph3023->SetMinimum(0);
   Graph_Graph3023->SetMaximum(23.87612);
   Graph_Graph3023->SetDirectory(0);
   Graph_Graph3023->SetStats(0);
   Graph_Graph3023->SetLineStyle(0);
   Graph_Graph3023->SetMarkerStyle(20);
   Graph_Graph3023->GetXaxis()->SetLabelFont(42);
   Graph_Graph3023->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3023->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3023->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3023->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3023->GetXaxis()->SetTitleFont(42);
   Graph_Graph3023->GetYaxis()->SetLabelFont(42);
   Graph_Graph3023->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3023->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3023->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3023->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3023->GetYaxis()->SetTitleFont(42);
   Graph_Graph3023->GetZaxis()->SetLabelFont(42);
   Graph_Graph3023->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3023->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3023->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3023->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3023);
   
   grae->Draw("2");
   
   Double_t _fx3024[20] = {
   80.5,
   81.5,
   82.5,
   83.5,
   84.5,
   85.5,
   86.5,
   87.5,
   88.5,
   89.5,
   90.5,
   91.5,
   92.5,
   93.5,
   94.5,
   95.5,
   96.5,
   97.5,
   98.5,
   99.5};
   Double_t _fy3024[20] = {
   3,
   0,
   2,
   2,
   2,
   11,
   17,
   13,
   16,
   13,
   15,
   11,
   7,
   7,
   4,
   1,
   3,
   2,
   2,
   2};
   Double_t _felx3024[20] = {
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5};
   Double_t _fely3024[20] = {
   1.632727,
   0,
   1.29183,
   1.29183,
   1.29183,
   3.265636,
   4.082258,
   3.558726,
   3.957873,
   3.558726,
   3.829449,
   3.265636,
   2.581513,
   2.581513,
   1.914367,
   0.8272524,
   1.632727,
   1.29183,
   1.29183,
   1.29183};
   Double_t _fehx3024[20] = {
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5};
   Double_t _fehy3024[20] = {
   2.918242,
   1.147908,
   2.63791,
   2.63791,
   2.63791,
   4.416609,
   5.203825,
   4.697669,
   5.083169,
   4.697669,
   4.958839,
   4.416609,
   3.770356,
   3.770356,
   3.162815,
   2.29957,
   2.918242,
   2.63791,
   2.63791,
   2.63791};
   grae = new TGraphAsymmErrors(20,_fx3024,_fy3024,_felx3024,_fehx3024,_fely3024,_fehy3024);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(1);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3024 = new TH1F("Graph_Graph3024","",100,78,102);
   Graph_Graph3024->SetMinimum(0);
   Graph_Graph3024->SetMaximum(24.42421);
   Graph_Graph3024->SetDirectory(0);
   Graph_Graph3024->SetStats(0);
   Graph_Graph3024->SetLineStyle(0);
   Graph_Graph3024->SetMarkerStyle(20);
   Graph_Graph3024->GetXaxis()->SetLabelFont(42);
   Graph_Graph3024->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3024->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3024->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3024->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3024->GetXaxis()->SetTitleFont(42);
   Graph_Graph3024->GetYaxis()->SetLabelFont(42);
   Graph_Graph3024->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3024->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3024->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3024->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3024->GetYaxis()->SetTitleFont(42);
   Graph_Graph3024->GetZaxis()->SetLabelFont(42);
   Graph_Graph3024->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3024->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3024->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3024->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3024);
   
   grae->Draw("p0");
   
   TLegend *leg = new TLegend(0.2,0.7,0.8,0.9,NULL,"brNDC");
   leg->SetTextFont(62);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("new_histo_group_Fake_wh3l_zg_13TeV_mlll","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_zg_13TeV_mlll","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_zg_13TeV_mlll","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_zg_13TeV_mlll","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_zg_13TeV_mlll","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_zg_13TeV_mlll","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_zg_13TeV_mlll","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_zg_13TeV_mlll","Data","EPL");
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
   entry=leg->AddEntry("new_histo_group_Fake_wh3l_zg_13TeV_mlll","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_zg_13TeV_mlll","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_zg_13TeV_mlll","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_zg_13TeV_mlll","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_zg_13TeV_mlll","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_zg_13TeV_mlll","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_zg_13TeV_mlll","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_zg_13TeV_mlll","Data","EPL");
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
   
   TH1F *hframe_copy120 = new TH1F("hframe_copy120","",1000,80,100);
   hframe_copy120->SetMinimum(0);
   hframe_copy120->SetMaximum(52.80776);
   hframe_copy120->SetDirectory(0);
   hframe_copy120->SetStats(0);
   hframe_copy120->SetLineStyle(0);
   hframe_copy120->SetMarkerStyle(20);
   hframe_copy120->GetXaxis()->SetTitle("m_{lll} [GeV]");
   hframe_copy120->GetXaxis()->SetNdivisions(506);
   hframe_copy120->GetXaxis()->SetLabelFont(42);
   hframe_copy120->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy120->GetXaxis()->SetLabelSize(0.05);
   hframe_copy120->GetXaxis()->SetTitleSize(0.06);
   hframe_copy120->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy120->GetXaxis()->SetTitleFont(42);
   hframe_copy120->GetYaxis()->SetTitle("Events");
   hframe_copy120->GetYaxis()->SetLabelFont(42);
   hframe_copy120->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy120->GetYaxis()->SetLabelSize(0.05);
   hframe_copy120->GetYaxis()->SetTitleSize(0.06);
   hframe_copy120->GetYaxis()->SetTitleOffset(1.25);
   hframe_copy120->GetYaxis()->SetTitleFont(42);
   hframe_copy120->GetZaxis()->SetLabelFont(42);
   hframe_copy120->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy120->GetZaxis()->SetLabelSize(0.05);
   hframe_copy120->GetZaxis()->SetTitleSize(0.06);
   hframe_copy120->GetZaxis()->SetTitleFont(42);
   hframe_copy120->Draw("sameaxis");
   ccwh3l_zg_13TeV_mlll->Modified();
   ccwh3l_zg_13TeV_mlll->cd();
   ccwh3l_zg_13TeV_mlll->SetSelected(ccwh3l_zg_13TeV_mlll);
}
