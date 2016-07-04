void c_wh3l_MET_JetV_13TeV_met()
{
//=========Macro generated from canvas: ccwh3l_MET_JetV_13TeV_met/cc
//=========  (Sun Jul  3 01:21:49 2016) by ROOT version6.02/13
   TCanvas *ccwh3l_MET_JetV_13TeV_met = new TCanvas("ccwh3l_MET_JetV_13TeV_met", "cc",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   ccwh3l_MET_JetV_13TeV_met->SetHighLightColor(2);
   ccwh3l_MET_JetV_13TeV_met->Range(-40,-0.7926829,210,5.304878);
   ccwh3l_MET_JetV_13TeV_met->SetFillColor(0);
   ccwh3l_MET_JetV_13TeV_met->SetBorderMode(0);
   ccwh3l_MET_JetV_13TeV_met->SetBorderSize(2);
   ccwh3l_MET_JetV_13TeV_met->SetTickx(1);
   ccwh3l_MET_JetV_13TeV_met->SetTicky(1);
   ccwh3l_MET_JetV_13TeV_met->SetLeftMargin(0.16);
   ccwh3l_MET_JetV_13TeV_met->SetRightMargin(0.04);
   ccwh3l_MET_JetV_13TeV_met->SetTopMargin(0.05);
   ccwh3l_MET_JetV_13TeV_met->SetBottomMargin(0.13);
   ccwh3l_MET_JetV_13TeV_met->SetFrameFillStyle(0);
   ccwh3l_MET_JetV_13TeV_met->SetFrameBorderMode(0);
   ccwh3l_MET_JetV_13TeV_met->SetFrameFillStyle(0);
   ccwh3l_MET_JetV_13TeV_met->SetFrameBorderMode(0);
   
   TH1F *hframe61 = new TH1F("hframe61","",1000,0,200);
   hframe61->SetMinimum(0);
   hframe61->SetMaximum(5);
   hframe61->SetDirectory(0);
   hframe61->SetStats(0);
   hframe61->SetLineStyle(0);
   hframe61->SetMarkerStyle(20);
   hframe61->GetXaxis()->SetTitle("pfmet [GeV]");
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
   
   THStack *thsBackground_grouped_wh3l_MET_JetV_13TeV_met = new THStack();
   thsBackground_grouped_wh3l_MET_JetV_13TeV_met->SetName("thsBackground_grouped_wh3l_MET_JetV_13TeV_met");
   thsBackground_grouped_wh3l_MET_JetV_13TeV_met->SetTitle("thsBackground_grouped_wh3l_MET_JetV_13TeV_met");
   
   TH1F *thsBackground_grouped_wh3l_MET_JetV_13TeV_met_stack_13 = new TH1F("thsBackground_grouped_wh3l_MET_JetV_13TeV_met_stack_13","thsBackground_grouped_wh3l_MET_JetV_13TeV_met",40,0,200);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_met_stack_13->SetMinimum(-0.4897);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_met_stack_13->SetMaximum(1.908931);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_met_stack_13->SetDirectory(0);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_met_stack_13->SetStats(0);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_met_stack_13->SetLineStyle(0);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_met_stack_13->SetMarkerStyle(20);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_met_stack_13->GetXaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_met_stack_13->GetXaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_met_stack_13->GetXaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_met_stack_13->GetXaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_met_stack_13->GetXaxis()->SetTitleOffset(0.9);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_met_stack_13->GetXaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_met_stack_13->GetYaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_met_stack_13->GetYaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_met_stack_13->GetYaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_met_stack_13->GetYaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_met_stack_13->GetYaxis()->SetTitleOffset(1.25);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_met_stack_13->GetYaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_met_stack_13->GetZaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_met_stack_13->GetZaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_met_stack_13->GetZaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_met_stack_13->GetZaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_met_stack_13->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_met->SetHistogram(thsBackground_grouped_wh3l_MET_JetV_13TeV_met_stack_13);
   
   
   TH1D *new_histo_group_Fake_wh3l_MET_JetV_13TeV_met62 = new TH1D("new_histo_group_Fake_wh3l_MET_JetV_13TeV_met62","histo_Fake",40,0,200);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_met62->SetBinContent(7,0.1398005);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_met62->SetBinContent(8,-0.247154);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_met62->SetBinContent(9,-0.1097654);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_met62->SetBinContent(11,0.6436369);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_met62->SetBinContent(12,0.9745436);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_met62->SetBinContent(13,0.383281);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_met62->SetBinContent(14,0.5858385);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_met62->SetBinContent(15,-0.007540809);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_met62->SetBinContent(16,-0.01160807);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_met62->SetBinContent(17,0.3651159);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_met62->SetBinContent(19,0.06737334);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_met62->SetBinContent(20,-0.1034349);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_met62->SetBinContent(21,-0.0005605229);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_met62->SetBinContent(22,0.1796949);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_met62->SetBinContent(23,0.1198117);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_met62->SetBinContent(25,-0.1741594);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_met62->SetBinContent(26,0.08972475);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_met62->SetBinContent(28,-0.006674166);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_met62->SetBinError(7,0.1482372);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_met62->SetBinError(8,0.242546);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_met62->SetBinError(9,0.08112018);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_met62->SetBinError(11,0.6434307);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_met62->SetBinError(12,0.8434855);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_met62->SetBinError(13,0.3840536);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_met62->SetBinError(14,0.5268493);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_met62->SetBinError(15,0.007540809);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_met62->SetBinError(16,0.008306922);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_met62->SetBinError(17,0.3651159);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_met62->SetBinError(19,0.06737334);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_met62->SetBinError(20,0.1034349);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_met62->SetBinError(21,0.0005605229);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_met62->SetBinError(22,0.12926);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_met62->SetBinError(23,0.1353149);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_met62->SetBinError(25,0.1236689);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_met62->SetBinError(26,0.08835359);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_met62->SetBinError(28,0.006674166);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_met62->SetEntries(34);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_met62->SetFillColor(ci);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_met62->SetFillStyle(3001);

   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_met62->SetLineColor(ci);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_met62->GetXaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_met62->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_met62->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_met62->GetXaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_met62->GetYaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_met62->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_met62->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_met62->GetYaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_met62->GetZaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_met62->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_met62->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_met62->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_met->Add(new_histo_group_Fake_wh3l_MET_JetV_13TeV_met,"");
   
   TH1D *new_histo_group_WW_wh3l_MET_JetV_13TeV_met63 = new TH1D("new_histo_group_WW_wh3l_MET_JetV_13TeV_met63","histo_WW",40,0,200);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_met63->SetBinContent(7,0.01039136);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_met63->SetBinContent(8,0.01708511);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_met63->SetBinContent(9,0.0161241);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_met63->SetBinError(7,0.01039136);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_met63->SetBinError(8,0.01708511);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_met63->SetBinError(9,0.0161241);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_met63->SetEntries(3);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_MET_JetV_13TeV_met63->SetFillColor(ci);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_met63->SetFillStyle(3001);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_MET_JetV_13TeV_met63->SetLineColor(ci);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_met63->GetXaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_met63->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_met63->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_met63->GetXaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_met63->GetYaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_met63->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_met63->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_met63->GetYaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_met63->GetZaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_met63->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_met63->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_met63->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_met->Add(new_histo_group_WW_wh3l_MET_JetV_13TeV_met,"");
   
   TH1D *new_histo_group_VVV_wh3l_MET_JetV_13TeV_met64 = new TH1D("new_histo_group_VVV_wh3l_MET_JetV_13TeV_met64","histo_VVV",40,0,200);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_met64->SetBinContent(7,0.007952595);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_met64->SetBinContent(8,0.00854235);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_met64->SetBinContent(9,0.003622773);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_met64->SetBinContent(10,0.005598023);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_met64->SetBinContent(11,0.004869179);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_met64->SetBinContent(12,0.007419942);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_met64->SetBinContent(13,0.006419309);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_met64->SetBinContent(14,0.009526072);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_met64->SetBinContent(15,0.004811641);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_met64->SetBinContent(16,0.01200458);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_met64->SetBinContent(17,0.01327637);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_met64->SetBinContent(18,0.007316411);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_met64->SetBinContent(19,0.001553701);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_met64->SetBinContent(20,0.001985012);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_met64->SetBinContent(21,0.005062835);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_met64->SetBinContent(23,0.003992955);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_met64->SetBinContent(24,0.002300175);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_met64->SetBinContent(25,0.004530524);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_met64->SetBinContent(26,4.526381e-05);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_met64->SetBinContent(27,0.002535048);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_met64->SetBinContent(28,0.007616213);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_met64->SetBinContent(29,0.002038841);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_met64->SetBinContent(31,0.002016974);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_met64->SetBinContent(41,0.004905505);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_met64->SetBinError(7,0.005386543);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_met64->SetBinError(8,0.005617942);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_met64->SetBinError(9,0.004701915);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_met64->SetBinError(10,0.003470652);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_met64->SetBinError(11,0.002947241);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_met64->SetBinError(12,0.005867807);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_met64->SetBinError(13,0.003786143);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_met64->SetBinError(14,0.004787257);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_met64->SetBinError(15,0.004882038);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_met64->SetBinError(16,0.004935911);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_met64->SetBinError(17,0.005558906);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_met64->SetBinError(18,0.004225305);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_met64->SetBinError(19,0.001553701);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_met64->SetBinError(20,0.004026253);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_met64->SetBinError(21,0.003580024);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_met64->SetBinError(23,0.002881353);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_met64->SetBinError(24,0.002300175);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_met64->SetBinError(25,0.003224334);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_met64->SetBinError(26,4.526381e-05);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_met64->SetBinError(27,0.001921361);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_met64->SetBinError(28,0.004449204);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_met64->SetBinError(29,0.002038841);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_met64->SetBinError(31,0.002016974);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_met64->SetBinError(41,0.00315896);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_met64->SetEntries(80);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_met64->SetFillColor(ci);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_met64->SetFillStyle(3001);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_met64->SetLineColor(ci);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_met64->GetXaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_met64->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_met64->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_met64->GetXaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_met64->GetYaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_met64->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_met64->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_met64->GetYaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_met64->GetZaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_met64->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_met64->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_met64->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_met->Add(new_histo_group_VVV_wh3l_MET_JetV_13TeV_met,"");
   
   TH1D *new_histo_group_Vg_wh3l_MET_JetV_13TeV_met65 = new TH1D("new_histo_group_Vg_wh3l_MET_JetV_13TeV_met65","histo_Vg",40,0,200);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_met65->SetBinContent(7,0.0522728);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_met65->SetBinError(7,0.0522728);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_met65->SetEntries(1);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_met65->SetFillColor(ci);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_met65->SetFillStyle(3001);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_met65->SetLineColor(ci);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_met65->GetXaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_met65->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_met65->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_met65->GetXaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_met65->GetYaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_met65->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_met65->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_met65->GetYaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_met65->GetZaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_met65->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_met65->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_met65->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_met->Add(new_histo_group_Vg_wh3l_MET_JetV_13TeV_met,"");
   
   TH1D *new_histo_group_ZZ_wh3l_MET_JetV_13TeV_met66 = new TH1D("new_histo_group_ZZ_wh3l_MET_JetV_13TeV_met66","histo_ZZ",40,0,200);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_met66->SetBinContent(12,0.0427135);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_met66->SetBinContent(33,0.03513683);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_met66->SetBinError(12,0.0427135);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_met66->SetBinError(33,0.03513683);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_met66->SetEntries(2);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_met66->SetFillColor(ci);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_met66->SetFillStyle(3001);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_met66->SetLineColor(ci);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_met66->GetXaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_met66->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_met66->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_met66->GetXaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_met66->GetYaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_met66->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_met66->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_met66->GetYaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_met66->GetZaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_met66->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_met66->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_met66->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_met->Add(new_histo_group_ZZ_wh3l_MET_JetV_13TeV_met,"");
   
   TH1D *new_histo_group_WZ_wh3l_MET_JetV_13TeV_met67 = new TH1D("new_histo_group_WZ_wh3l_MET_JetV_13TeV_met67","histo_WZ",40,0,200);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_met67->SetBinContent(7,0.08156419);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_met67->SetBinContent(8,0.09184984);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_met67->SetBinContent(9,0.07323917);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_met67->SetBinContent(10,0.08179345);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_met67->SetBinContent(11,0.05067255);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_met67->SetBinContent(12,0.0639946);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_met67->SetBinContent(13,0.02452878);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_met67->SetBinContent(14,0.06200586);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_met67->SetBinContent(15,0.03898559);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_met67->SetBinContent(16,0.03424067);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_met67->SetBinContent(17,0.007426803);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_met67->SetBinContent(19,0.004833103);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_met67->SetBinContent(20,0.02114356);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_met67->SetBinContent(21,0.006664773);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_met67->SetBinContent(29,0.001838737);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_met67->SetBinContent(40,0.002384166);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_met67->SetBinContent(41,0.01734289);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_met67->SetBinError(7,0.02112314);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_met67->SetBinError(8,0.02221865);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_met67->SetBinError(9,0.01943063);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_met67->SetBinError(10,0.02052262);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_met67->SetBinError(11,0.01726617);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_met67->SetBinError(12,0.01840657);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_met67->SetBinError(13,0.01174418);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_met67->SetBinError(14,0.01812446);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_met67->SetBinError(15,0.01436785);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_met67->SetBinError(16,0.01407766);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_met67->SetBinError(17,0.004774667);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_met67->SetBinError(19,0.004833103);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_met67->SetBinError(20,0.01062875);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_met67->SetBinError(21,0.006664773);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_met67->SetBinError(29,0.001838737);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_met67->SetBinError(40,0.002384166);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_met67->SetBinError(41,0.01002816);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_met67->SetEntries(136);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_met67->SetFillColor(ci);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_met67->SetFillStyle(3001);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_met67->SetLineColor(ci);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_met67->GetXaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_met67->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_met67->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_met67->GetXaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_met67->GetYaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_met67->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_met67->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_met67->GetYaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_met67->GetZaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_met67->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_met67->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_met67->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_met->Add(new_histo_group_WZ_wh3l_MET_JetV_13TeV_met,"");
   
   TH1D *new_histo_group_Higgs_wh3l_MET_JetV_13TeV_met68 = new TH1D("new_histo_group_Higgs_wh3l_MET_JetV_13TeV_met68","histo_H_htt",40,0,200);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_met68->SetBinContent(7,0.01956145);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_met68->SetBinContent(8,0.03138857);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_met68->SetBinContent(9,0.02964481);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_met68->SetBinContent(10,0.02853278);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_met68->SetBinContent(11,0.032758);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_met68->SetBinContent(12,0.01281156);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_met68->SetBinContent(13,0.01264401);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_met68->SetBinContent(14,0.01360819);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_met68->SetBinContent(15,0.01854132);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_met68->SetBinContent(16,0.01403862);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_met68->SetBinContent(17,0.011894);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_met68->SetBinContent(18,0.01165339);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_met68->SetBinContent(19,0.008873759);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_met68->SetBinContent(20,0.008309545);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_met68->SetBinContent(21,0.004056639);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_met68->SetBinContent(22,0.007186472);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_met68->SetBinContent(23,0.005757642);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_met68->SetBinContent(24,0.003953004);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_met68->SetBinContent(25,0.0005110262);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_met68->SetBinContent(26,0.0001964025);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_met68->SetBinContent(27,0.002348849);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_met68->SetBinContent(28,0.001481666);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_met68->SetBinContent(31,1.055247e-07);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_met68->SetBinContent(35,0.001083794);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_met68->SetBinContent(36,0.0003885943);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_met68->SetBinContent(37,0.0002200187);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_met68->SetBinContent(41,0.002107488);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_met68->SetBinError(7,0.004251344);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_met68->SetBinError(8,0.005691733);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_met68->SetBinError(9,0.005524285);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_met68->SetBinError(10,0.005357557);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_met68->SetBinError(11,0.00592462);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_met68->SetBinError(12,0.003788148);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_met68->SetBinError(13,0.003800751);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_met68->SetBinError(14,0.004366509);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_met68->SetBinError(15,0.004335827);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_met68->SetBinError(16,0.003590716);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_met68->SetBinError(17,0.004015193);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_met68->SetBinError(18,0.004039716);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_met68->SetBinError(19,0.00332251);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_met68->SetBinError(20,0.003067198);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_met68->SetBinError(21,0.001883477);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_met68->SetBinError(22,0.003135234);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_met68->SetBinError(23,0.002864978);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_met68->SetBinError(24,0.002100841);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_met68->SetBinError(25,0.0003684835);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_met68->SetBinError(26,0.0001964025);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_met68->SetBinError(27,0.001823034);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_met68->SetBinError(28,0.001162599);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_met68->SetBinError(31,1.055247e-07);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_met68->SetBinError(35,0.000591505);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_met68->SetBinError(36,0.0002748678);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_met68->SetBinError(37,0.0002200187);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_met68->SetBinError(41,0.00113601);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_met68->SetEntries(512);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_met68->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_met68->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_met68->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_met68->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_met68->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_met68->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_met68->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_met68->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_met68->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_met68->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_met68->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_met68->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_met68->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_met68->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_met68->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_met->Add(new_histo_group_Higgs_wh3l_MET_JetV_13TeV_met,"");
   thsBackground_grouped_wh3l_MET_JetV_13TeV_met->Draw("hist same");
   
   thsSignal_grouped_wh3l_MET_JetV_13TeV_met = new THStack();
   thsSignal_grouped_wh3l_MET_JetV_13TeV_met->SetName("thsSignal_grouped_wh3l_MET_JetV_13TeV_met");
   thsSignal_grouped_wh3l_MET_JetV_13TeV_met->SetTitle("thsSignal_grouped_wh3l_MET_JetV_13TeV_met");
   
   TH1F *thsSignal_grouped_wh3l_MET_JetV_13TeV_met_stack_14 = new TH1F("thsSignal_grouped_wh3l_MET_JetV_13TeV_met_stack_14","thsSignal_grouped_wh3l_MET_JetV_13TeV_met",40,0,200);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_met_stack_14->SetMinimum(0);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_met_stack_14->SetMaximum(0.04061675);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_met_stack_14->SetDirectory(0);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_met_stack_14->SetStats(0);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_met_stack_14->SetLineStyle(0);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_met_stack_14->SetMarkerStyle(20);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_met_stack_14->GetXaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_met_stack_14->GetXaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_met_stack_14->GetXaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_met_stack_14->GetXaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_met_stack_14->GetXaxis()->SetTitleOffset(0.9);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_met_stack_14->GetXaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_met_stack_14->GetYaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_met_stack_14->GetYaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_met_stack_14->GetYaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_met_stack_14->GetYaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_met_stack_14->GetYaxis()->SetTitleOffset(1.25);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_met_stack_14->GetYaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_met_stack_14->GetZaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_met_stack_14->GetZaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_met_stack_14->GetZaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_met_stack_14->GetZaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_met_stack_14->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_met->SetHistogram(thsSignal_grouped_wh3l_MET_JetV_13TeV_met_stack_14);
   
   
   TH1D *new_histo_group_Higgs_wh3l_MET_JetV_13TeV_met69 = new TH1D("new_histo_group_Higgs_wh3l_MET_JetV_13TeV_met69","histo_H_htt",40,0,200);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_met69->SetBinContent(7,0.01956145);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_met69->SetBinContent(8,0.03138857);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_met69->SetBinContent(9,0.02964481);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_met69->SetBinContent(10,0.02853278);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_met69->SetBinContent(11,0.032758);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_met69->SetBinContent(12,0.01281156);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_met69->SetBinContent(13,0.01264401);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_met69->SetBinContent(14,0.01360819);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_met69->SetBinContent(15,0.01854132);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_met69->SetBinContent(16,0.01403862);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_met69->SetBinContent(17,0.011894);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_met69->SetBinContent(18,0.01165339);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_met69->SetBinContent(19,0.008873759);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_met69->SetBinContent(20,0.008309545);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_met69->SetBinContent(21,0.004056639);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_met69->SetBinContent(22,0.007186472);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_met69->SetBinContent(23,0.005757642);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_met69->SetBinContent(24,0.003953004);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_met69->SetBinContent(25,0.0005110262);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_met69->SetBinContent(26,0.0001964025);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_met69->SetBinContent(27,0.002348849);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_met69->SetBinContent(28,0.001481666);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_met69->SetBinContent(31,1.055247e-07);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_met69->SetBinContent(35,0.001083794);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_met69->SetBinContent(36,0.0003885943);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_met69->SetBinContent(37,0.0002200187);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_met69->SetBinContent(41,0.002107488);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_met69->SetBinError(7,0.004251344);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_met69->SetBinError(8,0.005691733);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_met69->SetBinError(9,0.005524285);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_met69->SetBinError(10,0.005357557);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_met69->SetBinError(11,0.00592462);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_met69->SetBinError(12,0.003788148);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_met69->SetBinError(13,0.003800751);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_met69->SetBinError(14,0.004366509);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_met69->SetBinError(15,0.004335827);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_met69->SetBinError(16,0.003590716);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_met69->SetBinError(17,0.004015193);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_met69->SetBinError(18,0.004039716);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_met69->SetBinError(19,0.00332251);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_met69->SetBinError(20,0.003067198);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_met69->SetBinError(21,0.001883477);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_met69->SetBinError(22,0.003135234);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_met69->SetBinError(23,0.002864978);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_met69->SetBinError(24,0.002100841);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_met69->SetBinError(25,0.0003684835);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_met69->SetBinError(26,0.0001964025);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_met69->SetBinError(27,0.001823034);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_met69->SetBinError(28,0.001162599);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_met69->SetBinError(31,1.055247e-07);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_met69->SetBinError(35,0.000591505);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_met69->SetBinError(36,0.0002748678);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_met69->SetBinError(37,0.0002200187);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_met69->SetBinError(41,0.00113601);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_met69->SetEntries(512);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_met69->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_met69->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_met69->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_met69->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_met69->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_met69->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_met69->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_met69->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_met69->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_met69->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_met69->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_met69->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_met69->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_met69->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_met69->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_met->Add(new_histo_group_Higgs_wh3l_MET_JetV_13TeV_met,"");
   thsSignal_grouped_wh3l_MET_JetV_13TeV_met->Draw("hist same noclear");
   
   Double_t _fx3013[40] = {
   2.5,
   7.5,
   12.5,
   17.5,
   22.5,
   27.5,
   32.5,
   37.5,
   42.5,
   47.5,
   52.5,
   57.5,
   62.5,
   67.5,
   72.5,
   77.5,
   82.5,
   87.5,
   92.5,
   97.5,
   102.5,
   107.5,
   112.5,
   117.5,
   122.5,
   127.5,
   132.5,
   137.5,
   142.5,
   147.5,
   152.5,
   157.5,
   162.5,
   167.5,
   172.5,
   177.5,
   182.5,
   187.5,
   192.5,
   197.5};
   Double_t _fy3013[40] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0.2919814,
   -0.1296767,
   -0.01677937,
   0.08739147,
   0.6991786,
   1.088672,
   0.4142291,
   0.6573704,
   0.03625642,
   0.03463718,
   0.385819,
   0.007316411,
   0.07376014,
   -0.08030633,
   0.01116708,
   0.1796949,
   0.1238047,
   0.002300175,
   -0.1696289,
   0.08977001,
   0.002535048,
   0.0009420467,
   0.003877577,
   0,
   0.002016973,
   0,
   0.03513683,
   0,
   0,
   0,
   0,
   0,
   0,
   0.002384166};
   Double_t _felx3013[40] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5};
   Double_t _fely3013[40] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0.2343579,
   0.3003355,
   0.1263892,
   0.02485928,
   0.7008548,
   0.9723024,
   0.4208195,
   0.586839,
   0.02731096,
   0.03017379,
   0.3968243,
   0.008451464,
   0.07745339,
   0.1215857,
   0.0119451,
   0.1437488,
   0.1297231,
   0.003257643,
   0.1408476,
   0.09381125,
   0.002609521,
   0.0136841,
   0.004382112,
   0,
   0.002858217,
   0,
   0.03516259,
   0,
   0,
   0,
   0,
   0,
   0,
   0.002394048};
   Double_t _fehx3013[40] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5};
   Double_t _fehy3013[40] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0.2425731,
   0.3003355,
   0.1274092,
   0.02485605,
   0.7008545,
   0.9723025,
   0.4215512,
   0.5868397,
   0.02737436,
   0.03016674,
   0.3968243,
   0.008451468,
   0.07745339,
   0.1235338,
   0.01193886,
   0.1437488,
   0.1444739,
   0.003254093,
   0.1408476,
   0.09381124,
   0.002611838,
   0.01368412,
   0.004382155,
   0,
   0.002860817,
   0,
   0.03516361,
   0,
   0,
   0,
   0,
   0,
   0,
   0.002396137};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(40,_fx3013,_fy3013,_felx3013,_fehx3013,_fely3013,_fehy3013);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(12);
   grae->SetFillStyle(3004);
   grae->SetLineColor(12);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3013 = new TH1F("Graph_Graph3013","",100,0,220);
   Graph_Graph3013->SetMinimum(-0.6791108);
   Graph_Graph3013->SetMaximum(2.310073);
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
   
   Double_t _fx3014[40] = {
   2.5,
   7.5,
   12.5,
   17.5,
   22.5,
   27.5,
   32.5,
   37.5,
   42.5,
   47.5,
   52.5,
   57.5,
   62.5,
   67.5,
   72.5,
   77.5,
   82.5,
   87.5,
   92.5,
   97.5,
   102.5,
   107.5,
   112.5,
   117.5,
   122.5,
   127.5,
   132.5,
   137.5,
   142.5,
   147.5,
   152.5,
   157.5,
   162.5,
   167.5,
   172.5,
   177.5,
   182.5,
   187.5,
   192.5,
   197.5};
   Double_t _fy3014[40] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   1,
   1,
   0,
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
   0};
   Double_t _felx3014[40] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5};
   Double_t _fely3014[40] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0.8272524,
   0.8272524,
   0,
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
   0};
   Double_t _fehx3014[40] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5};
   Double_t _fehy3014[40] = {
   1.147908,
   1.147908,
   1.147908,
   1.147908,
   1.147908,
   1.147908,
   1.147908,
   2.29957,
   2.29957,
   1.147908,
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
   1.147908};
   grae = new TGraphAsymmErrors(40,_fx3014,_fy3014,_felx3014,_fehx3014,_fely3014,_fehy3014);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(1);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3014 = new TH1F("Graph_Graph3014","",100,0,220);
   Graph_Graph3014->SetMinimum(0);
   Graph_Graph3014->SetMaximum(3.629527);
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
   
   TLegend *leg = new TLegend(0.2,0.7,0.8,0.9,NULL,"brNDC");
   leg->SetTextFont(62);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("new_histo_group_Fake_wh3l_MET_JetV_13TeV_met","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_MET_JetV_13TeV_met","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_MET_JetV_13TeV_met","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_MET_JetV_13TeV_met","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_MET_JetV_13TeV_met","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_MET_JetV_13TeV_met","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_MET_JetV_13TeV_met","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_MET_JetV_13TeV_met","Data","EPL");
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
   entry=leg->AddEntry("new_histo_group_Fake_wh3l_MET_JetV_13TeV_met","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_MET_JetV_13TeV_met","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_MET_JetV_13TeV_met","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_MET_JetV_13TeV_met","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_MET_JetV_13TeV_met","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_MET_JetV_13TeV_met","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_MET_JetV_13TeV_met","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_MET_JetV_13TeV_met","Data","EPL");
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
   
   TH1F *hframe_copy70 = new TH1F("hframe_copy70","",1000,0,200);
   hframe_copy70->SetMinimum(0);
   hframe_copy70->SetMaximum(5);
   hframe_copy70->SetDirectory(0);
   hframe_copy70->SetStats(0);
   hframe_copy70->SetLineStyle(0);
   hframe_copy70->SetMarkerStyle(20);
   hframe_copy70->GetXaxis()->SetTitle("pfmet [GeV]");
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
   ccwh3l_MET_JetV_13TeV_met->Modified();
   ccwh3l_MET_JetV_13TeV_met->cd();
   ccwh3l_MET_JetV_13TeV_met->SetSelected(ccwh3l_MET_JetV_13TeV_met);
}
