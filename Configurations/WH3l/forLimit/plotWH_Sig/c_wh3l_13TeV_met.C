void c_wh3l_13TeV_met()
{
//=========Macro generated from canvas: ccwh3l_13TeV_met/cc
//=========  (Thu Jun 30 22:29:52 2016) by ROOT version6.02/13
   TCanvas *ccwh3l_13TeV_met = new TCanvas("ccwh3l_13TeV_met", "cc",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   ccwh3l_13TeV_met->SetHighLightColor(2);
   ccwh3l_13TeV_met->Range(-40,-2.737037,210,18.3171);
   ccwh3l_13TeV_met->SetFillColor(0);
   ccwh3l_13TeV_met->SetBorderMode(0);
   ccwh3l_13TeV_met->SetBorderSize(2);
   ccwh3l_13TeV_met->SetTickx(1);
   ccwh3l_13TeV_met->SetTicky(1);
   ccwh3l_13TeV_met->SetLeftMargin(0.16);
   ccwh3l_13TeV_met->SetRightMargin(0.04);
   ccwh3l_13TeV_met->SetTopMargin(0.05);
   ccwh3l_13TeV_met->SetBottomMargin(0.13);
   ccwh3l_13TeV_met->SetFrameFillStyle(0);
   ccwh3l_13TeV_met->SetFrameBorderMode(0);
   ccwh3l_13TeV_met->SetFrameFillStyle(0);
   ccwh3l_13TeV_met->SetFrameBorderMode(0);
   
   TH1F *hframe221 = new TH1F("hframe221","",1000,0,200);
   hframe221->SetMinimum(0);
   hframe221->SetMaximum(17.26439);
   hframe221->SetDirectory(0);
   hframe221->SetStats(0);
   hframe221->SetLineStyle(0);
   hframe221->SetMarkerStyle(20);
   hframe221->GetXaxis()->SetTitle("pfmet [GeV]");
   hframe221->GetXaxis()->SetNdivisions(506);
   hframe221->GetXaxis()->SetLabelFont(42);
   hframe221->GetXaxis()->SetLabelOffset(0.007);
   hframe221->GetXaxis()->SetLabelSize(0.05);
   hframe221->GetXaxis()->SetTitleSize(0.06);
   hframe221->GetXaxis()->SetTitleOffset(0.9);
   hframe221->GetXaxis()->SetTitleFont(42);
   hframe221->GetYaxis()->SetTitle("Events");
   hframe221->GetYaxis()->SetLabelFont(42);
   hframe221->GetYaxis()->SetLabelOffset(0.007);
   hframe221->GetYaxis()->SetLabelSize(0.05);
   hframe221->GetYaxis()->SetTitleSize(0.06);
   hframe221->GetYaxis()->SetTitleOffset(1.25);
   hframe221->GetYaxis()->SetTitleFont(42);
   hframe221->GetZaxis()->SetLabelFont(42);
   hframe221->GetZaxis()->SetLabelOffset(0.007);
   hframe221->GetZaxis()->SetLabelSize(0.05);
   hframe221->GetZaxis()->SetTitleSize(0.06);
   hframe221->GetZaxis()->SetTitleFont(42);
   hframe221->Draw(" ");
   
   THStack *thsBackground_grouped_wh3l_13TeV_met = new THStack();
   thsBackground_grouped_wh3l_13TeV_met->SetName("thsBackground_grouped_wh3l_13TeV_met");
   thsBackground_grouped_wh3l_13TeV_met->SetTitle("thsBackground_grouped_wh3l_13TeV_met");
   
   TH1F *thsBackground_grouped_wh3l_13TeV_met_stack_45 = new TH1F("thsBackground_grouped_wh3l_13TeV_met_stack_45","thsBackground_grouped_wh3l_13TeV_met",20,0,200);
   thsBackground_grouped_wh3l_13TeV_met_stack_45->SetMinimum(-0.2364227);
   thsBackground_grouped_wh3l_13TeV_met_stack_45->SetMaximum(7.251044);
   thsBackground_grouped_wh3l_13TeV_met_stack_45->SetDirectory(0);
   thsBackground_grouped_wh3l_13TeV_met_stack_45->SetStats(0);
   thsBackground_grouped_wh3l_13TeV_met_stack_45->SetLineStyle(0);
   thsBackground_grouped_wh3l_13TeV_met_stack_45->SetMarkerStyle(20);
   thsBackground_grouped_wh3l_13TeV_met_stack_45->GetXaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_13TeV_met_stack_45->GetXaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_13TeV_met_stack_45->GetXaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_13TeV_met_stack_45->GetXaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_13TeV_met_stack_45->GetXaxis()->SetTitleOffset(0.9);
   thsBackground_grouped_wh3l_13TeV_met_stack_45->GetXaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_met_stack_45->GetYaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_13TeV_met_stack_45->GetYaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_13TeV_met_stack_45->GetYaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_13TeV_met_stack_45->GetYaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_13TeV_met_stack_45->GetYaxis()->SetTitleOffset(1.25);
   thsBackground_grouped_wh3l_13TeV_met_stack_45->GetYaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_met_stack_45->GetZaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_13TeV_met_stack_45->GetZaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_13TeV_met_stack_45->GetZaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_13TeV_met_stack_45->GetZaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_13TeV_met_stack_45->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_met->SetHistogram(thsBackground_grouped_wh3l_13TeV_met_stack_45);
   
   
   TH1D *new_histo_group_Fake_wh3l_13TeV_met222 = new TH1D("new_histo_group_Fake_wh3l_13TeV_met222","histo_Fake",20,0,200);
   new_histo_group_Fake_wh3l_13TeV_met222->SetBinContent(5,2.190609);
   new_histo_group_Fake_wh3l_13TeV_met222->SetBinContent(6,3.903912);
   new_histo_group_Fake_wh3l_13TeV_met222->SetBinContent(7,0.6955975);
   new_histo_group_Fake_wh3l_13TeV_met222->SetBinContent(8,0.4029035);
   new_histo_group_Fake_wh3l_13TeV_met222->SetBinContent(9,1.162314);
   new_histo_group_Fake_wh3l_13TeV_met222->SetBinContent(10,0.3669559);
   new_histo_group_Fake_wh3l_13TeV_met222->SetBinContent(11,0.9713187);
   new_histo_group_Fake_wh3l_13TeV_met222->SetBinContent(12,0.1345139);
   new_histo_group_Fake_wh3l_13TeV_met222->SetBinContent(13,-0.08443468);
   new_histo_group_Fake_wh3l_13TeV_met222->SetBinContent(14,-0.006674166);
   new_histo_group_Fake_wh3l_13TeV_met222->SetBinContent(19,-0.008195123);
   new_histo_group_Fake_wh3l_13TeV_met222->SetBinError(5,1.389754);
   new_histo_group_Fake_wh3l_13TeV_met222->SetBinError(6,1.447345);
   new_histo_group_Fake_wh3l_13TeV_met222->SetBinError(7,0.778632);
   new_histo_group_Fake_wh3l_13TeV_met222->SetBinError(8,0.5638508);
   new_histo_group_Fake_wh3l_13TeV_met222->SetBinError(9,0.7314685);
   new_histo_group_Fake_wh3l_13TeV_met222->SetBinError(10,0.5803168);
   new_histo_group_Fake_wh3l_13TeV_met222->SetBinError(11,0.8592268);
   new_histo_group_Fake_wh3l_13TeV_met222->SetBinError(12,0.1345139);
   new_histo_group_Fake_wh3l_13TeV_met222->SetBinError(13,0.151988);
   new_histo_group_Fake_wh3l_13TeV_met222->SetBinError(14,0.006674166);
   new_histo_group_Fake_wh3l_13TeV_met222->SetBinError(19,0.008195123);
   new_histo_group_Fake_wh3l_13TeV_met222->SetEntries(108);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_13TeV_met222->SetFillColor(ci);
   new_histo_group_Fake_wh3l_13TeV_met222->SetFillStyle(3001);

   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_13TeV_met222->SetLineColor(ci);
   new_histo_group_Fake_wh3l_13TeV_met222->GetXaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_13TeV_met222->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_13TeV_met222->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_13TeV_met222->GetXaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_13TeV_met222->GetYaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_13TeV_met222->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_13TeV_met222->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_13TeV_met222->GetYaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_13TeV_met222->GetZaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_13TeV_met222->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_13TeV_met222->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_13TeV_met222->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_met->Add(new_histo_group_Fake_wh3l_13TeV_met,"");
   
   TH1D *new_histo_group_WW_wh3l_13TeV_met223 = new TH1D("new_histo_group_WW_wh3l_13TeV_met223","histo_WW",20,0,200);
   new_histo_group_WW_wh3l_13TeV_met223->SetBinContent(5,0.06378562);
   new_histo_group_WW_wh3l_13TeV_met223->SetBinContent(7,0.01447441);
   new_histo_group_WW_wh3l_13TeV_met223->SetBinContent(8,0.01044191);
   new_histo_group_WW_wh3l_13TeV_met223->SetBinError(5,0.03202295);
   new_histo_group_WW_wh3l_13TeV_met223->SetBinError(7,0.01447441);
   new_histo_group_WW_wh3l_13TeV_met223->SetBinError(8,0.01044191);
   new_histo_group_WW_wh3l_13TeV_met223->SetEntries(6);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_13TeV_met223->SetFillColor(ci);
   new_histo_group_WW_wh3l_13TeV_met223->SetFillStyle(3001);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_13TeV_met223->SetLineColor(ci);
   new_histo_group_WW_wh3l_13TeV_met223->GetXaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_13TeV_met223->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_13TeV_met223->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_13TeV_met223->GetXaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_13TeV_met223->GetYaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_13TeV_met223->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_13TeV_met223->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_13TeV_met223->GetYaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_13TeV_met223->GetZaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_13TeV_met223->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_13TeV_met223->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_13TeV_met223->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_met->Add(new_histo_group_WW_wh3l_13TeV_met,"");
   
   TH1D *new_histo_group_VVV_wh3l_13TeV_met224 = new TH1D("new_histo_group_VVV_wh3l_13TeV_met224","histo_VVV",20,0,200);
   new_histo_group_VVV_wh3l_13TeV_met224->SetBinContent(5,0.02888941);
   new_histo_group_VVV_wh3l_13TeV_met224->SetBinContent(6,0.03931968);
   new_histo_group_VVV_wh3l_13TeV_met224->SetBinContent(7,0.04770616);
   new_histo_group_VVV_wh3l_13TeV_met224->SetBinContent(8,0.04147331);
   new_histo_group_VVV_wh3l_13TeV_met224->SetBinContent(9,0.05286624);
   new_histo_group_VVV_wh3l_13TeV_met224->SetBinContent(10,0.02539143);
   new_histo_group_VVV_wh3l_13TeV_met224->SetBinContent(11,0.01432833);
   new_histo_group_VVV_wh3l_13TeV_met224->SetBinContent(12,0.0124309);
   new_histo_group_VVV_wh3l_13TeV_met224->SetBinContent(13,0.01449371);
   new_histo_group_VVV_wh3l_13TeV_met224->SetBinContent(14,0.01431374);
   new_histo_group_VVV_wh3l_13TeV_met224->SetBinContent(15,0.006563376);
   new_histo_group_VVV_wh3l_13TeV_met224->SetBinContent(16,0.003983786);
   new_histo_group_VVV_wh3l_13TeV_met224->SetBinContent(18,0.003129966);
   new_histo_group_VVV_wh3l_13TeV_met224->SetBinContent(20,0.0005093239);
   new_histo_group_VVV_wh3l_13TeV_met224->SetBinContent(21,0.009463206);
   new_histo_group_VVV_wh3l_13TeV_met224->SetBinError(5,0.009294792);
   new_histo_group_VVV_wh3l_13TeV_met224->SetBinError(6,0.009472548);
   new_histo_group_VVV_wh3l_13TeV_met224->SetBinError(7,0.01060246);
   new_histo_group_VVV_wh3l_13TeV_met224->SetBinError(8,0.01171066);
   new_histo_group_VVV_wh3l_13TeV_met224->SetBinError(9,0.01154004);
   new_histo_group_VVV_wh3l_13TeV_met224->SetBinError(10,0.008847186);
   new_histo_group_VVV_wh3l_13TeV_met224->SetBinError(11,0.00557178);
   new_histo_group_VVV_wh3l_13TeV_met224->SetBinError(12,0.005388035);
   new_histo_group_VVV_wh3l_13TeV_met224->SetBinError(13,0.005748761);
   new_histo_group_VVV_wh3l_13TeV_met224->SetBinError(14,0.005675499);
   new_histo_group_VVV_wh3l_13TeV_met224->SetBinError(15,0.004145977);
   new_histo_group_VVV_wh3l_13TeV_met224->SetBinError(16,0.002791013);
   new_histo_group_VVV_wh3l_13TeV_met224->SetBinError(18,0.002570498);
   new_histo_group_VVV_wh3l_13TeV_met224->SetBinError(20,0.0005093239);
   new_histo_group_VVV_wh3l_13TeV_met224->SetBinError(21,0.004741006);
   new_histo_group_VVV_wh3l_13TeV_met224->SetEntries(180);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_13TeV_met224->SetFillColor(ci);
   new_histo_group_VVV_wh3l_13TeV_met224->SetFillStyle(3001);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_13TeV_met224->SetLineColor(ci);
   new_histo_group_VVV_wh3l_13TeV_met224->GetXaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_13TeV_met224->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_13TeV_met224->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_13TeV_met224->GetXaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_13TeV_met224->GetYaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_13TeV_met224->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_13TeV_met224->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_13TeV_met224->GetYaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_13TeV_met224->GetZaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_13TeV_met224->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_13TeV_met224->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_13TeV_met224->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_met->Add(new_histo_group_VVV_wh3l_13TeV_met,"");
   
   TH1D *new_histo_group_Vg_wh3l_13TeV_met225 = new TH1D("new_histo_group_Vg_wh3l_13TeV_met225","histo_Vg",20,0,200);
   new_histo_group_Vg_wh3l_13TeV_met225->SetBinContent(5,1.786107);
   new_histo_group_Vg_wh3l_13TeV_met225->SetBinContent(6,0.8620622);
   new_histo_group_Vg_wh3l_13TeV_met225->SetBinError(5,0.4950433);
   new_histo_group_Vg_wh3l_13TeV_met225->SetBinError(6,0.282646);
   new_histo_group_Vg_wh3l_13TeV_met225->SetEntries(42);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_13TeV_met225->SetFillColor(ci);
   new_histo_group_Vg_wh3l_13TeV_met225->SetFillStyle(3001);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_13TeV_met225->SetLineColor(ci);
   new_histo_group_Vg_wh3l_13TeV_met225->GetXaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_13TeV_met225->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_13TeV_met225->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_13TeV_met225->GetXaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_13TeV_met225->GetYaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_13TeV_met225->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_13TeV_met225->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_13TeV_met225->GetYaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_13TeV_met225->GetZaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_13TeV_met225->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_13TeV_met225->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_13TeV_met225->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_met->Add(new_histo_group_Vg_wh3l_13TeV_met,"");
   
   TH1D *new_histo_group_ZZ_wh3l_13TeV_met226 = new TH1D("new_histo_group_ZZ_wh3l_13TeV_met226","histo_ZZ",20,0,200);
   new_histo_group_ZZ_wh3l_13TeV_met226->SetBinContent(5,0.3133194);
   new_histo_group_ZZ_wh3l_13TeV_met226->SetBinContent(6,0.1496944);
   new_histo_group_ZZ_wh3l_13TeV_met226->SetBinContent(7,0.07189054);
   new_histo_group_ZZ_wh3l_13TeV_met226->SetBinContent(8,0.02711696);
   new_histo_group_ZZ_wh3l_13TeV_met226->SetBinContent(12,0.02856258);
   new_histo_group_ZZ_wh3l_13TeV_met226->SetBinContent(17,0.03513683);
   new_histo_group_ZZ_wh3l_13TeV_met226->SetBinError(5,0.1129063);
   new_histo_group_ZZ_wh3l_13TeV_met226->SetBinError(6,0.07994079);
   new_histo_group_ZZ_wh3l_13TeV_met226->SetBinError(7,0.05189561);
   new_histo_group_ZZ_wh3l_13TeV_met226->SetBinError(8,0.02711696);
   new_histo_group_ZZ_wh3l_13TeV_met226->SetBinError(12,0.02856258);
   new_histo_group_ZZ_wh3l_13TeV_met226->SetBinError(17,0.03513683);
   new_histo_group_ZZ_wh3l_13TeV_met226->SetEntries(18);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_13TeV_met226->SetFillColor(ci);
   new_histo_group_ZZ_wh3l_13TeV_met226->SetFillStyle(3001);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_13TeV_met226->SetLineColor(ci);
   new_histo_group_ZZ_wh3l_13TeV_met226->GetXaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_13TeV_met226->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_13TeV_met226->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_13TeV_met226->GetXaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_13TeV_met226->GetYaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_13TeV_met226->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_13TeV_met226->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_13TeV_met226->GetYaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_13TeV_met226->GetZaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_13TeV_met226->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_13TeV_met226->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_13TeV_met226->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_met->Add(new_histo_group_ZZ_wh3l_13TeV_met,"");
   
   TH1D *new_histo_group_WZ_wh3l_13TeV_met227 = new TH1D("new_histo_group_WZ_wh3l_13TeV_met227","histo_WZ",20,0,200);
   new_histo_group_WZ_wh3l_13TeV_met227->SetBinContent(5,2.343273);
   new_histo_group_WZ_wh3l_13TeV_met227->SetBinContent(6,1.810585);
   new_histo_group_WZ_wh3l_13TeV_met227->SetBinContent(7,1.170976);
   new_histo_group_WZ_wh3l_13TeV_met227->SetBinContent(8,0.7341842);
   new_histo_group_WZ_wh3l_13TeV_met227->SetBinContent(9,0.4243346);
   new_histo_group_WZ_wh3l_13TeV_met227->SetBinContent(10,0.2259791);
   new_histo_group_WZ_wh3l_13TeV_met227->SetBinContent(11,0.2022954);
   new_histo_group_WZ_wh3l_13TeV_met227->SetBinContent(12,0.1198472);
   new_histo_group_WZ_wh3l_13TeV_met227->SetBinContent(13,0.06011449);
   new_histo_group_WZ_wh3l_13TeV_met227->SetBinContent(14,0.02915374);
   new_histo_group_WZ_wh3l_13TeV_met227->SetBinContent(15,0.04689664);
   new_histo_group_WZ_wh3l_13TeV_met227->SetBinContent(16,0.03081638);
   new_histo_group_WZ_wh3l_13TeV_met227->SetBinContent(17,0.03048124);
   new_histo_group_WZ_wh3l_13TeV_met227->SetBinContent(18,0.02207966);
   new_histo_group_WZ_wh3l_13TeV_met227->SetBinContent(19,0.02528742);
   new_histo_group_WZ_wh3l_13TeV_met227->SetBinContent(20,0.02215892);
   new_histo_group_WZ_wh3l_13TeV_met227->SetBinContent(21,0.09075244);
   new_histo_group_WZ_wh3l_13TeV_met227->SetBinError(5,0.1129051);
   new_histo_group_WZ_wh3l_13TeV_met227->SetBinError(6,0.09982845);
   new_histo_group_WZ_wh3l_13TeV_met227->SetBinError(7,0.08004092);
   new_histo_group_WZ_wh3l_13TeV_met227->SetBinError(8,0.06315505);
   new_histo_group_WZ_wh3l_13TeV_met227->SetBinError(9,0.04744806);
   new_histo_group_WZ_wh3l_13TeV_met227->SetBinError(10,0.03374712);
   new_histo_group_WZ_wh3l_13TeV_met227->SetBinError(11,0.03311146);
   new_histo_group_WZ_wh3l_13TeV_met227->SetBinError(12,0.0248221);
   new_histo_group_WZ_wh3l_13TeV_met227->SetBinError(13,0.01841395);
   new_histo_group_WZ_wh3l_13TeV_met227->SetBinError(14,0.0120343);
   new_histo_group_WZ_wh3l_13TeV_met227->SetBinError(15,0.01597426);
   new_histo_group_WZ_wh3l_13TeV_met227->SetBinError(16,0.01256395);
   new_histo_group_WZ_wh3l_13TeV_met227->SetBinError(17,0.01274854);
   new_histo_group_WZ_wh3l_13TeV_met227->SetBinError(18,0.01104526);
   new_histo_group_WZ_wh3l_13TeV_met227->SetBinError(19,0.0114013);
   new_histo_group_WZ_wh3l_13TeV_met227->SetBinError(20,0.01049917);
   new_histo_group_WZ_wh3l_13TeV_met227->SetBinError(21,0.0220158);
   new_histo_group_WZ_wh3l_13TeV_met227->SetEntries(1516);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_13TeV_met227->SetFillColor(ci);
   new_histo_group_WZ_wh3l_13TeV_met227->SetFillStyle(3001);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_13TeV_met227->SetLineColor(ci);
   new_histo_group_WZ_wh3l_13TeV_met227->GetXaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_13TeV_met227->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_13TeV_met227->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_13TeV_met227->GetXaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_13TeV_met227->GetYaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_13TeV_met227->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_13TeV_met227->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_13TeV_met227->GetYaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_13TeV_met227->GetZaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_13TeV_met227->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_13TeV_met227->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_13TeV_met227->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_met->Add(new_histo_group_WZ_wh3l_13TeV_met,"");
   
   TH1D *new_histo_group_Higgs_wh3l_13TeV_met228 = new TH1D("new_histo_group_Higgs_wh3l_13TeV_met228","histo_H_htt",20,0,200);
   new_histo_group_Higgs_wh3l_13TeV_met228->SetBinContent(5,0.1796799);
   new_histo_group_Higgs_wh3l_13TeV_met228->SetBinContent(6,0.1401828);
   new_histo_group_Higgs_wh3l_13TeV_met228->SetBinContent(7,0.125272);
   new_histo_group_Higgs_wh3l_13TeV_met228->SetBinContent(8,0.1063228);
   new_histo_group_Higgs_wh3l_13TeV_met228->SetBinContent(9,0.08295243);
   new_histo_group_Higgs_wh3l_13TeV_met228->SetBinContent(10,0.06061446);
   new_histo_group_Higgs_wh3l_13TeV_met228->SetBinContent(11,0.04566123);
   new_histo_group_Higgs_wh3l_13TeV_met228->SetBinContent(12,0.02776478);
   new_histo_group_Higgs_wh3l_13TeV_met228->SetBinContent(13,0.01080609);
   new_histo_group_Higgs_wh3l_13TeV_met228->SetBinContent(14,0.01127461);
   new_histo_group_Higgs_wh3l_13TeV_met228->SetBinContent(15,0.001613931);
   new_histo_group_Higgs_wh3l_13TeV_met228->SetBinContent(16,0.005096324);
   new_histo_group_Higgs_wh3l_13TeV_met228->SetBinContent(17,0.001922132);
   new_histo_group_Higgs_wh3l_13TeV_met228->SetBinContent(18,0.004542303);
   new_histo_group_Higgs_wh3l_13TeV_met228->SetBinContent(19,0.0004186857);
   new_histo_group_Higgs_wh3l_13TeV_met228->SetBinContent(20,0.002418081);
   new_histo_group_Higgs_wh3l_13TeV_met228->SetBinContent(21,0.005465086);
   new_histo_group_Higgs_wh3l_13TeV_met228->SetBinError(5,0.01393619);
   new_histo_group_Higgs_wh3l_13TeV_met228->SetBinError(6,0.01220514);
   new_histo_group_Higgs_wh3l_13TeV_met228->SetBinError(7,0.01263252);
   new_histo_group_Higgs_wh3l_13TeV_met228->SetBinError(8,0.01111861);
   new_histo_group_Higgs_wh3l_13TeV_met228->SetBinError(9,0.01018289);
   new_histo_group_Higgs_wh3l_13TeV_met228->SetBinError(10,0.008843675);
   new_histo_group_Higgs_wh3l_13TeV_met228->SetBinError(11,0.007554753);
   new_histo_group_Higgs_wh3l_13TeV_met228->SetBinError(12,0.006072966);
   new_histo_group_Higgs_wh3l_13TeV_met228->SetBinError(13,0.003995662);
   new_histo_group_Higgs_wh3l_13TeV_met228->SetBinError(14,0.004050248);
   new_histo_group_Higgs_wh3l_13TeV_met228->SetBinError(15,0.001213535);
   new_histo_group_Higgs_wh3l_13TeV_met228->SetBinError(16,0.002444019);
   new_histo_group_Higgs_wh3l_13TeV_met228->SetBinError(17,0.001210363);
   new_histo_group_Higgs_wh3l_13TeV_met228->SetBinError(18,0.001906006);
   new_histo_group_Higgs_wh3l_13TeV_met228->SetBinError(19,0.0002964402);
   new_histo_group_Higgs_wh3l_13TeV_met228->SetBinError(20,0.001712831);
   new_histo_group_Higgs_wh3l_13TeV_met228->SetBinError(21,0.002635342);
   new_histo_group_Higgs_wh3l_13TeV_met228->SetEntries(1320);
   new_histo_group_Higgs_wh3l_13TeV_met228->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_13TeV_met228->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_13TeV_met228->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_13TeV_met228->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_13TeV_met228->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_met228->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_met228->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_13TeV_met228->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_13TeV_met228->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_met228->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_met228->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_13TeV_met228->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_13TeV_met228->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_met228->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_met228->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_met->Add(new_histo_group_Higgs_wh3l_13TeV_met,"");
   thsBackground_grouped_wh3l_13TeV_met->Draw("hist same");
   
   thsSignal_grouped_wh3l_13TeV_met = new THStack();
   thsSignal_grouped_wh3l_13TeV_met->SetName("thsSignal_grouped_wh3l_13TeV_met");
   thsSignal_grouped_wh3l_13TeV_met->SetTitle("thsSignal_grouped_wh3l_13TeV_met");
   
   TH1F *thsSignal_grouped_wh3l_13TeV_met_stack_46 = new TH1F("thsSignal_grouped_wh3l_13TeV_met_stack_46","thsSignal_grouped_wh3l_13TeV_met",20,0,200);
   thsSignal_grouped_wh3l_13TeV_met_stack_46->SetMinimum(0);
   thsSignal_grouped_wh3l_13TeV_met_stack_46->SetMaximum(0.2032969);
   thsSignal_grouped_wh3l_13TeV_met_stack_46->SetDirectory(0);
   thsSignal_grouped_wh3l_13TeV_met_stack_46->SetStats(0);
   thsSignal_grouped_wh3l_13TeV_met_stack_46->SetLineStyle(0);
   thsSignal_grouped_wh3l_13TeV_met_stack_46->SetMarkerStyle(20);
   thsSignal_grouped_wh3l_13TeV_met_stack_46->GetXaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_13TeV_met_stack_46->GetXaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_13TeV_met_stack_46->GetXaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_13TeV_met_stack_46->GetXaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_13TeV_met_stack_46->GetXaxis()->SetTitleOffset(0.9);
   thsSignal_grouped_wh3l_13TeV_met_stack_46->GetXaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_13TeV_met_stack_46->GetYaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_13TeV_met_stack_46->GetYaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_13TeV_met_stack_46->GetYaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_13TeV_met_stack_46->GetYaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_13TeV_met_stack_46->GetYaxis()->SetTitleOffset(1.25);
   thsSignal_grouped_wh3l_13TeV_met_stack_46->GetYaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_13TeV_met_stack_46->GetZaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_13TeV_met_stack_46->GetZaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_13TeV_met_stack_46->GetZaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_13TeV_met_stack_46->GetZaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_13TeV_met_stack_46->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_13TeV_met->SetHistogram(thsSignal_grouped_wh3l_13TeV_met_stack_46);
   
   
   TH1D *new_histo_group_Higgs_wh3l_13TeV_met229 = new TH1D("new_histo_group_Higgs_wh3l_13TeV_met229","histo_H_htt",20,0,200);
   new_histo_group_Higgs_wh3l_13TeV_met229->SetBinContent(5,0.1796799);
   new_histo_group_Higgs_wh3l_13TeV_met229->SetBinContent(6,0.1401828);
   new_histo_group_Higgs_wh3l_13TeV_met229->SetBinContent(7,0.125272);
   new_histo_group_Higgs_wh3l_13TeV_met229->SetBinContent(8,0.1063228);
   new_histo_group_Higgs_wh3l_13TeV_met229->SetBinContent(9,0.08295243);
   new_histo_group_Higgs_wh3l_13TeV_met229->SetBinContent(10,0.06061446);
   new_histo_group_Higgs_wh3l_13TeV_met229->SetBinContent(11,0.04566123);
   new_histo_group_Higgs_wh3l_13TeV_met229->SetBinContent(12,0.02776478);
   new_histo_group_Higgs_wh3l_13TeV_met229->SetBinContent(13,0.01080609);
   new_histo_group_Higgs_wh3l_13TeV_met229->SetBinContent(14,0.01127461);
   new_histo_group_Higgs_wh3l_13TeV_met229->SetBinContent(15,0.001613931);
   new_histo_group_Higgs_wh3l_13TeV_met229->SetBinContent(16,0.005096324);
   new_histo_group_Higgs_wh3l_13TeV_met229->SetBinContent(17,0.001922132);
   new_histo_group_Higgs_wh3l_13TeV_met229->SetBinContent(18,0.004542303);
   new_histo_group_Higgs_wh3l_13TeV_met229->SetBinContent(19,0.0004186857);
   new_histo_group_Higgs_wh3l_13TeV_met229->SetBinContent(20,0.002418081);
   new_histo_group_Higgs_wh3l_13TeV_met229->SetBinContent(21,0.005465086);
   new_histo_group_Higgs_wh3l_13TeV_met229->SetBinError(5,0.01393619);
   new_histo_group_Higgs_wh3l_13TeV_met229->SetBinError(6,0.01220514);
   new_histo_group_Higgs_wh3l_13TeV_met229->SetBinError(7,0.01263252);
   new_histo_group_Higgs_wh3l_13TeV_met229->SetBinError(8,0.01111861);
   new_histo_group_Higgs_wh3l_13TeV_met229->SetBinError(9,0.01018289);
   new_histo_group_Higgs_wh3l_13TeV_met229->SetBinError(10,0.008843675);
   new_histo_group_Higgs_wh3l_13TeV_met229->SetBinError(11,0.007554753);
   new_histo_group_Higgs_wh3l_13TeV_met229->SetBinError(12,0.006072966);
   new_histo_group_Higgs_wh3l_13TeV_met229->SetBinError(13,0.003995662);
   new_histo_group_Higgs_wh3l_13TeV_met229->SetBinError(14,0.004050248);
   new_histo_group_Higgs_wh3l_13TeV_met229->SetBinError(15,0.001213535);
   new_histo_group_Higgs_wh3l_13TeV_met229->SetBinError(16,0.002444019);
   new_histo_group_Higgs_wh3l_13TeV_met229->SetBinError(17,0.001210363);
   new_histo_group_Higgs_wh3l_13TeV_met229->SetBinError(18,0.001906006);
   new_histo_group_Higgs_wh3l_13TeV_met229->SetBinError(19,0.0002964402);
   new_histo_group_Higgs_wh3l_13TeV_met229->SetBinError(20,0.001712831);
   new_histo_group_Higgs_wh3l_13TeV_met229->SetBinError(21,0.002635342);
   new_histo_group_Higgs_wh3l_13TeV_met229->SetEntries(1320);
   new_histo_group_Higgs_wh3l_13TeV_met229->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_13TeV_met229->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_13TeV_met229->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_13TeV_met229->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_13TeV_met229->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_met229->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_met229->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_13TeV_met229->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_13TeV_met229->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_met229->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_met229->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_13TeV_met229->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_13TeV_met229->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_met229->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_met229->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_13TeV_met->Add(new_histo_group_Higgs_wh3l_13TeV_met,"");
   thsSignal_grouped_wh3l_13TeV_met->Draw("hist same noclear");
   
   Double_t _fx3045[20] = {
   5,
   15,
   25,
   35,
   45,
   55,
   65,
   75,
   85,
   95,
   105,
   115,
   125,
   135,
   145,
   155,
   165,
   175,
   185,
   195};
   Double_t _fy3045[20] = {
   0,
   0,
   0,
   0,
   6.725984,
   6.765574,
   2.000644,
   1.21612,
   1.639515,
   0.6183264,
   1.187943,
   0.2953546,
   -0.009826479,
   0.03679331,
   0.05346002,
   0.03480016,
   0.06561808,
   0.02520963,
   0.01709229,
   0.02266824};
   Double_t _felx3045[20] = {
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5};
   Double_t _fely3045[20] = {
   0,
   0,
   0,
   0,
   2.293093,
   2.359829,
   0.8895136,
   0.5366787,
   0.8907226,
   0.4300931,
   0.9602598,
   0.199354,
   0.1792296,
   0.02805131,
   0.02121717,
   0.01600474,
   0.04795063,
   0.01386988,
   0.01982038,
   0.01110388};
   Double_t _fehx3045[20] = {
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5};
   Double_t _fehy3045[20] = {
   0,
   0,
   0,
   0,
   2.292732,
   2.359446,
   0.9693116,
   0.6926626,
   0.8907092,
   0.6365972,
   0.9602554,
   0.1993379,
   0.1135091,
   0.02805103,
   0.0212272,
   0.01601969,
   0.04794383,
   0.01387106,
   0.01981621,
   0.01109749};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(20,_fx3045,_fy3045,_felx3045,_fehx3045,_fely3045,_fehy3045);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(12);
   grae->SetFillStyle(3004);
   grae->SetLineColor(12);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3045 = new TH1F("Graph_Graph3045","",100,0,220);
   Graph_Graph3045->SetMinimum(-1.120464);
   Graph_Graph3045->SetMaximum(10.05643);
   Graph_Graph3045->SetDirectory(0);
   Graph_Graph3045->SetStats(0);
   Graph_Graph3045->SetLineStyle(0);
   Graph_Graph3045->SetMarkerStyle(20);
   Graph_Graph3045->GetXaxis()->SetLabelFont(42);
   Graph_Graph3045->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3045->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3045->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3045->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3045->GetXaxis()->SetTitleFont(42);
   Graph_Graph3045->GetYaxis()->SetLabelFont(42);
   Graph_Graph3045->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3045->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3045->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3045->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3045->GetYaxis()->SetTitleFont(42);
   Graph_Graph3045->GetZaxis()->SetLabelFont(42);
   Graph_Graph3045->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3045->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3045->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3045->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3045);
   
   grae->Draw("2");
   
   Double_t _fx3046[20] = {
   5,
   15,
   25,
   35,
   45,
   55,
   65,
   75,
   85,
   95,
   105,
   115,
   125,
   135,
   145,
   155,
   165,
   175,
   185,
   195};
   Double_t _fy3046[20] = {
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
   Double_t _felx3046[20] = {
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5};
   Double_t _fely3046[20] = {
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
   Double_t _fehx3046[20] = {
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5};
   Double_t _fehy3046[20] = {
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
   grae = new TGraphAsymmErrors(20,_fx3046,_fy3046,_felx3046,_fehx3046,_fely3046,_fehy3046);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(1);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3046 = new TH1F("Graph_Graph3046","",100,0,220);
   Graph_Graph3046->SetMinimum(0);
   Graph_Graph3046->SetMaximum(1.262698);
   Graph_Graph3046->SetDirectory(0);
   Graph_Graph3046->SetStats(0);
   Graph_Graph3046->SetLineStyle(0);
   Graph_Graph3046->SetMarkerStyle(20);
   Graph_Graph3046->GetXaxis()->SetLabelFont(42);
   Graph_Graph3046->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3046->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3046->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3046->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3046->GetXaxis()->SetTitleFont(42);
   Graph_Graph3046->GetYaxis()->SetLabelFont(42);
   Graph_Graph3046->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3046->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3046->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3046->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3046->GetYaxis()->SetTitleFont(42);
   Graph_Graph3046->GetZaxis()->SetLabelFont(42);
   Graph_Graph3046->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3046->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3046->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3046->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3046);
   
   grae->Draw("p0");
   
   TLegend *leg = new TLegend(0.2,0.7,0.8,0.9,NULL,"brNDC");
   leg->SetTextFont(62);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("new_histo_group_Fake_wh3l_13TeV_met","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_13TeV_met","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_13TeV_met","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_13TeV_met","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_13TeV_met","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_13TeV_met","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_13TeV_met","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_13TeV_met","Data","EPL");
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
   entry=leg->AddEntry("new_histo_group_Fake_wh3l_13TeV_met","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_13TeV_met","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_13TeV_met","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_13TeV_met","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_13TeV_met","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_13TeV_met","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_13TeV_met","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_13TeV_met","Data","EPL");
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
   
   TH1F *hframe_copy230 = new TH1F("hframe_copy230","",1000,0,200);
   hframe_copy230->SetMinimum(0);
   hframe_copy230->SetMaximum(17.26439);
   hframe_copy230->SetDirectory(0);
   hframe_copy230->SetStats(0);
   hframe_copy230->SetLineStyle(0);
   hframe_copy230->SetMarkerStyle(20);
   hframe_copy230->GetXaxis()->SetTitle("pfmet [GeV]");
   hframe_copy230->GetXaxis()->SetNdivisions(506);
   hframe_copy230->GetXaxis()->SetLabelFont(42);
   hframe_copy230->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy230->GetXaxis()->SetLabelSize(0.05);
   hframe_copy230->GetXaxis()->SetTitleSize(0.06);
   hframe_copy230->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy230->GetXaxis()->SetTitleFont(42);
   hframe_copy230->GetYaxis()->SetTitle("Events");
   hframe_copy230->GetYaxis()->SetLabelFont(42);
   hframe_copy230->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy230->GetYaxis()->SetLabelSize(0.05);
   hframe_copy230->GetYaxis()->SetTitleSize(0.06);
   hframe_copy230->GetYaxis()->SetTitleOffset(1.25);
   hframe_copy230->GetYaxis()->SetTitleFont(42);
   hframe_copy230->GetZaxis()->SetLabelFont(42);
   hframe_copy230->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy230->GetZaxis()->SetLabelSize(0.05);
   hframe_copy230->GetZaxis()->SetTitleSize(0.06);
   hframe_copy230->GetZaxis()->SetTitleFont(42);
   hframe_copy230->Draw("sameaxis");
   ccwh3l_13TeV_met->Modified();
   ccwh3l_13TeV_met->cd();
   ccwh3l_13TeV_met->SetSelected(ccwh3l_13TeV_met);
}
