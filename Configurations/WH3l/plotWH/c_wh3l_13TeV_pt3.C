void c_wh3l_13TeV_pt3()
{
//=========Macro generated from canvas: ccwh3l_13TeV_pt3/cc
//=========  (Fri Jun 24 14:14:59 2016) by ROOT version6.02/13
   TCanvas *ccwh3l_13TeV_pt3 = new TCanvas("ccwh3l_13TeV_pt3", "cc",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   ccwh3l_13TeV_pt3->SetHighLightColor(2);
   ccwh3l_13TeV_pt3->Range(-88,-94.03812,524.5,629.3321);
   ccwh3l_13TeV_pt3->SetFillColor(0);
   ccwh3l_13TeV_pt3->SetBorderMode(0);
   ccwh3l_13TeV_pt3->SetBorderSize(2);
   ccwh3l_13TeV_pt3->SetTickx(1);
   ccwh3l_13TeV_pt3->SetTicky(1);
   ccwh3l_13TeV_pt3->SetLeftMargin(0.16);
   ccwh3l_13TeV_pt3->SetRightMargin(0.04);
   ccwh3l_13TeV_pt3->SetTopMargin(0.05);
   ccwh3l_13TeV_pt3->SetBottomMargin(0.13);
   ccwh3l_13TeV_pt3->SetFrameFillStyle(0);
   ccwh3l_13TeV_pt3->SetFrameBorderMode(0);
   ccwh3l_13TeV_pt3->SetFrameFillStyle(0);
   ccwh3l_13TeV_pt3->SetFrameBorderMode(0);
   
   TH1F *hframe64 = new TH1F("hframe64","",1000,10,500);
   hframe64->SetMinimum(0);
   hframe64->SetMaximum(593.1636);
   hframe64->SetDirectory(0);
   hframe64->SetStats(0);
   hframe64->SetLineStyle(0);
   hframe64->SetMarkerStyle(20);
   hframe64->GetXaxis()->SetTitle("lept3_p_{T} [GeV]");
   hframe64->GetXaxis()->SetNdivisions(506);
   hframe64->GetXaxis()->SetLabelFont(42);
   hframe64->GetXaxis()->SetLabelOffset(0.007);
   hframe64->GetXaxis()->SetLabelSize(0.05);
   hframe64->GetXaxis()->SetTitleSize(0.06);
   hframe64->GetXaxis()->SetTitleOffset(0.9);
   hframe64->GetXaxis()->SetTitleFont(42);
   hframe64->GetYaxis()->SetTitle("Events");
   hframe64->GetYaxis()->SetLabelFont(42);
   hframe64->GetYaxis()->SetLabelOffset(0.007);
   hframe64->GetYaxis()->SetLabelSize(0.05);
   hframe64->GetYaxis()->SetTitleSize(0.06);
   hframe64->GetYaxis()->SetTitleOffset(1.25);
   hframe64->GetYaxis()->SetTitleFont(42);
   hframe64->GetZaxis()->SetLabelFont(42);
   hframe64->GetZaxis()->SetLabelOffset(0.007);
   hframe64->GetZaxis()->SetLabelSize(0.05);
   hframe64->GetZaxis()->SetTitleSize(0.06);
   hframe64->GetZaxis()->SetTitleFont(42);
   hframe64->Draw(" ");
   
   THStack *thsBackground_grouped_wh3l_13TeV_pt3 = new THStack();
   thsBackground_grouped_wh3l_13TeV_pt3->SetName("thsBackground_grouped_wh3l_13TeV_pt3");
   thsBackground_grouped_wh3l_13TeV_pt3->SetTitle("thsBackground_grouped_wh3l_13TeV_pt3");
   
   TH1F *thsBackground_grouped_wh3l_13TeV_pt3_stack_15 = new TH1F("thsBackground_grouped_wh3l_13TeV_pt3_stack_15","thsBackground_grouped_wh3l_13TeV_pt3",50,10,500);
   thsBackground_grouped_wh3l_13TeV_pt3_stack_15->SetMinimum(-0.4920783);
   thsBackground_grouped_wh3l_13TeV_pt3_stack_15->SetMaximum(249.1287);
   thsBackground_grouped_wh3l_13TeV_pt3_stack_15->SetDirectory(0);
   thsBackground_grouped_wh3l_13TeV_pt3_stack_15->SetStats(0);
   thsBackground_grouped_wh3l_13TeV_pt3_stack_15->SetLineStyle(0);
   thsBackground_grouped_wh3l_13TeV_pt3_stack_15->SetMarkerStyle(20);
   thsBackground_grouped_wh3l_13TeV_pt3_stack_15->GetXaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_13TeV_pt3_stack_15->GetXaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_13TeV_pt3_stack_15->GetXaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_13TeV_pt3_stack_15->GetXaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_13TeV_pt3_stack_15->GetXaxis()->SetTitleOffset(0.9);
   thsBackground_grouped_wh3l_13TeV_pt3_stack_15->GetXaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_pt3_stack_15->GetYaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_13TeV_pt3_stack_15->GetYaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_13TeV_pt3_stack_15->GetYaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_13TeV_pt3_stack_15->GetYaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_13TeV_pt3_stack_15->GetYaxis()->SetTitleOffset(1.25);
   thsBackground_grouped_wh3l_13TeV_pt3_stack_15->GetYaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_pt3_stack_15->GetZaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_13TeV_pt3_stack_15->GetZaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_13TeV_pt3_stack_15->GetZaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_13TeV_pt3_stack_15->GetZaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_13TeV_pt3_stack_15->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_pt3->SetHistogram(thsBackground_grouped_wh3l_13TeV_pt3_stack_15);
   
   
   TH1D *new_histo_group_DY_wh3l_13TeV_pt365 = new TH1D("new_histo_group_DY_wh3l_13TeV_pt365","histo_DY",50,10,500);
   new_histo_group_DY_wh3l_13TeV_pt365->SetBinContent(1,162.7569);
   new_histo_group_DY_wh3l_13TeV_pt365->SetBinContent(2,34.07691);
   new_histo_group_DY_wh3l_13TeV_pt365->SetBinContent(3,6.080384);
   new_histo_group_DY_wh3l_13TeV_pt365->SetBinContent(4,0.6860858);
   new_histo_group_DY_wh3l_13TeV_pt365->SetBinContent(5,0.5739203);
   new_histo_group_DY_wh3l_13TeV_pt365->SetBinError(1,13.23163);
   new_histo_group_DY_wh3l_13TeV_pt365->SetBinError(2,5.893268);
   new_histo_group_DY_wh3l_13TeV_pt365->SetBinError(3,2.757922);
   new_histo_group_DY_wh3l_13TeV_pt365->SetBinError(4,1.178164);
   new_histo_group_DY_wh3l_13TeV_pt365->SetBinError(5,0.5739203);
   new_histo_group_DY_wh3l_13TeV_pt365->SetEntries(546);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#009900");
   new_histo_group_DY_wh3l_13TeV_pt365->SetFillColor(ci);
   new_histo_group_DY_wh3l_13TeV_pt365->SetFillStyle(3001);

   ci = TColor::GetColor("#009900");
   new_histo_group_DY_wh3l_13TeV_pt365->SetLineColor(ci);
   new_histo_group_DY_wh3l_13TeV_pt365->GetXaxis()->SetLabelFont(42);
   new_histo_group_DY_wh3l_13TeV_pt365->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_DY_wh3l_13TeV_pt365->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_DY_wh3l_13TeV_pt365->GetXaxis()->SetTitleFont(42);
   new_histo_group_DY_wh3l_13TeV_pt365->GetYaxis()->SetLabelFont(42);
   new_histo_group_DY_wh3l_13TeV_pt365->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_DY_wh3l_13TeV_pt365->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_DY_wh3l_13TeV_pt365->GetYaxis()->SetTitleFont(42);
   new_histo_group_DY_wh3l_13TeV_pt365->GetZaxis()->SetLabelFont(42);
   new_histo_group_DY_wh3l_13TeV_pt365->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_DY_wh3l_13TeV_pt365->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_DY_wh3l_13TeV_pt365->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_pt3->Add(new_histo_group_DY_wh3l_13TeV_pt3,"");
   
   TH1D *new_histo_group_top_wh3l_13TeV_pt366 = new TH1D("new_histo_group_top_wh3l_13TeV_pt366","histo_top",50,10,500);
   new_histo_group_top_wh3l_13TeV_pt366->SetBinContent(1,4.463365);
   new_histo_group_top_wh3l_13TeV_pt366->SetBinContent(2,2.272325);
   new_histo_group_top_wh3l_13TeV_pt366->SetBinContent(3,0.8312054);
   new_histo_group_top_wh3l_13TeV_pt366->SetBinContent(4,0.3325267);
   new_histo_group_top_wh3l_13TeV_pt366->SetBinContent(5,0.1083366);
   new_histo_group_top_wh3l_13TeV_pt366->SetBinContent(6,0.1358392);
   new_histo_group_top_wh3l_13TeV_pt366->SetBinContent(7,0.02202483);
   new_histo_group_top_wh3l_13TeV_pt366->SetBinError(1,0.3623118);
   new_histo_group_top_wh3l_13TeV_pt366->SetBinError(2,0.2566063);
   new_histo_group_top_wh3l_13TeV_pt366->SetBinError(3,0.1651112);
   new_histo_group_top_wh3l_13TeV_pt366->SetBinError(4,0.1294513);
   new_histo_group_top_wh3l_13TeV_pt366->SetBinError(5,0.04932736);
   new_histo_group_top_wh3l_13TeV_pt366->SetBinError(6,0.1091168);
   new_histo_group_top_wh3l_13TeV_pt366->SetBinError(7,0.02202479);
   new_histo_group_top_wh3l_13TeV_pt366->SetEntries(377);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_top_wh3l_13TeV_pt366->SetFillColor(ci);
   new_histo_group_top_wh3l_13TeV_pt366->SetFillStyle(3001);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_top_wh3l_13TeV_pt366->SetLineColor(ci);
   new_histo_group_top_wh3l_13TeV_pt366->GetXaxis()->SetLabelFont(42);
   new_histo_group_top_wh3l_13TeV_pt366->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_top_wh3l_13TeV_pt366->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_top_wh3l_13TeV_pt366->GetXaxis()->SetTitleFont(42);
   new_histo_group_top_wh3l_13TeV_pt366->GetYaxis()->SetLabelFont(42);
   new_histo_group_top_wh3l_13TeV_pt366->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_top_wh3l_13TeV_pt366->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_top_wh3l_13TeV_pt366->GetYaxis()->SetTitleFont(42);
   new_histo_group_top_wh3l_13TeV_pt366->GetZaxis()->SetLabelFont(42);
   new_histo_group_top_wh3l_13TeV_pt366->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_top_wh3l_13TeV_pt366->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_top_wh3l_13TeV_pt366->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_pt3->Add(new_histo_group_top_wh3l_13TeV_pt3,"");
   
   TH1D *new_histo_group_WW_wh3l_13TeV_pt367 = new TH1D("new_histo_group_WW_wh3l_13TeV_pt367","histo_WW",50,10,500);
   new_histo_group_WW_wh3l_13TeV_pt367->SetBinContent(1,0.1762224);
   new_histo_group_WW_wh3l_13TeV_pt367->SetBinContent(2,0.07492688);
   new_histo_group_WW_wh3l_13TeV_pt367->SetBinContent(3,0.05412438);
   new_histo_group_WW_wh3l_13TeV_pt367->SetBinError(1,0.05166225);
   new_histo_group_WW_wh3l_13TeV_pt367->SetBinError(2,0.03100376);
   new_histo_group_WW_wh3l_13TeV_pt367->SetBinError(3,0.02751919);
   new_histo_group_WW_wh3l_13TeV_pt367->SetEntries(26);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_13TeV_pt367->SetFillColor(ci);
   new_histo_group_WW_wh3l_13TeV_pt367->SetFillStyle(3001);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_13TeV_pt367->SetLineColor(ci);
   new_histo_group_WW_wh3l_13TeV_pt367->GetXaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_13TeV_pt367->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_13TeV_pt367->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_13TeV_pt367->GetXaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_13TeV_pt367->GetYaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_13TeV_pt367->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_13TeV_pt367->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_13TeV_pt367->GetYaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_13TeV_pt367->GetZaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_13TeV_pt367->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_13TeV_pt367->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_13TeV_pt367->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_pt3->Add(new_histo_group_WW_wh3l_13TeV_pt3,"");
   
   TH1D *new_histo_group_VVV_wh3l_13TeV_pt368 = new TH1D("new_histo_group_VVV_wh3l_13TeV_pt368","histo_VVV",50,10,500);
   new_histo_group_VVV_wh3l_13TeV_pt368->SetBinContent(1,0.04647985);
   new_histo_group_VVV_wh3l_13TeV_pt368->SetBinContent(2,0.0701932);
   new_histo_group_VVV_wh3l_13TeV_pt368->SetBinContent(3,0.05091446);
   new_histo_group_VVV_wh3l_13TeV_pt368->SetBinContent(4,0.03121472);
   new_histo_group_VVV_wh3l_13TeV_pt368->SetBinContent(5,0.01696743);
   new_histo_group_VVV_wh3l_13TeV_pt368->SetBinContent(6,0.007406394);
   new_histo_group_VVV_wh3l_13TeV_pt368->SetBinContent(7,0.007759418);
   new_histo_group_VVV_wh3l_13TeV_pt368->SetBinContent(8,0.001832452);
   new_histo_group_VVV_wh3l_13TeV_pt368->SetBinContent(9,0.00204793);
   new_histo_group_VVV_wh3l_13TeV_pt368->SetBinContent(10,0.0004502214);
   new_histo_group_VVV_wh3l_13TeV_pt368->SetBinContent(11,0.002348417);
   new_histo_group_VVV_wh3l_13TeV_pt368->SetBinContent(12,0.0008309358);
   new_histo_group_VVV_wh3l_13TeV_pt368->SetBinContent(13,0.000450876);
   new_histo_group_VVV_wh3l_13TeV_pt368->SetBinContent(15,0.0005211688);
   new_histo_group_VVV_wh3l_13TeV_pt368->SetBinContent(18,0.0007300887);
   new_histo_group_VVV_wh3l_13TeV_pt368->SetBinContent(22,0.0005111804);
   new_histo_group_VVV_wh3l_13TeV_pt368->SetBinContent(30,0.0002827117);
   new_histo_group_VVV_wh3l_13TeV_pt368->SetBinError(1,0.005436955);
   new_histo_group_VVV_wh3l_13TeV_pt368->SetBinError(2,0.007373452);
   new_histo_group_VVV_wh3l_13TeV_pt368->SetBinError(3,0.005899593);
   new_histo_group_VVV_wh3l_13TeV_pt368->SetBinError(4,0.004498011);
   new_histo_group_VVV_wh3l_13TeV_pt368->SetBinError(5,0.00349195);
   new_histo_group_VVV_wh3l_13TeV_pt368->SetBinError(6,0.002139676);
   new_histo_group_VVV_wh3l_13TeV_pt368->SetBinError(7,0.002212787);
   new_histo_group_VVV_wh3l_13TeV_pt368->SetBinError(8,0.001063573);
   new_histo_group_VVV_wh3l_13TeV_pt368->SetBinError(9,0.001184343);
   new_histo_group_VVV_wh3l_13TeV_pt368->SetBinError(10,0.0004500268);
   new_histo_group_VVV_wh3l_13TeV_pt368->SetBinError(11,0.00172548);
   new_histo_group_VVV_wh3l_13TeV_pt368->SetBinError(12,0.0005878922);
   new_histo_group_VVV_wh3l_13TeV_pt368->SetBinError(13,0.000450876);
   new_histo_group_VVV_wh3l_13TeV_pt368->SetBinError(15,0.0005211688);
   new_histo_group_VVV_wh3l_13TeV_pt368->SetBinError(18,0.0007300887);
   new_histo_group_VVV_wh3l_13TeV_pt368->SetBinError(22,0.0005111804);
   new_histo_group_VVV_wh3l_13TeV_pt368->SetBinError(30,0.0002827117);
   new_histo_group_VVV_wh3l_13TeV_pt368->SetEntries(478);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_13TeV_pt368->SetFillColor(ci);
   new_histo_group_VVV_wh3l_13TeV_pt368->SetFillStyle(3001);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_13TeV_pt368->SetLineColor(ci);
   new_histo_group_VVV_wh3l_13TeV_pt368->GetXaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_13TeV_pt368->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_13TeV_pt368->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_13TeV_pt368->GetXaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_13TeV_pt368->GetYaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_13TeV_pt368->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_13TeV_pt368->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_13TeV_pt368->GetYaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_13TeV_pt368->GetZaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_13TeV_pt368->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_13TeV_pt368->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_13TeV_pt368->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_pt3->Add(new_histo_group_VVV_wh3l_13TeV_pt3,"");
   
   TH1D *new_histo_group_VZ_wh3l_13TeV_pt369 = new TH1D("new_histo_group_VZ_wh3l_13TeV_pt369","histo_VZ",50,10,500);
   new_histo_group_VZ_wh3l_13TeV_pt369->SetBinContent(1,69.10648);
   new_histo_group_VZ_wh3l_13TeV_pt369->SetBinContent(2,87.5186);
   new_histo_group_VZ_wh3l_13TeV_pt369->SetBinContent(3,71.62732);
   new_histo_group_VZ_wh3l_13TeV_pt369->SetBinContent(4,31.91337);
   new_histo_group_VZ_wh3l_13TeV_pt369->SetBinContent(5,9.728445);
   new_histo_group_VZ_wh3l_13TeV_pt369->SetBinContent(6,3.812752);
   new_histo_group_VZ_wh3l_13TeV_pt369->SetBinContent(7,2.147043);
   new_histo_group_VZ_wh3l_13TeV_pt369->SetBinContent(8,1.143793);
   new_histo_group_VZ_wh3l_13TeV_pt369->SetBinContent(9,0.7104165);
   new_histo_group_VZ_wh3l_13TeV_pt369->SetBinContent(10,0.4767066);
   new_histo_group_VZ_wh3l_13TeV_pt369->SetBinContent(11,0.2121797);
   new_histo_group_VZ_wh3l_13TeV_pt369->SetBinContent(12,0.1935804);
   new_histo_group_VZ_wh3l_13TeV_pt369->SetBinContent(13,0.292916);
   new_histo_group_VZ_wh3l_13TeV_pt369->SetBinContent(14,0.05233716);
   new_histo_group_VZ_wh3l_13TeV_pt369->SetBinContent(15,0.01301459);
   new_histo_group_VZ_wh3l_13TeV_pt369->SetBinContent(16,0.01115816);
   new_histo_group_VZ_wh3l_13TeV_pt369->SetBinContent(17,0.01789694);
   new_histo_group_VZ_wh3l_13TeV_pt369->SetBinContent(18,0.02039428);
   new_histo_group_VZ_wh3l_13TeV_pt369->SetBinContent(19,0.01670311);
   new_histo_group_VZ_wh3l_13TeV_pt369->SetBinContent(20,0.00581399);
   new_histo_group_VZ_wh3l_13TeV_pt369->SetBinContent(23,0.006436509);
   new_histo_group_VZ_wh3l_13TeV_pt369->SetBinContent(26,0.004546572);
   new_histo_group_VZ_wh3l_13TeV_pt369->SetBinContent(28,0.005543554);
   new_histo_group_VZ_wh3l_13TeV_pt369->SetBinContent(29,0.03538598);
   new_histo_group_VZ_wh3l_13TeV_pt369->SetBinError(1,0.8858433);
   new_histo_group_VZ_wh3l_13TeV_pt369->SetBinError(2,1.009914);
   new_histo_group_VZ_wh3l_13TeV_pt369->SetBinError(3,0.9749443);
   new_histo_group_VZ_wh3l_13TeV_pt369->SetBinError(4,0.7362593);
   new_histo_group_VZ_wh3l_13TeV_pt369->SetBinError(5,0.4105469);
   new_histo_group_VZ_wh3l_13TeV_pt369->SetBinError(6,0.2529344);
   new_histo_group_VZ_wh3l_13TeV_pt369->SetBinError(7,0.1908371);
   new_histo_group_VZ_wh3l_13TeV_pt369->SetBinError(8,0.1548677);
   new_histo_group_VZ_wh3l_13TeV_pt369->SetBinError(9,0.1116498);
   new_histo_group_VZ_wh3l_13TeV_pt369->SetBinError(10,0.09526839);
   new_histo_group_VZ_wh3l_13TeV_pt369->SetBinError(11,0.06455166);
   new_histo_group_VZ_wh3l_13TeV_pt369->SetBinError(12,0.05326432);
   new_histo_group_VZ_wh3l_13TeV_pt369->SetBinError(13,0.08916272);
   new_histo_group_VZ_wh3l_13TeV_pt369->SetBinError(14,0.01633574);
   new_histo_group_VZ_wh3l_13TeV_pt369->SetBinError(15,0.007709398);
   new_histo_group_VZ_wh3l_13TeV_pt369->SetBinError(16,0.007890314);
   new_histo_group_VZ_wh3l_13TeV_pt369->SetBinError(17,0.01033859);
   new_histo_group_VZ_wh3l_13TeV_pt369->SetBinError(18,0.01037162);
   new_histo_group_VZ_wh3l_13TeV_pt369->SetBinError(19,0.009660072);
   new_histo_group_VZ_wh3l_13TeV_pt369->SetBinError(20,0.00581399);
   new_histo_group_VZ_wh3l_13TeV_pt369->SetBinError(23,0.006436509);
   new_histo_group_VZ_wh3l_13TeV_pt369->SetBinError(26,0.004546572);
   new_histo_group_VZ_wh3l_13TeV_pt369->SetBinError(28,0.005543554);
   new_histo_group_VZ_wh3l_13TeV_pt369->SetBinError(29,0.03538598);
   new_histo_group_VZ_wh3l_13TeV_pt369->SetEntries(46249);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_VZ_wh3l_13TeV_pt369->SetFillColor(ci);
   new_histo_group_VZ_wh3l_13TeV_pt369->SetFillStyle(3001);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_VZ_wh3l_13TeV_pt369->SetLineColor(ci);
   new_histo_group_VZ_wh3l_13TeV_pt369->GetXaxis()->SetLabelFont(42);
   new_histo_group_VZ_wh3l_13TeV_pt369->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_VZ_wh3l_13TeV_pt369->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_VZ_wh3l_13TeV_pt369->GetXaxis()->SetTitleFont(42);
   new_histo_group_VZ_wh3l_13TeV_pt369->GetYaxis()->SetLabelFont(42);
   new_histo_group_VZ_wh3l_13TeV_pt369->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_VZ_wh3l_13TeV_pt369->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_VZ_wh3l_13TeV_pt369->GetYaxis()->SetTitleFont(42);
   new_histo_group_VZ_wh3l_13TeV_pt369->GetZaxis()->SetLabelFont(42);
   new_histo_group_VZ_wh3l_13TeV_pt369->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_VZ_wh3l_13TeV_pt369->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_VZ_wh3l_13TeV_pt369->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_pt3->Add(new_histo_group_VZ_wh3l_13TeV_pt3,"");
   
   TH1D *new_histo_group_Higgs_wh3l_13TeV_pt370 = new TH1D("new_histo_group_Higgs_wh3l_13TeV_pt370","histo_H_htt",50,10,500);
   new_histo_group_Higgs_wh3l_13TeV_pt370->SetBinContent(1,0.7160172);
   new_histo_group_Higgs_wh3l_13TeV_pt370->SetBinContent(2,0.486061);
   new_histo_group_Higgs_wh3l_13TeV_pt370->SetBinContent(3,0.1976777);
   new_histo_group_Higgs_wh3l_13TeV_pt370->SetBinContent(4,0.07016905);
   new_histo_group_Higgs_wh3l_13TeV_pt370->SetBinContent(5,0.02881953);
   new_histo_group_Higgs_wh3l_13TeV_pt370->SetBinContent(6,0.0135302);
   new_histo_group_Higgs_wh3l_13TeV_pt370->SetBinContent(7,0.002782918);
   new_histo_group_Higgs_wh3l_13TeV_pt370->SetBinContent(8,0.002590312);
   new_histo_group_Higgs_wh3l_13TeV_pt370->SetBinContent(9,-0.0001028104);
   new_histo_group_Higgs_wh3l_13TeV_pt370->SetBinContent(13,0.000276439);
   new_histo_group_Higgs_wh3l_13TeV_pt370->SetBinError(1,0.02805705);
   new_histo_group_Higgs_wh3l_13TeV_pt370->SetBinError(2,0.02378542);
   new_histo_group_Higgs_wh3l_13TeV_pt370->SetBinError(3,0.01519384);
   new_histo_group_Higgs_wh3l_13TeV_pt370->SetBinError(4,0.009236614);
   new_histo_group_Higgs_wh3l_13TeV_pt370->SetBinError(5,0.00592702);
   new_histo_group_Higgs_wh3l_13TeV_pt370->SetBinError(6,0.004312245);
   new_histo_group_Higgs_wh3l_13TeV_pt370->SetBinError(7,0.001304295);
   new_histo_group_Higgs_wh3l_13TeV_pt370->SetBinError(8,0.0017489);
   new_histo_group_Higgs_wh3l_13TeV_pt370->SetBinError(9,0.0003815328);
   new_histo_group_Higgs_wh3l_13TeV_pt370->SetBinError(13,0.0002202804);
   new_histo_group_Higgs_wh3l_13TeV_pt370->SetEntries(2720);
   new_histo_group_Higgs_wh3l_13TeV_pt370->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_13TeV_pt370->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_13TeV_pt370->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_13TeV_pt370->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_13TeV_pt370->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_pt370->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_pt370->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_13TeV_pt370->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_13TeV_pt370->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_pt370->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_pt370->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_13TeV_pt370->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_13TeV_pt370->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_pt370->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_pt370->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_pt3->Add(new_histo_group_Higgs_wh3l_13TeV_pt3,"");
   thsBackground_grouped_wh3l_13TeV_pt3->Draw("hist same");
   
   thsSignal_grouped_wh3l_13TeV_pt3 = new THStack();
   thsSignal_grouped_wh3l_13TeV_pt3->SetName("thsSignal_grouped_wh3l_13TeV_pt3");
   thsSignal_grouped_wh3l_13TeV_pt3->SetTitle("thsSignal_grouped_wh3l_13TeV_pt3");
   
   TH1F *thsSignal_grouped_wh3l_13TeV_pt3_stack_16 = new TH1F("thsSignal_grouped_wh3l_13TeV_pt3_stack_16","thsSignal_grouped_wh3l_13TeV_pt3",50,10,500);
   thsSignal_grouped_wh3l_13TeV_pt3_stack_16->SetMinimum(-0.0004843432);
   thsSignal_grouped_wh3l_13TeV_pt3_stack_16->SetMaximum(0.7812779);
   thsSignal_grouped_wh3l_13TeV_pt3_stack_16->SetDirectory(0);
   thsSignal_grouped_wh3l_13TeV_pt3_stack_16->SetStats(0);
   thsSignal_grouped_wh3l_13TeV_pt3_stack_16->SetLineStyle(0);
   thsSignal_grouped_wh3l_13TeV_pt3_stack_16->SetMarkerStyle(20);
   thsSignal_grouped_wh3l_13TeV_pt3_stack_16->GetXaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_13TeV_pt3_stack_16->GetXaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_13TeV_pt3_stack_16->GetXaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_13TeV_pt3_stack_16->GetXaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_13TeV_pt3_stack_16->GetXaxis()->SetTitleOffset(0.9);
   thsSignal_grouped_wh3l_13TeV_pt3_stack_16->GetXaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_13TeV_pt3_stack_16->GetYaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_13TeV_pt3_stack_16->GetYaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_13TeV_pt3_stack_16->GetYaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_13TeV_pt3_stack_16->GetYaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_13TeV_pt3_stack_16->GetYaxis()->SetTitleOffset(1.25);
   thsSignal_grouped_wh3l_13TeV_pt3_stack_16->GetYaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_13TeV_pt3_stack_16->GetZaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_13TeV_pt3_stack_16->GetZaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_13TeV_pt3_stack_16->GetZaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_13TeV_pt3_stack_16->GetZaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_13TeV_pt3_stack_16->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_13TeV_pt3->SetHistogram(thsSignal_grouped_wh3l_13TeV_pt3_stack_16);
   
   
   TH1D *new_histo_group_Higgs_wh3l_13TeV_pt371 = new TH1D("new_histo_group_Higgs_wh3l_13TeV_pt371","histo_H_htt",50,10,500);
   new_histo_group_Higgs_wh3l_13TeV_pt371->SetBinContent(1,0.7160172);
   new_histo_group_Higgs_wh3l_13TeV_pt371->SetBinContent(2,0.486061);
   new_histo_group_Higgs_wh3l_13TeV_pt371->SetBinContent(3,0.1976777);
   new_histo_group_Higgs_wh3l_13TeV_pt371->SetBinContent(4,0.07016905);
   new_histo_group_Higgs_wh3l_13TeV_pt371->SetBinContent(5,0.02881953);
   new_histo_group_Higgs_wh3l_13TeV_pt371->SetBinContent(6,0.0135302);
   new_histo_group_Higgs_wh3l_13TeV_pt371->SetBinContent(7,0.002782918);
   new_histo_group_Higgs_wh3l_13TeV_pt371->SetBinContent(8,0.002590312);
   new_histo_group_Higgs_wh3l_13TeV_pt371->SetBinContent(9,-0.0001028104);
   new_histo_group_Higgs_wh3l_13TeV_pt371->SetBinContent(13,0.000276439);
   new_histo_group_Higgs_wh3l_13TeV_pt371->SetBinError(1,0.02805705);
   new_histo_group_Higgs_wh3l_13TeV_pt371->SetBinError(2,0.02378542);
   new_histo_group_Higgs_wh3l_13TeV_pt371->SetBinError(3,0.01519384);
   new_histo_group_Higgs_wh3l_13TeV_pt371->SetBinError(4,0.009236614);
   new_histo_group_Higgs_wh3l_13TeV_pt371->SetBinError(5,0.00592702);
   new_histo_group_Higgs_wh3l_13TeV_pt371->SetBinError(6,0.004312245);
   new_histo_group_Higgs_wh3l_13TeV_pt371->SetBinError(7,0.001304295);
   new_histo_group_Higgs_wh3l_13TeV_pt371->SetBinError(8,0.0017489);
   new_histo_group_Higgs_wh3l_13TeV_pt371->SetBinError(9,0.0003815328);
   new_histo_group_Higgs_wh3l_13TeV_pt371->SetBinError(13,0.0002202804);
   new_histo_group_Higgs_wh3l_13TeV_pt371->SetEntries(2720);
   new_histo_group_Higgs_wh3l_13TeV_pt371->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_13TeV_pt371->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_13TeV_pt371->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_13TeV_pt371->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_13TeV_pt371->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_pt371->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_pt371->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_13TeV_pt371->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_13TeV_pt371->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_pt371->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_pt371->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_13TeV_pt371->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_13TeV_pt371->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_pt371->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_pt371->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_13TeV_pt3->Add(new_histo_group_Higgs_wh3l_13TeV_pt3,"");
   thsSignal_grouped_wh3l_13TeV_pt3->Draw("hist same noclear");
   
   Double_t _fx3008[50] = {
   14.9,
   24.7,
   34.5,
   44.3,
   54.1,
   63.9,
   73.7,
   83.5,
   93.3,
   103.1,
   112.9,
   122.7,
   132.5,
   142.3,
   152.1,
   161.9,
   171.7,
   181.5,
   191.3,
   201.1,
   210.9,
   220.7,
   230.5,
   240.3,
   250.1,
   259.9,
   269.7,
   279.5,
   289.3,
   299.1,
   308.9,
   318.7,
   328.5,
   338.3,
   348.1,
   357.9,
   367.7,
   377.5,
   387.3,
   397.1,
   406.9,
   416.7,
   426.5,
   436.3,
   446.1,
   455.9,
   465.7,
   475.5,
   485.3,
   495.1};
   Double_t _fy3008[50] = {
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
   0,
   0};
   Double_t _felx3008[50] = {
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9};
   Double_t _fely3008[50] = {
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
   0,
   0};
   Double_t _fehx3008[50] = {
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9};
   Double_t _fehy3008[50] = {
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
   1.147908,
   1.147908};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(50,_fx3008,_fy3008,_felx3008,_fehx3008,_fely3008,_fehy3008);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(1);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3008 = new TH1F("Graph_Graph3008","",100,0,549);
   Graph_Graph3008->SetMinimum(0);
   Graph_Graph3008->SetMaximum(1.262698);
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
   
   TLegend *leg = new TLegend(0.2,0.55,0.8,0.88,NULL,"brNDC");
   leg->SetTextFont(62);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("new_histo_group_DY_wh3l_13TeV_pt3","DY","F");

   ci = TColor::GetColor("#009900");
   entry->SetFillColor(ci);
   entry->SetFillStyle(3001);

   ci = TColor::GetColor("#009900");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_group_top_wh3l_13TeV_pt3","tW and t#bart","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_13TeV_pt3","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_13TeV_pt3","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_VZ_wh3l_13TeV_pt3","VZ/#gamma*/#gamma","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_13TeV_pt3","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_13TeV_pt3","Data","EPL");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
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
   entry=leg->AddEntry("new_histo_group_DY_wh3l_13TeV_pt3","DY","F");

   ci = TColor::GetColor("#009900");
   entry->SetFillColor(ci);
   entry->SetFillStyle(3001);

   ci = TColor::GetColor("#009900");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_group_top_wh3l_13TeV_pt3","tW and t#bart","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_13TeV_pt3","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_13TeV_pt3","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_VZ_wh3l_13TeV_pt3","VZ/#gamma*/#gamma","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_13TeV_pt3","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_13TeV_pt3","Data","EPL");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   leg->Draw();
   
   TH1F *hframe_copy72 = new TH1F("hframe_copy72","",1000,10,500);
   hframe_copy72->SetMinimum(0);
   hframe_copy72->SetMaximum(593.1636);
   hframe_copy72->SetDirectory(0);
   hframe_copy72->SetStats(0);
   hframe_copy72->SetLineStyle(0);
   hframe_copy72->SetMarkerStyle(20);
   hframe_copy72->GetXaxis()->SetTitle("lept3_p_{T} [GeV]");
   hframe_copy72->GetXaxis()->SetNdivisions(506);
   hframe_copy72->GetXaxis()->SetLabelFont(42);
   hframe_copy72->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy72->GetXaxis()->SetLabelSize(0.05);
   hframe_copy72->GetXaxis()->SetTitleSize(0.06);
   hframe_copy72->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy72->GetXaxis()->SetTitleFont(42);
   hframe_copy72->GetYaxis()->SetTitle("Events");
   hframe_copy72->GetYaxis()->SetLabelFont(42);
   hframe_copy72->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy72->GetYaxis()->SetLabelSize(0.05);
   hframe_copy72->GetYaxis()->SetTitleSize(0.06);
   hframe_copy72->GetYaxis()->SetTitleOffset(1.25);
   hframe_copy72->GetYaxis()->SetTitleFont(42);
   hframe_copy72->GetZaxis()->SetLabelFont(42);
   hframe_copy72->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy72->GetZaxis()->SetLabelSize(0.05);
   hframe_copy72->GetZaxis()->SetTitleSize(0.06);
   hframe_copy72->GetZaxis()->SetTitleFont(42);
   hframe_copy72->Draw("sameaxis");
   ccwh3l_13TeV_pt3->Modified();
   ccwh3l_13TeV_pt3->cd();
   ccwh3l_13TeV_pt3->SetSelected(ccwh3l_13TeV_pt3);
}
