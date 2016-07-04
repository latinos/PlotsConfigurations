void c_wh3l_Pre_13TeV_pt1()
{
//=========Macro generated from canvas: ccwh3l_Pre_13TeV_pt1/cc
//=========  (Sun Jul  3 01:22:09 2016) by ROOT version6.02/13
   TCanvas *ccwh3l_Pre_13TeV_pt1 = new TCanvas("ccwh3l_Pre_13TeV_pt1", "cc",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   ccwh3l_Pre_13TeV_pt1->SetHighLightColor(2);
   ccwh3l_Pre_13TeV_pt1->Range(-28,-2.378049,209.5,15.91463);
   ccwh3l_Pre_13TeV_pt1->SetFillColor(0);
   ccwh3l_Pre_13TeV_pt1->SetBorderMode(0);
   ccwh3l_Pre_13TeV_pt1->SetBorderSize(2);
   ccwh3l_Pre_13TeV_pt1->SetTickx(1);
   ccwh3l_Pre_13TeV_pt1->SetTicky(1);
   ccwh3l_Pre_13TeV_pt1->SetLeftMargin(0.16);
   ccwh3l_Pre_13TeV_pt1->SetRightMargin(0.04);
   ccwh3l_Pre_13TeV_pt1->SetTopMargin(0.05);
   ccwh3l_Pre_13TeV_pt1->SetBottomMargin(0.13);
   ccwh3l_Pre_13TeV_pt1->SetFrameFillStyle(0);
   ccwh3l_Pre_13TeV_pt1->SetFrameBorderMode(0);
   ccwh3l_Pre_13TeV_pt1->SetFrameFillStyle(0);
   ccwh3l_Pre_13TeV_pt1->SetFrameBorderMode(0);
   
   TH1F *hframe381 = new TH1F("hframe381","",1000,10,200);
   hframe381->SetMinimum(0);
   hframe381->SetMaximum(15);
   hframe381->SetDirectory(0);
   hframe381->SetStats(0);
   hframe381->SetLineStyle(0);
   hframe381->SetMarkerStyle(20);
   hframe381->GetXaxis()->SetTitle("lept1_p_{T} [GeV]");
   hframe381->GetXaxis()->SetNdivisions(506);
   hframe381->GetXaxis()->SetLabelFont(42);
   hframe381->GetXaxis()->SetLabelOffset(0.007);
   hframe381->GetXaxis()->SetLabelSize(0.05);
   hframe381->GetXaxis()->SetTitleSize(0.06);
   hframe381->GetXaxis()->SetTitleOffset(0.9);
   hframe381->GetXaxis()->SetTitleFont(42);
   hframe381->GetYaxis()->SetTitle("Events");
   hframe381->GetYaxis()->SetLabelFont(42);
   hframe381->GetYaxis()->SetLabelOffset(0.007);
   hframe381->GetYaxis()->SetLabelSize(0.05);
   hframe381->GetYaxis()->SetTitleSize(0.06);
   hframe381->GetYaxis()->SetTitleOffset(1.25);
   hframe381->GetYaxis()->SetTitleFont(42);
   hframe381->GetZaxis()->SetLabelFont(42);
   hframe381->GetZaxis()->SetLabelOffset(0.007);
   hframe381->GetZaxis()->SetLabelSize(0.05);
   hframe381->GetZaxis()->SetTitleSize(0.06);
   hframe381->GetZaxis()->SetTitleFont(42);
   hframe381->Draw(" ");
   
   THStack *thsBackground_grouped_wh3l_Pre_13TeV_pt1 = new THStack();
   thsBackground_grouped_wh3l_Pre_13TeV_pt1->SetName("thsBackground_grouped_wh3l_Pre_13TeV_pt1");
   thsBackground_grouped_wh3l_Pre_13TeV_pt1->SetTitle("thsBackground_grouped_wh3l_Pre_13TeV_pt1");
   
   TH1F *thsBackground_grouped_wh3l_Pre_13TeV_pt1_stack_77 = new TH1F("thsBackground_grouped_wh3l_Pre_13TeV_pt1_stack_77","thsBackground_grouped_wh3l_Pre_13TeV_pt1",25,10,200);
   thsBackground_grouped_wh3l_Pre_13TeV_pt1_stack_77->SetMinimum(-0.5419114);
   thsBackground_grouped_wh3l_Pre_13TeV_pt1_stack_77->SetMaximum(5.98926);
   thsBackground_grouped_wh3l_Pre_13TeV_pt1_stack_77->SetDirectory(0);
   thsBackground_grouped_wh3l_Pre_13TeV_pt1_stack_77->SetStats(0);
   thsBackground_grouped_wh3l_Pre_13TeV_pt1_stack_77->SetLineStyle(0);
   thsBackground_grouped_wh3l_Pre_13TeV_pt1_stack_77->SetMarkerStyle(20);
   thsBackground_grouped_wh3l_Pre_13TeV_pt1_stack_77->GetXaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_Pre_13TeV_pt1_stack_77->GetXaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_Pre_13TeV_pt1_stack_77->GetXaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_Pre_13TeV_pt1_stack_77->GetXaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_Pre_13TeV_pt1_stack_77->GetXaxis()->SetTitleOffset(0.9);
   thsBackground_grouped_wh3l_Pre_13TeV_pt1_stack_77->GetXaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_Pre_13TeV_pt1_stack_77->GetYaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_Pre_13TeV_pt1_stack_77->GetYaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_Pre_13TeV_pt1_stack_77->GetYaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_Pre_13TeV_pt1_stack_77->GetYaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_Pre_13TeV_pt1_stack_77->GetYaxis()->SetTitleOffset(1.25);
   thsBackground_grouped_wh3l_Pre_13TeV_pt1_stack_77->GetYaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_Pre_13TeV_pt1_stack_77->GetZaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_Pre_13TeV_pt1_stack_77->GetZaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_Pre_13TeV_pt1_stack_77->GetZaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_Pre_13TeV_pt1_stack_77->GetZaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_Pre_13TeV_pt1_stack_77->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_Pre_13TeV_pt1->SetHistogram(thsBackground_grouped_wh3l_Pre_13TeV_pt1_stack_77);
   
   
   TH1D *new_histo_group_Fake_wh3l_Pre_13TeV_pt1382 = new TH1D("new_histo_group_Fake_wh3l_Pre_13TeV_pt1382","histo_Fake",25,10,200);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt1382->SetBinContent(2,0.3761437);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt1382->SetBinContent(3,2.121609);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt1382->SetBinContent(4,0.8039696);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt1382->SetBinContent(5,2.777047);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt1382->SetBinContent(6,2.207696);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt1382->SetBinContent(7,1.217623);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt1382->SetBinContent(8,4.234241);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt1382->SetBinContent(9,2.933837);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt1382->SetBinContent(10,0.960023);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt1382->SetBinContent(11,0.2537295);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt1382->SetBinContent(12,0.4904303);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt1382->SetBinContent(13,0.7891273);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt1382->SetBinContent(14,1.255718);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt1382->SetBinContent(15,0.4584995);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt1382->SetBinContent(16,-0.2275675);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt1382->SetBinContent(17,0.57359);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt1382->SetBinContent(18,-0.006113645);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt1382->SetBinContent(20,0.03422724);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt1382->SetBinContent(22,6.571058e-05);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt1382->SetBinContent(23,-0.005115197);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt1382->SetBinContent(24,0.2256032);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt1382->SetBinContent(25,0.1345139);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt1382->SetBinContent(26,0.5510045);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt1382->SetBinError(2,0.436215);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt1382->SetBinError(3,1.11551);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt1382->SetBinError(4,0.8787496);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt1382->SetBinError(5,1.196954);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt1382->SetBinError(6,0.9494441);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt1382->SetBinError(7,0.6771127);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt1382->SetBinError(8,1.469816);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt1382->SetBinError(9,1.115216);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt1382->SetBinError(10,0.5800323);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt1382->SetBinError(11,0.167066);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt1382->SetBinError(12,0.3476264);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt1382->SetBinError(13,0.509846);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt1382->SetBinError(14,0.7135046);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt1382->SetBinError(15,0.3726371);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt1382->SetBinError(16,0.1992443);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt1382->SetBinError(17,0.2955747);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt1382->SetBinError(18,0.005580805);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt1382->SetBinError(20,0.03799332);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt1382->SetBinError(22,6.571058e-05);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt1382->SetBinError(23,0.005115197);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt1382->SetBinError(24,0.184343);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt1382->SetBinError(25,0.1345139);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt1382->SetBinError(26,0.4498633);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt1382->SetEntries(191);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_Pre_13TeV_pt1382->SetFillColor(ci);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt1382->SetFillStyle(3001);

   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_Pre_13TeV_pt1382->SetLineColor(ci);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt1382->GetXaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt1382->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt1382->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt1382->GetXaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt1382->GetYaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt1382->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt1382->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt1382->GetYaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt1382->GetZaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt1382->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt1382->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt1382->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_Pre_13TeV_pt1->Add(new_histo_group_Fake_wh3l_Pre_13TeV_pt1,"");
   
   TH1D *new_histo_group_WW_wh3l_Pre_13TeV_pt1383 = new TH1D("new_histo_group_WW_wh3l_Pre_13TeV_pt1383","histo_WW",25,10,200);
   new_histo_group_WW_wh3l_Pre_13TeV_pt1383->SetBinContent(3,0.0161241);
   new_histo_group_WW_wh3l_Pre_13TeV_pt1383->SetBinContent(4,0.01528641);
   new_histo_group_WW_wh3l_Pre_13TeV_pt1383->SetBinContent(5,0.01708511);
   new_histo_group_WW_wh3l_Pre_13TeV_pt1383->SetBinContent(6,0.007480974);
   new_histo_group_WW_wh3l_Pre_13TeV_pt1383->SetBinContent(7,0.0433031);
   new_histo_group_WW_wh3l_Pre_13TeV_pt1383->SetBinContent(8,0.0175301);
   new_histo_group_WW_wh3l_Pre_13TeV_pt1383->SetBinContent(10,0.03255226);
   new_histo_group_WW_wh3l_Pre_13TeV_pt1383->SetBinContent(12,0.01433758);
   new_histo_group_WW_wh3l_Pre_13TeV_pt1383->SetBinContent(26,0.03179296);
   new_histo_group_WW_wh3l_Pre_13TeV_pt1383->SetBinError(3,0.0161241);
   new_histo_group_WW_wh3l_Pre_13TeV_pt1383->SetBinError(4,0.01528641);
   new_histo_group_WW_wh3l_Pre_13TeV_pt1383->SetBinError(5,0.01708511);
   new_histo_group_WW_wh3l_Pre_13TeV_pt1383->SetBinError(6,0.005383744);
   new_histo_group_WW_wh3l_Pre_13TeV_pt1383->SetBinError(7,0.02549669);
   new_histo_group_WW_wh3l_Pre_13TeV_pt1383->SetBinError(8,0.0175301);
   new_histo_group_WW_wh3l_Pre_13TeV_pt1383->SetBinError(10,0.02302658);
   new_histo_group_WW_wh3l_Pre_13TeV_pt1383->SetBinError(12,0.01433758);
   new_histo_group_WW_wh3l_Pre_13TeV_pt1383->SetBinError(26,0.02248916);
   new_histo_group_WW_wh3l_Pre_13TeV_pt1383->SetEntries(14);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_Pre_13TeV_pt1383->SetFillColor(ci);
   new_histo_group_WW_wh3l_Pre_13TeV_pt1383->SetFillStyle(3001);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_Pre_13TeV_pt1383->SetLineColor(ci);
   new_histo_group_WW_wh3l_Pre_13TeV_pt1383->GetXaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_Pre_13TeV_pt1383->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_Pre_13TeV_pt1383->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_Pre_13TeV_pt1383->GetXaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_Pre_13TeV_pt1383->GetYaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_Pre_13TeV_pt1383->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_Pre_13TeV_pt1383->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_Pre_13TeV_pt1383->GetYaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_Pre_13TeV_pt1383->GetZaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_Pre_13TeV_pt1383->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_Pre_13TeV_pt1383->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_Pre_13TeV_pt1383->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_Pre_13TeV_pt1->Add(new_histo_group_WW_wh3l_Pre_13TeV_pt1,"");
   
   TH1D *new_histo_group_VVV_wh3l_Pre_13TeV_pt1384 = new TH1D("new_histo_group_VVV_wh3l_Pre_13TeV_pt1384","histo_VVV",25,10,200);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt1384->SetBinContent(3,0.01218061);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt1384->SetBinContent(4,0.01620826);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt1384->SetBinContent(5,0.02778481);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt1384->SetBinContent(6,0.02374657);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt1384->SetBinContent(7,0.01388018);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt1384->SetBinContent(8,0.03175143);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt1384->SetBinContent(9,0.03502816);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt1384->SetBinContent(10,0.01600005);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt1384->SetBinContent(11,0.01278067);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt1384->SetBinContent(12,0.0191256);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt1384->SetBinContent(13,0.02041954);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt1384->SetBinContent(14,0.01024794);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt1384->SetBinContent(15,0.00932541);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt1384->SetBinContent(16,0.01458342);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt1384->SetBinContent(17,0.01778976);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt1384->SetBinContent(18,0.004932611);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt1384->SetBinContent(19,0.01160141);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt1384->SetBinContent(20,0.005047778);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt1384->SetBinContent(22,0.007798111);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt1384->SetBinContent(23,0.002177031);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt1384->SetBinContent(24,0.004641064);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt1384->SetBinContent(25,0.008998674);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt1384->SetBinContent(26,0.04202677);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt1384->SetBinError(3,0.005484821);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt1384->SetBinError(4,0.006162227);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt1384->SetBinError(5,0.008064033);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt1384->SetBinError(6,0.008212416);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt1384->SetBinError(7,0.008354166);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt1384->SetBinError(8,0.008046086);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt1384->SetBinError(9,0.00889981);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt1384->SetBinError(10,0.007614993);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt1384->SetBinError(11,0.006527506);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt1384->SetBinError(12,0.006769583);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt1384->SetBinError(13,0.0082594);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt1384->SetBinError(14,0.005137827);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt1384->SetBinError(15,0.004295352);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt1384->SetBinError(16,0.005734423);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt1384->SetBinError(17,0.007141106);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt1384->SetBinError(18,0.006532132);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt1384->SetBinError(19,0.005248276);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt1384->SetBinError(20,0.004991515);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt1384->SetBinError(22,0.004146286);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt1384->SetBinError(23,0.001744138);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt1384->SetBinError(24,0.002611001);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt1384->SetBinError(25,0.004534308);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt1384->SetBinError(26,0.009445708);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt1384->SetEntries(227);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_Pre_13TeV_pt1384->SetFillColor(ci);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt1384->SetFillStyle(3001);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_Pre_13TeV_pt1384->SetLineColor(ci);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt1384->GetXaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt1384->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt1384->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt1384->GetXaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt1384->GetYaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt1384->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt1384->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt1384->GetYaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt1384->GetZaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt1384->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt1384->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt1384->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_Pre_13TeV_pt1->Add(new_histo_group_VVV_wh3l_Pre_13TeV_pt1,"");
   
   TH1D *new_histo_group_Vg_wh3l_Pre_13TeV_pt1385 = new TH1D("new_histo_group_Vg_wh3l_Pre_13TeV_pt1385","histo_Vg",25,10,200);
   new_histo_group_Vg_wh3l_Pre_13TeV_pt1385->SetBinContent(2,0.0133264);
   new_histo_group_Vg_wh3l_Pre_13TeV_pt1385->SetBinContent(3,0.2390195);
   new_histo_group_Vg_wh3l_Pre_13TeV_pt1385->SetBinContent(5,-0.3431277);
   new_histo_group_Vg_wh3l_Pre_13TeV_pt1385->SetBinContent(6,0.0522728);
   new_histo_group_Vg_wh3l_Pre_13TeV_pt1385->SetBinContent(7,0.122739);
   new_histo_group_Vg_wh3l_Pre_13TeV_pt1385->SetBinContent(10,0.1156486);
   new_histo_group_Vg_wh3l_Pre_13TeV_pt1385->SetBinError(2,0.0133264);
   new_histo_group_Vg_wh3l_Pre_13TeV_pt1385->SetBinError(3,0.1440293);
   new_histo_group_Vg_wh3l_Pre_13TeV_pt1385->SetBinError(5,0.1987837);
   new_histo_group_Vg_wh3l_Pre_13TeV_pt1385->SetBinError(6,0.0522728);
   new_histo_group_Vg_wh3l_Pre_13TeV_pt1385->SetBinError(7,0.122739);
   new_histo_group_Vg_wh3l_Pre_13TeV_pt1385->SetBinError(10,0.1156486);
   new_histo_group_Vg_wh3l_Pre_13TeV_pt1385->SetEntries(10);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_Pre_13TeV_pt1385->SetFillColor(ci);
   new_histo_group_Vg_wh3l_Pre_13TeV_pt1385->SetFillStyle(3001);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_Pre_13TeV_pt1385->SetLineColor(ci);
   new_histo_group_Vg_wh3l_Pre_13TeV_pt1385->GetXaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_Pre_13TeV_pt1385->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_Pre_13TeV_pt1385->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_Pre_13TeV_pt1385->GetXaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_Pre_13TeV_pt1385->GetYaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_Pre_13TeV_pt1385->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_Pre_13TeV_pt1385->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_Pre_13TeV_pt1385->GetYaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_Pre_13TeV_pt1385->GetZaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_Pre_13TeV_pt1385->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_Pre_13TeV_pt1385->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_Pre_13TeV_pt1385->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_Pre_13TeV_pt1->Add(new_histo_group_Vg_wh3l_Pre_13TeV_pt1,"");
   
   TH1D *new_histo_group_ZZ_wh3l_Pre_13TeV_pt1386 = new TH1D("new_histo_group_ZZ_wh3l_Pre_13TeV_pt1386","histo_ZZ",25,10,200);
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt1386->SetBinContent(4,0.03984332);
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt1386->SetBinContent(7,0.0427135);
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt1386->SetBinContent(26,0.08282476);
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt1386->SetBinError(4,0.03984332);
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt1386->SetBinError(7,0.0427135);
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt1386->SetBinError(26,0.05923458);
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt1386->SetEntries(4);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt1386->SetFillColor(ci);
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt1386->SetFillStyle(3001);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt1386->SetLineColor(ci);
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt1386->GetXaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt1386->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt1386->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt1386->GetXaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt1386->GetYaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt1386->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt1386->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt1386->GetYaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt1386->GetZaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt1386->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt1386->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt1386->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_Pre_13TeV_pt1->Add(new_histo_group_ZZ_wh3l_Pre_13TeV_pt1,"");
   
   TH1D *new_histo_group_WZ_wh3l_Pre_13TeV_pt1387 = new TH1D("new_histo_group_WZ_wh3l_Pre_13TeV_pt1387","histo_WZ",25,10,200);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt1387->SetBinContent(2,0.04133091);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt1387->SetBinContent(3,0.1357893);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt1387->SetBinContent(4,0.1815741);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt1387->SetBinContent(5,0.1896805);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt1387->SetBinContent(6,0.1716935);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt1387->SetBinContent(7,0.1258936);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt1387->SetBinContent(8,0.08468431);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt1387->SetBinContent(9,0.08701234);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt1387->SetBinContent(10,0.06574934);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt1387->SetBinContent(11,0.04659626);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt1387->SetBinContent(12,0.05392597);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt1387->SetBinContent(13,0.06357806);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt1387->SetBinContent(14,0.01270656);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt1387->SetBinContent(15,0.02434075);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt1387->SetBinContent(16,0.02206421);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt1387->SetBinContent(17,0.01447767);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt1387->SetBinContent(18,0.02595753);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt1387->SetBinContent(19,0.01305976);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt1387->SetBinContent(20,0.008860037);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt1387->SetBinContent(21,0.01791503);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt1387->SetBinContent(22,0.01215005);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt1387->SetBinContent(23,0.01618615);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt1387->SetBinContent(25,0.001250725);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt1387->SetBinContent(26,0.07854496);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt1387->SetBinError(2,0.01558008);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt1387->SetBinError(3,0.02638731);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt1387->SetBinError(4,0.03101223);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt1387->SetBinError(5,0.03214273);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt1387->SetBinError(6,0.03038512);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt1387->SetBinError(7,0.02662244);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt1387->SetBinError(8,0.02203102);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt1387->SetBinError(9,0.02177689);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt1387->SetBinError(10,0.01815898);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt1387->SetBinError(11,0.01530049);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt1387->SetBinError(12,0.01779056);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt1387->SetBinError(13,0.01937128);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt1387->SetBinError(14,0.008985674);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt1387->SetBinError(15,0.01114286);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt1387->SetBinError(16,0.01111446);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt1387->SetBinError(17,0.008881111);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt1387->SetBinError(18,0.01193239);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt1387->SetBinError(19,0.009236587);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt1387->SetBinError(20,0.006354433);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt1387->SetBinError(21,0.01035438);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt1387->SetBinError(22,0.008631317);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt1387->SetBinError(23,0.009398223);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt1387->SetBinError(25,0.001250725);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt1387->SetBinError(26,0.02135546);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt1387->SetEntries(305);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_Pre_13TeV_pt1387->SetFillColor(ci);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt1387->SetFillStyle(3001);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_Pre_13TeV_pt1387->SetLineColor(ci);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt1387->GetXaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt1387->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt1387->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt1387->GetXaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt1387->GetYaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt1387->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt1387->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt1387->GetYaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt1387->GetZaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt1387->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt1387->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt1387->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_Pre_13TeV_pt1->Add(new_histo_group_WZ_wh3l_Pre_13TeV_pt1,"");
   
   TH1D *new_histo_group_Higgs_wh3l_Pre_13TeV_pt1388 = new TH1D("new_histo_group_Higgs_wh3l_Pre_13TeV_pt1388","histo_H_htt",25,10,200);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt1388->SetBinContent(2,0.003350101);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt1388->SetBinContent(3,0.02761434);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt1388->SetBinContent(4,0.05587175);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt1388->SetBinContent(5,0.04380682);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt1388->SetBinContent(6,0.05268473);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt1388->SetBinContent(7,0.06005327);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt1388->SetBinContent(8,0.04429656);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt1388->SetBinContent(9,0.03461418);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt1388->SetBinContent(10,0.02537443);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt1388->SetBinContent(11,0.03131396);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt1388->SetBinContent(12,0.01195364);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt1388->SetBinContent(13,0.01576014);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt1388->SetBinContent(14,0.02220414);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt1388->SetBinContent(15,0.01025022);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt1388->SetBinContent(16,0.00769653);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt1388->SetBinContent(17,0.01868238);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt1388->SetBinContent(18,0.007967609);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt1388->SetBinContent(19,0.003500505);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt1388->SetBinContent(20,0.005452333);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt1388->SetBinContent(21,0.003132471);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt1388->SetBinContent(22,0.0009038033);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt1388->SetBinContent(23,0.0008078342);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt1388->SetBinContent(24,0.0006149967);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt1388->SetBinContent(25,0.003694924);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt1388->SetBinContent(26,0.008438562);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt1388->SetBinError(2,0.0009742472);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt1388->SetBinError(3,0.005208205);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt1388->SetBinError(4,0.007935809);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt1388->SetBinError(5,0.006137109);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt1388->SetBinError(6,0.007297569);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt1388->SetBinError(7,0.007804819);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt1388->SetBinError(8,0.007206159);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt1388->SetBinError(9,0.006574947);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt1388->SetBinError(10,0.006171637);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt1388->SetBinError(11,0.006159087);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt1388->SetBinError(12,0.002877302);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt1388->SetBinError(13,0.003876244);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt1388->SetBinError(14,0.004942513);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt1388->SetBinError(15,0.003048421);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt1388->SetBinError(16,0.002845084);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt1388->SetBinError(17,0.004847038);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt1388->SetBinError(18,0.003343057);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt1388->SetBinError(19,0.002060047);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt1388->SetBinError(20,0.001827866);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt1388->SetBinError(21,0.001438345);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt1388->SetBinError(22,0.0004633622);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt1388->SetBinError(23,0.0005731224);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt1388->SetBinError(24,0.000434881);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt1388->SetBinError(25,0.001949716);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt1388->SetBinError(26,0.002088449);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt1388->SetEntries(916);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt1388->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt1388->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt1388->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt1388->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt1388->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt1388->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt1388->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt1388->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt1388->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt1388->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt1388->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt1388->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt1388->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt1388->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt1388->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_Pre_13TeV_pt1->Add(new_histo_group_Higgs_wh3l_Pre_13TeV_pt1,"");
   thsBackground_grouped_wh3l_Pre_13TeV_pt1->Draw("hist same");
   
   thsSignal_grouped_wh3l_Pre_13TeV_pt1 = new THStack();
   thsSignal_grouped_wh3l_Pre_13TeV_pt1->SetName("thsSignal_grouped_wh3l_Pre_13TeV_pt1");
   thsSignal_grouped_wh3l_Pre_13TeV_pt1->SetTitle("thsSignal_grouped_wh3l_Pre_13TeV_pt1");
   
   TH1F *thsSignal_grouped_wh3l_Pre_13TeV_pt1_stack_78 = new TH1F("thsSignal_grouped_wh3l_Pre_13TeV_pt1_stack_78","thsSignal_grouped_wh3l_Pre_13TeV_pt1",25,10,200);
   thsSignal_grouped_wh3l_Pre_13TeV_pt1_stack_78->SetMinimum(0);
   thsSignal_grouped_wh3l_Pre_13TeV_pt1_stack_78->SetMaximum(0.07125099);
   thsSignal_grouped_wh3l_Pre_13TeV_pt1_stack_78->SetDirectory(0);
   thsSignal_grouped_wh3l_Pre_13TeV_pt1_stack_78->SetStats(0);
   thsSignal_grouped_wh3l_Pre_13TeV_pt1_stack_78->SetLineStyle(0);
   thsSignal_grouped_wh3l_Pre_13TeV_pt1_stack_78->SetMarkerStyle(20);
   thsSignal_grouped_wh3l_Pre_13TeV_pt1_stack_78->GetXaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_Pre_13TeV_pt1_stack_78->GetXaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_Pre_13TeV_pt1_stack_78->GetXaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_Pre_13TeV_pt1_stack_78->GetXaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_Pre_13TeV_pt1_stack_78->GetXaxis()->SetTitleOffset(0.9);
   thsSignal_grouped_wh3l_Pre_13TeV_pt1_stack_78->GetXaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_Pre_13TeV_pt1_stack_78->GetYaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_Pre_13TeV_pt1_stack_78->GetYaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_Pre_13TeV_pt1_stack_78->GetYaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_Pre_13TeV_pt1_stack_78->GetYaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_Pre_13TeV_pt1_stack_78->GetYaxis()->SetTitleOffset(1.25);
   thsSignal_grouped_wh3l_Pre_13TeV_pt1_stack_78->GetYaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_Pre_13TeV_pt1_stack_78->GetZaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_Pre_13TeV_pt1_stack_78->GetZaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_Pre_13TeV_pt1_stack_78->GetZaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_Pre_13TeV_pt1_stack_78->GetZaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_Pre_13TeV_pt1_stack_78->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_Pre_13TeV_pt1->SetHistogram(thsSignal_grouped_wh3l_Pre_13TeV_pt1_stack_78);
   
   
   TH1D *new_histo_group_Higgs_wh3l_Pre_13TeV_pt1389 = new TH1D("new_histo_group_Higgs_wh3l_Pre_13TeV_pt1389","histo_H_htt",25,10,200);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt1389->SetBinContent(2,0.003350101);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt1389->SetBinContent(3,0.02761434);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt1389->SetBinContent(4,0.05587175);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt1389->SetBinContent(5,0.04380682);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt1389->SetBinContent(6,0.05268473);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt1389->SetBinContent(7,0.06005327);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt1389->SetBinContent(8,0.04429656);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt1389->SetBinContent(9,0.03461418);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt1389->SetBinContent(10,0.02537443);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt1389->SetBinContent(11,0.03131396);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt1389->SetBinContent(12,0.01195364);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt1389->SetBinContent(13,0.01576014);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt1389->SetBinContent(14,0.02220414);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt1389->SetBinContent(15,0.01025022);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt1389->SetBinContent(16,0.00769653);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt1389->SetBinContent(17,0.01868238);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt1389->SetBinContent(18,0.007967609);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt1389->SetBinContent(19,0.003500505);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt1389->SetBinContent(20,0.005452333);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt1389->SetBinContent(21,0.003132471);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt1389->SetBinContent(22,0.0009038033);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt1389->SetBinContent(23,0.0008078342);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt1389->SetBinContent(24,0.0006149967);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt1389->SetBinContent(25,0.003694924);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt1389->SetBinContent(26,0.008438562);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt1389->SetBinError(2,0.0009742472);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt1389->SetBinError(3,0.005208205);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt1389->SetBinError(4,0.007935809);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt1389->SetBinError(5,0.006137109);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt1389->SetBinError(6,0.007297569);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt1389->SetBinError(7,0.007804819);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt1389->SetBinError(8,0.007206159);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt1389->SetBinError(9,0.006574947);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt1389->SetBinError(10,0.006171637);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt1389->SetBinError(11,0.006159087);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt1389->SetBinError(12,0.002877302);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt1389->SetBinError(13,0.003876244);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt1389->SetBinError(14,0.004942513);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt1389->SetBinError(15,0.003048421);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt1389->SetBinError(16,0.002845084);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt1389->SetBinError(17,0.004847038);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt1389->SetBinError(18,0.003343057);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt1389->SetBinError(19,0.002060047);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt1389->SetBinError(20,0.001827866);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt1389->SetBinError(21,0.001438345);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt1389->SetBinError(22,0.0004633622);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt1389->SetBinError(23,0.0005731224);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt1389->SetBinError(24,0.000434881);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt1389->SetBinError(25,0.001949716);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt1389->SetBinError(26,0.002088449);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt1389->SetEntries(916);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt1389->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt1389->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt1389->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt1389->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt1389->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt1389->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt1389->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt1389->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt1389->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt1389->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt1389->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt1389->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt1389->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt1389->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt1389->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_Pre_13TeV_pt1->Add(new_histo_group_Higgs_wh3l_Pre_13TeV_pt1,"");
   thsSignal_grouped_wh3l_Pre_13TeV_pt1->Draw("hist same noclear");
   
   Double_t _fx3077[25] = {
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
   Double_t _fy3077[25] = {
   0,
   0.430801,
   2.524722,
   1.056882,
   2.66847,
   2.46289,
   1.566152,
   4.368207,
   3.055877,
   1.189973,
   0.3131065,
   0.5778195,
   0.8731248,
   1.278672,
   0.4921656,
   -0.1909199,
   0.6058574,
   0.0247765,
   0.02466117,
   0.04813505,
   0.01791503,
   0.02001388,
   0.01324799,
   0.2302443,
   0.1447633};
   Double_t _felx3077[25] = {
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
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
   Double_t _fely3077[25] = {
   0,
   0.425922,
   1.503863,
   0.9395925,
   1.748401,
   1.300445,
   0.9986817,
   2.121272,
   1.539045,
   0.816995,
   0.209125,
   0.423319,
   0.604641,
   0.8501234,
   0.4200252,
   0.2307718,
   0.3710634,
   0.02309356,
   0.01858263,
   0.04739526,
   0.01036542,
   0.01464586,
   0.01650625,
   0.2029832,
   0.1482587};
   Double_t _fehx3077[25] = {
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
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
   Double_t _fehy3077[25] = {
   0,
   0.4834048,
   1.503863,
   1.011171,
   1.748402,
   1.300433,
   0.998679,
   2.121271,
   1.539044,
   0.8169902,
   0.2091215,
   0.423312,
   0.6046375,
   0.8501232,
   0.4200188,
   0.2307675,
   0.3710629,
   0.02464533,
   0.01857699,
   0.0510256,
   0.01036211,
   0.0146284,
   0.016503,
   0.2029832,
   0.1482639};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(25,_fx3077,_fy3077,_felx3077,_fehx3077,_fely3077,_fehy3077);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(12);
   grae->SetFillStyle(3004);
   grae->SetLineColor(12);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3077 = new TH1F("Graph_Graph3077","",100,0,219);
   Graph_Graph3077->SetMinimum(-1.112809);
   Graph_Graph3077->SetMaximum(7.180595);
   Graph_Graph3077->SetDirectory(0);
   Graph_Graph3077->SetStats(0);
   Graph_Graph3077->SetLineStyle(0);
   Graph_Graph3077->SetMarkerStyle(20);
   Graph_Graph3077->GetXaxis()->SetLabelFont(42);
   Graph_Graph3077->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3077->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3077->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3077->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3077->GetXaxis()->SetTitleFont(42);
   Graph_Graph3077->GetYaxis()->SetLabelFont(42);
   Graph_Graph3077->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3077->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3077->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3077->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3077->GetYaxis()->SetTitleFont(42);
   Graph_Graph3077->GetZaxis()->SetLabelFont(42);
   Graph_Graph3077->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3077->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3077->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3077->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3077);
   
   grae->Draw("2");
   
   Double_t _fx3078[25] = {
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
   Double_t _fy3078[25] = {
   0,
   0,
   1,
   4,
   1,
   0,
   0,
   0,
   1,
   0,
   1,
   2,
   1,
   1,
   0,
   1,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   1,
   0};
   Double_t _felx3078[25] = {
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
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
   Double_t _fely3078[25] = {
   0,
   0,
   0.8272524,
   1.914367,
   0.8272524,
   0,
   0,
   0,
   0.8272524,
   0,
   0.8272524,
   1.29183,
   0.8272524,
   0.8272524,
   0,
   0.8272524,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0.8272524,
   0};
   Double_t _fehx3078[25] = {
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
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
   Double_t _fehy3078[25] = {
   1.147908,
   1.147908,
   2.29957,
   3.162815,
   2.29957,
   1.147908,
   1.147908,
   1.147908,
   2.29957,
   1.147908,
   2.29957,
   2.63791,
   2.29957,
   2.29957,
   1.147908,
   2.29957,
   1.147908,
   1.147908,
   1.147908,
   1.147908,
   1.147908,
   1.147908,
   1.147908,
   2.29957,
   1.147908};
   grae = new TGraphAsymmErrors(25,_fx3078,_fy3078,_felx3078,_fehx3078,_fely3078,_fehy3078);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(1);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3078 = new TH1F("Graph_Graph3078","",100,0,219);
   Graph_Graph3078->SetMinimum(0);
   Graph_Graph3078->SetMaximum(7.879097);
   Graph_Graph3078->SetDirectory(0);
   Graph_Graph3078->SetStats(0);
   Graph_Graph3078->SetLineStyle(0);
   Graph_Graph3078->SetMarkerStyle(20);
   Graph_Graph3078->GetXaxis()->SetLabelFont(42);
   Graph_Graph3078->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3078->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3078->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3078->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3078->GetXaxis()->SetTitleFont(42);
   Graph_Graph3078->GetYaxis()->SetLabelFont(42);
   Graph_Graph3078->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3078->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3078->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3078->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3078->GetYaxis()->SetTitleFont(42);
   Graph_Graph3078->GetZaxis()->SetLabelFont(42);
   Graph_Graph3078->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3078->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3078->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3078->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3078);
   
   grae->Draw("p0");
   
   TLegend *leg = new TLegend(0.2,0.7,0.8,0.9,NULL,"brNDC");
   leg->SetTextFont(62);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("new_histo_group_Fake_wh3l_Pre_13TeV_pt1","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_Pre_13TeV_pt1","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_Pre_13TeV_pt1","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_Pre_13TeV_pt1","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_Pre_13TeV_pt1","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_Pre_13TeV_pt1","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_Pre_13TeV_pt1","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_Pre_13TeV_pt1","Data","EPL");
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
   entry=leg->AddEntry("new_histo_group_Fake_wh3l_Pre_13TeV_pt1","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_Pre_13TeV_pt1","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_Pre_13TeV_pt1","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_Pre_13TeV_pt1","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_Pre_13TeV_pt1","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_Pre_13TeV_pt1","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_Pre_13TeV_pt1","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_Pre_13TeV_pt1","Data","EPL");
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
   
   TH1F *hframe_copy390 = new TH1F("hframe_copy390","",1000,10,200);
   hframe_copy390->SetMinimum(0);
   hframe_copy390->SetMaximum(15);
   hframe_copy390->SetDirectory(0);
   hframe_copy390->SetStats(0);
   hframe_copy390->SetLineStyle(0);
   hframe_copy390->SetMarkerStyle(20);
   hframe_copy390->GetXaxis()->SetTitle("lept1_p_{T} [GeV]");
   hframe_copy390->GetXaxis()->SetNdivisions(506);
   hframe_copy390->GetXaxis()->SetLabelFont(42);
   hframe_copy390->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy390->GetXaxis()->SetLabelSize(0.05);
   hframe_copy390->GetXaxis()->SetTitleSize(0.06);
   hframe_copy390->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy390->GetXaxis()->SetTitleFont(42);
   hframe_copy390->GetYaxis()->SetTitle("Events");
   hframe_copy390->GetYaxis()->SetLabelFont(42);
   hframe_copy390->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy390->GetYaxis()->SetLabelSize(0.05);
   hframe_copy390->GetYaxis()->SetTitleSize(0.06);
   hframe_copy390->GetYaxis()->SetTitleOffset(1.25);
   hframe_copy390->GetYaxis()->SetTitleFont(42);
   hframe_copy390->GetZaxis()->SetLabelFont(42);
   hframe_copy390->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy390->GetZaxis()->SetLabelSize(0.05);
   hframe_copy390->GetZaxis()->SetTitleSize(0.06);
   hframe_copy390->GetZaxis()->SetTitleFont(42);
   hframe_copy390->Draw("sameaxis");
   ccwh3l_Pre_13TeV_pt1->Modified();
   ccwh3l_Pre_13TeV_pt1->cd();
   ccwh3l_Pre_13TeV_pt1->SetSelected(ccwh3l_Pre_13TeV_pt1);
}
