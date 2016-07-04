void c_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1()
{
//=========Macro generated from canvas: ccwh3l_MET_JetV_ZVeto_mll_13TeV_pt1/cc
//=========  (Sun Jul  3 01:22:33 2016) by ROOT version6.02/13
   TCanvas *ccwh3l_MET_JetV_ZVeto_mll_13TeV_pt1 = new TCanvas("ccwh3l_MET_JetV_ZVeto_mll_13TeV_pt1", "cc",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   ccwh3l_MET_JetV_ZVeto_mll_13TeV_pt1->SetHighLightColor(2);
   ccwh3l_MET_JetV_ZVeto_mll_13TeV_pt1->Range(-28,-1.353194,209.5,9.055993);
   ccwh3l_MET_JetV_ZVeto_mll_13TeV_pt1->SetFillColor(0);
   ccwh3l_MET_JetV_ZVeto_mll_13TeV_pt1->SetBorderMode(0);
   ccwh3l_MET_JetV_ZVeto_mll_13TeV_pt1->SetBorderSize(2);
   ccwh3l_MET_JetV_ZVeto_mll_13TeV_pt1->SetTickx(1);
   ccwh3l_MET_JetV_ZVeto_mll_13TeV_pt1->SetTicky(1);
   ccwh3l_MET_JetV_ZVeto_mll_13TeV_pt1->SetLeftMargin(0.16);
   ccwh3l_MET_JetV_ZVeto_mll_13TeV_pt1->SetRightMargin(0.04);
   ccwh3l_MET_JetV_ZVeto_mll_13TeV_pt1->SetTopMargin(0.05);
   ccwh3l_MET_JetV_ZVeto_mll_13TeV_pt1->SetBottomMargin(0.13);
   ccwh3l_MET_JetV_ZVeto_mll_13TeV_pt1->SetFrameFillStyle(0);
   ccwh3l_MET_JetV_ZVeto_mll_13TeV_pt1->SetFrameBorderMode(0);
   ccwh3l_MET_JetV_ZVeto_mll_13TeV_pt1->SetFrameFillStyle(0);
   ccwh3l_MET_JetV_ZVeto_mll_13TeV_pt1->SetFrameBorderMode(0);
   
   TH1F *hframe641 = new TH1F("hframe641","",1000,10,200);
   hframe641->SetMinimum(0);
   hframe641->SetMaximum(8.535534);
   hframe641->SetDirectory(0);
   hframe641->SetStats(0);
   hframe641->SetLineStyle(0);
   hframe641->SetMarkerStyle(20);
   hframe641->GetXaxis()->SetTitle("lept1_p_{T} [GeV]");
   hframe641->GetXaxis()->SetNdivisions(506);
   hframe641->GetXaxis()->SetLabelFont(42);
   hframe641->GetXaxis()->SetLabelOffset(0.007);
   hframe641->GetXaxis()->SetLabelSize(0.05);
   hframe641->GetXaxis()->SetTitleSize(0.06);
   hframe641->GetXaxis()->SetTitleOffset(0.9);
   hframe641->GetXaxis()->SetTitleFont(42);
   hframe641->GetYaxis()->SetTitle("Events");
   hframe641->GetYaxis()->SetLabelFont(42);
   hframe641->GetYaxis()->SetLabelOffset(0.007);
   hframe641->GetYaxis()->SetLabelSize(0.05);
   hframe641->GetYaxis()->SetTitleSize(0.06);
   hframe641->GetYaxis()->SetTitleOffset(1.25);
   hframe641->GetYaxis()->SetTitleFont(42);
   hframe641->GetZaxis()->SetLabelFont(42);
   hframe641->GetZaxis()->SetLabelOffset(0.007);
   hframe641->GetZaxis()->SetLabelSize(0.05);
   hframe641->GetZaxis()->SetTitleSize(0.06);
   hframe641->GetZaxis()->SetTitleFont(42);
   hframe641->Draw(" ");
   
   THStack *thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1 = new THStack();
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1->SetName("thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1");
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1->SetTitle("thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1");
   
   TH1F *thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1_stack_129 = new TH1F("thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1_stack_129","thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1",25,10,200);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1_stack_129->SetMinimum(-0.510441);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1_stack_129->SetMaximum(2.107509);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1_stack_129->SetDirectory(0);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1_stack_129->SetStats(0);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1_stack_129->SetLineStyle(0);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1_stack_129->SetMarkerStyle(20);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1_stack_129->GetXaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1_stack_129->GetXaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1_stack_129->GetXaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1_stack_129->GetXaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1_stack_129->GetXaxis()->SetTitleOffset(0.9);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1_stack_129->GetXaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1_stack_129->GetYaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1_stack_129->GetYaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1_stack_129->GetYaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1_stack_129->GetYaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1_stack_129->GetYaxis()->SetTitleOffset(1.25);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1_stack_129->GetYaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1_stack_129->GetZaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1_stack_129->GetZaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1_stack_129->GetZaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1_stack_129->GetZaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1_stack_129->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1->SetHistogram(thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1_stack_129);
   
   
   TH1D *new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1642 = new TH1D("new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1642","histo_Fake",25,10,200);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1642->SetBinContent(2,-0.03820547);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1642->SetBinContent(3,0.0391984);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1642->SetBinContent(4,-0.2300273);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1642->SetBinContent(5,0.5562551);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1642->SetBinContent(6,0.2214166);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1642->SetBinContent(7,-0.008101332);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1642->SetBinContent(8,1.1263);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1642->SetBinContent(9,0.6436369);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1642->SetBinContent(10,0.4643462);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1642->SetBinContent(13,-0.006707157);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1642->SetBinContent(25,0.1345139);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1642->SetBinError(2,0.03820547);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1642->SetBinError(3,0.1428288);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1642->SetBinError(4,0.2804138);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1642->SetBinError(5,0.5340191);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1642->SetBinError(6,0.2798715);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1642->SetBinError(7,0.007561613);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1642->SetBinError(8,0.8808511);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1642->SetBinError(9,0.6434307);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1642->SetBinError(10,0.415269);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1642->SetBinError(13,0.006707157);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1642->SetBinError(25,0.1345139);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1642->SetEntries(33);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1642->SetFillColor(ci);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1642->SetFillStyle(3001);

   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1642->SetLineColor(ci);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1642->GetXaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1642->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1642->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1642->GetXaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1642->GetYaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1642->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1642->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1642->GetYaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1642->GetZaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1642->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1642->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1642->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1->Add(new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1,"");
   
   TH1D *new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1643 = new TH1D("new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1643","histo_WW",25,10,200);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1643->SetBinContent(3,0.0161241);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1643->SetBinContent(7,0.01039136);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1643->SetBinError(3,0.0161241);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1643->SetBinError(7,0.01039136);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1643->SetEntries(2);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1643->SetFillColor(ci);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1643->SetFillStyle(3001);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1643->SetLineColor(ci);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1643->GetXaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1643->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1643->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1643->GetXaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1643->GetYaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1643->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1643->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1643->GetYaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1643->GetZaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1643->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1643->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1643->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1->Add(new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1,"");
   
   TH1D *new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1644 = new TH1D("new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1644","histo_VVV",25,10,200);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1644->SetBinContent(3,0.001881728);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1644->SetBinContent(4,0.005173423);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1644->SetBinContent(5,0.01436276);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1644->SetBinContent(6,0.007666668);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1644->SetBinContent(7,0.004998919);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1644->SetBinContent(8,0.0116234);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1644->SetBinContent(9,0.01209215);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1644->SetBinContent(10,0.007872804);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1644->SetBinContent(11,0.005224356);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1644->SetBinContent(12,0.002854193);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1644->SetBinContent(13,0.01204823);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1644->SetBinContent(14,0.004794366);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1644->SetBinContent(15,0.0007784473);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1644->SetBinContent(16,0.002006893);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1644->SetBinContent(17,-0.0007976216);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1644->SetBinContent(18,0.00392448);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1644->SetBinContent(19,0.004291118);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1644->SetBinContent(24,0.001996808);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1644->SetBinError(3,0.001881728);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1644->SetBinError(4,0.003172557);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1644->SetBinError(5,0.00590591);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1644->SetBinError(6,0.003993735);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1644->SetBinError(7,0.006248636);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1644->SetBinError(8,0.005077918);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1644->SetBinError(9,0.004990734);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1644->SetBinError(10,0.00568271);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1644->SetBinError(11,0.003712062);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1644->SetBinError(12,0.002854193);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1644->SetBinError(13,0.005240678);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1644->SetBinError(14,0.003394398);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1644->SetBinError(15,0.0007784473);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1644->SetBinError(16,0.002006893);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1644->SetBinError(17,0.003493192);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1644->SetBinError(18,0.00295828);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1644->SetBinError(19,0.003134327);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1644->SetBinError(24,0.001996808);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1644->SetEntries(62);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1644->SetFillColor(ci);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1644->SetFillStyle(3001);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1644->SetLineColor(ci);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1644->GetXaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1644->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1644->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1644->GetXaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1644->GetYaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1644->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1644->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1644->GetYaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1644->GetZaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1644->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1644->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1644->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1->Add(new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1,"");
   
   TH1D *new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1645 = new TH1D("new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1645","histo_Vg",25,10,200);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1645->SetBinContent(6,0.0522728);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1645->SetBinError(6,0.0522728);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1645->SetEntries(1);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1645->SetFillColor(ci);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1645->SetFillStyle(3001);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1645->SetLineColor(ci);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1645->GetXaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1645->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1645->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1645->GetXaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1645->GetYaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1645->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1645->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1645->GetYaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1645->GetZaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1645->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1645->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1645->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1->Add(new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1,"");
   
   TH1D *new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1646 = new TH1D("new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1646","histo_ZZ",25,10,200);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1646->SetBinContent(7,0.0427135);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1646->SetBinContent(26,0.03513683);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1646->SetBinError(7,0.0427135);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1646->SetBinError(26,0.03513683);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1646->SetEntries(2);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1646->SetFillColor(ci);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1646->SetFillStyle(3001);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1646->SetLineColor(ci);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1646->GetXaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1646->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1646->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1646->GetXaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1646->GetYaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1646->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1646->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1646->GetYaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1646->GetZaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1646->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1646->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1646->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1->Add(new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1,"");
   
   TH1D *new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1647 = new TH1D("new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1647","histo_WZ",25,10,200);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1647->SetBinContent(2,0.01250105);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1647->SetBinContent(3,0.07038392);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1647->SetBinContent(4,0.0804238);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1647->SetBinContent(5,0.09261466);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1647->SetBinContent(6,0.1048172);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1647->SetBinContent(7,0.05421446);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1647->SetBinContent(8,0.04269779);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1647->SetBinContent(9,0.0393536);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1647->SetBinContent(10,0.01536861);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1647->SetBinContent(11,0.005487993);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1647->SetBinContent(12,0.02792931);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1647->SetBinContent(13,0.01691928);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1647->SetBinContent(15,0.01068012);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1647->SetBinContent(16,0.005956865);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1647->SetBinContent(17,0.002384166);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1647->SetBinContent(18,0.005629369);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1647->SetBinContent(19,0.006664773);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1647->SetBinContent(21,0.0121873);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1647->SetBinContent(22,0.005488627);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1647->SetBinContent(23,0.005246641);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1647->SetBinContent(26,0.005713332);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1647->SetBinError(2,0.00866789);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1647->SetBinError(3,0.01890205);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1647->SetBinError(4,0.02062158);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1647->SetBinError(5,0.02156458);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1647->SetBinError(6,0.02350696);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1647->SetBinError(7,0.01782308);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1647->SetBinError(8,0.01546249);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1647->SetBinError(9,0.01380998);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1647->SetBinError(10,0.008884622);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1647->SetBinError(11,0.005487993);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1647->SetBinError(12,0.0131814);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1647->SetBinError(13,0.01009139);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1647->SetBinError(15,0.006797004);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1647->SetBinError(16,0.005956865);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1647->SetBinError(17,0.002384166);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1647->SetBinError(18,0.005629369);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1647->SetBinError(19,0.006664773);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1647->SetBinError(21,0.00862591);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1647->SetBinError(22,0.005488627);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1647->SetBinError(23,0.005246641);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1647->SetBinError(26,0.005713332);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1647->SetEntries(128);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1647->SetFillColor(ci);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1647->SetFillStyle(3001);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1647->SetLineColor(ci);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1647->GetXaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1647->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1647->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1647->GetXaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1647->GetYaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1647->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1647->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1647->GetYaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1647->GetZaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1647->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1647->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1647->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1->Add(new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1,"");
   
   TH1D *new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1648 = new TH1D("new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1648","histo_H_htt",25,10,200);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1648->SetBinContent(2,0.001298338);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1648->SetBinContent(3,0.01399981);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1648->SetBinContent(4,0.02865634);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1648->SetBinContent(5,0.02707872);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1648->SetBinContent(6,0.03475917);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1648->SetBinContent(7,0.03831008);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1648->SetBinContent(8,0.02257349);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1648->SetBinContent(9,0.01605328);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1648->SetBinContent(10,0.01629793);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1648->SetBinContent(11,0.01767254);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1648->SetBinContent(12,0.006185602);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1648->SetBinContent(13,0.007938048);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1648->SetBinContent(14,0.01093931);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1648->SetBinContent(15,0.002724295);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1648->SetBinContent(16,0.005009022);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1648->SetBinContent(17,0.009527956);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1648->SetBinContent(18,0.007322075);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1648->SetBinContent(19,0.003580051);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1648->SetBinContent(20,0.003625271);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1648->SetBinContent(21,0.001578325);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1648->SetBinContent(22,0.0003849663);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1648->SetBinContent(23,0.0003709679);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1648->SetBinContent(25,0.003694924);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1648->SetBinContent(26,0.003971215);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1648->SetBinError(2,0.0005920712);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1648->SetBinError(3,0.003403003);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1648->SetBinError(4,0.005780734);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1648->SetBinError(5,0.004990186);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1648->SetBinError(6,0.00597943);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1648->SetBinError(7,0.006357172);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1648->SetBinError(8,0.005223023);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1648->SetBinError(9,0.004451189);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1648->SetBinError(10,0.005416063);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1648->SetBinError(11,0.00430465);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1648->SetBinError(12,0.002251114);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1648->SetBinError(13,0.003150416);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1648->SetBinError(14,0.003290005);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1648->SetBinError(15,0.001036991);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1648->SetBinError(16,0.002649234);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1648->SetBinError(17,0.003304202);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1648->SetBinError(18,0.003313939);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1648->SetBinError(19,0.001985782);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1648->SetBinError(20,0.001566432);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1648->SetBinError(21,0.001084103);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1648->SetBinError(22,0.0002738482);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1648->SetBinError(23,0.0003709679);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1648->SetBinError(25,0.001949716);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1648->SetBinError(26,0.001037617);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1648->SetEntries(512);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1648->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1648->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1648->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1648->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1648->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1648->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1648->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1648->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1648->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1648->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1648->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1648->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1648->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1648->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1648->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1->Add(new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1,"");
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1->Draw("hist same");
   
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1 = new THStack();
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1->SetName("thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1");
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1->SetTitle("thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1");
   
   TH1F *thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1_stack_130 = new TH1F("thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1_stack_130","thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1",25,10,200);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1_stack_130->SetMinimum(0);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1_stack_130->SetMaximum(0.04690061);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1_stack_130->SetDirectory(0);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1_stack_130->SetStats(0);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1_stack_130->SetLineStyle(0);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1_stack_130->SetMarkerStyle(20);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1_stack_130->GetXaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1_stack_130->GetXaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1_stack_130->GetXaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1_stack_130->GetXaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1_stack_130->GetXaxis()->SetTitleOffset(0.9);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1_stack_130->GetXaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1_stack_130->GetYaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1_stack_130->GetYaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1_stack_130->GetYaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1_stack_130->GetYaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1_stack_130->GetYaxis()->SetTitleOffset(1.25);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1_stack_130->GetYaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1_stack_130->GetZaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1_stack_130->GetZaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1_stack_130->GetZaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1_stack_130->GetZaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1_stack_130->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1->SetHistogram(thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1_stack_130);
   
   
   TH1D *new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1649 = new TH1D("new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1649","histo_H_htt",25,10,200);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1649->SetBinContent(2,0.001298338);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1649->SetBinContent(3,0.01399981);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1649->SetBinContent(4,0.02865634);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1649->SetBinContent(5,0.02707872);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1649->SetBinContent(6,0.03475917);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1649->SetBinContent(7,0.03831008);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1649->SetBinContent(8,0.02257349);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1649->SetBinContent(9,0.01605328);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1649->SetBinContent(10,0.01629793);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1649->SetBinContent(11,0.01767254);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1649->SetBinContent(12,0.006185602);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1649->SetBinContent(13,0.007938048);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1649->SetBinContent(14,0.01093931);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1649->SetBinContent(15,0.002724295);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1649->SetBinContent(16,0.005009022);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1649->SetBinContent(17,0.009527956);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1649->SetBinContent(18,0.007322075);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1649->SetBinContent(19,0.003580051);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1649->SetBinContent(20,0.003625271);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1649->SetBinContent(21,0.001578325);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1649->SetBinContent(22,0.0003849663);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1649->SetBinContent(23,0.0003709679);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1649->SetBinContent(25,0.003694924);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1649->SetBinContent(26,0.003971215);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1649->SetBinError(2,0.0005920712);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1649->SetBinError(3,0.003403003);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1649->SetBinError(4,0.005780734);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1649->SetBinError(5,0.004990186);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1649->SetBinError(6,0.00597943);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1649->SetBinError(7,0.006357172);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1649->SetBinError(8,0.005223023);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1649->SetBinError(9,0.004451189);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1649->SetBinError(10,0.005416063);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1649->SetBinError(11,0.00430465);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1649->SetBinError(12,0.002251114);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1649->SetBinError(13,0.003150416);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1649->SetBinError(14,0.003290005);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1649->SetBinError(15,0.001036991);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1649->SetBinError(16,0.002649234);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1649->SetBinError(17,0.003304202);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1649->SetBinError(18,0.003313939);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1649->SetBinError(19,0.001985782);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1649->SetBinError(20,0.001566432);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1649->SetBinError(21,0.001084103);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1649->SetBinError(22,0.0002738482);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1649->SetBinError(23,0.0003709679);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1649->SetBinError(25,0.001949716);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1649->SetBinError(26,0.001037617);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1649->SetEntries(512);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1649->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1649->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1649->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1649->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1649->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1649->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1649->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1649->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1649->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1649->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1649->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1649->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1649->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1649->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1649->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1->Add(new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1,"");
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1->Draw("hist same noclear");
   
   Double_t _fx3129[25] = {
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
   Double_t _fy3129[25] = {
   0,
   -0.02570442,
   0.1275882,
   -0.14443,
   0.6632326,
   0.3861733,
   0.1042169,
   1.180621,
   0.6950826,
   0.4875876,
   0.01071235,
   0.0307835,
   0.02226035,
   0.004794366,
   0.01145857,
   0.007963758,
   0.001586544,
   0.00955385,
   0.01095589,
   0,
   0.0121873,
   0.005488627,
   0.005246641,
   0.001996808,
   0.1345139};
   Double_t _felx3129[25] = {
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
   Double_t _fely3129[25] = {
   0,
   0.0487574,
   0.07754455,
   0.3147415,
   0.5944637,
   0.311168,
   0.08373573,
   0.9838914,
   0.6996046,
   0.4596027,
   0.01058367,
   0.01633397,
   0.02525267,
   0.005876916,
   0.007581308,
   0.008228252,
   0.005936017,
   0.009448513,
   0.01070524,
   0,
   0.008632326,
   0.005504886,
   0.00524912,
   0.00282519,
   0.1425149};
   Double_t _fehx3129[25] = {
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
   Double_t _fehy3129[25] = {
   0,
   0.04875499,
   0.1803503,
   0.2663546,
   0.594463,
   0.3680152,
   0.08498286,
   0.9838912,
   0.6996049,
   0.4596027,
   0.01058376,
   0.01631566,
   0.02524653,
   0.005876906,
   0.007580485,
   0.008227261,
   0.003290551,
   0.009446973,
   0.01070383,
   0,
   0.008629647,
   0.005490238,
   0.005249275,
   0.002825225,
   0.1425149};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(25,_fx3129,_fy3129,_felx3129,_fehx3129,_fely3129,_fehy3129);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(12);
   grae->SetFillStyle(3004);
   grae->SetLineColor(12);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3129 = new TH1F("Graph_Graph3129","",100,0,219);
   Graph_Graph3129->SetMinimum(-0.7215399);
   Graph_Graph3129->SetMaximum(2.426881);
   Graph_Graph3129->SetDirectory(0);
   Graph_Graph3129->SetStats(0);
   Graph_Graph3129->SetLineStyle(0);
   Graph_Graph3129->SetMarkerStyle(20);
   Graph_Graph3129->GetXaxis()->SetLabelFont(42);
   Graph_Graph3129->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3129->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3129->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3129->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3129->GetXaxis()->SetTitleFont(42);
   Graph_Graph3129->GetYaxis()->SetLabelFont(42);
   Graph_Graph3129->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3129->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3129->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3129->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3129->GetYaxis()->SetTitleFont(42);
   Graph_Graph3129->GetZaxis()->SetLabelFont(42);
   Graph_Graph3129->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3129->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3129->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3129->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3129);
   
   grae->Draw("2");
   
   Double_t _fx3130[25] = {
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
   Double_t _fy3130[25] = {
   0,
   0,
   1,
   2,
   1,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t _felx3130[25] = {
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
   Double_t _fely3130[25] = {
   0,
   0,
   0.8272524,
   1.29183,
   0.8272524,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t _fehx3130[25] = {
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
   Double_t _fehy3130[25] = {
   1.147908,
   1.147908,
   2.29957,
   2.63791,
   2.29957,
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
   grae = new TGraphAsymmErrors(25,_fx3130,_fy3130,_felx3130,_fehx3130,_fely3130,_fehy3130);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(1);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3130 = new TH1F("Graph_Graph3130","",100,0,219);
   Graph_Graph3130->SetMinimum(0);
   Graph_Graph3130->SetMaximum(5.101701);
   Graph_Graph3130->SetDirectory(0);
   Graph_Graph3130->SetStats(0);
   Graph_Graph3130->SetLineStyle(0);
   Graph_Graph3130->SetMarkerStyle(20);
   Graph_Graph3130->GetXaxis()->SetLabelFont(42);
   Graph_Graph3130->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3130->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3130->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3130->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3130->GetXaxis()->SetTitleFont(42);
   Graph_Graph3130->GetYaxis()->SetLabelFont(42);
   Graph_Graph3130->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3130->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3130->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3130->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3130->GetYaxis()->SetTitleFont(42);
   Graph_Graph3130->GetZaxis()->SetLabelFont(42);
   Graph_Graph3130->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3130->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3130->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3130->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3130);
   
   grae->Draw("p0");
   
   TLegend *leg = new TLegend(0.2,0.7,0.8,0.9,NULL,"brNDC");
   leg->SetTextFont(62);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1","Data","EPL");
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
   entry=leg->AddEntry("new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_MET_JetV_ZVeto_mll_13TeV_pt1","Data","EPL");
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
   
   TH1F *hframe_copy650 = new TH1F("hframe_copy650","",1000,10,200);
   hframe_copy650->SetMinimum(0);
   hframe_copy650->SetMaximum(8.535534);
   hframe_copy650->SetDirectory(0);
   hframe_copy650->SetStats(0);
   hframe_copy650->SetLineStyle(0);
   hframe_copy650->SetMarkerStyle(20);
   hframe_copy650->GetXaxis()->SetTitle("lept1_p_{T} [GeV]");
   hframe_copy650->GetXaxis()->SetNdivisions(506);
   hframe_copy650->GetXaxis()->SetLabelFont(42);
   hframe_copy650->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy650->GetXaxis()->SetLabelSize(0.05);
   hframe_copy650->GetXaxis()->SetTitleSize(0.06);
   hframe_copy650->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy650->GetXaxis()->SetTitleFont(42);
   hframe_copy650->GetYaxis()->SetTitle("Events");
   hframe_copy650->GetYaxis()->SetLabelFont(42);
   hframe_copy650->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy650->GetYaxis()->SetLabelSize(0.05);
   hframe_copy650->GetYaxis()->SetTitleSize(0.06);
   hframe_copy650->GetYaxis()->SetTitleOffset(1.25);
   hframe_copy650->GetYaxis()->SetTitleFont(42);
   hframe_copy650->GetZaxis()->SetLabelFont(42);
   hframe_copy650->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy650->GetZaxis()->SetLabelSize(0.05);
   hframe_copy650->GetZaxis()->SetTitleSize(0.06);
   hframe_copy650->GetZaxis()->SetTitleFont(42);
   hframe_copy650->Draw("sameaxis");
   ccwh3l_MET_JetV_ZVeto_mll_13TeV_pt1->Modified();
   ccwh3l_MET_JetV_ZVeto_mll_13TeV_pt1->cd();
   ccwh3l_MET_JetV_ZVeto_mll_13TeV_pt1->SetSelected(ccwh3l_MET_JetV_ZVeto_mll_13TeV_pt1);
}
