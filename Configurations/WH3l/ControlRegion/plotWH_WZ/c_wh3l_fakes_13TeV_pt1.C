void c_wh3l_fakes_13TeV_pt1()
{
//=========Macro generated from canvas: ccwh3l_fakes_13TeV_pt1/cc
//=========  (Sat Jul  2 19:44:34 2016) by ROOT version6.02/13
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
   
   TH1F *hframe73 = new TH1F("hframe73","",1000,10,200);
   hframe73->SetMinimum(0);
   hframe73->SetMaximum(0);
   hframe73->SetDirectory(0);
   hframe73->SetStats(0);
   hframe73->SetLineStyle(0);
   hframe73->SetMarkerStyle(20);
   hframe73->GetXaxis()->SetTitle("lept1_p_{T} [GeV]");
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
   
   THStack *thsBackground_grouped_wh3l_fakes_13TeV_pt1 = new THStack();
   thsBackground_grouped_wh3l_fakes_13TeV_pt1->SetName("thsBackground_grouped_wh3l_fakes_13TeV_pt1");
   thsBackground_grouped_wh3l_fakes_13TeV_pt1->SetTitle("thsBackground_grouped_wh3l_fakes_13TeV_pt1");
   
   TH1F *thsBackground_grouped_wh3l_fakes_13TeV_pt1_stack_17 = new TH1F("thsBackground_grouped_wh3l_fakes_13TeV_pt1_stack_17","thsBackground_grouped_wh3l_fakes_13TeV_pt1",25,10,200);
   thsBackground_grouped_wh3l_fakes_13TeV_pt1_stack_17->SetMinimum(0);
   thsBackground_grouped_wh3l_fakes_13TeV_pt1_stack_17->SetMaximum(0);
   thsBackground_grouped_wh3l_fakes_13TeV_pt1_stack_17->SetDirectory(0);
   thsBackground_grouped_wh3l_fakes_13TeV_pt1_stack_17->SetStats(0);
   thsBackground_grouped_wh3l_fakes_13TeV_pt1_stack_17->SetLineStyle(0);
   thsBackground_grouped_wh3l_fakes_13TeV_pt1_stack_17->SetMarkerStyle(20);
   thsBackground_grouped_wh3l_fakes_13TeV_pt1_stack_17->GetXaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_fakes_13TeV_pt1_stack_17->GetXaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_fakes_13TeV_pt1_stack_17->GetXaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_fakes_13TeV_pt1_stack_17->GetXaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_fakes_13TeV_pt1_stack_17->GetXaxis()->SetTitleOffset(0.9);
   thsBackground_grouped_wh3l_fakes_13TeV_pt1_stack_17->GetXaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_fakes_13TeV_pt1_stack_17->GetYaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_fakes_13TeV_pt1_stack_17->GetYaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_fakes_13TeV_pt1_stack_17->GetYaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_fakes_13TeV_pt1_stack_17->GetYaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_fakes_13TeV_pt1_stack_17->GetYaxis()->SetTitleOffset(1.25);
   thsBackground_grouped_wh3l_fakes_13TeV_pt1_stack_17->GetYaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_fakes_13TeV_pt1_stack_17->GetZaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_fakes_13TeV_pt1_stack_17->GetZaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_fakes_13TeV_pt1_stack_17->GetZaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_fakes_13TeV_pt1_stack_17->GetZaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_fakes_13TeV_pt1_stack_17->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_fakes_13TeV_pt1->SetHistogram(thsBackground_grouped_wh3l_fakes_13TeV_pt1_stack_17);
   
   
   TH1D *new_histo_group_Fake_wh3l_fakes_13TeV_pt174 = new TH1D("new_histo_group_Fake_wh3l_fakes_13TeV_pt174","histo_Fake",25,10,200);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_fakes_13TeV_pt174->SetFillColor(ci);
   new_histo_group_Fake_wh3l_fakes_13TeV_pt174->SetFillStyle(3001);

   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_fakes_13TeV_pt174->SetLineColor(ci);
   new_histo_group_Fake_wh3l_fakes_13TeV_pt174->GetXaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_fakes_13TeV_pt174->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_fakes_13TeV_pt174->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_fakes_13TeV_pt174->GetXaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_fakes_13TeV_pt174->GetYaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_fakes_13TeV_pt174->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_fakes_13TeV_pt174->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_fakes_13TeV_pt174->GetYaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_fakes_13TeV_pt174->GetZaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_fakes_13TeV_pt174->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_fakes_13TeV_pt174->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_fakes_13TeV_pt174->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_fakes_13TeV_pt1->Add(new_histo_group_Fake_wh3l_fakes_13TeV_pt1,"");
   
   TH1D *new_histo_group_WW_wh3l_fakes_13TeV_pt175 = new TH1D("new_histo_group_WW_wh3l_fakes_13TeV_pt175","histo_WW",25,10,200);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_fakes_13TeV_pt175->SetFillColor(ci);
   new_histo_group_WW_wh3l_fakes_13TeV_pt175->SetFillStyle(3001);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_fakes_13TeV_pt175->SetLineColor(ci);
   new_histo_group_WW_wh3l_fakes_13TeV_pt175->GetXaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_fakes_13TeV_pt175->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_fakes_13TeV_pt175->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_fakes_13TeV_pt175->GetXaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_fakes_13TeV_pt175->GetYaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_fakes_13TeV_pt175->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_fakes_13TeV_pt175->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_fakes_13TeV_pt175->GetYaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_fakes_13TeV_pt175->GetZaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_fakes_13TeV_pt175->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_fakes_13TeV_pt175->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_fakes_13TeV_pt175->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_fakes_13TeV_pt1->Add(new_histo_group_WW_wh3l_fakes_13TeV_pt1,"");
   
   TH1D *new_histo_group_Vg_wh3l_fakes_13TeV_pt176 = new TH1D("new_histo_group_Vg_wh3l_fakes_13TeV_pt176","histo_Vg",25,10,200);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_fakes_13TeV_pt176->SetFillColor(ci);
   new_histo_group_Vg_wh3l_fakes_13TeV_pt176->SetFillStyle(3001);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_fakes_13TeV_pt176->SetLineColor(ci);
   new_histo_group_Vg_wh3l_fakes_13TeV_pt176->GetXaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_fakes_13TeV_pt176->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_fakes_13TeV_pt176->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_fakes_13TeV_pt176->GetXaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_fakes_13TeV_pt176->GetYaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_fakes_13TeV_pt176->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_fakes_13TeV_pt176->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_fakes_13TeV_pt176->GetYaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_fakes_13TeV_pt176->GetZaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_fakes_13TeV_pt176->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_fakes_13TeV_pt176->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_fakes_13TeV_pt176->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_fakes_13TeV_pt1->Add(new_histo_group_Vg_wh3l_fakes_13TeV_pt1,"");
   
   TH1D *new_histo_group_ZZ_wh3l_fakes_13TeV_pt177 = new TH1D("new_histo_group_ZZ_wh3l_fakes_13TeV_pt177","histo_ZZ",25,10,200);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_fakes_13TeV_pt177->SetFillColor(ci);
   new_histo_group_ZZ_wh3l_fakes_13TeV_pt177->SetFillStyle(3001);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_fakes_13TeV_pt177->SetLineColor(ci);
   new_histo_group_ZZ_wh3l_fakes_13TeV_pt177->GetXaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_fakes_13TeV_pt177->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_fakes_13TeV_pt177->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_fakes_13TeV_pt177->GetXaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_fakes_13TeV_pt177->GetYaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_fakes_13TeV_pt177->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_fakes_13TeV_pt177->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_fakes_13TeV_pt177->GetYaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_fakes_13TeV_pt177->GetZaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_fakes_13TeV_pt177->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_fakes_13TeV_pt177->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_fakes_13TeV_pt177->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_fakes_13TeV_pt1->Add(new_histo_group_ZZ_wh3l_fakes_13TeV_pt1,"");
   
   TH1D *new_histo_group_WZ_wh3l_fakes_13TeV_pt178 = new TH1D("new_histo_group_WZ_wh3l_fakes_13TeV_pt178","histo_WZ",25,10,200);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_fakes_13TeV_pt178->SetFillColor(ci);
   new_histo_group_WZ_wh3l_fakes_13TeV_pt178->SetFillStyle(3001);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_fakes_13TeV_pt178->SetLineColor(ci);
   new_histo_group_WZ_wh3l_fakes_13TeV_pt178->GetXaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_fakes_13TeV_pt178->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_fakes_13TeV_pt178->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_fakes_13TeV_pt178->GetXaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_fakes_13TeV_pt178->GetYaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_fakes_13TeV_pt178->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_fakes_13TeV_pt178->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_fakes_13TeV_pt178->GetYaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_fakes_13TeV_pt178->GetZaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_fakes_13TeV_pt178->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_fakes_13TeV_pt178->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_fakes_13TeV_pt178->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_fakes_13TeV_pt1->Add(new_histo_group_WZ_wh3l_fakes_13TeV_pt1,"");
   
   TH1D *new_histo_group_Higgs_wh3l_fakes_13TeV_pt179 = new TH1D("new_histo_group_Higgs_wh3l_fakes_13TeV_pt179","histo_H_htt",25,10,200);
   new_histo_group_Higgs_wh3l_fakes_13TeV_pt179->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_fakes_13TeV_pt179->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_fakes_13TeV_pt179->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_fakes_13TeV_pt179->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_fakes_13TeV_pt179->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_fakes_13TeV_pt179->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_fakes_13TeV_pt179->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_fakes_13TeV_pt179->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_fakes_13TeV_pt179->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_fakes_13TeV_pt179->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_fakes_13TeV_pt179->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_fakes_13TeV_pt179->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_fakes_13TeV_pt179->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_fakes_13TeV_pt179->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_fakes_13TeV_pt179->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_fakes_13TeV_pt1->Add(new_histo_group_Higgs_wh3l_fakes_13TeV_pt1,"");
   thsBackground_grouped_wh3l_fakes_13TeV_pt1->Draw("hist same");
   
   thsSignal_grouped_wh3l_fakes_13TeV_pt1 = new THStack();
   thsSignal_grouped_wh3l_fakes_13TeV_pt1->SetName("thsSignal_grouped_wh3l_fakes_13TeV_pt1");
   thsSignal_grouped_wh3l_fakes_13TeV_pt1->SetTitle("thsSignal_grouped_wh3l_fakes_13TeV_pt1");
   
   TH1F *thsSignal_grouped_wh3l_fakes_13TeV_pt1_stack_18 = new TH1F("thsSignal_grouped_wh3l_fakes_13TeV_pt1_stack_18","thsSignal_grouped_wh3l_fakes_13TeV_pt1",25,10,200);
   thsSignal_grouped_wh3l_fakes_13TeV_pt1_stack_18->SetMinimum(0);
   thsSignal_grouped_wh3l_fakes_13TeV_pt1_stack_18->SetMaximum(0);
   thsSignal_grouped_wh3l_fakes_13TeV_pt1_stack_18->SetDirectory(0);
   thsSignal_grouped_wh3l_fakes_13TeV_pt1_stack_18->SetStats(0);
   thsSignal_grouped_wh3l_fakes_13TeV_pt1_stack_18->SetLineStyle(0);
   thsSignal_grouped_wh3l_fakes_13TeV_pt1_stack_18->SetMarkerStyle(20);
   thsSignal_grouped_wh3l_fakes_13TeV_pt1_stack_18->GetXaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_fakes_13TeV_pt1_stack_18->GetXaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_fakes_13TeV_pt1_stack_18->GetXaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_fakes_13TeV_pt1_stack_18->GetXaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_fakes_13TeV_pt1_stack_18->GetXaxis()->SetTitleOffset(0.9);
   thsSignal_grouped_wh3l_fakes_13TeV_pt1_stack_18->GetXaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_fakes_13TeV_pt1_stack_18->GetYaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_fakes_13TeV_pt1_stack_18->GetYaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_fakes_13TeV_pt1_stack_18->GetYaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_fakes_13TeV_pt1_stack_18->GetYaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_fakes_13TeV_pt1_stack_18->GetYaxis()->SetTitleOffset(1.25);
   thsSignal_grouped_wh3l_fakes_13TeV_pt1_stack_18->GetYaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_fakes_13TeV_pt1_stack_18->GetZaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_fakes_13TeV_pt1_stack_18->GetZaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_fakes_13TeV_pt1_stack_18->GetZaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_fakes_13TeV_pt1_stack_18->GetZaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_fakes_13TeV_pt1_stack_18->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_fakes_13TeV_pt1->SetHistogram(thsSignal_grouped_wh3l_fakes_13TeV_pt1_stack_18);
   
   
   TH1D *new_histo_group_Higgs_wh3l_fakes_13TeV_pt180 = new TH1D("new_histo_group_Higgs_wh3l_fakes_13TeV_pt180","histo_H_htt",25,10,200);
   new_histo_group_Higgs_wh3l_fakes_13TeV_pt180->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_fakes_13TeV_pt180->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_fakes_13TeV_pt180->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_fakes_13TeV_pt180->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_fakes_13TeV_pt180->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_fakes_13TeV_pt180->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_fakes_13TeV_pt180->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_fakes_13TeV_pt180->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_fakes_13TeV_pt180->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_fakes_13TeV_pt180->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_fakes_13TeV_pt180->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_fakes_13TeV_pt180->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_fakes_13TeV_pt180->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_fakes_13TeV_pt180->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_fakes_13TeV_pt180->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_fakes_13TeV_pt1->Add(new_histo_group_Higgs_wh3l_fakes_13TeV_pt1,"");
   thsSignal_grouped_wh3l_fakes_13TeV_pt1->Draw("hist same noclear");
   
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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_fakes_13TeV_pt1","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_fakes_13TeV_pt1","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
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
   
   TH1F *hframe_copy81 = new TH1F("hframe_copy81","",1000,10,200);
   hframe_copy81->SetMinimum(0);
   hframe_copy81->SetMaximum(0);
   hframe_copy81->SetDirectory(0);
   hframe_copy81->SetStats(0);
   hframe_copy81->SetLineStyle(0);
   hframe_copy81->SetMarkerStyle(20);
   hframe_copy81->GetXaxis()->SetTitle("lept1_p_{T} [GeV]");
   hframe_copy81->GetXaxis()->SetNdivisions(506);
   hframe_copy81->GetXaxis()->SetLabelFont(42);
   hframe_copy81->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy81->GetXaxis()->SetLabelSize(0.05);
   hframe_copy81->GetXaxis()->SetTitleSize(0.06);
   hframe_copy81->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy81->GetXaxis()->SetTitleFont(42);
   hframe_copy81->GetYaxis()->SetTitle("Events");
   hframe_copy81->GetYaxis()->SetLabelFont(42);
   hframe_copy81->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy81->GetYaxis()->SetLabelSize(0.05);
   hframe_copy81->GetYaxis()->SetTitleSize(0.06);
   hframe_copy81->GetYaxis()->SetTitleOffset(1.25);
   hframe_copy81->GetYaxis()->SetTitleFont(42);
   hframe_copy81->GetZaxis()->SetLabelFont(42);
   hframe_copy81->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy81->GetZaxis()->SetLabelSize(0.05);
   hframe_copy81->GetZaxis()->SetTitleSize(0.06);
   hframe_copy81->GetZaxis()->SetTitleFont(42);
   hframe_copy81->Draw("sameaxis");
   ccwh3l_fakes_13TeV_pt1->Modified();
   ccwh3l_fakes_13TeV_pt1->cd();
   ccwh3l_fakes_13TeV_pt1->SetSelected(ccwh3l_fakes_13TeV_pt1);
}
