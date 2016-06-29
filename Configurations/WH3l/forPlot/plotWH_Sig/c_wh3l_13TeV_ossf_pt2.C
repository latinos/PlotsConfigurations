void c_wh3l_13TeV_ossf_pt2()
{
//=========Macro generated from canvas: ccwh3l_13TeV_ossf_pt2/cc
//=========  (Wed Jun 29 01:33:58 2016) by ROOT version6.02/13
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
   
   TH1F *hframe181 = new TH1F("hframe181","",1000,10,200);
   hframe181->SetMinimum(0);
   hframe181->SetMaximum(16.87055);
   hframe181->SetDirectory(0);
   hframe181->SetStats(0);
   hframe181->SetLineStyle(0);
   hframe181->SetMarkerStyle(20);
   hframe181->GetXaxis()->SetTitle("lept2_p_{T} [GeV]");
   hframe181->GetXaxis()->SetNdivisions(506);
   hframe181->GetXaxis()->SetLabelFont(42);
   hframe181->GetXaxis()->SetLabelOffset(0.007);
   hframe181->GetXaxis()->SetLabelSize(0.05);
   hframe181->GetXaxis()->SetTitleSize(0.06);
   hframe181->GetXaxis()->SetTitleOffset(0.9);
   hframe181->GetXaxis()->SetTitleFont(42);
   hframe181->GetYaxis()->SetTitle("Events");
   hframe181->GetYaxis()->SetLabelFont(42);
   hframe181->GetYaxis()->SetLabelOffset(0.007);
   hframe181->GetYaxis()->SetLabelSize(0.05);
   hframe181->GetYaxis()->SetTitleSize(0.06);
   hframe181->GetYaxis()->SetTitleOffset(1.25);
   hframe181->GetYaxis()->SetTitleFont(42);
   hframe181->GetZaxis()->SetLabelFont(42);
   hframe181->GetZaxis()->SetLabelOffset(0.007);
   hframe181->GetZaxis()->SetLabelSize(0.05);
   hframe181->GetZaxis()->SetTitleSize(0.06);
   hframe181->GetZaxis()->SetTitleFont(42);
   hframe181->Draw(" ");
   
   THStack *thsBackground_grouped_wh3l_13TeV_ossf_pt2 = new THStack();
   thsBackground_grouped_wh3l_13TeV_ossf_pt2->SetName("thsBackground_grouped_wh3l_13TeV_ossf_pt2");
   thsBackground_grouped_wh3l_13TeV_ossf_pt2->SetTitle("thsBackground_grouped_wh3l_13TeV_ossf_pt2");
   
   TH1F *thsBackground_grouped_wh3l_13TeV_ossf_pt2_stack_37 = new TH1F("thsBackground_grouped_wh3l_13TeV_ossf_pt2_stack_37","thsBackground_grouped_wh3l_13TeV_ossf_pt2",25,10,200);
   thsBackground_grouped_wh3l_13TeV_ossf_pt2_stack_37->SetMinimum(-0.5259424);
   thsBackground_grouped_wh3l_13TeV_ossf_pt2_stack_37->SetMaximum(7.085632);
   thsBackground_grouped_wh3l_13TeV_ossf_pt2_stack_37->SetDirectory(0);
   thsBackground_grouped_wh3l_13TeV_ossf_pt2_stack_37->SetStats(0);
   thsBackground_grouped_wh3l_13TeV_ossf_pt2_stack_37->SetLineStyle(0);
   thsBackground_grouped_wh3l_13TeV_ossf_pt2_stack_37->SetMarkerStyle(20);
   thsBackground_grouped_wh3l_13TeV_ossf_pt2_stack_37->GetXaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_13TeV_ossf_pt2_stack_37->GetXaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_13TeV_ossf_pt2_stack_37->GetXaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_13TeV_ossf_pt2_stack_37->GetXaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_13TeV_ossf_pt2_stack_37->GetXaxis()->SetTitleOffset(0.9);
   thsBackground_grouped_wh3l_13TeV_ossf_pt2_stack_37->GetXaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_ossf_pt2_stack_37->GetYaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_13TeV_ossf_pt2_stack_37->GetYaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_13TeV_ossf_pt2_stack_37->GetYaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_13TeV_ossf_pt2_stack_37->GetYaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_13TeV_ossf_pt2_stack_37->GetYaxis()->SetTitleOffset(1.25);
   thsBackground_grouped_wh3l_13TeV_ossf_pt2_stack_37->GetYaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_ossf_pt2_stack_37->GetZaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_13TeV_ossf_pt2_stack_37->GetZaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_13TeV_ossf_pt2_stack_37->GetZaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_13TeV_ossf_pt2_stack_37->GetZaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_13TeV_ossf_pt2_stack_37->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_ossf_pt2->SetHistogram(thsBackground_grouped_wh3l_13TeV_ossf_pt2_stack_37);
   
   
   TH1D *new_histo_group_Fake_wh3l_13TeV_ossf_pt2182 = new TH1D("new_histo_group_Fake_wh3l_13TeV_ossf_pt2182","histo_Fake",25,10,200);
   new_histo_group_Fake_wh3l_13TeV_ossf_pt2182->SetBinContent(1,0.1287405);
   new_histo_group_Fake_wh3l_13TeV_ossf_pt2182->SetBinContent(2,0.923535);
   new_histo_group_Fake_wh3l_13TeV_ossf_pt2182->SetBinContent(3,4.168292);
   new_histo_group_Fake_wh3l_13TeV_ossf_pt2182->SetBinContent(4,0.2154426);
   new_histo_group_Fake_wh3l_13TeV_ossf_pt2182->SetBinContent(5,0.4304532);
   new_histo_group_Fake_wh3l_13TeV_ossf_pt2182->SetBinContent(6,0.3930149);
   new_histo_group_Fake_wh3l_13TeV_ossf_pt2182->SetBinContent(7,0.1354449);
   new_histo_group_Fake_wh3l_13TeV_ossf_pt2182->SetBinContent(8,0.3143729);
   new_histo_group_Fake_wh3l_13TeV_ossf_pt2182->SetBinContent(9,-0.001650331);
   new_histo_group_Fake_wh3l_13TeV_ossf_pt2182->SetBinContent(10,0.01119502);
   new_histo_group_Fake_wh3l_13TeV_ossf_pt2182->SetBinError(1,0.6546829);
   new_histo_group_Fake_wh3l_13TeV_ossf_pt2182->SetBinError(2,0.7653551);
   new_histo_group_Fake_wh3l_13TeV_ossf_pt2182->SetBinError(3,1.641536);
   new_histo_group_Fake_wh3l_13TeV_ossf_pt2182->SetBinError(4,0.6359736);
   new_histo_group_Fake_wh3l_13TeV_ossf_pt2182->SetBinError(5,0.5280922);
   new_histo_group_Fake_wh3l_13TeV_ossf_pt2182->SetBinError(6,0.5907422);
   new_histo_group_Fake_wh3l_13TeV_ossf_pt2182->SetBinError(7,0.1354057);
   new_histo_group_Fake_wh3l_13TeV_ossf_pt2182->SetBinError(8,0.2797639);
   new_histo_group_Fake_wh3l_13TeV_ossf_pt2182->SetBinError(9,0.001650331);
   new_histo_group_Fake_wh3l_13TeV_ossf_pt2182->SetBinError(10,0.01119502);
   new_histo_group_Fake_wh3l_13TeV_ossf_pt2182->SetEntries(81);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_13TeV_ossf_pt2182->SetFillColor(ci);
   new_histo_group_Fake_wh3l_13TeV_ossf_pt2182->SetFillStyle(3001);

   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_13TeV_ossf_pt2182->SetLineColor(ci);
   new_histo_group_Fake_wh3l_13TeV_ossf_pt2182->GetXaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_13TeV_ossf_pt2182->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_13TeV_ossf_pt2182->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_13TeV_ossf_pt2182->GetXaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_13TeV_ossf_pt2182->GetYaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_13TeV_ossf_pt2182->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_13TeV_ossf_pt2182->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_13TeV_ossf_pt2182->GetYaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_13TeV_ossf_pt2182->GetZaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_13TeV_ossf_pt2182->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_13TeV_ossf_pt2182->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_13TeV_ossf_pt2182->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_ossf_pt2->Add(new_histo_group_Fake_wh3l_13TeV_ossf_pt2,"");
   
   TH1D *new_histo_group_WW_wh3l_13TeV_ossf_pt2183 = new TH1D("new_histo_group_WW_wh3l_13TeV_ossf_pt2183","histo_WW",25,10,200);
   new_histo_group_WW_wh3l_13TeV_ossf_pt2183->SetBinContent(3,0.0285913);
   new_histo_group_WW_wh3l_13TeV_ossf_pt2183->SetBinContent(4,0.01447441);
   new_histo_group_WW_wh3l_13TeV_ossf_pt2183->SetBinContent(5,0.0142084);
   new_histo_group_WW_wh3l_13TeV_ossf_pt2183->SetBinContent(8,0.01530373);
   new_histo_group_WW_wh3l_13TeV_ossf_pt2183->SetBinError(3,0.02093881);
   new_histo_group_WW_wh3l_13TeV_ossf_pt2183->SetBinError(4,0.01447441);
   new_histo_group_WW_wh3l_13TeV_ossf_pt2183->SetBinError(5,0.0142084);
   new_histo_group_WW_wh3l_13TeV_ossf_pt2183->SetBinError(8,0.01530373);
   new_histo_group_WW_wh3l_13TeV_ossf_pt2183->SetEntries(5);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_13TeV_ossf_pt2183->SetFillColor(ci);
   new_histo_group_WW_wh3l_13TeV_ossf_pt2183->SetFillStyle(3001);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_13TeV_ossf_pt2183->SetLineColor(ci);
   new_histo_group_WW_wh3l_13TeV_ossf_pt2183->GetXaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_13TeV_ossf_pt2183->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_13TeV_ossf_pt2183->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_13TeV_ossf_pt2183->GetXaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_13TeV_ossf_pt2183->GetYaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_13TeV_ossf_pt2183->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_13TeV_ossf_pt2183->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_13TeV_ossf_pt2183->GetYaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_13TeV_ossf_pt2183->GetZaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_13TeV_ossf_pt2183->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_13TeV_ossf_pt2183->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_13TeV_ossf_pt2183->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_ossf_pt2->Add(new_histo_group_WW_wh3l_13TeV_ossf_pt2,"");
   
   TH1D *new_histo_group_VVV_wh3l_13TeV_ossf_pt2184 = new TH1D("new_histo_group_VVV_wh3l_13TeV_ossf_pt2184","histo_VVV",25,10,200);
   new_histo_group_VVV_wh3l_13TeV_ossf_pt2184->SetBinContent(2,0.0006249245);
   new_histo_group_VVV_wh3l_13TeV_ossf_pt2184->SetBinContent(3,0.003127295);
   new_histo_group_VVV_wh3l_13TeV_ossf_pt2184->SetBinContent(5,0.0006343185);
   new_histo_group_VVV_wh3l_13TeV_ossf_pt2184->SetBinContent(7,0.001278049);
   new_histo_group_VVV_wh3l_13TeV_ossf_pt2184->SetBinContent(8,0.000653768);
   new_histo_group_VVV_wh3l_13TeV_ossf_pt2184->SetBinContent(15,0.0006729142);
   new_histo_group_VVV_wh3l_13TeV_ossf_pt2184->SetBinError(2,0.0006249245);
   new_histo_group_VVV_wh3l_13TeV_ossf_pt2184->SetBinError(3,0.001363818);
   new_histo_group_VVV_wh3l_13TeV_ossf_pt2184->SetBinError(5,0.0006343185);
   new_histo_group_VVV_wh3l_13TeV_ossf_pt2184->SetBinError(7,0.0009038618);
   new_histo_group_VVV_wh3l_13TeV_ossf_pt2184->SetBinError(8,0.000653768);
   new_histo_group_VVV_wh3l_13TeV_ossf_pt2184->SetBinError(15,0.0006729142);
   new_histo_group_VVV_wh3l_13TeV_ossf_pt2184->SetEntries(12);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_13TeV_ossf_pt2184->SetFillColor(ci);
   new_histo_group_VVV_wh3l_13TeV_ossf_pt2184->SetFillStyle(3001);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_13TeV_ossf_pt2184->SetLineColor(ci);
   new_histo_group_VVV_wh3l_13TeV_ossf_pt2184->GetXaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_13TeV_ossf_pt2184->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_13TeV_ossf_pt2184->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_13TeV_ossf_pt2184->GetXaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_13TeV_ossf_pt2184->GetYaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_13TeV_ossf_pt2184->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_13TeV_ossf_pt2184->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_13TeV_ossf_pt2184->GetYaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_13TeV_ossf_pt2184->GetZaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_13TeV_ossf_pt2184->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_13TeV_ossf_pt2184->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_13TeV_ossf_pt2184->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_ossf_pt2->Add(new_histo_group_VVV_wh3l_13TeV_ossf_pt2,"");
   
   TH1D *new_histo_group_Vg_wh3l_13TeV_ossf_pt2185 = new TH1D("new_histo_group_Vg_wh3l_13TeV_ossf_pt2185","histo_Vg",25,10,200);
   new_histo_group_Vg_wh3l_13TeV_ossf_pt2185->SetBinContent(1,0.05942902);
   new_histo_group_Vg_wh3l_13TeV_ossf_pt2185->SetBinContent(2,1.555161);
   new_histo_group_Vg_wh3l_13TeV_ossf_pt2185->SetBinContent(3,0.7452881);
   new_histo_group_Vg_wh3l_13TeV_ossf_pt2185->SetBinContent(4,0.09070755);
   new_histo_group_Vg_wh3l_13TeV_ossf_pt2185->SetBinContent(5,0.1975834);
   new_histo_group_Vg_wh3l_13TeV_ossf_pt2185->SetBinError(1,0.04232062);
   new_histo_group_Vg_wh3l_13TeV_ossf_pt2185->SetBinError(2,0.3980689);
   new_histo_group_Vg_wh3l_13TeV_ossf_pt2185->SetBinError(3,0.3740925);
   new_histo_group_Vg_wh3l_13TeV_ossf_pt2185->SetBinError(4,0.07189745);
   new_histo_group_Vg_wh3l_13TeV_ossf_pt2185->SetBinError(5,0.1399723);
   new_histo_group_Vg_wh3l_13TeV_ossf_pt2185->SetEntries(42);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_13TeV_ossf_pt2185->SetFillColor(ci);
   new_histo_group_Vg_wh3l_13TeV_ossf_pt2185->SetFillStyle(3001);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_13TeV_ossf_pt2185->SetLineColor(ci);
   new_histo_group_Vg_wh3l_13TeV_ossf_pt2185->GetXaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_13TeV_ossf_pt2185->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_13TeV_ossf_pt2185->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_13TeV_ossf_pt2185->GetXaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_13TeV_ossf_pt2185->GetYaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_13TeV_ossf_pt2185->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_13TeV_ossf_pt2185->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_13TeV_ossf_pt2185->GetYaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_13TeV_ossf_pt2185->GetZaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_13TeV_ossf_pt2185->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_13TeV_ossf_pt2185->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_13TeV_ossf_pt2185->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_ossf_pt2->Add(new_histo_group_Vg_wh3l_13TeV_ossf_pt2,"");
   
   TH1D *new_histo_group_ZZ_wh3l_13TeV_ossf_pt2186 = new TH1D("new_histo_group_ZZ_wh3l_13TeV_ossf_pt2186","histo_ZZ",25,10,200);
   new_histo_group_ZZ_wh3l_13TeV_ossf_pt2186->SetBinContent(1,0.05352081);
   new_histo_group_ZZ_wh3l_13TeV_ossf_pt2186->SetBinContent(2,0.07802278);
   new_histo_group_ZZ_wh3l_13TeV_ossf_pt2186->SetBinContent(3,0.2222083);
   new_histo_group_ZZ_wh3l_13TeV_ossf_pt2186->SetBinContent(4,0.03939452);
   new_histo_group_ZZ_wh3l_13TeV_ossf_pt2186->SetBinContent(6,0.05112314);
   new_histo_group_ZZ_wh3l_13TeV_ossf_pt2186->SetBinContent(7,0.02976016);
   new_histo_group_ZZ_wh3l_13TeV_ossf_pt2186->SetBinContent(8,0.04527812);
   new_histo_group_ZZ_wh3l_13TeV_ossf_pt2186->SetBinContent(10,0.02856258);
   new_histo_group_ZZ_wh3l_13TeV_ossf_pt2186->SetBinContent(15,0.02088597);
   new_histo_group_ZZ_wh3l_13TeV_ossf_pt2186->SetBinError(1,0.03784829);
   new_histo_group_ZZ_wh3l_13TeV_ossf_pt2186->SetBinError(2,0.04767264);
   new_histo_group_ZZ_wh3l_13TeV_ossf_pt2186->SetBinError(3,0.09967927);
   new_histo_group_ZZ_wh3l_13TeV_ossf_pt2186->SetBinError(4,0.03939452);
   new_histo_group_ZZ_wh3l_13TeV_ossf_pt2186->SetBinError(6,0.05112314);
   new_histo_group_ZZ_wh3l_13TeV_ossf_pt2186->SetBinError(7,0.02976016);
   new_histo_group_ZZ_wh3l_13TeV_ossf_pt2186->SetBinError(8,0.04527812);
   new_histo_group_ZZ_wh3l_13TeV_ossf_pt2186->SetBinError(10,0.02856258);
   new_histo_group_ZZ_wh3l_13TeV_ossf_pt2186->SetBinError(15,0.02088597);
   new_histo_group_ZZ_wh3l_13TeV_ossf_pt2186->SetEntries(17);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_13TeV_ossf_pt2186->SetFillColor(ci);
   new_histo_group_ZZ_wh3l_13TeV_ossf_pt2186->SetFillStyle(3001);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_13TeV_ossf_pt2186->SetLineColor(ci);
   new_histo_group_ZZ_wh3l_13TeV_ossf_pt2186->GetXaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_13TeV_ossf_pt2186->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_13TeV_ossf_pt2186->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_13TeV_ossf_pt2186->GetXaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_13TeV_ossf_pt2186->GetYaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_13TeV_ossf_pt2186->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_13TeV_ossf_pt2186->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_13TeV_ossf_pt2186->GetYaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_13TeV_ossf_pt2186->GetZaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_13TeV_ossf_pt2186->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_13TeV_ossf_pt2186->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_13TeV_ossf_pt2186->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_ossf_pt2->Add(new_histo_group_ZZ_wh3l_13TeV_ossf_pt2,"");
   
   TH1D *new_histo_group_WZ_wh3l_13TeV_ossf_pt2187 = new TH1D("new_histo_group_WZ_wh3l_13TeV_ossf_pt2187","histo_WZ",25,10,200);
   new_histo_group_WZ_wh3l_13TeV_ossf_pt2187->SetBinContent(1,0.4698275);
   new_histo_group_WZ_wh3l_13TeV_ossf_pt2187->SetBinContent(2,1.781673);
   new_histo_group_WZ_wh3l_13TeV_ossf_pt2187->SetBinContent(3,1.445317);
   new_histo_group_WZ_wh3l_13TeV_ossf_pt2187->SetBinContent(4,0.9488276);
   new_histo_group_WZ_wh3l_13TeV_ossf_pt2187->SetBinContent(5,0.6677485);
   new_histo_group_WZ_wh3l_13TeV_ossf_pt2187->SetBinContent(6,0.4375254);
   new_histo_group_WZ_wh3l_13TeV_ossf_pt2187->SetBinContent(7,0.3093375);
   new_histo_group_WZ_wh3l_13TeV_ossf_pt2187->SetBinContent(8,0.2348986);
   new_histo_group_WZ_wh3l_13TeV_ossf_pt2187->SetBinContent(9,0.1032294);
   new_histo_group_WZ_wh3l_13TeV_ossf_pt2187->SetBinContent(10,0.1319365);
   new_histo_group_WZ_wh3l_13TeV_ossf_pt2187->SetBinContent(11,0.07175356);
   new_histo_group_WZ_wh3l_13TeV_ossf_pt2187->SetBinContent(12,0.08318066);
   new_histo_group_WZ_wh3l_13TeV_ossf_pt2187->SetBinContent(13,0.03154412);
   new_histo_group_WZ_wh3l_13TeV_ossf_pt2187->SetBinContent(14,0.04836459);
   new_histo_group_WZ_wh3l_13TeV_ossf_pt2187->SetBinContent(15,0.02515137);
   new_histo_group_WZ_wh3l_13TeV_ossf_pt2187->SetBinContent(16,0.01872941);
   new_histo_group_WZ_wh3l_13TeV_ossf_pt2187->SetBinContent(17,0.006186721);
   new_histo_group_WZ_wh3l_13TeV_ossf_pt2187->SetBinContent(18,0.01254151);
   new_histo_group_WZ_wh3l_13TeV_ossf_pt2187->SetBinContent(19,0.01630356);
   new_histo_group_WZ_wh3l_13TeV_ossf_pt2187->SetBinContent(20,0.01695862);
   new_histo_group_WZ_wh3l_13TeV_ossf_pt2187->SetBinContent(21,0.005363861);
   new_histo_group_WZ_wh3l_13TeV_ossf_pt2187->SetBinContent(22,0.0160739);
   new_histo_group_WZ_wh3l_13TeV_ossf_pt2187->SetBinContent(23,0.01172423);
   new_histo_group_WZ_wh3l_13TeV_ossf_pt2187->SetBinContent(24,0.006498538);
   new_histo_group_WZ_wh3l_13TeV_ossf_pt2187->SetBinContent(26,0.01968246);
   new_histo_group_WZ_wh3l_13TeV_ossf_pt2187->SetBinError(1,0.04946215);
   new_histo_group_WZ_wh3l_13TeV_ossf_pt2187->SetBinError(2,0.09928374);
   new_histo_group_WZ_wh3l_13TeV_ossf_pt2187->SetBinError(3,0.08893402);
   new_histo_group_WZ_wh3l_13TeV_ossf_pt2187->SetBinError(4,0.07131637);
   new_histo_group_WZ_wh3l_13TeV_ossf_pt2187->SetBinError(5,0.06048121);
   new_histo_group_WZ_wh3l_13TeV_ossf_pt2187->SetBinError(6,0.04901759);
   new_histo_group_WZ_wh3l_13TeV_ossf_pt2187->SetBinError(7,0.0405562);
   new_histo_group_WZ_wh3l_13TeV_ossf_pt2187->SetBinError(8,0.03610926);
   new_histo_group_WZ_wh3l_13TeV_ossf_pt2187->SetBinError(9,0.02311655);
   new_histo_group_WZ_wh3l_13TeV_ossf_pt2187->SetBinError(10,0.02673462);
   new_histo_group_WZ_wh3l_13TeV_ossf_pt2187->SetBinError(11,0.01911542);
   new_histo_group_WZ_wh3l_13TeV_ossf_pt2187->SetBinError(12,0.02126438);
   new_histo_group_WZ_wh3l_13TeV_ossf_pt2187->SetBinError(13,0.01255252);
   new_histo_group_WZ_wh3l_13TeV_ossf_pt2187->SetBinError(14,0.01558536);
   new_histo_group_WZ_wh3l_13TeV_ossf_pt2187->SetBinError(15,0.01137927);
   new_histo_group_WZ_wh3l_13TeV_ossf_pt2187->SetBinError(16,0.01082053);
   new_histo_group_WZ_wh3l_13TeV_ossf_pt2187->SetBinError(17,0.006186721);
   new_histo_group_WZ_wh3l_13TeV_ossf_pt2187->SetBinError(18,0.007525692);
   new_histo_group_WZ_wh3l_13TeV_ossf_pt2187->SetBinError(19,0.009447107);
   new_histo_group_WZ_wh3l_13TeV_ossf_pt2187->SetBinError(20,0.009823398);
   new_histo_group_WZ_wh3l_13TeV_ossf_pt2187->SetBinError(21,0.005363861);
   new_histo_group_WZ_wh3l_13TeV_ossf_pt2187->SetBinError(22,0.009313651);
   new_histo_group_WZ_wh3l_13TeV_ossf_pt2187->SetBinError(23,0.008323294);
   new_histo_group_WZ_wh3l_13TeV_ossf_pt2187->SetBinError(24,0.005595796);
   new_histo_group_WZ_wh3l_13TeV_ossf_pt2187->SetBinError(26,0.01017656);
   new_histo_group_WZ_wh3l_13TeV_ossf_pt2187->SetEntries(1419);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_13TeV_ossf_pt2187->SetFillColor(ci);
   new_histo_group_WZ_wh3l_13TeV_ossf_pt2187->SetFillStyle(3001);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_13TeV_ossf_pt2187->SetLineColor(ci);
   new_histo_group_WZ_wh3l_13TeV_ossf_pt2187->GetXaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_13TeV_ossf_pt2187->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_13TeV_ossf_pt2187->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_13TeV_ossf_pt2187->GetXaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_13TeV_ossf_pt2187->GetYaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_13TeV_ossf_pt2187->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_13TeV_ossf_pt2187->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_13TeV_ossf_pt2187->GetYaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_13TeV_ossf_pt2187->GetZaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_13TeV_ossf_pt2187->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_13TeV_ossf_pt2187->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_13TeV_ossf_pt2187->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_ossf_pt2->Add(new_histo_group_WZ_wh3l_13TeV_ossf_pt2,"");
   
   TH1D *new_histo_group_Higgs_wh3l_13TeV_ossf_pt2188 = new TH1D("new_histo_group_Higgs_wh3l_13TeV_ossf_pt2188","histo_H_htt",25,10,200);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt2188->SetBinContent(1,0.01547162);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt2188->SetBinContent(2,0.09077451);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt2188->SetBinContent(3,0.1353968);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt2188->SetBinContent(4,0.09543545);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt2188->SetBinContent(5,0.04881378);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt2188->SetBinContent(6,0.06749889);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt2188->SetBinContent(7,0.03495954);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt2188->SetBinContent(8,0.01760699);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt2188->SetBinContent(9,0.02393543);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt2188->SetBinContent(10,0.02145667);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt2188->SetBinContent(11,0.008866284);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt2188->SetBinContent(12,0.01436826);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt2188->SetBinContent(13,0.007761488);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt2188->SetBinContent(14,0.003239132);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt2188->SetBinContent(16,0.002356514);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt2188->SetBinContent(17,0.001604902);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt2188->SetBinContent(18,0.001339243);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt2188->SetBinContent(19,0.0008604478);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt2188->SetBinContent(20,0.002256681);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt2188->SetBinContent(21,0.0001691847);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt2188->SetBinContent(22,0.0003548994);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt2188->SetBinContent(24,0.001244385);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt2188->SetBinContent(25,0.0001007689);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt2188->SetBinContent(26,0.001328518);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt2188->SetBinError(1,0.005145784);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt2188->SetBinError(2,0.01048335);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt2188->SetBinError(3,0.01243357);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt2188->SetBinError(4,0.01028269);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt2188->SetBinError(5,0.007301015);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt2188->SetBinError(6,0.009508898);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt2188->SetBinError(7,0.006375001);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt2188->SetBinError(8,0.004511014);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt2188->SetBinError(9,0.00526608);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt2188->SetBinError(10,0.005352904);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt2188->SetBinError(11,0.003270771);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt2188->SetBinError(12,0.004145632);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt2188->SetBinError(13,0.003126257);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt2188->SetBinError(14,0.002292934);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt2188->SetBinError(16,0.001749659);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt2188->SetBinError(17,0.001604902);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt2188->SetBinError(18,0.001149454);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt2188->SetBinError(19,0.001116438);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt2188->SetBinError(20,0.001395105);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt2188->SetBinError(21,0.0001691847);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt2188->SetBinError(22,0.0003548994);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt2188->SetBinError(24,0.001054138);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt2188->SetBinError(25,0.0001007689);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt2188->SetBinError(26,0.001674362);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt2188->SetEntries(946);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt2188->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt2188->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt2188->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt2188->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt2188->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt2188->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt2188->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt2188->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt2188->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt2188->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt2188->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt2188->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt2188->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt2188->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt2188->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_ossf_pt2->Add(new_histo_group_Higgs_wh3l_13TeV_ossf_pt2,"");
   thsBackground_grouped_wh3l_13TeV_ossf_pt2->Draw("hist same");
   
   thsSignal_grouped_wh3l_13TeV_ossf_pt2 = new THStack();
   thsSignal_grouped_wh3l_13TeV_ossf_pt2->SetName("thsSignal_grouped_wh3l_13TeV_ossf_pt2");
   thsSignal_grouped_wh3l_13TeV_ossf_pt2->SetTitle("thsSignal_grouped_wh3l_13TeV_ossf_pt2");
   
   TH1F *thsSignal_grouped_wh3l_13TeV_ossf_pt2_stack_38 = new TH1F("thsSignal_grouped_wh3l_13TeV_ossf_pt2_stack_38","thsSignal_grouped_wh3l_13TeV_ossf_pt2",25,10,200);
   thsSignal_grouped_wh3l_13TeV_ossf_pt2_stack_38->SetMinimum(-0.0002559901);
   thsSignal_grouped_wh3l_13TeV_ossf_pt2_stack_38->SetMaximum(0.1552219);
   thsSignal_grouped_wh3l_13TeV_ossf_pt2_stack_38->SetDirectory(0);
   thsSignal_grouped_wh3l_13TeV_ossf_pt2_stack_38->SetStats(0);
   thsSignal_grouped_wh3l_13TeV_ossf_pt2_stack_38->SetLineStyle(0);
   thsSignal_grouped_wh3l_13TeV_ossf_pt2_stack_38->SetMarkerStyle(20);
   thsSignal_grouped_wh3l_13TeV_ossf_pt2_stack_38->GetXaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_13TeV_ossf_pt2_stack_38->GetXaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_13TeV_ossf_pt2_stack_38->GetXaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_13TeV_ossf_pt2_stack_38->GetXaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_13TeV_ossf_pt2_stack_38->GetXaxis()->SetTitleOffset(0.9);
   thsSignal_grouped_wh3l_13TeV_ossf_pt2_stack_38->GetXaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_13TeV_ossf_pt2_stack_38->GetYaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_13TeV_ossf_pt2_stack_38->GetYaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_13TeV_ossf_pt2_stack_38->GetYaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_13TeV_ossf_pt2_stack_38->GetYaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_13TeV_ossf_pt2_stack_38->GetYaxis()->SetTitleOffset(1.25);
   thsSignal_grouped_wh3l_13TeV_ossf_pt2_stack_38->GetYaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_13TeV_ossf_pt2_stack_38->GetZaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_13TeV_ossf_pt2_stack_38->GetZaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_13TeV_ossf_pt2_stack_38->GetZaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_13TeV_ossf_pt2_stack_38->GetZaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_13TeV_ossf_pt2_stack_38->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_13TeV_ossf_pt2->SetHistogram(thsSignal_grouped_wh3l_13TeV_ossf_pt2_stack_38);
   
   
   TH1D *new_histo_group_Higgs_wh3l_13TeV_ossf_pt2189 = new TH1D("new_histo_group_Higgs_wh3l_13TeV_ossf_pt2189","histo_H_htt",25,10,200);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt2189->SetBinContent(1,0.01547162);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt2189->SetBinContent(2,0.09077451);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt2189->SetBinContent(3,0.1353968);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt2189->SetBinContent(4,0.09543545);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt2189->SetBinContent(5,0.04881378);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt2189->SetBinContent(6,0.06749889);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt2189->SetBinContent(7,0.03495954);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt2189->SetBinContent(8,0.01760699);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt2189->SetBinContent(9,0.02393543);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt2189->SetBinContent(10,0.02145667);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt2189->SetBinContent(11,0.008866284);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt2189->SetBinContent(12,0.01436826);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt2189->SetBinContent(13,0.007761488);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt2189->SetBinContent(14,0.003239132);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt2189->SetBinContent(16,0.002356514);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt2189->SetBinContent(17,0.001604902);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt2189->SetBinContent(18,0.001339243);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt2189->SetBinContent(19,0.0008604478);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt2189->SetBinContent(20,0.002256681);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt2189->SetBinContent(21,0.0001691847);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt2189->SetBinContent(22,0.0003548994);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt2189->SetBinContent(24,0.001244385);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt2189->SetBinContent(25,0.0001007689);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt2189->SetBinContent(26,0.001328518);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt2189->SetBinError(1,0.005145784);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt2189->SetBinError(2,0.01048335);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt2189->SetBinError(3,0.01243357);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt2189->SetBinError(4,0.01028269);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt2189->SetBinError(5,0.007301015);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt2189->SetBinError(6,0.009508898);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt2189->SetBinError(7,0.006375001);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt2189->SetBinError(8,0.004511014);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt2189->SetBinError(9,0.00526608);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt2189->SetBinError(10,0.005352904);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt2189->SetBinError(11,0.003270771);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt2189->SetBinError(12,0.004145632);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt2189->SetBinError(13,0.003126257);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt2189->SetBinError(14,0.002292934);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt2189->SetBinError(16,0.001749659);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt2189->SetBinError(17,0.001604902);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt2189->SetBinError(18,0.001149454);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt2189->SetBinError(19,0.001116438);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt2189->SetBinError(20,0.001395105);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt2189->SetBinError(21,0.0001691847);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt2189->SetBinError(22,0.0003548994);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt2189->SetBinError(24,0.001054138);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt2189->SetBinError(25,0.0001007689);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt2189->SetBinError(26,0.001674362);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt2189->SetEntries(946);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt2189->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt2189->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt2189->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt2189->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt2189->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt2189->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt2189->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt2189->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt2189->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt2189->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt2189->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt2189->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt2189->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt2189->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_ossf_pt2189->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_13TeV_ossf_pt2->Add(new_histo_group_Higgs_wh3l_13TeV_ossf_pt2,"");
   thsSignal_grouped_wh3l_13TeV_ossf_pt2->Draw("hist same noclear");
   
   Double_t _fx3037[25] = {
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
   Double_t _fy3037[25] = {
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
   Double_t _felx3037[25] = {
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
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
   Double_t _fely3037[25] = {
   0.2682448,
   1.362696,
   2.663342,
   0.420765,
   0.6634307,
   0.5121393,
   0.2122489,
   0.3929412,
   0.02498109,
   0.06671822,
   0.01934893,
   0.02151754,
   0.01258317,
   0.01568951,
   0.03298203,
   0.01084683,
   0.006186937,
   0.007560703,
   0.009481763,
   0.009861538,
   0.005363949,
   0.009328266,
   0.008330718,
   0.005607828,
   0};
   Double_t _fehx3037[25] = {
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
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
   Double_t _fehy3037[25] = {
   0.7875687,
   1.36191,
   2.66323,
   0.837158,
   0.7587534,
   0.7045503,
   0.2122703,
   0.3929383,
   0.0249955,
   0.06672715,
   0.01927742,
   0.02145765,
   0.01257013,
   0.0157016,
   0.03298777,
   0.0108494,
   0.006186938,
   0.00756621,
   0.009480076,
   0.009838722,
   0.005363949,
   0.009328799,
   0.008331414,
   0.005606678,
   0};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(25,_fx3037,_fy3037,_felx3037,_fehx3037,_fely3037,_fehy3037);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(12);
   grae->SetFillStyle(3004);
   grae->SetLineColor(12);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3037 = new TH1F("Graph_Graph3037","",100,0,219);
   Graph_Graph3037->SetMinimum(-0.9276057);
   Graph_Graph3037->SetMaximum(10.20366);
   Graph_Graph3037->SetDirectory(0);
   Graph_Graph3037->SetStats(0);
   Graph_Graph3037->SetLineStyle(0);
   Graph_Graph3037->SetMarkerStyle(20);
   Graph_Graph3037->GetXaxis()->SetLabelFont(42);
   Graph_Graph3037->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3037->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3037->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3037->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3037->GetXaxis()->SetTitleFont(42);
   Graph_Graph3037->GetYaxis()->SetLabelFont(42);
   Graph_Graph3037->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3037->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3037->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3037->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3037->GetYaxis()->SetTitleFont(42);
   Graph_Graph3037->GetZaxis()->SetLabelFont(42);
   Graph_Graph3037->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3037->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3037->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3037->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3037);
   
   grae->Draw("2");
   
   Double_t _fx3038[25] = {
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
   Double_t _fy3038[25] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t _felx3038[25] = {
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
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
   Double_t _fely3038[25] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t _fehx3038[25] = {
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
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
   Double_t _fehy3038[25] = {
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
   grae = new TGraphAsymmErrors(25,_fx3038,_fy3038,_felx3038,_fehx3038,_fely3038,_fehy3038);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(1);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3038 = new TH1F("Graph_Graph3038","",100,0,219);
   Graph_Graph3038->SetMinimum(0);
   Graph_Graph3038->SetMaximum(1.262698);
   Graph_Graph3038->SetDirectory(0);
   Graph_Graph3038->SetStats(0);
   Graph_Graph3038->SetLineStyle(0);
   Graph_Graph3038->SetMarkerStyle(20);
   Graph_Graph3038->GetXaxis()->SetLabelFont(42);
   Graph_Graph3038->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3038->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3038->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3038->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3038->GetXaxis()->SetTitleFont(42);
   Graph_Graph3038->GetYaxis()->SetLabelFont(42);
   Graph_Graph3038->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3038->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3038->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3038->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3038->GetYaxis()->SetTitleFont(42);
   Graph_Graph3038->GetZaxis()->SetLabelFont(42);
   Graph_Graph3038->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3038->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3038->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3038->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3038);
   
   grae->Draw("p0");
   
   TLegend *leg = new TLegend(0.2,0.7,0.8,0.9,NULL,"brNDC");
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
   
   leg = new TLegend(0.2,0.7,0.8,0.9,NULL,"brNDC");
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
   
   TH1F *hframe_copy190 = new TH1F("hframe_copy190","",1000,10,200);
   hframe_copy190->SetMinimum(0);
   hframe_copy190->SetMaximum(16.87055);
   hframe_copy190->SetDirectory(0);
   hframe_copy190->SetStats(0);
   hframe_copy190->SetLineStyle(0);
   hframe_copy190->SetMarkerStyle(20);
   hframe_copy190->GetXaxis()->SetTitle("lept2_p_{T} [GeV]");
   hframe_copy190->GetXaxis()->SetNdivisions(506);
   hframe_copy190->GetXaxis()->SetLabelFont(42);
   hframe_copy190->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy190->GetXaxis()->SetLabelSize(0.05);
   hframe_copy190->GetXaxis()->SetTitleSize(0.06);
   hframe_copy190->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy190->GetXaxis()->SetTitleFont(42);
   hframe_copy190->GetYaxis()->SetTitle("Events");
   hframe_copy190->GetYaxis()->SetLabelFont(42);
   hframe_copy190->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy190->GetYaxis()->SetLabelSize(0.05);
   hframe_copy190->GetYaxis()->SetTitleSize(0.06);
   hframe_copy190->GetYaxis()->SetTitleOffset(1.25);
   hframe_copy190->GetYaxis()->SetTitleFont(42);
   hframe_copy190->GetZaxis()->SetLabelFont(42);
   hframe_copy190->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy190->GetZaxis()->SetLabelSize(0.05);
   hframe_copy190->GetZaxis()->SetTitleSize(0.06);
   hframe_copy190->GetZaxis()->SetTitleFont(42);
   hframe_copy190->Draw("sameaxis");
   ccwh3l_13TeV_ossf_pt2->Modified();
   ccwh3l_13TeV_ossf_pt2->cd();
   ccwh3l_13TeV_ossf_pt2->SetSelected(ccwh3l_13TeV_ossf_pt2);
}
