void c_hww2l2v_13TeV_0jee_events()
{
//=========Macro generated from canvas: cchww2l2v_13TeV_0jee_events/cc
//=========  (Tue Mar 21 11:46:26 2017) by ROOT version6.02/13
   TCanvas *cchww2l2v_13TeV_0jee_events = new TCanvas("cchww2l2v_13TeV_0jee_events", "cc",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   cchww2l2v_13TeV_0jee_events->SetHighLightColor(2);
   cchww2l2v_13TeV_0jee_events->Range(-0.4,-849.6784,2.1,5686.309);
   cchww2l2v_13TeV_0jee_events->SetFillColor(0);
   cchww2l2v_13TeV_0jee_events->SetBorderMode(0);
   cchww2l2v_13TeV_0jee_events->SetBorderSize(2);
   cchww2l2v_13TeV_0jee_events->SetTickx(1);
   cchww2l2v_13TeV_0jee_events->SetTicky(1);
   cchww2l2v_13TeV_0jee_events->SetLeftMargin(0.16);
   cchww2l2v_13TeV_0jee_events->SetRightMargin(0.04);
   cchww2l2v_13TeV_0jee_events->SetTopMargin(0.05);
   cchww2l2v_13TeV_0jee_events->SetBottomMargin(0.13);
   cchww2l2v_13TeV_0jee_events->SetFrameFillStyle(0);
   cchww2l2v_13TeV_0jee_events->SetFrameBorderMode(0);
   cchww2l2v_13TeV_0jee_events->SetFrameFillStyle(0);
   cchww2l2v_13TeV_0jee_events->SetFrameBorderMode(0);
   
   TH1F *hframe118 = new TH1F("hframe118","",1000,0,2);
   hframe118->SetMinimum(0);
   hframe118->SetMaximum(5359.51);
   hframe118->SetDirectory(0);
   hframe118->SetStats(0);
   hframe118->SetLineStyle(0);
   hframe118->SetMarkerStyle(20);
   hframe118->GetXaxis()->SetTitle("events");
   hframe118->GetXaxis()->SetNdivisions(506);
   hframe118->GetXaxis()->SetLabelFont(42);
   hframe118->GetXaxis()->SetLabelOffset(0.007);
   hframe118->GetXaxis()->SetLabelSize(0.05);
   hframe118->GetXaxis()->SetTitleSize(0.06);
   hframe118->GetXaxis()->SetTitleOffset(0.9);
   hframe118->GetXaxis()->SetTitleFont(42);
   hframe118->GetYaxis()->SetTitle("Events");
   hframe118->GetYaxis()->SetLabelFont(42);
   hframe118->GetYaxis()->SetLabelOffset(0.007);
   hframe118->GetYaxis()->SetLabelSize(0.05);
   hframe118->GetYaxis()->SetTitleSize(0.06);
   hframe118->GetYaxis()->SetTitleOffset(1.25);
   hframe118->GetYaxis()->SetTitleFont(42);
   hframe118->GetZaxis()->SetLabelFont(42);
   hframe118->GetZaxis()->SetLabelOffset(0.007);
   hframe118->GetZaxis()->SetLabelSize(0.05);
   hframe118->GetZaxis()->SetTitleSize(0.06);
   hframe118->GetZaxis()->SetTitleFont(42);
   hframe118->Draw(" ");
   
   THStack *thsBackground_grouped_hww2l2v_13TeV_0jee_events = new THStack();
   thsBackground_grouped_hww2l2v_13TeV_0jee_events->SetName("thsBackground_grouped_hww2l2v_13TeV_0jee_events");
   thsBackground_grouped_hww2l2v_13TeV_0jee_events->SetTitle("thsBackground_grouped_hww2l2v_13TeV_0jee_events");
   
   TH1F *thsBackground_grouped_hww2l2v_13TeV_0jee_events_stack_27 = new TH1F("thsBackground_grouped_hww2l2v_13TeV_0jee_events_stack_27","thsBackground_grouped_hww2l2v_13TeV_0jee_events",1,0,2);
   thsBackground_grouped_hww2l2v_13TeV_0jee_events_stack_27->SetMinimum(0);
   thsBackground_grouped_hww2l2v_13TeV_0jee_events_stack_27->SetMaximum(1346.452);
   thsBackground_grouped_hww2l2v_13TeV_0jee_events_stack_27->SetDirectory(0);
   thsBackground_grouped_hww2l2v_13TeV_0jee_events_stack_27->SetStats(0);
   thsBackground_grouped_hww2l2v_13TeV_0jee_events_stack_27->SetLineStyle(0);
   thsBackground_grouped_hww2l2v_13TeV_0jee_events_stack_27->SetMarkerStyle(20);
   thsBackground_grouped_hww2l2v_13TeV_0jee_events_stack_27->GetXaxis()->SetLabelFont(42);
   thsBackground_grouped_hww2l2v_13TeV_0jee_events_stack_27->GetXaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_hww2l2v_13TeV_0jee_events_stack_27->GetXaxis()->SetLabelSize(0.05);
   thsBackground_grouped_hww2l2v_13TeV_0jee_events_stack_27->GetXaxis()->SetTitleSize(0.06);
   thsBackground_grouped_hww2l2v_13TeV_0jee_events_stack_27->GetXaxis()->SetTitleOffset(0.9);
   thsBackground_grouped_hww2l2v_13TeV_0jee_events_stack_27->GetXaxis()->SetTitleFont(42);
   thsBackground_grouped_hww2l2v_13TeV_0jee_events_stack_27->GetYaxis()->SetLabelFont(42);
   thsBackground_grouped_hww2l2v_13TeV_0jee_events_stack_27->GetYaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_hww2l2v_13TeV_0jee_events_stack_27->GetYaxis()->SetLabelSize(0.05);
   thsBackground_grouped_hww2l2v_13TeV_0jee_events_stack_27->GetYaxis()->SetTitleSize(0.06);
   thsBackground_grouped_hww2l2v_13TeV_0jee_events_stack_27->GetYaxis()->SetTitleOffset(1.25);
   thsBackground_grouped_hww2l2v_13TeV_0jee_events_stack_27->GetYaxis()->SetTitleFont(42);
   thsBackground_grouped_hww2l2v_13TeV_0jee_events_stack_27->GetZaxis()->SetLabelFont(42);
   thsBackground_grouped_hww2l2v_13TeV_0jee_events_stack_27->GetZaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_hww2l2v_13TeV_0jee_events_stack_27->GetZaxis()->SetLabelSize(0.05);
   thsBackground_grouped_hww2l2v_13TeV_0jee_events_stack_27->GetZaxis()->SetTitleSize(0.06);
   thsBackground_grouped_hww2l2v_13TeV_0jee_events_stack_27->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_hww2l2v_13TeV_0jee_events->SetHistogram(thsBackground_grouped_hww2l2v_13TeV_0jee_events_stack_27);
   
   
   TH1D *new_histo_group_DY_hww2l2v_13TeV_0jee_events119 = new TH1D("new_histo_group_DY_hww2l2v_13TeV_0jee_events119","histo_DY",1,0,2);
   new_histo_group_DY_hww2l2v_13TeV_0jee_events119->SetBinContent(1,579.8255);
   new_histo_group_DY_hww2l2v_13TeV_0jee_events119->SetBinError(1,127.5998);
   new_histo_group_DY_hww2l2v_13TeV_0jee_events119->SetEntries(90);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#009900");
   new_histo_group_DY_hww2l2v_13TeV_0jee_events119->SetFillColor(ci);
   new_histo_group_DY_hww2l2v_13TeV_0jee_events119->SetFillStyle(3001);

   ci = TColor::GetColor("#009900");
   new_histo_group_DY_hww2l2v_13TeV_0jee_events119->SetLineColor(ci);
   new_histo_group_DY_hww2l2v_13TeV_0jee_events119->GetXaxis()->SetLabelFont(42);
   new_histo_group_DY_hww2l2v_13TeV_0jee_events119->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_DY_hww2l2v_13TeV_0jee_events119->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_DY_hww2l2v_13TeV_0jee_events119->GetXaxis()->SetTitleFont(42);
   new_histo_group_DY_hww2l2v_13TeV_0jee_events119->GetYaxis()->SetLabelFont(42);
   new_histo_group_DY_hww2l2v_13TeV_0jee_events119->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_DY_hww2l2v_13TeV_0jee_events119->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_DY_hww2l2v_13TeV_0jee_events119->GetYaxis()->SetTitleFont(42);
   new_histo_group_DY_hww2l2v_13TeV_0jee_events119->GetZaxis()->SetLabelFont(42);
   new_histo_group_DY_hww2l2v_13TeV_0jee_events119->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_DY_hww2l2v_13TeV_0jee_events119->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_DY_hww2l2v_13TeV_0jee_events119->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_hww2l2v_13TeV_0jee_events->Add(new_histo_group_DY_hww2l2v_13TeV_0jee_events,"");
   
   TH1D *new_histo_group_top_hww2l2v_13TeV_0jee_events120 = new TH1D("new_histo_group_top_hww2l2v_13TeV_0jee_events120","histo_top",1,0,2);
   new_histo_group_top_hww2l2v_13TeV_0jee_events120->SetBinContent(1,30.22772);
   new_histo_group_top_hww2l2v_13TeV_0jee_events120->SetBinError(1,1.050543);
   new_histo_group_top_hww2l2v_13TeV_0jee_events120->SetEntries(913);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_top_hww2l2v_13TeV_0jee_events120->SetFillColor(ci);
   new_histo_group_top_hww2l2v_13TeV_0jee_events120->SetFillStyle(3001);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_top_hww2l2v_13TeV_0jee_events120->SetLineColor(ci);
   new_histo_group_top_hww2l2v_13TeV_0jee_events120->GetXaxis()->SetLabelFont(42);
   new_histo_group_top_hww2l2v_13TeV_0jee_events120->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_top_hww2l2v_13TeV_0jee_events120->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_top_hww2l2v_13TeV_0jee_events120->GetXaxis()->SetTitleFont(42);
   new_histo_group_top_hww2l2v_13TeV_0jee_events120->GetYaxis()->SetLabelFont(42);
   new_histo_group_top_hww2l2v_13TeV_0jee_events120->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_top_hww2l2v_13TeV_0jee_events120->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_top_hww2l2v_13TeV_0jee_events120->GetYaxis()->SetTitleFont(42);
   new_histo_group_top_hww2l2v_13TeV_0jee_events120->GetZaxis()->SetLabelFont(42);
   new_histo_group_top_hww2l2v_13TeV_0jee_events120->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_top_hww2l2v_13TeV_0jee_events120->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_top_hww2l2v_13TeV_0jee_events120->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_hww2l2v_13TeV_0jee_events->Add(new_histo_group_top_hww2l2v_13TeV_0jee_events,"");
   
   TH1D *new_histo_group_WW_hww2l2v_13TeV_0jee_events121 = new TH1D("new_histo_group_WW_hww2l2v_13TeV_0jee_events121","histo_WW",1,0,2);
   new_histo_group_WW_hww2l2v_13TeV_0jee_events121->SetBinContent(1,368.0976);
   new_histo_group_WW_hww2l2v_13TeV_0jee_events121->SetBinError(1,7.976456);
   new_histo_group_WW_hww2l2v_13TeV_0jee_events121->SetEntries(2897);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_hww2l2v_13TeV_0jee_events121->SetFillColor(ci);
   new_histo_group_WW_hww2l2v_13TeV_0jee_events121->SetFillStyle(3001);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_hww2l2v_13TeV_0jee_events121->SetLineColor(ci);
   new_histo_group_WW_hww2l2v_13TeV_0jee_events121->GetXaxis()->SetLabelFont(42);
   new_histo_group_WW_hww2l2v_13TeV_0jee_events121->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WW_hww2l2v_13TeV_0jee_events121->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WW_hww2l2v_13TeV_0jee_events121->GetXaxis()->SetTitleFont(42);
   new_histo_group_WW_hww2l2v_13TeV_0jee_events121->GetYaxis()->SetLabelFont(42);
   new_histo_group_WW_hww2l2v_13TeV_0jee_events121->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WW_hww2l2v_13TeV_0jee_events121->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WW_hww2l2v_13TeV_0jee_events121->GetYaxis()->SetTitleFont(42);
   new_histo_group_WW_hww2l2v_13TeV_0jee_events121->GetZaxis()->SetLabelFont(42);
   new_histo_group_WW_hww2l2v_13TeV_0jee_events121->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WW_hww2l2v_13TeV_0jee_events121->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WW_hww2l2v_13TeV_0jee_events121->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_hww2l2v_13TeV_0jee_events->Add(new_histo_group_WW_hww2l2v_13TeV_0jee_events,"");
   
   TH1D *new_histo_group_VVV_hww2l2v_13TeV_0jee_events122 = new TH1D("new_histo_group_VVV_hww2l2v_13TeV_0jee_events122","histo_VVV",1,0,2);
   new_histo_group_VVV_hww2l2v_13TeV_0jee_events122->SetBinContent(1,0.1988679);
   new_histo_group_VVV_hww2l2v_13TeV_0jee_events122->SetBinError(1,0.06812355);
   new_histo_group_VVV_hww2l2v_13TeV_0jee_events122->SetEntries(9);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_hww2l2v_13TeV_0jee_events122->SetFillColor(ci);
   new_histo_group_VVV_hww2l2v_13TeV_0jee_events122->SetFillStyle(3001);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_hww2l2v_13TeV_0jee_events122->SetLineColor(ci);
   new_histo_group_VVV_hww2l2v_13TeV_0jee_events122->GetXaxis()->SetLabelFont(42);
   new_histo_group_VVV_hww2l2v_13TeV_0jee_events122->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_hww2l2v_13TeV_0jee_events122->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_hww2l2v_13TeV_0jee_events122->GetXaxis()->SetTitleFont(42);
   new_histo_group_VVV_hww2l2v_13TeV_0jee_events122->GetYaxis()->SetLabelFont(42);
   new_histo_group_VVV_hww2l2v_13TeV_0jee_events122->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_hww2l2v_13TeV_0jee_events122->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_hww2l2v_13TeV_0jee_events122->GetYaxis()->SetTitleFont(42);
   new_histo_group_VVV_hww2l2v_13TeV_0jee_events122->GetZaxis()->SetLabelFont(42);
   new_histo_group_VVV_hww2l2v_13TeV_0jee_events122->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_hww2l2v_13TeV_0jee_events122->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_hww2l2v_13TeV_0jee_events122->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_hww2l2v_13TeV_0jee_events->Add(new_histo_group_VVV_hww2l2v_13TeV_0jee_events,"");
   
   TH1D *new_histo_group_VZ_hww2l2v_13TeV_0jee_events123 = new TH1D("new_histo_group_VZ_hww2l2v_13TeV_0jee_events123","histo_Vg",1,0,2);
   new_histo_group_VZ_hww2l2v_13TeV_0jee_events123->SetBinContent(1,232.1111);
   new_histo_group_VZ_hww2l2v_13TeV_0jee_events123->SetBinError(1,78.05885);
   new_histo_group_VZ_hww2l2v_13TeV_0jee_events123->SetEntries(1165);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_VZ_hww2l2v_13TeV_0jee_events123->SetFillColor(ci);
   new_histo_group_VZ_hww2l2v_13TeV_0jee_events123->SetFillStyle(3001);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_VZ_hww2l2v_13TeV_0jee_events123->SetLineColor(ci);
   new_histo_group_VZ_hww2l2v_13TeV_0jee_events123->GetXaxis()->SetLabelFont(42);
   new_histo_group_VZ_hww2l2v_13TeV_0jee_events123->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_VZ_hww2l2v_13TeV_0jee_events123->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_VZ_hww2l2v_13TeV_0jee_events123->GetXaxis()->SetTitleFont(42);
   new_histo_group_VZ_hww2l2v_13TeV_0jee_events123->GetYaxis()->SetLabelFont(42);
   new_histo_group_VZ_hww2l2v_13TeV_0jee_events123->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_VZ_hww2l2v_13TeV_0jee_events123->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_VZ_hww2l2v_13TeV_0jee_events123->GetYaxis()->SetTitleFont(42);
   new_histo_group_VZ_hww2l2v_13TeV_0jee_events123->GetZaxis()->SetLabelFont(42);
   new_histo_group_VZ_hww2l2v_13TeV_0jee_events123->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_VZ_hww2l2v_13TeV_0jee_events123->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_VZ_hww2l2v_13TeV_0jee_events123->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_hww2l2v_13TeV_0jee_events->Add(new_histo_group_VZ_hww2l2v_13TeV_0jee_events,"");
   
   TH1D *new_histo_group_Higgs_hww2l2v_13TeV_0jee_events124 = new TH1D("new_histo_group_Higgs_hww2l2v_13TeV_0jee_events124","histo_H_htt",1,0,2);
   new_histo_group_Higgs_hww2l2v_13TeV_0jee_events124->SetBinContent(1,71.87421);
   new_histo_group_Higgs_hww2l2v_13TeV_0jee_events124->SetBinError(1,2.143153);
   new_histo_group_Higgs_hww2l2v_13TeV_0jee_events124->SetEntries(1417);
   new_histo_group_Higgs_hww2l2v_13TeV_0jee_events124->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_hww2l2v_13TeV_0jee_events124->SetLineColor(ci);
   new_histo_group_Higgs_hww2l2v_13TeV_0jee_events124->SetLineWidth(2);
   new_histo_group_Higgs_hww2l2v_13TeV_0jee_events124->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_hww2l2v_13TeV_0jee_events124->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_hww2l2v_13TeV_0jee_events124->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_hww2l2v_13TeV_0jee_events124->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_hww2l2v_13TeV_0jee_events124->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_hww2l2v_13TeV_0jee_events124->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_hww2l2v_13TeV_0jee_events124->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_hww2l2v_13TeV_0jee_events124->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_hww2l2v_13TeV_0jee_events124->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_hww2l2v_13TeV_0jee_events124->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_hww2l2v_13TeV_0jee_events124->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_hww2l2v_13TeV_0jee_events124->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_hww2l2v_13TeV_0jee_events->Add(new_histo_group_Higgs_hww2l2v_13TeV_0jee_events,"");
   thsBackground_grouped_hww2l2v_13TeV_0jee_events->Draw("hist same");
   
   thsSignal_grouped_hww2l2v_13TeV_0jee_events = new THStack();
   thsSignal_grouped_hww2l2v_13TeV_0jee_events->SetName("thsSignal_grouped_hww2l2v_13TeV_0jee_events");
   thsSignal_grouped_hww2l2v_13TeV_0jee_events->SetTitle("thsSignal_grouped_hww2l2v_13TeV_0jee_events");
   
   TH1F *thsSignal_grouped_hww2l2v_13TeV_0jee_events_stack_28 = new TH1F("thsSignal_grouped_hww2l2v_13TeV_0jee_events_stack_28","thsSignal_grouped_hww2l2v_13TeV_0jee_events",1,0,2);
   thsSignal_grouped_hww2l2v_13TeV_0jee_events_stack_28->SetMinimum(0);
   thsSignal_grouped_hww2l2v_13TeV_0jee_events_stack_28->SetMaximum(77.71823);
   thsSignal_grouped_hww2l2v_13TeV_0jee_events_stack_28->SetDirectory(0);
   thsSignal_grouped_hww2l2v_13TeV_0jee_events_stack_28->SetStats(0);
   thsSignal_grouped_hww2l2v_13TeV_0jee_events_stack_28->SetLineStyle(0);
   thsSignal_grouped_hww2l2v_13TeV_0jee_events_stack_28->SetMarkerStyle(20);
   thsSignal_grouped_hww2l2v_13TeV_0jee_events_stack_28->GetXaxis()->SetLabelFont(42);
   thsSignal_grouped_hww2l2v_13TeV_0jee_events_stack_28->GetXaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_hww2l2v_13TeV_0jee_events_stack_28->GetXaxis()->SetLabelSize(0.05);
   thsSignal_grouped_hww2l2v_13TeV_0jee_events_stack_28->GetXaxis()->SetTitleSize(0.06);
   thsSignal_grouped_hww2l2v_13TeV_0jee_events_stack_28->GetXaxis()->SetTitleOffset(0.9);
   thsSignal_grouped_hww2l2v_13TeV_0jee_events_stack_28->GetXaxis()->SetTitleFont(42);
   thsSignal_grouped_hww2l2v_13TeV_0jee_events_stack_28->GetYaxis()->SetLabelFont(42);
   thsSignal_grouped_hww2l2v_13TeV_0jee_events_stack_28->GetYaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_hww2l2v_13TeV_0jee_events_stack_28->GetYaxis()->SetLabelSize(0.05);
   thsSignal_grouped_hww2l2v_13TeV_0jee_events_stack_28->GetYaxis()->SetTitleSize(0.06);
   thsSignal_grouped_hww2l2v_13TeV_0jee_events_stack_28->GetYaxis()->SetTitleOffset(1.25);
   thsSignal_grouped_hww2l2v_13TeV_0jee_events_stack_28->GetYaxis()->SetTitleFont(42);
   thsSignal_grouped_hww2l2v_13TeV_0jee_events_stack_28->GetZaxis()->SetLabelFont(42);
   thsSignal_grouped_hww2l2v_13TeV_0jee_events_stack_28->GetZaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_hww2l2v_13TeV_0jee_events_stack_28->GetZaxis()->SetLabelSize(0.05);
   thsSignal_grouped_hww2l2v_13TeV_0jee_events_stack_28->GetZaxis()->SetTitleSize(0.06);
   thsSignal_grouped_hww2l2v_13TeV_0jee_events_stack_28->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_hww2l2v_13TeV_0jee_events->SetHistogram(thsSignal_grouped_hww2l2v_13TeV_0jee_events_stack_28);
   
   
   TH1D *new_histo_group_Higgs_hww2l2v_13TeV_0jee_events125 = new TH1D("new_histo_group_Higgs_hww2l2v_13TeV_0jee_events125","histo_H_htt",1,0,2);
   new_histo_group_Higgs_hww2l2v_13TeV_0jee_events125->SetBinContent(1,71.87421);
   new_histo_group_Higgs_hww2l2v_13TeV_0jee_events125->SetBinError(1,2.143153);
   new_histo_group_Higgs_hww2l2v_13TeV_0jee_events125->SetEntries(1417);
   new_histo_group_Higgs_hww2l2v_13TeV_0jee_events125->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_hww2l2v_13TeV_0jee_events125->SetLineColor(ci);
   new_histo_group_Higgs_hww2l2v_13TeV_0jee_events125->SetLineWidth(2);
   new_histo_group_Higgs_hww2l2v_13TeV_0jee_events125->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_hww2l2v_13TeV_0jee_events125->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_hww2l2v_13TeV_0jee_events125->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_hww2l2v_13TeV_0jee_events125->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_hww2l2v_13TeV_0jee_events125->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_hww2l2v_13TeV_0jee_events125->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_hww2l2v_13TeV_0jee_events125->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_hww2l2v_13TeV_0jee_events125->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_hww2l2v_13TeV_0jee_events125->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_hww2l2v_13TeV_0jee_events125->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_hww2l2v_13TeV_0jee_events125->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_hww2l2v_13TeV_0jee_events125->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_hww2l2v_13TeV_0jee_events->Add(new_histo_group_Higgs_hww2l2v_13TeV_0jee_events,"");
   thsSignal_grouped_hww2l2v_13TeV_0jee_events->Draw("hist same noclear");
   
   Double_t _fx3019[1] = {
   1};
   Double_t _fy3019[1] = {
   1210.461};
   Double_t _felx3019[1] = {
   1};
   Double_t _fely3019[1] = {
   0.0001220703};
   Double_t _fehx3019[1] = {
   1};
   Double_t _fehy3019[1] = {
   0.0001220703};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(1,_fx3019,_fy3019,_felx3019,_fehx3019,_fely3019,_fehy3019);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(12);
   grae->SetFillStyle(3004);
   grae->SetLineColor(12);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3019 = new TH1F("Graph_Graph3019","",100,0,2.2);
   Graph_Graph3019->SetMinimum(1210.461);
   Graph_Graph3019->SetMaximum(1210.461);
   Graph_Graph3019->SetDirectory(0);
   Graph_Graph3019->SetStats(0);
   Graph_Graph3019->SetLineStyle(0);
   Graph_Graph3019->SetMarkerStyle(20);
   Graph_Graph3019->GetXaxis()->SetLabelFont(42);
   Graph_Graph3019->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3019->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3019->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3019->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3019->GetXaxis()->SetTitleFont(42);
   Graph_Graph3019->GetYaxis()->SetLabelFont(42);
   Graph_Graph3019->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3019->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3019->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3019->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3019->GetYaxis()->SetTitleFont(42);
   Graph_Graph3019->GetZaxis()->SetLabelFont(42);
   Graph_Graph3019->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3019->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3019->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3019->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3019);
   
   grae->Draw("2");
   
   Double_t _fx3020[1] = {
   1};
   Double_t _fy3020[1] = {
   2098};
   Double_t _felx3020[1] = {
   1};
   Double_t _fely3020[1] = {
   45.80127};
   Double_t _fehx3020[1] = {
   1};
   Double_t _fehy3020[1] = {
   46.81222};
   grae = new TGraphAsymmErrors(1,_fx3020,_fy3020,_felx3020,_fehx3020,_fely3020,_fehy3020);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(1);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3020 = new TH1F("Graph_Graph3020","",100,0,2.2);
   Graph_Graph3020->SetMinimum(2042.937);
   Graph_Graph3020->SetMaximum(2154.074);
   Graph_Graph3020->SetDirectory(0);
   Graph_Graph3020->SetStats(0);
   Graph_Graph3020->SetLineStyle(0);
   Graph_Graph3020->SetMarkerStyle(20);
   Graph_Graph3020->GetXaxis()->SetLabelFont(42);
   Graph_Graph3020->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3020->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3020->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3020->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3020->GetXaxis()->SetTitleFont(42);
   Graph_Graph3020->GetYaxis()->SetLabelFont(42);
   Graph_Graph3020->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3020->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3020->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3020->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3020->GetYaxis()->SetTitleFont(42);
   Graph_Graph3020->GetZaxis()->SetLabelFont(42);
   Graph_Graph3020->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3020->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3020->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3020->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3020);
   
   grae->Draw("p0");
   
   TLegend *leg = new TLegend(0.2,0.7,0.8,0.9,NULL,"brNDC");
   leg->SetTextFont(62);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("new_histo_group_DY_hww2l2v_13TeV_0jee_events","DY","F");

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
   entry=leg->AddEntry("new_histo_group_top_hww2l2v_13TeV_0jee_events","tW and t#bart","F");

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
   entry=leg->AddEntry("new_histo_group_WW_hww2l2v_13TeV_0jee_events","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_hww2l2v_13TeV_0jee_events","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_VZ_hww2l2v_13TeV_0jee_events","VZ/#gamma*/#gamma","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_hww2l2v_13TeV_0jee_events","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_hww2l2v_13TeV_0jee_events","Data","EPL");
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
   entry=leg->AddEntry("new_histo_group_DY_hww2l2v_13TeV_0jee_events","DY","F");

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
   entry=leg->AddEntry("new_histo_group_top_hww2l2v_13TeV_0jee_events","tW and t#bart","F");

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
   entry=leg->AddEntry("new_histo_group_WW_hww2l2v_13TeV_0jee_events","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_hww2l2v_13TeV_0jee_events","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_VZ_hww2l2v_13TeV_0jee_events","VZ/#gamma*/#gamma","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_hww2l2v_13TeV_0jee_events","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_hww2l2v_13TeV_0jee_events","Data","EPL");
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
   
   TH1F *hframe_copy126 = new TH1F("hframe_copy126","",1000,0,2);
   hframe_copy126->SetMinimum(0);
   hframe_copy126->SetMaximum(5359.51);
   hframe_copy126->SetDirectory(0);
   hframe_copy126->SetStats(0);
   hframe_copy126->SetLineStyle(0);
   hframe_copy126->SetMarkerStyle(20);
   hframe_copy126->GetXaxis()->SetTitle("events");
   hframe_copy126->GetXaxis()->SetNdivisions(506);
   hframe_copy126->GetXaxis()->SetLabelFont(42);
   hframe_copy126->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy126->GetXaxis()->SetLabelSize(0.05);
   hframe_copy126->GetXaxis()->SetTitleSize(0.06);
   hframe_copy126->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy126->GetXaxis()->SetTitleFont(42);
   hframe_copy126->GetYaxis()->SetTitle("Events");
   hframe_copy126->GetYaxis()->SetLabelFont(42);
   hframe_copy126->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy126->GetYaxis()->SetLabelSize(0.05);
   hframe_copy126->GetYaxis()->SetTitleSize(0.06);
   hframe_copy126->GetYaxis()->SetTitleOffset(1.25);
   hframe_copy126->GetYaxis()->SetTitleFont(42);
   hframe_copy126->GetZaxis()->SetLabelFont(42);
   hframe_copy126->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy126->GetZaxis()->SetLabelSize(0.05);
   hframe_copy126->GetZaxis()->SetTitleSize(0.06);
   hframe_copy126->GetZaxis()->SetTitleFont(42);
   hframe_copy126->Draw("sameaxis");
   cchww2l2v_13TeV_0jee_events->Modified();
   cchww2l2v_13TeV_0jee_events->cd();
   cchww2l2v_13TeV_0jee_events->SetSelected(cchww2l2v_13TeV_0jee_events);
}
