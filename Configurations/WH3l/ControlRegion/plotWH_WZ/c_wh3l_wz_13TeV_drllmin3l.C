void c_wh3l_wz_13TeV_drllmin3l()
{
//=========Macro generated from canvas: ccwh3l_wz_13TeV_drllmin3l/cc
//=========  (Tue Jun 28 16:49:01 2016) by ROOT version6.02/13
   TCanvas *ccwh3l_wz_13TeV_drllmin3l = new TCanvas("ccwh3l_wz_13TeV_drllmin3l", "cc",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   ccwh3l_wz_13TeV_drllmin3l->SetHighLightColor(2);
   ccwh3l_wz_13TeV_drllmin3l->Range(-1.2,-40.68193,6.3,272.256);
   ccwh3l_wz_13TeV_drllmin3l->SetFillColor(0);
   ccwh3l_wz_13TeV_drllmin3l->SetBorderMode(0);
   ccwh3l_wz_13TeV_drllmin3l->SetBorderSize(2);
   ccwh3l_wz_13TeV_drllmin3l->SetTickx(1);
   ccwh3l_wz_13TeV_drllmin3l->SetTicky(1);
   ccwh3l_wz_13TeV_drllmin3l->SetLeftMargin(0.16);
   ccwh3l_wz_13TeV_drllmin3l->SetRightMargin(0.04);
   ccwh3l_wz_13TeV_drllmin3l->SetTopMargin(0.05);
   ccwh3l_wz_13TeV_drllmin3l->SetBottomMargin(0.13);
   ccwh3l_wz_13TeV_drllmin3l->SetFrameFillStyle(0);
   ccwh3l_wz_13TeV_drllmin3l->SetFrameBorderMode(0);
   ccwh3l_wz_13TeV_drllmin3l->SetFrameFillStyle(0);
   ccwh3l_wz_13TeV_drllmin3l->SetFrameBorderMode(0);
   
   TH1F *hframe113 = new TH1F("hframe113","",1000,0,6);
   hframe113->SetMinimum(0);
   hframe113->SetMaximum(256.6091);
   hframe113->SetDirectory(0);
   hframe113->SetStats(0);
   hframe113->SetLineStyle(0);
   hframe113->SetMarkerStyle(20);
   hframe113->GetXaxis()->SetTitle("min #Delta Rm_{ll} [GeV]");
   hframe113->GetXaxis()->SetNdivisions(506);
   hframe113->GetXaxis()->SetLabelFont(42);
   hframe113->GetXaxis()->SetLabelOffset(0.007);
   hframe113->GetXaxis()->SetLabelSize(0.05);
   hframe113->GetXaxis()->SetTitleSize(0.06);
   hframe113->GetXaxis()->SetTitleOffset(0.9);
   hframe113->GetXaxis()->SetTitleFont(42);
   hframe113->GetYaxis()->SetTitle("Events");
   hframe113->GetYaxis()->SetLabelFont(42);
   hframe113->GetYaxis()->SetLabelOffset(0.007);
   hframe113->GetYaxis()->SetLabelSize(0.05);
   hframe113->GetYaxis()->SetTitleSize(0.06);
   hframe113->GetYaxis()->SetTitleOffset(1.25);
   hframe113->GetYaxis()->SetTitleFont(42);
   hframe113->GetZaxis()->SetLabelFont(42);
   hframe113->GetZaxis()->SetLabelOffset(0.007);
   hframe113->GetZaxis()->SetLabelSize(0.05);
   hframe113->GetZaxis()->SetTitleSize(0.06);
   hframe113->GetZaxis()->SetTitleFont(42);
   hframe113->Draw(" ");
   
   THStack *thsBackground_grouped_wh3l_wz_13TeV_drllmin3l = new THStack();
   thsBackground_grouped_wh3l_wz_13TeV_drllmin3l->SetName("thsBackground_grouped_wh3l_wz_13TeV_drllmin3l");
   thsBackground_grouped_wh3l_wz_13TeV_drllmin3l->SetTitle("thsBackground_grouped_wh3l_wz_13TeV_drllmin3l");
   
   TH1F *thsBackground_grouped_wh3l_wz_13TeV_drllmin3l_stack_15 = new TH1F("thsBackground_grouped_wh3l_wz_13TeV_drllmin3l_stack_15","thsBackground_grouped_wh3l_wz_13TeV_drllmin3l",5,0,6);
   thsBackground_grouped_wh3l_wz_13TeV_drllmin3l_stack_15->SetMinimum(-0.01150564);
   thsBackground_grouped_wh3l_wz_13TeV_drllmin3l_stack_15->SetMaximum(80.15112);
   thsBackground_grouped_wh3l_wz_13TeV_drllmin3l_stack_15->SetDirectory(0);
   thsBackground_grouped_wh3l_wz_13TeV_drllmin3l_stack_15->SetStats(0);
   thsBackground_grouped_wh3l_wz_13TeV_drllmin3l_stack_15->SetLineStyle(0);
   thsBackground_grouped_wh3l_wz_13TeV_drllmin3l_stack_15->SetMarkerStyle(20);
   thsBackground_grouped_wh3l_wz_13TeV_drllmin3l_stack_15->GetXaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_wz_13TeV_drllmin3l_stack_15->GetXaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_wz_13TeV_drllmin3l_stack_15->GetXaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_wz_13TeV_drllmin3l_stack_15->GetXaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_wz_13TeV_drllmin3l_stack_15->GetXaxis()->SetTitleOffset(0.9);
   thsBackground_grouped_wh3l_wz_13TeV_drllmin3l_stack_15->GetXaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_wz_13TeV_drllmin3l_stack_15->GetYaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_wz_13TeV_drllmin3l_stack_15->GetYaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_wz_13TeV_drllmin3l_stack_15->GetYaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_wz_13TeV_drllmin3l_stack_15->GetYaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_wz_13TeV_drllmin3l_stack_15->GetYaxis()->SetTitleOffset(1.25);
   thsBackground_grouped_wh3l_wz_13TeV_drllmin3l_stack_15->GetYaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_wz_13TeV_drllmin3l_stack_15->GetZaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_wz_13TeV_drllmin3l_stack_15->GetZaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_wz_13TeV_drllmin3l_stack_15->GetZaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_wz_13TeV_drllmin3l_stack_15->GetZaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_wz_13TeV_drllmin3l_stack_15->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_wz_13TeV_drllmin3l->SetHistogram(thsBackground_grouped_wh3l_wz_13TeV_drllmin3l_stack_15);
   
   
   TH1D *new_histo_group_Fake_wh3l_wz_13TeV_drllmin3l114 = new TH1D("new_histo_group_Fake_wh3l_wz_13TeV_drllmin3l114","histo_Fake",5,0,6);
   new_histo_group_Fake_wh3l_wz_13TeV_drllmin3l114->SetBinContent(1,1.252946);
   new_histo_group_Fake_wh3l_wz_13TeV_drllmin3l114->SetBinContent(2,5.59659);
   new_histo_group_Fake_wh3l_wz_13TeV_drllmin3l114->SetBinContent(3,3.706904);
   new_histo_group_Fake_wh3l_wz_13TeV_drllmin3l114->SetBinContent(4,-0.00575282);
   new_histo_group_Fake_wh3l_wz_13TeV_drllmin3l114->SetBinError(1,1.151066);
   new_histo_group_Fake_wh3l_wz_13TeV_drllmin3l114->SetBinError(2,2.293394);
   new_histo_group_Fake_wh3l_wz_13TeV_drllmin3l114->SetBinError(3,2.118646);
   new_histo_group_Fake_wh3l_wz_13TeV_drllmin3l114->SetBinError(4,0.00575282);
   new_histo_group_Fake_wh3l_wz_13TeV_drllmin3l114->SetEntries(337);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_wz_13TeV_drllmin3l114->SetFillColor(ci);
   new_histo_group_Fake_wh3l_wz_13TeV_drllmin3l114->SetFillStyle(3001);

   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_wz_13TeV_drllmin3l114->SetLineColor(ci);
   new_histo_group_Fake_wh3l_wz_13TeV_drllmin3l114->GetXaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_wz_13TeV_drllmin3l114->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_wz_13TeV_drllmin3l114->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_wz_13TeV_drllmin3l114->GetXaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_wz_13TeV_drllmin3l114->GetYaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_wz_13TeV_drllmin3l114->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_wz_13TeV_drllmin3l114->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_wz_13TeV_drllmin3l114->GetYaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_wz_13TeV_drllmin3l114->GetZaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_wz_13TeV_drllmin3l114->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_wz_13TeV_drllmin3l114->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_wz_13TeV_drllmin3l114->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_wz_13TeV_drllmin3l->Add(new_histo_group_Fake_wh3l_wz_13TeV_drllmin3l,"");
   
   TH1D *new_histo_group_WW_wh3l_wz_13TeV_drllmin3l115 = new TH1D("new_histo_group_WW_wh3l_wz_13TeV_drllmin3l115","histo_WW",5,0,6);
   new_histo_group_WW_wh3l_wz_13TeV_drllmin3l115->SetBinContent(1,0.01092969);
   new_histo_group_WW_wh3l_wz_13TeV_drllmin3l115->SetBinContent(2,0.04987764);
   new_histo_group_WW_wh3l_wz_13TeV_drllmin3l115->SetBinContent(3,0.01458742);
   new_histo_group_WW_wh3l_wz_13TeV_drllmin3l115->SetBinError(1,0.01092969);
   new_histo_group_WW_wh3l_wz_13TeV_drllmin3l115->SetBinError(2,0.02894052);
   new_histo_group_WW_wh3l_wz_13TeV_drllmin3l115->SetBinError(3,0.01458742);
   new_histo_group_WW_wh3l_wz_13TeV_drllmin3l115->SetEntries(5);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_wz_13TeV_drllmin3l115->SetFillColor(ci);
   new_histo_group_WW_wh3l_wz_13TeV_drllmin3l115->SetFillStyle(3001);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_wz_13TeV_drllmin3l115->SetLineColor(ci);
   new_histo_group_WW_wh3l_wz_13TeV_drllmin3l115->GetXaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_wz_13TeV_drllmin3l115->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_wz_13TeV_drllmin3l115->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_wz_13TeV_drllmin3l115->GetXaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_wz_13TeV_drllmin3l115->GetYaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_wz_13TeV_drllmin3l115->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_wz_13TeV_drllmin3l115->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_wz_13TeV_drllmin3l115->GetYaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_wz_13TeV_drllmin3l115->GetZaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_wz_13TeV_drllmin3l115->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_wz_13TeV_drllmin3l115->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_wz_13TeV_drllmin3l115->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_wz_13TeV_drllmin3l->Add(new_histo_group_WW_wh3l_wz_13TeV_drllmin3l,"");
   
   TH1D *new_histo_group_VVV_wh3l_wz_13TeV_drllmin3l116 = new TH1D("new_histo_group_VVV_wh3l_wz_13TeV_drllmin3l116","histo_VVV",5,0,6);
   new_histo_group_VVV_wh3l_wz_13TeV_drllmin3l116->SetBinContent(1,0.04809872);
   new_histo_group_VVV_wh3l_wz_13TeV_drllmin3l116->SetBinContent(2,0.09379405);
   new_histo_group_VVV_wh3l_wz_13TeV_drllmin3l116->SetBinContent(3,0.02061386);
   new_histo_group_VVV_wh3l_wz_13TeV_drllmin3l116->SetBinError(1,0.005770531);
   new_histo_group_VVV_wh3l_wz_13TeV_drllmin3l116->SetBinError(2,0.00812474);
   new_histo_group_VVV_wh3l_wz_13TeV_drllmin3l116->SetBinError(3,0.003966108);
   new_histo_group_VVV_wh3l_wz_13TeV_drllmin3l116->SetEntries(326);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_wz_13TeV_drllmin3l116->SetFillColor(ci);
   new_histo_group_VVV_wh3l_wz_13TeV_drllmin3l116->SetFillStyle(3001);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_wz_13TeV_drllmin3l116->SetLineColor(ci);
   new_histo_group_VVV_wh3l_wz_13TeV_drllmin3l116->GetXaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_wz_13TeV_drllmin3l116->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_wz_13TeV_drllmin3l116->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_wz_13TeV_drllmin3l116->GetXaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_wz_13TeV_drllmin3l116->GetYaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_wz_13TeV_drllmin3l116->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_wz_13TeV_drllmin3l116->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_wz_13TeV_drllmin3l116->GetYaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_wz_13TeV_drllmin3l116->GetZaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_wz_13TeV_drllmin3l116->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_wz_13TeV_drllmin3l116->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_wz_13TeV_drllmin3l116->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_wz_13TeV_drllmin3l->Add(new_histo_group_VVV_wh3l_wz_13TeV_drllmin3l,"");
   
   TH1D *new_histo_group_Vg_wh3l_wz_13TeV_drllmin3l117 = new TH1D("new_histo_group_Vg_wh3l_wz_13TeV_drllmin3l117","histo_Vg",5,0,6);
   new_histo_group_Vg_wh3l_wz_13TeV_drllmin3l117->SetBinContent(1,1.748736);
   new_histo_group_Vg_wh3l_wz_13TeV_drllmin3l117->SetBinContent(2,1.242806);
   new_histo_group_Vg_wh3l_wz_13TeV_drllmin3l117->SetBinContent(3,2.021689);
   new_histo_group_Vg_wh3l_wz_13TeV_drllmin3l117->SetBinError(1,0.4385864);
   new_histo_group_Vg_wh3l_wz_13TeV_drllmin3l117->SetBinError(2,0.4699743);
   new_histo_group_Vg_wh3l_wz_13TeV_drllmin3l117->SetBinError(3,0.4658809);
   new_histo_group_Vg_wh3l_wz_13TeV_drllmin3l117->SetEntries(64);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_wz_13TeV_drllmin3l117->SetFillColor(ci);
   new_histo_group_Vg_wh3l_wz_13TeV_drllmin3l117->SetFillStyle(3001);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_wz_13TeV_drllmin3l117->SetLineColor(ci);
   new_histo_group_Vg_wh3l_wz_13TeV_drllmin3l117->GetXaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_wz_13TeV_drllmin3l117->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_wz_13TeV_drllmin3l117->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_wz_13TeV_drllmin3l117->GetXaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_wz_13TeV_drllmin3l117->GetYaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_wz_13TeV_drllmin3l117->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_wz_13TeV_drllmin3l117->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_wz_13TeV_drllmin3l117->GetYaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_wz_13TeV_drllmin3l117->GetZaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_wz_13TeV_drllmin3l117->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_wz_13TeV_drllmin3l117->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_wz_13TeV_drllmin3l117->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_wz_13TeV_drllmin3l->Add(new_histo_group_Vg_wh3l_wz_13TeV_drllmin3l,"");
   
   TH1D *new_histo_group_ZZ_wh3l_wz_13TeV_drllmin3l118 = new TH1D("new_histo_group_ZZ_wh3l_wz_13TeV_drllmin3l118","histo_ZZ",5,0,6);
   new_histo_group_ZZ_wh3l_wz_13TeV_drllmin3l118->SetBinContent(1,1.656599);
   new_histo_group_ZZ_wh3l_wz_13TeV_drllmin3l118->SetBinContent(2,5.032824);
   new_histo_group_ZZ_wh3l_wz_13TeV_drllmin3l118->SetBinContent(3,1.570973);
   new_histo_group_ZZ_wh3l_wz_13TeV_drllmin3l118->SetBinContent(4,0.07035991);
   new_histo_group_ZZ_wh3l_wz_13TeV_drllmin3l118->SetBinError(1,0.2643776);
   new_histo_group_ZZ_wh3l_wz_13TeV_drllmin3l118->SetBinError(2,0.4559137);
   new_histo_group_ZZ_wh3l_wz_13TeV_drllmin3l118->SetBinError(3,0.2548835);
   new_histo_group_ZZ_wh3l_wz_13TeV_drllmin3l118->SetBinError(4,0.04975592);
   new_histo_group_ZZ_wh3l_wz_13TeV_drllmin3l118->SetEntries(231);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_wz_13TeV_drllmin3l118->SetFillColor(ci);
   new_histo_group_ZZ_wh3l_wz_13TeV_drllmin3l118->SetFillStyle(3001);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_wz_13TeV_drllmin3l118->SetLineColor(ci);
   new_histo_group_ZZ_wh3l_wz_13TeV_drllmin3l118->GetXaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_wz_13TeV_drllmin3l118->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_wz_13TeV_drllmin3l118->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_wz_13TeV_drllmin3l118->GetXaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_wz_13TeV_drllmin3l118->GetYaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_wz_13TeV_drllmin3l118->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_wz_13TeV_drllmin3l118->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_wz_13TeV_drllmin3l118->GetYaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_wz_13TeV_drllmin3l118->GetZaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_wz_13TeV_drllmin3l118->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_wz_13TeV_drllmin3l118->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_wz_13TeV_drllmin3l118->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_wz_13TeV_drllmin3l->Add(new_histo_group_ZZ_wh3l_wz_13TeV_drllmin3l,"");
   
   TH1D *new_histo_group_WZ_wh3l_wz_13TeV_drllmin3l119 = new TH1D("new_histo_group_WZ_wh3l_wz_13TeV_drllmin3l119","histo_WZ",5,0,6);
   new_histo_group_WZ_wh3l_wz_13TeV_drllmin3l119->SetBinContent(1,17.95828);
   new_histo_group_WZ_wh3l_wz_13TeV_drllmin3l119->SetBinContent(2,64.31851);
   new_histo_group_WZ_wh3l_wz_13TeV_drllmin3l119->SetBinContent(3,26.16165);
   new_histo_group_WZ_wh3l_wz_13TeV_drllmin3l119->SetBinContent(4,0.1991393);
   new_histo_group_WZ_wh3l_wz_13TeV_drllmin3l119->SetBinError(1,0.3130012);
   new_histo_group_WZ_wh3l_wz_13TeV_drllmin3l119->SetBinError(2,0.591709);
   new_histo_group_WZ_wh3l_wz_13TeV_drllmin3l119->SetBinError(3,0.3761032);
   new_histo_group_WZ_wh3l_wz_13TeV_drllmin3l119->SetBinError(4,0.03184609);
   new_histo_group_WZ_wh3l_wz_13TeV_drllmin3l119->SetEntries(22151);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_wz_13TeV_drllmin3l119->SetFillColor(ci);
   new_histo_group_WZ_wh3l_wz_13TeV_drllmin3l119->SetFillStyle(3001);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_wz_13TeV_drllmin3l119->SetLineColor(ci);
   new_histo_group_WZ_wh3l_wz_13TeV_drllmin3l119->GetXaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_wz_13TeV_drllmin3l119->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_wz_13TeV_drllmin3l119->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_wz_13TeV_drllmin3l119->GetXaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_wz_13TeV_drllmin3l119->GetYaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_wz_13TeV_drllmin3l119->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_wz_13TeV_drllmin3l119->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_wz_13TeV_drllmin3l119->GetYaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_wz_13TeV_drllmin3l119->GetZaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_wz_13TeV_drllmin3l119->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_wz_13TeV_drllmin3l119->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_wz_13TeV_drllmin3l119->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_wz_13TeV_drllmin3l->Add(new_histo_group_WZ_wh3l_wz_13TeV_drllmin3l,"");
   thsBackground_grouped_wh3l_wz_13TeV_drllmin3l->Draw("hist same");
   
   Double_t _fx3029[5] = {
   0.6,
   1.8,
   3,
   4.2,
   5.4};
   Double_t _fy3029[5] = {
   22.67559,
   76.3344,
   33.49642,
   0.2637464,
   0};
   Double_t _felx3029[5] = {
   0.6,
   0.6,
   0.6,
   0.6,
   0.6};
   Double_t _fely3029[5] = {
   2.217821,
   4.201972,
   3.421332,
   0.08739252,
   0};
   Double_t _fehx3029[5] = {
   0.6,
   0.6,
   0.6,
   0.6,
   0.6};
   Double_t _fehy3029[5] = {
   2.217822,
   4.201982,
   3.42133,
   0.08739254,
   0};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(5,_fx3029,_fy3029,_felx3029,_fehx3029,_fely3029,_fehy3029);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(12);
   grae->SetFillStyle(3004);
   grae->SetLineColor(12);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3029 = new TH1F("Graph_Graph3029","",100,0,6.6);
   Graph_Graph3029->SetMinimum(0);
   Graph_Graph3029->SetMaximum(88.59002);
   Graph_Graph3029->SetDirectory(0);
   Graph_Graph3029->SetStats(0);
   Graph_Graph3029->SetLineStyle(0);
   Graph_Graph3029->SetMarkerStyle(20);
   Graph_Graph3029->GetXaxis()->SetLabelFont(42);
   Graph_Graph3029->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3029->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3029->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3029->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3029->GetXaxis()->SetTitleFont(42);
   Graph_Graph3029->GetYaxis()->SetLabelFont(42);
   Graph_Graph3029->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3029->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3029->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3029->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3029->GetYaxis()->SetTitleFont(42);
   Graph_Graph3029->GetZaxis()->SetLabelFont(42);
   Graph_Graph3029->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3029->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3029->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3029->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3029);
   
   grae->Draw("2");
   
   Double_t _fx3030[5] = {
   0.6,
   1.8,
   3,
   4.2,
   5.4};
   Double_t _fy3030[5] = {
   31,
   93,
   43,
   0,
   0};
   Double_t _felx3030[5] = {
   0.6,
   0.6,
   0.6,
   0.6,
   0.6};
   Double_t _fely3030[5] = {
   5.537672,
   9.626478,
   6.531961,
   0,
   0};
   Double_t _fehx3030[5] = {
   0.6,
   0.6,
   0.6,
   0.6,
   0.6};
   Double_t _fehy3030[5] = {
   6.627738,
   10.67847,
   7.608437,
   1.147908,
   1.147908};
   grae = new TGraphAsymmErrors(5,_fx3030,_fy3030,_felx3030,_fehx3030,_fely3030,_fehy3030);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(1);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3030 = new TH1F("Graph_Graph3030","",100,0,6.6);
   Graph_Graph3030->SetMinimum(0);
   Graph_Graph3030->SetMaximum(114.0463);
   Graph_Graph3030->SetDirectory(0);
   Graph_Graph3030->SetStats(0);
   Graph_Graph3030->SetLineStyle(0);
   Graph_Graph3030->SetMarkerStyle(20);
   Graph_Graph3030->GetXaxis()->SetLabelFont(42);
   Graph_Graph3030->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3030->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3030->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3030->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3030->GetXaxis()->SetTitleFont(42);
   Graph_Graph3030->GetYaxis()->SetLabelFont(42);
   Graph_Graph3030->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3030->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3030->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3030->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3030->GetYaxis()->SetTitleFont(42);
   Graph_Graph3030->GetZaxis()->SetLabelFont(42);
   Graph_Graph3030->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3030->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3030->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3030->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3030);
   
   grae->Draw("p0");
   
   TLegend *leg = new TLegend(0.2,0.7,0.8,0.9,NULL,"brNDC");
   leg->SetTextFont(62);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("new_histo_group_Fake_wh3l_wz_13TeV_drllmin3l","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_wz_13TeV_drllmin3l","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_wz_13TeV_drllmin3l","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_wz_13TeV_drllmin3l","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_wz_13TeV_drllmin3l","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_wz_13TeV_drllmin3l","WZ","F");

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
   entry=leg->AddEntry("new_histo_DATA_wh3l_wz_13TeV_drllmin3l","Data","EPL");
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
   entry=leg->AddEntry("new_histo_group_Fake_wh3l_wz_13TeV_drllmin3l","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_wz_13TeV_drllmin3l","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_wz_13TeV_drllmin3l","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_wz_13TeV_drllmin3l","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_wz_13TeV_drllmin3l","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_wz_13TeV_drllmin3l","WZ","F");

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
   entry=leg->AddEntry("new_histo_DATA_wh3l_wz_13TeV_drllmin3l","Data","EPL");
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
   
   TH1F *hframe_copy120 = new TH1F("hframe_copy120","",1000,0,6);
   hframe_copy120->SetMinimum(0);
   hframe_copy120->SetMaximum(256.6091);
   hframe_copy120->SetDirectory(0);
   hframe_copy120->SetStats(0);
   hframe_copy120->SetLineStyle(0);
   hframe_copy120->SetMarkerStyle(20);
   hframe_copy120->GetXaxis()->SetTitle("min #Delta Rm_{ll} [GeV]");
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
   ccwh3l_wz_13TeV_drllmin3l->Modified();
   ccwh3l_wz_13TeV_drllmin3l->cd();
   ccwh3l_wz_13TeV_drllmin3l->SetSelected(ccwh3l_wz_13TeV_drllmin3l);
}
