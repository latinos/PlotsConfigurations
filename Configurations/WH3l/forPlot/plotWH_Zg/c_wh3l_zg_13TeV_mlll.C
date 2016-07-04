void c_wh3l_zg_13TeV_mlll()
{
//=========Macro generated from canvas: ccwh3l_zg_13TeV_mlll/cc
//=========  (Sun Jul  3 01:56:48 2016) by ROOT version6.02/13
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
   
   TH1F *hframe31 = new TH1F("hframe31","",1000,80,100);
   hframe31->SetMinimum(0);
   hframe31->SetMaximum(52.80776);
   hframe31->SetDirectory(0);
   hframe31->SetStats(0);
   hframe31->SetLineStyle(0);
   hframe31->SetMarkerStyle(20);
   hframe31->GetXaxis()->SetTitle("m_{lll} [GeV]");
   hframe31->GetXaxis()->SetNdivisions(506);
   hframe31->GetXaxis()->SetLabelFont(42);
   hframe31->GetXaxis()->SetLabelOffset(0.007);
   hframe31->GetXaxis()->SetLabelSize(0.05);
   hframe31->GetXaxis()->SetTitleSize(0.06);
   hframe31->GetXaxis()->SetTitleOffset(0.9);
   hframe31->GetXaxis()->SetTitleFont(42);
   hframe31->GetYaxis()->SetTitle("Events");
   hframe31->GetYaxis()->SetLabelFont(42);
   hframe31->GetYaxis()->SetLabelOffset(0.007);
   hframe31->GetYaxis()->SetLabelSize(0.05);
   hframe31->GetYaxis()->SetTitleSize(0.06);
   hframe31->GetYaxis()->SetTitleOffset(1.25);
   hframe31->GetYaxis()->SetTitleFont(42);
   hframe31->GetZaxis()->SetLabelFont(42);
   hframe31->GetZaxis()->SetLabelOffset(0.007);
   hframe31->GetZaxis()->SetLabelSize(0.05);
   hframe31->GetZaxis()->SetTitleSize(0.06);
   hframe31->GetZaxis()->SetTitleFont(42);
   hframe31->Draw(" ");
   
   THStack *thsBackground_grouped_wh3l_zg_13TeV_mlll = new THStack();
   thsBackground_grouped_wh3l_zg_13TeV_mlll->SetName("thsBackground_grouped_wh3l_zg_13TeV_mlll");
   thsBackground_grouped_wh3l_zg_13TeV_mlll->SetTitle("thsBackground_grouped_wh3l_zg_13TeV_mlll");
   
   TH1F *thsBackground_grouped_wh3l_zg_13TeV_mlll_stack_7 = new TH1F("thsBackground_grouped_wh3l_zg_13TeV_mlll_stack_7","thsBackground_grouped_wh3l_zg_13TeV_mlll",20,80,100);
   thsBackground_grouped_wh3l_zg_13TeV_mlll_stack_7->SetMinimum(-2.547952);
   thsBackground_grouped_wh3l_zg_13TeV_mlll_stack_7->SetMaximum(19.27585);
   thsBackground_grouped_wh3l_zg_13TeV_mlll_stack_7->SetDirectory(0);
   thsBackground_grouped_wh3l_zg_13TeV_mlll_stack_7->SetStats(0);
   thsBackground_grouped_wh3l_zg_13TeV_mlll_stack_7->SetLineStyle(0);
   thsBackground_grouped_wh3l_zg_13TeV_mlll_stack_7->SetMarkerStyle(20);
   thsBackground_grouped_wh3l_zg_13TeV_mlll_stack_7->GetXaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_mlll_stack_7->GetXaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_zg_13TeV_mlll_stack_7->GetXaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_zg_13TeV_mlll_stack_7->GetXaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_zg_13TeV_mlll_stack_7->GetXaxis()->SetTitleOffset(0.9);
   thsBackground_grouped_wh3l_zg_13TeV_mlll_stack_7->GetXaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_mlll_stack_7->GetYaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_mlll_stack_7->GetYaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_zg_13TeV_mlll_stack_7->GetYaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_zg_13TeV_mlll_stack_7->GetYaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_zg_13TeV_mlll_stack_7->GetYaxis()->SetTitleOffset(1.25);
   thsBackground_grouped_wh3l_zg_13TeV_mlll_stack_7->GetYaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_mlll_stack_7->GetZaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_mlll_stack_7->GetZaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_zg_13TeV_mlll_stack_7->GetZaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_zg_13TeV_mlll_stack_7->GetZaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_zg_13TeV_mlll_stack_7->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_mlll->SetHistogram(thsBackground_grouped_wh3l_zg_13TeV_mlll_stack_7);
   
   
   TH1D *new_histo_group_Fake_wh3l_zg_13TeV_mlll32 = new TH1D("new_histo_group_Fake_wh3l_zg_13TeV_mlll32","histo_Fake",20,80,100);
   new_histo_group_Fake_wh3l_zg_13TeV_mlll32->SetBinContent(1,-0.3662092);
   new_histo_group_Fake_wh3l_zg_13TeV_mlll32->SetBinContent(2,-0.07841497);
   new_histo_group_Fake_wh3l_zg_13TeV_mlll32->SetBinContent(3,1.272593);
   new_histo_group_Fake_wh3l_zg_13TeV_mlll32->SetBinContent(4,0.6911072);
   new_histo_group_Fake_wh3l_zg_13TeV_mlll32->SetBinContent(5,1.169806);
   new_histo_group_Fake_wh3l_zg_13TeV_mlll32->SetBinContent(6,-0.2586683);
   new_histo_group_Fake_wh3l_zg_13TeV_mlll32->SetBinContent(7,-1.662539);
   new_histo_group_Fake_wh3l_zg_13TeV_mlll32->SetBinContent(8,1.824396);
   new_histo_group_Fake_wh3l_zg_13TeV_mlll32->SetBinContent(9,0.7159771);
   new_histo_group_Fake_wh3l_zg_13TeV_mlll32->SetBinContent(10,5.499512);
   new_histo_group_Fake_wh3l_zg_13TeV_mlll32->SetBinContent(11,2.780932);
   new_histo_group_Fake_wh3l_zg_13TeV_mlll32->SetBinContent(12,2.334229);
   new_histo_group_Fake_wh3l_zg_13TeV_mlll32->SetBinContent(13,3.854811);
   new_histo_group_Fake_wh3l_zg_13TeV_mlll32->SetBinContent(14,0.8658404);
   new_histo_group_Fake_wh3l_zg_13TeV_mlll32->SetBinContent(15,0.2907802);
   new_histo_group_Fake_wh3l_zg_13TeV_mlll32->SetBinContent(16,2.321786);
   new_histo_group_Fake_wh3l_zg_13TeV_mlll32->SetBinContent(17,0.2540904);
   new_histo_group_Fake_wh3l_zg_13TeV_mlll32->SetBinContent(18,0.4304403);
   new_histo_group_Fake_wh3l_zg_13TeV_mlll32->SetBinContent(19,0.6588276);
   new_histo_group_Fake_wh3l_zg_13TeV_mlll32->SetBinContent(20,0.9815035);
   new_histo_group_Fake_wh3l_zg_13TeV_mlll32->SetBinError(1,0.37882);
   new_histo_group_Fake_wh3l_zg_13TeV_mlll32->SetBinError(2,0.2753745);
   new_histo_group_Fake_wh3l_zg_13TeV_mlll32->SetBinError(3,1.055915);
   new_histo_group_Fake_wh3l_zg_13TeV_mlll32->SetBinError(4,0.6644295);
   new_histo_group_Fake_wh3l_zg_13TeV_mlll32->SetBinError(5,0.8642615);
   new_histo_group_Fake_wh3l_zg_13TeV_mlll32->SetBinError(6,0.8795474);
   new_histo_group_Fake_wh3l_zg_13TeV_mlll32->SetBinError(7,0.8854126);
   new_histo_group_Fake_wh3l_zg_13TeV_mlll32->SetBinError(8,1.325277);
   new_histo_group_Fake_wh3l_zg_13TeV_mlll32->SetBinError(9,1.077708);
   new_histo_group_Fake_wh3l_zg_13TeV_mlll32->SetBinError(10,1.664091);
   new_histo_group_Fake_wh3l_zg_13TeV_mlll32->SetBinError(11,1.422728);
   new_histo_group_Fake_wh3l_zg_13TeV_mlll32->SetBinError(12,1.050724);
   new_histo_group_Fake_wh3l_zg_13TeV_mlll32->SetBinError(13,1.318486);
   new_histo_group_Fake_wh3l_zg_13TeV_mlll32->SetBinError(14,0.9997712);
   new_histo_group_Fake_wh3l_zg_13TeV_mlll32->SetBinError(15,0.4532073);
   new_histo_group_Fake_wh3l_zg_13TeV_mlll32->SetBinError(16,1.188963);
   new_histo_group_Fake_wh3l_zg_13TeV_mlll32->SetBinError(17,0.4061274);
   new_histo_group_Fake_wh3l_zg_13TeV_mlll32->SetBinError(18,0.3298423);
   new_histo_group_Fake_wh3l_zg_13TeV_mlll32->SetBinError(19,0.5612167);
   new_histo_group_Fake_wh3l_zg_13TeV_mlll32->SetBinError(20,0.8114881);
   new_histo_group_Fake_wh3l_zg_13TeV_mlll32->SetEntries(460);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_zg_13TeV_mlll32->SetFillColor(ci);
   new_histo_group_Fake_wh3l_zg_13TeV_mlll32->SetFillStyle(3001);

   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_zg_13TeV_mlll32->SetLineColor(ci);
   new_histo_group_Fake_wh3l_zg_13TeV_mlll32->GetXaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_zg_13TeV_mlll32->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_zg_13TeV_mlll32->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_zg_13TeV_mlll32->GetXaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_zg_13TeV_mlll32->GetYaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_zg_13TeV_mlll32->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_zg_13TeV_mlll32->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_zg_13TeV_mlll32->GetYaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_zg_13TeV_mlll32->GetZaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_zg_13TeV_mlll32->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_zg_13TeV_mlll32->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_zg_13TeV_mlll32->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_mlll->Add(new_histo_group_Fake_wh3l_zg_13TeV_mlll,"");
   
   TH1D *new_histo_group_WW_wh3l_zg_13TeV_mlll33 = new TH1D("new_histo_group_WW_wh3l_zg_13TeV_mlll33","histo_WW",20,80,100);
   new_histo_group_WW_wh3l_zg_13TeV_mlll33->SetBinContent(14,0.009961222);
   new_histo_group_WW_wh3l_zg_13TeV_mlll33->SetBinError(14,0.009961222);
   new_histo_group_WW_wh3l_zg_13TeV_mlll33->SetEntries(1);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_zg_13TeV_mlll33->SetFillColor(ci);
   new_histo_group_WW_wh3l_zg_13TeV_mlll33->SetFillStyle(3001);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_zg_13TeV_mlll33->SetLineColor(ci);
   new_histo_group_WW_wh3l_zg_13TeV_mlll33->GetXaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_zg_13TeV_mlll33->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_zg_13TeV_mlll33->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_zg_13TeV_mlll33->GetXaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_zg_13TeV_mlll33->GetYaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_zg_13TeV_mlll33->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_zg_13TeV_mlll33->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_zg_13TeV_mlll33->GetYaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_zg_13TeV_mlll33->GetZaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_zg_13TeV_mlll33->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_zg_13TeV_mlll33->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_zg_13TeV_mlll33->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_mlll->Add(new_histo_group_WW_wh3l_zg_13TeV_mlll,"");
   
   TH1D *new_histo_group_VVV_wh3l_zg_13TeV_mlll34 = new TH1D("new_histo_group_VVV_wh3l_zg_13TeV_mlll34","histo_VVV",20,80,100);
   new_histo_group_VVV_wh3l_zg_13TeV_mlll34->SetBinContent(2,0.002326441);
   new_histo_group_VVV_wh3l_zg_13TeV_mlll34->SetBinContent(6,0.002503076);
   new_histo_group_VVV_wh3l_zg_13TeV_mlll34->SetBinContent(7,0.002735143);
   new_histo_group_VVV_wh3l_zg_13TeV_mlll34->SetBinContent(8,0.002272721);
   new_histo_group_VVV_wh3l_zg_13TeV_mlll34->SetBinContent(15,0.002475685);
   new_histo_group_VVV_wh3l_zg_13TeV_mlll34->SetBinContent(20,0.002169967);
   new_histo_group_VVV_wh3l_zg_13TeV_mlll34->SetBinError(2,0.002326441);
   new_histo_group_VVV_wh3l_zg_13TeV_mlll34->SetBinError(6,0.002503076);
   new_histo_group_VVV_wh3l_zg_13TeV_mlll34->SetBinError(7,0.002735143);
   new_histo_group_VVV_wh3l_zg_13TeV_mlll34->SetBinError(8,0.00303764);
   new_histo_group_VVV_wh3l_zg_13TeV_mlll34->SetBinError(15,0.002475685);
   new_histo_group_VVV_wh3l_zg_13TeV_mlll34->SetBinError(20,0.002169967);
   new_histo_group_VVV_wh3l_zg_13TeV_mlll34->SetEntries(7);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_zg_13TeV_mlll34->SetFillColor(ci);
   new_histo_group_VVV_wh3l_zg_13TeV_mlll34->SetFillStyle(3001);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_zg_13TeV_mlll34->SetLineColor(ci);
   new_histo_group_VVV_wh3l_zg_13TeV_mlll34->GetXaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_zg_13TeV_mlll34->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_zg_13TeV_mlll34->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_zg_13TeV_mlll34->GetXaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_zg_13TeV_mlll34->GetYaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_zg_13TeV_mlll34->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_zg_13TeV_mlll34->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_zg_13TeV_mlll34->GetYaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_zg_13TeV_mlll34->GetZaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_zg_13TeV_mlll34->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_zg_13TeV_mlll34->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_zg_13TeV_mlll34->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_mlll->Add(new_histo_group_VVV_wh3l_zg_13TeV_mlll,"");
   
   TH1D *new_histo_group_Vg_wh3l_zg_13TeV_mlll35 = new TH1D("new_histo_group_Vg_wh3l_zg_13TeV_mlll35","histo_Vg",20,80,100);
   new_histo_group_Vg_wh3l_zg_13TeV_mlll35->SetBinContent(1,1.167734);
   new_histo_group_Vg_wh3l_zg_13TeV_mlll35->SetBinContent(2,1.511699);
   new_histo_group_Vg_wh3l_zg_13TeV_mlll35->SetBinContent(3,2.346267);
   new_histo_group_Vg_wh3l_zg_13TeV_mlll35->SetBinContent(4,2.345072);
   new_histo_group_Vg_wh3l_zg_13TeV_mlll35->SetBinContent(5,4.056028);
   new_histo_group_Vg_wh3l_zg_13TeV_mlll35->SetBinContent(6,5.276254);
   new_histo_group_Vg_wh3l_zg_13TeV_mlll35->SetBinContent(7,5.571064);
   new_histo_group_Vg_wh3l_zg_13TeV_mlll35->SetBinContent(8,6.424774);
   new_histo_group_Vg_wh3l_zg_13TeV_mlll35->SetBinContent(9,10.29606);
   new_histo_group_Vg_wh3l_zg_13TeV_mlll35->SetBinContent(10,12.51575);
   new_histo_group_Vg_wh3l_zg_13TeV_mlll35->SetBinContent(11,15.47239);
   new_histo_group_Vg_wh3l_zg_13TeV_mlll35->SetBinContent(12,11.8728);
   new_histo_group_Vg_wh3l_zg_13TeV_mlll35->SetBinContent(13,9.44256);
   new_histo_group_Vg_wh3l_zg_13TeV_mlll35->SetBinContent(14,5.579369);
   new_histo_group_Vg_wh3l_zg_13TeV_mlll35->SetBinContent(15,2.943019);
   new_histo_group_Vg_wh3l_zg_13TeV_mlll35->SetBinContent(16,1.518169);
   new_histo_group_Vg_wh3l_zg_13TeV_mlll35->SetBinContent(17,1.715259);
   new_histo_group_Vg_wh3l_zg_13TeV_mlll35->SetBinContent(18,2.140321);
   new_histo_group_Vg_wh3l_zg_13TeV_mlll35->SetBinContent(19,0.8795927);
   new_histo_group_Vg_wh3l_zg_13TeV_mlll35->SetBinContent(20,0.8926684);
   new_histo_group_Vg_wh3l_zg_13TeV_mlll35->SetBinError(1,0.4286198);
   new_histo_group_Vg_wh3l_zg_13TeV_mlll35->SetBinError(2,0.4055907);
   new_histo_group_Vg_wh3l_zg_13TeV_mlll35->SetBinError(3,0.567474);
   new_histo_group_Vg_wh3l_zg_13TeV_mlll35->SetBinError(4,0.543969);
   new_histo_group_Vg_wh3l_zg_13TeV_mlll35->SetBinError(5,0.7137705);
   new_histo_group_Vg_wh3l_zg_13TeV_mlll35->SetBinError(6,0.8249004);
   new_histo_group_Vg_wh3l_zg_13TeV_mlll35->SetBinError(7,0.9117906);
   new_histo_group_Vg_wh3l_zg_13TeV_mlll35->SetBinError(8,1.04059);
   new_histo_group_Vg_wh3l_zg_13TeV_mlll35->SetBinError(9,1.243785);
   new_histo_group_Vg_wh3l_zg_13TeV_mlll35->SetBinError(10,1.276104);
   new_histo_group_Vg_wh3l_zg_13TeV_mlll35->SetBinError(11,1.504002);
   new_histo_group_Vg_wh3l_zg_13TeV_mlll35->SetBinError(12,1.283287);
   new_histo_group_Vg_wh3l_zg_13TeV_mlll35->SetBinError(13,1.181842);
   new_histo_group_Vg_wh3l_zg_13TeV_mlll35->SetBinError(14,0.8832451);
   new_histo_group_Vg_wh3l_zg_13TeV_mlll35->SetBinError(15,0.6488338);
   new_histo_group_Vg_wh3l_zg_13TeV_mlll35->SetBinError(16,0.5662709);
   new_histo_group_Vg_wh3l_zg_13TeV_mlll35->SetBinError(17,0.4997674);
   new_histo_group_Vg_wh3l_zg_13TeV_mlll35->SetBinError(18,0.5295366);
   new_histo_group_Vg_wh3l_zg_13TeV_mlll35->SetBinError(19,0.3183768);
   new_histo_group_Vg_wh3l_zg_13TeV_mlll35->SetBinError(20,0.4380667);
   new_histo_group_Vg_wh3l_zg_13TeV_mlll35->SetEntries(1376);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_zg_13TeV_mlll35->SetFillColor(ci);
   new_histo_group_Vg_wh3l_zg_13TeV_mlll35->SetFillStyle(3001);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_zg_13TeV_mlll35->SetLineColor(ci);
   new_histo_group_Vg_wh3l_zg_13TeV_mlll35->GetXaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_zg_13TeV_mlll35->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_zg_13TeV_mlll35->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_zg_13TeV_mlll35->GetXaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_zg_13TeV_mlll35->GetYaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_zg_13TeV_mlll35->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_zg_13TeV_mlll35->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_zg_13TeV_mlll35->GetYaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_zg_13TeV_mlll35->GetZaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_zg_13TeV_mlll35->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_zg_13TeV_mlll35->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_zg_13TeV_mlll35->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_mlll->Add(new_histo_group_Vg_wh3l_zg_13TeV_mlll,"");
   
   TH1D *new_histo_group_ZZ_wh3l_zg_13TeV_mlll36 = new TH1D("new_histo_group_ZZ_wh3l_zg_13TeV_mlll36","histo_ZZ",20,80,100);
   new_histo_group_ZZ_wh3l_zg_13TeV_mlll36->SetBinContent(3,0.04575732);
   new_histo_group_ZZ_wh3l_zg_13TeV_mlll36->SetBinContent(4,0.04202887);
   new_histo_group_ZZ_wh3l_zg_13TeV_mlll36->SetBinContent(7,0.07269379);
   new_histo_group_ZZ_wh3l_zg_13TeV_mlll36->SetBinContent(8,0.05095265);
   new_histo_group_ZZ_wh3l_zg_13TeV_mlll36->SetBinContent(12,0.04568927);
   new_histo_group_ZZ_wh3l_zg_13TeV_mlll36->SetBinContent(14,0.03984332);
   new_histo_group_ZZ_wh3l_zg_13TeV_mlll36->SetBinContent(15,0.002412119);
   new_histo_group_ZZ_wh3l_zg_13TeV_mlll36->SetBinContent(16,0.04329731);
   new_histo_group_ZZ_wh3l_zg_13TeV_mlll36->SetBinContent(17,0.02824018);
   new_histo_group_ZZ_wh3l_zg_13TeV_mlll36->SetBinContent(18,0.1149077);
   new_histo_group_ZZ_wh3l_zg_13TeV_mlll36->SetBinContent(19,0.04657866);
   new_histo_group_ZZ_wh3l_zg_13TeV_mlll36->SetBinContent(20,0.06096717);
   new_histo_group_ZZ_wh3l_zg_13TeV_mlll36->SetBinError(3,0.04575732);
   new_histo_group_ZZ_wh3l_zg_13TeV_mlll36->SetBinError(4,0.04202887);
   new_histo_group_ZZ_wh3l_zg_13TeV_mlll36->SetBinError(7,0.05243295);
   new_histo_group_ZZ_wh3l_zg_13TeV_mlll36->SetBinError(8,0.05095265);
   new_histo_group_ZZ_wh3l_zg_13TeV_mlll36->SetBinError(12,0.04568927);
   new_histo_group_ZZ_wh3l_zg_13TeV_mlll36->SetBinError(14,0.03984332);
   new_histo_group_ZZ_wh3l_zg_13TeV_mlll36->SetBinError(15,0.002412119);
   new_histo_group_ZZ_wh3l_zg_13TeV_mlll36->SetBinError(16,0.04329731);
   new_histo_group_ZZ_wh3l_zg_13TeV_mlll36->SetBinError(17,0.02824018);
   new_histo_group_ZZ_wh3l_zg_13TeV_mlll36->SetBinError(18,0.06638768);
   new_histo_group_ZZ_wh3l_zg_13TeV_mlll36->SetBinError(19,0.04657866);
   new_histo_group_ZZ_wh3l_zg_13TeV_mlll36->SetBinError(20,0.04320446);
   new_histo_group_ZZ_wh3l_zg_13TeV_mlll36->SetEntries(16);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_zg_13TeV_mlll36->SetFillColor(ci);
   new_histo_group_ZZ_wh3l_zg_13TeV_mlll36->SetFillStyle(3001);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_zg_13TeV_mlll36->SetLineColor(ci);
   new_histo_group_ZZ_wh3l_zg_13TeV_mlll36->GetXaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_zg_13TeV_mlll36->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_zg_13TeV_mlll36->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_zg_13TeV_mlll36->GetXaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_zg_13TeV_mlll36->GetYaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_zg_13TeV_mlll36->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_zg_13TeV_mlll36->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_zg_13TeV_mlll36->GetYaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_zg_13TeV_mlll36->GetZaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_zg_13TeV_mlll36->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_zg_13TeV_mlll36->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_zg_13TeV_mlll36->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_mlll->Add(new_histo_group_ZZ_wh3l_zg_13TeV_mlll,"");
   
   TH1D *new_histo_group_WZ_wh3l_zg_13TeV_mlll37 = new TH1D("new_histo_group_WZ_wh3l_zg_13TeV_mlll37","histo_WZ",20,80,100);
   new_histo_group_WZ_wh3l_zg_13TeV_mlll37->SetBinContent(1,0.0978039);
   new_histo_group_WZ_wh3l_zg_13TeV_mlll37->SetBinContent(2,0.1278557);
   new_histo_group_WZ_wh3l_zg_13TeV_mlll37->SetBinContent(3,0.04520155);
   new_histo_group_WZ_wh3l_zg_13TeV_mlll37->SetBinContent(4,0.06874357);
   new_histo_group_WZ_wh3l_zg_13TeV_mlll37->SetBinContent(5,0.06271076);
   new_histo_group_WZ_wh3l_zg_13TeV_mlll37->SetBinContent(6,0.1077697);
   new_histo_group_WZ_wh3l_zg_13TeV_mlll37->SetBinContent(7,0.0798485);
   new_histo_group_WZ_wh3l_zg_13TeV_mlll37->SetBinContent(8,0.06397292);
   new_histo_group_WZ_wh3l_zg_13TeV_mlll37->SetBinContent(9,0.05857503);
   new_histo_group_WZ_wh3l_zg_13TeV_mlll37->SetBinContent(10,0.1214553);
   new_histo_group_WZ_wh3l_zg_13TeV_mlll37->SetBinContent(11,0.0983068);
   new_histo_group_WZ_wh3l_zg_13TeV_mlll37->SetBinContent(12,0.09571306);
   new_histo_group_WZ_wh3l_zg_13TeV_mlll37->SetBinContent(13,0.1100317);
   new_histo_group_WZ_wh3l_zg_13TeV_mlll37->SetBinContent(14,0.1043201);
   new_histo_group_WZ_wh3l_zg_13TeV_mlll37->SetBinContent(15,0.1041014);
   new_histo_group_WZ_wh3l_zg_13TeV_mlll37->SetBinContent(16,0.07427282);
   new_histo_group_WZ_wh3l_zg_13TeV_mlll37->SetBinContent(17,0.09708856);
   new_histo_group_WZ_wh3l_zg_13TeV_mlll37->SetBinContent(18,0.1035168);
   new_histo_group_WZ_wh3l_zg_13TeV_mlll37->SetBinContent(19,0.120738);
   new_histo_group_WZ_wh3l_zg_13TeV_mlll37->SetBinContent(20,0.1364979);
   new_histo_group_WZ_wh3l_zg_13TeV_mlll37->SetBinError(1,0.0227342);
   new_histo_group_WZ_wh3l_zg_13TeV_mlll37->SetBinError(2,0.02612868);
   new_histo_group_WZ_wh3l_zg_13TeV_mlll37->SetBinError(3,0.01550861);
   new_histo_group_WZ_wh3l_zg_13TeV_mlll37->SetBinError(4,0.01939823);
   new_histo_group_WZ_wh3l_zg_13TeV_mlll37->SetBinError(5,0.01861438);
   new_histo_group_WZ_wh3l_zg_13TeV_mlll37->SetBinError(6,0.0241593);
   new_histo_group_WZ_wh3l_zg_13TeV_mlll37->SetBinError(7,0.02073365);
   new_histo_group_WZ_wh3l_zg_13TeV_mlll37->SetBinError(8,0.01878755);
   new_histo_group_WZ_wh3l_zg_13TeV_mlll37->SetBinError(9,0.01829082);
   new_histo_group_WZ_wh3l_zg_13TeV_mlll37->SetBinError(10,0.02597272);
   new_histo_group_WZ_wh3l_zg_13TeV_mlll37->SetBinError(11,0.02387284);
   new_histo_group_WZ_wh3l_zg_13TeV_mlll37->SetBinError(12,0.02263475);
   new_histo_group_WZ_wh3l_zg_13TeV_mlll37->SetBinError(13,0.02469998);
   new_histo_group_WZ_wh3l_zg_13TeV_mlll37->SetBinError(14,0.02370639);
   new_histo_group_WZ_wh3l_zg_13TeV_mlll37->SetBinError(15,0.0229772);
   new_histo_group_WZ_wh3l_zg_13TeV_mlll37->SetBinError(16,0.02017611);
   new_histo_group_WZ_wh3l_zg_13TeV_mlll37->SetBinError(17,0.02241096);
   new_histo_group_WZ_wh3l_zg_13TeV_mlll37->SetBinError(18,0.02384265);
   new_histo_group_WZ_wh3l_zg_13TeV_mlll37->SetBinError(19,0.02609031);
   new_histo_group_WZ_wh3l_zg_13TeV_mlll37->SetBinError(20,0.02730489);
   new_histo_group_WZ_wh3l_zg_13TeV_mlll37->SetEntries(376);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_zg_13TeV_mlll37->SetFillColor(ci);
   new_histo_group_WZ_wh3l_zg_13TeV_mlll37->SetFillStyle(3001);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_zg_13TeV_mlll37->SetLineColor(ci);
   new_histo_group_WZ_wh3l_zg_13TeV_mlll37->GetXaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_zg_13TeV_mlll37->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_zg_13TeV_mlll37->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_zg_13TeV_mlll37->GetXaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_zg_13TeV_mlll37->GetYaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_zg_13TeV_mlll37->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_zg_13TeV_mlll37->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_zg_13TeV_mlll37->GetYaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_zg_13TeV_mlll37->GetZaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_zg_13TeV_mlll37->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_zg_13TeV_mlll37->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_zg_13TeV_mlll37->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_mlll->Add(new_histo_group_WZ_wh3l_zg_13TeV_mlll,"");
   
   TH1D *new_histo_group_Higgs_wh3l_zg_13TeV_mlll38 = new TH1D("new_histo_group_Higgs_wh3l_zg_13TeV_mlll38","histo_H_htt",20,80,100);
   new_histo_group_Higgs_wh3l_zg_13TeV_mlll38->SetBinContent(1,0.002804977);
   new_histo_group_Higgs_wh3l_zg_13TeV_mlll38->SetBinContent(2,0.001747821);
   new_histo_group_Higgs_wh3l_zg_13TeV_mlll38->SetBinContent(3,0.006064351);
   new_histo_group_Higgs_wh3l_zg_13TeV_mlll38->SetBinContent(4,0.004447393);
   new_histo_group_Higgs_wh3l_zg_13TeV_mlll38->SetBinContent(5,0.002668425);
   new_histo_group_Higgs_wh3l_zg_13TeV_mlll38->SetBinContent(6,0.007077613);
   new_histo_group_Higgs_wh3l_zg_13TeV_mlll38->SetBinContent(7,0.004438575);
   new_histo_group_Higgs_wh3l_zg_13TeV_mlll38->SetBinContent(8,0.002672956);
   new_histo_group_Higgs_wh3l_zg_13TeV_mlll38->SetBinContent(9,0.00441802);
   new_histo_group_Higgs_wh3l_zg_13TeV_mlll38->SetBinContent(10,0.003031301);
   new_histo_group_Higgs_wh3l_zg_13TeV_mlll38->SetBinContent(11,0.006326519);
   new_histo_group_Higgs_wh3l_zg_13TeV_mlll38->SetBinContent(12,0.003384755);
   new_histo_group_Higgs_wh3l_zg_13TeV_mlll38->SetBinContent(13,0.00334585);
   new_histo_group_Higgs_wh3l_zg_13TeV_mlll38->SetBinContent(14,0.005332867);
   new_histo_group_Higgs_wh3l_zg_13TeV_mlll38->SetBinContent(15,0.003718129);
   new_histo_group_Higgs_wh3l_zg_13TeV_mlll38->SetBinContent(16,0.004761036);
   new_histo_group_Higgs_wh3l_zg_13TeV_mlll38->SetBinContent(17,0.00964969);
   new_histo_group_Higgs_wh3l_zg_13TeV_mlll38->SetBinContent(18,0.001131754);
   new_histo_group_Higgs_wh3l_zg_13TeV_mlll38->SetBinContent(19,0.005467602);
   new_histo_group_Higgs_wh3l_zg_13TeV_mlll38->SetBinContent(20,0.006287014);
   new_histo_group_Higgs_wh3l_zg_13TeV_mlll38->SetBinError(1,0.00114044);
   new_histo_group_Higgs_wh3l_zg_13TeV_mlll38->SetBinError(2,0.0006243199);
   new_histo_group_Higgs_wh3l_zg_13TeV_mlll38->SetBinError(3,0.002641981);
   new_histo_group_Higgs_wh3l_zg_13TeV_mlll38->SetBinError(4,0.002241708);
   new_histo_group_Higgs_wh3l_zg_13TeV_mlll38->SetBinError(5,0.001160134);
   new_histo_group_Higgs_wh3l_zg_13TeV_mlll38->SetBinError(6,0.002969245);
   new_histo_group_Higgs_wh3l_zg_13TeV_mlll38->SetBinError(7,0.001976969);
   new_histo_group_Higgs_wh3l_zg_13TeV_mlll38->SetBinError(8,0.001693682);
   new_histo_group_Higgs_wh3l_zg_13TeV_mlll38->SetBinError(9,0.00183035);
   new_histo_group_Higgs_wh3l_zg_13TeV_mlll38->SetBinError(10,0.00137478);
   new_histo_group_Higgs_wh3l_zg_13TeV_mlll38->SetBinError(11,0.003148783);
   new_histo_group_Higgs_wh3l_zg_13TeV_mlll38->SetBinError(12,0.001343038);
   new_histo_group_Higgs_wh3l_zg_13TeV_mlll38->SetBinError(13,0.002180717);
   new_histo_group_Higgs_wh3l_zg_13TeV_mlll38->SetBinError(14,0.002444457);
   new_histo_group_Higgs_wh3l_zg_13TeV_mlll38->SetBinError(15,0.002047);
   new_histo_group_Higgs_wh3l_zg_13TeV_mlll38->SetBinError(16,0.002453771);
   new_histo_group_Higgs_wh3l_zg_13TeV_mlll38->SetBinError(17,0.003094789);
   new_histo_group_Higgs_wh3l_zg_13TeV_mlll38->SetBinError(18,0.000572504);
   new_histo_group_Higgs_wh3l_zg_13TeV_mlll38->SetBinError(19,0.002536487);
   new_histo_group_Higgs_wh3l_zg_13TeV_mlll38->SetBinError(20,0.00319693);
   new_histo_group_Higgs_wh3l_zg_13TeV_mlll38->SetEntries(180);
   new_histo_group_Higgs_wh3l_zg_13TeV_mlll38->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_zg_13TeV_mlll38->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_zg_13TeV_mlll38->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_zg_13TeV_mlll38->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_zg_13TeV_mlll38->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_zg_13TeV_mlll38->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_zg_13TeV_mlll38->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_zg_13TeV_mlll38->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_zg_13TeV_mlll38->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_zg_13TeV_mlll38->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_zg_13TeV_mlll38->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_zg_13TeV_mlll38->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_zg_13TeV_mlll38->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_zg_13TeV_mlll38->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_zg_13TeV_mlll38->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_mlll->Add(new_histo_group_Higgs_wh3l_zg_13TeV_mlll,"");
   thsBackground_grouped_wh3l_zg_13TeV_mlll->Draw("hist same");
   
   thsSignal_grouped_wh3l_zg_13TeV_mlll = new THStack();
   thsSignal_grouped_wh3l_zg_13TeV_mlll->SetName("thsSignal_grouped_wh3l_zg_13TeV_mlll");
   thsSignal_grouped_wh3l_zg_13TeV_mlll->SetTitle("thsSignal_grouped_wh3l_zg_13TeV_mlll");
   
   TH1F *thsSignal_grouped_wh3l_zg_13TeV_mlll_stack_8 = new TH1F("thsSignal_grouped_wh3l_zg_13TeV_mlll_stack_8","thsSignal_grouped_wh3l_zg_13TeV_mlll",20,80,100);
   thsSignal_grouped_wh3l_zg_13TeV_mlll_stack_8->SetMinimum(0);
   thsSignal_grouped_wh3l_zg_13TeV_mlll_stack_8->SetMaximum(0.0133817);
   thsSignal_grouped_wh3l_zg_13TeV_mlll_stack_8->SetDirectory(0);
   thsSignal_grouped_wh3l_zg_13TeV_mlll_stack_8->SetStats(0);
   thsSignal_grouped_wh3l_zg_13TeV_mlll_stack_8->SetLineStyle(0);
   thsSignal_grouped_wh3l_zg_13TeV_mlll_stack_8->SetMarkerStyle(20);
   thsSignal_grouped_wh3l_zg_13TeV_mlll_stack_8->GetXaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_zg_13TeV_mlll_stack_8->GetXaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_zg_13TeV_mlll_stack_8->GetXaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_zg_13TeV_mlll_stack_8->GetXaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_zg_13TeV_mlll_stack_8->GetXaxis()->SetTitleOffset(0.9);
   thsSignal_grouped_wh3l_zg_13TeV_mlll_stack_8->GetXaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_zg_13TeV_mlll_stack_8->GetYaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_zg_13TeV_mlll_stack_8->GetYaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_zg_13TeV_mlll_stack_8->GetYaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_zg_13TeV_mlll_stack_8->GetYaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_zg_13TeV_mlll_stack_8->GetYaxis()->SetTitleOffset(1.25);
   thsSignal_grouped_wh3l_zg_13TeV_mlll_stack_8->GetYaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_zg_13TeV_mlll_stack_8->GetZaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_zg_13TeV_mlll_stack_8->GetZaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_zg_13TeV_mlll_stack_8->GetZaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_zg_13TeV_mlll_stack_8->GetZaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_zg_13TeV_mlll_stack_8->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_zg_13TeV_mlll->SetHistogram(thsSignal_grouped_wh3l_zg_13TeV_mlll_stack_8);
   
   
   TH1D *new_histo_group_Higgs_wh3l_zg_13TeV_mlll39 = new TH1D("new_histo_group_Higgs_wh3l_zg_13TeV_mlll39","histo_H_htt",20,80,100);
   new_histo_group_Higgs_wh3l_zg_13TeV_mlll39->SetBinContent(1,0.002804977);
   new_histo_group_Higgs_wh3l_zg_13TeV_mlll39->SetBinContent(2,0.001747821);
   new_histo_group_Higgs_wh3l_zg_13TeV_mlll39->SetBinContent(3,0.006064351);
   new_histo_group_Higgs_wh3l_zg_13TeV_mlll39->SetBinContent(4,0.004447393);
   new_histo_group_Higgs_wh3l_zg_13TeV_mlll39->SetBinContent(5,0.002668425);
   new_histo_group_Higgs_wh3l_zg_13TeV_mlll39->SetBinContent(6,0.007077613);
   new_histo_group_Higgs_wh3l_zg_13TeV_mlll39->SetBinContent(7,0.004438575);
   new_histo_group_Higgs_wh3l_zg_13TeV_mlll39->SetBinContent(8,0.002672956);
   new_histo_group_Higgs_wh3l_zg_13TeV_mlll39->SetBinContent(9,0.00441802);
   new_histo_group_Higgs_wh3l_zg_13TeV_mlll39->SetBinContent(10,0.003031301);
   new_histo_group_Higgs_wh3l_zg_13TeV_mlll39->SetBinContent(11,0.006326519);
   new_histo_group_Higgs_wh3l_zg_13TeV_mlll39->SetBinContent(12,0.003384755);
   new_histo_group_Higgs_wh3l_zg_13TeV_mlll39->SetBinContent(13,0.00334585);
   new_histo_group_Higgs_wh3l_zg_13TeV_mlll39->SetBinContent(14,0.005332867);
   new_histo_group_Higgs_wh3l_zg_13TeV_mlll39->SetBinContent(15,0.003718129);
   new_histo_group_Higgs_wh3l_zg_13TeV_mlll39->SetBinContent(16,0.004761036);
   new_histo_group_Higgs_wh3l_zg_13TeV_mlll39->SetBinContent(17,0.00964969);
   new_histo_group_Higgs_wh3l_zg_13TeV_mlll39->SetBinContent(18,0.001131754);
   new_histo_group_Higgs_wh3l_zg_13TeV_mlll39->SetBinContent(19,0.005467602);
   new_histo_group_Higgs_wh3l_zg_13TeV_mlll39->SetBinContent(20,0.006287014);
   new_histo_group_Higgs_wh3l_zg_13TeV_mlll39->SetBinError(1,0.00114044);
   new_histo_group_Higgs_wh3l_zg_13TeV_mlll39->SetBinError(2,0.0006243199);
   new_histo_group_Higgs_wh3l_zg_13TeV_mlll39->SetBinError(3,0.002641981);
   new_histo_group_Higgs_wh3l_zg_13TeV_mlll39->SetBinError(4,0.002241708);
   new_histo_group_Higgs_wh3l_zg_13TeV_mlll39->SetBinError(5,0.001160134);
   new_histo_group_Higgs_wh3l_zg_13TeV_mlll39->SetBinError(6,0.002969245);
   new_histo_group_Higgs_wh3l_zg_13TeV_mlll39->SetBinError(7,0.001976969);
   new_histo_group_Higgs_wh3l_zg_13TeV_mlll39->SetBinError(8,0.001693682);
   new_histo_group_Higgs_wh3l_zg_13TeV_mlll39->SetBinError(9,0.00183035);
   new_histo_group_Higgs_wh3l_zg_13TeV_mlll39->SetBinError(10,0.00137478);
   new_histo_group_Higgs_wh3l_zg_13TeV_mlll39->SetBinError(11,0.003148783);
   new_histo_group_Higgs_wh3l_zg_13TeV_mlll39->SetBinError(12,0.001343038);
   new_histo_group_Higgs_wh3l_zg_13TeV_mlll39->SetBinError(13,0.002180717);
   new_histo_group_Higgs_wh3l_zg_13TeV_mlll39->SetBinError(14,0.002444457);
   new_histo_group_Higgs_wh3l_zg_13TeV_mlll39->SetBinError(15,0.002047);
   new_histo_group_Higgs_wh3l_zg_13TeV_mlll39->SetBinError(16,0.002453771);
   new_histo_group_Higgs_wh3l_zg_13TeV_mlll39->SetBinError(17,0.003094789);
   new_histo_group_Higgs_wh3l_zg_13TeV_mlll39->SetBinError(18,0.000572504);
   new_histo_group_Higgs_wh3l_zg_13TeV_mlll39->SetBinError(19,0.002536487);
   new_histo_group_Higgs_wh3l_zg_13TeV_mlll39->SetBinError(20,0.00319693);
   new_histo_group_Higgs_wh3l_zg_13TeV_mlll39->SetEntries(180);
   new_histo_group_Higgs_wh3l_zg_13TeV_mlll39->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_zg_13TeV_mlll39->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_zg_13TeV_mlll39->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_zg_13TeV_mlll39->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_zg_13TeV_mlll39->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_zg_13TeV_mlll39->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_zg_13TeV_mlll39->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_zg_13TeV_mlll39->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_zg_13TeV_mlll39->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_zg_13TeV_mlll39->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_zg_13TeV_mlll39->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_zg_13TeV_mlll39->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_zg_13TeV_mlll39->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_zg_13TeV_mlll39->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_zg_13TeV_mlll39->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_zg_13TeV_mlll->Add(new_histo_group_Higgs_wh3l_zg_13TeV_mlll,"");
   thsSignal_grouped_wh3l_zg_13TeV_mlll->Draw("hist same noclear");
   
   Double_t _fx3007[20] = {
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
   Double_t _fy3007[20] = {
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
   Double_t _felx3007[20] = {
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
   Double_t _fely3007[20] = {
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
   Double_t _fehx3007[20] = {
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
   Double_t _fehy3007[20] = {
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
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(20,_fx3007,_fy3007,_felx3007,_fehx3007,_fely3007,_fehy3007);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(12);
   grae->SetFillStyle(3004);
   grae->SetLineColor(12);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3007 = new TH1F("Graph_Graph3007","",100,78,102);
   Graph_Graph3007->SetMinimum(0);
   Graph_Graph3007->SetMaximum(23.87612);
   Graph_Graph3007->SetDirectory(0);
   Graph_Graph3007->SetStats(0);
   Graph_Graph3007->SetLineStyle(0);
   Graph_Graph3007->SetMarkerStyle(20);
   Graph_Graph3007->GetXaxis()->SetLabelFont(42);
   Graph_Graph3007->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3007->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3007->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3007->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3007->GetXaxis()->SetTitleFont(42);
   Graph_Graph3007->GetYaxis()->SetLabelFont(42);
   Graph_Graph3007->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3007->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3007->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3007->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3007->GetYaxis()->SetTitleFont(42);
   Graph_Graph3007->GetZaxis()->SetLabelFont(42);
   Graph_Graph3007->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3007->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3007->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3007->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3007);
   
   grae->Draw("2");
   
   Double_t _fx3008[20] = {
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
   Double_t _fy3008[20] = {
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
   Double_t _felx3008[20] = {
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
   Double_t _fely3008[20] = {
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
   Double_t _fehx3008[20] = {
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
   Double_t _fehy3008[20] = {
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
   grae = new TGraphAsymmErrors(20,_fx3008,_fy3008,_felx3008,_fehx3008,_fely3008,_fehy3008);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(1);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3008 = new TH1F("Graph_Graph3008","",100,78,102);
   Graph_Graph3008->SetMinimum(0);
   Graph_Graph3008->SetMaximum(24.42421);
   Graph_Graph3008->SetDirectory(0);
   Graph_Graph3008->SetStats(0);
   Graph_Graph3008->SetLineStyle(0);
   Graph_Graph3008->SetMarkerStyle(20);
   Graph_Graph3008->GetXaxis()->SetLabelFont(42);
   Graph_Graph3008->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3008->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3008->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3008->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3008->GetXaxis()->SetTitleFont(42);
   Graph_Graph3008->GetYaxis()->SetLabelFont(42);
   Graph_Graph3008->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3008->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3008->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3008->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3008->GetYaxis()->SetTitleFont(42);
   Graph_Graph3008->GetZaxis()->SetLabelFont(42);
   Graph_Graph3008->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3008->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3008->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3008->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3008);
   
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
   
   TH1F *hframe_copy40 = new TH1F("hframe_copy40","",1000,80,100);
   hframe_copy40->SetMinimum(0);
   hframe_copy40->SetMaximum(52.80776);
   hframe_copy40->SetDirectory(0);
   hframe_copy40->SetStats(0);
   hframe_copy40->SetLineStyle(0);
   hframe_copy40->SetMarkerStyle(20);
   hframe_copy40->GetXaxis()->SetTitle("m_{lll} [GeV]");
   hframe_copy40->GetXaxis()->SetNdivisions(506);
   hframe_copy40->GetXaxis()->SetLabelFont(42);
   hframe_copy40->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy40->GetXaxis()->SetLabelSize(0.05);
   hframe_copy40->GetXaxis()->SetTitleSize(0.06);
   hframe_copy40->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy40->GetXaxis()->SetTitleFont(42);
   hframe_copy40->GetYaxis()->SetTitle("Events");
   hframe_copy40->GetYaxis()->SetLabelFont(42);
   hframe_copy40->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy40->GetYaxis()->SetLabelSize(0.05);
   hframe_copy40->GetYaxis()->SetTitleSize(0.06);
   hframe_copy40->GetYaxis()->SetTitleOffset(1.25);
   hframe_copy40->GetYaxis()->SetTitleFont(42);
   hframe_copy40->GetZaxis()->SetLabelFont(42);
   hframe_copy40->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy40->GetZaxis()->SetLabelSize(0.05);
   hframe_copy40->GetZaxis()->SetTitleSize(0.06);
   hframe_copy40->GetZaxis()->SetTitleFont(42);
   hframe_copy40->Draw("sameaxis");
   ccwh3l_zg_13TeV_mlll->Modified();
   ccwh3l_zg_13TeV_mlll->cd();
   ccwh3l_zg_13TeV_mlll->SetSelected(ccwh3l_zg_13TeV_mlll);
}
