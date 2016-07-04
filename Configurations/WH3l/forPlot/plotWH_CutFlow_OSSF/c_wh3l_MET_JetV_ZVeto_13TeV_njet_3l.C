void c_wh3l_MET_JetV_ZVeto_13TeV_njet_3l()
{
//=========Macro generated from canvas: ccwh3l_MET_JetV_ZVeto_13TeV_njet_3l/cc
//=========  (Sat Jul  2 21:43:50 2016) by ROOT version6.02/13
   TCanvas *ccwh3l_MET_JetV_ZVeto_13TeV_njet_3l = new TCanvas("ccwh3l_MET_JetV_ZVeto_13TeV_njet_3l", "cc",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   ccwh3l_MET_JetV_ZVeto_13TeV_njet_3l->SetHighLightColor(2);
   ccwh3l_MET_JetV_ZVeto_13TeV_njet_3l->Range(-1.6,-11.89024,8.4,79.57317);
   ccwh3l_MET_JetV_ZVeto_13TeV_njet_3l->SetFillColor(0);
   ccwh3l_MET_JetV_ZVeto_13TeV_njet_3l->SetBorderMode(0);
   ccwh3l_MET_JetV_ZVeto_13TeV_njet_3l->SetBorderSize(2);
   ccwh3l_MET_JetV_ZVeto_13TeV_njet_3l->SetTickx(1);
   ccwh3l_MET_JetV_ZVeto_13TeV_njet_3l->SetTicky(1);
   ccwh3l_MET_JetV_ZVeto_13TeV_njet_3l->SetLeftMargin(0.16);
   ccwh3l_MET_JetV_ZVeto_13TeV_njet_3l->SetRightMargin(0.04);
   ccwh3l_MET_JetV_ZVeto_13TeV_njet_3l->SetTopMargin(0.05);
   ccwh3l_MET_JetV_ZVeto_13TeV_njet_3l->SetBottomMargin(0.13);
   ccwh3l_MET_JetV_ZVeto_13TeV_njet_3l->SetFrameFillStyle(0);
   ccwh3l_MET_JetV_ZVeto_13TeV_njet_3l->SetFrameBorderMode(0);
   ccwh3l_MET_JetV_ZVeto_13TeV_njet_3l->SetFrameFillStyle(0);
   ccwh3l_MET_JetV_ZVeto_13TeV_njet_3l->SetFrameBorderMode(0);
   
   TH1F *hframe391 = new TH1F("hframe391","",1000,0,8);
   hframe391->SetMinimum(0);
   hframe391->SetMaximum(75);
   hframe391->SetDirectory(0);
   hframe391->SetStats(0);
   hframe391->SetLineStyle(0);
   hframe391->SetMarkerStyle(20);
   hframe391->GetXaxis()->SetTitle("N_Jets");
   hframe391->GetXaxis()->SetNdivisions(506);
   hframe391->GetXaxis()->SetLabelFont(42);
   hframe391->GetXaxis()->SetLabelOffset(0.007);
   hframe391->GetXaxis()->SetLabelSize(0.05);
   hframe391->GetXaxis()->SetTitleSize(0.06);
   hframe391->GetXaxis()->SetTitleOffset(0.9);
   hframe391->GetXaxis()->SetTitleFont(42);
   hframe391->GetYaxis()->SetTitle("Events");
   hframe391->GetYaxis()->SetLabelFont(42);
   hframe391->GetYaxis()->SetLabelOffset(0.007);
   hframe391->GetYaxis()->SetLabelSize(0.05);
   hframe391->GetYaxis()->SetTitleSize(0.06);
   hframe391->GetYaxis()->SetTitleOffset(1.25);
   hframe391->GetYaxis()->SetTitleFont(42);
   hframe391->GetZaxis()->SetLabelFont(42);
   hframe391->GetZaxis()->SetLabelOffset(0.007);
   hframe391->GetZaxis()->SetLabelSize(0.05);
   hframe391->GetZaxis()->SetTitleSize(0.06);
   hframe391->GetZaxis()->SetTitleFont(42);
   hframe391->Draw(" ");
   
   THStack *thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_njet_3l = new THStack();
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_njet_3l->SetName("thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_njet_3l");
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_njet_3l->SetTitle("thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_njet_3l");
   
   TH1F *thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_njet_3l_stack_79 = new TH1F("thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_njet_3l_stack_79","thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_njet_3l",8,0,8);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_njet_3l_stack_79->SetMinimum(0);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_njet_3l_stack_79->SetMaximum(21.8877);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_njet_3l_stack_79->SetDirectory(0);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_njet_3l_stack_79->SetStats(0);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_njet_3l_stack_79->SetLineStyle(0);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_njet_3l_stack_79->SetMarkerStyle(20);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_njet_3l_stack_79->GetXaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_njet_3l_stack_79->GetXaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_njet_3l_stack_79->GetXaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_njet_3l_stack_79->GetXaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_njet_3l_stack_79->GetXaxis()->SetTitleOffset(0.9);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_njet_3l_stack_79->GetXaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_njet_3l_stack_79->GetYaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_njet_3l_stack_79->GetYaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_njet_3l_stack_79->GetYaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_njet_3l_stack_79->GetYaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_njet_3l_stack_79->GetYaxis()->SetTitleOffset(1.25);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_njet_3l_stack_79->GetYaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_njet_3l_stack_79->GetZaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_njet_3l_stack_79->GetZaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_njet_3l_stack_79->GetZaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_njet_3l_stack_79->GetZaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_njet_3l_stack_79->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_njet_3l->SetHistogram(thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_njet_3l_stack_79);
   
   
   TH1D *new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_njet_3l392 = new TH1D("new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_njet_3l392","histo_Fake",8,0,8);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_njet_3l392->SetBinContent(1,7.599876);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_njet_3l392->SetBinError(1,2.268032);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_njet_3l392->SetEntries(89);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_njet_3l392->SetFillColor(ci);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_njet_3l392->SetFillStyle(3001);

   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_njet_3l392->SetLineColor(ci);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_njet_3l392->GetXaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_njet_3l392->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_njet_3l392->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_njet_3l392->GetXaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_njet_3l392->GetYaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_njet_3l392->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_njet_3l392->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_njet_3l392->GetYaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_njet_3l392->GetZaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_njet_3l392->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_njet_3l392->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_njet_3l392->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_njet_3l->Add(new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_njet_3l,"");
   
   TH1D *new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_njet_3l393 = new TH1D("new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_njet_3l393","histo_WW",8,0,8);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_njet_3l393->SetBinContent(1,0.07257783);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_njet_3l393->SetBinError(1,0.03292453);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_njet_3l393->SetEntries(5);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_njet_3l393->SetFillColor(ci);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_njet_3l393->SetFillStyle(3001);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_njet_3l393->SetLineColor(ci);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_njet_3l393->GetXaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_njet_3l393->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_njet_3l393->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_njet_3l393->GetXaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_njet_3l393->GetYaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_njet_3l393->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_njet_3l393->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_njet_3l393->GetYaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_njet_3l393->GetZaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_njet_3l393->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_njet_3l393->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_njet_3l393->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_njet_3l->Add(new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_njet_3l,"");
   
   TH1D *new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_njet_3l394 = new TH1D("new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_njet_3l394","histo_VVV",8,0,8);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_njet_3l394->SetBinContent(1,0.3161408);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_njet_3l394->SetBinError(1,0.02838708);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_njet_3l394->SetEntries(183);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_njet_3l394->SetFillColor(ci);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_njet_3l394->SetFillStyle(3001);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_njet_3l394->SetLineColor(ci);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_njet_3l394->GetXaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_njet_3l394->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_njet_3l394->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_njet_3l394->GetXaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_njet_3l394->GetYaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_njet_3l394->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_njet_3l394->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_njet_3l394->GetYaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_njet_3l394->GetZaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_njet_3l394->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_njet_3l394->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_njet_3l394->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_njet_3l->Add(new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_njet_3l,"");
   
   TH1D *new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_njet_3l395 = new TH1D("new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_njet_3l395","histo_Vg",8,0,8);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_njet_3l395->SetBinContent(1,2.754018);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_njet_3l395->SetBinError(1,0.5797935);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_njet_3l395->SetEntries(43);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_njet_3l395->SetFillColor(ci);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_njet_3l395->SetFillStyle(3001);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_njet_3l395->SetLineColor(ci);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_njet_3l395->GetXaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_njet_3l395->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_njet_3l395->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_njet_3l395->GetXaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_njet_3l395->GetYaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_njet_3l395->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_njet_3l395->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_njet_3l395->GetYaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_njet_3l395->GetZaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_njet_3l395->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_njet_3l395->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_njet_3l395->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_njet_3l->Add(new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_njet_3l,"");
   
   TH1D *new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_njet_3l396 = new TH1D("new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_njet_3l396","histo_ZZ",8,0,8);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_njet_3l396->SetBinContent(1,0.5478704);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_njet_3l396->SetBinError(1,0.1468272);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_njet_3l396->SetEntries(16);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_njet_3l396->SetFillColor(ci);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_njet_3l396->SetFillStyle(3001);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_njet_3l396->SetLineColor(ci);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_njet_3l396->GetXaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_njet_3l396->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_njet_3l396->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_njet_3l396->GetXaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_njet_3l396->GetYaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_njet_3l396->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_njet_3l396->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_njet_3l396->GetYaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_njet_3l396->GetZaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_njet_3l396->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_njet_3l396->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_njet_3l396->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_njet_3l->Add(new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_njet_3l,"");
   
   TH1D *new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_njet_3l397 = new TH1D("new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_njet_3l397","histo_WZ",8,0,8);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_njet_3l397->SetBinContent(1,8.97157);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_njet_3l397->SetBinError(1,0.2207319);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_njet_3l397->SetEntries(1841);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_njet_3l397->SetFillColor(ci);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_njet_3l397->SetFillStyle(3001);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_njet_3l397->SetLineColor(ci);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_njet_3l397->GetXaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_njet_3l397->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_njet_3l397->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_njet_3l397->GetXaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_njet_3l397->GetYaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_njet_3l397->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_njet_3l397->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_njet_3l397->GetYaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_njet_3l397->GetZaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_njet_3l397->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_njet_3l397->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_njet_3l397->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_njet_3l->Add(new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_njet_3l,"");
   
   TH1D *new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_njet_3l398 = new TH1D("new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_njet_3l398","histo_H_htt",8,0,8);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_njet_3l398->SetBinContent(1,0.5833763);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_njet_3l398->SetBinError(1,0.02650363);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_njet_3l398->SetEntries(919);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_njet_3l398->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_njet_3l398->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_njet_3l398->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_njet_3l398->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_njet_3l398->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_njet_3l398->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_njet_3l398->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_njet_3l398->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_njet_3l398->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_njet_3l398->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_njet_3l398->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_njet_3l398->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_njet_3l398->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_njet_3l398->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_njet_3l398->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_njet_3l->Add(new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_njet_3l,"");
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_njet_3l->Draw("hist same");
   
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_njet_3l = new THStack();
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_njet_3l->SetName("thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_njet_3l");
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_njet_3l->SetTitle("thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_njet_3l");
   
   TH1F *thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_njet_3l_stack_80 = new TH1F("thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_njet_3l_stack_80","thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_njet_3l",8,0,8);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_njet_3l_stack_80->SetMinimum(0);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_njet_3l_stack_80->SetMaximum(0.640374);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_njet_3l_stack_80->SetDirectory(0);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_njet_3l_stack_80->SetStats(0);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_njet_3l_stack_80->SetLineStyle(0);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_njet_3l_stack_80->SetMarkerStyle(20);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_njet_3l_stack_80->GetXaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_njet_3l_stack_80->GetXaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_njet_3l_stack_80->GetXaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_njet_3l_stack_80->GetXaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_njet_3l_stack_80->GetXaxis()->SetTitleOffset(0.9);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_njet_3l_stack_80->GetXaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_njet_3l_stack_80->GetYaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_njet_3l_stack_80->GetYaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_njet_3l_stack_80->GetYaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_njet_3l_stack_80->GetYaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_njet_3l_stack_80->GetYaxis()->SetTitleOffset(1.25);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_njet_3l_stack_80->GetYaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_njet_3l_stack_80->GetZaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_njet_3l_stack_80->GetZaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_njet_3l_stack_80->GetZaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_njet_3l_stack_80->GetZaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_njet_3l_stack_80->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_njet_3l->SetHistogram(thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_njet_3l_stack_80);
   
   
   TH1D *new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_njet_3l399 = new TH1D("new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_njet_3l399","histo_H_htt",8,0,8);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_njet_3l399->SetBinContent(1,0.5833763);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_njet_3l399->SetBinError(1,0.02650363);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_njet_3l399->SetEntries(919);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_njet_3l399->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_njet_3l399->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_njet_3l399->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_njet_3l399->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_njet_3l399->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_njet_3l399->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_njet_3l399->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_njet_3l399->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_njet_3l399->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_njet_3l399->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_njet_3l399->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_njet_3l399->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_njet_3l399->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_njet_3l399->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_njet_3l399->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_njet_3l->Add(new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_njet_3l,"");
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_njet_3l->Draw("hist same noclear");
   
   Double_t _fx3079[8] = {
   0.5,
   1.5,
   2.5,
   3.5,
   4.5,
   5.5,
   6.5,
   7.5};
   Double_t _fy3079[8] = {
   20.26205,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _felx3079[8] = {
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5};
   Double_t _fely3079[8] = {
   4.261179,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fehx3079[8] = {
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5};
   Double_t _fehy3079[8] = {
   4.25877,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(8,_fx3079,_fy3079,_felx3079,_fehx3079,_fely3079,_fehy3079);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(12);
   grae->SetFillStyle(3004);
   grae->SetLineColor(12);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3079 = new TH1F("Graph_Graph3079","",100,0,8.8);
   Graph_Graph3079->SetMinimum(0);
   Graph_Graph3079->SetMaximum(26.9729);
   Graph_Graph3079->SetDirectory(0);
   Graph_Graph3079->SetStats(0);
   Graph_Graph3079->SetLineStyle(0);
   Graph_Graph3079->SetMarkerStyle(20);
   Graph_Graph3079->GetXaxis()->SetLabelFont(42);
   Graph_Graph3079->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3079->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3079->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3079->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3079->GetXaxis()->SetTitleFont(42);
   Graph_Graph3079->GetYaxis()->SetLabelFont(42);
   Graph_Graph3079->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3079->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3079->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3079->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3079->GetYaxis()->SetTitleFont(42);
   Graph_Graph3079->GetZaxis()->SetLabelFont(42);
   Graph_Graph3079->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3079->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3079->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3079->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3079);
   
   grae->Draw("2");
   
   Double_t _fx3080[8] = {
   0.5,
   1.5,
   2.5,
   3.5,
   4.5,
   5.5,
   6.5,
   7.5};
   Double_t _fy3080[8] = {
   25,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _felx3080[8] = {
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5};
   Double_t _fely3080[8] = {
   4.966428,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fehx3080[8] = {
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5};
   Double_t _fehy3080[8] = {
   6.066714,
   1.147908,
   1.147908,
   1.147908,
   1.147908,
   1.147908,
   1.147908,
   1.147908};
   grae = new TGraphAsymmErrors(8,_fx3080,_fy3080,_felx3080,_fehx3080,_fely3080,_fehy3080);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(1);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3080 = new TH1F("Graph_Graph3080","",100,0,8.8);
   Graph_Graph3080->SetMinimum(0);
   Graph_Graph3080->SetMaximum(34.17339);
   Graph_Graph3080->SetDirectory(0);
   Graph_Graph3080->SetStats(0);
   Graph_Graph3080->SetLineStyle(0);
   Graph_Graph3080->SetMarkerStyle(20);
   Graph_Graph3080->GetXaxis()->SetLabelFont(42);
   Graph_Graph3080->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3080->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3080->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3080->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3080->GetXaxis()->SetTitleFont(42);
   Graph_Graph3080->GetYaxis()->SetLabelFont(42);
   Graph_Graph3080->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3080->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3080->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3080->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3080->GetYaxis()->SetTitleFont(42);
   Graph_Graph3080->GetZaxis()->SetLabelFont(42);
   Graph_Graph3080->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3080->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3080->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3080->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3080);
   
   grae->Draw("p0");
   
   TLegend *leg = new TLegend(0.2,0.7,0.8,0.9,NULL,"brNDC");
   leg->SetTextFont(62);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_njet_3l","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_njet_3l","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_njet_3l","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_njet_3l","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_njet_3l","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_njet_3l","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_njet_3l","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_MET_JetV_ZVeto_13TeV_njet_3l","Data","EPL");
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
   entry=leg->AddEntry("new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_njet_3l","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_njet_3l","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_njet_3l","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_njet_3l","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_njet_3l","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_njet_3l","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_njet_3l","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_MET_JetV_ZVeto_13TeV_njet_3l","Data","EPL");
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
   
   TH1F *hframe_copy400 = new TH1F("hframe_copy400","",1000,0,8);
   hframe_copy400->SetMinimum(0);
   hframe_copy400->SetMaximum(75);
   hframe_copy400->SetDirectory(0);
   hframe_copy400->SetStats(0);
   hframe_copy400->SetLineStyle(0);
   hframe_copy400->SetMarkerStyle(20);
   hframe_copy400->GetXaxis()->SetTitle("N_Jets");
   hframe_copy400->GetXaxis()->SetNdivisions(506);
   hframe_copy400->GetXaxis()->SetLabelFont(42);
   hframe_copy400->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy400->GetXaxis()->SetLabelSize(0.05);
   hframe_copy400->GetXaxis()->SetTitleSize(0.06);
   hframe_copy400->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy400->GetXaxis()->SetTitleFont(42);
   hframe_copy400->GetYaxis()->SetTitle("Events");
   hframe_copy400->GetYaxis()->SetLabelFont(42);
   hframe_copy400->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy400->GetYaxis()->SetLabelSize(0.05);
   hframe_copy400->GetYaxis()->SetTitleSize(0.06);
   hframe_copy400->GetYaxis()->SetTitleOffset(1.25);
   hframe_copy400->GetYaxis()->SetTitleFont(42);
   hframe_copy400->GetZaxis()->SetLabelFont(42);
   hframe_copy400->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy400->GetZaxis()->SetLabelSize(0.05);
   hframe_copy400->GetZaxis()->SetTitleSize(0.06);
   hframe_copy400->GetZaxis()->SetTitleFont(42);
   hframe_copy400->Draw("sameaxis");
   ccwh3l_MET_JetV_ZVeto_13TeV_njet_3l->Modified();
   ccwh3l_MET_JetV_ZVeto_13TeV_njet_3l->cd();
   ccwh3l_MET_JetV_ZVeto_13TeV_njet_3l->SetSelected(ccwh3l_MET_JetV_ZVeto_13TeV_njet_3l);
}
