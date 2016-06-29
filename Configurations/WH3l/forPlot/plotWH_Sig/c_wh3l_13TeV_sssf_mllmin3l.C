void c_wh3l_13TeV_sssf_mllmin3l()
{
//=========Macro generated from canvas: ccwh3l_13TeV_sssf_mllmin3l/cc
//=========  (Wed Jun 29 01:34:23 2016) by ROOT version6.02/13
   TCanvas *ccwh3l_13TeV_sssf_mllmin3l = new TCanvas("ccwh3l_13TeV_sssf_mllmin3l", "cc",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   ccwh3l_13TeV_sssf_mllmin3l->SetHighLightColor(2);
   ccwh3l_13TeV_sssf_mllmin3l->Range(-28,-0.4943883,209.5,3.308599);
   ccwh3l_13TeV_sssf_mllmin3l->SetFillColor(0);
   ccwh3l_13TeV_sssf_mllmin3l->SetBorderMode(0);
   ccwh3l_13TeV_sssf_mllmin3l->SetBorderSize(2);
   ccwh3l_13TeV_sssf_mllmin3l->SetTickx(1);
   ccwh3l_13TeV_sssf_mllmin3l->SetTicky(1);
   ccwh3l_13TeV_sssf_mllmin3l->SetLeftMargin(0.16);
   ccwh3l_13TeV_sssf_mllmin3l->SetRightMargin(0.04);
   ccwh3l_13TeV_sssf_mllmin3l->SetTopMargin(0.05);
   ccwh3l_13TeV_sssf_mllmin3l->SetBottomMargin(0.13);
   ccwh3l_13TeV_sssf_mllmin3l->SetFrameFillStyle(0);
   ccwh3l_13TeV_sssf_mllmin3l->SetFrameBorderMode(0);
   ccwh3l_13TeV_sssf_mllmin3l->SetFrameFillStyle(0);
   ccwh3l_13TeV_sssf_mllmin3l->SetFrameBorderMode(0);
   
   TH1F *hframe631 = new TH1F("hframe631","",1000,10,200);
   hframe631->SetMinimum(0);
   hframe631->SetMaximum(3.118449);
   hframe631->SetDirectory(0);
   hframe631->SetStats(0);
   hframe631->SetLineStyle(0);
   hframe631->SetMarkerStyle(20);
   hframe631->GetXaxis()->SetTitle("min m_{ll} [GeV]");
   hframe631->GetXaxis()->SetNdivisions(506);
   hframe631->GetXaxis()->SetLabelFont(42);
   hframe631->GetXaxis()->SetLabelOffset(0.007);
   hframe631->GetXaxis()->SetLabelSize(0.05);
   hframe631->GetXaxis()->SetTitleSize(0.06);
   hframe631->GetXaxis()->SetTitleOffset(0.9);
   hframe631->GetXaxis()->SetTitleFont(42);
   hframe631->GetYaxis()->SetTitle("Events");
   hframe631->GetYaxis()->SetLabelFont(42);
   hframe631->GetYaxis()->SetLabelOffset(0.007);
   hframe631->GetYaxis()->SetLabelSize(0.05);
   hframe631->GetYaxis()->SetTitleSize(0.06);
   hframe631->GetYaxis()->SetTitleOffset(1.25);
   hframe631->GetYaxis()->SetTitleFont(42);
   hframe631->GetZaxis()->SetLabelFont(42);
   hframe631->GetZaxis()->SetLabelOffset(0.007);
   hframe631->GetZaxis()->SetLabelSize(0.05);
   hframe631->GetZaxis()->SetTitleSize(0.06);
   hframe631->GetZaxis()->SetTitleFont(42);
   hframe631->Draw(" ");
   
   THStack *thsBackground_grouped_wh3l_13TeV_sssf_mllmin3l = new THStack();
   thsBackground_grouped_wh3l_13TeV_sssf_mllmin3l->SetName("thsBackground_grouped_wh3l_13TeV_sssf_mllmin3l");
   thsBackground_grouped_wh3l_13TeV_sssf_mllmin3l->SetTitle("thsBackground_grouped_wh3l_13TeV_sssf_mllmin3l");
   
   TH1F *thsBackground_grouped_wh3l_13TeV_sssf_mllmin3l_stack_127 = new TH1F("thsBackground_grouped_wh3l_13TeV_sssf_mllmin3l_stack_127","thsBackground_grouped_wh3l_13TeV_sssf_mllmin3l",20,10,200);
   thsBackground_grouped_wh3l_13TeV_sssf_mllmin3l_stack_127->SetMinimum(-0.2152826);
   thsBackground_grouped_wh3l_13TeV_sssf_mllmin3l_stack_127->SetMaximum(1.691718);
   thsBackground_grouped_wh3l_13TeV_sssf_mllmin3l_stack_127->SetDirectory(0);
   thsBackground_grouped_wh3l_13TeV_sssf_mllmin3l_stack_127->SetStats(0);
   thsBackground_grouped_wh3l_13TeV_sssf_mllmin3l_stack_127->SetLineStyle(0);
   thsBackground_grouped_wh3l_13TeV_sssf_mllmin3l_stack_127->SetMarkerStyle(20);
   thsBackground_grouped_wh3l_13TeV_sssf_mllmin3l_stack_127->GetXaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_13TeV_sssf_mllmin3l_stack_127->GetXaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_13TeV_sssf_mllmin3l_stack_127->GetXaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_13TeV_sssf_mllmin3l_stack_127->GetXaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_13TeV_sssf_mllmin3l_stack_127->GetXaxis()->SetTitleOffset(0.9);
   thsBackground_grouped_wh3l_13TeV_sssf_mllmin3l_stack_127->GetXaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_sssf_mllmin3l_stack_127->GetYaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_13TeV_sssf_mllmin3l_stack_127->GetYaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_13TeV_sssf_mllmin3l_stack_127->GetYaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_13TeV_sssf_mllmin3l_stack_127->GetYaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_13TeV_sssf_mllmin3l_stack_127->GetYaxis()->SetTitleOffset(1.25);
   thsBackground_grouped_wh3l_13TeV_sssf_mllmin3l_stack_127->GetYaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_sssf_mllmin3l_stack_127->GetZaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_13TeV_sssf_mllmin3l_stack_127->GetZaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_13TeV_sssf_mllmin3l_stack_127->GetZaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_13TeV_sssf_mllmin3l_stack_127->GetZaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_13TeV_sssf_mllmin3l_stack_127->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_sssf_mllmin3l->SetHistogram(thsBackground_grouped_wh3l_13TeV_sssf_mllmin3l_stack_127);
   
   
   TH1D *new_histo_group_Fake_wh3l_13TeV_sssf_mllmin3l632 = new TH1D("new_histo_group_Fake_wh3l_13TeV_sssf_mllmin3l632","histo_Fake",20,10,200);
   new_histo_group_Fake_wh3l_13TeV_sssf_mllmin3l632->SetBinContent(1,-0.07907178);
   new_histo_group_Fake_wh3l_13TeV_sssf_mllmin3l632->SetBinContent(2,-0.1063105);
   new_histo_group_Fake_wh3l_13TeV_sssf_mllmin3l632->SetBinContent(3,0.5387493);
   new_histo_group_Fake_wh3l_13TeV_sssf_mllmin3l632->SetBinContent(4,0.4633326);
   new_histo_group_Fake_wh3l_13TeV_sssf_mllmin3l632->SetBinContent(5,1.088571);
   new_histo_group_Fake_wh3l_13TeV_sssf_mllmin3l632->SetBinContent(6,0.7652338);
   new_histo_group_Fake_wh3l_13TeV_sssf_mllmin3l632->SetBinContent(7,-0.02201848);
   new_histo_group_Fake_wh3l_13TeV_sssf_mllmin3l632->SetBinContent(8,-0.1115714);
   new_histo_group_Fake_wh3l_13TeV_sssf_mllmin3l632->SetBinContent(9,0.3651159);
   new_histo_group_Fake_wh3l_13TeV_sssf_mllmin3l632->SetBinError(1,0.07907178);
   new_histo_group_Fake_wh3l_13TeV_sssf_mllmin3l632->SetBinError(2,0.0795514);
   new_histo_group_Fake_wh3l_13TeV_sssf_mllmin3l632->SetBinError(3,0.7023943);
   new_histo_group_Fake_wh3l_13TeV_sssf_mllmin3l632->SetBinError(4,0.5170052);
   new_histo_group_Fake_wh3l_13TeV_sssf_mllmin3l632->SetBinError(5,0.5225895);
   new_histo_group_Fake_wh3l_13TeV_sssf_mllmin3l632->SetBinError(6,0.7998523);
   new_histo_group_Fake_wh3l_13TeV_sssf_mllmin3l632->SetBinError(7,0.1199198);
   new_histo_group_Fake_wh3l_13TeV_sssf_mllmin3l632->SetBinError(8,0.1037111);
   new_histo_group_Fake_wh3l_13TeV_sssf_mllmin3l632->SetBinError(9,0.3651159);
   new_histo_group_Fake_wh3l_13TeV_sssf_mllmin3l632->SetEntries(34);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_13TeV_sssf_mllmin3l632->SetFillColor(ci);
   new_histo_group_Fake_wh3l_13TeV_sssf_mllmin3l632->SetFillStyle(3001);

   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_13TeV_sssf_mllmin3l632->SetLineColor(ci);
   new_histo_group_Fake_wh3l_13TeV_sssf_mllmin3l632->GetXaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_13TeV_sssf_mllmin3l632->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_13TeV_sssf_mllmin3l632->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_13TeV_sssf_mllmin3l632->GetXaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_13TeV_sssf_mllmin3l632->GetYaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_13TeV_sssf_mllmin3l632->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_13TeV_sssf_mllmin3l632->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_13TeV_sssf_mllmin3l632->GetYaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_13TeV_sssf_mllmin3l632->GetZaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_13TeV_sssf_mllmin3l632->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_13TeV_sssf_mllmin3l632->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_13TeV_sssf_mllmin3l632->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_sssf_mllmin3l->Add(new_histo_group_Fake_wh3l_13TeV_sssf_mllmin3l,"");
   
   TH1D *new_histo_group_WW_wh3l_13TeV_sssf_mllmin3l633 = new TH1D("new_histo_group_WW_wh3l_13TeV_sssf_mllmin3l633","histo_WW",20,10,200);
   new_histo_group_WW_wh3l_13TeV_sssf_mllmin3l633->SetBinContent(3,0.0161241);
   new_histo_group_WW_wh3l_13TeV_sssf_mllmin3l633->SetBinContent(8,0.01039136);
   new_histo_group_WW_wh3l_13TeV_sssf_mllmin3l633->SetBinError(3,0.0161241);
   new_histo_group_WW_wh3l_13TeV_sssf_mllmin3l633->SetBinError(8,0.01039136);
   new_histo_group_WW_wh3l_13TeV_sssf_mllmin3l633->SetEntries(2);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_13TeV_sssf_mllmin3l633->SetFillColor(ci);
   new_histo_group_WW_wh3l_13TeV_sssf_mllmin3l633->SetFillStyle(3001);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_13TeV_sssf_mllmin3l633->SetLineColor(ci);
   new_histo_group_WW_wh3l_13TeV_sssf_mllmin3l633->GetXaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_13TeV_sssf_mllmin3l633->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_13TeV_sssf_mllmin3l633->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_13TeV_sssf_mllmin3l633->GetXaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_13TeV_sssf_mllmin3l633->GetYaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_13TeV_sssf_mllmin3l633->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_13TeV_sssf_mllmin3l633->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_13TeV_sssf_mllmin3l633->GetYaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_13TeV_sssf_mllmin3l633->GetZaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_13TeV_sssf_mllmin3l633->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_13TeV_sssf_mllmin3l633->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_13TeV_sssf_mllmin3l633->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_sssf_mllmin3l->Add(new_histo_group_WW_wh3l_13TeV_sssf_mllmin3l,"");
   
   TH1D *new_histo_group_VVV_wh3l_13TeV_sssf_mllmin3l634 = new TH1D("new_histo_group_VVV_wh3l_13TeV_sssf_mllmin3l634","histo_VVV",20,10,200);
   new_histo_group_VVV_wh3l_13TeV_sssf_mllmin3l634->SetBinContent(4,0.0007784473);
   new_histo_group_VVV_wh3l_13TeV_sssf_mllmin3l634->SetBinContent(7,0.0005490761);
   new_histo_group_VVV_wh3l_13TeV_sssf_mllmin3l634->SetBinError(4,0.0007784473);
   new_histo_group_VVV_wh3l_13TeV_sssf_mllmin3l634->SetBinError(7,0.0005490761);
   new_histo_group_VVV_wh3l_13TeV_sssf_mllmin3l634->SetEntries(2);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_13TeV_sssf_mllmin3l634->SetFillColor(ci);
   new_histo_group_VVV_wh3l_13TeV_sssf_mllmin3l634->SetFillStyle(3001);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_13TeV_sssf_mllmin3l634->SetLineColor(ci);
   new_histo_group_VVV_wh3l_13TeV_sssf_mllmin3l634->GetXaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_13TeV_sssf_mllmin3l634->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_13TeV_sssf_mllmin3l634->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_13TeV_sssf_mllmin3l634->GetXaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_13TeV_sssf_mllmin3l634->GetYaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_13TeV_sssf_mllmin3l634->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_13TeV_sssf_mllmin3l634->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_13TeV_sssf_mllmin3l634->GetYaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_13TeV_sssf_mllmin3l634->GetZaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_13TeV_sssf_mllmin3l634->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_13TeV_sssf_mllmin3l634->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_13TeV_sssf_mllmin3l634->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_sssf_mllmin3l->Add(new_histo_group_VVV_wh3l_13TeV_sssf_mllmin3l,"");
   
   TH1D *new_histo_group_Vg_wh3l_13TeV_sssf_mllmin3l635 = new TH1D("new_histo_group_Vg_wh3l_13TeV_sssf_mllmin3l635","histo_Vg",20,10,200);
   new_histo_group_Vg_wh3l_13TeV_sssf_mllmin3l635->SetBinContent(2,0.0522728);
   new_histo_group_Vg_wh3l_13TeV_sssf_mllmin3l635->SetBinError(2,0.0522728);
   new_histo_group_Vg_wh3l_13TeV_sssf_mllmin3l635->SetEntries(1);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_13TeV_sssf_mllmin3l635->SetFillColor(ci);
   new_histo_group_Vg_wh3l_13TeV_sssf_mllmin3l635->SetFillStyle(3001);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_13TeV_sssf_mllmin3l635->SetLineColor(ci);
   new_histo_group_Vg_wh3l_13TeV_sssf_mllmin3l635->GetXaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_13TeV_sssf_mllmin3l635->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_13TeV_sssf_mllmin3l635->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_13TeV_sssf_mllmin3l635->GetXaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_13TeV_sssf_mllmin3l635->GetYaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_13TeV_sssf_mllmin3l635->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_13TeV_sssf_mllmin3l635->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_13TeV_sssf_mllmin3l635->GetYaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_13TeV_sssf_mllmin3l635->GetZaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_13TeV_sssf_mllmin3l635->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_13TeV_sssf_mllmin3l635->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_13TeV_sssf_mllmin3l635->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_sssf_mllmin3l->Add(new_histo_group_Vg_wh3l_13TeV_sssf_mllmin3l,"");
   
   TH1D *new_histo_group_ZZ_wh3l_13TeV_sssf_mllmin3l636 = new TH1D("new_histo_group_ZZ_wh3l_13TeV_sssf_mllmin3l636","histo_ZZ",20,10,200);
   new_histo_group_ZZ_wh3l_13TeV_sssf_mllmin3l636->SetBinContent(3,0.07785033);
   new_histo_group_ZZ_wh3l_13TeV_sssf_mllmin3l636->SetBinError(3,0.05530859);
   new_histo_group_ZZ_wh3l_13TeV_sssf_mllmin3l636->SetEntries(2);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_13TeV_sssf_mllmin3l636->SetFillColor(ci);
   new_histo_group_ZZ_wh3l_13TeV_sssf_mllmin3l636->SetFillStyle(3001);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_13TeV_sssf_mllmin3l636->SetLineColor(ci);
   new_histo_group_ZZ_wh3l_13TeV_sssf_mllmin3l636->GetXaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_13TeV_sssf_mllmin3l636->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_13TeV_sssf_mllmin3l636->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_13TeV_sssf_mllmin3l636->GetXaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_13TeV_sssf_mllmin3l636->GetYaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_13TeV_sssf_mllmin3l636->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_13TeV_sssf_mllmin3l636->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_13TeV_sssf_mllmin3l636->GetYaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_13TeV_sssf_mllmin3l636->GetZaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_13TeV_sssf_mllmin3l636->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_13TeV_sssf_mllmin3l636->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_13TeV_sssf_mllmin3l636->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_sssf_mllmin3l->Add(new_histo_group_ZZ_wh3l_13TeV_sssf_mllmin3l,"");
   
   TH1D *new_histo_group_WZ_wh3l_13TeV_sssf_mllmin3l637 = new TH1D("new_histo_group_WZ_wh3l_13TeV_sssf_mllmin3l637","histo_WZ",20,10,200);
   new_histo_group_WZ_wh3l_13TeV_sssf_mllmin3l637->SetBinContent(1,0.01853837);
   new_histo_group_WZ_wh3l_13TeV_sssf_mllmin3l637->SetBinContent(2,0.0417047);
   new_histo_group_WZ_wh3l_13TeV_sssf_mllmin3l637->SetBinContent(3,0.1429881);
   new_histo_group_WZ_wh3l_13TeV_sssf_mllmin3l637->SetBinContent(4,0.188531);
   new_histo_group_WZ_wh3l_13TeV_sssf_mllmin3l637->SetBinContent(5,0.1103692);
   new_histo_group_WZ_wh3l_13TeV_sssf_mllmin3l637->SetBinContent(6,0.05018871);
   new_histo_group_WZ_wh3l_13TeV_sssf_mllmin3l637->SetBinContent(7,0.03372228);
   new_histo_group_WZ_wh3l_13TeV_sssf_mllmin3l637->SetBinContent(8,0.01825283);
   new_histo_group_WZ_wh3l_13TeV_sssf_mllmin3l637->SetBinContent(9,0.01836765);
   new_histo_group_WZ_wh3l_13TeV_sssf_mllmin3l637->SetBinError(1,0.009526513);
   new_histo_group_WZ_wh3l_13TeV_sssf_mllmin3l637->SetBinError(2,0.01477391);
   new_histo_group_WZ_wh3l_13TeV_sssf_mllmin3l637->SetBinError(3,0.02788436);
   new_histo_group_WZ_wh3l_13TeV_sssf_mllmin3l637->SetBinError(4,0.03306691);
   new_histo_group_WZ_wh3l_13TeV_sssf_mllmin3l637->SetBinError(5,0.02301822);
   new_histo_group_WZ_wh3l_13TeV_sssf_mllmin3l637->SetBinError(6,0.01568207);
   new_histo_group_WZ_wh3l_13TeV_sssf_mllmin3l637->SetBinError(7,0.01390479);
   new_histo_group_WZ_wh3l_13TeV_sssf_mllmin3l637->SetBinError(8,0.009707654);
   new_histo_group_WZ_wh3l_13TeV_sssf_mllmin3l637->SetBinError(9,0.009603792);
   new_histo_group_WZ_wh3l_13TeV_sssf_mllmin3l637->SetEntries(128);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_13TeV_sssf_mllmin3l637->SetFillColor(ci);
   new_histo_group_WZ_wh3l_13TeV_sssf_mllmin3l637->SetFillStyle(3001);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_13TeV_sssf_mllmin3l637->SetLineColor(ci);
   new_histo_group_WZ_wh3l_13TeV_sssf_mllmin3l637->GetXaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_13TeV_sssf_mllmin3l637->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_13TeV_sssf_mllmin3l637->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_13TeV_sssf_mllmin3l637->GetXaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_13TeV_sssf_mllmin3l637->GetYaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_13TeV_sssf_mllmin3l637->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_13TeV_sssf_mllmin3l637->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_13TeV_sssf_mllmin3l637->GetYaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_13TeV_sssf_mllmin3l637->GetZaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_13TeV_sssf_mllmin3l637->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_13TeV_sssf_mllmin3l637->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_13TeV_sssf_mllmin3l637->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_sssf_mllmin3l->Add(new_histo_group_WZ_wh3l_13TeV_sssf_mllmin3l,"");
   
   TH1D *new_histo_group_Higgs_wh3l_13TeV_sssf_mllmin3l638 = new TH1D("new_histo_group_Higgs_wh3l_13TeV_sssf_mllmin3l638","histo_H_htt",20,10,200);
   new_histo_group_Higgs_wh3l_13TeV_sssf_mllmin3l638->SetBinContent(1,0.02930812);
   new_histo_group_Higgs_wh3l_13TeV_sssf_mllmin3l638->SetBinContent(2,0.05292856);
   new_histo_group_Higgs_wh3l_13TeV_sssf_mllmin3l638->SetBinContent(3,0.05057574);
   new_histo_group_Higgs_wh3l_13TeV_sssf_mllmin3l638->SetBinContent(4,0.05058111);
   new_histo_group_Higgs_wh3l_13TeV_sssf_mllmin3l638->SetBinContent(5,0.04843984);
   new_histo_group_Higgs_wh3l_13TeV_sssf_mllmin3l638->SetBinContent(6,0.03073863);
   new_histo_group_Higgs_wh3l_13TeV_sssf_mllmin3l638->SetBinContent(7,0.01875275);
   new_histo_group_Higgs_wh3l_13TeV_sssf_mllmin3l638->SetBinContent(8,0.005147506);
   new_histo_group_Higgs_wh3l_13TeV_sssf_mllmin3l638->SetBinContent(9,0.003059901);
   new_histo_group_Higgs_wh3l_13TeV_sssf_mllmin3l638->SetBinContent(10,0.0003164354);
   new_histo_group_Higgs_wh3l_13TeV_sssf_mllmin3l638->SetBinError(1,0.006380812);
   new_histo_group_Higgs_wh3l_13TeV_sssf_mllmin3l638->SetBinError(2,0.008423891);
   new_histo_group_Higgs_wh3l_13TeV_sssf_mllmin3l638->SetBinError(3,0.007630912);
   new_histo_group_Higgs_wh3l_13TeV_sssf_mllmin3l638->SetBinError(4,0.007147448);
   new_histo_group_Higgs_wh3l_13TeV_sssf_mllmin3l638->SetBinError(5,0.006783433);
   new_histo_group_Higgs_wh3l_13TeV_sssf_mllmin3l638->SetBinError(6,0.005102998);
   new_histo_group_Higgs_wh3l_13TeV_sssf_mllmin3l638->SetBinError(7,0.004407582);
   new_histo_group_Higgs_wh3l_13TeV_sssf_mllmin3l638->SetBinError(8,0.001690661);
   new_histo_group_Higgs_wh3l_13TeV_sssf_mllmin3l638->SetBinError(9,0.00126864);
   new_histo_group_Higgs_wh3l_13TeV_sssf_mllmin3l638->SetBinError(10,0.0003164354);
   new_histo_group_Higgs_wh3l_13TeV_sssf_mllmin3l638->SetEntries(522);
   new_histo_group_Higgs_wh3l_13TeV_sssf_mllmin3l638->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_13TeV_sssf_mllmin3l638->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_13TeV_sssf_mllmin3l638->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_13TeV_sssf_mllmin3l638->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_13TeV_sssf_mllmin3l638->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_sssf_mllmin3l638->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_sssf_mllmin3l638->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_13TeV_sssf_mllmin3l638->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_13TeV_sssf_mllmin3l638->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_sssf_mllmin3l638->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_sssf_mllmin3l638->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_13TeV_sssf_mllmin3l638->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_13TeV_sssf_mllmin3l638->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_sssf_mllmin3l638->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_sssf_mllmin3l638->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_sssf_mllmin3l->Add(new_histo_group_Higgs_wh3l_13TeV_sssf_mllmin3l,"");
   thsBackground_grouped_wh3l_13TeV_sssf_mllmin3l->Draw("hist same");
   
   thsSignal_grouped_wh3l_13TeV_sssf_mllmin3l = new THStack();
   thsSignal_grouped_wh3l_13TeV_sssf_mllmin3l->SetName("thsSignal_grouped_wh3l_13TeV_sssf_mllmin3l");
   thsSignal_grouped_wh3l_13TeV_sssf_mllmin3l->SetTitle("thsSignal_grouped_wh3l_13TeV_sssf_mllmin3l");
   
   TH1F *thsSignal_grouped_wh3l_13TeV_sssf_mllmin3l_stack_128 = new TH1F("thsSignal_grouped_wh3l_13TeV_sssf_mllmin3l_stack_128","thsSignal_grouped_wh3l_13TeV_sssf_mllmin3l",20,10,200);
   thsSignal_grouped_wh3l_13TeV_sssf_mllmin3l_stack_128->SetMinimum(0);
   thsSignal_grouped_wh3l_13TeV_sssf_mllmin3l_stack_128->SetMaximum(0.06442008);
   thsSignal_grouped_wh3l_13TeV_sssf_mllmin3l_stack_128->SetDirectory(0);
   thsSignal_grouped_wh3l_13TeV_sssf_mllmin3l_stack_128->SetStats(0);
   thsSignal_grouped_wh3l_13TeV_sssf_mllmin3l_stack_128->SetLineStyle(0);
   thsSignal_grouped_wh3l_13TeV_sssf_mllmin3l_stack_128->SetMarkerStyle(20);
   thsSignal_grouped_wh3l_13TeV_sssf_mllmin3l_stack_128->GetXaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_13TeV_sssf_mllmin3l_stack_128->GetXaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_13TeV_sssf_mllmin3l_stack_128->GetXaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_13TeV_sssf_mllmin3l_stack_128->GetXaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_13TeV_sssf_mllmin3l_stack_128->GetXaxis()->SetTitleOffset(0.9);
   thsSignal_grouped_wh3l_13TeV_sssf_mllmin3l_stack_128->GetXaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_13TeV_sssf_mllmin3l_stack_128->GetYaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_13TeV_sssf_mllmin3l_stack_128->GetYaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_13TeV_sssf_mllmin3l_stack_128->GetYaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_13TeV_sssf_mllmin3l_stack_128->GetYaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_13TeV_sssf_mllmin3l_stack_128->GetYaxis()->SetTitleOffset(1.25);
   thsSignal_grouped_wh3l_13TeV_sssf_mllmin3l_stack_128->GetYaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_13TeV_sssf_mllmin3l_stack_128->GetZaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_13TeV_sssf_mllmin3l_stack_128->GetZaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_13TeV_sssf_mllmin3l_stack_128->GetZaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_13TeV_sssf_mllmin3l_stack_128->GetZaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_13TeV_sssf_mllmin3l_stack_128->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_13TeV_sssf_mllmin3l->SetHistogram(thsSignal_grouped_wh3l_13TeV_sssf_mllmin3l_stack_128);
   
   
   TH1D *new_histo_group_Higgs_wh3l_13TeV_sssf_mllmin3l639 = new TH1D("new_histo_group_Higgs_wh3l_13TeV_sssf_mllmin3l639","histo_H_htt",20,10,200);
   new_histo_group_Higgs_wh3l_13TeV_sssf_mllmin3l639->SetBinContent(1,0.02930812);
   new_histo_group_Higgs_wh3l_13TeV_sssf_mllmin3l639->SetBinContent(2,0.05292856);
   new_histo_group_Higgs_wh3l_13TeV_sssf_mllmin3l639->SetBinContent(3,0.05057574);
   new_histo_group_Higgs_wh3l_13TeV_sssf_mllmin3l639->SetBinContent(4,0.05058111);
   new_histo_group_Higgs_wh3l_13TeV_sssf_mllmin3l639->SetBinContent(5,0.04843984);
   new_histo_group_Higgs_wh3l_13TeV_sssf_mllmin3l639->SetBinContent(6,0.03073863);
   new_histo_group_Higgs_wh3l_13TeV_sssf_mllmin3l639->SetBinContent(7,0.01875275);
   new_histo_group_Higgs_wh3l_13TeV_sssf_mllmin3l639->SetBinContent(8,0.005147506);
   new_histo_group_Higgs_wh3l_13TeV_sssf_mllmin3l639->SetBinContent(9,0.003059901);
   new_histo_group_Higgs_wh3l_13TeV_sssf_mllmin3l639->SetBinContent(10,0.0003164354);
   new_histo_group_Higgs_wh3l_13TeV_sssf_mllmin3l639->SetBinError(1,0.006380812);
   new_histo_group_Higgs_wh3l_13TeV_sssf_mllmin3l639->SetBinError(2,0.008423891);
   new_histo_group_Higgs_wh3l_13TeV_sssf_mllmin3l639->SetBinError(3,0.007630912);
   new_histo_group_Higgs_wh3l_13TeV_sssf_mllmin3l639->SetBinError(4,0.007147448);
   new_histo_group_Higgs_wh3l_13TeV_sssf_mllmin3l639->SetBinError(5,0.006783433);
   new_histo_group_Higgs_wh3l_13TeV_sssf_mllmin3l639->SetBinError(6,0.005102998);
   new_histo_group_Higgs_wh3l_13TeV_sssf_mllmin3l639->SetBinError(7,0.004407582);
   new_histo_group_Higgs_wh3l_13TeV_sssf_mllmin3l639->SetBinError(8,0.001690661);
   new_histo_group_Higgs_wh3l_13TeV_sssf_mllmin3l639->SetBinError(9,0.00126864);
   new_histo_group_Higgs_wh3l_13TeV_sssf_mllmin3l639->SetBinError(10,0.0003164354);
   new_histo_group_Higgs_wh3l_13TeV_sssf_mllmin3l639->SetEntries(522);
   new_histo_group_Higgs_wh3l_13TeV_sssf_mllmin3l639->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_13TeV_sssf_mllmin3l639->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_13TeV_sssf_mllmin3l639->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_13TeV_sssf_mllmin3l639->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_13TeV_sssf_mllmin3l639->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_sssf_mllmin3l639->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_sssf_mllmin3l639->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_13TeV_sssf_mllmin3l639->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_13TeV_sssf_mllmin3l639->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_sssf_mllmin3l639->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_sssf_mllmin3l639->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_13TeV_sssf_mllmin3l639->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_13TeV_sssf_mllmin3l639->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_sssf_mllmin3l639->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_sssf_mllmin3l639->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_13TeV_sssf_mllmin3l->Add(new_histo_group_Higgs_wh3l_13TeV_sssf_mllmin3l,"");
   thsSignal_grouped_wh3l_13TeV_sssf_mllmin3l->Draw("hist same noclear");
   
   Double_t _fx3127[20] = {
   14.75,
   24.25,
   33.75,
   43.25,
   52.75,
   62.25,
   71.75,
   81.25,
   90.75,
   100.25,
   109.75,
   119.25,
   128.75,
   138.25,
   147.75,
   157.25,
   166.75,
   176.25,
   185.75,
   195.25};
   Double_t _fy3127[20] = {
   -0.06053341,
   -0.01233297,
   0.7757119,
   0.6526421,
   1.19894,
   0.8154225,
   0.01225288,
   -0.08292723,
   0.3834835,
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
   Double_t _felx3127[20] = {
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75};
   Double_t _fely3127[20] = {
   0.09282273,
   0.1514048,
   0.6654234,
   0.5229944,
   0.6654747,
   0.8255693,
   0.1345951,
   0.1298237,
   0.3959107,
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
   Double_t _fehx3127[20] = {
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75};
   Double_t _fehy3127[20] = {
   0.09282117,
   0.151339,
   0.8236489,
   0.5742571,
   0.6654748,
   0.8583887,
   0.0372799,
   0.1298238,
   0.3959107,
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
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(20,_fx3127,_fy3127,_felx3127,_fehx3127,_fely3127,_fehy3127);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(12);
   grae->SetFillStyle(3004);
   grae->SetLineColor(12);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3127 = new TH1F("Graph_Graph3127","",100,0,219);
   Graph_Graph3127->SetMinimum(-0.4204675);
   Graph_Graph3127->SetMaximum(2.072131);
   Graph_Graph3127->SetDirectory(0);
   Graph_Graph3127->SetStats(0);
   Graph_Graph3127->SetLineStyle(0);
   Graph_Graph3127->SetMarkerStyle(20);
   Graph_Graph3127->GetXaxis()->SetLabelFont(42);
   Graph_Graph3127->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3127->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3127->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3127->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3127->GetXaxis()->SetTitleFont(42);
   Graph_Graph3127->GetYaxis()->SetLabelFont(42);
   Graph_Graph3127->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3127->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3127->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3127->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3127->GetYaxis()->SetTitleFont(42);
   Graph_Graph3127->GetZaxis()->SetLabelFont(42);
   Graph_Graph3127->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3127->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3127->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3127->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3127);
   
   grae->Draw("2");
   
   Double_t _fx3128[20] = {
   14.75,
   24.25,
   33.75,
   43.25,
   52.75,
   62.25,
   71.75,
   81.25,
   90.75,
   100.25,
   109.75,
   119.25,
   128.75,
   138.25,
   147.75,
   157.25,
   166.75,
   176.25,
   185.75,
   195.25};
   Double_t _fy3128[20] = {
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
   Double_t _felx3128[20] = {
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75};
   Double_t _fely3128[20] = {
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
   Double_t _fehx3128[20] = {
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75};
   Double_t _fehy3128[20] = {
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
   grae = new TGraphAsymmErrors(20,_fx3128,_fy3128,_felx3128,_fehx3128,_fely3128,_fehy3128);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(1);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3128 = new TH1F("Graph_Graph3128","",100,0,219);
   Graph_Graph3128->SetMinimum(0);
   Graph_Graph3128->SetMaximum(1.262698);
   Graph_Graph3128->SetDirectory(0);
   Graph_Graph3128->SetStats(0);
   Graph_Graph3128->SetLineStyle(0);
   Graph_Graph3128->SetMarkerStyle(20);
   Graph_Graph3128->GetXaxis()->SetLabelFont(42);
   Graph_Graph3128->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3128->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3128->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3128->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3128->GetXaxis()->SetTitleFont(42);
   Graph_Graph3128->GetYaxis()->SetLabelFont(42);
   Graph_Graph3128->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3128->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3128->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3128->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3128->GetYaxis()->SetTitleFont(42);
   Graph_Graph3128->GetZaxis()->SetLabelFont(42);
   Graph_Graph3128->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3128->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3128->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3128->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3128);
   
   grae->Draw("p0");
   
   TLegend *leg = new TLegend(0.2,0.7,0.8,0.9,NULL,"brNDC");
   leg->SetTextFont(62);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("new_histo_group_Fake_wh3l_13TeV_sssf_mllmin3l","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_13TeV_sssf_mllmin3l","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_13TeV_sssf_mllmin3l","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_13TeV_sssf_mllmin3l","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_13TeV_sssf_mllmin3l","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_13TeV_sssf_mllmin3l","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_13TeV_sssf_mllmin3l","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_13TeV_sssf_mllmin3l","Data","EPL");
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
   entry=leg->AddEntry("new_histo_group_Fake_wh3l_13TeV_sssf_mllmin3l","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_13TeV_sssf_mllmin3l","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_13TeV_sssf_mllmin3l","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_13TeV_sssf_mllmin3l","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_13TeV_sssf_mllmin3l","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_13TeV_sssf_mllmin3l","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_13TeV_sssf_mllmin3l","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_13TeV_sssf_mllmin3l","Data","EPL");
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
   
   TH1F *hframe_copy640 = new TH1F("hframe_copy640","",1000,10,200);
   hframe_copy640->SetMinimum(0);
   hframe_copy640->SetMaximum(3.118449);
   hframe_copy640->SetDirectory(0);
   hframe_copy640->SetStats(0);
   hframe_copy640->SetLineStyle(0);
   hframe_copy640->SetMarkerStyle(20);
   hframe_copy640->GetXaxis()->SetTitle("min m_{ll} [GeV]");
   hframe_copy640->GetXaxis()->SetNdivisions(506);
   hframe_copy640->GetXaxis()->SetLabelFont(42);
   hframe_copy640->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy640->GetXaxis()->SetLabelSize(0.05);
   hframe_copy640->GetXaxis()->SetTitleSize(0.06);
   hframe_copy640->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy640->GetXaxis()->SetTitleFont(42);
   hframe_copy640->GetYaxis()->SetTitle("Events");
   hframe_copy640->GetYaxis()->SetLabelFont(42);
   hframe_copy640->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy640->GetYaxis()->SetLabelSize(0.05);
   hframe_copy640->GetYaxis()->SetTitleSize(0.06);
   hframe_copy640->GetYaxis()->SetTitleOffset(1.25);
   hframe_copy640->GetYaxis()->SetTitleFont(42);
   hframe_copy640->GetZaxis()->SetLabelFont(42);
   hframe_copy640->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy640->GetZaxis()->SetLabelSize(0.05);
   hframe_copy640->GetZaxis()->SetTitleSize(0.06);
   hframe_copy640->GetZaxis()->SetTitleFont(42);
   hframe_copy640->Draw("sameaxis");
   ccwh3l_13TeV_sssf_mllmin3l->Modified();
   ccwh3l_13TeV_sssf_mllmin3l->cd();
   ccwh3l_13TeV_sssf_mllmin3l->SetSelected(ccwh3l_13TeV_sssf_mllmin3l);
}
