void c_hww2l2v_13TeV_top_0jmm_events()
{
//=========Macro generated from canvas: cchww2l2v_13TeV_top_0jmm_events/cc
//=========  (Tue Mar 21 11:46:19 2017) by ROOT version6.02/13
   TCanvas *cchww2l2v_13TeV_top_0jmm_events = new TCanvas("cchww2l2v_13TeV_top_0jmm_events", "cc",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   cchww2l2v_13TeV_top_0jmm_events->SetHighLightColor(2);
   cchww2l2v_13TeV_top_0jmm_events->Range(-0.4,-1377.467,2.1,9218.433);
   cchww2l2v_13TeV_top_0jmm_events->SetFillColor(0);
   cchww2l2v_13TeV_top_0jmm_events->SetBorderMode(0);
   cchww2l2v_13TeV_top_0jmm_events->SetBorderSize(2);
   cchww2l2v_13TeV_top_0jmm_events->SetTickx(1);
   cchww2l2v_13TeV_top_0jmm_events->SetTicky(1);
   cchww2l2v_13TeV_top_0jmm_events->SetLeftMargin(0.16);
   cchww2l2v_13TeV_top_0jmm_events->SetRightMargin(0.04);
   cchww2l2v_13TeV_top_0jmm_events->SetTopMargin(0.05);
   cchww2l2v_13TeV_top_0jmm_events->SetBottomMargin(0.13);
   cchww2l2v_13TeV_top_0jmm_events->SetFrameFillStyle(0);
   cchww2l2v_13TeV_top_0jmm_events->SetFrameBorderMode(0);
   cchww2l2v_13TeV_top_0jmm_events->SetFrameFillStyle(0);
   cchww2l2v_13TeV_top_0jmm_events->SetFrameBorderMode(0);
   
   TH1F *hframe73 = new TH1F("hframe73","",1000,0,2);
   hframe73->SetMinimum(0);
   hframe73->SetMaximum(8688.638);
   hframe73->SetDirectory(0);
   hframe73->SetStats(0);
   hframe73->SetLineStyle(0);
   hframe73->SetMarkerStyle(20);
   hframe73->GetXaxis()->SetTitle("events");
   hframe73->GetXaxis()->SetNdivisions(506);
   hframe73->GetXaxis()->SetLabelFont(42);
   hframe73->GetXaxis()->SetLabelOffset(0.007);
   hframe73->GetXaxis()->SetLabelSize(0.05);
   hframe73->GetXaxis()->SetTitleSize(0.06);
   hframe73->GetXaxis()->SetTitleOffset(0.9);
   hframe73->GetXaxis()->SetTitleFont(42);
   hframe73->GetYaxis()->SetTitle("Events");
   hframe73->GetYaxis()->SetLabelFont(42);
   hframe73->GetYaxis()->SetLabelOffset(0.007);
   hframe73->GetYaxis()->SetLabelSize(0.05);
   hframe73->GetYaxis()->SetTitleSize(0.06);
   hframe73->GetYaxis()->SetTitleOffset(1.25);
   hframe73->GetYaxis()->SetTitleFont(42);
   hframe73->GetZaxis()->SetLabelFont(42);
   hframe73->GetZaxis()->SetLabelOffset(0.007);
   hframe73->GetZaxis()->SetLabelSize(0.05);
   hframe73->GetZaxis()->SetTitleSize(0.06);
   hframe73->GetZaxis()->SetTitleFont(42);
   hframe73->Draw(" ");
   
   THStack *thsBackground_grouped_hww2l2v_13TeV_top_0jmm_events = new THStack();
   thsBackground_grouped_hww2l2v_13TeV_top_0jmm_events->SetName("thsBackground_grouped_hww2l2v_13TeV_top_0jmm_events");
   thsBackground_grouped_hww2l2v_13TeV_top_0jmm_events->SetTitle("thsBackground_grouped_hww2l2v_13TeV_top_0jmm_events");
   
   TH1F *thsBackground_grouped_hww2l2v_13TeV_top_0jmm_events_stack_17 = new TH1F("thsBackground_grouped_hww2l2v_13TeV_top_0jmm_events_stack_17","thsBackground_grouped_hww2l2v_13TeV_top_0jmm_events",1,0,2);
   thsBackground_grouped_hww2l2v_13TeV_top_0jmm_events_stack_17->SetMinimum(0);
   thsBackground_grouped_hww2l2v_13TeV_top_0jmm_events_stack_17->SetMaximum(1512.134);
   thsBackground_grouped_hww2l2v_13TeV_top_0jmm_events_stack_17->SetDirectory(0);
   thsBackground_grouped_hww2l2v_13TeV_top_0jmm_events_stack_17->SetStats(0);
   thsBackground_grouped_hww2l2v_13TeV_top_0jmm_events_stack_17->SetLineStyle(0);
   thsBackground_grouped_hww2l2v_13TeV_top_0jmm_events_stack_17->SetMarkerStyle(20);
   thsBackground_grouped_hww2l2v_13TeV_top_0jmm_events_stack_17->GetXaxis()->SetLabelFont(42);
   thsBackground_grouped_hww2l2v_13TeV_top_0jmm_events_stack_17->GetXaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_hww2l2v_13TeV_top_0jmm_events_stack_17->GetXaxis()->SetLabelSize(0.05);
   thsBackground_grouped_hww2l2v_13TeV_top_0jmm_events_stack_17->GetXaxis()->SetTitleSize(0.06);
   thsBackground_grouped_hww2l2v_13TeV_top_0jmm_events_stack_17->GetXaxis()->SetTitleOffset(0.9);
   thsBackground_grouped_hww2l2v_13TeV_top_0jmm_events_stack_17->GetXaxis()->SetTitleFont(42);
   thsBackground_grouped_hww2l2v_13TeV_top_0jmm_events_stack_17->GetYaxis()->SetLabelFont(42);
   thsBackground_grouped_hww2l2v_13TeV_top_0jmm_events_stack_17->GetYaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_hww2l2v_13TeV_top_0jmm_events_stack_17->GetYaxis()->SetLabelSize(0.05);
   thsBackground_grouped_hww2l2v_13TeV_top_0jmm_events_stack_17->GetYaxis()->SetTitleSize(0.06);
   thsBackground_grouped_hww2l2v_13TeV_top_0jmm_events_stack_17->GetYaxis()->SetTitleOffset(1.25);
   thsBackground_grouped_hww2l2v_13TeV_top_0jmm_events_stack_17->GetYaxis()->SetTitleFont(42);
   thsBackground_grouped_hww2l2v_13TeV_top_0jmm_events_stack_17->GetZaxis()->SetLabelFont(42);
   thsBackground_grouped_hww2l2v_13TeV_top_0jmm_events_stack_17->GetZaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_hww2l2v_13TeV_top_0jmm_events_stack_17->GetZaxis()->SetLabelSize(0.05);
   thsBackground_grouped_hww2l2v_13TeV_top_0jmm_events_stack_17->GetZaxis()->SetTitleSize(0.06);
   thsBackground_grouped_hww2l2v_13TeV_top_0jmm_events_stack_17->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_hww2l2v_13TeV_top_0jmm_events->SetHistogram(thsBackground_grouped_hww2l2v_13TeV_top_0jmm_events_stack_17);
   
   
   TH1D *new_histo_group_DY_hww2l2v_13TeV_top_0jmm_events74 = new TH1D("new_histo_group_DY_hww2l2v_13TeV_top_0jmm_events74","histo_DY",1,0,2);
   new_histo_group_DY_hww2l2v_13TeV_top_0jmm_events74->SetBinContent(1,361.1343);
   new_histo_group_DY_hww2l2v_13TeV_top_0jmm_events74->SetBinError(1,138.0544);
   new_histo_group_DY_hww2l2v_13TeV_top_0jmm_events74->SetEntries(145);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#009900");
   new_histo_group_DY_hww2l2v_13TeV_top_0jmm_events74->SetFillColor(ci);
   new_histo_group_DY_hww2l2v_13TeV_top_0jmm_events74->SetFillStyle(3001);

   ci = TColor::GetColor("#009900");
   new_histo_group_DY_hww2l2v_13TeV_top_0jmm_events74->SetLineColor(ci);
   new_histo_group_DY_hww2l2v_13TeV_top_0jmm_events74->GetXaxis()->SetLabelFont(42);
   new_histo_group_DY_hww2l2v_13TeV_top_0jmm_events74->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_DY_hww2l2v_13TeV_top_0jmm_events74->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_DY_hww2l2v_13TeV_top_0jmm_events74->GetXaxis()->SetTitleFont(42);
   new_histo_group_DY_hww2l2v_13TeV_top_0jmm_events74->GetYaxis()->SetLabelFont(42);
   new_histo_group_DY_hww2l2v_13TeV_top_0jmm_events74->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_DY_hww2l2v_13TeV_top_0jmm_events74->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_DY_hww2l2v_13TeV_top_0jmm_events74->GetYaxis()->SetTitleFont(42);
   new_histo_group_DY_hww2l2v_13TeV_top_0jmm_events74->GetZaxis()->SetLabelFont(42);
   new_histo_group_DY_hww2l2v_13TeV_top_0jmm_events74->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_DY_hww2l2v_13TeV_top_0jmm_events74->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_DY_hww2l2v_13TeV_top_0jmm_events74->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_hww2l2v_13TeV_top_0jmm_events->Add(new_histo_group_DY_hww2l2v_13TeV_top_0jmm_events,"");
   
   TH1D *new_histo_group_top_hww2l2v_13TeV_top_0jmm_events75 = new TH1D("new_histo_group_top_hww2l2v_13TeV_top_0jmm_events75","histo_top",1,0,2);
   new_histo_group_top_hww2l2v_13TeV_top_0jmm_events75->SetBinContent(1,877.9765);
   new_histo_group_top_hww2l2v_13TeV_top_0jmm_events75->SetBinError(1,6.050446);
   new_histo_group_top_hww2l2v_13TeV_top_0jmm_events75->SetEntries(23693);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_top_hww2l2v_13TeV_top_0jmm_events75->SetFillColor(ci);
   new_histo_group_top_hww2l2v_13TeV_top_0jmm_events75->SetFillStyle(3001);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_top_hww2l2v_13TeV_top_0jmm_events75->SetLineColor(ci);
   new_histo_group_top_hww2l2v_13TeV_top_0jmm_events75->GetXaxis()->SetLabelFont(42);
   new_histo_group_top_hww2l2v_13TeV_top_0jmm_events75->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_top_hww2l2v_13TeV_top_0jmm_events75->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_top_hww2l2v_13TeV_top_0jmm_events75->GetXaxis()->SetTitleFont(42);
   new_histo_group_top_hww2l2v_13TeV_top_0jmm_events75->GetYaxis()->SetLabelFont(42);
   new_histo_group_top_hww2l2v_13TeV_top_0jmm_events75->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_top_hww2l2v_13TeV_top_0jmm_events75->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_top_hww2l2v_13TeV_top_0jmm_events75->GetYaxis()->SetTitleFont(42);
   new_histo_group_top_hww2l2v_13TeV_top_0jmm_events75->GetZaxis()->SetLabelFont(42);
   new_histo_group_top_hww2l2v_13TeV_top_0jmm_events75->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_top_hww2l2v_13TeV_top_0jmm_events75->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_top_hww2l2v_13TeV_top_0jmm_events75->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_hww2l2v_13TeV_top_0jmm_events->Add(new_histo_group_top_hww2l2v_13TeV_top_0jmm_events,"");
   
   TH1D *new_histo_group_WW_hww2l2v_13TeV_top_0jmm_events76 = new TH1D("new_histo_group_WW_hww2l2v_13TeV_top_0jmm_events76","histo_WW",1,0,2);
   new_histo_group_WW_hww2l2v_13TeV_top_0jmm_events76->SetBinContent(1,166.7912);
   new_histo_group_WW_hww2l2v_13TeV_top_0jmm_events76->SetBinError(1,5.854855);
   new_histo_group_WW_hww2l2v_13TeV_top_0jmm_events76->SetEntries(1320);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_hww2l2v_13TeV_top_0jmm_events76->SetFillColor(ci);
   new_histo_group_WW_hww2l2v_13TeV_top_0jmm_events76->SetFillStyle(3001);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_hww2l2v_13TeV_top_0jmm_events76->SetLineColor(ci);
   new_histo_group_WW_hww2l2v_13TeV_top_0jmm_events76->GetXaxis()->SetLabelFont(42);
   new_histo_group_WW_hww2l2v_13TeV_top_0jmm_events76->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WW_hww2l2v_13TeV_top_0jmm_events76->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WW_hww2l2v_13TeV_top_0jmm_events76->GetXaxis()->SetTitleFont(42);
   new_histo_group_WW_hww2l2v_13TeV_top_0jmm_events76->GetYaxis()->SetLabelFont(42);
   new_histo_group_WW_hww2l2v_13TeV_top_0jmm_events76->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WW_hww2l2v_13TeV_top_0jmm_events76->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WW_hww2l2v_13TeV_top_0jmm_events76->GetYaxis()->SetTitleFont(42);
   new_histo_group_WW_hww2l2v_13TeV_top_0jmm_events76->GetZaxis()->SetLabelFont(42);
   new_histo_group_WW_hww2l2v_13TeV_top_0jmm_events76->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WW_hww2l2v_13TeV_top_0jmm_events76->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WW_hww2l2v_13TeV_top_0jmm_events76->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_hww2l2v_13TeV_top_0jmm_events->Add(new_histo_group_WW_hww2l2v_13TeV_top_0jmm_events,"");
   
   TH1D *new_histo_group_VVV_hww2l2v_13TeV_top_0jmm_events77 = new TH1D("new_histo_group_VVV_hww2l2v_13TeV_top_0jmm_events77","histo_VVV",1,0,2);
   new_histo_group_VVV_hww2l2v_13TeV_top_0jmm_events77->SetBinContent(1,0.3649441);
   new_histo_group_VVV_hww2l2v_13TeV_top_0jmm_events77->SetBinError(1,0.138825);
   new_histo_group_VVV_hww2l2v_13TeV_top_0jmm_events77->SetEntries(22);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_hww2l2v_13TeV_top_0jmm_events77->SetFillColor(ci);
   new_histo_group_VVV_hww2l2v_13TeV_top_0jmm_events77->SetFillStyle(3001);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_hww2l2v_13TeV_top_0jmm_events77->SetLineColor(ci);
   new_histo_group_VVV_hww2l2v_13TeV_top_0jmm_events77->GetXaxis()->SetLabelFont(42);
   new_histo_group_VVV_hww2l2v_13TeV_top_0jmm_events77->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_hww2l2v_13TeV_top_0jmm_events77->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_hww2l2v_13TeV_top_0jmm_events77->GetXaxis()->SetTitleFont(42);
   new_histo_group_VVV_hww2l2v_13TeV_top_0jmm_events77->GetYaxis()->SetLabelFont(42);
   new_histo_group_VVV_hww2l2v_13TeV_top_0jmm_events77->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_hww2l2v_13TeV_top_0jmm_events77->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_hww2l2v_13TeV_top_0jmm_events77->GetYaxis()->SetTitleFont(42);
   new_histo_group_VVV_hww2l2v_13TeV_top_0jmm_events77->GetZaxis()->SetLabelFont(42);
   new_histo_group_VVV_hww2l2v_13TeV_top_0jmm_events77->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_hww2l2v_13TeV_top_0jmm_events77->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_hww2l2v_13TeV_top_0jmm_events77->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_hww2l2v_13TeV_top_0jmm_events->Add(new_histo_group_VVV_hww2l2v_13TeV_top_0jmm_events,"");
   
   TH1D *new_histo_group_VZ_hww2l2v_13TeV_top_0jmm_events78 = new TH1D("new_histo_group_VZ_hww2l2v_13TeV_top_0jmm_events78","histo_Vg",1,0,2);
   new_histo_group_VZ_hww2l2v_13TeV_top_0jmm_events78->SetBinContent(1,16.94153);
   new_histo_group_VZ_hww2l2v_13TeV_top_0jmm_events78->SetBinError(1,1.094035);
   new_histo_group_VZ_hww2l2v_13TeV_top_0jmm_events78->SetEntries(1703);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_VZ_hww2l2v_13TeV_top_0jmm_events78->SetFillColor(ci);
   new_histo_group_VZ_hww2l2v_13TeV_top_0jmm_events78->SetFillStyle(3001);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_VZ_hww2l2v_13TeV_top_0jmm_events78->SetLineColor(ci);
   new_histo_group_VZ_hww2l2v_13TeV_top_0jmm_events78->GetXaxis()->SetLabelFont(42);
   new_histo_group_VZ_hww2l2v_13TeV_top_0jmm_events78->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_VZ_hww2l2v_13TeV_top_0jmm_events78->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_VZ_hww2l2v_13TeV_top_0jmm_events78->GetXaxis()->SetTitleFont(42);
   new_histo_group_VZ_hww2l2v_13TeV_top_0jmm_events78->GetYaxis()->SetLabelFont(42);
   new_histo_group_VZ_hww2l2v_13TeV_top_0jmm_events78->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_VZ_hww2l2v_13TeV_top_0jmm_events78->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_VZ_hww2l2v_13TeV_top_0jmm_events78->GetYaxis()->SetTitleFont(42);
   new_histo_group_VZ_hww2l2v_13TeV_top_0jmm_events78->GetZaxis()->SetLabelFont(42);
   new_histo_group_VZ_hww2l2v_13TeV_top_0jmm_events78->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_VZ_hww2l2v_13TeV_top_0jmm_events78->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_VZ_hww2l2v_13TeV_top_0jmm_events78->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_hww2l2v_13TeV_top_0jmm_events->Add(new_histo_group_VZ_hww2l2v_13TeV_top_0jmm_events,"");
   
   TH1D *new_histo_group_Higgs_hww2l2v_13TeV_top_0jmm_events79 = new TH1D("new_histo_group_Higgs_hww2l2v_13TeV_top_0jmm_events79","histo_H_htt",1,0,2);
   new_histo_group_Higgs_hww2l2v_13TeV_top_0jmm_events79->SetBinContent(1,16.91947);
   new_histo_group_Higgs_hww2l2v_13TeV_top_0jmm_events79->SetBinError(1,1.107442);
   new_histo_group_Higgs_hww2l2v_13TeV_top_0jmm_events79->SetEntries(373);
   new_histo_group_Higgs_hww2l2v_13TeV_top_0jmm_events79->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_hww2l2v_13TeV_top_0jmm_events79->SetLineColor(ci);
   new_histo_group_Higgs_hww2l2v_13TeV_top_0jmm_events79->SetLineWidth(2);
   new_histo_group_Higgs_hww2l2v_13TeV_top_0jmm_events79->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_hww2l2v_13TeV_top_0jmm_events79->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_hww2l2v_13TeV_top_0jmm_events79->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_hww2l2v_13TeV_top_0jmm_events79->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_hww2l2v_13TeV_top_0jmm_events79->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_hww2l2v_13TeV_top_0jmm_events79->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_hww2l2v_13TeV_top_0jmm_events79->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_hww2l2v_13TeV_top_0jmm_events79->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_hww2l2v_13TeV_top_0jmm_events79->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_hww2l2v_13TeV_top_0jmm_events79->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_hww2l2v_13TeV_top_0jmm_events79->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_hww2l2v_13TeV_top_0jmm_events79->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_hww2l2v_13TeV_top_0jmm_events->Add(new_histo_group_Higgs_hww2l2v_13TeV_top_0jmm_events,"");
   thsBackground_grouped_hww2l2v_13TeV_top_0jmm_events->Draw("hist same");
   
   thsSignal_grouped_hww2l2v_13TeV_top_0jmm_events = new THStack();
   thsSignal_grouped_hww2l2v_13TeV_top_0jmm_events->SetName("thsSignal_grouped_hww2l2v_13TeV_top_0jmm_events");
   thsSignal_grouped_hww2l2v_13TeV_top_0jmm_events->SetTitle("thsSignal_grouped_hww2l2v_13TeV_top_0jmm_events");
   
   TH1F *thsSignal_grouped_hww2l2v_13TeV_top_0jmm_events_stack_18 = new TH1F("thsSignal_grouped_hww2l2v_13TeV_top_0jmm_events_stack_18","thsSignal_grouped_hww2l2v_13TeV_top_0jmm_events",1,0,2);
   thsSignal_grouped_hww2l2v_13TeV_top_0jmm_events_stack_18->SetMinimum(0);
   thsSignal_grouped_hww2l2v_13TeV_top_0jmm_events_stack_18->SetMaximum(18.92826);
   thsSignal_grouped_hww2l2v_13TeV_top_0jmm_events_stack_18->SetDirectory(0);
   thsSignal_grouped_hww2l2v_13TeV_top_0jmm_events_stack_18->SetStats(0);
   thsSignal_grouped_hww2l2v_13TeV_top_0jmm_events_stack_18->SetLineStyle(0);
   thsSignal_grouped_hww2l2v_13TeV_top_0jmm_events_stack_18->SetMarkerStyle(20);
   thsSignal_grouped_hww2l2v_13TeV_top_0jmm_events_stack_18->GetXaxis()->SetLabelFont(42);
   thsSignal_grouped_hww2l2v_13TeV_top_0jmm_events_stack_18->GetXaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_hww2l2v_13TeV_top_0jmm_events_stack_18->GetXaxis()->SetLabelSize(0.05);
   thsSignal_grouped_hww2l2v_13TeV_top_0jmm_events_stack_18->GetXaxis()->SetTitleSize(0.06);
   thsSignal_grouped_hww2l2v_13TeV_top_0jmm_events_stack_18->GetXaxis()->SetTitleOffset(0.9);
   thsSignal_grouped_hww2l2v_13TeV_top_0jmm_events_stack_18->GetXaxis()->SetTitleFont(42);
   thsSignal_grouped_hww2l2v_13TeV_top_0jmm_events_stack_18->GetYaxis()->SetLabelFont(42);
   thsSignal_grouped_hww2l2v_13TeV_top_0jmm_events_stack_18->GetYaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_hww2l2v_13TeV_top_0jmm_events_stack_18->GetYaxis()->SetLabelSize(0.05);
   thsSignal_grouped_hww2l2v_13TeV_top_0jmm_events_stack_18->GetYaxis()->SetTitleSize(0.06);
   thsSignal_grouped_hww2l2v_13TeV_top_0jmm_events_stack_18->GetYaxis()->SetTitleOffset(1.25);
   thsSignal_grouped_hww2l2v_13TeV_top_0jmm_events_stack_18->GetYaxis()->SetTitleFont(42);
   thsSignal_grouped_hww2l2v_13TeV_top_0jmm_events_stack_18->GetZaxis()->SetLabelFont(42);
   thsSignal_grouped_hww2l2v_13TeV_top_0jmm_events_stack_18->GetZaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_hww2l2v_13TeV_top_0jmm_events_stack_18->GetZaxis()->SetLabelSize(0.05);
   thsSignal_grouped_hww2l2v_13TeV_top_0jmm_events_stack_18->GetZaxis()->SetTitleSize(0.06);
   thsSignal_grouped_hww2l2v_13TeV_top_0jmm_events_stack_18->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_hww2l2v_13TeV_top_0jmm_events->SetHistogram(thsSignal_grouped_hww2l2v_13TeV_top_0jmm_events_stack_18);
   
   
   TH1D *new_histo_group_Higgs_hww2l2v_13TeV_top_0jmm_events80 = new TH1D("new_histo_group_Higgs_hww2l2v_13TeV_top_0jmm_events80","histo_H_htt",1,0,2);
   new_histo_group_Higgs_hww2l2v_13TeV_top_0jmm_events80->SetBinContent(1,16.91947);
   new_histo_group_Higgs_hww2l2v_13TeV_top_0jmm_events80->SetBinError(1,1.107442);
   new_histo_group_Higgs_hww2l2v_13TeV_top_0jmm_events80->SetEntries(373);
   new_histo_group_Higgs_hww2l2v_13TeV_top_0jmm_events80->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_hww2l2v_13TeV_top_0jmm_events80->SetLineColor(ci);
   new_histo_group_Higgs_hww2l2v_13TeV_top_0jmm_events80->SetLineWidth(2);
   new_histo_group_Higgs_hww2l2v_13TeV_top_0jmm_events80->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_hww2l2v_13TeV_top_0jmm_events80->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_hww2l2v_13TeV_top_0jmm_events80->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_hww2l2v_13TeV_top_0jmm_events80->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_hww2l2v_13TeV_top_0jmm_events80->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_hww2l2v_13TeV_top_0jmm_events80->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_hww2l2v_13TeV_top_0jmm_events80->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_hww2l2v_13TeV_top_0jmm_events80->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_hww2l2v_13TeV_top_0jmm_events80->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_hww2l2v_13TeV_top_0jmm_events80->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_hww2l2v_13TeV_top_0jmm_events80->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_hww2l2v_13TeV_top_0jmm_events80->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_hww2l2v_13TeV_top_0jmm_events->Add(new_histo_group_Higgs_hww2l2v_13TeV_top_0jmm_events,"");
   thsSignal_grouped_hww2l2v_13TeV_top_0jmm_events->Draw("hist same noclear");
   
   Double_t _fx3012[1] = {
   1};
   Double_t _fy3012[1] = {
   1423.208};
   Double_t _felx3012[1] = {
   1};
   Double_t _fely3012[1] = {
   0};
   Double_t _fehx3012[1] = {
   1};
   Double_t _fehy3012[1] = {
   0};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(1,_fx3012,_fy3012,_felx3012,_fehx3012,_fely3012,_fehy3012);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(12);
   grae->SetFillStyle(3004);
   grae->SetLineColor(12);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3012 = new TH1F("Graph_Graph3012","",100,0,2.2);
   Graph_Graph3012->SetMinimum(1423.108);
   Graph_Graph3012->SetMaximum(1424.308);
   Graph_Graph3012->SetDirectory(0);
   Graph_Graph3012->SetStats(0);
   Graph_Graph3012->SetLineStyle(0);
   Graph_Graph3012->SetMarkerStyle(20);
   Graph_Graph3012->GetXaxis()->SetLabelFont(42);
   Graph_Graph3012->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3012->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3012->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3012->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3012->GetXaxis()->SetTitleFont(42);
   Graph_Graph3012->GetYaxis()->SetLabelFont(42);
   Graph_Graph3012->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3012->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3012->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3012->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3012->GetYaxis()->SetTitleFont(42);
   Graph_Graph3012->GetZaxis()->SetLabelFont(42);
   Graph_Graph3012->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3012->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3012->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3012->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3012);
   
   grae->Draw("2");
   
   Double_t _fx3013[1] = {
   1};
   Double_t _fy3013[1] = {
   3417};
   Double_t _felx3013[1] = {
   1};
   Double_t _fely3013[1] = {
   58.45351};
   Double_t _fehx3013[1] = {
   1};
   Double_t _fehy3013[1] = {
   59.4621};
   grae = new TGraphAsymmErrors(1,_fx3013,_fy3013,_felx3013,_fehx3013,_fely3013,_fehy3013);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(1);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3013 = new TH1F("Graph_Graph3013","",100,0,2.2);
   Graph_Graph3013->SetMinimum(3346.755);
   Graph_Graph3013->SetMaximum(3488.254);
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
   
   grae->Draw("p0");
   
   TLegend *leg = new TLegend(0.2,0.7,0.8,0.9,NULL,"brNDC");
   leg->SetTextFont(62);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("new_histo_group_DY_hww2l2v_13TeV_top_0jmm_events","DY","F");

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
   entry=leg->AddEntry("new_histo_group_top_hww2l2v_13TeV_top_0jmm_events","tW and t#bart","F");

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
   entry=leg->AddEntry("new_histo_group_WW_hww2l2v_13TeV_top_0jmm_events","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_hww2l2v_13TeV_top_0jmm_events","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_VZ_hww2l2v_13TeV_top_0jmm_events","VZ/#gamma*/#gamma","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_hww2l2v_13TeV_top_0jmm_events","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_hww2l2v_13TeV_top_0jmm_events","Data","EPL");
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
   entry=leg->AddEntry("new_histo_group_DY_hww2l2v_13TeV_top_0jmm_events","DY","F");

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
   entry=leg->AddEntry("new_histo_group_top_hww2l2v_13TeV_top_0jmm_events","tW and t#bart","F");

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
   entry=leg->AddEntry("new_histo_group_WW_hww2l2v_13TeV_top_0jmm_events","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_hww2l2v_13TeV_top_0jmm_events","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_VZ_hww2l2v_13TeV_top_0jmm_events","VZ/#gamma*/#gamma","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_hww2l2v_13TeV_top_0jmm_events","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_hww2l2v_13TeV_top_0jmm_events","Data","EPL");
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
   
   TH1F *hframe_copy81 = new TH1F("hframe_copy81","",1000,0,2);
   hframe_copy81->SetMinimum(0);
   hframe_copy81->SetMaximum(8688.638);
   hframe_copy81->SetDirectory(0);
   hframe_copy81->SetStats(0);
   hframe_copy81->SetLineStyle(0);
   hframe_copy81->SetMarkerStyle(20);
   hframe_copy81->GetXaxis()->SetTitle("events");
   hframe_copy81->GetXaxis()->SetNdivisions(506);
   hframe_copy81->GetXaxis()->SetLabelFont(42);
   hframe_copy81->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy81->GetXaxis()->SetLabelSize(0.05);
   hframe_copy81->GetXaxis()->SetTitleSize(0.06);
   hframe_copy81->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy81->GetXaxis()->SetTitleFont(42);
   hframe_copy81->GetYaxis()->SetTitle("Events");
   hframe_copy81->GetYaxis()->SetLabelFont(42);
   hframe_copy81->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy81->GetYaxis()->SetLabelSize(0.05);
   hframe_copy81->GetYaxis()->SetTitleSize(0.06);
   hframe_copy81->GetYaxis()->SetTitleOffset(1.25);
   hframe_copy81->GetYaxis()->SetTitleFont(42);
   hframe_copy81->GetZaxis()->SetLabelFont(42);
   hframe_copy81->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy81->GetZaxis()->SetLabelSize(0.05);
   hframe_copy81->GetZaxis()->SetTitleSize(0.06);
   hframe_copy81->GetZaxis()->SetTitleFont(42);
   hframe_copy81->Draw("sameaxis");
   cchww2l2v_13TeV_top_0jmm_events->Modified();
   cchww2l2v_13TeV_top_0jmm_events->cd();
   cchww2l2v_13TeV_top_0jmm_events->SetSelected(cchww2l2v_13TeV_top_0jmm_events);
}
