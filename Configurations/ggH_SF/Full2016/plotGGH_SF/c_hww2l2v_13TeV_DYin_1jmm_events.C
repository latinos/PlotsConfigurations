void c_hww2l2v_13TeV_DYin_1jmm_events()
{
//=========Macro generated from canvas: cchww2l2v_13TeV_DYin_1jmm_events/cc
//=========  (Tue Mar 21 11:46:20 2017) by ROOT version6.02/13
   TCanvas *cchww2l2v_13TeV_DYin_1jmm_events = new TCanvas("cchww2l2v_13TeV_DYin_1jmm_events", "cc",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   cchww2l2v_13TeV_DYin_1jmm_events->SetHighLightColor(2);
   cchww2l2v_13TeV_DYin_1jmm_events->Range(-0.4,-1571.682,2.1,10518.18);
   cchww2l2v_13TeV_DYin_1jmm_events->SetFillColor(0);
   cchww2l2v_13TeV_DYin_1jmm_events->SetBorderMode(0);
   cchww2l2v_13TeV_DYin_1jmm_events->SetBorderSize(2);
   cchww2l2v_13TeV_DYin_1jmm_events->SetTickx(1);
   cchww2l2v_13TeV_DYin_1jmm_events->SetTicky(1);
   cchww2l2v_13TeV_DYin_1jmm_events->SetLeftMargin(0.16);
   cchww2l2v_13TeV_DYin_1jmm_events->SetRightMargin(0.04);
   cchww2l2v_13TeV_DYin_1jmm_events->SetTopMargin(0.05);
   cchww2l2v_13TeV_DYin_1jmm_events->SetBottomMargin(0.13);
   cchww2l2v_13TeV_DYin_1jmm_events->SetFrameFillStyle(0);
   cchww2l2v_13TeV_DYin_1jmm_events->SetFrameBorderMode(0);
   cchww2l2v_13TeV_DYin_1jmm_events->SetFrameFillStyle(0);
   cchww2l2v_13TeV_DYin_1jmm_events->SetFrameBorderMode(0);
   
   TH1F *hframe82 = new TH1F("hframe82","",1000,0,2);
   hframe82->SetMinimum(0);
   hframe82->SetMaximum(9913.685);
   hframe82->SetDirectory(0);
   hframe82->SetStats(0);
   hframe82->SetLineStyle(0);
   hframe82->SetMarkerStyle(20);
   hframe82->GetXaxis()->SetTitle("events");
   hframe82->GetXaxis()->SetNdivisions(506);
   hframe82->GetXaxis()->SetLabelFont(42);
   hframe82->GetXaxis()->SetLabelOffset(0.007);
   hframe82->GetXaxis()->SetLabelSize(0.05);
   hframe82->GetXaxis()->SetTitleSize(0.06);
   hframe82->GetXaxis()->SetTitleOffset(0.9);
   hframe82->GetXaxis()->SetTitleFont(42);
   hframe82->GetYaxis()->SetTitle("Events");
   hframe82->GetYaxis()->SetLabelFont(42);
   hframe82->GetYaxis()->SetLabelOffset(0.007);
   hframe82->GetYaxis()->SetLabelSize(0.05);
   hframe82->GetYaxis()->SetTitleSize(0.06);
   hframe82->GetYaxis()->SetTitleOffset(1.25);
   hframe82->GetYaxis()->SetTitleFont(42);
   hframe82->GetZaxis()->SetLabelFont(42);
   hframe82->GetZaxis()->SetLabelOffset(0.007);
   hframe82->GetZaxis()->SetLabelSize(0.05);
   hframe82->GetZaxis()->SetTitleSize(0.06);
   hframe82->GetZaxis()->SetTitleFont(42);
   hframe82->Draw(" ");
   
   THStack *thsBackground_grouped_hww2l2v_13TeV_DYin_1jmm_events = new THStack();
   thsBackground_grouped_hww2l2v_13TeV_DYin_1jmm_events->SetName("thsBackground_grouped_hww2l2v_13TeV_DYin_1jmm_events");
   thsBackground_grouped_hww2l2v_13TeV_DYin_1jmm_events->SetTitle("thsBackground_grouped_hww2l2v_13TeV_DYin_1jmm_events");
   
   TH1F *thsBackground_grouped_hww2l2v_13TeV_DYin_1jmm_events_stack_19 = new TH1F("thsBackground_grouped_hww2l2v_13TeV_DYin_1jmm_events_stack_19","thsBackground_grouped_hww2l2v_13TeV_DYin_1jmm_events",1,0,2);
   thsBackground_grouped_hww2l2v_13TeV_DYin_1jmm_events_stack_19->SetMinimum(0);
   thsBackground_grouped_hww2l2v_13TeV_DYin_1jmm_events_stack_19->SetMaximum(1884.55);
   thsBackground_grouped_hww2l2v_13TeV_DYin_1jmm_events_stack_19->SetDirectory(0);
   thsBackground_grouped_hww2l2v_13TeV_DYin_1jmm_events_stack_19->SetStats(0);
   thsBackground_grouped_hww2l2v_13TeV_DYin_1jmm_events_stack_19->SetLineStyle(0);
   thsBackground_grouped_hww2l2v_13TeV_DYin_1jmm_events_stack_19->SetMarkerStyle(20);
   thsBackground_grouped_hww2l2v_13TeV_DYin_1jmm_events_stack_19->GetXaxis()->SetLabelFont(42);
   thsBackground_grouped_hww2l2v_13TeV_DYin_1jmm_events_stack_19->GetXaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_hww2l2v_13TeV_DYin_1jmm_events_stack_19->GetXaxis()->SetLabelSize(0.05);
   thsBackground_grouped_hww2l2v_13TeV_DYin_1jmm_events_stack_19->GetXaxis()->SetTitleSize(0.06);
   thsBackground_grouped_hww2l2v_13TeV_DYin_1jmm_events_stack_19->GetXaxis()->SetTitleOffset(0.9);
   thsBackground_grouped_hww2l2v_13TeV_DYin_1jmm_events_stack_19->GetXaxis()->SetTitleFont(42);
   thsBackground_grouped_hww2l2v_13TeV_DYin_1jmm_events_stack_19->GetYaxis()->SetLabelFont(42);
   thsBackground_grouped_hww2l2v_13TeV_DYin_1jmm_events_stack_19->GetYaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_hww2l2v_13TeV_DYin_1jmm_events_stack_19->GetYaxis()->SetLabelSize(0.05);
   thsBackground_grouped_hww2l2v_13TeV_DYin_1jmm_events_stack_19->GetYaxis()->SetTitleSize(0.06);
   thsBackground_grouped_hww2l2v_13TeV_DYin_1jmm_events_stack_19->GetYaxis()->SetTitleOffset(1.25);
   thsBackground_grouped_hww2l2v_13TeV_DYin_1jmm_events_stack_19->GetYaxis()->SetTitleFont(42);
   thsBackground_grouped_hww2l2v_13TeV_DYin_1jmm_events_stack_19->GetZaxis()->SetLabelFont(42);
   thsBackground_grouped_hww2l2v_13TeV_DYin_1jmm_events_stack_19->GetZaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_hww2l2v_13TeV_DYin_1jmm_events_stack_19->GetZaxis()->SetLabelSize(0.05);
   thsBackground_grouped_hww2l2v_13TeV_DYin_1jmm_events_stack_19->GetZaxis()->SetTitleSize(0.06);
   thsBackground_grouped_hww2l2v_13TeV_DYin_1jmm_events_stack_19->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_hww2l2v_13TeV_DYin_1jmm_events->SetHistogram(thsBackground_grouped_hww2l2v_13TeV_DYin_1jmm_events_stack_19);
   
   
   TH1D *new_histo_group_DY_hww2l2v_13TeV_DYin_1jmm_events83 = new TH1D("new_histo_group_DY_hww2l2v_13TeV_DYin_1jmm_events83","histo_DY",1,0,2);
   new_histo_group_DY_hww2l2v_13TeV_DYin_1jmm_events83->SetBinContent(1,1034.786);
   new_histo_group_DY_hww2l2v_13TeV_DYin_1jmm_events83->SetBinError(1,85.11672);
   new_histo_group_DY_hww2l2v_13TeV_DYin_1jmm_events83->SetEntries(1100);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#009900");
   new_histo_group_DY_hww2l2v_13TeV_DYin_1jmm_events83->SetFillColor(ci);
   new_histo_group_DY_hww2l2v_13TeV_DYin_1jmm_events83->SetFillStyle(3001);

   ci = TColor::GetColor("#009900");
   new_histo_group_DY_hww2l2v_13TeV_DYin_1jmm_events83->SetLineColor(ci);
   new_histo_group_DY_hww2l2v_13TeV_DYin_1jmm_events83->GetXaxis()->SetLabelFont(42);
   new_histo_group_DY_hww2l2v_13TeV_DYin_1jmm_events83->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_DY_hww2l2v_13TeV_DYin_1jmm_events83->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_DY_hww2l2v_13TeV_DYin_1jmm_events83->GetXaxis()->SetTitleFont(42);
   new_histo_group_DY_hww2l2v_13TeV_DYin_1jmm_events83->GetYaxis()->SetLabelFont(42);
   new_histo_group_DY_hww2l2v_13TeV_DYin_1jmm_events83->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_DY_hww2l2v_13TeV_DYin_1jmm_events83->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_DY_hww2l2v_13TeV_DYin_1jmm_events83->GetYaxis()->SetTitleFont(42);
   new_histo_group_DY_hww2l2v_13TeV_DYin_1jmm_events83->GetZaxis()->SetLabelFont(42);
   new_histo_group_DY_hww2l2v_13TeV_DYin_1jmm_events83->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_DY_hww2l2v_13TeV_DYin_1jmm_events83->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_DY_hww2l2v_13TeV_DYin_1jmm_events83->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_hww2l2v_13TeV_DYin_1jmm_events->Add(new_histo_group_DY_hww2l2v_13TeV_DYin_1jmm_events,"");
   
   TH1D *new_histo_group_top_hww2l2v_13TeV_DYin_1jmm_events84 = new TH1D("new_histo_group_top_hww2l2v_13TeV_DYin_1jmm_events84","histo_top",1,0,2);
   new_histo_group_top_hww2l2v_13TeV_DYin_1jmm_events84->SetBinContent(1,175.655);
   new_histo_group_top_hww2l2v_13TeV_DYin_1jmm_events84->SetBinError(1,2.848647);
   new_histo_group_top_hww2l2v_13TeV_DYin_1jmm_events84->SetEntries(4258);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_top_hww2l2v_13TeV_DYin_1jmm_events84->SetFillColor(ci);
   new_histo_group_top_hww2l2v_13TeV_DYin_1jmm_events84->SetFillStyle(3001);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_top_hww2l2v_13TeV_DYin_1jmm_events84->SetLineColor(ci);
   new_histo_group_top_hww2l2v_13TeV_DYin_1jmm_events84->GetXaxis()->SetLabelFont(42);
   new_histo_group_top_hww2l2v_13TeV_DYin_1jmm_events84->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_top_hww2l2v_13TeV_DYin_1jmm_events84->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_top_hww2l2v_13TeV_DYin_1jmm_events84->GetXaxis()->SetTitleFont(42);
   new_histo_group_top_hww2l2v_13TeV_DYin_1jmm_events84->GetYaxis()->SetLabelFont(42);
   new_histo_group_top_hww2l2v_13TeV_DYin_1jmm_events84->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_top_hww2l2v_13TeV_DYin_1jmm_events84->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_top_hww2l2v_13TeV_DYin_1jmm_events84->GetYaxis()->SetTitleFont(42);
   new_histo_group_top_hww2l2v_13TeV_DYin_1jmm_events84->GetZaxis()->SetLabelFont(42);
   new_histo_group_top_hww2l2v_13TeV_DYin_1jmm_events84->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_top_hww2l2v_13TeV_DYin_1jmm_events84->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_top_hww2l2v_13TeV_DYin_1jmm_events84->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_hww2l2v_13TeV_DYin_1jmm_events->Add(new_histo_group_top_hww2l2v_13TeV_DYin_1jmm_events,"");
   
   TH1D *new_histo_group_WW_hww2l2v_13TeV_DYin_1jmm_events85 = new TH1D("new_histo_group_WW_hww2l2v_13TeV_DYin_1jmm_events85","histo_WW",1,0,2);
   new_histo_group_WW_hww2l2v_13TeV_DYin_1jmm_events85->SetBinContent(1,152.1446);
   new_histo_group_WW_hww2l2v_13TeV_DYin_1jmm_events85->SetBinError(1,5.597712);
   new_histo_group_WW_hww2l2v_13TeV_DYin_1jmm_events85->SetEntries(1098);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_hww2l2v_13TeV_DYin_1jmm_events85->SetFillColor(ci);
   new_histo_group_WW_hww2l2v_13TeV_DYin_1jmm_events85->SetFillStyle(3001);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_hww2l2v_13TeV_DYin_1jmm_events85->SetLineColor(ci);
   new_histo_group_WW_hww2l2v_13TeV_DYin_1jmm_events85->GetXaxis()->SetLabelFont(42);
   new_histo_group_WW_hww2l2v_13TeV_DYin_1jmm_events85->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WW_hww2l2v_13TeV_DYin_1jmm_events85->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WW_hww2l2v_13TeV_DYin_1jmm_events85->GetXaxis()->SetTitleFont(42);
   new_histo_group_WW_hww2l2v_13TeV_DYin_1jmm_events85->GetYaxis()->SetLabelFont(42);
   new_histo_group_WW_hww2l2v_13TeV_DYin_1jmm_events85->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WW_hww2l2v_13TeV_DYin_1jmm_events85->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WW_hww2l2v_13TeV_DYin_1jmm_events85->GetYaxis()->SetTitleFont(42);
   new_histo_group_WW_hww2l2v_13TeV_DYin_1jmm_events85->GetZaxis()->SetLabelFont(42);
   new_histo_group_WW_hww2l2v_13TeV_DYin_1jmm_events85->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WW_hww2l2v_13TeV_DYin_1jmm_events85->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WW_hww2l2v_13TeV_DYin_1jmm_events85->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_hww2l2v_13TeV_DYin_1jmm_events->Add(new_histo_group_WW_hww2l2v_13TeV_DYin_1jmm_events,"");
   
   TH1D *new_histo_group_VVV_hww2l2v_13TeV_DYin_1jmm_events86 = new TH1D("new_histo_group_VVV_hww2l2v_13TeV_DYin_1jmm_events86","histo_VVV",1,0,2);
   new_histo_group_VVV_hww2l2v_13TeV_DYin_1jmm_events86->SetBinContent(1,3.304966);
   new_histo_group_VVV_hww2l2v_13TeV_DYin_1jmm_events86->SetBinError(1,0.2614318);
   new_histo_group_VVV_hww2l2v_13TeV_DYin_1jmm_events86->SetEntries(493);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_hww2l2v_13TeV_DYin_1jmm_events86->SetFillColor(ci);
   new_histo_group_VVV_hww2l2v_13TeV_DYin_1jmm_events86->SetFillStyle(3001);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_hww2l2v_13TeV_DYin_1jmm_events86->SetLineColor(ci);
   new_histo_group_VVV_hww2l2v_13TeV_DYin_1jmm_events86->GetXaxis()->SetLabelFont(42);
   new_histo_group_VVV_hww2l2v_13TeV_DYin_1jmm_events86->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_hww2l2v_13TeV_DYin_1jmm_events86->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_hww2l2v_13TeV_DYin_1jmm_events86->GetXaxis()->SetTitleFont(42);
   new_histo_group_VVV_hww2l2v_13TeV_DYin_1jmm_events86->GetYaxis()->SetLabelFont(42);
   new_histo_group_VVV_hww2l2v_13TeV_DYin_1jmm_events86->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_hww2l2v_13TeV_DYin_1jmm_events86->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_hww2l2v_13TeV_DYin_1jmm_events86->GetYaxis()->SetTitleFont(42);
   new_histo_group_VVV_hww2l2v_13TeV_DYin_1jmm_events86->GetZaxis()->SetLabelFont(42);
   new_histo_group_VVV_hww2l2v_13TeV_DYin_1jmm_events86->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_hww2l2v_13TeV_DYin_1jmm_events86->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_hww2l2v_13TeV_DYin_1jmm_events86->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_hww2l2v_13TeV_DYin_1jmm_events->Add(new_histo_group_VVV_hww2l2v_13TeV_DYin_1jmm_events,"");
   
   TH1D *new_histo_group_VZ_hww2l2v_13TeV_DYin_1jmm_events87 = new TH1D("new_histo_group_VZ_hww2l2v_13TeV_DYin_1jmm_events87","histo_Vg",1,0,2);
   new_histo_group_VZ_hww2l2v_13TeV_DYin_1jmm_events87->SetBinContent(1,427.2961);
   new_histo_group_VZ_hww2l2v_13TeV_DYin_1jmm_events87->SetBinError(1,4.456189);
   new_histo_group_VZ_hww2l2v_13TeV_DYin_1jmm_events87->SetEntries(92436);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_VZ_hww2l2v_13TeV_DYin_1jmm_events87->SetFillColor(ci);
   new_histo_group_VZ_hww2l2v_13TeV_DYin_1jmm_events87->SetFillStyle(3001);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_VZ_hww2l2v_13TeV_DYin_1jmm_events87->SetLineColor(ci);
   new_histo_group_VZ_hww2l2v_13TeV_DYin_1jmm_events87->GetXaxis()->SetLabelFont(42);
   new_histo_group_VZ_hww2l2v_13TeV_DYin_1jmm_events87->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_VZ_hww2l2v_13TeV_DYin_1jmm_events87->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_VZ_hww2l2v_13TeV_DYin_1jmm_events87->GetXaxis()->SetTitleFont(42);
   new_histo_group_VZ_hww2l2v_13TeV_DYin_1jmm_events87->GetYaxis()->SetLabelFont(42);
   new_histo_group_VZ_hww2l2v_13TeV_DYin_1jmm_events87->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_VZ_hww2l2v_13TeV_DYin_1jmm_events87->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_VZ_hww2l2v_13TeV_DYin_1jmm_events87->GetYaxis()->SetTitleFont(42);
   new_histo_group_VZ_hww2l2v_13TeV_DYin_1jmm_events87->GetZaxis()->SetLabelFont(42);
   new_histo_group_VZ_hww2l2v_13TeV_DYin_1jmm_events87->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_VZ_hww2l2v_13TeV_DYin_1jmm_events87->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_VZ_hww2l2v_13TeV_DYin_1jmm_events87->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_hww2l2v_13TeV_DYin_1jmm_events->Add(new_histo_group_VZ_hww2l2v_13TeV_DYin_1jmm_events,"");
   
   TH1D *new_histo_group_Higgs_hww2l2v_13TeV_DYin_1jmm_events88 = new TH1D("new_histo_group_Higgs_hww2l2v_13TeV_DYin_1jmm_events88","histo_H_htt",1,0,2);
   new_histo_group_Higgs_hww2l2v_13TeV_DYin_1jmm_events88->SetBinContent(1,1.623859);
   new_histo_group_Higgs_hww2l2v_13TeV_DYin_1jmm_events88->SetBinError(1,0.178533);
   new_histo_group_Higgs_hww2l2v_13TeV_DYin_1jmm_events88->SetEntries(140);
   new_histo_group_Higgs_hww2l2v_13TeV_DYin_1jmm_events88->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_hww2l2v_13TeV_DYin_1jmm_events88->SetLineColor(ci);
   new_histo_group_Higgs_hww2l2v_13TeV_DYin_1jmm_events88->SetLineWidth(2);
   new_histo_group_Higgs_hww2l2v_13TeV_DYin_1jmm_events88->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_hww2l2v_13TeV_DYin_1jmm_events88->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_hww2l2v_13TeV_DYin_1jmm_events88->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_hww2l2v_13TeV_DYin_1jmm_events88->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_hww2l2v_13TeV_DYin_1jmm_events88->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_hww2l2v_13TeV_DYin_1jmm_events88->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_hww2l2v_13TeV_DYin_1jmm_events88->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_hww2l2v_13TeV_DYin_1jmm_events88->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_hww2l2v_13TeV_DYin_1jmm_events88->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_hww2l2v_13TeV_DYin_1jmm_events88->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_hww2l2v_13TeV_DYin_1jmm_events88->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_hww2l2v_13TeV_DYin_1jmm_events88->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_hww2l2v_13TeV_DYin_1jmm_events->Add(new_histo_group_Higgs_hww2l2v_13TeV_DYin_1jmm_events,"");
   thsBackground_grouped_hww2l2v_13TeV_DYin_1jmm_events->Draw("hist same");
   
   thsSignal_grouped_hww2l2v_13TeV_DYin_1jmm_events = new THStack();
   thsSignal_grouped_hww2l2v_13TeV_DYin_1jmm_events->SetName("thsSignal_grouped_hww2l2v_13TeV_DYin_1jmm_events");
   thsSignal_grouped_hww2l2v_13TeV_DYin_1jmm_events->SetTitle("thsSignal_grouped_hww2l2v_13TeV_DYin_1jmm_events");
   
   TH1F *thsSignal_grouped_hww2l2v_13TeV_DYin_1jmm_events_stack_20 = new TH1F("thsSignal_grouped_hww2l2v_13TeV_DYin_1jmm_events_stack_20","thsSignal_grouped_hww2l2v_13TeV_DYin_1jmm_events",1,0,2);
   thsSignal_grouped_hww2l2v_13TeV_DYin_1jmm_events_stack_20->SetMinimum(0);
   thsSignal_grouped_hww2l2v_13TeV_DYin_1jmm_events_stack_20->SetMaximum(1.892512);
   thsSignal_grouped_hww2l2v_13TeV_DYin_1jmm_events_stack_20->SetDirectory(0);
   thsSignal_grouped_hww2l2v_13TeV_DYin_1jmm_events_stack_20->SetStats(0);
   thsSignal_grouped_hww2l2v_13TeV_DYin_1jmm_events_stack_20->SetLineStyle(0);
   thsSignal_grouped_hww2l2v_13TeV_DYin_1jmm_events_stack_20->SetMarkerStyle(20);
   thsSignal_grouped_hww2l2v_13TeV_DYin_1jmm_events_stack_20->GetXaxis()->SetLabelFont(42);
   thsSignal_grouped_hww2l2v_13TeV_DYin_1jmm_events_stack_20->GetXaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_hww2l2v_13TeV_DYin_1jmm_events_stack_20->GetXaxis()->SetLabelSize(0.05);
   thsSignal_grouped_hww2l2v_13TeV_DYin_1jmm_events_stack_20->GetXaxis()->SetTitleSize(0.06);
   thsSignal_grouped_hww2l2v_13TeV_DYin_1jmm_events_stack_20->GetXaxis()->SetTitleOffset(0.9);
   thsSignal_grouped_hww2l2v_13TeV_DYin_1jmm_events_stack_20->GetXaxis()->SetTitleFont(42);
   thsSignal_grouped_hww2l2v_13TeV_DYin_1jmm_events_stack_20->GetYaxis()->SetLabelFont(42);
   thsSignal_grouped_hww2l2v_13TeV_DYin_1jmm_events_stack_20->GetYaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_hww2l2v_13TeV_DYin_1jmm_events_stack_20->GetYaxis()->SetLabelSize(0.05);
   thsSignal_grouped_hww2l2v_13TeV_DYin_1jmm_events_stack_20->GetYaxis()->SetTitleSize(0.06);
   thsSignal_grouped_hww2l2v_13TeV_DYin_1jmm_events_stack_20->GetYaxis()->SetTitleOffset(1.25);
   thsSignal_grouped_hww2l2v_13TeV_DYin_1jmm_events_stack_20->GetYaxis()->SetTitleFont(42);
   thsSignal_grouped_hww2l2v_13TeV_DYin_1jmm_events_stack_20->GetZaxis()->SetLabelFont(42);
   thsSignal_grouped_hww2l2v_13TeV_DYin_1jmm_events_stack_20->GetZaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_hww2l2v_13TeV_DYin_1jmm_events_stack_20->GetZaxis()->SetLabelSize(0.05);
   thsSignal_grouped_hww2l2v_13TeV_DYin_1jmm_events_stack_20->GetZaxis()->SetTitleSize(0.06);
   thsSignal_grouped_hww2l2v_13TeV_DYin_1jmm_events_stack_20->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_hww2l2v_13TeV_DYin_1jmm_events->SetHistogram(thsSignal_grouped_hww2l2v_13TeV_DYin_1jmm_events_stack_20);
   
   
   TH1D *new_histo_group_Higgs_hww2l2v_13TeV_DYin_1jmm_events89 = new TH1D("new_histo_group_Higgs_hww2l2v_13TeV_DYin_1jmm_events89","histo_H_htt",1,0,2);
   new_histo_group_Higgs_hww2l2v_13TeV_DYin_1jmm_events89->SetBinContent(1,1.623859);
   new_histo_group_Higgs_hww2l2v_13TeV_DYin_1jmm_events89->SetBinError(1,0.178533);
   new_histo_group_Higgs_hww2l2v_13TeV_DYin_1jmm_events89->SetEntries(140);
   new_histo_group_Higgs_hww2l2v_13TeV_DYin_1jmm_events89->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_hww2l2v_13TeV_DYin_1jmm_events89->SetLineColor(ci);
   new_histo_group_Higgs_hww2l2v_13TeV_DYin_1jmm_events89->SetLineWidth(2);
   new_histo_group_Higgs_hww2l2v_13TeV_DYin_1jmm_events89->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_hww2l2v_13TeV_DYin_1jmm_events89->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_hww2l2v_13TeV_DYin_1jmm_events89->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_hww2l2v_13TeV_DYin_1jmm_events89->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_hww2l2v_13TeV_DYin_1jmm_events89->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_hww2l2v_13TeV_DYin_1jmm_events89->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_hww2l2v_13TeV_DYin_1jmm_events89->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_hww2l2v_13TeV_DYin_1jmm_events89->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_hww2l2v_13TeV_DYin_1jmm_events89->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_hww2l2v_13TeV_DYin_1jmm_events89->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_hww2l2v_13TeV_DYin_1jmm_events89->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_hww2l2v_13TeV_DYin_1jmm_events89->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_hww2l2v_13TeV_DYin_1jmm_events->Add(new_histo_group_Higgs_hww2l2v_13TeV_DYin_1jmm_events,"");
   thsSignal_grouped_hww2l2v_13TeV_DYin_1jmm_events->Draw("hist same noclear");
   
   Double_t _fx3014[1] = {
   1};
   Double_t _fy3014[1] = {
   3903};
   Double_t _felx3014[1] = {
   1};
   Double_t _fely3014[1] = {
   62.47267};
   Double_t _fehx3014[1] = {
   1};
   Double_t _fehy3014[1] = {
   63.4807};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(1,_fx3014,_fy3014,_felx3014,_fehx3014,_fely3014,_fehy3014);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(1);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3014 = new TH1F("Graph_Graph3014","",100,0,2.2);
   Graph_Graph3014->SetMinimum(3827.932);
   Graph_Graph3014->SetMaximum(3979.076);
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
   TLegendEntry *entry=leg->AddEntry("new_histo_group_DY_hww2l2v_13TeV_DYin_1jmm_events","DY","F");

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
   entry=leg->AddEntry("new_histo_group_top_hww2l2v_13TeV_DYin_1jmm_events","tW and t#bart","F");

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
   entry=leg->AddEntry("new_histo_group_WW_hww2l2v_13TeV_DYin_1jmm_events","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_hww2l2v_13TeV_DYin_1jmm_events","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_VZ_hww2l2v_13TeV_DYin_1jmm_events","VZ/#gamma*/#gamma","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_hww2l2v_13TeV_DYin_1jmm_events","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_hww2l2v_13TeV_DYin_1jmm_events","Data","EPL");
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
   entry=leg->AddEntry("new_histo_group_DY_hww2l2v_13TeV_DYin_1jmm_events","DY","F");

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
   entry=leg->AddEntry("new_histo_group_top_hww2l2v_13TeV_DYin_1jmm_events","tW and t#bart","F");

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
   entry=leg->AddEntry("new_histo_group_WW_hww2l2v_13TeV_DYin_1jmm_events","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_hww2l2v_13TeV_DYin_1jmm_events","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_VZ_hww2l2v_13TeV_DYin_1jmm_events","VZ/#gamma*/#gamma","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_hww2l2v_13TeV_DYin_1jmm_events","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_hww2l2v_13TeV_DYin_1jmm_events","Data","EPL");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   leg->Draw();
   
   TH1F *hframe_copy90 = new TH1F("hframe_copy90","",1000,0,2);
   hframe_copy90->SetMinimum(0);
   hframe_copy90->SetMaximum(9913.685);
   hframe_copy90->SetDirectory(0);
   hframe_copy90->SetStats(0);
   hframe_copy90->SetLineStyle(0);
   hframe_copy90->SetMarkerStyle(20);
   hframe_copy90->GetXaxis()->SetTitle("events");
   hframe_copy90->GetXaxis()->SetNdivisions(506);
   hframe_copy90->GetXaxis()->SetLabelFont(42);
   hframe_copy90->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy90->GetXaxis()->SetLabelSize(0.05);
   hframe_copy90->GetXaxis()->SetTitleSize(0.06);
   hframe_copy90->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy90->GetXaxis()->SetTitleFont(42);
   hframe_copy90->GetYaxis()->SetTitle("Events");
   hframe_copy90->GetYaxis()->SetLabelFont(42);
   hframe_copy90->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy90->GetYaxis()->SetLabelSize(0.05);
   hframe_copy90->GetYaxis()->SetTitleSize(0.06);
   hframe_copy90->GetYaxis()->SetTitleOffset(1.25);
   hframe_copy90->GetYaxis()->SetTitleFont(42);
   hframe_copy90->GetZaxis()->SetLabelFont(42);
   hframe_copy90->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy90->GetZaxis()->SetLabelSize(0.05);
   hframe_copy90->GetZaxis()->SetTitleSize(0.06);
   hframe_copy90->GetZaxis()->SetTitleFont(42);
   hframe_copy90->Draw("sameaxis");
   cchww2l2v_13TeV_DYin_1jmm_events->Modified();
   cchww2l2v_13TeV_DYin_1jmm_events->cd();
   cchww2l2v_13TeV_DYin_1jmm_events->SetSelected(cchww2l2v_13TeV_DYin_1jmm_events);
}
