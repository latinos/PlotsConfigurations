void c_hww2l2v_13TeV_WW_1jee_WWAccNum_events()
{
//=========Macro generated from canvas: cchww2l2v_13TeV_WW_1jee_WWAccNum_events/cc
//=========  (Tue Mar 21 11:46:16 2017) by ROOT version6.02/13
   TCanvas *cchww2l2v_13TeV_WW_1jee_WWAccNum_events = new TCanvas("cchww2l2v_13TeV_WW_1jee_WWAccNum_events", "cc",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   cchww2l2v_13TeV_WW_1jee_WWAccNum_events->SetHighLightColor(2);
   cchww2l2v_13TeV_WW_1jee_WWAccNum_events->Range(-0.4,-1148.332,2.1,7684.989);
   cchww2l2v_13TeV_WW_1jee_WWAccNum_events->SetFillColor(0);
   cchww2l2v_13TeV_WW_1jee_WWAccNum_events->SetBorderMode(0);
   cchww2l2v_13TeV_WW_1jee_WWAccNum_events->SetBorderSize(2);
   cchww2l2v_13TeV_WW_1jee_WWAccNum_events->SetTickx(1);
   cchww2l2v_13TeV_WW_1jee_WWAccNum_events->SetTicky(1);
   cchww2l2v_13TeV_WW_1jee_WWAccNum_events->SetLeftMargin(0.16);
   cchww2l2v_13TeV_WW_1jee_WWAccNum_events->SetRightMargin(0.04);
   cchww2l2v_13TeV_WW_1jee_WWAccNum_events->SetTopMargin(0.05);
   cchww2l2v_13TeV_WW_1jee_WWAccNum_events->SetBottomMargin(0.13);
   cchww2l2v_13TeV_WW_1jee_WWAccNum_events->SetFrameFillStyle(0);
   cchww2l2v_13TeV_WW_1jee_WWAccNum_events->SetFrameBorderMode(0);
   cchww2l2v_13TeV_WW_1jee_WWAccNum_events->SetFrameFillStyle(0);
   cchww2l2v_13TeV_WW_1jee_WWAccNum_events->SetFrameBorderMode(0);
   
   TH1F *hframe46 = new TH1F("hframe46","",1000,0,2);
   hframe46->SetMinimum(0);
   hframe46->SetMaximum(7243.323);
   hframe46->SetDirectory(0);
   hframe46->SetStats(0);
   hframe46->SetLineStyle(0);
   hframe46->SetMarkerStyle(20);
   hframe46->GetXaxis()->SetTitle("events");
   hframe46->GetXaxis()->SetNdivisions(506);
   hframe46->GetXaxis()->SetLabelFont(42);
   hframe46->GetXaxis()->SetLabelOffset(0.007);
   hframe46->GetXaxis()->SetLabelSize(0.05);
   hframe46->GetXaxis()->SetTitleSize(0.06);
   hframe46->GetXaxis()->SetTitleOffset(0.9);
   hframe46->GetXaxis()->SetTitleFont(42);
   hframe46->GetYaxis()->SetTitle("Events");
   hframe46->GetYaxis()->SetLabelFont(42);
   hframe46->GetYaxis()->SetLabelOffset(0.007);
   hframe46->GetYaxis()->SetLabelSize(0.05);
   hframe46->GetYaxis()->SetTitleSize(0.06);
   hframe46->GetYaxis()->SetTitleOffset(1.25);
   hframe46->GetYaxis()->SetTitleFont(42);
   hframe46->GetZaxis()->SetLabelFont(42);
   hframe46->GetZaxis()->SetLabelOffset(0.007);
   hframe46->GetZaxis()->SetLabelSize(0.05);
   hframe46->GetZaxis()->SetTitleSize(0.06);
   hframe46->GetZaxis()->SetTitleFont(42);
   hframe46->Draw(" ");
   
   THStack *thsBackground_grouped_hww2l2v_13TeV_WW_1jee_WWAccNum_events = new THStack();
   thsBackground_grouped_hww2l2v_13TeV_WW_1jee_WWAccNum_events->SetName("thsBackground_grouped_hww2l2v_13TeV_WW_1jee_WWAccNum_events");
   thsBackground_grouped_hww2l2v_13TeV_WW_1jee_WWAccNum_events->SetTitle("thsBackground_grouped_hww2l2v_13TeV_WW_1jee_WWAccNum_events");
   
   TH1F *thsBackground_grouped_hww2l2v_13TeV_WW_1jee_WWAccNum_events_stack_11 = new TH1F("thsBackground_grouped_hww2l2v_13TeV_WW_1jee_WWAccNum_events_stack_11","thsBackground_grouped_hww2l2v_13TeV_WW_1jee_WWAccNum_events",1,0,2);
   thsBackground_grouped_hww2l2v_13TeV_WW_1jee_WWAccNum_events_stack_11->SetMinimum(0);
   thsBackground_grouped_hww2l2v_13TeV_WW_1jee_WWAccNum_events_stack_11->SetMaximum(1617.791);
   thsBackground_grouped_hww2l2v_13TeV_WW_1jee_WWAccNum_events_stack_11->SetDirectory(0);
   thsBackground_grouped_hww2l2v_13TeV_WW_1jee_WWAccNum_events_stack_11->SetStats(0);
   thsBackground_grouped_hww2l2v_13TeV_WW_1jee_WWAccNum_events_stack_11->SetLineStyle(0);
   thsBackground_grouped_hww2l2v_13TeV_WW_1jee_WWAccNum_events_stack_11->SetMarkerStyle(20);
   thsBackground_grouped_hww2l2v_13TeV_WW_1jee_WWAccNum_events_stack_11->GetXaxis()->SetLabelFont(42);
   thsBackground_grouped_hww2l2v_13TeV_WW_1jee_WWAccNum_events_stack_11->GetXaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_hww2l2v_13TeV_WW_1jee_WWAccNum_events_stack_11->GetXaxis()->SetLabelSize(0.05);
   thsBackground_grouped_hww2l2v_13TeV_WW_1jee_WWAccNum_events_stack_11->GetXaxis()->SetTitleSize(0.06);
   thsBackground_grouped_hww2l2v_13TeV_WW_1jee_WWAccNum_events_stack_11->GetXaxis()->SetTitleOffset(0.9);
   thsBackground_grouped_hww2l2v_13TeV_WW_1jee_WWAccNum_events_stack_11->GetXaxis()->SetTitleFont(42);
   thsBackground_grouped_hww2l2v_13TeV_WW_1jee_WWAccNum_events_stack_11->GetYaxis()->SetLabelFont(42);
   thsBackground_grouped_hww2l2v_13TeV_WW_1jee_WWAccNum_events_stack_11->GetYaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_hww2l2v_13TeV_WW_1jee_WWAccNum_events_stack_11->GetYaxis()->SetLabelSize(0.05);
   thsBackground_grouped_hww2l2v_13TeV_WW_1jee_WWAccNum_events_stack_11->GetYaxis()->SetTitleSize(0.06);
   thsBackground_grouped_hww2l2v_13TeV_WW_1jee_WWAccNum_events_stack_11->GetYaxis()->SetTitleOffset(1.25);
   thsBackground_grouped_hww2l2v_13TeV_WW_1jee_WWAccNum_events_stack_11->GetYaxis()->SetTitleFont(42);
   thsBackground_grouped_hww2l2v_13TeV_WW_1jee_WWAccNum_events_stack_11->GetZaxis()->SetLabelFont(42);
   thsBackground_grouped_hww2l2v_13TeV_WW_1jee_WWAccNum_events_stack_11->GetZaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_hww2l2v_13TeV_WW_1jee_WWAccNum_events_stack_11->GetZaxis()->SetLabelSize(0.05);
   thsBackground_grouped_hww2l2v_13TeV_WW_1jee_WWAccNum_events_stack_11->GetZaxis()->SetTitleSize(0.06);
   thsBackground_grouped_hww2l2v_13TeV_WW_1jee_WWAccNum_events_stack_11->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_hww2l2v_13TeV_WW_1jee_WWAccNum_events->SetHistogram(thsBackground_grouped_hww2l2v_13TeV_WW_1jee_WWAccNum_events_stack_11);
   
   
   TH1D *new_histo_group_DY_hww2l2v_13TeV_WW_1jee_WWAccNum_events47 = new TH1D("new_histo_group_DY_hww2l2v_13TeV_WW_1jee_WWAccNum_events47","histo_DY",1,0,2);
   new_histo_group_DY_hww2l2v_13TeV_WW_1jee_WWAccNum_events47->SetBinContent(1,439.8005);
   new_histo_group_DY_hww2l2v_13TeV_WW_1jee_WWAccNum_events47->SetBinError(1,56.81475);
   new_histo_group_DY_hww2l2v_13TeV_WW_1jee_WWAccNum_events47->SetEntries(644);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#009900");
   new_histo_group_DY_hww2l2v_13TeV_WW_1jee_WWAccNum_events47->SetFillColor(ci);
   new_histo_group_DY_hww2l2v_13TeV_WW_1jee_WWAccNum_events47->SetFillStyle(3001);

   ci = TColor::GetColor("#009900");
   new_histo_group_DY_hww2l2v_13TeV_WW_1jee_WWAccNum_events47->SetLineColor(ci);
   new_histo_group_DY_hww2l2v_13TeV_WW_1jee_WWAccNum_events47->GetXaxis()->SetLabelFont(42);
   new_histo_group_DY_hww2l2v_13TeV_WW_1jee_WWAccNum_events47->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_DY_hww2l2v_13TeV_WW_1jee_WWAccNum_events47->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_DY_hww2l2v_13TeV_WW_1jee_WWAccNum_events47->GetXaxis()->SetTitleFont(42);
   new_histo_group_DY_hww2l2v_13TeV_WW_1jee_WWAccNum_events47->GetYaxis()->SetLabelFont(42);
   new_histo_group_DY_hww2l2v_13TeV_WW_1jee_WWAccNum_events47->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_DY_hww2l2v_13TeV_WW_1jee_WWAccNum_events47->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_DY_hww2l2v_13TeV_WW_1jee_WWAccNum_events47->GetYaxis()->SetTitleFont(42);
   new_histo_group_DY_hww2l2v_13TeV_WW_1jee_WWAccNum_events47->GetZaxis()->SetLabelFont(42);
   new_histo_group_DY_hww2l2v_13TeV_WW_1jee_WWAccNum_events47->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_DY_hww2l2v_13TeV_WW_1jee_WWAccNum_events47->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_DY_hww2l2v_13TeV_WW_1jee_WWAccNum_events47->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_hww2l2v_13TeV_WW_1jee_WWAccNum_events->Add(new_histo_group_DY_hww2l2v_13TeV_WW_1jee_WWAccNum_events,"");
   
   TH1D *new_histo_group_top_hww2l2v_13TeV_WW_1jee_WWAccNum_events48 = new TH1D("new_histo_group_top_hww2l2v_13TeV_WW_1jee_WWAccNum_events48","histo_top",1,0,2);
   new_histo_group_top_hww2l2v_13TeV_WW_1jee_WWAccNum_events48->SetBinContent(1,485.7337);
   new_histo_group_top_hww2l2v_13TeV_WW_1jee_WWAccNum_events48->SetBinError(1,4.439201);
   new_histo_group_top_hww2l2v_13TeV_WW_1jee_WWAccNum_events48->SetEntries(13192);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_top_hww2l2v_13TeV_WW_1jee_WWAccNum_events48->SetFillColor(ci);
   new_histo_group_top_hww2l2v_13TeV_WW_1jee_WWAccNum_events48->SetFillStyle(3001);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_top_hww2l2v_13TeV_WW_1jee_WWAccNum_events48->SetLineColor(ci);
   new_histo_group_top_hww2l2v_13TeV_WW_1jee_WWAccNum_events48->GetXaxis()->SetLabelFont(42);
   new_histo_group_top_hww2l2v_13TeV_WW_1jee_WWAccNum_events48->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_top_hww2l2v_13TeV_WW_1jee_WWAccNum_events48->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_top_hww2l2v_13TeV_WW_1jee_WWAccNum_events48->GetXaxis()->SetTitleFont(42);
   new_histo_group_top_hww2l2v_13TeV_WW_1jee_WWAccNum_events48->GetYaxis()->SetLabelFont(42);
   new_histo_group_top_hww2l2v_13TeV_WW_1jee_WWAccNum_events48->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_top_hww2l2v_13TeV_WW_1jee_WWAccNum_events48->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_top_hww2l2v_13TeV_WW_1jee_WWAccNum_events48->GetYaxis()->SetTitleFont(42);
   new_histo_group_top_hww2l2v_13TeV_WW_1jee_WWAccNum_events48->GetZaxis()->SetLabelFont(42);
   new_histo_group_top_hww2l2v_13TeV_WW_1jee_WWAccNum_events48->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_top_hww2l2v_13TeV_WW_1jee_WWAccNum_events48->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_top_hww2l2v_13TeV_WW_1jee_WWAccNum_events48->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_hww2l2v_13TeV_WW_1jee_WWAccNum_events->Add(new_histo_group_top_hww2l2v_13TeV_WW_1jee_WWAccNum_events,"");
   
   TH1D *new_histo_group_WW_hww2l2v_13TeV_WW_1jee_WWAccNum_events49 = new TH1D("new_histo_group_WW_hww2l2v_13TeV_WW_1jee_WWAccNum_events49","histo_WW",1,0,2);
   new_histo_group_WW_hww2l2v_13TeV_WW_1jee_WWAccNum_events49->SetBinContent(1,374.3684);
   new_histo_group_WW_hww2l2v_13TeV_WW_1jee_WWAccNum_events49->SetBinError(1,8.357834);
   new_histo_group_WW_hww2l2v_13TeV_WW_1jee_WWAccNum_events49->SetEntries(2743);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_hww2l2v_13TeV_WW_1jee_WWAccNum_events49->SetFillColor(ci);
   new_histo_group_WW_hww2l2v_13TeV_WW_1jee_WWAccNum_events49->SetFillStyle(3001);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_hww2l2v_13TeV_WW_1jee_WWAccNum_events49->SetLineColor(ci);
   new_histo_group_WW_hww2l2v_13TeV_WW_1jee_WWAccNum_events49->GetXaxis()->SetLabelFont(42);
   new_histo_group_WW_hww2l2v_13TeV_WW_1jee_WWAccNum_events49->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WW_hww2l2v_13TeV_WW_1jee_WWAccNum_events49->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WW_hww2l2v_13TeV_WW_1jee_WWAccNum_events49->GetXaxis()->SetTitleFont(42);
   new_histo_group_WW_hww2l2v_13TeV_WW_1jee_WWAccNum_events49->GetYaxis()->SetLabelFont(42);
   new_histo_group_WW_hww2l2v_13TeV_WW_1jee_WWAccNum_events49->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WW_hww2l2v_13TeV_WW_1jee_WWAccNum_events49->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WW_hww2l2v_13TeV_WW_1jee_WWAccNum_events49->GetYaxis()->SetTitleFont(42);
   new_histo_group_WW_hww2l2v_13TeV_WW_1jee_WWAccNum_events49->GetZaxis()->SetLabelFont(42);
   new_histo_group_WW_hww2l2v_13TeV_WW_1jee_WWAccNum_events49->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WW_hww2l2v_13TeV_WW_1jee_WWAccNum_events49->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WW_hww2l2v_13TeV_WW_1jee_WWAccNum_events49->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_hww2l2v_13TeV_WW_1jee_WWAccNum_events->Add(new_histo_group_WW_hww2l2v_13TeV_WW_1jee_WWAccNum_events,"");
   
   TH1D *new_histo_group_VVV_hww2l2v_13TeV_WW_1jee_WWAccNum_events50 = new TH1D("new_histo_group_VVV_hww2l2v_13TeV_WW_1jee_WWAccNum_events50","histo_VVV",1,0,2);
   new_histo_group_VVV_hww2l2v_13TeV_WW_1jee_WWAccNum_events50->SetBinContent(1,2.281329);
   new_histo_group_VVV_hww2l2v_13TeV_WW_1jee_WWAccNum_events50->SetBinError(1,0.2647964);
   new_histo_group_VVV_hww2l2v_13TeV_WW_1jee_WWAccNum_events50->SetEntries(115);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_hww2l2v_13TeV_WW_1jee_WWAccNum_events50->SetFillColor(ci);
   new_histo_group_VVV_hww2l2v_13TeV_WW_1jee_WWAccNum_events50->SetFillStyle(3001);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_hww2l2v_13TeV_WW_1jee_WWAccNum_events50->SetLineColor(ci);
   new_histo_group_VVV_hww2l2v_13TeV_WW_1jee_WWAccNum_events50->GetXaxis()->SetLabelFont(42);
   new_histo_group_VVV_hww2l2v_13TeV_WW_1jee_WWAccNum_events50->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_hww2l2v_13TeV_WW_1jee_WWAccNum_events50->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_hww2l2v_13TeV_WW_1jee_WWAccNum_events50->GetXaxis()->SetTitleFont(42);
   new_histo_group_VVV_hww2l2v_13TeV_WW_1jee_WWAccNum_events50->GetYaxis()->SetLabelFont(42);
   new_histo_group_VVV_hww2l2v_13TeV_WW_1jee_WWAccNum_events50->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_hww2l2v_13TeV_WW_1jee_WWAccNum_events50->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_hww2l2v_13TeV_WW_1jee_WWAccNum_events50->GetYaxis()->SetTitleFont(42);
   new_histo_group_VVV_hww2l2v_13TeV_WW_1jee_WWAccNum_events50->GetZaxis()->SetLabelFont(42);
   new_histo_group_VVV_hww2l2v_13TeV_WW_1jee_WWAccNum_events50->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_hww2l2v_13TeV_WW_1jee_WWAccNum_events50->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_hww2l2v_13TeV_WW_1jee_WWAccNum_events50->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_hww2l2v_13TeV_WW_1jee_WWAccNum_events->Add(new_histo_group_VVV_hww2l2v_13TeV_WW_1jee_WWAccNum_events,"");
   
   TH1D *new_histo_group_VZ_hww2l2v_13TeV_WW_1jee_WWAccNum_events51 = new TH1D("new_histo_group_VZ_hww2l2v_13TeV_WW_1jee_WWAccNum_events51","histo_Vg",1,0,2);
   new_histo_group_VZ_hww2l2v_13TeV_WW_1jee_WWAccNum_events51->SetBinContent(1,237.7556);
   new_histo_group_VZ_hww2l2v_13TeV_WW_1jee_WWAccNum_events51->SetBinError(1,79.9793);
   new_histo_group_VZ_hww2l2v_13TeV_WW_1jee_WWAccNum_events51->SetEntries(4650);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_VZ_hww2l2v_13TeV_WW_1jee_WWAccNum_events51->SetFillColor(ci);
   new_histo_group_VZ_hww2l2v_13TeV_WW_1jee_WWAccNum_events51->SetFillStyle(3001);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_VZ_hww2l2v_13TeV_WW_1jee_WWAccNum_events51->SetLineColor(ci);
   new_histo_group_VZ_hww2l2v_13TeV_WW_1jee_WWAccNum_events51->GetXaxis()->SetLabelFont(42);
   new_histo_group_VZ_hww2l2v_13TeV_WW_1jee_WWAccNum_events51->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_VZ_hww2l2v_13TeV_WW_1jee_WWAccNum_events51->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_VZ_hww2l2v_13TeV_WW_1jee_WWAccNum_events51->GetXaxis()->SetTitleFont(42);
   new_histo_group_VZ_hww2l2v_13TeV_WW_1jee_WWAccNum_events51->GetYaxis()->SetLabelFont(42);
   new_histo_group_VZ_hww2l2v_13TeV_WW_1jee_WWAccNum_events51->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_VZ_hww2l2v_13TeV_WW_1jee_WWAccNum_events51->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_VZ_hww2l2v_13TeV_WW_1jee_WWAccNum_events51->GetYaxis()->SetTitleFont(42);
   new_histo_group_VZ_hww2l2v_13TeV_WW_1jee_WWAccNum_events51->GetZaxis()->SetLabelFont(42);
   new_histo_group_VZ_hww2l2v_13TeV_WW_1jee_WWAccNum_events51->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_VZ_hww2l2v_13TeV_WW_1jee_WWAccNum_events51->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_VZ_hww2l2v_13TeV_WW_1jee_WWAccNum_events51->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_hww2l2v_13TeV_WW_1jee_WWAccNum_events->Add(new_histo_group_VZ_hww2l2v_13TeV_WW_1jee_WWAccNum_events,"");
   
   TH1D *new_histo_group_Higgs_hww2l2v_13TeV_WW_1jee_WWAccNum_events52 = new TH1D("new_histo_group_Higgs_hww2l2v_13TeV_WW_1jee_WWAccNum_events52","histo_H_htt",1,0,2);
   new_histo_group_Higgs_hww2l2v_13TeV_WW_1jee_WWAccNum_events52->SetBinContent(1,0.8140686);
   new_histo_group_Higgs_hww2l2v_13TeV_WW_1jee_WWAccNum_events52->SetBinError(1,0.1251461);
   new_histo_group_Higgs_hww2l2v_13TeV_WW_1jee_WWAccNum_events52->SetEntries(66);
   new_histo_group_Higgs_hww2l2v_13TeV_WW_1jee_WWAccNum_events52->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_hww2l2v_13TeV_WW_1jee_WWAccNum_events52->SetLineColor(ci);
   new_histo_group_Higgs_hww2l2v_13TeV_WW_1jee_WWAccNum_events52->SetLineWidth(2);
   new_histo_group_Higgs_hww2l2v_13TeV_WW_1jee_WWAccNum_events52->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_hww2l2v_13TeV_WW_1jee_WWAccNum_events52->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_hww2l2v_13TeV_WW_1jee_WWAccNum_events52->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_hww2l2v_13TeV_WW_1jee_WWAccNum_events52->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_hww2l2v_13TeV_WW_1jee_WWAccNum_events52->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_hww2l2v_13TeV_WW_1jee_WWAccNum_events52->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_hww2l2v_13TeV_WW_1jee_WWAccNum_events52->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_hww2l2v_13TeV_WW_1jee_WWAccNum_events52->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_hww2l2v_13TeV_WW_1jee_WWAccNum_events52->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_hww2l2v_13TeV_WW_1jee_WWAccNum_events52->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_hww2l2v_13TeV_WW_1jee_WWAccNum_events52->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_hww2l2v_13TeV_WW_1jee_WWAccNum_events52->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_hww2l2v_13TeV_WW_1jee_WWAccNum_events->Add(new_histo_group_Higgs_hww2l2v_13TeV_WW_1jee_WWAccNum_events,"");
   thsBackground_grouped_hww2l2v_13TeV_WW_1jee_WWAccNum_events->Draw("hist same");
   
   thsSignal_grouped_hww2l2v_13TeV_WW_1jee_WWAccNum_events = new THStack();
   thsSignal_grouped_hww2l2v_13TeV_WW_1jee_WWAccNum_events->SetName("thsSignal_grouped_hww2l2v_13TeV_WW_1jee_WWAccNum_events");
   thsSignal_grouped_hww2l2v_13TeV_WW_1jee_WWAccNum_events->SetTitle("thsSignal_grouped_hww2l2v_13TeV_WW_1jee_WWAccNum_events");
   
   TH1F *thsSignal_grouped_hww2l2v_13TeV_WW_1jee_WWAccNum_events_stack_12 = new TH1F("thsSignal_grouped_hww2l2v_13TeV_WW_1jee_WWAccNum_events_stack_12","thsSignal_grouped_hww2l2v_13TeV_WW_1jee_WWAccNum_events",1,0,2);
   thsSignal_grouped_hww2l2v_13TeV_WW_1jee_WWAccNum_events_stack_12->SetMinimum(0);
   thsSignal_grouped_hww2l2v_13TeV_WW_1jee_WWAccNum_events_stack_12->SetMaximum(0.9861755);
   thsSignal_grouped_hww2l2v_13TeV_WW_1jee_WWAccNum_events_stack_12->SetDirectory(0);
   thsSignal_grouped_hww2l2v_13TeV_WW_1jee_WWAccNum_events_stack_12->SetStats(0);
   thsSignal_grouped_hww2l2v_13TeV_WW_1jee_WWAccNum_events_stack_12->SetLineStyle(0);
   thsSignal_grouped_hww2l2v_13TeV_WW_1jee_WWAccNum_events_stack_12->SetMarkerStyle(20);
   thsSignal_grouped_hww2l2v_13TeV_WW_1jee_WWAccNum_events_stack_12->GetXaxis()->SetLabelFont(42);
   thsSignal_grouped_hww2l2v_13TeV_WW_1jee_WWAccNum_events_stack_12->GetXaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_hww2l2v_13TeV_WW_1jee_WWAccNum_events_stack_12->GetXaxis()->SetLabelSize(0.05);
   thsSignal_grouped_hww2l2v_13TeV_WW_1jee_WWAccNum_events_stack_12->GetXaxis()->SetTitleSize(0.06);
   thsSignal_grouped_hww2l2v_13TeV_WW_1jee_WWAccNum_events_stack_12->GetXaxis()->SetTitleOffset(0.9);
   thsSignal_grouped_hww2l2v_13TeV_WW_1jee_WWAccNum_events_stack_12->GetXaxis()->SetTitleFont(42);
   thsSignal_grouped_hww2l2v_13TeV_WW_1jee_WWAccNum_events_stack_12->GetYaxis()->SetLabelFont(42);
   thsSignal_grouped_hww2l2v_13TeV_WW_1jee_WWAccNum_events_stack_12->GetYaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_hww2l2v_13TeV_WW_1jee_WWAccNum_events_stack_12->GetYaxis()->SetLabelSize(0.05);
   thsSignal_grouped_hww2l2v_13TeV_WW_1jee_WWAccNum_events_stack_12->GetYaxis()->SetTitleSize(0.06);
   thsSignal_grouped_hww2l2v_13TeV_WW_1jee_WWAccNum_events_stack_12->GetYaxis()->SetTitleOffset(1.25);
   thsSignal_grouped_hww2l2v_13TeV_WW_1jee_WWAccNum_events_stack_12->GetYaxis()->SetTitleFont(42);
   thsSignal_grouped_hww2l2v_13TeV_WW_1jee_WWAccNum_events_stack_12->GetZaxis()->SetLabelFont(42);
   thsSignal_grouped_hww2l2v_13TeV_WW_1jee_WWAccNum_events_stack_12->GetZaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_hww2l2v_13TeV_WW_1jee_WWAccNum_events_stack_12->GetZaxis()->SetLabelSize(0.05);
   thsSignal_grouped_hww2l2v_13TeV_WW_1jee_WWAccNum_events_stack_12->GetZaxis()->SetTitleSize(0.06);
   thsSignal_grouped_hww2l2v_13TeV_WW_1jee_WWAccNum_events_stack_12->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_hww2l2v_13TeV_WW_1jee_WWAccNum_events->SetHistogram(thsSignal_grouped_hww2l2v_13TeV_WW_1jee_WWAccNum_events_stack_12);
   
   
   TH1D *new_histo_group_Higgs_hww2l2v_13TeV_WW_1jee_WWAccNum_events53 = new TH1D("new_histo_group_Higgs_hww2l2v_13TeV_WW_1jee_WWAccNum_events53","histo_H_htt",1,0,2);
   new_histo_group_Higgs_hww2l2v_13TeV_WW_1jee_WWAccNum_events53->SetBinContent(1,0.8140686);
   new_histo_group_Higgs_hww2l2v_13TeV_WW_1jee_WWAccNum_events53->SetBinError(1,0.1251461);
   new_histo_group_Higgs_hww2l2v_13TeV_WW_1jee_WWAccNum_events53->SetEntries(66);
   new_histo_group_Higgs_hww2l2v_13TeV_WW_1jee_WWAccNum_events53->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_hww2l2v_13TeV_WW_1jee_WWAccNum_events53->SetLineColor(ci);
   new_histo_group_Higgs_hww2l2v_13TeV_WW_1jee_WWAccNum_events53->SetLineWidth(2);
   new_histo_group_Higgs_hww2l2v_13TeV_WW_1jee_WWAccNum_events53->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_hww2l2v_13TeV_WW_1jee_WWAccNum_events53->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_hww2l2v_13TeV_WW_1jee_WWAccNum_events53->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_hww2l2v_13TeV_WW_1jee_WWAccNum_events53->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_hww2l2v_13TeV_WW_1jee_WWAccNum_events53->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_hww2l2v_13TeV_WW_1jee_WWAccNum_events53->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_hww2l2v_13TeV_WW_1jee_WWAccNum_events53->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_hww2l2v_13TeV_WW_1jee_WWAccNum_events53->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_hww2l2v_13TeV_WW_1jee_WWAccNum_events53->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_hww2l2v_13TeV_WW_1jee_WWAccNum_events53->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_hww2l2v_13TeV_WW_1jee_WWAccNum_events53->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_hww2l2v_13TeV_WW_1jee_WWAccNum_events53->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_hww2l2v_13TeV_WW_1jee_WWAccNum_events->Add(new_histo_group_Higgs_hww2l2v_13TeV_WW_1jee_WWAccNum_events,"");
   thsSignal_grouped_hww2l2v_13TeV_WW_1jee_WWAccNum_events->Draw("hist same noclear");
   
   Double_t _fx3008[1] = {
   1};
   Double_t _fy3008[1] = {
   2844};
   Double_t _felx3008[1] = {
   1};
   Double_t _fely3008[1] = {
   53.32718};
   Double_t _fehx3008[1] = {
   1};
   Double_t _fehy3008[1] = {
   54.33659};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(1,_fx3008,_fy3008,_felx3008,_fehx3008,_fely3008,_fehy3008);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(1);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3008 = new TH1F("Graph_Graph3008","",100,0,2.2);
   Graph_Graph3008->SetMinimum(2779.906);
   Graph_Graph3008->SetMaximum(2909.103);
   Graph_Graph3008->SetDirectory(0);
   Graph_Graph3008->SetStats(0);
   Graph_Graph3008->SetLineStyle(0);
   Graph_Graph3008->SetMarkerStyle(20);
   Graph_Graph3008->GetXaxis()->SetLabelFont(42);
   Graph_Graph3008->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3008->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3008->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3008->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3008->GetXaxis()->SetTitleFont(42);
   Graph_Graph3008->GetYaxis()->SetLabelFont(42);
   Graph_Graph3008->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3008->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3008->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3008->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3008->GetYaxis()->SetTitleFont(42);
   Graph_Graph3008->GetZaxis()->SetLabelFont(42);
   Graph_Graph3008->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3008->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3008->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3008->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3008);
   
   grae->Draw("p0");
   
   TLegend *leg = new TLegend(0.2,0.7,0.8,0.9,NULL,"brNDC");
   leg->SetTextFont(62);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("new_histo_group_DY_hww2l2v_13TeV_WW_1jee_WWAccNum_events","DY","F");

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
   entry=leg->AddEntry("new_histo_group_top_hww2l2v_13TeV_WW_1jee_WWAccNum_events","tW and t#bart","F");

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
   entry=leg->AddEntry("new_histo_group_WW_hww2l2v_13TeV_WW_1jee_WWAccNum_events","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_hww2l2v_13TeV_WW_1jee_WWAccNum_events","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_VZ_hww2l2v_13TeV_WW_1jee_WWAccNum_events","VZ/#gamma*/#gamma","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_hww2l2v_13TeV_WW_1jee_WWAccNum_events","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_hww2l2v_13TeV_WW_1jee_WWAccNum_events","Data","EPL");
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
   entry=leg->AddEntry("new_histo_group_DY_hww2l2v_13TeV_WW_1jee_WWAccNum_events","DY","F");

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
   entry=leg->AddEntry("new_histo_group_top_hww2l2v_13TeV_WW_1jee_WWAccNum_events","tW and t#bart","F");

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
   entry=leg->AddEntry("new_histo_group_WW_hww2l2v_13TeV_WW_1jee_WWAccNum_events","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_hww2l2v_13TeV_WW_1jee_WWAccNum_events","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_VZ_hww2l2v_13TeV_WW_1jee_WWAccNum_events","VZ/#gamma*/#gamma","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_hww2l2v_13TeV_WW_1jee_WWAccNum_events","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_hww2l2v_13TeV_WW_1jee_WWAccNum_events","Data","EPL");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   leg->Draw();
   
   TH1F *hframe_copy54 = new TH1F("hframe_copy54","",1000,0,2);
   hframe_copy54->SetMinimum(0);
   hframe_copy54->SetMaximum(7243.323);
   hframe_copy54->SetDirectory(0);
   hframe_copy54->SetStats(0);
   hframe_copy54->SetLineStyle(0);
   hframe_copy54->SetMarkerStyle(20);
   hframe_copy54->GetXaxis()->SetTitle("events");
   hframe_copy54->GetXaxis()->SetNdivisions(506);
   hframe_copy54->GetXaxis()->SetLabelFont(42);
   hframe_copy54->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy54->GetXaxis()->SetLabelSize(0.05);
   hframe_copy54->GetXaxis()->SetTitleSize(0.06);
   hframe_copy54->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy54->GetXaxis()->SetTitleFont(42);
   hframe_copy54->GetYaxis()->SetTitle("Events");
   hframe_copy54->GetYaxis()->SetLabelFont(42);
   hframe_copy54->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy54->GetYaxis()->SetLabelSize(0.05);
   hframe_copy54->GetYaxis()->SetTitleSize(0.06);
   hframe_copy54->GetYaxis()->SetTitleOffset(1.25);
   hframe_copy54->GetYaxis()->SetTitleFont(42);
   hframe_copy54->GetZaxis()->SetLabelFont(42);
   hframe_copy54->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy54->GetZaxis()->SetLabelSize(0.05);
   hframe_copy54->GetZaxis()->SetTitleSize(0.06);
   hframe_copy54->GetZaxis()->SetTitleFont(42);
   hframe_copy54->Draw("sameaxis");
   cchww2l2v_13TeV_WW_1jee_WWAccNum_events->Modified();
   cchww2l2v_13TeV_WW_1jee_WWAccNum_events->cd();
   cchww2l2v_13TeV_WW_1jee_WWAccNum_events->SetSelected(cchww2l2v_13TeV_WW_1jee_WWAccNum_events);
}
