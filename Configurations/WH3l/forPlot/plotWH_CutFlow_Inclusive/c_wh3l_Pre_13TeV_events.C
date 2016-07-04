void c_wh3l_Pre_13TeV_events()
{
//=========Macro generated from canvas: ccwh3l_Pre_13TeV_events/cc
//=========  (Sun Jul  3 16:19:11 2016) by ROOT version6.02/13
   TCanvas *ccwh3l_Pre_13TeV_events = new TCanvas("ccwh3l_Pre_13TeV_events", "cc",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   ccwh3l_Pre_13TeV_events->SetHighLightColor(2);
   ccwh3l_Pre_13TeV_events->Range(-0.4,-385.7582,2.1,2581.613);
   ccwh3l_Pre_13TeV_events->SetFillColor(0);
   ccwh3l_Pre_13TeV_events->SetBorderMode(0);
   ccwh3l_Pre_13TeV_events->SetBorderSize(2);
   ccwh3l_Pre_13TeV_events->SetTickx(1);
   ccwh3l_Pre_13TeV_events->SetTicky(1);
   ccwh3l_Pre_13TeV_events->SetLeftMargin(0.16);
   ccwh3l_Pre_13TeV_events->SetRightMargin(0.04);
   ccwh3l_Pre_13TeV_events->SetTopMargin(0.05);
   ccwh3l_Pre_13TeV_events->SetBottomMargin(0.13);
   ccwh3l_Pre_13TeV_events->SetFrameFillStyle(0);
   ccwh3l_Pre_13TeV_events->SetFrameBorderMode(0);
   ccwh3l_Pre_13TeV_events->SetFrameFillStyle(0);
   ccwh3l_Pre_13TeV_events->SetFrameBorderMode(0);
   
   TH1F *hframe281 = new TH1F("hframe281","",1000,0,2);
   hframe281->SetMinimum(0);
   hframe281->SetMaximum(2433.244);
   hframe281->SetDirectory(0);
   hframe281->SetStats(0);
   hframe281->SetLineStyle(0);
   hframe281->SetMarkerStyle(20);
   hframe281->GetXaxis()->SetTitle("events");
   hframe281->GetXaxis()->SetNdivisions(506);
   hframe281->GetXaxis()->SetLabelFont(42);
   hframe281->GetXaxis()->SetLabelOffset(0.007);
   hframe281->GetXaxis()->SetLabelSize(0.05);
   hframe281->GetXaxis()->SetTitleSize(0.06);
   hframe281->GetXaxis()->SetTitleOffset(0.9);
   hframe281->GetXaxis()->SetTitleFont(42);
   hframe281->GetYaxis()->SetTitle("Events");
   hframe281->GetYaxis()->SetLabelFont(42);
   hframe281->GetYaxis()->SetLabelOffset(0.007);
   hframe281->GetYaxis()->SetLabelSize(0.05);
   hframe281->GetYaxis()->SetTitleSize(0.06);
   hframe281->GetYaxis()->SetTitleOffset(1.25);
   hframe281->GetYaxis()->SetTitleFont(42);
   hframe281->GetZaxis()->SetLabelFont(42);
   hframe281->GetZaxis()->SetLabelOffset(0.007);
   hframe281->GetZaxis()->SetLabelSize(0.05);
   hframe281->GetZaxis()->SetTitleSize(0.06);
   hframe281->GetZaxis()->SetTitleFont(42);
   hframe281->Draw(" ");
   
   THStack *thsBackground_grouped_wh3l_Pre_13TeV_events = new THStack();
   thsBackground_grouped_wh3l_Pre_13TeV_events->SetName("thsBackground_grouped_wh3l_Pre_13TeV_events");
   thsBackground_grouped_wh3l_Pre_13TeV_events->SetTitle("thsBackground_grouped_wh3l_Pre_13TeV_events");
   
   TH1F *thsBackground_grouped_wh3l_Pre_13TeV_events_stack_57 = new TH1F("thsBackground_grouped_wh3l_Pre_13TeV_events_stack_57","thsBackground_grouped_wh3l_Pre_13TeV_events",1,0,2);
   thsBackground_grouped_wh3l_Pre_13TeV_events_stack_57->SetMinimum(0);
   thsBackground_grouped_wh3l_Pre_13TeV_events_stack_57->SetMaximum(1021.963);
   thsBackground_grouped_wh3l_Pre_13TeV_events_stack_57->SetDirectory(0);
   thsBackground_grouped_wh3l_Pre_13TeV_events_stack_57->SetStats(0);
   thsBackground_grouped_wh3l_Pre_13TeV_events_stack_57->SetLineStyle(0);
   thsBackground_grouped_wh3l_Pre_13TeV_events_stack_57->SetMarkerStyle(20);
   thsBackground_grouped_wh3l_Pre_13TeV_events_stack_57->GetXaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_Pre_13TeV_events_stack_57->GetXaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_Pre_13TeV_events_stack_57->GetXaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_Pre_13TeV_events_stack_57->GetXaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_Pre_13TeV_events_stack_57->GetXaxis()->SetTitleOffset(0.9);
   thsBackground_grouped_wh3l_Pre_13TeV_events_stack_57->GetXaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_Pre_13TeV_events_stack_57->GetYaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_Pre_13TeV_events_stack_57->GetYaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_Pre_13TeV_events_stack_57->GetYaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_Pre_13TeV_events_stack_57->GetYaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_Pre_13TeV_events_stack_57->GetYaxis()->SetTitleOffset(1.25);
   thsBackground_grouped_wh3l_Pre_13TeV_events_stack_57->GetYaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_Pre_13TeV_events_stack_57->GetZaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_Pre_13TeV_events_stack_57->GetZaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_Pre_13TeV_events_stack_57->GetZaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_Pre_13TeV_events_stack_57->GetZaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_Pre_13TeV_events_stack_57->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_Pre_13TeV_events->SetHistogram(thsBackground_grouped_wh3l_Pre_13TeV_events_stack_57);
   
   
   TH1D *new_histo_group_Fake_wh3l_Pre_13TeV_events282 = new TH1D("new_histo_group_Fake_wh3l_Pre_13TeV_events282","histo_Fake",1,0,2);
   new_histo_group_Fake_wh3l_Pre_13TeV_events282->SetBinContent(1,311.0171);
   new_histo_group_Fake_wh3l_Pre_13TeV_events282->SetBinError(1,13.82961);
   new_histo_group_Fake_wh3l_Pre_13TeV_events282->SetEntries(4042);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_Pre_13TeV_events282->SetFillColor(ci);
   new_histo_group_Fake_wh3l_Pre_13TeV_events282->SetFillStyle(3001);

   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_Pre_13TeV_events282->SetLineColor(ci);
   new_histo_group_Fake_wh3l_Pre_13TeV_events282->GetXaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_Pre_13TeV_events282->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_Pre_13TeV_events282->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_Pre_13TeV_events282->GetXaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_Pre_13TeV_events282->GetYaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_Pre_13TeV_events282->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_Pre_13TeV_events282->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_Pre_13TeV_events282->GetYaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_Pre_13TeV_events282->GetZaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_Pre_13TeV_events282->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_Pre_13TeV_events282->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_Pre_13TeV_events282->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_Pre_13TeV_events->Add(new_histo_group_Fake_wh3l_Pre_13TeV_events,"");
   
   TH1D *new_histo_group_WW_wh3l_Pre_13TeV_events283 = new TH1D("new_histo_group_WW_wh3l_Pre_13TeV_events283","histo_WW",1,0,2);
   new_histo_group_WW_wh3l_Pre_13TeV_events283->SetBinContent(1,0.6299897);
   new_histo_group_WW_wh3l_Pre_13TeV_events283->SetBinError(1,0.0987295);
   new_histo_group_WW_wh3l_Pre_13TeV_events283->SetEntries(44);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_Pre_13TeV_events283->SetFillColor(ci);
   new_histo_group_WW_wh3l_Pre_13TeV_events283->SetFillStyle(3001);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_Pre_13TeV_events283->SetLineColor(ci);
   new_histo_group_WW_wh3l_Pre_13TeV_events283->GetXaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_Pre_13TeV_events283->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_Pre_13TeV_events283->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_Pre_13TeV_events283->GetXaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_Pre_13TeV_events283->GetYaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_Pre_13TeV_events283->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_Pre_13TeV_events283->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_Pre_13TeV_events283->GetYaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_Pre_13TeV_events283->GetZaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_Pre_13TeV_events283->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_Pre_13TeV_events283->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_Pre_13TeV_events283->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_Pre_13TeV_events->Add(new_histo_group_WW_wh3l_Pre_13TeV_events,"");
   
   TH1D *new_histo_group_VVV_wh3l_Pre_13TeV_events284 = new TH1D("new_histo_group_VVV_wh3l_Pre_13TeV_events284","histo_VVV",1,0,2);
   new_histo_group_VVV_wh3l_Pre_13TeV_events284->SetBinContent(1,5.577941);
   new_histo_group_VVV_wh3l_Pre_13TeV_events284->SetBinError(1,0.1039932);
   new_histo_group_VVV_wh3l_Pre_13TeV_events284->SetEntries(5218);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_Pre_13TeV_events284->SetFillColor(ci);
   new_histo_group_VVV_wh3l_Pre_13TeV_events284->SetFillStyle(3001);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_Pre_13TeV_events284->SetLineColor(ci);
   new_histo_group_VVV_wh3l_Pre_13TeV_events284->GetXaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_Pre_13TeV_events284->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_Pre_13TeV_events284->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_Pre_13TeV_events284->GetXaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_Pre_13TeV_events284->GetYaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_Pre_13TeV_events284->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_Pre_13TeV_events284->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_Pre_13TeV_events284->GetYaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_Pre_13TeV_events284->GetZaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_Pre_13TeV_events284->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_Pre_13TeV_events284->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_Pre_13TeV_events284->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_Pre_13TeV_events->Add(new_histo_group_VVV_wh3l_Pre_13TeV_events,"");
   
   TH1D *new_histo_group_Vg_wh3l_Pre_13TeV_events285 = new TH1D("new_histo_group_Vg_wh3l_Pre_13TeV_events285","histo_Vg",1,0,2);
   new_histo_group_Vg_wh3l_Pre_13TeV_events285->SetBinContent(1,226.7379);
   new_histo_group_Vg_wh3l_Pre_13TeV_events285->SetBinError(1,5.986188);
   new_histo_group_Vg_wh3l_Pre_13TeV_events285->SetEntries(3347);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_Pre_13TeV_events285->SetFillColor(ci);
   new_histo_group_Vg_wh3l_Pre_13TeV_events285->SetFillStyle(3001);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_Pre_13TeV_events285->SetLineColor(ci);
   new_histo_group_Vg_wh3l_Pre_13TeV_events285->GetXaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_Pre_13TeV_events285->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_Pre_13TeV_events285->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_Pre_13TeV_events285->GetXaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_Pre_13TeV_events285->GetYaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_Pre_13TeV_events285->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_Pre_13TeV_events285->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_Pre_13TeV_events285->GetYaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_Pre_13TeV_events285->GetZaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_Pre_13TeV_events285->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_Pre_13TeV_events285->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_Pre_13TeV_events285->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_Pre_13TeV_events->Add(new_histo_group_Vg_wh3l_Pre_13TeV_events,"");
   
   TH1D *new_histo_group_ZZ_wh3l_Pre_13TeV_events286 = new TH1D("new_histo_group_ZZ_wh3l_Pre_13TeV_events286","histo_ZZ",1,0,2);
   new_histo_group_ZZ_wh3l_Pre_13TeV_events286->SetBinContent(1,53.6831);
   new_histo_group_ZZ_wh3l_Pre_13TeV_events286->SetBinError(1,1.486133);
   new_histo_group_ZZ_wh3l_Pre_13TeV_events286->SetEntries(1451);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_Pre_13TeV_events286->SetFillColor(ci);
   new_histo_group_ZZ_wh3l_Pre_13TeV_events286->SetFillStyle(3001);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_Pre_13TeV_events286->SetLineColor(ci);
   new_histo_group_ZZ_wh3l_Pre_13TeV_events286->GetXaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_Pre_13TeV_events286->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_Pre_13TeV_events286->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_Pre_13TeV_events286->GetXaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_Pre_13TeV_events286->GetYaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_Pre_13TeV_events286->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_Pre_13TeV_events286->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_Pre_13TeV_events286->GetYaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_Pre_13TeV_events286->GetZaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_Pre_13TeV_events286->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_Pre_13TeV_events286->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_Pre_13TeV_events286->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_Pre_13TeV_events->Add(new_histo_group_ZZ_wh3l_Pre_13TeV_events,"");
   
   TH1D *new_histo_group_WZ_wh3l_Pre_13TeV_events287 = new TH1D("new_histo_group_WZ_wh3l_Pre_13TeV_events287","histo_WZ",1,0,2);
   new_histo_group_WZ_wh3l_Pre_13TeV_events287->SetBinContent(1,370.1444);
   new_histo_group_WZ_wh3l_Pre_13TeV_events287->SetBinError(1,1.420219);
   new_histo_group_WZ_wh3l_Pre_13TeV_events287->SetEntries(75011);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_Pre_13TeV_events287->SetFillColor(ci);
   new_histo_group_WZ_wh3l_Pre_13TeV_events287->SetFillStyle(3001);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_Pre_13TeV_events287->SetLineColor(ci);
   new_histo_group_WZ_wh3l_Pre_13TeV_events287->GetXaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_Pre_13TeV_events287->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_Pre_13TeV_events287->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_Pre_13TeV_events287->GetXaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_Pre_13TeV_events287->GetYaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_Pre_13TeV_events287->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_Pre_13TeV_events287->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_Pre_13TeV_events287->GetYaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_Pre_13TeV_events287->GetZaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_Pre_13TeV_events287->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_Pre_13TeV_events287->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_Pre_13TeV_events287->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_Pre_13TeV_events->Add(new_histo_group_WZ_wh3l_Pre_13TeV_events,"");
   
   TH1D *new_histo_group_Higgs_wh3l_Pre_13TeV_events288 = new TH1D("new_histo_group_Higgs_wh3l_Pre_13TeV_events288","histo_H_htt",1,0,2);
   new_histo_group_Higgs_wh3l_Pre_13TeV_events288->SetBinContent(1,5.507195);
   new_histo_group_Higgs_wh3l_Pre_13TeV_events288->SetBinError(1,0.07662073);
   new_histo_group_Higgs_wh3l_Pre_13TeV_events288->SetEntries(8925);
   new_histo_group_Higgs_wh3l_Pre_13TeV_events288->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_Pre_13TeV_events288->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_Pre_13TeV_events288->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_Pre_13TeV_events288->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_Pre_13TeV_events288->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_Pre_13TeV_events288->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_Pre_13TeV_events288->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_Pre_13TeV_events288->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_Pre_13TeV_events288->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_Pre_13TeV_events288->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_Pre_13TeV_events288->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_Pre_13TeV_events288->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_Pre_13TeV_events288->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_Pre_13TeV_events288->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_Pre_13TeV_events288->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_Pre_13TeV_events->Add(new_histo_group_Higgs_wh3l_Pre_13TeV_events,"");
   thsBackground_grouped_wh3l_Pre_13TeV_events->Draw("hist same");
   
   thsSignal_grouped_wh3l_Pre_13TeV_events = new THStack();
   thsSignal_grouped_wh3l_Pre_13TeV_events->SetName("thsSignal_grouped_wh3l_Pre_13TeV_events");
   thsSignal_grouped_wh3l_Pre_13TeV_events->SetTitle("thsSignal_grouped_wh3l_Pre_13TeV_events");
   
   TH1F *thsSignal_grouped_wh3l_Pre_13TeV_events_stack_58 = new TH1F("thsSignal_grouped_wh3l_Pre_13TeV_events_stack_58","thsSignal_grouped_wh3l_Pre_13TeV_events",1,0,2);
   thsSignal_grouped_wh3l_Pre_13TeV_events_stack_58->SetMinimum(0);
   thsSignal_grouped_wh3l_Pre_13TeV_events_stack_58->SetMaximum(5.863006);
   thsSignal_grouped_wh3l_Pre_13TeV_events_stack_58->SetDirectory(0);
   thsSignal_grouped_wh3l_Pre_13TeV_events_stack_58->SetStats(0);
   thsSignal_grouped_wh3l_Pre_13TeV_events_stack_58->SetLineStyle(0);
   thsSignal_grouped_wh3l_Pre_13TeV_events_stack_58->SetMarkerStyle(20);
   thsSignal_grouped_wh3l_Pre_13TeV_events_stack_58->GetXaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_Pre_13TeV_events_stack_58->GetXaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_Pre_13TeV_events_stack_58->GetXaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_Pre_13TeV_events_stack_58->GetXaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_Pre_13TeV_events_stack_58->GetXaxis()->SetTitleOffset(0.9);
   thsSignal_grouped_wh3l_Pre_13TeV_events_stack_58->GetXaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_Pre_13TeV_events_stack_58->GetYaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_Pre_13TeV_events_stack_58->GetYaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_Pre_13TeV_events_stack_58->GetYaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_Pre_13TeV_events_stack_58->GetYaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_Pre_13TeV_events_stack_58->GetYaxis()->SetTitleOffset(1.25);
   thsSignal_grouped_wh3l_Pre_13TeV_events_stack_58->GetYaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_Pre_13TeV_events_stack_58->GetZaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_Pre_13TeV_events_stack_58->GetZaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_Pre_13TeV_events_stack_58->GetZaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_Pre_13TeV_events_stack_58->GetZaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_Pre_13TeV_events_stack_58->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_Pre_13TeV_events->SetHistogram(thsSignal_grouped_wh3l_Pre_13TeV_events_stack_58);
   
   
   TH1D *new_histo_group_Higgs_wh3l_Pre_13TeV_events289 = new TH1D("new_histo_group_Higgs_wh3l_Pre_13TeV_events289","histo_H_htt",1,0,2);
   new_histo_group_Higgs_wh3l_Pre_13TeV_events289->SetBinContent(1,5.507195);
   new_histo_group_Higgs_wh3l_Pre_13TeV_events289->SetBinError(1,0.07662073);
   new_histo_group_Higgs_wh3l_Pre_13TeV_events289->SetEntries(8925);
   new_histo_group_Higgs_wh3l_Pre_13TeV_events289->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_Pre_13TeV_events289->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_Pre_13TeV_events289->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_Pre_13TeV_events289->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_Pre_13TeV_events289->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_Pre_13TeV_events289->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_Pre_13TeV_events289->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_Pre_13TeV_events289->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_Pre_13TeV_events289->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_Pre_13TeV_events289->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_Pre_13TeV_events289->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_Pre_13TeV_events289->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_Pre_13TeV_events289->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_Pre_13TeV_events289->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_Pre_13TeV_events289->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_Pre_13TeV_events->Add(new_histo_group_Higgs_wh3l_Pre_13TeV_events,"");
   thsSignal_grouped_wh3l_Pre_13TeV_events->Draw("hist same noclear");
   
   Double_t _fx3057[1] = {
   1};
   Double_t _fy3057[1] = {
   967.7905};
   Double_t _felx3057[1] = {
   1};
   Double_t _fely3057[1] = {
   112.9956};
   Double_t _fehx3057[1] = {
   1};
   Double_t _fehy3057[1] = {
   112.8935};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(1,_fx3057,_fy3057,_felx3057,_fehx3057,_fely3057,_fehy3057);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(12);
   grae->SetFillStyle(3004);
   grae->SetLineColor(12);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3057 = new TH1F("Graph_Graph3057","",100,0,2.2);
   Graph_Graph3057->SetMinimum(832.206);
   Graph_Graph3057->SetMaximum(1103.273);
   Graph_Graph3057->SetDirectory(0);
   Graph_Graph3057->SetStats(0);
   Graph_Graph3057->SetLineStyle(0);
   Graph_Graph3057->SetMarkerStyle(20);
   Graph_Graph3057->GetXaxis()->SetLabelFont(42);
   Graph_Graph3057->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3057->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3057->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3057->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3057->GetXaxis()->SetTitleFont(42);
   Graph_Graph3057->GetYaxis()->SetLabelFont(42);
   Graph_Graph3057->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3057->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3057->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3057->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3057->GetYaxis()->SetTitleFont(42);
   Graph_Graph3057->GetZaxis()->SetLabelFont(42);
   Graph_Graph3057->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3057->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3057->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3057->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3057);
   
   grae->Draw("2");
   
   Double_t _fx3058[1] = {
   1};
   Double_t _fy3058[1] = {
   0};
   Double_t _felx3058[1] = {
   1};
   Double_t _fely3058[1] = {
   0};
   Double_t _fehx3058[1] = {
   1};
   Double_t _fehy3058[1] = {
   1.147908};
   grae = new TGraphAsymmErrors(1,_fx3058,_fy3058,_felx3058,_fehx3058,_fely3058,_fehy3058);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(1);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3058 = new TH1F("Graph_Graph3058","",100,0,2.2);
   Graph_Graph3058->SetMinimum(0);
   Graph_Graph3058->SetMaximum(1.262698);
   Graph_Graph3058->SetDirectory(0);
   Graph_Graph3058->SetStats(0);
   Graph_Graph3058->SetLineStyle(0);
   Graph_Graph3058->SetMarkerStyle(20);
   Graph_Graph3058->GetXaxis()->SetLabelFont(42);
   Graph_Graph3058->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3058->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3058->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3058->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3058->GetXaxis()->SetTitleFont(42);
   Graph_Graph3058->GetYaxis()->SetLabelFont(42);
   Graph_Graph3058->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3058->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3058->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3058->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3058->GetYaxis()->SetTitleFont(42);
   Graph_Graph3058->GetZaxis()->SetLabelFont(42);
   Graph_Graph3058->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3058->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3058->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3058->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3058);
   
   grae->Draw("p0");
   
   TLegend *leg = new TLegend(0.2,0.7,0.8,0.9,NULL,"brNDC");
   leg->SetTextFont(62);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("new_histo_group_Fake_wh3l_Pre_13TeV_events","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_Pre_13TeV_events","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_Pre_13TeV_events","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_Pre_13TeV_events","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_Pre_13TeV_events","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_Pre_13TeV_events","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_Pre_13TeV_events","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_Pre_13TeV_events","Data","EPL");
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
   entry=leg->AddEntry("new_histo_group_Fake_wh3l_Pre_13TeV_events","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_Pre_13TeV_events","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_Pre_13TeV_events","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_Pre_13TeV_events","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_Pre_13TeV_events","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_Pre_13TeV_events","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_Pre_13TeV_events","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_Pre_13TeV_events","Data","EPL");
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
   
   TH1F *hframe_copy290 = new TH1F("hframe_copy290","",1000,0,2);
   hframe_copy290->SetMinimum(0);
   hframe_copy290->SetMaximum(2433.244);
   hframe_copy290->SetDirectory(0);
   hframe_copy290->SetStats(0);
   hframe_copy290->SetLineStyle(0);
   hframe_copy290->SetMarkerStyle(20);
   hframe_copy290->GetXaxis()->SetTitle("events");
   hframe_copy290->GetXaxis()->SetNdivisions(506);
   hframe_copy290->GetXaxis()->SetLabelFont(42);
   hframe_copy290->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy290->GetXaxis()->SetLabelSize(0.05);
   hframe_copy290->GetXaxis()->SetTitleSize(0.06);
   hframe_copy290->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy290->GetXaxis()->SetTitleFont(42);
   hframe_copy290->GetYaxis()->SetTitle("Events");
   hframe_copy290->GetYaxis()->SetLabelFont(42);
   hframe_copy290->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy290->GetYaxis()->SetLabelSize(0.05);
   hframe_copy290->GetYaxis()->SetTitleSize(0.06);
   hframe_copy290->GetYaxis()->SetTitleOffset(1.25);
   hframe_copy290->GetYaxis()->SetTitleFont(42);
   hframe_copy290->GetZaxis()->SetLabelFont(42);
   hframe_copy290->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy290->GetZaxis()->SetLabelSize(0.05);
   hframe_copy290->GetZaxis()->SetTitleSize(0.06);
   hframe_copy290->GetZaxis()->SetTitleFont(42);
   hframe_copy290->Draw("sameaxis");
   ccwh3l_Pre_13TeV_events->Modified();
   ccwh3l_Pre_13TeV_events->cd();
   ccwh3l_Pre_13TeV_events->SetSelected(ccwh3l_Pre_13TeV_events);
}
