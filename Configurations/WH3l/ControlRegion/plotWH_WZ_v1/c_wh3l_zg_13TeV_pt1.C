void c_wh3l_zg_13TeV_pt1()
{
//=========Macro generated from canvas: ccwh3l_zg_13TeV_pt1/cc
//=========  (Sun Jul  3 22:45:43 2016) by ROOT version6.02/13
   TCanvas *ccwh3l_zg_13TeV_pt1 = new TCanvas("ccwh3l_zg_13TeV_pt1", "cc",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   ccwh3l_zg_13TeV_pt1->SetHighLightColor(2);
   ccwh3l_zg_13TeV_pt1->Range(-28,-24.31494,209.5,162.7231);
   ccwh3l_zg_13TeV_pt1->SetFillColor(0);
   ccwh3l_zg_13TeV_pt1->SetBorderMode(0);
   ccwh3l_zg_13TeV_pt1->SetBorderSize(2);
   ccwh3l_zg_13TeV_pt1->SetTickx(1);
   ccwh3l_zg_13TeV_pt1->SetTicky(1);
   ccwh3l_zg_13TeV_pt1->SetLeftMargin(0.16);
   ccwh3l_zg_13TeV_pt1->SetRightMargin(0.04);
   ccwh3l_zg_13TeV_pt1->SetTopMargin(0.05);
   ccwh3l_zg_13TeV_pt1->SetBottomMargin(0.13);
   ccwh3l_zg_13TeV_pt1->SetFrameFillStyle(0);
   ccwh3l_zg_13TeV_pt1->SetFrameBorderMode(0);
   ccwh3l_zg_13TeV_pt1->SetFrameFillStyle(0);
   ccwh3l_zg_13TeV_pt1->SetFrameBorderMode(0);
   
   TH1F *hframe91 = new TH1F("hframe91","",1000,10,200);
   hframe91->SetMinimum(0);
   hframe91->SetMaximum(153.3712);
   hframe91->SetDirectory(0);
   hframe91->SetStats(0);
   hframe91->SetLineStyle(0);
   hframe91->SetMarkerStyle(20);
   hframe91->GetXaxis()->SetTitle("lept1_p_{T} [GeV]");
   hframe91->GetXaxis()->SetNdivisions(506);
   hframe91->GetXaxis()->SetLabelFont(42);
   hframe91->GetXaxis()->SetLabelOffset(0.007);
   hframe91->GetXaxis()->SetLabelSize(0.05);
   hframe91->GetXaxis()->SetTitleSize(0.06);
   hframe91->GetXaxis()->SetTitleOffset(0.9);
   hframe91->GetXaxis()->SetTitleFont(42);
   hframe91->GetYaxis()->SetTitle("Events");
   hframe91->GetYaxis()->SetLabelFont(42);
   hframe91->GetYaxis()->SetLabelOffset(0.007);
   hframe91->GetYaxis()->SetLabelSize(0.05);
   hframe91->GetYaxis()->SetTitleSize(0.06);
   hframe91->GetYaxis()->SetTitleOffset(1.25);
   hframe91->GetYaxis()->SetTitleFont(42);
   hframe91->GetZaxis()->SetLabelFont(42);
   hframe91->GetZaxis()->SetLabelOffset(0.007);
   hframe91->GetZaxis()->SetLabelSize(0.05);
   hframe91->GetZaxis()->SetTitleSize(0.06);
   hframe91->GetZaxis()->SetTitleFont(42);
   hframe91->Draw(" ");
   
   THStack *thsBackground_grouped_wh3l_zg_13TeV_pt1 = new THStack();
   thsBackground_grouped_wh3l_zg_13TeV_pt1->SetName("thsBackground_grouped_wh3l_zg_13TeV_pt1");
   thsBackground_grouped_wh3l_zg_13TeV_pt1->SetTitle("thsBackground_grouped_wh3l_zg_13TeV_pt1");
   
   TH1F *thsBackground_grouped_wh3l_zg_13TeV_pt1_stack_19 = new TH1F("thsBackground_grouped_wh3l_zg_13TeV_pt1_stack_19","thsBackground_grouped_wh3l_zg_13TeV_pt1",25,10,200);
   thsBackground_grouped_wh3l_zg_13TeV_pt1_stack_19->SetMinimum(-1.347193);
   thsBackground_grouped_wh3l_zg_13TeV_pt1_stack_19->SetMaximum(56.73091);
   thsBackground_grouped_wh3l_zg_13TeV_pt1_stack_19->SetDirectory(0);
   thsBackground_grouped_wh3l_zg_13TeV_pt1_stack_19->SetStats(0);
   thsBackground_grouped_wh3l_zg_13TeV_pt1_stack_19->SetLineStyle(0);
   thsBackground_grouped_wh3l_zg_13TeV_pt1_stack_19->SetMarkerStyle(20);
   thsBackground_grouped_wh3l_zg_13TeV_pt1_stack_19->GetXaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_pt1_stack_19->GetXaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_zg_13TeV_pt1_stack_19->GetXaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_zg_13TeV_pt1_stack_19->GetXaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_zg_13TeV_pt1_stack_19->GetXaxis()->SetTitleOffset(0.9);
   thsBackground_grouped_wh3l_zg_13TeV_pt1_stack_19->GetXaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_pt1_stack_19->GetYaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_pt1_stack_19->GetYaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_zg_13TeV_pt1_stack_19->GetYaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_zg_13TeV_pt1_stack_19->GetYaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_zg_13TeV_pt1_stack_19->GetYaxis()->SetTitleOffset(1.25);
   thsBackground_grouped_wh3l_zg_13TeV_pt1_stack_19->GetYaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_pt1_stack_19->GetZaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_pt1_stack_19->GetZaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_zg_13TeV_pt1_stack_19->GetZaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_zg_13TeV_pt1_stack_19->GetZaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_zg_13TeV_pt1_stack_19->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_pt1->SetHistogram(thsBackground_grouped_wh3l_zg_13TeV_pt1_stack_19);
   
   
   TH1D *new_histo_group_Fake_wh3l_zg_13TeV_pt192 = new TH1D("new_histo_group_Fake_wh3l_zg_13TeV_pt192","histo_Fake",25,10,200);
   new_histo_group_Fake_wh3l_zg_13TeV_pt192->SetBinContent(2,-0.648988);
   new_histo_group_Fake_wh3l_zg_13TeV_pt192->SetBinContent(3,3.691734);
   new_histo_group_Fake_wh3l_zg_13TeV_pt192->SetBinContent(4,10.18158);
   new_histo_group_Fake_wh3l_zg_13TeV_pt192->SetBinContent(5,8.360321);
   new_histo_group_Fake_wh3l_zg_13TeV_pt192->SetBinContent(6,2.07366);
   new_histo_group_Fake_wh3l_zg_13TeV_pt192->SetBinContent(7,0.1242226);
   new_histo_group_Fake_wh3l_zg_13TeV_pt192->SetBinContent(8,-0.1919688);
   new_histo_group_Fake_wh3l_zg_13TeV_pt192->SetBinContent(12,-0.009756577);
   new_histo_group_Fake_wh3l_zg_13TeV_pt192->SetBinError(2,0.6982045);
   new_histo_group_Fake_wh3l_zg_13TeV_pt192->SetBinError(3,1.973557);
   new_histo_group_Fake_wh3l_zg_13TeV_pt192->SetBinError(4,2.566911);
   new_histo_group_Fake_wh3l_zg_13TeV_pt192->SetBinError(5,2.391573);
   new_histo_group_Fake_wh3l_zg_13TeV_pt192->SetBinError(6,1.214989);
   new_histo_group_Fake_wh3l_zg_13TeV_pt192->SetBinError(7,0.5556206);
   new_histo_group_Fake_wh3l_zg_13TeV_pt192->SetBinError(8,0.153503);
   new_histo_group_Fake_wh3l_zg_13TeV_pt192->SetBinError(12,0.009756577);
   new_histo_group_Fake_wh3l_zg_13TeV_pt192->SetEntries(460);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_zg_13TeV_pt192->SetFillColor(ci);
   new_histo_group_Fake_wh3l_zg_13TeV_pt192->SetFillStyle(3001);

   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_zg_13TeV_pt192->SetLineColor(ci);
   new_histo_group_Fake_wh3l_zg_13TeV_pt192->GetXaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_zg_13TeV_pt192->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_zg_13TeV_pt192->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_zg_13TeV_pt192->GetXaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_zg_13TeV_pt192->GetYaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_zg_13TeV_pt192->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_zg_13TeV_pt192->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_zg_13TeV_pt192->GetYaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_zg_13TeV_pt192->GetZaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_zg_13TeV_pt192->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_zg_13TeV_pt192->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_zg_13TeV_pt192->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_pt1->Add(new_histo_group_Fake_wh3l_zg_13TeV_pt1,"");
   
   TH1D *new_histo_group_WW_wh3l_zg_13TeV_pt193 = new TH1D("new_histo_group_WW_wh3l_zg_13TeV_pt193","histo_WW",25,10,200);
   new_histo_group_WW_wh3l_zg_13TeV_pt193->SetBinContent(6,0.009961222);
   new_histo_group_WW_wh3l_zg_13TeV_pt193->SetBinError(6,0.009961222);
   new_histo_group_WW_wh3l_zg_13TeV_pt193->SetEntries(1);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_zg_13TeV_pt193->SetFillColor(ci);
   new_histo_group_WW_wh3l_zg_13TeV_pt193->SetFillStyle(3001);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_zg_13TeV_pt193->SetLineColor(ci);
   new_histo_group_WW_wh3l_zg_13TeV_pt193->GetXaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_zg_13TeV_pt193->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_zg_13TeV_pt193->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_zg_13TeV_pt193->GetXaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_zg_13TeV_pt193->GetYaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_zg_13TeV_pt193->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_zg_13TeV_pt193->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_zg_13TeV_pt193->GetYaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_zg_13TeV_pt193->GetZaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_zg_13TeV_pt193->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_zg_13TeV_pt193->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_zg_13TeV_pt193->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_pt1->Add(new_histo_group_WW_wh3l_zg_13TeV_pt1,"");
   
   TH1D *new_histo_group_VVV_wh3l_zg_13TeV_pt194 = new TH1D("new_histo_group_VVV_wh3l_zg_13TeV_pt194","histo_VVV",25,10,200);
   new_histo_group_VVV_wh3l_zg_13TeV_pt194->SetBinContent(3,0.004496407);
   new_histo_group_VVV_wh3l_zg_13TeV_pt194->SetBinContent(4,0.005462159);
   new_histo_group_VVV_wh3l_zg_13TeV_pt194->SetBinContent(5,0.005210828);
   new_histo_group_VVV_wh3l_zg_13TeV_pt194->SetBinContent(6,-0.0006863608);
   new_histo_group_VVV_wh3l_zg_13TeV_pt194->SetBinError(3,0.003181365);
   new_histo_group_VVV_wh3l_zg_13TeV_pt194->SetBinError(4,0.003875766);
   new_histo_group_VVV_wh3l_zg_13TeV_pt194->SetBinError(5,0.003689177);
   new_histo_group_VVV_wh3l_zg_13TeV_pt194->SetBinError(6,0.0006863608);
   new_histo_group_VVV_wh3l_zg_13TeV_pt194->SetEntries(7);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_zg_13TeV_pt194->SetFillColor(ci);
   new_histo_group_VVV_wh3l_zg_13TeV_pt194->SetFillStyle(3001);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_zg_13TeV_pt194->SetLineColor(ci);
   new_histo_group_VVV_wh3l_zg_13TeV_pt194->GetXaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_zg_13TeV_pt194->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_zg_13TeV_pt194->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_zg_13TeV_pt194->GetXaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_zg_13TeV_pt194->GetYaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_zg_13TeV_pt194->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_zg_13TeV_pt194->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_zg_13TeV_pt194->GetYaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_zg_13TeV_pt194->GetZaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_zg_13TeV_pt194->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_zg_13TeV_pt194->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_zg_13TeV_pt194->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_pt1->Add(new_histo_group_VVV_wh3l_zg_13TeV_pt1,"");
   
   TH1D *new_histo_group_Vg_wh3l_zg_13TeV_pt195 = new TH1D("new_histo_group_Vg_wh3l_zg_13TeV_pt195","histo_Vg",25,10,200);
   new_histo_group_Vg_wh3l_zg_13TeV_pt195->SetBinContent(2,3.457322);
   new_histo_group_Vg_wh3l_zg_13TeV_pt195->SetBinContent(3,18.55493);
   new_histo_group_Vg_wh3l_zg_13TeV_pt195->SetBinContent(4,43.07737);
   new_histo_group_Vg_wh3l_zg_13TeV_pt195->SetBinContent(5,27.88438);
   new_histo_group_Vg_wh3l_zg_13TeV_pt195->SetBinContent(6,8.02065);
   new_histo_group_Vg_wh3l_zg_13TeV_pt195->SetBinContent(7,1.589216);
   new_histo_group_Vg_wh3l_zg_13TeV_pt195->SetBinContent(8,1.245433);
   new_histo_group_Vg_wh3l_zg_13TeV_pt195->SetBinContent(9,0.01888059);
   new_histo_group_Vg_wh3l_zg_13TeV_pt195->SetBinContent(10,0.118661);
   new_histo_group_Vg_wh3l_zg_13TeV_pt195->SetBinError(2,0.694917);
   new_histo_group_Vg_wh3l_zg_13TeV_pt195->SetBinError(3,1.603207);
   new_histo_group_Vg_wh3l_zg_13TeV_pt195->SetBinError(4,2.396959);
   new_histo_group_Vg_wh3l_zg_13TeV_pt195->SetBinError(5,2.043017);
   new_histo_group_Vg_wh3l_zg_13TeV_pt195->SetBinError(6,1.190291);
   new_histo_group_Vg_wh3l_zg_13TeV_pt195->SetBinError(7,0.5395251);
   new_histo_group_Vg_wh3l_zg_13TeV_pt195->SetBinError(8,0.3961816);
   new_histo_group_Vg_wh3l_zg_13TeV_pt195->SetBinError(9,0.2123352);
   new_histo_group_Vg_wh3l_zg_13TeV_pt195->SetBinError(10,0.118661);
   new_histo_group_Vg_wh3l_zg_13TeV_pt195->SetEntries(1376);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_zg_13TeV_pt195->SetFillColor(ci);
   new_histo_group_Vg_wh3l_zg_13TeV_pt195->SetFillStyle(3001);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_zg_13TeV_pt195->SetLineColor(ci);
   new_histo_group_Vg_wh3l_zg_13TeV_pt195->GetXaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_zg_13TeV_pt195->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_zg_13TeV_pt195->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_zg_13TeV_pt195->GetXaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_zg_13TeV_pt195->GetYaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_zg_13TeV_pt195->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_zg_13TeV_pt195->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_zg_13TeV_pt195->GetYaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_zg_13TeV_pt195->GetZaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_zg_13TeV_pt195->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_zg_13TeV_pt195->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_zg_13TeV_pt195->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_pt1->Add(new_histo_group_Vg_wh3l_zg_13TeV_pt1,"");
   
   TH1D *new_histo_group_ZZ_wh3l_zg_13TeV_pt196 = new TH1D("new_histo_group_ZZ_wh3l_zg_13TeV_pt196","histo_ZZ",25,10,200);
   new_histo_group_ZZ_wh3l_zg_13TeV_pt196->SetBinContent(2,0.08567537);
   new_histo_group_ZZ_wh3l_zg_13TeV_pt196->SetBinContent(3,0.1176394);
   new_histo_group_ZZ_wh3l_zg_13TeV_pt196->SetBinContent(4,0.1216718);
   new_histo_group_ZZ_wh3l_zg_13TeV_pt196->SetBinContent(5,0.2012711);
   new_histo_group_ZZ_wh3l_zg_13TeV_pt196->SetBinContent(6,0.03645855);
   new_histo_group_ZZ_wh3l_zg_13TeV_pt196->SetBinContent(7,0.002412119);
   new_histo_group_ZZ_wh3l_zg_13TeV_pt196->SetBinContent(8,0.02824018);
   new_histo_group_ZZ_wh3l_zg_13TeV_pt196->SetBinError(2,0.06072218);
   new_histo_group_ZZ_wh3l_zg_13TeV_pt196->SetBinError(3,0.06912919);
   new_histo_group_ZZ_wh3l_zg_13TeV_pt196->SetBinError(4,0.07033346);
   new_histo_group_ZZ_wh3l_zg_13TeV_pt196->SetBinError(5,0.09196018);
   new_histo_group_ZZ_wh3l_zg_13TeV_pt196->SetBinError(6,0.03645855);
   new_histo_group_ZZ_wh3l_zg_13TeV_pt196->SetBinError(7,0.002412119);
   new_histo_group_ZZ_wh3l_zg_13TeV_pt196->SetBinError(8,0.02824018);
   new_histo_group_ZZ_wh3l_zg_13TeV_pt196->SetEntries(16);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_zg_13TeV_pt196->SetFillColor(ci);
   new_histo_group_ZZ_wh3l_zg_13TeV_pt196->SetFillStyle(3001);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_zg_13TeV_pt196->SetLineColor(ci);
   new_histo_group_ZZ_wh3l_zg_13TeV_pt196->GetXaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_zg_13TeV_pt196->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_zg_13TeV_pt196->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_zg_13TeV_pt196->GetXaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_zg_13TeV_pt196->GetYaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_zg_13TeV_pt196->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_zg_13TeV_pt196->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_zg_13TeV_pt196->GetYaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_zg_13TeV_pt196->GetZaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_zg_13TeV_pt196->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_zg_13TeV_pt196->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_zg_13TeV_pt196->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_pt1->Add(new_histo_group_ZZ_wh3l_zg_13TeV_pt1,"");
   
   TH1D *new_histo_group_WZ_wh3l_zg_13TeV_pt197 = new TH1D("new_histo_group_WZ_wh3l_zg_13TeV_pt197","histo_WZ",25,10,200);
   new_histo_group_WZ_wh3l_zg_13TeV_pt197->SetBinContent(2,0.09604622);
   new_histo_group_WZ_wh3l_zg_13TeV_pt197->SetBinContent(3,0.3425023);
   new_histo_group_WZ_wh3l_zg_13TeV_pt197->SetBinContent(4,0.6157995);
   new_histo_group_WZ_wh3l_zg_13TeV_pt197->SetBinContent(5,0.3821572);
   new_histo_group_WZ_wh3l_zg_13TeV_pt197->SetBinContent(6,0.2784936);
   new_histo_group_WZ_wh3l_zg_13TeV_pt197->SetBinContent(7,0.07313556);
   new_histo_group_WZ_wh3l_zg_13TeV_pt197->SetBinContent(8,0.04965948);
   new_histo_group_WZ_wh3l_zg_13TeV_pt197->SetBinContent(9,0.0358967);
   new_histo_group_WZ_wh3l_zg_13TeV_pt197->SetBinContent(10,0.004833604);
   new_histo_group_WZ_wh3l_zg_13TeV_pt197->SetBinError(2,0.02268495);
   new_histo_group_WZ_wh3l_zg_13TeV_pt197->SetBinError(3,0.0432124);
   new_histo_group_WZ_wh3l_zg_13TeV_pt197->SetBinError(4,0.05831086);
   new_histo_group_WZ_wh3l_zg_13TeV_pt197->SetBinError(5,0.04551885);
   new_histo_group_WZ_wh3l_zg_13TeV_pt197->SetBinError(6,0.03849706);
   new_histo_group_WZ_wh3l_zg_13TeV_pt197->SetBinError(7,0.01994098);
   new_histo_group_WZ_wh3l_zg_13TeV_pt197->SetBinError(8,0.01675738);
   new_histo_group_WZ_wh3l_zg_13TeV_pt197->SetBinError(9,0.01367397);
   new_histo_group_WZ_wh3l_zg_13TeV_pt197->SetBinError(10,0.004833604);
   new_histo_group_WZ_wh3l_zg_13TeV_pt197->SetEntries(376);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_zg_13TeV_pt197->SetFillColor(ci);
   new_histo_group_WZ_wh3l_zg_13TeV_pt197->SetFillStyle(3001);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_zg_13TeV_pt197->SetLineColor(ci);
   new_histo_group_WZ_wh3l_zg_13TeV_pt197->GetXaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_zg_13TeV_pt197->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_zg_13TeV_pt197->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_zg_13TeV_pt197->GetXaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_zg_13TeV_pt197->GetYaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_zg_13TeV_pt197->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_zg_13TeV_pt197->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_zg_13TeV_pt197->GetYaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_zg_13TeV_pt197->GetZaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_zg_13TeV_pt197->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_zg_13TeV_pt197->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_zg_13TeV_pt197->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_pt1->Add(new_histo_group_WZ_wh3l_zg_13TeV_pt1,"");
   
   TH1D *new_histo_group_Higgs_wh3l_zg_13TeV_pt198 = new TH1D("new_histo_group_Higgs_wh3l_zg_13TeV_pt198","histo_H_htt",25,10,200);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt198->SetBinContent(2,0.00321391);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt198->SetBinContent(3,0.01123054);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt198->SetBinContent(4,0.02755996);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt198->SetBinContent(5,0.02935608);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt198->SetBinContent(6,0.00812441);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt198->SetBinContent(7,0.006490831);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt198->SetBinContent(8,0.002494334);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt198->SetBinContent(9,0.0003065907);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt198->SetBinError(2,0.001933089);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt198->SetBinError(3,0.0032285);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt198->SetBinError(4,0.005172925);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt198->SetBinError(5,0.006054892);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt198->SetBinError(6,0.002938305);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt198->SetBinError(7,0.002676181);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt198->SetBinError(8,0.001274748);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt198->SetBinError(9,0.0003065907);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt198->SetEntries(180);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt198->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_zg_13TeV_pt198->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt198->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt198->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt198->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt198->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt198->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt198->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt198->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt198->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt198->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt198->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt198->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt198->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt198->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_pt1->Add(new_histo_group_Higgs_wh3l_zg_13TeV_pt1,"");
   thsBackground_grouped_wh3l_zg_13TeV_pt1->Draw("hist same");
   
   thsSignal_grouped_wh3l_zg_13TeV_pt1 = new THStack();
   thsSignal_grouped_wh3l_zg_13TeV_pt1->SetName("thsSignal_grouped_wh3l_zg_13TeV_pt1");
   thsSignal_grouped_wh3l_zg_13TeV_pt1->SetTitle("thsSignal_grouped_wh3l_zg_13TeV_pt1");
   
   TH1F *thsSignal_grouped_wh3l_zg_13TeV_pt1_stack_20 = new TH1F("thsSignal_grouped_wh3l_zg_13TeV_pt1_stack_20","thsSignal_grouped_wh3l_zg_13TeV_pt1",25,10,200);
   thsSignal_grouped_wh3l_zg_13TeV_pt1_stack_20->SetMinimum(0);
   thsSignal_grouped_wh3l_zg_13TeV_pt1_stack_20->SetMaximum(0.03718152);
   thsSignal_grouped_wh3l_zg_13TeV_pt1_stack_20->SetDirectory(0);
   thsSignal_grouped_wh3l_zg_13TeV_pt1_stack_20->SetStats(0);
   thsSignal_grouped_wh3l_zg_13TeV_pt1_stack_20->SetLineStyle(0);
   thsSignal_grouped_wh3l_zg_13TeV_pt1_stack_20->SetMarkerStyle(20);
   thsSignal_grouped_wh3l_zg_13TeV_pt1_stack_20->GetXaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_zg_13TeV_pt1_stack_20->GetXaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_zg_13TeV_pt1_stack_20->GetXaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_zg_13TeV_pt1_stack_20->GetXaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_zg_13TeV_pt1_stack_20->GetXaxis()->SetTitleOffset(0.9);
   thsSignal_grouped_wh3l_zg_13TeV_pt1_stack_20->GetXaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_zg_13TeV_pt1_stack_20->GetYaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_zg_13TeV_pt1_stack_20->GetYaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_zg_13TeV_pt1_stack_20->GetYaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_zg_13TeV_pt1_stack_20->GetYaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_zg_13TeV_pt1_stack_20->GetYaxis()->SetTitleOffset(1.25);
   thsSignal_grouped_wh3l_zg_13TeV_pt1_stack_20->GetYaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_zg_13TeV_pt1_stack_20->GetZaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_zg_13TeV_pt1_stack_20->GetZaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_zg_13TeV_pt1_stack_20->GetZaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_zg_13TeV_pt1_stack_20->GetZaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_zg_13TeV_pt1_stack_20->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_zg_13TeV_pt1->SetHistogram(thsSignal_grouped_wh3l_zg_13TeV_pt1_stack_20);
   
   
   TH1D *new_histo_group_Higgs_wh3l_zg_13TeV_pt199 = new TH1D("new_histo_group_Higgs_wh3l_zg_13TeV_pt199","histo_H_htt",25,10,200);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt199->SetBinContent(2,0.00321391);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt199->SetBinContent(3,0.01123054);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt199->SetBinContent(4,0.02755996);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt199->SetBinContent(5,0.02935608);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt199->SetBinContent(6,0.00812441);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt199->SetBinContent(7,0.006490831);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt199->SetBinContent(8,0.002494334);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt199->SetBinContent(9,0.0003065907);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt199->SetBinError(2,0.001933089);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt199->SetBinError(3,0.0032285);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt199->SetBinError(4,0.005172925);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt199->SetBinError(5,0.006054892);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt199->SetBinError(6,0.002938305);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt199->SetBinError(7,0.002676181);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt199->SetBinError(8,0.001274748);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt199->SetBinError(9,0.0003065907);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt199->SetEntries(180);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt199->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_zg_13TeV_pt199->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt199->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt199->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt199->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt199->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt199->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt199->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt199->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt199->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt199->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt199->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt199->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt199->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt199->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_zg_13TeV_pt1->Add(new_histo_group_Higgs_wh3l_zg_13TeV_pt1,"");
   thsSignal_grouped_wh3l_zg_13TeV_pt1->Draw("hist same noclear");
   
   Double_t _fx3019[25] = {
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
   Double_t _fy3019[25] = {
   0,
   2.990056,
   22.7113,
   54.00188,
   36.83334,
   10.41854,
   1.788986,
   1.131364,
   0.0547773,
   0.1234946,
   0,
   -0.009756577,
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
   Double_t _felx3019[25] = {
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
   Double_t _fely3019[25] = {
   0,
   1.509683,
   4.03466,
   6.501776,
   5.58399,
   2.624167,
   0.6915542,
   0.6044491,
   0.03267926,
   0.1236756,
   0,
   0.01033691,
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
   Double_t _fehx3019[25] = {
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
   Double_t _fehy3019[25] = {
   0,
   1.463082,
   4.028707,
   6.49099,
   5.580346,
   2.623117,
   1.120562,
   0.6047997,
   0.2260262,
   0.123683,
   0,
   0.01033691,
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
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(25,_fx3019,_fy3019,_felx3019,_fehx3019,_fely3019,_fehy3019);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(12);
   grae->SetFillStyle(3004);
   grae->SetLineColor(12);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3019 = new TH1F("Graph_Graph3019","",100,0,219);
   Graph_Graph3019->SetMinimum(-6.07139);
   Graph_Graph3019->SetMaximum(66.54417);
   Graph_Graph3019->SetDirectory(0);
   Graph_Graph3019->SetStats(0);
   Graph_Graph3019->SetLineStyle(0);
   Graph_Graph3019->SetMarkerStyle(20);
   Graph_Graph3019->GetXaxis()->SetLabelFont(42);
   Graph_Graph3019->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3019->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3019->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3019->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3019->GetXaxis()->SetTitleFont(42);
   Graph_Graph3019->GetYaxis()->SetLabelFont(42);
   Graph_Graph3019->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3019->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3019->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3019->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3019->GetYaxis()->SetTitleFont(42);
   Graph_Graph3019->GetZaxis()->SetLabelFont(42);
   Graph_Graph3019->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3019->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3019->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3019->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3019);
   
   grae->Draw("2");
   
   Double_t _fx3020[25] = {
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
   Double_t _fy3020[25] = {
   0,
   6,
   24,
   54,
   39,
   7,
   1,
   1,
   1,
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
   Double_t _felx3020[25] = {
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
   Double_t _fely3020[25] = {
   0,
   2.379969,
   4.864704,
   7.325785,
   6.218223,
   2.581513,
   0.8272524,
   0.8272524,
   0.8272524,
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
   Double_t _fehx3020[25] = {
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
   Double_t _fehy3020[25] = {
   1.147908,
   3.583713,
   5.967054,
   8.394025,
   7.298524,
   3.770356,
   2.29957,
   2.29957,
   2.29957,
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
   grae = new TGraphAsymmErrors(25,_fx3020,_fy3020,_felx3020,_fehx3020,_fely3020,_fehy3020);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(1);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3020 = new TH1F("Graph_Graph3020","",100,0,219);
   Graph_Graph3020->SetMinimum(0);
   Graph_Graph3020->SetMaximum(68.63343);
   Graph_Graph3020->SetDirectory(0);
   Graph_Graph3020->SetStats(0);
   Graph_Graph3020->SetLineStyle(0);
   Graph_Graph3020->SetMarkerStyle(20);
   Graph_Graph3020->GetXaxis()->SetLabelFont(42);
   Graph_Graph3020->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3020->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3020->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3020->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3020->GetXaxis()->SetTitleFont(42);
   Graph_Graph3020->GetYaxis()->SetLabelFont(42);
   Graph_Graph3020->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3020->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3020->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3020->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3020->GetYaxis()->SetTitleFont(42);
   Graph_Graph3020->GetZaxis()->SetLabelFont(42);
   Graph_Graph3020->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3020->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3020->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3020->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3020);
   
   grae->Draw("p0");
   
   TLegend *leg = new TLegend(0.2,0.7,0.8,0.9,NULL,"brNDC");
   leg->SetTextFont(62);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("new_histo_group_Fake_wh3l_zg_13TeV_pt1","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_zg_13TeV_pt1","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_zg_13TeV_pt1","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_zg_13TeV_pt1","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_zg_13TeV_pt1","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_zg_13TeV_pt1","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_zg_13TeV_pt1","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_zg_13TeV_pt1","Data","EPL");
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
   entry=leg->AddEntry("new_histo_group_Fake_wh3l_zg_13TeV_pt1","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_zg_13TeV_pt1","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_zg_13TeV_pt1","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_zg_13TeV_pt1","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_zg_13TeV_pt1","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_zg_13TeV_pt1","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_zg_13TeV_pt1","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_zg_13TeV_pt1","Data","EPL");
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
   
   TH1F *hframe_copy100 = new TH1F("hframe_copy100","",1000,10,200);
   hframe_copy100->SetMinimum(0);
   hframe_copy100->SetMaximum(153.3712);
   hframe_copy100->SetDirectory(0);
   hframe_copy100->SetStats(0);
   hframe_copy100->SetLineStyle(0);
   hframe_copy100->SetMarkerStyle(20);
   hframe_copy100->GetXaxis()->SetTitle("lept1_p_{T} [GeV]");
   hframe_copy100->GetXaxis()->SetNdivisions(506);
   hframe_copy100->GetXaxis()->SetLabelFont(42);
   hframe_copy100->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy100->GetXaxis()->SetLabelSize(0.05);
   hframe_copy100->GetXaxis()->SetTitleSize(0.06);
   hframe_copy100->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy100->GetXaxis()->SetTitleFont(42);
   hframe_copy100->GetYaxis()->SetTitle("Events");
   hframe_copy100->GetYaxis()->SetLabelFont(42);
   hframe_copy100->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy100->GetYaxis()->SetLabelSize(0.05);
   hframe_copy100->GetYaxis()->SetTitleSize(0.06);
   hframe_copy100->GetYaxis()->SetTitleOffset(1.25);
   hframe_copy100->GetYaxis()->SetTitleFont(42);
   hframe_copy100->GetZaxis()->SetLabelFont(42);
   hframe_copy100->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy100->GetZaxis()->SetLabelSize(0.05);
   hframe_copy100->GetZaxis()->SetTitleSize(0.06);
   hframe_copy100->GetZaxis()->SetTitleFont(42);
   hframe_copy100->Draw("sameaxis");
   ccwh3l_zg_13TeV_pt1->Modified();
   ccwh3l_zg_13TeV_pt1->cd();
   ccwh3l_zg_13TeV_pt1->SetSelected(ccwh3l_zg_13TeV_pt1);
}
