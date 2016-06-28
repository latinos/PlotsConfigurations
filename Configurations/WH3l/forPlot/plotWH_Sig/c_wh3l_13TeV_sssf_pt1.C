void c_wh3l_13TeV_sssf_pt1()
{
//=========Macro generated from canvas: ccwh3l_13TeV_sssf_pt1/cc
//=========  (Tue Jun 28 13:56:21 2016) by ROOT version6.02/13
   TCanvas *ccwh3l_13TeV_sssf_pt1 = new TCanvas("ccwh3l_13TeV_sssf_pt1", "cc",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   ccwh3l_13TeV_sssf_pt1->SetHighLightColor(2);
   ccwh3l_13TeV_sssf_pt1->Range(-28,-0.4722691,209.5,3.16057);
   ccwh3l_13TeV_sssf_pt1->SetFillColor(0);
   ccwh3l_13TeV_sssf_pt1->SetBorderMode(0);
   ccwh3l_13TeV_sssf_pt1->SetBorderSize(2);
   ccwh3l_13TeV_sssf_pt1->SetTickx(1);
   ccwh3l_13TeV_sssf_pt1->SetTicky(1);
   ccwh3l_13TeV_sssf_pt1->SetLeftMargin(0.16);
   ccwh3l_13TeV_sssf_pt1->SetRightMargin(0.04);
   ccwh3l_13TeV_sssf_pt1->SetTopMargin(0.05);
   ccwh3l_13TeV_sssf_pt1->SetBottomMargin(0.13);
   ccwh3l_13TeV_sssf_pt1->SetFrameFillStyle(0);
   ccwh3l_13TeV_sssf_pt1->SetFrameBorderMode(0);
   ccwh3l_13TeV_sssf_pt1->SetFrameFillStyle(0);
   ccwh3l_13TeV_sssf_pt1->SetFrameBorderMode(0);
   
   TH1F *hframe171 = new TH1F("hframe171","",1000,10,200);
   hframe171->SetMinimum(0);
   hframe171->SetMaximum(2.978928);
   hframe171->SetDirectory(0);
   hframe171->SetStats(0);
   hframe171->SetLineStyle(0);
   hframe171->SetMarkerStyle(20);
   hframe171->GetXaxis()->SetTitle("lept1_p_{T} [GeV]");
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
   
   THStack *thsBackground_grouped_wh3l_13TeV_sssf_pt1 = new THStack();
   thsBackground_grouped_wh3l_13TeV_sssf_pt1->SetName("thsBackground_grouped_wh3l_13TeV_sssf_pt1");
   thsBackground_grouped_wh3l_13TeV_sssf_pt1->SetTitle("thsBackground_grouped_wh3l_13TeV_sssf_pt1");
   
   TH1F *thsBackground_grouped_wh3l_13TeV_sssf_pt1_stack_35 = new TH1F("thsBackground_grouped_wh3l_13TeV_sssf_pt1_stack_35","thsBackground_grouped_wh3l_13TeV_sssf_pt1",25,10,200);
   thsBackground_grouped_wh3l_13TeV_sssf_pt1_stack_35->SetMinimum(-0.510441);
   thsBackground_grouped_wh3l_13TeV_sssf_pt1_stack_35->SetMaximum(2.107509);
   thsBackground_grouped_wh3l_13TeV_sssf_pt1_stack_35->SetDirectory(0);
   thsBackground_grouped_wh3l_13TeV_sssf_pt1_stack_35->SetStats(0);
   thsBackground_grouped_wh3l_13TeV_sssf_pt1_stack_35->SetLineStyle(0);
   thsBackground_grouped_wh3l_13TeV_sssf_pt1_stack_35->SetMarkerStyle(20);
   thsBackground_grouped_wh3l_13TeV_sssf_pt1_stack_35->GetXaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_13TeV_sssf_pt1_stack_35->GetXaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_13TeV_sssf_pt1_stack_35->GetXaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_13TeV_sssf_pt1_stack_35->GetXaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_13TeV_sssf_pt1_stack_35->GetXaxis()->SetTitleOffset(0.9);
   thsBackground_grouped_wh3l_13TeV_sssf_pt1_stack_35->GetXaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_sssf_pt1_stack_35->GetYaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_13TeV_sssf_pt1_stack_35->GetYaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_13TeV_sssf_pt1_stack_35->GetYaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_13TeV_sssf_pt1_stack_35->GetYaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_13TeV_sssf_pt1_stack_35->GetYaxis()->SetTitleOffset(1.25);
   thsBackground_grouped_wh3l_13TeV_sssf_pt1_stack_35->GetYaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_sssf_pt1_stack_35->GetZaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_13TeV_sssf_pt1_stack_35->GetZaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_13TeV_sssf_pt1_stack_35->GetZaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_13TeV_sssf_pt1_stack_35->GetZaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_13TeV_sssf_pt1_stack_35->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_sssf_pt1->SetHistogram(thsBackground_grouped_wh3l_13TeV_sssf_pt1_stack_35);
   
   
   TH1D *new_histo_group_Fake_wh3l_13TeV_sssf_pt1172 = new TH1D("new_histo_group_Fake_wh3l_13TeV_sssf_pt1172","histo_Fake",25,10,200);
   new_histo_group_Fake_wh3l_13TeV_sssf_pt1172->SetBinContent(2,-0.03820547);
   new_histo_group_Fake_wh3l_13TeV_sssf_pt1172->SetBinContent(3,0.0391984);
   new_histo_group_Fake_wh3l_13TeV_sssf_pt1172->SetBinContent(4,-0.2300273);
   new_histo_group_Fake_wh3l_13TeV_sssf_pt1172->SetBinContent(5,0.5562551);
   new_histo_group_Fake_wh3l_13TeV_sssf_pt1172->SetBinContent(6,0.2214166);
   new_histo_group_Fake_wh3l_13TeV_sssf_pt1172->SetBinContent(7,-0.008101332);
   new_histo_group_Fake_wh3l_13TeV_sssf_pt1172->SetBinContent(8,1.1263);
   new_histo_group_Fake_wh3l_13TeV_sssf_pt1172->SetBinContent(9,0.6436369);
   new_histo_group_Fake_wh3l_13TeV_sssf_pt1172->SetBinContent(10,0.4637505);
   new_histo_group_Fake_wh3l_13TeV_sssf_pt1172->SetBinContent(13,-0.006707157);
   new_histo_group_Fake_wh3l_13TeV_sssf_pt1172->SetBinContent(25,0.1345139);
   new_histo_group_Fake_wh3l_13TeV_sssf_pt1172->SetBinError(2,0.03820547);
   new_histo_group_Fake_wh3l_13TeV_sssf_pt1172->SetBinError(3,0.1428288);
   new_histo_group_Fake_wh3l_13TeV_sssf_pt1172->SetBinError(4,0.2804138);
   new_histo_group_Fake_wh3l_13TeV_sssf_pt1172->SetBinError(5,0.5340191);
   new_histo_group_Fake_wh3l_13TeV_sssf_pt1172->SetBinError(6,0.2798715);
   new_histo_group_Fake_wh3l_13TeV_sssf_pt1172->SetBinError(7,0.007561613);
   new_histo_group_Fake_wh3l_13TeV_sssf_pt1172->SetBinError(8,0.8808511);
   new_histo_group_Fake_wh3l_13TeV_sssf_pt1172->SetBinError(9,0.6434307);
   new_histo_group_Fake_wh3l_13TeV_sssf_pt1172->SetBinError(10,0.4152694);
   new_histo_group_Fake_wh3l_13TeV_sssf_pt1172->SetBinError(13,0.006707157);
   new_histo_group_Fake_wh3l_13TeV_sssf_pt1172->SetBinError(25,0.1345139);
   new_histo_group_Fake_wh3l_13TeV_sssf_pt1172->SetEntries(34);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_13TeV_sssf_pt1172->SetFillColor(ci);
   new_histo_group_Fake_wh3l_13TeV_sssf_pt1172->SetFillStyle(3001);

   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_13TeV_sssf_pt1172->SetLineColor(ci);
   new_histo_group_Fake_wh3l_13TeV_sssf_pt1172->GetXaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_13TeV_sssf_pt1172->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_13TeV_sssf_pt1172->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_13TeV_sssf_pt1172->GetXaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_13TeV_sssf_pt1172->GetYaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_13TeV_sssf_pt1172->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_13TeV_sssf_pt1172->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_13TeV_sssf_pt1172->GetYaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_13TeV_sssf_pt1172->GetZaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_13TeV_sssf_pt1172->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_13TeV_sssf_pt1172->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_13TeV_sssf_pt1172->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_sssf_pt1->Add(new_histo_group_Fake_wh3l_13TeV_sssf_pt1,"");
   
   TH1D *new_histo_group_WW_wh3l_13TeV_sssf_pt1173 = new TH1D("new_histo_group_WW_wh3l_13TeV_sssf_pt1173","histo_WW",25,10,200);
   new_histo_group_WW_wh3l_13TeV_sssf_pt1173->SetBinContent(3,0.0161241);
   new_histo_group_WW_wh3l_13TeV_sssf_pt1173->SetBinContent(7,0.01039136);
   new_histo_group_WW_wh3l_13TeV_sssf_pt1173->SetBinError(3,0.0161241);
   new_histo_group_WW_wh3l_13TeV_sssf_pt1173->SetBinError(7,0.01039136);
   new_histo_group_WW_wh3l_13TeV_sssf_pt1173->SetEntries(2);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_13TeV_sssf_pt1173->SetFillColor(ci);
   new_histo_group_WW_wh3l_13TeV_sssf_pt1173->SetFillStyle(3001);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_13TeV_sssf_pt1173->SetLineColor(ci);
   new_histo_group_WW_wh3l_13TeV_sssf_pt1173->GetXaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_13TeV_sssf_pt1173->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_13TeV_sssf_pt1173->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_13TeV_sssf_pt1173->GetXaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_13TeV_sssf_pt1173->GetYaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_13TeV_sssf_pt1173->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_13TeV_sssf_pt1173->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_13TeV_sssf_pt1173->GetYaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_13TeV_sssf_pt1173->GetZaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_13TeV_sssf_pt1173->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_13TeV_sssf_pt1173->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_13TeV_sssf_pt1173->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_sssf_pt1->Add(new_histo_group_WW_wh3l_13TeV_sssf_pt1,"");
   
   TH1D *new_histo_group_VVV_wh3l_13TeV_sssf_pt1174 = new TH1D("new_histo_group_VVV_wh3l_13TeV_sssf_pt1174","histo_VVV",25,10,200);
   new_histo_group_VVV_wh3l_13TeV_sssf_pt1174->SetBinContent(15,0.0007784473);
   new_histo_group_VVV_wh3l_13TeV_sssf_pt1174->SetBinContent(26,0.0005490761);
   new_histo_group_VVV_wh3l_13TeV_sssf_pt1174->SetBinError(15,0.0007784473);
   new_histo_group_VVV_wh3l_13TeV_sssf_pt1174->SetBinError(26,0.0005490761);
   new_histo_group_VVV_wh3l_13TeV_sssf_pt1174->SetEntries(2);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_13TeV_sssf_pt1174->SetFillColor(ci);
   new_histo_group_VVV_wh3l_13TeV_sssf_pt1174->SetFillStyle(3001);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_13TeV_sssf_pt1174->SetLineColor(ci);
   new_histo_group_VVV_wh3l_13TeV_sssf_pt1174->GetXaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_13TeV_sssf_pt1174->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_13TeV_sssf_pt1174->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_13TeV_sssf_pt1174->GetXaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_13TeV_sssf_pt1174->GetYaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_13TeV_sssf_pt1174->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_13TeV_sssf_pt1174->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_13TeV_sssf_pt1174->GetYaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_13TeV_sssf_pt1174->GetZaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_13TeV_sssf_pt1174->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_13TeV_sssf_pt1174->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_13TeV_sssf_pt1174->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_sssf_pt1->Add(new_histo_group_VVV_wh3l_13TeV_sssf_pt1,"");
   
   TH1D *new_histo_group_Vg_wh3l_13TeV_sssf_pt1175 = new TH1D("new_histo_group_Vg_wh3l_13TeV_sssf_pt1175","histo_Vg",25,10,200);
   new_histo_group_Vg_wh3l_13TeV_sssf_pt1175->SetBinContent(6,0.0522728);
   new_histo_group_Vg_wh3l_13TeV_sssf_pt1175->SetBinError(6,0.0522728);
   new_histo_group_Vg_wh3l_13TeV_sssf_pt1175->SetEntries(1);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_13TeV_sssf_pt1175->SetFillColor(ci);
   new_histo_group_Vg_wh3l_13TeV_sssf_pt1175->SetFillStyle(3001);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_13TeV_sssf_pt1175->SetLineColor(ci);
   new_histo_group_Vg_wh3l_13TeV_sssf_pt1175->GetXaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_13TeV_sssf_pt1175->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_13TeV_sssf_pt1175->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_13TeV_sssf_pt1175->GetXaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_13TeV_sssf_pt1175->GetYaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_13TeV_sssf_pt1175->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_13TeV_sssf_pt1175->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_13TeV_sssf_pt1175->GetYaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_13TeV_sssf_pt1175->GetZaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_13TeV_sssf_pt1175->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_13TeV_sssf_pt1175->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_13TeV_sssf_pt1175->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_sssf_pt1->Add(new_histo_group_Vg_wh3l_13TeV_sssf_pt1,"");
   
   TH1D *new_histo_group_ZZ_wh3l_13TeV_sssf_pt1176 = new TH1D("new_histo_group_ZZ_wh3l_13TeV_sssf_pt1176","histo_ZZ",25,10,200);
   new_histo_group_ZZ_wh3l_13TeV_sssf_pt1176->SetBinContent(7,0.0427135);
   new_histo_group_ZZ_wh3l_13TeV_sssf_pt1176->SetBinContent(26,0.03513683);
   new_histo_group_ZZ_wh3l_13TeV_sssf_pt1176->SetBinError(7,0.0427135);
   new_histo_group_ZZ_wh3l_13TeV_sssf_pt1176->SetBinError(26,0.03513683);
   new_histo_group_ZZ_wh3l_13TeV_sssf_pt1176->SetEntries(2);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_13TeV_sssf_pt1176->SetFillColor(ci);
   new_histo_group_ZZ_wh3l_13TeV_sssf_pt1176->SetFillStyle(3001);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_13TeV_sssf_pt1176->SetLineColor(ci);
   new_histo_group_ZZ_wh3l_13TeV_sssf_pt1176->GetXaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_13TeV_sssf_pt1176->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_13TeV_sssf_pt1176->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_13TeV_sssf_pt1176->GetXaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_13TeV_sssf_pt1176->GetYaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_13TeV_sssf_pt1176->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_13TeV_sssf_pt1176->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_13TeV_sssf_pt1176->GetYaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_13TeV_sssf_pt1176->GetZaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_13TeV_sssf_pt1176->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_13TeV_sssf_pt1176->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_13TeV_sssf_pt1176->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_sssf_pt1->Add(new_histo_group_ZZ_wh3l_13TeV_sssf_pt1,"");
   
   TH1D *new_histo_group_WZ_wh3l_13TeV_sssf_pt1177 = new TH1D("new_histo_group_WZ_wh3l_13TeV_sssf_pt1177","histo_WZ",25,10,200);
   new_histo_group_WZ_wh3l_13TeV_sssf_pt1177->SetBinContent(2,0.01250105);
   new_histo_group_WZ_wh3l_13TeV_sssf_pt1177->SetBinContent(3,0.07038392);
   new_histo_group_WZ_wh3l_13TeV_sssf_pt1177->SetBinContent(4,0.0804238);
   new_histo_group_WZ_wh3l_13TeV_sssf_pt1177->SetBinContent(5,0.09261466);
   new_histo_group_WZ_wh3l_13TeV_sssf_pt1177->SetBinContent(6,0.1048172);
   new_histo_group_WZ_wh3l_13TeV_sssf_pt1177->SetBinContent(7,0.05421446);
   new_histo_group_WZ_wh3l_13TeV_sssf_pt1177->SetBinContent(8,0.04269779);
   new_histo_group_WZ_wh3l_13TeV_sssf_pt1177->SetBinContent(9,0.0393536);
   new_histo_group_WZ_wh3l_13TeV_sssf_pt1177->SetBinContent(10,0.01536861);
   new_histo_group_WZ_wh3l_13TeV_sssf_pt1177->SetBinContent(11,0.005487993);
   new_histo_group_WZ_wh3l_13TeV_sssf_pt1177->SetBinContent(12,0.02792931);
   new_histo_group_WZ_wh3l_13TeV_sssf_pt1177->SetBinContent(13,0.01691928);
   new_histo_group_WZ_wh3l_13TeV_sssf_pt1177->SetBinContent(15,0.01068012);
   new_histo_group_WZ_wh3l_13TeV_sssf_pt1177->SetBinContent(16,0.005956865);
   new_histo_group_WZ_wh3l_13TeV_sssf_pt1177->SetBinContent(17,0.002384166);
   new_histo_group_WZ_wh3l_13TeV_sssf_pt1177->SetBinContent(18,0.005629369);
   new_histo_group_WZ_wh3l_13TeV_sssf_pt1177->SetBinContent(19,0.006664773);
   new_histo_group_WZ_wh3l_13TeV_sssf_pt1177->SetBinContent(21,0.0121873);
   new_histo_group_WZ_wh3l_13TeV_sssf_pt1177->SetBinContent(22,0.005488627);
   new_histo_group_WZ_wh3l_13TeV_sssf_pt1177->SetBinContent(23,0.005246641);
   new_histo_group_WZ_wh3l_13TeV_sssf_pt1177->SetBinContent(26,0.005713332);
   new_histo_group_WZ_wh3l_13TeV_sssf_pt1177->SetBinError(2,0.00866789);
   new_histo_group_WZ_wh3l_13TeV_sssf_pt1177->SetBinError(3,0.01890205);
   new_histo_group_WZ_wh3l_13TeV_sssf_pt1177->SetBinError(4,0.02062158);
   new_histo_group_WZ_wh3l_13TeV_sssf_pt1177->SetBinError(5,0.02156458);
   new_histo_group_WZ_wh3l_13TeV_sssf_pt1177->SetBinError(6,0.02350696);
   new_histo_group_WZ_wh3l_13TeV_sssf_pt1177->SetBinError(7,0.01782308);
   new_histo_group_WZ_wh3l_13TeV_sssf_pt1177->SetBinError(8,0.01546249);
   new_histo_group_WZ_wh3l_13TeV_sssf_pt1177->SetBinError(9,0.01380998);
   new_histo_group_WZ_wh3l_13TeV_sssf_pt1177->SetBinError(10,0.008884622);
   new_histo_group_WZ_wh3l_13TeV_sssf_pt1177->SetBinError(11,0.005487993);
   new_histo_group_WZ_wh3l_13TeV_sssf_pt1177->SetBinError(12,0.0131814);
   new_histo_group_WZ_wh3l_13TeV_sssf_pt1177->SetBinError(13,0.01009139);
   new_histo_group_WZ_wh3l_13TeV_sssf_pt1177->SetBinError(15,0.006797004);
   new_histo_group_WZ_wh3l_13TeV_sssf_pt1177->SetBinError(16,0.005956865);
   new_histo_group_WZ_wh3l_13TeV_sssf_pt1177->SetBinError(17,0.002384166);
   new_histo_group_WZ_wh3l_13TeV_sssf_pt1177->SetBinError(18,0.005629369);
   new_histo_group_WZ_wh3l_13TeV_sssf_pt1177->SetBinError(19,0.006664773);
   new_histo_group_WZ_wh3l_13TeV_sssf_pt1177->SetBinError(21,0.00862591);
   new_histo_group_WZ_wh3l_13TeV_sssf_pt1177->SetBinError(22,0.005488627);
   new_histo_group_WZ_wh3l_13TeV_sssf_pt1177->SetBinError(23,0.005246641);
   new_histo_group_WZ_wh3l_13TeV_sssf_pt1177->SetBinError(26,0.005713332);
   new_histo_group_WZ_wh3l_13TeV_sssf_pt1177->SetEntries(128);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_13TeV_sssf_pt1177->SetFillColor(ci);
   new_histo_group_WZ_wh3l_13TeV_sssf_pt1177->SetFillStyle(3001);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_13TeV_sssf_pt1177->SetLineColor(ci);
   new_histo_group_WZ_wh3l_13TeV_sssf_pt1177->GetXaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_13TeV_sssf_pt1177->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_13TeV_sssf_pt1177->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_13TeV_sssf_pt1177->GetXaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_13TeV_sssf_pt1177->GetYaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_13TeV_sssf_pt1177->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_13TeV_sssf_pt1177->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_13TeV_sssf_pt1177->GetYaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_13TeV_sssf_pt1177->GetZaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_13TeV_sssf_pt1177->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_13TeV_sssf_pt1177->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_13TeV_sssf_pt1177->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_sssf_pt1->Add(new_histo_group_WZ_wh3l_13TeV_sssf_pt1,"");
   
   TH1D *new_histo_group_Higgs_wh3l_13TeV_sssf_pt1178 = new TH1D("new_histo_group_Higgs_wh3l_13TeV_sssf_pt1178","histo_H_htt",25,10,200);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt1178->SetBinContent(2,0.001298338);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt1178->SetBinContent(3,0.01399981);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt1178->SetBinContent(4,0.02865634);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt1178->SetBinContent(5,0.02854711);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt1178->SetBinContent(6,0.03475917);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt1178->SetBinContent(7,0.03831008);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt1178->SetBinContent(8,0.02257349);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt1178->SetBinContent(9,0.01765581);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt1178->SetBinContent(10,0.01787152);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt1178->SetBinContent(11,0.01767254);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt1178->SetBinContent(12,0.006707015);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt1178->SetBinContent(13,0.007938048);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt1178->SetBinContent(14,0.01093931);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt1178->SetBinContent(15,0.002779566);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt1178->SetBinContent(16,0.00571077);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt1178->SetBinContent(17,0.009527956);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt1178->SetBinContent(18,0.007696015);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt1178->SetBinContent(19,0.003580051);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt1178->SetBinContent(20,0.003625271);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt1178->SetBinContent(21,0.001578325);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt1178->SetBinContent(22,0.0003849663);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt1178->SetBinContent(23,0.0003709679);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt1178->SetBinContent(25,0.003694924);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt1178->SetBinContent(26,0.003971215);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt1178->SetBinError(2,0.0005920712);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt1178->SetBinError(3,0.003403003);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt1178->SetBinError(4,0.005780734);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt1178->SetBinError(5,0.005201743);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt1178->SetBinError(6,0.00597943);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt1178->SetBinError(7,0.006357172);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt1178->SetBinError(8,0.005223023);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt1178->SetBinError(9,0.004730876);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt1178->SetBinError(10,0.005572985);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt1178->SetBinError(11,0.00430465);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt1178->SetBinError(12,0.00227595);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt1178->SetBinError(13,0.003150416);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt1178->SetBinError(14,0.003290005);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt1178->SetBinError(15,0.001038463);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt1178->SetBinError(16,0.0027406);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt1178->SetBinError(17,0.003304202);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt1178->SetBinError(18,0.00333497);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt1178->SetBinError(19,0.001985782);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt1178->SetBinError(20,0.001566432);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt1178->SetBinError(21,0.001084103);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt1178->SetBinError(22,0.0002738482);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt1178->SetBinError(23,0.0003709679);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt1178->SetBinError(25,0.001949716);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt1178->SetBinError(26,0.001037617);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt1178->SetEntries(522);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt1178->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt1178->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt1178->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt1178->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt1178->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt1178->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt1178->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt1178->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt1178->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt1178->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt1178->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt1178->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt1178->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt1178->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt1178->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_sssf_pt1->Add(new_histo_group_Higgs_wh3l_13TeV_sssf_pt1,"");
   thsBackground_grouped_wh3l_13TeV_sssf_pt1->Draw("hist same");
   
   thsSignal_grouped_wh3l_13TeV_sssf_pt1 = new THStack();
   thsSignal_grouped_wh3l_13TeV_sssf_pt1->SetName("thsSignal_grouped_wh3l_13TeV_sssf_pt1");
   thsSignal_grouped_wh3l_13TeV_sssf_pt1->SetTitle("thsSignal_grouped_wh3l_13TeV_sssf_pt1");
   
   TH1F *thsSignal_grouped_wh3l_13TeV_sssf_pt1_stack_36 = new TH1F("thsSignal_grouped_wh3l_13TeV_sssf_pt1_stack_36","thsSignal_grouped_wh3l_13TeV_sssf_pt1",25,10,200);
   thsSignal_grouped_wh3l_13TeV_sssf_pt1_stack_36->SetMinimum(0);
   thsSignal_grouped_wh3l_13TeV_sssf_pt1_stack_36->SetMaximum(0.04690061);
   thsSignal_grouped_wh3l_13TeV_sssf_pt1_stack_36->SetDirectory(0);
   thsSignal_grouped_wh3l_13TeV_sssf_pt1_stack_36->SetStats(0);
   thsSignal_grouped_wh3l_13TeV_sssf_pt1_stack_36->SetLineStyle(0);
   thsSignal_grouped_wh3l_13TeV_sssf_pt1_stack_36->SetMarkerStyle(20);
   thsSignal_grouped_wh3l_13TeV_sssf_pt1_stack_36->GetXaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_13TeV_sssf_pt1_stack_36->GetXaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_13TeV_sssf_pt1_stack_36->GetXaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_13TeV_sssf_pt1_stack_36->GetXaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_13TeV_sssf_pt1_stack_36->GetXaxis()->SetTitleOffset(0.9);
   thsSignal_grouped_wh3l_13TeV_sssf_pt1_stack_36->GetXaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_13TeV_sssf_pt1_stack_36->GetYaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_13TeV_sssf_pt1_stack_36->GetYaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_13TeV_sssf_pt1_stack_36->GetYaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_13TeV_sssf_pt1_stack_36->GetYaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_13TeV_sssf_pt1_stack_36->GetYaxis()->SetTitleOffset(1.25);
   thsSignal_grouped_wh3l_13TeV_sssf_pt1_stack_36->GetYaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_13TeV_sssf_pt1_stack_36->GetZaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_13TeV_sssf_pt1_stack_36->GetZaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_13TeV_sssf_pt1_stack_36->GetZaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_13TeV_sssf_pt1_stack_36->GetZaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_13TeV_sssf_pt1_stack_36->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_13TeV_sssf_pt1->SetHistogram(thsSignal_grouped_wh3l_13TeV_sssf_pt1_stack_36);
   
   
   TH1D *new_histo_group_Higgs_wh3l_13TeV_sssf_pt1179 = new TH1D("new_histo_group_Higgs_wh3l_13TeV_sssf_pt1179","histo_H_htt",25,10,200);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt1179->SetBinContent(2,0.001298338);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt1179->SetBinContent(3,0.01399981);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt1179->SetBinContent(4,0.02865634);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt1179->SetBinContent(5,0.02854711);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt1179->SetBinContent(6,0.03475917);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt1179->SetBinContent(7,0.03831008);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt1179->SetBinContent(8,0.02257349);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt1179->SetBinContent(9,0.01765581);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt1179->SetBinContent(10,0.01787152);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt1179->SetBinContent(11,0.01767254);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt1179->SetBinContent(12,0.006707015);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt1179->SetBinContent(13,0.007938048);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt1179->SetBinContent(14,0.01093931);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt1179->SetBinContent(15,0.002779566);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt1179->SetBinContent(16,0.00571077);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt1179->SetBinContent(17,0.009527956);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt1179->SetBinContent(18,0.007696015);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt1179->SetBinContent(19,0.003580051);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt1179->SetBinContent(20,0.003625271);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt1179->SetBinContent(21,0.001578325);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt1179->SetBinContent(22,0.0003849663);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt1179->SetBinContent(23,0.0003709679);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt1179->SetBinContent(25,0.003694924);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt1179->SetBinContent(26,0.003971215);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt1179->SetBinError(2,0.0005920712);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt1179->SetBinError(3,0.003403003);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt1179->SetBinError(4,0.005780734);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt1179->SetBinError(5,0.005201743);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt1179->SetBinError(6,0.00597943);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt1179->SetBinError(7,0.006357172);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt1179->SetBinError(8,0.005223023);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt1179->SetBinError(9,0.004730876);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt1179->SetBinError(10,0.005572985);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt1179->SetBinError(11,0.00430465);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt1179->SetBinError(12,0.00227595);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt1179->SetBinError(13,0.003150416);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt1179->SetBinError(14,0.003290005);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt1179->SetBinError(15,0.001038463);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt1179->SetBinError(16,0.0027406);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt1179->SetBinError(17,0.003304202);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt1179->SetBinError(18,0.00333497);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt1179->SetBinError(19,0.001985782);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt1179->SetBinError(20,0.001566432);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt1179->SetBinError(21,0.001084103);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt1179->SetBinError(22,0.0002738482);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt1179->SetBinError(23,0.0003709679);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt1179->SetBinError(25,0.001949716);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt1179->SetBinError(26,0.001037617);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt1179->SetEntries(522);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt1179->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt1179->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt1179->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt1179->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt1179->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt1179->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt1179->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt1179->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt1179->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt1179->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt1179->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt1179->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt1179->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt1179->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt1179->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_13TeV_sssf_pt1->Add(new_histo_group_Higgs_wh3l_13TeV_sssf_pt1,"");
   thsSignal_grouped_wh3l_13TeV_sssf_pt1->Draw("hist same noclear");
   
   Double_t _fx3035[25] = {
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
   Double_t _fy3035[25] = {
   0,
   -0.02570442,
   0.1257064,
   -0.1496035,
   0.6488698,
   0.3785066,
   0.09921799,
   1.168998,
   0.6829905,
   0.4791191,
   0.005487993,
   0.02792931,
   0.01021212,
   0,
   0.01145857,
   0.005956865,
   0.002384166,
   0.00562937,
   0.006664773,
   0,
   0.0121873,
   0.005488627,
   0.005246641,
   0,
   0.1345139};
   Double_t _felx3035[25] = {
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
   Double_t _fely3035[25] = {
   0,
   0.04825434,
   0.07515158,
   0.3088437,
   0.5801044,
   0.3045323,
   0.07854026,
   0.9578871,
   0.6850179,
   0.4463882,
   0.005487993,
   0.0131814,
   0.01691863,
   0,
   0.007575481,
   0.005956865,
   0.002384166,
   0.00562937,
   0.006664773,
   0,
   0.008625911,
   0.005488627,
   0.005246641,
   0,
   0.1404366};
   Double_t _fehx3035[25] = {
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
   Double_t _fehy3035[25] = {
   0,
   0.04825434,
   0.1782438,
   0.259975,
   0.5801044,
   0.361804,
   0.07854026,
   0.9578872,
   0.6850179,
   0.4463882,
   0.005487993,
   0.0131814,
   0.01691863,
   0,
   0.007575479,
   0.005956865,
   0.002384166,
   0.00562937,
   0.006664773,
   0,
   0.008625912,
   0.005488627,
   0.005246641,
   0,
   0.1404366};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(25,_fx3035,_fy3035,_felx3035,_fehx3035,_fely3035,_fehy3035);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(12);
   grae->SetFillStyle(3004);
   grae->SetLineColor(12);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3035 = new TH1F("Graph_Graph3035","",100,0,219);
   Graph_Graph3035->SetMinimum(-0.7169804);
   Graph_Graph3035->SetMaximum(2.385418);
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
   
   Double_t _fx3036[25] = {
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
   Double_t _fy3036[25] = {
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
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _felx3036[25] = {
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
   Double_t _fely3036[25] = {
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
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fehx3036[25] = {
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
   Double_t _fehy3036[25] = {
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
   1.147908,
   1.147908,
   1.147908,
   1.147908,
   1.147908,
   1.147908};
   grae = new TGraphAsymmErrors(25,_fx3036,_fy3036,_felx3036,_fehx3036,_fely3036,_fehy3036);
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
   
   TLegend *leg = new TLegend(0.2,0.55,0.8,0.88,NULL,"brNDC");
   leg->SetTextFont(62);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("new_histo_group_Fake_wh3l_13TeV_sssf_pt1","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_13TeV_sssf_pt1","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_13TeV_sssf_pt1","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_13TeV_sssf_pt1","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_13TeV_sssf_pt1","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_13TeV_sssf_pt1","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_13TeV_sssf_pt1","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_13TeV_sssf_pt1","Data","EPL");
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
   
   leg = new TLegend(0.2,0.55,0.8,0.88,NULL,"brNDC");
   leg->SetTextFont(62);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   entry=leg->AddEntry("new_histo_group_Fake_wh3l_13TeV_sssf_pt1","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_13TeV_sssf_pt1","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_13TeV_sssf_pt1","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_13TeV_sssf_pt1","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_13TeV_sssf_pt1","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_13TeV_sssf_pt1","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_13TeV_sssf_pt1","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_13TeV_sssf_pt1","Data","EPL");
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
   hframe_copy180->SetMaximum(2.978928);
   hframe_copy180->SetDirectory(0);
   hframe_copy180->SetStats(0);
   hframe_copy180->SetLineStyle(0);
   hframe_copy180->SetMarkerStyle(20);
   hframe_copy180->GetXaxis()->SetTitle("lept1_p_{T} [GeV]");
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
   ccwh3l_13TeV_sssf_pt1->Modified();
   ccwh3l_13TeV_sssf_pt1->cd();
   ccwh3l_13TeV_sssf_pt1->SetSelected(ccwh3l_13TeV_sssf_pt1);
}
