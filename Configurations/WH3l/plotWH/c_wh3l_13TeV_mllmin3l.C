void c_wh3l_13TeV_mllmin3l()
{
//=========Macro generated from canvas: ccwh3l_13TeV_mllmin3l/cc
//=========  (Fri Jun 24 14:14:31 2016) by ROOT version6.02/13
   TCanvas *ccwh3l_13TeV_mllmin3l = new TCanvas("ccwh3l_13TeV_mllmin3l", "cc",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   ccwh3l_13TeV_mllmin3l->SetHighLightColor(2);
   ccwh3l_13TeV_mllmin3l->Range(-28,-51.5217,209.5,344.7991);
   ccwh3l_13TeV_mllmin3l->SetFillColor(0);
   ccwh3l_13TeV_mllmin3l->SetBorderMode(0);
   ccwh3l_13TeV_mllmin3l->SetBorderSize(2);
   ccwh3l_13TeV_mllmin3l->SetTickx(1);
   ccwh3l_13TeV_mllmin3l->SetTicky(1);
   ccwh3l_13TeV_mllmin3l->SetLeftMargin(0.16);
   ccwh3l_13TeV_mllmin3l->SetRightMargin(0.04);
   ccwh3l_13TeV_mllmin3l->SetTopMargin(0.05);
   ccwh3l_13TeV_mllmin3l->SetBottomMargin(0.13);
   ccwh3l_13TeV_mllmin3l->SetFrameFillStyle(0);
   ccwh3l_13TeV_mllmin3l->SetFrameBorderMode(0);
   ccwh3l_13TeV_mllmin3l->SetFrameFillStyle(0);
   ccwh3l_13TeV_mllmin3l->SetFrameBorderMode(0);
   
   TH1F *hframe19 = new TH1F("hframe19","",1000,10,200);
   hframe19->SetMinimum(0);
   hframe19->SetMaximum(324.983);
   hframe19->SetDirectory(0);
   hframe19->SetStats(0);
   hframe19->SetLineStyle(0);
   hframe19->SetMarkerStyle(20);
   hframe19->GetXaxis()->SetTitle("min m_{ll} [GeV]");
   hframe19->GetXaxis()->SetNdivisions(506);
   hframe19->GetXaxis()->SetLabelFont(42);
   hframe19->GetXaxis()->SetLabelOffset(0.007);
   hframe19->GetXaxis()->SetLabelSize(0.05);
   hframe19->GetXaxis()->SetTitleSize(0.06);
   hframe19->GetXaxis()->SetTitleOffset(0.9);
   hframe19->GetXaxis()->SetTitleFont(42);
   hframe19->GetYaxis()->SetTitle("Events");
   hframe19->GetYaxis()->SetLabelFont(42);
   hframe19->GetYaxis()->SetLabelOffset(0.007);
   hframe19->GetYaxis()->SetLabelSize(0.05);
   hframe19->GetYaxis()->SetTitleSize(0.06);
   hframe19->GetYaxis()->SetTitleOffset(1.25);
   hframe19->GetYaxis()->SetTitleFont(42);
   hframe19->GetZaxis()->SetLabelFont(42);
   hframe19->GetZaxis()->SetLabelOffset(0.007);
   hframe19->GetZaxis()->SetLabelSize(0.05);
   hframe19->GetZaxis()->SetTitleSize(0.06);
   hframe19->GetZaxis()->SetTitleFont(42);
   hframe19->Draw(" ");
   
   THStack *thsBackground_grouped_wh3l_13TeV_mllmin3l = new THStack();
   thsBackground_grouped_wh3l_13TeV_mllmin3l->SetName("thsBackground_grouped_wh3l_13TeV_mllmin3l");
   thsBackground_grouped_wh3l_13TeV_mllmin3l->SetTitle("thsBackground_grouped_wh3l_13TeV_mllmin3l");
   
   TH1F *thsBackground_grouped_wh3l_13TeV_mllmin3l_stack_5 = new TH1F("thsBackground_grouped_wh3l_13TeV_mllmin3l_stack_5","thsBackground_grouped_wh3l_13TeV_mllmin3l",20,10,200);
   thsBackground_grouped_wh3l_13TeV_mllmin3l_stack_5->SetMinimum(-1.466338);
   thsBackground_grouped_wh3l_13TeV_mllmin3l_stack_5->SetMaximum(136.4929);
   thsBackground_grouped_wh3l_13TeV_mllmin3l_stack_5->SetDirectory(0);
   thsBackground_grouped_wh3l_13TeV_mllmin3l_stack_5->SetStats(0);
   thsBackground_grouped_wh3l_13TeV_mllmin3l_stack_5->SetLineStyle(0);
   thsBackground_grouped_wh3l_13TeV_mllmin3l_stack_5->SetMarkerStyle(20);
   thsBackground_grouped_wh3l_13TeV_mllmin3l_stack_5->GetXaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_13TeV_mllmin3l_stack_5->GetXaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_13TeV_mllmin3l_stack_5->GetXaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_13TeV_mllmin3l_stack_5->GetXaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_13TeV_mllmin3l_stack_5->GetXaxis()->SetTitleOffset(0.9);
   thsBackground_grouped_wh3l_13TeV_mllmin3l_stack_5->GetXaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_mllmin3l_stack_5->GetYaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_13TeV_mllmin3l_stack_5->GetYaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_13TeV_mllmin3l_stack_5->GetYaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_13TeV_mllmin3l_stack_5->GetYaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_13TeV_mllmin3l_stack_5->GetYaxis()->SetTitleOffset(1.25);
   thsBackground_grouped_wh3l_13TeV_mllmin3l_stack_5->GetYaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_mllmin3l_stack_5->GetZaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_13TeV_mllmin3l_stack_5->GetZaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_13TeV_mllmin3l_stack_5->GetZaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_13TeV_mllmin3l_stack_5->GetZaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_13TeV_mllmin3l_stack_5->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_mllmin3l->SetHistogram(thsBackground_grouped_wh3l_13TeV_mllmin3l_stack_5);
   
   
   TH1D *new_histo_group_DY_wh3l_13TeV_mllmin3l20 = new TH1D("new_histo_group_DY_wh3l_13TeV_mllmin3l20","histo_DY",20,10,200);
   new_histo_group_DY_wh3l_13TeV_mllmin3l20->SetBinContent(0,10.64021);
   new_histo_group_DY_wh3l_13TeV_mllmin3l20->SetBinContent(1,24.11298);
   new_histo_group_DY_wh3l_13TeV_mllmin3l20->SetBinContent(2,19.73675);
   new_histo_group_DY_wh3l_13TeV_mllmin3l20->SetBinContent(3,27.35374);
   new_histo_group_DY_wh3l_13TeV_mllmin3l20->SetBinContent(4,30.34846);
   new_histo_group_DY_wh3l_13TeV_mllmin3l20->SetBinContent(5,29.61701);
   new_histo_group_DY_wh3l_13TeV_mllmin3l20->SetBinContent(6,18.1296);
   new_histo_group_DY_wh3l_13TeV_mllmin3l20->SetBinContent(7,10.24132);
   new_histo_group_DY_wh3l_13TeV_mllmin3l20->SetBinContent(8,10.82593);
   new_histo_group_DY_wh3l_13TeV_mllmin3l20->SetBinContent(9,22.53089);
   new_histo_group_DY_wh3l_13TeV_mllmin3l20->SetBinContent(10,1.072135);
   new_histo_group_DY_wh3l_13TeV_mllmin3l20->SetBinContent(11,0.2982979);
   new_histo_group_DY_wh3l_13TeV_mllmin3l20->SetBinContent(15,-0.733169);
   new_histo_group_DY_wh3l_13TeV_mllmin3l20->SetBinError(0,3.61928);
   new_histo_group_DY_wh3l_13TeV_mllmin3l20->SetBinError(1,4.853282);
   new_histo_group_DY_wh3l_13TeV_mllmin3l20->SetBinError(2,5.345239);
   new_histo_group_DY_wh3l_13TeV_mllmin3l20->SetBinError(3,5.269256);
   new_histo_group_DY_wh3l_13TeV_mllmin3l20->SetBinError(4,5.642894);
   new_histo_group_DY_wh3l_13TeV_mllmin3l20->SetBinError(5,5.409168);
   new_histo_group_DY_wh3l_13TeV_mllmin3l20->SetBinError(6,4.163674);
   new_histo_group_DY_wh3l_13TeV_mllmin3l20->SetBinError(7,3.475189);
   new_histo_group_DY_wh3l_13TeV_mllmin3l20->SetBinError(8,3.08331);
   new_histo_group_DY_wh3l_13TeV_mllmin3l20->SetBinError(9,4.968883);
   new_histo_group_DY_wh3l_13TeV_mllmin3l20->SetBinError(10,0.9151639);
   new_histo_group_DY_wh3l_13TeV_mllmin3l20->SetBinError(11,0.2324423);
   new_histo_group_DY_wh3l_13TeV_mllmin3l20->SetBinError(15,0.733169);
   new_histo_group_DY_wh3l_13TeV_mllmin3l20->SetEntries(546);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#009900");
   new_histo_group_DY_wh3l_13TeV_mllmin3l20->SetFillColor(ci);
   new_histo_group_DY_wh3l_13TeV_mllmin3l20->SetFillStyle(3001);

   ci = TColor::GetColor("#009900");
   new_histo_group_DY_wh3l_13TeV_mllmin3l20->SetLineColor(ci);
   new_histo_group_DY_wh3l_13TeV_mllmin3l20->GetXaxis()->SetLabelFont(42);
   new_histo_group_DY_wh3l_13TeV_mllmin3l20->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_DY_wh3l_13TeV_mllmin3l20->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_DY_wh3l_13TeV_mllmin3l20->GetXaxis()->SetTitleFont(42);
   new_histo_group_DY_wh3l_13TeV_mllmin3l20->GetYaxis()->SetLabelFont(42);
   new_histo_group_DY_wh3l_13TeV_mllmin3l20->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_DY_wh3l_13TeV_mllmin3l20->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_DY_wh3l_13TeV_mllmin3l20->GetYaxis()->SetTitleFont(42);
   new_histo_group_DY_wh3l_13TeV_mllmin3l20->GetZaxis()->SetLabelFont(42);
   new_histo_group_DY_wh3l_13TeV_mllmin3l20->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_DY_wh3l_13TeV_mllmin3l20->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_DY_wh3l_13TeV_mllmin3l20->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_mllmin3l->Add(new_histo_group_DY_wh3l_13TeV_mllmin3l,"");
   
   TH1D *new_histo_group_top_wh3l_13TeV_mllmin3l21 = new TH1D("new_histo_group_top_wh3l_13TeV_mllmin3l21","histo_top",20,10,200);
   new_histo_group_top_wh3l_13TeV_mllmin3l21->SetBinContent(0,0.02138132);
   new_histo_group_top_wh3l_13TeV_mllmin3l21->SetBinContent(1,0.3659388);
   new_histo_group_top_wh3l_13TeV_mllmin3l21->SetBinContent(2,0.6069562);
   new_histo_group_top_wh3l_13TeV_mllmin3l21->SetBinContent(3,0.9221771);
   new_histo_group_top_wh3l_13TeV_mllmin3l21->SetBinContent(4,0.8507859);
   new_histo_group_top_wh3l_13TeV_mllmin3l21->SetBinContent(5,1.392718);
   new_histo_group_top_wh3l_13TeV_mllmin3l21->SetBinContent(6,1.055993);
   new_histo_group_top_wh3l_13TeV_mllmin3l21->SetBinContent(7,0.7052191);
   new_histo_group_top_wh3l_13TeV_mllmin3l21->SetBinContent(8,0.6590954);
   new_histo_group_top_wh3l_13TeV_mllmin3l21->SetBinContent(9,0.7560366);
   new_histo_group_top_wh3l_13TeV_mllmin3l21->SetBinContent(10,0.5078452);
   new_histo_group_top_wh3l_13TeV_mllmin3l21->SetBinContent(11,0.06100493);
   new_histo_group_top_wh3l_13TeV_mllmin3l21->SetBinContent(12,0.1038962);
   new_histo_group_top_wh3l_13TeV_mllmin3l21->SetBinContent(13,0.02381597);
   new_histo_group_top_wh3l_13TeV_mllmin3l21->SetBinContent(14,0.02809352);
   new_histo_group_top_wh3l_13TeV_mllmin3l21->SetBinContent(15,0.03501251);
   new_histo_group_top_wh3l_13TeV_mllmin3l21->SetBinContent(19,0.02900938);
   new_histo_group_top_wh3l_13TeV_mllmin3l21->SetBinContent(21,0.04064412);
   new_histo_group_top_wh3l_13TeV_mllmin3l21->SetBinError(0,0.02138132);
   new_histo_group_top_wh3l_13TeV_mllmin3l21->SetBinError(1,0.0910492);
   new_histo_group_top_wh3l_13TeV_mllmin3l21->SetBinError(2,0.1418463);
   new_histo_group_top_wh3l_13TeV_mllmin3l21->SetBinError(3,0.1548578);
   new_histo_group_top_wh3l_13TeV_mllmin3l21->SetBinError(4,0.1696902);
   new_histo_group_top_wh3l_13TeV_mllmin3l21->SetBinError(5,0.2379002);
   new_histo_group_top_wh3l_13TeV_mllmin3l21->SetBinError(6,0.1706115);
   new_histo_group_top_wh3l_13TeV_mllmin3l21->SetBinError(7,0.123292);
   new_histo_group_top_wh3l_13TeV_mllmin3l21->SetBinError(8,0.119858);
   new_histo_group_top_wh3l_13TeV_mllmin3l21->SetBinError(9,0.1659094);
   new_histo_group_top_wh3l_13TeV_mllmin3l21->SetBinError(10,0.1562372);
   new_histo_group_top_wh3l_13TeV_mllmin3l21->SetBinError(11,0.03588219);
   new_histo_group_top_wh3l_13TeV_mllmin3l21->SetBinError(12,0.04567985);
   new_histo_group_top_wh3l_13TeV_mllmin3l21->SetBinError(13,0.02381597);
   new_histo_group_top_wh3l_13TeV_mllmin3l21->SetBinError(14,0.02809352);
   new_histo_group_top_wh3l_13TeV_mllmin3l21->SetBinError(15,0.02663418);
   new_histo_group_top_wh3l_13TeV_mllmin3l21->SetBinError(19,0.02900938);
   new_histo_group_top_wh3l_13TeV_mllmin3l21->SetBinError(21,0.02878144);
   new_histo_group_top_wh3l_13TeV_mllmin3l21->SetEntries(377);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_top_wh3l_13TeV_mllmin3l21->SetFillColor(ci);
   new_histo_group_top_wh3l_13TeV_mllmin3l21->SetFillStyle(3001);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_top_wh3l_13TeV_mllmin3l21->SetLineColor(ci);
   new_histo_group_top_wh3l_13TeV_mllmin3l21->GetXaxis()->SetLabelFont(42);
   new_histo_group_top_wh3l_13TeV_mllmin3l21->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_top_wh3l_13TeV_mllmin3l21->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_top_wh3l_13TeV_mllmin3l21->GetXaxis()->SetTitleFont(42);
   new_histo_group_top_wh3l_13TeV_mllmin3l21->GetYaxis()->SetLabelFont(42);
   new_histo_group_top_wh3l_13TeV_mllmin3l21->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_top_wh3l_13TeV_mllmin3l21->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_top_wh3l_13TeV_mllmin3l21->GetYaxis()->SetTitleFont(42);
   new_histo_group_top_wh3l_13TeV_mllmin3l21->GetZaxis()->SetLabelFont(42);
   new_histo_group_top_wh3l_13TeV_mllmin3l21->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_top_wh3l_13TeV_mllmin3l21->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_top_wh3l_13TeV_mllmin3l21->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_mllmin3l->Add(new_histo_group_top_wh3l_13TeV_mllmin3l,"");
   
   TH1D *new_histo_group_WW_wh3l_13TeV_mllmin3l22 = new TH1D("new_histo_group_WW_wh3l_13TeV_mllmin3l22","histo_WW",20,10,200);
   new_histo_group_WW_wh3l_13TeV_mllmin3l22->SetBinContent(0,0.1000893);
   new_histo_group_WW_wh3l_13TeV_mllmin3l22->SetBinContent(1,0.02839176);
   new_histo_group_WW_wh3l_13TeV_mllmin3l22->SetBinContent(2,0.01851101);
   new_histo_group_WW_wh3l_13TeV_mllmin3l22->SetBinContent(3,0.04295039);
   new_histo_group_WW_wh3l_13TeV_mllmin3l22->SetBinContent(4,0.03578385);
   new_histo_group_WW_wh3l_13TeV_mllmin3l22->SetBinContent(5,0.02823792);
   new_histo_group_WW_wh3l_13TeV_mllmin3l22->SetBinContent(6,0.01458724);
   new_histo_group_WW_wh3l_13TeV_mllmin3l22->SetBinContent(7,0.002526849);
   new_histo_group_WW_wh3l_13TeV_mllmin3l22->SetBinContent(8,0.01039133);
   new_histo_group_WW_wh3l_13TeV_mllmin3l22->SetBinContent(10,0.003600395);
   new_histo_group_WW_wh3l_13TeV_mllmin3l22->SetBinContent(11,0.003279302);
   new_histo_group_WW_wh3l_13TeV_mllmin3l22->SetBinContent(16,0.01692435);
   new_histo_group_WW_wh3l_13TeV_mllmin3l22->SetBinError(0,0.03695229);
   new_histo_group_WW_wh3l_13TeV_mllmin3l22->SetBinError(1,0.02013716);
   new_histo_group_WW_wh3l_13TeV_mllmin3l22->SetBinError(2,0.01631433);
   new_histo_group_WW_wh3l_13TeV_mllmin3l22->SetBinError(3,0.02537022);
   new_histo_group_WW_wh3l_13TeV_mllmin3l22->SetBinError(4,0.02530561);
   new_histo_group_WW_wh3l_13TeV_mllmin3l22->SetBinError(5,0.02071396);
   new_histo_group_WW_wh3l_13TeV_mllmin3l22->SetBinError(6,0.01458724);
   new_histo_group_WW_wh3l_13TeV_mllmin3l22->SetBinError(7,0.002526849);
   new_histo_group_WW_wh3l_13TeV_mllmin3l22->SetBinError(8,0.01039133);
   new_histo_group_WW_wh3l_13TeV_mllmin3l22->SetBinError(10,0.003600395);
   new_histo_group_WW_wh3l_13TeV_mllmin3l22->SetBinError(11,0.003279302);
   new_histo_group_WW_wh3l_13TeV_mllmin3l22->SetBinError(16,0.01692435);
   new_histo_group_WW_wh3l_13TeV_mllmin3l22->SetEntries(26);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_13TeV_mllmin3l22->SetFillColor(ci);
   new_histo_group_WW_wh3l_13TeV_mllmin3l22->SetFillStyle(3001);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_13TeV_mllmin3l22->SetLineColor(ci);
   new_histo_group_WW_wh3l_13TeV_mllmin3l22->GetXaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_13TeV_mllmin3l22->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_13TeV_mllmin3l22->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_13TeV_mllmin3l22->GetXaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_13TeV_mllmin3l22->GetYaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_13TeV_mllmin3l22->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_13TeV_mllmin3l22->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_13TeV_mllmin3l22->GetYaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_13TeV_mllmin3l22->GetZaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_13TeV_mllmin3l22->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_13TeV_mllmin3l22->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_13TeV_mllmin3l22->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_mllmin3l->Add(new_histo_group_WW_wh3l_13TeV_mllmin3l,"");
   
   TH1D *new_histo_group_VVV_wh3l_13TeV_mllmin3l23 = new TH1D("new_histo_group_VVV_wh3l_13TeV_mllmin3l23","histo_VVV",20,10,200);
   new_histo_group_VVV_wh3l_13TeV_mllmin3l23->SetBinContent(0,0.000562932);
   new_histo_group_VVV_wh3l_13TeV_mllmin3l23->SetBinContent(1,0.002999069);
   new_histo_group_VVV_wh3l_13TeV_mllmin3l23->SetBinContent(2,0.00415667);
   new_histo_group_VVV_wh3l_13TeV_mllmin3l23->SetBinContent(3,0.007807801);
   new_histo_group_VVV_wh3l_13TeV_mllmin3l23->SetBinContent(4,0.01686103);
   new_histo_group_VVV_wh3l_13TeV_mllmin3l23->SetBinContent(5,0.01164767);
   new_histo_group_VVV_wh3l_13TeV_mllmin3l23->SetBinContent(6,0.01847569);
   new_histo_group_VVV_wh3l_13TeV_mllmin3l23->SetBinContent(7,0.02074349);
   new_histo_group_VVV_wh3l_13TeV_mllmin3l23->SetBinContent(8,0.01920423);
   new_histo_group_VVV_wh3l_13TeV_mllmin3l23->SetBinContent(9,0.1204819);
   new_histo_group_VVV_wh3l_13TeV_mllmin3l23->SetBinContent(10,0.009480353);
   new_histo_group_VVV_wh3l_13TeV_mllmin3l23->SetBinContent(11,0.001288519);
   new_histo_group_VVV_wh3l_13TeV_mllmin3l23->SetBinContent(12,0.001968535);
   new_histo_group_VVV_wh3l_13TeV_mllmin3l23->SetBinContent(13,0.001932623);
   new_histo_group_VVV_wh3l_13TeV_mllmin3l23->SetBinContent(14,0.0005303926);
   new_histo_group_VVV_wh3l_13TeV_mllmin3l23->SetBinContent(15,0.0005112084);
   new_histo_group_VVV_wh3l_13TeV_mllmin3l23->SetBinContent(16,0.000419599);
   new_histo_group_VVV_wh3l_13TeV_mllmin3l23->SetBinContent(17,0.0007143618);
   new_histo_group_VVV_wh3l_13TeV_mllmin3l23->SetBinContent(20,0.0004271302);
   new_histo_group_VVV_wh3l_13TeV_mllmin3l23->SetBinContent(21,0.0007282903);
   new_histo_group_VVV_wh3l_13TeV_mllmin3l23->SetBinError(0,0.000562932);
   new_histo_group_VVV_wh3l_13TeV_mllmin3l23->SetBinError(1,0.001359517);
   new_histo_group_VVV_wh3l_13TeV_mllmin3l23->SetBinError(2,0.001911931);
   new_histo_group_VVV_wh3l_13TeV_mllmin3l23->SetBinError(3,0.002197048);
   new_histo_group_VVV_wh3l_13TeV_mllmin3l23->SetBinError(4,0.00337746);
   new_histo_group_VVV_wh3l_13TeV_mllmin3l23->SetBinError(5,0.002835942);
   new_histo_group_VVV_wh3l_13TeV_mllmin3l23->SetBinError(6,0.003513724);
   new_histo_group_VVV_wh3l_13TeV_mllmin3l23->SetBinError(7,0.003819591);
   new_histo_group_VVV_wh3l_13TeV_mllmin3l23->SetBinError(8,0.003544707);
   new_histo_group_VVV_wh3l_13TeV_mllmin3l23->SetBinError(9,0.009298066);
   new_histo_group_VVV_wh3l_13TeV_mllmin3l23->SetBinError(10,0.002544473);
   new_histo_group_VVV_wh3l_13TeV_mllmin3l23->SetBinError(11,0.001177494);
   new_histo_group_VVV_wh3l_13TeV_mllmin3l23->SetBinError(12,0.001145817);
   new_histo_group_VVV_wh3l_13TeV_mllmin3l23->SetBinError(13,0.001045577);
   new_histo_group_VVV_wh3l_13TeV_mllmin3l23->SetBinError(14,0.0005303926);
   new_histo_group_VVV_wh3l_13TeV_mllmin3l23->SetBinError(15,0.0005112084);
   new_histo_group_VVV_wh3l_13TeV_mllmin3l23->SetBinError(16,0.000419599);
   new_histo_group_VVV_wh3l_13TeV_mllmin3l23->SetBinError(17,0.0007143618);
   new_histo_group_VVV_wh3l_13TeV_mllmin3l23->SetBinError(20,0.0004271302);
   new_histo_group_VVV_wh3l_13TeV_mllmin3l23->SetBinError(21,0.0005585413);
   new_histo_group_VVV_wh3l_13TeV_mllmin3l23->SetEntries(478);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_13TeV_mllmin3l23->SetFillColor(ci);
   new_histo_group_VVV_wh3l_13TeV_mllmin3l23->SetFillStyle(3001);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_13TeV_mllmin3l23->SetLineColor(ci);
   new_histo_group_VVV_wh3l_13TeV_mllmin3l23->GetXaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_13TeV_mllmin3l23->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_13TeV_mllmin3l23->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_13TeV_mllmin3l23->GetXaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_13TeV_mllmin3l23->GetYaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_13TeV_mllmin3l23->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_13TeV_mllmin3l23->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_13TeV_mllmin3l23->GetYaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_13TeV_mllmin3l23->GetZaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_13TeV_mllmin3l23->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_13TeV_mllmin3l23->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_13TeV_mllmin3l23->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_mllmin3l->Add(new_histo_group_VVV_wh3l_13TeV_mllmin3l,"");
   
   TH1D *new_histo_group_VZ_wh3l_13TeV_mllmin3l24 = new TH1D("new_histo_group_VZ_wh3l_13TeV_mllmin3l24","histo_VZ",20,10,200);
   new_histo_group_VZ_wh3l_13TeV_mllmin3l24->SetBinContent(0,3.971685);
   new_histo_group_VZ_wh3l_13TeV_mllmin3l24->SetBinContent(1,11.22351);
   new_histo_group_VZ_wh3l_13TeV_mllmin3l24->SetBinContent(2,13.24886);
   new_histo_group_VZ_wh3l_13TeV_mllmin3l24->SetBinContent(3,17.60674);
   new_histo_group_VZ_wh3l_13TeV_mllmin3l24->SetBinContent(4,19.89498);
   new_histo_group_VZ_wh3l_13TeV_mllmin3l24->SetBinContent(5,19.73772);
   new_histo_group_VZ_wh3l_13TeV_mllmin3l24->SetBinContent(6,20.55646);
   new_histo_group_VZ_wh3l_13TeV_mllmin3l24->SetBinContent(7,20.85231);
   new_histo_group_VZ_wh3l_13TeV_mllmin3l24->SetBinContent(8,27.70396);
   new_histo_group_VZ_wh3l_13TeV_mllmin3l24->SetBinContent(9,106.5763);
   new_histo_group_VZ_wh3l_13TeV_mllmin3l24->SetBinContent(10,10.65445);
   new_histo_group_VZ_wh3l_13TeV_mllmin3l24->SetBinContent(11,2.11448);
   new_histo_group_VZ_wh3l_13TeV_mllmin3l24->SetBinContent(12,1.167275);
   new_histo_group_VZ_wh3l_13TeV_mllmin3l24->SetBinContent(13,0.8677918);
   new_histo_group_VZ_wh3l_13TeV_mllmin3l24->SetBinContent(14,0.4844625);
   new_histo_group_VZ_wh3l_13TeV_mllmin3l24->SetBinContent(15,0.5934002);
   new_histo_group_VZ_wh3l_13TeV_mllmin3l24->SetBinContent(16,0.2526649);
   new_histo_group_VZ_wh3l_13TeV_mllmin3l24->SetBinContent(17,0.2329867);
   new_histo_group_VZ_wh3l_13TeV_mllmin3l24->SetBinContent(18,0.1399013);
   new_histo_group_VZ_wh3l_13TeV_mllmin3l24->SetBinContent(19,0.1071136);
   new_histo_group_VZ_wh3l_13TeV_mllmin3l24->SetBinContent(20,0.220938);
   new_histo_group_VZ_wh3l_13TeV_mllmin3l24->SetBinContent(21,0.8648753);
   new_histo_group_VZ_wh3l_13TeV_mllmin3l24->SetBinError(0,0.1636654);
   new_histo_group_VZ_wh3l_13TeV_mllmin3l24->SetBinError(1,0.3678484);
   new_histo_group_VZ_wh3l_13TeV_mllmin3l24->SetBinError(2,0.3806603);
   new_histo_group_VZ_wh3l_13TeV_mllmin3l24->SetBinError(3,0.4738777);
   new_histo_group_VZ_wh3l_13TeV_mllmin3l24->SetBinError(4,0.5198416);
   new_histo_group_VZ_wh3l_13TeV_mllmin3l24->SetBinError(5,0.4834596);
   new_histo_group_VZ_wh3l_13TeV_mllmin3l24->SetBinError(6,0.5077878);
   new_histo_group_VZ_wh3l_13TeV_mllmin3l24->SetBinError(7,0.511567);
   new_histo_group_VZ_wh3l_13TeV_mllmin3l24->SetBinError(8,0.5975272);
   new_histo_group_VZ_wh3l_13TeV_mllmin3l24->SetBinError(9,1.209959);
   new_histo_group_VZ_wh3l_13TeV_mllmin3l24->SetBinError(10,0.3956408);
   new_histo_group_VZ_wh3l_13TeV_mllmin3l24->SetBinError(11,0.1756714);
   new_histo_group_VZ_wh3l_13TeV_mllmin3l24->SetBinError(12,0.1226831);
   new_histo_group_VZ_wh3l_13TeV_mllmin3l24->SetBinError(13,0.1221254);
   new_histo_group_VZ_wh3l_13TeV_mllmin3l24->SetBinError(14,0.06130108);
   new_histo_group_VZ_wh3l_13TeV_mllmin3l24->SetBinError(15,0.1142337);
   new_histo_group_VZ_wh3l_13TeV_mllmin3l24->SetBinError(16,0.03671468);
   new_histo_group_VZ_wh3l_13TeV_mllmin3l24->SetBinError(17,0.05174773);
   new_histo_group_VZ_wh3l_13TeV_mllmin3l24->SetBinError(18,0.02702037);
   new_histo_group_VZ_wh3l_13TeV_mllmin3l24->SetBinError(19,0.02435755);
   new_histo_group_VZ_wh3l_13TeV_mllmin3l24->SetBinError(20,0.06689667);
   new_histo_group_VZ_wh3l_13TeV_mllmin3l24->SetBinError(21,0.09289339);
   new_histo_group_VZ_wh3l_13TeV_mllmin3l24->SetEntries(46249);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_VZ_wh3l_13TeV_mllmin3l24->SetFillColor(ci);
   new_histo_group_VZ_wh3l_13TeV_mllmin3l24->SetFillStyle(3001);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_VZ_wh3l_13TeV_mllmin3l24->SetLineColor(ci);
   new_histo_group_VZ_wh3l_13TeV_mllmin3l24->GetXaxis()->SetLabelFont(42);
   new_histo_group_VZ_wh3l_13TeV_mllmin3l24->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_VZ_wh3l_13TeV_mllmin3l24->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_VZ_wh3l_13TeV_mllmin3l24->GetXaxis()->SetTitleFont(42);
   new_histo_group_VZ_wh3l_13TeV_mllmin3l24->GetYaxis()->SetLabelFont(42);
   new_histo_group_VZ_wh3l_13TeV_mllmin3l24->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_VZ_wh3l_13TeV_mllmin3l24->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_VZ_wh3l_13TeV_mllmin3l24->GetYaxis()->SetTitleFont(42);
   new_histo_group_VZ_wh3l_13TeV_mllmin3l24->GetZaxis()->SetLabelFont(42);
   new_histo_group_VZ_wh3l_13TeV_mllmin3l24->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_VZ_wh3l_13TeV_mllmin3l24->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_VZ_wh3l_13TeV_mllmin3l24->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_mllmin3l->Add(new_histo_group_VZ_wh3l_13TeV_mllmin3l,"");
   
   TH1D *new_histo_group_Higgs_wh3l_13TeV_mllmin3l25 = new TH1D("new_histo_group_Higgs_wh3l_13TeV_mllmin3l25","histo_H_htt",20,10,200);
   new_histo_group_Higgs_wh3l_13TeV_mllmin3l25->SetBinContent(0,0.02412499);
   new_histo_group_Higgs_wh3l_13TeV_mllmin3l25->SetBinContent(1,0.1541804);
   new_histo_group_Higgs_wh3l_13TeV_mllmin3l25->SetBinContent(2,0.294496);
   new_histo_group_Higgs_wh3l_13TeV_mllmin3l25->SetBinContent(3,0.2979872);
   new_histo_group_Higgs_wh3l_13TeV_mllmin3l25->SetBinContent(4,0.2853713);
   new_histo_group_Higgs_wh3l_13TeV_mllmin3l25->SetBinContent(5,0.213552);
   new_histo_group_Higgs_wh3l_13TeV_mllmin3l25->SetBinContent(6,0.1320352);
   new_histo_group_Higgs_wh3l_13TeV_mllmin3l25->SetBinContent(7,0.0775017);
   new_histo_group_Higgs_wh3l_13TeV_mllmin3l25->SetBinContent(8,0.02383227);
   new_histo_group_Higgs_wh3l_13TeV_mllmin3l25->SetBinContent(9,0.009554908);
   new_histo_group_Higgs_wh3l_13TeV_mllmin3l25->SetBinContent(10,0.00206098);
   new_histo_group_Higgs_wh3l_13TeV_mllmin3l25->SetBinContent(11,0.0002014976);
   new_histo_group_Higgs_wh3l_13TeV_mllmin3l25->SetBinContent(12,0.002923109);
   new_histo_group_Higgs_wh3l_13TeV_mllmin3l25->SetBinError(0,0.006196662);
   new_histo_group_Higgs_wh3l_13TeV_mllmin3l25->SetBinError(1,0.01425762);
   new_histo_group_Higgs_wh3l_13TeV_mllmin3l25->SetBinError(2,0.01970612);
   new_histo_group_Higgs_wh3l_13TeV_mllmin3l25->SetBinError(3,0.01947752);
   new_histo_group_Higgs_wh3l_13TeV_mllmin3l25->SetBinError(4,0.01787702);
   new_histo_group_Higgs_wh3l_13TeV_mllmin3l25->SetBinError(5,0.01436667);
   new_histo_group_Higgs_wh3l_13TeV_mllmin3l25->SetBinError(6,0.01057098);
   new_histo_group_Higgs_wh3l_13TeV_mllmin3l25->SetBinError(7,0.007769335);
   new_histo_group_Higgs_wh3l_13TeV_mllmin3l25->SetBinError(8,0.003445363);
   new_histo_group_Higgs_wh3l_13TeV_mllmin3l25->SetBinError(9,0.001843332);
   new_histo_group_Higgs_wh3l_13TeV_mllmin3l25->SetBinError(10,0.0007387893);
   new_histo_group_Higgs_wh3l_13TeV_mllmin3l25->SetBinError(11,0.0002014976);
   new_histo_group_Higgs_wh3l_13TeV_mllmin3l25->SetBinError(12,0.002110883);
   new_histo_group_Higgs_wh3l_13TeV_mllmin3l25->SetEntries(2720);
   new_histo_group_Higgs_wh3l_13TeV_mllmin3l25->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_13TeV_mllmin3l25->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_13TeV_mllmin3l25->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_13TeV_mllmin3l25->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_13TeV_mllmin3l25->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_mllmin3l25->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_mllmin3l25->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_13TeV_mllmin3l25->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_13TeV_mllmin3l25->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_mllmin3l25->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_mllmin3l25->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_13TeV_mllmin3l25->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_13TeV_mllmin3l25->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_mllmin3l25->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_mllmin3l25->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_mllmin3l->Add(new_histo_group_Higgs_wh3l_13TeV_mllmin3l,"");
   thsBackground_grouped_wh3l_13TeV_mllmin3l->Draw("hist same");
   
   thsSignal_grouped_wh3l_13TeV_mllmin3l = new THStack();
   thsSignal_grouped_wh3l_13TeV_mllmin3l->SetName("thsSignal_grouped_wh3l_13TeV_mllmin3l");
   thsSignal_grouped_wh3l_13TeV_mllmin3l->SetTitle("thsSignal_grouped_wh3l_13TeV_mllmin3l");
   
   TH1F *thsSignal_grouped_wh3l_13TeV_mllmin3l_stack_6 = new TH1F("thsSignal_grouped_wh3l_13TeV_mllmin3l_stack_6","thsSignal_grouped_wh3l_13TeV_mllmin3l",20,10,200);
   thsSignal_grouped_wh3l_13TeV_mllmin3l_stack_6->SetMinimum(0);
   thsSignal_grouped_wh3l_13TeV_mllmin3l_stack_6->SetMaximum(0.333338);
   thsSignal_grouped_wh3l_13TeV_mllmin3l_stack_6->SetDirectory(0);
   thsSignal_grouped_wh3l_13TeV_mllmin3l_stack_6->SetStats(0);
   thsSignal_grouped_wh3l_13TeV_mllmin3l_stack_6->SetLineStyle(0);
   thsSignal_grouped_wh3l_13TeV_mllmin3l_stack_6->SetMarkerStyle(20);
   thsSignal_grouped_wh3l_13TeV_mllmin3l_stack_6->GetXaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_13TeV_mllmin3l_stack_6->GetXaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_13TeV_mllmin3l_stack_6->GetXaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_13TeV_mllmin3l_stack_6->GetXaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_13TeV_mllmin3l_stack_6->GetXaxis()->SetTitleOffset(0.9);
   thsSignal_grouped_wh3l_13TeV_mllmin3l_stack_6->GetXaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_13TeV_mllmin3l_stack_6->GetYaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_13TeV_mllmin3l_stack_6->GetYaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_13TeV_mllmin3l_stack_6->GetYaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_13TeV_mllmin3l_stack_6->GetYaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_13TeV_mllmin3l_stack_6->GetYaxis()->SetTitleOffset(1.25);
   thsSignal_grouped_wh3l_13TeV_mllmin3l_stack_6->GetYaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_13TeV_mllmin3l_stack_6->GetZaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_13TeV_mllmin3l_stack_6->GetZaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_13TeV_mllmin3l_stack_6->GetZaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_13TeV_mllmin3l_stack_6->GetZaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_13TeV_mllmin3l_stack_6->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_13TeV_mllmin3l->SetHistogram(thsSignal_grouped_wh3l_13TeV_mllmin3l_stack_6);
   
   
   TH1D *new_histo_group_Higgs_wh3l_13TeV_mllmin3l26 = new TH1D("new_histo_group_Higgs_wh3l_13TeV_mllmin3l26","histo_H_htt",20,10,200);
   new_histo_group_Higgs_wh3l_13TeV_mllmin3l26->SetBinContent(0,0.02412499);
   new_histo_group_Higgs_wh3l_13TeV_mllmin3l26->SetBinContent(1,0.1541804);
   new_histo_group_Higgs_wh3l_13TeV_mllmin3l26->SetBinContent(2,0.294496);
   new_histo_group_Higgs_wh3l_13TeV_mllmin3l26->SetBinContent(3,0.2979872);
   new_histo_group_Higgs_wh3l_13TeV_mllmin3l26->SetBinContent(4,0.2853713);
   new_histo_group_Higgs_wh3l_13TeV_mllmin3l26->SetBinContent(5,0.213552);
   new_histo_group_Higgs_wh3l_13TeV_mllmin3l26->SetBinContent(6,0.1320352);
   new_histo_group_Higgs_wh3l_13TeV_mllmin3l26->SetBinContent(7,0.0775017);
   new_histo_group_Higgs_wh3l_13TeV_mllmin3l26->SetBinContent(8,0.02383227);
   new_histo_group_Higgs_wh3l_13TeV_mllmin3l26->SetBinContent(9,0.009554908);
   new_histo_group_Higgs_wh3l_13TeV_mllmin3l26->SetBinContent(10,0.00206098);
   new_histo_group_Higgs_wh3l_13TeV_mllmin3l26->SetBinContent(11,0.0002014976);
   new_histo_group_Higgs_wh3l_13TeV_mllmin3l26->SetBinContent(12,0.002923109);
   new_histo_group_Higgs_wh3l_13TeV_mllmin3l26->SetBinError(0,0.006196662);
   new_histo_group_Higgs_wh3l_13TeV_mllmin3l26->SetBinError(1,0.01425762);
   new_histo_group_Higgs_wh3l_13TeV_mllmin3l26->SetBinError(2,0.01970612);
   new_histo_group_Higgs_wh3l_13TeV_mllmin3l26->SetBinError(3,0.01947752);
   new_histo_group_Higgs_wh3l_13TeV_mllmin3l26->SetBinError(4,0.01787702);
   new_histo_group_Higgs_wh3l_13TeV_mllmin3l26->SetBinError(5,0.01436667);
   new_histo_group_Higgs_wh3l_13TeV_mllmin3l26->SetBinError(6,0.01057098);
   new_histo_group_Higgs_wh3l_13TeV_mllmin3l26->SetBinError(7,0.007769335);
   new_histo_group_Higgs_wh3l_13TeV_mllmin3l26->SetBinError(8,0.003445363);
   new_histo_group_Higgs_wh3l_13TeV_mllmin3l26->SetBinError(9,0.001843332);
   new_histo_group_Higgs_wh3l_13TeV_mllmin3l26->SetBinError(10,0.0007387893);
   new_histo_group_Higgs_wh3l_13TeV_mllmin3l26->SetBinError(11,0.0002014976);
   new_histo_group_Higgs_wh3l_13TeV_mllmin3l26->SetBinError(12,0.002110883);
   new_histo_group_Higgs_wh3l_13TeV_mllmin3l26->SetEntries(2720);
   new_histo_group_Higgs_wh3l_13TeV_mllmin3l26->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_13TeV_mllmin3l26->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_13TeV_mllmin3l26->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_13TeV_mllmin3l26->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_13TeV_mllmin3l26->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_mllmin3l26->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_mllmin3l26->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_13TeV_mllmin3l26->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_13TeV_mllmin3l26->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_mllmin3l26->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_mllmin3l26->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_13TeV_mllmin3l26->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_13TeV_mllmin3l26->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_mllmin3l26->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_mllmin3l26->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_13TeV_mllmin3l->Add(new_histo_group_Higgs_wh3l_13TeV_mllmin3l,"");
   thsSignal_grouped_wh3l_13TeV_mllmin3l->Draw("hist same noclear");
   
   Double_t _fx3003[20] = {
   14.75,
   24.25,
   33.75,
   43.25,
   52.75,
   62.25,
   71.75,
   81.25,
   90.75,
   100.25,
   109.75,
   119.25,
   128.75,
   138.25,
   147.75,
   157.25,
   166.75,
   176.25,
   185.75,
   195.25};
   Double_t _fy3003[20] = {
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
   Double_t _felx3003[20] = {
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75};
   Double_t _fely3003[20] = {
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
   Double_t _fehx3003[20] = {
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75};
   Double_t _fehy3003[20] = {
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
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(20,_fx3003,_fy3003,_felx3003,_fehx3003,_fely3003,_fehy3003);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(1);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3003 = new TH1F("Graph_Graph3003","",100,0,219);
   Graph_Graph3003->SetMinimum(0);
   Graph_Graph3003->SetMaximum(1.262698);
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
   
   grae->Draw("p0");
   
   TLegend *leg = new TLegend(0.2,0.55,0.8,0.88,NULL,"brNDC");
   leg->SetTextFont(62);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("new_histo_group_DY_wh3l_13TeV_mllmin3l","DY","F");

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
   entry=leg->AddEntry("new_histo_group_top_wh3l_13TeV_mllmin3l","tW and t#bart","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_13TeV_mllmin3l","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_13TeV_mllmin3l","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_VZ_wh3l_13TeV_mllmin3l","VZ/#gamma*/#gamma","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_13TeV_mllmin3l","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_13TeV_mllmin3l","Data","EPL");
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
   entry=leg->AddEntry("new_histo_group_DY_wh3l_13TeV_mllmin3l","DY","F");

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
   entry=leg->AddEntry("new_histo_group_top_wh3l_13TeV_mllmin3l","tW and t#bart","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_13TeV_mllmin3l","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_13TeV_mllmin3l","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_VZ_wh3l_13TeV_mllmin3l","VZ/#gamma*/#gamma","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_13TeV_mllmin3l","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_13TeV_mllmin3l","Data","EPL");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   leg->Draw();
   
   TH1F *hframe_copy27 = new TH1F("hframe_copy27","",1000,10,200);
   hframe_copy27->SetMinimum(0);
   hframe_copy27->SetMaximum(324.983);
   hframe_copy27->SetDirectory(0);
   hframe_copy27->SetStats(0);
   hframe_copy27->SetLineStyle(0);
   hframe_copy27->SetMarkerStyle(20);
   hframe_copy27->GetXaxis()->SetTitle("min m_{ll} [GeV]");
   hframe_copy27->GetXaxis()->SetNdivisions(506);
   hframe_copy27->GetXaxis()->SetLabelFont(42);
   hframe_copy27->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy27->GetXaxis()->SetLabelSize(0.05);
   hframe_copy27->GetXaxis()->SetTitleSize(0.06);
   hframe_copy27->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy27->GetXaxis()->SetTitleFont(42);
   hframe_copy27->GetYaxis()->SetTitle("Events");
   hframe_copy27->GetYaxis()->SetLabelFont(42);
   hframe_copy27->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy27->GetYaxis()->SetLabelSize(0.05);
   hframe_copy27->GetYaxis()->SetTitleSize(0.06);
   hframe_copy27->GetYaxis()->SetTitleOffset(1.25);
   hframe_copy27->GetYaxis()->SetTitleFont(42);
   hframe_copy27->GetZaxis()->SetLabelFont(42);
   hframe_copy27->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy27->GetZaxis()->SetLabelSize(0.05);
   hframe_copy27->GetZaxis()->SetTitleSize(0.06);
   hframe_copy27->GetZaxis()->SetTitleFont(42);
   hframe_copy27->Draw("sameaxis");
   ccwh3l_13TeV_mllmin3l->Modified();
   ccwh3l_13TeV_mllmin3l->cd();
   ccwh3l_13TeV_mllmin3l->SetSelected(ccwh3l_13TeV_mllmin3l);
}
