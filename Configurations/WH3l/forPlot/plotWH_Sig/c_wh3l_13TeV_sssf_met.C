void c_wh3l_13TeV_sssf_met()
{
//=========Macro generated from canvas: ccwh3l_13TeV_sssf_met/cc
//=========  (Wed Jun 29 01:34:23 2016) by ROOT version6.02/13
   TCanvas *ccwh3l_13TeV_sssf_met = new TCanvas("ccwh3l_13TeV_sssf_met", "cc",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   ccwh3l_13TeV_sssf_met->SetHighLightColor(2);
   ccwh3l_13TeV_sssf_met->Range(-40,-0.4336226,210,2.901936);
   ccwh3l_13TeV_sssf_met->SetFillColor(0);
   ccwh3l_13TeV_sssf_met->SetBorderMode(0);
   ccwh3l_13TeV_sssf_met->SetBorderSize(2);
   ccwh3l_13TeV_sssf_met->SetTickx(1);
   ccwh3l_13TeV_sssf_met->SetTicky(1);
   ccwh3l_13TeV_sssf_met->SetLeftMargin(0.16);
   ccwh3l_13TeV_sssf_met->SetRightMargin(0.04);
   ccwh3l_13TeV_sssf_met->SetTopMargin(0.05);
   ccwh3l_13TeV_sssf_met->SetBottomMargin(0.13);
   ccwh3l_13TeV_sssf_met->SetFrameFillStyle(0);
   ccwh3l_13TeV_sssf_met->SetFrameBorderMode(0);
   ccwh3l_13TeV_sssf_met->SetFrameFillStyle(0);
   ccwh3l_13TeV_sssf_met->SetFrameBorderMode(0);
   
   TH1F *hframe641 = new TH1F("hframe641","",1000,0,200);
   hframe641->SetMinimum(0);
   hframe641->SetMaximum(2.735158);
   hframe641->SetDirectory(0);
   hframe641->SetStats(0);
   hframe641->SetLineStyle(0);
   hframe641->SetMarkerStyle(20);
   hframe641->GetXaxis()->SetTitle("pfmet [GeV]");
   hframe641->GetXaxis()->SetNdivisions(506);
   hframe641->GetXaxis()->SetLabelFont(42);
   hframe641->GetXaxis()->SetLabelOffset(0.007);
   hframe641->GetXaxis()->SetLabelSize(0.05);
   hframe641->GetXaxis()->SetTitleSize(0.06);
   hframe641->GetXaxis()->SetTitleOffset(0.9);
   hframe641->GetXaxis()->SetTitleFont(42);
   hframe641->GetYaxis()->SetTitle("Events");
   hframe641->GetYaxis()->SetLabelFont(42);
   hframe641->GetYaxis()->SetLabelOffset(0.007);
   hframe641->GetYaxis()->SetLabelSize(0.05);
   hframe641->GetYaxis()->SetTitleSize(0.06);
   hframe641->GetYaxis()->SetTitleOffset(1.25);
   hframe641->GetYaxis()->SetTitleFont(42);
   hframe641->GetZaxis()->SetLabelFont(42);
   hframe641->GetZaxis()->SetLabelOffset(0.007);
   hframe641->GetZaxis()->SetLabelSize(0.05);
   hframe641->GetZaxis()->SetTitleSize(0.06);
   hframe641->GetZaxis()->SetTitleFont(42);
   hframe641->Draw(" ");
   
   THStack *thsBackground_grouped_wh3l_13TeV_sssf_met = new THStack();
   thsBackground_grouped_wh3l_13TeV_sssf_met->SetName("thsBackground_grouped_wh3l_13TeV_sssf_met");
   thsBackground_grouped_wh3l_13TeV_sssf_met->SetTitle("thsBackground_grouped_wh3l_13TeV_sssf_met");
   
   TH1F *thsBackground_grouped_wh3l_13TeV_sssf_met_stack_129 = new TH1F("thsBackground_grouped_wh3l_13TeV_sssf_met_stack_129","thsBackground_grouped_wh3l_13TeV_sssf_met",40,0,200);
   thsBackground_grouped_wh3l_13TeV_sssf_met_stack_129->SetMinimum(-0.4897);
   thsBackground_grouped_wh3l_13TeV_sssf_met_stack_129->SetMaximum(1.908931);
   thsBackground_grouped_wh3l_13TeV_sssf_met_stack_129->SetDirectory(0);
   thsBackground_grouped_wh3l_13TeV_sssf_met_stack_129->SetStats(0);
   thsBackground_grouped_wh3l_13TeV_sssf_met_stack_129->SetLineStyle(0);
   thsBackground_grouped_wh3l_13TeV_sssf_met_stack_129->SetMarkerStyle(20);
   thsBackground_grouped_wh3l_13TeV_sssf_met_stack_129->GetXaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_13TeV_sssf_met_stack_129->GetXaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_13TeV_sssf_met_stack_129->GetXaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_13TeV_sssf_met_stack_129->GetXaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_13TeV_sssf_met_stack_129->GetXaxis()->SetTitleOffset(0.9);
   thsBackground_grouped_wh3l_13TeV_sssf_met_stack_129->GetXaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_sssf_met_stack_129->GetYaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_13TeV_sssf_met_stack_129->GetYaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_13TeV_sssf_met_stack_129->GetYaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_13TeV_sssf_met_stack_129->GetYaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_13TeV_sssf_met_stack_129->GetYaxis()->SetTitleOffset(1.25);
   thsBackground_grouped_wh3l_13TeV_sssf_met_stack_129->GetYaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_sssf_met_stack_129->GetZaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_13TeV_sssf_met_stack_129->GetZaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_13TeV_sssf_met_stack_129->GetZaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_13TeV_sssf_met_stack_129->GetZaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_13TeV_sssf_met_stack_129->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_sssf_met->SetHistogram(thsBackground_grouped_wh3l_13TeV_sssf_met_stack_129);
   
   
   TH1D *new_histo_group_Fake_wh3l_13TeV_sssf_met642 = new TH1D("new_histo_group_Fake_wh3l_13TeV_sssf_met642","histo_Fake",40,0,200);
   new_histo_group_Fake_wh3l_13TeV_sssf_met642->SetBinContent(7,0.1398005);
   new_histo_group_Fake_wh3l_13TeV_sssf_met642->SetBinContent(8,-0.247154);
   new_histo_group_Fake_wh3l_13TeV_sssf_met642->SetBinContent(9,-0.1097654);
   new_histo_group_Fake_wh3l_13TeV_sssf_met642->SetBinContent(11,0.6436369);
   new_histo_group_Fake_wh3l_13TeV_sssf_met642->SetBinContent(12,0.9745436);
   new_histo_group_Fake_wh3l_13TeV_sssf_met642->SetBinContent(13,0.383281);
   new_histo_group_Fake_wh3l_13TeV_sssf_met642->SetBinContent(14,0.5858385);
   new_histo_group_Fake_wh3l_13TeV_sssf_met642->SetBinContent(15,-0.007540809);
   new_histo_group_Fake_wh3l_13TeV_sssf_met642->SetBinContent(16,-0.01160807);
   new_histo_group_Fake_wh3l_13TeV_sssf_met642->SetBinContent(17,0.3651159);
   new_histo_group_Fake_wh3l_13TeV_sssf_met642->SetBinContent(19,0.06737334);
   new_histo_group_Fake_wh3l_13TeV_sssf_met642->SetBinContent(20,-0.1034349);
   new_histo_group_Fake_wh3l_13TeV_sssf_met642->SetBinContent(21,-0.0005605229);
   new_histo_group_Fake_wh3l_13TeV_sssf_met642->SetBinContent(22,0.1796949);
   new_histo_group_Fake_wh3l_13TeV_sssf_met642->SetBinContent(23,0.1339182);
   new_histo_group_Fake_wh3l_13TeV_sssf_met642->SetBinContent(25,-0.1741594);
   new_histo_group_Fake_wh3l_13TeV_sssf_met642->SetBinContent(26,0.08972475);
   new_histo_group_Fake_wh3l_13TeV_sssf_met642->SetBinContent(28,-0.006674166);
   new_histo_group_Fake_wh3l_13TeV_sssf_met642->SetBinError(7,0.1482372);
   new_histo_group_Fake_wh3l_13TeV_sssf_met642->SetBinError(8,0.242546);
   new_histo_group_Fake_wh3l_13TeV_sssf_met642->SetBinError(9,0.08112018);
   new_histo_group_Fake_wh3l_13TeV_sssf_met642->SetBinError(11,0.6434307);
   new_histo_group_Fake_wh3l_13TeV_sssf_met642->SetBinError(12,0.8434855);
   new_histo_group_Fake_wh3l_13TeV_sssf_met642->SetBinError(13,0.3840536);
   new_histo_group_Fake_wh3l_13TeV_sssf_met642->SetBinError(14,0.5268493);
   new_histo_group_Fake_wh3l_13TeV_sssf_met642->SetBinError(15,0.007540809);
   new_histo_group_Fake_wh3l_13TeV_sssf_met642->SetBinError(16,0.008306922);
   new_histo_group_Fake_wh3l_13TeV_sssf_met642->SetBinError(17,0.3651159);
   new_histo_group_Fake_wh3l_13TeV_sssf_met642->SetBinError(19,0.06737334);
   new_histo_group_Fake_wh3l_13TeV_sssf_met642->SetBinError(20,0.1034349);
   new_histo_group_Fake_wh3l_13TeV_sssf_met642->SetBinError(21,0.0005605229);
   new_histo_group_Fake_wh3l_13TeV_sssf_met642->SetBinError(22,0.12926);
   new_histo_group_Fake_wh3l_13TeV_sssf_met642->SetBinError(23,0.1345152);
   new_histo_group_Fake_wh3l_13TeV_sssf_met642->SetBinError(25,0.1236689);
   new_histo_group_Fake_wh3l_13TeV_sssf_met642->SetBinError(26,0.08835359);
   new_histo_group_Fake_wh3l_13TeV_sssf_met642->SetBinError(28,0.006674166);
   new_histo_group_Fake_wh3l_13TeV_sssf_met642->SetEntries(34);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_13TeV_sssf_met642->SetFillColor(ci);
   new_histo_group_Fake_wh3l_13TeV_sssf_met642->SetFillStyle(3001);

   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_13TeV_sssf_met642->SetLineColor(ci);
   new_histo_group_Fake_wh3l_13TeV_sssf_met642->GetXaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_13TeV_sssf_met642->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_13TeV_sssf_met642->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_13TeV_sssf_met642->GetXaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_13TeV_sssf_met642->GetYaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_13TeV_sssf_met642->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_13TeV_sssf_met642->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_13TeV_sssf_met642->GetYaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_13TeV_sssf_met642->GetZaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_13TeV_sssf_met642->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_13TeV_sssf_met642->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_13TeV_sssf_met642->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_sssf_met->Add(new_histo_group_Fake_wh3l_13TeV_sssf_met,"");
   
   TH1D *new_histo_group_WW_wh3l_13TeV_sssf_met643 = new TH1D("new_histo_group_WW_wh3l_13TeV_sssf_met643","histo_WW",40,0,200);
   new_histo_group_WW_wh3l_13TeV_sssf_met643->SetBinContent(7,0.01039136);
   new_histo_group_WW_wh3l_13TeV_sssf_met643->SetBinContent(9,0.0161241);
   new_histo_group_WW_wh3l_13TeV_sssf_met643->SetBinError(7,0.01039136);
   new_histo_group_WW_wh3l_13TeV_sssf_met643->SetBinError(9,0.0161241);
   new_histo_group_WW_wh3l_13TeV_sssf_met643->SetEntries(2);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_13TeV_sssf_met643->SetFillColor(ci);
   new_histo_group_WW_wh3l_13TeV_sssf_met643->SetFillStyle(3001);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_13TeV_sssf_met643->SetLineColor(ci);
   new_histo_group_WW_wh3l_13TeV_sssf_met643->GetXaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_13TeV_sssf_met643->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_13TeV_sssf_met643->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_13TeV_sssf_met643->GetXaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_13TeV_sssf_met643->GetYaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_13TeV_sssf_met643->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_13TeV_sssf_met643->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_13TeV_sssf_met643->GetYaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_13TeV_sssf_met643->GetZaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_13TeV_sssf_met643->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_13TeV_sssf_met643->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_13TeV_sssf_met643->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_sssf_met->Add(new_histo_group_WW_wh3l_13TeV_sssf_met,"");
   
   TH1D *new_histo_group_VVV_wh3l_13TeV_sssf_met644 = new TH1D("new_histo_group_VVV_wh3l_13TeV_sssf_met644","histo_VVV",40,0,200);
   new_histo_group_VVV_wh3l_13TeV_sssf_met644->SetBinContent(27,0.0007784473);
   new_histo_group_VVV_wh3l_13TeV_sssf_met644->SetBinContent(41,0.0005490761);
   new_histo_group_VVV_wh3l_13TeV_sssf_met644->SetBinError(27,0.0007784473);
   new_histo_group_VVV_wh3l_13TeV_sssf_met644->SetBinError(41,0.0005490761);
   new_histo_group_VVV_wh3l_13TeV_sssf_met644->SetEntries(2);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_13TeV_sssf_met644->SetFillColor(ci);
   new_histo_group_VVV_wh3l_13TeV_sssf_met644->SetFillStyle(3001);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_13TeV_sssf_met644->SetLineColor(ci);
   new_histo_group_VVV_wh3l_13TeV_sssf_met644->GetXaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_13TeV_sssf_met644->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_13TeV_sssf_met644->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_13TeV_sssf_met644->GetXaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_13TeV_sssf_met644->GetYaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_13TeV_sssf_met644->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_13TeV_sssf_met644->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_13TeV_sssf_met644->GetYaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_13TeV_sssf_met644->GetZaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_13TeV_sssf_met644->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_13TeV_sssf_met644->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_13TeV_sssf_met644->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_sssf_met->Add(new_histo_group_VVV_wh3l_13TeV_sssf_met,"");
   
   TH1D *new_histo_group_Vg_wh3l_13TeV_sssf_met645 = new TH1D("new_histo_group_Vg_wh3l_13TeV_sssf_met645","histo_Vg",40,0,200);
   new_histo_group_Vg_wh3l_13TeV_sssf_met645->SetBinContent(7,0.0522728);
   new_histo_group_Vg_wh3l_13TeV_sssf_met645->SetBinError(7,0.0522728);
   new_histo_group_Vg_wh3l_13TeV_sssf_met645->SetEntries(1);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_13TeV_sssf_met645->SetFillColor(ci);
   new_histo_group_Vg_wh3l_13TeV_sssf_met645->SetFillStyle(3001);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_13TeV_sssf_met645->SetLineColor(ci);
   new_histo_group_Vg_wh3l_13TeV_sssf_met645->GetXaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_13TeV_sssf_met645->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_13TeV_sssf_met645->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_13TeV_sssf_met645->GetXaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_13TeV_sssf_met645->GetYaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_13TeV_sssf_met645->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_13TeV_sssf_met645->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_13TeV_sssf_met645->GetYaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_13TeV_sssf_met645->GetZaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_13TeV_sssf_met645->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_13TeV_sssf_met645->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_13TeV_sssf_met645->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_sssf_met->Add(new_histo_group_Vg_wh3l_13TeV_sssf_met,"");
   
   TH1D *new_histo_group_ZZ_wh3l_13TeV_sssf_met646 = new TH1D("new_histo_group_ZZ_wh3l_13TeV_sssf_met646","histo_ZZ",40,0,200);
   new_histo_group_ZZ_wh3l_13TeV_sssf_met646->SetBinContent(12,0.0427135);
   new_histo_group_ZZ_wh3l_13TeV_sssf_met646->SetBinContent(33,0.03513683);
   new_histo_group_ZZ_wh3l_13TeV_sssf_met646->SetBinError(12,0.0427135);
   new_histo_group_ZZ_wh3l_13TeV_sssf_met646->SetBinError(33,0.03513683);
   new_histo_group_ZZ_wh3l_13TeV_sssf_met646->SetEntries(2);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_13TeV_sssf_met646->SetFillColor(ci);
   new_histo_group_ZZ_wh3l_13TeV_sssf_met646->SetFillStyle(3001);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_13TeV_sssf_met646->SetLineColor(ci);
   new_histo_group_ZZ_wh3l_13TeV_sssf_met646->GetXaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_13TeV_sssf_met646->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_13TeV_sssf_met646->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_13TeV_sssf_met646->GetXaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_13TeV_sssf_met646->GetYaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_13TeV_sssf_met646->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_13TeV_sssf_met646->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_13TeV_sssf_met646->GetYaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_13TeV_sssf_met646->GetZaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_13TeV_sssf_met646->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_13TeV_sssf_met646->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_13TeV_sssf_met646->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_sssf_met->Add(new_histo_group_ZZ_wh3l_13TeV_sssf_met,"");
   
   TH1D *new_histo_group_WZ_wh3l_13TeV_sssf_met647 = new TH1D("new_histo_group_WZ_wh3l_13TeV_sssf_met647","histo_WZ",40,0,200);
   new_histo_group_WZ_wh3l_13TeV_sssf_met647->SetBinContent(7,0.07284566);
   new_histo_group_WZ_wh3l_13TeV_sssf_met647->SetBinContent(8,0.08097914);
   new_histo_group_WZ_wh3l_13TeV_sssf_met647->SetBinContent(9,0.06761621);
   new_histo_group_WZ_wh3l_13TeV_sssf_met647->SetBinContent(10,0.08179345);
   new_histo_group_WZ_wh3l_13TeV_sssf_met647->SetBinContent(11,0.04503963);
   new_histo_group_WZ_wh3l_13TeV_sssf_met647->SetBinContent(12,0.0639946);
   new_histo_group_WZ_wh3l_13TeV_sssf_met647->SetBinContent(13,0.02452878);
   new_histo_group_WZ_wh3l_13TeV_sssf_met647->SetBinContent(14,0.06200586);
   new_histo_group_WZ_wh3l_13TeV_sssf_met647->SetBinContent(15,0.03420971);
   new_histo_group_WZ_wh3l_13TeV_sssf_met647->SetBinContent(16,0.03424067);
   new_histo_group_WZ_wh3l_13TeV_sssf_met647->SetBinContent(17,0.007426803);
   new_histo_group_WZ_wh3l_13TeV_sssf_met647->SetBinContent(19,0.004833103);
   new_histo_group_WZ_wh3l_13TeV_sssf_met647->SetBinContent(20,0.02114356);
   new_histo_group_WZ_wh3l_13TeV_sssf_met647->SetBinContent(21,0.006664773);
   new_histo_group_WZ_wh3l_13TeV_sssf_met647->SetBinContent(29,0.001838737);
   new_histo_group_WZ_wh3l_13TeV_sssf_met647->SetBinContent(40,0.002384166);
   new_histo_group_WZ_wh3l_13TeV_sssf_met647->SetBinContent(41,0.011118);
   new_histo_group_WZ_wh3l_13TeV_sssf_met647->SetBinError(7,0.02018386);
   new_histo_group_WZ_wh3l_13TeV_sssf_met647->SetBinError(8,0.02081386);
   new_histo_group_WZ_wh3l_13TeV_sssf_met647->SetBinError(9,0.01859924);
   new_histo_group_WZ_wh3l_13TeV_sssf_met647->SetBinError(10,0.02052262);
   new_histo_group_WZ_wh3l_13TeV_sssf_met647->SetBinError(11,0.01632149);
   new_histo_group_WZ_wh3l_13TeV_sssf_met647->SetBinError(12,0.01840657);
   new_histo_group_WZ_wh3l_13TeV_sssf_met647->SetBinError(13,0.01174418);
   new_histo_group_WZ_wh3l_13TeV_sssf_met647->SetBinError(14,0.01812446);
   new_histo_group_WZ_wh3l_13TeV_sssf_met647->SetBinError(15,0.01355086);
   new_histo_group_WZ_wh3l_13TeV_sssf_met647->SetBinError(16,0.01407766);
   new_histo_group_WZ_wh3l_13TeV_sssf_met647->SetBinError(17,0.004774667);
   new_histo_group_WZ_wh3l_13TeV_sssf_met647->SetBinError(19,0.004833103);
   new_histo_group_WZ_wh3l_13TeV_sssf_met647->SetBinError(20,0.01062875);
   new_histo_group_WZ_wh3l_13TeV_sssf_met647->SetBinError(21,0.006664773);
   new_histo_group_WZ_wh3l_13TeV_sssf_met647->SetBinError(29,0.001838737);
   new_histo_group_WZ_wh3l_13TeV_sssf_met647->SetBinError(40,0.002384166);
   new_histo_group_WZ_wh3l_13TeV_sssf_met647->SetBinError(41,0.00786224);
   new_histo_group_WZ_wh3l_13TeV_sssf_met647->SetEntries(128);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_13TeV_sssf_met647->SetFillColor(ci);
   new_histo_group_WZ_wh3l_13TeV_sssf_met647->SetFillStyle(3001);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_13TeV_sssf_met647->SetLineColor(ci);
   new_histo_group_WZ_wh3l_13TeV_sssf_met647->GetXaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_13TeV_sssf_met647->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_13TeV_sssf_met647->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_13TeV_sssf_met647->GetXaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_13TeV_sssf_met647->GetYaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_13TeV_sssf_met647->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_13TeV_sssf_met647->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_13TeV_sssf_met647->GetYaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_13TeV_sssf_met647->GetZaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_13TeV_sssf_met647->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_13TeV_sssf_met647->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_13TeV_sssf_met647->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_sssf_met->Add(new_histo_group_WZ_wh3l_13TeV_sssf_met,"");
   
   TH1D *new_histo_group_Higgs_wh3l_13TeV_sssf_met648 = new TH1D("new_histo_group_Higgs_wh3l_13TeV_sssf_met648","histo_H_htt",40,0,200);
   new_histo_group_Higgs_wh3l_13TeV_sssf_met648->SetBinContent(7,0.01956145);
   new_histo_group_Higgs_wh3l_13TeV_sssf_met648->SetBinContent(8,0.03176251);
   new_histo_group_Higgs_wh3l_13TeV_sssf_met648->SetBinContent(9,0.03428932);
   new_histo_group_Higgs_wh3l_13TeV_sssf_met648->SetBinContent(10,0.02853278);
   new_histo_group_Higgs_wh3l_13TeV_sssf_met648->SetBinContent(11,0.032758);
   new_histo_group_Higgs_wh3l_13TeV_sssf_met648->SetBinContent(12,0.01281156);
   new_histo_group_Higgs_wh3l_13TeV_sssf_met648->SetBinContent(13,0.01269928);
   new_histo_group_Higgs_wh3l_13TeV_sssf_met648->SetBinContent(14,0.01360819);
   new_histo_group_Higgs_wh3l_13TeV_sssf_met648->SetBinContent(15,0.01894099);
   new_histo_group_Higgs_wh3l_13TeV_sssf_met648->SetBinContent(16,0.01403862);
   new_histo_group_Higgs_wh3l_13TeV_sssf_met648->SetBinContent(17,0.011894);
   new_histo_group_Higgs_wh3l_13TeV_sssf_met648->SetBinContent(18,0.01235514);
   new_histo_group_Higgs_wh3l_13TeV_sssf_met648->SetBinContent(19,0.008995511);
   new_histo_group_Higgs_wh3l_13TeV_sssf_met648->SetBinContent(20,0.008309545);
   new_histo_group_Higgs_wh3l_13TeV_sssf_met648->SetBinContent(21,0.004056639);
   new_histo_group_Higgs_wh3l_13TeV_sssf_met648->SetBinContent(22,0.007186472);
   new_histo_group_Higgs_wh3l_13TeV_sssf_met648->SetBinContent(23,0.005757642);
   new_histo_group_Higgs_wh3l_13TeV_sssf_met648->SetBinContent(24,0.003953004);
   new_histo_group_Higgs_wh3l_13TeV_sssf_met648->SetBinContent(25,0.0005110262);
   new_histo_group_Higgs_wh3l_13TeV_sssf_met648->SetBinContent(26,0.0001964025);
   new_histo_group_Higgs_wh3l_13TeV_sssf_met648->SetBinContent(27,0.002348849);
   new_histo_group_Higgs_wh3l_13TeV_sssf_met648->SetBinContent(28,0.001481666);
   new_histo_group_Higgs_wh3l_13TeV_sssf_met648->SetBinContent(31,1.055247e-07);
   new_histo_group_Higgs_wh3l_13TeV_sssf_met648->SetBinContent(35,0.001083794);
   new_histo_group_Higgs_wh3l_13TeV_sssf_met648->SetBinContent(36,0.0003885943);
   new_histo_group_Higgs_wh3l_13TeV_sssf_met648->SetBinContent(37,0.0002200187);
   new_histo_group_Higgs_wh3l_13TeV_sssf_met648->SetBinContent(41,0.002107488);
   new_histo_group_Higgs_wh3l_13TeV_sssf_met648->SetBinError(7,0.004251344);
   new_histo_group_Higgs_wh3l_13TeV_sssf_met648->SetBinError(8,0.005704003);
   new_histo_group_Higgs_wh3l_13TeV_sssf_met648->SetBinError(9,0.006080002);
   new_histo_group_Higgs_wh3l_13TeV_sssf_met648->SetBinError(10,0.005357557);
   new_histo_group_Higgs_wh3l_13TeV_sssf_met648->SetBinError(11,0.00592462);
   new_histo_group_Higgs_wh3l_13TeV_sssf_met648->SetBinError(12,0.003788148);
   new_histo_group_Higgs_wh3l_13TeV_sssf_met648->SetBinError(13,0.003801153);
   new_histo_group_Higgs_wh3l_13TeV_sssf_met648->SetBinError(14,0.004366509);
   new_histo_group_Higgs_wh3l_13TeV_sssf_met648->SetBinError(15,0.004347069);
   new_histo_group_Higgs_wh3l_13TeV_sssf_met648->SetBinError(16,0.003590716);
   new_histo_group_Higgs_wh3l_13TeV_sssf_met648->SetBinError(17,0.004015193);
   new_histo_group_Higgs_wh3l_13TeV_sssf_met648->SetBinError(18,0.004100214);
   new_histo_group_Higgs_wh3l_13TeV_sssf_met648->SetBinError(19,0.003324741);
   new_histo_group_Higgs_wh3l_13TeV_sssf_met648->SetBinError(20,0.003067198);
   new_histo_group_Higgs_wh3l_13TeV_sssf_met648->SetBinError(21,0.001883477);
   new_histo_group_Higgs_wh3l_13TeV_sssf_met648->SetBinError(22,0.003135234);
   new_histo_group_Higgs_wh3l_13TeV_sssf_met648->SetBinError(23,0.002864978);
   new_histo_group_Higgs_wh3l_13TeV_sssf_met648->SetBinError(24,0.002100841);
   new_histo_group_Higgs_wh3l_13TeV_sssf_met648->SetBinError(25,0.0003684835);
   new_histo_group_Higgs_wh3l_13TeV_sssf_met648->SetBinError(26,0.0001964025);
   new_histo_group_Higgs_wh3l_13TeV_sssf_met648->SetBinError(27,0.001823034);
   new_histo_group_Higgs_wh3l_13TeV_sssf_met648->SetBinError(28,0.001162599);
   new_histo_group_Higgs_wh3l_13TeV_sssf_met648->SetBinError(31,1.055247e-07);
   new_histo_group_Higgs_wh3l_13TeV_sssf_met648->SetBinError(35,0.000591505);
   new_histo_group_Higgs_wh3l_13TeV_sssf_met648->SetBinError(36,0.0002748678);
   new_histo_group_Higgs_wh3l_13TeV_sssf_met648->SetBinError(37,0.0002200187);
   new_histo_group_Higgs_wh3l_13TeV_sssf_met648->SetBinError(41,0.00113601);
   new_histo_group_Higgs_wh3l_13TeV_sssf_met648->SetEntries(522);
   new_histo_group_Higgs_wh3l_13TeV_sssf_met648->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_13TeV_sssf_met648->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_13TeV_sssf_met648->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_13TeV_sssf_met648->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_13TeV_sssf_met648->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_sssf_met648->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_sssf_met648->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_13TeV_sssf_met648->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_13TeV_sssf_met648->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_sssf_met648->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_sssf_met648->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_13TeV_sssf_met648->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_13TeV_sssf_met648->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_sssf_met648->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_sssf_met648->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_sssf_met->Add(new_histo_group_Higgs_wh3l_13TeV_sssf_met,"");
   thsBackground_grouped_wh3l_13TeV_sssf_met->Draw("hist same");
   
   thsSignal_grouped_wh3l_13TeV_sssf_met = new THStack();
   thsSignal_grouped_wh3l_13TeV_sssf_met->SetName("thsSignal_grouped_wh3l_13TeV_sssf_met");
   thsSignal_grouped_wh3l_13TeV_sssf_met->SetTitle("thsSignal_grouped_wh3l_13TeV_sssf_met");
   
   TH1F *thsSignal_grouped_wh3l_13TeV_sssf_met_stack_130 = new TH1F("thsSignal_grouped_wh3l_13TeV_sssf_met_stack_130","thsSignal_grouped_wh3l_13TeV_sssf_met",40,0,200);
   thsSignal_grouped_wh3l_13TeV_sssf_met_stack_130->SetMinimum(0);
   thsSignal_grouped_wh3l_13TeV_sssf_met_stack_130->SetMaximum(0.04238779);
   thsSignal_grouped_wh3l_13TeV_sssf_met_stack_130->SetDirectory(0);
   thsSignal_grouped_wh3l_13TeV_sssf_met_stack_130->SetStats(0);
   thsSignal_grouped_wh3l_13TeV_sssf_met_stack_130->SetLineStyle(0);
   thsSignal_grouped_wh3l_13TeV_sssf_met_stack_130->SetMarkerStyle(20);
   thsSignal_grouped_wh3l_13TeV_sssf_met_stack_130->GetXaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_13TeV_sssf_met_stack_130->GetXaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_13TeV_sssf_met_stack_130->GetXaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_13TeV_sssf_met_stack_130->GetXaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_13TeV_sssf_met_stack_130->GetXaxis()->SetTitleOffset(0.9);
   thsSignal_grouped_wh3l_13TeV_sssf_met_stack_130->GetXaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_13TeV_sssf_met_stack_130->GetYaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_13TeV_sssf_met_stack_130->GetYaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_13TeV_sssf_met_stack_130->GetYaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_13TeV_sssf_met_stack_130->GetYaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_13TeV_sssf_met_stack_130->GetYaxis()->SetTitleOffset(1.25);
   thsSignal_grouped_wh3l_13TeV_sssf_met_stack_130->GetYaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_13TeV_sssf_met_stack_130->GetZaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_13TeV_sssf_met_stack_130->GetZaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_13TeV_sssf_met_stack_130->GetZaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_13TeV_sssf_met_stack_130->GetZaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_13TeV_sssf_met_stack_130->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_13TeV_sssf_met->SetHistogram(thsSignal_grouped_wh3l_13TeV_sssf_met_stack_130);
   
   
   TH1D *new_histo_group_Higgs_wh3l_13TeV_sssf_met649 = new TH1D("new_histo_group_Higgs_wh3l_13TeV_sssf_met649","histo_H_htt",40,0,200);
   new_histo_group_Higgs_wh3l_13TeV_sssf_met649->SetBinContent(7,0.01956145);
   new_histo_group_Higgs_wh3l_13TeV_sssf_met649->SetBinContent(8,0.03176251);
   new_histo_group_Higgs_wh3l_13TeV_sssf_met649->SetBinContent(9,0.03428932);
   new_histo_group_Higgs_wh3l_13TeV_sssf_met649->SetBinContent(10,0.02853278);
   new_histo_group_Higgs_wh3l_13TeV_sssf_met649->SetBinContent(11,0.032758);
   new_histo_group_Higgs_wh3l_13TeV_sssf_met649->SetBinContent(12,0.01281156);
   new_histo_group_Higgs_wh3l_13TeV_sssf_met649->SetBinContent(13,0.01269928);
   new_histo_group_Higgs_wh3l_13TeV_sssf_met649->SetBinContent(14,0.01360819);
   new_histo_group_Higgs_wh3l_13TeV_sssf_met649->SetBinContent(15,0.01894099);
   new_histo_group_Higgs_wh3l_13TeV_sssf_met649->SetBinContent(16,0.01403862);
   new_histo_group_Higgs_wh3l_13TeV_sssf_met649->SetBinContent(17,0.011894);
   new_histo_group_Higgs_wh3l_13TeV_sssf_met649->SetBinContent(18,0.01235514);
   new_histo_group_Higgs_wh3l_13TeV_sssf_met649->SetBinContent(19,0.008995511);
   new_histo_group_Higgs_wh3l_13TeV_sssf_met649->SetBinContent(20,0.008309545);
   new_histo_group_Higgs_wh3l_13TeV_sssf_met649->SetBinContent(21,0.004056639);
   new_histo_group_Higgs_wh3l_13TeV_sssf_met649->SetBinContent(22,0.007186472);
   new_histo_group_Higgs_wh3l_13TeV_sssf_met649->SetBinContent(23,0.005757642);
   new_histo_group_Higgs_wh3l_13TeV_sssf_met649->SetBinContent(24,0.003953004);
   new_histo_group_Higgs_wh3l_13TeV_sssf_met649->SetBinContent(25,0.0005110262);
   new_histo_group_Higgs_wh3l_13TeV_sssf_met649->SetBinContent(26,0.0001964025);
   new_histo_group_Higgs_wh3l_13TeV_sssf_met649->SetBinContent(27,0.002348849);
   new_histo_group_Higgs_wh3l_13TeV_sssf_met649->SetBinContent(28,0.001481666);
   new_histo_group_Higgs_wh3l_13TeV_sssf_met649->SetBinContent(31,1.055247e-07);
   new_histo_group_Higgs_wh3l_13TeV_sssf_met649->SetBinContent(35,0.001083794);
   new_histo_group_Higgs_wh3l_13TeV_sssf_met649->SetBinContent(36,0.0003885943);
   new_histo_group_Higgs_wh3l_13TeV_sssf_met649->SetBinContent(37,0.0002200187);
   new_histo_group_Higgs_wh3l_13TeV_sssf_met649->SetBinContent(41,0.002107488);
   new_histo_group_Higgs_wh3l_13TeV_sssf_met649->SetBinError(7,0.004251344);
   new_histo_group_Higgs_wh3l_13TeV_sssf_met649->SetBinError(8,0.005704003);
   new_histo_group_Higgs_wh3l_13TeV_sssf_met649->SetBinError(9,0.006080002);
   new_histo_group_Higgs_wh3l_13TeV_sssf_met649->SetBinError(10,0.005357557);
   new_histo_group_Higgs_wh3l_13TeV_sssf_met649->SetBinError(11,0.00592462);
   new_histo_group_Higgs_wh3l_13TeV_sssf_met649->SetBinError(12,0.003788148);
   new_histo_group_Higgs_wh3l_13TeV_sssf_met649->SetBinError(13,0.003801153);
   new_histo_group_Higgs_wh3l_13TeV_sssf_met649->SetBinError(14,0.004366509);
   new_histo_group_Higgs_wh3l_13TeV_sssf_met649->SetBinError(15,0.004347069);
   new_histo_group_Higgs_wh3l_13TeV_sssf_met649->SetBinError(16,0.003590716);
   new_histo_group_Higgs_wh3l_13TeV_sssf_met649->SetBinError(17,0.004015193);
   new_histo_group_Higgs_wh3l_13TeV_sssf_met649->SetBinError(18,0.004100214);
   new_histo_group_Higgs_wh3l_13TeV_sssf_met649->SetBinError(19,0.003324741);
   new_histo_group_Higgs_wh3l_13TeV_sssf_met649->SetBinError(20,0.003067198);
   new_histo_group_Higgs_wh3l_13TeV_sssf_met649->SetBinError(21,0.001883477);
   new_histo_group_Higgs_wh3l_13TeV_sssf_met649->SetBinError(22,0.003135234);
   new_histo_group_Higgs_wh3l_13TeV_sssf_met649->SetBinError(23,0.002864978);
   new_histo_group_Higgs_wh3l_13TeV_sssf_met649->SetBinError(24,0.002100841);
   new_histo_group_Higgs_wh3l_13TeV_sssf_met649->SetBinError(25,0.0003684835);
   new_histo_group_Higgs_wh3l_13TeV_sssf_met649->SetBinError(26,0.0001964025);
   new_histo_group_Higgs_wh3l_13TeV_sssf_met649->SetBinError(27,0.001823034);
   new_histo_group_Higgs_wh3l_13TeV_sssf_met649->SetBinError(28,0.001162599);
   new_histo_group_Higgs_wh3l_13TeV_sssf_met649->SetBinError(31,1.055247e-07);
   new_histo_group_Higgs_wh3l_13TeV_sssf_met649->SetBinError(35,0.000591505);
   new_histo_group_Higgs_wh3l_13TeV_sssf_met649->SetBinError(36,0.0002748678);
   new_histo_group_Higgs_wh3l_13TeV_sssf_met649->SetBinError(37,0.0002200187);
   new_histo_group_Higgs_wh3l_13TeV_sssf_met649->SetBinError(41,0.00113601);
   new_histo_group_Higgs_wh3l_13TeV_sssf_met649->SetEntries(522);
   new_histo_group_Higgs_wh3l_13TeV_sssf_met649->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_13TeV_sssf_met649->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_13TeV_sssf_met649->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_13TeV_sssf_met649->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_13TeV_sssf_met649->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_sssf_met649->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_sssf_met649->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_13TeV_sssf_met649->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_13TeV_sssf_met649->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_sssf_met649->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_sssf_met649->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_13TeV_sssf_met649->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_13TeV_sssf_met649->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_sssf_met649->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_sssf_met649->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_13TeV_sssf_met->Add(new_histo_group_Higgs_wh3l_13TeV_sssf_met,"");
   thsSignal_grouped_wh3l_13TeV_sssf_met->Draw("hist same noclear");
   
   Double_t _fx3129[40] = {
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
   Double_t _fy3129[40] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0.2753103,
   -0.1661748,
   -0.0260251,
   0.08179345,
   0.6886765,
   1.081252,
   0.4078098,
   0.6478444,
   0.0266689,
   0.0226326,
   0.3725426,
   0,
   0.07220644,
   -0.08229134,
   0.00610425,
   0.1796949,
   0.1339182,
   0,
   -0.1741594,
   0.08972475,
   0.0007784473,
   -0.006674166,
   0.001838737,
   0,
   0,
   0,
   0.03513683,
   0,
   0,
   0,
   0,
   0,
   0,
   0.002384166};
   Double_t _felx3129[40] = {
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
   Double_t _fely3129[40] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0.2280343,
   0.2772118,
   0.1221016,
   0.02076888,
   0.6971532,
   0.9667807,
   0.4171829,
   0.5822768,
   0.02128522,
   0.02279915,
   0.3913433,
   0,
   0.07595935,
   0.1196747,
   0.007231534,
   0.1437488,
   0.1418838,
   0,
   0.1378753,
   0.09376859,
   0.0007790763,
   0.007071152,
   0.001839675,
   0,
   0,
   0,
   0.03516259,
   0,
   0,
   0,
   0,
   0,
   0,
   0.002394048};
   Double_t _fehx3129[40] = {
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
   Double_t _fehy3129[40] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0.2362466,
   0.2772122,
   0.1220948,
   0.02076668,
   0.6971529,
   0.9667808,
   0.4179141,
   0.5822775,
   0.02128531,
   0.02279789,
   0.3913433,
   0,
   0.07595935,
   0.1196732,
   0.007231749,
   0.1437488,
   0.1424474,
   0,
   0.1378754,
   0.09376858,
   0.0007790833,
   0.007071152,
   0.001839739,
   0,
   0,
   0,
   0.03516361,
   0,
   0,
   0,
   0,
   0,
   0,
   0.002396137};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(40,_fx3129,_fy3129,_felx3129,_fehx3129,_fely3129,_fehy3129);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(12);
   grae->SetFillStyle(3004);
   grae->SetLineColor(12);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3129 = new TH1F("Graph_Graph3129","",100,0,220);
   Graph_Graph3129->SetMinimum(-0.6925285);
   Graph_Graph3129->SetMaximum(2.297174);
   Graph_Graph3129->SetDirectory(0);
   Graph_Graph3129->SetStats(0);
   Graph_Graph3129->SetLineStyle(0);
   Graph_Graph3129->SetMarkerStyle(20);
   Graph_Graph3129->GetXaxis()->SetLabelFont(42);
   Graph_Graph3129->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3129->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3129->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3129->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3129->GetXaxis()->SetTitleFont(42);
   Graph_Graph3129->GetYaxis()->SetLabelFont(42);
   Graph_Graph3129->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3129->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3129->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3129->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3129->GetYaxis()->SetTitleFont(42);
   Graph_Graph3129->GetZaxis()->SetLabelFont(42);
   Graph_Graph3129->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3129->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3129->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3129->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3129);
   
   grae->Draw("2");
   
   Double_t _fx3130[40] = {
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
   Double_t _fy3130[40] = {
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
   Double_t _felx3130[40] = {
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
   Double_t _fely3130[40] = {
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
   Double_t _fehx3130[40] = {
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
   Double_t _fehy3130[40] = {
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
   grae = new TGraphAsymmErrors(40,_fx3130,_fy3130,_felx3130,_fehx3130,_fely3130,_fehy3130);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(1);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3130 = new TH1F("Graph_Graph3130","",100,0,220);
   Graph_Graph3130->SetMinimum(0);
   Graph_Graph3130->SetMaximum(1.262698);
   Graph_Graph3130->SetDirectory(0);
   Graph_Graph3130->SetStats(0);
   Graph_Graph3130->SetLineStyle(0);
   Graph_Graph3130->SetMarkerStyle(20);
   Graph_Graph3130->GetXaxis()->SetLabelFont(42);
   Graph_Graph3130->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3130->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3130->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3130->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3130->GetXaxis()->SetTitleFont(42);
   Graph_Graph3130->GetYaxis()->SetLabelFont(42);
   Graph_Graph3130->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3130->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3130->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3130->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3130->GetYaxis()->SetTitleFont(42);
   Graph_Graph3130->GetZaxis()->SetLabelFont(42);
   Graph_Graph3130->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3130->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3130->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3130->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3130);
   
   grae->Draw("p0");
   
   TLegend *leg = new TLegend(0.2,0.7,0.8,0.9,NULL,"brNDC");
   leg->SetTextFont(62);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("new_histo_group_Fake_wh3l_13TeV_sssf_met","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_13TeV_sssf_met","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_13TeV_sssf_met","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_13TeV_sssf_met","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_13TeV_sssf_met","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_13TeV_sssf_met","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_13TeV_sssf_met","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_13TeV_sssf_met","Data","EPL");
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
   entry=leg->AddEntry("new_histo_group_Fake_wh3l_13TeV_sssf_met","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_13TeV_sssf_met","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_13TeV_sssf_met","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_13TeV_sssf_met","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_13TeV_sssf_met","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_13TeV_sssf_met","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_13TeV_sssf_met","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_13TeV_sssf_met","Data","EPL");
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
   
   TH1F *hframe_copy650 = new TH1F("hframe_copy650","",1000,0,200);
   hframe_copy650->SetMinimum(0);
   hframe_copy650->SetMaximum(2.735158);
   hframe_copy650->SetDirectory(0);
   hframe_copy650->SetStats(0);
   hframe_copy650->SetLineStyle(0);
   hframe_copy650->SetMarkerStyle(20);
   hframe_copy650->GetXaxis()->SetTitle("pfmet [GeV]");
   hframe_copy650->GetXaxis()->SetNdivisions(506);
   hframe_copy650->GetXaxis()->SetLabelFont(42);
   hframe_copy650->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy650->GetXaxis()->SetLabelSize(0.05);
   hframe_copy650->GetXaxis()->SetTitleSize(0.06);
   hframe_copy650->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy650->GetXaxis()->SetTitleFont(42);
   hframe_copy650->GetYaxis()->SetTitle("Events");
   hframe_copy650->GetYaxis()->SetLabelFont(42);
   hframe_copy650->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy650->GetYaxis()->SetLabelSize(0.05);
   hframe_copy650->GetYaxis()->SetTitleSize(0.06);
   hframe_copy650->GetYaxis()->SetTitleOffset(1.25);
   hframe_copy650->GetYaxis()->SetTitleFont(42);
   hframe_copy650->GetZaxis()->SetLabelFont(42);
   hframe_copy650->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy650->GetZaxis()->SetLabelSize(0.05);
   hframe_copy650->GetZaxis()->SetTitleSize(0.06);
   hframe_copy650->GetZaxis()->SetTitleFont(42);
   hframe_copy650->Draw("sameaxis");
   ccwh3l_13TeV_sssf_met->Modified();
   ccwh3l_13TeV_sssf_met->cd();
   ccwh3l_13TeV_sssf_met->SetSelected(ccwh3l_13TeV_sssf_met);
}
