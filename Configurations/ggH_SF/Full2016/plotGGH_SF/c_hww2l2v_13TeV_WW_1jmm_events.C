void c_hww2l2v_13TeV_WW_1jmm_events()
{
//=========Macro generated from canvas: cchww2l2v_13TeV_WW_1jmm_events/cc
//=========  (Tue Mar 21 11:46:38 2017) by ROOT version6.02/13
   TCanvas *cchww2l2v_13TeV_WW_1jmm_events = new TCanvas("cchww2l2v_13TeV_WW_1jmm_events", "cc",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   cchww2l2v_13TeV_WW_1jmm_events->SetHighLightColor(2);
   cchww2l2v_13TeV_WW_1jmm_events->Range(-0.4,-997.8605,2.1,6677.99);
   cchww2l2v_13TeV_WW_1jmm_events->SetFillColor(0);
   cchww2l2v_13TeV_WW_1jmm_events->SetBorderMode(0);
   cchww2l2v_13TeV_WW_1jmm_events->SetBorderSize(2);
   cchww2l2v_13TeV_WW_1jmm_events->SetTickx(1);
   cchww2l2v_13TeV_WW_1jmm_events->SetTicky(1);
   cchww2l2v_13TeV_WW_1jmm_events->SetLeftMargin(0.16);
   cchww2l2v_13TeV_WW_1jmm_events->SetRightMargin(0.04);
   cchww2l2v_13TeV_WW_1jmm_events->SetTopMargin(0.05);
   cchww2l2v_13TeV_WW_1jmm_events->SetBottomMargin(0.13);
   cchww2l2v_13TeV_WW_1jmm_events->SetFrameFillStyle(0);
   cchww2l2v_13TeV_WW_1jmm_events->SetFrameBorderMode(0);
   cchww2l2v_13TeV_WW_1jmm_events->SetFrameFillStyle(0);
   cchww2l2v_13TeV_WW_1jmm_events->SetFrameBorderMode(0);
   
   TH1F *hframe235 = new TH1F("hframe235","",1000,0,2);
   hframe235->SetMinimum(0);
   hframe235->SetMaximum(6294.197);
   hframe235->SetDirectory(0);
   hframe235->SetStats(0);
   hframe235->SetLineStyle(0);
   hframe235->SetMarkerStyle(20);
   hframe235->GetXaxis()->SetTitle("events");
   hframe235->GetXaxis()->SetNdivisions(506);
   hframe235->GetXaxis()->SetLabelFont(42);
   hframe235->GetXaxis()->SetLabelOffset(0.007);
   hframe235->GetXaxis()->SetLabelSize(0.05);
   hframe235->GetXaxis()->SetTitleSize(0.06);
   hframe235->GetXaxis()->SetTitleOffset(0.9);
   hframe235->GetXaxis()->SetTitleFont(42);
   hframe235->GetYaxis()->SetTitle("Events");
   hframe235->GetYaxis()->SetLabelFont(42);
   hframe235->GetYaxis()->SetLabelOffset(0.007);
   hframe235->GetYaxis()->SetLabelSize(0.05);
   hframe235->GetYaxis()->SetTitleSize(0.06);
   hframe235->GetYaxis()->SetTitleOffset(1.25);
   hframe235->GetYaxis()->SetTitleFont(42);
   hframe235->GetZaxis()->SetLabelFont(42);
   hframe235->GetZaxis()->SetLabelOffset(0.007);
   hframe235->GetZaxis()->SetLabelSize(0.05);
   hframe235->GetZaxis()->SetTitleSize(0.06);
   hframe235->GetZaxis()->SetTitleFont(42);
   hframe235->Draw(" ");
   
   THStack *thsBackground_grouped_hww2l2v_13TeV_WW_1jmm_events = new THStack();
   thsBackground_grouped_hww2l2v_13TeV_WW_1jmm_events->SetName("thsBackground_grouped_hww2l2v_13TeV_WW_1jmm_events");
   thsBackground_grouped_hww2l2v_13TeV_WW_1jmm_events->SetTitle("thsBackground_grouped_hww2l2v_13TeV_WW_1jmm_events");
   
   TH1F *thsBackground_grouped_hww2l2v_13TeV_WW_1jmm_events_stack_53 = new TH1F("thsBackground_grouped_hww2l2v_13TeV_WW_1jmm_events_stack_53","thsBackground_grouped_hww2l2v_13TeV_WW_1jmm_events",1,0,2);
   thsBackground_grouped_hww2l2v_13TeV_WW_1jmm_events_stack_53->SetMinimum(0);
   thsBackground_grouped_hww2l2v_13TeV_WW_1jmm_events_stack_53->SetMaximum(1232.521);
   thsBackground_grouped_hww2l2v_13TeV_WW_1jmm_events_stack_53->SetDirectory(0);
   thsBackground_grouped_hww2l2v_13TeV_WW_1jmm_events_stack_53->SetStats(0);
   thsBackground_grouped_hww2l2v_13TeV_WW_1jmm_events_stack_53->SetLineStyle(0);
   thsBackground_grouped_hww2l2v_13TeV_WW_1jmm_events_stack_53->SetMarkerStyle(20);
   thsBackground_grouped_hww2l2v_13TeV_WW_1jmm_events_stack_53->GetXaxis()->SetLabelFont(42);
   thsBackground_grouped_hww2l2v_13TeV_WW_1jmm_events_stack_53->GetXaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_hww2l2v_13TeV_WW_1jmm_events_stack_53->GetXaxis()->SetLabelSize(0.05);
   thsBackground_grouped_hww2l2v_13TeV_WW_1jmm_events_stack_53->GetXaxis()->SetTitleSize(0.06);
   thsBackground_grouped_hww2l2v_13TeV_WW_1jmm_events_stack_53->GetXaxis()->SetTitleOffset(0.9);
   thsBackground_grouped_hww2l2v_13TeV_WW_1jmm_events_stack_53->GetXaxis()->SetTitleFont(42);
   thsBackground_grouped_hww2l2v_13TeV_WW_1jmm_events_stack_53->GetYaxis()->SetLabelFont(42);
   thsBackground_grouped_hww2l2v_13TeV_WW_1jmm_events_stack_53->GetYaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_hww2l2v_13TeV_WW_1jmm_events_stack_53->GetYaxis()->SetLabelSize(0.05);
   thsBackground_grouped_hww2l2v_13TeV_WW_1jmm_events_stack_53->GetYaxis()->SetTitleSize(0.06);
   thsBackground_grouped_hww2l2v_13TeV_WW_1jmm_events_stack_53->GetYaxis()->SetTitleOffset(1.25);
   thsBackground_grouped_hww2l2v_13TeV_WW_1jmm_events_stack_53->GetYaxis()->SetTitleFont(42);
   thsBackground_grouped_hww2l2v_13TeV_WW_1jmm_events_stack_53->GetZaxis()->SetLabelFont(42);
   thsBackground_grouped_hww2l2v_13TeV_WW_1jmm_events_stack_53->GetZaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_hww2l2v_13TeV_WW_1jmm_events_stack_53->GetZaxis()->SetLabelSize(0.05);
   thsBackground_grouped_hww2l2v_13TeV_WW_1jmm_events_stack_53->GetZaxis()->SetTitleSize(0.06);
   thsBackground_grouped_hww2l2v_13TeV_WW_1jmm_events_stack_53->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_hww2l2v_13TeV_WW_1jmm_events->SetHistogram(thsBackground_grouped_hww2l2v_13TeV_WW_1jmm_events_stack_53);
   
   
   TH1D *new_histo_group_DY_hww2l2v_13TeV_WW_1jmm_events236 = new TH1D("new_histo_group_DY_hww2l2v_13TeV_WW_1jmm_events236","histo_DY",1,0,2);
   new_histo_group_DY_hww2l2v_13TeV_WW_1jmm_events236->SetBinContent(1,39.45913);
   new_histo_group_DY_hww2l2v_13TeV_WW_1jmm_events236->SetBinError(1,18.05389);
   new_histo_group_DY_hww2l2v_13TeV_WW_1jmm_events236->SetEntries(51);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#009900");
   new_histo_group_DY_hww2l2v_13TeV_WW_1jmm_events236->SetFillColor(ci);
   new_histo_group_DY_hww2l2v_13TeV_WW_1jmm_events236->SetFillStyle(3001);

   ci = TColor::GetColor("#009900");
   new_histo_group_DY_hww2l2v_13TeV_WW_1jmm_events236->SetLineColor(ci);
   new_histo_group_DY_hww2l2v_13TeV_WW_1jmm_events236->GetXaxis()->SetLabelFont(42);
   new_histo_group_DY_hww2l2v_13TeV_WW_1jmm_events236->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_DY_hww2l2v_13TeV_WW_1jmm_events236->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_DY_hww2l2v_13TeV_WW_1jmm_events236->GetXaxis()->SetTitleFont(42);
   new_histo_group_DY_hww2l2v_13TeV_WW_1jmm_events236->GetYaxis()->SetLabelFont(42);
   new_histo_group_DY_hww2l2v_13TeV_WW_1jmm_events236->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_DY_hww2l2v_13TeV_WW_1jmm_events236->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_DY_hww2l2v_13TeV_WW_1jmm_events236->GetYaxis()->SetTitleFont(42);
   new_histo_group_DY_hww2l2v_13TeV_WW_1jmm_events236->GetZaxis()->SetLabelFont(42);
   new_histo_group_DY_hww2l2v_13TeV_WW_1jmm_events236->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_DY_hww2l2v_13TeV_WW_1jmm_events236->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_DY_hww2l2v_13TeV_WW_1jmm_events236->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_hww2l2v_13TeV_WW_1jmm_events->Add(new_histo_group_DY_hww2l2v_13TeV_WW_1jmm_events,"");
   
   TH1D *new_histo_group_top_hww2l2v_13TeV_WW_1jmm_events237 = new TH1D("new_histo_group_top_hww2l2v_13TeV_WW_1jmm_events237","histo_top",1,0,2);
   new_histo_group_top_hww2l2v_13TeV_WW_1jmm_events237->SetBinContent(1,636.1396);
   new_histo_group_top_hww2l2v_13TeV_WW_1jmm_events237->SetBinError(1,5.467078);
   new_histo_group_top_hww2l2v_13TeV_WW_1jmm_events237->SetEntries(15070);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_top_hww2l2v_13TeV_WW_1jmm_events237->SetFillColor(ci);
   new_histo_group_top_hww2l2v_13TeV_WW_1jmm_events237->SetFillStyle(3001);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_top_hww2l2v_13TeV_WW_1jmm_events237->SetLineColor(ci);
   new_histo_group_top_hww2l2v_13TeV_WW_1jmm_events237->GetXaxis()->SetLabelFont(42);
   new_histo_group_top_hww2l2v_13TeV_WW_1jmm_events237->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_top_hww2l2v_13TeV_WW_1jmm_events237->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_top_hww2l2v_13TeV_WW_1jmm_events237->GetXaxis()->SetTitleFont(42);
   new_histo_group_top_hww2l2v_13TeV_WW_1jmm_events237->GetYaxis()->SetLabelFont(42);
   new_histo_group_top_hww2l2v_13TeV_WW_1jmm_events237->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_top_hww2l2v_13TeV_WW_1jmm_events237->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_top_hww2l2v_13TeV_WW_1jmm_events237->GetYaxis()->SetTitleFont(42);
   new_histo_group_top_hww2l2v_13TeV_WW_1jmm_events237->GetZaxis()->SetLabelFont(42);
   new_histo_group_top_hww2l2v_13TeV_WW_1jmm_events237->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_top_hww2l2v_13TeV_WW_1jmm_events237->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_top_hww2l2v_13TeV_WW_1jmm_events237->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_hww2l2v_13TeV_WW_1jmm_events->Add(new_histo_group_top_hww2l2v_13TeV_WW_1jmm_events,"");
   
   TH1D *new_histo_group_WW_hww2l2v_13TeV_WW_1jmm_events238 = new TH1D("new_histo_group_WW_hww2l2v_13TeV_WW_1jmm_events238","histo_WW",1,0,2);
   new_histo_group_WW_hww2l2v_13TeV_WW_1jmm_events238->SetBinContent(1,460.5644);
   new_histo_group_WW_hww2l2v_13TeV_WW_1jmm_events238->SetBinError(1,9.982223);
   new_histo_group_WW_hww2l2v_13TeV_WW_1jmm_events238->SetEntries(2941);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_hww2l2v_13TeV_WW_1jmm_events238->SetFillColor(ci);
   new_histo_group_WW_hww2l2v_13TeV_WW_1jmm_events238->SetFillStyle(3001);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_hww2l2v_13TeV_WW_1jmm_events238->SetLineColor(ci);
   new_histo_group_WW_hww2l2v_13TeV_WW_1jmm_events238->GetXaxis()->SetLabelFont(42);
   new_histo_group_WW_hww2l2v_13TeV_WW_1jmm_events238->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WW_hww2l2v_13TeV_WW_1jmm_events238->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WW_hww2l2v_13TeV_WW_1jmm_events238->GetXaxis()->SetTitleFont(42);
   new_histo_group_WW_hww2l2v_13TeV_WW_1jmm_events238->GetYaxis()->SetLabelFont(42);
   new_histo_group_WW_hww2l2v_13TeV_WW_1jmm_events238->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WW_hww2l2v_13TeV_WW_1jmm_events238->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WW_hww2l2v_13TeV_WW_1jmm_events238->GetYaxis()->SetTitleFont(42);
   new_histo_group_WW_hww2l2v_13TeV_WW_1jmm_events238->GetZaxis()->SetLabelFont(42);
   new_histo_group_WW_hww2l2v_13TeV_WW_1jmm_events238->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WW_hww2l2v_13TeV_WW_1jmm_events238->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WW_hww2l2v_13TeV_WW_1jmm_events238->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_hww2l2v_13TeV_WW_1jmm_events->Add(new_histo_group_WW_hww2l2v_13TeV_WW_1jmm_events,"");
   
   TH1D *new_histo_group_VVV_hww2l2v_13TeV_WW_1jmm_events239 = new TH1D("new_histo_group_VVV_hww2l2v_13TeV_WW_1jmm_events239","histo_VVV",1,0,2);
   new_histo_group_VVV_hww2l2v_13TeV_WW_1jmm_events239->SetBinContent(1,2.879004);
   new_histo_group_VVV_hww2l2v_13TeV_WW_1jmm_events239->SetBinError(1,0.3281338);
   new_histo_group_VVV_hww2l2v_13TeV_WW_1jmm_events239->SetEntries(130);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_hww2l2v_13TeV_WW_1jmm_events239->SetFillColor(ci);
   new_histo_group_VVV_hww2l2v_13TeV_WW_1jmm_events239->SetFillStyle(3001);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_hww2l2v_13TeV_WW_1jmm_events239->SetLineColor(ci);
   new_histo_group_VVV_hww2l2v_13TeV_WW_1jmm_events239->GetXaxis()->SetLabelFont(42);
   new_histo_group_VVV_hww2l2v_13TeV_WW_1jmm_events239->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_hww2l2v_13TeV_WW_1jmm_events239->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_hww2l2v_13TeV_WW_1jmm_events239->GetXaxis()->SetTitleFont(42);
   new_histo_group_VVV_hww2l2v_13TeV_WW_1jmm_events239->GetYaxis()->SetLabelFont(42);
   new_histo_group_VVV_hww2l2v_13TeV_WW_1jmm_events239->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_hww2l2v_13TeV_WW_1jmm_events239->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_hww2l2v_13TeV_WW_1jmm_events239->GetYaxis()->SetTitleFont(42);
   new_histo_group_VVV_hww2l2v_13TeV_WW_1jmm_events239->GetZaxis()->SetLabelFont(42);
   new_histo_group_VVV_hww2l2v_13TeV_WW_1jmm_events239->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_hww2l2v_13TeV_WW_1jmm_events239->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_hww2l2v_13TeV_WW_1jmm_events239->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_hww2l2v_13TeV_WW_1jmm_events->Add(new_histo_group_VVV_hww2l2v_13TeV_WW_1jmm_events,"");
   
   TH1D *new_histo_group_VZ_hww2l2v_13TeV_WW_1jmm_events240 = new TH1D("new_histo_group_VZ_hww2l2v_13TeV_WW_1jmm_events240","histo_Vg",1,0,2);
   new_histo_group_VZ_hww2l2v_13TeV_WW_1jmm_events240->SetBinContent(1,33.90755);
   new_histo_group_VZ_hww2l2v_13TeV_WW_1jmm_events240->SetBinError(1,1.44144);
   new_histo_group_VZ_hww2l2v_13TeV_WW_1jmm_events240->SetEntries(4714);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_VZ_hww2l2v_13TeV_WW_1jmm_events240->SetFillColor(ci);
   new_histo_group_VZ_hww2l2v_13TeV_WW_1jmm_events240->SetFillStyle(3001);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_VZ_hww2l2v_13TeV_WW_1jmm_events240->SetLineColor(ci);
   new_histo_group_VZ_hww2l2v_13TeV_WW_1jmm_events240->GetXaxis()->SetLabelFont(42);
   new_histo_group_VZ_hww2l2v_13TeV_WW_1jmm_events240->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_VZ_hww2l2v_13TeV_WW_1jmm_events240->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_VZ_hww2l2v_13TeV_WW_1jmm_events240->GetXaxis()->SetTitleFont(42);
   new_histo_group_VZ_hww2l2v_13TeV_WW_1jmm_events240->GetYaxis()->SetLabelFont(42);
   new_histo_group_VZ_hww2l2v_13TeV_WW_1jmm_events240->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_VZ_hww2l2v_13TeV_WW_1jmm_events240->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_VZ_hww2l2v_13TeV_WW_1jmm_events240->GetYaxis()->SetTitleFont(42);
   new_histo_group_VZ_hww2l2v_13TeV_WW_1jmm_events240->GetZaxis()->SetLabelFont(42);
   new_histo_group_VZ_hww2l2v_13TeV_WW_1jmm_events240->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_VZ_hww2l2v_13TeV_WW_1jmm_events240->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_VZ_hww2l2v_13TeV_WW_1jmm_events240->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_hww2l2v_13TeV_WW_1jmm_events->Add(new_histo_group_VZ_hww2l2v_13TeV_WW_1jmm_events,"");
   
   TH1D *new_histo_group_Higgs_hww2l2v_13TeV_WW_1jmm_events241 = new TH1D("new_histo_group_Higgs_hww2l2v_13TeV_WW_1jmm_events241","histo_H_htt",1,0,2);
   new_histo_group_Higgs_hww2l2v_13TeV_WW_1jmm_events241->SetBinContent(1,0.8797104);
   new_histo_group_Higgs_hww2l2v_13TeV_WW_1jmm_events241->SetBinError(1,0.1418097);
   new_histo_group_Higgs_hww2l2v_13TeV_WW_1jmm_events241->SetEntries(52);
   new_histo_group_Higgs_hww2l2v_13TeV_WW_1jmm_events241->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_hww2l2v_13TeV_WW_1jmm_events241->SetLineColor(ci);
   new_histo_group_Higgs_hww2l2v_13TeV_WW_1jmm_events241->SetLineWidth(2);
   new_histo_group_Higgs_hww2l2v_13TeV_WW_1jmm_events241->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_hww2l2v_13TeV_WW_1jmm_events241->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_hww2l2v_13TeV_WW_1jmm_events241->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_hww2l2v_13TeV_WW_1jmm_events241->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_hww2l2v_13TeV_WW_1jmm_events241->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_hww2l2v_13TeV_WW_1jmm_events241->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_hww2l2v_13TeV_WW_1jmm_events241->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_hww2l2v_13TeV_WW_1jmm_events241->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_hww2l2v_13TeV_WW_1jmm_events241->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_hww2l2v_13TeV_WW_1jmm_events241->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_hww2l2v_13TeV_WW_1jmm_events241->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_hww2l2v_13TeV_WW_1jmm_events241->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_hww2l2v_13TeV_WW_1jmm_events->Add(new_histo_group_Higgs_hww2l2v_13TeV_WW_1jmm_events,"");
   thsBackground_grouped_hww2l2v_13TeV_WW_1jmm_events->Draw("hist same");
   
   thsSignal_grouped_hww2l2v_13TeV_WW_1jmm_events = new THStack();
   thsSignal_grouped_hww2l2v_13TeV_WW_1jmm_events->SetName("thsSignal_grouped_hww2l2v_13TeV_WW_1jmm_events");
   thsSignal_grouped_hww2l2v_13TeV_WW_1jmm_events->SetTitle("thsSignal_grouped_hww2l2v_13TeV_WW_1jmm_events");
   
   TH1F *thsSignal_grouped_hww2l2v_13TeV_WW_1jmm_events_stack_54 = new TH1F("thsSignal_grouped_hww2l2v_13TeV_WW_1jmm_events_stack_54","thsSignal_grouped_hww2l2v_13TeV_WW_1jmm_events",1,0,2);
   thsSignal_grouped_hww2l2v_13TeV_WW_1jmm_events_stack_54->SetMinimum(0);
   thsSignal_grouped_hww2l2v_13TeV_WW_1jmm_events_stack_54->SetMaximum(1.072596);
   thsSignal_grouped_hww2l2v_13TeV_WW_1jmm_events_stack_54->SetDirectory(0);
   thsSignal_grouped_hww2l2v_13TeV_WW_1jmm_events_stack_54->SetStats(0);
   thsSignal_grouped_hww2l2v_13TeV_WW_1jmm_events_stack_54->SetLineStyle(0);
   thsSignal_grouped_hww2l2v_13TeV_WW_1jmm_events_stack_54->SetMarkerStyle(20);
   thsSignal_grouped_hww2l2v_13TeV_WW_1jmm_events_stack_54->GetXaxis()->SetLabelFont(42);
   thsSignal_grouped_hww2l2v_13TeV_WW_1jmm_events_stack_54->GetXaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_hww2l2v_13TeV_WW_1jmm_events_stack_54->GetXaxis()->SetLabelSize(0.05);
   thsSignal_grouped_hww2l2v_13TeV_WW_1jmm_events_stack_54->GetXaxis()->SetTitleSize(0.06);
   thsSignal_grouped_hww2l2v_13TeV_WW_1jmm_events_stack_54->GetXaxis()->SetTitleOffset(0.9);
   thsSignal_grouped_hww2l2v_13TeV_WW_1jmm_events_stack_54->GetXaxis()->SetTitleFont(42);
   thsSignal_grouped_hww2l2v_13TeV_WW_1jmm_events_stack_54->GetYaxis()->SetLabelFont(42);
   thsSignal_grouped_hww2l2v_13TeV_WW_1jmm_events_stack_54->GetYaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_hww2l2v_13TeV_WW_1jmm_events_stack_54->GetYaxis()->SetLabelSize(0.05);
   thsSignal_grouped_hww2l2v_13TeV_WW_1jmm_events_stack_54->GetYaxis()->SetTitleSize(0.06);
   thsSignal_grouped_hww2l2v_13TeV_WW_1jmm_events_stack_54->GetYaxis()->SetTitleOffset(1.25);
   thsSignal_grouped_hww2l2v_13TeV_WW_1jmm_events_stack_54->GetYaxis()->SetTitleFont(42);
   thsSignal_grouped_hww2l2v_13TeV_WW_1jmm_events_stack_54->GetZaxis()->SetLabelFont(42);
   thsSignal_grouped_hww2l2v_13TeV_WW_1jmm_events_stack_54->GetZaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_hww2l2v_13TeV_WW_1jmm_events_stack_54->GetZaxis()->SetLabelSize(0.05);
   thsSignal_grouped_hww2l2v_13TeV_WW_1jmm_events_stack_54->GetZaxis()->SetTitleSize(0.06);
   thsSignal_grouped_hww2l2v_13TeV_WW_1jmm_events_stack_54->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_hww2l2v_13TeV_WW_1jmm_events->SetHistogram(thsSignal_grouped_hww2l2v_13TeV_WW_1jmm_events_stack_54);
   
   
   TH1D *new_histo_group_Higgs_hww2l2v_13TeV_WW_1jmm_events242 = new TH1D("new_histo_group_Higgs_hww2l2v_13TeV_WW_1jmm_events242","histo_H_htt",1,0,2);
   new_histo_group_Higgs_hww2l2v_13TeV_WW_1jmm_events242->SetBinContent(1,0.8797104);
   new_histo_group_Higgs_hww2l2v_13TeV_WW_1jmm_events242->SetBinError(1,0.1418097);
   new_histo_group_Higgs_hww2l2v_13TeV_WW_1jmm_events242->SetEntries(52);
   new_histo_group_Higgs_hww2l2v_13TeV_WW_1jmm_events242->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_hww2l2v_13TeV_WW_1jmm_events242->SetLineColor(ci);
   new_histo_group_Higgs_hww2l2v_13TeV_WW_1jmm_events242->SetLineWidth(2);
   new_histo_group_Higgs_hww2l2v_13TeV_WW_1jmm_events242->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_hww2l2v_13TeV_WW_1jmm_events242->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_hww2l2v_13TeV_WW_1jmm_events242->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_hww2l2v_13TeV_WW_1jmm_events242->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_hww2l2v_13TeV_WW_1jmm_events242->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_hww2l2v_13TeV_WW_1jmm_events242->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_hww2l2v_13TeV_WW_1jmm_events242->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_hww2l2v_13TeV_WW_1jmm_events242->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_hww2l2v_13TeV_WW_1jmm_events242->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_hww2l2v_13TeV_WW_1jmm_events242->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_hww2l2v_13TeV_WW_1jmm_events242->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_hww2l2v_13TeV_WW_1jmm_events242->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_hww2l2v_13TeV_WW_1jmm_events->Add(new_histo_group_Higgs_hww2l2v_13TeV_WW_1jmm_events,"");
   thsSignal_grouped_hww2l2v_13TeV_WW_1jmm_events->Draw("hist same noclear");
   
   Double_t _fx3034[1] = {
   1};
   Double_t _fy3034[1] = {
   1172.95};
   Double_t _felx3034[1] = {
   1};
   Double_t _fely3034[1] = {
   0};
   Double_t _fehx3034[1] = {
   1};
   Double_t _fehy3034[1] = {
   0};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(1,_fx3034,_fy3034,_felx3034,_fehx3034,_fely3034,_fehy3034);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(12);
   grae->SetFillStyle(3004);
   grae->SetLineColor(12);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3034 = new TH1F("Graph_Graph3034","",100,0,2.2);
   Graph_Graph3034->SetMinimum(1172.85);
   Graph_Graph3034->SetMaximum(1174.05);
   Graph_Graph3034->SetDirectory(0);
   Graph_Graph3034->SetStats(0);
   Graph_Graph3034->SetLineStyle(0);
   Graph_Graph3034->SetMarkerStyle(20);
   Graph_Graph3034->GetXaxis()->SetLabelFont(42);
   Graph_Graph3034->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3034->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3034->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3034->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3034->GetXaxis()->SetTitleFont(42);
   Graph_Graph3034->GetYaxis()->SetLabelFont(42);
   Graph_Graph3034->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3034->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3034->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3034->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3034->GetYaxis()->SetTitleFont(42);
   Graph_Graph3034->GetZaxis()->SetLabelFont(42);
   Graph_Graph3034->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3034->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3034->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3034->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3034);
   
   grae->Draw("2");
   
   Double_t _fx3035[1] = {
   1};
   Double_t _fy3035[1] = {
   2468};
   Double_t _felx3035[1] = {
   1};
   Double_t _fely3035[1] = {
   49.67667};
   Double_t _fehx3035[1] = {
   1};
   Double_t _fehy3035[1] = {
   50.68678};
   grae = new TGraphAsymmErrors(1,_fx3035,_fy3035,_felx3035,_fehx3035,_fely3035,_fehy3035);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(1);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3035 = new TH1F("Graph_Graph3035","",100,0,2.2);
   Graph_Graph3035->SetMinimum(2408.287);
   Graph_Graph3035->SetMaximum(2528.723);
   Graph_Graph3035->SetDirectory(0);
   Graph_Graph3035->SetStats(0);
   Graph_Graph3035->SetLineStyle(0);
   Graph_Graph3035->SetMarkerStyle(20);
   Graph_Graph3035->GetXaxis()->SetLabelFont(42);
   Graph_Graph3035->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3035->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3035->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3035->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3035->GetXaxis()->SetTitleFont(42);
   Graph_Graph3035->GetYaxis()->SetLabelFont(42);
   Graph_Graph3035->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3035->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3035->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3035->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3035->GetYaxis()->SetTitleFont(42);
   Graph_Graph3035->GetZaxis()->SetLabelFont(42);
   Graph_Graph3035->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3035->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3035->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3035->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3035);
   
   grae->Draw("p0");
   
   TLegend *leg = new TLegend(0.2,0.7,0.8,0.9,NULL,"brNDC");
   leg->SetTextFont(62);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("new_histo_group_DY_hww2l2v_13TeV_WW_1jmm_events","DY","F");

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
   entry=leg->AddEntry("new_histo_group_top_hww2l2v_13TeV_WW_1jmm_events","tW and t#bart","F");

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
   entry=leg->AddEntry("new_histo_group_WW_hww2l2v_13TeV_WW_1jmm_events","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_hww2l2v_13TeV_WW_1jmm_events","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_VZ_hww2l2v_13TeV_WW_1jmm_events","VZ/#gamma*/#gamma","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_hww2l2v_13TeV_WW_1jmm_events","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_hww2l2v_13TeV_WW_1jmm_events","Data","EPL");
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
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
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
   entry=leg->AddEntry("new_histo_group_DY_hww2l2v_13TeV_WW_1jmm_events","DY","F");

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
   entry=leg->AddEntry("new_histo_group_top_hww2l2v_13TeV_WW_1jmm_events","tW and t#bart","F");

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
   entry=leg->AddEntry("new_histo_group_WW_hww2l2v_13TeV_WW_1jmm_events","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_hww2l2v_13TeV_WW_1jmm_events","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_VZ_hww2l2v_13TeV_WW_1jmm_events","VZ/#gamma*/#gamma","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_hww2l2v_13TeV_WW_1jmm_events","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_hww2l2v_13TeV_WW_1jmm_events","Data","EPL");
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
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   leg->Draw();
   
   TH1F *hframe_copy243 = new TH1F("hframe_copy243","",1000,0,2);
   hframe_copy243->SetMinimum(0);
   hframe_copy243->SetMaximum(6294.197);
   hframe_copy243->SetDirectory(0);
   hframe_copy243->SetStats(0);
   hframe_copy243->SetLineStyle(0);
   hframe_copy243->SetMarkerStyle(20);
   hframe_copy243->GetXaxis()->SetTitle("events");
   hframe_copy243->GetXaxis()->SetNdivisions(506);
   hframe_copy243->GetXaxis()->SetLabelFont(42);
   hframe_copy243->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy243->GetXaxis()->SetLabelSize(0.05);
   hframe_copy243->GetXaxis()->SetTitleSize(0.06);
   hframe_copy243->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy243->GetXaxis()->SetTitleFont(42);
   hframe_copy243->GetYaxis()->SetTitle("Events");
   hframe_copy243->GetYaxis()->SetLabelFont(42);
   hframe_copy243->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy243->GetYaxis()->SetLabelSize(0.05);
   hframe_copy243->GetYaxis()->SetTitleSize(0.06);
   hframe_copy243->GetYaxis()->SetTitleOffset(1.25);
   hframe_copy243->GetYaxis()->SetTitleFont(42);
   hframe_copy243->GetZaxis()->SetLabelFont(42);
   hframe_copy243->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy243->GetZaxis()->SetLabelSize(0.05);
   hframe_copy243->GetZaxis()->SetTitleSize(0.06);
   hframe_copy243->GetZaxis()->SetTitleFont(42);
   hframe_copy243->Draw("sameaxis");
   cchww2l2v_13TeV_WW_1jmm_events->Modified();
   cchww2l2v_13TeV_WW_1jmm_events->cd();
   cchww2l2v_13TeV_WW_1jmm_events->SetSelected(cchww2l2v_13TeV_WW_1jmm_events);
}
