void c_wh3l_MET_JetV_ZVeto_mll_13TeV_met()
{
//=========Macro generated from canvas: ccwh3l_MET_JetV_ZVeto_mll_13TeV_met/cc
//=========  (Sat Jul  2 21:44:06 2016) by ROOT version6.02/13
   TCanvas *ccwh3l_MET_JetV_ZVeto_mll_13TeV_met = new TCanvas("ccwh3l_MET_JetV_ZVeto_mll_13TeV_met", "cc",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   ccwh3l_MET_JetV_ZVeto_mll_13TeV_met->SetHighLightColor(2);
   ccwh3l_MET_JetV_ZVeto_mll_13TeV_met->Range(-40,-1.353194,210,9.055993);
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
   hframe581->SetMaximum(8.535534);
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
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_met_stack_117->SetMinimum(-0.5959392);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_met_stack_117->SetMaximum(2.728628);
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
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_met582->SetBinContent(9,-0.2085932);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_met582->SetBinContent(10,0.7779943);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_met582->SetBinContent(11,1.690266);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_met582->SetBinContent(12,-0.112607);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_met582->SetBinContent(13,0.1334661);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_met582->SetBinContent(14,-0.2177318);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_met582->SetBinContent(15,0.5492142);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_met582->SetBinContent(17,0.2873519);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_met582->SetBinContent(18,-0.05269274);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_met582->SetBinContent(19,-0.08921663);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_met582->SetBinContent(20,0.5148117);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_met582->SetBinError(9,0.2989967);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_met582->SetBinError(10,0.5915626);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_met582->SetBinError(11,0.8115361);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_met582->SetBinError(12,0.07309807);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_met582->SetBinError(13,0.1319687);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_met582->SetBinError(14,0.3782074);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_met582->SetBinError(15,0.5492142);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_met582->SetBinError(17,0.2873519);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_met582->SetBinError(18,0.05210733);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_met582->SetBinError(19,0.2230871);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_met582->SetBinError(20,0.5208186);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_met582->SetEntries(36);

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
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_met583->SetBinContent(10,0.01530373);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_met583->SetBinError(10,0.01530373);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_met583->SetEntries(1);

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
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_met584->SetBinContent(9,0.005434758);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_met584->SetBinContent(10,0.004905083);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_met584->SetBinContent(11,0.002915796);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_met584->SetBinContent(12,0.01030017);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_met584->SetBinContent(13,0.005214921);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_met584->SetBinContent(14,0.006553757);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_met584->SetBinContent(15,0.003392491);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_met584->SetBinContent(16,0.00272322);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_met584->SetBinContent(17,0.006912961);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_met584->SetBinContent(18,0.006922215);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_met584->SetBinContent(19,0.006042707);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_met584->SetBinContent(20,0.004831698);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_met584->SetBinContent(21,0.004761047);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_met584->SetBinContent(23,0.003239751);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_met584->SetBinContent(25,0.002361406);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_met584->SetBinContent(27,0.002256049);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_met584->SetBinContent(29,0.002658856);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_met584->SetBinContent(32,0.001928762);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_met584->SetBinError(9,0.003854292);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_met584->SetBinError(10,0.003099365);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_met584->SetBinError(11,0.002273704);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_met584->SetBinError(12,0.005161803);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_met584->SetBinError(13,0.003695589);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_met584->SetBinError(14,0.003792617);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_met584->SetBinError(15,0.00445964);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_met584->SetBinError(16,0.002333414);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_met584->SetBinError(17,0.004010931);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_met584->SetBinError(18,0.00399658);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_met584->SetBinError(19,0.003555167);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_met584->SetBinError(20,0.003443695);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_met584->SetBinError(21,0.003368997);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_met584->SetBinError(23,0.002669754);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_met584->SetBinError(25,0.002361406);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_met584->SetBinError(27,0.002256049);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_met584->SetBinError(29,0.002658856);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_met584->SetBinError(32,0.001928762);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_met584->SetEntries(41);

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
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_met585->SetBinContent(9,0.3924103);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_met585->SetBinContent(10,0.454497);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_met585->SetBinContent(11,0.2310794);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_met585->SetBinContent(12,0.1624276);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_met585->SetBinError(9,0.240931);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_met585->SetBinError(10,0.2210426);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_met585->SetBinError(11,0.1635616);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_met585->SetBinError(12,0.123361);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_met585->SetEntries(18);

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
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_met586->SetBinContent(9,0.0772395);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_met586->SetBinContent(10,0.0765434);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_met586->SetBinContent(11,0.04193722);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_met586->SetBinContent(13,0.02856185);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_met586->SetBinContent(15,0.02711696);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_met586->SetBinError(9,0.05728374);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_met586->SetBinError(10,0.05426201);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_met586->SetBinError(11,0.04193722);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_met586->SetBinError(13,0.02856185);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_met586->SetBinError(15,0.02711696);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_met586->SetEntries(7);

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
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_met587->SetBinContent(9,0.6915162);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_met587->SetBinContent(10,0.6477394);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_met587->SetBinContent(11,0.6035942);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_met587->SetBinContent(12,0.4776189);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_met587->SetBinContent(13,0.335474);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_met587->SetBinContent(14,0.3304872);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_met587->SetBinContent(15,0.1636084);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_met587->SetBinContent(16,0.1717704);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_met587->SetBinContent(17,0.154656);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_met587->SetBinContent(18,0.108468);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_met587->SetBinContent(19,0.06507355);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_met587->SetBinContent(20,0.05250484);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_met587->SetBinContent(21,0.06082328);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_met587->SetBinContent(22,0.04067327);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_met587->SetBinContent(23,0.02982964);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_met587->SetBinContent(24,0.02275309);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_met587->SetBinContent(25,0.02690731);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_met587->SetBinContent(26,0.01052118);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_met587->SetBinContent(27,0.007998991);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_met587->SetBinContent(28,0.004848103);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_met587->SetBinContent(29,0.01074555);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_met587->SetBinContent(30,0.007670432);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_met587->SetBinContent(32,0.01076883);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_met587->SetBinContent(33,0.006042571);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_met587->SetBinContent(34,0.004672221);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_met587->SetBinContent(35,0.005406693);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_met587->SetBinContent(36,0.005420071);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_met587->SetBinContent(38,2.702264e-05);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_met587->SetBinContent(39,0.005046992);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_met587->SetBinContent(40,0.00634668);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_met587->SetBinContent(41,0.01856307);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_met587->SetBinError(9,0.06107221);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_met587->SetBinError(10,0.05976678);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_met587->SetBinError(11,0.05800374);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_met587->SetBinError(12,0.05151414);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_met587->SetBinError(13,0.04221752);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_met587->SetBinError(14,0.04301258);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_met587->SetBinError(15,0.02896207);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_met587->SetBinError(16,0.03033083);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_met587->SetBinError(17,0.02878302);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_met587->SetBinError(18,0.0245346);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_met587->SetBinError(19,0.01720332);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_met587->SetBinError(20,0.01658887);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_met587->SetBinError(21,0.01820594);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_met587->SetBinError(22,0.01469287);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_met587->SetBinError(23,0.01246571);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_met587->SetBinError(24,0.01042982);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_met587->SetBinError(25,0.01270073);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_met587->SetBinError(26,0.006825106);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_met587->SetBinError(27,0.005954993);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_met587->SetBinError(28,0.004848103);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_met587->SetBinError(29,0.007600226);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_met587->SetBinError(30,0.006479126);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_met587->SetBinError(32,0.007644946);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_met587->SetBinError(33,0.006042571);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_met587->SetBinError(34,0.004672221);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_met587->SetBinError(35,0.005406693);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_met587->SetBinError(36,0.005420071);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_met587->SetBinError(38,2.702264e-05);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_met587->SetBinError(39,0.005046992);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_met587->SetBinError(40,0.00634668);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_met587->SetBinError(41,0.008874338);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_met587->SetEntries(837);

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
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_met588->SetBinContent(9,0.04257097);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_met588->SetBinContent(10,0.02635267);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_met588->SetBinContent(11,0.02890034);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_met588->SetBinContent(12,0.02092332);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_met588->SetBinContent(13,0.02927215);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_met588->SetBinContent(14,0.03709481);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_met588->SetBinContent(15,0.02093597);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_met588->SetBinContent(16,0.0232625);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_met588->SetBinContent(17,0.01685681);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_met588->SetBinContent(18,0.01778817);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_met588->SetBinContent(19,0.02241855);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_met588->SetBinContent(20,0.01263144);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_met588->SetBinContent(21,0.0145703);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_met588->SetBinContent(22,0.009553627);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_met588->SetBinContent(23,0.003313582);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_met588->SetBinContent(24,0.005401843);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_met588->SetBinContent(25,0.003250537);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_met588->SetBinContent(26,0.00222219);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_met588->SetBinContent(27,0.001703952);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_met588->SetBinContent(28,0.003998793);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_met588->SetBinContent(30,0.001308845);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_met588->SetBinContent(31,0.002037452);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_met588->SetBinContent(32,0.0024166);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_met588->SetBinContent(33,0.0002870945);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_met588->SetBinContent(34,0.001333933);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_met588->SetBinContent(35,0.001133816);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_met588->SetBinContent(36,0.001936098);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_met588->SetBinContent(38,0.0001986669);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_met588->SetBinContent(41,0.003357599);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_met588->SetBinError(9,0.006899133);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_met588->SetBinError(10,0.005465968);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_met588->SetBinError(11,0.005749204);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_met588->SetBinError(12,0.005021859);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_met588->SetBinError(13,0.006794193);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_met588->SetBinError(14,0.006743801);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_met588->SetBinError(15,0.00555118);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_met588->SetBinError(16,0.005692478);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_met588->SetBinError(17,0.004904931);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_met588->SetBinError(18,0.004719013);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_met588->SetBinError(19,0.005768025);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_met588->SetBinError(20,0.003601475);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_met588->SetBinError(21,0.004520432);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_met588->SetBinError(22,0.003579967);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_met588->SetBinError(23,0.002165354);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_met588->SetBinError(24,0.00257427);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_met588->SetBinError(25,0.002035962);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_met588->SetBinError(26,0.002588403);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_met588->SetBinError(27,0.001703952);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_met588->SetBinError(28,0.002480504);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_met588->SetBinError(30,0.00117456);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_met588->SetBinError(31,0.001617563);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_met588->SetBinError(32,0.001780469);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_met588->SetBinError(33,0.0002870945);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_met588->SetBinError(34,0.001136614);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_met588->SetBinError(35,0.0007658713);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_met588->SetBinError(36,0.00161891);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_met588->SetBinError(38,0.0001986669);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_met588->SetBinError(41,0.002377921);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_met588->SetEntries(471);
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
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_met_stack_118->SetMinimum(-0.0003662131);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_met_stack_118->SetMaximum(0.05194361);
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
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_met589->SetBinContent(9,0.04257097);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_met589->SetBinContent(10,0.02635267);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_met589->SetBinContent(11,0.02890034);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_met589->SetBinContent(12,0.02092332);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_met589->SetBinContent(13,0.02927215);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_met589->SetBinContent(14,0.03709481);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_met589->SetBinContent(15,0.02093597);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_met589->SetBinContent(16,0.0232625);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_met589->SetBinContent(17,0.01685681);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_met589->SetBinContent(18,0.01778817);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_met589->SetBinContent(19,0.02241855);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_met589->SetBinContent(20,0.01263144);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_met589->SetBinContent(21,0.0145703);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_met589->SetBinContent(22,0.009553627);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_met589->SetBinContent(23,0.003313582);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_met589->SetBinContent(24,0.005401843);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_met589->SetBinContent(25,0.003250537);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_met589->SetBinContent(26,0.00222219);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_met589->SetBinContent(27,0.001703952);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_met589->SetBinContent(28,0.003998793);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_met589->SetBinContent(30,0.001308845);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_met589->SetBinContent(31,0.002037452);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_met589->SetBinContent(32,0.0024166);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_met589->SetBinContent(33,0.0002870945);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_met589->SetBinContent(34,0.001333933);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_met589->SetBinContent(35,0.001133816);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_met589->SetBinContent(36,0.001936098);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_met589->SetBinContent(38,0.0001986669);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_met589->SetBinContent(41,0.003357599);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_met589->SetBinError(9,0.006899133);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_met589->SetBinError(10,0.005465968);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_met589->SetBinError(11,0.005749204);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_met589->SetBinError(12,0.005021859);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_met589->SetBinError(13,0.006794193);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_met589->SetBinError(14,0.006743801);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_met589->SetBinError(15,0.00555118);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_met589->SetBinError(16,0.005692478);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_met589->SetBinError(17,0.004904931);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_met589->SetBinError(18,0.004719013);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_met589->SetBinError(19,0.005768025);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_met589->SetBinError(20,0.003601475);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_met589->SetBinError(21,0.004520432);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_met589->SetBinError(22,0.003579967);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_met589->SetBinError(23,0.002165354);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_met589->SetBinError(24,0.00257427);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_met589->SetBinError(25,0.002035962);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_met589->SetBinError(26,0.002588403);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_met589->SetBinError(27,0.001703952);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_met589->SetBinError(28,0.002480504);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_met589->SetBinError(30,0.00117456);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_met589->SetBinError(31,0.001617563);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_met589->SetBinError(32,0.001780469);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_met589->SetBinError(33,0.0002870945);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_met589->SetBinError(34,0.001136614);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_met589->SetBinError(35,0.0007658713);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_met589->SetBinError(36,0.00161891);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_met589->SetBinError(38,0.0001986669);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_met589->SetBinError(41,0.002377921);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_met589->SetEntries(471);
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
   0,
   0,
   0.9580075,
   1.976983,
   2.569793,
   0.5377396,
   0.5027168,
   0.1193091,
   0.7433321,
   0.1744936,
   0.4489209,
   0.06269744,
   -0.01810037,
   0.5721483,
   0.06558433,
   0.04067327,
   0.03306939,
   0.02275309,
   0.02926871,
   0.01052118,
   0.01025504,
   0.004848103,
   0.01340441,
   0.007670432,
   0,
   0.01269759,
   0.006042571,
   0.00467222,
   0.005406693,
   0.005420071,
   0,
   2.702264e-05,
   0.005046993,
   0.00634668};
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
   0,
   0,
   0.66991,
   0.9852907,
   1.230044,
   0.2596506,
   0.2125374,
   0.4321288,
   0.6384153,
   0.0335953,
   0.3356897,
   0.08315413,
   0.2459365,
   0.5644127,
   0.02233369,
   0.01483423,
   0.01540938,
   0.01052212,
   0.01528688,
   0.006844502,
   0.008549458,
   0.004848973,
   0.01061242,
   0.006482212,
   0,
   0.009830828,
   0.006045041,
   0.004720839,
   0.005409731,
   0.005423565,
   0,
   2.704127e-05,
   0.005057662,
   0.006367292};
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
   0,
   0,
   0.5803974,
   0.9852504,
   1.229988,
   0.2590027,
   0.2125118,
   0.2758158,
   0.6394295,
   0.03363018,
   0.3356897,
   0.08315539,
   0.1145394,
   0.5701063,
   0.02231165,
   0.01481604,
   0.01539891,
   0.0105009,
   0.01528843,
   0.006845516,
   0.008555175,
   0.00484899,
   0.01061691,
   0.006482592,
   0,
   0.0098311,
   0.006043363,
   0.004712348,
   0.005409932,
   0.00542383,
   0,
   2.704257e-05,
   0.005060686,
   0.006362736};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(40,_fx3117,_fy3117,_felx3117,_fehx3117,_fely3117,_fehy3117);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(12);
   grae->SetFillStyle(3004);
   grae->SetLineColor(12);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3117 = new TH1F("Graph_Graph3117","",100,0,220);
   Graph_Graph3117->SetMinimum(-0.7240797);
   Graph_Graph3117->SetMaximum(4.211041);
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
   0,
   2,
   1,
   1,
   0,
   0,
   1,
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
   0,
   1.29183,
   0.8272524,
   0.8272524,
   0,
   0,
   0.8272524,
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
   1.147908,
   2.63791,
   2.29957,
   2.29957,
   1.147908,
   1.147908,
   2.29957,
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
   Graph_Graph3118->SetMaximum(5.101701);
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
   hframe_copy590->SetMaximum(8.535534);
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
