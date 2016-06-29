void c_wh3l_top_13TeV_pt3()
{
//=========Macro generated from canvas: ccwh3l_top_13TeV_pt3/cc
//=========  (Tue Jun 28 16:49:09 2016) by ROOT version6.02/13
   TCanvas *ccwh3l_top_13TeV_pt3 = new TCanvas("ccwh3l_top_13TeV_pt3", "cc",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   ccwh3l_top_13TeV_pt3->SetHighLightColor(2);
   ccwh3l_top_13TeV_pt3->Range(-28,-7.75057,209.5,51.8692);
   ccwh3l_top_13TeV_pt3->SetFillColor(0);
   ccwh3l_top_13TeV_pt3->SetBorderMode(0);
   ccwh3l_top_13TeV_pt3->SetBorderSize(2);
   ccwh3l_top_13TeV_pt3->SetTickx(1);
   ccwh3l_top_13TeV_pt3->SetTicky(1);
   ccwh3l_top_13TeV_pt3->SetLeftMargin(0.16);
   ccwh3l_top_13TeV_pt3->SetRightMargin(0.04);
   ccwh3l_top_13TeV_pt3->SetTopMargin(0.05);
   ccwh3l_top_13TeV_pt3->SetBottomMargin(0.13);
   ccwh3l_top_13TeV_pt3->SetFrameFillStyle(0);
   ccwh3l_top_13TeV_pt3->SetFrameBorderMode(0);
   ccwh3l_top_13TeV_pt3->SetFrameFillStyle(0);
   ccwh3l_top_13TeV_pt3->SetFrameBorderMode(0);
   
   TH1F *hframe193 = new TH1F("hframe193","",1000,10,200);
   hframe193->SetMinimum(0);
   hframe193->SetMaximum(48.88821);
   hframe193->SetDirectory(0);
   hframe193->SetStats(0);
   hframe193->SetLineStyle(0);
   hframe193->SetMarkerStyle(20);
   hframe193->GetXaxis()->SetTitle("lept3_p_{T} [GeV]");
   hframe193->GetXaxis()->SetNdivisions(506);
   hframe193->GetXaxis()->SetLabelFont(42);
   hframe193->GetXaxis()->SetLabelOffset(0.007);
   hframe193->GetXaxis()->SetLabelSize(0.05);
   hframe193->GetXaxis()->SetTitleSize(0.06);
   hframe193->GetXaxis()->SetTitleOffset(0.9);
   hframe193->GetXaxis()->SetTitleFont(42);
   hframe193->GetYaxis()->SetTitle("Events");
   hframe193->GetYaxis()->SetLabelFont(42);
   hframe193->GetYaxis()->SetLabelOffset(0.007);
   hframe193->GetYaxis()->SetLabelSize(0.05);
   hframe193->GetYaxis()->SetTitleSize(0.06);
   hframe193->GetYaxis()->SetTitleOffset(1.25);
   hframe193->GetYaxis()->SetTitleFont(42);
   hframe193->GetZaxis()->SetLabelFont(42);
   hframe193->GetZaxis()->SetLabelOffset(0.007);
   hframe193->GetZaxis()->SetLabelSize(0.05);
   hframe193->GetZaxis()->SetTitleSize(0.06);
   hframe193->GetZaxis()->SetTitleFont(42);
   hframe193->Draw(" ");
   
   THStack *thsBackground_grouped_wh3l_top_13TeV_pt3 = new THStack();
   thsBackground_grouped_wh3l_top_13TeV_pt3->SetName("thsBackground_grouped_wh3l_top_13TeV_pt3");
   thsBackground_grouped_wh3l_top_13TeV_pt3->SetTitle("thsBackground_grouped_wh3l_top_13TeV_pt3");
   
   TH1F *thsBackground_grouped_wh3l_top_13TeV_pt3_stack_25 = new TH1F("thsBackground_grouped_wh3l_top_13TeV_pt3_stack_25","thsBackground_grouped_wh3l_top_13TeV_pt3",25,10,200);
   thsBackground_grouped_wh3l_top_13TeV_pt3_stack_25->SetMinimum(-0.001125552);
   thsBackground_grouped_wh3l_top_13TeV_pt3_stack_25->SetMaximum(20.53305);
   thsBackground_grouped_wh3l_top_13TeV_pt3_stack_25->SetDirectory(0);
   thsBackground_grouped_wh3l_top_13TeV_pt3_stack_25->SetStats(0);
   thsBackground_grouped_wh3l_top_13TeV_pt3_stack_25->SetLineStyle(0);
   thsBackground_grouped_wh3l_top_13TeV_pt3_stack_25->SetMarkerStyle(20);
   thsBackground_grouped_wh3l_top_13TeV_pt3_stack_25->GetXaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_top_13TeV_pt3_stack_25->GetXaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_top_13TeV_pt3_stack_25->GetXaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_top_13TeV_pt3_stack_25->GetXaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_top_13TeV_pt3_stack_25->GetXaxis()->SetTitleOffset(0.9);
   thsBackground_grouped_wh3l_top_13TeV_pt3_stack_25->GetXaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_top_13TeV_pt3_stack_25->GetYaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_top_13TeV_pt3_stack_25->GetYaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_top_13TeV_pt3_stack_25->GetYaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_top_13TeV_pt3_stack_25->GetYaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_top_13TeV_pt3_stack_25->GetYaxis()->SetTitleOffset(1.25);
   thsBackground_grouped_wh3l_top_13TeV_pt3_stack_25->GetYaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_top_13TeV_pt3_stack_25->GetZaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_top_13TeV_pt3_stack_25->GetZaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_top_13TeV_pt3_stack_25->GetZaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_top_13TeV_pt3_stack_25->GetZaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_top_13TeV_pt3_stack_25->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_top_13TeV_pt3->SetHistogram(thsBackground_grouped_wh3l_top_13TeV_pt3_stack_25);
   
   
   TH1D *new_histo_group_Fake_wh3l_top_13TeV_pt3194 = new TH1D("new_histo_group_Fake_wh3l_top_13TeV_pt3194","histo_Fake",25,10,200);
   new_histo_group_Fake_wh3l_top_13TeV_pt3194->SetBinContent(1,15.95121);
   new_histo_group_Fake_wh3l_top_13TeV_pt3194->SetBinContent(2,10.34355);
   new_histo_group_Fake_wh3l_top_13TeV_pt3194->SetBinContent(3,5.806077);
   new_histo_group_Fake_wh3l_top_13TeV_pt3194->SetBinContent(4,2.489194);
   new_histo_group_Fake_wh3l_top_13TeV_pt3194->SetBinContent(5,2.158827);
   new_histo_group_Fake_wh3l_top_13TeV_pt3194->SetBinContent(6,0.2524378);
   new_histo_group_Fake_wh3l_top_13TeV_pt3194->SetBinContent(7,0.4327143);
   new_histo_group_Fake_wh3l_top_13TeV_pt3194->SetBinContent(8,0.1398843);
   new_histo_group_Fake_wh3l_top_13TeV_pt3194->SetBinContent(9,0.1204989);
   new_histo_group_Fake_wh3l_top_13TeV_pt3194->SetBinContent(11,-0.0005627758);
   new_histo_group_Fake_wh3l_top_13TeV_pt3194->SetBinError(1,3.338492);
   new_histo_group_Fake_wh3l_top_13TeV_pt3194->SetBinError(2,2.19865);
   new_histo_group_Fake_wh3l_top_13TeV_pt3194->SetBinError(3,1.444153);
   new_histo_group_Fake_wh3l_top_13TeV_pt3194->SetBinError(4,0.9053486);
   new_histo_group_Fake_wh3l_top_13TeV_pt3194->SetBinError(5,0.9112522);
   new_histo_group_Fake_wh3l_top_13TeV_pt3194->SetBinError(6,0.1703183);
   new_histo_group_Fake_wh3l_top_13TeV_pt3194->SetBinError(7,0.3302037);
   new_histo_group_Fake_wh3l_top_13TeV_pt3194->SetBinError(8,0.09891325);
   new_histo_group_Fake_wh3l_top_13TeV_pt3194->SetBinError(9,0.1116071);
   new_histo_group_Fake_wh3l_top_13TeV_pt3194->SetBinError(11,0.0005627758);
   new_histo_group_Fake_wh3l_top_13TeV_pt3194->SetEntries(317);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_top_13TeV_pt3194->SetFillColor(ci);
   new_histo_group_Fake_wh3l_top_13TeV_pt3194->SetFillStyle(3001);

   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_top_13TeV_pt3194->SetLineColor(ci);
   new_histo_group_Fake_wh3l_top_13TeV_pt3194->GetXaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_top_13TeV_pt3194->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_top_13TeV_pt3194->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_top_13TeV_pt3194->GetXaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_top_13TeV_pt3194->GetYaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_top_13TeV_pt3194->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_top_13TeV_pt3194->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_top_13TeV_pt3194->GetYaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_top_13TeV_pt3194->GetZaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_top_13TeV_pt3194->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_top_13TeV_pt3194->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_top_13TeV_pt3194->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_top_13TeV_pt3->Add(new_histo_group_Fake_wh3l_top_13TeV_pt3,"");
   
   TH1D *new_histo_group_WW_wh3l_top_13TeV_pt3195 = new TH1D("new_histo_group_WW_wh3l_top_13TeV_pt3195","histo_WW",25,10,200);
   new_histo_group_WW_wh3l_top_13TeV_pt3195->SetBinContent(1,0.04837169);
   new_histo_group_WW_wh3l_top_13TeV_pt3195->SetBinContent(2,0.04225316);
   new_histo_group_WW_wh3l_top_13TeV_pt3195->SetBinContent(3,0.01749081);
   new_histo_group_WW_wh3l_top_13TeV_pt3195->SetBinContent(4,0.01595104);
   new_histo_group_WW_wh3l_top_13TeV_pt3195->SetBinContent(6,0.03094249);
   new_histo_group_WW_wh3l_top_13TeV_pt3195->SetBinContent(10,0.01305253);
   new_histo_group_WW_wh3l_top_13TeV_pt3195->SetBinError(1,0.02798749);
   new_histo_group_WW_wh3l_top_13TeV_pt3195->SetBinError(2,0.02711724);
   new_histo_group_WW_wh3l_top_13TeV_pt3195->SetBinError(3,0.01749081);
   new_histo_group_WW_wh3l_top_13TeV_pt3195->SetBinError(4,0.01595104);
   new_histo_group_WW_wh3l_top_13TeV_pt3195->SetBinError(6,0.02191288);
   new_histo_group_WW_wh3l_top_13TeV_pt3195->SetBinError(10,0.01305253);
   new_histo_group_WW_wh3l_top_13TeV_pt3195->SetEntries(11);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_top_13TeV_pt3195->SetFillColor(ci);
   new_histo_group_WW_wh3l_top_13TeV_pt3195->SetFillStyle(3001);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_top_13TeV_pt3195->SetLineColor(ci);
   new_histo_group_WW_wh3l_top_13TeV_pt3195->GetXaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_top_13TeV_pt3195->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_top_13TeV_pt3195->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_top_13TeV_pt3195->GetXaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_top_13TeV_pt3195->GetYaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_top_13TeV_pt3195->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_top_13TeV_pt3195->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_top_13TeV_pt3195->GetYaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_top_13TeV_pt3195->GetZaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_top_13TeV_pt3195->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_top_13TeV_pt3195->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_top_13TeV_pt3195->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_top_13TeV_pt3->Add(new_histo_group_WW_wh3l_top_13TeV_pt3,"");
   
   TH1D *new_histo_group_VVV_wh3l_top_13TeV_pt3196 = new TH1D("new_histo_group_VVV_wh3l_top_13TeV_pt3196","histo_VVV",25,10,200);
   new_histo_group_VVV_wh3l_top_13TeV_pt3196->SetBinContent(1,0.005569016);
   new_histo_group_VVV_wh3l_top_13TeV_pt3196->SetBinContent(2,0.007253488);
   new_histo_group_VVV_wh3l_top_13TeV_pt3196->SetBinContent(3,0.003458891);
   new_histo_group_VVV_wh3l_top_13TeV_pt3196->SetBinContent(4,0.005076342);
   new_histo_group_VVV_wh3l_top_13TeV_pt3196->SetBinContent(5,0.0003415074);
   new_histo_group_VVV_wh3l_top_13TeV_pt3196->SetBinContent(6,0.003037435);
   new_histo_group_VVV_wh3l_top_13TeV_pt3196->SetBinContent(7,0.00120717);
   new_histo_group_VVV_wh3l_top_13TeV_pt3196->SetBinContent(8,0.001373407);
   new_histo_group_VVV_wh3l_top_13TeV_pt3196->SetBinContent(9,0.002226889);
   new_histo_group_VVV_wh3l_top_13TeV_pt3196->SetBinContent(13,0.0004409207);
   new_histo_group_VVV_wh3l_top_13TeV_pt3196->SetBinError(1,0.001829272);
   new_histo_group_VVV_wh3l_top_13TeV_pt3196->SetBinError(2,0.002129388);
   new_histo_group_VVV_wh3l_top_13TeV_pt3196->SetBinError(3,0.001506819);
   new_histo_group_VVV_wh3l_top_13TeV_pt3196->SetBinError(4,0.001801111);
   new_histo_group_VVV_wh3l_top_13TeV_pt3196->SetBinError(5,0.0009338056);
   new_histo_group_VVV_wh3l_top_13TeV_pt3196->SetBinError(6,0.001312636);
   new_histo_group_VVV_wh3l_top_13TeV_pt3196->SetBinError(7,0.0006814142);
   new_histo_group_VVV_wh3l_top_13TeV_pt3196->SetBinError(8,0.0009768838);
   new_histo_group_VVV_wh3l_top_13TeV_pt3196->SetBinError(9,0.001122375);
   new_histo_group_VVV_wh3l_top_13TeV_pt3196->SetBinError(13,0.0004409207);
   new_histo_group_VVV_wh3l_top_13TeV_pt3196->SetEntries(58);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_top_13TeV_pt3196->SetFillColor(ci);
   new_histo_group_VVV_wh3l_top_13TeV_pt3196->SetFillStyle(3001);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_top_13TeV_pt3196->SetLineColor(ci);
   new_histo_group_VVV_wh3l_top_13TeV_pt3196->GetXaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_top_13TeV_pt3196->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_top_13TeV_pt3196->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_top_13TeV_pt3196->GetXaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_top_13TeV_pt3196->GetYaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_top_13TeV_pt3196->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_top_13TeV_pt3196->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_top_13TeV_pt3196->GetYaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_top_13TeV_pt3196->GetZaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_top_13TeV_pt3196->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_top_13TeV_pt3196->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_top_13TeV_pt3196->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_top_13TeV_pt3->Add(new_histo_group_VVV_wh3l_top_13TeV_pt3,"");
   
   TH1D *new_histo_group_Vg_wh3l_top_13TeV_pt3197 = new TH1D("new_histo_group_Vg_wh3l_top_13TeV_pt3197","histo_Vg",25,10,200);
   new_histo_group_Vg_wh3l_top_13TeV_pt3197->SetBinContent(1,0.4194991);
   new_histo_group_Vg_wh3l_top_13TeV_pt3197->SetBinContent(2,0.6356977);
   new_histo_group_Vg_wh3l_top_13TeV_pt3197->SetBinContent(3,0.2704035);
   new_histo_group_Vg_wh3l_top_13TeV_pt3197->SetBinContent(4,0.1890666);
   new_histo_group_Vg_wh3l_top_13TeV_pt3197->SetBinError(1,0.2731996);
   new_histo_group_Vg_wh3l_top_13TeV_pt3197->SetBinError(2,0.3168816);
   new_histo_group_Vg_wh3l_top_13TeV_pt3197->SetBinError(3,0.1603084);
   new_histo_group_Vg_wh3l_top_13TeV_pt3197->SetBinError(4,0.1395142);
   new_histo_group_Vg_wh3l_top_13TeV_pt3197->SetEntries(26);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_top_13TeV_pt3197->SetFillColor(ci);
   new_histo_group_Vg_wh3l_top_13TeV_pt3197->SetFillStyle(3001);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_top_13TeV_pt3197->SetLineColor(ci);
   new_histo_group_Vg_wh3l_top_13TeV_pt3197->GetXaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_top_13TeV_pt3197->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_top_13TeV_pt3197->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_top_13TeV_pt3197->GetXaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_top_13TeV_pt3197->GetYaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_top_13TeV_pt3197->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_top_13TeV_pt3197->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_top_13TeV_pt3197->GetYaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_top_13TeV_pt3197->GetZaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_top_13TeV_pt3197->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_top_13TeV_pt3197->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_top_13TeV_pt3197->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_top_13TeV_pt3->Add(new_histo_group_Vg_wh3l_top_13TeV_pt3,"");
   
   TH1D *new_histo_group_ZZ_wh3l_top_13TeV_pt3198 = new TH1D("new_histo_group_ZZ_wh3l_top_13TeV_pt3198","histo_ZZ",25,10,200);
   new_histo_group_ZZ_wh3l_top_13TeV_pt3198->SetBinContent(1,0.2363288);
   new_histo_group_ZZ_wh3l_top_13TeV_pt3198->SetBinContent(2,0.2429191);
   new_histo_group_ZZ_wh3l_top_13TeV_pt3198->SetBinContent(3,0.09142059);
   new_histo_group_ZZ_wh3l_top_13TeV_pt3198->SetBinContent(4,0.06811262);
   new_histo_group_ZZ_wh3l_top_13TeV_pt3198->SetBinContent(5,0.08412319);
   new_histo_group_ZZ_wh3l_top_13TeV_pt3198->SetBinContent(6,0.06682949);
   new_histo_group_ZZ_wh3l_top_13TeV_pt3198->SetBinContent(7,0.1088084);
   new_histo_group_ZZ_wh3l_top_13TeV_pt3198->SetBinContent(12,0.04314121);
   new_histo_group_ZZ_wh3l_top_13TeV_pt3198->SetBinError(1,0.1010908);
   new_histo_group_ZZ_wh3l_top_13TeV_pt3198->SetBinError(2,0.09865392);
   new_histo_group_ZZ_wh3l_top_13TeV_pt3198->SetBinError(3,0.06464511);
   new_histo_group_ZZ_wh3l_top_13TeV_pt3198->SetBinError(4,0.0518654);
   new_histo_group_ZZ_wh3l_top_13TeV_pt3198->SetBinError(5,0.05951097);
   new_histo_group_ZZ_wh3l_top_13TeV_pt3198->SetBinError(6,0.05062022);
   new_histo_group_ZZ_wh3l_top_13TeV_pt3198->SetBinError(7,0.06601103);
   new_histo_group_ZZ_wh3l_top_13TeV_pt3198->SetBinError(12,0.04314121);
   new_histo_group_ZZ_wh3l_top_13TeV_pt3198->SetEntries(25);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_top_13TeV_pt3198->SetFillColor(ci);
   new_histo_group_ZZ_wh3l_top_13TeV_pt3198->SetFillStyle(3001);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_top_13TeV_pt3198->SetLineColor(ci);
   new_histo_group_ZZ_wh3l_top_13TeV_pt3198->GetXaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_top_13TeV_pt3198->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_top_13TeV_pt3198->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_top_13TeV_pt3198->GetXaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_top_13TeV_pt3198->GetYaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_top_13TeV_pt3198->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_top_13TeV_pt3198->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_top_13TeV_pt3198->GetYaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_top_13TeV_pt3198->GetZaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_top_13TeV_pt3198->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_top_13TeV_pt3198->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_top_13TeV_pt3198->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_top_13TeV_pt3->Add(new_histo_group_ZZ_wh3l_top_13TeV_pt3,"");
   
   TH1D *new_histo_group_WZ_wh3l_top_13TeV_pt3199 = new TH1D("new_histo_group_WZ_wh3l_top_13TeV_pt3199","histo_WZ",25,10,200);
   new_histo_group_WZ_wh3l_top_13TeV_pt3199->SetBinContent(1,2.894309);
   new_histo_group_WZ_wh3l_top_13TeV_pt3199->SetBinContent(2,2.257023);
   new_histo_group_WZ_wh3l_top_13TeV_pt3199->SetBinContent(3,1.173787);
   new_histo_group_WZ_wh3l_top_13TeV_pt3199->SetBinContent(4,0.7524463);
   new_histo_group_WZ_wh3l_top_13TeV_pt3199->SetBinContent(5,0.533813);
   new_histo_group_WZ_wh3l_top_13TeV_pt3199->SetBinContent(6,0.3810766);
   new_histo_group_WZ_wh3l_top_13TeV_pt3199->SetBinContent(7,0.2439615);
   new_histo_group_WZ_wh3l_top_13TeV_pt3199->SetBinContent(8,0.1559586);
   new_histo_group_WZ_wh3l_top_13TeV_pt3199->SetBinContent(9,0.1678595);
   new_histo_group_WZ_wh3l_top_13TeV_pt3199->SetBinContent(10,0.1031013);
   new_histo_group_WZ_wh3l_top_13TeV_pt3199->SetBinContent(11,0.0325759);
   new_histo_group_WZ_wh3l_top_13TeV_pt3199->SetBinContent(12,0.02302998);
   new_histo_group_WZ_wh3l_top_13TeV_pt3199->SetBinContent(13,0.01823155);
   new_histo_group_WZ_wh3l_top_13TeV_pt3199->SetBinContent(14,0.02692964);
   new_histo_group_WZ_wh3l_top_13TeV_pt3199->SetBinContent(15,0.01672299);
   new_histo_group_WZ_wh3l_top_13TeV_pt3199->SetBinContent(16,0.005440074);
   new_histo_group_WZ_wh3l_top_13TeV_pt3199->SetBinContent(17,0.01840165);
   new_histo_group_WZ_wh3l_top_13TeV_pt3199->SetBinContent(18,0.02188066);
   new_histo_group_WZ_wh3l_top_13TeV_pt3199->SetBinContent(20,0.01206978);
   new_histo_group_WZ_wh3l_top_13TeV_pt3199->SetBinContent(21,0.01275589);
   new_histo_group_WZ_wh3l_top_13TeV_pt3199->SetBinContent(22,0.01616409);
   new_histo_group_WZ_wh3l_top_13TeV_pt3199->SetBinContent(23,0.002622175);
   new_histo_group_WZ_wh3l_top_13TeV_pt3199->SetBinContent(24,0.01094147);
   new_histo_group_WZ_wh3l_top_13TeV_pt3199->SetBinContent(26,0.005160205);
   new_histo_group_WZ_wh3l_top_13TeV_pt3199->SetBinError(1,0.1249508);
   new_histo_group_WZ_wh3l_top_13TeV_pt3199->SetBinError(2,0.1115692);
   new_histo_group_WZ_wh3l_top_13TeV_pt3199->SetBinError(3,0.07976509);
   new_histo_group_WZ_wh3l_top_13TeV_pt3199->SetBinError(4,0.06412046);
   new_histo_group_WZ_wh3l_top_13TeV_pt3199->SetBinError(5,0.05398213);
   new_histo_group_WZ_wh3l_top_13TeV_pt3199->SetBinError(6,0.04512803);
   new_histo_group_WZ_wh3l_top_13TeV_pt3199->SetBinError(7,0.03647647);
   new_histo_group_WZ_wh3l_top_13TeV_pt3199->SetBinError(8,0.02877692);
   new_histo_group_WZ_wh3l_top_13TeV_pt3199->SetBinError(9,0.03075478);
   new_histo_group_WZ_wh3l_top_13TeV_pt3199->SetBinError(10,0.0235505);
   new_histo_group_WZ_wh3l_top_13TeV_pt3199->SetBinError(11,0.01284786);
   new_histo_group_WZ_wh3l_top_13TeV_pt3199->SetBinError(12,0.0104282);
   new_histo_group_WZ_wh3l_top_13TeV_pt3199->SetBinError(13,0.009400622);
   new_histo_group_WZ_wh3l_top_13TeV_pt3199->SetBinError(14,0.01175727);
   new_histo_group_WZ_wh3l_top_13TeV_pt3199->SetBinError(15,0.009691197);
   new_histo_group_WZ_wh3l_top_13TeV_pt3199->SetBinError(16,0.005440074);
   new_histo_group_WZ_wh3l_top_13TeV_pt3199->SetBinError(17,0.01066006);
   new_histo_group_WZ_wh3l_top_13TeV_pt3199->SetBinError(18,0.01102857);
   new_histo_group_WZ_wh3l_top_13TeV_pt3199->SetBinError(20,0.007282232);
   new_histo_group_WZ_wh3l_top_13TeV_pt3199->SetBinError(21,0.008338528);
   new_histo_group_WZ_wh3l_top_13TeV_pt3199->SetBinError(22,0.009373455);
   new_histo_group_WZ_wh3l_top_13TeV_pt3199->SetBinError(23,0.002622175);
   new_histo_group_WZ_wh3l_top_13TeV_pt3199->SetBinError(24,0.007033752);
   new_histo_group_WZ_wh3l_top_13TeV_pt3199->SetBinError(26,0.005160205);
   new_histo_group_WZ_wh3l_top_13TeV_pt3199->SetEntries(1809);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_top_13TeV_pt3199->SetFillColor(ci);
   new_histo_group_WZ_wh3l_top_13TeV_pt3199->SetFillStyle(3001);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_top_13TeV_pt3199->SetLineColor(ci);
   new_histo_group_WZ_wh3l_top_13TeV_pt3199->GetXaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_top_13TeV_pt3199->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_top_13TeV_pt3199->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_top_13TeV_pt3199->GetXaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_top_13TeV_pt3199->GetYaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_top_13TeV_pt3199->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_top_13TeV_pt3199->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_top_13TeV_pt3199->GetYaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_top_13TeV_pt3199->GetZaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_top_13TeV_pt3199->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_top_13TeV_pt3199->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_top_13TeV_pt3199->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_top_13TeV_pt3->Add(new_histo_group_WZ_wh3l_top_13TeV_pt3,"");
   thsBackground_grouped_wh3l_top_13TeV_pt3->Draw("hist same");
   
   Double_t _fx3049[25] = {
   13.8,
   21.4,
   29,
   36.6,
   44.2,
   51.8,
   59.4,
   67,
   74.6,
   82.2,
   89.8,
   97.4,
   105,
   112.6,
   120.2,
   127.8,
   135.4,
   143,
   150.6,
   158.2,
   165.8,
   173.4,
   181,
   188.6,
   196.2};
   Double_t _fy3049[25] = {
   19.55529,
   13.5287,
   7.362638,
   3.519847,
   2.777105,
   0.7343238,
   0.7866914,
   0.2972163,
   0.2905853,
   0.1161539,
   0.03201313,
   0.06617119,
   0.01867247,
   0.02692964,
   0.01672298,
   0.005440074,
   0.01840165,
   0.02188066,
   0,
   0.01206979,
   0.01275589,
   0.01616409,
   0.002622175,
   0.01094147,
   0};
   Double_t _felx3049[25] = {
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8};
   Double_t _fely3049[25] = {
   6.152887,
   4.149662,
   2.481817,
   1.395279,
   1.212541,
   0.2990528,
   0.4524075,
   0.1353377,
   0.1479682,
   0.03660488,
   0.01341174,
   0.05358209,
   0.009841569,
   0.0117573,
   0.009691199,
   0.005440074,
   0.01066006,
   0.01102858,
   0,
   0.007282235,
   0.008338529,
   0.009373455,
   0.002622175,
   0.007033752,
   0};
   Double_t _fehx3049[25] = {
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8};
   Double_t _fehy3049[25] = {
   6.152886,
   4.149662,
   2.481818,
   1.395279,
   1.213042,
   0.2990529,
   0.4524076,
   0.1353378,
   0.1479682,
   0.03660487,
   0.01341174,
   0.05358208,
   0.009841568,
   0.0117573,
   0.0096912,
   0.005440074,
   0.01066006,
   0.01102859,
   0,
   0.007282234,
   0.00833853,
   0.009373457,
   0.002622175,
   0.007033752,
   0};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(25,_fx3049,_fy3049,_felx3049,_fehx3049,_fely3049,_fehy3049);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(12);
   grae->SetFillStyle(3004);
   grae->SetLineColor(12);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3049 = new TH1F("Graph_Graph3049","",100,0,219);
   Graph_Graph3049->SetMinimum(-2.570817);
   Graph_Graph3049->SetMaximum(28.27899);
   Graph_Graph3049->SetDirectory(0);
   Graph_Graph3049->SetStats(0);
   Graph_Graph3049->SetLineStyle(0);
   Graph_Graph3049->SetMarkerStyle(20);
   Graph_Graph3049->GetXaxis()->SetLabelFont(42);
   Graph_Graph3049->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3049->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3049->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3049->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3049->GetXaxis()->SetTitleFont(42);
   Graph_Graph3049->GetYaxis()->SetLabelFont(42);
   Graph_Graph3049->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3049->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3049->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3049->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3049->GetYaxis()->SetTitleFont(42);
   Graph_Graph3049->GetZaxis()->SetLabelFont(42);
   Graph_Graph3049->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3049->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3049->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3049->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3049);
   
   grae->Draw("2");
   
   Double_t _fx3050[25] = {
   13.8,
   21.4,
   29,
   36.6,
   44.2,
   51.8,
   59.4,
   67,
   74.6,
   82.2,
   89.8,
   97.4,
   105,
   112.6,
   120.2,
   127.8,
   135.4,
   143,
   150.6,
   158.2,
   165.8,
   173.4,
   181,
   188.6,
   196.2};
   Double_t _fy3050[25] = {
   14,
   12,
   5,
   2,
   4,
   3,
   1,
   0,
   1,
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
   Double_t _felx3050[25] = {
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8};
   Double_t _fely3050[25] = {
   3.696567,
   3.415326,
   2.159724,
   1.29183,
   1.914367,
   1.632727,
   0.8272524,
   0,
   0.8272524,
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
   Double_t _fehx3050[25] = {
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8};
   Double_t _fehy3050[25] = {
   4.830479,
   4.559911,
   3.382539,
   2.63791,
   3.162815,
   2.918242,
   2.29957,
   1.147908,
   2.29957,
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
   grae = new TGraphAsymmErrors(25,_fx3050,_fy3050,_felx3050,_fehx3050,_fely3050,_fehy3050);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(1);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3050 = new TH1F("Graph_Graph3050","",100,0,219);
   Graph_Graph3050->SetMinimum(0);
   Graph_Graph3050->SetMaximum(20.71353);
   Graph_Graph3050->SetDirectory(0);
   Graph_Graph3050->SetStats(0);
   Graph_Graph3050->SetLineStyle(0);
   Graph_Graph3050->SetMarkerStyle(20);
   Graph_Graph3050->GetXaxis()->SetLabelFont(42);
   Graph_Graph3050->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3050->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3050->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3050->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3050->GetXaxis()->SetTitleFont(42);
   Graph_Graph3050->GetYaxis()->SetLabelFont(42);
   Graph_Graph3050->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3050->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3050->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3050->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3050->GetYaxis()->SetTitleFont(42);
   Graph_Graph3050->GetZaxis()->SetLabelFont(42);
   Graph_Graph3050->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3050->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3050->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3050->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3050);
   
   grae->Draw("p0");
   
   TLegend *leg = new TLegend(0.2,0.7,0.8,0.9,NULL,"brNDC");
   leg->SetTextFont(62);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("new_histo_group_Fake_wh3l_top_13TeV_pt3","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_top_13TeV_pt3","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_top_13TeV_pt3","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_top_13TeV_pt3","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_top_13TeV_pt3","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_top_13TeV_pt3","WZ","F");

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
   entry=leg->AddEntry("new_histo_DATA_wh3l_top_13TeV_pt3","Data","EPL");
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
   entry=leg->AddEntry("new_histo_group_Fake_wh3l_top_13TeV_pt3","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_top_13TeV_pt3","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_top_13TeV_pt3","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_top_13TeV_pt3","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_top_13TeV_pt3","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_top_13TeV_pt3","WZ","F");

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
   entry=leg->AddEntry("new_histo_DATA_wh3l_top_13TeV_pt3","Data","EPL");
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
   
   TH1F *hframe_copy200 = new TH1F("hframe_copy200","",1000,10,200);
   hframe_copy200->SetMinimum(0);
   hframe_copy200->SetMaximum(48.88821);
   hframe_copy200->SetDirectory(0);
   hframe_copy200->SetStats(0);
   hframe_copy200->SetLineStyle(0);
   hframe_copy200->SetMarkerStyle(20);
   hframe_copy200->GetXaxis()->SetTitle("lept3_p_{T} [GeV]");
   hframe_copy200->GetXaxis()->SetNdivisions(506);
   hframe_copy200->GetXaxis()->SetLabelFont(42);
   hframe_copy200->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy200->GetXaxis()->SetLabelSize(0.05);
   hframe_copy200->GetXaxis()->SetTitleSize(0.06);
   hframe_copy200->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy200->GetXaxis()->SetTitleFont(42);
   hframe_copy200->GetYaxis()->SetTitle("Events");
   hframe_copy200->GetYaxis()->SetLabelFont(42);
   hframe_copy200->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy200->GetYaxis()->SetLabelSize(0.05);
   hframe_copy200->GetYaxis()->SetTitleSize(0.06);
   hframe_copy200->GetYaxis()->SetTitleOffset(1.25);
   hframe_copy200->GetYaxis()->SetTitleFont(42);
   hframe_copy200->GetZaxis()->SetLabelFont(42);
   hframe_copy200->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy200->GetZaxis()->SetLabelSize(0.05);
   hframe_copy200->GetZaxis()->SetTitleSize(0.06);
   hframe_copy200->GetZaxis()->SetTitleFont(42);
   hframe_copy200->Draw("sameaxis");
   ccwh3l_top_13TeV_pt3->Modified();
   ccwh3l_top_13TeV_pt3->cd();
   ccwh3l_top_13TeV_pt3->SetSelected(ccwh3l_top_13TeV_pt3);
}
