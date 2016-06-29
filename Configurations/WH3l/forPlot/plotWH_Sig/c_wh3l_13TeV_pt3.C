void c_wh3l_13TeV_pt3()
{
//=========Macro generated from canvas: ccwh3l_13TeV_pt3/cc
//=========  (Wed Jun 29 01:51:50 2016) by ROOT version6.02/13
   TCanvas *ccwh3l_13TeV_pt3 = new TCanvas("ccwh3l_13TeV_pt3", "cc",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   ccwh3l_13TeV_pt3->SetHighLightColor(2);
   ccwh3l_13TeV_pt3->Range(-28,-4.925139,209.5,32.96055);
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
   
   TH1F *hframe371 = new TH1F("hframe371","",1000,10,200);
   hframe371->SetMinimum(0);
   hframe371->SetMaximum(31.06626);
   hframe371->SetDirectory(0);
   hframe371->SetStats(0);
   hframe371->SetLineStyle(0);
   hframe371->SetMarkerStyle(20);
   hframe371->GetXaxis()->SetTitle("lept3_p_{T} [GeV]");
   hframe371->GetXaxis()->SetNdivisions(506);
   hframe371->GetXaxis()->SetLabelFont(42);
   hframe371->GetXaxis()->SetLabelOffset(0.007);
   hframe371->GetXaxis()->SetLabelSize(0.05);
   hframe371->GetXaxis()->SetTitleSize(0.06);
   hframe371->GetXaxis()->SetTitleOffset(0.9);
   hframe371->GetXaxis()->SetTitleFont(42);
   hframe371->GetYaxis()->SetTitle("Events");
   hframe371->GetYaxis()->SetLabelFont(42);
   hframe371->GetYaxis()->SetLabelOffset(0.007);
   hframe371->GetYaxis()->SetLabelSize(0.05);
   hframe371->GetYaxis()->SetTitleSize(0.06);
   hframe371->GetYaxis()->SetTitleOffset(1.25);
   hframe371->GetYaxis()->SetTitleFont(42);
   hframe371->GetZaxis()->SetLabelFont(42);
   hframe371->GetZaxis()->SetLabelOffset(0.007);
   hframe371->GetZaxis()->SetLabelSize(0.05);
   hframe371->GetZaxis()->SetTitleSize(0.06);
   hframe371->GetZaxis()->SetTitleFont(42);
   hframe371->Draw(" ");
   
   THStack *thsBackground_grouped_wh3l_13TeV_pt3 = new THStack();
   thsBackground_grouped_wh3l_13TeV_pt3->SetName("thsBackground_grouped_wh3l_13TeV_pt3");
   thsBackground_grouped_wh3l_13TeV_pt3->SetTitle("thsBackground_grouped_wh3l_13TeV_pt3");
   
   TH1F *thsBackground_grouped_wh3l_13TeV_pt3_stack_75 = new TH1F("thsBackground_grouped_wh3l_13TeV_pt3_stack_75","thsBackground_grouped_wh3l_13TeV_pt3",25,10,200);
   thsBackground_grouped_wh3l_13TeV_pt3_stack_75->SetMinimum(-0.2449118);
   thsBackground_grouped_wh3l_13TeV_pt3_stack_75->SetMaximum(13.04783);
   thsBackground_grouped_wh3l_13TeV_pt3_stack_75->SetDirectory(0);
   thsBackground_grouped_wh3l_13TeV_pt3_stack_75->SetStats(0);
   thsBackground_grouped_wh3l_13TeV_pt3_stack_75->SetLineStyle(0);
   thsBackground_grouped_wh3l_13TeV_pt3_stack_75->SetMarkerStyle(20);
   thsBackground_grouped_wh3l_13TeV_pt3_stack_75->GetXaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_13TeV_pt3_stack_75->GetXaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_13TeV_pt3_stack_75->GetXaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_13TeV_pt3_stack_75->GetXaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_13TeV_pt3_stack_75->GetXaxis()->SetTitleOffset(0.9);
   thsBackground_grouped_wh3l_13TeV_pt3_stack_75->GetXaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_pt3_stack_75->GetYaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_13TeV_pt3_stack_75->GetYaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_13TeV_pt3_stack_75->GetYaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_13TeV_pt3_stack_75->GetYaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_13TeV_pt3_stack_75->GetYaxis()->SetTitleOffset(1.25);
   thsBackground_grouped_wh3l_13TeV_pt3_stack_75->GetYaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_pt3_stack_75->GetZaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_13TeV_pt3_stack_75->GetZaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_13TeV_pt3_stack_75->GetZaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_13TeV_pt3_stack_75->GetZaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_13TeV_pt3_stack_75->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_pt3->SetHistogram(thsBackground_grouped_wh3l_13TeV_pt3_stack_75);
   
   
   TH1D *new_histo_group_Fake_wh3l_13TeV_pt3372 = new TH1D("new_histo_group_Fake_wh3l_13TeV_pt3372","histo_Fake",25,10,200);
   new_histo_group_Fake_wh3l_13TeV_pt3372->SetBinContent(1,6.934264);
   new_histo_group_Fake_wh3l_13TeV_pt3372->SetBinContent(2,2.258629);
   new_histo_group_Fake_wh3l_13TeV_pt3372->SetBinContent(3,0.193214);
   new_histo_group_Fake_wh3l_13TeV_pt3372->SetBinContent(4,0.06599503);
   new_histo_group_Fake_wh3l_13TeV_pt3372->SetBinContent(5,0.2761226);
   new_histo_group_Fake_wh3l_13TeV_pt3372->SetBinError(1,2.369762);
   new_histo_group_Fake_wh3l_13TeV_pt3372->SetBinError(2,0.821977);
   new_histo_group_Fake_wh3l_13TeV_pt3372->SetBinError(3,0.3707911);
   new_histo_group_Fake_wh3l_13TeV_pt3372->SetBinError(4,0.3109068);
   new_histo_group_Fake_wh3l_13TeV_pt3372->SetBinError(5,0.2761226);
   new_histo_group_Fake_wh3l_13TeV_pt3372->SetEntries(109);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_13TeV_pt3372->SetFillColor(ci);
   new_histo_group_Fake_wh3l_13TeV_pt3372->SetFillStyle(3001);

   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_13TeV_pt3372->SetLineColor(ci);
   new_histo_group_Fake_wh3l_13TeV_pt3372->GetXaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_13TeV_pt3372->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_13TeV_pt3372->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_13TeV_pt3372->GetXaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_13TeV_pt3372->GetYaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_13TeV_pt3372->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_13TeV_pt3372->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_13TeV_pt3372->GetYaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_13TeV_pt3372->GetZaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_13TeV_pt3372->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_13TeV_pt3372->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_13TeV_pt3372->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_pt3->Add(new_histo_group_Fake_wh3l_13TeV_pt3,"");
   
   TH1D *new_histo_group_WW_wh3l_13TeV_pt3373 = new TH1D("new_histo_group_WW_wh3l_13TeV_pt3373","histo_WW",25,10,200);
   new_histo_group_WW_wh3l_13TeV_pt3373->SetBinContent(1,0.0447154);
   new_histo_group_WW_wh3l_13TeV_pt3373->SetBinContent(2,0.02951213);
   new_histo_group_WW_wh3l_13TeV_pt3373->SetBinContent(3,0.01447441);
   new_histo_group_WW_wh3l_13TeV_pt3373->SetBinError(1,0.02642765);
   new_histo_group_WW_wh3l_13TeV_pt3373->SetBinError(2,0.02088259);
   new_histo_group_WW_wh3l_13TeV_pt3373->SetBinError(3,0.01447441);
   new_histo_group_WW_wh3l_13TeV_pt3373->SetEntries(6);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_13TeV_pt3373->SetFillColor(ci);
   new_histo_group_WW_wh3l_13TeV_pt3373->SetFillStyle(3001);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_13TeV_pt3373->SetLineColor(ci);
   new_histo_group_WW_wh3l_13TeV_pt3373->GetXaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_13TeV_pt3373->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_13TeV_pt3373->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_13TeV_pt3373->GetXaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_13TeV_pt3373->GetYaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_13TeV_pt3373->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_13TeV_pt3373->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_13TeV_pt3373->GetYaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_13TeV_pt3373->GetZaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_13TeV_pt3373->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_13TeV_pt3373->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_13TeV_pt3373->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_pt3->Add(new_histo_group_WW_wh3l_13TeV_pt3,"");
   
   TH1D *new_histo_group_VVV_wh3l_13TeV_pt3374 = new TH1D("new_histo_group_VVV_wh3l_13TeV_pt3374","histo_VVV",25,10,200);
   new_histo_group_VVV_wh3l_13TeV_pt3374->SetBinContent(1,0.001681405);
   new_histo_group_VVV_wh3l_13TeV_pt3374->SetBinContent(2,0.002136741);
   new_histo_group_VVV_wh3l_13TeV_pt3374->SetBinContent(3,0.002644338);
   new_histo_group_VVV_wh3l_13TeV_pt3374->SetBinContent(4,0.0006343185);
   new_histo_group_VVV_wh3l_13TeV_pt3374->SetBinContent(7,0.0005490761);
   new_histo_group_VVV_wh3l_13TeV_pt3374->SetBinContent(8,0.0006729142);
   new_histo_group_VVV_wh3l_13TeV_pt3374->SetBinError(1,0.001032297);
   new_histo_group_VVV_wh3l_13TeV_pt3374->SetBinError(2,0.001133191);
   new_histo_group_VVV_wh3l_13TeV_pt3374->SetBinError(3,0.001323303);
   new_histo_group_VVV_wh3l_13TeV_pt3374->SetBinError(4,0.0006343185);
   new_histo_group_VVV_wh3l_13TeV_pt3374->SetBinError(7,0.0005490761);
   new_histo_group_VVV_wh3l_13TeV_pt3374->SetBinError(8,0.0006729142);
   new_histo_group_VVV_wh3l_13TeV_pt3374->SetEntries(14);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_13TeV_pt3374->SetFillColor(ci);
   new_histo_group_VVV_wh3l_13TeV_pt3374->SetFillStyle(3001);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_13TeV_pt3374->SetLineColor(ci);
   new_histo_group_VVV_wh3l_13TeV_pt3374->GetXaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_13TeV_pt3374->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_13TeV_pt3374->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_13TeV_pt3374->GetXaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_13TeV_pt3374->GetYaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_13TeV_pt3374->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_13TeV_pt3374->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_13TeV_pt3374->GetYaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_13TeV_pt3374->GetZaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_13TeV_pt3374->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_13TeV_pt3374->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_13TeV_pt3374->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_pt3->Add(new_histo_group_VVV_wh3l_13TeV_pt3,"");
   
   TH1D *new_histo_group_Vg_wh3l_13TeV_pt3375 = new TH1D("new_histo_group_Vg_wh3l_13TeV_pt3375","histo_Vg",25,10,200);
   new_histo_group_Vg_wh3l_13TeV_pt3375->SetBinContent(1,1.177209);
   new_histo_group_Vg_wh3l_13TeV_pt3375->SetBinContent(2,1.346734);
   new_histo_group_Vg_wh3l_13TeV_pt3375->SetBinContent(3,0.1242263);
   new_histo_group_Vg_wh3l_13TeV_pt3375->SetBinError(1,0.3678475);
   new_histo_group_Vg_wh3l_13TeV_pt3375->SetBinError(2,0.4173879);
   new_histo_group_Vg_wh3l_13TeV_pt3375->SetBinError(3,0.1242263);
   new_histo_group_Vg_wh3l_13TeV_pt3375->SetEntries(42);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_13TeV_pt3375->SetFillColor(ci);
   new_histo_group_Vg_wh3l_13TeV_pt3375->SetFillStyle(3001);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_13TeV_pt3375->SetLineColor(ci);
   new_histo_group_Vg_wh3l_13TeV_pt3375->GetXaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_13TeV_pt3375->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_13TeV_pt3375->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_13TeV_pt3375->GetXaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_13TeV_pt3375->GetYaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_13TeV_pt3375->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_13TeV_pt3375->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_13TeV_pt3375->GetYaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_13TeV_pt3375->GetZaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_13TeV_pt3375->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_13TeV_pt3375->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_13TeV_pt3375->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_pt3->Add(new_histo_group_Vg_wh3l_13TeV_pt3,"");
   
   TH1D *new_histo_group_ZZ_wh3l_13TeV_pt3376 = new TH1D("new_histo_group_ZZ_wh3l_13TeV_pt3376","histo_ZZ",25,10,200);
   new_histo_group_ZZ_wh3l_13TeV_pt3376->SetBinContent(1,0.3918297);
   new_histo_group_ZZ_wh3l_13TeV_pt3376->SetBinContent(2,0.1083724);
   new_histo_group_ZZ_wh3l_13TeV_pt3376->SetBinContent(3,0.04510369);
   new_histo_group_ZZ_wh3l_13TeV_pt3376->SetBinContent(4,0.03513683);
   new_histo_group_ZZ_wh3l_13TeV_pt3376->SetBinContent(5,0.04527812);
   new_histo_group_ZZ_wh3l_13TeV_pt3376->SetBinContent(7,0.02088597);
   new_histo_group_ZZ_wh3l_13TeV_pt3376->SetBinError(1,0.1208863);
   new_histo_group_ZZ_wh3l_13TeV_pt3376->SetBinError(2,0.0684451);
   new_histo_group_ZZ_wh3l_13TeV_pt3376->SetBinError(3,0.04510369);
   new_histo_group_ZZ_wh3l_13TeV_pt3376->SetBinError(4,0.03513683);
   new_histo_group_ZZ_wh3l_13TeV_pt3376->SetBinError(5,0.04527812);
   new_histo_group_ZZ_wh3l_13TeV_pt3376->SetBinError(7,0.02088597);
   new_histo_group_ZZ_wh3l_13TeV_pt3376->SetEntries(19);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_13TeV_pt3376->SetFillColor(ci);
   new_histo_group_ZZ_wh3l_13TeV_pt3376->SetFillStyle(3001);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_13TeV_pt3376->SetLineColor(ci);
   new_histo_group_ZZ_wh3l_13TeV_pt3376->GetXaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_13TeV_pt3376->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_13TeV_pt3376->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_13TeV_pt3376->GetXaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_13TeV_pt3376->GetYaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_13TeV_pt3376->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_13TeV_pt3376->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_13TeV_pt3376->GetYaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_13TeV_pt3376->GetZaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_13TeV_pt3376->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_13TeV_pt3376->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_13TeV_pt3376->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_pt3->Add(new_histo_group_ZZ_wh3l_13TeV_pt3,"");
   
   TH1D *new_histo_group_WZ_wh3l_13TeV_pt3377 = new TH1D("new_histo_group_WZ_wh3l_13TeV_pt3377","histo_WZ",25,10,200);
   new_histo_group_WZ_wh3l_13TeV_pt3377->SetBinContent(1,3.557275);
   new_histo_group_WZ_wh3l_13TeV_pt3377->SetBinContent(2,2.087628);
   new_histo_group_WZ_wh3l_13TeV_pt3377->SetBinContent(3,0.8893863);
   new_histo_group_WZ_wh3l_13TeV_pt3377->SetBinContent(4,0.3963468);
   new_histo_group_WZ_wh3l_13TeV_pt3377->SetBinContent(5,0.176475);
   new_histo_group_WZ_wh3l_13TeV_pt3377->SetBinContent(6,0.0933345);
   new_histo_group_WZ_wh3l_13TeV_pt3377->SetBinContent(7,0.07123534);
   new_histo_group_WZ_wh3l_13TeV_pt3377->SetBinContent(8,0.02892352);
   new_histo_group_WZ_wh3l_13TeV_pt3377->SetBinContent(9,0.01669191);
   new_histo_group_WZ_wh3l_13TeV_pt3377->SetBinContent(10,0.0166626);
   new_histo_group_WZ_wh3l_13TeV_pt3377->SetBinContent(11,0.01715306);
   new_histo_group_WZ_wh3l_13TeV_pt3377->SetBinContent(12,0.01787271);
   new_histo_group_WZ_wh3l_13TeV_pt3377->SetBinContent(13,0.005313793);
   new_histo_group_WZ_wh3l_13TeV_pt3377->SetBinContent(15,0.006282572);
   new_histo_group_WZ_wh3l_13TeV_pt3377->SetBinContent(16,0.008634566);
   new_histo_group_WZ_wh3l_13TeV_pt3377->SetBinError(1,0.1391436);
   new_histo_group_WZ_wh3l_13TeV_pt3377->SetBinError(2,0.1068861);
   new_histo_group_WZ_wh3l_13TeV_pt3377->SetBinError(3,0.0689105);
   new_histo_group_WZ_wh3l_13TeV_pt3377->SetBinError(4,0.04576869);
   new_histo_group_WZ_wh3l_13TeV_pt3377->SetBinError(5,0.03041322);
   new_histo_group_WZ_wh3l_13TeV_pt3377->SetBinError(6,0.02253199);
   new_histo_group_WZ_wh3l_13TeV_pt3377->SetBinError(7,0.01953239);
   new_histo_group_WZ_wh3l_13TeV_pt3377->SetBinError(8,0.0129566);
   new_histo_group_WZ_wh3l_13TeV_pt3377->SetBinError(9,0.009638129);
   new_histo_group_WZ_wh3l_13TeV_pt3377->SetBinError(10,0.009704447);
   new_histo_group_WZ_wh3l_13TeV_pt3377->SetBinError(11,0.01000479);
   new_histo_group_WZ_wh3l_13TeV_pt3377->SetBinError(12,0.01039688);
   new_histo_group_WZ_wh3l_13TeV_pt3377->SetBinError(13,0.005313793);
   new_histo_group_WZ_wh3l_13TeV_pt3377->SetBinError(15,0.006282572);
   new_histo_group_WZ_wh3l_13TeV_pt3377->SetBinError(16,0.006589555);
   new_histo_group_WZ_wh3l_13TeV_pt3377->SetEntries(1516);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_13TeV_pt3377->SetFillColor(ci);
   new_histo_group_WZ_wh3l_13TeV_pt3377->SetFillStyle(3001);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_13TeV_pt3377->SetLineColor(ci);
   new_histo_group_WZ_wh3l_13TeV_pt3377->GetXaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_13TeV_pt3377->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_13TeV_pt3377->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_13TeV_pt3377->GetXaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_13TeV_pt3377->GetYaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_13TeV_pt3377->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_13TeV_pt3377->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_13TeV_pt3377->GetYaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_13TeV_pt3377->GetZaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_13TeV_pt3377->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_13TeV_pt3377->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_13TeV_pt3377->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_pt3->Add(new_histo_group_WZ_wh3l_13TeV_pt3,"");
   
   TH1D *new_histo_group_Higgs_wh3l_13TeV_pt3378 = new TH1D("new_histo_group_Higgs_wh3l_13TeV_pt3378","histo_H_htt",25,10,200);
   new_histo_group_Higgs_wh3l_13TeV_pt3378->SetBinContent(1,0.3195296);
   new_histo_group_Higgs_wh3l_13TeV_pt3378->SetBinContent(2,0.2478861);
   new_histo_group_Higgs_wh3l_13TeV_pt3378->SetBinContent(3,0.1214192);
   new_histo_group_Higgs_wh3l_13TeV_pt3378->SetBinContent(4,0.0681104);
   new_histo_group_Higgs_wh3l_13TeV_pt3378->SetBinContent(5,0.03692737);
   new_histo_group_Higgs_wh3l_13TeV_pt3378->SetBinContent(6,0.01798341);
   new_histo_group_Higgs_wh3l_13TeV_pt3378->SetBinContent(7,0.008192972);
   new_histo_group_Higgs_wh3l_13TeV_pt3378->SetBinContent(8,0.01052666);
   new_histo_group_Higgs_wh3l_13TeV_pt3378->SetBinContent(9,0.0009255391);
   new_histo_group_Higgs_wh3l_13TeV_pt3378->SetBinContent(10,0.002251168);
   new_histo_group_Higgs_wh3l_13TeV_pt3378->SetBinContent(11,-0.0001113016);
   new_histo_group_Higgs_wh3l_13TeV_pt3378->SetBinContent(12,0.0002134369);
   new_histo_group_Higgs_wh3l_13TeV_pt3378->SetBinContent(15,0.001604902);
   new_histo_group_Higgs_wh3l_13TeV_pt3378->SetBinContent(16,0.0002656808);
   new_histo_group_Higgs_wh3l_13TeV_pt3378->SetBinError(1,0.0188482);
   new_histo_group_Higgs_wh3l_13TeV_pt3378->SetBinError(2,0.01723243);
   new_histo_group_Higgs_wh3l_13TeV_pt3378->SetBinError(3,0.01220579);
   new_histo_group_Higgs_wh3l_13TeV_pt3378->SetBinError(4,0.009130746);
   new_histo_group_Higgs_wh3l_13TeV_pt3378->SetBinError(5,0.006681694);
   new_histo_group_Higgs_wh3l_13TeV_pt3378->SetBinError(6,0.004599961);
   new_histo_group_Higgs_wh3l_13TeV_pt3378->SetBinError(7,0.00301678);
   new_histo_group_Higgs_wh3l_13TeV_pt3378->SetBinError(8,0.00385933);
   new_histo_group_Higgs_wh3l_13TeV_pt3378->SetBinError(9,0.0008822765);
   new_histo_group_Higgs_wh3l_13TeV_pt3378->SetBinError(10,0.001854013);
   new_histo_group_Higgs_wh3l_13TeV_pt3378->SetBinError(11,0.0003762221);
   new_histo_group_Higgs_wh3l_13TeV_pt3378->SetBinError(12,0.0002134369);
   new_histo_group_Higgs_wh3l_13TeV_pt3378->SetBinError(15,0.001604902);
   new_histo_group_Higgs_wh3l_13TeV_pt3378->SetBinError(16,0.0002100476);
   new_histo_group_Higgs_wh3l_13TeV_pt3378->SetEntries(1360);
   new_histo_group_Higgs_wh3l_13TeV_pt3378->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_13TeV_pt3378->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_13TeV_pt3378->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_13TeV_pt3378->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_13TeV_pt3378->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_pt3378->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_pt3378->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_13TeV_pt3378->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_13TeV_pt3378->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_pt3378->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_pt3378->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_13TeV_pt3378->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_13TeV_pt3378->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_pt3378->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_pt3378->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_pt3->Add(new_histo_group_Higgs_wh3l_13TeV_pt3,"");
   thsBackground_grouped_wh3l_13TeV_pt3->Draw("hist same");
   
   thsSignal_grouped_wh3l_13TeV_pt3 = new THStack();
   thsSignal_grouped_wh3l_13TeV_pt3->SetName("thsSignal_grouped_wh3l_13TeV_pt3");
   thsSignal_grouped_wh3l_13TeV_pt3->SetTitle("thsSignal_grouped_wh3l_13TeV_pt3");
   
   TH1F *thsSignal_grouped_wh3l_13TeV_pt3_stack_76 = new TH1F("thsSignal_grouped_wh3l_13TeV_pt3_stack_76","thsSignal_grouped_wh3l_13TeV_pt3",25,10,200);
   thsSignal_grouped_wh3l_13TeV_pt3_stack_76->SetMinimum(-0.0004875237);
   thsSignal_grouped_wh3l_13TeV_pt3_stack_76->SetMaximum(0.3552966);
   thsSignal_grouped_wh3l_13TeV_pt3_stack_76->SetDirectory(0);
   thsSignal_grouped_wh3l_13TeV_pt3_stack_76->SetStats(0);
   thsSignal_grouped_wh3l_13TeV_pt3_stack_76->SetLineStyle(0);
   thsSignal_grouped_wh3l_13TeV_pt3_stack_76->SetMarkerStyle(20);
   thsSignal_grouped_wh3l_13TeV_pt3_stack_76->GetXaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_13TeV_pt3_stack_76->GetXaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_13TeV_pt3_stack_76->GetXaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_13TeV_pt3_stack_76->GetXaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_13TeV_pt3_stack_76->GetXaxis()->SetTitleOffset(0.9);
   thsSignal_grouped_wh3l_13TeV_pt3_stack_76->GetXaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_13TeV_pt3_stack_76->GetYaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_13TeV_pt3_stack_76->GetYaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_13TeV_pt3_stack_76->GetYaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_13TeV_pt3_stack_76->GetYaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_13TeV_pt3_stack_76->GetYaxis()->SetTitleOffset(1.25);
   thsSignal_grouped_wh3l_13TeV_pt3_stack_76->GetYaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_13TeV_pt3_stack_76->GetZaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_13TeV_pt3_stack_76->GetZaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_13TeV_pt3_stack_76->GetZaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_13TeV_pt3_stack_76->GetZaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_13TeV_pt3_stack_76->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_13TeV_pt3->SetHistogram(thsSignal_grouped_wh3l_13TeV_pt3_stack_76);
   
   
   TH1D *new_histo_group_Higgs_wh3l_13TeV_pt3379 = new TH1D("new_histo_group_Higgs_wh3l_13TeV_pt3379","histo_H_htt",25,10,200);
   new_histo_group_Higgs_wh3l_13TeV_pt3379->SetBinContent(1,0.3195296);
   new_histo_group_Higgs_wh3l_13TeV_pt3379->SetBinContent(2,0.2478861);
   new_histo_group_Higgs_wh3l_13TeV_pt3379->SetBinContent(3,0.1214192);
   new_histo_group_Higgs_wh3l_13TeV_pt3379->SetBinContent(4,0.0681104);
   new_histo_group_Higgs_wh3l_13TeV_pt3379->SetBinContent(5,0.03692737);
   new_histo_group_Higgs_wh3l_13TeV_pt3379->SetBinContent(6,0.01798341);
   new_histo_group_Higgs_wh3l_13TeV_pt3379->SetBinContent(7,0.008192972);
   new_histo_group_Higgs_wh3l_13TeV_pt3379->SetBinContent(8,0.01052666);
   new_histo_group_Higgs_wh3l_13TeV_pt3379->SetBinContent(9,0.0009255391);
   new_histo_group_Higgs_wh3l_13TeV_pt3379->SetBinContent(10,0.002251168);
   new_histo_group_Higgs_wh3l_13TeV_pt3379->SetBinContent(11,-0.0001113016);
   new_histo_group_Higgs_wh3l_13TeV_pt3379->SetBinContent(12,0.0002134369);
   new_histo_group_Higgs_wh3l_13TeV_pt3379->SetBinContent(15,0.001604902);
   new_histo_group_Higgs_wh3l_13TeV_pt3379->SetBinContent(16,0.0002656808);
   new_histo_group_Higgs_wh3l_13TeV_pt3379->SetBinError(1,0.0188482);
   new_histo_group_Higgs_wh3l_13TeV_pt3379->SetBinError(2,0.01723243);
   new_histo_group_Higgs_wh3l_13TeV_pt3379->SetBinError(3,0.01220579);
   new_histo_group_Higgs_wh3l_13TeV_pt3379->SetBinError(4,0.009130746);
   new_histo_group_Higgs_wh3l_13TeV_pt3379->SetBinError(5,0.006681694);
   new_histo_group_Higgs_wh3l_13TeV_pt3379->SetBinError(6,0.004599961);
   new_histo_group_Higgs_wh3l_13TeV_pt3379->SetBinError(7,0.00301678);
   new_histo_group_Higgs_wh3l_13TeV_pt3379->SetBinError(8,0.00385933);
   new_histo_group_Higgs_wh3l_13TeV_pt3379->SetBinError(9,0.0008822765);
   new_histo_group_Higgs_wh3l_13TeV_pt3379->SetBinError(10,0.001854013);
   new_histo_group_Higgs_wh3l_13TeV_pt3379->SetBinError(11,0.0003762221);
   new_histo_group_Higgs_wh3l_13TeV_pt3379->SetBinError(12,0.0002134369);
   new_histo_group_Higgs_wh3l_13TeV_pt3379->SetBinError(15,0.001604902);
   new_histo_group_Higgs_wh3l_13TeV_pt3379->SetBinError(16,0.0002100476);
   new_histo_group_Higgs_wh3l_13TeV_pt3379->SetEntries(1360);
   new_histo_group_Higgs_wh3l_13TeV_pt3379->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_13TeV_pt3379->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_13TeV_pt3379->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_13TeV_pt3379->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_13TeV_pt3379->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_pt3379->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_pt3379->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_13TeV_pt3379->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_13TeV_pt3379->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_pt3379->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_pt3379->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_13TeV_pt3379->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_13TeV_pt3379->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_pt3379->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_pt3379->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_13TeV_pt3->Add(new_histo_group_Higgs_wh3l_13TeV_pt3,"");
   thsSignal_grouped_wh3l_13TeV_pt3->Draw("hist same noclear");
   
   Double_t _fx3075[25] = {
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
   Double_t _fy3075[25] = {
   12.10697,
   5.833012,
   1.269049,
   0.4981129,
   0.4978757,
   0.0933345,
   0.09267039,
   0.02959644,
   0.01669191,
   0.0166626,
   0.01715306,
   0.01787271,
   0.005313793,
   0,
   0.006282572,
   0.008634566,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _felx3075[25] = {
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
   Double_t _fely3075[25] = {
   3.89207,
   1.64278,
   0.4526896,
   0.1494394,
   0.3648647,
   0.02260402,
   0.04100865,
   0.01365208,
   0.00964543,
   0.009720106,
   0.01001349,
   0.01042118,
   0.005320137,
   0,
   0.006282842,
   0.006599031,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fehx3075[25] = {
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
   Double_t _fehy3075[25] = {
   3.891012,
   1.642727,
   0.6287287,
   0.3931666,
   0.3648627,
   0.02259443,
   0.04100412,
   0.01365487,
   0.009643755,
   0.009721527,
   0.01001044,
   0.01042405,
   0.005320925,
   0,
   0.006282845,
   0.006600415,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(25,_fx3075,_fy3075,_felx3075,_fehx3075,_fely3075,_fehy3075);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(12);
   grae->SetFillStyle(3004);
   grae->SetLineColor(12);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3075 = new TH1F("Graph_Graph3075","",100,0,219);
   Graph_Graph3075->SetMinimum(-1.599806);
   Graph_Graph3075->SetMaximum(17.59779);
   Graph_Graph3075->SetDirectory(0);
   Graph_Graph3075->SetStats(0);
   Graph_Graph3075->SetLineStyle(0);
   Graph_Graph3075->SetMarkerStyle(20);
   Graph_Graph3075->GetXaxis()->SetLabelFont(42);
   Graph_Graph3075->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3075->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3075->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3075->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3075->GetXaxis()->SetTitleFont(42);
   Graph_Graph3075->GetYaxis()->SetLabelFont(42);
   Graph_Graph3075->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3075->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3075->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3075->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3075->GetYaxis()->SetTitleFont(42);
   Graph_Graph3075->GetZaxis()->SetLabelFont(42);
   Graph_Graph3075->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3075->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3075->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3075->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3075);
   
   grae->Draw("2");
   
   Double_t _fx3076[25] = {
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
   Double_t _fy3076[25] = {
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
   Double_t _felx3076[25] = {
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
   Double_t _fely3076[25] = {
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
   Double_t _fehx3076[25] = {
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
   Double_t _fehy3076[25] = {
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
   grae = new TGraphAsymmErrors(25,_fx3076,_fy3076,_felx3076,_fehx3076,_fely3076,_fehy3076);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(1);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3076 = new TH1F("Graph_Graph3076","",100,0,219);
   Graph_Graph3076->SetMinimum(0);
   Graph_Graph3076->SetMaximum(1.262698);
   Graph_Graph3076->SetDirectory(0);
   Graph_Graph3076->SetStats(0);
   Graph_Graph3076->SetLineStyle(0);
   Graph_Graph3076->SetMarkerStyle(20);
   Graph_Graph3076->GetXaxis()->SetLabelFont(42);
   Graph_Graph3076->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3076->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3076->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3076->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3076->GetXaxis()->SetTitleFont(42);
   Graph_Graph3076->GetYaxis()->SetLabelFont(42);
   Graph_Graph3076->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3076->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3076->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3076->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3076->GetYaxis()->SetTitleFont(42);
   Graph_Graph3076->GetZaxis()->SetLabelFont(42);
   Graph_Graph3076->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3076->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3076->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3076->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3076);
   
   grae->Draw("p0");
   
   TLegend *leg = new TLegend(0.2,0.7,0.8,0.9,NULL,"brNDC");
   leg->SetTextFont(62);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("new_histo_group_Fake_wh3l_13TeV_pt3","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_13TeV_pt3","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_13TeV_pt3","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_13TeV_pt3","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Fake_wh3l_13TeV_pt3","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_13TeV_pt3","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_13TeV_pt3","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_13TeV_pt3","WZ","F");

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
   
   TH1F *hframe_copy380 = new TH1F("hframe_copy380","",1000,10,200);
   hframe_copy380->SetMinimum(0);
   hframe_copy380->SetMaximum(31.06626);
   hframe_copy380->SetDirectory(0);
   hframe_copy380->SetStats(0);
   hframe_copy380->SetLineStyle(0);
   hframe_copy380->SetMarkerStyle(20);
   hframe_copy380->GetXaxis()->SetTitle("lept3_p_{T} [GeV]");
   hframe_copy380->GetXaxis()->SetNdivisions(506);
   hframe_copy380->GetXaxis()->SetLabelFont(42);
   hframe_copy380->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy380->GetXaxis()->SetLabelSize(0.05);
   hframe_copy380->GetXaxis()->SetTitleSize(0.06);
   hframe_copy380->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy380->GetXaxis()->SetTitleFont(42);
   hframe_copy380->GetYaxis()->SetTitle("Events");
   hframe_copy380->GetYaxis()->SetLabelFont(42);
   hframe_copy380->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy380->GetYaxis()->SetLabelSize(0.05);
   hframe_copy380->GetYaxis()->SetTitleSize(0.06);
   hframe_copy380->GetYaxis()->SetTitleOffset(1.25);
   hframe_copy380->GetYaxis()->SetTitleFont(42);
   hframe_copy380->GetZaxis()->SetLabelFont(42);
   hframe_copy380->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy380->GetZaxis()->SetLabelSize(0.05);
   hframe_copy380->GetZaxis()->SetTitleSize(0.06);
   hframe_copy380->GetZaxis()->SetTitleFont(42);
   hframe_copy380->Draw("sameaxis");
   ccwh3l_13TeV_pt3->Modified();
   ccwh3l_13TeV_pt3->cd();
   ccwh3l_13TeV_pt3->SetSelected(ccwh3l_13TeV_pt3);
}
