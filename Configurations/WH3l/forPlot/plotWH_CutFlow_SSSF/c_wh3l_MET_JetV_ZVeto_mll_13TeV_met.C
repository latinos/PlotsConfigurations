void c_wh3l_MET_JetV_ZVeto_mll_13TeV_met()
{
//=========Macro generated from canvas: ccwh3l_MET_JetV_ZVeto_mll_13TeV_met/cc
//=========  (Sun Jul  3 01:22:26 2016) by ROOT version6.02/13
   TCanvas *ccwh3l_MET_JetV_ZVeto_mll_13TeV_met = new TCanvas("ccwh3l_MET_JetV_ZVeto_mll_13TeV_met", "cc",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   ccwh3l_MET_JetV_ZVeto_mll_13TeV_met->SetHighLightColor(2);
   ccwh3l_MET_JetV_ZVeto_mll_13TeV_met->Range(-40,-0.7926829,210,5.304878);
   ccwh3l_MET_JetV_ZVeto_mll_13TeV_met->SetFillColor(0);
   ccwh3l_MET_JetV_ZVeto_mll_13TeV_met->SetBorderMode(0);
   ccwh3l_MET_JetV_ZVeto_mll_13TeV_met->SetBorderSize(2);
   ccwh3l_MET_JetV_ZVeto_mll_13TeV_met->SetTickx(1);
   ccwh3l_MET_JetV_ZVeto_mll_13TeV_met->SetTicky(1);
   ccwh3l_MET_JetV_ZVeto_mll_13TeV_met->SetLeftMargin(0.16);
   ccwh3l_MET_JetV_ZVeto_mll_13TeV_met->SetRightMargin(0.04);
   ccwh3l_MET_JetV_ZVeto_mll_13TeV_met->SetTopMargin(0.05);
   ccwh3l_MET_JetV_ZVeto_mll_13TeV_met->SetBottomMargin(0.13);
   ccwh3l_MET_JetV_ZVeto_mll_13TeV_met->SetFrameFillStyle(0);
   ccwh3l_MET_JetV_ZVeto_mll_13TeV_met->SetFrameBorderMode(0);
   ccwh3l_MET_JetV_ZVeto_mll_13TeV_met->SetFrameFillStyle(0);
   ccwh3l_MET_JetV_ZVeto_mll_13TeV_met->SetFrameBorderMode(0);
   
   TH1F *hframe581 = new TH1F("hframe581","",1000,0,200);
   hframe581->SetMinimum(0);
   hframe581->SetMaximum(5);
   hframe581->SetDirectory(0);
   hframe581->SetStats(0);
   hframe581->SetLineStyle(0);
   hframe581->SetMarkerStyle(20);
   hframe581->GetXaxis()->SetTitle("pfmet [GeV]");
   hframe581->GetXaxis()->SetNdivisions(506);
   hframe581->GetXaxis()->SetLabelFont(42);
   hframe581->GetXaxis()->SetLabelOffset(0.007);
   hframe581->GetXaxis()->SetLabelSize(0.05);
   hframe581->GetXaxis()->SetTitleSize(0.06);
   hframe581->GetXaxis()->SetTitleOffset(0.9);
   hframe581->GetXaxis()->SetTitleFont(42);
   hframe581->GetYaxis()->SetTitle("Events");
   hframe581->GetYaxis()->SetLabelFont(42);
   hframe581->GetYaxis()->SetLabelOffset(0.007);
   hframe581->GetYaxis()->SetLabelSize(0.05);
   hframe581->GetYaxis()->SetTitleSize(0.06);
   hframe581->GetYaxis()->SetTitleOffset(1.25);
   hframe581->GetYaxis()->SetTitleFont(42);
   hframe581->GetZaxis()->SetLabelFont(42);
   hframe581->GetZaxis()->SetLabelOffset(0.007);
   hframe581->GetZaxis()->SetLabelSize(0.05);
   hframe581->GetZaxis()->SetTitleSize(0.06);
   hframe581->GetZaxis()->SetTitleFont(42);
   hframe581->Draw(" ");
   
   THStack *thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_met = new THStack();
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_met->SetName("thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_met");
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_met->SetTitle("thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_met");
   
   TH1F *thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_met_stack_117 = new TH1F("thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_met_stack_117","thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_met",40,0,200);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_met_stack_117->SetMinimum(-0.4897);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_met_stack_117->SetMaximum(1.908931);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_met_stack_117->SetDirectory(0);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_met_stack_117->SetStats(0);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_met_stack_117->SetLineStyle(0);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_met_stack_117->SetMarkerStyle(20);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_met_stack_117->GetXaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_met_stack_117->GetXaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_met_stack_117->GetXaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_met_stack_117->GetXaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_met_stack_117->GetXaxis()->SetTitleOffset(0.9);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_met_stack_117->GetXaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_met_stack_117->GetYaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_met_stack_117->GetYaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_met_stack_117->GetYaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_met_stack_117->GetYaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_met_stack_117->GetYaxis()->SetTitleOffset(1.25);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_met_stack_117->GetYaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_met_stack_117->GetZaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_met_stack_117->GetZaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_met_stack_117->GetZaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_met_stack_117->GetZaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_met_stack_117->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_met->SetHistogram(thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_met_stack_117);
   
   
   TH1D *new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_met582 = new TH1D("new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_met582","histo_Fake",40,0,200);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_met582->SetBinContent(7,0.1398005);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_met582->SetBinContent(8,-0.247154);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_met582->SetBinContent(9,-0.1097654);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_met582->SetBinContent(11,0.6436369);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_met582->SetBinContent(12,0.9745436);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_met582->SetBinContent(13,0.383281);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_met582->SetBinContent(14,0.5858385);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_met582->SetBinContent(15,-0.007540809);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_met582->SetBinContent(16,-0.01160807);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_met582->SetBinContent(17,0.3651159);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_met582->SetBinContent(19,0.06737334);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_met582->SetBinContent(20,-0.1034349);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_met582->SetBinContent(21,-0.0005605229);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_met582->SetBinContent(22,0.1796949);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_met582->SetBinContent(23,0.1345139);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_met582->SetBinContent(25,-0.1741594);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_met582->SetBinContent(26,0.08972475);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_met582->SetBinContent(28,-0.006674166);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_met582->SetBinError(7,0.1482372);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_met582->SetBinError(8,0.242546);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_met582->SetBinError(9,0.08112018);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_met582->SetBinError(11,0.6434307);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_met582->SetBinError(12,0.8434855);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_met582->SetBinError(13,0.3840536);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_met582->SetBinError(14,0.5268493);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_met582->SetBinError(15,0.007540809);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_met582->SetBinError(16,0.008306922);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_met582->SetBinError(17,0.3651159);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_met582->SetBinError(19,0.06737334);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_met582->SetBinError(20,0.1034349);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_met582->SetBinError(21,0.0005605229);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_met582->SetBinError(22,0.12926);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_met582->SetBinError(23,0.1345139);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_met582->SetBinError(25,0.1236689);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_met582->SetBinError(26,0.08835359);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_met582->SetBinError(28,0.006674166);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_met582->SetEntries(33);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_met582->SetFillColor(ci);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_met582->SetFillStyle(3001);

   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_met582->SetLineColor(ci);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_met582->GetXaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_met582->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_met582->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_met582->GetXaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_met582->GetYaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_met582->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_met582->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_met582->GetYaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_met582->GetZaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_met582->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_met582->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_met582->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_met->Add(new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_met,"");
   
   TH1D *new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_met583 = new TH1D("new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_met583","histo_WW",40,0,200);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_met583->SetBinContent(7,0.01039136);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_met583->SetBinContent(9,0.0161241);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_met583->SetBinError(7,0.01039136);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_met583->SetBinError(9,0.0161241);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_met583->SetEntries(2);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_met583->SetFillColor(ci);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_met583->SetFillStyle(3001);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_met583->SetLineColor(ci);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_met583->GetXaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_met583->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_met583->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_met583->GetXaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_met583->GetYaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_met583->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_met583->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_met583->GetYaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_met583->GetZaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_met583->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_met583->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_met583->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_met->Add(new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_met,"");
   
   TH1D *new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_met584 = new TH1D("new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_met584","histo_VVV",40,0,200);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_met584->SetBinContent(7,0.007348784);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_met584->SetBinContent(8,0.00371434);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_met584->SetBinContent(9,0.003050535);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_met584->SetBinContent(10,0.005598023);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_met584->SetBinContent(11,0.00278622);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_met584->SetBinContent(12,0.007681366);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_met584->SetBinContent(13,0.004811652);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_met584->SetBinContent(14,0.007218723);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_met584->SetBinContent(15,0.003213637);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_met584->SetBinContent(16,0.01008085);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_met584->SetBinContent(17,0.01111203);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_met584->SetBinContent(18,0.007316411);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_met584->SetBinContent(19,0.001553701);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_met584->SetBinContent(20,0.001985012);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_met584->SetBinContent(21,0.002546006);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_met584->SetBinContent(23,0.003992955);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_met584->SetBinContent(25,0.004530524);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_met584->SetBinContent(26,4.526381e-05);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_met584->SetBinContent(27,0.002535048);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_met584->SetBinContent(28,0.007616213);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_met584->SetBinContent(29,0.002038841);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_met584->SetBinContent(31,0.002016974);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_met584->SetBinError(7,0.004243285);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_met584->SetBinError(8,0.004461523);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_met584->SetBinError(9,0.004666963);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_met584->SetBinError(10,0.003470652);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_met584->SetBinError(11,0.002085067);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_met584->SetBinError(12,0.004451601);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_met584->SetBinError(13,0.003427874);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_met584->SetBinError(14,0.004194517);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_met584->SetBinError(15,0.004613099);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_met584->SetBinError(16,0.004545603);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_met584->SetBinError(17,0.005120262);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_met584->SetBinError(18,0.004225305);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_met584->SetBinError(19,0.001553701);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_met584->SetBinError(20,0.004026253);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_met584->SetBinError(21,0.002546006);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_met584->SetBinError(23,0.002881353);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_met584->SetBinError(25,0.003224334);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_met584->SetBinError(26,4.526381e-05);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_met584->SetBinError(27,0.001921361);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_met584->SetBinError(28,0.004449204);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_met584->SetBinError(29,0.002038841);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_met584->SetBinError(31,0.002016974);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_met584->SetEntries(62);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_met584->SetFillColor(ci);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_met584->SetFillStyle(3001);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_met584->SetLineColor(ci);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_met584->GetXaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_met584->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_met584->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_met584->GetXaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_met584->GetYaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_met584->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_met584->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_met584->GetYaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_met584->GetZaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_met584->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_met584->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_met584->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_met->Add(new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_met,"");
   
   TH1D *new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_met585 = new TH1D("new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_met585","histo_Vg",40,0,200);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_met585->SetBinContent(7,0.0522728);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_met585->SetBinError(7,0.0522728);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_met585->SetEntries(1);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_met585->SetFillColor(ci);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_met585->SetFillStyle(3001);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_met585->SetLineColor(ci);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_met585->GetXaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_met585->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_met585->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_met585->GetXaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_met585->GetYaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_met585->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_met585->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_met585->GetYaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_met585->GetZaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_met585->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_met585->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_met585->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_met->Add(new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_met,"");
   
   TH1D *new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_met586 = new TH1D("new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_met586","histo_ZZ",40,0,200);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_met586->SetBinContent(12,0.0427135);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_met586->SetBinContent(33,0.03513683);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_met586->SetBinError(12,0.0427135);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_met586->SetBinError(33,0.03513683);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_met586->SetEntries(2);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_met586->SetFillColor(ci);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_met586->SetFillStyle(3001);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_met586->SetLineColor(ci);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_met586->GetXaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_met586->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_met586->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_met586->GetXaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_met586->GetYaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_met586->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_met586->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_met586->GetYaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_met586->GetZaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_met586->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_met586->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_met586->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_met->Add(new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_met,"");
   
   TH1D *new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_met587 = new TH1D("new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_met587","histo_WZ",40,0,200);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_met587->SetBinContent(7,0.07284566);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_met587->SetBinContent(8,0.08097914);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_met587->SetBinContent(9,0.06761621);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_met587->SetBinContent(10,0.08179345);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_met587->SetBinContent(11,0.04503963);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_met587->SetBinContent(12,0.0639946);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_met587->SetBinContent(13,0.02452878);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_met587->SetBinContent(14,0.06200586);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_met587->SetBinContent(15,0.03420971);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_met587->SetBinContent(16,0.03424067);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_met587->SetBinContent(17,0.007426803);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_met587->SetBinContent(19,0.004833103);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_met587->SetBinContent(20,0.02114356);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_met587->SetBinContent(21,0.006664773);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_met587->SetBinContent(29,0.001838737);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_met587->SetBinContent(40,0.002384166);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_met587->SetBinContent(41,0.011118);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_met587->SetBinError(7,0.02018386);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_met587->SetBinError(8,0.02081386);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_met587->SetBinError(9,0.01859924);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_met587->SetBinError(10,0.02052262);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_met587->SetBinError(11,0.01632149);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_met587->SetBinError(12,0.01840657);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_met587->SetBinError(13,0.01174418);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_met587->SetBinError(14,0.01812446);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_met587->SetBinError(15,0.01355086);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_met587->SetBinError(16,0.01407766);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_met587->SetBinError(17,0.004774667);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_met587->SetBinError(19,0.004833103);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_met587->SetBinError(20,0.01062875);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_met587->SetBinError(21,0.006664773);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_met587->SetBinError(29,0.001838737);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_met587->SetBinError(40,0.002384166);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_met587->SetBinError(41,0.00786224);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_met587->SetEntries(128);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_met587->SetFillColor(ci);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_met587->SetFillStyle(3001);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_met587->SetLineColor(ci);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_met587->GetXaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_met587->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_met587->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_met587->GetXaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_met587->GetYaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_met587->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_met587->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_met587->GetYaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_met587->GetZaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_met587->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_met587->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_met587->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_met->Add(new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_met,"");
   
   TH1D *new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_met588 = new TH1D("new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_met588","histo_H_htt",40,0,200);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_met588->SetBinContent(7,0.01956145);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_met588->SetBinContent(8,0.03138857);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_met588->SetBinContent(9,0.02964481);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_met588->SetBinContent(10,0.02853278);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_met588->SetBinContent(11,0.032758);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_met588->SetBinContent(12,0.01281156);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_met588->SetBinContent(13,0.01264401);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_met588->SetBinContent(14,0.01360819);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_met588->SetBinContent(15,0.01854132);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_met588->SetBinContent(16,0.01403862);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_met588->SetBinContent(17,0.011894);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_met588->SetBinContent(18,0.01165339);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_met588->SetBinContent(19,0.008873759);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_met588->SetBinContent(20,0.008309545);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_met588->SetBinContent(21,0.004056639);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_met588->SetBinContent(22,0.007186472);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_met588->SetBinContent(23,0.005757642);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_met588->SetBinContent(24,0.003953004);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_met588->SetBinContent(25,0.0005110262);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_met588->SetBinContent(26,0.0001964025);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_met588->SetBinContent(27,0.002348849);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_met588->SetBinContent(28,0.001481666);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_met588->SetBinContent(31,1.055247e-07);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_met588->SetBinContent(35,0.001083794);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_met588->SetBinContent(36,0.0003885943);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_met588->SetBinContent(37,0.0002200187);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_met588->SetBinContent(41,0.002107488);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_met588->SetBinError(7,0.004251344);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_met588->SetBinError(8,0.005691733);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_met588->SetBinError(9,0.005524285);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_met588->SetBinError(10,0.005357557);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_met588->SetBinError(11,0.00592462);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_met588->SetBinError(12,0.003788148);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_met588->SetBinError(13,0.003800751);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_met588->SetBinError(14,0.004366509);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_met588->SetBinError(15,0.004335827);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_met588->SetBinError(16,0.003590716);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_met588->SetBinError(17,0.004015193);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_met588->SetBinError(18,0.004039716);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_met588->SetBinError(19,0.00332251);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_met588->SetBinError(20,0.003067198);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_met588->SetBinError(21,0.001883477);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_met588->SetBinError(22,0.003135234);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_met588->SetBinError(23,0.002864978);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_met588->SetBinError(24,0.002100841);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_met588->SetBinError(25,0.0003684835);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_met588->SetBinError(26,0.0001964025);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_met588->SetBinError(27,0.001823034);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_met588->SetBinError(28,0.001162599);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_met588->SetBinError(31,1.055247e-07);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_met588->SetBinError(35,0.000591505);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_met588->SetBinError(36,0.0002748678);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_met588->SetBinError(37,0.0002200187);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_met588->SetBinError(41,0.00113601);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_met588->SetEntries(512);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_met588->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_met588->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_met588->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_met588->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_met588->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_met588->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_met588->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_met588->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_met588->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_met588->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_met588->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_met588->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_met588->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_met588->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_met588->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_met->Add(new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_met,"");
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_met->Draw("hist same");
   
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_met = new THStack();
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_met->SetName("thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_met");
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_met->SetTitle("thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_met");
   
   TH1F *thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_met_stack_118 = new TH1F("thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_met_stack_118","thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_met",40,0,200);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_met_stack_118->SetMinimum(0);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_met_stack_118->SetMaximum(0.04061675);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_met_stack_118->SetDirectory(0);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_met_stack_118->SetStats(0);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_met_stack_118->SetLineStyle(0);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_met_stack_118->SetMarkerStyle(20);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_met_stack_118->GetXaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_met_stack_118->GetXaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_met_stack_118->GetXaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_met_stack_118->GetXaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_met_stack_118->GetXaxis()->SetTitleOffset(0.9);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_met_stack_118->GetXaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_met_stack_118->GetYaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_met_stack_118->GetYaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_met_stack_118->GetYaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_met_stack_118->GetYaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_met_stack_118->GetYaxis()->SetTitleOffset(1.25);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_met_stack_118->GetYaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_met_stack_118->GetZaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_met_stack_118->GetZaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_met_stack_118->GetZaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_met_stack_118->GetZaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_met_stack_118->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_met->SetHistogram(thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_met_stack_118);
   
   
   TH1D *new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_met589 = new TH1D("new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_met589","histo_H_htt",40,0,200);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_met589->SetBinContent(7,0.01956145);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_met589->SetBinContent(8,0.03138857);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_met589->SetBinContent(9,0.02964481);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_met589->SetBinContent(10,0.02853278);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_met589->SetBinContent(11,0.032758);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_met589->SetBinContent(12,0.01281156);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_met589->SetBinContent(13,0.01264401);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_met589->SetBinContent(14,0.01360819);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_met589->SetBinContent(15,0.01854132);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_met589->SetBinContent(16,0.01403862);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_met589->SetBinContent(17,0.011894);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_met589->SetBinContent(18,0.01165339);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_met589->SetBinContent(19,0.008873759);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_met589->SetBinContent(20,0.008309545);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_met589->SetBinContent(21,0.004056639);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_met589->SetBinContent(22,0.007186472);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_met589->SetBinContent(23,0.005757642);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_met589->SetBinContent(24,0.003953004);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_met589->SetBinContent(25,0.0005110262);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_met589->SetBinContent(26,0.0001964025);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_met589->SetBinContent(27,0.002348849);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_met589->SetBinContent(28,0.001481666);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_met589->SetBinContent(31,1.055247e-07);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_met589->SetBinContent(35,0.001083794);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_met589->SetBinContent(36,0.0003885943);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_met589->SetBinContent(37,0.0002200187);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_met589->SetBinContent(41,0.002107488);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_met589->SetBinError(7,0.004251344);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_met589->SetBinError(8,0.005691733);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_met589->SetBinError(9,0.005524285);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_met589->SetBinError(10,0.005357557);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_met589->SetBinError(11,0.00592462);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_met589->SetBinError(12,0.003788148);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_met589->SetBinError(13,0.003800751);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_met589->SetBinError(14,0.004366509);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_met589->SetBinError(15,0.004335827);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_met589->SetBinError(16,0.003590716);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_met589->SetBinError(17,0.004015193);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_met589->SetBinError(18,0.004039716);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_met589->SetBinError(19,0.00332251);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_met589->SetBinError(20,0.003067198);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_met589->SetBinError(21,0.001883477);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_met589->SetBinError(22,0.003135234);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_met589->SetBinError(23,0.002864978);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_met589->SetBinError(24,0.002100841);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_met589->SetBinError(25,0.0003684835);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_met589->SetBinError(26,0.0001964025);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_met589->SetBinError(27,0.001823034);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_met589->SetBinError(28,0.001162599);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_met589->SetBinError(31,1.055247e-07);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_met589->SetBinError(35,0.000591505);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_met589->SetBinError(36,0.0002748678);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_met589->SetBinError(37,0.0002200187);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_met589->SetBinError(41,0.00113601);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_met589->SetEntries(512);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_met589->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_met589->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_met589->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_met589->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_met589->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_met589->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_met589->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_met589->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_met589->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_met589->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_met589->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_met589->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_met589->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_met589->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_met589->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_met->Add(new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_met,"");
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_met->Draw("hist same noclear");
   
   Double_t _fx3117[40] = {
   2.5,
   7.5,
   12.5,
   17.5,
   22.5,
   27.5,
   32.5,
   37.5,
   42.5,
   47.5,
   52.5,
   57.5,
   62.5,
   67.5,
   72.5,
   77.5,
   82.5,
   87.5,
   92.5,
   97.5,
   102.5,
   107.5,
   112.5,
   117.5,
   122.5,
   127.5,
   132.5,
   137.5,
   142.5,
   147.5,
   152.5,
   157.5,
   162.5,
   167.5,
   172.5,
   177.5,
   182.5,
   187.5,
   192.5,
   197.5};
   Double_t _fy3117[40] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0.2826591,
   -0.1624605,
   -0.02297457,
   0.08739147,
   0.6914628,
   1.088933,
   0.4126215,
   0.6550631,
   0.02988254,
   0.03271345,
   0.3836547,
   0.007316411,
   0.07376014,
   -0.08030633,
   0.008650255,
   0.1796949,
   0.1385068,
   0,
   -0.1696289,
   0.08977001,
   0.002535048,
   0.0009420467,
   0.003877577,
   0,
   0.002016973,
   0,
   0.03513683,
   0,
   0,
   0,
   0,
   0,
   0,
   0.002384166};
   Double_t _felx3117[40] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5};
   Double_t _fely3117[40] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0.2323008,
   0.2807676,
   0.1250369,
   0.02485928,
   0.6991324,
   0.9709784,
   0.4204585,
   0.5862505,
   0.02468622,
   0.02909547,
   0.3963426,
   0.008451464,
   0.07745339,
   0.1215857,
   0.01010856,
   0.1437488,
   0.1452928,
   0,
   0.1408476,
   0.09381125,
   0.002609521,
   0.0136841,
   0.004382112,
   0,
   0.002858217,
   0,
   0.03516259,
   0,
   0,
   0,
   0,
   0,
   0,
   0.002394048};
   Double_t _fehx3117[40] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5};
   Double_t _fehy3117[40] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0.2405141,
   0.2814788,
   0.1265676,
   0.02485605,
   0.6991321,
   0.9709786,
   0.4211901,
   0.5862513,
   0.02606316,
   0.02908909,
   0.3963425,
   0.008451468,
   0.07745339,
   0.1235338,
   0.01010377,
   0.1437488,
   0.1452928,
   0,
   0.1408476,
   0.09381124,
   0.002611838,
   0.01368412,
   0.004382155,
   0,
   0.002860817,
   0,
   0.03516361,
   0,
   0,
   0,
   0,
   0,
   0,
   0.002396137};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(40,_fx3117,_fy3117,_felx3117,_fehx3117,_fely3117,_fehy3117);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(12);
   grae->SetFillStyle(3004);
   grae->SetLineColor(12);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3117 = new TH1F("Graph_Graph3117","",100,0,220);
   Graph_Graph3117->SetMinimum(-0.6935421);
   Graph_Graph3117->SetMaximum(2.310226);
   Graph_Graph3117->SetDirectory(0);
   Graph_Graph3117->SetStats(0);
   Graph_Graph3117->SetLineStyle(0);
   Graph_Graph3117->SetMarkerStyle(20);
   Graph_Graph3117->GetXaxis()->SetLabelFont(42);
   Graph_Graph3117->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3117->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3117->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3117->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3117->GetXaxis()->SetTitleFont(42);
   Graph_Graph3117->GetYaxis()->SetLabelFont(42);
   Graph_Graph3117->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3117->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3117->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3117->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3117->GetYaxis()->SetTitleFont(42);
   Graph_Graph3117->GetZaxis()->SetLabelFont(42);
   Graph_Graph3117->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3117->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3117->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3117->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3117);
   
   grae->Draw("2");
   
   Double_t _fx3118[40] = {
   2.5,
   7.5,
   12.5,
   17.5,
   22.5,
   27.5,
   32.5,
   37.5,
   42.5,
   47.5,
   52.5,
   57.5,
   62.5,
   67.5,
   72.5,
   77.5,
   82.5,
   87.5,
   92.5,
   97.5,
   102.5,
   107.5,
   112.5,
   117.5,
   122.5,
   127.5,
   132.5,
   137.5,
   142.5,
   147.5,
   152.5,
   157.5,
   162.5,
   167.5,
   172.5,
   177.5,
   182.5,
   187.5,
   192.5,
   197.5};
   Double_t _fy3118[40] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   1,
   1,
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
   0};
   Double_t _felx3118[40] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5};
   Double_t _fely3118[40] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0.8272524,
   0.8272524,
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
   0};
   Double_t _fehx3118[40] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5};
   Double_t _fehy3118[40] = {
   1.147908,
   1.147908,
   1.147908,
   1.147908,
   1.147908,
   1.147908,
   1.147908,
   2.29957,
   2.29957,
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
   1.147908};
   grae = new TGraphAsymmErrors(40,_fx3118,_fy3118,_felx3118,_fehx3118,_fely3118,_fehy3118);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(1);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3118 = new TH1F("Graph_Graph3118","",100,0,220);
   Graph_Graph3118->SetMinimum(0);
   Graph_Graph3118->SetMaximum(3.629527);
   Graph_Graph3118->SetDirectory(0);
   Graph_Graph3118->SetStats(0);
   Graph_Graph3118->SetLineStyle(0);
   Graph_Graph3118->SetMarkerStyle(20);
   Graph_Graph3118->GetXaxis()->SetLabelFont(42);
   Graph_Graph3118->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3118->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3118->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3118->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3118->GetXaxis()->SetTitleFont(42);
   Graph_Graph3118->GetYaxis()->SetLabelFont(42);
   Graph_Graph3118->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3118->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3118->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3118->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3118->GetYaxis()->SetTitleFont(42);
   Graph_Graph3118->GetZaxis()->SetLabelFont(42);
   Graph_Graph3118->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3118->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3118->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3118->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3118);
   
   grae->Draw("p0");
   
   TLegend *leg = new TLegend(0.2,0.7,0.8,0.9,NULL,"brNDC");
   leg->SetTextFont(62);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_met","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_met","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_met","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_met","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_met","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_met","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_met","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_MET_JetV_ZVeto_mll_13TeV_met","Data","EPL");
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
   entry=leg->AddEntry("new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_met","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_met","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_met","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_met","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_met","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_met","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_met","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_MET_JetV_ZVeto_mll_13TeV_met","Data","EPL");
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
   
   TH1F *hframe_copy590 = new TH1F("hframe_copy590","",1000,0,200);
   hframe_copy590->SetMinimum(0);
   hframe_copy590->SetMaximum(5);
   hframe_copy590->SetDirectory(0);
   hframe_copy590->SetStats(0);
   hframe_copy590->SetLineStyle(0);
   hframe_copy590->SetMarkerStyle(20);
   hframe_copy590->GetXaxis()->SetTitle("pfmet [GeV]");
   hframe_copy590->GetXaxis()->SetNdivisions(506);
   hframe_copy590->GetXaxis()->SetLabelFont(42);
   hframe_copy590->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy590->GetXaxis()->SetLabelSize(0.05);
   hframe_copy590->GetXaxis()->SetTitleSize(0.06);
   hframe_copy590->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy590->GetXaxis()->SetTitleFont(42);
   hframe_copy590->GetYaxis()->SetTitle("Events");
   hframe_copy590->GetYaxis()->SetLabelFont(42);
   hframe_copy590->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy590->GetYaxis()->SetLabelSize(0.05);
   hframe_copy590->GetYaxis()->SetTitleSize(0.06);
   hframe_copy590->GetYaxis()->SetTitleOffset(1.25);
   hframe_copy590->GetYaxis()->SetTitleFont(42);
   hframe_copy590->GetZaxis()->SetLabelFont(42);
   hframe_copy590->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy590->GetZaxis()->SetLabelSize(0.05);
   hframe_copy590->GetZaxis()->SetTitleSize(0.06);
   hframe_copy590->GetZaxis()->SetTitleFont(42);
   hframe_copy590->Draw("sameaxis");
   ccwh3l_MET_JetV_ZVeto_mll_13TeV_met->Modified();
   ccwh3l_MET_JetV_ZVeto_mll_13TeV_met->cd();
   ccwh3l_MET_JetV_ZVeto_mll_13TeV_met->SetSelected(ccwh3l_MET_JetV_ZVeto_mll_13TeV_met);
}
