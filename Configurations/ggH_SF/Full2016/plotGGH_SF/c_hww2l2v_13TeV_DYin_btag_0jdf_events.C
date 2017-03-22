void c_hww2l2v_13TeV_DYin_btag_0jdf_events()
{
//=========Macro generated from canvas: cchww2l2v_13TeV_DYin_btag_0jdf_events/cc
//=========  (Tue Mar 21 11:46:12 2017) by ROOT version6.02/13
   TCanvas *cchww2l2v_13TeV_DYin_btag_0jdf_events = new TCanvas("cchww2l2v_13TeV_DYin_btag_0jdf_events", "cc",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   cchww2l2v_13TeV_DYin_btag_0jdf_events->SetHighLightColor(2);
   cchww2l2v_13TeV_DYin_btag_0jdf_events->Range(-0.4,-81.58943,2.1,546.0216);
   cchww2l2v_13TeV_DYin_btag_0jdf_events->SetFillColor(0);
   cchww2l2v_13TeV_DYin_btag_0jdf_events->SetBorderMode(0);
   cchww2l2v_13TeV_DYin_btag_0jdf_events->SetBorderSize(2);
   cchww2l2v_13TeV_DYin_btag_0jdf_events->SetTickx(1);
   cchww2l2v_13TeV_DYin_btag_0jdf_events->SetTicky(1);
   cchww2l2v_13TeV_DYin_btag_0jdf_events->SetLeftMargin(0.16);
   cchww2l2v_13TeV_DYin_btag_0jdf_events->SetRightMargin(0.04);
   cchww2l2v_13TeV_DYin_btag_0jdf_events->SetTopMargin(0.05);
   cchww2l2v_13TeV_DYin_btag_0jdf_events->SetBottomMargin(0.13);
   cchww2l2v_13TeV_DYin_btag_0jdf_events->SetFrameFillStyle(0);
   cchww2l2v_13TeV_DYin_btag_0jdf_events->SetFrameBorderMode(0);
   cchww2l2v_13TeV_DYin_btag_0jdf_events->SetFrameFillStyle(0);
   cchww2l2v_13TeV_DYin_btag_0jdf_events->SetFrameBorderMode(0);
   
   TH1F *hframe10 = new TH1F("hframe10","",1000,0,2);
   hframe10->SetMinimum(0);
   hframe10->SetMaximum(514.641);
   hframe10->SetDirectory(0);
   hframe10->SetStats(0);
   hframe10->SetLineStyle(0);
   hframe10->SetMarkerStyle(20);
   hframe10->GetXaxis()->SetTitle("events");
   hframe10->GetXaxis()->SetNdivisions(506);
   hframe10->GetXaxis()->SetLabelFont(42);
   hframe10->GetXaxis()->SetLabelOffset(0.007);
   hframe10->GetXaxis()->SetLabelSize(0.05);
   hframe10->GetXaxis()->SetTitleSize(0.06);
   hframe10->GetXaxis()->SetTitleOffset(0.9);
   hframe10->GetXaxis()->SetTitleFont(42);
   hframe10->GetYaxis()->SetTitle("Events");
   hframe10->GetYaxis()->SetLabelFont(42);
   hframe10->GetYaxis()->SetLabelOffset(0.007);
   hframe10->GetYaxis()->SetLabelSize(0.05);
   hframe10->GetYaxis()->SetTitleSize(0.06);
   hframe10->GetYaxis()->SetTitleOffset(1.25);
   hframe10->GetYaxis()->SetTitleFont(42);
   hframe10->GetZaxis()->SetLabelFont(42);
   hframe10->GetZaxis()->SetLabelOffset(0.007);
   hframe10->GetZaxis()->SetLabelSize(0.05);
   hframe10->GetZaxis()->SetTitleSize(0.06);
   hframe10->GetZaxis()->SetTitleFont(42);
   hframe10->Draw(" ");
   
   THStack *thsBackground_grouped_hww2l2v_13TeV_DYin_btag_0jdf_events = new THStack();
   thsBackground_grouped_hww2l2v_13TeV_DYin_btag_0jdf_events->SetName("thsBackground_grouped_hww2l2v_13TeV_DYin_btag_0jdf_events");
   thsBackground_grouped_hww2l2v_13TeV_DYin_btag_0jdf_events->SetTitle("thsBackground_grouped_hww2l2v_13TeV_DYin_btag_0jdf_events");
   
   TH1F *thsBackground_grouped_hww2l2v_13TeV_DYin_btag_0jdf_events_stack_3 = new TH1F("thsBackground_grouped_hww2l2v_13TeV_DYin_btag_0jdf_events_stack_3","thsBackground_grouped_hww2l2v_13TeV_DYin_btag_0jdf_events",1,0,2);
   thsBackground_grouped_hww2l2v_13TeV_DYin_btag_0jdf_events_stack_3->SetMinimum(0);
   thsBackground_grouped_hww2l2v_13TeV_DYin_btag_0jdf_events_stack_3->SetMaximum(161.9485);
   thsBackground_grouped_hww2l2v_13TeV_DYin_btag_0jdf_events_stack_3->SetDirectory(0);
   thsBackground_grouped_hww2l2v_13TeV_DYin_btag_0jdf_events_stack_3->SetStats(0);
   thsBackground_grouped_hww2l2v_13TeV_DYin_btag_0jdf_events_stack_3->SetLineStyle(0);
   thsBackground_grouped_hww2l2v_13TeV_DYin_btag_0jdf_events_stack_3->SetMarkerStyle(20);
   thsBackground_grouped_hww2l2v_13TeV_DYin_btag_0jdf_events_stack_3->GetXaxis()->SetLabelFont(42);
   thsBackground_grouped_hww2l2v_13TeV_DYin_btag_0jdf_events_stack_3->GetXaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_hww2l2v_13TeV_DYin_btag_0jdf_events_stack_3->GetXaxis()->SetLabelSize(0.05);
   thsBackground_grouped_hww2l2v_13TeV_DYin_btag_0jdf_events_stack_3->GetXaxis()->SetTitleSize(0.06);
   thsBackground_grouped_hww2l2v_13TeV_DYin_btag_0jdf_events_stack_3->GetXaxis()->SetTitleOffset(0.9);
   thsBackground_grouped_hww2l2v_13TeV_DYin_btag_0jdf_events_stack_3->GetXaxis()->SetTitleFont(42);
   thsBackground_grouped_hww2l2v_13TeV_DYin_btag_0jdf_events_stack_3->GetYaxis()->SetLabelFont(42);
   thsBackground_grouped_hww2l2v_13TeV_DYin_btag_0jdf_events_stack_3->GetYaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_hww2l2v_13TeV_DYin_btag_0jdf_events_stack_3->GetYaxis()->SetLabelSize(0.05);
   thsBackground_grouped_hww2l2v_13TeV_DYin_btag_0jdf_events_stack_3->GetYaxis()->SetTitleSize(0.06);
   thsBackground_grouped_hww2l2v_13TeV_DYin_btag_0jdf_events_stack_3->GetYaxis()->SetTitleOffset(1.25);
   thsBackground_grouped_hww2l2v_13TeV_DYin_btag_0jdf_events_stack_3->GetYaxis()->SetTitleFont(42);
   thsBackground_grouped_hww2l2v_13TeV_DYin_btag_0jdf_events_stack_3->GetZaxis()->SetLabelFont(42);
   thsBackground_grouped_hww2l2v_13TeV_DYin_btag_0jdf_events_stack_3->GetZaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_hww2l2v_13TeV_DYin_btag_0jdf_events_stack_3->GetZaxis()->SetLabelSize(0.05);
   thsBackground_grouped_hww2l2v_13TeV_DYin_btag_0jdf_events_stack_3->GetZaxis()->SetTitleSize(0.06);
   thsBackground_grouped_hww2l2v_13TeV_DYin_btag_0jdf_events_stack_3->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_hww2l2v_13TeV_DYin_btag_0jdf_events->SetHistogram(thsBackground_grouped_hww2l2v_13TeV_DYin_btag_0jdf_events_stack_3);
   
   
   TH1D *new_histo_group_DY_hww2l2v_13TeV_DYin_btag_0jdf_events11 = new TH1D("new_histo_group_DY_hww2l2v_13TeV_DYin_btag_0jdf_events11","histo_DY",1,0,2);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#009900");
   new_histo_group_DY_hww2l2v_13TeV_DYin_btag_0jdf_events11->SetFillColor(ci);
   new_histo_group_DY_hww2l2v_13TeV_DYin_btag_0jdf_events11->SetFillStyle(3001);

   ci = TColor::GetColor("#009900");
   new_histo_group_DY_hww2l2v_13TeV_DYin_btag_0jdf_events11->SetLineColor(ci);
   new_histo_group_DY_hww2l2v_13TeV_DYin_btag_0jdf_events11->GetXaxis()->SetLabelFont(42);
   new_histo_group_DY_hww2l2v_13TeV_DYin_btag_0jdf_events11->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_DY_hww2l2v_13TeV_DYin_btag_0jdf_events11->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_DY_hww2l2v_13TeV_DYin_btag_0jdf_events11->GetXaxis()->SetTitleFont(42);
   new_histo_group_DY_hww2l2v_13TeV_DYin_btag_0jdf_events11->GetYaxis()->SetLabelFont(42);
   new_histo_group_DY_hww2l2v_13TeV_DYin_btag_0jdf_events11->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_DY_hww2l2v_13TeV_DYin_btag_0jdf_events11->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_DY_hww2l2v_13TeV_DYin_btag_0jdf_events11->GetYaxis()->SetTitleFont(42);
   new_histo_group_DY_hww2l2v_13TeV_DYin_btag_0jdf_events11->GetZaxis()->SetLabelFont(42);
   new_histo_group_DY_hww2l2v_13TeV_DYin_btag_0jdf_events11->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_DY_hww2l2v_13TeV_DYin_btag_0jdf_events11->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_DY_hww2l2v_13TeV_DYin_btag_0jdf_events11->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_hww2l2v_13TeV_DYin_btag_0jdf_events->Add(new_histo_group_DY_hww2l2v_13TeV_DYin_btag_0jdf_events,"");
   
   TH1D *new_histo_group_top_hww2l2v_13TeV_DYin_btag_0jdf_events12 = new TH1D("new_histo_group_top_hww2l2v_13TeV_DYin_btag_0jdf_events12","histo_top",1,0,2);
   new_histo_group_top_hww2l2v_13TeV_DYin_btag_0jdf_events12->SetBinContent(1,127.1929);
   new_histo_group_top_hww2l2v_13TeV_DYin_btag_0jdf_events12->SetBinError(1,2.229359);
   new_histo_group_top_hww2l2v_13TeV_DYin_btag_0jdf_events12->SetEntries(3631);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_top_hww2l2v_13TeV_DYin_btag_0jdf_events12->SetFillColor(ci);
   new_histo_group_top_hww2l2v_13TeV_DYin_btag_0jdf_events12->SetFillStyle(3001);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_top_hww2l2v_13TeV_DYin_btag_0jdf_events12->SetLineColor(ci);
   new_histo_group_top_hww2l2v_13TeV_DYin_btag_0jdf_events12->GetXaxis()->SetLabelFont(42);
   new_histo_group_top_hww2l2v_13TeV_DYin_btag_0jdf_events12->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_top_hww2l2v_13TeV_DYin_btag_0jdf_events12->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_top_hww2l2v_13TeV_DYin_btag_0jdf_events12->GetXaxis()->SetTitleFont(42);
   new_histo_group_top_hww2l2v_13TeV_DYin_btag_0jdf_events12->GetYaxis()->SetLabelFont(42);
   new_histo_group_top_hww2l2v_13TeV_DYin_btag_0jdf_events12->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_top_hww2l2v_13TeV_DYin_btag_0jdf_events12->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_top_hww2l2v_13TeV_DYin_btag_0jdf_events12->GetYaxis()->SetTitleFont(42);
   new_histo_group_top_hww2l2v_13TeV_DYin_btag_0jdf_events12->GetZaxis()->SetLabelFont(42);
   new_histo_group_top_hww2l2v_13TeV_DYin_btag_0jdf_events12->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_top_hww2l2v_13TeV_DYin_btag_0jdf_events12->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_top_hww2l2v_13TeV_DYin_btag_0jdf_events12->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_hww2l2v_13TeV_DYin_btag_0jdf_events->Add(new_histo_group_top_hww2l2v_13TeV_DYin_btag_0jdf_events,"");
   
   TH1D *new_histo_group_WW_hww2l2v_13TeV_DYin_btag_0jdf_events13 = new TH1D("new_histo_group_WW_hww2l2v_13TeV_DYin_btag_0jdf_events13","histo_WW",1,0,2);
   new_histo_group_WW_hww2l2v_13TeV_DYin_btag_0jdf_events13->SetBinContent(1,25.63045);
   new_histo_group_WW_hww2l2v_13TeV_DYin_btag_0jdf_events13->SetBinError(1,2.255545);
   new_histo_group_WW_hww2l2v_13TeV_DYin_btag_0jdf_events13->SetEntries(198);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_hww2l2v_13TeV_DYin_btag_0jdf_events13->SetFillColor(ci);
   new_histo_group_WW_hww2l2v_13TeV_DYin_btag_0jdf_events13->SetFillStyle(3001);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_hww2l2v_13TeV_DYin_btag_0jdf_events13->SetLineColor(ci);
   new_histo_group_WW_hww2l2v_13TeV_DYin_btag_0jdf_events13->GetXaxis()->SetLabelFont(42);
   new_histo_group_WW_hww2l2v_13TeV_DYin_btag_0jdf_events13->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WW_hww2l2v_13TeV_DYin_btag_0jdf_events13->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WW_hww2l2v_13TeV_DYin_btag_0jdf_events13->GetXaxis()->SetTitleFont(42);
   new_histo_group_WW_hww2l2v_13TeV_DYin_btag_0jdf_events13->GetYaxis()->SetLabelFont(42);
   new_histo_group_WW_hww2l2v_13TeV_DYin_btag_0jdf_events13->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WW_hww2l2v_13TeV_DYin_btag_0jdf_events13->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WW_hww2l2v_13TeV_DYin_btag_0jdf_events13->GetYaxis()->SetTitleFont(42);
   new_histo_group_WW_hww2l2v_13TeV_DYin_btag_0jdf_events13->GetZaxis()->SetLabelFont(42);
   new_histo_group_WW_hww2l2v_13TeV_DYin_btag_0jdf_events13->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WW_hww2l2v_13TeV_DYin_btag_0jdf_events13->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WW_hww2l2v_13TeV_DYin_btag_0jdf_events13->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_hww2l2v_13TeV_DYin_btag_0jdf_events->Add(new_histo_group_WW_hww2l2v_13TeV_DYin_btag_0jdf_events,"");
   
   TH1D *new_histo_group_VVV_hww2l2v_13TeV_DYin_btag_0jdf_events14 = new TH1D("new_histo_group_VVV_hww2l2v_13TeV_DYin_btag_0jdf_events14","histo_VVV",1,0,2);
   new_histo_group_VVV_hww2l2v_13TeV_DYin_btag_0jdf_events14->SetBinContent(1,0.127536);
   new_histo_group_VVV_hww2l2v_13TeV_DYin_btag_0jdf_events14->SetBinError(1,0.06420496);
   new_histo_group_VVV_hww2l2v_13TeV_DYin_btag_0jdf_events14->SetEntries(6);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_hww2l2v_13TeV_DYin_btag_0jdf_events14->SetFillColor(ci);
   new_histo_group_VVV_hww2l2v_13TeV_DYin_btag_0jdf_events14->SetFillStyle(3001);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_hww2l2v_13TeV_DYin_btag_0jdf_events14->SetLineColor(ci);
   new_histo_group_VVV_hww2l2v_13TeV_DYin_btag_0jdf_events14->GetXaxis()->SetLabelFont(42);
   new_histo_group_VVV_hww2l2v_13TeV_DYin_btag_0jdf_events14->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_hww2l2v_13TeV_DYin_btag_0jdf_events14->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_hww2l2v_13TeV_DYin_btag_0jdf_events14->GetXaxis()->SetTitleFont(42);
   new_histo_group_VVV_hww2l2v_13TeV_DYin_btag_0jdf_events14->GetYaxis()->SetLabelFont(42);
   new_histo_group_VVV_hww2l2v_13TeV_DYin_btag_0jdf_events14->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_hww2l2v_13TeV_DYin_btag_0jdf_events14->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_hww2l2v_13TeV_DYin_btag_0jdf_events14->GetYaxis()->SetTitleFont(42);
   new_histo_group_VVV_hww2l2v_13TeV_DYin_btag_0jdf_events14->GetZaxis()->SetLabelFont(42);
   new_histo_group_VVV_hww2l2v_13TeV_DYin_btag_0jdf_events14->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_hww2l2v_13TeV_DYin_btag_0jdf_events14->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_hww2l2v_13TeV_DYin_btag_0jdf_events14->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_hww2l2v_13TeV_DYin_btag_0jdf_events->Add(new_histo_group_VVV_hww2l2v_13TeV_DYin_btag_0jdf_events,"");
   
   TH1D *new_histo_group_VZ_hww2l2v_13TeV_DYin_btag_0jdf_events15 = new TH1D("new_histo_group_VZ_hww2l2v_13TeV_DYin_btag_0jdf_events15","histo_Vg",1,0,2);
   new_histo_group_VZ_hww2l2v_13TeV_DYin_btag_0jdf_events15->SetBinContent(1,1.13198);
   new_histo_group_VZ_hww2l2v_13TeV_DYin_btag_0jdf_events15->SetBinError(1,0.314927);
   new_histo_group_VZ_hww2l2v_13TeV_DYin_btag_0jdf_events15->SetEntries(20);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_VZ_hww2l2v_13TeV_DYin_btag_0jdf_events15->SetFillColor(ci);
   new_histo_group_VZ_hww2l2v_13TeV_DYin_btag_0jdf_events15->SetFillStyle(3001);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_VZ_hww2l2v_13TeV_DYin_btag_0jdf_events15->SetLineColor(ci);
   new_histo_group_VZ_hww2l2v_13TeV_DYin_btag_0jdf_events15->GetXaxis()->SetLabelFont(42);
   new_histo_group_VZ_hww2l2v_13TeV_DYin_btag_0jdf_events15->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_VZ_hww2l2v_13TeV_DYin_btag_0jdf_events15->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_VZ_hww2l2v_13TeV_DYin_btag_0jdf_events15->GetXaxis()->SetTitleFont(42);
   new_histo_group_VZ_hww2l2v_13TeV_DYin_btag_0jdf_events15->GetYaxis()->SetLabelFont(42);
   new_histo_group_VZ_hww2l2v_13TeV_DYin_btag_0jdf_events15->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_VZ_hww2l2v_13TeV_DYin_btag_0jdf_events15->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_VZ_hww2l2v_13TeV_DYin_btag_0jdf_events15->GetYaxis()->SetTitleFont(42);
   new_histo_group_VZ_hww2l2v_13TeV_DYin_btag_0jdf_events15->GetZaxis()->SetLabelFont(42);
   new_histo_group_VZ_hww2l2v_13TeV_DYin_btag_0jdf_events15->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_VZ_hww2l2v_13TeV_DYin_btag_0jdf_events15->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_VZ_hww2l2v_13TeV_DYin_btag_0jdf_events15->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_hww2l2v_13TeV_DYin_btag_0jdf_events->Add(new_histo_group_VZ_hww2l2v_13TeV_DYin_btag_0jdf_events,"");
   
   TH1D *new_histo_group_Higgs_hww2l2v_13TeV_DYin_btag_0jdf_events16 = new TH1D("new_histo_group_Higgs_hww2l2v_13TeV_DYin_btag_0jdf_events16","histo_H_htt",1,0,2);
   new_histo_group_Higgs_hww2l2v_13TeV_DYin_btag_0jdf_events16->SetBinContent(1,0.1538251);
   new_histo_group_Higgs_hww2l2v_13TeV_DYin_btag_0jdf_events16->SetBinError(1,0.07102889);
   new_histo_group_Higgs_hww2l2v_13TeV_DYin_btag_0jdf_events16->SetEntries(7);
   new_histo_group_Higgs_hww2l2v_13TeV_DYin_btag_0jdf_events16->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_hww2l2v_13TeV_DYin_btag_0jdf_events16->SetLineColor(ci);
   new_histo_group_Higgs_hww2l2v_13TeV_DYin_btag_0jdf_events16->SetLineWidth(2);
   new_histo_group_Higgs_hww2l2v_13TeV_DYin_btag_0jdf_events16->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_hww2l2v_13TeV_DYin_btag_0jdf_events16->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_hww2l2v_13TeV_DYin_btag_0jdf_events16->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_hww2l2v_13TeV_DYin_btag_0jdf_events16->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_hww2l2v_13TeV_DYin_btag_0jdf_events16->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_hww2l2v_13TeV_DYin_btag_0jdf_events16->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_hww2l2v_13TeV_DYin_btag_0jdf_events16->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_hww2l2v_13TeV_DYin_btag_0jdf_events16->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_hww2l2v_13TeV_DYin_btag_0jdf_events16->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_hww2l2v_13TeV_DYin_btag_0jdf_events16->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_hww2l2v_13TeV_DYin_btag_0jdf_events16->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_hww2l2v_13TeV_DYin_btag_0jdf_events16->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_hww2l2v_13TeV_DYin_btag_0jdf_events->Add(new_histo_group_Higgs_hww2l2v_13TeV_DYin_btag_0jdf_events,"");
   thsBackground_grouped_hww2l2v_13TeV_DYin_btag_0jdf_events->Draw("hist same");
   
   thsSignal_grouped_hww2l2v_13TeV_DYin_btag_0jdf_events = new THStack();
   thsSignal_grouped_hww2l2v_13TeV_DYin_btag_0jdf_events->SetName("thsSignal_grouped_hww2l2v_13TeV_DYin_btag_0jdf_events");
   thsSignal_grouped_hww2l2v_13TeV_DYin_btag_0jdf_events->SetTitle("thsSignal_grouped_hww2l2v_13TeV_DYin_btag_0jdf_events");
   
   TH1F *thsSignal_grouped_hww2l2v_13TeV_DYin_btag_0jdf_events_stack_4 = new TH1F("thsSignal_grouped_hww2l2v_13TeV_DYin_btag_0jdf_events_stack_4","thsSignal_grouped_hww2l2v_13TeV_DYin_btag_0jdf_events",1,0,2);
   thsSignal_grouped_hww2l2v_13TeV_DYin_btag_0jdf_events_stack_4->SetMinimum(0);
   thsSignal_grouped_hww2l2v_13TeV_DYin_btag_0jdf_events_stack_4->SetMaximum(0.2360967);
   thsSignal_grouped_hww2l2v_13TeV_DYin_btag_0jdf_events_stack_4->SetDirectory(0);
   thsSignal_grouped_hww2l2v_13TeV_DYin_btag_0jdf_events_stack_4->SetStats(0);
   thsSignal_grouped_hww2l2v_13TeV_DYin_btag_0jdf_events_stack_4->SetLineStyle(0);
   thsSignal_grouped_hww2l2v_13TeV_DYin_btag_0jdf_events_stack_4->SetMarkerStyle(20);
   thsSignal_grouped_hww2l2v_13TeV_DYin_btag_0jdf_events_stack_4->GetXaxis()->SetLabelFont(42);
   thsSignal_grouped_hww2l2v_13TeV_DYin_btag_0jdf_events_stack_4->GetXaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_hww2l2v_13TeV_DYin_btag_0jdf_events_stack_4->GetXaxis()->SetLabelSize(0.05);
   thsSignal_grouped_hww2l2v_13TeV_DYin_btag_0jdf_events_stack_4->GetXaxis()->SetTitleSize(0.06);
   thsSignal_grouped_hww2l2v_13TeV_DYin_btag_0jdf_events_stack_4->GetXaxis()->SetTitleOffset(0.9);
   thsSignal_grouped_hww2l2v_13TeV_DYin_btag_0jdf_events_stack_4->GetXaxis()->SetTitleFont(42);
   thsSignal_grouped_hww2l2v_13TeV_DYin_btag_0jdf_events_stack_4->GetYaxis()->SetLabelFont(42);
   thsSignal_grouped_hww2l2v_13TeV_DYin_btag_0jdf_events_stack_4->GetYaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_hww2l2v_13TeV_DYin_btag_0jdf_events_stack_4->GetYaxis()->SetLabelSize(0.05);
   thsSignal_grouped_hww2l2v_13TeV_DYin_btag_0jdf_events_stack_4->GetYaxis()->SetTitleSize(0.06);
   thsSignal_grouped_hww2l2v_13TeV_DYin_btag_0jdf_events_stack_4->GetYaxis()->SetTitleOffset(1.25);
   thsSignal_grouped_hww2l2v_13TeV_DYin_btag_0jdf_events_stack_4->GetYaxis()->SetTitleFont(42);
   thsSignal_grouped_hww2l2v_13TeV_DYin_btag_0jdf_events_stack_4->GetZaxis()->SetLabelFont(42);
   thsSignal_grouped_hww2l2v_13TeV_DYin_btag_0jdf_events_stack_4->GetZaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_hww2l2v_13TeV_DYin_btag_0jdf_events_stack_4->GetZaxis()->SetLabelSize(0.05);
   thsSignal_grouped_hww2l2v_13TeV_DYin_btag_0jdf_events_stack_4->GetZaxis()->SetTitleSize(0.06);
   thsSignal_grouped_hww2l2v_13TeV_DYin_btag_0jdf_events_stack_4->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_hww2l2v_13TeV_DYin_btag_0jdf_events->SetHistogram(thsSignal_grouped_hww2l2v_13TeV_DYin_btag_0jdf_events_stack_4);
   
   
   TH1D *new_histo_group_Higgs_hww2l2v_13TeV_DYin_btag_0jdf_events17 = new TH1D("new_histo_group_Higgs_hww2l2v_13TeV_DYin_btag_0jdf_events17","histo_H_htt",1,0,2);
   new_histo_group_Higgs_hww2l2v_13TeV_DYin_btag_0jdf_events17->SetBinContent(1,0.1538251);
   new_histo_group_Higgs_hww2l2v_13TeV_DYin_btag_0jdf_events17->SetBinError(1,0.07102889);
   new_histo_group_Higgs_hww2l2v_13TeV_DYin_btag_0jdf_events17->SetEntries(7);
   new_histo_group_Higgs_hww2l2v_13TeV_DYin_btag_0jdf_events17->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_hww2l2v_13TeV_DYin_btag_0jdf_events17->SetLineColor(ci);
   new_histo_group_Higgs_hww2l2v_13TeV_DYin_btag_0jdf_events17->SetLineWidth(2);
   new_histo_group_Higgs_hww2l2v_13TeV_DYin_btag_0jdf_events17->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_hww2l2v_13TeV_DYin_btag_0jdf_events17->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_hww2l2v_13TeV_DYin_btag_0jdf_events17->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_hww2l2v_13TeV_DYin_btag_0jdf_events17->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_hww2l2v_13TeV_DYin_btag_0jdf_events17->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_hww2l2v_13TeV_DYin_btag_0jdf_events17->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_hww2l2v_13TeV_DYin_btag_0jdf_events17->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_hww2l2v_13TeV_DYin_btag_0jdf_events17->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_hww2l2v_13TeV_DYin_btag_0jdf_events17->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_hww2l2v_13TeV_DYin_btag_0jdf_events17->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_hww2l2v_13TeV_DYin_btag_0jdf_events17->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_hww2l2v_13TeV_DYin_btag_0jdf_events17->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_hww2l2v_13TeV_DYin_btag_0jdf_events->Add(new_histo_group_Higgs_hww2l2v_13TeV_DYin_btag_0jdf_events,"");
   thsSignal_grouped_hww2l2v_13TeV_DYin_btag_0jdf_events->Draw("hist same noclear");
   
   Double_t _fx3002[1] = {
   1};
   Double_t _fy3002[1] = {
   192};
   Double_t _felx3002[1] = {
   1};
   Double_t _fely3002[1] = {
   13.84462};
   Double_t _fehx3002[1] = {
   1};
   Double_t _fehy3002[1] = {
   14.8808};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(1,_fx3002,_fy3002,_felx3002,_fehx3002,_fely3002,_fehy3002);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(1);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3002 = new TH1F("Graph_Graph3002","",100,0,2.2);
   Graph_Graph3002->SetMinimum(175.2828);
   Graph_Graph3002->SetMaximum(209.7533);
   Graph_Graph3002->SetDirectory(0);
   Graph_Graph3002->SetStats(0);
   Graph_Graph3002->SetLineStyle(0);
   Graph_Graph3002->SetMarkerStyle(20);
   Graph_Graph3002->GetXaxis()->SetLabelFont(42);
   Graph_Graph3002->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3002->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3002->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3002->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3002->GetXaxis()->SetTitleFont(42);
   Graph_Graph3002->GetYaxis()->SetLabelFont(42);
   Graph_Graph3002->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3002->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3002->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3002->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3002->GetYaxis()->SetTitleFont(42);
   Graph_Graph3002->GetZaxis()->SetLabelFont(42);
   Graph_Graph3002->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3002->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3002->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3002->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3002);
   
   grae->Draw("p0");
   
   TLegend *leg = new TLegend(0.2,0.7,0.8,0.9,NULL,"brNDC");
   leg->SetTextFont(62);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("new_histo_group_DY_hww2l2v_13TeV_DYin_btag_0jdf_events","DY","F");

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
   entry=leg->AddEntry("new_histo_group_top_hww2l2v_13TeV_DYin_btag_0jdf_events","tW and t#bart","F");

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
   entry=leg->AddEntry("new_histo_group_WW_hww2l2v_13TeV_DYin_btag_0jdf_events","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_hww2l2v_13TeV_DYin_btag_0jdf_events","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_VZ_hww2l2v_13TeV_DYin_btag_0jdf_events","VZ/#gamma*/#gamma","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_hww2l2v_13TeV_DYin_btag_0jdf_events","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_hww2l2v_13TeV_DYin_btag_0jdf_events","Data","EPL");
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
   entry=leg->AddEntry("new_histo_group_DY_hww2l2v_13TeV_DYin_btag_0jdf_events","DY","F");

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
   entry=leg->AddEntry("new_histo_group_top_hww2l2v_13TeV_DYin_btag_0jdf_events","tW and t#bart","F");

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
   entry=leg->AddEntry("new_histo_group_WW_hww2l2v_13TeV_DYin_btag_0jdf_events","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_hww2l2v_13TeV_DYin_btag_0jdf_events","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_VZ_hww2l2v_13TeV_DYin_btag_0jdf_events","VZ/#gamma*/#gamma","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_hww2l2v_13TeV_DYin_btag_0jdf_events","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_hww2l2v_13TeV_DYin_btag_0jdf_events","Data","EPL");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   leg->Draw();
   
   TH1F *hframe_copy18 = new TH1F("hframe_copy18","",1000,0,2);
   hframe_copy18->SetMinimum(0);
   hframe_copy18->SetMaximum(514.641);
   hframe_copy18->SetDirectory(0);
   hframe_copy18->SetStats(0);
   hframe_copy18->SetLineStyle(0);
   hframe_copy18->SetMarkerStyle(20);
   hframe_copy18->GetXaxis()->SetTitle("events");
   hframe_copy18->GetXaxis()->SetNdivisions(506);
   hframe_copy18->GetXaxis()->SetLabelFont(42);
   hframe_copy18->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy18->GetXaxis()->SetLabelSize(0.05);
   hframe_copy18->GetXaxis()->SetTitleSize(0.06);
   hframe_copy18->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy18->GetXaxis()->SetTitleFont(42);
   hframe_copy18->GetYaxis()->SetTitle("Events");
   hframe_copy18->GetYaxis()->SetLabelFont(42);
   hframe_copy18->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy18->GetYaxis()->SetLabelSize(0.05);
   hframe_copy18->GetYaxis()->SetTitleSize(0.06);
   hframe_copy18->GetYaxis()->SetTitleOffset(1.25);
   hframe_copy18->GetYaxis()->SetTitleFont(42);
   hframe_copy18->GetZaxis()->SetLabelFont(42);
   hframe_copy18->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy18->GetZaxis()->SetLabelSize(0.05);
   hframe_copy18->GetZaxis()->SetTitleSize(0.06);
   hframe_copy18->GetZaxis()->SetTitleFont(42);
   hframe_copy18->Draw("sameaxis");
   cchww2l2v_13TeV_DYin_btag_0jdf_events->Modified();
   cchww2l2v_13TeV_DYin_btag_0jdf_events->cd();
   cchww2l2v_13TeV_DYin_btag_0jdf_events->SetSelected(cchww2l2v_13TeV_DYin_btag_0jdf_events);
}
