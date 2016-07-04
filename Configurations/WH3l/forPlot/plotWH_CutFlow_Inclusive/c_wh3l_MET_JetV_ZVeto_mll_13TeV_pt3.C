void c_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3()
{
//=========Macro generated from canvas: ccwh3l_MET_JetV_ZVeto_mll_13TeV_pt3/cc
//=========  (Sun Jul  3 16:19:23 2016) by ROOT version6.02/13
   TCanvas *ccwh3l_MET_JetV_ZVeto_mll_13TeV_pt3 = new TCanvas("ccwh3l_MET_JetV_ZVeto_mll_13TeV_pt3", "cc",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   ccwh3l_MET_JetV_ZVeto_mll_13TeV_pt3->SetHighLightColor(2);
   ccwh3l_MET_JetV_ZVeto_mll_13TeV_pt3->Range(-7.999999,-2.701041,104.5,18.0762);
   ccwh3l_MET_JetV_ZVeto_mll_13TeV_pt3->SetFillColor(0);
   ccwh3l_MET_JetV_ZVeto_mll_13TeV_pt3->SetBorderMode(0);
   ccwh3l_MET_JetV_ZVeto_mll_13TeV_pt3->SetBorderSize(2);
   ccwh3l_MET_JetV_ZVeto_mll_13TeV_pt3->SetTickx(1);
   ccwh3l_MET_JetV_ZVeto_mll_13TeV_pt3->SetTicky(1);
   ccwh3l_MET_JetV_ZVeto_mll_13TeV_pt3->SetLeftMargin(0.16);
   ccwh3l_MET_JetV_ZVeto_mll_13TeV_pt3->SetRightMargin(0.04);
   ccwh3l_MET_JetV_ZVeto_mll_13TeV_pt3->SetTopMargin(0.05);
   ccwh3l_MET_JetV_ZVeto_mll_13TeV_pt3->SetBottomMargin(0.13);
   ccwh3l_MET_JetV_ZVeto_mll_13TeV_pt3->SetFrameFillStyle(0);
   ccwh3l_MET_JetV_ZVeto_mll_13TeV_pt3->SetFrameBorderMode(0);
   ccwh3l_MET_JetV_ZVeto_mll_13TeV_pt3->SetFrameFillStyle(0);
   ccwh3l_MET_JetV_ZVeto_mll_13TeV_pt3->SetFrameBorderMode(0);
   
   TH1F *hframe471 = new TH1F("hframe471","",1000,10,100);
   hframe471->SetMinimum(0);
   hframe471->SetMaximum(17.03733);
   hframe471->SetDirectory(0);
   hframe471->SetStats(0);
   hframe471->SetLineStyle(0);
   hframe471->SetMarkerStyle(20);
   hframe471->GetXaxis()->SetTitle("lept3_p_{T} [GeV]");
   hframe471->GetXaxis()->SetNdivisions(506);
   hframe471->GetXaxis()->SetLabelFont(42);
   hframe471->GetXaxis()->SetLabelOffset(0.007);
   hframe471->GetXaxis()->SetLabelSize(0.05);
   hframe471->GetXaxis()->SetTitleSize(0.06);
   hframe471->GetXaxis()->SetTitleOffset(0.9);
   hframe471->GetXaxis()->SetTitleFont(42);
   hframe471->GetYaxis()->SetTitle("Events");
   hframe471->GetYaxis()->SetLabelFont(42);
   hframe471->GetYaxis()->SetLabelOffset(0.007);
   hframe471->GetYaxis()->SetLabelSize(0.05);
   hframe471->GetYaxis()->SetTitleSize(0.06);
   hframe471->GetYaxis()->SetTitleOffset(1.25);
   hframe471->GetYaxis()->SetTitleFont(42);
   hframe471->GetZaxis()->SetLabelFont(42);
   hframe471->GetZaxis()->SetLabelOffset(0.007);
   hframe471->GetZaxis()->SetLabelSize(0.05);
   hframe471->GetZaxis()->SetTitleSize(0.06);
   hframe471->GetZaxis()->SetTitleFont(42);
   hframe471->Draw(" ");
   
   THStack *thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3 = new THStack();
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3->SetName("thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3");
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3->SetTitle("thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3");
   
   TH1F *thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3_stack_95 = new TH1F("thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3_stack_95","thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3",25,10,100);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3_stack_95->SetMinimum(-0.3239177);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3_stack_95->SetMaximum(7.15568);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3_stack_95->SetDirectory(0);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3_stack_95->SetStats(0);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3_stack_95->SetLineStyle(0);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3_stack_95->SetMarkerStyle(20);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3_stack_95->GetXaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3_stack_95->GetXaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3_stack_95->GetXaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3_stack_95->GetXaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3_stack_95->GetXaxis()->SetTitleOffset(0.9);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3_stack_95->GetXaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3_stack_95->GetYaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3_stack_95->GetYaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3_stack_95->GetYaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3_stack_95->GetYaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3_stack_95->GetYaxis()->SetTitleOffset(1.25);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3_stack_95->GetYaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3_stack_95->GetZaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3_stack_95->GetZaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3_stack_95->GetZaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3_stack_95->GetZaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3_stack_95->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3->SetHistogram(thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3_stack_95);
   
   
   TH1D *new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3472 = new TH1D("new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3472","histo_Fake",25,10,100);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3472->SetBinContent(1,4.291688);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3472->SetBinContent(2,2.787793);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3472->SetBinContent(3,1.059772);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3472->SetBinContent(4,1.054235);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3472->SetBinContent(5,-0.1396241);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3472->SetBinContent(6,0.338303);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3472->SetBinContent(7,0.06109051);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3472->SetBinContent(8,-0.0005605229);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3472->SetBinContent(11,0.2761226);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3472->SetBinError(1,1.672943);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3472->SetBinError(2,1.675007);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3472->SetBinError(3,0.4959364);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3472->SetBinError(4,0.6641368);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3472->SetBinError(5,0.1842936);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3472->SetBinError(6,0.3217103);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3472->SetBinError(7,0.3109455);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3472->SetBinError(8,0.0005605229);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3472->SetBinError(11,0.2761226);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3472->SetEntries(108);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3472->SetFillColor(ci);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3472->SetFillStyle(3001);

   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3472->SetLineColor(ci);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3472->GetXaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3472->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3472->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3472->GetXaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3472->GetYaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3472->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3472->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3472->GetYaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3472->GetZaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3472->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3472->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3472->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3->Add(new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3,"");
   
   TH1D *new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3473 = new TH1D("new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3473","histo_WW",25,10,100);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3473->SetBinContent(1,0.03427349);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3473->SetBinContent(2,0.01044191);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3473->SetBinContent(3,0.0142084);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3473->SetBinContent(4,0.01530373);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3473->SetBinContent(7,0.01447441);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3473->SetBinError(1,0.02427729);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3473->SetBinError(2,0.01044191);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3473->SetBinError(3,0.0142084);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3473->SetBinError(4,0.01530373);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3473->SetBinError(7,0.01447441);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3473->SetEntries(6);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3473->SetFillColor(ci);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3473->SetFillStyle(3001);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3473->SetLineColor(ci);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3473->GetXaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3473->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3473->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3473->GetXaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3473->GetYaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3473->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3473->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3473->GetYaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3473->GetZaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3473->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3473->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3473->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3->Add(new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3,"");
   
   TH1D *new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3474 = new TH1D("new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3474","histo_VVV",25,10,100);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3474->SetBinContent(1,0.05085081);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3474->SetBinContent(2,0.05378328);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3474->SetBinContent(3,0.05123329);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3474->SetBinContent(4,0.02909589);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3474->SetBinContent(5,0.02843618);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3474->SetBinContent(6,0.02242122);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3474->SetBinContent(7,0.02185859);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3474->SetBinContent(8,0.01559169);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3474->SetBinContent(9,0.01492065);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3474->SetBinContent(10,0.007641454);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3474->SetBinContent(11,0.006386406);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3474->SetBinContent(12,0.008460441);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3474->SetBinContent(13,3.306239e-05);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3474->SetBinContent(16,0.002006893);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3474->SetBinContent(22,0.002142702);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3474->SetBinError(1,0.01119572);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3474->SetBinError(2,0.0111186);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3474->SetBinError(3,0.01130578);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3474->SetBinError(4,0.0107106);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3474->SetBinError(5,0.008584073);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3474->SetBinError(6,0.006758398);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3474->SetBinError(7,0.007599168);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3474->SetBinError(8,0.005929566);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3474->SetBinError(9,0.006017597);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3474->SetBinError(10,0.004420829);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3474->SetBinError(11,0.003705631);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3474->SetBinError(12,0.004314783);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3474->SetBinError(13,0.00403481);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3474->SetBinError(16,0.002006893);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3474->SetBinError(22,0.002142702);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3474->SetEntries(180);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3474->SetFillColor(ci);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3474->SetFillStyle(3001);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3474->SetLineColor(ci);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3474->GetXaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3474->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3474->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3474->GetXaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3474->GetYaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3474->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3474->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3474->GetYaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3474->GetZaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3474->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3474->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3474->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3->Add(new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3,"");
   
   TH1D *new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3475 = new TH1D("new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3475","histo_Vg",25,10,100);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3475->SetBinContent(1,0.431063);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3475->SetBinContent(2,0.627245);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3475->SetBinContent(3,0.632457);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3475->SetBinContent(4,0.7208008);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3475->SetBinContent(5,0.2366032);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3475->SetBinError(1,0.1976432);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3475->SetBinError(2,0.2865512);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3475->SetBinError(3,0.2524005);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3475->SetBinError(4,0.334687);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3475->SetBinError(5,0.1675134);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3475->SetEntries(42);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3475->SetFillColor(ci);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3475->SetFillStyle(3001);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3475->SetLineColor(ci);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3475->GetXaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3475->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3475->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3475->GetXaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3475->GetYaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3475->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3475->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3475->GetYaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3475->GetZaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3475->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3475->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3475->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3->Add(new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3,"");
   
   TH1D *new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3476 = new TH1D("new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3476","histo_ZZ",25,10,100);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3476->SetBinContent(1,0.1607586);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3476->SetBinContent(2,0.1883576);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3476->SetBinContent(3,0.1077572);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3476->SetBinContent(4,1.493259e-08);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3476->SetBinContent(5,0.04332869);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3476->SetBinContent(6,0.04510369);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3476->SetBinContent(9,0.03513683);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3476->SetBinContent(11,0.04527812);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3476->SetBinError(1,0.07307538);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3476->SetBinError(2,0.0863078);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3476->SetBinError(3,0.06805732);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3476->SetBinError(4,1.493259e-08);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3476->SetBinError(5,0.04332869);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3476->SetBinError(6,0.04510369);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3476->SetBinError(9,0.03513683);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3476->SetBinError(11,0.04527812);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3476->SetEntries(18);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3476->SetFillColor(ci);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3476->SetFillStyle(3001);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3476->SetLineColor(ci);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3476->GetXaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3476->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3476->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3476->GetXaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3476->GetYaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3476->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3476->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3476->GetYaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3476->GetZaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3476->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3476->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3476->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3->Add(new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3,"");
   
   TH1D *new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3477 = new TH1D("new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3477","histo_WZ",25,10,100);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3477->SetBinContent(1,1.716464);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3477->SetBinContent(2,1.64829);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3477->SetBinContent(3,1.373193);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3477->SetBinContent(4,0.7796932);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3477->SetBinContent(5,0.559029);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3477->SetBinContent(6,0.3375034);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3477->SetBinContent(7,0.2736931);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3477->SetBinContent(8,0.17185);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3477->SetBinContent(9,0.1400826);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3477->SetBinContent(10,0.05701066);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3477->SetBinContent(11,0.08586923);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3477->SetBinContent(12,0.05776773);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3477->SetBinContent(13,0.021883);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3477->SetBinContent(14,0.02175705);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3477->SetBinContent(15,0.02759529);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3477->SetBinContent(16,0.01711689);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3477->SetBinContent(17,0.01180663);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3477->SetBinContent(18,0.01669191);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3477->SetBinContent(20,0.0166626);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3477->SetBinContent(22,0.01715306);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3477->SetBinContent(24,0.01787271);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3477->SetBinContent(26,0.02023093);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3477->SetBinError(1,0.09624474);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3477->SetBinError(2,0.09504032);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3477->SetBinError(3,0.0874401);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3477->SetBinError(4,0.06462692);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3477->SetBinError(5,0.05476824);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3477->SetBinError(6,0.04224472);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3477->SetBinError(7,0.03806856);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3477->SetBinError(8,0.02995045);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3477->SetBinError(9,0.02761459);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3477->SetBinError(10,0.01662626);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3477->SetBinError(11,0.02187087);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3477->SetBinError(12,0.01719863);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3477->SetBinError(13,0.01132543);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3477->SetBinError(14,0.01000325);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3477->SetBinError(15,0.01237674);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3477->SetBinError(16,0.009901838);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3477->SetBinError(17,0.008356267);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3477->SetBinError(18,0.009638129);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3477->SetBinError(20,0.009704447);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3477->SetBinError(22,0.01000479);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3477->SetBinError(24,0.01039688);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3477->SetBinError(26,0.01054179);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3477->SetEntries(1516);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3477->SetFillColor(ci);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3477->SetFillStyle(3001);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3477->SetLineColor(ci);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3477->GetXaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3477->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3477->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3477->GetXaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3477->GetYaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3477->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3477->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3477->GetYaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3477->GetZaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3477->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3477->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3477->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3->Add(new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3,"");
   
   TH1D *new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3478 = new TH1D("new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3478","histo_H_htt",25,10,100);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3478->SetBinContent(1,0.1298365);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3478->SetBinContent(2,0.168191);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3478->SetBinContent(3,0.1442284);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3478->SetBinContent(4,0.09936315);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3478->SetBinContent(5,0.07311023);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3478->SetBinContent(6,0.05503722);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3478->SetBinContent(7,0.03205603);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3478->SetBinContent(8,0.03025515);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3478->SetBinContent(9,0.01921564);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3478->SetBinContent(10,0.01864647);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3478->SetBinContent(11,0.007348792);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3478->SetBinContent(12,0.01056361);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3478->SetBinContent(13,0.007003974);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3478->SetBinContent(14,0.00326976);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3478->SetBinContent(15,0.001292458);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3478->SetBinContent(16,0.00709135);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3478->SetBinContent(17,0.00213953);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3478->SetBinContent(18,0.0009255391);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3478->SetBinContent(20,0.001686607);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3478->SetBinContent(21,0.0003785175);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3478->SetBinContent(22,0.0002044925);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3478->SetBinContent(24,-0.0001023572);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3478->SetBinContent(26,0.0002656808);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3478->SetBinError(1,0.01205091);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3478->SetBinError(2,0.01359214);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3478->SetBinError(3,0.01321845);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3478->SetBinError(4,0.01075287);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3478->SetBinError(5,0.009273756);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3478->SetBinError(6,0.008700111);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3478->SetBinError(7,0.005986649);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3478->SetBinError(8,0.005995711);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3478->SetBinError(9,0.004816524);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3478->SetBinError(10,0.005091137);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3478->SetBinError(11,0.002708282);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3478->SetBinError(12,0.003961376);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3478->SetBinError(13,0.00303547);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3478->SetBinError(14,0.001693378);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3478->SetBinError(15,0.001081659);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3478->SetBinError(16,0.003269092);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3478->SetBinError(17,0.001818713);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3478->SetBinError(18,0.0008822765);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3478->SetBinError(20,0.001686607);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3478->SetBinError(21,0.0002690901);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3478->SetBinError(22,0.0002044925);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3478->SetBinError(24,0.0003811577);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3478->SetBinError(26,0.0002100476);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3478->SetEntries(1320);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3478->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3478->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3478->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3478->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3478->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3478->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3478->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3478->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3478->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3478->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3478->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3478->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3478->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3478->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3478->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3->Add(new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3,"");
   thsBackground_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3->Draw("hist same");
   
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3 = new THStack();
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3->SetName("thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3");
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3->SetTitle("thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3");
   
   TH1F *thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3_stack_96 = new TH1F("thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3_stack_96","thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3",25,10,100);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3_stack_96->SetMinimum(-0.0004835149);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3_stack_96->SetMaximum(0.1908723);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3_stack_96->SetDirectory(0);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3_stack_96->SetStats(0);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3_stack_96->SetLineStyle(0);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3_stack_96->SetMarkerStyle(20);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3_stack_96->GetXaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3_stack_96->GetXaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3_stack_96->GetXaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3_stack_96->GetXaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3_stack_96->GetXaxis()->SetTitleOffset(0.9);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3_stack_96->GetXaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3_stack_96->GetYaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3_stack_96->GetYaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3_stack_96->GetYaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3_stack_96->GetYaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3_stack_96->GetYaxis()->SetTitleOffset(1.25);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3_stack_96->GetYaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3_stack_96->GetZaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3_stack_96->GetZaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3_stack_96->GetZaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3_stack_96->GetZaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3_stack_96->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3->SetHistogram(thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3_stack_96);
   
   
   TH1D *new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3479 = new TH1D("new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3479","histo_H_htt",25,10,100);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3479->SetBinContent(1,0.1298365);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3479->SetBinContent(2,0.168191);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3479->SetBinContent(3,0.1442284);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3479->SetBinContent(4,0.09936315);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3479->SetBinContent(5,0.07311023);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3479->SetBinContent(6,0.05503722);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3479->SetBinContent(7,0.03205603);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3479->SetBinContent(8,0.03025515);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3479->SetBinContent(9,0.01921564);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3479->SetBinContent(10,0.01864647);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3479->SetBinContent(11,0.007348792);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3479->SetBinContent(12,0.01056361);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3479->SetBinContent(13,0.007003974);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3479->SetBinContent(14,0.00326976);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3479->SetBinContent(15,0.001292458);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3479->SetBinContent(16,0.00709135);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3479->SetBinContent(17,0.00213953);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3479->SetBinContent(18,0.0009255391);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3479->SetBinContent(20,0.001686607);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3479->SetBinContent(21,0.0003785175);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3479->SetBinContent(22,0.0002044925);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3479->SetBinContent(24,-0.0001023572);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3479->SetBinContent(26,0.0002656808);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3479->SetBinError(1,0.01205091);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3479->SetBinError(2,0.01359214);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3479->SetBinError(3,0.01321845);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3479->SetBinError(4,0.01075287);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3479->SetBinError(5,0.009273756);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3479->SetBinError(6,0.008700111);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3479->SetBinError(7,0.005986649);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3479->SetBinError(8,0.005995711);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3479->SetBinError(9,0.004816524);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3479->SetBinError(10,0.005091137);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3479->SetBinError(11,0.002708282);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3479->SetBinError(12,0.003961376);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3479->SetBinError(13,0.00303547);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3479->SetBinError(14,0.001693378);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3479->SetBinError(15,0.001081659);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3479->SetBinError(16,0.003269092);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3479->SetBinError(17,0.001818713);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3479->SetBinError(18,0.0008822765);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3479->SetBinError(20,0.001686607);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3479->SetBinError(21,0.0002690901);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3479->SetBinError(22,0.0002044925);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3479->SetBinError(24,0.0003811577);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3479->SetBinError(26,0.0002100476);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3479->SetEntries(1320);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3479->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3479->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3479->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3479->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3479->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3479->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3479->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3479->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3479->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3479->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3479->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3479->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3479->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3479->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3479->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3->Add(new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3,"");
   thsSignal_grouped_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3->Draw("hist same noclear");
   
   Double_t _fx3095[25] = {
   11.8,
   15.4,
   19,
   22.6,
   26.2,
   29.8,
   33.4,
   37,
   40.6,
   44.2,
   47.8,
   51.4,
   55,
   58.6,
   62.2,
   65.8,
   69.4,
   73,
   76.6,
   80.2,
   83.8,
   87.4,
   91,
   94.6,
   98.2};
   Double_t _fy3095[25] = {
   6.685097,
   5.315911,
   3.238621,
   2.599129,
   0.727773,
   0.7433314,
   0.3711166,
   0.1868811,
   0.19014,
   0.06465211,
   0.4136563,
   0.06622817,
   0.02191606,
   0.02175705,
   0.02759529,
   0.01912379,
   0.01180663,
   0.01669191,
   0,
   0.0166626,
   0,
   0.01929576,
   0,
   0.01787271,
   0};
   Double_t _felx3095[25] = {
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8};
   Double_t _fely3095[25] = {
   2.56997,
   2.37811,
   1.004203,
   1.151303,
   0.462234,
   0.4329829,
   0.1251139,
   0.03970277,
   0.07044885,
   0.02245992,
   0.3602476,
   0.02315469,
   0.01136788,
   0.01002631,
   0.01238932,
   0.01209714,
   0.008356735,
   0.009645431,
   0,
   0.009720106,
   0,
   0.01234477,
   0,
   0.01042118,
   0};
   Double_t _fehx3095[25] = {
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8};
   Double_t _fehy3095[25] = {
   2.569182,
   2.377952,
   1.004141,
   1.151275,
   0.4179613,
   0.4329695,
   0.3723624,
   0.03968574,
   0.07043709,
   0.02245108,
   0.3602468,
   0.02314437,
   0.01536594,
   0.01002081,
   0.01239011,
   0.0120988,
   0.008356744,
   0.009643755,
   0,
   0.009721527,
   0,
   0.01234188,
   0,
   0.01042405,
   0};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(25,_fx3095,_fy3095,_felx3095,_fehx3095,_fely3095,_fehy3095);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(12);
   grae->SetFillStyle(3004);
   grae->SetLineColor(12);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3095 = new TH1F("Graph_Graph3095","",100,1.000001,109);
   Graph_Graph3095->SetMinimum(0);
   Graph_Graph3095->SetMaximum(10.17971);
   Graph_Graph3095->SetDirectory(0);
   Graph_Graph3095->SetStats(0);
   Graph_Graph3095->SetLineStyle(0);
   Graph_Graph3095->SetMarkerStyle(20);
   Graph_Graph3095->GetXaxis()->SetLabelFont(42);
   Graph_Graph3095->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3095->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3095->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3095->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3095->GetXaxis()->SetTitleFont(42);
   Graph_Graph3095->GetYaxis()->SetLabelFont(42);
   Graph_Graph3095->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3095->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3095->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3095->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3095->GetYaxis()->SetTitleFont(42);
   Graph_Graph3095->GetZaxis()->SetLabelFont(42);
   Graph_Graph3095->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3095->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3095->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3095->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3095);
   
   grae->Draw("2");
   
   Double_t _fx3096[25] = {
   11.8,
   15.4,
   19,
   22.6,
   26.2,
   29.8,
   33.4,
   37,
   40.6,
   44.2,
   47.8,
   51.4,
   55,
   58.6,
   62.2,
   65.8,
   69.4,
   73,
   76.6,
   80.2,
   83.8,
   87.4,
   91,
   94.6,
   98.2};
   Double_t _fy3096[25] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t _felx3096[25] = {
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8};
   Double_t _fely3096[25] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t _fehx3096[25] = {
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8};
   Double_t _fehy3096[25] = {
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
   grae = new TGraphAsymmErrors(25,_fx3096,_fy3096,_felx3096,_fehx3096,_fely3096,_fehy3096);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(1);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3096 = new TH1F("Graph_Graph3096","",100,1.000001,109);
   Graph_Graph3096->SetMinimum(0);
   Graph_Graph3096->SetMaximum(1.262698);
   Graph_Graph3096->SetDirectory(0);
   Graph_Graph3096->SetStats(0);
   Graph_Graph3096->SetLineStyle(0);
   Graph_Graph3096->SetMarkerStyle(20);
   Graph_Graph3096->GetXaxis()->SetLabelFont(42);
   Graph_Graph3096->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3096->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3096->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3096->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3096->GetXaxis()->SetTitleFont(42);
   Graph_Graph3096->GetYaxis()->SetLabelFont(42);
   Graph_Graph3096->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3096->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3096->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3096->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3096->GetYaxis()->SetTitleFont(42);
   Graph_Graph3096->GetZaxis()->SetLabelFont(42);
   Graph_Graph3096->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3096->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3096->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3096->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3096);
   
   grae->Draw("p0");
   
   TLegend *leg = new TLegend(0.2,0.7,0.8,0.9,NULL,"brNDC");
   leg->SetTextFont(62);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3","Data","EPL");
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
   entry=leg->AddEntry("new_histo_group_Fake_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_MET_JetV_ZVeto_mll_13TeV_pt3","Data","EPL");
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
   
   TH1F *hframe_copy480 = new TH1F("hframe_copy480","",1000,10,100);
   hframe_copy480->SetMinimum(0);
   hframe_copy480->SetMaximum(17.03733);
   hframe_copy480->SetDirectory(0);
   hframe_copy480->SetStats(0);
   hframe_copy480->SetLineStyle(0);
   hframe_copy480->SetMarkerStyle(20);
   hframe_copy480->GetXaxis()->SetTitle("lept3_p_{T} [GeV]");
   hframe_copy480->GetXaxis()->SetNdivisions(506);
   hframe_copy480->GetXaxis()->SetLabelFont(42);
   hframe_copy480->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy480->GetXaxis()->SetLabelSize(0.05);
   hframe_copy480->GetXaxis()->SetTitleSize(0.06);
   hframe_copy480->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy480->GetXaxis()->SetTitleFont(42);
   hframe_copy480->GetYaxis()->SetTitle("Events");
   hframe_copy480->GetYaxis()->SetLabelFont(42);
   hframe_copy480->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy480->GetYaxis()->SetLabelSize(0.05);
   hframe_copy480->GetYaxis()->SetTitleSize(0.06);
   hframe_copy480->GetYaxis()->SetTitleOffset(1.25);
   hframe_copy480->GetYaxis()->SetTitleFont(42);
   hframe_copy480->GetZaxis()->SetLabelFont(42);
   hframe_copy480->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy480->GetZaxis()->SetLabelSize(0.05);
   hframe_copy480->GetZaxis()->SetTitleSize(0.06);
   hframe_copy480->GetZaxis()->SetTitleFont(42);
   hframe_copy480->Draw("sameaxis");
   ccwh3l_MET_JetV_ZVeto_mll_13TeV_pt3->Modified();
   ccwh3l_MET_JetV_ZVeto_mll_13TeV_pt3->cd();
   ccwh3l_MET_JetV_ZVeto_mll_13TeV_pt3->SetSelected(ccwh3l_MET_JetV_ZVeto_mll_13TeV_pt3);
}
