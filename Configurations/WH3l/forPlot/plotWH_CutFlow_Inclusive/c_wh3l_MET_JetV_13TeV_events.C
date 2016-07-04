void c_wh3l_MET_JetV_13TeV_events()
{
//=========Macro generated from canvas: ccwh3l_MET_JetV_13TeV_events/cc
//=========  (Sun Jul  3 16:19:01 2016) by ROOT version6.02/13
   TCanvas *ccwh3l_MET_JetV_13TeV_events = new TCanvas("ccwh3l_MET_JetV_13TeV_events", "cc",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   ccwh3l_MET_JetV_13TeV_events->SetHighLightColor(2);
   ccwh3l_MET_JetV_13TeV_events->Range(-0.4,-62.34245,2.1,417.2149);
   ccwh3l_MET_JetV_13TeV_events->SetFillColor(0);
   ccwh3l_MET_JetV_13TeV_events->SetBorderMode(0);
   ccwh3l_MET_JetV_13TeV_events->SetBorderSize(2);
   ccwh3l_MET_JetV_13TeV_events->SetTickx(1);
   ccwh3l_MET_JetV_13TeV_events->SetTicky(1);
   ccwh3l_MET_JetV_13TeV_events->SetLeftMargin(0.16);
   ccwh3l_MET_JetV_13TeV_events->SetRightMargin(0.04);
   ccwh3l_MET_JetV_13TeV_events->SetTopMargin(0.05);
   ccwh3l_MET_JetV_13TeV_events->SetBottomMargin(0.13);
   ccwh3l_MET_JetV_13TeV_events->SetFrameFillStyle(0);
   ccwh3l_MET_JetV_13TeV_events->SetFrameBorderMode(0);
   ccwh3l_MET_JetV_13TeV_events->SetFrameFillStyle(0);
   ccwh3l_MET_JetV_13TeV_events->SetFrameBorderMode(0);
   
   TH1F *hframe81 = new TH1F("hframe81","",1000,0,2);
   hframe81->SetMinimum(0);
   hframe81->SetMaximum(393.237);
   hframe81->SetDirectory(0);
   hframe81->SetStats(0);
   hframe81->SetLineStyle(0);
   hframe81->SetMarkerStyle(20);
   hframe81->GetXaxis()->SetTitle("events");
   hframe81->GetXaxis()->SetNdivisions(506);
   hframe81->GetXaxis()->SetLabelFont(42);
   hframe81->GetXaxis()->SetLabelOffset(0.007);
   hframe81->GetXaxis()->SetLabelSize(0.05);
   hframe81->GetXaxis()->SetTitleSize(0.06);
   hframe81->GetXaxis()->SetTitleOffset(0.9);
   hframe81->GetXaxis()->SetTitleFont(42);
   hframe81->GetYaxis()->SetTitle("Events");
   hframe81->GetYaxis()->SetLabelFont(42);
   hframe81->GetYaxis()->SetLabelOffset(0.007);
   hframe81->GetYaxis()->SetLabelSize(0.05);
   hframe81->GetYaxis()->SetTitleSize(0.06);
   hframe81->GetYaxis()->SetTitleOffset(1.25);
   hframe81->GetYaxis()->SetTitleFont(42);
   hframe81->GetZaxis()->SetLabelFont(42);
   hframe81->GetZaxis()->SetLabelOffset(0.007);
   hframe81->GetZaxis()->SetLabelSize(0.05);
   hframe81->GetZaxis()->SetTitleSize(0.06);
   hframe81->GetZaxis()->SetTitleFont(42);
   hframe81->Draw(" ");
   
   THStack *thsBackground_grouped_wh3l_MET_JetV_13TeV_events = new THStack();
   thsBackground_grouped_wh3l_MET_JetV_13TeV_events->SetName("thsBackground_grouped_wh3l_MET_JetV_13TeV_events");
   thsBackground_grouped_wh3l_MET_JetV_13TeV_events->SetTitle("thsBackground_grouped_wh3l_MET_JetV_13TeV_events");
   
   TH1F *thsBackground_grouped_wh3l_MET_JetV_13TeV_events_stack_17 = new TH1F("thsBackground_grouped_wh3l_MET_JetV_13TeV_events_stack_17","thsBackground_grouped_wh3l_MET_JetV_13TeV_events",1,0,2);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_events_stack_17->SetMinimum(0);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_events_stack_17->SetMaximum(165.1596);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_events_stack_17->SetDirectory(0);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_events_stack_17->SetStats(0);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_events_stack_17->SetLineStyle(0);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_events_stack_17->SetMarkerStyle(20);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_events_stack_17->GetXaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_events_stack_17->GetXaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_events_stack_17->GetXaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_events_stack_17->GetXaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_events_stack_17->GetXaxis()->SetTitleOffset(0.9);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_events_stack_17->GetXaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_events_stack_17->GetYaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_events_stack_17->GetYaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_events_stack_17->GetYaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_events_stack_17->GetYaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_events_stack_17->GetYaxis()->SetTitleOffset(1.25);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_events_stack_17->GetYaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_events_stack_17->GetZaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_events_stack_17->GetZaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_events_stack_17->GetZaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_events_stack_17->GetZaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_events_stack_17->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_events->SetHistogram(thsBackground_grouped_wh3l_MET_JetV_13TeV_events_stack_17);
   
   
   TH1D *new_histo_group_Fake_wh3l_MET_JetV_13TeV_events82 = new TH1D("new_histo_group_Fake_wh3l_MET_JetV_13TeV_events82","histo_Fake",1,0,2);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_events82->SetBinContent(1,21.17353);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_events82->SetBinError(1,4.240337);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_events82->SetEntries(453);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_events82->SetFillColor(ci);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_events82->SetFillStyle(3001);

   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_events82->SetLineColor(ci);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_events82->GetXaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_events82->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_events82->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_events82->GetXaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_events82->GetYaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_events82->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_events82->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_events82->GetYaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_events82->GetZaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_events82->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_events82->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_events82->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_events->Add(new_histo_group_Fake_wh3l_MET_JetV_13TeV_events,"");
   
   TH1D *new_histo_group_WW_wh3l_MET_JetV_13TeV_events83 = new TH1D("new_histo_group_WW_wh3l_MET_JetV_13TeV_events83","histo_WW",1,0,2);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_events83->SetBinContent(1,0.1640967);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_events83->SetBinError(1,0.05013797);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_events83->SetEntries(11);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_MET_JetV_13TeV_events83->SetFillColor(ci);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_events83->SetFillStyle(3001);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_MET_JetV_13TeV_events83->SetLineColor(ci);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_events83->GetXaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_events83->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_events83->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_events83->GetXaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_events83->GetYaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_events83->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_events83->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_events83->GetYaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_events83->GetZaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_events83->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_events83->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_events83->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_events->Add(new_histo_group_WW_wh3l_MET_JetV_13TeV_events,"");
   
   TH1D *new_histo_group_VVV_wh3l_MET_JetV_13TeV_events84 = new TH1D("new_histo_group_VVV_wh3l_MET_JetV_13TeV_events84","histo_VVV",1,0,2);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_events84->SetBinContent(1,1.011159);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_events84->SetBinError(1,0.04702221);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_events84->SetEntries(806);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_events84->SetFillColor(ci);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_events84->SetFillStyle(3001);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_events84->SetLineColor(ci);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_events84->GetXaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_events84->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_events84->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_events84->GetXaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_events84->GetYaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_events84->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_events84->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_events84->GetYaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_events84->GetZaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_events84->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_events84->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_events84->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_events->Add(new_histo_group_VVV_wh3l_MET_JetV_13TeV_events,"");
   
   TH1D *new_histo_group_Vg_wh3l_MET_JetV_13TeV_events85 = new TH1D("new_histo_group_Vg_wh3l_MET_JetV_13TeV_events85","histo_Vg",1,0,2);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_events85->SetBinContent(1,7.741773);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_events85->SetBinError(1,0.9827464);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_events85->SetEntries(106);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_events85->SetFillColor(ci);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_events85->SetFillStyle(3001);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_events85->SetLineColor(ci);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_events85->GetXaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_events85->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_events85->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_events85->GetXaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_events85->GetYaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_events85->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_events85->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_events85->GetYaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_events85->GetZaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_events85->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_events85->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_events85->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_events->Add(new_histo_group_Vg_wh3l_MET_JetV_13TeV_events,"");
   
   TH1D *new_histo_group_ZZ_wh3l_MET_JetV_13TeV_events86 = new TH1D("new_histo_group_ZZ_wh3l_MET_JetV_13TeV_events86","histo_ZZ",1,0,2);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_events86->SetBinContent(1,7.428847);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_events86->SetBinError(1,0.5574607);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_events86->SetEntries(200);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_events86->SetFillColor(ci);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_events86->SetFillStyle(3001);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_events86->SetLineColor(ci);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_events86->GetXaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_events86->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_events86->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_events86->GetXaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_events86->GetYaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_events86->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_events86->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_events86->GetYaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_events86->GetZaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_events86->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_events86->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_events86->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_events->Add(new_histo_group_ZZ_wh3l_MET_JetV_13TeV_events,"");
   
   TH1D *new_histo_group_WZ_wh3l_MET_JetV_13TeV_events87 = new TH1D("new_histo_group_WZ_wh3l_MET_JetV_13TeV_events87","histo_WZ",1,0,2);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_events87->SetBinContent(1,118.0659);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_events87->SetBinError(1,0.801063);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_events87->SetEntries(24086);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_events87->SetFillColor(ci);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_events87->SetFillStyle(3001);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_events87->SetLineColor(ci);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_events87->GetXaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_events87->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_events87->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_events87->GetXaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_events87->GetYaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_events87->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_events87->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_events87->GetYaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_events87->GetZaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_events87->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_events87->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_events87->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_events->Add(new_histo_group_WZ_wh3l_MET_JetV_13TeV_events,"");
   
   TH1D *new_histo_group_Higgs_wh3l_MET_JetV_13TeV_events88 = new TH1D("new_histo_group_Higgs_wh3l_MET_JetV_13TeV_events88","histo_H_htt",1,0,2);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_events88->SetBinContent(1,1.709502);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_events88->SetBinError(1,0.04479803);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_events88->SetEntries(2609);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_events88->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_events88->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_events88->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_events88->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_events88->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_events88->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_events88->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_events88->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_events88->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_events88->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_events88->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_events88->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_events88->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_events88->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_events88->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_events->Add(new_histo_group_Higgs_wh3l_MET_JetV_13TeV_events,"");
   thsBackground_grouped_wh3l_MET_JetV_13TeV_events->Draw("hist same");
   
   thsSignal_grouped_wh3l_MET_JetV_13TeV_events = new THStack();
   thsSignal_grouped_wh3l_MET_JetV_13TeV_events->SetName("thsSignal_grouped_wh3l_MET_JetV_13TeV_events");
   thsSignal_grouped_wh3l_MET_JetV_13TeV_events->SetTitle("thsSignal_grouped_wh3l_MET_JetV_13TeV_events");
   
   TH1F *thsSignal_grouped_wh3l_MET_JetV_13TeV_events_stack_18 = new TH1F("thsSignal_grouped_wh3l_MET_JetV_13TeV_events_stack_18","thsSignal_grouped_wh3l_MET_JetV_13TeV_events",1,0,2);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_events_stack_18->SetMinimum(0);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_events_stack_18->SetMaximum(1.842015);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_events_stack_18->SetDirectory(0);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_events_stack_18->SetStats(0);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_events_stack_18->SetLineStyle(0);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_events_stack_18->SetMarkerStyle(20);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_events_stack_18->GetXaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_events_stack_18->GetXaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_events_stack_18->GetXaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_events_stack_18->GetXaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_events_stack_18->GetXaxis()->SetTitleOffset(0.9);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_events_stack_18->GetXaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_events_stack_18->GetYaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_events_stack_18->GetYaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_events_stack_18->GetYaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_events_stack_18->GetYaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_events_stack_18->GetYaxis()->SetTitleOffset(1.25);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_events_stack_18->GetYaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_events_stack_18->GetZaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_events_stack_18->GetZaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_events_stack_18->GetZaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_events_stack_18->GetZaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_events_stack_18->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_events->SetHistogram(thsSignal_grouped_wh3l_MET_JetV_13TeV_events_stack_18);
   
   
   TH1D *new_histo_group_Higgs_wh3l_MET_JetV_13TeV_events89 = new TH1D("new_histo_group_Higgs_wh3l_MET_JetV_13TeV_events89","histo_H_htt",1,0,2);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_events89->SetBinContent(1,1.709502);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_events89->SetBinError(1,0.04479803);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_events89->SetEntries(2609);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_events89->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_events89->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_events89->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_events89->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_events89->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_events89->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_events89->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_events89->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_events89->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_events89->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_events89->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_events89->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_events89->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_events89->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_events89->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_events->Add(new_histo_group_Higgs_wh3l_MET_JetV_13TeV_events,"");
   thsSignal_grouped_wh3l_MET_JetV_13TeV_events->Draw("hist same noclear");
   
   Double_t _fx3017[1] = {
   1};
   Double_t _fy3017[1] = {
   155.5853};
   Double_t _felx3017[1] = {
   1};
   Double_t _fely3017[1] = {
   10.54346};
   Double_t _fehx3017[1] = {
   1};
   Double_t _fehy3017[1] = {
   10.50599};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(1,_fx3017,_fy3017,_felx3017,_fehx3017,_fely3017,_fehy3017);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(12);
   grae->SetFillStyle(3004);
   grae->SetLineColor(12);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3017 = new TH1F("Graph_Graph3017","",100,0,2.2);
   Graph_Graph3017->SetMinimum(142.9369);
   Graph_Graph3017->SetMaximum(168.1962);
   Graph_Graph3017->SetDirectory(0);
   Graph_Graph3017->SetStats(0);
   Graph_Graph3017->SetLineStyle(0);
   Graph_Graph3017->SetMarkerStyle(20);
   Graph_Graph3017->GetXaxis()->SetLabelFont(42);
   Graph_Graph3017->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3017->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3017->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3017->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3017->GetXaxis()->SetTitleFont(42);
   Graph_Graph3017->GetYaxis()->SetLabelFont(42);
   Graph_Graph3017->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3017->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3017->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3017->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3017->GetYaxis()->SetTitleFont(42);
   Graph_Graph3017->GetZaxis()->SetLabelFont(42);
   Graph_Graph3017->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3017->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3017->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3017->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3017);
   
   grae->Draw("2");
   
   Double_t _fx3018[1] = {
   1};
   Double_t _fy3018[1] = {
   0};
   Double_t _felx3018[1] = {
   1};
   Double_t _fely3018[1] = {
   0};
   Double_t _fehx3018[1] = {
   1};
   Double_t _fehy3018[1] = {
   1.147908};
   grae = new TGraphAsymmErrors(1,_fx3018,_fy3018,_felx3018,_fehx3018,_fely3018,_fehy3018);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(1);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3018 = new TH1F("Graph_Graph3018","",100,0,2.2);
   Graph_Graph3018->SetMinimum(0);
   Graph_Graph3018->SetMaximum(1.262698);
   Graph_Graph3018->SetDirectory(0);
   Graph_Graph3018->SetStats(0);
   Graph_Graph3018->SetLineStyle(0);
   Graph_Graph3018->SetMarkerStyle(20);
   Graph_Graph3018->GetXaxis()->SetLabelFont(42);
   Graph_Graph3018->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3018->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3018->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3018->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3018->GetXaxis()->SetTitleFont(42);
   Graph_Graph3018->GetYaxis()->SetLabelFont(42);
   Graph_Graph3018->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3018->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3018->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3018->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3018->GetYaxis()->SetTitleFont(42);
   Graph_Graph3018->GetZaxis()->SetLabelFont(42);
   Graph_Graph3018->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3018->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3018->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3018->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3018);
   
   grae->Draw("p0");
   
   TLegend *leg = new TLegend(0.2,0.7,0.8,0.9,NULL,"brNDC");
   leg->SetTextFont(62);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("new_histo_group_Fake_wh3l_MET_JetV_13TeV_events","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_MET_JetV_13TeV_events","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_MET_JetV_13TeV_events","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_MET_JetV_13TeV_events","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_MET_JetV_13TeV_events","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_MET_JetV_13TeV_events","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_MET_JetV_13TeV_events","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_MET_JetV_13TeV_events","Data","EPL");
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
   entry=leg->AddEntry("new_histo_group_Fake_wh3l_MET_JetV_13TeV_events","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_MET_JetV_13TeV_events","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_MET_JetV_13TeV_events","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_MET_JetV_13TeV_events","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_MET_JetV_13TeV_events","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_MET_JetV_13TeV_events","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_MET_JetV_13TeV_events","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_MET_JetV_13TeV_events","Data","EPL");
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
   
   TH1F *hframe_copy90 = new TH1F("hframe_copy90","",1000,0,2);
   hframe_copy90->SetMinimum(0);
   hframe_copy90->SetMaximum(393.237);
   hframe_copy90->SetDirectory(0);
   hframe_copy90->SetStats(0);
   hframe_copy90->SetLineStyle(0);
   hframe_copy90->SetMarkerStyle(20);
   hframe_copy90->GetXaxis()->SetTitle("events");
   hframe_copy90->GetXaxis()->SetNdivisions(506);
   hframe_copy90->GetXaxis()->SetLabelFont(42);
   hframe_copy90->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy90->GetXaxis()->SetLabelSize(0.05);
   hframe_copy90->GetXaxis()->SetTitleSize(0.06);
   hframe_copy90->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy90->GetXaxis()->SetTitleFont(42);
   hframe_copy90->GetYaxis()->SetTitle("Events");
   hframe_copy90->GetYaxis()->SetLabelFont(42);
   hframe_copy90->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy90->GetYaxis()->SetLabelSize(0.05);
   hframe_copy90->GetYaxis()->SetTitleSize(0.06);
   hframe_copy90->GetYaxis()->SetTitleOffset(1.25);
   hframe_copy90->GetYaxis()->SetTitleFont(42);
   hframe_copy90->GetZaxis()->SetLabelFont(42);
   hframe_copy90->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy90->GetZaxis()->SetLabelSize(0.05);
   hframe_copy90->GetZaxis()->SetTitleSize(0.06);
   hframe_copy90->GetZaxis()->SetTitleFont(42);
   hframe_copy90->Draw("sameaxis");
   ccwh3l_MET_JetV_13TeV_events->Modified();
   ccwh3l_MET_JetV_13TeV_events->cd();
   ccwh3l_MET_JetV_13TeV_events->SetSelected(ccwh3l_MET_JetV_13TeV_events);
}
