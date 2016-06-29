void c_wh3l_plot_13TeV_pt2()
{
//=========Macro generated from canvas: ccwh3l_plot_13TeV_pt2/cc
//=========  (Wed Jun 29 01:51:41 2016) by ROOT version6.02/13
   TCanvas *ccwh3l_plot_13TeV_pt2 = new TCanvas("ccwh3l_plot_13TeV_pt2", "cc",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   ccwh3l_plot_13TeV_pt2->SetHighLightColor(2);
   ccwh3l_plot_13TeV_pt2->Range(-28,-2.865136,209.5,19.17437);
   ccwh3l_plot_13TeV_pt2->SetFillColor(0);
   ccwh3l_plot_13TeV_pt2->SetBorderMode(0);
   ccwh3l_plot_13TeV_pt2->SetBorderSize(2);
   ccwh3l_plot_13TeV_pt2->SetTickx(1);
   ccwh3l_plot_13TeV_pt2->SetTicky(1);
   ccwh3l_plot_13TeV_pt2->SetLeftMargin(0.16);
   ccwh3l_plot_13TeV_pt2->SetRightMargin(0.04);
   ccwh3l_plot_13TeV_pt2->SetTopMargin(0.05);
   ccwh3l_plot_13TeV_pt2->SetBottomMargin(0.13);
   ccwh3l_plot_13TeV_pt2->SetFrameFillStyle(0);
   ccwh3l_plot_13TeV_pt2->SetFrameBorderMode(0);
   ccwh3l_plot_13TeV_pt2->SetFrameFillStyle(0);
   ccwh3l_plot_13TeV_pt2->SetFrameBorderMode(0);
   
   TH1F *hframe181 = new TH1F("hframe181","",1000,10,200);
   hframe181->SetMinimum(0);
   hframe181->SetMaximum(18.07239);
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
   
   THStack *thsBackground_grouped_wh3l_plot_13TeV_pt2 = new THStack();
   thsBackground_grouped_wh3l_plot_13TeV_pt2->SetName("thsBackground_grouped_wh3l_plot_13TeV_pt2");
   thsBackground_grouped_wh3l_plot_13TeV_pt2->SetTitle("thsBackground_grouped_wh3l_plot_13TeV_pt2");
   
   TH1F *thsBackground_grouped_wh3l_plot_13TeV_pt2_stack_37 = new TH1F("thsBackground_grouped_wh3l_plot_13TeV_pt2_stack_37","thsBackground_grouped_wh3l_plot_13TeV_pt2",25,10,200);
   thsBackground_grouped_wh3l_plot_13TeV_pt2_stack_37->SetMinimum(-0.5259424);
   thsBackground_grouped_wh3l_plot_13TeV_pt2_stack_37->SetMaximum(7.590405);
   thsBackground_grouped_wh3l_plot_13TeV_pt2_stack_37->SetDirectory(0);
   thsBackground_grouped_wh3l_plot_13TeV_pt2_stack_37->SetStats(0);
   thsBackground_grouped_wh3l_plot_13TeV_pt2_stack_37->SetLineStyle(0);
   thsBackground_grouped_wh3l_plot_13TeV_pt2_stack_37->SetMarkerStyle(20);
   thsBackground_grouped_wh3l_plot_13TeV_pt2_stack_37->GetXaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_plot_13TeV_pt2_stack_37->GetXaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_plot_13TeV_pt2_stack_37->GetXaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_plot_13TeV_pt2_stack_37->GetXaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_plot_13TeV_pt2_stack_37->GetXaxis()->SetTitleOffset(0.9);
   thsBackground_grouped_wh3l_plot_13TeV_pt2_stack_37->GetXaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_plot_13TeV_pt2_stack_37->GetYaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_plot_13TeV_pt2_stack_37->GetYaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_plot_13TeV_pt2_stack_37->GetYaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_plot_13TeV_pt2_stack_37->GetYaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_plot_13TeV_pt2_stack_37->GetYaxis()->SetTitleOffset(1.25);
   thsBackground_grouped_wh3l_plot_13TeV_pt2_stack_37->GetYaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_plot_13TeV_pt2_stack_37->GetZaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_plot_13TeV_pt2_stack_37->GetZaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_plot_13TeV_pt2_stack_37->GetZaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_plot_13TeV_pt2_stack_37->GetZaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_plot_13TeV_pt2_stack_37->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_plot_13TeV_pt2->SetHistogram(thsBackground_grouped_wh3l_plot_13TeV_pt2_stack_37);
   
   
   TH1D *new_histo_group_Fake_wh3l_plot_13TeV_pt2182 = new TH1D("new_histo_group_Fake_wh3l_plot_13TeV_pt2182","histo_Fake",25,10,200);
   new_histo_group_Fake_wh3l_plot_13TeV_pt2182->SetBinContent(1,0.1287405);
   new_histo_group_Fake_wh3l_plot_13TeV_pt2182->SetBinContent(2,1.341464);
   new_histo_group_Fake_wh3l_plot_13TeV_pt2182->SetBinContent(3,4.486261);
   new_histo_group_Fake_wh3l_plot_13TeV_pt2182->SetBinContent(4,1.396345);
   new_histo_group_Fake_wh3l_plot_13TeV_pt2182->SetBinContent(5,0.5040304);
   new_histo_group_Fake_wh3l_plot_13TeV_pt2182->SetBinContent(6,1.273508);
   new_histo_group_Fake_wh3l_plot_13TeV_pt2182->SetBinContent(7,0.1267478);
   new_histo_group_Fake_wh3l_plot_13TeV_pt2182->SetBinContent(8,0.6794888);
   new_histo_group_Fake_wh3l_plot_13TeV_pt2182->SetBinContent(9,-0.001650331);
   new_histo_group_Fake_wh3l_plot_13TeV_pt2182->SetBinContent(10,0.01119502);
   new_histo_group_Fake_wh3l_plot_13TeV_pt2182->SetBinContent(11,0.356344);
   new_histo_group_Fake_wh3l_plot_13TeV_pt2182->SetBinContent(12,0.3114201);
   new_histo_group_Fake_wh3l_plot_13TeV_pt2182->SetBinContent(17,-0.01470217);
   new_histo_group_Fake_wh3l_plot_13TeV_pt2182->SetBinContent(23,-0.004633672);
   new_histo_group_Fake_wh3l_plot_13TeV_pt2182->SetBinError(1,0.6546829);
   new_histo_group_Fake_wh3l_plot_13TeV_pt2182->SetBinError(2,0.8644659);
   new_histo_group_Fake_wh3l_plot_13TeV_pt2182->SetBinError(3,1.674563);
   new_histo_group_Fake_wh3l_plot_13TeV_pt2182->SetBinError(4,1.149395);
   new_histo_group_Fake_wh3l_plot_13TeV_pt2182->SetBinError(5,0.5583507);
   new_histo_group_Fake_wh3l_plot_13TeV_pt2182->SetBinError(6,0.9168903);
   new_histo_group_Fake_wh3l_plot_13TeV_pt2182->SetBinError(7,0.135618);
   new_histo_group_Fake_wh3l_plot_13TeV_pt2182->SetBinError(8,0.4599755);
   new_histo_group_Fake_wh3l_plot_13TeV_pt2182->SetBinError(9,0.001650331);
   new_histo_group_Fake_wh3l_plot_13TeV_pt2182->SetBinError(10,0.01119502);
   new_histo_group_Fake_wh3l_plot_13TeV_pt2182->SetBinError(11,0.356344);
   new_histo_group_Fake_wh3l_plot_13TeV_pt2182->SetBinError(12,0.3114201);
   new_histo_group_Fake_wh3l_plot_13TeV_pt2182->SetBinError(17,0.01470217);
   new_histo_group_Fake_wh3l_plot_13TeV_pt2182->SetBinError(23,0.004633672);
   new_histo_group_Fake_wh3l_plot_13TeV_pt2182->SetEntries(118);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_plot_13TeV_pt2182->SetFillColor(ci);
   new_histo_group_Fake_wh3l_plot_13TeV_pt2182->SetFillStyle(3001);

   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_plot_13TeV_pt2182->SetLineColor(ci);
   new_histo_group_Fake_wh3l_plot_13TeV_pt2182->GetXaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_plot_13TeV_pt2182->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_plot_13TeV_pt2182->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_plot_13TeV_pt2182->GetXaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_plot_13TeV_pt2182->GetYaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_plot_13TeV_pt2182->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_plot_13TeV_pt2182->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_plot_13TeV_pt2182->GetYaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_plot_13TeV_pt2182->GetZaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_plot_13TeV_pt2182->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_plot_13TeV_pt2182->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_plot_13TeV_pt2182->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_plot_13TeV_pt2->Add(new_histo_group_Fake_wh3l_plot_13TeV_pt2,"");
   
   TH1D *new_histo_group_WW_wh3l_plot_13TeV_pt2183 = new TH1D("new_histo_group_WW_wh3l_plot_13TeV_pt2183","histo_WW",25,10,200);
   new_histo_group_WW_wh3l_plot_13TeV_pt2183->SetBinContent(2,0.0161241);
   new_histo_group_WW_wh3l_plot_13TeV_pt2183->SetBinContent(3,0.0285913);
   new_histo_group_WW_wh3l_plot_13TeV_pt2183->SetBinContent(4,0.01447441);
   new_histo_group_WW_wh3l_plot_13TeV_pt2183->SetBinContent(5,0.0142084);
   new_histo_group_WW_wh3l_plot_13TeV_pt2183->SetBinContent(8,0.01530373);
   new_histo_group_WW_wh3l_plot_13TeV_pt2183->SetBinError(2,0.0161241);
   new_histo_group_WW_wh3l_plot_13TeV_pt2183->SetBinError(3,0.02093881);
   new_histo_group_WW_wh3l_plot_13TeV_pt2183->SetBinError(4,0.01447441);
   new_histo_group_WW_wh3l_plot_13TeV_pt2183->SetBinError(5,0.0142084);
   new_histo_group_WW_wh3l_plot_13TeV_pt2183->SetBinError(8,0.01530373);
   new_histo_group_WW_wh3l_plot_13TeV_pt2183->SetEntries(6);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_plot_13TeV_pt2183->SetFillColor(ci);
   new_histo_group_WW_wh3l_plot_13TeV_pt2183->SetFillStyle(3001);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_plot_13TeV_pt2183->SetLineColor(ci);
   new_histo_group_WW_wh3l_plot_13TeV_pt2183->GetXaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_plot_13TeV_pt2183->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_plot_13TeV_pt2183->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_plot_13TeV_pt2183->GetXaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_plot_13TeV_pt2183->GetYaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_plot_13TeV_pt2183->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_plot_13TeV_pt2183->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_plot_13TeV_pt2183->GetYaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_plot_13TeV_pt2183->GetZaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_plot_13TeV_pt2183->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_plot_13TeV_pt2183->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_plot_13TeV_pt2183->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_plot_13TeV_pt2->Add(new_histo_group_WW_wh3l_plot_13TeV_pt2,"");
   
   TH1D *new_histo_group_VVV_wh3l_plot_13TeV_pt2184 = new TH1D("new_histo_group_VVV_wh3l_plot_13TeV_pt2184","histo_VVV",25,10,200);
   new_histo_group_VVV_wh3l_plot_13TeV_pt2184->SetBinContent(2,0.001403372);
   new_histo_group_VVV_wh3l_plot_13TeV_pt2184->SetBinContent(3,0.003127295);
   new_histo_group_VVV_wh3l_plot_13TeV_pt2184->SetBinContent(5,0.0006343185);
   new_histo_group_VVV_wh3l_plot_13TeV_pt2184->SetBinContent(6,0.0006836765);
   new_histo_group_VVV_wh3l_plot_13TeV_pt2184->SetBinContent(7,0.003536289);
   new_histo_group_VVV_wh3l_plot_13TeV_pt2184->SetBinContent(8,0.001073369);
   new_histo_group_VVV_wh3l_plot_13TeV_pt2184->SetBinContent(9,0.0005490761);
   new_histo_group_VVV_wh3l_plot_13TeV_pt2184->SetBinContent(10,0.0001540927);
   new_histo_group_VVV_wh3l_plot_13TeV_pt2184->SetBinContent(12,0.0006403264);
   new_histo_group_VVV_wh3l_plot_13TeV_pt2184->SetBinContent(15,0.0006729142);
   new_histo_group_VVV_wh3l_plot_13TeV_pt2184->SetBinContent(18,0.001045936);
   new_histo_group_VVV_wh3l_plot_13TeV_pt2184->SetBinError(2,0.0009982539);
   new_histo_group_VVV_wh3l_plot_13TeV_pt2184->SetBinError(3,0.001363818);
   new_histo_group_VVV_wh3l_plot_13TeV_pt2184->SetBinError(5,0.0006343185);
   new_histo_group_VVV_wh3l_plot_13TeV_pt2184->SetBinError(6,0.0006836765);
   new_histo_group_VVV_wh3l_plot_13TeV_pt2184->SetBinError(7,0.001449584);
   new_histo_group_VVV_wh3l_plot_13TeV_pt2184->SetBinError(8,0.0007768383);
   new_histo_group_VVV_wh3l_plot_13TeV_pt2184->SetBinError(9,0.0005490761);
   new_histo_group_VVV_wh3l_plot_13TeV_pt2184->SetBinError(10,0.0001540927);
   new_histo_group_VVV_wh3l_plot_13TeV_pt2184->SetBinError(12,0.000477819);
   new_histo_group_VVV_wh3l_plot_13TeV_pt2184->SetBinError(15,0.0006729142);
   new_histo_group_VVV_wh3l_plot_13TeV_pt2184->SetBinError(18,0.0007396364);
   new_histo_group_VVV_wh3l_plot_13TeV_pt2184->SetEntries(25);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_plot_13TeV_pt2184->SetFillColor(ci);
   new_histo_group_VVV_wh3l_plot_13TeV_pt2184->SetFillStyle(3001);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_plot_13TeV_pt2184->SetLineColor(ci);
   new_histo_group_VVV_wh3l_plot_13TeV_pt2184->GetXaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_plot_13TeV_pt2184->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_plot_13TeV_pt2184->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_plot_13TeV_pt2184->GetXaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_plot_13TeV_pt2184->GetYaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_plot_13TeV_pt2184->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_plot_13TeV_pt2184->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_plot_13TeV_pt2184->GetYaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_plot_13TeV_pt2184->GetZaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_plot_13TeV_pt2184->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_plot_13TeV_pt2184->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_plot_13TeV_pt2184->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_plot_13TeV_pt2->Add(new_histo_group_VVV_wh3l_plot_13TeV_pt2,"");
   
   TH1D *new_histo_group_Vg_wh3l_plot_13TeV_pt2185 = new TH1D("new_histo_group_Vg_wh3l_plot_13TeV_pt2185","histo_Vg",25,10,200);
   new_histo_group_Vg_wh3l_plot_13TeV_pt2185->SetBinContent(1,0.05942902);
   new_histo_group_Vg_wh3l_plot_13TeV_pt2185->SetBinContent(2,1.555161);
   new_histo_group_Vg_wh3l_plot_13TeV_pt2185->SetBinContent(3,0.7452881);
   new_histo_group_Vg_wh3l_plot_13TeV_pt2185->SetBinContent(4,0.09070755);
   new_histo_group_Vg_wh3l_plot_13TeV_pt2185->SetBinContent(5,0.1975834);
   new_histo_group_Vg_wh3l_plot_13TeV_pt2185->SetBinContent(12,0.1058488);
   new_histo_group_Vg_wh3l_plot_13TeV_pt2185->SetBinError(1,0.04232062);
   new_histo_group_Vg_wh3l_plot_13TeV_pt2185->SetBinError(2,0.3980689);
   new_histo_group_Vg_wh3l_plot_13TeV_pt2185->SetBinError(3,0.3740925);
   new_histo_group_Vg_wh3l_plot_13TeV_pt2185->SetBinError(4,0.07189745);
   new_histo_group_Vg_wh3l_plot_13TeV_pt2185->SetBinError(5,0.1399723);
   new_histo_group_Vg_wh3l_plot_13TeV_pt2185->SetBinError(12,0.1058488);
   new_histo_group_Vg_wh3l_plot_13TeV_pt2185->SetEntries(43);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_plot_13TeV_pt2185->SetFillColor(ci);
   new_histo_group_Vg_wh3l_plot_13TeV_pt2185->SetFillStyle(3001);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_plot_13TeV_pt2185->SetLineColor(ci);
   new_histo_group_Vg_wh3l_plot_13TeV_pt2185->GetXaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_plot_13TeV_pt2185->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_plot_13TeV_pt2185->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_plot_13TeV_pt2185->GetXaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_plot_13TeV_pt2185->GetYaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_plot_13TeV_pt2185->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_plot_13TeV_pt2185->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_plot_13TeV_pt2185->GetYaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_plot_13TeV_pt2185->GetZaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_plot_13TeV_pt2185->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_plot_13TeV_pt2185->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_plot_13TeV_pt2185->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_plot_13TeV_pt2->Add(new_histo_group_Vg_wh3l_plot_13TeV_pt2,"");
   
   TH1D *new_histo_group_ZZ_wh3l_plot_13TeV_pt2186 = new TH1D("new_histo_group_ZZ_wh3l_plot_13TeV_pt2186","histo_ZZ",25,10,200);
   new_histo_group_ZZ_wh3l_plot_13TeV_pt2186->SetBinContent(1,0.05352081);
   new_histo_group_ZZ_wh3l_plot_13TeV_pt2186->SetBinContent(2,0.1207363);
   new_histo_group_ZZ_wh3l_plot_13TeV_pt2186->SetBinContent(3,0.2222083);
   new_histo_group_ZZ_wh3l_plot_13TeV_pt2186->SetBinContent(4,0.03939452);
   new_histo_group_ZZ_wh3l_plot_13TeV_pt2186->SetBinContent(6,0.05112314);
   new_histo_group_ZZ_wh3l_plot_13TeV_pt2186->SetBinContent(7,0.06489699);
   new_histo_group_ZZ_wh3l_plot_13TeV_pt2186->SetBinContent(8,0.04527812);
   new_histo_group_ZZ_wh3l_plot_13TeV_pt2186->SetBinContent(10,0.02856258);
   new_histo_group_ZZ_wh3l_plot_13TeV_pt2186->SetBinContent(15,0.02088597);
   new_histo_group_ZZ_wh3l_plot_13TeV_pt2186->SetBinError(1,0.03784829);
   new_histo_group_ZZ_wh3l_plot_13TeV_pt2186->SetBinError(2,0.06400878);
   new_histo_group_ZZ_wh3l_plot_13TeV_pt2186->SetBinError(3,0.09967927);
   new_histo_group_ZZ_wh3l_plot_13TeV_pt2186->SetBinError(4,0.03939452);
   new_histo_group_ZZ_wh3l_plot_13TeV_pt2186->SetBinError(6,0.05112314);
   new_histo_group_ZZ_wh3l_plot_13TeV_pt2186->SetBinError(7,0.04604632);
   new_histo_group_ZZ_wh3l_plot_13TeV_pt2186->SetBinError(8,0.04527812);
   new_histo_group_ZZ_wh3l_plot_13TeV_pt2186->SetBinError(10,0.02856258);
   new_histo_group_ZZ_wh3l_plot_13TeV_pt2186->SetBinError(15,0.02088597);
   new_histo_group_ZZ_wh3l_plot_13TeV_pt2186->SetEntries(19);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_plot_13TeV_pt2186->SetFillColor(ci);
   new_histo_group_ZZ_wh3l_plot_13TeV_pt2186->SetFillStyle(3001);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_plot_13TeV_pt2186->SetLineColor(ci);
   new_histo_group_ZZ_wh3l_plot_13TeV_pt2186->GetXaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_plot_13TeV_pt2186->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_plot_13TeV_pt2186->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_plot_13TeV_pt2186->GetXaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_plot_13TeV_pt2186->GetYaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_plot_13TeV_pt2186->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_plot_13TeV_pt2186->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_plot_13TeV_pt2186->GetYaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_plot_13TeV_pt2186->GetZaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_plot_13TeV_pt2186->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_plot_13TeV_pt2186->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_plot_13TeV_pt2186->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_plot_13TeV_pt2->Add(new_histo_group_ZZ_wh3l_plot_13TeV_pt2,"");
   
   TH1D *new_histo_group_WZ_wh3l_plot_13TeV_pt2187 = new TH1D("new_histo_group_WZ_wh3l_plot_13TeV_pt2187","histo_WZ",25,10,200);
   new_histo_group_WZ_wh3l_plot_13TeV_pt2187->SetBinContent(1,0.5107915);
   new_histo_group_WZ_wh3l_plot_13TeV_pt2187->SetBinContent(2,1.916566);
   new_histo_group_WZ_wh3l_plot_13TeV_pt2187->SetBinContent(3,1.562944);
   new_histo_group_WZ_wh3l_plot_13TeV_pt2187->SetBinContent(4,1.103886);
   new_histo_group_WZ_wh3l_plot_13TeV_pt2187->SetBinContent(5,0.8765507);
   new_histo_group_WZ_wh3l_plot_13TeV_pt2187->SetBinContent(6,0.6713277);
   new_histo_group_WZ_wh3l_plot_13TeV_pt2187->SetBinContent(7,0.5975828);
   new_histo_group_WZ_wh3l_plot_13TeV_pt2187->SetBinContent(8,0.4287367);
   new_histo_group_WZ_wh3l_plot_13TeV_pt2187->SetBinContent(9,0.2459478);
   new_histo_group_WZ_wh3l_plot_13TeV_pt2187->SetBinContent(10,0.2759042);
   new_histo_group_WZ_wh3l_plot_13TeV_pt2187->SetBinContent(11,0.1829885);
   new_histo_group_WZ_wh3l_plot_13TeV_pt2187->SetBinContent(12,0.1865896);
   new_histo_group_WZ_wh3l_plot_13TeV_pt2187->SetBinContent(13,0.07905871);
   new_histo_group_WZ_wh3l_plot_13TeV_pt2187->SetBinContent(14,0.1032426);
   new_histo_group_WZ_wh3l_plot_13TeV_pt2187->SetBinContent(15,0.08098959);
   new_histo_group_WZ_wh3l_plot_13TeV_pt2187->SetBinContent(16,0.06750913);
   new_histo_group_WZ_wh3l_plot_13TeV_pt2187->SetBinContent(17,0.07299436);
   new_histo_group_WZ_wh3l_plot_13TeV_pt2187->SetBinContent(18,0.05463392);
   new_histo_group_WZ_wh3l_plot_13TeV_pt2187->SetBinContent(19,0.0452906);
   new_histo_group_WZ_wh3l_plot_13TeV_pt2187->SetBinContent(20,0.03927064);
   new_histo_group_WZ_wh3l_plot_13TeV_pt2187->SetBinContent(21,0.02601218);
   new_histo_group_WZ_wh3l_plot_13TeV_pt2187->SetBinContent(22,0.05642533);
   new_histo_group_WZ_wh3l_plot_13TeV_pt2187->SetBinContent(23,0.02459539);
   new_histo_group_WZ_wh3l_plot_13TeV_pt2187->SetBinContent(24,0.04108705);
   new_histo_group_WZ_wh3l_plot_13TeV_pt2187->SetBinContent(25,0.0164082);
   new_histo_group_WZ_wh3l_plot_13TeV_pt2187->SetBinContent(26,0.209143);
   new_histo_group_WZ_wh3l_plot_13TeV_pt2187->SetBinError(1,0.05167497);
   new_histo_group_WZ_wh3l_plot_13TeV_pt2187->SetBinError(2,0.1029773);
   new_histo_group_WZ_wh3l_plot_13TeV_pt2187->SetBinError(3,0.09223166);
   new_histo_group_WZ_wh3l_plot_13TeV_pt2187->SetBinError(4,0.07710599);
   new_histo_group_WZ_wh3l_plot_13TeV_pt2187->SetBinError(5,0.06929445);
   new_histo_group_WZ_wh3l_plot_13TeV_pt2187->SetBinError(6,0.06042252);
   new_histo_group_WZ_wh3l_plot_13TeV_pt2187->SetBinError(7,0.05681836);
   new_histo_group_WZ_wh3l_plot_13TeV_pt2187->SetBinError(8,0.04818455);
   new_histo_group_WZ_wh3l_plot_13TeV_pt2187->SetBinError(9,0.03621552);
   new_histo_group_WZ_wh3l_plot_13TeV_pt2187->SetBinError(10,0.03866905);
   new_histo_group_WZ_wh3l_plot_13TeV_pt2187->SetBinError(11,0.03131491);
   new_histo_group_WZ_wh3l_plot_13TeV_pt2187->SetBinError(12,0.03164352);
   new_histo_group_WZ_wh3l_plot_13TeV_pt2187->SetBinError(13,0.02011427);
   new_histo_group_WZ_wh3l_plot_13TeV_pt2187->SetBinError(14,0.02300087);
   new_histo_group_WZ_wh3l_plot_13TeV_pt2187->SetBinError(15,0.02078586);
   new_histo_group_WZ_wh3l_plot_13TeV_pt2187->SetBinError(16,0.01949899);
   new_histo_group_WZ_wh3l_plot_13TeV_pt2187->SetBinError(17,0.02033752);
   new_histo_group_WZ_wh3l_plot_13TeV_pt2187->SetBinError(18,0.01694352);
   new_histo_group_WZ_wh3l_plot_13TeV_pt2187->SetBinError(19,0.0150487);
   new_histo_group_WZ_wh3l_plot_13TeV_pt2187->SetBinError(20,0.01491174);
   new_histo_group_WZ_wh3l_plot_13TeV_pt2187->SetBinError(21,0.01185869);
   new_histo_group_WZ_wh3l_plot_13TeV_pt2187->SetBinError(22,0.01730112);
   new_histo_group_WZ_wh3l_plot_13TeV_pt2187->SetBinError(23,0.0117978);
   new_histo_group_WZ_wh3l_plot_13TeV_pt2187->SetBinError(24,0.0148159);
   new_histo_group_WZ_wh3l_plot_13TeV_pt2187->SetBinError(25,0.009481543);
   new_histo_group_WZ_wh3l_plot_13TeV_pt2187->SetBinError(26,0.03331265);
   new_histo_group_WZ_wh3l_plot_13TeV_pt2187->SetEntries(1945);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_plot_13TeV_pt2187->SetFillColor(ci);
   new_histo_group_WZ_wh3l_plot_13TeV_pt2187->SetFillStyle(3001);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_plot_13TeV_pt2187->SetLineColor(ci);
   new_histo_group_WZ_wh3l_plot_13TeV_pt2187->GetXaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_plot_13TeV_pt2187->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_plot_13TeV_pt2187->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_plot_13TeV_pt2187->GetXaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_plot_13TeV_pt2187->GetYaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_plot_13TeV_pt2187->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_plot_13TeV_pt2187->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_plot_13TeV_pt2187->GetYaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_plot_13TeV_pt2187->GetZaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_plot_13TeV_pt2187->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_plot_13TeV_pt2187->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_plot_13TeV_pt2187->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_plot_13TeV_pt2->Add(new_histo_group_WZ_wh3l_plot_13TeV_pt2,"");
   
   TH1D *new_histo_group_Higgs_wh3l_plot_13TeV_pt2188 = new TH1D("new_histo_group_Higgs_wh3l_plot_13TeV_pt2188","histo_H_htt",25,10,200);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt2188->SetBinContent(1,0.02753581);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt2188->SetBinContent(2,0.1256051);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt2188->SetBinContent(3,0.1805374);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt2188->SetBinContent(4,0.131574);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt2188->SetBinContent(5,0.09436764);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt2188->SetBinContent(6,0.08138406);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt2188->SetBinContent(7,0.04434173);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt2188->SetBinContent(8,0.02950858);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt2188->SetBinContent(9,0.03447942);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt2188->SetBinContent(10,0.02939063);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt2188->SetBinContent(11,0.0103753);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt2188->SetBinContent(12,0.01685224);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt2188->SetBinContent(13,0.01324451);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt2188->SetBinContent(14,0.003239132);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt2188->SetBinContent(15,0.0006046926);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt2188->SetBinContent(16,0.003623047);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt2188->SetBinContent(17,0.002824565);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt2188->SetBinContent(18,0.001702037);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt2188->SetBinContent(19,0.002183632);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt2188->SetBinContent(20,0.002426825);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt2188->SetBinContent(21,0.001317216);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt2188->SetBinContent(22,0.0003548994);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt2188->SetBinContent(24,0.001657096);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt2188->SetBinContent(25,0.0001007689);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt2188->SetBinContent(26,0.002229467);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt2188->SetBinError(1,0.006345344);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt2188->SetBinError(2,0.01198928);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt2188->SetBinError(3,0.01436594);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt2188->SetBinError(4,0.01228562);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt2188->SetBinError(5,0.0102272);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt2188->SetBinError(6,0.01015655);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt2188->SetBinError(7,0.006945142);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt2188->SetBinError(8,0.005971286);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt2188->SetBinError(9,0.006352183);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt2188->SetBinError(10,0.006543951);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt2188->SetBinError(11,0.003334094);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt2188->SetBinError(12,0.004472249);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt2188->SetBinError(13,0.00421175);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt2188->SetBinError(14,0.002292934);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt2188->SetBinError(15,0.0003994273);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt2188->SetBinError(16,0.001851187);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt2188->SetBinError(17,0.001905768);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt2188->SetBinError(18,0.001205348);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt2188->SetBinError(19,0.001731257);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt2188->SetBinError(20,0.001405442);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt2188->SetBinError(21,0.0009361016);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt2188->SetBinError(22,0.0003548994);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt2188->SetBinError(24,0.001093834);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt2188->SetBinError(25,0.0001007689);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt2188->SetBinError(26,0.00175792);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt2188->SetEntries(1365);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt2188->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_plot_13TeV_pt2188->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt2188->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt2188->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt2188->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt2188->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt2188->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt2188->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt2188->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt2188->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt2188->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt2188->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt2188->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt2188->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt2188->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_plot_13TeV_pt2->Add(new_histo_group_Higgs_wh3l_plot_13TeV_pt2,"");
   thsBackground_grouped_wh3l_plot_13TeV_pt2->Draw("hist same");
   
   thsSignal_grouped_wh3l_plot_13TeV_pt2 = new THStack();
   thsSignal_grouped_wh3l_plot_13TeV_pt2->SetName("thsSignal_grouped_wh3l_plot_13TeV_pt2");
   thsSignal_grouped_wh3l_plot_13TeV_pt2->SetTitle("thsSignal_grouped_wh3l_plot_13TeV_pt2");
   
   TH1F *thsSignal_grouped_wh3l_plot_13TeV_pt2_stack_38 = new TH1F("thsSignal_grouped_wh3l_plot_13TeV_pt2_stack_38","thsSignal_grouped_wh3l_plot_13TeV_pt2",25,10,200);
   thsSignal_grouped_wh3l_plot_13TeV_pt2_stack_38->SetMinimum(0);
   thsSignal_grouped_wh3l_plot_13TeV_pt2_stack_38->SetMaximum(0.2046485);
   thsSignal_grouped_wh3l_plot_13TeV_pt2_stack_38->SetDirectory(0);
   thsSignal_grouped_wh3l_plot_13TeV_pt2_stack_38->SetStats(0);
   thsSignal_grouped_wh3l_plot_13TeV_pt2_stack_38->SetLineStyle(0);
   thsSignal_grouped_wh3l_plot_13TeV_pt2_stack_38->SetMarkerStyle(20);
   thsSignal_grouped_wh3l_plot_13TeV_pt2_stack_38->GetXaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_plot_13TeV_pt2_stack_38->GetXaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_plot_13TeV_pt2_stack_38->GetXaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_plot_13TeV_pt2_stack_38->GetXaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_plot_13TeV_pt2_stack_38->GetXaxis()->SetTitleOffset(0.9);
   thsSignal_grouped_wh3l_plot_13TeV_pt2_stack_38->GetXaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_plot_13TeV_pt2_stack_38->GetYaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_plot_13TeV_pt2_stack_38->GetYaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_plot_13TeV_pt2_stack_38->GetYaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_plot_13TeV_pt2_stack_38->GetYaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_plot_13TeV_pt2_stack_38->GetYaxis()->SetTitleOffset(1.25);
   thsSignal_grouped_wh3l_plot_13TeV_pt2_stack_38->GetYaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_plot_13TeV_pt2_stack_38->GetZaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_plot_13TeV_pt2_stack_38->GetZaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_plot_13TeV_pt2_stack_38->GetZaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_plot_13TeV_pt2_stack_38->GetZaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_plot_13TeV_pt2_stack_38->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_plot_13TeV_pt2->SetHistogram(thsSignal_grouped_wh3l_plot_13TeV_pt2_stack_38);
   
   
   TH1D *new_histo_group_Higgs_wh3l_plot_13TeV_pt2189 = new TH1D("new_histo_group_Higgs_wh3l_plot_13TeV_pt2189","histo_H_htt",25,10,200);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt2189->SetBinContent(1,0.02753581);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt2189->SetBinContent(2,0.1256051);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt2189->SetBinContent(3,0.1805374);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt2189->SetBinContent(4,0.131574);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt2189->SetBinContent(5,0.09436764);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt2189->SetBinContent(6,0.08138406);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt2189->SetBinContent(7,0.04434173);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt2189->SetBinContent(8,0.02950858);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt2189->SetBinContent(9,0.03447942);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt2189->SetBinContent(10,0.02939063);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt2189->SetBinContent(11,0.0103753);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt2189->SetBinContent(12,0.01685224);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt2189->SetBinContent(13,0.01324451);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt2189->SetBinContent(14,0.003239132);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt2189->SetBinContent(15,0.0006046926);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt2189->SetBinContent(16,0.003623047);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt2189->SetBinContent(17,0.002824565);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt2189->SetBinContent(18,0.001702037);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt2189->SetBinContent(19,0.002183632);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt2189->SetBinContent(20,0.002426825);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt2189->SetBinContent(21,0.001317216);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt2189->SetBinContent(22,0.0003548994);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt2189->SetBinContent(24,0.001657096);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt2189->SetBinContent(25,0.0001007689);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt2189->SetBinContent(26,0.002229467);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt2189->SetBinError(1,0.006345344);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt2189->SetBinError(2,0.01198928);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt2189->SetBinError(3,0.01436594);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt2189->SetBinError(4,0.01228562);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt2189->SetBinError(5,0.0102272);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt2189->SetBinError(6,0.01015655);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt2189->SetBinError(7,0.006945142);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt2189->SetBinError(8,0.005971286);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt2189->SetBinError(9,0.006352183);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt2189->SetBinError(10,0.006543951);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt2189->SetBinError(11,0.003334094);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt2189->SetBinError(12,0.004472249);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt2189->SetBinError(13,0.00421175);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt2189->SetBinError(14,0.002292934);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt2189->SetBinError(15,0.0003994273);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt2189->SetBinError(16,0.001851187);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt2189->SetBinError(17,0.001905768);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt2189->SetBinError(18,0.001205348);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt2189->SetBinError(19,0.001731257);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt2189->SetBinError(20,0.001405442);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt2189->SetBinError(21,0.0009361016);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt2189->SetBinError(22,0.0003548994);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt2189->SetBinError(24,0.001093834);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt2189->SetBinError(25,0.0001007689);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt2189->SetBinError(26,0.00175792);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt2189->SetEntries(1365);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt2189->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_plot_13TeV_pt2189->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt2189->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt2189->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt2189->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt2189->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt2189->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt2189->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt2189->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt2189->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt2189->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt2189->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt2189->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt2189->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_plot_13TeV_pt2189->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_plot_13TeV_pt2->Add(new_histo_group_Higgs_wh3l_plot_13TeV_pt2,"");
   thsSignal_grouped_wh3l_plot_13TeV_pt2->Draw("hist same noclear");
   
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
   0.7524818,
   4.951455,
   7.04842,
   2.644807,
   1.593007,
   1.996642,
   0.7927639,
   1.169881,
   0.2448466,
   0.3158159,
   0.5393325,
   0.6044989,
   0.07905871,
   0.1032426,
   0.1025485,
   0.06750913,
   0.05829219,
   0.05567986,
   0.0452906,
   0.03927064,
   0.02601218,
   0.05642533,
   0.01996171,
   0.04108705,
   0.0164082};
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
   0.2709717,
   1.533001,
   2.755767,
   1.438374,
   0.7496075,
   1.121618,
   0.2358463,
   0.6173126,
   0.03904394,
   0.07895551,
   0.4072653,
   0.4624901,
   0.02030887,
   0.02329716,
   0.04248477,
   0.01969978,
   0.03551558,
   0.0178768,
   0.01518599,
   0.01500667,
   0.01186609,
   0.01745436,
   0.01658288,
   0.01493181,
   0.009520741};
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
   0.7899624,
   1.532259,
   2.755657,
   1.43836,
   0.8024078,
   1.121601,
   0.2445381,
   0.617304,
   0.03905186,
   0.07894927,
   0.4072555,
   0.4624825,
   0.02023675,
   0.02324229,
   0.04247512,
   0.01967308,
   0.03551805,
   0.01784689,
   0.01517954,
   0.01497996,
   0.01186557,
   0.01744689,
   0.01653424,
   0.01491591,
   0.009520212};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(25,_fx3037,_fy3037,_felx3037,_fehx3037,_fely3037,_fehy3037);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(12);
   grae->SetFillStyle(3004);
   grae->SetLineColor(12);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3037 = new TH1F("Graph_Graph3037","",100,0,219);
   Graph_Graph3037->SetMinimum(0);
   Graph_Graph3037->SetMaximum(10.78415);
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
   TLegendEntry *entry=leg->AddEntry("new_histo_group_Fake_wh3l_plot_13TeV_pt2","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_plot_13TeV_pt2","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_plot_13TeV_pt2","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_plot_13TeV_pt2","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_plot_13TeV_pt2","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_plot_13TeV_pt2","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_plot_13TeV_pt2","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_plot_13TeV_pt2","Data","EPL");
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
   entry=leg->AddEntry("new_histo_group_Fake_wh3l_plot_13TeV_pt2","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_plot_13TeV_pt2","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_plot_13TeV_pt2","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_plot_13TeV_pt2","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_plot_13TeV_pt2","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_plot_13TeV_pt2","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_plot_13TeV_pt2","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_plot_13TeV_pt2","Data","EPL");
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
   hframe_copy190->SetMaximum(18.07239);
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
   ccwh3l_plot_13TeV_pt2->Modified();
   ccwh3l_plot_13TeV_pt2->cd();
   ccwh3l_plot_13TeV_pt2->SetSelected(ccwh3l_plot_13TeV_pt2);
}
