void c_wh3l_Pre_13TeV_zveto_3l()
{
//=========Macro generated from canvas: ccwh3l_Pre_13TeV_zveto_3l/cc
//=========  (Sun Jul  3 01:22:02 2016) by ROOT version6.02/13
   TCanvas *ccwh3l_Pre_13TeV_zveto_3l = new TCanvas("ccwh3l_Pre_13TeV_zveto_3l", "cc",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   ccwh3l_Pre_13TeV_zveto_3l->SetHighLightColor(2);
   ccwh3l_Pre_13TeV_zveto_3l->Range(-20,-9.941746,105,66.53323);
   ccwh3l_Pre_13TeV_zveto_3l->SetFillColor(0);
   ccwh3l_Pre_13TeV_zveto_3l->SetBorderMode(0);
   ccwh3l_Pre_13TeV_zveto_3l->SetBorderSize(2);
   ccwh3l_Pre_13TeV_zveto_3l->SetTickx(1);
   ccwh3l_Pre_13TeV_zveto_3l->SetTicky(1);
   ccwh3l_Pre_13TeV_zveto_3l->SetLeftMargin(0.16);
   ccwh3l_Pre_13TeV_zveto_3l->SetRightMargin(0.04);
   ccwh3l_Pre_13TeV_zveto_3l->SetTopMargin(0.05);
   ccwh3l_Pre_13TeV_zveto_3l->SetBottomMargin(0.13);
   ccwh3l_Pre_13TeV_zveto_3l->SetFrameFillStyle(0);
   ccwh3l_Pre_13TeV_zveto_3l->SetFrameBorderMode(0);
   ccwh3l_Pre_13TeV_zveto_3l->SetFrameFillStyle(0);
   ccwh3l_Pre_13TeV_zveto_3l->SetFrameBorderMode(0);
   
   TH1F *hframe281 = new TH1F("hframe281","",1000,0,100);
   hframe281->SetMinimum(0);
   hframe281->SetMaximum(62.70948);
   hframe281->SetDirectory(0);
   hframe281->SetStats(0);
   hframe281->SetLineStyle(0);
   hframe281->SetMarkerStyle(20);
   hframe281->GetXaxis()->SetTitle("m_{ll} - M_{Z} [GeV]");
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
   
   THStack *thsBackground_grouped_wh3l_Pre_13TeV_zveto_3l = new THStack();
   thsBackground_grouped_wh3l_Pre_13TeV_zveto_3l->SetName("thsBackground_grouped_wh3l_Pre_13TeV_zveto_3l");
   thsBackground_grouped_wh3l_Pre_13TeV_zveto_3l->SetTitle("thsBackground_grouped_wh3l_Pre_13TeV_zveto_3l");
   
   TH1F *thsBackground_grouped_wh3l_Pre_13TeV_zveto_3l_stack_57 = new TH1F("thsBackground_grouped_wh3l_Pre_13TeV_zveto_3l_stack_57","thsBackground_grouped_wh3l_Pre_13TeV_zveto_3l",20,0,100);
   thsBackground_grouped_wh3l_Pre_13TeV_zveto_3l_stack_57->SetMinimum(-0.102791);
   thsBackground_grouped_wh3l_Pre_13TeV_zveto_3l_stack_57->SetMaximum(26.61798);
   thsBackground_grouped_wh3l_Pre_13TeV_zveto_3l_stack_57->SetDirectory(0);
   thsBackground_grouped_wh3l_Pre_13TeV_zveto_3l_stack_57->SetStats(0);
   thsBackground_grouped_wh3l_Pre_13TeV_zveto_3l_stack_57->SetLineStyle(0);
   thsBackground_grouped_wh3l_Pre_13TeV_zveto_3l_stack_57->SetMarkerStyle(20);
   thsBackground_grouped_wh3l_Pre_13TeV_zveto_3l_stack_57->GetXaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_Pre_13TeV_zveto_3l_stack_57->GetXaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_Pre_13TeV_zveto_3l_stack_57->GetXaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_Pre_13TeV_zveto_3l_stack_57->GetXaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_Pre_13TeV_zveto_3l_stack_57->GetXaxis()->SetTitleOffset(0.9);
   thsBackground_grouped_wh3l_Pre_13TeV_zveto_3l_stack_57->GetXaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_Pre_13TeV_zveto_3l_stack_57->GetYaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_Pre_13TeV_zveto_3l_stack_57->GetYaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_Pre_13TeV_zveto_3l_stack_57->GetYaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_Pre_13TeV_zveto_3l_stack_57->GetYaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_Pre_13TeV_zveto_3l_stack_57->GetYaxis()->SetTitleOffset(1.25);
   thsBackground_grouped_wh3l_Pre_13TeV_zveto_3l_stack_57->GetYaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_Pre_13TeV_zveto_3l_stack_57->GetZaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_Pre_13TeV_zveto_3l_stack_57->GetZaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_Pre_13TeV_zveto_3l_stack_57->GetZaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_Pre_13TeV_zveto_3l_stack_57->GetZaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_Pre_13TeV_zveto_3l_stack_57->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_Pre_13TeV_zveto_3l->SetHistogram(thsBackground_grouped_wh3l_Pre_13TeV_zveto_3l_stack_57);
   
   
   TH1D *new_histo_group_Fake_wh3l_Pre_13TeV_zveto_3l282 = new TH1D("new_histo_group_Fake_wh3l_Pre_13TeV_zveto_3l282","histo_Fake",20,0,100);
   new_histo_group_Fake_wh3l_Pre_13TeV_zveto_3l282->SetBinContent(19,22.1599);
   new_histo_group_Fake_wh3l_Pre_13TeV_zveto_3l282->SetBinError(19,3.190554);
   new_histo_group_Fake_wh3l_Pre_13TeV_zveto_3l282->SetEntries(191);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_Pre_13TeV_zveto_3l282->SetFillColor(ci);
   new_histo_group_Fake_wh3l_Pre_13TeV_zveto_3l282->SetFillStyle(3001);

   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_Pre_13TeV_zveto_3l282->SetLineColor(ci);
   new_histo_group_Fake_wh3l_Pre_13TeV_zveto_3l282->GetXaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_Pre_13TeV_zveto_3l282->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_Pre_13TeV_zveto_3l282->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_Pre_13TeV_zveto_3l282->GetXaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_Pre_13TeV_zveto_3l282->GetYaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_Pre_13TeV_zveto_3l282->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_Pre_13TeV_zveto_3l282->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_Pre_13TeV_zveto_3l282->GetYaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_Pre_13TeV_zveto_3l282->GetZaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_Pre_13TeV_zveto_3l282->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_Pre_13TeV_zveto_3l282->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_Pre_13TeV_zveto_3l282->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_Pre_13TeV_zveto_3l->Add(new_histo_group_Fake_wh3l_Pre_13TeV_zveto_3l,"");
   
   TH1D *new_histo_group_WW_wh3l_Pre_13TeV_zveto_3l283 = new TH1D("new_histo_group_WW_wh3l_Pre_13TeV_zveto_3l283","histo_WW",20,0,100);
   new_histo_group_WW_wh3l_Pre_13TeV_zveto_3l283->SetBinContent(19,0.1954926);
   new_histo_group_WW_wh3l_Pre_13TeV_zveto_3l283->SetBinError(19,0.05489521);
   new_histo_group_WW_wh3l_Pre_13TeV_zveto_3l283->SetEntries(14);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_Pre_13TeV_zveto_3l283->SetFillColor(ci);
   new_histo_group_WW_wh3l_Pre_13TeV_zveto_3l283->SetFillStyle(3001);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_Pre_13TeV_zveto_3l283->SetLineColor(ci);
   new_histo_group_WW_wh3l_Pre_13TeV_zveto_3l283->GetXaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_Pre_13TeV_zveto_3l283->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_Pre_13TeV_zveto_3l283->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_Pre_13TeV_zveto_3l283->GetXaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_Pre_13TeV_zveto_3l283->GetYaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_Pre_13TeV_zveto_3l283->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_Pre_13TeV_zveto_3l283->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_Pre_13TeV_zveto_3l283->GetYaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_Pre_13TeV_zveto_3l283->GetZaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_Pre_13TeV_zveto_3l283->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_Pre_13TeV_zveto_3l283->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_Pre_13TeV_zveto_3l283->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_Pre_13TeV_zveto_3l->Add(new_histo_group_WW_wh3l_Pre_13TeV_zveto_3l,"");
   
   TH1D *new_histo_group_VVV_wh3l_Pre_13TeV_zveto_3l284 = new TH1D("new_histo_group_VVV_wh3l_Pre_13TeV_zveto_3l284","histo_VVV",20,0,100);
   new_histo_group_VVV_wh3l_Pre_13TeV_zveto_3l284->SetBinContent(19,0.3680759);
   new_histo_group_VVV_wh3l_Pre_13TeV_zveto_3l284->SetBinError(19,0.03145783);
   new_histo_group_VVV_wh3l_Pre_13TeV_zveto_3l284->SetEntries(227);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_Pre_13TeV_zveto_3l284->SetFillColor(ci);
   new_histo_group_VVV_wh3l_Pre_13TeV_zveto_3l284->SetFillStyle(3001);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_Pre_13TeV_zveto_3l284->SetLineColor(ci);
   new_histo_group_VVV_wh3l_Pre_13TeV_zveto_3l284->GetXaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_Pre_13TeV_zveto_3l284->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_Pre_13TeV_zveto_3l284->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_Pre_13TeV_zveto_3l284->GetXaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_Pre_13TeV_zveto_3l284->GetYaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_Pre_13TeV_zveto_3l284->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_Pre_13TeV_zveto_3l284->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_Pre_13TeV_zveto_3l284->GetYaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_Pre_13TeV_zveto_3l284->GetZaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_Pre_13TeV_zveto_3l284->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_Pre_13TeV_zveto_3l284->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_Pre_13TeV_zveto_3l284->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_Pre_13TeV_zveto_3l->Add(new_histo_group_VVV_wh3l_Pre_13TeV_zveto_3l,"");
   
   TH1D *new_histo_group_Vg_wh3l_Pre_13TeV_zveto_3l285 = new TH1D("new_histo_group_Vg_wh3l_Pre_13TeV_zveto_3l285","histo_Vg",20,0,100);
   new_histo_group_Vg_wh3l_Pre_13TeV_zveto_3l285->SetBinContent(19,0.1998786);
   new_histo_group_Vg_wh3l_Pre_13TeV_zveto_3l285->SetBinError(19,0.3026696);
   new_histo_group_Vg_wh3l_Pre_13TeV_zveto_3l285->SetEntries(10);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_Pre_13TeV_zveto_3l285->SetFillColor(ci);
   new_histo_group_Vg_wh3l_Pre_13TeV_zveto_3l285->SetFillStyle(3001);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_Pre_13TeV_zveto_3l285->SetLineColor(ci);
   new_histo_group_Vg_wh3l_Pre_13TeV_zveto_3l285->GetXaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_Pre_13TeV_zveto_3l285->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_Pre_13TeV_zveto_3l285->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_Pre_13TeV_zveto_3l285->GetXaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_Pre_13TeV_zveto_3l285->GetYaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_Pre_13TeV_zveto_3l285->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_Pre_13TeV_zveto_3l285->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_Pre_13TeV_zveto_3l285->GetYaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_Pre_13TeV_zveto_3l285->GetZaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_Pre_13TeV_zveto_3l285->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_Pre_13TeV_zveto_3l285->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_Pre_13TeV_zveto_3l285->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_Pre_13TeV_zveto_3l->Add(new_histo_group_Vg_wh3l_Pre_13TeV_zveto_3l,"");
   
   TH1D *new_histo_group_ZZ_wh3l_Pre_13TeV_zveto_3l286 = new TH1D("new_histo_group_ZZ_wh3l_Pre_13TeV_zveto_3l286","histo_ZZ",20,0,100);
   new_histo_group_ZZ_wh3l_Pre_13TeV_zveto_3l286->SetBinContent(19,0.1653816);
   new_histo_group_ZZ_wh3l_Pre_13TeV_zveto_3l286->SetBinError(19,0.08319056);
   new_histo_group_ZZ_wh3l_Pre_13TeV_zveto_3l286->SetEntries(4);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_Pre_13TeV_zveto_3l286->SetFillColor(ci);
   new_histo_group_ZZ_wh3l_Pre_13TeV_zveto_3l286->SetFillStyle(3001);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_Pre_13TeV_zveto_3l286->SetLineColor(ci);
   new_histo_group_ZZ_wh3l_Pre_13TeV_zveto_3l286->GetXaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_Pre_13TeV_zveto_3l286->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_Pre_13TeV_zveto_3l286->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_Pre_13TeV_zveto_3l286->GetXaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_Pre_13TeV_zveto_3l286->GetYaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_Pre_13TeV_zveto_3l286->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_Pre_13TeV_zveto_3l286->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_Pre_13TeV_zveto_3l286->GetYaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_Pre_13TeV_zveto_3l286->GetZaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_Pre_13TeV_zveto_3l286->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_Pre_13TeV_zveto_3l286->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_Pre_13TeV_zveto_3l286->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_Pre_13TeV_zveto_3l->Add(new_histo_group_ZZ_wh3l_Pre_13TeV_zveto_3l,"");
   
   TH1D *new_histo_group_WZ_wh3l_Pre_13TeV_zveto_3l287 = new TH1D("new_histo_group_WZ_wh3l_Pre_13TeV_zveto_3l287","histo_WZ",20,0,100);
   new_histo_group_WZ_wh3l_Pre_13TeV_zveto_3l287->SetBinContent(19,1.495022);
   new_histo_group_WZ_wh3l_Pre_13TeV_zveto_3l287->SetBinError(19,0.09046657);
   new_histo_group_WZ_wh3l_Pre_13TeV_zveto_3l287->SetEntries(305);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_Pre_13TeV_zveto_3l287->SetFillColor(ci);
   new_histo_group_WZ_wh3l_Pre_13TeV_zveto_3l287->SetFillStyle(3001);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_Pre_13TeV_zveto_3l287->SetLineColor(ci);
   new_histo_group_WZ_wh3l_Pre_13TeV_zveto_3l287->GetXaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_Pre_13TeV_zveto_3l287->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_Pre_13TeV_zveto_3l287->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_Pre_13TeV_zveto_3l287->GetXaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_Pre_13TeV_zveto_3l287->GetYaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_Pre_13TeV_zveto_3l287->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_Pre_13TeV_zveto_3l287->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_Pre_13TeV_zveto_3l287->GetYaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_Pre_13TeV_zveto_3l287->GetZaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_Pre_13TeV_zveto_3l287->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_Pre_13TeV_zveto_3l287->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_Pre_13TeV_zveto_3l287->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_Pre_13TeV_zveto_3l->Add(new_histo_group_WZ_wh3l_Pre_13TeV_zveto_3l,"");
   
   TH1D *new_histo_group_Higgs_wh3l_Pre_13TeV_zveto_3l288 = new TH1D("new_histo_group_Higgs_wh3l_Pre_13TeV_zveto_3l288","histo_H_htt",20,0,100);
   new_histo_group_Higgs_wh3l_Pre_13TeV_zveto_3l288->SetBinContent(19,0.5000402);
   new_histo_group_Higgs_wh3l_Pre_13TeV_zveto_3l288->SetBinError(19,0.02307393);
   new_histo_group_Higgs_wh3l_Pre_13TeV_zveto_3l288->SetEntries(916);
   new_histo_group_Higgs_wh3l_Pre_13TeV_zveto_3l288->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_Pre_13TeV_zveto_3l288->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_Pre_13TeV_zveto_3l288->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_Pre_13TeV_zveto_3l288->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_Pre_13TeV_zveto_3l288->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_Pre_13TeV_zveto_3l288->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_Pre_13TeV_zveto_3l288->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_Pre_13TeV_zveto_3l288->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_Pre_13TeV_zveto_3l288->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_Pre_13TeV_zveto_3l288->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_Pre_13TeV_zveto_3l288->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_Pre_13TeV_zveto_3l288->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_Pre_13TeV_zveto_3l288->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_Pre_13TeV_zveto_3l288->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_Pre_13TeV_zveto_3l288->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_Pre_13TeV_zveto_3l->Add(new_histo_group_Higgs_wh3l_Pre_13TeV_zveto_3l,"");
   thsBackground_grouped_wh3l_Pre_13TeV_zveto_3l->Draw("hist same");
   
   thsSignal_grouped_wh3l_Pre_13TeV_zveto_3l = new THStack();
   thsSignal_grouped_wh3l_Pre_13TeV_zveto_3l->SetName("thsSignal_grouped_wh3l_Pre_13TeV_zveto_3l");
   thsSignal_grouped_wh3l_Pre_13TeV_zveto_3l->SetTitle("thsSignal_grouped_wh3l_Pre_13TeV_zveto_3l");
   
   TH1F *thsSignal_grouped_wh3l_Pre_13TeV_zveto_3l_stack_58 = new TH1F("thsSignal_grouped_wh3l_Pre_13TeV_zveto_3l_stack_58","thsSignal_grouped_wh3l_Pre_13TeV_zveto_3l",20,0,100);
   thsSignal_grouped_wh3l_Pre_13TeV_zveto_3l_stack_58->SetMinimum(0);
   thsSignal_grouped_wh3l_Pre_13TeV_zveto_3l_stack_58->SetMaximum(0.5492699);
   thsSignal_grouped_wh3l_Pre_13TeV_zveto_3l_stack_58->SetDirectory(0);
   thsSignal_grouped_wh3l_Pre_13TeV_zveto_3l_stack_58->SetStats(0);
   thsSignal_grouped_wh3l_Pre_13TeV_zveto_3l_stack_58->SetLineStyle(0);
   thsSignal_grouped_wh3l_Pre_13TeV_zveto_3l_stack_58->SetMarkerStyle(20);
   thsSignal_grouped_wh3l_Pre_13TeV_zveto_3l_stack_58->GetXaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_Pre_13TeV_zveto_3l_stack_58->GetXaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_Pre_13TeV_zveto_3l_stack_58->GetXaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_Pre_13TeV_zveto_3l_stack_58->GetXaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_Pre_13TeV_zveto_3l_stack_58->GetXaxis()->SetTitleOffset(0.9);
   thsSignal_grouped_wh3l_Pre_13TeV_zveto_3l_stack_58->GetXaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_Pre_13TeV_zveto_3l_stack_58->GetYaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_Pre_13TeV_zveto_3l_stack_58->GetYaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_Pre_13TeV_zveto_3l_stack_58->GetYaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_Pre_13TeV_zveto_3l_stack_58->GetYaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_Pre_13TeV_zveto_3l_stack_58->GetYaxis()->SetTitleOffset(1.25);
   thsSignal_grouped_wh3l_Pre_13TeV_zveto_3l_stack_58->GetYaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_Pre_13TeV_zveto_3l_stack_58->GetZaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_Pre_13TeV_zveto_3l_stack_58->GetZaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_Pre_13TeV_zveto_3l_stack_58->GetZaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_Pre_13TeV_zveto_3l_stack_58->GetZaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_Pre_13TeV_zveto_3l_stack_58->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_Pre_13TeV_zveto_3l->SetHistogram(thsSignal_grouped_wh3l_Pre_13TeV_zveto_3l_stack_58);
   
   
   TH1D *new_histo_group_Higgs_wh3l_Pre_13TeV_zveto_3l289 = new TH1D("new_histo_group_Higgs_wh3l_Pre_13TeV_zveto_3l289","histo_H_htt",20,0,100);
   new_histo_group_Higgs_wh3l_Pre_13TeV_zveto_3l289->SetBinContent(19,0.5000402);
   new_histo_group_Higgs_wh3l_Pre_13TeV_zveto_3l289->SetBinError(19,0.02307393);
   new_histo_group_Higgs_wh3l_Pre_13TeV_zveto_3l289->SetEntries(916);
   new_histo_group_Higgs_wh3l_Pre_13TeV_zveto_3l289->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_Pre_13TeV_zveto_3l289->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_Pre_13TeV_zveto_3l289->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_Pre_13TeV_zveto_3l289->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_Pre_13TeV_zveto_3l289->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_Pre_13TeV_zveto_3l289->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_Pre_13TeV_zveto_3l289->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_Pre_13TeV_zveto_3l289->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_Pre_13TeV_zveto_3l289->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_Pre_13TeV_zveto_3l289->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_Pre_13TeV_zveto_3l289->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_Pre_13TeV_zveto_3l289->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_Pre_13TeV_zveto_3l289->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_Pre_13TeV_zveto_3l289->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_Pre_13TeV_zveto_3l289->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_Pre_13TeV_zveto_3l->Add(new_histo_group_Higgs_wh3l_Pre_13TeV_zveto_3l,"");
   thsSignal_grouped_wh3l_Pre_13TeV_zveto_3l->Draw("hist same noclear");
   
   Double_t _fx3057[20] = {
   2.5,
   7.5,
   12.5,
   17.5,
   22.5,
   27.5,
   32.5,
   37.5,
   42.5,
   47.5,
   52.5,
   57.5,
   62.5,
   67.5,
   72.5,
   77.5,
   82.5,
   87.5,
   92.5,
   97.5};
   Double_t _fy3057[20] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   24.58375,
   0};
   Double_t _felx3057[20] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5};
   Double_t _fely3057[20] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   8.580038,
   0};
   Double_t _fehx3057[20] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5};
   Double_t _fehy3057[20] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   8.624183,
   0};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(20,_fx3057,_fy3057,_felx3057,_fehx3057,_fely3057,_fehy3057);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(12);
   grae->SetFillStyle(3004);
   grae->SetLineColor(12);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3057 = new TH1F("Graph_Graph3057","",100,0,110);
   Graph_Graph3057->SetMinimum(0);
   Graph_Graph3057->SetMaximum(36.52873);
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
   
   Double_t _fx3058[20] = {
   2.5,
   7.5,
   12.5,
   17.5,
   22.5,
   27.5,
   32.5,
   37.5,
   42.5,
   47.5,
   52.5,
   57.5,
   62.5,
   67.5,
   72.5,
   77.5,
   82.5,
   87.5,
   92.5,
   97.5};
   Double_t _fy3058[20] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   14,
   0};
   Double_t _felx3058[20] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5};
   Double_t _fely3058[20] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   3.696567,
   0};
   Double_t _fehx3058[20] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5};
   Double_t _fehy3058[20] = {
   1.147908,
   1.147908,
   1.147908,
   1.147908,
   1.147908,
   1.147908,
   1.147908,
   1.147908,
   1.147908,
   1.147908,
   1.147908,
   1.147908,
   1.147908,
   1.147908,
   1.147908,
   1.147908,
   1.147908,
   1.147908,
   4.830479,
   1.147908};
   grae = new TGraphAsymmErrors(20,_fx3058,_fy3058,_felx3058,_fehx3058,_fely3058,_fehy3058);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(1);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3058 = new TH1F("Graph_Graph3058","",100,0,110);
   Graph_Graph3058->SetMinimum(0);
   Graph_Graph3058->SetMaximum(20.71353);
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
   TLegendEntry *entry=leg->AddEntry("new_histo_group_Fake_wh3l_Pre_13TeV_zveto_3l","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_Pre_13TeV_zveto_3l","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_Pre_13TeV_zveto_3l","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_Pre_13TeV_zveto_3l","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_Pre_13TeV_zveto_3l","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_Pre_13TeV_zveto_3l","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_Pre_13TeV_zveto_3l","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_Pre_13TeV_zveto_3l","Data","EPL");
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
   entry=leg->AddEntry("new_histo_group_Fake_wh3l_Pre_13TeV_zveto_3l","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_Pre_13TeV_zveto_3l","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_Pre_13TeV_zveto_3l","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_Pre_13TeV_zveto_3l","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_Pre_13TeV_zveto_3l","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_Pre_13TeV_zveto_3l","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_Pre_13TeV_zveto_3l","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_Pre_13TeV_zveto_3l","Data","EPL");
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
   
   TH1F *hframe_copy290 = new TH1F("hframe_copy290","",1000,0,100);
   hframe_copy290->SetMinimum(0);
   hframe_copy290->SetMaximum(62.70948);
   hframe_copy290->SetDirectory(0);
   hframe_copy290->SetStats(0);
   hframe_copy290->SetLineStyle(0);
   hframe_copy290->SetMarkerStyle(20);
   hframe_copy290->GetXaxis()->SetTitle("m_{ll} - M_{Z} [GeV]");
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
   ccwh3l_Pre_13TeV_zveto_3l->Modified();
   ccwh3l_Pre_13TeV_zveto_3l->cd();
   ccwh3l_Pre_13TeV_zveto_3l->SetSelected(ccwh3l_Pre_13TeV_zveto_3l);
}
