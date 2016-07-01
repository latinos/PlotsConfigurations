void c_wh3l_13TeV_ossf_mllmin3l()
{
//=========Macro generated from canvas: ccwh3l_13TeV_ossf_mllmin3l/cc
//=========  (Thu Jun 30 22:29:42 2016) by ROOT version6.02/13
   TCanvas *ccwh3l_13TeV_ossf_mllmin3l = new TCanvas("ccwh3l_13TeV_ossf_mllmin3l", "cc",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   ccwh3l_13TeV_ossf_mllmin3l->SetHighLightColor(2);
   ccwh3l_13TeV_ossf_mllmin3l->Range(-28,-1.603798,209.5,10.73311);
   ccwh3l_13TeV_ossf_mllmin3l->SetFillColor(0);
   ccwh3l_13TeV_ossf_mllmin3l->SetBorderMode(0);
   ccwh3l_13TeV_ossf_mllmin3l->SetBorderSize(2);
   ccwh3l_13TeV_ossf_mllmin3l->SetTickx(1);
   ccwh3l_13TeV_ossf_mllmin3l->SetTicky(1);
   ccwh3l_13TeV_ossf_mllmin3l->SetLeftMargin(0.16);
   ccwh3l_13TeV_ossf_mllmin3l->SetRightMargin(0.04);
   ccwh3l_13TeV_ossf_mllmin3l->SetTopMargin(0.05);
   ccwh3l_13TeV_ossf_mllmin3l->SetBottomMargin(0.13);
   ccwh3l_13TeV_ossf_mllmin3l->SetFrameFillStyle(0);
   ccwh3l_13TeV_ossf_mllmin3l->SetFrameBorderMode(0);
   ccwh3l_13TeV_ossf_mllmin3l->SetFrameFillStyle(0);
   ccwh3l_13TeV_ossf_mllmin3l->SetFrameBorderMode(0);
   
   TH1F *hframe31 = new TH1F("hframe31","",1000,10,200);
   hframe31->SetMinimum(0);
   hframe31->SetMaximum(10.11627);
   hframe31->SetDirectory(0);
   hframe31->SetStats(0);
   hframe31->SetLineStyle(0);
   hframe31->SetMarkerStyle(20);
   hframe31->GetXaxis()->SetTitle("min m_{ll} [GeV]");
   hframe31->GetXaxis()->SetNdivisions(506);
   hframe31->GetXaxis()->SetLabelFont(42);
   hframe31->GetXaxis()->SetLabelOffset(0.007);
   hframe31->GetXaxis()->SetLabelSize(0.05);
   hframe31->GetXaxis()->SetTitleSize(0.06);
   hframe31->GetXaxis()->SetTitleOffset(0.9);
   hframe31->GetXaxis()->SetTitleFont(42);
   hframe31->GetYaxis()->SetTitle("Events");
   hframe31->GetYaxis()->SetLabelFont(42);
   hframe31->GetYaxis()->SetLabelOffset(0.007);
   hframe31->GetYaxis()->SetLabelSize(0.05);
   hframe31->GetYaxis()->SetTitleSize(0.06);
   hframe31->GetYaxis()->SetTitleOffset(1.25);
   hframe31->GetYaxis()->SetTitleFont(42);
   hframe31->GetZaxis()->SetLabelFont(42);
   hframe31->GetZaxis()->SetLabelOffset(0.007);
   hframe31->GetZaxis()->SetLabelSize(0.05);
   hframe31->GetZaxis()->SetTitleSize(0.06);
   hframe31->GetZaxis()->SetTitleFont(42);
   hframe31->Draw(" ");
   
   THStack *thsBackground_grouped_wh3l_13TeV_ossf_mllmin3l = new THStack();
   thsBackground_grouped_wh3l_13TeV_ossf_mllmin3l->SetName("thsBackground_grouped_wh3l_13TeV_ossf_mllmin3l");
   thsBackground_grouped_wh3l_13TeV_ossf_mllmin3l->SetTitle("thsBackground_grouped_wh3l_13TeV_ossf_mllmin3l");
   
   TH1F *thsBackground_grouped_wh3l_13TeV_ossf_mllmin3l_stack_7 = new TH1F("thsBackground_grouped_wh3l_13TeV_ossf_mllmin3l_stack_7","thsBackground_grouped_wh3l_13TeV_ossf_mllmin3l",20,10,200);
   thsBackground_grouped_wh3l_13TeV_ossf_mllmin3l_stack_7->SetMinimum(-0.45898);
   thsBackground_grouped_wh3l_13TeV_ossf_mllmin3l_stack_7->SetMaximum(4.248832);
   thsBackground_grouped_wh3l_13TeV_ossf_mllmin3l_stack_7->SetDirectory(0);
   thsBackground_grouped_wh3l_13TeV_ossf_mllmin3l_stack_7->SetStats(0);
   thsBackground_grouped_wh3l_13TeV_ossf_mllmin3l_stack_7->SetLineStyle(0);
   thsBackground_grouped_wh3l_13TeV_ossf_mllmin3l_stack_7->SetMarkerStyle(20);
   thsBackground_grouped_wh3l_13TeV_ossf_mllmin3l_stack_7->GetXaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_13TeV_ossf_mllmin3l_stack_7->GetXaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_13TeV_ossf_mllmin3l_stack_7->GetXaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_13TeV_ossf_mllmin3l_stack_7->GetXaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_13TeV_ossf_mllmin3l_stack_7->GetXaxis()->SetTitleOffset(0.9);
   thsBackground_grouped_wh3l_13TeV_ossf_mllmin3l_stack_7->GetXaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_ossf_mllmin3l_stack_7->GetYaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_13TeV_ossf_mllmin3l_stack_7->GetYaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_13TeV_ossf_mllmin3l_stack_7->GetYaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_13TeV_ossf_mllmin3l_stack_7->GetYaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_13TeV_ossf_mllmin3l_stack_7->GetYaxis()->SetTitleOffset(1.25);
   thsBackground_grouped_wh3l_13TeV_ossf_mllmin3l_stack_7->GetYaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_ossf_mllmin3l_stack_7->GetZaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_13TeV_ossf_mllmin3l_stack_7->GetZaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_13TeV_ossf_mllmin3l_stack_7->GetZaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_13TeV_ossf_mllmin3l_stack_7->GetZaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_13TeV_ossf_mllmin3l_stack_7->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_ossf_mllmin3l->SetHistogram(thsBackground_grouped_wh3l_13TeV_ossf_mllmin3l_stack_7);
   
   
   TH1D *new_histo_group_Fake_wh3l_13TeV_ossf_mllmin3l32 = new TH1D("new_histo_group_Fake_wh3l_13TeV_ossf_mllmin3l32","histo_Fake",20,10,200);
   new_histo_group_Fake_wh3l_13TeV_ossf_mllmin3l32->SetBinContent(1,0.4355802);
   new_histo_group_Fake_wh3l_13TeV_ossf_mllmin3l32->SetBinContent(2,1.918242);
   new_histo_group_Fake_wh3l_13TeV_ossf_mllmin3l32->SetBinContent(3,0.8138962);
   new_histo_group_Fake_wh3l_13TeV_ossf_mllmin3l32->SetBinContent(4,2.188176);
   new_histo_group_Fake_wh3l_13TeV_ossf_mllmin3l32->SetBinContent(5,1.019978);
   new_histo_group_Fake_wh3l_13TeV_ossf_mllmin3l32->SetBinContent(6,0.3806838);
   new_histo_group_Fake_wh3l_13TeV_ossf_mllmin3l32->SetBinContent(9,-0.03771514);
   new_histo_group_Fake_wh3l_13TeV_ossf_mllmin3l32->SetBinError(1,0.8945602);
   new_histo_group_Fake_wh3l_13TeV_ossf_mllmin3l32->SetBinError(2,0.9027147);
   new_histo_group_Fake_wh3l_13TeV_ossf_mllmin3l32->SetBinError(3,0.5878922);
   new_histo_group_Fake_wh3l_13TeV_ossf_mllmin3l32->SetBinError(4,1.381027);
   new_histo_group_Fake_wh3l_13TeV_ossf_mllmin3l32->SetBinError(5,0.7266675);
   new_histo_group_Fake_wh3l_13TeV_ossf_mllmin3l32->SetBinError(6,0.6637901);
   new_histo_group_Fake_wh3l_13TeV_ossf_mllmin3l32->SetBinError(9,0.03771514);
   new_histo_group_Fake_wh3l_13TeV_ossf_mllmin3l32->SetEntries(81);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_13TeV_ossf_mllmin3l32->SetFillColor(ci);
   new_histo_group_Fake_wh3l_13TeV_ossf_mllmin3l32->SetFillStyle(3001);

   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_13TeV_ossf_mllmin3l32->SetLineColor(ci);
   new_histo_group_Fake_wh3l_13TeV_ossf_mllmin3l32->GetXaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_13TeV_ossf_mllmin3l32->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_13TeV_ossf_mllmin3l32->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_13TeV_ossf_mllmin3l32->GetXaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_13TeV_ossf_mllmin3l32->GetYaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_13TeV_ossf_mllmin3l32->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_13TeV_ossf_mllmin3l32->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_13TeV_ossf_mllmin3l32->GetYaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_13TeV_ossf_mllmin3l32->GetZaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_13TeV_ossf_mllmin3l32->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_13TeV_ossf_mllmin3l32->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_13TeV_ossf_mllmin3l32->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_ossf_mllmin3l->Add(new_histo_group_Fake_wh3l_13TeV_ossf_mllmin3l,"");
   
   TH1D *new_histo_group_WW_wh3l_13TeV_ossf_mllmin3l33 = new TH1D("new_histo_group_WW_wh3l_13TeV_ossf_mllmin3l33","histo_WW",20,10,200);
   new_histo_group_WW_wh3l_13TeV_ossf_mllmin3l33->SetBinContent(1,0.01530373);
   new_histo_group_WW_wh3l_13TeV_ossf_mllmin3l33->SetBinContent(4,0.0285913);
   new_histo_group_WW_wh3l_13TeV_ossf_mllmin3l33->SetBinContent(6,0.01447441);
   new_histo_group_WW_wh3l_13TeV_ossf_mllmin3l33->SetBinContent(10,0.0142084);
   new_histo_group_WW_wh3l_13TeV_ossf_mllmin3l33->SetBinError(1,0.01530373);
   new_histo_group_WW_wh3l_13TeV_ossf_mllmin3l33->SetBinError(4,0.02093881);
   new_histo_group_WW_wh3l_13TeV_ossf_mllmin3l33->SetBinError(6,0.01447441);
   new_histo_group_WW_wh3l_13TeV_ossf_mllmin3l33->SetBinError(10,0.0142084);
   new_histo_group_WW_wh3l_13TeV_ossf_mllmin3l33->SetEntries(5);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_13TeV_ossf_mllmin3l33->SetFillColor(ci);
   new_histo_group_WW_wh3l_13TeV_ossf_mllmin3l33->SetFillStyle(3001);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_13TeV_ossf_mllmin3l33->SetLineColor(ci);
   new_histo_group_WW_wh3l_13TeV_ossf_mllmin3l33->GetXaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_13TeV_ossf_mllmin3l33->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_13TeV_ossf_mllmin3l33->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_13TeV_ossf_mllmin3l33->GetXaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_13TeV_ossf_mllmin3l33->GetYaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_13TeV_ossf_mllmin3l33->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_13TeV_ossf_mllmin3l33->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_13TeV_ossf_mllmin3l33->GetYaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_13TeV_ossf_mllmin3l33->GetZaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_13TeV_ossf_mllmin3l33->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_13TeV_ossf_mllmin3l33->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_13TeV_ossf_mllmin3l33->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_ossf_mllmin3l->Add(new_histo_group_WW_wh3l_13TeV_ossf_mllmin3l,"");
   
   TH1D *new_histo_group_VVV_wh3l_13TeV_ossf_mllmin3l34 = new TH1D("new_histo_group_VVV_wh3l_13TeV_ossf_mllmin3l34","histo_VVV",20,10,200);
   new_histo_group_VVV_wh3l_13TeV_ossf_mllmin3l34->SetBinContent(1,0.01667554);
   new_histo_group_VVV_wh3l_13TeV_ossf_mllmin3l34->SetBinContent(2,0.0378494);
   new_histo_group_VVV_wh3l_13TeV_ossf_mllmin3l34->SetBinContent(3,0.02653573);
   new_histo_group_VVV_wh3l_13TeV_ossf_mllmin3l34->SetBinContent(4,0.04284612);
   new_histo_group_VVV_wh3l_13TeV_ossf_mllmin3l34->SetBinContent(5,0.04721177);
   new_histo_group_VVV_wh3l_13TeV_ossf_mllmin3l34->SetBinContent(6,0.02892814);
   new_histo_group_VVV_wh3l_13TeV_ossf_mllmin3l34->SetBinContent(7,0.00863835);
   new_histo_group_VVV_wh3l_13TeV_ossf_mllmin3l34->SetBinContent(8,0.008017647);
   new_histo_group_VVV_wh3l_13TeV_ossf_mllmin3l34->SetBinContent(9,0.003153314);
   new_histo_group_VVV_wh3l_13TeV_ossf_mllmin3l34->SetBinContent(10,0.003276571);
   new_histo_group_VVV_wh3l_13TeV_ossf_mllmin3l34->SetBinError(1,0.006088084);
   new_histo_group_VVV_wh3l_13TeV_ossf_mllmin3l34->SetBinError(2,0.01016229);
   new_histo_group_VVV_wh3l_13TeV_ossf_mllmin3l34->SetBinError(3,0.007780621);
   new_histo_group_VVV_wh3l_13TeV_ossf_mllmin3l34->SetBinError(4,0.01073823);
   new_histo_group_VVV_wh3l_13TeV_ossf_mllmin3l34->SetBinError(5,0.01113153);
   new_histo_group_VVV_wh3l_13TeV_ossf_mllmin3l34->SetBinError(6,0.008922112);
   new_histo_group_VVV_wh3l_13TeV_ossf_mllmin3l34->SetBinError(7,0.004455032);
   new_histo_group_VVV_wh3l_13TeV_ossf_mllmin3l34->SetBinError(8,0.004027402);
   new_histo_group_VVV_wh3l_13TeV_ossf_mllmin3l34->SetBinError(9,0.002187236);
   new_histo_group_VVV_wh3l_13TeV_ossf_mllmin3l34->SetBinError(10,0.002712723);
   new_histo_group_VVV_wh3l_13TeV_ossf_mllmin3l34->SetEntries(127);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_13TeV_ossf_mllmin3l34->SetFillColor(ci);
   new_histo_group_VVV_wh3l_13TeV_ossf_mllmin3l34->SetFillStyle(3001);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_13TeV_ossf_mllmin3l34->SetLineColor(ci);
   new_histo_group_VVV_wh3l_13TeV_ossf_mllmin3l34->GetXaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_13TeV_ossf_mllmin3l34->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_13TeV_ossf_mllmin3l34->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_13TeV_ossf_mllmin3l34->GetXaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_13TeV_ossf_mllmin3l34->GetYaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_13TeV_ossf_mllmin3l34->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_13TeV_ossf_mllmin3l34->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_13TeV_ossf_mllmin3l34->GetYaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_13TeV_ossf_mllmin3l34->GetZaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_13TeV_ossf_mllmin3l34->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_13TeV_ossf_mllmin3l34->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_13TeV_ossf_mllmin3l34->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_ossf_mllmin3l->Add(new_histo_group_VVV_wh3l_13TeV_ossf_mllmin3l,"");
   
   TH1D *new_histo_group_Vg_wh3l_13TeV_ossf_mllmin3l35 = new TH1D("new_histo_group_Vg_wh3l_13TeV_ossf_mllmin3l35","histo_Vg",20,10,200);
   new_histo_group_Vg_wh3l_13TeV_ossf_mllmin3l35->SetBinContent(1,0.3820383);
   new_histo_group_Vg_wh3l_13TeV_ossf_mllmin3l35->SetBinContent(2,0.3075112);
   new_histo_group_Vg_wh3l_13TeV_ossf_mllmin3l35->SetBinContent(3,0.4384879);
   new_histo_group_Vg_wh3l_13TeV_ossf_mllmin3l35->SetBinContent(4,0.4695703);
   new_histo_group_Vg_wh3l_13TeV_ossf_mllmin3l35->SetBinContent(5,0.4647019);
   new_histo_group_Vg_wh3l_13TeV_ossf_mllmin3l35->SetBinContent(6,0.5858595);
   new_histo_group_Vg_wh3l_13TeV_ossf_mllmin3l35->SetBinError(1,0.1831067);
   new_histo_group_Vg_wh3l_13TeV_ossf_mllmin3l35->SetBinError(2,0.2412625);
   new_histo_group_Vg_wh3l_13TeV_ossf_mllmin3l35->SetBinError(3,0.2109827);
   new_histo_group_Vg_wh3l_13TeV_ossf_mllmin3l35->SetBinError(4,0.2707473);
   new_histo_group_Vg_wh3l_13TeV_ossf_mllmin3l35->SetBinError(5,0.2532026);
   new_histo_group_Vg_wh3l_13TeV_ossf_mllmin3l35->SetBinError(6,0.2264765);
   new_histo_group_Vg_wh3l_13TeV_ossf_mllmin3l35->SetEntries(42);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_13TeV_ossf_mllmin3l35->SetFillColor(ci);
   new_histo_group_Vg_wh3l_13TeV_ossf_mllmin3l35->SetFillStyle(3001);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_13TeV_ossf_mllmin3l35->SetLineColor(ci);
   new_histo_group_Vg_wh3l_13TeV_ossf_mllmin3l35->GetXaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_13TeV_ossf_mllmin3l35->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_13TeV_ossf_mllmin3l35->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_13TeV_ossf_mllmin3l35->GetXaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_13TeV_ossf_mllmin3l35->GetYaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_13TeV_ossf_mllmin3l35->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_13TeV_ossf_mllmin3l35->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_13TeV_ossf_mllmin3l35->GetYaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_13TeV_ossf_mllmin3l35->GetZaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_13TeV_ossf_mllmin3l35->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_13TeV_ossf_mllmin3l35->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_13TeV_ossf_mllmin3l35->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_ossf_mllmin3l->Add(new_histo_group_Vg_wh3l_13TeV_ossf_mllmin3l,"");
   
   TH1D *new_histo_group_ZZ_wh3l_13TeV_ossf_mllmin3l36 = new TH1D("new_histo_group_ZZ_wh3l_13TeV_ossf_mllmin3l36","histo_ZZ",20,10,200);
   new_histo_group_ZZ_wh3l_13TeV_ossf_mllmin3l36->SetBinContent(1,0.1184806);
   new_histo_group_ZZ_wh3l_13TeV_ossf_mllmin3l36->SetBinContent(2,0.0779526);
   new_histo_group_ZZ_wh3l_13TeV_ossf_mllmin3l36->SetBinContent(3,0.05496571);
   new_histo_group_ZZ_wh3l_13TeV_ossf_mllmin3l36->SetBinContent(4,0.05331504);
   new_histo_group_ZZ_wh3l_13TeV_ossf_mllmin3l36->SetBinContent(5,0.07486387);
   new_histo_group_ZZ_wh3l_13TeV_ossf_mllmin3l36->SetBinContent(6,0.09445183);
   new_histo_group_ZZ_wh3l_13TeV_ossf_mllmin3l36->SetBinContent(7,0.02856258);
   new_histo_group_ZZ_wh3l_13TeV_ossf_mllmin3l36->SetBinContent(9,0.04527812);
   new_histo_group_ZZ_wh3l_13TeV_ossf_mllmin3l36->SetBinError(1,0.06857912);
   new_histo_group_ZZ_wh3l_13TeV_ossf_mllmin3l36->SetBinError(2,0.0576159);
   new_histo_group_ZZ_wh3l_13TeV_ossf_mllmin3l36->SetBinError(3,0.03889657);
   new_histo_group_ZZ_wh3l_13TeV_ossf_mllmin3l36->SetBinError(4,0.04178168);
   new_histo_group_ZZ_wh3l_13TeV_ossf_mllmin3l36->SetBinError(5,0.05403712);
   new_histo_group_ZZ_wh3l_13TeV_ossf_mllmin3l36->SetBinError(6,0.06701456);
   new_histo_group_ZZ_wh3l_13TeV_ossf_mllmin3l36->SetBinError(7,0.02856258);
   new_histo_group_ZZ_wh3l_13TeV_ossf_mllmin3l36->SetBinError(9,0.04527812);
   new_histo_group_ZZ_wh3l_13TeV_ossf_mllmin3l36->SetEntries(16);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_13TeV_ossf_mllmin3l36->SetFillColor(ci);
   new_histo_group_ZZ_wh3l_13TeV_ossf_mllmin3l36->SetFillStyle(3001);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_13TeV_ossf_mllmin3l36->SetLineColor(ci);
   new_histo_group_ZZ_wh3l_13TeV_ossf_mllmin3l36->GetXaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_13TeV_ossf_mllmin3l36->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_13TeV_ossf_mllmin3l36->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_13TeV_ossf_mllmin3l36->GetXaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_13TeV_ossf_mllmin3l36->GetYaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_13TeV_ossf_mllmin3l36->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_13TeV_ossf_mllmin3l36->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_13TeV_ossf_mllmin3l36->GetYaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_13TeV_ossf_mllmin3l36->GetZaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_13TeV_ossf_mllmin3l36->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_13TeV_ossf_mllmin3l36->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_13TeV_ossf_mllmin3l36->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_ossf_mllmin3l->Add(new_histo_group_ZZ_wh3l_13TeV_ossf_mllmin3l,"");
   
   TH1D *new_histo_group_WZ_wh3l_13TeV_ossf_mllmin3l37 = new TH1D("new_histo_group_WZ_wh3l_13TeV_ossf_mllmin3l37","histo_WZ",20,10,200);
   new_histo_group_WZ_wh3l_13TeV_ossf_mllmin3l37->SetBinContent(1,1.146046);
   new_histo_group_WZ_wh3l_13TeV_ossf_mllmin3l37->SetBinContent(2,1.32871);
   new_histo_group_WZ_wh3l_13TeV_ossf_mllmin3l37->SetBinContent(3,1.437027);
   new_histo_group_WZ_wh3l_13TeV_ossf_mllmin3l37->SetBinContent(4,1.148833);
   new_histo_group_WZ_wh3l_13TeV_ossf_mllmin3l37->SetBinContent(5,0.7383369);
   new_histo_group_WZ_wh3l_13TeV_ossf_mllmin3l37->SetBinContent(6,0.7150599);
   new_histo_group_WZ_wh3l_13TeV_ossf_mllmin3l37->SetBinContent(7,0.1409531);
   new_histo_group_WZ_wh3l_13TeV_ossf_mllmin3l37->SetBinContent(8,0.1103344);
   new_histo_group_WZ_wh3l_13TeV_ossf_mllmin3l37->SetBinContent(9,0.08459242);
   new_histo_group_WZ_wh3l_13TeV_ossf_mllmin3l37->SetBinContent(10,0.07048525);
   new_histo_group_WZ_wh3l_13TeV_ossf_mllmin3l37->SetBinError(1,0.07870379);
   new_histo_group_WZ_wh3l_13TeV_ossf_mllmin3l37->SetBinError(2,0.08484749);
   new_histo_group_WZ_wh3l_13TeV_ossf_mllmin3l37->SetBinError(3,0.08866657);
   new_histo_group_WZ_wh3l_13TeV_ossf_mllmin3l37->SetBinError(4,0.0793592);
   new_histo_group_WZ_wh3l_13TeV_ossf_mllmin3l37->SetBinError(5,0.06326804);
   new_histo_group_WZ_wh3l_13TeV_ossf_mllmin3l37->SetBinError(6,0.06246365);
   new_histo_group_WZ_wh3l_13TeV_ossf_mllmin3l37->SetBinError(7,0.02703843);
   new_histo_group_WZ_wh3l_13TeV_ossf_mllmin3l37->SetBinError(8,0.0242325);
   new_histo_group_WZ_wh3l_13TeV_ossf_mllmin3l37->SetBinError(9,0.02126128);
   new_histo_group_WZ_wh3l_13TeV_ossf_mllmin3l37->SetBinError(10,0.0198639);
   new_histo_group_WZ_wh3l_13TeV_ossf_mllmin3l37->SetEntries(1419);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_13TeV_ossf_mllmin3l37->SetFillColor(ci);
   new_histo_group_WZ_wh3l_13TeV_ossf_mllmin3l37->SetFillStyle(3001);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_13TeV_ossf_mllmin3l37->SetLineColor(ci);
   new_histo_group_WZ_wh3l_13TeV_ossf_mllmin3l37->GetXaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_13TeV_ossf_mllmin3l37->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_13TeV_ossf_mllmin3l37->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_13TeV_ossf_mllmin3l37->GetXaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_13TeV_ossf_mllmin3l37->GetYaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_13TeV_ossf_mllmin3l37->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_13TeV_ossf_mllmin3l37->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_13TeV_ossf_mllmin3l37->GetYaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_13TeV_ossf_mllmin3l37->GetZaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_13TeV_ossf_mllmin3l37->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_13TeV_ossf_mllmin3l37->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_13TeV_ossf_mllmin3l37->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_ossf_mllmin3l->Add(new_histo_group_WZ_wh3l_13TeV_ossf_mllmin3l,"");
   
   TH1D *new_histo_group_Higgs_wh3l_13TeV_ossf_mllmin3l38 = new TH1D("new_histo_group_Higgs_wh3l_13TeV_ossf_mllmin3l38","histo_H_htt",20,10,200);
   new_histo_group_Higgs_wh3l_13TeV_ossf_mllmin3l38->SetBinContent(1,0.07309758);
   new_histo_group_Higgs_wh3l_13TeV_ossf_mllmin3l38->SetBinContent(2,0.1209301);
   new_histo_group_Higgs_wh3l_13TeV_ossf_mllmin3l38->SetBinContent(3,0.1419524);
   new_histo_group_Higgs_wh3l_13TeV_ossf_mllmin3l38->SetBinContent(4,0.1151753);
   new_histo_group_Higgs_wh3l_13TeV_ossf_mllmin3l38->SetBinContent(5,0.08002558);
   new_histo_group_Higgs_wh3l_13TeV_ossf_mllmin3l38->SetBinContent(6,0.03838333);
   new_histo_group_Higgs_wh3l_13TeV_ossf_mllmin3l38->SetBinContent(7,0.007843284);
   new_histo_group_Higgs_wh3l_13TeV_ossf_mllmin3l38->SetBinContent(8,0.001023135);
   new_histo_group_Higgs_wh3l_13TeV_ossf_mllmin3l38->SetBinContent(9,0.0009752383);
   new_histo_group_Higgs_wh3l_13TeV_ossf_mllmin3l38->SetBinError(1,0.009579202);
   new_histo_group_Higgs_wh3l_13TeV_ossf_mllmin3l38->SetBinError(2,0.0127017);
   new_histo_group_Higgs_wh3l_13TeV_ossf_mllmin3l38->SetBinError(3,0.01361821);
   new_histo_group_Higgs_wh3l_13TeV_ossf_mllmin3l38->SetBinError(4,0.01177198);
   new_histo_group_Higgs_wh3l_13TeV_ossf_mllmin3l38->SetBinError(5,0.008620712);
   new_histo_group_Higgs_wh3l_13TeV_ossf_mllmin3l38->SetBinError(6,0.005999596);
   new_histo_group_Higgs_wh3l_13TeV_ossf_mllmin3l38->SetBinError(7,0.003129957);
   new_histo_group_Higgs_wh3l_13TeV_ossf_mllmin3l38->SetBinError(8,0.0004669497);
   new_histo_group_Higgs_wh3l_13TeV_ossf_mllmin3l38->SetBinError(9,0.000539059);
   new_histo_group_Higgs_wh3l_13TeV_ossf_mllmin3l38->SetEntries(915);
   new_histo_group_Higgs_wh3l_13TeV_ossf_mllmin3l38->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_13TeV_ossf_mllmin3l38->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_13TeV_ossf_mllmin3l38->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_13TeV_ossf_mllmin3l38->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_13TeV_ossf_mllmin3l38->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_ossf_mllmin3l38->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_ossf_mllmin3l38->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_13TeV_ossf_mllmin3l38->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_13TeV_ossf_mllmin3l38->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_ossf_mllmin3l38->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_ossf_mllmin3l38->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_13TeV_ossf_mllmin3l38->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_13TeV_ossf_mllmin3l38->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_ossf_mllmin3l38->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_ossf_mllmin3l38->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_ossf_mllmin3l->Add(new_histo_group_Higgs_wh3l_13TeV_ossf_mllmin3l,"");
   thsBackground_grouped_wh3l_13TeV_ossf_mllmin3l->Draw("hist same");
   
   thsSignal_grouped_wh3l_13TeV_ossf_mllmin3l = new THStack();
   thsSignal_grouped_wh3l_13TeV_ossf_mllmin3l->SetName("thsSignal_grouped_wh3l_13TeV_ossf_mllmin3l");
   thsSignal_grouped_wh3l_13TeV_ossf_mllmin3l->SetTitle("thsSignal_grouped_wh3l_13TeV_ossf_mllmin3l");
   
   TH1F *thsSignal_grouped_wh3l_13TeV_ossf_mllmin3l_stack_8 = new TH1F("thsSignal_grouped_wh3l_13TeV_ossf_mllmin3l_stack_8","thsSignal_grouped_wh3l_13TeV_ossf_mllmin3l",20,10,200);
   thsSignal_grouped_wh3l_13TeV_ossf_mllmin3l_stack_8->SetMinimum(0);
   thsSignal_grouped_wh3l_13TeV_ossf_mllmin3l_stack_8->SetMaximum(0.1633492);
   thsSignal_grouped_wh3l_13TeV_ossf_mllmin3l_stack_8->SetDirectory(0);
   thsSignal_grouped_wh3l_13TeV_ossf_mllmin3l_stack_8->SetStats(0);
   thsSignal_grouped_wh3l_13TeV_ossf_mllmin3l_stack_8->SetLineStyle(0);
   thsSignal_grouped_wh3l_13TeV_ossf_mllmin3l_stack_8->SetMarkerStyle(20);
   thsSignal_grouped_wh3l_13TeV_ossf_mllmin3l_stack_8->GetXaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_13TeV_ossf_mllmin3l_stack_8->GetXaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_13TeV_ossf_mllmin3l_stack_8->GetXaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_13TeV_ossf_mllmin3l_stack_8->GetXaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_13TeV_ossf_mllmin3l_stack_8->GetXaxis()->SetTitleOffset(0.9);
   thsSignal_grouped_wh3l_13TeV_ossf_mllmin3l_stack_8->GetXaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_13TeV_ossf_mllmin3l_stack_8->GetYaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_13TeV_ossf_mllmin3l_stack_8->GetYaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_13TeV_ossf_mllmin3l_stack_8->GetYaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_13TeV_ossf_mllmin3l_stack_8->GetYaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_13TeV_ossf_mllmin3l_stack_8->GetYaxis()->SetTitleOffset(1.25);
   thsSignal_grouped_wh3l_13TeV_ossf_mllmin3l_stack_8->GetYaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_13TeV_ossf_mllmin3l_stack_8->GetZaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_13TeV_ossf_mllmin3l_stack_8->GetZaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_13TeV_ossf_mllmin3l_stack_8->GetZaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_13TeV_ossf_mllmin3l_stack_8->GetZaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_13TeV_ossf_mllmin3l_stack_8->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_13TeV_ossf_mllmin3l->SetHistogram(thsSignal_grouped_wh3l_13TeV_ossf_mllmin3l_stack_8);
   
   
   TH1D *new_histo_group_Higgs_wh3l_13TeV_ossf_mllmin3l39 = new TH1D("new_histo_group_Higgs_wh3l_13TeV_ossf_mllmin3l39","histo_H_htt",20,10,200);
   new_histo_group_Higgs_wh3l_13TeV_ossf_mllmin3l39->SetBinContent(1,0.07309758);
   new_histo_group_Higgs_wh3l_13TeV_ossf_mllmin3l39->SetBinContent(2,0.1209301);
   new_histo_group_Higgs_wh3l_13TeV_ossf_mllmin3l39->SetBinContent(3,0.1419524);
   new_histo_group_Higgs_wh3l_13TeV_ossf_mllmin3l39->SetBinContent(4,0.1151753);
   new_histo_group_Higgs_wh3l_13TeV_ossf_mllmin3l39->SetBinContent(5,0.08002558);
   new_histo_group_Higgs_wh3l_13TeV_ossf_mllmin3l39->SetBinContent(6,0.03838333);
   new_histo_group_Higgs_wh3l_13TeV_ossf_mllmin3l39->SetBinContent(7,0.007843284);
   new_histo_group_Higgs_wh3l_13TeV_ossf_mllmin3l39->SetBinContent(8,0.001023135);
   new_histo_group_Higgs_wh3l_13TeV_ossf_mllmin3l39->SetBinContent(9,0.0009752383);
   new_histo_group_Higgs_wh3l_13TeV_ossf_mllmin3l39->SetBinError(1,0.009579202);
   new_histo_group_Higgs_wh3l_13TeV_ossf_mllmin3l39->SetBinError(2,0.0127017);
   new_histo_group_Higgs_wh3l_13TeV_ossf_mllmin3l39->SetBinError(3,0.01361821);
   new_histo_group_Higgs_wh3l_13TeV_ossf_mllmin3l39->SetBinError(4,0.01177198);
   new_histo_group_Higgs_wh3l_13TeV_ossf_mllmin3l39->SetBinError(5,0.008620712);
   new_histo_group_Higgs_wh3l_13TeV_ossf_mllmin3l39->SetBinError(6,0.005999596);
   new_histo_group_Higgs_wh3l_13TeV_ossf_mllmin3l39->SetBinError(7,0.003129957);
   new_histo_group_Higgs_wh3l_13TeV_ossf_mllmin3l39->SetBinError(8,0.0004669497);
   new_histo_group_Higgs_wh3l_13TeV_ossf_mllmin3l39->SetBinError(9,0.000539059);
   new_histo_group_Higgs_wh3l_13TeV_ossf_mllmin3l39->SetEntries(915);
   new_histo_group_Higgs_wh3l_13TeV_ossf_mllmin3l39->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_13TeV_ossf_mllmin3l39->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_13TeV_ossf_mllmin3l39->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_13TeV_ossf_mllmin3l39->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_13TeV_ossf_mllmin3l39->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_ossf_mllmin3l39->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_ossf_mllmin3l39->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_13TeV_ossf_mllmin3l39->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_13TeV_ossf_mllmin3l39->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_ossf_mllmin3l39->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_ossf_mllmin3l39->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_13TeV_ossf_mllmin3l39->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_13TeV_ossf_mllmin3l39->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_ossf_mllmin3l39->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_ossf_mllmin3l39->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_13TeV_ossf_mllmin3l->Add(new_histo_group_Higgs_wh3l_13TeV_ossf_mllmin3l,"");
   thsSignal_grouped_wh3l_13TeV_ossf_mllmin3l->Draw("hist same noclear");
   
   Double_t _fx3007[20] = {
   14.75,
   24.25,
   33.75,
   43.25,
   52.75,
   62.25,
   71.75,
   81.25,
   90.75,
   100.25,
   109.75,
   119.25,
   128.75,
   138.25,
   147.75,
   157.25,
   166.75,
   176.25,
   185.75,
   195.25};
   Double_t _fy3007[20] = {
   2.114124,
   3.670265,
   2.770913,
   3.931332,
   2.345092,
   1.819458,
   0.178154,
   0.118352,
   0.09530871,
   0.08797023,
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
   Double_t _felx3007[20] = {
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75};
   Double_t _fely3007[20] = {
   0.8084955,
   1.463778,
   0.9817538,
   1.961756,
   1.166012,
   0.7732677,
   0.06076661,
   0.0295047,
   0.1073281,
   0.03694137,
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
   Double_t _fehx3007[20] = {
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75};
   Double_t _fehy3007[20] = {
   1.259364,
   1.463717,
   0.981416,
   1.9617,
   1.165964,
   1.052776,
   0.06076669,
   0.02946893,
   0.1073281,
   0.03693845,
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
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(20,_fx3007,_fy3007,_felx3007,_fehx3007,_fely3007,_fehy3007);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(12);
   grae->SetFillStyle(3004);
   grae->SetLineColor(12);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3007 = new TH1F("Graph_Graph3007","",100,0,219);
   Graph_Graph3007->SetMinimum(-0.6025245);
   Graph_Graph3007->SetMaximum(6.483537);
   Graph_Graph3007->SetDirectory(0);
   Graph_Graph3007->SetStats(0);
   Graph_Graph3007->SetLineStyle(0);
   Graph_Graph3007->SetMarkerStyle(20);
   Graph_Graph3007->GetXaxis()->SetLabelFont(42);
   Graph_Graph3007->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3007->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3007->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3007->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3007->GetXaxis()->SetTitleFont(42);
   Graph_Graph3007->GetYaxis()->SetLabelFont(42);
   Graph_Graph3007->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3007->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3007->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3007->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3007->GetYaxis()->SetTitleFont(42);
   Graph_Graph3007->GetZaxis()->SetLabelFont(42);
   Graph_Graph3007->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3007->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3007->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3007->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3007);
   
   grae->Draw("2");
   
   Double_t _fx3008[20] = {
   14.75,
   24.25,
   33.75,
   43.25,
   52.75,
   62.25,
   71.75,
   81.25,
   90.75,
   100.25,
   109.75,
   119.25,
   128.75,
   138.25,
   147.75,
   157.25,
   166.75,
   176.25,
   185.75,
   195.25};
   Double_t _fy3008[20] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t _felx3008[20] = {
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75};
   Double_t _fely3008[20] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t _fehx3008[20] = {
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75,
   4.75};
   Double_t _fehy3008[20] = {
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
   grae = new TGraphAsymmErrors(20,_fx3008,_fy3008,_felx3008,_fehx3008,_fely3008,_fehy3008);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(1);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3008 = new TH1F("Graph_Graph3008","",100,0,219);
   Graph_Graph3008->SetMinimum(0);
   Graph_Graph3008->SetMaximum(1.262698);
   Graph_Graph3008->SetDirectory(0);
   Graph_Graph3008->SetStats(0);
   Graph_Graph3008->SetLineStyle(0);
   Graph_Graph3008->SetMarkerStyle(20);
   Graph_Graph3008->GetXaxis()->SetLabelFont(42);
   Graph_Graph3008->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3008->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3008->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3008->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3008->GetXaxis()->SetTitleFont(42);
   Graph_Graph3008->GetYaxis()->SetLabelFont(42);
   Graph_Graph3008->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3008->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3008->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3008->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3008->GetYaxis()->SetTitleFont(42);
   Graph_Graph3008->GetZaxis()->SetLabelFont(42);
   Graph_Graph3008->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3008->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3008->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3008->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3008);
   
   grae->Draw("p0");
   
   TLegend *leg = new TLegend(0.2,0.7,0.8,0.9,NULL,"brNDC");
   leg->SetTextFont(62);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("new_histo_group_Fake_wh3l_13TeV_ossf_mllmin3l","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_13TeV_ossf_mllmin3l","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_13TeV_ossf_mllmin3l","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_13TeV_ossf_mllmin3l","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_13TeV_ossf_mllmin3l","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_13TeV_ossf_mllmin3l","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_13TeV_ossf_mllmin3l","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_13TeV_ossf_mllmin3l","Data","EPL");
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
   entry=leg->AddEntry("new_histo_group_Fake_wh3l_13TeV_ossf_mllmin3l","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_13TeV_ossf_mllmin3l","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_13TeV_ossf_mllmin3l","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_13TeV_ossf_mllmin3l","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_13TeV_ossf_mllmin3l","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_13TeV_ossf_mllmin3l","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_13TeV_ossf_mllmin3l","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_13TeV_ossf_mllmin3l","Data","EPL");
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
   
   TH1F *hframe_copy40 = new TH1F("hframe_copy40","",1000,10,200);
   hframe_copy40->SetMinimum(0);
   hframe_copy40->SetMaximum(10.11627);
   hframe_copy40->SetDirectory(0);
   hframe_copy40->SetStats(0);
   hframe_copy40->SetLineStyle(0);
   hframe_copy40->SetMarkerStyle(20);
   hframe_copy40->GetXaxis()->SetTitle("min m_{ll} [GeV]");
   hframe_copy40->GetXaxis()->SetNdivisions(506);
   hframe_copy40->GetXaxis()->SetLabelFont(42);
   hframe_copy40->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy40->GetXaxis()->SetLabelSize(0.05);
   hframe_copy40->GetXaxis()->SetTitleSize(0.06);
   hframe_copy40->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy40->GetXaxis()->SetTitleFont(42);
   hframe_copy40->GetYaxis()->SetTitle("Events");
   hframe_copy40->GetYaxis()->SetLabelFont(42);
   hframe_copy40->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy40->GetYaxis()->SetLabelSize(0.05);
   hframe_copy40->GetYaxis()->SetTitleSize(0.06);
   hframe_copy40->GetYaxis()->SetTitleOffset(1.25);
   hframe_copy40->GetYaxis()->SetTitleFont(42);
   hframe_copy40->GetZaxis()->SetLabelFont(42);
   hframe_copy40->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy40->GetZaxis()->SetLabelSize(0.05);
   hframe_copy40->GetZaxis()->SetTitleSize(0.06);
   hframe_copy40->GetZaxis()->SetTitleFont(42);
   hframe_copy40->Draw("sameaxis");
   ccwh3l_13TeV_ossf_mllmin3l->Modified();
   ccwh3l_13TeV_ossf_mllmin3l->cd();
   ccwh3l_13TeV_ossf_mllmin3l->SetSelected(ccwh3l_13TeV_ossf_mllmin3l);
}
