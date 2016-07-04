void c_wh3l_top_13TeV_pt1()
{
//=========Macro generated from canvas: ccwh3l_top_13TeV_pt1/cc
//=========  (Sat Jul  2 20:54:43 2016) by ROOT version6.02/13
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
   
   TH1F *hframe251 = new TH1F("hframe251","",1000,10,200);
   hframe251->SetMinimum(0);
   hframe251->SetMaximum(27.07107);
   hframe251->SetDirectory(0);
   hframe251->SetStats(0);
   hframe251->SetLineStyle(0);
   hframe251->SetMarkerStyle(20);
   hframe251->GetXaxis()->SetTitle("lept1_p_{T} [GeV]");
   hframe251->GetXaxis()->SetNdivisions(506);
   hframe251->GetXaxis()->SetLabelFont(42);
   hframe251->GetXaxis()->SetLabelOffset(0.007);
   hframe251->GetXaxis()->SetLabelSize(0.05);
   hframe251->GetXaxis()->SetTitleSize(0.06);
   hframe251->GetXaxis()->SetTitleOffset(0.9);
   hframe251->GetXaxis()->SetTitleFont(42);
   hframe251->GetYaxis()->SetTitle("Events");
   hframe251->GetYaxis()->SetLabelFont(42);
   hframe251->GetYaxis()->SetLabelOffset(0.007);
   hframe251->GetYaxis()->SetLabelSize(0.05);
   hframe251->GetYaxis()->SetTitleSize(0.06);
   hframe251->GetYaxis()->SetTitleOffset(1.25);
   hframe251->GetYaxis()->SetTitleFont(42);
   hframe251->GetZaxis()->SetLabelFont(42);
   hframe251->GetZaxis()->SetLabelOffset(0.007);
   hframe251->GetZaxis()->SetLabelSize(0.05);
   hframe251->GetZaxis()->SetTitleSize(0.06);
   hframe251->GetZaxis()->SetTitleFont(42);
   hframe251->Draw(" ");
   
   THStack *thsBackground_grouped_wh3l_top_13TeV_pt1 = new THStack();
   thsBackground_grouped_wh3l_top_13TeV_pt1->SetName("thsBackground_grouped_wh3l_top_13TeV_pt1");
   thsBackground_grouped_wh3l_top_13TeV_pt1->SetTitle("thsBackground_grouped_wh3l_top_13TeV_pt1");
   
   TH1F *thsBackground_grouped_wh3l_top_13TeV_pt1_stack_51 = new TH1F("thsBackground_grouped_wh3l_top_13TeV_pt1_stack_51","thsBackground_grouped_wh3l_top_13TeV_pt1",25,10,200);
   thsBackground_grouped_wh3l_top_13TeV_pt1_stack_51->SetMinimum(-0.196462);
   thsBackground_grouped_wh3l_top_13TeV_pt1_stack_51->SetMaximum(7.109442);
   thsBackground_grouped_wh3l_top_13TeV_pt1_stack_51->SetDirectory(0);
   thsBackground_grouped_wh3l_top_13TeV_pt1_stack_51->SetStats(0);
   thsBackground_grouped_wh3l_top_13TeV_pt1_stack_51->SetLineStyle(0);
   thsBackground_grouped_wh3l_top_13TeV_pt1_stack_51->SetMarkerStyle(20);
   thsBackground_grouped_wh3l_top_13TeV_pt1_stack_51->GetXaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_top_13TeV_pt1_stack_51->GetXaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_top_13TeV_pt1_stack_51->GetXaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_top_13TeV_pt1_stack_51->GetXaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_top_13TeV_pt1_stack_51->GetXaxis()->SetTitleOffset(0.9);
   thsBackground_grouped_wh3l_top_13TeV_pt1_stack_51->GetXaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_top_13TeV_pt1_stack_51->GetYaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_top_13TeV_pt1_stack_51->GetYaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_top_13TeV_pt1_stack_51->GetYaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_top_13TeV_pt1_stack_51->GetYaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_top_13TeV_pt1_stack_51->GetYaxis()->SetTitleOffset(1.25);
   thsBackground_grouped_wh3l_top_13TeV_pt1_stack_51->GetYaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_top_13TeV_pt1_stack_51->GetZaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_top_13TeV_pt1_stack_51->GetZaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_top_13TeV_pt1_stack_51->GetZaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_top_13TeV_pt1_stack_51->GetZaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_top_13TeV_pt1_stack_51->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_top_13TeV_pt1->SetHistogram(thsBackground_grouped_wh3l_top_13TeV_pt1_stack_51);
   
   
   TH1D *new_histo_group_Fake_wh3l_top_13TeV_pt1252 = new TH1D("new_histo_group_Fake_wh3l_top_13TeV_pt1252","histo_Fake",25,10,200);
   new_histo_group_Fake_wh3l_top_13TeV_pt1252->SetBinContent(2,0.969222);
   new_histo_group_Fake_wh3l_top_13TeV_pt1252->SetBinContent(3,3.997045);
   new_histo_group_Fake_wh3l_top_13TeV_pt1252->SetBinContent(4,5.074268);
   new_histo_group_Fake_wh3l_top_13TeV_pt1252->SetBinContent(5,4.503179);
   new_histo_group_Fake_wh3l_top_13TeV_pt1252->SetBinContent(6,3.63123);
   new_histo_group_Fake_wh3l_top_13TeV_pt1252->SetBinContent(7,3.626757);
   new_histo_group_Fake_wh3l_top_13TeV_pt1252->SetBinContent(8,3.116374);
   new_histo_group_Fake_wh3l_top_13TeV_pt1252->SetBinContent(9,2.517586);
   new_histo_group_Fake_wh3l_top_13TeV_pt1252->SetBinContent(10,1.324242);
   new_histo_group_Fake_wh3l_top_13TeV_pt1252->SetBinContent(11,1.496338);
   new_histo_group_Fake_wh3l_top_13TeV_pt1252->SetBinContent(12,0.8476051);
   new_histo_group_Fake_wh3l_top_13TeV_pt1252->SetBinContent(13,1.065115);
   new_histo_group_Fake_wh3l_top_13TeV_pt1252->SetBinContent(14,2.136759);
   new_histo_group_Fake_wh3l_top_13TeV_pt1252->SetBinContent(15,0.4465819);
   new_histo_group_Fake_wh3l_top_13TeV_pt1252->SetBinContent(16,0.6371393);
   new_histo_group_Fake_wh3l_top_13TeV_pt1252->SetBinContent(17,0.3270785);
   new_histo_group_Fake_wh3l_top_13TeV_pt1252->SetBinContent(18,0.08977167);
   new_histo_group_Fake_wh3l_top_13TeV_pt1252->SetBinContent(19,0.01002724);
   new_histo_group_Fake_wh3l_top_13TeV_pt1252->SetBinContent(20,0.4729612);
   new_histo_group_Fake_wh3l_top_13TeV_pt1252->SetBinContent(22,0.07691139);
   new_histo_group_Fake_wh3l_top_13TeV_pt1252->SetBinContent(23,-0.04067832);
   new_histo_group_Fake_wh3l_top_13TeV_pt1252->SetBinContent(24,0.2403429);
   new_histo_group_Fake_wh3l_top_13TeV_pt1252->SetBinContent(25,0.108584);
   new_histo_group_Fake_wh3l_top_13TeV_pt1252->SetBinContent(26,1.019391);
   new_histo_group_Fake_wh3l_top_13TeV_pt1252->SetBinError(2,0.8173303);
   new_histo_group_Fake_wh3l_top_13TeV_pt1252->SetBinError(3,1.616956);
   new_histo_group_Fake_wh3l_top_13TeV_pt1252->SetBinError(4,1.696629);
   new_histo_group_Fake_wh3l_top_13TeV_pt1252->SetBinError(5,1.676532);
   new_histo_group_Fake_wh3l_top_13TeV_pt1252->SetBinError(6,1.502582);
   new_histo_group_Fake_wh3l_top_13TeV_pt1252->SetBinError(7,1.250056);
   new_histo_group_Fake_wh3l_top_13TeV_pt1252->SetBinError(8,1.309017);
   new_histo_group_Fake_wh3l_top_13TeV_pt1252->SetBinError(9,1.253326);
   new_histo_group_Fake_wh3l_top_13TeV_pt1252->SetBinError(10,0.6908407);
   new_histo_group_Fake_wh3l_top_13TeV_pt1252->SetBinError(11,0.6674728);
   new_histo_group_Fake_wh3l_top_13TeV_pt1252->SetBinError(12,0.3905774);
   new_histo_group_Fake_wh3l_top_13TeV_pt1252->SetBinError(13,0.6095359);
   new_histo_group_Fake_wh3l_top_13TeV_pt1252->SetBinError(14,1.071947);
   new_histo_group_Fake_wh3l_top_13TeV_pt1252->SetBinError(15,0.3909449);
   new_histo_group_Fake_wh3l_top_13TeV_pt1252->SetBinError(16,0.6970211);
   new_histo_group_Fake_wh3l_top_13TeV_pt1252->SetBinError(17,0.2481994);
   new_histo_group_Fake_wh3l_top_13TeV_pt1252->SetBinError(18,0.1084256);
   new_histo_group_Fake_wh3l_top_13TeV_pt1252->SetBinError(19,0.01002724);
   new_histo_group_Fake_wh3l_top_13TeV_pt1252->SetBinError(20,0.4373402);
   new_histo_group_Fake_wh3l_top_13TeV_pt1252->SetBinError(22,0.07684571);
   new_histo_group_Fake_wh3l_top_13TeV_pt1252->SetBinError(23,0.03592911);
   new_histo_group_Fake_wh3l_top_13TeV_pt1252->SetBinError(24,0.1837558);
   new_histo_group_Fake_wh3l_top_13TeV_pt1252->SetBinError(25,0.0802397);
   new_histo_group_Fake_wh3l_top_13TeV_pt1252->SetBinError(26,0.5021217);
   new_histo_group_Fake_wh3l_top_13TeV_pt1252->SetEntries(317);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_top_13TeV_pt1252->SetFillColor(ci);
   new_histo_group_Fake_wh3l_top_13TeV_pt1252->SetFillStyle(3001);

   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_top_13TeV_pt1252->SetLineColor(ci);
   new_histo_group_Fake_wh3l_top_13TeV_pt1252->GetXaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_top_13TeV_pt1252->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_top_13TeV_pt1252->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_top_13TeV_pt1252->GetXaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_top_13TeV_pt1252->GetYaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_top_13TeV_pt1252->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_top_13TeV_pt1252->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_top_13TeV_pt1252->GetYaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_top_13TeV_pt1252->GetZaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_top_13TeV_pt1252->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_top_13TeV_pt1252->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_top_13TeV_pt1252->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_top_13TeV_pt1->Add(new_histo_group_Fake_wh3l_top_13TeV_pt1,"");
   
   TH1D *new_histo_group_WW_wh3l_top_13TeV_pt1253 = new TH1D("new_histo_group_WW_wh3l_top_13TeV_pt1253","histo_WW",25,10,200);
   new_histo_group_WW_wh3l_top_13TeV_pt1253->SetBinContent(4,0.01528641);
   new_histo_group_WW_wh3l_top_13TeV_pt1253->SetBinContent(6,0.004448378);
   new_histo_group_WW_wh3l_top_13TeV_pt1253->SetBinContent(7,0.03356775);
   new_histo_group_WW_wh3l_top_13TeV_pt1253->SetBinContent(9,0.01959378);
   new_histo_group_WW_wh3l_top_13TeV_pt1253->SetBinContent(11,0.01821101);
   new_histo_group_WW_wh3l_top_13TeV_pt1253->SetBinContent(15,0.01749081);
   new_histo_group_WW_wh3l_top_13TeV_pt1253->SetBinContent(17,0.01305253);
   new_histo_group_WW_wh3l_top_13TeV_pt1253->SetBinContent(26,0.04641106);
   new_histo_group_WW_wh3l_top_13TeV_pt1253->SetBinError(4,0.01528641);
   new_histo_group_WW_wh3l_top_13TeV_pt1253->SetBinError(6,0.004448378);
   new_histo_group_WW_wh3l_top_13TeV_pt1253->SetBinError(7,0.02376519);
   new_histo_group_WW_wh3l_top_13TeV_pt1253->SetBinError(9,0.01959378);
   new_histo_group_WW_wh3l_top_13TeV_pt1253->SetBinError(11,0.01821101);
   new_histo_group_WW_wh3l_top_13TeV_pt1253->SetBinError(15,0.01749081);
   new_histo_group_WW_wh3l_top_13TeV_pt1253->SetBinError(17,0.01305253);
   new_histo_group_WW_wh3l_top_13TeV_pt1253->SetBinError(26,0.02682259);
   new_histo_group_WW_wh3l_top_13TeV_pt1253->SetEntries(11);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_top_13TeV_pt1253->SetFillColor(ci);
   new_histo_group_WW_wh3l_top_13TeV_pt1253->SetFillStyle(3001);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_top_13TeV_pt1253->SetLineColor(ci);
   new_histo_group_WW_wh3l_top_13TeV_pt1253->GetXaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_top_13TeV_pt1253->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_top_13TeV_pt1253->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_top_13TeV_pt1253->GetXaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_top_13TeV_pt1253->GetYaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_top_13TeV_pt1253->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_top_13TeV_pt1253->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_top_13TeV_pt1253->GetYaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_top_13TeV_pt1253->GetZaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_top_13TeV_pt1253->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_top_13TeV_pt1253->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_top_13TeV_pt1253->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_top_13TeV_pt1->Add(new_histo_group_WW_wh3l_top_13TeV_pt1,"");
   
   TH1D *new_histo_group_VVV_wh3l_top_13TeV_pt1254 = new TH1D("new_histo_group_VVV_wh3l_top_13TeV_pt1254","histo_VVV",25,10,200);
   new_histo_group_VVV_wh3l_top_13TeV_pt1254->SetBinContent(2,0.0006166669);
   new_histo_group_VVV_wh3l_top_13TeV_pt1254->SetBinContent(3,0.01808888);
   new_histo_group_VVV_wh3l_top_13TeV_pt1254->SetBinContent(4,0.01578226);
   new_histo_group_VVV_wh3l_top_13TeV_pt1254->SetBinContent(5,0.01873956);
   new_histo_group_VVV_wh3l_top_13TeV_pt1254->SetBinContent(6,0.01766871);
   new_histo_group_VVV_wh3l_top_13TeV_pt1254->SetBinContent(7,0.01548727);
   new_histo_group_VVV_wh3l_top_13TeV_pt1254->SetBinContent(8,0.030581);
   new_histo_group_VVV_wh3l_top_13TeV_pt1254->SetBinContent(9,0.03581827);
   new_histo_group_VVV_wh3l_top_13TeV_pt1254->SetBinContent(10,0.03176399);
   new_histo_group_VVV_wh3l_top_13TeV_pt1254->SetBinContent(11,0.02697342);
   new_histo_group_VVV_wh3l_top_13TeV_pt1254->SetBinContent(12,0.0189243);
   new_histo_group_VVV_wh3l_top_13TeV_pt1254->SetBinContent(13,0.02219244);
   new_histo_group_VVV_wh3l_top_13TeV_pt1254->SetBinContent(14,0.007683811);
   new_histo_group_VVV_wh3l_top_13TeV_pt1254->SetBinContent(15,0.01840879);
   new_histo_group_VVV_wh3l_top_13TeV_pt1254->SetBinContent(16,0.02361414);
   new_histo_group_VVV_wh3l_top_13TeV_pt1254->SetBinContent(17,0.03089618);
   new_histo_group_VVV_wh3l_top_13TeV_pt1254->SetBinContent(18,0.01506);
   new_histo_group_VVV_wh3l_top_13TeV_pt1254->SetBinContent(19,0.02218133);
   new_histo_group_VVV_wh3l_top_13TeV_pt1254->SetBinContent(20,0.01817459);
   new_histo_group_VVV_wh3l_top_13TeV_pt1254->SetBinContent(21,0.01359877);
   new_histo_group_VVV_wh3l_top_13TeV_pt1254->SetBinContent(22,0.02067973);
   new_histo_group_VVV_wh3l_top_13TeV_pt1254->SetBinContent(23,0.00798304);
   new_histo_group_VVV_wh3l_top_13TeV_pt1254->SetBinContent(24,0.006683424);
   new_histo_group_VVV_wh3l_top_13TeV_pt1254->SetBinContent(25,0.01816207);
   new_histo_group_VVV_wh3l_top_13TeV_pt1254->SetBinContent(26,0.1188969);
   new_histo_group_VVV_wh3l_top_13TeV_pt1254->SetBinError(2,0.0006166669);
   new_histo_group_VVV_wh3l_top_13TeV_pt1254->SetBinError(3,0.007766204);
   new_histo_group_VVV_wh3l_top_13TeV_pt1254->SetBinError(4,0.005860343);
   new_histo_group_VVV_wh3l_top_13TeV_pt1254->SetBinError(5,0.006404801);
   new_histo_group_VVV_wh3l_top_13TeV_pt1254->SetBinError(6,0.007440853);
   new_histo_group_VVV_wh3l_top_13TeV_pt1254->SetBinError(7,0.006561096);
   new_histo_group_VVV_wh3l_top_13TeV_pt1254->SetBinError(8,0.007602523);
   new_histo_group_VVV_wh3l_top_13TeV_pt1254->SetBinError(9,0.0101552);
   new_histo_group_VVV_wh3l_top_13TeV_pt1254->SetBinError(10,0.008403411);
   new_histo_group_VVV_wh3l_top_13TeV_pt1254->SetBinError(11,0.008719764);
   new_histo_group_VVV_wh3l_top_13TeV_pt1254->SetBinError(12,0.007075786);
   new_histo_group_VVV_wh3l_top_13TeV_pt1254->SetBinError(13,0.007933186);
   new_histo_group_VVV_wh3l_top_13TeV_pt1254->SetBinError(14,0.006313205);
   new_histo_group_VVV_wh3l_top_13TeV_pt1254->SetBinError(15,0.006520037);
   new_histo_group_VVV_wh3l_top_13TeV_pt1254->SetBinError(16,0.006852226);
   new_histo_group_VVV_wh3l_top_13TeV_pt1254->SetBinError(17,0.008206744);
   new_histo_group_VVV_wh3l_top_13TeV_pt1254->SetBinError(18,0.00802758);
   new_histo_group_VVV_wh3l_top_13TeV_pt1254->SetBinError(19,0.007076536);
   new_histo_group_VVV_wh3l_top_13TeV_pt1254->SetBinError(20,0.006956813);
   new_histo_group_VVV_wh3l_top_13TeV_pt1254->SetBinError(21,0.005350519);
   new_histo_group_VVV_wh3l_top_13TeV_pt1254->SetBinError(22,0.006895916);
   new_histo_group_VVV_wh3l_top_13TeV_pt1254->SetBinError(23,0.004189837);
   new_histo_group_VVV_wh3l_top_13TeV_pt1254->SetBinError(24,0.004341118);
   new_histo_group_VVV_wh3l_top_13TeV_pt1254->SetBinError(25,0.006273568);
   new_histo_group_VVV_wh3l_top_13TeV_pt1254->SetBinError(26,0.01688178);
   new_histo_group_VVV_wh3l_top_13TeV_pt1254->SetEntries(364);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_top_13TeV_pt1254->SetFillColor(ci);
   new_histo_group_VVV_wh3l_top_13TeV_pt1254->SetFillStyle(3001);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_top_13TeV_pt1254->SetLineColor(ci);
   new_histo_group_VVV_wh3l_top_13TeV_pt1254->GetXaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_top_13TeV_pt1254->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_top_13TeV_pt1254->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_top_13TeV_pt1254->GetXaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_top_13TeV_pt1254->GetYaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_top_13TeV_pt1254->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_top_13TeV_pt1254->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_top_13TeV_pt1254->GetYaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_top_13TeV_pt1254->GetZaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_top_13TeV_pt1254->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_top_13TeV_pt1254->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_top_13TeV_pt1254->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_top_13TeV_pt1->Add(new_histo_group_VVV_wh3l_top_13TeV_pt1,"");
   
   TH1D *new_histo_group_Vg_wh3l_top_13TeV_pt1255 = new TH1D("new_histo_group_Vg_wh3l_top_13TeV_pt1255","histo_Vg",25,10,200);
   new_histo_group_Vg_wh3l_top_13TeV_pt1255->SetBinContent(3,0.04591915);
   new_histo_group_Vg_wh3l_top_13TeV_pt1255->SetBinContent(4,0.2463113);
   new_histo_group_Vg_wh3l_top_13TeV_pt1255->SetBinContent(5,0.0182002);
   new_histo_group_Vg_wh3l_top_13TeV_pt1255->SetBinContent(6,0.4574124);
   new_histo_group_Vg_wh3l_top_13TeV_pt1255->SetBinContent(7,0.1493144);
   new_histo_group_Vg_wh3l_top_13TeV_pt1255->SetBinContent(8,0.07232783);
   new_histo_group_Vg_wh3l_top_13TeV_pt1255->SetBinContent(9,-0.06890358);
   new_histo_group_Vg_wh3l_top_13TeV_pt1255->SetBinContent(11,0.1156138);
   new_histo_group_Vg_wh3l_top_13TeV_pt1255->SetBinContent(12,-0.02313529);
   new_histo_group_Vg_wh3l_top_13TeV_pt1255->SetBinContent(15,0.06632758);
   new_histo_group_Vg_wh3l_top_13TeV_pt1255->SetBinContent(17,0.1085778);
   new_histo_group_Vg_wh3l_top_13TeV_pt1255->SetBinContent(19,0.09785095);
   new_histo_group_Vg_wh3l_top_13TeV_pt1255->SetBinContent(26,0.1067996);
   new_histo_group_Vg_wh3l_top_13TeV_pt1255->SetBinError(3,0.1114699);
   new_histo_group_Vg_wh3l_top_13TeV_pt1255->SetBinError(4,0.1751166);
   new_histo_group_Vg_wh3l_top_13TeV_pt1255->SetBinError(5,0.1701309);
   new_histo_group_Vg_wh3l_top_13TeV_pt1255->SetBinError(6,0.2119854);
   new_histo_group_Vg_wh3l_top_13TeV_pt1255->SetBinError(7,0.1255831);
   new_histo_group_Vg_wh3l_top_13TeV_pt1255->SetBinError(8,0.07232783);
   new_histo_group_Vg_wh3l_top_13TeV_pt1255->SetBinError(9,0.1275585);
   new_histo_group_Vg_wh3l_top_13TeV_pt1255->SetBinError(11,0.1156138);
   new_histo_group_Vg_wh3l_top_13TeV_pt1255->SetBinError(12,0.02313529);
   new_histo_group_Vg_wh3l_top_13TeV_pt1255->SetBinError(15,0.06632758);
   new_histo_group_Vg_wh3l_top_13TeV_pt1255->SetBinError(17,0.1085778);
   new_histo_group_Vg_wh3l_top_13TeV_pt1255->SetBinError(19,0.09785095);
   new_histo_group_Vg_wh3l_top_13TeV_pt1255->SetBinError(26,0.1067996);
   new_histo_group_Vg_wh3l_top_13TeV_pt1255->SetEntries(25);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_top_13TeV_pt1255->SetFillColor(ci);
   new_histo_group_Vg_wh3l_top_13TeV_pt1255->SetFillStyle(3001);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_top_13TeV_pt1255->SetLineColor(ci);
   new_histo_group_Vg_wh3l_top_13TeV_pt1255->GetXaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_top_13TeV_pt1255->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_top_13TeV_pt1255->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_top_13TeV_pt1255->GetXaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_top_13TeV_pt1255->GetYaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_top_13TeV_pt1255->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_top_13TeV_pt1255->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_top_13TeV_pt1255->GetYaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_top_13TeV_pt1255->GetZaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_top_13TeV_pt1255->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_top_13TeV_pt1255->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_top_13TeV_pt1255->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_top_13TeV_pt1->Add(new_histo_group_Vg_wh3l_top_13TeV_pt1,"");
   
   TH1D *new_histo_group_ZZ_wh3l_top_13TeV_pt1256 = new TH1D("new_histo_group_ZZ_wh3l_top_13TeV_pt1256","histo_ZZ",25,10,200);
   new_histo_group_ZZ_wh3l_top_13TeV_pt1256->SetBinContent(2,0.04142581);
   new_histo_group_ZZ_wh3l_top_13TeV_pt1256->SetBinContent(4,0.08785785);
   new_histo_group_ZZ_wh3l_top_13TeV_pt1256->SetBinContent(5,0.01751245);
   new_histo_group_ZZ_wh3l_top_13TeV_pt1256->SetBinContent(6,0.159848);
   new_histo_group_ZZ_wh3l_top_13TeV_pt1256->SetBinContent(11,0.04624667);
   new_histo_group_ZZ_wh3l_top_13TeV_pt1256->SetBinContent(12,0.08601038);
   new_histo_group_ZZ_wh3l_top_13TeV_pt1256->SetBinContent(13,0.0476643);
   new_histo_group_ZZ_wh3l_top_13TeV_pt1256->SetBinContent(15,0.02044833);
   new_histo_group_ZZ_wh3l_top_13TeV_pt1256->SetBinContent(18,0.03822494);
   new_histo_group_ZZ_wh3l_top_13TeV_pt1256->SetBinContent(19,0.04545766);
   new_histo_group_ZZ_wh3l_top_13TeV_pt1256->SetBinContent(26,0.08973226);
   new_histo_group_ZZ_wh3l_top_13TeV_pt1256->SetBinError(2,0.04142581);
   new_histo_group_ZZ_wh3l_top_13TeV_pt1256->SetBinError(4,0.0552178);
   new_histo_group_ZZ_wh3l_top_13TeV_pt1256->SetBinError(5,0.01751245);
   new_histo_group_ZZ_wh3l_top_13TeV_pt1256->SetBinError(6,0.08594384);
   new_histo_group_ZZ_wh3l_top_13TeV_pt1256->SetBinError(11,0.04624667);
   new_histo_group_ZZ_wh3l_top_13TeV_pt1256->SetBinError(12,0.06082022);
   new_histo_group_ZZ_wh3l_top_13TeV_pt1256->SetBinError(13,0.0476643);
   new_histo_group_ZZ_wh3l_top_13TeV_pt1256->SetBinError(15,0.02044833);
   new_histo_group_ZZ_wh3l_top_13TeV_pt1256->SetBinError(18,0.03822494);
   new_histo_group_ZZ_wh3l_top_13TeV_pt1256->SetBinError(19,0.04545766);
   new_histo_group_ZZ_wh3l_top_13TeV_pt1256->SetBinError(26,0.06357566);
   new_histo_group_ZZ_wh3l_top_13TeV_pt1256->SetEntries(18);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_top_13TeV_pt1256->SetFillColor(ci);
   new_histo_group_ZZ_wh3l_top_13TeV_pt1256->SetFillStyle(3001);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_top_13TeV_pt1256->SetLineColor(ci);
   new_histo_group_ZZ_wh3l_top_13TeV_pt1256->GetXaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_top_13TeV_pt1256->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_top_13TeV_pt1256->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_top_13TeV_pt1256->GetXaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_top_13TeV_pt1256->GetYaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_top_13TeV_pt1256->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_top_13TeV_pt1256->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_top_13TeV_pt1256->GetYaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_top_13TeV_pt1256->GetZaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_top_13TeV_pt1256->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_top_13TeV_pt1256->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_top_13TeV_pt1256->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_top_13TeV_pt1->Add(new_histo_group_ZZ_wh3l_top_13TeV_pt1,"");
   
   TH1D *new_histo_group_WZ_wh3l_top_13TeV_pt1257 = new TH1D("new_histo_group_WZ_wh3l_top_13TeV_pt1257","histo_WZ",25,10,200);
   new_histo_group_WZ_wh3l_top_13TeV_pt1257->SetBinContent(2,0.2174854);
   new_histo_group_WZ_wh3l_top_13TeV_pt1257->SetBinContent(3,0.5898978);
   new_histo_group_WZ_wh3l_top_13TeV_pt1257->SetBinContent(4,0.662479);
   new_histo_group_WZ_wh3l_top_13TeV_pt1257->SetBinContent(5,0.8310412);
   new_histo_group_WZ_wh3l_top_13TeV_pt1257->SetBinContent(6,0.6482968);
   new_histo_group_WZ_wh3l_top_13TeV_pt1257->SetBinContent(7,0.592627);
   new_histo_group_WZ_wh3l_top_13TeV_pt1257->SetBinContent(8,0.5148446);
   new_histo_group_WZ_wh3l_top_13TeV_pt1257->SetBinContent(9,0.4452681);
   new_histo_group_WZ_wh3l_top_13TeV_pt1257->SetBinContent(10,0.4084912);
   new_histo_group_WZ_wh3l_top_13TeV_pt1257->SetBinContent(11,0.3962891);
   new_histo_group_WZ_wh3l_top_13TeV_pt1257->SetBinContent(12,0.3336481);
   new_histo_group_WZ_wh3l_top_13TeV_pt1257->SetBinContent(13,0.2578152);
   new_histo_group_WZ_wh3l_top_13TeV_pt1257->SetBinContent(14,0.2633364);
   new_histo_group_WZ_wh3l_top_13TeV_pt1257->SetBinContent(15,0.2836645);
   new_histo_group_WZ_wh3l_top_13TeV_pt1257->SetBinContent(16,0.2939553);
   new_histo_group_WZ_wh3l_top_13TeV_pt1257->SetBinContent(17,0.1986913);
   new_histo_group_WZ_wh3l_top_13TeV_pt1257->SetBinContent(18,0.1570508);
   new_histo_group_WZ_wh3l_top_13TeV_pt1257->SetBinContent(19,0.1751324);
   new_histo_group_WZ_wh3l_top_13TeV_pt1257->SetBinContent(20,0.100798);
   new_histo_group_WZ_wh3l_top_13TeV_pt1257->SetBinContent(21,0.09733229);
   new_histo_group_WZ_wh3l_top_13TeV_pt1257->SetBinContent(22,0.05596057);
   new_histo_group_WZ_wh3l_top_13TeV_pt1257->SetBinContent(23,0.07890343);
   new_histo_group_WZ_wh3l_top_13TeV_pt1257->SetBinContent(24,0.1090366);
   new_histo_group_WZ_wh3l_top_13TeV_pt1257->SetBinContent(25,0.1039246);
   new_histo_group_WZ_wh3l_top_13TeV_pt1257->SetBinContent(26,1.051894);
   new_histo_group_WZ_wh3l_top_13TeV_pt1257->SetBinError(2,0.03476505);
   new_histo_group_WZ_wh3l_top_13TeV_pt1257->SetBinError(3,0.05670728);
   new_histo_group_WZ_wh3l_top_13TeV_pt1257->SetBinError(4,0.06006218);
   new_histo_group_WZ_wh3l_top_13TeV_pt1257->SetBinError(5,0.06691215);
   new_histo_group_WZ_wh3l_top_13TeV_pt1257->SetBinError(6,0.05982645);
   new_histo_group_WZ_wh3l_top_13TeV_pt1257->SetBinError(7,0.05644038);
   new_histo_group_WZ_wh3l_top_13TeV_pt1257->SetBinError(8,0.05255448);
   new_histo_group_WZ_wh3l_top_13TeV_pt1257->SetBinError(9,0.04923828);
   new_histo_group_WZ_wh3l_top_13TeV_pt1257->SetBinError(10,0.04741312);
   new_histo_group_WZ_wh3l_top_13TeV_pt1257->SetBinError(11,0.04659962);
   new_histo_group_WZ_wh3l_top_13TeV_pt1257->SetBinError(12,0.04285939);
   new_histo_group_WZ_wh3l_top_13TeV_pt1257->SetBinError(13,0.03743767);
   new_histo_group_WZ_wh3l_top_13TeV_pt1257->SetBinError(14,0.03903624);
   new_histo_group_WZ_wh3l_top_13TeV_pt1257->SetBinError(15,0.03891304);
   new_histo_group_WZ_wh3l_top_13TeV_pt1257->SetBinError(16,0.03995318);
   new_histo_group_WZ_wh3l_top_13TeV_pt1257->SetBinError(17,0.03310814);
   new_histo_group_WZ_wh3l_top_13TeV_pt1257->SetBinError(18,0.02842491);
   new_histo_group_WZ_wh3l_top_13TeV_pt1257->SetBinError(19,0.03123715);
   new_histo_group_WZ_wh3l_top_13TeV_pt1257->SetBinError(20,0.02243665);
   new_histo_group_WZ_wh3l_top_13TeV_pt1257->SetBinError(21,0.02229101);
   new_histo_group_WZ_wh3l_top_13TeV_pt1257->SetBinError(22,0.01693417);
   new_histo_group_WZ_wh3l_top_13TeV_pt1257->SetBinError(23,0.02127065);
   new_histo_group_WZ_wh3l_top_13TeV_pt1257->SetBinError(24,0.02493802);
   new_histo_group_WZ_wh3l_top_13TeV_pt1257->SetBinError(25,0.02355999);
   new_histo_group_WZ_wh3l_top_13TeV_pt1257->SetBinError(26,0.0752247);
   new_histo_group_WZ_wh3l_top_13TeV_pt1257->SetEntries(1805);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_top_13TeV_pt1257->SetFillColor(ci);
   new_histo_group_WZ_wh3l_top_13TeV_pt1257->SetFillStyle(3001);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_top_13TeV_pt1257->SetLineColor(ci);
   new_histo_group_WZ_wh3l_top_13TeV_pt1257->GetXaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_top_13TeV_pt1257->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_top_13TeV_pt1257->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_top_13TeV_pt1257->GetXaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_top_13TeV_pt1257->GetYaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_top_13TeV_pt1257->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_top_13TeV_pt1257->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_top_13TeV_pt1257->GetYaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_top_13TeV_pt1257->GetZaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_top_13TeV_pt1257->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_top_13TeV_pt1257->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_top_13TeV_pt1257->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_top_13TeV_pt1->Add(new_histo_group_WZ_wh3l_top_13TeV_pt1,"");
   
   TH1D *new_histo_group_Higgs_wh3l_top_13TeV_pt1258 = new TH1D("new_histo_group_Higgs_wh3l_top_13TeV_pt1258","histo_H_htt",25,10,200);
   new_histo_group_Higgs_wh3l_top_13TeV_pt1258->SetBinContent(2,0.003788623);
   new_histo_group_Higgs_wh3l_top_13TeV_pt1258->SetBinContent(3,0.01965875);
   new_histo_group_Higgs_wh3l_top_13TeV_pt1258->SetBinContent(4,0.0329307);
   new_histo_group_Higgs_wh3l_top_13TeV_pt1258->SetBinContent(5,0.035789);
   new_histo_group_Higgs_wh3l_top_13TeV_pt1258->SetBinContent(6,0.03015109);
   new_histo_group_Higgs_wh3l_top_13TeV_pt1258->SetBinContent(7,0.04704666);
   new_histo_group_Higgs_wh3l_top_13TeV_pt1258->SetBinContent(8,0.02964433);
   new_histo_group_Higgs_wh3l_top_13TeV_pt1258->SetBinContent(9,0.03552969);
   new_histo_group_Higgs_wh3l_top_13TeV_pt1258->SetBinContent(10,0.0186056);
   new_histo_group_Higgs_wh3l_top_13TeV_pt1258->SetBinContent(11,0.02294084);
   new_histo_group_Higgs_wh3l_top_13TeV_pt1258->SetBinContent(12,0.01084026);
   new_histo_group_Higgs_wh3l_top_13TeV_pt1258->SetBinContent(13,0.01521077);
   new_histo_group_Higgs_wh3l_top_13TeV_pt1258->SetBinContent(14,0.014408);
   new_histo_group_Higgs_wh3l_top_13TeV_pt1258->SetBinContent(15,0.0104082);
   new_histo_group_Higgs_wh3l_top_13TeV_pt1258->SetBinContent(16,0.01197203);
   new_histo_group_Higgs_wh3l_top_13TeV_pt1258->SetBinContent(17,0.01211882);
   new_histo_group_Higgs_wh3l_top_13TeV_pt1258->SetBinContent(18,0.007108391);
   new_histo_group_Higgs_wh3l_top_13TeV_pt1258->SetBinContent(19,0.005429017);
   new_histo_group_Higgs_wh3l_top_13TeV_pt1258->SetBinContent(20,0.006020699);
   new_histo_group_Higgs_wh3l_top_13TeV_pt1258->SetBinContent(21,0.003809854);
   new_histo_group_Higgs_wh3l_top_13TeV_pt1258->SetBinContent(22,0.004283771);
   new_histo_group_Higgs_wh3l_top_13TeV_pt1258->SetBinContent(23,0.001644403);
   new_histo_group_Higgs_wh3l_top_13TeV_pt1258->SetBinContent(24,0.002144072);
   new_histo_group_Higgs_wh3l_top_13TeV_pt1258->SetBinContent(25,0.000933715);
   new_histo_group_Higgs_wh3l_top_13TeV_pt1258->SetBinContent(26,0.02354779);
   new_histo_group_Higgs_wh3l_top_13TeV_pt1258->SetBinError(2,0.001418711);
   new_histo_group_Higgs_wh3l_top_13TeV_pt1258->SetBinError(3,0.004747864);
   new_histo_group_Higgs_wh3l_top_13TeV_pt1258->SetBinError(4,0.005870027);
   new_histo_group_Higgs_wh3l_top_13TeV_pt1258->SetBinError(5,0.005959516);
   new_histo_group_Higgs_wh3l_top_13TeV_pt1258->SetBinError(6,0.005319218);
   new_histo_group_Higgs_wh3l_top_13TeV_pt1258->SetBinError(7,0.007126711);
   new_histo_group_Higgs_wh3l_top_13TeV_pt1258->SetBinError(8,0.005550169);
   new_histo_group_Higgs_wh3l_top_13TeV_pt1258->SetBinError(9,0.006300966);
   new_histo_group_Higgs_wh3l_top_13TeV_pt1258->SetBinError(10,0.004667322);
   new_histo_group_Higgs_wh3l_top_13TeV_pt1258->SetBinError(11,0.005012814);
   new_histo_group_Higgs_wh3l_top_13TeV_pt1258->SetBinError(12,0.002930478);
   new_histo_group_Higgs_wh3l_top_13TeV_pt1258->SetBinError(13,0.003531229);
   new_histo_group_Higgs_wh3l_top_13TeV_pt1258->SetBinError(14,0.003970878);
   new_histo_group_Higgs_wh3l_top_13TeV_pt1258->SetBinError(15,0.00277951);
   new_histo_group_Higgs_wh3l_top_13TeV_pt1258->SetBinError(16,0.00349849);
   new_histo_group_Higgs_wh3l_top_13TeV_pt1258->SetBinError(17,0.003589533);
   new_histo_group_Higgs_wh3l_top_13TeV_pt1258->SetBinError(18,0.002743298);
   new_histo_group_Higgs_wh3l_top_13TeV_pt1258->SetBinError(19,0.001937171);
   new_histo_group_Higgs_wh3l_top_13TeV_pt1258->SetBinError(20,0.001933788);
   new_histo_group_Higgs_wh3l_top_13TeV_pt1258->SetBinError(21,0.002095324);
   new_histo_group_Higgs_wh3l_top_13TeV_pt1258->SetBinError(22,0.001685679);
   new_histo_group_Higgs_wh3l_top_13TeV_pt1258->SetBinError(23,0.0008165659);
   new_histo_group_Higgs_wh3l_top_13TeV_pt1258->SetBinError(24,0.001664938);
   new_histo_group_Higgs_wh3l_top_13TeV_pt1258->SetBinError(25,0.0005925358);
   new_histo_group_Higgs_wh3l_top_13TeV_pt1258->SetBinError(26,0.004506832);
   new_histo_group_Higgs_wh3l_top_13TeV_pt1258->SetEntries(723);
   new_histo_group_Higgs_wh3l_top_13TeV_pt1258->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_top_13TeV_pt1258->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_top_13TeV_pt1258->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_top_13TeV_pt1258->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_top_13TeV_pt1258->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_top_13TeV_pt1258->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_top_13TeV_pt1258->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_top_13TeV_pt1258->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_top_13TeV_pt1258->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_top_13TeV_pt1258->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_top_13TeV_pt1258->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_top_13TeV_pt1258->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_top_13TeV_pt1258->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_top_13TeV_pt1258->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_top_13TeV_pt1258->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_top_13TeV_pt1->Add(new_histo_group_Higgs_wh3l_top_13TeV_pt1,"");
   thsBackground_grouped_wh3l_top_13TeV_pt1->Draw("hist same");
   
   thsSignal_grouped_wh3l_top_13TeV_pt1 = new THStack();
   thsSignal_grouped_wh3l_top_13TeV_pt1->SetName("thsSignal_grouped_wh3l_top_13TeV_pt1");
   thsSignal_grouped_wh3l_top_13TeV_pt1->SetTitle("thsSignal_grouped_wh3l_top_13TeV_pt1");
   
   TH1F *thsSignal_grouped_wh3l_top_13TeV_pt1_stack_52 = new TH1F("thsSignal_grouped_wh3l_top_13TeV_pt1_stack_52","thsSignal_grouped_wh3l_top_13TeV_pt1",25,10,200);
   thsSignal_grouped_wh3l_top_13TeV_pt1_stack_52->SetMinimum(0);
   thsSignal_grouped_wh3l_top_13TeV_pt1_stack_52->SetMaximum(0.05688204);
   thsSignal_grouped_wh3l_top_13TeV_pt1_stack_52->SetDirectory(0);
   thsSignal_grouped_wh3l_top_13TeV_pt1_stack_52->SetStats(0);
   thsSignal_grouped_wh3l_top_13TeV_pt1_stack_52->SetLineStyle(0);
   thsSignal_grouped_wh3l_top_13TeV_pt1_stack_52->SetMarkerStyle(20);
   thsSignal_grouped_wh3l_top_13TeV_pt1_stack_52->GetXaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_top_13TeV_pt1_stack_52->GetXaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_top_13TeV_pt1_stack_52->GetXaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_top_13TeV_pt1_stack_52->GetXaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_top_13TeV_pt1_stack_52->GetXaxis()->SetTitleOffset(0.9);
   thsSignal_grouped_wh3l_top_13TeV_pt1_stack_52->GetXaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_top_13TeV_pt1_stack_52->GetYaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_top_13TeV_pt1_stack_52->GetYaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_top_13TeV_pt1_stack_52->GetYaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_top_13TeV_pt1_stack_52->GetYaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_top_13TeV_pt1_stack_52->GetYaxis()->SetTitleOffset(1.25);
   thsSignal_grouped_wh3l_top_13TeV_pt1_stack_52->GetYaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_top_13TeV_pt1_stack_52->GetZaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_top_13TeV_pt1_stack_52->GetZaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_top_13TeV_pt1_stack_52->GetZaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_top_13TeV_pt1_stack_52->GetZaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_top_13TeV_pt1_stack_52->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_top_13TeV_pt1->SetHistogram(thsSignal_grouped_wh3l_top_13TeV_pt1_stack_52);
   
   
   TH1D *new_histo_group_Higgs_wh3l_top_13TeV_pt1259 = new TH1D("new_histo_group_Higgs_wh3l_top_13TeV_pt1259","histo_H_htt",25,10,200);
   new_histo_group_Higgs_wh3l_top_13TeV_pt1259->SetBinContent(2,0.003788623);
   new_histo_group_Higgs_wh3l_top_13TeV_pt1259->SetBinContent(3,0.01965875);
   new_histo_group_Higgs_wh3l_top_13TeV_pt1259->SetBinContent(4,0.0329307);
   new_histo_group_Higgs_wh3l_top_13TeV_pt1259->SetBinContent(5,0.035789);
   new_histo_group_Higgs_wh3l_top_13TeV_pt1259->SetBinContent(6,0.03015109);
   new_histo_group_Higgs_wh3l_top_13TeV_pt1259->SetBinContent(7,0.04704666);
   new_histo_group_Higgs_wh3l_top_13TeV_pt1259->SetBinContent(8,0.02964433);
   new_histo_group_Higgs_wh3l_top_13TeV_pt1259->SetBinContent(9,0.03552969);
   new_histo_group_Higgs_wh3l_top_13TeV_pt1259->SetBinContent(10,0.0186056);
   new_histo_group_Higgs_wh3l_top_13TeV_pt1259->SetBinContent(11,0.02294084);
   new_histo_group_Higgs_wh3l_top_13TeV_pt1259->SetBinContent(12,0.01084026);
   new_histo_group_Higgs_wh3l_top_13TeV_pt1259->SetBinContent(13,0.01521077);
   new_histo_group_Higgs_wh3l_top_13TeV_pt1259->SetBinContent(14,0.014408);
   new_histo_group_Higgs_wh3l_top_13TeV_pt1259->SetBinContent(15,0.0104082);
   new_histo_group_Higgs_wh3l_top_13TeV_pt1259->SetBinContent(16,0.01197203);
   new_histo_group_Higgs_wh3l_top_13TeV_pt1259->SetBinContent(17,0.01211882);
   new_histo_group_Higgs_wh3l_top_13TeV_pt1259->SetBinContent(18,0.007108391);
   new_histo_group_Higgs_wh3l_top_13TeV_pt1259->SetBinContent(19,0.005429017);
   new_histo_group_Higgs_wh3l_top_13TeV_pt1259->SetBinContent(20,0.006020699);
   new_histo_group_Higgs_wh3l_top_13TeV_pt1259->SetBinContent(21,0.003809854);
   new_histo_group_Higgs_wh3l_top_13TeV_pt1259->SetBinContent(22,0.004283771);
   new_histo_group_Higgs_wh3l_top_13TeV_pt1259->SetBinContent(23,0.001644403);
   new_histo_group_Higgs_wh3l_top_13TeV_pt1259->SetBinContent(24,0.002144072);
   new_histo_group_Higgs_wh3l_top_13TeV_pt1259->SetBinContent(25,0.000933715);
   new_histo_group_Higgs_wh3l_top_13TeV_pt1259->SetBinContent(26,0.02354779);
   new_histo_group_Higgs_wh3l_top_13TeV_pt1259->SetBinError(2,0.001418711);
   new_histo_group_Higgs_wh3l_top_13TeV_pt1259->SetBinError(3,0.004747864);
   new_histo_group_Higgs_wh3l_top_13TeV_pt1259->SetBinError(4,0.005870027);
   new_histo_group_Higgs_wh3l_top_13TeV_pt1259->SetBinError(5,0.005959516);
   new_histo_group_Higgs_wh3l_top_13TeV_pt1259->SetBinError(6,0.005319218);
   new_histo_group_Higgs_wh3l_top_13TeV_pt1259->SetBinError(7,0.007126711);
   new_histo_group_Higgs_wh3l_top_13TeV_pt1259->SetBinError(8,0.005550169);
   new_histo_group_Higgs_wh3l_top_13TeV_pt1259->SetBinError(9,0.006300966);
   new_histo_group_Higgs_wh3l_top_13TeV_pt1259->SetBinError(10,0.004667322);
   new_histo_group_Higgs_wh3l_top_13TeV_pt1259->SetBinError(11,0.005012814);
   new_histo_group_Higgs_wh3l_top_13TeV_pt1259->SetBinError(12,0.002930478);
   new_histo_group_Higgs_wh3l_top_13TeV_pt1259->SetBinError(13,0.003531229);
   new_histo_group_Higgs_wh3l_top_13TeV_pt1259->SetBinError(14,0.003970878);
   new_histo_group_Higgs_wh3l_top_13TeV_pt1259->SetBinError(15,0.00277951);
   new_histo_group_Higgs_wh3l_top_13TeV_pt1259->SetBinError(16,0.00349849);
   new_histo_group_Higgs_wh3l_top_13TeV_pt1259->SetBinError(17,0.003589533);
   new_histo_group_Higgs_wh3l_top_13TeV_pt1259->SetBinError(18,0.002743298);
   new_histo_group_Higgs_wh3l_top_13TeV_pt1259->SetBinError(19,0.001937171);
   new_histo_group_Higgs_wh3l_top_13TeV_pt1259->SetBinError(20,0.001933788);
   new_histo_group_Higgs_wh3l_top_13TeV_pt1259->SetBinError(21,0.002095324);
   new_histo_group_Higgs_wh3l_top_13TeV_pt1259->SetBinError(22,0.001685679);
   new_histo_group_Higgs_wh3l_top_13TeV_pt1259->SetBinError(23,0.0008165659);
   new_histo_group_Higgs_wh3l_top_13TeV_pt1259->SetBinError(24,0.001664938);
   new_histo_group_Higgs_wh3l_top_13TeV_pt1259->SetBinError(25,0.0005925358);
   new_histo_group_Higgs_wh3l_top_13TeV_pt1259->SetBinError(26,0.004506832);
   new_histo_group_Higgs_wh3l_top_13TeV_pt1259->SetEntries(723);
   new_histo_group_Higgs_wh3l_top_13TeV_pt1259->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_top_13TeV_pt1259->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_top_13TeV_pt1259->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_top_13TeV_pt1259->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_top_13TeV_pt1259->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_top_13TeV_pt1259->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_top_13TeV_pt1259->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_top_13TeV_pt1259->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_top_13TeV_pt1259->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_top_13TeV_pt1259->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_top_13TeV_pt1259->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_top_13TeV_pt1259->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_top_13TeV_pt1259->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_top_13TeV_pt1259->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_top_13TeV_pt1259->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_top_13TeV_pt1->Add(new_histo_group_Higgs_wh3l_top_13TeV_pt1,"");
   thsSignal_grouped_wh3l_top_13TeV_pt1->Draw("hist same noclear");
   
   Double_t _fx3051[25] = {
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
   Double_t _fy3051[25] = {
   0,
   1.22875,
   4.650951,
   6.101985,
   5.388672,
   4.918904,
   4.417753,
   3.734127,
   2.949363,
   1.764497,
   2.099672,
   1.263053,
   1.392787,
   2.40778,
   0.852922,
   0.9547087,
   0.6782963,
   0.3001074,
   0.3506496,
   0.5919338,
   0.1109311,
   0.1535517,
   0.04620815,
   0.3560629,
   0.2306707};
   Double_t _felx3051[25] = {
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
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
   Double_t _fely3051[25] = {
   0,
   0.9565105,
   2.223188,
   2.681165,
   2.382041,
   2.263576,
   1.936671,
   1.80799,
   1.705559,
   0.8794991,
   1.044174,
   0.6029113,
   0.7957033,
   1.344537,
   0.5632886,
   0.7198097,
   0.4281643,
   0.1682058,
   0.1934336,
   0.4955567,
   0.03071768,
   0.1061774,
   0.06354027,
   0.2291587,
   0.1178662};
   Double_t _fehx3051[25] = {
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
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
   Double_t _fehy3051[25] = {
   0,
   0.9565178,
   2.274514,
   2.681187,
   2.497933,
   2.263468,
   1.936663,
   1.807971,
   1.655739,
   0.8794799,
   1.044162,
   0.6028857,
   0.7956645,
   1.344533,
   0.5632602,
   0.776925,
   0.4281097,
   0.1864412,
   0.1933806,
   0.4955497,
   0.0305606,
   0.1061624,
   0.06350709,
   0.2291512,
   0.117842};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(25,_fx3051,_fy3051,_felx3051,_fehx3051,_fely3051,_fehy3051);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(12);
   grae->SetFillStyle(3004);
   grae->SetLineColor(12);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3051 = new TH1F("Graph_Graph3051","",100,0,219);
   Graph_Graph3051->SetMinimum(-0.8973826);
   Graph_Graph3051->SetMaximum(9.663223);
   Graph_Graph3051->SetDirectory(0);
   Graph_Graph3051->SetStats(0);
   Graph_Graph3051->SetLineStyle(0);
   Graph_Graph3051->SetMarkerStyle(20);
   Graph_Graph3051->GetXaxis()->SetLabelFont(42);
   Graph_Graph3051->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3051->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3051->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3051->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3051->GetXaxis()->SetTitleFont(42);
   Graph_Graph3051->GetYaxis()->SetLabelFont(42);
   Graph_Graph3051->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3051->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3051->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3051->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3051->GetYaxis()->SetTitleFont(42);
   Graph_Graph3051->GetZaxis()->SetLabelFont(42);
   Graph_Graph3051->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3051->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3051->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3051->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3051);
   
   grae->Draw("2");
   
   Double_t _fx3052[25] = {
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
   Double_t _fy3052[25] = {
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
   Double_t _felx3052[25] = {
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
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
   Double_t _fely3052[25] = {
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
   Double_t _fehx3052[25] = {
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
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
   Double_t _fehy3052[25] = {
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
   grae = new TGraphAsymmErrors(25,_fx3052,_fy3052,_felx3052,_fehx3052,_fely3052,_fehy3052);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(1);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3052 = new TH1F("Graph_Graph3052","",100,0,219);
   Graph_Graph3052->SetMinimum(0);
   Graph_Graph3052->SetMaximum(13.13974);
   Graph_Graph3052->SetDirectory(0);
   Graph_Graph3052->SetStats(0);
   Graph_Graph3052->SetLineStyle(0);
   Graph_Graph3052->SetMarkerStyle(20);
   Graph_Graph3052->GetXaxis()->SetLabelFont(42);
   Graph_Graph3052->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3052->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3052->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3052->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3052->GetXaxis()->SetTitleFont(42);
   Graph_Graph3052->GetYaxis()->SetLabelFont(42);
   Graph_Graph3052->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3052->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3052->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3052->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3052->GetYaxis()->SetTitleFont(42);
   Graph_Graph3052->GetZaxis()->SetLabelFont(42);
   Graph_Graph3052->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3052->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3052->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3052->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3052);
   
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
   
   TH1F *hframe_copy260 = new TH1F("hframe_copy260","",1000,10,200);
   hframe_copy260->SetMinimum(0);
   hframe_copy260->SetMaximum(27.07107);
   hframe_copy260->SetDirectory(0);
   hframe_copy260->SetStats(0);
   hframe_copy260->SetLineStyle(0);
   hframe_copy260->SetMarkerStyle(20);
   hframe_copy260->GetXaxis()->SetTitle("lept1_p_{T} [GeV]");
   hframe_copy260->GetXaxis()->SetNdivisions(506);
   hframe_copy260->GetXaxis()->SetLabelFont(42);
   hframe_copy260->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy260->GetXaxis()->SetLabelSize(0.05);
   hframe_copy260->GetXaxis()->SetTitleSize(0.06);
   hframe_copy260->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy260->GetXaxis()->SetTitleFont(42);
   hframe_copy260->GetYaxis()->SetTitle("Events");
   hframe_copy260->GetYaxis()->SetLabelFont(42);
   hframe_copy260->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy260->GetYaxis()->SetLabelSize(0.05);
   hframe_copy260->GetYaxis()->SetTitleSize(0.06);
   hframe_copy260->GetYaxis()->SetTitleOffset(1.25);
   hframe_copy260->GetYaxis()->SetTitleFont(42);
   hframe_copy260->GetZaxis()->SetLabelFont(42);
   hframe_copy260->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy260->GetZaxis()->SetLabelSize(0.05);
   hframe_copy260->GetZaxis()->SetTitleSize(0.06);
   hframe_copy260->GetZaxis()->SetTitleFont(42);
   hframe_copy260->Draw("sameaxis");
   ccwh3l_top_13TeV_pt1->Modified();
   ccwh3l_top_13TeV_pt1->cd();
   ccwh3l_top_13TeV_pt1->SetSelected(ccwh3l_top_13TeV_pt1);
}
