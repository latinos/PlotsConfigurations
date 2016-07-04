void c_wh3l_zg_13TeV_pt2()
{
//=========Macro generated from canvas: ccwh3l_zg_13TeV_pt2/cc
//=========  (Sun Jul  3 22:45:40 2016) by ROOT version6.02/13
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
   
   TH1F *hframe41 = new TH1F("hframe41","",1000,10,200);
   hframe41->SetMinimum(0);
   hframe41->SetMaximum(185.3101);
   hframe41->SetDirectory(0);
   hframe41->SetStats(0);
   hframe41->SetLineStyle(0);
   hframe41->SetMarkerStyle(20);
   hframe41->GetXaxis()->SetTitle("lept2_p_{T} [GeV]");
   hframe41->GetXaxis()->SetNdivisions(506);
   hframe41->GetXaxis()->SetLabelFont(42);
   hframe41->GetXaxis()->SetLabelOffset(0.007);
   hframe41->GetXaxis()->SetLabelSize(0.05);
   hframe41->GetXaxis()->SetTitleSize(0.06);
   hframe41->GetXaxis()->SetTitleOffset(0.9);
   hframe41->GetXaxis()->SetTitleFont(42);
   hframe41->GetYaxis()->SetTitle("Events");
   hframe41->GetYaxis()->SetLabelFont(42);
   hframe41->GetYaxis()->SetLabelOffset(0.007);
   hframe41->GetYaxis()->SetLabelSize(0.05);
   hframe41->GetYaxis()->SetTitleSize(0.06);
   hframe41->GetYaxis()->SetTitleOffset(1.25);
   hframe41->GetYaxis()->SetTitleFont(42);
   hframe41->GetZaxis()->SetLabelFont(42);
   hframe41->GetZaxis()->SetLabelOffset(0.007);
   hframe41->GetZaxis()->SetLabelSize(0.05);
   hframe41->GetZaxis()->SetTitleSize(0.06);
   hframe41->GetZaxis()->SetTitleFont(42);
   hframe41->Draw(" ");
   
   THStack *thsBackground_grouped_wh3l_zg_13TeV_pt2 = new THStack();
   thsBackground_grouped_wh3l_zg_13TeV_pt2->SetName("thsBackground_grouped_wh3l_zg_13TeV_pt2");
   thsBackground_grouped_wh3l_zg_13TeV_pt2->SetTitle("thsBackground_grouped_wh3l_zg_13TeV_pt2");
   
   TH1F *thsBackground_grouped_wh3l_zg_13TeV_pt2_stack_9 = new TH1F("thsBackground_grouped_wh3l_zg_13TeV_pt2_stack_9","thsBackground_grouped_wh3l_zg_13TeV_pt2",25,10,200);
   thsBackground_grouped_wh3l_zg_13TeV_pt2_stack_9->SetMinimum(-0.09376672);
   thsBackground_grouped_wh3l_zg_13TeV_pt2_stack_9->SetMaximum(55.55);
   thsBackground_grouped_wh3l_zg_13TeV_pt2_stack_9->SetDirectory(0);
   thsBackground_grouped_wh3l_zg_13TeV_pt2_stack_9->SetStats(0);
   thsBackground_grouped_wh3l_zg_13TeV_pt2_stack_9->SetLineStyle(0);
   thsBackground_grouped_wh3l_zg_13TeV_pt2_stack_9->SetMarkerStyle(20);
   thsBackground_grouped_wh3l_zg_13TeV_pt2_stack_9->GetXaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_pt2_stack_9->GetXaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_zg_13TeV_pt2_stack_9->GetXaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_zg_13TeV_pt2_stack_9->GetXaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_zg_13TeV_pt2_stack_9->GetXaxis()->SetTitleOffset(0.9);
   thsBackground_grouped_wh3l_zg_13TeV_pt2_stack_9->GetXaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_pt2_stack_9->GetYaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_pt2_stack_9->GetYaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_zg_13TeV_pt2_stack_9->GetYaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_zg_13TeV_pt2_stack_9->GetYaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_zg_13TeV_pt2_stack_9->GetYaxis()->SetTitleOffset(1.25);
   thsBackground_grouped_wh3l_zg_13TeV_pt2_stack_9->GetYaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_pt2_stack_9->GetZaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_pt2_stack_9->GetZaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_zg_13TeV_pt2_stack_9->GetZaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_zg_13TeV_pt2_stack_9->GetZaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_zg_13TeV_pt2_stack_9->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_pt2->SetHistogram(thsBackground_grouped_wh3l_zg_13TeV_pt2_stack_9);
   
   
   TH1D *new_histo_group_Fake_wh3l_zg_13TeV_pt242 = new TH1D("new_histo_group_Fake_wh3l_zg_13TeV_pt242","histo_Fake",25,10,200);
   new_histo_group_Fake_wh3l_zg_13TeV_pt242->SetBinContent(1,0.7910128);
   new_histo_group_Fake_wh3l_zg_13TeV_pt242->SetBinContent(2,7.360365);
   new_histo_group_Fake_wh3l_zg_13TeV_pt242->SetBinContent(3,10.18288);
   new_histo_group_Fake_wh3l_zg_13TeV_pt242->SetBinContent(4,4.888568);
   new_histo_group_Fake_wh3l_zg_13TeV_pt242->SetBinContent(5,0.3579774);
   new_histo_group_Fake_wh3l_zg_13TeV_pt242->SetBinError(1,0.7011956);
   new_histo_group_Fake_wh3l_zg_13TeV_pt242->SetBinError(2,2.61405);
   new_histo_group_Fake_wh3l_zg_13TeV_pt242->SetBinError(3,2.787009);
   new_histo_group_Fake_wh3l_zg_13TeV_pt242->SetBinError(4,1.823267);
   new_histo_group_Fake_wh3l_zg_13TeV_pt242->SetBinError(5,0.2880862);
   new_histo_group_Fake_wh3l_zg_13TeV_pt242->SetEntries(460);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_zg_13TeV_pt242->SetFillColor(ci);
   new_histo_group_Fake_wh3l_zg_13TeV_pt242->SetFillStyle(3001);

   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_zg_13TeV_pt242->SetLineColor(ci);
   new_histo_group_Fake_wh3l_zg_13TeV_pt242->GetXaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_zg_13TeV_pt242->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_zg_13TeV_pt242->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_zg_13TeV_pt242->GetXaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_zg_13TeV_pt242->GetYaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_zg_13TeV_pt242->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_zg_13TeV_pt242->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_zg_13TeV_pt242->GetYaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_zg_13TeV_pt242->GetZaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_zg_13TeV_pt242->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_zg_13TeV_pt242->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_zg_13TeV_pt242->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_pt2->Add(new_histo_group_Fake_wh3l_zg_13TeV_pt2,"");
   
   TH1D *new_histo_group_WW_wh3l_zg_13TeV_pt243 = new TH1D("new_histo_group_WW_wh3l_zg_13TeV_pt243","histo_WW",25,10,200);
   new_histo_group_WW_wh3l_zg_13TeV_pt243->SetBinContent(4,0.009961222);
   new_histo_group_WW_wh3l_zg_13TeV_pt243->SetBinError(4,0.009961222);
   new_histo_group_WW_wh3l_zg_13TeV_pt243->SetEntries(1);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_zg_13TeV_pt243->SetFillColor(ci);
   new_histo_group_WW_wh3l_zg_13TeV_pt243->SetFillStyle(3001);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_zg_13TeV_pt243->SetLineColor(ci);
   new_histo_group_WW_wh3l_zg_13TeV_pt243->GetXaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_zg_13TeV_pt243->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_zg_13TeV_pt243->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_zg_13TeV_pt243->GetXaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_zg_13TeV_pt243->GetYaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_zg_13TeV_pt243->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_zg_13TeV_pt243->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_zg_13TeV_pt243->GetYaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_zg_13TeV_pt243->GetZaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_zg_13TeV_pt243->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_zg_13TeV_pt243->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_zg_13TeV_pt243->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_pt2->Add(new_histo_group_WW_wh3l_zg_13TeV_pt2,"");
   
   TH1D *new_histo_group_VVV_wh3l_zg_13TeV_pt244 = new TH1D("new_histo_group_VVV_wh3l_zg_13TeV_pt244","histo_VVV",25,10,200);
   new_histo_group_VVV_wh3l_zg_13TeV_pt244->SetBinContent(2,0.004218749);
   new_histo_group_VVV_wh3l_zg_13TeV_pt244->SetBinContent(3,0.01026428);
   new_histo_group_VVV_wh3l_zg_13TeV_pt244->SetBinError(2,0.003558209);
   new_histo_group_VVV_wh3l_zg_13TeV_pt244->SetBinError(3,0.005153921);
   new_histo_group_VVV_wh3l_zg_13TeV_pt244->SetEntries(7);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_zg_13TeV_pt244->SetFillColor(ci);
   new_histo_group_VVV_wh3l_zg_13TeV_pt244->SetFillStyle(3001);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_zg_13TeV_pt244->SetLineColor(ci);
   new_histo_group_VVV_wh3l_zg_13TeV_pt244->GetXaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_zg_13TeV_pt244->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_zg_13TeV_pt244->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_zg_13TeV_pt244->GetXaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_zg_13TeV_pt244->GetYaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_zg_13TeV_pt244->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_zg_13TeV_pt244->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_zg_13TeV_pt244->GetYaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_zg_13TeV_pt244->GetZaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_zg_13TeV_pt244->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_zg_13TeV_pt244->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_zg_13TeV_pt244->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_pt2->Add(new_histo_group_VVV_wh3l_zg_13TeV_pt2,"");
   
   TH1D *new_histo_group_Vg_wh3l_zg_13TeV_pt245 = new TH1D("new_histo_group_Vg_wh3l_zg_13TeV_pt245","histo_Vg",25,10,200);
   new_histo_group_Vg_wh3l_zg_13TeV_pt245->SetBinContent(1,4.400265);
   new_histo_group_Vg_wh3l_zg_13TeV_pt245->SetBinContent(2,40.62695);
   new_histo_group_Vg_wh3l_zg_13TeV_pt245->SetBinContent(3,41.86953);
   new_histo_group_Vg_wh3l_zg_13TeV_pt245->SetBinContent(4,16.33122);
   new_histo_group_Vg_wh3l_zg_13TeV_pt245->SetBinContent(5,0.6911122);
   new_histo_group_Vg_wh3l_zg_13TeV_pt245->SetBinContent(6,0.04775747);
   new_histo_group_Vg_wh3l_zg_13TeV_pt245->SetBinError(1,0.8489752);
   new_histo_group_Vg_wh3l_zg_13TeV_pt245->SetBinError(2,2.381971);
   new_histo_group_Vg_wh3l_zg_13TeV_pt245->SetBinError(3,2.445639);
   new_histo_group_Vg_wh3l_zg_13TeV_pt245->SetBinError(4,1.546618);
   new_histo_group_Vg_wh3l_zg_13TeV_pt245->SetBinError(5,0.3297975);
   new_histo_group_Vg_wh3l_zg_13TeV_pt245->SetBinError(6,0.1415242);
   new_histo_group_Vg_wh3l_zg_13TeV_pt245->SetEntries(1376);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_zg_13TeV_pt245->SetFillColor(ci);
   new_histo_group_Vg_wh3l_zg_13TeV_pt245->SetFillStyle(3001);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_zg_13TeV_pt245->SetLineColor(ci);
   new_histo_group_Vg_wh3l_zg_13TeV_pt245->GetXaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_zg_13TeV_pt245->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_zg_13TeV_pt245->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_zg_13TeV_pt245->GetXaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_zg_13TeV_pt245->GetYaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_zg_13TeV_pt245->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_zg_13TeV_pt245->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_zg_13TeV_pt245->GetYaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_zg_13TeV_pt245->GetZaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_zg_13TeV_pt245->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_zg_13TeV_pt245->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_zg_13TeV_pt245->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_pt2->Add(new_histo_group_Vg_wh3l_zg_13TeV_pt2,"");
   
   TH1D *new_histo_group_ZZ_wh3l_zg_13TeV_pt246 = new TH1D("new_histo_group_ZZ_wh3l_zg_13TeV_pt246","histo_ZZ",25,10,200);
   new_histo_group_ZZ_wh3l_zg_13TeV_pt246->SetBinContent(2,0.2954788);
   new_histo_group_ZZ_wh3l_zg_13TeV_pt246->SetBinContent(3,0.2217282);
   new_histo_group_ZZ_wh3l_zg_13TeV_pt246->SetBinContent(4,0.0761614);
   new_histo_group_ZZ_wh3l_zg_13TeV_pt246->SetBinError(2,0.1062902);
   new_histo_group_ZZ_wh3l_zg_13TeV_pt246->SetBinError(3,0.09870092);
   new_histo_group_ZZ_wh3l_zg_13TeV_pt246->SetBinError(4,0.05442959);
   new_histo_group_ZZ_wh3l_zg_13TeV_pt246->SetEntries(16);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_zg_13TeV_pt246->SetFillColor(ci);
   new_histo_group_ZZ_wh3l_zg_13TeV_pt246->SetFillStyle(3001);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_zg_13TeV_pt246->SetLineColor(ci);
   new_histo_group_ZZ_wh3l_zg_13TeV_pt246->GetXaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_zg_13TeV_pt246->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_zg_13TeV_pt246->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_zg_13TeV_pt246->GetXaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_zg_13TeV_pt246->GetYaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_zg_13TeV_pt246->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_zg_13TeV_pt246->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_zg_13TeV_pt246->GetYaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_zg_13TeV_pt246->GetZaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_zg_13TeV_pt246->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_zg_13TeV_pt246->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_zg_13TeV_pt246->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_pt2->Add(new_histo_group_ZZ_wh3l_zg_13TeV_pt2,"");
   
   TH1D *new_histo_group_WZ_wh3l_zg_13TeV_pt247 = new TH1D("new_histo_group_WZ_wh3l_zg_13TeV_pt247","histo_WZ",25,10,200);
   new_histo_group_WZ_wh3l_zg_13TeV_pt247->SetBinContent(1,0.1322435);
   new_histo_group_WZ_wh3l_zg_13TeV_pt247->SetBinContent(2,0.9268316);
   new_histo_group_WZ_wh3l_zg_13TeV_pt247->SetBinContent(3,0.5848124);
   new_histo_group_WZ_wh3l_zg_13TeV_pt247->SetBinContent(4,0.2046216);
   new_histo_group_WZ_wh3l_zg_13TeV_pt247->SetBinContent(5,0.03001505);
   new_histo_group_WZ_wh3l_zg_13TeV_pt247->SetBinError(1,0.0267455);
   new_histo_group_WZ_wh3l_zg_13TeV_pt247->SetBinError(2,0.07168591);
   new_histo_group_WZ_wh3l_zg_13TeV_pt247->SetBinError(3,0.05612615);
   new_histo_group_WZ_wh3l_zg_13TeV_pt247->SetBinError(4,0.03260299);
   new_histo_group_WZ_wh3l_zg_13TeV_pt247->SetBinError(5,0.01255257);
   new_histo_group_WZ_wh3l_zg_13TeV_pt247->SetEntries(376);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_zg_13TeV_pt247->SetFillColor(ci);
   new_histo_group_WZ_wh3l_zg_13TeV_pt247->SetFillStyle(3001);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_zg_13TeV_pt247->SetLineColor(ci);
   new_histo_group_WZ_wh3l_zg_13TeV_pt247->GetXaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_zg_13TeV_pt247->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_zg_13TeV_pt247->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_zg_13TeV_pt247->GetXaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_zg_13TeV_pt247->GetYaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_zg_13TeV_pt247->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_zg_13TeV_pt247->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_zg_13TeV_pt247->GetYaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_zg_13TeV_pt247->GetZaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_zg_13TeV_pt247->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_zg_13TeV_pt247->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_zg_13TeV_pt247->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_pt2->Add(new_histo_group_WZ_wh3l_zg_13TeV_pt2,"");
   
   TH1D *new_histo_group_Higgs_wh3l_zg_13TeV_pt248 = new TH1D("new_histo_group_Higgs_wh3l_zg_13TeV_pt248","histo_H_htt",25,10,200);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt248->SetBinContent(1,0.003295073);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt248->SetBinContent(2,0.03279834);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt248->SetBinContent(3,0.03554916);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt248->SetBinContent(4,0.01371769);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt248->SetBinContent(5,0.002420074);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt248->SetBinContent(6,0.0009963103);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt248->SetBinError(1,0.00159901);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt248->SetBinError(2,0.005812903);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt248->SetBinError(3,0.00611322);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt248->SetBinError(4,0.004168475);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt248->SetBinError(5,0.001734508);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt248->SetBinError(6,0.0009963103);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt248->SetEntries(180);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt248->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_zg_13TeV_pt248->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt248->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt248->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt248->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt248->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt248->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt248->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt248->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt248->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt248->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt248->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt248->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt248->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt248->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_pt2->Add(new_histo_group_Higgs_wh3l_zg_13TeV_pt2,"");
   thsBackground_grouped_wh3l_zg_13TeV_pt2->Draw("hist same");
   
   thsSignal_grouped_wh3l_zg_13TeV_pt2 = new THStack();
   thsSignal_grouped_wh3l_zg_13TeV_pt2->SetName("thsSignal_grouped_wh3l_zg_13TeV_pt2");
   thsSignal_grouped_wh3l_zg_13TeV_pt2->SetTitle("thsSignal_grouped_wh3l_zg_13TeV_pt2");
   
   TH1F *thsSignal_grouped_wh3l_zg_13TeV_pt2_stack_10 = new TH1F("thsSignal_grouped_wh3l_zg_13TeV_pt2_stack_10","thsSignal_grouped_wh3l_zg_13TeV_pt2",25,10,200);
   thsSignal_grouped_wh3l_zg_13TeV_pt2_stack_10->SetMinimum(0);
   thsSignal_grouped_wh3l_zg_13TeV_pt2_stack_10->SetMaximum(0.0437455);
   thsSignal_grouped_wh3l_zg_13TeV_pt2_stack_10->SetDirectory(0);
   thsSignal_grouped_wh3l_zg_13TeV_pt2_stack_10->SetStats(0);
   thsSignal_grouped_wh3l_zg_13TeV_pt2_stack_10->SetLineStyle(0);
   thsSignal_grouped_wh3l_zg_13TeV_pt2_stack_10->SetMarkerStyle(20);
   thsSignal_grouped_wh3l_zg_13TeV_pt2_stack_10->GetXaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_zg_13TeV_pt2_stack_10->GetXaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_zg_13TeV_pt2_stack_10->GetXaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_zg_13TeV_pt2_stack_10->GetXaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_zg_13TeV_pt2_stack_10->GetXaxis()->SetTitleOffset(0.9);
   thsSignal_grouped_wh3l_zg_13TeV_pt2_stack_10->GetXaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_zg_13TeV_pt2_stack_10->GetYaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_zg_13TeV_pt2_stack_10->GetYaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_zg_13TeV_pt2_stack_10->GetYaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_zg_13TeV_pt2_stack_10->GetYaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_zg_13TeV_pt2_stack_10->GetYaxis()->SetTitleOffset(1.25);
   thsSignal_grouped_wh3l_zg_13TeV_pt2_stack_10->GetYaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_zg_13TeV_pt2_stack_10->GetZaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_zg_13TeV_pt2_stack_10->GetZaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_zg_13TeV_pt2_stack_10->GetZaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_zg_13TeV_pt2_stack_10->GetZaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_zg_13TeV_pt2_stack_10->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_zg_13TeV_pt2->SetHistogram(thsSignal_grouped_wh3l_zg_13TeV_pt2_stack_10);
   
   
   TH1D *new_histo_group_Higgs_wh3l_zg_13TeV_pt249 = new TH1D("new_histo_group_Higgs_wh3l_zg_13TeV_pt249","histo_H_htt",25,10,200);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt249->SetBinContent(1,0.003295073);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt249->SetBinContent(2,0.03279834);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt249->SetBinContent(3,0.03554916);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt249->SetBinContent(4,0.01371769);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt249->SetBinContent(5,0.002420074);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt249->SetBinContent(6,0.0009963103);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt249->SetBinError(1,0.00159901);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt249->SetBinError(2,0.005812903);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt249->SetBinError(3,0.00611322);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt249->SetBinError(4,0.004168475);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt249->SetBinError(5,0.001734508);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt249->SetBinError(6,0.0009963103);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt249->SetEntries(180);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt249->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_zg_13TeV_pt249->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt249->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt249->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt249->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt249->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt249->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt249->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt249->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt249->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt249->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt249->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt249->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt249->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt249->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_zg_13TeV_pt2->Add(new_histo_group_Higgs_wh3l_zg_13TeV_pt2,"");
   thsSignal_grouped_wh3l_zg_13TeV_pt2->Draw("hist same noclear");
   
   Double_t _fx3009[25] = {
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
   Double_t _fy3009[25] = {
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
   Double_t _felx3009[25] = {
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
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
   Double_t _fely3009[25] = {
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
   Double_t _fehx3009[25] = {
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
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
   Double_t _fehy3009[25] = {
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
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(25,_fx3009,_fy3009,_felx3009,_fehx3009,_fely3009,_fehy3009);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(12);
   grae->SetFillStyle(3004);
   grae->SetLineColor(12);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3009 = new TH1F("Graph_Graph3009","",100,0,219);
   Graph_Graph3009->SetMinimum(-5.955487);
   Graph_Graph3009->SetMaximum(65.50964);
   Graph_Graph3009->SetDirectory(0);
   Graph_Graph3009->SetStats(0);
   Graph_Graph3009->SetLineStyle(0);
   Graph_Graph3009->SetMarkerStyle(20);
   Graph_Graph3009->GetXaxis()->SetLabelFont(42);
   Graph_Graph3009->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3009->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3009->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3009->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3009->GetXaxis()->SetTitleFont(42);
   Graph_Graph3009->GetYaxis()->SetLabelFont(42);
   Graph_Graph3009->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3009->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3009->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3009->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3009->GetYaxis()->SetTitleFont(42);
   Graph_Graph3009->GetZaxis()->SetLabelFont(42);
   Graph_Graph3009->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3009->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3009->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3009->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3009);
   
   grae->Draw("2");
   
   Double_t _fx3010[25] = {
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
   Double_t _fy3010[25] = {
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
   Double_t _felx3010[25] = {
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
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
   Double_t _fely3010[25] = {
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
   Double_t _fehx3010[25] = {
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
   3.8,
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
   Double_t _fehy3010[25] = {
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
   grae = new TGraphAsymmErrors(25,_fx3010,_fy3010,_felx3010,_fehx3010,_fely3010,_fehy3010);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(1);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3010 = new TH1F("Graph_Graph3010","",100,0,219);
   Graph_Graph3010->SetMinimum(0);
   Graph_Graph3010->SetMaximum(82.68181);
   Graph_Graph3010->SetDirectory(0);
   Graph_Graph3010->SetStats(0);
   Graph_Graph3010->SetLineStyle(0);
   Graph_Graph3010->SetMarkerStyle(20);
   Graph_Graph3010->GetXaxis()->SetLabelFont(42);
   Graph_Graph3010->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3010->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3010->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3010->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3010->GetXaxis()->SetTitleFont(42);
   Graph_Graph3010->GetYaxis()->SetLabelFont(42);
   Graph_Graph3010->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3010->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3010->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3010->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3010->GetYaxis()->SetTitleFont(42);
   Graph_Graph3010->GetZaxis()->SetLabelFont(42);
   Graph_Graph3010->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3010->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3010->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3010->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3010);
   
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
   
   TH1F *hframe_copy50 = new TH1F("hframe_copy50","",1000,10,200);
   hframe_copy50->SetMinimum(0);
   hframe_copy50->SetMaximum(185.3101);
   hframe_copy50->SetDirectory(0);
   hframe_copy50->SetStats(0);
   hframe_copy50->SetLineStyle(0);
   hframe_copy50->SetMarkerStyle(20);
   hframe_copy50->GetXaxis()->SetTitle("lept2_p_{T} [GeV]");
   hframe_copy50->GetXaxis()->SetNdivisions(506);
   hframe_copy50->GetXaxis()->SetLabelFont(42);
   hframe_copy50->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy50->GetXaxis()->SetLabelSize(0.05);
   hframe_copy50->GetXaxis()->SetTitleSize(0.06);
   hframe_copy50->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy50->GetXaxis()->SetTitleFont(42);
   hframe_copy50->GetYaxis()->SetTitle("Events");
   hframe_copy50->GetYaxis()->SetLabelFont(42);
   hframe_copy50->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy50->GetYaxis()->SetLabelSize(0.05);
   hframe_copy50->GetYaxis()->SetTitleSize(0.06);
   hframe_copy50->GetYaxis()->SetTitleOffset(1.25);
   hframe_copy50->GetYaxis()->SetTitleFont(42);
   hframe_copy50->GetZaxis()->SetLabelFont(42);
   hframe_copy50->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy50->GetZaxis()->SetLabelSize(0.05);
   hframe_copy50->GetZaxis()->SetTitleSize(0.06);
   hframe_copy50->GetZaxis()->SetTitleFont(42);
   hframe_copy50->Draw("sameaxis");
   ccwh3l_zg_13TeV_pt2->Modified();
   ccwh3l_zg_13TeV_pt2->cd();
   ccwh3l_zg_13TeV_pt2->SetSelected(ccwh3l_zg_13TeV_pt2);
}
