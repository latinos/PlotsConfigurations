void c_wh3l_zg_13TeV_pt2()
{
//=========Macro generated from canvas: ccwh3l_zg_13TeV_pt2/cc
//=========  (Sun Jul  3 22:42:31 2016) by ROOT version6.02/13
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
   
   TH1F *hframe37 = new TH1F("hframe37","",1000,10,200);
   hframe37->SetMinimum(0);
   hframe37->SetMaximum(185.3101);
   hframe37->SetDirectory(0);
   hframe37->SetStats(0);
   hframe37->SetLineStyle(0);
   hframe37->SetMarkerStyle(20);
   hframe37->GetXaxis()->SetTitle("lept2_p_{T} [GeV]");
   hframe37->GetXaxis()->SetNdivisions(506);
   hframe37->GetXaxis()->SetLabelFont(42);
   hframe37->GetXaxis()->SetLabelOffset(0.007);
   hframe37->GetXaxis()->SetLabelSize(0.05);
   hframe37->GetXaxis()->SetTitleSize(0.06);
   hframe37->GetXaxis()->SetTitleOffset(0.9);
   hframe37->GetXaxis()->SetTitleFont(42);
   hframe37->GetYaxis()->SetTitle("Events");
   hframe37->GetYaxis()->SetLabelFont(42);
   hframe37->GetYaxis()->SetLabelOffset(0.007);
   hframe37->GetYaxis()->SetLabelSize(0.05);
   hframe37->GetYaxis()->SetTitleSize(0.06);
   hframe37->GetYaxis()->SetTitleOffset(1.25);
   hframe37->GetYaxis()->SetTitleFont(42);
   hframe37->GetZaxis()->SetLabelFont(42);
   hframe37->GetZaxis()->SetLabelOffset(0.007);
   hframe37->GetZaxis()->SetLabelSize(0.05);
   hframe37->GetZaxis()->SetTitleSize(0.06);
   hframe37->GetZaxis()->SetTitleFont(42);
   hframe37->Draw(" ");
   
   THStack *thsBackground_grouped_wh3l_zg_13TeV_pt2 = new THStack();
   thsBackground_grouped_wh3l_zg_13TeV_pt2->SetName("thsBackground_grouped_wh3l_zg_13TeV_pt2");
   thsBackground_grouped_wh3l_zg_13TeV_pt2->SetTitle("thsBackground_grouped_wh3l_zg_13TeV_pt2");
   
   TH1F *thsBackground_grouped_wh3l_zg_13TeV_pt2_stack_9 = new TH1F("thsBackground_grouped_wh3l_zg_13TeV_pt2_stack_9","thsBackground_grouped_wh3l_zg_13TeV_pt2",25,10,200);
   thsBackground_grouped_wh3l_zg_13TeV_pt2_stack_9->SetMinimum(-0.09376672);
   thsBackground_grouped_wh3l_zg_13TeV_pt2_stack_9->SetMaximum(55.53922);
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
   
   
   TH1D *new_histo_group_Fake_wh3l_zg_13TeV_pt238 = new TH1D("new_histo_group_Fake_wh3l_zg_13TeV_pt238","histo_Fake",25,10,200);
   new_histo_group_Fake_wh3l_zg_13TeV_pt238->SetBinContent(1,0.7910128);
   new_histo_group_Fake_wh3l_zg_13TeV_pt238->SetBinContent(2,7.360365);
   new_histo_group_Fake_wh3l_zg_13TeV_pt238->SetBinContent(3,10.18288);
   new_histo_group_Fake_wh3l_zg_13TeV_pt238->SetBinContent(4,4.888568);
   new_histo_group_Fake_wh3l_zg_13TeV_pt238->SetBinContent(5,0.3579774);
   new_histo_group_Fake_wh3l_zg_13TeV_pt238->SetBinError(1,0.7011956);
   new_histo_group_Fake_wh3l_zg_13TeV_pt238->SetBinError(2,2.61405);
   new_histo_group_Fake_wh3l_zg_13TeV_pt238->SetBinError(3,2.787009);
   new_histo_group_Fake_wh3l_zg_13TeV_pt238->SetBinError(4,1.823267);
   new_histo_group_Fake_wh3l_zg_13TeV_pt238->SetBinError(5,0.2880862);
   new_histo_group_Fake_wh3l_zg_13TeV_pt238->SetEntries(460);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_zg_13TeV_pt238->SetFillColor(ci);
   new_histo_group_Fake_wh3l_zg_13TeV_pt238->SetFillStyle(3001);

   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_zg_13TeV_pt238->SetLineColor(ci);
   new_histo_group_Fake_wh3l_zg_13TeV_pt238->GetXaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_zg_13TeV_pt238->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_zg_13TeV_pt238->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_zg_13TeV_pt238->GetXaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_zg_13TeV_pt238->GetYaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_zg_13TeV_pt238->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_zg_13TeV_pt238->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_zg_13TeV_pt238->GetYaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_zg_13TeV_pt238->GetZaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_zg_13TeV_pt238->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_zg_13TeV_pt238->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_zg_13TeV_pt238->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_pt2->Add(new_histo_group_Fake_wh3l_zg_13TeV_pt2,"");
   
   TH1D *new_histo_group_WW_wh3l_zg_13TeV_pt239 = new TH1D("new_histo_group_WW_wh3l_zg_13TeV_pt239","histo_WW",25,10,200);
   new_histo_group_WW_wh3l_zg_13TeV_pt239->SetBinContent(4,0.009961222);
   new_histo_group_WW_wh3l_zg_13TeV_pt239->SetBinError(4,0.009961222);
   new_histo_group_WW_wh3l_zg_13TeV_pt239->SetEntries(1);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_zg_13TeV_pt239->SetFillColor(ci);
   new_histo_group_WW_wh3l_zg_13TeV_pt239->SetFillStyle(3001);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_zg_13TeV_pt239->SetLineColor(ci);
   new_histo_group_WW_wh3l_zg_13TeV_pt239->GetXaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_zg_13TeV_pt239->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_zg_13TeV_pt239->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_zg_13TeV_pt239->GetXaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_zg_13TeV_pt239->GetYaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_zg_13TeV_pt239->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_zg_13TeV_pt239->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_zg_13TeV_pt239->GetYaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_zg_13TeV_pt239->GetZaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_zg_13TeV_pt239->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_zg_13TeV_pt239->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_zg_13TeV_pt239->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_pt2->Add(new_histo_group_WW_wh3l_zg_13TeV_pt2,"");
   
   TH1D *new_histo_group_Vg_wh3l_zg_13TeV_pt240 = new TH1D("new_histo_group_Vg_wh3l_zg_13TeV_pt240","histo_Vg",25,10,200);
   new_histo_group_Vg_wh3l_zg_13TeV_pt240->SetBinContent(1,4.400265);
   new_histo_group_Vg_wh3l_zg_13TeV_pt240->SetBinContent(2,40.62695);
   new_histo_group_Vg_wh3l_zg_13TeV_pt240->SetBinContent(3,41.86953);
   new_histo_group_Vg_wh3l_zg_13TeV_pt240->SetBinContent(4,16.33122);
   new_histo_group_Vg_wh3l_zg_13TeV_pt240->SetBinContent(5,0.6911122);
   new_histo_group_Vg_wh3l_zg_13TeV_pt240->SetBinContent(6,0.04775747);
   new_histo_group_Vg_wh3l_zg_13TeV_pt240->SetBinError(1,0.8489752);
   new_histo_group_Vg_wh3l_zg_13TeV_pt240->SetBinError(2,2.381971);
   new_histo_group_Vg_wh3l_zg_13TeV_pt240->SetBinError(3,2.445639);
   new_histo_group_Vg_wh3l_zg_13TeV_pt240->SetBinError(4,1.546618);
   new_histo_group_Vg_wh3l_zg_13TeV_pt240->SetBinError(5,0.3297975);
   new_histo_group_Vg_wh3l_zg_13TeV_pt240->SetBinError(6,0.1415242);
   new_histo_group_Vg_wh3l_zg_13TeV_pt240->SetEntries(1376);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_zg_13TeV_pt240->SetFillColor(ci);
   new_histo_group_Vg_wh3l_zg_13TeV_pt240->SetFillStyle(3001);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_zg_13TeV_pt240->SetLineColor(ci);
   new_histo_group_Vg_wh3l_zg_13TeV_pt240->GetXaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_zg_13TeV_pt240->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_zg_13TeV_pt240->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_zg_13TeV_pt240->GetXaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_zg_13TeV_pt240->GetYaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_zg_13TeV_pt240->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_zg_13TeV_pt240->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_zg_13TeV_pt240->GetYaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_zg_13TeV_pt240->GetZaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_zg_13TeV_pt240->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_zg_13TeV_pt240->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_zg_13TeV_pt240->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_pt2->Add(new_histo_group_Vg_wh3l_zg_13TeV_pt2,"");
   
   TH1D *new_histo_group_ZZ_wh3l_zg_13TeV_pt241 = new TH1D("new_histo_group_ZZ_wh3l_zg_13TeV_pt241","histo_ZZ",25,10,200);
   new_histo_group_ZZ_wh3l_zg_13TeV_pt241->SetBinContent(2,0.2954788);
   new_histo_group_ZZ_wh3l_zg_13TeV_pt241->SetBinContent(3,0.2217282);
   new_histo_group_ZZ_wh3l_zg_13TeV_pt241->SetBinContent(4,0.0761614);
   new_histo_group_ZZ_wh3l_zg_13TeV_pt241->SetBinError(2,0.1062902);
   new_histo_group_ZZ_wh3l_zg_13TeV_pt241->SetBinError(3,0.09870092);
   new_histo_group_ZZ_wh3l_zg_13TeV_pt241->SetBinError(4,0.05442959);
   new_histo_group_ZZ_wh3l_zg_13TeV_pt241->SetEntries(16);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_zg_13TeV_pt241->SetFillColor(ci);
   new_histo_group_ZZ_wh3l_zg_13TeV_pt241->SetFillStyle(3001);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_zg_13TeV_pt241->SetLineColor(ci);
   new_histo_group_ZZ_wh3l_zg_13TeV_pt241->GetXaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_zg_13TeV_pt241->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_zg_13TeV_pt241->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_zg_13TeV_pt241->GetXaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_zg_13TeV_pt241->GetYaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_zg_13TeV_pt241->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_zg_13TeV_pt241->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_zg_13TeV_pt241->GetYaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_zg_13TeV_pt241->GetZaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_zg_13TeV_pt241->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_zg_13TeV_pt241->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_zg_13TeV_pt241->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_pt2->Add(new_histo_group_ZZ_wh3l_zg_13TeV_pt2,"");
   
   TH1D *new_histo_group_WZ_wh3l_zg_13TeV_pt242 = new TH1D("new_histo_group_WZ_wh3l_zg_13TeV_pt242","histo_WZ",25,10,200);
   new_histo_group_WZ_wh3l_zg_13TeV_pt242->SetBinContent(1,0.1322435);
   new_histo_group_WZ_wh3l_zg_13TeV_pt242->SetBinContent(2,0.9268316);
   new_histo_group_WZ_wh3l_zg_13TeV_pt242->SetBinContent(3,0.5848124);
   new_histo_group_WZ_wh3l_zg_13TeV_pt242->SetBinContent(4,0.2046216);
   new_histo_group_WZ_wh3l_zg_13TeV_pt242->SetBinContent(5,0.03001505);
   new_histo_group_WZ_wh3l_zg_13TeV_pt242->SetBinError(1,0.0267455);
   new_histo_group_WZ_wh3l_zg_13TeV_pt242->SetBinError(2,0.07168591);
   new_histo_group_WZ_wh3l_zg_13TeV_pt242->SetBinError(3,0.05612615);
   new_histo_group_WZ_wh3l_zg_13TeV_pt242->SetBinError(4,0.03260299);
   new_histo_group_WZ_wh3l_zg_13TeV_pt242->SetBinError(5,0.01255257);
   new_histo_group_WZ_wh3l_zg_13TeV_pt242->SetEntries(376);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_zg_13TeV_pt242->SetFillColor(ci);
   new_histo_group_WZ_wh3l_zg_13TeV_pt242->SetFillStyle(3001);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_zg_13TeV_pt242->SetLineColor(ci);
   new_histo_group_WZ_wh3l_zg_13TeV_pt242->GetXaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_zg_13TeV_pt242->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_zg_13TeV_pt242->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_zg_13TeV_pt242->GetXaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_zg_13TeV_pt242->GetYaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_zg_13TeV_pt242->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_zg_13TeV_pt242->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_zg_13TeV_pt242->GetYaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_zg_13TeV_pt242->GetZaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_zg_13TeV_pt242->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_zg_13TeV_pt242->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_zg_13TeV_pt242->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_pt2->Add(new_histo_group_WZ_wh3l_zg_13TeV_pt2,"");
   
   TH1D *new_histo_group_Higgs_wh3l_zg_13TeV_pt243 = new TH1D("new_histo_group_Higgs_wh3l_zg_13TeV_pt243","histo_H_htt",25,10,200);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt243->SetBinContent(1,0.003295073);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt243->SetBinContent(2,0.03279834);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt243->SetBinContent(3,0.03554916);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt243->SetBinContent(4,0.01371769);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt243->SetBinContent(5,0.002420074);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt243->SetBinContent(6,0.0009963103);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt243->SetBinError(1,0.00159901);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt243->SetBinError(2,0.005812903);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt243->SetBinError(3,0.00611322);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt243->SetBinError(4,0.004168475);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt243->SetBinError(5,0.001734508);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt243->SetBinError(6,0.0009963103);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt243->SetEntries(180);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt243->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_zg_13TeV_pt243->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt243->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt243->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt243->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt243->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt243->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt243->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt243->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt243->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt243->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt243->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt243->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt243->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt243->GetZaxis()->SetTitleFont(42);
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
   
   
   TH1D *new_histo_group_Higgs_wh3l_zg_13TeV_pt244 = new TH1D("new_histo_group_Higgs_wh3l_zg_13TeV_pt244","histo_H_htt",25,10,200);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt244->SetBinContent(1,0.003295073);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt244->SetBinContent(2,0.03279834);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt244->SetBinContent(3,0.03554916);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt244->SetBinContent(4,0.01371769);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt244->SetBinContent(5,0.002420074);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt244->SetBinContent(6,0.0009963103);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt244->SetBinError(1,0.00159901);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt244->SetBinError(2,0.005812903);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt244->SetBinError(3,0.00611322);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt244->SetBinError(4,0.004168475);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt244->SetBinError(5,0.001734508);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt244->SetBinError(6,0.0009963103);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt244->SetEntries(180);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt244->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_zg_13TeV_pt244->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt244->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt244->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt244->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt244->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt244->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt244->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt244->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt244->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt244->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt244->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt244->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt244->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_zg_13TeV_pt244->GetZaxis()->SetTitleFont(42);
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
   49.20963,
   52.85895,
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
   6.154547,
   6.686904,
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
   6.139713,
   6.680718,
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
   Graph_Graph3009->SetMinimum(-5.954033);
   Graph_Graph3009->SetMaximum(65.49364);
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
   
   TH1F *hframe_copy45 = new TH1F("hframe_copy45","",1000,10,200);
   hframe_copy45->SetMinimum(0);
   hframe_copy45->SetMaximum(185.3101);
   hframe_copy45->SetDirectory(0);
   hframe_copy45->SetStats(0);
   hframe_copy45->SetLineStyle(0);
   hframe_copy45->SetMarkerStyle(20);
   hframe_copy45->GetXaxis()->SetTitle("lept2_p_{T} [GeV]");
   hframe_copy45->GetXaxis()->SetNdivisions(506);
   hframe_copy45->GetXaxis()->SetLabelFont(42);
   hframe_copy45->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy45->GetXaxis()->SetLabelSize(0.05);
   hframe_copy45->GetXaxis()->SetTitleSize(0.06);
   hframe_copy45->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy45->GetXaxis()->SetTitleFont(42);
   hframe_copy45->GetYaxis()->SetTitle("Events");
   hframe_copy45->GetYaxis()->SetLabelFont(42);
   hframe_copy45->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy45->GetYaxis()->SetLabelSize(0.05);
   hframe_copy45->GetYaxis()->SetTitleSize(0.06);
   hframe_copy45->GetYaxis()->SetTitleOffset(1.25);
   hframe_copy45->GetYaxis()->SetTitleFont(42);
   hframe_copy45->GetZaxis()->SetLabelFont(42);
   hframe_copy45->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy45->GetZaxis()->SetLabelSize(0.05);
   hframe_copy45->GetZaxis()->SetTitleSize(0.06);
   hframe_copy45->GetZaxis()->SetTitleFont(42);
   hframe_copy45->Draw("sameaxis");
   ccwh3l_zg_13TeV_pt2->Modified();
   ccwh3l_zg_13TeV_pt2->cd();
   ccwh3l_zg_13TeV_pt2->SetSelected(ccwh3l_zg_13TeV_pt2);
}
