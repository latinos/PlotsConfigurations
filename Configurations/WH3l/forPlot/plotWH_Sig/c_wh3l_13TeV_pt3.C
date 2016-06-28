void c_wh3l_13TeV_pt3()
{
//=========Macro generated from canvas: ccwh3l_13TeV_pt3/cc
//=========  (Tue Jun 28 13:56:25 2016) by ROOT version6.02/13
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
   
   TH1F *hframe241 = new TH1F("hframe241","",1000,10,200);
   hframe241->SetMinimum(0);
   hframe241->SetMaximum(31.06626);
   hframe241->SetDirectory(0);
   hframe241->SetStats(0);
   hframe241->SetLineStyle(0);
   hframe241->SetMarkerStyle(20);
   hframe241->GetXaxis()->SetTitle("lept3_p_{T} [GeV]");
   hframe241->GetXaxis()->SetNdivisions(506);
   hframe241->GetXaxis()->SetLabelFont(42);
   hframe241->GetXaxis()->SetLabelOffset(0.007);
   hframe241->GetXaxis()->SetLabelSize(0.05);
   hframe241->GetXaxis()->SetTitleSize(0.06);
   hframe241->GetXaxis()->SetTitleOffset(0.9);
   hframe241->GetXaxis()->SetTitleFont(42);
   hframe241->GetYaxis()->SetTitle("Events");
   hframe241->GetYaxis()->SetLabelFont(42);
   hframe241->GetYaxis()->SetLabelOffset(0.007);
   hframe241->GetYaxis()->SetLabelSize(0.05);
   hframe241->GetYaxis()->SetTitleSize(0.06);
   hframe241->GetYaxis()->SetTitleOffset(1.25);
   hframe241->GetYaxis()->SetTitleFont(42);
   hframe241->GetZaxis()->SetLabelFont(42);
   hframe241->GetZaxis()->SetLabelOffset(0.007);
   hframe241->GetZaxis()->SetLabelSize(0.05);
   hframe241->GetZaxis()->SetTitleSize(0.06);
   hframe241->GetZaxis()->SetTitleFont(42);
   hframe241->Draw(" ");
   
   THStack *thsBackground_grouped_wh3l_13TeV_pt3 = new THStack();
   thsBackground_grouped_wh3l_13TeV_pt3->SetName("thsBackground_grouped_wh3l_13TeV_pt3");
   thsBackground_grouped_wh3l_13TeV_pt3->SetTitle("thsBackground_grouped_wh3l_13TeV_pt3");
   
   TH1F *thsBackground_grouped_wh3l_13TeV_pt3_stack_49 = new TH1F("thsBackground_grouped_wh3l_13TeV_pt3_stack_49","thsBackground_grouped_wh3l_13TeV_pt3",25,10,200);
   thsBackground_grouped_wh3l_13TeV_pt3_stack_49->SetMinimum(-0.2449118);
   thsBackground_grouped_wh3l_13TeV_pt3_stack_49->SetMaximum(13.04783);
   thsBackground_grouped_wh3l_13TeV_pt3_stack_49->SetDirectory(0);
   thsBackground_grouped_wh3l_13TeV_pt3_stack_49->SetStats(0);
   thsBackground_grouped_wh3l_13TeV_pt3_stack_49->SetLineStyle(0);
   thsBackground_grouped_wh3l_13TeV_pt3_stack_49->SetMarkerStyle(20);
   thsBackground_grouped_wh3l_13TeV_pt3_stack_49->GetXaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_13TeV_pt3_stack_49->GetXaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_13TeV_pt3_stack_49->GetXaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_13TeV_pt3_stack_49->GetXaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_13TeV_pt3_stack_49->GetXaxis()->SetTitleOffset(0.9);
   thsBackground_grouped_wh3l_13TeV_pt3_stack_49->GetXaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_pt3_stack_49->GetYaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_13TeV_pt3_stack_49->GetYaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_13TeV_pt3_stack_49->GetYaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_13TeV_pt3_stack_49->GetYaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_13TeV_pt3_stack_49->GetYaxis()->SetTitleOffset(1.25);
   thsBackground_grouped_wh3l_13TeV_pt3_stack_49->GetYaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_pt3_stack_49->GetZaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_13TeV_pt3_stack_49->GetZaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_13TeV_pt3_stack_49->GetZaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_13TeV_pt3_stack_49->GetZaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_13TeV_pt3_stack_49->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_pt3->SetHistogram(thsBackground_grouped_wh3l_13TeV_pt3_stack_49);
   
   
   TH1D *new_histo_group_Fake_wh3l_13TeV_pt3242 = new TH1D("new_histo_group_Fake_wh3l_13TeV_pt3242","histo_Fake",25,10,200);
   new_histo_group_Fake_wh3l_13TeV_pt3242->SetBinContent(1,6.934264);
   new_histo_group_Fake_wh3l_13TeV_pt3242->SetBinContent(2,2.258629);
   new_histo_group_Fake_wh3l_13TeV_pt3242->SetBinContent(3,0.193214);
   new_histo_group_Fake_wh3l_13TeV_pt3242->SetBinContent(4,0.06599503);
   new_histo_group_Fake_wh3l_13TeV_pt3242->SetBinContent(5,0.2761226);
   new_histo_group_Fake_wh3l_13TeV_pt3242->SetBinError(1,2.369762);
   new_histo_group_Fake_wh3l_13TeV_pt3242->SetBinError(2,0.821977);
   new_histo_group_Fake_wh3l_13TeV_pt3242->SetBinError(3,0.3707911);
   new_histo_group_Fake_wh3l_13TeV_pt3242->SetBinError(4,0.3109068);
   new_histo_group_Fake_wh3l_13TeV_pt3242->SetBinError(5,0.2761226);
   new_histo_group_Fake_wh3l_13TeV_pt3242->SetEntries(109);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_13TeV_pt3242->SetFillColor(ci);
   new_histo_group_Fake_wh3l_13TeV_pt3242->SetFillStyle(3001);

   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_13TeV_pt3242->SetLineColor(ci);
   new_histo_group_Fake_wh3l_13TeV_pt3242->GetXaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_13TeV_pt3242->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_13TeV_pt3242->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_13TeV_pt3242->GetXaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_13TeV_pt3242->GetYaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_13TeV_pt3242->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_13TeV_pt3242->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_13TeV_pt3242->GetYaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_13TeV_pt3242->GetZaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_13TeV_pt3242->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_13TeV_pt3242->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_13TeV_pt3242->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_pt3->Add(new_histo_group_Fake_wh3l_13TeV_pt3,"");
   
   TH1D *new_histo_group_WW_wh3l_13TeV_pt3243 = new TH1D("new_histo_group_WW_wh3l_13TeV_pt3243","histo_WW",25,10,200);
   new_histo_group_WW_wh3l_13TeV_pt3243->SetBinContent(1,0.0447154);
   new_histo_group_WW_wh3l_13TeV_pt3243->SetBinContent(2,0.02951213);
   new_histo_group_WW_wh3l_13TeV_pt3243->SetBinContent(3,0.01447441);
   new_histo_group_WW_wh3l_13TeV_pt3243->SetBinError(1,0.02642765);
   new_histo_group_WW_wh3l_13TeV_pt3243->SetBinError(2,0.02088259);
   new_histo_group_WW_wh3l_13TeV_pt3243->SetBinError(3,0.01447441);
   new_histo_group_WW_wh3l_13TeV_pt3243->SetEntries(6);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_13TeV_pt3243->SetFillColor(ci);
   new_histo_group_WW_wh3l_13TeV_pt3243->SetFillStyle(3001);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_13TeV_pt3243->SetLineColor(ci);
   new_histo_group_WW_wh3l_13TeV_pt3243->GetXaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_13TeV_pt3243->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_13TeV_pt3243->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_13TeV_pt3243->GetXaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_13TeV_pt3243->GetYaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_13TeV_pt3243->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_13TeV_pt3243->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_13TeV_pt3243->GetYaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_13TeV_pt3243->GetZaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_13TeV_pt3243->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_13TeV_pt3243->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_13TeV_pt3243->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_pt3->Add(new_histo_group_WW_wh3l_13TeV_pt3,"");
   
   TH1D *new_histo_group_VVV_wh3l_13TeV_pt3244 = new TH1D("new_histo_group_VVV_wh3l_13TeV_pt3244","histo_VVV",25,10,200);
   new_histo_group_VVV_wh3l_13TeV_pt3244->SetBinContent(1,0.001681405);
   new_histo_group_VVV_wh3l_13TeV_pt3244->SetBinContent(2,0.002136741);
   new_histo_group_VVV_wh3l_13TeV_pt3244->SetBinContent(3,0.002644338);
   new_histo_group_VVV_wh3l_13TeV_pt3244->SetBinContent(4,0.0006343185);
   new_histo_group_VVV_wh3l_13TeV_pt3244->SetBinContent(7,0.0005490761);
   new_histo_group_VVV_wh3l_13TeV_pt3244->SetBinContent(8,0.0006729142);
   new_histo_group_VVV_wh3l_13TeV_pt3244->SetBinError(1,0.001032297);
   new_histo_group_VVV_wh3l_13TeV_pt3244->SetBinError(2,0.001133191);
   new_histo_group_VVV_wh3l_13TeV_pt3244->SetBinError(3,0.001323303);
   new_histo_group_VVV_wh3l_13TeV_pt3244->SetBinError(4,0.0006343185);
   new_histo_group_VVV_wh3l_13TeV_pt3244->SetBinError(7,0.0005490761);
   new_histo_group_VVV_wh3l_13TeV_pt3244->SetBinError(8,0.0006729142);
   new_histo_group_VVV_wh3l_13TeV_pt3244->SetEntries(14);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_13TeV_pt3244->SetFillColor(ci);
   new_histo_group_VVV_wh3l_13TeV_pt3244->SetFillStyle(3001);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_13TeV_pt3244->SetLineColor(ci);
   new_histo_group_VVV_wh3l_13TeV_pt3244->GetXaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_13TeV_pt3244->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_13TeV_pt3244->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_13TeV_pt3244->GetXaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_13TeV_pt3244->GetYaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_13TeV_pt3244->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_13TeV_pt3244->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_13TeV_pt3244->GetYaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_13TeV_pt3244->GetZaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_13TeV_pt3244->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_13TeV_pt3244->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_13TeV_pt3244->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_pt3->Add(new_histo_group_VVV_wh3l_13TeV_pt3,"");
   
   TH1D *new_histo_group_Vg_wh3l_13TeV_pt3245 = new TH1D("new_histo_group_Vg_wh3l_13TeV_pt3245","histo_Vg",25,10,200);
   new_histo_group_Vg_wh3l_13TeV_pt3245->SetBinContent(1,1.177209);
   new_histo_group_Vg_wh3l_13TeV_pt3245->SetBinContent(2,1.346734);
   new_histo_group_Vg_wh3l_13TeV_pt3245->SetBinContent(3,0.1242263);
   new_histo_group_Vg_wh3l_13TeV_pt3245->SetBinError(1,0.3678475);
   new_histo_group_Vg_wh3l_13TeV_pt3245->SetBinError(2,0.4173879);
   new_histo_group_Vg_wh3l_13TeV_pt3245->SetBinError(3,0.1242263);
   new_histo_group_Vg_wh3l_13TeV_pt3245->SetEntries(42);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_13TeV_pt3245->SetFillColor(ci);
   new_histo_group_Vg_wh3l_13TeV_pt3245->SetFillStyle(3001);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_13TeV_pt3245->SetLineColor(ci);
   new_histo_group_Vg_wh3l_13TeV_pt3245->GetXaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_13TeV_pt3245->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_13TeV_pt3245->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_13TeV_pt3245->GetXaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_13TeV_pt3245->GetYaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_13TeV_pt3245->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_13TeV_pt3245->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_13TeV_pt3245->GetYaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_13TeV_pt3245->GetZaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_13TeV_pt3245->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_13TeV_pt3245->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_13TeV_pt3245->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_pt3->Add(new_histo_group_Vg_wh3l_13TeV_pt3,"");
   
   TH1D *new_histo_group_ZZ_wh3l_13TeV_pt3246 = new TH1D("new_histo_group_ZZ_wh3l_13TeV_pt3246","histo_ZZ",25,10,200);
   new_histo_group_ZZ_wh3l_13TeV_pt3246->SetBinContent(1,0.3918297);
   new_histo_group_ZZ_wh3l_13TeV_pt3246->SetBinContent(2,0.1083724);
   new_histo_group_ZZ_wh3l_13TeV_pt3246->SetBinContent(3,0.04510369);
   new_histo_group_ZZ_wh3l_13TeV_pt3246->SetBinContent(4,0.03513683);
   new_histo_group_ZZ_wh3l_13TeV_pt3246->SetBinContent(5,0.04527812);
   new_histo_group_ZZ_wh3l_13TeV_pt3246->SetBinContent(7,0.02088597);
   new_histo_group_ZZ_wh3l_13TeV_pt3246->SetBinError(1,0.1208863);
   new_histo_group_ZZ_wh3l_13TeV_pt3246->SetBinError(2,0.0684451);
   new_histo_group_ZZ_wh3l_13TeV_pt3246->SetBinError(3,0.04510369);
   new_histo_group_ZZ_wh3l_13TeV_pt3246->SetBinError(4,0.03513683);
   new_histo_group_ZZ_wh3l_13TeV_pt3246->SetBinError(5,0.04527812);
   new_histo_group_ZZ_wh3l_13TeV_pt3246->SetBinError(7,0.02088597);
   new_histo_group_ZZ_wh3l_13TeV_pt3246->SetEntries(19);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_13TeV_pt3246->SetFillColor(ci);
   new_histo_group_ZZ_wh3l_13TeV_pt3246->SetFillStyle(3001);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_13TeV_pt3246->SetLineColor(ci);
   new_histo_group_ZZ_wh3l_13TeV_pt3246->GetXaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_13TeV_pt3246->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_13TeV_pt3246->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_13TeV_pt3246->GetXaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_13TeV_pt3246->GetYaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_13TeV_pt3246->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_13TeV_pt3246->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_13TeV_pt3246->GetYaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_13TeV_pt3246->GetZaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_13TeV_pt3246->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_13TeV_pt3246->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_13TeV_pt3246->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_pt3->Add(new_histo_group_ZZ_wh3l_13TeV_pt3,"");
   
   TH1D *new_histo_group_WZ_wh3l_13TeV_pt3247 = new TH1D("new_histo_group_WZ_wh3l_13TeV_pt3247","histo_WZ",25,10,200);
   new_histo_group_WZ_wh3l_13TeV_pt3247->SetBinContent(1,3.557275);
   new_histo_group_WZ_wh3l_13TeV_pt3247->SetBinContent(2,2.087628);
   new_histo_group_WZ_wh3l_13TeV_pt3247->SetBinContent(3,0.8893863);
   new_histo_group_WZ_wh3l_13TeV_pt3247->SetBinContent(4,0.3963468);
   new_histo_group_WZ_wh3l_13TeV_pt3247->SetBinContent(5,0.176475);
   new_histo_group_WZ_wh3l_13TeV_pt3247->SetBinContent(6,0.0933345);
   new_histo_group_WZ_wh3l_13TeV_pt3247->SetBinContent(7,0.07123534);
   new_histo_group_WZ_wh3l_13TeV_pt3247->SetBinContent(8,0.02892352);
   new_histo_group_WZ_wh3l_13TeV_pt3247->SetBinContent(9,0.01669191);
   new_histo_group_WZ_wh3l_13TeV_pt3247->SetBinContent(10,0.0166626);
   new_histo_group_WZ_wh3l_13TeV_pt3247->SetBinContent(11,0.01715306);
   new_histo_group_WZ_wh3l_13TeV_pt3247->SetBinContent(12,0.01787271);
   new_histo_group_WZ_wh3l_13TeV_pt3247->SetBinContent(13,0.005313793);
   new_histo_group_WZ_wh3l_13TeV_pt3247->SetBinContent(15,0.006282572);
   new_histo_group_WZ_wh3l_13TeV_pt3247->SetBinContent(16,0.008634566);
   new_histo_group_WZ_wh3l_13TeV_pt3247->SetBinError(1,0.1391436);
   new_histo_group_WZ_wh3l_13TeV_pt3247->SetBinError(2,0.1068861);
   new_histo_group_WZ_wh3l_13TeV_pt3247->SetBinError(3,0.0689105);
   new_histo_group_WZ_wh3l_13TeV_pt3247->SetBinError(4,0.04576869);
   new_histo_group_WZ_wh3l_13TeV_pt3247->SetBinError(5,0.03041322);
   new_histo_group_WZ_wh3l_13TeV_pt3247->SetBinError(6,0.02253199);
   new_histo_group_WZ_wh3l_13TeV_pt3247->SetBinError(7,0.01953239);
   new_histo_group_WZ_wh3l_13TeV_pt3247->SetBinError(8,0.0129566);
   new_histo_group_WZ_wh3l_13TeV_pt3247->SetBinError(9,0.009638129);
   new_histo_group_WZ_wh3l_13TeV_pt3247->SetBinError(10,0.009704447);
   new_histo_group_WZ_wh3l_13TeV_pt3247->SetBinError(11,0.01000479);
   new_histo_group_WZ_wh3l_13TeV_pt3247->SetBinError(12,0.01039688);
   new_histo_group_WZ_wh3l_13TeV_pt3247->SetBinError(13,0.005313793);
   new_histo_group_WZ_wh3l_13TeV_pt3247->SetBinError(15,0.006282572);
   new_histo_group_WZ_wh3l_13TeV_pt3247->SetBinError(16,0.006589555);
   new_histo_group_WZ_wh3l_13TeV_pt3247->SetEntries(1516);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_13TeV_pt3247->SetFillColor(ci);
   new_histo_group_WZ_wh3l_13TeV_pt3247->SetFillStyle(3001);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_13TeV_pt3247->SetLineColor(ci);
   new_histo_group_WZ_wh3l_13TeV_pt3247->GetXaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_13TeV_pt3247->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_13TeV_pt3247->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_13TeV_pt3247->GetXaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_13TeV_pt3247->GetYaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_13TeV_pt3247->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_13TeV_pt3247->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_13TeV_pt3247->GetYaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_13TeV_pt3247->GetZaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_13TeV_pt3247->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_13TeV_pt3247->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_13TeV_pt3247->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_pt3->Add(new_histo_group_WZ_wh3l_13TeV_pt3,"");
   
   TH1D *new_histo_group_Higgs_wh3l_13TeV_pt3248 = new TH1D("new_histo_group_Higgs_wh3l_13TeV_pt3248","histo_H_htt",25,10,200);
   new_histo_group_Higgs_wh3l_13TeV_pt3248->SetBinContent(1,0.3195296);
   new_histo_group_Higgs_wh3l_13TeV_pt3248->SetBinContent(2,0.2478861);
   new_histo_group_Higgs_wh3l_13TeV_pt3248->SetBinContent(3,0.1214192);
   new_histo_group_Higgs_wh3l_13TeV_pt3248->SetBinContent(4,0.0681104);
   new_histo_group_Higgs_wh3l_13TeV_pt3248->SetBinContent(5,0.03692737);
   new_histo_group_Higgs_wh3l_13TeV_pt3248->SetBinContent(6,0.01798341);
   new_histo_group_Higgs_wh3l_13TeV_pt3248->SetBinContent(7,0.008192972);
   new_histo_group_Higgs_wh3l_13TeV_pt3248->SetBinContent(8,0.01052666);
   new_histo_group_Higgs_wh3l_13TeV_pt3248->SetBinContent(9,0.0009255391);
   new_histo_group_Higgs_wh3l_13TeV_pt3248->SetBinContent(10,0.002251168);
   new_histo_group_Higgs_wh3l_13TeV_pt3248->SetBinContent(11,-0.0001113016);
   new_histo_group_Higgs_wh3l_13TeV_pt3248->SetBinContent(12,0.0002134369);
   new_histo_group_Higgs_wh3l_13TeV_pt3248->SetBinContent(15,0.001604902);
   new_histo_group_Higgs_wh3l_13TeV_pt3248->SetBinContent(16,0.0002656808);
   new_histo_group_Higgs_wh3l_13TeV_pt3248->SetBinError(1,0.0188482);
   new_histo_group_Higgs_wh3l_13TeV_pt3248->SetBinError(2,0.01723243);
   new_histo_group_Higgs_wh3l_13TeV_pt3248->SetBinError(3,0.01220579);
   new_histo_group_Higgs_wh3l_13TeV_pt3248->SetBinError(4,0.009130746);
   new_histo_group_Higgs_wh3l_13TeV_pt3248->SetBinError(5,0.006681694);
   new_histo_group_Higgs_wh3l_13TeV_pt3248->SetBinError(6,0.004599961);
   new_histo_group_Higgs_wh3l_13TeV_pt3248->SetBinError(7,0.00301678);
   new_histo_group_Higgs_wh3l_13TeV_pt3248->SetBinError(8,0.00385933);
   new_histo_group_Higgs_wh3l_13TeV_pt3248->SetBinError(9,0.0008822765);
   new_histo_group_Higgs_wh3l_13TeV_pt3248->SetBinError(10,0.001854013);
   new_histo_group_Higgs_wh3l_13TeV_pt3248->SetBinError(11,0.0003762221);
   new_histo_group_Higgs_wh3l_13TeV_pt3248->SetBinError(12,0.0002134369);
   new_histo_group_Higgs_wh3l_13TeV_pt3248->SetBinError(15,0.001604902);
   new_histo_group_Higgs_wh3l_13TeV_pt3248->SetBinError(16,0.0002100476);
   new_histo_group_Higgs_wh3l_13TeV_pt3248->SetEntries(1360);
   new_histo_group_Higgs_wh3l_13TeV_pt3248->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_13TeV_pt3248->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_13TeV_pt3248->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_13TeV_pt3248->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_13TeV_pt3248->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_pt3248->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_pt3248->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_13TeV_pt3248->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_13TeV_pt3248->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_pt3248->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_pt3248->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_13TeV_pt3248->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_13TeV_pt3248->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_pt3248->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_pt3248->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_pt3->Add(new_histo_group_Higgs_wh3l_13TeV_pt3,"");
   thsBackground_grouped_wh3l_13TeV_pt3->Draw("hist same");
   
   thsSignal_grouped_wh3l_13TeV_pt3 = new THStack();
   thsSignal_grouped_wh3l_13TeV_pt3->SetName("thsSignal_grouped_wh3l_13TeV_pt3");
   thsSignal_grouped_wh3l_13TeV_pt3->SetTitle("thsSignal_grouped_wh3l_13TeV_pt3");
   
   TH1F *thsSignal_grouped_wh3l_13TeV_pt3_stack_50 = new TH1F("thsSignal_grouped_wh3l_13TeV_pt3_stack_50","thsSignal_grouped_wh3l_13TeV_pt3",25,10,200);
   thsSignal_grouped_wh3l_13TeV_pt3_stack_50->SetMinimum(-0.0004875237);
   thsSignal_grouped_wh3l_13TeV_pt3_stack_50->SetMaximum(0.3552966);
   thsSignal_grouped_wh3l_13TeV_pt3_stack_50->SetDirectory(0);
   thsSignal_grouped_wh3l_13TeV_pt3_stack_50->SetStats(0);
   thsSignal_grouped_wh3l_13TeV_pt3_stack_50->SetLineStyle(0);
   thsSignal_grouped_wh3l_13TeV_pt3_stack_50->SetMarkerStyle(20);
   thsSignal_grouped_wh3l_13TeV_pt3_stack_50->GetXaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_13TeV_pt3_stack_50->GetXaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_13TeV_pt3_stack_50->GetXaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_13TeV_pt3_stack_50->GetXaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_13TeV_pt3_stack_50->GetXaxis()->SetTitleOffset(0.9);
   thsSignal_grouped_wh3l_13TeV_pt3_stack_50->GetXaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_13TeV_pt3_stack_50->GetYaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_13TeV_pt3_stack_50->GetYaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_13TeV_pt3_stack_50->GetYaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_13TeV_pt3_stack_50->GetYaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_13TeV_pt3_stack_50->GetYaxis()->SetTitleOffset(1.25);
   thsSignal_grouped_wh3l_13TeV_pt3_stack_50->GetYaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_13TeV_pt3_stack_50->GetZaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_13TeV_pt3_stack_50->GetZaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_13TeV_pt3_stack_50->GetZaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_13TeV_pt3_stack_50->GetZaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_13TeV_pt3_stack_50->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_13TeV_pt3->SetHistogram(thsSignal_grouped_wh3l_13TeV_pt3_stack_50);
   
   
   TH1D *new_histo_group_Higgs_wh3l_13TeV_pt3249 = new TH1D("new_histo_group_Higgs_wh3l_13TeV_pt3249","histo_H_htt",25,10,200);
   new_histo_group_Higgs_wh3l_13TeV_pt3249->SetBinContent(1,0.3195296);
   new_histo_group_Higgs_wh3l_13TeV_pt3249->SetBinContent(2,0.2478861);
   new_histo_group_Higgs_wh3l_13TeV_pt3249->SetBinContent(3,0.1214192);
   new_histo_group_Higgs_wh3l_13TeV_pt3249->SetBinContent(4,0.0681104);
   new_histo_group_Higgs_wh3l_13TeV_pt3249->SetBinContent(5,0.03692737);
   new_histo_group_Higgs_wh3l_13TeV_pt3249->SetBinContent(6,0.01798341);
   new_histo_group_Higgs_wh3l_13TeV_pt3249->SetBinContent(7,0.008192972);
   new_histo_group_Higgs_wh3l_13TeV_pt3249->SetBinContent(8,0.01052666);
   new_histo_group_Higgs_wh3l_13TeV_pt3249->SetBinContent(9,0.0009255391);
   new_histo_group_Higgs_wh3l_13TeV_pt3249->SetBinContent(10,0.002251168);
   new_histo_group_Higgs_wh3l_13TeV_pt3249->SetBinContent(11,-0.0001113016);
   new_histo_group_Higgs_wh3l_13TeV_pt3249->SetBinContent(12,0.0002134369);
   new_histo_group_Higgs_wh3l_13TeV_pt3249->SetBinContent(15,0.001604902);
   new_histo_group_Higgs_wh3l_13TeV_pt3249->SetBinContent(16,0.0002656808);
   new_histo_group_Higgs_wh3l_13TeV_pt3249->SetBinError(1,0.0188482);
   new_histo_group_Higgs_wh3l_13TeV_pt3249->SetBinError(2,0.01723243);
   new_histo_group_Higgs_wh3l_13TeV_pt3249->SetBinError(3,0.01220579);
   new_histo_group_Higgs_wh3l_13TeV_pt3249->SetBinError(4,0.009130746);
   new_histo_group_Higgs_wh3l_13TeV_pt3249->SetBinError(5,0.006681694);
   new_histo_group_Higgs_wh3l_13TeV_pt3249->SetBinError(6,0.004599961);
   new_histo_group_Higgs_wh3l_13TeV_pt3249->SetBinError(7,0.00301678);
   new_histo_group_Higgs_wh3l_13TeV_pt3249->SetBinError(8,0.00385933);
   new_histo_group_Higgs_wh3l_13TeV_pt3249->SetBinError(9,0.0008822765);
   new_histo_group_Higgs_wh3l_13TeV_pt3249->SetBinError(10,0.001854013);
   new_histo_group_Higgs_wh3l_13TeV_pt3249->SetBinError(11,0.0003762221);
   new_histo_group_Higgs_wh3l_13TeV_pt3249->SetBinError(12,0.0002134369);
   new_histo_group_Higgs_wh3l_13TeV_pt3249->SetBinError(15,0.001604902);
   new_histo_group_Higgs_wh3l_13TeV_pt3249->SetBinError(16,0.0002100476);
   new_histo_group_Higgs_wh3l_13TeV_pt3249->SetEntries(1360);
   new_histo_group_Higgs_wh3l_13TeV_pt3249->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_13TeV_pt3249->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_13TeV_pt3249->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_13TeV_pt3249->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_13TeV_pt3249->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_pt3249->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_pt3249->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_13TeV_pt3249->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_13TeV_pt3249->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_pt3249->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_pt3249->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_13TeV_pt3249->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_13TeV_pt3249->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_pt3249->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_pt3249->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_13TeV_pt3->Add(new_histo_group_Higgs_wh3l_13TeV_pt3,"");
   thsSignal_grouped_wh3l_13TeV_pt3->Draw("hist same noclear");
   
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
   3.671606,
   1.588986,
   0.4510208,
   0.1488605,
   0.3614366,
   0.022532,
   0.04097153,
   0.01362953,
   0.009638139,
   0.009704447,
   0.01000479,
   0.01039688,
   0.005313793,
   0,
   0.006282572,
   0.006589556,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   3.671607,
   1.588987,
   0.6275324,
   0.392947,
   0.3614367,
   0.022532,
   0.04097152,
   0.01362953,
   0.009638138,
   0.009704446,
   0.01000479,
   0.01039688,
   0.005313793,
   0,
   0.006282572,
   0.006589555,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(25,_fx3049,_fy3049,_felx3049,_fehx3049,_fely3049,_fehy3049);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(12);
   grae->SetFillStyle(3004);
   grae->SetLineColor(12);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3049 = new TH1F("Graph_Graph3049","",100,0,219);
   Graph_Graph3049->SetMinimum(0);
   Graph_Graph3049->SetMaximum(17.35644);
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
   grae = new TGraphAsymmErrors(25,_fx3050,_fy3050,_felx3050,_fehx3050,_fely3050,_fehy3050);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(1);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3050 = new TH1F("Graph_Graph3050","",100,0,219);
   Graph_Graph3050->SetMinimum(0);
   Graph_Graph3050->SetMaximum(1.262698);
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
   
   TLegend *leg = new TLegend(0.2,0.55,0.8,0.88,NULL,"brNDC");
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
   
   leg = new TLegend(0.2,0.55,0.8,0.88,NULL,"brNDC");
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
   
   TH1F *hframe_copy250 = new TH1F("hframe_copy250","",1000,10,200);
   hframe_copy250->SetMinimum(0);
   hframe_copy250->SetMaximum(31.06626);
   hframe_copy250->SetDirectory(0);
   hframe_copy250->SetStats(0);
   hframe_copy250->SetLineStyle(0);
   hframe_copy250->SetMarkerStyle(20);
   hframe_copy250->GetXaxis()->SetTitle("lept3_p_{T} [GeV]");
   hframe_copy250->GetXaxis()->SetNdivisions(506);
   hframe_copy250->GetXaxis()->SetLabelFont(42);
   hframe_copy250->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy250->GetXaxis()->SetLabelSize(0.05);
   hframe_copy250->GetXaxis()->SetTitleSize(0.06);
   hframe_copy250->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy250->GetXaxis()->SetTitleFont(42);
   hframe_copy250->GetYaxis()->SetTitle("Events");
   hframe_copy250->GetYaxis()->SetLabelFont(42);
   hframe_copy250->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy250->GetYaxis()->SetLabelSize(0.05);
   hframe_copy250->GetYaxis()->SetTitleSize(0.06);
   hframe_copy250->GetYaxis()->SetTitleOffset(1.25);
   hframe_copy250->GetYaxis()->SetTitleFont(42);
   hframe_copy250->GetZaxis()->SetLabelFont(42);
   hframe_copy250->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy250->GetZaxis()->SetLabelSize(0.05);
   hframe_copy250->GetZaxis()->SetTitleSize(0.06);
   hframe_copy250->GetZaxis()->SetTitleFont(42);
   hframe_copy250->Draw("sameaxis");
   ccwh3l_13TeV_pt3->Modified();
   ccwh3l_13TeV_pt3->cd();
   ccwh3l_13TeV_pt3->SetSelected(ccwh3l_13TeV_pt3);
}
