void c_wh3l_13TeV_sssf_nbjet_3l()
{
//=========Macro generated from canvas: ccwh3l_13TeV_sssf_nbjet_3l/cc
//=========  (Wed Jun 29 01:34:25 2016) by ROOT version6.02/13
   TCanvas *ccwh3l_13TeV_sssf_nbjet_3l = new TCanvas("ccwh3l_13TeV_sssf_nbjet_3l", "cc",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   ccwh3l_13TeV_sssf_nbjet_3l->SetHighLightColor(2);
   ccwh3l_13TeV_sssf_nbjet_3l->Range(-1.6,-1.574469,8.4,10.53683);
   ccwh3l_13TeV_sssf_nbjet_3l->SetFillColor(0);
   ccwh3l_13TeV_sssf_nbjet_3l->SetBorderMode(0);
   ccwh3l_13TeV_sssf_nbjet_3l->SetBorderSize(2);
   ccwh3l_13TeV_sssf_nbjet_3l->SetTickx(1);
   ccwh3l_13TeV_sssf_nbjet_3l->SetTicky(1);
   ccwh3l_13TeV_sssf_nbjet_3l->SetLeftMargin(0.16);
   ccwh3l_13TeV_sssf_nbjet_3l->SetRightMargin(0.04);
   ccwh3l_13TeV_sssf_nbjet_3l->SetTopMargin(0.05);
   ccwh3l_13TeV_sssf_nbjet_3l->SetBottomMargin(0.13);
   ccwh3l_13TeV_sssf_nbjet_3l->SetFrameFillStyle(0);
   ccwh3l_13TeV_sssf_nbjet_3l->SetFrameBorderMode(0);
   ccwh3l_13TeV_sssf_nbjet_3l->SetFrameFillStyle(0);
   ccwh3l_13TeV_sssf_nbjet_3l->SetFrameBorderMode(0);
   
   TH1F *hframe661 = new TH1F("hframe661","",1000,0,8);
   hframe661->SetMinimum(0);
   hframe661->SetMaximum(9.931269);
   hframe661->SetDirectory(0);
   hframe661->SetStats(0);
   hframe661->SetLineStyle(0);
   hframe661->SetMarkerStyle(20);
   hframe661->GetXaxis()->SetTitle("N_bJets");
   hframe661->GetXaxis()->SetNdivisions(506);
   hframe661->GetXaxis()->SetLabelFont(42);
   hframe661->GetXaxis()->SetLabelOffset(0.007);
   hframe661->GetXaxis()->SetLabelSize(0.05);
   hframe661->GetXaxis()->SetTitleSize(0.06);
   hframe661->GetXaxis()->SetTitleOffset(0.9);
   hframe661->GetXaxis()->SetTitleFont(42);
   hframe661->GetYaxis()->SetTitle("Events");
   hframe661->GetYaxis()->SetLabelFont(42);
   hframe661->GetYaxis()->SetLabelOffset(0.007);
   hframe661->GetYaxis()->SetLabelSize(0.05);
   hframe661->GetYaxis()->SetTitleSize(0.06);
   hframe661->GetYaxis()->SetTitleOffset(1.25);
   hframe661->GetYaxis()->SetTitleFont(42);
   hframe661->GetZaxis()->SetLabelFont(42);
   hframe661->GetZaxis()->SetLabelOffset(0.007);
   hframe661->GetZaxis()->SetLabelSize(0.05);
   hframe661->GetZaxis()->SetTitleSize(0.06);
   hframe661->GetZaxis()->SetTitleFont(42);
   hframe661->Draw(" ");
   
   THStack *thsBackground_grouped_wh3l_13TeV_sssf_nbjet_3l = new THStack();
   thsBackground_grouped_wh3l_13TeV_sssf_nbjet_3l->SetName("thsBackground_grouped_wh3l_13TeV_sssf_nbjet_3l");
   thsBackground_grouped_wh3l_13TeV_sssf_nbjet_3l->SetTitle("thsBackground_grouped_wh3l_13TeV_sssf_nbjet_3l");
   
   TH1F *thsBackground_grouped_wh3l_13TeV_sssf_nbjet_3l_stack_133 = new TH1F("thsBackground_grouped_wh3l_13TeV_sssf_nbjet_3l_stack_133","thsBackground_grouped_wh3l_13TeV_sssf_nbjet_3l",8,0,8);
   thsBackground_grouped_wh3l_13TeV_sssf_nbjet_3l_stack_133->SetMinimum(0);
   thsBackground_grouped_wh3l_13TeV_sssf_nbjet_3l_stack_133->SetMaximum(4.473178);
   thsBackground_grouped_wh3l_13TeV_sssf_nbjet_3l_stack_133->SetDirectory(0);
   thsBackground_grouped_wh3l_13TeV_sssf_nbjet_3l_stack_133->SetStats(0);
   thsBackground_grouped_wh3l_13TeV_sssf_nbjet_3l_stack_133->SetLineStyle(0);
   thsBackground_grouped_wh3l_13TeV_sssf_nbjet_3l_stack_133->SetMarkerStyle(20);
   thsBackground_grouped_wh3l_13TeV_sssf_nbjet_3l_stack_133->GetXaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_13TeV_sssf_nbjet_3l_stack_133->GetXaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_13TeV_sssf_nbjet_3l_stack_133->GetXaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_13TeV_sssf_nbjet_3l_stack_133->GetXaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_13TeV_sssf_nbjet_3l_stack_133->GetXaxis()->SetTitleOffset(0.9);
   thsBackground_grouped_wh3l_13TeV_sssf_nbjet_3l_stack_133->GetXaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_sssf_nbjet_3l_stack_133->GetYaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_13TeV_sssf_nbjet_3l_stack_133->GetYaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_13TeV_sssf_nbjet_3l_stack_133->GetYaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_13TeV_sssf_nbjet_3l_stack_133->GetYaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_13TeV_sssf_nbjet_3l_stack_133->GetYaxis()->SetTitleOffset(1.25);
   thsBackground_grouped_wh3l_13TeV_sssf_nbjet_3l_stack_133->GetYaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_sssf_nbjet_3l_stack_133->GetZaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_13TeV_sssf_nbjet_3l_stack_133->GetZaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_13TeV_sssf_nbjet_3l_stack_133->GetZaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_13TeV_sssf_nbjet_3l_stack_133->GetZaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_13TeV_sssf_nbjet_3l_stack_133->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_sssf_nbjet_3l->SetHistogram(thsBackground_grouped_wh3l_13TeV_sssf_nbjet_3l_stack_133);
   
   
   TH1D *new_histo_group_Fake_wh3l_13TeV_sssf_nbjet_3l662 = new TH1D("new_histo_group_Fake_wh3l_13TeV_sssf_nbjet_3l662","histo_Fake",8,0,8);
   new_histo_group_Fake_wh3l_13TeV_sssf_nbjet_3l662->SetBinContent(1,2.90203);
   new_histo_group_Fake_wh3l_13TeV_sssf_nbjet_3l662->SetBinError(1,1.358139);
   new_histo_group_Fake_wh3l_13TeV_sssf_nbjet_3l662->SetEntries(34);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_13TeV_sssf_nbjet_3l662->SetFillColor(ci);
   new_histo_group_Fake_wh3l_13TeV_sssf_nbjet_3l662->SetFillStyle(3001);

   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_13TeV_sssf_nbjet_3l662->SetLineColor(ci);
   new_histo_group_Fake_wh3l_13TeV_sssf_nbjet_3l662->GetXaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_13TeV_sssf_nbjet_3l662->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_13TeV_sssf_nbjet_3l662->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_13TeV_sssf_nbjet_3l662->GetXaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_13TeV_sssf_nbjet_3l662->GetYaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_13TeV_sssf_nbjet_3l662->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_13TeV_sssf_nbjet_3l662->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_13TeV_sssf_nbjet_3l662->GetYaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_13TeV_sssf_nbjet_3l662->GetZaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_13TeV_sssf_nbjet_3l662->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_13TeV_sssf_nbjet_3l662->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_13TeV_sssf_nbjet_3l662->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_sssf_nbjet_3l->Add(new_histo_group_Fake_wh3l_13TeV_sssf_nbjet_3l,"");
   
   TH1D *new_histo_group_WW_wh3l_13TeV_sssf_nbjet_3l663 = new TH1D("new_histo_group_WW_wh3l_13TeV_sssf_nbjet_3l663","histo_WW",8,0,8);
   new_histo_group_WW_wh3l_13TeV_sssf_nbjet_3l663->SetBinContent(1,0.02651546);
   new_histo_group_WW_wh3l_13TeV_sssf_nbjet_3l663->SetBinError(1,0.01918247);
   new_histo_group_WW_wh3l_13TeV_sssf_nbjet_3l663->SetEntries(2);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_13TeV_sssf_nbjet_3l663->SetFillColor(ci);
   new_histo_group_WW_wh3l_13TeV_sssf_nbjet_3l663->SetFillStyle(3001);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_13TeV_sssf_nbjet_3l663->SetLineColor(ci);
   new_histo_group_WW_wh3l_13TeV_sssf_nbjet_3l663->GetXaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_13TeV_sssf_nbjet_3l663->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_13TeV_sssf_nbjet_3l663->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_13TeV_sssf_nbjet_3l663->GetXaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_13TeV_sssf_nbjet_3l663->GetYaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_13TeV_sssf_nbjet_3l663->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_13TeV_sssf_nbjet_3l663->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_13TeV_sssf_nbjet_3l663->GetYaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_13TeV_sssf_nbjet_3l663->GetZaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_13TeV_sssf_nbjet_3l663->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_13TeV_sssf_nbjet_3l663->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_13TeV_sssf_nbjet_3l663->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_sssf_nbjet_3l->Add(new_histo_group_WW_wh3l_13TeV_sssf_nbjet_3l,"");
   
   TH1D *new_histo_group_VVV_wh3l_13TeV_sssf_nbjet_3l664 = new TH1D("new_histo_group_VVV_wh3l_13TeV_sssf_nbjet_3l664","histo_VVV",8,0,8);
   new_histo_group_VVV_wh3l_13TeV_sssf_nbjet_3l664->SetBinContent(1,0.001327523);
   new_histo_group_VVV_wh3l_13TeV_sssf_nbjet_3l664->SetBinError(1,0.0009526094);
   new_histo_group_VVV_wh3l_13TeV_sssf_nbjet_3l664->SetEntries(2);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_13TeV_sssf_nbjet_3l664->SetFillColor(ci);
   new_histo_group_VVV_wh3l_13TeV_sssf_nbjet_3l664->SetFillStyle(3001);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_13TeV_sssf_nbjet_3l664->SetLineColor(ci);
   new_histo_group_VVV_wh3l_13TeV_sssf_nbjet_3l664->GetXaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_13TeV_sssf_nbjet_3l664->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_13TeV_sssf_nbjet_3l664->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_13TeV_sssf_nbjet_3l664->GetXaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_13TeV_sssf_nbjet_3l664->GetYaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_13TeV_sssf_nbjet_3l664->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_13TeV_sssf_nbjet_3l664->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_13TeV_sssf_nbjet_3l664->GetYaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_13TeV_sssf_nbjet_3l664->GetZaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_13TeV_sssf_nbjet_3l664->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_13TeV_sssf_nbjet_3l664->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_13TeV_sssf_nbjet_3l664->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_sssf_nbjet_3l->Add(new_histo_group_VVV_wh3l_13TeV_sssf_nbjet_3l,"");
   
   TH1D *new_histo_group_Vg_wh3l_13TeV_sssf_nbjet_3l665 = new TH1D("new_histo_group_Vg_wh3l_13TeV_sssf_nbjet_3l665","histo_Vg",8,0,8);
   new_histo_group_Vg_wh3l_13TeV_sssf_nbjet_3l665->SetBinContent(1,0.0522728);
   new_histo_group_Vg_wh3l_13TeV_sssf_nbjet_3l665->SetBinError(1,0.0522728);
   new_histo_group_Vg_wh3l_13TeV_sssf_nbjet_3l665->SetEntries(1);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_13TeV_sssf_nbjet_3l665->SetFillColor(ci);
   new_histo_group_Vg_wh3l_13TeV_sssf_nbjet_3l665->SetFillStyle(3001);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_13TeV_sssf_nbjet_3l665->SetLineColor(ci);
   new_histo_group_Vg_wh3l_13TeV_sssf_nbjet_3l665->GetXaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_13TeV_sssf_nbjet_3l665->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_13TeV_sssf_nbjet_3l665->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_13TeV_sssf_nbjet_3l665->GetXaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_13TeV_sssf_nbjet_3l665->GetYaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_13TeV_sssf_nbjet_3l665->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_13TeV_sssf_nbjet_3l665->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_13TeV_sssf_nbjet_3l665->GetYaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_13TeV_sssf_nbjet_3l665->GetZaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_13TeV_sssf_nbjet_3l665->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_13TeV_sssf_nbjet_3l665->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_13TeV_sssf_nbjet_3l665->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_sssf_nbjet_3l->Add(new_histo_group_Vg_wh3l_13TeV_sssf_nbjet_3l,"");
   
   TH1D *new_histo_group_ZZ_wh3l_13TeV_sssf_nbjet_3l666 = new TH1D("new_histo_group_ZZ_wh3l_13TeV_sssf_nbjet_3l666","histo_ZZ",8,0,8);
   new_histo_group_ZZ_wh3l_13TeV_sssf_nbjet_3l666->SetBinContent(1,0.07785033);
   new_histo_group_ZZ_wh3l_13TeV_sssf_nbjet_3l666->SetBinError(1,0.05530859);
   new_histo_group_ZZ_wh3l_13TeV_sssf_nbjet_3l666->SetEntries(2);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_13TeV_sssf_nbjet_3l666->SetFillColor(ci);
   new_histo_group_ZZ_wh3l_13TeV_sssf_nbjet_3l666->SetFillStyle(3001);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_13TeV_sssf_nbjet_3l666->SetLineColor(ci);
   new_histo_group_ZZ_wh3l_13TeV_sssf_nbjet_3l666->GetXaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_13TeV_sssf_nbjet_3l666->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_13TeV_sssf_nbjet_3l666->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_13TeV_sssf_nbjet_3l666->GetXaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_13TeV_sssf_nbjet_3l666->GetYaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_13TeV_sssf_nbjet_3l666->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_13TeV_sssf_nbjet_3l666->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_13TeV_sssf_nbjet_3l666->GetYaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_13TeV_sssf_nbjet_3l666->GetZaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_13TeV_sssf_nbjet_3l666->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_13TeV_sssf_nbjet_3l666->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_13TeV_sssf_nbjet_3l666->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_sssf_nbjet_3l->Add(new_histo_group_ZZ_wh3l_13TeV_sssf_nbjet_3l,"");
   
   TH1D *new_histo_group_WZ_wh3l_13TeV_sssf_nbjet_3l667 = new TH1D("new_histo_group_WZ_wh3l_13TeV_sssf_nbjet_3l667","histo_WZ",8,0,8);
   new_histo_group_WZ_wh3l_13TeV_sssf_nbjet_3l667->SetBinContent(1,0.6226629);
   new_histo_group_WZ_wh3l_13TeV_sssf_nbjet_3l667->SetBinError(1,0.05775432);
   new_histo_group_WZ_wh3l_13TeV_sssf_nbjet_3l667->SetEntries(128);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_13TeV_sssf_nbjet_3l667->SetFillColor(ci);
   new_histo_group_WZ_wh3l_13TeV_sssf_nbjet_3l667->SetFillStyle(3001);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_13TeV_sssf_nbjet_3l667->SetLineColor(ci);
   new_histo_group_WZ_wh3l_13TeV_sssf_nbjet_3l667->GetXaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_13TeV_sssf_nbjet_3l667->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_13TeV_sssf_nbjet_3l667->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_13TeV_sssf_nbjet_3l667->GetXaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_13TeV_sssf_nbjet_3l667->GetYaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_13TeV_sssf_nbjet_3l667->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_13TeV_sssf_nbjet_3l667->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_13TeV_sssf_nbjet_3l667->GetYaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_13TeV_sssf_nbjet_3l667->GetZaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_13TeV_sssf_nbjet_3l667->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_13TeV_sssf_nbjet_3l667->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_13TeV_sssf_nbjet_3l667->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_sssf_nbjet_3l->Add(new_histo_group_WZ_wh3l_13TeV_sssf_nbjet_3l,"");
   
   TH1D *new_histo_group_Higgs_wh3l_13TeV_sssf_nbjet_3l668 = new TH1D("new_histo_group_Higgs_wh3l_13TeV_sssf_nbjet_3l668","histo_H_htt",8,0,8);
   new_histo_group_Higgs_wh3l_13TeV_sssf_nbjet_3l668->SetBinContent(1,0.2898486);
   new_histo_group_Higgs_wh3l_13TeV_sssf_nbjet_3l668->SetBinError(1,0.01780572);
   new_histo_group_Higgs_wh3l_13TeV_sssf_nbjet_3l668->SetEntries(522);
   new_histo_group_Higgs_wh3l_13TeV_sssf_nbjet_3l668->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_13TeV_sssf_nbjet_3l668->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_13TeV_sssf_nbjet_3l668->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_13TeV_sssf_nbjet_3l668->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_13TeV_sssf_nbjet_3l668->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_sssf_nbjet_3l668->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_sssf_nbjet_3l668->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_13TeV_sssf_nbjet_3l668->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_13TeV_sssf_nbjet_3l668->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_sssf_nbjet_3l668->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_sssf_nbjet_3l668->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_13TeV_sssf_nbjet_3l668->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_13TeV_sssf_nbjet_3l668->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_sssf_nbjet_3l668->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_sssf_nbjet_3l668->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_sssf_nbjet_3l->Add(new_histo_group_Higgs_wh3l_13TeV_sssf_nbjet_3l,"");
   thsBackground_grouped_wh3l_13TeV_sssf_nbjet_3l->Draw("hist same");
   
   thsSignal_grouped_wh3l_13TeV_sssf_nbjet_3l = new THStack();
   thsSignal_grouped_wh3l_13TeV_sssf_nbjet_3l->SetName("thsSignal_grouped_wh3l_13TeV_sssf_nbjet_3l");
   thsSignal_grouped_wh3l_13TeV_sssf_nbjet_3l->SetTitle("thsSignal_grouped_wh3l_13TeV_sssf_nbjet_3l");
   
   TH1F *thsSignal_grouped_wh3l_13TeV_sssf_nbjet_3l_stack_134 = new TH1F("thsSignal_grouped_wh3l_13TeV_sssf_nbjet_3l_stack_134","thsSignal_grouped_wh3l_13TeV_sssf_nbjet_3l",8,0,8);
   thsSignal_grouped_wh3l_13TeV_sssf_nbjet_3l_stack_134->SetMinimum(0);
   thsSignal_grouped_wh3l_13TeV_sssf_nbjet_3l_stack_134->SetMaximum(0.323037);
   thsSignal_grouped_wh3l_13TeV_sssf_nbjet_3l_stack_134->SetDirectory(0);
   thsSignal_grouped_wh3l_13TeV_sssf_nbjet_3l_stack_134->SetStats(0);
   thsSignal_grouped_wh3l_13TeV_sssf_nbjet_3l_stack_134->SetLineStyle(0);
   thsSignal_grouped_wh3l_13TeV_sssf_nbjet_3l_stack_134->SetMarkerStyle(20);
   thsSignal_grouped_wh3l_13TeV_sssf_nbjet_3l_stack_134->GetXaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_13TeV_sssf_nbjet_3l_stack_134->GetXaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_13TeV_sssf_nbjet_3l_stack_134->GetXaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_13TeV_sssf_nbjet_3l_stack_134->GetXaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_13TeV_sssf_nbjet_3l_stack_134->GetXaxis()->SetTitleOffset(0.9);
   thsSignal_grouped_wh3l_13TeV_sssf_nbjet_3l_stack_134->GetXaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_13TeV_sssf_nbjet_3l_stack_134->GetYaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_13TeV_sssf_nbjet_3l_stack_134->GetYaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_13TeV_sssf_nbjet_3l_stack_134->GetYaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_13TeV_sssf_nbjet_3l_stack_134->GetYaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_13TeV_sssf_nbjet_3l_stack_134->GetYaxis()->SetTitleOffset(1.25);
   thsSignal_grouped_wh3l_13TeV_sssf_nbjet_3l_stack_134->GetYaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_13TeV_sssf_nbjet_3l_stack_134->GetZaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_13TeV_sssf_nbjet_3l_stack_134->GetZaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_13TeV_sssf_nbjet_3l_stack_134->GetZaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_13TeV_sssf_nbjet_3l_stack_134->GetZaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_13TeV_sssf_nbjet_3l_stack_134->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_13TeV_sssf_nbjet_3l->SetHistogram(thsSignal_grouped_wh3l_13TeV_sssf_nbjet_3l_stack_134);
   
   
   TH1D *new_histo_group_Higgs_wh3l_13TeV_sssf_nbjet_3l669 = new TH1D("new_histo_group_Higgs_wh3l_13TeV_sssf_nbjet_3l669","histo_H_htt",8,0,8);
   new_histo_group_Higgs_wh3l_13TeV_sssf_nbjet_3l669->SetBinContent(1,0.2898486);
   new_histo_group_Higgs_wh3l_13TeV_sssf_nbjet_3l669->SetBinError(1,0.01780572);
   new_histo_group_Higgs_wh3l_13TeV_sssf_nbjet_3l669->SetEntries(522);
   new_histo_group_Higgs_wh3l_13TeV_sssf_nbjet_3l669->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_13TeV_sssf_nbjet_3l669->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_13TeV_sssf_nbjet_3l669->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_13TeV_sssf_nbjet_3l669->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_13TeV_sssf_nbjet_3l669->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_sssf_nbjet_3l669->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_sssf_nbjet_3l669->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_13TeV_sssf_nbjet_3l669->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_13TeV_sssf_nbjet_3l669->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_sssf_nbjet_3l669->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_sssf_nbjet_3l669->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_13TeV_sssf_nbjet_3l669->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_13TeV_sssf_nbjet_3l669->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_sssf_nbjet_3l669->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_sssf_nbjet_3l669->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_13TeV_sssf_nbjet_3l->Add(new_histo_group_Higgs_wh3l_13TeV_sssf_nbjet_3l,"");
   thsSignal_grouped_wh3l_13TeV_sssf_nbjet_3l->Draw("hist same noclear");
   
   Double_t _fx3133[8] = {
   0.5,
   1.5,
   2.5,
   3.5,
   4.5,
   5.5,
   6.5,
   7.5};
   Double_t _fy3133[8] = {
   3.682659,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _felx3133[8] = {
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5};
   Double_t _fely3133[8] = {
   1.84803,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fehx3133[8] = {
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5};
   Double_t _fehy3133[8] = {
   1.847996,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(8,_fx3133,_fy3133,_felx3133,_fehx3133,_fely3133,_fehy3133);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(12);
   grae->SetFillStyle(3004);
   grae->SetLineColor(12);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3133 = new TH1F("Graph_Graph3133","",100,0,8.8);
   Graph_Graph3133->SetMinimum(0);
   Graph_Graph3133->SetMaximum(6.083721);
   Graph_Graph3133->SetDirectory(0);
   Graph_Graph3133->SetStats(0);
   Graph_Graph3133->SetLineStyle(0);
   Graph_Graph3133->SetMarkerStyle(20);
   Graph_Graph3133->GetXaxis()->SetLabelFont(42);
   Graph_Graph3133->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3133->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3133->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3133->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3133->GetXaxis()->SetTitleFont(42);
   Graph_Graph3133->GetYaxis()->SetLabelFont(42);
   Graph_Graph3133->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3133->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3133->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3133->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3133->GetYaxis()->SetTitleFont(42);
   Graph_Graph3133->GetZaxis()->SetLabelFont(42);
   Graph_Graph3133->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3133->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3133->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3133->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3133);
   
   grae->Draw("2");
   
   Double_t _fx3134[8] = {
   0.5,
   1.5,
   2.5,
   3.5,
   4.5,
   5.5,
   6.5,
   7.5};
   Double_t _fy3134[8] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _felx3134[8] = {
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5};
   Double_t _fely3134[8] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fehx3134[8] = {
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5};
   Double_t _fehy3134[8] = {
   1.147908,
   1.147908,
   1.147908,
   1.147908,
   1.147908,
   1.147908,
   1.147908,
   1.147908};
   grae = new TGraphAsymmErrors(8,_fx3134,_fy3134,_felx3134,_fehx3134,_fely3134,_fehy3134);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(1);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3134 = new TH1F("Graph_Graph3134","",100,0,8.8);
   Graph_Graph3134->SetMinimum(0);
   Graph_Graph3134->SetMaximum(1.262698);
   Graph_Graph3134->SetDirectory(0);
   Graph_Graph3134->SetStats(0);
   Graph_Graph3134->SetLineStyle(0);
   Graph_Graph3134->SetMarkerStyle(20);
   Graph_Graph3134->GetXaxis()->SetLabelFont(42);
   Graph_Graph3134->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3134->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3134->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3134->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3134->GetXaxis()->SetTitleFont(42);
   Graph_Graph3134->GetYaxis()->SetLabelFont(42);
   Graph_Graph3134->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3134->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3134->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3134->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3134->GetYaxis()->SetTitleFont(42);
   Graph_Graph3134->GetZaxis()->SetLabelFont(42);
   Graph_Graph3134->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3134->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3134->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3134->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3134);
   
   grae->Draw("p0");
   
   TLegend *leg = new TLegend(0.2,0.7,0.8,0.9,NULL,"brNDC");
   leg->SetTextFont(62);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("new_histo_group_Fake_wh3l_13TeV_sssf_nbjet_3l","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_13TeV_sssf_nbjet_3l","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_13TeV_sssf_nbjet_3l","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_13TeV_sssf_nbjet_3l","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_13TeV_sssf_nbjet_3l","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_13TeV_sssf_nbjet_3l","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_13TeV_sssf_nbjet_3l","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_13TeV_sssf_nbjet_3l","Data","EPL");
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
   entry=leg->AddEntry("new_histo_group_Fake_wh3l_13TeV_sssf_nbjet_3l","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_13TeV_sssf_nbjet_3l","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_13TeV_sssf_nbjet_3l","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_13TeV_sssf_nbjet_3l","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_13TeV_sssf_nbjet_3l","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_13TeV_sssf_nbjet_3l","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_13TeV_sssf_nbjet_3l","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_13TeV_sssf_nbjet_3l","Data","EPL");
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
   
   TH1F *hframe_copy670 = new TH1F("hframe_copy670","",1000,0,8);
   hframe_copy670->SetMinimum(0);
   hframe_copy670->SetMaximum(9.931269);
   hframe_copy670->SetDirectory(0);
   hframe_copy670->SetStats(0);
   hframe_copy670->SetLineStyle(0);
   hframe_copy670->SetMarkerStyle(20);
   hframe_copy670->GetXaxis()->SetTitle("N_bJets");
   hframe_copy670->GetXaxis()->SetNdivisions(506);
   hframe_copy670->GetXaxis()->SetLabelFont(42);
   hframe_copy670->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy670->GetXaxis()->SetLabelSize(0.05);
   hframe_copy670->GetXaxis()->SetTitleSize(0.06);
   hframe_copy670->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy670->GetXaxis()->SetTitleFont(42);
   hframe_copy670->GetYaxis()->SetTitle("Events");
   hframe_copy670->GetYaxis()->SetLabelFont(42);
   hframe_copy670->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy670->GetYaxis()->SetLabelSize(0.05);
   hframe_copy670->GetYaxis()->SetTitleSize(0.06);
   hframe_copy670->GetYaxis()->SetTitleOffset(1.25);
   hframe_copy670->GetYaxis()->SetTitleFont(42);
   hframe_copy670->GetZaxis()->SetLabelFont(42);
   hframe_copy670->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy670->GetZaxis()->SetLabelSize(0.05);
   hframe_copy670->GetZaxis()->SetTitleSize(0.06);
   hframe_copy670->GetZaxis()->SetTitleFont(42);
   hframe_copy670->Draw("sameaxis");
   ccwh3l_13TeV_sssf_nbjet_3l->Modified();
   ccwh3l_13TeV_sssf_nbjet_3l->cd();
   ccwh3l_13TeV_sssf_nbjet_3l->SetSelected(ccwh3l_13TeV_sssf_nbjet_3l);
}
