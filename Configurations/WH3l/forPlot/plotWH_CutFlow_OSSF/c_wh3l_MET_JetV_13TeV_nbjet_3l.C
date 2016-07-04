void c_wh3l_MET_JetV_13TeV_nbjet_3l()
{
//=========Macro generated from canvas: ccwh3l_MET_JetV_13TeV_nbjet_3l/cc
//=========  (Sat Jul  2 21:43:29 2016) by ROOT version6.02/13
   TCanvas *ccwh3l_MET_JetV_13TeV_nbjet_3l = new TCanvas("ccwh3l_MET_JetV_13TeV_nbjet_3l", "cc",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   ccwh3l_MET_JetV_13TeV_nbjet_3l->SetHighLightColor(2);
   ccwh3l_MET_JetV_13TeV_nbjet_3l->Range(-1,-80.76807,5.25,540.5248);
   ccwh3l_MET_JetV_13TeV_nbjet_3l->SetFillColor(0);
   ccwh3l_MET_JetV_13TeV_nbjet_3l->SetBorderMode(0);
   ccwh3l_MET_JetV_13TeV_nbjet_3l->SetBorderSize(2);
   ccwh3l_MET_JetV_13TeV_nbjet_3l->SetTickx(1);
   ccwh3l_MET_JetV_13TeV_nbjet_3l->SetTicky(1);
   ccwh3l_MET_JetV_13TeV_nbjet_3l->SetLeftMargin(0.16);
   ccwh3l_MET_JetV_13TeV_nbjet_3l->SetRightMargin(0.04);
   ccwh3l_MET_JetV_13TeV_nbjet_3l->SetTopMargin(0.05);
   ccwh3l_MET_JetV_13TeV_nbjet_3l->SetBottomMargin(0.13);
   ccwh3l_MET_JetV_13TeV_nbjet_3l->SetFrameFillStyle(0);
   ccwh3l_MET_JetV_13TeV_nbjet_3l->SetFrameBorderMode(0);
   ccwh3l_MET_JetV_13TeV_nbjet_3l->SetFrameFillStyle(0);
   ccwh3l_MET_JetV_13TeV_nbjet_3l->SetFrameBorderMode(0);
   
   TH1F *hframe81 = new TH1F("hframe81","",1000,0,5);
   hframe81->SetMinimum(0);
   hframe81->SetMaximum(509.4601);
   hframe81->SetDirectory(0);
   hframe81->SetStats(0);
   hframe81->SetLineStyle(0);
   hframe81->SetMarkerStyle(20);
   hframe81->GetXaxis()->SetTitle("N_bJets");
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
   
   THStack *thsBackground_grouped_wh3l_MET_JetV_13TeV_nbjet_3l = new THStack();
   thsBackground_grouped_wh3l_MET_JetV_13TeV_nbjet_3l->SetName("thsBackground_grouped_wh3l_MET_JetV_13TeV_nbjet_3l");
   thsBackground_grouped_wh3l_MET_JetV_13TeV_nbjet_3l->SetTitle("thsBackground_grouped_wh3l_MET_JetV_13TeV_nbjet_3l");
   
   TH1F *thsBackground_grouped_wh3l_MET_JetV_13TeV_nbjet_3l_stack_17 = new TH1F("thsBackground_grouped_wh3l_MET_JetV_13TeV_nbjet_3l_stack_17","thsBackground_grouped_wh3l_MET_JetV_13TeV_nbjet_3l",5,0,5);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_nbjet_3l_stack_17->SetMinimum(0);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_nbjet_3l_stack_17->SetMaximum(161.0368);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_nbjet_3l_stack_17->SetDirectory(0);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_nbjet_3l_stack_17->SetStats(0);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_nbjet_3l_stack_17->SetLineStyle(0);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_nbjet_3l_stack_17->SetMarkerStyle(20);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_nbjet_3l_stack_17->GetXaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_nbjet_3l_stack_17->GetXaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_nbjet_3l_stack_17->GetXaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_nbjet_3l_stack_17->GetXaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_nbjet_3l_stack_17->GetXaxis()->SetTitleOffset(0.9);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_nbjet_3l_stack_17->GetXaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_nbjet_3l_stack_17->GetYaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_nbjet_3l_stack_17->GetYaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_nbjet_3l_stack_17->GetYaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_nbjet_3l_stack_17->GetYaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_nbjet_3l_stack_17->GetYaxis()->SetTitleOffset(1.25);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_nbjet_3l_stack_17->GetYaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_nbjet_3l_stack_17->GetZaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_nbjet_3l_stack_17->GetZaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_nbjet_3l_stack_17->GetZaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_nbjet_3l_stack_17->GetZaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_nbjet_3l_stack_17->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_nbjet_3l->SetHistogram(thsBackground_grouped_wh3l_MET_JetV_13TeV_nbjet_3l_stack_17);
   
   
   TH1D *new_histo_group_Fake_wh3l_MET_JetV_13TeV_nbjet_3l82 = new TH1D("new_histo_group_Fake_wh3l_MET_JetV_13TeV_nbjet_3l82","histo_Fake",5,0,5);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_nbjet_3l82->SetBinContent(1,18.17825);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_nbjet_3l82->SetBinError(1,4.026972);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_nbjet_3l82->SetEntries(425);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_nbjet_3l82->SetFillColor(ci);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_nbjet_3l82->SetFillStyle(3001);

   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_nbjet_3l82->SetLineColor(ci);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_nbjet_3l82->GetXaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_nbjet_3l82->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_nbjet_3l82->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_nbjet_3l82->GetXaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_nbjet_3l82->GetYaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_nbjet_3l82->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_nbjet_3l82->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_nbjet_3l82->GetYaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_nbjet_3l82->GetZaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_nbjet_3l82->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_nbjet_3l82->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_nbjet_3l82->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_nbjet_3l->Add(new_histo_group_Fake_wh3l_MET_JetV_13TeV_nbjet_3l,"");
   
   TH1D *new_histo_group_WW_wh3l_MET_JetV_13TeV_nbjet_3l83 = new TH1D("new_histo_group_WW_wh3l_MET_JetV_13TeV_nbjet_3l83","histo_WW",5,0,5);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_nbjet_3l83->SetBinContent(1,0.1479726);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_nbjet_3l83->SetBinError(1,0.04747452);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_nbjet_3l83->SetEntries(10);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_MET_JetV_13TeV_nbjet_3l83->SetFillColor(ci);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_nbjet_3l83->SetFillStyle(3001);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_MET_JetV_13TeV_nbjet_3l83->SetLineColor(ci);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_nbjet_3l83->GetXaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_nbjet_3l83->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_nbjet_3l83->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_nbjet_3l83->GetXaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_nbjet_3l83->GetYaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_nbjet_3l83->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_nbjet_3l83->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_nbjet_3l83->GetYaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_nbjet_3l83->GetZaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_nbjet_3l83->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_nbjet_3l83->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_nbjet_3l83->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_nbjet_3l->Add(new_histo_group_WW_wh3l_MET_JetV_13TeV_nbjet_3l,"");
   
   TH1D *new_histo_group_VVV_wh3l_MET_JetV_13TeV_nbjet_3l84 = new TH1D("new_histo_group_VVV_wh3l_MET_JetV_13TeV_nbjet_3l84","histo_VVV",5,0,5);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_nbjet_3l84->SetBinContent(1,0.897712);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_nbjet_3l84->SetBinError(1,0.04361753);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_nbjet_3l84->SetEntries(739);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_nbjet_3l84->SetFillColor(ci);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_nbjet_3l84->SetFillStyle(3001);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_nbjet_3l84->SetLineColor(ci);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_nbjet_3l84->GetXaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_nbjet_3l84->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_nbjet_3l84->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_nbjet_3l84->GetXaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_nbjet_3l84->GetYaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_nbjet_3l84->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_nbjet_3l84->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_nbjet_3l84->GetYaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_nbjet_3l84->GetZaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_nbjet_3l84->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_nbjet_3l84->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_nbjet_3l84->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_nbjet_3l->Add(new_histo_group_VVV_wh3l_MET_JetV_13TeV_nbjet_3l,"");
   
   TH1D *new_histo_group_Vg_wh3l_MET_JetV_13TeV_nbjet_3l85 = new TH1D("new_histo_group_Vg_wh3l_MET_JetV_13TeV_nbjet_3l85","histo_Vg",5,0,5);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_nbjet_3l85->SetBinContent(1,7.741773);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_nbjet_3l85->SetBinError(1,0.9827464);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_nbjet_3l85->SetEntries(106);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_nbjet_3l85->SetFillColor(ci);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_nbjet_3l85->SetFillStyle(3001);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_nbjet_3l85->SetLineColor(ci);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_nbjet_3l85->GetXaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_nbjet_3l85->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_nbjet_3l85->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_nbjet_3l85->GetXaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_nbjet_3l85->GetYaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_nbjet_3l85->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_nbjet_3l85->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_nbjet_3l85->GetYaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_nbjet_3l85->GetZaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_nbjet_3l85->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_nbjet_3l85->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_nbjet_3l85->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_nbjet_3l->Add(new_histo_group_Vg_wh3l_MET_JetV_13TeV_nbjet_3l,"");
   
   TH1D *new_histo_group_ZZ_wh3l_MET_JetV_13TeV_nbjet_3l86 = new TH1D("new_histo_group_ZZ_wh3l_MET_JetV_13TeV_nbjet_3l86","histo_ZZ",5,0,5);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_nbjet_3l86->SetBinContent(1,7.350997);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_nbjet_3l86->SetBinError(1,0.5547102);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_nbjet_3l86->SetEntries(198);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_nbjet_3l86->SetFillColor(ci);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_nbjet_3l86->SetFillStyle(3001);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_nbjet_3l86->SetLineColor(ci);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_nbjet_3l86->GetXaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_nbjet_3l86->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_nbjet_3l86->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_nbjet_3l86->GetXaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_nbjet_3l86->GetYaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_nbjet_3l86->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_nbjet_3l86->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_nbjet_3l86->GetYaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_nbjet_3l86->GetZaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_nbjet_3l86->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_nbjet_3l86->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_nbjet_3l86->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_nbjet_3l->Add(new_histo_group_ZZ_wh3l_MET_JetV_13TeV_nbjet_3l,"");
   
   TH1D *new_histo_group_WZ_wh3l_MET_JetV_13TeV_nbjet_3l87 = new TH1D("new_histo_group_WZ_wh3l_MET_JetV_13TeV_nbjet_3l87","histo_WZ",5,0,5);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_nbjet_3l87->SetBinContent(1,117.5748);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_nbjet_3l87->SetBinError(1,0.7994261);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_nbjet_3l87->SetEntries(23985);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_nbjet_3l87->SetFillColor(ci);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_nbjet_3l87->SetFillStyle(3001);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_nbjet_3l87->SetLineColor(ci);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_nbjet_3l87->GetXaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_nbjet_3l87->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_nbjet_3l87->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_nbjet_3l87->GetXaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_nbjet_3l87->GetYaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_nbjet_3l87->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_nbjet_3l87->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_nbjet_3l87->GetYaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_nbjet_3l87->GetZaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_nbjet_3l87->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_nbjet_3l87->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_nbjet_3l87->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_nbjet_3l->Add(new_histo_group_WZ_wh3l_MET_JetV_13TeV_nbjet_3l,"");
   
   TH1D *new_histo_group_Higgs_wh3l_MET_JetV_13TeV_nbjet_3l88 = new TH1D("new_histo_group_Higgs_wh3l_MET_JetV_13TeV_nbjet_3l88","histo_H_htt",5,0,5);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_nbjet_3l88->SetBinContent(1,1.4769);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_nbjet_3l88->SetBinError(1,0.04180294);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_nbjet_3l88->SetEntries(2204);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_nbjet_3l88->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_nbjet_3l88->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_nbjet_3l88->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_nbjet_3l88->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_nbjet_3l88->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_nbjet_3l88->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_nbjet_3l88->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_nbjet_3l88->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_nbjet_3l88->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_nbjet_3l88->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_nbjet_3l88->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_nbjet_3l88->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_nbjet_3l88->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_nbjet_3l88->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_nbjet_3l88->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_nbjet_3l->Add(new_histo_group_Higgs_wh3l_MET_JetV_13TeV_nbjet_3l,"");
   thsBackground_grouped_wh3l_MET_JetV_13TeV_nbjet_3l->Draw("hist same");
   
   thsSignal_grouped_wh3l_MET_JetV_13TeV_nbjet_3l = new THStack();
   thsSignal_grouped_wh3l_MET_JetV_13TeV_nbjet_3l->SetName("thsSignal_grouped_wh3l_MET_JetV_13TeV_nbjet_3l");
   thsSignal_grouped_wh3l_MET_JetV_13TeV_nbjet_3l->SetTitle("thsSignal_grouped_wh3l_MET_JetV_13TeV_nbjet_3l");
   
   TH1F *thsSignal_grouped_wh3l_MET_JetV_13TeV_nbjet_3l_stack_18 = new TH1F("thsSignal_grouped_wh3l_MET_JetV_13TeV_nbjet_3l_stack_18","thsSignal_grouped_wh3l_MET_JetV_13TeV_nbjet_3l",5,0,5);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_nbjet_3l_stack_18->SetMinimum(0);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_nbjet_3l_stack_18->SetMaximum(1.594638);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_nbjet_3l_stack_18->SetDirectory(0);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_nbjet_3l_stack_18->SetStats(0);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_nbjet_3l_stack_18->SetLineStyle(0);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_nbjet_3l_stack_18->SetMarkerStyle(20);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_nbjet_3l_stack_18->GetXaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_nbjet_3l_stack_18->GetXaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_nbjet_3l_stack_18->GetXaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_nbjet_3l_stack_18->GetXaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_nbjet_3l_stack_18->GetXaxis()->SetTitleOffset(0.9);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_nbjet_3l_stack_18->GetXaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_nbjet_3l_stack_18->GetYaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_nbjet_3l_stack_18->GetYaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_nbjet_3l_stack_18->GetYaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_nbjet_3l_stack_18->GetYaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_nbjet_3l_stack_18->GetYaxis()->SetTitleOffset(1.25);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_nbjet_3l_stack_18->GetYaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_nbjet_3l_stack_18->GetZaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_nbjet_3l_stack_18->GetZaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_nbjet_3l_stack_18->GetZaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_nbjet_3l_stack_18->GetZaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_nbjet_3l_stack_18->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_nbjet_3l->SetHistogram(thsSignal_grouped_wh3l_MET_JetV_13TeV_nbjet_3l_stack_18);
   
   
   TH1D *new_histo_group_Higgs_wh3l_MET_JetV_13TeV_nbjet_3l89 = new TH1D("new_histo_group_Higgs_wh3l_MET_JetV_13TeV_nbjet_3l89","histo_H_htt",5,0,5);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_nbjet_3l89->SetBinContent(1,1.4769);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_nbjet_3l89->SetBinError(1,0.04180294);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_nbjet_3l89->SetEntries(2204);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_nbjet_3l89->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_nbjet_3l89->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_nbjet_3l89->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_nbjet_3l89->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_nbjet_3l89->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_nbjet_3l89->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_nbjet_3l89->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_nbjet_3l89->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_nbjet_3l89->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_nbjet_3l89->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_nbjet_3l89->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_nbjet_3l89->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_nbjet_3l89->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_nbjet_3l89->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_nbjet_3l89->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_nbjet_3l->Add(new_histo_group_Higgs_wh3l_MET_JetV_13TeV_nbjet_3l,"");
   thsSignal_grouped_wh3l_MET_JetV_13TeV_nbjet_3l->Draw("hist same noclear");
   
   Double_t _fx3017[5] = {
   0.5,
   1.5,
   2.5,
   3.5,
   4.5};
   Double_t _fy3017[5] = {
   151.8915,
   0,
   0,
   0,
   0};
   Double_t _felx3017[5] = {
   0.5,
   0.5,
   0.5,
   0.5,
   0.5};
   Double_t _fely3017[5] = {
   9.666344,
   0,
   0,
   0,
   0};
   Double_t _fehx3017[5] = {
   0.5,
   0.5,
   0.5,
   0.5,
   0.5};
   Double_t _fehy3017[5] = {
   9.626553,
   0,
   0,
   0,
   0};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(5,_fx3017,_fy3017,_felx3017,_fehx3017,_fely3017,_fehy3017);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(12);
   grae->SetFillStyle(3004);
   grae->SetLineColor(12);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3017 = new TH1F("Graph_Graph3017","",100,0,5.5);
   Graph_Graph3017->SetMinimum(0);
   Graph_Graph3017->SetMaximum(177.6699);
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
   
   Double_t _fx3018[5] = {
   0.5,
   1.5,
   2.5,
   3.5,
   4.5};
   Double_t _fy3018[5] = {
   190,
   0,
   0,
   0,
   0};
   Double_t _felx3018[5] = {
   0.5,
   0.5,
   0.5,
   0.5,
   0.5};
   Double_t _fely3018[5] = {
   13.7722,
   0,
   0,
   0,
   0};
   Double_t _fehx3018[5] = {
   0.5,
   0.5,
   0.5,
   0.5,
   0.5};
   Double_t _fehy3018[5] = {
   14.80857,
   1.147908,
   1.147908,
   1.147908,
   1.147908};
   grae = new TGraphAsymmErrors(5,_fx3018,_fy3018,_felx3018,_fehx3018,_fely3018,_fehy3018);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(1);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3018 = new TH1F("Graph_Graph3018","",100,0,5.5);
   Graph_Graph3018->SetMinimum(0);
   Graph_Graph3018->SetMaximum(225.2894);
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
   TLegendEntry *entry=leg->AddEntry("new_histo_group_Fake_wh3l_MET_JetV_13TeV_nbjet_3l","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_MET_JetV_13TeV_nbjet_3l","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_MET_JetV_13TeV_nbjet_3l","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_MET_JetV_13TeV_nbjet_3l","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_MET_JetV_13TeV_nbjet_3l","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_MET_JetV_13TeV_nbjet_3l","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_MET_JetV_13TeV_nbjet_3l","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_MET_JetV_13TeV_nbjet_3l","Data","EPL");
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
   entry=leg->AddEntry("new_histo_group_Fake_wh3l_MET_JetV_13TeV_nbjet_3l","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_MET_JetV_13TeV_nbjet_3l","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_MET_JetV_13TeV_nbjet_3l","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_MET_JetV_13TeV_nbjet_3l","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_MET_JetV_13TeV_nbjet_3l","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_MET_JetV_13TeV_nbjet_3l","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_MET_JetV_13TeV_nbjet_3l","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_MET_JetV_13TeV_nbjet_3l","Data","EPL");
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
   
   TH1F *hframe_copy90 = new TH1F("hframe_copy90","",1000,0,5);
   hframe_copy90->SetMinimum(0);
   hframe_copy90->SetMaximum(509.4601);
   hframe_copy90->SetDirectory(0);
   hframe_copy90->SetStats(0);
   hframe_copy90->SetLineStyle(0);
   hframe_copy90->SetMarkerStyle(20);
   hframe_copy90->GetXaxis()->SetTitle("N_bJets");
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
   ccwh3l_MET_JetV_13TeV_nbjet_3l->Modified();
   ccwh3l_MET_JetV_13TeV_nbjet_3l->cd();
   ccwh3l_MET_JetV_13TeV_nbjet_3l->SetSelected(ccwh3l_MET_JetV_13TeV_nbjet_3l);
}
