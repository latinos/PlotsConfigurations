void c_wh3l_13TeV_pt1()
{
//=========Macro generated from canvas: ccwh3l_13TeV_pt1/cc
//=========  (Wed Jun 29 01:51:52 2016) by ROOT version6.02/13
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
   
   TH1F *hframe391 = new TH1F("hframe391","",1000,10,200);
   hframe391->SetMinimum(0);
   hframe391->SetMaximum(9.132289);
   hframe391->SetDirectory(0);
   hframe391->SetStats(0);
   hframe391->SetLineStyle(0);
   hframe391->SetMarkerStyle(20);
   hframe391->GetXaxis()->SetTitle("lept1_p_{T} [GeV]");
   hframe391->GetXaxis()->SetNdivisions(506);
   hframe391->GetXaxis()->SetLabelFont(42);
   hframe391->GetXaxis()->SetLabelOffset(0.007);
   hframe391->GetXaxis()->SetLabelSize(0.05);
   hframe391->GetXaxis()->SetTitleSize(0.06);
   hframe391->GetXaxis()->SetTitleOffset(0.9);
   hframe391->GetXaxis()->SetTitleFont(42);
   hframe391->GetYaxis()->SetTitle("Events");
   hframe391->GetYaxis()->SetLabelFont(42);
   hframe391->GetYaxis()->SetLabelOffset(0.007);
   hframe391->GetYaxis()->SetLabelSize(0.05);
   hframe391->GetYaxis()->SetTitleSize(0.06);
   hframe391->GetYaxis()->SetTitleOffset(1.25);
   hframe391->GetYaxis()->SetTitleFont(42);
   hframe391->GetZaxis()->SetLabelFont(42);
   hframe391->GetZaxis()->SetLabelOffset(0.007);
   hframe391->GetZaxis()->SetLabelSize(0.05);
   hframe391->GetZaxis()->SetTitleSize(0.06);
   hframe391->GetZaxis()->SetTitleFont(42);
   hframe391->Draw(" ");
   
   THStack *thsBackground_grouped_wh3l_13TeV_pt1 = new THStack();
   thsBackground_grouped_wh3l_13TeV_pt1->SetName("thsBackground_grouped_wh3l_13TeV_pt1");
   thsBackground_grouped_wh3l_13TeV_pt1->SetTitle("thsBackground_grouped_wh3l_13TeV_pt1");
   
   TH1F *thsBackground_grouped_wh3l_13TeV_pt1_stack_79 = new TH1F("thsBackground_grouped_wh3l_13TeV_pt1_stack_79","thsBackground_grouped_wh3l_13TeV_pt1",25,10,200);
   thsBackground_grouped_wh3l_13TeV_pt1_stack_79->SetMinimum(-0.8340949);
   thsBackground_grouped_wh3l_13TeV_pt1_stack_79->SetMaximum(3.835562);
   thsBackground_grouped_wh3l_13TeV_pt1_stack_79->SetDirectory(0);
   thsBackground_grouped_wh3l_13TeV_pt1_stack_79->SetStats(0);
   thsBackground_grouped_wh3l_13TeV_pt1_stack_79->SetLineStyle(0);
   thsBackground_grouped_wh3l_13TeV_pt1_stack_79->SetMarkerStyle(20);
   thsBackground_grouped_wh3l_13TeV_pt1_stack_79->GetXaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_13TeV_pt1_stack_79->GetXaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_13TeV_pt1_stack_79->GetXaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_13TeV_pt1_stack_79->GetXaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_13TeV_pt1_stack_79->GetXaxis()->SetTitleOffset(0.9);
   thsBackground_grouped_wh3l_13TeV_pt1_stack_79->GetXaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_pt1_stack_79->GetYaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_13TeV_pt1_stack_79->GetYaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_13TeV_pt1_stack_79->GetYaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_13TeV_pt1_stack_79->GetYaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_13TeV_pt1_stack_79->GetYaxis()->SetTitleOffset(1.25);
   thsBackground_grouped_wh3l_13TeV_pt1_stack_79->GetYaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_pt1_stack_79->GetZaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_13TeV_pt1_stack_79->GetZaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_13TeV_pt1_stack_79->GetZaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_13TeV_pt1_stack_79->GetZaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_13TeV_pt1_stack_79->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_pt1->SetHistogram(thsBackground_grouped_wh3l_13TeV_pt1_stack_79);
   
   
   TH1D *new_histo_group_Fake_wh3l_13TeV_pt1392 = new TH1D("new_histo_group_Fake_wh3l_13TeV_pt1392","histo_Fake",25,10,200);
   new_histo_group_Fake_wh3l_13TeV_pt1392->SetBinContent(2,-0.1107373);
   new_histo_group_Fake_wh3l_13TeV_pt1392->SetBinContent(3,0.5257126);
   new_histo_group_Fake_wh3l_13TeV_pt1392->SetBinContent(4,1.692645);
   new_histo_group_Fake_wh3l_13TeV_pt1392->SetBinContent(5,1.03575);
   new_histo_group_Fake_wh3l_13TeV_pt1392->SetBinContent(6,2.330371);
   new_histo_group_Fake_wh3l_13TeV_pt1392->SetBinContent(7,-0.4402518);
   new_histo_group_Fake_wh3l_13TeV_pt1392->SetBinContent(8,1.503246);
   new_histo_group_Fake_wh3l_13TeV_pt1392->SetBinContent(9,0.9569054);
   new_histo_group_Fake_wh3l_13TeV_pt1392->SetBinContent(10,0.5991562);
   new_histo_group_Fake_wh3l_13TeV_pt1392->SetBinContent(11,0.7602637);
   new_histo_group_Fake_wh3l_13TeV_pt1392->SetBinContent(12,0.01237054);
   new_histo_group_Fake_wh3l_13TeV_pt1392->SetBinContent(13,-0.0886245);
   new_histo_group_Fake_wh3l_13TeV_pt1392->SetBinContent(14,3.916463e-05);
   new_histo_group_Fake_wh3l_13TeV_pt1392->SetBinContent(20,-0.02257761);
   new_histo_group_Fake_wh3l_13TeV_pt1392->SetBinContent(21,0.8476363);
   new_histo_group_Fake_wh3l_13TeV_pt1392->SetBinContent(23,-0.008195123);
   new_histo_group_Fake_wh3l_13TeV_pt1392->SetBinContent(25,0.1345139);
   new_histo_group_Fake_wh3l_13TeV_pt1392->SetBinError(2,0.06126937);
   new_histo_group_Fake_wh3l_13TeV_pt1392->SetBinError(3,0.5940615);
   new_histo_group_Fake_wh3l_13TeV_pt1392->SetBinError(4,0.9870663);
   new_histo_group_Fake_wh3l_13TeV_pt1392->SetBinError(5,0.8338668);
   new_histo_group_Fake_wh3l_13TeV_pt1392->SetBinError(6,1.217522);
   new_histo_group_Fake_wh3l_13TeV_pt1392->SetBinError(7,0.3938431);
   new_histo_group_Fake_wh3l_13TeV_pt1392->SetBinError(8,0.9309152);
   new_histo_group_Fake_wh3l_13TeV_pt1392->SetBinError(9,0.701622);
   new_histo_group_Fake_wh3l_13TeV_pt1392->SetBinError(10,0.4367876);
   new_histo_group_Fake_wh3l_13TeV_pt1392->SetBinError(11,0.8013833);
   new_histo_group_Fake_wh3l_13TeV_pt1392->SetBinError(12,0.01294696);
   new_histo_group_Fake_wh3l_13TeV_pt1392->SetBinError(13,0.09402247);
   new_histo_group_Fake_wh3l_13TeV_pt1392->SetBinError(14,3.916463e-05);
   new_histo_group_Fake_wh3l_13TeV_pt1392->SetBinError(20,0.02257761);
   new_histo_group_Fake_wh3l_13TeV_pt1392->SetBinError(21,0.8476363);
   new_histo_group_Fake_wh3l_13TeV_pt1392->SetBinError(23,0.008195123);
   new_histo_group_Fake_wh3l_13TeV_pt1392->SetBinError(25,0.1345139);
   new_histo_group_Fake_wh3l_13TeV_pt1392->SetEntries(109);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_13TeV_pt1392->SetFillColor(ci);
   new_histo_group_Fake_wh3l_13TeV_pt1392->SetFillStyle(3001);

   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_13TeV_pt1392->SetLineColor(ci);
   new_histo_group_Fake_wh3l_13TeV_pt1392->GetXaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_13TeV_pt1392->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_13TeV_pt1392->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_13TeV_pt1392->GetXaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_13TeV_pt1392->GetYaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_13TeV_pt1392->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_13TeV_pt1392->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_13TeV_pt1392->GetYaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_13TeV_pt1392->GetZaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_13TeV_pt1392->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_13TeV_pt1392->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_13TeV_pt1392->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_pt1->Add(new_histo_group_Fake_wh3l_13TeV_pt1,"");
   
   TH1D *new_histo_group_WW_wh3l_13TeV_pt1393 = new TH1D("new_histo_group_WW_wh3l_13TeV_pt1393","histo_WW",25,10,200);
   new_histo_group_WW_wh3l_13TeV_pt1393->SetBinContent(3,0.0161241);
   new_histo_group_WW_wh3l_13TeV_pt1393->SetBinContent(5,0.01044191);
   new_histo_group_WW_wh3l_13TeV_pt1393->SetBinContent(6,0.03235779);
   new_histo_group_WW_wh3l_13TeV_pt1393->SetBinContent(9,0.02977813);
   new_histo_group_WW_wh3l_13TeV_pt1393->SetBinError(3,0.0161241);
   new_histo_group_WW_wh3l_13TeV_pt1393->SetBinError(5,0.01044191);
   new_histo_group_WW_wh3l_13TeV_pt1393->SetBinError(6,0.02304949);
   new_histo_group_WW_wh3l_13TeV_pt1393->SetBinError(9,0.02106448);
   new_histo_group_WW_wh3l_13TeV_pt1393->SetEntries(6);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_13TeV_pt1393->SetFillColor(ci);
   new_histo_group_WW_wh3l_13TeV_pt1393->SetFillStyle(3001);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_13TeV_pt1393->SetLineColor(ci);
   new_histo_group_WW_wh3l_13TeV_pt1393->GetXaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_13TeV_pt1393->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_13TeV_pt1393->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_13TeV_pt1393->GetXaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_13TeV_pt1393->GetYaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_13TeV_pt1393->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_13TeV_pt1393->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_13TeV_pt1393->GetYaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_13TeV_pt1393->GetZaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_13TeV_pt1393->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_13TeV_pt1393->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_13TeV_pt1393->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_pt1->Add(new_histo_group_WW_wh3l_13TeV_pt1,"");
   
   TH1D *new_histo_group_VVV_wh3l_13TeV_pt1394 = new TH1D("new_histo_group_VVV_wh3l_13TeV_pt1394","histo_VVV",25,10,200);
   new_histo_group_VVV_wh3l_13TeV_pt1394->SetBinContent(4,0.0006249245);
   new_histo_group_VVV_wh3l_13TeV_pt1394->SetBinContent(5,0.0002076036);
   new_histo_group_VVV_wh3l_13TeV_pt1394->SetBinContent(7,0.0006883418);
   new_histo_group_VVV_wh3l_13TeV_pt1394->SetBinContent(8,0.0006127095);
   new_histo_group_VVV_wh3l_13TeV_pt1394->SetBinContent(9,0.0002902478);
   new_histo_group_VVV_wh3l_13TeV_pt1394->SetBinContent(11,0.0006276043);
   new_histo_group_VVV_wh3l_13TeV_pt1394->SetBinContent(12,0.0006878311);
   new_histo_group_VVV_wh3l_13TeV_pt1394->SetBinContent(13,0.000653768);
   new_histo_group_VVV_wh3l_13TeV_pt1394->SetBinContent(14,0.0006504452);
   new_histo_group_VVV_wh3l_13TeV_pt1394->SetBinContent(15,0.0007784473);
   new_histo_group_VVV_wh3l_13TeV_pt1394->SetBinContent(18,0.0006405607);
   new_histo_group_VVV_wh3l_13TeV_pt1394->SetBinContent(20,0.0006343185);
   new_histo_group_VVV_wh3l_13TeV_pt1394->SetBinContent(25,0.0006729142);
   new_histo_group_VVV_wh3l_13TeV_pt1394->SetBinContent(26,0.0005490761);
   new_histo_group_VVV_wh3l_13TeV_pt1394->SetBinError(4,0.0006249245);
   new_histo_group_VVV_wh3l_13TeV_pt1394->SetBinError(5,0.0002076036);
   new_histo_group_VVV_wh3l_13TeV_pt1394->SetBinError(7,0.0006883418);
   new_histo_group_VVV_wh3l_13TeV_pt1394->SetBinError(8,0.0006127095);
   new_histo_group_VVV_wh3l_13TeV_pt1394->SetBinError(9,0.0002902478);
   new_histo_group_VVV_wh3l_13TeV_pt1394->SetBinError(11,0.0006276043);
   new_histo_group_VVV_wh3l_13TeV_pt1394->SetBinError(12,0.0006878311);
   new_histo_group_VVV_wh3l_13TeV_pt1394->SetBinError(13,0.000653768);
   new_histo_group_VVV_wh3l_13TeV_pt1394->SetBinError(14,0.0006504452);
   new_histo_group_VVV_wh3l_13TeV_pt1394->SetBinError(15,0.0007784473);
   new_histo_group_VVV_wh3l_13TeV_pt1394->SetBinError(18,0.0006405607);
   new_histo_group_VVV_wh3l_13TeV_pt1394->SetBinError(20,0.0006343185);
   new_histo_group_VVV_wh3l_13TeV_pt1394->SetBinError(25,0.0006729142);
   new_histo_group_VVV_wh3l_13TeV_pt1394->SetBinError(26,0.0005490761);
   new_histo_group_VVV_wh3l_13TeV_pt1394->SetEntries(14);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_13TeV_pt1394->SetFillColor(ci);
   new_histo_group_VVV_wh3l_13TeV_pt1394->SetFillStyle(3001);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_13TeV_pt1394->SetLineColor(ci);
   new_histo_group_VVV_wh3l_13TeV_pt1394->GetXaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_13TeV_pt1394->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_13TeV_pt1394->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_13TeV_pt1394->GetXaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_13TeV_pt1394->GetYaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_13TeV_pt1394->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_13TeV_pt1394->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_13TeV_pt1394->GetYaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_13TeV_pt1394->GetZaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_13TeV_pt1394->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_13TeV_pt1394->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_13TeV_pt1394->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_pt1->Add(new_histo_group_VVV_wh3l_13TeV_pt1,"");
   
   TH1D *new_histo_group_Vg_wh3l_13TeV_pt1395 = new TH1D("new_histo_group_Vg_wh3l_13TeV_pt1395","histo_Vg",25,10,200);
   new_histo_group_Vg_wh3l_13TeV_pt1395->SetBinContent(2,0.1353116);
   new_histo_group_Vg_wh3l_13TeV_pt1395->SetBinContent(3,1.011405);
   new_histo_group_Vg_wh3l_13TeV_pt1395->SetBinContent(4,0.3778996);
   new_histo_group_Vg_wh3l_13TeV_pt1395->SetBinContent(5,0.7303915);
   new_histo_group_Vg_wh3l_13TeV_pt1395->SetBinContent(6,0.4114199);
   new_histo_group_Vg_wh3l_13TeV_pt1395->SetBinContent(8,0.1048186);
   new_histo_group_Vg_wh3l_13TeV_pt1395->SetBinContent(9,-0.1230777);
   new_histo_group_Vg_wh3l_13TeV_pt1395->SetBinError(2,0.1120881);
   new_histo_group_Vg_wh3l_13TeV_pt1395->SetBinError(3,0.3128352);
   new_histo_group_Vg_wh3l_13TeV_pt1395->SetBinError(4,0.2832874);
   new_histo_group_Vg_wh3l_13TeV_pt1395->SetBinError(5,0.2617258);
   new_histo_group_Vg_wh3l_13TeV_pt1395->SetBinError(6,0.1990974);
   new_histo_group_Vg_wh3l_13TeV_pt1395->SetBinError(8,0.1048186);
   new_histo_group_Vg_wh3l_13TeV_pt1395->SetBinError(9,0.1230777);
   new_histo_group_Vg_wh3l_13TeV_pt1395->SetEntries(42);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_13TeV_pt1395->SetFillColor(ci);
   new_histo_group_Vg_wh3l_13TeV_pt1395->SetFillStyle(3001);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_13TeV_pt1395->SetLineColor(ci);
   new_histo_group_Vg_wh3l_13TeV_pt1395->GetXaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_13TeV_pt1395->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_13TeV_pt1395->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_13TeV_pt1395->GetXaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_13TeV_pt1395->GetYaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_13TeV_pt1395->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_13TeV_pt1395->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_13TeV_pt1395->GetYaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_13TeV_pt1395->GetZaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_13TeV_pt1395->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_13TeV_pt1395->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_13TeV_pt1395->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_pt1->Add(new_histo_group_Vg_wh3l_13TeV_pt1,"");
   
   TH1D *new_histo_group_ZZ_wh3l_13TeV_pt1396 = new TH1D("new_histo_group_ZZ_wh3l_13TeV_pt1396","histo_ZZ",25,10,200);
   new_histo_group_ZZ_wh3l_13TeV_pt1396->SetBinContent(2,0.02640386);
   new_histo_group_ZZ_wh3l_13TeV_pt1396->SetBinContent(3,0.07747764);
   new_histo_group_ZZ_wh3l_13TeV_pt1396->SetBinContent(4,0.1369423);
   new_histo_group_ZZ_wh3l_13TeV_pt1396->SetBinContent(5,0.08272321);
   new_histo_group_ZZ_wh3l_13TeV_pt1396->SetBinContent(6,0.04248237);
   new_histo_group_ZZ_wh3l_13TeV_pt1396->SetBinContent(7,0.0427135);
   new_histo_group_ZZ_wh3l_13TeV_pt1396->SetBinContent(11,0.02856258);
   new_histo_group_ZZ_wh3l_13TeV_pt1396->SetBinContent(12,0.1261614);
   new_histo_group_ZZ_wh3l_13TeV_pt1396->SetBinContent(13,0.02711696);
   new_histo_group_ZZ_wh3l_13TeV_pt1396->SetBinContent(17,0.02088597);
   new_histo_group_ZZ_wh3l_13TeV_pt1396->SetBinContent(26,0.03513683);
   new_histo_group_ZZ_wh3l_13TeV_pt1396->SetBinError(2,0.02640386);
   new_histo_group_ZZ_wh3l_13TeV_pt1396->SetBinError(3,0.05497137);
   new_histo_group_ZZ_wh3l_13TeV_pt1396->SetBinError(4,0.0793716);
   new_histo_group_ZZ_wh3l_13TeV_pt1396->SetBinError(5,0.05856026);
   new_histo_group_ZZ_wh3l_13TeV_pt1396->SetBinError(6,0.03177358);
   new_histo_group_ZZ_wh3l_13TeV_pt1396->SetBinError(7,0.0427135);
   new_histo_group_ZZ_wh3l_13TeV_pt1396->SetBinError(11,0.02856258);
   new_histo_group_ZZ_wh3l_13TeV_pt1396->SetBinError(12,0.07449396);
   new_histo_group_ZZ_wh3l_13TeV_pt1396->SetBinError(13,0.02711696);
   new_histo_group_ZZ_wh3l_13TeV_pt1396->SetBinError(17,0.02088597);
   new_histo_group_ZZ_wh3l_13TeV_pt1396->SetBinError(26,0.03513683);
   new_histo_group_ZZ_wh3l_13TeV_pt1396->SetEntries(19);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_13TeV_pt1396->SetFillColor(ci);
   new_histo_group_ZZ_wh3l_13TeV_pt1396->SetFillStyle(3001);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_13TeV_pt1396->SetLineColor(ci);
   new_histo_group_ZZ_wh3l_13TeV_pt1396->GetXaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_13TeV_pt1396->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_13TeV_pt1396->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_13TeV_pt1396->GetXaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_13TeV_pt1396->GetYaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_13TeV_pt1396->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_13TeV_pt1396->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_13TeV_pt1396->GetYaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_13TeV_pt1396->GetZaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_13TeV_pt1396->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_13TeV_pt1396->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_13TeV_pt1396->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_pt1->Add(new_histo_group_ZZ_wh3l_13TeV_pt1,"");
   
   TH1D *new_histo_group_WZ_wh3l_13TeV_pt1397 = new TH1D("new_histo_group_WZ_wh3l_13TeV_pt1397","histo_WZ",25,10,200);
   new_histo_group_WZ_wh3l_13TeV_pt1397->SetBinContent(2,0.282506);
   new_histo_group_WZ_wh3l_13TeV_pt1397->SetBinContent(3,0.9599023);
   new_histo_group_WZ_wh3l_13TeV_pt1397->SetBinContent(4,1.094692);
   new_histo_group_WZ_wh3l_13TeV_pt1397->SetBinContent(5,1.114612);
   new_histo_group_WZ_wh3l_13TeV_pt1397->SetBinContent(6,0.7548786);
   new_histo_group_WZ_wh3l_13TeV_pt1397->SetBinContent(7,0.4858771);
   new_histo_group_WZ_wh3l_13TeV_pt1397->SetBinContent(8,0.4835574);
   new_histo_group_WZ_wh3l_13TeV_pt1397->SetBinContent(9,0.3285152);
   new_histo_group_WZ_wh3l_13TeV_pt1397->SetBinContent(10,0.3871179);
   new_histo_group_WZ_wh3l_13TeV_pt1397->SetBinContent(11,0.2176759);
   new_histo_group_WZ_wh3l_13TeV_pt1397->SetBinContent(12,0.2176796);
   new_histo_group_WZ_wh3l_13TeV_pt1397->SetBinContent(13,0.1617334);
   new_histo_group_WZ_wh3l_13TeV_pt1397->SetBinContent(14,0.1137797);
   new_histo_group_WZ_wh3l_13TeV_pt1397->SetBinContent(15,0.1059282);
   new_histo_group_WZ_wh3l_13TeV_pt1397->SetBinContent(16,0.07778721);
   new_histo_group_WZ_wh3l_13TeV_pt1397->SetBinContent(17,0.06213196);
   new_histo_group_WZ_wh3l_13TeV_pt1397->SetBinContent(18,0.03715139);
   new_histo_group_WZ_wh3l_13TeV_pt1397->SetBinContent(19,0.06523762);
   new_histo_group_WZ_wh3l_13TeV_pt1397->SetBinContent(20,0.03402953);
   new_histo_group_WZ_wh3l_13TeV_pt1397->SetBinContent(21,0.04941387);
   new_histo_group_WZ_wh3l_13TeV_pt1397->SetBinContent(22,0.03533776);
   new_histo_group_WZ_wh3l_13TeV_pt1397->SetBinContent(23,0.03131342);
   new_histo_group_WZ_wh3l_13TeV_pt1397->SetBinContent(24,0.02074515);
   new_histo_group_WZ_wh3l_13TeV_pt1397->SetBinContent(25,0.01340563);
   new_histo_group_WZ_wh3l_13TeV_pt1397->SetBinContent(26,0.2542066);
   new_histo_group_WZ_wh3l_13TeV_pt1397->SetBinError(2,0.03912176);
   new_histo_group_WZ_wh3l_13TeV_pt1397->SetBinError(3,0.07260434);
   new_histo_group_WZ_wh3l_13TeV_pt1397->SetBinError(4,0.0770789);
   new_histo_group_WZ_wh3l_13TeV_pt1397->SetBinError(5,0.0787333);
   new_histo_group_WZ_wh3l_13TeV_pt1397->SetBinError(6,0.06387738);
   new_histo_group_WZ_wh3l_13TeV_pt1397->SetBinError(7,0.0505523);
   new_histo_group_WZ_wh3l_13TeV_pt1397->SetBinError(8,0.05057825);
   new_histo_group_WZ_wh3l_13TeV_pt1397->SetBinError(9,0.04185682);
   new_histo_group_WZ_wh3l_13TeV_pt1397->SetBinError(10,0.04641507);
   new_histo_group_WZ_wh3l_13TeV_pt1397->SetBinError(11,0.03461482);
   new_histo_group_WZ_wh3l_13TeV_pt1397->SetBinError(12,0.03426544);
   new_histo_group_WZ_wh3l_13TeV_pt1397->SetBinError(13,0.03044429);
   new_histo_group_WZ_wh3l_13TeV_pt1397->SetBinError(14,0.02435267);
   new_histo_group_WZ_wh3l_13TeV_pt1397->SetBinError(15,0.02385714);
   new_histo_group_WZ_wh3l_13TeV_pt1397->SetBinError(16,0.01987128);
   new_histo_group_WZ_wh3l_13TeV_pt1397->SetBinError(17,0.01764428);
   new_histo_group_WZ_wh3l_13TeV_pt1397->SetBinError(18,0.01414478);
   new_histo_group_WZ_wh3l_13TeV_pt1397->SetBinError(19,0.01863532);
   new_histo_group_WZ_wh3l_13TeV_pt1397->SetBinError(20,0.013629);
   new_histo_group_WZ_wh3l_13TeV_pt1397->SetBinError(21,0.01661121);
   new_histo_group_WZ_wh3l_13TeV_pt1397->SetBinError(22,0.01352607);
   new_histo_group_WZ_wh3l_13TeV_pt1397->SetBinError(23,0.01351503);
   new_histo_group_WZ_wh3l_13TeV_pt1397->SetBinError(24,0.009789282);
   new_histo_group_WZ_wh3l_13TeV_pt1397->SetBinError(25,0.007171629);
   new_histo_group_WZ_wh3l_13TeV_pt1397->SetBinError(26,0.03722384);
   new_histo_group_WZ_wh3l_13TeV_pt1397->SetEntries(1516);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_13TeV_pt1397->SetFillColor(ci);
   new_histo_group_WZ_wh3l_13TeV_pt1397->SetFillStyle(3001);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_13TeV_pt1397->SetLineColor(ci);
   new_histo_group_WZ_wh3l_13TeV_pt1397->GetXaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_13TeV_pt1397->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_13TeV_pt1397->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_13TeV_pt1397->GetXaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_13TeV_pt1397->GetYaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_13TeV_pt1397->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_13TeV_pt1397->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_13TeV_pt1397->GetYaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_13TeV_pt1397->GetZaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_13TeV_pt1397->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_13TeV_pt1397->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_13TeV_pt1397->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_pt1->Add(new_histo_group_WZ_wh3l_13TeV_pt1,"");
   
   TH1D *new_histo_group_Higgs_wh3l_13TeV_pt1398 = new TH1D("new_histo_group_Higgs_wh3l_13TeV_pt1398","histo_H_htt",25,10,200);
   new_histo_group_Higgs_wh3l_13TeV_pt1398->SetBinContent(2,0.01059943);
   new_histo_group_Higgs_wh3l_13TeV_pt1398->SetBinContent(3,0.03823183);
   new_histo_group_Higgs_wh3l_13TeV_pt1398->SetBinContent(4,0.08395963);
   new_histo_group_Higgs_wh3l_13TeV_pt1398->SetBinContent(5,0.09730701);
   new_histo_group_Higgs_wh3l_13TeV_pt1398->SetBinContent(6,0.08140609);
   new_histo_group_Higgs_wh3l_13TeV_pt1398->SetBinContent(7,0.0800359);
   new_histo_group_Higgs_wh3l_13TeV_pt1398->SetBinContent(8,0.05994544);
   new_histo_group_Higgs_wh3l_13TeV_pt1398->SetBinContent(9,0.05617595);
   new_histo_group_Higgs_wh3l_13TeV_pt1398->SetBinContent(10,0.0546119);
   new_histo_group_Higgs_wh3l_13TeV_pt1398->SetBinContent(11,0.03712984);
   new_histo_group_Higgs_wh3l_13TeV_pt1398->SetBinContent(12,0.02352028);
   new_histo_group_Higgs_wh3l_13TeV_pt1398->SetBinContent(13,0.02913568);
   new_histo_group_Higgs_wh3l_13TeV_pt1398->SetBinContent(14,0.0286368);
   new_histo_group_Higgs_wh3l_13TeV_pt1398->SetBinContent(15,0.01818933);
   new_histo_group_Higgs_wh3l_13TeV_pt1398->SetBinContent(16,0.02943594);
   new_histo_group_Higgs_wh3l_13TeV_pt1398->SetBinContent(17,0.02034151);
   new_histo_group_Higgs_wh3l_13TeV_pt1398->SetBinContent(18,0.01707147);
   new_histo_group_Higgs_wh3l_13TeV_pt1398->SetBinContent(19,0.009283532);
   new_histo_group_Higgs_wh3l_13TeV_pt1398->SetBinContent(20,0.006871829);
   new_histo_group_Higgs_wh3l_13TeV_pt1398->SetBinContent(21,0.004614075);
   new_histo_group_Higgs_wh3l_13TeV_pt1398->SetBinContent(22,0.004748651);
   new_histo_group_Higgs_wh3l_13TeV_pt1398->SetBinContent(23,0.002186666);
   new_histo_group_Higgs_wh3l_13TeV_pt1398->SetBinContent(24,0.003919247);
   new_histo_group_Higgs_wh3l_13TeV_pt1398->SetBinContent(25,0.009184059);
   new_histo_group_Higgs_wh3l_13TeV_pt1398->SetBinContent(26,0.02918291);
   new_histo_group_Higgs_wh3l_13TeV_pt1398->SetBinError(2,0.003716171);
   new_histo_group_Higgs_wh3l_13TeV_pt1398->SetBinError(3,0.006058189);
   new_histo_group_Higgs_wh3l_13TeV_pt1398->SetBinError(4,0.009665289);
   new_histo_group_Higgs_wh3l_13TeV_pt1398->SetBinError(5,0.01109404);
   new_histo_group_Higgs_wh3l_13TeV_pt1398->SetBinError(6,0.009660077);
   new_histo_group_Higgs_wh3l_13TeV_pt1398->SetBinError(7,0.01005494);
   new_histo_group_Higgs_wh3l_13TeV_pt1398->SetBinError(8,0.007816468);
   new_histo_group_Higgs_wh3l_13TeV_pt1398->SetBinError(9,0.008291497);
   new_histo_group_Higgs_wh3l_13TeV_pt1398->SetBinError(10,0.008777876);
   new_histo_group_Higgs_wh3l_13TeV_pt1398->SetBinError(11,0.006680551);
   new_histo_group_Higgs_wh3l_13TeV_pt1398->SetBinError(12,0.005404135);
   new_histo_group_Higgs_wh3l_13TeV_pt1398->SetBinError(13,0.00572841);
   new_histo_group_Higgs_wh3l_13TeV_pt1398->SetBinError(14,0.005754857);
   new_histo_group_Higgs_wh3l_13TeV_pt1398->SetBinError(15,0.004017225);
   new_histo_group_Higgs_wh3l_13TeV_pt1398->SetBinError(16,0.006510399);
   new_histo_group_Higgs_wh3l_13TeV_pt1398->SetBinError(17,0.004795749);
   new_histo_group_Higgs_wh3l_13TeV_pt1398->SetBinError(18,0.0047011);
   new_histo_group_Higgs_wh3l_13TeV_pt1398->SetBinError(19,0.003174191);
   new_histo_group_Higgs_wh3l_13TeV_pt1398->SetBinError(20,0.00194044);
   new_histo_group_Higgs_wh3l_13TeV_pt1398->SetBinError(21,0.001717686);
   new_histo_group_Higgs_wh3l_13TeV_pt1398->SetBinError(22,0.001944419);
   new_histo_group_Higgs_wh3l_13TeV_pt1398->SetBinError(23,0.0009572082);
   new_histo_group_Higgs_wh3l_13TeV_pt1398->SetBinError(24,0.001810921);
   new_histo_group_Higgs_wh3l_13TeV_pt1398->SetBinError(25,0.003470913);
   new_histo_group_Higgs_wh3l_13TeV_pt1398->SetBinError(26,0.005732126);
   new_histo_group_Higgs_wh3l_13TeV_pt1398->SetEntries(1360);
   new_histo_group_Higgs_wh3l_13TeV_pt1398->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_13TeV_pt1398->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_13TeV_pt1398->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_13TeV_pt1398->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_13TeV_pt1398->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_pt1398->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_pt1398->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_13TeV_pt1398->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_13TeV_pt1398->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_pt1398->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_pt1398->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_13TeV_pt1398->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_13TeV_pt1398->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_pt1398->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_pt1398->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_pt1->Add(new_histo_group_Higgs_wh3l_13TeV_pt1,"");
   thsBackground_grouped_wh3l_13TeV_pt1->Draw("hist same");
   
   thsSignal_grouped_wh3l_13TeV_pt1 = new THStack();
   thsSignal_grouped_wh3l_13TeV_pt1->SetName("thsSignal_grouped_wh3l_13TeV_pt1");
   thsSignal_grouped_wh3l_13TeV_pt1->SetTitle("thsSignal_grouped_wh3l_13TeV_pt1");
   
   TH1F *thsSignal_grouped_wh3l_13TeV_pt1_stack_80 = new TH1F("thsSignal_grouped_wh3l_13TeV_pt1_stack_80","thsSignal_grouped_wh3l_13TeV_pt1",25,10,200);
   thsSignal_grouped_wh3l_13TeV_pt1_stack_80->SetMinimum(0);
   thsSignal_grouped_wh3l_13TeV_pt1_stack_80->SetMaximum(0.1138211);
   thsSignal_grouped_wh3l_13TeV_pt1_stack_80->SetDirectory(0);
   thsSignal_grouped_wh3l_13TeV_pt1_stack_80->SetStats(0);
   thsSignal_grouped_wh3l_13TeV_pt1_stack_80->SetLineStyle(0);
   thsSignal_grouped_wh3l_13TeV_pt1_stack_80->SetMarkerStyle(20);
   thsSignal_grouped_wh3l_13TeV_pt1_stack_80->GetXaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_13TeV_pt1_stack_80->GetXaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_13TeV_pt1_stack_80->GetXaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_13TeV_pt1_stack_80->GetXaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_13TeV_pt1_stack_80->GetXaxis()->SetTitleOffset(0.9);
   thsSignal_grouped_wh3l_13TeV_pt1_stack_80->GetXaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_13TeV_pt1_stack_80->GetYaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_13TeV_pt1_stack_80->GetYaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_13TeV_pt1_stack_80->GetYaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_13TeV_pt1_stack_80->GetYaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_13TeV_pt1_stack_80->GetYaxis()->SetTitleOffset(1.25);
   thsSignal_grouped_wh3l_13TeV_pt1_stack_80->GetYaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_13TeV_pt1_stack_80->GetZaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_13TeV_pt1_stack_80->GetZaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_13TeV_pt1_stack_80->GetZaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_13TeV_pt1_stack_80->GetZaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_13TeV_pt1_stack_80->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_13TeV_pt1->SetHistogram(thsSignal_grouped_wh3l_13TeV_pt1_stack_80);
   
   
   TH1D *new_histo_group_Higgs_wh3l_13TeV_pt1399 = new TH1D("new_histo_group_Higgs_wh3l_13TeV_pt1399","histo_H_htt",25,10,200);
   new_histo_group_Higgs_wh3l_13TeV_pt1399->SetBinContent(2,0.01059943);
   new_histo_group_Higgs_wh3l_13TeV_pt1399->SetBinContent(3,0.03823183);
   new_histo_group_Higgs_wh3l_13TeV_pt1399->SetBinContent(4,0.08395963);
   new_histo_group_Higgs_wh3l_13TeV_pt1399->SetBinContent(5,0.09730701);
   new_histo_group_Higgs_wh3l_13TeV_pt1399->SetBinContent(6,0.08140609);
   new_histo_group_Higgs_wh3l_13TeV_pt1399->SetBinContent(7,0.0800359);
   new_histo_group_Higgs_wh3l_13TeV_pt1399->SetBinContent(8,0.05994544);
   new_histo_group_Higgs_wh3l_13TeV_pt1399->SetBinContent(9,0.05617595);
   new_histo_group_Higgs_wh3l_13TeV_pt1399->SetBinContent(10,0.0546119);
   new_histo_group_Higgs_wh3l_13TeV_pt1399->SetBinContent(11,0.03712984);
   new_histo_group_Higgs_wh3l_13TeV_pt1399->SetBinContent(12,0.02352028);
   new_histo_group_Higgs_wh3l_13TeV_pt1399->SetBinContent(13,0.02913568);
   new_histo_group_Higgs_wh3l_13TeV_pt1399->SetBinContent(14,0.0286368);
   new_histo_group_Higgs_wh3l_13TeV_pt1399->SetBinContent(15,0.01818933);
   new_histo_group_Higgs_wh3l_13TeV_pt1399->SetBinContent(16,0.02943594);
   new_histo_group_Higgs_wh3l_13TeV_pt1399->SetBinContent(17,0.02034151);
   new_histo_group_Higgs_wh3l_13TeV_pt1399->SetBinContent(18,0.01707147);
   new_histo_group_Higgs_wh3l_13TeV_pt1399->SetBinContent(19,0.009283532);
   new_histo_group_Higgs_wh3l_13TeV_pt1399->SetBinContent(20,0.006871829);
   new_histo_group_Higgs_wh3l_13TeV_pt1399->SetBinContent(21,0.004614075);
   new_histo_group_Higgs_wh3l_13TeV_pt1399->SetBinContent(22,0.004748651);
   new_histo_group_Higgs_wh3l_13TeV_pt1399->SetBinContent(23,0.002186666);
   new_histo_group_Higgs_wh3l_13TeV_pt1399->SetBinContent(24,0.003919247);
   new_histo_group_Higgs_wh3l_13TeV_pt1399->SetBinContent(25,0.009184059);
   new_histo_group_Higgs_wh3l_13TeV_pt1399->SetBinContent(26,0.02918291);
   new_histo_group_Higgs_wh3l_13TeV_pt1399->SetBinError(2,0.003716171);
   new_histo_group_Higgs_wh3l_13TeV_pt1399->SetBinError(3,0.006058189);
   new_histo_group_Higgs_wh3l_13TeV_pt1399->SetBinError(4,0.009665289);
   new_histo_group_Higgs_wh3l_13TeV_pt1399->SetBinError(5,0.01109404);
   new_histo_group_Higgs_wh3l_13TeV_pt1399->SetBinError(6,0.009660077);
   new_histo_group_Higgs_wh3l_13TeV_pt1399->SetBinError(7,0.01005494);
   new_histo_group_Higgs_wh3l_13TeV_pt1399->SetBinError(8,0.007816468);
   new_histo_group_Higgs_wh3l_13TeV_pt1399->SetBinError(9,0.008291497);
   new_histo_group_Higgs_wh3l_13TeV_pt1399->SetBinError(10,0.008777876);
   new_histo_group_Higgs_wh3l_13TeV_pt1399->SetBinError(11,0.006680551);
   new_histo_group_Higgs_wh3l_13TeV_pt1399->SetBinError(12,0.005404135);
   new_histo_group_Higgs_wh3l_13TeV_pt1399->SetBinError(13,0.00572841);
   new_histo_group_Higgs_wh3l_13TeV_pt1399->SetBinError(14,0.005754857);
   new_histo_group_Higgs_wh3l_13TeV_pt1399->SetBinError(15,0.004017225);
   new_histo_group_Higgs_wh3l_13TeV_pt1399->SetBinError(16,0.006510399);
   new_histo_group_Higgs_wh3l_13TeV_pt1399->SetBinError(17,0.004795749);
   new_histo_group_Higgs_wh3l_13TeV_pt1399->SetBinError(18,0.0047011);
   new_histo_group_Higgs_wh3l_13TeV_pt1399->SetBinError(19,0.003174191);
   new_histo_group_Higgs_wh3l_13TeV_pt1399->SetBinError(20,0.00194044);
   new_histo_group_Higgs_wh3l_13TeV_pt1399->SetBinError(21,0.001717686);
   new_histo_group_Higgs_wh3l_13TeV_pt1399->SetBinError(22,0.001944419);
   new_histo_group_Higgs_wh3l_13TeV_pt1399->SetBinError(23,0.0009572082);
   new_histo_group_Higgs_wh3l_13TeV_pt1399->SetBinError(24,0.001810921);
   new_histo_group_Higgs_wh3l_13TeV_pt1399->SetBinError(25,0.003470913);
   new_histo_group_Higgs_wh3l_13TeV_pt1399->SetBinError(26,0.005732126);
   new_histo_group_Higgs_wh3l_13TeV_pt1399->SetEntries(1360);
   new_histo_group_Higgs_wh3l_13TeV_pt1399->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_13TeV_pt1399->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_13TeV_pt1399->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_13TeV_pt1399->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_13TeV_pt1399->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_pt1399->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_pt1399->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_13TeV_pt1399->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_13TeV_pt1399->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_pt1399->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_pt1399->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_13TeV_pt1399->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_13TeV_pt1399->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_pt1399->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_pt1399->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_13TeV_pt1->Add(new_histo_group_Higgs_wh3l_13TeV_pt1,"");
   thsSignal_grouped_wh3l_13TeV_pt1->Draw("hist same noclear");
   
   Double_t _fx3079[25] = {
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
   Double_t _fy3079[25] = {
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
   Double_t _felx3079[25] = {
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
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
   Double_t _fely3079[25] = {
   0,
   0.2444077,
   1.003872,
   1.547117,
   1.297598,
   1.739399,
   0.511876,
   1.207766,
   0.9490078,
   0.5268794,
   0.8659818,
   0.1225109,
   0.1556854,
   0.02545957,
   0.0252756,
   0.02014616,
   0.03861472,
   0.01487254,
   0.01896732,
   0.03768884,
   0.9137519,
   0.01356813,
   0.02192429,
   0.009794788,
   0.1499431};
   Double_t _fehx3079[25] = {
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
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
   Double_t _fehy3079[25] = {
   0,
   0.2443243,
   1.070653,
   1.546936,
   1.297584,
   1.739323,
   0.5118552,
   1.207763,
   0.9490031,
   0.5268699,
   0.9051998,
   0.1231011,
   0.1503988,
   0.02542739,
   0.02511655,
   0.02008901,
   0.03861191,
   0.01487907,
   0.01883489,
   0.03768922,
   0.9137515,
   0.01354445,
   0.02192184,
   0.009795323,
   0.1499432};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(25,_fx3079,_fy3079,_felx3079,_fehx3079,_fely3079,_fehy3079);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(12);
   grae->SetFillStyle(3004);
   grae->SetLineColor(12);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3079 = new TH1F("Graph_Graph3079","",100,0,219);
   Graph_Graph3079->SetMinimum(-0.996217);
   Graph_Graph3079->SetMaximum(5.884201);
   Graph_Graph3079->SetDirectory(0);
   Graph_Graph3079->SetStats(0);
   Graph_Graph3079->SetLineStyle(0);
   Graph_Graph3079->SetMarkerStyle(20);
   Graph_Graph3079->GetXaxis()->SetLabelFont(42);
   Graph_Graph3079->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3079->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3079->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3079->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3079->GetXaxis()->SetTitleFont(42);
   Graph_Graph3079->GetYaxis()->SetLabelFont(42);
   Graph_Graph3079->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3079->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3079->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3079->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3079->GetYaxis()->SetTitleFont(42);
   Graph_Graph3079->GetZaxis()->SetLabelFont(42);
   Graph_Graph3079->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3079->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3079->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3079->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3079);
   
   grae->Draw("2");
   
   Double_t _fx3080[25] = {
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
   Double_t _fy3080[25] = {
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
   Double_t _felx3080[25] = {
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
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
   Double_t _fely3080[25] = {
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
   Double_t _fehx3080[25] = {
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
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
   Double_t _fehy3080[25] = {
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
   grae = new TGraphAsymmErrors(25,_fx3080,_fy3080,_felx3080,_fehx3080,_fely3080,_fehy3080);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(1);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3080 = new TH1F("Graph_Graph3080","",100,0,219);
   Graph_Graph3080->SetMinimum(0);
   Graph_Graph3080->SetMaximum(1.262698);
   Graph_Graph3080->SetDirectory(0);
   Graph_Graph3080->SetStats(0);
   Graph_Graph3080->SetLineStyle(0);
   Graph_Graph3080->SetMarkerStyle(20);
   Graph_Graph3080->GetXaxis()->SetLabelFont(42);
   Graph_Graph3080->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3080->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3080->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3080->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3080->GetXaxis()->SetTitleFont(42);
   Graph_Graph3080->GetYaxis()->SetLabelFont(42);
   Graph_Graph3080->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3080->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3080->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3080->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3080->GetYaxis()->SetTitleFont(42);
   Graph_Graph3080->GetZaxis()->SetLabelFont(42);
   Graph_Graph3080->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3080->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3080->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3080->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3080);
   
   grae->Draw("p0");
   
   TLegend *leg = new TLegend(0.2,0.7,0.8,0.9,NULL,"brNDC");
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
   
   leg = new TLegend(0.2,0.7,0.8,0.9,NULL,"brNDC");
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
   
   TH1F *hframe_copy400 = new TH1F("hframe_copy400","",1000,10,200);
   hframe_copy400->SetMinimum(0);
   hframe_copy400->SetMaximum(9.132289);
   hframe_copy400->SetDirectory(0);
   hframe_copy400->SetStats(0);
   hframe_copy400->SetLineStyle(0);
   hframe_copy400->SetMarkerStyle(20);
   hframe_copy400->GetXaxis()->SetTitle("lept1_p_{T} [GeV]");
   hframe_copy400->GetXaxis()->SetNdivisions(506);
   hframe_copy400->GetXaxis()->SetLabelFont(42);
   hframe_copy400->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy400->GetXaxis()->SetLabelSize(0.05);
   hframe_copy400->GetXaxis()->SetTitleSize(0.06);
   hframe_copy400->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy400->GetXaxis()->SetTitleFont(42);
   hframe_copy400->GetYaxis()->SetTitle("Events");
   hframe_copy400->GetYaxis()->SetLabelFont(42);
   hframe_copy400->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy400->GetYaxis()->SetLabelSize(0.05);
   hframe_copy400->GetYaxis()->SetTitleSize(0.06);
   hframe_copy400->GetYaxis()->SetTitleOffset(1.25);
   hframe_copy400->GetYaxis()->SetTitleFont(42);
   hframe_copy400->GetZaxis()->SetLabelFont(42);
   hframe_copy400->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy400->GetZaxis()->SetLabelSize(0.05);
   hframe_copy400->GetZaxis()->SetTitleSize(0.06);
   hframe_copy400->GetZaxis()->SetTitleFont(42);
   hframe_copy400->Draw("sameaxis");
   ccwh3l_13TeV_pt1->Modified();
   ccwh3l_13TeV_pt1->cd();
   ccwh3l_13TeV_pt1->SetSelected(ccwh3l_13TeV_pt1);
}
