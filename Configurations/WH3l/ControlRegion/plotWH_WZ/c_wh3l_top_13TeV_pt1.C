void c_wh3l_top_13TeV_pt1()
{
//=========Macro generated from canvas: ccwh3l_top_13TeV_pt1/cc
//=========  (Sat Jul  2 20:39:44 2016) by ROOT version6.02/13
   TCanvas *ccwh3l_top_13TeV_pt1 = new TCanvas("ccwh3l_top_13TeV_pt1", "cc",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   ccwh3l_top_13TeV_pt1->SetHighLightColor(2);
   ccwh3l_top_13TeV_pt1->Range(-28,-4.291755,209.5,28.72174);
   ccwh3l_top_13TeV_pt1->SetFillColor(0);
   ccwh3l_top_13TeV_pt1->SetBorderMode(0);
   ccwh3l_top_13TeV_pt1->SetBorderSize(2);
   ccwh3l_top_13TeV_pt1->SetTickx(1);
   ccwh3l_top_13TeV_pt1->SetTicky(1);
   ccwh3l_top_13TeV_pt1->SetLeftMargin(0.16);
   ccwh3l_top_13TeV_pt1->SetRightMargin(0.04);
   ccwh3l_top_13TeV_pt1->SetTopMargin(0.05);
   ccwh3l_top_13TeV_pt1->SetBottomMargin(0.13);
   ccwh3l_top_13TeV_pt1->SetFrameFillStyle(0);
   ccwh3l_top_13TeV_pt1->SetFrameBorderMode(0);
   ccwh3l_top_13TeV_pt1->SetFrameFillStyle(0);
   ccwh3l_top_13TeV_pt1->SetFrameBorderMode(0);
   
   TH1F *hframe154 = new TH1F("hframe154","",1000,10,200);
   hframe154->SetMinimum(0);
   hframe154->SetMaximum(27.07107);
   hframe154->SetDirectory(0);
   hframe154->SetStats(0);
   hframe154->SetLineStyle(0);
   hframe154->SetMarkerStyle(20);
   hframe154->GetXaxis()->SetTitle("lept1_p_{T} [GeV]");
   hframe154->GetXaxis()->SetNdivisions(506);
   hframe154->GetXaxis()->SetLabelFont(42);
   hframe154->GetXaxis()->SetLabelOffset(0.007);
   hframe154->GetXaxis()->SetLabelSize(0.05);
   hframe154->GetXaxis()->SetTitleSize(0.06);
   hframe154->GetXaxis()->SetTitleOffset(0.9);
   hframe154->GetXaxis()->SetTitleFont(42);
   hframe154->GetYaxis()->SetTitle("Events");
   hframe154->GetYaxis()->SetLabelFont(42);
   hframe154->GetYaxis()->SetLabelOffset(0.007);
   hframe154->GetYaxis()->SetLabelSize(0.05);
   hframe154->GetYaxis()->SetTitleSize(0.06);
   hframe154->GetYaxis()->SetTitleOffset(1.25);
   hframe154->GetYaxis()->SetTitleFont(42);
   hframe154->GetZaxis()->SetLabelFont(42);
   hframe154->GetZaxis()->SetLabelOffset(0.007);
   hframe154->GetZaxis()->SetLabelSize(0.05);
   hframe154->GetZaxis()->SetTitleSize(0.06);
   hframe154->GetZaxis()->SetTitleFont(42);
   hframe154->Draw(" ");
   
   THStack *thsBackground_grouped_wh3l_top_13TeV_pt1 = new THStack();
   thsBackground_grouped_wh3l_top_13TeV_pt1->SetName("thsBackground_grouped_wh3l_top_13TeV_pt1");
   thsBackground_grouped_wh3l_top_13TeV_pt1->SetTitle("thsBackground_grouped_wh3l_top_13TeV_pt1");
   
   TH1F *thsBackground_grouped_wh3l_top_13TeV_pt1_stack_35 = new TH1F("thsBackground_grouped_wh3l_top_13TeV_pt1_stack_35","thsBackground_grouped_wh3l_top_13TeV_pt1",25,10,200);
   thsBackground_grouped_wh3l_top_13TeV_pt1_stack_35->SetMinimum(-0.196462);
   thsBackground_grouped_wh3l_top_13TeV_pt1_stack_35->SetMaximum(7.109442);
   thsBackground_grouped_wh3l_top_13TeV_pt1_stack_35->SetDirectory(0);
   thsBackground_grouped_wh3l_top_13TeV_pt1_stack_35->SetStats(0);
   thsBackground_grouped_wh3l_top_13TeV_pt1_stack_35->SetLineStyle(0);
   thsBackground_grouped_wh3l_top_13TeV_pt1_stack_35->SetMarkerStyle(20);
   thsBackground_grouped_wh3l_top_13TeV_pt1_stack_35->GetXaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_top_13TeV_pt1_stack_35->GetXaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_top_13TeV_pt1_stack_35->GetXaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_top_13TeV_pt1_stack_35->GetXaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_top_13TeV_pt1_stack_35->GetXaxis()->SetTitleOffset(0.9);
   thsBackground_grouped_wh3l_top_13TeV_pt1_stack_35->GetXaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_top_13TeV_pt1_stack_35->GetYaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_top_13TeV_pt1_stack_35->GetYaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_top_13TeV_pt1_stack_35->GetYaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_top_13TeV_pt1_stack_35->GetYaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_top_13TeV_pt1_stack_35->GetYaxis()->SetTitleOffset(1.25);
   thsBackground_grouped_wh3l_top_13TeV_pt1_stack_35->GetYaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_top_13TeV_pt1_stack_35->GetZaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_top_13TeV_pt1_stack_35->GetZaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_top_13TeV_pt1_stack_35->GetZaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_top_13TeV_pt1_stack_35->GetZaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_top_13TeV_pt1_stack_35->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_top_13TeV_pt1->SetHistogram(thsBackground_grouped_wh3l_top_13TeV_pt1_stack_35);
   
   
   TH1D *new_histo_group_Fake_wh3l_top_13TeV_pt1155 = new TH1D("new_histo_group_Fake_wh3l_top_13TeV_pt1155","histo_Fake",25,10,200);
   new_histo_group_Fake_wh3l_top_13TeV_pt1155->SetBinContent(2,0.969222);
   new_histo_group_Fake_wh3l_top_13TeV_pt1155->SetBinContent(3,3.997045);
   new_histo_group_Fake_wh3l_top_13TeV_pt1155->SetBinContent(4,5.074268);
   new_histo_group_Fake_wh3l_top_13TeV_pt1155->SetBinContent(5,4.503179);
   new_histo_group_Fake_wh3l_top_13TeV_pt1155->SetBinContent(6,3.63123);
   new_histo_group_Fake_wh3l_top_13TeV_pt1155->SetBinContent(7,3.626757);
   new_histo_group_Fake_wh3l_top_13TeV_pt1155->SetBinContent(8,3.116374);
   new_histo_group_Fake_wh3l_top_13TeV_pt1155->SetBinContent(9,2.517586);
   new_histo_group_Fake_wh3l_top_13TeV_pt1155->SetBinContent(10,1.324242);
   new_histo_group_Fake_wh3l_top_13TeV_pt1155->SetBinContent(11,1.496338);
   new_histo_group_Fake_wh3l_top_13TeV_pt1155->SetBinContent(12,0.8476051);
   new_histo_group_Fake_wh3l_top_13TeV_pt1155->SetBinContent(13,1.065115);
   new_histo_group_Fake_wh3l_top_13TeV_pt1155->SetBinContent(14,2.136759);
   new_histo_group_Fake_wh3l_top_13TeV_pt1155->SetBinContent(15,0.4465819);
   new_histo_group_Fake_wh3l_top_13TeV_pt1155->SetBinContent(16,0.6371393);
   new_histo_group_Fake_wh3l_top_13TeV_pt1155->SetBinContent(17,0.3270785);
   new_histo_group_Fake_wh3l_top_13TeV_pt1155->SetBinContent(18,0.08977167);
   new_histo_group_Fake_wh3l_top_13TeV_pt1155->SetBinContent(19,0.01002724);
   new_histo_group_Fake_wh3l_top_13TeV_pt1155->SetBinContent(20,0.4729612);
   new_histo_group_Fake_wh3l_top_13TeV_pt1155->SetBinContent(22,0.07691139);
   new_histo_group_Fake_wh3l_top_13TeV_pt1155->SetBinContent(23,-0.04067832);
   new_histo_group_Fake_wh3l_top_13TeV_pt1155->SetBinContent(24,0.2403429);
   new_histo_group_Fake_wh3l_top_13TeV_pt1155->SetBinContent(25,0.108584);
   new_histo_group_Fake_wh3l_top_13TeV_pt1155->SetBinContent(26,1.019391);
   new_histo_group_Fake_wh3l_top_13TeV_pt1155->SetBinError(2,0.8173303);
   new_histo_group_Fake_wh3l_top_13TeV_pt1155->SetBinError(3,1.616956);
   new_histo_group_Fake_wh3l_top_13TeV_pt1155->SetBinError(4,1.696629);
   new_histo_group_Fake_wh3l_top_13TeV_pt1155->SetBinError(5,1.676532);
   new_histo_group_Fake_wh3l_top_13TeV_pt1155->SetBinError(6,1.502582);
   new_histo_group_Fake_wh3l_top_13TeV_pt1155->SetBinError(7,1.250056);
   new_histo_group_Fake_wh3l_top_13TeV_pt1155->SetBinError(8,1.309017);
   new_histo_group_Fake_wh3l_top_13TeV_pt1155->SetBinError(9,1.253326);
   new_histo_group_Fake_wh3l_top_13TeV_pt1155->SetBinError(10,0.6908407);
   new_histo_group_Fake_wh3l_top_13TeV_pt1155->SetBinError(11,0.6674728);
   new_histo_group_Fake_wh3l_top_13TeV_pt1155->SetBinError(12,0.3905774);
   new_histo_group_Fake_wh3l_top_13TeV_pt1155->SetBinError(13,0.6095359);
   new_histo_group_Fake_wh3l_top_13TeV_pt1155->SetBinError(14,1.071947);
   new_histo_group_Fake_wh3l_top_13TeV_pt1155->SetBinError(15,0.3909449);
   new_histo_group_Fake_wh3l_top_13TeV_pt1155->SetBinError(16,0.6970211);
   new_histo_group_Fake_wh3l_top_13TeV_pt1155->SetBinError(17,0.2481994);
   new_histo_group_Fake_wh3l_top_13TeV_pt1155->SetBinError(18,0.1084256);
   new_histo_group_Fake_wh3l_top_13TeV_pt1155->SetBinError(19,0.01002724);
   new_histo_group_Fake_wh3l_top_13TeV_pt1155->SetBinError(20,0.4373402);
   new_histo_group_Fake_wh3l_top_13TeV_pt1155->SetBinError(22,0.07684571);
   new_histo_group_Fake_wh3l_top_13TeV_pt1155->SetBinError(23,0.03592911);
   new_histo_group_Fake_wh3l_top_13TeV_pt1155->SetBinError(24,0.1837558);
   new_histo_group_Fake_wh3l_top_13TeV_pt1155->SetBinError(25,0.0802397);
   new_histo_group_Fake_wh3l_top_13TeV_pt1155->SetBinError(26,0.5021217);
   new_histo_group_Fake_wh3l_top_13TeV_pt1155->SetEntries(317);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_top_13TeV_pt1155->SetFillColor(ci);
   new_histo_group_Fake_wh3l_top_13TeV_pt1155->SetFillStyle(3001);

   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_top_13TeV_pt1155->SetLineColor(ci);
   new_histo_group_Fake_wh3l_top_13TeV_pt1155->GetXaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_top_13TeV_pt1155->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_top_13TeV_pt1155->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_top_13TeV_pt1155->GetXaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_top_13TeV_pt1155->GetYaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_top_13TeV_pt1155->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_top_13TeV_pt1155->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_top_13TeV_pt1155->GetYaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_top_13TeV_pt1155->GetZaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_top_13TeV_pt1155->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_top_13TeV_pt1155->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_top_13TeV_pt1155->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_top_13TeV_pt1->Add(new_histo_group_Fake_wh3l_top_13TeV_pt1,"");
   
   TH1D *new_histo_group_WW_wh3l_top_13TeV_pt1156 = new TH1D("new_histo_group_WW_wh3l_top_13TeV_pt1156","histo_WW",25,10,200);
   new_histo_group_WW_wh3l_top_13TeV_pt1156->SetBinContent(4,0.01528641);
   new_histo_group_WW_wh3l_top_13TeV_pt1156->SetBinContent(6,0.004448378);
   new_histo_group_WW_wh3l_top_13TeV_pt1156->SetBinContent(7,0.03356775);
   new_histo_group_WW_wh3l_top_13TeV_pt1156->SetBinContent(9,0.01959378);
   new_histo_group_WW_wh3l_top_13TeV_pt1156->SetBinContent(11,0.01821101);
   new_histo_group_WW_wh3l_top_13TeV_pt1156->SetBinContent(15,0.01749081);
   new_histo_group_WW_wh3l_top_13TeV_pt1156->SetBinContent(17,0.01305253);
   new_histo_group_WW_wh3l_top_13TeV_pt1156->SetBinContent(26,0.04641106);
   new_histo_group_WW_wh3l_top_13TeV_pt1156->SetBinError(4,0.01528641);
   new_histo_group_WW_wh3l_top_13TeV_pt1156->SetBinError(6,0.004448378);
   new_histo_group_WW_wh3l_top_13TeV_pt1156->SetBinError(7,0.02376519);
   new_histo_group_WW_wh3l_top_13TeV_pt1156->SetBinError(9,0.01959378);
   new_histo_group_WW_wh3l_top_13TeV_pt1156->SetBinError(11,0.01821101);
   new_histo_group_WW_wh3l_top_13TeV_pt1156->SetBinError(15,0.01749081);
   new_histo_group_WW_wh3l_top_13TeV_pt1156->SetBinError(17,0.01305253);
   new_histo_group_WW_wh3l_top_13TeV_pt1156->SetBinError(26,0.02682259);
   new_histo_group_WW_wh3l_top_13TeV_pt1156->SetEntries(11);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_top_13TeV_pt1156->SetFillColor(ci);
   new_histo_group_WW_wh3l_top_13TeV_pt1156->SetFillStyle(3001);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_top_13TeV_pt1156->SetLineColor(ci);
   new_histo_group_WW_wh3l_top_13TeV_pt1156->GetXaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_top_13TeV_pt1156->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_top_13TeV_pt1156->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_top_13TeV_pt1156->GetXaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_top_13TeV_pt1156->GetYaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_top_13TeV_pt1156->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_top_13TeV_pt1156->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_top_13TeV_pt1156->GetYaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_top_13TeV_pt1156->GetZaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_top_13TeV_pt1156->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_top_13TeV_pt1156->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_top_13TeV_pt1156->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_top_13TeV_pt1->Add(new_histo_group_WW_wh3l_top_13TeV_pt1,"");
   
   TH1D *new_histo_group_Vg_wh3l_top_13TeV_pt1157 = new TH1D("new_histo_group_Vg_wh3l_top_13TeV_pt1157","histo_Vg",25,10,200);
   new_histo_group_Vg_wh3l_top_13TeV_pt1157->SetBinContent(3,0.04591915);
   new_histo_group_Vg_wh3l_top_13TeV_pt1157->SetBinContent(4,0.2463113);
   new_histo_group_Vg_wh3l_top_13TeV_pt1157->SetBinContent(5,0.0182002);
   new_histo_group_Vg_wh3l_top_13TeV_pt1157->SetBinContent(6,0.4574124);
   new_histo_group_Vg_wh3l_top_13TeV_pt1157->SetBinContent(7,0.1493144);
   new_histo_group_Vg_wh3l_top_13TeV_pt1157->SetBinContent(8,0.07232783);
   new_histo_group_Vg_wh3l_top_13TeV_pt1157->SetBinContent(9,-0.06890358);
   new_histo_group_Vg_wh3l_top_13TeV_pt1157->SetBinContent(11,0.1156138);
   new_histo_group_Vg_wh3l_top_13TeV_pt1157->SetBinContent(12,-0.02313529);
   new_histo_group_Vg_wh3l_top_13TeV_pt1157->SetBinContent(15,0.06632758);
   new_histo_group_Vg_wh3l_top_13TeV_pt1157->SetBinContent(17,0.1085778);
   new_histo_group_Vg_wh3l_top_13TeV_pt1157->SetBinContent(19,0.09785095);
   new_histo_group_Vg_wh3l_top_13TeV_pt1157->SetBinContent(26,0.1067996);
   new_histo_group_Vg_wh3l_top_13TeV_pt1157->SetBinError(3,0.1114699);
   new_histo_group_Vg_wh3l_top_13TeV_pt1157->SetBinError(4,0.1751166);
   new_histo_group_Vg_wh3l_top_13TeV_pt1157->SetBinError(5,0.1701309);
   new_histo_group_Vg_wh3l_top_13TeV_pt1157->SetBinError(6,0.2119854);
   new_histo_group_Vg_wh3l_top_13TeV_pt1157->SetBinError(7,0.1255831);
   new_histo_group_Vg_wh3l_top_13TeV_pt1157->SetBinError(8,0.07232783);
   new_histo_group_Vg_wh3l_top_13TeV_pt1157->SetBinError(9,0.1275585);
   new_histo_group_Vg_wh3l_top_13TeV_pt1157->SetBinError(11,0.1156138);
   new_histo_group_Vg_wh3l_top_13TeV_pt1157->SetBinError(12,0.02313529);
   new_histo_group_Vg_wh3l_top_13TeV_pt1157->SetBinError(15,0.06632758);
   new_histo_group_Vg_wh3l_top_13TeV_pt1157->SetBinError(17,0.1085778);
   new_histo_group_Vg_wh3l_top_13TeV_pt1157->SetBinError(19,0.09785095);
   new_histo_group_Vg_wh3l_top_13TeV_pt1157->SetBinError(26,0.1067996);
   new_histo_group_Vg_wh3l_top_13TeV_pt1157->SetEntries(25);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_top_13TeV_pt1157->SetFillColor(ci);
   new_histo_group_Vg_wh3l_top_13TeV_pt1157->SetFillStyle(3001);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_top_13TeV_pt1157->SetLineColor(ci);
   new_histo_group_Vg_wh3l_top_13TeV_pt1157->GetXaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_top_13TeV_pt1157->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_top_13TeV_pt1157->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_top_13TeV_pt1157->GetXaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_top_13TeV_pt1157->GetYaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_top_13TeV_pt1157->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_top_13TeV_pt1157->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_top_13TeV_pt1157->GetYaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_top_13TeV_pt1157->GetZaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_top_13TeV_pt1157->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_top_13TeV_pt1157->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_top_13TeV_pt1157->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_top_13TeV_pt1->Add(new_histo_group_Vg_wh3l_top_13TeV_pt1,"");
   
   TH1D *new_histo_group_ZZ_wh3l_top_13TeV_pt1158 = new TH1D("new_histo_group_ZZ_wh3l_top_13TeV_pt1158","histo_ZZ",25,10,200);
   new_histo_group_ZZ_wh3l_top_13TeV_pt1158->SetBinContent(2,0.04142581);
   new_histo_group_ZZ_wh3l_top_13TeV_pt1158->SetBinContent(4,0.08785785);
   new_histo_group_ZZ_wh3l_top_13TeV_pt1158->SetBinContent(5,0.01751245);
   new_histo_group_ZZ_wh3l_top_13TeV_pt1158->SetBinContent(6,0.159848);
   new_histo_group_ZZ_wh3l_top_13TeV_pt1158->SetBinContent(11,0.04624667);
   new_histo_group_ZZ_wh3l_top_13TeV_pt1158->SetBinContent(12,0.08601038);
   new_histo_group_ZZ_wh3l_top_13TeV_pt1158->SetBinContent(13,0.0476643);
   new_histo_group_ZZ_wh3l_top_13TeV_pt1158->SetBinContent(15,0.02044833);
   new_histo_group_ZZ_wh3l_top_13TeV_pt1158->SetBinContent(18,0.03822494);
   new_histo_group_ZZ_wh3l_top_13TeV_pt1158->SetBinContent(19,0.04545766);
   new_histo_group_ZZ_wh3l_top_13TeV_pt1158->SetBinContent(26,0.08973226);
   new_histo_group_ZZ_wh3l_top_13TeV_pt1158->SetBinError(2,0.04142581);
   new_histo_group_ZZ_wh3l_top_13TeV_pt1158->SetBinError(4,0.0552178);
   new_histo_group_ZZ_wh3l_top_13TeV_pt1158->SetBinError(5,0.01751245);
   new_histo_group_ZZ_wh3l_top_13TeV_pt1158->SetBinError(6,0.08594384);
   new_histo_group_ZZ_wh3l_top_13TeV_pt1158->SetBinError(11,0.04624667);
   new_histo_group_ZZ_wh3l_top_13TeV_pt1158->SetBinError(12,0.06082022);
   new_histo_group_ZZ_wh3l_top_13TeV_pt1158->SetBinError(13,0.0476643);
   new_histo_group_ZZ_wh3l_top_13TeV_pt1158->SetBinError(15,0.02044833);
   new_histo_group_ZZ_wh3l_top_13TeV_pt1158->SetBinError(18,0.03822494);
   new_histo_group_ZZ_wh3l_top_13TeV_pt1158->SetBinError(19,0.04545766);
   new_histo_group_ZZ_wh3l_top_13TeV_pt1158->SetBinError(26,0.06357566);
   new_histo_group_ZZ_wh3l_top_13TeV_pt1158->SetEntries(18);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_top_13TeV_pt1158->SetFillColor(ci);
   new_histo_group_ZZ_wh3l_top_13TeV_pt1158->SetFillStyle(3001);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_top_13TeV_pt1158->SetLineColor(ci);
   new_histo_group_ZZ_wh3l_top_13TeV_pt1158->GetXaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_top_13TeV_pt1158->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_top_13TeV_pt1158->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_top_13TeV_pt1158->GetXaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_top_13TeV_pt1158->GetYaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_top_13TeV_pt1158->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_top_13TeV_pt1158->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_top_13TeV_pt1158->GetYaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_top_13TeV_pt1158->GetZaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_top_13TeV_pt1158->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_top_13TeV_pt1158->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_top_13TeV_pt1158->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_top_13TeV_pt1->Add(new_histo_group_ZZ_wh3l_top_13TeV_pt1,"");
   
   TH1D *new_histo_group_WZ_wh3l_top_13TeV_pt1159 = new TH1D("new_histo_group_WZ_wh3l_top_13TeV_pt1159","histo_WZ",25,10,200);
   new_histo_group_WZ_wh3l_top_13TeV_pt1159->SetBinContent(2,0.2174854);
   new_histo_group_WZ_wh3l_top_13TeV_pt1159->SetBinContent(3,0.5898978);
   new_histo_group_WZ_wh3l_top_13TeV_pt1159->SetBinContent(4,0.662479);
   new_histo_group_WZ_wh3l_top_13TeV_pt1159->SetBinContent(5,0.8310412);
   new_histo_group_WZ_wh3l_top_13TeV_pt1159->SetBinContent(6,0.6482968);
   new_histo_group_WZ_wh3l_top_13TeV_pt1159->SetBinContent(7,0.592627);
   new_histo_group_WZ_wh3l_top_13TeV_pt1159->SetBinContent(8,0.5148446);
   new_histo_group_WZ_wh3l_top_13TeV_pt1159->SetBinContent(9,0.4452681);
   new_histo_group_WZ_wh3l_top_13TeV_pt1159->SetBinContent(10,0.4084912);
   new_histo_group_WZ_wh3l_top_13TeV_pt1159->SetBinContent(11,0.3962891);
   new_histo_group_WZ_wh3l_top_13TeV_pt1159->SetBinContent(12,0.3336481);
   new_histo_group_WZ_wh3l_top_13TeV_pt1159->SetBinContent(13,0.2578152);
   new_histo_group_WZ_wh3l_top_13TeV_pt1159->SetBinContent(14,0.2633364);
   new_histo_group_WZ_wh3l_top_13TeV_pt1159->SetBinContent(15,0.2836645);
   new_histo_group_WZ_wh3l_top_13TeV_pt1159->SetBinContent(16,0.2939553);
   new_histo_group_WZ_wh3l_top_13TeV_pt1159->SetBinContent(17,0.1986913);
   new_histo_group_WZ_wh3l_top_13TeV_pt1159->SetBinContent(18,0.1570508);
   new_histo_group_WZ_wh3l_top_13TeV_pt1159->SetBinContent(19,0.1751324);
   new_histo_group_WZ_wh3l_top_13TeV_pt1159->SetBinContent(20,0.100798);
   new_histo_group_WZ_wh3l_top_13TeV_pt1159->SetBinContent(21,0.09733229);
   new_histo_group_WZ_wh3l_top_13TeV_pt1159->SetBinContent(22,0.05596057);
   new_histo_group_WZ_wh3l_top_13TeV_pt1159->SetBinContent(23,0.07890343);
   new_histo_group_WZ_wh3l_top_13TeV_pt1159->SetBinContent(24,0.1090366);
   new_histo_group_WZ_wh3l_top_13TeV_pt1159->SetBinContent(25,0.1039246);
   new_histo_group_WZ_wh3l_top_13TeV_pt1159->SetBinContent(26,1.051894);
   new_histo_group_WZ_wh3l_top_13TeV_pt1159->SetBinError(2,0.03476505);
   new_histo_group_WZ_wh3l_top_13TeV_pt1159->SetBinError(3,0.05670728);
   new_histo_group_WZ_wh3l_top_13TeV_pt1159->SetBinError(4,0.06006218);
   new_histo_group_WZ_wh3l_top_13TeV_pt1159->SetBinError(5,0.06691215);
   new_histo_group_WZ_wh3l_top_13TeV_pt1159->SetBinError(6,0.05982645);
   new_histo_group_WZ_wh3l_top_13TeV_pt1159->SetBinError(7,0.05644038);
   new_histo_group_WZ_wh3l_top_13TeV_pt1159->SetBinError(8,0.05255448);
   new_histo_group_WZ_wh3l_top_13TeV_pt1159->SetBinError(9,0.04923828);
   new_histo_group_WZ_wh3l_top_13TeV_pt1159->SetBinError(10,0.04741312);
   new_histo_group_WZ_wh3l_top_13TeV_pt1159->SetBinError(11,0.04659962);
   new_histo_group_WZ_wh3l_top_13TeV_pt1159->SetBinError(12,0.04285939);
   new_histo_group_WZ_wh3l_top_13TeV_pt1159->SetBinError(13,0.03743767);
   new_histo_group_WZ_wh3l_top_13TeV_pt1159->SetBinError(14,0.03903624);
   new_histo_group_WZ_wh3l_top_13TeV_pt1159->SetBinError(15,0.03891304);
   new_histo_group_WZ_wh3l_top_13TeV_pt1159->SetBinError(16,0.03995318);
   new_histo_group_WZ_wh3l_top_13TeV_pt1159->SetBinError(17,0.03310814);
   new_histo_group_WZ_wh3l_top_13TeV_pt1159->SetBinError(18,0.02842491);
   new_histo_group_WZ_wh3l_top_13TeV_pt1159->SetBinError(19,0.03123715);
   new_histo_group_WZ_wh3l_top_13TeV_pt1159->SetBinError(20,0.02243665);
   new_histo_group_WZ_wh3l_top_13TeV_pt1159->SetBinError(21,0.02229101);
   new_histo_group_WZ_wh3l_top_13TeV_pt1159->SetBinError(22,0.01693417);
   new_histo_group_WZ_wh3l_top_13TeV_pt1159->SetBinError(23,0.02127065);
   new_histo_group_WZ_wh3l_top_13TeV_pt1159->SetBinError(24,0.02493802);
   new_histo_group_WZ_wh3l_top_13TeV_pt1159->SetBinError(25,0.02355999);
   new_histo_group_WZ_wh3l_top_13TeV_pt1159->SetBinError(26,0.0752247);
   new_histo_group_WZ_wh3l_top_13TeV_pt1159->SetEntries(1805);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_top_13TeV_pt1159->SetFillColor(ci);
   new_histo_group_WZ_wh3l_top_13TeV_pt1159->SetFillStyle(3001);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_top_13TeV_pt1159->SetLineColor(ci);
   new_histo_group_WZ_wh3l_top_13TeV_pt1159->GetXaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_top_13TeV_pt1159->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_top_13TeV_pt1159->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_top_13TeV_pt1159->GetXaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_top_13TeV_pt1159->GetYaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_top_13TeV_pt1159->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_top_13TeV_pt1159->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_top_13TeV_pt1159->GetYaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_top_13TeV_pt1159->GetZaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_top_13TeV_pt1159->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_top_13TeV_pt1159->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_top_13TeV_pt1159->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_top_13TeV_pt1->Add(new_histo_group_WZ_wh3l_top_13TeV_pt1,"");
   
   TH1D *new_histo_group_Higgs_wh3l_top_13TeV_pt1160 = new TH1D("new_histo_group_Higgs_wh3l_top_13TeV_pt1160","histo_H_htt",25,10,200);
   new_histo_group_Higgs_wh3l_top_13TeV_pt1160->SetBinContent(2,0.003788623);
   new_histo_group_Higgs_wh3l_top_13TeV_pt1160->SetBinContent(3,0.01965875);
   new_histo_group_Higgs_wh3l_top_13TeV_pt1160->SetBinContent(4,0.0329307);
   new_histo_group_Higgs_wh3l_top_13TeV_pt1160->SetBinContent(5,0.035789);
   new_histo_group_Higgs_wh3l_top_13TeV_pt1160->SetBinContent(6,0.03015109);
   new_histo_group_Higgs_wh3l_top_13TeV_pt1160->SetBinContent(7,0.04704666);
   new_histo_group_Higgs_wh3l_top_13TeV_pt1160->SetBinContent(8,0.02964433);
   new_histo_group_Higgs_wh3l_top_13TeV_pt1160->SetBinContent(9,0.03552969);
   new_histo_group_Higgs_wh3l_top_13TeV_pt1160->SetBinContent(10,0.0186056);
   new_histo_group_Higgs_wh3l_top_13TeV_pt1160->SetBinContent(11,0.02294084);
   new_histo_group_Higgs_wh3l_top_13TeV_pt1160->SetBinContent(12,0.01084026);
   new_histo_group_Higgs_wh3l_top_13TeV_pt1160->SetBinContent(13,0.01521077);
   new_histo_group_Higgs_wh3l_top_13TeV_pt1160->SetBinContent(14,0.014408);
   new_histo_group_Higgs_wh3l_top_13TeV_pt1160->SetBinContent(15,0.0104082);
   new_histo_group_Higgs_wh3l_top_13TeV_pt1160->SetBinContent(16,0.01197203);
   new_histo_group_Higgs_wh3l_top_13TeV_pt1160->SetBinContent(17,0.01211882);
   new_histo_group_Higgs_wh3l_top_13TeV_pt1160->SetBinContent(18,0.007108391);
   new_histo_group_Higgs_wh3l_top_13TeV_pt1160->SetBinContent(19,0.005429017);
   new_histo_group_Higgs_wh3l_top_13TeV_pt1160->SetBinContent(20,0.006020699);
   new_histo_group_Higgs_wh3l_top_13TeV_pt1160->SetBinContent(21,0.003809854);
   new_histo_group_Higgs_wh3l_top_13TeV_pt1160->SetBinContent(22,0.004283771);
   new_histo_group_Higgs_wh3l_top_13TeV_pt1160->SetBinContent(23,0.001644403);
   new_histo_group_Higgs_wh3l_top_13TeV_pt1160->SetBinContent(24,0.002144072);
   new_histo_group_Higgs_wh3l_top_13TeV_pt1160->SetBinContent(25,0.000933715);
   new_histo_group_Higgs_wh3l_top_13TeV_pt1160->SetBinContent(26,0.02354779);
   new_histo_group_Higgs_wh3l_top_13TeV_pt1160->SetBinError(2,0.001418711);
   new_histo_group_Higgs_wh3l_top_13TeV_pt1160->SetBinError(3,0.004747864);
   new_histo_group_Higgs_wh3l_top_13TeV_pt1160->SetBinError(4,0.005870027);
   new_histo_group_Higgs_wh3l_top_13TeV_pt1160->SetBinError(5,0.005959516);
   new_histo_group_Higgs_wh3l_top_13TeV_pt1160->SetBinError(6,0.005319218);
   new_histo_group_Higgs_wh3l_top_13TeV_pt1160->SetBinError(7,0.007126711);
   new_histo_group_Higgs_wh3l_top_13TeV_pt1160->SetBinError(8,0.005550169);
   new_histo_group_Higgs_wh3l_top_13TeV_pt1160->SetBinError(9,0.006300966);
   new_histo_group_Higgs_wh3l_top_13TeV_pt1160->SetBinError(10,0.004667322);
   new_histo_group_Higgs_wh3l_top_13TeV_pt1160->SetBinError(11,0.005012814);
   new_histo_group_Higgs_wh3l_top_13TeV_pt1160->SetBinError(12,0.002930478);
   new_histo_group_Higgs_wh3l_top_13TeV_pt1160->SetBinError(13,0.003531229);
   new_histo_group_Higgs_wh3l_top_13TeV_pt1160->SetBinError(14,0.003970878);
   new_histo_group_Higgs_wh3l_top_13TeV_pt1160->SetBinError(15,0.00277951);
   new_histo_group_Higgs_wh3l_top_13TeV_pt1160->SetBinError(16,0.00349849);
   new_histo_group_Higgs_wh3l_top_13TeV_pt1160->SetBinError(17,0.003589533);
   new_histo_group_Higgs_wh3l_top_13TeV_pt1160->SetBinError(18,0.002743298);
   new_histo_group_Higgs_wh3l_top_13TeV_pt1160->SetBinError(19,0.001937171);
   new_histo_group_Higgs_wh3l_top_13TeV_pt1160->SetBinError(20,0.001933788);
   new_histo_group_Higgs_wh3l_top_13TeV_pt1160->SetBinError(21,0.002095324);
   new_histo_group_Higgs_wh3l_top_13TeV_pt1160->SetBinError(22,0.001685679);
   new_histo_group_Higgs_wh3l_top_13TeV_pt1160->SetBinError(23,0.0008165659);
   new_histo_group_Higgs_wh3l_top_13TeV_pt1160->SetBinError(24,0.001664938);
   new_histo_group_Higgs_wh3l_top_13TeV_pt1160->SetBinError(25,0.0005925358);
   new_histo_group_Higgs_wh3l_top_13TeV_pt1160->SetBinError(26,0.004506832);
   new_histo_group_Higgs_wh3l_top_13TeV_pt1160->SetEntries(723);
   new_histo_group_Higgs_wh3l_top_13TeV_pt1160->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_top_13TeV_pt1160->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_top_13TeV_pt1160->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_top_13TeV_pt1160->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_top_13TeV_pt1160->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_top_13TeV_pt1160->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_top_13TeV_pt1160->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_top_13TeV_pt1160->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_top_13TeV_pt1160->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_top_13TeV_pt1160->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_top_13TeV_pt1160->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_top_13TeV_pt1160->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_top_13TeV_pt1160->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_top_13TeV_pt1160->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_top_13TeV_pt1160->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_top_13TeV_pt1->Add(new_histo_group_Higgs_wh3l_top_13TeV_pt1,"");
   thsBackground_grouped_wh3l_top_13TeV_pt1->Draw("hist same");
   
   thsSignal_grouped_wh3l_top_13TeV_pt1 = new THStack();
   thsSignal_grouped_wh3l_top_13TeV_pt1->SetName("thsSignal_grouped_wh3l_top_13TeV_pt1");
   thsSignal_grouped_wh3l_top_13TeV_pt1->SetTitle("thsSignal_grouped_wh3l_top_13TeV_pt1");
   
   TH1F *thsSignal_grouped_wh3l_top_13TeV_pt1_stack_36 = new TH1F("thsSignal_grouped_wh3l_top_13TeV_pt1_stack_36","thsSignal_grouped_wh3l_top_13TeV_pt1",25,10,200);
   thsSignal_grouped_wh3l_top_13TeV_pt1_stack_36->SetMinimum(0);
   thsSignal_grouped_wh3l_top_13TeV_pt1_stack_36->SetMaximum(0.05688204);
   thsSignal_grouped_wh3l_top_13TeV_pt1_stack_36->SetDirectory(0);
   thsSignal_grouped_wh3l_top_13TeV_pt1_stack_36->SetStats(0);
   thsSignal_grouped_wh3l_top_13TeV_pt1_stack_36->SetLineStyle(0);
   thsSignal_grouped_wh3l_top_13TeV_pt1_stack_36->SetMarkerStyle(20);
   thsSignal_grouped_wh3l_top_13TeV_pt1_stack_36->GetXaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_top_13TeV_pt1_stack_36->GetXaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_top_13TeV_pt1_stack_36->GetXaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_top_13TeV_pt1_stack_36->GetXaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_top_13TeV_pt1_stack_36->GetXaxis()->SetTitleOffset(0.9);
   thsSignal_grouped_wh3l_top_13TeV_pt1_stack_36->GetXaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_top_13TeV_pt1_stack_36->GetYaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_top_13TeV_pt1_stack_36->GetYaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_top_13TeV_pt1_stack_36->GetYaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_top_13TeV_pt1_stack_36->GetYaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_top_13TeV_pt1_stack_36->GetYaxis()->SetTitleOffset(1.25);
   thsSignal_grouped_wh3l_top_13TeV_pt1_stack_36->GetYaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_top_13TeV_pt1_stack_36->GetZaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_top_13TeV_pt1_stack_36->GetZaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_top_13TeV_pt1_stack_36->GetZaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_top_13TeV_pt1_stack_36->GetZaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_top_13TeV_pt1_stack_36->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_top_13TeV_pt1->SetHistogram(thsSignal_grouped_wh3l_top_13TeV_pt1_stack_36);
   
   
   TH1D *new_histo_group_Higgs_wh3l_top_13TeV_pt1161 = new TH1D("new_histo_group_Higgs_wh3l_top_13TeV_pt1161","histo_H_htt",25,10,200);
   new_histo_group_Higgs_wh3l_top_13TeV_pt1161->SetBinContent(2,0.003788623);
   new_histo_group_Higgs_wh3l_top_13TeV_pt1161->SetBinContent(3,0.01965875);
   new_histo_group_Higgs_wh3l_top_13TeV_pt1161->SetBinContent(4,0.0329307);
   new_histo_group_Higgs_wh3l_top_13TeV_pt1161->SetBinContent(5,0.035789);
   new_histo_group_Higgs_wh3l_top_13TeV_pt1161->SetBinContent(6,0.03015109);
   new_histo_group_Higgs_wh3l_top_13TeV_pt1161->SetBinContent(7,0.04704666);
   new_histo_group_Higgs_wh3l_top_13TeV_pt1161->SetBinContent(8,0.02964433);
   new_histo_group_Higgs_wh3l_top_13TeV_pt1161->SetBinContent(9,0.03552969);
   new_histo_group_Higgs_wh3l_top_13TeV_pt1161->SetBinContent(10,0.0186056);
   new_histo_group_Higgs_wh3l_top_13TeV_pt1161->SetBinContent(11,0.02294084);
   new_histo_group_Higgs_wh3l_top_13TeV_pt1161->SetBinContent(12,0.01084026);
   new_histo_group_Higgs_wh3l_top_13TeV_pt1161->SetBinContent(13,0.01521077);
   new_histo_group_Higgs_wh3l_top_13TeV_pt1161->SetBinContent(14,0.014408);
   new_histo_group_Higgs_wh3l_top_13TeV_pt1161->SetBinContent(15,0.0104082);
   new_histo_group_Higgs_wh3l_top_13TeV_pt1161->SetBinContent(16,0.01197203);
   new_histo_group_Higgs_wh3l_top_13TeV_pt1161->SetBinContent(17,0.01211882);
   new_histo_group_Higgs_wh3l_top_13TeV_pt1161->SetBinContent(18,0.007108391);
   new_histo_group_Higgs_wh3l_top_13TeV_pt1161->SetBinContent(19,0.005429017);
   new_histo_group_Higgs_wh3l_top_13TeV_pt1161->SetBinContent(20,0.006020699);
   new_histo_group_Higgs_wh3l_top_13TeV_pt1161->SetBinContent(21,0.003809854);
   new_histo_group_Higgs_wh3l_top_13TeV_pt1161->SetBinContent(22,0.004283771);
   new_histo_group_Higgs_wh3l_top_13TeV_pt1161->SetBinContent(23,0.001644403);
   new_histo_group_Higgs_wh3l_top_13TeV_pt1161->SetBinContent(24,0.002144072);
   new_histo_group_Higgs_wh3l_top_13TeV_pt1161->SetBinContent(25,0.000933715);
   new_histo_group_Higgs_wh3l_top_13TeV_pt1161->SetBinContent(26,0.02354779);
   new_histo_group_Higgs_wh3l_top_13TeV_pt1161->SetBinError(2,0.001418711);
   new_histo_group_Higgs_wh3l_top_13TeV_pt1161->SetBinError(3,0.004747864);
   new_histo_group_Higgs_wh3l_top_13TeV_pt1161->SetBinError(4,0.005870027);
   new_histo_group_Higgs_wh3l_top_13TeV_pt1161->SetBinError(5,0.005959516);
   new_histo_group_Higgs_wh3l_top_13TeV_pt1161->SetBinError(6,0.005319218);
   new_histo_group_Higgs_wh3l_top_13TeV_pt1161->SetBinError(7,0.007126711);
   new_histo_group_Higgs_wh3l_top_13TeV_pt1161->SetBinError(8,0.005550169);
   new_histo_group_Higgs_wh3l_top_13TeV_pt1161->SetBinError(9,0.006300966);
   new_histo_group_Higgs_wh3l_top_13TeV_pt1161->SetBinError(10,0.004667322);
   new_histo_group_Higgs_wh3l_top_13TeV_pt1161->SetBinError(11,0.005012814);
   new_histo_group_Higgs_wh3l_top_13TeV_pt1161->SetBinError(12,0.002930478);
   new_histo_group_Higgs_wh3l_top_13TeV_pt1161->SetBinError(13,0.003531229);
   new_histo_group_Higgs_wh3l_top_13TeV_pt1161->SetBinError(14,0.003970878);
   new_histo_group_Higgs_wh3l_top_13TeV_pt1161->SetBinError(15,0.00277951);
   new_histo_group_Higgs_wh3l_top_13TeV_pt1161->SetBinError(16,0.00349849);
   new_histo_group_Higgs_wh3l_top_13TeV_pt1161->SetBinError(17,0.003589533);
   new_histo_group_Higgs_wh3l_top_13TeV_pt1161->SetBinError(18,0.002743298);
   new_histo_group_Higgs_wh3l_top_13TeV_pt1161->SetBinError(19,0.001937171);
   new_histo_group_Higgs_wh3l_top_13TeV_pt1161->SetBinError(20,0.001933788);
   new_histo_group_Higgs_wh3l_top_13TeV_pt1161->SetBinError(21,0.002095324);
   new_histo_group_Higgs_wh3l_top_13TeV_pt1161->SetBinError(22,0.001685679);
   new_histo_group_Higgs_wh3l_top_13TeV_pt1161->SetBinError(23,0.0008165659);
   new_histo_group_Higgs_wh3l_top_13TeV_pt1161->SetBinError(24,0.001664938);
   new_histo_group_Higgs_wh3l_top_13TeV_pt1161->SetBinError(25,0.0005925358);
   new_histo_group_Higgs_wh3l_top_13TeV_pt1161->SetBinError(26,0.004506832);
   new_histo_group_Higgs_wh3l_top_13TeV_pt1161->SetEntries(723);
   new_histo_group_Higgs_wh3l_top_13TeV_pt1161->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_top_13TeV_pt1161->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_top_13TeV_pt1161->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_top_13TeV_pt1161->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_top_13TeV_pt1161->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_top_13TeV_pt1161->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_top_13TeV_pt1161->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_top_13TeV_pt1161->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_top_13TeV_pt1161->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_top_13TeV_pt1161->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_top_13TeV_pt1161->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_top_13TeV_pt1161->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_top_13TeV_pt1161->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_top_13TeV_pt1161->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_top_13TeV_pt1161->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_top_13TeV_pt1->Add(new_histo_group_Higgs_wh3l_top_13TeV_pt1,"");
   thsSignal_grouped_wh3l_top_13TeV_pt1->Draw("hist same noclear");
   
   Double_t _fx3035[25] = {
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
   Double_t _fy3035[25] = {
   0,
   1.228133,
   4.632862,
   6.086203,
   5.369932,
   4.901236,
   4.402266,
   3.703546,
   2.913544,
   1.732733,
   2.072699,
   1.244128,
   1.370594,
   2.400096,
   0.8345131,
   0.9310945,
   0.6474001,
   0.2850474,
   0.3284683,
   0.5737593,
   0.09733229,
   0.132872,
   0.03822511,
   0.3493795,
   0.2125086};
   Double_t _felx3035[25] = {
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
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
   Double_t _fely3035[25] = {
   0,
   0.9559334,
   2.217069,
   2.676733,
   2.377161,
   2.257344,
   1.931657,
   1.801703,
   1.696588,
   0.8717787,
   1.036294,
   0.5964989,
   0.7884143,
   1.339275,
   0.5567292,
   0.7129383,
   0.4191898,
   0.1597234,
   0.1850327,
   0.4886816,
   0.02248068,
   0.09758271,
   0.05899263,
   0.2250241,
   0.1105941};
   Double_t _fehx3035[25] = {
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
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
   Double_t _fehy3035[25] = {
   0,
   0.9559407,
   2.268317,
   2.676736,
   2.492895,
   2.25724,
   1.931651,
   1.801692,
   1.646739,
   0.8717719,
   1.036292,
   0.596469,
   0.7884104,
   1.339273,
   0.5567087,
   0.7700302,
   0.4191655,
   0.1780229,
   0.1850237,
   0.4886798,
   0.02243734,
   0.09757985,
   0.05898974,
   0.225022,
   0.1105911};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(25,_fx3035,_fy3035,_felx3035,_fehx3035,_fely3035,_fehy3035);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(12);
   grae->SetFillStyle(3004);
   grae->SetLineColor(12);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3035 = new TH1F("Graph_Graph3035","",100,0,219);
   Graph_Graph3035->SetMinimum(-0.8991382);
   Graph_Graph3035->SetMaximum(9.641309);
   Graph_Graph3035->SetDirectory(0);
   Graph_Graph3035->SetStats(0);
   Graph_Graph3035->SetLineStyle(0);
   Graph_Graph3035->SetMarkerStyle(20);
   Graph_Graph3035->GetXaxis()->SetLabelFont(42);
   Graph_Graph3035->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3035->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3035->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3035->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3035->GetXaxis()->SetTitleFont(42);
   Graph_Graph3035->GetYaxis()->SetLabelFont(42);
   Graph_Graph3035->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3035->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3035->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3035->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3035->GetYaxis()->SetTitleFont(42);
   Graph_Graph3035->GetZaxis()->SetLabelFont(42);
   Graph_Graph3035->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3035->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3035->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3035->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3035);
   
   grae->Draw("2");
   
   Double_t _fx3036[25] = {
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
   Double_t _fy3036[25] = {
   0,
   0,
   3,
   2,
   6,
   3,
   2,
   3,
   8,
   2,
   1,
   2,
   1,
   2,
   0,
   2,
   3,
   0,
   0,
   0,
   0,
   0,
   1,
   0,
   0};
   Double_t _felx3036[25] = {
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
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
   Double_t _fely3036[25] = {
   0,
   0,
   1.632727,
   1.29183,
   2.379969,
   1.632727,
   1.29183,
   1.632727,
   2.768432,
   1.29183,
   0.8272524,
   1.29183,
   0.8272524,
   1.29183,
   0,
   1.29183,
   1.632727,
   0,
   0,
   0,
   0,
   0,
   0.8272524,
   0,
   0};
   Double_t _fehx3036[25] = {
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
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
   Double_t _fehy3036[25] = {
   1.147908,
   1.147908,
   2.918242,
   2.63791,
   3.583713,
   2.918242,
   2.63791,
   2.918242,
   3.94522,
   2.63791,
   2.29957,
   2.63791,
   2.29957,
   2.63791,
   1.147908,
   2.63791,
   2.918242,
   1.147908,
   1.147908,
   1.147908,
   1.147908,
   1.147908,
   2.29957,
   1.147908,
   1.147908};
   grae = new TGraphAsymmErrors(25,_fx3036,_fy3036,_felx3036,_fehx3036,_fely3036,_fehy3036);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(1);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3036 = new TH1F("Graph_Graph3036","",100,0,219);
   Graph_Graph3036->SetMinimum(0);
   Graph_Graph3036->SetMaximum(13.13974);
   Graph_Graph3036->SetDirectory(0);
   Graph_Graph3036->SetStats(0);
   Graph_Graph3036->SetLineStyle(0);
   Graph_Graph3036->SetMarkerStyle(20);
   Graph_Graph3036->GetXaxis()->SetLabelFont(42);
   Graph_Graph3036->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3036->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3036->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3036->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3036->GetXaxis()->SetTitleFont(42);
   Graph_Graph3036->GetYaxis()->SetLabelFont(42);
   Graph_Graph3036->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3036->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3036->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3036->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3036->GetYaxis()->SetTitleFont(42);
   Graph_Graph3036->GetZaxis()->SetLabelFont(42);
   Graph_Graph3036->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3036->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3036->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3036->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3036);
   
   grae->Draw("p0");
   
   TLegend *leg = new TLegend(0.2,0.7,0.8,0.9,NULL,"brNDC");
   leg->SetTextFont(62);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("new_histo_group_Fake_wh3l_top_13TeV_pt1","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_top_13TeV_pt1","WW","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_top_13TeV_pt1","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_top_13TeV_pt1","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_top_13TeV_pt1","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_top_13TeV_pt1","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_top_13TeV_pt1","Data","EPL");
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
   entry=leg->AddEntry("new_histo_group_Fake_wh3l_top_13TeV_pt1","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_top_13TeV_pt1","WW","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_top_13TeV_pt1","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_top_13TeV_pt1","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_top_13TeV_pt1","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_top_13TeV_pt1","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_top_13TeV_pt1","Data","EPL");
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
   
   TH1F *hframe_copy162 = new TH1F("hframe_copy162","",1000,10,200);
   hframe_copy162->SetMinimum(0);
   hframe_copy162->SetMaximum(27.07107);
   hframe_copy162->SetDirectory(0);
   hframe_copy162->SetStats(0);
   hframe_copy162->SetLineStyle(0);
   hframe_copy162->SetMarkerStyle(20);
   hframe_copy162->GetXaxis()->SetTitle("lept1_p_{T} [GeV]");
   hframe_copy162->GetXaxis()->SetNdivisions(506);
   hframe_copy162->GetXaxis()->SetLabelFont(42);
   hframe_copy162->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy162->GetXaxis()->SetLabelSize(0.05);
   hframe_copy162->GetXaxis()->SetTitleSize(0.06);
   hframe_copy162->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy162->GetXaxis()->SetTitleFont(42);
   hframe_copy162->GetYaxis()->SetTitle("Events");
   hframe_copy162->GetYaxis()->SetLabelFont(42);
   hframe_copy162->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy162->GetYaxis()->SetLabelSize(0.05);
   hframe_copy162->GetYaxis()->SetTitleSize(0.06);
   hframe_copy162->GetYaxis()->SetTitleOffset(1.25);
   hframe_copy162->GetYaxis()->SetTitleFont(42);
   hframe_copy162->GetZaxis()->SetLabelFont(42);
   hframe_copy162->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy162->GetZaxis()->SetLabelSize(0.05);
   hframe_copy162->GetZaxis()->SetTitleSize(0.06);
   hframe_copy162->GetZaxis()->SetTitleFont(42);
   hframe_copy162->Draw("sameaxis");
   ccwh3l_top_13TeV_pt1->Modified();
   ccwh3l_top_13TeV_pt1->cd();
   ccwh3l_top_13TeV_pt1->SetSelected(ccwh3l_top_13TeV_pt1);
}
