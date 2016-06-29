void c_wh3l_fakes_13TeV_pt3()
{
//=========Macro generated from canvas: ccwh3l_fakes_13TeV_pt3/cc
//=========  (Tue Jun 28 16:48:55 2016) by ROOT version6.02/13
   TCanvas *ccwh3l_fakes_13TeV_pt3 = new TCanvas("ccwh3l_fakes_13TeV_pt3", "cc",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   ccwh3l_fakes_13TeV_pt3->SetHighLightColor(2);
   ccwh3l_fakes_13TeV_pt3->Range(-28,-0.1585366,209.5,1.060976);
   ccwh3l_fakes_13TeV_pt3->SetFillColor(0);
   ccwh3l_fakes_13TeV_pt3->SetBorderMode(0);
   ccwh3l_fakes_13TeV_pt3->SetBorderSize(2);
   ccwh3l_fakes_13TeV_pt3->SetTickx(1);
   ccwh3l_fakes_13TeV_pt3->SetTicky(1);
   ccwh3l_fakes_13TeV_pt3->SetLeftMargin(0.16);
   ccwh3l_fakes_13TeV_pt3->SetRightMargin(0.04);
   ccwh3l_fakes_13TeV_pt3->SetTopMargin(0.05);
   ccwh3l_fakes_13TeV_pt3->SetBottomMargin(0.13);
   ccwh3l_fakes_13TeV_pt3->SetFrameFillStyle(0);
   ccwh3l_fakes_13TeV_pt3->SetFrameBorderMode(0);
   ccwh3l_fakes_13TeV_pt3->SetFrameFillStyle(0);
   ccwh3l_fakes_13TeV_pt3->SetFrameBorderMode(0);
   
   TH1F *hframe49 = new TH1F("hframe49","",1000,10,200);
   hframe49->SetMinimum(0);
   hframe49->SetMaximum(0);
   hframe49->SetDirectory(0);
   hframe49->SetStats(0);
   hframe49->SetLineStyle(0);
   hframe49->SetMarkerStyle(20);
   hframe49->GetXaxis()->SetTitle("lept3_p_{T} [GeV]");
   hframe49->GetXaxis()->SetNdivisions(506);
   hframe49->GetXaxis()->SetLabelFont(42);
   hframe49->GetXaxis()->SetLabelOffset(0.007);
   hframe49->GetXaxis()->SetLabelSize(0.05);
   hframe49->GetXaxis()->SetTitleSize(0.06);
   hframe49->GetXaxis()->SetTitleOffset(0.9);
   hframe49->GetXaxis()->SetTitleFont(42);
   hframe49->GetYaxis()->SetTitle("Events");
   hframe49->GetYaxis()->SetLabelFont(42);
   hframe49->GetYaxis()->SetLabelOffset(0.007);
   hframe49->GetYaxis()->SetLabelSize(0.05);
   hframe49->GetYaxis()->SetTitleSize(0.06);
   hframe49->GetYaxis()->SetTitleOffset(1.25);
   hframe49->GetYaxis()->SetTitleFont(42);
   hframe49->GetZaxis()->SetLabelFont(42);
   hframe49->GetZaxis()->SetLabelOffset(0.007);
   hframe49->GetZaxis()->SetLabelSize(0.05);
   hframe49->GetZaxis()->SetTitleSize(0.06);
   hframe49->GetZaxis()->SetTitleFont(42);
   hframe49->Draw(" ");
   
   THStack *thsBackground_grouped_wh3l_fakes_13TeV_pt3 = new THStack();
   thsBackground_grouped_wh3l_fakes_13TeV_pt3->SetName("thsBackground_grouped_wh3l_fakes_13TeV_pt3");
   thsBackground_grouped_wh3l_fakes_13TeV_pt3->SetTitle("thsBackground_grouped_wh3l_fakes_13TeV_pt3");
   
   TH1F *thsBackground_grouped_wh3l_fakes_13TeV_pt3_stack_7 = new TH1F("thsBackground_grouped_wh3l_fakes_13TeV_pt3_stack_7","thsBackground_grouped_wh3l_fakes_13TeV_pt3",25,10,200);
   thsBackground_grouped_wh3l_fakes_13TeV_pt3_stack_7->SetMinimum(0);
   thsBackground_grouped_wh3l_fakes_13TeV_pt3_stack_7->SetMaximum(0);
   thsBackground_grouped_wh3l_fakes_13TeV_pt3_stack_7->SetDirectory(0);
   thsBackground_grouped_wh3l_fakes_13TeV_pt3_stack_7->SetStats(0);
   thsBackground_grouped_wh3l_fakes_13TeV_pt3_stack_7->SetLineStyle(0);
   thsBackground_grouped_wh3l_fakes_13TeV_pt3_stack_7->SetMarkerStyle(20);
   thsBackground_grouped_wh3l_fakes_13TeV_pt3_stack_7->GetXaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_fakes_13TeV_pt3_stack_7->GetXaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_fakes_13TeV_pt3_stack_7->GetXaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_fakes_13TeV_pt3_stack_7->GetXaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_fakes_13TeV_pt3_stack_7->GetXaxis()->SetTitleOffset(0.9);
   thsBackground_grouped_wh3l_fakes_13TeV_pt3_stack_7->GetXaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_fakes_13TeV_pt3_stack_7->GetYaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_fakes_13TeV_pt3_stack_7->GetYaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_fakes_13TeV_pt3_stack_7->GetYaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_fakes_13TeV_pt3_stack_7->GetYaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_fakes_13TeV_pt3_stack_7->GetYaxis()->SetTitleOffset(1.25);
   thsBackground_grouped_wh3l_fakes_13TeV_pt3_stack_7->GetYaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_fakes_13TeV_pt3_stack_7->GetZaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_fakes_13TeV_pt3_stack_7->GetZaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_fakes_13TeV_pt3_stack_7->GetZaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_fakes_13TeV_pt3_stack_7->GetZaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_fakes_13TeV_pt3_stack_7->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_fakes_13TeV_pt3->SetHistogram(thsBackground_grouped_wh3l_fakes_13TeV_pt3_stack_7);
   
   
   TH1D *new_histo_group_Fake_wh3l_fakes_13TeV_pt350 = new TH1D("new_histo_group_Fake_wh3l_fakes_13TeV_pt350","histo_Fake",25,10,200);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_fakes_13TeV_pt350->SetFillColor(ci);
   new_histo_group_Fake_wh3l_fakes_13TeV_pt350->SetFillStyle(3001);

   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_fakes_13TeV_pt350->SetLineColor(ci);
   new_histo_group_Fake_wh3l_fakes_13TeV_pt350->GetXaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_fakes_13TeV_pt350->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_fakes_13TeV_pt350->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_fakes_13TeV_pt350->GetXaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_fakes_13TeV_pt350->GetYaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_fakes_13TeV_pt350->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_fakes_13TeV_pt350->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_fakes_13TeV_pt350->GetYaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_fakes_13TeV_pt350->GetZaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_fakes_13TeV_pt350->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_fakes_13TeV_pt350->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_fakes_13TeV_pt350->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_fakes_13TeV_pt3->Add(new_histo_group_Fake_wh3l_fakes_13TeV_pt3,"");
   
   TH1D *new_histo_group_WW_wh3l_fakes_13TeV_pt351 = new TH1D("new_histo_group_WW_wh3l_fakes_13TeV_pt351","histo_WW",25,10,200);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_fakes_13TeV_pt351->SetFillColor(ci);
   new_histo_group_WW_wh3l_fakes_13TeV_pt351->SetFillStyle(3001);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_fakes_13TeV_pt351->SetLineColor(ci);
   new_histo_group_WW_wh3l_fakes_13TeV_pt351->GetXaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_fakes_13TeV_pt351->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_fakes_13TeV_pt351->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_fakes_13TeV_pt351->GetXaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_fakes_13TeV_pt351->GetYaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_fakes_13TeV_pt351->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_fakes_13TeV_pt351->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_fakes_13TeV_pt351->GetYaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_fakes_13TeV_pt351->GetZaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_fakes_13TeV_pt351->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_fakes_13TeV_pt351->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_fakes_13TeV_pt351->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_fakes_13TeV_pt3->Add(new_histo_group_WW_wh3l_fakes_13TeV_pt3,"");
   
   TH1D *new_histo_group_VVV_wh3l_fakes_13TeV_pt352 = new TH1D("new_histo_group_VVV_wh3l_fakes_13TeV_pt352","histo_VVV",25,10,200);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_fakes_13TeV_pt352->SetFillColor(ci);
   new_histo_group_VVV_wh3l_fakes_13TeV_pt352->SetFillStyle(3001);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_fakes_13TeV_pt352->SetLineColor(ci);
   new_histo_group_VVV_wh3l_fakes_13TeV_pt352->GetXaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_fakes_13TeV_pt352->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_fakes_13TeV_pt352->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_fakes_13TeV_pt352->GetXaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_fakes_13TeV_pt352->GetYaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_fakes_13TeV_pt352->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_fakes_13TeV_pt352->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_fakes_13TeV_pt352->GetYaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_fakes_13TeV_pt352->GetZaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_fakes_13TeV_pt352->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_fakes_13TeV_pt352->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_fakes_13TeV_pt352->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_fakes_13TeV_pt3->Add(new_histo_group_VVV_wh3l_fakes_13TeV_pt3,"");
   
   TH1D *new_histo_group_Vg_wh3l_fakes_13TeV_pt353 = new TH1D("new_histo_group_Vg_wh3l_fakes_13TeV_pt353","histo_Vg",25,10,200);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_fakes_13TeV_pt353->SetFillColor(ci);
   new_histo_group_Vg_wh3l_fakes_13TeV_pt353->SetFillStyle(3001);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_fakes_13TeV_pt353->SetLineColor(ci);
   new_histo_group_Vg_wh3l_fakes_13TeV_pt353->GetXaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_fakes_13TeV_pt353->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_fakes_13TeV_pt353->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_fakes_13TeV_pt353->GetXaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_fakes_13TeV_pt353->GetYaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_fakes_13TeV_pt353->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_fakes_13TeV_pt353->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_fakes_13TeV_pt353->GetYaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_fakes_13TeV_pt353->GetZaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_fakes_13TeV_pt353->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_fakes_13TeV_pt353->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_fakes_13TeV_pt353->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_fakes_13TeV_pt3->Add(new_histo_group_Vg_wh3l_fakes_13TeV_pt3,"");
   
   TH1D *new_histo_group_ZZ_wh3l_fakes_13TeV_pt354 = new TH1D("new_histo_group_ZZ_wh3l_fakes_13TeV_pt354","histo_ZZ",25,10,200);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_fakes_13TeV_pt354->SetFillColor(ci);
   new_histo_group_ZZ_wh3l_fakes_13TeV_pt354->SetFillStyle(3001);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_fakes_13TeV_pt354->SetLineColor(ci);
   new_histo_group_ZZ_wh3l_fakes_13TeV_pt354->GetXaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_fakes_13TeV_pt354->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_fakes_13TeV_pt354->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_fakes_13TeV_pt354->GetXaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_fakes_13TeV_pt354->GetYaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_fakes_13TeV_pt354->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_fakes_13TeV_pt354->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_fakes_13TeV_pt354->GetYaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_fakes_13TeV_pt354->GetZaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_fakes_13TeV_pt354->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_fakes_13TeV_pt354->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_fakes_13TeV_pt354->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_fakes_13TeV_pt3->Add(new_histo_group_ZZ_wh3l_fakes_13TeV_pt3,"");
   
   TH1D *new_histo_group_WZ_wh3l_fakes_13TeV_pt355 = new TH1D("new_histo_group_WZ_wh3l_fakes_13TeV_pt355","histo_WZ",25,10,200);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_fakes_13TeV_pt355->SetFillColor(ci);
   new_histo_group_WZ_wh3l_fakes_13TeV_pt355->SetFillStyle(3001);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_fakes_13TeV_pt355->SetLineColor(ci);
   new_histo_group_WZ_wh3l_fakes_13TeV_pt355->GetXaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_fakes_13TeV_pt355->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_fakes_13TeV_pt355->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_fakes_13TeV_pt355->GetXaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_fakes_13TeV_pt355->GetYaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_fakes_13TeV_pt355->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_fakes_13TeV_pt355->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_fakes_13TeV_pt355->GetYaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_fakes_13TeV_pt355->GetZaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_fakes_13TeV_pt355->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_fakes_13TeV_pt355->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_fakes_13TeV_pt355->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_fakes_13TeV_pt3->Add(new_histo_group_WZ_wh3l_fakes_13TeV_pt3,"");
   thsBackground_grouped_wh3l_fakes_13TeV_pt3->Draw("hist same");
   
   Double_t _fx3013[25] = {
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
   Double_t _fy3013[25] = {
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
   Double_t _felx3013[25] = {
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
   Double_t _fely3013[25] = {
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
   Double_t _fehx3013[25] = {
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
   Double_t _fehy3013[25] = {
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
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(25,_fx3013,_fy3013,_felx3013,_fehx3013,_fely3013,_fehy3013);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(12);
   grae->SetFillStyle(3004);
   grae->SetLineColor(12);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3013 = new TH1F("Graph_Graph3013","",100,0,219);
   Graph_Graph3013->SetMinimum(0);
   Graph_Graph3013->SetMaximum(1.1);
   Graph_Graph3013->SetDirectory(0);
   Graph_Graph3013->SetStats(0);
   Graph_Graph3013->SetLineStyle(0);
   Graph_Graph3013->SetMarkerStyle(20);
   Graph_Graph3013->GetXaxis()->SetLabelFont(42);
   Graph_Graph3013->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3013->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3013->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3013->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3013->GetXaxis()->SetTitleFont(42);
   Graph_Graph3013->GetYaxis()->SetLabelFont(42);
   Graph_Graph3013->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3013->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3013->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3013->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3013->GetYaxis()->SetTitleFont(42);
   Graph_Graph3013->GetZaxis()->SetLabelFont(42);
   Graph_Graph3013->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3013->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3013->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3013->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3013);
   
   grae->Draw("2");
   
   Double_t _fx3014[25] = {
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
   Double_t _fy3014[25] = {
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
   Double_t _felx3014[25] = {
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
   Double_t _fely3014[25] = {
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
   Double_t _fehx3014[25] = {
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
   Double_t _fehy3014[25] = {
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
   grae = new TGraphAsymmErrors(25,_fx3014,_fy3014,_felx3014,_fehx3014,_fely3014,_fehy3014);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(1);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3014 = new TH1F("Graph_Graph3014","",100,0,219);
   Graph_Graph3014->SetMinimum(0);
   Graph_Graph3014->SetMaximum(1.262698);
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
   TLegendEntry *entry=leg->AddEntry("new_histo_group_Fake_wh3l_fakes_13TeV_pt3","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_fakes_13TeV_pt3","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_fakes_13TeV_pt3","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_fakes_13TeV_pt3","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_fakes_13TeV_pt3","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_fakes_13TeV_pt3","WZ","F");

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
   entry=leg->AddEntry("new_histo_DATA_wh3l_fakes_13TeV_pt3","Data","EPL");
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
   entry=leg->AddEntry("new_histo_group_Fake_wh3l_fakes_13TeV_pt3","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_fakes_13TeV_pt3","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_fakes_13TeV_pt3","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_fakes_13TeV_pt3","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_fakes_13TeV_pt3","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_fakes_13TeV_pt3","WZ","F");

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
   entry=leg->AddEntry("new_histo_DATA_wh3l_fakes_13TeV_pt3","Data","EPL");
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
   
   TH1F *hframe_copy56 = new TH1F("hframe_copy56","",1000,10,200);
   hframe_copy56->SetMinimum(0);
   hframe_copy56->SetMaximum(0);
   hframe_copy56->SetDirectory(0);
   hframe_copy56->SetStats(0);
   hframe_copy56->SetLineStyle(0);
   hframe_copy56->SetMarkerStyle(20);
   hframe_copy56->GetXaxis()->SetTitle("lept3_p_{T} [GeV]");
   hframe_copy56->GetXaxis()->SetNdivisions(506);
   hframe_copy56->GetXaxis()->SetLabelFont(42);
   hframe_copy56->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy56->GetXaxis()->SetLabelSize(0.05);
   hframe_copy56->GetXaxis()->SetTitleSize(0.06);
   hframe_copy56->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy56->GetXaxis()->SetTitleFont(42);
   hframe_copy56->GetYaxis()->SetTitle("Events");
   hframe_copy56->GetYaxis()->SetLabelFont(42);
   hframe_copy56->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy56->GetYaxis()->SetLabelSize(0.05);
   hframe_copy56->GetYaxis()->SetTitleSize(0.06);
   hframe_copy56->GetYaxis()->SetTitleOffset(1.25);
   hframe_copy56->GetYaxis()->SetTitleFont(42);
   hframe_copy56->GetZaxis()->SetLabelFont(42);
   hframe_copy56->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy56->GetZaxis()->SetLabelSize(0.05);
   hframe_copy56->GetZaxis()->SetTitleSize(0.06);
   hframe_copy56->GetZaxis()->SetTitleFont(42);
   hframe_copy56->Draw("sameaxis");
   ccwh3l_fakes_13TeV_pt3->Modified();
   ccwh3l_fakes_13TeV_pt3->cd();
   ccwh3l_fakes_13TeV_pt3->SetSelected(ccwh3l_fakes_13TeV_pt3);
}
