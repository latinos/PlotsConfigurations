void c_wh3l_MET_13TeV_met()
{
//=========Macro generated from canvas: ccwh3l_MET_13TeV_met/cc
//=========  (Sun Jul  3 01:21:56 2016) by ROOT version6.02/13
   TCanvas *ccwh3l_MET_13TeV_met = new TCanvas("ccwh3l_MET_13TeV_met", "cc",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   ccwh3l_MET_13TeV_met->SetHighLightColor(2);
   ccwh3l_MET_13TeV_met->Range(-40,-1.353194,210,9.055993);
   ccwh3l_MET_13TeV_met->SetFillColor(0);
   ccwh3l_MET_13TeV_met->SetBorderMode(0);
   ccwh3l_MET_13TeV_met->SetBorderSize(2);
   ccwh3l_MET_13TeV_met->SetTickx(1);
   ccwh3l_MET_13TeV_met->SetTicky(1);
   ccwh3l_MET_13TeV_met->SetLeftMargin(0.16);
   ccwh3l_MET_13TeV_met->SetRightMargin(0.04);
   ccwh3l_MET_13TeV_met->SetTopMargin(0.05);
   ccwh3l_MET_13TeV_met->SetBottomMargin(0.13);
   ccwh3l_MET_13TeV_met->SetFrameFillStyle(0);
   ccwh3l_MET_13TeV_met->SetFrameBorderMode(0);
   ccwh3l_MET_13TeV_met->SetFrameFillStyle(0);
   ccwh3l_MET_13TeV_met->SetFrameBorderMode(0);
   
   TH1F *hframe191 = new TH1F("hframe191","",1000,0,200);
   hframe191->SetMinimum(0);
   hframe191->SetMaximum(8.535534);
   hframe191->SetDirectory(0);
   hframe191->SetStats(0);
   hframe191->SetLineStyle(0);
   hframe191->SetMarkerStyle(20);
   hframe191->GetXaxis()->SetTitle("pfmet [GeV]");
   hframe191->GetXaxis()->SetNdivisions(506);
   hframe191->GetXaxis()->SetLabelFont(42);
   hframe191->GetXaxis()->SetLabelOffset(0.007);
   hframe191->GetXaxis()->SetLabelSize(0.05);
   hframe191->GetXaxis()->SetTitleSize(0.06);
   hframe191->GetXaxis()->SetTitleOffset(0.9);
   hframe191->GetXaxis()->SetTitleFont(42);
   hframe191->GetYaxis()->SetTitle("Events");
   hframe191->GetYaxis()->SetLabelFont(42);
   hframe191->GetYaxis()->SetLabelOffset(0.007);
   hframe191->GetYaxis()->SetLabelSize(0.05);
   hframe191->GetYaxis()->SetTitleSize(0.06);
   hframe191->GetYaxis()->SetTitleOffset(1.25);
   hframe191->GetYaxis()->SetTitleFont(42);
   hframe191->GetZaxis()->SetLabelFont(42);
   hframe191->GetZaxis()->SetLabelOffset(0.007);
   hframe191->GetZaxis()->SetLabelSize(0.05);
   hframe191->GetZaxis()->SetTitleSize(0.06);
   hframe191->GetZaxis()->SetTitleFont(42);
   hframe191->Draw(" ");
   
   THStack *thsBackground_grouped_wh3l_MET_13TeV_met = new THStack();
   thsBackground_grouped_wh3l_MET_13TeV_met->SetName("thsBackground_grouped_wh3l_MET_13TeV_met");
   thsBackground_grouped_wh3l_MET_13TeV_met->SetTitle("thsBackground_grouped_wh3l_MET_13TeV_met");
   
   TH1F *thsBackground_grouped_wh3l_MET_13TeV_met_stack_39 = new TH1F("thsBackground_grouped_wh3l_MET_13TeV_met_stack_39","thsBackground_grouped_wh3l_MET_13TeV_met",40,0,200);
   thsBackground_grouped_wh3l_MET_13TeV_met_stack_39->SetMinimum(-0.4155597);
   thsBackground_grouped_wh3l_MET_13TeV_met_stack_39->SetMaximum(3.4837);
   thsBackground_grouped_wh3l_MET_13TeV_met_stack_39->SetDirectory(0);
   thsBackground_grouped_wh3l_MET_13TeV_met_stack_39->SetStats(0);
   thsBackground_grouped_wh3l_MET_13TeV_met_stack_39->SetLineStyle(0);
   thsBackground_grouped_wh3l_MET_13TeV_met_stack_39->SetMarkerStyle(20);
   thsBackground_grouped_wh3l_MET_13TeV_met_stack_39->GetXaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_MET_13TeV_met_stack_39->GetXaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_MET_13TeV_met_stack_39->GetXaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_MET_13TeV_met_stack_39->GetXaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_MET_13TeV_met_stack_39->GetXaxis()->SetTitleOffset(0.9);
   thsBackground_grouped_wh3l_MET_13TeV_met_stack_39->GetXaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_13TeV_met_stack_39->GetYaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_MET_13TeV_met_stack_39->GetYaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_MET_13TeV_met_stack_39->GetYaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_MET_13TeV_met_stack_39->GetYaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_MET_13TeV_met_stack_39->GetYaxis()->SetTitleOffset(1.25);
   thsBackground_grouped_wh3l_MET_13TeV_met_stack_39->GetYaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_13TeV_met_stack_39->GetZaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_MET_13TeV_met_stack_39->GetZaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_MET_13TeV_met_stack_39->GetZaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_MET_13TeV_met_stack_39->GetZaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_MET_13TeV_met_stack_39->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_13TeV_met->SetHistogram(thsBackground_grouped_wh3l_MET_13TeV_met_stack_39);
   
   
   TH1D *new_histo_group_Fake_wh3l_MET_13TeV_met192 = new TH1D("new_histo_group_Fake_wh3l_MET_13TeV_met192","histo_Fake",40,0,200);
   new_histo_group_Fake_wh3l_MET_13TeV_met192->SetBinContent(7,0.4194827);
   new_histo_group_Fake_wh3l_MET_13TeV_met192->SetBinContent(8,0.6128543);
   new_histo_group_Fake_wh3l_MET_13TeV_met192->SetBinContent(9,0.1688519);
   new_histo_group_Fake_wh3l_MET_13TeV_met192->SetBinContent(10,1.334196);
   new_histo_group_Fake_wh3l_MET_13TeV_met192->SetBinContent(11,1.553357);
   new_histo_group_Fake_wh3l_MET_13TeV_met192->SetBinContent(12,2.156364);
   new_histo_group_Fake_wh3l_MET_13TeV_met192->SetBinContent(13,1.329152);
   new_histo_group_Fake_wh3l_MET_13TeV_met192->SetBinContent(14,2.295105);
   new_histo_group_Fake_wh3l_MET_13TeV_met192->SetBinContent(15,1.315794);
   new_histo_group_Fake_wh3l_MET_13TeV_met192->SetBinContent(16,0.92561);
   new_histo_group_Fake_wh3l_MET_13TeV_met192->SetBinContent(17,1.057015);
   new_histo_group_Fake_wh3l_MET_13TeV_met192->SetBinContent(18,0.5511687);
   new_histo_group_Fake_wh3l_MET_13TeV_met192->SetBinContent(19,0.8089011);
   new_histo_group_Fake_wh3l_MET_13TeV_met192->SetBinContent(20,0.5371904);
   new_histo_group_Fake_wh3l_MET_13TeV_met192->SetBinContent(21,0.432576);
   new_histo_group_Fake_wh3l_MET_13TeV_met192->SetBinContent(22,0.1778978);
   new_histo_group_Fake_wh3l_MET_13TeV_met192->SetBinContent(23,0.1138944);
   new_histo_group_Fake_wh3l_MET_13TeV_met192->SetBinContent(24,0.1460879);
   new_histo_group_Fake_wh3l_MET_13TeV_met192->SetBinContent(25,0.1000487);
   new_histo_group_Fake_wh3l_MET_13TeV_met192->SetBinContent(26,1.275571);
   new_histo_group_Fake_wh3l_MET_13TeV_met192->SetBinContent(27,1.133682);
   new_histo_group_Fake_wh3l_MET_13TeV_met192->SetBinContent(28,-0.006674166);
   new_histo_group_Fake_wh3l_MET_13TeV_met192->SetBinContent(29,-0.009107064);
   new_histo_group_Fake_wh3l_MET_13TeV_met192->SetBinContent(31,0.1013291);
   new_histo_group_Fake_wh3l_MET_13TeV_met192->SetBinContent(32,0.4062305);
   new_histo_group_Fake_wh3l_MET_13TeV_met192->SetBinContent(33,-0.006812496);
   new_histo_group_Fake_wh3l_MET_13TeV_met192->SetBinContent(34,-0.03412842);
   new_histo_group_Fake_wh3l_MET_13TeV_met192->SetBinContent(35,0.1700996);
   new_histo_group_Fake_wh3l_MET_13TeV_met192->SetBinContent(39,-0.005115197);
   new_histo_group_Fake_wh3l_MET_13TeV_met192->SetBinContent(41,0.1119663);
   new_histo_group_Fake_wh3l_MET_13TeV_met192->SetBinError(7,0.384931);
   new_histo_group_Fake_wh3l_MET_13TeV_met192->SetBinError(8,0.584957);
   new_histo_group_Fake_wh3l_MET_13TeV_met192->SetBinError(9,0.1785333);
   new_histo_group_Fake_wh3l_MET_13TeV_met192->SetBinError(10,0.7224124);
   new_histo_group_Fake_wh3l_MET_13TeV_met192->SetBinError(11,0.8142505);
   new_histo_group_Fake_wh3l_MET_13TeV_met192->SetBinError(12,1.102258);
   new_histo_group_Fake_wh3l_MET_13TeV_met192->SetBinError(13,0.6851717);
   new_histo_group_Fake_wh3l_MET_13TeV_met192->SetBinError(14,1.022704);
   new_histo_group_Fake_wh3l_MET_13TeV_met192->SetBinError(15,0.9348943);
   new_histo_group_Fake_wh3l_MET_13TeV_met192->SetBinError(16,0.627459);
   new_histo_group_Fake_wh3l_MET_13TeV_met192->SetBinError(17,0.5844733);
   new_histo_group_Fake_wh3l_MET_13TeV_met192->SetBinError(18,0.5402076);
   new_histo_group_Fake_wh3l_MET_13TeV_met192->SetBinError(19,0.4884249);
   new_histo_group_Fake_wh3l_MET_13TeV_met192->SetBinError(20,0.6073777);
   new_histo_group_Fake_wh3l_MET_13TeV_met192->SetBinError(21,0.3385047);
   new_histo_group_Fake_wh3l_MET_13TeV_met192->SetBinError(22,0.1547534);
   new_histo_group_Fake_wh3l_MET_13TeV_met192->SetBinError(23,0.1354221);
   new_histo_group_Fake_wh3l_MET_13TeV_met192->SetBinError(24,0.1750095);
   new_histo_group_Fake_wh3l_MET_13TeV_met192->SetBinError(25,0.5156084);
   new_histo_group_Fake_wh3l_MET_13TeV_met192->SetBinError(26,0.8459246);
   new_histo_group_Fake_wh3l_MET_13TeV_met192->SetBinError(27,0.7589486);
   new_histo_group_Fake_wh3l_MET_13TeV_met192->SetBinError(28,0.006674166);
   new_histo_group_Fake_wh3l_MET_13TeV_met192->SetBinError(29,0.009107064);
   new_histo_group_Fake_wh3l_MET_13TeV_met192->SetBinError(31,0.1013291);
   new_histo_group_Fake_wh3l_MET_13TeV_met192->SetBinError(32,0.4062305);
   new_histo_group_Fake_wh3l_MET_13TeV_met192->SetBinError(33,0.006812496);
   new_histo_group_Fake_wh3l_MET_13TeV_met192->SetBinError(34,0.03412842);
   new_histo_group_Fake_wh3l_MET_13TeV_met192->SetBinError(35,0.1229892);
   new_histo_group_Fake_wh3l_MET_13TeV_met192->SetBinError(39,0.005115197);
   new_histo_group_Fake_wh3l_MET_13TeV_met192->SetBinError(41,0.1035556);
   new_histo_group_Fake_wh3l_MET_13TeV_met192->SetEntries(161);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_MET_13TeV_met192->SetFillColor(ci);
   new_histo_group_Fake_wh3l_MET_13TeV_met192->SetFillStyle(3001);

   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_MET_13TeV_met192->SetLineColor(ci);
   new_histo_group_Fake_wh3l_MET_13TeV_met192->GetXaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_MET_13TeV_met192->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_MET_13TeV_met192->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_MET_13TeV_met192->GetXaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_MET_13TeV_met192->GetYaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_MET_13TeV_met192->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_MET_13TeV_met192->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_MET_13TeV_met192->GetYaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_MET_13TeV_met192->GetZaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_MET_13TeV_met192->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_MET_13TeV_met192->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_MET_13TeV_met192->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_13TeV_met->Add(new_histo_group_Fake_wh3l_MET_13TeV_met,"");
   
   TH1D *new_histo_group_WW_wh3l_MET_13TeV_met193 = new TH1D("new_histo_group_WW_wh3l_MET_13TeV_met193","histo_WW",40,0,200);
   new_histo_group_WW_wh3l_MET_13TeV_met193->SetBinContent(7,0.01039136);
   new_histo_group_WW_wh3l_MET_13TeV_met193->SetBinContent(8,0.01708511);
   new_histo_group_WW_wh3l_MET_13TeV_met193->SetBinContent(9,0.0161241);
   new_histo_group_WW_wh3l_MET_13TeV_met193->SetBinContent(10,0.004448378);
   new_histo_group_WW_wh3l_MET_13TeV_met193->SetBinContent(15,0.01595104);
   new_histo_group_WW_wh3l_MET_13TeV_met193->SetBinContent(21,0.01632439);
   new_histo_group_WW_wh3l_MET_13TeV_met193->SetBinContent(25,0.01528641);
   new_histo_group_WW_wh3l_MET_13TeV_met193->SetBinContent(41,0.01546857);
   new_histo_group_WW_wh3l_MET_13TeV_met193->SetBinError(7,0.01039136);
   new_histo_group_WW_wh3l_MET_13TeV_met193->SetBinError(8,0.01708511);
   new_histo_group_WW_wh3l_MET_13TeV_met193->SetBinError(9,0.0161241);
   new_histo_group_WW_wh3l_MET_13TeV_met193->SetBinError(10,0.004448378);
   new_histo_group_WW_wh3l_MET_13TeV_met193->SetBinError(15,0.01595104);
   new_histo_group_WW_wh3l_MET_13TeV_met193->SetBinError(21,0.01632439);
   new_histo_group_WW_wh3l_MET_13TeV_met193->SetBinError(25,0.01528641);
   new_histo_group_WW_wh3l_MET_13TeV_met193->SetBinError(41,0.01546857);
   new_histo_group_WW_wh3l_MET_13TeV_met193->SetEntries(8);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_MET_13TeV_met193->SetFillColor(ci);
   new_histo_group_WW_wh3l_MET_13TeV_met193->SetFillStyle(3001);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_MET_13TeV_met193->SetLineColor(ci);
   new_histo_group_WW_wh3l_MET_13TeV_met193->GetXaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_MET_13TeV_met193->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_MET_13TeV_met193->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_MET_13TeV_met193->GetXaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_MET_13TeV_met193->GetYaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_MET_13TeV_met193->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_MET_13TeV_met193->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_MET_13TeV_met193->GetYaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_MET_13TeV_met193->GetZaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_MET_13TeV_met193->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_MET_13TeV_met193->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_MET_13TeV_met193->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_13TeV_met->Add(new_histo_group_WW_wh3l_MET_13TeV_met,"");
   
   TH1D *new_histo_group_VVV_wh3l_MET_13TeV_met194 = new TH1D("new_histo_group_VVV_wh3l_MET_13TeV_met194","histo_VVV",40,0,200);
   new_histo_group_VVV_wh3l_MET_13TeV_met194->SetBinContent(7,0.01819779);
   new_histo_group_VVV_wh3l_MET_13TeV_met194->SetBinContent(8,0.008997678);
   new_histo_group_VVV_wh3l_MET_13TeV_met194->SetBinContent(9,0.009040988);
   new_histo_group_VVV_wh3l_MET_13TeV_met194->SetBinContent(10,0.007983696);
   new_histo_group_VVV_wh3l_MET_13TeV_met194->SetBinContent(11,0.005534282);
   new_histo_group_VVV_wh3l_MET_13TeV_met194->SetBinContent(12,0.01166394);
   new_histo_group_VVV_wh3l_MET_13TeV_met194->SetBinContent(13,0.01314604);
   new_histo_group_VVV_wh3l_MET_13TeV_met194->SetBinContent(14,0.02049703);
   new_histo_group_VVV_wh3l_MET_13TeV_met194->SetBinContent(15,0.01823194);
   new_histo_group_VVV_wh3l_MET_13TeV_met194->SetBinContent(16,0.02224812);
   new_histo_group_VVV_wh3l_MET_13TeV_met194->SetBinContent(17,0.02268987);
   new_histo_group_VVV_wh3l_MET_13TeV_met194->SetBinContent(18,0.009223872);
   new_histo_group_VVV_wh3l_MET_13TeV_met194->SetBinContent(19,0.01020083);
   new_histo_group_VVV_wh3l_MET_13TeV_met194->SetBinContent(20,0.001990804);
   new_histo_group_VVV_wh3l_MET_13TeV_met194->SetBinContent(21,0.007810704);
   new_histo_group_VVV_wh3l_MET_13TeV_met194->SetBinContent(22,0.007825959);
   new_histo_group_VVV_wh3l_MET_13TeV_met194->SetBinContent(23,0.008535246);
   new_histo_group_VVV_wh3l_MET_13TeV_met194->SetBinContent(24,0.005179204);
   new_histo_group_VVV_wh3l_MET_13TeV_met194->SetBinContent(25,0.006649167);
   new_histo_group_VVV_wh3l_MET_13TeV_met194->SetBinContent(26,0.001141962);
   new_histo_group_VVV_wh3l_MET_13TeV_met194->SetBinContent(27,0.005196257);
   new_histo_group_VVV_wh3l_MET_13TeV_met194->SetBinContent(28,0.02045101);
   new_histo_group_VVV_wh3l_MET_13TeV_met194->SetBinContent(29,0.0087831);
   new_histo_group_VVV_wh3l_MET_13TeV_met194->SetBinContent(30,0.00625403);
   new_histo_group_VVV_wh3l_MET_13TeV_met194->SetBinContent(31,0.006646217);
   new_histo_group_VVV_wh3l_MET_13TeV_met194->SetBinContent(32,0.005010055);
   new_histo_group_VVV_wh3l_MET_13TeV_met194->SetBinContent(33,0.004882412);
   new_histo_group_VVV_wh3l_MET_13TeV_met194->SetBinContent(34,0.002198539);
   new_histo_group_VVV_wh3l_MET_13TeV_met194->SetBinContent(36,0.004287872);
   new_histo_group_VVV_wh3l_MET_13TeV_met194->SetBinContent(37,0.0005087377);
   new_histo_group_VVV_wh3l_MET_13TeV_met194->SetBinContent(38,0.0004347801);
   new_histo_group_VVV_wh3l_MET_13TeV_met194->SetBinContent(41,0.03212089);
   new_histo_group_VVV_wh3l_MET_13TeV_met194->SetBinError(7,0.006956379);
   new_histo_group_VVV_wh3l_MET_13TeV_met194->SetBinError(8,0.00644878);
   new_histo_group_VVV_wh3l_MET_13TeV_met194->SetBinError(9,0.005721628);
   new_histo_group_VVV_wh3l_MET_13TeV_met194->SetBinError(10,0.004211388);
   new_histo_group_VVV_wh3l_MET_13TeV_met194->SetBinError(11,0.004742316);
   new_histo_group_VVV_wh3l_MET_13TeV_met194->SetBinError(12,0.006598547);
   new_histo_group_VVV_wh3l_MET_13TeV_met194->SetBinError(13,0.005782387);
   new_histo_group_VVV_wh3l_MET_13TeV_met194->SetBinError(14,0.006762043);
   new_histo_group_VVV_wh3l_MET_13TeV_met194->SetBinError(15,0.007249905);
   new_histo_group_VVV_wh3l_MET_13TeV_met194->SetBinError(16,0.007160925);
   new_histo_group_VVV_wh3l_MET_13TeV_met194->SetBinError(17,0.007965592);
   new_histo_group_VVV_wh3l_MET_13TeV_met194->SetBinError(18,0.006006778);
   new_histo_group_VVV_wh3l_MET_13TeV_met194->SetBinError(19,0.004660264);
   new_histo_group_VVV_wh3l_MET_13TeV_met194->SetBinError(20,0.005413324);
   new_histo_group_VVV_wh3l_MET_13TeV_met194->SetBinError(21,0.004513021);
   new_histo_group_VVV_wh3l_MET_13TeV_met194->SetBinError(22,0.004172525);
   new_histo_group_VVV_wh3l_MET_13TeV_met194->SetBinError(23,0.004360976);
   new_histo_group_VVV_wh3l_MET_13TeV_met194->SetBinError(24,0.003229889);
   new_histo_group_VVV_wh3l_MET_13TeV_met194->SetBinError(25,0.003858106);
   new_histo_group_VVV_wh3l_MET_13TeV_met194->SetBinError(26,0.001097631);
   new_histo_group_VVV_wh3l_MET_13TeV_met194->SetBinError(27,0.004435562);
   new_histo_group_VVV_wh3l_MET_13TeV_met194->SetBinError(28,0.007250888);
   new_histo_group_VVV_wh3l_MET_13TeV_met194->SetBinError(29,0.005494271);
   new_histo_group_VVV_wh3l_MET_13TeV_met194->SetBinError(30,0.003432407);
   new_histo_group_VVV_wh3l_MET_13TeV_met194->SetBinError(31,0.003850403);
   new_histo_group_VVV_wh3l_MET_13TeV_met194->SetBinError(32,0.003288508);
   new_histo_group_VVV_wh3l_MET_13TeV_met194->SetBinError(33,0.003497569);
   new_histo_group_VVV_wh3l_MET_13TeV_met194->SetBinError(34,0.002198539);
   new_histo_group_VVV_wh3l_MET_13TeV_met194->SetBinError(36,0.003189159);
   new_histo_group_VVV_wh3l_MET_13TeV_met194->SetBinError(37,0.0005087377);
   new_histo_group_VVV_wh3l_MET_13TeV_met194->SetBinError(38,0.0004347801);
   new_histo_group_VVV_wh3l_MET_13TeV_met194->SetBinError(41,0.008597723);
   new_histo_group_VVV_wh3l_MET_13TeV_met194->SetEntries(198);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_MET_13TeV_met194->SetFillColor(ci);
   new_histo_group_VVV_wh3l_MET_13TeV_met194->SetFillStyle(3001);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_MET_13TeV_met194->SetLineColor(ci);
   new_histo_group_VVV_wh3l_MET_13TeV_met194->GetXaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_MET_13TeV_met194->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_MET_13TeV_met194->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_MET_13TeV_met194->GetXaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_MET_13TeV_met194->GetYaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_MET_13TeV_met194->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_MET_13TeV_met194->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_MET_13TeV_met194->GetYaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_MET_13TeV_met194->GetZaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_MET_13TeV_met194->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_MET_13TeV_met194->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_MET_13TeV_met194->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_13TeV_met->Add(new_histo_group_VVV_wh3l_MET_13TeV_met,"");
   
   TH1D *new_histo_group_Vg_wh3l_MET_13TeV_met195 = new TH1D("new_histo_group_Vg_wh3l_MET_13TeV_met195","histo_Vg",40,0,200);
   new_histo_group_Vg_wh3l_MET_13TeV_met195->SetBinContent(7,0.1634807);
   new_histo_group_Vg_wh3l_MET_13TeV_met195->SetBinContent(13,-0.1061193);
   new_histo_group_Vg_wh3l_MET_13TeV_met195->SetBinContent(15,0.122739);
   new_histo_group_Vg_wh3l_MET_13TeV_met195->SetBinError(7,0.1228806);
   new_histo_group_Vg_wh3l_MET_13TeV_met195->SetBinError(13,0.1061193);
   new_histo_group_Vg_wh3l_MET_13TeV_met195->SetBinError(15,0.122739);
   new_histo_group_Vg_wh3l_MET_13TeV_met195->SetEntries(4);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_MET_13TeV_met195->SetFillColor(ci);
   new_histo_group_Vg_wh3l_MET_13TeV_met195->SetFillStyle(3001);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_MET_13TeV_met195->SetLineColor(ci);
   new_histo_group_Vg_wh3l_MET_13TeV_met195->GetXaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_MET_13TeV_met195->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_MET_13TeV_met195->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_MET_13TeV_met195->GetXaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_MET_13TeV_met195->GetYaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_MET_13TeV_met195->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_MET_13TeV_met195->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_MET_13TeV_met195->GetYaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_MET_13TeV_met195->GetZaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_MET_13TeV_met195->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_MET_13TeV_met195->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_MET_13TeV_met195->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_13TeV_met->Add(new_histo_group_Vg_wh3l_MET_13TeV_met,"");
   
   TH1D *new_histo_group_ZZ_wh3l_MET_13TeV_met196 = new TH1D("new_histo_group_ZZ_wh3l_MET_13TeV_met196","histo_ZZ",40,0,200);
   new_histo_group_ZZ_wh3l_MET_13TeV_met196->SetBinContent(12,0.0427135);
   new_histo_group_ZZ_wh3l_MET_13TeV_met196->SetBinContent(16,0.04768794);
   new_histo_group_ZZ_wh3l_MET_13TeV_met196->SetBinContent(33,0.03513683);
   new_histo_group_ZZ_wh3l_MET_13TeV_met196->SetBinError(12,0.0427135);
   new_histo_group_ZZ_wh3l_MET_13TeV_met196->SetBinError(16,0.04768794);
   new_histo_group_ZZ_wh3l_MET_13TeV_met196->SetBinError(33,0.03513683);
   new_histo_group_ZZ_wh3l_MET_13TeV_met196->SetEntries(3);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_MET_13TeV_met196->SetFillColor(ci);
   new_histo_group_ZZ_wh3l_MET_13TeV_met196->SetFillStyle(3001);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_MET_13TeV_met196->SetLineColor(ci);
   new_histo_group_ZZ_wh3l_MET_13TeV_met196->GetXaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_MET_13TeV_met196->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_MET_13TeV_met196->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_MET_13TeV_met196->GetXaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_MET_13TeV_met196->GetYaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_MET_13TeV_met196->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_MET_13TeV_met196->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_MET_13TeV_met196->GetYaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_MET_13TeV_met196->GetZaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_MET_13TeV_met196->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_MET_13TeV_met196->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_MET_13TeV_met196->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_13TeV_met->Add(new_histo_group_ZZ_wh3l_MET_13TeV_met,"");
   
   TH1D *new_histo_group_WZ_wh3l_MET_13TeV_met197 = new TH1D("new_histo_group_WZ_wh3l_MET_13TeV_met197","histo_WZ",40,0,200);
   new_histo_group_WZ_wh3l_MET_13TeV_met197->SetBinContent(7,0.09604376);
   new_histo_group_WZ_wh3l_MET_13TeV_met197->SetBinContent(8,0.1005493);
   new_histo_group_WZ_wh3l_MET_13TeV_met197->SetBinContent(9,0.1080686);
   new_histo_group_WZ_wh3l_MET_13TeV_met197->SetBinContent(10,0.1038802);
   new_histo_group_WZ_wh3l_MET_13TeV_met197->SetBinContent(11,0.06715506);
   new_histo_group_WZ_wh3l_MET_13TeV_met197->SetBinContent(12,0.08926086);
   new_histo_group_WZ_wh3l_MET_13TeV_met197->SetBinContent(13,0.05247767);
   new_histo_group_WZ_wh3l_MET_13TeV_met197->SetBinContent(14,0.09742586);
   new_histo_group_WZ_wh3l_MET_13TeV_met197->SetBinContent(15,0.05260119);
   new_histo_group_WZ_wh3l_MET_13TeV_met197->SetBinContent(16,0.06138153);
   new_histo_group_WZ_wh3l_MET_13TeV_met197->SetBinContent(17,0.04249357);
   new_histo_group_WZ_wh3l_MET_13TeV_met197->SetBinContent(18,0.01930159);
   new_histo_group_WZ_wh3l_MET_13TeV_met197->SetBinContent(19,0.04220126);
   new_histo_group_WZ_wh3l_MET_13TeV_met197->SetBinContent(20,0.04801477);
   new_histo_group_WZ_wh3l_MET_13TeV_met197->SetBinContent(21,0.03406188);
   new_histo_group_WZ_wh3l_MET_13TeV_met197->SetBinContent(23,0.02418755);
   new_histo_group_WZ_wh3l_MET_13TeV_met197->SetBinContent(24,0.005970421);
   new_histo_group_WZ_wh3l_MET_13TeV_met197->SetBinContent(25,0.01400272);
   new_histo_group_WZ_wh3l_MET_13TeV_met197->SetBinContent(26,0.00566181);
   new_histo_group_WZ_wh3l_MET_13TeV_met197->SetBinContent(28,0.003608506);
   new_histo_group_WZ_wh3l_MET_13TeV_met197->SetBinContent(29,0.01331346);
   new_histo_group_WZ_wh3l_MET_13TeV_met197->SetBinContent(30,0.005225095);
   new_histo_group_WZ_wh3l_MET_13TeV_met197->SetBinContent(31,0.004440491);
   new_histo_group_WZ_wh3l_MET_13TeV_met197->SetBinContent(32,1.830208e-06);
   new_histo_group_WZ_wh3l_MET_13TeV_met197->SetBinContent(35,0.005978603);
   new_histo_group_WZ_wh3l_MET_13TeV_met197->SetBinContent(37,0.0072154);
   new_histo_group_WZ_wh3l_MET_13TeV_met197->SetBinContent(38,0.01113129);
   new_histo_group_WZ_wh3l_MET_13TeV_met197->SetBinContent(39,0.005727727);
   new_histo_group_WZ_wh3l_MET_13TeV_met197->SetBinContent(40,0.002384166);
   new_histo_group_WZ_wh3l_MET_13TeV_met197->SetBinContent(41,0.06310636);
   new_histo_group_WZ_wh3l_MET_13TeV_met197->SetBinError(7,0.02305192);
   new_histo_group_WZ_wh3l_MET_13TeV_met197->SetBinError(8,0.02316639);
   new_histo_group_WZ_wh3l_MET_13TeV_met197->SetBinError(9,0.02379398);
   new_histo_group_WZ_wh3l_MET_13TeV_met197->SetBinError(10,0.02316409);
   new_histo_group_WZ_wh3l_MET_13TeV_met197->SetBinError(11,0.0197249);
   new_histo_group_WZ_wh3l_MET_13TeV_met197->SetBinError(12,0.02203394);
   new_histo_group_WZ_wh3l_MET_13TeV_met197->SetBinError(13,0.01698127);
   new_histo_group_WZ_wh3l_MET_13TeV_met197->SetBinError(14,0.02298556);
   new_histo_group_WZ_wh3l_MET_13TeV_met197->SetBinError(15,0.01670775);
   new_histo_group_WZ_wh3l_MET_13TeV_met197->SetBinError(16,0.01819035);
   new_histo_group_WZ_wh3l_MET_13TeV_met197->SetBinError(17,0.01516084);
   new_histo_group_WZ_wh3l_MET_13TeV_met197->SetBinError(18,0.009975862);
   new_histo_group_WZ_wh3l_MET_13TeV_met197->SetBinError(19,0.01545011);
   new_histo_group_WZ_wh3l_MET_13TeV_met197->SetBinError(20,0.01616603);
   new_histo_group_WZ_wh3l_MET_13TeV_met197->SetBinError(21,0.01404125);
   new_histo_group_WZ_wh3l_MET_13TeV_met197->SetBinError(23,0.0111856);
   new_histo_group_WZ_wh3l_MET_13TeV_met197->SetBinError(24,0.005970421);
   new_histo_group_WZ_wh3l_MET_13TeV_met197->SetBinError(25,0.009141188);
   new_histo_group_WZ_wh3l_MET_13TeV_met197->SetBinError(26,0.00566181);
   new_histo_group_WZ_wh3l_MET_13TeV_met197->SetBinError(28,0.003608506);
   new_histo_group_WZ_wh3l_MET_13TeV_met197->SetBinError(29,0.008154496);
   new_histo_group_WZ_wh3l_MET_13TeV_met197->SetBinError(30,0.005224963);
   new_histo_group_WZ_wh3l_MET_13TeV_met197->SetBinError(31,0.004440491);
   new_histo_group_WZ_wh3l_MET_13TeV_met197->SetBinError(32,1.830208e-06);
   new_histo_group_WZ_wh3l_MET_13TeV_met197->SetBinError(35,0.005978603);
   new_histo_group_WZ_wh3l_MET_13TeV_met197->SetBinError(37,0.0072154);
   new_histo_group_WZ_wh3l_MET_13TeV_met197->SetBinError(38,0.007889085);
   new_histo_group_WZ_wh3l_MET_13TeV_met197->SetBinError(39,0.005727727);
   new_histo_group_WZ_wh3l_MET_13TeV_met197->SetBinError(40,0.002384166);
   new_histo_group_WZ_wh3l_MET_13TeV_met197->SetBinError(41,0.0192267);
   new_histo_group_WZ_wh3l_MET_13TeV_met197->SetEntries(244);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_MET_13TeV_met197->SetFillColor(ci);
   new_histo_group_WZ_wh3l_MET_13TeV_met197->SetFillStyle(3001);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_MET_13TeV_met197->SetLineColor(ci);
   new_histo_group_WZ_wh3l_MET_13TeV_met197->GetXaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_MET_13TeV_met197->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_MET_13TeV_met197->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_MET_13TeV_met197->GetXaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_MET_13TeV_met197->GetYaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_MET_13TeV_met197->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_MET_13TeV_met197->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_MET_13TeV_met197->GetYaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_MET_13TeV_met197->GetZaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_MET_13TeV_met197->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_MET_13TeV_met197->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_MET_13TeV_met197->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_13TeV_met->Add(new_histo_group_WZ_wh3l_MET_13TeV_met,"");
   
   TH1D *new_histo_group_Higgs_wh3l_MET_13TeV_met198 = new TH1D("new_histo_group_Higgs_wh3l_MET_13TeV_met198","histo_H_htt",40,0,200);
   new_histo_group_Higgs_wh3l_MET_13TeV_met198->SetBinContent(7,0.02845167);
   new_histo_group_Higgs_wh3l_MET_13TeV_met198->SetBinContent(8,0.03766467);
   new_histo_group_Higgs_wh3l_MET_13TeV_met198->SetBinContent(9,0.03846406);
   new_histo_group_Higgs_wh3l_MET_13TeV_met198->SetBinContent(10,0.03956473);
   new_histo_group_Higgs_wh3l_MET_13TeV_met198->SetBinContent(11,0.04248497);
   new_histo_group_Higgs_wh3l_MET_13TeV_met198->SetBinContent(12,0.01789877);
   new_histo_group_Higgs_wh3l_MET_13TeV_met198->SetBinContent(13,0.01734077);
   new_histo_group_Higgs_wh3l_MET_13TeV_met198->SetBinContent(14,0.02015907);
   new_histo_group_Higgs_wh3l_MET_13TeV_met198->SetBinContent(15,0.0260861);
   new_histo_group_Higgs_wh3l_MET_13TeV_met198->SetBinContent(16,0.02012449);
   new_histo_group_Higgs_wh3l_MET_13TeV_met198->SetBinContent(17,0.02149911);
   new_histo_group_Higgs_wh3l_MET_13TeV_met198->SetBinContent(18,0.01374505);
   new_histo_group_Higgs_wh3l_MET_13TeV_met198->SetBinContent(19,0.01596194);
   new_histo_group_Higgs_wh3l_MET_13TeV_met198->SetBinContent(20,0.01358166);
   new_histo_group_Higgs_wh3l_MET_13TeV_met198->SetBinContent(21,0.006941802);
   new_histo_group_Higgs_wh3l_MET_13TeV_met198->SetBinContent(22,0.009315158);
   new_histo_group_Higgs_wh3l_MET_13TeV_met198->SetBinContent(23,0.007297241);
   new_histo_group_Higgs_wh3l_MET_13TeV_met198->SetBinContent(24,0.005793163);
   new_histo_group_Higgs_wh3l_MET_13TeV_met198->SetBinContent(25,0.002616131);
   new_histo_group_Higgs_wh3l_MET_13TeV_met198->SetBinContent(26,0.0005869387);
   new_histo_group_Higgs_wh3l_MET_13TeV_met198->SetBinContent(27,0.002741894);
   new_histo_group_Higgs_wh3l_MET_13TeV_met198->SetBinContent(28,0.004498115);
   new_histo_group_Higgs_wh3l_MET_13TeV_met198->SetBinContent(29,0.001223899);
   new_histo_group_Higgs_wh3l_MET_13TeV_met198->SetBinContent(30,0.0003376218);
   new_histo_group_Higgs_wh3l_MET_13TeV_met198->SetBinContent(31,0.0004902263);
   new_histo_group_Higgs_wh3l_MET_13TeV_met198->SetBinContent(32,0.001647177);
   new_histo_group_Higgs_wh3l_MET_13TeV_met198->SetBinContent(34,0.001158819);
   new_histo_group_Higgs_wh3l_MET_13TeV_met198->SetBinContent(35,0.001083794);
   new_histo_group_Higgs_wh3l_MET_13TeV_met198->SetBinContent(36,0.0003885943);
   new_histo_group_Higgs_wh3l_MET_13TeV_met198->SetBinContent(37,0.001231972);
   new_histo_group_Higgs_wh3l_MET_13TeV_met198->SetBinContent(38,0.001365859);
   new_histo_group_Higgs_wh3l_MET_13TeV_met198->SetBinContent(39,0.0006932251);
   new_histo_group_Higgs_wh3l_MET_13TeV_met198->SetBinContent(40,0.001008048);
   new_histo_group_Higgs_wh3l_MET_13TeV_met198->SetBinContent(41,0.008603945);
   new_histo_group_Higgs_wh3l_MET_13TeV_met198->SetBinError(7,0.005306123);
   new_histo_group_Higgs_wh3l_MET_13TeV_met198->SetBinError(8,0.006168476);
   new_histo_group_Higgs_wh3l_MET_13TeV_met198->SetBinError(9,0.006195707);
   new_histo_group_Higgs_wh3l_MET_13TeV_met198->SetBinError(10,0.006396331);
   new_histo_group_Higgs_wh3l_MET_13TeV_met198->SetBinError(11,0.00684352);
   new_histo_group_Higgs_wh3l_MET_13TeV_met198->SetBinError(12,0.004455015);
   new_histo_group_Higgs_wh3l_MET_13TeV_met198->SetBinError(13,0.004210792);
   new_histo_group_Higgs_wh3l_MET_13TeV_met198->SetBinError(14,0.005351088);
   new_histo_group_Higgs_wh3l_MET_13TeV_met198->SetBinError(15,0.005192445);
   new_histo_group_Higgs_wh3l_MET_13TeV_met198->SetBinError(16,0.004563109);
   new_histo_group_Higgs_wh3l_MET_13TeV_met198->SetBinError(17,0.005020788);
   new_histo_group_Higgs_wh3l_MET_13TeV_met198->SetBinError(18,0.004225056);
   new_histo_group_Higgs_wh3l_MET_13TeV_met198->SetBinError(19,0.004334464);
   new_histo_group_Higgs_wh3l_MET_13TeV_met198->SetBinError(20,0.004036008);
   new_histo_group_Higgs_wh3l_MET_13TeV_met198->SetBinError(21,0.002621558);
   new_histo_group_Higgs_wh3l_MET_13TeV_met198->SetBinError(22,0.00346359);
   new_histo_group_Higgs_wh3l_MET_13TeV_met198->SetBinError(23,0.003037867);
   new_histo_group_Higgs_wh3l_MET_13TeV_met198->SetBinError(24,0.002405415);
   new_histo_group_Higgs_wh3l_MET_13TeV_met198->SetBinError(25,0.001293124);
   new_histo_group_Higgs_wh3l_MET_13TeV_met198->SetBinError(26,0.0004371413);
   new_histo_group_Higgs_wh3l_MET_13TeV_met198->SetBinError(27,0.001845095);
   new_histo_group_Higgs_wh3l_MET_13TeV_met198->SetBinError(28,0.002457861);
   new_histo_group_Higgs_wh3l_MET_13TeV_met198->SetBinError(29,0.0006827645);
   new_histo_group_Higgs_wh3l_MET_13TeV_met198->SetBinError(30,0.0002434032);
   new_histo_group_Higgs_wh3l_MET_13TeV_met198->SetBinError(31,0.0003527062);
   new_histo_group_Higgs_wh3l_MET_13TeV_met198->SetBinError(32,0.0008058194);
   new_histo_group_Higgs_wh3l_MET_13TeV_met198->SetBinError(34,0.0006574335);
   new_histo_group_Higgs_wh3l_MET_13TeV_met198->SetBinError(35,0.000591505);
   new_histo_group_Higgs_wh3l_MET_13TeV_met198->SetBinError(36,0.0002748678);
   new_histo_group_Higgs_wh3l_MET_13TeV_met198->SetBinError(37,0.0008449472);
   new_histo_group_Higgs_wh3l_MET_13TeV_met198->SetBinError(38,0.001365859);
   new_histo_group_Higgs_wh3l_MET_13TeV_met198->SetBinError(39,0.0005012018);
   new_histo_group_Higgs_wh3l_MET_13TeV_met198->SetBinError(40,0.0005906759);
   new_histo_group_Higgs_wh3l_MET_13TeV_met198->SetBinError(41,0.002417886);
   new_histo_group_Higgs_wh3l_MET_13TeV_met198->SetEntries(741);
   new_histo_group_Higgs_wh3l_MET_13TeV_met198->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_MET_13TeV_met198->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_MET_13TeV_met198->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_MET_13TeV_met198->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_13TeV_met198->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_13TeV_met198->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_13TeV_met198->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_MET_13TeV_met198->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_13TeV_met198->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_13TeV_met198->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_13TeV_met198->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_MET_13TeV_met198->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_13TeV_met198->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_13TeV_met198->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_13TeV_met198->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_13TeV_met->Add(new_histo_group_Higgs_wh3l_MET_13TeV_met,"");
   thsBackground_grouped_wh3l_MET_13TeV_met->Draw("hist same");
   
   thsSignal_grouped_wh3l_MET_13TeV_met = new THStack();
   thsSignal_grouped_wh3l_MET_13TeV_met->SetName("thsSignal_grouped_wh3l_MET_13TeV_met");
   thsSignal_grouped_wh3l_MET_13TeV_met->SetTitle("thsSignal_grouped_wh3l_MET_13TeV_met");
   
   TH1F *thsSignal_grouped_wh3l_MET_13TeV_met_stack_40 = new TH1F("thsSignal_grouped_wh3l_MET_13TeV_met_stack_40","thsSignal_grouped_wh3l_MET_13TeV_met",40,0,200);
   thsSignal_grouped_wh3l_MET_13TeV_met_stack_40->SetMinimum(0);
   thsSignal_grouped_wh3l_MET_13TeV_met_stack_40->SetMaximum(0.05179491);
   thsSignal_grouped_wh3l_MET_13TeV_met_stack_40->SetDirectory(0);
   thsSignal_grouped_wh3l_MET_13TeV_met_stack_40->SetStats(0);
   thsSignal_grouped_wh3l_MET_13TeV_met_stack_40->SetLineStyle(0);
   thsSignal_grouped_wh3l_MET_13TeV_met_stack_40->SetMarkerStyle(20);
   thsSignal_grouped_wh3l_MET_13TeV_met_stack_40->GetXaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_MET_13TeV_met_stack_40->GetXaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_MET_13TeV_met_stack_40->GetXaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_MET_13TeV_met_stack_40->GetXaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_MET_13TeV_met_stack_40->GetXaxis()->SetTitleOffset(0.9);
   thsSignal_grouped_wh3l_MET_13TeV_met_stack_40->GetXaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_MET_13TeV_met_stack_40->GetYaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_MET_13TeV_met_stack_40->GetYaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_MET_13TeV_met_stack_40->GetYaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_MET_13TeV_met_stack_40->GetYaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_MET_13TeV_met_stack_40->GetYaxis()->SetTitleOffset(1.25);
   thsSignal_grouped_wh3l_MET_13TeV_met_stack_40->GetYaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_MET_13TeV_met_stack_40->GetZaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_MET_13TeV_met_stack_40->GetZaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_MET_13TeV_met_stack_40->GetZaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_MET_13TeV_met_stack_40->GetZaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_MET_13TeV_met_stack_40->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_MET_13TeV_met->SetHistogram(thsSignal_grouped_wh3l_MET_13TeV_met_stack_40);
   
   
   TH1D *new_histo_group_Higgs_wh3l_MET_13TeV_met199 = new TH1D("new_histo_group_Higgs_wh3l_MET_13TeV_met199","histo_H_htt",40,0,200);
   new_histo_group_Higgs_wh3l_MET_13TeV_met199->SetBinContent(7,0.02845167);
   new_histo_group_Higgs_wh3l_MET_13TeV_met199->SetBinContent(8,0.03766467);
   new_histo_group_Higgs_wh3l_MET_13TeV_met199->SetBinContent(9,0.03846406);
   new_histo_group_Higgs_wh3l_MET_13TeV_met199->SetBinContent(10,0.03956473);
   new_histo_group_Higgs_wh3l_MET_13TeV_met199->SetBinContent(11,0.04248497);
   new_histo_group_Higgs_wh3l_MET_13TeV_met199->SetBinContent(12,0.01789877);
   new_histo_group_Higgs_wh3l_MET_13TeV_met199->SetBinContent(13,0.01734077);
   new_histo_group_Higgs_wh3l_MET_13TeV_met199->SetBinContent(14,0.02015907);
   new_histo_group_Higgs_wh3l_MET_13TeV_met199->SetBinContent(15,0.0260861);
   new_histo_group_Higgs_wh3l_MET_13TeV_met199->SetBinContent(16,0.02012449);
   new_histo_group_Higgs_wh3l_MET_13TeV_met199->SetBinContent(17,0.02149911);
   new_histo_group_Higgs_wh3l_MET_13TeV_met199->SetBinContent(18,0.01374505);
   new_histo_group_Higgs_wh3l_MET_13TeV_met199->SetBinContent(19,0.01596194);
   new_histo_group_Higgs_wh3l_MET_13TeV_met199->SetBinContent(20,0.01358166);
   new_histo_group_Higgs_wh3l_MET_13TeV_met199->SetBinContent(21,0.006941802);
   new_histo_group_Higgs_wh3l_MET_13TeV_met199->SetBinContent(22,0.009315158);
   new_histo_group_Higgs_wh3l_MET_13TeV_met199->SetBinContent(23,0.007297241);
   new_histo_group_Higgs_wh3l_MET_13TeV_met199->SetBinContent(24,0.005793163);
   new_histo_group_Higgs_wh3l_MET_13TeV_met199->SetBinContent(25,0.002616131);
   new_histo_group_Higgs_wh3l_MET_13TeV_met199->SetBinContent(26,0.0005869387);
   new_histo_group_Higgs_wh3l_MET_13TeV_met199->SetBinContent(27,0.002741894);
   new_histo_group_Higgs_wh3l_MET_13TeV_met199->SetBinContent(28,0.004498115);
   new_histo_group_Higgs_wh3l_MET_13TeV_met199->SetBinContent(29,0.001223899);
   new_histo_group_Higgs_wh3l_MET_13TeV_met199->SetBinContent(30,0.0003376218);
   new_histo_group_Higgs_wh3l_MET_13TeV_met199->SetBinContent(31,0.0004902263);
   new_histo_group_Higgs_wh3l_MET_13TeV_met199->SetBinContent(32,0.001647177);
   new_histo_group_Higgs_wh3l_MET_13TeV_met199->SetBinContent(34,0.001158819);
   new_histo_group_Higgs_wh3l_MET_13TeV_met199->SetBinContent(35,0.001083794);
   new_histo_group_Higgs_wh3l_MET_13TeV_met199->SetBinContent(36,0.0003885943);
   new_histo_group_Higgs_wh3l_MET_13TeV_met199->SetBinContent(37,0.001231972);
   new_histo_group_Higgs_wh3l_MET_13TeV_met199->SetBinContent(38,0.001365859);
   new_histo_group_Higgs_wh3l_MET_13TeV_met199->SetBinContent(39,0.0006932251);
   new_histo_group_Higgs_wh3l_MET_13TeV_met199->SetBinContent(40,0.001008048);
   new_histo_group_Higgs_wh3l_MET_13TeV_met199->SetBinContent(41,0.008603945);
   new_histo_group_Higgs_wh3l_MET_13TeV_met199->SetBinError(7,0.005306123);
   new_histo_group_Higgs_wh3l_MET_13TeV_met199->SetBinError(8,0.006168476);
   new_histo_group_Higgs_wh3l_MET_13TeV_met199->SetBinError(9,0.006195707);
   new_histo_group_Higgs_wh3l_MET_13TeV_met199->SetBinError(10,0.006396331);
   new_histo_group_Higgs_wh3l_MET_13TeV_met199->SetBinError(11,0.00684352);
   new_histo_group_Higgs_wh3l_MET_13TeV_met199->SetBinError(12,0.004455015);
   new_histo_group_Higgs_wh3l_MET_13TeV_met199->SetBinError(13,0.004210792);
   new_histo_group_Higgs_wh3l_MET_13TeV_met199->SetBinError(14,0.005351088);
   new_histo_group_Higgs_wh3l_MET_13TeV_met199->SetBinError(15,0.005192445);
   new_histo_group_Higgs_wh3l_MET_13TeV_met199->SetBinError(16,0.004563109);
   new_histo_group_Higgs_wh3l_MET_13TeV_met199->SetBinError(17,0.005020788);
   new_histo_group_Higgs_wh3l_MET_13TeV_met199->SetBinError(18,0.004225056);
   new_histo_group_Higgs_wh3l_MET_13TeV_met199->SetBinError(19,0.004334464);
   new_histo_group_Higgs_wh3l_MET_13TeV_met199->SetBinError(20,0.004036008);
   new_histo_group_Higgs_wh3l_MET_13TeV_met199->SetBinError(21,0.002621558);
   new_histo_group_Higgs_wh3l_MET_13TeV_met199->SetBinError(22,0.00346359);
   new_histo_group_Higgs_wh3l_MET_13TeV_met199->SetBinError(23,0.003037867);
   new_histo_group_Higgs_wh3l_MET_13TeV_met199->SetBinError(24,0.002405415);
   new_histo_group_Higgs_wh3l_MET_13TeV_met199->SetBinError(25,0.001293124);
   new_histo_group_Higgs_wh3l_MET_13TeV_met199->SetBinError(26,0.0004371413);
   new_histo_group_Higgs_wh3l_MET_13TeV_met199->SetBinError(27,0.001845095);
   new_histo_group_Higgs_wh3l_MET_13TeV_met199->SetBinError(28,0.002457861);
   new_histo_group_Higgs_wh3l_MET_13TeV_met199->SetBinError(29,0.0006827645);
   new_histo_group_Higgs_wh3l_MET_13TeV_met199->SetBinError(30,0.0002434032);
   new_histo_group_Higgs_wh3l_MET_13TeV_met199->SetBinError(31,0.0003527062);
   new_histo_group_Higgs_wh3l_MET_13TeV_met199->SetBinError(32,0.0008058194);
   new_histo_group_Higgs_wh3l_MET_13TeV_met199->SetBinError(34,0.0006574335);
   new_histo_group_Higgs_wh3l_MET_13TeV_met199->SetBinError(35,0.000591505);
   new_histo_group_Higgs_wh3l_MET_13TeV_met199->SetBinError(36,0.0002748678);
   new_histo_group_Higgs_wh3l_MET_13TeV_met199->SetBinError(37,0.0008449472);
   new_histo_group_Higgs_wh3l_MET_13TeV_met199->SetBinError(38,0.001365859);
   new_histo_group_Higgs_wh3l_MET_13TeV_met199->SetBinError(39,0.0005012018);
   new_histo_group_Higgs_wh3l_MET_13TeV_met199->SetBinError(40,0.0005906759);
   new_histo_group_Higgs_wh3l_MET_13TeV_met199->SetBinError(41,0.002417886);
   new_histo_group_Higgs_wh3l_MET_13TeV_met199->SetEntries(741);
   new_histo_group_Higgs_wh3l_MET_13TeV_met199->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_MET_13TeV_met199->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_MET_13TeV_met199->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_MET_13TeV_met199->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_13TeV_met199->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_13TeV_met199->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_13TeV_met199->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_MET_13TeV_met199->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_13TeV_met199->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_13TeV_met199->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_13TeV_met199->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_MET_13TeV_met199->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_13TeV_met199->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_13TeV_met199->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_13TeV_met199->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_MET_13TeV_met->Add(new_histo_group_Higgs_wh3l_MET_13TeV_met,"");
   thsSignal_grouped_wh3l_MET_13TeV_met->Draw("hist same noclear");
   
   Double_t _fx3039[40] = {
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
   Double_t _fy3039[40] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0.7075964,
   0.7394863,
   0.3020856,
   1.450508,
   1.626046,
   2.300002,
   1.288656,
   2.413028,
   1.525317,
   1.056928,
   1.122199,
   0.5796942,
   0.8613032,
   0.587196,
   0.490773,
   0.1857238,
   0.1466172,
   0.1572375,
   0.135987,
   1.282375,
   1.138878,
   0.01738535,
   0.01298949,
   0.01147913,
   0.1124158,
   0.4112424,
   0.03320675,
   -0.03192988,
   0.1760782,
   0.004287872,
   0.007724138,
   0.01156607,
   0.0006125297,
   0.002384166};
   Double_t _felx3039[40] = {
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
   Double_t _fely3039[40] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0.5680311,
   0.667151,
   0.2227234,
   0.8871383,
   0.9995325,
   1.395383,
   0.9376907,
   1.324126,
   1.190385,
   0.7721248,
   0.711712,
   0.588768,
   0.5821251,
   0.5863174,
   0.4029934,
   0.1708672,
   0.1357189,
   0.1635512,
   0.1331989,
   0.9624909,
   0.8603582,
   0.02705738,
   0.0246051,
   0.01033212,
   0.1154082,
   0.4335248,
   0.04579901,
   0.03830377,
   0.1420461,
   0.00534603,
   0.007755383,
   0.008359272,
   0.01099071,
   0.002394048};
   Double_t _fehx3039[40] = {
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
   Double_t _fehy3039[40] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0.5679984,
   0.6671509,
   0.2320497,
   0.8871378,
   0.999532,
   1.395383,
   0.9376903,
   1.324126,
   1.190384,
   0.7721179,
   0.711711,
   0.5887671,
   0.5821242,
   0.6564631,
   0.4029925,
   0.1708672,
   0.1563829,
   0.1912266,
   0.5450618,
   0.9624912,
   0.8603582,
   0.02703715,
   0.024598,
   0.01035404,
   0.1154075,
   0.4335248,
   0.04579923,
   0.03830379,
   0.1420461,
   0.005346122,
   0.007751939,
   0.008350413,
   0.01099074,
   0.002396137};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(40,_fx3039,_fy3039,_felx3039,_fehx3039,_fely3039,_fehy3039);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(12);
   grae->SetFillStyle(3004);
   grae->SetLineColor(12);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3039 = new TH1F("Graph_Graph3039","",100,0,220);
   Graph_Graph3039->SetMinimum(-0.4509724);
   Graph_Graph3039->SetMaximum(4.117893);
   Graph_Graph3039->SetDirectory(0);
   Graph_Graph3039->SetStats(0);
   Graph_Graph3039->SetLineStyle(0);
   Graph_Graph3039->SetMarkerStyle(20);
   Graph_Graph3039->GetXaxis()->SetLabelFont(42);
   Graph_Graph3039->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3039->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3039->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3039->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3039->GetXaxis()->SetTitleFont(42);
   Graph_Graph3039->GetYaxis()->SetLabelFont(42);
   Graph_Graph3039->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3039->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3039->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3039->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3039->GetYaxis()->SetTitleFont(42);
   Graph_Graph3039->GetZaxis()->SetLabelFont(42);
   Graph_Graph3039->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3039->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3039->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3039->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3039);
   
   grae->Draw("2");
   
   Double_t _fx3040[40] = {
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
   Double_t _fy3040[40] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   1,
   2,
   0,
   0,
   2,
   0,
   0,
   0,
   2,
   0,
   0,
   0,
   1,
   0,
   1,
   1,
   0,
   2,
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
   Double_t _felx3040[40] = {
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
   Double_t _fely3040[40] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0.8272524,
   1.29183,
   0,
   0,
   1.29183,
   0,
   0,
   0,
   1.29183,
   0,
   0,
   0,
   0.8272524,
   0,
   0.8272524,
   0.8272524,
   0,
   1.29183,
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
   Double_t _fehx3040[40] = {
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
   Double_t _fehy3040[40] = {
   1.147908,
   1.147908,
   1.147908,
   1.147908,
   1.147908,
   1.147908,
   1.147908,
   2.29957,
   2.63791,
   1.147908,
   1.147908,
   2.63791,
   1.147908,
   1.147908,
   1.147908,
   2.63791,
   1.147908,
   1.147908,
   1.147908,
   2.29957,
   1.147908,
   2.29957,
   2.29957,
   1.147908,
   2.63791,
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
   grae = new TGraphAsymmErrors(40,_fx3040,_fy3040,_felx3040,_fehx3040,_fely3040,_fehy3040);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(1);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3040 = new TH1F("Graph_Graph3040","",100,0,220);
   Graph_Graph3040->SetMinimum(0);
   Graph_Graph3040->SetMaximum(5.101701);
   Graph_Graph3040->SetDirectory(0);
   Graph_Graph3040->SetStats(0);
   Graph_Graph3040->SetLineStyle(0);
   Graph_Graph3040->SetMarkerStyle(20);
   Graph_Graph3040->GetXaxis()->SetLabelFont(42);
   Graph_Graph3040->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3040->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3040->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3040->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3040->GetXaxis()->SetTitleFont(42);
   Graph_Graph3040->GetYaxis()->SetLabelFont(42);
   Graph_Graph3040->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3040->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3040->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3040->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3040->GetYaxis()->SetTitleFont(42);
   Graph_Graph3040->GetZaxis()->SetLabelFont(42);
   Graph_Graph3040->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3040->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3040->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3040->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3040);
   
   grae->Draw("p0");
   
   TLegend *leg = new TLegend(0.2,0.7,0.8,0.9,NULL,"brNDC");
   leg->SetTextFont(62);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("new_histo_group_Fake_wh3l_MET_13TeV_met","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_MET_13TeV_met","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_MET_13TeV_met","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_MET_13TeV_met","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_MET_13TeV_met","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_MET_13TeV_met","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_MET_13TeV_met","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_MET_13TeV_met","Data","EPL");
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
   entry=leg->AddEntry("new_histo_group_Fake_wh3l_MET_13TeV_met","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_MET_13TeV_met","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_MET_13TeV_met","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_MET_13TeV_met","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_MET_13TeV_met","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_MET_13TeV_met","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_MET_13TeV_met","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_MET_13TeV_met","Data","EPL");
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
   
   TH1F *hframe_copy200 = new TH1F("hframe_copy200","",1000,0,200);
   hframe_copy200->SetMinimum(0);
   hframe_copy200->SetMaximum(8.535534);
   hframe_copy200->SetDirectory(0);
   hframe_copy200->SetStats(0);
   hframe_copy200->SetLineStyle(0);
   hframe_copy200->SetMarkerStyle(20);
   hframe_copy200->GetXaxis()->SetTitle("pfmet [GeV]");
   hframe_copy200->GetXaxis()->SetNdivisions(506);
   hframe_copy200->GetXaxis()->SetLabelFont(42);
   hframe_copy200->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy200->GetXaxis()->SetLabelSize(0.05);
   hframe_copy200->GetXaxis()->SetTitleSize(0.06);
   hframe_copy200->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy200->GetXaxis()->SetTitleFont(42);
   hframe_copy200->GetYaxis()->SetTitle("Events");
   hframe_copy200->GetYaxis()->SetLabelFont(42);
   hframe_copy200->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy200->GetYaxis()->SetLabelSize(0.05);
   hframe_copy200->GetYaxis()->SetTitleSize(0.06);
   hframe_copy200->GetYaxis()->SetTitleOffset(1.25);
   hframe_copy200->GetYaxis()->SetTitleFont(42);
   hframe_copy200->GetZaxis()->SetLabelFont(42);
   hframe_copy200->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy200->GetZaxis()->SetLabelSize(0.05);
   hframe_copy200->GetZaxis()->SetTitleSize(0.06);
   hframe_copy200->GetZaxis()->SetTitleFont(42);
   hframe_copy200->Draw("sameaxis");
   ccwh3l_MET_13TeV_met->Modified();
   ccwh3l_MET_13TeV_met->cd();
   ccwh3l_MET_13TeV_met->SetSelected(ccwh3l_MET_13TeV_met);
}
