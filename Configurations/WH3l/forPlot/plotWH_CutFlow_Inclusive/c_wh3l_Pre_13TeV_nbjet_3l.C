void c_wh3l_Pre_13TeV_nbjet_3l()
{
//=========Macro generated from canvas: ccwh3l_Pre_13TeV_nbjet_3l/cc
//=========  (Sun Jul  3 16:19:10 2016) by ROOT version6.02/13
   TCanvas *ccwh3l_Pre_13TeV_nbjet_3l = new TCanvas("ccwh3l_Pre_13TeV_nbjet_3l", "cc",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   ccwh3l_Pre_13TeV_nbjet_3l->SetHighLightColor(2);
   ccwh3l_Pre_13TeV_nbjet_3l->Range(-1,-380.7889,5.25,2548.357);
   ccwh3l_Pre_13TeV_nbjet_3l->SetFillColor(0);
   ccwh3l_Pre_13TeV_nbjet_3l->SetBorderMode(0);
   ccwh3l_Pre_13TeV_nbjet_3l->SetBorderSize(2);
   ccwh3l_Pre_13TeV_nbjet_3l->SetTickx(1);
   ccwh3l_Pre_13TeV_nbjet_3l->SetTicky(1);
   ccwh3l_Pre_13TeV_nbjet_3l->SetLeftMargin(0.16);
   ccwh3l_Pre_13TeV_nbjet_3l->SetRightMargin(0.04);
   ccwh3l_Pre_13TeV_nbjet_3l->SetTopMargin(0.05);
   ccwh3l_Pre_13TeV_nbjet_3l->SetBottomMargin(0.13);
   ccwh3l_Pre_13TeV_nbjet_3l->SetFrameFillStyle(0);
   ccwh3l_Pre_13TeV_nbjet_3l->SetFrameBorderMode(0);
   ccwh3l_Pre_13TeV_nbjet_3l->SetFrameFillStyle(0);
   ccwh3l_Pre_13TeV_nbjet_3l->SetFrameBorderMode(0);
   
   TH1F *hframe261 = new TH1F("hframe261","",1000,0,5);
   hframe261->SetMinimum(0);
   hframe261->SetMaximum(2401.899);
   hframe261->SetDirectory(0);
   hframe261->SetStats(0);
   hframe261->SetLineStyle(0);
   hframe261->SetMarkerStyle(20);
   hframe261->GetXaxis()->SetTitle("N_bJets");
   hframe261->GetXaxis()->SetNdivisions(506);
   hframe261->GetXaxis()->SetLabelFont(42);
   hframe261->GetXaxis()->SetLabelOffset(0.007);
   hframe261->GetXaxis()->SetLabelSize(0.05);
   hframe261->GetXaxis()->SetTitleSize(0.06);
   hframe261->GetXaxis()->SetTitleOffset(0.9);
   hframe261->GetXaxis()->SetTitleFont(42);
   hframe261->GetYaxis()->SetTitle("Events");
   hframe261->GetYaxis()->SetLabelFont(42);
   hframe261->GetYaxis()->SetLabelOffset(0.007);
   hframe261->GetYaxis()->SetLabelSize(0.05);
   hframe261->GetYaxis()->SetTitleSize(0.06);
   hframe261->GetYaxis()->SetTitleOffset(1.25);
   hframe261->GetYaxis()->SetTitleFont(42);
   hframe261->GetZaxis()->SetLabelFont(42);
   hframe261->GetZaxis()->SetLabelOffset(0.007);
   hframe261->GetZaxis()->SetLabelSize(0.05);
   hframe261->GetZaxis()->SetTitleSize(0.06);
   hframe261->GetZaxis()->SetTitleFont(42);
   hframe261->Draw(" ");
   
   THStack *thsBackground_grouped_wh3l_Pre_13TeV_nbjet_3l = new THStack();
   thsBackground_grouped_wh3l_Pre_13TeV_nbjet_3l->SetName("thsBackground_grouped_wh3l_Pre_13TeV_nbjet_3l");
   thsBackground_grouped_wh3l_Pre_13TeV_nbjet_3l->SetTitle("thsBackground_grouped_wh3l_Pre_13TeV_nbjet_3l");
   
   TH1F *thsBackground_grouped_wh3l_Pre_13TeV_nbjet_3l_stack_53 = new TH1F("thsBackground_grouped_wh3l_Pre_13TeV_nbjet_3l_stack_53","thsBackground_grouped_wh3l_Pre_13TeV_nbjet_3l",5,0,5);
   thsBackground_grouped_wh3l_Pre_13TeV_nbjet_3l_stack_53->SetMinimum(0);
   thsBackground_grouped_wh3l_Pre_13TeV_nbjet_3l_stack_53->SetMaximum(1008.798);
   thsBackground_grouped_wh3l_Pre_13TeV_nbjet_3l_stack_53->SetDirectory(0);
   thsBackground_grouped_wh3l_Pre_13TeV_nbjet_3l_stack_53->SetStats(0);
   thsBackground_grouped_wh3l_Pre_13TeV_nbjet_3l_stack_53->SetLineStyle(0);
   thsBackground_grouped_wh3l_Pre_13TeV_nbjet_3l_stack_53->SetMarkerStyle(20);
   thsBackground_grouped_wh3l_Pre_13TeV_nbjet_3l_stack_53->GetXaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_Pre_13TeV_nbjet_3l_stack_53->GetXaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_Pre_13TeV_nbjet_3l_stack_53->GetXaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_Pre_13TeV_nbjet_3l_stack_53->GetXaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_Pre_13TeV_nbjet_3l_stack_53->GetXaxis()->SetTitleOffset(0.9);
   thsBackground_grouped_wh3l_Pre_13TeV_nbjet_3l_stack_53->GetXaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_Pre_13TeV_nbjet_3l_stack_53->GetYaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_Pre_13TeV_nbjet_3l_stack_53->GetYaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_Pre_13TeV_nbjet_3l_stack_53->GetYaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_Pre_13TeV_nbjet_3l_stack_53->GetYaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_Pre_13TeV_nbjet_3l_stack_53->GetYaxis()->SetTitleOffset(1.25);
   thsBackground_grouped_wh3l_Pre_13TeV_nbjet_3l_stack_53->GetYaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_Pre_13TeV_nbjet_3l_stack_53->GetZaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_Pre_13TeV_nbjet_3l_stack_53->GetZaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_Pre_13TeV_nbjet_3l_stack_53->GetZaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_Pre_13TeV_nbjet_3l_stack_53->GetZaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_Pre_13TeV_nbjet_3l_stack_53->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_Pre_13TeV_nbjet_3l->SetHistogram(thsBackground_grouped_wh3l_Pre_13TeV_nbjet_3l_stack_53);
   
   
   TH1D *new_histo_group_Fake_wh3l_Pre_13TeV_nbjet_3l262 = new TH1D("new_histo_group_Fake_wh3l_Pre_13TeV_nbjet_3l262","histo_Fake",5,0,5);
   new_histo_group_Fake_wh3l_Pre_13TeV_nbjet_3l262->SetBinContent(1,301.2072);
   new_histo_group_Fake_wh3l_Pre_13TeV_nbjet_3l262->SetBinContent(2,9.809929);
   new_histo_group_Fake_wh3l_Pre_13TeV_nbjet_3l262->SetBinError(1,13.62527);
   new_histo_group_Fake_wh3l_Pre_13TeV_nbjet_3l262->SetBinError(2,2.368553);
   new_histo_group_Fake_wh3l_Pre_13TeV_nbjet_3l262->SetEntries(4042);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_Pre_13TeV_nbjet_3l262->SetFillColor(ci);
   new_histo_group_Fake_wh3l_Pre_13TeV_nbjet_3l262->SetFillStyle(3001);

   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_Pre_13TeV_nbjet_3l262->SetLineColor(ci);
   new_histo_group_Fake_wh3l_Pre_13TeV_nbjet_3l262->GetXaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_Pre_13TeV_nbjet_3l262->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_Pre_13TeV_nbjet_3l262->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_Pre_13TeV_nbjet_3l262->GetXaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_Pre_13TeV_nbjet_3l262->GetYaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_Pre_13TeV_nbjet_3l262->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_Pre_13TeV_nbjet_3l262->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_Pre_13TeV_nbjet_3l262->GetYaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_Pre_13TeV_nbjet_3l262->GetZaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_Pre_13TeV_nbjet_3l262->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_Pre_13TeV_nbjet_3l262->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_Pre_13TeV_nbjet_3l262->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_Pre_13TeV_nbjet_3l->Add(new_histo_group_Fake_wh3l_Pre_13TeV_nbjet_3l,"");
   
   TH1D *new_histo_group_WW_wh3l_Pre_13TeV_nbjet_3l263 = new TH1D("new_histo_group_WW_wh3l_Pre_13TeV_nbjet_3l263","histo_WW",5,0,5);
   new_histo_group_WW_wh3l_Pre_13TeV_nbjet_3l263->SetBinContent(1,0.6140386);
   new_histo_group_WW_wh3l_Pre_13TeV_nbjet_3l263->SetBinContent(2,0.01595104);
   new_histo_group_WW_wh3l_Pre_13TeV_nbjet_3l263->SetBinError(1,0.09743243);
   new_histo_group_WW_wh3l_Pre_13TeV_nbjet_3l263->SetBinError(2,0.01595104);
   new_histo_group_WW_wh3l_Pre_13TeV_nbjet_3l263->SetEntries(44);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_Pre_13TeV_nbjet_3l263->SetFillColor(ci);
   new_histo_group_WW_wh3l_Pre_13TeV_nbjet_3l263->SetFillStyle(3001);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_Pre_13TeV_nbjet_3l263->SetLineColor(ci);
   new_histo_group_WW_wh3l_Pre_13TeV_nbjet_3l263->GetXaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_Pre_13TeV_nbjet_3l263->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_Pre_13TeV_nbjet_3l263->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_Pre_13TeV_nbjet_3l263->GetXaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_Pre_13TeV_nbjet_3l263->GetYaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_Pre_13TeV_nbjet_3l263->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_Pre_13TeV_nbjet_3l263->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_Pre_13TeV_nbjet_3l263->GetYaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_Pre_13TeV_nbjet_3l263->GetZaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_Pre_13TeV_nbjet_3l263->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_Pre_13TeV_nbjet_3l263->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_Pre_13TeV_nbjet_3l263->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_Pre_13TeV_nbjet_3l->Add(new_histo_group_WW_wh3l_Pre_13TeV_nbjet_3l,"");
   
   TH1D *new_histo_group_VVV_wh3l_Pre_13TeV_nbjet_3l264 = new TH1D("new_histo_group_VVV_wh3l_Pre_13TeV_nbjet_3l264","histo_VVV",5,0,5);
   new_histo_group_VVV_wh3l_Pre_13TeV_nbjet_3l264->SetBinContent(1,5.532503);
   new_histo_group_VVV_wh3l_Pre_13TeV_nbjet_3l264->SetBinContent(2,0.04337429);
   new_histo_group_VVV_wh3l_Pre_13TeV_nbjet_3l264->SetBinContent(3,0.002062919);
   new_histo_group_VVV_wh3l_Pre_13TeV_nbjet_3l264->SetBinError(1,0.1036643);
   new_histo_group_VVV_wh3l_Pre_13TeV_nbjet_3l264->SetBinError(2,0.008176675);
   new_histo_group_VVV_wh3l_Pre_13TeV_nbjet_3l264->SetBinError(3,0.001197773);
   new_histo_group_VVV_wh3l_Pre_13TeV_nbjet_3l264->SetEntries(5218);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_Pre_13TeV_nbjet_3l264->SetFillColor(ci);
   new_histo_group_VVV_wh3l_Pre_13TeV_nbjet_3l264->SetFillStyle(3001);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_Pre_13TeV_nbjet_3l264->SetLineColor(ci);
   new_histo_group_VVV_wh3l_Pre_13TeV_nbjet_3l264->GetXaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_Pre_13TeV_nbjet_3l264->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_Pre_13TeV_nbjet_3l264->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_Pre_13TeV_nbjet_3l264->GetXaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_Pre_13TeV_nbjet_3l264->GetYaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_Pre_13TeV_nbjet_3l264->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_Pre_13TeV_nbjet_3l264->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_Pre_13TeV_nbjet_3l264->GetYaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_Pre_13TeV_nbjet_3l264->GetZaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_Pre_13TeV_nbjet_3l264->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_Pre_13TeV_nbjet_3l264->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_Pre_13TeV_nbjet_3l264->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_Pre_13TeV_nbjet_3l->Add(new_histo_group_VVV_wh3l_Pre_13TeV_nbjet_3l,"");
   
   TH1D *new_histo_group_Vg_wh3l_Pre_13TeV_nbjet_3l265 = new TH1D("new_histo_group_Vg_wh3l_Pre_13TeV_nbjet_3l265","histo_Vg",5,0,5);
   new_histo_group_Vg_wh3l_Pre_13TeV_nbjet_3l265->SetBinContent(1,225.3344);
   new_histo_group_Vg_wh3l_Pre_13TeV_nbjet_3l265->SetBinContent(2,1.141796);
   new_histo_group_Vg_wh3l_Pre_13TeV_nbjet_3l265->SetBinContent(3,0.2617136);
   new_histo_group_Vg_wh3l_Pre_13TeV_nbjet_3l265->SetBinError(1,5.971979);
   new_histo_group_Vg_wh3l_Pre_13TeV_nbjet_3l265->SetBinError(2,0.3802728);
   new_histo_group_Vg_wh3l_Pre_13TeV_nbjet_3l265->SetBinError(3,0.1590606);
   new_histo_group_Vg_wh3l_Pre_13TeV_nbjet_3l265->SetEntries(3347);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_Pre_13TeV_nbjet_3l265->SetFillColor(ci);
   new_histo_group_Vg_wh3l_Pre_13TeV_nbjet_3l265->SetFillStyle(3001);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_Pre_13TeV_nbjet_3l265->SetLineColor(ci);
   new_histo_group_Vg_wh3l_Pre_13TeV_nbjet_3l265->GetXaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_Pre_13TeV_nbjet_3l265->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_Pre_13TeV_nbjet_3l265->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_Pre_13TeV_nbjet_3l265->GetXaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_Pre_13TeV_nbjet_3l265->GetYaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_Pre_13TeV_nbjet_3l265->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_Pre_13TeV_nbjet_3l265->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_Pre_13TeV_nbjet_3l265->GetYaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_Pre_13TeV_nbjet_3l265->GetZaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_Pre_13TeV_nbjet_3l265->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_Pre_13TeV_nbjet_3l265->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_Pre_13TeV_nbjet_3l265->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_Pre_13TeV_nbjet_3l->Add(new_histo_group_Vg_wh3l_Pre_13TeV_nbjet_3l,"");
   
   TH1D *new_histo_group_ZZ_wh3l_Pre_13TeV_nbjet_3l266 = new TH1D("new_histo_group_ZZ_wh3l_Pre_13TeV_nbjet_3l266","histo_ZZ",5,0,5);
   new_histo_group_ZZ_wh3l_Pre_13TeV_nbjet_3l266->SetBinContent(1,53.45772);
   new_histo_group_ZZ_wh3l_Pre_13TeV_nbjet_3l266->SetBinContent(2,0.2253752);
   new_histo_group_ZZ_wh3l_Pre_13TeV_nbjet_3l266->SetBinError(1,1.483303);
   new_histo_group_ZZ_wh3l_Pre_13TeV_nbjet_3l266->SetBinError(2,0.09166502);
   new_histo_group_ZZ_wh3l_Pre_13TeV_nbjet_3l266->SetEntries(1451);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_Pre_13TeV_nbjet_3l266->SetFillColor(ci);
   new_histo_group_ZZ_wh3l_Pre_13TeV_nbjet_3l266->SetFillStyle(3001);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_Pre_13TeV_nbjet_3l266->SetLineColor(ci);
   new_histo_group_ZZ_wh3l_Pre_13TeV_nbjet_3l266->GetXaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_Pre_13TeV_nbjet_3l266->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_Pre_13TeV_nbjet_3l266->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_Pre_13TeV_nbjet_3l266->GetXaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_Pre_13TeV_nbjet_3l266->GetYaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_Pre_13TeV_nbjet_3l266->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_Pre_13TeV_nbjet_3l266->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_Pre_13TeV_nbjet_3l266->GetYaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_Pre_13TeV_nbjet_3l266->GetZaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_Pre_13TeV_nbjet_3l266->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_Pre_13TeV_nbjet_3l266->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_Pre_13TeV_nbjet_3l266->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_Pre_13TeV_nbjet_3l->Add(new_histo_group_ZZ_wh3l_Pre_13TeV_nbjet_3l,"");
   
   TH1D *new_histo_group_WZ_wh3l_Pre_13TeV_nbjet_3l267 = new TH1D("new_histo_group_WZ_wh3l_Pre_13TeV_nbjet_3l267","histo_WZ",5,0,5);
   new_histo_group_WZ_wh3l_Pre_13TeV_nbjet_3l267->SetBinContent(1,369.1429);
   new_histo_group_WZ_wh3l_Pre_13TeV_nbjet_3l267->SetBinContent(2,0.980804);
   new_histo_group_WZ_wh3l_Pre_13TeV_nbjet_3l267->SetBinContent(3,0.02068932);
   new_histo_group_WZ_wh3l_Pre_13TeV_nbjet_3l267->SetBinError(1,1.418353);
   new_histo_group_WZ_wh3l_Pre_13TeV_nbjet_3l267->SetBinError(2,0.07204472);
   new_histo_group_WZ_wh3l_Pre_13TeV_nbjet_3l267->SetBinError(3,0.01039109);
   new_histo_group_WZ_wh3l_Pre_13TeV_nbjet_3l267->SetEntries(75011);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_Pre_13TeV_nbjet_3l267->SetFillColor(ci);
   new_histo_group_WZ_wh3l_Pre_13TeV_nbjet_3l267->SetFillStyle(3001);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_Pre_13TeV_nbjet_3l267->SetLineColor(ci);
   new_histo_group_WZ_wh3l_Pre_13TeV_nbjet_3l267->GetXaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_Pre_13TeV_nbjet_3l267->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_Pre_13TeV_nbjet_3l267->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_Pre_13TeV_nbjet_3l267->GetXaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_Pre_13TeV_nbjet_3l267->GetYaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_Pre_13TeV_nbjet_3l267->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_Pre_13TeV_nbjet_3l267->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_Pre_13TeV_nbjet_3l267->GetYaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_Pre_13TeV_nbjet_3l267->GetZaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_Pre_13TeV_nbjet_3l267->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_Pre_13TeV_nbjet_3l267->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_Pre_13TeV_nbjet_3l267->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_Pre_13TeV_nbjet_3l->Add(new_histo_group_WZ_wh3l_Pre_13TeV_nbjet_3l,"");
   
   TH1D *new_histo_group_Higgs_wh3l_Pre_13TeV_nbjet_3l268 = new TH1D("new_histo_group_Higgs_wh3l_Pre_13TeV_nbjet_3l268","histo_H_htt",5,0,5);
   new_histo_group_Higgs_wh3l_Pre_13TeV_nbjet_3l268->SetBinContent(1,5.470962);
   new_histo_group_Higgs_wh3l_Pre_13TeV_nbjet_3l268->SetBinContent(2,0.03317202);
   new_histo_group_Higgs_wh3l_Pre_13TeV_nbjet_3l268->SetBinContent(3,0.003060684);
   new_histo_group_Higgs_wh3l_Pre_13TeV_nbjet_3l268->SetBinError(1,0.0763922);
   new_histo_group_Higgs_wh3l_Pre_13TeV_nbjet_3l268->SetBinError(2,0.005500351);
   new_histo_group_Higgs_wh3l_Pre_13TeV_nbjet_3l268->SetBinError(3,0.002171033);
   new_histo_group_Higgs_wh3l_Pre_13TeV_nbjet_3l268->SetEntries(8925);
   new_histo_group_Higgs_wh3l_Pre_13TeV_nbjet_3l268->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_Pre_13TeV_nbjet_3l268->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_Pre_13TeV_nbjet_3l268->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_Pre_13TeV_nbjet_3l268->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_Pre_13TeV_nbjet_3l268->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_Pre_13TeV_nbjet_3l268->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_Pre_13TeV_nbjet_3l268->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_Pre_13TeV_nbjet_3l268->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_Pre_13TeV_nbjet_3l268->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_Pre_13TeV_nbjet_3l268->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_Pre_13TeV_nbjet_3l268->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_Pre_13TeV_nbjet_3l268->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_Pre_13TeV_nbjet_3l268->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_Pre_13TeV_nbjet_3l268->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_Pre_13TeV_nbjet_3l268->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_Pre_13TeV_nbjet_3l->Add(new_histo_group_Higgs_wh3l_Pre_13TeV_nbjet_3l,"");
   thsBackground_grouped_wh3l_Pre_13TeV_nbjet_3l->Draw("hist same");
   
   thsSignal_grouped_wh3l_Pre_13TeV_nbjet_3l = new THStack();
   thsSignal_grouped_wh3l_Pre_13TeV_nbjet_3l->SetName("thsSignal_grouped_wh3l_Pre_13TeV_nbjet_3l");
   thsSignal_grouped_wh3l_Pre_13TeV_nbjet_3l->SetTitle("thsSignal_grouped_wh3l_Pre_13TeV_nbjet_3l");
   
   TH1F *thsSignal_grouped_wh3l_Pre_13TeV_nbjet_3l_stack_54 = new TH1F("thsSignal_grouped_wh3l_Pre_13TeV_nbjet_3l_stack_54","thsSignal_grouped_wh3l_Pre_13TeV_nbjet_3l",5,0,5);
   thsSignal_grouped_wh3l_Pre_13TeV_nbjet_3l_stack_54->SetMinimum(0);
   thsSignal_grouped_wh3l_Pre_13TeV_nbjet_3l_stack_54->SetMaximum(5.824722);
   thsSignal_grouped_wh3l_Pre_13TeV_nbjet_3l_stack_54->SetDirectory(0);
   thsSignal_grouped_wh3l_Pre_13TeV_nbjet_3l_stack_54->SetStats(0);
   thsSignal_grouped_wh3l_Pre_13TeV_nbjet_3l_stack_54->SetLineStyle(0);
   thsSignal_grouped_wh3l_Pre_13TeV_nbjet_3l_stack_54->SetMarkerStyle(20);
   thsSignal_grouped_wh3l_Pre_13TeV_nbjet_3l_stack_54->GetXaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_Pre_13TeV_nbjet_3l_stack_54->GetXaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_Pre_13TeV_nbjet_3l_stack_54->GetXaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_Pre_13TeV_nbjet_3l_stack_54->GetXaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_Pre_13TeV_nbjet_3l_stack_54->GetXaxis()->SetTitleOffset(0.9);
   thsSignal_grouped_wh3l_Pre_13TeV_nbjet_3l_stack_54->GetXaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_Pre_13TeV_nbjet_3l_stack_54->GetYaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_Pre_13TeV_nbjet_3l_stack_54->GetYaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_Pre_13TeV_nbjet_3l_stack_54->GetYaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_Pre_13TeV_nbjet_3l_stack_54->GetYaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_Pre_13TeV_nbjet_3l_stack_54->GetYaxis()->SetTitleOffset(1.25);
   thsSignal_grouped_wh3l_Pre_13TeV_nbjet_3l_stack_54->GetYaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_Pre_13TeV_nbjet_3l_stack_54->GetZaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_Pre_13TeV_nbjet_3l_stack_54->GetZaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_Pre_13TeV_nbjet_3l_stack_54->GetZaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_Pre_13TeV_nbjet_3l_stack_54->GetZaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_Pre_13TeV_nbjet_3l_stack_54->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_Pre_13TeV_nbjet_3l->SetHistogram(thsSignal_grouped_wh3l_Pre_13TeV_nbjet_3l_stack_54);
   
   
   TH1D *new_histo_group_Higgs_wh3l_Pre_13TeV_nbjet_3l269 = new TH1D("new_histo_group_Higgs_wh3l_Pre_13TeV_nbjet_3l269","histo_H_htt",5,0,5);
   new_histo_group_Higgs_wh3l_Pre_13TeV_nbjet_3l269->SetBinContent(1,5.470962);
   new_histo_group_Higgs_wh3l_Pre_13TeV_nbjet_3l269->SetBinContent(2,0.03317202);
   new_histo_group_Higgs_wh3l_Pre_13TeV_nbjet_3l269->SetBinContent(3,0.003060684);
   new_histo_group_Higgs_wh3l_Pre_13TeV_nbjet_3l269->SetBinError(1,0.0763922);
   new_histo_group_Higgs_wh3l_Pre_13TeV_nbjet_3l269->SetBinError(2,0.005500351);
   new_histo_group_Higgs_wh3l_Pre_13TeV_nbjet_3l269->SetBinError(3,0.002171033);
   new_histo_group_Higgs_wh3l_Pre_13TeV_nbjet_3l269->SetEntries(8925);
   new_histo_group_Higgs_wh3l_Pre_13TeV_nbjet_3l269->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_Pre_13TeV_nbjet_3l269->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_Pre_13TeV_nbjet_3l269->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_Pre_13TeV_nbjet_3l269->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_Pre_13TeV_nbjet_3l269->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_Pre_13TeV_nbjet_3l269->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_Pre_13TeV_nbjet_3l269->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_Pre_13TeV_nbjet_3l269->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_Pre_13TeV_nbjet_3l269->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_Pre_13TeV_nbjet_3l269->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_Pre_13TeV_nbjet_3l269->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_Pre_13TeV_nbjet_3l269->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_Pre_13TeV_nbjet_3l269->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_Pre_13TeV_nbjet_3l269->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_Pre_13TeV_nbjet_3l269->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_Pre_13TeV_nbjet_3l->Add(new_histo_group_Higgs_wh3l_Pre_13TeV_nbjet_3l,"");
   thsSignal_grouped_wh3l_Pre_13TeV_nbjet_3l->Draw("hist same noclear");
   
   Double_t _fx3053[5] = {
   0.5,
   1.5,
   2.5,
   3.5,
   4.5};
   Double_t _fy3053[5] = {
   955.2888,
   12.21723,
   0.2844659,
   0,
   0};
   Double_t _felx3053[5] = {
   0.5,
   0.5,
   0.5,
   0.5,
   0.5};
   Double_t _fely3053[5] = {
   109.6332,
   4.519836,
   0.1714994,
   0,
   0};
   Double_t _fehx3053[5] = {
   0.5,
   0.5,
   0.5,
   0.5,
   0.5};
   Double_t _fehy3053[5] = {
   109.5213,
   4.519313,
   0.1715316,
   0,
   0};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(5,_fx3053,_fy3053,_felx3053,_fehx3053,_fely3053,_fehy3053);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(12);
   grae->SetFillStyle(3004);
   grae->SetLineColor(12);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3053 = new TH1F("Graph_Graph3053","",100,0,5.5);
   Graph_Graph3053->SetMinimum(0);
   Graph_Graph3053->SetMaximum(1171.291);
   Graph_Graph3053->SetDirectory(0);
   Graph_Graph3053->SetStats(0);
   Graph_Graph3053->SetLineStyle(0);
   Graph_Graph3053->SetMarkerStyle(20);
   Graph_Graph3053->GetXaxis()->SetLabelFont(42);
   Graph_Graph3053->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3053->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3053->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3053->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3053->GetXaxis()->SetTitleFont(42);
   Graph_Graph3053->GetYaxis()->SetLabelFont(42);
   Graph_Graph3053->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3053->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3053->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3053->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3053->GetYaxis()->SetTitleFont(42);
   Graph_Graph3053->GetZaxis()->SetLabelFont(42);
   Graph_Graph3053->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3053->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3053->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3053->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3053);
   
   grae->Draw("2");
   
   Double_t _fx3054[5] = {
   0.5,
   1.5,
   2.5,
   3.5,
   4.5};
   Double_t _fy3054[5] = {
   0,
   0,
   0,
   0,
   0};
   Double_t _felx3054[5] = {
   0.5,
   0.5,
   0.5,
   0.5,
   0.5};
   Double_t _fely3054[5] = {
   0,
   0,
   0,
   0,
   0};
   Double_t _fehx3054[5] = {
   0.5,
   0.5,
   0.5,
   0.5,
   0.5};
   Double_t _fehy3054[5] = {
   1.147908,
   1.147908,
   1.147908,
   1.147908,
   1.147908};
   grae = new TGraphAsymmErrors(5,_fx3054,_fy3054,_felx3054,_fehx3054,_fely3054,_fehy3054);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(1);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3054 = new TH1F("Graph_Graph3054","",100,0,5.5);
   Graph_Graph3054->SetMinimum(0);
   Graph_Graph3054->SetMaximum(1.262698);
   Graph_Graph3054->SetDirectory(0);
   Graph_Graph3054->SetStats(0);
   Graph_Graph3054->SetLineStyle(0);
   Graph_Graph3054->SetMarkerStyle(20);
   Graph_Graph3054->GetXaxis()->SetLabelFont(42);
   Graph_Graph3054->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3054->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3054->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3054->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3054->GetXaxis()->SetTitleFont(42);
   Graph_Graph3054->GetYaxis()->SetLabelFont(42);
   Graph_Graph3054->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3054->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3054->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3054->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3054->GetYaxis()->SetTitleFont(42);
   Graph_Graph3054->GetZaxis()->SetLabelFont(42);
   Graph_Graph3054->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3054->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3054->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3054->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3054);
   
   grae->Draw("p0");
   
   TLegend *leg = new TLegend(0.2,0.7,0.8,0.9,NULL,"brNDC");
   leg->SetTextFont(62);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("new_histo_group_Fake_wh3l_Pre_13TeV_nbjet_3l","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_Pre_13TeV_nbjet_3l","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_Pre_13TeV_nbjet_3l","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_Pre_13TeV_nbjet_3l","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_Pre_13TeV_nbjet_3l","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_Pre_13TeV_nbjet_3l","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_Pre_13TeV_nbjet_3l","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_Pre_13TeV_nbjet_3l","Data","EPL");
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
   entry=leg->AddEntry("new_histo_group_Fake_wh3l_Pre_13TeV_nbjet_3l","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_Pre_13TeV_nbjet_3l","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_Pre_13TeV_nbjet_3l","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_Pre_13TeV_nbjet_3l","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_Pre_13TeV_nbjet_3l","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_Pre_13TeV_nbjet_3l","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_Pre_13TeV_nbjet_3l","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_Pre_13TeV_nbjet_3l","Data","EPL");
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
   
   TH1F *hframe_copy270 = new TH1F("hframe_copy270","",1000,0,5);
   hframe_copy270->SetMinimum(0);
   hframe_copy270->SetMaximum(2401.899);
   hframe_copy270->SetDirectory(0);
   hframe_copy270->SetStats(0);
   hframe_copy270->SetLineStyle(0);
   hframe_copy270->SetMarkerStyle(20);
   hframe_copy270->GetXaxis()->SetTitle("N_bJets");
   hframe_copy270->GetXaxis()->SetNdivisions(506);
   hframe_copy270->GetXaxis()->SetLabelFont(42);
   hframe_copy270->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy270->GetXaxis()->SetLabelSize(0.05);
   hframe_copy270->GetXaxis()->SetTitleSize(0.06);
   hframe_copy270->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy270->GetXaxis()->SetTitleFont(42);
   hframe_copy270->GetYaxis()->SetTitle("Events");
   hframe_copy270->GetYaxis()->SetLabelFont(42);
   hframe_copy270->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy270->GetYaxis()->SetLabelSize(0.05);
   hframe_copy270->GetYaxis()->SetTitleSize(0.06);
   hframe_copy270->GetYaxis()->SetTitleOffset(1.25);
   hframe_copy270->GetYaxis()->SetTitleFont(42);
   hframe_copy270->GetZaxis()->SetLabelFont(42);
   hframe_copy270->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy270->GetZaxis()->SetLabelSize(0.05);
   hframe_copy270->GetZaxis()->SetTitleSize(0.06);
   hframe_copy270->GetZaxis()->SetTitleFont(42);
   hframe_copy270->Draw("sameaxis");
   ccwh3l_Pre_13TeV_nbjet_3l->Modified();
   ccwh3l_Pre_13TeV_nbjet_3l->cd();
   ccwh3l_Pre_13TeV_nbjet_3l->SetSelected(ccwh3l_Pre_13TeV_nbjet_3l);
}
