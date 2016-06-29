void c_wh3l_fakes_13TeV_drllmin3l()
{
//=========Macro generated from canvas: ccwh3l_fakes_13TeV_drllmin3l/cc
//=========  (Tue Jun 28 16:48:54 2016) by ROOT version6.02/13
   TCanvas *ccwh3l_fakes_13TeV_drllmin3l = new TCanvas("ccwh3l_fakes_13TeV_drllmin3l", "cc",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   ccwh3l_fakes_13TeV_drllmin3l->SetHighLightColor(2);
   ccwh3l_fakes_13TeV_drllmin3l->Range(-1.2,-0.1585366,6.3,1.060976);
   ccwh3l_fakes_13TeV_drllmin3l->SetFillColor(0);
   ccwh3l_fakes_13TeV_drllmin3l->SetBorderMode(0);
   ccwh3l_fakes_13TeV_drllmin3l->SetBorderSize(2);
   ccwh3l_fakes_13TeV_drllmin3l->SetTickx(1);
   ccwh3l_fakes_13TeV_drllmin3l->SetTicky(1);
   ccwh3l_fakes_13TeV_drllmin3l->SetLeftMargin(0.16);
   ccwh3l_fakes_13TeV_drllmin3l->SetRightMargin(0.04);
   ccwh3l_fakes_13TeV_drllmin3l->SetTopMargin(0.05);
   ccwh3l_fakes_13TeV_drllmin3l->SetBottomMargin(0.13);
   ccwh3l_fakes_13TeV_drllmin3l->SetFrameFillStyle(0);
   ccwh3l_fakes_13TeV_drllmin3l->SetFrameBorderMode(0);
   ccwh3l_fakes_13TeV_drllmin3l->SetFrameFillStyle(0);
   ccwh3l_fakes_13TeV_drllmin3l->SetFrameBorderMode(0);
   
   TH1F *hframe41 = new TH1F("hframe41","",1000,0,6);
   hframe41->SetMinimum(0);
   hframe41->SetMaximum(0);
   hframe41->SetDirectory(0);
   hframe41->SetStats(0);
   hframe41->SetLineStyle(0);
   hframe41->SetMarkerStyle(20);
   hframe41->GetXaxis()->SetTitle("min #Delta Rm_{ll} [GeV]");
   hframe41->GetXaxis()->SetNdivisions(506);
   hframe41->GetXaxis()->SetLabelFont(42);
   hframe41->GetXaxis()->SetLabelOffset(0.007);
   hframe41->GetXaxis()->SetLabelSize(0.05);
   hframe41->GetXaxis()->SetTitleSize(0.06);
   hframe41->GetXaxis()->SetTitleOffset(0.9);
   hframe41->GetXaxis()->SetTitleFont(42);
   hframe41->GetYaxis()->SetTitle("Events");
   hframe41->GetYaxis()->SetLabelFont(42);
   hframe41->GetYaxis()->SetLabelOffset(0.007);
   hframe41->GetYaxis()->SetLabelSize(0.05);
   hframe41->GetYaxis()->SetTitleSize(0.06);
   hframe41->GetYaxis()->SetTitleOffset(1.25);
   hframe41->GetYaxis()->SetTitleFont(42);
   hframe41->GetZaxis()->SetLabelFont(42);
   hframe41->GetZaxis()->SetLabelOffset(0.007);
   hframe41->GetZaxis()->SetLabelSize(0.05);
   hframe41->GetZaxis()->SetTitleSize(0.06);
   hframe41->GetZaxis()->SetTitleFont(42);
   hframe41->Draw(" ");
   
   THStack *thsBackground_grouped_wh3l_fakes_13TeV_drllmin3l = new THStack();
   thsBackground_grouped_wh3l_fakes_13TeV_drllmin3l->SetName("thsBackground_grouped_wh3l_fakes_13TeV_drllmin3l");
   thsBackground_grouped_wh3l_fakes_13TeV_drllmin3l->SetTitle("thsBackground_grouped_wh3l_fakes_13TeV_drllmin3l");
   
   TH1F *thsBackground_grouped_wh3l_fakes_13TeV_drllmin3l_stack_6 = new TH1F("thsBackground_grouped_wh3l_fakes_13TeV_drllmin3l_stack_6","thsBackground_grouped_wh3l_fakes_13TeV_drllmin3l",5,0,6);
   thsBackground_grouped_wh3l_fakes_13TeV_drllmin3l_stack_6->SetMinimum(0);
   thsBackground_grouped_wh3l_fakes_13TeV_drllmin3l_stack_6->SetMaximum(0);
   thsBackground_grouped_wh3l_fakes_13TeV_drllmin3l_stack_6->SetDirectory(0);
   thsBackground_grouped_wh3l_fakes_13TeV_drllmin3l_stack_6->SetStats(0);
   thsBackground_grouped_wh3l_fakes_13TeV_drllmin3l_stack_6->SetLineStyle(0);
   thsBackground_grouped_wh3l_fakes_13TeV_drllmin3l_stack_6->SetMarkerStyle(20);
   thsBackground_grouped_wh3l_fakes_13TeV_drllmin3l_stack_6->GetXaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_fakes_13TeV_drllmin3l_stack_6->GetXaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_fakes_13TeV_drllmin3l_stack_6->GetXaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_fakes_13TeV_drllmin3l_stack_6->GetXaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_fakes_13TeV_drllmin3l_stack_6->GetXaxis()->SetTitleOffset(0.9);
   thsBackground_grouped_wh3l_fakes_13TeV_drllmin3l_stack_6->GetXaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_fakes_13TeV_drllmin3l_stack_6->GetYaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_fakes_13TeV_drllmin3l_stack_6->GetYaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_fakes_13TeV_drllmin3l_stack_6->GetYaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_fakes_13TeV_drllmin3l_stack_6->GetYaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_fakes_13TeV_drllmin3l_stack_6->GetYaxis()->SetTitleOffset(1.25);
   thsBackground_grouped_wh3l_fakes_13TeV_drllmin3l_stack_6->GetYaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_fakes_13TeV_drllmin3l_stack_6->GetZaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_fakes_13TeV_drllmin3l_stack_6->GetZaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_fakes_13TeV_drllmin3l_stack_6->GetZaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_fakes_13TeV_drllmin3l_stack_6->GetZaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_fakes_13TeV_drllmin3l_stack_6->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_fakes_13TeV_drllmin3l->SetHistogram(thsBackground_grouped_wh3l_fakes_13TeV_drllmin3l_stack_6);
   
   
   TH1D *new_histo_group_Fake_wh3l_fakes_13TeV_drllmin3l42 = new TH1D("new_histo_group_Fake_wh3l_fakes_13TeV_drllmin3l42","histo_Fake",5,0,6);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_fakes_13TeV_drllmin3l42->SetFillColor(ci);
   new_histo_group_Fake_wh3l_fakes_13TeV_drllmin3l42->SetFillStyle(3001);

   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_fakes_13TeV_drllmin3l42->SetLineColor(ci);
   new_histo_group_Fake_wh3l_fakes_13TeV_drllmin3l42->GetXaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_fakes_13TeV_drllmin3l42->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_fakes_13TeV_drllmin3l42->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_fakes_13TeV_drllmin3l42->GetXaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_fakes_13TeV_drllmin3l42->GetYaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_fakes_13TeV_drllmin3l42->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_fakes_13TeV_drllmin3l42->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_fakes_13TeV_drllmin3l42->GetYaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_fakes_13TeV_drllmin3l42->GetZaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_fakes_13TeV_drllmin3l42->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_fakes_13TeV_drllmin3l42->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_fakes_13TeV_drllmin3l42->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_fakes_13TeV_drllmin3l->Add(new_histo_group_Fake_wh3l_fakes_13TeV_drllmin3l,"");
   
   TH1D *new_histo_group_WW_wh3l_fakes_13TeV_drllmin3l43 = new TH1D("new_histo_group_WW_wh3l_fakes_13TeV_drllmin3l43","histo_WW",5,0,6);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_fakes_13TeV_drllmin3l43->SetFillColor(ci);
   new_histo_group_WW_wh3l_fakes_13TeV_drllmin3l43->SetFillStyle(3001);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_fakes_13TeV_drllmin3l43->SetLineColor(ci);
   new_histo_group_WW_wh3l_fakes_13TeV_drllmin3l43->GetXaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_fakes_13TeV_drllmin3l43->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_fakes_13TeV_drllmin3l43->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_fakes_13TeV_drllmin3l43->GetXaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_fakes_13TeV_drllmin3l43->GetYaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_fakes_13TeV_drllmin3l43->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_fakes_13TeV_drllmin3l43->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_fakes_13TeV_drllmin3l43->GetYaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_fakes_13TeV_drllmin3l43->GetZaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_fakes_13TeV_drllmin3l43->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_fakes_13TeV_drllmin3l43->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_fakes_13TeV_drllmin3l43->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_fakes_13TeV_drllmin3l->Add(new_histo_group_WW_wh3l_fakes_13TeV_drllmin3l,"");
   
   TH1D *new_histo_group_VVV_wh3l_fakes_13TeV_drllmin3l44 = new TH1D("new_histo_group_VVV_wh3l_fakes_13TeV_drllmin3l44","histo_VVV",5,0,6);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_fakes_13TeV_drllmin3l44->SetFillColor(ci);
   new_histo_group_VVV_wh3l_fakes_13TeV_drllmin3l44->SetFillStyle(3001);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_fakes_13TeV_drllmin3l44->SetLineColor(ci);
   new_histo_group_VVV_wh3l_fakes_13TeV_drllmin3l44->GetXaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_fakes_13TeV_drllmin3l44->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_fakes_13TeV_drllmin3l44->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_fakes_13TeV_drllmin3l44->GetXaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_fakes_13TeV_drllmin3l44->GetYaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_fakes_13TeV_drllmin3l44->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_fakes_13TeV_drllmin3l44->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_fakes_13TeV_drllmin3l44->GetYaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_fakes_13TeV_drllmin3l44->GetZaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_fakes_13TeV_drllmin3l44->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_fakes_13TeV_drllmin3l44->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_fakes_13TeV_drllmin3l44->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_fakes_13TeV_drllmin3l->Add(new_histo_group_VVV_wh3l_fakes_13TeV_drllmin3l,"");
   
   TH1D *new_histo_group_Vg_wh3l_fakes_13TeV_drllmin3l45 = new TH1D("new_histo_group_Vg_wh3l_fakes_13TeV_drllmin3l45","histo_Vg",5,0,6);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_fakes_13TeV_drllmin3l45->SetFillColor(ci);
   new_histo_group_Vg_wh3l_fakes_13TeV_drllmin3l45->SetFillStyle(3001);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_fakes_13TeV_drllmin3l45->SetLineColor(ci);
   new_histo_group_Vg_wh3l_fakes_13TeV_drllmin3l45->GetXaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_fakes_13TeV_drllmin3l45->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_fakes_13TeV_drllmin3l45->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_fakes_13TeV_drllmin3l45->GetXaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_fakes_13TeV_drllmin3l45->GetYaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_fakes_13TeV_drllmin3l45->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_fakes_13TeV_drllmin3l45->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_fakes_13TeV_drllmin3l45->GetYaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_fakes_13TeV_drllmin3l45->GetZaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_fakes_13TeV_drllmin3l45->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_fakes_13TeV_drllmin3l45->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_fakes_13TeV_drllmin3l45->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_fakes_13TeV_drllmin3l->Add(new_histo_group_Vg_wh3l_fakes_13TeV_drllmin3l,"");
   
   TH1D *new_histo_group_ZZ_wh3l_fakes_13TeV_drllmin3l46 = new TH1D("new_histo_group_ZZ_wh3l_fakes_13TeV_drllmin3l46","histo_ZZ",5,0,6);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_fakes_13TeV_drllmin3l46->SetFillColor(ci);
   new_histo_group_ZZ_wh3l_fakes_13TeV_drllmin3l46->SetFillStyle(3001);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_fakes_13TeV_drllmin3l46->SetLineColor(ci);
   new_histo_group_ZZ_wh3l_fakes_13TeV_drllmin3l46->GetXaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_fakes_13TeV_drllmin3l46->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_fakes_13TeV_drllmin3l46->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_fakes_13TeV_drllmin3l46->GetXaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_fakes_13TeV_drllmin3l46->GetYaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_fakes_13TeV_drllmin3l46->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_fakes_13TeV_drllmin3l46->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_fakes_13TeV_drllmin3l46->GetYaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_fakes_13TeV_drllmin3l46->GetZaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_fakes_13TeV_drllmin3l46->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_fakes_13TeV_drllmin3l46->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_fakes_13TeV_drllmin3l46->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_fakes_13TeV_drllmin3l->Add(new_histo_group_ZZ_wh3l_fakes_13TeV_drllmin3l,"");
   
   TH1D *new_histo_group_WZ_wh3l_fakes_13TeV_drllmin3l47 = new TH1D("new_histo_group_WZ_wh3l_fakes_13TeV_drllmin3l47","histo_WZ",5,0,6);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_fakes_13TeV_drllmin3l47->SetFillColor(ci);
   new_histo_group_WZ_wh3l_fakes_13TeV_drllmin3l47->SetFillStyle(3001);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_fakes_13TeV_drllmin3l47->SetLineColor(ci);
   new_histo_group_WZ_wh3l_fakes_13TeV_drllmin3l47->GetXaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_fakes_13TeV_drllmin3l47->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_fakes_13TeV_drllmin3l47->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_fakes_13TeV_drllmin3l47->GetXaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_fakes_13TeV_drllmin3l47->GetYaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_fakes_13TeV_drllmin3l47->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_fakes_13TeV_drllmin3l47->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_fakes_13TeV_drllmin3l47->GetYaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_fakes_13TeV_drllmin3l47->GetZaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_fakes_13TeV_drllmin3l47->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_fakes_13TeV_drllmin3l47->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_fakes_13TeV_drllmin3l47->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_fakes_13TeV_drllmin3l->Add(new_histo_group_WZ_wh3l_fakes_13TeV_drllmin3l,"");
   thsBackground_grouped_wh3l_fakes_13TeV_drllmin3l->Draw("hist same");
   
   Double_t _fx3011[5] = {
   0.6,
   1.8,
   3,
   4.2,
   5.4};
   Double_t _fy3011[5] = {
   0,
   0,
   0,
   0,
   0};
   Double_t _felx3011[5] = {
   0.6,
   0.6,
   0.6,
   0.6,
   0.6};
   Double_t _fely3011[5] = {
   0,
   0,
   0,
   0,
   0};
   Double_t _fehx3011[5] = {
   0.6,
   0.6,
   0.6,
   0.6,
   0.6};
   Double_t _fehy3011[5] = {
   0,
   0,
   0,
   0,
   0};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(5,_fx3011,_fy3011,_felx3011,_fehx3011,_fely3011,_fehy3011);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(12);
   grae->SetFillStyle(3004);
   grae->SetLineColor(12);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3011 = new TH1F("Graph_Graph3011","",100,0,6.6);
   Graph_Graph3011->SetMinimum(0);
   Graph_Graph3011->SetMaximum(1.1);
   Graph_Graph3011->SetDirectory(0);
   Graph_Graph3011->SetStats(0);
   Graph_Graph3011->SetLineStyle(0);
   Graph_Graph3011->SetMarkerStyle(20);
   Graph_Graph3011->GetXaxis()->SetLabelFont(42);
   Graph_Graph3011->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3011->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3011->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3011->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3011->GetXaxis()->SetTitleFont(42);
   Graph_Graph3011->GetYaxis()->SetLabelFont(42);
   Graph_Graph3011->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3011->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3011->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3011->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3011->GetYaxis()->SetTitleFont(42);
   Graph_Graph3011->GetZaxis()->SetLabelFont(42);
   Graph_Graph3011->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3011->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3011->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3011->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3011);
   
   grae->Draw("2");
   
   Double_t _fx3012[5] = {
   0.6,
   1.8,
   3,
   4.2,
   5.4};
   Double_t _fy3012[5] = {
   0,
   0,
   0,
   0,
   0};
   Double_t _felx3012[5] = {
   0.6,
   0.6,
   0.6,
   0.6,
   0.6};
   Double_t _fely3012[5] = {
   0,
   0,
   0,
   0,
   0};
   Double_t _fehx3012[5] = {
   0.6,
   0.6,
   0.6,
   0.6,
   0.6};
   Double_t _fehy3012[5] = {
   1.147908,
   1.147908,
   1.147908,
   1.147908,
   1.147908};
   grae = new TGraphAsymmErrors(5,_fx3012,_fy3012,_felx3012,_fehx3012,_fely3012,_fehy3012);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(1);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3012 = new TH1F("Graph_Graph3012","",100,0,6.6);
   Graph_Graph3012->SetMinimum(0);
   Graph_Graph3012->SetMaximum(1.262698);
   Graph_Graph3012->SetDirectory(0);
   Graph_Graph3012->SetStats(0);
   Graph_Graph3012->SetLineStyle(0);
   Graph_Graph3012->SetMarkerStyle(20);
   Graph_Graph3012->GetXaxis()->SetLabelFont(42);
   Graph_Graph3012->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3012->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3012->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3012->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3012->GetXaxis()->SetTitleFont(42);
   Graph_Graph3012->GetYaxis()->SetLabelFont(42);
   Graph_Graph3012->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3012->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3012->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3012->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3012->GetYaxis()->SetTitleFont(42);
   Graph_Graph3012->GetZaxis()->SetLabelFont(42);
   Graph_Graph3012->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3012->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3012->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3012->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3012);
   
   grae->Draw("p0");
   
   TLegend *leg = new TLegend(0.2,0.7,0.8,0.9,NULL,"brNDC");
   leg->SetTextFont(62);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("new_histo_group_Fake_wh3l_fakes_13TeV_drllmin3l","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_fakes_13TeV_drllmin3l","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_fakes_13TeV_drllmin3l","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_fakes_13TeV_drllmin3l","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_fakes_13TeV_drllmin3l","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_fakes_13TeV_drllmin3l","WZ","F");

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
   entry=leg->AddEntry("new_histo_DATA_wh3l_fakes_13TeV_drllmin3l","Data","EPL");
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
   entry=leg->AddEntry("new_histo_group_Fake_wh3l_fakes_13TeV_drllmin3l","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_fakes_13TeV_drllmin3l","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_fakes_13TeV_drllmin3l","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_fakes_13TeV_drllmin3l","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_fakes_13TeV_drllmin3l","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_fakes_13TeV_drllmin3l","WZ","F");

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
   entry=leg->AddEntry("new_histo_DATA_wh3l_fakes_13TeV_drllmin3l","Data","EPL");
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
   
   TH1F *hframe_copy48 = new TH1F("hframe_copy48","",1000,0,6);
   hframe_copy48->SetMinimum(0);
   hframe_copy48->SetMaximum(0);
   hframe_copy48->SetDirectory(0);
   hframe_copy48->SetStats(0);
   hframe_copy48->SetLineStyle(0);
   hframe_copy48->SetMarkerStyle(20);
   hframe_copy48->GetXaxis()->SetTitle("min #Delta Rm_{ll} [GeV]");
   hframe_copy48->GetXaxis()->SetNdivisions(506);
   hframe_copy48->GetXaxis()->SetLabelFont(42);
   hframe_copy48->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy48->GetXaxis()->SetLabelSize(0.05);
   hframe_copy48->GetXaxis()->SetTitleSize(0.06);
   hframe_copy48->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy48->GetXaxis()->SetTitleFont(42);
   hframe_copy48->GetYaxis()->SetTitle("Events");
   hframe_copy48->GetYaxis()->SetLabelFont(42);
   hframe_copy48->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy48->GetYaxis()->SetLabelSize(0.05);
   hframe_copy48->GetYaxis()->SetTitleSize(0.06);
   hframe_copy48->GetYaxis()->SetTitleOffset(1.25);
   hframe_copy48->GetYaxis()->SetTitleFont(42);
   hframe_copy48->GetZaxis()->SetLabelFont(42);
   hframe_copy48->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy48->GetZaxis()->SetLabelSize(0.05);
   hframe_copy48->GetZaxis()->SetTitleSize(0.06);
   hframe_copy48->GetZaxis()->SetTitleFont(42);
   hframe_copy48->Draw("sameaxis");
   ccwh3l_fakes_13TeV_drllmin3l->Modified();
   ccwh3l_fakes_13TeV_drllmin3l->cd();
   ccwh3l_fakes_13TeV_drllmin3l->SetSelected(ccwh3l_fakes_13TeV_drllmin3l);
}
