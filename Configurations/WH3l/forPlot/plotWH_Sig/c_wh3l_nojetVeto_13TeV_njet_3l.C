void c_wh3l_nojetVeto_13TeV_njet_3l()
{
//=========Macro generated from canvas: ccwh3l_nojetVeto_13TeV_njet_3l/cc
//=========  (Wed Jun 29 01:33:59 2016) by ROOT version6.02/13
   TCanvas *ccwh3l_nojetVeto_13TeV_njet_3l = new TCanvas("ccwh3l_nojetVeto_13TeV_njet_3l", "cc",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   ccwh3l_nojetVeto_13TeV_njet_3l->SetHighLightColor(2);
   ccwh3l_nojetVeto_13TeV_njet_3l->Range(-1.6,-12.52589,8.4,83.8271);
   ccwh3l_nojetVeto_13TeV_njet_3l->SetFillColor(0);
   ccwh3l_nojetVeto_13TeV_njet_3l->SetBorderMode(0);
   ccwh3l_nojetVeto_13TeV_njet_3l->SetBorderSize(2);
   ccwh3l_nojetVeto_13TeV_njet_3l->SetTickx(1);
   ccwh3l_nojetVeto_13TeV_njet_3l->SetTicky(1);
   ccwh3l_nojetVeto_13TeV_njet_3l->SetLeftMargin(0.16);
   ccwh3l_nojetVeto_13TeV_njet_3l->SetRightMargin(0.04);
   ccwh3l_nojetVeto_13TeV_njet_3l->SetTopMargin(0.05);
   ccwh3l_nojetVeto_13TeV_njet_3l->SetBottomMargin(0.13);
   ccwh3l_nojetVeto_13TeV_njet_3l->SetFrameFillStyle(0);
   ccwh3l_nojetVeto_13TeV_njet_3l->SetFrameBorderMode(0);
   ccwh3l_nojetVeto_13TeV_njet_3l->SetFrameFillStyle(0);
   ccwh3l_nojetVeto_13TeV_njet_3l->SetFrameBorderMode(0);
   
   TH1F *hframe201 = new TH1F("hframe201","",1000,0,8);
   hframe201->SetMinimum(0);
   hframe201->SetMaximum(79.00945);
   hframe201->SetDirectory(0);
   hframe201->SetStats(0);
   hframe201->SetLineStyle(0);
   hframe201->SetMarkerStyle(20);
   hframe201->GetXaxis()->SetTitle("N_Jets");
   hframe201->GetXaxis()->SetNdivisions(506);
   hframe201->GetXaxis()->SetLabelFont(42);
   hframe201->GetXaxis()->SetLabelOffset(0.007);
   hframe201->GetXaxis()->SetLabelSize(0.05);
   hframe201->GetXaxis()->SetTitleSize(0.06);
   hframe201->GetXaxis()->SetTitleOffset(0.9);
   hframe201->GetXaxis()->SetTitleFont(42);
   hframe201->GetYaxis()->SetTitle("Events");
   hframe201->GetYaxis()->SetLabelFont(42);
   hframe201->GetYaxis()->SetLabelOffset(0.007);
   hframe201->GetYaxis()->SetLabelSize(0.05);
   hframe201->GetYaxis()->SetTitleSize(0.06);
   hframe201->GetYaxis()->SetTitleOffset(1.25);
   hframe201->GetYaxis()->SetTitleFont(42);
   hframe201->GetZaxis()->SetLabelFont(42);
   hframe201->GetZaxis()->SetLabelOffset(0.007);
   hframe201->GetZaxis()->SetLabelSize(0.05);
   hframe201->GetZaxis()->SetTitleSize(0.06);
   hframe201->GetZaxis()->SetTitleFont(42);
   hframe201->Draw(" ");
   
   THStack *thsBackground_grouped_wh3l_nojetVeto_13TeV_njet_3l = new THStack();
   thsBackground_grouped_wh3l_nojetVeto_13TeV_njet_3l->SetName("thsBackground_grouped_wh3l_nojetVeto_13TeV_njet_3l");
   thsBackground_grouped_wh3l_nojetVeto_13TeV_njet_3l->SetTitle("thsBackground_grouped_wh3l_nojetVeto_13TeV_njet_3l");
   
   TH1F *thsBackground_grouped_wh3l_nojetVeto_13TeV_njet_3l_stack_41 = new TH1F("thsBackground_grouped_wh3l_nojetVeto_13TeV_njet_3l_stack_41","thsBackground_grouped_wh3l_nojetVeto_13TeV_njet_3l",8,0,8);
   thsBackground_grouped_wh3l_nojetVeto_13TeV_njet_3l_stack_41->SetMinimum(-0.1222083);
   thsBackground_grouped_wh3l_nojetVeto_13TeV_njet_3l_stack_41->SetMaximum(33.18397);
   thsBackground_grouped_wh3l_nojetVeto_13TeV_njet_3l_stack_41->SetDirectory(0);
   thsBackground_grouped_wh3l_nojetVeto_13TeV_njet_3l_stack_41->SetStats(0);
   thsBackground_grouped_wh3l_nojetVeto_13TeV_njet_3l_stack_41->SetLineStyle(0);
   thsBackground_grouped_wh3l_nojetVeto_13TeV_njet_3l_stack_41->SetMarkerStyle(20);
   thsBackground_grouped_wh3l_nojetVeto_13TeV_njet_3l_stack_41->GetXaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_nojetVeto_13TeV_njet_3l_stack_41->GetXaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_nojetVeto_13TeV_njet_3l_stack_41->GetXaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_nojetVeto_13TeV_njet_3l_stack_41->GetXaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_nojetVeto_13TeV_njet_3l_stack_41->GetXaxis()->SetTitleOffset(0.9);
   thsBackground_grouped_wh3l_nojetVeto_13TeV_njet_3l_stack_41->GetXaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_nojetVeto_13TeV_njet_3l_stack_41->GetYaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_nojetVeto_13TeV_njet_3l_stack_41->GetYaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_nojetVeto_13TeV_njet_3l_stack_41->GetYaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_nojetVeto_13TeV_njet_3l_stack_41->GetYaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_nojetVeto_13TeV_njet_3l_stack_41->GetYaxis()->SetTitleOffset(1.25);
   thsBackground_grouped_wh3l_nojetVeto_13TeV_njet_3l_stack_41->GetYaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_nojetVeto_13TeV_njet_3l_stack_41->GetZaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_nojetVeto_13TeV_njet_3l_stack_41->GetZaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_nojetVeto_13TeV_njet_3l_stack_41->GetZaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_nojetVeto_13TeV_njet_3l_stack_41->GetZaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_nojetVeto_13TeV_njet_3l_stack_41->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_nojetVeto_13TeV_njet_3l->SetHistogram(thsBackground_grouped_wh3l_nojetVeto_13TeV_njet_3l_stack_41);
   
   
   TH1D *new_histo_group_Fake_wh3l_nojetVeto_13TeV_njet_3l202 = new TH1D("new_histo_group_Fake_wh3l_nojetVeto_13TeV_njet_3l202","histo_Fake",8,0,8);
   new_histo_group_Fake_wh3l_nojetVeto_13TeV_njet_3l202->SetBinContent(1,12.75979);
   new_histo_group_Fake_wh3l_nojetVeto_13TeV_njet_3l202->SetBinContent(2,23.02023);
   new_histo_group_Fake_wh3l_nojetVeto_13TeV_njet_3l202->SetBinContent(3,7.766052);
   new_histo_group_Fake_wh3l_nojetVeto_13TeV_njet_3l202->SetBinContent(4,4.069923);
   new_histo_group_Fake_wh3l_nojetVeto_13TeV_njet_3l202->SetBinContent(5,0.2181402);
   new_histo_group_Fake_wh3l_nojetVeto_13TeV_njet_3l202->SetBinContent(6,0.370134);
   new_histo_group_Fake_wh3l_nojetVeto_13TeV_njet_3l202->SetBinContent(7,0.08411871);
   new_histo_group_Fake_wh3l_nojetVeto_13TeV_njet_3l202->SetBinError(1,2.867735);
   new_histo_group_Fake_wh3l_nojetVeto_13TeV_njet_3l202->SetBinError(2,3.566339);
   new_histo_group_Fake_wh3l_nojetVeto_13TeV_njet_3l202->SetBinError(3,2.019324);
   new_histo_group_Fake_wh3l_nojetVeto_13TeV_njet_3l202->SetBinError(4,1.196241);
   new_histo_group_Fake_wh3l_nojetVeto_13TeV_njet_3l202->SetBinError(5,0.3403485);
   new_histo_group_Fake_wh3l_nojetVeto_13TeV_njet_3l202->SetBinError(6,0.4530526);
   new_histo_group_Fake_wh3l_nojetVeto_13TeV_njet_3l202->SetBinError(7,0.1047757);
   new_histo_group_Fake_wh3l_nojetVeto_13TeV_njet_3l202->SetEntries(435);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_nojetVeto_13TeV_njet_3l202->SetFillColor(ci);
   new_histo_group_Fake_wh3l_nojetVeto_13TeV_njet_3l202->SetFillStyle(3001);

   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_nojetVeto_13TeV_njet_3l202->SetLineColor(ci);
   new_histo_group_Fake_wh3l_nojetVeto_13TeV_njet_3l202->GetXaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_nojetVeto_13TeV_njet_3l202->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_nojetVeto_13TeV_njet_3l202->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_nojetVeto_13TeV_njet_3l202->GetXaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_nojetVeto_13TeV_njet_3l202->GetYaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_nojetVeto_13TeV_njet_3l202->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_nojetVeto_13TeV_njet_3l202->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_nojetVeto_13TeV_njet_3l202->GetYaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_nojetVeto_13TeV_njet_3l202->GetZaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_nojetVeto_13TeV_njet_3l202->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_nojetVeto_13TeV_njet_3l202->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_nojetVeto_13TeV_njet_3l202->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_nojetVeto_13TeV_njet_3l->Add(new_histo_group_Fake_wh3l_nojetVeto_13TeV_njet_3l,"");
   
   TH1D *new_histo_group_WW_wh3l_nojetVeto_13TeV_njet_3l203 = new TH1D("new_histo_group_WW_wh3l_nojetVeto_13TeV_njet_3l203","histo_WW",8,0,8);
   new_histo_group_WW_wh3l_nojetVeto_13TeV_njet_3l203->SetBinContent(1,0.104653);
   new_histo_group_WW_wh3l_nojetVeto_13TeV_njet_3l203->SetBinContent(2,0.09049894);
   new_histo_group_WW_wh3l_nojetVeto_13TeV_njet_3l203->SetBinContent(3,0.06161173);
   new_histo_group_WW_wh3l_nojetVeto_13TeV_njet_3l203->SetBinError(1,0.03998059);
   new_histo_group_WW_wh3l_nojetVeto_13TeV_njet_3l203->SetBinError(2,0.03891303);
   new_histo_group_WW_wh3l_nojetVeto_13TeV_njet_3l203->SetBinError(3,0.03099825);
   new_histo_group_WW_wh3l_nojetVeto_13TeV_njet_3l203->SetEntries(17);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_nojetVeto_13TeV_njet_3l203->SetFillColor(ci);
   new_histo_group_WW_wh3l_nojetVeto_13TeV_njet_3l203->SetFillStyle(3001);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_nojetVeto_13TeV_njet_3l203->SetLineColor(ci);
   new_histo_group_WW_wh3l_nojetVeto_13TeV_njet_3l203->GetXaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_nojetVeto_13TeV_njet_3l203->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_nojetVeto_13TeV_njet_3l203->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_nojetVeto_13TeV_njet_3l203->GetXaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_nojetVeto_13TeV_njet_3l203->GetYaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_nojetVeto_13TeV_njet_3l203->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_nojetVeto_13TeV_njet_3l203->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_nojetVeto_13TeV_njet_3l203->GetYaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_nojetVeto_13TeV_njet_3l203->GetZaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_nojetVeto_13TeV_njet_3l203->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_nojetVeto_13TeV_njet_3l203->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_nojetVeto_13TeV_njet_3l203->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_nojetVeto_13TeV_njet_3l->Add(new_histo_group_WW_wh3l_nojetVeto_13TeV_njet_3l,"");
   
   TH1D *new_histo_group_VVV_wh3l_nojetVeto_13TeV_njet_3l204 = new TH1D("new_histo_group_VVV_wh3l_nojetVeto_13TeV_njet_3l204","histo_VVV",8,0,8);
   new_histo_group_VVV_wh3l_nojetVeto_13TeV_njet_3l204->SetBinContent(1,0.01352066);
   new_histo_group_VVV_wh3l_nojetVeto_13TeV_njet_3l204->SetBinContent(2,0.01097194);
   new_histo_group_VVV_wh3l_nojetVeto_13TeV_njet_3l204->SetBinContent(3,0.01265768);
   new_histo_group_VVV_wh3l_nojetVeto_13TeV_njet_3l204->SetBinContent(4,0.003238794);
   new_histo_group_VVV_wh3l_nojetVeto_13TeV_njet_3l204->SetBinContent(5,0.001971675);
   new_histo_group_VVV_wh3l_nojetVeto_13TeV_njet_3l204->SetBinContent(6,0.001144972);
   new_histo_group_VVV_wh3l_nojetVeto_13TeV_njet_3l204->SetBinError(1,0.00282568);
   new_histo_group_VVV_wh3l_nojetVeto_13TeV_njet_3l204->SetBinError(2,0.002686441);
   new_histo_group_VVV_wh3l_nojetVeto_13TeV_njet_3l204->SetBinError(3,0.002868949);
   new_histo_group_VVV_wh3l_nojetVeto_13TeV_njet_3l204->SetBinError(4,0.001289643);
   new_histo_group_VVV_wh3l_nojetVeto_13TeV_njet_3l204->SetBinError(5,0.00111343);
   new_histo_group_VVV_wh3l_nojetVeto_13TeV_njet_3l204->SetBinError(6,0.0007155849);
   new_histo_group_VVV_wh3l_nojetVeto_13TeV_njet_3l204->SetEntries(83);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_nojetVeto_13TeV_njet_3l204->SetFillColor(ci);
   new_histo_group_VVV_wh3l_nojetVeto_13TeV_njet_3l204->SetFillStyle(3001);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_nojetVeto_13TeV_njet_3l204->SetLineColor(ci);
   new_histo_group_VVV_wh3l_nojetVeto_13TeV_njet_3l204->GetXaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_nojetVeto_13TeV_njet_3l204->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_nojetVeto_13TeV_njet_3l204->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_nojetVeto_13TeV_njet_3l204->GetXaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_nojetVeto_13TeV_njet_3l204->GetYaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_nojetVeto_13TeV_njet_3l204->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_nojetVeto_13TeV_njet_3l204->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_nojetVeto_13TeV_njet_3l204->GetYaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_nojetVeto_13TeV_njet_3l204->GetZaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_nojetVeto_13TeV_njet_3l204->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_nojetVeto_13TeV_njet_3l204->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_nojetVeto_13TeV_njet_3l204->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_nojetVeto_13TeV_njet_3l->Add(new_histo_group_VVV_wh3l_nojetVeto_13TeV_njet_3l,"");
   
   TH1D *new_histo_group_Vg_wh3l_nojetVeto_13TeV_njet_3l205 = new TH1D("new_histo_group_Vg_wh3l_nojetVeto_13TeV_njet_3l205","histo_Vg",8,0,8);
   new_histo_group_Vg_wh3l_nojetVeto_13TeV_njet_3l205->SetBinContent(1,2.754018);
   new_histo_group_Vg_wh3l_nojetVeto_13TeV_njet_3l205->SetBinContent(2,1.222327);
   new_histo_group_Vg_wh3l_nojetVeto_13TeV_njet_3l205->SetBinContent(3,0.1276499);
   new_histo_group_Vg_wh3l_nojetVeto_13TeV_njet_3l205->SetBinContent(4,0.1646903);
   new_histo_group_Vg_wh3l_nojetVeto_13TeV_njet_3l205->SetBinError(1,0.5797935);
   new_histo_group_Vg_wh3l_nojetVeto_13TeV_njet_3l205->SetBinError(2,0.4026597);
   new_histo_group_Vg_wh3l_nojetVeto_13TeV_njet_3l205->SetBinError(3,0.2097751);
   new_histo_group_Vg_wh3l_nojetVeto_13TeV_njet_3l205->SetBinError(4,0.1186363);
   new_histo_group_Vg_wh3l_nojetVeto_13TeV_njet_3l205->SetEntries(69);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_nojetVeto_13TeV_njet_3l205->SetFillColor(ci);
   new_histo_group_Vg_wh3l_nojetVeto_13TeV_njet_3l205->SetFillStyle(3001);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_nojetVeto_13TeV_njet_3l205->SetLineColor(ci);
   new_histo_group_Vg_wh3l_nojetVeto_13TeV_njet_3l205->GetXaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_nojetVeto_13TeV_njet_3l205->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_nojetVeto_13TeV_njet_3l205->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_nojetVeto_13TeV_njet_3l205->GetXaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_nojetVeto_13TeV_njet_3l205->GetYaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_nojetVeto_13TeV_njet_3l205->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_nojetVeto_13TeV_njet_3l205->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_nojetVeto_13TeV_njet_3l205->GetYaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_nojetVeto_13TeV_njet_3l205->GetZaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_nojetVeto_13TeV_njet_3l205->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_nojetVeto_13TeV_njet_3l205->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_nojetVeto_13TeV_njet_3l205->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_nojetVeto_13TeV_njet_3l->Add(new_histo_group_Vg_wh3l_nojetVeto_13TeV_njet_3l,"");
   
   TH1D *new_histo_group_ZZ_wh3l_nojetVeto_13TeV_njet_3l206 = new TH1D("new_histo_group_ZZ_wh3l_nojetVeto_13TeV_njet_3l206","histo_ZZ",8,0,8);
   new_histo_group_ZZ_wh3l_nojetVeto_13TeV_njet_3l206->SetBinContent(1,0.6599299);
   new_histo_group_ZZ_wh3l_nojetVeto_13TeV_njet_3l206->SetBinContent(2,0.7130099);
   new_histo_group_ZZ_wh3l_nojetVeto_13TeV_njet_3l206->SetBinContent(3,0.1713434);
   new_histo_group_ZZ_wh3l_nojetVeto_13TeV_njet_3l206->SetBinContent(4,0.04400699);
   new_histo_group_ZZ_wh3l_nojetVeto_13TeV_njet_3l206->SetBinError(1,0.1588427);
   new_histo_group_ZZ_wh3l_nojetVeto_13TeV_njet_3l206->SetBinError(2,0.1746192);
   new_histo_group_ZZ_wh3l_nojetVeto_13TeV_njet_3l206->SetBinError(3,0.08085509);
   new_histo_group_ZZ_wh3l_nojetVeto_13TeV_njet_3l206->SetBinError(4,0.04400699);
   new_histo_group_ZZ_wh3l_nojetVeto_13TeV_njet_3l206->SetEntries(44);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_nojetVeto_13TeV_njet_3l206->SetFillColor(ci);
   new_histo_group_ZZ_wh3l_nojetVeto_13TeV_njet_3l206->SetFillStyle(3001);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_nojetVeto_13TeV_njet_3l206->SetLineColor(ci);
   new_histo_group_ZZ_wh3l_nojetVeto_13TeV_njet_3l206->GetXaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_nojetVeto_13TeV_njet_3l206->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_nojetVeto_13TeV_njet_3l206->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_nojetVeto_13TeV_njet_3l206->GetXaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_nojetVeto_13TeV_njet_3l206->GetYaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_nojetVeto_13TeV_njet_3l206->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_nojetVeto_13TeV_njet_3l206->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_nojetVeto_13TeV_njet_3l206->GetYaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_nojetVeto_13TeV_njet_3l206->GetZaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_nojetVeto_13TeV_njet_3l206->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_nojetVeto_13TeV_njet_3l206->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_nojetVeto_13TeV_njet_3l206->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_nojetVeto_13TeV_njet_3l->Add(new_histo_group_ZZ_wh3l_nojetVeto_13TeV_njet_3l,"");
   
   TH1D *new_histo_group_WZ_wh3l_nojetVeto_13TeV_njet_3l207 = new TH1D("new_histo_group_WZ_wh3l_nojetVeto_13TeV_njet_3l207","histo_WZ",8,0,8);
   new_histo_group_WZ_wh3l_nojetVeto_13TeV_njet_3l207->SetBinContent(1,9.481177);
   new_histo_group_WZ_wh3l_nojetVeto_13TeV_njet_3l207->SetBinContent(2,6.250547);
   new_histo_group_WZ_wh3l_nojetVeto_13TeV_njet_3l207->SetBinContent(3,1.901105);
   new_histo_group_WZ_wh3l_nojetVeto_13TeV_njet_3l207->SetBinContent(4,0.5474985);
   new_histo_group_WZ_wh3l_nojetVeto_13TeV_njet_3l207->SetBinContent(5,0.1381995);
   new_histo_group_WZ_wh3l_nojetVeto_13TeV_njet_3l207->SetBinContent(6,0.03904395);
   new_histo_group_WZ_wh3l_nojetVeto_13TeV_njet_3l207->SetBinContent(7,0.005167351);
   new_histo_group_WZ_wh3l_nojetVeto_13TeV_njet_3l207->SetBinError(1,0.2267714);
   new_histo_group_WZ_wh3l_nojetVeto_13TeV_njet_3l207->SetBinError(2,0.1842591);
   new_histo_group_WZ_wh3l_nojetVeto_13TeV_njet_3l207->SetBinError(3,0.1020089);
   new_histo_group_WZ_wh3l_nojetVeto_13TeV_njet_3l207->SetBinError(4,0.05415135);
   new_histo_group_WZ_wh3l_nojetVeto_13TeV_njet_3l207->SetBinError(5,0.02767061);
   new_histo_group_WZ_wh3l_nojetVeto_13TeV_njet_3l207->SetBinError(6,0.01418347);
   new_histo_group_WZ_wh3l_nojetVeto_13TeV_njet_3l207->SetBinError(7,0.005167351);
   new_histo_group_WZ_wh3l_nojetVeto_13TeV_njet_3l207->SetEntries(3754);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_nojetVeto_13TeV_njet_3l207->SetFillColor(ci);
   new_histo_group_WZ_wh3l_nojetVeto_13TeV_njet_3l207->SetFillStyle(3001);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_nojetVeto_13TeV_njet_3l207->SetLineColor(ci);
   new_histo_group_WZ_wh3l_nojetVeto_13TeV_njet_3l207->GetXaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_nojetVeto_13TeV_njet_3l207->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_nojetVeto_13TeV_njet_3l207->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_nojetVeto_13TeV_njet_3l207->GetXaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_nojetVeto_13TeV_njet_3l207->GetYaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_nojetVeto_13TeV_njet_3l207->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_nojetVeto_13TeV_njet_3l207->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_nojetVeto_13TeV_njet_3l207->GetYaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_nojetVeto_13TeV_njet_3l207->GetZaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_nojetVeto_13TeV_njet_3l207->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_nojetVeto_13TeV_njet_3l207->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_nojetVeto_13TeV_njet_3l207->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_nojetVeto_13TeV_njet_3l->Add(new_histo_group_WZ_wh3l_nojetVeto_13TeV_njet_3l,"");
   
   TH1D *new_histo_group_Higgs_wh3l_nojetVeto_13TeV_njet_3l208 = new TH1D("new_histo_group_Higgs_wh3l_nojetVeto_13TeV_njet_3l208","histo_H_htt",8,0,8);
   new_histo_group_Higgs_wh3l_nojetVeto_13TeV_njet_3l208->SetBinContent(1,0.8439923);
   new_histo_group_Higgs_wh3l_nojetVeto_13TeV_njet_3l208->SetBinContent(2,0.2961951);
   new_histo_group_Higgs_wh3l_nojetVeto_13TeV_njet_3l208->SetBinContent(3,0.08997212);
   new_histo_group_Higgs_wh3l_nojetVeto_13TeV_njet_3l208->SetBinContent(4,0.03211983);
   new_histo_group_Higgs_wh3l_nojetVeto_13TeV_njet_3l208->SetBinContent(5,0.009321195);
   new_histo_group_Higgs_wh3l_nojetVeto_13TeV_njet_3l208->SetBinContent(6,0.002353889);
   new_histo_group_Higgs_wh3l_nojetVeto_13TeV_njet_3l208->SetBinContent(7,0.000869131);
   new_histo_group_Higgs_wh3l_nojetVeto_13TeV_njet_3l208->SetBinError(1,0.03151019);
   new_histo_group_Higgs_wh3l_nojetVeto_13TeV_njet_3l208->SetBinError(2,0.01769709);
   new_histo_group_Higgs_wh3l_nojetVeto_13TeV_njet_3l208->SetBinError(3,0.008784232);
   new_histo_group_Higgs_wh3l_nojetVeto_13TeV_njet_3l208->SetBinError(4,0.005507744);
   new_histo_group_Higgs_wh3l_nojetVeto_13TeV_njet_3l208->SetBinError(5,0.002894159);
   new_histo_group_Higgs_wh3l_nojetVeto_13TeV_njet_3l208->SetBinError(6,0.0009362969);
   new_histo_group_Higgs_wh3l_nojetVeto_13TeV_njet_3l208->SetBinError(7,0.0006205847);
   new_histo_group_Higgs_wh3l_nojetVeto_13TeV_njet_3l208->SetEntries(2131);
   new_histo_group_Higgs_wh3l_nojetVeto_13TeV_njet_3l208->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_nojetVeto_13TeV_njet_3l208->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_nojetVeto_13TeV_njet_3l208->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_nojetVeto_13TeV_njet_3l208->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_nojetVeto_13TeV_njet_3l208->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_nojetVeto_13TeV_njet_3l208->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_nojetVeto_13TeV_njet_3l208->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_nojetVeto_13TeV_njet_3l208->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_nojetVeto_13TeV_njet_3l208->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_nojetVeto_13TeV_njet_3l208->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_nojetVeto_13TeV_njet_3l208->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_nojetVeto_13TeV_njet_3l208->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_nojetVeto_13TeV_njet_3l208->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_nojetVeto_13TeV_njet_3l208->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_nojetVeto_13TeV_njet_3l208->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_nojetVeto_13TeV_njet_3l->Add(new_histo_group_Higgs_wh3l_nojetVeto_13TeV_njet_3l,"");
   thsBackground_grouped_wh3l_nojetVeto_13TeV_njet_3l->Draw("hist same");
   
   thsSignal_grouped_wh3l_nojetVeto_13TeV_njet_3l = new THStack();
   thsSignal_grouped_wh3l_nojetVeto_13TeV_njet_3l->SetName("thsSignal_grouped_wh3l_nojetVeto_13TeV_njet_3l");
   thsSignal_grouped_wh3l_nojetVeto_13TeV_njet_3l->SetTitle("thsSignal_grouped_wh3l_nojetVeto_13TeV_njet_3l");
   
   TH1F *thsSignal_grouped_wh3l_nojetVeto_13TeV_njet_3l_stack_42 = new TH1F("thsSignal_grouped_wh3l_nojetVeto_13TeV_njet_3l_stack_42","thsSignal_grouped_wh3l_nojetVeto_13TeV_njet_3l",8,0,8);
   thsSignal_grouped_wh3l_nojetVeto_13TeV_njet_3l_stack_42->SetMinimum(0);
   thsSignal_grouped_wh3l_nojetVeto_13TeV_njet_3l_stack_42->SetMaximum(0.9192777);
   thsSignal_grouped_wh3l_nojetVeto_13TeV_njet_3l_stack_42->SetDirectory(0);
   thsSignal_grouped_wh3l_nojetVeto_13TeV_njet_3l_stack_42->SetStats(0);
   thsSignal_grouped_wh3l_nojetVeto_13TeV_njet_3l_stack_42->SetLineStyle(0);
   thsSignal_grouped_wh3l_nojetVeto_13TeV_njet_3l_stack_42->SetMarkerStyle(20);
   thsSignal_grouped_wh3l_nojetVeto_13TeV_njet_3l_stack_42->GetXaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_nojetVeto_13TeV_njet_3l_stack_42->GetXaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_nojetVeto_13TeV_njet_3l_stack_42->GetXaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_nojetVeto_13TeV_njet_3l_stack_42->GetXaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_nojetVeto_13TeV_njet_3l_stack_42->GetXaxis()->SetTitleOffset(0.9);
   thsSignal_grouped_wh3l_nojetVeto_13TeV_njet_3l_stack_42->GetXaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_nojetVeto_13TeV_njet_3l_stack_42->GetYaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_nojetVeto_13TeV_njet_3l_stack_42->GetYaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_nojetVeto_13TeV_njet_3l_stack_42->GetYaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_nojetVeto_13TeV_njet_3l_stack_42->GetYaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_nojetVeto_13TeV_njet_3l_stack_42->GetYaxis()->SetTitleOffset(1.25);
   thsSignal_grouped_wh3l_nojetVeto_13TeV_njet_3l_stack_42->GetYaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_nojetVeto_13TeV_njet_3l_stack_42->GetZaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_nojetVeto_13TeV_njet_3l_stack_42->GetZaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_nojetVeto_13TeV_njet_3l_stack_42->GetZaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_nojetVeto_13TeV_njet_3l_stack_42->GetZaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_nojetVeto_13TeV_njet_3l_stack_42->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_nojetVeto_13TeV_njet_3l->SetHistogram(thsSignal_grouped_wh3l_nojetVeto_13TeV_njet_3l_stack_42);
   
   
   TH1D *new_histo_group_Higgs_wh3l_nojetVeto_13TeV_njet_3l209 = new TH1D("new_histo_group_Higgs_wh3l_nojetVeto_13TeV_njet_3l209","histo_H_htt",8,0,8);
   new_histo_group_Higgs_wh3l_nojetVeto_13TeV_njet_3l209->SetBinContent(1,0.8439923);
   new_histo_group_Higgs_wh3l_nojetVeto_13TeV_njet_3l209->SetBinContent(2,0.2961951);
   new_histo_group_Higgs_wh3l_nojetVeto_13TeV_njet_3l209->SetBinContent(3,0.08997212);
   new_histo_group_Higgs_wh3l_nojetVeto_13TeV_njet_3l209->SetBinContent(4,0.03211983);
   new_histo_group_Higgs_wh3l_nojetVeto_13TeV_njet_3l209->SetBinContent(5,0.009321195);
   new_histo_group_Higgs_wh3l_nojetVeto_13TeV_njet_3l209->SetBinContent(6,0.002353889);
   new_histo_group_Higgs_wh3l_nojetVeto_13TeV_njet_3l209->SetBinContent(7,0.000869131);
   new_histo_group_Higgs_wh3l_nojetVeto_13TeV_njet_3l209->SetBinError(1,0.03151019);
   new_histo_group_Higgs_wh3l_nojetVeto_13TeV_njet_3l209->SetBinError(2,0.01769709);
   new_histo_group_Higgs_wh3l_nojetVeto_13TeV_njet_3l209->SetBinError(3,0.008784232);
   new_histo_group_Higgs_wh3l_nojetVeto_13TeV_njet_3l209->SetBinError(4,0.005507744);
   new_histo_group_Higgs_wh3l_nojetVeto_13TeV_njet_3l209->SetBinError(5,0.002894159);
   new_histo_group_Higgs_wh3l_nojetVeto_13TeV_njet_3l209->SetBinError(6,0.0009362969);
   new_histo_group_Higgs_wh3l_nojetVeto_13TeV_njet_3l209->SetBinError(7,0.0006205847);
   new_histo_group_Higgs_wh3l_nojetVeto_13TeV_njet_3l209->SetEntries(2131);
   new_histo_group_Higgs_wh3l_nojetVeto_13TeV_njet_3l209->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_nojetVeto_13TeV_njet_3l209->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_nojetVeto_13TeV_njet_3l209->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_nojetVeto_13TeV_njet_3l209->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_nojetVeto_13TeV_njet_3l209->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_nojetVeto_13TeV_njet_3l209->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_nojetVeto_13TeV_njet_3l209->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_nojetVeto_13TeV_njet_3l209->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_nojetVeto_13TeV_njet_3l209->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_nojetVeto_13TeV_njet_3l209->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_nojetVeto_13TeV_njet_3l209->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_nojetVeto_13TeV_njet_3l209->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_nojetVeto_13TeV_njet_3l209->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_nojetVeto_13TeV_njet_3l209->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_nojetVeto_13TeV_njet_3l209->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_nojetVeto_13TeV_njet_3l->Add(new_histo_group_Higgs_wh3l_nojetVeto_13TeV_njet_3l,"");
   thsSignal_grouped_wh3l_nojetVeto_13TeV_njet_3l->Draw("hist same noclear");
   
   Double_t _fx3041[8] = {
   0.5,
   1.5,
   2.5,
   3.5,
   4.5,
   5.5,
   6.5,
   7.5};
   Double_t _fy3041[8] = {
   25.77309,
   31.30759,
   10.04042,
   4.829357,
   0.3583113,
   0.4103229,
   0.08928606,
   0};
   Double_t _felx3041[8] = {
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5};
   Double_t _fely3041[8] = {
   5.93524,
   9.170935,
   3.603075,
   2.007559,
   0.2585031,
   0.4062431,
   0.09401534,
   0};
   Double_t _fehx3041[8] = {
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5};
   Double_t _fehy3041[8] = {
   5.93362,
   9.17039,
   3.657416,
   2.007594,
   0.3769746,
   0.4855529,
   0.1138171,
   0};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(8,_fx3041,_fy3041,_felx3041,_fehx3041,_fely3041,_fehy3041);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(12);
   grae->SetFillStyle(3004);
   grae->SetLineColor(12);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3041 = new TH1F("Graph_Graph3041","",100,0,8.8);
   Graph_Graph3041->SetMinimum(-4.053);
   Graph_Graph3041->SetMaximum(44.52625);
   Graph_Graph3041->SetDirectory(0);
   Graph_Graph3041->SetStats(0);
   Graph_Graph3041->SetLineStyle(0);
   Graph_Graph3041->SetMarkerStyle(20);
   Graph_Graph3041->GetXaxis()->SetLabelFont(42);
   Graph_Graph3041->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3041->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3041->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3041->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3041->GetXaxis()->SetTitleFont(42);
   Graph_Graph3041->GetYaxis()->SetLabelFont(42);
   Graph_Graph3041->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3041->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3041->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3041->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3041->GetYaxis()->SetTitleFont(42);
   Graph_Graph3041->GetZaxis()->SetLabelFont(42);
   Graph_Graph3041->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3041->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3041->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3041->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3041);
   
   grae->Draw("2");
   
   Double_t _fx3042[8] = {
   0.5,
   1.5,
   2.5,
   3.5,
   4.5,
   5.5,
   6.5,
   7.5};
   Double_t _fy3042[8] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _felx3042[8] = {
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5};
   Double_t _fely3042[8] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fehx3042[8] = {
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5};
   Double_t _fehy3042[8] = {
   1.147908,
   1.147908,
   1.147908,
   1.147908,
   1.147908,
   1.147908,
   1.147908,
   1.147908};
   grae = new TGraphAsymmErrors(8,_fx3042,_fy3042,_felx3042,_fehx3042,_fely3042,_fehy3042);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(1);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3042 = new TH1F("Graph_Graph3042","",100,0,8.8);
   Graph_Graph3042->SetMinimum(0);
   Graph_Graph3042->SetMaximum(1.262698);
   Graph_Graph3042->SetDirectory(0);
   Graph_Graph3042->SetStats(0);
   Graph_Graph3042->SetLineStyle(0);
   Graph_Graph3042->SetMarkerStyle(20);
   Graph_Graph3042->GetXaxis()->SetLabelFont(42);
   Graph_Graph3042->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3042->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3042->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3042->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3042->GetXaxis()->SetTitleFont(42);
   Graph_Graph3042->GetYaxis()->SetLabelFont(42);
   Graph_Graph3042->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3042->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3042->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3042->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3042->GetYaxis()->SetTitleFont(42);
   Graph_Graph3042->GetZaxis()->SetLabelFont(42);
   Graph_Graph3042->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3042->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3042->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3042->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3042);
   
   grae->Draw("p0");
   
   TLegend *leg = new TLegend(0.2,0.7,0.8,0.9,NULL,"brNDC");
   leg->SetTextFont(62);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("new_histo_group_Fake_wh3l_nojetVeto_13TeV_njet_3l","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_nojetVeto_13TeV_njet_3l","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_nojetVeto_13TeV_njet_3l","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_nojetVeto_13TeV_njet_3l","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_nojetVeto_13TeV_njet_3l","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_nojetVeto_13TeV_njet_3l","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_nojetVeto_13TeV_njet_3l","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_nojetVeto_13TeV_njet_3l","Data","EPL");
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
   entry=leg->AddEntry("new_histo_group_Fake_wh3l_nojetVeto_13TeV_njet_3l","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_nojetVeto_13TeV_njet_3l","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_nojetVeto_13TeV_njet_3l","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_nojetVeto_13TeV_njet_3l","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_nojetVeto_13TeV_njet_3l","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_nojetVeto_13TeV_njet_3l","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_nojetVeto_13TeV_njet_3l","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_nojetVeto_13TeV_njet_3l","Data","EPL");
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
   
   TH1F *hframe_copy210 = new TH1F("hframe_copy210","",1000,0,8);
   hframe_copy210->SetMinimum(0);
   hframe_copy210->SetMaximum(79.00945);
   hframe_copy210->SetDirectory(0);
   hframe_copy210->SetStats(0);
   hframe_copy210->SetLineStyle(0);
   hframe_copy210->SetMarkerStyle(20);
   hframe_copy210->GetXaxis()->SetTitle("N_Jets");
   hframe_copy210->GetXaxis()->SetNdivisions(506);
   hframe_copy210->GetXaxis()->SetLabelFont(42);
   hframe_copy210->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy210->GetXaxis()->SetLabelSize(0.05);
   hframe_copy210->GetXaxis()->SetTitleSize(0.06);
   hframe_copy210->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy210->GetXaxis()->SetTitleFont(42);
   hframe_copy210->GetYaxis()->SetTitle("Events");
   hframe_copy210->GetYaxis()->SetLabelFont(42);
   hframe_copy210->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy210->GetYaxis()->SetLabelSize(0.05);
   hframe_copy210->GetYaxis()->SetTitleSize(0.06);
   hframe_copy210->GetYaxis()->SetTitleOffset(1.25);
   hframe_copy210->GetYaxis()->SetTitleFont(42);
   hframe_copy210->GetZaxis()->SetLabelFont(42);
   hframe_copy210->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy210->GetZaxis()->SetLabelSize(0.05);
   hframe_copy210->GetZaxis()->SetTitleSize(0.06);
   hframe_copy210->GetZaxis()->SetTitleFont(42);
   hframe_copy210->Draw("sameaxis");
   ccwh3l_nojetVeto_13TeV_njet_3l->Modified();
   ccwh3l_nojetVeto_13TeV_njet_3l->cd();
   ccwh3l_nojetVeto_13TeV_njet_3l->SetSelected(ccwh3l_nojetVeto_13TeV_njet_3l);
}
