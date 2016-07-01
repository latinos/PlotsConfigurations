void c_wh3l_13TeV_sssf_pt2()
{
//=========Macro generated from canvas: ccwh3l_13TeV_sssf_pt2/cc
//=========  (Thu Jun 30 22:29:48 2016) by ROOT version6.02/13
   TCanvas *ccwh3l_13TeV_sssf_pt2 = new TCanvas("ccwh3l_13TeV_sssf_pt2", "cc",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   ccwh3l_13TeV_sssf_pt2->SetHighLightColor(2);
   ccwh3l_13TeV_sssf_pt2->Range(-88,-0.410376,524.5,2.746363);
   ccwh3l_13TeV_sssf_pt2->SetFillColor(0);
   ccwh3l_13TeV_sssf_pt2->SetBorderMode(0);
   ccwh3l_13TeV_sssf_pt2->SetBorderSize(2);
   ccwh3l_13TeV_sssf_pt2->SetTickx(1);
   ccwh3l_13TeV_sssf_pt2->SetTicky(1);
   ccwh3l_13TeV_sssf_pt2->SetLeftMargin(0.16);
   ccwh3l_13TeV_sssf_pt2->SetRightMargin(0.04);
   ccwh3l_13TeV_sssf_pt2->SetTopMargin(0.05);
   ccwh3l_13TeV_sssf_pt2->SetBottomMargin(0.13);
   ccwh3l_13TeV_sssf_pt2->SetFrameFillStyle(0);
   ccwh3l_13TeV_sssf_pt2->SetFrameBorderMode(0);
   ccwh3l_13TeV_sssf_pt2->SetFrameFillStyle(0);
   ccwh3l_13TeV_sssf_pt2->SetFrameBorderMode(0);
   
   TH1F *hframe161 = new TH1F("hframe161","",1000,10,500);
   hframe161->SetMinimum(0);
   hframe161->SetMaximum(2.588526);
   hframe161->SetDirectory(0);
   hframe161->SetStats(0);
   hframe161->SetLineStyle(0);
   hframe161->SetMarkerStyle(20);
   hframe161->GetXaxis()->SetTitle("lept2_p_{T} [GeV]");
   hframe161->GetXaxis()->SetNdivisions(506);
   hframe161->GetXaxis()->SetLabelFont(42);
   hframe161->GetXaxis()->SetLabelOffset(0.007);
   hframe161->GetXaxis()->SetLabelSize(0.05);
   hframe161->GetXaxis()->SetTitleSize(0.06);
   hframe161->GetXaxis()->SetTitleOffset(0.9);
   hframe161->GetXaxis()->SetTitleFont(42);
   hframe161->GetYaxis()->SetTitle("Events");
   hframe161->GetYaxis()->SetLabelFont(42);
   hframe161->GetYaxis()->SetLabelOffset(0.007);
   hframe161->GetYaxis()->SetLabelSize(0.05);
   hframe161->GetYaxis()->SetTitleSize(0.06);
   hframe161->GetYaxis()->SetTitleOffset(1.25);
   hframe161->GetYaxis()->SetTitleFont(42);
   hframe161->GetZaxis()->SetLabelFont(42);
   hframe161->GetZaxis()->SetLabelOffset(0.007);
   hframe161->GetZaxis()->SetLabelSize(0.05);
   hframe161->GetZaxis()->SetTitleSize(0.06);
   hframe161->GetZaxis()->SetTitleFont(42);
   hframe161->Draw(" ");
   
   THStack *thsBackground_grouped_wh3l_13TeV_sssf_pt2 = new THStack();
   thsBackground_grouped_wh3l_13TeV_sssf_pt2->SetName("thsBackground_grouped_wh3l_13TeV_sssf_pt2");
   thsBackground_grouped_wh3l_13TeV_sssf_pt2->SetTitle("thsBackground_grouped_wh3l_13TeV_sssf_pt2");
   
   TH1F *thsBackground_grouped_wh3l_13TeV_sssf_pt2_stack_33 = new TH1F("thsBackground_grouped_wh3l_13TeV_sssf_pt2_stack_33","thsBackground_grouped_wh3l_13TeV_sssf_pt2",50,10,500);
   thsBackground_grouped_wh3l_13TeV_sssf_pt2_stack_33->SetMinimum(-0.2374825);
   thsBackground_grouped_wh3l_13TeV_sssf_pt2_stack_33->SetMaximum(1.786594);
   thsBackground_grouped_wh3l_13TeV_sssf_pt2_stack_33->SetDirectory(0);
   thsBackground_grouped_wh3l_13TeV_sssf_pt2_stack_33->SetStats(0);
   thsBackground_grouped_wh3l_13TeV_sssf_pt2_stack_33->SetLineStyle(0);
   thsBackground_grouped_wh3l_13TeV_sssf_pt2_stack_33->SetMarkerStyle(20);
   thsBackground_grouped_wh3l_13TeV_sssf_pt2_stack_33->GetXaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_13TeV_sssf_pt2_stack_33->GetXaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_13TeV_sssf_pt2_stack_33->GetXaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_13TeV_sssf_pt2_stack_33->GetXaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_13TeV_sssf_pt2_stack_33->GetXaxis()->SetTitleOffset(0.9);
   thsBackground_grouped_wh3l_13TeV_sssf_pt2_stack_33->GetXaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_sssf_pt2_stack_33->GetYaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_13TeV_sssf_pt2_stack_33->GetYaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_13TeV_sssf_pt2_stack_33->GetYaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_13TeV_sssf_pt2_stack_33->GetYaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_13TeV_sssf_pt2_stack_33->GetYaxis()->SetTitleOffset(1.25);
   thsBackground_grouped_wh3l_13TeV_sssf_pt2_stack_33->GetYaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_sssf_pt2_stack_33->GetZaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_13TeV_sssf_pt2_stack_33->GetZaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_13TeV_sssf_pt2_stack_33->GetZaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_13TeV_sssf_pt2_stack_33->GetZaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_13TeV_sssf_pt2_stack_33->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_sssf_pt2->SetHistogram(thsBackground_grouped_wh3l_13TeV_sssf_pt2_stack_33);
   
   
   TH1D *new_histo_group_Fake_wh3l_13TeV_sssf_pt2162 = new TH1D("new_histo_group_Fake_wh3l_13TeV_sssf_pt2162","histo_Fake",50,10,500);
   new_histo_group_Fake_wh3l_13TeV_sssf_pt2162->SetBinContent(1,0.07187521);
   new_histo_group_Fake_wh3l_13TeV_sssf_pt2162->SetBinContent(2,0.3582265);
   new_histo_group_Fake_wh3l_13TeV_sssf_pt2162->SetBinContent(3,0.3057784);
   new_histo_group_Fake_wh3l_13TeV_sssf_pt2162->SetBinContent(4,0.8901779);
   new_histo_group_Fake_wh3l_13TeV_sssf_pt2162->SetBinContent(5,0.9120125);
   new_histo_group_Fake_wh3l_13TeV_sssf_pt2162->SetBinContent(6,0.3645553);
   new_histo_group_Fake_wh3l_13TeV_sssf_pt2162->SetBinError(1,0.1121457);
   new_histo_group_Fake_wh3l_13TeV_sssf_pt2162->SetBinError(2,0.504922);
   new_histo_group_Fake_wh3l_13TeV_sssf_pt2162->SetBinError(3,0.5432609);
   new_histo_group_Fake_wh3l_13TeV_sssf_pt2162->SetBinError(4,0.8113406);
   new_histo_group_Fake_wh3l_13TeV_sssf_pt2162->SetBinError(5,0.7002168);
   new_histo_group_Fake_wh3l_13TeV_sssf_pt2162->SetBinError(6,0.3651163);
   new_histo_group_Fake_wh3l_13TeV_sssf_pt2162->SetEntries(33);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_13TeV_sssf_pt2162->SetFillColor(ci);
   new_histo_group_Fake_wh3l_13TeV_sssf_pt2162->SetFillStyle(3001);

   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_13TeV_sssf_pt2162->SetLineColor(ci);
   new_histo_group_Fake_wh3l_13TeV_sssf_pt2162->GetXaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_13TeV_sssf_pt2162->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_13TeV_sssf_pt2162->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_13TeV_sssf_pt2162->GetXaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_13TeV_sssf_pt2162->GetYaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_13TeV_sssf_pt2162->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_13TeV_sssf_pt2162->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_13TeV_sssf_pt2162->GetYaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_13TeV_sssf_pt2162->GetZaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_13TeV_sssf_pt2162->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_13TeV_sssf_pt2162->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_13TeV_sssf_pt2162->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_sssf_pt2->Add(new_histo_group_Fake_wh3l_13TeV_sssf_pt2,"");
   
   TH1D *new_histo_group_WW_wh3l_13TeV_sssf_pt2163 = new TH1D("new_histo_group_WW_wh3l_13TeV_sssf_pt2163","histo_WW",50,10,500);
   new_histo_group_WW_wh3l_13TeV_sssf_pt2163->SetBinContent(2,0.0161241);
   new_histo_group_WW_wh3l_13TeV_sssf_pt2163->SetBinContent(3,0.01039136);
   new_histo_group_WW_wh3l_13TeV_sssf_pt2163->SetBinError(2,0.0161241);
   new_histo_group_WW_wh3l_13TeV_sssf_pt2163->SetBinError(3,0.01039136);
   new_histo_group_WW_wh3l_13TeV_sssf_pt2163->SetEntries(2);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_13TeV_sssf_pt2163->SetFillColor(ci);
   new_histo_group_WW_wh3l_13TeV_sssf_pt2163->SetFillStyle(3001);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_13TeV_sssf_pt2163->SetLineColor(ci);
   new_histo_group_WW_wh3l_13TeV_sssf_pt2163->GetXaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_13TeV_sssf_pt2163->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_13TeV_sssf_pt2163->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_13TeV_sssf_pt2163->GetXaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_13TeV_sssf_pt2163->GetYaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_13TeV_sssf_pt2163->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_13TeV_sssf_pt2163->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_13TeV_sssf_pt2163->GetYaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_13TeV_sssf_pt2163->GetZaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_13TeV_sssf_pt2163->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_13TeV_sssf_pt2163->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_13TeV_sssf_pt2163->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_sssf_pt2->Add(new_histo_group_WW_wh3l_13TeV_sssf_pt2,"");
   
   TH1D *new_histo_group_VVV_wh3l_13TeV_sssf_pt2164 = new TH1D("new_histo_group_VVV_wh3l_13TeV_sssf_pt2164","histo_VVV",50,10,500);
   new_histo_group_VVV_wh3l_13TeV_sssf_pt2164->SetBinContent(2,0.01535668);
   new_histo_group_VVV_wh3l_13TeV_sssf_pt2164->SetBinContent(3,0.03135447);
   new_histo_group_VVV_wh3l_13TeV_sssf_pt2164->SetBinContent(4,0.01408795);
   new_histo_group_VVV_wh3l_13TeV_sssf_pt2164->SetBinContent(5,0.01717375);
   new_histo_group_VVV_wh3l_13TeV_sssf_pt2164->SetBinContent(6,0.0114911);
   new_histo_group_VVV_wh3l_13TeV_sssf_pt2164->SetBinContent(7,0.004074179);
   new_histo_group_VVV_wh3l_13TeV_sssf_pt2164->SetBinContent(8,0.002701058);
   new_histo_group_VVV_wh3l_13TeV_sssf_pt2164->SetBinContent(10,0.002276835);
   new_histo_group_VVV_wh3l_13TeV_sssf_pt2164->SetBinContent(11,0.002687033);
   new_histo_group_VVV_wh3l_13TeV_sssf_pt2164->SetBinContent(13,0.00159006);
   new_histo_group_VVV_wh3l_13TeV_sssf_pt2164->SetBinError(2,0.00775543);
   new_histo_group_VVV_wh3l_13TeV_sssf_pt2164->SetBinError(3,0.008241718);
   new_histo_group_VVV_wh3l_13TeV_sssf_pt2164->SetBinError(4,0.006776416);
   new_histo_group_VVV_wh3l_13TeV_sssf_pt2164->SetBinError(5,0.006204719);
   new_histo_group_VVV_wh3l_13TeV_sssf_pt2164->SetBinError(6,0.005287511);
   new_histo_group_VVV_wh3l_13TeV_sssf_pt2164->SetBinError(7,0.004909308);
   new_histo_group_VVV_wh3l_13TeV_sssf_pt2164->SetBinError(8,0.002701058);
   new_histo_group_VVV_wh3l_13TeV_sssf_pt2164->SetBinError(10,0.002276835);
   new_histo_group_VVV_wh3l_13TeV_sssf_pt2164->SetBinError(11,0.002687033);
   new_histo_group_VVV_wh3l_13TeV_sssf_pt2164->SetBinError(13,0.00159006);
   new_histo_group_VVV_wh3l_13TeV_sssf_pt2164->SetEntries(62);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_13TeV_sssf_pt2164->SetFillColor(ci);
   new_histo_group_VVV_wh3l_13TeV_sssf_pt2164->SetFillStyle(3001);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_13TeV_sssf_pt2164->SetLineColor(ci);
   new_histo_group_VVV_wh3l_13TeV_sssf_pt2164->GetXaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_13TeV_sssf_pt2164->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_13TeV_sssf_pt2164->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_13TeV_sssf_pt2164->GetXaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_13TeV_sssf_pt2164->GetYaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_13TeV_sssf_pt2164->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_13TeV_sssf_pt2164->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_13TeV_sssf_pt2164->GetYaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_13TeV_sssf_pt2164->GetZaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_13TeV_sssf_pt2164->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_13TeV_sssf_pt2164->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_13TeV_sssf_pt2164->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_sssf_pt2->Add(new_histo_group_VVV_wh3l_13TeV_sssf_pt2,"");
   
   TH1D *new_histo_group_Vg_wh3l_13TeV_sssf_pt2165 = new TH1D("new_histo_group_Vg_wh3l_13TeV_sssf_pt2165","histo_Vg",50,10,500);
   new_histo_group_Vg_wh3l_13TeV_sssf_pt2165->SetBinContent(3,0.0522728);
   new_histo_group_Vg_wh3l_13TeV_sssf_pt2165->SetBinError(3,0.0522728);
   new_histo_group_Vg_wh3l_13TeV_sssf_pt2165->SetEntries(1);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_13TeV_sssf_pt2165->SetFillColor(ci);
   new_histo_group_Vg_wh3l_13TeV_sssf_pt2165->SetFillStyle(3001);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_13TeV_sssf_pt2165->SetLineColor(ci);
   new_histo_group_Vg_wh3l_13TeV_sssf_pt2165->GetXaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_13TeV_sssf_pt2165->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_13TeV_sssf_pt2165->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_13TeV_sssf_pt2165->GetXaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_13TeV_sssf_pt2165->GetYaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_13TeV_sssf_pt2165->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_13TeV_sssf_pt2165->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_13TeV_sssf_pt2165->GetYaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_13TeV_sssf_pt2165->GetZaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_13TeV_sssf_pt2165->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_13TeV_sssf_pt2165->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_13TeV_sssf_pt2165->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_sssf_pt2->Add(new_histo_group_Vg_wh3l_13TeV_sssf_pt2,"");
   
   TH1D *new_histo_group_ZZ_wh3l_13TeV_sssf_pt2166 = new TH1D("new_histo_group_ZZ_wh3l_13TeV_sssf_pt2166","histo_ZZ",50,10,500);
   new_histo_group_ZZ_wh3l_13TeV_sssf_pt2166->SetBinContent(2,0.0427135);
   new_histo_group_ZZ_wh3l_13TeV_sssf_pt2166->SetBinContent(5,0.03513683);
   new_histo_group_ZZ_wh3l_13TeV_sssf_pt2166->SetBinError(2,0.0427135);
   new_histo_group_ZZ_wh3l_13TeV_sssf_pt2166->SetBinError(5,0.03513683);
   new_histo_group_ZZ_wh3l_13TeV_sssf_pt2166->SetEntries(2);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_13TeV_sssf_pt2166->SetFillColor(ci);
   new_histo_group_ZZ_wh3l_13TeV_sssf_pt2166->SetFillStyle(3001);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_13TeV_sssf_pt2166->SetLineColor(ci);
   new_histo_group_ZZ_wh3l_13TeV_sssf_pt2166->GetXaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_13TeV_sssf_pt2166->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_13TeV_sssf_pt2166->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_13TeV_sssf_pt2166->GetXaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_13TeV_sssf_pt2166->GetYaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_13TeV_sssf_pt2166->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_13TeV_sssf_pt2166->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_13TeV_sssf_pt2166->GetYaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_13TeV_sssf_pt2166->GetZaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_13TeV_sssf_pt2166->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_13TeV_sssf_pt2166->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_13TeV_sssf_pt2166->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_sssf_pt2->Add(new_histo_group_ZZ_wh3l_13TeV_sssf_pt2,"");
   
   TH1D *new_histo_group_WZ_wh3l_13TeV_sssf_pt2167 = new TH1D("new_histo_group_WZ_wh3l_13TeV_sssf_pt2167","histo_WZ",50,10,500);
   new_histo_group_WZ_wh3l_13TeV_sssf_pt2167->SetBinContent(1,0.08407473);
   new_histo_group_WZ_wh3l_13TeV_sssf_pt2167->SetBinContent(2,0.2020246);
   new_histo_group_WZ_wh3l_13TeV_sssf_pt2167->SetBinContent(3,0.1490963);
   new_histo_group_WZ_wh3l_13TeV_sssf_pt2167->SetBinContent(4,0.06860712);
   new_histo_group_WZ_wh3l_13TeV_sssf_pt2167->SetBinContent(5,0.04416873);
   new_histo_group_WZ_wh3l_13TeV_sssf_pt2167->SetBinContent(6,0.03755576);
   new_histo_group_WZ_wh3l_13TeV_sssf_pt2167->SetBinContent(7,0.006153808);
   new_histo_group_WZ_wh3l_13TeV_sssf_pt2167->SetBinContent(8,0.003593794);
   new_histo_group_WZ_wh3l_13TeV_sssf_pt2167->SetBinContent(9,0.010442);
   new_histo_group_WZ_wh3l_13TeV_sssf_pt2167->SetBinContent(11,0.011118);
   new_histo_group_WZ_wh3l_13TeV_sssf_pt2167->SetBinContent(13,0.005827953);
   new_histo_group_WZ_wh3l_13TeV_sssf_pt2167->SetBinError(1,0.02188038);
   new_histo_group_WZ_wh3l_13TeV_sssf_pt2167->SetBinError(2,0.0327509);
   new_histo_group_WZ_wh3l_13TeV_sssf_pt2167->SetBinError(3,0.02789291);
   new_histo_group_WZ_wh3l_13TeV_sssf_pt2167->SetBinError(4,0.01893861);
   new_histo_group_WZ_wh3l_13TeV_sssf_pt2167->SetBinError(5,0.01541266);
   new_histo_group_WZ_wh3l_13TeV_sssf_pt2167->SetBinError(6,0.0144356);
   new_histo_group_WZ_wh3l_13TeV_sssf_pt2167->SetBinError(7,0.006153808);
   new_histo_group_WZ_wh3l_13TeV_sssf_pt2167->SetBinError(8,0.003593794);
   new_histo_group_WZ_wh3l_13TeV_sssf_pt2167->SetBinError(9,0.007416363);
   new_histo_group_WZ_wh3l_13TeV_sssf_pt2167->SetBinError(11,0.00786224);
   new_histo_group_WZ_wh3l_13TeV_sssf_pt2167->SetBinError(13,0.005827953);
   new_histo_group_WZ_wh3l_13TeV_sssf_pt2167->SetEntries(128);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_13TeV_sssf_pt2167->SetFillColor(ci);
   new_histo_group_WZ_wh3l_13TeV_sssf_pt2167->SetFillStyle(3001);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_13TeV_sssf_pt2167->SetLineColor(ci);
   new_histo_group_WZ_wh3l_13TeV_sssf_pt2167->GetXaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_13TeV_sssf_pt2167->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_13TeV_sssf_pt2167->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_13TeV_sssf_pt2167->GetXaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_13TeV_sssf_pt2167->GetYaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_13TeV_sssf_pt2167->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_13TeV_sssf_pt2167->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_13TeV_sssf_pt2167->GetYaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_13TeV_sssf_pt2167->GetZaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_13TeV_sssf_pt2167->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_13TeV_sssf_pt2167->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_13TeV_sssf_pt2167->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_sssf_pt2->Add(new_histo_group_WZ_wh3l_13TeV_sssf_pt2,"");
   
   TH1D *new_histo_group_Higgs_wh3l_13TeV_sssf_pt2168 = new TH1D("new_histo_group_Higgs_wh3l_13TeV_sssf_pt2168","histo_H_htt",50,10,500);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt2168->SetBinContent(1,0.02057137);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt2168->SetBinContent(2,0.0717106);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt2168->SetBinContent(3,0.0591709);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt2168->SetBinContent(4,0.06253737);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt2168->SetBinContent(5,0.01376231);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt2168->SetBinContent(6,0.0169435);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt2168->SetBinContent(7,0.008620379);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt2168->SetBinContent(8,0.01037925);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt2168->SetBinContent(9,0.00474238);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt2168->SetBinContent(10,0.007386672);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt2168->SetBinContent(12,0.001751721);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt2168->SetBinContent(13,0.001124591);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt2168->SetBinContent(14,0.0002145779);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt2168->SetBinContent(15,0.001323184);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt2168->SetBinContent(16,0.001051304);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt2168->SetBinContent(17,0.0002668713);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt2168->SetBinContent(19,0.001093785);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt2168->SetBinContent(20,0.0001964025);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt2168->SetBinContent(22,0.000704547);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt2168->SetBinError(1,0.004485037);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt2168->SetBinError(2,0.008820452);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt2168->SetBinError(3,0.00812914);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt2168->SetBinError(4,0.008429713);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt2168->SetBinError(5,0.003339611);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt2168->SetBinError(6,0.004204374);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt2168->SetBinError(7,0.003449446);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt2168->SetBinError(8,0.003615621);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt2168->SetBinError(9,0.002358103);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt2168->SetBinError(10,0.00325738);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt2168->SetBinError(12,0.0007147351);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt2168->SetBinError(13,0.001012165);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt2168->SetBinError(14,0.0002145779);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt2168->SetBinError(15,0.001323184);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt2168->SetBinError(16,0.0008974361);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt2168->SetBinError(17,0.0002668713);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt2168->SetBinError(19,0.0005661142);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt2168->SetBinError(20,0.0001964025);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt2168->SetBinError(22,0.0004982178);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt2168->SetEntries(512);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt2168->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt2168->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt2168->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt2168->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt2168->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt2168->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt2168->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt2168->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt2168->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt2168->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt2168->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt2168->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt2168->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt2168->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt2168->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_sssf_pt2->Add(new_histo_group_Higgs_wh3l_13TeV_sssf_pt2,"");
   thsBackground_grouped_wh3l_13TeV_sssf_pt2->Draw("hist same");
   
   thsSignal_grouped_wh3l_13TeV_sssf_pt2 = new THStack();
   thsSignal_grouped_wh3l_13TeV_sssf_pt2->SetName("thsSignal_grouped_wh3l_13TeV_sssf_pt2");
   thsSignal_grouped_wh3l_13TeV_sssf_pt2->SetTitle("thsSignal_grouped_wh3l_13TeV_sssf_pt2");
   
   TH1F *thsSignal_grouped_wh3l_13TeV_sssf_pt2_stack_34 = new TH1F("thsSignal_grouped_wh3l_13TeV_sssf_pt2_stack_34","thsSignal_grouped_wh3l_13TeV_sssf_pt2",50,10,500);
   thsSignal_grouped_wh3l_13TeV_sssf_pt2_stack_34->SetMinimum(0);
   thsSignal_grouped_wh3l_13TeV_sssf_pt2_stack_34->SetMaximum(0.0845576);
   thsSignal_grouped_wh3l_13TeV_sssf_pt2_stack_34->SetDirectory(0);
   thsSignal_grouped_wh3l_13TeV_sssf_pt2_stack_34->SetStats(0);
   thsSignal_grouped_wh3l_13TeV_sssf_pt2_stack_34->SetLineStyle(0);
   thsSignal_grouped_wh3l_13TeV_sssf_pt2_stack_34->SetMarkerStyle(20);
   thsSignal_grouped_wh3l_13TeV_sssf_pt2_stack_34->GetXaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_13TeV_sssf_pt2_stack_34->GetXaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_13TeV_sssf_pt2_stack_34->GetXaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_13TeV_sssf_pt2_stack_34->GetXaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_13TeV_sssf_pt2_stack_34->GetXaxis()->SetTitleOffset(0.9);
   thsSignal_grouped_wh3l_13TeV_sssf_pt2_stack_34->GetXaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_13TeV_sssf_pt2_stack_34->GetYaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_13TeV_sssf_pt2_stack_34->GetYaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_13TeV_sssf_pt2_stack_34->GetYaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_13TeV_sssf_pt2_stack_34->GetYaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_13TeV_sssf_pt2_stack_34->GetYaxis()->SetTitleOffset(1.25);
   thsSignal_grouped_wh3l_13TeV_sssf_pt2_stack_34->GetYaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_13TeV_sssf_pt2_stack_34->GetZaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_13TeV_sssf_pt2_stack_34->GetZaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_13TeV_sssf_pt2_stack_34->GetZaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_13TeV_sssf_pt2_stack_34->GetZaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_13TeV_sssf_pt2_stack_34->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_13TeV_sssf_pt2->SetHistogram(thsSignal_grouped_wh3l_13TeV_sssf_pt2_stack_34);
   
   
   TH1D *new_histo_group_Higgs_wh3l_13TeV_sssf_pt2169 = new TH1D("new_histo_group_Higgs_wh3l_13TeV_sssf_pt2169","histo_H_htt",50,10,500);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt2169->SetBinContent(1,0.02057137);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt2169->SetBinContent(2,0.0717106);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt2169->SetBinContent(3,0.0591709);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt2169->SetBinContent(4,0.06253737);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt2169->SetBinContent(5,0.01376231);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt2169->SetBinContent(6,0.0169435);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt2169->SetBinContent(7,0.008620379);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt2169->SetBinContent(8,0.01037925);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt2169->SetBinContent(9,0.00474238);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt2169->SetBinContent(10,0.007386672);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt2169->SetBinContent(12,0.001751721);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt2169->SetBinContent(13,0.001124591);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt2169->SetBinContent(14,0.0002145779);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt2169->SetBinContent(15,0.001323184);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt2169->SetBinContent(16,0.001051304);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt2169->SetBinContent(17,0.0002668713);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt2169->SetBinContent(19,0.001093785);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt2169->SetBinContent(20,0.0001964025);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt2169->SetBinContent(22,0.000704547);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt2169->SetBinError(1,0.004485037);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt2169->SetBinError(2,0.008820452);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt2169->SetBinError(3,0.00812914);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt2169->SetBinError(4,0.008429713);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt2169->SetBinError(5,0.003339611);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt2169->SetBinError(6,0.004204374);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt2169->SetBinError(7,0.003449446);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt2169->SetBinError(8,0.003615621);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt2169->SetBinError(9,0.002358103);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt2169->SetBinError(10,0.00325738);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt2169->SetBinError(12,0.0007147351);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt2169->SetBinError(13,0.001012165);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt2169->SetBinError(14,0.0002145779);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt2169->SetBinError(15,0.001323184);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt2169->SetBinError(16,0.0008974361);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt2169->SetBinError(17,0.0002668713);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt2169->SetBinError(19,0.0005661142);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt2169->SetBinError(20,0.0001964025);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt2169->SetBinError(22,0.0004982178);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt2169->SetEntries(512);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt2169->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt2169->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt2169->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt2169->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt2169->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt2169->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt2169->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt2169->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt2169->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt2169->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt2169->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt2169->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt2169->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt2169->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt2169->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_13TeV_sssf_pt2->Add(new_histo_group_Higgs_wh3l_13TeV_sssf_pt2,"");
   thsSignal_grouped_wh3l_13TeV_sssf_pt2->Draw("hist same noclear");
   
   Double_t _fx3033[50] = {
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
   Double_t _fy3033[50] = {
   0.1559499,
   0.6344455,
   0.5488934,
   0.972873,
   1.008492,
   0.4136022,
   0.01022799,
   0.006294853,
   0.010442,
   0.002276835,
   0.01380503,
   0,
   0.007418013,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t _felx3033[50] = {
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
   Double_t _fely3033[50] = {
   0.09722074,
   0.474807,
   0.4197398,
   0.8932728,
   0.8217037,
   0.4050718,
   0.01101728,
   0.00685639,
   0.007434477,
   0.003221557,
   0.0109102,
   0,
   0.007592005,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t _fehx3033[50] = {
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
   Double_t _fehy3033[50] = {
   0.1364691,
   0.617417,
   0.6517009,
   0.8932723,
   0.8217036,
   0.4056034,
   0.01179557,
   0.006855127,
   0.007428051,
   0.003221534,
   0.01089226,
   0,
   0.007589343,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(50,_fx3033,_fy3033,_felx3033,_fehx3033,_fely3033,_fehy3033);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(12);
   grae->SetFillStyle(3004);
   grae->SetLineColor(12);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3033 = new TH1F("Graph_Graph3033","",100,0,549);
   Graph_Graph3033->SetMinimum(-0.1876537);
   Graph_Graph3033->SetMaximum(2.052854);
   Graph_Graph3033->SetDirectory(0);
   Graph_Graph3033->SetStats(0);
   Graph_Graph3033->SetLineStyle(0);
   Graph_Graph3033->SetMarkerStyle(20);
   Graph_Graph3033->GetXaxis()->SetLabelFont(42);
   Graph_Graph3033->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3033->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3033->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3033->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3033->GetXaxis()->SetTitleFont(42);
   Graph_Graph3033->GetYaxis()->SetLabelFont(42);
   Graph_Graph3033->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3033->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3033->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3033->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3033->GetYaxis()->SetTitleFont(42);
   Graph_Graph3033->GetZaxis()->SetLabelFont(42);
   Graph_Graph3033->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3033->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3033->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3033->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3033);
   
   grae->Draw("2");
   
   Double_t _fx3034[50] = {
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
   Double_t _fy3034[50] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t _felx3034[50] = {
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
   Double_t _fely3034[50] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t _fehx3034[50] = {
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
   Double_t _fehy3034[50] = {
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
   1.147908,
   1.147908,
   1.147908,
   1.147908,
   1.147908,
   1.147908,
   1.147908,
   1.147908};
   grae = new TGraphAsymmErrors(50,_fx3034,_fy3034,_felx3034,_fehx3034,_fely3034,_fehy3034);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(1);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3034 = new TH1F("Graph_Graph3034","",100,0,549);
   Graph_Graph3034->SetMinimum(0);
   Graph_Graph3034->SetMaximum(1.262698);
   Graph_Graph3034->SetDirectory(0);
   Graph_Graph3034->SetStats(0);
   Graph_Graph3034->SetLineStyle(0);
   Graph_Graph3034->SetMarkerStyle(20);
   Graph_Graph3034->GetXaxis()->SetLabelFont(42);
   Graph_Graph3034->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3034->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3034->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3034->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3034->GetXaxis()->SetTitleFont(42);
   Graph_Graph3034->GetYaxis()->SetLabelFont(42);
   Graph_Graph3034->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3034->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3034->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3034->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3034->GetYaxis()->SetTitleFont(42);
   Graph_Graph3034->GetZaxis()->SetLabelFont(42);
   Graph_Graph3034->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3034->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3034->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3034->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3034);
   
   grae->Draw("p0");
   
   TLegend *leg = new TLegend(0.2,0.7,0.8,0.9,NULL,"brNDC");
   leg->SetTextFont(62);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("new_histo_group_Fake_wh3l_13TeV_sssf_pt2","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_13TeV_sssf_pt2","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_13TeV_sssf_pt2","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_13TeV_sssf_pt2","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_13TeV_sssf_pt2","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_13TeV_sssf_pt2","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_13TeV_sssf_pt2","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_13TeV_sssf_pt2","Data","EPL");
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
   entry=leg->AddEntry("new_histo_group_Fake_wh3l_13TeV_sssf_pt2","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_13TeV_sssf_pt2","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_13TeV_sssf_pt2","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_13TeV_sssf_pt2","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_13TeV_sssf_pt2","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_13TeV_sssf_pt2","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_13TeV_sssf_pt2","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_13TeV_sssf_pt2","Data","EPL");
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
   
   TH1F *hframe_copy170 = new TH1F("hframe_copy170","",1000,10,500);
   hframe_copy170->SetMinimum(0);
   hframe_copy170->SetMaximum(2.588526);
   hframe_copy170->SetDirectory(0);
   hframe_copy170->SetStats(0);
   hframe_copy170->SetLineStyle(0);
   hframe_copy170->SetMarkerStyle(20);
   hframe_copy170->GetXaxis()->SetTitle("lept2_p_{T} [GeV]");
   hframe_copy170->GetXaxis()->SetNdivisions(506);
   hframe_copy170->GetXaxis()->SetLabelFont(42);
   hframe_copy170->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy170->GetXaxis()->SetLabelSize(0.05);
   hframe_copy170->GetXaxis()->SetTitleSize(0.06);
   hframe_copy170->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy170->GetXaxis()->SetTitleFont(42);
   hframe_copy170->GetYaxis()->SetTitle("Events");
   hframe_copy170->GetYaxis()->SetLabelFont(42);
   hframe_copy170->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy170->GetYaxis()->SetLabelSize(0.05);
   hframe_copy170->GetYaxis()->SetTitleSize(0.06);
   hframe_copy170->GetYaxis()->SetTitleOffset(1.25);
   hframe_copy170->GetYaxis()->SetTitleFont(42);
   hframe_copy170->GetZaxis()->SetLabelFont(42);
   hframe_copy170->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy170->GetZaxis()->SetLabelSize(0.05);
   hframe_copy170->GetZaxis()->SetTitleSize(0.06);
   hframe_copy170->GetZaxis()->SetTitleFont(42);
   hframe_copy170->Draw("sameaxis");
   ccwh3l_13TeV_sssf_pt2->Modified();
   ccwh3l_13TeV_sssf_pt2->cd();
   ccwh3l_13TeV_sssf_pt2->SetSelected(ccwh3l_13TeV_sssf_pt2);
}
