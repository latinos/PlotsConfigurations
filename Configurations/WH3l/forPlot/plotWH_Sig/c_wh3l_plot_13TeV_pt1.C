void c_wh3l_plot_13TeV_pt1()
{
//=========Macro generated from canvas: ccwh3l_plot_13TeV_pt1/cc
//=========  (Wed Jun 29 01:51:41 2016) by ROOT version6.02/13
   TCanvas *ccwh3l_plot_13TeV_pt1 = new TCanvas("ccwh3l_plot_13TeV_pt1", "cc",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   ccwh3l_plot_13TeV_pt1->SetHighLightColor(2);
   ccwh3l_plot_13TeV_pt1->Range(-28,-1.450195,209.5,9.70515);
   ccwh3l_plot_13TeV_pt1->SetFillColor(0);
   ccwh3l_plot_13TeV_pt1->SetBorderMode(0);
   ccwh3l_plot_13TeV_pt1->SetBorderSize(2);
   ccwh3l_plot_13TeV_pt1->SetTickx(1);
   ccwh3l_plot_13TeV_pt1->SetTicky(1);
   ccwh3l_plot_13TeV_pt1->SetLeftMargin(0.16);
   ccwh3l_plot_13TeV_pt1->SetRightMargin(0.04);
   ccwh3l_plot_13TeV_pt1->SetTopMargin(0.05);
   ccwh3l_plot_13TeV_pt1->SetBottomMargin(0.13);
   ccwh3l_plot_13TeV_pt1->SetFrameFillStyle(0);
   ccwh3l_plot_13TeV_pt1->SetFrameBorderMode(0);
   ccwh3l_plot_13TeV_pt1->SetFrameFillStyle(0);
   ccwh3l_plot_13TeV_pt1->SetFrameBorderMode(0);
   
   TH1F *hframe191 = new TH1F("hframe191","",1000,10,200);
   hframe191->SetMinimum(0);
   hframe191->SetMaximum(9.147383);
   hframe191->SetDirectory(0);
   hframe191->SetStats(0);
   hframe191->SetLineStyle(0);
   hframe191->SetMarkerStyle(20);
   hframe191->GetXaxis()->SetTitle("lept1_p_{T} [GeV]");
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
   
   THStack *thsBackground_grouped_wh3l_plot_13TeV_pt1 = new THStack();
   thsBackground_grouped_wh3l_plot_13TeV_pt1->SetName("thsBackground_grouped_wh3l_plot_13TeV_pt1");
   thsBackground_grouped_wh3l_plot_13TeV_pt1->SetTitle("thsBackground_grouped_wh3l_plot_13TeV_pt1");
   
   TH1F *thsBackground_grouped_wh3l_plot_13TeV_pt1_stack_39 = new TH1F("thsBackground_grouped_wh3l_plot_13TeV_pt1_stack_39","thsBackground_grouped_wh3l_plot_13TeV_pt1",25,10,200);
   thsBackground_grouped_wh3l_plot_13TeV_pt1_stack_39->SetMinimum(-0.8340949);
   thsBackground_grouped_wh3l_plot_13TeV_pt1_stack_39->SetMaximum(3.841901);
   thsBackground_grouped_wh3l_plot_13TeV_pt1_stack_39->SetDirectory(0);
   thsBackground_grouped_wh3l_plot_13TeV_pt1_stack_39->SetStats(0);
   thsBackground_grouped_wh3l_plot_13TeV_pt1_stack_39->SetLineStyle(0);
   thsBackground_grouped_wh3l_plot_13TeV_pt1_stack_39->SetMarkerStyle(20);
   thsBackground_grouped_wh3l_plot_13TeV_pt1_stack_39->GetXaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_plot_13TeV_pt1_stack_39->GetXaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_plot_13TeV_pt1_stack_39->GetXaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_plot_13TeV_pt1_stack_39->GetXaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_plot_13TeV_pt1_stack_39->GetXaxis()->SetTitleOffset(0.9);
   thsBackground_grouped_wh3l_plot_13TeV_pt1_stack_39->GetXaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_plot_13TeV_pt1_stack_39->GetYaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_plot_13TeV_pt1_stack_39->GetYaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_plot_13TeV_pt1_stack_39->GetYaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_plot_13TeV_pt1_stack_39->GetYaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_plot_13TeV_pt1_stack_39->GetYaxis()->SetTitleOffset(1.25);
   thsBackground_grouped_wh3l_plot_13TeV_pt1_stack_39->GetYaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_plot_13TeV_pt1_stack_39->GetZaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_plot_13TeV_pt1_stack_39->GetZaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_plot_13TeV_pt1_stack_39->GetZaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_plot_13TeV_pt1_stack_39->GetZaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_plot_13TeV_pt1_stack_39->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_plot_13TeV_pt1->SetHistogram(thsBackground_grouped_wh3l_plot_13TeV_pt1_stack_39);
   
   
   TH1D *new_histo_group_Fake_wh3l_plot_13TeV_pt1192 = new TH1D("new_histo_group_Fake_wh3l_plot_13TeV_pt1192","histo_Fake",25,10,200);
   new_histo_group_Fake_wh3l_plot_13TeV_pt1192->SetBinContent(2,-0.1107373);
   new_histo_group_Fake_wh3l_plot_13TeV_pt1192->SetBinContent(3,0.5257126);
   new_histo_group_Fake_wh3l_plot_13TeV_pt1192->SetBinContent(4,1.692645);
   new_histo_group_Fake_wh3l_plot_13TeV_pt1192->SetBinContent(5,1.03575);
   new_histo_group_Fake_wh3l_plot_13TeV_pt1192->SetBinContent(6,2.295767);
   new_histo_group_Fake_wh3l_plot_13TeV_pt1192->SetBinContent(7,-0.4402518);
   new_histo_group_Fake_wh3l_plot_13TeV_pt1192->SetBinContent(8,1.503246);
   new_histo_group_Fake_wh3l_plot_13TeV_pt1192->SetBinContent(9,1.238235);
   new_histo_group_Fake_wh3l_plot_13TeV_pt1192->SetBinContent(10,0.5991562);
   new_histo_group_Fake_wh3l_plot_13TeV_pt1192->SetBinContent(11,0.7220002);
   new_histo_group_Fake_wh3l_plot_13TeV_pt1192->SetBinContent(12,0.3237906);
   new_histo_group_Fake_wh3l_plot_13TeV_pt1192->SetBinContent(13,-0.0886245);
   new_histo_group_Fake_wh3l_plot_13TeV_pt1192->SetBinContent(14,0.3563831);
   new_histo_group_Fake_wh3l_plot_13TeV_pt1192->SetBinContent(15,0.01024054);
   new_histo_group_Fake_wh3l_plot_13TeV_pt1192->SetBinContent(17,-0.0007969784);
   new_histo_group_Fake_wh3l_plot_13TeV_pt1192->SetBinContent(20,-0.02257761);
   new_histo_group_Fake_wh3l_plot_13TeV_pt1192->SetBinContent(21,0.8476363);
   new_histo_group_Fake_wh3l_plot_13TeV_pt1192->SetBinContent(23,-0.008195123);
   new_histo_group_Fake_wh3l_plot_13TeV_pt1192->SetBinContent(24,-0.01470217);
   new_histo_group_Fake_wh3l_plot_13TeV_pt1192->SetBinContent(25,0.1345139);
   new_histo_group_Fake_wh3l_plot_13TeV_pt1192->SetBinContent(26,-0.004633672);
   new_histo_group_Fake_wh3l_plot_13TeV_pt1192->SetBinError(2,0.06126937);
   new_histo_group_Fake_wh3l_plot_13TeV_pt1192->SetBinError(3,0.5940615);
   new_histo_group_Fake_wh3l_plot_13TeV_pt1192->SetBinError(4,0.9870663);
   new_histo_group_Fake_wh3l_plot_13TeV_pt1192->SetBinError(5,0.8338668);
   new_histo_group_Fake_wh3l_plot_13TeV_pt1192->SetBinError(6,1.218014);
   new_histo_group_Fake_wh3l_plot_13TeV_pt1192->SetBinError(7,0.3938431);
   new_histo_group_Fake_wh3l_plot_13TeV_pt1192->SetBinError(8,0.9309152);
   new_histo_group_Fake_wh3l_plot_13TeV_pt1192->SetBinError(9,0.755923);
   new_histo_group_Fake_wh3l_plot_13TeV_pt1192->SetBinError(10,0.4367876);
   new_histo_group_Fake_wh3l_plot_13TeV_pt1192->SetBinError(11,0.8022963);
   new_histo_group_Fake_wh3l_plot_13TeV_pt1192->SetBinError(12,0.3116891);
   new_histo_group_Fake_wh3l_plot_13TeV_pt1192->SetBinError(13,0.09402247);
   new_histo_group_Fake_wh3l_plot_13TeV_pt1192->SetBinError(14,0.356344);
   new_histo_group_Fake_wh3l_plot_13TeV_pt1192->SetBinError(15,0.01024054);
   new_histo_group_Fake_wh3l_plot_13TeV_pt1192->SetBinError(17,0.0007969784);
   new_histo_group_Fake_wh3l_plot_13TeV_pt1192->SetBinError(20,0.02257761);
   new_histo_group_Fake_wh3l_plot_13TeV_pt1192->SetBinError(21,0.8476363);
   new_histo_group_Fake_wh3l_plot_13TeV_pt1192->SetBinError(23,0.008195123);
   new_histo_group_Fake_wh3l_plot_13TeV_pt1192->SetBinError(24,0.01470217);
   new_histo_group_Fake_wh3l_plot_13TeV_pt1192->SetBinError(25,0.1345139);
   new_histo_group_Fake_wh3l_plot_13TeV_pt1192->SetBinError(26,0.004633672);
   new_histo_group_Fake_wh3l_plot_13TeV_pt1192->SetEntries(118);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_plot_13TeV_pt1192->SetFillColor(ci);
   new_histo_group_Fake_wh3l_plot_13TeV_pt1192->SetFillStyle(3001);

   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_plot_13TeV_pt1192->SetLineColor(ci);
   new_histo_group_Fake_wh3l_plot_13TeV_pt1192->GetXaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_plot_13TeV_pt1192->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_plot_13TeV_pt1192->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_plot_13TeV_pt1192->GetXaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_plot_13TeV_pt1192->GetYaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_plot_13TeV_pt1192->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_plot_13TeV_pt1192->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_plot_13TeV_pt1192->GetYaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_plot_13TeV_pt1192->GetZaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_plot_13TeV_pt1192->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_plot_13TeV_pt1192->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_plot_13TeV_pt1192->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_plot_13TeV_pt1->Add(new_histo_group_Fake_wh3l_plot_13TeV_pt1,"");
   
   TH1D *new_histo_group_WW_wh3l_plot_13TeV_pt1193 = new TH1D("new_histo_group_WW_wh3l_plot_13TeV_pt1193","histo_WW",25,10,200);
   new_histo_group_WW_wh3l_plot_13TeV_pt1193->SetBinContent(3,0.0161241);
   new_histo_group_WW_wh3l_plot_13TeV_pt1193->SetBinContent(5,0.01044191);
   new_histo_group_WW_wh3l_plot_13TeV_pt1193->SetBinContent(6,0.03235779);
   new_histo_group_WW_wh3l_plot_13TeV_pt1193->SetBinContent(9,0.02977813);
   new_histo_group_WW_wh3l_plot_13TeV_pt1193->SetBinError(3,0.0161241);
   new_histo_group_WW_wh3l_plot_13TeV_pt1193->SetBinError(5,0.01044191);
   new_histo_group_WW_wh3l_plot_13TeV_pt1193->SetBinError(6,0.02304949);
   new_histo_group_WW_wh3l_plot_13TeV_pt1193->SetBinError(9,0.02106448);
   new_histo_group_WW_wh3l_plot_13TeV_pt1193->SetEntries(6);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_plot_13TeV_pt1193->SetFillColor(ci);
   new_histo_group_WW_wh3l_plot_13TeV_pt1193->SetFillStyle(3001);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_plot_13TeV_pt1193->SetLineColor(ci);
   new_histo_group_WW_wh3l_plot_13TeV_pt1193->GetXaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_plot_13TeV_pt1193->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_plot_13TeV_pt1193->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_plot_13TeV_pt1193->GetXaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_plot_13TeV_pt1193->GetYaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_plot_13TeV_pt1193->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_plot_13TeV_pt1193->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_plot_13TeV_pt1193->GetYaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_plot_13TeV_pt1193->GetZaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_plot_13TeV_pt1193->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_plot_13TeV_pt1193->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_plot_13TeV_pt1193->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_plot_13TeV_pt1->Add(new_histo_group_WW_wh3l_plot_13TeV_pt1,"");
   
   TH1D *new_histo_group_VVV_wh3l_plot_13TeV_pt1194 = new TH1D("new_histo_group_VVV_wh3l_plot_13TeV_pt1194","histo_VVV",25,10,200);
   new_histo_group_VVV_wh3l_plot_13TeV_pt1194->SetBinContent(4,0.0006249245);
   new_histo_group_VVV_wh3l_plot_13TeV_pt1194->SetBinContent(5,0.0002076036);
   new_histo_group_VVV_wh3l_plot_13TeV_pt1194->SetBinContent(7,0.0006883418);
   new_histo_group_VVV_wh3l_plot_13TeV_pt1194->SetBinContent(8,0.001250725);
   new_histo_group_VVV_wh3l_plot_13TeV_pt1194->SetBinContent(9,0.0002902478);
   new_histo_group_VVV_wh3l_plot_13TeV_pt1194->SetBinContent(10,0.0006836765);
   new_histo_group_VVV_wh3l_plot_13TeV_pt1194->SetBinContent(11,0.001138909);
   new_histo_group_VVV_wh3l_plot_13TeV_pt1194->SetBinContent(12,0.001261525);
   new_histo_group_VVV_wh3l_plot_13TeV_pt1194->SetBinContent(13,0.001870683);
   new_histo_group_VVV_wh3l_plot_13TeV_pt1194->SetBinContent(14,0.0006504452);
   new_histo_group_VVV_wh3l_plot_13TeV_pt1194->SetBinContent(15,0.001310777);
   new_histo_group_VVV_wh3l_plot_13TeV_pt1194->SetBinContent(18,0.0006405607);
   new_histo_group_VVV_wh3l_plot_13TeV_pt1194->SetBinContent(20,0.0006343185);
   new_histo_group_VVV_wh3l_plot_13TeV_pt1194->SetBinContent(23,0.0005170208);
   new_histo_group_VVV_wh3l_plot_13TeV_pt1194->SetBinContent(25,0.0006729142);
   new_histo_group_VVV_wh3l_plot_13TeV_pt1194->SetBinContent(26,0.001077991);
   new_histo_group_VVV_wh3l_plot_13TeV_pt1194->SetBinError(4,0.0006249245);
   new_histo_group_VVV_wh3l_plot_13TeV_pt1194->SetBinError(5,0.0002076036);
   new_histo_group_VVV_wh3l_plot_13TeV_pt1194->SetBinError(7,0.0006883418);
   new_histo_group_VVV_wh3l_plot_13TeV_pt1194->SetBinError(8,0.0008845773);
   new_histo_group_VVV_wh3l_plot_13TeV_pt1194->SetBinError(9,0.0002902478);
   new_histo_group_VVV_wh3l_plot_13TeV_pt1194->SetBinError(10,0.0006836765);
   new_histo_group_VVV_wh3l_plot_13TeV_pt1194->SetBinError(11,0.0008095185);
   new_histo_group_VVV_wh3l_plot_13TeV_pt1194->SetBinError(12,0.0008203178);
   new_histo_group_VVV_wh3l_plot_13TeV_pt1194->SetBinError(13,0.0009940715);
   new_histo_group_VVV_wh3l_plot_13TeV_pt1194->SetBinError(14,0.0006504452);
   new_histo_group_VVV_wh3l_plot_13TeV_pt1194->SetBinError(15,0.0009430562);
   new_histo_group_VVV_wh3l_plot_13TeV_pt1194->SetBinError(18,0.0006405607);
   new_histo_group_VVV_wh3l_plot_13TeV_pt1194->SetBinError(20,0.0006343185);
   new_histo_group_VVV_wh3l_plot_13TeV_pt1194->SetBinError(23,0.0005170208);
   new_histo_group_VVV_wh3l_plot_13TeV_pt1194->SetBinError(25,0.0006729142);
   new_histo_group_VVV_wh3l_plot_13TeV_pt1194->SetBinError(26,0.0007623883);
   new_histo_group_VVV_wh3l_plot_13TeV_pt1194->SetEntries(25);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_plot_13TeV_pt1194->SetFillColor(ci);
   new_histo_group_VVV_wh3l_plot_13TeV_pt1194->SetFillStyle(3001);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_plot_13TeV_pt1194->SetLineColor(ci);
   new_histo_group_VVV_wh3l_plot_13TeV_pt1194->GetXaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_plot_13TeV_pt1194->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_plot_13TeV_pt1194->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_plot_13TeV_pt1194->GetXaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_plot_13TeV_pt1194->GetYaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_plot_13TeV_pt1194->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_plot_13TeV_pt1194->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_plot_13TeV_pt1194->GetYaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_plot_13TeV_pt1194->GetZaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_plot_13TeV_pt1194->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_plot_13TeV_pt1194->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_plot_13TeV_pt1194->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_plot_13TeV_pt1->Add(new_histo_group_VVV_wh3l_plot_13TeV_pt1,"");
   
   TH1D *new_histo_group_Vg_wh3l_plot_13TeV_pt1195 = new TH1D("new_histo_group_Vg_wh3l_plot_13TeV_pt1195","histo_Vg",25,10,200);
   new_histo_group_Vg_wh3l_plot_13TeV_pt1195->SetBinContent(2,0.1353116);
   new_histo_group_Vg_wh3l_plot_13TeV_pt1195->SetBinContent(3,1.011405);
   new_histo_group_Vg_wh3l_plot_13TeV_pt1195->SetBinContent(4,0.3778996);
   new_histo_group_Vg_wh3l_plot_13TeV_pt1195->SetBinContent(5,0.7303915);
   new_histo_group_Vg_wh3l_plot_13TeV_pt1195->SetBinContent(6,0.4114199);
   new_histo_group_Vg_wh3l_plot_13TeV_pt1195->SetBinContent(8,0.1048186);
   new_histo_group_Vg_wh3l_plot_13TeV_pt1195->SetBinContent(9,-0.1230777);
   new_histo_group_Vg_wh3l_plot_13TeV_pt1195->SetBinContent(19,0.1058488);
   new_histo_group_Vg_wh3l_plot_13TeV_pt1195->SetBinError(2,0.1120881);
   new_histo_group_Vg_wh3l_plot_13TeV_pt1195->SetBinError(3,0.3128352);
   new_histo_group_Vg_wh3l_plot_13TeV_pt1195->SetBinError(4,0.2832874);
   new_histo_group_Vg_wh3l_plot_13TeV_pt1195->SetBinError(5,0.2617258);
   new_histo_group_Vg_wh3l_plot_13TeV_pt1195->SetBinError(6,0.1990974);
   new_histo_group_Vg_wh3l_plot_13TeV_pt1195->SetBinError(8,0.1048186);
   new_histo_group_Vg_wh3l_plot_13TeV_pt1195->SetBinError(9,0.1230777);
   new_histo_group_Vg_wh3l_plot_13TeV_pt1195->SetBinError(19,0.1058488);
   new_histo_group_Vg_wh3l_plot_13TeV_pt1195->SetEntries(43);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_plot_13TeV_pt1195->SetFillColor(ci);
   new_histo_group_Vg_wh3l_plot_13TeV_pt1195->SetFillStyle(3001);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_plot_13TeV_pt1195->SetLineColor(ci);
   new_histo_group_Vg_wh3l_plot_13TeV_pt1195->GetXaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_plot_13TeV_pt1195->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_plot_13TeV_pt1195->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_plot_13TeV_pt1195->GetXaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_plot_13TeV_pt1195->GetYaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_plot_13TeV_pt1195->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_plot_13TeV_pt1195->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_plot_13TeV_pt1195->GetYaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_plot_13TeV_pt1195->GetZaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_plot_13TeV_pt1195->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_plot_13TeV_pt1195->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_plot_13TeV_pt1195->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_plot_13TeV_pt1->Add(new_histo_group_Vg_wh3l_plot_13TeV_pt1,"");
   
   TH1D *new_histo_group_ZZ_wh3l_plot_13TeV_pt1196 = new TH1D("new_histo_group_ZZ_wh3l_plot_13TeV_pt1196","histo_ZZ",25,10,200);
   new_histo_group_ZZ_wh3l_plot_13TeV_pt1196->SetBinContent(2,0.02640386);
   new_histo_group_ZZ_wh3l_plot_13TeV_pt1196->SetBinContent(3,0.07747764);
   new_histo_group_ZZ_wh3l_plot_13TeV_pt1196->SetBinContent(4,0.1369423);
   new_histo_group_ZZ_wh3l_plot_13TeV_pt1196->SetBinContent(5,0.08272321);
   new_histo_group_ZZ_wh3l_plot_13TeV_pt1196->SetBinContent(6,0.04248237);
   new_histo_group_ZZ_wh3l_plot_13TeV_pt1196->SetBinContent(7,0.0427135);
   new_histo_group_ZZ_wh3l_plot_13TeV_pt1196->SetBinContent(11,0.02856258);
   new_histo_group_ZZ_wh3l_plot_13TeV_pt1196->SetBinContent(12,0.1261614);
   new_histo_group_ZZ_wh3l_plot_13TeV_pt1196->SetBinContent(13,0.02711696);
   new_histo_group_ZZ_wh3l_plot_13TeV_pt1196->SetBinContent(17,0.02088597);
   new_histo_group_ZZ_wh3l_plot_13TeV_pt1196->SetBinContent(26,0.03513683);
   new_histo_group_ZZ_wh3l_plot_13TeV_pt1196->SetBinError(2,0.02640386);
   new_histo_group_ZZ_wh3l_plot_13TeV_pt1196->SetBinError(3,0.05497137);
   new_histo_group_ZZ_wh3l_plot_13TeV_pt1196->SetBinError(4,0.0793716);
   new_histo_group_ZZ_wh3l_plot_13TeV_pt1196->SetBinError(5,0.05856026);
   new_histo_group_ZZ_wh3l_plot_13TeV_pt1196->SetBinError(6,0.03177358);
   new_histo_group_ZZ_wh3l_plot_13TeV_pt1196->SetBinError(7,0.0427135);
   new_histo_group_ZZ_wh3l_plot_13TeV_pt1196->SetBinError(11,0.02856258);
   new_histo_group_ZZ_wh3l_plot_13TeV_pt1196->SetBinError(12,0.07449396);
   new_histo_group_ZZ_wh3l_plot_13TeV_pt1196->SetBinError(13,0.02711696);
   new_histo_group_ZZ_wh3l_plot_13TeV_pt1196->SetBinError(17,0.02088597);
   new_histo_group_ZZ_wh3l_plot_13TeV_pt1196->SetBinError(26,0.03513683);
   new_histo_group_ZZ_wh3l_plot_13TeV_pt1196->SetEntries(19);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_plot_13TeV_pt1196->SetFillColor(ci);
   new_histo_group_ZZ_wh3l_plot_13TeV_pt1196->SetFillStyle(3001);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_plot_13TeV_pt1196->SetLineColor(ci);
   new_histo_group_ZZ_wh3l_plot_13TeV_pt1196->GetXaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_plot_13TeV_pt1196->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_plot_13TeV_pt1196->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_plot_13TeV_pt1196->GetXaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_plot_13TeV_pt1196->GetYaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_plot_13TeV_pt1196->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_plot_13TeV_pt1196->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_plot_13TeV_pt1196->GetYaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_plot_13TeV_pt1196->GetZaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_plot_13TeV_pt1196->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_plot_13TeV_pt1196->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_plot_13TeV_pt1196->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_plot_13TeV_pt1->Add(new_histo_group_ZZ_wh3l_plot_13TeV_pt1,"");
   
   TH1D *new_histo_group_WZ_wh3l_plot_13TeV_pt1197 = new TH1D("new_histo_group_WZ_wh3l_plot_13TeV_pt1197","histo_WZ",25,10,200);
   new_histo_group_WZ_wh3l_plot_13TeV_pt1197->SetBinContent(2,0.282506);
   new_histo_group_WZ_wh3l_plot_13TeV_pt1197->SetBinContent(3,0.9599023);
   new_histo_group_WZ_wh3l_plot_13TeV_pt1197->SetBinContent(4,1.111442);
   new_histo_group_WZ_wh3l_plot_13TeV_pt1197->SetBinContent(5,1.122566);
   new_histo_group_WZ_wh3l_plot_13TeV_pt1197->SetBinContent(6,0.7955203);
   new_histo_group_WZ_wh3l_plot_13TeV_pt1197->SetBinContent(7,0.5721154);
   new_histo_group_WZ_wh3l_plot_13TeV_pt1197->SetBinContent(8,0.5783943);
   new_histo_group_WZ_wh3l_plot_13TeV_pt1197->SetBinContent(9,0.454657);
   new_histo_group_WZ_wh3l_plot_13TeV_pt1197->SetBinContent(10,0.4976814);
   new_histo_group_WZ_wh3l_plot_13TeV_pt1197->SetBinContent(11,0.3650687);
   new_histo_group_WZ_wh3l_plot_13TeV_pt1197->SetBinContent(12,0.3664478);
   new_histo_group_WZ_wh3l_plot_13TeV_pt1197->SetBinContent(13,0.296531);
   new_histo_group_WZ_wh3l_plot_13TeV_pt1197->SetBinContent(14,0.2089796);
   new_histo_group_WZ_wh3l_plot_13TeV_pt1197->SetBinContent(15,0.2120877);
   new_histo_group_WZ_wh3l_plot_13TeV_pt1197->SetBinContent(16,0.1758163);
   new_histo_group_WZ_wh3l_plot_13TeV_pt1197->SetBinContent(17,0.1309778);
   new_histo_group_WZ_wh3l_plot_13TeV_pt1197->SetBinContent(18,0.08960684);
   new_histo_group_WZ_wh3l_plot_13TeV_pt1197->SetBinContent(19,0.1244886);
   new_histo_group_WZ_wh3l_plot_13TeV_pt1197->SetBinContent(20,0.08025498);
   new_histo_group_WZ_wh3l_plot_13TeV_pt1197->SetBinContent(21,0.07649522);
   new_histo_group_WZ_wh3l_plot_13TeV_pt1197->SetBinContent(22,0.09489816);
   new_histo_group_WZ_wh3l_plot_13TeV_pt1197->SetBinContent(23,0.07884461);
   new_histo_group_WZ_wh3l_plot_13TeV_pt1197->SetBinContent(24,0.0386543);
   new_histo_group_WZ_wh3l_plot_13TeV_pt1197->SetBinContent(25,0.04233392);
   new_histo_group_WZ_wh3l_plot_13TeV_pt1197->SetBinContent(26,0.7202065);
   new_histo_group_WZ_wh3l_plot_13TeV_pt1197->SetBinError(2,0.03912176);
   new_histo_group_WZ_wh3l_plot_13TeV_pt1197->SetBinError(3,0.07260434);
   new_histo_group_WZ_wh3l_plot_13TeV_pt1197->SetBinError(4,0.07769123);
   new_histo_group_WZ_wh3l_plot_13TeV_pt1197->SetBinError(5,0.07902892);
   new_histo_group_WZ_wh3l_plot_13TeV_pt1197->SetBinError(6,0.06562258);
   new_histo_group_WZ_wh3l_plot_13TeV_pt1197->SetBinError(7,0.05523849);
   new_histo_group_WZ_wh3l_plot_13TeV_pt1197->SetBinError(8,0.05513451);
   new_histo_group_WZ_wh3l_plot_13TeV_pt1197->SetBinError(9,0.04978714);
   new_histo_group_WZ_wh3l_plot_13TeV_pt1197->SetBinError(10,0.05226802);
   new_histo_group_WZ_wh3l_plot_13TeV_pt1197->SetBinError(11,0.04504295);
   new_histo_group_WZ_wh3l_plot_13TeV_pt1197->SetBinError(12,0.04435828);
   new_histo_group_WZ_wh3l_plot_13TeV_pt1197->SetBinError(13,0.04059779);
   new_histo_group_WZ_wh3l_plot_13TeV_pt1197->SetBinError(14,0.03308483);
   new_histo_group_WZ_wh3l_plot_13TeV_pt1197->SetBinError(15,0.03340621);
   new_histo_group_WZ_wh3l_plot_13TeV_pt1197->SetBinError(16,0.03108811);
   new_histo_group_WZ_wh3l_plot_13TeV_pt1197->SetBinError(17,0.02596493);
   new_histo_group_WZ_wh3l_plot_13TeV_pt1197->SetBinError(18,0.02197321);
   new_histo_group_WZ_wh3l_plot_13TeV_pt1197->SetBinError(19,0.02581074);
   new_histo_group_WZ_wh3l_plot_13TeV_pt1197->SetBinError(20,0.01995918);
   new_histo_group_WZ_wh3l_plot_13TeV_pt1197->SetBinError(21,0.02045258);
   new_histo_group_WZ_wh3l_plot_13TeV_pt1197->SetBinError(22,0.0227164);
   new_histo_group_WZ_wh3l_plot_13TeV_pt1197->SetBinError(23,0.02092755);
   new_histo_group_WZ_wh3l_plot_13TeV_pt1197->SetBinError(24,0.01424693);
   new_histo_group_WZ_wh3l_plot_13TeV_pt1197->SetBinError(25,0.01455984);
   new_histo_group_WZ_wh3l_plot_13TeV_pt1197->SetBinError(26,0.06236737);
   new_histo_group_WZ_wh3l_plot_13TeV_pt1197->SetEntries(1945);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_plot_13TeV_pt1197->SetFillColor(ci);
   new_histo_group_WZ_wh3l_plot_13TeV_pt1197->SetFillStyle(3001);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_plot_13TeV_pt1197->SetLineColor(ci);
   new_histo_group_WZ_wh3l_plot_13TeV_pt1197->GetXaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_plot_13TeV_pt1197->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_plot_13TeV_pt1197->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_plot_13TeV_pt1197->GetXaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_plot_13TeV_pt1197->GetYaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_plot_13TeV_pt1197->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_plot_13TeV_pt1197->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_plot_13TeV_pt1197->GetYaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_plot_13TeV_pt1197->GetZaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_plot_13TeV_pt1197->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_plot_13TeV_pt1197->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_plot_13TeV_pt1197->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_plot_13TeV_pt1->Add(new_histo_group_WZ_wh3l_plot_13TeV_pt1,"");
   
   TH1D *new_histo_group_Higgs_wh3l_plot_13TeV_pt1198 = new TH1D("new_histo_group_Higgs_wh3l_plot_13TeV_pt1198","histo_H_htt",25,10,200);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt1198->SetBinContent(2,0.01059943);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt1198->SetBinContent(3,0.03823183);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt1198->SetBinContent(4,0.08395963);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt1198->SetBinContent(5,0.09730701);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt1198->SetBinContent(6,0.08140609);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt1198->SetBinContent(7,0.0800359);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt1198->SetBinContent(8,0.05994544);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt1198->SetBinContent(9,0.05794036);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt1198->SetBinContent(10,0.05577052);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt1198->SetBinContent(11,0.03712984);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt1198->SetBinContent(12,0.02352028);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt1198->SetBinContent(13,0.03069439);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt1198->SetBinContent(14,0.0286368);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt1198->SetBinContent(15,0.01818933);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt1198->SetBinContent(16,0.02943594);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt1198->SetBinContent(17,0.02034151);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt1198->SetBinContent(18,0.01707147);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt1198->SetBinContent(19,0.01053652);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt1198->SetBinContent(20,0.006871829);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt1198->SetBinContent(21,0.004614075);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt1198->SetBinContent(22,0.004748651);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt1198->SetBinContent(23,0.002186666);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt1198->SetBinContent(24,0.003919247);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt1198->SetBinContent(25,0.009184059);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt1198->SetBinContent(26,0.02918291);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt1198->SetBinError(2,0.003716171);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt1198->SetBinError(3,0.006058189);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt1198->SetBinError(4,0.009665289);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt1198->SetBinError(5,0.01109404);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt1198->SetBinError(6,0.009660077);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt1198->SetBinError(7,0.01005494);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt1198->SetBinError(8,0.007816468);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt1198->SetBinError(9,0.008477149);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt1198->SetBinError(10,0.00885401);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt1198->SetBinError(11,0.006680551);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt1198->SetBinError(12,0.005404135);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt1198->SetBinError(13,0.005936685);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt1198->SetBinError(14,0.005754857);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt1198->SetBinError(15,0.004017225);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt1198->SetBinError(16,0.006510399);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt1198->SetBinError(17,0.004795749);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt1198->SetBinError(18,0.0047011);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt1198->SetBinError(19,0.003316557);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt1198->SetBinError(20,0.00194044);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt1198->SetBinError(21,0.001717686);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt1198->SetBinError(22,0.001944419);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt1198->SetBinError(23,0.0009572082);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt1198->SetBinError(24,0.001810921);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt1198->SetBinError(25,0.003470913);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt1198->SetBinError(26,0.005732126);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt1198->SetEntries(1365);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt1198->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_plot_13TeV_pt1198->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt1198->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt1198->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt1198->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt1198->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt1198->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt1198->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt1198->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt1198->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt1198->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt1198->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt1198->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt1198->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt1198->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_plot_13TeV_pt1->Add(new_histo_group_Higgs_wh3l_plot_13TeV_pt1,"");
   thsBackground_grouped_wh3l_plot_13TeV_pt1->Draw("hist same");
   
   thsSignal_grouped_wh3l_plot_13TeV_pt1 = new THStack();
   thsSignal_grouped_wh3l_plot_13TeV_pt1->SetName("thsSignal_grouped_wh3l_plot_13TeV_pt1");
   thsSignal_grouped_wh3l_plot_13TeV_pt1->SetTitle("thsSignal_grouped_wh3l_plot_13TeV_pt1");
   
   TH1F *thsSignal_grouped_wh3l_plot_13TeV_pt1_stack_40 = new TH1F("thsSignal_grouped_wh3l_plot_13TeV_pt1_stack_40","thsSignal_grouped_wh3l_plot_13TeV_pt1",25,10,200);
   thsSignal_grouped_wh3l_plot_13TeV_pt1_stack_40->SetMinimum(0);
   thsSignal_grouped_wh3l_plot_13TeV_pt1_stack_40->SetMaximum(0.1138211);
   thsSignal_grouped_wh3l_plot_13TeV_pt1_stack_40->SetDirectory(0);
   thsSignal_grouped_wh3l_plot_13TeV_pt1_stack_40->SetStats(0);
   thsSignal_grouped_wh3l_plot_13TeV_pt1_stack_40->SetLineStyle(0);
   thsSignal_grouped_wh3l_plot_13TeV_pt1_stack_40->SetMarkerStyle(20);
   thsSignal_grouped_wh3l_plot_13TeV_pt1_stack_40->GetXaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_plot_13TeV_pt1_stack_40->GetXaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_plot_13TeV_pt1_stack_40->GetXaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_plot_13TeV_pt1_stack_40->GetXaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_plot_13TeV_pt1_stack_40->GetXaxis()->SetTitleOffset(0.9);
   thsSignal_grouped_wh3l_plot_13TeV_pt1_stack_40->GetXaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_plot_13TeV_pt1_stack_40->GetYaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_plot_13TeV_pt1_stack_40->GetYaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_plot_13TeV_pt1_stack_40->GetYaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_plot_13TeV_pt1_stack_40->GetYaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_plot_13TeV_pt1_stack_40->GetYaxis()->SetTitleOffset(1.25);
   thsSignal_grouped_wh3l_plot_13TeV_pt1_stack_40->GetYaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_plot_13TeV_pt1_stack_40->GetZaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_plot_13TeV_pt1_stack_40->GetZaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_plot_13TeV_pt1_stack_40->GetZaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_plot_13TeV_pt1_stack_40->GetZaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_plot_13TeV_pt1_stack_40->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_plot_13TeV_pt1->SetHistogram(thsSignal_grouped_wh3l_plot_13TeV_pt1_stack_40);
   
   
   TH1D *new_histo_group_Higgs_wh3l_plot_13TeV_pt1199 = new TH1D("new_histo_group_Higgs_wh3l_plot_13TeV_pt1199","histo_H_htt",25,10,200);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt1199->SetBinContent(2,0.01059943);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt1199->SetBinContent(3,0.03823183);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt1199->SetBinContent(4,0.08395963);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt1199->SetBinContent(5,0.09730701);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt1199->SetBinContent(6,0.08140609);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt1199->SetBinContent(7,0.0800359);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt1199->SetBinContent(8,0.05994544);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt1199->SetBinContent(9,0.05794036);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt1199->SetBinContent(10,0.05577052);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt1199->SetBinContent(11,0.03712984);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt1199->SetBinContent(12,0.02352028);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt1199->SetBinContent(13,0.03069439);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt1199->SetBinContent(14,0.0286368);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt1199->SetBinContent(15,0.01818933);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt1199->SetBinContent(16,0.02943594);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt1199->SetBinContent(17,0.02034151);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt1199->SetBinContent(18,0.01707147);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt1199->SetBinContent(19,0.01053652);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt1199->SetBinContent(20,0.006871829);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt1199->SetBinContent(21,0.004614075);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt1199->SetBinContent(22,0.004748651);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt1199->SetBinContent(23,0.002186666);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt1199->SetBinContent(24,0.003919247);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt1199->SetBinContent(25,0.009184059);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt1199->SetBinContent(26,0.02918291);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt1199->SetBinError(2,0.003716171);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt1199->SetBinError(3,0.006058189);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt1199->SetBinError(4,0.009665289);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt1199->SetBinError(5,0.01109404);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt1199->SetBinError(6,0.009660077);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt1199->SetBinError(7,0.01005494);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt1199->SetBinError(8,0.007816468);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt1199->SetBinError(9,0.008477149);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt1199->SetBinError(10,0.00885401);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt1199->SetBinError(11,0.006680551);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt1199->SetBinError(12,0.005404135);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt1199->SetBinError(13,0.005936685);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt1199->SetBinError(14,0.005754857);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt1199->SetBinError(15,0.004017225);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt1199->SetBinError(16,0.006510399);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt1199->SetBinError(17,0.004795749);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt1199->SetBinError(18,0.0047011);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt1199->SetBinError(19,0.003316557);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt1199->SetBinError(20,0.00194044);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt1199->SetBinError(21,0.001717686);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt1199->SetBinError(22,0.001944419);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt1199->SetBinError(23,0.0009572082);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt1199->SetBinError(24,0.001810921);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt1199->SetBinError(25,0.003470913);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt1199->SetBinError(26,0.005732126);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt1199->SetEntries(1365);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt1199->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_plot_13TeV_pt1199->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt1199->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt1199->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt1199->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt1199->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt1199->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt1199->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt1199->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt1199->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt1199->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt1199->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt1199->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt1199->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt1199->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_plot_13TeV_pt1->Add(new_histo_group_Higgs_wh3l_plot_13TeV_pt1,"");
   thsSignal_grouped_wh3l_plot_13TeV_pt1->Draw("hist same noclear");
   
   Double_t _fx3039[25] = {
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
   Double_t _fy3039[25] = {
   0,
   0.3334841,
   2.590622,
   3.319554,
   2.98208,
   3.577547,
   0.1752655,
   2.18771,
   1.599882,
   1.097521,
   1.116771,
   0.8176614,
   0.2368942,
   0.5660132,
   0.223639,
   0.1758163,
   0.1510668,
   0.0902474,
   0.2303374,
   0.05831169,
   0.9241315,
   0.09489816,
   0.0711665,
   0.02395213,
   0.1775207};
   Double_t _felx3039[25] = {
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
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
   Double_t _fely3039[25] = {
   0,
   0.2444077,
   1.003872,
   1.547699,
   1.297884,
   1.735743,
   0.5163878,
   1.212134,
   1.044355,
   0.5329306,
   0.8355796,
   0.4462219,
   0.1662057,
   0.4096095,
   0.04553398,
   0.03155069,
   0.04786968,
   0.02282394,
   0.1318848,
   0.04396065,
   0.9173884,
   0.02295825,
   0.02993789,
   0.02940885,
   0.15698};
   Double_t _fehx3039[25] = {
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
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
   Double_t _fehy3039[25] = {
   0,
   0.2443243,
   1.070653,
   1.547517,
   1.297869,
   1.735666,
   0.5163642,
   1.212131,
   1.044349,
   0.5329198,
   0.9124365,
   0.4462281,
   0.16084,
   0.4095952,
   0.04533998,
   0.03144017,
   0.04782853,
   0.02283446,
   0.1318312,
   0.04396458,
   0.9173879,
   0.02287704,
   0.02987243,
   0.02940937,
   0.1569793};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(25,_fx3039,_fy3039,_felx3039,_fehx3039,_fely3039,_fehy3039);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(12);
   grae->SetFillStyle(3004);
   grae->SetLineColor(12);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3039 = new TH1F("Graph_Graph3039","",100,0,219);
   Graph_Graph3039->SetMinimum(-0.9065558);
   Graph_Graph3039->SetMaximum(5.878647);
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
   
   Double_t _fx3040[25] = {
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
   Double_t _fy3040[25] = {
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
   Double_t _felx3040[25] = {
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
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
   Double_t _fely3040[25] = {
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
   Double_t _fehx3040[25] = {
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
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
   Double_t _fehy3040[25] = {
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
   grae = new TGraphAsymmErrors(25,_fx3040,_fy3040,_felx3040,_fehx3040,_fely3040,_fehy3040);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(1);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3040 = new TH1F("Graph_Graph3040","",100,0,219);
   Graph_Graph3040->SetMinimum(0);
   Graph_Graph3040->SetMaximum(1.262698);
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
   TLegendEntry *entry=leg->AddEntry("new_histo_group_Fake_wh3l_plot_13TeV_pt1","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_plot_13TeV_pt1","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_plot_13TeV_pt1","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_plot_13TeV_pt1","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_plot_13TeV_pt1","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_plot_13TeV_pt1","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_plot_13TeV_pt1","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_plot_13TeV_pt1","Data","EPL");
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
   entry=leg->AddEntry("new_histo_group_Fake_wh3l_plot_13TeV_pt1","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_plot_13TeV_pt1","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_plot_13TeV_pt1","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_plot_13TeV_pt1","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_plot_13TeV_pt1","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_plot_13TeV_pt1","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_plot_13TeV_pt1","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_plot_13TeV_pt1","Data","EPL");
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
   
   TH1F *hframe_copy200 = new TH1F("hframe_copy200","",1000,10,200);
   hframe_copy200->SetMinimum(0);
   hframe_copy200->SetMaximum(9.147383);
   hframe_copy200->SetDirectory(0);
   hframe_copy200->SetStats(0);
   hframe_copy200->SetLineStyle(0);
   hframe_copy200->SetMarkerStyle(20);
   hframe_copy200->GetXaxis()->SetTitle("lept1_p_{T} [GeV]");
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
   ccwh3l_plot_13TeV_pt1->Modified();
   ccwh3l_plot_13TeV_pt1->cd();
   ccwh3l_plot_13TeV_pt1->SetSelected(ccwh3l_plot_13TeV_pt1);
}
