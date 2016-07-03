void c_wh3l_13TeV_ossf_met()
{
//=========Macro generated from canvas: ccwh3l_13TeV_ossf_met/cc
//=========  (Thu Jun 30 22:29:42 2016) by ROOT version6.02/13
   TCanvas *ccwh3l_13TeV_ossf_met = new TCanvas("ccwh3l_13TeV_ossf_met", "cc",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   ccwh3l_13TeV_ossf_met->SetHighLightColor(2);
   ccwh3l_13TeV_ossf_met->Range(-40,-2.688411,210,17.99168);
   ccwh3l_13TeV_ossf_met->SetFillColor(0);
   ccwh3l_13TeV_ossf_met->SetBorderMode(0);
   ccwh3l_13TeV_ossf_met->SetBorderSize(2);
   ccwh3l_13TeV_ossf_met->SetTickx(1);
   ccwh3l_13TeV_ossf_met->SetTicky(1);
   ccwh3l_13TeV_ossf_met->SetLeftMargin(0.16);
   ccwh3l_13TeV_ossf_met->SetRightMargin(0.04);
   ccwh3l_13TeV_ossf_met->SetTopMargin(0.05);
   ccwh3l_13TeV_ossf_met->SetBottomMargin(0.13);
   ccwh3l_13TeV_ossf_met->SetFrameFillStyle(0);
   ccwh3l_13TeV_ossf_met->SetFrameBorderMode(0);
   ccwh3l_13TeV_ossf_met->SetFrameFillStyle(0);
   ccwh3l_13TeV_ossf_met->SetFrameBorderMode(0);
   
   TH1F *hframe41 = new TH1F("hframe41","",1000,0,200);
   hframe41->SetMinimum(0);
   hframe41->SetMaximum(16.95767);
   hframe41->SetDirectory(0);
   hframe41->SetStats(0);
   hframe41->SetLineStyle(0);
   hframe41->SetMarkerStyle(20);
   hframe41->GetXaxis()->SetTitle("pfmet [GeV]");
   hframe41->GetXaxis()->SetNdivisions(506);
   hframe41->GetXaxis()->SetLabelFont(42);
   hframe41->GetXaxis()->SetLabelOffset(0.007);
   hframe41->GetXaxis()->SetLabelSize(0.05);
   hframe41->GetXaxis()->SetTitleSize(0.06);
   hframe41->GetXaxis()->SetTitleOffset(0.9);
   hframe41->GetXaxis()->SetTitleFont(42);
   hframe41->GetYaxis()->SetTitle("Events");
   hframe41->GetYaxis()->SetLabelFont(42);
   hframe41->GetYaxis()->SetLabelOffset(0.007);
   hframe41->GetYaxis()->SetLabelSize(0.05);
   hframe41->GetYaxis()->SetTitleSize(0.06);
   hframe41->GetYaxis()->SetTitleOffset(1.25);
   hframe41->GetYaxis()->SetTitleFont(42);
   hframe41->GetZaxis()->SetLabelFont(42);
   hframe41->GetZaxis()->SetLabelOffset(0.007);
   hframe41->GetZaxis()->SetLabelSize(0.05);
   hframe41->GetZaxis()->SetTitleSize(0.06);
   hframe41->GetZaxis()->SetTitleFont(42);
   hframe41->Draw(" ");
   
   THStack *thsBackground_grouped_wh3l_13TeV_ossf_met = new THStack();
   thsBackground_grouped_wh3l_13TeV_ossf_met->SetName("thsBackground_grouped_wh3l_13TeV_ossf_met");
   thsBackground_grouped_wh3l_13TeV_ossf_met->SetTitle("thsBackground_grouped_wh3l_13TeV_ossf_met");
   
   TH1F *thsBackground_grouped_wh3l_13TeV_ossf_met_stack_9 = new TH1F("thsBackground_grouped_wh3l_13TeV_ossf_met_stack_9","thsBackground_grouped_wh3l_13TeV_ossf_met",20,0,200);
   thsBackground_grouped_wh3l_13TeV_ossf_met_stack_9->SetMinimum(-0.6991985);
   thsBackground_grouped_wh3l_13TeV_ossf_met_stack_9->SetMaximum(7.122222);
   thsBackground_grouped_wh3l_13TeV_ossf_met_stack_9->SetDirectory(0);
   thsBackground_grouped_wh3l_13TeV_ossf_met_stack_9->SetStats(0);
   thsBackground_grouped_wh3l_13TeV_ossf_met_stack_9->SetLineStyle(0);
   thsBackground_grouped_wh3l_13TeV_ossf_met_stack_9->SetMarkerStyle(20);
   thsBackground_grouped_wh3l_13TeV_ossf_met_stack_9->GetXaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_13TeV_ossf_met_stack_9->GetXaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_13TeV_ossf_met_stack_9->GetXaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_13TeV_ossf_met_stack_9->GetXaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_13TeV_ossf_met_stack_9->GetXaxis()->SetTitleOffset(0.9);
   thsBackground_grouped_wh3l_13TeV_ossf_met_stack_9->GetXaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_ossf_met_stack_9->GetYaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_13TeV_ossf_met_stack_9->GetYaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_13TeV_ossf_met_stack_9->GetYaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_13TeV_ossf_met_stack_9->GetYaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_13TeV_ossf_met_stack_9->GetYaxis()->SetTitleOffset(1.25);
   thsBackground_grouped_wh3l_13TeV_ossf_met_stack_9->GetYaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_ossf_met_stack_9->GetZaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_13TeV_ossf_met_stack_9->GetZaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_13TeV_ossf_met_stack_9->GetZaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_13TeV_ossf_met_stack_9->GetZaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_13TeV_ossf_met_stack_9->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_ossf_met->SetHistogram(thsBackground_grouped_wh3l_13TeV_ossf_met_stack_9);
   
   
   TH1D *new_histo_group_Fake_wh3l_13TeV_ossf_met42 = new TH1D("new_histo_group_Fake_wh3l_13TeV_ossf_met42","histo_Fake",20,0,200);
   new_histo_group_Fake_wh3l_13TeV_ossf_met42->SetBinContent(5,2.300374);
   new_histo_group_Fake_wh3l_13TeV_ossf_met42->SetBinContent(6,2.285731);
   new_histo_group_Fake_wh3l_13TeV_ossf_met42->SetBinContent(7,-0.273522);
   new_histo_group_Fake_wh3l_13TeV_ossf_met42->SetBinContent(8,0.4220523);
   new_histo_group_Fake_wh3l_13TeV_ossf_met42->SetBinContent(9,0.7971983);
   new_histo_group_Fake_wh3l_13TeV_ossf_met42->SetBinContent(10,0.4030175);
   new_histo_group_Fake_wh3l_13TeV_ossf_met42->SetBinContent(11,0.7921843);
   new_histo_group_Fake_wh3l_13TeV_ossf_met42->SetBinContent(19,-0.008195123);
   new_histo_group_Fake_wh3l_13TeV_ossf_met42->SetBinError(5,1.387384);
   new_histo_group_Fake_wh3l_13TeV_ossf_met42->SetBinError(6,0.9845495);
   new_histo_group_Fake_wh3l_13TeV_ossf_met42->SetBinError(7,0.4256765);
   new_histo_group_Fake_wh3l_13TeV_ossf_met42->SetBinError(8,0.5637391);
   new_histo_group_Fake_wh3l_13TeV_ossf_met42->SetBinError(9,0.6338269);
   new_histo_group_Fake_wh3l_13TeV_ossf_met42->SetBinError(10,0.5670358);
   new_histo_group_Fake_wh3l_13TeV_ossf_met42->SetBinError(11,0.8494482);
   new_histo_group_Fake_wh3l_13TeV_ossf_met42->SetBinError(19,0.008195123);
   new_histo_group_Fake_wh3l_13TeV_ossf_met42->SetEntries(81);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_13TeV_ossf_met42->SetFillColor(ci);
   new_histo_group_Fake_wh3l_13TeV_ossf_met42->SetFillStyle(3001);

   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_13TeV_ossf_met42->SetLineColor(ci);
   new_histo_group_Fake_wh3l_13TeV_ossf_met42->GetXaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_13TeV_ossf_met42->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_13TeV_ossf_met42->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_13TeV_ossf_met42->GetXaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_13TeV_ossf_met42->GetYaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_13TeV_ossf_met42->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_13TeV_ossf_met42->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_13TeV_ossf_met42->GetYaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_13TeV_ossf_met42->GetZaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_13TeV_ossf_met42->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_13TeV_ossf_met42->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_13TeV_ossf_met42->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_ossf_met->Add(new_histo_group_Fake_wh3l_13TeV_ossf_met,"");
   
   TH1D *new_histo_group_WW_wh3l_13TeV_ossf_met43 = new TH1D("new_histo_group_WW_wh3l_13TeV_ossf_met43","histo_WW",20,0,200);
   new_histo_group_WW_wh3l_13TeV_ossf_met43->SetBinContent(5,0.04766152);
   new_histo_group_WW_wh3l_13TeV_ossf_met43->SetBinContent(7,0.01447441);
   new_histo_group_WW_wh3l_13TeV_ossf_met43->SetBinContent(8,0.01044191);
   new_histo_group_WW_wh3l_13TeV_ossf_met43->SetBinError(5,0.02766736);
   new_histo_group_WW_wh3l_13TeV_ossf_met43->SetBinError(7,0.01447441);
   new_histo_group_WW_wh3l_13TeV_ossf_met43->SetBinError(8,0.01044191);
   new_histo_group_WW_wh3l_13TeV_ossf_met43->SetEntries(5);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_13TeV_ossf_met43->SetFillColor(ci);
   new_histo_group_WW_wh3l_13TeV_ossf_met43->SetFillStyle(3001);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_13TeV_ossf_met43->SetLineColor(ci);
   new_histo_group_WW_wh3l_13TeV_ossf_met43->GetXaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_13TeV_ossf_met43->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_13TeV_ossf_met43->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_13TeV_ossf_met43->GetXaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_13TeV_ossf_met43->GetYaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_13TeV_ossf_met43->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_13TeV_ossf_met43->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_13TeV_ossf_met43->GetYaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_13TeV_ossf_met43->GetZaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_13TeV_ossf_met43->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_13TeV_ossf_met43->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_13TeV_ossf_met43->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_ossf_met->Add(new_histo_group_WW_wh3l_13TeV_ossf_met,"");
   
   TH1D *new_histo_group_VVV_wh3l_13TeV_ossf_met44 = new TH1D("new_histo_group_VVV_wh3l_13TeV_ossf_met44","histo_VVV",20,0,200);
   new_histo_group_VVV_wh3l_13TeV_ossf_met44->SetBinContent(5,0.02024085);
   new_histo_group_VVV_wh3l_13TeV_ossf_met44->SetBinContent(6,0.02885209);
   new_histo_group_VVV_wh3l_13TeV_ossf_met44->SetBinContent(7,0.03567579);
   new_histo_group_VVV_wh3l_13TeV_ossf_met44->SetBinContent(8,0.02817882);
   new_histo_group_VVV_wh3l_13TeV_ossf_met44->SetBinContent(9,0.03443779);
   new_histo_group_VVV_wh3l_13TeV_ossf_met44->SetBinContent(10,0.02185272);
   new_histo_group_VVV_wh3l_13TeV_ossf_met44->SetBinContent(11,0.01178233);
   new_histo_group_VVV_wh3l_13TeV_ossf_met44->SetBinContent(12,0.008437942);
   new_histo_group_VVV_wh3l_13TeV_ossf_met44->SetBinContent(13,0.009917918);
   new_histo_group_VVV_wh3l_13TeV_ossf_met44->SetBinContent(14,0.00416248);
   new_histo_group_VVV_wh3l_13TeV_ossf_met44->SetBinContent(15,0.004524536);
   new_histo_group_VVV_wh3l_13TeV_ossf_met44->SetBinContent(16,0.001966812);
   new_histo_group_VVV_wh3l_13TeV_ossf_met44->SetBinContent(18,0.003129966);
   new_histo_group_VVV_wh3l_13TeV_ossf_met44->SetBinContent(20,0.0005093239);
   new_histo_group_VVV_wh3l_13TeV_ossf_met44->SetBinContent(21,0.009463206);
   new_histo_group_VVV_wh3l_13TeV_ossf_met44->SetBinError(5,0.007250323);
   new_histo_group_VVV_wh3l_13TeV_ossf_met44->SetBinError(6,0.008097216);
   new_histo_group_VVV_wh3l_13TeV_ossf_met44->SetBinError(7,0.009114159);
   new_histo_group_VVV_wh3l_13TeV_ossf_met44->SetBinError(8,0.009756857);
   new_histo_group_VVV_wh3l_13TeV_ossf_met44->SetBinError(9,0.0094394);
   new_histo_group_VVV_wh3l_13TeV_ossf_met44->SetBinError(10,0.007723212);
   new_histo_group_VVV_wh3l_13TeV_ossf_met44->SetBinError(11,0.004956065);
   new_histo_group_VVV_wh3l_13TeV_ossf_met44->SetBinError(12,0.004552881);
   new_histo_group_VVV_wh3l_13TeV_ossf_met44->SetBinError(13,0.004759189);
   new_histo_group_VVV_wh3l_13TeV_ossf_met44->SetBinError(14,0.002953682);
   new_histo_group_VVV_wh3l_13TeV_ossf_met44->SetBinError(15,0.003610021);
   new_histo_group_VVV_wh3l_13TeV_ossf_met44->SetBinError(16,0.001929137);
   new_histo_group_VVV_wh3l_13TeV_ossf_met44->SetBinError(18,0.002570498);
   new_histo_group_VVV_wh3l_13TeV_ossf_met44->SetBinError(20,0.0005093239);
   new_histo_group_VVV_wh3l_13TeV_ossf_met44->SetBinError(21,0.004741006);
   new_histo_group_VVV_wh3l_13TeV_ossf_met44->SetEntries(127);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_13TeV_ossf_met44->SetFillColor(ci);
   new_histo_group_VVV_wh3l_13TeV_ossf_met44->SetFillStyle(3001);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_13TeV_ossf_met44->SetLineColor(ci);
   new_histo_group_VVV_wh3l_13TeV_ossf_met44->GetXaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_13TeV_ossf_met44->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_13TeV_ossf_met44->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_13TeV_ossf_met44->GetXaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_13TeV_ossf_met44->GetYaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_13TeV_ossf_met44->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_13TeV_ossf_met44->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_13TeV_ossf_met44->GetYaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_13TeV_ossf_met44->GetZaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_13TeV_ossf_met44->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_13TeV_ossf_met44->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_13TeV_ossf_met44->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_ossf_met->Add(new_histo_group_VVV_wh3l_13TeV_ossf_met,"");
   
   TH1D *new_histo_group_Vg_wh3l_13TeV_ossf_met45 = new TH1D("new_histo_group_Vg_wh3l_13TeV_ossf_met45","histo_Vg",20,0,200);
   new_histo_group_Vg_wh3l_13TeV_ossf_met45->SetBinContent(5,1.786107);
   new_histo_group_Vg_wh3l_13TeV_ossf_met45->SetBinContent(6,0.8620622);
   new_histo_group_Vg_wh3l_13TeV_ossf_met45->SetBinError(5,0.4950433);
   new_histo_group_Vg_wh3l_13TeV_ossf_met45->SetBinError(6,0.282646);
   new_histo_group_Vg_wh3l_13TeV_ossf_met45->SetEntries(42);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_13TeV_ossf_met45->SetFillColor(ci);
   new_histo_group_Vg_wh3l_13TeV_ossf_met45->SetFillStyle(3001);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_13TeV_ossf_met45->SetLineColor(ci);
   new_histo_group_Vg_wh3l_13TeV_ossf_met45->GetXaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_13TeV_ossf_met45->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_13TeV_ossf_met45->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_13TeV_ossf_met45->GetXaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_13TeV_ossf_met45->GetYaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_13TeV_ossf_met45->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_13TeV_ossf_met45->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_13TeV_ossf_met45->GetYaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_13TeV_ossf_met45->GetZaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_13TeV_ossf_met45->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_13TeV_ossf_met45->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_13TeV_ossf_met45->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_ossf_met->Add(new_histo_group_Vg_wh3l_13TeV_ossf_met,"");
   
   TH1D *new_histo_group_ZZ_wh3l_13TeV_ossf_met46 = new TH1D("new_histo_group_ZZ_wh3l_13TeV_ossf_met46","histo_ZZ",20,0,200);
   new_histo_group_ZZ_wh3l_13TeV_ossf_met46->SetBinContent(5,0.3133194);
   new_histo_group_ZZ_wh3l_13TeV_ossf_met46->SetBinContent(6,0.1069809);
   new_histo_group_ZZ_wh3l_13TeV_ossf_met46->SetBinContent(7,0.07189054);
   new_histo_group_ZZ_wh3l_13TeV_ossf_met46->SetBinContent(8,0.02711696);
   new_histo_group_ZZ_wh3l_13TeV_ossf_met46->SetBinContent(12,0.02856258);
   new_histo_group_ZZ_wh3l_13TeV_ossf_met46->SetBinError(5,0.1129063);
   new_histo_group_ZZ_wh3l_13TeV_ossf_met46->SetBinError(6,0.06757283);
   new_histo_group_ZZ_wh3l_13TeV_ossf_met46->SetBinError(7,0.05189561);
   new_histo_group_ZZ_wh3l_13TeV_ossf_met46->SetBinError(8,0.02711696);
   new_histo_group_ZZ_wh3l_13TeV_ossf_met46->SetBinError(12,0.02856258);
   new_histo_group_ZZ_wh3l_13TeV_ossf_met46->SetEntries(16);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_13TeV_ossf_met46->SetFillColor(ci);
   new_histo_group_ZZ_wh3l_13TeV_ossf_met46->SetFillStyle(3001);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_13TeV_ossf_met46->SetLineColor(ci);
   new_histo_group_ZZ_wh3l_13TeV_ossf_met46->GetXaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_13TeV_ossf_met46->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_13TeV_ossf_met46->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_13TeV_ossf_met46->GetXaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_13TeV_ossf_met46->GetYaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_13TeV_ossf_met46->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_13TeV_ossf_met46->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_13TeV_ossf_met46->GetYaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_13TeV_ossf_met46->GetZaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_13TeV_ossf_met46->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_13TeV_ossf_met46->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_13TeV_ossf_met46->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_ossf_met->Add(new_histo_group_ZZ_wh3l_13TeV_ossf_met,"");
   
   TH1D *new_histo_group_WZ_wh3l_13TeV_ossf_met47 = new TH1D("new_histo_group_WZ_wh3l_13TeV_ossf_met47","histo_WZ",20,0,200);
   new_histo_group_WZ_wh3l_13TeV_ossf_met47->SetBinContent(5,2.193864);
   new_histo_group_WZ_wh3l_13TeV_ossf_met47->SetBinContent(6,1.701551);
   new_histo_group_WZ_wh3l_13TeV_ossf_met47->SetBinContent(7,1.084441);
   new_histo_group_WZ_wh3l_13TeV_ossf_met47->SetBinContent(8,0.6657338);
   new_histo_group_WZ_wh3l_13TeV_ossf_met47->SetBinContent(9,0.4169078);
   new_histo_group_WZ_wh3l_13TeV_ossf_met47->SetBinContent(10,0.2000024);
   new_histo_group_WZ_wh3l_13TeV_ossf_met47->SetBinContent(11,0.1956307);
   new_histo_group_WZ_wh3l_13TeV_ossf_met47->SetBinContent(12,0.1198472);
   new_histo_group_WZ_wh3l_13TeV_ossf_met47->SetBinContent(13,0.06011449);
   new_histo_group_WZ_wh3l_13TeV_ossf_met47->SetBinContent(14,0.02915374);
   new_histo_group_WZ_wh3l_13TeV_ossf_met47->SetBinContent(15,0.04505791);
   new_histo_group_WZ_wh3l_13TeV_ossf_met47->SetBinContent(16,0.03081638);
   new_histo_group_WZ_wh3l_13TeV_ossf_met47->SetBinContent(17,0.03048124);
   new_histo_group_WZ_wh3l_13TeV_ossf_met47->SetBinContent(18,0.02207966);
   new_histo_group_WZ_wh3l_13TeV_ossf_met47->SetBinContent(19,0.02528742);
   new_histo_group_WZ_wh3l_13TeV_ossf_met47->SetBinContent(20,0.01977475);
   new_histo_group_WZ_wh3l_13TeV_ossf_met47->SetBinContent(21,0.07963444);
   new_histo_group_WZ_wh3l_13TeV_ossf_met47->SetBinError(5,0.1094552);
   new_histo_group_WZ_wh3l_13TeV_ossf_met47->SetBinError(6,0.09674981);
   new_histo_group_WZ_wh3l_13TeV_ossf_met47->SetBinError(7,0.07707222);
   new_histo_group_WZ_wh3l_13TeV_ossf_met47->SetBinError(8,0.06005625);
   new_histo_group_WZ_wh3l_13TeV_ossf_met47->SetBinError(9,0.04720722);
   new_histo_group_WZ_wh3l_13TeV_ossf_met47->SetBinError(10,0.0316629);
   new_histo_group_WZ_wh3l_13TeV_ossf_met47->SetBinError(11,0.03243377);
   new_histo_group_WZ_wh3l_13TeV_ossf_met47->SetBinError(12,0.0248221);
   new_histo_group_WZ_wh3l_13TeV_ossf_met47->SetBinError(13,0.01841395);
   new_histo_group_WZ_wh3l_13TeV_ossf_met47->SetBinError(14,0.0120343);
   new_histo_group_WZ_wh3l_13TeV_ossf_met47->SetBinError(15,0.01586808);
   new_histo_group_WZ_wh3l_13TeV_ossf_met47->SetBinError(16,0.01256395);
   new_histo_group_WZ_wh3l_13TeV_ossf_met47->SetBinError(17,0.01274854);
   new_histo_group_WZ_wh3l_13TeV_ossf_met47->SetBinError(18,0.01104526);
   new_histo_group_WZ_wh3l_13TeV_ossf_met47->SetBinError(19,0.0114013);
   new_histo_group_WZ_wh3l_13TeV_ossf_met47->SetBinError(20,0.01022489);
   new_histo_group_WZ_wh3l_13TeV_ossf_met47->SetBinError(21,0.02056406);
   new_histo_group_WZ_wh3l_13TeV_ossf_met47->SetEntries(1419);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_13TeV_ossf_met47->SetFillColor(ci);
   new_histo_group_WZ_wh3l_13TeV_ossf_met47->SetFillStyle(3001);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_13TeV_ossf_met47->SetLineColor(ci);
   new_histo_group_WZ_wh3l_13TeV_ossf_met47->GetXaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_13TeV_ossf_met47->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_13TeV_ossf_met47->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_13TeV_ossf_met47->GetXaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_13TeV_ossf_met47->GetYaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_13TeV_ossf_met47->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_13TeV_ossf_met47->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_13TeV_ossf_met47->GetYaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_13TeV_ossf_met47->GetZaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_13TeV_ossf_met47->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_13TeV_ossf_met47->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_13TeV_ossf_met47->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_ossf_met->Add(new_histo_group_WZ_wh3l_13TeV_ossf_met,"");
   
   TH1D *new_histo_group_Higgs_wh3l_13TeV_ossf_met48 = new TH1D("new_histo_group_Higgs_wh3l_13TeV_ossf_met48","histo_H_htt",20,0,200);
   new_histo_group_Higgs_wh3l_13TeV_ossf_met48->SetBinContent(5,0.1215024);
   new_histo_group_Higgs_wh3l_13TeV_ossf_met48->SetBinContent(6,0.09461325);
   new_histo_group_Higgs_wh3l_13TeV_ossf_met48->SetBinContent(7,0.09901983);
   new_histo_group_Higgs_wh3l_13TeV_ossf_met48->SetBinContent(8,0.07374286);
   new_histo_group_Higgs_wh3l_13TeV_ossf_met48->SetBinContent(9,0.05940503);
   new_histo_group_Higgs_wh3l_13TeV_ossf_met48->SetBinContent(10,0.04343115);
   new_histo_group_Higgs_wh3l_13TeV_ossf_met48->SetBinContent(11,0.03441812);
   new_histo_group_Higgs_wh3l_13TeV_ossf_met48->SetBinContent(12,0.01805414);
   new_histo_group_Higgs_wh3l_13TeV_ossf_met48->SetBinContent(13,0.01009866);
   new_histo_group_Higgs_wh3l_13TeV_ossf_met48->SetBinContent(14,0.007444094);
   new_histo_group_Higgs_wh3l_13TeV_ossf_met48->SetBinContent(15,0.001613931);
   new_histo_group_Higgs_wh3l_13TeV_ossf_met48->SetBinContent(16,0.005096219);
   new_histo_group_Higgs_wh3l_13TeV_ossf_met48->SetBinContent(17,0.001922132);
   new_histo_group_Higgs_wh3l_13TeV_ossf_met48->SetBinContent(18,0.003069914);
   new_histo_group_Higgs_wh3l_13TeV_ossf_met48->SetBinContent(19,0.0001986669);
   new_histo_group_Higgs_wh3l_13TeV_ossf_met48->SetBinContent(20,0.002418081);
   new_histo_group_Higgs_wh3l_13TeV_ossf_met48->SetBinContent(21,0.003357599);
   new_histo_group_Higgs_wh3l_13TeV_ossf_met48->SetBinError(5,0.01161879);
   new_histo_group_Higgs_wh3l_13TeV_ossf_met48->SetBinError(6,0.009975685);
   new_histo_group_Higgs_wh3l_13TeV_ossf_met48->SetBinError(7,0.01122802);
   new_histo_group_Higgs_wh3l_13TeV_ossf_met48->SetBinError(8,0.00958806);
   new_histo_group_Higgs_wh3l_13TeV_ossf_met48->SetBinError(9,0.008440975);
   new_histo_group_Higgs_wh3l_13TeV_ossf_met48->SetBinError(10,0.00760025);
   new_histo_group_Higgs_wh3l_13TeV_ossf_met48->SetBinError(11,0.006610379);
   new_histo_group_Higgs_wh3l_13TeV_ossf_met48->SetBinError(12,0.004925371);
   new_histo_group_Higgs_wh3l_13TeV_ossf_met48->SetBinError(13,0.003973784);
   new_histo_group_Higgs_wh3l_13TeV_ossf_met48->SetBinError(14,0.003424824);
   new_histo_group_Higgs_wh3l_13TeV_ossf_met48->SetBinError(15,0.001213535);
   new_histo_group_Higgs_wh3l_13TeV_ossf_met48->SetBinError(16,0.002444019);
   new_histo_group_Higgs_wh3l_13TeV_ossf_met48->SetBinError(17,0.001210363);
   new_histo_group_Higgs_wh3l_13TeV_ossf_met48->SetBinError(18,0.001790929);
   new_histo_group_Higgs_wh3l_13TeV_ossf_met48->SetBinError(19,0.0001986669);
   new_histo_group_Higgs_wh3l_13TeV_ossf_met48->SetBinError(20,0.001712831);
   new_histo_group_Higgs_wh3l_13TeV_ossf_met48->SetBinError(21,0.002377921);
   new_histo_group_Higgs_wh3l_13TeV_ossf_met48->SetEntries(915);
   new_histo_group_Higgs_wh3l_13TeV_ossf_met48->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_13TeV_ossf_met48->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_13TeV_ossf_met48->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_13TeV_ossf_met48->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_13TeV_ossf_met48->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_ossf_met48->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_ossf_met48->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_13TeV_ossf_met48->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_13TeV_ossf_met48->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_ossf_met48->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_ossf_met48->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_13TeV_ossf_met48->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_13TeV_ossf_met48->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_ossf_met48->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_ossf_met48->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_ossf_met->Add(new_histo_group_Higgs_wh3l_13TeV_ossf_met,"");
   thsBackground_grouped_wh3l_13TeV_ossf_met->Draw("hist same");
   
   thsSignal_grouped_wh3l_13TeV_ossf_met = new THStack();
   thsSignal_grouped_wh3l_13TeV_ossf_met->SetName("thsSignal_grouped_wh3l_13TeV_ossf_met");
   thsSignal_grouped_wh3l_13TeV_ossf_met->SetTitle("thsSignal_grouped_wh3l_13TeV_ossf_met");
   
   TH1F *thsSignal_grouped_wh3l_13TeV_ossf_met_stack_10 = new TH1F("thsSignal_grouped_wh3l_13TeV_ossf_met_stack_10","thsSignal_grouped_wh3l_13TeV_ossf_met",20,0,200);
   thsSignal_grouped_wh3l_13TeV_ossf_met_stack_10->SetMinimum(0);
   thsSignal_grouped_wh3l_13TeV_ossf_met_stack_10->SetMaximum(0.1397772);
   thsSignal_grouped_wh3l_13TeV_ossf_met_stack_10->SetDirectory(0);
   thsSignal_grouped_wh3l_13TeV_ossf_met_stack_10->SetStats(0);
   thsSignal_grouped_wh3l_13TeV_ossf_met_stack_10->SetLineStyle(0);
   thsSignal_grouped_wh3l_13TeV_ossf_met_stack_10->SetMarkerStyle(20);
   thsSignal_grouped_wh3l_13TeV_ossf_met_stack_10->GetXaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_13TeV_ossf_met_stack_10->GetXaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_13TeV_ossf_met_stack_10->GetXaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_13TeV_ossf_met_stack_10->GetXaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_13TeV_ossf_met_stack_10->GetXaxis()->SetTitleOffset(0.9);
   thsSignal_grouped_wh3l_13TeV_ossf_met_stack_10->GetXaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_13TeV_ossf_met_stack_10->GetYaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_13TeV_ossf_met_stack_10->GetYaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_13TeV_ossf_met_stack_10->GetYaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_13TeV_ossf_met_stack_10->GetYaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_13TeV_ossf_met_stack_10->GetYaxis()->SetTitleOffset(1.25);
   thsSignal_grouped_wh3l_13TeV_ossf_met_stack_10->GetYaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_13TeV_ossf_met_stack_10->GetZaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_13TeV_ossf_met_stack_10->GetZaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_13TeV_ossf_met_stack_10->GetZaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_13TeV_ossf_met_stack_10->GetZaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_13TeV_ossf_met_stack_10->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_13TeV_ossf_met->SetHistogram(thsSignal_grouped_wh3l_13TeV_ossf_met_stack_10);
   
   
   TH1D *new_histo_group_Higgs_wh3l_13TeV_ossf_met49 = new TH1D("new_histo_group_Higgs_wh3l_13TeV_ossf_met49","histo_H_htt",20,0,200);
   new_histo_group_Higgs_wh3l_13TeV_ossf_met49->SetBinContent(5,0.1215024);
   new_histo_group_Higgs_wh3l_13TeV_ossf_met49->SetBinContent(6,0.09461325);
   new_histo_group_Higgs_wh3l_13TeV_ossf_met49->SetBinContent(7,0.09901983);
   new_histo_group_Higgs_wh3l_13TeV_ossf_met49->SetBinContent(8,0.07374286);
   new_histo_group_Higgs_wh3l_13TeV_ossf_met49->SetBinContent(9,0.05940503);
   new_histo_group_Higgs_wh3l_13TeV_ossf_met49->SetBinContent(10,0.04343115);
   new_histo_group_Higgs_wh3l_13TeV_ossf_met49->SetBinContent(11,0.03441812);
   new_histo_group_Higgs_wh3l_13TeV_ossf_met49->SetBinContent(12,0.01805414);
   new_histo_group_Higgs_wh3l_13TeV_ossf_met49->SetBinContent(13,0.01009866);
   new_histo_group_Higgs_wh3l_13TeV_ossf_met49->SetBinContent(14,0.007444094);
   new_histo_group_Higgs_wh3l_13TeV_ossf_met49->SetBinContent(15,0.001613931);
   new_histo_group_Higgs_wh3l_13TeV_ossf_met49->SetBinContent(16,0.005096219);
   new_histo_group_Higgs_wh3l_13TeV_ossf_met49->SetBinContent(17,0.001922132);
   new_histo_group_Higgs_wh3l_13TeV_ossf_met49->SetBinContent(18,0.003069914);
   new_histo_group_Higgs_wh3l_13TeV_ossf_met49->SetBinContent(19,0.0001986669);
   new_histo_group_Higgs_wh3l_13TeV_ossf_met49->SetBinContent(20,0.002418081);
   new_histo_group_Higgs_wh3l_13TeV_ossf_met49->SetBinContent(21,0.003357599);
   new_histo_group_Higgs_wh3l_13TeV_ossf_met49->SetBinError(5,0.01161879);
   new_histo_group_Higgs_wh3l_13TeV_ossf_met49->SetBinError(6,0.009975685);
   new_histo_group_Higgs_wh3l_13TeV_ossf_met49->SetBinError(7,0.01122802);
   new_histo_group_Higgs_wh3l_13TeV_ossf_met49->SetBinError(8,0.00958806);
   new_histo_group_Higgs_wh3l_13TeV_ossf_met49->SetBinError(9,0.008440975);
   new_histo_group_Higgs_wh3l_13TeV_ossf_met49->SetBinError(10,0.00760025);
   new_histo_group_Higgs_wh3l_13TeV_ossf_met49->SetBinError(11,0.006610379);
   new_histo_group_Higgs_wh3l_13TeV_ossf_met49->SetBinError(12,0.004925371);
   new_histo_group_Higgs_wh3l_13TeV_ossf_met49->SetBinError(13,0.003973784);
   new_histo_group_Higgs_wh3l_13TeV_ossf_met49->SetBinError(14,0.003424824);
   new_histo_group_Higgs_wh3l_13TeV_ossf_met49->SetBinError(15,0.001213535);
   new_histo_group_Higgs_wh3l_13TeV_ossf_met49->SetBinError(16,0.002444019);
   new_histo_group_Higgs_wh3l_13TeV_ossf_met49->SetBinError(17,0.001210363);
   new_histo_group_Higgs_wh3l_13TeV_ossf_met49->SetBinError(18,0.001790929);
   new_histo_group_Higgs_wh3l_13TeV_ossf_met49->SetBinError(19,0.0001986669);
   new_histo_group_Higgs_wh3l_13TeV_ossf_met49->SetBinError(20,0.001712831);
   new_histo_group_Higgs_wh3l_13TeV_ossf_met49->SetBinError(21,0.002377921);
   new_histo_group_Higgs_wh3l_13TeV_ossf_met49->SetEntries(915);
   new_histo_group_Higgs_wh3l_13TeV_ossf_met49->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_13TeV_ossf_met49->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_13TeV_ossf_met49->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_13TeV_ossf_met49->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_13TeV_ossf_met49->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_ossf_met49->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_ossf_met49->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_13TeV_ossf_met49->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_13TeV_ossf_met49->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_ossf_met49->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_ossf_met49->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_13TeV_ossf_met49->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_13TeV_ossf_met49->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_ossf_met49->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_ossf_met49->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_13TeV_ossf_met->Add(new_histo_group_Higgs_wh3l_13TeV_ossf_met,"");
   thsSignal_grouped_wh3l_13TeV_ossf_met->Draw("hist same noclear");
   
   Double_t _fx3009[20] = {
   5,
   15,
   25,
   35,
   45,
   55,
   65,
   75,
   85,
   95,
   105,
   115,
   125,
   135,
   145,
   155,
   165,
   175,
   185,
   195};
   Double_t _fy3009[20] = {
   0,
   0,
   0,
   0,
   6.661567,
   4.985178,
   0.9329599,
   1.153524,
   1.248544,
   0.6248726,
   0.9995973,
   0.1568478,
   0.07003241,
   0.03331622,
   0.04958244,
   0.03278319,
   0.03048124,
   0.02520963,
   0.01709229,
   0.02028408};
   Double_t _felx3009[20] = {
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5};
   Double_t _fely3009[20] = {
   0,
   0,
   0,
   0,
   2.294177,
   1.651952,
   0.5891688,
   0.5509992,
   0.7456825,
   0.4649522,
   0.8748015,
   0.0586638,
   0.02541127,
   0.01563345,
   0.02004629,
   0.01475494,
   0.01282082,
   0.01386988,
   0.01982038,
   0.01080714};
   Double_t _fehx3009[20] = {
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5};
   Double_t _fehy3009[20] = {
   0,
   0,
   0,
   0,
   2.293849,
   1.651436,
   0.4406593,
   0.6882469,
   0.7456707,
   0.623058,
   0.9292794,
   0.05861666,
   0.02535078,
   0.01563054,
   0.02005687,
   0.01476493,
   0.01280277,
   0.01387106,
   0.01981621,
   0.01079931};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(20,_fx3009,_fy3009,_felx3009,_fehx3009,_fely3009,_fehy3009);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(12);
   grae->SetFillStyle(3004);
   grae->SetLineColor(12);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3009 = new TH1F("Graph_Graph3009","",100,0,220);
   Graph_Graph3009->SetMinimum(-0.8985425);
   Graph_Graph3009->SetMaximum(9.851231);
   Graph_Graph3009->SetDirectory(0);
   Graph_Graph3009->SetStats(0);
   Graph_Graph3009->SetLineStyle(0);
   Graph_Graph3009->SetMarkerStyle(20);
   Graph_Graph3009->GetXaxis()->SetLabelFont(42);
   Graph_Graph3009->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3009->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3009->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3009->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3009->GetXaxis()->SetTitleFont(42);
   Graph_Graph3009->GetYaxis()->SetLabelFont(42);
   Graph_Graph3009->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3009->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3009->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3009->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3009->GetYaxis()->SetTitleFont(42);
   Graph_Graph3009->GetZaxis()->SetLabelFont(42);
   Graph_Graph3009->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3009->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3009->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3009->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3009);
   
   grae->Draw("2");
   
   Double_t _fx3010[20] = {
   5,
   15,
   25,
   35,
   45,
   55,
   65,
   75,
   85,
   95,
   105,
   115,
   125,
   135,
   145,
   155,
   165,
   175,
   185,
   195};
   Double_t _fy3010[20] = {
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
   Double_t _felx3010[20] = {
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5};
   Double_t _fely3010[20] = {
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
   Double_t _fehx3010[20] = {
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5};
   Double_t _fehy3010[20] = {
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
   grae = new TGraphAsymmErrors(20,_fx3010,_fy3010,_felx3010,_fehx3010,_fely3010,_fehy3010);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(1);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3010 = new TH1F("Graph_Graph3010","",100,0,220);
   Graph_Graph3010->SetMinimum(0);
   Graph_Graph3010->SetMaximum(1.262698);
   Graph_Graph3010->SetDirectory(0);
   Graph_Graph3010->SetStats(0);
   Graph_Graph3010->SetLineStyle(0);
   Graph_Graph3010->SetMarkerStyle(20);
   Graph_Graph3010->GetXaxis()->SetLabelFont(42);
   Graph_Graph3010->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3010->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3010->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3010->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3010->GetXaxis()->SetTitleFont(42);
   Graph_Graph3010->GetYaxis()->SetLabelFont(42);
   Graph_Graph3010->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3010->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3010->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3010->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3010->GetYaxis()->SetTitleFont(42);
   Graph_Graph3010->GetZaxis()->SetLabelFont(42);
   Graph_Graph3010->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3010->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3010->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3010->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3010);
   
   grae->Draw("p0");
   
   TLegend *leg = new TLegend(0.2,0.7,0.8,0.9,NULL,"brNDC");
   leg->SetTextFont(62);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("new_histo_group_Fake_wh3l_13TeV_ossf_met","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_13TeV_ossf_met","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_13TeV_ossf_met","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_13TeV_ossf_met","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_13TeV_ossf_met","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_13TeV_ossf_met","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_13TeV_ossf_met","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_13TeV_ossf_met","Data","EPL");
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
   entry=leg->AddEntry("new_histo_group_Fake_wh3l_13TeV_ossf_met","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_13TeV_ossf_met","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_13TeV_ossf_met","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_13TeV_ossf_met","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_13TeV_ossf_met","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_13TeV_ossf_met","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_13TeV_ossf_met","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_13TeV_ossf_met","Data","EPL");
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
   
   TH1F *hframe_copy50 = new TH1F("hframe_copy50","",1000,0,200);
   hframe_copy50->SetMinimum(0);
   hframe_copy50->SetMaximum(16.95767);
   hframe_copy50->SetDirectory(0);
   hframe_copy50->SetStats(0);
   hframe_copy50->SetLineStyle(0);
   hframe_copy50->SetMarkerStyle(20);
   hframe_copy50->GetXaxis()->SetTitle("pfmet [GeV]");
   hframe_copy50->GetXaxis()->SetNdivisions(506);
   hframe_copy50->GetXaxis()->SetLabelFont(42);
   hframe_copy50->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy50->GetXaxis()->SetLabelSize(0.05);
   hframe_copy50->GetXaxis()->SetTitleSize(0.06);
   hframe_copy50->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy50->GetXaxis()->SetTitleFont(42);
   hframe_copy50->GetYaxis()->SetTitle("Events");
   hframe_copy50->GetYaxis()->SetLabelFont(42);
   hframe_copy50->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy50->GetYaxis()->SetLabelSize(0.05);
   hframe_copy50->GetYaxis()->SetTitleSize(0.06);
   hframe_copy50->GetYaxis()->SetTitleOffset(1.25);
   hframe_copy50->GetYaxis()->SetTitleFont(42);
   hframe_copy50->GetZaxis()->SetLabelFont(42);
   hframe_copy50->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy50->GetZaxis()->SetLabelSize(0.05);
   hframe_copy50->GetZaxis()->SetTitleSize(0.06);
   hframe_copy50->GetZaxis()->SetTitleFont(42);
   hframe_copy50->Draw("sameaxis");
   ccwh3l_13TeV_ossf_met->Modified();
   ccwh3l_13TeV_ossf_met->cd();
   ccwh3l_13TeV_ossf_met->SetSelected(ccwh3l_13TeV_ossf_met);
}
