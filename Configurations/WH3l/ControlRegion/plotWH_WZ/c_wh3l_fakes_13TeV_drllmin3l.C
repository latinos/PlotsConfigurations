void c_wh3l_fakes_13TeV_drllmin3l()
{
//=========Macro generated from canvas: ccwh3l_fakes_13TeV_drllmin3l/cc
//=========  (Sat Jul  2 19:44:33 2016) by ROOT version6.02/13
   TCanvas *ccwh3l_fakes_13TeV_drllmin3l = new TCanvas("ccwh3l_fakes_13TeV_drllmin3l", "cc",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   ccwh3l_fakes_13TeV_drllmin3l->SetHighLightColor(2);
   ccwh3l_fakes_13TeV_drllmin3l->Range(-0.8,-0.1585366,4.2,1.060976);
   ccwh3l_fakes_13TeV_drllmin3l->SetFillColor(0);
   ccwh3l_fakes_13TeV_drllmin3l->SetBorderMode(0);
   ccwh3l_fakes_13TeV_drllmin3l->SetBorderSize(2);
   ccwh3l_fakes_13TeV_drllmin3l->SetTickx(1);
   ccwh3l_fakes_13TeV_drllmin3l->SetTicky(1);
   ccwh3l_fakes_13TeV_drllmin3l->SetLeftMargin(0.16);
   ccwh3l_fakes_13TeV_drllmin3l->SetRightMargin(0.04);
   ccwh3l_fakes_13TeV_drllmin3l->SetTopMargin(0.05);
   ccwh3l_fakes_13TeV_drllmin3l->SetBottomMargin(0.13);
   ccwh3l_fakes_13TeV_drllmin3l->SetFrameFillStyle(0);
   ccwh3l_fakes_13TeV_drllmin3l->SetFrameBorderMode(0);
   ccwh3l_fakes_13TeV_drllmin3l->SetFrameFillStyle(0);
   ccwh3l_fakes_13TeV_drllmin3l->SetFrameBorderMode(0);
   
   TH1F *hframe46 = new TH1F("hframe46","",1000,0,4);
   hframe46->SetMinimum(0);
   hframe46->SetMaximum(0);
   hframe46->SetDirectory(0);
   hframe46->SetStats(0);
   hframe46->SetLineStyle(0);
   hframe46->SetMarkerStyle(20);
   hframe46->GetXaxis()->SetTitle("min #Delta Rm_{ll} [GeV]");
   hframe46->GetXaxis()->SetNdivisions(506);
   hframe46->GetXaxis()->SetLabelFont(42);
   hframe46->GetXaxis()->SetLabelOffset(0.007);
   hframe46->GetXaxis()->SetLabelSize(0.05);
   hframe46->GetXaxis()->SetTitleSize(0.06);
   hframe46->GetXaxis()->SetTitleOffset(0.9);
   hframe46->GetXaxis()->SetTitleFont(42);
   hframe46->GetYaxis()->SetTitle("Events");
   hframe46->GetYaxis()->SetLabelFont(42);
   hframe46->GetYaxis()->SetLabelOffset(0.007);
   hframe46->GetYaxis()->SetLabelSize(0.05);
   hframe46->GetYaxis()->SetTitleSize(0.06);
   hframe46->GetYaxis()->SetTitleOffset(1.25);
   hframe46->GetYaxis()->SetTitleFont(42);
   hframe46->GetZaxis()->SetLabelFont(42);
   hframe46->GetZaxis()->SetLabelOffset(0.007);
   hframe46->GetZaxis()->SetLabelSize(0.05);
   hframe46->GetZaxis()->SetTitleSize(0.06);
   hframe46->GetZaxis()->SetTitleFont(42);
   hframe46->Draw(" ");
   
   THStack *thsBackground_grouped_wh3l_fakes_13TeV_drllmin3l = new THStack();
   thsBackground_grouped_wh3l_fakes_13TeV_drllmin3l->SetName("thsBackground_grouped_wh3l_fakes_13TeV_drllmin3l");
   thsBackground_grouped_wh3l_fakes_13TeV_drllmin3l->SetTitle("thsBackground_grouped_wh3l_fakes_13TeV_drllmin3l");
   
   TH1F *thsBackground_grouped_wh3l_fakes_13TeV_drllmin3l_stack_11 = new TH1F("thsBackground_grouped_wh3l_fakes_13TeV_drllmin3l_stack_11","thsBackground_grouped_wh3l_fakes_13TeV_drllmin3l",3,0,4);
   thsBackground_grouped_wh3l_fakes_13TeV_drllmin3l_stack_11->SetMinimum(0);
   thsBackground_grouped_wh3l_fakes_13TeV_drllmin3l_stack_11->SetMaximum(0);
   thsBackground_grouped_wh3l_fakes_13TeV_drllmin3l_stack_11->SetDirectory(0);
   thsBackground_grouped_wh3l_fakes_13TeV_drllmin3l_stack_11->SetStats(0);
   thsBackground_grouped_wh3l_fakes_13TeV_drllmin3l_stack_11->SetLineStyle(0);
   thsBackground_grouped_wh3l_fakes_13TeV_drllmin3l_stack_11->SetMarkerStyle(20);
   thsBackground_grouped_wh3l_fakes_13TeV_drllmin3l_stack_11->GetXaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_fakes_13TeV_drllmin3l_stack_11->GetXaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_fakes_13TeV_drllmin3l_stack_11->GetXaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_fakes_13TeV_drllmin3l_stack_11->GetXaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_fakes_13TeV_drllmin3l_stack_11->GetXaxis()->SetTitleOffset(0.9);
   thsBackground_grouped_wh3l_fakes_13TeV_drllmin3l_stack_11->GetXaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_fakes_13TeV_drllmin3l_stack_11->GetYaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_fakes_13TeV_drllmin3l_stack_11->GetYaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_fakes_13TeV_drllmin3l_stack_11->GetYaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_fakes_13TeV_drllmin3l_stack_11->GetYaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_fakes_13TeV_drllmin3l_stack_11->GetYaxis()->SetTitleOffset(1.25);
   thsBackground_grouped_wh3l_fakes_13TeV_drllmin3l_stack_11->GetYaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_fakes_13TeV_drllmin3l_stack_11->GetZaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_fakes_13TeV_drllmin3l_stack_11->GetZaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_fakes_13TeV_drllmin3l_stack_11->GetZaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_fakes_13TeV_drllmin3l_stack_11->GetZaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_fakes_13TeV_drllmin3l_stack_11->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_fakes_13TeV_drllmin3l->SetHistogram(thsBackground_grouped_wh3l_fakes_13TeV_drllmin3l_stack_11);
   
   
   TH1D *new_histo_group_Fake_wh3l_fakes_13TeV_drllmin3l47 = new TH1D("new_histo_group_Fake_wh3l_fakes_13TeV_drllmin3l47","histo_Fake",3,0,4);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_fakes_13TeV_drllmin3l47->SetFillColor(ci);
   new_histo_group_Fake_wh3l_fakes_13TeV_drllmin3l47->SetFillStyle(3001);

   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_fakes_13TeV_drllmin3l47->SetLineColor(ci);
   new_histo_group_Fake_wh3l_fakes_13TeV_drllmin3l47->GetXaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_fakes_13TeV_drllmin3l47->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_fakes_13TeV_drllmin3l47->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_fakes_13TeV_drllmin3l47->GetXaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_fakes_13TeV_drllmin3l47->GetYaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_fakes_13TeV_drllmin3l47->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_fakes_13TeV_drllmin3l47->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_fakes_13TeV_drllmin3l47->GetYaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_fakes_13TeV_drllmin3l47->GetZaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_fakes_13TeV_drllmin3l47->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_fakes_13TeV_drllmin3l47->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_fakes_13TeV_drllmin3l47->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_fakes_13TeV_drllmin3l->Add(new_histo_group_Fake_wh3l_fakes_13TeV_drllmin3l,"");
   
   TH1D *new_histo_group_WW_wh3l_fakes_13TeV_drllmin3l48 = new TH1D("new_histo_group_WW_wh3l_fakes_13TeV_drllmin3l48","histo_WW",3,0,4);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_fakes_13TeV_drllmin3l48->SetFillColor(ci);
   new_histo_group_WW_wh3l_fakes_13TeV_drllmin3l48->SetFillStyle(3001);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_fakes_13TeV_drllmin3l48->SetLineColor(ci);
   new_histo_group_WW_wh3l_fakes_13TeV_drllmin3l48->GetXaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_fakes_13TeV_drllmin3l48->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_fakes_13TeV_drllmin3l48->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_fakes_13TeV_drllmin3l48->GetXaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_fakes_13TeV_drllmin3l48->GetYaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_fakes_13TeV_drllmin3l48->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_fakes_13TeV_drllmin3l48->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_fakes_13TeV_drllmin3l48->GetYaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_fakes_13TeV_drllmin3l48->GetZaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_fakes_13TeV_drllmin3l48->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_fakes_13TeV_drllmin3l48->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_fakes_13TeV_drllmin3l48->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_fakes_13TeV_drllmin3l->Add(new_histo_group_WW_wh3l_fakes_13TeV_drllmin3l,"");
   
   TH1D *new_histo_group_Vg_wh3l_fakes_13TeV_drllmin3l49 = new TH1D("new_histo_group_Vg_wh3l_fakes_13TeV_drllmin3l49","histo_Vg",3,0,4);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_fakes_13TeV_drllmin3l49->SetFillColor(ci);
   new_histo_group_Vg_wh3l_fakes_13TeV_drllmin3l49->SetFillStyle(3001);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_fakes_13TeV_drllmin3l49->SetLineColor(ci);
   new_histo_group_Vg_wh3l_fakes_13TeV_drllmin3l49->GetXaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_fakes_13TeV_drllmin3l49->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_fakes_13TeV_drllmin3l49->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_fakes_13TeV_drllmin3l49->GetXaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_fakes_13TeV_drllmin3l49->GetYaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_fakes_13TeV_drllmin3l49->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_fakes_13TeV_drllmin3l49->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_fakes_13TeV_drllmin3l49->GetYaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_fakes_13TeV_drllmin3l49->GetZaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_fakes_13TeV_drllmin3l49->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_fakes_13TeV_drllmin3l49->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_fakes_13TeV_drllmin3l49->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_fakes_13TeV_drllmin3l->Add(new_histo_group_Vg_wh3l_fakes_13TeV_drllmin3l,"");
   
   TH1D *new_histo_group_ZZ_wh3l_fakes_13TeV_drllmin3l50 = new TH1D("new_histo_group_ZZ_wh3l_fakes_13TeV_drllmin3l50","histo_ZZ",3,0,4);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_fakes_13TeV_drllmin3l50->SetFillColor(ci);
   new_histo_group_ZZ_wh3l_fakes_13TeV_drllmin3l50->SetFillStyle(3001);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_fakes_13TeV_drllmin3l50->SetLineColor(ci);
   new_histo_group_ZZ_wh3l_fakes_13TeV_drllmin3l50->GetXaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_fakes_13TeV_drllmin3l50->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_fakes_13TeV_drllmin3l50->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_fakes_13TeV_drllmin3l50->GetXaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_fakes_13TeV_drllmin3l50->GetYaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_fakes_13TeV_drllmin3l50->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_fakes_13TeV_drllmin3l50->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_fakes_13TeV_drllmin3l50->GetYaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_fakes_13TeV_drllmin3l50->GetZaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_fakes_13TeV_drllmin3l50->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_fakes_13TeV_drllmin3l50->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_fakes_13TeV_drllmin3l50->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_fakes_13TeV_drllmin3l->Add(new_histo_group_ZZ_wh3l_fakes_13TeV_drllmin3l,"");
   
   TH1D *new_histo_group_WZ_wh3l_fakes_13TeV_drllmin3l51 = new TH1D("new_histo_group_WZ_wh3l_fakes_13TeV_drllmin3l51","histo_WZ",3,0,4);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_fakes_13TeV_drllmin3l51->SetFillColor(ci);
   new_histo_group_WZ_wh3l_fakes_13TeV_drllmin3l51->SetFillStyle(3001);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_fakes_13TeV_drllmin3l51->SetLineColor(ci);
   new_histo_group_WZ_wh3l_fakes_13TeV_drllmin3l51->GetXaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_fakes_13TeV_drllmin3l51->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_fakes_13TeV_drllmin3l51->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_fakes_13TeV_drllmin3l51->GetXaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_fakes_13TeV_drllmin3l51->GetYaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_fakes_13TeV_drllmin3l51->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_fakes_13TeV_drllmin3l51->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_fakes_13TeV_drllmin3l51->GetYaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_fakes_13TeV_drllmin3l51->GetZaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_fakes_13TeV_drllmin3l51->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_fakes_13TeV_drllmin3l51->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_fakes_13TeV_drllmin3l51->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_fakes_13TeV_drllmin3l->Add(new_histo_group_WZ_wh3l_fakes_13TeV_drllmin3l,"");
   
   TH1D *new_histo_group_Higgs_wh3l_fakes_13TeV_drllmin3l52 = new TH1D("new_histo_group_Higgs_wh3l_fakes_13TeV_drllmin3l52","histo_H_htt",3,0,4);
   new_histo_group_Higgs_wh3l_fakes_13TeV_drllmin3l52->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_fakes_13TeV_drllmin3l52->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_fakes_13TeV_drllmin3l52->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_fakes_13TeV_drllmin3l52->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_fakes_13TeV_drllmin3l52->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_fakes_13TeV_drllmin3l52->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_fakes_13TeV_drllmin3l52->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_fakes_13TeV_drllmin3l52->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_fakes_13TeV_drllmin3l52->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_fakes_13TeV_drllmin3l52->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_fakes_13TeV_drllmin3l52->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_fakes_13TeV_drllmin3l52->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_fakes_13TeV_drllmin3l52->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_fakes_13TeV_drllmin3l52->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_fakes_13TeV_drllmin3l52->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_fakes_13TeV_drllmin3l->Add(new_histo_group_Higgs_wh3l_fakes_13TeV_drllmin3l,"");
   thsBackground_grouped_wh3l_fakes_13TeV_drllmin3l->Draw("hist same");
   
   thsSignal_grouped_wh3l_fakes_13TeV_drllmin3l = new THStack();
   thsSignal_grouped_wh3l_fakes_13TeV_drllmin3l->SetName("thsSignal_grouped_wh3l_fakes_13TeV_drllmin3l");
   thsSignal_grouped_wh3l_fakes_13TeV_drllmin3l->SetTitle("thsSignal_grouped_wh3l_fakes_13TeV_drllmin3l");
   
   TH1F *thsSignal_grouped_wh3l_fakes_13TeV_drllmin3l_stack_12 = new TH1F("thsSignal_grouped_wh3l_fakes_13TeV_drllmin3l_stack_12","thsSignal_grouped_wh3l_fakes_13TeV_drllmin3l",3,0,4);
   thsSignal_grouped_wh3l_fakes_13TeV_drllmin3l_stack_12->SetMinimum(0);
   thsSignal_grouped_wh3l_fakes_13TeV_drllmin3l_stack_12->SetMaximum(0);
   thsSignal_grouped_wh3l_fakes_13TeV_drllmin3l_stack_12->SetDirectory(0);
   thsSignal_grouped_wh3l_fakes_13TeV_drllmin3l_stack_12->SetStats(0);
   thsSignal_grouped_wh3l_fakes_13TeV_drllmin3l_stack_12->SetLineStyle(0);
   thsSignal_grouped_wh3l_fakes_13TeV_drllmin3l_stack_12->SetMarkerStyle(20);
   thsSignal_grouped_wh3l_fakes_13TeV_drllmin3l_stack_12->GetXaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_fakes_13TeV_drllmin3l_stack_12->GetXaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_fakes_13TeV_drllmin3l_stack_12->GetXaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_fakes_13TeV_drllmin3l_stack_12->GetXaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_fakes_13TeV_drllmin3l_stack_12->GetXaxis()->SetTitleOffset(0.9);
   thsSignal_grouped_wh3l_fakes_13TeV_drllmin3l_stack_12->GetXaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_fakes_13TeV_drllmin3l_stack_12->GetYaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_fakes_13TeV_drllmin3l_stack_12->GetYaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_fakes_13TeV_drllmin3l_stack_12->GetYaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_fakes_13TeV_drllmin3l_stack_12->GetYaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_fakes_13TeV_drllmin3l_stack_12->GetYaxis()->SetTitleOffset(1.25);
   thsSignal_grouped_wh3l_fakes_13TeV_drllmin3l_stack_12->GetYaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_fakes_13TeV_drllmin3l_stack_12->GetZaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_fakes_13TeV_drllmin3l_stack_12->GetZaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_fakes_13TeV_drllmin3l_stack_12->GetZaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_fakes_13TeV_drllmin3l_stack_12->GetZaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_fakes_13TeV_drllmin3l_stack_12->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_fakes_13TeV_drllmin3l->SetHistogram(thsSignal_grouped_wh3l_fakes_13TeV_drllmin3l_stack_12);
   
   
   TH1D *new_histo_group_Higgs_wh3l_fakes_13TeV_drllmin3l53 = new TH1D("new_histo_group_Higgs_wh3l_fakes_13TeV_drllmin3l53","histo_H_htt",3,0,4);
   new_histo_group_Higgs_wh3l_fakes_13TeV_drllmin3l53->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_fakes_13TeV_drllmin3l53->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_fakes_13TeV_drllmin3l53->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_fakes_13TeV_drllmin3l53->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_fakes_13TeV_drllmin3l53->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_fakes_13TeV_drllmin3l53->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_fakes_13TeV_drllmin3l53->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_fakes_13TeV_drllmin3l53->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_fakes_13TeV_drllmin3l53->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_fakes_13TeV_drllmin3l53->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_fakes_13TeV_drllmin3l53->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_fakes_13TeV_drllmin3l53->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_fakes_13TeV_drllmin3l53->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_fakes_13TeV_drllmin3l53->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_fakes_13TeV_drllmin3l53->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_fakes_13TeV_drllmin3l->Add(new_histo_group_Higgs_wh3l_fakes_13TeV_drllmin3l,"");
   thsSignal_grouped_wh3l_fakes_13TeV_drllmin3l->Draw("hist same noclear");
   
   Double_t _fx3011[3] = {
   0.6666667,
   2,
   3.333333};
   Double_t _fy3011[3] = {
   0,
   0,
   0};
   Double_t _felx3011[3] = {
   0.6666667,
   0.6666667,
   0.6666667};
   Double_t _fely3011[3] = {
   0,
   0,
   0};
   Double_t _fehx3011[3] = {
   0.6666667,
   0.6666667,
   0.6666667};
   Double_t _fehy3011[3] = {
   0,
   0,
   0};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(3,_fx3011,_fy3011,_felx3011,_fehx3011,_fely3011,_fehy3011);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(12);
   grae->SetFillStyle(3004);
   grae->SetLineColor(12);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3011 = new TH1F("Graph_Graph3011","",100,0,4.4);
   Graph_Graph3011->SetMinimum(0);
   Graph_Graph3011->SetMaximum(1.1);
   Graph_Graph3011->SetDirectory(0);
   Graph_Graph3011->SetStats(0);
   Graph_Graph3011->SetLineStyle(0);
   Graph_Graph3011->SetMarkerStyle(20);
   Graph_Graph3011->GetXaxis()->SetLabelFont(42);
   Graph_Graph3011->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3011->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3011->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3011->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3011->GetXaxis()->SetTitleFont(42);
   Graph_Graph3011->GetYaxis()->SetLabelFont(42);
   Graph_Graph3011->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3011->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3011->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3011->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3011->GetYaxis()->SetTitleFont(42);
   Graph_Graph3011->GetZaxis()->SetLabelFont(42);
   Graph_Graph3011->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3011->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3011->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3011->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3011);
   
   grae->Draw("2");
   
   Double_t _fx3012[3] = {
   0.6666667,
   2,
   3.333333};
   Double_t _fy3012[3] = {
   0,
   0,
   0};
   Double_t _felx3012[3] = {
   0.6666667,
   0.6666667,
   0.6666667};
   Double_t _fely3012[3] = {
   0,
   0,
   0};
   Double_t _fehx3012[3] = {
   0.6666667,
   0.6666667,
   0.6666667};
   Double_t _fehy3012[3] = {
   1.147908,
   1.147908,
   1.147908};
   grae = new TGraphAsymmErrors(3,_fx3012,_fy3012,_felx3012,_fehx3012,_fely3012,_fehy3012);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(1);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3012 = new TH1F("Graph_Graph3012","",100,0,4.4);
   Graph_Graph3012->SetMinimum(0);
   Graph_Graph3012->SetMaximum(1.262698);
   Graph_Graph3012->SetDirectory(0);
   Graph_Graph3012->SetStats(0);
   Graph_Graph3012->SetLineStyle(0);
   Graph_Graph3012->SetMarkerStyle(20);
   Graph_Graph3012->GetXaxis()->SetLabelFont(42);
   Graph_Graph3012->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3012->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3012->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3012->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3012->GetXaxis()->SetTitleFont(42);
   Graph_Graph3012->GetYaxis()->SetLabelFont(42);
   Graph_Graph3012->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3012->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3012->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3012->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3012->GetYaxis()->SetTitleFont(42);
   Graph_Graph3012->GetZaxis()->SetLabelFont(42);
   Graph_Graph3012->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3012->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3012->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3012->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3012);
   
   grae->Draw("p0");
   
   TLegend *leg = new TLegend(0.2,0.7,0.8,0.9,NULL,"brNDC");
   leg->SetTextFont(62);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("new_histo_group_Fake_wh3l_fakes_13TeV_drllmin3l","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_fakes_13TeV_drllmin3l","WW","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_fakes_13TeV_drllmin3l","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_fakes_13TeV_drllmin3l","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_fakes_13TeV_drllmin3l","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_fakes_13TeV_drllmin3l","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_fakes_13TeV_drllmin3l","Data","EPL");
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
   entry=leg->AddEntry("new_histo_group_Fake_wh3l_fakes_13TeV_drllmin3l","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_fakes_13TeV_drllmin3l","WW","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_fakes_13TeV_drllmin3l","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_fakes_13TeV_drllmin3l","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_fakes_13TeV_drllmin3l","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_fakes_13TeV_drllmin3l","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_fakes_13TeV_drllmin3l","Data","EPL");
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
   
   TH1F *hframe_copy54 = new TH1F("hframe_copy54","",1000,0,4);
   hframe_copy54->SetMinimum(0);
   hframe_copy54->SetMaximum(0);
   hframe_copy54->SetDirectory(0);
   hframe_copy54->SetStats(0);
   hframe_copy54->SetLineStyle(0);
   hframe_copy54->SetMarkerStyle(20);
   hframe_copy54->GetXaxis()->SetTitle("min #Delta Rm_{ll} [GeV]");
   hframe_copy54->GetXaxis()->SetNdivisions(506);
   hframe_copy54->GetXaxis()->SetLabelFont(42);
   hframe_copy54->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy54->GetXaxis()->SetLabelSize(0.05);
   hframe_copy54->GetXaxis()->SetTitleSize(0.06);
   hframe_copy54->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy54->GetXaxis()->SetTitleFont(42);
   hframe_copy54->GetYaxis()->SetTitle("Events");
   hframe_copy54->GetYaxis()->SetLabelFont(42);
   hframe_copy54->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy54->GetYaxis()->SetLabelSize(0.05);
   hframe_copy54->GetYaxis()->SetTitleSize(0.06);
   hframe_copy54->GetYaxis()->SetTitleOffset(1.25);
   hframe_copy54->GetYaxis()->SetTitleFont(42);
   hframe_copy54->GetZaxis()->SetLabelFont(42);
   hframe_copy54->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy54->GetZaxis()->SetLabelSize(0.05);
   hframe_copy54->GetZaxis()->SetTitleSize(0.06);
   hframe_copy54->GetZaxis()->SetTitleFont(42);
   hframe_copy54->Draw("sameaxis");
   ccwh3l_fakes_13TeV_drllmin3l->Modified();
   ccwh3l_fakes_13TeV_drllmin3l->cd();
   ccwh3l_fakes_13TeV_drllmin3l->SetSelected(ccwh3l_fakes_13TeV_drllmin3l);
}
