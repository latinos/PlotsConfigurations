void c_wh3l_zg_13TeV_flagOSSF()
{
//=========Macro generated from canvas: ccwh3l_zg_13TeV_flagOSSF/cc
//=========  (Tue Jun 28 02:22:55 2016) by ROOT version6.02/13
   TCanvas *ccwh3l_zg_13TeV_flagOSSF = new TCanvas("ccwh3l_zg_13TeV_flagOSSF", "cc",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   ccwh3l_zg_13TeV_flagOSSF->SetHighLightColor(2);
   ccwh3l_zg_13TeV_flagOSSF->Range(-0.4,-54.38794,2.1,363.9809);
   ccwh3l_zg_13TeV_flagOSSF->SetFillColor(0);
   ccwh3l_zg_13TeV_flagOSSF->SetBorderMode(0);
   ccwh3l_zg_13TeV_flagOSSF->SetBorderSize(2);
   ccwh3l_zg_13TeV_flagOSSF->SetTickx(1);
   ccwh3l_zg_13TeV_flagOSSF->SetTicky(1);
   ccwh3l_zg_13TeV_flagOSSF->SetLeftMargin(0.16);
   ccwh3l_zg_13TeV_flagOSSF->SetRightMargin(0.04);
   ccwh3l_zg_13TeV_flagOSSF->SetTopMargin(0.05);
   ccwh3l_zg_13TeV_flagOSSF->SetBottomMargin(0.13);
   ccwh3l_zg_13TeV_flagOSSF->SetFrameFillStyle(0);
   ccwh3l_zg_13TeV_flagOSSF->SetFrameBorderMode(0);
   ccwh3l_zg_13TeV_flagOSSF->SetFrameFillStyle(0);
   ccwh3l_zg_13TeV_flagOSSF->SetFrameBorderMode(0);
   
   TH1F *hframe181 = new TH1F("hframe181","",1000,0,2);
   hframe181->SetMinimum(0);
   hframe181->SetMaximum(343.0624);
   hframe181->SetDirectory(0);
   hframe181->SetStats(0);
   hframe181->SetLineStyle(0);
   hframe181->SetMarkerStyle(20);
   hframe181->GetXaxis()->SetTitle("flag OSSF");
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
   
   THStack *thsBackground_grouped_wh3l_zg_13TeV_flagOSSF = new THStack();
   thsBackground_grouped_wh3l_zg_13TeV_flagOSSF->SetName("thsBackground_grouped_wh3l_zg_13TeV_flagOSSF");
   thsBackground_grouped_wh3l_zg_13TeV_flagOSSF->SetTitle("thsBackground_grouped_wh3l_zg_13TeV_flagOSSF");
   
   TH1F *thsBackground_grouped_wh3l_zg_13TeV_flagOSSF_stack_37 = new TH1F("thsBackground_grouped_wh3l_zg_13TeV_flagOSSF_stack_37","thsBackground_grouped_wh3l_zg_13TeV_flagOSSF",2,0,2);
   thsBackground_grouped_wh3l_zg_13TeV_flagOSSF_stack_37->SetMinimum(-0.3196247);
   thsBackground_grouped_wh3l_zg_13TeV_flagOSSF_stack_37->SetMaximum(132.1675);
   thsBackground_grouped_wh3l_zg_13TeV_flagOSSF_stack_37->SetDirectory(0);
   thsBackground_grouped_wh3l_zg_13TeV_flagOSSF_stack_37->SetStats(0);
   thsBackground_grouped_wh3l_zg_13TeV_flagOSSF_stack_37->SetLineStyle(0);
   thsBackground_grouped_wh3l_zg_13TeV_flagOSSF_stack_37->SetMarkerStyle(20);
   thsBackground_grouped_wh3l_zg_13TeV_flagOSSF_stack_37->GetXaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_flagOSSF_stack_37->GetXaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_zg_13TeV_flagOSSF_stack_37->GetXaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_zg_13TeV_flagOSSF_stack_37->GetXaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_zg_13TeV_flagOSSF_stack_37->GetXaxis()->SetTitleOffset(0.9);
   thsBackground_grouped_wh3l_zg_13TeV_flagOSSF_stack_37->GetXaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_flagOSSF_stack_37->GetYaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_flagOSSF_stack_37->GetYaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_zg_13TeV_flagOSSF_stack_37->GetYaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_zg_13TeV_flagOSSF_stack_37->GetYaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_zg_13TeV_flagOSSF_stack_37->GetYaxis()->SetTitleOffset(1.25);
   thsBackground_grouped_wh3l_zg_13TeV_flagOSSF_stack_37->GetYaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_flagOSSF_stack_37->GetZaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_flagOSSF_stack_37->GetZaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_zg_13TeV_flagOSSF_stack_37->GetZaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_zg_13TeV_flagOSSF_stack_37->GetZaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_zg_13TeV_flagOSSF_stack_37->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_flagOSSF->SetHistogram(thsBackground_grouped_wh3l_zg_13TeV_flagOSSF_stack_37);
   
   
   TH1D *new_histo_group_Fake_wh3l_zg_13TeV_flagOSSF182 = new TH1D("new_histo_group_Fake_wh3l_zg_13TeV_flagOSSF182","histo_Fake",2,0,2);
   new_histo_group_Fake_wh3l_zg_13TeV_flagOSSF182->SetBinContent(1,-0.1790202);
   new_histo_group_Fake_wh3l_zg_13TeV_flagOSSF182->SetBinContent(2,24.30597);
   new_histo_group_Fake_wh3l_zg_13TeV_flagOSSF182->SetBinError(1,0.1406046);
   new_histo_group_Fake_wh3l_zg_13TeV_flagOSSF182->SetBinError(2,4.309458);
   new_histo_group_Fake_wh3l_zg_13TeV_flagOSSF182->SetEntries(442);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_zg_13TeV_flagOSSF182->SetFillColor(ci);
   new_histo_group_Fake_wh3l_zg_13TeV_flagOSSF182->SetFillStyle(3001);

   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_zg_13TeV_flagOSSF182->SetLineColor(ci);
   new_histo_group_Fake_wh3l_zg_13TeV_flagOSSF182->GetXaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_zg_13TeV_flagOSSF182->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_zg_13TeV_flagOSSF182->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_zg_13TeV_flagOSSF182->GetXaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_zg_13TeV_flagOSSF182->GetYaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_zg_13TeV_flagOSSF182->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_zg_13TeV_flagOSSF182->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_zg_13TeV_flagOSSF182->GetYaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_zg_13TeV_flagOSSF182->GetZaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_zg_13TeV_flagOSSF182->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_zg_13TeV_flagOSSF182->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_zg_13TeV_flagOSSF182->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_flagOSSF->Add(new_histo_group_Fake_wh3l_zg_13TeV_flagOSSF,"");
   
   TH1D *new_histo_group_WW_wh3l_zg_13TeV_flagOSSF183 = new TH1D("new_histo_group_WW_wh3l_zg_13TeV_flagOSSF183","histo_WW",2,0,2);
   new_histo_group_WW_wh3l_zg_13TeV_flagOSSF183->SetBinContent(2,0.009961222);
   new_histo_group_WW_wh3l_zg_13TeV_flagOSSF183->SetBinError(2,0.009961222);
   new_histo_group_WW_wh3l_zg_13TeV_flagOSSF183->SetEntries(1);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_zg_13TeV_flagOSSF183->SetFillColor(ci);
   new_histo_group_WW_wh3l_zg_13TeV_flagOSSF183->SetFillStyle(3001);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_zg_13TeV_flagOSSF183->SetLineColor(ci);
   new_histo_group_WW_wh3l_zg_13TeV_flagOSSF183->GetXaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_zg_13TeV_flagOSSF183->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_zg_13TeV_flagOSSF183->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_zg_13TeV_flagOSSF183->GetXaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_zg_13TeV_flagOSSF183->GetYaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_zg_13TeV_flagOSSF183->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_zg_13TeV_flagOSSF183->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_zg_13TeV_flagOSSF183->GetYaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_zg_13TeV_flagOSSF183->GetZaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_zg_13TeV_flagOSSF183->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_zg_13TeV_flagOSSF183->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_zg_13TeV_flagOSSF183->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_flagOSSF->Add(new_histo_group_WW_wh3l_zg_13TeV_flagOSSF,"");
   
   TH1D *new_histo_group_VVV_wh3l_zg_13TeV_flagOSSF184 = new TH1D("new_histo_group_VVV_wh3l_zg_13TeV_flagOSSF184","histo_VVV",2,0,2);
   new_histo_group_VVV_wh3l_zg_13TeV_flagOSSF184->SetBinContent(2,-0.0006863608);
   new_histo_group_VVV_wh3l_zg_13TeV_flagOSSF184->SetBinError(2,0.0006863608);
   new_histo_group_VVV_wh3l_zg_13TeV_flagOSSF184->SetEntries(1);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_zg_13TeV_flagOSSF184->SetFillColor(ci);
   new_histo_group_VVV_wh3l_zg_13TeV_flagOSSF184->SetFillStyle(3001);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_zg_13TeV_flagOSSF184->SetLineColor(ci);
   new_histo_group_VVV_wh3l_zg_13TeV_flagOSSF184->GetXaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_zg_13TeV_flagOSSF184->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_zg_13TeV_flagOSSF184->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_zg_13TeV_flagOSSF184->GetXaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_zg_13TeV_flagOSSF184->GetYaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_zg_13TeV_flagOSSF184->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_zg_13TeV_flagOSSF184->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_zg_13TeV_flagOSSF184->GetYaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_zg_13TeV_flagOSSF184->GetZaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_zg_13TeV_flagOSSF184->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_zg_13TeV_flagOSSF184->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_zg_13TeV_flagOSSF184->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_flagOSSF->Add(new_histo_group_VVV_wh3l_zg_13TeV_flagOSSF,"");
   
   TH1D *new_histo_group_Vg_wh3l_zg_13TeV_flagOSSF185 = new TH1D("new_histo_group_Vg_wh3l_zg_13TeV_flagOSSF185","histo_Vg",2,0,2);
   new_histo_group_Vg_wh3l_zg_13TeV_flagOSSF185->SetBinContent(1,0.07413695);
   new_histo_group_Vg_wh3l_zg_13TeV_flagOSSF185->SetBinContent(2,100.1194);
   new_histo_group_Vg_wh3l_zg_13TeV_flagOSSF185->SetBinError(1,0.07413695);
   new_histo_group_Vg_wh3l_zg_13TeV_flagOSSF185->SetBinError(2,3.797456);
   new_histo_group_Vg_wh3l_zg_13TeV_flagOSSF185->SetEntries(1327);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_zg_13TeV_flagOSSF185->SetFillColor(ci);
   new_histo_group_Vg_wh3l_zg_13TeV_flagOSSF185->SetFillStyle(3001);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_zg_13TeV_flagOSSF185->SetLineColor(ci);
   new_histo_group_Vg_wh3l_zg_13TeV_flagOSSF185->GetXaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_zg_13TeV_flagOSSF185->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_zg_13TeV_flagOSSF185->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_zg_13TeV_flagOSSF185->GetXaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_zg_13TeV_flagOSSF185->GetYaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_zg_13TeV_flagOSSF185->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_zg_13TeV_flagOSSF185->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_zg_13TeV_flagOSSF185->GetYaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_zg_13TeV_flagOSSF185->GetZaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_zg_13TeV_flagOSSF185->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_zg_13TeV_flagOSSF185->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_zg_13TeV_flagOSSF185->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_flagOSSF->Add(new_histo_group_Vg_wh3l_zg_13TeV_flagOSSF,"");
   
   TH1D *new_histo_group_ZZ_wh3l_zg_13TeV_flagOSSF186 = new TH1D("new_histo_group_ZZ_wh3l_zg_13TeV_flagOSSF186","histo_ZZ",2,0,2);
   new_histo_group_ZZ_wh3l_zg_13TeV_flagOSSF186->SetBinContent(1,0.03984332);
   new_histo_group_ZZ_wh3l_zg_13TeV_flagOSSF186->SetBinContent(2,0.6964979);
   new_histo_group_ZZ_wh3l_zg_13TeV_flagOSSF186->SetBinError(1,0.03984332);
   new_histo_group_ZZ_wh3l_zg_13TeV_flagOSSF186->SetBinError(2,0.1668938);
   new_histo_group_ZZ_wh3l_zg_13TeV_flagOSSF186->SetEntries(20);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_zg_13TeV_flagOSSF186->SetFillColor(ci);
   new_histo_group_ZZ_wh3l_zg_13TeV_flagOSSF186->SetFillStyle(3001);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_zg_13TeV_flagOSSF186->SetLineColor(ci);
   new_histo_group_ZZ_wh3l_zg_13TeV_flagOSSF186->GetXaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_zg_13TeV_flagOSSF186->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_zg_13TeV_flagOSSF186->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_zg_13TeV_flagOSSF186->GetXaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_zg_13TeV_flagOSSF186->GetYaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_zg_13TeV_flagOSSF186->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_zg_13TeV_flagOSSF186->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_zg_13TeV_flagOSSF186->GetYaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_zg_13TeV_flagOSSF186->GetZaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_zg_13TeV_flagOSSF186->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_zg_13TeV_flagOSSF186->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_zg_13TeV_flagOSSF186->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_flagOSSF->Add(new_histo_group_ZZ_wh3l_zg_13TeV_flagOSSF,"");
   
   TH1D *new_histo_group_WZ_wh3l_zg_13TeV_flagOSSF187 = new TH1D("new_histo_group_WZ_wh3l_zg_13TeV_flagOSSF187","histo_ZZ",2,0,2);
   new_histo_group_WZ_wh3l_zg_13TeV_flagOSSF187->SetBinContent(1,0.03984332);
   new_histo_group_WZ_wh3l_zg_13TeV_flagOSSF187->SetBinContent(2,0.6964979);
   new_histo_group_WZ_wh3l_zg_13TeV_flagOSSF187->SetBinError(1,0.03984332);
   new_histo_group_WZ_wh3l_zg_13TeV_flagOSSF187->SetBinError(2,0.1668938);
   new_histo_group_WZ_wh3l_zg_13TeV_flagOSSF187->SetEntries(20);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_zg_13TeV_flagOSSF187->SetFillColor(ci);
   new_histo_group_WZ_wh3l_zg_13TeV_flagOSSF187->SetFillStyle(3001);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_zg_13TeV_flagOSSF187->SetLineColor(ci);
   new_histo_group_WZ_wh3l_zg_13TeV_flagOSSF187->GetXaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_zg_13TeV_flagOSSF187->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_zg_13TeV_flagOSSF187->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_zg_13TeV_flagOSSF187->GetXaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_zg_13TeV_flagOSSF187->GetYaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_zg_13TeV_flagOSSF187->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_zg_13TeV_flagOSSF187->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_zg_13TeV_flagOSSF187->GetYaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_zg_13TeV_flagOSSF187->GetZaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_zg_13TeV_flagOSSF187->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_zg_13TeV_flagOSSF187->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_zg_13TeV_flagOSSF187->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_flagOSSF->Add(new_histo_group_WZ_wh3l_zg_13TeV_flagOSSF,"");
   
   TH1D *new_histo_group_Higgs_wh3l_zg_13TeV_flagOSSF188 = new TH1D("new_histo_group_Higgs_wh3l_zg_13TeV_flagOSSF188","histo_H_htt",2,0,2);
   new_histo_group_Higgs_wh3l_zg_13TeV_flagOSSF188->SetBinContent(1,0.01463839);
   new_histo_group_Higgs_wh3l_zg_13TeV_flagOSSF188->SetBinContent(2,0.04616565);
   new_histo_group_Higgs_wh3l_zg_13TeV_flagOSSF188->SetBinError(1,0.003586166);
   new_histo_group_Higgs_wh3l_zg_13TeV_flagOSSF188->SetBinError(2,0.007285976);
   new_histo_group_Higgs_wh3l_zg_13TeV_flagOSSF188->SetEntries(136);
   new_histo_group_Higgs_wh3l_zg_13TeV_flagOSSF188->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_zg_13TeV_flagOSSF188->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_zg_13TeV_flagOSSF188->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_zg_13TeV_flagOSSF188->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_zg_13TeV_flagOSSF188->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_zg_13TeV_flagOSSF188->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_zg_13TeV_flagOSSF188->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_zg_13TeV_flagOSSF188->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_zg_13TeV_flagOSSF188->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_zg_13TeV_flagOSSF188->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_zg_13TeV_flagOSSF188->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_zg_13TeV_flagOSSF188->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_zg_13TeV_flagOSSF188->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_zg_13TeV_flagOSSF188->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_zg_13TeV_flagOSSF188->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_flagOSSF->Add(new_histo_group_Higgs_wh3l_zg_13TeV_flagOSSF,"");
   thsBackground_grouped_wh3l_zg_13TeV_flagOSSF->Draw("hist same");
   
   thsSignal_grouped_wh3l_zg_13TeV_flagOSSF = new THStack();
   thsSignal_grouped_wh3l_zg_13TeV_flagOSSF->SetName("thsSignal_grouped_wh3l_zg_13TeV_flagOSSF");
   thsSignal_grouped_wh3l_zg_13TeV_flagOSSF->SetTitle("thsSignal_grouped_wh3l_zg_13TeV_flagOSSF");
   
   TH1F *thsSignal_grouped_wh3l_zg_13TeV_flagOSSF_stack_38 = new TH1F("thsSignal_grouped_wh3l_zg_13TeV_flagOSSF_stack_38","thsSignal_grouped_wh3l_zg_13TeV_flagOSSF",2,0,2);
   thsSignal_grouped_wh3l_zg_13TeV_flagOSSF_stack_38->SetMinimum(0);
   thsSignal_grouped_wh3l_zg_13TeV_flagOSSF_stack_38->SetMaximum(0.0561242);
   thsSignal_grouped_wh3l_zg_13TeV_flagOSSF_stack_38->SetDirectory(0);
   thsSignal_grouped_wh3l_zg_13TeV_flagOSSF_stack_38->SetStats(0);
   thsSignal_grouped_wh3l_zg_13TeV_flagOSSF_stack_38->SetLineStyle(0);
   thsSignal_grouped_wh3l_zg_13TeV_flagOSSF_stack_38->SetMarkerStyle(20);
   thsSignal_grouped_wh3l_zg_13TeV_flagOSSF_stack_38->GetXaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_zg_13TeV_flagOSSF_stack_38->GetXaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_zg_13TeV_flagOSSF_stack_38->GetXaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_zg_13TeV_flagOSSF_stack_38->GetXaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_zg_13TeV_flagOSSF_stack_38->GetXaxis()->SetTitleOffset(0.9);
   thsSignal_grouped_wh3l_zg_13TeV_flagOSSF_stack_38->GetXaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_zg_13TeV_flagOSSF_stack_38->GetYaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_zg_13TeV_flagOSSF_stack_38->GetYaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_zg_13TeV_flagOSSF_stack_38->GetYaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_zg_13TeV_flagOSSF_stack_38->GetYaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_zg_13TeV_flagOSSF_stack_38->GetYaxis()->SetTitleOffset(1.25);
   thsSignal_grouped_wh3l_zg_13TeV_flagOSSF_stack_38->GetYaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_zg_13TeV_flagOSSF_stack_38->GetZaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_zg_13TeV_flagOSSF_stack_38->GetZaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_zg_13TeV_flagOSSF_stack_38->GetZaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_zg_13TeV_flagOSSF_stack_38->GetZaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_zg_13TeV_flagOSSF_stack_38->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_zg_13TeV_flagOSSF->SetHistogram(thsSignal_grouped_wh3l_zg_13TeV_flagOSSF_stack_38);
   
   
   TH1D *new_histo_group_Higgs_wh3l_zg_13TeV_flagOSSF189 = new TH1D("new_histo_group_Higgs_wh3l_zg_13TeV_flagOSSF189","histo_H_htt",2,0,2);
   new_histo_group_Higgs_wh3l_zg_13TeV_flagOSSF189->SetBinContent(1,0.01463839);
   new_histo_group_Higgs_wh3l_zg_13TeV_flagOSSF189->SetBinContent(2,0.04616565);
   new_histo_group_Higgs_wh3l_zg_13TeV_flagOSSF189->SetBinError(1,0.003586166);
   new_histo_group_Higgs_wh3l_zg_13TeV_flagOSSF189->SetBinError(2,0.007285976);
   new_histo_group_Higgs_wh3l_zg_13TeV_flagOSSF189->SetEntries(136);
   new_histo_group_Higgs_wh3l_zg_13TeV_flagOSSF189->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_zg_13TeV_flagOSSF189->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_zg_13TeV_flagOSSF189->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_zg_13TeV_flagOSSF189->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_zg_13TeV_flagOSSF189->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_zg_13TeV_flagOSSF189->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_zg_13TeV_flagOSSF189->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_zg_13TeV_flagOSSF189->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_zg_13TeV_flagOSSF189->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_zg_13TeV_flagOSSF189->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_zg_13TeV_flagOSSF189->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_zg_13TeV_flagOSSF189->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_zg_13TeV_flagOSSF189->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_zg_13TeV_flagOSSF189->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_zg_13TeV_flagOSSF189->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_zg_13TeV_flagOSSF->Add(new_histo_group_Higgs_wh3l_zg_13TeV_flagOSSF,"");
   thsSignal_grouped_wh3l_zg_13TeV_flagOSSF->Draw("hist same noclear");
   
   Double_t _fx3037[2] = {
   0.5,
   1.5};
   Double_t _fy3037[2] = {
   -0.0203665,
   126.5335};
   Double_t _felx3037[2] = {
   0.5,
   0.5};
   Double_t _fely3037[2] = {
   0.2743715,
   11.43109};
   Double_t _fehx3037[2] = {
   0.5,
   0.5};
   Double_t _fehy3037[2] = {
   0.2743716,
   11.4311};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(2,_fx3037,_fy3037,_felx3037,_fehx3037,_fely3037,_fehy3037);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(12);
   grae->SetFillStyle(3004);
   grae->SetLineColor(12);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3037 = new TH1F("Graph_Graph3037","",100,0,2.2);
   Graph_Graph3037->SetMinimum(-14.12067);
   Graph_Graph3037->SetMaximum(151.7905);
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
   
   Double_t _fx3038[2] = {
   0.5,
   1.5};
   Double_t _fy3038[2] = {
   2,
   126};
   Double_t _felx3038[2] = {
   0.5,
   0.5};
   Double_t _fely3038[2] = {
   1.29183,
   11.21029};
   Double_t _fehx3038[2] = {
   0.5,
   0.5};
   Double_t _fehy3038[2] = {
   2.63791,
   12.25495};
   grae = new TGraphAsymmErrors(2,_fx3038,_fy3038,_felx3038,_fehx3038,_fely3038,_fehy3038);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(1);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3038 = new TH1F("Graph_Graph3038","",100,0,2.2);
   Graph_Graph3038->SetMinimum(0);
   Graph_Graph3038->SetMaximum(152.0096);
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
   
   TLegend *leg = new TLegend(0.2,0.55,0.8,0.88,NULL,"brNDC");
   leg->SetTextFont(62);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("new_histo_group_Fake_wh3l_zg_13TeV_flagOSSF","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_zg_13TeV_flagOSSF","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_zg_13TeV_flagOSSF","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_zg_13TeV_flagOSSF","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_zg_13TeV_flagOSSF","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_zg_13TeV_flagOSSF","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_zg_13TeV_flagOSSF","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_zg_13TeV_flagOSSF","Data","EPL");
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
   entry=leg->AddEntry("new_histo_group_Fake_wh3l_zg_13TeV_flagOSSF","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_zg_13TeV_flagOSSF","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_zg_13TeV_flagOSSF","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_zg_13TeV_flagOSSF","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_zg_13TeV_flagOSSF","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_zg_13TeV_flagOSSF","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_zg_13TeV_flagOSSF","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_zg_13TeV_flagOSSF","Data","EPL");
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
   
   TH1F *hframe_copy190 = new TH1F("hframe_copy190","",1000,0,2);
   hframe_copy190->SetMinimum(0);
   hframe_copy190->SetMaximum(343.0624);
   hframe_copy190->SetDirectory(0);
   hframe_copy190->SetStats(0);
   hframe_copy190->SetLineStyle(0);
   hframe_copy190->SetMarkerStyle(20);
   hframe_copy190->GetXaxis()->SetTitle("flag OSSF");
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
   ccwh3l_zg_13TeV_flagOSSF->Modified();
   ccwh3l_zg_13TeV_flagOSSF->cd();
   ccwh3l_zg_13TeV_flagOSSF->SetSelected(ccwh3l_zg_13TeV_flagOSSF);
}
