void c_wh3l_fakes_13TeV_pt1()
{
//=========Macro generated from canvas: ccwh3l_fakes_13TeV_pt1/cc
//=========  (Tue Jun 28 16:48:57 2016) by ROOT version6.02/13
   TCanvas *ccwh3l_fakes_13TeV_pt1 = new TCanvas("ccwh3l_fakes_13TeV_pt1", "cc",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   ccwh3l_fakes_13TeV_pt1->SetHighLightColor(2);
   ccwh3l_fakes_13TeV_pt1->Range(-28,-0.1585366,209.5,1.060976);
   ccwh3l_fakes_13TeV_pt1->SetFillColor(0);
   ccwh3l_fakes_13TeV_pt1->SetBorderMode(0);
   ccwh3l_fakes_13TeV_pt1->SetBorderSize(2);
   ccwh3l_fakes_13TeV_pt1->SetTickx(1);
   ccwh3l_fakes_13TeV_pt1->SetTicky(1);
   ccwh3l_fakes_13TeV_pt1->SetLeftMargin(0.16);
   ccwh3l_fakes_13TeV_pt1->SetRightMargin(0.04);
   ccwh3l_fakes_13TeV_pt1->SetTopMargin(0.05);
   ccwh3l_fakes_13TeV_pt1->SetBottomMargin(0.13);
   ccwh3l_fakes_13TeV_pt1->SetFrameFillStyle(0);
   ccwh3l_fakes_13TeV_pt1->SetFrameBorderMode(0);
   ccwh3l_fakes_13TeV_pt1->SetFrameFillStyle(0);
   ccwh3l_fakes_13TeV_pt1->SetFrameBorderMode(0);
   
   TH1F *hframe65 = new TH1F("hframe65","",1000,10,200);
   hframe65->SetMinimum(0);
   hframe65->SetMaximum(0);
   hframe65->SetDirectory(0);
   hframe65->SetStats(0);
   hframe65->SetLineStyle(0);
   hframe65->SetMarkerStyle(20);
   hframe65->GetXaxis()->SetTitle("lept1_p_{T} [GeV]");
   hframe65->GetXaxis()->SetNdivisions(506);
   hframe65->GetXaxis()->SetLabelFont(42);
   hframe65->GetXaxis()->SetLabelOffset(0.007);
   hframe65->GetXaxis()->SetLabelSize(0.05);
   hframe65->GetXaxis()->SetTitleSize(0.06);
   hframe65->GetXaxis()->SetTitleOffset(0.9);
   hframe65->GetXaxis()->SetTitleFont(42);
   hframe65->GetYaxis()->SetTitle("Events");
   hframe65->GetYaxis()->SetLabelFont(42);
   hframe65->GetYaxis()->SetLabelOffset(0.007);
   hframe65->GetYaxis()->SetLabelSize(0.05);
   hframe65->GetYaxis()->SetTitleSize(0.06);
   hframe65->GetYaxis()->SetTitleOffset(1.25);
   hframe65->GetYaxis()->SetTitleFont(42);
   hframe65->GetZaxis()->SetLabelFont(42);
   hframe65->GetZaxis()->SetLabelOffset(0.007);
   hframe65->GetZaxis()->SetLabelSize(0.05);
   hframe65->GetZaxis()->SetTitleSize(0.06);
   hframe65->GetZaxis()->SetTitleFont(42);
   hframe65->Draw(" ");
   
   THStack *thsBackground_grouped_wh3l_fakes_13TeV_pt1 = new THStack();
   thsBackground_grouped_wh3l_fakes_13TeV_pt1->SetName("thsBackground_grouped_wh3l_fakes_13TeV_pt1");
   thsBackground_grouped_wh3l_fakes_13TeV_pt1->SetTitle("thsBackground_grouped_wh3l_fakes_13TeV_pt1");
   
   TH1F *thsBackground_grouped_wh3l_fakes_13TeV_pt1_stack_9 = new TH1F("thsBackground_grouped_wh3l_fakes_13TeV_pt1_stack_9","thsBackground_grouped_wh3l_fakes_13TeV_pt1",25,10,200);
   thsBackground_grouped_wh3l_fakes_13TeV_pt1_stack_9->SetMinimum(0);
   thsBackground_grouped_wh3l_fakes_13TeV_pt1_stack_9->SetMaximum(0);
   thsBackground_grouped_wh3l_fakes_13TeV_pt1_stack_9->SetDirectory(0);
   thsBackground_grouped_wh3l_fakes_13TeV_pt1_stack_9->SetStats(0);
   thsBackground_grouped_wh3l_fakes_13TeV_pt1_stack_9->SetLineStyle(0);
   thsBackground_grouped_wh3l_fakes_13TeV_pt1_stack_9->SetMarkerStyle(20);
   thsBackground_grouped_wh3l_fakes_13TeV_pt1_stack_9->GetXaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_fakes_13TeV_pt1_stack_9->GetXaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_fakes_13TeV_pt1_stack_9->GetXaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_fakes_13TeV_pt1_stack_9->GetXaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_fakes_13TeV_pt1_stack_9->GetXaxis()->SetTitleOffset(0.9);
   thsBackground_grouped_wh3l_fakes_13TeV_pt1_stack_9->GetXaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_fakes_13TeV_pt1_stack_9->GetYaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_fakes_13TeV_pt1_stack_9->GetYaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_fakes_13TeV_pt1_stack_9->GetYaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_fakes_13TeV_pt1_stack_9->GetYaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_fakes_13TeV_pt1_stack_9->GetYaxis()->SetTitleOffset(1.25);
   thsBackground_grouped_wh3l_fakes_13TeV_pt1_stack_9->GetYaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_fakes_13TeV_pt1_stack_9->GetZaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_fakes_13TeV_pt1_stack_9->GetZaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_fakes_13TeV_pt1_stack_9->GetZaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_fakes_13TeV_pt1_stack_9->GetZaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_fakes_13TeV_pt1_stack_9->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_fakes_13TeV_pt1->SetHistogram(thsBackground_grouped_wh3l_fakes_13TeV_pt1_stack_9);
   
   
   TH1D *new_histo_group_Fake_wh3l_fakes_13TeV_pt166 = new TH1D("new_histo_group_Fake_wh3l_fakes_13TeV_pt166","histo_Fake",25,10,200);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_fakes_13TeV_pt166->SetFillColor(ci);
   new_histo_group_Fake_wh3l_fakes_13TeV_pt166->SetFillStyle(3001);

   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_fakes_13TeV_pt166->SetLineColor(ci);
   new_histo_group_Fake_wh3l_fakes_13TeV_pt166->GetXaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_fakes_13TeV_pt166->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_fakes_13TeV_pt166->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_fakes_13TeV_pt166->GetXaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_fakes_13TeV_pt166->GetYaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_fakes_13TeV_pt166->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_fakes_13TeV_pt166->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_fakes_13TeV_pt166->GetYaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_fakes_13TeV_pt166->GetZaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_fakes_13TeV_pt166->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_fakes_13TeV_pt166->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_fakes_13TeV_pt166->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_fakes_13TeV_pt1->Add(new_histo_group_Fake_wh3l_fakes_13TeV_pt1,"");
   
   TH1D *new_histo_group_WW_wh3l_fakes_13TeV_pt167 = new TH1D("new_histo_group_WW_wh3l_fakes_13TeV_pt167","histo_WW",25,10,200);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_fakes_13TeV_pt167->SetFillColor(ci);
   new_histo_group_WW_wh3l_fakes_13TeV_pt167->SetFillStyle(3001);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_fakes_13TeV_pt167->SetLineColor(ci);
   new_histo_group_WW_wh3l_fakes_13TeV_pt167->GetXaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_fakes_13TeV_pt167->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_fakes_13TeV_pt167->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_fakes_13TeV_pt167->GetXaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_fakes_13TeV_pt167->GetYaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_fakes_13TeV_pt167->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_fakes_13TeV_pt167->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_fakes_13TeV_pt167->GetYaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_fakes_13TeV_pt167->GetZaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_fakes_13TeV_pt167->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_fakes_13TeV_pt167->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_fakes_13TeV_pt167->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_fakes_13TeV_pt1->Add(new_histo_group_WW_wh3l_fakes_13TeV_pt1,"");
   
   TH1D *new_histo_group_VVV_wh3l_fakes_13TeV_pt168 = new TH1D("new_histo_group_VVV_wh3l_fakes_13TeV_pt168","histo_VVV",25,10,200);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_fakes_13TeV_pt168->SetFillColor(ci);
   new_histo_group_VVV_wh3l_fakes_13TeV_pt168->SetFillStyle(3001);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_fakes_13TeV_pt168->SetLineColor(ci);
   new_histo_group_VVV_wh3l_fakes_13TeV_pt168->GetXaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_fakes_13TeV_pt168->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_fakes_13TeV_pt168->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_fakes_13TeV_pt168->GetXaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_fakes_13TeV_pt168->GetYaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_fakes_13TeV_pt168->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_fakes_13TeV_pt168->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_fakes_13TeV_pt168->GetYaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_fakes_13TeV_pt168->GetZaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_fakes_13TeV_pt168->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_fakes_13TeV_pt168->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_fakes_13TeV_pt168->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_fakes_13TeV_pt1->Add(new_histo_group_VVV_wh3l_fakes_13TeV_pt1,"");
   
   TH1D *new_histo_group_Vg_wh3l_fakes_13TeV_pt169 = new TH1D("new_histo_group_Vg_wh3l_fakes_13TeV_pt169","histo_Vg",25,10,200);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_fakes_13TeV_pt169->SetFillColor(ci);
   new_histo_group_Vg_wh3l_fakes_13TeV_pt169->SetFillStyle(3001);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_fakes_13TeV_pt169->SetLineColor(ci);
   new_histo_group_Vg_wh3l_fakes_13TeV_pt169->GetXaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_fakes_13TeV_pt169->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_fakes_13TeV_pt169->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_fakes_13TeV_pt169->GetXaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_fakes_13TeV_pt169->GetYaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_fakes_13TeV_pt169->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_fakes_13TeV_pt169->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_fakes_13TeV_pt169->GetYaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_fakes_13TeV_pt169->GetZaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_fakes_13TeV_pt169->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_fakes_13TeV_pt169->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_fakes_13TeV_pt169->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_fakes_13TeV_pt1->Add(new_histo_group_Vg_wh3l_fakes_13TeV_pt1,"");
   
   TH1D *new_histo_group_ZZ_wh3l_fakes_13TeV_pt170 = new TH1D("new_histo_group_ZZ_wh3l_fakes_13TeV_pt170","histo_ZZ",25,10,200);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_fakes_13TeV_pt170->SetFillColor(ci);
   new_histo_group_ZZ_wh3l_fakes_13TeV_pt170->SetFillStyle(3001);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_fakes_13TeV_pt170->SetLineColor(ci);
   new_histo_group_ZZ_wh3l_fakes_13TeV_pt170->GetXaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_fakes_13TeV_pt170->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_fakes_13TeV_pt170->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_fakes_13TeV_pt170->GetXaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_fakes_13TeV_pt170->GetYaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_fakes_13TeV_pt170->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_fakes_13TeV_pt170->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_fakes_13TeV_pt170->GetYaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_fakes_13TeV_pt170->GetZaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_fakes_13TeV_pt170->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_fakes_13TeV_pt170->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_fakes_13TeV_pt170->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_fakes_13TeV_pt1->Add(new_histo_group_ZZ_wh3l_fakes_13TeV_pt1,"");
   
   TH1D *new_histo_group_WZ_wh3l_fakes_13TeV_pt171 = new TH1D("new_histo_group_WZ_wh3l_fakes_13TeV_pt171","histo_WZ",25,10,200);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_fakes_13TeV_pt171->SetFillColor(ci);
   new_histo_group_WZ_wh3l_fakes_13TeV_pt171->SetFillStyle(3001);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_fakes_13TeV_pt171->SetLineColor(ci);
   new_histo_group_WZ_wh3l_fakes_13TeV_pt171->GetXaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_fakes_13TeV_pt171->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_fakes_13TeV_pt171->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_fakes_13TeV_pt171->GetXaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_fakes_13TeV_pt171->GetYaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_fakes_13TeV_pt171->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_fakes_13TeV_pt171->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_fakes_13TeV_pt171->GetYaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_fakes_13TeV_pt171->GetZaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_fakes_13TeV_pt171->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_fakes_13TeV_pt171->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_fakes_13TeV_pt171->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_fakes_13TeV_pt1->Add(new_histo_group_WZ_wh3l_fakes_13TeV_pt1,"");
   thsBackground_grouped_wh3l_fakes_13TeV_pt1->Draw("hist same");
   
   Double_t _fx3017[25] = {
   13.8,
   21.4,
   29,
   36.6,
   44.2,
   51.8,
   59.4,
   67,
   74.6,
   82.2,
   89.8,
   97.4,
   105,
   112.6,
   120.2,
   127.8,
   135.4,
   143,
   150.6,
   158.2,
   165.8,
   173.4,
   181,
   188.6,
   196.2};
   Double_t _fy3017[25] = {
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
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _felx3017[25] = {
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8};
   Double_t _fely3017[25] = {
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
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fehx3017[25] = {
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8};
   Double_t _fehy3017[25] = {
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
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(25,_fx3017,_fy3017,_felx3017,_fehx3017,_fely3017,_fehy3017);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(12);
   grae->SetFillStyle(3004);
   grae->SetLineColor(12);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3017 = new TH1F("Graph_Graph3017","",100,0,219);
   Graph_Graph3017->SetMinimum(0);
   Graph_Graph3017->SetMaximum(1.1);
   Graph_Graph3017->SetDirectory(0);
   Graph_Graph3017->SetStats(0);
   Graph_Graph3017->SetLineStyle(0);
   Graph_Graph3017->SetMarkerStyle(20);
   Graph_Graph3017->GetXaxis()->SetLabelFont(42);
   Graph_Graph3017->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3017->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3017->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3017->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3017->GetXaxis()->SetTitleFont(42);
   Graph_Graph3017->GetYaxis()->SetLabelFont(42);
   Graph_Graph3017->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3017->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3017->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3017->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3017->GetYaxis()->SetTitleFont(42);
   Graph_Graph3017->GetZaxis()->SetLabelFont(42);
   Graph_Graph3017->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3017->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3017->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3017->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3017);
   
   grae->Draw("2");
   
   Double_t _fx3018[25] = {
   13.8,
   21.4,
   29,
   36.6,
   44.2,
   51.8,
   59.4,
   67,
   74.6,
   82.2,
   89.8,
   97.4,
   105,
   112.6,
   120.2,
   127.8,
   135.4,
   143,
   150.6,
   158.2,
   165.8,
   173.4,
   181,
   188.6,
   196.2};
   Double_t _fy3018[25] = {
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
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _felx3018[25] = {
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8};
   Double_t _fely3018[25] = {
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
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fehx3018[25] = {
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8};
   Double_t _fehy3018[25] = {
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
   1.147908,
   1.147908,
   1.147908,
   1.147908,
   1.147908,
   1.147908,
   1.147908};
   grae = new TGraphAsymmErrors(25,_fx3018,_fy3018,_felx3018,_fehx3018,_fely3018,_fehy3018);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(1);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3018 = new TH1F("Graph_Graph3018","",100,0,219);
   Graph_Graph3018->SetMinimum(0);
   Graph_Graph3018->SetMaximum(1.262698);
   Graph_Graph3018->SetDirectory(0);
   Graph_Graph3018->SetStats(0);
   Graph_Graph3018->SetLineStyle(0);
   Graph_Graph3018->SetMarkerStyle(20);
   Graph_Graph3018->GetXaxis()->SetLabelFont(42);
   Graph_Graph3018->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3018->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3018->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3018->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3018->GetXaxis()->SetTitleFont(42);
   Graph_Graph3018->GetYaxis()->SetLabelFont(42);
   Graph_Graph3018->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3018->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3018->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3018->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3018->GetYaxis()->SetTitleFont(42);
   Graph_Graph3018->GetZaxis()->SetLabelFont(42);
   Graph_Graph3018->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3018->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3018->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3018->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3018);
   
   grae->Draw("p0");
   
   TLegend *leg = new TLegend(0.2,0.7,0.8,0.9,NULL,"brNDC");
   leg->SetTextFont(62);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("new_histo_group_Fake_wh3l_fakes_13TeV_pt1","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_fakes_13TeV_pt1","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_fakes_13TeV_pt1","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_fakes_13TeV_pt1","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_fakes_13TeV_pt1","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_fakes_13TeV_pt1","WZ","F");

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
   entry=leg->AddEntry("new_histo_DATA_wh3l_fakes_13TeV_pt1","Data","EPL");
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
   entry=leg->AddEntry("new_histo_group_Fake_wh3l_fakes_13TeV_pt1","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_fakes_13TeV_pt1","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_fakes_13TeV_pt1","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_fakes_13TeV_pt1","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_fakes_13TeV_pt1","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_fakes_13TeV_pt1","WZ","F");

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
   entry=leg->AddEntry("new_histo_DATA_wh3l_fakes_13TeV_pt1","Data","EPL");
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
   
   TH1F *hframe_copy72 = new TH1F("hframe_copy72","",1000,10,200);
   hframe_copy72->SetMinimum(0);
   hframe_copy72->SetMaximum(0);
   hframe_copy72->SetDirectory(0);
   hframe_copy72->SetStats(0);
   hframe_copy72->SetLineStyle(0);
   hframe_copy72->SetMarkerStyle(20);
   hframe_copy72->GetXaxis()->SetTitle("lept1_p_{T} [GeV]");
   hframe_copy72->GetXaxis()->SetNdivisions(506);
   hframe_copy72->GetXaxis()->SetLabelFont(42);
   hframe_copy72->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy72->GetXaxis()->SetLabelSize(0.05);
   hframe_copy72->GetXaxis()->SetTitleSize(0.06);
   hframe_copy72->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy72->GetXaxis()->SetTitleFont(42);
   hframe_copy72->GetYaxis()->SetTitle("Events");
   hframe_copy72->GetYaxis()->SetLabelFont(42);
   hframe_copy72->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy72->GetYaxis()->SetLabelSize(0.05);
   hframe_copy72->GetYaxis()->SetTitleSize(0.06);
   hframe_copy72->GetYaxis()->SetTitleOffset(1.25);
   hframe_copy72->GetYaxis()->SetTitleFont(42);
   hframe_copy72->GetZaxis()->SetLabelFont(42);
   hframe_copy72->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy72->GetZaxis()->SetLabelSize(0.05);
   hframe_copy72->GetZaxis()->SetTitleSize(0.06);
   hframe_copy72->GetZaxis()->SetTitleFont(42);
   hframe_copy72->Draw("sameaxis");
   ccwh3l_fakes_13TeV_pt1->Modified();
   ccwh3l_fakes_13TeV_pt1->cd();
   ccwh3l_fakes_13TeV_pt1->SetSelected(ccwh3l_fakes_13TeV_pt1);
}
