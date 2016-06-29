void c_wh3l_zg_13TeV_pt2()
{
//=========Macro generated from canvas: ccwh3l_zg_13TeV_pt2/cc
//=========  (Tue Jun 28 16:49:17 2016) by ROOT version6.02/13
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
   
   TH1F *hframe273 = new TH1F("hframe273","",1000,10,200);
   hframe273->SetMinimum(0);
   hframe273->SetMaximum(185.3101);
   hframe273->SetDirectory(0);
   hframe273->SetStats(0);
   hframe273->SetLineStyle(0);
   hframe273->SetMarkerStyle(20);
   hframe273->GetXaxis()->SetTitle("lept2_p_{T} [GeV]");
   hframe273->GetXaxis()->SetNdivisions(506);
   hframe273->GetXaxis()->SetLabelFont(42);
   hframe273->GetXaxis()->SetLabelOffset(0.007);
   hframe273->GetXaxis()->SetLabelSize(0.05);
   hframe273->GetXaxis()->SetTitleSize(0.06);
   hframe273->GetXaxis()->SetTitleOffset(0.9);
   hframe273->GetXaxis()->SetTitleFont(42);
   hframe273->GetYaxis()->SetTitle("Events");
   hframe273->GetYaxis()->SetLabelFont(42);
   hframe273->GetYaxis()->SetLabelOffset(0.007);
   hframe273->GetYaxis()->SetLabelSize(0.05);
   hframe273->GetYaxis()->SetTitleSize(0.06);
   hframe273->GetYaxis()->SetTitleOffset(1.25);
   hframe273->GetYaxis()->SetTitleFont(42);
   hframe273->GetZaxis()->SetLabelFont(42);
   hframe273->GetZaxis()->SetLabelOffset(0.007);
   hframe273->GetZaxis()->SetLabelSize(0.05);
   hframe273->GetZaxis()->SetTitleSize(0.06);
   hframe273->GetZaxis()->SetTitleFont(42);
   hframe273->Draw(" ");
   
   THStack *thsBackground_grouped_wh3l_zg_13TeV_pt2 = new THStack();
   thsBackground_grouped_wh3l_zg_13TeV_pt2->SetName("thsBackground_grouped_wh3l_zg_13TeV_pt2");
   thsBackground_grouped_wh3l_zg_13TeV_pt2->SetTitle("thsBackground_grouped_wh3l_zg_13TeV_pt2");
   
   TH1F *thsBackground_grouped_wh3l_zg_13TeV_pt2_stack_35 = new TH1F("thsBackground_grouped_wh3l_zg_13TeV_pt2_stack_35","thsBackground_grouped_wh3l_zg_13TeV_pt2",25,10,200);
   thsBackground_grouped_wh3l_zg_13TeV_pt2_stack_35->SetMinimum(-0.09376672);
   thsBackground_grouped_wh3l_zg_13TeV_pt2_stack_35->SetMaximum(56.2823);
   thsBackground_grouped_wh3l_zg_13TeV_pt2_stack_35->SetDirectory(0);
   thsBackground_grouped_wh3l_zg_13TeV_pt2_stack_35->SetStats(0);
   thsBackground_grouped_wh3l_zg_13TeV_pt2_stack_35->SetLineStyle(0);
   thsBackground_grouped_wh3l_zg_13TeV_pt2_stack_35->SetMarkerStyle(20);
   thsBackground_grouped_wh3l_zg_13TeV_pt2_stack_35->GetXaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_pt2_stack_35->GetXaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_zg_13TeV_pt2_stack_35->GetXaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_zg_13TeV_pt2_stack_35->GetXaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_zg_13TeV_pt2_stack_35->GetXaxis()->SetTitleOffset(0.9);
   thsBackground_grouped_wh3l_zg_13TeV_pt2_stack_35->GetXaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_pt2_stack_35->GetYaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_pt2_stack_35->GetYaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_zg_13TeV_pt2_stack_35->GetYaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_zg_13TeV_pt2_stack_35->GetYaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_zg_13TeV_pt2_stack_35->GetYaxis()->SetTitleOffset(1.25);
   thsBackground_grouped_wh3l_zg_13TeV_pt2_stack_35->GetYaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_pt2_stack_35->GetZaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_pt2_stack_35->GetZaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_zg_13TeV_pt2_stack_35->GetZaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_zg_13TeV_pt2_stack_35->GetZaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_zg_13TeV_pt2_stack_35->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_pt2->SetHistogram(thsBackground_grouped_wh3l_zg_13TeV_pt2_stack_35);
   
   
   TH1D *new_histo_group_Fake_wh3l_zg_13TeV_pt2274 = new TH1D("new_histo_group_Fake_wh3l_zg_13TeV_pt2274","histo_Fake",25,10,200);
   new_histo_group_Fake_wh3l_zg_13TeV_pt2274->SetBinContent(1,0.7910128);
   new_histo_group_Fake_wh3l_zg_13TeV_pt2274->SetBinContent(2,7.360365);
   new_histo_group_Fake_wh3l_zg_13TeV_pt2274->SetBinContent(3,10.75006);
   new_histo_group_Fake_wh3l_zg_13TeV_pt2274->SetBinContent(4,4.888568);
   new_histo_group_Fake_wh3l_zg_13TeV_pt2274->SetBinContent(5,0.3579774);
   new_histo_group_Fake_wh3l_zg_13TeV_pt2274->SetBinError(1,0.7011956);
   new_histo_group_Fake_wh3l_zg_13TeV_pt2274->SetBinError(2,2.61405);
   new_histo_group_Fake_wh3l_zg_13TeV_pt2274->SetBinError(3,2.844136);
   new_histo_group_Fake_wh3l_zg_13TeV_pt2274->SetBinError(4,1.823267);
   new_histo_group_Fake_wh3l_zg_13TeV_pt2274->SetBinError(5,0.2880862);
   new_histo_group_Fake_wh3l_zg_13TeV_pt2274->SetEntries(461);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_zg_13TeV_pt2274->SetFillColor(ci);
   new_histo_group_Fake_wh3l_zg_13TeV_pt2274->SetFillStyle(3001);

   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_zg_13TeV_pt2274->SetLineColor(ci);
   new_histo_group_Fake_wh3l_zg_13TeV_pt2274->GetXaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_zg_13TeV_pt2274->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_zg_13TeV_pt2274->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_zg_13TeV_pt2274->GetXaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_zg_13TeV_pt2274->GetYaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_zg_13TeV_pt2274->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_zg_13TeV_pt2274->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_zg_13TeV_pt2274->GetYaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_zg_13TeV_pt2274->GetZaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_zg_13TeV_pt2274->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_zg_13TeV_pt2274->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_zg_13TeV_pt2274->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_pt2->Add(new_histo_group_Fake_wh3l_zg_13TeV_pt2,"");
   
   TH1D *new_histo_group_WW_wh3l_zg_13TeV_pt2275 = new TH1D("new_histo_group_WW_wh3l_zg_13TeV_pt2275","histo_WW",25,10,200);
   new_histo_group_WW_wh3l_zg_13TeV_pt2275->SetBinContent(4,0.009961222);
   new_histo_group_WW_wh3l_zg_13TeV_pt2275->SetBinError(4,0.009961222);
   new_histo_group_WW_wh3l_zg_13TeV_pt2275->SetEntries(1);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_zg_13TeV_pt2275->SetFillColor(ci);
   new_histo_group_WW_wh3l_zg_13TeV_pt2275->SetFillStyle(3001);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_zg_13TeV_pt2275->SetLineColor(ci);
   new_histo_group_WW_wh3l_zg_13TeV_pt2275->GetXaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_zg_13TeV_pt2275->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_zg_13TeV_pt2275->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_zg_13TeV_pt2275->GetXaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_zg_13TeV_pt2275->GetYaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_zg_13TeV_pt2275->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_zg_13TeV_pt2275->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_zg_13TeV_pt2275->GetYaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_zg_13TeV_pt2275->GetZaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_zg_13TeV_pt2275->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_zg_13TeV_pt2275->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_zg_13TeV_pt2275->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_pt2->Add(new_histo_group_WW_wh3l_zg_13TeV_pt2,"");
   
   TH1D *new_histo_group_VVV_wh3l_zg_13TeV_pt2276 = new TH1D("new_histo_group_VVV_wh3l_zg_13TeV_pt2276","histo_VVV",25,10,200);
   new_histo_group_VVV_wh3l_zg_13TeV_pt2276->SetBinContent(2,-0.0006863608);
   new_histo_group_VVV_wh3l_zg_13TeV_pt2276->SetBinError(2,0.0006863608);
   new_histo_group_VVV_wh3l_zg_13TeV_pt2276->SetEntries(1);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_zg_13TeV_pt2276->SetFillColor(ci);
   new_histo_group_VVV_wh3l_zg_13TeV_pt2276->SetFillStyle(3001);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_zg_13TeV_pt2276->SetLineColor(ci);
   new_histo_group_VVV_wh3l_zg_13TeV_pt2276->GetXaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_zg_13TeV_pt2276->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_zg_13TeV_pt2276->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_zg_13TeV_pt2276->GetXaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_zg_13TeV_pt2276->GetYaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_zg_13TeV_pt2276->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_zg_13TeV_pt2276->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_zg_13TeV_pt2276->GetYaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_zg_13TeV_pt2276->GetZaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_zg_13TeV_pt2276->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_zg_13TeV_pt2276->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_zg_13TeV_pt2276->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_pt2->Add(new_histo_group_VVV_wh3l_zg_13TeV_pt2,"");
   
   TH1D *new_histo_group_Vg_wh3l_zg_13TeV_pt2277 = new TH1D("new_histo_group_Vg_wh3l_zg_13TeV_pt2277","histo_Vg",25,10,200);
   new_histo_group_Vg_wh3l_zg_13TeV_pt2277->SetBinContent(1,4.400265);
   new_histo_group_Vg_wh3l_zg_13TeV_pt2277->SetBinContent(2,40.75612);
   new_histo_group_Vg_wh3l_zg_13TeV_pt2277->SetBinContent(3,41.93786);
   new_histo_group_Vg_wh3l_zg_13TeV_pt2277->SetBinContent(4,16.33122);
   new_histo_group_Vg_wh3l_zg_13TeV_pt2277->SetBinContent(5,0.6911122);
   new_histo_group_Vg_wh3l_zg_13TeV_pt2277->SetBinContent(6,0.04775747);
   new_histo_group_Vg_wh3l_zg_13TeV_pt2277->SetBinError(1,0.8489752);
   new_histo_group_Vg_wh3l_zg_13TeV_pt2277->SetBinError(2,2.385471);
   new_histo_group_Vg_wh3l_zg_13TeV_pt2277->SetBinError(3,2.446593);
   new_histo_group_Vg_wh3l_zg_13TeV_pt2277->SetBinError(4,1.546618);
   new_histo_group_Vg_wh3l_zg_13TeV_pt2277->SetBinError(5,0.3297975);
   new_histo_group_Vg_wh3l_zg_13TeV_pt2277->SetBinError(6,0.1415242);
   new_histo_group_Vg_wh3l_zg_13TeV_pt2277->SetEntries(1378);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_zg_13TeV_pt2277->SetFillColor(ci);
   new_histo_group_Vg_wh3l_zg_13TeV_pt2277->SetFillStyle(3001);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_zg_13TeV_pt2277->SetLineColor(ci);
   new_histo_group_Vg_wh3l_zg_13TeV_pt2277->GetXaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_zg_13TeV_pt2277->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_zg_13TeV_pt2277->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_zg_13TeV_pt2277->GetXaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_zg_13TeV_pt2277->GetYaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_zg_13TeV_pt2277->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_zg_13TeV_pt2277->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_zg_13TeV_pt2277->GetYaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_zg_13TeV_pt2277->GetZaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_zg_13TeV_pt2277->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_zg_13TeV_pt2277->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_zg_13TeV_pt2277->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_pt2->Add(new_histo_group_Vg_wh3l_zg_13TeV_pt2,"");
   
   TH1D *new_histo_group_ZZ_wh3l_zg_13TeV_pt2278 = new TH1D("new_histo_group_ZZ_wh3l_zg_13TeV_pt2278","histo_ZZ",25,10,200);
   new_histo_group_ZZ_wh3l_zg_13TeV_pt2278->SetBinContent(2,0.3307121);
   new_histo_group_ZZ_wh3l_zg_13TeV_pt2278->SetBinContent(3,0.3294677);
   new_histo_group_ZZ_wh3l_zg_13TeV_pt2278->SetBinContent(4,0.0761614);
   new_histo_group_ZZ_wh3l_zg_13TeV_pt2278->SetBinError(2,0.1119776);
   new_histo_group_ZZ_wh3l_zg_13TeV_pt2278->SetBinError(3,0.1180655);
   new_histo_group_ZZ_wh3l_zg_13TeV_pt2278->SetBinError(4,0.05442959);
   new_histo_group_ZZ_wh3l_zg_13TeV_pt2278->SetEntries(20);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_zg_13TeV_pt2278->SetFillColor(ci);
   new_histo_group_ZZ_wh3l_zg_13TeV_pt2278->SetFillStyle(3001);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_zg_13TeV_pt2278->SetLineColor(ci);
   new_histo_group_ZZ_wh3l_zg_13TeV_pt2278->GetXaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_zg_13TeV_pt2278->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_zg_13TeV_pt2278->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_zg_13TeV_pt2278->GetXaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_zg_13TeV_pt2278->GetYaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_zg_13TeV_pt2278->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_zg_13TeV_pt2278->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_zg_13TeV_pt2278->GetYaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_zg_13TeV_pt2278->GetZaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_zg_13TeV_pt2278->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_zg_13TeV_pt2278->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_zg_13TeV_pt2278->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_pt2->Add(new_histo_group_ZZ_wh3l_zg_13TeV_pt2,"");
   
   TH1D *new_histo_group_WZ_wh3l_zg_13TeV_pt2279 = new TH1D("new_histo_group_WZ_wh3l_zg_13TeV_pt2279","histo_WZ",25,10,200);
   new_histo_group_WZ_wh3l_zg_13TeV_pt2279->SetBinContent(1,0.1322435);
   new_histo_group_WZ_wh3l_zg_13TeV_pt2279->SetBinContent(2,0.9268316);
   new_histo_group_WZ_wh3l_zg_13TeV_pt2279->SetBinContent(3,0.5848124);
   new_histo_group_WZ_wh3l_zg_13TeV_pt2279->SetBinContent(4,0.2046216);
   new_histo_group_WZ_wh3l_zg_13TeV_pt2279->SetBinContent(5,0.03001505);
   new_histo_group_WZ_wh3l_zg_13TeV_pt2279->SetBinError(1,0.0267455);
   new_histo_group_WZ_wh3l_zg_13TeV_pt2279->SetBinError(2,0.07168591);
   new_histo_group_WZ_wh3l_zg_13TeV_pt2279->SetBinError(3,0.05612615);
   new_histo_group_WZ_wh3l_zg_13TeV_pt2279->SetBinError(4,0.03260299);
   new_histo_group_WZ_wh3l_zg_13TeV_pt2279->SetBinError(5,0.01255257);
   new_histo_group_WZ_wh3l_zg_13TeV_pt2279->SetEntries(376);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_zg_13TeV_pt2279->SetFillColor(ci);
   new_histo_group_WZ_wh3l_zg_13TeV_pt2279->SetFillStyle(3001);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_zg_13TeV_pt2279->SetLineColor(ci);
   new_histo_group_WZ_wh3l_zg_13TeV_pt2279->GetXaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_zg_13TeV_pt2279->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_zg_13TeV_pt2279->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_zg_13TeV_pt2279->GetXaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_zg_13TeV_pt2279->GetYaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_zg_13TeV_pt2279->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_zg_13TeV_pt2279->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_zg_13TeV_pt2279->GetYaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_zg_13TeV_pt2279->GetZaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_zg_13TeV_pt2279->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_zg_13TeV_pt2279->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_zg_13TeV_pt2279->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_pt2->Add(new_histo_group_WZ_wh3l_zg_13TeV_pt2,"");
   thsBackground_grouped_wh3l_zg_13TeV_pt2->Draw("hist same");
   
   Double_t _fx3069[25] = {
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
   Double_t _fy3069[25] = {
   5.323522,
   49.37334,
   53.60219,
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
   Double_t _felx3069[25] = {
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
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
   Double_t _fely3069[25] = {
   1.599092,
   5.742731,
   6.447362,
   3.790324,
   0.6397902,
   0.04777488,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t _fehx3069[25] = {
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
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
   Double_t _fehy3069[25] = {
   1.599092,
   5.74273,
   6.447362,
   3.790327,
   0.6397901,
   0.1415301,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(25,_fx3069,_fy3069,_felx3069,_fehx3069,_fely3069,_fehy3069);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(12);
   grae->SetFillStyle(3004);
   grae->SetLineColor(12);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3069 = new TH1F("Graph_Graph3069","",100,0,219);
   Graph_Graph3069->SetMinimum(-6.004975);
   Graph_Graph3069->SetMaximum(66.05451);
   Graph_Graph3069->SetDirectory(0);
   Graph_Graph3069->SetStats(0);
   Graph_Graph3069->SetLineStyle(0);
   Graph_Graph3069->SetMarkerStyle(20);
   Graph_Graph3069->GetXaxis()->SetLabelFont(42);
   Graph_Graph3069->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3069->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3069->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3069->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3069->GetXaxis()->SetTitleFont(42);
   Graph_Graph3069->GetYaxis()->SetLabelFont(42);
   Graph_Graph3069->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3069->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3069->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3069->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3069->GetYaxis()->SetTitleFont(42);
   Graph_Graph3069->GetZaxis()->SetLabelFont(42);
   Graph_Graph3069->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3069->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3069->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3069->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3069);
   
   grae->Draw("2");
   
   Double_t _fx3070[25] = {
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
   Double_t _fy3070[25] = {
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
   Double_t _felx3070[25] = {
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
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
   Double_t _fely3070[25] = {
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
   Double_t _fehx3070[25] = {
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
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
   Double_t _fehy3070[25] = {
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
   grae = new TGraphAsymmErrors(25,_fx3070,_fy3070,_felx3070,_fehx3070,_fely3070,_fehy3070);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(1);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3070 = new TH1F("Graph_Graph3070","",100,0,219);
   Graph_Graph3070->SetMinimum(0);
   Graph_Graph3070->SetMaximum(82.68181);
   Graph_Graph3070->SetDirectory(0);
   Graph_Graph3070->SetStats(0);
   Graph_Graph3070->SetLineStyle(0);
   Graph_Graph3070->SetMarkerStyle(20);
   Graph_Graph3070->GetXaxis()->SetLabelFont(42);
   Graph_Graph3070->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3070->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3070->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3070->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3070->GetXaxis()->SetTitleFont(42);
   Graph_Graph3070->GetYaxis()->SetLabelFont(42);
   Graph_Graph3070->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3070->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3070->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3070->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3070->GetYaxis()->SetTitleFont(42);
   Graph_Graph3070->GetZaxis()->SetLabelFont(42);
   Graph_Graph3070->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3070->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3070->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3070->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3070);
   
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
   
   TH1F *hframe_copy280 = new TH1F("hframe_copy280","",1000,10,200);
   hframe_copy280->SetMinimum(0);
   hframe_copy280->SetMaximum(185.3101);
   hframe_copy280->SetDirectory(0);
   hframe_copy280->SetStats(0);
   hframe_copy280->SetLineStyle(0);
   hframe_copy280->SetMarkerStyle(20);
   hframe_copy280->GetXaxis()->SetTitle("lept2_p_{T} [GeV]");
   hframe_copy280->GetXaxis()->SetNdivisions(506);
   hframe_copy280->GetXaxis()->SetLabelFont(42);
   hframe_copy280->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy280->GetXaxis()->SetLabelSize(0.05);
   hframe_copy280->GetXaxis()->SetTitleSize(0.06);
   hframe_copy280->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy280->GetXaxis()->SetTitleFont(42);
   hframe_copy280->GetYaxis()->SetTitle("Events");
   hframe_copy280->GetYaxis()->SetLabelFont(42);
   hframe_copy280->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy280->GetYaxis()->SetLabelSize(0.05);
   hframe_copy280->GetYaxis()->SetTitleSize(0.06);
   hframe_copy280->GetYaxis()->SetTitleOffset(1.25);
   hframe_copy280->GetYaxis()->SetTitleFont(42);
   hframe_copy280->GetZaxis()->SetLabelFont(42);
   hframe_copy280->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy280->GetZaxis()->SetLabelSize(0.05);
   hframe_copy280->GetZaxis()->SetTitleSize(0.06);
   hframe_copy280->GetZaxis()->SetTitleFont(42);
   hframe_copy280->Draw("sameaxis");
   ccwh3l_zg_13TeV_pt2->Modified();
   ccwh3l_zg_13TeV_pt2->cd();
   ccwh3l_zg_13TeV_pt2->SetSelected(ccwh3l_zg_13TeV_pt2);
}
