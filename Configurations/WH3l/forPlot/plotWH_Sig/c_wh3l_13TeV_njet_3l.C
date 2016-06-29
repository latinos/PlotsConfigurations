void c_wh3l_13TeV_njet_3l()
{
//=========Macro generated from canvas: ccwh3l_13TeV_njet_3l/cc
//=========  (Wed Jun 29 01:51:47 2016) by ROOT version6.02/13
   TCanvas *ccwh3l_13TeV_njet_3l = new TCanvas("ccwh3l_13TeV_njet_3l", "cc",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   ccwh3l_13TeV_njet_3l->SetHighLightColor(2);
   ccwh3l_13TeV_njet_3l->Range(-1.6,-8.459893,8.4,56.61621);
   ccwh3l_13TeV_njet_3l->SetFillColor(0);
   ccwh3l_13TeV_njet_3l->SetBorderMode(0);
   ccwh3l_13TeV_njet_3l->SetBorderSize(2);
   ccwh3l_13TeV_njet_3l->SetTickx(1);
   ccwh3l_13TeV_njet_3l->SetTicky(1);
   ccwh3l_13TeV_njet_3l->SetLeftMargin(0.16);
   ccwh3l_13TeV_njet_3l->SetRightMargin(0.04);
   ccwh3l_13TeV_njet_3l->SetTopMargin(0.05);
   ccwh3l_13TeV_njet_3l->SetBottomMargin(0.13);
   ccwh3l_13TeV_njet_3l->SetFrameFillStyle(0);
   ccwh3l_13TeV_njet_3l->SetFrameBorderMode(0);
   ccwh3l_13TeV_njet_3l->SetFrameFillStyle(0);
   ccwh3l_13TeV_njet_3l->SetFrameBorderMode(0);
   
   TH1F *hframe301 = new TH1F("hframe301","",1000,0,8);
   hframe301->SetMinimum(0);
   hframe301->SetMaximum(53.3624);
   hframe301->SetDirectory(0);
   hframe301->SetStats(0);
   hframe301->SetLineStyle(0);
   hframe301->SetMarkerStyle(20);
   hframe301->GetXaxis()->SetTitle("N_Jets");
   hframe301->GetXaxis()->SetNdivisions(506);
   hframe301->GetXaxis()->SetLabelFont(42);
   hframe301->GetXaxis()->SetLabelOffset(0.007);
   hframe301->GetXaxis()->SetLabelSize(0.05);
   hframe301->GetXaxis()->SetTitleSize(0.06);
   hframe301->GetXaxis()->SetTitleOffset(0.9);
   hframe301->GetXaxis()->SetTitleFont(42);
   hframe301->GetYaxis()->SetTitle("Events");
   hframe301->GetYaxis()->SetLabelFont(42);
   hframe301->GetYaxis()->SetLabelOffset(0.007);
   hframe301->GetYaxis()->SetLabelSize(0.05);
   hframe301->GetYaxis()->SetTitleSize(0.06);
   hframe301->GetYaxis()->SetTitleOffset(1.25);
   hframe301->GetYaxis()->SetTitleFont(42);
   hframe301->GetZaxis()->SetLabelFont(42);
   hframe301->GetZaxis()->SetLabelOffset(0.007);
   hframe301->GetZaxis()->SetLabelSize(0.05);
   hframe301->GetZaxis()->SetTitleSize(0.06);
   hframe301->GetZaxis()->SetTitleFont(42);
   hframe301->Draw(" ");
   
   THStack *thsBackground_grouped_wh3l_13TeV_njet_3l = new THStack();
   thsBackground_grouped_wh3l_13TeV_njet_3l->SetName("thsBackground_grouped_wh3l_13TeV_njet_3l");
   thsBackground_grouped_wh3l_13TeV_njet_3l->SetTitle("thsBackground_grouped_wh3l_13TeV_njet_3l");
   
   TH1F *thsBackground_grouped_wh3l_13TeV_njet_3l_stack_61 = new TH1F("thsBackground_grouped_wh3l_13TeV_njet_3l_stack_61","thsBackground_grouped_wh3l_13TeV_njet_3l",8,0,8);
   thsBackground_grouped_wh3l_13TeV_njet_3l_stack_61->SetMinimum(0);
   thsBackground_grouped_wh3l_13TeV_njet_3l_stack_61->SetMaximum(22.41221);
   thsBackground_grouped_wh3l_13TeV_njet_3l_stack_61->SetDirectory(0);
   thsBackground_grouped_wh3l_13TeV_njet_3l_stack_61->SetStats(0);
   thsBackground_grouped_wh3l_13TeV_njet_3l_stack_61->SetLineStyle(0);
   thsBackground_grouped_wh3l_13TeV_njet_3l_stack_61->SetMarkerStyle(20);
   thsBackground_grouped_wh3l_13TeV_njet_3l_stack_61->GetXaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_13TeV_njet_3l_stack_61->GetXaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_13TeV_njet_3l_stack_61->GetXaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_13TeV_njet_3l_stack_61->GetXaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_13TeV_njet_3l_stack_61->GetXaxis()->SetTitleOffset(0.9);
   thsBackground_grouped_wh3l_13TeV_njet_3l_stack_61->GetXaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_njet_3l_stack_61->GetYaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_13TeV_njet_3l_stack_61->GetYaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_13TeV_njet_3l_stack_61->GetYaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_13TeV_njet_3l_stack_61->GetYaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_13TeV_njet_3l_stack_61->GetYaxis()->SetTitleOffset(1.25);
   thsBackground_grouped_wh3l_13TeV_njet_3l_stack_61->GetYaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_njet_3l_stack_61->GetZaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_13TeV_njet_3l_stack_61->GetZaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_13TeV_njet_3l_stack_61->GetZaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_13TeV_njet_3l_stack_61->GetZaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_13TeV_njet_3l_stack_61->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_njet_3l->SetHistogram(thsBackground_grouped_wh3l_13TeV_njet_3l_stack_61);
   
   
   TH1D *new_histo_group_Fake_wh3l_13TeV_njet_3l302 = new TH1D("new_histo_group_Fake_wh3l_13TeV_njet_3l302","histo_Fake",8,0,8);
   new_histo_group_Fake_wh3l_13TeV_njet_3l302->SetBinContent(1,9.728225);
   new_histo_group_Fake_wh3l_13TeV_njet_3l302->SetBinError(1,2.569399);
   new_histo_group_Fake_wh3l_13TeV_njet_3l302->SetEntries(109);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_13TeV_njet_3l302->SetFillColor(ci);
   new_histo_group_Fake_wh3l_13TeV_njet_3l302->SetFillStyle(3001);

   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_13TeV_njet_3l302->SetLineColor(ci);
   new_histo_group_Fake_wh3l_13TeV_njet_3l302->GetXaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_13TeV_njet_3l302->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_13TeV_njet_3l302->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_13TeV_njet_3l302->GetXaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_13TeV_njet_3l302->GetYaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_13TeV_njet_3l302->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_13TeV_njet_3l302->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_13TeV_njet_3l302->GetYaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_13TeV_njet_3l302->GetZaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_13TeV_njet_3l302->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_13TeV_njet_3l302->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_13TeV_njet_3l302->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_njet_3l->Add(new_histo_group_Fake_wh3l_13TeV_njet_3l,"");
   
   TH1D *new_histo_group_WW_wh3l_13TeV_njet_3l303 = new TH1D("new_histo_group_WW_wh3l_13TeV_njet_3l303","histo_WW",8,0,8);
   new_histo_group_WW_wh3l_13TeV_njet_3l303->SetBinContent(1,0.08870193);
   new_histo_group_WW_wh3l_13TeV_njet_3l303->SetBinError(1,0.03666076);
   new_histo_group_WW_wh3l_13TeV_njet_3l303->SetEntries(6);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_13TeV_njet_3l303->SetFillColor(ci);
   new_histo_group_WW_wh3l_13TeV_njet_3l303->SetFillStyle(3001);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_13TeV_njet_3l303->SetLineColor(ci);
   new_histo_group_WW_wh3l_13TeV_njet_3l303->GetXaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_13TeV_njet_3l303->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_13TeV_njet_3l303->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_13TeV_njet_3l303->GetXaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_13TeV_njet_3l303->GetYaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_13TeV_njet_3l303->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_13TeV_njet_3l303->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_13TeV_njet_3l303->GetYaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_13TeV_njet_3l303->GetZaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_13TeV_njet_3l303->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_13TeV_njet_3l303->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_13TeV_njet_3l303->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_njet_3l->Add(new_histo_group_WW_wh3l_13TeV_njet_3l,"");
   
   TH1D *new_histo_group_VVV_wh3l_13TeV_njet_3l304 = new TH1D("new_histo_group_VVV_wh3l_13TeV_njet_3l304","histo_VVV",8,0,8);
   new_histo_group_VVV_wh3l_13TeV_njet_3l304->SetBinContent(1,0.008318793);
   new_histo_group_VVV_wh3l_13TeV_njet_3l304->SetBinError(1,0.002292934);
   new_histo_group_VVV_wh3l_13TeV_njet_3l304->SetEntries(14);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_13TeV_njet_3l304->SetFillColor(ci);
   new_histo_group_VVV_wh3l_13TeV_njet_3l304->SetFillStyle(3001);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_13TeV_njet_3l304->SetLineColor(ci);
   new_histo_group_VVV_wh3l_13TeV_njet_3l304->GetXaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_13TeV_njet_3l304->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_13TeV_njet_3l304->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_13TeV_njet_3l304->GetXaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_13TeV_njet_3l304->GetYaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_13TeV_njet_3l304->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_13TeV_njet_3l304->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_13TeV_njet_3l304->GetYaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_13TeV_njet_3l304->GetZaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_13TeV_njet_3l304->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_13TeV_njet_3l304->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_13TeV_njet_3l304->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_njet_3l->Add(new_histo_group_VVV_wh3l_13TeV_njet_3l,"");
   
   TH1D *new_histo_group_Vg_wh3l_13TeV_njet_3l305 = new TH1D("new_histo_group_Vg_wh3l_13TeV_njet_3l305","histo_Vg",8,0,8);
   new_histo_group_Vg_wh3l_13TeV_njet_3l305->SetBinContent(1,2.648169);
   new_histo_group_Vg_wh3l_13TeV_njet_3l305->SetBinError(1,0.5700496);
   new_histo_group_Vg_wh3l_13TeV_njet_3l305->SetEntries(42);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_13TeV_njet_3l305->SetFillColor(ci);
   new_histo_group_Vg_wh3l_13TeV_njet_3l305->SetFillStyle(3001);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_13TeV_njet_3l305->SetLineColor(ci);
   new_histo_group_Vg_wh3l_13TeV_njet_3l305->GetXaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_13TeV_njet_3l305->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_13TeV_njet_3l305->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_13TeV_njet_3l305->GetXaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_13TeV_njet_3l305->GetYaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_13TeV_njet_3l305->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_13TeV_njet_3l305->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_13TeV_njet_3l305->GetYaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_13TeV_njet_3l305->GetZaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_13TeV_njet_3l305->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_13TeV_njet_3l305->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_13TeV_njet_3l305->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_njet_3l->Add(new_histo_group_Vg_wh3l_13TeV_njet_3l,"");
   
   TH1D *new_histo_group_ZZ_wh3l_13TeV_njet_3l306 = new TH1D("new_histo_group_ZZ_wh3l_13TeV_njet_3l306","histo_ZZ",8,0,8);
   new_histo_group_ZZ_wh3l_13TeV_njet_3l306->SetBinContent(1,0.6466067);
   new_histo_group_ZZ_wh3l_13TeV_njet_3l306->SetBinError(1,0.158283);
   new_histo_group_ZZ_wh3l_13TeV_njet_3l306->SetEntries(19);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_13TeV_njet_3l306->SetFillColor(ci);
   new_histo_group_ZZ_wh3l_13TeV_njet_3l306->SetFillStyle(3001);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_13TeV_njet_3l306->SetLineColor(ci);
   new_histo_group_ZZ_wh3l_13TeV_njet_3l306->GetXaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_13TeV_njet_3l306->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_13TeV_njet_3l306->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_13TeV_njet_3l306->GetXaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_13TeV_njet_3l306->GetYaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_13TeV_njet_3l306->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_13TeV_njet_3l306->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_13TeV_njet_3l306->GetYaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_13TeV_njet_3l306->GetZaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_13TeV_njet_3l306->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_13TeV_njet_3l306->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_13TeV_njet_3l306->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_njet_3l->Add(new_histo_group_ZZ_wh3l_13TeV_njet_3l,"");
   
   TH1D *new_histo_group_WZ_wh3l_13TeV_njet_3l307 = new TH1D("new_histo_group_WZ_wh3l_13TeV_njet_3l307","histo_WZ",8,0,8);
   new_histo_group_WZ_wh3l_13TeV_njet_3l307->SetBinContent(1,7.389216);
   new_histo_group_WZ_wh3l_13TeV_njet_3l307->SetBinError(1,0.2002934);
   new_histo_group_WZ_wh3l_13TeV_njet_3l307->SetEntries(1516);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_13TeV_njet_3l307->SetFillColor(ci);
   new_histo_group_WZ_wh3l_13TeV_njet_3l307->SetFillStyle(3001);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_13TeV_njet_3l307->SetLineColor(ci);
   new_histo_group_WZ_wh3l_13TeV_njet_3l307->GetXaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_13TeV_njet_3l307->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_13TeV_njet_3l307->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_13TeV_njet_3l307->GetXaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_13TeV_njet_3l307->GetYaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_13TeV_njet_3l307->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_13TeV_njet_3l307->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_13TeV_njet_3l307->GetYaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_13TeV_njet_3l307->GetZaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_13TeV_njet_3l307->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_13TeV_njet_3l307->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_13TeV_njet_3l307->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_njet_3l->Add(new_histo_group_WZ_wh3l_13TeV_njet_3l,"");
   
   TH1D *new_histo_group_Higgs_wh3l_13TeV_njet_3l308 = new TH1D("new_histo_group_Higgs_wh3l_13TeV_njet_3l308","histo_H_htt",8,0,8);
   new_histo_group_Higgs_wh3l_13TeV_njet_3l308->SetBinContent(1,0.835725);
   new_histo_group_Higgs_wh3l_13TeV_njet_3l308->SetBinError(1,0.03132708);
   new_histo_group_Higgs_wh3l_13TeV_njet_3l308->SetEntries(1360);
   new_histo_group_Higgs_wh3l_13TeV_njet_3l308->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_13TeV_njet_3l308->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_13TeV_njet_3l308->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_13TeV_njet_3l308->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_13TeV_njet_3l308->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_njet_3l308->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_njet_3l308->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_13TeV_njet_3l308->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_13TeV_njet_3l308->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_njet_3l308->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_njet_3l308->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_13TeV_njet_3l308->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_13TeV_njet_3l308->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_njet_3l308->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_njet_3l308->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_njet_3l->Add(new_histo_group_Higgs_wh3l_13TeV_njet_3l,"");
   thsBackground_grouped_wh3l_13TeV_njet_3l->Draw("hist same");
   
   thsSignal_grouped_wh3l_13TeV_njet_3l = new THStack();
   thsSignal_grouped_wh3l_13TeV_njet_3l->SetName("thsSignal_grouped_wh3l_13TeV_njet_3l");
   thsSignal_grouped_wh3l_13TeV_njet_3l->SetTitle("thsSignal_grouped_wh3l_13TeV_njet_3l");
   
   TH1F *thsSignal_grouped_wh3l_13TeV_njet_3l_stack_62 = new TH1F("thsSignal_grouped_wh3l_13TeV_njet_3l_stack_62","thsSignal_grouped_wh3l_13TeV_njet_3l",8,0,8);
   thsSignal_grouped_wh3l_13TeV_njet_3l_stack_62->SetMinimum(0);
   thsSignal_grouped_wh3l_13TeV_njet_3l_stack_62->SetMaximum(0.9104047);
   thsSignal_grouped_wh3l_13TeV_njet_3l_stack_62->SetDirectory(0);
   thsSignal_grouped_wh3l_13TeV_njet_3l_stack_62->SetStats(0);
   thsSignal_grouped_wh3l_13TeV_njet_3l_stack_62->SetLineStyle(0);
   thsSignal_grouped_wh3l_13TeV_njet_3l_stack_62->SetMarkerStyle(20);
   thsSignal_grouped_wh3l_13TeV_njet_3l_stack_62->GetXaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_13TeV_njet_3l_stack_62->GetXaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_13TeV_njet_3l_stack_62->GetXaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_13TeV_njet_3l_stack_62->GetXaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_13TeV_njet_3l_stack_62->GetXaxis()->SetTitleOffset(0.9);
   thsSignal_grouped_wh3l_13TeV_njet_3l_stack_62->GetXaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_13TeV_njet_3l_stack_62->GetYaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_13TeV_njet_3l_stack_62->GetYaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_13TeV_njet_3l_stack_62->GetYaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_13TeV_njet_3l_stack_62->GetYaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_13TeV_njet_3l_stack_62->GetYaxis()->SetTitleOffset(1.25);
   thsSignal_grouped_wh3l_13TeV_njet_3l_stack_62->GetYaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_13TeV_njet_3l_stack_62->GetZaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_13TeV_njet_3l_stack_62->GetZaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_13TeV_njet_3l_stack_62->GetZaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_13TeV_njet_3l_stack_62->GetZaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_13TeV_njet_3l_stack_62->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_13TeV_njet_3l->SetHistogram(thsSignal_grouped_wh3l_13TeV_njet_3l_stack_62);
   
   
   TH1D *new_histo_group_Higgs_wh3l_13TeV_njet_3l309 = new TH1D("new_histo_group_Higgs_wh3l_13TeV_njet_3l309","histo_H_htt",8,0,8);
   new_histo_group_Higgs_wh3l_13TeV_njet_3l309->SetBinContent(1,0.835725);
   new_histo_group_Higgs_wh3l_13TeV_njet_3l309->SetBinError(1,0.03132708);
   new_histo_group_Higgs_wh3l_13TeV_njet_3l309->SetEntries(1360);
   new_histo_group_Higgs_wh3l_13TeV_njet_3l309->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_13TeV_njet_3l309->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_13TeV_njet_3l309->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_13TeV_njet_3l309->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_13TeV_njet_3l309->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_njet_3l309->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_njet_3l309->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_13TeV_njet_3l309->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_13TeV_njet_3l309->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_njet_3l309->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_njet_3l309->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_13TeV_njet_3l309->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_13TeV_njet_3l309->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_njet_3l309->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_njet_3l309->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_13TeV_njet_3l->Add(new_histo_group_Higgs_wh3l_13TeV_njet_3l,"");
   thsSignal_grouped_wh3l_13TeV_njet_3l->Draw("hist same noclear");
   
   Double_t _fx3061[8] = {
   0.5,
   1.5,
   2.5,
   3.5,
   4.5,
   5.5,
   6.5,
   7.5};
   Double_t _fy3061[8] = {
   20.50924,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _felx3061[8] = {
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5};
   Double_t _fely3061[8] = {
   4.930497,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fehx3061[8] = {
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5};
   Double_t _fehy3061[8] = {
   4.929205,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(8,_fx3061,_fy3061,_felx3061,_fehx3061,_fely3061,_fehy3061);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(12);
   grae->SetFillStyle(3004);
   grae->SetLineColor(12);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3061 = new TH1F("Graph_Graph3061","",100,0,8.8);
   Graph_Graph3061->SetMinimum(0);
   Graph_Graph3061->SetMaximum(27.98229);
   Graph_Graph3061->SetDirectory(0);
   Graph_Graph3061->SetStats(0);
   Graph_Graph3061->SetLineStyle(0);
   Graph_Graph3061->SetMarkerStyle(20);
   Graph_Graph3061->GetXaxis()->SetLabelFont(42);
   Graph_Graph3061->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3061->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3061->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3061->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3061->GetXaxis()->SetTitleFont(42);
   Graph_Graph3061->GetYaxis()->SetLabelFont(42);
   Graph_Graph3061->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3061->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3061->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3061->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3061->GetYaxis()->SetTitleFont(42);
   Graph_Graph3061->GetZaxis()->SetLabelFont(42);
   Graph_Graph3061->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3061->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3061->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3061->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3061);
   
   grae->Draw("2");
   
   Double_t _fx3062[8] = {
   0.5,
   1.5,
   2.5,
   3.5,
   4.5,
   5.5,
   6.5,
   7.5};
   Double_t _fy3062[8] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _felx3062[8] = {
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5};
   Double_t _fely3062[8] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fehx3062[8] = {
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5};
   Double_t _fehy3062[8] = {
   1.147908,
   1.147908,
   1.147908,
   1.147908,
   1.147908,
   1.147908,
   1.147908,
   1.147908};
   grae = new TGraphAsymmErrors(8,_fx3062,_fy3062,_felx3062,_fehx3062,_fely3062,_fehy3062);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(1);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3062 = new TH1F("Graph_Graph3062","",100,0,8.8);
   Graph_Graph3062->SetMinimum(0);
   Graph_Graph3062->SetMaximum(1.262698);
   Graph_Graph3062->SetDirectory(0);
   Graph_Graph3062->SetStats(0);
   Graph_Graph3062->SetLineStyle(0);
   Graph_Graph3062->SetMarkerStyle(20);
   Graph_Graph3062->GetXaxis()->SetLabelFont(42);
   Graph_Graph3062->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3062->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3062->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3062->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3062->GetXaxis()->SetTitleFont(42);
   Graph_Graph3062->GetYaxis()->SetLabelFont(42);
   Graph_Graph3062->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3062->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3062->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3062->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3062->GetYaxis()->SetTitleFont(42);
   Graph_Graph3062->GetZaxis()->SetLabelFont(42);
   Graph_Graph3062->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3062->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3062->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3062->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3062);
   
   grae->Draw("p0");
   
   TLegend *leg = new TLegend(0.2,0.7,0.8,0.9,NULL,"brNDC");
   leg->SetTextFont(62);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("new_histo_group_Fake_wh3l_13TeV_njet_3l","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_13TeV_njet_3l","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_13TeV_njet_3l","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_13TeV_njet_3l","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_13TeV_njet_3l","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_13TeV_njet_3l","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_13TeV_njet_3l","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_13TeV_njet_3l","Data","EPL");
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
   entry=leg->AddEntry("new_histo_group_Fake_wh3l_13TeV_njet_3l","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_13TeV_njet_3l","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_13TeV_njet_3l","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_13TeV_njet_3l","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_13TeV_njet_3l","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_13TeV_njet_3l","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_13TeV_njet_3l","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_13TeV_njet_3l","Data","EPL");
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
   
   TH1F *hframe_copy310 = new TH1F("hframe_copy310","",1000,0,8);
   hframe_copy310->SetMinimum(0);
   hframe_copy310->SetMaximum(53.3624);
   hframe_copy310->SetDirectory(0);
   hframe_copy310->SetStats(0);
   hframe_copy310->SetLineStyle(0);
   hframe_copy310->SetMarkerStyle(20);
   hframe_copy310->GetXaxis()->SetTitle("N_Jets");
   hframe_copy310->GetXaxis()->SetNdivisions(506);
   hframe_copy310->GetXaxis()->SetLabelFont(42);
   hframe_copy310->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy310->GetXaxis()->SetLabelSize(0.05);
   hframe_copy310->GetXaxis()->SetTitleSize(0.06);
   hframe_copy310->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy310->GetXaxis()->SetTitleFont(42);
   hframe_copy310->GetYaxis()->SetTitle("Events");
   hframe_copy310->GetYaxis()->SetLabelFont(42);
   hframe_copy310->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy310->GetYaxis()->SetLabelSize(0.05);
   hframe_copy310->GetYaxis()->SetTitleSize(0.06);
   hframe_copy310->GetYaxis()->SetTitleOffset(1.25);
   hframe_copy310->GetYaxis()->SetTitleFont(42);
   hframe_copy310->GetZaxis()->SetLabelFont(42);
   hframe_copy310->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy310->GetZaxis()->SetLabelSize(0.05);
   hframe_copy310->GetZaxis()->SetTitleSize(0.06);
   hframe_copy310->GetZaxis()->SetTitleFont(42);
   hframe_copy310->Draw("sameaxis");
   ccwh3l_13TeV_njet_3l->Modified();
   ccwh3l_13TeV_njet_3l->cd();
   ccwh3l_13TeV_njet_3l->SetSelected(ccwh3l_13TeV_njet_3l);
}
