void c_wh3l_MET_13TeV_mllmin3l()
{
//=========Macro generated from canvas: ccwh3l_MET_13TeV_mllmin3l/cc
//=========  (Sat Jul  2 21:43:35 2016) by ROOT version6.02/13
   TCanvas *ccwh3l_MET_13TeV_mllmin3l = new TCanvas("ccwh3l_MET_13TeV_mllmin3l", "cc",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   ccwh3l_MET_13TeV_mllmin3l->SetHighLightColor(2);
   ccwh3l_MET_13TeV_mllmin3l->Range(-28,-0.1585366,209.5,1.060976);
   ccwh3l_MET_13TeV_mllmin3l->SetFillColor(0);
   ccwh3l_MET_13TeV_mllmin3l->SetBorderMode(0);
   ccwh3l_MET_13TeV_mllmin3l->SetBorderSize(2);
   ccwh3l_MET_13TeV_mllmin3l->SetTickx(1);
   ccwh3l_MET_13TeV_mllmin3l->SetTicky(1);
   ccwh3l_MET_13TeV_mllmin3l->SetLeftMargin(0.16);
   ccwh3l_MET_13TeV_mllmin3l->SetRightMargin(0.04);
   ccwh3l_MET_13TeV_mllmin3l->SetTopMargin(0.05);
   ccwh3l_MET_13TeV_mllmin3l->SetBottomMargin(0.13);
   ccwh3l_MET_13TeV_mllmin3l->SetFrameFillStyle(0);
   ccwh3l_MET_13TeV_mllmin3l->SetFrameBorderMode(0);
   ccwh3l_MET_13TeV_mllmin3l->SetFrameFillStyle(0);
   ccwh3l_MET_13TeV_mllmin3l->SetFrameBorderMode(0);
   
   TH1F *hframe171 = new TH1F("hframe171","",1000,10,200);
   hframe171->SetMinimum(0);
   hframe171->SetMaximum(0);
   hframe171->SetDirectory(0);
   hframe171->SetStats(0);
   hframe171->SetLineStyle(0);
   hframe171->SetMarkerStyle(20);
   hframe171->GetXaxis()->SetTitle("min m_{ll} [GeV]");
   hframe171->GetXaxis()->SetNdivisions(506);
   hframe171->GetXaxis()->SetLabelFont(42);
   hframe171->GetXaxis()->SetLabelOffset(0.007);
   hframe171->GetXaxis()->SetLabelSize(0.05);
   hframe171->GetXaxis()->SetTitleSize(0.06);
   hframe171->GetXaxis()->SetTitleOffset(0.9);
   hframe171->GetXaxis()->SetTitleFont(42);
   hframe171->GetYaxis()->SetTitle("Events");
   hframe171->GetYaxis()->SetLabelFont(42);
   hframe171->GetYaxis()->SetLabelOffset(0.007);
   hframe171->GetYaxis()->SetLabelSize(0.05);
   hframe171->GetYaxis()->SetTitleSize(0.06);
   hframe171->GetYaxis()->SetTitleOffset(1.25);
   hframe171->GetYaxis()->SetTitleFont(42);
   hframe171->GetZaxis()->SetLabelFont(42);
   hframe171->GetZaxis()->SetLabelOffset(0.007);
   hframe171->GetZaxis()->SetLabelSize(0.05);
   hframe171->GetZaxis()->SetTitleSize(0.06);
   hframe171->GetZaxis()->SetTitleFont(42);
   hframe171->Draw(" ");
   
   THStack *thsBackground_grouped_wh3l_MET_13TeV_mllmin3l = new THStack();
   thsBackground_grouped_wh3l_MET_13TeV_mllmin3l->SetName("thsBackground_grouped_wh3l_MET_13TeV_mllmin3l");
   thsBackground_grouped_wh3l_MET_13TeV_mllmin3l->SetTitle("thsBackground_grouped_wh3l_MET_13TeV_mllmin3l");
   
   TH1F *thsBackground_grouped_wh3l_MET_13TeV_mllmin3l_stack_35 = new TH1F("thsBackground_grouped_wh3l_MET_13TeV_mllmin3l_stack_35","thsBackground_grouped_wh3l_MET_13TeV_mllmin3l",20,10,200);
   thsBackground_grouped_wh3l_MET_13TeV_mllmin3l_stack_35->SetMinimum(0);
   thsBackground_grouped_wh3l_MET_13TeV_mllmin3l_stack_35->SetMaximum(0);
   thsBackground_grouped_wh3l_MET_13TeV_mllmin3l_stack_35->SetDirectory(0);
   thsBackground_grouped_wh3l_MET_13TeV_mllmin3l_stack_35->SetStats(0);
   thsBackground_grouped_wh3l_MET_13TeV_mllmin3l_stack_35->SetLineStyle(0);
   thsBackground_grouped_wh3l_MET_13TeV_mllmin3l_stack_35->SetMarkerStyle(20);
   thsBackground_grouped_wh3l_MET_13TeV_mllmin3l_stack_35->GetXaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_MET_13TeV_mllmin3l_stack_35->GetXaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_MET_13TeV_mllmin3l_stack_35->GetXaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_MET_13TeV_mllmin3l_stack_35->GetXaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_MET_13TeV_mllmin3l_stack_35->GetXaxis()->SetTitleOffset(0.9);
   thsBackground_grouped_wh3l_MET_13TeV_mllmin3l_stack_35->GetXaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_13TeV_mllmin3l_stack_35->GetYaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_MET_13TeV_mllmin3l_stack_35->GetYaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_MET_13TeV_mllmin3l_stack_35->GetYaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_MET_13TeV_mllmin3l_stack_35->GetYaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_MET_13TeV_mllmin3l_stack_35->GetYaxis()->SetTitleOffset(1.25);
   thsBackground_grouped_wh3l_MET_13TeV_mllmin3l_stack_35->GetYaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_13TeV_mllmin3l_stack_35->GetZaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_MET_13TeV_mllmin3l_stack_35->GetZaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_MET_13TeV_mllmin3l_stack_35->GetZaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_MET_13TeV_mllmin3l_stack_35->GetZaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_MET_13TeV_mllmin3l_stack_35->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_13TeV_mllmin3l->SetHistogram(thsBackground_grouped_wh3l_MET_13TeV_mllmin3l_stack_35);
   
   
   TH1D *new_histo_group_Fake_wh3l_MET_13TeV_mllmin3l172 = new TH1D("new_histo_group_Fake_wh3l_MET_13TeV_mllmin3l172","histo_Fake",20,10,200);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_MET_13TeV_mllmin3l172->SetFillColor(ci);
   new_histo_group_Fake_wh3l_MET_13TeV_mllmin3l172->SetFillStyle(3001);

   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_MET_13TeV_mllmin3l172->SetLineColor(ci);
   new_histo_group_Fake_wh3l_MET_13TeV_mllmin3l172->GetXaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_MET_13TeV_mllmin3l172->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_MET_13TeV_mllmin3l172->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_MET_13TeV_mllmin3l172->GetXaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_MET_13TeV_mllmin3l172->GetYaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_MET_13TeV_mllmin3l172->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_MET_13TeV_mllmin3l172->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_MET_13TeV_mllmin3l172->GetYaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_MET_13TeV_mllmin3l172->GetZaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_MET_13TeV_mllmin3l172->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_MET_13TeV_mllmin3l172->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_MET_13TeV_mllmin3l172->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_13TeV_mllmin3l->Add(new_histo_group_Fake_wh3l_MET_13TeV_mllmin3l,"");
   
   TH1D *new_histo_group_WW_wh3l_MET_13TeV_mllmin3l173 = new TH1D("new_histo_group_WW_wh3l_MET_13TeV_mllmin3l173","histo_WW",20,10,200);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_MET_13TeV_mllmin3l173->SetFillColor(ci);
   new_histo_group_WW_wh3l_MET_13TeV_mllmin3l173->SetFillStyle(3001);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_MET_13TeV_mllmin3l173->SetLineColor(ci);
   new_histo_group_WW_wh3l_MET_13TeV_mllmin3l173->GetXaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_MET_13TeV_mllmin3l173->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_MET_13TeV_mllmin3l173->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_MET_13TeV_mllmin3l173->GetXaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_MET_13TeV_mllmin3l173->GetYaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_MET_13TeV_mllmin3l173->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_MET_13TeV_mllmin3l173->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_MET_13TeV_mllmin3l173->GetYaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_MET_13TeV_mllmin3l173->GetZaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_MET_13TeV_mllmin3l173->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_MET_13TeV_mllmin3l173->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_MET_13TeV_mllmin3l173->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_13TeV_mllmin3l->Add(new_histo_group_WW_wh3l_MET_13TeV_mllmin3l,"");
   
   TH1D *new_histo_group_VVV_wh3l_MET_13TeV_mllmin3l174 = new TH1D("new_histo_group_VVV_wh3l_MET_13TeV_mllmin3l174","histo_VVV",20,10,200);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_MET_13TeV_mllmin3l174->SetFillColor(ci);
   new_histo_group_VVV_wh3l_MET_13TeV_mllmin3l174->SetFillStyle(3001);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_MET_13TeV_mllmin3l174->SetLineColor(ci);
   new_histo_group_VVV_wh3l_MET_13TeV_mllmin3l174->GetXaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_MET_13TeV_mllmin3l174->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_MET_13TeV_mllmin3l174->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_MET_13TeV_mllmin3l174->GetXaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_MET_13TeV_mllmin3l174->GetYaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_MET_13TeV_mllmin3l174->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_MET_13TeV_mllmin3l174->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_MET_13TeV_mllmin3l174->GetYaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_MET_13TeV_mllmin3l174->GetZaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_MET_13TeV_mllmin3l174->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_MET_13TeV_mllmin3l174->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_MET_13TeV_mllmin3l174->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_13TeV_mllmin3l->Add(new_histo_group_VVV_wh3l_MET_13TeV_mllmin3l,"");
   
   TH1D *new_histo_group_Vg_wh3l_MET_13TeV_mllmin3l175 = new TH1D("new_histo_group_Vg_wh3l_MET_13TeV_mllmin3l175","histo_Vg",20,10,200);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_MET_13TeV_mllmin3l175->SetFillColor(ci);
   new_histo_group_Vg_wh3l_MET_13TeV_mllmin3l175->SetFillStyle(3001);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_MET_13TeV_mllmin3l175->SetLineColor(ci);
   new_histo_group_Vg_wh3l_MET_13TeV_mllmin3l175->GetXaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_MET_13TeV_mllmin3l175->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_MET_13TeV_mllmin3l175->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_MET_13TeV_mllmin3l175->GetXaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_MET_13TeV_mllmin3l175->GetYaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_MET_13TeV_mllmin3l175->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_MET_13TeV_mllmin3l175->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_MET_13TeV_mllmin3l175->GetYaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_MET_13TeV_mllmin3l175->GetZaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_MET_13TeV_mllmin3l175->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_MET_13TeV_mllmin3l175->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_MET_13TeV_mllmin3l175->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_13TeV_mllmin3l->Add(new_histo_group_Vg_wh3l_MET_13TeV_mllmin3l,"");
   
   TH1D *new_histo_group_ZZ_wh3l_MET_13TeV_mllmin3l176 = new TH1D("new_histo_group_ZZ_wh3l_MET_13TeV_mllmin3l176","histo_ZZ",20,10,200);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_MET_13TeV_mllmin3l176->SetFillColor(ci);
   new_histo_group_ZZ_wh3l_MET_13TeV_mllmin3l176->SetFillStyle(3001);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_MET_13TeV_mllmin3l176->SetLineColor(ci);
   new_histo_group_ZZ_wh3l_MET_13TeV_mllmin3l176->GetXaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_MET_13TeV_mllmin3l176->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_MET_13TeV_mllmin3l176->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_MET_13TeV_mllmin3l176->GetXaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_MET_13TeV_mllmin3l176->GetYaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_MET_13TeV_mllmin3l176->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_MET_13TeV_mllmin3l176->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_MET_13TeV_mllmin3l176->GetYaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_MET_13TeV_mllmin3l176->GetZaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_MET_13TeV_mllmin3l176->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_MET_13TeV_mllmin3l176->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_MET_13TeV_mllmin3l176->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_13TeV_mllmin3l->Add(new_histo_group_ZZ_wh3l_MET_13TeV_mllmin3l,"");
   
   TH1D *new_histo_group_WZ_wh3l_MET_13TeV_mllmin3l177 = new TH1D("new_histo_group_WZ_wh3l_MET_13TeV_mllmin3l177","histo_WZ",20,10,200);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_MET_13TeV_mllmin3l177->SetFillColor(ci);
   new_histo_group_WZ_wh3l_MET_13TeV_mllmin3l177->SetFillStyle(3001);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_MET_13TeV_mllmin3l177->SetLineColor(ci);
   new_histo_group_WZ_wh3l_MET_13TeV_mllmin3l177->GetXaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_MET_13TeV_mllmin3l177->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_MET_13TeV_mllmin3l177->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_MET_13TeV_mllmin3l177->GetXaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_MET_13TeV_mllmin3l177->GetYaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_MET_13TeV_mllmin3l177->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_MET_13TeV_mllmin3l177->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_MET_13TeV_mllmin3l177->GetYaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_MET_13TeV_mllmin3l177->GetZaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_MET_13TeV_mllmin3l177->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_MET_13TeV_mllmin3l177->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_MET_13TeV_mllmin3l177->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_13TeV_mllmin3l->Add(new_histo_group_WZ_wh3l_MET_13TeV_mllmin3l,"");
   
   TH1D *new_histo_group_Higgs_wh3l_MET_13TeV_mllmin3l178 = new TH1D("new_histo_group_Higgs_wh3l_MET_13TeV_mllmin3l178","histo_H_htt",20,10,200);
   new_histo_group_Higgs_wh3l_MET_13TeV_mllmin3l178->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_MET_13TeV_mllmin3l178->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_MET_13TeV_mllmin3l178->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_MET_13TeV_mllmin3l178->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_13TeV_mllmin3l178->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_13TeV_mllmin3l178->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_13TeV_mllmin3l178->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_MET_13TeV_mllmin3l178->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_13TeV_mllmin3l178->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_13TeV_mllmin3l178->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_13TeV_mllmin3l178->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_MET_13TeV_mllmin3l178->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_13TeV_mllmin3l178->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_13TeV_mllmin3l178->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_13TeV_mllmin3l178->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_13TeV_mllmin3l->Add(new_histo_group_Higgs_wh3l_MET_13TeV_mllmin3l,"");
   thsBackground_grouped_wh3l_MET_13TeV_mllmin3l->Draw("hist same");
   
   thsSignal_grouped_wh3l_MET_13TeV_mllmin3l = new THStack();
   thsSignal_grouped_wh3l_MET_13TeV_mllmin3l->SetName("thsSignal_grouped_wh3l_MET_13TeV_mllmin3l");
   thsSignal_grouped_wh3l_MET_13TeV_mllmin3l->SetTitle("thsSignal_grouped_wh3l_MET_13TeV_mllmin3l");
   
   TH1F *thsSignal_grouped_wh3l_MET_13TeV_mllmin3l_stack_36 = new TH1F("thsSignal_grouped_wh3l_MET_13TeV_mllmin3l_stack_36","thsSignal_grouped_wh3l_MET_13TeV_mllmin3l",20,10,200);
   thsSignal_grouped_wh3l_MET_13TeV_mllmin3l_stack_36->SetMinimum(0);
   thsSignal_grouped_wh3l_MET_13TeV_mllmin3l_stack_36->SetMaximum(0);
   thsSignal_grouped_wh3l_MET_13TeV_mllmin3l_stack_36->SetDirectory(0);
   thsSignal_grouped_wh3l_MET_13TeV_mllmin3l_stack_36->SetStats(0);
   thsSignal_grouped_wh3l_MET_13TeV_mllmin3l_stack_36->SetLineStyle(0);
   thsSignal_grouped_wh3l_MET_13TeV_mllmin3l_stack_36->SetMarkerStyle(20);
   thsSignal_grouped_wh3l_MET_13TeV_mllmin3l_stack_36->GetXaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_MET_13TeV_mllmin3l_stack_36->GetXaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_MET_13TeV_mllmin3l_stack_36->GetXaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_MET_13TeV_mllmin3l_stack_36->GetXaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_MET_13TeV_mllmin3l_stack_36->GetXaxis()->SetTitleOffset(0.9);
   thsSignal_grouped_wh3l_MET_13TeV_mllmin3l_stack_36->GetXaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_MET_13TeV_mllmin3l_stack_36->GetYaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_MET_13TeV_mllmin3l_stack_36->GetYaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_MET_13TeV_mllmin3l_stack_36->GetYaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_MET_13TeV_mllmin3l_stack_36->GetYaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_MET_13TeV_mllmin3l_stack_36->GetYaxis()->SetTitleOffset(1.25);
   thsSignal_grouped_wh3l_MET_13TeV_mllmin3l_stack_36->GetYaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_MET_13TeV_mllmin3l_stack_36->GetZaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_MET_13TeV_mllmin3l_stack_36->GetZaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_MET_13TeV_mllmin3l_stack_36->GetZaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_MET_13TeV_mllmin3l_stack_36->GetZaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_MET_13TeV_mllmin3l_stack_36->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_MET_13TeV_mllmin3l->SetHistogram(thsSignal_grouped_wh3l_MET_13TeV_mllmin3l_stack_36);
   
   
   TH1D *new_histo_group_Higgs_wh3l_MET_13TeV_mllmin3l179 = new TH1D("new_histo_group_Higgs_wh3l_MET_13TeV_mllmin3l179","histo_H_htt",20,10,200);
   new_histo_group_Higgs_wh3l_MET_13TeV_mllmin3l179->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_MET_13TeV_mllmin3l179->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_MET_13TeV_mllmin3l179->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_MET_13TeV_mllmin3l179->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_13TeV_mllmin3l179->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_13TeV_mllmin3l179->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_13TeV_mllmin3l179->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_MET_13TeV_mllmin3l179->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_13TeV_mllmin3l179->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_13TeV_mllmin3l179->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_13TeV_mllmin3l179->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_MET_13TeV_mllmin3l179->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_13TeV_mllmin3l179->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_13TeV_mllmin3l179->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_13TeV_mllmin3l179->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_MET_13TeV_mllmin3l->Add(new_histo_group_Higgs_wh3l_MET_13TeV_mllmin3l,"");
   thsSignal_grouped_wh3l_MET_13TeV_mllmin3l->Draw("hist same noclear");
   
   Double_t _fx3035[20] = {
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
   Double_t _fy3035[20] = {
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
   Double_t _felx3035[20] = {
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
   Double_t _fely3035[20] = {
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
   Double_t _fehx3035[20] = {
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
   Double_t _fehy3035[20] = {
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
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(20,_fx3035,_fy3035,_felx3035,_fehx3035,_fely3035,_fehy3035);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(12);
   grae->SetFillStyle(3004);
   grae->SetLineColor(12);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3035 = new TH1F("Graph_Graph3035","",100,0,219);
   Graph_Graph3035->SetMinimum(0);
   Graph_Graph3035->SetMaximum(1.1);
   Graph_Graph3035->SetDirectory(0);
   Graph_Graph3035->SetStats(0);
   Graph_Graph3035->SetLineStyle(0);
   Graph_Graph3035->SetMarkerStyle(20);
   Graph_Graph3035->GetXaxis()->SetLabelFont(42);
   Graph_Graph3035->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3035->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3035->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3035->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3035->GetXaxis()->SetTitleFont(42);
   Graph_Graph3035->GetYaxis()->SetLabelFont(42);
   Graph_Graph3035->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3035->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3035->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3035->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3035->GetYaxis()->SetTitleFont(42);
   Graph_Graph3035->GetZaxis()->SetLabelFont(42);
   Graph_Graph3035->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3035->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3035->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3035->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3035);
   
   grae->Draw("2");
   
   Double_t _fx3036[20] = {
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
   Double_t _fy3036[20] = {
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
   Double_t _felx3036[20] = {
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
   Double_t _fely3036[20] = {
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
   Double_t _fehx3036[20] = {
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
   Double_t _fehy3036[20] = {
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
   grae = new TGraphAsymmErrors(20,_fx3036,_fy3036,_felx3036,_fehx3036,_fely3036,_fehy3036);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(1);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3036 = new TH1F("Graph_Graph3036","",100,0,219);
   Graph_Graph3036->SetMinimum(0);
   Graph_Graph3036->SetMaximum(1.262698);
   Graph_Graph3036->SetDirectory(0);
   Graph_Graph3036->SetStats(0);
   Graph_Graph3036->SetLineStyle(0);
   Graph_Graph3036->SetMarkerStyle(20);
   Graph_Graph3036->GetXaxis()->SetLabelFont(42);
   Graph_Graph3036->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3036->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3036->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3036->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3036->GetXaxis()->SetTitleFont(42);
   Graph_Graph3036->GetYaxis()->SetLabelFont(42);
   Graph_Graph3036->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3036->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3036->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3036->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3036->GetYaxis()->SetTitleFont(42);
   Graph_Graph3036->GetZaxis()->SetLabelFont(42);
   Graph_Graph3036->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3036->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3036->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3036->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3036);
   
   grae->Draw("p0");
   
   TLegend *leg = new TLegend(0.2,0.7,0.8,0.9,NULL,"brNDC");
   leg->SetTextFont(62);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("new_histo_group_Fake_wh3l_MET_13TeV_mllmin3l","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_MET_13TeV_mllmin3l","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_MET_13TeV_mllmin3l","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_MET_13TeV_mllmin3l","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_MET_13TeV_mllmin3l","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_MET_13TeV_mllmin3l","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_MET_13TeV_mllmin3l","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_MET_13TeV_mllmin3l","Data","EPL");
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
   entry=leg->AddEntry("new_histo_group_Fake_wh3l_MET_13TeV_mllmin3l","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_MET_13TeV_mllmin3l","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_MET_13TeV_mllmin3l","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_MET_13TeV_mllmin3l","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_MET_13TeV_mllmin3l","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_MET_13TeV_mllmin3l","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_MET_13TeV_mllmin3l","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_MET_13TeV_mllmin3l","Data","EPL");
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
   
   TH1F *hframe_copy180 = new TH1F("hframe_copy180","",1000,10,200);
   hframe_copy180->SetMinimum(0);
   hframe_copy180->SetMaximum(0);
   hframe_copy180->SetDirectory(0);
   hframe_copy180->SetStats(0);
   hframe_copy180->SetLineStyle(0);
   hframe_copy180->SetMarkerStyle(20);
   hframe_copy180->GetXaxis()->SetTitle("min m_{ll} [GeV]");
   hframe_copy180->GetXaxis()->SetNdivisions(506);
   hframe_copy180->GetXaxis()->SetLabelFont(42);
   hframe_copy180->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy180->GetXaxis()->SetLabelSize(0.05);
   hframe_copy180->GetXaxis()->SetTitleSize(0.06);
   hframe_copy180->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy180->GetXaxis()->SetTitleFont(42);
   hframe_copy180->GetYaxis()->SetTitle("Events");
   hframe_copy180->GetYaxis()->SetLabelFont(42);
   hframe_copy180->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy180->GetYaxis()->SetLabelSize(0.05);
   hframe_copy180->GetYaxis()->SetTitleSize(0.06);
   hframe_copy180->GetYaxis()->SetTitleOffset(1.25);
   hframe_copy180->GetYaxis()->SetTitleFont(42);
   hframe_copy180->GetZaxis()->SetLabelFont(42);
   hframe_copy180->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy180->GetZaxis()->SetLabelSize(0.05);
   hframe_copy180->GetZaxis()->SetTitleSize(0.06);
   hframe_copy180->GetZaxis()->SetTitleFont(42);
   hframe_copy180->Draw("sameaxis");
   ccwh3l_MET_13TeV_mllmin3l->Modified();
   ccwh3l_MET_13TeV_mllmin3l->cd();
   ccwh3l_MET_13TeV_mllmin3l->SetSelected(ccwh3l_MET_13TeV_mllmin3l);
}
