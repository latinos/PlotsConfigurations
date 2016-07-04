void c_wh3l_fakes_13TeV_pt2()
{
//=========Macro generated from canvas: ccwh3l_fakes_13TeV_pt2/cc
//=========  (Sat Jul  2 19:44:34 2016) by ROOT version6.02/13
   TCanvas *ccwh3l_fakes_13TeV_pt2 = new TCanvas("ccwh3l_fakes_13TeV_pt2", "cc",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   ccwh3l_fakes_13TeV_pt2->SetHighLightColor(2);
   ccwh3l_fakes_13TeV_pt2->Range(-28,-0.1585366,209.5,1.060976);
   ccwh3l_fakes_13TeV_pt2->SetFillColor(0);
   ccwh3l_fakes_13TeV_pt2->SetBorderMode(0);
   ccwh3l_fakes_13TeV_pt2->SetBorderSize(2);
   ccwh3l_fakes_13TeV_pt2->SetTickx(1);
   ccwh3l_fakes_13TeV_pt2->SetTicky(1);
   ccwh3l_fakes_13TeV_pt2->SetLeftMargin(0.16);
   ccwh3l_fakes_13TeV_pt2->SetRightMargin(0.04);
   ccwh3l_fakes_13TeV_pt2->SetTopMargin(0.05);
   ccwh3l_fakes_13TeV_pt2->SetBottomMargin(0.13);
   ccwh3l_fakes_13TeV_pt2->SetFrameFillStyle(0);
   ccwh3l_fakes_13TeV_pt2->SetFrameBorderMode(0);
   ccwh3l_fakes_13TeV_pt2->SetFrameFillStyle(0);
   ccwh3l_fakes_13TeV_pt2->SetFrameBorderMode(0);
   
   TH1F *hframe64 = new TH1F("hframe64","",1000,10,200);
   hframe64->SetMinimum(0);
   hframe64->SetMaximum(0);
   hframe64->SetDirectory(0);
   hframe64->SetStats(0);
   hframe64->SetLineStyle(0);
   hframe64->SetMarkerStyle(20);
   hframe64->GetXaxis()->SetTitle("lept2_p_{T} [GeV]");
   hframe64->GetXaxis()->SetNdivisions(506);
   hframe64->GetXaxis()->SetLabelFont(42);
   hframe64->GetXaxis()->SetLabelOffset(0.007);
   hframe64->GetXaxis()->SetLabelSize(0.05);
   hframe64->GetXaxis()->SetTitleSize(0.06);
   hframe64->GetXaxis()->SetTitleOffset(0.9);
   hframe64->GetXaxis()->SetTitleFont(42);
   hframe64->GetYaxis()->SetTitle("Events");
   hframe64->GetYaxis()->SetLabelFont(42);
   hframe64->GetYaxis()->SetLabelOffset(0.007);
   hframe64->GetYaxis()->SetLabelSize(0.05);
   hframe64->GetYaxis()->SetTitleSize(0.06);
   hframe64->GetYaxis()->SetTitleOffset(1.25);
   hframe64->GetYaxis()->SetTitleFont(42);
   hframe64->GetZaxis()->SetLabelFont(42);
   hframe64->GetZaxis()->SetLabelOffset(0.007);
   hframe64->GetZaxis()->SetLabelSize(0.05);
   hframe64->GetZaxis()->SetTitleSize(0.06);
   hframe64->GetZaxis()->SetTitleFont(42);
   hframe64->Draw(" ");
   
   THStack *thsBackground_grouped_wh3l_fakes_13TeV_pt2 = new THStack();
   thsBackground_grouped_wh3l_fakes_13TeV_pt2->SetName("thsBackground_grouped_wh3l_fakes_13TeV_pt2");
   thsBackground_grouped_wh3l_fakes_13TeV_pt2->SetTitle("thsBackground_grouped_wh3l_fakes_13TeV_pt2");
   
   TH1F *thsBackground_grouped_wh3l_fakes_13TeV_pt2_stack_15 = new TH1F("thsBackground_grouped_wh3l_fakes_13TeV_pt2_stack_15","thsBackground_grouped_wh3l_fakes_13TeV_pt2",25,10,200);
   thsBackground_grouped_wh3l_fakes_13TeV_pt2_stack_15->SetMinimum(0);
   thsBackground_grouped_wh3l_fakes_13TeV_pt2_stack_15->SetMaximum(0);
   thsBackground_grouped_wh3l_fakes_13TeV_pt2_stack_15->SetDirectory(0);
   thsBackground_grouped_wh3l_fakes_13TeV_pt2_stack_15->SetStats(0);
   thsBackground_grouped_wh3l_fakes_13TeV_pt2_stack_15->SetLineStyle(0);
   thsBackground_grouped_wh3l_fakes_13TeV_pt2_stack_15->SetMarkerStyle(20);
   thsBackground_grouped_wh3l_fakes_13TeV_pt2_stack_15->GetXaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_fakes_13TeV_pt2_stack_15->GetXaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_fakes_13TeV_pt2_stack_15->GetXaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_fakes_13TeV_pt2_stack_15->GetXaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_fakes_13TeV_pt2_stack_15->GetXaxis()->SetTitleOffset(0.9);
   thsBackground_grouped_wh3l_fakes_13TeV_pt2_stack_15->GetXaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_fakes_13TeV_pt2_stack_15->GetYaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_fakes_13TeV_pt2_stack_15->GetYaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_fakes_13TeV_pt2_stack_15->GetYaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_fakes_13TeV_pt2_stack_15->GetYaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_fakes_13TeV_pt2_stack_15->GetYaxis()->SetTitleOffset(1.25);
   thsBackground_grouped_wh3l_fakes_13TeV_pt2_stack_15->GetYaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_fakes_13TeV_pt2_stack_15->GetZaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_fakes_13TeV_pt2_stack_15->GetZaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_fakes_13TeV_pt2_stack_15->GetZaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_fakes_13TeV_pt2_stack_15->GetZaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_fakes_13TeV_pt2_stack_15->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_fakes_13TeV_pt2->SetHistogram(thsBackground_grouped_wh3l_fakes_13TeV_pt2_stack_15);
   
   
   TH1D *new_histo_group_Fake_wh3l_fakes_13TeV_pt265 = new TH1D("new_histo_group_Fake_wh3l_fakes_13TeV_pt265","histo_Fake",25,10,200);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_fakes_13TeV_pt265->SetFillColor(ci);
   new_histo_group_Fake_wh3l_fakes_13TeV_pt265->SetFillStyle(3001);

   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_fakes_13TeV_pt265->SetLineColor(ci);
   new_histo_group_Fake_wh3l_fakes_13TeV_pt265->GetXaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_fakes_13TeV_pt265->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_fakes_13TeV_pt265->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_fakes_13TeV_pt265->GetXaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_fakes_13TeV_pt265->GetYaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_fakes_13TeV_pt265->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_fakes_13TeV_pt265->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_fakes_13TeV_pt265->GetYaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_fakes_13TeV_pt265->GetZaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_fakes_13TeV_pt265->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_fakes_13TeV_pt265->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_fakes_13TeV_pt265->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_fakes_13TeV_pt2->Add(new_histo_group_Fake_wh3l_fakes_13TeV_pt2,"");
   
   TH1D *new_histo_group_WW_wh3l_fakes_13TeV_pt266 = new TH1D("new_histo_group_WW_wh3l_fakes_13TeV_pt266","histo_WW",25,10,200);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_fakes_13TeV_pt266->SetFillColor(ci);
   new_histo_group_WW_wh3l_fakes_13TeV_pt266->SetFillStyle(3001);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_fakes_13TeV_pt266->SetLineColor(ci);
   new_histo_group_WW_wh3l_fakes_13TeV_pt266->GetXaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_fakes_13TeV_pt266->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_fakes_13TeV_pt266->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_fakes_13TeV_pt266->GetXaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_fakes_13TeV_pt266->GetYaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_fakes_13TeV_pt266->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_fakes_13TeV_pt266->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_fakes_13TeV_pt266->GetYaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_fakes_13TeV_pt266->GetZaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_fakes_13TeV_pt266->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_fakes_13TeV_pt266->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_fakes_13TeV_pt266->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_fakes_13TeV_pt2->Add(new_histo_group_WW_wh3l_fakes_13TeV_pt2,"");
   
   TH1D *new_histo_group_Vg_wh3l_fakes_13TeV_pt267 = new TH1D("new_histo_group_Vg_wh3l_fakes_13TeV_pt267","histo_Vg",25,10,200);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_fakes_13TeV_pt267->SetFillColor(ci);
   new_histo_group_Vg_wh3l_fakes_13TeV_pt267->SetFillStyle(3001);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_fakes_13TeV_pt267->SetLineColor(ci);
   new_histo_group_Vg_wh3l_fakes_13TeV_pt267->GetXaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_fakes_13TeV_pt267->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_fakes_13TeV_pt267->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_fakes_13TeV_pt267->GetXaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_fakes_13TeV_pt267->GetYaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_fakes_13TeV_pt267->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_fakes_13TeV_pt267->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_fakes_13TeV_pt267->GetYaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_fakes_13TeV_pt267->GetZaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_fakes_13TeV_pt267->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_fakes_13TeV_pt267->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_fakes_13TeV_pt267->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_fakes_13TeV_pt2->Add(new_histo_group_Vg_wh3l_fakes_13TeV_pt2,"");
   
   TH1D *new_histo_group_ZZ_wh3l_fakes_13TeV_pt268 = new TH1D("new_histo_group_ZZ_wh3l_fakes_13TeV_pt268","histo_ZZ",25,10,200);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_fakes_13TeV_pt268->SetFillColor(ci);
   new_histo_group_ZZ_wh3l_fakes_13TeV_pt268->SetFillStyle(3001);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_fakes_13TeV_pt268->SetLineColor(ci);
   new_histo_group_ZZ_wh3l_fakes_13TeV_pt268->GetXaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_fakes_13TeV_pt268->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_fakes_13TeV_pt268->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_fakes_13TeV_pt268->GetXaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_fakes_13TeV_pt268->GetYaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_fakes_13TeV_pt268->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_fakes_13TeV_pt268->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_fakes_13TeV_pt268->GetYaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_fakes_13TeV_pt268->GetZaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_fakes_13TeV_pt268->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_fakes_13TeV_pt268->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_fakes_13TeV_pt268->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_fakes_13TeV_pt2->Add(new_histo_group_ZZ_wh3l_fakes_13TeV_pt2,"");
   
   TH1D *new_histo_group_WZ_wh3l_fakes_13TeV_pt269 = new TH1D("new_histo_group_WZ_wh3l_fakes_13TeV_pt269","histo_WZ",25,10,200);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_fakes_13TeV_pt269->SetFillColor(ci);
   new_histo_group_WZ_wh3l_fakes_13TeV_pt269->SetFillStyle(3001);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_fakes_13TeV_pt269->SetLineColor(ci);
   new_histo_group_WZ_wh3l_fakes_13TeV_pt269->GetXaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_fakes_13TeV_pt269->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_fakes_13TeV_pt269->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_fakes_13TeV_pt269->GetXaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_fakes_13TeV_pt269->GetYaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_fakes_13TeV_pt269->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_fakes_13TeV_pt269->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_fakes_13TeV_pt269->GetYaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_fakes_13TeV_pt269->GetZaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_fakes_13TeV_pt269->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_fakes_13TeV_pt269->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_fakes_13TeV_pt269->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_fakes_13TeV_pt2->Add(new_histo_group_WZ_wh3l_fakes_13TeV_pt2,"");
   
   TH1D *new_histo_group_Higgs_wh3l_fakes_13TeV_pt270 = new TH1D("new_histo_group_Higgs_wh3l_fakes_13TeV_pt270","histo_H_htt",25,10,200);
   new_histo_group_Higgs_wh3l_fakes_13TeV_pt270->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_fakes_13TeV_pt270->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_fakes_13TeV_pt270->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_fakes_13TeV_pt270->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_fakes_13TeV_pt270->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_fakes_13TeV_pt270->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_fakes_13TeV_pt270->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_fakes_13TeV_pt270->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_fakes_13TeV_pt270->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_fakes_13TeV_pt270->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_fakes_13TeV_pt270->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_fakes_13TeV_pt270->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_fakes_13TeV_pt270->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_fakes_13TeV_pt270->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_fakes_13TeV_pt270->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_fakes_13TeV_pt2->Add(new_histo_group_Higgs_wh3l_fakes_13TeV_pt2,"");
   thsBackground_grouped_wh3l_fakes_13TeV_pt2->Draw("hist same");
   
   thsSignal_grouped_wh3l_fakes_13TeV_pt2 = new THStack();
   thsSignal_grouped_wh3l_fakes_13TeV_pt2->SetName("thsSignal_grouped_wh3l_fakes_13TeV_pt2");
   thsSignal_grouped_wh3l_fakes_13TeV_pt2->SetTitle("thsSignal_grouped_wh3l_fakes_13TeV_pt2");
   
   TH1F *thsSignal_grouped_wh3l_fakes_13TeV_pt2_stack_16 = new TH1F("thsSignal_grouped_wh3l_fakes_13TeV_pt2_stack_16","thsSignal_grouped_wh3l_fakes_13TeV_pt2",25,10,200);
   thsSignal_grouped_wh3l_fakes_13TeV_pt2_stack_16->SetMinimum(0);
   thsSignal_grouped_wh3l_fakes_13TeV_pt2_stack_16->SetMaximum(0);
   thsSignal_grouped_wh3l_fakes_13TeV_pt2_stack_16->SetDirectory(0);
   thsSignal_grouped_wh3l_fakes_13TeV_pt2_stack_16->SetStats(0);
   thsSignal_grouped_wh3l_fakes_13TeV_pt2_stack_16->SetLineStyle(0);
   thsSignal_grouped_wh3l_fakes_13TeV_pt2_stack_16->SetMarkerStyle(20);
   thsSignal_grouped_wh3l_fakes_13TeV_pt2_stack_16->GetXaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_fakes_13TeV_pt2_stack_16->GetXaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_fakes_13TeV_pt2_stack_16->GetXaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_fakes_13TeV_pt2_stack_16->GetXaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_fakes_13TeV_pt2_stack_16->GetXaxis()->SetTitleOffset(0.9);
   thsSignal_grouped_wh3l_fakes_13TeV_pt2_stack_16->GetXaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_fakes_13TeV_pt2_stack_16->GetYaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_fakes_13TeV_pt2_stack_16->GetYaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_fakes_13TeV_pt2_stack_16->GetYaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_fakes_13TeV_pt2_stack_16->GetYaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_fakes_13TeV_pt2_stack_16->GetYaxis()->SetTitleOffset(1.25);
   thsSignal_grouped_wh3l_fakes_13TeV_pt2_stack_16->GetYaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_fakes_13TeV_pt2_stack_16->GetZaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_fakes_13TeV_pt2_stack_16->GetZaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_fakes_13TeV_pt2_stack_16->GetZaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_fakes_13TeV_pt2_stack_16->GetZaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_fakes_13TeV_pt2_stack_16->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_fakes_13TeV_pt2->SetHistogram(thsSignal_grouped_wh3l_fakes_13TeV_pt2_stack_16);
   
   
   TH1D *new_histo_group_Higgs_wh3l_fakes_13TeV_pt271 = new TH1D("new_histo_group_Higgs_wh3l_fakes_13TeV_pt271","histo_H_htt",25,10,200);
   new_histo_group_Higgs_wh3l_fakes_13TeV_pt271->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_fakes_13TeV_pt271->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_fakes_13TeV_pt271->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_fakes_13TeV_pt271->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_fakes_13TeV_pt271->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_fakes_13TeV_pt271->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_fakes_13TeV_pt271->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_fakes_13TeV_pt271->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_fakes_13TeV_pt271->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_fakes_13TeV_pt271->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_fakes_13TeV_pt271->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_fakes_13TeV_pt271->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_fakes_13TeV_pt271->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_fakes_13TeV_pt271->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_fakes_13TeV_pt271->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_fakes_13TeV_pt2->Add(new_histo_group_Higgs_wh3l_fakes_13TeV_pt2,"");
   thsSignal_grouped_wh3l_fakes_13TeV_pt2->Draw("hist same noclear");
   
   Double_t _fx3015[25] = {
   13.8,
   21.4,
   29,
   36.6,
   44.2,
   51.8,
   59.4,
   67,
   74.6,
   82.2,
   89.8,
   97.4,
   105,
   112.6,
   120.2,
   127.8,
   135.4,
   143,
   150.6,
   158.2,
   165.8,
   173.4,
   181,
   188.6,
   196.2};
   Double_t _fy3015[25] = {
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
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _felx3015[25] = {
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8};
   Double_t _fely3015[25] = {
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
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fehx3015[25] = {
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8};
   Double_t _fehy3015[25] = {
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
   0,
   0,
   0,
   0,
   0,
   0};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(25,_fx3015,_fy3015,_felx3015,_fehx3015,_fely3015,_fehy3015);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(12);
   grae->SetFillStyle(3004);
   grae->SetLineColor(12);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3015 = new TH1F("Graph_Graph3015","",100,0,219);
   Graph_Graph3015->SetMinimum(0);
   Graph_Graph3015->SetMaximum(1.1);
   Graph_Graph3015->SetDirectory(0);
   Graph_Graph3015->SetStats(0);
   Graph_Graph3015->SetLineStyle(0);
   Graph_Graph3015->SetMarkerStyle(20);
   Graph_Graph3015->GetXaxis()->SetLabelFont(42);
   Graph_Graph3015->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3015->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3015->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3015->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3015->GetXaxis()->SetTitleFont(42);
   Graph_Graph3015->GetYaxis()->SetLabelFont(42);
   Graph_Graph3015->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3015->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3015->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3015->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3015->GetYaxis()->SetTitleFont(42);
   Graph_Graph3015->GetZaxis()->SetLabelFont(42);
   Graph_Graph3015->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3015->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3015->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3015->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3015);
   
   grae->Draw("2");
   
   Double_t _fx3016[25] = {
   13.8,
   21.4,
   29,
   36.6,
   44.2,
   51.8,
   59.4,
   67,
   74.6,
   82.2,
   89.8,
   97.4,
   105,
   112.6,
   120.2,
   127.8,
   135.4,
   143,
   150.6,
   158.2,
   165.8,
   173.4,
   181,
   188.6,
   196.2};
   Double_t _fy3016[25] = {
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
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _felx3016[25] = {
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8};
   Double_t _fely3016[25] = {
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
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fehx3016[25] = {
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8};
   Double_t _fehy3016[25] = {
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
   1.147908,
   1.147908,
   1.147908,
   1.147908,
   1.147908,
   1.147908};
   grae = new TGraphAsymmErrors(25,_fx3016,_fy3016,_felx3016,_fehx3016,_fely3016,_fehy3016);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(1);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3016 = new TH1F("Graph_Graph3016","",100,0,219);
   Graph_Graph3016->SetMinimum(0);
   Graph_Graph3016->SetMaximum(1.262698);
   Graph_Graph3016->SetDirectory(0);
   Graph_Graph3016->SetStats(0);
   Graph_Graph3016->SetLineStyle(0);
   Graph_Graph3016->SetMarkerStyle(20);
   Graph_Graph3016->GetXaxis()->SetLabelFont(42);
   Graph_Graph3016->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3016->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3016->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3016->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3016->GetXaxis()->SetTitleFont(42);
   Graph_Graph3016->GetYaxis()->SetLabelFont(42);
   Graph_Graph3016->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3016->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3016->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3016->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3016->GetYaxis()->SetTitleFont(42);
   Graph_Graph3016->GetZaxis()->SetLabelFont(42);
   Graph_Graph3016->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3016->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3016->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3016->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3016);
   
   grae->Draw("p0");
   
   TLegend *leg = new TLegend(0.2,0.7,0.8,0.9,NULL,"brNDC");
   leg->SetTextFont(62);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("new_histo_group_Fake_wh3l_fakes_13TeV_pt2","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_fakes_13TeV_pt2","WW","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_fakes_13TeV_pt2","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_fakes_13TeV_pt2","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_fakes_13TeV_pt2","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_fakes_13TeV_pt2","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_fakes_13TeV_pt2","Data","EPL");
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
   entry=leg->AddEntry("new_histo_group_Fake_wh3l_fakes_13TeV_pt2","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_fakes_13TeV_pt2","WW","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_fakes_13TeV_pt2","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_fakes_13TeV_pt2","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_fakes_13TeV_pt2","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_fakes_13TeV_pt2","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_fakes_13TeV_pt2","Data","EPL");
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
   
   TH1F *hframe_copy72 = new TH1F("hframe_copy72","",1000,10,200);
   hframe_copy72->SetMinimum(0);
   hframe_copy72->SetMaximum(0);
   hframe_copy72->SetDirectory(0);
   hframe_copy72->SetStats(0);
   hframe_copy72->SetLineStyle(0);
   hframe_copy72->SetMarkerStyle(20);
   hframe_copy72->GetXaxis()->SetTitle("lept2_p_{T} [GeV]");
   hframe_copy72->GetXaxis()->SetNdivisions(506);
   hframe_copy72->GetXaxis()->SetLabelFont(42);
   hframe_copy72->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy72->GetXaxis()->SetLabelSize(0.05);
   hframe_copy72->GetXaxis()->SetTitleSize(0.06);
   hframe_copy72->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy72->GetXaxis()->SetTitleFont(42);
   hframe_copy72->GetYaxis()->SetTitle("Events");
   hframe_copy72->GetYaxis()->SetLabelFont(42);
   hframe_copy72->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy72->GetYaxis()->SetLabelSize(0.05);
   hframe_copy72->GetYaxis()->SetTitleSize(0.06);
   hframe_copy72->GetYaxis()->SetTitleOffset(1.25);
   hframe_copy72->GetYaxis()->SetTitleFont(42);
   hframe_copy72->GetZaxis()->SetLabelFont(42);
   hframe_copy72->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy72->GetZaxis()->SetLabelSize(0.05);
   hframe_copy72->GetZaxis()->SetTitleSize(0.06);
   hframe_copy72->GetZaxis()->SetTitleFont(42);
   hframe_copy72->Draw("sameaxis");
   ccwh3l_fakes_13TeV_pt2->Modified();
   ccwh3l_fakes_13TeV_pt2->cd();
   ccwh3l_fakes_13TeV_pt2->SetSelected(ccwh3l_fakes_13TeV_pt2);
}
