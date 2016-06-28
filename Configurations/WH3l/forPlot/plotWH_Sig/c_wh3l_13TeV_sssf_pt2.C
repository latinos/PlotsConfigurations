void c_wh3l_13TeV_sssf_pt2()
{
//=========Macro generated from canvas: ccwh3l_13TeV_sssf_pt2/cc
//=========  (Tue Jun 28 13:56:21 2016) by ROOT version6.02/13
   TCanvas *ccwh3l_13TeV_sssf_pt2 = new TCanvas("ccwh3l_13TeV_sssf_pt2", "cc",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   ccwh3l_13TeV_sssf_pt2->SetHighLightColor(2);
   ccwh3l_13TeV_sssf_pt2->Range(-28,-0.5539634,209.5,3.707294);
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
   
   TH1F *hframe161 = new TH1F("hframe161","",1000,10,200);
   hframe161->SetMinimum(0);
   hframe161->SetMaximum(3.494231);
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
   
   TH1F *thsBackground_grouped_wh3l_13TeV_sssf_pt2_stack_33 = new TH1F("thsBackground_grouped_wh3l_13TeV_sssf_pt2_stack_33","thsBackground_grouped_wh3l_13TeV_sssf_pt2",25,10,200);
   thsBackground_grouped_wh3l_13TeV_sssf_pt2_stack_33->SetMinimum(-0.4900019);
   thsBackground_grouped_wh3l_13TeV_sssf_pt2_stack_33->SetMaximum(2.234425);
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
   
   
   TH1D *new_histo_group_Fake_wh3l_13TeV_sssf_pt2162 = new TH1D("new_histo_group_Fake_wh3l_13TeV_sssf_pt2162","histo_Fake",25,10,200);
   new_histo_group_Fake_wh3l_13TeV_sssf_pt2162->SetBinContent(2,0.5315295);
   new_histo_group_Fake_wh3l_13TeV_sssf_pt2162->SetBinContent(3,-0.1796619);
   new_histo_group_Fake_wh3l_13TeV_sssf_pt2162->SetBinContent(4,1.170661);
   new_histo_group_Fake_wh3l_13TeV_sssf_pt2162->SetBinContent(5,0.1035289);
   new_histo_group_Fake_wh3l_13TeV_sssf_pt2162->SetBinContent(6,0.9195533);
   new_histo_group_Fake_wh3l_13TeV_sssf_pt2162->SetBinContent(7,-0.008697041);
   new_histo_group_Fake_wh3l_13TeV_sssf_pt2162->SetBinContent(8,0.3651159);
   new_histo_group_Fake_wh3l_13TeV_sssf_pt2162->SetBinError(2,0.419973);
   new_histo_group_Fake_wh3l_13TeV_sssf_pt2162->SetBinError(3,0.31034);
   new_histo_group_Fake_wh3l_13TeV_sssf_pt2162->SetBinError(4,0.9573621);
   new_histo_group_Fake_wh3l_13TeV_sssf_pt2162->SetBinError(5,0.1780403);
   new_histo_group_Fake_wh3l_13TeV_sssf_pt2162->SetBinError(6,0.7001762);
   new_histo_group_Fake_wh3l_13TeV_sssf_pt2162->SetBinError(7,0.007585042);
   new_histo_group_Fake_wh3l_13TeV_sssf_pt2162->SetBinError(8,0.3651159);
   new_histo_group_Fake_wh3l_13TeV_sssf_pt2162->SetEntries(34);

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
   
   TH1D *new_histo_group_WW_wh3l_13TeV_sssf_pt2163 = new TH1D("new_histo_group_WW_wh3l_13TeV_sssf_pt2163","histo_WW",25,10,200);
   new_histo_group_WW_wh3l_13TeV_sssf_pt2163->SetBinContent(2,0.0161241);
   new_histo_group_WW_wh3l_13TeV_sssf_pt2163->SetBinContent(4,0.01039136);
   new_histo_group_WW_wh3l_13TeV_sssf_pt2163->SetBinError(2,0.0161241);
   new_histo_group_WW_wh3l_13TeV_sssf_pt2163->SetBinError(4,0.01039136);
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
   
   TH1D *new_histo_group_VVV_wh3l_13TeV_sssf_pt2164 = new TH1D("new_histo_group_VVV_wh3l_13TeV_sssf_pt2164","histo_VVV",25,10,200);
   new_histo_group_VVV_wh3l_13TeV_sssf_pt2164->SetBinContent(2,0.0007784473);
   new_histo_group_VVV_wh3l_13TeV_sssf_pt2164->SetBinContent(9,0.0005490761);
   new_histo_group_VVV_wh3l_13TeV_sssf_pt2164->SetBinError(2,0.0007784473);
   new_histo_group_VVV_wh3l_13TeV_sssf_pt2164->SetBinError(9,0.0005490761);
   new_histo_group_VVV_wh3l_13TeV_sssf_pt2164->SetEntries(2);

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
   
   TH1D *new_histo_group_Vg_wh3l_13TeV_sssf_pt2165 = new TH1D("new_histo_group_Vg_wh3l_13TeV_sssf_pt2165","histo_Vg",25,10,200);
   new_histo_group_Vg_wh3l_13TeV_sssf_pt2165->SetBinContent(4,0.0522728);
   new_histo_group_Vg_wh3l_13TeV_sssf_pt2165->SetBinError(4,0.0522728);
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
   
   TH1D *new_histo_group_ZZ_wh3l_13TeV_sssf_pt2166 = new TH1D("new_histo_group_ZZ_wh3l_13TeV_sssf_pt2166","histo_ZZ",25,10,200);
   new_histo_group_ZZ_wh3l_13TeV_sssf_pt2166->SetBinContent(2,0.0427135);
   new_histo_group_ZZ_wh3l_13TeV_sssf_pt2166->SetBinContent(7,0.03513683);
   new_histo_group_ZZ_wh3l_13TeV_sssf_pt2166->SetBinError(2,0.0427135);
   new_histo_group_ZZ_wh3l_13TeV_sssf_pt2166->SetBinError(7,0.03513683);
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
   
   TH1D *new_histo_group_WZ_wh3l_13TeV_sssf_pt2167 = new TH1D("new_histo_group_WZ_wh3l_13TeV_sssf_pt2167","histo_WZ",25,10,200);
   new_histo_group_WZ_wh3l_13TeV_sssf_pt2167->SetBinContent(1,0.05830142);
   new_histo_group_WZ_wh3l_13TeV_sssf_pt2167->SetBinContent(2,0.1452895);
   new_histo_group_WZ_wh3l_13TeV_sssf_pt2167->SetBinContent(3,0.1212991);
   new_histo_group_WZ_wh3l_13TeV_sssf_pt2167->SetBinContent(4,0.1158263);
   new_histo_group_WZ_wh3l_13TeV_sssf_pt2167->SetBinContent(5,0.05546958);
   new_histo_group_WZ_wh3l_13TeV_sssf_pt2167->SetBinContent(6,0.04050875);
   new_histo_group_WZ_wh3l_13TeV_sssf_pt2167->SetBinContent(7,0.03273749);
   new_histo_group_WZ_wh3l_13TeV_sssf_pt2167->SetBinContent(8,0.01609509);
   new_histo_group_WZ_wh3l_13TeV_sssf_pt2167->SetBinContent(9,0.006153808);
   new_histo_group_WZ_wh3l_13TeV_sssf_pt2167->SetBinContent(10,0.003593794);
   new_histo_group_WZ_wh3l_13TeV_sssf_pt2167->SetBinContent(11,0.005713332);
   new_histo_group_WZ_wh3l_13TeV_sssf_pt2167->SetBinContent(12,0.004728666);
   new_histo_group_WZ_wh3l_13TeV_sssf_pt2167->SetBinContent(14,0.011118);
   new_histo_group_WZ_wh3l_13TeV_sssf_pt2167->SetBinContent(17,0.005827953);
   new_histo_group_WZ_wh3l_13TeV_sssf_pt2167->SetBinError(1,0.01806022);
   new_histo_group_WZ_wh3l_13TeV_sssf_pt2167->SetBinError(2,0.02823911);
   new_histo_group_WZ_wh3l_13TeV_sssf_pt2167->SetBinError(3,0.02475323);
   new_histo_group_WZ_wh3l_13TeV_sssf_pt2167->SetBinError(4,0.02497046);
   new_histo_group_WZ_wh3l_13TeV_sssf_pt2167->SetBinError(5,0.01690675);
   new_histo_group_WZ_wh3l_13TeV_sssf_pt2167->SetBinError(6,0.01470334);
   new_histo_group_WZ_wh3l_13TeV_sssf_pt2167->SetBinError(7,0.01346836);
   new_histo_group_WZ_wh3l_13TeV_sssf_pt2167->SetBinError(8,0.009524);
   new_histo_group_WZ_wh3l_13TeV_sssf_pt2167->SetBinError(9,0.006153808);
   new_histo_group_WZ_wh3l_13TeV_sssf_pt2167->SetBinError(10,0.003593794);
   new_histo_group_WZ_wh3l_13TeV_sssf_pt2167->SetBinError(11,0.005713332);
   new_histo_group_WZ_wh3l_13TeV_sssf_pt2167->SetBinError(12,0.004728666);
   new_histo_group_WZ_wh3l_13TeV_sssf_pt2167->SetBinError(14,0.00786224);
   new_histo_group_WZ_wh3l_13TeV_sssf_pt2167->SetBinError(17,0.005827953);
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
   
   TH1D *new_histo_group_Higgs_wh3l_13TeV_sssf_pt2168 = new TH1D("new_histo_group_Higgs_wh3l_13TeV_sssf_pt2168","histo_H_htt",25,10,200);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt2168->SetBinContent(1,0.01264166);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt2168->SetBinContent(2,0.04660306);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt2168->SetBinContent(3,0.0548711);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt2168->SetBinContent(4,0.04854039);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt2168->SetBinContent(5,0.05142534);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt2168->SetBinContent(6,0.01590773);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt2168->SetBinContent(7,0.01024667);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt2168->SetBinContent(8,0.01083929);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt2168->SetBinContent(9,0.00937648);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt2168->SetBinContent(10,0.008985016);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt2168->SetBinContent(11,0.004717868);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt2168->SetBinContent(12,0.002483983);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt2168->SetBinContent(13,0.005483022);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt2168->SetBinContent(15,0.0006046926);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt2168->SetBinContent(16,0.001266534);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt2168->SetBinContent(17,0.001219663);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt2168->SetBinContent(19,0.001323184);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt2168->SetBinContent(20,0.0001701444);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt2168->SetBinContent(21,0.001148031);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt2168->SetBinContent(24,0.0007126941);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt2168->SetBinContent(25,0.0003810904);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt2168->SetBinContent(26,0.0009009495);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt2168->SetBinError(1,0.00373365);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt2168->SetBinError(2,0.006623917);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt2168->SetBinError(3,0.007725956);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt2168->SetBinError(4,0.007850194);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt2168->SetBinError(5,0.007516995);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt2168->SetBinError(6,0.00390255);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt2168->SetBinError(7,0.002802975);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt2168->SetBinError(8,0.003517269);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt2168->SetBinError(9,0.003206063);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt2168->SetBinError(10,0.003808746);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt2168->SetBinError(11,0.002359426);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt2168->SetBinError(12,0.001677719);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt2168->SetBinError(13,0.002822296);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt2168->SetBinError(15,0.0003994273);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt2168->SetBinError(16,0.0006046368);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt2168->SetBinError(17,0.001027735);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt2168->SetBinError(19,0.001323184);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt2168->SetBinError(20,0.0001701444);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt2168->SetBinError(21,0.000920686);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt2168->SetBinError(24,0.0004186351);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt2168->SetBinError(25,0.0003810904);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt2168->SetBinError(26,0.0005355324);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt2168->SetEntries(522);
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
   
   TH1F *thsSignal_grouped_wh3l_13TeV_sssf_pt2_stack_34 = new TH1F("thsSignal_grouped_wh3l_13TeV_sssf_pt2_stack_34","thsSignal_grouped_wh3l_13TeV_sssf_pt2",25,10,200);
   thsSignal_grouped_wh3l_13TeV_sssf_pt2_stack_34->SetMinimum(0);
   thsSignal_grouped_wh3l_13TeV_sssf_pt2_stack_34->SetMaximum(0.06572691);
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
   
   
   TH1D *new_histo_group_Higgs_wh3l_13TeV_sssf_pt2169 = new TH1D("new_histo_group_Higgs_wh3l_13TeV_sssf_pt2169","histo_H_htt",25,10,200);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt2169->SetBinContent(1,0.01264166);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt2169->SetBinContent(2,0.04660306);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt2169->SetBinContent(3,0.0548711);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt2169->SetBinContent(4,0.04854039);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt2169->SetBinContent(5,0.05142534);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt2169->SetBinContent(6,0.01590773);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt2169->SetBinContent(7,0.01024667);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt2169->SetBinContent(8,0.01083929);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt2169->SetBinContent(9,0.00937648);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt2169->SetBinContent(10,0.008985016);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt2169->SetBinContent(11,0.004717868);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt2169->SetBinContent(12,0.002483983);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt2169->SetBinContent(13,0.005483022);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt2169->SetBinContent(15,0.0006046926);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt2169->SetBinContent(16,0.001266534);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt2169->SetBinContent(17,0.001219663);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt2169->SetBinContent(19,0.001323184);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt2169->SetBinContent(20,0.0001701444);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt2169->SetBinContent(21,0.001148031);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt2169->SetBinContent(24,0.0007126941);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt2169->SetBinContent(25,0.0003810904);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt2169->SetBinContent(26,0.0009009495);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt2169->SetBinError(1,0.00373365);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt2169->SetBinError(2,0.006623917);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt2169->SetBinError(3,0.007725956);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt2169->SetBinError(4,0.007850194);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt2169->SetBinError(5,0.007516995);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt2169->SetBinError(6,0.00390255);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt2169->SetBinError(7,0.002802975);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt2169->SetBinError(8,0.003517269);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt2169->SetBinError(9,0.003206063);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt2169->SetBinError(10,0.003808746);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt2169->SetBinError(11,0.002359426);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt2169->SetBinError(12,0.001677719);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt2169->SetBinError(13,0.002822296);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt2169->SetBinError(15,0.0003994273);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt2169->SetBinError(16,0.0006046368);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt2169->SetBinError(17,0.001027735);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt2169->SetBinError(19,0.001323184);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt2169->SetBinError(20,0.0001701444);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt2169->SetBinError(21,0.000920686);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt2169->SetBinError(24,0.0004186351);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt2169->SetBinError(25,0.0003810904);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt2169->SetBinError(26,0.0005355324);
   new_histo_group_Higgs_wh3l_13TeV_sssf_pt2169->SetEntries(522);
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
   
   Double_t _fx3033[25] = {
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
   Double_t _fy3033[25] = {
   0.05830142,
   0.7364351,
   -0.05836273,
   1.349152,
   0.1589985,
   0.960062,
   0.05917728,
   0.381211,
   0.006702884,
   0.003593794,
   0.005713332,
   0.004728666,
   0,
   0.011118,
   0,
   0,
   0.005827953,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _felx3033[25] = {
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
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
   Double_t _fely3033[25] = {
   0.01806021,
   0.5322773,
   0.3394003,
   1.102434,
   0.124376,
   0.7662603,
   0.05625877,
   0.3903241,
   0.0067029,
   0.003593795,
   0.005713332,
   0.004728666,
   0,
   0.00786224,
   0,
   0,
   0.005827953,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fehx3033[25] = {
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
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
   Double_t _fehy3033[25] = {
   0.01806022,
   0.5322775,
   0.2114015,
   1.102434,
   0.1974057,
   0.7662604,
   0.05625877,
   0.3903241,
   0.0067029,
   0.003593795,
   0.005713332,
   0.004728666,
   0,
   0.007862241,
   0,
   0,
   0.005827953,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(25,_fx3033,_fy3033,_felx3033,_fehx3033,_fely3033,_fehy3033);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(12);
   grae->SetFillStyle(3004);
   grae->SetLineColor(12);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3033 = new TH1F("Graph_Graph3033","",100,0,219);
   Graph_Graph3033->SetMinimum(-0.6826979);
   Graph_Graph3033->SetMaximum(2.736521);
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
   
   Double_t _fx3034[25] = {
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
   Double_t _fy3034[25] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t _felx3034[25] = {
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
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
   Double_t _fely3034[25] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t _fehx3034[25] = {
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
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
   Double_t _fehy3034[25] = {
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
   grae = new TGraphAsymmErrors(25,_fx3034,_fy3034,_felx3034,_fehx3034,_fely3034,_fehy3034);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(1);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3034 = new TH1F("Graph_Graph3034","",100,0,219);
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
   
   TLegend *leg = new TLegend(0.2,0.55,0.8,0.88,NULL,"brNDC");
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
   
   leg = new TLegend(0.2,0.55,0.8,0.88,NULL,"brNDC");
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
   
   TH1F *hframe_copy170 = new TH1F("hframe_copy170","",1000,10,200);
   hframe_copy170->SetMinimum(0);
   hframe_copy170->SetMaximum(3.494231);
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
