void c_wh3l_noMET_13TeV_drllmin3l()
{
//=========Macro generated from canvas: ccwh3l_noMET_13TeV_drllmin3l/cc
//=========  (Wed Jun 29 01:51:35 2016) by ROOT version6.02/13
   TCanvas *ccwh3l_noMET_13TeV_drllmin3l = new TCanvas("ccwh3l_noMET_13TeV_drllmin3l", "cc",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   ccwh3l_noMET_13TeV_drllmin3l->SetHighLightColor(2);
   ccwh3l_noMET_13TeV_drllmin3l->Range(-1.2,-25.45143,6.3,170.3288);
   ccwh3l_noMET_13TeV_drllmin3l->SetFillColor(0);
   ccwh3l_noMET_13TeV_drllmin3l->SetBorderMode(0);
   ccwh3l_noMET_13TeV_drllmin3l->SetBorderSize(2);
   ccwh3l_noMET_13TeV_drllmin3l->SetTickx(1);
   ccwh3l_noMET_13TeV_drllmin3l->SetTicky(1);
   ccwh3l_noMET_13TeV_drllmin3l->SetLeftMargin(0.16);
   ccwh3l_noMET_13TeV_drllmin3l->SetRightMargin(0.04);
   ccwh3l_noMET_13TeV_drllmin3l->SetTopMargin(0.05);
   ccwh3l_noMET_13TeV_drllmin3l->SetBottomMargin(0.13);
   ccwh3l_noMET_13TeV_drllmin3l->SetFrameFillStyle(0);
   ccwh3l_noMET_13TeV_drllmin3l->SetFrameBorderMode(0);
   ccwh3l_noMET_13TeV_drllmin3l->SetFrameFillStyle(0);
   ccwh3l_noMET_13TeV_drllmin3l->SetFrameBorderMode(0);
   
   TH1F *hframe51 = new TH1F("hframe51","",1000,0,6);
   hframe51->SetMinimum(0);
   hframe51->SetMaximum(160.5398);
   hframe51->SetDirectory(0);
   hframe51->SetStats(0);
   hframe51->SetLineStyle(0);
   hframe51->SetMarkerStyle(20);
   hframe51->GetXaxis()->SetTitle("min #Delta Rm_{ll} [GeV]");
   hframe51->GetXaxis()->SetNdivisions(506);
   hframe51->GetXaxis()->SetLabelFont(42);
   hframe51->GetXaxis()->SetLabelOffset(0.007);
   hframe51->GetXaxis()->SetLabelSize(0.05);
   hframe51->GetXaxis()->SetTitleSize(0.06);
   hframe51->GetXaxis()->SetTitleOffset(0.9);
   hframe51->GetXaxis()->SetTitleFont(42);
   hframe51->GetYaxis()->SetTitle("Events");
   hframe51->GetYaxis()->SetLabelFont(42);
   hframe51->GetYaxis()->SetLabelOffset(0.007);
   hframe51->GetYaxis()->SetLabelSize(0.05);
   hframe51->GetYaxis()->SetTitleSize(0.06);
   hframe51->GetYaxis()->SetTitleOffset(1.25);
   hframe51->GetYaxis()->SetTitleFont(42);
   hframe51->GetZaxis()->SetLabelFont(42);
   hframe51->GetZaxis()->SetLabelOffset(0.007);
   hframe51->GetZaxis()->SetLabelSize(0.05);
   hframe51->GetZaxis()->SetTitleSize(0.06);
   hframe51->GetZaxis()->SetTitleFont(42);
   hframe51->Draw(" ");
   
   THStack *thsBackground_grouped_wh3l_noMET_13TeV_drllmin3l = new THStack();
   thsBackground_grouped_wh3l_noMET_13TeV_drllmin3l->SetName("thsBackground_grouped_wh3l_noMET_13TeV_drllmin3l");
   thsBackground_grouped_wh3l_noMET_13TeV_drllmin3l->SetTitle("thsBackground_grouped_wh3l_noMET_13TeV_drllmin3l");
   
   TH1F *thsBackground_grouped_wh3l_noMET_13TeV_drllmin3l_stack_11 = new TH1F("thsBackground_grouped_wh3l_noMET_13TeV_drllmin3l_stack_11","thsBackground_grouped_wh3l_noMET_13TeV_drllmin3l",5,0,6);
   thsBackground_grouped_wh3l_noMET_13TeV_drllmin3l_stack_11->SetMinimum(-0.08052602);
   thsBackground_grouped_wh3l_noMET_13TeV_drllmin3l_stack_11->SetMaximum(67.42671);
   thsBackground_grouped_wh3l_noMET_13TeV_drllmin3l_stack_11->SetDirectory(0);
   thsBackground_grouped_wh3l_noMET_13TeV_drllmin3l_stack_11->SetStats(0);
   thsBackground_grouped_wh3l_noMET_13TeV_drllmin3l_stack_11->SetLineStyle(0);
   thsBackground_grouped_wh3l_noMET_13TeV_drllmin3l_stack_11->SetMarkerStyle(20);
   thsBackground_grouped_wh3l_noMET_13TeV_drllmin3l_stack_11->GetXaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_noMET_13TeV_drllmin3l_stack_11->GetXaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_noMET_13TeV_drllmin3l_stack_11->GetXaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_noMET_13TeV_drllmin3l_stack_11->GetXaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_noMET_13TeV_drllmin3l_stack_11->GetXaxis()->SetTitleOffset(0.9);
   thsBackground_grouped_wh3l_noMET_13TeV_drllmin3l_stack_11->GetXaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_noMET_13TeV_drllmin3l_stack_11->GetYaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_noMET_13TeV_drllmin3l_stack_11->GetYaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_noMET_13TeV_drllmin3l_stack_11->GetYaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_noMET_13TeV_drllmin3l_stack_11->GetYaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_noMET_13TeV_drllmin3l_stack_11->GetYaxis()->SetTitleOffset(1.25);
   thsBackground_grouped_wh3l_noMET_13TeV_drllmin3l_stack_11->GetYaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_noMET_13TeV_drllmin3l_stack_11->GetZaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_noMET_13TeV_drllmin3l_stack_11->GetZaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_noMET_13TeV_drllmin3l_stack_11->GetZaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_noMET_13TeV_drllmin3l_stack_11->GetZaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_noMET_13TeV_drllmin3l_stack_11->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_noMET_13TeV_drllmin3l->SetHistogram(thsBackground_grouped_wh3l_noMET_13TeV_drllmin3l_stack_11);
   
   
   TH1D *new_histo_group_Fake_wh3l_noMET_13TeV_drllmin3l52 = new TH1D("new_histo_group_Fake_wh3l_noMET_13TeV_drllmin3l52","histo_Fake",5,0,6);
   new_histo_group_Fake_wh3l_noMET_13TeV_drllmin3l52->SetBinContent(1,10.89831);
   new_histo_group_Fake_wh3l_noMET_13TeV_drllmin3l52->SetBinContent(2,18.76008);
   new_histo_group_Fake_wh3l_noMET_13TeV_drllmin3l52->SetBinContent(3,8.779411);
   new_histo_group_Fake_wh3l_noMET_13TeV_drllmin3l52->SetBinContent(4,-0.04452712);
   new_histo_group_Fake_wh3l_noMET_13TeV_drllmin3l52->SetBinError(1,2.812675);
   new_histo_group_Fake_wh3l_noMET_13TeV_drllmin3l52->SetBinError(2,3.639006);
   new_histo_group_Fake_wh3l_noMET_13TeV_drllmin3l52->SetBinError(3,2.802205);
   new_histo_group_Fake_wh3l_noMET_13TeV_drllmin3l52->SetBinError(4,0.0359989);
   new_histo_group_Fake_wh3l_noMET_13TeV_drllmin3l52->SetEntries(607);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_noMET_13TeV_drllmin3l52->SetFillColor(ci);
   new_histo_group_Fake_wh3l_noMET_13TeV_drllmin3l52->SetFillStyle(3001);

   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_noMET_13TeV_drllmin3l52->SetLineColor(ci);
   new_histo_group_Fake_wh3l_noMET_13TeV_drllmin3l52->GetXaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_noMET_13TeV_drllmin3l52->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_noMET_13TeV_drllmin3l52->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_noMET_13TeV_drllmin3l52->GetXaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_noMET_13TeV_drllmin3l52->GetYaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_noMET_13TeV_drllmin3l52->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_noMET_13TeV_drllmin3l52->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_noMET_13TeV_drllmin3l52->GetYaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_noMET_13TeV_drllmin3l52->GetZaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_noMET_13TeV_drllmin3l52->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_noMET_13TeV_drllmin3l52->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_noMET_13TeV_drllmin3l52->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_noMET_13TeV_drllmin3l->Add(new_histo_group_Fake_wh3l_noMET_13TeV_drllmin3l,"");
   
   TH1D *new_histo_group_WW_wh3l_noMET_13TeV_drllmin3l53 = new TH1D("new_histo_group_WW_wh3l_noMET_13TeV_drllmin3l53","histo_WW",5,0,6);
   new_histo_group_WW_wh3l_noMET_13TeV_drllmin3l53->SetBinContent(1,0.1055485);
   new_histo_group_WW_wh3l_noMET_13TeV_drllmin3l53->SetBinContent(2,0.1115268);
   new_histo_group_WW_wh3l_noMET_13TeV_drllmin3l53->SetBinContent(3,0.04767884);
   new_histo_group_WW_wh3l_noMET_13TeV_drllmin3l53->SetBinContent(4,0.01708511);
   new_histo_group_WW_wh3l_noMET_13TeV_drllmin3l53->SetBinError(1,0.04050949);
   new_histo_group_WW_wh3l_noMET_13TeV_drllmin3l53->SetBinError(2,0.04020708);
   new_histo_group_WW_wh3l_noMET_13TeV_drllmin3l53->SetBinError(3,0.02900388);
   new_histo_group_WW_wh3l_noMET_13TeV_drllmin3l53->SetBinError(4,0.01708511);
   new_histo_group_WW_wh3l_noMET_13TeV_drllmin3l53->SetEntries(19);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_noMET_13TeV_drllmin3l53->SetFillColor(ci);
   new_histo_group_WW_wh3l_noMET_13TeV_drllmin3l53->SetFillStyle(3001);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_noMET_13TeV_drllmin3l53->SetLineColor(ci);
   new_histo_group_WW_wh3l_noMET_13TeV_drllmin3l53->GetXaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_noMET_13TeV_drllmin3l53->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_noMET_13TeV_drllmin3l53->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_noMET_13TeV_drllmin3l53->GetXaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_noMET_13TeV_drllmin3l53->GetYaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_noMET_13TeV_drllmin3l53->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_noMET_13TeV_drllmin3l53->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_noMET_13TeV_drllmin3l53->GetYaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_noMET_13TeV_drllmin3l53->GetZaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_noMET_13TeV_drllmin3l53->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_noMET_13TeV_drllmin3l53->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_noMET_13TeV_drllmin3l53->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_noMET_13TeV_drllmin3l->Add(new_histo_group_WW_wh3l_noMET_13TeV_drllmin3l,"");
   
   TH1D *new_histo_group_VVV_wh3l_noMET_13TeV_drllmin3l54 = new TH1D("new_histo_group_VVV_wh3l_noMET_13TeV_drllmin3l54","histo_VVV",5,0,6);
   new_histo_group_VVV_wh3l_noMET_13TeV_drllmin3l54->SetBinContent(1,0.003717297);
   new_histo_group_VVV_wh3l_noMET_13TeV_drllmin3l54->SetBinContent(2,0.005272642);
   new_histo_group_VVV_wh3l_noMET_13TeV_drllmin3l54->SetBinContent(3,0.005865325);
   new_histo_group_VVV_wh3l_noMET_13TeV_drllmin3l54->SetBinError(1,0.001524739);
   new_histo_group_VVV_wh3l_noMET_13TeV_drllmin3l54->SetBinError(2,0.002070531);
   new_histo_group_VVV_wh3l_noMET_13TeV_drllmin3l54->SetBinError(3,0.001798429);
   new_histo_group_VVV_wh3l_noMET_13TeV_drllmin3l54->SetEntries(29);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_noMET_13TeV_drllmin3l54->SetFillColor(ci);
   new_histo_group_VVV_wh3l_noMET_13TeV_drllmin3l54->SetFillStyle(3001);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_noMET_13TeV_drllmin3l54->SetLineColor(ci);
   new_histo_group_VVV_wh3l_noMET_13TeV_drllmin3l54->GetXaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_noMET_13TeV_drllmin3l54->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_noMET_13TeV_drllmin3l54->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_noMET_13TeV_drllmin3l54->GetXaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_noMET_13TeV_drllmin3l54->GetYaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_noMET_13TeV_drllmin3l54->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_noMET_13TeV_drllmin3l54->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_noMET_13TeV_drllmin3l54->GetYaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_noMET_13TeV_drllmin3l54->GetZaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_noMET_13TeV_drllmin3l54->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_noMET_13TeV_drllmin3l54->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_noMET_13TeV_drllmin3l54->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_noMET_13TeV_drllmin3l->Add(new_histo_group_VVV_wh3l_noMET_13TeV_drllmin3l,"");
   
   TH1D *new_histo_group_Vg_wh3l_noMET_13TeV_drllmin3l55 = new TH1D("new_histo_group_Vg_wh3l_noMET_13TeV_drllmin3l55","histo_Vg",5,0,6);
   new_histo_group_Vg_wh3l_noMET_13TeV_drllmin3l55->SetBinContent(1,15.60781);
   new_histo_group_Vg_wh3l_noMET_13TeV_drllmin3l55->SetBinContent(2,34.04927);
   new_histo_group_Vg_wh3l_noMET_13TeV_drllmin3l55->SetBinContent(3,30.97191);
   new_histo_group_Vg_wh3l_noMET_13TeV_drllmin3l55->SetBinError(1,1.54388);
   new_histo_group_Vg_wh3l_noMET_13TeV_drllmin3l55->SetBinError(2,2.151666);
   new_histo_group_Vg_wh3l_noMET_13TeV_drllmin3l55->SetBinError(3,2.014883);
   new_histo_group_Vg_wh3l_noMET_13TeV_drllmin3l55->SetEntries(1050);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_noMET_13TeV_drllmin3l55->SetFillColor(ci);
   new_histo_group_Vg_wh3l_noMET_13TeV_drllmin3l55->SetFillStyle(3001);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_noMET_13TeV_drllmin3l55->SetLineColor(ci);
   new_histo_group_Vg_wh3l_noMET_13TeV_drllmin3l55->GetXaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_noMET_13TeV_drllmin3l55->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_noMET_13TeV_drllmin3l55->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_noMET_13TeV_drllmin3l55->GetXaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_noMET_13TeV_drllmin3l55->GetYaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_noMET_13TeV_drllmin3l55->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_noMET_13TeV_drllmin3l55->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_noMET_13TeV_drllmin3l55->GetYaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_noMET_13TeV_drllmin3l55->GetZaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_noMET_13TeV_drllmin3l55->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_noMET_13TeV_drllmin3l55->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_noMET_13TeV_drllmin3l55->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_noMET_13TeV_drllmin3l->Add(new_histo_group_Vg_wh3l_noMET_13TeV_drllmin3l,"");
   
   TH1D *new_histo_group_ZZ_wh3l_noMET_13TeV_drllmin3l56 = new TH1D("new_histo_group_ZZ_wh3l_noMET_13TeV_drllmin3l56","histo_ZZ",5,0,6);
   new_histo_group_ZZ_wh3l_noMET_13TeV_drllmin3l56->SetBinContent(1,1.129513);
   new_histo_group_ZZ_wh3l_noMET_13TeV_drllmin3l56->SetBinContent(2,1.791444);
   new_histo_group_ZZ_wh3l_noMET_13TeV_drllmin3l56->SetBinContent(3,1.015366);
   new_histo_group_ZZ_wh3l_noMET_13TeV_drllmin3l56->SetBinError(1,0.213403);
   new_histo_group_ZZ_wh3l_noMET_13TeV_drllmin3l56->SetBinError(2,0.2708972);
   new_histo_group_ZZ_wh3l_noMET_13TeV_drllmin3l56->SetBinError(3,0.2024969);
   new_histo_group_ZZ_wh3l_noMET_13TeV_drllmin3l56->SetEntries(105);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_noMET_13TeV_drllmin3l56->SetFillColor(ci);
   new_histo_group_ZZ_wh3l_noMET_13TeV_drllmin3l56->SetFillStyle(3001);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_noMET_13TeV_drllmin3l56->SetLineColor(ci);
   new_histo_group_ZZ_wh3l_noMET_13TeV_drllmin3l56->GetXaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_noMET_13TeV_drllmin3l56->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_noMET_13TeV_drllmin3l56->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_noMET_13TeV_drllmin3l56->GetXaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_noMET_13TeV_drllmin3l56->GetYaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_noMET_13TeV_drllmin3l56->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_noMET_13TeV_drllmin3l56->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_noMET_13TeV_drllmin3l56->GetYaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_noMET_13TeV_drllmin3l56->GetZaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_noMET_13TeV_drllmin3l56->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_noMET_13TeV_drllmin3l56->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_noMET_13TeV_drllmin3l56->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_noMET_13TeV_drllmin3l->Add(new_histo_group_ZZ_wh3l_noMET_13TeV_drllmin3l,"");
   
   TH1D *new_histo_group_WZ_wh3l_noMET_13TeV_drllmin3l57 = new TH1D("new_histo_group_WZ_wh3l_noMET_13TeV_drllmin3l57","histo_WZ",5,0,6);
   new_histo_group_WZ_wh3l_noMET_13TeV_drllmin3l57->SetBinContent(1,6.205495);
   new_histo_group_WZ_wh3l_noMET_13TeV_drllmin3l57->SetBinContent(2,8.984273);
   new_histo_group_WZ_wh3l_noMET_13TeV_drllmin3l57->SetBinContent(3,3.924925);
   new_histo_group_WZ_wh3l_noMET_13TeV_drllmin3l57->SetBinContent(4,0.09715364);
   new_histo_group_WZ_wh3l_noMET_13TeV_drllmin3l57->SetBinError(1,0.1831307);
   new_histo_group_WZ_wh3l_noMET_13TeV_drllmin3l57->SetBinError(2,0.2215938);
   new_histo_group_WZ_wh3l_noMET_13TeV_drllmin3l57->SetBinError(3,0.1463561);
   new_histo_group_WZ_wh3l_noMET_13TeV_drllmin3l57->SetBinError(4,0.02415294);
   new_histo_group_WZ_wh3l_noMET_13TeV_drllmin3l57->SetEntries(3898);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_noMET_13TeV_drllmin3l57->SetFillColor(ci);
   new_histo_group_WZ_wh3l_noMET_13TeV_drllmin3l57->SetFillStyle(3001);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_noMET_13TeV_drllmin3l57->SetLineColor(ci);
   new_histo_group_WZ_wh3l_noMET_13TeV_drllmin3l57->GetXaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_noMET_13TeV_drllmin3l57->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_noMET_13TeV_drllmin3l57->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_noMET_13TeV_drllmin3l57->GetXaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_noMET_13TeV_drllmin3l57->GetYaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_noMET_13TeV_drllmin3l57->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_noMET_13TeV_drllmin3l57->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_noMET_13TeV_drllmin3l57->GetYaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_noMET_13TeV_drllmin3l57->GetZaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_noMET_13TeV_drllmin3l57->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_noMET_13TeV_drllmin3l57->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_noMET_13TeV_drllmin3l57->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_noMET_13TeV_drllmin3l->Add(new_histo_group_WZ_wh3l_noMET_13TeV_drllmin3l,"");
   
   TH1D *new_histo_group_Higgs_wh3l_noMET_13TeV_drllmin3l58 = new TH1D("new_histo_group_Higgs_wh3l_noMET_13TeV_drllmin3l58","histo_H_htt",5,0,6);
   new_histo_group_Higgs_wh3l_noMET_13TeV_drllmin3l58->SetBinContent(1,0.6459852);
   new_histo_group_Higgs_wh3l_noMET_13TeV_drllmin3l58->SetBinContent(2,0.51405);
   new_histo_group_Higgs_wh3l_noMET_13TeV_drllmin3l58->SetBinContent(3,0.08046716);
   new_histo_group_Higgs_wh3l_noMET_13TeV_drllmin3l58->SetBinError(1,0.02900668);
   new_histo_group_Higgs_wh3l_noMET_13TeV_drllmin3l58->SetBinError(2,0.0230116);
   new_histo_group_Higgs_wh3l_noMET_13TeV_drllmin3l58->SetBinError(3,0.008087235);
   new_histo_group_Higgs_wh3l_noMET_13TeV_drllmin3l58->SetEntries(2122);
   new_histo_group_Higgs_wh3l_noMET_13TeV_drllmin3l58->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_noMET_13TeV_drllmin3l58->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_noMET_13TeV_drllmin3l58->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_noMET_13TeV_drllmin3l58->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_noMET_13TeV_drllmin3l58->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_noMET_13TeV_drllmin3l58->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_noMET_13TeV_drllmin3l58->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_noMET_13TeV_drllmin3l58->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_noMET_13TeV_drllmin3l58->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_noMET_13TeV_drllmin3l58->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_noMET_13TeV_drllmin3l58->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_noMET_13TeV_drllmin3l58->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_noMET_13TeV_drllmin3l58->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_noMET_13TeV_drllmin3l58->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_noMET_13TeV_drllmin3l58->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_noMET_13TeV_drllmin3l->Add(new_histo_group_Higgs_wh3l_noMET_13TeV_drllmin3l,"");
   thsBackground_grouped_wh3l_noMET_13TeV_drllmin3l->Draw("hist same");
   
   thsSignal_grouped_wh3l_noMET_13TeV_drllmin3l = new THStack();
   thsSignal_grouped_wh3l_noMET_13TeV_drllmin3l->SetName("thsSignal_grouped_wh3l_noMET_13TeV_drllmin3l");
   thsSignal_grouped_wh3l_noMET_13TeV_drllmin3l->SetTitle("thsSignal_grouped_wh3l_noMET_13TeV_drllmin3l");
   
   TH1F *thsSignal_grouped_wh3l_noMET_13TeV_drllmin3l_stack_12 = new TH1F("thsSignal_grouped_wh3l_noMET_13TeV_drllmin3l_stack_12","thsSignal_grouped_wh3l_noMET_13TeV_drllmin3l",5,0,6);
   thsSignal_grouped_wh3l_noMET_13TeV_drllmin3l_stack_12->SetMinimum(0);
   thsSignal_grouped_wh3l_noMET_13TeV_drllmin3l_stack_12->SetMaximum(0.7087415);
   thsSignal_grouped_wh3l_noMET_13TeV_drllmin3l_stack_12->SetDirectory(0);
   thsSignal_grouped_wh3l_noMET_13TeV_drllmin3l_stack_12->SetStats(0);
   thsSignal_grouped_wh3l_noMET_13TeV_drllmin3l_stack_12->SetLineStyle(0);
   thsSignal_grouped_wh3l_noMET_13TeV_drllmin3l_stack_12->SetMarkerStyle(20);
   thsSignal_grouped_wh3l_noMET_13TeV_drllmin3l_stack_12->GetXaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_noMET_13TeV_drllmin3l_stack_12->GetXaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_noMET_13TeV_drllmin3l_stack_12->GetXaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_noMET_13TeV_drllmin3l_stack_12->GetXaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_noMET_13TeV_drllmin3l_stack_12->GetXaxis()->SetTitleOffset(0.9);
   thsSignal_grouped_wh3l_noMET_13TeV_drllmin3l_stack_12->GetXaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_noMET_13TeV_drllmin3l_stack_12->GetYaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_noMET_13TeV_drllmin3l_stack_12->GetYaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_noMET_13TeV_drllmin3l_stack_12->GetYaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_noMET_13TeV_drllmin3l_stack_12->GetYaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_noMET_13TeV_drllmin3l_stack_12->GetYaxis()->SetTitleOffset(1.25);
   thsSignal_grouped_wh3l_noMET_13TeV_drllmin3l_stack_12->GetYaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_noMET_13TeV_drllmin3l_stack_12->GetZaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_noMET_13TeV_drllmin3l_stack_12->GetZaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_noMET_13TeV_drllmin3l_stack_12->GetZaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_noMET_13TeV_drllmin3l_stack_12->GetZaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_noMET_13TeV_drllmin3l_stack_12->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_noMET_13TeV_drllmin3l->SetHistogram(thsSignal_grouped_wh3l_noMET_13TeV_drllmin3l_stack_12);
   
   
   TH1D *new_histo_group_Higgs_wh3l_noMET_13TeV_drllmin3l59 = new TH1D("new_histo_group_Higgs_wh3l_noMET_13TeV_drllmin3l59","histo_H_htt",5,0,6);
   new_histo_group_Higgs_wh3l_noMET_13TeV_drllmin3l59->SetBinContent(1,0.6459852);
   new_histo_group_Higgs_wh3l_noMET_13TeV_drllmin3l59->SetBinContent(2,0.51405);
   new_histo_group_Higgs_wh3l_noMET_13TeV_drllmin3l59->SetBinContent(3,0.08046716);
   new_histo_group_Higgs_wh3l_noMET_13TeV_drllmin3l59->SetBinError(1,0.02900668);
   new_histo_group_Higgs_wh3l_noMET_13TeV_drllmin3l59->SetBinError(2,0.0230116);
   new_histo_group_Higgs_wh3l_noMET_13TeV_drllmin3l59->SetBinError(3,0.008087235);
   new_histo_group_Higgs_wh3l_noMET_13TeV_drllmin3l59->SetEntries(2122);
   new_histo_group_Higgs_wh3l_noMET_13TeV_drllmin3l59->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_noMET_13TeV_drllmin3l59->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_noMET_13TeV_drllmin3l59->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_noMET_13TeV_drllmin3l59->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_noMET_13TeV_drllmin3l59->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_noMET_13TeV_drllmin3l59->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_noMET_13TeV_drllmin3l59->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_noMET_13TeV_drllmin3l59->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_noMET_13TeV_drllmin3l59->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_noMET_13TeV_drllmin3l59->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_noMET_13TeV_drllmin3l59->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_noMET_13TeV_drllmin3l59->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_noMET_13TeV_drllmin3l59->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_noMET_13TeV_drllmin3l59->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_noMET_13TeV_drllmin3l59->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_noMET_13TeV_drllmin3l->Add(new_histo_group_Higgs_wh3l_noMET_13TeV_drllmin3l,"");
   thsSignal_grouped_wh3l_noMET_13TeV_drllmin3l->Draw("hist same noclear");
   
   Double_t _fx3011[5] = {
   0.6,
   1.8,
   3,
   4.2,
   5.4};
   Double_t _fy3011[5] = {
   33.9504,
   63.70187,
   44.74515,
   0.06971163,
   0};
   Double_t _felx3011[5] = {
   0.6,
   0.6,
   0.6,
   0.6,
   0.6};
   Double_t _fely3011[5] = {
   6.215975,
   9.345894,
   6.271265,
   0.07884216,
   0};
   Double_t _fehx3011[5] = {
   0.6,
   0.6,
   0.6,
   0.6,
   0.6};
   Double_t _fehy3011[5] = {
   6.209766,
   9.330155,
   6.261856,
   0.078841,
   0};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(5,_fx3011,_fy3011,_felx3011,_fehx3011,_fely3011,_fehy3011);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(12);
   grae->SetFillStyle(3004);
   grae->SetLineColor(12);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3011 = new TH1F("Graph_Graph3011","",100,0,6.6);
   Graph_Graph3011->SetMinimum(-7.313246);
   Graph_Graph3011->SetMaximum(80.33614);
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
   TLegendEntry *entry=leg->AddEntry("new_histo_group_Fake_wh3l_noMET_13TeV_drllmin3l","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_noMET_13TeV_drllmin3l","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_noMET_13TeV_drllmin3l","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_noMET_13TeV_drllmin3l","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_noMET_13TeV_drllmin3l","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_noMET_13TeV_drllmin3l","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_noMET_13TeV_drllmin3l","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_noMET_13TeV_drllmin3l","Data","EPL");
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
   entry=leg->AddEntry("new_histo_group_Fake_wh3l_noMET_13TeV_drllmin3l","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_noMET_13TeV_drllmin3l","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_noMET_13TeV_drllmin3l","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_noMET_13TeV_drllmin3l","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_noMET_13TeV_drllmin3l","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_noMET_13TeV_drllmin3l","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_noMET_13TeV_drllmin3l","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_noMET_13TeV_drllmin3l","Data","EPL");
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
   
   TH1F *hframe_copy60 = new TH1F("hframe_copy60","",1000,0,6);
   hframe_copy60->SetMinimum(0);
   hframe_copy60->SetMaximum(160.5398);
   hframe_copy60->SetDirectory(0);
   hframe_copy60->SetStats(0);
   hframe_copy60->SetLineStyle(0);
   hframe_copy60->SetMarkerStyle(20);
   hframe_copy60->GetXaxis()->SetTitle("min #Delta Rm_{ll} [GeV]");
   hframe_copy60->GetXaxis()->SetNdivisions(506);
   hframe_copy60->GetXaxis()->SetLabelFont(42);
   hframe_copy60->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy60->GetXaxis()->SetLabelSize(0.05);
   hframe_copy60->GetXaxis()->SetTitleSize(0.06);
   hframe_copy60->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy60->GetXaxis()->SetTitleFont(42);
   hframe_copy60->GetYaxis()->SetTitle("Events");
   hframe_copy60->GetYaxis()->SetLabelFont(42);
   hframe_copy60->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy60->GetYaxis()->SetLabelSize(0.05);
   hframe_copy60->GetYaxis()->SetTitleSize(0.06);
   hframe_copy60->GetYaxis()->SetTitleOffset(1.25);
   hframe_copy60->GetYaxis()->SetTitleFont(42);
   hframe_copy60->GetZaxis()->SetLabelFont(42);
   hframe_copy60->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy60->GetZaxis()->SetLabelSize(0.05);
   hframe_copy60->GetZaxis()->SetTitleSize(0.06);
   hframe_copy60->GetZaxis()->SetTitleFont(42);
   hframe_copy60->Draw("sameaxis");
   ccwh3l_noMET_13TeV_drllmin3l->Modified();
   ccwh3l_noMET_13TeV_drllmin3l->cd();
   ccwh3l_noMET_13TeV_drllmin3l->SetSelected(ccwh3l_noMET_13TeV_drllmin3l);
}
