void c_hww2l2v_13TeV_1jmm_events()
{
//=========Macro generated from canvas: cchww2l2v_13TeV_1jmm_events/cc
//=========  (Tue Mar 21 11:46:15 2017) by ROOT version6.02/13
   TCanvas *cchww2l2v_13TeV_1jmm_events = new TCanvas("cchww2l2v_13TeV_1jmm_events", "cc",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   cchww2l2v_13TeV_1jmm_events->SetHighLightColor(2);
   cchww2l2v_13TeV_1jmm_events->Range(-0.4,-733.839,2.1,4911.077);
   cchww2l2v_13TeV_1jmm_events->SetFillColor(0);
   cchww2l2v_13TeV_1jmm_events->SetBorderMode(0);
   cchww2l2v_13TeV_1jmm_events->SetBorderSize(2);
   cchww2l2v_13TeV_1jmm_events->SetTickx(1);
   cchww2l2v_13TeV_1jmm_events->SetTicky(1);
   cchww2l2v_13TeV_1jmm_events->SetLeftMargin(0.16);
   cchww2l2v_13TeV_1jmm_events->SetRightMargin(0.04);
   cchww2l2v_13TeV_1jmm_events->SetTopMargin(0.05);
   cchww2l2v_13TeV_1jmm_events->SetBottomMargin(0.13);
   cchww2l2v_13TeV_1jmm_events->SetFrameFillStyle(0);
   cchww2l2v_13TeV_1jmm_events->SetFrameBorderMode(0);
   cchww2l2v_13TeV_1jmm_events->SetFrameFillStyle(0);
   cchww2l2v_13TeV_1jmm_events->SetFrameBorderMode(0);
   
   TH1F *hframe37 = new TH1F("hframe37","",1000,0,2);
   hframe37->SetMinimum(0);
   hframe37->SetMaximum(4628.831);
   hframe37->SetDirectory(0);
   hframe37->SetStats(0);
   hframe37->SetLineStyle(0);
   hframe37->SetMarkerStyle(20);
   hframe37->GetXaxis()->SetTitle("events");
   hframe37->GetXaxis()->SetNdivisions(506);
   hframe37->GetXaxis()->SetLabelFont(42);
   hframe37->GetXaxis()->SetLabelOffset(0.007);
   hframe37->GetXaxis()->SetLabelSize(0.05);
   hframe37->GetXaxis()->SetTitleSize(0.06);
   hframe37->GetXaxis()->SetTitleOffset(0.9);
   hframe37->GetXaxis()->SetTitleFont(42);
   hframe37->GetYaxis()->SetTitle("Events");
   hframe37->GetYaxis()->SetLabelFont(42);
   hframe37->GetYaxis()->SetLabelOffset(0.007);
   hframe37->GetYaxis()->SetLabelSize(0.05);
   hframe37->GetYaxis()->SetTitleSize(0.06);
   hframe37->GetYaxis()->SetTitleOffset(1.25);
   hframe37->GetYaxis()->SetTitleFont(42);
   hframe37->GetZaxis()->SetLabelFont(42);
   hframe37->GetZaxis()->SetLabelOffset(0.007);
   hframe37->GetZaxis()->SetLabelSize(0.05);
   hframe37->GetZaxis()->SetTitleSize(0.06);
   hframe37->GetZaxis()->SetTitleFont(42);
   hframe37->Draw(" ");
   
   THStack *thsBackground_grouped_hww2l2v_13TeV_1jmm_events = new THStack();
   thsBackground_grouped_hww2l2v_13TeV_1jmm_events->SetName("thsBackground_grouped_hww2l2v_13TeV_1jmm_events");
   thsBackground_grouped_hww2l2v_13TeV_1jmm_events->SetTitle("thsBackground_grouped_hww2l2v_13TeV_1jmm_events");
   
   TH1F *thsBackground_grouped_hww2l2v_13TeV_1jmm_events_stack_9 = new TH1F("thsBackground_grouped_hww2l2v_13TeV_1jmm_events_stack_9","thsBackground_grouped_hww2l2v_13TeV_1jmm_events",1,0,2);
   thsBackground_grouped_hww2l2v_13TeV_1jmm_events_stack_9->SetMinimum(0);
   thsBackground_grouped_hww2l2v_13TeV_1jmm_events_stack_9->SetMaximum(1168.231);
   thsBackground_grouped_hww2l2v_13TeV_1jmm_events_stack_9->SetDirectory(0);
   thsBackground_grouped_hww2l2v_13TeV_1jmm_events_stack_9->SetStats(0);
   thsBackground_grouped_hww2l2v_13TeV_1jmm_events_stack_9->SetLineStyle(0);
   thsBackground_grouped_hww2l2v_13TeV_1jmm_events_stack_9->SetMarkerStyle(20);
   thsBackground_grouped_hww2l2v_13TeV_1jmm_events_stack_9->GetXaxis()->SetLabelFont(42);
   thsBackground_grouped_hww2l2v_13TeV_1jmm_events_stack_9->GetXaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_hww2l2v_13TeV_1jmm_events_stack_9->GetXaxis()->SetLabelSize(0.05);
   thsBackground_grouped_hww2l2v_13TeV_1jmm_events_stack_9->GetXaxis()->SetTitleSize(0.06);
   thsBackground_grouped_hww2l2v_13TeV_1jmm_events_stack_9->GetXaxis()->SetTitleOffset(0.9);
   thsBackground_grouped_hww2l2v_13TeV_1jmm_events_stack_9->GetXaxis()->SetTitleFont(42);
   thsBackground_grouped_hww2l2v_13TeV_1jmm_events_stack_9->GetYaxis()->SetLabelFont(42);
   thsBackground_grouped_hww2l2v_13TeV_1jmm_events_stack_9->GetYaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_hww2l2v_13TeV_1jmm_events_stack_9->GetYaxis()->SetLabelSize(0.05);
   thsBackground_grouped_hww2l2v_13TeV_1jmm_events_stack_9->GetYaxis()->SetTitleSize(0.06);
   thsBackground_grouped_hww2l2v_13TeV_1jmm_events_stack_9->GetYaxis()->SetTitleOffset(1.25);
   thsBackground_grouped_hww2l2v_13TeV_1jmm_events_stack_9->GetYaxis()->SetTitleFont(42);
   thsBackground_grouped_hww2l2v_13TeV_1jmm_events_stack_9->GetZaxis()->SetLabelFont(42);
   thsBackground_grouped_hww2l2v_13TeV_1jmm_events_stack_9->GetZaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_hww2l2v_13TeV_1jmm_events_stack_9->GetZaxis()->SetLabelSize(0.05);
   thsBackground_grouped_hww2l2v_13TeV_1jmm_events_stack_9->GetZaxis()->SetTitleSize(0.06);
   thsBackground_grouped_hww2l2v_13TeV_1jmm_events_stack_9->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_hww2l2v_13TeV_1jmm_events->SetHistogram(thsBackground_grouped_hww2l2v_13TeV_1jmm_events_stack_9);
   
   
   TH1D *new_histo_group_DY_hww2l2v_13TeV_1jmm_events38 = new TH1D("new_histo_group_DY_hww2l2v_13TeV_1jmm_events38","histo_DY",1,0,2);
   new_histo_group_DY_hww2l2v_13TeV_1jmm_events38->SetBinContent(1,362.3364);
   new_histo_group_DY_hww2l2v_13TeV_1jmm_events38->SetBinError(1,105.1853);
   new_histo_group_DY_hww2l2v_13TeV_1jmm_events38->SetEntries(25);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#009900");
   new_histo_group_DY_hww2l2v_13TeV_1jmm_events38->SetFillColor(ci);
   new_histo_group_DY_hww2l2v_13TeV_1jmm_events38->SetFillStyle(3001);

   ci = TColor::GetColor("#009900");
   new_histo_group_DY_hww2l2v_13TeV_1jmm_events38->SetLineColor(ci);
   new_histo_group_DY_hww2l2v_13TeV_1jmm_events38->GetXaxis()->SetLabelFont(42);
   new_histo_group_DY_hww2l2v_13TeV_1jmm_events38->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_DY_hww2l2v_13TeV_1jmm_events38->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_DY_hww2l2v_13TeV_1jmm_events38->GetXaxis()->SetTitleFont(42);
   new_histo_group_DY_hww2l2v_13TeV_1jmm_events38->GetYaxis()->SetLabelFont(42);
   new_histo_group_DY_hww2l2v_13TeV_1jmm_events38->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_DY_hww2l2v_13TeV_1jmm_events38->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_DY_hww2l2v_13TeV_1jmm_events38->GetYaxis()->SetTitleFont(42);
   new_histo_group_DY_hww2l2v_13TeV_1jmm_events38->GetZaxis()->SetLabelFont(42);
   new_histo_group_DY_hww2l2v_13TeV_1jmm_events38->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_DY_hww2l2v_13TeV_1jmm_events38->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_DY_hww2l2v_13TeV_1jmm_events38->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_hww2l2v_13TeV_1jmm_events->Add(new_histo_group_DY_hww2l2v_13TeV_1jmm_events,"");
   
   TH1D *new_histo_group_top_hww2l2v_13TeV_1jmm_events39 = new TH1D("new_histo_group_top_hww2l2v_13TeV_1jmm_events39","histo_top",1,0,2);
   new_histo_group_top_hww2l2v_13TeV_1jmm_events39->SetBinContent(1,249.813);
   new_histo_group_top_hww2l2v_13TeV_1jmm_events39->SetBinError(1,3.375047);
   new_histo_group_top_hww2l2v_13TeV_1jmm_events39->SetEntries(6104);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_top_hww2l2v_13TeV_1jmm_events39->SetFillColor(ci);
   new_histo_group_top_hww2l2v_13TeV_1jmm_events39->SetFillStyle(3001);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_top_hww2l2v_13TeV_1jmm_events39->SetLineColor(ci);
   new_histo_group_top_hww2l2v_13TeV_1jmm_events39->GetXaxis()->SetLabelFont(42);
   new_histo_group_top_hww2l2v_13TeV_1jmm_events39->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_top_hww2l2v_13TeV_1jmm_events39->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_top_hww2l2v_13TeV_1jmm_events39->GetXaxis()->SetTitleFont(42);
   new_histo_group_top_hww2l2v_13TeV_1jmm_events39->GetYaxis()->SetLabelFont(42);
   new_histo_group_top_hww2l2v_13TeV_1jmm_events39->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_top_hww2l2v_13TeV_1jmm_events39->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_top_hww2l2v_13TeV_1jmm_events39->GetYaxis()->SetTitleFont(42);
   new_histo_group_top_hww2l2v_13TeV_1jmm_events39->GetZaxis()->SetLabelFont(42);
   new_histo_group_top_hww2l2v_13TeV_1jmm_events39->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_top_hww2l2v_13TeV_1jmm_events39->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_top_hww2l2v_13TeV_1jmm_events39->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_hww2l2v_13TeV_1jmm_events->Add(new_histo_group_top_hww2l2v_13TeV_1jmm_events,"");
   
   TH1D *new_histo_group_WW_hww2l2v_13TeV_1jmm_events40 = new TH1D("new_histo_group_WW_hww2l2v_13TeV_1jmm_events40","histo_WW",1,0,2);
   new_histo_group_WW_hww2l2v_13TeV_1jmm_events40->SetBinContent(1,317.4031);
   new_histo_group_WW_hww2l2v_13TeV_1jmm_events40->SetBinError(1,7.963948);
   new_histo_group_WW_hww2l2v_13TeV_1jmm_events40->SetEntries(2433);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_hww2l2v_13TeV_1jmm_events40->SetFillColor(ci);
   new_histo_group_WW_hww2l2v_13TeV_1jmm_events40->SetFillStyle(3001);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_hww2l2v_13TeV_1jmm_events40->SetLineColor(ci);
   new_histo_group_WW_hww2l2v_13TeV_1jmm_events40->GetXaxis()->SetLabelFont(42);
   new_histo_group_WW_hww2l2v_13TeV_1jmm_events40->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WW_hww2l2v_13TeV_1jmm_events40->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WW_hww2l2v_13TeV_1jmm_events40->GetXaxis()->SetTitleFont(42);
   new_histo_group_WW_hww2l2v_13TeV_1jmm_events40->GetYaxis()->SetLabelFont(42);
   new_histo_group_WW_hww2l2v_13TeV_1jmm_events40->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WW_hww2l2v_13TeV_1jmm_events40->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WW_hww2l2v_13TeV_1jmm_events40->GetYaxis()->SetTitleFont(42);
   new_histo_group_WW_hww2l2v_13TeV_1jmm_events40->GetZaxis()->SetLabelFont(42);
   new_histo_group_WW_hww2l2v_13TeV_1jmm_events40->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WW_hww2l2v_13TeV_1jmm_events40->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WW_hww2l2v_13TeV_1jmm_events40->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_hww2l2v_13TeV_1jmm_events->Add(new_histo_group_WW_hww2l2v_13TeV_1jmm_events,"");
   
   TH1D *new_histo_group_VVV_hww2l2v_13TeV_1jmm_events41 = new TH1D("new_histo_group_VVV_hww2l2v_13TeV_1jmm_events41","histo_VVV",1,0,2);
   new_histo_group_VVV_hww2l2v_13TeV_1jmm_events41->SetBinContent(1,1.009742);
   new_histo_group_VVV_hww2l2v_13TeV_1jmm_events41->SetBinError(1,0.1768087);
   new_histo_group_VVV_hww2l2v_13TeV_1jmm_events41->SetEntries(40);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_hww2l2v_13TeV_1jmm_events41->SetFillColor(ci);
   new_histo_group_VVV_hww2l2v_13TeV_1jmm_events41->SetFillStyle(3001);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_hww2l2v_13TeV_1jmm_events41->SetLineColor(ci);
   new_histo_group_VVV_hww2l2v_13TeV_1jmm_events41->GetXaxis()->SetLabelFont(42);
   new_histo_group_VVV_hww2l2v_13TeV_1jmm_events41->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_hww2l2v_13TeV_1jmm_events41->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_hww2l2v_13TeV_1jmm_events41->GetXaxis()->SetTitleFont(42);
   new_histo_group_VVV_hww2l2v_13TeV_1jmm_events41->GetYaxis()->SetLabelFont(42);
   new_histo_group_VVV_hww2l2v_13TeV_1jmm_events41->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_hww2l2v_13TeV_1jmm_events41->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_hww2l2v_13TeV_1jmm_events41->GetYaxis()->SetTitleFont(42);
   new_histo_group_VVV_hww2l2v_13TeV_1jmm_events41->GetZaxis()->SetLabelFont(42);
   new_histo_group_VVV_hww2l2v_13TeV_1jmm_events41->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_hww2l2v_13TeV_1jmm_events41->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_hww2l2v_13TeV_1jmm_events41->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_hww2l2v_13TeV_1jmm_events->Add(new_histo_group_VVV_hww2l2v_13TeV_1jmm_events,"");
   
   TH1D *new_histo_group_VZ_hww2l2v_13TeV_1jmm_events42 = new TH1D("new_histo_group_VZ_hww2l2v_13TeV_1jmm_events42","histo_Vg",1,0,2);
   new_histo_group_VZ_hww2l2v_13TeV_1jmm_events42->SetBinContent(1,112.51);
   new_histo_group_VZ_hww2l2v_13TeV_1jmm_events42->SetBinError(1,56.4869);
   new_histo_group_VZ_hww2l2v_13TeV_1jmm_events42->SetEntries(982);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_VZ_hww2l2v_13TeV_1jmm_events42->SetFillColor(ci);
   new_histo_group_VZ_hww2l2v_13TeV_1jmm_events42->SetFillStyle(3001);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_VZ_hww2l2v_13TeV_1jmm_events42->SetLineColor(ci);
   new_histo_group_VZ_hww2l2v_13TeV_1jmm_events42->GetXaxis()->SetLabelFont(42);
   new_histo_group_VZ_hww2l2v_13TeV_1jmm_events42->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_VZ_hww2l2v_13TeV_1jmm_events42->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_VZ_hww2l2v_13TeV_1jmm_events42->GetXaxis()->SetTitleFont(42);
   new_histo_group_VZ_hww2l2v_13TeV_1jmm_events42->GetYaxis()->SetLabelFont(42);
   new_histo_group_VZ_hww2l2v_13TeV_1jmm_events42->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_VZ_hww2l2v_13TeV_1jmm_events42->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_VZ_hww2l2v_13TeV_1jmm_events42->GetYaxis()->SetTitleFont(42);
   new_histo_group_VZ_hww2l2v_13TeV_1jmm_events42->GetZaxis()->SetLabelFont(42);
   new_histo_group_VZ_hww2l2v_13TeV_1jmm_events42->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_VZ_hww2l2v_13TeV_1jmm_events42->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_VZ_hww2l2v_13TeV_1jmm_events42->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_hww2l2v_13TeV_1jmm_events->Add(new_histo_group_VZ_hww2l2v_13TeV_1jmm_events,"");
   
   TH1D *new_histo_group_Higgs_hww2l2v_13TeV_1jmm_events43 = new TH1D("new_histo_group_Higgs_hww2l2v_13TeV_1jmm_events43","histo_H_htt",1,0,2);
   new_histo_group_Higgs_hww2l2v_13TeV_1jmm_events43->SetBinContent(1,69.52911);
   new_histo_group_Higgs_hww2l2v_13TeV_1jmm_events43->SetBinError(1,2.129353);
   new_histo_group_Higgs_hww2l2v_13TeV_1jmm_events43->SetEntries(2280);
   new_histo_group_Higgs_hww2l2v_13TeV_1jmm_events43->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_hww2l2v_13TeV_1jmm_events43->SetLineColor(ci);
   new_histo_group_Higgs_hww2l2v_13TeV_1jmm_events43->SetLineWidth(2);
   new_histo_group_Higgs_hww2l2v_13TeV_1jmm_events43->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_hww2l2v_13TeV_1jmm_events43->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_hww2l2v_13TeV_1jmm_events43->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_hww2l2v_13TeV_1jmm_events43->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_hww2l2v_13TeV_1jmm_events43->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_hww2l2v_13TeV_1jmm_events43->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_hww2l2v_13TeV_1jmm_events43->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_hww2l2v_13TeV_1jmm_events43->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_hww2l2v_13TeV_1jmm_events43->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_hww2l2v_13TeV_1jmm_events43->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_hww2l2v_13TeV_1jmm_events43->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_hww2l2v_13TeV_1jmm_events43->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_hww2l2v_13TeV_1jmm_events->Add(new_histo_group_Higgs_hww2l2v_13TeV_1jmm_events,"");
   thsBackground_grouped_hww2l2v_13TeV_1jmm_events->Draw("hist same");
   
   thsSignal_grouped_hww2l2v_13TeV_1jmm_events = new THStack();
   thsSignal_grouped_hww2l2v_13TeV_1jmm_events->SetName("thsSignal_grouped_hww2l2v_13TeV_1jmm_events");
   thsSignal_grouped_hww2l2v_13TeV_1jmm_events->SetTitle("thsSignal_grouped_hww2l2v_13TeV_1jmm_events");
   
   TH1F *thsSignal_grouped_hww2l2v_13TeV_1jmm_events_stack_10 = new TH1F("thsSignal_grouped_hww2l2v_13TeV_1jmm_events_stack_10","thsSignal_grouped_hww2l2v_13TeV_1jmm_events",1,0,2);
   thsSignal_grouped_hww2l2v_13TeV_1jmm_events_stack_10->SetMinimum(0);
   thsSignal_grouped_hww2l2v_13TeV_1jmm_events_stack_10->SetMaximum(75.24138);
   thsSignal_grouped_hww2l2v_13TeV_1jmm_events_stack_10->SetDirectory(0);
   thsSignal_grouped_hww2l2v_13TeV_1jmm_events_stack_10->SetStats(0);
   thsSignal_grouped_hww2l2v_13TeV_1jmm_events_stack_10->SetLineStyle(0);
   thsSignal_grouped_hww2l2v_13TeV_1jmm_events_stack_10->SetMarkerStyle(20);
   thsSignal_grouped_hww2l2v_13TeV_1jmm_events_stack_10->GetXaxis()->SetLabelFont(42);
   thsSignal_grouped_hww2l2v_13TeV_1jmm_events_stack_10->GetXaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_hww2l2v_13TeV_1jmm_events_stack_10->GetXaxis()->SetLabelSize(0.05);
   thsSignal_grouped_hww2l2v_13TeV_1jmm_events_stack_10->GetXaxis()->SetTitleSize(0.06);
   thsSignal_grouped_hww2l2v_13TeV_1jmm_events_stack_10->GetXaxis()->SetTitleOffset(0.9);
   thsSignal_grouped_hww2l2v_13TeV_1jmm_events_stack_10->GetXaxis()->SetTitleFont(42);
   thsSignal_grouped_hww2l2v_13TeV_1jmm_events_stack_10->GetYaxis()->SetLabelFont(42);
   thsSignal_grouped_hww2l2v_13TeV_1jmm_events_stack_10->GetYaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_hww2l2v_13TeV_1jmm_events_stack_10->GetYaxis()->SetLabelSize(0.05);
   thsSignal_grouped_hww2l2v_13TeV_1jmm_events_stack_10->GetYaxis()->SetTitleSize(0.06);
   thsSignal_grouped_hww2l2v_13TeV_1jmm_events_stack_10->GetYaxis()->SetTitleOffset(1.25);
   thsSignal_grouped_hww2l2v_13TeV_1jmm_events_stack_10->GetYaxis()->SetTitleFont(42);
   thsSignal_grouped_hww2l2v_13TeV_1jmm_events_stack_10->GetZaxis()->SetLabelFont(42);
   thsSignal_grouped_hww2l2v_13TeV_1jmm_events_stack_10->GetZaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_hww2l2v_13TeV_1jmm_events_stack_10->GetZaxis()->SetLabelSize(0.05);
   thsSignal_grouped_hww2l2v_13TeV_1jmm_events_stack_10->GetZaxis()->SetTitleSize(0.06);
   thsSignal_grouped_hww2l2v_13TeV_1jmm_events_stack_10->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_hww2l2v_13TeV_1jmm_events->SetHistogram(thsSignal_grouped_hww2l2v_13TeV_1jmm_events_stack_10);
   
   
   TH1D *new_histo_group_Higgs_hww2l2v_13TeV_1jmm_events44 = new TH1D("new_histo_group_Higgs_hww2l2v_13TeV_1jmm_events44","histo_H_htt",1,0,2);
   new_histo_group_Higgs_hww2l2v_13TeV_1jmm_events44->SetBinContent(1,69.52911);
   new_histo_group_Higgs_hww2l2v_13TeV_1jmm_events44->SetBinError(1,2.129353);
   new_histo_group_Higgs_hww2l2v_13TeV_1jmm_events44->SetEntries(2280);
   new_histo_group_Higgs_hww2l2v_13TeV_1jmm_events44->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_hww2l2v_13TeV_1jmm_events44->SetLineColor(ci);
   new_histo_group_Higgs_hww2l2v_13TeV_1jmm_events44->SetLineWidth(2);
   new_histo_group_Higgs_hww2l2v_13TeV_1jmm_events44->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_hww2l2v_13TeV_1jmm_events44->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_hww2l2v_13TeV_1jmm_events44->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_hww2l2v_13TeV_1jmm_events44->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_hww2l2v_13TeV_1jmm_events44->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_hww2l2v_13TeV_1jmm_events44->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_hww2l2v_13TeV_1jmm_events44->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_hww2l2v_13TeV_1jmm_events44->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_hww2l2v_13TeV_1jmm_events44->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_hww2l2v_13TeV_1jmm_events44->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_hww2l2v_13TeV_1jmm_events44->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_hww2l2v_13TeV_1jmm_events44->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_hww2l2v_13TeV_1jmm_events->Add(new_histo_group_Higgs_hww2l2v_13TeV_1jmm_events,"");
   thsSignal_grouped_hww2l2v_13TeV_1jmm_events->Draw("hist same noclear");
   
   Double_t _fx3006[1] = {
   1};
   Double_t _fy3006[1] = {
   1043.072};
   Double_t _felx3006[1] = {
   1};
   Double_t _fely3006[1] = {
   0};
   Double_t _fehx3006[1] = {
   1};
   Double_t _fehy3006[1] = {
   0};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(1,_fx3006,_fy3006,_felx3006,_fehx3006,_fely3006,_fehy3006);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(12);
   grae->SetFillStyle(3004);
   grae->SetLineColor(12);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3006 = new TH1F("Graph_Graph3006","",100,0,2.2);
   Graph_Graph3006->SetMinimum(1042.972);
   Graph_Graph3006->SetMaximum(1044.172);
   Graph_Graph3006->SetDirectory(0);
   Graph_Graph3006->SetStats(0);
   Graph_Graph3006->SetLineStyle(0);
   Graph_Graph3006->SetMarkerStyle(20);
   Graph_Graph3006->GetXaxis()->SetLabelFont(42);
   Graph_Graph3006->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3006->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3006->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3006->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3006->GetXaxis()->SetTitleFont(42);
   Graph_Graph3006->GetYaxis()->SetLabelFont(42);
   Graph_Graph3006->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3006->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3006->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3006->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3006->GetYaxis()->SetTitleFont(42);
   Graph_Graph3006->GetZaxis()->SetLabelFont(42);
   Graph_Graph3006->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3006->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3006->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3006->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3006);
   
   grae->Draw("2");
   
   Double_t _fx3007[1] = {
   1};
   Double_t _fy3007[1] = {
   1809};
   Double_t _felx3007[1] = {
   1};
   Double_t _fely3007[1] = {
   42.52933};
   Double_t _fehx3007[1] = {
   1};
   Double_t _fehy3007[1] = {
   43.54112};
   grae = new TGraphAsymmErrors(1,_fx3007,_fy3007,_felx3007,_fehx3007,_fely3007,_fehy3007);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(1);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3007 = new TH1F("Graph_Graph3007","",100,0,2.2);
   Graph_Graph3007->SetMinimum(1757.864);
   Graph_Graph3007->SetMaximum(1861.148);
   Graph_Graph3007->SetDirectory(0);
   Graph_Graph3007->SetStats(0);
   Graph_Graph3007->SetLineStyle(0);
   Graph_Graph3007->SetMarkerStyle(20);
   Graph_Graph3007->GetXaxis()->SetLabelFont(42);
   Graph_Graph3007->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3007->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3007->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3007->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3007->GetXaxis()->SetTitleFont(42);
   Graph_Graph3007->GetYaxis()->SetLabelFont(42);
   Graph_Graph3007->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3007->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3007->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3007->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3007->GetYaxis()->SetTitleFont(42);
   Graph_Graph3007->GetZaxis()->SetLabelFont(42);
   Graph_Graph3007->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3007->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3007->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3007->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3007);
   
   grae->Draw("p0");
   
   TLegend *leg = new TLegend(0.2,0.7,0.8,0.9,NULL,"brNDC");
   leg->SetTextFont(62);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("new_histo_group_DY_hww2l2v_13TeV_1jmm_events","DY","F");

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
   entry=leg->AddEntry("new_histo_group_top_hww2l2v_13TeV_1jmm_events","tW and t#bart","F");

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
   entry=leg->AddEntry("new_histo_group_WW_hww2l2v_13TeV_1jmm_events","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_hww2l2v_13TeV_1jmm_events","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_VZ_hww2l2v_13TeV_1jmm_events","VZ/#gamma*/#gamma","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_hww2l2v_13TeV_1jmm_events","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_hww2l2v_13TeV_1jmm_events","Data","EPL");
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
   entry=leg->AddEntry("new_histo_group_DY_hww2l2v_13TeV_1jmm_events","DY","F");

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
   entry=leg->AddEntry("new_histo_group_top_hww2l2v_13TeV_1jmm_events","tW and t#bart","F");

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
   entry=leg->AddEntry("new_histo_group_WW_hww2l2v_13TeV_1jmm_events","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_hww2l2v_13TeV_1jmm_events","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_VZ_hww2l2v_13TeV_1jmm_events","VZ/#gamma*/#gamma","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_hww2l2v_13TeV_1jmm_events","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_hww2l2v_13TeV_1jmm_events","Data","EPL");
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
   
   TH1F *hframe_copy45 = new TH1F("hframe_copy45","",1000,0,2);
   hframe_copy45->SetMinimum(0);
   hframe_copy45->SetMaximum(4628.831);
   hframe_copy45->SetDirectory(0);
   hframe_copy45->SetStats(0);
   hframe_copy45->SetLineStyle(0);
   hframe_copy45->SetMarkerStyle(20);
   hframe_copy45->GetXaxis()->SetTitle("events");
   hframe_copy45->GetXaxis()->SetNdivisions(506);
   hframe_copy45->GetXaxis()->SetLabelFont(42);
   hframe_copy45->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy45->GetXaxis()->SetLabelSize(0.05);
   hframe_copy45->GetXaxis()->SetTitleSize(0.06);
   hframe_copy45->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy45->GetXaxis()->SetTitleFont(42);
   hframe_copy45->GetYaxis()->SetTitle("Events");
   hframe_copy45->GetYaxis()->SetLabelFont(42);
   hframe_copy45->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy45->GetYaxis()->SetLabelSize(0.05);
   hframe_copy45->GetYaxis()->SetTitleSize(0.06);
   hframe_copy45->GetYaxis()->SetTitleOffset(1.25);
   hframe_copy45->GetYaxis()->SetTitleFont(42);
   hframe_copy45->GetZaxis()->SetLabelFont(42);
   hframe_copy45->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy45->GetZaxis()->SetLabelSize(0.05);
   hframe_copy45->GetZaxis()->SetTitleSize(0.06);
   hframe_copy45->GetZaxis()->SetTitleFont(42);
   hframe_copy45->Draw("sameaxis");
   cchww2l2v_13TeV_1jmm_events->Modified();
   cchww2l2v_13TeV_1jmm_events->cd();
   cchww2l2v_13TeV_1jmm_events->SetSelected(cchww2l2v_13TeV_1jmm_events);
}
