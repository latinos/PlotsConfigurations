void c_wh3l_MET_13TeV_zveto_3l()
{
//=========Macro generated from canvas: ccwh3l_MET_13TeV_zveto_3l/cc
//=========  (Sat Jul  2 21:43:33 2016) by ROOT version6.02/13
   TCanvas *ccwh3l_MET_13TeV_zveto_3l = new TCanvas("ccwh3l_MET_13TeV_zveto_3l", "cc",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   ccwh3l_MET_13TeV_zveto_3l->SetHighLightColor(2);
   ccwh3l_MET_13TeV_zveto_3l->Range(-20,-0.1585366,105,1.060976);
   ccwh3l_MET_13TeV_zveto_3l->SetFillColor(0);
   ccwh3l_MET_13TeV_zveto_3l->SetBorderMode(0);
   ccwh3l_MET_13TeV_zveto_3l->SetBorderSize(2);
   ccwh3l_MET_13TeV_zveto_3l->SetTickx(1);
   ccwh3l_MET_13TeV_zveto_3l->SetTicky(1);
   ccwh3l_MET_13TeV_zveto_3l->SetLeftMargin(0.16);
   ccwh3l_MET_13TeV_zveto_3l->SetRightMargin(0.04);
   ccwh3l_MET_13TeV_zveto_3l->SetTopMargin(0.05);
   ccwh3l_MET_13TeV_zveto_3l->SetBottomMargin(0.13);
   ccwh3l_MET_13TeV_zveto_3l->SetFrameFillStyle(0);
   ccwh3l_MET_13TeV_zveto_3l->SetFrameBorderMode(0);
   ccwh3l_MET_13TeV_zveto_3l->SetFrameFillStyle(0);
   ccwh3l_MET_13TeV_zveto_3l->SetFrameBorderMode(0);
   
   TH1F *hframe151 = new TH1F("hframe151","",1000,0,100);
   hframe151->SetMinimum(0);
   hframe151->SetMaximum(0);
   hframe151->SetDirectory(0);
   hframe151->SetStats(0);
   hframe151->SetLineStyle(0);
   hframe151->SetMarkerStyle(20);
   hframe151->GetXaxis()->SetTitle("m_{ll} - M_{Z} [GeV]");
   hframe151->GetXaxis()->SetNdivisions(506);
   hframe151->GetXaxis()->SetLabelFont(42);
   hframe151->GetXaxis()->SetLabelOffset(0.007);
   hframe151->GetXaxis()->SetLabelSize(0.05);
   hframe151->GetXaxis()->SetTitleSize(0.06);
   hframe151->GetXaxis()->SetTitleOffset(0.9);
   hframe151->GetXaxis()->SetTitleFont(42);
   hframe151->GetYaxis()->SetTitle("Events");
   hframe151->GetYaxis()->SetLabelFont(42);
   hframe151->GetYaxis()->SetLabelOffset(0.007);
   hframe151->GetYaxis()->SetLabelSize(0.05);
   hframe151->GetYaxis()->SetTitleSize(0.06);
   hframe151->GetYaxis()->SetTitleOffset(1.25);
   hframe151->GetYaxis()->SetTitleFont(42);
   hframe151->GetZaxis()->SetLabelFont(42);
   hframe151->GetZaxis()->SetLabelOffset(0.007);
   hframe151->GetZaxis()->SetLabelSize(0.05);
   hframe151->GetZaxis()->SetTitleSize(0.06);
   hframe151->GetZaxis()->SetTitleFont(42);
   hframe151->Draw(" ");
   
   THStack *thsBackground_grouped_wh3l_MET_13TeV_zveto_3l = new THStack();
   thsBackground_grouped_wh3l_MET_13TeV_zveto_3l->SetName("thsBackground_grouped_wh3l_MET_13TeV_zveto_3l");
   thsBackground_grouped_wh3l_MET_13TeV_zveto_3l->SetTitle("thsBackground_grouped_wh3l_MET_13TeV_zveto_3l");
   
   TH1F *thsBackground_grouped_wh3l_MET_13TeV_zveto_3l_stack_31 = new TH1F("thsBackground_grouped_wh3l_MET_13TeV_zveto_3l_stack_31","thsBackground_grouped_wh3l_MET_13TeV_zveto_3l",20,0,100);
   thsBackground_grouped_wh3l_MET_13TeV_zveto_3l_stack_31->SetMinimum(0);
   thsBackground_grouped_wh3l_MET_13TeV_zveto_3l_stack_31->SetMaximum(0);
   thsBackground_grouped_wh3l_MET_13TeV_zveto_3l_stack_31->SetDirectory(0);
   thsBackground_grouped_wh3l_MET_13TeV_zveto_3l_stack_31->SetStats(0);
   thsBackground_grouped_wh3l_MET_13TeV_zveto_3l_stack_31->SetLineStyle(0);
   thsBackground_grouped_wh3l_MET_13TeV_zveto_3l_stack_31->SetMarkerStyle(20);
   thsBackground_grouped_wh3l_MET_13TeV_zveto_3l_stack_31->GetXaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_MET_13TeV_zveto_3l_stack_31->GetXaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_MET_13TeV_zveto_3l_stack_31->GetXaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_MET_13TeV_zveto_3l_stack_31->GetXaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_MET_13TeV_zveto_3l_stack_31->GetXaxis()->SetTitleOffset(0.9);
   thsBackground_grouped_wh3l_MET_13TeV_zveto_3l_stack_31->GetXaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_13TeV_zveto_3l_stack_31->GetYaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_MET_13TeV_zveto_3l_stack_31->GetYaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_MET_13TeV_zveto_3l_stack_31->GetYaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_MET_13TeV_zveto_3l_stack_31->GetYaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_MET_13TeV_zveto_3l_stack_31->GetYaxis()->SetTitleOffset(1.25);
   thsBackground_grouped_wh3l_MET_13TeV_zveto_3l_stack_31->GetYaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_13TeV_zveto_3l_stack_31->GetZaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_MET_13TeV_zveto_3l_stack_31->GetZaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_MET_13TeV_zveto_3l_stack_31->GetZaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_MET_13TeV_zveto_3l_stack_31->GetZaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_MET_13TeV_zveto_3l_stack_31->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_13TeV_zveto_3l->SetHistogram(thsBackground_grouped_wh3l_MET_13TeV_zveto_3l_stack_31);
   
   
   TH1D *new_histo_group_Fake_wh3l_MET_13TeV_zveto_3l152 = new TH1D("new_histo_group_Fake_wh3l_MET_13TeV_zveto_3l152","histo_Fake",20,0,100);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_MET_13TeV_zveto_3l152->SetFillColor(ci);
   new_histo_group_Fake_wh3l_MET_13TeV_zveto_3l152->SetFillStyle(3001);

   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_MET_13TeV_zveto_3l152->SetLineColor(ci);
   new_histo_group_Fake_wh3l_MET_13TeV_zveto_3l152->GetXaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_MET_13TeV_zveto_3l152->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_MET_13TeV_zveto_3l152->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_MET_13TeV_zveto_3l152->GetXaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_MET_13TeV_zveto_3l152->GetYaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_MET_13TeV_zveto_3l152->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_MET_13TeV_zveto_3l152->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_MET_13TeV_zveto_3l152->GetYaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_MET_13TeV_zveto_3l152->GetZaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_MET_13TeV_zveto_3l152->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_MET_13TeV_zveto_3l152->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_MET_13TeV_zveto_3l152->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_13TeV_zveto_3l->Add(new_histo_group_Fake_wh3l_MET_13TeV_zveto_3l,"");
   
   TH1D *new_histo_group_WW_wh3l_MET_13TeV_zveto_3l153 = new TH1D("new_histo_group_WW_wh3l_MET_13TeV_zveto_3l153","histo_WW",20,0,100);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_MET_13TeV_zveto_3l153->SetFillColor(ci);
   new_histo_group_WW_wh3l_MET_13TeV_zveto_3l153->SetFillStyle(3001);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_MET_13TeV_zveto_3l153->SetLineColor(ci);
   new_histo_group_WW_wh3l_MET_13TeV_zveto_3l153->GetXaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_MET_13TeV_zveto_3l153->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_MET_13TeV_zveto_3l153->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_MET_13TeV_zveto_3l153->GetXaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_MET_13TeV_zveto_3l153->GetYaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_MET_13TeV_zveto_3l153->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_MET_13TeV_zveto_3l153->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_MET_13TeV_zveto_3l153->GetYaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_MET_13TeV_zveto_3l153->GetZaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_MET_13TeV_zveto_3l153->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_MET_13TeV_zveto_3l153->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_MET_13TeV_zveto_3l153->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_13TeV_zveto_3l->Add(new_histo_group_WW_wh3l_MET_13TeV_zveto_3l,"");
   
   TH1D *new_histo_group_VVV_wh3l_MET_13TeV_zveto_3l154 = new TH1D("new_histo_group_VVV_wh3l_MET_13TeV_zveto_3l154","histo_VVV",20,0,100);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_MET_13TeV_zveto_3l154->SetFillColor(ci);
   new_histo_group_VVV_wh3l_MET_13TeV_zveto_3l154->SetFillStyle(3001);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_MET_13TeV_zveto_3l154->SetLineColor(ci);
   new_histo_group_VVV_wh3l_MET_13TeV_zveto_3l154->GetXaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_MET_13TeV_zveto_3l154->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_MET_13TeV_zveto_3l154->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_MET_13TeV_zveto_3l154->GetXaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_MET_13TeV_zveto_3l154->GetYaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_MET_13TeV_zveto_3l154->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_MET_13TeV_zveto_3l154->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_MET_13TeV_zveto_3l154->GetYaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_MET_13TeV_zveto_3l154->GetZaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_MET_13TeV_zveto_3l154->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_MET_13TeV_zveto_3l154->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_MET_13TeV_zveto_3l154->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_13TeV_zveto_3l->Add(new_histo_group_VVV_wh3l_MET_13TeV_zveto_3l,"");
   
   TH1D *new_histo_group_Vg_wh3l_MET_13TeV_zveto_3l155 = new TH1D("new_histo_group_Vg_wh3l_MET_13TeV_zveto_3l155","histo_Vg",20,0,100);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_MET_13TeV_zveto_3l155->SetFillColor(ci);
   new_histo_group_Vg_wh3l_MET_13TeV_zveto_3l155->SetFillStyle(3001);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_MET_13TeV_zveto_3l155->SetLineColor(ci);
   new_histo_group_Vg_wh3l_MET_13TeV_zveto_3l155->GetXaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_MET_13TeV_zveto_3l155->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_MET_13TeV_zveto_3l155->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_MET_13TeV_zveto_3l155->GetXaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_MET_13TeV_zveto_3l155->GetYaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_MET_13TeV_zveto_3l155->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_MET_13TeV_zveto_3l155->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_MET_13TeV_zveto_3l155->GetYaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_MET_13TeV_zveto_3l155->GetZaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_MET_13TeV_zveto_3l155->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_MET_13TeV_zveto_3l155->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_MET_13TeV_zveto_3l155->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_13TeV_zveto_3l->Add(new_histo_group_Vg_wh3l_MET_13TeV_zveto_3l,"");
   
   TH1D *new_histo_group_ZZ_wh3l_MET_13TeV_zveto_3l156 = new TH1D("new_histo_group_ZZ_wh3l_MET_13TeV_zveto_3l156","histo_ZZ",20,0,100);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_MET_13TeV_zveto_3l156->SetFillColor(ci);
   new_histo_group_ZZ_wh3l_MET_13TeV_zveto_3l156->SetFillStyle(3001);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_MET_13TeV_zveto_3l156->SetLineColor(ci);
   new_histo_group_ZZ_wh3l_MET_13TeV_zveto_3l156->GetXaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_MET_13TeV_zveto_3l156->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_MET_13TeV_zveto_3l156->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_MET_13TeV_zveto_3l156->GetXaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_MET_13TeV_zveto_3l156->GetYaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_MET_13TeV_zveto_3l156->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_MET_13TeV_zveto_3l156->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_MET_13TeV_zveto_3l156->GetYaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_MET_13TeV_zveto_3l156->GetZaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_MET_13TeV_zveto_3l156->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_MET_13TeV_zveto_3l156->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_MET_13TeV_zveto_3l156->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_13TeV_zveto_3l->Add(new_histo_group_ZZ_wh3l_MET_13TeV_zveto_3l,"");
   
   TH1D *new_histo_group_WZ_wh3l_MET_13TeV_zveto_3l157 = new TH1D("new_histo_group_WZ_wh3l_MET_13TeV_zveto_3l157","histo_WZ",20,0,100);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_MET_13TeV_zveto_3l157->SetFillColor(ci);
   new_histo_group_WZ_wh3l_MET_13TeV_zveto_3l157->SetFillStyle(3001);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_MET_13TeV_zveto_3l157->SetLineColor(ci);
   new_histo_group_WZ_wh3l_MET_13TeV_zveto_3l157->GetXaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_MET_13TeV_zveto_3l157->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_MET_13TeV_zveto_3l157->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_MET_13TeV_zveto_3l157->GetXaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_MET_13TeV_zveto_3l157->GetYaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_MET_13TeV_zveto_3l157->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_MET_13TeV_zveto_3l157->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_MET_13TeV_zveto_3l157->GetYaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_MET_13TeV_zveto_3l157->GetZaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_MET_13TeV_zveto_3l157->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_MET_13TeV_zveto_3l157->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_MET_13TeV_zveto_3l157->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_13TeV_zveto_3l->Add(new_histo_group_WZ_wh3l_MET_13TeV_zveto_3l,"");
   
   TH1D *new_histo_group_Higgs_wh3l_MET_13TeV_zveto_3l158 = new TH1D("new_histo_group_Higgs_wh3l_MET_13TeV_zveto_3l158","histo_H_htt",20,0,100);
   new_histo_group_Higgs_wh3l_MET_13TeV_zveto_3l158->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_MET_13TeV_zveto_3l158->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_MET_13TeV_zveto_3l158->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_MET_13TeV_zveto_3l158->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_13TeV_zveto_3l158->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_13TeV_zveto_3l158->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_13TeV_zveto_3l158->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_MET_13TeV_zveto_3l158->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_13TeV_zveto_3l158->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_13TeV_zveto_3l158->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_13TeV_zveto_3l158->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_MET_13TeV_zveto_3l158->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_13TeV_zveto_3l158->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_13TeV_zveto_3l158->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_13TeV_zveto_3l158->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_13TeV_zveto_3l->Add(new_histo_group_Higgs_wh3l_MET_13TeV_zveto_3l,"");
   thsBackground_grouped_wh3l_MET_13TeV_zveto_3l->Draw("hist same");
   
   thsSignal_grouped_wh3l_MET_13TeV_zveto_3l = new THStack();
   thsSignal_grouped_wh3l_MET_13TeV_zveto_3l->SetName("thsSignal_grouped_wh3l_MET_13TeV_zveto_3l");
   thsSignal_grouped_wh3l_MET_13TeV_zveto_3l->SetTitle("thsSignal_grouped_wh3l_MET_13TeV_zveto_3l");
   
   TH1F *thsSignal_grouped_wh3l_MET_13TeV_zveto_3l_stack_32 = new TH1F("thsSignal_grouped_wh3l_MET_13TeV_zveto_3l_stack_32","thsSignal_grouped_wh3l_MET_13TeV_zveto_3l",20,0,100);
   thsSignal_grouped_wh3l_MET_13TeV_zveto_3l_stack_32->SetMinimum(0);
   thsSignal_grouped_wh3l_MET_13TeV_zveto_3l_stack_32->SetMaximum(0);
   thsSignal_grouped_wh3l_MET_13TeV_zveto_3l_stack_32->SetDirectory(0);
   thsSignal_grouped_wh3l_MET_13TeV_zveto_3l_stack_32->SetStats(0);
   thsSignal_grouped_wh3l_MET_13TeV_zveto_3l_stack_32->SetLineStyle(0);
   thsSignal_grouped_wh3l_MET_13TeV_zveto_3l_stack_32->SetMarkerStyle(20);
   thsSignal_grouped_wh3l_MET_13TeV_zveto_3l_stack_32->GetXaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_MET_13TeV_zveto_3l_stack_32->GetXaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_MET_13TeV_zveto_3l_stack_32->GetXaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_MET_13TeV_zveto_3l_stack_32->GetXaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_MET_13TeV_zveto_3l_stack_32->GetXaxis()->SetTitleOffset(0.9);
   thsSignal_grouped_wh3l_MET_13TeV_zveto_3l_stack_32->GetXaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_MET_13TeV_zveto_3l_stack_32->GetYaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_MET_13TeV_zveto_3l_stack_32->GetYaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_MET_13TeV_zveto_3l_stack_32->GetYaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_MET_13TeV_zveto_3l_stack_32->GetYaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_MET_13TeV_zveto_3l_stack_32->GetYaxis()->SetTitleOffset(1.25);
   thsSignal_grouped_wh3l_MET_13TeV_zveto_3l_stack_32->GetYaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_MET_13TeV_zveto_3l_stack_32->GetZaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_MET_13TeV_zveto_3l_stack_32->GetZaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_MET_13TeV_zveto_3l_stack_32->GetZaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_MET_13TeV_zveto_3l_stack_32->GetZaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_MET_13TeV_zveto_3l_stack_32->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_MET_13TeV_zveto_3l->SetHistogram(thsSignal_grouped_wh3l_MET_13TeV_zveto_3l_stack_32);
   
   
   TH1D *new_histo_group_Higgs_wh3l_MET_13TeV_zveto_3l159 = new TH1D("new_histo_group_Higgs_wh3l_MET_13TeV_zveto_3l159","histo_H_htt",20,0,100);
   new_histo_group_Higgs_wh3l_MET_13TeV_zveto_3l159->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_MET_13TeV_zveto_3l159->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_MET_13TeV_zveto_3l159->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_MET_13TeV_zveto_3l159->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_13TeV_zveto_3l159->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_13TeV_zveto_3l159->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_13TeV_zveto_3l159->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_MET_13TeV_zveto_3l159->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_13TeV_zveto_3l159->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_13TeV_zveto_3l159->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_13TeV_zveto_3l159->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_MET_13TeV_zveto_3l159->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_13TeV_zveto_3l159->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_13TeV_zveto_3l159->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_13TeV_zveto_3l159->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_MET_13TeV_zveto_3l->Add(new_histo_group_Higgs_wh3l_MET_13TeV_zveto_3l,"");
   thsSignal_grouped_wh3l_MET_13TeV_zveto_3l->Draw("hist same noclear");
   
   Double_t _fx3031[20] = {
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
   Double_t _fy3031[20] = {
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
   Double_t _felx3031[20] = {
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
   Double_t _fely3031[20] = {
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
   Double_t _fehx3031[20] = {
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
   Double_t _fehy3031[20] = {
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
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(20,_fx3031,_fy3031,_felx3031,_fehx3031,_fely3031,_fehy3031);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(12);
   grae->SetFillStyle(3004);
   grae->SetLineColor(12);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3031 = new TH1F("Graph_Graph3031","",100,0,110);
   Graph_Graph3031->SetMinimum(0);
   Graph_Graph3031->SetMaximum(1.1);
   Graph_Graph3031->SetDirectory(0);
   Graph_Graph3031->SetStats(0);
   Graph_Graph3031->SetLineStyle(0);
   Graph_Graph3031->SetMarkerStyle(20);
   Graph_Graph3031->GetXaxis()->SetLabelFont(42);
   Graph_Graph3031->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3031->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3031->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3031->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3031->GetXaxis()->SetTitleFont(42);
   Graph_Graph3031->GetYaxis()->SetLabelFont(42);
   Graph_Graph3031->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3031->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3031->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3031->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3031->GetYaxis()->SetTitleFont(42);
   Graph_Graph3031->GetZaxis()->SetLabelFont(42);
   Graph_Graph3031->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3031->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3031->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3031->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3031);
   
   grae->Draw("2");
   
   Double_t _fx3032[20] = {
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
   Double_t _fy3032[20] = {
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
   Double_t _felx3032[20] = {
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
   Double_t _fely3032[20] = {
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
   Double_t _fehx3032[20] = {
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
   Double_t _fehy3032[20] = {
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
   grae = new TGraphAsymmErrors(20,_fx3032,_fy3032,_felx3032,_fehx3032,_fely3032,_fehy3032);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(1);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3032 = new TH1F("Graph_Graph3032","",100,0,110);
   Graph_Graph3032->SetMinimum(0);
   Graph_Graph3032->SetMaximum(1.262698);
   Graph_Graph3032->SetDirectory(0);
   Graph_Graph3032->SetStats(0);
   Graph_Graph3032->SetLineStyle(0);
   Graph_Graph3032->SetMarkerStyle(20);
   Graph_Graph3032->GetXaxis()->SetLabelFont(42);
   Graph_Graph3032->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3032->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3032->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3032->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3032->GetXaxis()->SetTitleFont(42);
   Graph_Graph3032->GetYaxis()->SetLabelFont(42);
   Graph_Graph3032->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3032->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3032->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3032->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3032->GetYaxis()->SetTitleFont(42);
   Graph_Graph3032->GetZaxis()->SetLabelFont(42);
   Graph_Graph3032->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3032->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3032->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3032->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3032);
   
   grae->Draw("p0");
   
   TLegend *leg = new TLegend(0.2,0.7,0.8,0.9,NULL,"brNDC");
   leg->SetTextFont(62);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("new_histo_group_Fake_wh3l_MET_13TeV_zveto_3l","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_MET_13TeV_zveto_3l","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_MET_13TeV_zveto_3l","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_MET_13TeV_zveto_3l","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_MET_13TeV_zveto_3l","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_MET_13TeV_zveto_3l","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_MET_13TeV_zveto_3l","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_MET_13TeV_zveto_3l","Data","EPL");
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
   entry=leg->AddEntry("new_histo_group_Fake_wh3l_MET_13TeV_zveto_3l","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_MET_13TeV_zveto_3l","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_MET_13TeV_zveto_3l","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_MET_13TeV_zveto_3l","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_MET_13TeV_zveto_3l","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_MET_13TeV_zveto_3l","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_MET_13TeV_zveto_3l","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_MET_13TeV_zveto_3l","Data","EPL");
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
   
   TH1F *hframe_copy160 = new TH1F("hframe_copy160","",1000,0,100);
   hframe_copy160->SetMinimum(0);
   hframe_copy160->SetMaximum(0);
   hframe_copy160->SetDirectory(0);
   hframe_copy160->SetStats(0);
   hframe_copy160->SetLineStyle(0);
   hframe_copy160->SetMarkerStyle(20);
   hframe_copy160->GetXaxis()->SetTitle("m_{ll} - M_{Z} [GeV]");
   hframe_copy160->GetXaxis()->SetNdivisions(506);
   hframe_copy160->GetXaxis()->SetLabelFont(42);
   hframe_copy160->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy160->GetXaxis()->SetLabelSize(0.05);
   hframe_copy160->GetXaxis()->SetTitleSize(0.06);
   hframe_copy160->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy160->GetXaxis()->SetTitleFont(42);
   hframe_copy160->GetYaxis()->SetTitle("Events");
   hframe_copy160->GetYaxis()->SetLabelFont(42);
   hframe_copy160->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy160->GetYaxis()->SetLabelSize(0.05);
   hframe_copy160->GetYaxis()->SetTitleSize(0.06);
   hframe_copy160->GetYaxis()->SetTitleOffset(1.25);
   hframe_copy160->GetYaxis()->SetTitleFont(42);
   hframe_copy160->GetZaxis()->SetLabelFont(42);
   hframe_copy160->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy160->GetZaxis()->SetLabelSize(0.05);
   hframe_copy160->GetZaxis()->SetTitleSize(0.06);
   hframe_copy160->GetZaxis()->SetTitleFont(42);
   hframe_copy160->Draw("sameaxis");
   ccwh3l_MET_13TeV_zveto_3l->Modified();
   ccwh3l_MET_13TeV_zveto_3l->cd();
   ccwh3l_MET_13TeV_zveto_3l->SetSelected(ccwh3l_MET_13TeV_zveto_3l);
}
