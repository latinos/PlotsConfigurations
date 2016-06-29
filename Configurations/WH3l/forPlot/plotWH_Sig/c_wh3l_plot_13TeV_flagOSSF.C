void c_wh3l_plot_13TeV_flagOSSF()
{
//=========Macro generated from canvas: ccwh3l_plot_13TeV_flagOSSF/cc
//=========  (Wed Jun 29 01:51:38 2016) by ROOT version6.02/13
   TCanvas *ccwh3l_plot_13TeV_flagOSSF = new TCanvas("ccwh3l_plot_13TeV_flagOSSF", "cc",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   ccwh3l_plot_13TeV_flagOSSF->SetHighLightColor(2);
   ccwh3l_plot_13TeV_flagOSSF->Range(-0.4,-8.16036,2.1,54.61164);
   ccwh3l_plot_13TeV_flagOSSF->SetFillColor(0);
   ccwh3l_plot_13TeV_flagOSSF->SetBorderMode(0);
   ccwh3l_plot_13TeV_flagOSSF->SetBorderSize(2);
   ccwh3l_plot_13TeV_flagOSSF->SetTickx(1);
   ccwh3l_plot_13TeV_flagOSSF->SetTicky(1);
   ccwh3l_plot_13TeV_flagOSSF->SetLeftMargin(0.16);
   ccwh3l_plot_13TeV_flagOSSF->SetRightMargin(0.04);
   ccwh3l_plot_13TeV_flagOSSF->SetTopMargin(0.05);
   ccwh3l_plot_13TeV_flagOSSF->SetBottomMargin(0.13);
   ccwh3l_plot_13TeV_flagOSSF->SetFrameFillStyle(0);
   ccwh3l_plot_13TeV_flagOSSF->SetFrameBorderMode(0);
   ccwh3l_plot_13TeV_flagOSSF->SetFrameFillStyle(0);
   ccwh3l_plot_13TeV_flagOSSF->SetFrameBorderMode(0);
   
   TH1F *hframe111 = new TH1F("hframe111","",1000,0,2);
   hframe111->SetMinimum(0);
   hframe111->SetMaximum(51.47304);
   hframe111->SetDirectory(0);
   hframe111->SetStats(0);
   hframe111->SetLineStyle(0);
   hframe111->SetMarkerStyle(20);
   hframe111->GetXaxis()->SetTitle("flag OSSF");
   hframe111->GetXaxis()->SetNdivisions(506);
   hframe111->GetXaxis()->SetLabelFont(42);
   hframe111->GetXaxis()->SetLabelOffset(0.007);
   hframe111->GetXaxis()->SetLabelSize(0.05);
   hframe111->GetXaxis()->SetTitleSize(0.06);
   hframe111->GetXaxis()->SetTitleOffset(0.9);
   hframe111->GetXaxis()->SetTitleFont(42);
   hframe111->GetYaxis()->SetTitle("Events");
   hframe111->GetYaxis()->SetLabelFont(42);
   hframe111->GetYaxis()->SetLabelOffset(0.007);
   hframe111->GetYaxis()->SetLabelSize(0.05);
   hframe111->GetYaxis()->SetTitleSize(0.06);
   hframe111->GetYaxis()->SetTitleOffset(1.25);
   hframe111->GetYaxis()->SetTitleFont(42);
   hframe111->GetZaxis()->SetLabelFont(42);
   hframe111->GetZaxis()->SetLabelOffset(0.007);
   hframe111->GetZaxis()->SetLabelSize(0.05);
   hframe111->GetZaxis()->SetTitleSize(0.06);
   hframe111->GetZaxis()->SetTitleFont(42);
   hframe111->Draw(" ");
   
   THStack *thsBackground_grouped_wh3l_plot_13TeV_flagOSSF = new THStack();
   thsBackground_grouped_wh3l_plot_13TeV_flagOSSF->SetName("thsBackground_grouped_wh3l_plot_13TeV_flagOSSF");
   thsBackground_grouped_wh3l_plot_13TeV_flagOSSF->SetTitle("thsBackground_grouped_wh3l_plot_13TeV_flagOSSF");
   
   TH1F *thsBackground_grouped_wh3l_plot_13TeV_flagOSSF_stack_23 = new TH1F("thsBackground_grouped_wh3l_plot_13TeV_flagOSSF_stack_23","thsBackground_grouped_wh3l_plot_13TeV_flagOSSF",2,0,2);
   thsBackground_grouped_wh3l_plot_13TeV_flagOSSF_stack_23->SetMinimum(0);
   thsBackground_grouped_wh3l_plot_13TeV_flagOSSF_stack_23->SetMaximum(21.61868);
   thsBackground_grouped_wh3l_plot_13TeV_flagOSSF_stack_23->SetDirectory(0);
   thsBackground_grouped_wh3l_plot_13TeV_flagOSSF_stack_23->SetStats(0);
   thsBackground_grouped_wh3l_plot_13TeV_flagOSSF_stack_23->SetLineStyle(0);
   thsBackground_grouped_wh3l_plot_13TeV_flagOSSF_stack_23->SetMarkerStyle(20);
   thsBackground_grouped_wh3l_plot_13TeV_flagOSSF_stack_23->GetXaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_plot_13TeV_flagOSSF_stack_23->GetXaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_plot_13TeV_flagOSSF_stack_23->GetXaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_plot_13TeV_flagOSSF_stack_23->GetXaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_plot_13TeV_flagOSSF_stack_23->GetXaxis()->SetTitleOffset(0.9);
   thsBackground_grouped_wh3l_plot_13TeV_flagOSSF_stack_23->GetXaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_plot_13TeV_flagOSSF_stack_23->GetYaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_plot_13TeV_flagOSSF_stack_23->GetYaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_plot_13TeV_flagOSSF_stack_23->GetYaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_plot_13TeV_flagOSSF_stack_23->GetYaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_plot_13TeV_flagOSSF_stack_23->GetYaxis()->SetTitleOffset(1.25);
   thsBackground_grouped_wh3l_plot_13TeV_flagOSSF_stack_23->GetYaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_plot_13TeV_flagOSSF_stack_23->GetZaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_plot_13TeV_flagOSSF_stack_23->GetZaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_plot_13TeV_flagOSSF_stack_23->GetZaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_plot_13TeV_flagOSSF_stack_23->GetZaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_plot_13TeV_flagOSSF_stack_23->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_plot_13TeV_flagOSSF->SetHistogram(thsBackground_grouped_wh3l_plot_13TeV_flagOSSF_stack_23);
   
   
   TH1D *new_histo_group_Fake_wh3l_plot_13TeV_flagOSSF112 = new TH1D("new_histo_group_Fake_wh3l_plot_13TeV_flagOSSF112","histo_Fake",2,0,2);
   new_histo_group_Fake_wh3l_plot_13TeV_flagOSSF112->SetBinContent(1,2.994681);
   new_histo_group_Fake_wh3l_plot_13TeV_flagOSSF112->SetBinContent(2,7.599876);
   new_histo_group_Fake_wh3l_plot_13TeV_flagOSSF112->SetBinError(1,1.32814);
   new_histo_group_Fake_wh3l_plot_13TeV_flagOSSF112->SetBinError(2,2.268032);
   new_histo_group_Fake_wh3l_plot_13TeV_flagOSSF112->SetEntries(118);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_plot_13TeV_flagOSSF112->SetFillColor(ci);
   new_histo_group_Fake_wh3l_plot_13TeV_flagOSSF112->SetFillStyle(3001);

   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_plot_13TeV_flagOSSF112->SetLineColor(ci);
   new_histo_group_Fake_wh3l_plot_13TeV_flagOSSF112->GetXaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_plot_13TeV_flagOSSF112->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_plot_13TeV_flagOSSF112->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_plot_13TeV_flagOSSF112->GetXaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_plot_13TeV_flagOSSF112->GetYaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_plot_13TeV_flagOSSF112->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_plot_13TeV_flagOSSF112->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_plot_13TeV_flagOSSF112->GetYaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_plot_13TeV_flagOSSF112->GetZaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_plot_13TeV_flagOSSF112->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_plot_13TeV_flagOSSF112->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_plot_13TeV_flagOSSF112->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_plot_13TeV_flagOSSF->Add(new_histo_group_Fake_wh3l_plot_13TeV_flagOSSF,"");
   
   TH1D *new_histo_group_WW_wh3l_plot_13TeV_flagOSSF113 = new TH1D("new_histo_group_WW_wh3l_plot_13TeV_flagOSSF113","histo_WW",2,0,2);
   new_histo_group_WW_wh3l_plot_13TeV_flagOSSF113->SetBinContent(1,0.0161241);
   new_histo_group_WW_wh3l_plot_13TeV_flagOSSF113->SetBinContent(2,0.07257783);
   new_histo_group_WW_wh3l_plot_13TeV_flagOSSF113->SetBinError(1,0.0161241);
   new_histo_group_WW_wh3l_plot_13TeV_flagOSSF113->SetBinError(2,0.03292453);
   new_histo_group_WW_wh3l_plot_13TeV_flagOSSF113->SetEntries(6);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_plot_13TeV_flagOSSF113->SetFillColor(ci);
   new_histo_group_WW_wh3l_plot_13TeV_flagOSSF113->SetFillStyle(3001);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_plot_13TeV_flagOSSF113->SetLineColor(ci);
   new_histo_group_WW_wh3l_plot_13TeV_flagOSSF113->GetXaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_plot_13TeV_flagOSSF113->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_plot_13TeV_flagOSSF113->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_plot_13TeV_flagOSSF113->GetXaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_plot_13TeV_flagOSSF113->GetYaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_plot_13TeV_flagOSSF113->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_plot_13TeV_flagOSSF113->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_plot_13TeV_flagOSSF113->GetYaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_plot_13TeV_flagOSSF113->GetZaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_plot_13TeV_flagOSSF113->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_plot_13TeV_flagOSSF113->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_plot_13TeV_flagOSSF113->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_plot_13TeV_flagOSSF->Add(new_histo_group_WW_wh3l_plot_13TeV_flagOSSF,"");
   
   TH1D *new_histo_group_VVV_wh3l_plot_13TeV_flagOSSF114 = new TH1D("new_histo_group_VVV_wh3l_plot_13TeV_flagOSSF114","histo_VVV",2,0,2);
   new_histo_group_VVV_wh3l_plot_13TeV_flagOSSF114->SetBinContent(1,0.002116335);
   new_histo_group_VVV_wh3l_plot_13TeV_flagOSSF114->SetBinContent(2,0.01140433);
   new_histo_group_VVV_wh3l_plot_13TeV_flagOSSF114->SetBinError(1,0.00113356);
   new_histo_group_VVV_wh3l_plot_13TeV_flagOSSF114->SetBinError(2,0.002588342);
   new_histo_group_VVV_wh3l_plot_13TeV_flagOSSF114->SetEntries(25);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_plot_13TeV_flagOSSF114->SetFillColor(ci);
   new_histo_group_VVV_wh3l_plot_13TeV_flagOSSF114->SetFillStyle(3001);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_plot_13TeV_flagOSSF114->SetLineColor(ci);
   new_histo_group_VVV_wh3l_plot_13TeV_flagOSSF114->GetXaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_plot_13TeV_flagOSSF114->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_plot_13TeV_flagOSSF114->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_plot_13TeV_flagOSSF114->GetXaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_plot_13TeV_flagOSSF114->GetYaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_plot_13TeV_flagOSSF114->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_plot_13TeV_flagOSSF114->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_plot_13TeV_flagOSSF114->GetYaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_plot_13TeV_flagOSSF114->GetZaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_plot_13TeV_flagOSSF114->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_plot_13TeV_flagOSSF114->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_plot_13TeV_flagOSSF114->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_plot_13TeV_flagOSSF->Add(new_histo_group_VVV_wh3l_plot_13TeV_flagOSSF,"");
   
   TH1D *new_histo_group_Vg_wh3l_plot_13TeV_flagOSSF115 = new TH1D("new_histo_group_Vg_wh3l_plot_13TeV_flagOSSF115","histo_Vg",2,0,2);
   new_histo_group_Vg_wh3l_plot_13TeV_flagOSSF115->SetBinContent(2,2.754018);
   new_histo_group_Vg_wh3l_plot_13TeV_flagOSSF115->SetBinError(2,0.5797935);
   new_histo_group_Vg_wh3l_plot_13TeV_flagOSSF115->SetEntries(43);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_plot_13TeV_flagOSSF115->SetFillColor(ci);
   new_histo_group_Vg_wh3l_plot_13TeV_flagOSSF115->SetFillStyle(3001);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_plot_13TeV_flagOSSF115->SetLineColor(ci);
   new_histo_group_Vg_wh3l_plot_13TeV_flagOSSF115->GetXaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_plot_13TeV_flagOSSF115->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_plot_13TeV_flagOSSF115->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_plot_13TeV_flagOSSF115->GetXaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_plot_13TeV_flagOSSF115->GetYaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_plot_13TeV_flagOSSF115->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_plot_13TeV_flagOSSF115->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_plot_13TeV_flagOSSF115->GetYaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_plot_13TeV_flagOSSF115->GetZaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_plot_13TeV_flagOSSF115->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_plot_13TeV_flagOSSF115->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_plot_13TeV_flagOSSF115->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_plot_13TeV_flagOSSF->Add(new_histo_group_Vg_wh3l_plot_13TeV_flagOSSF,"");
   
   TH1D *new_histo_group_ZZ_wh3l_plot_13TeV_flagOSSF116 = new TH1D("new_histo_group_ZZ_wh3l_plot_13TeV_flagOSSF116","histo_ZZ",2,0,2);
   new_histo_group_ZZ_wh3l_plot_13TeV_flagOSSF116->SetBinContent(1,0.07785033);
   new_histo_group_ZZ_wh3l_plot_13TeV_flagOSSF116->SetBinContent(2,0.5687563);
   new_histo_group_ZZ_wh3l_plot_13TeV_flagOSSF116->SetBinError(1,0.05530859);
   new_histo_group_ZZ_wh3l_plot_13TeV_flagOSSF116->SetBinError(2,0.1483053);
   new_histo_group_ZZ_wh3l_plot_13TeV_flagOSSF116->SetEntries(19);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_plot_13TeV_flagOSSF116->SetFillColor(ci);
   new_histo_group_ZZ_wh3l_plot_13TeV_flagOSSF116->SetFillStyle(3001);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_plot_13TeV_flagOSSF116->SetLineColor(ci);
   new_histo_group_ZZ_wh3l_plot_13TeV_flagOSSF116->GetXaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_plot_13TeV_flagOSSF116->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_plot_13TeV_flagOSSF116->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_plot_13TeV_flagOSSF116->GetXaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_plot_13TeV_flagOSSF116->GetYaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_plot_13TeV_flagOSSF116->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_plot_13TeV_flagOSSF116->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_plot_13TeV_flagOSSF116->GetYaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_plot_13TeV_flagOSSF116->GetZaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_plot_13TeV_flagOSSF116->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_plot_13TeV_flagOSSF116->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_plot_13TeV_flagOSSF116->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_plot_13TeV_flagOSSF->Add(new_histo_group_ZZ_wh3l_plot_13TeV_flagOSSF,"");
   
   TH1D *new_histo_group_WZ_wh3l_plot_13TeV_flagOSSF117 = new TH1D("new_histo_group_WZ_wh3l_plot_13TeV_flagOSSF117","histo_WZ",2,0,2);
   new_histo_group_WZ_wh3l_plot_13TeV_flagOSSF117->SetBinContent(1,0.4968267);
   new_histo_group_WZ_wh3l_plot_13TeV_flagOSSF117->SetBinContent(2,8.97965);
   new_histo_group_WZ_wh3l_plot_13TeV_flagOSSF117->SetBinError(1,0.05150454);
   new_histo_group_WZ_wh3l_plot_13TeV_flagOSSF117->SetBinError(2,0.2208146);
   new_histo_group_WZ_wh3l_plot_13TeV_flagOSSF117->SetEntries(1945);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_plot_13TeV_flagOSSF117->SetFillColor(ci);
   new_histo_group_WZ_wh3l_plot_13TeV_flagOSSF117->SetFillStyle(3001);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_plot_13TeV_flagOSSF117->SetLineColor(ci);
   new_histo_group_WZ_wh3l_plot_13TeV_flagOSSF117->GetXaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_plot_13TeV_flagOSSF117->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_plot_13TeV_flagOSSF117->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_plot_13TeV_flagOSSF117->GetXaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_plot_13TeV_flagOSSF117->GetYaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_plot_13TeV_flagOSSF117->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_plot_13TeV_flagOSSF117->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_plot_13TeV_flagOSSF117->GetYaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_plot_13TeV_flagOSSF117->GetZaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_plot_13TeV_flagOSSF117->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_plot_13TeV_flagOSSF117->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_plot_13TeV_flagOSSF117->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_plot_13TeV_flagOSSF->Add(new_histo_group_WZ_wh3l_plot_13TeV_flagOSSF,"");
   
   TH1D *new_histo_group_Higgs_wh3l_plot_13TeV_flagOSSF118 = new TH1D("new_histo_group_Higgs_wh3l_plot_13TeV_flagOSSF118","histo_H_htt",2,0,2);
   new_histo_group_Higgs_wh3l_plot_13TeV_flagOSSF118->SetBinContent(1,0.2385246);
   new_histo_group_Higgs_wh3l_plot_13TeV_flagOSSF118->SetBinContent(2,0.6029351);
   new_histo_group_Higgs_wh3l_plot_13TeV_flagOSSF118->SetBinError(1,0.01632281);
   new_histo_group_Higgs_wh3l_plot_13TeV_flagOSSF118->SetBinError(2,0.02688421);
   new_histo_group_Higgs_wh3l_plot_13TeV_flagOSSF118->SetEntries(1365);
   new_histo_group_Higgs_wh3l_plot_13TeV_flagOSSF118->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_plot_13TeV_flagOSSF118->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_plot_13TeV_flagOSSF118->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_plot_13TeV_flagOSSF118->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_plot_13TeV_flagOSSF118->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_plot_13TeV_flagOSSF118->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_plot_13TeV_flagOSSF118->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_plot_13TeV_flagOSSF118->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_plot_13TeV_flagOSSF118->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_plot_13TeV_flagOSSF118->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_plot_13TeV_flagOSSF118->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_plot_13TeV_flagOSSF118->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_plot_13TeV_flagOSSF118->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_plot_13TeV_flagOSSF118->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_plot_13TeV_flagOSSF118->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_plot_13TeV_flagOSSF->Add(new_histo_group_Higgs_wh3l_plot_13TeV_flagOSSF,"");
   thsBackground_grouped_wh3l_plot_13TeV_flagOSSF->Draw("hist same");
   
   thsSignal_grouped_wh3l_plot_13TeV_flagOSSF = new THStack();
   thsSignal_grouped_wh3l_plot_13TeV_flagOSSF->SetName("thsSignal_grouped_wh3l_plot_13TeV_flagOSSF");
   thsSignal_grouped_wh3l_plot_13TeV_flagOSSF->SetTitle("thsSignal_grouped_wh3l_plot_13TeV_flagOSSF");
   
   TH1F *thsSignal_grouped_wh3l_plot_13TeV_flagOSSF_stack_24 = new TH1F("thsSignal_grouped_wh3l_plot_13TeV_flagOSSF_stack_24","thsSignal_grouped_wh3l_plot_13TeV_flagOSSF",2,0,2);
   thsSignal_grouped_wh3l_plot_13TeV_flagOSSF_stack_24->SetMinimum(0);
   thsSignal_grouped_wh3l_plot_13TeV_flagOSSF_stack_24->SetMaximum(0.6613103);
   thsSignal_grouped_wh3l_plot_13TeV_flagOSSF_stack_24->SetDirectory(0);
   thsSignal_grouped_wh3l_plot_13TeV_flagOSSF_stack_24->SetStats(0);
   thsSignal_grouped_wh3l_plot_13TeV_flagOSSF_stack_24->SetLineStyle(0);
   thsSignal_grouped_wh3l_plot_13TeV_flagOSSF_stack_24->SetMarkerStyle(20);
   thsSignal_grouped_wh3l_plot_13TeV_flagOSSF_stack_24->GetXaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_plot_13TeV_flagOSSF_stack_24->GetXaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_plot_13TeV_flagOSSF_stack_24->GetXaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_plot_13TeV_flagOSSF_stack_24->GetXaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_plot_13TeV_flagOSSF_stack_24->GetXaxis()->SetTitleOffset(0.9);
   thsSignal_grouped_wh3l_plot_13TeV_flagOSSF_stack_24->GetXaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_plot_13TeV_flagOSSF_stack_24->GetYaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_plot_13TeV_flagOSSF_stack_24->GetYaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_plot_13TeV_flagOSSF_stack_24->GetYaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_plot_13TeV_flagOSSF_stack_24->GetYaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_plot_13TeV_flagOSSF_stack_24->GetYaxis()->SetTitleOffset(1.25);
   thsSignal_grouped_wh3l_plot_13TeV_flagOSSF_stack_24->GetYaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_plot_13TeV_flagOSSF_stack_24->GetZaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_plot_13TeV_flagOSSF_stack_24->GetZaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_plot_13TeV_flagOSSF_stack_24->GetZaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_plot_13TeV_flagOSSF_stack_24->GetZaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_plot_13TeV_flagOSSF_stack_24->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_plot_13TeV_flagOSSF->SetHistogram(thsSignal_grouped_wh3l_plot_13TeV_flagOSSF_stack_24);
   
   
   TH1D *new_histo_group_Higgs_wh3l_plot_13TeV_flagOSSF119 = new TH1D("new_histo_group_Higgs_wh3l_plot_13TeV_flagOSSF119","histo_H_htt",2,0,2);
   new_histo_group_Higgs_wh3l_plot_13TeV_flagOSSF119->SetBinContent(1,0.2385246);
   new_histo_group_Higgs_wh3l_plot_13TeV_flagOSSF119->SetBinContent(2,0.6029351);
   new_histo_group_Higgs_wh3l_plot_13TeV_flagOSSF119->SetBinError(1,0.01632281);
   new_histo_group_Higgs_wh3l_plot_13TeV_flagOSSF119->SetBinError(2,0.02688421);
   new_histo_group_Higgs_wh3l_plot_13TeV_flagOSSF119->SetEntries(1365);
   new_histo_group_Higgs_wh3l_plot_13TeV_flagOSSF119->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_plot_13TeV_flagOSSF119->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_plot_13TeV_flagOSSF119->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_plot_13TeV_flagOSSF119->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_plot_13TeV_flagOSSF119->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_plot_13TeV_flagOSSF119->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_plot_13TeV_flagOSSF119->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_plot_13TeV_flagOSSF119->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_plot_13TeV_flagOSSF119->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_plot_13TeV_flagOSSF119->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_plot_13TeV_flagOSSF119->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_plot_13TeV_flagOSSF119->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_plot_13TeV_flagOSSF119->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_plot_13TeV_flagOSSF119->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_plot_13TeV_flagOSSF119->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_plot_13TeV_flagOSSF->Add(new_histo_group_Higgs_wh3l_plot_13TeV_flagOSSF,"");
   thsSignal_grouped_wh3l_plot_13TeV_flagOSSF->Draw("hist same noclear");
   
   Double_t _fx3023[2] = {
   0.5,
   1.5};
   Double_t _fy3023[2] = {
   3.587599,
   19.98628};
   Double_t _felx3023[2] = {
   0.5,
   0.5};
   Double_t _fely3023[2] = {
   1.791078,
   4.229843};
   Double_t _fehx3023[2] = {
   0.5,
   0.5};
   Double_t _fehy3023[2] = {
   1.791068,
   4.227768};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(2,_fx3023,_fy3023,_felx3023,_fehx3023,_fely3023,_fehy3023);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(12);
   grae->SetFillStyle(3004);
   grae->SetLineColor(12);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3023 = new TH1F("Graph_Graph3023","",100,0,2.2);
   Graph_Graph3023->SetMinimum(0);
   Graph_Graph3023->SetMaximum(26.4558);
   Graph_Graph3023->SetDirectory(0);
   Graph_Graph3023->SetStats(0);
   Graph_Graph3023->SetLineStyle(0);
   Graph_Graph3023->SetMarkerStyle(20);
   Graph_Graph3023->GetXaxis()->SetLabelFont(42);
   Graph_Graph3023->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3023->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3023->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3023->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3023->GetXaxis()->SetTitleFont(42);
   Graph_Graph3023->GetYaxis()->SetLabelFont(42);
   Graph_Graph3023->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3023->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3023->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3023->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3023->GetYaxis()->SetTitleFont(42);
   Graph_Graph3023->GetZaxis()->SetLabelFont(42);
   Graph_Graph3023->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3023->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3023->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3023->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3023);
   
   grae->Draw("2");
   
   Double_t _fx3024[2] = {
   0.5,
   1.5};
   Double_t _fy3024[2] = {
   0,
   0};
   Double_t _felx3024[2] = {
   0.5,
   0.5};
   Double_t _fely3024[2] = {
   0,
   0};
   Double_t _fehx3024[2] = {
   0.5,
   0.5};
   Double_t _fehy3024[2] = {
   1.147908,
   1.147908};
   grae = new TGraphAsymmErrors(2,_fx3024,_fy3024,_felx3024,_fehx3024,_fely3024,_fehy3024);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(1);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3024 = new TH1F("Graph_Graph3024","",100,0,2.2);
   Graph_Graph3024->SetMinimum(0);
   Graph_Graph3024->SetMaximum(1.262698);
   Graph_Graph3024->SetDirectory(0);
   Graph_Graph3024->SetStats(0);
   Graph_Graph3024->SetLineStyle(0);
   Graph_Graph3024->SetMarkerStyle(20);
   Graph_Graph3024->GetXaxis()->SetLabelFont(42);
   Graph_Graph3024->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3024->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3024->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3024->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3024->GetXaxis()->SetTitleFont(42);
   Graph_Graph3024->GetYaxis()->SetLabelFont(42);
   Graph_Graph3024->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3024->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3024->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3024->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3024->GetYaxis()->SetTitleFont(42);
   Graph_Graph3024->GetZaxis()->SetLabelFont(42);
   Graph_Graph3024->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3024->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3024->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3024->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3024);
   
   grae->Draw("p0");
   
   TLegend *leg = new TLegend(0.2,0.7,0.8,0.9,NULL,"brNDC");
   leg->SetTextFont(62);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("new_histo_group_Fake_wh3l_plot_13TeV_flagOSSF","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_plot_13TeV_flagOSSF","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_plot_13TeV_flagOSSF","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_plot_13TeV_flagOSSF","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_plot_13TeV_flagOSSF","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_plot_13TeV_flagOSSF","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_plot_13TeV_flagOSSF","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_plot_13TeV_flagOSSF","Data","EPL");
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
   entry=leg->AddEntry("new_histo_group_Fake_wh3l_plot_13TeV_flagOSSF","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_plot_13TeV_flagOSSF","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_plot_13TeV_flagOSSF","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_plot_13TeV_flagOSSF","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_plot_13TeV_flagOSSF","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_plot_13TeV_flagOSSF","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_plot_13TeV_flagOSSF","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_plot_13TeV_flagOSSF","Data","EPL");
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
   
   TH1F *hframe_copy120 = new TH1F("hframe_copy120","",1000,0,2);
   hframe_copy120->SetMinimum(0);
   hframe_copy120->SetMaximum(51.47304);
   hframe_copy120->SetDirectory(0);
   hframe_copy120->SetStats(0);
   hframe_copy120->SetLineStyle(0);
   hframe_copy120->SetMarkerStyle(20);
   hframe_copy120->GetXaxis()->SetTitle("flag OSSF");
   hframe_copy120->GetXaxis()->SetNdivisions(506);
   hframe_copy120->GetXaxis()->SetLabelFont(42);
   hframe_copy120->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy120->GetXaxis()->SetLabelSize(0.05);
   hframe_copy120->GetXaxis()->SetTitleSize(0.06);
   hframe_copy120->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy120->GetXaxis()->SetTitleFont(42);
   hframe_copy120->GetYaxis()->SetTitle("Events");
   hframe_copy120->GetYaxis()->SetLabelFont(42);
   hframe_copy120->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy120->GetYaxis()->SetLabelSize(0.05);
   hframe_copy120->GetYaxis()->SetTitleSize(0.06);
   hframe_copy120->GetYaxis()->SetTitleOffset(1.25);
   hframe_copy120->GetYaxis()->SetTitleFont(42);
   hframe_copy120->GetZaxis()->SetLabelFont(42);
   hframe_copy120->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy120->GetZaxis()->SetLabelSize(0.05);
   hframe_copy120->GetZaxis()->SetTitleSize(0.06);
   hframe_copy120->GetZaxis()->SetTitleFont(42);
   hframe_copy120->Draw("sameaxis");
   ccwh3l_plot_13TeV_flagOSSF->Modified();
   ccwh3l_plot_13TeV_flagOSSF->cd();
   ccwh3l_plot_13TeV_flagOSSF->SetSelected(ccwh3l_plot_13TeV_flagOSSF);
}
