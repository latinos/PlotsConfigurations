void c_hww2l2v_13TeV_DYin_0jee_events()
{
//=========Macro generated from canvas: cchww2l2v_13TeV_DYin_0jee_events/cc
//=========  (Tue Mar 21 11:46:40 2017) by ROOT version6.02/13
   TCanvas *cchww2l2v_13TeV_DYin_0jee_events = new TCanvas("cchww2l2v_13TeV_DYin_0jee_events", "cc",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   cchww2l2v_13TeV_DYin_0jee_events->SetHighLightColor(2);
   cchww2l2v_13TeV_DYin_0jee_events->Range(-0.4,-4197.419,2.1,28090.42);
   cchww2l2v_13TeV_DYin_0jee_events->SetFillColor(0);
   cchww2l2v_13TeV_DYin_0jee_events->SetBorderMode(0);
   cchww2l2v_13TeV_DYin_0jee_events->SetBorderSize(2);
   cchww2l2v_13TeV_DYin_0jee_events->SetTickx(1);
   cchww2l2v_13TeV_DYin_0jee_events->SetTicky(1);
   cchww2l2v_13TeV_DYin_0jee_events->SetLeftMargin(0.16);
   cchww2l2v_13TeV_DYin_0jee_events->SetRightMargin(0.04);
   cchww2l2v_13TeV_DYin_0jee_events->SetTopMargin(0.05);
   cchww2l2v_13TeV_DYin_0jee_events->SetBottomMargin(0.13);
   cchww2l2v_13TeV_DYin_0jee_events->SetFrameFillStyle(0);
   cchww2l2v_13TeV_DYin_0jee_events->SetFrameBorderMode(0);
   cchww2l2v_13TeV_DYin_0jee_events->SetFrameFillStyle(0);
   cchww2l2v_13TeV_DYin_0jee_events->SetFrameBorderMode(0);
   
   TH1F *hframe253 = new TH1F("hframe253","",1000,0,2);
   hframe253->SetMinimum(0);
   hframe253->SetMaximum(26476.03);
   hframe253->SetDirectory(0);
   hframe253->SetStats(0);
   hframe253->SetLineStyle(0);
   hframe253->SetMarkerStyle(20);
   hframe253->GetXaxis()->SetTitle("events");
   hframe253->GetXaxis()->SetNdivisions(506);
   hframe253->GetXaxis()->SetLabelFont(42);
   hframe253->GetXaxis()->SetLabelOffset(0.007);
   hframe253->GetXaxis()->SetLabelSize(0.05);
   hframe253->GetXaxis()->SetTitleSize(0.06);
   hframe253->GetXaxis()->SetTitleOffset(0.9);
   hframe253->GetXaxis()->SetTitleFont(42);
   hframe253->GetYaxis()->SetTitle("Events");
   hframe253->GetYaxis()->SetLabelFont(42);
   hframe253->GetYaxis()->SetLabelOffset(0.007);
   hframe253->GetYaxis()->SetLabelSize(0.05);
   hframe253->GetYaxis()->SetTitleSize(0.06);
   hframe253->GetYaxis()->SetTitleOffset(1.25);
   hframe253->GetYaxis()->SetTitleFont(42);
   hframe253->GetZaxis()->SetLabelFont(42);
   hframe253->GetZaxis()->SetLabelOffset(0.007);
   hframe253->GetZaxis()->SetLabelSize(0.05);
   hframe253->GetZaxis()->SetTitleSize(0.06);
   hframe253->GetZaxis()->SetTitleFont(42);
   hframe253->Draw(" ");
   
   THStack *thsBackground_grouped_hww2l2v_13TeV_DYin_0jee_events = new THStack();
   thsBackground_grouped_hww2l2v_13TeV_DYin_0jee_events->SetName("thsBackground_grouped_hww2l2v_13TeV_DYin_0jee_events");
   thsBackground_grouped_hww2l2v_13TeV_DYin_0jee_events->SetTitle("thsBackground_grouped_hww2l2v_13TeV_DYin_0jee_events");
   
   TH1F *thsBackground_grouped_hww2l2v_13TeV_DYin_0jee_events_stack_57 = new TH1F("thsBackground_grouped_hww2l2v_13TeV_DYin_0jee_events_stack_57","thsBackground_grouped_hww2l2v_13TeV_DYin_0jee_events",1,0,2);
   thsBackground_grouped_hww2l2v_13TeV_DYin_0jee_events_stack_57->SetMinimum(0);
   thsBackground_grouped_hww2l2v_13TeV_DYin_0jee_events_stack_57->SetMaximum(5951.424);
   thsBackground_grouped_hww2l2v_13TeV_DYin_0jee_events_stack_57->SetDirectory(0);
   thsBackground_grouped_hww2l2v_13TeV_DYin_0jee_events_stack_57->SetStats(0);
   thsBackground_grouped_hww2l2v_13TeV_DYin_0jee_events_stack_57->SetLineStyle(0);
   thsBackground_grouped_hww2l2v_13TeV_DYin_0jee_events_stack_57->SetMarkerStyle(20);
   thsBackground_grouped_hww2l2v_13TeV_DYin_0jee_events_stack_57->GetXaxis()->SetLabelFont(42);
   thsBackground_grouped_hww2l2v_13TeV_DYin_0jee_events_stack_57->GetXaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_hww2l2v_13TeV_DYin_0jee_events_stack_57->GetXaxis()->SetLabelSize(0.05);
   thsBackground_grouped_hww2l2v_13TeV_DYin_0jee_events_stack_57->GetXaxis()->SetTitleSize(0.06);
   thsBackground_grouped_hww2l2v_13TeV_DYin_0jee_events_stack_57->GetXaxis()->SetTitleOffset(0.9);
   thsBackground_grouped_hww2l2v_13TeV_DYin_0jee_events_stack_57->GetXaxis()->SetTitleFont(42);
   thsBackground_grouped_hww2l2v_13TeV_DYin_0jee_events_stack_57->GetYaxis()->SetLabelFont(42);
   thsBackground_grouped_hww2l2v_13TeV_DYin_0jee_events_stack_57->GetYaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_hww2l2v_13TeV_DYin_0jee_events_stack_57->GetYaxis()->SetLabelSize(0.05);
   thsBackground_grouped_hww2l2v_13TeV_DYin_0jee_events_stack_57->GetYaxis()->SetTitleSize(0.06);
   thsBackground_grouped_hww2l2v_13TeV_DYin_0jee_events_stack_57->GetYaxis()->SetTitleOffset(1.25);
   thsBackground_grouped_hww2l2v_13TeV_DYin_0jee_events_stack_57->GetYaxis()->SetTitleFont(42);
   thsBackground_grouped_hww2l2v_13TeV_DYin_0jee_events_stack_57->GetZaxis()->SetLabelFont(42);
   thsBackground_grouped_hww2l2v_13TeV_DYin_0jee_events_stack_57->GetZaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_hww2l2v_13TeV_DYin_0jee_events_stack_57->GetZaxis()->SetLabelSize(0.05);
   thsBackground_grouped_hww2l2v_13TeV_DYin_0jee_events_stack_57->GetZaxis()->SetTitleSize(0.06);
   thsBackground_grouped_hww2l2v_13TeV_DYin_0jee_events_stack_57->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_hww2l2v_13TeV_DYin_0jee_events->SetHistogram(thsBackground_grouped_hww2l2v_13TeV_DYin_0jee_events_stack_57);
   
   
   TH1D *new_histo_group_DY_hww2l2v_13TeV_DYin_0jee_events254 = new TH1D("new_histo_group_DY_hww2l2v_13TeV_DYin_0jee_events254","histo_DY",1,0,2);
   new_histo_group_DY_hww2l2v_13TeV_DYin_0jee_events254->SetBinContent(1,5028.732);
   new_histo_group_DY_hww2l2v_13TeV_DYin_0jee_events254->SetBinError(1,144.7285);
   new_histo_group_DY_hww2l2v_13TeV_DYin_0jee_events254->SetEntries(4400);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#009900");
   new_histo_group_DY_hww2l2v_13TeV_DYin_0jee_events254->SetFillColor(ci);
   new_histo_group_DY_hww2l2v_13TeV_DYin_0jee_events254->SetFillStyle(3001);

   ci = TColor::GetColor("#009900");
   new_histo_group_DY_hww2l2v_13TeV_DYin_0jee_events254->SetLineColor(ci);
   new_histo_group_DY_hww2l2v_13TeV_DYin_0jee_events254->GetXaxis()->SetLabelFont(42);
   new_histo_group_DY_hww2l2v_13TeV_DYin_0jee_events254->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_DY_hww2l2v_13TeV_DYin_0jee_events254->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_DY_hww2l2v_13TeV_DYin_0jee_events254->GetXaxis()->SetTitleFont(42);
   new_histo_group_DY_hww2l2v_13TeV_DYin_0jee_events254->GetYaxis()->SetLabelFont(42);
   new_histo_group_DY_hww2l2v_13TeV_DYin_0jee_events254->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_DY_hww2l2v_13TeV_DYin_0jee_events254->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_DY_hww2l2v_13TeV_DYin_0jee_events254->GetYaxis()->SetTitleFont(42);
   new_histo_group_DY_hww2l2v_13TeV_DYin_0jee_events254->GetZaxis()->SetLabelFont(42);
   new_histo_group_DY_hww2l2v_13TeV_DYin_0jee_events254->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_DY_hww2l2v_13TeV_DYin_0jee_events254->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_DY_hww2l2v_13TeV_DYin_0jee_events254->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_hww2l2v_13TeV_DYin_0jee_events->Add(new_histo_group_DY_hww2l2v_13TeV_DYin_0jee_events,"");
   
   TH1D *new_histo_group_top_hww2l2v_13TeV_DYin_0jee_events255 = new TH1D("new_histo_group_top_hww2l2v_13TeV_DYin_0jee_events255","histo_top",1,0,2);
   new_histo_group_top_hww2l2v_13TeV_DYin_0jee_events255->SetBinContent(1,32.84977);
   new_histo_group_top_hww2l2v_13TeV_DYin_0jee_events255->SetBinError(1,1.105526);
   new_histo_group_top_hww2l2v_13TeV_DYin_0jee_events255->SetEntries(976);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_top_hww2l2v_13TeV_DYin_0jee_events255->SetFillColor(ci);
   new_histo_group_top_hww2l2v_13TeV_DYin_0jee_events255->SetFillStyle(3001);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_top_hww2l2v_13TeV_DYin_0jee_events255->SetLineColor(ci);
   new_histo_group_top_hww2l2v_13TeV_DYin_0jee_events255->GetXaxis()->SetLabelFont(42);
   new_histo_group_top_hww2l2v_13TeV_DYin_0jee_events255->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_top_hww2l2v_13TeV_DYin_0jee_events255->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_top_hww2l2v_13TeV_DYin_0jee_events255->GetXaxis()->SetTitleFont(42);
   new_histo_group_top_hww2l2v_13TeV_DYin_0jee_events255->GetYaxis()->SetLabelFont(42);
   new_histo_group_top_hww2l2v_13TeV_DYin_0jee_events255->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_top_hww2l2v_13TeV_DYin_0jee_events255->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_top_hww2l2v_13TeV_DYin_0jee_events255->GetYaxis()->SetTitleFont(42);
   new_histo_group_top_hww2l2v_13TeV_DYin_0jee_events255->GetZaxis()->SetLabelFont(42);
   new_histo_group_top_hww2l2v_13TeV_DYin_0jee_events255->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_top_hww2l2v_13TeV_DYin_0jee_events255->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_top_hww2l2v_13TeV_DYin_0jee_events255->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_hww2l2v_13TeV_DYin_0jee_events->Add(new_histo_group_top_hww2l2v_13TeV_DYin_0jee_events,"");
   
   TH1D *new_histo_group_WW_hww2l2v_13TeV_DYin_0jee_events256 = new TH1D("new_histo_group_WW_hww2l2v_13TeV_DYin_0jee_events256","histo_WW",1,0,2);
   new_histo_group_WW_hww2l2v_13TeV_DYin_0jee_events256->SetBinContent(1,171.0553);
   new_histo_group_WW_hww2l2v_13TeV_DYin_0jee_events256->SetBinError(1,5.474747);
   new_histo_group_WW_hww2l2v_13TeV_DYin_0jee_events256->SetEntries(1317);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_hww2l2v_13TeV_DYin_0jee_events256->SetFillColor(ci);
   new_histo_group_WW_hww2l2v_13TeV_DYin_0jee_events256->SetFillStyle(3001);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_hww2l2v_13TeV_DYin_0jee_events256->SetLineColor(ci);
   new_histo_group_WW_hww2l2v_13TeV_DYin_0jee_events256->GetXaxis()->SetLabelFont(42);
   new_histo_group_WW_hww2l2v_13TeV_DYin_0jee_events256->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WW_hww2l2v_13TeV_DYin_0jee_events256->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WW_hww2l2v_13TeV_DYin_0jee_events256->GetXaxis()->SetTitleFont(42);
   new_histo_group_WW_hww2l2v_13TeV_DYin_0jee_events256->GetYaxis()->SetLabelFont(42);
   new_histo_group_WW_hww2l2v_13TeV_DYin_0jee_events256->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WW_hww2l2v_13TeV_DYin_0jee_events256->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WW_hww2l2v_13TeV_DYin_0jee_events256->GetYaxis()->SetTitleFont(42);
   new_histo_group_WW_hww2l2v_13TeV_DYin_0jee_events256->GetZaxis()->SetLabelFont(42);
   new_histo_group_WW_hww2l2v_13TeV_DYin_0jee_events256->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WW_hww2l2v_13TeV_DYin_0jee_events256->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WW_hww2l2v_13TeV_DYin_0jee_events256->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_hww2l2v_13TeV_DYin_0jee_events->Add(new_histo_group_WW_hww2l2v_13TeV_DYin_0jee_events,"");
   
   TH1D *new_histo_group_VVV_hww2l2v_13TeV_DYin_0jee_events257 = new TH1D("new_histo_group_VVV_hww2l2v_13TeV_DYin_0jee_events257","histo_VVV",1,0,2);
   new_histo_group_VVV_hww2l2v_13TeV_DYin_0jee_events257->SetBinContent(1,0.5944159);
   new_histo_group_VVV_hww2l2v_13TeV_DYin_0jee_events257->SetBinError(1,0.0963843);
   new_histo_group_VVV_hww2l2v_13TeV_DYin_0jee_events257->SetEntries(127);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_hww2l2v_13TeV_DYin_0jee_events257->SetFillColor(ci);
   new_histo_group_VVV_hww2l2v_13TeV_DYin_0jee_events257->SetFillStyle(3001);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_hww2l2v_13TeV_DYin_0jee_events257->SetLineColor(ci);
   new_histo_group_VVV_hww2l2v_13TeV_DYin_0jee_events257->GetXaxis()->SetLabelFont(42);
   new_histo_group_VVV_hww2l2v_13TeV_DYin_0jee_events257->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_hww2l2v_13TeV_DYin_0jee_events257->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_hww2l2v_13TeV_DYin_0jee_events257->GetXaxis()->SetTitleFont(42);
   new_histo_group_VVV_hww2l2v_13TeV_DYin_0jee_events257->GetYaxis()->SetLabelFont(42);
   new_histo_group_VVV_hww2l2v_13TeV_DYin_0jee_events257->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_hww2l2v_13TeV_DYin_0jee_events257->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_hww2l2v_13TeV_DYin_0jee_events257->GetYaxis()->SetTitleFont(42);
   new_histo_group_VVV_hww2l2v_13TeV_DYin_0jee_events257->GetZaxis()->SetLabelFont(42);
   new_histo_group_VVV_hww2l2v_13TeV_DYin_0jee_events257->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_hww2l2v_13TeV_DYin_0jee_events257->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_hww2l2v_13TeV_DYin_0jee_events257->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_hww2l2v_13TeV_DYin_0jee_events->Add(new_histo_group_VVV_hww2l2v_13TeV_DYin_0jee_events,"");
   
   TH1D *new_histo_group_VZ_hww2l2v_13TeV_DYin_0jee_events258 = new TH1D("new_histo_group_VZ_hww2l2v_13TeV_DYin_0jee_events258","histo_Vg",1,0,2);
   new_histo_group_VZ_hww2l2v_13TeV_DYin_0jee_events258->SetBinContent(1,434.1907);
   new_histo_group_VZ_hww2l2v_13TeV_DYin_0jee_events258->SetBinError(1,3.428662);
   new_histo_group_VZ_hww2l2v_13TeV_DYin_0jee_events258->SetEntries(144149);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_VZ_hww2l2v_13TeV_DYin_0jee_events258->SetFillColor(ci);
   new_histo_group_VZ_hww2l2v_13TeV_DYin_0jee_events258->SetFillStyle(3001);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_VZ_hww2l2v_13TeV_DYin_0jee_events258->SetLineColor(ci);
   new_histo_group_VZ_hww2l2v_13TeV_DYin_0jee_events258->GetXaxis()->SetLabelFont(42);
   new_histo_group_VZ_hww2l2v_13TeV_DYin_0jee_events258->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_VZ_hww2l2v_13TeV_DYin_0jee_events258->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_VZ_hww2l2v_13TeV_DYin_0jee_events258->GetXaxis()->SetTitleFont(42);
   new_histo_group_VZ_hww2l2v_13TeV_DYin_0jee_events258->GetYaxis()->SetLabelFont(42);
   new_histo_group_VZ_hww2l2v_13TeV_DYin_0jee_events258->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_VZ_hww2l2v_13TeV_DYin_0jee_events258->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_VZ_hww2l2v_13TeV_DYin_0jee_events258->GetYaxis()->SetTitleFont(42);
   new_histo_group_VZ_hww2l2v_13TeV_DYin_0jee_events258->GetZaxis()->SetLabelFont(42);
   new_histo_group_VZ_hww2l2v_13TeV_DYin_0jee_events258->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_VZ_hww2l2v_13TeV_DYin_0jee_events258->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_VZ_hww2l2v_13TeV_DYin_0jee_events258->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_hww2l2v_13TeV_DYin_0jee_events->Add(new_histo_group_VZ_hww2l2v_13TeV_DYin_0jee_events,"");
   
   TH1D *new_histo_group_Higgs_hww2l2v_13TeV_DYin_0jee_events259 = new TH1D("new_histo_group_Higgs_hww2l2v_13TeV_DYin_0jee_events259","histo_H_htt",1,0,2);
   new_histo_group_Higgs_hww2l2v_13TeV_DYin_0jee_events259->SetBinContent(1,0.6006331);
   new_histo_group_Higgs_hww2l2v_13TeV_DYin_0jee_events259->SetBinError(1,0.1034981);
   new_histo_group_Higgs_hww2l2v_13TeV_DYin_0jee_events259->SetEntries(57);
   new_histo_group_Higgs_hww2l2v_13TeV_DYin_0jee_events259->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_hww2l2v_13TeV_DYin_0jee_events259->SetLineColor(ci);
   new_histo_group_Higgs_hww2l2v_13TeV_DYin_0jee_events259->SetLineWidth(2);
   new_histo_group_Higgs_hww2l2v_13TeV_DYin_0jee_events259->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_hww2l2v_13TeV_DYin_0jee_events259->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_hww2l2v_13TeV_DYin_0jee_events259->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_hww2l2v_13TeV_DYin_0jee_events259->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_hww2l2v_13TeV_DYin_0jee_events259->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_hww2l2v_13TeV_DYin_0jee_events259->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_hww2l2v_13TeV_DYin_0jee_events259->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_hww2l2v_13TeV_DYin_0jee_events259->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_hww2l2v_13TeV_DYin_0jee_events259->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_hww2l2v_13TeV_DYin_0jee_events259->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_hww2l2v_13TeV_DYin_0jee_events259->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_hww2l2v_13TeV_DYin_0jee_events259->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_hww2l2v_13TeV_DYin_0jee_events->Add(new_histo_group_Higgs_hww2l2v_13TeV_DYin_0jee_events,"");
   thsBackground_grouped_hww2l2v_13TeV_DYin_0jee_events->Draw("hist same");
   
   thsSignal_grouped_hww2l2v_13TeV_DYin_0jee_events = new THStack();
   thsSignal_grouped_hww2l2v_13TeV_DYin_0jee_events->SetName("thsSignal_grouped_hww2l2v_13TeV_DYin_0jee_events");
   thsSignal_grouped_hww2l2v_13TeV_DYin_0jee_events->SetTitle("thsSignal_grouped_hww2l2v_13TeV_DYin_0jee_events");
   
   TH1F *thsSignal_grouped_hww2l2v_13TeV_DYin_0jee_events_stack_58 = new TH1F("thsSignal_grouped_hww2l2v_13TeV_DYin_0jee_events_stack_58","thsSignal_grouped_hww2l2v_13TeV_DYin_0jee_events",1,0,2);
   thsSignal_grouped_hww2l2v_13TeV_DYin_0jee_events_stack_58->SetMinimum(0);
   thsSignal_grouped_hww2l2v_13TeV_DYin_0jee_events_stack_58->SetMaximum(0.7393377);
   thsSignal_grouped_hww2l2v_13TeV_DYin_0jee_events_stack_58->SetDirectory(0);
   thsSignal_grouped_hww2l2v_13TeV_DYin_0jee_events_stack_58->SetStats(0);
   thsSignal_grouped_hww2l2v_13TeV_DYin_0jee_events_stack_58->SetLineStyle(0);
   thsSignal_grouped_hww2l2v_13TeV_DYin_0jee_events_stack_58->SetMarkerStyle(20);
   thsSignal_grouped_hww2l2v_13TeV_DYin_0jee_events_stack_58->GetXaxis()->SetLabelFont(42);
   thsSignal_grouped_hww2l2v_13TeV_DYin_0jee_events_stack_58->GetXaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_hww2l2v_13TeV_DYin_0jee_events_stack_58->GetXaxis()->SetLabelSize(0.05);
   thsSignal_grouped_hww2l2v_13TeV_DYin_0jee_events_stack_58->GetXaxis()->SetTitleSize(0.06);
   thsSignal_grouped_hww2l2v_13TeV_DYin_0jee_events_stack_58->GetXaxis()->SetTitleOffset(0.9);
   thsSignal_grouped_hww2l2v_13TeV_DYin_0jee_events_stack_58->GetXaxis()->SetTitleFont(42);
   thsSignal_grouped_hww2l2v_13TeV_DYin_0jee_events_stack_58->GetYaxis()->SetLabelFont(42);
   thsSignal_grouped_hww2l2v_13TeV_DYin_0jee_events_stack_58->GetYaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_hww2l2v_13TeV_DYin_0jee_events_stack_58->GetYaxis()->SetLabelSize(0.05);
   thsSignal_grouped_hww2l2v_13TeV_DYin_0jee_events_stack_58->GetYaxis()->SetTitleSize(0.06);
   thsSignal_grouped_hww2l2v_13TeV_DYin_0jee_events_stack_58->GetYaxis()->SetTitleOffset(1.25);
   thsSignal_grouped_hww2l2v_13TeV_DYin_0jee_events_stack_58->GetYaxis()->SetTitleFont(42);
   thsSignal_grouped_hww2l2v_13TeV_DYin_0jee_events_stack_58->GetZaxis()->SetLabelFont(42);
   thsSignal_grouped_hww2l2v_13TeV_DYin_0jee_events_stack_58->GetZaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_hww2l2v_13TeV_DYin_0jee_events_stack_58->GetZaxis()->SetLabelSize(0.05);
   thsSignal_grouped_hww2l2v_13TeV_DYin_0jee_events_stack_58->GetZaxis()->SetTitleSize(0.06);
   thsSignal_grouped_hww2l2v_13TeV_DYin_0jee_events_stack_58->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_hww2l2v_13TeV_DYin_0jee_events->SetHistogram(thsSignal_grouped_hww2l2v_13TeV_DYin_0jee_events_stack_58);
   
   
   TH1D *new_histo_group_Higgs_hww2l2v_13TeV_DYin_0jee_events260 = new TH1D("new_histo_group_Higgs_hww2l2v_13TeV_DYin_0jee_events260","histo_H_htt",1,0,2);
   new_histo_group_Higgs_hww2l2v_13TeV_DYin_0jee_events260->SetBinContent(1,0.6006331);
   new_histo_group_Higgs_hww2l2v_13TeV_DYin_0jee_events260->SetBinError(1,0.1034981);
   new_histo_group_Higgs_hww2l2v_13TeV_DYin_0jee_events260->SetEntries(57);
   new_histo_group_Higgs_hww2l2v_13TeV_DYin_0jee_events260->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_hww2l2v_13TeV_DYin_0jee_events260->SetLineColor(ci);
   new_histo_group_Higgs_hww2l2v_13TeV_DYin_0jee_events260->SetLineWidth(2);
   new_histo_group_Higgs_hww2l2v_13TeV_DYin_0jee_events260->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_hww2l2v_13TeV_DYin_0jee_events260->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_hww2l2v_13TeV_DYin_0jee_events260->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_hww2l2v_13TeV_DYin_0jee_events260->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_hww2l2v_13TeV_DYin_0jee_events260->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_hww2l2v_13TeV_DYin_0jee_events260->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_hww2l2v_13TeV_DYin_0jee_events260->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_hww2l2v_13TeV_DYin_0jee_events260->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_hww2l2v_13TeV_DYin_0jee_events260->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_hww2l2v_13TeV_DYin_0jee_events260->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_hww2l2v_13TeV_DYin_0jee_events260->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_hww2l2v_13TeV_DYin_0jee_events260->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_hww2l2v_13TeV_DYin_0jee_events->Add(new_histo_group_Higgs_hww2l2v_13TeV_DYin_0jee_events,"");
   thsSignal_grouped_hww2l2v_13TeV_DYin_0jee_events->Draw("hist same noclear");
   
   Double_t _fx3037[1] = {
   1};
   Double_t _fy3037[1] = {
   10488};
   Double_t _felx3037[1] = {
   1};
   Double_t _fely3037[1] = {
   102.4115};
   Double_t _fehx3037[1] = {
   1};
   Double_t _fehy3037[1] = {
   103.4164};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(1,_fx3037,_fy3037,_felx3037,_fehx3037,_fely3037,_fehy3037);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(1);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3037 = new TH1F("Graph_Graph3037","",100,0,2.2);
   Graph_Graph3037->SetMinimum(10365.01);
   Graph_Graph3037->SetMaximum(10612);
   Graph_Graph3037->SetDirectory(0);
   Graph_Graph3037->SetStats(0);
   Graph_Graph3037->SetLineStyle(0);
   Graph_Graph3037->SetMarkerStyle(20);
   Graph_Graph3037->GetXaxis()->SetLabelFont(42);
   Graph_Graph3037->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3037->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3037->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3037->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3037->GetXaxis()->SetTitleFont(42);
   Graph_Graph3037->GetYaxis()->SetLabelFont(42);
   Graph_Graph3037->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3037->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3037->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3037->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3037->GetYaxis()->SetTitleFont(42);
   Graph_Graph3037->GetZaxis()->SetLabelFont(42);
   Graph_Graph3037->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3037->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3037->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3037->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3037);
   
   grae->Draw("p0");
   
   TLegend *leg = new TLegend(0.2,0.7,0.8,0.9,NULL,"brNDC");
   leg->SetTextFont(62);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("new_histo_group_DY_hww2l2v_13TeV_DYin_0jee_events","DY","F");

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
   entry=leg->AddEntry("new_histo_group_top_hww2l2v_13TeV_DYin_0jee_events","tW and t#bart","F");

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
   entry=leg->AddEntry("new_histo_group_WW_hww2l2v_13TeV_DYin_0jee_events","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_hww2l2v_13TeV_DYin_0jee_events","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_VZ_hww2l2v_13TeV_DYin_0jee_events","VZ/#gamma*/#gamma","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_hww2l2v_13TeV_DYin_0jee_events","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_hww2l2v_13TeV_DYin_0jee_events","Data","EPL");
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
   entry=leg->AddEntry("new_histo_group_DY_hww2l2v_13TeV_DYin_0jee_events","DY","F");

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
   entry=leg->AddEntry("new_histo_group_top_hww2l2v_13TeV_DYin_0jee_events","tW and t#bart","F");

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
   entry=leg->AddEntry("new_histo_group_WW_hww2l2v_13TeV_DYin_0jee_events","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_hww2l2v_13TeV_DYin_0jee_events","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_VZ_hww2l2v_13TeV_DYin_0jee_events","VZ/#gamma*/#gamma","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_hww2l2v_13TeV_DYin_0jee_events","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_hww2l2v_13TeV_DYin_0jee_events","Data","EPL");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   leg->Draw();
   
   TH1F *hframe_copy261 = new TH1F("hframe_copy261","",1000,0,2);
   hframe_copy261->SetMinimum(0);
   hframe_copy261->SetMaximum(26476.03);
   hframe_copy261->SetDirectory(0);
   hframe_copy261->SetStats(0);
   hframe_copy261->SetLineStyle(0);
   hframe_copy261->SetMarkerStyle(20);
   hframe_copy261->GetXaxis()->SetTitle("events");
   hframe_copy261->GetXaxis()->SetNdivisions(506);
   hframe_copy261->GetXaxis()->SetLabelFont(42);
   hframe_copy261->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy261->GetXaxis()->SetLabelSize(0.05);
   hframe_copy261->GetXaxis()->SetTitleSize(0.06);
   hframe_copy261->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy261->GetXaxis()->SetTitleFont(42);
   hframe_copy261->GetYaxis()->SetTitle("Events");
   hframe_copy261->GetYaxis()->SetLabelFont(42);
   hframe_copy261->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy261->GetYaxis()->SetLabelSize(0.05);
   hframe_copy261->GetYaxis()->SetTitleSize(0.06);
   hframe_copy261->GetYaxis()->SetTitleOffset(1.25);
   hframe_copy261->GetYaxis()->SetTitleFont(42);
   hframe_copy261->GetZaxis()->SetLabelFont(42);
   hframe_copy261->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy261->GetZaxis()->SetLabelSize(0.05);
   hframe_copy261->GetZaxis()->SetTitleSize(0.06);
   hframe_copy261->GetZaxis()->SetTitleFont(42);
   hframe_copy261->Draw("sameaxis");
   cchww2l2v_13TeV_DYin_0jee_events->Modified();
   cchww2l2v_13TeV_DYin_0jee_events->cd();
   cchww2l2v_13TeV_DYin_0jee_events->SetSelected(cchww2l2v_13TeV_DYin_0jee_events);
}
