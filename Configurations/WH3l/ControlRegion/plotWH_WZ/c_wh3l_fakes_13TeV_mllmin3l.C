void c_wh3l_fakes_13TeV_mllmin3l()
{
//=========Macro generated from canvas: ccwh3l_fakes_13TeV_mllmin3l/cc
//=========  (Sat Jul  2 19:44:31 2016) by ROOT version6.02/13
   TCanvas *ccwh3l_fakes_13TeV_mllmin3l = new TCanvas("ccwh3l_fakes_13TeV_mllmin3l", "cc",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   ccwh3l_fakes_13TeV_mllmin3l->SetHighLightColor(2);
   ccwh3l_fakes_13TeV_mllmin3l->Range(-28,-0.1585366,209.5,1.060976);
   ccwh3l_fakes_13TeV_mllmin3l->SetFillColor(0);
   ccwh3l_fakes_13TeV_mllmin3l->SetBorderMode(0);
   ccwh3l_fakes_13TeV_mllmin3l->SetBorderSize(2);
   ccwh3l_fakes_13TeV_mllmin3l->SetTickx(1);
   ccwh3l_fakes_13TeV_mllmin3l->SetTicky(1);
   ccwh3l_fakes_13TeV_mllmin3l->SetLeftMargin(0.16);
   ccwh3l_fakes_13TeV_mllmin3l->SetRightMargin(0.04);
   ccwh3l_fakes_13TeV_mllmin3l->SetTopMargin(0.05);
   ccwh3l_fakes_13TeV_mllmin3l->SetBottomMargin(0.13);
   ccwh3l_fakes_13TeV_mllmin3l->SetFrameFillStyle(0);
   ccwh3l_fakes_13TeV_mllmin3l->SetFrameBorderMode(0);
   ccwh3l_fakes_13TeV_mllmin3l->SetFrameFillStyle(0);
   ccwh3l_fakes_13TeV_mllmin3l->SetFrameBorderMode(0);
   
   TH1F *hframe28 = new TH1F("hframe28","",1000,10,200);
   hframe28->SetMinimum(0);
   hframe28->SetMaximum(0);
   hframe28->SetDirectory(0);
   hframe28->SetStats(0);
   hframe28->SetLineStyle(0);
   hframe28->SetMarkerStyle(20);
   hframe28->GetXaxis()->SetTitle("min m_{ll} [GeV]");
   hframe28->GetXaxis()->SetNdivisions(506);
   hframe28->GetXaxis()->SetLabelFont(42);
   hframe28->GetXaxis()->SetLabelOffset(0.007);
   hframe28->GetXaxis()->SetLabelSize(0.05);
   hframe28->GetXaxis()->SetTitleSize(0.06);
   hframe28->GetXaxis()->SetTitleOffset(0.9);
   hframe28->GetXaxis()->SetTitleFont(42);
   hframe28->GetYaxis()->SetTitle("Events");
   hframe28->GetYaxis()->SetLabelFont(42);
   hframe28->GetYaxis()->SetLabelOffset(0.007);
   hframe28->GetYaxis()->SetLabelSize(0.05);
   hframe28->GetYaxis()->SetTitleSize(0.06);
   hframe28->GetYaxis()->SetTitleOffset(1.25);
   hframe28->GetYaxis()->SetTitleFont(42);
   hframe28->GetZaxis()->SetLabelFont(42);
   hframe28->GetZaxis()->SetLabelOffset(0.007);
   hframe28->GetZaxis()->SetLabelSize(0.05);
   hframe28->GetZaxis()->SetTitleSize(0.06);
   hframe28->GetZaxis()->SetTitleFont(42);
   hframe28->Draw(" ");
   
   THStack *thsBackground_grouped_wh3l_fakes_13TeV_mllmin3l = new THStack();
   thsBackground_grouped_wh3l_fakes_13TeV_mllmin3l->SetName("thsBackground_grouped_wh3l_fakes_13TeV_mllmin3l");
   thsBackground_grouped_wh3l_fakes_13TeV_mllmin3l->SetTitle("thsBackground_grouped_wh3l_fakes_13TeV_mllmin3l");
   
   TH1F *thsBackground_grouped_wh3l_fakes_13TeV_mllmin3l_stack_7 = new TH1F("thsBackground_grouped_wh3l_fakes_13TeV_mllmin3l_stack_7","thsBackground_grouped_wh3l_fakes_13TeV_mllmin3l",20,10,200);
   thsBackground_grouped_wh3l_fakes_13TeV_mllmin3l_stack_7->SetMinimum(0);
   thsBackground_grouped_wh3l_fakes_13TeV_mllmin3l_stack_7->SetMaximum(0);
   thsBackground_grouped_wh3l_fakes_13TeV_mllmin3l_stack_7->SetDirectory(0);
   thsBackground_grouped_wh3l_fakes_13TeV_mllmin3l_stack_7->SetStats(0);
   thsBackground_grouped_wh3l_fakes_13TeV_mllmin3l_stack_7->SetLineStyle(0);
   thsBackground_grouped_wh3l_fakes_13TeV_mllmin3l_stack_7->SetMarkerStyle(20);
   thsBackground_grouped_wh3l_fakes_13TeV_mllmin3l_stack_7->GetXaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_fakes_13TeV_mllmin3l_stack_7->GetXaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_fakes_13TeV_mllmin3l_stack_7->GetXaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_fakes_13TeV_mllmin3l_stack_7->GetXaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_fakes_13TeV_mllmin3l_stack_7->GetXaxis()->SetTitleOffset(0.9);
   thsBackground_grouped_wh3l_fakes_13TeV_mllmin3l_stack_7->GetXaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_fakes_13TeV_mllmin3l_stack_7->GetYaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_fakes_13TeV_mllmin3l_stack_7->GetYaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_fakes_13TeV_mllmin3l_stack_7->GetYaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_fakes_13TeV_mllmin3l_stack_7->GetYaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_fakes_13TeV_mllmin3l_stack_7->GetYaxis()->SetTitleOffset(1.25);
   thsBackground_grouped_wh3l_fakes_13TeV_mllmin3l_stack_7->GetYaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_fakes_13TeV_mllmin3l_stack_7->GetZaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_fakes_13TeV_mllmin3l_stack_7->GetZaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_fakes_13TeV_mllmin3l_stack_7->GetZaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_fakes_13TeV_mllmin3l_stack_7->GetZaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_fakes_13TeV_mllmin3l_stack_7->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_fakes_13TeV_mllmin3l->SetHistogram(thsBackground_grouped_wh3l_fakes_13TeV_mllmin3l_stack_7);
   
   
   TH1D *new_histo_group_Fake_wh3l_fakes_13TeV_mllmin3l29 = new TH1D("new_histo_group_Fake_wh3l_fakes_13TeV_mllmin3l29","histo_Fake",20,10,200);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_fakes_13TeV_mllmin3l29->SetFillColor(ci);
   new_histo_group_Fake_wh3l_fakes_13TeV_mllmin3l29->SetFillStyle(3001);

   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_fakes_13TeV_mllmin3l29->SetLineColor(ci);
   new_histo_group_Fake_wh3l_fakes_13TeV_mllmin3l29->GetXaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_fakes_13TeV_mllmin3l29->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_fakes_13TeV_mllmin3l29->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_fakes_13TeV_mllmin3l29->GetXaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_fakes_13TeV_mllmin3l29->GetYaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_fakes_13TeV_mllmin3l29->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_fakes_13TeV_mllmin3l29->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_fakes_13TeV_mllmin3l29->GetYaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_fakes_13TeV_mllmin3l29->GetZaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_fakes_13TeV_mllmin3l29->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_fakes_13TeV_mllmin3l29->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_fakes_13TeV_mllmin3l29->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_fakes_13TeV_mllmin3l->Add(new_histo_group_Fake_wh3l_fakes_13TeV_mllmin3l,"");
   
   TH1D *new_histo_group_WW_wh3l_fakes_13TeV_mllmin3l30 = new TH1D("new_histo_group_WW_wh3l_fakes_13TeV_mllmin3l30","histo_WW",20,10,200);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_fakes_13TeV_mllmin3l30->SetFillColor(ci);
   new_histo_group_WW_wh3l_fakes_13TeV_mllmin3l30->SetFillStyle(3001);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_fakes_13TeV_mllmin3l30->SetLineColor(ci);
   new_histo_group_WW_wh3l_fakes_13TeV_mllmin3l30->GetXaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_fakes_13TeV_mllmin3l30->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_fakes_13TeV_mllmin3l30->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_fakes_13TeV_mllmin3l30->GetXaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_fakes_13TeV_mllmin3l30->GetYaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_fakes_13TeV_mllmin3l30->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_fakes_13TeV_mllmin3l30->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_fakes_13TeV_mllmin3l30->GetYaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_fakes_13TeV_mllmin3l30->GetZaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_fakes_13TeV_mllmin3l30->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_fakes_13TeV_mllmin3l30->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_fakes_13TeV_mllmin3l30->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_fakes_13TeV_mllmin3l->Add(new_histo_group_WW_wh3l_fakes_13TeV_mllmin3l,"");
   
   TH1D *new_histo_group_Vg_wh3l_fakes_13TeV_mllmin3l31 = new TH1D("new_histo_group_Vg_wh3l_fakes_13TeV_mllmin3l31","histo_Vg",20,10,200);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_fakes_13TeV_mllmin3l31->SetFillColor(ci);
   new_histo_group_Vg_wh3l_fakes_13TeV_mllmin3l31->SetFillStyle(3001);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_fakes_13TeV_mllmin3l31->SetLineColor(ci);
   new_histo_group_Vg_wh3l_fakes_13TeV_mllmin3l31->GetXaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_fakes_13TeV_mllmin3l31->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_fakes_13TeV_mllmin3l31->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_fakes_13TeV_mllmin3l31->GetXaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_fakes_13TeV_mllmin3l31->GetYaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_fakes_13TeV_mllmin3l31->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_fakes_13TeV_mllmin3l31->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_fakes_13TeV_mllmin3l31->GetYaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_fakes_13TeV_mllmin3l31->GetZaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_fakes_13TeV_mllmin3l31->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_fakes_13TeV_mllmin3l31->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_fakes_13TeV_mllmin3l31->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_fakes_13TeV_mllmin3l->Add(new_histo_group_Vg_wh3l_fakes_13TeV_mllmin3l,"");
   
   TH1D *new_histo_group_ZZ_wh3l_fakes_13TeV_mllmin3l32 = new TH1D("new_histo_group_ZZ_wh3l_fakes_13TeV_mllmin3l32","histo_ZZ",20,10,200);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_fakes_13TeV_mllmin3l32->SetFillColor(ci);
   new_histo_group_ZZ_wh3l_fakes_13TeV_mllmin3l32->SetFillStyle(3001);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_fakes_13TeV_mllmin3l32->SetLineColor(ci);
   new_histo_group_ZZ_wh3l_fakes_13TeV_mllmin3l32->GetXaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_fakes_13TeV_mllmin3l32->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_fakes_13TeV_mllmin3l32->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_fakes_13TeV_mllmin3l32->GetXaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_fakes_13TeV_mllmin3l32->GetYaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_fakes_13TeV_mllmin3l32->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_fakes_13TeV_mllmin3l32->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_fakes_13TeV_mllmin3l32->GetYaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_fakes_13TeV_mllmin3l32->GetZaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_fakes_13TeV_mllmin3l32->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_fakes_13TeV_mllmin3l32->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_fakes_13TeV_mllmin3l32->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_fakes_13TeV_mllmin3l->Add(new_histo_group_ZZ_wh3l_fakes_13TeV_mllmin3l,"");
   
   TH1D *new_histo_group_WZ_wh3l_fakes_13TeV_mllmin3l33 = new TH1D("new_histo_group_WZ_wh3l_fakes_13TeV_mllmin3l33","histo_WZ",20,10,200);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_fakes_13TeV_mllmin3l33->SetFillColor(ci);
   new_histo_group_WZ_wh3l_fakes_13TeV_mllmin3l33->SetFillStyle(3001);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_fakes_13TeV_mllmin3l33->SetLineColor(ci);
   new_histo_group_WZ_wh3l_fakes_13TeV_mllmin3l33->GetXaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_fakes_13TeV_mllmin3l33->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_fakes_13TeV_mllmin3l33->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_fakes_13TeV_mllmin3l33->GetXaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_fakes_13TeV_mllmin3l33->GetYaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_fakes_13TeV_mllmin3l33->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_fakes_13TeV_mllmin3l33->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_fakes_13TeV_mllmin3l33->GetYaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_fakes_13TeV_mllmin3l33->GetZaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_fakes_13TeV_mllmin3l33->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_fakes_13TeV_mllmin3l33->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_fakes_13TeV_mllmin3l33->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_fakes_13TeV_mllmin3l->Add(new_histo_group_WZ_wh3l_fakes_13TeV_mllmin3l,"");
   
   TH1D *new_histo_group_Higgs_wh3l_fakes_13TeV_mllmin3l34 = new TH1D("new_histo_group_Higgs_wh3l_fakes_13TeV_mllmin3l34","histo_H_htt",20,10,200);
   new_histo_group_Higgs_wh3l_fakes_13TeV_mllmin3l34->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_fakes_13TeV_mllmin3l34->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_fakes_13TeV_mllmin3l34->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_fakes_13TeV_mllmin3l34->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_fakes_13TeV_mllmin3l34->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_fakes_13TeV_mllmin3l34->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_fakes_13TeV_mllmin3l34->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_fakes_13TeV_mllmin3l34->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_fakes_13TeV_mllmin3l34->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_fakes_13TeV_mllmin3l34->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_fakes_13TeV_mllmin3l34->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_fakes_13TeV_mllmin3l34->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_fakes_13TeV_mllmin3l34->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_fakes_13TeV_mllmin3l34->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_fakes_13TeV_mllmin3l34->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_fakes_13TeV_mllmin3l->Add(new_histo_group_Higgs_wh3l_fakes_13TeV_mllmin3l,"");
   thsBackground_grouped_wh3l_fakes_13TeV_mllmin3l->Draw("hist same");
   
   thsSignal_grouped_wh3l_fakes_13TeV_mllmin3l = new THStack();
   thsSignal_grouped_wh3l_fakes_13TeV_mllmin3l->SetName("thsSignal_grouped_wh3l_fakes_13TeV_mllmin3l");
   thsSignal_grouped_wh3l_fakes_13TeV_mllmin3l->SetTitle("thsSignal_grouped_wh3l_fakes_13TeV_mllmin3l");
   
   TH1F *thsSignal_grouped_wh3l_fakes_13TeV_mllmin3l_stack_8 = new TH1F("thsSignal_grouped_wh3l_fakes_13TeV_mllmin3l_stack_8","thsSignal_grouped_wh3l_fakes_13TeV_mllmin3l",20,10,200);
   thsSignal_grouped_wh3l_fakes_13TeV_mllmin3l_stack_8->SetMinimum(0);
   thsSignal_grouped_wh3l_fakes_13TeV_mllmin3l_stack_8->SetMaximum(0);
   thsSignal_grouped_wh3l_fakes_13TeV_mllmin3l_stack_8->SetDirectory(0);
   thsSignal_grouped_wh3l_fakes_13TeV_mllmin3l_stack_8->SetStats(0);
   thsSignal_grouped_wh3l_fakes_13TeV_mllmin3l_stack_8->SetLineStyle(0);
   thsSignal_grouped_wh3l_fakes_13TeV_mllmin3l_stack_8->SetMarkerStyle(20);
   thsSignal_grouped_wh3l_fakes_13TeV_mllmin3l_stack_8->GetXaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_fakes_13TeV_mllmin3l_stack_8->GetXaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_fakes_13TeV_mllmin3l_stack_8->GetXaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_fakes_13TeV_mllmin3l_stack_8->GetXaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_fakes_13TeV_mllmin3l_stack_8->GetXaxis()->SetTitleOffset(0.9);
   thsSignal_grouped_wh3l_fakes_13TeV_mllmin3l_stack_8->GetXaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_fakes_13TeV_mllmin3l_stack_8->GetYaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_fakes_13TeV_mllmin3l_stack_8->GetYaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_fakes_13TeV_mllmin3l_stack_8->GetYaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_fakes_13TeV_mllmin3l_stack_8->GetYaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_fakes_13TeV_mllmin3l_stack_8->GetYaxis()->SetTitleOffset(1.25);
   thsSignal_grouped_wh3l_fakes_13TeV_mllmin3l_stack_8->GetYaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_fakes_13TeV_mllmin3l_stack_8->GetZaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_fakes_13TeV_mllmin3l_stack_8->GetZaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_fakes_13TeV_mllmin3l_stack_8->GetZaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_fakes_13TeV_mllmin3l_stack_8->GetZaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_fakes_13TeV_mllmin3l_stack_8->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_fakes_13TeV_mllmin3l->SetHistogram(thsSignal_grouped_wh3l_fakes_13TeV_mllmin3l_stack_8);
   
   
   TH1D *new_histo_group_Higgs_wh3l_fakes_13TeV_mllmin3l35 = new TH1D("new_histo_group_Higgs_wh3l_fakes_13TeV_mllmin3l35","histo_H_htt",20,10,200);
   new_histo_group_Higgs_wh3l_fakes_13TeV_mllmin3l35->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_fakes_13TeV_mllmin3l35->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_fakes_13TeV_mllmin3l35->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_fakes_13TeV_mllmin3l35->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_fakes_13TeV_mllmin3l35->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_fakes_13TeV_mllmin3l35->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_fakes_13TeV_mllmin3l35->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_fakes_13TeV_mllmin3l35->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_fakes_13TeV_mllmin3l35->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_fakes_13TeV_mllmin3l35->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_fakes_13TeV_mllmin3l35->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_fakes_13TeV_mllmin3l35->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_fakes_13TeV_mllmin3l35->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_fakes_13TeV_mllmin3l35->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_fakes_13TeV_mllmin3l35->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_fakes_13TeV_mllmin3l->Add(new_histo_group_Higgs_wh3l_fakes_13TeV_mllmin3l,"");
   thsSignal_grouped_wh3l_fakes_13TeV_mllmin3l->Draw("hist same noclear");
   
   Double_t _fx3007[20] = {
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
   Double_t _fy3007[20] = {
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
   Double_t _felx3007[20] = {
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
   Double_t _fely3007[20] = {
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
   Double_t _fehx3007[20] = {
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
   Double_t _fehy3007[20] = {
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
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(20,_fx3007,_fy3007,_felx3007,_fehx3007,_fely3007,_fehy3007);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(12);
   grae->SetFillStyle(3004);
   grae->SetLineColor(12);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3007 = new TH1F("Graph_Graph3007","",100,0,219);
   Graph_Graph3007->SetMinimum(0);
   Graph_Graph3007->SetMaximum(1.1);
   Graph_Graph3007->SetDirectory(0);
   Graph_Graph3007->SetStats(0);
   Graph_Graph3007->SetLineStyle(0);
   Graph_Graph3007->SetMarkerStyle(20);
   Graph_Graph3007->GetXaxis()->SetLabelFont(42);
   Graph_Graph3007->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3007->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3007->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3007->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3007->GetXaxis()->SetTitleFont(42);
   Graph_Graph3007->GetYaxis()->SetLabelFont(42);
   Graph_Graph3007->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3007->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3007->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3007->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3007->GetYaxis()->SetTitleFont(42);
   Graph_Graph3007->GetZaxis()->SetLabelFont(42);
   Graph_Graph3007->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3007->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3007->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3007->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3007);
   
   grae->Draw("2");
   
   Double_t _fx3008[20] = {
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
   Double_t _fy3008[20] = {
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
   Double_t _felx3008[20] = {
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
   Double_t _fely3008[20] = {
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
   Double_t _fehx3008[20] = {
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
   Double_t _fehy3008[20] = {
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
   grae = new TGraphAsymmErrors(20,_fx3008,_fy3008,_felx3008,_fehx3008,_fely3008,_fehy3008);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(1);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3008 = new TH1F("Graph_Graph3008","",100,0,219);
   Graph_Graph3008->SetMinimum(0);
   Graph_Graph3008->SetMaximum(1.262698);
   Graph_Graph3008->SetDirectory(0);
   Graph_Graph3008->SetStats(0);
   Graph_Graph3008->SetLineStyle(0);
   Graph_Graph3008->SetMarkerStyle(20);
   Graph_Graph3008->GetXaxis()->SetLabelFont(42);
   Graph_Graph3008->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3008->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3008->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3008->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3008->GetXaxis()->SetTitleFont(42);
   Graph_Graph3008->GetYaxis()->SetLabelFont(42);
   Graph_Graph3008->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3008->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3008->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3008->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3008->GetYaxis()->SetTitleFont(42);
   Graph_Graph3008->GetZaxis()->SetLabelFont(42);
   Graph_Graph3008->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3008->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3008->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3008->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3008);
   
   grae->Draw("p0");
   
   TLegend *leg = new TLegend(0.2,0.7,0.8,0.9,NULL,"brNDC");
   leg->SetTextFont(62);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("new_histo_group_Fake_wh3l_fakes_13TeV_mllmin3l","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_fakes_13TeV_mllmin3l","WW","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_fakes_13TeV_mllmin3l","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_fakes_13TeV_mllmin3l","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_fakes_13TeV_mllmin3l","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_fakes_13TeV_mllmin3l","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_fakes_13TeV_mllmin3l","Data","EPL");
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
   entry=leg->AddEntry("new_histo_group_Fake_wh3l_fakes_13TeV_mllmin3l","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_fakes_13TeV_mllmin3l","WW","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_fakes_13TeV_mllmin3l","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_fakes_13TeV_mllmin3l","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_fakes_13TeV_mllmin3l","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_fakes_13TeV_mllmin3l","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_fakes_13TeV_mllmin3l","Data","EPL");
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
   
   TH1F *hframe_copy36 = new TH1F("hframe_copy36","",1000,10,200);
   hframe_copy36->SetMinimum(0);
   hframe_copy36->SetMaximum(0);
   hframe_copy36->SetDirectory(0);
   hframe_copy36->SetStats(0);
   hframe_copy36->SetLineStyle(0);
   hframe_copy36->SetMarkerStyle(20);
   hframe_copy36->GetXaxis()->SetTitle("min m_{ll} [GeV]");
   hframe_copy36->GetXaxis()->SetNdivisions(506);
   hframe_copy36->GetXaxis()->SetLabelFont(42);
   hframe_copy36->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy36->GetXaxis()->SetLabelSize(0.05);
   hframe_copy36->GetXaxis()->SetTitleSize(0.06);
   hframe_copy36->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy36->GetXaxis()->SetTitleFont(42);
   hframe_copy36->GetYaxis()->SetTitle("Events");
   hframe_copy36->GetYaxis()->SetLabelFont(42);
   hframe_copy36->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy36->GetYaxis()->SetLabelSize(0.05);
   hframe_copy36->GetYaxis()->SetTitleSize(0.06);
   hframe_copy36->GetYaxis()->SetTitleOffset(1.25);
   hframe_copy36->GetYaxis()->SetTitleFont(42);
   hframe_copy36->GetZaxis()->SetLabelFont(42);
   hframe_copy36->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy36->GetZaxis()->SetLabelSize(0.05);
   hframe_copy36->GetZaxis()->SetTitleSize(0.06);
   hframe_copy36->GetZaxis()->SetTitleFont(42);
   hframe_copy36->Draw("sameaxis");
   ccwh3l_fakes_13TeV_mllmin3l->Modified();
   ccwh3l_fakes_13TeV_mllmin3l->cd();
   ccwh3l_fakes_13TeV_mllmin3l->SetSelected(ccwh3l_fakes_13TeV_mllmin3l);
}
