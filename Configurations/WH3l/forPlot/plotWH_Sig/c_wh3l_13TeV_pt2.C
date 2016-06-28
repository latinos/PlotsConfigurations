void c_wh3l_13TeV_pt2()
{
//=========Macro generated from canvas: ccwh3l_13TeV_pt2/cc
//=========  (Tue Jun 28 13:56:25 2016) by ROOT version6.02/13
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
   
   TH1F *hframe251 = new TH1F("hframe251","",1000,10,200);
   hframe251->SetMinimum(0);
   hframe251->SetMaximum(17.28095);
   hframe251->SetDirectory(0);
   hframe251->SetStats(0);
   hframe251->SetLineStyle(0);
   hframe251->SetMarkerStyle(20);
   hframe251->GetXaxis()->SetTitle("lept2_p_{T} [GeV]");
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
   
   THStack *thsBackground_grouped_wh3l_13TeV_pt2 = new THStack();
   thsBackground_grouped_wh3l_13TeV_pt2->SetName("thsBackground_grouped_wh3l_13TeV_pt2");
   thsBackground_grouped_wh3l_13TeV_pt2->SetTitle("thsBackground_grouped_wh3l_13TeV_pt2");
   
   TH1F *thsBackground_grouped_wh3l_13TeV_pt2_stack_51 = new TH1F("thsBackground_grouped_wh3l_13TeV_pt2_stack_51","thsBackground_grouped_wh3l_13TeV_pt2",25,10,200);
   thsBackground_grouped_wh3l_13TeV_pt2_stack_51->SetMinimum(-0.5259424);
   thsBackground_grouped_wh3l_13TeV_pt2_stack_51->SetMaximum(7.257998);
   thsBackground_grouped_wh3l_13TeV_pt2_stack_51->SetDirectory(0);
   thsBackground_grouped_wh3l_13TeV_pt2_stack_51->SetStats(0);
   thsBackground_grouped_wh3l_13TeV_pt2_stack_51->SetLineStyle(0);
   thsBackground_grouped_wh3l_13TeV_pt2_stack_51->SetMarkerStyle(20);
   thsBackground_grouped_wh3l_13TeV_pt2_stack_51->GetXaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_13TeV_pt2_stack_51->GetXaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_13TeV_pt2_stack_51->GetXaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_13TeV_pt2_stack_51->GetXaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_13TeV_pt2_stack_51->GetXaxis()->SetTitleOffset(0.9);
   thsBackground_grouped_wh3l_13TeV_pt2_stack_51->GetXaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_pt2_stack_51->GetYaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_13TeV_pt2_stack_51->GetYaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_13TeV_pt2_stack_51->GetYaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_13TeV_pt2_stack_51->GetYaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_13TeV_pt2_stack_51->GetYaxis()->SetTitleOffset(1.25);
   thsBackground_grouped_wh3l_13TeV_pt2_stack_51->GetYaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_pt2_stack_51->GetZaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_13TeV_pt2_stack_51->GetZaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_13TeV_pt2_stack_51->GetZaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_13TeV_pt2_stack_51->GetZaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_13TeV_pt2_stack_51->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_pt2->SetHistogram(thsBackground_grouped_wh3l_13TeV_pt2_stack_51);
   
   
   TH1D *new_histo_group_Fake_wh3l_13TeV_pt2252 = new TH1D("new_histo_group_Fake_wh3l_13TeV_pt2252","histo_Fake",25,10,200);
   new_histo_group_Fake_wh3l_13TeV_pt2252->SetBinContent(1,0.1287405);
   new_histo_group_Fake_wh3l_13TeV_pt2252->SetBinContent(2,1.341464);
   new_histo_group_Fake_wh3l_13TeV_pt2252->SetBinContent(3,4.204932);
   new_histo_group_Fake_wh3l_13TeV_pt2252->SetBinContent(4,1.386104);
   new_histo_group_Fake_wh3l_13TeV_pt2252->SetBinContent(5,0.5386347);
   new_histo_group_Fake_wh3l_13TeV_pt2252->SetBinContent(6,1.312568);
   new_histo_group_Fake_wh3l_13TeV_pt2252->SetBinContent(7,0.1267478);
   new_histo_group_Fake_wh3l_13TeV_pt2252->SetBinContent(8,0.6794888);
   new_histo_group_Fake_wh3l_13TeV_pt2252->SetBinContent(9,-0.001650331);
   new_histo_group_Fake_wh3l_13TeV_pt2252->SetBinContent(10,0.01119502);
   new_histo_group_Fake_wh3l_13TeV_pt2252->SetBinError(1,0.6546829);
   new_histo_group_Fake_wh3l_13TeV_pt2252->SetBinError(2,0.8644659);
   new_histo_group_Fake_wh3l_13TeV_pt2252->SetBinError(3,1.650762);
   new_histo_group_Fake_wh3l_13TeV_pt2252->SetBinError(4,1.14935);
   new_histo_group_Fake_wh3l_13TeV_pt2252->SetBinError(5,0.5572774);
   new_histo_group_Fake_wh3l_13TeV_pt2252->SetBinError(6,0.9160912);
   new_histo_group_Fake_wh3l_13TeV_pt2252->SetBinError(7,0.135618);
   new_histo_group_Fake_wh3l_13TeV_pt2252->SetBinError(8,0.4599755);
   new_histo_group_Fake_wh3l_13TeV_pt2252->SetBinError(9,0.001650331);
   new_histo_group_Fake_wh3l_13TeV_pt2252->SetBinError(10,0.01119502);
   new_histo_group_Fake_wh3l_13TeV_pt2252->SetEntries(109);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_13TeV_pt2252->SetFillColor(ci);
   new_histo_group_Fake_wh3l_13TeV_pt2252->SetFillStyle(3001);

   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_13TeV_pt2252->SetLineColor(ci);
   new_histo_group_Fake_wh3l_13TeV_pt2252->GetXaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_13TeV_pt2252->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_13TeV_pt2252->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_13TeV_pt2252->GetXaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_13TeV_pt2252->GetYaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_13TeV_pt2252->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_13TeV_pt2252->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_13TeV_pt2252->GetYaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_13TeV_pt2252->GetZaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_13TeV_pt2252->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_13TeV_pt2252->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_13TeV_pt2252->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_pt2->Add(new_histo_group_Fake_wh3l_13TeV_pt2,"");
   
   TH1D *new_histo_group_WW_wh3l_13TeV_pt2253 = new TH1D("new_histo_group_WW_wh3l_13TeV_pt2253","histo_WW",25,10,200);
   new_histo_group_WW_wh3l_13TeV_pt2253->SetBinContent(2,0.0161241);
   new_histo_group_WW_wh3l_13TeV_pt2253->SetBinContent(3,0.0285913);
   new_histo_group_WW_wh3l_13TeV_pt2253->SetBinContent(4,0.01447441);
   new_histo_group_WW_wh3l_13TeV_pt2253->SetBinContent(5,0.0142084);
   new_histo_group_WW_wh3l_13TeV_pt2253->SetBinContent(8,0.01530373);
   new_histo_group_WW_wh3l_13TeV_pt2253->SetBinError(2,0.0161241);
   new_histo_group_WW_wh3l_13TeV_pt2253->SetBinError(3,0.02093881);
   new_histo_group_WW_wh3l_13TeV_pt2253->SetBinError(4,0.01447441);
   new_histo_group_WW_wh3l_13TeV_pt2253->SetBinError(5,0.0142084);
   new_histo_group_WW_wh3l_13TeV_pt2253->SetBinError(8,0.01530373);
   new_histo_group_WW_wh3l_13TeV_pt2253->SetEntries(6);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_13TeV_pt2253->SetFillColor(ci);
   new_histo_group_WW_wh3l_13TeV_pt2253->SetFillStyle(3001);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_13TeV_pt2253->SetLineColor(ci);
   new_histo_group_WW_wh3l_13TeV_pt2253->GetXaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_13TeV_pt2253->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_13TeV_pt2253->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_13TeV_pt2253->GetXaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_13TeV_pt2253->GetYaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_13TeV_pt2253->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_13TeV_pt2253->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_13TeV_pt2253->GetYaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_13TeV_pt2253->GetZaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_13TeV_pt2253->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_13TeV_pt2253->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_13TeV_pt2253->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_pt2->Add(new_histo_group_WW_wh3l_13TeV_pt2,"");
   
   TH1D *new_histo_group_VVV_wh3l_13TeV_pt2254 = new TH1D("new_histo_group_VVV_wh3l_13TeV_pt2254","histo_VVV",25,10,200);
   new_histo_group_VVV_wh3l_13TeV_pt2254->SetBinContent(2,0.001403372);
   new_histo_group_VVV_wh3l_13TeV_pt2254->SetBinContent(3,0.003127295);
   new_histo_group_VVV_wh3l_13TeV_pt2254->SetBinContent(5,0.0006343185);
   new_histo_group_VVV_wh3l_13TeV_pt2254->SetBinContent(7,0.001278049);
   new_histo_group_VVV_wh3l_13TeV_pt2254->SetBinContent(8,0.000653768);
   new_histo_group_VVV_wh3l_13TeV_pt2254->SetBinContent(9,0.0005490761);
   new_histo_group_VVV_wh3l_13TeV_pt2254->SetBinContent(15,0.0006729142);
   new_histo_group_VVV_wh3l_13TeV_pt2254->SetBinError(2,0.0009982539);
   new_histo_group_VVV_wh3l_13TeV_pt2254->SetBinError(3,0.001363818);
   new_histo_group_VVV_wh3l_13TeV_pt2254->SetBinError(5,0.0006343185);
   new_histo_group_VVV_wh3l_13TeV_pt2254->SetBinError(7,0.0009038618);
   new_histo_group_VVV_wh3l_13TeV_pt2254->SetBinError(8,0.000653768);
   new_histo_group_VVV_wh3l_13TeV_pt2254->SetBinError(9,0.0005490761);
   new_histo_group_VVV_wh3l_13TeV_pt2254->SetBinError(15,0.0006729142);
   new_histo_group_VVV_wh3l_13TeV_pt2254->SetEntries(14);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_13TeV_pt2254->SetFillColor(ci);
   new_histo_group_VVV_wh3l_13TeV_pt2254->SetFillStyle(3001);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_13TeV_pt2254->SetLineColor(ci);
   new_histo_group_VVV_wh3l_13TeV_pt2254->GetXaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_13TeV_pt2254->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_13TeV_pt2254->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_13TeV_pt2254->GetXaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_13TeV_pt2254->GetYaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_13TeV_pt2254->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_13TeV_pt2254->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_13TeV_pt2254->GetYaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_13TeV_pt2254->GetZaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_13TeV_pt2254->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_13TeV_pt2254->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_13TeV_pt2254->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_pt2->Add(new_histo_group_VVV_wh3l_13TeV_pt2,"");
   
   TH1D *new_histo_group_Vg_wh3l_13TeV_pt2255 = new TH1D("new_histo_group_Vg_wh3l_13TeV_pt2255","histo_Vg",25,10,200);
   new_histo_group_Vg_wh3l_13TeV_pt2255->SetBinContent(1,0.05942902);
   new_histo_group_Vg_wh3l_13TeV_pt2255->SetBinContent(2,1.555161);
   new_histo_group_Vg_wh3l_13TeV_pt2255->SetBinContent(3,0.7452881);
   new_histo_group_Vg_wh3l_13TeV_pt2255->SetBinContent(4,0.09070755);
   new_histo_group_Vg_wh3l_13TeV_pt2255->SetBinContent(5,0.1975834);
   new_histo_group_Vg_wh3l_13TeV_pt2255->SetBinError(1,0.04232062);
   new_histo_group_Vg_wh3l_13TeV_pt2255->SetBinError(2,0.3980689);
   new_histo_group_Vg_wh3l_13TeV_pt2255->SetBinError(3,0.3740925);
   new_histo_group_Vg_wh3l_13TeV_pt2255->SetBinError(4,0.07189745);
   new_histo_group_Vg_wh3l_13TeV_pt2255->SetBinError(5,0.1399723);
   new_histo_group_Vg_wh3l_13TeV_pt2255->SetEntries(42);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_13TeV_pt2255->SetFillColor(ci);
   new_histo_group_Vg_wh3l_13TeV_pt2255->SetFillStyle(3001);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_13TeV_pt2255->SetLineColor(ci);
   new_histo_group_Vg_wh3l_13TeV_pt2255->GetXaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_13TeV_pt2255->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_13TeV_pt2255->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_13TeV_pt2255->GetXaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_13TeV_pt2255->GetYaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_13TeV_pt2255->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_13TeV_pt2255->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_13TeV_pt2255->GetYaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_13TeV_pt2255->GetZaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_13TeV_pt2255->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_13TeV_pt2255->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_13TeV_pt2255->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_pt2->Add(new_histo_group_Vg_wh3l_13TeV_pt2,"");
   
   TH1D *new_histo_group_ZZ_wh3l_13TeV_pt2256 = new TH1D("new_histo_group_ZZ_wh3l_13TeV_pt2256","histo_ZZ",25,10,200);
   new_histo_group_ZZ_wh3l_13TeV_pt2256->SetBinContent(1,0.05352081);
   new_histo_group_ZZ_wh3l_13TeV_pt2256->SetBinContent(2,0.1207363);
   new_histo_group_ZZ_wh3l_13TeV_pt2256->SetBinContent(3,0.2222083);
   new_histo_group_ZZ_wh3l_13TeV_pt2256->SetBinContent(4,0.03939452);
   new_histo_group_ZZ_wh3l_13TeV_pt2256->SetBinContent(6,0.05112314);
   new_histo_group_ZZ_wh3l_13TeV_pt2256->SetBinContent(7,0.06489699);
   new_histo_group_ZZ_wh3l_13TeV_pt2256->SetBinContent(8,0.04527812);
   new_histo_group_ZZ_wh3l_13TeV_pt2256->SetBinContent(10,0.02856258);
   new_histo_group_ZZ_wh3l_13TeV_pt2256->SetBinContent(15,0.02088597);
   new_histo_group_ZZ_wh3l_13TeV_pt2256->SetBinError(1,0.03784829);
   new_histo_group_ZZ_wh3l_13TeV_pt2256->SetBinError(2,0.06400878);
   new_histo_group_ZZ_wh3l_13TeV_pt2256->SetBinError(3,0.09967927);
   new_histo_group_ZZ_wh3l_13TeV_pt2256->SetBinError(4,0.03939452);
   new_histo_group_ZZ_wh3l_13TeV_pt2256->SetBinError(6,0.05112314);
   new_histo_group_ZZ_wh3l_13TeV_pt2256->SetBinError(7,0.04604632);
   new_histo_group_ZZ_wh3l_13TeV_pt2256->SetBinError(8,0.04527812);
   new_histo_group_ZZ_wh3l_13TeV_pt2256->SetBinError(10,0.02856258);
   new_histo_group_ZZ_wh3l_13TeV_pt2256->SetBinError(15,0.02088597);
   new_histo_group_ZZ_wh3l_13TeV_pt2256->SetEntries(19);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_13TeV_pt2256->SetFillColor(ci);
   new_histo_group_ZZ_wh3l_13TeV_pt2256->SetFillStyle(3001);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_13TeV_pt2256->SetLineColor(ci);
   new_histo_group_ZZ_wh3l_13TeV_pt2256->GetXaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_13TeV_pt2256->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_13TeV_pt2256->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_13TeV_pt2256->GetXaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_13TeV_pt2256->GetYaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_13TeV_pt2256->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_13TeV_pt2256->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_13TeV_pt2256->GetYaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_13TeV_pt2256->GetZaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_13TeV_pt2256->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_13TeV_pt2256->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_13TeV_pt2256->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_pt2->Add(new_histo_group_ZZ_wh3l_13TeV_pt2,"");
   
   TH1D *new_histo_group_WZ_wh3l_13TeV_pt2257 = new TH1D("new_histo_group_WZ_wh3l_13TeV_pt2257","histo_WZ",25,10,200);
   new_histo_group_WZ_wh3l_13TeV_pt2257->SetBinContent(1,0.5107915);
   new_histo_group_WZ_wh3l_13TeV_pt2257->SetBinContent(2,1.910542);
   new_histo_group_WZ_wh3l_13TeV_pt2257->SetBinContent(3,1.527694);
   new_histo_group_WZ_wh3l_13TeV_pt2257->SetBinContent(4,1.021922);
   new_histo_group_WZ_wh3l_13TeV_pt2257->SetBinContent(5,0.7088468);
   new_histo_group_WZ_wh3l_13TeV_pt2257->SetBinContent(6,0.4659544);
   new_histo_group_WZ_wh3l_13TeV_pt2257->SetBinContent(7,0.3361784);
   new_histo_group_WZ_wh3l_13TeV_pt2257->SetBinContent(8,0.2449273);
   new_histo_group_WZ_wh3l_13TeV_pt2257->SetBinContent(9,0.1093832);
   new_histo_group_WZ_wh3l_13TeV_pt2257->SetBinContent(10,0.1355303);
   new_histo_group_WZ_wh3l_13TeV_pt2257->SetBinContent(11,0.07746689);
   new_histo_group_WZ_wh3l_13TeV_pt2257->SetBinContent(12,0.08790933);
   new_histo_group_WZ_wh3l_13TeV_pt2257->SetBinContent(13,0.03154412);
   new_histo_group_WZ_wh3l_13TeV_pt2257->SetBinContent(14,0.05948259);
   new_histo_group_WZ_wh3l_13TeV_pt2257->SetBinContent(15,0.02515137);
   new_histo_group_WZ_wh3l_13TeV_pt2257->SetBinContent(16,0.01872941);
   new_histo_group_WZ_wh3l_13TeV_pt2257->SetBinContent(17,0.01201467);
   new_histo_group_WZ_wh3l_13TeV_pt2257->SetBinContent(18,0.01254151);
   new_histo_group_WZ_wh3l_13TeV_pt2257->SetBinContent(19,0.01630356);
   new_histo_group_WZ_wh3l_13TeV_pt2257->SetBinContent(20,0.01695862);
   new_histo_group_WZ_wh3l_13TeV_pt2257->SetBinContent(21,0.005363861);
   new_histo_group_WZ_wh3l_13TeV_pt2257->SetBinContent(22,0.0160739);
   new_histo_group_WZ_wh3l_13TeV_pt2257->SetBinContent(23,0.01172423);
   new_histo_group_WZ_wh3l_13TeV_pt2257->SetBinContent(24,0.006498538);
   new_histo_group_WZ_wh3l_13TeV_pt2257->SetBinContent(26,0.01968246);
   new_histo_group_WZ_wh3l_13TeV_pt2257->SetBinError(1,0.05167497);
   new_histo_group_WZ_wh3l_13TeV_pt2257->SetBinError(2,0.102801);
   new_histo_group_WZ_wh3l_13TeV_pt2257->SetBinError(3,0.09117341);
   new_histo_group_WZ_wh3l_13TeV_pt2257->SetBinError(4,0.07404807);
   new_histo_group_WZ_wh3l_13TeV_pt2257->SetBinError(5,0.06223226);
   new_histo_group_WZ_wh3l_13TeV_pt2257->SetBinError(6,0.05045497);
   new_histo_group_WZ_wh3l_13TeV_pt2257->SetBinError(7,0.04232532);
   new_histo_group_WZ_wh3l_13TeV_pt2257->SetBinError(8,0.03684812);
   new_histo_group_WZ_wh3l_13TeV_pt2257->SetBinError(9,0.02392163);
   new_histo_group_WZ_wh3l_13TeV_pt2257->SetBinError(10,0.02697508);
   new_histo_group_WZ_wh3l_13TeV_pt2257->SetBinError(11,0.01995097);
   new_histo_group_WZ_wh3l_13TeV_pt2257->SetBinError(12,0.0217838);
   new_histo_group_WZ_wh3l_13TeV_pt2257->SetBinError(13,0.01255252);
   new_histo_group_WZ_wh3l_13TeV_pt2257->SetBinError(14,0.01745618);
   new_histo_group_WZ_wh3l_13TeV_pt2257->SetBinError(15,0.01137927);
   new_histo_group_WZ_wh3l_13TeV_pt2257->SetBinError(16,0.01082053);
   new_histo_group_WZ_wh3l_13TeV_pt2257->SetBinError(17,0.008499444);
   new_histo_group_WZ_wh3l_13TeV_pt2257->SetBinError(18,0.007525692);
   new_histo_group_WZ_wh3l_13TeV_pt2257->SetBinError(19,0.009447107);
   new_histo_group_WZ_wh3l_13TeV_pt2257->SetBinError(20,0.009823398);
   new_histo_group_WZ_wh3l_13TeV_pt2257->SetBinError(21,0.005363861);
   new_histo_group_WZ_wh3l_13TeV_pt2257->SetBinError(22,0.009313651);
   new_histo_group_WZ_wh3l_13TeV_pt2257->SetBinError(23,0.008323294);
   new_histo_group_WZ_wh3l_13TeV_pt2257->SetBinError(24,0.005595796);
   new_histo_group_WZ_wh3l_13TeV_pt2257->SetBinError(26,0.01017656);
   new_histo_group_WZ_wh3l_13TeV_pt2257->SetEntries(1516);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_13TeV_pt2257->SetFillColor(ci);
   new_histo_group_WZ_wh3l_13TeV_pt2257->SetFillStyle(3001);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_13TeV_pt2257->SetLineColor(ci);
   new_histo_group_WZ_wh3l_13TeV_pt2257->GetXaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_13TeV_pt2257->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_13TeV_pt2257->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_13TeV_pt2257->GetXaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_13TeV_pt2257->GetYaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_13TeV_pt2257->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_13TeV_pt2257->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_13TeV_pt2257->GetYaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_13TeV_pt2257->GetZaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_13TeV_pt2257->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_13TeV_pt2257->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_13TeV_pt2257->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_pt2->Add(new_histo_group_WZ_wh3l_13TeV_pt2,"");
   
   TH1D *new_histo_group_Higgs_wh3l_13TeV_pt2258 = new TH1D("new_histo_group_Higgs_wh3l_13TeV_pt2258","histo_H_htt",25,10,200);
   new_histo_group_Higgs_wh3l_13TeV_pt2258->SetBinContent(1,0.02753581);
   new_histo_group_Higgs_wh3l_13TeV_pt2258->SetBinContent(2,0.1256051);
   new_histo_group_Higgs_wh3l_13TeV_pt2258->SetBinContent(3,0.1805374);
   new_histo_group_Higgs_wh3l_13TeV_pt2258->SetBinContent(4,0.131574);
   new_histo_group_Higgs_wh3l_13TeV_pt2258->SetBinContent(5,0.09231882);
   new_histo_group_Higgs_wh3l_13TeV_pt2258->SetBinContent(6,0.08138406);
   new_histo_group_Higgs_wh3l_13TeV_pt2258->SetBinContent(7,0.04434173);
   new_histo_group_Higgs_wh3l_13TeV_pt2258->SetBinContent(8,0.02774417);
   new_histo_group_Higgs_wh3l_13TeV_pt2258->SetBinContent(9,0.03292071);
   new_histo_group_Higgs_wh3l_13TeV_pt2258->SetBinContent(10,0.02939063);
   new_histo_group_Higgs_wh3l_13TeV_pt2258->SetBinContent(11,0.0103753);
   new_histo_group_Higgs_wh3l_13TeV_pt2258->SetBinContent(12,0.01685224);
   new_histo_group_Higgs_wh3l_13TeV_pt2258->SetBinContent(13,0.01324451);
   new_histo_group_Higgs_wh3l_13TeV_pt2258->SetBinContent(14,0.003239132);
   new_histo_group_Higgs_wh3l_13TeV_pt2258->SetBinContent(15,0.0006046926);
   new_histo_group_Higgs_wh3l_13TeV_pt2258->SetBinContent(16,0.003623047);
   new_histo_group_Higgs_wh3l_13TeV_pt2258->SetBinContent(17,0.002824565);
   new_histo_group_Higgs_wh3l_13TeV_pt2258->SetBinContent(18,0.001339243);
   new_histo_group_Higgs_wh3l_13TeV_pt2258->SetBinContent(19,0.002183632);
   new_histo_group_Higgs_wh3l_13TeV_pt2258->SetBinContent(20,0.002426825);
   new_histo_group_Higgs_wh3l_13TeV_pt2258->SetBinContent(21,0.001317216);
   new_histo_group_Higgs_wh3l_13TeV_pt2258->SetBinContent(22,0.0003548994);
   new_histo_group_Higgs_wh3l_13TeV_pt2258->SetBinContent(24,0.001657096);
   new_histo_group_Higgs_wh3l_13TeV_pt2258->SetBinContent(25,0.0001007689);
   new_histo_group_Higgs_wh3l_13TeV_pt2258->SetBinContent(26,0.002229467);
   new_histo_group_Higgs_wh3l_13TeV_pt2258->SetBinError(1,0.006345344);
   new_histo_group_Higgs_wh3l_13TeV_pt2258->SetBinError(2,0.01198928);
   new_histo_group_Higgs_wh3l_13TeV_pt2258->SetBinError(3,0.01436594);
   new_histo_group_Higgs_wh3l_13TeV_pt2258->SetBinError(4,0.01228562);
   new_histo_group_Higgs_wh3l_13TeV_pt2258->SetBinError(5,0.01012229);
   new_histo_group_Higgs_wh3l_13TeV_pt2258->SetBinError(6,0.01015655);
   new_histo_group_Higgs_wh3l_13TeV_pt2258->SetBinError(7,0.006945142);
   new_histo_group_Higgs_wh3l_13TeV_pt2258->SetBinError(8,0.005704659);
   new_histo_group_Higgs_wh3l_13TeV_pt2258->SetBinError(9,0.006157976);
   new_histo_group_Higgs_wh3l_13TeV_pt2258->SetBinError(10,0.006543951);
   new_histo_group_Higgs_wh3l_13TeV_pt2258->SetBinError(11,0.003334094);
   new_histo_group_Higgs_wh3l_13TeV_pt2258->SetBinError(12,0.004472249);
   new_histo_group_Higgs_wh3l_13TeV_pt2258->SetBinError(13,0.00421175);
   new_histo_group_Higgs_wh3l_13TeV_pt2258->SetBinError(14,0.002292934);
   new_histo_group_Higgs_wh3l_13TeV_pt2258->SetBinError(15,0.0003994273);
   new_histo_group_Higgs_wh3l_13TeV_pt2258->SetBinError(16,0.001851187);
   new_histo_group_Higgs_wh3l_13TeV_pt2258->SetBinError(17,0.001905768);
   new_histo_group_Higgs_wh3l_13TeV_pt2258->SetBinError(18,0.001149454);
   new_histo_group_Higgs_wh3l_13TeV_pt2258->SetBinError(19,0.001731257);
   new_histo_group_Higgs_wh3l_13TeV_pt2258->SetBinError(20,0.001405442);
   new_histo_group_Higgs_wh3l_13TeV_pt2258->SetBinError(21,0.0009361016);
   new_histo_group_Higgs_wh3l_13TeV_pt2258->SetBinError(22,0.0003548994);
   new_histo_group_Higgs_wh3l_13TeV_pt2258->SetBinError(24,0.001093834);
   new_histo_group_Higgs_wh3l_13TeV_pt2258->SetBinError(25,0.0001007689);
   new_histo_group_Higgs_wh3l_13TeV_pt2258->SetBinError(26,0.00175792);
   new_histo_group_Higgs_wh3l_13TeV_pt2258->SetEntries(1360);
   new_histo_group_Higgs_wh3l_13TeV_pt2258->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_13TeV_pt2258->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_13TeV_pt2258->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_13TeV_pt2258->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_13TeV_pt2258->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_pt2258->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_pt2258->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_13TeV_pt2258->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_13TeV_pt2258->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_pt2258->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_pt2258->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_13TeV_pt2258->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_13TeV_pt2258->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_pt2258->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_pt2258->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_pt2->Add(new_histo_group_Higgs_wh3l_13TeV_pt2,"");
   thsBackground_grouped_wh3l_13TeV_pt2->Draw("hist same");
   
   thsSignal_grouped_wh3l_13TeV_pt2 = new THStack();
   thsSignal_grouped_wh3l_13TeV_pt2->SetName("thsSignal_grouped_wh3l_13TeV_pt2");
   thsSignal_grouped_wh3l_13TeV_pt2->SetTitle("thsSignal_grouped_wh3l_13TeV_pt2");
   
   TH1F *thsSignal_grouped_wh3l_13TeV_pt2_stack_52 = new TH1F("thsSignal_grouped_wh3l_13TeV_pt2_stack_52","thsSignal_grouped_wh3l_13TeV_pt2",25,10,200);
   thsSignal_grouped_wh3l_13TeV_pt2_stack_52->SetMinimum(0);
   thsSignal_grouped_wh3l_13TeV_pt2_stack_52->SetMaximum(0.2046485);
   thsSignal_grouped_wh3l_13TeV_pt2_stack_52->SetDirectory(0);
   thsSignal_grouped_wh3l_13TeV_pt2_stack_52->SetStats(0);
   thsSignal_grouped_wh3l_13TeV_pt2_stack_52->SetLineStyle(0);
   thsSignal_grouped_wh3l_13TeV_pt2_stack_52->SetMarkerStyle(20);
   thsSignal_grouped_wh3l_13TeV_pt2_stack_52->GetXaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_13TeV_pt2_stack_52->GetXaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_13TeV_pt2_stack_52->GetXaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_13TeV_pt2_stack_52->GetXaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_13TeV_pt2_stack_52->GetXaxis()->SetTitleOffset(0.9);
   thsSignal_grouped_wh3l_13TeV_pt2_stack_52->GetXaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_13TeV_pt2_stack_52->GetYaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_13TeV_pt2_stack_52->GetYaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_13TeV_pt2_stack_52->GetYaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_13TeV_pt2_stack_52->GetYaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_13TeV_pt2_stack_52->GetYaxis()->SetTitleOffset(1.25);
   thsSignal_grouped_wh3l_13TeV_pt2_stack_52->GetYaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_13TeV_pt2_stack_52->GetZaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_13TeV_pt2_stack_52->GetZaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_13TeV_pt2_stack_52->GetZaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_13TeV_pt2_stack_52->GetZaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_13TeV_pt2_stack_52->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_13TeV_pt2->SetHistogram(thsSignal_grouped_wh3l_13TeV_pt2_stack_52);
   
   
   TH1D *new_histo_group_Higgs_wh3l_13TeV_pt2259 = new TH1D("new_histo_group_Higgs_wh3l_13TeV_pt2259","histo_H_htt",25,10,200);
   new_histo_group_Higgs_wh3l_13TeV_pt2259->SetBinContent(1,0.02753581);
   new_histo_group_Higgs_wh3l_13TeV_pt2259->SetBinContent(2,0.1256051);
   new_histo_group_Higgs_wh3l_13TeV_pt2259->SetBinContent(3,0.1805374);
   new_histo_group_Higgs_wh3l_13TeV_pt2259->SetBinContent(4,0.131574);
   new_histo_group_Higgs_wh3l_13TeV_pt2259->SetBinContent(5,0.09231882);
   new_histo_group_Higgs_wh3l_13TeV_pt2259->SetBinContent(6,0.08138406);
   new_histo_group_Higgs_wh3l_13TeV_pt2259->SetBinContent(7,0.04434173);
   new_histo_group_Higgs_wh3l_13TeV_pt2259->SetBinContent(8,0.02774417);
   new_histo_group_Higgs_wh3l_13TeV_pt2259->SetBinContent(9,0.03292071);
   new_histo_group_Higgs_wh3l_13TeV_pt2259->SetBinContent(10,0.02939063);
   new_histo_group_Higgs_wh3l_13TeV_pt2259->SetBinContent(11,0.0103753);
   new_histo_group_Higgs_wh3l_13TeV_pt2259->SetBinContent(12,0.01685224);
   new_histo_group_Higgs_wh3l_13TeV_pt2259->SetBinContent(13,0.01324451);
   new_histo_group_Higgs_wh3l_13TeV_pt2259->SetBinContent(14,0.003239132);
   new_histo_group_Higgs_wh3l_13TeV_pt2259->SetBinContent(15,0.0006046926);
   new_histo_group_Higgs_wh3l_13TeV_pt2259->SetBinContent(16,0.003623047);
   new_histo_group_Higgs_wh3l_13TeV_pt2259->SetBinContent(17,0.002824565);
   new_histo_group_Higgs_wh3l_13TeV_pt2259->SetBinContent(18,0.001339243);
   new_histo_group_Higgs_wh3l_13TeV_pt2259->SetBinContent(19,0.002183632);
   new_histo_group_Higgs_wh3l_13TeV_pt2259->SetBinContent(20,0.002426825);
   new_histo_group_Higgs_wh3l_13TeV_pt2259->SetBinContent(21,0.001317216);
   new_histo_group_Higgs_wh3l_13TeV_pt2259->SetBinContent(22,0.0003548994);
   new_histo_group_Higgs_wh3l_13TeV_pt2259->SetBinContent(24,0.001657096);
   new_histo_group_Higgs_wh3l_13TeV_pt2259->SetBinContent(25,0.0001007689);
   new_histo_group_Higgs_wh3l_13TeV_pt2259->SetBinContent(26,0.002229467);
   new_histo_group_Higgs_wh3l_13TeV_pt2259->SetBinError(1,0.006345344);
   new_histo_group_Higgs_wh3l_13TeV_pt2259->SetBinError(2,0.01198928);
   new_histo_group_Higgs_wh3l_13TeV_pt2259->SetBinError(3,0.01436594);
   new_histo_group_Higgs_wh3l_13TeV_pt2259->SetBinError(4,0.01228562);
   new_histo_group_Higgs_wh3l_13TeV_pt2259->SetBinError(5,0.01012229);
   new_histo_group_Higgs_wh3l_13TeV_pt2259->SetBinError(6,0.01015655);
   new_histo_group_Higgs_wh3l_13TeV_pt2259->SetBinError(7,0.006945142);
   new_histo_group_Higgs_wh3l_13TeV_pt2259->SetBinError(8,0.005704659);
   new_histo_group_Higgs_wh3l_13TeV_pt2259->SetBinError(9,0.006157976);
   new_histo_group_Higgs_wh3l_13TeV_pt2259->SetBinError(10,0.006543951);
   new_histo_group_Higgs_wh3l_13TeV_pt2259->SetBinError(11,0.003334094);
   new_histo_group_Higgs_wh3l_13TeV_pt2259->SetBinError(12,0.004472249);
   new_histo_group_Higgs_wh3l_13TeV_pt2259->SetBinError(13,0.00421175);
   new_histo_group_Higgs_wh3l_13TeV_pt2259->SetBinError(14,0.002292934);
   new_histo_group_Higgs_wh3l_13TeV_pt2259->SetBinError(15,0.0003994273);
   new_histo_group_Higgs_wh3l_13TeV_pt2259->SetBinError(16,0.001851187);
   new_histo_group_Higgs_wh3l_13TeV_pt2259->SetBinError(17,0.001905768);
   new_histo_group_Higgs_wh3l_13TeV_pt2259->SetBinError(18,0.001149454);
   new_histo_group_Higgs_wh3l_13TeV_pt2259->SetBinError(19,0.001731257);
   new_histo_group_Higgs_wh3l_13TeV_pt2259->SetBinError(20,0.001405442);
   new_histo_group_Higgs_wh3l_13TeV_pt2259->SetBinError(21,0.0009361016);
   new_histo_group_Higgs_wh3l_13TeV_pt2259->SetBinError(22,0.0003548994);
   new_histo_group_Higgs_wh3l_13TeV_pt2259->SetBinError(24,0.001093834);
   new_histo_group_Higgs_wh3l_13TeV_pt2259->SetBinError(25,0.0001007689);
   new_histo_group_Higgs_wh3l_13TeV_pt2259->SetBinError(26,0.00175792);
   new_histo_group_Higgs_wh3l_13TeV_pt2259->SetEntries(1360);
   new_histo_group_Higgs_wh3l_13TeV_pt2259->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_13TeV_pt2259->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_13TeV_pt2259->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_13TeV_pt2259->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_13TeV_pt2259->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_pt2259->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_pt2259->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_13TeV_pt2259->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_13TeV_pt2259->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_pt2259->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_pt2259->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_13TeV_pt2259->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_13TeV_pt2259->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_pt2259->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_pt2259->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_13TeV_pt2->Add(new_histo_group_Higgs_wh3l_13TeV_pt2,"");
   thsSignal_grouped_wh3l_13TeV_pt2->Draw("hist same noclear");
   
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
   0.2634487,
   1.502103,
   2.569192,
   1.411799,
   0.7727869,
   1.091196,
   0.2193516,
   0.5941265,
   0.02612573,
   0.06682158,
   0.01995097,
   0.02178381,
   0.01255252,
   0.01745619,
   0.03294331,
   0.01082053,
   0.008499444,
   0.007525692,
   0.009447108,
   0.009823399,
   0.005363861,
   0.009313652,
   0.008323293,
   0.005595796,
   0};
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
   0.7874804,
   1.502103,
   2.569191,
   1.411798,
   0.7910267,
   1.091196,
   0.2280923,
   0.5941266,
   0.02612575,
   0.06682158,
   0.01995098,
   0.0217838,
   0.01255252,
   0.01745619,
   0.0329433,
   0.01082052,
   0.008499445,
   0.007525693,
   0.009447107,
   0.009823399,
   0.005363861,
   0.009313654,
   0.008323294,
   0.005595796,
   0};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(25,_fx3051,_fy3051,_felx3051,_fehx3051,_fely3051,_fehy3051);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(12);
   grae->SetFillStyle(3004);
   grae->SetLineColor(12);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3051 = new TH1F("Graph_Graph3051","",100,0,219);
   Graph_Graph3051->SetMinimum(0);
   Graph_Graph3051->SetMaximum(10.23114);
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
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   grae = new TGraphAsymmErrors(25,_fx3052,_fy3052,_felx3052,_fehx3052,_fely3052,_fehy3052);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(1);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3052 = new TH1F("Graph_Graph3052","",100,0,219);
   Graph_Graph3052->SetMinimum(0);
   Graph_Graph3052->SetMaximum(1.262698);
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
   
   TLegend *leg = new TLegend(0.2,0.55,0.8,0.88,NULL,"brNDC");
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
   
   leg = new TLegend(0.2,0.55,0.8,0.88,NULL,"brNDC");
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
   
   TH1F *hframe_copy260 = new TH1F("hframe_copy260","",1000,10,200);
   hframe_copy260->SetMinimum(0);
   hframe_copy260->SetMaximum(17.28095);
   hframe_copy260->SetDirectory(0);
   hframe_copy260->SetStats(0);
   hframe_copy260->SetLineStyle(0);
   hframe_copy260->SetMarkerStyle(20);
   hframe_copy260->GetXaxis()->SetTitle("lept2_p_{T} [GeV]");
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
   ccwh3l_13TeV_pt2->Modified();
   ccwh3l_13TeV_pt2->cd();
   ccwh3l_13TeV_pt2->SetSelected(ccwh3l_13TeV_pt2);
}
