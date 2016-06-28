void c_wh3l_wz_13TeV_met()
{
//=========Macro generated from canvas: ccwh3l_wz_13TeV_met/cc
//=========  (Tue Jun 28 02:22:45 2016) by ROOT version6.02/13
   TCanvas *ccwh3l_wz_13TeV_met = new TCanvas("ccwh3l_wz_13TeV_met", "cc",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   ccwh3l_wz_13TeV_met->SetHighLightColor(2);
   ccwh3l_wz_13TeV_met->Range(-40,-23.04386,210,154.2166);
   ccwh3l_wz_13TeV_met->SetFillColor(0);
   ccwh3l_wz_13TeV_met->SetBorderMode(0);
   ccwh3l_wz_13TeV_met->SetBorderSize(2);
   ccwh3l_wz_13TeV_met->SetTickx(1);
   ccwh3l_wz_13TeV_met->SetTicky(1);
   ccwh3l_wz_13TeV_met->SetLeftMargin(0.16);
   ccwh3l_wz_13TeV_met->SetRightMargin(0.04);
   ccwh3l_wz_13TeV_met->SetTopMargin(0.05);
   ccwh3l_wz_13TeV_met->SetBottomMargin(0.13);
   ccwh3l_wz_13TeV_met->SetFrameFillStyle(0);
   ccwh3l_wz_13TeV_met->SetFrameBorderMode(0);
   ccwh3l_wz_13TeV_met->SetFrameFillStyle(0);
   ccwh3l_wz_13TeV_met->SetFrameBorderMode(0);
   
   TH1F *hframe41 = new TH1F("hframe41","",1000,0,200);
   hframe41->SetMinimum(0);
   hframe41->SetMaximum(145.3536);
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
   
   THStack *thsBackground_grouped_wh3l_wz_13TeV_met = new THStack();
   thsBackground_grouped_wh3l_wz_13TeV_met->SetName("thsBackground_grouped_wh3l_wz_13TeV_met");
   thsBackground_grouped_wh3l_wz_13TeV_met->SetTitle("thsBackground_grouped_wh3l_wz_13TeV_met");
   
   TH1F *thsBackground_grouped_wh3l_wz_13TeV_met_stack_9 = new TH1F("thsBackground_grouped_wh3l_wz_13TeV_met_stack_9","thsBackground_grouped_wh3l_wz_13TeV_met",20,0,200);
   thsBackground_grouped_wh3l_wz_13TeV_met_stack_9->SetMinimum(-0.8187809);
   thsBackground_grouped_wh3l_wz_13TeV_met_stack_9->SetMaximum(19.37427);
   thsBackground_grouped_wh3l_wz_13TeV_met_stack_9->SetDirectory(0);
   thsBackground_grouped_wh3l_wz_13TeV_met_stack_9->SetStats(0);
   thsBackground_grouped_wh3l_wz_13TeV_met_stack_9->SetLineStyle(0);
   thsBackground_grouped_wh3l_wz_13TeV_met_stack_9->SetMarkerStyle(20);
   thsBackground_grouped_wh3l_wz_13TeV_met_stack_9->GetXaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_wz_13TeV_met_stack_9->GetXaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_wz_13TeV_met_stack_9->GetXaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_wz_13TeV_met_stack_9->GetXaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_wz_13TeV_met_stack_9->GetXaxis()->SetTitleOffset(0.9);
   thsBackground_grouped_wh3l_wz_13TeV_met_stack_9->GetXaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_wz_13TeV_met_stack_9->GetYaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_wz_13TeV_met_stack_9->GetYaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_wz_13TeV_met_stack_9->GetYaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_wz_13TeV_met_stack_9->GetYaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_wz_13TeV_met_stack_9->GetYaxis()->SetTitleOffset(1.25);
   thsBackground_grouped_wh3l_wz_13TeV_met_stack_9->GetYaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_wz_13TeV_met_stack_9->GetZaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_wz_13TeV_met_stack_9->GetZaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_wz_13TeV_met_stack_9->GetZaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_wz_13TeV_met_stack_9->GetZaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_wz_13TeV_met_stack_9->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_wz_13TeV_met->SetHistogram(thsBackground_grouped_wh3l_wz_13TeV_met_stack_9);
   
   
   TH1D *new_histo_group_Fake_wh3l_wz_13TeV_met42 = new TH1D("new_histo_group_Fake_wh3l_wz_13TeV_met42","histo_Fake",20,0,200);
   new_histo_group_Fake_wh3l_wz_13TeV_met42->SetBinContent(4,7.532986);
   new_histo_group_Fake_wh3l_wz_13TeV_met42->SetBinContent(5,6.536044);
   new_histo_group_Fake_wh3l_wz_13TeV_met42->SetBinContent(6,2.226213);
   new_histo_group_Fake_wh3l_wz_13TeV_met42->SetBinContent(7,0.3677755);
   new_histo_group_Fake_wh3l_wz_13TeV_met42->SetBinContent(8,0.02506274);
   new_histo_group_Fake_wh3l_wz_13TeV_met42->SetBinContent(9,0.9387379);
   new_histo_group_Fake_wh3l_wz_13TeV_met42->SetBinContent(10,0.2057264);
   new_histo_group_Fake_wh3l_wz_13TeV_met42->SetBinContent(11,-0.5059939);
   new_histo_group_Fake_wh3l_wz_13TeV_met42->SetBinContent(12,-0.2545197);
   new_histo_group_Fake_wh3l_wz_13TeV_met42->SetBinContent(13,0.2230483);
   new_histo_group_Fake_wh3l_wz_13TeV_met42->SetBinContent(14,0.5030913);
   new_histo_group_Fake_wh3l_wz_13TeV_met42->SetBinContent(15,-0.08548435);
   new_histo_group_Fake_wh3l_wz_13TeV_met42->SetBinContent(17,0.07568908);
   new_histo_group_Fake_wh3l_wz_13TeV_met42->SetBinContent(18,0.5976825);
   new_histo_group_Fake_wh3l_wz_13TeV_met42->SetBinContent(19,-0.1451545);
   new_histo_group_Fake_wh3l_wz_13TeV_met42->SetBinContent(20,-0.05804348);
   new_histo_group_Fake_wh3l_wz_13TeV_met42->SetBinContent(21,-0.09918789);
   new_histo_group_Fake_wh3l_wz_13TeV_met42->SetBinError(4,2.128082);
   new_histo_group_Fake_wh3l_wz_13TeV_met42->SetBinError(5,2.271517);
   new_histo_group_Fake_wh3l_wz_13TeV_met42->SetBinError(6,1.563221);
   new_histo_group_Fake_wh3l_wz_13TeV_met42->SetBinError(7,1.125687);
   new_histo_group_Fake_wh3l_wz_13TeV_met42->SetBinError(8,0.6654036);
   new_histo_group_Fake_wh3l_wz_13TeV_met42->SetBinError(9,0.8853296);
   new_histo_group_Fake_wh3l_wz_13TeV_met42->SetBinError(10,0.4144808);
   new_histo_group_Fake_wh3l_wz_13TeV_met42->SetBinError(11,0.3127869);
   new_histo_group_Fake_wh3l_wz_13TeV_met42->SetBinError(12,0.2502872);
   new_histo_group_Fake_wh3l_wz_13TeV_met42->SetBinError(13,0.2028121);
   new_histo_group_Fake_wh3l_wz_13TeV_met42->SetBinError(14,0.5389607);
   new_histo_group_Fake_wh3l_wz_13TeV_met42->SetBinError(15,0.06047217);
   new_histo_group_Fake_wh3l_wz_13TeV_met42->SetBinError(17,0.07568908);
   new_histo_group_Fake_wh3l_wz_13TeV_met42->SetBinError(18,0.5356114);
   new_histo_group_Fake_wh3l_wz_13TeV_met42->SetBinError(19,0.1029677);
   new_histo_group_Fake_wh3l_wz_13TeV_met42->SetBinError(20,0.05804348);
   new_histo_group_Fake_wh3l_wz_13TeV_met42->SetBinError(21,0.04462709);
   new_histo_group_Fake_wh3l_wz_13TeV_met42->SetEntries(419);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_wz_13TeV_met42->SetFillColor(ci);
   new_histo_group_Fake_wh3l_wz_13TeV_met42->SetFillStyle(3001);

   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_wz_13TeV_met42->SetLineColor(ci);
   new_histo_group_Fake_wh3l_wz_13TeV_met42->GetXaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_wz_13TeV_met42->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_wz_13TeV_met42->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_wz_13TeV_met42->GetXaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_wz_13TeV_met42->GetYaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_wz_13TeV_met42->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_wz_13TeV_met42->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_wz_13TeV_met42->GetYaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_wz_13TeV_met42->GetZaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_wz_13TeV_met42->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_wz_13TeV_met42->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_wz_13TeV_met42->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_wz_13TeV_met->Add(new_histo_group_Fake_wh3l_wz_13TeV_met,"");
   
   TH1D *new_histo_group_WW_wh3l_wz_13TeV_met43 = new TH1D("new_histo_group_WW_wh3l_wz_13TeV_met43","histo_WW",20,0,200);
   new_histo_group_WW_wh3l_wz_13TeV_met43->SetBinContent(5,0.0501494);
   new_histo_group_WW_wh3l_wz_13TeV_met43->SetBinContent(7,0.01431565);
   new_histo_group_WW_wh3l_wz_13TeV_met43->SetBinContent(10,0.01092969);
   new_histo_group_WW_wh3l_wz_13TeV_met43->SetBinError(5,0.02907591);
   new_histo_group_WW_wh3l_wz_13TeV_met43->SetBinError(7,0.01431565);
   new_histo_group_WW_wh3l_wz_13TeV_met43->SetBinError(10,0.01092969);
   new_histo_group_WW_wh3l_wz_13TeV_met43->SetEntries(5);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_wz_13TeV_met43->SetFillColor(ci);
   new_histo_group_WW_wh3l_wz_13TeV_met43->SetFillStyle(3001);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_wz_13TeV_met43->SetLineColor(ci);
   new_histo_group_WW_wh3l_wz_13TeV_met43->GetXaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_wz_13TeV_met43->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_wz_13TeV_met43->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_wz_13TeV_met43->GetXaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_wz_13TeV_met43->GetYaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_wz_13TeV_met43->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_wz_13TeV_met43->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_wz_13TeV_met43->GetYaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_wz_13TeV_met43->GetZaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_wz_13TeV_met43->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_wz_13TeV_met43->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_wz_13TeV_met43->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_wz_13TeV_met->Add(new_histo_group_WW_wh3l_wz_13TeV_met,"");
   
   TH1D *new_histo_group_VVV_wh3l_wz_13TeV_met44 = new TH1D("new_histo_group_VVV_wh3l_wz_13TeV_met44","histo_VVV",20,0,200);
   new_histo_group_VVV_wh3l_wz_13TeV_met44->SetBinContent(4,0.008254685);
   new_histo_group_VVV_wh3l_wz_13TeV_met44->SetBinContent(5,0.01947468);
   new_histo_group_VVV_wh3l_wz_13TeV_met44->SetBinContent(6,0.01368166);
   new_histo_group_VVV_wh3l_wz_13TeV_met44->SetBinContent(7,0.01879741);
   new_histo_group_VVV_wh3l_wz_13TeV_met44->SetBinContent(8,0.01959619);
   new_histo_group_VVV_wh3l_wz_13TeV_met44->SetBinContent(9,0.01622976);
   new_histo_group_VVV_wh3l_wz_13TeV_met44->SetBinContent(10,0.01099189);
   new_histo_group_VVV_wh3l_wz_13TeV_met44->SetBinContent(11,0.008151684);
   new_histo_group_VVV_wh3l_wz_13TeV_met44->SetBinContent(12,0.006865189);
   new_histo_group_VVV_wh3l_wz_13TeV_met44->SetBinContent(13,0.005184424);
   new_histo_group_VVV_wh3l_wz_13TeV_met44->SetBinContent(14,0.006236627);
   new_histo_group_VVV_wh3l_wz_13TeV_met44->SetBinContent(15,0.008274669);
   new_histo_group_VVV_wh3l_wz_13TeV_met44->SetBinContent(16,0.00620467);
   new_histo_group_VVV_wh3l_wz_13TeV_met44->SetBinContent(17,0.002793359);
   new_histo_group_VVV_wh3l_wz_13TeV_met44->SetBinContent(18,0.000850244);
   new_histo_group_VVV_wh3l_wz_13TeV_met44->SetBinContent(19,0.0001872635);
   new_histo_group_VVV_wh3l_wz_13TeV_met44->SetBinContent(20,0.001729438);
   new_histo_group_VVV_wh3l_wz_13TeV_met44->SetBinContent(21,0.01725747);
   new_histo_group_VVV_wh3l_wz_13TeV_met44->SetBinError(4,0.002753556);
   new_histo_group_VVV_wh3l_wz_13TeV_met44->SetBinError(5,0.003713723);
   new_histo_group_VVV_wh3l_wz_13TeV_met44->SetBinError(6,0.00311636);
   new_histo_group_VVV_wh3l_wz_13TeV_met44->SetBinError(7,0.003501859);
   new_histo_group_VVV_wh3l_wz_13TeV_met44->SetBinError(8,0.003739817);
   new_histo_group_VVV_wh3l_wz_13TeV_met44->SetBinError(9,0.003391317);
   new_histo_group_VVV_wh3l_wz_13TeV_met44->SetBinError(10,0.002836323);
   new_histo_group_VVV_wh3l_wz_13TeV_met44->SetBinError(11,0.002173079);
   new_histo_group_VVV_wh3l_wz_13TeV_met44->SetBinError(12,0.002192775);
   new_histo_group_VVV_wh3l_wz_13TeV_met44->SetBinError(13,0.002013894);
   new_histo_group_VVV_wh3l_wz_13TeV_met44->SetBinError(14,0.00218133);
   new_histo_group_VVV_wh3l_wz_13TeV_met44->SetBinError(15,0.002292011);
   new_histo_group_VVV_wh3l_wz_13TeV_met44->SetBinError(16,0.002039206);
   new_histo_group_VVV_wh3l_wz_13TeV_met44->SetBinError(17,0.001274487);
   new_histo_group_VVV_wh3l_wz_13TeV_met44->SetBinError(18,0.0006761054);
   new_histo_group_VVV_wh3l_wz_13TeV_met44->SetBinError(19,0.0009214041);
   new_histo_group_VVV_wh3l_wz_13TeV_met44->SetBinError(20,0.001020274);
   new_histo_group_VVV_wh3l_wz_13TeV_met44->SetBinError(21,0.003743587);
   new_histo_group_VVV_wh3l_wz_13TeV_met44->SetEntries(349);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_wz_13TeV_met44->SetFillColor(ci);
   new_histo_group_VVV_wh3l_wz_13TeV_met44->SetFillStyle(3001);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_wz_13TeV_met44->SetLineColor(ci);
   new_histo_group_VVV_wh3l_wz_13TeV_met44->GetXaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_wz_13TeV_met44->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_wz_13TeV_met44->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_wz_13TeV_met44->GetXaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_wz_13TeV_met44->GetYaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_wz_13TeV_met44->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_wz_13TeV_met44->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_wz_13TeV_met44->GetYaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_wz_13TeV_met44->GetZaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_wz_13TeV_met44->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_wz_13TeV_met44->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_wz_13TeV_met44->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_wz_13TeV_met->Add(new_histo_group_VVV_wh3l_wz_13TeV_met,"");
   
   TH1D *new_histo_group_Vg_wh3l_wz_13TeV_met45 = new TH1D("new_histo_group_Vg_wh3l_wz_13TeV_met45","histo_Vg",20,0,200);
   new_histo_group_Vg_wh3l_wz_13TeV_met45->SetBinContent(4,2.991389);
   new_histo_group_Vg_wh3l_wz_13TeV_met45->SetBinContent(5,4.273205);
   new_histo_group_Vg_wh3l_wz_13TeV_met45->SetBinContent(6,0.4164888);
   new_histo_group_Vg_wh3l_wz_13TeV_met45->SetBinContent(7,0.3235372);
   new_histo_group_Vg_wh3l_wz_13TeV_met45->SetBinError(4,0.6709098);
   new_histo_group_Vg_wh3l_wz_13TeV_met45->SetBinError(5,0.7009761);
   new_histo_group_Vg_wh3l_wz_13TeV_met45->SetBinError(6,0.3214612);
   new_histo_group_Vg_wh3l_wz_13TeV_met45->SetBinError(7,0.188611);
   new_histo_group_Vg_wh3l_wz_13TeV_met45->SetEntries(113);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_wz_13TeV_met45->SetFillColor(ci);
   new_histo_group_Vg_wh3l_wz_13TeV_met45->SetFillStyle(3001);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_wz_13TeV_met45->SetLineColor(ci);
   new_histo_group_Vg_wh3l_wz_13TeV_met45->GetXaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_wz_13TeV_met45->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_wz_13TeV_met45->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_wz_13TeV_met45->GetXaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_wz_13TeV_met45->GetYaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_wz_13TeV_met45->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_wz_13TeV_met45->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_wz_13TeV_met45->GetYaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_wz_13TeV_met45->GetZaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_wz_13TeV_met45->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_wz_13TeV_met45->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_wz_13TeV_met45->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_wz_13TeV_met->Add(new_histo_group_Vg_wh3l_wz_13TeV_met,"");
   
   TH1D *new_histo_group_ZZ_wh3l_wz_13TeV_met46 = new TH1D("new_histo_group_ZZ_wh3l_wz_13TeV_met46","histo_ZZ",20,0,200);
   new_histo_group_ZZ_wh3l_wz_13TeV_met46->SetBinContent(4,2.689325);
   new_histo_group_ZZ_wh3l_wz_13TeV_met46->SetBinContent(5,3.674968);
   new_histo_group_ZZ_wh3l_wz_13TeV_met46->SetBinContent(6,1.93854);
   new_histo_group_ZZ_wh3l_wz_13TeV_met46->SetBinContent(7,1.359447);
   new_histo_group_ZZ_wh3l_wz_13TeV_met46->SetBinContent(8,0.577104);
   new_histo_group_ZZ_wh3l_wz_13TeV_met46->SetBinContent(9,0.3683951);
   new_histo_group_ZZ_wh3l_wz_13TeV_met46->SetBinContent(10,0.2270178);
   new_histo_group_ZZ_wh3l_wz_13TeV_met46->SetBinContent(11,0.08483115);
   new_histo_group_ZZ_wh3l_wz_13TeV_met46->SetBinContent(12,0.01983349);
   new_histo_group_ZZ_wh3l_wz_13TeV_met46->SetBinContent(13,0.03476685);
   new_histo_group_ZZ_wh3l_wz_13TeV_met46->SetBinContent(20,0.04585245);
   new_histo_group_ZZ_wh3l_wz_13TeV_met46->SetBinError(4,0.3338125);
   new_histo_group_ZZ_wh3l_wz_13TeV_met46->SetBinError(5,0.3900583);
   new_histo_group_ZZ_wh3l_wz_13TeV_met46->SetBinError(6,0.2778032);
   new_histo_group_ZZ_wh3l_wz_13TeV_met46->SetBinError(7,0.2423515);
   new_histo_group_ZZ_wh3l_wz_13TeV_met46->SetBinError(8,0.1504133);
   new_histo_group_ZZ_wh3l_wz_13TeV_met46->SetBinError(9,0.1297957);
   new_histo_group_ZZ_wh3l_wz_13TeV_met46->SetBinError(10,0.101788);
   new_histo_group_ZZ_wh3l_wz_13TeV_met46->SetBinError(11,0.06002685);
   new_histo_group_ZZ_wh3l_wz_13TeV_met46->SetBinError(12,0.01983349);
   new_histo_group_ZZ_wh3l_wz_13TeV_met46->SetBinError(13,0.03476685);
   new_histo_group_ZZ_wh3l_wz_13TeV_met46->SetBinError(20,0.04585245);
   new_histo_group_ZZ_wh3l_wz_13TeV_met46->SetEntries(305);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_wz_13TeV_met46->SetFillColor(ci);
   new_histo_group_ZZ_wh3l_wz_13TeV_met46->SetFillStyle(3001);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_wz_13TeV_met46->SetLineColor(ci);
   new_histo_group_ZZ_wh3l_wz_13TeV_met46->GetXaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_wz_13TeV_met46->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_wz_13TeV_met46->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_wz_13TeV_met46->GetXaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_wz_13TeV_met46->GetYaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_wz_13TeV_met46->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_wz_13TeV_met46->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_wz_13TeV_met46->GetYaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_wz_13TeV_met46->GetZaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_wz_13TeV_met46->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_wz_13TeV_met46->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_wz_13TeV_met46->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_wz_13TeV_met->Add(new_histo_group_ZZ_wh3l_wz_13TeV_met,"");
   
   TH1D *new_histo_group_WZ_wh3l_wz_13TeV_met47 = new TH1D("new_histo_group_WZ_wh3l_wz_13TeV_met47","histo_ZZ",20,0,200);
   new_histo_group_WZ_wh3l_wz_13TeV_met47->SetBinContent(4,2.689325);
   new_histo_group_WZ_wh3l_wz_13TeV_met47->SetBinContent(5,3.674968);
   new_histo_group_WZ_wh3l_wz_13TeV_met47->SetBinContent(6,1.93854);
   new_histo_group_WZ_wh3l_wz_13TeV_met47->SetBinContent(7,1.359447);
   new_histo_group_WZ_wh3l_wz_13TeV_met47->SetBinContent(8,0.577104);
   new_histo_group_WZ_wh3l_wz_13TeV_met47->SetBinContent(9,0.3683951);
   new_histo_group_WZ_wh3l_wz_13TeV_met47->SetBinContent(10,0.2270178);
   new_histo_group_WZ_wh3l_wz_13TeV_met47->SetBinContent(11,0.08483115);
   new_histo_group_WZ_wh3l_wz_13TeV_met47->SetBinContent(12,0.01983349);
   new_histo_group_WZ_wh3l_wz_13TeV_met47->SetBinContent(13,0.03476685);
   new_histo_group_WZ_wh3l_wz_13TeV_met47->SetBinContent(20,0.04585245);
   new_histo_group_WZ_wh3l_wz_13TeV_met47->SetBinError(4,0.3338125);
   new_histo_group_WZ_wh3l_wz_13TeV_met47->SetBinError(5,0.3900583);
   new_histo_group_WZ_wh3l_wz_13TeV_met47->SetBinError(6,0.2778032);
   new_histo_group_WZ_wh3l_wz_13TeV_met47->SetBinError(7,0.2423515);
   new_histo_group_WZ_wh3l_wz_13TeV_met47->SetBinError(8,0.1504133);
   new_histo_group_WZ_wh3l_wz_13TeV_met47->SetBinError(9,0.1297957);
   new_histo_group_WZ_wh3l_wz_13TeV_met47->SetBinError(10,0.101788);
   new_histo_group_WZ_wh3l_wz_13TeV_met47->SetBinError(11,0.06002685);
   new_histo_group_WZ_wh3l_wz_13TeV_met47->SetBinError(12,0.01983349);
   new_histo_group_WZ_wh3l_wz_13TeV_met47->SetBinError(13,0.03476685);
   new_histo_group_WZ_wh3l_wz_13TeV_met47->SetBinError(20,0.04585245);
   new_histo_group_WZ_wh3l_wz_13TeV_met47->SetEntries(305);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_wz_13TeV_met47->SetFillColor(ci);
   new_histo_group_WZ_wh3l_wz_13TeV_met47->SetFillStyle(3001);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_wz_13TeV_met47->SetLineColor(ci);
   new_histo_group_WZ_wh3l_wz_13TeV_met47->GetXaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_wz_13TeV_met47->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_wz_13TeV_met47->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_wz_13TeV_met47->GetXaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_wz_13TeV_met47->GetYaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_wz_13TeV_met47->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_wz_13TeV_met47->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_wz_13TeV_met47->GetYaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_wz_13TeV_met47->GetZaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_wz_13TeV_met47->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_wz_13TeV_met47->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_wz_13TeV_met47->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_wz_13TeV_met->Add(new_histo_group_WZ_wh3l_wz_13TeV_met,"");
   
   TH1D *new_histo_group_Higgs_wh3l_wz_13TeV_met48 = new TH1D("new_histo_group_Higgs_wh3l_wz_13TeV_met48","histo_H_htt",20,0,200);
   new_histo_group_Higgs_wh3l_wz_13TeV_met48->SetBinContent(4,0.1299577);
   new_histo_group_Higgs_wh3l_wz_13TeV_met48->SetBinContent(5,0.2228739);
   new_histo_group_Higgs_wh3l_wz_13TeV_met48->SetBinContent(6,0.1938967);
   new_histo_group_Higgs_wh3l_wz_13TeV_met48->SetBinContent(7,0.1463962);
   new_histo_group_Higgs_wh3l_wz_13TeV_met48->SetBinContent(8,0.132839);
   new_histo_group_Higgs_wh3l_wz_13TeV_met48->SetBinContent(9,0.08151626);
   new_histo_group_Higgs_wh3l_wz_13TeV_met48->SetBinContent(10,0.0564675);
   new_histo_group_Higgs_wh3l_wz_13TeV_met48->SetBinContent(11,0.06509677);
   new_histo_group_Higgs_wh3l_wz_13TeV_met48->SetBinContent(12,0.02265524);
   new_histo_group_Higgs_wh3l_wz_13TeV_met48->SetBinContent(13,0.0246042);
   new_histo_group_Higgs_wh3l_wz_13TeV_met48->SetBinContent(14,0.01857236);
   new_histo_group_Higgs_wh3l_wz_13TeV_met48->SetBinContent(15,0.0185124);
   new_histo_group_Higgs_wh3l_wz_13TeV_met48->SetBinContent(16,0.01597754);
   new_histo_group_Higgs_wh3l_wz_13TeV_met48->SetBinContent(17,0.006201577);
   new_histo_group_Higgs_wh3l_wz_13TeV_met48->SetBinContent(18,0.004274687);
   new_histo_group_Higgs_wh3l_wz_13TeV_met48->SetBinContent(19,0.002918835);
   new_histo_group_Higgs_wh3l_wz_13TeV_met48->SetBinContent(20,0.004562458);
   new_histo_group_Higgs_wh3l_wz_13TeV_met48->SetBinContent(21,0.01298721);
   new_histo_group_Higgs_wh3l_wz_13TeV_met48->SetBinError(4,0.01286388);
   new_histo_group_Higgs_wh3l_wz_13TeV_met48->SetBinError(5,0.01638766);
   new_histo_group_Higgs_wh3l_wz_13TeV_met48->SetBinError(6,0.01539644);
   new_histo_group_Higgs_wh3l_wz_13TeV_met48->SetBinError(7,0.01360503);
   new_histo_group_Higgs_wh3l_wz_13TeV_met48->SetBinError(8,0.01262921);
   new_histo_group_Higgs_wh3l_wz_13TeV_met48->SetBinError(9,0.009437235);
   new_histo_group_Higgs_wh3l_wz_13TeV_met48->SetBinError(10,0.007801444);
   new_histo_group_Higgs_wh3l_wz_13TeV_met48->SetBinError(11,0.008672184);
   new_histo_group_Higgs_wh3l_wz_13TeV_met48->SetBinError(12,0.004534916);
   new_histo_group_Higgs_wh3l_wz_13TeV_met48->SetBinError(13,0.004489792);
   new_histo_group_Higgs_wh3l_wz_13TeV_met48->SetBinError(14,0.004262198);
   new_histo_group_Higgs_wh3l_wz_13TeV_met48->SetBinError(15,0.004508968);
   new_histo_group_Higgs_wh3l_wz_13TeV_met48->SetBinError(16,0.00435511);
   new_histo_group_Higgs_wh3l_wz_13TeV_met48->SetBinError(17,0.00242065);
   new_histo_group_Higgs_wh3l_wz_13TeV_met48->SetBinError(18,0.002080828);
   new_histo_group_Higgs_wh3l_wz_13TeV_met48->SetBinError(19,0.001822695);
   new_histo_group_Higgs_wh3l_wz_13TeV_met48->SetBinError(20,0.002419387);
   new_histo_group_Higgs_wh3l_wz_13TeV_met48->SetBinError(21,0.003623755);
   new_histo_group_Higgs_wh3l_wz_13TeV_met48->SetEntries(1642);
   new_histo_group_Higgs_wh3l_wz_13TeV_met48->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_wz_13TeV_met48->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_wz_13TeV_met48->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_wz_13TeV_met48->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_wz_13TeV_met48->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_wz_13TeV_met48->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_wz_13TeV_met48->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_wz_13TeV_met48->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_wz_13TeV_met48->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_wz_13TeV_met48->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_wz_13TeV_met48->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_wz_13TeV_met48->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_wz_13TeV_met48->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_wz_13TeV_met48->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_wz_13TeV_met48->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_wz_13TeV_met->Add(new_histo_group_Higgs_wh3l_wz_13TeV_met,"");
   thsBackground_grouped_wh3l_wz_13TeV_met->Draw("hist same");
   
   thsSignal_grouped_wh3l_wz_13TeV_met = new THStack();
   thsSignal_grouped_wh3l_wz_13TeV_met->SetName("thsSignal_grouped_wh3l_wz_13TeV_met");
   thsSignal_grouped_wh3l_wz_13TeV_met->SetTitle("thsSignal_grouped_wh3l_wz_13TeV_met");
   
   TH1F *thsSignal_grouped_wh3l_wz_13TeV_met_stack_10 = new TH1F("thsSignal_grouped_wh3l_wz_13TeV_met_stack_10","thsSignal_grouped_wh3l_wz_13TeV_met",20,0,200);
   thsSignal_grouped_wh3l_wz_13TeV_met_stack_10->SetMinimum(0);
   thsSignal_grouped_wh3l_wz_13TeV_met_stack_10->SetMaximum(0.2512247);
   thsSignal_grouped_wh3l_wz_13TeV_met_stack_10->SetDirectory(0);
   thsSignal_grouped_wh3l_wz_13TeV_met_stack_10->SetStats(0);
   thsSignal_grouped_wh3l_wz_13TeV_met_stack_10->SetLineStyle(0);
   thsSignal_grouped_wh3l_wz_13TeV_met_stack_10->SetMarkerStyle(20);
   thsSignal_grouped_wh3l_wz_13TeV_met_stack_10->GetXaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_wz_13TeV_met_stack_10->GetXaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_wz_13TeV_met_stack_10->GetXaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_wz_13TeV_met_stack_10->GetXaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_wz_13TeV_met_stack_10->GetXaxis()->SetTitleOffset(0.9);
   thsSignal_grouped_wh3l_wz_13TeV_met_stack_10->GetXaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_wz_13TeV_met_stack_10->GetYaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_wz_13TeV_met_stack_10->GetYaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_wz_13TeV_met_stack_10->GetYaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_wz_13TeV_met_stack_10->GetYaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_wz_13TeV_met_stack_10->GetYaxis()->SetTitleOffset(1.25);
   thsSignal_grouped_wh3l_wz_13TeV_met_stack_10->GetYaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_wz_13TeV_met_stack_10->GetZaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_wz_13TeV_met_stack_10->GetZaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_wz_13TeV_met_stack_10->GetZaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_wz_13TeV_met_stack_10->GetZaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_wz_13TeV_met_stack_10->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_wz_13TeV_met->SetHistogram(thsSignal_grouped_wh3l_wz_13TeV_met_stack_10);
   
   
   TH1D *new_histo_group_Higgs_wh3l_wz_13TeV_met49 = new TH1D("new_histo_group_Higgs_wh3l_wz_13TeV_met49","histo_H_htt",20,0,200);
   new_histo_group_Higgs_wh3l_wz_13TeV_met49->SetBinContent(4,0.1299577);
   new_histo_group_Higgs_wh3l_wz_13TeV_met49->SetBinContent(5,0.2228739);
   new_histo_group_Higgs_wh3l_wz_13TeV_met49->SetBinContent(6,0.1938967);
   new_histo_group_Higgs_wh3l_wz_13TeV_met49->SetBinContent(7,0.1463962);
   new_histo_group_Higgs_wh3l_wz_13TeV_met49->SetBinContent(8,0.132839);
   new_histo_group_Higgs_wh3l_wz_13TeV_met49->SetBinContent(9,0.08151626);
   new_histo_group_Higgs_wh3l_wz_13TeV_met49->SetBinContent(10,0.0564675);
   new_histo_group_Higgs_wh3l_wz_13TeV_met49->SetBinContent(11,0.06509677);
   new_histo_group_Higgs_wh3l_wz_13TeV_met49->SetBinContent(12,0.02265524);
   new_histo_group_Higgs_wh3l_wz_13TeV_met49->SetBinContent(13,0.0246042);
   new_histo_group_Higgs_wh3l_wz_13TeV_met49->SetBinContent(14,0.01857236);
   new_histo_group_Higgs_wh3l_wz_13TeV_met49->SetBinContent(15,0.0185124);
   new_histo_group_Higgs_wh3l_wz_13TeV_met49->SetBinContent(16,0.01597754);
   new_histo_group_Higgs_wh3l_wz_13TeV_met49->SetBinContent(17,0.006201577);
   new_histo_group_Higgs_wh3l_wz_13TeV_met49->SetBinContent(18,0.004274687);
   new_histo_group_Higgs_wh3l_wz_13TeV_met49->SetBinContent(19,0.002918835);
   new_histo_group_Higgs_wh3l_wz_13TeV_met49->SetBinContent(20,0.004562458);
   new_histo_group_Higgs_wh3l_wz_13TeV_met49->SetBinContent(21,0.01298721);
   new_histo_group_Higgs_wh3l_wz_13TeV_met49->SetBinError(4,0.01286388);
   new_histo_group_Higgs_wh3l_wz_13TeV_met49->SetBinError(5,0.01638766);
   new_histo_group_Higgs_wh3l_wz_13TeV_met49->SetBinError(6,0.01539644);
   new_histo_group_Higgs_wh3l_wz_13TeV_met49->SetBinError(7,0.01360503);
   new_histo_group_Higgs_wh3l_wz_13TeV_met49->SetBinError(8,0.01262921);
   new_histo_group_Higgs_wh3l_wz_13TeV_met49->SetBinError(9,0.009437235);
   new_histo_group_Higgs_wh3l_wz_13TeV_met49->SetBinError(10,0.007801444);
   new_histo_group_Higgs_wh3l_wz_13TeV_met49->SetBinError(11,0.008672184);
   new_histo_group_Higgs_wh3l_wz_13TeV_met49->SetBinError(12,0.004534916);
   new_histo_group_Higgs_wh3l_wz_13TeV_met49->SetBinError(13,0.004489792);
   new_histo_group_Higgs_wh3l_wz_13TeV_met49->SetBinError(14,0.004262198);
   new_histo_group_Higgs_wh3l_wz_13TeV_met49->SetBinError(15,0.004508968);
   new_histo_group_Higgs_wh3l_wz_13TeV_met49->SetBinError(16,0.00435511);
   new_histo_group_Higgs_wh3l_wz_13TeV_met49->SetBinError(17,0.00242065);
   new_histo_group_Higgs_wh3l_wz_13TeV_met49->SetBinError(18,0.002080828);
   new_histo_group_Higgs_wh3l_wz_13TeV_met49->SetBinError(19,0.001822695);
   new_histo_group_Higgs_wh3l_wz_13TeV_met49->SetBinError(20,0.002419387);
   new_histo_group_Higgs_wh3l_wz_13TeV_met49->SetBinError(21,0.003623755);
   new_histo_group_Higgs_wh3l_wz_13TeV_met49->SetEntries(1642);
   new_histo_group_Higgs_wh3l_wz_13TeV_met49->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_wz_13TeV_met49->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_wz_13TeV_met49->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_wz_13TeV_met49->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_wz_13TeV_met49->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_wz_13TeV_met49->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_wz_13TeV_met49->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_wz_13TeV_met49->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_wz_13TeV_met49->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_wz_13TeV_met49->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_wz_13TeV_met49->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_wz_13TeV_met49->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_wz_13TeV_met49->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_wz_13TeV_met49->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_wz_13TeV_met49->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_wz_13TeV_met->Add(new_histo_group_Higgs_wh3l_wz_13TeV_met,"");
   thsSignal_grouped_wh3l_wz_13TeV_met->Draw("hist same noclear");
   
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
   29.80141,
   44.70153,
   29.53858,
   20.02287,
   12.51671,
   8.768139,
   5.298277,
   2.670509,
   1.830525,
   1.640546,
   1.70654,
   0.7433142,
   0.6614482,
   0.542663,
   0.8981643,
   0.1220216,
   0.2134043};
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
   4.116344,
   4.282195,
   2.621189,
   1.135518,
   0.4336328,
   1.251597,
   0.4872793,
   0.5268169,
   0.3846883,
   0.3327226,
   0.6055462,
   0.1320074,
   0.06167296,
   0.128155,
   0.6033767,
   0.1474457,
   0.1400554};
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
   4.116343,
   4.282193,
   2.621193,
   1.890895,
   1.073754,
   1.251598,
   0.6948417,
   0.526817,
   0.3846884,
   0.3327224,
   0.640346,
   0.1320073,
   0.06167296,
   0.128155,
   0.6033768,
   0.1481473,
   0.1400554};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(20,_fx3009,_fy3009,_felx3009,_fehx3009,_fely3009,_fehy3009);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(12);
   grae->SetFillStyle(3004);
   grae->SetLineColor(12);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3009 = new TH1F("Graph_Graph3009","",100,0,220);
   Graph_Graph3009->SetMinimum(-4.926339);
   Graph_Graph3009->SetMaximum(53.88463);
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
   26,
   51,
   42,
   27,
   15,
   6,
   5,
   6,
   3,
   2,
   1,
   1,
   0,
   0,
   0,
   2,
   1};
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
   5.066111,
   7.118073,
   6.454957,
   5.163869,
   3.829449,
   2.379969,
   2.159724,
   2.379969,
   1.632727,
   1.29183,
   0.8272524,
   0.8272524,
   0,
   0,
   0,
   1.29183,
   0.8272524};
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
   6.164451,
   8.188293,
   7.532337,
   6.260373,
   4.958839,
   3.583713,
   3.382539,
   3.583713,
   2.918242,
   2.63791,
   2.29957,
   2.29957,
   1.147908,
   1.147908,
   1.147908,
   2.63791,
   2.29957};
   grae = new TGraphAsymmErrors(20,_fx3010,_fy3010,_felx3010,_fehx3010,_fely3010,_fehy3010);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(1);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3010 = new TH1F("Graph_Graph3010","",100,0,220);
   Graph_Graph3010->SetMinimum(0);
   Graph_Graph3010->SetMaximum(65.10712);
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
   
   TLegend *leg = new TLegend(0.2,0.55,0.8,0.88,NULL,"brNDC");
   leg->SetTextFont(62);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("new_histo_group_Fake_wh3l_wz_13TeV_met","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_wz_13TeV_met","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_wz_13TeV_met","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_wz_13TeV_met","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_wz_13TeV_met","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_wz_13TeV_met","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_wz_13TeV_met","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_wz_13TeV_met","Data","EPL");
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
   entry=leg->AddEntry("new_histo_group_Fake_wh3l_wz_13TeV_met","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_wz_13TeV_met","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_wz_13TeV_met","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_wz_13TeV_met","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_wz_13TeV_met","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_wz_13TeV_met","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_wz_13TeV_met","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_wz_13TeV_met","Data","EPL");
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
   hframe_copy50->SetMaximum(145.3536);
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
   ccwh3l_wz_13TeV_met->Modified();
   ccwh3l_wz_13TeV_met->cd();
   ccwh3l_wz_13TeV_met->SetSelected(ccwh3l_wz_13TeV_met);
}
