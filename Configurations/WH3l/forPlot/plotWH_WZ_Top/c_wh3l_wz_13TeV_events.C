void c_wh3l_wz_13TeV_events()
{
//=========Macro generated from canvas: ccwh3l_wz_13TeV_events/cc
//=========  (Sun Jul  3 02:18:01 2016) by ROOT version6.02/13
   TCanvas *ccwh3l_wz_13TeV_events = new TCanvas("ccwh3l_wz_13TeV_events", "cc",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   ccwh3l_wz_13TeV_events->SetHighLightColor(2);
   ccwh3l_wz_13TeV_events->Range(-0.4,-70.48744,2.1,471.7236);
   ccwh3l_wz_13TeV_events->SetFillColor(0);
   ccwh3l_wz_13TeV_events->SetBorderMode(0);
   ccwh3l_wz_13TeV_events->SetBorderSize(2);
   ccwh3l_wz_13TeV_events->SetTickx(1);
   ccwh3l_wz_13TeV_events->SetTicky(1);
   ccwh3l_wz_13TeV_events->SetLeftMargin(0.16);
   ccwh3l_wz_13TeV_events->SetRightMargin(0.04);
   ccwh3l_wz_13TeV_events->SetTopMargin(0.05);
   ccwh3l_wz_13TeV_events->SetBottomMargin(0.13);
   ccwh3l_wz_13TeV_events->SetFrameFillStyle(0);
   ccwh3l_wz_13TeV_events->SetFrameBorderMode(0);
   ccwh3l_wz_13TeV_events->SetFrameFillStyle(0);
   ccwh3l_wz_13TeV_events->SetFrameBorderMode(0);
   
   TH1F *hframe21 = new TH1F("hframe21","",1000,0,2);
   hframe21->SetMinimum(0);
   hframe21->SetMaximum(444.6131);
   hframe21->SetDirectory(0);
   hframe21->SetStats(0);
   hframe21->SetLineStyle(0);
   hframe21->SetMarkerStyle(20);
   hframe21->GetXaxis()->SetTitle("events");
   hframe21->GetXaxis()->SetNdivisions(506);
   hframe21->GetXaxis()->SetLabelFont(42);
   hframe21->GetXaxis()->SetLabelOffset(0.007);
   hframe21->GetXaxis()->SetLabelSize(0.05);
   hframe21->GetXaxis()->SetTitleSize(0.06);
   hframe21->GetXaxis()->SetTitleOffset(0.9);
   hframe21->GetXaxis()->SetTitleFont(42);
   hframe21->GetYaxis()->SetTitle("Events");
   hframe21->GetYaxis()->SetLabelFont(42);
   hframe21->GetYaxis()->SetLabelOffset(0.007);
   hframe21->GetYaxis()->SetLabelSize(0.05);
   hframe21->GetYaxis()->SetTitleSize(0.06);
   hframe21->GetYaxis()->SetTitleOffset(1.25);
   hframe21->GetYaxis()->SetTitleFont(42);
   hframe21->GetZaxis()->SetLabelFont(42);
   hframe21->GetZaxis()->SetLabelOffset(0.007);
   hframe21->GetZaxis()->SetLabelSize(0.05);
   hframe21->GetZaxis()->SetTitleSize(0.06);
   hframe21->GetZaxis()->SetTitleFont(42);
   hframe21->Draw(" ");
   
   THStack *thsBackground_grouped_wh3l_wz_13TeV_events = new THStack();
   thsBackground_grouped_wh3l_wz_13TeV_events->SetName("thsBackground_grouped_wh3l_wz_13TeV_events");
   thsBackground_grouped_wh3l_wz_13TeV_events->SetTitle("thsBackground_grouped_wh3l_wz_13TeV_events");
   
   TH1F *thsBackground_grouped_wh3l_wz_13TeV_events_stack_5 = new TH1F("thsBackground_grouped_wh3l_wz_13TeV_events_stack_5","thsBackground_grouped_wh3l_wz_13TeV_events",1,0,2);
   thsBackground_grouped_wh3l_wz_13TeV_events_stack_5->SetMinimum(0);
   thsBackground_grouped_wh3l_wz_13TeV_events_stack_5->SetMaximum(139.1491);
   thsBackground_grouped_wh3l_wz_13TeV_events_stack_5->SetDirectory(0);
   thsBackground_grouped_wh3l_wz_13TeV_events_stack_5->SetStats(0);
   thsBackground_grouped_wh3l_wz_13TeV_events_stack_5->SetLineStyle(0);
   thsBackground_grouped_wh3l_wz_13TeV_events_stack_5->SetMarkerStyle(20);
   thsBackground_grouped_wh3l_wz_13TeV_events_stack_5->GetXaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_wz_13TeV_events_stack_5->GetXaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_wz_13TeV_events_stack_5->GetXaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_wz_13TeV_events_stack_5->GetXaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_wz_13TeV_events_stack_5->GetXaxis()->SetTitleOffset(0.9);
   thsBackground_grouped_wh3l_wz_13TeV_events_stack_5->GetXaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_wz_13TeV_events_stack_5->GetYaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_wz_13TeV_events_stack_5->GetYaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_wz_13TeV_events_stack_5->GetYaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_wz_13TeV_events_stack_5->GetYaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_wz_13TeV_events_stack_5->GetYaxis()->SetTitleOffset(1.25);
   thsBackground_grouped_wh3l_wz_13TeV_events_stack_5->GetYaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_wz_13TeV_events_stack_5->GetZaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_wz_13TeV_events_stack_5->GetZaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_wz_13TeV_events_stack_5->GetZaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_wz_13TeV_events_stack_5->GetZaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_wz_13TeV_events_stack_5->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_wz_13TeV_events->SetHistogram(thsBackground_grouped_wh3l_wz_13TeV_events_stack_5);
   
   
   TH1D *new_histo_group_Fake_wh3l_wz_13TeV_events22 = new TH1D("new_histo_group_Fake_wh3l_wz_13TeV_events22","histo_Fake",1,0,2);
   new_histo_group_Fake_wh3l_wz_13TeV_events22->SetBinContent(1,10.57838);
   new_histo_group_Fake_wh3l_wz_13TeV_events22->SetBinError(1,3.327542);
   new_histo_group_Fake_wh3l_wz_13TeV_events22->SetEntries(336);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_wz_13TeV_events22->SetFillColor(ci);
   new_histo_group_Fake_wh3l_wz_13TeV_events22->SetFillStyle(3001);

   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_wz_13TeV_events22->SetLineColor(ci);
   new_histo_group_Fake_wh3l_wz_13TeV_events22->GetXaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_wz_13TeV_events22->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_wz_13TeV_events22->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_wz_13TeV_events22->GetXaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_wz_13TeV_events22->GetYaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_wz_13TeV_events22->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_wz_13TeV_events22->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_wz_13TeV_events22->GetYaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_wz_13TeV_events22->GetZaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_wz_13TeV_events22->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_wz_13TeV_events22->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_wz_13TeV_events22->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_wz_13TeV_events->Add(new_histo_group_Fake_wh3l_wz_13TeV_events,"");
   
   TH1D *new_histo_group_WW_wh3l_wz_13TeV_events23 = new TH1D("new_histo_group_WW_wh3l_wz_13TeV_events23","histo_WW",1,0,2);
   new_histo_group_WW_wh3l_wz_13TeV_events23->SetBinContent(1,0.07539475);
   new_histo_group_WW_wh3l_wz_13TeV_events23->SetBinError(1,0.03420241);
   new_histo_group_WW_wh3l_wz_13TeV_events23->SetEntries(5);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_wz_13TeV_events23->SetFillColor(ci);
   new_histo_group_WW_wh3l_wz_13TeV_events23->SetFillStyle(3001);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_wz_13TeV_events23->SetLineColor(ci);
   new_histo_group_WW_wh3l_wz_13TeV_events23->GetXaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_wz_13TeV_events23->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_wz_13TeV_events23->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_wz_13TeV_events23->GetXaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_wz_13TeV_events23->GetYaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_wz_13TeV_events23->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_wz_13TeV_events23->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_wz_13TeV_events23->GetYaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_wz_13TeV_events23->GetZaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_wz_13TeV_events23->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_wz_13TeV_events23->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_wz_13TeV_events23->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_wz_13TeV_events->Add(new_histo_group_WW_wh3l_wz_13TeV_events,"");
   
   TH1D *new_histo_group_VVV_wh3l_wz_13TeV_events24 = new TH1D("new_histo_group_VVV_wh3l_wz_13TeV_events24","histo_VVV",1,0,2);
   new_histo_group_VVV_wh3l_wz_13TeV_events24->SetBinContent(1,0.5815712);
   new_histo_group_VVV_wh3l_wz_13TeV_events24->SetBinError(1,0.03311589);
   new_histo_group_VVV_wh3l_wz_13TeV_events24->SetEntries(556);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_wz_13TeV_events24->SetFillColor(ci);
   new_histo_group_VVV_wh3l_wz_13TeV_events24->SetFillStyle(3001);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_wz_13TeV_events24->SetLineColor(ci);
   new_histo_group_VVV_wh3l_wz_13TeV_events24->GetXaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_wz_13TeV_events24->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_wz_13TeV_events24->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_wz_13TeV_events24->GetXaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_wz_13TeV_events24->GetYaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_wz_13TeV_events24->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_wz_13TeV_events24->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_wz_13TeV_events24->GetYaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_wz_13TeV_events24->GetZaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_wz_13TeV_events24->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_wz_13TeV_events24->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_wz_13TeV_events24->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_wz_13TeV_events->Add(new_histo_group_VVV_wh3l_wz_13TeV_events,"");
   
   TH1D *new_histo_group_Vg_wh3l_wz_13TeV_events25 = new TH1D("new_histo_group_Vg_wh3l_wz_13TeV_events25","histo_Vg",1,0,2);
   new_histo_group_Vg_wh3l_wz_13TeV_events25->SetBinContent(1,4.987755);
   new_histo_group_Vg_wh3l_wz_13TeV_events25->SetBinError(1,0.7934922);
   new_histo_group_Vg_wh3l_wz_13TeV_events25->SetEntries(63);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_wz_13TeV_events25->SetFillColor(ci);
   new_histo_group_Vg_wh3l_wz_13TeV_events25->SetFillStyle(3001);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_wz_13TeV_events25->SetLineColor(ci);
   new_histo_group_Vg_wh3l_wz_13TeV_events25->GetXaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_wz_13TeV_events25->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_wz_13TeV_events25->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_wz_13TeV_events25->GetXaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_wz_13TeV_events25->GetYaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_wz_13TeV_events25->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_wz_13TeV_events25->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_wz_13TeV_events25->GetYaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_wz_13TeV_events25->GetZaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_wz_13TeV_events25->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_wz_13TeV_events25->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_wz_13TeV_events25->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_wz_13TeV_events->Add(new_histo_group_Vg_wh3l_wz_13TeV_events,"");
   
   TH1D *new_histo_group_ZZ_wh3l_wz_13TeV_events26 = new TH1D("new_histo_group_ZZ_wh3l_wz_13TeV_events26","histo_ZZ",1,0,2);
   new_histo_group_ZZ_wh3l_wz_13TeV_events26->SetBinContent(1,6.803126);
   new_histo_group_ZZ_wh3l_wz_13TeV_events26->SetBinError(1,0.5349253);
   new_histo_group_ZZ_wh3l_wz_13TeV_events26->SetEntries(182);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_wz_13TeV_events26->SetFillColor(ci);
   new_histo_group_ZZ_wh3l_wz_13TeV_events26->SetFillStyle(3001);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_wz_13TeV_events26->SetLineColor(ci);
   new_histo_group_ZZ_wh3l_wz_13TeV_events26->GetXaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_wz_13TeV_events26->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_wz_13TeV_events26->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_wz_13TeV_events26->GetXaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_wz_13TeV_events26->GetYaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_wz_13TeV_events26->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_wz_13TeV_events26->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_wz_13TeV_events26->GetYaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_wz_13TeV_events26->GetZaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_wz_13TeV_events26->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_wz_13TeV_events26->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_wz_13TeV_events26->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_wz_13TeV_events->Add(new_histo_group_ZZ_wh3l_wz_13TeV_events,"");
   
   TH1D *new_histo_group_WZ_wh3l_wz_13TeV_events27 = new TH1D("new_histo_group_WZ_wh3l_wz_13TeV_events27","histo_WZ",1,0,2);
   new_histo_group_WZ_wh3l_wz_13TeV_events27->SetBinContent(1,108.6032);
   new_histo_group_WZ_wh3l_wz_13TeV_events27->SetBinError(1,0.7683485);
   new_histo_group_WZ_wh3l_wz_13TeV_events27->SetEntries(22144);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_wz_13TeV_events27->SetFillColor(ci);
   new_histo_group_WZ_wh3l_wz_13TeV_events27->SetFillStyle(3001);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_wz_13TeV_events27->SetLineColor(ci);
   new_histo_group_WZ_wh3l_wz_13TeV_events27->GetXaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_wz_13TeV_events27->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_wz_13TeV_events27->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_wz_13TeV_events27->GetXaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_wz_13TeV_events27->GetYaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_wz_13TeV_events27->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_wz_13TeV_events27->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_wz_13TeV_events27->GetYaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_wz_13TeV_events27->GetZaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_wz_13TeV_events27->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_wz_13TeV_events27->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_wz_13TeV_events27->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_wz_13TeV_events->Add(new_histo_group_WZ_wh3l_wz_13TeV_events,"");
   
   TH1D *new_histo_group_Higgs_wh3l_wz_13TeV_events28 = new TH1D("new_histo_group_Higgs_wh3l_wz_13TeV_events28","histo_H_htt",1,0,2);
   new_histo_group_Higgs_wh3l_wz_13TeV_events28->SetBinContent(1,0.8935238);
   new_histo_group_Higgs_wh3l_wz_13TeV_events28->SetBinError(1,0.03232713);
   new_histo_group_Higgs_wh3l_wz_13TeV_events28->SetEntries(1285);
   new_histo_group_Higgs_wh3l_wz_13TeV_events28->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_wz_13TeV_events28->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_wz_13TeV_events28->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_wz_13TeV_events28->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_wz_13TeV_events28->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_wz_13TeV_events28->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_wz_13TeV_events28->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_wz_13TeV_events28->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_wz_13TeV_events28->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_wz_13TeV_events28->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_wz_13TeV_events28->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_wz_13TeV_events28->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_wz_13TeV_events28->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_wz_13TeV_events28->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_wz_13TeV_events28->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_wz_13TeV_events->Add(new_histo_group_Higgs_wh3l_wz_13TeV_events,"");
   thsBackground_grouped_wh3l_wz_13TeV_events->Draw("hist same");
   
   thsSignal_grouped_wh3l_wz_13TeV_events = new THStack();
   thsSignal_grouped_wh3l_wz_13TeV_events->SetName("thsSignal_grouped_wh3l_wz_13TeV_events");
   thsSignal_grouped_wh3l_wz_13TeV_events->SetTitle("thsSignal_grouped_wh3l_wz_13TeV_events");
   
   TH1F *thsSignal_grouped_wh3l_wz_13TeV_events_stack_6 = new TH1F("thsSignal_grouped_wh3l_wz_13TeV_events_stack_6","thsSignal_grouped_wh3l_wz_13TeV_events",1,0,2);
   thsSignal_grouped_wh3l_wz_13TeV_events_stack_6->SetMinimum(0);
   thsSignal_grouped_wh3l_wz_13TeV_events_stack_6->SetMaximum(0.9721435);
   thsSignal_grouped_wh3l_wz_13TeV_events_stack_6->SetDirectory(0);
   thsSignal_grouped_wh3l_wz_13TeV_events_stack_6->SetStats(0);
   thsSignal_grouped_wh3l_wz_13TeV_events_stack_6->SetLineStyle(0);
   thsSignal_grouped_wh3l_wz_13TeV_events_stack_6->SetMarkerStyle(20);
   thsSignal_grouped_wh3l_wz_13TeV_events_stack_6->GetXaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_wz_13TeV_events_stack_6->GetXaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_wz_13TeV_events_stack_6->GetXaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_wz_13TeV_events_stack_6->GetXaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_wz_13TeV_events_stack_6->GetXaxis()->SetTitleOffset(0.9);
   thsSignal_grouped_wh3l_wz_13TeV_events_stack_6->GetXaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_wz_13TeV_events_stack_6->GetYaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_wz_13TeV_events_stack_6->GetYaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_wz_13TeV_events_stack_6->GetYaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_wz_13TeV_events_stack_6->GetYaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_wz_13TeV_events_stack_6->GetYaxis()->SetTitleOffset(1.25);
   thsSignal_grouped_wh3l_wz_13TeV_events_stack_6->GetYaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_wz_13TeV_events_stack_6->GetZaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_wz_13TeV_events_stack_6->GetZaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_wz_13TeV_events_stack_6->GetZaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_wz_13TeV_events_stack_6->GetZaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_wz_13TeV_events_stack_6->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_wz_13TeV_events->SetHistogram(thsSignal_grouped_wh3l_wz_13TeV_events_stack_6);
   
   
   TH1D *new_histo_group_Higgs_wh3l_wz_13TeV_events29 = new TH1D("new_histo_group_Higgs_wh3l_wz_13TeV_events29","histo_H_htt",1,0,2);
   new_histo_group_Higgs_wh3l_wz_13TeV_events29->SetBinContent(1,0.8935238);
   new_histo_group_Higgs_wh3l_wz_13TeV_events29->SetBinError(1,0.03232713);
   new_histo_group_Higgs_wh3l_wz_13TeV_events29->SetEntries(1285);
   new_histo_group_Higgs_wh3l_wz_13TeV_events29->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_wz_13TeV_events29->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_wz_13TeV_events29->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_wz_13TeV_events29->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_wz_13TeV_events29->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_wz_13TeV_events29->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_wz_13TeV_events29->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_wz_13TeV_events29->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_wz_13TeV_events29->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_wz_13TeV_events29->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_wz_13TeV_events29->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_wz_13TeV_events29->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_wz_13TeV_events29->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_wz_13TeV_events29->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_wz_13TeV_events29->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_wz_13TeV_events->Add(new_histo_group_Higgs_wh3l_wz_13TeV_events,"");
   thsSignal_grouped_wh3l_wz_13TeV_events->Draw("hist same noclear");
   
   Double_t _fx3005[1] = {
   1};
   Double_t _fy3005[1] = {
   131.6295};
   Double_t _felx3005[1] = {
   1};
   Double_t _fely3005[1] = {
   7.195648};
   Double_t _fehx3005[1] = {
   1};
   Double_t _fehy3005[1] = {
   7.158645};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(1,_fx3005,_fy3005,_felx3005,_fehx3005,_fely3005,_fehy3005);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(12);
   grae->SetFillStyle(3004);
   grae->SetLineColor(12);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3005 = new TH1F("Graph_Graph3005","",100,0,2.2);
   Graph_Graph3005->SetMinimum(122.9984);
   Graph_Graph3005->SetMaximum(140.2235);
   Graph_Graph3005->SetDirectory(0);
   Graph_Graph3005->SetStats(0);
   Graph_Graph3005->SetLineStyle(0);
   Graph_Graph3005->SetMarkerStyle(20);
   Graph_Graph3005->GetXaxis()->SetLabelFont(42);
   Graph_Graph3005->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3005->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3005->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3005->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3005->GetXaxis()->SetTitleFont(42);
   Graph_Graph3005->GetYaxis()->SetLabelFont(42);
   Graph_Graph3005->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3005->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3005->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3005->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3005->GetYaxis()->SetTitleFont(42);
   Graph_Graph3005->GetZaxis()->SetLabelFont(42);
   Graph_Graph3005->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3005->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3005->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3005->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3005);
   
   grae->Draw("2");
   
   Double_t _fx3006[1] = {
   1};
   Double_t _fy3006[1] = {
   165};
   Double_t _felx3006[1] = {
   1};
   Double_t _fely3006[1] = {
   12.83247};
   Double_t _fehx3006[1] = {
   1};
   Double_t _fehy3006[1] = {
   13.8715};
   grae = new TGraphAsymmErrors(1,_fx3006,_fy3006,_felx3006,_fehx3006,_fely3006,_fehy3006);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(1);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3006 = new TH1F("Graph_Graph3006","",100,0,2.2);
   Graph_Graph3006->SetMinimum(149.4971);
   Graph_Graph3006->SetMaximum(181.5419);
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
   
   grae->Draw("p0");
   
   TLegend *leg = new TLegend(0.2,0.7,0.8,0.9,NULL,"brNDC");
   leg->SetTextFont(62);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("new_histo_group_Fake_wh3l_wz_13TeV_events","Fake","F");

   ci = TColor::GetColor("#999999");
   entry->SetFillColor(ci);
   entry->SetFillStyle(3001);

   ci = TColor::GetColor("#999999");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_group_WW_wh3l_wz_13TeV_events","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_wz_13TeV_events","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_wz_13TeV_events","Zg","F");

   ci = TColor::GetColor("#0033cc");
   entry->SetFillColor(ci);
   entry->SetFillStyle(3001);

   ci = TColor::GetColor("#0033cc");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_wz_13TeV_events","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_wz_13TeV_events","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_wz_13TeV_events","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_wz_13TeV_events","Data","EPL");
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
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   leg->Draw();
   TLatex *   tex = new TLatex(0.96,0.96,"L = 2.3/fb (13 TeV)");
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
   entry=leg->AddEntry("new_histo_group_Fake_wh3l_wz_13TeV_events","Fake","F");

   ci = TColor::GetColor("#999999");
   entry->SetFillColor(ci);
   entry->SetFillStyle(3001);

   ci = TColor::GetColor("#999999");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_group_WW_wh3l_wz_13TeV_events","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_wz_13TeV_events","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_wz_13TeV_events","Zg","F");

   ci = TColor::GetColor("#0033cc");
   entry->SetFillColor(ci);
   entry->SetFillStyle(3001);

   ci = TColor::GetColor("#0033cc");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_wz_13TeV_events","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_wz_13TeV_events","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_wz_13TeV_events","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_wz_13TeV_events","Data","EPL");
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
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   leg->Draw();
   
   TH1F *hframe_copy30 = new TH1F("hframe_copy30","",1000,0,2);
   hframe_copy30->SetMinimum(0);
   hframe_copy30->SetMaximum(444.6131);
   hframe_copy30->SetDirectory(0);
   hframe_copy30->SetStats(0);
   hframe_copy30->SetLineStyle(0);
   hframe_copy30->SetMarkerStyle(20);
   hframe_copy30->GetXaxis()->SetTitle("events");
   hframe_copy30->GetXaxis()->SetNdivisions(506);
   hframe_copy30->GetXaxis()->SetLabelFont(42);
   hframe_copy30->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy30->GetXaxis()->SetLabelSize(0.05);
   hframe_copy30->GetXaxis()->SetTitleSize(0.06);
   hframe_copy30->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy30->GetXaxis()->SetTitleFont(42);
   hframe_copy30->GetYaxis()->SetTitle("Events");
   hframe_copy30->GetYaxis()->SetLabelFont(42);
   hframe_copy30->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy30->GetYaxis()->SetLabelSize(0.05);
   hframe_copy30->GetYaxis()->SetTitleSize(0.06);
   hframe_copy30->GetYaxis()->SetTitleOffset(1.25);
   hframe_copy30->GetYaxis()->SetTitleFont(42);
   hframe_copy30->GetZaxis()->SetLabelFont(42);
   hframe_copy30->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy30->GetZaxis()->SetLabelSize(0.05);
   hframe_copy30->GetZaxis()->SetTitleSize(0.06);
   hframe_copy30->GetZaxis()->SetTitleFont(42);
   hframe_copy30->Draw("sameaxis");
   ccwh3l_wz_13TeV_events->Modified();
   ccwh3l_wz_13TeV_events->cd();
   ccwh3l_wz_13TeV_events->SetSelected(ccwh3l_wz_13TeV_events);
}
