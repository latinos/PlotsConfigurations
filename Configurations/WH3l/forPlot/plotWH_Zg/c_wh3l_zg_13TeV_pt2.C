void c_wh3l_zg_13TeV_pt2()
{
//=========Macro generated from canvas: ccwh3l_zg_13TeV_pt2/cc
//=========  (Sat Jul  2 21:05:43 2016) by ROOT version6.02/13
   TCanvas *ccwh3l_zg_13TeV_pt2 = new TCanvas("ccwh3l_zg_13TeV_pt2", "cc",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   ccwh3l_zg_13TeV_pt2->SetHighLightColor(2);
   ccwh3l_zg_13TeV_pt2->Range(-28,-29.37843,209.5,196.6095);
   ccwh3l_zg_13TeV_pt2->SetFillColor(0);
   ccwh3l_zg_13TeV_pt2->SetBorderMode(0);
   ccwh3l_zg_13TeV_pt2->SetBorderSize(2);
   ccwh3l_zg_13TeV_pt2->SetTickx(1);
   ccwh3l_zg_13TeV_pt2->SetTicky(1);
   ccwh3l_zg_13TeV_pt2->SetLeftMargin(0.16);
   ccwh3l_zg_13TeV_pt2->SetRightMargin(0.04);
   ccwh3l_zg_13TeV_pt2->SetTopMargin(0.05);
   ccwh3l_zg_13TeV_pt2->SetBottomMargin(0.13);
   ccwh3l_zg_13TeV_pt2->SetFrameFillStyle(0);
   ccwh3l_zg_13TeV_pt2->SetFrameBorderMode(0);
   ccwh3l_zg_13TeV_pt2->SetFrameFillStyle(0);
   ccwh3l_zg_13TeV_pt2->SetFrameBorderMode(0);
   
   TH1F *hframe51 = new TH1F("hframe51","",1000,10,200);
   hframe51->SetMinimum(0);
   hframe51->SetMaximum(185.3101);
   hframe51->SetDirectory(0);
   hframe51->SetStats(0);
   hframe51->SetLineStyle(0);
   hframe51->SetMarkerStyle(20);
   hframe51->GetXaxis()->SetTitle("lept2_p_{T} [GeV]");
   hframe51->GetXaxis()->SetNdivisions(506);
   hframe51->GetXaxis()->SetLabelFont(42);
   hframe51->GetXaxis()->SetLabelOffset(0.007);
   hframe51->GetXaxis()->SetLabelSize(0.05);
   hframe51->GetXaxis()->SetTitleSize(0.06);
   hframe51->GetXaxis()->SetTitleOffset(0.9);
   hframe51->GetXaxis()->SetTitleFont(42);
   hframe51->GetYaxis()->SetTitle("Events");
   hframe51->GetYaxis()->SetLabelFont(42);
   hframe51->GetYaxis()->SetLabelOffset(0.007);
   hframe51->GetYaxis()->SetLabelSize(0.05);
   hframe51->GetYaxis()->SetTitleSize(0.06);
   hframe51->GetYaxis()->SetTitleOffset(1.25);
   hframe51->GetYaxis()->SetTitleFont(42);
   hframe51->GetZaxis()->SetLabelFont(42);
   hframe51->GetZaxis()->SetLabelOffset(0.007);
   hframe51->GetZaxis()->SetLabelSize(0.05);
   hframe51->GetZaxis()->SetTitleSize(0.06);
   hframe51->GetZaxis()->SetTitleFont(42);
   hframe51->Draw(" ");
   
   THStack *thsBackground_grouped_wh3l_zg_13TeV_pt2 = new THStack();
   thsBackground_grouped_wh3l_zg_13TeV_pt2->SetName("thsBackground_grouped_wh3l_zg_13TeV_pt2");
   thsBackground_grouped_wh3l_zg_13TeV_pt2->SetTitle("thsBackground_grouped_wh3l_zg_13TeV_pt2");
   
   TH1F *thsBackground_grouped_wh3l_zg_13TeV_pt2_stack_11 = new TH1F("thsBackground_grouped_wh3l_zg_13TeV_pt2_stack_11","thsBackground_grouped_wh3l_zg_13TeV_pt2",25,10,200);
   thsBackground_grouped_wh3l_zg_13TeV_pt2_stack_11->SetMinimum(-0.09376672);
   thsBackground_grouped_wh3l_zg_13TeV_pt2_stack_11->SetMaximum(55.55);
   thsBackground_grouped_wh3l_zg_13TeV_pt2_stack_11->SetDirectory(0);
   thsBackground_grouped_wh3l_zg_13TeV_pt2_stack_11->SetStats(0);
   thsBackground_grouped_wh3l_zg_13TeV_pt2_stack_11->SetLineStyle(0);
   thsBackground_grouped_wh3l_zg_13TeV_pt2_stack_11->SetMarkerStyle(20);
   thsBackground_grouped_wh3l_zg_13TeV_pt2_stack_11->GetXaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_pt2_stack_11->GetXaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_zg_13TeV_pt2_stack_11->GetXaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_zg_13TeV_pt2_stack_11->GetXaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_zg_13TeV_pt2_stack_11->GetXaxis()->SetTitleOffset(0.9);
   thsBackground_grouped_wh3l_zg_13TeV_pt2_stack_11->GetXaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_pt2_stack_11->GetYaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_pt2_stack_11->GetYaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_zg_13TeV_pt2_stack_11->GetYaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_zg_13TeV_pt2_stack_11->GetYaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_zg_13TeV_pt2_stack_11->GetYaxis()->SetTitleOffset(1.25);
   thsBackground_grouped_wh3l_zg_13TeV_pt2_stack_11->GetYaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_pt2_stack_11->GetZaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_pt2_stack_11->GetZaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_zg_13TeV_pt2_stack_11->GetZaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_zg_13TeV_pt2_stack_11->GetZaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_zg_13TeV_pt2_stack_11->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_pt2->SetHistogram(thsBackground_grouped_wh3l_zg_13TeV_pt2_stack_11);
   
   
   TH1D *new_histo_group_Fake_wh3l_zg_13TeV_pt252 = new TH1D("new_histo_group_Fake_wh3l_zg_13TeV_pt252","histo_Fake",25,10,200);
   new_histo_group_Fake_wh3l_zg_13TeV_pt252->SetBinContent(1,0.7910128);
   new_histo_group_Fake_wh3l_zg_13TeV_pt252->SetBinContent(2,7.360365);
   new_histo_group_Fake_wh3l_zg_13TeV_pt252->SetBinContent(3,10.18288);
   new_histo_group_Fake_wh3l_zg_13TeV_pt252->SetBinContent(4,4.888568);
   new_histo_group_Fake_wh3l_zg_13TeV_pt252->SetBinContent(5,0.3579774);
   new_histo_group_Fake_wh3l_zg_13TeV_pt252->SetBinError(1,0.7011956);
   new_histo_group_Fake_wh3l_zg_13TeV_pt252->SetBinError(2,2.61405);
   new_histo_group_Fake_wh3l_zg_13TeV_pt252->SetBinError(3,2.787009);
   new_histo_group_Fake_wh3l_zg_13TeV_pt252->SetBinError(4,1.823267);
   new_histo_group_Fake_wh3l_zg_13TeV_pt252->SetBinError(5,0.2880862);
   new_histo_group_Fake_wh3l_zg_13TeV_pt252->SetEntries(460);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_zg_13TeV_pt252->SetFillColor(ci);
   new_histo_group_Fake_wh3l_zg_13TeV_pt252->SetFillStyle(3001);

   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_zg_13TeV_pt252->SetLineColor(ci);
   new_histo_group_Fake_wh3l_zg_13TeV_pt252->GetXaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_zg_13TeV_pt252->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_zg_13TeV_pt252->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_zg_13TeV_pt252->GetXaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_zg_13TeV_pt252->GetYaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_zg_13TeV_pt252->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_zg_13TeV_pt252->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_zg_13TeV_pt252->GetYaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_zg_13TeV_pt252->GetZaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_zg_13TeV_pt252->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_zg_13TeV_pt252->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_zg_13TeV_pt252->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_pt2->Add(new_histo_group_Fake_wh3l_zg_13TeV_pt2,"");
   
   TH1D *new_histo_group_WW_wh3l_zg_13TeV_pt253 = new TH1D("new_histo_group_WW_wh3l_zg_13TeV_pt253","histo_WW",25,10,200);
   new_histo_group_WW_wh3l_zg_13TeV_pt253->SetBinContent(4,0.009961222);
   new_histo_group_WW_wh3l_zg_13TeV_pt253->SetBinError(4,0.009961222);
   new_histo_group_WW_wh3l_zg_13TeV_pt253->SetEntries(1);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_zg_13TeV_pt253->SetFillColor(ci);
   new_histo_group_WW_wh3l_zg_13TeV_pt253->SetFillStyle(3001);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_zg_13TeV_pt253->SetLineColor(ci);
   new_histo_group_WW_wh3l_zg_13TeV_pt253->GetXaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_zg_13TeV_pt253->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_zg_13TeV_pt253->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_zg_13TeV_pt253->GetXaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_zg_13TeV_pt253->GetYaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_zg_13TeV_pt253->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_zg_13TeV_pt253->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_zg_13TeV_pt253->GetYaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_zg_13TeV_pt253->GetZaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_zg_13TeV_pt253->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_zg_13TeV_pt253->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_zg_13TeV_pt253->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_pt2->Add(new_histo_group_WW_wh3l_zg_13TeV_pt2,"");
   
   TH1D *new_histo_group_VVV_wh3l_zg_13TeV_pt254 = new TH1D("new_histo_group_VVV_wh3l_zg_13TeV_pt254","histo_VVV",25,10,200);
   new_histo_group_VVV_wh3l_zg_13TeV_pt254->SetBinContent(2,0.004218749);
   new_histo_group_VVV_wh3l_zg_13TeV_pt254->SetBinContent(3,0.01026428);
   new_histo_group_VVV_wh3l_zg_13TeV_pt254->SetBinError(2,0.003558209);
   new_histo_group_VVV_wh3l_zg_13TeV_pt254->SetBinError(3,0.005153921);
   new_histo_group_VVV_wh3l_zg_13TeV_pt254->SetEntries(7);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_zg_13TeV_pt254->SetFillColor(ci);
   new_histo_group_VVV_wh3l_zg_13TeV_pt254->SetFillStyle(3001);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_zg_13TeV_pt254->SetLineColor(ci);
   new_histo_group_VVV_wh3l_zg_13TeV_pt254->GetXaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_zg_13TeV_pt254->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_zg_13TeV_pt254->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_zg_13TeV_pt254->GetXaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_zg_13TeV_pt254->GetYaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_zg_13TeV_pt254->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_zg_13TeV_pt254->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_zg_13TeV_pt254->GetYaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_zg_13TeV_pt254->GetZaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_zg_13TeV_pt254->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_zg_13TeV_pt254->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_zg_13TeV_pt254->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_pt2->Add(new_histo_group_VVV_wh3l_zg_13TeV_pt2,"");
   
   TH1D *new_histo_group_Vg_wh3l_zg_13TeV_pt255 = new TH1D("new_histo_group_Vg_wh3l_zg_13TeV_pt255","histo_Vg",25,10,200);
   new_histo_group_Vg_wh3l_zg_13TeV_pt255->SetBinContent(1,4.400265);
   new_histo_group_Vg_wh3l_zg_13TeV_pt255->SetBinContent(2,40.62695);
   new_histo_group_Vg_wh3l_zg_13TeV_pt255->SetBinContent(3,41.86953);
   new_histo_group_Vg_wh3l_zg_13TeV_pt255->SetBinContent(4,16.33122);
   new_histo_group_Vg_wh3l_zg_13TeV_pt255->SetBinContent(5,0.6911122);
   new_histo_group_Vg_wh3l_zg_13TeV_pt255->SetBinContent(6,0.04775747);
   new_histo_group_Vg_wh3l_zg_13TeV_pt255->SetBinError(1,0.8489752);
   new_histo_group_Vg_wh3l_zg_13TeV_pt255->SetBinError(2,2.381971);
   new_histo_group_Vg_wh3l_zg_13TeV_pt255->SetBinError(3,2.445639);
   new_histo_group_Vg_wh3l_zg_13TeV_pt255->SetBinError(4,1.546618);
   new_histo_group_Vg_wh3l_zg_13TeV_pt255->SetBinError(5,0.3297975);
   new_histo_group_Vg_wh3l_zg_13TeV_pt255->SetBinError(6,0.1415242);
   new_histo_group_Vg_wh3l_zg_13TeV_pt255->SetEntries(1376);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_zg_13TeV_pt255->SetFillColor(ci);
   new_histo_group_Vg_wh3l_zg_13TeV_pt255->SetFillStyle(3001);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_zg_13TeV_pt255->SetLineColor(ci);
   new_histo_group_Vg_wh3l_zg_13TeV_pt255->GetXaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_zg_13TeV_pt255->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_zg_13TeV_pt255->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_zg_13TeV_pt255->GetXaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_zg_13TeV_pt255->GetYaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_zg_13TeV_pt255->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_zg_13TeV_pt255->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_zg_13TeV_pt255->GetYaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_zg_13TeV_pt255->GetZaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_zg_13TeV_pt255->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_zg_13TeV_pt255->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_zg_13TeV_pt255->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_pt2->Add(new_histo_group_Vg_wh3l_zg_13TeV_pt2,"");
   
   TH1D *new_histo_group_ZZ_wh3l_zg_13TeV_pt256 = new TH1D("new_histo_group_ZZ_wh3l_zg_13TeV_pt256","histo_ZZ",25,10,200);
   new_histo_group_ZZ_wh3l_zg_13TeV_pt256->SetBinContent(2,0.2954788);
   new_histo_group_ZZ_wh3l_zg_13TeV_pt256->SetBinContent(3,0.2217282);
   new_histo_group_ZZ_wh3l_zg_13TeV_pt256->SetBinContent(4,0.0761614);
   new_histo_group_ZZ_wh3l_zg_13TeV_pt256->SetBinError(2,0.1062902);
   new_histo_group_ZZ_wh3l_zg_13TeV_pt256->SetBinError(3,0.09870092);
   new_histo_group_ZZ_wh3l_zg_13TeV_pt256->SetBinError(4,0.05442959);
   new_histo_group_ZZ_wh3l_zg_13TeV_pt256->SetEntries(16);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_zg_13TeV_pt256->SetFillColor(ci);
   new_histo_group_ZZ_wh3l_zg_13TeV_pt256->SetFillStyle(3001);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_zg_13TeV_pt256->SetLineColor(ci);
   new_histo_group_ZZ_wh3l_zg_13TeV_pt256->GetXaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_zg_13TeV_pt256->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_zg_13TeV_pt256->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_zg_13TeV_pt256->GetXaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_zg_13TeV_pt256->GetYaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_zg_13TeV_pt256->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_zg_13TeV_pt256->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_zg_13TeV_pt256->GetYaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_zg_13TeV_pt256->GetZaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_zg_13TeV_pt256->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_zg_13TeV_pt256->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_zg_13TeV_pt256->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_pt2->Add(new_histo_group_ZZ_wh3l_zg_13TeV_pt2,"");
   
   TH1D *new_histo_group_WZ_wh3l_zg_13TeV_pt257 = new TH1D("new_histo_group_WZ_wh3l_zg_13TeV_pt257","histo_WZ",25,10,200);
   new_histo_group_WZ_wh3l_zg_13TeV_pt257->SetBinContent(1,0.1322435);
   new_histo_group_WZ_wh3l_zg_13TeV_pt257->SetBinContent(2,0.9268316);
   new_histo_group_WZ_wh3l_zg_13TeV_pt257->SetBinContent(3,0.5848124);
   new_histo_group_WZ_wh3l_zg_13TeV_pt257->SetBinContent(4,0.2046216);
   new_histo_group_WZ_wh3l_zg_13TeV_pt257->SetBinContent(5,0.03001505);
   new_histo_group_WZ_wh3l_zg_13TeV_pt257->SetBinError(1,0.0267455);
   new_histo_group_WZ_wh3l_zg_13TeV_pt257->SetBinError(2,0.07168591);
   new_histo_group_WZ_wh3l_zg_13TeV_pt257->SetBinError(3,0.05612615);
   new_histo_group_WZ_wh3l_zg_13TeV_pt257->SetBinError(4,0.03260299);
   new_histo_group_WZ_wh3l_zg_13TeV_pt257->SetBinError(5,0.01255257);
   new_histo_group_WZ_wh3l_zg_13TeV_pt257->SetEntries(376);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_zg_13TeV_pt257->SetFillColor(ci);
   new_histo_group_WZ_wh3l_zg_13TeV_pt257->SetFillStyle(3001);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_zg_13TeV_pt257->SetLineColor(ci);
   new_histo_group_WZ_wh3l_zg_13TeV_pt257->GetXaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_zg_13TeV_pt257->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_zg_13TeV_pt257->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_zg_13TeV_pt257->GetXaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_zg_13TeV_pt257->GetYaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_zg_13TeV_pt257->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_zg_13TeV_pt257->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_zg_13TeV_pt257->GetYaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_zg_13TeV_pt257->GetZaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_zg_13TeV_pt257->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_zg_13TeV_pt257->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_zg_13TeV_pt257->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_pt2->Add(new_histo_group_WZ_wh3l_zg_13TeV_pt2,"");
   
   TH1D *new_histo_group_Higgs_wh3l_zg_13TeV_pt258 = new TH1D("new_histo_group_Higgs_wh3l_zg_13TeV_pt258","histo_H_htt",25,10,200);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt258->SetBinContent(1,0.003295073);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt258->SetBinContent(2,0.03279834);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt258->SetBinContent(3,0.03554916);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt258->SetBinContent(4,0.01371769);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt258->SetBinContent(5,0.002420074);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt258->SetBinContent(6,0.0009963103);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt258->SetBinError(1,0.00159901);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt258->SetBinError(2,0.005812903);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt258->SetBinError(3,0.00611322);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt258->SetBinError(4,0.004168475);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt258->SetBinError(5,0.001734508);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt258->SetBinError(6,0.0009963103);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt258->SetEntries(180);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt258->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_zg_13TeV_pt258->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt258->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt258->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt258->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt258->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt258->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt258->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt258->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt258->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt258->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt258->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt258->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt258->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt258->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_pt2->Add(new_histo_group_Higgs_wh3l_zg_13TeV_pt2,"");
   thsBackground_grouped_wh3l_zg_13TeV_pt2->Draw("hist same");
   
   thsSignal_grouped_wh3l_zg_13TeV_pt2 = new THStack();
   thsSignal_grouped_wh3l_zg_13TeV_pt2->SetName("thsSignal_grouped_wh3l_zg_13TeV_pt2");
   thsSignal_grouped_wh3l_zg_13TeV_pt2->SetTitle("thsSignal_grouped_wh3l_zg_13TeV_pt2");
   
   TH1F *thsSignal_grouped_wh3l_zg_13TeV_pt2_stack_12 = new TH1F("thsSignal_grouped_wh3l_zg_13TeV_pt2_stack_12","thsSignal_grouped_wh3l_zg_13TeV_pt2",25,10,200);
   thsSignal_grouped_wh3l_zg_13TeV_pt2_stack_12->SetMinimum(0);
   thsSignal_grouped_wh3l_zg_13TeV_pt2_stack_12->SetMaximum(0.0437455);
   thsSignal_grouped_wh3l_zg_13TeV_pt2_stack_12->SetDirectory(0);
   thsSignal_grouped_wh3l_zg_13TeV_pt2_stack_12->SetStats(0);
   thsSignal_grouped_wh3l_zg_13TeV_pt2_stack_12->SetLineStyle(0);
   thsSignal_grouped_wh3l_zg_13TeV_pt2_stack_12->SetMarkerStyle(20);
   thsSignal_grouped_wh3l_zg_13TeV_pt2_stack_12->GetXaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_zg_13TeV_pt2_stack_12->GetXaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_zg_13TeV_pt2_stack_12->GetXaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_zg_13TeV_pt2_stack_12->GetXaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_zg_13TeV_pt2_stack_12->GetXaxis()->SetTitleOffset(0.9);
   thsSignal_grouped_wh3l_zg_13TeV_pt2_stack_12->GetXaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_zg_13TeV_pt2_stack_12->GetYaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_zg_13TeV_pt2_stack_12->GetYaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_zg_13TeV_pt2_stack_12->GetYaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_zg_13TeV_pt2_stack_12->GetYaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_zg_13TeV_pt2_stack_12->GetYaxis()->SetTitleOffset(1.25);
   thsSignal_grouped_wh3l_zg_13TeV_pt2_stack_12->GetYaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_zg_13TeV_pt2_stack_12->GetZaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_zg_13TeV_pt2_stack_12->GetZaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_zg_13TeV_pt2_stack_12->GetZaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_zg_13TeV_pt2_stack_12->GetZaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_zg_13TeV_pt2_stack_12->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_zg_13TeV_pt2->SetHistogram(thsSignal_grouped_wh3l_zg_13TeV_pt2_stack_12);
   
   
   TH1D *new_histo_group_Higgs_wh3l_zg_13TeV_pt259 = new TH1D("new_histo_group_Higgs_wh3l_zg_13TeV_pt259","histo_H_htt",25,10,200);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt259->SetBinContent(1,0.003295073);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt259->SetBinContent(2,0.03279834);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt259->SetBinContent(3,0.03554916);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt259->SetBinContent(4,0.01371769);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt259->SetBinContent(5,0.002420074);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt259->SetBinContent(6,0.0009963103);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt259->SetBinError(1,0.00159901);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt259->SetBinError(2,0.005812903);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt259->SetBinError(3,0.00611322);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt259->SetBinError(4,0.004168475);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt259->SetBinError(5,0.001734508);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt259->SetBinError(6,0.0009963103);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt259->SetEntries(180);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt259->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_zg_13TeV_pt259->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt259->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt259->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt259->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt259->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt259->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt259->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt259->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt259->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt259->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt259->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt259->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt259->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt259->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_zg_13TeV_pt2->Add(new_histo_group_Higgs_wh3l_zg_13TeV_pt2,"");
   thsSignal_grouped_wh3l_zg_13TeV_pt2->Draw("hist same noclear");
   
   Double_t _fx3011[25] = {
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
   Double_t _fy3011[25] = {
   5.323522,
   49.21384,
   52.86921,
   21.51053,
   1.079105,
   0.04775747,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t _felx3011[25] = {
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
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
   Double_t _fely3011[25] = {
   1.632973,
   6.157628,
   6.691181,
   3.943265,
   0.6435018,
   0.04781725,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t _fehx3011[25] = {
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
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
   Double_t _fehy3011[25] = {
   1.634706,
   6.142791,
   6.685001,
   3.939697,
   0.6434937,
   0.1415447,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(25,_fx3011,_fy3011,_felx3011,_fehx3011,_fely3011,_fehy3011);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(12);
   grae->SetFillStyle(3004);
   grae->SetLineColor(12);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3011 = new TH1F("Graph_Graph3011","",100,0,219);
   Graph_Graph3011->SetMinimum(-5.955487);
   Graph_Graph3011->SetMaximum(65.50964);
   Graph_Graph3011->SetDirectory(0);
   Graph_Graph3011->SetStats(0);
   Graph_Graph3011->SetLineStyle(0);
   Graph_Graph3011->SetMarkerStyle(20);
   Graph_Graph3011->GetXaxis()->SetLabelFont(42);
   Graph_Graph3011->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3011->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3011->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3011->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3011->GetXaxis()->SetTitleFont(42);
   Graph_Graph3011->GetYaxis()->SetLabelFont(42);
   Graph_Graph3011->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3011->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3011->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3011->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3011->GetYaxis()->SetTitleFont(42);
   Graph_Graph3011->GetZaxis()->SetLabelFont(42);
   Graph_Graph3011->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3011->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3011->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3011->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3011);
   
   grae->Draw("2");
   
   Double_t _fx3012[25] = {
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
   Double_t _fy3012[25] = {
   4,
   48,
   66,
   15,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t _felx3012[25] = {
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
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
   Double_t _fely3012[25] = {
   1.914367,
   6.904115,
   8.103564,
   3.829449,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t _fehx3012[25] = {
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
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
   Double_t _fehy3012[25] = {
   3.162815,
   7.976496,
   9.165286,
   4.958839,
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
   grae = new TGraphAsymmErrors(25,_fx3012,_fy3012,_felx3012,_fehx3012,_fely3012,_fehy3012);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(1);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3012 = new TH1F("Graph_Graph3012","",100,0,219);
   Graph_Graph3012->SetMinimum(0);
   Graph_Graph3012->SetMaximum(82.68181);
   Graph_Graph3012->SetDirectory(0);
   Graph_Graph3012->SetStats(0);
   Graph_Graph3012->SetLineStyle(0);
   Graph_Graph3012->SetMarkerStyle(20);
   Graph_Graph3012->GetXaxis()->SetLabelFont(42);
   Graph_Graph3012->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3012->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3012->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3012->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3012->GetXaxis()->SetTitleFont(42);
   Graph_Graph3012->GetYaxis()->SetLabelFont(42);
   Graph_Graph3012->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3012->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3012->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3012->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3012->GetYaxis()->SetTitleFont(42);
   Graph_Graph3012->GetZaxis()->SetLabelFont(42);
   Graph_Graph3012->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3012->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3012->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3012->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3012);
   
   grae->Draw("p0");
   
   TLegend *leg = new TLegend(0.2,0.7,0.8,0.9,NULL,"brNDC");
   leg->SetTextFont(62);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("new_histo_group_Fake_wh3l_zg_13TeV_pt2","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_zg_13TeV_pt2","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_zg_13TeV_pt2","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_zg_13TeV_pt2","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_zg_13TeV_pt2","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_zg_13TeV_pt2","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_zg_13TeV_pt2","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_zg_13TeV_pt2","Data","EPL");
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
   entry=leg->AddEntry("new_histo_group_Fake_wh3l_zg_13TeV_pt2","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_zg_13TeV_pt2","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_zg_13TeV_pt2","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_zg_13TeV_pt2","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_zg_13TeV_pt2","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_zg_13TeV_pt2","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_zg_13TeV_pt2","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_zg_13TeV_pt2","Data","EPL");
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
   
   TH1F *hframe_copy60 = new TH1F("hframe_copy60","",1000,10,200);
   hframe_copy60->SetMinimum(0);
   hframe_copy60->SetMaximum(185.3101);
   hframe_copy60->SetDirectory(0);
   hframe_copy60->SetStats(0);
   hframe_copy60->SetLineStyle(0);
   hframe_copy60->SetMarkerStyle(20);
   hframe_copy60->GetXaxis()->SetTitle("lept2_p_{T} [GeV]");
   hframe_copy60->GetXaxis()->SetNdivisions(506);
   hframe_copy60->GetXaxis()->SetLabelFont(42);
   hframe_copy60->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy60->GetXaxis()->SetLabelSize(0.05);
   hframe_copy60->GetXaxis()->SetTitleSize(0.06);
   hframe_copy60->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy60->GetXaxis()->SetTitleFont(42);
   hframe_copy60->GetYaxis()->SetTitle("Events");
   hframe_copy60->GetYaxis()->SetLabelFont(42);
   hframe_copy60->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy60->GetYaxis()->SetLabelSize(0.05);
   hframe_copy60->GetYaxis()->SetTitleSize(0.06);
   hframe_copy60->GetYaxis()->SetTitleOffset(1.25);
   hframe_copy60->GetYaxis()->SetTitleFont(42);
   hframe_copy60->GetZaxis()->SetLabelFont(42);
   hframe_copy60->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy60->GetZaxis()->SetLabelSize(0.05);
   hframe_copy60->GetZaxis()->SetTitleSize(0.06);
   hframe_copy60->GetZaxis()->SetTitleFont(42);
   hframe_copy60->Draw("sameaxis");
   ccwh3l_zg_13TeV_pt2->Modified();
   ccwh3l_zg_13TeV_pt2->cd();
   ccwh3l_zg_13TeV_pt2->SetSelected(ccwh3l_zg_13TeV_pt2);
}
