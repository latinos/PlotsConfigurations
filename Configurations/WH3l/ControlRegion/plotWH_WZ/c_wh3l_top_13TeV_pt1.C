void c_wh3l_top_13TeV_pt1()
{
//=========Macro generated from canvas: ccwh3l_top_13TeV_pt1/cc
//=========  (Tue Jun 28 16:49:11 2016) by ROOT version6.02/13
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
   
   TH1F *hframe209 = new TH1F("hframe209","",1000,10,200);
   hframe209->SetMinimum(0);
   hframe209->SetMaximum(27.07107);
   hframe209->SetDirectory(0);
   hframe209->SetStats(0);
   hframe209->SetLineStyle(0);
   hframe209->SetMarkerStyle(20);
   hframe209->GetXaxis()->SetTitle("lept1_p_{T} [GeV]");
   hframe209->GetXaxis()->SetNdivisions(506);
   hframe209->GetXaxis()->SetLabelFont(42);
   hframe209->GetXaxis()->SetLabelOffset(0.007);
   hframe209->GetXaxis()->SetLabelSize(0.05);
   hframe209->GetXaxis()->SetTitleSize(0.06);
   hframe209->GetXaxis()->SetTitleOffset(0.9);
   hframe209->GetXaxis()->SetTitleFont(42);
   hframe209->GetYaxis()->SetTitle("Events");
   hframe209->GetYaxis()->SetLabelFont(42);
   hframe209->GetYaxis()->SetLabelOffset(0.007);
   hframe209->GetYaxis()->SetLabelSize(0.05);
   hframe209->GetYaxis()->SetTitleSize(0.06);
   hframe209->GetYaxis()->SetTitleOffset(1.25);
   hframe209->GetYaxis()->SetTitleFont(42);
   hframe209->GetZaxis()->SetLabelFont(42);
   hframe209->GetZaxis()->SetLabelOffset(0.007);
   hframe209->GetZaxis()->SetLabelSize(0.05);
   hframe209->GetZaxis()->SetTitleSize(0.06);
   hframe209->GetZaxis()->SetTitleFont(42);
   hframe209->Draw(" ");
   
   THStack *thsBackground_grouped_wh3l_top_13TeV_pt1 = new THStack();
   thsBackground_grouped_wh3l_top_13TeV_pt1->SetName("thsBackground_grouped_wh3l_top_13TeV_pt1");
   thsBackground_grouped_wh3l_top_13TeV_pt1->SetTitle("thsBackground_grouped_wh3l_top_13TeV_pt1");
   
   TH1F *thsBackground_grouped_wh3l_top_13TeV_pt1_stack_27 = new TH1F("thsBackground_grouped_wh3l_top_13TeV_pt1_stack_27","thsBackground_grouped_wh3l_top_13TeV_pt1",25,10,200);
   thsBackground_grouped_wh3l_top_13TeV_pt1_stack_27->SetMinimum(-0.196462);
   thsBackground_grouped_wh3l_top_13TeV_pt1_stack_27->SetMaximum(7.109442);
   thsBackground_grouped_wh3l_top_13TeV_pt1_stack_27->SetDirectory(0);
   thsBackground_grouped_wh3l_top_13TeV_pt1_stack_27->SetStats(0);
   thsBackground_grouped_wh3l_top_13TeV_pt1_stack_27->SetLineStyle(0);
   thsBackground_grouped_wh3l_top_13TeV_pt1_stack_27->SetMarkerStyle(20);
   thsBackground_grouped_wh3l_top_13TeV_pt1_stack_27->GetXaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_top_13TeV_pt1_stack_27->GetXaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_top_13TeV_pt1_stack_27->GetXaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_top_13TeV_pt1_stack_27->GetXaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_top_13TeV_pt1_stack_27->GetXaxis()->SetTitleOffset(0.9);
   thsBackground_grouped_wh3l_top_13TeV_pt1_stack_27->GetXaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_top_13TeV_pt1_stack_27->GetYaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_top_13TeV_pt1_stack_27->GetYaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_top_13TeV_pt1_stack_27->GetYaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_top_13TeV_pt1_stack_27->GetYaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_top_13TeV_pt1_stack_27->GetYaxis()->SetTitleOffset(1.25);
   thsBackground_grouped_wh3l_top_13TeV_pt1_stack_27->GetYaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_top_13TeV_pt1_stack_27->GetZaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_top_13TeV_pt1_stack_27->GetZaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_top_13TeV_pt1_stack_27->GetZaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_top_13TeV_pt1_stack_27->GetZaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_top_13TeV_pt1_stack_27->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_top_13TeV_pt1->SetHistogram(thsBackground_grouped_wh3l_top_13TeV_pt1_stack_27);
   
   
   TH1D *new_histo_group_Fake_wh3l_top_13TeV_pt1210 = new TH1D("new_histo_group_Fake_wh3l_top_13TeV_pt1210","histo_Fake",25,10,200);
   new_histo_group_Fake_wh3l_top_13TeV_pt1210->SetBinContent(2,0.969222);
   new_histo_group_Fake_wh3l_top_13TeV_pt1210->SetBinContent(3,3.997045);
   new_histo_group_Fake_wh3l_top_13TeV_pt1210->SetBinContent(4,5.074268);
   new_histo_group_Fake_wh3l_top_13TeV_pt1210->SetBinContent(5,4.503179);
   new_histo_group_Fake_wh3l_top_13TeV_pt1210->SetBinContent(6,3.63123);
   new_histo_group_Fake_wh3l_top_13TeV_pt1210->SetBinContent(7,3.626757);
   new_histo_group_Fake_wh3l_top_13TeV_pt1210->SetBinContent(8,3.116374);
   new_histo_group_Fake_wh3l_top_13TeV_pt1210->SetBinContent(9,2.517586);
   new_histo_group_Fake_wh3l_top_13TeV_pt1210->SetBinContent(10,1.324242);
   new_histo_group_Fake_wh3l_top_13TeV_pt1210->SetBinContent(11,1.496338);
   new_histo_group_Fake_wh3l_top_13TeV_pt1210->SetBinContent(12,0.8476051);
   new_histo_group_Fake_wh3l_top_13TeV_pt1210->SetBinContent(13,1.065115);
   new_histo_group_Fake_wh3l_top_13TeV_pt1210->SetBinContent(14,2.136759);
   new_histo_group_Fake_wh3l_top_13TeV_pt1210->SetBinContent(15,0.4465819);
   new_histo_group_Fake_wh3l_top_13TeV_pt1210->SetBinContent(16,0.6371393);
   new_histo_group_Fake_wh3l_top_13TeV_pt1210->SetBinContent(17,0.3270785);
   new_histo_group_Fake_wh3l_top_13TeV_pt1210->SetBinContent(18,0.08977167);
   new_histo_group_Fake_wh3l_top_13TeV_pt1210->SetBinContent(19,0.01002724);
   new_histo_group_Fake_wh3l_top_13TeV_pt1210->SetBinContent(20,0.4729612);
   new_histo_group_Fake_wh3l_top_13TeV_pt1210->SetBinContent(22,0.07691139);
   new_histo_group_Fake_wh3l_top_13TeV_pt1210->SetBinContent(23,-0.04067832);
   new_histo_group_Fake_wh3l_top_13TeV_pt1210->SetBinContent(24,0.2403429);
   new_histo_group_Fake_wh3l_top_13TeV_pt1210->SetBinContent(25,0.108584);
   new_histo_group_Fake_wh3l_top_13TeV_pt1210->SetBinContent(26,1.019391);
   new_histo_group_Fake_wh3l_top_13TeV_pt1210->SetBinError(2,0.8173303);
   new_histo_group_Fake_wh3l_top_13TeV_pt1210->SetBinError(3,1.616956);
   new_histo_group_Fake_wh3l_top_13TeV_pt1210->SetBinError(4,1.696629);
   new_histo_group_Fake_wh3l_top_13TeV_pt1210->SetBinError(5,1.676532);
   new_histo_group_Fake_wh3l_top_13TeV_pt1210->SetBinError(6,1.502582);
   new_histo_group_Fake_wh3l_top_13TeV_pt1210->SetBinError(7,1.250056);
   new_histo_group_Fake_wh3l_top_13TeV_pt1210->SetBinError(8,1.309017);
   new_histo_group_Fake_wh3l_top_13TeV_pt1210->SetBinError(9,1.253326);
   new_histo_group_Fake_wh3l_top_13TeV_pt1210->SetBinError(10,0.6908407);
   new_histo_group_Fake_wh3l_top_13TeV_pt1210->SetBinError(11,0.6674728);
   new_histo_group_Fake_wh3l_top_13TeV_pt1210->SetBinError(12,0.3905774);
   new_histo_group_Fake_wh3l_top_13TeV_pt1210->SetBinError(13,0.6095359);
   new_histo_group_Fake_wh3l_top_13TeV_pt1210->SetBinError(14,1.071947);
   new_histo_group_Fake_wh3l_top_13TeV_pt1210->SetBinError(15,0.3909449);
   new_histo_group_Fake_wh3l_top_13TeV_pt1210->SetBinError(16,0.6970211);
   new_histo_group_Fake_wh3l_top_13TeV_pt1210->SetBinError(17,0.2481994);
   new_histo_group_Fake_wh3l_top_13TeV_pt1210->SetBinError(18,0.1084256);
   new_histo_group_Fake_wh3l_top_13TeV_pt1210->SetBinError(19,0.01002724);
   new_histo_group_Fake_wh3l_top_13TeV_pt1210->SetBinError(20,0.4373402);
   new_histo_group_Fake_wh3l_top_13TeV_pt1210->SetBinError(22,0.07684571);
   new_histo_group_Fake_wh3l_top_13TeV_pt1210->SetBinError(23,0.03592911);
   new_histo_group_Fake_wh3l_top_13TeV_pt1210->SetBinError(24,0.1837558);
   new_histo_group_Fake_wh3l_top_13TeV_pt1210->SetBinError(25,0.0802397);
   new_histo_group_Fake_wh3l_top_13TeV_pt1210->SetBinError(26,0.5021217);
   new_histo_group_Fake_wh3l_top_13TeV_pt1210->SetEntries(317);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_top_13TeV_pt1210->SetFillColor(ci);
   new_histo_group_Fake_wh3l_top_13TeV_pt1210->SetFillStyle(3001);

   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_top_13TeV_pt1210->SetLineColor(ci);
   new_histo_group_Fake_wh3l_top_13TeV_pt1210->GetXaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_top_13TeV_pt1210->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_top_13TeV_pt1210->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_top_13TeV_pt1210->GetXaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_top_13TeV_pt1210->GetYaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_top_13TeV_pt1210->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_top_13TeV_pt1210->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_top_13TeV_pt1210->GetYaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_top_13TeV_pt1210->GetZaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_top_13TeV_pt1210->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_top_13TeV_pt1210->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_top_13TeV_pt1210->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_top_13TeV_pt1->Add(new_histo_group_Fake_wh3l_top_13TeV_pt1,"");
   
   TH1D *new_histo_group_WW_wh3l_top_13TeV_pt1211 = new TH1D("new_histo_group_WW_wh3l_top_13TeV_pt1211","histo_WW",25,10,200);
   new_histo_group_WW_wh3l_top_13TeV_pt1211->SetBinContent(4,0.01528641);
   new_histo_group_WW_wh3l_top_13TeV_pt1211->SetBinContent(6,0.004448378);
   new_histo_group_WW_wh3l_top_13TeV_pt1211->SetBinContent(7,0.03356775);
   new_histo_group_WW_wh3l_top_13TeV_pt1211->SetBinContent(9,0.01959378);
   new_histo_group_WW_wh3l_top_13TeV_pt1211->SetBinContent(11,0.01821101);
   new_histo_group_WW_wh3l_top_13TeV_pt1211->SetBinContent(15,0.01749081);
   new_histo_group_WW_wh3l_top_13TeV_pt1211->SetBinContent(17,0.01305253);
   new_histo_group_WW_wh3l_top_13TeV_pt1211->SetBinContent(26,0.04641106);
   new_histo_group_WW_wh3l_top_13TeV_pt1211->SetBinError(4,0.01528641);
   new_histo_group_WW_wh3l_top_13TeV_pt1211->SetBinError(6,0.004448378);
   new_histo_group_WW_wh3l_top_13TeV_pt1211->SetBinError(7,0.02376519);
   new_histo_group_WW_wh3l_top_13TeV_pt1211->SetBinError(9,0.01959378);
   new_histo_group_WW_wh3l_top_13TeV_pt1211->SetBinError(11,0.01821101);
   new_histo_group_WW_wh3l_top_13TeV_pt1211->SetBinError(15,0.01749081);
   new_histo_group_WW_wh3l_top_13TeV_pt1211->SetBinError(17,0.01305253);
   new_histo_group_WW_wh3l_top_13TeV_pt1211->SetBinError(26,0.02682259);
   new_histo_group_WW_wh3l_top_13TeV_pt1211->SetEntries(11);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_top_13TeV_pt1211->SetFillColor(ci);
   new_histo_group_WW_wh3l_top_13TeV_pt1211->SetFillStyle(3001);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_top_13TeV_pt1211->SetLineColor(ci);
   new_histo_group_WW_wh3l_top_13TeV_pt1211->GetXaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_top_13TeV_pt1211->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_top_13TeV_pt1211->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_top_13TeV_pt1211->GetXaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_top_13TeV_pt1211->GetYaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_top_13TeV_pt1211->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_top_13TeV_pt1211->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_top_13TeV_pt1211->GetYaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_top_13TeV_pt1211->GetZaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_top_13TeV_pt1211->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_top_13TeV_pt1211->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_top_13TeV_pt1211->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_top_13TeV_pt1->Add(new_histo_group_WW_wh3l_top_13TeV_pt1,"");
   
   TH1D *new_histo_group_VVV_wh3l_top_13TeV_pt1212 = new TH1D("new_histo_group_VVV_wh3l_top_13TeV_pt1212","histo_VVV",25,10,200);
   new_histo_group_VVV_wh3l_top_13TeV_pt1212->SetBinContent(2,0.0006166669);
   new_histo_group_VVV_wh3l_top_13TeV_pt1212->SetBinContent(7,0.0005011698);
   new_histo_group_VVV_wh3l_top_13TeV_pt1212->SetBinContent(8,0.002572801);
   new_histo_group_VVV_wh3l_top_13TeV_pt1212->SetBinContent(9,0.002623316);
   new_histo_group_VVV_wh3l_top_13TeV_pt1212->SetBinContent(10,-4.353403e-05);
   new_histo_group_VVV_wh3l_top_13TeV_pt1212->SetBinContent(11,0.00143573);
   new_histo_group_VVV_wh3l_top_13TeV_pt1212->SetBinContent(12,0.00120186);
   new_histo_group_VVV_wh3l_top_13TeV_pt1212->SetBinContent(13,0.002312989);
   new_histo_group_VVV_wh3l_top_13TeV_pt1212->SetBinContent(14,0.002568196);
   new_histo_group_VVV_wh3l_top_13TeV_pt1212->SetBinContent(15,0.001029967);
   new_histo_group_VVV_wh3l_top_13TeV_pt1212->SetBinContent(16,0.00117341);
   new_histo_group_VVV_wh3l_top_13TeV_pt1212->SetBinContent(17,0.001948696);
   new_histo_group_VVV_wh3l_top_13TeV_pt1212->SetBinContent(18,0.001531567);
   new_histo_group_VVV_wh3l_top_13TeV_pt1212->SetBinContent(19,0.0001462447);
   new_histo_group_VVV_wh3l_top_13TeV_pt1212->SetBinContent(20,0.0005445301);
   new_histo_group_VVV_wh3l_top_13TeV_pt1212->SetBinContent(21,0.0007555783);
   new_histo_group_VVV_wh3l_top_13TeV_pt1212->SetBinContent(22,0.0005245999);
   new_histo_group_VVV_wh3l_top_13TeV_pt1212->SetBinContent(23,0.001081517);
   new_histo_group_VVV_wh3l_top_13TeV_pt1212->SetBinContent(25,0.0005360367);
   new_histo_group_VVV_wh3l_top_13TeV_pt1212->SetBinContent(26,0.006923726);
   new_histo_group_VVV_wh3l_top_13TeV_pt1212->SetBinError(2,0.0006166669);
   new_histo_group_VVV_wh3l_top_13TeV_pt1212->SetBinError(7,0.0005011698);
   new_histo_group_VVV_wh3l_top_13TeV_pt1212->SetBinError(8,0.001226705);
   new_histo_group_VVV_wh3l_top_13TeV_pt1212->SetBinError(9,0.001342039);
   new_histo_group_VVV_wh3l_top_13TeV_pt1212->SetBinError(10,0.0008592831);
   new_histo_group_VVV_wh3l_top_13TeV_pt1212->SetBinError(11,0.001019243);
   new_histo_group_VVV_wh3l_top_13TeV_pt1212->SetBinError(12,0.0008860899);
   new_histo_group_VVV_wh3l_top_13TeV_pt1212->SetBinError(13,0.001189962);
   new_histo_group_VVV_wh3l_top_13TeV_pt1212->SetBinError(14,0.001217233);
   new_histo_group_VVV_wh3l_top_13TeV_pt1212->SetBinError(15,0.0007373401);
   new_histo_group_VVV_wh3l_top_13TeV_pt1212->SetBinError(16,0.0008322095);
   new_histo_group_VVV_wh3l_top_13TeV_pt1212->SetBinError(17,0.001131525);
   new_histo_group_VVV_wh3l_top_13TeV_pt1212->SetBinError(18,0.0009605381);
   new_histo_group_VVV_wh3l_top_13TeV_pt1212->SetBinError(19,0.0001462447);
   new_histo_group_VVV_wh3l_top_13TeV_pt1212->SetBinError(20,0.0005445301);
   new_histo_group_VVV_wh3l_top_13TeV_pt1212->SetBinError(21,0.0007555783);
   new_histo_group_VVV_wh3l_top_13TeV_pt1212->SetBinError(22,0.0005245999);
   new_histo_group_VVV_wh3l_top_13TeV_pt1212->SetBinError(23,0.0007858012);
   new_histo_group_VVV_wh3l_top_13TeV_pt1212->SetBinError(25,0.0005360367);
   new_histo_group_VVV_wh3l_top_13TeV_pt1212->SetBinError(26,0.001989318);
   new_histo_group_VVV_wh3l_top_13TeV_pt1212->SetEntries(58);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_top_13TeV_pt1212->SetFillColor(ci);
   new_histo_group_VVV_wh3l_top_13TeV_pt1212->SetFillStyle(3001);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_top_13TeV_pt1212->SetLineColor(ci);
   new_histo_group_VVV_wh3l_top_13TeV_pt1212->GetXaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_top_13TeV_pt1212->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_top_13TeV_pt1212->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_top_13TeV_pt1212->GetXaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_top_13TeV_pt1212->GetYaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_top_13TeV_pt1212->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_top_13TeV_pt1212->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_top_13TeV_pt1212->GetYaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_top_13TeV_pt1212->GetZaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_top_13TeV_pt1212->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_top_13TeV_pt1212->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_top_13TeV_pt1212->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_top_13TeV_pt1->Add(new_histo_group_VVV_wh3l_top_13TeV_pt1,"");
   
   TH1D *new_histo_group_Vg_wh3l_top_13TeV_pt1213 = new TH1D("new_histo_group_Vg_wh3l_top_13TeV_pt1213","histo_Vg",25,10,200);
   new_histo_group_Vg_wh3l_top_13TeV_pt1213->SetBinContent(3,0.04591915);
   new_histo_group_Vg_wh3l_top_13TeV_pt1213->SetBinContent(4,0.2463113);
   new_histo_group_Vg_wh3l_top_13TeV_pt1213->SetBinContent(5,0.0182002);
   new_histo_group_Vg_wh3l_top_13TeV_pt1213->SetBinContent(6,0.4574124);
   new_histo_group_Vg_wh3l_top_13TeV_pt1213->SetBinContent(7,0.1493144);
   new_histo_group_Vg_wh3l_top_13TeV_pt1213->SetBinContent(8,0.07232783);
   new_histo_group_Vg_wh3l_top_13TeV_pt1213->SetBinContent(9,-0.06890358);
   new_histo_group_Vg_wh3l_top_13TeV_pt1213->SetBinContent(11,0.1156138);
   new_histo_group_Vg_wh3l_top_13TeV_pt1213->SetBinContent(12,-0.02313529);
   new_histo_group_Vg_wh3l_top_13TeV_pt1213->SetBinContent(15,0.06632758);
   new_histo_group_Vg_wh3l_top_13TeV_pt1213->SetBinContent(16,0.1220507);
   new_histo_group_Vg_wh3l_top_13TeV_pt1213->SetBinContent(17,0.1085778);
   new_histo_group_Vg_wh3l_top_13TeV_pt1213->SetBinContent(19,0.09785095);
   new_histo_group_Vg_wh3l_top_13TeV_pt1213->SetBinContent(26,0.1067996);
   new_histo_group_Vg_wh3l_top_13TeV_pt1213->SetBinError(3,0.1114699);
   new_histo_group_Vg_wh3l_top_13TeV_pt1213->SetBinError(4,0.1751166);
   new_histo_group_Vg_wh3l_top_13TeV_pt1213->SetBinError(5,0.1701309);
   new_histo_group_Vg_wh3l_top_13TeV_pt1213->SetBinError(6,0.2119854);
   new_histo_group_Vg_wh3l_top_13TeV_pt1213->SetBinError(7,0.1255831);
   new_histo_group_Vg_wh3l_top_13TeV_pt1213->SetBinError(8,0.07232783);
   new_histo_group_Vg_wh3l_top_13TeV_pt1213->SetBinError(9,0.1275585);
   new_histo_group_Vg_wh3l_top_13TeV_pt1213->SetBinError(11,0.1156138);
   new_histo_group_Vg_wh3l_top_13TeV_pt1213->SetBinError(12,0.02313529);
   new_histo_group_Vg_wh3l_top_13TeV_pt1213->SetBinError(15,0.06632758);
   new_histo_group_Vg_wh3l_top_13TeV_pt1213->SetBinError(16,0.1220507);
   new_histo_group_Vg_wh3l_top_13TeV_pt1213->SetBinError(17,0.1085778);
   new_histo_group_Vg_wh3l_top_13TeV_pt1213->SetBinError(19,0.09785095);
   new_histo_group_Vg_wh3l_top_13TeV_pt1213->SetBinError(26,0.1067996);
   new_histo_group_Vg_wh3l_top_13TeV_pt1213->SetEntries(26);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_top_13TeV_pt1213->SetFillColor(ci);
   new_histo_group_Vg_wh3l_top_13TeV_pt1213->SetFillStyle(3001);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_top_13TeV_pt1213->SetLineColor(ci);
   new_histo_group_Vg_wh3l_top_13TeV_pt1213->GetXaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_top_13TeV_pt1213->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_top_13TeV_pt1213->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_top_13TeV_pt1213->GetXaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_top_13TeV_pt1213->GetYaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_top_13TeV_pt1213->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_top_13TeV_pt1213->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_top_13TeV_pt1213->GetYaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_top_13TeV_pt1213->GetZaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_top_13TeV_pt1213->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_top_13TeV_pt1213->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_top_13TeV_pt1213->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_top_13TeV_pt1->Add(new_histo_group_Vg_wh3l_top_13TeV_pt1,"");
   
   TH1D *new_histo_group_ZZ_wh3l_top_13TeV_pt1214 = new TH1D("new_histo_group_ZZ_wh3l_top_13TeV_pt1214","histo_ZZ",25,10,200);
   new_histo_group_ZZ_wh3l_top_13TeV_pt1214->SetBinContent(2,0.04142581);
   new_histo_group_ZZ_wh3l_top_13TeV_pt1214->SetBinContent(4,0.08785785);
   new_histo_group_ZZ_wh3l_top_13TeV_pt1214->SetBinContent(5,0.01751245);
   new_histo_group_ZZ_wh3l_top_13TeV_pt1214->SetBinContent(6,0.159848);
   new_histo_group_ZZ_wh3l_top_13TeV_pt1214->SetBinContent(8,0.04400699);
   new_histo_group_ZZ_wh3l_top_13TeV_pt1214->SetBinContent(9,0.04079673);
   new_histo_group_ZZ_wh3l_top_13TeV_pt1214->SetBinContent(10,0.0667641);
   new_histo_group_ZZ_wh3l_top_13TeV_pt1214->SetBinContent(11,0.04624667);
   new_histo_group_ZZ_wh3l_top_13TeV_pt1214->SetBinContent(12,0.08601038);
   new_histo_group_ZZ_wh3l_top_13TeV_pt1214->SetBinContent(13,0.0476643);
   new_histo_group_ZZ_wh3l_top_13TeV_pt1214->SetBinContent(15,0.02044833);
   new_histo_group_ZZ_wh3l_top_13TeV_pt1214->SetBinContent(18,0.03822494);
   new_histo_group_ZZ_wh3l_top_13TeV_pt1214->SetBinContent(19,0.04545766);
   new_histo_group_ZZ_wh3l_top_13TeV_pt1214->SetBinContent(20,0.04596292);
   new_histo_group_ZZ_wh3l_top_13TeV_pt1214->SetBinContent(23,0.02058282);
   new_histo_group_ZZ_wh3l_top_13TeV_pt1214->SetBinContent(26,0.1328735);
   new_histo_group_ZZ_wh3l_top_13TeV_pt1214->SetBinError(2,0.04142581);
   new_histo_group_ZZ_wh3l_top_13TeV_pt1214->SetBinError(4,0.0552178);
   new_histo_group_ZZ_wh3l_top_13TeV_pt1214->SetBinError(5,0.01751245);
   new_histo_group_ZZ_wh3l_top_13TeV_pt1214->SetBinError(6,0.08594384);
   new_histo_group_ZZ_wh3l_top_13TeV_pt1214->SetBinError(8,0.04400699);
   new_histo_group_ZZ_wh3l_top_13TeV_pt1214->SetBinError(9,0.04079673);
   new_histo_group_ZZ_wh3l_top_13TeV_pt1214->SetBinError(10,0.0508894);
   new_histo_group_ZZ_wh3l_top_13TeV_pt1214->SetBinError(11,0.04624667);
   new_histo_group_ZZ_wh3l_top_13TeV_pt1214->SetBinError(12,0.06082022);
   new_histo_group_ZZ_wh3l_top_13TeV_pt1214->SetBinError(13,0.0476643);
   new_histo_group_ZZ_wh3l_top_13TeV_pt1214->SetBinError(15,0.02044833);
   new_histo_group_ZZ_wh3l_top_13TeV_pt1214->SetBinError(18,0.03822494);
   new_histo_group_ZZ_wh3l_top_13TeV_pt1214->SetBinError(19,0.04545766);
   new_histo_group_ZZ_wh3l_top_13TeV_pt1214->SetBinError(20,0.04596292);
   new_histo_group_ZZ_wh3l_top_13TeV_pt1214->SetBinError(23,0.02058282);
   new_histo_group_ZZ_wh3l_top_13TeV_pt1214->SetBinError(26,0.07683117);
   new_histo_group_ZZ_wh3l_top_13TeV_pt1214->SetEntries(25);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_top_13TeV_pt1214->SetFillColor(ci);
   new_histo_group_ZZ_wh3l_top_13TeV_pt1214->SetFillStyle(3001);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_top_13TeV_pt1214->SetLineColor(ci);
   new_histo_group_ZZ_wh3l_top_13TeV_pt1214->GetXaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_top_13TeV_pt1214->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_top_13TeV_pt1214->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_top_13TeV_pt1214->GetXaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_top_13TeV_pt1214->GetYaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_top_13TeV_pt1214->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_top_13TeV_pt1214->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_top_13TeV_pt1214->GetYaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_top_13TeV_pt1214->GetZaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_top_13TeV_pt1214->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_top_13TeV_pt1214->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_top_13TeV_pt1214->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_top_13TeV_pt1->Add(new_histo_group_ZZ_wh3l_top_13TeV_pt1,"");
   
   TH1D *new_histo_group_WZ_wh3l_top_13TeV_pt1215 = new TH1D("new_histo_group_WZ_wh3l_top_13TeV_pt1215","histo_WZ",25,10,200);
   new_histo_group_WZ_wh3l_top_13TeV_pt1215->SetBinContent(2,0.2174854);
   new_histo_group_WZ_wh3l_top_13TeV_pt1215->SetBinContent(3,0.5898978);
   new_histo_group_WZ_wh3l_top_13TeV_pt1215->SetBinContent(4,0.662479);
   new_histo_group_WZ_wh3l_top_13TeV_pt1215->SetBinContent(5,0.8310412);
   new_histo_group_WZ_wh3l_top_13TeV_pt1215->SetBinContent(6,0.6482968);
   new_histo_group_WZ_wh3l_top_13TeV_pt1215->SetBinContent(7,0.592627);
   new_histo_group_WZ_wh3l_top_13TeV_pt1215->SetBinContent(8,0.5148446);
   new_histo_group_WZ_wh3l_top_13TeV_pt1215->SetBinContent(9,0.4452681);
   new_histo_group_WZ_wh3l_top_13TeV_pt1215->SetBinContent(10,0.4084912);
   new_histo_group_WZ_wh3l_top_13TeV_pt1215->SetBinContent(11,0.3962891);
   new_histo_group_WZ_wh3l_top_13TeV_pt1215->SetBinContent(12,0.3336481);
   new_histo_group_WZ_wh3l_top_13TeV_pt1215->SetBinContent(13,0.2578152);
   new_histo_group_WZ_wh3l_top_13TeV_pt1215->SetBinContent(14,0.2633364);
   new_histo_group_WZ_wh3l_top_13TeV_pt1215->SetBinContent(15,0.2836645);
   new_histo_group_WZ_wh3l_top_13TeV_pt1215->SetBinContent(16,0.2939553);
   new_histo_group_WZ_wh3l_top_13TeV_pt1215->SetBinContent(17,0.1986913);
   new_histo_group_WZ_wh3l_top_13TeV_pt1215->SetBinContent(18,0.1570508);
   new_histo_group_WZ_wh3l_top_13TeV_pt1215->SetBinContent(19,0.1751324);
   new_histo_group_WZ_wh3l_top_13TeV_pt1215->SetBinContent(20,0.100798);
   new_histo_group_WZ_wh3l_top_13TeV_pt1215->SetBinContent(21,0.09733229);
   new_histo_group_WZ_wh3l_top_13TeV_pt1215->SetBinContent(22,0.05596057);
   new_histo_group_WZ_wh3l_top_13TeV_pt1215->SetBinContent(23,0.08460154);
   new_histo_group_WZ_wh3l_top_13TeV_pt1215->SetBinContent(24,0.1090366);
   new_histo_group_WZ_wh3l_top_13TeV_pt1215->SetBinContent(25,0.1039246);
   new_histo_group_WZ_wh3l_top_13TeV_pt1215->SetBinContent(26,1.064594);
   new_histo_group_WZ_wh3l_top_13TeV_pt1215->SetBinError(2,0.03476505);
   new_histo_group_WZ_wh3l_top_13TeV_pt1215->SetBinError(3,0.05670728);
   new_histo_group_WZ_wh3l_top_13TeV_pt1215->SetBinError(4,0.06006218);
   new_histo_group_WZ_wh3l_top_13TeV_pt1215->SetBinError(5,0.06691215);
   new_histo_group_WZ_wh3l_top_13TeV_pt1215->SetBinError(6,0.05982645);
   new_histo_group_WZ_wh3l_top_13TeV_pt1215->SetBinError(7,0.05644038);
   new_histo_group_WZ_wh3l_top_13TeV_pt1215->SetBinError(8,0.05255448);
   new_histo_group_WZ_wh3l_top_13TeV_pt1215->SetBinError(9,0.04923828);
   new_histo_group_WZ_wh3l_top_13TeV_pt1215->SetBinError(10,0.04741312);
   new_histo_group_WZ_wh3l_top_13TeV_pt1215->SetBinError(11,0.04659962);
   new_histo_group_WZ_wh3l_top_13TeV_pt1215->SetBinError(12,0.04285939);
   new_histo_group_WZ_wh3l_top_13TeV_pt1215->SetBinError(13,0.03743767);
   new_histo_group_WZ_wh3l_top_13TeV_pt1215->SetBinError(14,0.03903624);
   new_histo_group_WZ_wh3l_top_13TeV_pt1215->SetBinError(15,0.03891304);
   new_histo_group_WZ_wh3l_top_13TeV_pt1215->SetBinError(16,0.03995318);
   new_histo_group_WZ_wh3l_top_13TeV_pt1215->SetBinError(17,0.03310814);
   new_histo_group_WZ_wh3l_top_13TeV_pt1215->SetBinError(18,0.02842491);
   new_histo_group_WZ_wh3l_top_13TeV_pt1215->SetBinError(19,0.03123715);
   new_histo_group_WZ_wh3l_top_13TeV_pt1215->SetBinError(20,0.02243665);
   new_histo_group_WZ_wh3l_top_13TeV_pt1215->SetBinError(21,0.02229101);
   new_histo_group_WZ_wh3l_top_13TeV_pt1215->SetBinError(22,0.01693417);
   new_histo_group_WZ_wh3l_top_13TeV_pt1215->SetBinError(23,0.02202065);
   new_histo_group_WZ_wh3l_top_13TeV_pt1215->SetBinError(24,0.02493802);
   new_histo_group_WZ_wh3l_top_13TeV_pt1215->SetBinError(25,0.02355999);
   new_histo_group_WZ_wh3l_top_13TeV_pt1215->SetBinError(26,0.0755998);
   new_histo_group_WZ_wh3l_top_13TeV_pt1215->SetEntries(1809);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_top_13TeV_pt1215->SetFillColor(ci);
   new_histo_group_WZ_wh3l_top_13TeV_pt1215->SetFillStyle(3001);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_top_13TeV_pt1215->SetLineColor(ci);
   new_histo_group_WZ_wh3l_top_13TeV_pt1215->GetXaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_top_13TeV_pt1215->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_top_13TeV_pt1215->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_top_13TeV_pt1215->GetXaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_top_13TeV_pt1215->GetYaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_top_13TeV_pt1215->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_top_13TeV_pt1215->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_top_13TeV_pt1215->GetYaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_top_13TeV_pt1215->GetZaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_top_13TeV_pt1215->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_top_13TeV_pt1215->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_top_13TeV_pt1215->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_top_13TeV_pt1->Add(new_histo_group_WZ_wh3l_top_13TeV_pt1,"");
   thsBackground_grouped_wh3l_top_13TeV_pt1->Draw("hist same");
   
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
   1.22875,
   4.632862,
   6.086203,
   5.369932,
   4.901236,
   4.402767,
   3.750126,
   2.956964,
   1.799453,
   2.074135,
   1.24533,
   1.372907,
   2.402664,
   0.8355431,
   1.054319,
   0.6493489,
   0.2865789,
   0.3286145,
   0.6202667,
   0.09808787,
   0.1333966,
   0.06558757,
   0.3493795,
   0.2130447};
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
   0.9402281,
   2.096386,
   2.515289,
   2.233936,
   2.15973,
   1.817903,
   1.74983,
   1.672149,
   0.8842695,
   1.001426,
   0.5772994,
   0.7656897,
   1.283708,
   0.5513933,
   0.8225004,
   0.4158263,
   0.1596734,
   0.1847844,
   0.5257924,
   0.02304703,
   0.09708615,
   0.08025395,
   0.2207984,
   0.1093028};
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
   0.9402283,
   2.150483,
   2.515289,
   2.35673,
   2.15973,
   1.817903,
   1.74983,
   1.620036,
   0.8835408,
   1.001426,
   0.5772992,
   0.7656897,
   1.283708,
   0.5513933,
   0.8808522,
   0.4158263,
   0.1780875,
   0.1847845,
   0.5257924,
   0.02304704,
   0.09708615,
   0.08025394,
   0.2207984,
   0.1093028};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(25,_fx3053,_fy3053,_felx3053,_fehx3053,_fely3053,_fehy3053);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(12);
   grae->SetFillStyle(3004);
   grae->SetLineColor(12);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3053 = new TH1F("Graph_Graph3053","",100,0,219);
   Graph_Graph3053->SetMinimum(-0.8762822);
   Graph_Graph3053->SetMaximum(9.463108);
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
   2,
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
   1.29183,
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
   2.63791,
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
   grae = new TGraphAsymmErrors(25,_fx3054,_fy3054,_felx3054,_fehx3054,_fely3054,_fehy3054);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(1);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3054 = new TH1F("Graph_Graph3054","",100,0,219);
   Graph_Graph3054->SetMinimum(0);
   Graph_Graph3054->SetMaximum(13.13974);
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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_top_13TeV_pt1","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_top_13TeV_pt1","VVV","F");

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
   
   TH1F *hframe_copy216 = new TH1F("hframe_copy216","",1000,10,200);
   hframe_copy216->SetMinimum(0);
   hframe_copy216->SetMaximum(27.07107);
   hframe_copy216->SetDirectory(0);
   hframe_copy216->SetStats(0);
   hframe_copy216->SetLineStyle(0);
   hframe_copy216->SetMarkerStyle(20);
   hframe_copy216->GetXaxis()->SetTitle("lept1_p_{T} [GeV]");
   hframe_copy216->GetXaxis()->SetNdivisions(506);
   hframe_copy216->GetXaxis()->SetLabelFont(42);
   hframe_copy216->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy216->GetXaxis()->SetLabelSize(0.05);
   hframe_copy216->GetXaxis()->SetTitleSize(0.06);
   hframe_copy216->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy216->GetXaxis()->SetTitleFont(42);
   hframe_copy216->GetYaxis()->SetTitle("Events");
   hframe_copy216->GetYaxis()->SetLabelFont(42);
   hframe_copy216->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy216->GetYaxis()->SetLabelSize(0.05);
   hframe_copy216->GetYaxis()->SetTitleSize(0.06);
   hframe_copy216->GetYaxis()->SetTitleOffset(1.25);
   hframe_copy216->GetYaxis()->SetTitleFont(42);
   hframe_copy216->GetZaxis()->SetLabelFont(42);
   hframe_copy216->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy216->GetZaxis()->SetLabelSize(0.05);
   hframe_copy216->GetZaxis()->SetTitleSize(0.06);
   hframe_copy216->GetZaxis()->SetTitleFont(42);
   hframe_copy216->Draw("sameaxis");
   ccwh3l_top_13TeV_pt1->Modified();
   ccwh3l_top_13TeV_pt1->cd();
   ccwh3l_top_13TeV_pt1->SetSelected(ccwh3l_top_13TeV_pt1);
}
