void c_wh3l_MET_JetV_13TeV_pt1()
{
//=========Macro generated from canvas: ccwh3l_MET_JetV_13TeV_pt1/cc
//=========  (Sun Jul  3 01:21:52 2016) by ROOT version6.02/13
   TCanvas *ccwh3l_MET_JetV_13TeV_pt1 = new TCanvas("ccwh3l_MET_JetV_13TeV_pt1", "cc",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   ccwh3l_MET_JetV_13TeV_pt1->SetHighLightColor(2);
   ccwh3l_MET_JetV_13TeV_pt1->Range(-28,-1.353194,209.5,9.055993);
   ccwh3l_MET_JetV_13TeV_pt1->SetFillColor(0);
   ccwh3l_MET_JetV_13TeV_pt1->SetBorderMode(0);
   ccwh3l_MET_JetV_13TeV_pt1->SetBorderSize(2);
   ccwh3l_MET_JetV_13TeV_pt1->SetTickx(1);
   ccwh3l_MET_JetV_13TeV_pt1->SetTicky(1);
   ccwh3l_MET_JetV_13TeV_pt1->SetLeftMargin(0.16);
   ccwh3l_MET_JetV_13TeV_pt1->SetRightMargin(0.04);
   ccwh3l_MET_JetV_13TeV_pt1->SetTopMargin(0.05);
   ccwh3l_MET_JetV_13TeV_pt1->SetBottomMargin(0.13);
   ccwh3l_MET_JetV_13TeV_pt1->SetFrameFillStyle(0);
   ccwh3l_MET_JetV_13TeV_pt1->SetFrameBorderMode(0);
   ccwh3l_MET_JetV_13TeV_pt1->SetFrameFillStyle(0);
   ccwh3l_MET_JetV_13TeV_pt1->SetFrameBorderMode(0);
   
   TH1F *hframe121 = new TH1F("hframe121","",1000,10,200);
   hframe121->SetMinimum(0);
   hframe121->SetMaximum(8.535534);
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
   
   THStack *thsBackground_grouped_wh3l_MET_JetV_13TeV_pt1 = new THStack();
   thsBackground_grouped_wh3l_MET_JetV_13TeV_pt1->SetName("thsBackground_grouped_wh3l_MET_JetV_13TeV_pt1");
   thsBackground_grouped_wh3l_MET_JetV_13TeV_pt1->SetTitle("thsBackground_grouped_wh3l_MET_JetV_13TeV_pt1");
   
   TH1F *thsBackground_grouped_wh3l_MET_JetV_13TeV_pt1_stack_25 = new TH1F("thsBackground_grouped_wh3l_MET_JetV_13TeV_pt1_stack_25","thsBackground_grouped_wh3l_MET_JetV_13TeV_pt1",25,10,200);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_pt1_stack_25->SetMinimum(-0.510441);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_pt1_stack_25->SetMaximum(2.107509);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_pt1_stack_25->SetDirectory(0);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_pt1_stack_25->SetStats(0);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_pt1_stack_25->SetLineStyle(0);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_pt1_stack_25->SetMarkerStyle(20);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_pt1_stack_25->GetXaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_pt1_stack_25->GetXaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_pt1_stack_25->GetXaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_pt1_stack_25->GetXaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_pt1_stack_25->GetXaxis()->SetTitleOffset(0.9);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_pt1_stack_25->GetXaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_pt1_stack_25->GetYaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_pt1_stack_25->GetYaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_pt1_stack_25->GetYaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_pt1_stack_25->GetYaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_pt1_stack_25->GetYaxis()->SetTitleOffset(1.25);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_pt1_stack_25->GetYaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_pt1_stack_25->GetZaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_pt1_stack_25->GetZaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_pt1_stack_25->GetZaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_pt1_stack_25->GetZaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_pt1_stack_25->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_pt1->SetHistogram(thsBackground_grouped_wh3l_MET_JetV_13TeV_pt1_stack_25);
   
   
   TH1D *new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt1122 = new TH1D("new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt1122","histo_Fake",25,10,200);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt1122->SetBinContent(2,-0.03820547);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt1122->SetBinContent(3,0.0391984);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt1122->SetBinContent(4,-0.2300273);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt1122->SetBinContent(5,0.5562551);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt1122->SetBinContent(6,0.2214166);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt1122->SetBinContent(7,-0.008101332);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt1122->SetBinContent(8,1.1263);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt1122->SetBinContent(9,0.6436369);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt1122->SetBinContent(10,0.4643462);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt1122->SetBinContent(13,-0.006707157);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt1122->SetBinContent(24,-0.01470217);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt1122->SetBinContent(25,0.1345139);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt1122->SetBinError(2,0.03820547);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt1122->SetBinError(3,0.1428288);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt1122->SetBinError(4,0.2804138);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt1122->SetBinError(5,0.5340191);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt1122->SetBinError(6,0.2798715);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt1122->SetBinError(7,0.007561613);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt1122->SetBinError(8,0.8808511);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt1122->SetBinError(9,0.6434307);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt1122->SetBinError(10,0.415269);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt1122->SetBinError(13,0.006707157);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt1122->SetBinError(24,0.01470217);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt1122->SetBinError(25,0.1345139);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt1122->SetEntries(34);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt1122->SetFillColor(ci);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt1122->SetFillStyle(3001);

   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt1122->SetLineColor(ci);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt1122->GetXaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt1122->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt1122->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt1122->GetXaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt1122->GetYaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt1122->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt1122->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt1122->GetYaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt1122->GetZaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt1122->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt1122->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt1122->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_pt1->Add(new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt1,"");
   
   TH1D *new_histo_group_WW_wh3l_MET_JetV_13TeV_pt1123 = new TH1D("new_histo_group_WW_wh3l_MET_JetV_13TeV_pt1123","histo_WW",25,10,200);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_pt1123->SetBinContent(3,0.0161241);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_pt1123->SetBinContent(5,0.01708511);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_pt1123->SetBinContent(7,0.01039136);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_pt1123->SetBinError(3,0.0161241);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_pt1123->SetBinError(5,0.01708511);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_pt1123->SetBinError(7,0.01039136);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_pt1123->SetEntries(3);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_MET_JetV_13TeV_pt1123->SetFillColor(ci);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_pt1123->SetFillStyle(3001);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_MET_JetV_13TeV_pt1123->SetLineColor(ci);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_pt1123->GetXaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_pt1123->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_pt1123->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_pt1123->GetXaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_pt1123->GetYaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_pt1123->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_pt1123->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_pt1123->GetYaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_pt1123->GetZaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_pt1123->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_pt1123->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_pt1123->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_pt1->Add(new_histo_group_WW_wh3l_MET_JetV_13TeV_pt1,"");
   
   TH1D *new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt1124 = new TH1D("new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt1124","histo_VVV",25,10,200);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt1124->SetBinContent(3,0.001881728);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt1124->SetBinContent(4,0.007612387);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt1124->SetBinContent(5,0.01436276);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt1124->SetBinContent(6,0.007666668);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt1124->SetBinContent(7,0.004998919);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt1124->SetBinContent(8,0.0138033);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt1124->SetBinContent(9,0.01209215);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt1124->SetBinContent(10,0.007930967);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt1124->SetBinContent(11,0.005224356);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt1124->SetBinContent(12,0.00524324);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt1124->SetBinContent(13,0.01364623);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt1124->SetBinContent(14,0.004794366);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt1124->SetBinContent(15,0.0007784473);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt1124->SetBinContent(16,0.006614416);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt1124->SetBinContent(17,0.001126102);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt1124->SetBinContent(18,0.006553089);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt1124->SetBinContent(19,0.004291118);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt1124->SetBinContent(20,-0.002830734);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt1124->SetBinContent(22,0.002164338);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt1124->SetBinContent(24,0.001996808);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt1124->SetBinContent(25,0.00256931);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt1124->SetBinContent(26,0.007422334);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt1124->SetBinError(3,0.001881728);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt1124->SetBinError(4,0.004001707);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt1124->SetBinError(5,0.00590591);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt1124->SetBinError(6,0.003993735);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt1124->SetBinError(7,0.006248636);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt1124->SetBinError(8,0.005356983);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt1124->SetBinError(9,0.004990734);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt1124->SetBinError(10,0.00638214);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt1124->SetBinError(11,0.003712062);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt1124->SetBinError(12,0.003722091);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt1124->SetBinError(13,0.005478898);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt1124->SetBinError(14,0.003394398);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt1124->SetBinError(15,0.0007784473);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt1124->SetBinError(16,0.003826523);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt1124->SetBinError(17,0.003987869);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt1124->SetBinError(18,0.003957399);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt1124->SetBinError(19,0.003134327);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt1124->SetBinError(20,0.002830734);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt1124->SetBinError(22,0.002164338);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt1124->SetBinError(24,0.001996808);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt1124->SetBinError(25,0.00256931);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt1124->SetBinError(26,0.004038992);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt1124->SetEntries(80);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt1124->SetFillColor(ci);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt1124->SetFillStyle(3001);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt1124->SetLineColor(ci);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt1124->GetXaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt1124->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt1124->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt1124->GetXaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt1124->GetYaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt1124->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt1124->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt1124->GetYaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt1124->GetZaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt1124->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt1124->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt1124->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_pt1->Add(new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt1,"");
   
   TH1D *new_histo_group_Vg_wh3l_MET_JetV_13TeV_pt1125 = new TH1D("new_histo_group_Vg_wh3l_MET_JetV_13TeV_pt1125","histo_Vg",25,10,200);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_pt1125->SetBinContent(6,0.0522728);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_pt1125->SetBinError(6,0.0522728);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_pt1125->SetEntries(1);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_pt1125->SetFillColor(ci);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_pt1125->SetFillStyle(3001);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_pt1125->SetLineColor(ci);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_pt1125->GetXaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_pt1125->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_pt1125->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_pt1125->GetXaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_pt1125->GetYaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_pt1125->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_pt1125->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_pt1125->GetYaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_pt1125->GetZaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_pt1125->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_pt1125->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_pt1125->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_pt1->Add(new_histo_group_Vg_wh3l_MET_JetV_13TeV_pt1,"");
   
   TH1D *new_histo_group_ZZ_wh3l_MET_JetV_13TeV_pt1126 = new TH1D("new_histo_group_ZZ_wh3l_MET_JetV_13TeV_pt1126","histo_ZZ",25,10,200);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_pt1126->SetBinContent(7,0.0427135);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_pt1126->SetBinContent(26,0.03513683);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_pt1126->SetBinError(7,0.0427135);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_pt1126->SetBinError(26,0.03513683);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_pt1126->SetEntries(2);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_pt1126->SetFillColor(ci);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_pt1126->SetFillStyle(3001);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_pt1126->SetLineColor(ci);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_pt1126->GetXaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_pt1126->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_pt1126->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_pt1126->GetXaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_pt1126->GetYaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_pt1126->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_pt1126->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_pt1126->GetYaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_pt1126->GetZaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_pt1126->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_pt1126->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_pt1126->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_pt1->Add(new_histo_group_ZZ_wh3l_MET_JetV_13TeV_pt1,"");
   
   TH1D *new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt1127 = new TH1D("new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt1127","histo_WZ",25,10,200);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt1127->SetBinContent(2,0.01250105);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt1127->SetBinContent(3,0.07038392);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt1127->SetBinContent(4,0.0804238);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt1127->SetBinContent(5,0.09261466);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt1127->SetBinContent(6,0.1048172);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt1127->SetBinContent(7,0.05421446);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt1127->SetBinContent(8,0.04832075);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt1127->SetBinContent(9,0.05060402);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt1127->SetBinContent(10,0.01909841);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt1127->SetBinContent(11,0.01009699);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt1127->SetBinContent(12,0.02792931);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt1127->SetBinContent(13,0.01691928);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt1127->SetBinContent(15,0.01068012);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt1127->SetBinContent(16,0.005956865);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt1127->SetBinContent(17,0.008609055);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt1127->SetBinContent(18,0.01126229);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt1127->SetBinContent(19,0.006664773);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt1127->SetBinContent(21,0.0121873);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt1127->SetBinContent(22,0.005488627);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt1127->SetBinContent(23,0.01002252);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt1127->SetBinContent(26,0.005713332);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt1127->SetBinError(2,0.00866789);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt1127->SetBinError(3,0.01890205);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt1127->SetBinError(4,0.02062158);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt1127->SetBinError(5,0.02156458);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt1127->SetBinError(6,0.02350696);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt1127->SetBinError(7,0.01782308);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt1127->SetBinError(8,0.01645315);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt1127->SetBinError(9,0.01596283);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt1127->SetBinError(10,0.009635764);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt1127->SetBinError(11,0.007166653);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt1127->SetBinError(12,0.0131814);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt1127->SetBinError(13,0.01009139);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt1127->SetBinError(15,0.006797004);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt1127->SetBinError(16,0.005956865);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt1127->SetBinError(17,0.006665845);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt1127->SetBinError(18,0.007963641);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt1127->SetBinError(19,0.006664773);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt1127->SetBinError(21,0.00862591);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt1127->SetBinError(22,0.005488627);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt1127->SetBinError(23,0.007094807);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt1127->SetBinError(26,0.005713332);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt1127->SetEntries(136);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt1127->SetFillColor(ci);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt1127->SetFillStyle(3001);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt1127->SetLineColor(ci);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt1127->GetXaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt1127->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt1127->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt1127->GetXaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt1127->GetYaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt1127->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt1127->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt1127->GetYaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt1127->GetZaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt1127->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt1127->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt1127->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_pt1->Add(new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt1,"");
   
   TH1D *new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt1128 = new TH1D("new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt1128","histo_H_htt",25,10,200);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt1128->SetBinContent(2,0.001298338);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt1128->SetBinContent(3,0.01399981);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt1128->SetBinContent(4,0.02865634);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt1128->SetBinContent(5,0.02707872);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt1128->SetBinContent(6,0.03475917);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt1128->SetBinContent(7,0.03831008);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt1128->SetBinContent(8,0.02257349);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt1128->SetBinContent(9,0.01605328);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt1128->SetBinContent(10,0.01629793);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt1128->SetBinContent(11,0.01767254);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt1128->SetBinContent(12,0.006185602);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt1128->SetBinContent(13,0.007938048);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt1128->SetBinContent(14,0.01093931);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt1128->SetBinContent(15,0.002724295);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt1128->SetBinContent(16,0.005009022);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt1128->SetBinContent(17,0.009527956);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt1128->SetBinContent(18,0.007322075);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt1128->SetBinContent(19,0.003580051);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt1128->SetBinContent(20,0.003625271);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt1128->SetBinContent(21,0.001578325);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt1128->SetBinContent(22,0.0003849663);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt1128->SetBinContent(23,0.0003709679);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt1128->SetBinContent(25,0.003694924);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt1128->SetBinContent(26,0.003971215);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt1128->SetBinError(2,0.0005920712);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt1128->SetBinError(3,0.003403003);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt1128->SetBinError(4,0.005780734);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt1128->SetBinError(5,0.004990186);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt1128->SetBinError(6,0.00597943);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt1128->SetBinError(7,0.006357172);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt1128->SetBinError(8,0.005223023);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt1128->SetBinError(9,0.004451189);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt1128->SetBinError(10,0.005416063);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt1128->SetBinError(11,0.00430465);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt1128->SetBinError(12,0.002251114);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt1128->SetBinError(13,0.003150416);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt1128->SetBinError(14,0.003290005);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt1128->SetBinError(15,0.001036991);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt1128->SetBinError(16,0.002649234);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt1128->SetBinError(17,0.003304202);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt1128->SetBinError(18,0.003313939);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt1128->SetBinError(19,0.001985782);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt1128->SetBinError(20,0.001566432);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt1128->SetBinError(21,0.001084103);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt1128->SetBinError(22,0.0002738482);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt1128->SetBinError(23,0.0003709679);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt1128->SetBinError(25,0.001949716);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt1128->SetBinError(26,0.001037617);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt1128->SetEntries(512);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt1128->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt1128->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt1128->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt1128->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt1128->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt1128->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt1128->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt1128->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt1128->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt1128->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt1128->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt1128->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt1128->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt1128->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt1128->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_pt1->Add(new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt1,"");
   thsBackground_grouped_wh3l_MET_JetV_13TeV_pt1->Draw("hist same");
   
   thsSignal_grouped_wh3l_MET_JetV_13TeV_pt1 = new THStack();
   thsSignal_grouped_wh3l_MET_JetV_13TeV_pt1->SetName("thsSignal_grouped_wh3l_MET_JetV_13TeV_pt1");
   thsSignal_grouped_wh3l_MET_JetV_13TeV_pt1->SetTitle("thsSignal_grouped_wh3l_MET_JetV_13TeV_pt1");
   
   TH1F *thsSignal_grouped_wh3l_MET_JetV_13TeV_pt1_stack_26 = new TH1F("thsSignal_grouped_wh3l_MET_JetV_13TeV_pt1_stack_26","thsSignal_grouped_wh3l_MET_JetV_13TeV_pt1",25,10,200);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_pt1_stack_26->SetMinimum(0);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_pt1_stack_26->SetMaximum(0.04690061);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_pt1_stack_26->SetDirectory(0);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_pt1_stack_26->SetStats(0);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_pt1_stack_26->SetLineStyle(0);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_pt1_stack_26->SetMarkerStyle(20);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_pt1_stack_26->GetXaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_pt1_stack_26->GetXaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_pt1_stack_26->GetXaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_pt1_stack_26->GetXaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_pt1_stack_26->GetXaxis()->SetTitleOffset(0.9);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_pt1_stack_26->GetXaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_pt1_stack_26->GetYaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_pt1_stack_26->GetYaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_pt1_stack_26->GetYaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_pt1_stack_26->GetYaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_pt1_stack_26->GetYaxis()->SetTitleOffset(1.25);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_pt1_stack_26->GetYaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_pt1_stack_26->GetZaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_pt1_stack_26->GetZaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_pt1_stack_26->GetZaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_pt1_stack_26->GetZaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_pt1_stack_26->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_pt1->SetHistogram(thsSignal_grouped_wh3l_MET_JetV_13TeV_pt1_stack_26);
   
   
   TH1D *new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt1129 = new TH1D("new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt1129","histo_H_htt",25,10,200);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt1129->SetBinContent(2,0.001298338);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt1129->SetBinContent(3,0.01399981);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt1129->SetBinContent(4,0.02865634);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt1129->SetBinContent(5,0.02707872);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt1129->SetBinContent(6,0.03475917);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt1129->SetBinContent(7,0.03831008);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt1129->SetBinContent(8,0.02257349);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt1129->SetBinContent(9,0.01605328);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt1129->SetBinContent(10,0.01629793);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt1129->SetBinContent(11,0.01767254);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt1129->SetBinContent(12,0.006185602);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt1129->SetBinContent(13,0.007938048);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt1129->SetBinContent(14,0.01093931);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt1129->SetBinContent(15,0.002724295);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt1129->SetBinContent(16,0.005009022);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt1129->SetBinContent(17,0.009527956);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt1129->SetBinContent(18,0.007322075);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt1129->SetBinContent(19,0.003580051);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt1129->SetBinContent(20,0.003625271);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt1129->SetBinContent(21,0.001578325);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt1129->SetBinContent(22,0.0003849663);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt1129->SetBinContent(23,0.0003709679);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt1129->SetBinContent(25,0.003694924);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt1129->SetBinContent(26,0.003971215);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt1129->SetBinError(2,0.0005920712);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt1129->SetBinError(3,0.003403003);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt1129->SetBinError(4,0.005780734);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt1129->SetBinError(5,0.004990186);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt1129->SetBinError(6,0.00597943);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt1129->SetBinError(7,0.006357172);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt1129->SetBinError(8,0.005223023);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt1129->SetBinError(9,0.004451189);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt1129->SetBinError(10,0.005416063);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt1129->SetBinError(11,0.00430465);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt1129->SetBinError(12,0.002251114);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt1129->SetBinError(13,0.003150416);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt1129->SetBinError(14,0.003290005);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt1129->SetBinError(15,0.001036991);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt1129->SetBinError(16,0.002649234);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt1129->SetBinError(17,0.003304202);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt1129->SetBinError(18,0.003313939);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt1129->SetBinError(19,0.001985782);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt1129->SetBinError(20,0.001566432);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt1129->SetBinError(21,0.001084103);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt1129->SetBinError(22,0.0002738482);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt1129->SetBinError(23,0.0003709679);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt1129->SetBinError(25,0.001949716);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt1129->SetBinError(26,0.001037617);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt1129->SetEntries(512);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt1129->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt1129->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt1129->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt1129->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt1129->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt1129->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt1129->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt1129->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt1129->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt1129->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt1129->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt1129->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt1129->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt1129->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt1129->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_pt1->Add(new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt1,"");
   thsSignal_grouped_wh3l_MET_JetV_13TeV_pt1->Draw("hist same noclear");
   
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
   -0.02570442,
   0.1275882,
   -0.1419911,
   0.6803177,
   0.3861733,
   0.1042169,
   1.188424,
   0.706333,
   0.4913756,
   0.01532135,
   0.03317255,
   0.02385835,
   0.004794366,
   0.01145857,
   0.01257128,
   0.009735156,
   0.01781538,
   0.01095589,
   -0.002830734,
   0.0121873,
   0.007652964,
   0.01002252,
   -0.01270536,
   0.1370832};
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
   0.0487574,
   0.07754455,
   0.3155935,
   0.6106283,
   0.311168,
   0.08373573,
   0.985083,
   0.701643,
   0.4609607,
   0.01207508,
   0.01774199,
   0.02625636,
   0.005876916,
   0.007581308,
   0.01183235,
   0.007880309,
   0.0136157,
   0.01070524,
   0.004004025,
   0.008632326,
   0.007969952,
   0.007101931,
   0.01758776,
   0.1449652};
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
   0.04875499,
   0.1803503,
   0.2672044,
   0.6106274,
   0.3680152,
   0.08498286,
   0.9850829,
   0.7016433,
   0.4609605,
   0.01207532,
   0.017725,
   0.02624995,
   0.005876906,
   0.007580485,
   0.01182419,
   0.01071931,
   0.01361417,
   0.01070383,
   0.004004025,
   0.008629647,
   0.00795563,
   0.007099793,
   0.01758776,
   0.1449652};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(25,_fx3025,_fy3025,_felx3025,_fehx3025,_fely3025,_fehy3025);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(12);
   grae->SetFillStyle(3004);
   grae->SetLineColor(12);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3025 = new TH1F("Graph_Graph3025","",100,0,219);
   Graph_Graph3025->SetMinimum(-0.7206937);
   Graph_Graph3025->SetMaximum(2.436616);
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
   0,
   1,
   2,
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
   0,
   0,
   0,
   1,
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
   0,
   0.8272524,
   1.29183,
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
   0,
   0,
   0,
   0.8272524,
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
   1.147908,
   2.29957,
   2.63791,
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
   1.147908,
   1.147908,
   1.147908,
   2.29957,
   1.147908};
   grae = new TGraphAsymmErrors(25,_fx3026,_fy3026,_felx3026,_fehx3026,_fely3026,_fehy3026);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(1);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3026 = new TH1F("Graph_Graph3026","",100,0,219);
   Graph_Graph3026->SetMinimum(0);
   Graph_Graph3026->SetMaximum(5.101701);
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
   TLegendEntry *entry=leg->AddEntry("new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt1","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_MET_JetV_13TeV_pt1","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt1","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_MET_JetV_13TeV_pt1","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_MET_JetV_13TeV_pt1","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt1","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt1","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_MET_JetV_13TeV_pt1","Data","EPL");
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
   entry=leg->AddEntry("new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt1","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_MET_JetV_13TeV_pt1","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt1","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_MET_JetV_13TeV_pt1","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_MET_JetV_13TeV_pt1","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt1","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt1","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_MET_JetV_13TeV_pt1","Data","EPL");
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
   hframe_copy130->SetMaximum(8.535534);
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
   ccwh3l_MET_JetV_13TeV_pt1->Modified();
   ccwh3l_MET_JetV_13TeV_pt1->cd();
   ccwh3l_MET_JetV_13TeV_pt1->SetSelected(ccwh3l_MET_JetV_13TeV_pt1);
}
