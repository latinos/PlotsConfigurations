void c_wh3l_13TeV_ossf_pt3()
{
//=========Macro generated from canvas: ccwh3l_13TeV_ossf_pt3/cc
//=========  (Tue Jun 28 13:56:16 2016) by ROOT version6.02/13
   TCanvas *ccwh3l_13TeV_ossf_pt3 = new TCanvas("ccwh3l_13TeV_ossf_pt3", "cc",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   ccwh3l_13TeV_ossf_pt3->SetHighLightColor(2);
   ccwh3l_13TeV_ossf_pt3->Range(-28,-3.682934,209.5,24.64733);
   ccwh3l_13TeV_ossf_pt3->SetFillColor(0);
   ccwh3l_13TeV_ossf_pt3->SetBorderMode(0);
   ccwh3l_13TeV_ossf_pt3->SetBorderSize(2);
   ccwh3l_13TeV_ossf_pt3->SetTickx(1);
   ccwh3l_13TeV_ossf_pt3->SetTicky(1);
   ccwh3l_13TeV_ossf_pt3->SetLeftMargin(0.16);
   ccwh3l_13TeV_ossf_pt3->SetRightMargin(0.04);
   ccwh3l_13TeV_ossf_pt3->SetTopMargin(0.05);
   ccwh3l_13TeV_ossf_pt3->SetBottomMargin(0.13);
   ccwh3l_13TeV_ossf_pt3->SetFrameFillStyle(0);
   ccwh3l_13TeV_ossf_pt3->SetFrameBorderMode(0);
   ccwh3l_13TeV_ossf_pt3->SetFrameFillStyle(0);
   ccwh3l_13TeV_ossf_pt3->SetFrameBorderMode(0);
   
   TH1F *hframe61 = new TH1F("hframe61","",1000,10,200);
   hframe61->SetMinimum(0);
   hframe61->SetMaximum(23.23081);
   hframe61->SetDirectory(0);
   hframe61->SetStats(0);
   hframe61->SetLineStyle(0);
   hframe61->SetMarkerStyle(20);
   hframe61->GetXaxis()->SetTitle("lept3_p_{T} [GeV]");
   hframe61->GetXaxis()->SetNdivisions(506);
   hframe61->GetXaxis()->SetLabelFont(42);
   hframe61->GetXaxis()->SetLabelOffset(0.007);
   hframe61->GetXaxis()->SetLabelSize(0.05);
   hframe61->GetXaxis()->SetTitleSize(0.06);
   hframe61->GetXaxis()->SetTitleOffset(0.9);
   hframe61->GetXaxis()->SetTitleFont(42);
   hframe61->GetYaxis()->SetTitle("Events");
   hframe61->GetYaxis()->SetLabelFont(42);
   hframe61->GetYaxis()->SetLabelOffset(0.007);
   hframe61->GetYaxis()->SetLabelSize(0.05);
   hframe61->GetYaxis()->SetTitleSize(0.06);
   hframe61->GetYaxis()->SetTitleOffset(1.25);
   hframe61->GetYaxis()->SetTitleFont(42);
   hframe61->GetZaxis()->SetLabelFont(42);
   hframe61->GetZaxis()->SetLabelOffset(0.007);
   hframe61->GetZaxis()->SetLabelSize(0.05);
   hframe61->GetZaxis()->SetTitleSize(0.06);
   hframe61->GetZaxis()->SetTitleFont(42);
   hframe61->Draw(" ");
   
   THStack *thsBackground_grouped_wh3l_13TeV_ossf_pt3 = new THStack();
   thsBackground_grouped_wh3l_13TeV_ossf_pt3->SetName("thsBackground_grouped_wh3l_13TeV_ossf_pt3");
   thsBackground_grouped_wh3l_13TeV_ossf_pt3->SetTitle("thsBackground_grouped_wh3l_13TeV_ossf_pt3");
   
   TH1F *thsBackground_grouped_wh3l_13TeV_ossf_pt3_stack_13 = new TH1F("thsBackground_grouped_wh3l_13TeV_ossf_pt3_stack_13","thsBackground_grouped_wh3l_13TeV_ossf_pt3",25,10,200);
   thsBackground_grouped_wh3l_13TeV_ossf_pt3_stack_13->SetMinimum(-0.1258531);
   thsBackground_grouped_wh3l_13TeV_ossf_pt3_stack_13->SetMaximum(9.756941);
   thsBackground_grouped_wh3l_13TeV_ossf_pt3_stack_13->SetDirectory(0);
   thsBackground_grouped_wh3l_13TeV_ossf_pt3_stack_13->SetStats(0);
   thsBackground_grouped_wh3l_13TeV_ossf_pt3_stack_13->SetLineStyle(0);
   thsBackground_grouped_wh3l_13TeV_ossf_pt3_stack_13->SetMarkerStyle(20);
   thsBackground_grouped_wh3l_13TeV_ossf_pt3_stack_13->GetXaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_13TeV_ossf_pt3_stack_13->GetXaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_13TeV_ossf_pt3_stack_13->GetXaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_13TeV_ossf_pt3_stack_13->GetXaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_13TeV_ossf_pt3_stack_13->GetXaxis()->SetTitleOffset(0.9);
   thsBackground_grouped_wh3l_13TeV_ossf_pt3_stack_13->GetXaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_ossf_pt3_stack_13->GetYaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_13TeV_ossf_pt3_stack_13->GetYaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_13TeV_ossf_pt3_stack_13->GetYaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_13TeV_ossf_pt3_stack_13->GetYaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_13TeV_ossf_pt3_stack_13->GetYaxis()->SetTitleOffset(1.25);
   thsBackground_grouped_wh3l_13TeV_ossf_pt3_stack_13->GetYaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_ossf_pt3_stack_13->GetZaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_13TeV_ossf_pt3_stack_13->GetZaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_13TeV_ossf_pt3_stack_13->GetZaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_13TeV_ossf_pt3_stack_13->GetZaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_13TeV_ossf_pt3_stack_13->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_ossf_pt3->SetHistogram(thsBackground_grouped_wh3l_13TeV_ossf_pt3_stack_13);
   
   
   TH1D *new_histo_group_Fake_wh3l_13TeV_ossf_pt362 = new TH1D("new_histo_group_Fake_wh3l_13TeV_ossf_pt362","histo_Fake",25,10,200);
   new_histo_group_Fake_wh3l_13TeV_ossf_pt362->SetBinContent(1,4.167481);
   new_histo_group_Fake_wh3l_13TeV_ossf_pt362->SetBinContent(2,2.063763);
   new_histo_group_Fake_wh3l_13TeV_ossf_pt362->SetBinContent(3,0.2149783);
   new_histo_group_Fake_wh3l_13TeV_ossf_pt362->SetBinContent(4,0.2726189);
   new_histo_group_Fake_wh3l_13TeV_ossf_pt362->SetBinError(1,2.004089);
   new_histo_group_Fake_wh3l_13TeV_ossf_pt362->SetBinError(2,0.7928858);
   new_histo_group_Fake_wh3l_13TeV_ossf_pt362->SetBinError(3,0.3408314);
   new_histo_group_Fake_wh3l_13TeV_ossf_pt362->SetBinError(4,0.2772462);
   new_histo_group_Fake_wh3l_13TeV_ossf_pt362->SetEntries(81);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_13TeV_ossf_pt362->SetFillColor(ci);
   new_histo_group_Fake_wh3l_13TeV_ossf_pt362->SetFillStyle(3001);

   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_13TeV_ossf_pt362->SetLineColor(ci);
   new_histo_group_Fake_wh3l_13TeV_ossf_pt362->GetXaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_13TeV_ossf_pt362->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_13TeV_ossf_pt362->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_13TeV_ossf_pt362->GetXaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_13TeV_ossf_pt362->GetYaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_13TeV_ossf_pt362->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_13TeV_ossf_pt362->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_13TeV_ossf_pt362->GetYaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_13TeV_ossf_pt362->GetZaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_13TeV_ossf_pt362->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_13TeV_ossf_pt362->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_13TeV_ossf_pt362->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_ossf_pt3->Add(new_histo_group_Fake_wh3l_13TeV_ossf_pt3,"");
   
   TH1D *new_histo_group_WW_wh3l_13TeV_ossf_pt363 = new TH1D("new_histo_group_WW_wh3l_13TeV_ossf_pt363","histo_WW",25,10,200);
   new_histo_group_WW_wh3l_13TeV_ossf_pt363->SetBinContent(1,0.0285913);
   new_histo_group_WW_wh3l_13TeV_ossf_pt363->SetBinContent(2,0.02951213);
   new_histo_group_WW_wh3l_13TeV_ossf_pt363->SetBinContent(3,0.01447441);
   new_histo_group_WW_wh3l_13TeV_ossf_pt363->SetBinError(1,0.02093881);
   new_histo_group_WW_wh3l_13TeV_ossf_pt363->SetBinError(2,0.02088259);
   new_histo_group_WW_wh3l_13TeV_ossf_pt363->SetBinError(3,0.01447441);
   new_histo_group_WW_wh3l_13TeV_ossf_pt363->SetEntries(5);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_13TeV_ossf_pt363->SetFillColor(ci);
   new_histo_group_WW_wh3l_13TeV_ossf_pt363->SetFillStyle(3001);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_13TeV_ossf_pt363->SetLineColor(ci);
   new_histo_group_WW_wh3l_13TeV_ossf_pt363->GetXaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_13TeV_ossf_pt363->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_13TeV_ossf_pt363->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_13TeV_ossf_pt363->GetXaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_13TeV_ossf_pt363->GetYaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_13TeV_ossf_pt363->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_13TeV_ossf_pt363->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_13TeV_ossf_pt363->GetYaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_13TeV_ossf_pt363->GetZaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_13TeV_ossf_pt363->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_13TeV_ossf_pt363->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_13TeV_ossf_pt363->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_ossf_pt3->Add(new_histo_group_WW_wh3l_13TeV_ossf_pt3,"");
   
   TH1D *new_histo_group_VVV_wh3l_13TeV_ossf_pt364 = new TH1D("new_histo_group_VVV_wh3l_13TeV_ossf_pt364","histo_VVV",25,10,200);
   new_histo_group_VVV_wh3l_13TeV_ossf_pt364->SetBinContent(1,0.0009029573);
   new_histo_group_VVV_wh3l_13TeV_ossf_pt364->SetBinContent(2,0.002136741);
   new_histo_group_VVV_wh3l_13TeV_ossf_pt364->SetBinContent(3,0.002644338);
   new_histo_group_VVV_wh3l_13TeV_ossf_pt364->SetBinContent(4,0.0006343185);
   new_histo_group_VVV_wh3l_13TeV_ossf_pt364->SetBinContent(8,0.0006729142);
   new_histo_group_VVV_wh3l_13TeV_ossf_pt364->SetBinError(1,0.0006779799);
   new_histo_group_VVV_wh3l_13TeV_ossf_pt364->SetBinError(2,0.001133191);
   new_histo_group_VVV_wh3l_13TeV_ossf_pt364->SetBinError(3,0.001323303);
   new_histo_group_VVV_wh3l_13TeV_ossf_pt364->SetBinError(4,0.0006343185);
   new_histo_group_VVV_wh3l_13TeV_ossf_pt364->SetBinError(8,0.0006729142);
   new_histo_group_VVV_wh3l_13TeV_ossf_pt364->SetEntries(12);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_13TeV_ossf_pt364->SetFillColor(ci);
   new_histo_group_VVV_wh3l_13TeV_ossf_pt364->SetFillStyle(3001);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_13TeV_ossf_pt364->SetLineColor(ci);
   new_histo_group_VVV_wh3l_13TeV_ossf_pt364->GetXaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_13TeV_ossf_pt364->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_13TeV_ossf_pt364->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_13TeV_ossf_pt364->GetXaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_13TeV_ossf_pt364->GetYaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_13TeV_ossf_pt364->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_13TeV_ossf_pt364->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_13TeV_ossf_pt364->GetYaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_13TeV_ossf_pt364->GetZaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_13TeV_ossf_pt364->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_13TeV_ossf_pt364->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_13TeV_ossf_pt364->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_ossf_pt3->Add(new_histo_group_VVV_wh3l_13TeV_ossf_pt3,"");
   
   TH1D *new_histo_group_Vg_wh3l_13TeV_ossf_pt365 = new TH1D("new_histo_group_Vg_wh3l_13TeV_ossf_pt365","histo_Vg",25,10,200);
   new_histo_group_Vg_wh3l_13TeV_ossf_pt365->SetBinContent(1,1.177209);
   new_histo_group_Vg_wh3l_13TeV_ossf_pt365->SetBinContent(2,1.346734);
   new_histo_group_Vg_wh3l_13TeV_ossf_pt365->SetBinContent(3,0.1242263);
   new_histo_group_Vg_wh3l_13TeV_ossf_pt365->SetBinError(1,0.3678475);
   new_histo_group_Vg_wh3l_13TeV_ossf_pt365->SetBinError(2,0.4173879);
   new_histo_group_Vg_wh3l_13TeV_ossf_pt365->SetBinError(3,0.1242263);
   new_histo_group_Vg_wh3l_13TeV_ossf_pt365->SetEntries(42);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_13TeV_ossf_pt365->SetFillColor(ci);
   new_histo_group_Vg_wh3l_13TeV_ossf_pt365->SetFillStyle(3001);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_13TeV_ossf_pt365->SetLineColor(ci);
   new_histo_group_Vg_wh3l_13TeV_ossf_pt365->GetXaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_13TeV_ossf_pt365->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_13TeV_ossf_pt365->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_13TeV_ossf_pt365->GetXaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_13TeV_ossf_pt365->GetYaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_13TeV_ossf_pt365->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_13TeV_ossf_pt365->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_13TeV_ossf_pt365->GetYaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_13TeV_ossf_pt365->GetZaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_13TeV_ossf_pt365->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_13TeV_ossf_pt365->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_13TeV_ossf_pt365->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_ossf_pt3->Add(new_histo_group_Vg_wh3l_13TeV_ossf_pt3,"");
   
   TH1D *new_histo_group_ZZ_wh3l_13TeV_ossf_pt366 = new TH1D("new_histo_group_ZZ_wh3l_13TeV_ossf_pt366","histo_ZZ",25,10,200);
   new_histo_group_ZZ_wh3l_13TeV_ossf_pt366->SetBinContent(1,0.3491162);
   new_histo_group_ZZ_wh3l_13TeV_ossf_pt366->SetBinContent(2,0.1083724);
   new_histo_group_ZZ_wh3l_13TeV_ossf_pt366->SetBinContent(3,0.04510369);
   new_histo_group_ZZ_wh3l_13TeV_ossf_pt366->SetBinContent(5,0.04527812);
   new_histo_group_ZZ_wh3l_13TeV_ossf_pt366->SetBinContent(7,0.02088597);
   new_histo_group_ZZ_wh3l_13TeV_ossf_pt366->SetBinError(1,0.1130887);
   new_histo_group_ZZ_wh3l_13TeV_ossf_pt366->SetBinError(2,0.0684451);
   new_histo_group_ZZ_wh3l_13TeV_ossf_pt366->SetBinError(3,0.04510369);
   new_histo_group_ZZ_wh3l_13TeV_ossf_pt366->SetBinError(5,0.04527812);
   new_histo_group_ZZ_wh3l_13TeV_ossf_pt366->SetBinError(7,0.02088597);
   new_histo_group_ZZ_wh3l_13TeV_ossf_pt366->SetEntries(17);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_13TeV_ossf_pt366->SetFillColor(ci);
   new_histo_group_ZZ_wh3l_13TeV_ossf_pt366->SetFillStyle(3001);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_13TeV_ossf_pt366->SetLineColor(ci);
   new_histo_group_ZZ_wh3l_13TeV_ossf_pt366->GetXaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_13TeV_ossf_pt366->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_13TeV_ossf_pt366->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_13TeV_ossf_pt366->GetXaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_13TeV_ossf_pt366->GetYaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_13TeV_ossf_pt366->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_13TeV_ossf_pt366->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_13TeV_ossf_pt366->GetYaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_13TeV_ossf_pt366->GetZaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_13TeV_ossf_pt366->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_13TeV_ossf_pt366->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_13TeV_ossf_pt366->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_ossf_pt3->Add(new_histo_group_ZZ_wh3l_13TeV_ossf_pt3,"");
   
   TH1D *new_histo_group_WZ_wh3l_13TeV_ossf_pt367 = new TH1D("new_histo_group_WZ_wh3l_13TeV_ossf_pt367","histo_WZ",25,10,200);
   new_histo_group_WZ_wh3l_13TeV_ossf_pt367->SetBinContent(1,3.341536);
   new_histo_group_WZ_wh3l_13TeV_ossf_pt367->SetBinContent(2,1.957116);
   new_histo_group_WZ_wh3l_13TeV_ossf_pt367->SetBinContent(3,0.7923265);
   new_histo_group_WZ_wh3l_13TeV_ossf_pt367->SetBinContent(4,0.3736949);
   new_histo_group_WZ_wh3l_13TeV_ossf_pt367->SetBinContent(5,0.176475);
   new_histo_group_WZ_wh3l_13TeV_ossf_pt367->SetBinContent(6,0.09045971);
   new_histo_group_WZ_wh3l_13TeV_ossf_pt367->SetBinContent(7,0.07123534);
   new_histo_group_WZ_wh3l_13TeV_ossf_pt367->SetBinContent(8,0.02892352);
   new_histo_group_WZ_wh3l_13TeV_ossf_pt367->SetBinContent(9,0.01669191);
   new_histo_group_WZ_wh3l_13TeV_ossf_pt367->SetBinContent(10,0.0166626);
   new_histo_group_WZ_wh3l_13TeV_ossf_pt367->SetBinContent(11,0.01715306);
   new_histo_group_WZ_wh3l_13TeV_ossf_pt367->SetBinContent(12,0.01787271);
   new_histo_group_WZ_wh3l_13TeV_ossf_pt367->SetBinContent(13,0.005313793);
   new_histo_group_WZ_wh3l_13TeV_ossf_pt367->SetBinContent(15,0.006282572);
   new_histo_group_WZ_wh3l_13TeV_ossf_pt367->SetBinContent(16,0.008634566);
   new_histo_group_WZ_wh3l_13TeV_ossf_pt367->SetBinError(1,0.1347982);
   new_histo_group_WZ_wh3l_13TeV_ossf_pt367->SetBinError(2,0.1037598);
   new_histo_group_WZ_wh3l_13TeV_ossf_pt367->SetBinError(3,0.06493389);
   new_histo_group_WZ_wh3l_13TeV_ossf_pt367->SetBinError(4,0.04460098);
   new_histo_group_WZ_wh3l_13TeV_ossf_pt367->SetBinError(5,0.03041322);
   new_histo_group_WZ_wh3l_13TeV_ossf_pt367->SetBinError(6,0.02234785);
   new_histo_group_WZ_wh3l_13TeV_ossf_pt367->SetBinError(7,0.01953239);
   new_histo_group_WZ_wh3l_13TeV_ossf_pt367->SetBinError(8,0.0129566);
   new_histo_group_WZ_wh3l_13TeV_ossf_pt367->SetBinError(9,0.009638129);
   new_histo_group_WZ_wh3l_13TeV_ossf_pt367->SetBinError(10,0.009704447);
   new_histo_group_WZ_wh3l_13TeV_ossf_pt367->SetBinError(11,0.01000479);
   new_histo_group_WZ_wh3l_13TeV_ossf_pt367->SetBinError(12,0.01039688);
   new_histo_group_WZ_wh3l_13TeV_ossf_pt367->SetBinError(13,0.005313793);
   new_histo_group_WZ_wh3l_13TeV_ossf_pt367->SetBinError(15,0.006282572);
   new_histo_group_WZ_wh3l_13TeV_ossf_pt367->SetBinError(16,0.006589555);
   new_histo_group_WZ_wh3l_13TeV_ossf_pt367->SetEntries(1419);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_13TeV_ossf_pt367->SetFillColor(ci);
   new_histo_group_WZ_wh3l_13TeV_ossf_pt367->SetFillStyle(3001);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_13TeV_ossf_pt367->SetLineColor(ci);
   new_histo_group_WZ_wh3l_13TeV_ossf_pt367->GetXaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_13TeV_ossf_pt367->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_13TeV_ossf_pt367->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_13TeV_ossf_pt367->GetXaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_13TeV_ossf_pt367->GetYaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_13TeV_ossf_pt367->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_13TeV_ossf_pt367->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_13TeV_ossf_pt367->GetYaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_13TeV_ossf_pt367->GetZaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_13TeV_ossf_pt367->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_13TeV_ossf_pt367->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_13TeV_ossf_pt367->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_ossf_pt3->Add(new_histo_group_WZ_wh3l_13TeV_ossf_pt3,"");
   
   TH1D *new_histo_group_Higgs_wh3l_13TeV_ossf_pt368 = new TH1D("new_histo_group_Higgs_wh3l_13TeV_ossf_pt368","histo_H_htt",25,10,200);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt368->SetBinContent(1,0.2274894);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt368->SetBinContent(2,0.1802342);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt368->SetBinContent(3,0.08674856);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt368->SetBinContent(4,0.04619732);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt368->SetBinContent(5,0.02592089);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt368->SetBinContent(6,0.01464203);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt368->SetBinContent(7,0.006682086);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt368->SetBinContent(8,0.005804505);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt368->SetBinContent(9,4.437943e-05);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt368->SetBinContent(10,0.002081552);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt368->SetBinContent(11,-0.0003157941);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt368->SetBinContent(15,0.001604902);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt368->SetBinContent(16,6.640687e-05);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt368->SetBinError(1,0.0160394);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt368->SetBinError(2,0.01471225);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt368->SetBinError(3,0.01051311);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt368->SetBinError(4,0.00763241);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt368->SetBinError(5,0.005676745);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt368->SetBinError(6,0.004250163);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt368->SetBinError(7,0.002798448);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt368->SetBinError(8,0.002872061);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt368->SetBinError(9,4.437943e-05);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt368->SetBinError(10,0.001846238);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt368->SetBinError(11,0.0003157941);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt368->SetBinError(15,0.001604902);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt368->SetBinError(16,6.640687e-05);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt368->SetEntries(946);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt368->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt368->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt368->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt368->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt368->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt368->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt368->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt368->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt368->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt368->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt368->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt368->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt368->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt368->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt368->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_ossf_pt3->Add(new_histo_group_Higgs_wh3l_13TeV_ossf_pt3,"");
   thsBackground_grouped_wh3l_13TeV_ossf_pt3->Draw("hist same");
   
   thsSignal_grouped_wh3l_13TeV_ossf_pt3 = new THStack();
   thsSignal_grouped_wh3l_13TeV_ossf_pt3->SetName("thsSignal_grouped_wh3l_13TeV_ossf_pt3");
   thsSignal_grouped_wh3l_13TeV_ossf_pt3->SetTitle("thsSignal_grouped_wh3l_13TeV_ossf_pt3");
   
   TH1F *thsSignal_grouped_wh3l_13TeV_ossf_pt3_stack_14 = new TH1F("thsSignal_grouped_wh3l_13TeV_ossf_pt3_stack_14","thsSignal_grouped_wh3l_13TeV_ossf_pt3",25,10,200);
   thsSignal_grouped_wh3l_13TeV_ossf_pt3_stack_14->SetMinimum(-0.0006315881);
   thsSignal_grouped_wh3l_13TeV_ossf_pt3_stack_14->SetMaximum(0.2557052);
   thsSignal_grouped_wh3l_13TeV_ossf_pt3_stack_14->SetDirectory(0);
   thsSignal_grouped_wh3l_13TeV_ossf_pt3_stack_14->SetStats(0);
   thsSignal_grouped_wh3l_13TeV_ossf_pt3_stack_14->SetLineStyle(0);
   thsSignal_grouped_wh3l_13TeV_ossf_pt3_stack_14->SetMarkerStyle(20);
   thsSignal_grouped_wh3l_13TeV_ossf_pt3_stack_14->GetXaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_13TeV_ossf_pt3_stack_14->GetXaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_13TeV_ossf_pt3_stack_14->GetXaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_13TeV_ossf_pt3_stack_14->GetXaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_13TeV_ossf_pt3_stack_14->GetXaxis()->SetTitleOffset(0.9);
   thsSignal_grouped_wh3l_13TeV_ossf_pt3_stack_14->GetXaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_13TeV_ossf_pt3_stack_14->GetYaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_13TeV_ossf_pt3_stack_14->GetYaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_13TeV_ossf_pt3_stack_14->GetYaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_13TeV_ossf_pt3_stack_14->GetYaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_13TeV_ossf_pt3_stack_14->GetYaxis()->SetTitleOffset(1.25);
   thsSignal_grouped_wh3l_13TeV_ossf_pt3_stack_14->GetYaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_13TeV_ossf_pt3_stack_14->GetZaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_13TeV_ossf_pt3_stack_14->GetZaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_13TeV_ossf_pt3_stack_14->GetZaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_13TeV_ossf_pt3_stack_14->GetZaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_13TeV_ossf_pt3_stack_14->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_13TeV_ossf_pt3->SetHistogram(thsSignal_grouped_wh3l_13TeV_ossf_pt3_stack_14);
   
   
   TH1D *new_histo_group_Higgs_wh3l_13TeV_ossf_pt369 = new TH1D("new_histo_group_Higgs_wh3l_13TeV_ossf_pt369","histo_H_htt",25,10,200);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt369->SetBinContent(1,0.2274894);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt369->SetBinContent(2,0.1802342);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt369->SetBinContent(3,0.08674856);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt369->SetBinContent(4,0.04619732);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt369->SetBinContent(5,0.02592089);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt369->SetBinContent(6,0.01464203);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt369->SetBinContent(7,0.006682086);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt369->SetBinContent(8,0.005804505);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt369->SetBinContent(9,4.437943e-05);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt369->SetBinContent(10,0.002081552);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt369->SetBinContent(11,-0.0003157941);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt369->SetBinContent(15,0.001604902);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt369->SetBinContent(16,6.640687e-05);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt369->SetBinError(1,0.0160394);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt369->SetBinError(2,0.01471225);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt369->SetBinError(3,0.01051311);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt369->SetBinError(4,0.00763241);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt369->SetBinError(5,0.005676745);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt369->SetBinError(6,0.004250163);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt369->SetBinError(7,0.002798448);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt369->SetBinError(8,0.002872061);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt369->SetBinError(9,4.437943e-05);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt369->SetBinError(10,0.001846238);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt369->SetBinError(11,0.0003157941);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt369->SetBinError(15,0.001604902);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt369->SetBinError(16,6.640687e-05);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt369->SetEntries(946);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt369->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt369->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt369->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt369->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt369->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt369->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt369->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt369->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt369->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt369->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt369->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt369->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt369->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt369->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt369->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_13TeV_ossf_pt3->Add(new_histo_group_Higgs_wh3l_13TeV_ossf_pt3,"");
   thsSignal_grouped_wh3l_13TeV_ossf_pt3->Draw("hist same noclear");
   
   Double_t _fx3013[25] = {
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
   Double_t _fy3013[25] = {
   9.064836,
   5.507634,
   1.193753,
   0.6469481,
   0.2217532,
   0.09045971,
   0.09212131,
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
   Double_t _felx3013[25] = {
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
   Double_t _fely3013[25] = {
   2.922683,
   1.535427,
   0.4695177,
   0.3282076,
   0.0757012,
   0.02234785,
   0.0404223,
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
   Double_t _fehx3013[25] = {
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
   Double_t _fehy3013[25] = {
   2.922685,
   1.535427,
   0.5944235,
   0.3326908,
   0.07570121,
   0.02234785,
   0.04042229,
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
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(25,_fx3013,_fy3013,_felx3013,_fehx3013,_fely3013,_fehy3013);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(12);
   grae->SetFillStyle(3004);
   grae->SetLineColor(12);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3013 = new TH1F("Graph_Graph3013","",100,0,219);
   Graph_Graph3013->SetMinimum(0);
   Graph_Graph3013->SetMaximum(13.18627);
   Graph_Graph3013->SetDirectory(0);
   Graph_Graph3013->SetStats(0);
   Graph_Graph3013->SetLineStyle(0);
   Graph_Graph3013->SetMarkerStyle(20);
   Graph_Graph3013->GetXaxis()->SetLabelFont(42);
   Graph_Graph3013->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3013->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3013->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3013->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3013->GetXaxis()->SetTitleFont(42);
   Graph_Graph3013->GetYaxis()->SetLabelFont(42);
   Graph_Graph3013->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3013->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3013->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3013->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3013->GetYaxis()->SetTitleFont(42);
   Graph_Graph3013->GetZaxis()->SetLabelFont(42);
   Graph_Graph3013->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3013->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3013->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3013->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3013);
   
   grae->Draw("2");
   
   Double_t _fx3014[25] = {
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
   Double_t _fy3014[25] = {
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
   Double_t _felx3014[25] = {
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
   Double_t _fely3014[25] = {
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
   Double_t _fehx3014[25] = {
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
   Double_t _fehy3014[25] = {
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
   grae = new TGraphAsymmErrors(25,_fx3014,_fy3014,_felx3014,_fehx3014,_fely3014,_fehy3014);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(1);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3014 = new TH1F("Graph_Graph3014","",100,0,219);
   Graph_Graph3014->SetMinimum(0);
   Graph_Graph3014->SetMaximum(1.262698);
   Graph_Graph3014->SetDirectory(0);
   Graph_Graph3014->SetStats(0);
   Graph_Graph3014->SetLineStyle(0);
   Graph_Graph3014->SetMarkerStyle(20);
   Graph_Graph3014->GetXaxis()->SetLabelFont(42);
   Graph_Graph3014->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3014->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3014->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3014->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3014->GetXaxis()->SetTitleFont(42);
   Graph_Graph3014->GetYaxis()->SetLabelFont(42);
   Graph_Graph3014->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3014->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3014->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3014->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3014->GetYaxis()->SetTitleFont(42);
   Graph_Graph3014->GetZaxis()->SetLabelFont(42);
   Graph_Graph3014->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3014->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3014->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3014->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3014);
   
   grae->Draw("p0");
   
   TLegend *leg = new TLegend(0.2,0.55,0.8,0.88,NULL,"brNDC");
   leg->SetTextFont(62);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("new_histo_group_Fake_wh3l_13TeV_ossf_pt3","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_13TeV_ossf_pt3","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_13TeV_ossf_pt3","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_13TeV_ossf_pt3","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_13TeV_ossf_pt3","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_13TeV_ossf_pt3","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_13TeV_ossf_pt3","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_13TeV_ossf_pt3","Data","EPL");
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
   entry=leg->AddEntry("new_histo_group_Fake_wh3l_13TeV_ossf_pt3","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_13TeV_ossf_pt3","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_13TeV_ossf_pt3","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_13TeV_ossf_pt3","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_13TeV_ossf_pt3","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_13TeV_ossf_pt3","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_13TeV_ossf_pt3","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_13TeV_ossf_pt3","Data","EPL");
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
   
   TH1F *hframe_copy70 = new TH1F("hframe_copy70","",1000,10,200);
   hframe_copy70->SetMinimum(0);
   hframe_copy70->SetMaximum(23.23081);
   hframe_copy70->SetDirectory(0);
   hframe_copy70->SetStats(0);
   hframe_copy70->SetLineStyle(0);
   hframe_copy70->SetMarkerStyle(20);
   hframe_copy70->GetXaxis()->SetTitle("lept3_p_{T} [GeV]");
   hframe_copy70->GetXaxis()->SetNdivisions(506);
   hframe_copy70->GetXaxis()->SetLabelFont(42);
   hframe_copy70->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy70->GetXaxis()->SetLabelSize(0.05);
   hframe_copy70->GetXaxis()->SetTitleSize(0.06);
   hframe_copy70->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy70->GetXaxis()->SetTitleFont(42);
   hframe_copy70->GetYaxis()->SetTitle("Events");
   hframe_copy70->GetYaxis()->SetLabelFont(42);
   hframe_copy70->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy70->GetYaxis()->SetLabelSize(0.05);
   hframe_copy70->GetYaxis()->SetTitleSize(0.06);
   hframe_copy70->GetYaxis()->SetTitleOffset(1.25);
   hframe_copy70->GetYaxis()->SetTitleFont(42);
   hframe_copy70->GetZaxis()->SetLabelFont(42);
   hframe_copy70->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy70->GetZaxis()->SetLabelSize(0.05);
   hframe_copy70->GetZaxis()->SetTitleSize(0.06);
   hframe_copy70->GetZaxis()->SetTitleFont(42);
   hframe_copy70->Draw("sameaxis");
   ccwh3l_13TeV_ossf_pt3->Modified();
   ccwh3l_13TeV_ossf_pt3->cd();
   ccwh3l_13TeV_ossf_pt3->SetSelected(ccwh3l_13TeV_ossf_pt3);
}
