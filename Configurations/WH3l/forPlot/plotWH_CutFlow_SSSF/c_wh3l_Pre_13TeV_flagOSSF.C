void c_wh3l_Pre_13TeV_flagOSSF()
{
//=========Macro generated from canvas: ccwh3l_Pre_13TeV_flagOSSF/cc
//=========  (Sun Jul  3 01:22:01 2016) by ROOT version6.02/13
   TCanvas *ccwh3l_Pre_13TeV_flagOSSF = new TCanvas("ccwh3l_Pre_13TeV_flagOSSF", "cc",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   ccwh3l_Pre_13TeV_flagOSSF->SetHighLightColor(2);
   ccwh3l_Pre_13TeV_flagOSSF->Range(-0.4,-9.941746,2.1,66.53323);
   ccwh3l_Pre_13TeV_flagOSSF->SetFillColor(0);
   ccwh3l_Pre_13TeV_flagOSSF->SetBorderMode(0);
   ccwh3l_Pre_13TeV_flagOSSF->SetBorderSize(2);
   ccwh3l_Pre_13TeV_flagOSSF->SetTickx(1);
   ccwh3l_Pre_13TeV_flagOSSF->SetTicky(1);
   ccwh3l_Pre_13TeV_flagOSSF->SetLeftMargin(0.16);
   ccwh3l_Pre_13TeV_flagOSSF->SetRightMargin(0.04);
   ccwh3l_Pre_13TeV_flagOSSF->SetTopMargin(0.05);
   ccwh3l_Pre_13TeV_flagOSSF->SetBottomMargin(0.13);
   ccwh3l_Pre_13TeV_flagOSSF->SetFrameFillStyle(0);
   ccwh3l_Pre_13TeV_flagOSSF->SetFrameBorderMode(0);
   ccwh3l_Pre_13TeV_flagOSSF->SetFrameFillStyle(0);
   ccwh3l_Pre_13TeV_flagOSSF->SetFrameBorderMode(0);
   
   TH1F *hframe271 = new TH1F("hframe271","",1000,0,2);
   hframe271->SetMinimum(0);
   hframe271->SetMaximum(62.70948);
   hframe271->SetDirectory(0);
   hframe271->SetStats(0);
   hframe271->SetLineStyle(0);
   hframe271->SetMarkerStyle(20);
   hframe271->GetXaxis()->SetTitle("flag OSSF");
   hframe271->GetXaxis()->SetNdivisions(506);
   hframe271->GetXaxis()->SetLabelFont(42);
   hframe271->GetXaxis()->SetLabelOffset(0.007);
   hframe271->GetXaxis()->SetLabelSize(0.05);
   hframe271->GetXaxis()->SetTitleSize(0.06);
   hframe271->GetXaxis()->SetTitleOffset(0.9);
   hframe271->GetXaxis()->SetTitleFont(42);
   hframe271->GetYaxis()->SetTitle("Events");
   hframe271->GetYaxis()->SetLabelFont(42);
   hframe271->GetYaxis()->SetLabelOffset(0.007);
   hframe271->GetYaxis()->SetLabelSize(0.05);
   hframe271->GetYaxis()->SetTitleSize(0.06);
   hframe271->GetYaxis()->SetTitleOffset(1.25);
   hframe271->GetYaxis()->SetTitleFont(42);
   hframe271->GetZaxis()->SetLabelFont(42);
   hframe271->GetZaxis()->SetLabelOffset(0.007);
   hframe271->GetZaxis()->SetLabelSize(0.05);
   hframe271->GetZaxis()->SetTitleSize(0.06);
   hframe271->GetZaxis()->SetTitleFont(42);
   hframe271->Draw(" ");
   
   THStack *thsBackground_grouped_wh3l_Pre_13TeV_flagOSSF = new THStack();
   thsBackground_grouped_wh3l_Pre_13TeV_flagOSSF->SetName("thsBackground_grouped_wh3l_Pre_13TeV_flagOSSF");
   thsBackground_grouped_wh3l_Pre_13TeV_flagOSSF->SetTitle("thsBackground_grouped_wh3l_Pre_13TeV_flagOSSF");
   
   TH1F *thsBackground_grouped_wh3l_Pre_13TeV_flagOSSF_stack_55 = new TH1F("thsBackground_grouped_wh3l_Pre_13TeV_flagOSSF_stack_55","thsBackground_grouped_wh3l_Pre_13TeV_flagOSSF",2,0,2);
   thsBackground_grouped_wh3l_Pre_13TeV_flagOSSF_stack_55->SetMinimum(-0.102791);
   thsBackground_grouped_wh3l_Pre_13TeV_flagOSSF_stack_55->SetMaximum(26.61798);
   thsBackground_grouped_wh3l_Pre_13TeV_flagOSSF_stack_55->SetDirectory(0);
   thsBackground_grouped_wh3l_Pre_13TeV_flagOSSF_stack_55->SetStats(0);
   thsBackground_grouped_wh3l_Pre_13TeV_flagOSSF_stack_55->SetLineStyle(0);
   thsBackground_grouped_wh3l_Pre_13TeV_flagOSSF_stack_55->SetMarkerStyle(20);
   thsBackground_grouped_wh3l_Pre_13TeV_flagOSSF_stack_55->GetXaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_Pre_13TeV_flagOSSF_stack_55->GetXaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_Pre_13TeV_flagOSSF_stack_55->GetXaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_Pre_13TeV_flagOSSF_stack_55->GetXaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_Pre_13TeV_flagOSSF_stack_55->GetXaxis()->SetTitleOffset(0.9);
   thsBackground_grouped_wh3l_Pre_13TeV_flagOSSF_stack_55->GetXaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_Pre_13TeV_flagOSSF_stack_55->GetYaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_Pre_13TeV_flagOSSF_stack_55->GetYaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_Pre_13TeV_flagOSSF_stack_55->GetYaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_Pre_13TeV_flagOSSF_stack_55->GetYaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_Pre_13TeV_flagOSSF_stack_55->GetYaxis()->SetTitleOffset(1.25);
   thsBackground_grouped_wh3l_Pre_13TeV_flagOSSF_stack_55->GetYaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_Pre_13TeV_flagOSSF_stack_55->GetZaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_Pre_13TeV_flagOSSF_stack_55->GetZaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_Pre_13TeV_flagOSSF_stack_55->GetZaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_Pre_13TeV_flagOSSF_stack_55->GetZaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_Pre_13TeV_flagOSSF_stack_55->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_Pre_13TeV_flagOSSF->SetHistogram(thsBackground_grouped_wh3l_Pre_13TeV_flagOSSF_stack_55);
   
   
   TH1D *new_histo_group_Fake_wh3l_Pre_13TeV_flagOSSF272 = new TH1D("new_histo_group_Fake_wh3l_Pre_13TeV_flagOSSF272","histo_Fake",2,0,2);
   new_histo_group_Fake_wh3l_Pre_13TeV_flagOSSF272->SetBinContent(1,22.1599);
   new_histo_group_Fake_wh3l_Pre_13TeV_flagOSSF272->SetBinError(1,3.190554);
   new_histo_group_Fake_wh3l_Pre_13TeV_flagOSSF272->SetEntries(191);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_Pre_13TeV_flagOSSF272->SetFillColor(ci);
   new_histo_group_Fake_wh3l_Pre_13TeV_flagOSSF272->SetFillStyle(3001);

   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_Pre_13TeV_flagOSSF272->SetLineColor(ci);
   new_histo_group_Fake_wh3l_Pre_13TeV_flagOSSF272->GetXaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_Pre_13TeV_flagOSSF272->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_Pre_13TeV_flagOSSF272->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_Pre_13TeV_flagOSSF272->GetXaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_Pre_13TeV_flagOSSF272->GetYaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_Pre_13TeV_flagOSSF272->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_Pre_13TeV_flagOSSF272->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_Pre_13TeV_flagOSSF272->GetYaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_Pre_13TeV_flagOSSF272->GetZaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_Pre_13TeV_flagOSSF272->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_Pre_13TeV_flagOSSF272->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_Pre_13TeV_flagOSSF272->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_Pre_13TeV_flagOSSF->Add(new_histo_group_Fake_wh3l_Pre_13TeV_flagOSSF,"");
   
   TH1D *new_histo_group_WW_wh3l_Pre_13TeV_flagOSSF273 = new TH1D("new_histo_group_WW_wh3l_Pre_13TeV_flagOSSF273","histo_WW",2,0,2);
   new_histo_group_WW_wh3l_Pre_13TeV_flagOSSF273->SetBinContent(1,0.1954926);
   new_histo_group_WW_wh3l_Pre_13TeV_flagOSSF273->SetBinError(1,0.05489521);
   new_histo_group_WW_wh3l_Pre_13TeV_flagOSSF273->SetEntries(14);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_Pre_13TeV_flagOSSF273->SetFillColor(ci);
   new_histo_group_WW_wh3l_Pre_13TeV_flagOSSF273->SetFillStyle(3001);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_Pre_13TeV_flagOSSF273->SetLineColor(ci);
   new_histo_group_WW_wh3l_Pre_13TeV_flagOSSF273->GetXaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_Pre_13TeV_flagOSSF273->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_Pre_13TeV_flagOSSF273->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_Pre_13TeV_flagOSSF273->GetXaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_Pre_13TeV_flagOSSF273->GetYaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_Pre_13TeV_flagOSSF273->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_Pre_13TeV_flagOSSF273->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_Pre_13TeV_flagOSSF273->GetYaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_Pre_13TeV_flagOSSF273->GetZaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_Pre_13TeV_flagOSSF273->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_Pre_13TeV_flagOSSF273->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_Pre_13TeV_flagOSSF273->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_Pre_13TeV_flagOSSF->Add(new_histo_group_WW_wh3l_Pre_13TeV_flagOSSF,"");
   
   TH1D *new_histo_group_VVV_wh3l_Pre_13TeV_flagOSSF274 = new TH1D("new_histo_group_VVV_wh3l_Pre_13TeV_flagOSSF274","histo_VVV",2,0,2);
   new_histo_group_VVV_wh3l_Pre_13TeV_flagOSSF274->SetBinContent(1,0.3680759);
   new_histo_group_VVV_wh3l_Pre_13TeV_flagOSSF274->SetBinError(1,0.03145783);
   new_histo_group_VVV_wh3l_Pre_13TeV_flagOSSF274->SetEntries(227);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_Pre_13TeV_flagOSSF274->SetFillColor(ci);
   new_histo_group_VVV_wh3l_Pre_13TeV_flagOSSF274->SetFillStyle(3001);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_Pre_13TeV_flagOSSF274->SetLineColor(ci);
   new_histo_group_VVV_wh3l_Pre_13TeV_flagOSSF274->GetXaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_Pre_13TeV_flagOSSF274->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_Pre_13TeV_flagOSSF274->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_Pre_13TeV_flagOSSF274->GetXaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_Pre_13TeV_flagOSSF274->GetYaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_Pre_13TeV_flagOSSF274->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_Pre_13TeV_flagOSSF274->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_Pre_13TeV_flagOSSF274->GetYaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_Pre_13TeV_flagOSSF274->GetZaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_Pre_13TeV_flagOSSF274->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_Pre_13TeV_flagOSSF274->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_Pre_13TeV_flagOSSF274->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_Pre_13TeV_flagOSSF->Add(new_histo_group_VVV_wh3l_Pre_13TeV_flagOSSF,"");
   
   TH1D *new_histo_group_Vg_wh3l_Pre_13TeV_flagOSSF275 = new TH1D("new_histo_group_Vg_wh3l_Pre_13TeV_flagOSSF275","histo_Vg",2,0,2);
   new_histo_group_Vg_wh3l_Pre_13TeV_flagOSSF275->SetBinContent(1,0.1998786);
   new_histo_group_Vg_wh3l_Pre_13TeV_flagOSSF275->SetBinError(1,0.3026696);
   new_histo_group_Vg_wh3l_Pre_13TeV_flagOSSF275->SetEntries(10);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_Pre_13TeV_flagOSSF275->SetFillColor(ci);
   new_histo_group_Vg_wh3l_Pre_13TeV_flagOSSF275->SetFillStyle(3001);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_Pre_13TeV_flagOSSF275->SetLineColor(ci);
   new_histo_group_Vg_wh3l_Pre_13TeV_flagOSSF275->GetXaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_Pre_13TeV_flagOSSF275->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_Pre_13TeV_flagOSSF275->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_Pre_13TeV_flagOSSF275->GetXaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_Pre_13TeV_flagOSSF275->GetYaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_Pre_13TeV_flagOSSF275->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_Pre_13TeV_flagOSSF275->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_Pre_13TeV_flagOSSF275->GetYaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_Pre_13TeV_flagOSSF275->GetZaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_Pre_13TeV_flagOSSF275->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_Pre_13TeV_flagOSSF275->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_Pre_13TeV_flagOSSF275->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_Pre_13TeV_flagOSSF->Add(new_histo_group_Vg_wh3l_Pre_13TeV_flagOSSF,"");
   
   TH1D *new_histo_group_ZZ_wh3l_Pre_13TeV_flagOSSF276 = new TH1D("new_histo_group_ZZ_wh3l_Pre_13TeV_flagOSSF276","histo_ZZ",2,0,2);
   new_histo_group_ZZ_wh3l_Pre_13TeV_flagOSSF276->SetBinContent(1,0.1653816);
   new_histo_group_ZZ_wh3l_Pre_13TeV_flagOSSF276->SetBinError(1,0.08319056);
   new_histo_group_ZZ_wh3l_Pre_13TeV_flagOSSF276->SetEntries(4);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_Pre_13TeV_flagOSSF276->SetFillColor(ci);
   new_histo_group_ZZ_wh3l_Pre_13TeV_flagOSSF276->SetFillStyle(3001);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_Pre_13TeV_flagOSSF276->SetLineColor(ci);
   new_histo_group_ZZ_wh3l_Pre_13TeV_flagOSSF276->GetXaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_Pre_13TeV_flagOSSF276->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_Pre_13TeV_flagOSSF276->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_Pre_13TeV_flagOSSF276->GetXaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_Pre_13TeV_flagOSSF276->GetYaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_Pre_13TeV_flagOSSF276->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_Pre_13TeV_flagOSSF276->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_Pre_13TeV_flagOSSF276->GetYaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_Pre_13TeV_flagOSSF276->GetZaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_Pre_13TeV_flagOSSF276->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_Pre_13TeV_flagOSSF276->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_Pre_13TeV_flagOSSF276->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_Pre_13TeV_flagOSSF->Add(new_histo_group_ZZ_wh3l_Pre_13TeV_flagOSSF,"");
   
   TH1D *new_histo_group_WZ_wh3l_Pre_13TeV_flagOSSF277 = new TH1D("new_histo_group_WZ_wh3l_Pre_13TeV_flagOSSF277","histo_WZ",2,0,2);
   new_histo_group_WZ_wh3l_Pre_13TeV_flagOSSF277->SetBinContent(1,1.495022);
   new_histo_group_WZ_wh3l_Pre_13TeV_flagOSSF277->SetBinError(1,0.09046657);
   new_histo_group_WZ_wh3l_Pre_13TeV_flagOSSF277->SetEntries(305);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_Pre_13TeV_flagOSSF277->SetFillColor(ci);
   new_histo_group_WZ_wh3l_Pre_13TeV_flagOSSF277->SetFillStyle(3001);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_Pre_13TeV_flagOSSF277->SetLineColor(ci);
   new_histo_group_WZ_wh3l_Pre_13TeV_flagOSSF277->GetXaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_Pre_13TeV_flagOSSF277->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_Pre_13TeV_flagOSSF277->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_Pre_13TeV_flagOSSF277->GetXaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_Pre_13TeV_flagOSSF277->GetYaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_Pre_13TeV_flagOSSF277->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_Pre_13TeV_flagOSSF277->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_Pre_13TeV_flagOSSF277->GetYaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_Pre_13TeV_flagOSSF277->GetZaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_Pre_13TeV_flagOSSF277->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_Pre_13TeV_flagOSSF277->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_Pre_13TeV_flagOSSF277->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_Pre_13TeV_flagOSSF->Add(new_histo_group_WZ_wh3l_Pre_13TeV_flagOSSF,"");
   
   TH1D *new_histo_group_Higgs_wh3l_Pre_13TeV_flagOSSF278 = new TH1D("new_histo_group_Higgs_wh3l_Pre_13TeV_flagOSSF278","histo_H_htt",2,0,2);
   new_histo_group_Higgs_wh3l_Pre_13TeV_flagOSSF278->SetBinContent(1,0.5000402);
   new_histo_group_Higgs_wh3l_Pre_13TeV_flagOSSF278->SetBinError(1,0.02307393);
   new_histo_group_Higgs_wh3l_Pre_13TeV_flagOSSF278->SetEntries(916);
   new_histo_group_Higgs_wh3l_Pre_13TeV_flagOSSF278->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_Pre_13TeV_flagOSSF278->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_Pre_13TeV_flagOSSF278->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_Pre_13TeV_flagOSSF278->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_Pre_13TeV_flagOSSF278->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_Pre_13TeV_flagOSSF278->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_Pre_13TeV_flagOSSF278->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_Pre_13TeV_flagOSSF278->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_Pre_13TeV_flagOSSF278->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_Pre_13TeV_flagOSSF278->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_Pre_13TeV_flagOSSF278->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_Pre_13TeV_flagOSSF278->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_Pre_13TeV_flagOSSF278->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_Pre_13TeV_flagOSSF278->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_Pre_13TeV_flagOSSF278->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_Pre_13TeV_flagOSSF->Add(new_histo_group_Higgs_wh3l_Pre_13TeV_flagOSSF,"");
   thsBackground_grouped_wh3l_Pre_13TeV_flagOSSF->Draw("hist same");
   
   thsSignal_grouped_wh3l_Pre_13TeV_flagOSSF = new THStack();
   thsSignal_grouped_wh3l_Pre_13TeV_flagOSSF->SetName("thsSignal_grouped_wh3l_Pre_13TeV_flagOSSF");
   thsSignal_grouped_wh3l_Pre_13TeV_flagOSSF->SetTitle("thsSignal_grouped_wh3l_Pre_13TeV_flagOSSF");
   
   TH1F *thsSignal_grouped_wh3l_Pre_13TeV_flagOSSF_stack_56 = new TH1F("thsSignal_grouped_wh3l_Pre_13TeV_flagOSSF_stack_56","thsSignal_grouped_wh3l_Pre_13TeV_flagOSSF",2,0,2);
   thsSignal_grouped_wh3l_Pre_13TeV_flagOSSF_stack_56->SetMinimum(0);
   thsSignal_grouped_wh3l_Pre_13TeV_flagOSSF_stack_56->SetMaximum(0.5492699);
   thsSignal_grouped_wh3l_Pre_13TeV_flagOSSF_stack_56->SetDirectory(0);
   thsSignal_grouped_wh3l_Pre_13TeV_flagOSSF_stack_56->SetStats(0);
   thsSignal_grouped_wh3l_Pre_13TeV_flagOSSF_stack_56->SetLineStyle(0);
   thsSignal_grouped_wh3l_Pre_13TeV_flagOSSF_stack_56->SetMarkerStyle(20);
   thsSignal_grouped_wh3l_Pre_13TeV_flagOSSF_stack_56->GetXaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_Pre_13TeV_flagOSSF_stack_56->GetXaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_Pre_13TeV_flagOSSF_stack_56->GetXaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_Pre_13TeV_flagOSSF_stack_56->GetXaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_Pre_13TeV_flagOSSF_stack_56->GetXaxis()->SetTitleOffset(0.9);
   thsSignal_grouped_wh3l_Pre_13TeV_flagOSSF_stack_56->GetXaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_Pre_13TeV_flagOSSF_stack_56->GetYaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_Pre_13TeV_flagOSSF_stack_56->GetYaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_Pre_13TeV_flagOSSF_stack_56->GetYaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_Pre_13TeV_flagOSSF_stack_56->GetYaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_Pre_13TeV_flagOSSF_stack_56->GetYaxis()->SetTitleOffset(1.25);
   thsSignal_grouped_wh3l_Pre_13TeV_flagOSSF_stack_56->GetYaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_Pre_13TeV_flagOSSF_stack_56->GetZaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_Pre_13TeV_flagOSSF_stack_56->GetZaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_Pre_13TeV_flagOSSF_stack_56->GetZaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_Pre_13TeV_flagOSSF_stack_56->GetZaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_Pre_13TeV_flagOSSF_stack_56->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_Pre_13TeV_flagOSSF->SetHistogram(thsSignal_grouped_wh3l_Pre_13TeV_flagOSSF_stack_56);
   
   
   TH1D *new_histo_group_Higgs_wh3l_Pre_13TeV_flagOSSF279 = new TH1D("new_histo_group_Higgs_wh3l_Pre_13TeV_flagOSSF279","histo_H_htt",2,0,2);
   new_histo_group_Higgs_wh3l_Pre_13TeV_flagOSSF279->SetBinContent(1,0.5000402);
   new_histo_group_Higgs_wh3l_Pre_13TeV_flagOSSF279->SetBinError(1,0.02307393);
   new_histo_group_Higgs_wh3l_Pre_13TeV_flagOSSF279->SetEntries(916);
   new_histo_group_Higgs_wh3l_Pre_13TeV_flagOSSF279->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_Pre_13TeV_flagOSSF279->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_Pre_13TeV_flagOSSF279->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_Pre_13TeV_flagOSSF279->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_Pre_13TeV_flagOSSF279->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_Pre_13TeV_flagOSSF279->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_Pre_13TeV_flagOSSF279->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_Pre_13TeV_flagOSSF279->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_Pre_13TeV_flagOSSF279->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_Pre_13TeV_flagOSSF279->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_Pre_13TeV_flagOSSF279->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_Pre_13TeV_flagOSSF279->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_Pre_13TeV_flagOSSF279->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_Pre_13TeV_flagOSSF279->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_Pre_13TeV_flagOSSF279->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_Pre_13TeV_flagOSSF->Add(new_histo_group_Higgs_wh3l_Pre_13TeV_flagOSSF,"");
   thsSignal_grouped_wh3l_Pre_13TeV_flagOSSF->Draw("hist same noclear");
   
   Double_t _fx3055[2] = {
   0.5,
   1.5};
   Double_t _fy3055[2] = {
   24.58375,
   0};
   Double_t _felx3055[2] = {
   0.5,
   0.5};
   Double_t _fely3055[2] = {
   8.580037,
   0};
   Double_t _fehx3055[2] = {
   0.5,
   0.5};
   Double_t _fehy3055[2] = {
   8.624182,
   0};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(2,_fx3055,_fy3055,_felx3055,_fehx3055,_fely3055,_fehy3055);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(12);
   grae->SetFillStyle(3004);
   grae->SetLineColor(12);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3055 = new TH1F("Graph_Graph3055","",100,0,2.2);
   Graph_Graph3055->SetMinimum(0);
   Graph_Graph3055->SetMaximum(36.52873);
   Graph_Graph3055->SetDirectory(0);
   Graph_Graph3055->SetStats(0);
   Graph_Graph3055->SetLineStyle(0);
   Graph_Graph3055->SetMarkerStyle(20);
   Graph_Graph3055->GetXaxis()->SetLabelFont(42);
   Graph_Graph3055->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3055->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3055->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3055->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3055->GetXaxis()->SetTitleFont(42);
   Graph_Graph3055->GetYaxis()->SetLabelFont(42);
   Graph_Graph3055->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3055->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3055->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3055->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3055->GetYaxis()->SetTitleFont(42);
   Graph_Graph3055->GetZaxis()->SetLabelFont(42);
   Graph_Graph3055->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3055->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3055->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3055->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3055);
   
   grae->Draw("2");
   
   Double_t _fx3056[2] = {
   0.5,
   1.5};
   Double_t _fy3056[2] = {
   14,
   0};
   Double_t _felx3056[2] = {
   0.5,
   0.5};
   Double_t _fely3056[2] = {
   3.696567,
   0};
   Double_t _fehx3056[2] = {
   0.5,
   0.5};
   Double_t _fehy3056[2] = {
   4.830479,
   1.147908};
   grae = new TGraphAsymmErrors(2,_fx3056,_fy3056,_felx3056,_fehx3056,_fely3056,_fehy3056);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(1);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3056 = new TH1F("Graph_Graph3056","",100,0,2.2);
   Graph_Graph3056->SetMinimum(0);
   Graph_Graph3056->SetMaximum(20.71353);
   Graph_Graph3056->SetDirectory(0);
   Graph_Graph3056->SetStats(0);
   Graph_Graph3056->SetLineStyle(0);
   Graph_Graph3056->SetMarkerStyle(20);
   Graph_Graph3056->GetXaxis()->SetLabelFont(42);
   Graph_Graph3056->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3056->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3056->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3056->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3056->GetXaxis()->SetTitleFont(42);
   Graph_Graph3056->GetYaxis()->SetLabelFont(42);
   Graph_Graph3056->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3056->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3056->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3056->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3056->GetYaxis()->SetTitleFont(42);
   Graph_Graph3056->GetZaxis()->SetLabelFont(42);
   Graph_Graph3056->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3056->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3056->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3056->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3056);
   
   grae->Draw("p0");
   
   TLegend *leg = new TLegend(0.2,0.7,0.8,0.9,NULL,"brNDC");
   leg->SetTextFont(62);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("new_histo_group_Fake_wh3l_Pre_13TeV_flagOSSF","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_Pre_13TeV_flagOSSF","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_Pre_13TeV_flagOSSF","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_Pre_13TeV_flagOSSF","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_Pre_13TeV_flagOSSF","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_Pre_13TeV_flagOSSF","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_Pre_13TeV_flagOSSF","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_Pre_13TeV_flagOSSF","Data","EPL");
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
   entry=leg->AddEntry("new_histo_group_Fake_wh3l_Pre_13TeV_flagOSSF","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_Pre_13TeV_flagOSSF","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_Pre_13TeV_flagOSSF","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_Pre_13TeV_flagOSSF","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_Pre_13TeV_flagOSSF","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_Pre_13TeV_flagOSSF","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_Pre_13TeV_flagOSSF","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_Pre_13TeV_flagOSSF","Data","EPL");
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
   
   TH1F *hframe_copy280 = new TH1F("hframe_copy280","",1000,0,2);
   hframe_copy280->SetMinimum(0);
   hframe_copy280->SetMaximum(62.70948);
   hframe_copy280->SetDirectory(0);
   hframe_copy280->SetStats(0);
   hframe_copy280->SetLineStyle(0);
   hframe_copy280->SetMarkerStyle(20);
   hframe_copy280->GetXaxis()->SetTitle("flag OSSF");
   hframe_copy280->GetXaxis()->SetNdivisions(506);
   hframe_copy280->GetXaxis()->SetLabelFont(42);
   hframe_copy280->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy280->GetXaxis()->SetLabelSize(0.05);
   hframe_copy280->GetXaxis()->SetTitleSize(0.06);
   hframe_copy280->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy280->GetXaxis()->SetTitleFont(42);
   hframe_copy280->GetYaxis()->SetTitle("Events");
   hframe_copy280->GetYaxis()->SetLabelFont(42);
   hframe_copy280->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy280->GetYaxis()->SetLabelSize(0.05);
   hframe_copy280->GetYaxis()->SetTitleSize(0.06);
   hframe_copy280->GetYaxis()->SetTitleOffset(1.25);
   hframe_copy280->GetYaxis()->SetTitleFont(42);
   hframe_copy280->GetZaxis()->SetLabelFont(42);
   hframe_copy280->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy280->GetZaxis()->SetLabelSize(0.05);
   hframe_copy280->GetZaxis()->SetTitleSize(0.06);
   hframe_copy280->GetZaxis()->SetTitleFont(42);
   hframe_copy280->Draw("sameaxis");
   ccwh3l_Pre_13TeV_flagOSSF->Modified();
   ccwh3l_Pre_13TeV_flagOSSF->cd();
   ccwh3l_Pre_13TeV_flagOSSF->SetSelected(ccwh3l_Pre_13TeV_flagOSSF);
}
