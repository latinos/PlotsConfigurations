void c_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l()
{
//=========Macro generated from canvas: ccwh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l/cc
//=========  (Sun Jul  3 01:22:22 2016) by ROOT version6.02/13
   TCanvas *ccwh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l = new TCanvas("ccwh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l", "cc",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   ccwh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l->SetHighLightColor(2);
   ccwh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l->Range(-20,-2.378049,105,15.91463);
   ccwh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l->SetFillColor(0);
   ccwh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l->SetBorderMode(0);
   ccwh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l->SetBorderSize(2);
   ccwh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l->SetTickx(1);
   ccwh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l->SetTicky(1);
   ccwh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l->SetLeftMargin(0.16);
   ccwh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l->SetRightMargin(0.04);
   ccwh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l->SetTopMargin(0.05);
   ccwh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l->SetBottomMargin(0.13);
   ccwh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l->SetFrameFillStyle(0);
   ccwh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l->SetFrameBorderMode(0);
   ccwh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l->SetFrameFillStyle(0);
   ccwh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l->SetFrameBorderMode(0);
   
   TH1F *hframe541 = new TH1F("hframe541","",1000,0,100);
   hframe541->SetMinimum(0);
   hframe541->SetMaximum(15);
   hframe541->SetDirectory(0);
   hframe541->SetStats(0);
   hframe541->SetLineStyle(0);
   hframe541->SetMarkerStyle(20);
   hframe541->GetXaxis()->SetTitle("m_{ll} - M_{Z} [GeV]");
   hframe541->GetXaxis()->SetNdivisions(506);
   hframe541->GetXaxis()->SetLabelFont(42);
   hframe541->GetXaxis()->SetLabelOffset(0.007);
   hframe541->GetXaxis()->SetLabelSize(0.05);
   hframe541->GetXaxis()->SetTitleSize(0.06);
   hframe541->GetXaxis()->SetTitleOffset(0.9);
   hframe541->GetXaxis()->SetTitleFont(42);
   hframe541->GetYaxis()->SetTitle("Events");
   hframe541->GetYaxis()->SetLabelFont(42);
   hframe541->GetYaxis()->SetLabelOffset(0.007);
   hframe541->GetYaxis()->SetLabelSize(0.05);
   hframe541->GetYaxis()->SetTitleSize(0.06);
   hframe541->GetYaxis()->SetTitleOffset(1.25);
   hframe541->GetYaxis()->SetTitleFont(42);
   hframe541->GetZaxis()->SetLabelFont(42);
   hframe541->GetZaxis()->SetLabelOffset(0.007);
   hframe541->GetZaxis()->SetLabelSize(0.05);
   hframe541->GetZaxis()->SetTitleSize(0.06);
   hframe541->GetZaxis()->SetTitleFont(42);
   hframe541->Draw(" ");
   
   THStack *thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l = new THStack();
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l->SetName("thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l");
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l->SetTitle("thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l");
   
   TH1F *thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l_stack_109 = new TH1F("thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l_stack_109","thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l",20,0,100);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l_stack_109->SetMinimum(0);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l_stack_109->SetMaximum(4.473803);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l_stack_109->SetDirectory(0);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l_stack_109->SetStats(0);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l_stack_109->SetLineStyle(0);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l_stack_109->SetMarkerStyle(20);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l_stack_109->GetXaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l_stack_109->GetXaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l_stack_109->GetXaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l_stack_109->GetXaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l_stack_109->GetXaxis()->SetTitleOffset(0.9);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l_stack_109->GetXaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l_stack_109->GetYaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l_stack_109->GetYaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l_stack_109->GetYaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l_stack_109->GetYaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l_stack_109->GetYaxis()->SetTitleOffset(1.25);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l_stack_109->GetYaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l_stack_109->GetZaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l_stack_109->GetZaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l_stack_109->GetZaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l_stack_109->GetZaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l_stack_109->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l->SetHistogram(thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l_stack_109);
   
   
   TH1D *new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l542 = new TH1D("new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l542","histo_Fake",20,0,100);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l542->SetBinContent(19,2.902626);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l542->SetBinError(19,1.358139);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l542->SetEntries(33);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l542->SetFillColor(ci);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l542->SetFillStyle(3001);

   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l542->SetLineColor(ci);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l542->GetXaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l542->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l542->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l542->GetXaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l542->GetYaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l542->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l542->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l542->GetYaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l542->GetZaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l542->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l542->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l542->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l->Add(new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l,"");
   
   TH1D *new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l543 = new TH1D("new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l543","histo_WW",20,0,100);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l543->SetBinContent(19,0.02651546);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l543->SetBinError(19,0.01918247);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l543->SetEntries(2);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l543->SetFillColor(ci);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l543->SetFillStyle(3001);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l543->SetLineColor(ci);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l543->GetXaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l543->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l543->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l543->GetXaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l543->GetYaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l543->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l543->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l543->GetYaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l543->GetZaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l543->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l543->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l543->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l->Add(new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l,"");
   
   TH1D *new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l544 = new TH1D("new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l544","histo_VVV",20,0,100);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l544->SetBinContent(19,0.1027931);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l544->SetBinError(19,0.01693453);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l544->SetEntries(62);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l544->SetFillColor(ci);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l544->SetFillStyle(3001);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l544->SetLineColor(ci);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l544->GetXaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l544->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l544->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l544->GetXaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l544->GetYaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l544->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l544->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l544->GetYaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l544->GetZaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l544->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l544->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l544->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l->Add(new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l,"");
   
   TH1D *new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l545 = new TH1D("new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l545","histo_Vg",20,0,100);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l545->SetBinContent(19,0.0522728);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l545->SetBinError(19,0.0522728);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l545->SetEntries(1);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l545->SetFillColor(ci);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l545->SetFillStyle(3001);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l545->SetLineColor(ci);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l545->GetXaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l545->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l545->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l545->GetXaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l545->GetYaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l545->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l545->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l545->GetYaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l545->GetZaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l545->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l545->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l545->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l->Add(new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l,"");
   
   TH1D *new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l546 = new TH1D("new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l546","histo_ZZ",20,0,100);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l546->SetBinContent(19,0.07785033);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l546->SetBinError(19,0.05530859);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l546->SetEntries(2);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l546->SetFillColor(ci);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l546->SetFillStyle(3001);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l546->SetLineColor(ci);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l546->GetXaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l546->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l546->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l546->GetXaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l546->GetYaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l546->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l546->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l546->GetYaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l546->GetZaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l546->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l546->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l546->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l->Add(new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l,"");
   
   TH1D *new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l547 = new TH1D("new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l547","histo_WZ",20,0,100);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l547->SetBinContent(19,0.6226629);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l547->SetBinError(19,0.05775432);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l547->SetEntries(128);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l547->SetFillColor(ci);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l547->SetFillStyle(3001);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l547->SetLineColor(ci);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l547->GetXaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l547->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l547->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l547->GetXaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l547->GetYaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l547->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l547->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l547->GetYaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l547->GetZaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l547->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l547->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l547->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l->Add(new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l,"");
   
   TH1D *new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l548 = new TH1D("new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l548","histo_H_htt",20,0,100);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l548->SetBinContent(19,0.2835517);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l548->SetBinError(19,0.01760248);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l548->SetEntries(512);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l548->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l548->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l548->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l548->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l548->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l548->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l548->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l548->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l548->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l548->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l548->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l548->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l548->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l548->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l548->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l->Add(new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l,"");
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l->Draw("hist same");
   
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l = new THStack();
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l->SetName("thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l");
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l->SetTitle("thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l");
   
   TH1F *thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l_stack_110 = new TH1F("thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l_stack_110","thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l",20,0,100);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l_stack_110->SetMinimum(0);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l_stack_110->SetMaximum(0.3162119);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l_stack_110->SetDirectory(0);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l_stack_110->SetStats(0);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l_stack_110->SetLineStyle(0);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l_stack_110->SetMarkerStyle(20);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l_stack_110->GetXaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l_stack_110->GetXaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l_stack_110->GetXaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l_stack_110->GetXaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l_stack_110->GetXaxis()->SetTitleOffset(0.9);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l_stack_110->GetXaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l_stack_110->GetYaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l_stack_110->GetYaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l_stack_110->GetYaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l_stack_110->GetYaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l_stack_110->GetYaxis()->SetTitleOffset(1.25);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l_stack_110->GetYaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l_stack_110->GetZaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l_stack_110->GetZaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l_stack_110->GetZaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l_stack_110->GetZaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l_stack_110->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l->SetHistogram(thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l_stack_110);
   
   
   TH1D *new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l549 = new TH1D("new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l549","histo_H_htt",20,0,100);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l549->SetBinContent(19,0.2835517);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l549->SetBinError(19,0.01760248);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l549->SetEntries(512);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l549->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l549->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l549->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l549->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l549->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l549->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l549->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l549->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l549->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l549->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l549->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l549->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l549->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l549->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l549->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l->Add(new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l,"");
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l->Draw("hist same noclear");
   
   Double_t _fx3109[20] = {
   2.5,
   7.5,
   12.5,
   17.5,
   22.5,
   27.5,
   32.5,
   37.5,
   42.5,
   47.5,
   52.5,
   57.5,
   62.5,
   67.5,
   72.5,
   77.5,
   82.5,
   87.5,
   92.5,
   97.5};
   Double_t _fy3109[20] = {
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
   3.78472,
   0};
   Double_t _felx3109[20] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5};
   Double_t _fely3109[20] = {
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
   1.864364,
   0};
   Double_t _fehx3109[20] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5};
   Double_t _fehy3109[20] = {
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
   1.864316,
   0};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(20,_fx3109,_fy3109,_felx3109,_fehx3109,_fely3109,_fehy3109);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(12);
   grae->SetFillStyle(3004);
   grae->SetLineColor(12);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3109 = new TH1F("Graph_Graph3109","",100,0,110);
   Graph_Graph3109->SetMinimum(0);
   Graph_Graph3109->SetMaximum(6.21394);
   Graph_Graph3109->SetDirectory(0);
   Graph_Graph3109->SetStats(0);
   Graph_Graph3109->SetLineStyle(0);
   Graph_Graph3109->SetMarkerStyle(20);
   Graph_Graph3109->GetXaxis()->SetLabelFont(42);
   Graph_Graph3109->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3109->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3109->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3109->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3109->GetXaxis()->SetTitleFont(42);
   Graph_Graph3109->GetYaxis()->SetLabelFont(42);
   Graph_Graph3109->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3109->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3109->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3109->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3109->GetYaxis()->SetTitleFont(42);
   Graph_Graph3109->GetZaxis()->SetLabelFont(42);
   Graph_Graph3109->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3109->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3109->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3109->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3109);
   
   grae->Draw("2");
   
   Double_t _fx3110[20] = {
   2.5,
   7.5,
   12.5,
   17.5,
   22.5,
   27.5,
   32.5,
   37.5,
   42.5,
   47.5,
   52.5,
   57.5,
   62.5,
   67.5,
   72.5,
   77.5,
   82.5,
   87.5,
   92.5,
   97.5};
   Double_t _fy3110[20] = {
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
   4,
   0};
   Double_t _felx3110[20] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5};
   Double_t _fely3110[20] = {
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
   1.914367,
   0};
   Double_t _fehx3110[20] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5};
   Double_t _fehy3110[20] = {
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
   3.162815,
   1.147908};
   grae = new TGraphAsymmErrors(20,_fx3110,_fy3110,_felx3110,_fehx3110,_fely3110,_fehy3110);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(1);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3110 = new TH1F("Graph_Graph3110","",100,0,110);
   Graph_Graph3110->SetMinimum(0);
   Graph_Graph3110->SetMaximum(7.879097);
   Graph_Graph3110->SetDirectory(0);
   Graph_Graph3110->SetStats(0);
   Graph_Graph3110->SetLineStyle(0);
   Graph_Graph3110->SetMarkerStyle(20);
   Graph_Graph3110->GetXaxis()->SetLabelFont(42);
   Graph_Graph3110->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3110->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3110->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3110->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3110->GetXaxis()->SetTitleFont(42);
   Graph_Graph3110->GetYaxis()->SetLabelFont(42);
   Graph_Graph3110->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3110->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3110->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3110->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3110->GetYaxis()->SetTitleFont(42);
   Graph_Graph3110->GetZaxis()->SetLabelFont(42);
   Graph_Graph3110->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3110->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3110->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3110->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3110);
   
   grae->Draw("p0");
   
   TLegend *leg = new TLegend(0.2,0.7,0.8,0.9,NULL,"brNDC");
   leg->SetTextFont(62);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l","Data","EPL");
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
   entry=leg->AddEntry("new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l","Data","EPL");
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
   
   TH1F *hframe_copy550 = new TH1F("hframe_copy550","",1000,0,100);
   hframe_copy550->SetMinimum(0);
   hframe_copy550->SetMaximum(15);
   hframe_copy550->SetDirectory(0);
   hframe_copy550->SetStats(0);
   hframe_copy550->SetLineStyle(0);
   hframe_copy550->SetMarkerStyle(20);
   hframe_copy550->GetXaxis()->SetTitle("m_{ll} - M_{Z} [GeV]");
   hframe_copy550->GetXaxis()->SetNdivisions(506);
   hframe_copy550->GetXaxis()->SetLabelFont(42);
   hframe_copy550->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy550->GetXaxis()->SetLabelSize(0.05);
   hframe_copy550->GetXaxis()->SetTitleSize(0.06);
   hframe_copy550->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy550->GetXaxis()->SetTitleFont(42);
   hframe_copy550->GetYaxis()->SetTitle("Events");
   hframe_copy550->GetYaxis()->SetLabelFont(42);
   hframe_copy550->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy550->GetYaxis()->SetLabelSize(0.05);
   hframe_copy550->GetYaxis()->SetTitleSize(0.06);
   hframe_copy550->GetYaxis()->SetTitleOffset(1.25);
   hframe_copy550->GetYaxis()->SetTitleFont(42);
   hframe_copy550->GetZaxis()->SetLabelFont(42);
   hframe_copy550->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy550->GetZaxis()->SetLabelSize(0.05);
   hframe_copy550->GetZaxis()->SetTitleSize(0.06);
   hframe_copy550->GetZaxis()->SetTitleFont(42);
   hframe_copy550->Draw("sameaxis");
   ccwh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l->Modified();
   ccwh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l->cd();
   ccwh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l->SetSelected(ccwh3l_MET_JetV_ZVeto_mll_13TeV_zveto_3l);
}
