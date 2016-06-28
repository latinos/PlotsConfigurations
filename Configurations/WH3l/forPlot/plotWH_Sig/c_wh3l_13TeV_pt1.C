void c_wh3l_13TeV_pt1()
{
//=========Macro generated from canvas: ccwh3l_13TeV_pt1/cc
//=========  (Tue Jun 28 13:56:26 2016) by ROOT version6.02/13
   TCanvas *ccwh3l_13TeV_pt1 = new TCanvas("ccwh3l_13TeV_pt1", "cc",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   ccwh3l_13TeV_pt1->SetHighLightColor(2);
   ccwh3l_13TeV_pt1->Range(-28,-1.447802,209.5,9.689136);
   ccwh3l_13TeV_pt1->SetFillColor(0);
   ccwh3l_13TeV_pt1->SetBorderMode(0);
   ccwh3l_13TeV_pt1->SetBorderSize(2);
   ccwh3l_13TeV_pt1->SetTickx(1);
   ccwh3l_13TeV_pt1->SetTicky(1);
   ccwh3l_13TeV_pt1->SetLeftMargin(0.16);
   ccwh3l_13TeV_pt1->SetRightMargin(0.04);
   ccwh3l_13TeV_pt1->SetTopMargin(0.05);
   ccwh3l_13TeV_pt1->SetBottomMargin(0.13);
   ccwh3l_13TeV_pt1->SetFrameFillStyle(0);
   ccwh3l_13TeV_pt1->SetFrameBorderMode(0);
   ccwh3l_13TeV_pt1->SetFrameFillStyle(0);
   ccwh3l_13TeV_pt1->SetFrameBorderMode(0);
   
   TH1F *hframe261 = new TH1F("hframe261","",1000,10,200);
   hframe261->SetMinimum(0);
   hframe261->SetMaximum(9.132289);
   hframe261->SetDirectory(0);
   hframe261->SetStats(0);
   hframe261->SetLineStyle(0);
   hframe261->SetMarkerStyle(20);
   hframe261->GetXaxis()->SetTitle("lept1_p_{T} [GeV]");
   hframe261->GetXaxis()->SetNdivisions(506);
   hframe261->GetXaxis()->SetLabelFont(42);
   hframe261->GetXaxis()->SetLabelOffset(0.007);
   hframe261->GetXaxis()->SetLabelSize(0.05);
   hframe261->GetXaxis()->SetTitleSize(0.06);
   hframe261->GetXaxis()->SetTitleOffset(0.9);
   hframe261->GetXaxis()->SetTitleFont(42);
   hframe261->GetYaxis()->SetTitle("Events");
   hframe261->GetYaxis()->SetLabelFont(42);
   hframe261->GetYaxis()->SetLabelOffset(0.007);
   hframe261->GetYaxis()->SetLabelSize(0.05);
   hframe261->GetYaxis()->SetTitleSize(0.06);
   hframe261->GetYaxis()->SetTitleOffset(1.25);
   hframe261->GetYaxis()->SetTitleFont(42);
   hframe261->GetZaxis()->SetLabelFont(42);
   hframe261->GetZaxis()->SetLabelOffset(0.007);
   hframe261->GetZaxis()->SetLabelSize(0.05);
   hframe261->GetZaxis()->SetTitleSize(0.06);
   hframe261->GetZaxis()->SetTitleFont(42);
   hframe261->Draw(" ");
   
   THStack *thsBackground_grouped_wh3l_13TeV_pt1 = new THStack();
   thsBackground_grouped_wh3l_13TeV_pt1->SetName("thsBackground_grouped_wh3l_13TeV_pt1");
   thsBackground_grouped_wh3l_13TeV_pt1->SetTitle("thsBackground_grouped_wh3l_13TeV_pt1");
   
   TH1F *thsBackground_grouped_wh3l_13TeV_pt1_stack_53 = new TH1F("thsBackground_grouped_wh3l_13TeV_pt1_stack_53","thsBackground_grouped_wh3l_13TeV_pt1",25,10,200);
   thsBackground_grouped_wh3l_13TeV_pt1_stack_53->SetMinimum(-0.8340949);
   thsBackground_grouped_wh3l_13TeV_pt1_stack_53->SetMaximum(3.835562);
   thsBackground_grouped_wh3l_13TeV_pt1_stack_53->SetDirectory(0);
   thsBackground_grouped_wh3l_13TeV_pt1_stack_53->SetStats(0);
   thsBackground_grouped_wh3l_13TeV_pt1_stack_53->SetLineStyle(0);
   thsBackground_grouped_wh3l_13TeV_pt1_stack_53->SetMarkerStyle(20);
   thsBackground_grouped_wh3l_13TeV_pt1_stack_53->GetXaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_13TeV_pt1_stack_53->GetXaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_13TeV_pt1_stack_53->GetXaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_13TeV_pt1_stack_53->GetXaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_13TeV_pt1_stack_53->GetXaxis()->SetTitleOffset(0.9);
   thsBackground_grouped_wh3l_13TeV_pt1_stack_53->GetXaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_pt1_stack_53->GetYaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_13TeV_pt1_stack_53->GetYaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_13TeV_pt1_stack_53->GetYaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_13TeV_pt1_stack_53->GetYaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_13TeV_pt1_stack_53->GetYaxis()->SetTitleOffset(1.25);
   thsBackground_grouped_wh3l_13TeV_pt1_stack_53->GetYaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_pt1_stack_53->GetZaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_13TeV_pt1_stack_53->GetZaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_13TeV_pt1_stack_53->GetZaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_13TeV_pt1_stack_53->GetZaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_13TeV_pt1_stack_53->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_pt1->SetHistogram(thsBackground_grouped_wh3l_13TeV_pt1_stack_53);
   
   
   TH1D *new_histo_group_Fake_wh3l_13TeV_pt1262 = new TH1D("new_histo_group_Fake_wh3l_13TeV_pt1262","histo_Fake",25,10,200);
   new_histo_group_Fake_wh3l_13TeV_pt1262->SetBinContent(2,-0.1107373);
   new_histo_group_Fake_wh3l_13TeV_pt1262->SetBinContent(3,0.5257126);
   new_histo_group_Fake_wh3l_13TeV_pt1262->SetBinContent(4,1.692645);
   new_histo_group_Fake_wh3l_13TeV_pt1262->SetBinContent(5,1.03575);
   new_histo_group_Fake_wh3l_13TeV_pt1262->SetBinContent(6,2.330371);
   new_histo_group_Fake_wh3l_13TeV_pt1262->SetBinContent(7,-0.4402518);
   new_histo_group_Fake_wh3l_13TeV_pt1262->SetBinContent(8,1.503246);
   new_histo_group_Fake_wh3l_13TeV_pt1262->SetBinContent(9,0.9569054);
   new_histo_group_Fake_wh3l_13TeV_pt1262->SetBinContent(10,0.5991562);
   new_histo_group_Fake_wh3l_13TeV_pt1262->SetBinContent(11,0.7602637);
   new_histo_group_Fake_wh3l_13TeV_pt1262->SetBinContent(12,0.01237054);
   new_histo_group_Fake_wh3l_13TeV_pt1262->SetBinContent(13,-0.0886245);
   new_histo_group_Fake_wh3l_13TeV_pt1262->SetBinContent(14,3.916463e-05);
   new_histo_group_Fake_wh3l_13TeV_pt1262->SetBinContent(20,-0.02257761);
   new_histo_group_Fake_wh3l_13TeV_pt1262->SetBinContent(21,0.8476363);
   new_histo_group_Fake_wh3l_13TeV_pt1262->SetBinContent(23,-0.008195123);
   new_histo_group_Fake_wh3l_13TeV_pt1262->SetBinContent(25,0.1345139);
   new_histo_group_Fake_wh3l_13TeV_pt1262->SetBinError(2,0.06126937);
   new_histo_group_Fake_wh3l_13TeV_pt1262->SetBinError(3,0.5940615);
   new_histo_group_Fake_wh3l_13TeV_pt1262->SetBinError(4,0.9870663);
   new_histo_group_Fake_wh3l_13TeV_pt1262->SetBinError(5,0.8338668);
   new_histo_group_Fake_wh3l_13TeV_pt1262->SetBinError(6,1.217522);
   new_histo_group_Fake_wh3l_13TeV_pt1262->SetBinError(7,0.3938431);
   new_histo_group_Fake_wh3l_13TeV_pt1262->SetBinError(8,0.9309152);
   new_histo_group_Fake_wh3l_13TeV_pt1262->SetBinError(9,0.701622);
   new_histo_group_Fake_wh3l_13TeV_pt1262->SetBinError(10,0.4367876);
   new_histo_group_Fake_wh3l_13TeV_pt1262->SetBinError(11,0.8013833);
   new_histo_group_Fake_wh3l_13TeV_pt1262->SetBinError(12,0.01294696);
   new_histo_group_Fake_wh3l_13TeV_pt1262->SetBinError(13,0.09402247);
   new_histo_group_Fake_wh3l_13TeV_pt1262->SetBinError(14,3.916463e-05);
   new_histo_group_Fake_wh3l_13TeV_pt1262->SetBinError(20,0.02257761);
   new_histo_group_Fake_wh3l_13TeV_pt1262->SetBinError(21,0.8476363);
   new_histo_group_Fake_wh3l_13TeV_pt1262->SetBinError(23,0.008195123);
   new_histo_group_Fake_wh3l_13TeV_pt1262->SetBinError(25,0.1345139);
   new_histo_group_Fake_wh3l_13TeV_pt1262->SetEntries(109);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_13TeV_pt1262->SetFillColor(ci);
   new_histo_group_Fake_wh3l_13TeV_pt1262->SetFillStyle(3001);

   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_13TeV_pt1262->SetLineColor(ci);
   new_histo_group_Fake_wh3l_13TeV_pt1262->GetXaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_13TeV_pt1262->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_13TeV_pt1262->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_13TeV_pt1262->GetXaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_13TeV_pt1262->GetYaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_13TeV_pt1262->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_13TeV_pt1262->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_13TeV_pt1262->GetYaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_13TeV_pt1262->GetZaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_13TeV_pt1262->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_13TeV_pt1262->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_13TeV_pt1262->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_pt1->Add(new_histo_group_Fake_wh3l_13TeV_pt1,"");
   
   TH1D *new_histo_group_WW_wh3l_13TeV_pt1263 = new TH1D("new_histo_group_WW_wh3l_13TeV_pt1263","histo_WW",25,10,200);
   new_histo_group_WW_wh3l_13TeV_pt1263->SetBinContent(3,0.0161241);
   new_histo_group_WW_wh3l_13TeV_pt1263->SetBinContent(5,0.01044191);
   new_histo_group_WW_wh3l_13TeV_pt1263->SetBinContent(6,0.03235779);
   new_histo_group_WW_wh3l_13TeV_pt1263->SetBinContent(9,0.02977813);
   new_histo_group_WW_wh3l_13TeV_pt1263->SetBinError(3,0.0161241);
   new_histo_group_WW_wh3l_13TeV_pt1263->SetBinError(5,0.01044191);
   new_histo_group_WW_wh3l_13TeV_pt1263->SetBinError(6,0.02304949);
   new_histo_group_WW_wh3l_13TeV_pt1263->SetBinError(9,0.02106448);
   new_histo_group_WW_wh3l_13TeV_pt1263->SetEntries(6);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_13TeV_pt1263->SetFillColor(ci);
   new_histo_group_WW_wh3l_13TeV_pt1263->SetFillStyle(3001);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_13TeV_pt1263->SetLineColor(ci);
   new_histo_group_WW_wh3l_13TeV_pt1263->GetXaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_13TeV_pt1263->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_13TeV_pt1263->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_13TeV_pt1263->GetXaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_13TeV_pt1263->GetYaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_13TeV_pt1263->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_13TeV_pt1263->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_13TeV_pt1263->GetYaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_13TeV_pt1263->GetZaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_13TeV_pt1263->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_13TeV_pt1263->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_13TeV_pt1263->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_pt1->Add(new_histo_group_WW_wh3l_13TeV_pt1,"");
   
   TH1D *new_histo_group_VVV_wh3l_13TeV_pt1264 = new TH1D("new_histo_group_VVV_wh3l_13TeV_pt1264","histo_VVV",25,10,200);
   new_histo_group_VVV_wh3l_13TeV_pt1264->SetBinContent(4,0.0006249245);
   new_histo_group_VVV_wh3l_13TeV_pt1264->SetBinContent(5,0.0002076036);
   new_histo_group_VVV_wh3l_13TeV_pt1264->SetBinContent(7,0.0006883418);
   new_histo_group_VVV_wh3l_13TeV_pt1264->SetBinContent(8,0.0006127095);
   new_histo_group_VVV_wh3l_13TeV_pt1264->SetBinContent(9,0.0002902478);
   new_histo_group_VVV_wh3l_13TeV_pt1264->SetBinContent(11,0.0006276043);
   new_histo_group_VVV_wh3l_13TeV_pt1264->SetBinContent(12,0.0006878311);
   new_histo_group_VVV_wh3l_13TeV_pt1264->SetBinContent(13,0.000653768);
   new_histo_group_VVV_wh3l_13TeV_pt1264->SetBinContent(14,0.0006504452);
   new_histo_group_VVV_wh3l_13TeV_pt1264->SetBinContent(15,0.0007784473);
   new_histo_group_VVV_wh3l_13TeV_pt1264->SetBinContent(18,0.0006405607);
   new_histo_group_VVV_wh3l_13TeV_pt1264->SetBinContent(20,0.0006343185);
   new_histo_group_VVV_wh3l_13TeV_pt1264->SetBinContent(25,0.0006729142);
   new_histo_group_VVV_wh3l_13TeV_pt1264->SetBinContent(26,0.0005490761);
   new_histo_group_VVV_wh3l_13TeV_pt1264->SetBinError(4,0.0006249245);
   new_histo_group_VVV_wh3l_13TeV_pt1264->SetBinError(5,0.0002076036);
   new_histo_group_VVV_wh3l_13TeV_pt1264->SetBinError(7,0.0006883418);
   new_histo_group_VVV_wh3l_13TeV_pt1264->SetBinError(8,0.0006127095);
   new_histo_group_VVV_wh3l_13TeV_pt1264->SetBinError(9,0.0002902478);
   new_histo_group_VVV_wh3l_13TeV_pt1264->SetBinError(11,0.0006276043);
   new_histo_group_VVV_wh3l_13TeV_pt1264->SetBinError(12,0.0006878311);
   new_histo_group_VVV_wh3l_13TeV_pt1264->SetBinError(13,0.000653768);
   new_histo_group_VVV_wh3l_13TeV_pt1264->SetBinError(14,0.0006504452);
   new_histo_group_VVV_wh3l_13TeV_pt1264->SetBinError(15,0.0007784473);
   new_histo_group_VVV_wh3l_13TeV_pt1264->SetBinError(18,0.0006405607);
   new_histo_group_VVV_wh3l_13TeV_pt1264->SetBinError(20,0.0006343185);
   new_histo_group_VVV_wh3l_13TeV_pt1264->SetBinError(25,0.0006729142);
   new_histo_group_VVV_wh3l_13TeV_pt1264->SetBinError(26,0.0005490761);
   new_histo_group_VVV_wh3l_13TeV_pt1264->SetEntries(14);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_13TeV_pt1264->SetFillColor(ci);
   new_histo_group_VVV_wh3l_13TeV_pt1264->SetFillStyle(3001);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_13TeV_pt1264->SetLineColor(ci);
   new_histo_group_VVV_wh3l_13TeV_pt1264->GetXaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_13TeV_pt1264->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_13TeV_pt1264->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_13TeV_pt1264->GetXaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_13TeV_pt1264->GetYaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_13TeV_pt1264->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_13TeV_pt1264->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_13TeV_pt1264->GetYaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_13TeV_pt1264->GetZaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_13TeV_pt1264->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_13TeV_pt1264->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_13TeV_pt1264->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_pt1->Add(new_histo_group_VVV_wh3l_13TeV_pt1,"");
   
   TH1D *new_histo_group_Vg_wh3l_13TeV_pt1265 = new TH1D("new_histo_group_Vg_wh3l_13TeV_pt1265","histo_Vg",25,10,200);
   new_histo_group_Vg_wh3l_13TeV_pt1265->SetBinContent(2,0.1353116);
   new_histo_group_Vg_wh3l_13TeV_pt1265->SetBinContent(3,1.011405);
   new_histo_group_Vg_wh3l_13TeV_pt1265->SetBinContent(4,0.3778996);
   new_histo_group_Vg_wh3l_13TeV_pt1265->SetBinContent(5,0.7303915);
   new_histo_group_Vg_wh3l_13TeV_pt1265->SetBinContent(6,0.4114199);
   new_histo_group_Vg_wh3l_13TeV_pt1265->SetBinContent(8,0.1048186);
   new_histo_group_Vg_wh3l_13TeV_pt1265->SetBinContent(9,-0.1230777);
   new_histo_group_Vg_wh3l_13TeV_pt1265->SetBinError(2,0.1120881);
   new_histo_group_Vg_wh3l_13TeV_pt1265->SetBinError(3,0.3128352);
   new_histo_group_Vg_wh3l_13TeV_pt1265->SetBinError(4,0.2832874);
   new_histo_group_Vg_wh3l_13TeV_pt1265->SetBinError(5,0.2617258);
   new_histo_group_Vg_wh3l_13TeV_pt1265->SetBinError(6,0.1990974);
   new_histo_group_Vg_wh3l_13TeV_pt1265->SetBinError(8,0.1048186);
   new_histo_group_Vg_wh3l_13TeV_pt1265->SetBinError(9,0.1230777);
   new_histo_group_Vg_wh3l_13TeV_pt1265->SetEntries(42);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_13TeV_pt1265->SetFillColor(ci);
   new_histo_group_Vg_wh3l_13TeV_pt1265->SetFillStyle(3001);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_13TeV_pt1265->SetLineColor(ci);
   new_histo_group_Vg_wh3l_13TeV_pt1265->GetXaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_13TeV_pt1265->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_13TeV_pt1265->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_13TeV_pt1265->GetXaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_13TeV_pt1265->GetYaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_13TeV_pt1265->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_13TeV_pt1265->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_13TeV_pt1265->GetYaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_13TeV_pt1265->GetZaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_13TeV_pt1265->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_13TeV_pt1265->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_13TeV_pt1265->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_pt1->Add(new_histo_group_Vg_wh3l_13TeV_pt1,"");
   
   TH1D *new_histo_group_ZZ_wh3l_13TeV_pt1266 = new TH1D("new_histo_group_ZZ_wh3l_13TeV_pt1266","histo_ZZ",25,10,200);
   new_histo_group_ZZ_wh3l_13TeV_pt1266->SetBinContent(2,0.02640386);
   new_histo_group_ZZ_wh3l_13TeV_pt1266->SetBinContent(3,0.07747764);
   new_histo_group_ZZ_wh3l_13TeV_pt1266->SetBinContent(4,0.1369423);
   new_histo_group_ZZ_wh3l_13TeV_pt1266->SetBinContent(5,0.08272321);
   new_histo_group_ZZ_wh3l_13TeV_pt1266->SetBinContent(6,0.04248237);
   new_histo_group_ZZ_wh3l_13TeV_pt1266->SetBinContent(7,0.0427135);
   new_histo_group_ZZ_wh3l_13TeV_pt1266->SetBinContent(11,0.02856258);
   new_histo_group_ZZ_wh3l_13TeV_pt1266->SetBinContent(12,0.1261614);
   new_histo_group_ZZ_wh3l_13TeV_pt1266->SetBinContent(13,0.02711696);
   new_histo_group_ZZ_wh3l_13TeV_pt1266->SetBinContent(17,0.02088597);
   new_histo_group_ZZ_wh3l_13TeV_pt1266->SetBinContent(26,0.03513683);
   new_histo_group_ZZ_wh3l_13TeV_pt1266->SetBinError(2,0.02640386);
   new_histo_group_ZZ_wh3l_13TeV_pt1266->SetBinError(3,0.05497137);
   new_histo_group_ZZ_wh3l_13TeV_pt1266->SetBinError(4,0.0793716);
   new_histo_group_ZZ_wh3l_13TeV_pt1266->SetBinError(5,0.05856026);
   new_histo_group_ZZ_wh3l_13TeV_pt1266->SetBinError(6,0.03177358);
   new_histo_group_ZZ_wh3l_13TeV_pt1266->SetBinError(7,0.0427135);
   new_histo_group_ZZ_wh3l_13TeV_pt1266->SetBinError(11,0.02856258);
   new_histo_group_ZZ_wh3l_13TeV_pt1266->SetBinError(12,0.07449396);
   new_histo_group_ZZ_wh3l_13TeV_pt1266->SetBinError(13,0.02711696);
   new_histo_group_ZZ_wh3l_13TeV_pt1266->SetBinError(17,0.02088597);
   new_histo_group_ZZ_wh3l_13TeV_pt1266->SetBinError(26,0.03513683);
   new_histo_group_ZZ_wh3l_13TeV_pt1266->SetEntries(19);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_13TeV_pt1266->SetFillColor(ci);
   new_histo_group_ZZ_wh3l_13TeV_pt1266->SetFillStyle(3001);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_13TeV_pt1266->SetLineColor(ci);
   new_histo_group_ZZ_wh3l_13TeV_pt1266->GetXaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_13TeV_pt1266->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_13TeV_pt1266->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_13TeV_pt1266->GetXaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_13TeV_pt1266->GetYaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_13TeV_pt1266->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_13TeV_pt1266->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_13TeV_pt1266->GetYaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_13TeV_pt1266->GetZaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_13TeV_pt1266->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_13TeV_pt1266->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_13TeV_pt1266->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_pt1->Add(new_histo_group_ZZ_wh3l_13TeV_pt1,"");
   
   TH1D *new_histo_group_WZ_wh3l_13TeV_pt1267 = new TH1D("new_histo_group_WZ_wh3l_13TeV_pt1267","histo_WZ",25,10,200);
   new_histo_group_WZ_wh3l_13TeV_pt1267->SetBinContent(2,0.282506);
   new_histo_group_WZ_wh3l_13TeV_pt1267->SetBinContent(3,0.9599023);
   new_histo_group_WZ_wh3l_13TeV_pt1267->SetBinContent(4,1.094692);
   new_histo_group_WZ_wh3l_13TeV_pt1267->SetBinContent(5,1.114612);
   new_histo_group_WZ_wh3l_13TeV_pt1267->SetBinContent(6,0.7548786);
   new_histo_group_WZ_wh3l_13TeV_pt1267->SetBinContent(7,0.4858771);
   new_histo_group_WZ_wh3l_13TeV_pt1267->SetBinContent(8,0.4835574);
   new_histo_group_WZ_wh3l_13TeV_pt1267->SetBinContent(9,0.3285152);
   new_histo_group_WZ_wh3l_13TeV_pt1267->SetBinContent(10,0.3871179);
   new_histo_group_WZ_wh3l_13TeV_pt1267->SetBinContent(11,0.2176759);
   new_histo_group_WZ_wh3l_13TeV_pt1267->SetBinContent(12,0.2176796);
   new_histo_group_WZ_wh3l_13TeV_pt1267->SetBinContent(13,0.1617334);
   new_histo_group_WZ_wh3l_13TeV_pt1267->SetBinContent(14,0.1137797);
   new_histo_group_WZ_wh3l_13TeV_pt1267->SetBinContent(15,0.1059282);
   new_histo_group_WZ_wh3l_13TeV_pt1267->SetBinContent(16,0.07778721);
   new_histo_group_WZ_wh3l_13TeV_pt1267->SetBinContent(17,0.06213196);
   new_histo_group_WZ_wh3l_13TeV_pt1267->SetBinContent(18,0.03715139);
   new_histo_group_WZ_wh3l_13TeV_pt1267->SetBinContent(19,0.06523762);
   new_histo_group_WZ_wh3l_13TeV_pt1267->SetBinContent(20,0.03402953);
   new_histo_group_WZ_wh3l_13TeV_pt1267->SetBinContent(21,0.04941387);
   new_histo_group_WZ_wh3l_13TeV_pt1267->SetBinContent(22,0.03533776);
   new_histo_group_WZ_wh3l_13TeV_pt1267->SetBinContent(23,0.03131342);
   new_histo_group_WZ_wh3l_13TeV_pt1267->SetBinContent(24,0.02074515);
   new_histo_group_WZ_wh3l_13TeV_pt1267->SetBinContent(25,0.01340563);
   new_histo_group_WZ_wh3l_13TeV_pt1267->SetBinContent(26,0.2542066);
   new_histo_group_WZ_wh3l_13TeV_pt1267->SetBinError(2,0.03912176);
   new_histo_group_WZ_wh3l_13TeV_pt1267->SetBinError(3,0.07260434);
   new_histo_group_WZ_wh3l_13TeV_pt1267->SetBinError(4,0.0770789);
   new_histo_group_WZ_wh3l_13TeV_pt1267->SetBinError(5,0.0787333);
   new_histo_group_WZ_wh3l_13TeV_pt1267->SetBinError(6,0.06387738);
   new_histo_group_WZ_wh3l_13TeV_pt1267->SetBinError(7,0.0505523);
   new_histo_group_WZ_wh3l_13TeV_pt1267->SetBinError(8,0.05057825);
   new_histo_group_WZ_wh3l_13TeV_pt1267->SetBinError(9,0.04185682);
   new_histo_group_WZ_wh3l_13TeV_pt1267->SetBinError(10,0.04641507);
   new_histo_group_WZ_wh3l_13TeV_pt1267->SetBinError(11,0.03461482);
   new_histo_group_WZ_wh3l_13TeV_pt1267->SetBinError(12,0.03426544);
   new_histo_group_WZ_wh3l_13TeV_pt1267->SetBinError(13,0.03044429);
   new_histo_group_WZ_wh3l_13TeV_pt1267->SetBinError(14,0.02435267);
   new_histo_group_WZ_wh3l_13TeV_pt1267->SetBinError(15,0.02385714);
   new_histo_group_WZ_wh3l_13TeV_pt1267->SetBinError(16,0.01987128);
   new_histo_group_WZ_wh3l_13TeV_pt1267->SetBinError(17,0.01764428);
   new_histo_group_WZ_wh3l_13TeV_pt1267->SetBinError(18,0.01414478);
   new_histo_group_WZ_wh3l_13TeV_pt1267->SetBinError(19,0.01863532);
   new_histo_group_WZ_wh3l_13TeV_pt1267->SetBinError(20,0.013629);
   new_histo_group_WZ_wh3l_13TeV_pt1267->SetBinError(21,0.01661121);
   new_histo_group_WZ_wh3l_13TeV_pt1267->SetBinError(22,0.01352607);
   new_histo_group_WZ_wh3l_13TeV_pt1267->SetBinError(23,0.01351503);
   new_histo_group_WZ_wh3l_13TeV_pt1267->SetBinError(24,0.009789282);
   new_histo_group_WZ_wh3l_13TeV_pt1267->SetBinError(25,0.007171629);
   new_histo_group_WZ_wh3l_13TeV_pt1267->SetBinError(26,0.03722384);
   new_histo_group_WZ_wh3l_13TeV_pt1267->SetEntries(1516);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_13TeV_pt1267->SetFillColor(ci);
   new_histo_group_WZ_wh3l_13TeV_pt1267->SetFillStyle(3001);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_13TeV_pt1267->SetLineColor(ci);
   new_histo_group_WZ_wh3l_13TeV_pt1267->GetXaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_13TeV_pt1267->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_13TeV_pt1267->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_13TeV_pt1267->GetXaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_13TeV_pt1267->GetYaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_13TeV_pt1267->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_13TeV_pt1267->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_13TeV_pt1267->GetYaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_13TeV_pt1267->GetZaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_13TeV_pt1267->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_13TeV_pt1267->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_13TeV_pt1267->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_pt1->Add(new_histo_group_WZ_wh3l_13TeV_pt1,"");
   
   TH1D *new_histo_group_Higgs_wh3l_13TeV_pt1268 = new TH1D("new_histo_group_Higgs_wh3l_13TeV_pt1268","histo_H_htt",25,10,200);
   new_histo_group_Higgs_wh3l_13TeV_pt1268->SetBinContent(2,0.01059943);
   new_histo_group_Higgs_wh3l_13TeV_pt1268->SetBinContent(3,0.03823183);
   new_histo_group_Higgs_wh3l_13TeV_pt1268->SetBinContent(4,0.08395963);
   new_histo_group_Higgs_wh3l_13TeV_pt1268->SetBinContent(5,0.09730701);
   new_histo_group_Higgs_wh3l_13TeV_pt1268->SetBinContent(6,0.08140609);
   new_histo_group_Higgs_wh3l_13TeV_pt1268->SetBinContent(7,0.0800359);
   new_histo_group_Higgs_wh3l_13TeV_pt1268->SetBinContent(8,0.05994544);
   new_histo_group_Higgs_wh3l_13TeV_pt1268->SetBinContent(9,0.05617595);
   new_histo_group_Higgs_wh3l_13TeV_pt1268->SetBinContent(10,0.0546119);
   new_histo_group_Higgs_wh3l_13TeV_pt1268->SetBinContent(11,0.03712984);
   new_histo_group_Higgs_wh3l_13TeV_pt1268->SetBinContent(12,0.02352028);
   new_histo_group_Higgs_wh3l_13TeV_pt1268->SetBinContent(13,0.02913568);
   new_histo_group_Higgs_wh3l_13TeV_pt1268->SetBinContent(14,0.0286368);
   new_histo_group_Higgs_wh3l_13TeV_pt1268->SetBinContent(15,0.01818933);
   new_histo_group_Higgs_wh3l_13TeV_pt1268->SetBinContent(16,0.02943594);
   new_histo_group_Higgs_wh3l_13TeV_pt1268->SetBinContent(17,0.02034151);
   new_histo_group_Higgs_wh3l_13TeV_pt1268->SetBinContent(18,0.01707147);
   new_histo_group_Higgs_wh3l_13TeV_pt1268->SetBinContent(19,0.009283532);
   new_histo_group_Higgs_wh3l_13TeV_pt1268->SetBinContent(20,0.006871829);
   new_histo_group_Higgs_wh3l_13TeV_pt1268->SetBinContent(21,0.004614075);
   new_histo_group_Higgs_wh3l_13TeV_pt1268->SetBinContent(22,0.004748651);
   new_histo_group_Higgs_wh3l_13TeV_pt1268->SetBinContent(23,0.002186666);
   new_histo_group_Higgs_wh3l_13TeV_pt1268->SetBinContent(24,0.003919247);
   new_histo_group_Higgs_wh3l_13TeV_pt1268->SetBinContent(25,0.009184059);
   new_histo_group_Higgs_wh3l_13TeV_pt1268->SetBinContent(26,0.02918291);
   new_histo_group_Higgs_wh3l_13TeV_pt1268->SetBinError(2,0.003716171);
   new_histo_group_Higgs_wh3l_13TeV_pt1268->SetBinError(3,0.006058189);
   new_histo_group_Higgs_wh3l_13TeV_pt1268->SetBinError(4,0.009665289);
   new_histo_group_Higgs_wh3l_13TeV_pt1268->SetBinError(5,0.01109404);
   new_histo_group_Higgs_wh3l_13TeV_pt1268->SetBinError(6,0.009660077);
   new_histo_group_Higgs_wh3l_13TeV_pt1268->SetBinError(7,0.01005494);
   new_histo_group_Higgs_wh3l_13TeV_pt1268->SetBinError(8,0.007816468);
   new_histo_group_Higgs_wh3l_13TeV_pt1268->SetBinError(9,0.008291497);
   new_histo_group_Higgs_wh3l_13TeV_pt1268->SetBinError(10,0.008777876);
   new_histo_group_Higgs_wh3l_13TeV_pt1268->SetBinError(11,0.006680551);
   new_histo_group_Higgs_wh3l_13TeV_pt1268->SetBinError(12,0.005404135);
   new_histo_group_Higgs_wh3l_13TeV_pt1268->SetBinError(13,0.00572841);
   new_histo_group_Higgs_wh3l_13TeV_pt1268->SetBinError(14,0.005754857);
   new_histo_group_Higgs_wh3l_13TeV_pt1268->SetBinError(15,0.004017225);
   new_histo_group_Higgs_wh3l_13TeV_pt1268->SetBinError(16,0.006510399);
   new_histo_group_Higgs_wh3l_13TeV_pt1268->SetBinError(17,0.004795749);
   new_histo_group_Higgs_wh3l_13TeV_pt1268->SetBinError(18,0.0047011);
   new_histo_group_Higgs_wh3l_13TeV_pt1268->SetBinError(19,0.003174191);
   new_histo_group_Higgs_wh3l_13TeV_pt1268->SetBinError(20,0.00194044);
   new_histo_group_Higgs_wh3l_13TeV_pt1268->SetBinError(21,0.001717686);
   new_histo_group_Higgs_wh3l_13TeV_pt1268->SetBinError(22,0.001944419);
   new_histo_group_Higgs_wh3l_13TeV_pt1268->SetBinError(23,0.0009572082);
   new_histo_group_Higgs_wh3l_13TeV_pt1268->SetBinError(24,0.001810921);
   new_histo_group_Higgs_wh3l_13TeV_pt1268->SetBinError(25,0.003470913);
   new_histo_group_Higgs_wh3l_13TeV_pt1268->SetBinError(26,0.005732126);
   new_histo_group_Higgs_wh3l_13TeV_pt1268->SetEntries(1360);
   new_histo_group_Higgs_wh3l_13TeV_pt1268->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_13TeV_pt1268->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_13TeV_pt1268->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_13TeV_pt1268->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_13TeV_pt1268->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_pt1268->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_pt1268->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_13TeV_pt1268->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_13TeV_pt1268->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_pt1268->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_pt1268->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_13TeV_pt1268->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_13TeV_pt1268->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_pt1268->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_pt1268->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_pt1->Add(new_histo_group_Higgs_wh3l_13TeV_pt1,"");
   thsBackground_grouped_wh3l_13TeV_pt1->Draw("hist same");
   
   thsSignal_grouped_wh3l_13TeV_pt1 = new THStack();
   thsSignal_grouped_wh3l_13TeV_pt1->SetName("thsSignal_grouped_wh3l_13TeV_pt1");
   thsSignal_grouped_wh3l_13TeV_pt1->SetTitle("thsSignal_grouped_wh3l_13TeV_pt1");
   
   TH1F *thsSignal_grouped_wh3l_13TeV_pt1_stack_54 = new TH1F("thsSignal_grouped_wh3l_13TeV_pt1_stack_54","thsSignal_grouped_wh3l_13TeV_pt1",25,10,200);
   thsSignal_grouped_wh3l_13TeV_pt1_stack_54->SetMinimum(0);
   thsSignal_grouped_wh3l_13TeV_pt1_stack_54->SetMaximum(0.1138211);
   thsSignal_grouped_wh3l_13TeV_pt1_stack_54->SetDirectory(0);
   thsSignal_grouped_wh3l_13TeV_pt1_stack_54->SetStats(0);
   thsSignal_grouped_wh3l_13TeV_pt1_stack_54->SetLineStyle(0);
   thsSignal_grouped_wh3l_13TeV_pt1_stack_54->SetMarkerStyle(20);
   thsSignal_grouped_wh3l_13TeV_pt1_stack_54->GetXaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_13TeV_pt1_stack_54->GetXaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_13TeV_pt1_stack_54->GetXaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_13TeV_pt1_stack_54->GetXaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_13TeV_pt1_stack_54->GetXaxis()->SetTitleOffset(0.9);
   thsSignal_grouped_wh3l_13TeV_pt1_stack_54->GetXaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_13TeV_pt1_stack_54->GetYaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_13TeV_pt1_stack_54->GetYaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_13TeV_pt1_stack_54->GetYaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_13TeV_pt1_stack_54->GetYaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_13TeV_pt1_stack_54->GetYaxis()->SetTitleOffset(1.25);
   thsSignal_grouped_wh3l_13TeV_pt1_stack_54->GetYaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_13TeV_pt1_stack_54->GetZaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_13TeV_pt1_stack_54->GetZaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_13TeV_pt1_stack_54->GetZaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_13TeV_pt1_stack_54->GetZaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_13TeV_pt1_stack_54->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_13TeV_pt1->SetHistogram(thsSignal_grouped_wh3l_13TeV_pt1_stack_54);
   
   
   TH1D *new_histo_group_Higgs_wh3l_13TeV_pt1269 = new TH1D("new_histo_group_Higgs_wh3l_13TeV_pt1269","histo_H_htt",25,10,200);
   new_histo_group_Higgs_wh3l_13TeV_pt1269->SetBinContent(2,0.01059943);
   new_histo_group_Higgs_wh3l_13TeV_pt1269->SetBinContent(3,0.03823183);
   new_histo_group_Higgs_wh3l_13TeV_pt1269->SetBinContent(4,0.08395963);
   new_histo_group_Higgs_wh3l_13TeV_pt1269->SetBinContent(5,0.09730701);
   new_histo_group_Higgs_wh3l_13TeV_pt1269->SetBinContent(6,0.08140609);
   new_histo_group_Higgs_wh3l_13TeV_pt1269->SetBinContent(7,0.0800359);
   new_histo_group_Higgs_wh3l_13TeV_pt1269->SetBinContent(8,0.05994544);
   new_histo_group_Higgs_wh3l_13TeV_pt1269->SetBinContent(9,0.05617595);
   new_histo_group_Higgs_wh3l_13TeV_pt1269->SetBinContent(10,0.0546119);
   new_histo_group_Higgs_wh3l_13TeV_pt1269->SetBinContent(11,0.03712984);
   new_histo_group_Higgs_wh3l_13TeV_pt1269->SetBinContent(12,0.02352028);
   new_histo_group_Higgs_wh3l_13TeV_pt1269->SetBinContent(13,0.02913568);
   new_histo_group_Higgs_wh3l_13TeV_pt1269->SetBinContent(14,0.0286368);
   new_histo_group_Higgs_wh3l_13TeV_pt1269->SetBinContent(15,0.01818933);
   new_histo_group_Higgs_wh3l_13TeV_pt1269->SetBinContent(16,0.02943594);
   new_histo_group_Higgs_wh3l_13TeV_pt1269->SetBinContent(17,0.02034151);
   new_histo_group_Higgs_wh3l_13TeV_pt1269->SetBinContent(18,0.01707147);
   new_histo_group_Higgs_wh3l_13TeV_pt1269->SetBinContent(19,0.009283532);
   new_histo_group_Higgs_wh3l_13TeV_pt1269->SetBinContent(20,0.006871829);
   new_histo_group_Higgs_wh3l_13TeV_pt1269->SetBinContent(21,0.004614075);
   new_histo_group_Higgs_wh3l_13TeV_pt1269->SetBinContent(22,0.004748651);
   new_histo_group_Higgs_wh3l_13TeV_pt1269->SetBinContent(23,0.002186666);
   new_histo_group_Higgs_wh3l_13TeV_pt1269->SetBinContent(24,0.003919247);
   new_histo_group_Higgs_wh3l_13TeV_pt1269->SetBinContent(25,0.009184059);
   new_histo_group_Higgs_wh3l_13TeV_pt1269->SetBinContent(26,0.02918291);
   new_histo_group_Higgs_wh3l_13TeV_pt1269->SetBinError(2,0.003716171);
   new_histo_group_Higgs_wh3l_13TeV_pt1269->SetBinError(3,0.006058189);
   new_histo_group_Higgs_wh3l_13TeV_pt1269->SetBinError(4,0.009665289);
   new_histo_group_Higgs_wh3l_13TeV_pt1269->SetBinError(5,0.01109404);
   new_histo_group_Higgs_wh3l_13TeV_pt1269->SetBinError(6,0.009660077);
   new_histo_group_Higgs_wh3l_13TeV_pt1269->SetBinError(7,0.01005494);
   new_histo_group_Higgs_wh3l_13TeV_pt1269->SetBinError(8,0.007816468);
   new_histo_group_Higgs_wh3l_13TeV_pt1269->SetBinError(9,0.008291497);
   new_histo_group_Higgs_wh3l_13TeV_pt1269->SetBinError(10,0.008777876);
   new_histo_group_Higgs_wh3l_13TeV_pt1269->SetBinError(11,0.006680551);
   new_histo_group_Higgs_wh3l_13TeV_pt1269->SetBinError(12,0.005404135);
   new_histo_group_Higgs_wh3l_13TeV_pt1269->SetBinError(13,0.00572841);
   new_histo_group_Higgs_wh3l_13TeV_pt1269->SetBinError(14,0.005754857);
   new_histo_group_Higgs_wh3l_13TeV_pt1269->SetBinError(15,0.004017225);
   new_histo_group_Higgs_wh3l_13TeV_pt1269->SetBinError(16,0.006510399);
   new_histo_group_Higgs_wh3l_13TeV_pt1269->SetBinError(17,0.004795749);
   new_histo_group_Higgs_wh3l_13TeV_pt1269->SetBinError(18,0.0047011);
   new_histo_group_Higgs_wh3l_13TeV_pt1269->SetBinError(19,0.003174191);
   new_histo_group_Higgs_wh3l_13TeV_pt1269->SetBinError(20,0.00194044);
   new_histo_group_Higgs_wh3l_13TeV_pt1269->SetBinError(21,0.001717686);
   new_histo_group_Higgs_wh3l_13TeV_pt1269->SetBinError(22,0.001944419);
   new_histo_group_Higgs_wh3l_13TeV_pt1269->SetBinError(23,0.0009572082);
   new_histo_group_Higgs_wh3l_13TeV_pt1269->SetBinError(24,0.001810921);
   new_histo_group_Higgs_wh3l_13TeV_pt1269->SetBinError(25,0.003470913);
   new_histo_group_Higgs_wh3l_13TeV_pt1269->SetBinError(26,0.005732126);
   new_histo_group_Higgs_wh3l_13TeV_pt1269->SetEntries(1360);
   new_histo_group_Higgs_wh3l_13TeV_pt1269->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_13TeV_pt1269->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_13TeV_pt1269->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_13TeV_pt1269->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_13TeV_pt1269->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_pt1269->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_pt1269->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_13TeV_pt1269->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_13TeV_pt1269->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_pt1269->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_pt1269->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_13TeV_pt1269->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_13TeV_pt1269->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_pt1269->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_pt1269->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_13TeV_pt1->Add(new_histo_group_Higgs_wh3l_13TeV_pt1,"");
   thsSignal_grouped_wh3l_13TeV_pt1->Draw("hist same noclear");
   
   Double_t _fx3053[25] = {
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
   Double_t _fy3053[25] = {
   0,
   0.3334841,
   2.590622,
   3.302805,
   2.974127,
   3.57151,
   0.08902714,
   2.092235,
   1.192411,
   0.9862741,
   1.00713,
   0.3568994,
   0.1008796,
   0.1144693,
   0.1067067,
   0.07778721,
   0.08301793,
   0.03779195,
   0.06523762,
   0.01208624,
   0.8970501,
   0.03533776,
   0.0231183,
   0.02074515,
   0.1485924};
   Double_t _felx3053[25] = {
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
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
   Double_t _fely3053[25] = {
   0,
   0.2412215,
   0.9952758,
   1.515124,
   1.281962,
   1.68705,
   0.5053627,
   1.176771,
   0.9331682,
   0.5155519,
   0.8550497,
   0.1219224,
   0.1545435,
   0.02504233,
   0.02463559,
   0.01987128,
   0.03853438,
   0.01478535,
   0.01863533,
   0.03745839,
   0.9008816,
   0.01352607,
   0.02184891,
   0.009789282,
   0.1479675};
   Double_t _fehx3053[25] = {
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
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
   Double_t _fehy3053[25] = {
   0,
   0.2412215,
   1.062788,
   1.515124,
   1.281962,
   1.68705,
   0.5053627,
   1.176772,
   0.9331681,
   0.5155519,
   0.8947467,
   0.1224983,
   0.149229,
   0.02504232,
   0.02463559,
   0.01987128,
   0.03853438,
   0.01478535,
   0.01863533,
   0.03745839,
   0.9008816,
   0.01352607,
   0.02184891,
   0.009789281,
   0.1479675};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(25,_fx3053,_fy3053,_felx3053,_fehx3053,_fely3053,_fehy3053);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(12);
   grae->SetFillStyle(3004);
   grae->SetLineColor(12);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3053 = new TH1F("Graph_Graph3053","",100,0,219);
   Graph_Graph3053->SetMinimum(-0.983825);
   Graph_Graph3053->SetMaximum(5.826049);
   Graph_Graph3053->SetDirectory(0);
   Graph_Graph3053->SetStats(0);
   Graph_Graph3053->SetLineStyle(0);
   Graph_Graph3053->SetMarkerStyle(20);
   Graph_Graph3053->GetXaxis()->SetLabelFont(42);
   Graph_Graph3053->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3053->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3053->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3053->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3053->GetXaxis()->SetTitleFont(42);
   Graph_Graph3053->GetYaxis()->SetLabelFont(42);
   Graph_Graph3053->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3053->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3053->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3053->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3053->GetYaxis()->SetTitleFont(42);
   Graph_Graph3053->GetZaxis()->SetLabelFont(42);
   Graph_Graph3053->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3053->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3053->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3053->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3053);
   
   grae->Draw("2");
   
   Double_t _fx3054[25] = {
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
   Double_t _fy3054[25] = {
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
   Double_t _felx3054[25] = {
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
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
   Double_t _fely3054[25] = {
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
   Double_t _fehx3054[25] = {
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
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
   Double_t _fehy3054[25] = {
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
   grae = new TGraphAsymmErrors(25,_fx3054,_fy3054,_felx3054,_fehx3054,_fely3054,_fehy3054);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(1);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3054 = new TH1F("Graph_Graph3054","",100,0,219);
   Graph_Graph3054->SetMinimum(0);
   Graph_Graph3054->SetMaximum(1.262698);
   Graph_Graph3054->SetDirectory(0);
   Graph_Graph3054->SetStats(0);
   Graph_Graph3054->SetLineStyle(0);
   Graph_Graph3054->SetMarkerStyle(20);
   Graph_Graph3054->GetXaxis()->SetLabelFont(42);
   Graph_Graph3054->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3054->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3054->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3054->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3054->GetXaxis()->SetTitleFont(42);
   Graph_Graph3054->GetYaxis()->SetLabelFont(42);
   Graph_Graph3054->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3054->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3054->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3054->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3054->GetYaxis()->SetTitleFont(42);
   Graph_Graph3054->GetZaxis()->SetLabelFont(42);
   Graph_Graph3054->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3054->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3054->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3054->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3054);
   
   grae->Draw("p0");
   
   TLegend *leg = new TLegend(0.2,0.55,0.8,0.88,NULL,"brNDC");
   leg->SetTextFont(62);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("new_histo_group_Fake_wh3l_13TeV_pt1","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_13TeV_pt1","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_13TeV_pt1","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_13TeV_pt1","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_13TeV_pt1","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_13TeV_pt1","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_13TeV_pt1","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_13TeV_pt1","Data","EPL");
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
   entry=leg->AddEntry("new_histo_group_Fake_wh3l_13TeV_pt1","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_13TeV_pt1","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_13TeV_pt1","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_13TeV_pt1","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_13TeV_pt1","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_13TeV_pt1","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_13TeV_pt1","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_13TeV_pt1","Data","EPL");
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
   
   TH1F *hframe_copy270 = new TH1F("hframe_copy270","",1000,10,200);
   hframe_copy270->SetMinimum(0);
   hframe_copy270->SetMaximum(9.132289);
   hframe_copy270->SetDirectory(0);
   hframe_copy270->SetStats(0);
   hframe_copy270->SetLineStyle(0);
   hframe_copy270->SetMarkerStyle(20);
   hframe_copy270->GetXaxis()->SetTitle("lept1_p_{T} [GeV]");
   hframe_copy270->GetXaxis()->SetNdivisions(506);
   hframe_copy270->GetXaxis()->SetLabelFont(42);
   hframe_copy270->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy270->GetXaxis()->SetLabelSize(0.05);
   hframe_copy270->GetXaxis()->SetTitleSize(0.06);
   hframe_copy270->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy270->GetXaxis()->SetTitleFont(42);
   hframe_copy270->GetYaxis()->SetTitle("Events");
   hframe_copy270->GetYaxis()->SetLabelFont(42);
   hframe_copy270->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy270->GetYaxis()->SetLabelSize(0.05);
   hframe_copy270->GetYaxis()->SetTitleSize(0.06);
   hframe_copy270->GetYaxis()->SetTitleOffset(1.25);
   hframe_copy270->GetYaxis()->SetTitleFont(42);
   hframe_copy270->GetZaxis()->SetLabelFont(42);
   hframe_copy270->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy270->GetZaxis()->SetLabelSize(0.05);
   hframe_copy270->GetZaxis()->SetTitleSize(0.06);
   hframe_copy270->GetZaxis()->SetTitleFont(42);
   hframe_copy270->Draw("sameaxis");
   ccwh3l_13TeV_pt1->Modified();
   ccwh3l_13TeV_pt1->cd();
   ccwh3l_13TeV_pt1->SetSelected(ccwh3l_13TeV_pt1);
}
