void c_wh3l_MET_JetV_ZVeto_mll_13TeV_events()
{
//=========Macro generated from canvas: ccwh3l_MET_JetV_ZVeto_mll_13TeV_events/cc
//=========  (Sat Jul  2 21:44:11 2016) by ROOT version6.02/13
   TCanvas *ccwh3l_MET_JetV_ZVeto_mll_13TeV_events = new TCanvas("ccwh3l_MET_JetV_ZVeto_mll_13TeV_events", "cc",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   ccwh3l_MET_JetV_ZVeto_mll_13TeV_events->SetHighLightColor(2);
   ccwh3l_MET_JetV_ZVeto_mll_13TeV_events->Range(-0.4,-3.688886,2.1,24.68716);
   ccwh3l_MET_JetV_ZVeto_mll_13TeV_events->SetFillColor(0);
   ccwh3l_MET_JetV_ZVeto_mll_13TeV_events->SetBorderMode(0);
   ccwh3l_MET_JetV_ZVeto_mll_13TeV_events->SetBorderSize(2);
   ccwh3l_MET_JetV_ZVeto_mll_13TeV_events->SetTickx(1);
   ccwh3l_MET_JetV_ZVeto_mll_13TeV_events->SetTicky(1);
   ccwh3l_MET_JetV_ZVeto_mll_13TeV_events->SetLeftMargin(0.16);
   ccwh3l_MET_JetV_ZVeto_mll_13TeV_events->SetRightMargin(0.04);
   ccwh3l_MET_JetV_ZVeto_mll_13TeV_events->SetTopMargin(0.05);
   ccwh3l_MET_JetV_ZVeto_mll_13TeV_events->SetBottomMargin(0.13);
   ccwh3l_MET_JetV_ZVeto_mll_13TeV_events->SetFrameFillStyle(0);
   ccwh3l_MET_JetV_ZVeto_mll_13TeV_events->SetFrameBorderMode(0);
   ccwh3l_MET_JetV_ZVeto_mll_13TeV_events->SetFrameFillStyle(0);
   ccwh3l_MET_JetV_ZVeto_mll_13TeV_events->SetFrameBorderMode(0);
   
   TH1F *hframe631 = new TH1F("hframe631","",1000,0,2);
   hframe631->SetMinimum(0);
   hframe631->SetMaximum(23.26836);
   hframe631->SetDirectory(0);
   hframe631->SetStats(0);
   hframe631->SetLineStyle(0);
   hframe631->SetMarkerStyle(20);
   hframe631->GetXaxis()->SetTitle("events");
   hframe631->GetXaxis()->SetNdivisions(506);
   hframe631->GetXaxis()->SetLabelFont(42);
   hframe631->GetXaxis()->SetLabelOffset(0.007);
   hframe631->GetXaxis()->SetLabelSize(0.05);
   hframe631->GetXaxis()->SetTitleSize(0.06);
   hframe631->GetXaxis()->SetTitleOffset(0.9);
   hframe631->GetXaxis()->SetTitleFont(42);
   hframe631->GetYaxis()->SetTitle("Events");
   hframe631->GetYaxis()->SetLabelFont(42);
   hframe631->GetYaxis()->SetLabelOffset(0.007);
   hframe631->GetYaxis()->SetLabelSize(0.05);
   hframe631->GetYaxis()->SetTitleSize(0.06);
   hframe631->GetYaxis()->SetTitleOffset(1.25);
   hframe631->GetYaxis()->SetTitleFont(42);
   hframe631->GetZaxis()->SetLabelFont(42);
   hframe631->GetZaxis()->SetLabelOffset(0.007);
   hframe631->GetZaxis()->SetLabelSize(0.05);
   hframe631->GetZaxis()->SetTitleSize(0.06);
   hframe631->GetZaxis()->SetTitleFont(42);
   hframe631->Draw(" ");
   
   THStack *thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_events = new THStack();
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_events->SetName("thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_events");
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_events->SetTitle("thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_events");
   
   TH1F *thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_events_stack_127 = new TH1F("thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_events_stack_127","thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_events",1,0,2);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_events_stack_127->SetMinimum(0);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_events_stack_127->SetMaximum(9.772711);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_events_stack_127->SetDirectory(0);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_events_stack_127->SetStats(0);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_events_stack_127->SetLineStyle(0);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_events_stack_127->SetMarkerStyle(20);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_events_stack_127->GetXaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_events_stack_127->GetXaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_events_stack_127->GetXaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_events_stack_127->GetXaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_events_stack_127->GetXaxis()->SetTitleOffset(0.9);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_events_stack_127->GetXaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_events_stack_127->GetYaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_events_stack_127->GetYaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_events_stack_127->GetYaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_events_stack_127->GetYaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_events_stack_127->GetYaxis()->SetTitleOffset(1.25);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_events_stack_127->GetYaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_events_stack_127->GetZaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_events_stack_127->GetZaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_events_stack_127->GetZaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_events_stack_127->GetZaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_events_stack_127->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_events->SetHistogram(thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_events_stack_127);
   
   
   TH1D *new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_events632 = new TH1D("new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_events632","histo_Fake",1,0,2);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_events632->SetBinContent(1,3.272263);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_events632->SetBinError(1,1.404165);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_events632->SetEntries(36);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_events632->SetFillColor(ci);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_events632->SetFillStyle(3001);

   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_events632->SetLineColor(ci);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_events632->GetXaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_events632->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_events632->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_events632->GetXaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_events632->GetYaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_events632->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_events632->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_events632->GetYaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_events632->GetZaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_events632->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_events632->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_events632->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_events->Add(new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_events,"");
   
   TH1D *new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_events633 = new TH1D("new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_events633","histo_WW",1,0,2);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_events633->SetBinContent(1,0.01530373);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_events633->SetBinError(1,0.01530373);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_events633->SetEntries(1);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_events633->SetFillColor(ci);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_events633->SetFillStyle(3001);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_events633->SetLineColor(ci);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_events633->GetXaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_events633->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_events633->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_events633->GetXaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_events633->GetYaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_events633->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_events633->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_events633->GetYaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_events633->GetZaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_events633->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_events633->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_events633->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_events->Add(new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_events,"");
   
   TH1D *new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_events634 = new TH1D("new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_events634","histo_VVV",1,0,2);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_events634->SetBinContent(1,0.08335565);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_events634->SetBinError(1,0.01435764);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_events634->SetEntries(41);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_events634->SetFillColor(ci);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_events634->SetFillStyle(3001);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_events634->SetLineColor(ci);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_events634->GetXaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_events634->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_events634->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_events634->GetXaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_events634->GetYaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_events634->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_events634->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_events634->GetYaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_events634->GetZaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_events634->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_events634->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_events634->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_events->Add(new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_events,"");
   
   TH1D *new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_events635 = new TH1D("new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_events635","histo_Vg",1,0,2);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_events635->SetBinContent(1,1.240414);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_events635->SetBinError(1,0.385847);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_events635->SetEntries(18);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_events635->SetFillColor(ci);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_events635->SetFillStyle(3001);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_events635->SetLineColor(ci);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_events635->GetXaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_events635->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_events635->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_events635->GetXaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_events635->GetYaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_events635->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_events635->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_events635->GetYaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_events635->GetZaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_events635->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_events635->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_events635->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_events->Add(new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_events,"");
   
   TH1D *new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_events636 = new TH1D("new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_events636","histo_ZZ",1,0,2);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_events636->SetBinContent(1,0.2513989);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_events636->SetBinError(1,0.09765056);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_events636->SetEntries(7);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_events636->SetFillColor(ci);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_events636->SetFillStyle(3001);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_events636->SetLineColor(ci);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_events636->GetXaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_events636->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_events636->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_events636->GetXaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_events636->GetYaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_events636->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_events636->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_events636->GetYaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_events636->GetZaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_events636->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_events636->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_events636->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_events->Add(new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_events,"");
   
   TH1D *new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_events637 = new TH1D("new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_events637","histo_WZ",1,0,2);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_events637->SetBinContent(1,4.087576);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_events637->SetBinError(1,0.1490327);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_events637->SetEntries(837);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_events637->SetFillColor(ci);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_events637->SetFillStyle(3001);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_events637->SetLineColor(ci);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_events637->GetXaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_events637->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_events637->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_events637->GetXaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_events637->GetYaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_events637->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_events637->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_events637->GetYaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_events637->GetZaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_events637->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_events637->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_events637->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_events->Add(new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_events,"");
   
   TH1D *new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_events638 = new TH1D("new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_events638","histo_H_htt",1,0,2);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_events638->SetBinContent(1,0.3570326);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_events638->SetBinError(1,0.02156582);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_events638->SetEntries(471);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_events638->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_events638->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_events638->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_events638->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_events638->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_events638->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_events638->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_events638->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_events638->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_events638->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_events638->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_events638->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_events638->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_events638->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_events638->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_events->Add(new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_events,"");
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_events->Draw("hist same");
   
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_events = new THStack();
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_events->SetName("thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_events");
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_events->SetTitle("thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_events");
   
   TH1F *thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_events_stack_128 = new TH1F("thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_events_stack_128","thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_events",1,0,2);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_events_stack_128->SetMinimum(0);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_events_stack_128->SetMaximum(0.3975284);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_events_stack_128->SetDirectory(0);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_events_stack_128->SetStats(0);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_events_stack_128->SetLineStyle(0);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_events_stack_128->SetMarkerStyle(20);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_events_stack_128->GetXaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_events_stack_128->GetXaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_events_stack_128->GetXaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_events_stack_128->GetXaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_events_stack_128->GetXaxis()->SetTitleOffset(0.9);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_events_stack_128->GetXaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_events_stack_128->GetYaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_events_stack_128->GetYaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_events_stack_128->GetYaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_events_stack_128->GetYaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_events_stack_128->GetYaxis()->SetTitleOffset(1.25);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_events_stack_128->GetYaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_events_stack_128->GetZaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_events_stack_128->GetZaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_events_stack_128->GetZaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_events_stack_128->GetZaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_events_stack_128->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_events->SetHistogram(thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_events_stack_128);
   
   
   TH1D *new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_events639 = new TH1D("new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_events639","histo_H_htt",1,0,2);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_events639->SetBinContent(1,0.3570326);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_events639->SetBinError(1,0.02156582);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_events639->SetEntries(471);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_events639->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_events639->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_events639->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_events639->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_events639->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_events639->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_events639->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_events639->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_events639->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_events639->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_events639->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_events639->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_events639->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_events639->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_events639->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_events->Add(new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_events,"");
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_events->Draw("hist same noclear");
   
   Double_t _fx3127[1] = {
   1};
   Double_t _fy3127[1] = {
   8.950312};
   Double_t _felx3127[1] = {
   1};
   Double_t _fely3127[1] = {
   2.383414};
   Double_t _fehx3127[1] = {
   1};
   Double_t _fehy3127[1] = {
   2.382136};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(1,_fx3127,_fy3127,_felx3127,_fehx3127,_fely3127,_fehy3127);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(12);
   grae->SetFillStyle(3004);
   grae->SetLineColor(12);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3127 = new TH1F("Graph_Graph3127","",100,0,2.2);
   Graph_Graph3127->SetMinimum(6.090343);
   Graph_Graph3127->SetMaximum(11.809);
   Graph_Graph3127->SetDirectory(0);
   Graph_Graph3127->SetStats(0);
   Graph_Graph3127->SetLineStyle(0);
   Graph_Graph3127->SetMarkerStyle(20);
   Graph_Graph3127->GetXaxis()->SetLabelFont(42);
   Graph_Graph3127->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3127->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3127->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3127->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3127->GetXaxis()->SetTitleFont(42);
   Graph_Graph3127->GetYaxis()->SetLabelFont(42);
   Graph_Graph3127->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3127->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3127->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3127->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3127->GetYaxis()->SetTitleFont(42);
   Graph_Graph3127->GetZaxis()->SetLabelFont(42);
   Graph_Graph3127->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3127->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3127->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3127->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3127);
   
   grae->Draw("2");
   
   Double_t _fx3128[1] = {
   1};
   Double_t _fy3128[1] = {
   6};
   Double_t _felx3128[1] = {
   1};
   Double_t _fely3128[1] = {
   2.379969};
   Double_t _fehx3128[1] = {
   1};
   Double_t _fehy3128[1] = {
   3.583713};
   grae = new TGraphAsymmErrors(1,_fx3128,_fy3128,_felx3128,_fehx3128,_fely3128,_fehy3128);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(1);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3128 = new TH1F("Graph_Graph3128","",100,0,2.2);
   Graph_Graph3128->SetMinimum(3.023662);
   Graph_Graph3128->SetMaximum(10.18008);
   Graph_Graph3128->SetDirectory(0);
   Graph_Graph3128->SetStats(0);
   Graph_Graph3128->SetLineStyle(0);
   Graph_Graph3128->SetMarkerStyle(20);
   Graph_Graph3128->GetXaxis()->SetLabelFont(42);
   Graph_Graph3128->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3128->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3128->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3128->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3128->GetXaxis()->SetTitleFont(42);
   Graph_Graph3128->GetYaxis()->SetLabelFont(42);
   Graph_Graph3128->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3128->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3128->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3128->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3128->GetYaxis()->SetTitleFont(42);
   Graph_Graph3128->GetZaxis()->SetLabelFont(42);
   Graph_Graph3128->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3128->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3128->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3128->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3128);
   
   grae->Draw("p0");
   
   TLegend *leg = new TLegend(0.2,0.7,0.8,0.9,NULL,"brNDC");
   leg->SetTextFont(62);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_events","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_events","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_events","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_events","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_events","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_events","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_events","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_MET_JetV_ZVeto_mll_13TeV_events","Data","EPL");
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
   entry=leg->AddEntry("new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_events","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_events","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_events","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_events","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_events","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_events","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_events","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_MET_JetV_ZVeto_mll_13TeV_events","Data","EPL");
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
   
   TH1F *hframe_copy640 = new TH1F("hframe_copy640","",1000,0,2);
   hframe_copy640->SetMinimum(0);
   hframe_copy640->SetMaximum(23.26836);
   hframe_copy640->SetDirectory(0);
   hframe_copy640->SetStats(0);
   hframe_copy640->SetLineStyle(0);
   hframe_copy640->SetMarkerStyle(20);
   hframe_copy640->GetXaxis()->SetTitle("events");
   hframe_copy640->GetXaxis()->SetNdivisions(506);
   hframe_copy640->GetXaxis()->SetLabelFont(42);
   hframe_copy640->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy640->GetXaxis()->SetLabelSize(0.05);
   hframe_copy640->GetXaxis()->SetTitleSize(0.06);
   hframe_copy640->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy640->GetXaxis()->SetTitleFont(42);
   hframe_copy640->GetYaxis()->SetTitle("Events");
   hframe_copy640->GetYaxis()->SetLabelFont(42);
   hframe_copy640->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy640->GetYaxis()->SetLabelSize(0.05);
   hframe_copy640->GetYaxis()->SetTitleSize(0.06);
   hframe_copy640->GetYaxis()->SetTitleOffset(1.25);
   hframe_copy640->GetYaxis()->SetTitleFont(42);
   hframe_copy640->GetZaxis()->SetLabelFont(42);
   hframe_copy640->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy640->GetZaxis()->SetLabelSize(0.05);
   hframe_copy640->GetZaxis()->SetTitleSize(0.06);
   hframe_copy640->GetZaxis()->SetTitleFont(42);
   hframe_copy640->Draw("sameaxis");
   ccwh3l_MET_JetV_ZVeto_mll_13TeV_events->Modified();
   ccwh3l_MET_JetV_ZVeto_mll_13TeV_events->cd();
   ccwh3l_MET_JetV_ZVeto_mll_13TeV_events->SetSelected(ccwh3l_MET_JetV_ZVeto_mll_13TeV_events);
}
