void c_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l()
{
//=========Macro generated from canvas: ccwh3l_MET_JetV_ZVeto_13TeV_nbjet_3l/cc
//=========  (Sun Jul  3 01:22:15 2016) by ROOT version6.02/13
   TCanvas *ccwh3l_MET_JetV_ZVeto_13TeV_nbjet_3l = new TCanvas("ccwh3l_MET_JetV_ZVeto_13TeV_nbjet_3l", "cc",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   ccwh3l_MET_JetV_ZVeto_13TeV_nbjet_3l->SetHighLightColor(2);
   ccwh3l_MET_JetV_ZVeto_13TeV_nbjet_3l->Range(-1,-2.867954,5.25,19.19323);
   ccwh3l_MET_JetV_ZVeto_13TeV_nbjet_3l->SetFillColor(0);
   ccwh3l_MET_JetV_ZVeto_13TeV_nbjet_3l->SetBorderMode(0);
   ccwh3l_MET_JetV_ZVeto_13TeV_nbjet_3l->SetBorderSize(2);
   ccwh3l_MET_JetV_ZVeto_13TeV_nbjet_3l->SetTickx(1);
   ccwh3l_MET_JetV_ZVeto_13TeV_nbjet_3l->SetTicky(1);
   ccwh3l_MET_JetV_ZVeto_13TeV_nbjet_3l->SetLeftMargin(0.16);
   ccwh3l_MET_JetV_ZVeto_13TeV_nbjet_3l->SetRightMargin(0.04);
   ccwh3l_MET_JetV_ZVeto_13TeV_nbjet_3l->SetTopMargin(0.05);
   ccwh3l_MET_JetV_ZVeto_13TeV_nbjet_3l->SetBottomMargin(0.13);
   ccwh3l_MET_JetV_ZVeto_13TeV_nbjet_3l->SetFrameFillStyle(0);
   ccwh3l_MET_JetV_ZVeto_13TeV_nbjet_3l->SetFrameBorderMode(0);
   ccwh3l_MET_JetV_ZVeto_13TeV_nbjet_3l->SetFrameFillStyle(0);
   ccwh3l_MET_JetV_ZVeto_13TeV_nbjet_3l->SetFrameBorderMode(0);
   
   TH1F *hframe471 = new TH1F("hframe471","",1000,0,5);
   hframe471->SetMinimum(0);
   hframe471->SetMaximum(18.09017);
   hframe471->SetDirectory(0);
   hframe471->SetStats(0);
   hframe471->SetLineStyle(0);
   hframe471->SetMarkerStyle(20);
   hframe471->GetXaxis()->SetTitle("N_bJets");
   hframe471->GetXaxis()->SetNdivisions(506);
   hframe471->GetXaxis()->SetLabelFont(42);
   hframe471->GetXaxis()->SetLabelOffset(0.007);
   hframe471->GetXaxis()->SetLabelSize(0.05);
   hframe471->GetXaxis()->SetTitleSize(0.06);
   hframe471->GetXaxis()->SetTitleOffset(0.9);
   hframe471->GetXaxis()->SetTitleFont(42);
   hframe471->GetYaxis()->SetTitle("Events");
   hframe471->GetYaxis()->SetLabelFont(42);
   hframe471->GetYaxis()->SetLabelOffset(0.007);
   hframe471->GetYaxis()->SetLabelSize(0.05);
   hframe471->GetYaxis()->SetTitleSize(0.06);
   hframe471->GetYaxis()->SetTitleOffset(1.25);
   hframe471->GetYaxis()->SetTitleFont(42);
   hframe471->GetZaxis()->SetLabelFont(42);
   hframe471->GetZaxis()->SetLabelOffset(0.007);
   hframe471->GetZaxis()->SetLabelSize(0.05);
   hframe471->GetZaxis()->SetTitleSize(0.06);
   hframe471->GetZaxis()->SetTitleFont(42);
   hframe471->Draw(" ");
   
   THStack *thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l = new THStack();
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l->SetName("thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l");
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l->SetTitle("thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l");
   
   TH1F *thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l_stack_95 = new TH1F("thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l_stack_95","thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l",5,0,5);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l_stack_95->SetMinimum(0);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l_stack_95->SetMaximum(4.45845);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l_stack_95->SetDirectory(0);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l_stack_95->SetStats(0);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l_stack_95->SetLineStyle(0);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l_stack_95->SetMarkerStyle(20);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l_stack_95->GetXaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l_stack_95->GetXaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l_stack_95->GetXaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l_stack_95->GetXaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l_stack_95->GetXaxis()->SetTitleOffset(0.9);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l_stack_95->GetXaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l_stack_95->GetYaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l_stack_95->GetYaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l_stack_95->GetYaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l_stack_95->GetYaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l_stack_95->GetYaxis()->SetTitleOffset(1.25);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l_stack_95->GetYaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l_stack_95->GetZaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l_stack_95->GetZaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l_stack_95->GetZaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l_stack_95->GetZaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l_stack_95->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l->SetHistogram(thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l_stack_95);
   
   
   TH1D *new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l472 = new TH1D("new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l472","histo_Fake",5,0,5);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l472->SetBinContent(1,2.887924);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l472->SetBinError(1,1.358219);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l472->SetEntries(34);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l472->SetFillColor(ci);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l472->SetFillStyle(3001);

   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l472->SetLineColor(ci);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l472->GetXaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l472->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l472->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l472->GetXaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l472->GetYaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l472->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l472->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l472->GetYaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l472->GetZaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l472->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l472->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l472->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l->Add(new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l,"");
   
   TH1D *new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l473 = new TH1D("new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l473","histo_WW",5,0,5);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l473->SetBinContent(1,0.04360057);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l473->SetBinError(1,0.02568789);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l473->SetEntries(3);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l473->SetFillColor(ci);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l473->SetFillStyle(3001);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l473->SetLineColor(ci);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l473->GetXaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l473->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l473->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l473->GetXaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l473->GetYaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l473->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l473->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l473->GetYaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l473->GetZaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l473->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l473->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l473->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l->Add(new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l,"");
   
   TH1D *new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l474 = new TH1D("new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l474","histo_VVV",5,0,5);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l474->SetBinContent(1,0.1299423);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l474->SetBinError(1,0.01921394);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l474->SetEntries(80);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l474->SetFillColor(ci);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l474->SetFillStyle(3001);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l474->SetLineColor(ci);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l474->GetXaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l474->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l474->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l474->GetXaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l474->GetYaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l474->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l474->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l474->GetYaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l474->GetZaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l474->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l474->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l474->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l->Add(new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l,"");
   
   TH1D *new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l475 = new TH1D("new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l475","histo_Vg",5,0,5);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l475->SetBinContent(1,0.0522728);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l475->SetBinError(1,0.0522728);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l475->SetEntries(1);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l475->SetFillColor(ci);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l475->SetFillStyle(3001);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l475->SetLineColor(ci);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l475->GetXaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l475->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l475->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l475->GetXaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l475->GetYaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l475->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l475->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l475->GetYaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l475->GetZaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l475->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l475->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l475->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l->Add(new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l,"");
   
   TH1D *new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l476 = new TH1D("new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l476","histo_ZZ",5,0,5);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l476->SetBinContent(1,0.07785033);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l476->SetBinError(1,0.05530859);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l476->SetEntries(2);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l476->SetFillColor(ci);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l476->SetFillStyle(3001);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l476->SetLineColor(ci);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l476->GetXaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l476->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l476->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l476->GetXaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l476->GetYaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l476->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l476->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l476->GetYaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l476->GetZaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l476->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l476->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l476->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l->Add(new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l,"");
   
   TH1D *new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l477 = new TH1D("new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l477","histo_WZ",5,0,5);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l477->SetBinContent(1,0.6645087);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l477->SetBinError(1,0.05966337);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l477->SetEntries(136);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l477->SetFillColor(ci);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l477->SetFillStyle(3001);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l477->SetLineColor(ci);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l477->GetXaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l477->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l477->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l477->GetXaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l477->GetYaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l477->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l477->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l477->GetYaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l477->GetZaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l477->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l477->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l477->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l->Add(new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l,"");
   
   TH1D *new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l478 = new TH1D("new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l478","histo_H_htt",5,0,5);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l478->SetBinContent(1,0.2835517);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l478->SetBinError(1,0.01760248);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l478->SetEntries(512);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l478->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l478->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l478->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l478->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l478->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l478->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l478->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l478->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l478->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l478->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l478->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l478->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l478->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l478->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l478->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l->Add(new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l,"");
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l->Draw("hist same");
   
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l = new THStack();
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l->SetName("thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l");
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l->SetTitle("thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l");
   
   TH1F *thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l_stack_96 = new TH1F("thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l_stack_96","thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l",5,0,5);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l_stack_96->SetMinimum(0);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l_stack_96->SetMaximum(0.3162119);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l_stack_96->SetDirectory(0);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l_stack_96->SetStats(0);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l_stack_96->SetLineStyle(0);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l_stack_96->SetMarkerStyle(20);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l_stack_96->GetXaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l_stack_96->GetXaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l_stack_96->GetXaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l_stack_96->GetXaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l_stack_96->GetXaxis()->SetTitleOffset(0.9);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l_stack_96->GetXaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l_stack_96->GetYaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l_stack_96->GetYaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l_stack_96->GetYaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l_stack_96->GetYaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l_stack_96->GetYaxis()->SetTitleOffset(1.25);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l_stack_96->GetYaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l_stack_96->GetZaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l_stack_96->GetZaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l_stack_96->GetZaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l_stack_96->GetZaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l_stack_96->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l->SetHistogram(thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l_stack_96);
   
   
   TH1D *new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l479 = new TH1D("new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l479","histo_H_htt",5,0,5);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l479->SetBinContent(1,0.2835517);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l479->SetBinError(1,0.01760248);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l479->SetEntries(512);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l479->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l479->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l479->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l479->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l479->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l479->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l479->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l479->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l479->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l479->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l479->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l479->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l479->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l479->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l479->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l->Add(new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l,"");
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l->Draw("hist same noclear");
   
   Double_t _fx3095[5] = {
   0.5,
   1.5,
   2.5,
   3.5,
   4.5};
   Double_t _fy3095[5] = {
   3.856098,
   0,
   0,
   0,
   0};
   Double_t _felx3095[5] = {
   0.5,
   0.5,
   0.5,
   0.5,
   0.5};
   Double_t _fely3095[5] = {
   1.87231,
   0,
   0,
   0,
   0};
   Double_t _fehx3095[5] = {
   0.5,
   0.5,
   0.5,
   0.5,
   0.5};
   Double_t _fehy3095[5] = {
   1.872253,
   0,
   0,
   0,
   0};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(5,_fx3095,_fy3095,_felx3095,_fehx3095,_fely3095,_fehy3095);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(12);
   grae->SetFillStyle(3004);
   grae->SetLineColor(12);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3095 = new TH1F("Graph_Graph3095","",100,0,5.5);
   Graph_Graph3095->SetMinimum(0);
   Graph_Graph3095->SetMaximum(6.301187);
   Graph_Graph3095->SetDirectory(0);
   Graph_Graph3095->SetStats(0);
   Graph_Graph3095->SetLineStyle(0);
   Graph_Graph3095->SetMarkerStyle(20);
   Graph_Graph3095->GetXaxis()->SetLabelFont(42);
   Graph_Graph3095->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3095->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3095->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3095->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3095->GetXaxis()->SetTitleFont(42);
   Graph_Graph3095->GetYaxis()->SetLabelFont(42);
   Graph_Graph3095->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3095->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3095->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3095->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3095->GetYaxis()->SetTitleFont(42);
   Graph_Graph3095->GetZaxis()->SetLabelFont(42);
   Graph_Graph3095->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3095->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3095->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3095->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3095);
   
   grae->Draw("2");
   
   Double_t _fx3096[5] = {
   0.5,
   1.5,
   2.5,
   3.5,
   4.5};
   Double_t _fy3096[5] = {
   5,
   0,
   0,
   0,
   0};
   Double_t _felx3096[5] = {
   0.5,
   0.5,
   0.5,
   0.5,
   0.5};
   Double_t _fely3096[5] = {
   2.159724,
   0,
   0,
   0,
   0};
   Double_t _fehx3096[5] = {
   0.5,
   0.5,
   0.5,
   0.5,
   0.5};
   Double_t _fehy3096[5] = {
   3.382539,
   1.147908,
   1.147908,
   1.147908,
   1.147908};
   grae = new TGraphAsymmErrors(5,_fx3096,_fy3096,_felx3096,_fehx3096,_fely3096,_fehy3096);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(1);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3096 = new TH1F("Graph_Graph3096","",100,0,5.5);
   Graph_Graph3096->SetMinimum(0);
   Graph_Graph3096->SetMaximum(9.220793);
   Graph_Graph3096->SetDirectory(0);
   Graph_Graph3096->SetStats(0);
   Graph_Graph3096->SetLineStyle(0);
   Graph_Graph3096->SetMarkerStyle(20);
   Graph_Graph3096->GetXaxis()->SetLabelFont(42);
   Graph_Graph3096->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3096->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3096->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3096->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3096->GetXaxis()->SetTitleFont(42);
   Graph_Graph3096->GetYaxis()->SetLabelFont(42);
   Graph_Graph3096->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3096->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3096->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3096->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3096->GetYaxis()->SetTitleFont(42);
   Graph_Graph3096->GetZaxis()->SetLabelFont(42);
   Graph_Graph3096->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3096->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3096->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3096->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3096);
   
   grae->Draw("p0");
   
   TLegend *leg = new TLegend(0.2,0.7,0.8,0.9,NULL,"brNDC");
   leg->SetTextFont(62);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l","Data","EPL");
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
   entry=leg->AddEntry("new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_MET_JetV_ZVeto_13TeV_nbjet_3l","Data","EPL");
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
   
   TH1F *hframe_copy480 = new TH1F("hframe_copy480","",1000,0,5);
   hframe_copy480->SetMinimum(0);
   hframe_copy480->SetMaximum(18.09017);
   hframe_copy480->SetDirectory(0);
   hframe_copy480->SetStats(0);
   hframe_copy480->SetLineStyle(0);
   hframe_copy480->SetMarkerStyle(20);
   hframe_copy480->GetXaxis()->SetTitle("N_bJets");
   hframe_copy480->GetXaxis()->SetNdivisions(506);
   hframe_copy480->GetXaxis()->SetLabelFont(42);
   hframe_copy480->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy480->GetXaxis()->SetLabelSize(0.05);
   hframe_copy480->GetXaxis()->SetTitleSize(0.06);
   hframe_copy480->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy480->GetXaxis()->SetTitleFont(42);
   hframe_copy480->GetYaxis()->SetTitle("Events");
   hframe_copy480->GetYaxis()->SetLabelFont(42);
   hframe_copy480->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy480->GetYaxis()->SetLabelSize(0.05);
   hframe_copy480->GetYaxis()->SetTitleSize(0.06);
   hframe_copy480->GetYaxis()->SetTitleOffset(1.25);
   hframe_copy480->GetYaxis()->SetTitleFont(42);
   hframe_copy480->GetZaxis()->SetLabelFont(42);
   hframe_copy480->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy480->GetZaxis()->SetLabelSize(0.05);
   hframe_copy480->GetZaxis()->SetTitleSize(0.06);
   hframe_copy480->GetZaxis()->SetTitleFont(42);
   hframe_copy480->Draw("sameaxis");
   ccwh3l_MET_JetV_ZVeto_13TeV_nbjet_3l->Modified();
   ccwh3l_MET_JetV_ZVeto_13TeV_nbjet_3l->cd();
   ccwh3l_MET_JetV_ZVeto_13TeV_nbjet_3l->SetSelected(ccwh3l_MET_JetV_ZVeto_13TeV_nbjet_3l);
}
