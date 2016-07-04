void c_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2()
{
//=========Macro generated from canvas: ccwh3l_MET_JetV_ZVeto_mll_13TeV_pt2/cc
//=========  (Sun Jul  3 01:22:25 2016) by ROOT version6.02/13
   TCanvas *ccwh3l_MET_JetV_ZVeto_mll_13TeV_pt2 = new TCanvas("ccwh3l_MET_JetV_ZVeto_mll_13TeV_pt2", "cc",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   ccwh3l_MET_JetV_ZVeto_mll_13TeV_pt2->SetHighLightColor(2);
   ccwh3l_MET_JetV_ZVeto_mll_13TeV_pt2->Range(-28,-1.875508,209.5,12.55148);
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
   hframe571->SetMaximum(11.83013);
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
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2_stack_115->SetMinimum(-0.4900019);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2_stack_115->SetMaximum(2.234425);
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
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2572->SetBinContent(2,0.5315295);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2572->SetBinContent(3,-0.1796619);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2572->SetBinContent(4,1.170661);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2572->SetBinContent(5,0.1035289);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2572->SetBinContent(6,0.9195533);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2572->SetBinContent(7,-0.008101332);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2572->SetBinContent(8,0.3651159);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2572->SetBinError(2,0.419973);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2572->SetBinError(3,0.31034);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2572->SetBinError(4,0.9573621);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2572->SetBinError(5,0.1780403);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2572->SetBinError(6,0.7001762);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2572->SetBinError(7,0.007561613);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2572->SetBinError(8,0.3651159);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2572->SetEntries(33);

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
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2573->SetBinContent(2,0.0161241);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2573->SetBinContent(4,0.01039136);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2573->SetBinError(2,0.0161241);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2573->SetBinError(4,0.01039136);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2573->SetEntries(2);

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
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2574->SetBinContent(2,0.009074716);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2574->SetBinContent(3,0.01618711);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2574->SetBinContent(4,0.02219584);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2574->SetBinContent(5,0.00861415);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2574->SetBinContent(6,0.01528372);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2574->SetBinContent(7,0.01072429);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2574->SetBinContent(8,0.009884984);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2574->SetBinContent(9,0.001573326);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2574->SetBinContent(10,0.002701058);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2574->SetBinContent(13,0.002276835);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2574->SetBinContent(14,0.002687033);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2574->SetBinContent(17,0.00159006);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2574->SetBinError(2,0.005795888);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2574->SetBinError(3,0.006927907);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2574->SetBinError(4,0.006858693);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2574->SetBinError(5,0.006129967);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2574->SetBinError(6,0.005625142);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2574->SetBinError(7,0.004940424);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2574->SetBinError(8,0.004944349);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2574->SetBinError(9,0.004224576);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2574->SetBinError(10,0.002701058);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2574->SetBinError(13,0.002276835);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2574->SetBinError(14,0.002687033);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2574->SetBinError(17,0.00159006);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2574->SetEntries(62);

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
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2575->SetBinContent(4,0.0522728);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2575->SetBinError(4,0.0522728);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2575->SetEntries(1);

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
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2576->SetBinContent(2,0.0427135);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2576->SetBinContent(7,0.03513683);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2576->SetBinError(2,0.0427135);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2576->SetBinError(7,0.03513683);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2576->SetEntries(2);

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
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2577->SetBinContent(1,0.05830142);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2577->SetBinContent(2,0.1452895);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2577->SetBinContent(3,0.1212991);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2577->SetBinContent(4,0.1158263);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2577->SetBinContent(5,0.05546958);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2577->SetBinContent(6,0.04050875);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2577->SetBinContent(7,0.03273749);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2577->SetBinContent(8,0.01609509);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2577->SetBinContent(9,0.006153808);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2577->SetBinContent(10,0.003593794);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2577->SetBinContent(11,0.005713332);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2577->SetBinContent(12,0.004728666);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2577->SetBinContent(14,0.011118);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2577->SetBinContent(17,0.005827953);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2577->SetBinError(1,0.01806022);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2577->SetBinError(2,0.02823911);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2577->SetBinError(3,0.02475323);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2577->SetBinError(4,0.02497046);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2577->SetBinError(5,0.01690675);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2577->SetBinError(6,0.01470334);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2577->SetBinError(7,0.01346836);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2577->SetBinError(8,0.009524);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2577->SetBinError(9,0.006153808);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2577->SetBinError(10,0.003593794);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2577->SetBinError(11,0.005713332);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2577->SetBinError(12,0.004728666);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2577->SetBinError(14,0.00786224);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2577->SetBinError(17,0.005827953);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2577->SetEntries(128);

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
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2578->SetBinContent(1,0.01264166);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2578->SetBinContent(2,0.04660306);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2578->SetBinContent(3,0.05474935);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2578->SetBinContent(4,0.04635016);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2578->SetBinContent(5,0.0492552);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2578->SetBinContent(6,0.01452218);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2578->SetBinContent(7,0.01024667);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2578->SetBinContent(8,0.01083929);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2578->SetBinContent(9,0.009321209);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2578->SetBinContent(10,0.008611076);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2578->SetBinContent(11,0.004717868);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2578->SetBinContent(12,0.002483983);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2578->SetBinContent(13,0.005483022);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2578->SetBinContent(15,0.0006046926);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2578->SetBinContent(16,0.001266534);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2578->SetBinContent(17,0.001219663);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2578->SetBinContent(19,0.001323184);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2578->SetBinContent(20,0.0001701444);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2578->SetBinContent(21,0.001148031);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2578->SetBinContent(24,0.0007126941);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2578->SetBinContent(25,0.0003810904);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2578->SetBinContent(26,0.0009009495);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2578->SetBinError(1,0.00373365);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2578->SetBinError(2,0.006623917);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2578->SetBinError(3,0.007724997);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2578->SetBinError(4,0.00767364);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2578->SetBinError(5,0.007338705);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2578->SetBinError(6,0.003685182);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2578->SetBinError(7,0.002802975);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2578->SetBinError(8,0.003517269);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2578->SetBinError(9,0.003205587);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2578->SetBinError(10,0.003790345);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2578->SetBinError(11,0.002359426);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2578->SetBinError(12,0.001677719);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2578->SetBinError(13,0.002822296);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2578->SetBinError(15,0.0003994273);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2578->SetBinError(16,0.0006046368);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2578->SetBinError(17,0.001027735);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2578->SetBinError(19,0.001323184);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2578->SetBinError(20,0.0001701444);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2578->SetBinError(21,0.000920686);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2578->SetBinError(24,0.0004186351);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2578->SetBinError(25,0.0003810904);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2578->SetBinError(26,0.0005355324);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2578->SetEntries(512);
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
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2_stack_116->SetMaximum(0.06559807);
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
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2579->SetBinContent(1,0.01264166);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2579->SetBinContent(2,0.04660306);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2579->SetBinContent(3,0.05474935);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2579->SetBinContent(4,0.04635016);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2579->SetBinContent(5,0.0492552);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2579->SetBinContent(6,0.01452218);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2579->SetBinContent(7,0.01024667);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2579->SetBinContent(8,0.01083929);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2579->SetBinContent(9,0.009321209);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2579->SetBinContent(10,0.008611076);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2579->SetBinContent(11,0.004717868);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2579->SetBinContent(12,0.002483983);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2579->SetBinContent(13,0.005483022);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2579->SetBinContent(15,0.0006046926);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2579->SetBinContent(16,0.001266534);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2579->SetBinContent(17,0.001219663);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2579->SetBinContent(19,0.001323184);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2579->SetBinContent(20,0.0001701444);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2579->SetBinContent(21,0.001148031);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2579->SetBinContent(24,0.0007126941);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2579->SetBinContent(25,0.0003810904);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2579->SetBinContent(26,0.0009009495);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2579->SetBinError(1,0.00373365);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2579->SetBinError(2,0.006623917);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2579->SetBinError(3,0.007724997);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2579->SetBinError(4,0.00767364);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2579->SetBinError(5,0.007338705);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2579->SetBinError(6,0.003685182);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2579->SetBinError(7,0.002802975);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2579->SetBinError(8,0.003517269);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2579->SetBinError(9,0.003205587);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2579->SetBinError(10,0.003790345);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2579->SetBinError(11,0.002359426);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2579->SetBinError(12,0.001677719);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2579->SetBinError(13,0.002822296);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2579->SetBinError(15,0.0003994273);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2579->SetBinError(16,0.0006046368);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2579->SetBinError(17,0.001027735);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2579->SetBinError(19,0.001323184);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2579->SetBinError(20,0.0001701444);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2579->SetBinError(21,0.000920686);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2579->SetBinError(24,0.0004186351);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2579->SetBinError(25,0.0003810904);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2579->SetBinError(26,0.0005355324);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt2579->SetEntries(512);
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
   0.05830142,
   0.7447314,
   -0.04217562,
   1.371348,
   0.1676127,
   0.9753457,
   0.07049727,
   0.3910959,
   0.007727134,
   0.006294853,
   0.005713332,
   0.004728666,
   0.002276835,
   0.01380503,
   0,
   0,
   0.007418013,
   0,
   0,
   0,
   0,
   0,
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
   0.0185311,
   0.5456898,
   0.3481624,
   1.129082,
   0.1319356,
   0.7892688,
   0.06214247,
   0.4006402,
   0.007894203,
   0.00685639,
   0.005720973,
   0.004734323,
   0.003221557,
   0.0109102,
   0,
   0,
   0.007592005,
   0,
   0,
   0,
   0,
   0,
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
   0.01851039,
   0.5456856,
   0.221146,
   1.129072,
   0.2044988,
   0.789269,
   0.06213888,
   0.40064,
   0.01050224,
   0.006855127,
   0.005717632,
   0.004733237,
   0.003221534,
   0.01089226,
   0,
   0,
   0.007589343,
   0,
   0,
   0,
   0,
   0,
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
   Graph_Graph3115->SetMinimum(-0.6794137);
   Graph_Graph3115->SetMaximum(2.789495);
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
   0,
   0,
   3,
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
   0,
   0,
   1.632727,
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
   1.147908,
   1.147908,
   2.918242,
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
   1.147908,
   1.147908};
   grae = new TGraphAsymmErrors(25,_fx3116,_fy3116,_felx3116,_fehx3116,_fely3116,_fehy3116);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(1);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3116 = new TH1F("Graph_Graph3116","",100,0,219);
   Graph_Graph3116->SetMinimum(0);
   Graph_Graph3116->SetMaximum(6.510067);
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
   hframe_copy580->SetMaximum(11.83013);
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
