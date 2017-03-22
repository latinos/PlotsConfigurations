void c_hww2l2v_13TeV_DYin_1jdf_events()
{
//=========Macro generated from canvas: cchww2l2v_13TeV_DYin_1jdf_events/cc
//=========  (Tue Mar 21 11:46:33 2017) by ROOT version6.02/13
   TCanvas *cchww2l2v_13TeV_DYin_1jdf_events = new TCanvas("cchww2l2v_13TeV_DYin_1jdf_events", "cc",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   cchww2l2v_13TeV_DYin_1jdf_events->SetHighLightColor(2);
   cchww2l2v_13TeV_DYin_1jdf_events->Range(-0.4,-181.4866,2.1,1214.564);
   cchww2l2v_13TeV_DYin_1jdf_events->SetFillColor(0);
   cchww2l2v_13TeV_DYin_1jdf_events->SetBorderMode(0);
   cchww2l2v_13TeV_DYin_1jdf_events->SetBorderSize(2);
   cchww2l2v_13TeV_DYin_1jdf_events->SetTickx(1);
   cchww2l2v_13TeV_DYin_1jdf_events->SetTicky(1);
   cchww2l2v_13TeV_DYin_1jdf_events->SetLeftMargin(0.16);
   cchww2l2v_13TeV_DYin_1jdf_events->SetRightMargin(0.04);
   cchww2l2v_13TeV_DYin_1jdf_events->SetTopMargin(0.05);
   cchww2l2v_13TeV_DYin_1jdf_events->SetBottomMargin(0.13);
   cchww2l2v_13TeV_DYin_1jdf_events->SetFrameFillStyle(0);
   cchww2l2v_13TeV_DYin_1jdf_events->SetFrameBorderMode(0);
   cchww2l2v_13TeV_DYin_1jdf_events->SetFrameFillStyle(0);
   cchww2l2v_13TeV_DYin_1jdf_events->SetFrameBorderMode(0);
   
   TH1F *hframe190 = new TH1F("hframe190","",1000,0,2);
   hframe190->SetMinimum(0);
   hframe190->SetMaximum(1144.761);
   hframe190->SetDirectory(0);
   hframe190->SetStats(0);
   hframe190->SetLineStyle(0);
   hframe190->SetMarkerStyle(20);
   hframe190->GetXaxis()->SetTitle("events");
   hframe190->GetXaxis()->SetNdivisions(506);
   hframe190->GetXaxis()->SetLabelFont(42);
   hframe190->GetXaxis()->SetLabelOffset(0.007);
   hframe190->GetXaxis()->SetLabelSize(0.05);
   hframe190->GetXaxis()->SetTitleSize(0.06);
   hframe190->GetXaxis()->SetTitleOffset(0.9);
   hframe190->GetXaxis()->SetTitleFont(42);
   hframe190->GetYaxis()->SetTitle("Events");
   hframe190->GetYaxis()->SetLabelFont(42);
   hframe190->GetYaxis()->SetLabelOffset(0.007);
   hframe190->GetYaxis()->SetLabelSize(0.05);
   hframe190->GetYaxis()->SetTitleSize(0.06);
   hframe190->GetYaxis()->SetTitleOffset(1.25);
   hframe190->GetYaxis()->SetTitleFont(42);
   hframe190->GetZaxis()->SetLabelFont(42);
   hframe190->GetZaxis()->SetLabelOffset(0.007);
   hframe190->GetZaxis()->SetLabelSize(0.05);
   hframe190->GetZaxis()->SetTitleSize(0.06);
   hframe190->GetZaxis()->SetTitleFont(42);
   hframe190->Draw(" ");
   
   THStack *thsBackground_grouped_hww2l2v_13TeV_DYin_1jdf_events = new THStack();
   thsBackground_grouped_hww2l2v_13TeV_DYin_1jdf_events->SetName("thsBackground_grouped_hww2l2v_13TeV_DYin_1jdf_events");
   thsBackground_grouped_hww2l2v_13TeV_DYin_1jdf_events->SetTitle("thsBackground_grouped_hww2l2v_13TeV_DYin_1jdf_events");
   
   TH1F *thsBackground_grouped_hww2l2v_13TeV_DYin_1jdf_events_stack_43 = new TH1F("thsBackground_grouped_hww2l2v_13TeV_DYin_1jdf_events_stack_43","thsBackground_grouped_hww2l2v_13TeV_DYin_1jdf_events",1,0,2);
   thsBackground_grouped_hww2l2v_13TeV_DYin_1jdf_events_stack_43->SetMinimum(0);
   thsBackground_grouped_hww2l2v_13TeV_DYin_1jdf_events_stack_43->SetMaximum(412.4766);
   thsBackground_grouped_hww2l2v_13TeV_DYin_1jdf_events_stack_43->SetDirectory(0);
   thsBackground_grouped_hww2l2v_13TeV_DYin_1jdf_events_stack_43->SetStats(0);
   thsBackground_grouped_hww2l2v_13TeV_DYin_1jdf_events_stack_43->SetLineStyle(0);
   thsBackground_grouped_hww2l2v_13TeV_DYin_1jdf_events_stack_43->SetMarkerStyle(20);
   thsBackground_grouped_hww2l2v_13TeV_DYin_1jdf_events_stack_43->GetXaxis()->SetLabelFont(42);
   thsBackground_grouped_hww2l2v_13TeV_DYin_1jdf_events_stack_43->GetXaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_hww2l2v_13TeV_DYin_1jdf_events_stack_43->GetXaxis()->SetLabelSize(0.05);
   thsBackground_grouped_hww2l2v_13TeV_DYin_1jdf_events_stack_43->GetXaxis()->SetTitleSize(0.06);
   thsBackground_grouped_hww2l2v_13TeV_DYin_1jdf_events_stack_43->GetXaxis()->SetTitleOffset(0.9);
   thsBackground_grouped_hww2l2v_13TeV_DYin_1jdf_events_stack_43->GetXaxis()->SetTitleFont(42);
   thsBackground_grouped_hww2l2v_13TeV_DYin_1jdf_events_stack_43->GetYaxis()->SetLabelFont(42);
   thsBackground_grouped_hww2l2v_13TeV_DYin_1jdf_events_stack_43->GetYaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_hww2l2v_13TeV_DYin_1jdf_events_stack_43->GetYaxis()->SetLabelSize(0.05);
   thsBackground_grouped_hww2l2v_13TeV_DYin_1jdf_events_stack_43->GetYaxis()->SetTitleSize(0.06);
   thsBackground_grouped_hww2l2v_13TeV_DYin_1jdf_events_stack_43->GetYaxis()->SetTitleOffset(1.25);
   thsBackground_grouped_hww2l2v_13TeV_DYin_1jdf_events_stack_43->GetYaxis()->SetTitleFont(42);
   thsBackground_grouped_hww2l2v_13TeV_DYin_1jdf_events_stack_43->GetZaxis()->SetLabelFont(42);
   thsBackground_grouped_hww2l2v_13TeV_DYin_1jdf_events_stack_43->GetZaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_hww2l2v_13TeV_DYin_1jdf_events_stack_43->GetZaxis()->SetLabelSize(0.05);
   thsBackground_grouped_hww2l2v_13TeV_DYin_1jdf_events_stack_43->GetZaxis()->SetTitleSize(0.06);
   thsBackground_grouped_hww2l2v_13TeV_DYin_1jdf_events_stack_43->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_hww2l2v_13TeV_DYin_1jdf_events->SetHistogram(thsBackground_grouped_hww2l2v_13TeV_DYin_1jdf_events_stack_43);
   
   
   TH1D *new_histo_group_DY_hww2l2v_13TeV_DYin_1jdf_events191 = new TH1D("new_histo_group_DY_hww2l2v_13TeV_DYin_1jdf_events191","histo_DY",1,0,2);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#009900");
   new_histo_group_DY_hww2l2v_13TeV_DYin_1jdf_events191->SetFillColor(ci);
   new_histo_group_DY_hww2l2v_13TeV_DYin_1jdf_events191->SetFillStyle(3001);

   ci = TColor::GetColor("#009900");
   new_histo_group_DY_hww2l2v_13TeV_DYin_1jdf_events191->SetLineColor(ci);
   new_histo_group_DY_hww2l2v_13TeV_DYin_1jdf_events191->GetXaxis()->SetLabelFont(42);
   new_histo_group_DY_hww2l2v_13TeV_DYin_1jdf_events191->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_DY_hww2l2v_13TeV_DYin_1jdf_events191->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_DY_hww2l2v_13TeV_DYin_1jdf_events191->GetXaxis()->SetTitleFont(42);
   new_histo_group_DY_hww2l2v_13TeV_DYin_1jdf_events191->GetYaxis()->SetLabelFont(42);
   new_histo_group_DY_hww2l2v_13TeV_DYin_1jdf_events191->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_DY_hww2l2v_13TeV_DYin_1jdf_events191->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_DY_hww2l2v_13TeV_DYin_1jdf_events191->GetYaxis()->SetTitleFont(42);
   new_histo_group_DY_hww2l2v_13TeV_DYin_1jdf_events191->GetZaxis()->SetLabelFont(42);
   new_histo_group_DY_hww2l2v_13TeV_DYin_1jdf_events191->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_DY_hww2l2v_13TeV_DYin_1jdf_events191->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_DY_hww2l2v_13TeV_DYin_1jdf_events191->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_hww2l2v_13TeV_DYin_1jdf_events->Add(new_histo_group_DY_hww2l2v_13TeV_DYin_1jdf_events,"");
   
   TH1D *new_histo_group_top_hww2l2v_13TeV_DYin_1jdf_events192 = new TH1D("new_histo_group_top_hww2l2v_13TeV_DYin_1jdf_events192","histo_top",1,0,2);
   new_histo_group_top_hww2l2v_13TeV_DYin_1jdf_events192->SetBinContent(1,200.7144);
   new_histo_group_top_hww2l2v_13TeV_DYin_1jdf_events192->SetBinError(1,2.953248);
   new_histo_group_top_hww2l2v_13TeV_DYin_1jdf_events192->SetEntries(5095);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_top_hww2l2v_13TeV_DYin_1jdf_events192->SetFillColor(ci);
   new_histo_group_top_hww2l2v_13TeV_DYin_1jdf_events192->SetFillStyle(3001);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_top_hww2l2v_13TeV_DYin_1jdf_events192->SetLineColor(ci);
   new_histo_group_top_hww2l2v_13TeV_DYin_1jdf_events192->GetXaxis()->SetLabelFont(42);
   new_histo_group_top_hww2l2v_13TeV_DYin_1jdf_events192->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_top_hww2l2v_13TeV_DYin_1jdf_events192->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_top_hww2l2v_13TeV_DYin_1jdf_events192->GetXaxis()->SetTitleFont(42);
   new_histo_group_top_hww2l2v_13TeV_DYin_1jdf_events192->GetYaxis()->SetLabelFont(42);
   new_histo_group_top_hww2l2v_13TeV_DYin_1jdf_events192->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_top_hww2l2v_13TeV_DYin_1jdf_events192->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_top_hww2l2v_13TeV_DYin_1jdf_events192->GetYaxis()->SetTitleFont(42);
   new_histo_group_top_hww2l2v_13TeV_DYin_1jdf_events192->GetZaxis()->SetLabelFont(42);
   new_histo_group_top_hww2l2v_13TeV_DYin_1jdf_events192->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_top_hww2l2v_13TeV_DYin_1jdf_events192->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_top_hww2l2v_13TeV_DYin_1jdf_events192->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_hww2l2v_13TeV_DYin_1jdf_events->Add(new_histo_group_top_hww2l2v_13TeV_DYin_1jdf_events,"");
   
   TH1D *new_histo_group_WW_hww2l2v_13TeV_DYin_1jdf_events193 = new TH1D("new_histo_group_WW_hww2l2v_13TeV_DYin_1jdf_events193","histo_WW",1,0,2);
   new_histo_group_WW_hww2l2v_13TeV_DYin_1jdf_events193->SetBinContent(1,182.2316);
   new_histo_group_WW_hww2l2v_13TeV_DYin_1jdf_events193->SetBinError(1,6.003846);
   new_histo_group_WW_hww2l2v_13TeV_DYin_1jdf_events193->SetEntries(1315);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_hww2l2v_13TeV_DYin_1jdf_events193->SetFillColor(ci);
   new_histo_group_WW_hww2l2v_13TeV_DYin_1jdf_events193->SetFillStyle(3001);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_hww2l2v_13TeV_DYin_1jdf_events193->SetLineColor(ci);
   new_histo_group_WW_hww2l2v_13TeV_DYin_1jdf_events193->GetXaxis()->SetLabelFont(42);
   new_histo_group_WW_hww2l2v_13TeV_DYin_1jdf_events193->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WW_hww2l2v_13TeV_DYin_1jdf_events193->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WW_hww2l2v_13TeV_DYin_1jdf_events193->GetXaxis()->SetTitleFont(42);
   new_histo_group_WW_hww2l2v_13TeV_DYin_1jdf_events193->GetYaxis()->SetLabelFont(42);
   new_histo_group_WW_hww2l2v_13TeV_DYin_1jdf_events193->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WW_hww2l2v_13TeV_DYin_1jdf_events193->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WW_hww2l2v_13TeV_DYin_1jdf_events193->GetYaxis()->SetTitleFont(42);
   new_histo_group_WW_hww2l2v_13TeV_DYin_1jdf_events193->GetZaxis()->SetLabelFont(42);
   new_histo_group_WW_hww2l2v_13TeV_DYin_1jdf_events193->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WW_hww2l2v_13TeV_DYin_1jdf_events193->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WW_hww2l2v_13TeV_DYin_1jdf_events193->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_hww2l2v_13TeV_DYin_1jdf_events->Add(new_histo_group_WW_hww2l2v_13TeV_DYin_1jdf_events,"");
   
   TH1D *new_histo_group_VVV_hww2l2v_13TeV_DYin_1jdf_events194 = new TH1D("new_histo_group_VVV_hww2l2v_13TeV_DYin_1jdf_events194","histo_VVV",1,0,2);
   new_histo_group_VVV_hww2l2v_13TeV_DYin_1jdf_events194->SetBinContent(1,0.7033262);
   new_histo_group_VVV_hww2l2v_13TeV_DYin_1jdf_events194->SetBinError(1,0.1391799);
   new_histo_group_VVV_hww2l2v_13TeV_DYin_1jdf_events194->SetEntries(29);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_hww2l2v_13TeV_DYin_1jdf_events194->SetFillColor(ci);
   new_histo_group_VVV_hww2l2v_13TeV_DYin_1jdf_events194->SetFillStyle(3001);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_hww2l2v_13TeV_DYin_1jdf_events194->SetLineColor(ci);
   new_histo_group_VVV_hww2l2v_13TeV_DYin_1jdf_events194->GetXaxis()->SetLabelFont(42);
   new_histo_group_VVV_hww2l2v_13TeV_DYin_1jdf_events194->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_hww2l2v_13TeV_DYin_1jdf_events194->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_hww2l2v_13TeV_DYin_1jdf_events194->GetXaxis()->SetTitleFont(42);
   new_histo_group_VVV_hww2l2v_13TeV_DYin_1jdf_events194->GetYaxis()->SetLabelFont(42);
   new_histo_group_VVV_hww2l2v_13TeV_DYin_1jdf_events194->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_hww2l2v_13TeV_DYin_1jdf_events194->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_hww2l2v_13TeV_DYin_1jdf_events194->GetYaxis()->SetTitleFont(42);
   new_histo_group_VVV_hww2l2v_13TeV_DYin_1jdf_events194->GetZaxis()->SetLabelFont(42);
   new_histo_group_VVV_hww2l2v_13TeV_DYin_1jdf_events194->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_hww2l2v_13TeV_DYin_1jdf_events194->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_hww2l2v_13TeV_DYin_1jdf_events194->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_hww2l2v_13TeV_DYin_1jdf_events->Add(new_histo_group_VVV_hww2l2v_13TeV_DYin_1jdf_events,"");
   
   TH1D *new_histo_group_VZ_hww2l2v_13TeV_DYin_1jdf_events195 = new TH1D("new_histo_group_VZ_hww2l2v_13TeV_DYin_1jdf_events195","histo_Vg",1,0,2);
   new_histo_group_VZ_hww2l2v_13TeV_DYin_1jdf_events195->SetBinContent(1,8.730898);
   new_histo_group_VZ_hww2l2v_13TeV_DYin_1jdf_events195->SetBinError(1,0.8100293);
   new_histo_group_VZ_hww2l2v_13TeV_DYin_1jdf_events195->SetEntries(143);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_VZ_hww2l2v_13TeV_DYin_1jdf_events195->SetFillColor(ci);
   new_histo_group_VZ_hww2l2v_13TeV_DYin_1jdf_events195->SetFillStyle(3001);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_VZ_hww2l2v_13TeV_DYin_1jdf_events195->SetLineColor(ci);
   new_histo_group_VZ_hww2l2v_13TeV_DYin_1jdf_events195->GetXaxis()->SetLabelFont(42);
   new_histo_group_VZ_hww2l2v_13TeV_DYin_1jdf_events195->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_VZ_hww2l2v_13TeV_DYin_1jdf_events195->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_VZ_hww2l2v_13TeV_DYin_1jdf_events195->GetXaxis()->SetTitleFont(42);
   new_histo_group_VZ_hww2l2v_13TeV_DYin_1jdf_events195->GetYaxis()->SetLabelFont(42);
   new_histo_group_VZ_hww2l2v_13TeV_DYin_1jdf_events195->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_VZ_hww2l2v_13TeV_DYin_1jdf_events195->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_VZ_hww2l2v_13TeV_DYin_1jdf_events195->GetYaxis()->SetTitleFont(42);
   new_histo_group_VZ_hww2l2v_13TeV_DYin_1jdf_events195->GetZaxis()->SetLabelFont(42);
   new_histo_group_VZ_hww2l2v_13TeV_DYin_1jdf_events195->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_VZ_hww2l2v_13TeV_DYin_1jdf_events195->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_VZ_hww2l2v_13TeV_DYin_1jdf_events195->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_hww2l2v_13TeV_DYin_1jdf_events->Add(new_histo_group_VZ_hww2l2v_13TeV_DYin_1jdf_events,"");
   
   TH1D *new_histo_group_Higgs_hww2l2v_13TeV_DYin_1jdf_events196 = new TH1D("new_histo_group_Higgs_hww2l2v_13TeV_DYin_1jdf_events196","histo_H_htt",1,0,2);
   new_histo_group_Higgs_hww2l2v_13TeV_DYin_1jdf_events196->SetBinContent(1,0.4546337);
   new_histo_group_Higgs_hww2l2v_13TeV_DYin_1jdf_events196->SetBinError(1,0.08673786);
   new_histo_group_Higgs_hww2l2v_13TeV_DYin_1jdf_events196->SetEntries(31);
   new_histo_group_Higgs_hww2l2v_13TeV_DYin_1jdf_events196->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_hww2l2v_13TeV_DYin_1jdf_events196->SetLineColor(ci);
   new_histo_group_Higgs_hww2l2v_13TeV_DYin_1jdf_events196->SetLineWidth(2);
   new_histo_group_Higgs_hww2l2v_13TeV_DYin_1jdf_events196->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_hww2l2v_13TeV_DYin_1jdf_events196->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_hww2l2v_13TeV_DYin_1jdf_events196->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_hww2l2v_13TeV_DYin_1jdf_events196->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_hww2l2v_13TeV_DYin_1jdf_events196->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_hww2l2v_13TeV_DYin_1jdf_events196->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_hww2l2v_13TeV_DYin_1jdf_events196->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_hww2l2v_13TeV_DYin_1jdf_events196->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_hww2l2v_13TeV_DYin_1jdf_events196->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_hww2l2v_13TeV_DYin_1jdf_events196->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_hww2l2v_13TeV_DYin_1jdf_events196->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_hww2l2v_13TeV_DYin_1jdf_events196->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_hww2l2v_13TeV_DYin_1jdf_events->Add(new_histo_group_Higgs_hww2l2v_13TeV_DYin_1jdf_events,"");
   thsBackground_grouped_hww2l2v_13TeV_DYin_1jdf_events->Draw("hist same");
   
   thsSignal_grouped_hww2l2v_13TeV_DYin_1jdf_events = new THStack();
   thsSignal_grouped_hww2l2v_13TeV_DYin_1jdf_events->SetName("thsSignal_grouped_hww2l2v_13TeV_DYin_1jdf_events");
   thsSignal_grouped_hww2l2v_13TeV_DYin_1jdf_events->SetTitle("thsSignal_grouped_hww2l2v_13TeV_DYin_1jdf_events");
   
   TH1F *thsSignal_grouped_hww2l2v_13TeV_DYin_1jdf_events_stack_44 = new TH1F("thsSignal_grouped_hww2l2v_13TeV_DYin_1jdf_events_stack_44","thsSignal_grouped_hww2l2v_13TeV_DYin_1jdf_events",1,0,2);
   thsSignal_grouped_hww2l2v_13TeV_DYin_1jdf_events_stack_44->SetMinimum(0);
   thsSignal_grouped_hww2l2v_13TeV_DYin_1jdf_events_stack_44->SetMaximum(0.5684402);
   thsSignal_grouped_hww2l2v_13TeV_DYin_1jdf_events_stack_44->SetDirectory(0);
   thsSignal_grouped_hww2l2v_13TeV_DYin_1jdf_events_stack_44->SetStats(0);
   thsSignal_grouped_hww2l2v_13TeV_DYin_1jdf_events_stack_44->SetLineStyle(0);
   thsSignal_grouped_hww2l2v_13TeV_DYin_1jdf_events_stack_44->SetMarkerStyle(20);
   thsSignal_grouped_hww2l2v_13TeV_DYin_1jdf_events_stack_44->GetXaxis()->SetLabelFont(42);
   thsSignal_grouped_hww2l2v_13TeV_DYin_1jdf_events_stack_44->GetXaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_hww2l2v_13TeV_DYin_1jdf_events_stack_44->GetXaxis()->SetLabelSize(0.05);
   thsSignal_grouped_hww2l2v_13TeV_DYin_1jdf_events_stack_44->GetXaxis()->SetTitleSize(0.06);
   thsSignal_grouped_hww2l2v_13TeV_DYin_1jdf_events_stack_44->GetXaxis()->SetTitleOffset(0.9);
   thsSignal_grouped_hww2l2v_13TeV_DYin_1jdf_events_stack_44->GetXaxis()->SetTitleFont(42);
   thsSignal_grouped_hww2l2v_13TeV_DYin_1jdf_events_stack_44->GetYaxis()->SetLabelFont(42);
   thsSignal_grouped_hww2l2v_13TeV_DYin_1jdf_events_stack_44->GetYaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_hww2l2v_13TeV_DYin_1jdf_events_stack_44->GetYaxis()->SetLabelSize(0.05);
   thsSignal_grouped_hww2l2v_13TeV_DYin_1jdf_events_stack_44->GetYaxis()->SetTitleSize(0.06);
   thsSignal_grouped_hww2l2v_13TeV_DYin_1jdf_events_stack_44->GetYaxis()->SetTitleOffset(1.25);
   thsSignal_grouped_hww2l2v_13TeV_DYin_1jdf_events_stack_44->GetYaxis()->SetTitleFont(42);
   thsSignal_grouped_hww2l2v_13TeV_DYin_1jdf_events_stack_44->GetZaxis()->SetLabelFont(42);
   thsSignal_grouped_hww2l2v_13TeV_DYin_1jdf_events_stack_44->GetZaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_hww2l2v_13TeV_DYin_1jdf_events_stack_44->GetZaxis()->SetLabelSize(0.05);
   thsSignal_grouped_hww2l2v_13TeV_DYin_1jdf_events_stack_44->GetZaxis()->SetTitleSize(0.06);
   thsSignal_grouped_hww2l2v_13TeV_DYin_1jdf_events_stack_44->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_hww2l2v_13TeV_DYin_1jdf_events->SetHistogram(thsSignal_grouped_hww2l2v_13TeV_DYin_1jdf_events_stack_44);
   
   
   TH1D *new_histo_group_Higgs_hww2l2v_13TeV_DYin_1jdf_events197 = new TH1D("new_histo_group_Higgs_hww2l2v_13TeV_DYin_1jdf_events197","histo_H_htt",1,0,2);
   new_histo_group_Higgs_hww2l2v_13TeV_DYin_1jdf_events197->SetBinContent(1,0.4546337);
   new_histo_group_Higgs_hww2l2v_13TeV_DYin_1jdf_events197->SetBinError(1,0.08673786);
   new_histo_group_Higgs_hww2l2v_13TeV_DYin_1jdf_events197->SetEntries(31);
   new_histo_group_Higgs_hww2l2v_13TeV_DYin_1jdf_events197->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_hww2l2v_13TeV_DYin_1jdf_events197->SetLineColor(ci);
   new_histo_group_Higgs_hww2l2v_13TeV_DYin_1jdf_events197->SetLineWidth(2);
   new_histo_group_Higgs_hww2l2v_13TeV_DYin_1jdf_events197->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_hww2l2v_13TeV_DYin_1jdf_events197->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_hww2l2v_13TeV_DYin_1jdf_events197->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_hww2l2v_13TeV_DYin_1jdf_events197->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_hww2l2v_13TeV_DYin_1jdf_events197->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_hww2l2v_13TeV_DYin_1jdf_events197->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_hww2l2v_13TeV_DYin_1jdf_events197->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_hww2l2v_13TeV_DYin_1jdf_events197->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_hww2l2v_13TeV_DYin_1jdf_events197->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_hww2l2v_13TeV_DYin_1jdf_events197->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_hww2l2v_13TeV_DYin_1jdf_events197->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_hww2l2v_13TeV_DYin_1jdf_events197->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_hww2l2v_13TeV_DYin_1jdf_events->Add(new_histo_group_Higgs_hww2l2v_13TeV_DYin_1jdf_events,"");
   thsSignal_grouped_hww2l2v_13TeV_DYin_1jdf_events->Draw("hist same noclear");
   
   Double_t _fx3029[1] = {
   1};
   Double_t _fy3029[1] = {
   437};
   Double_t _felx3029[1] = {
   1};
   Double_t _fely3029[1] = {
   20.89699};
   Double_t _fehx3029[1] = {
   1};
   Double_t _fehy3029[1] = {
   21.92097};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(1,_fx3029,_fy3029,_felx3029,_fehx3029,_fely3029,_fehy3029);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(1);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3029 = new TH1F("Graph_Graph3029","",100,0,2.2);
   Graph_Graph3029->SetMinimum(411.8212);
   Graph_Graph3029->SetMaximum(463.2028);
   Graph_Graph3029->SetDirectory(0);
   Graph_Graph3029->SetStats(0);
   Graph_Graph3029->SetLineStyle(0);
   Graph_Graph3029->SetMarkerStyle(20);
   Graph_Graph3029->GetXaxis()->SetLabelFont(42);
   Graph_Graph3029->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3029->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3029->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3029->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3029->GetXaxis()->SetTitleFont(42);
   Graph_Graph3029->GetYaxis()->SetLabelFont(42);
   Graph_Graph3029->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3029->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3029->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3029->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3029->GetYaxis()->SetTitleFont(42);
   Graph_Graph3029->GetZaxis()->SetLabelFont(42);
   Graph_Graph3029->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3029->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3029->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3029->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3029);
   
   grae->Draw("p0");
   
   TLegend *leg = new TLegend(0.2,0.7,0.8,0.9,NULL,"brNDC");
   leg->SetTextFont(62);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("new_histo_group_DY_hww2l2v_13TeV_DYin_1jdf_events","DY","F");

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
   entry=leg->AddEntry("new_histo_group_top_hww2l2v_13TeV_DYin_1jdf_events","tW and t#bart","F");

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
   entry=leg->AddEntry("new_histo_group_WW_hww2l2v_13TeV_DYin_1jdf_events","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_hww2l2v_13TeV_DYin_1jdf_events","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_VZ_hww2l2v_13TeV_DYin_1jdf_events","VZ/#gamma*/#gamma","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_hww2l2v_13TeV_DYin_1jdf_events","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_hww2l2v_13TeV_DYin_1jdf_events","Data","EPL");
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
   entry=leg->AddEntry("new_histo_group_DY_hww2l2v_13TeV_DYin_1jdf_events","DY","F");

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
   entry=leg->AddEntry("new_histo_group_top_hww2l2v_13TeV_DYin_1jdf_events","tW and t#bart","F");

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
   entry=leg->AddEntry("new_histo_group_WW_hww2l2v_13TeV_DYin_1jdf_events","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_hww2l2v_13TeV_DYin_1jdf_events","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_VZ_hww2l2v_13TeV_DYin_1jdf_events","VZ/#gamma*/#gamma","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_hww2l2v_13TeV_DYin_1jdf_events","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_hww2l2v_13TeV_DYin_1jdf_events","Data","EPL");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   leg->Draw();
   
   TH1F *hframe_copy198 = new TH1F("hframe_copy198","",1000,0,2);
   hframe_copy198->SetMinimum(0);
   hframe_copy198->SetMaximum(1144.761);
   hframe_copy198->SetDirectory(0);
   hframe_copy198->SetStats(0);
   hframe_copy198->SetLineStyle(0);
   hframe_copy198->SetMarkerStyle(20);
   hframe_copy198->GetXaxis()->SetTitle("events");
   hframe_copy198->GetXaxis()->SetNdivisions(506);
   hframe_copy198->GetXaxis()->SetLabelFont(42);
   hframe_copy198->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy198->GetXaxis()->SetLabelSize(0.05);
   hframe_copy198->GetXaxis()->SetTitleSize(0.06);
   hframe_copy198->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy198->GetXaxis()->SetTitleFont(42);
   hframe_copy198->GetYaxis()->SetTitle("Events");
   hframe_copy198->GetYaxis()->SetLabelFont(42);
   hframe_copy198->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy198->GetYaxis()->SetLabelSize(0.05);
   hframe_copy198->GetYaxis()->SetTitleSize(0.06);
   hframe_copy198->GetYaxis()->SetTitleOffset(1.25);
   hframe_copy198->GetYaxis()->SetTitleFont(42);
   hframe_copy198->GetZaxis()->SetLabelFont(42);
   hframe_copy198->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy198->GetZaxis()->SetLabelSize(0.05);
   hframe_copy198->GetZaxis()->SetTitleSize(0.06);
   hframe_copy198->GetZaxis()->SetTitleFont(42);
   hframe_copy198->Draw("sameaxis");
   cchww2l2v_13TeV_DYin_1jdf_events->Modified();
   cchww2l2v_13TeV_DYin_1jdf_events->cd();
   cchww2l2v_13TeV_DYin_1jdf_events->SetSelected(cchww2l2v_13TeV_DYin_1jdf_events);
}
