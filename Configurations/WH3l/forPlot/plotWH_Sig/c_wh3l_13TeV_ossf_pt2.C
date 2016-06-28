void c_wh3l_13TeV_ossf_pt2()
{
//=========Macro generated from canvas: ccwh3l_13TeV_ossf_pt2/cc
//=========  (Tue Jun 28 13:56:16 2016) by ROOT version6.02/13
   TCanvas *ccwh3l_13TeV_ossf_pt2 = new TCanvas("ccwh3l_13TeV_ossf_pt2", "cc",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   ccwh3l_13TeV_ossf_pt2->SetHighLightColor(2);
   ccwh3l_13TeV_ossf_pt2->Range(-28,-2.6746,209.5,17.89925);
   ccwh3l_13TeV_ossf_pt2->SetFillColor(0);
   ccwh3l_13TeV_ossf_pt2->SetBorderMode(0);
   ccwh3l_13TeV_ossf_pt2->SetBorderSize(2);
   ccwh3l_13TeV_ossf_pt2->SetTickx(1);
   ccwh3l_13TeV_ossf_pt2->SetTicky(1);
   ccwh3l_13TeV_ossf_pt2->SetLeftMargin(0.16);
   ccwh3l_13TeV_ossf_pt2->SetRightMargin(0.04);
   ccwh3l_13TeV_ossf_pt2->SetTopMargin(0.05);
   ccwh3l_13TeV_ossf_pt2->SetBottomMargin(0.13);
   ccwh3l_13TeV_ossf_pt2->SetFrameFillStyle(0);
   ccwh3l_13TeV_ossf_pt2->SetFrameBorderMode(0);
   ccwh3l_13TeV_ossf_pt2->SetFrameFillStyle(0);
   ccwh3l_13TeV_ossf_pt2->SetFrameBorderMode(0);
   
   TH1F *hframe71 = new TH1F("hframe71","",1000,10,200);
   hframe71->SetMinimum(0);
   hframe71->SetMaximum(16.87055);
   hframe71->SetDirectory(0);
   hframe71->SetStats(0);
   hframe71->SetLineStyle(0);
   hframe71->SetMarkerStyle(20);
   hframe71->GetXaxis()->SetTitle("lept2_p_{T} [GeV]");
   hframe71->GetXaxis()->SetNdivisions(506);
   hframe71->GetXaxis()->SetLabelFont(42);
   hframe71->GetXaxis()->SetLabelOffset(0.007);
   hframe71->GetXaxis()->SetLabelSize(0.05);
   hframe71->GetXaxis()->SetTitleSize(0.06);
   hframe71->GetXaxis()->SetTitleOffset(0.9);
   hframe71->GetXaxis()->SetTitleFont(42);
   hframe71->GetYaxis()->SetTitle("Events");
   hframe71->GetYaxis()->SetLabelFont(42);
   hframe71->GetYaxis()->SetLabelOffset(0.007);
   hframe71->GetYaxis()->SetLabelSize(0.05);
   hframe71->GetYaxis()->SetTitleSize(0.06);
   hframe71->GetYaxis()->SetTitleOffset(1.25);
   hframe71->GetYaxis()->SetTitleFont(42);
   hframe71->GetZaxis()->SetLabelFont(42);
   hframe71->GetZaxis()->SetLabelOffset(0.007);
   hframe71->GetZaxis()->SetLabelSize(0.05);
   hframe71->GetZaxis()->SetTitleSize(0.06);
   hframe71->GetZaxis()->SetTitleFont(42);
   hframe71->Draw(" ");
   
   THStack *thsBackground_grouped_wh3l_13TeV_ossf_pt2 = new THStack();
   thsBackground_grouped_wh3l_13TeV_ossf_pt2->SetName("thsBackground_grouped_wh3l_13TeV_ossf_pt2");
   thsBackground_grouped_wh3l_13TeV_ossf_pt2->SetTitle("thsBackground_grouped_wh3l_13TeV_ossf_pt2");
   
   TH1F *thsBackground_grouped_wh3l_13TeV_ossf_pt2_stack_15 = new TH1F("thsBackground_grouped_wh3l_13TeV_ossf_pt2_stack_15","thsBackground_grouped_wh3l_13TeV_ossf_pt2",25,10,200);
   thsBackground_grouped_wh3l_13TeV_ossf_pt2_stack_15->SetMinimum(-0.5259424);
   thsBackground_grouped_wh3l_13TeV_ossf_pt2_stack_15->SetMaximum(7.085632);
   thsBackground_grouped_wh3l_13TeV_ossf_pt2_stack_15->SetDirectory(0);
   thsBackground_grouped_wh3l_13TeV_ossf_pt2_stack_15->SetStats(0);
   thsBackground_grouped_wh3l_13TeV_ossf_pt2_stack_15->SetLineStyle(0);
   thsBackground_grouped_wh3l_13TeV_ossf_pt2_stack_15->SetMarkerStyle(20);
   thsBackground_grouped_wh3l_13TeV_ossf_pt2_stack_15->GetXaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_13TeV_ossf_pt2_stack_15->GetXaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_13TeV_ossf_pt2_stack_15->GetXaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_13TeV_ossf_pt2_stack_15->GetXaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_13TeV_ossf_pt2_stack_15->GetXaxis()->SetTitleOffset(0.9);
   thsBackground_grouped_wh3l_13TeV_ossf_pt2_stack_15->GetXaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_ossf_pt2_stack_15->GetYaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_13TeV_ossf_pt2_stack_15->GetYaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_13TeV_ossf_pt2_stack_15->GetYaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_13TeV_ossf_pt2_stack_15->GetYaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_13TeV_ossf_pt2_stack_15->GetYaxis()->SetTitleOffset(1.25);
   thsBackground_grouped_wh3l_13TeV_ossf_pt2_stack_15->GetYaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_ossf_pt2_stack_15->GetZaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_13TeV_ossf_pt2_stack_15->GetZaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_13TeV_ossf_pt2_stack_15->GetZaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_13TeV_ossf_pt2_stack_15->GetZaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_13TeV_ossf_pt2_stack_15->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_ossf_pt2->SetHistogram(thsBackground_grouped_wh3l_13TeV_ossf_pt2_stack_15);
   
   
   TH1D *new_histo_group_Fake_wh3l_13TeV_ossf_pt272 = new TH1D("new_histo_group_Fake_wh3l_13TeV_ossf_pt272","histo_Fake",25,10,200);
   new_histo_group_Fake_wh3l_13TeV_ossf_pt272->SetBinContent(1,0.1287405);
   new_histo_group_Fake_wh3l_13TeV_ossf_pt272->SetBinContent(2,0.923535);
   new_histo_group_Fake_wh3l_13TeV_ossf_pt272->SetBinContent(3,4.168292);
   new_histo_group_Fake_wh3l_13TeV_ossf_pt272->SetBinContent(4,0.2154426);
   new_histo_group_Fake_wh3l_13TeV_ossf_pt272->SetBinContent(5,0.4304532);
   new_histo_group_Fake_wh3l_13TeV_ossf_pt272->SetBinContent(6,0.3930149);
   new_histo_group_Fake_wh3l_13TeV_ossf_pt272->SetBinContent(7,0.1354449);
   new_histo_group_Fake_wh3l_13TeV_ossf_pt272->SetBinContent(8,0.3143729);
   new_histo_group_Fake_wh3l_13TeV_ossf_pt272->SetBinContent(9,-0.001650331);
   new_histo_group_Fake_wh3l_13TeV_ossf_pt272->SetBinContent(10,0.01119502);
   new_histo_group_Fake_wh3l_13TeV_ossf_pt272->SetBinError(1,0.6546829);
   new_histo_group_Fake_wh3l_13TeV_ossf_pt272->SetBinError(2,0.7653551);
   new_histo_group_Fake_wh3l_13TeV_ossf_pt272->SetBinError(3,1.641536);
   new_histo_group_Fake_wh3l_13TeV_ossf_pt272->SetBinError(4,0.6359736);
   new_histo_group_Fake_wh3l_13TeV_ossf_pt272->SetBinError(5,0.5280922);
   new_histo_group_Fake_wh3l_13TeV_ossf_pt272->SetBinError(6,0.5907422);
   new_histo_group_Fake_wh3l_13TeV_ossf_pt272->SetBinError(7,0.1354057);
   new_histo_group_Fake_wh3l_13TeV_ossf_pt272->SetBinError(8,0.2797639);
   new_histo_group_Fake_wh3l_13TeV_ossf_pt272->SetBinError(9,0.001650331);
   new_histo_group_Fake_wh3l_13TeV_ossf_pt272->SetBinError(10,0.01119502);
   new_histo_group_Fake_wh3l_13TeV_ossf_pt272->SetEntries(81);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_13TeV_ossf_pt272->SetFillColor(ci);
   new_histo_group_Fake_wh3l_13TeV_ossf_pt272->SetFillStyle(3001);

   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_13TeV_ossf_pt272->SetLineColor(ci);
   new_histo_group_Fake_wh3l_13TeV_ossf_pt272->GetXaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_13TeV_ossf_pt272->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_13TeV_ossf_pt272->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_13TeV_ossf_pt272->GetXaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_13TeV_ossf_pt272->GetYaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_13TeV_ossf_pt272->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_13TeV_ossf_pt272->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_13TeV_ossf_pt272->GetYaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_13TeV_ossf_pt272->GetZaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_13TeV_ossf_pt272->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_13TeV_ossf_pt272->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_13TeV_ossf_pt272->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_ossf_pt2->Add(new_histo_group_Fake_wh3l_13TeV_ossf_pt2,"");
   
   TH1D *new_histo_group_WW_wh3l_13TeV_ossf_pt273 = new TH1D("new_histo_group_WW_wh3l_13TeV_ossf_pt273","histo_WW",25,10,200);
   new_histo_group_WW_wh3l_13TeV_ossf_pt273->SetBinContent(3,0.0285913);
   new_histo_group_WW_wh3l_13TeV_ossf_pt273->SetBinContent(4,0.01447441);
   new_histo_group_WW_wh3l_13TeV_ossf_pt273->SetBinContent(5,0.0142084);
   new_histo_group_WW_wh3l_13TeV_ossf_pt273->SetBinContent(8,0.01530373);
   new_histo_group_WW_wh3l_13TeV_ossf_pt273->SetBinError(3,0.02093881);
   new_histo_group_WW_wh3l_13TeV_ossf_pt273->SetBinError(4,0.01447441);
   new_histo_group_WW_wh3l_13TeV_ossf_pt273->SetBinError(5,0.0142084);
   new_histo_group_WW_wh3l_13TeV_ossf_pt273->SetBinError(8,0.01530373);
   new_histo_group_WW_wh3l_13TeV_ossf_pt273->SetEntries(5);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_13TeV_ossf_pt273->SetFillColor(ci);
   new_histo_group_WW_wh3l_13TeV_ossf_pt273->SetFillStyle(3001);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_13TeV_ossf_pt273->SetLineColor(ci);
   new_histo_group_WW_wh3l_13TeV_ossf_pt273->GetXaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_13TeV_ossf_pt273->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_13TeV_ossf_pt273->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_13TeV_ossf_pt273->GetXaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_13TeV_ossf_pt273->GetYaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_13TeV_ossf_pt273->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_13TeV_ossf_pt273->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_13TeV_ossf_pt273->GetYaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_13TeV_ossf_pt273->GetZaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_13TeV_ossf_pt273->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_13TeV_ossf_pt273->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_13TeV_ossf_pt273->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_ossf_pt2->Add(new_histo_group_WW_wh3l_13TeV_ossf_pt2,"");
   
   TH1D *new_histo_group_VVV_wh3l_13TeV_ossf_pt274 = new TH1D("new_histo_group_VVV_wh3l_13TeV_ossf_pt274","histo_VVV",25,10,200);
   new_histo_group_VVV_wh3l_13TeV_ossf_pt274->SetBinContent(2,0.0006249245);
   new_histo_group_VVV_wh3l_13TeV_ossf_pt274->SetBinContent(3,0.003127295);
   new_histo_group_VVV_wh3l_13TeV_ossf_pt274->SetBinContent(5,0.0006343185);
   new_histo_group_VVV_wh3l_13TeV_ossf_pt274->SetBinContent(7,0.001278049);
   new_histo_group_VVV_wh3l_13TeV_ossf_pt274->SetBinContent(8,0.000653768);
   new_histo_group_VVV_wh3l_13TeV_ossf_pt274->SetBinContent(15,0.0006729142);
   new_histo_group_VVV_wh3l_13TeV_ossf_pt274->SetBinError(2,0.0006249245);
   new_histo_group_VVV_wh3l_13TeV_ossf_pt274->SetBinError(3,0.001363818);
   new_histo_group_VVV_wh3l_13TeV_ossf_pt274->SetBinError(5,0.0006343185);
   new_histo_group_VVV_wh3l_13TeV_ossf_pt274->SetBinError(7,0.0009038618);
   new_histo_group_VVV_wh3l_13TeV_ossf_pt274->SetBinError(8,0.000653768);
   new_histo_group_VVV_wh3l_13TeV_ossf_pt274->SetBinError(15,0.0006729142);
   new_histo_group_VVV_wh3l_13TeV_ossf_pt274->SetEntries(12);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_13TeV_ossf_pt274->SetFillColor(ci);
   new_histo_group_VVV_wh3l_13TeV_ossf_pt274->SetFillStyle(3001);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_13TeV_ossf_pt274->SetLineColor(ci);
   new_histo_group_VVV_wh3l_13TeV_ossf_pt274->GetXaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_13TeV_ossf_pt274->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_13TeV_ossf_pt274->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_13TeV_ossf_pt274->GetXaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_13TeV_ossf_pt274->GetYaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_13TeV_ossf_pt274->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_13TeV_ossf_pt274->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_13TeV_ossf_pt274->GetYaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_13TeV_ossf_pt274->GetZaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_13TeV_ossf_pt274->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_13TeV_ossf_pt274->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_13TeV_ossf_pt274->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_ossf_pt2->Add(new_histo_group_VVV_wh3l_13TeV_ossf_pt2,"");
   
   TH1D *new_histo_group_Vg_wh3l_13TeV_ossf_pt275 = new TH1D("new_histo_group_Vg_wh3l_13TeV_ossf_pt275","histo_Vg",25,10,200);
   new_histo_group_Vg_wh3l_13TeV_ossf_pt275->SetBinContent(1,0.05942902);
   new_histo_group_Vg_wh3l_13TeV_ossf_pt275->SetBinContent(2,1.555161);
   new_histo_group_Vg_wh3l_13TeV_ossf_pt275->SetBinContent(3,0.7452881);
   new_histo_group_Vg_wh3l_13TeV_ossf_pt275->SetBinContent(4,0.09070755);
   new_histo_group_Vg_wh3l_13TeV_ossf_pt275->SetBinContent(5,0.1975834);
   new_histo_group_Vg_wh3l_13TeV_ossf_pt275->SetBinError(1,0.04232062);
   new_histo_group_Vg_wh3l_13TeV_ossf_pt275->SetBinError(2,0.3980689);
   new_histo_group_Vg_wh3l_13TeV_ossf_pt275->SetBinError(3,0.3740925);
   new_histo_group_Vg_wh3l_13TeV_ossf_pt275->SetBinError(4,0.07189745);
   new_histo_group_Vg_wh3l_13TeV_ossf_pt275->SetBinError(5,0.1399723);
   new_histo_group_Vg_wh3l_13TeV_ossf_pt275->SetEntries(42);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_13TeV_ossf_pt275->SetFillColor(ci);
   new_histo_group_Vg_wh3l_13TeV_ossf_pt275->SetFillStyle(3001);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_13TeV_ossf_pt275->SetLineColor(ci);
   new_histo_group_Vg_wh3l_13TeV_ossf_pt275->GetXaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_13TeV_ossf_pt275->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_13TeV_ossf_pt275->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_13TeV_ossf_pt275->GetXaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_13TeV_ossf_pt275->GetYaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_13TeV_ossf_pt275->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_13TeV_ossf_pt275->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_13TeV_ossf_pt275->GetYaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_13TeV_ossf_pt275->GetZaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_13TeV_ossf_pt275->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_13TeV_ossf_pt275->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_13TeV_ossf_pt275->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_ossf_pt2->Add(new_histo_group_Vg_wh3l_13TeV_ossf_pt2,"");
   
   TH1D *new_histo_group_ZZ_wh3l_13TeV_ossf_pt276 = new TH1D("new_histo_group_ZZ_wh3l_13TeV_ossf_pt276","histo_ZZ",25,10,200);
   new_histo_group_ZZ_wh3l_13TeV_ossf_pt276->SetBinContent(1,0.05352081);
   new_histo_group_ZZ_wh3l_13TeV_ossf_pt276->SetBinContent(2,0.07802278);
   new_histo_group_ZZ_wh3l_13TeV_ossf_pt276->SetBinContent(3,0.2222083);
   new_histo_group_ZZ_wh3l_13TeV_ossf_pt276->SetBinContent(4,0.03939452);
   new_histo_group_ZZ_wh3l_13TeV_ossf_pt276->SetBinContent(6,0.05112314);
   new_histo_group_ZZ_wh3l_13TeV_ossf_pt276->SetBinContent(7,0.02976016);
   new_histo_group_ZZ_wh3l_13TeV_ossf_pt276->SetBinContent(8,0.04527812);
   new_histo_group_ZZ_wh3l_13TeV_ossf_pt276->SetBinContent(10,0.02856258);
   new_histo_group_ZZ_wh3l_13TeV_ossf_pt276->SetBinContent(15,0.02088597);
   new_histo_group_ZZ_wh3l_13TeV_ossf_pt276->SetBinError(1,0.03784829);
   new_histo_group_ZZ_wh3l_13TeV_ossf_pt276->SetBinError(2,0.04767264);
   new_histo_group_ZZ_wh3l_13TeV_ossf_pt276->SetBinError(3,0.09967927);
   new_histo_group_ZZ_wh3l_13TeV_ossf_pt276->SetBinError(4,0.03939452);
   new_histo_group_ZZ_wh3l_13TeV_ossf_pt276->SetBinError(6,0.05112314);
   new_histo_group_ZZ_wh3l_13TeV_ossf_pt276->SetBinError(7,0.02976016);
   new_histo_group_ZZ_wh3l_13TeV_ossf_pt276->SetBinError(8,0.04527812);
   new_histo_group_ZZ_wh3l_13TeV_ossf_pt276->SetBinError(10,0.02856258);
   new_histo_group_ZZ_wh3l_13TeV_ossf_pt276->SetBinError(15,0.02088597);
   new_histo_group_ZZ_wh3l_13TeV_ossf_pt276->SetEntries(17);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_13TeV_ossf_pt276->SetFillColor(ci);
   new_histo_group_ZZ_wh3l_13TeV_ossf_pt276->SetFillStyle(3001);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_13TeV_ossf_pt276->SetLineColor(ci);
   new_histo_group_ZZ_wh3l_13TeV_ossf_pt276->GetXaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_13TeV_ossf_pt276->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_13TeV_ossf_pt276->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_13TeV_ossf_pt276->GetXaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_13TeV_ossf_pt276->GetYaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_13TeV_ossf_pt276->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_13TeV_ossf_pt276->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_13TeV_ossf_pt276->GetYaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_13TeV_ossf_pt276->GetZaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_13TeV_ossf_pt276->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_13TeV_ossf_pt276->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_13TeV_ossf_pt276->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_ossf_pt2->Add(new_histo_group_ZZ_wh3l_13TeV_ossf_pt2,"");
   
   TH1D *new_histo_group_WZ_wh3l_13TeV_ossf_pt277 = new TH1D("new_histo_group_WZ_wh3l_13TeV_ossf_pt277","histo_WZ",25,10,200);
   new_histo_group_WZ_wh3l_13TeV_ossf_pt277->SetBinContent(1,0.4698275);
   new_histo_group_WZ_wh3l_13TeV_ossf_pt277->SetBinContent(2,1.781673);
   new_histo_group_WZ_wh3l_13TeV_ossf_pt277->SetBinContent(3,1.445317);
   new_histo_group_WZ_wh3l_13TeV_ossf_pt277->SetBinContent(4,0.9488276);
   new_histo_group_WZ_wh3l_13TeV_ossf_pt277->SetBinContent(5,0.6677485);
   new_histo_group_WZ_wh3l_13TeV_ossf_pt277->SetBinContent(6,0.4375254);
   new_histo_group_WZ_wh3l_13TeV_ossf_pt277->SetBinContent(7,0.3093375);
   new_histo_group_WZ_wh3l_13TeV_ossf_pt277->SetBinContent(8,0.2348986);
   new_histo_group_WZ_wh3l_13TeV_ossf_pt277->SetBinContent(9,0.1032294);
   new_histo_group_WZ_wh3l_13TeV_ossf_pt277->SetBinContent(10,0.1319365);
   new_histo_group_WZ_wh3l_13TeV_ossf_pt277->SetBinContent(11,0.07175356);
   new_histo_group_WZ_wh3l_13TeV_ossf_pt277->SetBinContent(12,0.08318066);
   new_histo_group_WZ_wh3l_13TeV_ossf_pt277->SetBinContent(13,0.03154412);
   new_histo_group_WZ_wh3l_13TeV_ossf_pt277->SetBinContent(14,0.04836459);
   new_histo_group_WZ_wh3l_13TeV_ossf_pt277->SetBinContent(15,0.02515137);
   new_histo_group_WZ_wh3l_13TeV_ossf_pt277->SetBinContent(16,0.01872941);
   new_histo_group_WZ_wh3l_13TeV_ossf_pt277->SetBinContent(17,0.006186721);
   new_histo_group_WZ_wh3l_13TeV_ossf_pt277->SetBinContent(18,0.01254151);
   new_histo_group_WZ_wh3l_13TeV_ossf_pt277->SetBinContent(19,0.01630356);
   new_histo_group_WZ_wh3l_13TeV_ossf_pt277->SetBinContent(20,0.01695862);
   new_histo_group_WZ_wh3l_13TeV_ossf_pt277->SetBinContent(21,0.005363861);
   new_histo_group_WZ_wh3l_13TeV_ossf_pt277->SetBinContent(22,0.0160739);
   new_histo_group_WZ_wh3l_13TeV_ossf_pt277->SetBinContent(23,0.01172423);
   new_histo_group_WZ_wh3l_13TeV_ossf_pt277->SetBinContent(24,0.006498538);
   new_histo_group_WZ_wh3l_13TeV_ossf_pt277->SetBinContent(26,0.01968246);
   new_histo_group_WZ_wh3l_13TeV_ossf_pt277->SetBinError(1,0.04946215);
   new_histo_group_WZ_wh3l_13TeV_ossf_pt277->SetBinError(2,0.09928374);
   new_histo_group_WZ_wh3l_13TeV_ossf_pt277->SetBinError(3,0.08893402);
   new_histo_group_WZ_wh3l_13TeV_ossf_pt277->SetBinError(4,0.07131637);
   new_histo_group_WZ_wh3l_13TeV_ossf_pt277->SetBinError(5,0.06048121);
   new_histo_group_WZ_wh3l_13TeV_ossf_pt277->SetBinError(6,0.04901759);
   new_histo_group_WZ_wh3l_13TeV_ossf_pt277->SetBinError(7,0.0405562);
   new_histo_group_WZ_wh3l_13TeV_ossf_pt277->SetBinError(8,0.03610926);
   new_histo_group_WZ_wh3l_13TeV_ossf_pt277->SetBinError(9,0.02311655);
   new_histo_group_WZ_wh3l_13TeV_ossf_pt277->SetBinError(10,0.02673462);
   new_histo_group_WZ_wh3l_13TeV_ossf_pt277->SetBinError(11,0.01911542);
   new_histo_group_WZ_wh3l_13TeV_ossf_pt277->SetBinError(12,0.02126438);
   new_histo_group_WZ_wh3l_13TeV_ossf_pt277->SetBinError(13,0.01255252);
   new_histo_group_WZ_wh3l_13TeV_ossf_pt277->SetBinError(14,0.01558536);
   new_histo_group_WZ_wh3l_13TeV_ossf_pt277->SetBinError(15,0.01137927);
   new_histo_group_WZ_wh3l_13TeV_ossf_pt277->SetBinError(16,0.01082053);
   new_histo_group_WZ_wh3l_13TeV_ossf_pt277->SetBinError(17,0.006186721);
   new_histo_group_WZ_wh3l_13TeV_ossf_pt277->SetBinError(18,0.007525692);
   new_histo_group_WZ_wh3l_13TeV_ossf_pt277->SetBinError(19,0.009447107);
   new_histo_group_WZ_wh3l_13TeV_ossf_pt277->SetBinError(20,0.009823398);
   new_histo_group_WZ_wh3l_13TeV_ossf_pt277->SetBinError(21,0.005363861);
   new_histo_group_WZ_wh3l_13TeV_ossf_pt277->SetBinError(22,0.009313651);
   new_histo_group_WZ_wh3l_13TeV_ossf_pt277->SetBinError(23,0.008323294);
   new_histo_group_WZ_wh3l_13TeV_ossf_pt277->SetBinError(24,0.005595796);
   new_histo_group_WZ_wh3l_13TeV_ossf_pt277->SetBinError(26,0.01017656);
   new_histo_group_WZ_wh3l_13TeV_ossf_pt277->SetEntries(1419);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_13TeV_ossf_pt277->SetFillColor(ci);
   new_histo_group_WZ_wh3l_13TeV_ossf_pt277->SetFillStyle(3001);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_13TeV_ossf_pt277->SetLineColor(ci);
   new_histo_group_WZ_wh3l_13TeV_ossf_pt277->GetXaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_13TeV_ossf_pt277->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_13TeV_ossf_pt277->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_13TeV_ossf_pt277->GetXaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_13TeV_ossf_pt277->GetYaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_13TeV_ossf_pt277->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_13TeV_ossf_pt277->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_13TeV_ossf_pt277->GetYaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_13TeV_ossf_pt277->GetZaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_13TeV_ossf_pt277->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_13TeV_ossf_pt277->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_13TeV_ossf_pt277->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_ossf_pt2->Add(new_histo_group_WZ_wh3l_13TeV_ossf_pt2,"");
   
   TH1D *new_histo_group_Higgs_wh3l_13TeV_ossf_pt278 = new TH1D("new_histo_group_Higgs_wh3l_13TeV_ossf_pt278","histo_H_htt",25,10,200);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt278->SetBinContent(1,0.01547162);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt278->SetBinContent(2,0.09077451);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt278->SetBinContent(3,0.1353968);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt278->SetBinContent(4,0.09543545);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt278->SetBinContent(5,0.04881378);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt278->SetBinContent(6,0.06749889);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt278->SetBinContent(7,0.03495954);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt278->SetBinContent(8,0.01760699);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt278->SetBinContent(9,0.02393543);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt278->SetBinContent(10,0.02145667);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt278->SetBinContent(11,0.008866284);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt278->SetBinContent(12,0.01436826);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt278->SetBinContent(13,0.007761488);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt278->SetBinContent(14,0.003239132);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt278->SetBinContent(16,0.002356514);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt278->SetBinContent(17,0.001604902);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt278->SetBinContent(18,0.001339243);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt278->SetBinContent(19,0.0008604478);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt278->SetBinContent(20,0.002256681);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt278->SetBinContent(21,0.0001691847);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt278->SetBinContent(22,0.0003548994);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt278->SetBinContent(24,0.001244385);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt278->SetBinContent(25,0.0001007689);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt278->SetBinContent(26,0.001328518);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt278->SetBinError(1,0.005145784);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt278->SetBinError(2,0.01048335);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt278->SetBinError(3,0.01243357);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt278->SetBinError(4,0.01028269);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt278->SetBinError(5,0.007301015);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt278->SetBinError(6,0.009508898);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt278->SetBinError(7,0.006375001);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt278->SetBinError(8,0.004511014);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt278->SetBinError(9,0.00526608);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt278->SetBinError(10,0.005352904);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt278->SetBinError(11,0.003270771);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt278->SetBinError(12,0.004145632);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt278->SetBinError(13,0.003126257);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt278->SetBinError(14,0.002292934);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt278->SetBinError(16,0.001749659);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt278->SetBinError(17,0.001604902);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt278->SetBinError(18,0.001149454);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt278->SetBinError(19,0.001116438);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt278->SetBinError(20,0.001395105);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt278->SetBinError(21,0.0001691847);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt278->SetBinError(22,0.0003548994);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt278->SetBinError(24,0.001054138);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt278->SetBinError(25,0.0001007689);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt278->SetBinError(26,0.001674362);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt278->SetEntries(946);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt278->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt278->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt278->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt278->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt278->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt278->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt278->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt278->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt278->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt278->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt278->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt278->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt278->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt278->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt278->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_ossf_pt2->Add(new_histo_group_Higgs_wh3l_13TeV_ossf_pt2,"");
   thsBackground_grouped_wh3l_13TeV_ossf_pt2->Draw("hist same");
   
   thsSignal_grouped_wh3l_13TeV_ossf_pt2 = new THStack();
   thsSignal_grouped_wh3l_13TeV_ossf_pt2->SetName("thsSignal_grouped_wh3l_13TeV_ossf_pt2");
   thsSignal_grouped_wh3l_13TeV_ossf_pt2->SetTitle("thsSignal_grouped_wh3l_13TeV_ossf_pt2");
   
   TH1F *thsSignal_grouped_wh3l_13TeV_ossf_pt2_stack_16 = new TH1F("thsSignal_grouped_wh3l_13TeV_ossf_pt2_stack_16","thsSignal_grouped_wh3l_13TeV_ossf_pt2",25,10,200);
   thsSignal_grouped_wh3l_13TeV_ossf_pt2_stack_16->SetMinimum(-0.0002559901);
   thsSignal_grouped_wh3l_13TeV_ossf_pt2_stack_16->SetMaximum(0.1552219);
   thsSignal_grouped_wh3l_13TeV_ossf_pt2_stack_16->SetDirectory(0);
   thsSignal_grouped_wh3l_13TeV_ossf_pt2_stack_16->SetStats(0);
   thsSignal_grouped_wh3l_13TeV_ossf_pt2_stack_16->SetLineStyle(0);
   thsSignal_grouped_wh3l_13TeV_ossf_pt2_stack_16->SetMarkerStyle(20);
   thsSignal_grouped_wh3l_13TeV_ossf_pt2_stack_16->GetXaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_13TeV_ossf_pt2_stack_16->GetXaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_13TeV_ossf_pt2_stack_16->GetXaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_13TeV_ossf_pt2_stack_16->GetXaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_13TeV_ossf_pt2_stack_16->GetXaxis()->SetTitleOffset(0.9);
   thsSignal_grouped_wh3l_13TeV_ossf_pt2_stack_16->GetXaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_13TeV_ossf_pt2_stack_16->GetYaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_13TeV_ossf_pt2_stack_16->GetYaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_13TeV_ossf_pt2_stack_16->GetYaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_13TeV_ossf_pt2_stack_16->GetYaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_13TeV_ossf_pt2_stack_16->GetYaxis()->SetTitleOffset(1.25);
   thsSignal_grouped_wh3l_13TeV_ossf_pt2_stack_16->GetYaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_13TeV_ossf_pt2_stack_16->GetZaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_13TeV_ossf_pt2_stack_16->GetZaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_13TeV_ossf_pt2_stack_16->GetZaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_13TeV_ossf_pt2_stack_16->GetZaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_13TeV_ossf_pt2_stack_16->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_13TeV_ossf_pt2->SetHistogram(thsSignal_grouped_wh3l_13TeV_ossf_pt2_stack_16);
   
   
   TH1D *new_histo_group_Higgs_wh3l_13TeV_ossf_pt279 = new TH1D("new_histo_group_Higgs_wh3l_13TeV_ossf_pt279","histo_H_htt",25,10,200);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt279->SetBinContent(1,0.01547162);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt279->SetBinContent(2,0.09077451);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt279->SetBinContent(3,0.1353968);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt279->SetBinContent(4,0.09543545);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt279->SetBinContent(5,0.04881378);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt279->SetBinContent(6,0.06749889);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt279->SetBinContent(7,0.03495954);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt279->SetBinContent(8,0.01760699);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt279->SetBinContent(9,0.02393543);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt279->SetBinContent(10,0.02145667);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt279->SetBinContent(11,0.008866284);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt279->SetBinContent(12,0.01436826);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt279->SetBinContent(13,0.007761488);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt279->SetBinContent(14,0.003239132);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt279->SetBinContent(16,0.002356514);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt279->SetBinContent(17,0.001604902);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt279->SetBinContent(18,0.001339243);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt279->SetBinContent(19,0.0008604478);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt279->SetBinContent(20,0.002256681);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt279->SetBinContent(21,0.0001691847);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt279->SetBinContent(22,0.0003548994);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt279->SetBinContent(24,0.001244385);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt279->SetBinContent(25,0.0001007689);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt279->SetBinContent(26,0.001328518);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt279->SetBinError(1,0.005145784);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt279->SetBinError(2,0.01048335);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt279->SetBinError(3,0.01243357);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt279->SetBinError(4,0.01028269);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt279->SetBinError(5,0.007301015);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt279->SetBinError(6,0.009508898);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt279->SetBinError(7,0.006375001);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt279->SetBinError(8,0.004511014);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt279->SetBinError(9,0.00526608);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt279->SetBinError(10,0.005352904);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt279->SetBinError(11,0.003270771);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt279->SetBinError(12,0.004145632);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt279->SetBinError(13,0.003126257);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt279->SetBinError(14,0.002292934);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt279->SetBinError(16,0.001749659);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt279->SetBinError(17,0.001604902);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt279->SetBinError(18,0.001149454);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt279->SetBinError(19,0.001116438);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt279->SetBinError(20,0.001395105);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt279->SetBinError(21,0.0001691847);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt279->SetBinError(22,0.0003548994);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt279->SetBinError(24,0.001054138);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt279->SetBinError(25,0.0001007689);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt279->SetBinError(26,0.001674362);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt279->SetEntries(946);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt279->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt279->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt279->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt279->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt279->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt279->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt279->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt279->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt279->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt279->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt279->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt279->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt279->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt279->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt279->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_13TeV_ossf_pt2->Add(new_histo_group_Higgs_wh3l_13TeV_ossf_pt2,"");
   thsSignal_grouped_wh3l_13TeV_ossf_pt2->Draw("hist same noclear");
   
   Double_t _fx3015[25] = {
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
   Double_t _fy3015[25] = {
   0.7115178,
   4.339016,
   6.612824,
   1.308847,
   1.310628,
   0.8816635,
   0.4758205,
   0.6105071,
   0.1015791,
   0.1716941,
   0.07175356,
   0.08318067,
   0.03154412,
   0.04836459,
   0.04671025,
   0.01872941,
   0.006186721,
   0.01254151,
   0.01630357,
   0.01695862,
   0.005363861,
   0.0160739,
   0.01172423,
   0.006498538,
   0};
   Double_t _felx3015[25] = {
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
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
   Double_t _fely3015[25] = {
   0.2612601,
   1.340688,
   2.553811,
   0.4175762,
   0.65856,
   0.5070561,
   0.210585,
   0.3887268,
   0.02477184,
   0.06658144,
   0.01911542,
   0.02126438,
   0.01255252,
   0.01558536,
   0.03294331,
   0.01082053,
   0.006186721,
   0.007525692,
   0.009447108,
   0.009823399,
   0.005363861,
   0.009313652,
   0.008323293,
   0.005595796,
   0};
   Double_t _fehx3015[25] = {
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
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
   Double_t _fehy3015[25] = {
   0.7852702,
   1.340688,
   2.55381,
   0.8355691,
   0.754543,
   0.7008728,
   0.2105851,
   0.3887268,
   0.02477184,
   0.06658144,
   0.01911542,
   0.02126438,
   0.01255252,
   0.01558537,
   0.0329433,
   0.01082052,
   0.006186721,
   0.007525693,
   0.009447107,
   0.009823399,
   0.005363861,
   0.009313654,
   0.008323294,
   0.005595796,
   0};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(25,_fx3015,_fy3015,_felx3015,_fehx3015,_fely3015,_fehy3015);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(12);
   grae->SetFillStyle(3004);
   grae->SetLineColor(12);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3015 = new TH1F("Graph_Graph3015","",100,0,219);
   Graph_Graph3015->SetMinimum(0);
   Graph_Graph3015->SetMaximum(10.0833);
   Graph_Graph3015->SetDirectory(0);
   Graph_Graph3015->SetStats(0);
   Graph_Graph3015->SetLineStyle(0);
   Graph_Graph3015->SetMarkerStyle(20);
   Graph_Graph3015->GetXaxis()->SetLabelFont(42);
   Graph_Graph3015->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3015->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3015->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3015->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3015->GetXaxis()->SetTitleFont(42);
   Graph_Graph3015->GetYaxis()->SetLabelFont(42);
   Graph_Graph3015->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3015->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3015->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3015->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3015->GetYaxis()->SetTitleFont(42);
   Graph_Graph3015->GetZaxis()->SetLabelFont(42);
   Graph_Graph3015->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3015->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3015->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3015->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3015);
   
   grae->Draw("2");
   
   Double_t _fx3016[25] = {
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
   Double_t _fy3016[25] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t _felx3016[25] = {
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
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
   Double_t _fely3016[25] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t _fehx3016[25] = {
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
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
   Double_t _fehy3016[25] = {
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
   grae = new TGraphAsymmErrors(25,_fx3016,_fy3016,_felx3016,_fehx3016,_fely3016,_fehy3016);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(1);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3016 = new TH1F("Graph_Graph3016","",100,0,219);
   Graph_Graph3016->SetMinimum(0);
   Graph_Graph3016->SetMaximum(1.262698);
   Graph_Graph3016->SetDirectory(0);
   Graph_Graph3016->SetStats(0);
   Graph_Graph3016->SetLineStyle(0);
   Graph_Graph3016->SetMarkerStyle(20);
   Graph_Graph3016->GetXaxis()->SetLabelFont(42);
   Graph_Graph3016->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3016->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3016->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3016->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3016->GetXaxis()->SetTitleFont(42);
   Graph_Graph3016->GetYaxis()->SetLabelFont(42);
   Graph_Graph3016->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3016->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3016->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3016->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3016->GetYaxis()->SetTitleFont(42);
   Graph_Graph3016->GetZaxis()->SetLabelFont(42);
   Graph_Graph3016->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3016->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3016->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3016->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3016);
   
   grae->Draw("p0");
   
   TLegend *leg = new TLegend(0.2,0.55,0.8,0.88,NULL,"brNDC");
   leg->SetTextFont(62);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("new_histo_group_Fake_wh3l_13TeV_ossf_pt2","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_13TeV_ossf_pt2","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_13TeV_ossf_pt2","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_13TeV_ossf_pt2","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_13TeV_ossf_pt2","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_13TeV_ossf_pt2","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_13TeV_ossf_pt2","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_13TeV_ossf_pt2","Data","EPL");
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
   entry=leg->AddEntry("new_histo_group_Fake_wh3l_13TeV_ossf_pt2","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_13TeV_ossf_pt2","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_13TeV_ossf_pt2","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_13TeV_ossf_pt2","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_13TeV_ossf_pt2","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_13TeV_ossf_pt2","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_13TeV_ossf_pt2","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_13TeV_ossf_pt2","Data","EPL");
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
   
   TH1F *hframe_copy80 = new TH1F("hframe_copy80","",1000,10,200);
   hframe_copy80->SetMinimum(0);
   hframe_copy80->SetMaximum(16.87055);
   hframe_copy80->SetDirectory(0);
   hframe_copy80->SetStats(0);
   hframe_copy80->SetLineStyle(0);
   hframe_copy80->SetMarkerStyle(20);
   hframe_copy80->GetXaxis()->SetTitle("lept2_p_{T} [GeV]");
   hframe_copy80->GetXaxis()->SetNdivisions(506);
   hframe_copy80->GetXaxis()->SetLabelFont(42);
   hframe_copy80->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy80->GetXaxis()->SetLabelSize(0.05);
   hframe_copy80->GetXaxis()->SetTitleSize(0.06);
   hframe_copy80->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy80->GetXaxis()->SetTitleFont(42);
   hframe_copy80->GetYaxis()->SetTitle("Events");
   hframe_copy80->GetYaxis()->SetLabelFont(42);
   hframe_copy80->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy80->GetYaxis()->SetLabelSize(0.05);
   hframe_copy80->GetYaxis()->SetTitleSize(0.06);
   hframe_copy80->GetYaxis()->SetTitleOffset(1.25);
   hframe_copy80->GetYaxis()->SetTitleFont(42);
   hframe_copy80->GetZaxis()->SetLabelFont(42);
   hframe_copy80->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy80->GetZaxis()->SetLabelSize(0.05);
   hframe_copy80->GetZaxis()->SetTitleSize(0.06);
   hframe_copy80->GetZaxis()->SetTitleFont(42);
   hframe_copy80->Draw("sameaxis");
   ccwh3l_13TeV_ossf_pt2->Modified();
   ccwh3l_13TeV_ossf_pt2->cd();
   ccwh3l_13TeV_ossf_pt2->SetSelected(ccwh3l_13TeV_ossf_pt2);
}
