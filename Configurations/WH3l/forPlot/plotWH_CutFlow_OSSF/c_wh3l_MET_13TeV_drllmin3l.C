void c_wh3l_MET_13TeV_drllmin3l()
{
//=========Macro generated from canvas: ccwh3l_MET_13TeV_drllmin3l/cc
//=========  (Sat Jul  2 21:43:37 2016) by ROOT version6.02/13
   TCanvas *ccwh3l_MET_13TeV_drllmin3l = new TCanvas("ccwh3l_MET_13TeV_drllmin3l", "cc",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   ccwh3l_MET_13TeV_drllmin3l->SetHighLightColor(2);
   ccwh3l_MET_13TeV_drllmin3l->Range(-1.2,-0.1585366,6.3,1.060976);
   ccwh3l_MET_13TeV_drllmin3l->SetFillColor(0);
   ccwh3l_MET_13TeV_drllmin3l->SetBorderMode(0);
   ccwh3l_MET_13TeV_drllmin3l->SetBorderSize(2);
   ccwh3l_MET_13TeV_drllmin3l->SetTickx(1);
   ccwh3l_MET_13TeV_drllmin3l->SetTicky(1);
   ccwh3l_MET_13TeV_drllmin3l->SetLeftMargin(0.16);
   ccwh3l_MET_13TeV_drllmin3l->SetRightMargin(0.04);
   ccwh3l_MET_13TeV_drllmin3l->SetTopMargin(0.05);
   ccwh3l_MET_13TeV_drllmin3l->SetBottomMargin(0.13);
   ccwh3l_MET_13TeV_drllmin3l->SetFrameFillStyle(0);
   ccwh3l_MET_13TeV_drllmin3l->SetFrameBorderMode(0);
   ccwh3l_MET_13TeV_drllmin3l->SetFrameFillStyle(0);
   ccwh3l_MET_13TeV_drllmin3l->SetFrameBorderMode(0);
   
   TH1F *hframe201 = new TH1F("hframe201","",1000,0,6);
   hframe201->SetMinimum(0);
   hframe201->SetMaximum(0);
   hframe201->SetDirectory(0);
   hframe201->SetStats(0);
   hframe201->SetLineStyle(0);
   hframe201->SetMarkerStyle(20);
   hframe201->GetXaxis()->SetTitle("min #Delta Rm_{ll} [GeV]");
   hframe201->GetXaxis()->SetNdivisions(506);
   hframe201->GetXaxis()->SetLabelFont(42);
   hframe201->GetXaxis()->SetLabelOffset(0.007);
   hframe201->GetXaxis()->SetLabelSize(0.05);
   hframe201->GetXaxis()->SetTitleSize(0.06);
   hframe201->GetXaxis()->SetTitleOffset(0.9);
   hframe201->GetXaxis()->SetTitleFont(42);
   hframe201->GetYaxis()->SetTitle("Events");
   hframe201->GetYaxis()->SetLabelFont(42);
   hframe201->GetYaxis()->SetLabelOffset(0.007);
   hframe201->GetYaxis()->SetLabelSize(0.05);
   hframe201->GetYaxis()->SetTitleSize(0.06);
   hframe201->GetYaxis()->SetTitleOffset(1.25);
   hframe201->GetYaxis()->SetTitleFont(42);
   hframe201->GetZaxis()->SetLabelFont(42);
   hframe201->GetZaxis()->SetLabelOffset(0.007);
   hframe201->GetZaxis()->SetLabelSize(0.05);
   hframe201->GetZaxis()->SetTitleSize(0.06);
   hframe201->GetZaxis()->SetTitleFont(42);
   hframe201->Draw(" ");
   
   THStack *thsBackground_grouped_wh3l_MET_13TeV_drllmin3l = new THStack();
   thsBackground_grouped_wh3l_MET_13TeV_drllmin3l->SetName("thsBackground_grouped_wh3l_MET_13TeV_drllmin3l");
   thsBackground_grouped_wh3l_MET_13TeV_drllmin3l->SetTitle("thsBackground_grouped_wh3l_MET_13TeV_drllmin3l");
   
   TH1F *thsBackground_grouped_wh3l_MET_13TeV_drllmin3l_stack_41 = new TH1F("thsBackground_grouped_wh3l_MET_13TeV_drllmin3l_stack_41","thsBackground_grouped_wh3l_MET_13TeV_drllmin3l",5,0,6);
   thsBackground_grouped_wh3l_MET_13TeV_drllmin3l_stack_41->SetMinimum(0);
   thsBackground_grouped_wh3l_MET_13TeV_drllmin3l_stack_41->SetMaximum(0);
   thsBackground_grouped_wh3l_MET_13TeV_drllmin3l_stack_41->SetDirectory(0);
   thsBackground_grouped_wh3l_MET_13TeV_drllmin3l_stack_41->SetStats(0);
   thsBackground_grouped_wh3l_MET_13TeV_drllmin3l_stack_41->SetLineStyle(0);
   thsBackground_grouped_wh3l_MET_13TeV_drllmin3l_stack_41->SetMarkerStyle(20);
   thsBackground_grouped_wh3l_MET_13TeV_drllmin3l_stack_41->GetXaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_MET_13TeV_drllmin3l_stack_41->GetXaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_MET_13TeV_drllmin3l_stack_41->GetXaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_MET_13TeV_drllmin3l_stack_41->GetXaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_MET_13TeV_drllmin3l_stack_41->GetXaxis()->SetTitleOffset(0.9);
   thsBackground_grouped_wh3l_MET_13TeV_drllmin3l_stack_41->GetXaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_13TeV_drllmin3l_stack_41->GetYaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_MET_13TeV_drllmin3l_stack_41->GetYaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_MET_13TeV_drllmin3l_stack_41->GetYaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_MET_13TeV_drllmin3l_stack_41->GetYaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_MET_13TeV_drllmin3l_stack_41->GetYaxis()->SetTitleOffset(1.25);
   thsBackground_grouped_wh3l_MET_13TeV_drllmin3l_stack_41->GetYaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_13TeV_drllmin3l_stack_41->GetZaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_MET_13TeV_drllmin3l_stack_41->GetZaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_MET_13TeV_drllmin3l_stack_41->GetZaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_MET_13TeV_drllmin3l_stack_41->GetZaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_MET_13TeV_drllmin3l_stack_41->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_13TeV_drllmin3l->SetHistogram(thsBackground_grouped_wh3l_MET_13TeV_drllmin3l_stack_41);
   
   
   TH1D *new_histo_group_Fake_wh3l_MET_13TeV_drllmin3l202 = new TH1D("new_histo_group_Fake_wh3l_MET_13TeV_drllmin3l202","histo_Fake",5,0,6);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_MET_13TeV_drllmin3l202->SetFillColor(ci);
   new_histo_group_Fake_wh3l_MET_13TeV_drllmin3l202->SetFillStyle(3001);

   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_MET_13TeV_drllmin3l202->SetLineColor(ci);
   new_histo_group_Fake_wh3l_MET_13TeV_drllmin3l202->GetXaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_MET_13TeV_drllmin3l202->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_MET_13TeV_drllmin3l202->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_MET_13TeV_drllmin3l202->GetXaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_MET_13TeV_drllmin3l202->GetYaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_MET_13TeV_drllmin3l202->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_MET_13TeV_drllmin3l202->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_MET_13TeV_drllmin3l202->GetYaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_MET_13TeV_drllmin3l202->GetZaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_MET_13TeV_drllmin3l202->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_MET_13TeV_drllmin3l202->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_MET_13TeV_drllmin3l202->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_13TeV_drllmin3l->Add(new_histo_group_Fake_wh3l_MET_13TeV_drllmin3l,"");
   
   TH1D *new_histo_group_WW_wh3l_MET_13TeV_drllmin3l203 = new TH1D("new_histo_group_WW_wh3l_MET_13TeV_drllmin3l203","histo_WW",5,0,6);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_MET_13TeV_drllmin3l203->SetFillColor(ci);
   new_histo_group_WW_wh3l_MET_13TeV_drllmin3l203->SetFillStyle(3001);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_MET_13TeV_drllmin3l203->SetLineColor(ci);
   new_histo_group_WW_wh3l_MET_13TeV_drllmin3l203->GetXaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_MET_13TeV_drllmin3l203->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_MET_13TeV_drllmin3l203->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_MET_13TeV_drllmin3l203->GetXaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_MET_13TeV_drllmin3l203->GetYaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_MET_13TeV_drllmin3l203->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_MET_13TeV_drllmin3l203->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_MET_13TeV_drllmin3l203->GetYaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_MET_13TeV_drllmin3l203->GetZaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_MET_13TeV_drllmin3l203->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_MET_13TeV_drllmin3l203->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_MET_13TeV_drllmin3l203->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_13TeV_drllmin3l->Add(new_histo_group_WW_wh3l_MET_13TeV_drllmin3l,"");
   
   TH1D *new_histo_group_VVV_wh3l_MET_13TeV_drllmin3l204 = new TH1D("new_histo_group_VVV_wh3l_MET_13TeV_drllmin3l204","histo_VVV",5,0,6);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_MET_13TeV_drllmin3l204->SetFillColor(ci);
   new_histo_group_VVV_wh3l_MET_13TeV_drllmin3l204->SetFillStyle(3001);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_MET_13TeV_drllmin3l204->SetLineColor(ci);
   new_histo_group_VVV_wh3l_MET_13TeV_drllmin3l204->GetXaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_MET_13TeV_drllmin3l204->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_MET_13TeV_drllmin3l204->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_MET_13TeV_drllmin3l204->GetXaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_MET_13TeV_drllmin3l204->GetYaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_MET_13TeV_drllmin3l204->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_MET_13TeV_drllmin3l204->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_MET_13TeV_drllmin3l204->GetYaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_MET_13TeV_drllmin3l204->GetZaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_MET_13TeV_drllmin3l204->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_MET_13TeV_drllmin3l204->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_MET_13TeV_drllmin3l204->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_13TeV_drllmin3l->Add(new_histo_group_VVV_wh3l_MET_13TeV_drllmin3l,"");
   
   TH1D *new_histo_group_Vg_wh3l_MET_13TeV_drllmin3l205 = new TH1D("new_histo_group_Vg_wh3l_MET_13TeV_drllmin3l205","histo_Vg",5,0,6);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_MET_13TeV_drllmin3l205->SetFillColor(ci);
   new_histo_group_Vg_wh3l_MET_13TeV_drllmin3l205->SetFillStyle(3001);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_MET_13TeV_drllmin3l205->SetLineColor(ci);
   new_histo_group_Vg_wh3l_MET_13TeV_drllmin3l205->GetXaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_MET_13TeV_drllmin3l205->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_MET_13TeV_drllmin3l205->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_MET_13TeV_drllmin3l205->GetXaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_MET_13TeV_drllmin3l205->GetYaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_MET_13TeV_drllmin3l205->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_MET_13TeV_drllmin3l205->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_MET_13TeV_drllmin3l205->GetYaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_MET_13TeV_drllmin3l205->GetZaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_MET_13TeV_drllmin3l205->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_MET_13TeV_drllmin3l205->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_MET_13TeV_drllmin3l205->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_13TeV_drllmin3l->Add(new_histo_group_Vg_wh3l_MET_13TeV_drllmin3l,"");
   
   TH1D *new_histo_group_ZZ_wh3l_MET_13TeV_drllmin3l206 = new TH1D("new_histo_group_ZZ_wh3l_MET_13TeV_drllmin3l206","histo_ZZ",5,0,6);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_MET_13TeV_drllmin3l206->SetFillColor(ci);
   new_histo_group_ZZ_wh3l_MET_13TeV_drllmin3l206->SetFillStyle(3001);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_MET_13TeV_drllmin3l206->SetLineColor(ci);
   new_histo_group_ZZ_wh3l_MET_13TeV_drllmin3l206->GetXaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_MET_13TeV_drllmin3l206->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_MET_13TeV_drllmin3l206->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_MET_13TeV_drllmin3l206->GetXaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_MET_13TeV_drllmin3l206->GetYaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_MET_13TeV_drllmin3l206->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_MET_13TeV_drllmin3l206->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_MET_13TeV_drllmin3l206->GetYaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_MET_13TeV_drllmin3l206->GetZaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_MET_13TeV_drllmin3l206->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_MET_13TeV_drllmin3l206->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_MET_13TeV_drllmin3l206->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_13TeV_drllmin3l->Add(new_histo_group_ZZ_wh3l_MET_13TeV_drllmin3l,"");
   
   TH1D *new_histo_group_WZ_wh3l_MET_13TeV_drllmin3l207 = new TH1D("new_histo_group_WZ_wh3l_MET_13TeV_drllmin3l207","histo_WZ",5,0,6);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_MET_13TeV_drllmin3l207->SetFillColor(ci);
   new_histo_group_WZ_wh3l_MET_13TeV_drllmin3l207->SetFillStyle(3001);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_MET_13TeV_drllmin3l207->SetLineColor(ci);
   new_histo_group_WZ_wh3l_MET_13TeV_drllmin3l207->GetXaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_MET_13TeV_drllmin3l207->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_MET_13TeV_drllmin3l207->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_MET_13TeV_drllmin3l207->GetXaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_MET_13TeV_drllmin3l207->GetYaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_MET_13TeV_drllmin3l207->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_MET_13TeV_drllmin3l207->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_MET_13TeV_drllmin3l207->GetYaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_MET_13TeV_drllmin3l207->GetZaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_MET_13TeV_drllmin3l207->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_MET_13TeV_drllmin3l207->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_MET_13TeV_drllmin3l207->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_13TeV_drllmin3l->Add(new_histo_group_WZ_wh3l_MET_13TeV_drllmin3l,"");
   
   TH1D *new_histo_group_Higgs_wh3l_MET_13TeV_drllmin3l208 = new TH1D("new_histo_group_Higgs_wh3l_MET_13TeV_drllmin3l208","histo_H_htt",5,0,6);
   new_histo_group_Higgs_wh3l_MET_13TeV_drllmin3l208->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_MET_13TeV_drllmin3l208->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_MET_13TeV_drllmin3l208->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_MET_13TeV_drllmin3l208->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_13TeV_drllmin3l208->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_13TeV_drllmin3l208->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_13TeV_drllmin3l208->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_MET_13TeV_drllmin3l208->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_13TeV_drllmin3l208->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_13TeV_drllmin3l208->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_13TeV_drllmin3l208->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_MET_13TeV_drllmin3l208->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_13TeV_drllmin3l208->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_13TeV_drllmin3l208->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_13TeV_drllmin3l208->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_13TeV_drllmin3l->Add(new_histo_group_Higgs_wh3l_MET_13TeV_drllmin3l,"");
   thsBackground_grouped_wh3l_MET_13TeV_drllmin3l->Draw("hist same");
   
   thsSignal_grouped_wh3l_MET_13TeV_drllmin3l = new THStack();
   thsSignal_grouped_wh3l_MET_13TeV_drllmin3l->SetName("thsSignal_grouped_wh3l_MET_13TeV_drllmin3l");
   thsSignal_grouped_wh3l_MET_13TeV_drllmin3l->SetTitle("thsSignal_grouped_wh3l_MET_13TeV_drllmin3l");
   
   TH1F *thsSignal_grouped_wh3l_MET_13TeV_drllmin3l_stack_42 = new TH1F("thsSignal_grouped_wh3l_MET_13TeV_drllmin3l_stack_42","thsSignal_grouped_wh3l_MET_13TeV_drllmin3l",5,0,6);
   thsSignal_grouped_wh3l_MET_13TeV_drllmin3l_stack_42->SetMinimum(0);
   thsSignal_grouped_wh3l_MET_13TeV_drllmin3l_stack_42->SetMaximum(0);
   thsSignal_grouped_wh3l_MET_13TeV_drllmin3l_stack_42->SetDirectory(0);
   thsSignal_grouped_wh3l_MET_13TeV_drllmin3l_stack_42->SetStats(0);
   thsSignal_grouped_wh3l_MET_13TeV_drllmin3l_stack_42->SetLineStyle(0);
   thsSignal_grouped_wh3l_MET_13TeV_drllmin3l_stack_42->SetMarkerStyle(20);
   thsSignal_grouped_wh3l_MET_13TeV_drllmin3l_stack_42->GetXaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_MET_13TeV_drllmin3l_stack_42->GetXaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_MET_13TeV_drllmin3l_stack_42->GetXaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_MET_13TeV_drllmin3l_stack_42->GetXaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_MET_13TeV_drllmin3l_stack_42->GetXaxis()->SetTitleOffset(0.9);
   thsSignal_grouped_wh3l_MET_13TeV_drllmin3l_stack_42->GetXaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_MET_13TeV_drllmin3l_stack_42->GetYaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_MET_13TeV_drllmin3l_stack_42->GetYaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_MET_13TeV_drllmin3l_stack_42->GetYaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_MET_13TeV_drllmin3l_stack_42->GetYaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_MET_13TeV_drllmin3l_stack_42->GetYaxis()->SetTitleOffset(1.25);
   thsSignal_grouped_wh3l_MET_13TeV_drllmin3l_stack_42->GetYaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_MET_13TeV_drllmin3l_stack_42->GetZaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_MET_13TeV_drllmin3l_stack_42->GetZaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_MET_13TeV_drllmin3l_stack_42->GetZaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_MET_13TeV_drllmin3l_stack_42->GetZaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_MET_13TeV_drllmin3l_stack_42->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_MET_13TeV_drllmin3l->SetHistogram(thsSignal_grouped_wh3l_MET_13TeV_drllmin3l_stack_42);
   
   
   TH1D *new_histo_group_Higgs_wh3l_MET_13TeV_drllmin3l209 = new TH1D("new_histo_group_Higgs_wh3l_MET_13TeV_drllmin3l209","histo_H_htt",5,0,6);
   new_histo_group_Higgs_wh3l_MET_13TeV_drllmin3l209->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_MET_13TeV_drllmin3l209->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_MET_13TeV_drllmin3l209->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_MET_13TeV_drllmin3l209->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_13TeV_drllmin3l209->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_13TeV_drllmin3l209->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_13TeV_drllmin3l209->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_MET_13TeV_drllmin3l209->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_13TeV_drllmin3l209->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_13TeV_drllmin3l209->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_13TeV_drllmin3l209->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_MET_13TeV_drllmin3l209->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_13TeV_drllmin3l209->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_13TeV_drllmin3l209->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_13TeV_drllmin3l209->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_MET_13TeV_drllmin3l->Add(new_histo_group_Higgs_wh3l_MET_13TeV_drllmin3l,"");
   thsSignal_grouped_wh3l_MET_13TeV_drllmin3l->Draw("hist same noclear");
   
   Double_t _fx3041[5] = {
   0.6,
   1.8,
   3,
   4.2,
   5.4};
   Double_t _fy3041[5] = {
   0,
   0,
   0,
   0,
   0};
   Double_t _felx3041[5] = {
   0.6,
   0.6,
   0.6,
   0.6,
   0.6};
   Double_t _fely3041[5] = {
   0,
   0,
   0,
   0,
   0};
   Double_t _fehx3041[5] = {
   0.6,
   0.6,
   0.6,
   0.6,
   0.6};
   Double_t _fehy3041[5] = {
   0,
   0,
   0,
   0,
   0};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(5,_fx3041,_fy3041,_felx3041,_fehx3041,_fely3041,_fehy3041);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(12);
   grae->SetFillStyle(3004);
   grae->SetLineColor(12);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3041 = new TH1F("Graph_Graph3041","",100,0,6.6);
   Graph_Graph3041->SetMinimum(0);
   Graph_Graph3041->SetMaximum(1.1);
   Graph_Graph3041->SetDirectory(0);
   Graph_Graph3041->SetStats(0);
   Graph_Graph3041->SetLineStyle(0);
   Graph_Graph3041->SetMarkerStyle(20);
   Graph_Graph3041->GetXaxis()->SetLabelFont(42);
   Graph_Graph3041->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3041->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3041->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3041->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3041->GetXaxis()->SetTitleFont(42);
   Graph_Graph3041->GetYaxis()->SetLabelFont(42);
   Graph_Graph3041->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3041->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3041->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3041->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3041->GetYaxis()->SetTitleFont(42);
   Graph_Graph3041->GetZaxis()->SetLabelFont(42);
   Graph_Graph3041->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3041->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3041->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3041->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3041);
   
   grae->Draw("2");
   
   Double_t _fx3042[5] = {
   0.6,
   1.8,
   3,
   4.2,
   5.4};
   Double_t _fy3042[5] = {
   0,
   0,
   0,
   0,
   0};
   Double_t _felx3042[5] = {
   0.6,
   0.6,
   0.6,
   0.6,
   0.6};
   Double_t _fely3042[5] = {
   0,
   0,
   0,
   0,
   0};
   Double_t _fehx3042[5] = {
   0.6,
   0.6,
   0.6,
   0.6,
   0.6};
   Double_t _fehy3042[5] = {
   1.147908,
   1.147908,
   1.147908,
   1.147908,
   1.147908};
   grae = new TGraphAsymmErrors(5,_fx3042,_fy3042,_felx3042,_fehx3042,_fely3042,_fehy3042);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(1);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3042 = new TH1F("Graph_Graph3042","",100,0,6.6);
   Graph_Graph3042->SetMinimum(0);
   Graph_Graph3042->SetMaximum(1.262698);
   Graph_Graph3042->SetDirectory(0);
   Graph_Graph3042->SetStats(0);
   Graph_Graph3042->SetLineStyle(0);
   Graph_Graph3042->SetMarkerStyle(20);
   Graph_Graph3042->GetXaxis()->SetLabelFont(42);
   Graph_Graph3042->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3042->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3042->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3042->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3042->GetXaxis()->SetTitleFont(42);
   Graph_Graph3042->GetYaxis()->SetLabelFont(42);
   Graph_Graph3042->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3042->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3042->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3042->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3042->GetYaxis()->SetTitleFont(42);
   Graph_Graph3042->GetZaxis()->SetLabelFont(42);
   Graph_Graph3042->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3042->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3042->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3042->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3042);
   
   grae->Draw("p0");
   
   TLegend *leg = new TLegend(0.2,0.7,0.8,0.9,NULL,"brNDC");
   leg->SetTextFont(62);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("new_histo_group_Fake_wh3l_MET_13TeV_drllmin3l","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_MET_13TeV_drllmin3l","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_MET_13TeV_drllmin3l","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_MET_13TeV_drllmin3l","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_MET_13TeV_drllmin3l","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_MET_13TeV_drllmin3l","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_MET_13TeV_drllmin3l","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_MET_13TeV_drllmin3l","Data","EPL");
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
   entry=leg->AddEntry("new_histo_group_Fake_wh3l_MET_13TeV_drllmin3l","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_MET_13TeV_drllmin3l","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_MET_13TeV_drllmin3l","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_MET_13TeV_drllmin3l","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_MET_13TeV_drllmin3l","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_MET_13TeV_drllmin3l","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_MET_13TeV_drllmin3l","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_MET_13TeV_drllmin3l","Data","EPL");
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
   
   TH1F *hframe_copy210 = new TH1F("hframe_copy210","",1000,0,6);
   hframe_copy210->SetMinimum(0);
   hframe_copy210->SetMaximum(0);
   hframe_copy210->SetDirectory(0);
   hframe_copy210->SetStats(0);
   hframe_copy210->SetLineStyle(0);
   hframe_copy210->SetMarkerStyle(20);
   hframe_copy210->GetXaxis()->SetTitle("min #Delta Rm_{ll} [GeV]");
   hframe_copy210->GetXaxis()->SetNdivisions(506);
   hframe_copy210->GetXaxis()->SetLabelFont(42);
   hframe_copy210->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy210->GetXaxis()->SetLabelSize(0.05);
   hframe_copy210->GetXaxis()->SetTitleSize(0.06);
   hframe_copy210->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy210->GetXaxis()->SetTitleFont(42);
   hframe_copy210->GetYaxis()->SetTitle("Events");
   hframe_copy210->GetYaxis()->SetLabelFont(42);
   hframe_copy210->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy210->GetYaxis()->SetLabelSize(0.05);
   hframe_copy210->GetYaxis()->SetTitleSize(0.06);
   hframe_copy210->GetYaxis()->SetTitleOffset(1.25);
   hframe_copy210->GetYaxis()->SetTitleFont(42);
   hframe_copy210->GetZaxis()->SetLabelFont(42);
   hframe_copy210->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy210->GetZaxis()->SetLabelSize(0.05);
   hframe_copy210->GetZaxis()->SetTitleSize(0.06);
   hframe_copy210->GetZaxis()->SetTitleFont(42);
   hframe_copy210->Draw("sameaxis");
   ccwh3l_MET_13TeV_drllmin3l->Modified();
   ccwh3l_MET_13TeV_drllmin3l->cd();
   ccwh3l_MET_13TeV_drllmin3l->SetSelected(ccwh3l_MET_13TeV_drllmin3l);
}
