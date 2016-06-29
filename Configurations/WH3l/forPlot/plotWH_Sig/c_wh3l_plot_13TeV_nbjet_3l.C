void c_wh3l_plot_13TeV_nbjet_3l()
{
//=========Macro generated from canvas: ccwh3l_plot_13TeV_nbjet_3l/cc
//=========  (Wed Jun 29 01:51:40 2016) by ROOT version6.02/13
   TCanvas *ccwh3l_plot_13TeV_nbjet_3l = new TCanvas("ccwh3l_plot_13TeV_nbjet_3l", "cc",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   ccwh3l_plot_13TeV_nbjet_3l->SetHighLightColor(2);
   ccwh3l_plot_13TeV_nbjet_3l->Range(-1,-9.676812,5.25,64.7602);
   ccwh3l_plot_13TeV_nbjet_3l->SetFillColor(0);
   ccwh3l_plot_13TeV_nbjet_3l->SetBorderMode(0);
   ccwh3l_plot_13TeV_nbjet_3l->SetBorderSize(2);
   ccwh3l_plot_13TeV_nbjet_3l->SetTickx(1);
   ccwh3l_plot_13TeV_nbjet_3l->SetTicky(1);
   ccwh3l_plot_13TeV_nbjet_3l->SetLeftMargin(0.16);
   ccwh3l_plot_13TeV_nbjet_3l->SetRightMargin(0.04);
   ccwh3l_plot_13TeV_nbjet_3l->SetTopMargin(0.05);
   ccwh3l_plot_13TeV_nbjet_3l->SetBottomMargin(0.13);
   ccwh3l_plot_13TeV_nbjet_3l->SetFrameFillStyle(0);
   ccwh3l_plot_13TeV_nbjet_3l->SetFrameBorderMode(0);
   ccwh3l_plot_13TeV_nbjet_3l->SetFrameFillStyle(0);
   ccwh3l_plot_13TeV_nbjet_3l->SetFrameBorderMode(0);
   
   TH1F *hframe161 = new TH1F("hframe161","",1000,0,5);
   hframe161->SetMinimum(0);
   hframe161->SetMaximum(61.03835);
   hframe161->SetDirectory(0);
   hframe161->SetStats(0);
   hframe161->SetLineStyle(0);
   hframe161->SetMarkerStyle(20);
   hframe161->GetXaxis()->SetTitle("N_bJets");
   hframe161->GetXaxis()->SetNdivisions(506);
   hframe161->GetXaxis()->SetLabelFont(42);
   hframe161->GetXaxis()->SetLabelOffset(0.007);
   hframe161->GetXaxis()->SetLabelSize(0.05);
   hframe161->GetXaxis()->SetTitleSize(0.06);
   hframe161->GetXaxis()->SetTitleOffset(0.9);
   hframe161->GetXaxis()->SetTitleFont(42);
   hframe161->GetYaxis()->SetTitle("Events");
   hframe161->GetYaxis()->SetLabelFont(42);
   hframe161->GetYaxis()->SetLabelOffset(0.007);
   hframe161->GetYaxis()->SetLabelSize(0.05);
   hframe161->GetYaxis()->SetTitleSize(0.06);
   hframe161->GetYaxis()->SetTitleOffset(1.25);
   hframe161->GetYaxis()->SetTitleFont(42);
   hframe161->GetZaxis()->SetLabelFont(42);
   hframe161->GetZaxis()->SetLabelOffset(0.007);
   hframe161->GetZaxis()->SetLabelSize(0.05);
   hframe161->GetZaxis()->SetTitleSize(0.06);
   hframe161->GetZaxis()->SetTitleFont(42);
   hframe161->Draw(" ");
   
   THStack *thsBackground_grouped_wh3l_plot_13TeV_nbjet_3l = new THStack();
   thsBackground_grouped_wh3l_plot_13TeV_nbjet_3l->SetName("thsBackground_grouped_wh3l_plot_13TeV_nbjet_3l");
   thsBackground_grouped_wh3l_plot_13TeV_nbjet_3l->SetTitle("thsBackground_grouped_wh3l_plot_13TeV_nbjet_3l");
   
   TH1F *thsBackground_grouped_wh3l_plot_13TeV_nbjet_3l_stack_33 = new TH1F("thsBackground_grouped_wh3l_plot_13TeV_nbjet_3l_stack_33","thsBackground_grouped_wh3l_plot_13TeV_nbjet_3l",5,0,5);
   thsBackground_grouped_wh3l_plot_13TeV_nbjet_3l_stack_33->SetMinimum(0);
   thsBackground_grouped_wh3l_plot_13TeV_nbjet_3l_stack_33->SetMaximum(25.63611);
   thsBackground_grouped_wh3l_plot_13TeV_nbjet_3l_stack_33->SetDirectory(0);
   thsBackground_grouped_wh3l_plot_13TeV_nbjet_3l_stack_33->SetStats(0);
   thsBackground_grouped_wh3l_plot_13TeV_nbjet_3l_stack_33->SetLineStyle(0);
   thsBackground_grouped_wh3l_plot_13TeV_nbjet_3l_stack_33->SetMarkerStyle(20);
   thsBackground_grouped_wh3l_plot_13TeV_nbjet_3l_stack_33->GetXaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_plot_13TeV_nbjet_3l_stack_33->GetXaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_plot_13TeV_nbjet_3l_stack_33->GetXaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_plot_13TeV_nbjet_3l_stack_33->GetXaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_plot_13TeV_nbjet_3l_stack_33->GetXaxis()->SetTitleOffset(0.9);
   thsBackground_grouped_wh3l_plot_13TeV_nbjet_3l_stack_33->GetXaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_plot_13TeV_nbjet_3l_stack_33->GetYaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_plot_13TeV_nbjet_3l_stack_33->GetYaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_plot_13TeV_nbjet_3l_stack_33->GetYaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_plot_13TeV_nbjet_3l_stack_33->GetYaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_plot_13TeV_nbjet_3l_stack_33->GetYaxis()->SetTitleOffset(1.25);
   thsBackground_grouped_wh3l_plot_13TeV_nbjet_3l_stack_33->GetYaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_plot_13TeV_nbjet_3l_stack_33->GetZaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_plot_13TeV_nbjet_3l_stack_33->GetZaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_plot_13TeV_nbjet_3l_stack_33->GetZaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_plot_13TeV_nbjet_3l_stack_33->GetZaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_plot_13TeV_nbjet_3l_stack_33->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_plot_13TeV_nbjet_3l->SetHistogram(thsBackground_grouped_wh3l_plot_13TeV_nbjet_3l_stack_33);
   
   
   TH1D *new_histo_group_Fake_wh3l_plot_13TeV_nbjet_3l162 = new TH1D("new_histo_group_Fake_wh3l_plot_13TeV_nbjet_3l162","histo_Fake",5,0,5);
   new_histo_group_Fake_wh3l_plot_13TeV_nbjet_3l162->SetBinContent(1,10.59456);
   new_histo_group_Fake_wh3l_plot_13TeV_nbjet_3l162->SetBinError(1,2.628293);
   new_histo_group_Fake_wh3l_plot_13TeV_nbjet_3l162->SetEntries(118);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_plot_13TeV_nbjet_3l162->SetFillColor(ci);
   new_histo_group_Fake_wh3l_plot_13TeV_nbjet_3l162->SetFillStyle(3001);

   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_plot_13TeV_nbjet_3l162->SetLineColor(ci);
   new_histo_group_Fake_wh3l_plot_13TeV_nbjet_3l162->GetXaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_plot_13TeV_nbjet_3l162->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_plot_13TeV_nbjet_3l162->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_plot_13TeV_nbjet_3l162->GetXaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_plot_13TeV_nbjet_3l162->GetYaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_plot_13TeV_nbjet_3l162->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_plot_13TeV_nbjet_3l162->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_plot_13TeV_nbjet_3l162->GetYaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_plot_13TeV_nbjet_3l162->GetZaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_plot_13TeV_nbjet_3l162->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_plot_13TeV_nbjet_3l162->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_plot_13TeV_nbjet_3l162->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_plot_13TeV_nbjet_3l->Add(new_histo_group_Fake_wh3l_plot_13TeV_nbjet_3l,"");
   
   TH1D *new_histo_group_WW_wh3l_plot_13TeV_nbjet_3l163 = new TH1D("new_histo_group_WW_wh3l_plot_13TeV_nbjet_3l163","histo_WW",5,0,5);
   new_histo_group_WW_wh3l_plot_13TeV_nbjet_3l163->SetBinContent(1,0.08870193);
   new_histo_group_WW_wh3l_plot_13TeV_nbjet_3l163->SetBinError(1,0.03666076);
   new_histo_group_WW_wh3l_plot_13TeV_nbjet_3l163->SetEntries(6);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_plot_13TeV_nbjet_3l163->SetFillColor(ci);
   new_histo_group_WW_wh3l_plot_13TeV_nbjet_3l163->SetFillStyle(3001);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_plot_13TeV_nbjet_3l163->SetLineColor(ci);
   new_histo_group_WW_wh3l_plot_13TeV_nbjet_3l163->GetXaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_plot_13TeV_nbjet_3l163->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_plot_13TeV_nbjet_3l163->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_plot_13TeV_nbjet_3l163->GetXaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_plot_13TeV_nbjet_3l163->GetYaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_plot_13TeV_nbjet_3l163->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_plot_13TeV_nbjet_3l163->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_plot_13TeV_nbjet_3l163->GetYaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_plot_13TeV_nbjet_3l163->GetZaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_plot_13TeV_nbjet_3l163->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_plot_13TeV_nbjet_3l163->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_plot_13TeV_nbjet_3l163->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_plot_13TeV_nbjet_3l->Add(new_histo_group_WW_wh3l_plot_13TeV_nbjet_3l,"");
   
   TH1D *new_histo_group_VVV_wh3l_plot_13TeV_nbjet_3l164 = new TH1D("new_histo_group_VVV_wh3l_plot_13TeV_nbjet_3l164","histo_VVV",5,0,5);
   new_histo_group_VVV_wh3l_plot_13TeV_nbjet_3l164->SetBinContent(1,0.01352066);
   new_histo_group_VVV_wh3l_plot_13TeV_nbjet_3l164->SetBinError(1,0.00282568);
   new_histo_group_VVV_wh3l_plot_13TeV_nbjet_3l164->SetEntries(25);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_plot_13TeV_nbjet_3l164->SetFillColor(ci);
   new_histo_group_VVV_wh3l_plot_13TeV_nbjet_3l164->SetFillStyle(3001);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_plot_13TeV_nbjet_3l164->SetLineColor(ci);
   new_histo_group_VVV_wh3l_plot_13TeV_nbjet_3l164->GetXaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_plot_13TeV_nbjet_3l164->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_plot_13TeV_nbjet_3l164->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_plot_13TeV_nbjet_3l164->GetXaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_plot_13TeV_nbjet_3l164->GetYaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_plot_13TeV_nbjet_3l164->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_plot_13TeV_nbjet_3l164->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_plot_13TeV_nbjet_3l164->GetYaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_plot_13TeV_nbjet_3l164->GetZaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_plot_13TeV_nbjet_3l164->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_plot_13TeV_nbjet_3l164->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_plot_13TeV_nbjet_3l164->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_plot_13TeV_nbjet_3l->Add(new_histo_group_VVV_wh3l_plot_13TeV_nbjet_3l,"");
   
   TH1D *new_histo_group_Vg_wh3l_plot_13TeV_nbjet_3l165 = new TH1D("new_histo_group_Vg_wh3l_plot_13TeV_nbjet_3l165","histo_Vg",5,0,5);
   new_histo_group_Vg_wh3l_plot_13TeV_nbjet_3l165->SetBinContent(1,2.754018);
   new_histo_group_Vg_wh3l_plot_13TeV_nbjet_3l165->SetBinError(1,0.5797935);
   new_histo_group_Vg_wh3l_plot_13TeV_nbjet_3l165->SetEntries(43);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_plot_13TeV_nbjet_3l165->SetFillColor(ci);
   new_histo_group_Vg_wh3l_plot_13TeV_nbjet_3l165->SetFillStyle(3001);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_plot_13TeV_nbjet_3l165->SetLineColor(ci);
   new_histo_group_Vg_wh3l_plot_13TeV_nbjet_3l165->GetXaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_plot_13TeV_nbjet_3l165->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_plot_13TeV_nbjet_3l165->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_plot_13TeV_nbjet_3l165->GetXaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_plot_13TeV_nbjet_3l165->GetYaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_plot_13TeV_nbjet_3l165->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_plot_13TeV_nbjet_3l165->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_plot_13TeV_nbjet_3l165->GetYaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_plot_13TeV_nbjet_3l165->GetZaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_plot_13TeV_nbjet_3l165->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_plot_13TeV_nbjet_3l165->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_plot_13TeV_nbjet_3l165->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_plot_13TeV_nbjet_3l->Add(new_histo_group_Vg_wh3l_plot_13TeV_nbjet_3l,"");
   
   TH1D *new_histo_group_ZZ_wh3l_plot_13TeV_nbjet_3l166 = new TH1D("new_histo_group_ZZ_wh3l_plot_13TeV_nbjet_3l166","histo_ZZ",5,0,5);
   new_histo_group_ZZ_wh3l_plot_13TeV_nbjet_3l166->SetBinContent(1,0.6466067);
   new_histo_group_ZZ_wh3l_plot_13TeV_nbjet_3l166->SetBinError(1,0.158283);
   new_histo_group_ZZ_wh3l_plot_13TeV_nbjet_3l166->SetEntries(19);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_plot_13TeV_nbjet_3l166->SetFillColor(ci);
   new_histo_group_ZZ_wh3l_plot_13TeV_nbjet_3l166->SetFillStyle(3001);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_plot_13TeV_nbjet_3l166->SetLineColor(ci);
   new_histo_group_ZZ_wh3l_plot_13TeV_nbjet_3l166->GetXaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_plot_13TeV_nbjet_3l166->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_plot_13TeV_nbjet_3l166->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_plot_13TeV_nbjet_3l166->GetXaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_plot_13TeV_nbjet_3l166->GetYaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_plot_13TeV_nbjet_3l166->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_plot_13TeV_nbjet_3l166->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_plot_13TeV_nbjet_3l166->GetYaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_plot_13TeV_nbjet_3l166->GetZaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_plot_13TeV_nbjet_3l166->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_plot_13TeV_nbjet_3l166->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_plot_13TeV_nbjet_3l166->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_plot_13TeV_nbjet_3l->Add(new_histo_group_ZZ_wh3l_plot_13TeV_nbjet_3l,"");
   
   TH1D *new_histo_group_WZ_wh3l_plot_13TeV_nbjet_3l167 = new TH1D("new_histo_group_WZ_wh3l_plot_13TeV_nbjet_3l167","histo_WZ",5,0,5);
   new_histo_group_WZ_wh3l_plot_13TeV_nbjet_3l167->SetBinContent(1,9.476476);
   new_histo_group_WZ_wh3l_plot_13TeV_nbjet_3l167->SetBinError(1,0.2267417);
   new_histo_group_WZ_wh3l_plot_13TeV_nbjet_3l167->SetEntries(1945);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_plot_13TeV_nbjet_3l167->SetFillColor(ci);
   new_histo_group_WZ_wh3l_plot_13TeV_nbjet_3l167->SetFillStyle(3001);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_plot_13TeV_nbjet_3l167->SetLineColor(ci);
   new_histo_group_WZ_wh3l_plot_13TeV_nbjet_3l167->GetXaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_plot_13TeV_nbjet_3l167->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_plot_13TeV_nbjet_3l167->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_plot_13TeV_nbjet_3l167->GetXaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_plot_13TeV_nbjet_3l167->GetYaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_plot_13TeV_nbjet_3l167->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_plot_13TeV_nbjet_3l167->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_plot_13TeV_nbjet_3l167->GetYaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_plot_13TeV_nbjet_3l167->GetZaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_plot_13TeV_nbjet_3l167->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_plot_13TeV_nbjet_3l167->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_plot_13TeV_nbjet_3l167->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_plot_13TeV_nbjet_3l->Add(new_histo_group_WZ_wh3l_plot_13TeV_nbjet_3l,"");
   
   TH1D *new_histo_group_Higgs_wh3l_plot_13TeV_nbjet_3l168 = new TH1D("new_histo_group_Higgs_wh3l_plot_13TeV_nbjet_3l168","histo_H_htt",5,0,5);
   new_histo_group_Higgs_wh3l_plot_13TeV_nbjet_3l168->SetBinContent(1,0.8414597);
   new_histo_group_Higgs_wh3l_plot_13TeV_nbjet_3l168->SetBinError(1,0.03145147);
   new_histo_group_Higgs_wh3l_plot_13TeV_nbjet_3l168->SetEntries(1365);
   new_histo_group_Higgs_wh3l_plot_13TeV_nbjet_3l168->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_plot_13TeV_nbjet_3l168->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_plot_13TeV_nbjet_3l168->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_plot_13TeV_nbjet_3l168->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_plot_13TeV_nbjet_3l168->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_plot_13TeV_nbjet_3l168->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_plot_13TeV_nbjet_3l168->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_plot_13TeV_nbjet_3l168->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_plot_13TeV_nbjet_3l168->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_plot_13TeV_nbjet_3l168->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_plot_13TeV_nbjet_3l168->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_plot_13TeV_nbjet_3l168->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_plot_13TeV_nbjet_3l168->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_plot_13TeV_nbjet_3l168->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_plot_13TeV_nbjet_3l168->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_plot_13TeV_nbjet_3l->Add(new_histo_group_Higgs_wh3l_plot_13TeV_nbjet_3l,"");
   thsBackground_grouped_wh3l_plot_13TeV_nbjet_3l->Draw("hist same");
   
   thsSignal_grouped_wh3l_plot_13TeV_nbjet_3l = new THStack();
   thsSignal_grouped_wh3l_plot_13TeV_nbjet_3l->SetName("thsSignal_grouped_wh3l_plot_13TeV_nbjet_3l");
   thsSignal_grouped_wh3l_plot_13TeV_nbjet_3l->SetTitle("thsSignal_grouped_wh3l_plot_13TeV_nbjet_3l");
   
   TH1F *thsSignal_grouped_wh3l_plot_13TeV_nbjet_3l_stack_34 = new TH1F("thsSignal_grouped_wh3l_plot_13TeV_nbjet_3l_stack_34","thsSignal_grouped_wh3l_plot_13TeV_nbjet_3l",5,0,5);
   thsSignal_grouped_wh3l_plot_13TeV_nbjet_3l_stack_34->SetMinimum(0);
   thsSignal_grouped_wh3l_plot_13TeV_nbjet_3l_stack_34->SetMaximum(0.9165568);
   thsSignal_grouped_wh3l_plot_13TeV_nbjet_3l_stack_34->SetDirectory(0);
   thsSignal_grouped_wh3l_plot_13TeV_nbjet_3l_stack_34->SetStats(0);
   thsSignal_grouped_wh3l_plot_13TeV_nbjet_3l_stack_34->SetLineStyle(0);
   thsSignal_grouped_wh3l_plot_13TeV_nbjet_3l_stack_34->SetMarkerStyle(20);
   thsSignal_grouped_wh3l_plot_13TeV_nbjet_3l_stack_34->GetXaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_plot_13TeV_nbjet_3l_stack_34->GetXaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_plot_13TeV_nbjet_3l_stack_34->GetXaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_plot_13TeV_nbjet_3l_stack_34->GetXaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_plot_13TeV_nbjet_3l_stack_34->GetXaxis()->SetTitleOffset(0.9);
   thsSignal_grouped_wh3l_plot_13TeV_nbjet_3l_stack_34->GetXaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_plot_13TeV_nbjet_3l_stack_34->GetYaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_plot_13TeV_nbjet_3l_stack_34->GetYaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_plot_13TeV_nbjet_3l_stack_34->GetYaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_plot_13TeV_nbjet_3l_stack_34->GetYaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_plot_13TeV_nbjet_3l_stack_34->GetYaxis()->SetTitleOffset(1.25);
   thsSignal_grouped_wh3l_plot_13TeV_nbjet_3l_stack_34->GetYaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_plot_13TeV_nbjet_3l_stack_34->GetZaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_plot_13TeV_nbjet_3l_stack_34->GetZaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_plot_13TeV_nbjet_3l_stack_34->GetZaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_plot_13TeV_nbjet_3l_stack_34->GetZaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_plot_13TeV_nbjet_3l_stack_34->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_plot_13TeV_nbjet_3l->SetHistogram(thsSignal_grouped_wh3l_plot_13TeV_nbjet_3l_stack_34);
   
   
   TH1D *new_histo_group_Higgs_wh3l_plot_13TeV_nbjet_3l169 = new TH1D("new_histo_group_Higgs_wh3l_plot_13TeV_nbjet_3l169","histo_H_htt",5,0,5);
   new_histo_group_Higgs_wh3l_plot_13TeV_nbjet_3l169->SetBinContent(1,0.8414597);
   new_histo_group_Higgs_wh3l_plot_13TeV_nbjet_3l169->SetBinError(1,0.03145147);
   new_histo_group_Higgs_wh3l_plot_13TeV_nbjet_3l169->SetEntries(1365);
   new_histo_group_Higgs_wh3l_plot_13TeV_nbjet_3l169->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_plot_13TeV_nbjet_3l169->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_plot_13TeV_nbjet_3l169->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_plot_13TeV_nbjet_3l169->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_plot_13TeV_nbjet_3l169->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_plot_13TeV_nbjet_3l169->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_plot_13TeV_nbjet_3l169->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_plot_13TeV_nbjet_3l169->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_plot_13TeV_nbjet_3l169->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_plot_13TeV_nbjet_3l169->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_plot_13TeV_nbjet_3l169->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_plot_13TeV_nbjet_3l169->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_plot_13TeV_nbjet_3l169->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_plot_13TeV_nbjet_3l169->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_plot_13TeV_nbjet_3l169->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_plot_13TeV_nbjet_3l->Add(new_histo_group_Higgs_wh3l_plot_13TeV_nbjet_3l,"");
   thsSignal_grouped_wh3l_plot_13TeV_nbjet_3l->Draw("hist same noclear");
   
   Double_t _fx3033[5] = {
   0.5,
   1.5,
   2.5,
   3.5,
   4.5};
   Double_t _fy3033[5] = {
   23.57388,
   0,
   0,
   0,
   0};
   Double_t _felx3033[5] = {
   0.5,
   0.5,
   0.5,
   0.5,
   0.5};
   Double_t _fely3033[5] = {
   5.215787,
   0,
   0,
   0,
   0};
   Double_t _fehx3033[5] = {
   0.5,
   0.5,
   0.5,
   0.5,
   0.5};
   Double_t _fehy3033[5] = {
   5.213952,
   0,
   0,
   0,
   0};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(5,_fx3033,_fy3033,_felx3033,_fehx3033,_fely3033,_fehy3033);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(12);
   grae->SetFillStyle(3004);
   grae->SetLineColor(12);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3033 = new TH1F("Graph_Graph3033","",100,0,5.5);
   Graph_Graph3033->SetMinimum(0);
   Graph_Graph3033->SetMaximum(31.66662);
   Graph_Graph3033->SetDirectory(0);
   Graph_Graph3033->SetStats(0);
   Graph_Graph3033->SetLineStyle(0);
   Graph_Graph3033->SetMarkerStyle(20);
   Graph_Graph3033->GetXaxis()->SetLabelFont(42);
   Graph_Graph3033->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3033->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3033->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3033->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3033->GetXaxis()->SetTitleFont(42);
   Graph_Graph3033->GetYaxis()->SetLabelFont(42);
   Graph_Graph3033->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3033->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3033->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3033->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3033->GetYaxis()->SetTitleFont(42);
   Graph_Graph3033->GetZaxis()->SetLabelFont(42);
   Graph_Graph3033->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3033->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3033->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3033->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3033);
   
   grae->Draw("2");
   
   Double_t _fx3034[5] = {
   0.5,
   1.5,
   2.5,
   3.5,
   4.5};
   Double_t _fy3034[5] = {
   0,
   0,
   0,
   0,
   0};
   Double_t _felx3034[5] = {
   0.5,
   0.5,
   0.5,
   0.5,
   0.5};
   Double_t _fely3034[5] = {
   0,
   0,
   0,
   0,
   0};
   Double_t _fehx3034[5] = {
   0.5,
   0.5,
   0.5,
   0.5,
   0.5};
   Double_t _fehy3034[5] = {
   1.147908,
   1.147908,
   1.147908,
   1.147908,
   1.147908};
   grae = new TGraphAsymmErrors(5,_fx3034,_fy3034,_felx3034,_fehx3034,_fely3034,_fehy3034);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(1);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3034 = new TH1F("Graph_Graph3034","",100,0,5.5);
   Graph_Graph3034->SetMinimum(0);
   Graph_Graph3034->SetMaximum(1.262698);
   Graph_Graph3034->SetDirectory(0);
   Graph_Graph3034->SetStats(0);
   Graph_Graph3034->SetLineStyle(0);
   Graph_Graph3034->SetMarkerStyle(20);
   Graph_Graph3034->GetXaxis()->SetLabelFont(42);
   Graph_Graph3034->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3034->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3034->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3034->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3034->GetXaxis()->SetTitleFont(42);
   Graph_Graph3034->GetYaxis()->SetLabelFont(42);
   Graph_Graph3034->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3034->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3034->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3034->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3034->GetYaxis()->SetTitleFont(42);
   Graph_Graph3034->GetZaxis()->SetLabelFont(42);
   Graph_Graph3034->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3034->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3034->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3034->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3034);
   
   grae->Draw("p0");
   
   TLegend *leg = new TLegend(0.2,0.7,0.8,0.9,NULL,"brNDC");
   leg->SetTextFont(62);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("new_histo_group_Fake_wh3l_plot_13TeV_nbjet_3l","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_plot_13TeV_nbjet_3l","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_plot_13TeV_nbjet_3l","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_plot_13TeV_nbjet_3l","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_plot_13TeV_nbjet_3l","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_plot_13TeV_nbjet_3l","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_plot_13TeV_nbjet_3l","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_plot_13TeV_nbjet_3l","Data","EPL");
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
   entry=leg->AddEntry("new_histo_group_Fake_wh3l_plot_13TeV_nbjet_3l","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_plot_13TeV_nbjet_3l","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_plot_13TeV_nbjet_3l","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_plot_13TeV_nbjet_3l","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_plot_13TeV_nbjet_3l","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_plot_13TeV_nbjet_3l","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_plot_13TeV_nbjet_3l","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_plot_13TeV_nbjet_3l","Data","EPL");
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
   
   TH1F *hframe_copy170 = new TH1F("hframe_copy170","",1000,0,5);
   hframe_copy170->SetMinimum(0);
   hframe_copy170->SetMaximum(61.03835);
   hframe_copy170->SetDirectory(0);
   hframe_copy170->SetStats(0);
   hframe_copy170->SetLineStyle(0);
   hframe_copy170->SetMarkerStyle(20);
   hframe_copy170->GetXaxis()->SetTitle("N_bJets");
   hframe_copy170->GetXaxis()->SetNdivisions(506);
   hframe_copy170->GetXaxis()->SetLabelFont(42);
   hframe_copy170->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy170->GetXaxis()->SetLabelSize(0.05);
   hframe_copy170->GetXaxis()->SetTitleSize(0.06);
   hframe_copy170->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy170->GetXaxis()->SetTitleFont(42);
   hframe_copy170->GetYaxis()->SetTitle("Events");
   hframe_copy170->GetYaxis()->SetLabelFont(42);
   hframe_copy170->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy170->GetYaxis()->SetLabelSize(0.05);
   hframe_copy170->GetYaxis()->SetTitleSize(0.06);
   hframe_copy170->GetYaxis()->SetTitleOffset(1.25);
   hframe_copy170->GetYaxis()->SetTitleFont(42);
   hframe_copy170->GetZaxis()->SetLabelFont(42);
   hframe_copy170->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy170->GetZaxis()->SetLabelSize(0.05);
   hframe_copy170->GetZaxis()->SetTitleSize(0.06);
   hframe_copy170->GetZaxis()->SetTitleFont(42);
   hframe_copy170->Draw("sameaxis");
   ccwh3l_plot_13TeV_nbjet_3l->Modified();
   ccwh3l_plot_13TeV_nbjet_3l->cd();
   ccwh3l_plot_13TeV_nbjet_3l->SetSelected(ccwh3l_plot_13TeV_nbjet_3l);
}
