void c_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2()
{
//=========Macro generated from canvas: ccwh3l_MET_JetV_ZVeto_mll_13TeV_pt2/cc
//=========  (Sat Jul  2 21:44:05 2016) by ROOT version6.02/13
   TCanvas *ccwh3l_MET_JetV_ZVeto_mll_13TeV_pt2 = new TCanvas("ccwh3l_MET_JetV_ZVeto_mll_13TeV_pt2", "cc",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   ccwh3l_MET_JetV_ZVeto_mll_13TeV_pt2->SetHighLightColor(2);
   ccwh3l_MET_JetV_ZVeto_mll_13TeV_pt2->Range(-28,-1.353194,209.5,9.055993);
   ccwh3l_MET_JetV_ZVeto_mll_13TeV_pt2->SetFillColor(0);
   ccwh3l_MET_JetV_ZVeto_mll_13TeV_pt2->SetBorderMode(0);
   ccwh3l_MET_JetV_ZVeto_mll_13TeV_pt2->SetBorderSize(2);
   ccwh3l_MET_JetV_ZVeto_mll_13TeV_pt2->SetTickx(1);
   ccwh3l_MET_JetV_ZVeto_mll_13TeV_pt2->SetTicky(1);
   ccwh3l_MET_JetV_ZVeto_mll_13TeV_pt2->SetLeftMargin(0.16);
   ccwh3l_MET_JetV_ZVeto_mll_13TeV_pt2->SetRightMargin(0.04);
   ccwh3l_MET_JetV_ZVeto_mll_13TeV_pt2->SetTopMargin(0.05);
   ccwh3l_MET_JetV_ZVeto_mll_13TeV_pt2->SetBottomMargin(0.13);
   ccwh3l_MET_JetV_ZVeto_mll_13TeV_pt2->SetFrameFillStyle(0);
   ccwh3l_MET_JetV_ZVeto_mll_13TeV_pt2->SetFrameBorderMode(0);
   ccwh3l_MET_JetV_ZVeto_mll_13TeV_pt2->SetFrameFillStyle(0);
   ccwh3l_MET_JetV_ZVeto_mll_13TeV_pt2->SetFrameBorderMode(0);
   
   TH1F *hframe571 = new TH1F("hframe571","",1000,10,200);
   hframe571->SetMinimum(0);
   hframe571->SetMaximum(8.535534);
   hframe571->SetDirectory(0);
   hframe571->SetStats(0);
   hframe571->SetLineStyle(0);
   hframe571->SetMarkerStyle(20);
   hframe571->GetXaxis()->SetTitle("lept2_p_{T} [GeV]");
   hframe571->GetXaxis()->SetNdivisions(506);
   hframe571->GetXaxis()->SetLabelFont(42);
   hframe571->GetXaxis()->SetLabelOffset(0.007);
   hframe571->GetXaxis()->SetLabelSize(0.05);
   hframe571->GetXaxis()->SetTitleSize(0.06);
   hframe571->GetXaxis()->SetTitleOffset(0.9);
   hframe571->GetXaxis()->SetTitleFont(42);
   hframe571->GetYaxis()->SetTitle("Events");
   hframe571->GetYaxis()->SetLabelFont(42);
   hframe571->GetYaxis()->SetLabelOffset(0.007);
   hframe571->GetYaxis()->SetLabelSize(0.05);
   hframe571->GetYaxis()->SetTitleSize(0.06);
   hframe571->GetYaxis()->SetTitleOffset(1.25);
   hframe571->GetYaxis()->SetTitleFont(42);
   hframe571->GetZaxis()->SetLabelFont(42);
   hframe571->GetZaxis()->SetLabelOffset(0.007);
   hframe571->GetZaxis()->SetLabelSize(0.05);
   hframe571->GetZaxis()->SetTitleSize(0.06);
   hframe571->GetZaxis()->SetTitleFont(42);
   hframe571->Draw(" ");
   
   THStack *thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2 = new THStack();
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2->SetName("thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2");
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2->SetTitle("thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2");
   
   TH1F *thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2_stack_115 = new TH1F("thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2_stack_115","thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2",25,10,200);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2_stack_115->SetMinimum(-0.5259424);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2_stack_115->SetMaximum(3.347013);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2_stack_115->SetDirectory(0);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2_stack_115->SetStats(0);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2_stack_115->SetLineStyle(0);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2_stack_115->SetMarkerStyle(20);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2_stack_115->GetXaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2_stack_115->GetXaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2_stack_115->GetXaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2_stack_115->GetXaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2_stack_115->GetXaxis()->SetTitleOffset(0.9);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2_stack_115->GetXaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2_stack_115->GetYaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2_stack_115->GetYaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2_stack_115->GetYaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2_stack_115->GetYaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2_stack_115->GetYaxis()->SetTitleOffset(1.25);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2_stack_115->GetYaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2_stack_115->GetZaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2_stack_115->GetZaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2_stack_115->GetZaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2_stack_115->GetZaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2_stack_115->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2->SetHistogram(thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2_stack_115);
   
   
   TH1D *new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2572 = new TH1D("new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2572","histo_Fake",25,10,200);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2572->SetBinContent(1,0.1287405);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2572->SetBinContent(2,0.8378874);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2572->SetBinContent(3,1.67474);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2572->SetBinContent(4,-0.0348396);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2572->SetBinContent(5,0.5207844);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2572->SetBinContent(7,0.1354057);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2572->SetBinContent(9,-0.001650331);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2572->SetBinContent(10,0.01119502);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2572->SetBinError(1,0.6546829);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2572->SetBinError(2,0.695393);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2572->SetBinError(3,0.8474622);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2572->SetBinError(4,0.2272138);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2572->SetBinError(5,0.5207844);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2572->SetBinError(7,0.1354057);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2572->SetBinError(9,0.001650331);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2572->SetBinError(10,0.01119502);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2572->SetEntries(36);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2572->SetFillColor(ci);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2572->SetFillStyle(3001);

   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2572->SetLineColor(ci);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2572->GetXaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2572->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2572->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2572->GetXaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2572->GetYaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2572->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2572->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2572->GetYaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2572->GetZaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2572->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2572->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2572->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2->Add(new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2,"");
   
   TH1D *new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2573 = new TH1D("new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2573","histo_WW",25,10,200);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2573->SetBinContent(8,0.01530373);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2573->SetBinError(8,0.01530373);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2573->SetEntries(1);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2573->SetFillColor(ci);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2573->SetFillStyle(3001);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2573->SetLineColor(ci);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2573->GetXaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2573->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2573->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2573->GetXaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2573->GetYaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2573->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2573->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2573->GetYaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2573->GetZaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2573->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2573->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2573->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2->Add(new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2,"");
   
   TH1D *new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2574 = new TH1D("new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2574","histo_VVV",25,10,200);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2574->SetBinContent(2,0.01919708);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2574->SetBinContent(3,0.02289223);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2574->SetBinContent(4,0.02412253);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2574->SetBinContent(5,0.00378731);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2574->SetBinContent(6,0.009779589);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2574->SetBinContent(7,0.004334275);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2574->SetBinContent(12,0.001928762);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2574->SetBinContent(18,-0.002686125);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2574->SetBinError(2,0.006829298);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2574->SetBinError(3,0.007262351);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2574->SetBinError(4,0.007541649);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2574->SetBinError(5,0.002723005);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2574->SetBinError(6,0.004923322);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2574->SetBinError(7,0.002700957);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2574->SetBinError(12,0.001928762);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2574->SetBinError(18,0.002686125);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2574->SetEntries(41);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2574->SetFillColor(ci);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2574->SetFillStyle(3001);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2574->SetLineColor(ci);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2574->GetXaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2574->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2574->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2574->GetXaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2574->GetYaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2574->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2574->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2574->GetYaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2574->GetZaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2574->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2574->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2574->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2->Add(new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2,"");
   
   TH1D *new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2575 = new TH1D("new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2575","histo_Vg",25,10,200);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2575->SetBinContent(1,0.02616973);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2575->SetBinContent(2,0.7312382);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2575->SetBinContent(3,0.3902415);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2575->SetBinContent(5,0.09276484);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2575->SetBinError(1,0.02616973);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2575->SetBinError(2,0.2766559);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2575->SetBinError(3,0.2510961);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2575->SetBinError(5,0.09276484);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2575->SetEntries(18);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2575->SetFillColor(ci);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2575->SetFillStyle(3001);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2575->SetLineColor(ci);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2575->GetXaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2575->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2575->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2575->GetXaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2575->GetYaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2575->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2575->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2575->GetYaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2575->GetZaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2575->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2575->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2575->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2->Add(new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2,"");
   
   TH1D *new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2576 = new TH1D("new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2576","histo_ZZ",25,10,200);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2576->SetBinContent(1,0.05352081);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2576->SetBinContent(2,0.06410226);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2576->SetBinContent(3,0.1337759);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2576->SetBinError(1,0.03784829);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2576->SetBinError(2,0.04559496);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2576->SetBinError(3,0.07761597);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2576->SetEntries(7);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2576->SetFillColor(ci);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2576->SetFillStyle(3001);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2576->SetLineColor(ci);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2576->GetXaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2576->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2576->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2576->GetXaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2576->GetYaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2576->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2576->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2576->GetYaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2576->GetZaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2576->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2576->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2576->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2->Add(new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2,"");
   
   TH1D *new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2577 = new TH1D("new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2577","histo_WZ",25,10,200);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2577->SetBinContent(1,0.4345345);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2577->SetBinContent(2,1.458777);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2577->SetBinContent(3,0.8624342);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2577->SetBinContent(4,0.4537841);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2577->SetBinContent(5,0.3182693);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2577->SetBinContent(6,0.1685845);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2577->SetBinContent(7,0.1238002);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2577->SetBinContent(8,0.09773388);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2577->SetBinContent(9,0.03220525);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2577->SetBinContent(10,0.05701345);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2577->SetBinContent(11,0.01512757);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2577->SetBinContent(12,0.01377464);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2577->SetBinContent(13,0.007362425);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2577->SetBinContent(14,0.01113224);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2577->SetBinContent(15,0.01123867);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2577->SetBinContent(18,0.004608317);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2577->SetBinContent(19,0.006046872);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2577->SetBinContent(21,0.005363861);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2577->SetBinContent(22,0.005785195);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2577->SetBinError(1,0.04755647);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2577->SetBinError(2,0.08966922);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2577->SetBinError(3,0.06844574);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2577->SetBinError(4,0.0493213);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2577->SetBinError(5,0.04134166);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2577->SetBinError(6,0.0298932);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2577->SetBinError(7,0.02624565);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2577->SetBinError(8,0.02434457);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2577->SetBinError(9,0.01283896);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2577->SetBinError(10,0.0177529);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2577->SetBinError(11,0.008826111);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2577->SetBinError(12,0.00810211);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2577->SetBinError(13,0.006177992);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2577->SetBinError(14,0.007874998);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2577->SetBinError(15,0.007947007);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2577->SetBinError(18,0.004608317);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2577->SetBinError(19,0.006046872);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2577->SetBinError(21,0.005363861);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2577->SetBinError(22,0.005785195);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2577->SetEntries(837);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2577->SetFillColor(ci);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2577->SetFillStyle(3001);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2577->SetLineColor(ci);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2577->GetXaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2577->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2577->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2577->GetXaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2577->GetYaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2577->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2577->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2577->GetYaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2577->GetZaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2577->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2577->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2577->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2->Add(new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2,"");
   
   TH1D *new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2578 = new TH1D("new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2578","histo_H_htt",25,10,200);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2578->SetBinContent(1,0.01348944);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2578->SetBinContent(2,0.07642959);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2578->SetBinContent(3,0.09490345);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2578->SetBinContent(4,0.05598627);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2578->SetBinContent(5,0.02518411);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2578->SetBinContent(6,0.02932181);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2578->SetBinContent(7,0.01722981);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2578->SetBinContent(8,0.00725517);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2578->SetBinContent(9,0.006780544);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2578->SetBinContent(10,0.00907436);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2578->SetBinContent(11,0.006103549);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2578->SetBinContent(12,0.007278732);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2578->SetBinContent(13,0.001654014);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2578->SetBinContent(14,0.001543548);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2578->SetBinContent(16,0.00181767);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2578->SetBinContent(18,0.001130341);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2578->SetBinContent(20,0.0008175619);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2578->SetBinContent(24,0.001032655);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2578->SetBinError(1,0.004982491);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2578->SetBinError(2,0.009852152);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2578->SetBinError(3,0.01068762);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2578->SetBinError(4,0.00829579);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2578->SetBinError(5,0.005244722);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2578->SetBinError(6,0.00703872);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2578->SetBinError(7,0.004711984);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2578->SetBinError(8,0.00323494);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2578->SetBinError(9,0.003184177);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2578->SetBinError(10,0.003437092);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2578->SetBinError(11,0.002836322);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2578->SetBinError(12,0.003087363);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2578->SetBinError(13,0.001654014);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2578->SetBinError(14,0.001543548);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2578->SetBinError(16,0.001664619);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2578->SetBinError(18,0.001130312);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2578->SetBinError(20,0.0008175619);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2578->SetBinError(24,0.001032655);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2578->SetEntries(471);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2578->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2578->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2578->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2578->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2578->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2578->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2578->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2578->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2578->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2578->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2578->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2578->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2578->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2578->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2578->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2->Add(new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2,"");
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2->Draw("hist same");
   
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2 = new THStack();
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2->SetName("thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2");
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2->SetTitle("thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2");
   
   TH1F *thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2_stack_116 = new TH1F("thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2_stack_116","thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2",25,10,200);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2_stack_116->SetMinimum(0);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2_stack_116->SetMaximum(0.1108706);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2_stack_116->SetDirectory(0);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2_stack_116->SetStats(0);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2_stack_116->SetLineStyle(0);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2_stack_116->SetMarkerStyle(20);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2_stack_116->GetXaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2_stack_116->GetXaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2_stack_116->GetXaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2_stack_116->GetXaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2_stack_116->GetXaxis()->SetTitleOffset(0.9);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2_stack_116->GetXaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2_stack_116->GetYaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2_stack_116->GetYaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2_stack_116->GetYaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2_stack_116->GetYaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2_stack_116->GetYaxis()->SetTitleOffset(1.25);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2_stack_116->GetYaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2_stack_116->GetZaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2_stack_116->GetZaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2_stack_116->GetZaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2_stack_116->GetZaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2_stack_116->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2->SetHistogram(thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2_stack_116);
   
   
   TH1D *new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2579 = new TH1D("new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2579","histo_H_htt",25,10,200);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2579->SetBinContent(1,0.01348944);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2579->SetBinContent(2,0.07642959);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2579->SetBinContent(3,0.09490345);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2579->SetBinContent(4,0.05598627);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2579->SetBinContent(5,0.02518411);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2579->SetBinContent(6,0.02932181);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2579->SetBinContent(7,0.01722981);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2579->SetBinContent(8,0.00725517);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2579->SetBinContent(9,0.006780544);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2579->SetBinContent(10,0.00907436);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2579->SetBinContent(11,0.006103549);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2579->SetBinContent(12,0.007278732);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2579->SetBinContent(13,0.001654014);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2579->SetBinContent(14,0.001543548);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2579->SetBinContent(16,0.00181767);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2579->SetBinContent(18,0.001130341);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2579->SetBinContent(20,0.0008175619);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2579->SetBinContent(24,0.001032655);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2579->SetBinError(1,0.004982491);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2579->SetBinError(2,0.009852152);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2579->SetBinError(3,0.01068762);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2579->SetBinError(4,0.00829579);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2579->SetBinError(5,0.005244722);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2579->SetBinError(6,0.00703872);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2579->SetBinError(7,0.004711984);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2579->SetBinError(8,0.00323494);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2579->SetBinError(9,0.003184177);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2579->SetBinError(10,0.003437092);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2579->SetBinError(11,0.002836322);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2579->SetBinError(12,0.003087363);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2579->SetBinError(13,0.001654014);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2579->SetBinError(14,0.001543548);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2579->SetBinError(16,0.001664619);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2579->SetBinError(18,0.001130312);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2579->SetBinError(20,0.0008175619);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2579->SetBinError(24,0.001032655);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2579->SetEntries(471);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2579->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2579->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2579->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2579->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2579->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2579->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2579->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2579->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2579->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2579->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2579->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2579->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2579->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2579->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2579->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2->Add(new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2,"");
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2->Draw("hist same noclear");
   
   Double_t _fx3115[25] = {
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
   Double_t _fy3115[25] = {
   0.6429655,
   3.111202,
   3.084084,
   0.443067,
   0.9356058,
   0.1783641,
   0.2635402,
   0.1130376,
   0.03055492,
   0.06820846,
   0.01512757,
   0.0157034,
   0.007362425,
   0.01113224,
   0.01123867,
   0,
   0,
   0.001922192,
   0.006046872,
   0,
   0.005363861,
   0.005785195,
   0,
   0,
   0};
   Double_t _felx3115[25] = {
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
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
   Double_t _fely3115[25] = {
   0.2498063,
   1.161379,
   1.383877,
   0.2858945,
   0.6824881,
   0.03646241,
   0.1711295,
   0.03995849,
   0.01456202,
   0.02924989,
   0.008868635,
   0.01027267,
   0.006182504,
   0.007876922,
   0.007970042,
   0,
   0,
   0.007773653,
   0.006051942,
   0,
   0.005363949,
   0.00578609,
   0,
   0,
   0};
   Double_t _fehx3115[25] = {
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
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
   Double_t _fehy3115[25] = {
   0.7692705,
   1.160649,
   1.383805,
   0.09702297,
   0.6824751,
   0.03641436,
   0.171129,
   0.03998228,
   0.01455796,
   0.02925389,
   0.008863266,
   0.01024371,
   0.006180239,
   0.007877014,
   0.007973622,
   0,
   0,
   0.007775768,
   0.006049806,
   0,
   0.005363949,
   0.005786108,
   0,
   0,
   0};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(25,_fx3115,_fy3115,_felx3115,_fehx3115,_fely3115,_fehy3115);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(12);
   grae->SetFillStyle(3004);
   grae->SetLineColor(12);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3115 = new TH1F("Graph_Graph3115","",100,0,219);
   Graph_Graph3115->SetMinimum(-0.4532255);
   Graph_Graph3115->SetMaximum(4.915262);
   Graph_Graph3115->SetDirectory(0);
   Graph_Graph3115->SetStats(0);
   Graph_Graph3115->SetLineStyle(0);
   Graph_Graph3115->SetMarkerStyle(20);
   Graph_Graph3115->GetXaxis()->SetLabelFont(42);
   Graph_Graph3115->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3115->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3115->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3115->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3115->GetXaxis()->SetTitleFont(42);
   Graph_Graph3115->GetYaxis()->SetLabelFont(42);
   Graph_Graph3115->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3115->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3115->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3115->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3115->GetYaxis()->SetTitleFont(42);
   Graph_Graph3115->GetZaxis()->SetLabelFont(42);
   Graph_Graph3115->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3115->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3115->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3115->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3115);
   
   grae->Draw("2");
   
   Double_t _fx3116[25] = {
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
   Double_t _fy3116[25] = {
   1,
   2,
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
   0,
   0,
   0,
   0,
   0};
   Double_t _felx3116[25] = {
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
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
   Double_t _fely3116[25] = {
   0.8272524,
   1.29183,
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
   0,
   0,
   0,
   0,
   0};
   Double_t _fehx3116[25] = {
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
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
   Double_t _fehy3116[25] = {
   2.29957,
   2.63791,
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
   1.147908,
   1.147908,
   1.147908,
   1.147908,
   1.147908};
   grae = new TGraphAsymmErrors(25,_fx3116,_fy3116,_felx3116,_fehx3116,_fely3116,_fehy3116);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(1);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3116 = new TH1F("Graph_Graph3116","",100,0,219);
   Graph_Graph3116->SetMinimum(0);
   Graph_Graph3116->SetMaximum(5.101701);
   Graph_Graph3116->SetDirectory(0);
   Graph_Graph3116->SetStats(0);
   Graph_Graph3116->SetLineStyle(0);
   Graph_Graph3116->SetMarkerStyle(20);
   Graph_Graph3116->GetXaxis()->SetLabelFont(42);
   Graph_Graph3116->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3116->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3116->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3116->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3116->GetXaxis()->SetTitleFont(42);
   Graph_Graph3116->GetYaxis()->SetLabelFont(42);
   Graph_Graph3116->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3116->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3116->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3116->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3116->GetYaxis()->SetTitleFont(42);
   Graph_Graph3116->GetZaxis()->SetLabelFont(42);
   Graph_Graph3116->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3116->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3116->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3116->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3116);
   
   grae->Draw("p0");
   
   TLegend *leg = new TLegend(0.2,0.7,0.8,0.9,NULL,"brNDC");
   leg->SetTextFont(62);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2","Data","EPL");
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
   entry=leg->AddEntry("new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2","Data","EPL");
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
   
   TH1F *hframe_copy580 = new TH1F("hframe_copy580","",1000,10,200);
   hframe_copy580->SetMinimum(0);
   hframe_copy580->SetMaximum(8.535534);
   hframe_copy580->SetDirectory(0);
   hframe_copy580->SetStats(0);
   hframe_copy580->SetLineStyle(0);
   hframe_copy580->SetMarkerStyle(20);
   hframe_copy580->GetXaxis()->SetTitle("lept2_p_{T} [GeV]");
   hframe_copy580->GetXaxis()->SetNdivisions(506);
   hframe_copy580->GetXaxis()->SetLabelFont(42);
   hframe_copy580->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy580->GetXaxis()->SetLabelSize(0.05);
   hframe_copy580->GetXaxis()->SetTitleSize(0.06);
   hframe_copy580->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy580->GetXaxis()->SetTitleFont(42);
   hframe_copy580->GetYaxis()->SetTitle("Events");
   hframe_copy580->GetYaxis()->SetLabelFont(42);
   hframe_copy580->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy580->GetYaxis()->SetLabelSize(0.05);
   hframe_copy580->GetYaxis()->SetTitleSize(0.06);
   hframe_copy580->GetYaxis()->SetTitleOffset(1.25);
   hframe_copy580->GetYaxis()->SetTitleFont(42);
   hframe_copy580->GetZaxis()->SetLabelFont(42);
   hframe_copy580->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy580->GetZaxis()->SetLabelSize(0.05);
   hframe_copy580->GetZaxis()->SetTitleSize(0.06);
   hframe_copy580->GetZaxis()->SetTitleFont(42);
   hframe_copy580->Draw("sameaxis");
   ccwh3l_MET_JetV_ZVeto_mll_13TeV_pt2->Modified();
   ccwh3l_MET_JetV_ZVeto_mll_13TeV_pt2->cd();
   ccwh3l_MET_JetV_ZVeto_mll_13TeV_pt2->SetSelected(ccwh3l_MET_JetV_ZVeto_mll_13TeV_pt2);
}
