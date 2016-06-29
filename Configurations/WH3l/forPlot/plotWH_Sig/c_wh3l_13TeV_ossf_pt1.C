void c_wh3l_13TeV_ossf_pt1()
{
//=========Macro generated from canvas: ccwh3l_13TeV_ossf_pt1/cc
//=========  (Wed Jun 29 01:33:59 2016) by ROOT version6.02/13
   TCanvas *ccwh3l_13TeV_ossf_pt1 = new TCanvas("ccwh3l_13TeV_ossf_pt1", "cc",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   ccwh3l_13TeV_ossf_pt1->SetHighLightColor(2);
   ccwh3l_13TeV_ossf_pt1->Range(-28,-1.304399,209.5,8.729443);
   ccwh3l_13TeV_ossf_pt1->SetFillColor(0);
   ccwh3l_13TeV_ossf_pt1->SetBorderMode(0);
   ccwh3l_13TeV_ossf_pt1->SetBorderSize(2);
   ccwh3l_13TeV_ossf_pt1->SetTickx(1);
   ccwh3l_13TeV_ossf_pt1->SetTicky(1);
   ccwh3l_13TeV_ossf_pt1->SetLeftMargin(0.16);
   ccwh3l_13TeV_ossf_pt1->SetRightMargin(0.04);
   ccwh3l_13TeV_ossf_pt1->SetTopMargin(0.05);
   ccwh3l_13TeV_ossf_pt1->SetBottomMargin(0.13);
   ccwh3l_13TeV_ossf_pt1->SetFrameFillStyle(0);
   ccwh3l_13TeV_ossf_pt1->SetFrameBorderMode(0);
   ccwh3l_13TeV_ossf_pt1->SetFrameFillStyle(0);
   ccwh3l_13TeV_ossf_pt1->SetFrameBorderMode(0);
   
   TH1F *hframe191 = new TH1F("hframe191","",1000,10,200);
   hframe191->SetMinimum(0);
   hframe191->SetMaximum(8.227751);
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
   
   THStack *thsBackground_grouped_wh3l_13TeV_ossf_pt1 = new THStack();
   thsBackground_grouped_wh3l_13TeV_ossf_pt1->SetName("thsBackground_grouped_wh3l_13TeV_ossf_pt1");
   thsBackground_grouped_wh3l_13TeV_ossf_pt1->SetTitle("thsBackground_grouped_wh3l_13TeV_ossf_pt1");
   
   TH1F *thsBackground_grouped_wh3l_13TeV_ossf_pt1_stack_39 = new TH1F("thsBackground_grouped_wh3l_13TeV_ossf_pt1_stack_39","thsBackground_grouped_wh3l_13TeV_ossf_pt1",25,10,200);
   thsBackground_grouped_wh3l_13TeV_ossf_pt1_stack_39->SetMinimum(-0.8259209);
   thsBackground_grouped_wh3l_13TeV_ossf_pt1_stack_39->SetMaximum(3.455655);
   thsBackground_grouped_wh3l_13TeV_ossf_pt1_stack_39->SetDirectory(0);
   thsBackground_grouped_wh3l_13TeV_ossf_pt1_stack_39->SetStats(0);
   thsBackground_grouped_wh3l_13TeV_ossf_pt1_stack_39->SetLineStyle(0);
   thsBackground_grouped_wh3l_13TeV_ossf_pt1_stack_39->SetMarkerStyle(20);
   thsBackground_grouped_wh3l_13TeV_ossf_pt1_stack_39->GetXaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_13TeV_ossf_pt1_stack_39->GetXaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_13TeV_ossf_pt1_stack_39->GetXaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_13TeV_ossf_pt1_stack_39->GetXaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_13TeV_ossf_pt1_stack_39->GetXaxis()->SetTitleOffset(0.9);
   thsBackground_grouped_wh3l_13TeV_ossf_pt1_stack_39->GetXaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_ossf_pt1_stack_39->GetYaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_13TeV_ossf_pt1_stack_39->GetYaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_13TeV_ossf_pt1_stack_39->GetYaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_13TeV_ossf_pt1_stack_39->GetYaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_13TeV_ossf_pt1_stack_39->GetYaxis()->SetTitleOffset(1.25);
   thsBackground_grouped_wh3l_13TeV_ossf_pt1_stack_39->GetYaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_ossf_pt1_stack_39->GetZaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_13TeV_ossf_pt1_stack_39->GetZaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_13TeV_ossf_pt1_stack_39->GetZaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_13TeV_ossf_pt1_stack_39->GetZaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_13TeV_ossf_pt1_stack_39->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_ossf_pt1->SetHistogram(thsBackground_grouped_wh3l_13TeV_ossf_pt1_stack_39);
   
   
   TH1D *new_histo_group_Fake_wh3l_13TeV_ossf_pt1192 = new TH1D("new_histo_group_Fake_wh3l_13TeV_ossf_pt1192","histo_Fake",25,10,200);
   new_histo_group_Fake_wh3l_13TeV_ossf_pt1192->SetBinContent(2,-0.07253187);
   new_histo_group_Fake_wh3l_13TeV_ossf_pt1192->SetBinContent(3,0.5578663);
   new_histo_group_Fake_wh3l_13TeV_ossf_pt1192->SetBinContent(4,1.680171);
   new_histo_group_Fake_wh3l_13TeV_ossf_pt1192->SetBinContent(5,0.5930959);
   new_histo_group_Fake_wh3l_13TeV_ossf_pt1192->SetBinContent(6,2.059149);
   new_histo_group_Fake_wh3l_13TeV_ossf_pt1192->SetBinContent(7,-0.4321505);
   new_histo_group_Fake_wh3l_13TeV_ossf_pt1192->SetBinContent(8,0.3769465);
   new_histo_group_Fake_wh3l_13TeV_ossf_pt1192->SetBinContent(9,0.3132685);
   new_histo_group_Fake_wh3l_13TeV_ossf_pt1192->SetBinContent(10,0.1354057);
   new_histo_group_Fake_wh3l_13TeV_ossf_pt1192->SetBinContent(11,0.7602637);
   new_histo_group_Fake_wh3l_13TeV_ossf_pt1192->SetBinContent(12,0.01237054);
   new_histo_group_Fake_wh3l_13TeV_ossf_pt1192->SetBinContent(13,-0.08191734);
   new_histo_group_Fake_wh3l_13TeV_ossf_pt1192->SetBinContent(14,3.916463e-05);
   new_histo_group_Fake_wh3l_13TeV_ossf_pt1192->SetBinContent(20,-0.02257761);
   new_histo_group_Fake_wh3l_13TeV_ossf_pt1192->SetBinContent(21,0.8476363);
   new_histo_group_Fake_wh3l_13TeV_ossf_pt1192->SetBinContent(23,-0.008195123);
   new_histo_group_Fake_wh3l_13TeV_ossf_pt1192->SetBinError(2,0.04789861);
   new_histo_group_Fake_wh3l_13TeV_ossf_pt1192->SetBinError(3,0.5810336);
   new_histo_group_Fake_wh3l_13TeV_ossf_pt1192->SetBinError(4,0.9769723);
   new_histo_group_Fake_wh3l_13TeV_ossf_pt1192->SetBinError(5,0.6519216);
   new_histo_group_Fake_wh3l_13TeV_ossf_pt1192->SetBinError(6,1.185788);
   new_histo_group_Fake_wh3l_13TeV_ossf_pt1192->SetBinError(7,0.3937705);
   new_histo_group_Fake_wh3l_13TeV_ossf_pt1192->SetBinError(8,0.3011719);
   new_histo_group_Fake_wh3l_13TeV_ossf_pt1192->SetBinError(9,0.2797682);
   new_histo_group_Fake_wh3l_13TeV_ossf_pt1192->SetBinError(10,0.1354057);
   new_histo_group_Fake_wh3l_13TeV_ossf_pt1192->SetBinError(11,0.8013833);
   new_histo_group_Fake_wh3l_13TeV_ossf_pt1192->SetBinError(12,0.01294696);
   new_histo_group_Fake_wh3l_13TeV_ossf_pt1192->SetBinError(13,0.09378294);
   new_histo_group_Fake_wh3l_13TeV_ossf_pt1192->SetBinError(14,3.916463e-05);
   new_histo_group_Fake_wh3l_13TeV_ossf_pt1192->SetBinError(20,0.02257761);
   new_histo_group_Fake_wh3l_13TeV_ossf_pt1192->SetBinError(21,0.8476363);
   new_histo_group_Fake_wh3l_13TeV_ossf_pt1192->SetBinError(23,0.008195123);
   new_histo_group_Fake_wh3l_13TeV_ossf_pt1192->SetEntries(81);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_13TeV_ossf_pt1192->SetFillColor(ci);
   new_histo_group_Fake_wh3l_13TeV_ossf_pt1192->SetFillStyle(3001);

   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_13TeV_ossf_pt1192->SetLineColor(ci);
   new_histo_group_Fake_wh3l_13TeV_ossf_pt1192->GetXaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_13TeV_ossf_pt1192->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_13TeV_ossf_pt1192->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_13TeV_ossf_pt1192->GetXaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_13TeV_ossf_pt1192->GetYaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_13TeV_ossf_pt1192->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_13TeV_ossf_pt1192->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_13TeV_ossf_pt1192->GetYaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_13TeV_ossf_pt1192->GetZaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_13TeV_ossf_pt1192->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_13TeV_ossf_pt1192->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_13TeV_ossf_pt1192->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_ossf_pt1->Add(new_histo_group_Fake_wh3l_13TeV_ossf_pt1,"");
   
   TH1D *new_histo_group_WW_wh3l_13TeV_ossf_pt1193 = new TH1D("new_histo_group_WW_wh3l_13TeV_ossf_pt1193","histo_WW",25,10,200);
   new_histo_group_WW_wh3l_13TeV_ossf_pt1193->SetBinContent(5,0.01044191);
   new_histo_group_WW_wh3l_13TeV_ossf_pt1193->SetBinContent(6,0.03235779);
   new_histo_group_WW_wh3l_13TeV_ossf_pt1193->SetBinContent(9,0.02977813);
   new_histo_group_WW_wh3l_13TeV_ossf_pt1193->SetBinError(5,0.01044191);
   new_histo_group_WW_wh3l_13TeV_ossf_pt1193->SetBinError(6,0.02304949);
   new_histo_group_WW_wh3l_13TeV_ossf_pt1193->SetBinError(9,0.02106448);
   new_histo_group_WW_wh3l_13TeV_ossf_pt1193->SetEntries(5);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_13TeV_ossf_pt1193->SetFillColor(ci);
   new_histo_group_WW_wh3l_13TeV_ossf_pt1193->SetFillStyle(3001);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_13TeV_ossf_pt1193->SetLineColor(ci);
   new_histo_group_WW_wh3l_13TeV_ossf_pt1193->GetXaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_13TeV_ossf_pt1193->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_13TeV_ossf_pt1193->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_13TeV_ossf_pt1193->GetXaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_13TeV_ossf_pt1193->GetYaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_13TeV_ossf_pt1193->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_13TeV_ossf_pt1193->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_13TeV_ossf_pt1193->GetYaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_13TeV_ossf_pt1193->GetZaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_13TeV_ossf_pt1193->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_13TeV_ossf_pt1193->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_13TeV_ossf_pt1193->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_ossf_pt1->Add(new_histo_group_WW_wh3l_13TeV_ossf_pt1,"");
   
   TH1D *new_histo_group_VVV_wh3l_13TeV_ossf_pt1194 = new TH1D("new_histo_group_VVV_wh3l_13TeV_ossf_pt1194","histo_VVV",25,10,200);
   new_histo_group_VVV_wh3l_13TeV_ossf_pt1194->SetBinContent(4,0.0006249245);
   new_histo_group_VVV_wh3l_13TeV_ossf_pt1194->SetBinContent(5,0.0002076036);
   new_histo_group_VVV_wh3l_13TeV_ossf_pt1194->SetBinContent(7,0.0006883418);
   new_histo_group_VVV_wh3l_13TeV_ossf_pt1194->SetBinContent(8,0.0006127095);
   new_histo_group_VVV_wh3l_13TeV_ossf_pt1194->SetBinContent(9,0.0002902478);
   new_histo_group_VVV_wh3l_13TeV_ossf_pt1194->SetBinContent(11,0.0006276043);
   new_histo_group_VVV_wh3l_13TeV_ossf_pt1194->SetBinContent(12,0.0006878311);
   new_histo_group_VVV_wh3l_13TeV_ossf_pt1194->SetBinContent(13,0.000653768);
   new_histo_group_VVV_wh3l_13TeV_ossf_pt1194->SetBinContent(14,0.0006504452);
   new_histo_group_VVV_wh3l_13TeV_ossf_pt1194->SetBinContent(18,0.0006405607);
   new_histo_group_VVV_wh3l_13TeV_ossf_pt1194->SetBinContent(20,0.0006343185);
   new_histo_group_VVV_wh3l_13TeV_ossf_pt1194->SetBinContent(25,0.0006729142);
   new_histo_group_VVV_wh3l_13TeV_ossf_pt1194->SetBinError(4,0.0006249245);
   new_histo_group_VVV_wh3l_13TeV_ossf_pt1194->SetBinError(5,0.0002076036);
   new_histo_group_VVV_wh3l_13TeV_ossf_pt1194->SetBinError(7,0.0006883418);
   new_histo_group_VVV_wh3l_13TeV_ossf_pt1194->SetBinError(8,0.0006127095);
   new_histo_group_VVV_wh3l_13TeV_ossf_pt1194->SetBinError(9,0.0002902478);
   new_histo_group_VVV_wh3l_13TeV_ossf_pt1194->SetBinError(11,0.0006276043);
   new_histo_group_VVV_wh3l_13TeV_ossf_pt1194->SetBinError(12,0.0006878311);
   new_histo_group_VVV_wh3l_13TeV_ossf_pt1194->SetBinError(13,0.000653768);
   new_histo_group_VVV_wh3l_13TeV_ossf_pt1194->SetBinError(14,0.0006504452);
   new_histo_group_VVV_wh3l_13TeV_ossf_pt1194->SetBinError(18,0.0006405607);
   new_histo_group_VVV_wh3l_13TeV_ossf_pt1194->SetBinError(20,0.0006343185);
   new_histo_group_VVV_wh3l_13TeV_ossf_pt1194->SetBinError(25,0.0006729142);
   new_histo_group_VVV_wh3l_13TeV_ossf_pt1194->SetEntries(12);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_13TeV_ossf_pt1194->SetFillColor(ci);
   new_histo_group_VVV_wh3l_13TeV_ossf_pt1194->SetFillStyle(3001);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_13TeV_ossf_pt1194->SetLineColor(ci);
   new_histo_group_VVV_wh3l_13TeV_ossf_pt1194->GetXaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_13TeV_ossf_pt1194->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_13TeV_ossf_pt1194->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_13TeV_ossf_pt1194->GetXaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_13TeV_ossf_pt1194->GetYaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_13TeV_ossf_pt1194->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_13TeV_ossf_pt1194->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_13TeV_ossf_pt1194->GetYaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_13TeV_ossf_pt1194->GetZaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_13TeV_ossf_pt1194->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_13TeV_ossf_pt1194->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_13TeV_ossf_pt1194->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_ossf_pt1->Add(new_histo_group_VVV_wh3l_13TeV_ossf_pt1,"");
   
   TH1D *new_histo_group_Vg_wh3l_13TeV_ossf_pt1195 = new TH1D("new_histo_group_Vg_wh3l_13TeV_ossf_pt1195","histo_Vg",25,10,200);
   new_histo_group_Vg_wh3l_13TeV_ossf_pt1195->SetBinContent(2,0.1353116);
   new_histo_group_Vg_wh3l_13TeV_ossf_pt1195->SetBinContent(3,1.011405);
   new_histo_group_Vg_wh3l_13TeV_ossf_pt1195->SetBinContent(4,0.3778996);
   new_histo_group_Vg_wh3l_13TeV_ossf_pt1195->SetBinContent(5,0.7303915);
   new_histo_group_Vg_wh3l_13TeV_ossf_pt1195->SetBinContent(6,0.4114199);
   new_histo_group_Vg_wh3l_13TeV_ossf_pt1195->SetBinContent(8,0.1048186);
   new_histo_group_Vg_wh3l_13TeV_ossf_pt1195->SetBinContent(9,-0.1230777);
   new_histo_group_Vg_wh3l_13TeV_ossf_pt1195->SetBinError(2,0.1120881);
   new_histo_group_Vg_wh3l_13TeV_ossf_pt1195->SetBinError(3,0.3128352);
   new_histo_group_Vg_wh3l_13TeV_ossf_pt1195->SetBinError(4,0.2832874);
   new_histo_group_Vg_wh3l_13TeV_ossf_pt1195->SetBinError(5,0.2617258);
   new_histo_group_Vg_wh3l_13TeV_ossf_pt1195->SetBinError(6,0.1990974);
   new_histo_group_Vg_wh3l_13TeV_ossf_pt1195->SetBinError(8,0.1048186);
   new_histo_group_Vg_wh3l_13TeV_ossf_pt1195->SetBinError(9,0.1230777);
   new_histo_group_Vg_wh3l_13TeV_ossf_pt1195->SetEntries(42);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_13TeV_ossf_pt1195->SetFillColor(ci);
   new_histo_group_Vg_wh3l_13TeV_ossf_pt1195->SetFillStyle(3001);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_13TeV_ossf_pt1195->SetLineColor(ci);
   new_histo_group_Vg_wh3l_13TeV_ossf_pt1195->GetXaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_13TeV_ossf_pt1195->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_13TeV_ossf_pt1195->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_13TeV_ossf_pt1195->GetXaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_13TeV_ossf_pt1195->GetYaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_13TeV_ossf_pt1195->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_13TeV_ossf_pt1195->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_13TeV_ossf_pt1195->GetYaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_13TeV_ossf_pt1195->GetZaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_13TeV_ossf_pt1195->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_13TeV_ossf_pt1195->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_13TeV_ossf_pt1195->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_ossf_pt1->Add(new_histo_group_Vg_wh3l_13TeV_ossf_pt1,"");
   
   TH1D *new_histo_group_ZZ_wh3l_13TeV_ossf_pt1196 = new TH1D("new_histo_group_ZZ_wh3l_13TeV_ossf_pt1196","histo_ZZ",25,10,200);
   new_histo_group_ZZ_wh3l_13TeV_ossf_pt1196->SetBinContent(2,0.02640386);
   new_histo_group_ZZ_wh3l_13TeV_ossf_pt1196->SetBinContent(3,0.07747764);
   new_histo_group_ZZ_wh3l_13TeV_ossf_pt1196->SetBinContent(4,0.1369423);
   new_histo_group_ZZ_wh3l_13TeV_ossf_pt1196->SetBinContent(5,0.08272321);
   new_histo_group_ZZ_wh3l_13TeV_ossf_pt1196->SetBinContent(6,0.04248237);
   new_histo_group_ZZ_wh3l_13TeV_ossf_pt1196->SetBinContent(11,0.02856258);
   new_histo_group_ZZ_wh3l_13TeV_ossf_pt1196->SetBinContent(12,0.1261614);
   new_histo_group_ZZ_wh3l_13TeV_ossf_pt1196->SetBinContent(13,0.02711696);
   new_histo_group_ZZ_wh3l_13TeV_ossf_pt1196->SetBinContent(17,0.02088597);
   new_histo_group_ZZ_wh3l_13TeV_ossf_pt1196->SetBinError(2,0.02640386);
   new_histo_group_ZZ_wh3l_13TeV_ossf_pt1196->SetBinError(3,0.05497137);
   new_histo_group_ZZ_wh3l_13TeV_ossf_pt1196->SetBinError(4,0.0793716);
   new_histo_group_ZZ_wh3l_13TeV_ossf_pt1196->SetBinError(5,0.05856026);
   new_histo_group_ZZ_wh3l_13TeV_ossf_pt1196->SetBinError(6,0.03177358);
   new_histo_group_ZZ_wh3l_13TeV_ossf_pt1196->SetBinError(11,0.02856258);
   new_histo_group_ZZ_wh3l_13TeV_ossf_pt1196->SetBinError(12,0.07449396);
   new_histo_group_ZZ_wh3l_13TeV_ossf_pt1196->SetBinError(13,0.02711696);
   new_histo_group_ZZ_wh3l_13TeV_ossf_pt1196->SetBinError(17,0.02088597);
   new_histo_group_ZZ_wh3l_13TeV_ossf_pt1196->SetEntries(17);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_13TeV_ossf_pt1196->SetFillColor(ci);
   new_histo_group_ZZ_wh3l_13TeV_ossf_pt1196->SetFillStyle(3001);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_13TeV_ossf_pt1196->SetLineColor(ci);
   new_histo_group_ZZ_wh3l_13TeV_ossf_pt1196->GetXaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_13TeV_ossf_pt1196->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_13TeV_ossf_pt1196->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_13TeV_ossf_pt1196->GetXaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_13TeV_ossf_pt1196->GetYaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_13TeV_ossf_pt1196->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_13TeV_ossf_pt1196->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_13TeV_ossf_pt1196->GetYaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_13TeV_ossf_pt1196->GetZaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_13TeV_ossf_pt1196->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_13TeV_ossf_pt1196->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_13TeV_ossf_pt1196->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_ossf_pt1->Add(new_histo_group_ZZ_wh3l_13TeV_ossf_pt1,"");
   
   TH1D *new_histo_group_WZ_wh3l_13TeV_ossf_pt1197 = new TH1D("new_histo_group_WZ_wh3l_13TeV_ossf_pt1197","histo_WZ",25,10,200);
   new_histo_group_WZ_wh3l_13TeV_ossf_pt1197->SetBinContent(2,0.2758234);
   new_histo_group_WZ_wh3l_13TeV_ossf_pt1197->SetBinContent(3,0.9017204);
   new_histo_group_WZ_wh3l_13TeV_ossf_pt1197->SetBinContent(4,1.032123);
   new_histo_group_WZ_wh3l_13TeV_ossf_pt1197->SetBinContent(5,1.062229);
   new_histo_group_WZ_wh3l_13TeV_ossf_pt1197->SetBinContent(6,0.6798093);
   new_histo_group_WZ_wh3l_13TeV_ossf_pt1197->SetBinContent(7,0.4377456);
   new_histo_group_WZ_wh3l_13TeV_ossf_pt1197->SetBinContent(8,0.4588359);
   new_histo_group_WZ_wh3l_13TeV_ossf_pt1197->SetBinContent(9,0.3011565);
   new_histo_group_WZ_wh3l_13TeV_ossf_pt1197->SetBinContent(10,0.3769869);
   new_histo_group_WZ_wh3l_13TeV_ossf_pt1197->SetBinContent(11,0.2121879);
   new_histo_group_WZ_wh3l_13TeV_ossf_pt1197->SetBinContent(12,0.196429);
   new_histo_group_WZ_wh3l_13TeV_ossf_pt1197->SetBinContent(13,0.1448141);
   new_histo_group_WZ_wh3l_13TeV_ossf_pt1197->SetBinContent(14,0.1137797);
   new_histo_group_WZ_wh3l_13TeV_ossf_pt1197->SetBinContent(15,0.09524812);
   new_histo_group_WZ_wh3l_13TeV_ossf_pt1197->SetBinContent(16,0.07183034);
   new_histo_group_WZ_wh3l_13TeV_ossf_pt1197->SetBinContent(17,0.0597478);
   new_histo_group_WZ_wh3l_13TeV_ossf_pt1197->SetBinContent(18,0.03152202);
   new_histo_group_WZ_wh3l_13TeV_ossf_pt1197->SetBinContent(19,0.05857285);
   new_histo_group_WZ_wh3l_13TeV_ossf_pt1197->SetBinContent(20,0.03402953);
   new_histo_group_WZ_wh3l_13TeV_ossf_pt1197->SetBinContent(21,0.03722657);
   new_histo_group_WZ_wh3l_13TeV_ossf_pt1197->SetBinContent(22,0.02984914);
   new_histo_group_WZ_wh3l_13TeV_ossf_pt1197->SetBinContent(23,0.02606678);
   new_histo_group_WZ_wh3l_13TeV_ossf_pt1197->SetBinContent(24,0.02074515);
   new_histo_group_WZ_wh3l_13TeV_ossf_pt1197->SetBinContent(25,0.01340563);
   new_histo_group_WZ_wh3l_13TeV_ossf_pt1197->SetBinContent(26,0.2484932);
   new_histo_group_WZ_wh3l_13TeV_ossf_pt1197->SetBinError(2,0.03854678);
   new_histo_group_WZ_wh3l_13TeV_ossf_pt1197->SetBinError(3,0.07051147);
   new_histo_group_WZ_wh3l_13TeV_ossf_pt1197->SetBinError(4,0.07499213);
   new_histo_group_WZ_wh3l_13TeV_ossf_pt1197->SetBinError(5,0.07708707);
   new_histo_group_WZ_wh3l_13TeV_ossf_pt1197->SetBinError(6,0.06061942);
   new_histo_group_WZ_wh3l_13TeV_ossf_pt1197->SetBinError(7,0.04769566);
   new_histo_group_WZ_wh3l_13TeV_ossf_pt1197->SetBinError(8,0.04926508);
   new_histo_group_WZ_wh3l_13TeV_ossf_pt1197->SetBinError(9,0.04041318);
   new_histo_group_WZ_wh3l_13TeV_ossf_pt1197->SetBinError(10,0.04585691);
   new_histo_group_WZ_wh3l_13TeV_ossf_pt1197->SetBinError(11,0.034177);
   new_histo_group_WZ_wh3l_13TeV_ossf_pt1197->SetBinError(12,0.0323261);
   new_histo_group_WZ_wh3l_13TeV_ossf_pt1197->SetBinError(13,0.02872314);
   new_histo_group_WZ_wh3l_13TeV_ossf_pt1197->SetBinError(14,0.02435267);
   new_histo_group_WZ_wh3l_13TeV_ossf_pt1197->SetBinError(15,0.0228684);
   new_histo_group_WZ_wh3l_13TeV_ossf_pt1197->SetBinError(16,0.01895741);
   new_histo_group_WZ_wh3l_13TeV_ossf_pt1197->SetBinError(17,0.01748246);
   new_histo_group_WZ_wh3l_13TeV_ossf_pt1197->SetBinError(18,0.01297632);
   new_histo_group_WZ_wh3l_13TeV_ossf_pt1197->SetBinError(19,0.01740276);
   new_histo_group_WZ_wh3l_13TeV_ossf_pt1197->SetBinError(20,0.013629);
   new_histo_group_WZ_wh3l_13TeV_ossf_pt1197->SetBinError(21,0.01419599);
   new_histo_group_WZ_wh3l_13TeV_ossf_pt1197->SetBinError(22,0.01236242);
   new_histo_group_WZ_wh3l_13TeV_ossf_pt1197->SetBinError(23,0.01245507);
   new_histo_group_WZ_wh3l_13TeV_ossf_pt1197->SetBinError(24,0.009789282);
   new_histo_group_WZ_wh3l_13TeV_ossf_pt1197->SetBinError(25,0.007171629);
   new_histo_group_WZ_wh3l_13TeV_ossf_pt1197->SetBinError(26,0.03678277);
   new_histo_group_WZ_wh3l_13TeV_ossf_pt1197->SetEntries(1419);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_13TeV_ossf_pt1197->SetFillColor(ci);
   new_histo_group_WZ_wh3l_13TeV_ossf_pt1197->SetFillStyle(3001);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_13TeV_ossf_pt1197->SetLineColor(ci);
   new_histo_group_WZ_wh3l_13TeV_ossf_pt1197->GetXaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_13TeV_ossf_pt1197->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_13TeV_ossf_pt1197->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_13TeV_ossf_pt1197->GetXaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_13TeV_ossf_pt1197->GetYaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_13TeV_ossf_pt1197->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_13TeV_ossf_pt1197->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_13TeV_ossf_pt1197->GetYaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_13TeV_ossf_pt1197->GetZaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_13TeV_ossf_pt1197->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_13TeV_ossf_pt1197->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_13TeV_ossf_pt1197->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_ossf_pt1->Add(new_histo_group_WZ_wh3l_13TeV_ossf_pt1,"");
   
   TH1D *new_histo_group_Higgs_wh3l_13TeV_ossf_pt1198 = new TH1D("new_histo_group_Higgs_wh3l_13TeV_ossf_pt1198","histo_H_htt",25,10,200);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt1198->SetBinContent(2,0.01003289);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt1198->SetBinContent(3,0.02766027);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt1198->SetBinContent(4,0.06333875);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt1198->SetBinContent(5,0.07827847);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt1198->SetBinContent(6,0.05413196);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt1198->SetBinContent(7,0.04774233);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt1198->SetBinContent(8,0.04193582);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt1198->SetBinContent(9,0.0388392);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt1198->SetBinContent(10,0.03687502);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt1198->SetBinContent(11,0.02342018);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt1198->SetBinContent(12,0.01874024);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt1198->SetBinContent(13,0.02155781);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt1198->SetBinContent(14,0.0190565);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt1198->SetBinContent(15,0.01590917);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt1198->SetBinContent(16,0.02403608);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt1198->SetBinContent(17,0.01081356);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt1198->SetBinContent(18,0.01136582);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt1198->SetBinContent(19,0.005703481);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt1198->SetBinContent(20,0.003246558);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt1198->SetBinContent(21,0.003035749);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt1198->SetBinContent(22,0.004363685);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt1198->SetBinContent(23,0.001815698);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt1198->SetBinContent(24,0.003919247);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt1198->SetBinContent(25,0.005489135);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt1198->SetBinContent(26,0.02589277);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt1198->SetBinError(2,0.00369439);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt1198->SetBinError(3,0.005298203);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt1198->SetBinError(4,0.008178052);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt1198->SetBinError(5,0.01035393);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt1198->SetBinError(6,0.008055918);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt1198->SetBinError(7,0.008155718);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt1198->SetBinError(8,0.006199748);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt1198->SetBinError(9,0.006813532);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt1198->SetBinError(10,0.006783146);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt1198->SetBinError(11,0.005534155);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt1198->SetBinError(12,0.005159666);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt1198->SetBinError(13,0.004791262);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt1198->SetBinError(14,0.004841949);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt1198->SetBinError(15,0.003896735);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt1198->SetBinError(16,0.005913634);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt1198->SetBinError(17,0.003475839);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt1198->SetBinError(18,0.003705532);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt1198->SetBinError(19,0.002476319);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt1198->SetBinError(20,0.00114525);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt1198->SetBinError(21,0.001332354);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt1198->SetBinError(22,0.001925038);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt1198->SetBinError(23,0.0008824004);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt1198->SetBinError(24,0.001810921);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt1198->SetBinError(25,0.002871557);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt1198->SetBinError(26,0.005658254);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt1198->SetEntries(946);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt1198->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt1198->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt1198->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt1198->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt1198->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt1198->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt1198->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt1198->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt1198->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt1198->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt1198->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt1198->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt1198->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt1198->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt1198->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_ossf_pt1->Add(new_histo_group_Higgs_wh3l_13TeV_ossf_pt1,"");
   thsBackground_grouped_wh3l_13TeV_ossf_pt1->Draw("hist same");
   
   thsSignal_grouped_wh3l_13TeV_ossf_pt1 = new THStack();
   thsSignal_grouped_wh3l_13TeV_ossf_pt1->SetName("thsSignal_grouped_wh3l_13TeV_ossf_pt1");
   thsSignal_grouped_wh3l_13TeV_ossf_pt1->SetTitle("thsSignal_grouped_wh3l_13TeV_ossf_pt1");
   
   TH1F *thsSignal_grouped_wh3l_13TeV_ossf_pt1_stack_40 = new TH1F("thsSignal_grouped_wh3l_13TeV_ossf_pt1_stack_40","thsSignal_grouped_wh3l_13TeV_ossf_pt1",25,10,200);
   thsSignal_grouped_wh3l_13TeV_ossf_pt1_stack_40->SetMinimum(0);
   thsSignal_grouped_wh3l_13TeV_ossf_pt1_stack_40->SetMaximum(0.09306402);
   thsSignal_grouped_wh3l_13TeV_ossf_pt1_stack_40->SetDirectory(0);
   thsSignal_grouped_wh3l_13TeV_ossf_pt1_stack_40->SetStats(0);
   thsSignal_grouped_wh3l_13TeV_ossf_pt1_stack_40->SetLineStyle(0);
   thsSignal_grouped_wh3l_13TeV_ossf_pt1_stack_40->SetMarkerStyle(20);
   thsSignal_grouped_wh3l_13TeV_ossf_pt1_stack_40->GetXaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_13TeV_ossf_pt1_stack_40->GetXaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_13TeV_ossf_pt1_stack_40->GetXaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_13TeV_ossf_pt1_stack_40->GetXaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_13TeV_ossf_pt1_stack_40->GetXaxis()->SetTitleOffset(0.9);
   thsSignal_grouped_wh3l_13TeV_ossf_pt1_stack_40->GetXaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_13TeV_ossf_pt1_stack_40->GetYaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_13TeV_ossf_pt1_stack_40->GetYaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_13TeV_ossf_pt1_stack_40->GetYaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_13TeV_ossf_pt1_stack_40->GetYaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_13TeV_ossf_pt1_stack_40->GetYaxis()->SetTitleOffset(1.25);
   thsSignal_grouped_wh3l_13TeV_ossf_pt1_stack_40->GetYaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_13TeV_ossf_pt1_stack_40->GetZaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_13TeV_ossf_pt1_stack_40->GetZaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_13TeV_ossf_pt1_stack_40->GetZaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_13TeV_ossf_pt1_stack_40->GetZaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_13TeV_ossf_pt1_stack_40->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_13TeV_ossf_pt1->SetHistogram(thsSignal_grouped_wh3l_13TeV_ossf_pt1_stack_40);
   
   
   TH1D *new_histo_group_Higgs_wh3l_13TeV_ossf_pt1199 = new TH1D("new_histo_group_Higgs_wh3l_13TeV_ossf_pt1199","histo_H_htt",25,10,200);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt1199->SetBinContent(2,0.01003289);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt1199->SetBinContent(3,0.02766027);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt1199->SetBinContent(4,0.06333875);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt1199->SetBinContent(5,0.07827847);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt1199->SetBinContent(6,0.05413196);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt1199->SetBinContent(7,0.04774233);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt1199->SetBinContent(8,0.04193582);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt1199->SetBinContent(9,0.0388392);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt1199->SetBinContent(10,0.03687502);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt1199->SetBinContent(11,0.02342018);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt1199->SetBinContent(12,0.01874024);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt1199->SetBinContent(13,0.02155781);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt1199->SetBinContent(14,0.0190565);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt1199->SetBinContent(15,0.01590917);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt1199->SetBinContent(16,0.02403608);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt1199->SetBinContent(17,0.01081356);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt1199->SetBinContent(18,0.01136582);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt1199->SetBinContent(19,0.005703481);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt1199->SetBinContent(20,0.003246558);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt1199->SetBinContent(21,0.003035749);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt1199->SetBinContent(22,0.004363685);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt1199->SetBinContent(23,0.001815698);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt1199->SetBinContent(24,0.003919247);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt1199->SetBinContent(25,0.005489135);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt1199->SetBinContent(26,0.02589277);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt1199->SetBinError(2,0.00369439);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt1199->SetBinError(3,0.005298203);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt1199->SetBinError(4,0.008178052);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt1199->SetBinError(5,0.01035393);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt1199->SetBinError(6,0.008055918);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt1199->SetBinError(7,0.008155718);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt1199->SetBinError(8,0.006199748);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt1199->SetBinError(9,0.006813532);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt1199->SetBinError(10,0.006783146);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt1199->SetBinError(11,0.005534155);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt1199->SetBinError(12,0.005159666);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt1199->SetBinError(13,0.004791262);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt1199->SetBinError(14,0.004841949);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt1199->SetBinError(15,0.003896735);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt1199->SetBinError(16,0.005913634);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt1199->SetBinError(17,0.003475839);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt1199->SetBinError(18,0.003705532);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt1199->SetBinError(19,0.002476319);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt1199->SetBinError(20,0.00114525);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt1199->SetBinError(21,0.001332354);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt1199->SetBinError(22,0.001925038);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt1199->SetBinError(23,0.0008824004);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt1199->SetBinError(24,0.001810921);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt1199->SetBinError(25,0.002871557);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt1199->SetBinError(26,0.005658254);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt1199->SetEntries(946);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt1199->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt1199->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt1199->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt1199->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt1199->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt1199->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt1199->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt1199->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt1199->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt1199->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt1199->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt1199->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt1199->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt1199->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt1199->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_13TeV_ossf_pt1->Add(new_histo_group_Higgs_wh3l_13TeV_ossf_pt1,"");
   thsSignal_grouped_wh3l_13TeV_ossf_pt1->Draw("hist same noclear");
   
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
   0.365007,
   2.54847,
   3.227762,
   2.479089,
   3.225219,
   0.006283512,
   0.9412137,
   0.5214157,
   0.5123926,
   1.001642,
   0.3356488,
   0.09066752,
   0.1144693,
   0.09524813,
   0.07183034,
   0.08063377,
   0.03216258,
   0.05857285,
   0.01208624,
   0.8848628,
   0.02984914,
   0.01787166,
   0.02074515,
   0.01407854};
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
   0.2288045,
   1.01922,
   1.534085,
   1.025236,
   1.665295,
   0.4675858,
   0.4750283,
   0.4774273,
   0.1877265,
   0.8655643,
   0.1204918,
   0.1532793,
   0.02545957,
   0.02348939,
   0.01917078,
   0.03843988,
   0.01369491,
   0.0177142,
   0.03768884,
   0.9114672,
   0.01237923,
   0.02086767,
   0.009794788,
   0.007875504};
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
   0.2287349,
   1.041693,
   1.533909,
   1.082734,
   1.665219,
   0.4675641,
   0.4750253,
   0.4774185,
   0.1877004,
   0.9047806,
   0.1211062,
   0.1416518,
   0.02542739,
   0.02333194,
   0.01911916,
   0.03843604,
   0.01370057,
   0.0175819,
   0.03768922,
   0.911467,
   0.01237676,
   0.0208653,
   0.009795323,
   0.007878932};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(25,_fx3039,_fy3039,_felx3039,_fehx3039,_fely3039,_fehy3039);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(12);
   grae->SetFillStyle(3004);
   grae->SetLineColor(12);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3039 = new TH1F("Graph_Graph3039","",100,0,219);
   Graph_Graph3039->SetMinimum(-0.9964763);
   Graph_Graph3039->SetMaximum(5.425612);
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
   TLegendEntry *entry=leg->AddEntry("new_histo_group_Fake_wh3l_13TeV_ossf_pt1","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_13TeV_ossf_pt1","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_13TeV_ossf_pt1","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_13TeV_ossf_pt1","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_13TeV_ossf_pt1","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_13TeV_ossf_pt1","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_13TeV_ossf_pt1","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_13TeV_ossf_pt1","Data","EPL");
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
   entry=leg->AddEntry("new_histo_group_Fake_wh3l_13TeV_ossf_pt1","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_13TeV_ossf_pt1","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_13TeV_ossf_pt1","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_13TeV_ossf_pt1","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_13TeV_ossf_pt1","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_13TeV_ossf_pt1","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_13TeV_ossf_pt1","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_13TeV_ossf_pt1","Data","EPL");
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
   hframe_copy200->SetMaximum(8.227751);
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
   ccwh3l_13TeV_ossf_pt1->Modified();
   ccwh3l_13TeV_ossf_pt1->cd();
   ccwh3l_13TeV_ossf_pt1->SetSelected(ccwh3l_13TeV_ossf_pt1);
}
