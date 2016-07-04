void c_wh3l_MET_JetV_ZVeto_13TeV_pt1()
{
//=========Macro generated from canvas: ccwh3l_MET_JetV_ZVeto_13TeV_pt1/cc
//=========  (Sun Jul  3 01:22:19 2016) by ROOT version6.02/13
   TCanvas *ccwh3l_MET_JetV_ZVeto_13TeV_pt1 = new TCanvas("ccwh3l_MET_JetV_ZVeto_13TeV_pt1", "cc",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   ccwh3l_MET_JetV_ZVeto_13TeV_pt1->SetHighLightColor(2);
   ccwh3l_MET_JetV_ZVeto_13TeV_pt1->Range(-28,-1.353194,209.5,9.055993);
   ccwh3l_MET_JetV_ZVeto_13TeV_pt1->SetFillColor(0);
   ccwh3l_MET_JetV_ZVeto_13TeV_pt1->SetBorderMode(0);
   ccwh3l_MET_JetV_ZVeto_13TeV_pt1->SetBorderSize(2);
   ccwh3l_MET_JetV_ZVeto_13TeV_pt1->SetTickx(1);
   ccwh3l_MET_JetV_ZVeto_13TeV_pt1->SetTicky(1);
   ccwh3l_MET_JetV_ZVeto_13TeV_pt1->SetLeftMargin(0.16);
   ccwh3l_MET_JetV_ZVeto_13TeV_pt1->SetRightMargin(0.04);
   ccwh3l_MET_JetV_ZVeto_13TeV_pt1->SetTopMargin(0.05);
   ccwh3l_MET_JetV_ZVeto_13TeV_pt1->SetBottomMargin(0.13);
   ccwh3l_MET_JetV_ZVeto_13TeV_pt1->SetFrameFillStyle(0);
   ccwh3l_MET_JetV_ZVeto_13TeV_pt1->SetFrameBorderMode(0);
   ccwh3l_MET_JetV_ZVeto_13TeV_pt1->SetFrameFillStyle(0);
   ccwh3l_MET_JetV_ZVeto_13TeV_pt1->SetFrameBorderMode(0);
   
   TH1F *hframe511 = new TH1F("hframe511","",1000,10,200);
   hframe511->SetMinimum(0);
   hframe511->SetMaximum(8.535534);
   hframe511->SetDirectory(0);
   hframe511->SetStats(0);
   hframe511->SetLineStyle(0);
   hframe511->SetMarkerStyle(20);
   hframe511->GetXaxis()->SetTitle("lept1_p_{T} [GeV]");
   hframe511->GetXaxis()->SetNdivisions(506);
   hframe511->GetXaxis()->SetLabelFont(42);
   hframe511->GetXaxis()->SetLabelOffset(0.007);
   hframe511->GetXaxis()->SetLabelSize(0.05);
   hframe511->GetXaxis()->SetTitleSize(0.06);
   hframe511->GetXaxis()->SetTitleOffset(0.9);
   hframe511->GetXaxis()->SetTitleFont(42);
   hframe511->GetYaxis()->SetTitle("Events");
   hframe511->GetYaxis()->SetLabelFont(42);
   hframe511->GetYaxis()->SetLabelOffset(0.007);
   hframe511->GetYaxis()->SetLabelSize(0.05);
   hframe511->GetYaxis()->SetTitleSize(0.06);
   hframe511->GetYaxis()->SetTitleOffset(1.25);
   hframe511->GetYaxis()->SetTitleFont(42);
   hframe511->GetZaxis()->SetLabelFont(42);
   hframe511->GetZaxis()->SetLabelOffset(0.007);
   hframe511->GetZaxis()->SetLabelSize(0.05);
   hframe511->GetZaxis()->SetTitleSize(0.06);
   hframe511->GetZaxis()->SetTitleFont(42);
   hframe511->Draw(" ");
   
   THStack *thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt1 = new THStack();
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt1->SetName("thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt1");
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt1->SetTitle("thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt1");
   
   TH1F *thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt1_stack_103 = new TH1F("thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt1_stack_103","thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt1",25,10,200);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt1_stack_103->SetMinimum(-0.510441);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt1_stack_103->SetMaximum(2.107509);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt1_stack_103->SetDirectory(0);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt1_stack_103->SetStats(0);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt1_stack_103->SetLineStyle(0);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt1_stack_103->SetMarkerStyle(20);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt1_stack_103->GetXaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt1_stack_103->GetXaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt1_stack_103->GetXaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt1_stack_103->GetXaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt1_stack_103->GetXaxis()->SetTitleOffset(0.9);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt1_stack_103->GetXaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt1_stack_103->GetYaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt1_stack_103->GetYaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt1_stack_103->GetYaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt1_stack_103->GetYaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt1_stack_103->GetYaxis()->SetTitleOffset(1.25);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt1_stack_103->GetYaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt1_stack_103->GetZaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt1_stack_103->GetZaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt1_stack_103->GetZaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt1_stack_103->GetZaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt1_stack_103->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt1->SetHistogram(thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt1_stack_103);
   
   
   TH1D *new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_pt1512 = new TH1D("new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_pt1512","histo_Fake",25,10,200);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_pt1512->SetBinContent(2,-0.03820547);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_pt1512->SetBinContent(3,0.0391984);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_pt1512->SetBinContent(4,-0.2300273);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_pt1512->SetBinContent(5,0.5562551);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_pt1512->SetBinContent(6,0.2214166);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_pt1512->SetBinContent(7,-0.008101332);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_pt1512->SetBinContent(8,1.1263);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_pt1512->SetBinContent(9,0.6436369);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_pt1512->SetBinContent(10,0.4643462);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_pt1512->SetBinContent(13,-0.006707157);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_pt1512->SetBinContent(24,-0.01470217);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_pt1512->SetBinContent(25,0.1345139);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_pt1512->SetBinError(2,0.03820547);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_pt1512->SetBinError(3,0.1428288);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_pt1512->SetBinError(4,0.2804138);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_pt1512->SetBinError(5,0.5340191);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_pt1512->SetBinError(6,0.2798715);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_pt1512->SetBinError(7,0.007561613);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_pt1512->SetBinError(8,0.8808511);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_pt1512->SetBinError(9,0.6434307);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_pt1512->SetBinError(10,0.415269);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_pt1512->SetBinError(13,0.006707157);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_pt1512->SetBinError(24,0.01470217);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_pt1512->SetBinError(25,0.1345139);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_pt1512->SetEntries(34);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_pt1512->SetFillColor(ci);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_pt1512->SetFillStyle(3001);

   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_pt1512->SetLineColor(ci);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_pt1512->GetXaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_pt1512->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_pt1512->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_pt1512->GetXaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_pt1512->GetYaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_pt1512->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_pt1512->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_pt1512->GetYaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_pt1512->GetZaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_pt1512->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_pt1512->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_pt1512->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt1->Add(new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_pt1,"");
   
   TH1D *new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_pt1513 = new TH1D("new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_pt1513","histo_WW",25,10,200);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_pt1513->SetBinContent(3,0.0161241);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_pt1513->SetBinContent(5,0.01708511);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_pt1513->SetBinContent(7,0.01039136);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_pt1513->SetBinError(3,0.0161241);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_pt1513->SetBinError(5,0.01708511);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_pt1513->SetBinError(7,0.01039136);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_pt1513->SetEntries(3);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_pt1513->SetFillColor(ci);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_pt1513->SetFillStyle(3001);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_pt1513->SetLineColor(ci);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_pt1513->GetXaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_pt1513->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_pt1513->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_pt1513->GetXaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_pt1513->GetYaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_pt1513->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_pt1513->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_pt1513->GetYaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_pt1513->GetZaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_pt1513->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_pt1513->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_pt1513->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt1->Add(new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_pt1,"");
   
   TH1D *new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt1514 = new TH1D("new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt1514","histo_VVV",25,10,200);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt1514->SetBinContent(3,0.001881728);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt1514->SetBinContent(4,0.007612387);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt1514->SetBinContent(5,0.01436276);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt1514->SetBinContent(6,0.007666668);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt1514->SetBinContent(7,0.004998919);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt1514->SetBinContent(8,0.0138033);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt1514->SetBinContent(9,0.01209215);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt1514->SetBinContent(10,0.007930967);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt1514->SetBinContent(11,0.005224356);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt1514->SetBinContent(12,0.00524324);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt1514->SetBinContent(13,0.01364623);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt1514->SetBinContent(14,0.004794366);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt1514->SetBinContent(15,0.0007784473);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt1514->SetBinContent(16,0.006614416);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt1514->SetBinContent(17,0.001126102);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt1514->SetBinContent(18,0.006553089);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt1514->SetBinContent(19,0.004291118);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt1514->SetBinContent(20,-0.002830734);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt1514->SetBinContent(22,0.002164338);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt1514->SetBinContent(24,0.001996808);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt1514->SetBinContent(25,0.00256931);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt1514->SetBinContent(26,0.007422334);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt1514->SetBinError(3,0.001881728);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt1514->SetBinError(4,0.004001707);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt1514->SetBinError(5,0.00590591);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt1514->SetBinError(6,0.003993735);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt1514->SetBinError(7,0.006248636);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt1514->SetBinError(8,0.005356983);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt1514->SetBinError(9,0.004990734);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt1514->SetBinError(10,0.00638214);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt1514->SetBinError(11,0.003712062);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt1514->SetBinError(12,0.003722091);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt1514->SetBinError(13,0.005478898);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt1514->SetBinError(14,0.003394398);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt1514->SetBinError(15,0.0007784473);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt1514->SetBinError(16,0.003826523);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt1514->SetBinError(17,0.003987869);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt1514->SetBinError(18,0.003957399);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt1514->SetBinError(19,0.003134327);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt1514->SetBinError(20,0.002830734);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt1514->SetBinError(22,0.002164338);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt1514->SetBinError(24,0.001996808);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt1514->SetBinError(25,0.00256931);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt1514->SetBinError(26,0.004038992);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt1514->SetEntries(80);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt1514->SetFillColor(ci);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt1514->SetFillStyle(3001);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt1514->SetLineColor(ci);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt1514->GetXaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt1514->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt1514->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt1514->GetXaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt1514->GetYaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt1514->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt1514->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt1514->GetYaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt1514->GetZaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt1514->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt1514->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt1514->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt1->Add(new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt1,"");
   
   TH1D *new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_pt1515 = new TH1D("new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_pt1515","histo_Vg",25,10,200);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_pt1515->SetBinContent(6,0.0522728);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_pt1515->SetBinError(6,0.0522728);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_pt1515->SetEntries(1);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_pt1515->SetFillColor(ci);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_pt1515->SetFillStyle(3001);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_pt1515->SetLineColor(ci);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_pt1515->GetXaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_pt1515->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_pt1515->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_pt1515->GetXaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_pt1515->GetYaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_pt1515->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_pt1515->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_pt1515->GetYaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_pt1515->GetZaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_pt1515->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_pt1515->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_pt1515->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt1->Add(new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_pt1,"");
   
   TH1D *new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_pt1516 = new TH1D("new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_pt1516","histo_ZZ",25,10,200);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_pt1516->SetBinContent(7,0.0427135);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_pt1516->SetBinContent(26,0.03513683);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_pt1516->SetBinError(7,0.0427135);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_pt1516->SetBinError(26,0.03513683);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_pt1516->SetEntries(2);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_pt1516->SetFillColor(ci);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_pt1516->SetFillStyle(3001);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_pt1516->SetLineColor(ci);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_pt1516->GetXaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_pt1516->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_pt1516->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_pt1516->GetXaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_pt1516->GetYaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_pt1516->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_pt1516->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_pt1516->GetYaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_pt1516->GetZaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_pt1516->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_pt1516->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_pt1516->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt1->Add(new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_pt1,"");
   
   TH1D *new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt1517 = new TH1D("new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt1517","histo_WZ",25,10,200);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt1517->SetBinContent(2,0.01250105);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt1517->SetBinContent(3,0.07038392);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt1517->SetBinContent(4,0.0804238);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt1517->SetBinContent(5,0.09261466);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt1517->SetBinContent(6,0.1048172);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt1517->SetBinContent(7,0.05421446);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt1517->SetBinContent(8,0.04832075);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt1517->SetBinContent(9,0.05060402);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt1517->SetBinContent(10,0.01909841);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt1517->SetBinContent(11,0.01009699);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt1517->SetBinContent(12,0.02792931);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt1517->SetBinContent(13,0.01691928);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt1517->SetBinContent(15,0.01068012);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt1517->SetBinContent(16,0.005956865);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt1517->SetBinContent(17,0.008609055);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt1517->SetBinContent(18,0.01126229);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt1517->SetBinContent(19,0.006664773);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt1517->SetBinContent(21,0.0121873);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt1517->SetBinContent(22,0.005488627);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt1517->SetBinContent(23,0.01002252);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt1517->SetBinContent(26,0.005713332);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt1517->SetBinError(2,0.00866789);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt1517->SetBinError(3,0.01890205);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt1517->SetBinError(4,0.02062158);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt1517->SetBinError(5,0.02156458);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt1517->SetBinError(6,0.02350696);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt1517->SetBinError(7,0.01782308);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt1517->SetBinError(8,0.01645315);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt1517->SetBinError(9,0.01596283);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt1517->SetBinError(10,0.009635764);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt1517->SetBinError(11,0.007166653);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt1517->SetBinError(12,0.0131814);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt1517->SetBinError(13,0.01009139);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt1517->SetBinError(15,0.006797004);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt1517->SetBinError(16,0.005956865);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt1517->SetBinError(17,0.006665845);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt1517->SetBinError(18,0.007963641);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt1517->SetBinError(19,0.006664773);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt1517->SetBinError(21,0.00862591);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt1517->SetBinError(22,0.005488627);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt1517->SetBinError(23,0.007094807);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt1517->SetBinError(26,0.005713332);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt1517->SetEntries(136);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt1517->SetFillColor(ci);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt1517->SetFillStyle(3001);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt1517->SetLineColor(ci);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt1517->GetXaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt1517->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt1517->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt1517->GetXaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt1517->GetYaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt1517->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt1517->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt1517->GetYaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt1517->GetZaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt1517->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt1517->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt1517->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt1->Add(new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt1,"");
   
   TH1D *new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt1518 = new TH1D("new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt1518","histo_H_htt",25,10,200);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt1518->SetBinContent(2,0.001298338);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt1518->SetBinContent(3,0.01399981);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt1518->SetBinContent(4,0.02865634);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt1518->SetBinContent(5,0.02707872);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt1518->SetBinContent(6,0.03475917);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt1518->SetBinContent(7,0.03831008);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt1518->SetBinContent(8,0.02257349);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt1518->SetBinContent(9,0.01605328);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt1518->SetBinContent(10,0.01629793);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt1518->SetBinContent(11,0.01767254);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt1518->SetBinContent(12,0.006185602);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt1518->SetBinContent(13,0.007938048);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt1518->SetBinContent(14,0.01093931);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt1518->SetBinContent(15,0.002724295);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt1518->SetBinContent(16,0.005009022);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt1518->SetBinContent(17,0.009527956);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt1518->SetBinContent(18,0.007322075);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt1518->SetBinContent(19,0.003580051);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt1518->SetBinContent(20,0.003625271);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt1518->SetBinContent(21,0.001578325);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt1518->SetBinContent(22,0.0003849663);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt1518->SetBinContent(23,0.0003709679);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt1518->SetBinContent(25,0.003694924);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt1518->SetBinContent(26,0.003971215);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt1518->SetBinError(2,0.0005920712);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt1518->SetBinError(3,0.003403003);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt1518->SetBinError(4,0.005780734);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt1518->SetBinError(5,0.004990186);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt1518->SetBinError(6,0.00597943);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt1518->SetBinError(7,0.006357172);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt1518->SetBinError(8,0.005223023);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt1518->SetBinError(9,0.004451189);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt1518->SetBinError(10,0.005416063);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt1518->SetBinError(11,0.00430465);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt1518->SetBinError(12,0.002251114);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt1518->SetBinError(13,0.003150416);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt1518->SetBinError(14,0.003290005);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt1518->SetBinError(15,0.001036991);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt1518->SetBinError(16,0.002649234);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt1518->SetBinError(17,0.003304202);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt1518->SetBinError(18,0.003313939);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt1518->SetBinError(19,0.001985782);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt1518->SetBinError(20,0.001566432);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt1518->SetBinError(21,0.001084103);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt1518->SetBinError(22,0.0002738482);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt1518->SetBinError(23,0.0003709679);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt1518->SetBinError(25,0.001949716);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt1518->SetBinError(26,0.001037617);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt1518->SetEntries(512);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt1518->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt1518->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt1518->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt1518->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt1518->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt1518->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt1518->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt1518->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt1518->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt1518->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt1518->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt1518->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt1518->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt1518->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt1518->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt1->Add(new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt1,"");
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt1->Draw("hist same");
   
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt1 = new THStack();
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt1->SetName("thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt1");
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt1->SetTitle("thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt1");
   
   TH1F *thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt1_stack_104 = new TH1F("thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt1_stack_104","thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt1",25,10,200);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt1_stack_104->SetMinimum(0);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt1_stack_104->SetMaximum(0.04690061);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt1_stack_104->SetDirectory(0);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt1_stack_104->SetStats(0);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt1_stack_104->SetLineStyle(0);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt1_stack_104->SetMarkerStyle(20);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt1_stack_104->GetXaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt1_stack_104->GetXaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt1_stack_104->GetXaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt1_stack_104->GetXaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt1_stack_104->GetXaxis()->SetTitleOffset(0.9);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt1_stack_104->GetXaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt1_stack_104->GetYaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt1_stack_104->GetYaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt1_stack_104->GetYaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt1_stack_104->GetYaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt1_stack_104->GetYaxis()->SetTitleOffset(1.25);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt1_stack_104->GetYaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt1_stack_104->GetZaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt1_stack_104->GetZaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt1_stack_104->GetZaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt1_stack_104->GetZaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt1_stack_104->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt1->SetHistogram(thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt1_stack_104);
   
   
   TH1D *new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt1519 = new TH1D("new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt1519","histo_H_htt",25,10,200);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt1519->SetBinContent(2,0.001298338);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt1519->SetBinContent(3,0.01399981);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt1519->SetBinContent(4,0.02865634);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt1519->SetBinContent(5,0.02707872);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt1519->SetBinContent(6,0.03475917);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt1519->SetBinContent(7,0.03831008);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt1519->SetBinContent(8,0.02257349);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt1519->SetBinContent(9,0.01605328);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt1519->SetBinContent(10,0.01629793);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt1519->SetBinContent(11,0.01767254);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt1519->SetBinContent(12,0.006185602);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt1519->SetBinContent(13,0.007938048);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt1519->SetBinContent(14,0.01093931);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt1519->SetBinContent(15,0.002724295);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt1519->SetBinContent(16,0.005009022);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt1519->SetBinContent(17,0.009527956);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt1519->SetBinContent(18,0.007322075);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt1519->SetBinContent(19,0.003580051);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt1519->SetBinContent(20,0.003625271);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt1519->SetBinContent(21,0.001578325);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt1519->SetBinContent(22,0.0003849663);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt1519->SetBinContent(23,0.0003709679);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt1519->SetBinContent(25,0.003694924);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt1519->SetBinContent(26,0.003971215);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt1519->SetBinError(2,0.0005920712);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt1519->SetBinError(3,0.003403003);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt1519->SetBinError(4,0.005780734);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt1519->SetBinError(5,0.004990186);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt1519->SetBinError(6,0.00597943);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt1519->SetBinError(7,0.006357172);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt1519->SetBinError(8,0.005223023);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt1519->SetBinError(9,0.004451189);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt1519->SetBinError(10,0.005416063);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt1519->SetBinError(11,0.00430465);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt1519->SetBinError(12,0.002251114);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt1519->SetBinError(13,0.003150416);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt1519->SetBinError(14,0.003290005);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt1519->SetBinError(15,0.001036991);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt1519->SetBinError(16,0.002649234);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt1519->SetBinError(17,0.003304202);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt1519->SetBinError(18,0.003313939);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt1519->SetBinError(19,0.001985782);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt1519->SetBinError(20,0.001566432);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt1519->SetBinError(21,0.001084103);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt1519->SetBinError(22,0.0002738482);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt1519->SetBinError(23,0.0003709679);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt1519->SetBinError(25,0.001949716);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt1519->SetBinError(26,0.001037617);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt1519->SetEntries(512);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt1519->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt1519->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt1519->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt1519->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt1519->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt1519->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt1519->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt1519->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt1519->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt1519->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt1519->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt1519->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt1519->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt1519->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt1519->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt1->Add(new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt1,"");
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_13TeV_pt1->Draw("hist same noclear");
   
   Double_t _fx3103[25] = {
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
   Double_t _fy3103[25] = {
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
   Double_t _felx3103[25] = {
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
   Double_t _fely3103[25] = {
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
   Double_t _fehx3103[25] = {
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
   Double_t _fehy3103[25] = {
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
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(25,_fx3103,_fy3103,_felx3103,_fehx3103,_fely3103,_fehy3103);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(12);
   grae->SetFillStyle(3004);
   grae->SetLineColor(12);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3103 = new TH1F("Graph_Graph3103","",100,0,219);
   Graph_Graph3103->SetMinimum(-0.7206937);
   Graph_Graph3103->SetMaximum(2.436616);
   Graph_Graph3103->SetDirectory(0);
   Graph_Graph3103->SetStats(0);
   Graph_Graph3103->SetLineStyle(0);
   Graph_Graph3103->SetMarkerStyle(20);
   Graph_Graph3103->GetXaxis()->SetLabelFont(42);
   Graph_Graph3103->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3103->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3103->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3103->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3103->GetXaxis()->SetTitleFont(42);
   Graph_Graph3103->GetYaxis()->SetLabelFont(42);
   Graph_Graph3103->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3103->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3103->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3103->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3103->GetYaxis()->SetTitleFont(42);
   Graph_Graph3103->GetZaxis()->SetLabelFont(42);
   Graph_Graph3103->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3103->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3103->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3103->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3103);
   
   grae->Draw("2");
   
   Double_t _fx3104[25] = {
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
   Double_t _fy3104[25] = {
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
   Double_t _felx3104[25] = {
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
   Double_t _fely3104[25] = {
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
   Double_t _fehx3104[25] = {
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
   Double_t _fehy3104[25] = {
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
   grae = new TGraphAsymmErrors(25,_fx3104,_fy3104,_felx3104,_fehx3104,_fely3104,_fehy3104);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(1);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3104 = new TH1F("Graph_Graph3104","",100,0,219);
   Graph_Graph3104->SetMinimum(0);
   Graph_Graph3104->SetMaximum(5.101701);
   Graph_Graph3104->SetDirectory(0);
   Graph_Graph3104->SetStats(0);
   Graph_Graph3104->SetLineStyle(0);
   Graph_Graph3104->SetMarkerStyle(20);
   Graph_Graph3104->GetXaxis()->SetLabelFont(42);
   Graph_Graph3104->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3104->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3104->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3104->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3104->GetXaxis()->SetTitleFont(42);
   Graph_Graph3104->GetYaxis()->SetLabelFont(42);
   Graph_Graph3104->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3104->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3104->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3104->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3104->GetYaxis()->SetTitleFont(42);
   Graph_Graph3104->GetZaxis()->SetLabelFont(42);
   Graph_Graph3104->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3104->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3104->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3104->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3104);
   
   grae->Draw("p0");
   
   TLegend *leg = new TLegend(0.2,0.7,0.8,0.9,NULL,"brNDC");
   leg->SetTextFont(62);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_pt1","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_pt1","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt1","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_pt1","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_pt1","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt1","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt1","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_MET_JetV_ZVeto_13TeV_pt1","Data","EPL");
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
   entry=leg->AddEntry("new_histo_group_Fake_wh3l_MET_JetV_ZVeto_13TeV_pt1","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_MET_JetV_ZVeto_13TeV_pt1","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_MET_JetV_ZVeto_13TeV_pt1","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_MET_JetV_ZVeto_13TeV_pt1","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_13TeV_pt1","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_MET_JetV_ZVeto_13TeV_pt1","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_13TeV_pt1","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_MET_JetV_ZVeto_13TeV_pt1","Data","EPL");
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
   
   TH1F *hframe_copy520 = new TH1F("hframe_copy520","",1000,10,200);
   hframe_copy520->SetMinimum(0);
   hframe_copy520->SetMaximum(8.535534);
   hframe_copy520->SetDirectory(0);
   hframe_copy520->SetStats(0);
   hframe_copy520->SetLineStyle(0);
   hframe_copy520->SetMarkerStyle(20);
   hframe_copy520->GetXaxis()->SetTitle("lept1_p_{T} [GeV]");
   hframe_copy520->GetXaxis()->SetNdivisions(506);
   hframe_copy520->GetXaxis()->SetLabelFont(42);
   hframe_copy520->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy520->GetXaxis()->SetLabelSize(0.05);
   hframe_copy520->GetXaxis()->SetTitleSize(0.06);
   hframe_copy520->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy520->GetXaxis()->SetTitleFont(42);
   hframe_copy520->GetYaxis()->SetTitle("Events");
   hframe_copy520->GetYaxis()->SetLabelFont(42);
   hframe_copy520->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy520->GetYaxis()->SetLabelSize(0.05);
   hframe_copy520->GetYaxis()->SetTitleSize(0.06);
   hframe_copy520->GetYaxis()->SetTitleOffset(1.25);
   hframe_copy520->GetYaxis()->SetTitleFont(42);
   hframe_copy520->GetZaxis()->SetLabelFont(42);
   hframe_copy520->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy520->GetZaxis()->SetLabelSize(0.05);
   hframe_copy520->GetZaxis()->SetTitleSize(0.06);
   hframe_copy520->GetZaxis()->SetTitleFont(42);
   hframe_copy520->Draw("sameaxis");
   ccwh3l_MET_JetV_ZVeto_13TeV_pt1->Modified();
   ccwh3l_MET_JetV_ZVeto_13TeV_pt1->cd();
   ccwh3l_MET_JetV_ZVeto_13TeV_pt1->SetSelected(ccwh3l_MET_JetV_ZVeto_13TeV_pt1);
}
