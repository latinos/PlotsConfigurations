void c_wh3l_wz_13TeV_flagOSSF()
{
//=========Macro generated from canvas: ccwh3l_wz_13TeV_flagOSSF/cc
//=========  (Tue Jun 28 16:48:57 2016) by ROOT version6.02/13
   TCanvas *ccwh3l_wz_13TeV_flagOSSF = new TCanvas("ccwh3l_wz_13TeV_flagOSSF", "cc",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   ccwh3l_wz_13TeV_flagOSSF->SetHighLightColor(2);
   ccwh3l_wz_13TeV_flagOSSF->Range(-0.4,-71.31088,2.1,477.2344);
   ccwh3l_wz_13TeV_flagOSSF->SetFillColor(0);
   ccwh3l_wz_13TeV_flagOSSF->SetBorderMode(0);
   ccwh3l_wz_13TeV_flagOSSF->SetBorderSize(2);
   ccwh3l_wz_13TeV_flagOSSF->SetTickx(1);
   ccwh3l_wz_13TeV_flagOSSF->SetTicky(1);
   ccwh3l_wz_13TeV_flagOSSF->SetLeftMargin(0.16);
   ccwh3l_wz_13TeV_flagOSSF->SetRightMargin(0.04);
   ccwh3l_wz_13TeV_flagOSSF->SetTopMargin(0.05);
   ccwh3l_wz_13TeV_flagOSSF->SetBottomMargin(0.13);
   ccwh3l_wz_13TeV_flagOSSF->SetFrameFillStyle(0);
   ccwh3l_wz_13TeV_flagOSSF->SetFrameBorderMode(0);
   ccwh3l_wz_13TeV_flagOSSF->SetFrameFillStyle(0);
   ccwh3l_wz_13TeV_flagOSSF->SetFrameBorderMode(0);
   
   TH1F *hframe73 = new TH1F("hframe73","",1000,0,2);
   hframe73->SetMinimum(0);
   hframe73->SetMaximum(449.8071);
   hframe73->SetDirectory(0);
   hframe73->SetStats(0);
   hframe73->SetLineStyle(0);
   hframe73->SetMarkerStyle(20);
   hframe73->GetXaxis()->SetTitle("flag OSSF");
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
   
   THStack *thsBackground_grouped_wh3l_wz_13TeV_flagOSSF = new THStack();
   thsBackground_grouped_wh3l_wz_13TeV_flagOSSF->SetName("thsBackground_grouped_wh3l_wz_13TeV_flagOSSF");
   thsBackground_grouped_wh3l_wz_13TeV_flagOSSF->SetTitle("thsBackground_grouped_wh3l_wz_13TeV_flagOSSF");
   
   TH1F *thsBackground_grouped_wh3l_wz_13TeV_flagOSSF_stack_10 = new TH1F("thsBackground_grouped_wh3l_wz_13TeV_flagOSSF_stack_10","thsBackground_grouped_wh3l_wz_13TeV_flagOSSF",2,0,2);
   thsBackground_grouped_wh3l_wz_13TeV_flagOSSF_stack_10->SetMinimum(0);
   thsBackground_grouped_wh3l_wz_13TeV_flagOSSF_stack_10->SetMaximum(139.4087);
   thsBackground_grouped_wh3l_wz_13TeV_flagOSSF_stack_10->SetDirectory(0);
   thsBackground_grouped_wh3l_wz_13TeV_flagOSSF_stack_10->SetStats(0);
   thsBackground_grouped_wh3l_wz_13TeV_flagOSSF_stack_10->SetLineStyle(0);
   thsBackground_grouped_wh3l_wz_13TeV_flagOSSF_stack_10->SetMarkerStyle(20);
   thsBackground_grouped_wh3l_wz_13TeV_flagOSSF_stack_10->GetXaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_wz_13TeV_flagOSSF_stack_10->GetXaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_wz_13TeV_flagOSSF_stack_10->GetXaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_wz_13TeV_flagOSSF_stack_10->GetXaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_wz_13TeV_flagOSSF_stack_10->GetXaxis()->SetTitleOffset(0.9);
   thsBackground_grouped_wh3l_wz_13TeV_flagOSSF_stack_10->GetXaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_wz_13TeV_flagOSSF_stack_10->GetYaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_wz_13TeV_flagOSSF_stack_10->GetYaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_wz_13TeV_flagOSSF_stack_10->GetYaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_wz_13TeV_flagOSSF_stack_10->GetYaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_wz_13TeV_flagOSSF_stack_10->GetYaxis()->SetTitleOffset(1.25);
   thsBackground_grouped_wh3l_wz_13TeV_flagOSSF_stack_10->GetYaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_wz_13TeV_flagOSSF_stack_10->GetZaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_wz_13TeV_flagOSSF_stack_10->GetZaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_wz_13TeV_flagOSSF_stack_10->GetZaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_wz_13TeV_flagOSSF_stack_10->GetZaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_wz_13TeV_flagOSSF_stack_10->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_wz_13TeV_flagOSSF->SetHistogram(thsBackground_grouped_wh3l_wz_13TeV_flagOSSF_stack_10);
   
   
   TH1D *new_histo_group_Fake_wh3l_wz_13TeV_flagOSSF74 = new TH1D("new_histo_group_Fake_wh3l_wz_13TeV_flagOSSF74","histo_Fake",2,0,2);
   new_histo_group_Fake_wh3l_wz_13TeV_flagOSSF74->SetBinContent(2,10.55069);
   new_histo_group_Fake_wh3l_wz_13TeV_flagOSSF74->SetBinError(2,3.327657);
   new_histo_group_Fake_wh3l_wz_13TeV_flagOSSF74->SetEntries(337);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_wz_13TeV_flagOSSF74->SetFillColor(ci);
   new_histo_group_Fake_wh3l_wz_13TeV_flagOSSF74->SetFillStyle(3001);

   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_wz_13TeV_flagOSSF74->SetLineColor(ci);
   new_histo_group_Fake_wh3l_wz_13TeV_flagOSSF74->GetXaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_wz_13TeV_flagOSSF74->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_wz_13TeV_flagOSSF74->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_wz_13TeV_flagOSSF74->GetXaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_wz_13TeV_flagOSSF74->GetYaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_wz_13TeV_flagOSSF74->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_wz_13TeV_flagOSSF74->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_wz_13TeV_flagOSSF74->GetYaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_wz_13TeV_flagOSSF74->GetZaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_wz_13TeV_flagOSSF74->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_wz_13TeV_flagOSSF74->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_wz_13TeV_flagOSSF74->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_wz_13TeV_flagOSSF->Add(new_histo_group_Fake_wh3l_wz_13TeV_flagOSSF,"");
   
   TH1D *new_histo_group_WW_wh3l_wz_13TeV_flagOSSF75 = new TH1D("new_histo_group_WW_wh3l_wz_13TeV_flagOSSF75","histo_WW",2,0,2);
   new_histo_group_WW_wh3l_wz_13TeV_flagOSSF75->SetBinContent(2,0.07539475);
   new_histo_group_WW_wh3l_wz_13TeV_flagOSSF75->SetBinError(2,0.03420241);
   new_histo_group_WW_wh3l_wz_13TeV_flagOSSF75->SetEntries(5);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_wz_13TeV_flagOSSF75->SetFillColor(ci);
   new_histo_group_WW_wh3l_wz_13TeV_flagOSSF75->SetFillStyle(3001);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_wz_13TeV_flagOSSF75->SetLineColor(ci);
   new_histo_group_WW_wh3l_wz_13TeV_flagOSSF75->GetXaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_wz_13TeV_flagOSSF75->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_wz_13TeV_flagOSSF75->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_wz_13TeV_flagOSSF75->GetXaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_wz_13TeV_flagOSSF75->GetYaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_wz_13TeV_flagOSSF75->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_wz_13TeV_flagOSSF75->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_wz_13TeV_flagOSSF75->GetYaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_wz_13TeV_flagOSSF75->GetZaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_wz_13TeV_flagOSSF75->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_wz_13TeV_flagOSSF75->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_wz_13TeV_flagOSSF75->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_wz_13TeV_flagOSSF->Add(new_histo_group_WW_wh3l_wz_13TeV_flagOSSF,"");
   
   TH1D *new_histo_group_VVV_wh3l_wz_13TeV_flagOSSF76 = new TH1D("new_histo_group_VVV_wh3l_wz_13TeV_flagOSSF76","histo_VVV",2,0,2);
   new_histo_group_VVV_wh3l_wz_13TeV_flagOSSF76->SetBinContent(2,0.1625066);
   new_histo_group_VVV_wh3l_wz_13TeV_flagOSSF76->SetBinError(2,0.01072569);
   new_histo_group_VVV_wh3l_wz_13TeV_flagOSSF76->SetEntries(326);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_wz_13TeV_flagOSSF76->SetFillColor(ci);
   new_histo_group_VVV_wh3l_wz_13TeV_flagOSSF76->SetFillStyle(3001);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_wz_13TeV_flagOSSF76->SetLineColor(ci);
   new_histo_group_VVV_wh3l_wz_13TeV_flagOSSF76->GetXaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_wz_13TeV_flagOSSF76->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_wz_13TeV_flagOSSF76->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_wz_13TeV_flagOSSF76->GetXaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_wz_13TeV_flagOSSF76->GetYaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_wz_13TeV_flagOSSF76->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_wz_13TeV_flagOSSF76->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_wz_13TeV_flagOSSF76->GetYaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_wz_13TeV_flagOSSF76->GetZaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_wz_13TeV_flagOSSF76->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_wz_13TeV_flagOSSF76->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_wz_13TeV_flagOSSF76->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_wz_13TeV_flagOSSF->Add(new_histo_group_VVV_wh3l_wz_13TeV_flagOSSF,"");
   
   TH1D *new_histo_group_Vg_wh3l_wz_13TeV_flagOSSF77 = new TH1D("new_histo_group_Vg_wh3l_wz_13TeV_flagOSSF77","histo_Vg",2,0,2);
   new_histo_group_Vg_wh3l_wz_13TeV_flagOSSF77->SetBinContent(2,5.013231);
   new_histo_group_Vg_wh3l_wz_13TeV_flagOSSF77->SetBinError(2,0.7939011);
   new_histo_group_Vg_wh3l_wz_13TeV_flagOSSF77->SetEntries(64);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_wz_13TeV_flagOSSF77->SetFillColor(ci);
   new_histo_group_Vg_wh3l_wz_13TeV_flagOSSF77->SetFillStyle(3001);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_wz_13TeV_flagOSSF77->SetLineColor(ci);
   new_histo_group_Vg_wh3l_wz_13TeV_flagOSSF77->GetXaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_wz_13TeV_flagOSSF77->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_wz_13TeV_flagOSSF77->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_wz_13TeV_flagOSSF77->GetXaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_wz_13TeV_flagOSSF77->GetYaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_wz_13TeV_flagOSSF77->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_wz_13TeV_flagOSSF77->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_wz_13TeV_flagOSSF77->GetYaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_wz_13TeV_flagOSSF77->GetZaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_wz_13TeV_flagOSSF77->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_wz_13TeV_flagOSSF77->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_wz_13TeV_flagOSSF77->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_wz_13TeV_flagOSSF->Add(new_histo_group_Vg_wh3l_wz_13TeV_flagOSSF,"");
   
   TH1D *new_histo_group_ZZ_wh3l_wz_13TeV_flagOSSF78 = new TH1D("new_histo_group_ZZ_wh3l_wz_13TeV_flagOSSF78","histo_ZZ",2,0,2);
   new_histo_group_ZZ_wh3l_wz_13TeV_flagOSSF78->SetBinContent(2,8.330756);
   new_histo_group_ZZ_wh3l_wz_13TeV_flagOSSF78->SetBinError(2,0.5875322);
   new_histo_group_ZZ_wh3l_wz_13TeV_flagOSSF78->SetEntries(231);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_wz_13TeV_flagOSSF78->SetFillColor(ci);
   new_histo_group_ZZ_wh3l_wz_13TeV_flagOSSF78->SetFillStyle(3001);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_wz_13TeV_flagOSSF78->SetLineColor(ci);
   new_histo_group_ZZ_wh3l_wz_13TeV_flagOSSF78->GetXaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_wz_13TeV_flagOSSF78->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_wz_13TeV_flagOSSF78->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_wz_13TeV_flagOSSF78->GetXaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_wz_13TeV_flagOSSF78->GetYaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_wz_13TeV_flagOSSF78->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_wz_13TeV_flagOSSF78->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_wz_13TeV_flagOSSF78->GetYaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_wz_13TeV_flagOSSF78->GetZaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_wz_13TeV_flagOSSF78->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_wz_13TeV_flagOSSF78->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_wz_13TeV_flagOSSF78->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_wz_13TeV_flagOSSF->Add(new_histo_group_ZZ_wh3l_wz_13TeV_flagOSSF,"");
   
   TH1D *new_histo_group_WZ_wh3l_wz_13TeV_flagOSSF79 = new TH1D("new_histo_group_WZ_wh3l_wz_13TeV_flagOSSF79","histo_WZ",2,0,2);
   new_histo_group_WZ_wh3l_wz_13TeV_flagOSSF79->SetBinContent(2,108.6376);
   new_histo_group_WZ_wh3l_wz_13TeV_flagOSSF79->SetBinError(2,0.7684771);
   new_histo_group_WZ_wh3l_wz_13TeV_flagOSSF79->SetEntries(22151);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_wz_13TeV_flagOSSF79->SetFillColor(ci);
   new_histo_group_WZ_wh3l_wz_13TeV_flagOSSF79->SetFillStyle(3001);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_wz_13TeV_flagOSSF79->SetLineColor(ci);
   new_histo_group_WZ_wh3l_wz_13TeV_flagOSSF79->GetXaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_wz_13TeV_flagOSSF79->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_wz_13TeV_flagOSSF79->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_wz_13TeV_flagOSSF79->GetXaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_wz_13TeV_flagOSSF79->GetYaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_wz_13TeV_flagOSSF79->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_wz_13TeV_flagOSSF79->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_wz_13TeV_flagOSSF79->GetYaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_wz_13TeV_flagOSSF79->GetZaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_wz_13TeV_flagOSSF79->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_wz_13TeV_flagOSSF79->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_wz_13TeV_flagOSSF79->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_wz_13TeV_flagOSSF->Add(new_histo_group_WZ_wh3l_wz_13TeV_flagOSSF,"");
   thsBackground_grouped_wh3l_wz_13TeV_flagOSSF->Draw("hist same");
   
   Double_t _fx3019[2] = {
   0.5,
   1.5};
   Double_t _fy3019[2] = {
   0,
   132.7702};
   Double_t _felx3019[2] = {
   0.5,
   0.5};
   Double_t _fely3019[2] = {
   0,
   6.375836};
   Double_t _fehx3019[2] = {
   0.5,
   0.5};
   Double_t _fehy3019[2] = {
   0,
   6.375829};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(2,_fx3019,_fy3019,_felx3019,_fehx3019,_fely3019,_fehy3019);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(12);
   grae->SetFillStyle(3004);
   grae->SetLineColor(12);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3019 = new TH1F("Graph_Graph3019","",100,0,2.2);
   Graph_Graph3019->SetMinimum(0);
   Graph_Graph3019->SetMaximum(153.0606);
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
   
   Double_t _fx3020[2] = {
   0.5,
   1.5};
   Double_t _fy3020[2] = {
   0,
   167};
   Double_t _felx3020[2] = {
   0.5,
   0.5};
   Double_t _fely3020[2] = {
   0,
   12.91017};
   Double_t _fehx3020[2] = {
   0.5,
   0.5};
   Double_t _fehy3020[2] = {
   1.147908,
   13.94896};
   grae = new TGraphAsymmErrors(2,_fx3020,_fy3020,_felx3020,_fehx3020,_fely3020,_fehy3020);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(1);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3020 = new TH1F("Graph_Graph3020","",100,0,2.2);
   Graph_Graph3020->SetMinimum(0);
   Graph_Graph3020->SetMaximum(199.0439);
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
   TLegendEntry *entry=leg->AddEntry("new_histo_group_Fake_wh3l_wz_13TeV_flagOSSF","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_wz_13TeV_flagOSSF","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_wz_13TeV_flagOSSF","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_wz_13TeV_flagOSSF","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_wz_13TeV_flagOSSF","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_wz_13TeV_flagOSSF","WZ","F");

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
   entry=leg->AddEntry("new_histo_DATA_wh3l_wz_13TeV_flagOSSF","Data","EPL");
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
   entry=leg->AddEntry("new_histo_group_Fake_wh3l_wz_13TeV_flagOSSF","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_wz_13TeV_flagOSSF","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_wz_13TeV_flagOSSF","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_wz_13TeV_flagOSSF","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_wz_13TeV_flagOSSF","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_wz_13TeV_flagOSSF","WZ","F");

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
   entry=leg->AddEntry("new_histo_DATA_wh3l_wz_13TeV_flagOSSF","Data","EPL");
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
   
   TH1F *hframe_copy80 = new TH1F("hframe_copy80","",1000,0,2);
   hframe_copy80->SetMinimum(0);
   hframe_copy80->SetMaximum(449.8071);
   hframe_copy80->SetDirectory(0);
   hframe_copy80->SetStats(0);
   hframe_copy80->SetLineStyle(0);
   hframe_copy80->SetMarkerStyle(20);
   hframe_copy80->GetXaxis()->SetTitle("flag OSSF");
   hframe_copy80->GetXaxis()->SetNdivisions(506);
   hframe_copy80->GetXaxis()->SetLabelFont(42);
   hframe_copy80->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy80->GetXaxis()->SetLabelSize(0.05);
   hframe_copy80->GetXaxis()->SetTitleSize(0.06);
   hframe_copy80->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy80->GetXaxis()->SetTitleFont(42);
   hframe_copy80->GetYaxis()->SetTitle("Events");
   hframe_copy80->GetYaxis()->SetLabelFont(42);
   hframe_copy80->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy80->GetYaxis()->SetLabelSize(0.05);
   hframe_copy80->GetYaxis()->SetTitleSize(0.06);
   hframe_copy80->GetYaxis()->SetTitleOffset(1.25);
   hframe_copy80->GetYaxis()->SetTitleFont(42);
   hframe_copy80->GetZaxis()->SetLabelFont(42);
   hframe_copy80->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy80->GetZaxis()->SetLabelSize(0.05);
   hframe_copy80->GetZaxis()->SetTitleSize(0.06);
   hframe_copy80->GetZaxis()->SetTitleFont(42);
   hframe_copy80->Draw("sameaxis");
   ccwh3l_wz_13TeV_flagOSSF->Modified();
   ccwh3l_wz_13TeV_flagOSSF->cd();
   ccwh3l_wz_13TeV_flagOSSF->SetSelected(ccwh3l_wz_13TeV_flagOSSF);
}
