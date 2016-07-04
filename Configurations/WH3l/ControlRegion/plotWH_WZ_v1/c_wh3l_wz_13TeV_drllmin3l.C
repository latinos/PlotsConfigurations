void c_wh3l_wz_13TeV_drllmin3l()
{
//=========Macro generated from canvas: ccwh3l_wz_13TeV_drllmin3l/cc
//=========  (Sun Jul  3 22:54:20 2016) by ROOT version6.02/13
   TCanvas *ccwh3l_wz_13TeV_drllmin3l = new TCanvas("ccwh3l_wz_13TeV_drllmin3l", "cc",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   ccwh3l_wz_13TeV_drllmin3l->SetHighLightColor(2);
   ccwh3l_wz_13TeV_drllmin3l->Range(-0.8,-43.18135,4.2,288.9829);
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
   
   TH1F *hframe61 = new TH1F("hframe61","",1000,0,4);
   hframe61->SetMinimum(0);
   hframe61->SetMaximum(272.3747);
   hframe61->SetDirectory(0);
   hframe61->SetStats(0);
   hframe61->SetLineStyle(0);
   hframe61->SetMarkerStyle(20);
   hframe61->GetXaxis()->SetTitle("min #Delta Rm_{ll} [GeV]");
   hframe61->GetXaxis()->SetNdivisions(506);
   hframe61->GetXaxis()->SetLabelFont(42);
   hframe61->GetXaxis()->SetLabelOffset(0.007);
   hframe61->GetXaxis()->SetLabelSize(0.05);
   hframe61->GetXaxis()->SetTitleSize(0.06);
   hframe61->GetXaxis()->SetTitleOffset(0.9);
   hframe61->GetXaxis()->SetTitleFont(42);
   hframe61->GetYaxis()->SetTitle("Events");
   hframe61->GetYaxis()->SetLabelFont(42);
   hframe61->GetYaxis()->SetLabelOffset(0.007);
   hframe61->GetYaxis()->SetLabelSize(0.05);
   hframe61->GetYaxis()->SetTitleSize(0.06);
   hframe61->GetYaxis()->SetTitleOffset(1.25);
   hframe61->GetYaxis()->SetTitleFont(42);
   hframe61->GetZaxis()->SetLabelFont(42);
   hframe61->GetZaxis()->SetLabelOffset(0.007);
   hframe61->GetZaxis()->SetLabelSize(0.05);
   hframe61->GetZaxis()->SetTitleSize(0.06);
   hframe61->GetZaxis()->SetTitleFont(42);
   hframe61->Draw(" ");
   
   THStack *thsBackground_grouped_wh3l_wz_13TeV_drllmin3l = new THStack();
   thsBackground_grouped_wh3l_wz_13TeV_drllmin3l->SetName("thsBackground_grouped_wh3l_wz_13TeV_drllmin3l");
   thsBackground_grouped_wh3l_wz_13TeV_drllmin3l->SetTitle("thsBackground_grouped_wh3l_wz_13TeV_drllmin3l");
   
   TH1F *thsBackground_grouped_wh3l_wz_13TeV_drllmin3l_stack_13 = new TH1F("thsBackground_grouped_wh3l_wz_13TeV_drllmin3l_stack_13","thsBackground_grouped_wh3l_wz_13TeV_drllmin3l",3,0,4);
   thsBackground_grouped_wh3l_wz_13TeV_drllmin3l_stack_13->SetMinimum(0);
   thsBackground_grouped_wh3l_wz_13TeV_drllmin3l_stack_13->SetMaximum(85.59576);
   thsBackground_grouped_wh3l_wz_13TeV_drllmin3l_stack_13->SetDirectory(0);
   thsBackground_grouped_wh3l_wz_13TeV_drllmin3l_stack_13->SetStats(0);
   thsBackground_grouped_wh3l_wz_13TeV_drllmin3l_stack_13->SetLineStyle(0);
   thsBackground_grouped_wh3l_wz_13TeV_drllmin3l_stack_13->SetMarkerStyle(20);
   thsBackground_grouped_wh3l_wz_13TeV_drllmin3l_stack_13->GetXaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_wz_13TeV_drllmin3l_stack_13->GetXaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_wz_13TeV_drllmin3l_stack_13->GetXaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_wz_13TeV_drllmin3l_stack_13->GetXaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_wz_13TeV_drllmin3l_stack_13->GetXaxis()->SetTitleOffset(0.9);
   thsBackground_grouped_wh3l_wz_13TeV_drllmin3l_stack_13->GetXaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_wz_13TeV_drllmin3l_stack_13->GetYaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_wz_13TeV_drllmin3l_stack_13->GetYaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_wz_13TeV_drllmin3l_stack_13->GetYaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_wz_13TeV_drllmin3l_stack_13->GetYaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_wz_13TeV_drllmin3l_stack_13->GetYaxis()->SetTitleOffset(1.25);
   thsBackground_grouped_wh3l_wz_13TeV_drllmin3l_stack_13->GetYaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_wz_13TeV_drllmin3l_stack_13->GetZaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_wz_13TeV_drllmin3l_stack_13->GetZaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_wz_13TeV_drllmin3l_stack_13->GetZaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_wz_13TeV_drllmin3l_stack_13->GetZaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_wz_13TeV_drllmin3l_stack_13->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_wz_13TeV_drllmin3l->SetHistogram(thsBackground_grouped_wh3l_wz_13TeV_drllmin3l_stack_13);
   
   
   TH1D *new_histo_group_Fake_wh3l_wz_13TeV_drllmin3l62 = new TH1D("new_histo_group_Fake_wh3l_wz_13TeV_drllmin3l62","histo_Fake",3,0,4);
   new_histo_group_Fake_wh3l_wz_13TeV_drllmin3l62->SetBinContent(1,3.305714);
   new_histo_group_Fake_wh3l_wz_13TeV_drllmin3l62->SetBinContent(2,4.287379);
   new_histo_group_Fake_wh3l_wz_13TeV_drllmin3l62->SetBinContent(3,2.985282);
   new_histo_group_Fake_wh3l_wz_13TeV_drllmin3l62->SetBinError(1,1.6286);
   new_histo_group_Fake_wh3l_wz_13TeV_drllmin3l62->SetBinError(2,2.304024);
   new_histo_group_Fake_wh3l_wz_13TeV_drllmin3l62->SetBinError(3,1.763993);
   new_histo_group_Fake_wh3l_wz_13TeV_drllmin3l62->SetEntries(336);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_wz_13TeV_drllmin3l62->SetFillColor(ci);
   new_histo_group_Fake_wh3l_wz_13TeV_drllmin3l62->SetFillStyle(3001);

   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_wz_13TeV_drllmin3l62->SetLineColor(ci);
   new_histo_group_Fake_wh3l_wz_13TeV_drllmin3l62->GetXaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_wz_13TeV_drllmin3l62->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_wz_13TeV_drllmin3l62->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_wz_13TeV_drllmin3l62->GetXaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_wz_13TeV_drllmin3l62->GetYaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_wz_13TeV_drllmin3l62->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_wz_13TeV_drllmin3l62->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_wz_13TeV_drllmin3l62->GetYaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_wz_13TeV_drllmin3l62->GetZaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_wz_13TeV_drllmin3l62->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_wz_13TeV_drllmin3l62->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_wz_13TeV_drllmin3l62->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_wz_13TeV_drllmin3l->Add(new_histo_group_Fake_wh3l_wz_13TeV_drllmin3l,"");
   
   TH1D *new_histo_group_WW_wh3l_wz_13TeV_drllmin3l63 = new TH1D("new_histo_group_WW_wh3l_wz_13TeV_drllmin3l63","histo_WW",3,0,4);
   new_histo_group_WW_wh3l_wz_13TeV_drllmin3l63->SetBinContent(1,0.01092969);
   new_histo_group_WW_wh3l_wz_13TeV_drllmin3l63->SetBinContent(2,0.04987764);
   new_histo_group_WW_wh3l_wz_13TeV_drllmin3l63->SetBinContent(3,0.01458742);
   new_histo_group_WW_wh3l_wz_13TeV_drllmin3l63->SetBinError(1,0.01092969);
   new_histo_group_WW_wh3l_wz_13TeV_drllmin3l63->SetBinError(2,0.02894052);
   new_histo_group_WW_wh3l_wz_13TeV_drllmin3l63->SetBinError(3,0.01458742);
   new_histo_group_WW_wh3l_wz_13TeV_drllmin3l63->SetEntries(5);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_wz_13TeV_drllmin3l63->SetFillColor(ci);
   new_histo_group_WW_wh3l_wz_13TeV_drllmin3l63->SetFillStyle(3001);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_wz_13TeV_drllmin3l63->SetLineColor(ci);
   new_histo_group_WW_wh3l_wz_13TeV_drllmin3l63->GetXaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_wz_13TeV_drllmin3l63->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_wz_13TeV_drllmin3l63->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_wz_13TeV_drllmin3l63->GetXaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_wz_13TeV_drllmin3l63->GetYaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_wz_13TeV_drllmin3l63->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_wz_13TeV_drllmin3l63->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_wz_13TeV_drllmin3l63->GetYaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_wz_13TeV_drllmin3l63->GetZaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_wz_13TeV_drllmin3l63->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_wz_13TeV_drllmin3l63->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_wz_13TeV_drllmin3l63->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_wz_13TeV_drllmin3l->Add(new_histo_group_WW_wh3l_wz_13TeV_drllmin3l,"");
   
   TH1D *new_histo_group_VVV_wh3l_wz_13TeV_drllmin3l64 = new TH1D("new_histo_group_VVV_wh3l_wz_13TeV_drllmin3l64","histo_VVV",3,0,4);
   new_histo_group_VVV_wh3l_wz_13TeV_drllmin3l64->SetBinContent(1,0.2199856);
   new_histo_group_VVV_wh3l_wz_13TeV_drllmin3l64->SetBinContent(2,0.3155399);
   new_histo_group_VVV_wh3l_wz_13TeV_drllmin3l64->SetBinContent(3,0.04604569);
   new_histo_group_VVV_wh3l_wz_13TeV_drllmin3l64->SetBinError(1,0.01973642);
   new_histo_group_VVV_wh3l_wz_13TeV_drllmin3l64->SetBinError(2,0.02476099);
   new_histo_group_VVV_wh3l_wz_13TeV_drllmin3l64->SetBinError(3,0.009696884);
   new_histo_group_VVV_wh3l_wz_13TeV_drllmin3l64->SetEntries(556);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_wz_13TeV_drllmin3l64->SetFillColor(ci);
   new_histo_group_VVV_wh3l_wz_13TeV_drllmin3l64->SetFillStyle(3001);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_wz_13TeV_drllmin3l64->SetLineColor(ci);
   new_histo_group_VVV_wh3l_wz_13TeV_drllmin3l64->GetXaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_wz_13TeV_drllmin3l64->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_wz_13TeV_drllmin3l64->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_wz_13TeV_drllmin3l64->GetXaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_wz_13TeV_drllmin3l64->GetYaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_wz_13TeV_drllmin3l64->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_wz_13TeV_drllmin3l64->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_wz_13TeV_drllmin3l64->GetYaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_wz_13TeV_drllmin3l64->GetZaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_wz_13TeV_drllmin3l64->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_wz_13TeV_drllmin3l64->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_wz_13TeV_drllmin3l64->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_wz_13TeV_drllmin3l->Add(new_histo_group_VVV_wh3l_wz_13TeV_drllmin3l,"");
   
   TH1D *new_histo_group_Vg_wh3l_wz_13TeV_drllmin3l65 = new TH1D("new_histo_group_Vg_wh3l_wz_13TeV_drllmin3l65","histo_Vg",3,0,4);
   new_histo_group_Vg_wh3l_wz_13TeV_drllmin3l65->SetBinContent(1,1.723259);
   new_histo_group_Vg_wh3l_wz_13TeV_drllmin3l65->SetBinContent(2,1.836304);
   new_histo_group_Vg_wh3l_wz_13TeV_drllmin3l65->SetBinContent(3,1.428191);
   new_histo_group_Vg_wh3l_wz_13TeV_drllmin3l65->SetBinError(1,0.4378459);
   new_histo_group_Vg_wh3l_wz_13TeV_drllmin3l65->SetBinError(2,0.5360408);
   new_histo_group_Vg_wh3l_wz_13TeV_drllmin3l65->SetBinError(3,0.3880478);
   new_histo_group_Vg_wh3l_wz_13TeV_drllmin3l65->SetEntries(63);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_wz_13TeV_drllmin3l65->SetFillColor(ci);
   new_histo_group_Vg_wh3l_wz_13TeV_drllmin3l65->SetFillStyle(3001);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_wz_13TeV_drllmin3l65->SetLineColor(ci);
   new_histo_group_Vg_wh3l_wz_13TeV_drllmin3l65->GetXaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_wz_13TeV_drllmin3l65->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_wz_13TeV_drllmin3l65->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_wz_13TeV_drllmin3l65->GetXaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_wz_13TeV_drllmin3l65->GetYaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_wz_13TeV_drllmin3l65->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_wz_13TeV_drllmin3l65->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_wz_13TeV_drllmin3l65->GetYaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_wz_13TeV_drllmin3l65->GetZaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_wz_13TeV_drllmin3l65->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_wz_13TeV_drllmin3l65->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_wz_13TeV_drllmin3l65->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_wz_13TeV_drllmin3l->Add(new_histo_group_Vg_wh3l_wz_13TeV_drllmin3l,"");
   
   TH1D *new_histo_group_ZZ_wh3l_wz_13TeV_drllmin3l66 = new TH1D("new_histo_group_ZZ_wh3l_wz_13TeV_drllmin3l66","histo_ZZ",3,0,4);
   new_histo_group_ZZ_wh3l_wz_13TeV_drllmin3l66->SetBinContent(1,1.57028);
   new_histo_group_ZZ_wh3l_wz_13TeV_drllmin3l66->SetBinContent(2,4.298614);
   new_histo_group_ZZ_wh3l_wz_13TeV_drllmin3l66->SetBinContent(3,0.9342328);
   new_histo_group_ZZ_wh3l_wz_13TeV_drllmin3l66->SetBinError(1,0.2590484);
   new_histo_group_ZZ_wh3l_wz_13TeV_drllmin3l66->SetBinError(2,0.4242062);
   new_histo_group_ZZ_wh3l_wz_13TeV_drllmin3l66->SetBinError(3,0.1977071);
   new_histo_group_ZZ_wh3l_wz_13TeV_drllmin3l66->SetEntries(182);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_wz_13TeV_drllmin3l66->SetFillColor(ci);
   new_histo_group_ZZ_wh3l_wz_13TeV_drllmin3l66->SetFillStyle(3001);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_wz_13TeV_drllmin3l66->SetLineColor(ci);
   new_histo_group_ZZ_wh3l_wz_13TeV_drllmin3l66->GetXaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_wz_13TeV_drllmin3l66->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_wz_13TeV_drllmin3l66->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_wz_13TeV_drllmin3l66->GetXaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_wz_13TeV_drllmin3l66->GetYaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_wz_13TeV_drllmin3l66->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_wz_13TeV_drllmin3l66->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_wz_13TeV_drllmin3l66->GetYaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_wz_13TeV_drllmin3l66->GetZaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_wz_13TeV_drllmin3l66->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_wz_13TeV_drllmin3l66->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_wz_13TeV_drllmin3l66->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_wz_13TeV_drllmin3l->Add(new_histo_group_ZZ_wh3l_wz_13TeV_drllmin3l,"");
   
   TH1D *new_histo_group_WZ_wh3l_wz_13TeV_drllmin3l67 = new TH1D("new_histo_group_WZ_wh3l_wz_13TeV_drllmin3l67","histo_WZ",3,0,4);
   new_histo_group_WZ_wh3l_wz_13TeV_drllmin3l67->SetBinContent(1,23.66869);
   new_histo_group_WZ_wh3l_wz_13TeV_drllmin3l67->SetBinContent(2,70.25077);
   new_histo_group_WZ_wh3l_wz_13TeV_drllmin3l67->SetBinContent(3,14.67401);
   new_histo_group_WZ_wh3l_wz_13TeV_drllmin3l67->SetBinContent(4,0.009768078);
   new_histo_group_WZ_wh3l_wz_13TeV_drllmin3l67->SetBinError(1,0.3592644);
   new_histo_group_WZ_wh3l_wz_13TeV_drllmin3l67->SetBinError(2,0.6179751);
   new_histo_group_WZ_wh3l_wz_13TeV_drllmin3l67->SetBinError(3,0.2816864);
   new_histo_group_WZ_wh3l_wz_13TeV_drllmin3l67->SetBinError(4,0.006938969);
   new_histo_group_WZ_wh3l_wz_13TeV_drllmin3l67->SetEntries(22144);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_wz_13TeV_drllmin3l67->SetFillColor(ci);
   new_histo_group_WZ_wh3l_wz_13TeV_drllmin3l67->SetFillStyle(3001);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_wz_13TeV_drllmin3l67->SetLineColor(ci);
   new_histo_group_WZ_wh3l_wz_13TeV_drllmin3l67->GetXaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_wz_13TeV_drllmin3l67->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_wz_13TeV_drllmin3l67->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_wz_13TeV_drllmin3l67->GetXaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_wz_13TeV_drllmin3l67->GetYaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_wz_13TeV_drllmin3l67->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_wz_13TeV_drllmin3l67->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_wz_13TeV_drllmin3l67->GetYaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_wz_13TeV_drllmin3l67->GetZaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_wz_13TeV_drllmin3l67->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_wz_13TeV_drllmin3l67->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_wz_13TeV_drllmin3l67->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_wz_13TeV_drllmin3l->Add(new_histo_group_WZ_wh3l_wz_13TeV_drllmin3l,"");
   
   TH1D *new_histo_group_Higgs_wh3l_wz_13TeV_drllmin3l68 = new TH1D("new_histo_group_Higgs_wh3l_wz_13TeV_drllmin3l68","histo_H_htt",3,0,4);
   new_histo_group_Higgs_wh3l_wz_13TeV_drllmin3l68->SetBinContent(1,0.3596805);
   new_histo_group_Higgs_wh3l_wz_13TeV_drllmin3l68->SetBinContent(2,0.4812903);
   new_histo_group_Higgs_wh3l_wz_13TeV_drllmin3l68->SetBinContent(3,0.05255312);
   new_histo_group_Higgs_wh3l_wz_13TeV_drllmin3l68->SetBinError(1,0.02081368);
   new_histo_group_Higgs_wh3l_wz_13TeV_drllmin3l68->SetBinError(2,0.02342628);
   new_histo_group_Higgs_wh3l_wz_13TeV_drllmin3l68->SetBinError(3,0.007939996);
   new_histo_group_Higgs_wh3l_wz_13TeV_drllmin3l68->SetEntries(1285);
   new_histo_group_Higgs_wh3l_wz_13TeV_drllmin3l68->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_wz_13TeV_drllmin3l68->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_wz_13TeV_drllmin3l68->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_wz_13TeV_drllmin3l68->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_wz_13TeV_drllmin3l68->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_wz_13TeV_drllmin3l68->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_wz_13TeV_drllmin3l68->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_wz_13TeV_drllmin3l68->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_wz_13TeV_drllmin3l68->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_wz_13TeV_drllmin3l68->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_wz_13TeV_drllmin3l68->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_wz_13TeV_drllmin3l68->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_wz_13TeV_drllmin3l68->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_wz_13TeV_drllmin3l68->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_wz_13TeV_drllmin3l68->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_wz_13TeV_drllmin3l->Add(new_histo_group_Higgs_wh3l_wz_13TeV_drllmin3l,"");
   thsBackground_grouped_wh3l_wz_13TeV_drllmin3l->Draw("hist same");
   
   thsSignal_grouped_wh3l_wz_13TeV_drllmin3l = new THStack();
   thsSignal_grouped_wh3l_wz_13TeV_drllmin3l->SetName("thsSignal_grouped_wh3l_wz_13TeV_drllmin3l");
   thsSignal_grouped_wh3l_wz_13TeV_drllmin3l->SetTitle("thsSignal_grouped_wh3l_wz_13TeV_drllmin3l");
   
   TH1F *thsSignal_grouped_wh3l_wz_13TeV_drllmin3l_stack_14 = new TH1F("thsSignal_grouped_wh3l_wz_13TeV_drllmin3l_stack_14","thsSignal_grouped_wh3l_wz_13TeV_drllmin3l",3,0,4);
   thsSignal_grouped_wh3l_wz_13TeV_drllmin3l_stack_14->SetMinimum(0);
   thsSignal_grouped_wh3l_wz_13TeV_drllmin3l_stack_14->SetMaximum(0.5299524);
   thsSignal_grouped_wh3l_wz_13TeV_drllmin3l_stack_14->SetDirectory(0);
   thsSignal_grouped_wh3l_wz_13TeV_drllmin3l_stack_14->SetStats(0);
   thsSignal_grouped_wh3l_wz_13TeV_drllmin3l_stack_14->SetLineStyle(0);
   thsSignal_grouped_wh3l_wz_13TeV_drllmin3l_stack_14->SetMarkerStyle(20);
   thsSignal_grouped_wh3l_wz_13TeV_drllmin3l_stack_14->GetXaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_wz_13TeV_drllmin3l_stack_14->GetXaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_wz_13TeV_drllmin3l_stack_14->GetXaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_wz_13TeV_drllmin3l_stack_14->GetXaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_wz_13TeV_drllmin3l_stack_14->GetXaxis()->SetTitleOffset(0.9);
   thsSignal_grouped_wh3l_wz_13TeV_drllmin3l_stack_14->GetXaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_wz_13TeV_drllmin3l_stack_14->GetYaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_wz_13TeV_drllmin3l_stack_14->GetYaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_wz_13TeV_drllmin3l_stack_14->GetYaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_wz_13TeV_drllmin3l_stack_14->GetYaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_wz_13TeV_drllmin3l_stack_14->GetYaxis()->SetTitleOffset(1.25);
   thsSignal_grouped_wh3l_wz_13TeV_drllmin3l_stack_14->GetYaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_wz_13TeV_drllmin3l_stack_14->GetZaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_wz_13TeV_drllmin3l_stack_14->GetZaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_wz_13TeV_drllmin3l_stack_14->GetZaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_wz_13TeV_drllmin3l_stack_14->GetZaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_wz_13TeV_drllmin3l_stack_14->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_wz_13TeV_drllmin3l->SetHistogram(thsSignal_grouped_wh3l_wz_13TeV_drllmin3l_stack_14);
   
   
   TH1D *new_histo_group_Higgs_wh3l_wz_13TeV_drllmin3l69 = new TH1D("new_histo_group_Higgs_wh3l_wz_13TeV_drllmin3l69","histo_H_htt",3,0,4);
   new_histo_group_Higgs_wh3l_wz_13TeV_drllmin3l69->SetBinContent(1,0.3596805);
   new_histo_group_Higgs_wh3l_wz_13TeV_drllmin3l69->SetBinContent(2,0.4812903);
   new_histo_group_Higgs_wh3l_wz_13TeV_drllmin3l69->SetBinContent(3,0.05255312);
   new_histo_group_Higgs_wh3l_wz_13TeV_drllmin3l69->SetBinError(1,0.02081368);
   new_histo_group_Higgs_wh3l_wz_13TeV_drllmin3l69->SetBinError(2,0.02342628);
   new_histo_group_Higgs_wh3l_wz_13TeV_drllmin3l69->SetBinError(3,0.007939996);
   new_histo_group_Higgs_wh3l_wz_13TeV_drllmin3l69->SetEntries(1285);
   new_histo_group_Higgs_wh3l_wz_13TeV_drllmin3l69->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_wz_13TeV_drllmin3l69->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_wz_13TeV_drllmin3l69->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_wz_13TeV_drllmin3l69->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_wz_13TeV_drllmin3l69->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_wz_13TeV_drllmin3l69->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_wz_13TeV_drllmin3l69->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_wz_13TeV_drllmin3l69->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_wz_13TeV_drllmin3l69->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_wz_13TeV_drllmin3l69->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_wz_13TeV_drllmin3l69->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_wz_13TeV_drllmin3l69->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_wz_13TeV_drllmin3l69->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_wz_13TeV_drllmin3l69->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_wz_13TeV_drllmin3l69->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_wz_13TeV_drllmin3l->Add(new_histo_group_Higgs_wh3l_wz_13TeV_drllmin3l,"");
   thsSignal_grouped_wh3l_wz_13TeV_drllmin3l->Draw("hist same noclear");
   
   Double_t _fx3013[3] = {
   0.6666667,
   2,
   3.333333};
   Double_t _fy3013[3] = {
   30.49886,
   81.03848,
   20.08235};
   Double_t _felx3013[3] = {
   0.6666667,
   0.6666667,
   0.6666667};
   Double_t _fely3013[3] = {
   3.040507,
   4.542558,
   2.879909};
   Double_t _fehx3013[3] = {
   0.6666667,
   0.6666667,
   0.6666667};
   Double_t _fehy3013[3] = {
   3.029293,
   4.526925,
   2.879222};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(3,_fx3013,_fy3013,_felx3013,_fehx3013,_fely3013,_fehy3013);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(12);
   grae->SetFillStyle(3004);
   grae->SetLineColor(12);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3013 = new TH1F("Graph_Graph3013","",100,0,4.4);
   Graph_Graph3013->SetMinimum(10.36614);
   Graph_Graph3013->SetMaximum(92.4017);
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
   
   Double_t _fx3014[3] = {
   0.6666667,
   2,
   3.333333};
   Double_t _fy3014[3] = {
   41,
   99,
   25};
   Double_t _felx3014[3] = {
   0.6666667,
   0.6666667,
   0.6666667};
   Double_t _fely3014[3] = {
   6.377022,
   9.933246,
   4.966428};
   Double_t _fehx3014[3] = {
   0.6666667,
   0.6666667,
   0.6666667};
   Double_t _fehy3014[3] = {
   7.45534,
   10.98363,
   6.066714};
   grae = new TGraphAsymmErrors(3,_fx3014,_fy3014,_felx3014,_fehx3014,_fely3014,_fehy3014);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(1);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3014 = new TH1F("Graph_Graph3014","",100,0,4.4);
   Graph_Graph3014->SetMinimum(11.03857);
   Graph_Graph3014->SetMaximum(118.9786);
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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_wz_13TeV_drllmin3l","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_wz_13TeV_drllmin3l","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
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
   
   TH1F *hframe_copy70 = new TH1F("hframe_copy70","",1000,0,4);
   hframe_copy70->SetMinimum(0);
   hframe_copy70->SetMaximum(272.3747);
   hframe_copy70->SetDirectory(0);
   hframe_copy70->SetStats(0);
   hframe_copy70->SetLineStyle(0);
   hframe_copy70->SetMarkerStyle(20);
   hframe_copy70->GetXaxis()->SetTitle("min #Delta Rm_{ll} [GeV]");
   hframe_copy70->GetXaxis()->SetNdivisions(506);
   hframe_copy70->GetXaxis()->SetLabelFont(42);
   hframe_copy70->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy70->GetXaxis()->SetLabelSize(0.05);
   hframe_copy70->GetXaxis()->SetTitleSize(0.06);
   hframe_copy70->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy70->GetXaxis()->SetTitleFont(42);
   hframe_copy70->GetYaxis()->SetTitle("Events");
   hframe_copy70->GetYaxis()->SetLabelFont(42);
   hframe_copy70->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy70->GetYaxis()->SetLabelSize(0.05);
   hframe_copy70->GetYaxis()->SetTitleSize(0.06);
   hframe_copy70->GetYaxis()->SetTitleOffset(1.25);
   hframe_copy70->GetYaxis()->SetTitleFont(42);
   hframe_copy70->GetZaxis()->SetLabelFont(42);
   hframe_copy70->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy70->GetZaxis()->SetLabelSize(0.05);
   hframe_copy70->GetZaxis()->SetTitleSize(0.06);
   hframe_copy70->GetZaxis()->SetTitleFont(42);
   hframe_copy70->Draw("sameaxis");
   ccwh3l_wz_13TeV_drllmin3l->Modified();
   ccwh3l_wz_13TeV_drllmin3l->cd();
   ccwh3l_wz_13TeV_drllmin3l->SetSelected(ccwh3l_wz_13TeV_drllmin3l);
}
