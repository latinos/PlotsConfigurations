void c_hww2l2v_13TeV_1jee_HAccNum_events()
{
//=========Macro generated from canvas: cchww2l2v_13TeV_1jee_HAccNum_events/cc
//=========  (Tue Mar 21 11:46:37 2017) by ROOT version6.02/13
   TCanvas *cchww2l2v_13TeV_1jee_HAccNum_events = new TCanvas("cchww2l2v_13TeV_1jee_HAccNum_events", "cc",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   cchww2l2v_13TeV_1jee_HAccNum_events->SetHighLightColor(2);
   cchww2l2v_13TeV_1jee_HAccNum_events->Range(-0.4,-1101.52,2.1,7371.713);
   cchww2l2v_13TeV_1jee_HAccNum_events->SetFillColor(0);
   cchww2l2v_13TeV_1jee_HAccNum_events->SetBorderMode(0);
   cchww2l2v_13TeV_1jee_HAccNum_events->SetBorderSize(2);
   cchww2l2v_13TeV_1jee_HAccNum_events->SetTickx(1);
   cchww2l2v_13TeV_1jee_HAccNum_events->SetTicky(1);
   cchww2l2v_13TeV_1jee_HAccNum_events->SetLeftMargin(0.16);
   cchww2l2v_13TeV_1jee_HAccNum_events->SetRightMargin(0.04);
   cchww2l2v_13TeV_1jee_HAccNum_events->SetTopMargin(0.05);
   cchww2l2v_13TeV_1jee_HAccNum_events->SetBottomMargin(0.13);
   cchww2l2v_13TeV_1jee_HAccNum_events->SetFrameFillStyle(0);
   cchww2l2v_13TeV_1jee_HAccNum_events->SetFrameBorderMode(0);
   cchww2l2v_13TeV_1jee_HAccNum_events->SetFrameFillStyle(0);
   cchww2l2v_13TeV_1jee_HAccNum_events->SetFrameBorderMode(0);
   
   TH1F *hframe217 = new TH1F("hframe217","",1000,0,2);
   hframe217->SetMinimum(0);
   hframe217->SetMaximum(6948.052);
   hframe217->SetDirectory(0);
   hframe217->SetStats(0);
   hframe217->SetLineStyle(0);
   hframe217->SetMarkerStyle(20);
   hframe217->GetXaxis()->SetTitle("events");
   hframe217->GetXaxis()->SetNdivisions(506);
   hframe217->GetXaxis()->SetLabelFont(42);
   hframe217->GetXaxis()->SetLabelOffset(0.007);
   hframe217->GetXaxis()->SetLabelSize(0.05);
   hframe217->GetXaxis()->SetTitleSize(0.06);
   hframe217->GetXaxis()->SetTitleOffset(0.9);
   hframe217->GetXaxis()->SetTitleFont(42);
   hframe217->GetYaxis()->SetTitle("Events");
   hframe217->GetYaxis()->SetLabelFont(42);
   hframe217->GetYaxis()->SetLabelOffset(0.007);
   hframe217->GetYaxis()->SetLabelSize(0.05);
   hframe217->GetYaxis()->SetTitleSize(0.06);
   hframe217->GetYaxis()->SetTitleOffset(1.25);
   hframe217->GetYaxis()->SetTitleFont(42);
   hframe217->GetZaxis()->SetLabelFont(42);
   hframe217->GetZaxis()->SetLabelOffset(0.007);
   hframe217->GetZaxis()->SetLabelSize(0.05);
   hframe217->GetZaxis()->SetTitleSize(0.06);
   hframe217->GetZaxis()->SetTitleFont(42);
   hframe217->Draw(" ");
   
   THStack *thsBackground_grouped_hww2l2v_13TeV_1jee_HAccNum_events = new THStack();
   thsBackground_grouped_hww2l2v_13TeV_1jee_HAccNum_events->SetName("thsBackground_grouped_hww2l2v_13TeV_1jee_HAccNum_events");
   thsBackground_grouped_hww2l2v_13TeV_1jee_HAccNum_events->SetTitle("thsBackground_grouped_hww2l2v_13TeV_1jee_HAccNum_events");
   
   TH1F *thsBackground_grouped_hww2l2v_13TeV_1jee_HAccNum_events_stack_49 = new TH1F("thsBackground_grouped_hww2l2v_13TeV_1jee_HAccNum_events_stack_49","thsBackground_grouped_hww2l2v_13TeV_1jee_HAccNum_events",1,0,2);
   thsBackground_grouped_hww2l2v_13TeV_1jee_HAccNum_events_stack_49->SetMinimum(0);
   thsBackground_grouped_hww2l2v_13TeV_1jee_HAccNum_events_stack_49->SetMaximum(1560.818);
   thsBackground_grouped_hww2l2v_13TeV_1jee_HAccNum_events_stack_49->SetDirectory(0);
   thsBackground_grouped_hww2l2v_13TeV_1jee_HAccNum_events_stack_49->SetStats(0);
   thsBackground_grouped_hww2l2v_13TeV_1jee_HAccNum_events_stack_49->SetLineStyle(0);
   thsBackground_grouped_hww2l2v_13TeV_1jee_HAccNum_events_stack_49->SetMarkerStyle(20);
   thsBackground_grouped_hww2l2v_13TeV_1jee_HAccNum_events_stack_49->GetXaxis()->SetLabelFont(42);
   thsBackground_grouped_hww2l2v_13TeV_1jee_HAccNum_events_stack_49->GetXaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_hww2l2v_13TeV_1jee_HAccNum_events_stack_49->GetXaxis()->SetLabelSize(0.05);
   thsBackground_grouped_hww2l2v_13TeV_1jee_HAccNum_events_stack_49->GetXaxis()->SetTitleSize(0.06);
   thsBackground_grouped_hww2l2v_13TeV_1jee_HAccNum_events_stack_49->GetXaxis()->SetTitleOffset(0.9);
   thsBackground_grouped_hww2l2v_13TeV_1jee_HAccNum_events_stack_49->GetXaxis()->SetTitleFont(42);
   thsBackground_grouped_hww2l2v_13TeV_1jee_HAccNum_events_stack_49->GetYaxis()->SetLabelFont(42);
   thsBackground_grouped_hww2l2v_13TeV_1jee_HAccNum_events_stack_49->GetYaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_hww2l2v_13TeV_1jee_HAccNum_events_stack_49->GetYaxis()->SetLabelSize(0.05);
   thsBackground_grouped_hww2l2v_13TeV_1jee_HAccNum_events_stack_49->GetYaxis()->SetTitleSize(0.06);
   thsBackground_grouped_hww2l2v_13TeV_1jee_HAccNum_events_stack_49->GetYaxis()->SetTitleOffset(1.25);
   thsBackground_grouped_hww2l2v_13TeV_1jee_HAccNum_events_stack_49->GetYaxis()->SetTitleFont(42);
   thsBackground_grouped_hww2l2v_13TeV_1jee_HAccNum_events_stack_49->GetZaxis()->SetLabelFont(42);
   thsBackground_grouped_hww2l2v_13TeV_1jee_HAccNum_events_stack_49->GetZaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_hww2l2v_13TeV_1jee_HAccNum_events_stack_49->GetZaxis()->SetLabelSize(0.05);
   thsBackground_grouped_hww2l2v_13TeV_1jee_HAccNum_events_stack_49->GetZaxis()->SetTitleSize(0.06);
   thsBackground_grouped_hww2l2v_13TeV_1jee_HAccNum_events_stack_49->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_hww2l2v_13TeV_1jee_HAccNum_events->SetHistogram(thsBackground_grouped_hww2l2v_13TeV_1jee_HAccNum_events_stack_49);
   
   
   TH1D *new_histo_group_DY_hww2l2v_13TeV_1jee_HAccNum_events218 = new TH1D("new_histo_group_DY_hww2l2v_13TeV_1jee_HAccNum_events218","histo_DY",1,0,2);
   new_histo_group_DY_hww2l2v_13TeV_1jee_HAccNum_events218->SetBinContent(1,1115.451);
   new_histo_group_DY_hww2l2v_13TeV_1jee_HAccNum_events218->SetBinError(1,224.3644);
   new_histo_group_DY_hww2l2v_13TeV_1jee_HAccNum_events218->SetEntries(308);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#009900");
   new_histo_group_DY_hww2l2v_13TeV_1jee_HAccNum_events218->SetFillColor(ci);
   new_histo_group_DY_hww2l2v_13TeV_1jee_HAccNum_events218->SetFillStyle(3001);

   ci = TColor::GetColor("#009900");
   new_histo_group_DY_hww2l2v_13TeV_1jee_HAccNum_events218->SetLineColor(ci);
   new_histo_group_DY_hww2l2v_13TeV_1jee_HAccNum_events218->GetXaxis()->SetLabelFont(42);
   new_histo_group_DY_hww2l2v_13TeV_1jee_HAccNum_events218->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_DY_hww2l2v_13TeV_1jee_HAccNum_events218->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_DY_hww2l2v_13TeV_1jee_HAccNum_events218->GetXaxis()->SetTitleFont(42);
   new_histo_group_DY_hww2l2v_13TeV_1jee_HAccNum_events218->GetYaxis()->SetLabelFont(42);
   new_histo_group_DY_hww2l2v_13TeV_1jee_HAccNum_events218->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_DY_hww2l2v_13TeV_1jee_HAccNum_events218->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_DY_hww2l2v_13TeV_1jee_HAccNum_events218->GetYaxis()->SetTitleFont(42);
   new_histo_group_DY_hww2l2v_13TeV_1jee_HAccNum_events218->GetZaxis()->SetLabelFont(42);
   new_histo_group_DY_hww2l2v_13TeV_1jee_HAccNum_events218->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_DY_hww2l2v_13TeV_1jee_HAccNum_events218->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_DY_hww2l2v_13TeV_1jee_HAccNum_events218->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_hww2l2v_13TeV_1jee_HAccNum_events->Add(new_histo_group_DY_hww2l2v_13TeV_1jee_HAccNum_events,"");
   
   TH1D *new_histo_group_top_hww2l2v_13TeV_1jee_HAccNum_events219 = new TH1D("new_histo_group_top_hww2l2v_13TeV_1jee_HAccNum_events219","histo_top",1,0,2);
   new_histo_group_top_hww2l2v_13TeV_1jee_HAccNum_events219->SetBinContent(1,89.79788);
   new_histo_group_top_hww2l2v_13TeV_1jee_HAccNum_events219->SetBinError(1,1.89087);
   new_histo_group_top_hww2l2v_13TeV_1jee_HAccNum_events219->SetEntries(2499);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_top_hww2l2v_13TeV_1jee_HAccNum_events219->SetFillColor(ci);
   new_histo_group_top_hww2l2v_13TeV_1jee_HAccNum_events219->SetFillStyle(3001);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_top_hww2l2v_13TeV_1jee_HAccNum_events219->SetLineColor(ci);
   new_histo_group_top_hww2l2v_13TeV_1jee_HAccNum_events219->GetXaxis()->SetLabelFont(42);
   new_histo_group_top_hww2l2v_13TeV_1jee_HAccNum_events219->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_top_hww2l2v_13TeV_1jee_HAccNum_events219->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_top_hww2l2v_13TeV_1jee_HAccNum_events219->GetXaxis()->SetTitleFont(42);
   new_histo_group_top_hww2l2v_13TeV_1jee_HAccNum_events219->GetYaxis()->SetLabelFont(42);
   new_histo_group_top_hww2l2v_13TeV_1jee_HAccNum_events219->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_top_hww2l2v_13TeV_1jee_HAccNum_events219->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_top_hww2l2v_13TeV_1jee_HAccNum_events219->GetYaxis()->SetTitleFont(42);
   new_histo_group_top_hww2l2v_13TeV_1jee_HAccNum_events219->GetZaxis()->SetLabelFont(42);
   new_histo_group_top_hww2l2v_13TeV_1jee_HAccNum_events219->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_top_hww2l2v_13TeV_1jee_HAccNum_events219->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_top_hww2l2v_13TeV_1jee_HAccNum_events219->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_hww2l2v_13TeV_1jee_HAccNum_events->Add(new_histo_group_top_hww2l2v_13TeV_1jee_HAccNum_events,"");
   
   TH1D *new_histo_group_WW_hww2l2v_13TeV_1jee_HAccNum_events220 = new TH1D("new_histo_group_WW_hww2l2v_13TeV_1jee_HAccNum_events220","histo_WW",1,0,2);
   new_histo_group_WW_hww2l2v_13TeV_1jee_HAccNum_events220->SetBinContent(1,118.173);
   new_histo_group_WW_hww2l2v_13TeV_1jee_HAccNum_events220->SetBinError(1,4.499195);
   new_histo_group_WW_hww2l2v_13TeV_1jee_HAccNum_events220->SetEntries(1059);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_hww2l2v_13TeV_1jee_HAccNum_events220->SetFillColor(ci);
   new_histo_group_WW_hww2l2v_13TeV_1jee_HAccNum_events220->SetFillStyle(3001);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_hww2l2v_13TeV_1jee_HAccNum_events220->SetLineColor(ci);
   new_histo_group_WW_hww2l2v_13TeV_1jee_HAccNum_events220->GetXaxis()->SetLabelFont(42);
   new_histo_group_WW_hww2l2v_13TeV_1jee_HAccNum_events220->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WW_hww2l2v_13TeV_1jee_HAccNum_events220->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WW_hww2l2v_13TeV_1jee_HAccNum_events220->GetXaxis()->SetTitleFont(42);
   new_histo_group_WW_hww2l2v_13TeV_1jee_HAccNum_events220->GetYaxis()->SetLabelFont(42);
   new_histo_group_WW_hww2l2v_13TeV_1jee_HAccNum_events220->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WW_hww2l2v_13TeV_1jee_HAccNum_events220->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WW_hww2l2v_13TeV_1jee_HAccNum_events220->GetYaxis()->SetTitleFont(42);
   new_histo_group_WW_hww2l2v_13TeV_1jee_HAccNum_events220->GetZaxis()->SetLabelFont(42);
   new_histo_group_WW_hww2l2v_13TeV_1jee_HAccNum_events220->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WW_hww2l2v_13TeV_1jee_HAccNum_events220->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WW_hww2l2v_13TeV_1jee_HAccNum_events220->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_hww2l2v_13TeV_1jee_HAccNum_events->Add(new_histo_group_WW_hww2l2v_13TeV_1jee_HAccNum_events,"");
   
   TH1D *new_histo_group_VVV_hww2l2v_13TeV_1jee_HAccNum_events221 = new TH1D("new_histo_group_VVV_hww2l2v_13TeV_1jee_HAccNum_events221","histo_VVV",1,0,2);
   new_histo_group_VVV_hww2l2v_13TeV_1jee_HAccNum_events221->SetBinContent(1,0.5192171);
   new_histo_group_VVV_hww2l2v_13TeV_1jee_HAccNum_events221->SetBinError(1,0.1167374);
   new_histo_group_VVV_hww2l2v_13TeV_1jee_HAccNum_events221->SetEntries(22);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_hww2l2v_13TeV_1jee_HAccNum_events221->SetFillColor(ci);
   new_histo_group_VVV_hww2l2v_13TeV_1jee_HAccNum_events221->SetFillStyle(3001);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_hww2l2v_13TeV_1jee_HAccNum_events221->SetLineColor(ci);
   new_histo_group_VVV_hww2l2v_13TeV_1jee_HAccNum_events221->GetXaxis()->SetLabelFont(42);
   new_histo_group_VVV_hww2l2v_13TeV_1jee_HAccNum_events221->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_hww2l2v_13TeV_1jee_HAccNum_events221->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_hww2l2v_13TeV_1jee_HAccNum_events221->GetXaxis()->SetTitleFont(42);
   new_histo_group_VVV_hww2l2v_13TeV_1jee_HAccNum_events221->GetYaxis()->SetLabelFont(42);
   new_histo_group_VVV_hww2l2v_13TeV_1jee_HAccNum_events221->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_hww2l2v_13TeV_1jee_HAccNum_events221->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_hww2l2v_13TeV_1jee_HAccNum_events221->GetYaxis()->SetTitleFont(42);
   new_histo_group_VVV_hww2l2v_13TeV_1jee_HAccNum_events221->GetZaxis()->SetLabelFont(42);
   new_histo_group_VVV_hww2l2v_13TeV_1jee_HAccNum_events221->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_hww2l2v_13TeV_1jee_HAccNum_events221->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_hww2l2v_13TeV_1jee_HAccNum_events221->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_hww2l2v_13TeV_1jee_HAccNum_events->Add(new_histo_group_VVV_hww2l2v_13TeV_1jee_HAccNum_events,"");
   
   TH1D *new_histo_group_VZ_hww2l2v_13TeV_1jee_HAccNum_events222 = new TH1D("new_histo_group_VZ_hww2l2v_13TeV_1jee_HAccNum_events222","histo_Vg",1,0,2);
   new_histo_group_VZ_hww2l2v_13TeV_1jee_HAccNum_events222->SetBinContent(1,130.1155);
   new_histo_group_VZ_hww2l2v_13TeV_1jee_HAccNum_events222->SetBinError(1,58.27269);
   new_histo_group_VZ_hww2l2v_13TeV_1jee_HAccNum_events222->SetEntries(880);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_VZ_hww2l2v_13TeV_1jee_HAccNum_events222->SetFillColor(ci);
   new_histo_group_VZ_hww2l2v_13TeV_1jee_HAccNum_events222->SetFillStyle(3001);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_VZ_hww2l2v_13TeV_1jee_HAccNum_events222->SetLineColor(ci);
   new_histo_group_VZ_hww2l2v_13TeV_1jee_HAccNum_events222->GetXaxis()->SetLabelFont(42);
   new_histo_group_VZ_hww2l2v_13TeV_1jee_HAccNum_events222->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_VZ_hww2l2v_13TeV_1jee_HAccNum_events222->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_VZ_hww2l2v_13TeV_1jee_HAccNum_events222->GetXaxis()->SetTitleFont(42);
   new_histo_group_VZ_hww2l2v_13TeV_1jee_HAccNum_events222->GetYaxis()->SetLabelFont(42);
   new_histo_group_VZ_hww2l2v_13TeV_1jee_HAccNum_events222->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_VZ_hww2l2v_13TeV_1jee_HAccNum_events222->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_VZ_hww2l2v_13TeV_1jee_HAccNum_events222->GetYaxis()->SetTitleFont(42);
   new_histo_group_VZ_hww2l2v_13TeV_1jee_HAccNum_events222->GetZaxis()->SetLabelFont(42);
   new_histo_group_VZ_hww2l2v_13TeV_1jee_HAccNum_events222->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_VZ_hww2l2v_13TeV_1jee_HAccNum_events222->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_VZ_hww2l2v_13TeV_1jee_HAccNum_events222->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_hww2l2v_13TeV_1jee_HAccNum_events->Add(new_histo_group_VZ_hww2l2v_13TeV_1jee_HAccNum_events,"");
   
   TH1D *new_histo_group_Higgs_hww2l2v_13TeV_1jee_HAccNum_events223 = new TH1D("new_histo_group_Higgs_hww2l2v_13TeV_1jee_HAccNum_events223","histo_H_htt",1,0,2);
   new_histo_group_Higgs_hww2l2v_13TeV_1jee_HAccNum_events223->SetBinContent(1,32.43716);
   new_histo_group_Higgs_hww2l2v_13TeV_1jee_HAccNum_events223->SetBinError(1,1.345283);
   new_histo_group_Higgs_hww2l2v_13TeV_1jee_HAccNum_events223->SetEntries(1258);
   new_histo_group_Higgs_hww2l2v_13TeV_1jee_HAccNum_events223->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_hww2l2v_13TeV_1jee_HAccNum_events223->SetLineColor(ci);
   new_histo_group_Higgs_hww2l2v_13TeV_1jee_HAccNum_events223->SetLineWidth(2);
   new_histo_group_Higgs_hww2l2v_13TeV_1jee_HAccNum_events223->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_hww2l2v_13TeV_1jee_HAccNum_events223->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_hww2l2v_13TeV_1jee_HAccNum_events223->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_hww2l2v_13TeV_1jee_HAccNum_events223->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_hww2l2v_13TeV_1jee_HAccNum_events223->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_hww2l2v_13TeV_1jee_HAccNum_events223->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_hww2l2v_13TeV_1jee_HAccNum_events223->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_hww2l2v_13TeV_1jee_HAccNum_events223->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_hww2l2v_13TeV_1jee_HAccNum_events223->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_hww2l2v_13TeV_1jee_HAccNum_events223->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_hww2l2v_13TeV_1jee_HAccNum_events223->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_hww2l2v_13TeV_1jee_HAccNum_events223->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_hww2l2v_13TeV_1jee_HAccNum_events->Add(new_histo_group_Higgs_hww2l2v_13TeV_1jee_HAccNum_events,"");
   thsBackground_grouped_hww2l2v_13TeV_1jee_HAccNum_events->Draw("hist same");
   
   thsSignal_grouped_hww2l2v_13TeV_1jee_HAccNum_events = new THStack();
   thsSignal_grouped_hww2l2v_13TeV_1jee_HAccNum_events->SetName("thsSignal_grouped_hww2l2v_13TeV_1jee_HAccNum_events");
   thsSignal_grouped_hww2l2v_13TeV_1jee_HAccNum_events->SetTitle("thsSignal_grouped_hww2l2v_13TeV_1jee_HAccNum_events");
   
   TH1F *thsSignal_grouped_hww2l2v_13TeV_1jee_HAccNum_events_stack_50 = new TH1F("thsSignal_grouped_hww2l2v_13TeV_1jee_HAccNum_events_stack_50","thsSignal_grouped_hww2l2v_13TeV_1jee_HAccNum_events",1,0,2);
   thsSignal_grouped_hww2l2v_13TeV_1jee_HAccNum_events_stack_50->SetMinimum(0);
   thsSignal_grouped_hww2l2v_13TeV_1jee_HAccNum_events_stack_50->SetMaximum(35.47156);
   thsSignal_grouped_hww2l2v_13TeV_1jee_HAccNum_events_stack_50->SetDirectory(0);
   thsSignal_grouped_hww2l2v_13TeV_1jee_HAccNum_events_stack_50->SetStats(0);
   thsSignal_grouped_hww2l2v_13TeV_1jee_HAccNum_events_stack_50->SetLineStyle(0);
   thsSignal_grouped_hww2l2v_13TeV_1jee_HAccNum_events_stack_50->SetMarkerStyle(20);
   thsSignal_grouped_hww2l2v_13TeV_1jee_HAccNum_events_stack_50->GetXaxis()->SetLabelFont(42);
   thsSignal_grouped_hww2l2v_13TeV_1jee_HAccNum_events_stack_50->GetXaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_hww2l2v_13TeV_1jee_HAccNum_events_stack_50->GetXaxis()->SetLabelSize(0.05);
   thsSignal_grouped_hww2l2v_13TeV_1jee_HAccNum_events_stack_50->GetXaxis()->SetTitleSize(0.06);
   thsSignal_grouped_hww2l2v_13TeV_1jee_HAccNum_events_stack_50->GetXaxis()->SetTitleOffset(0.9);
   thsSignal_grouped_hww2l2v_13TeV_1jee_HAccNum_events_stack_50->GetXaxis()->SetTitleFont(42);
   thsSignal_grouped_hww2l2v_13TeV_1jee_HAccNum_events_stack_50->GetYaxis()->SetLabelFont(42);
   thsSignal_grouped_hww2l2v_13TeV_1jee_HAccNum_events_stack_50->GetYaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_hww2l2v_13TeV_1jee_HAccNum_events_stack_50->GetYaxis()->SetLabelSize(0.05);
   thsSignal_grouped_hww2l2v_13TeV_1jee_HAccNum_events_stack_50->GetYaxis()->SetTitleSize(0.06);
   thsSignal_grouped_hww2l2v_13TeV_1jee_HAccNum_events_stack_50->GetYaxis()->SetTitleOffset(1.25);
   thsSignal_grouped_hww2l2v_13TeV_1jee_HAccNum_events_stack_50->GetYaxis()->SetTitleFont(42);
   thsSignal_grouped_hww2l2v_13TeV_1jee_HAccNum_events_stack_50->GetZaxis()->SetLabelFont(42);
   thsSignal_grouped_hww2l2v_13TeV_1jee_HAccNum_events_stack_50->GetZaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_hww2l2v_13TeV_1jee_HAccNum_events_stack_50->GetZaxis()->SetLabelSize(0.05);
   thsSignal_grouped_hww2l2v_13TeV_1jee_HAccNum_events_stack_50->GetZaxis()->SetTitleSize(0.06);
   thsSignal_grouped_hww2l2v_13TeV_1jee_HAccNum_events_stack_50->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_hww2l2v_13TeV_1jee_HAccNum_events->SetHistogram(thsSignal_grouped_hww2l2v_13TeV_1jee_HAccNum_events_stack_50);
   
   
   TH1D *new_histo_group_Higgs_hww2l2v_13TeV_1jee_HAccNum_events224 = new TH1D("new_histo_group_Higgs_hww2l2v_13TeV_1jee_HAccNum_events224","histo_H_htt",1,0,2);
   new_histo_group_Higgs_hww2l2v_13TeV_1jee_HAccNum_events224->SetBinContent(1,32.43716);
   new_histo_group_Higgs_hww2l2v_13TeV_1jee_HAccNum_events224->SetBinError(1,1.345283);
   new_histo_group_Higgs_hww2l2v_13TeV_1jee_HAccNum_events224->SetEntries(1258);
   new_histo_group_Higgs_hww2l2v_13TeV_1jee_HAccNum_events224->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_hww2l2v_13TeV_1jee_HAccNum_events224->SetLineColor(ci);
   new_histo_group_Higgs_hww2l2v_13TeV_1jee_HAccNum_events224->SetLineWidth(2);
   new_histo_group_Higgs_hww2l2v_13TeV_1jee_HAccNum_events224->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_hww2l2v_13TeV_1jee_HAccNum_events224->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_hww2l2v_13TeV_1jee_HAccNum_events224->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_hww2l2v_13TeV_1jee_HAccNum_events224->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_hww2l2v_13TeV_1jee_HAccNum_events224->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_hww2l2v_13TeV_1jee_HAccNum_events224->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_hww2l2v_13TeV_1jee_HAccNum_events224->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_hww2l2v_13TeV_1jee_HAccNum_events224->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_hww2l2v_13TeV_1jee_HAccNum_events224->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_hww2l2v_13TeV_1jee_HAccNum_events224->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_hww2l2v_13TeV_1jee_HAccNum_events224->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_hww2l2v_13TeV_1jee_HAccNum_events224->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_hww2l2v_13TeV_1jee_HAccNum_events->Add(new_histo_group_Higgs_hww2l2v_13TeV_1jee_HAccNum_events,"");
   thsSignal_grouped_hww2l2v_13TeV_1jee_HAccNum_events->Draw("hist same noclear");
   
   Double_t _fx3032[1] = {
   1};
   Double_t _fy3032[1] = {
   2727};
   Double_t _felx3032[1] = {
   1};
   Double_t _fely3032[1] = {
   52.21861};
   Double_t _fehx3032[1] = {
   1};
   Double_t _fehy3032[1] = {
   53.22822};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(1,_fx3032,_fy3032,_felx3032,_fehx3032,_fely3032,_fehy3032);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(1);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3032 = new TH1F("Graph_Graph3032","",100,0,2.2);
   Graph_Graph3032->SetMinimum(2664.237);
   Graph_Graph3032->SetMaximum(2790.773);
   Graph_Graph3032->SetDirectory(0);
   Graph_Graph3032->SetStats(0);
   Graph_Graph3032->SetLineStyle(0);
   Graph_Graph3032->SetMarkerStyle(20);
   Graph_Graph3032->GetXaxis()->SetLabelFont(42);
   Graph_Graph3032->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3032->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3032->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3032->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3032->GetXaxis()->SetTitleFont(42);
   Graph_Graph3032->GetYaxis()->SetLabelFont(42);
   Graph_Graph3032->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3032->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3032->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3032->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3032->GetYaxis()->SetTitleFont(42);
   Graph_Graph3032->GetZaxis()->SetLabelFont(42);
   Graph_Graph3032->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3032->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3032->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3032->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3032);
   
   grae->Draw("p0");
   
   TLegend *leg = new TLegend(0.2,0.7,0.8,0.9,NULL,"brNDC");
   leg->SetTextFont(62);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("new_histo_group_DY_hww2l2v_13TeV_1jee_HAccNum_events","DY","F");

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
   entry=leg->AddEntry("new_histo_group_top_hww2l2v_13TeV_1jee_HAccNum_events","tW and t#bart","F");

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
   entry=leg->AddEntry("new_histo_group_WW_hww2l2v_13TeV_1jee_HAccNum_events","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_hww2l2v_13TeV_1jee_HAccNum_events","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_VZ_hww2l2v_13TeV_1jee_HAccNum_events","VZ/#gamma*/#gamma","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_hww2l2v_13TeV_1jee_HAccNum_events","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_hww2l2v_13TeV_1jee_HAccNum_events","Data","EPL");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   leg->Draw();
   TLatex *   tex = new TLatex(0.96,0.96,"L = 35.9/fb (13 TeV)");
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
   entry=leg->AddEntry("new_histo_group_DY_hww2l2v_13TeV_1jee_HAccNum_events","DY","F");

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
   entry=leg->AddEntry("new_histo_group_top_hww2l2v_13TeV_1jee_HAccNum_events","tW and t#bart","F");

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
   entry=leg->AddEntry("new_histo_group_WW_hww2l2v_13TeV_1jee_HAccNum_events","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_hww2l2v_13TeV_1jee_HAccNum_events","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_VZ_hww2l2v_13TeV_1jee_HAccNum_events","VZ/#gamma*/#gamma","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_hww2l2v_13TeV_1jee_HAccNum_events","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_hww2l2v_13TeV_1jee_HAccNum_events","Data","EPL");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   leg->Draw();
   
   TH1F *hframe_copy225 = new TH1F("hframe_copy225","",1000,0,2);
   hframe_copy225->SetMinimum(0);
   hframe_copy225->SetMaximum(6948.052);
   hframe_copy225->SetDirectory(0);
   hframe_copy225->SetStats(0);
   hframe_copy225->SetLineStyle(0);
   hframe_copy225->SetMarkerStyle(20);
   hframe_copy225->GetXaxis()->SetTitle("events");
   hframe_copy225->GetXaxis()->SetNdivisions(506);
   hframe_copy225->GetXaxis()->SetLabelFont(42);
   hframe_copy225->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy225->GetXaxis()->SetLabelSize(0.05);
   hframe_copy225->GetXaxis()->SetTitleSize(0.06);
   hframe_copy225->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy225->GetXaxis()->SetTitleFont(42);
   hframe_copy225->GetYaxis()->SetTitle("Events");
   hframe_copy225->GetYaxis()->SetLabelFont(42);
   hframe_copy225->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy225->GetYaxis()->SetLabelSize(0.05);
   hframe_copy225->GetYaxis()->SetTitleSize(0.06);
   hframe_copy225->GetYaxis()->SetTitleOffset(1.25);
   hframe_copy225->GetYaxis()->SetTitleFont(42);
   hframe_copy225->GetZaxis()->SetLabelFont(42);
   hframe_copy225->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy225->GetZaxis()->SetLabelSize(0.05);
   hframe_copy225->GetZaxis()->SetTitleSize(0.06);
   hframe_copy225->GetZaxis()->SetTitleFont(42);
   hframe_copy225->Draw("sameaxis");
   cchww2l2v_13TeV_1jee_HAccNum_events->Modified();
   cchww2l2v_13TeV_1jee_HAccNum_events->cd();
   cchww2l2v_13TeV_1jee_HAccNum_events->SetSelected(cchww2l2v_13TeV_1jee_HAccNum_events);
}
