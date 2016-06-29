void c_wh3l_13TeV_pt2()
{
//=========Macro generated from canvas: ccwh3l_13TeV_pt2/cc
//=========  (Wed Jun 29 01:51:51 2016) by ROOT version6.02/13
   TCanvas *ccwh3l_13TeV_pt2 = new TCanvas("ccwh3l_13TeV_pt2", "cc",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   ccwh3l_13TeV_pt2->SetHighLightColor(2);
   ccwh3l_13TeV_pt2->Range(-28,-2.739662,209.5,18.33466);
   ccwh3l_13TeV_pt2->SetFillColor(0);
   ccwh3l_13TeV_pt2->SetBorderMode(0);
   ccwh3l_13TeV_pt2->SetBorderSize(2);
   ccwh3l_13TeV_pt2->SetTickx(1);
   ccwh3l_13TeV_pt2->SetTicky(1);
   ccwh3l_13TeV_pt2->SetLeftMargin(0.16);
   ccwh3l_13TeV_pt2->SetRightMargin(0.04);
   ccwh3l_13TeV_pt2->SetTopMargin(0.05);
   ccwh3l_13TeV_pt2->SetBottomMargin(0.13);
   ccwh3l_13TeV_pt2->SetFrameFillStyle(0);
   ccwh3l_13TeV_pt2->SetFrameBorderMode(0);
   ccwh3l_13TeV_pt2->SetFrameFillStyle(0);
   ccwh3l_13TeV_pt2->SetFrameBorderMode(0);
   
   TH1F *hframe381 = new TH1F("hframe381","",1000,10,200);
   hframe381->SetMinimum(0);
   hframe381->SetMaximum(17.28095);
   hframe381->SetDirectory(0);
   hframe381->SetStats(0);
   hframe381->SetLineStyle(0);
   hframe381->SetMarkerStyle(20);
   hframe381->GetXaxis()->SetTitle("lept2_p_{T} [GeV]");
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
   
   THStack *thsBackground_grouped_wh3l_13TeV_pt2 = new THStack();
   thsBackground_grouped_wh3l_13TeV_pt2->SetName("thsBackground_grouped_wh3l_13TeV_pt2");
   thsBackground_grouped_wh3l_13TeV_pt2->SetTitle("thsBackground_grouped_wh3l_13TeV_pt2");
   
   TH1F *thsBackground_grouped_wh3l_13TeV_pt2_stack_77 = new TH1F("thsBackground_grouped_wh3l_13TeV_pt2_stack_77","thsBackground_grouped_wh3l_13TeV_pt2",25,10,200);
   thsBackground_grouped_wh3l_13TeV_pt2_stack_77->SetMinimum(-0.5259424);
   thsBackground_grouped_wh3l_13TeV_pt2_stack_77->SetMaximum(7.257998);
   thsBackground_grouped_wh3l_13TeV_pt2_stack_77->SetDirectory(0);
   thsBackground_grouped_wh3l_13TeV_pt2_stack_77->SetStats(0);
   thsBackground_grouped_wh3l_13TeV_pt2_stack_77->SetLineStyle(0);
   thsBackground_grouped_wh3l_13TeV_pt2_stack_77->SetMarkerStyle(20);
   thsBackground_grouped_wh3l_13TeV_pt2_stack_77->GetXaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_13TeV_pt2_stack_77->GetXaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_13TeV_pt2_stack_77->GetXaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_13TeV_pt2_stack_77->GetXaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_13TeV_pt2_stack_77->GetXaxis()->SetTitleOffset(0.9);
   thsBackground_grouped_wh3l_13TeV_pt2_stack_77->GetXaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_pt2_stack_77->GetYaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_13TeV_pt2_stack_77->GetYaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_13TeV_pt2_stack_77->GetYaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_13TeV_pt2_stack_77->GetYaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_13TeV_pt2_stack_77->GetYaxis()->SetTitleOffset(1.25);
   thsBackground_grouped_wh3l_13TeV_pt2_stack_77->GetYaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_pt2_stack_77->GetZaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_13TeV_pt2_stack_77->GetZaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_13TeV_pt2_stack_77->GetZaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_13TeV_pt2_stack_77->GetZaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_13TeV_pt2_stack_77->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_pt2->SetHistogram(thsBackground_grouped_wh3l_13TeV_pt2_stack_77);
   
   
   TH1D *new_histo_group_Fake_wh3l_13TeV_pt2382 = new TH1D("new_histo_group_Fake_wh3l_13TeV_pt2382","histo_Fake",25,10,200);
   new_histo_group_Fake_wh3l_13TeV_pt2382->SetBinContent(1,0.1287405);
   new_histo_group_Fake_wh3l_13TeV_pt2382->SetBinContent(2,1.341464);
   new_histo_group_Fake_wh3l_13TeV_pt2382->SetBinContent(3,4.204932);
   new_histo_group_Fake_wh3l_13TeV_pt2382->SetBinContent(4,1.386104);
   new_histo_group_Fake_wh3l_13TeV_pt2382->SetBinContent(5,0.5386347);
   new_histo_group_Fake_wh3l_13TeV_pt2382->SetBinContent(6,1.312568);
   new_histo_group_Fake_wh3l_13TeV_pt2382->SetBinContent(7,0.1267478);
   new_histo_group_Fake_wh3l_13TeV_pt2382->SetBinContent(8,0.6794888);
   new_histo_group_Fake_wh3l_13TeV_pt2382->SetBinContent(9,-0.001650331);
   new_histo_group_Fake_wh3l_13TeV_pt2382->SetBinContent(10,0.01119502);
   new_histo_group_Fake_wh3l_13TeV_pt2382->SetBinError(1,0.6546829);
   new_histo_group_Fake_wh3l_13TeV_pt2382->SetBinError(2,0.8644659);
   new_histo_group_Fake_wh3l_13TeV_pt2382->SetBinError(3,1.650762);
   new_histo_group_Fake_wh3l_13TeV_pt2382->SetBinError(4,1.14935);
   new_histo_group_Fake_wh3l_13TeV_pt2382->SetBinError(5,0.5572774);
   new_histo_group_Fake_wh3l_13TeV_pt2382->SetBinError(6,0.9160912);
   new_histo_group_Fake_wh3l_13TeV_pt2382->SetBinError(7,0.135618);
   new_histo_group_Fake_wh3l_13TeV_pt2382->SetBinError(8,0.4599755);
   new_histo_group_Fake_wh3l_13TeV_pt2382->SetBinError(9,0.001650331);
   new_histo_group_Fake_wh3l_13TeV_pt2382->SetBinError(10,0.01119502);
   new_histo_group_Fake_wh3l_13TeV_pt2382->SetEntries(109);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_13TeV_pt2382->SetFillColor(ci);
   new_histo_group_Fake_wh3l_13TeV_pt2382->SetFillStyle(3001);

   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_13TeV_pt2382->SetLineColor(ci);
   new_histo_group_Fake_wh3l_13TeV_pt2382->GetXaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_13TeV_pt2382->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_13TeV_pt2382->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_13TeV_pt2382->GetXaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_13TeV_pt2382->GetYaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_13TeV_pt2382->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_13TeV_pt2382->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_13TeV_pt2382->GetYaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_13TeV_pt2382->GetZaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_13TeV_pt2382->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_13TeV_pt2382->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_13TeV_pt2382->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_pt2->Add(new_histo_group_Fake_wh3l_13TeV_pt2,"");
   
   TH1D *new_histo_group_WW_wh3l_13TeV_pt2383 = new TH1D("new_histo_group_WW_wh3l_13TeV_pt2383","histo_WW",25,10,200);
   new_histo_group_WW_wh3l_13TeV_pt2383->SetBinContent(2,0.0161241);
   new_histo_group_WW_wh3l_13TeV_pt2383->SetBinContent(3,0.0285913);
   new_histo_group_WW_wh3l_13TeV_pt2383->SetBinContent(4,0.01447441);
   new_histo_group_WW_wh3l_13TeV_pt2383->SetBinContent(5,0.0142084);
   new_histo_group_WW_wh3l_13TeV_pt2383->SetBinContent(8,0.01530373);
   new_histo_group_WW_wh3l_13TeV_pt2383->SetBinError(2,0.0161241);
   new_histo_group_WW_wh3l_13TeV_pt2383->SetBinError(3,0.02093881);
   new_histo_group_WW_wh3l_13TeV_pt2383->SetBinError(4,0.01447441);
   new_histo_group_WW_wh3l_13TeV_pt2383->SetBinError(5,0.0142084);
   new_histo_group_WW_wh3l_13TeV_pt2383->SetBinError(8,0.01530373);
   new_histo_group_WW_wh3l_13TeV_pt2383->SetEntries(6);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_13TeV_pt2383->SetFillColor(ci);
   new_histo_group_WW_wh3l_13TeV_pt2383->SetFillStyle(3001);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_13TeV_pt2383->SetLineColor(ci);
   new_histo_group_WW_wh3l_13TeV_pt2383->GetXaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_13TeV_pt2383->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_13TeV_pt2383->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_13TeV_pt2383->GetXaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_13TeV_pt2383->GetYaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_13TeV_pt2383->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_13TeV_pt2383->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_13TeV_pt2383->GetYaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_13TeV_pt2383->GetZaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_13TeV_pt2383->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_13TeV_pt2383->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_13TeV_pt2383->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_pt2->Add(new_histo_group_WW_wh3l_13TeV_pt2,"");
   
   TH1D *new_histo_group_VVV_wh3l_13TeV_pt2384 = new TH1D("new_histo_group_VVV_wh3l_13TeV_pt2384","histo_VVV",25,10,200);
   new_histo_group_VVV_wh3l_13TeV_pt2384->SetBinContent(2,0.001403372);
   new_histo_group_VVV_wh3l_13TeV_pt2384->SetBinContent(3,0.003127295);
   new_histo_group_VVV_wh3l_13TeV_pt2384->SetBinContent(5,0.0006343185);
   new_histo_group_VVV_wh3l_13TeV_pt2384->SetBinContent(7,0.001278049);
   new_histo_group_VVV_wh3l_13TeV_pt2384->SetBinContent(8,0.000653768);
   new_histo_group_VVV_wh3l_13TeV_pt2384->SetBinContent(9,0.0005490761);
   new_histo_group_VVV_wh3l_13TeV_pt2384->SetBinContent(15,0.0006729142);
   new_histo_group_VVV_wh3l_13TeV_pt2384->SetBinError(2,0.0009982539);
   new_histo_group_VVV_wh3l_13TeV_pt2384->SetBinError(3,0.001363818);
   new_histo_group_VVV_wh3l_13TeV_pt2384->SetBinError(5,0.0006343185);
   new_histo_group_VVV_wh3l_13TeV_pt2384->SetBinError(7,0.0009038618);
   new_histo_group_VVV_wh3l_13TeV_pt2384->SetBinError(8,0.000653768);
   new_histo_group_VVV_wh3l_13TeV_pt2384->SetBinError(9,0.0005490761);
   new_histo_group_VVV_wh3l_13TeV_pt2384->SetBinError(15,0.0006729142);
   new_histo_group_VVV_wh3l_13TeV_pt2384->SetEntries(14);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_13TeV_pt2384->SetFillColor(ci);
   new_histo_group_VVV_wh3l_13TeV_pt2384->SetFillStyle(3001);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_13TeV_pt2384->SetLineColor(ci);
   new_histo_group_VVV_wh3l_13TeV_pt2384->GetXaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_13TeV_pt2384->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_13TeV_pt2384->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_13TeV_pt2384->GetXaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_13TeV_pt2384->GetYaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_13TeV_pt2384->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_13TeV_pt2384->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_13TeV_pt2384->GetYaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_13TeV_pt2384->GetZaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_13TeV_pt2384->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_13TeV_pt2384->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_13TeV_pt2384->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_pt2->Add(new_histo_group_VVV_wh3l_13TeV_pt2,"");
   
   TH1D *new_histo_group_Vg_wh3l_13TeV_pt2385 = new TH1D("new_histo_group_Vg_wh3l_13TeV_pt2385","histo_Vg",25,10,200);
   new_histo_group_Vg_wh3l_13TeV_pt2385->SetBinContent(1,0.05942902);
   new_histo_group_Vg_wh3l_13TeV_pt2385->SetBinContent(2,1.555161);
   new_histo_group_Vg_wh3l_13TeV_pt2385->SetBinContent(3,0.7452881);
   new_histo_group_Vg_wh3l_13TeV_pt2385->SetBinContent(4,0.09070755);
   new_histo_group_Vg_wh3l_13TeV_pt2385->SetBinContent(5,0.1975834);
   new_histo_group_Vg_wh3l_13TeV_pt2385->SetBinError(1,0.04232062);
   new_histo_group_Vg_wh3l_13TeV_pt2385->SetBinError(2,0.3980689);
   new_histo_group_Vg_wh3l_13TeV_pt2385->SetBinError(3,0.3740925);
   new_histo_group_Vg_wh3l_13TeV_pt2385->SetBinError(4,0.07189745);
   new_histo_group_Vg_wh3l_13TeV_pt2385->SetBinError(5,0.1399723);
   new_histo_group_Vg_wh3l_13TeV_pt2385->SetEntries(42);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_13TeV_pt2385->SetFillColor(ci);
   new_histo_group_Vg_wh3l_13TeV_pt2385->SetFillStyle(3001);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_13TeV_pt2385->SetLineColor(ci);
   new_histo_group_Vg_wh3l_13TeV_pt2385->GetXaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_13TeV_pt2385->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_13TeV_pt2385->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_13TeV_pt2385->GetXaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_13TeV_pt2385->GetYaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_13TeV_pt2385->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_13TeV_pt2385->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_13TeV_pt2385->GetYaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_13TeV_pt2385->GetZaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_13TeV_pt2385->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_13TeV_pt2385->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_13TeV_pt2385->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_pt2->Add(new_histo_group_Vg_wh3l_13TeV_pt2,"");
   
   TH1D *new_histo_group_ZZ_wh3l_13TeV_pt2386 = new TH1D("new_histo_group_ZZ_wh3l_13TeV_pt2386","histo_ZZ",25,10,200);
   new_histo_group_ZZ_wh3l_13TeV_pt2386->SetBinContent(1,0.05352081);
   new_histo_group_ZZ_wh3l_13TeV_pt2386->SetBinContent(2,0.1207363);
   new_histo_group_ZZ_wh3l_13TeV_pt2386->SetBinContent(3,0.2222083);
   new_histo_group_ZZ_wh3l_13TeV_pt2386->SetBinContent(4,0.03939452);
   new_histo_group_ZZ_wh3l_13TeV_pt2386->SetBinContent(6,0.05112314);
   new_histo_group_ZZ_wh3l_13TeV_pt2386->SetBinContent(7,0.06489699);
   new_histo_group_ZZ_wh3l_13TeV_pt2386->SetBinContent(8,0.04527812);
   new_histo_group_ZZ_wh3l_13TeV_pt2386->SetBinContent(10,0.02856258);
   new_histo_group_ZZ_wh3l_13TeV_pt2386->SetBinContent(15,0.02088597);
   new_histo_group_ZZ_wh3l_13TeV_pt2386->SetBinError(1,0.03784829);
   new_histo_group_ZZ_wh3l_13TeV_pt2386->SetBinError(2,0.06400878);
   new_histo_group_ZZ_wh3l_13TeV_pt2386->SetBinError(3,0.09967927);
   new_histo_group_ZZ_wh3l_13TeV_pt2386->SetBinError(4,0.03939452);
   new_histo_group_ZZ_wh3l_13TeV_pt2386->SetBinError(6,0.05112314);
   new_histo_group_ZZ_wh3l_13TeV_pt2386->SetBinError(7,0.04604632);
   new_histo_group_ZZ_wh3l_13TeV_pt2386->SetBinError(8,0.04527812);
   new_histo_group_ZZ_wh3l_13TeV_pt2386->SetBinError(10,0.02856258);
   new_histo_group_ZZ_wh3l_13TeV_pt2386->SetBinError(15,0.02088597);
   new_histo_group_ZZ_wh3l_13TeV_pt2386->SetEntries(19);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_13TeV_pt2386->SetFillColor(ci);
   new_histo_group_ZZ_wh3l_13TeV_pt2386->SetFillStyle(3001);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_13TeV_pt2386->SetLineColor(ci);
   new_histo_group_ZZ_wh3l_13TeV_pt2386->GetXaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_13TeV_pt2386->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_13TeV_pt2386->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_13TeV_pt2386->GetXaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_13TeV_pt2386->GetYaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_13TeV_pt2386->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_13TeV_pt2386->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_13TeV_pt2386->GetYaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_13TeV_pt2386->GetZaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_13TeV_pt2386->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_13TeV_pt2386->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_13TeV_pt2386->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_pt2->Add(new_histo_group_ZZ_wh3l_13TeV_pt2,"");
   
   TH1D *new_histo_group_WZ_wh3l_13TeV_pt2387 = new TH1D("new_histo_group_WZ_wh3l_13TeV_pt2387","histo_WZ",25,10,200);
   new_histo_group_WZ_wh3l_13TeV_pt2387->SetBinContent(1,0.5107915);
   new_histo_group_WZ_wh3l_13TeV_pt2387->SetBinContent(2,1.910542);
   new_histo_group_WZ_wh3l_13TeV_pt2387->SetBinContent(3,1.527694);
   new_histo_group_WZ_wh3l_13TeV_pt2387->SetBinContent(4,1.021922);
   new_histo_group_WZ_wh3l_13TeV_pt2387->SetBinContent(5,0.7088468);
   new_histo_group_WZ_wh3l_13TeV_pt2387->SetBinContent(6,0.4659544);
   new_histo_group_WZ_wh3l_13TeV_pt2387->SetBinContent(7,0.3361784);
   new_histo_group_WZ_wh3l_13TeV_pt2387->SetBinContent(8,0.2449273);
   new_histo_group_WZ_wh3l_13TeV_pt2387->SetBinContent(9,0.1093832);
   new_histo_group_WZ_wh3l_13TeV_pt2387->SetBinContent(10,0.1355303);
   new_histo_group_WZ_wh3l_13TeV_pt2387->SetBinContent(11,0.07746689);
   new_histo_group_WZ_wh3l_13TeV_pt2387->SetBinContent(12,0.08790933);
   new_histo_group_WZ_wh3l_13TeV_pt2387->SetBinContent(13,0.03154412);
   new_histo_group_WZ_wh3l_13TeV_pt2387->SetBinContent(14,0.05948259);
   new_histo_group_WZ_wh3l_13TeV_pt2387->SetBinContent(15,0.02515137);
   new_histo_group_WZ_wh3l_13TeV_pt2387->SetBinContent(16,0.01872941);
   new_histo_group_WZ_wh3l_13TeV_pt2387->SetBinContent(17,0.01201467);
   new_histo_group_WZ_wh3l_13TeV_pt2387->SetBinContent(18,0.01254151);
   new_histo_group_WZ_wh3l_13TeV_pt2387->SetBinContent(19,0.01630356);
   new_histo_group_WZ_wh3l_13TeV_pt2387->SetBinContent(20,0.01695862);
   new_histo_group_WZ_wh3l_13TeV_pt2387->SetBinContent(21,0.005363861);
   new_histo_group_WZ_wh3l_13TeV_pt2387->SetBinContent(22,0.0160739);
   new_histo_group_WZ_wh3l_13TeV_pt2387->SetBinContent(23,0.01172423);
   new_histo_group_WZ_wh3l_13TeV_pt2387->SetBinContent(24,0.006498538);
   new_histo_group_WZ_wh3l_13TeV_pt2387->SetBinContent(26,0.01968246);
   new_histo_group_WZ_wh3l_13TeV_pt2387->SetBinError(1,0.05167497);
   new_histo_group_WZ_wh3l_13TeV_pt2387->SetBinError(2,0.102801);
   new_histo_group_WZ_wh3l_13TeV_pt2387->SetBinError(3,0.09117341);
   new_histo_group_WZ_wh3l_13TeV_pt2387->SetBinError(4,0.07404807);
   new_histo_group_WZ_wh3l_13TeV_pt2387->SetBinError(5,0.06223226);
   new_histo_group_WZ_wh3l_13TeV_pt2387->SetBinError(6,0.05045497);
   new_histo_group_WZ_wh3l_13TeV_pt2387->SetBinError(7,0.04232532);
   new_histo_group_WZ_wh3l_13TeV_pt2387->SetBinError(8,0.03684812);
   new_histo_group_WZ_wh3l_13TeV_pt2387->SetBinError(9,0.02392163);
   new_histo_group_WZ_wh3l_13TeV_pt2387->SetBinError(10,0.02697508);
   new_histo_group_WZ_wh3l_13TeV_pt2387->SetBinError(11,0.01995097);
   new_histo_group_WZ_wh3l_13TeV_pt2387->SetBinError(12,0.0217838);
   new_histo_group_WZ_wh3l_13TeV_pt2387->SetBinError(13,0.01255252);
   new_histo_group_WZ_wh3l_13TeV_pt2387->SetBinError(14,0.01745618);
   new_histo_group_WZ_wh3l_13TeV_pt2387->SetBinError(15,0.01137927);
   new_histo_group_WZ_wh3l_13TeV_pt2387->SetBinError(16,0.01082053);
   new_histo_group_WZ_wh3l_13TeV_pt2387->SetBinError(17,0.008499444);
   new_histo_group_WZ_wh3l_13TeV_pt2387->SetBinError(18,0.007525692);
   new_histo_group_WZ_wh3l_13TeV_pt2387->SetBinError(19,0.009447107);
   new_histo_group_WZ_wh3l_13TeV_pt2387->SetBinError(20,0.009823398);
   new_histo_group_WZ_wh3l_13TeV_pt2387->SetBinError(21,0.005363861);
   new_histo_group_WZ_wh3l_13TeV_pt2387->SetBinError(22,0.009313651);
   new_histo_group_WZ_wh3l_13TeV_pt2387->SetBinError(23,0.008323294);
   new_histo_group_WZ_wh3l_13TeV_pt2387->SetBinError(24,0.005595796);
   new_histo_group_WZ_wh3l_13TeV_pt2387->SetBinError(26,0.01017656);
   new_histo_group_WZ_wh3l_13TeV_pt2387->SetEntries(1516);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_13TeV_pt2387->SetFillColor(ci);
   new_histo_group_WZ_wh3l_13TeV_pt2387->SetFillStyle(3001);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_13TeV_pt2387->SetLineColor(ci);
   new_histo_group_WZ_wh3l_13TeV_pt2387->GetXaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_13TeV_pt2387->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_13TeV_pt2387->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_13TeV_pt2387->GetXaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_13TeV_pt2387->GetYaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_13TeV_pt2387->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_13TeV_pt2387->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_13TeV_pt2387->GetYaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_13TeV_pt2387->GetZaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_13TeV_pt2387->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_13TeV_pt2387->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_13TeV_pt2387->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_pt2->Add(new_histo_group_WZ_wh3l_13TeV_pt2,"");
   
   TH1D *new_histo_group_Higgs_wh3l_13TeV_pt2388 = new TH1D("new_histo_group_Higgs_wh3l_13TeV_pt2388","histo_H_htt",25,10,200);
   new_histo_group_Higgs_wh3l_13TeV_pt2388->SetBinContent(1,0.02753581);
   new_histo_group_Higgs_wh3l_13TeV_pt2388->SetBinContent(2,0.1256051);
   new_histo_group_Higgs_wh3l_13TeV_pt2388->SetBinContent(3,0.1805374);
   new_histo_group_Higgs_wh3l_13TeV_pt2388->SetBinContent(4,0.131574);
   new_histo_group_Higgs_wh3l_13TeV_pt2388->SetBinContent(5,0.09231882);
   new_histo_group_Higgs_wh3l_13TeV_pt2388->SetBinContent(6,0.08138406);
   new_histo_group_Higgs_wh3l_13TeV_pt2388->SetBinContent(7,0.04434173);
   new_histo_group_Higgs_wh3l_13TeV_pt2388->SetBinContent(8,0.02774417);
   new_histo_group_Higgs_wh3l_13TeV_pt2388->SetBinContent(9,0.03292071);
   new_histo_group_Higgs_wh3l_13TeV_pt2388->SetBinContent(10,0.02939063);
   new_histo_group_Higgs_wh3l_13TeV_pt2388->SetBinContent(11,0.0103753);
   new_histo_group_Higgs_wh3l_13TeV_pt2388->SetBinContent(12,0.01685224);
   new_histo_group_Higgs_wh3l_13TeV_pt2388->SetBinContent(13,0.01324451);
   new_histo_group_Higgs_wh3l_13TeV_pt2388->SetBinContent(14,0.003239132);
   new_histo_group_Higgs_wh3l_13TeV_pt2388->SetBinContent(15,0.0006046926);
   new_histo_group_Higgs_wh3l_13TeV_pt2388->SetBinContent(16,0.003623047);
   new_histo_group_Higgs_wh3l_13TeV_pt2388->SetBinContent(17,0.002824565);
   new_histo_group_Higgs_wh3l_13TeV_pt2388->SetBinContent(18,0.001339243);
   new_histo_group_Higgs_wh3l_13TeV_pt2388->SetBinContent(19,0.002183632);
   new_histo_group_Higgs_wh3l_13TeV_pt2388->SetBinContent(20,0.002426825);
   new_histo_group_Higgs_wh3l_13TeV_pt2388->SetBinContent(21,0.001317216);
   new_histo_group_Higgs_wh3l_13TeV_pt2388->SetBinContent(22,0.0003548994);
   new_histo_group_Higgs_wh3l_13TeV_pt2388->SetBinContent(24,0.001657096);
   new_histo_group_Higgs_wh3l_13TeV_pt2388->SetBinContent(25,0.0001007689);
   new_histo_group_Higgs_wh3l_13TeV_pt2388->SetBinContent(26,0.002229467);
   new_histo_group_Higgs_wh3l_13TeV_pt2388->SetBinError(1,0.006345344);
   new_histo_group_Higgs_wh3l_13TeV_pt2388->SetBinError(2,0.01198928);
   new_histo_group_Higgs_wh3l_13TeV_pt2388->SetBinError(3,0.01436594);
   new_histo_group_Higgs_wh3l_13TeV_pt2388->SetBinError(4,0.01228562);
   new_histo_group_Higgs_wh3l_13TeV_pt2388->SetBinError(5,0.01012229);
   new_histo_group_Higgs_wh3l_13TeV_pt2388->SetBinError(6,0.01015655);
   new_histo_group_Higgs_wh3l_13TeV_pt2388->SetBinError(7,0.006945142);
   new_histo_group_Higgs_wh3l_13TeV_pt2388->SetBinError(8,0.005704659);
   new_histo_group_Higgs_wh3l_13TeV_pt2388->SetBinError(9,0.006157976);
   new_histo_group_Higgs_wh3l_13TeV_pt2388->SetBinError(10,0.006543951);
   new_histo_group_Higgs_wh3l_13TeV_pt2388->SetBinError(11,0.003334094);
   new_histo_group_Higgs_wh3l_13TeV_pt2388->SetBinError(12,0.004472249);
   new_histo_group_Higgs_wh3l_13TeV_pt2388->SetBinError(13,0.00421175);
   new_histo_group_Higgs_wh3l_13TeV_pt2388->SetBinError(14,0.002292934);
   new_histo_group_Higgs_wh3l_13TeV_pt2388->SetBinError(15,0.0003994273);
   new_histo_group_Higgs_wh3l_13TeV_pt2388->SetBinError(16,0.001851187);
   new_histo_group_Higgs_wh3l_13TeV_pt2388->SetBinError(17,0.001905768);
   new_histo_group_Higgs_wh3l_13TeV_pt2388->SetBinError(18,0.001149454);
   new_histo_group_Higgs_wh3l_13TeV_pt2388->SetBinError(19,0.001731257);
   new_histo_group_Higgs_wh3l_13TeV_pt2388->SetBinError(20,0.001405442);
   new_histo_group_Higgs_wh3l_13TeV_pt2388->SetBinError(21,0.0009361016);
   new_histo_group_Higgs_wh3l_13TeV_pt2388->SetBinError(22,0.0003548994);
   new_histo_group_Higgs_wh3l_13TeV_pt2388->SetBinError(24,0.001093834);
   new_histo_group_Higgs_wh3l_13TeV_pt2388->SetBinError(25,0.0001007689);
   new_histo_group_Higgs_wh3l_13TeV_pt2388->SetBinError(26,0.00175792);
   new_histo_group_Higgs_wh3l_13TeV_pt2388->SetEntries(1360);
   new_histo_group_Higgs_wh3l_13TeV_pt2388->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_13TeV_pt2388->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_13TeV_pt2388->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_13TeV_pt2388->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_13TeV_pt2388->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_pt2388->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_pt2388->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_13TeV_pt2388->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_13TeV_pt2388->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_pt2388->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_pt2388->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_13TeV_pt2388->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_13TeV_pt2388->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_pt2388->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_pt2388->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_pt2->Add(new_histo_group_Higgs_wh3l_13TeV_pt2,"");
   thsBackground_grouped_wh3l_13TeV_pt2->Draw("hist same");
   
   thsSignal_grouped_wh3l_13TeV_pt2 = new THStack();
   thsSignal_grouped_wh3l_13TeV_pt2->SetName("thsSignal_grouped_wh3l_13TeV_pt2");
   thsSignal_grouped_wh3l_13TeV_pt2->SetTitle("thsSignal_grouped_wh3l_13TeV_pt2");
   
   TH1F *thsSignal_grouped_wh3l_13TeV_pt2_stack_78 = new TH1F("thsSignal_grouped_wh3l_13TeV_pt2_stack_78","thsSignal_grouped_wh3l_13TeV_pt2",25,10,200);
   thsSignal_grouped_wh3l_13TeV_pt2_stack_78->SetMinimum(0);
   thsSignal_grouped_wh3l_13TeV_pt2_stack_78->SetMaximum(0.2046485);
   thsSignal_grouped_wh3l_13TeV_pt2_stack_78->SetDirectory(0);
   thsSignal_grouped_wh3l_13TeV_pt2_stack_78->SetStats(0);
   thsSignal_grouped_wh3l_13TeV_pt2_stack_78->SetLineStyle(0);
   thsSignal_grouped_wh3l_13TeV_pt2_stack_78->SetMarkerStyle(20);
   thsSignal_grouped_wh3l_13TeV_pt2_stack_78->GetXaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_13TeV_pt2_stack_78->GetXaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_13TeV_pt2_stack_78->GetXaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_13TeV_pt2_stack_78->GetXaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_13TeV_pt2_stack_78->GetXaxis()->SetTitleOffset(0.9);
   thsSignal_grouped_wh3l_13TeV_pt2_stack_78->GetXaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_13TeV_pt2_stack_78->GetYaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_13TeV_pt2_stack_78->GetYaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_13TeV_pt2_stack_78->GetYaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_13TeV_pt2_stack_78->GetYaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_13TeV_pt2_stack_78->GetYaxis()->SetTitleOffset(1.25);
   thsSignal_grouped_wh3l_13TeV_pt2_stack_78->GetYaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_13TeV_pt2_stack_78->GetZaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_13TeV_pt2_stack_78->GetZaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_13TeV_pt2_stack_78->GetZaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_13TeV_pt2_stack_78->GetZaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_13TeV_pt2_stack_78->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_13TeV_pt2->SetHistogram(thsSignal_grouped_wh3l_13TeV_pt2_stack_78);
   
   
   TH1D *new_histo_group_Higgs_wh3l_13TeV_pt2389 = new TH1D("new_histo_group_Higgs_wh3l_13TeV_pt2389","histo_H_htt",25,10,200);
   new_histo_group_Higgs_wh3l_13TeV_pt2389->SetBinContent(1,0.02753581);
   new_histo_group_Higgs_wh3l_13TeV_pt2389->SetBinContent(2,0.1256051);
   new_histo_group_Higgs_wh3l_13TeV_pt2389->SetBinContent(3,0.1805374);
   new_histo_group_Higgs_wh3l_13TeV_pt2389->SetBinContent(4,0.131574);
   new_histo_group_Higgs_wh3l_13TeV_pt2389->SetBinContent(5,0.09231882);
   new_histo_group_Higgs_wh3l_13TeV_pt2389->SetBinContent(6,0.08138406);
   new_histo_group_Higgs_wh3l_13TeV_pt2389->SetBinContent(7,0.04434173);
   new_histo_group_Higgs_wh3l_13TeV_pt2389->SetBinContent(8,0.02774417);
   new_histo_group_Higgs_wh3l_13TeV_pt2389->SetBinContent(9,0.03292071);
   new_histo_group_Higgs_wh3l_13TeV_pt2389->SetBinContent(10,0.02939063);
   new_histo_group_Higgs_wh3l_13TeV_pt2389->SetBinContent(11,0.0103753);
   new_histo_group_Higgs_wh3l_13TeV_pt2389->SetBinContent(12,0.01685224);
   new_histo_group_Higgs_wh3l_13TeV_pt2389->SetBinContent(13,0.01324451);
   new_histo_group_Higgs_wh3l_13TeV_pt2389->SetBinContent(14,0.003239132);
   new_histo_group_Higgs_wh3l_13TeV_pt2389->SetBinContent(15,0.0006046926);
   new_histo_group_Higgs_wh3l_13TeV_pt2389->SetBinContent(16,0.003623047);
   new_histo_group_Higgs_wh3l_13TeV_pt2389->SetBinContent(17,0.002824565);
   new_histo_group_Higgs_wh3l_13TeV_pt2389->SetBinContent(18,0.001339243);
   new_histo_group_Higgs_wh3l_13TeV_pt2389->SetBinContent(19,0.002183632);
   new_histo_group_Higgs_wh3l_13TeV_pt2389->SetBinContent(20,0.002426825);
   new_histo_group_Higgs_wh3l_13TeV_pt2389->SetBinContent(21,0.001317216);
   new_histo_group_Higgs_wh3l_13TeV_pt2389->SetBinContent(22,0.0003548994);
   new_histo_group_Higgs_wh3l_13TeV_pt2389->SetBinContent(24,0.001657096);
   new_histo_group_Higgs_wh3l_13TeV_pt2389->SetBinContent(25,0.0001007689);
   new_histo_group_Higgs_wh3l_13TeV_pt2389->SetBinContent(26,0.002229467);
   new_histo_group_Higgs_wh3l_13TeV_pt2389->SetBinError(1,0.006345344);
   new_histo_group_Higgs_wh3l_13TeV_pt2389->SetBinError(2,0.01198928);
   new_histo_group_Higgs_wh3l_13TeV_pt2389->SetBinError(3,0.01436594);
   new_histo_group_Higgs_wh3l_13TeV_pt2389->SetBinError(4,0.01228562);
   new_histo_group_Higgs_wh3l_13TeV_pt2389->SetBinError(5,0.01012229);
   new_histo_group_Higgs_wh3l_13TeV_pt2389->SetBinError(6,0.01015655);
   new_histo_group_Higgs_wh3l_13TeV_pt2389->SetBinError(7,0.006945142);
   new_histo_group_Higgs_wh3l_13TeV_pt2389->SetBinError(8,0.005704659);
   new_histo_group_Higgs_wh3l_13TeV_pt2389->SetBinError(9,0.006157976);
   new_histo_group_Higgs_wh3l_13TeV_pt2389->SetBinError(10,0.006543951);
   new_histo_group_Higgs_wh3l_13TeV_pt2389->SetBinError(11,0.003334094);
   new_histo_group_Higgs_wh3l_13TeV_pt2389->SetBinError(12,0.004472249);
   new_histo_group_Higgs_wh3l_13TeV_pt2389->SetBinError(13,0.00421175);
   new_histo_group_Higgs_wh3l_13TeV_pt2389->SetBinError(14,0.002292934);
   new_histo_group_Higgs_wh3l_13TeV_pt2389->SetBinError(15,0.0003994273);
   new_histo_group_Higgs_wh3l_13TeV_pt2389->SetBinError(16,0.001851187);
   new_histo_group_Higgs_wh3l_13TeV_pt2389->SetBinError(17,0.001905768);
   new_histo_group_Higgs_wh3l_13TeV_pt2389->SetBinError(18,0.001149454);
   new_histo_group_Higgs_wh3l_13TeV_pt2389->SetBinError(19,0.001731257);
   new_histo_group_Higgs_wh3l_13TeV_pt2389->SetBinError(20,0.001405442);
   new_histo_group_Higgs_wh3l_13TeV_pt2389->SetBinError(21,0.0009361016);
   new_histo_group_Higgs_wh3l_13TeV_pt2389->SetBinError(22,0.0003548994);
   new_histo_group_Higgs_wh3l_13TeV_pt2389->SetBinError(24,0.001093834);
   new_histo_group_Higgs_wh3l_13TeV_pt2389->SetBinError(25,0.0001007689);
   new_histo_group_Higgs_wh3l_13TeV_pt2389->SetBinError(26,0.00175792);
   new_histo_group_Higgs_wh3l_13TeV_pt2389->SetEntries(1360);
   new_histo_group_Higgs_wh3l_13TeV_pt2389->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_13TeV_pt2389->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_13TeV_pt2389->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_13TeV_pt2389->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_13TeV_pt2389->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_pt2389->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_pt2389->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_13TeV_pt2389->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_13TeV_pt2389->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_pt2389->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_pt2389->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_13TeV_pt2389->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_13TeV_pt2389->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_pt2389->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_pt2389->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_13TeV_pt2->Add(new_histo_group_Higgs_wh3l_13TeV_pt2,"");
   thsSignal_grouped_wh3l_13TeV_pt2->Draw("hist same noclear");
   
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
   0.7524818,
   4.945431,
   6.731842,
   2.552603,
   1.459908,
   1.829646,
   0.5291013,
   0.9856517,
   0.108282,
   0.1752879,
   0.07746689,
   0.08790933,
   0.03154412,
   0.05948259,
   0.04671025,
   0.01872941,
   0.01201467,
   0.01254151,
   0.01630357,
   0.01695862,
   0.005363861,
   0.0160739,
   0.01172423,
   0.006498538,
   0};
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
   0.2709717,
   1.532819,
   2.680061,
   1.434195,
   0.779153,
   1.116633,
   0.2208545,
   0.6066923,
   0.02633408,
   0.06696472,
   0.0202192,
   0.02206665,
   0.01258317,
   0.01761933,
   0.03298203,
   0.01084683,
   0.008504769,
   0.007560703,
   0.009481763,
   0.009861538,
   0.005363949,
   0.009328266,
   0.008330718,
   0.005607828,
   0};
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
   0.7899624,
   1.532076,
   2.679948,
   1.434188,
   0.7971985,
   1.116628,
   0.229563,
   0.6066905,
   0.026348,
   0.06697415,
   0.02013287,
   0.02200056,
   0.01257013,
   0.0175912,
   0.03298777,
   0.0108494,
   0.008502332,
   0.00756621,
   0.009480076,
   0.009838722,
   0.005363949,
   0.009328799,
   0.008331414,
   0.005606678,
   0};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(25,_fx3077,_fy3077,_felx3077,_fehx3077,_fely3077,_fehy3077);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(12);
   grae->SetFillStyle(3004);
   grae->SetLineColor(12);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3077 = new TH1F("Graph_Graph3077","",100,0,219);
   Graph_Graph3077->SetMinimum(-0.941179);
   Graph_Graph3077->SetMaximum(10.35297);
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
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   grae = new TGraphAsymmErrors(25,_fx3078,_fy3078,_felx3078,_fehx3078,_fely3078,_fehy3078);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(1);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3078 = new TH1F("Graph_Graph3078","",100,0,219);
   Graph_Graph3078->SetMinimum(0);
   Graph_Graph3078->SetMaximum(1.262698);
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
   TLegendEntry *entry=leg->AddEntry("new_histo_group_Fake_wh3l_13TeV_pt2","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_13TeV_pt2","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_13TeV_pt2","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_13TeV_pt2","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_13TeV_pt2","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_13TeV_pt2","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_13TeV_pt2","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_13TeV_pt2","Data","EPL");
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
   entry=leg->AddEntry("new_histo_group_Fake_wh3l_13TeV_pt2","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_13TeV_pt2","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_13TeV_pt2","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_13TeV_pt2","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_13TeV_pt2","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_13TeV_pt2","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_13TeV_pt2","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_13TeV_pt2","Data","EPL");
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
   hframe_copy390->SetMaximum(17.28095);
   hframe_copy390->SetDirectory(0);
   hframe_copy390->SetStats(0);
   hframe_copy390->SetLineStyle(0);
   hframe_copy390->SetMarkerStyle(20);
   hframe_copy390->GetXaxis()->SetTitle("lept2_p_{T} [GeV]");
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
   ccwh3l_13TeV_pt2->Modified();
   ccwh3l_13TeV_pt2->cd();
   ccwh3l_13TeV_pt2->SetSelected(ccwh3l_13TeV_pt2);
}
