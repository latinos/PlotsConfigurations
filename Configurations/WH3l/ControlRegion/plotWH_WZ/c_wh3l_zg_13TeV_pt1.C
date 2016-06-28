void c_wh3l_zg_13TeV_pt1()
{
//=========Macro generated from canvas: ccwh3l_zg_13TeV_pt1/cc
//=========  (Tue Jun 28 02:23:01 2016) by ROOT version6.02/13
   TCanvas *ccwh3l_zg_13TeV_pt1 = new TCanvas("ccwh3l_zg_13TeV_pt1", "cc",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   ccwh3l_zg_13TeV_pt1->SetHighLightColor(2);
   ccwh3l_zg_13TeV_pt1->Range(-88,-26.00625,524.5,174.0418);
   ccwh3l_zg_13TeV_pt1->SetFillColor(0);
   ccwh3l_zg_13TeV_pt1->SetBorderMode(0);
   ccwh3l_zg_13TeV_pt1->SetBorderSize(2);
   ccwh3l_zg_13TeV_pt1->SetTickx(1);
   ccwh3l_zg_13TeV_pt1->SetTicky(1);
   ccwh3l_zg_13TeV_pt1->SetLeftMargin(0.16);
   ccwh3l_zg_13TeV_pt1->SetRightMargin(0.04);
   ccwh3l_zg_13TeV_pt1->SetTopMargin(0.05);
   ccwh3l_zg_13TeV_pt1->SetBottomMargin(0.13);
   ccwh3l_zg_13TeV_pt1->SetFrameFillStyle(0);
   ccwh3l_zg_13TeV_pt1->SetFrameBorderMode(0);
   ccwh3l_zg_13TeV_pt1->SetFrameFillStyle(0);
   ccwh3l_zg_13TeV_pt1->SetFrameBorderMode(0);
   
   TH1F *hframe261 = new TH1F("hframe261","",1000,10,500);
   hframe261->SetMinimum(0);
   hframe261->SetMaximum(164.0394);
   hframe261->SetDirectory(0);
   hframe261->SetStats(0);
   hframe261->SetLineStyle(0);
   hframe261->SetMarkerStyle(20);
   hframe261->GetXaxis()->SetTitle("lept1_p_{T} [GeV]");
   hframe261->GetXaxis()->SetNdivisions(506);
   hframe261->GetXaxis()->SetLabelFont(42);
   hframe261->GetXaxis()->SetLabelOffset(0.007);
   hframe261->GetXaxis()->SetLabelSize(0.05);
   hframe261->GetXaxis()->SetTitleSize(0.06);
   hframe261->GetXaxis()->SetTitleOffset(0.9);
   hframe261->GetXaxis()->SetTitleFont(42);
   hframe261->GetYaxis()->SetTitle("Events");
   hframe261->GetYaxis()->SetLabelFont(42);
   hframe261->GetYaxis()->SetLabelOffset(0.007);
   hframe261->GetYaxis()->SetLabelSize(0.05);
   hframe261->GetYaxis()->SetTitleSize(0.06);
   hframe261->GetYaxis()->SetTitleOffset(1.25);
   hframe261->GetYaxis()->SetTitleFont(42);
   hframe261->GetZaxis()->SetLabelFont(42);
   hframe261->GetZaxis()->SetLabelOffset(0.007);
   hframe261->GetZaxis()->SetLabelSize(0.05);
   hframe261->GetZaxis()->SetTitleSize(0.06);
   hframe261->GetZaxis()->SetTitleFont(42);
   hframe261->Draw(" ");
   
   THStack *thsBackground_grouped_wh3l_zg_13TeV_pt1 = new THStack();
   thsBackground_grouped_wh3l_zg_13TeV_pt1->SetName("thsBackground_grouped_wh3l_zg_13TeV_pt1");
   thsBackground_grouped_wh3l_zg_13TeV_pt1->SetTitle("thsBackground_grouped_wh3l_zg_13TeV_pt1");
   
   TH1F *thsBackground_grouped_wh3l_zg_13TeV_pt1_stack_53 = new TH1F("thsBackground_grouped_wh3l_zg_13TeV_pt1_stack_53","thsBackground_grouped_wh3l_zg_13TeV_pt1",50,10,500);
   thsBackground_grouped_wh3l_zg_13TeV_pt1_stack_53->SetMinimum(-1.783626);
   thsBackground_grouped_wh3l_zg_13TeV_pt1_stack_53->SetMaximum(59.70611);
   thsBackground_grouped_wh3l_zg_13TeV_pt1_stack_53->SetDirectory(0);
   thsBackground_grouped_wh3l_zg_13TeV_pt1_stack_53->SetStats(0);
   thsBackground_grouped_wh3l_zg_13TeV_pt1_stack_53->SetLineStyle(0);
   thsBackground_grouped_wh3l_zg_13TeV_pt1_stack_53->SetMarkerStyle(20);
   thsBackground_grouped_wh3l_zg_13TeV_pt1_stack_53->GetXaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_pt1_stack_53->GetXaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_zg_13TeV_pt1_stack_53->GetXaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_zg_13TeV_pt1_stack_53->GetXaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_zg_13TeV_pt1_stack_53->GetXaxis()->SetTitleOffset(0.9);
   thsBackground_grouped_wh3l_zg_13TeV_pt1_stack_53->GetXaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_pt1_stack_53->GetYaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_pt1_stack_53->GetYaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_zg_13TeV_pt1_stack_53->GetYaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_zg_13TeV_pt1_stack_53->GetYaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_zg_13TeV_pt1_stack_53->GetYaxis()->SetTitleOffset(1.25);
   thsBackground_grouped_wh3l_zg_13TeV_pt1_stack_53->GetYaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_pt1_stack_53->GetZaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_pt1_stack_53->GetZaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_zg_13TeV_pt1_stack_53->GetZaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_zg_13TeV_pt1_stack_53->GetZaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_zg_13TeV_pt1_stack_53->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_pt1->SetHistogram(thsBackground_grouped_wh3l_zg_13TeV_pt1_stack_53);
   
   
   TH1D *new_histo_group_Fake_wh3l_zg_13TeV_pt1262 = new TH1D("new_histo_group_Fake_wh3l_zg_13TeV_pt1262","histo_Fake",50,10,500);
   new_histo_group_Fake_wh3l_zg_13TeV_pt1262->SetBinContent(2,-0.4276913);
   new_histo_group_Fake_wh3l_zg_13TeV_pt1262->SetBinContent(3,11.67638);
   new_histo_group_Fake_wh3l_zg_13TeV_pt1262->SetBinContent(4,11.63634);
   new_histo_group_Fake_wh3l_zg_13TeV_pt1262->SetBinContent(5,1.319685);
   new_histo_group_Fake_wh3l_zg_13TeV_pt1262->SetBinContent(6,-0.02270872);
   new_histo_group_Fake_wh3l_zg_13TeV_pt1262->SetBinContent(7,-0.04530323);
   new_histo_group_Fake_wh3l_zg_13TeV_pt1262->SetBinContent(9,-0.009756577);
   new_histo_group_Fake_wh3l_zg_13TeV_pt1262->SetBinError(2,1.355935);
   new_histo_group_Fake_wh3l_zg_13TeV_pt1262->SetBinError(3,2.951408);
   new_histo_group_Fake_wh3l_zg_13TeV_pt1262->SetBinError(4,2.580225);
   new_histo_group_Fake_wh3l_zg_13TeV_pt1262->SetBinError(5,1.025617);
   new_histo_group_Fake_wh3l_zg_13TeV_pt1262->SetBinError(6,0.574652);
   new_histo_group_Fake_wh3l_zg_13TeV_pt1262->SetBinError(7,0.04530323);
   new_histo_group_Fake_wh3l_zg_13TeV_pt1262->SetBinError(9,0.009756577);
   new_histo_group_Fake_wh3l_zg_13TeV_pt1262->SetEntries(442);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_zg_13TeV_pt1262->SetFillColor(ci);
   new_histo_group_Fake_wh3l_zg_13TeV_pt1262->SetFillStyle(3001);

   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_zg_13TeV_pt1262->SetLineColor(ci);
   new_histo_group_Fake_wh3l_zg_13TeV_pt1262->GetXaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_zg_13TeV_pt1262->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_zg_13TeV_pt1262->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_zg_13TeV_pt1262->GetXaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_zg_13TeV_pt1262->GetYaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_zg_13TeV_pt1262->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_zg_13TeV_pt1262->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_zg_13TeV_pt1262->GetYaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_zg_13TeV_pt1262->GetZaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_zg_13TeV_pt1262->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_zg_13TeV_pt1262->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_zg_13TeV_pt1262->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_pt1->Add(new_histo_group_Fake_wh3l_zg_13TeV_pt1,"");
   
   TH1D *new_histo_group_WW_wh3l_zg_13TeV_pt1263 = new TH1D("new_histo_group_WW_wh3l_zg_13TeV_pt1263","histo_WW",50,10,500);
   new_histo_group_WW_wh3l_zg_13TeV_pt1263->SetBinContent(4,0.009961222);
   new_histo_group_WW_wh3l_zg_13TeV_pt1263->SetBinError(4,0.009961222);
   new_histo_group_WW_wh3l_zg_13TeV_pt1263->SetEntries(1);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_zg_13TeV_pt1263->SetFillColor(ci);
   new_histo_group_WW_wh3l_zg_13TeV_pt1263->SetFillStyle(3001);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_zg_13TeV_pt1263->SetLineColor(ci);
   new_histo_group_WW_wh3l_zg_13TeV_pt1263->GetXaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_zg_13TeV_pt1263->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_zg_13TeV_pt1263->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_zg_13TeV_pt1263->GetXaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_zg_13TeV_pt1263->GetYaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_zg_13TeV_pt1263->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_zg_13TeV_pt1263->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_zg_13TeV_pt1263->GetYaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_zg_13TeV_pt1263->GetZaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_zg_13TeV_pt1263->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_zg_13TeV_pt1263->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_zg_13TeV_pt1263->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_pt1->Add(new_histo_group_WW_wh3l_zg_13TeV_pt1,"");
   
   TH1D *new_histo_group_VVV_wh3l_zg_13TeV_pt1264 = new TH1D("new_histo_group_VVV_wh3l_zg_13TeV_pt1264","histo_VVV",50,10,500);
   new_histo_group_VVV_wh3l_zg_13TeV_pt1264->SetBinContent(5,-0.0006863608);
   new_histo_group_VVV_wh3l_zg_13TeV_pt1264->SetBinError(5,0.0006863608);
   new_histo_group_VVV_wh3l_zg_13TeV_pt1264->SetEntries(1);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_zg_13TeV_pt1264->SetFillColor(ci);
   new_histo_group_VVV_wh3l_zg_13TeV_pt1264->SetFillStyle(3001);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_zg_13TeV_pt1264->SetLineColor(ci);
   new_histo_group_VVV_wh3l_zg_13TeV_pt1264->GetXaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_zg_13TeV_pt1264->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_zg_13TeV_pt1264->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_zg_13TeV_pt1264->GetXaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_zg_13TeV_pt1264->GetYaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_zg_13TeV_pt1264->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_zg_13TeV_pt1264->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_zg_13TeV_pt1264->GetYaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_zg_13TeV_pt1264->GetZaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_zg_13TeV_pt1264->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_zg_13TeV_pt1264->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_zg_13TeV_pt1264->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_pt1->Add(new_histo_group_VVV_wh3l_zg_13TeV_pt1,"");
   
   TH1D *new_histo_group_Vg_wh3l_zg_13TeV_pt1265 = new TH1D("new_histo_group_Vg_wh3l_zg_13TeV_pt1265","histo_Vg",50,10,500);
   new_histo_group_Vg_wh3l_zg_13TeV_pt1265->SetBinContent(2,11.57374);
   new_histo_group_Vg_wh3l_zg_13TeV_pt1265->SetBinContent(3,44.74119);
   new_histo_group_Vg_wh3l_zg_13TeV_pt1265->SetBinContent(4,35.61149);
   new_histo_group_Vg_wh3l_zg_13TeV_pt1265->SetBinContent(5,6.700303);
   new_histo_group_Vg_wh3l_zg_13TeV_pt1265->SetBinContent(6,1.429241);
   new_histo_group_Vg_wh3l_zg_13TeV_pt1265->SetBinContent(7,0.01888059);
   new_histo_group_Vg_wh3l_zg_13TeV_pt1265->SetBinContent(8,0.118661);
   new_histo_group_Vg_wh3l_zg_13TeV_pt1265->SetBinError(2,1.279452);
   new_histo_group_Vg_wh3l_zg_13TeV_pt1265->SetBinError(3,2.479451);
   new_histo_group_Vg_wh3l_zg_13TeV_pt1265->SetBinError(4,2.265154);
   new_histo_group_Vg_wh3l_zg_13TeV_pt1265->SetBinError(5,1.086175);
   new_histo_group_Vg_wh3l_zg_13TeV_pt1265->SetBinError(6,0.5211818);
   new_histo_group_Vg_wh3l_zg_13TeV_pt1265->SetBinError(7,0.2123352);
   new_histo_group_Vg_wh3l_zg_13TeV_pt1265->SetBinError(8,0.118661);
   new_histo_group_Vg_wh3l_zg_13TeV_pt1265->SetEntries(1327);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_zg_13TeV_pt1265->SetFillColor(ci);
   new_histo_group_Vg_wh3l_zg_13TeV_pt1265->SetFillStyle(3001);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_zg_13TeV_pt1265->SetLineColor(ci);
   new_histo_group_Vg_wh3l_zg_13TeV_pt1265->GetXaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_zg_13TeV_pt1265->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_zg_13TeV_pt1265->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_zg_13TeV_pt1265->GetXaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_zg_13TeV_pt1265->GetYaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_zg_13TeV_pt1265->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_zg_13TeV_pt1265->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_zg_13TeV_pt1265->GetYaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_zg_13TeV_pt1265->GetZaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_zg_13TeV_pt1265->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_zg_13TeV_pt1265->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_zg_13TeV_pt1265->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_pt1->Add(new_histo_group_Vg_wh3l_zg_13TeV_pt1,"");
   
   TH1D *new_histo_group_ZZ_wh3l_zg_13TeV_pt1266 = new TH1D("new_histo_group_ZZ_wh3l_zg_13TeV_pt1266","histo_ZZ",50,10,500);
   new_histo_group_ZZ_wh3l_zg_13TeV_pt1266->SetBinContent(2,0.1674872);
   new_histo_group_ZZ_wh3l_zg_13TeV_pt1266->SetBinContent(3,0.2138645);
   new_histo_group_ZZ_wh3l_zg_13TeV_pt1266->SetBinContent(4,0.2440266);
   new_histo_group_ZZ_wh3l_zg_13TeV_pt1266->SetBinContent(5,0.0803105);
   new_histo_group_ZZ_wh3l_zg_13TeV_pt1266->SetBinContent(6,0.0306523);
   new_histo_group_ZZ_wh3l_zg_13TeV_pt1266->SetBinError(2,0.08425043);
   new_histo_group_ZZ_wh3l_zg_13TeV_pt1266->SetBinError(3,0.08945742);
   new_histo_group_ZZ_wh3l_zg_13TeV_pt1266->SetBinError(4,0.1014136);
   new_histo_group_ZZ_wh3l_zg_13TeV_pt1266->SetBinError(5,0.05702824);
   new_histo_group_ZZ_wh3l_zg_13TeV_pt1266->SetBinError(6,0.02834301);
   new_histo_group_ZZ_wh3l_zg_13TeV_pt1266->SetEntries(20);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_zg_13TeV_pt1266->SetFillColor(ci);
   new_histo_group_ZZ_wh3l_zg_13TeV_pt1266->SetFillStyle(3001);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_zg_13TeV_pt1266->SetLineColor(ci);
   new_histo_group_ZZ_wh3l_zg_13TeV_pt1266->GetXaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_zg_13TeV_pt1266->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_zg_13TeV_pt1266->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_zg_13TeV_pt1266->GetXaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_zg_13TeV_pt1266->GetYaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_zg_13TeV_pt1266->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_zg_13TeV_pt1266->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_zg_13TeV_pt1266->GetYaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_zg_13TeV_pt1266->GetZaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_zg_13TeV_pt1266->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_zg_13TeV_pt1266->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_zg_13TeV_pt1266->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_pt1->Add(new_histo_group_ZZ_wh3l_zg_13TeV_pt1,"");
   
   TH1D *new_histo_group_WZ_wh3l_zg_13TeV_pt1267 = new TH1D("new_histo_group_WZ_wh3l_zg_13TeV_pt1267","histo_ZZ",50,10,500);
   new_histo_group_WZ_wh3l_zg_13TeV_pt1267->SetBinContent(2,0.1674872);
   new_histo_group_WZ_wh3l_zg_13TeV_pt1267->SetBinContent(3,0.2138645);
   new_histo_group_WZ_wh3l_zg_13TeV_pt1267->SetBinContent(4,0.2440266);
   new_histo_group_WZ_wh3l_zg_13TeV_pt1267->SetBinContent(5,0.0803105);
   new_histo_group_WZ_wh3l_zg_13TeV_pt1267->SetBinContent(6,0.0306523);
   new_histo_group_WZ_wh3l_zg_13TeV_pt1267->SetBinError(2,0.08425043);
   new_histo_group_WZ_wh3l_zg_13TeV_pt1267->SetBinError(3,0.08945742);
   new_histo_group_WZ_wh3l_zg_13TeV_pt1267->SetBinError(4,0.1014136);
   new_histo_group_WZ_wh3l_zg_13TeV_pt1267->SetBinError(5,0.05702824);
   new_histo_group_WZ_wh3l_zg_13TeV_pt1267->SetBinError(6,0.02834301);
   new_histo_group_WZ_wh3l_zg_13TeV_pt1267->SetEntries(20);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_zg_13TeV_pt1267->SetFillColor(ci);
   new_histo_group_WZ_wh3l_zg_13TeV_pt1267->SetFillStyle(3001);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_zg_13TeV_pt1267->SetLineColor(ci);
   new_histo_group_WZ_wh3l_zg_13TeV_pt1267->GetXaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_zg_13TeV_pt1267->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_zg_13TeV_pt1267->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_zg_13TeV_pt1267->GetXaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_zg_13TeV_pt1267->GetYaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_zg_13TeV_pt1267->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_zg_13TeV_pt1267->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_zg_13TeV_pt1267->GetYaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_zg_13TeV_pt1267->GetZaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_zg_13TeV_pt1267->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_zg_13TeV_pt1267->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_zg_13TeV_pt1267->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_pt1->Add(new_histo_group_WZ_wh3l_zg_13TeV_pt1,"");
   
   TH1D *new_histo_group_Higgs_wh3l_zg_13TeV_pt1268 = new TH1D("new_histo_group_Higgs_wh3l_zg_13TeV_pt1268","histo_H_htt",50,10,500);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt1268->SetBinContent(2,0.008601834);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt1268->SetBinContent(3,0.01765025);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt1268->SetBinContent(4,0.0254337);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt1268->SetBinContent(5,0.008225217);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt1268->SetBinContent(6,0.0005864444);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt1268->SetBinContent(7,0.0003065907);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt1268->SetBinError(2,0.003051504);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt1268->SetBinError(3,0.00377796);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt1268->SetBinError(4,0.005661742);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt1268->SetBinError(5,0.003177837);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt1268->SetBinError(6,0.0003367494);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt1268->SetBinError(7,0.0003065907);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt1268->SetEntries(136);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt1268->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_zg_13TeV_pt1268->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt1268->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt1268->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt1268->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt1268->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt1268->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt1268->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt1268->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt1268->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt1268->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt1268->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt1268->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt1268->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt1268->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_pt1->Add(new_histo_group_Higgs_wh3l_zg_13TeV_pt1,"");
   thsBackground_grouped_wh3l_zg_13TeV_pt1->Draw("hist same");
   
   thsSignal_grouped_wh3l_zg_13TeV_pt1 = new THStack();
   thsSignal_grouped_wh3l_zg_13TeV_pt1->SetName("thsSignal_grouped_wh3l_zg_13TeV_pt1");
   thsSignal_grouped_wh3l_zg_13TeV_pt1->SetTitle("thsSignal_grouped_wh3l_zg_13TeV_pt1");
   
   TH1F *thsSignal_grouped_wh3l_zg_13TeV_pt1_stack_54 = new TH1F("thsSignal_grouped_wh3l_zg_13TeV_pt1_stack_54","thsSignal_grouped_wh3l_zg_13TeV_pt1",50,10,500);
   thsSignal_grouped_wh3l_zg_13TeV_pt1_stack_54->SetMinimum(0);
   thsSignal_grouped_wh3l_zg_13TeV_pt1_stack_54->SetMaximum(0.03265021);
   thsSignal_grouped_wh3l_zg_13TeV_pt1_stack_54->SetDirectory(0);
   thsSignal_grouped_wh3l_zg_13TeV_pt1_stack_54->SetStats(0);
   thsSignal_grouped_wh3l_zg_13TeV_pt1_stack_54->SetLineStyle(0);
   thsSignal_grouped_wh3l_zg_13TeV_pt1_stack_54->SetMarkerStyle(20);
   thsSignal_grouped_wh3l_zg_13TeV_pt1_stack_54->GetXaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_zg_13TeV_pt1_stack_54->GetXaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_zg_13TeV_pt1_stack_54->GetXaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_zg_13TeV_pt1_stack_54->GetXaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_zg_13TeV_pt1_stack_54->GetXaxis()->SetTitleOffset(0.9);
   thsSignal_grouped_wh3l_zg_13TeV_pt1_stack_54->GetXaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_zg_13TeV_pt1_stack_54->GetYaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_zg_13TeV_pt1_stack_54->GetYaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_zg_13TeV_pt1_stack_54->GetYaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_zg_13TeV_pt1_stack_54->GetYaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_zg_13TeV_pt1_stack_54->GetYaxis()->SetTitleOffset(1.25);
   thsSignal_grouped_wh3l_zg_13TeV_pt1_stack_54->GetYaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_zg_13TeV_pt1_stack_54->GetZaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_zg_13TeV_pt1_stack_54->GetZaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_zg_13TeV_pt1_stack_54->GetZaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_zg_13TeV_pt1_stack_54->GetZaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_zg_13TeV_pt1_stack_54->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_zg_13TeV_pt1->SetHistogram(thsSignal_grouped_wh3l_zg_13TeV_pt1_stack_54);
   
   
   TH1D *new_histo_group_Higgs_wh3l_zg_13TeV_pt1269 = new TH1D("new_histo_group_Higgs_wh3l_zg_13TeV_pt1269","histo_H_htt",50,10,500);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt1269->SetBinContent(2,0.008601834);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt1269->SetBinContent(3,0.01765025);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt1269->SetBinContent(4,0.0254337);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt1269->SetBinContent(5,0.008225217);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt1269->SetBinContent(6,0.0005864444);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt1269->SetBinContent(7,0.0003065907);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt1269->SetBinError(2,0.003051504);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt1269->SetBinError(3,0.00377796);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt1269->SetBinError(4,0.005661742);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt1269->SetBinError(5,0.003177837);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt1269->SetBinError(6,0.0003367494);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt1269->SetBinError(7,0.0003065907);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt1269->SetEntries(136);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt1269->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_zg_13TeV_pt1269->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt1269->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt1269->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt1269->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt1269->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt1269->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt1269->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt1269->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt1269->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt1269->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt1269->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt1269->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt1269->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt1269->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_zg_13TeV_pt1->Add(new_histo_group_Higgs_wh3l_zg_13TeV_pt1,"");
   thsSignal_grouped_wh3l_zg_13TeV_pt1->Draw("hist same noclear");
   
   Double_t _fx3053[50] = {
   14.9,
   24.7,
   34.5,
   44.3,
   54.1,
   63.9,
   73.7,
   83.5,
   93.3,
   103.1,
   112.9,
   122.7,
   132.5,
   142.3,
   152.1,
   161.9,
   171.7,
   181.5,
   191.3,
   201.1,
   210.9,
   220.7,
   230.5,
   240.3,
   250.1,
   259.9,
   269.7,
   279.5,
   289.3,
   299.1,
   308.9,
   318.7,
   328.5,
   338.3,
   348.1,
   357.9,
   367.7,
   377.5,
   387.3,
   397.1,
   406.9,
   416.7,
   426.5,
   436.3,
   446.1,
   455.9,
   465.7,
   475.5,
   485.3,
   495.1};
   Double_t _fy3053[50] = {
   0,
   11.5586,
   57.1232,
   47.89938,
   8.319524,
   1.4921,
   0.006574532,
   0.1234946,
   -0.009756577,
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
   Double_t _felx3053[50] = {
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9};
   Double_t _fely3053[50] = {
   0,
   2.777303,
   6.692339,
   6.177368,
   2.246516,
   1.142517,
   0.07887496,
   0.1235361,
   0.01018617,
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
   Double_t _fehx3053[50] = {
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9};
   Double_t _fehy3053[50] = {
   0,
   1.859639,
   6.692343,
   6.17736,
   2.246516,
   0.5912283,
   0.2714882,
   0.1235361,
   0.01018617,
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
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(50,_fx3053,_fy3053,_felx3053,_fehx3053,_fely3053,_fehy3053);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(12);
   grae->SetFillStyle(3004);
   grae->SetLineColor(12);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3053 = new TH1F("Graph_Graph3053","",100,0,549);
   Graph_Graph3053->SetMinimum(-6.461085);
   Graph_Graph3053->SetMaximum(70.20433);
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
   
   Double_t _fx3054[50] = {
   14.9,
   24.7,
   34.5,
   44.3,
   54.1,
   63.9,
   73.7,
   83.5,
   93.3,
   103.1,
   112.9,
   122.7,
   132.5,
   142.3,
   152.1,
   161.9,
   171.7,
   181.5,
   191.3,
   201.1,
   210.9,
   220.7,
   230.5,
   240.3,
   250.1,
   259.9,
   269.7,
   279.5,
   289.3,
   299.1,
   308.9,
   318.7,
   328.5,
   338.3,
   348.1,
   357.9,
   367.7,
   377.5,
   387.3,
   397.1,
   406.9,
   416.7,
   426.5,
   436.3,
   446.1,
   455.9,
   465.7,
   475.5,
   485.3,
   495.1};
   Double_t _fy3054[50] = {
   0,
   19,
   58,
   43,
   5,
   2,
   1,
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
   Double_t _felx3054[50] = {
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9};
   Double_t _fely3054[50] = {
   0,
   4.320299,
   7.593902,
   6.531961,
   2.159724,
   1.29183,
   0.8272524,
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
   Double_t _fehx3054[50] = {
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9,
   4.9};
   Double_t _fehy3054[50] = {
   1.147908,
   5.435307,
   8.659745,
   7.608437,
   3.382539,
   2.63791,
   2.29957,
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
   grae = new TGraphAsymmErrors(50,_fx3054,_fy3054,_felx3054,_fehx3054,_fely3054,_fehy3054);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(1);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3054 = new TH1F("Graph_Graph3054","",100,0,549);
   Graph_Graph3054->SetMinimum(0);
   Graph_Graph3054->SetMaximum(73.32572);
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
   
   TLegend *leg = new TLegend(0.2,0.55,0.8,0.88,NULL,"brNDC");
   leg->SetTextFont(62);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("new_histo_group_Fake_wh3l_zg_13TeV_pt1","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_zg_13TeV_pt1","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_zg_13TeV_pt1","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_zg_13TeV_pt1","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_zg_13TeV_pt1","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_zg_13TeV_pt1","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_zg_13TeV_pt1","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_zg_13TeV_pt1","Data","EPL");
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
   entry=leg->AddEntry("new_histo_group_Fake_wh3l_zg_13TeV_pt1","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_zg_13TeV_pt1","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_zg_13TeV_pt1","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_zg_13TeV_pt1","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_zg_13TeV_pt1","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_zg_13TeV_pt1","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_zg_13TeV_pt1","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_zg_13TeV_pt1","Data","EPL");
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
   
   TH1F *hframe_copy270 = new TH1F("hframe_copy270","",1000,10,500);
   hframe_copy270->SetMinimum(0);
   hframe_copy270->SetMaximum(164.0394);
   hframe_copy270->SetDirectory(0);
   hframe_copy270->SetStats(0);
   hframe_copy270->SetLineStyle(0);
   hframe_copy270->SetMarkerStyle(20);
   hframe_copy270->GetXaxis()->SetTitle("lept1_p_{T} [GeV]");
   hframe_copy270->GetXaxis()->SetNdivisions(506);
   hframe_copy270->GetXaxis()->SetLabelFont(42);
   hframe_copy270->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy270->GetXaxis()->SetLabelSize(0.05);
   hframe_copy270->GetXaxis()->SetTitleSize(0.06);
   hframe_copy270->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy270->GetXaxis()->SetTitleFont(42);
   hframe_copy270->GetYaxis()->SetTitle("Events");
   hframe_copy270->GetYaxis()->SetLabelFont(42);
   hframe_copy270->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy270->GetYaxis()->SetLabelSize(0.05);
   hframe_copy270->GetYaxis()->SetTitleSize(0.06);
   hframe_copy270->GetYaxis()->SetTitleOffset(1.25);
   hframe_copy270->GetYaxis()->SetTitleFont(42);
   hframe_copy270->GetZaxis()->SetLabelFont(42);
   hframe_copy270->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy270->GetZaxis()->SetLabelSize(0.05);
   hframe_copy270->GetZaxis()->SetTitleSize(0.06);
   hframe_copy270->GetZaxis()->SetTitleFont(42);
   hframe_copy270->Draw("sameaxis");
   ccwh3l_zg_13TeV_pt1->Modified();
   ccwh3l_zg_13TeV_pt1->cd();
   ccwh3l_zg_13TeV_pt1->SetSelected(ccwh3l_zg_13TeV_pt1);
}
