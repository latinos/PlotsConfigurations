void c_wh3l_MET_JetV_13TeV_pt3()
{
//=========Macro generated from canvas: ccwh3l_MET_JetV_13TeV_pt3/cc
//=========  (Sun Jul  3 01:21:51 2016) by ROOT version6.02/13
   TCanvas *ccwh3l_MET_JetV_13TeV_pt3 = new TCanvas("ccwh3l_MET_JetV_13TeV_pt3", "cc",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   ccwh3l_MET_JetV_13TeV_pt3->SetHighLightColor(2);
   ccwh3l_MET_JetV_13TeV_pt3->Range(-28,-1.353194,209.5,9.055993);
   ccwh3l_MET_JetV_13TeV_pt3->SetFillColor(0);
   ccwh3l_MET_JetV_13TeV_pt3->SetBorderMode(0);
   ccwh3l_MET_JetV_13TeV_pt3->SetBorderSize(2);
   ccwh3l_MET_JetV_13TeV_pt3->SetTickx(1);
   ccwh3l_MET_JetV_13TeV_pt3->SetTicky(1);
   ccwh3l_MET_JetV_13TeV_pt3->SetLeftMargin(0.16);
   ccwh3l_MET_JetV_13TeV_pt3->SetRightMargin(0.04);
   ccwh3l_MET_JetV_13TeV_pt3->SetTopMargin(0.05);
   ccwh3l_MET_JetV_13TeV_pt3->SetBottomMargin(0.13);
   ccwh3l_MET_JetV_13TeV_pt3->SetFrameFillStyle(0);
   ccwh3l_MET_JetV_13TeV_pt3->SetFrameBorderMode(0);
   ccwh3l_MET_JetV_13TeV_pt3->SetFrameFillStyle(0);
   ccwh3l_MET_JetV_13TeV_pt3->SetFrameBorderMode(0);
   
   TH1F *hframe101 = new TH1F("hframe101","",1000,10,200);
   hframe101->SetMinimum(0);
   hframe101->SetMaximum(8.535534);
   hframe101->SetDirectory(0);
   hframe101->SetStats(0);
   hframe101->SetLineStyle(0);
   hframe101->SetMarkerStyle(20);
   hframe101->GetXaxis()->SetTitle("lept3_p_{T} [GeV]");
   hframe101->GetXaxis()->SetNdivisions(506);
   hframe101->GetXaxis()->SetLabelFont(42);
   hframe101->GetXaxis()->SetLabelOffset(0.007);
   hframe101->GetXaxis()->SetLabelSize(0.05);
   hframe101->GetXaxis()->SetTitleSize(0.06);
   hframe101->GetXaxis()->SetTitleOffset(0.9);
   hframe101->GetXaxis()->SetTitleFont(42);
   hframe101->GetYaxis()->SetTitle("Events");
   hframe101->GetYaxis()->SetLabelFont(42);
   hframe101->GetYaxis()->SetLabelOffset(0.007);
   hframe101->GetYaxis()->SetLabelSize(0.05);
   hframe101->GetYaxis()->SetTitleSize(0.06);
   hframe101->GetYaxis()->SetTitleOffset(1.25);
   hframe101->GetYaxis()->SetTitleFont(42);
   hframe101->GetZaxis()->SetLabelFont(42);
   hframe101->GetZaxis()->SetLabelOffset(0.007);
   hframe101->GetZaxis()->SetLabelSize(0.05);
   hframe101->GetZaxis()->SetTitleSize(0.06);
   hframe101->GetZaxis()->SetTitleFont(42);
   hframe101->Draw(" ");
   
   THStack *thsBackground_grouped_wh3l_MET_JetV_13TeV_pt3 = new THStack();
   thsBackground_grouped_wh3l_MET_JetV_13TeV_pt3->SetName("thsBackground_grouped_wh3l_MET_JetV_13TeV_pt3");
   thsBackground_grouped_wh3l_MET_JetV_13TeV_pt3->SetTitle("thsBackground_grouped_wh3l_MET_JetV_13TeV_pt3");
   
   TH1F *thsBackground_grouped_wh3l_MET_JetV_13TeV_pt3_stack_21 = new TH1F("thsBackground_grouped_wh3l_MET_JetV_13TeV_pt3_stack_21","thsBackground_grouped_wh3l_MET_JetV_13TeV_pt3",25,10,200);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_pt3_stack_21->SetMinimum(-0.3520574);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_pt3_stack_21->SetMaximum(3.947669);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_pt3_stack_21->SetDirectory(0);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_pt3_stack_21->SetStats(0);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_pt3_stack_21->SetLineStyle(0);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_pt3_stack_21->SetMarkerStyle(20);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_pt3_stack_21->GetXaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_pt3_stack_21->GetXaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_pt3_stack_21->GetXaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_pt3_stack_21->GetXaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_pt3_stack_21->GetXaxis()->SetTitleOffset(0.9);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_pt3_stack_21->GetXaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_pt3_stack_21->GetYaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_pt3_stack_21->GetYaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_pt3_stack_21->GetYaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_pt3_stack_21->GetYaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_pt3_stack_21->GetYaxis()->SetTitleOffset(1.25);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_pt3_stack_21->GetYaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_pt3_stack_21->GetZaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_pt3_stack_21->GetZaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_pt3_stack_21->GetZaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_pt3_stack_21->GetZaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_pt3_stack_21->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_pt3->SetHistogram(thsBackground_grouped_wh3l_MET_JetV_13TeV_pt3_stack_21);
   
   
   TH1D *new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt3102 = new TH1D("new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt3102","histo_Fake",25,10,200);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt3102->SetBinContent(1,2.471154);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt3102->SetBinContent(2,0.3883896);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt3102->SetBinContent(3,-0.02176431);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt3102->SetBinContent(4,-0.2112765);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt3102->SetBinContent(5,0.2761226);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt3102->SetBinContent(11,-0.01470217);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt3102->SetBinError(1,1.28853);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt3102->SetBinError(2,0.2585534);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt3102->SetBinError(3,0.1460137);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt3102->SetBinError(4,0.1407809);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt3102->SetBinError(5,0.2761226);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt3102->SetBinError(11,0.01470217);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt3102->SetEntries(34);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt3102->SetFillColor(ci);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt3102->SetFillStyle(3001);

   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt3102->SetLineColor(ci);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt3102->GetXaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt3102->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt3102->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt3102->GetXaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt3102->GetYaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt3102->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt3102->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt3102->GetYaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt3102->GetZaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt3102->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt3102->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt3102->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_pt3->Add(new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt3,"");
   
   TH1D *new_histo_group_WW_wh3l_MET_JetV_13TeV_pt3103 = new TH1D("new_histo_group_WW_wh3l_MET_JetV_13TeV_pt3103","histo_WW",25,10,200);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_pt3103->SetBinContent(1,0.03320921);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_pt3103->SetBinContent(2,0.01039136);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_pt3103->SetBinError(1,0.02349229);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_pt3103->SetBinError(2,0.01039136);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_pt3103->SetEntries(3);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_MET_JetV_13TeV_pt3103->SetFillColor(ci);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_pt3103->SetFillStyle(3001);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_MET_JetV_13TeV_pt3103->SetLineColor(ci);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_pt3103->GetXaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_pt3103->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_pt3103->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_pt3103->GetXaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_pt3103->GetYaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_pt3103->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_pt3103->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_pt3103->GetYaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_pt3103->GetZaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_pt3103->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_pt3103->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_MET_JetV_13TeV_pt3103->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_pt3->Add(new_histo_group_WW_wh3l_MET_JetV_13TeV_pt3,"");
   
   TH1D *new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt3104 = new TH1D("new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt3104","histo_VVV",25,10,200);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt3104->SetBinContent(1,0.0216987);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt3104->SetBinContent(2,0.02979448);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt3104->SetBinContent(3,0.02871046);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt3104->SetBinContent(4,0.0155413);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt3104->SetBinContent(5,0.01737523);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt3104->SetBinContent(6,0.00858407);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt3104->SetBinContent(7,-0.0005291138);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt3104->SetBinContent(8,0.004635501);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt3104->SetBinContent(10,0.004131661);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt3104->SetBinError(1,0.006839365);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt3104->SetBinError(2,0.0108583);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt3104->SetBinError(3,0.007674663);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt3104->SetBinError(4,0.007183869);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt3104->SetBinError(5,0.006436129);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt3104->SetBinError(6,0.004436378);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt3104->SetBinError(7,0.003656416);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt3104->SetBinError(8,0.003307144);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt3104->SetBinError(10,0.00292843);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt3104->SetEntries(80);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt3104->SetFillColor(ci);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt3104->SetFillStyle(3001);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt3104->SetLineColor(ci);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt3104->GetXaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt3104->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt3104->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt3104->GetXaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt3104->GetYaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt3104->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt3104->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt3104->GetYaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt3104->GetZaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt3104->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt3104->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt3104->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_pt3->Add(new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt3,"");
   
   TH1D *new_histo_group_Vg_wh3l_MET_JetV_13TeV_pt3105 = new TH1D("new_histo_group_Vg_wh3l_MET_JetV_13TeV_pt3105","histo_Vg",25,10,200);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_pt3105->SetBinContent(1,0.0522728);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_pt3105->SetBinError(1,0.0522728);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_pt3105->SetEntries(1);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_pt3105->SetFillColor(ci);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_pt3105->SetFillStyle(3001);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_pt3105->SetLineColor(ci);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_pt3105->GetXaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_pt3105->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_pt3105->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_pt3105->GetXaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_pt3105->GetYaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_pt3105->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_pt3105->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_pt3105->GetYaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_pt3105->GetZaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_pt3105->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_pt3105->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_MET_JetV_13TeV_pt3105->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_pt3->Add(new_histo_group_Vg_wh3l_MET_JetV_13TeV_pt3,"");
   
   TH1D *new_histo_group_ZZ_wh3l_MET_JetV_13TeV_pt3106 = new TH1D("new_histo_group_ZZ_wh3l_MET_JetV_13TeV_pt3106","histo_ZZ",25,10,200);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_pt3106->SetBinContent(1,0.0427135);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_pt3106->SetBinContent(4,0.03513683);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_pt3106->SetBinError(1,0.0427135);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_pt3106->SetBinError(4,0.03513683);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_pt3106->SetEntries(2);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_pt3106->SetFillColor(ci);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_pt3106->SetFillStyle(3001);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_pt3106->SetLineColor(ci);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_pt3106->GetXaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_pt3106->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_pt3106->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_pt3106->GetXaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_pt3106->GetYaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_pt3106->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_pt3106->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_pt3106->GetYaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_pt3106->GetZaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_pt3106->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_pt3106->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_MET_JetV_13TeV_pt3106->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_pt3->Add(new_histo_group_ZZ_wh3l_MET_JetV_13TeV_pt3,"");
   
   TH1D *new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt3107 = new TH1D("new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt3107","histo_WZ",25,10,200);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt3107->SetBinContent(1,0.2801012);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt3107->SetBinContent(2,0.1890059);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt3107->SetBinContent(3,0.1447518);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt3107->SetBinContent(4,0.02626564);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt3107->SetBinContent(5,0.005519799);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt3107->SetBinContent(6,0.002874792);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt3107->SetBinContent(8,0.004988727);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt3107->SetBinContent(10,0.01100077);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt3107->SetBinError(1,0.03938096);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt3107->SetBinError(2,0.03132249);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt3107->SetBinError(3,0.02799995);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt3107->SetBinError(4,0.01088964);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt3107->SetBinError(5,0.005519799);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt3107->SetBinError(6,0.002874792);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt3107->SetBinError(8,0.004988727);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt3107->SetBinError(10,0.007845909);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt3107->SetEntries(136);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt3107->SetFillColor(ci);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt3107->SetFillStyle(3001);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt3107->SetLineColor(ci);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt3107->GetXaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt3107->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt3107->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt3107->GetXaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt3107->GetYaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt3107->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt3107->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt3107->GetYaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt3107->GetZaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt3107->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt3107->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt3107->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_pt3->Add(new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt3,"");
   
   TH1D *new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt3108 = new TH1D("new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt3108","histo_H_htt",25,10,200);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt3108->SetBinContent(1,0.111708);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt3108->SetBinContent(2,0.08209566);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt3108->SetBinContent(3,0.03995977);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt3108->SetBinContent(4,0.02437542);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt3108->SetBinContent(5,0.01328271);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt3108->SetBinContent(6,0.003455574);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt3108->SetBinContent(7,0.002339709);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt3108->SetBinContent(8,0.004666879);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt3108->SetBinContent(9,0.0008811597);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt3108->SetBinContent(10,0.0001696153);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt3108->SetBinContent(11,0.0002044925);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt3108->SetBinContent(12,0.0002134369);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt3108->SetBinContent(16,0.0001992739);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt3108->SetBinError(1,0.01084375);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt3108->SetBinError(2,0.009635222);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt3108->SetBinError(3,0.00655351);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt3108->SetBinError(4,0.005400248);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt3108->SetBinError(5,0.00388932);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt3108->SetBinError(6,0.001763178);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt3108->SetBinError(7,0.001225187);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt3108->SetBinError(8,0.002577331);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt3108->SetBinError(9,0.0008811597);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt3108->SetBinError(10,0.0001696153);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt3108->SetBinError(11,0.0002044925);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt3108->SetBinError(12,0.0002134369);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt3108->SetBinError(16,0.0001992739);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt3108->SetEntries(512);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt3108->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt3108->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt3108->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt3108->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt3108->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt3108->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt3108->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt3108->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt3108->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt3108->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt3108->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt3108->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt3108->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt3108->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt3108->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_13TeV_pt3->Add(new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt3,"");
   thsBackground_grouped_wh3l_MET_JetV_13TeV_pt3->Draw("hist same");
   
   thsSignal_grouped_wh3l_MET_JetV_13TeV_pt3 = new THStack();
   thsSignal_grouped_wh3l_MET_JetV_13TeV_pt3->SetName("thsSignal_grouped_wh3l_MET_JetV_13TeV_pt3");
   thsSignal_grouped_wh3l_MET_JetV_13TeV_pt3->SetTitle("thsSignal_grouped_wh3l_MET_JetV_13TeV_pt3");
   
   TH1F *thsSignal_grouped_wh3l_MET_JetV_13TeV_pt3_stack_22 = new TH1F("thsSignal_grouped_wh3l_MET_JetV_13TeV_pt3_stack_22","thsSignal_grouped_wh3l_MET_JetV_13TeV_pt3",25,10,200);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_pt3_stack_22->SetMinimum(0);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_pt3_stack_22->SetMaximum(0.1286794);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_pt3_stack_22->SetDirectory(0);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_pt3_stack_22->SetStats(0);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_pt3_stack_22->SetLineStyle(0);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_pt3_stack_22->SetMarkerStyle(20);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_pt3_stack_22->GetXaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_pt3_stack_22->GetXaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_pt3_stack_22->GetXaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_pt3_stack_22->GetXaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_pt3_stack_22->GetXaxis()->SetTitleOffset(0.9);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_pt3_stack_22->GetXaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_pt3_stack_22->GetYaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_pt3_stack_22->GetYaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_pt3_stack_22->GetYaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_pt3_stack_22->GetYaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_pt3_stack_22->GetYaxis()->SetTitleOffset(1.25);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_pt3_stack_22->GetYaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_pt3_stack_22->GetZaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_pt3_stack_22->GetZaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_pt3_stack_22->GetZaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_pt3_stack_22->GetZaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_pt3_stack_22->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_pt3->SetHistogram(thsSignal_grouped_wh3l_MET_JetV_13TeV_pt3_stack_22);
   
   
   TH1D *new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt3109 = new TH1D("new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt3109","histo_H_htt",25,10,200);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt3109->SetBinContent(1,0.111708);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt3109->SetBinContent(2,0.08209566);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt3109->SetBinContent(3,0.03995977);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt3109->SetBinContent(4,0.02437542);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt3109->SetBinContent(5,0.01328271);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt3109->SetBinContent(6,0.003455574);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt3109->SetBinContent(7,0.002339709);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt3109->SetBinContent(8,0.004666879);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt3109->SetBinContent(9,0.0008811597);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt3109->SetBinContent(10,0.0001696153);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt3109->SetBinContent(11,0.0002044925);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt3109->SetBinContent(12,0.0002134369);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt3109->SetBinContent(16,0.0001992739);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt3109->SetBinError(1,0.01084375);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt3109->SetBinError(2,0.009635222);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt3109->SetBinError(3,0.00655351);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt3109->SetBinError(4,0.005400248);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt3109->SetBinError(5,0.00388932);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt3109->SetBinError(6,0.001763178);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt3109->SetBinError(7,0.001225187);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt3109->SetBinError(8,0.002577331);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt3109->SetBinError(9,0.0008811597);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt3109->SetBinError(10,0.0001696153);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt3109->SetBinError(11,0.0002044925);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt3109->SetBinError(12,0.0002134369);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt3109->SetBinError(16,0.0001992739);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt3109->SetEntries(512);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt3109->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt3109->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt3109->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt3109->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt3109->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt3109->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt3109->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt3109->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt3109->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt3109->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt3109->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt3109->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt3109->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt3109->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt3109->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_MET_JetV_13TeV_pt3->Add(new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt3,"");
   thsSignal_grouped_wh3l_MET_JetV_13TeV_pt3->Draw("hist same noclear");
   
   Double_t _fx3021[25] = {
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
   Double_t _fy3021[25] = {
   2.90115,
   0.6175814,
   0.151698,
   -0.1343327,
   0.2990176,
   0.01145886,
   -0.0005291138,
   0.009624229,
   0,
   0.01513243,
   -0.01470217,
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
   Double_t _felx3021[25] = {
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
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
   Double_t _fely3021[25] = {
   1.691428,
   0.3408682,
   0.1841216,
   0.2081967,
   0.304354,
   0.01127873,
   0.003694639,
   0.009504958,
   0,
   0.01154517,
   0.01557667,
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
   Double_t _fehx3021[25] = {
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
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
   Double_t _fehy3021[25] = {
   1.691401,
   0.3408607,
   0.06470118,
   0.2081955,
   0.3043538,
   0.01127848,
   0.0007489772,
   0.009504986,
   0,
   0.01154289,
   0.01557667,
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
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(25,_fx3021,_fy3021,_felx3021,_fehx3021,_fely3021,_fehy3021);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(12);
   grae->SetFillStyle(3004);
   grae->SetLineColor(12);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3021 = new TH1F("Graph_Graph3021","",100,0,219);
   Graph_Graph3021->SetMinimum(-0.8360374);
   Graph_Graph3021->SetMaximum(5.086058);
   Graph_Graph3021->SetDirectory(0);
   Graph_Graph3021->SetStats(0);
   Graph_Graph3021->SetLineStyle(0);
   Graph_Graph3021->SetMarkerStyle(20);
   Graph_Graph3021->GetXaxis()->SetLabelFont(42);
   Graph_Graph3021->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3021->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3021->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3021->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3021->GetXaxis()->SetTitleFont(42);
   Graph_Graph3021->GetYaxis()->SetLabelFont(42);
   Graph_Graph3021->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3021->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3021->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3021->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3021->GetYaxis()->SetTitleFont(42);
   Graph_Graph3021->GetZaxis()->SetLabelFont(42);
   Graph_Graph3021->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3021->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3021->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3021->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3021);
   
   grae->Draw("2");
   
   Double_t _fx3022[25] = {
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
   Double_t _fy3022[25] = {
   1,
   1,
   2,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   0};
   Double_t _felx3022[25] = {
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
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
   Double_t _fely3022[25] = {
   0.8272524,
   0.8272524,
   1.29183,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   0};
   Double_t _fehx3022[25] = {
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
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
   Double_t _fehy3022[25] = {
   2.29957,
   2.29957,
   2.63791,
   1.147908,
   1.147908,
   1.147908,
   1.147908,
   1.147908,
   1.147908,
   1.147908,
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
   1.147908};
   grae = new TGraphAsymmErrors(25,_fx3022,_fy3022,_felx3022,_fehx3022,_fely3022,_fehy3022);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(1);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3022 = new TH1F("Graph_Graph3022","",100,0,219);
   Graph_Graph3022->SetMinimum(0);
   Graph_Graph3022->SetMaximum(5.101701);
   Graph_Graph3022->SetDirectory(0);
   Graph_Graph3022->SetStats(0);
   Graph_Graph3022->SetLineStyle(0);
   Graph_Graph3022->SetMarkerStyle(20);
   Graph_Graph3022->GetXaxis()->SetLabelFont(42);
   Graph_Graph3022->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3022->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3022->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3022->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3022->GetXaxis()->SetTitleFont(42);
   Graph_Graph3022->GetYaxis()->SetLabelFont(42);
   Graph_Graph3022->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3022->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3022->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3022->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3022->GetYaxis()->SetTitleFont(42);
   Graph_Graph3022->GetZaxis()->SetLabelFont(42);
   Graph_Graph3022->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3022->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3022->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3022->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3022);
   
   grae->Draw("p0");
   
   TLegend *leg = new TLegend(0.2,0.7,0.8,0.9,NULL,"brNDC");
   leg->SetTextFont(62);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt3","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_MET_JetV_13TeV_pt3","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt3","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_MET_JetV_13TeV_pt3","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_MET_JetV_13TeV_pt3","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt3","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt3","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_MET_JetV_13TeV_pt3","Data","EPL");
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
   entry=leg->AddEntry("new_histo_group_Fake_wh3l_MET_JetV_13TeV_pt3","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_MET_JetV_13TeV_pt3","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_MET_JetV_13TeV_pt3","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_MET_JetV_13TeV_pt3","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_MET_JetV_13TeV_pt3","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_MET_JetV_13TeV_pt3","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_MET_JetV_13TeV_pt3","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_MET_JetV_13TeV_pt3","Data","EPL");
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
   
   TH1F *hframe_copy110 = new TH1F("hframe_copy110","",1000,10,200);
   hframe_copy110->SetMinimum(0);
   hframe_copy110->SetMaximum(8.535534);
   hframe_copy110->SetDirectory(0);
   hframe_copy110->SetStats(0);
   hframe_copy110->SetLineStyle(0);
   hframe_copy110->SetMarkerStyle(20);
   hframe_copy110->GetXaxis()->SetTitle("lept3_p_{T} [GeV]");
   hframe_copy110->GetXaxis()->SetNdivisions(506);
   hframe_copy110->GetXaxis()->SetLabelFont(42);
   hframe_copy110->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy110->GetXaxis()->SetLabelSize(0.05);
   hframe_copy110->GetXaxis()->SetTitleSize(0.06);
   hframe_copy110->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy110->GetXaxis()->SetTitleFont(42);
   hframe_copy110->GetYaxis()->SetTitle("Events");
   hframe_copy110->GetYaxis()->SetLabelFont(42);
   hframe_copy110->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy110->GetYaxis()->SetLabelSize(0.05);
   hframe_copy110->GetYaxis()->SetTitleSize(0.06);
   hframe_copy110->GetYaxis()->SetTitleOffset(1.25);
   hframe_copy110->GetYaxis()->SetTitleFont(42);
   hframe_copy110->GetZaxis()->SetLabelFont(42);
   hframe_copy110->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy110->GetZaxis()->SetLabelSize(0.05);
   hframe_copy110->GetZaxis()->SetTitleSize(0.06);
   hframe_copy110->GetZaxis()->SetTitleFont(42);
   hframe_copy110->Draw("sameaxis");
   ccwh3l_MET_JetV_13TeV_pt3->Modified();
   ccwh3l_MET_JetV_13TeV_pt3->cd();
   ccwh3l_MET_JetV_13TeV_pt3->SetSelected(ccwh3l_MET_JetV_13TeV_pt3);
}
