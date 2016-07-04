void c_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l()
{
//=========Macro generated from canvas: ccwh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l/cc
//=========  (Sat Jul  2 21:44:04 2016) by ROOT version6.02/13
   TCanvas *ccwh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l = new TCanvas("ccwh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l", "cc",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   ccwh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l->SetHighLightColor(2);
   ccwh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l->Range(-28,-2.867954,209.5,19.19323);
   ccwh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l->SetFillColor(0);
   ccwh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l->SetBorderMode(0);
   ccwh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l->SetBorderSize(2);
   ccwh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l->SetTickx(1);
   ccwh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l->SetTicky(1);
   ccwh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l->SetLeftMargin(0.16);
   ccwh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l->SetRightMargin(0.04);
   ccwh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l->SetTopMargin(0.05);
   ccwh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l->SetBottomMargin(0.13);
   ccwh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l->SetFrameFillStyle(0);
   ccwh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l->SetFrameBorderMode(0);
   ccwh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l->SetFrameFillStyle(0);
   ccwh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l->SetFrameBorderMode(0);
   
   TH1F *hframe561 = new TH1F("hframe561","",1000,10,200);
   hframe561->SetMinimum(0);
   hframe561->SetMaximum(18.09017);
   hframe561->SetDirectory(0);
   hframe561->SetStats(0);
   hframe561->SetLineStyle(0);
   hframe561->SetMarkerStyle(20);
   hframe561->GetXaxis()->SetTitle("min m_{ll} [GeV]");
   hframe561->GetXaxis()->SetNdivisions(506);
   hframe561->GetXaxis()->SetLabelFont(42);
   hframe561->GetXaxis()->SetLabelOffset(0.007);
   hframe561->GetXaxis()->SetLabelSize(0.05);
   hframe561->GetXaxis()->SetTitleSize(0.06);
   hframe561->GetXaxis()->SetTitleOffset(0.9);
   hframe561->GetXaxis()->SetTitleFont(42);
   hframe561->GetYaxis()->SetTitle("Events");
   hframe561->GetYaxis()->SetLabelFont(42);
   hframe561->GetYaxis()->SetLabelOffset(0.007);
   hframe561->GetYaxis()->SetLabelSize(0.05);
   hframe561->GetYaxis()->SetTitleSize(0.06);
   hframe561->GetYaxis()->SetTitleOffset(1.25);
   hframe561->GetYaxis()->SetTitleFont(42);
   hframe561->GetZaxis()->SetLabelFont(42);
   hframe561->GetZaxis()->SetLabelOffset(0.007);
   hframe561->GetZaxis()->SetLabelSize(0.05);
   hframe561->GetZaxis()->SetTitleSize(0.06);
   hframe561->GetZaxis()->SetTitleFont(42);
   hframe561->Draw(" ");
   
   THStack *thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l = new THStack();
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l->SetName("thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l");
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l->SetTitle("thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l");
   
   TH1F *thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l_stack_113 = new TH1F("thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l_stack_113","thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l",20,10,200);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l_stack_113->SetMinimum(-0.45898);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l_stack_113->SetMaximum(3.980755);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l_stack_113->SetDirectory(0);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l_stack_113->SetStats(0);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l_stack_113->SetLineStyle(0);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l_stack_113->SetMarkerStyle(20);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l_stack_113->GetXaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l_stack_113->GetXaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l_stack_113->GetXaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l_stack_113->GetXaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l_stack_113->GetXaxis()->SetTitleOffset(0.9);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l_stack_113->GetXaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l_stack_113->GetYaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l_stack_113->GetYaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l_stack_113->GetYaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l_stack_113->GetYaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l_stack_113->GetYaxis()->SetTitleOffset(1.25);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l_stack_113->GetYaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l_stack_113->GetZaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l_stack_113->GetZaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l_stack_113->GetZaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l_stack_113->GetZaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l_stack_113->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l->SetHistogram(thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l_stack_113);
   
   
   TH1D *new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l562 = new TH1D("new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l562","histo_Fake",20,10,200);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l562->SetBinContent(1,0.4355802);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l562->SetBinContent(2,1.918242);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l562->SetBinContent(3,0.8138962);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l562->SetBinContent(4,0.1045443);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l562->SetBinError(1,0.8945602);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l562->SetBinError(2,0.9027147);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l562->SetBinError(3,0.5878922);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l562->SetBinError(4,0.1045443);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l562->SetEntries(36);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l562->SetFillColor(ci);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l562->SetFillStyle(3001);

   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l562->SetLineColor(ci);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l562->GetXaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l562->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l562->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l562->GetXaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l562->GetYaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l562->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l562->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l562->GetYaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l562->GetZaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l562->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l562->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l562->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l->Add(new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l,"");
   
   TH1D *new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l563 = new TH1D("new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l563","histo_WW",20,10,200);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l563->SetBinContent(1,0.01530373);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l563->SetBinError(1,0.01530373);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l563->SetEntries(1);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l563->SetFillColor(ci);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l563->SetFillStyle(3001);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l563->SetLineColor(ci);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l563->GetXaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l563->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l563->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l563->GetXaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l563->GetYaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l563->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l563->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l563->GetYaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l563->GetZaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l563->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l563->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l563->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l->Add(new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l,"");
   
   TH1D *new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l564 = new TH1D("new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l564","histo_VVV",20,10,200);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l564->SetBinContent(1,0.01667554);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l564->SetBinContent(2,0.0378494);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l564->SetBinContent(3,0.02653573);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l564->SetBinContent(4,0.002294977);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l564->SetBinError(1,0.006088084);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l564->SetBinError(2,0.01016229);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l564->SetBinError(3,0.007780621);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l564->SetBinError(4,0.002294977);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l564->SetEntries(41);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l564->SetFillColor(ci);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l564->SetFillStyle(3001);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l564->SetLineColor(ci);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l564->GetXaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l564->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l564->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l564->GetXaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l564->GetYaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l564->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l564->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l564->GetYaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l564->GetZaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l564->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l564->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l564->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l->Add(new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l,"");
   
   TH1D *new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l565 = new TH1D("new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l565","histo_Vg",20,10,200);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l565->SetBinContent(1,0.3820383);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l565->SetBinContent(2,0.3075112);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l565->SetBinContent(3,0.4384879);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l565->SetBinContent(4,0.1123769);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l565->SetBinError(1,0.1831067);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l565->SetBinError(2,0.2412625);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l565->SetBinError(3,0.2109827);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l565->SetBinError(4,0.1123769);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l565->SetEntries(18);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l565->SetFillColor(ci);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l565->SetFillStyle(3001);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l565->SetLineColor(ci);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l565->GetXaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l565->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l565->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l565->GetXaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l565->GetYaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l565->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l565->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l565->GetYaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l565->GetZaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l565->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l565->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l565->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l->Add(new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l,"");
   
   TH1D *new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l566 = new TH1D("new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l566","histo_ZZ",20,10,200);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l566->SetBinContent(1,0.1184806);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l566->SetBinContent(2,0.0779526);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l566->SetBinContent(3,0.05496571);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l566->SetBinError(1,0.06857912);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l566->SetBinError(2,0.0576159);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l566->SetBinError(3,0.03889657);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l566->SetEntries(7);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l566->SetFillColor(ci);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l566->SetFillStyle(3001);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l566->SetLineColor(ci);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l566->GetXaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l566->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l566->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l566->GetXaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l566->GetYaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l566->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l566->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l566->GetYaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l566->GetZaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l566->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l566->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l566->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l->Add(new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l,"");
   
   TH1D *new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l567 = new TH1D("new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l567","histo_WZ",20,10,200);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l567->SetBinContent(1,1.146046);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l567->SetBinContent(2,1.32871);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l567->SetBinContent(3,1.437027);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l567->SetBinContent(4,0.1757929);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l567->SetBinError(1,0.07870379);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l567->SetBinError(2,0.08484749);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l567->SetBinError(3,0.08866657);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l567->SetBinError(4,0.03091291);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l567->SetEntries(837);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l567->SetFillColor(ci);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l567->SetFillStyle(3001);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l567->SetLineColor(ci);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l567->GetXaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l567->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l567->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l567->GetXaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l567->GetYaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l567->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l567->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l567->GetYaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l567->GetZaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l567->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l567->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l567->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l->Add(new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l,"");
   
   TH1D *new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l568 = new TH1D("new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l568","histo_H_htt",20,10,200);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l568->SetBinContent(1,0.07309758);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l568->SetBinContent(2,0.1209301);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l568->SetBinContent(3,0.1419524);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l568->SetBinContent(4,0.0210525);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l568->SetBinError(1,0.009579202);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l568->SetBinError(2,0.0127017);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l568->SetBinError(3,0.01361821);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l568->SetBinError(4,0.005151178);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l568->SetEntries(471);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l568->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l568->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l568->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l568->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l568->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l568->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l568->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l568->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l568->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l568->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l568->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l568->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l568->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l568->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l568->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l->Add(new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l,"");
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l->Draw("hist same");
   
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l = new THStack();
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l->SetName("thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l");
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l->SetTitle("thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l");
   
   TH1F *thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l_stack_114 = new TH1F("thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l_stack_114","thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l",20,10,200);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l_stack_114->SetMinimum(0);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l_stack_114->SetMaximum(0.1633492);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l_stack_114->SetDirectory(0);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l_stack_114->SetStats(0);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l_stack_114->SetLineStyle(0);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l_stack_114->SetMarkerStyle(20);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l_stack_114->GetXaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l_stack_114->GetXaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l_stack_114->GetXaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l_stack_114->GetXaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l_stack_114->GetXaxis()->SetTitleOffset(0.9);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l_stack_114->GetXaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l_stack_114->GetYaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l_stack_114->GetYaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l_stack_114->GetYaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l_stack_114->GetYaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l_stack_114->GetYaxis()->SetTitleOffset(1.25);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l_stack_114->GetYaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l_stack_114->GetZaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l_stack_114->GetZaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l_stack_114->GetZaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l_stack_114->GetZaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l_stack_114->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l->SetHistogram(thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l_stack_114);
   
   
   TH1D *new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l569 = new TH1D("new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l569","histo_H_htt",20,10,200);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l569->SetBinContent(1,0.07309758);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l569->SetBinContent(2,0.1209301);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l569->SetBinContent(3,0.1419524);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l569->SetBinContent(4,0.0210525);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l569->SetBinError(1,0.009579202);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l569->SetBinError(2,0.0127017);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l569->SetBinError(3,0.01361821);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l569->SetBinError(4,0.005151178);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l569->SetEntries(471);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l569->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l569->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l569->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l569->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l569->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l569->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l569->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l569->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l569->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l569->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l569->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l569->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l569->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l569->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l569->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l->Add(new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l,"");
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l->Draw("hist same noclear");
   
   Double_t _fx3113[20] = {
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
   Double_t _fy3113[20] = {
   2.114124,
   3.670265,
   2.770913,
   0.395009,
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
   Double_t _felx3113[20] = {
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
   Double_t _fely3113[20] = {
   0.8084955,
   1.463778,
   0.9817538,
   0.2530189,
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
   Double_t _fehx3113[20] = {
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
   Double_t _fehy3113[20] = {
   1.259364,
   1.463717,
   0.981416,
   0.2530127,
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
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(20,_fx3113,_fy3113,_felx3113,_fehx3113,_fely3113,_fehy3113);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(12);
   grae->SetFillStyle(3004);
   grae->SetLineColor(12);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3113 = new TH1F("Graph_Graph3113","",100,0,219);
   Graph_Graph3113->SetMinimum(0);
   Graph_Graph3113->SetMaximum(5.647381);
   Graph_Graph3113->SetDirectory(0);
   Graph_Graph3113->SetStats(0);
   Graph_Graph3113->SetLineStyle(0);
   Graph_Graph3113->SetMarkerStyle(20);
   Graph_Graph3113->GetXaxis()->SetLabelFont(42);
   Graph_Graph3113->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3113->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3113->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3113->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3113->GetXaxis()->SetTitleFont(42);
   Graph_Graph3113->GetYaxis()->SetLabelFont(42);
   Graph_Graph3113->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3113->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3113->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3113->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3113->GetYaxis()->SetTitleFont(42);
   Graph_Graph3113->GetZaxis()->SetLabelFont(42);
   Graph_Graph3113->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3113->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3113->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3113->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3113);
   
   grae->Draw("2");
   
   Double_t _fx3114[20] = {
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
   Double_t _fy3114[20] = {
   5,
   0,
   1,
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
   Double_t _felx3114[20] = {
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
   Double_t _fely3114[20] = {
   2.159724,
   0,
   0.8272524,
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
   Double_t _fehx3114[20] = {
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
   Double_t _fehy3114[20] = {
   3.382539,
   1.147908,
   2.29957,
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
   grae = new TGraphAsymmErrors(20,_fx3114,_fy3114,_felx3114,_fehx3114,_fely3114,_fehy3114);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(1);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3114 = new TH1F("Graph_Graph3114","",100,0,219);
   Graph_Graph3114->SetMinimum(0);
   Graph_Graph3114->SetMaximum(9.220793);
   Graph_Graph3114->SetDirectory(0);
   Graph_Graph3114->SetStats(0);
   Graph_Graph3114->SetLineStyle(0);
   Graph_Graph3114->SetMarkerStyle(20);
   Graph_Graph3114->GetXaxis()->SetLabelFont(42);
   Graph_Graph3114->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3114->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3114->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3114->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3114->GetXaxis()->SetTitleFont(42);
   Graph_Graph3114->GetYaxis()->SetLabelFont(42);
   Graph_Graph3114->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3114->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3114->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3114->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3114->GetYaxis()->SetTitleFont(42);
   Graph_Graph3114->GetZaxis()->SetLabelFont(42);
   Graph_Graph3114->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3114->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3114->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3114->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3114);
   
   grae->Draw("p0");
   
   TLegend *leg = new TLegend(0.2,0.7,0.8,0.9,NULL,"brNDC");
   leg->SetTextFont(62);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l","Data","EPL");
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
   entry=leg->AddEntry("new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l","Data","EPL");
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
   
   TH1F *hframe_copy570 = new TH1F("hframe_copy570","",1000,10,200);
   hframe_copy570->SetMinimum(0);
   hframe_copy570->SetMaximum(18.09017);
   hframe_copy570->SetDirectory(0);
   hframe_copy570->SetStats(0);
   hframe_copy570->SetLineStyle(0);
   hframe_copy570->SetMarkerStyle(20);
   hframe_copy570->GetXaxis()->SetTitle("min m_{ll} [GeV]");
   hframe_copy570->GetXaxis()->SetNdivisions(506);
   hframe_copy570->GetXaxis()->SetLabelFont(42);
   hframe_copy570->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy570->GetXaxis()->SetLabelSize(0.05);
   hframe_copy570->GetXaxis()->SetTitleSize(0.06);
   hframe_copy570->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy570->GetXaxis()->SetTitleFont(42);
   hframe_copy570->GetYaxis()->SetTitle("Events");
   hframe_copy570->GetYaxis()->SetLabelFont(42);
   hframe_copy570->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy570->GetYaxis()->SetLabelSize(0.05);
   hframe_copy570->GetYaxis()->SetTitleSize(0.06);
   hframe_copy570->GetYaxis()->SetTitleOffset(1.25);
   hframe_copy570->GetYaxis()->SetTitleFont(42);
   hframe_copy570->GetZaxis()->SetLabelFont(42);
   hframe_copy570->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy570->GetZaxis()->SetLabelSize(0.05);
   hframe_copy570->GetZaxis()->SetTitleSize(0.06);
   hframe_copy570->GetZaxis()->SetTitleFont(42);
   hframe_copy570->Draw("sameaxis");
   ccwh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l->Modified();
   ccwh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l->cd();
   ccwh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l->SetSelected(ccwh3l_MET_JetV_ZVeto_mll_13TeV_mllmin3l);
}
