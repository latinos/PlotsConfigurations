void c_wh3l_zg_13TeV_pt1()
{
//=========Macro generated from canvas: ccwh3l_zg_13TeV_pt1/cc
//=========  (Sat Jul  2 21:05:47 2016) by ROOT version6.02/13
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
   
   TH1F *hframe121 = new TH1F("hframe121","",1000,10,200);
   hframe121->SetMinimum(0);
   hframe121->SetMaximum(153.3712);
   hframe121->SetDirectory(0);
   hframe121->SetStats(0);
   hframe121->SetLineStyle(0);
   hframe121->SetMarkerStyle(20);
   hframe121->GetXaxis()->SetTitle("lept1_p_{T} [GeV]");
   hframe121->GetXaxis()->SetNdivisions(506);
   hframe121->GetXaxis()->SetLabelFont(42);
   hframe121->GetXaxis()->SetLabelOffset(0.007);
   hframe121->GetXaxis()->SetLabelSize(0.05);
   hframe121->GetXaxis()->SetTitleSize(0.06);
   hframe121->GetXaxis()->SetTitleOffset(0.9);
   hframe121->GetXaxis()->SetTitleFont(42);
   hframe121->GetYaxis()->SetTitle("Events");
   hframe121->GetYaxis()->SetLabelFont(42);
   hframe121->GetYaxis()->SetLabelOffset(0.007);
   hframe121->GetYaxis()->SetLabelSize(0.05);
   hframe121->GetYaxis()->SetTitleSize(0.06);
   hframe121->GetYaxis()->SetTitleOffset(1.25);
   hframe121->GetYaxis()->SetTitleFont(42);
   hframe121->GetZaxis()->SetLabelFont(42);
   hframe121->GetZaxis()->SetLabelOffset(0.007);
   hframe121->GetZaxis()->SetLabelSize(0.05);
   hframe121->GetZaxis()->SetTitleSize(0.06);
   hframe121->GetZaxis()->SetTitleFont(42);
   hframe121->Draw(" ");
   
   THStack *thsBackground_grouped_wh3l_zg_13TeV_pt1 = new THStack();
   thsBackground_grouped_wh3l_zg_13TeV_pt1->SetName("thsBackground_grouped_wh3l_zg_13TeV_pt1");
   thsBackground_grouped_wh3l_zg_13TeV_pt1->SetTitle("thsBackground_grouped_wh3l_zg_13TeV_pt1");
   
   TH1F *thsBackground_grouped_wh3l_zg_13TeV_pt1_stack_25 = new TH1F("thsBackground_grouped_wh3l_zg_13TeV_pt1_stack_25","thsBackground_grouped_wh3l_zg_13TeV_pt1",25,10,200);
   thsBackground_grouped_wh3l_zg_13TeV_pt1_stack_25->SetMinimum(-1.347193);
   thsBackground_grouped_wh3l_zg_13TeV_pt1_stack_25->SetMaximum(56.73091);
   thsBackground_grouped_wh3l_zg_13TeV_pt1_stack_25->SetDirectory(0);
   thsBackground_grouped_wh3l_zg_13TeV_pt1_stack_25->SetStats(0);
   thsBackground_grouped_wh3l_zg_13TeV_pt1_stack_25->SetLineStyle(0);
   thsBackground_grouped_wh3l_zg_13TeV_pt1_stack_25->SetMarkerStyle(20);
   thsBackground_grouped_wh3l_zg_13TeV_pt1_stack_25->GetXaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_pt1_stack_25->GetXaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_zg_13TeV_pt1_stack_25->GetXaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_zg_13TeV_pt1_stack_25->GetXaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_zg_13TeV_pt1_stack_25->GetXaxis()->SetTitleOffset(0.9);
   thsBackground_grouped_wh3l_zg_13TeV_pt1_stack_25->GetXaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_pt1_stack_25->GetYaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_pt1_stack_25->GetYaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_zg_13TeV_pt1_stack_25->GetYaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_zg_13TeV_pt1_stack_25->GetYaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_zg_13TeV_pt1_stack_25->GetYaxis()->SetTitleOffset(1.25);
   thsBackground_grouped_wh3l_zg_13TeV_pt1_stack_25->GetYaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_pt1_stack_25->GetZaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_pt1_stack_25->GetZaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_zg_13TeV_pt1_stack_25->GetZaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_zg_13TeV_pt1_stack_25->GetZaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_zg_13TeV_pt1_stack_25->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_pt1->SetHistogram(thsBackground_grouped_wh3l_zg_13TeV_pt1_stack_25);
   
   
   TH1D *new_histo_group_Fake_wh3l_zg_13TeV_pt1122 = new TH1D("new_histo_group_Fake_wh3l_zg_13TeV_pt1122","histo_Fake",25,10,200);
   new_histo_group_Fake_wh3l_zg_13TeV_pt1122->SetBinContent(2,-0.648988);
   new_histo_group_Fake_wh3l_zg_13TeV_pt1122->SetBinContent(3,3.691734);
   new_histo_group_Fake_wh3l_zg_13TeV_pt1122->SetBinContent(4,10.18158);
   new_histo_group_Fake_wh3l_zg_13TeV_pt1122->SetBinContent(5,8.360321);
   new_histo_group_Fake_wh3l_zg_13TeV_pt1122->SetBinContent(6,2.07366);
   new_histo_group_Fake_wh3l_zg_13TeV_pt1122->SetBinContent(7,0.1242226);
   new_histo_group_Fake_wh3l_zg_13TeV_pt1122->SetBinContent(8,-0.1919688);
   new_histo_group_Fake_wh3l_zg_13TeV_pt1122->SetBinContent(12,-0.009756577);
   new_histo_group_Fake_wh3l_zg_13TeV_pt1122->SetBinError(2,0.6982045);
   new_histo_group_Fake_wh3l_zg_13TeV_pt1122->SetBinError(3,1.973557);
   new_histo_group_Fake_wh3l_zg_13TeV_pt1122->SetBinError(4,2.566911);
   new_histo_group_Fake_wh3l_zg_13TeV_pt1122->SetBinError(5,2.391573);
   new_histo_group_Fake_wh3l_zg_13TeV_pt1122->SetBinError(6,1.214989);
   new_histo_group_Fake_wh3l_zg_13TeV_pt1122->SetBinError(7,0.5556206);
   new_histo_group_Fake_wh3l_zg_13TeV_pt1122->SetBinError(8,0.153503);
   new_histo_group_Fake_wh3l_zg_13TeV_pt1122->SetBinError(12,0.009756577);
   new_histo_group_Fake_wh3l_zg_13TeV_pt1122->SetEntries(460);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_zg_13TeV_pt1122->SetFillColor(ci);
   new_histo_group_Fake_wh3l_zg_13TeV_pt1122->SetFillStyle(3001);

   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_zg_13TeV_pt1122->SetLineColor(ci);
   new_histo_group_Fake_wh3l_zg_13TeV_pt1122->GetXaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_zg_13TeV_pt1122->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_zg_13TeV_pt1122->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_zg_13TeV_pt1122->GetXaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_zg_13TeV_pt1122->GetYaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_zg_13TeV_pt1122->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_zg_13TeV_pt1122->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_zg_13TeV_pt1122->GetYaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_zg_13TeV_pt1122->GetZaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_zg_13TeV_pt1122->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_zg_13TeV_pt1122->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_zg_13TeV_pt1122->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_pt1->Add(new_histo_group_Fake_wh3l_zg_13TeV_pt1,"");
   
   TH1D *new_histo_group_WW_wh3l_zg_13TeV_pt1123 = new TH1D("new_histo_group_WW_wh3l_zg_13TeV_pt1123","histo_WW",25,10,200);
   new_histo_group_WW_wh3l_zg_13TeV_pt1123->SetBinContent(6,0.009961222);
   new_histo_group_WW_wh3l_zg_13TeV_pt1123->SetBinError(6,0.009961222);
   new_histo_group_WW_wh3l_zg_13TeV_pt1123->SetEntries(1);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_zg_13TeV_pt1123->SetFillColor(ci);
   new_histo_group_WW_wh3l_zg_13TeV_pt1123->SetFillStyle(3001);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_zg_13TeV_pt1123->SetLineColor(ci);
   new_histo_group_WW_wh3l_zg_13TeV_pt1123->GetXaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_zg_13TeV_pt1123->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_zg_13TeV_pt1123->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_zg_13TeV_pt1123->GetXaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_zg_13TeV_pt1123->GetYaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_zg_13TeV_pt1123->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_zg_13TeV_pt1123->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_zg_13TeV_pt1123->GetYaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_zg_13TeV_pt1123->GetZaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_zg_13TeV_pt1123->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_zg_13TeV_pt1123->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_zg_13TeV_pt1123->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_pt1->Add(new_histo_group_WW_wh3l_zg_13TeV_pt1,"");
   
   TH1D *new_histo_group_VVV_wh3l_zg_13TeV_pt1124 = new TH1D("new_histo_group_VVV_wh3l_zg_13TeV_pt1124","histo_VVV",25,10,200);
   new_histo_group_VVV_wh3l_zg_13TeV_pt1124->SetBinContent(3,0.004496407);
   new_histo_group_VVV_wh3l_zg_13TeV_pt1124->SetBinContent(4,0.005462159);
   new_histo_group_VVV_wh3l_zg_13TeV_pt1124->SetBinContent(5,0.005210828);
   new_histo_group_VVV_wh3l_zg_13TeV_pt1124->SetBinContent(6,-0.0006863608);
   new_histo_group_VVV_wh3l_zg_13TeV_pt1124->SetBinError(3,0.003181365);
   new_histo_group_VVV_wh3l_zg_13TeV_pt1124->SetBinError(4,0.003875766);
   new_histo_group_VVV_wh3l_zg_13TeV_pt1124->SetBinError(5,0.003689177);
   new_histo_group_VVV_wh3l_zg_13TeV_pt1124->SetBinError(6,0.0006863608);
   new_histo_group_VVV_wh3l_zg_13TeV_pt1124->SetEntries(7);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_zg_13TeV_pt1124->SetFillColor(ci);
   new_histo_group_VVV_wh3l_zg_13TeV_pt1124->SetFillStyle(3001);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_zg_13TeV_pt1124->SetLineColor(ci);
   new_histo_group_VVV_wh3l_zg_13TeV_pt1124->GetXaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_zg_13TeV_pt1124->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_zg_13TeV_pt1124->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_zg_13TeV_pt1124->GetXaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_zg_13TeV_pt1124->GetYaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_zg_13TeV_pt1124->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_zg_13TeV_pt1124->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_zg_13TeV_pt1124->GetYaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_zg_13TeV_pt1124->GetZaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_zg_13TeV_pt1124->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_zg_13TeV_pt1124->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_zg_13TeV_pt1124->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_pt1->Add(new_histo_group_VVV_wh3l_zg_13TeV_pt1,"");
   
   TH1D *new_histo_group_Vg_wh3l_zg_13TeV_pt1125 = new TH1D("new_histo_group_Vg_wh3l_zg_13TeV_pt1125","histo_Vg",25,10,200);
   new_histo_group_Vg_wh3l_zg_13TeV_pt1125->SetBinContent(2,3.457322);
   new_histo_group_Vg_wh3l_zg_13TeV_pt1125->SetBinContent(3,18.55493);
   new_histo_group_Vg_wh3l_zg_13TeV_pt1125->SetBinContent(4,43.07737);
   new_histo_group_Vg_wh3l_zg_13TeV_pt1125->SetBinContent(5,27.88438);
   new_histo_group_Vg_wh3l_zg_13TeV_pt1125->SetBinContent(6,8.02065);
   new_histo_group_Vg_wh3l_zg_13TeV_pt1125->SetBinContent(7,1.589216);
   new_histo_group_Vg_wh3l_zg_13TeV_pt1125->SetBinContent(8,1.245433);
   new_histo_group_Vg_wh3l_zg_13TeV_pt1125->SetBinContent(9,0.01888059);
   new_histo_group_Vg_wh3l_zg_13TeV_pt1125->SetBinContent(10,0.118661);
   new_histo_group_Vg_wh3l_zg_13TeV_pt1125->SetBinError(2,0.694917);
   new_histo_group_Vg_wh3l_zg_13TeV_pt1125->SetBinError(3,1.603207);
   new_histo_group_Vg_wh3l_zg_13TeV_pt1125->SetBinError(4,2.396959);
   new_histo_group_Vg_wh3l_zg_13TeV_pt1125->SetBinError(5,2.043017);
   new_histo_group_Vg_wh3l_zg_13TeV_pt1125->SetBinError(6,1.190291);
   new_histo_group_Vg_wh3l_zg_13TeV_pt1125->SetBinError(7,0.5395251);
   new_histo_group_Vg_wh3l_zg_13TeV_pt1125->SetBinError(8,0.3961816);
   new_histo_group_Vg_wh3l_zg_13TeV_pt1125->SetBinError(9,0.2123352);
   new_histo_group_Vg_wh3l_zg_13TeV_pt1125->SetBinError(10,0.118661);
   new_histo_group_Vg_wh3l_zg_13TeV_pt1125->SetEntries(1376);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_zg_13TeV_pt1125->SetFillColor(ci);
   new_histo_group_Vg_wh3l_zg_13TeV_pt1125->SetFillStyle(3001);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_zg_13TeV_pt1125->SetLineColor(ci);
   new_histo_group_Vg_wh3l_zg_13TeV_pt1125->GetXaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_zg_13TeV_pt1125->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_zg_13TeV_pt1125->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_zg_13TeV_pt1125->GetXaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_zg_13TeV_pt1125->GetYaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_zg_13TeV_pt1125->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_zg_13TeV_pt1125->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_zg_13TeV_pt1125->GetYaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_zg_13TeV_pt1125->GetZaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_zg_13TeV_pt1125->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_zg_13TeV_pt1125->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_zg_13TeV_pt1125->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_pt1->Add(new_histo_group_Vg_wh3l_zg_13TeV_pt1,"");
   
   TH1D *new_histo_group_ZZ_wh3l_zg_13TeV_pt1126 = new TH1D("new_histo_group_ZZ_wh3l_zg_13TeV_pt1126","histo_ZZ",25,10,200);
   new_histo_group_ZZ_wh3l_zg_13TeV_pt1126->SetBinContent(2,0.08567537);
   new_histo_group_ZZ_wh3l_zg_13TeV_pt1126->SetBinContent(3,0.1176394);
   new_histo_group_ZZ_wh3l_zg_13TeV_pt1126->SetBinContent(4,0.1216718);
   new_histo_group_ZZ_wh3l_zg_13TeV_pt1126->SetBinContent(5,0.2012711);
   new_histo_group_ZZ_wh3l_zg_13TeV_pt1126->SetBinContent(6,0.03645855);
   new_histo_group_ZZ_wh3l_zg_13TeV_pt1126->SetBinContent(7,0.002412119);
   new_histo_group_ZZ_wh3l_zg_13TeV_pt1126->SetBinContent(8,0.02824018);
   new_histo_group_ZZ_wh3l_zg_13TeV_pt1126->SetBinError(2,0.06072218);
   new_histo_group_ZZ_wh3l_zg_13TeV_pt1126->SetBinError(3,0.06912919);
   new_histo_group_ZZ_wh3l_zg_13TeV_pt1126->SetBinError(4,0.07033346);
   new_histo_group_ZZ_wh3l_zg_13TeV_pt1126->SetBinError(5,0.09196018);
   new_histo_group_ZZ_wh3l_zg_13TeV_pt1126->SetBinError(6,0.03645855);
   new_histo_group_ZZ_wh3l_zg_13TeV_pt1126->SetBinError(7,0.002412119);
   new_histo_group_ZZ_wh3l_zg_13TeV_pt1126->SetBinError(8,0.02824018);
   new_histo_group_ZZ_wh3l_zg_13TeV_pt1126->SetEntries(16);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_zg_13TeV_pt1126->SetFillColor(ci);
   new_histo_group_ZZ_wh3l_zg_13TeV_pt1126->SetFillStyle(3001);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_zg_13TeV_pt1126->SetLineColor(ci);
   new_histo_group_ZZ_wh3l_zg_13TeV_pt1126->GetXaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_zg_13TeV_pt1126->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_zg_13TeV_pt1126->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_zg_13TeV_pt1126->GetXaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_zg_13TeV_pt1126->GetYaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_zg_13TeV_pt1126->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_zg_13TeV_pt1126->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_zg_13TeV_pt1126->GetYaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_zg_13TeV_pt1126->GetZaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_zg_13TeV_pt1126->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_zg_13TeV_pt1126->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_zg_13TeV_pt1126->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_pt1->Add(new_histo_group_ZZ_wh3l_zg_13TeV_pt1,"");
   
   TH1D *new_histo_group_WZ_wh3l_zg_13TeV_pt1127 = new TH1D("new_histo_group_WZ_wh3l_zg_13TeV_pt1127","histo_WZ",25,10,200);
   new_histo_group_WZ_wh3l_zg_13TeV_pt1127->SetBinContent(2,0.09604622);
   new_histo_group_WZ_wh3l_zg_13TeV_pt1127->SetBinContent(3,0.3425023);
   new_histo_group_WZ_wh3l_zg_13TeV_pt1127->SetBinContent(4,0.6157995);
   new_histo_group_WZ_wh3l_zg_13TeV_pt1127->SetBinContent(5,0.3821572);
   new_histo_group_WZ_wh3l_zg_13TeV_pt1127->SetBinContent(6,0.2784936);
   new_histo_group_WZ_wh3l_zg_13TeV_pt1127->SetBinContent(7,0.07313556);
   new_histo_group_WZ_wh3l_zg_13TeV_pt1127->SetBinContent(8,0.04965948);
   new_histo_group_WZ_wh3l_zg_13TeV_pt1127->SetBinContent(9,0.0358967);
   new_histo_group_WZ_wh3l_zg_13TeV_pt1127->SetBinContent(10,0.004833604);
   new_histo_group_WZ_wh3l_zg_13TeV_pt1127->SetBinError(2,0.02268495);
   new_histo_group_WZ_wh3l_zg_13TeV_pt1127->SetBinError(3,0.0432124);
   new_histo_group_WZ_wh3l_zg_13TeV_pt1127->SetBinError(4,0.05831086);
   new_histo_group_WZ_wh3l_zg_13TeV_pt1127->SetBinError(5,0.04551885);
   new_histo_group_WZ_wh3l_zg_13TeV_pt1127->SetBinError(6,0.03849706);
   new_histo_group_WZ_wh3l_zg_13TeV_pt1127->SetBinError(7,0.01994098);
   new_histo_group_WZ_wh3l_zg_13TeV_pt1127->SetBinError(8,0.01675738);
   new_histo_group_WZ_wh3l_zg_13TeV_pt1127->SetBinError(9,0.01367397);
   new_histo_group_WZ_wh3l_zg_13TeV_pt1127->SetBinError(10,0.004833604);
   new_histo_group_WZ_wh3l_zg_13TeV_pt1127->SetEntries(376);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_zg_13TeV_pt1127->SetFillColor(ci);
   new_histo_group_WZ_wh3l_zg_13TeV_pt1127->SetFillStyle(3001);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_zg_13TeV_pt1127->SetLineColor(ci);
   new_histo_group_WZ_wh3l_zg_13TeV_pt1127->GetXaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_zg_13TeV_pt1127->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_zg_13TeV_pt1127->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_zg_13TeV_pt1127->GetXaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_zg_13TeV_pt1127->GetYaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_zg_13TeV_pt1127->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_zg_13TeV_pt1127->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_zg_13TeV_pt1127->GetYaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_zg_13TeV_pt1127->GetZaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_zg_13TeV_pt1127->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_zg_13TeV_pt1127->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_zg_13TeV_pt1127->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_pt1->Add(new_histo_group_WZ_wh3l_zg_13TeV_pt1,"");
   
   TH1D *new_histo_group_Higgs_wh3l_zg_13TeV_pt1128 = new TH1D("new_histo_group_Higgs_wh3l_zg_13TeV_pt1128","histo_H_htt",25,10,200);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt1128->SetBinContent(2,0.00321391);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt1128->SetBinContent(3,0.01123054);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt1128->SetBinContent(4,0.02755996);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt1128->SetBinContent(5,0.02935608);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt1128->SetBinContent(6,0.00812441);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt1128->SetBinContent(7,0.006490831);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt1128->SetBinContent(8,0.002494334);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt1128->SetBinContent(9,0.0003065907);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt1128->SetBinError(2,0.001933089);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt1128->SetBinError(3,0.0032285);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt1128->SetBinError(4,0.005172925);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt1128->SetBinError(5,0.006054892);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt1128->SetBinError(6,0.002938305);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt1128->SetBinError(7,0.002676181);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt1128->SetBinError(8,0.001274748);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt1128->SetBinError(9,0.0003065907);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt1128->SetEntries(180);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt1128->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_zg_13TeV_pt1128->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt1128->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt1128->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt1128->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt1128->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt1128->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt1128->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt1128->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt1128->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt1128->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt1128->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt1128->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt1128->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt1128->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_pt1->Add(new_histo_group_Higgs_wh3l_zg_13TeV_pt1,"");
   thsBackground_grouped_wh3l_zg_13TeV_pt1->Draw("hist same");
   
   thsSignal_grouped_wh3l_zg_13TeV_pt1 = new THStack();
   thsSignal_grouped_wh3l_zg_13TeV_pt1->SetName("thsSignal_grouped_wh3l_zg_13TeV_pt1");
   thsSignal_grouped_wh3l_zg_13TeV_pt1->SetTitle("thsSignal_grouped_wh3l_zg_13TeV_pt1");
   
   TH1F *thsSignal_grouped_wh3l_zg_13TeV_pt1_stack_26 = new TH1F("thsSignal_grouped_wh3l_zg_13TeV_pt1_stack_26","thsSignal_grouped_wh3l_zg_13TeV_pt1",25,10,200);
   thsSignal_grouped_wh3l_zg_13TeV_pt1_stack_26->SetMinimum(0);
   thsSignal_grouped_wh3l_zg_13TeV_pt1_stack_26->SetMaximum(0.03718152);
   thsSignal_grouped_wh3l_zg_13TeV_pt1_stack_26->SetDirectory(0);
   thsSignal_grouped_wh3l_zg_13TeV_pt1_stack_26->SetStats(0);
   thsSignal_grouped_wh3l_zg_13TeV_pt1_stack_26->SetLineStyle(0);
   thsSignal_grouped_wh3l_zg_13TeV_pt1_stack_26->SetMarkerStyle(20);
   thsSignal_grouped_wh3l_zg_13TeV_pt1_stack_26->GetXaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_zg_13TeV_pt1_stack_26->GetXaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_zg_13TeV_pt1_stack_26->GetXaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_zg_13TeV_pt1_stack_26->GetXaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_zg_13TeV_pt1_stack_26->GetXaxis()->SetTitleOffset(0.9);
   thsSignal_grouped_wh3l_zg_13TeV_pt1_stack_26->GetXaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_zg_13TeV_pt1_stack_26->GetYaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_zg_13TeV_pt1_stack_26->GetYaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_zg_13TeV_pt1_stack_26->GetYaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_zg_13TeV_pt1_stack_26->GetYaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_zg_13TeV_pt1_stack_26->GetYaxis()->SetTitleOffset(1.25);
   thsSignal_grouped_wh3l_zg_13TeV_pt1_stack_26->GetYaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_zg_13TeV_pt1_stack_26->GetZaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_zg_13TeV_pt1_stack_26->GetZaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_zg_13TeV_pt1_stack_26->GetZaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_zg_13TeV_pt1_stack_26->GetZaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_zg_13TeV_pt1_stack_26->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_zg_13TeV_pt1->SetHistogram(thsSignal_grouped_wh3l_zg_13TeV_pt1_stack_26);
   
   
   TH1D *new_histo_group_Higgs_wh3l_zg_13TeV_pt1129 = new TH1D("new_histo_group_Higgs_wh3l_zg_13TeV_pt1129","histo_H_htt",25,10,200);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt1129->SetBinContent(2,0.00321391);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt1129->SetBinContent(3,0.01123054);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt1129->SetBinContent(4,0.02755996);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt1129->SetBinContent(5,0.02935608);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt1129->SetBinContent(6,0.00812441);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt1129->SetBinContent(7,0.006490831);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt1129->SetBinContent(8,0.002494334);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt1129->SetBinContent(9,0.0003065907);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt1129->SetBinError(2,0.001933089);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt1129->SetBinError(3,0.0032285);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt1129->SetBinError(4,0.005172925);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt1129->SetBinError(5,0.006054892);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt1129->SetBinError(6,0.002938305);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt1129->SetBinError(7,0.002676181);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt1129->SetBinError(8,0.001274748);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt1129->SetBinError(9,0.0003065907);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt1129->SetEntries(180);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt1129->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_zg_13TeV_pt1129->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt1129->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt1129->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt1129->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt1129->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt1129->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt1129->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt1129->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt1129->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt1129->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt1129->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt1129->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt1129->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt1129->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_zg_13TeV_pt1->Add(new_histo_group_Higgs_wh3l_zg_13TeV_pt1,"");
   thsSignal_grouped_wh3l_zg_13TeV_pt1->Draw("hist same noclear");
   
   Double_t _fx3025[25] = {
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
   Double_t _fy3025[25] = {
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
   Double_t _felx3025[25] = {
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
   Double_t _fely3025[25] = {
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
   Double_t _fehx3025[25] = {
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
   Double_t _fehy3025[25] = {
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
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(25,_fx3025,_fy3025,_felx3025,_fehx3025,_fely3025,_fehy3025);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(12);
   grae->SetFillStyle(3004);
   grae->SetLineColor(12);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3025 = new TH1F("Graph_Graph3025","",100,0,219);
   Graph_Graph3025->SetMinimum(-6.07139);
   Graph_Graph3025->SetMaximum(66.54417);
   Graph_Graph3025->SetDirectory(0);
   Graph_Graph3025->SetStats(0);
   Graph_Graph3025->SetLineStyle(0);
   Graph_Graph3025->SetMarkerStyle(20);
   Graph_Graph3025->GetXaxis()->SetLabelFont(42);
   Graph_Graph3025->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3025->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3025->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3025->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3025->GetXaxis()->SetTitleFont(42);
   Graph_Graph3025->GetYaxis()->SetLabelFont(42);
   Graph_Graph3025->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3025->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3025->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3025->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3025->GetYaxis()->SetTitleFont(42);
   Graph_Graph3025->GetZaxis()->SetLabelFont(42);
   Graph_Graph3025->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3025->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3025->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3025->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3025);
   
   grae->Draw("2");
   
   Double_t _fx3026[25] = {
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
   Double_t _fy3026[25] = {
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
   Double_t _felx3026[25] = {
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
   Double_t _fely3026[25] = {
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
   Double_t _fehx3026[25] = {
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
   Double_t _fehy3026[25] = {
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
   grae = new TGraphAsymmErrors(25,_fx3026,_fy3026,_felx3026,_fehx3026,_fely3026,_fehy3026);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(1);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3026 = new TH1F("Graph_Graph3026","",100,0,219);
   Graph_Graph3026->SetMinimum(0);
   Graph_Graph3026->SetMaximum(68.63343);
   Graph_Graph3026->SetDirectory(0);
   Graph_Graph3026->SetStats(0);
   Graph_Graph3026->SetLineStyle(0);
   Graph_Graph3026->SetMarkerStyle(20);
   Graph_Graph3026->GetXaxis()->SetLabelFont(42);
   Graph_Graph3026->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3026->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3026->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3026->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3026->GetXaxis()->SetTitleFont(42);
   Graph_Graph3026->GetYaxis()->SetLabelFont(42);
   Graph_Graph3026->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3026->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3026->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3026->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3026->GetYaxis()->SetTitleFont(42);
   Graph_Graph3026->GetZaxis()->SetLabelFont(42);
   Graph_Graph3026->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3026->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3026->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3026->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3026);
   
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
   
   TH1F *hframe_copy130 = new TH1F("hframe_copy130","",1000,10,200);
   hframe_copy130->SetMinimum(0);
   hframe_copy130->SetMaximum(153.3712);
   hframe_copy130->SetDirectory(0);
   hframe_copy130->SetStats(0);
   hframe_copy130->SetLineStyle(0);
   hframe_copy130->SetMarkerStyle(20);
   hframe_copy130->GetXaxis()->SetTitle("lept1_p_{T} [GeV]");
   hframe_copy130->GetXaxis()->SetNdivisions(506);
   hframe_copy130->GetXaxis()->SetLabelFont(42);
   hframe_copy130->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy130->GetXaxis()->SetLabelSize(0.05);
   hframe_copy130->GetXaxis()->SetTitleSize(0.06);
   hframe_copy130->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy130->GetXaxis()->SetTitleFont(42);
   hframe_copy130->GetYaxis()->SetTitle("Events");
   hframe_copy130->GetYaxis()->SetLabelFont(42);
   hframe_copy130->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy130->GetYaxis()->SetLabelSize(0.05);
   hframe_copy130->GetYaxis()->SetTitleSize(0.06);
   hframe_copy130->GetYaxis()->SetTitleOffset(1.25);
   hframe_copy130->GetYaxis()->SetTitleFont(42);
   hframe_copy130->GetZaxis()->SetLabelFont(42);
   hframe_copy130->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy130->GetZaxis()->SetLabelSize(0.05);
   hframe_copy130->GetZaxis()->SetTitleSize(0.06);
   hframe_copy130->GetZaxis()->SetTitleFont(42);
   hframe_copy130->Draw("sameaxis");
   ccwh3l_zg_13TeV_pt1->Modified();
   ccwh3l_zg_13TeV_pt1->cd();
   ccwh3l_zg_13TeV_pt1->SetSelected(ccwh3l_zg_13TeV_pt1);
}
