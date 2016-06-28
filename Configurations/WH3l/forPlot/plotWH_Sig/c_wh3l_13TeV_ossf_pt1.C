void c_wh3l_13TeV_ossf_pt1()
{
//=========Macro generated from canvas: ccwh3l_13TeV_ossf_pt1/cc
//=========  (Tue Jun 28 13:56:17 2016) by ROOT version6.02/13
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
   
   TH1F *hframe81 = new TH1F("hframe81","",1000,10,200);
   hframe81->SetMinimum(0);
   hframe81->SetMaximum(8.227751);
   hframe81->SetDirectory(0);
   hframe81->SetStats(0);
   hframe81->SetLineStyle(0);
   hframe81->SetMarkerStyle(20);
   hframe81->GetXaxis()->SetTitle("lept1_p_{T} [GeV]");
   hframe81->GetXaxis()->SetNdivisions(506);
   hframe81->GetXaxis()->SetLabelFont(42);
   hframe81->GetXaxis()->SetLabelOffset(0.007);
   hframe81->GetXaxis()->SetLabelSize(0.05);
   hframe81->GetXaxis()->SetTitleSize(0.06);
   hframe81->GetXaxis()->SetTitleOffset(0.9);
   hframe81->GetXaxis()->SetTitleFont(42);
   hframe81->GetYaxis()->SetTitle("Events");
   hframe81->GetYaxis()->SetLabelFont(42);
   hframe81->GetYaxis()->SetLabelOffset(0.007);
   hframe81->GetYaxis()->SetLabelSize(0.05);
   hframe81->GetYaxis()->SetTitleSize(0.06);
   hframe81->GetYaxis()->SetTitleOffset(1.25);
   hframe81->GetYaxis()->SetTitleFont(42);
   hframe81->GetZaxis()->SetLabelFont(42);
   hframe81->GetZaxis()->SetLabelOffset(0.007);
   hframe81->GetZaxis()->SetLabelSize(0.05);
   hframe81->GetZaxis()->SetTitleSize(0.06);
   hframe81->GetZaxis()->SetTitleFont(42);
   hframe81->Draw(" ");
   
   THStack *thsBackground_grouped_wh3l_13TeV_ossf_pt1 = new THStack();
   thsBackground_grouped_wh3l_13TeV_ossf_pt1->SetName("thsBackground_grouped_wh3l_13TeV_ossf_pt1");
   thsBackground_grouped_wh3l_13TeV_ossf_pt1->SetTitle("thsBackground_grouped_wh3l_13TeV_ossf_pt1");
   
   TH1F *thsBackground_grouped_wh3l_13TeV_ossf_pt1_stack_17 = new TH1F("thsBackground_grouped_wh3l_13TeV_ossf_pt1_stack_17","thsBackground_grouped_wh3l_13TeV_ossf_pt1",25,10,200);
   thsBackground_grouped_wh3l_13TeV_ossf_pt1_stack_17->SetMinimum(-0.8259209);
   thsBackground_grouped_wh3l_13TeV_ossf_pt1_stack_17->SetMaximum(3.455655);
   thsBackground_grouped_wh3l_13TeV_ossf_pt1_stack_17->SetDirectory(0);
   thsBackground_grouped_wh3l_13TeV_ossf_pt1_stack_17->SetStats(0);
   thsBackground_grouped_wh3l_13TeV_ossf_pt1_stack_17->SetLineStyle(0);
   thsBackground_grouped_wh3l_13TeV_ossf_pt1_stack_17->SetMarkerStyle(20);
   thsBackground_grouped_wh3l_13TeV_ossf_pt1_stack_17->GetXaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_13TeV_ossf_pt1_stack_17->GetXaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_13TeV_ossf_pt1_stack_17->GetXaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_13TeV_ossf_pt1_stack_17->GetXaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_13TeV_ossf_pt1_stack_17->GetXaxis()->SetTitleOffset(0.9);
   thsBackground_grouped_wh3l_13TeV_ossf_pt1_stack_17->GetXaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_ossf_pt1_stack_17->GetYaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_13TeV_ossf_pt1_stack_17->GetYaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_13TeV_ossf_pt1_stack_17->GetYaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_13TeV_ossf_pt1_stack_17->GetYaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_13TeV_ossf_pt1_stack_17->GetYaxis()->SetTitleOffset(1.25);
   thsBackground_grouped_wh3l_13TeV_ossf_pt1_stack_17->GetYaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_ossf_pt1_stack_17->GetZaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_13TeV_ossf_pt1_stack_17->GetZaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_13TeV_ossf_pt1_stack_17->GetZaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_13TeV_ossf_pt1_stack_17->GetZaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_13TeV_ossf_pt1_stack_17->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_ossf_pt1->SetHistogram(thsBackground_grouped_wh3l_13TeV_ossf_pt1_stack_17);
   
   
   TH1D *new_histo_group_Fake_wh3l_13TeV_ossf_pt182 = new TH1D("new_histo_group_Fake_wh3l_13TeV_ossf_pt182","histo_Fake",25,10,200);
   new_histo_group_Fake_wh3l_13TeV_ossf_pt182->SetBinContent(2,-0.07253187);
   new_histo_group_Fake_wh3l_13TeV_ossf_pt182->SetBinContent(3,0.5578663);
   new_histo_group_Fake_wh3l_13TeV_ossf_pt182->SetBinContent(4,1.680171);
   new_histo_group_Fake_wh3l_13TeV_ossf_pt182->SetBinContent(5,0.5930959);
   new_histo_group_Fake_wh3l_13TeV_ossf_pt182->SetBinContent(6,2.059149);
   new_histo_group_Fake_wh3l_13TeV_ossf_pt182->SetBinContent(7,-0.4321505);
   new_histo_group_Fake_wh3l_13TeV_ossf_pt182->SetBinContent(8,0.3769465);
   new_histo_group_Fake_wh3l_13TeV_ossf_pt182->SetBinContent(9,0.3132685);
   new_histo_group_Fake_wh3l_13TeV_ossf_pt182->SetBinContent(10,0.1354057);
   new_histo_group_Fake_wh3l_13TeV_ossf_pt182->SetBinContent(11,0.7602637);
   new_histo_group_Fake_wh3l_13TeV_ossf_pt182->SetBinContent(12,0.01237054);
   new_histo_group_Fake_wh3l_13TeV_ossf_pt182->SetBinContent(13,-0.08191734);
   new_histo_group_Fake_wh3l_13TeV_ossf_pt182->SetBinContent(14,3.916463e-05);
   new_histo_group_Fake_wh3l_13TeV_ossf_pt182->SetBinContent(20,-0.02257761);
   new_histo_group_Fake_wh3l_13TeV_ossf_pt182->SetBinContent(21,0.8476363);
   new_histo_group_Fake_wh3l_13TeV_ossf_pt182->SetBinContent(23,-0.008195123);
   new_histo_group_Fake_wh3l_13TeV_ossf_pt182->SetBinError(2,0.04789861);
   new_histo_group_Fake_wh3l_13TeV_ossf_pt182->SetBinError(3,0.5810336);
   new_histo_group_Fake_wh3l_13TeV_ossf_pt182->SetBinError(4,0.9769723);
   new_histo_group_Fake_wh3l_13TeV_ossf_pt182->SetBinError(5,0.6519216);
   new_histo_group_Fake_wh3l_13TeV_ossf_pt182->SetBinError(6,1.185788);
   new_histo_group_Fake_wh3l_13TeV_ossf_pt182->SetBinError(7,0.3937705);
   new_histo_group_Fake_wh3l_13TeV_ossf_pt182->SetBinError(8,0.3011719);
   new_histo_group_Fake_wh3l_13TeV_ossf_pt182->SetBinError(9,0.2797682);
   new_histo_group_Fake_wh3l_13TeV_ossf_pt182->SetBinError(10,0.1354057);
   new_histo_group_Fake_wh3l_13TeV_ossf_pt182->SetBinError(11,0.8013833);
   new_histo_group_Fake_wh3l_13TeV_ossf_pt182->SetBinError(12,0.01294696);
   new_histo_group_Fake_wh3l_13TeV_ossf_pt182->SetBinError(13,0.09378294);
   new_histo_group_Fake_wh3l_13TeV_ossf_pt182->SetBinError(14,3.916463e-05);
   new_histo_group_Fake_wh3l_13TeV_ossf_pt182->SetBinError(20,0.02257761);
   new_histo_group_Fake_wh3l_13TeV_ossf_pt182->SetBinError(21,0.8476363);
   new_histo_group_Fake_wh3l_13TeV_ossf_pt182->SetBinError(23,0.008195123);
   new_histo_group_Fake_wh3l_13TeV_ossf_pt182->SetEntries(81);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_13TeV_ossf_pt182->SetFillColor(ci);
   new_histo_group_Fake_wh3l_13TeV_ossf_pt182->SetFillStyle(3001);

   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_13TeV_ossf_pt182->SetLineColor(ci);
   new_histo_group_Fake_wh3l_13TeV_ossf_pt182->GetXaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_13TeV_ossf_pt182->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_13TeV_ossf_pt182->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_13TeV_ossf_pt182->GetXaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_13TeV_ossf_pt182->GetYaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_13TeV_ossf_pt182->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_13TeV_ossf_pt182->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_13TeV_ossf_pt182->GetYaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_13TeV_ossf_pt182->GetZaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_13TeV_ossf_pt182->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_13TeV_ossf_pt182->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_13TeV_ossf_pt182->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_ossf_pt1->Add(new_histo_group_Fake_wh3l_13TeV_ossf_pt1,"");
   
   TH1D *new_histo_group_WW_wh3l_13TeV_ossf_pt183 = new TH1D("new_histo_group_WW_wh3l_13TeV_ossf_pt183","histo_WW",25,10,200);
   new_histo_group_WW_wh3l_13TeV_ossf_pt183->SetBinContent(5,0.01044191);
   new_histo_group_WW_wh3l_13TeV_ossf_pt183->SetBinContent(6,0.03235779);
   new_histo_group_WW_wh3l_13TeV_ossf_pt183->SetBinContent(9,0.02977813);
   new_histo_group_WW_wh3l_13TeV_ossf_pt183->SetBinError(5,0.01044191);
   new_histo_group_WW_wh3l_13TeV_ossf_pt183->SetBinError(6,0.02304949);
   new_histo_group_WW_wh3l_13TeV_ossf_pt183->SetBinError(9,0.02106448);
   new_histo_group_WW_wh3l_13TeV_ossf_pt183->SetEntries(5);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_13TeV_ossf_pt183->SetFillColor(ci);
   new_histo_group_WW_wh3l_13TeV_ossf_pt183->SetFillStyle(3001);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_13TeV_ossf_pt183->SetLineColor(ci);
   new_histo_group_WW_wh3l_13TeV_ossf_pt183->GetXaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_13TeV_ossf_pt183->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_13TeV_ossf_pt183->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_13TeV_ossf_pt183->GetXaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_13TeV_ossf_pt183->GetYaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_13TeV_ossf_pt183->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_13TeV_ossf_pt183->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_13TeV_ossf_pt183->GetYaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_13TeV_ossf_pt183->GetZaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_13TeV_ossf_pt183->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_13TeV_ossf_pt183->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_13TeV_ossf_pt183->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_ossf_pt1->Add(new_histo_group_WW_wh3l_13TeV_ossf_pt1,"");
   
   TH1D *new_histo_group_VVV_wh3l_13TeV_ossf_pt184 = new TH1D("new_histo_group_VVV_wh3l_13TeV_ossf_pt184","histo_VVV",25,10,200);
   new_histo_group_VVV_wh3l_13TeV_ossf_pt184->SetBinContent(4,0.0006249245);
   new_histo_group_VVV_wh3l_13TeV_ossf_pt184->SetBinContent(5,0.0002076036);
   new_histo_group_VVV_wh3l_13TeV_ossf_pt184->SetBinContent(7,0.0006883418);
   new_histo_group_VVV_wh3l_13TeV_ossf_pt184->SetBinContent(8,0.0006127095);
   new_histo_group_VVV_wh3l_13TeV_ossf_pt184->SetBinContent(9,0.0002902478);
   new_histo_group_VVV_wh3l_13TeV_ossf_pt184->SetBinContent(11,0.0006276043);
   new_histo_group_VVV_wh3l_13TeV_ossf_pt184->SetBinContent(12,0.0006878311);
   new_histo_group_VVV_wh3l_13TeV_ossf_pt184->SetBinContent(13,0.000653768);
   new_histo_group_VVV_wh3l_13TeV_ossf_pt184->SetBinContent(14,0.0006504452);
   new_histo_group_VVV_wh3l_13TeV_ossf_pt184->SetBinContent(18,0.0006405607);
   new_histo_group_VVV_wh3l_13TeV_ossf_pt184->SetBinContent(20,0.0006343185);
   new_histo_group_VVV_wh3l_13TeV_ossf_pt184->SetBinContent(25,0.0006729142);
   new_histo_group_VVV_wh3l_13TeV_ossf_pt184->SetBinError(4,0.0006249245);
   new_histo_group_VVV_wh3l_13TeV_ossf_pt184->SetBinError(5,0.0002076036);
   new_histo_group_VVV_wh3l_13TeV_ossf_pt184->SetBinError(7,0.0006883418);
   new_histo_group_VVV_wh3l_13TeV_ossf_pt184->SetBinError(8,0.0006127095);
   new_histo_group_VVV_wh3l_13TeV_ossf_pt184->SetBinError(9,0.0002902478);
   new_histo_group_VVV_wh3l_13TeV_ossf_pt184->SetBinError(11,0.0006276043);
   new_histo_group_VVV_wh3l_13TeV_ossf_pt184->SetBinError(12,0.0006878311);
   new_histo_group_VVV_wh3l_13TeV_ossf_pt184->SetBinError(13,0.000653768);
   new_histo_group_VVV_wh3l_13TeV_ossf_pt184->SetBinError(14,0.0006504452);
   new_histo_group_VVV_wh3l_13TeV_ossf_pt184->SetBinError(18,0.0006405607);
   new_histo_group_VVV_wh3l_13TeV_ossf_pt184->SetBinError(20,0.0006343185);
   new_histo_group_VVV_wh3l_13TeV_ossf_pt184->SetBinError(25,0.0006729142);
   new_histo_group_VVV_wh3l_13TeV_ossf_pt184->SetEntries(12);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_13TeV_ossf_pt184->SetFillColor(ci);
   new_histo_group_VVV_wh3l_13TeV_ossf_pt184->SetFillStyle(3001);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_13TeV_ossf_pt184->SetLineColor(ci);
   new_histo_group_VVV_wh3l_13TeV_ossf_pt184->GetXaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_13TeV_ossf_pt184->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_13TeV_ossf_pt184->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_13TeV_ossf_pt184->GetXaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_13TeV_ossf_pt184->GetYaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_13TeV_ossf_pt184->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_13TeV_ossf_pt184->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_13TeV_ossf_pt184->GetYaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_13TeV_ossf_pt184->GetZaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_13TeV_ossf_pt184->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_13TeV_ossf_pt184->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_13TeV_ossf_pt184->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_ossf_pt1->Add(new_histo_group_VVV_wh3l_13TeV_ossf_pt1,"");
   
   TH1D *new_histo_group_Vg_wh3l_13TeV_ossf_pt185 = new TH1D("new_histo_group_Vg_wh3l_13TeV_ossf_pt185","histo_Vg",25,10,200);
   new_histo_group_Vg_wh3l_13TeV_ossf_pt185->SetBinContent(2,0.1353116);
   new_histo_group_Vg_wh3l_13TeV_ossf_pt185->SetBinContent(3,1.011405);
   new_histo_group_Vg_wh3l_13TeV_ossf_pt185->SetBinContent(4,0.3778996);
   new_histo_group_Vg_wh3l_13TeV_ossf_pt185->SetBinContent(5,0.7303915);
   new_histo_group_Vg_wh3l_13TeV_ossf_pt185->SetBinContent(6,0.4114199);
   new_histo_group_Vg_wh3l_13TeV_ossf_pt185->SetBinContent(8,0.1048186);
   new_histo_group_Vg_wh3l_13TeV_ossf_pt185->SetBinContent(9,-0.1230777);
   new_histo_group_Vg_wh3l_13TeV_ossf_pt185->SetBinError(2,0.1120881);
   new_histo_group_Vg_wh3l_13TeV_ossf_pt185->SetBinError(3,0.3128352);
   new_histo_group_Vg_wh3l_13TeV_ossf_pt185->SetBinError(4,0.2832874);
   new_histo_group_Vg_wh3l_13TeV_ossf_pt185->SetBinError(5,0.2617258);
   new_histo_group_Vg_wh3l_13TeV_ossf_pt185->SetBinError(6,0.1990974);
   new_histo_group_Vg_wh3l_13TeV_ossf_pt185->SetBinError(8,0.1048186);
   new_histo_group_Vg_wh3l_13TeV_ossf_pt185->SetBinError(9,0.1230777);
   new_histo_group_Vg_wh3l_13TeV_ossf_pt185->SetEntries(42);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_13TeV_ossf_pt185->SetFillColor(ci);
   new_histo_group_Vg_wh3l_13TeV_ossf_pt185->SetFillStyle(3001);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_13TeV_ossf_pt185->SetLineColor(ci);
   new_histo_group_Vg_wh3l_13TeV_ossf_pt185->GetXaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_13TeV_ossf_pt185->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_13TeV_ossf_pt185->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_13TeV_ossf_pt185->GetXaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_13TeV_ossf_pt185->GetYaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_13TeV_ossf_pt185->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_13TeV_ossf_pt185->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_13TeV_ossf_pt185->GetYaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_13TeV_ossf_pt185->GetZaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_13TeV_ossf_pt185->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_13TeV_ossf_pt185->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_13TeV_ossf_pt185->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_ossf_pt1->Add(new_histo_group_Vg_wh3l_13TeV_ossf_pt1,"");
   
   TH1D *new_histo_group_ZZ_wh3l_13TeV_ossf_pt186 = new TH1D("new_histo_group_ZZ_wh3l_13TeV_ossf_pt186","histo_ZZ",25,10,200);
   new_histo_group_ZZ_wh3l_13TeV_ossf_pt186->SetBinContent(2,0.02640386);
   new_histo_group_ZZ_wh3l_13TeV_ossf_pt186->SetBinContent(3,0.07747764);
   new_histo_group_ZZ_wh3l_13TeV_ossf_pt186->SetBinContent(4,0.1369423);
   new_histo_group_ZZ_wh3l_13TeV_ossf_pt186->SetBinContent(5,0.08272321);
   new_histo_group_ZZ_wh3l_13TeV_ossf_pt186->SetBinContent(6,0.04248237);
   new_histo_group_ZZ_wh3l_13TeV_ossf_pt186->SetBinContent(11,0.02856258);
   new_histo_group_ZZ_wh3l_13TeV_ossf_pt186->SetBinContent(12,0.1261614);
   new_histo_group_ZZ_wh3l_13TeV_ossf_pt186->SetBinContent(13,0.02711696);
   new_histo_group_ZZ_wh3l_13TeV_ossf_pt186->SetBinContent(17,0.02088597);
   new_histo_group_ZZ_wh3l_13TeV_ossf_pt186->SetBinError(2,0.02640386);
   new_histo_group_ZZ_wh3l_13TeV_ossf_pt186->SetBinError(3,0.05497137);
   new_histo_group_ZZ_wh3l_13TeV_ossf_pt186->SetBinError(4,0.0793716);
   new_histo_group_ZZ_wh3l_13TeV_ossf_pt186->SetBinError(5,0.05856026);
   new_histo_group_ZZ_wh3l_13TeV_ossf_pt186->SetBinError(6,0.03177358);
   new_histo_group_ZZ_wh3l_13TeV_ossf_pt186->SetBinError(11,0.02856258);
   new_histo_group_ZZ_wh3l_13TeV_ossf_pt186->SetBinError(12,0.07449396);
   new_histo_group_ZZ_wh3l_13TeV_ossf_pt186->SetBinError(13,0.02711696);
   new_histo_group_ZZ_wh3l_13TeV_ossf_pt186->SetBinError(17,0.02088597);
   new_histo_group_ZZ_wh3l_13TeV_ossf_pt186->SetEntries(17);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_13TeV_ossf_pt186->SetFillColor(ci);
   new_histo_group_ZZ_wh3l_13TeV_ossf_pt186->SetFillStyle(3001);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_13TeV_ossf_pt186->SetLineColor(ci);
   new_histo_group_ZZ_wh3l_13TeV_ossf_pt186->GetXaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_13TeV_ossf_pt186->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_13TeV_ossf_pt186->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_13TeV_ossf_pt186->GetXaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_13TeV_ossf_pt186->GetYaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_13TeV_ossf_pt186->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_13TeV_ossf_pt186->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_13TeV_ossf_pt186->GetYaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_13TeV_ossf_pt186->GetZaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_13TeV_ossf_pt186->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_13TeV_ossf_pt186->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_13TeV_ossf_pt186->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_ossf_pt1->Add(new_histo_group_ZZ_wh3l_13TeV_ossf_pt1,"");
   
   TH1D *new_histo_group_WZ_wh3l_13TeV_ossf_pt187 = new TH1D("new_histo_group_WZ_wh3l_13TeV_ossf_pt187","histo_WZ",25,10,200);
   new_histo_group_WZ_wh3l_13TeV_ossf_pt187->SetBinContent(2,0.2758234);
   new_histo_group_WZ_wh3l_13TeV_ossf_pt187->SetBinContent(3,0.9017204);
   new_histo_group_WZ_wh3l_13TeV_ossf_pt187->SetBinContent(4,1.032123);
   new_histo_group_WZ_wh3l_13TeV_ossf_pt187->SetBinContent(5,1.062229);
   new_histo_group_WZ_wh3l_13TeV_ossf_pt187->SetBinContent(6,0.6798093);
   new_histo_group_WZ_wh3l_13TeV_ossf_pt187->SetBinContent(7,0.4377456);
   new_histo_group_WZ_wh3l_13TeV_ossf_pt187->SetBinContent(8,0.4588359);
   new_histo_group_WZ_wh3l_13TeV_ossf_pt187->SetBinContent(9,0.3011565);
   new_histo_group_WZ_wh3l_13TeV_ossf_pt187->SetBinContent(10,0.3769869);
   new_histo_group_WZ_wh3l_13TeV_ossf_pt187->SetBinContent(11,0.2121879);
   new_histo_group_WZ_wh3l_13TeV_ossf_pt187->SetBinContent(12,0.196429);
   new_histo_group_WZ_wh3l_13TeV_ossf_pt187->SetBinContent(13,0.1448141);
   new_histo_group_WZ_wh3l_13TeV_ossf_pt187->SetBinContent(14,0.1137797);
   new_histo_group_WZ_wh3l_13TeV_ossf_pt187->SetBinContent(15,0.09524812);
   new_histo_group_WZ_wh3l_13TeV_ossf_pt187->SetBinContent(16,0.07183034);
   new_histo_group_WZ_wh3l_13TeV_ossf_pt187->SetBinContent(17,0.0597478);
   new_histo_group_WZ_wh3l_13TeV_ossf_pt187->SetBinContent(18,0.03152202);
   new_histo_group_WZ_wh3l_13TeV_ossf_pt187->SetBinContent(19,0.05857285);
   new_histo_group_WZ_wh3l_13TeV_ossf_pt187->SetBinContent(20,0.03402953);
   new_histo_group_WZ_wh3l_13TeV_ossf_pt187->SetBinContent(21,0.03722657);
   new_histo_group_WZ_wh3l_13TeV_ossf_pt187->SetBinContent(22,0.02984914);
   new_histo_group_WZ_wh3l_13TeV_ossf_pt187->SetBinContent(23,0.02606678);
   new_histo_group_WZ_wh3l_13TeV_ossf_pt187->SetBinContent(24,0.02074515);
   new_histo_group_WZ_wh3l_13TeV_ossf_pt187->SetBinContent(25,0.01340563);
   new_histo_group_WZ_wh3l_13TeV_ossf_pt187->SetBinContent(26,0.2484932);
   new_histo_group_WZ_wh3l_13TeV_ossf_pt187->SetBinError(2,0.03854678);
   new_histo_group_WZ_wh3l_13TeV_ossf_pt187->SetBinError(3,0.07051147);
   new_histo_group_WZ_wh3l_13TeV_ossf_pt187->SetBinError(4,0.07499213);
   new_histo_group_WZ_wh3l_13TeV_ossf_pt187->SetBinError(5,0.07708707);
   new_histo_group_WZ_wh3l_13TeV_ossf_pt187->SetBinError(6,0.06061942);
   new_histo_group_WZ_wh3l_13TeV_ossf_pt187->SetBinError(7,0.04769566);
   new_histo_group_WZ_wh3l_13TeV_ossf_pt187->SetBinError(8,0.04926508);
   new_histo_group_WZ_wh3l_13TeV_ossf_pt187->SetBinError(9,0.04041318);
   new_histo_group_WZ_wh3l_13TeV_ossf_pt187->SetBinError(10,0.04585691);
   new_histo_group_WZ_wh3l_13TeV_ossf_pt187->SetBinError(11,0.034177);
   new_histo_group_WZ_wh3l_13TeV_ossf_pt187->SetBinError(12,0.0323261);
   new_histo_group_WZ_wh3l_13TeV_ossf_pt187->SetBinError(13,0.02872314);
   new_histo_group_WZ_wh3l_13TeV_ossf_pt187->SetBinError(14,0.02435267);
   new_histo_group_WZ_wh3l_13TeV_ossf_pt187->SetBinError(15,0.0228684);
   new_histo_group_WZ_wh3l_13TeV_ossf_pt187->SetBinError(16,0.01895741);
   new_histo_group_WZ_wh3l_13TeV_ossf_pt187->SetBinError(17,0.01748246);
   new_histo_group_WZ_wh3l_13TeV_ossf_pt187->SetBinError(18,0.01297632);
   new_histo_group_WZ_wh3l_13TeV_ossf_pt187->SetBinError(19,0.01740276);
   new_histo_group_WZ_wh3l_13TeV_ossf_pt187->SetBinError(20,0.013629);
   new_histo_group_WZ_wh3l_13TeV_ossf_pt187->SetBinError(21,0.01419599);
   new_histo_group_WZ_wh3l_13TeV_ossf_pt187->SetBinError(22,0.01236242);
   new_histo_group_WZ_wh3l_13TeV_ossf_pt187->SetBinError(23,0.01245507);
   new_histo_group_WZ_wh3l_13TeV_ossf_pt187->SetBinError(24,0.009789282);
   new_histo_group_WZ_wh3l_13TeV_ossf_pt187->SetBinError(25,0.007171629);
   new_histo_group_WZ_wh3l_13TeV_ossf_pt187->SetBinError(26,0.03678277);
   new_histo_group_WZ_wh3l_13TeV_ossf_pt187->SetEntries(1419);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_13TeV_ossf_pt187->SetFillColor(ci);
   new_histo_group_WZ_wh3l_13TeV_ossf_pt187->SetFillStyle(3001);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_13TeV_ossf_pt187->SetLineColor(ci);
   new_histo_group_WZ_wh3l_13TeV_ossf_pt187->GetXaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_13TeV_ossf_pt187->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_13TeV_ossf_pt187->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_13TeV_ossf_pt187->GetXaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_13TeV_ossf_pt187->GetYaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_13TeV_ossf_pt187->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_13TeV_ossf_pt187->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_13TeV_ossf_pt187->GetYaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_13TeV_ossf_pt187->GetZaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_13TeV_ossf_pt187->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_13TeV_ossf_pt187->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_13TeV_ossf_pt187->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_ossf_pt1->Add(new_histo_group_WZ_wh3l_13TeV_ossf_pt1,"");
   
   TH1D *new_histo_group_Higgs_wh3l_13TeV_ossf_pt188 = new TH1D("new_histo_group_Higgs_wh3l_13TeV_ossf_pt188","histo_H_htt",25,10,200);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt188->SetBinContent(2,0.01003289);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt188->SetBinContent(3,0.02766027);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt188->SetBinContent(4,0.06333875);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt188->SetBinContent(5,0.07827847);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt188->SetBinContent(6,0.05413196);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt188->SetBinContent(7,0.04774233);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt188->SetBinContent(8,0.04193582);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt188->SetBinContent(9,0.0388392);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt188->SetBinContent(10,0.03687502);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt188->SetBinContent(11,0.02342018);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt188->SetBinContent(12,0.01874024);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt188->SetBinContent(13,0.02155781);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt188->SetBinContent(14,0.0190565);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt188->SetBinContent(15,0.01590917);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt188->SetBinContent(16,0.02403608);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt188->SetBinContent(17,0.01081356);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt188->SetBinContent(18,0.01136582);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt188->SetBinContent(19,0.005703481);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt188->SetBinContent(20,0.003246558);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt188->SetBinContent(21,0.003035749);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt188->SetBinContent(22,0.004363685);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt188->SetBinContent(23,0.001815698);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt188->SetBinContent(24,0.003919247);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt188->SetBinContent(25,0.005489135);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt188->SetBinContent(26,0.02589277);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt188->SetBinError(2,0.00369439);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt188->SetBinError(3,0.005298203);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt188->SetBinError(4,0.008178052);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt188->SetBinError(5,0.01035393);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt188->SetBinError(6,0.008055918);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt188->SetBinError(7,0.008155718);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt188->SetBinError(8,0.006199748);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt188->SetBinError(9,0.006813532);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt188->SetBinError(10,0.006783146);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt188->SetBinError(11,0.005534155);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt188->SetBinError(12,0.005159666);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt188->SetBinError(13,0.004791262);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt188->SetBinError(14,0.004841949);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt188->SetBinError(15,0.003896735);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt188->SetBinError(16,0.005913634);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt188->SetBinError(17,0.003475839);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt188->SetBinError(18,0.003705532);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt188->SetBinError(19,0.002476319);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt188->SetBinError(20,0.00114525);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt188->SetBinError(21,0.001332354);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt188->SetBinError(22,0.001925038);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt188->SetBinError(23,0.0008824004);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt188->SetBinError(24,0.001810921);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt188->SetBinError(25,0.002871557);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt188->SetBinError(26,0.005658254);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt188->SetEntries(946);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt188->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt188->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt188->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt188->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt188->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt188->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt188->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt188->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt188->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt188->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt188->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt188->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt188->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt188->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt188->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_ossf_pt1->Add(new_histo_group_Higgs_wh3l_13TeV_ossf_pt1,"");
   thsBackground_grouped_wh3l_13TeV_ossf_pt1->Draw("hist same");
   
   thsSignal_grouped_wh3l_13TeV_ossf_pt1 = new THStack();
   thsSignal_grouped_wh3l_13TeV_ossf_pt1->SetName("thsSignal_grouped_wh3l_13TeV_ossf_pt1");
   thsSignal_grouped_wh3l_13TeV_ossf_pt1->SetTitle("thsSignal_grouped_wh3l_13TeV_ossf_pt1");
   
   TH1F *thsSignal_grouped_wh3l_13TeV_ossf_pt1_stack_18 = new TH1F("thsSignal_grouped_wh3l_13TeV_ossf_pt1_stack_18","thsSignal_grouped_wh3l_13TeV_ossf_pt1",25,10,200);
   thsSignal_grouped_wh3l_13TeV_ossf_pt1_stack_18->SetMinimum(0);
   thsSignal_grouped_wh3l_13TeV_ossf_pt1_stack_18->SetMaximum(0.09306402);
   thsSignal_grouped_wh3l_13TeV_ossf_pt1_stack_18->SetDirectory(0);
   thsSignal_grouped_wh3l_13TeV_ossf_pt1_stack_18->SetStats(0);
   thsSignal_grouped_wh3l_13TeV_ossf_pt1_stack_18->SetLineStyle(0);
   thsSignal_grouped_wh3l_13TeV_ossf_pt1_stack_18->SetMarkerStyle(20);
   thsSignal_grouped_wh3l_13TeV_ossf_pt1_stack_18->GetXaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_13TeV_ossf_pt1_stack_18->GetXaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_13TeV_ossf_pt1_stack_18->GetXaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_13TeV_ossf_pt1_stack_18->GetXaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_13TeV_ossf_pt1_stack_18->GetXaxis()->SetTitleOffset(0.9);
   thsSignal_grouped_wh3l_13TeV_ossf_pt1_stack_18->GetXaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_13TeV_ossf_pt1_stack_18->GetYaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_13TeV_ossf_pt1_stack_18->GetYaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_13TeV_ossf_pt1_stack_18->GetYaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_13TeV_ossf_pt1_stack_18->GetYaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_13TeV_ossf_pt1_stack_18->GetYaxis()->SetTitleOffset(1.25);
   thsSignal_grouped_wh3l_13TeV_ossf_pt1_stack_18->GetYaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_13TeV_ossf_pt1_stack_18->GetZaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_13TeV_ossf_pt1_stack_18->GetZaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_13TeV_ossf_pt1_stack_18->GetZaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_13TeV_ossf_pt1_stack_18->GetZaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_13TeV_ossf_pt1_stack_18->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_13TeV_ossf_pt1->SetHistogram(thsSignal_grouped_wh3l_13TeV_ossf_pt1_stack_18);
   
   
   TH1D *new_histo_group_Higgs_wh3l_13TeV_ossf_pt189 = new TH1D("new_histo_group_Higgs_wh3l_13TeV_ossf_pt189","histo_H_htt",25,10,200);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt189->SetBinContent(2,0.01003289);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt189->SetBinContent(3,0.02766027);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt189->SetBinContent(4,0.06333875);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt189->SetBinContent(5,0.07827847);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt189->SetBinContent(6,0.05413196);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt189->SetBinContent(7,0.04774233);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt189->SetBinContent(8,0.04193582);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt189->SetBinContent(9,0.0388392);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt189->SetBinContent(10,0.03687502);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt189->SetBinContent(11,0.02342018);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt189->SetBinContent(12,0.01874024);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt189->SetBinContent(13,0.02155781);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt189->SetBinContent(14,0.0190565);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt189->SetBinContent(15,0.01590917);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt189->SetBinContent(16,0.02403608);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt189->SetBinContent(17,0.01081356);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt189->SetBinContent(18,0.01136582);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt189->SetBinContent(19,0.005703481);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt189->SetBinContent(20,0.003246558);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt189->SetBinContent(21,0.003035749);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt189->SetBinContent(22,0.004363685);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt189->SetBinContent(23,0.001815698);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt189->SetBinContent(24,0.003919247);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt189->SetBinContent(25,0.005489135);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt189->SetBinContent(26,0.02589277);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt189->SetBinError(2,0.00369439);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt189->SetBinError(3,0.005298203);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt189->SetBinError(4,0.008178052);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt189->SetBinError(5,0.01035393);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt189->SetBinError(6,0.008055918);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt189->SetBinError(7,0.008155718);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt189->SetBinError(8,0.006199748);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt189->SetBinError(9,0.006813532);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt189->SetBinError(10,0.006783146);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt189->SetBinError(11,0.005534155);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt189->SetBinError(12,0.005159666);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt189->SetBinError(13,0.004791262);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt189->SetBinError(14,0.004841949);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt189->SetBinError(15,0.003896735);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt189->SetBinError(16,0.005913634);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt189->SetBinError(17,0.003475839);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt189->SetBinError(18,0.003705532);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt189->SetBinError(19,0.002476319);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt189->SetBinError(20,0.00114525);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt189->SetBinError(21,0.001332354);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt189->SetBinError(22,0.001925038);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt189->SetBinError(23,0.0008824004);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt189->SetBinError(24,0.001810921);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt189->SetBinError(25,0.002871557);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt189->SetBinError(26,0.005658254);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt189->SetEntries(946);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt189->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt189->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt189->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt189->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt189->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt189->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt189->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt189->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt189->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt189->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt189->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt189->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt189->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt189->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt189->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_13TeV_ossf_pt1->Add(new_histo_group_Higgs_wh3l_13TeV_ossf_pt1,"");
   thsSignal_grouped_wh3l_13TeV_ossf_pt1->Draw("hist same noclear");
   
   Double_t _fx3017[25] = {
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
   Double_t _fy3017[25] = {
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
   Double_t _felx3017[25] = {
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
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
   Double_t _fely3017[25] = {
   0,
   0.2260295,
   1.010573,
   1.502395,
   1.017051,
   1.622579,
   0.4607694,
   0.4696935,
   0.4740303,
   0.1857586,
   0.8546277,
   0.1199848,
   0.1522748,
   0.02504233,
   0.0228684,
   0.01895741,
   0.03837257,
   0.01361689,
   0.01740276,
   0.03745839,
   0.8985648,
   0.01236242,
   0.02079603,
   0.009789282,
   0.007844566};
   Double_t _fehx3017[25] = {
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
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
   Double_t _fehy3017[25] = {
   0,
   0.2260295,
   1.033417,
   1.502394,
   1.075005,
   1.622579,
   0.4607694,
   0.4696935,
   0.4740303,
   0.1857586,
   0.8943233,
   0.1205607,
   0.140578,
   0.02504232,
   0.0228684,
   0.01895742,
   0.03837257,
   0.01361689,
   0.01740277,
   0.03745839,
   0.8985649,
   0.01236243,
   0.02079603,
   0.009789281,
   0.007844565};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(25,_fx3017,_fy3017,_felx3017,_fehx3017,_fely3017,_fehy3017);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(12);
   grae->SetFillStyle(3004);
   grae->SetLineColor(12);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3017 = new TH1F("Graph_Graph3017","",100,0,219);
   Graph_Graph3017->SetMinimum(-0.9847143);
   Graph_Graph3017->SetMaximum(5.378027);
   Graph_Graph3017->SetDirectory(0);
   Graph_Graph3017->SetStats(0);
   Graph_Graph3017->SetLineStyle(0);
   Graph_Graph3017->SetMarkerStyle(20);
   Graph_Graph3017->GetXaxis()->SetLabelFont(42);
   Graph_Graph3017->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3017->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3017->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3017->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3017->GetXaxis()->SetTitleFont(42);
   Graph_Graph3017->GetYaxis()->SetLabelFont(42);
   Graph_Graph3017->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3017->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3017->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3017->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3017->GetYaxis()->SetTitleFont(42);
   Graph_Graph3017->GetZaxis()->SetLabelFont(42);
   Graph_Graph3017->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3017->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3017->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3017->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3017);
   
   grae->Draw("2");
   
   Double_t _fx3018[25] = {
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
   Double_t _fy3018[25] = {
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
   Double_t _felx3018[25] = {
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
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
   Double_t _fely3018[25] = {
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
   Double_t _fehx3018[25] = {
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
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
   Double_t _fehy3018[25] = {
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
   grae = new TGraphAsymmErrors(25,_fx3018,_fy3018,_felx3018,_fehx3018,_fely3018,_fehy3018);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(1);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3018 = new TH1F("Graph_Graph3018","",100,0,219);
   Graph_Graph3018->SetMinimum(0);
   Graph_Graph3018->SetMaximum(1.262698);
   Graph_Graph3018->SetDirectory(0);
   Graph_Graph3018->SetStats(0);
   Graph_Graph3018->SetLineStyle(0);
   Graph_Graph3018->SetMarkerStyle(20);
   Graph_Graph3018->GetXaxis()->SetLabelFont(42);
   Graph_Graph3018->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3018->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3018->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3018->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3018->GetXaxis()->SetTitleFont(42);
   Graph_Graph3018->GetYaxis()->SetLabelFont(42);
   Graph_Graph3018->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3018->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3018->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3018->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3018->GetYaxis()->SetTitleFont(42);
   Graph_Graph3018->GetZaxis()->SetLabelFont(42);
   Graph_Graph3018->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3018->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3018->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3018->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3018);
   
   grae->Draw("p0");
   
   TLegend *leg = new TLegend(0.2,0.55,0.8,0.88,NULL,"brNDC");
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
   
   leg = new TLegend(0.2,0.55,0.8,0.88,NULL,"brNDC");
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
   
   TH1F *hframe_copy90 = new TH1F("hframe_copy90","",1000,10,200);
   hframe_copy90->SetMinimum(0);
   hframe_copy90->SetMaximum(8.227751);
   hframe_copy90->SetDirectory(0);
   hframe_copy90->SetStats(0);
   hframe_copy90->SetLineStyle(0);
   hframe_copy90->SetMarkerStyle(20);
   hframe_copy90->GetXaxis()->SetTitle("lept1_p_{T} [GeV]");
   hframe_copy90->GetXaxis()->SetNdivisions(506);
   hframe_copy90->GetXaxis()->SetLabelFont(42);
   hframe_copy90->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy90->GetXaxis()->SetLabelSize(0.05);
   hframe_copy90->GetXaxis()->SetTitleSize(0.06);
   hframe_copy90->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy90->GetXaxis()->SetTitleFont(42);
   hframe_copy90->GetYaxis()->SetTitle("Events");
   hframe_copy90->GetYaxis()->SetLabelFont(42);
   hframe_copy90->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy90->GetYaxis()->SetLabelSize(0.05);
   hframe_copy90->GetYaxis()->SetTitleSize(0.06);
   hframe_copy90->GetYaxis()->SetTitleOffset(1.25);
   hframe_copy90->GetYaxis()->SetTitleFont(42);
   hframe_copy90->GetZaxis()->SetLabelFont(42);
   hframe_copy90->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy90->GetZaxis()->SetLabelSize(0.05);
   hframe_copy90->GetZaxis()->SetTitleSize(0.06);
   hframe_copy90->GetZaxis()->SetTitleFont(42);
   hframe_copy90->Draw("sameaxis");
   ccwh3l_13TeV_ossf_pt1->Modified();
   ccwh3l_13TeV_ossf_pt1->cd();
   ccwh3l_13TeV_ossf_pt1->SetSelected(ccwh3l_13TeV_ossf_pt1);
}
