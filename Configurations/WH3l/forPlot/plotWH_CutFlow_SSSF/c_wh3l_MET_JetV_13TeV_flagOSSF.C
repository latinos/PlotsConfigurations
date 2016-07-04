void c_wh3l_MET_JetV_13TeV_flagOSSF()
{
//=========Macro generated from canvas: ccwh3l_MET_JetV_13TeV_flagOSSF/cc
//=========  (Sun Jul  3 01:21:46 2016) by ROOT version6.02/13
   TCanvas *ccwh3l_MET_JetV_13TeV_flagOSSF = new TCanvas("ccwh3l_MET_JetV_13TeV_flagOSSF", "cc",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   ccwh3l_MET_JetV_13TeV_flagOSSF->SetHighLightColor(2);
   ccwh3l_MET_JetV_13TeV_flagOSSF->Range(-0.4,-2.867954,2.1,19.19323);
   ccwh3l_MET_JetV_13TeV_flagOSSF->SetFillColor(0);
   ccwh3l_MET_JetV_13TeV_flagOSSF->SetBorderMode(0);
   ccwh3l_MET_JetV_13TeV_flagOSSF->SetBorderSize(2);
   ccwh3l_MET_JetV_13TeV_flagOSSF->SetTickx(1);
   ccwh3l_MET_JetV_13TeV_flagOSSF->SetTicky(1);
   ccwh3l_MET_JetV_13TeV_flagOSSF->SetLeftMargin(0.16);
   ccwh3l_MET_JetV_13TeV_flagOSSF->SetRightMargin(0.04);
   ccwh3l_MET_JetV_13TeV_flagOSSF->SetTopMargin(0.05);
   ccwh3l_MET_JetV_13TeV_flagOSSF->SetBottomMargin(0.13);
   ccwh3l_MET_JetV_13TeV_flagOSSF->SetFrameFillStyle(0);
   ccwh3l_MET_JetV_13TeV_flagOSSF->SetFrameBorderMode(0);
   ccwh3l_MET_JetV_13TeV_flagOSSF->SetFrameFillStyle(0);
   ccwh3l_MET_JetV_13TeV_flagOSSF->SetFrameBorderMode(0);
   
   TH1F *hframe11 = new TH1F("hframe11","",1000,0,2);
   hframe11->SetMinimum(0);
   hframe11->SetMaximum(18.09017);
   hframe11->SetDirectory(0);
   hframe11->SetStats(0);
   hframe11->SetLineStyle(0);
   hframe11->SetMarkerStyle(20);
   hframe11->GetXaxis()->SetTitle("flag OSSF");
   hframe11->GetXaxis()->SetNdivisions(506);
   hframe11->GetXaxis()->SetLabelFont(42);
   hframe11->GetXaxis()->SetLabelOffset(0.007);
   hframe11->GetXaxis()->SetLabelSize(0.05);
   hframe11->GetXaxis()->SetTitleSize(0.06);
   hframe11->GetXaxis()->SetTitleOffset(0.9);
   hframe11->GetXaxis()->SetTitleFont(42);
   hframe11->GetYaxis()->SetTitle("Events");
   hframe11->GetYaxis()->SetLabelFont(42);
   hframe11->GetYaxis()->SetLabelOffset(0.007);
   hframe11->GetYaxis()->SetLabelSize(0.05);
   hframe11->GetYaxis()->SetTitleSize(0.06);
   hframe11->GetYaxis()->SetTitleOffset(1.25);
   hframe11->GetYaxis()->SetTitleFont(42);
   hframe11->GetZaxis()->SetLabelFont(42);
   hframe11->GetZaxis()->SetLabelOffset(0.007);
   hframe11->GetZaxis()->SetLabelSize(0.05);
   hframe11->GetZaxis()->SetTitleSize(0.06);
   hframe11->GetZaxis()->SetTitleFont(42);
   hframe11->Draw(" ");
   
   THStack *thsBackground_grouped_wh3l_MET_JetV_13TeV_flagOSSF = new THStack();
   thsBackground_grouped_wh3l_MET_JetV_13TeV_flagOSSF->SetName("thsBackground_grouped_wh3l_MET_JetV_13TeV_flagOSSF");
   thsBackground_grouped_wh3l_MET_JetV_13TeV_flagOSSF->SetTitle("thsBackground_grouped_wh3l_MET_JetV_13TeV_flagOSSF");
   
   TH1F *thsBackground_grouped_wh3l_MET_JetV_13TeV_flagOSSF_stack_3 = new TH1F("thsBackground_grouped_wh3l_MET_JetV_13TeV_flagOSSF_stack_3","thsBackground_grouped_wh3l_MET_JetV_13TeV_flagOSSF",2,0,2);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_flagOSSF_stack_3->SetMinimum(0);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_flagOSSF_stack_3->SetMaximum(4.45845);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_flagOSSF_stack_3->SetDirectory(0);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_flagOSSF_stack_3->SetStats(0);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_flagOSSF_stack_3->SetLineStyle(0);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_flagOSSF_stack_3->SetMarkerStyle(20);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_flagOSSF_stack_3->GetXaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_flagOSSF_stack_3->GetXaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_flagOSSF_stack_3->GetXaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_flagOSSF_stack_3->GetXaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_flagOSSF_stack_3->GetXaxis()->SetTitleOffset(0.9);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_flagOSSF_stack_3->GetXaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_flagOSSF_stack_3->GetYaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_flagOSSF_stack_3->GetYaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_flagOSSF_stack_3->GetYaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_flagOSSF_stack_3->GetYaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_flagOSSF_stack_3->GetYaxis()->SetTitleOffset(1.25);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_flagOSSF_stack_3->GetYaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_flagOSSF_stack_3->GetZaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_flagOSSF_stack_3->GetZaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_flagOSSF_stack_3->GetZaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_flagOSSF_stack_3->GetZaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_flagOSSF_stack_3->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_flagOSSF->SetHistogram(thsBackground_grouped_wh3l_MET_JetV_13TeV_flagOSSF_stack_3);
   
   
   TH1D *new_histo_group_Fake_wh3l_MET_JetV_13TeV_flagOSSF12 = new TH1D("new_histo_group_Fake_wh3l_MET_JetV_13TeV_flagOSSF12","histo_Fake",2,0,2);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_flagOSSF12->SetBinContent(1,2.887924);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_flagOSSF12->SetBinError(1,1.358219);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_flagOSSF12->SetEntries(34);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_flagOSSF12->SetFillColor(ci);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_flagOSSF12->SetFillStyle(3001);

   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_flagOSSF12->SetLineColor(ci);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_flagOSSF12->GetXaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_flagOSSF12->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_flagOSSF12->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_flagOSSF12->GetXaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_flagOSSF12->GetYaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_flagOSSF12->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_flagOSSF12->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_flagOSSF12->GetYaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_flagOSSF12->GetZaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_flagOSSF12->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_flagOSSF12->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_flagOSSF12->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_flagOSSF->Add(new_histo_group_Fake_wh3l_MET_JetV_13TeV_flagOSSF,"");
   
   TH1D *new_histo_group_WW_wh3l_MET_JetV_13TeV_flagOSSF13 = new TH1D("new_histo_group_WW_wh3l_MET_JetV_13TeV_flagOSSF13","histo_WW",2,0,2);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_flagOSSF13->SetBinContent(1,0.04360057);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_flagOSSF13->SetBinError(1,0.02568789);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_flagOSSF13->SetEntries(3);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_MET_JetV_13TeV_flagOSSF13->SetFillColor(ci);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_flagOSSF13->SetFillStyle(3001);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_MET_JetV_13TeV_flagOSSF13->SetLineColor(ci);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_flagOSSF13->GetXaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_flagOSSF13->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_flagOSSF13->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_flagOSSF13->GetXaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_flagOSSF13->GetYaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_flagOSSF13->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_flagOSSF13->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_flagOSSF13->GetYaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_flagOSSF13->GetZaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_flagOSSF13->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_flagOSSF13->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_flagOSSF13->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_flagOSSF->Add(new_histo_group_WW_wh3l_MET_JetV_13TeV_flagOSSF,"");
   
   TH1D *new_histo_group_VVV_wh3l_MET_JetV_13TeV_flagOSSF14 = new TH1D("new_histo_group_VVV_wh3l_MET_JetV_13TeV_flagOSSF14","histo_VVV",2,0,2);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_flagOSSF14->SetBinContent(1,0.1299423);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_flagOSSF14->SetBinError(1,0.01921394);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_flagOSSF14->SetEntries(80);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_flagOSSF14->SetFillColor(ci);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_flagOSSF14->SetFillStyle(3001);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_flagOSSF14->SetLineColor(ci);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_flagOSSF14->GetXaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_flagOSSF14->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_flagOSSF14->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_flagOSSF14->GetXaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_flagOSSF14->GetYaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_flagOSSF14->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_flagOSSF14->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_flagOSSF14->GetYaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_flagOSSF14->GetZaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_flagOSSF14->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_flagOSSF14->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_flagOSSF14->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_flagOSSF->Add(new_histo_group_VVV_wh3l_MET_JetV_13TeV_flagOSSF,"");
   
   TH1D *new_histo_group_Vg_wh3l_MET_JetV_13TeV_flagOSSF15 = new TH1D("new_histo_group_Vg_wh3l_MET_JetV_13TeV_flagOSSF15","histo_Vg",2,0,2);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_flagOSSF15->SetBinContent(1,0.0522728);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_flagOSSF15->SetBinError(1,0.0522728);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_flagOSSF15->SetEntries(1);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_flagOSSF15->SetFillColor(ci);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_flagOSSF15->SetFillStyle(3001);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_flagOSSF15->SetLineColor(ci);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_flagOSSF15->GetXaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_flagOSSF15->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_flagOSSF15->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_flagOSSF15->GetXaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_flagOSSF15->GetYaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_flagOSSF15->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_flagOSSF15->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_flagOSSF15->GetYaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_flagOSSF15->GetZaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_flagOSSF15->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_flagOSSF15->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_flagOSSF15->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_flagOSSF->Add(new_histo_group_Vg_wh3l_MET_JetV_13TeV_flagOSSF,"");
   
   TH1D *new_histo_group_ZZ_wh3l_MET_JetV_13TeV_flagOSSF16 = new TH1D("new_histo_group_ZZ_wh3l_MET_JetV_13TeV_flagOSSF16","histo_ZZ",2,0,2);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_flagOSSF16->SetBinContent(1,0.07785033);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_flagOSSF16->SetBinError(1,0.05530859);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_flagOSSF16->SetEntries(2);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_flagOSSF16->SetFillColor(ci);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_flagOSSF16->SetFillStyle(3001);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_flagOSSF16->SetLineColor(ci);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_flagOSSF16->GetXaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_flagOSSF16->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_flagOSSF16->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_flagOSSF16->GetXaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_flagOSSF16->GetYaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_flagOSSF16->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_flagOSSF16->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_flagOSSF16->GetYaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_flagOSSF16->GetZaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_flagOSSF16->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_flagOSSF16->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_flagOSSF16->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_flagOSSF->Add(new_histo_group_ZZ_wh3l_MET_JetV_13TeV_flagOSSF,"");
   
   TH1D *new_histo_group_WZ_wh3l_MET_JetV_13TeV_flagOSSF17 = new TH1D("new_histo_group_WZ_wh3l_MET_JetV_13TeV_flagOSSF17","histo_WZ",2,0,2);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_flagOSSF17->SetBinContent(1,0.6645087);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_flagOSSF17->SetBinError(1,0.05966337);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_flagOSSF17->SetEntries(136);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_flagOSSF17->SetFillColor(ci);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_flagOSSF17->SetFillStyle(3001);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_flagOSSF17->SetLineColor(ci);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_flagOSSF17->GetXaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_flagOSSF17->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_flagOSSF17->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_flagOSSF17->GetXaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_flagOSSF17->GetYaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_flagOSSF17->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_flagOSSF17->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_flagOSSF17->GetYaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_flagOSSF17->GetZaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_flagOSSF17->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_flagOSSF17->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_flagOSSF17->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_flagOSSF->Add(new_histo_group_WZ_wh3l_MET_JetV_13TeV_flagOSSF,"");
   
   TH1D *new_histo_group_Higgs_wh3l_MET_JetV_13TeV_flagOSSF18 = new TH1D("new_histo_group_Higgs_wh3l_MET_JetV_13TeV_flagOSSF18","histo_H_htt",2,0,2);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_flagOSSF18->SetBinContent(1,0.2835517);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_flagOSSF18->SetBinError(1,0.01760248);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_flagOSSF18->SetEntries(512);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_flagOSSF18->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_flagOSSF18->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_flagOSSF18->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_flagOSSF18->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_flagOSSF18->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_flagOSSF18->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_flagOSSF18->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_flagOSSF18->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_flagOSSF18->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_flagOSSF18->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_flagOSSF18->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_flagOSSF18->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_flagOSSF18->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_flagOSSF18->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_flagOSSF18->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_flagOSSF->Add(new_histo_group_Higgs_wh3l_MET_JetV_13TeV_flagOSSF,"");
   thsBackground_grouped_wh3l_MET_JetV_13TeV_flagOSSF->Draw("hist same");
   
   thsSignal_grouped_wh3l_MET_JetV_13TeV_flagOSSF = new THStack();
   thsSignal_grouped_wh3l_MET_JetV_13TeV_flagOSSF->SetName("thsSignal_grouped_wh3l_MET_JetV_13TeV_flagOSSF");
   thsSignal_grouped_wh3l_MET_JetV_13TeV_flagOSSF->SetTitle("thsSignal_grouped_wh3l_MET_JetV_13TeV_flagOSSF");
   
   TH1F *thsSignal_grouped_wh3l_MET_JetV_13TeV_flagOSSF_stack_4 = new TH1F("thsSignal_grouped_wh3l_MET_JetV_13TeV_flagOSSF_stack_4","thsSignal_grouped_wh3l_MET_JetV_13TeV_flagOSSF",2,0,2);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_flagOSSF_stack_4->SetMinimum(0);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_flagOSSF_stack_4->SetMaximum(0.3162119);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_flagOSSF_stack_4->SetDirectory(0);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_flagOSSF_stack_4->SetStats(0);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_flagOSSF_stack_4->SetLineStyle(0);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_flagOSSF_stack_4->SetMarkerStyle(20);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_flagOSSF_stack_4->GetXaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_flagOSSF_stack_4->GetXaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_flagOSSF_stack_4->GetXaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_flagOSSF_stack_4->GetXaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_flagOSSF_stack_4->GetXaxis()->SetTitleOffset(0.9);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_flagOSSF_stack_4->GetXaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_flagOSSF_stack_4->GetYaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_flagOSSF_stack_4->GetYaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_flagOSSF_stack_4->GetYaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_flagOSSF_stack_4->GetYaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_flagOSSF_stack_4->GetYaxis()->SetTitleOffset(1.25);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_flagOSSF_stack_4->GetYaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_flagOSSF_stack_4->GetZaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_flagOSSF_stack_4->GetZaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_flagOSSF_stack_4->GetZaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_flagOSSF_stack_4->GetZaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_flagOSSF_stack_4->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_flagOSSF->SetHistogram(thsSignal_grouped_wh3l_MET_JetV_13TeV_flagOSSF_stack_4);
   
   
   TH1D *new_histo_group_Higgs_wh3l_MET_JetV_13TeV_flagOSSF19 = new TH1D("new_histo_group_Higgs_wh3l_MET_JetV_13TeV_flagOSSF19","histo_H_htt",2,0,2);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_flagOSSF19->SetBinContent(1,0.2835517);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_flagOSSF19->SetBinError(1,0.01760248);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_flagOSSF19->SetEntries(512);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_flagOSSF19->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_flagOSSF19->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_flagOSSF19->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_flagOSSF19->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_flagOSSF19->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_flagOSSF19->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_flagOSSF19->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_flagOSSF19->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_flagOSSF19->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_flagOSSF19->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_flagOSSF19->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_flagOSSF19->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_flagOSSF19->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_flagOSSF19->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_flagOSSF19->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_flagOSSF->Add(new_histo_group_Higgs_wh3l_MET_JetV_13TeV_flagOSSF,"");
   thsSignal_grouped_wh3l_MET_JetV_13TeV_flagOSSF->Draw("hist same noclear");
   
   Double_t _fx3003[2] = {
   0.5,
   1.5};
   Double_t _fy3003[2] = {
   3.856098,
   0};
   Double_t _felx3003[2] = {
   0.5,
   0.5};
   Double_t _fely3003[2] = {
   1.87231,
   0};
   Double_t _fehx3003[2] = {
   0.5,
   0.5};
   Double_t _fehy3003[2] = {
   1.872253,
   0};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(2,_fx3003,_fy3003,_felx3003,_fehx3003,_fely3003,_fehy3003);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(12);
   grae->SetFillStyle(3004);
   grae->SetLineColor(12);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3003 = new TH1F("Graph_Graph3003","",100,0,2.2);
   Graph_Graph3003->SetMinimum(0);
   Graph_Graph3003->SetMaximum(6.301187);
   Graph_Graph3003->SetDirectory(0);
   Graph_Graph3003->SetStats(0);
   Graph_Graph3003->SetLineStyle(0);
   Graph_Graph3003->SetMarkerStyle(20);
   Graph_Graph3003->GetXaxis()->SetLabelFont(42);
   Graph_Graph3003->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3003->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3003->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3003->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3003->GetXaxis()->SetTitleFont(42);
   Graph_Graph3003->GetYaxis()->SetLabelFont(42);
   Graph_Graph3003->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3003->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3003->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3003->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3003->GetYaxis()->SetTitleFont(42);
   Graph_Graph3003->GetZaxis()->SetLabelFont(42);
   Graph_Graph3003->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3003->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3003->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3003->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3003);
   
   grae->Draw("2");
   
   Double_t _fx3004[2] = {
   0.5,
   1.5};
   Double_t _fy3004[2] = {
   5,
   0};
   Double_t _felx3004[2] = {
   0.5,
   0.5};
   Double_t _fely3004[2] = {
   2.159724,
   0};
   Double_t _fehx3004[2] = {
   0.5,
   0.5};
   Double_t _fehy3004[2] = {
   3.382539,
   1.147908};
   grae = new TGraphAsymmErrors(2,_fx3004,_fy3004,_felx3004,_fehx3004,_fely3004,_fehy3004);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(1);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3004 = new TH1F("Graph_Graph3004","",100,0,2.2);
   Graph_Graph3004->SetMinimum(0);
   Graph_Graph3004->SetMaximum(9.220793);
   Graph_Graph3004->SetDirectory(0);
   Graph_Graph3004->SetStats(0);
   Graph_Graph3004->SetLineStyle(0);
   Graph_Graph3004->SetMarkerStyle(20);
   Graph_Graph3004->GetXaxis()->SetLabelFont(42);
   Graph_Graph3004->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3004->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3004->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3004->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3004->GetXaxis()->SetTitleFont(42);
   Graph_Graph3004->GetYaxis()->SetLabelFont(42);
   Graph_Graph3004->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3004->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3004->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3004->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3004->GetYaxis()->SetTitleFont(42);
   Graph_Graph3004->GetZaxis()->SetLabelFont(42);
   Graph_Graph3004->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3004->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3004->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3004->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3004);
   
   grae->Draw("p0");
   
   TLegend *leg = new TLegend(0.2,0.7,0.8,0.9,NULL,"brNDC");
   leg->SetTextFont(62);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("new_histo_group_Fake_wh3l_MET_JetV_13TeV_flagOSSF","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_MET_JetV_13TeV_flagOSSF","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_MET_JetV_13TeV_flagOSSF","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_MET_JetV_13TeV_flagOSSF","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_MET_JetV_13TeV_flagOSSF","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_MET_JetV_13TeV_flagOSSF","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_MET_JetV_13TeV_flagOSSF","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_MET_JetV_13TeV_flagOSSF","Data","EPL");
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
   entry=leg->AddEntry("new_histo_group_Fake_wh3l_MET_JetV_13TeV_flagOSSF","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_MET_JetV_13TeV_flagOSSF","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_MET_JetV_13TeV_flagOSSF","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_MET_JetV_13TeV_flagOSSF","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_MET_JetV_13TeV_flagOSSF","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_MET_JetV_13TeV_flagOSSF","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_MET_JetV_13TeV_flagOSSF","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_MET_JetV_13TeV_flagOSSF","Data","EPL");
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
   
   TH1F *hframe_copy20 = new TH1F("hframe_copy20","",1000,0,2);
   hframe_copy20->SetMinimum(0);
   hframe_copy20->SetMaximum(18.09017);
   hframe_copy20->SetDirectory(0);
   hframe_copy20->SetStats(0);
   hframe_copy20->SetLineStyle(0);
   hframe_copy20->SetMarkerStyle(20);
   hframe_copy20->GetXaxis()->SetTitle("flag OSSF");
   hframe_copy20->GetXaxis()->SetNdivisions(506);
   hframe_copy20->GetXaxis()->SetLabelFont(42);
   hframe_copy20->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy20->GetXaxis()->SetLabelSize(0.05);
   hframe_copy20->GetXaxis()->SetTitleSize(0.06);
   hframe_copy20->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy20->GetXaxis()->SetTitleFont(42);
   hframe_copy20->GetYaxis()->SetTitle("Events");
   hframe_copy20->GetYaxis()->SetLabelFont(42);
   hframe_copy20->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy20->GetYaxis()->SetLabelSize(0.05);
   hframe_copy20->GetYaxis()->SetTitleSize(0.06);
   hframe_copy20->GetYaxis()->SetTitleOffset(1.25);
   hframe_copy20->GetYaxis()->SetTitleFont(42);
   hframe_copy20->GetZaxis()->SetLabelFont(42);
   hframe_copy20->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy20->GetZaxis()->SetLabelSize(0.05);
   hframe_copy20->GetZaxis()->SetTitleSize(0.06);
   hframe_copy20->GetZaxis()->SetTitleFont(42);
   hframe_copy20->Draw("sameaxis");
   ccwh3l_MET_JetV_13TeV_flagOSSF->Modified();
   ccwh3l_MET_JetV_13TeV_flagOSSF->cd();
   ccwh3l_MET_JetV_13TeV_flagOSSF->SetSelected(ccwh3l_MET_JetV_13TeV_flagOSSF);
}
