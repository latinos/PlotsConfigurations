void c_hww2l2v_13TeV_1jee_AccDen_events()
{
//=========Macro generated from canvas: cchww2l2v_13TeV_1jee_AccDen_events/cc
//=========  (Tue Mar 21 11:46:42 2017) by ROOT version6.02/13
   TCanvas *cchww2l2v_13TeV_1jee_AccDen_events = new TCanvas("cchww2l2v_13TeV_1jee_AccDen_events", "cc",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   cchww2l2v_13TeV_1jee_AccDen_events->SetHighLightColor(2);
   cchww2l2v_13TeV_1jee_AccDen_events->Range(-0.4,-3731.767,2.1,24974.13);
   cchww2l2v_13TeV_1jee_AccDen_events->SetFillColor(0);
   cchww2l2v_13TeV_1jee_AccDen_events->SetBorderMode(0);
   cchww2l2v_13TeV_1jee_AccDen_events->SetBorderSize(2);
   cchww2l2v_13TeV_1jee_AccDen_events->SetTickx(1);
   cchww2l2v_13TeV_1jee_AccDen_events->SetTicky(1);
   cchww2l2v_13TeV_1jee_AccDen_events->SetLeftMargin(0.16);
   cchww2l2v_13TeV_1jee_AccDen_events->SetRightMargin(0.04);
   cchww2l2v_13TeV_1jee_AccDen_events->SetTopMargin(0.05);
   cchww2l2v_13TeV_1jee_AccDen_events->SetBottomMargin(0.13);
   cchww2l2v_13TeV_1jee_AccDen_events->SetFrameFillStyle(0);
   cchww2l2v_13TeV_1jee_AccDen_events->SetFrameBorderMode(0);
   cchww2l2v_13TeV_1jee_AccDen_events->SetFrameFillStyle(0);
   cchww2l2v_13TeV_1jee_AccDen_events->SetFrameBorderMode(0);
   
   TH1F *hframe271 = new TH1F("hframe271","",1000,0,2);
   hframe271->SetMinimum(0);
   hframe271->SetMaximum(23538.84);
   hframe271->SetDirectory(0);
   hframe271->SetStats(0);
   hframe271->SetLineStyle(0);
   hframe271->SetMarkerStyle(20);
   hframe271->GetXaxis()->SetTitle("events");
   hframe271->GetXaxis()->SetNdivisions(506);
   hframe271->GetXaxis()->SetLabelFont(42);
   hframe271->GetXaxis()->SetLabelOffset(0.007);
   hframe271->GetXaxis()->SetLabelSize(0.05);
   hframe271->GetXaxis()->SetTitleSize(0.06);
   hframe271->GetXaxis()->SetTitleOffset(0.9);
   hframe271->GetXaxis()->SetTitleFont(42);
   hframe271->GetYaxis()->SetTitle("Events");
   hframe271->GetYaxis()->SetLabelFont(42);
   hframe271->GetYaxis()->SetLabelOffset(0.007);
   hframe271->GetYaxis()->SetLabelSize(0.05);
   hframe271->GetYaxis()->SetTitleSize(0.06);
   hframe271->GetYaxis()->SetTitleOffset(1.25);
   hframe271->GetYaxis()->SetTitleFont(42);
   hframe271->GetZaxis()->SetLabelFont(42);
   hframe271->GetZaxis()->SetLabelOffset(0.007);
   hframe271->GetZaxis()->SetLabelSize(0.05);
   hframe271->GetZaxis()->SetTitleSize(0.06);
   hframe271->GetZaxis()->SetTitleFont(42);
   hframe271->Draw(" ");
   
   THStack *thsBackground_grouped_hww2l2v_13TeV_1jee_AccDen_events = new THStack();
   thsBackground_grouped_hww2l2v_13TeV_1jee_AccDen_events->SetName("thsBackground_grouped_hww2l2v_13TeV_1jee_AccDen_events");
   thsBackground_grouped_hww2l2v_13TeV_1jee_AccDen_events->SetTitle("thsBackground_grouped_hww2l2v_13TeV_1jee_AccDen_events");
   
   TH1F *thsBackground_grouped_hww2l2v_13TeV_1jee_AccDen_events_stack_61 = new TH1F("thsBackground_grouped_hww2l2v_13TeV_1jee_AccDen_events_stack_61","thsBackground_grouped_hww2l2v_13TeV_1jee_AccDen_events",1,0,2);
   thsBackground_grouped_hww2l2v_13TeV_1jee_AccDen_events_stack_61->SetMinimum(0);
   thsBackground_grouped_hww2l2v_13TeV_1jee_AccDen_events_stack_61->SetMaximum(5449.909);
   thsBackground_grouped_hww2l2v_13TeV_1jee_AccDen_events_stack_61->SetDirectory(0);
   thsBackground_grouped_hww2l2v_13TeV_1jee_AccDen_events_stack_61->SetStats(0);
   thsBackground_grouped_hww2l2v_13TeV_1jee_AccDen_events_stack_61->SetLineStyle(0);
   thsBackground_grouped_hww2l2v_13TeV_1jee_AccDen_events_stack_61->SetMarkerStyle(20);
   thsBackground_grouped_hww2l2v_13TeV_1jee_AccDen_events_stack_61->GetXaxis()->SetLabelFont(42);
   thsBackground_grouped_hww2l2v_13TeV_1jee_AccDen_events_stack_61->GetXaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_hww2l2v_13TeV_1jee_AccDen_events_stack_61->GetXaxis()->SetLabelSize(0.05);
   thsBackground_grouped_hww2l2v_13TeV_1jee_AccDen_events_stack_61->GetXaxis()->SetTitleSize(0.06);
   thsBackground_grouped_hww2l2v_13TeV_1jee_AccDen_events_stack_61->GetXaxis()->SetTitleOffset(0.9);
   thsBackground_grouped_hww2l2v_13TeV_1jee_AccDen_events_stack_61->GetXaxis()->SetTitleFont(42);
   thsBackground_grouped_hww2l2v_13TeV_1jee_AccDen_events_stack_61->GetYaxis()->SetLabelFont(42);
   thsBackground_grouped_hww2l2v_13TeV_1jee_AccDen_events_stack_61->GetYaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_hww2l2v_13TeV_1jee_AccDen_events_stack_61->GetYaxis()->SetLabelSize(0.05);
   thsBackground_grouped_hww2l2v_13TeV_1jee_AccDen_events_stack_61->GetYaxis()->SetTitleSize(0.06);
   thsBackground_grouped_hww2l2v_13TeV_1jee_AccDen_events_stack_61->GetYaxis()->SetTitleOffset(1.25);
   thsBackground_grouped_hww2l2v_13TeV_1jee_AccDen_events_stack_61->GetYaxis()->SetTitleFont(42);
   thsBackground_grouped_hww2l2v_13TeV_1jee_AccDen_events_stack_61->GetZaxis()->SetLabelFont(42);
   thsBackground_grouped_hww2l2v_13TeV_1jee_AccDen_events_stack_61->GetZaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_hww2l2v_13TeV_1jee_AccDen_events_stack_61->GetZaxis()->SetLabelSize(0.05);
   thsBackground_grouped_hww2l2v_13TeV_1jee_AccDen_events_stack_61->GetZaxis()->SetTitleSize(0.06);
   thsBackground_grouped_hww2l2v_13TeV_1jee_AccDen_events_stack_61->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_hww2l2v_13TeV_1jee_AccDen_events->SetHistogram(thsBackground_grouped_hww2l2v_13TeV_1jee_AccDen_events_stack_61);
   
   
   TH1D *new_histo_group_DY_hww2l2v_13TeV_1jee_AccDen_events272 = new TH1D("new_histo_group_DY_hww2l2v_13TeV_1jee_AccDen_events272","histo_DY",1,0,2);
   new_histo_group_DY_hww2l2v_13TeV_1jee_AccDen_events272->SetBinContent(1,2994.879);
   new_histo_group_DY_hww2l2v_13TeV_1jee_AccDen_events272->SetBinError(1,306.4169);
   new_histo_group_DY_hww2l2v_13TeV_1jee_AccDen_events272->SetEntries(1996);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#009900");
   new_histo_group_DY_hww2l2v_13TeV_1jee_AccDen_events272->SetFillColor(ci);
   new_histo_group_DY_hww2l2v_13TeV_1jee_AccDen_events272->SetFillStyle(3001);

   ci = TColor::GetColor("#009900");
   new_histo_group_DY_hww2l2v_13TeV_1jee_AccDen_events272->SetLineColor(ci);
   new_histo_group_DY_hww2l2v_13TeV_1jee_AccDen_events272->GetXaxis()->SetLabelFont(42);
   new_histo_group_DY_hww2l2v_13TeV_1jee_AccDen_events272->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_DY_hww2l2v_13TeV_1jee_AccDen_events272->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_DY_hww2l2v_13TeV_1jee_AccDen_events272->GetXaxis()->SetTitleFont(42);
   new_histo_group_DY_hww2l2v_13TeV_1jee_AccDen_events272->GetYaxis()->SetLabelFont(42);
   new_histo_group_DY_hww2l2v_13TeV_1jee_AccDen_events272->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_DY_hww2l2v_13TeV_1jee_AccDen_events272->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_DY_hww2l2v_13TeV_1jee_AccDen_events272->GetYaxis()->SetTitleFont(42);
   new_histo_group_DY_hww2l2v_13TeV_1jee_AccDen_events272->GetZaxis()->SetLabelFont(42);
   new_histo_group_DY_hww2l2v_13TeV_1jee_AccDen_events272->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_DY_hww2l2v_13TeV_1jee_AccDen_events272->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_DY_hww2l2v_13TeV_1jee_AccDen_events272->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_hww2l2v_13TeV_1jee_AccDen_events->Add(new_histo_group_DY_hww2l2v_13TeV_1jee_AccDen_events,"");
   
   TH1D *new_histo_group_top_hww2l2v_13TeV_1jee_AccDen_events273 = new TH1D("new_histo_group_top_hww2l2v_13TeV_1jee_AccDen_events273","histo_top",1,0,2);
   new_histo_group_top_hww2l2v_13TeV_1jee_AccDen_events273->SetBinContent(1,838.0155);
   new_histo_group_top_hww2l2v_13TeV_1jee_AccDen_events273->SetBinError(1,5.815959);
   new_histo_group_top_hww2l2v_13TeV_1jee_AccDen_events273->SetEntries(22905);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_top_hww2l2v_13TeV_1jee_AccDen_events273->SetFillColor(ci);
   new_histo_group_top_hww2l2v_13TeV_1jee_AccDen_events273->SetFillStyle(3001);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_top_hww2l2v_13TeV_1jee_AccDen_events273->SetLineColor(ci);
   new_histo_group_top_hww2l2v_13TeV_1jee_AccDen_events273->GetXaxis()->SetLabelFont(42);
   new_histo_group_top_hww2l2v_13TeV_1jee_AccDen_events273->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_top_hww2l2v_13TeV_1jee_AccDen_events273->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_top_hww2l2v_13TeV_1jee_AccDen_events273->GetXaxis()->SetTitleFont(42);
   new_histo_group_top_hww2l2v_13TeV_1jee_AccDen_events273->GetYaxis()->SetLabelFont(42);
   new_histo_group_top_hww2l2v_13TeV_1jee_AccDen_events273->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_top_hww2l2v_13TeV_1jee_AccDen_events273->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_top_hww2l2v_13TeV_1jee_AccDen_events273->GetYaxis()->SetTitleFont(42);
   new_histo_group_top_hww2l2v_13TeV_1jee_AccDen_events273->GetZaxis()->SetLabelFont(42);
   new_histo_group_top_hww2l2v_13TeV_1jee_AccDen_events273->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_top_hww2l2v_13TeV_1jee_AccDen_events273->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_top_hww2l2v_13TeV_1jee_AccDen_events273->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_hww2l2v_13TeV_1jee_AccDen_events->Add(new_histo_group_top_hww2l2v_13TeV_1jee_AccDen_events,"");
   
   TH1D *new_histo_group_WW_hww2l2v_13TeV_1jee_AccDen_events274 = new TH1D("new_histo_group_WW_hww2l2v_13TeV_1jee_AccDen_events274","histo_WW",1,0,2);
   new_histo_group_WW_hww2l2v_13TeV_1jee_AccDen_events274->SetBinContent(1,785.2256);
   new_histo_group_WW_hww2l2v_13TeV_1jee_AccDen_events274->SetBinError(1,11.94435);
   new_histo_group_WW_hww2l2v_13TeV_1jee_AccDen_events274->SetEntries(6192);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_hww2l2v_13TeV_1jee_AccDen_events274->SetFillColor(ci);
   new_histo_group_WW_hww2l2v_13TeV_1jee_AccDen_events274->SetFillStyle(3001);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_hww2l2v_13TeV_1jee_AccDen_events274->SetLineColor(ci);
   new_histo_group_WW_hww2l2v_13TeV_1jee_AccDen_events274->GetXaxis()->SetLabelFont(42);
   new_histo_group_WW_hww2l2v_13TeV_1jee_AccDen_events274->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WW_hww2l2v_13TeV_1jee_AccDen_events274->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WW_hww2l2v_13TeV_1jee_AccDen_events274->GetXaxis()->SetTitleFont(42);
   new_histo_group_WW_hww2l2v_13TeV_1jee_AccDen_events274->GetYaxis()->SetLabelFont(42);
   new_histo_group_WW_hww2l2v_13TeV_1jee_AccDen_events274->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WW_hww2l2v_13TeV_1jee_AccDen_events274->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WW_hww2l2v_13TeV_1jee_AccDen_events274->GetYaxis()->SetTitleFont(42);
   new_histo_group_WW_hww2l2v_13TeV_1jee_AccDen_events274->GetZaxis()->SetLabelFont(42);
   new_histo_group_WW_hww2l2v_13TeV_1jee_AccDen_events274->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WW_hww2l2v_13TeV_1jee_AccDen_events274->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WW_hww2l2v_13TeV_1jee_AccDen_events274->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_hww2l2v_13TeV_1jee_AccDen_events->Add(new_histo_group_WW_hww2l2v_13TeV_1jee_AccDen_events,"");
   
   TH1D *new_histo_group_VVV_hww2l2v_13TeV_1jee_AccDen_events275 = new TH1D("new_histo_group_VVV_hww2l2v_13TeV_1jee_AccDen_events275","histo_VVV",1,0,2);
   new_histo_group_VVV_hww2l2v_13TeV_1jee_AccDen_events275->SetBinContent(1,4.235529);
   new_histo_group_VVV_hww2l2v_13TeV_1jee_AccDen_events275->SetBinError(1,0.360835);
   new_histo_group_VVV_hww2l2v_13TeV_1jee_AccDen_events275->SetEntries(217);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_hww2l2v_13TeV_1jee_AccDen_events275->SetFillColor(ci);
   new_histo_group_VVV_hww2l2v_13TeV_1jee_AccDen_events275->SetFillStyle(3001);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_hww2l2v_13TeV_1jee_AccDen_events275->SetLineColor(ci);
   new_histo_group_VVV_hww2l2v_13TeV_1jee_AccDen_events275->GetXaxis()->SetLabelFont(42);
   new_histo_group_VVV_hww2l2v_13TeV_1jee_AccDen_events275->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_hww2l2v_13TeV_1jee_AccDen_events275->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_hww2l2v_13TeV_1jee_AccDen_events275->GetXaxis()->SetTitleFont(42);
   new_histo_group_VVV_hww2l2v_13TeV_1jee_AccDen_events275->GetYaxis()->SetLabelFont(42);
   new_histo_group_VVV_hww2l2v_13TeV_1jee_AccDen_events275->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_hww2l2v_13TeV_1jee_AccDen_events275->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_hww2l2v_13TeV_1jee_AccDen_events275->GetYaxis()->SetTitleFont(42);
   new_histo_group_VVV_hww2l2v_13TeV_1jee_AccDen_events275->GetZaxis()->SetLabelFont(42);
   new_histo_group_VVV_hww2l2v_13TeV_1jee_AccDen_events275->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_hww2l2v_13TeV_1jee_AccDen_events275->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_hww2l2v_13TeV_1jee_AccDen_events275->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_hww2l2v_13TeV_1jee_AccDen_events->Add(new_histo_group_VVV_hww2l2v_13TeV_1jee_AccDen_events,"");
   
   TH1D *new_histo_group_VZ_hww2l2v_13TeV_1jee_AccDen_events276 = new TH1D("new_histo_group_VZ_hww2l2v_13TeV_1jee_AccDen_events276","histo_Vg",1,0,2);
   new_histo_group_VZ_hww2l2v_13TeV_1jee_AccDen_events276->SetBinContent(1,505.1421);
   new_histo_group_VZ_hww2l2v_13TeV_1jee_AccDen_events276->SetBinError(1,114.7237);
   new_histo_group_VZ_hww2l2v_13TeV_1jee_AccDen_events276->SetEntries(9141);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_VZ_hww2l2v_13TeV_1jee_AccDen_events276->SetFillColor(ci);
   new_histo_group_VZ_hww2l2v_13TeV_1jee_AccDen_events276->SetFillStyle(3001);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_VZ_hww2l2v_13TeV_1jee_AccDen_events276->SetLineColor(ci);
   new_histo_group_VZ_hww2l2v_13TeV_1jee_AccDen_events276->GetXaxis()->SetLabelFont(42);
   new_histo_group_VZ_hww2l2v_13TeV_1jee_AccDen_events276->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_VZ_hww2l2v_13TeV_1jee_AccDen_events276->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_VZ_hww2l2v_13TeV_1jee_AccDen_events276->GetXaxis()->SetTitleFont(42);
   new_histo_group_VZ_hww2l2v_13TeV_1jee_AccDen_events276->GetYaxis()->SetLabelFont(42);
   new_histo_group_VZ_hww2l2v_13TeV_1jee_AccDen_events276->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_VZ_hww2l2v_13TeV_1jee_AccDen_events276->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_VZ_hww2l2v_13TeV_1jee_AccDen_events276->GetYaxis()->SetTitleFont(42);
   new_histo_group_VZ_hww2l2v_13TeV_1jee_AccDen_events276->GetZaxis()->SetLabelFont(42);
   new_histo_group_VZ_hww2l2v_13TeV_1jee_AccDen_events276->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_VZ_hww2l2v_13TeV_1jee_AccDen_events276->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_VZ_hww2l2v_13TeV_1jee_AccDen_events276->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_hww2l2v_13TeV_1jee_AccDen_events->Add(new_histo_group_VZ_hww2l2v_13TeV_1jee_AccDen_events,"");
   
   TH1D *new_histo_group_Higgs_hww2l2v_13TeV_1jee_AccDen_events277 = new TH1D("new_histo_group_Higgs_hww2l2v_13TeV_1jee_AccDen_events277","histo_H_htt",1,0,2);
   new_histo_group_Higgs_hww2l2v_13TeV_1jee_AccDen_events277->SetBinContent(1,62.89206);
   new_histo_group_Higgs_hww2l2v_13TeV_1jee_AccDen_events277->SetBinError(1,1.849357);
   new_histo_group_Higgs_hww2l2v_13TeV_1jee_AccDen_events277->SetEntries(2635);
   new_histo_group_Higgs_hww2l2v_13TeV_1jee_AccDen_events277->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_hww2l2v_13TeV_1jee_AccDen_events277->SetLineColor(ci);
   new_histo_group_Higgs_hww2l2v_13TeV_1jee_AccDen_events277->SetLineWidth(2);
   new_histo_group_Higgs_hww2l2v_13TeV_1jee_AccDen_events277->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_hww2l2v_13TeV_1jee_AccDen_events277->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_hww2l2v_13TeV_1jee_AccDen_events277->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_hww2l2v_13TeV_1jee_AccDen_events277->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_hww2l2v_13TeV_1jee_AccDen_events277->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_hww2l2v_13TeV_1jee_AccDen_events277->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_hww2l2v_13TeV_1jee_AccDen_events277->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_hww2l2v_13TeV_1jee_AccDen_events277->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_hww2l2v_13TeV_1jee_AccDen_events277->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_hww2l2v_13TeV_1jee_AccDen_events277->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_hww2l2v_13TeV_1jee_AccDen_events277->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_hww2l2v_13TeV_1jee_AccDen_events277->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_hww2l2v_13TeV_1jee_AccDen_events->Add(new_histo_group_Higgs_hww2l2v_13TeV_1jee_AccDen_events,"");
   thsBackground_grouped_hww2l2v_13TeV_1jee_AccDen_events->Draw("hist same");
   
   thsSignal_grouped_hww2l2v_13TeV_1jee_AccDen_events = new THStack();
   thsSignal_grouped_hww2l2v_13TeV_1jee_AccDen_events->SetName("thsSignal_grouped_hww2l2v_13TeV_1jee_AccDen_events");
   thsSignal_grouped_hww2l2v_13TeV_1jee_AccDen_events->SetTitle("thsSignal_grouped_hww2l2v_13TeV_1jee_AccDen_events");
   
   TH1F *thsSignal_grouped_hww2l2v_13TeV_1jee_AccDen_events_stack_62 = new TH1F("thsSignal_grouped_hww2l2v_13TeV_1jee_AccDen_events_stack_62","thsSignal_grouped_hww2l2v_13TeV_1jee_AccDen_events",1,0,2);
   thsSignal_grouped_hww2l2v_13TeV_1jee_AccDen_events_stack_62->SetMinimum(0);
   thsSignal_grouped_hww2l2v_13TeV_1jee_AccDen_events_stack_62->SetMaximum(67.97849);
   thsSignal_grouped_hww2l2v_13TeV_1jee_AccDen_events_stack_62->SetDirectory(0);
   thsSignal_grouped_hww2l2v_13TeV_1jee_AccDen_events_stack_62->SetStats(0);
   thsSignal_grouped_hww2l2v_13TeV_1jee_AccDen_events_stack_62->SetLineStyle(0);
   thsSignal_grouped_hww2l2v_13TeV_1jee_AccDen_events_stack_62->SetMarkerStyle(20);
   thsSignal_grouped_hww2l2v_13TeV_1jee_AccDen_events_stack_62->GetXaxis()->SetLabelFont(42);
   thsSignal_grouped_hww2l2v_13TeV_1jee_AccDen_events_stack_62->GetXaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_hww2l2v_13TeV_1jee_AccDen_events_stack_62->GetXaxis()->SetLabelSize(0.05);
   thsSignal_grouped_hww2l2v_13TeV_1jee_AccDen_events_stack_62->GetXaxis()->SetTitleSize(0.06);
   thsSignal_grouped_hww2l2v_13TeV_1jee_AccDen_events_stack_62->GetXaxis()->SetTitleOffset(0.9);
   thsSignal_grouped_hww2l2v_13TeV_1jee_AccDen_events_stack_62->GetXaxis()->SetTitleFont(42);
   thsSignal_grouped_hww2l2v_13TeV_1jee_AccDen_events_stack_62->GetYaxis()->SetLabelFont(42);
   thsSignal_grouped_hww2l2v_13TeV_1jee_AccDen_events_stack_62->GetYaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_hww2l2v_13TeV_1jee_AccDen_events_stack_62->GetYaxis()->SetLabelSize(0.05);
   thsSignal_grouped_hww2l2v_13TeV_1jee_AccDen_events_stack_62->GetYaxis()->SetTitleSize(0.06);
   thsSignal_grouped_hww2l2v_13TeV_1jee_AccDen_events_stack_62->GetYaxis()->SetTitleOffset(1.25);
   thsSignal_grouped_hww2l2v_13TeV_1jee_AccDen_events_stack_62->GetYaxis()->SetTitleFont(42);
   thsSignal_grouped_hww2l2v_13TeV_1jee_AccDen_events_stack_62->GetZaxis()->SetLabelFont(42);
   thsSignal_grouped_hww2l2v_13TeV_1jee_AccDen_events_stack_62->GetZaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_hww2l2v_13TeV_1jee_AccDen_events_stack_62->GetZaxis()->SetLabelSize(0.05);
   thsSignal_grouped_hww2l2v_13TeV_1jee_AccDen_events_stack_62->GetZaxis()->SetTitleSize(0.06);
   thsSignal_grouped_hww2l2v_13TeV_1jee_AccDen_events_stack_62->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_hww2l2v_13TeV_1jee_AccDen_events->SetHistogram(thsSignal_grouped_hww2l2v_13TeV_1jee_AccDen_events_stack_62);
   
   
   TH1D *new_histo_group_Higgs_hww2l2v_13TeV_1jee_AccDen_events278 = new TH1D("new_histo_group_Higgs_hww2l2v_13TeV_1jee_AccDen_events278","histo_H_htt",1,0,2);
   new_histo_group_Higgs_hww2l2v_13TeV_1jee_AccDen_events278->SetBinContent(1,62.89206);
   new_histo_group_Higgs_hww2l2v_13TeV_1jee_AccDen_events278->SetBinError(1,1.849357);
   new_histo_group_Higgs_hww2l2v_13TeV_1jee_AccDen_events278->SetEntries(2635);
   new_histo_group_Higgs_hww2l2v_13TeV_1jee_AccDen_events278->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_hww2l2v_13TeV_1jee_AccDen_events278->SetLineColor(ci);
   new_histo_group_Higgs_hww2l2v_13TeV_1jee_AccDen_events278->SetLineWidth(2);
   new_histo_group_Higgs_hww2l2v_13TeV_1jee_AccDen_events278->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_hww2l2v_13TeV_1jee_AccDen_events278->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_hww2l2v_13TeV_1jee_AccDen_events278->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_hww2l2v_13TeV_1jee_AccDen_events278->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_hww2l2v_13TeV_1jee_AccDen_events278->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_hww2l2v_13TeV_1jee_AccDen_events278->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_hww2l2v_13TeV_1jee_AccDen_events278->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_hww2l2v_13TeV_1jee_AccDen_events278->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_hww2l2v_13TeV_1jee_AccDen_events278->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_hww2l2v_13TeV_1jee_AccDen_events278->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_hww2l2v_13TeV_1jee_AccDen_events278->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_hww2l2v_13TeV_1jee_AccDen_events278->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_hww2l2v_13TeV_1jee_AccDen_events->Add(new_histo_group_Higgs_hww2l2v_13TeV_1jee_AccDen_events,"");
   thsSignal_grouped_hww2l2v_13TeV_1jee_AccDen_events->Draw("hist same noclear");
   
   Double_t _fx3040[1] = {
   1};
   Double_t _fy3040[1] = {
   9319};
   Double_t _felx3040[1] = {
   1};
   Double_t _fely3040[1] = {
   96.53532};
   Double_t _fehx3040[1] = {
   1};
   Double_t _fehy3040[1] = {
   97.54053};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(1,_fx3040,_fy3040,_felx3040,_fehx3040,_fely3040,_fehy3040);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(1);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3040 = new TH1F("Graph_Graph3040","",100,0,2.2);
   Graph_Graph3040->SetMinimum(9203.057);
   Graph_Graph3040->SetMaximum(9435.948);
   Graph_Graph3040->SetDirectory(0);
   Graph_Graph3040->SetStats(0);
   Graph_Graph3040->SetLineStyle(0);
   Graph_Graph3040->SetMarkerStyle(20);
   Graph_Graph3040->GetXaxis()->SetLabelFont(42);
   Graph_Graph3040->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3040->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3040->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3040->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3040->GetXaxis()->SetTitleFont(42);
   Graph_Graph3040->GetYaxis()->SetLabelFont(42);
   Graph_Graph3040->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3040->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3040->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3040->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3040->GetYaxis()->SetTitleFont(42);
   Graph_Graph3040->GetZaxis()->SetLabelFont(42);
   Graph_Graph3040->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3040->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3040->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3040->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3040);
   
   grae->Draw("p0");
   
   TLegend *leg = new TLegend(0.2,0.7,0.8,0.9,NULL,"brNDC");
   leg->SetTextFont(62);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("new_histo_group_DY_hww2l2v_13TeV_1jee_AccDen_events","DY","F");

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
   entry=leg->AddEntry("new_histo_group_top_hww2l2v_13TeV_1jee_AccDen_events","tW and t#bart","F");

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
   entry=leg->AddEntry("new_histo_group_WW_hww2l2v_13TeV_1jee_AccDen_events","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_hww2l2v_13TeV_1jee_AccDen_events","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_VZ_hww2l2v_13TeV_1jee_AccDen_events","VZ/#gamma*/#gamma","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_hww2l2v_13TeV_1jee_AccDen_events","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_hww2l2v_13TeV_1jee_AccDen_events","Data","EPL");
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
   entry=leg->AddEntry("new_histo_group_DY_hww2l2v_13TeV_1jee_AccDen_events","DY","F");

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
   entry=leg->AddEntry("new_histo_group_top_hww2l2v_13TeV_1jee_AccDen_events","tW and t#bart","F");

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
   entry=leg->AddEntry("new_histo_group_WW_hww2l2v_13TeV_1jee_AccDen_events","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_hww2l2v_13TeV_1jee_AccDen_events","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_VZ_hww2l2v_13TeV_1jee_AccDen_events","VZ/#gamma*/#gamma","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_hww2l2v_13TeV_1jee_AccDen_events","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_hww2l2v_13TeV_1jee_AccDen_events","Data","EPL");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   leg->Draw();
   
   TH1F *hframe_copy279 = new TH1F("hframe_copy279","",1000,0,2);
   hframe_copy279->SetMinimum(0);
   hframe_copy279->SetMaximum(23538.84);
   hframe_copy279->SetDirectory(0);
   hframe_copy279->SetStats(0);
   hframe_copy279->SetLineStyle(0);
   hframe_copy279->SetMarkerStyle(20);
   hframe_copy279->GetXaxis()->SetTitle("events");
   hframe_copy279->GetXaxis()->SetNdivisions(506);
   hframe_copy279->GetXaxis()->SetLabelFont(42);
   hframe_copy279->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy279->GetXaxis()->SetLabelSize(0.05);
   hframe_copy279->GetXaxis()->SetTitleSize(0.06);
   hframe_copy279->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy279->GetXaxis()->SetTitleFont(42);
   hframe_copy279->GetYaxis()->SetTitle("Events");
   hframe_copy279->GetYaxis()->SetLabelFont(42);
   hframe_copy279->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy279->GetYaxis()->SetLabelSize(0.05);
   hframe_copy279->GetYaxis()->SetTitleSize(0.06);
   hframe_copy279->GetYaxis()->SetTitleOffset(1.25);
   hframe_copy279->GetYaxis()->SetTitleFont(42);
   hframe_copy279->GetZaxis()->SetLabelFont(42);
   hframe_copy279->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy279->GetZaxis()->SetLabelSize(0.05);
   hframe_copy279->GetZaxis()->SetTitleSize(0.06);
   hframe_copy279->GetZaxis()->SetTitleFont(42);
   hframe_copy279->Draw("sameaxis");
   cchww2l2v_13TeV_1jee_AccDen_events->Modified();
   cchww2l2v_13TeV_1jee_AccDen_events->cd();
   cchww2l2v_13TeV_1jee_AccDen_events->SetSelected(cchww2l2v_13TeV_1jee_AccDen_events);
}
