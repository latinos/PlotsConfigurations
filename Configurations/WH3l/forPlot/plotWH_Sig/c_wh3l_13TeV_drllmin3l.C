void c_wh3l_13TeV_drllmin3l()
{
//=========Macro generated from canvas: ccwh3l_13TeV_drllmin3l/cc
//=========  (Wed Jun 29 01:51:49 2016) by ROOT version6.02/13
   TCanvas *ccwh3l_13TeV_drllmin3l = new TCanvas("ccwh3l_13TeV_drllmin3l", "cc",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   ccwh3l_13TeV_drllmin3l->SetHighLightColor(2);
   ccwh3l_13TeV_drllmin3l->Range(-1.2,-4.483279,6.3,30.00348);
   ccwh3l_13TeV_drllmin3l->SetFillColor(0);
   ccwh3l_13TeV_drllmin3l->SetBorderMode(0);
   ccwh3l_13TeV_drllmin3l->SetBorderSize(2);
   ccwh3l_13TeV_drllmin3l->SetTickx(1);
   ccwh3l_13TeV_drllmin3l->SetTicky(1);
   ccwh3l_13TeV_drllmin3l->SetLeftMargin(0.16);
   ccwh3l_13TeV_drllmin3l->SetRightMargin(0.04);
   ccwh3l_13TeV_drllmin3l->SetTopMargin(0.05);
   ccwh3l_13TeV_drllmin3l->SetBottomMargin(0.13);
   ccwh3l_13TeV_drllmin3l->SetFrameFillStyle(0);
   ccwh3l_13TeV_drllmin3l->SetFrameBorderMode(0);
   ccwh3l_13TeV_drllmin3l->SetFrameFillStyle(0);
   ccwh3l_13TeV_drllmin3l->SetFrameBorderMode(0);
   
   TH1F *hframe351 = new TH1F("hframe351","",1000,0,6);
   hframe351->SetMinimum(0);
   hframe351->SetMaximum(28.27915);
   hframe351->SetDirectory(0);
   hframe351->SetStats(0);
   hframe351->SetLineStyle(0);
   hframe351->SetMarkerStyle(20);
   hframe351->GetXaxis()->SetTitle("min #Delta Rm_{ll} [GeV]");
   hframe351->GetXaxis()->SetNdivisions(506);
   hframe351->GetXaxis()->SetLabelFont(42);
   hframe351->GetXaxis()->SetLabelOffset(0.007);
   hframe351->GetXaxis()->SetLabelSize(0.05);
   hframe351->GetXaxis()->SetTitleSize(0.06);
   hframe351->GetXaxis()->SetTitleOffset(0.9);
   hframe351->GetXaxis()->SetTitleFont(42);
   hframe351->GetYaxis()->SetTitle("Events");
   hframe351->GetYaxis()->SetLabelFont(42);
   hframe351->GetYaxis()->SetLabelOffset(0.007);
   hframe351->GetYaxis()->SetLabelSize(0.05);
   hframe351->GetYaxis()->SetTitleSize(0.06);
   hframe351->GetYaxis()->SetTitleOffset(1.25);
   hframe351->GetYaxis()->SetTitleFont(42);
   hframe351->GetZaxis()->SetLabelFont(42);
   hframe351->GetZaxis()->SetLabelOffset(0.007);
   hframe351->GetZaxis()->SetLabelSize(0.05);
   hframe351->GetZaxis()->SetTitleSize(0.06);
   hframe351->GetZaxis()->SetTitleFont(42);
   hframe351->Draw(" ");
   
   THStack *thsBackground_grouped_wh3l_13TeV_drllmin3l = new THStack();
   thsBackground_grouped_wh3l_13TeV_drllmin3l->SetName("thsBackground_grouped_wh3l_13TeV_drllmin3l");
   thsBackground_grouped_wh3l_13TeV_drllmin3l->SetTitle("thsBackground_grouped_wh3l_13TeV_drllmin3l");
   
   TH1F *thsBackground_grouped_wh3l_13TeV_drllmin3l_stack_71 = new TH1F("thsBackground_grouped_wh3l_13TeV_drllmin3l_stack_71","thsBackground_grouped_wh3l_13TeV_drllmin3l",5,0,6);
   thsBackground_grouped_wh3l_13TeV_drllmin3l_stack_71->SetMinimum(0);
   thsBackground_grouped_wh3l_13TeV_drllmin3l_stack_71->SetMaximum(11.87724);
   thsBackground_grouped_wh3l_13TeV_drllmin3l_stack_71->SetDirectory(0);
   thsBackground_grouped_wh3l_13TeV_drllmin3l_stack_71->SetStats(0);
   thsBackground_grouped_wh3l_13TeV_drllmin3l_stack_71->SetLineStyle(0);
   thsBackground_grouped_wh3l_13TeV_drllmin3l_stack_71->SetMarkerStyle(20);
   thsBackground_grouped_wh3l_13TeV_drllmin3l_stack_71->GetXaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_13TeV_drllmin3l_stack_71->GetXaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_13TeV_drllmin3l_stack_71->GetXaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_13TeV_drllmin3l_stack_71->GetXaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_13TeV_drllmin3l_stack_71->GetXaxis()->SetTitleOffset(0.9);
   thsBackground_grouped_wh3l_13TeV_drllmin3l_stack_71->GetXaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_drllmin3l_stack_71->GetYaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_13TeV_drllmin3l_stack_71->GetYaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_13TeV_drllmin3l_stack_71->GetYaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_13TeV_drllmin3l_stack_71->GetYaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_13TeV_drllmin3l_stack_71->GetYaxis()->SetTitleOffset(1.25);
   thsBackground_grouped_wh3l_13TeV_drllmin3l_stack_71->GetYaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_drllmin3l_stack_71->GetZaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_13TeV_drllmin3l_stack_71->GetZaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_13TeV_drllmin3l_stack_71->GetZaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_13TeV_drllmin3l_stack_71->GetZaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_13TeV_drllmin3l_stack_71->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_drllmin3l->SetHistogram(thsBackground_grouped_wh3l_13TeV_drllmin3l_stack_71);
   
   
   TH1D *new_histo_group_Fake_wh3l_13TeV_drllmin3l352 = new TH1D("new_histo_group_Fake_wh3l_13TeV_drllmin3l352","histo_Fake",5,0,6);
   new_histo_group_Fake_wh3l_13TeV_drllmin3l352->SetBinContent(1,1.449156);
   new_histo_group_Fake_wh3l_13TeV_drllmin3l352->SetBinContent(2,5.665677);
   new_histo_group_Fake_wh3l_13TeV_drllmin3l352->SetBinContent(3,2.613392);
   new_histo_group_Fake_wh3l_13TeV_drllmin3l352->SetBinError(1,1.142427);
   new_histo_group_Fake_wh3l_13TeV_drllmin3l352->SetBinError(2,1.853696);
   new_histo_group_Fake_wh3l_13TeV_drllmin3l352->SetBinError(3,1.363994);
   new_histo_group_Fake_wh3l_13TeV_drllmin3l352->SetEntries(109);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_13TeV_drllmin3l352->SetFillColor(ci);
   new_histo_group_Fake_wh3l_13TeV_drllmin3l352->SetFillStyle(3001);

   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_13TeV_drllmin3l352->SetLineColor(ci);
   new_histo_group_Fake_wh3l_13TeV_drllmin3l352->GetXaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_13TeV_drllmin3l352->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_13TeV_drllmin3l352->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_13TeV_drllmin3l352->GetXaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_13TeV_drllmin3l352->GetYaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_13TeV_drllmin3l352->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_13TeV_drllmin3l352->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_13TeV_drllmin3l352->GetYaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_13TeV_drllmin3l352->GetZaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_13TeV_drllmin3l352->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_13TeV_drllmin3l352->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_13TeV_drllmin3l352->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_drllmin3l->Add(new_histo_group_Fake_wh3l_13TeV_drllmin3l,"");
   
   TH1D *new_histo_group_WW_wh3l_13TeV_drllmin3l353 = new TH1D("new_histo_group_WW_wh3l_13TeV_drllmin3l353","histo_WW",5,0,6);
   new_histo_group_WW_wh3l_13TeV_drllmin3l353->SetBinContent(1,0.03345312);
   new_histo_group_WW_wh3l_13TeV_drllmin3l353->SetBinContent(2,0.03059851);
   new_histo_group_WW_wh3l_13TeV_drllmin3l353->SetBinContent(3,0.02465031);
   new_histo_group_WW_wh3l_13TeV_drllmin3l353->SetBinError(1,0.02374035);
   new_histo_group_WW_wh3l_13TeV_drllmin3l353->SetBinError(2,0.02166783);
   new_histo_group_WW_wh3l_13TeV_drllmin3l353->SetBinError(3,0.0176327);
   new_histo_group_WW_wh3l_13TeV_drllmin3l353->SetEntries(6);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_13TeV_drllmin3l353->SetFillColor(ci);
   new_histo_group_WW_wh3l_13TeV_drllmin3l353->SetFillStyle(3001);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_13TeV_drllmin3l353->SetLineColor(ci);
   new_histo_group_WW_wh3l_13TeV_drllmin3l353->GetXaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_13TeV_drllmin3l353->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_13TeV_drllmin3l353->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_13TeV_drllmin3l353->GetXaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_13TeV_drllmin3l353->GetYaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_13TeV_drllmin3l353->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_13TeV_drllmin3l353->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_13TeV_drllmin3l353->GetYaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_13TeV_drllmin3l353->GetZaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_13TeV_drllmin3l353->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_13TeV_drllmin3l353->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_13TeV_drllmin3l353->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_drllmin3l->Add(new_histo_group_WW_wh3l_13TeV_drllmin3l,"");
   
   TH1D *new_histo_group_VVV_wh3l_13TeV_drllmin3l354 = new TH1D("new_histo_group_VVV_wh3l_13TeV_drllmin3l354","histo_VVV",5,0,6);
   new_histo_group_VVV_wh3l_13TeV_drllmin3l354->SetBinContent(1,0.003188382);
   new_histo_group_VVV_wh3l_13TeV_drllmin3l354->SetBinContent(2,0.003545835);
   new_histo_group_VVV_wh3l_13TeV_drllmin3l354->SetBinContent(3,0.001584577);
   new_histo_group_VVV_wh3l_13TeV_drllmin3l354->SetBinError(1,0.001430062);
   new_histo_group_VVV_wh3l_13TeV_drllmin3l354->SetBinError(2,0.001513438);
   new_histo_group_VVV_wh3l_13TeV_drllmin3l354->SetBinError(3,0.000960195);
   new_histo_group_VVV_wh3l_13TeV_drllmin3l354->SetEntries(14);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_13TeV_drllmin3l354->SetFillColor(ci);
   new_histo_group_VVV_wh3l_13TeV_drllmin3l354->SetFillStyle(3001);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_13TeV_drllmin3l354->SetLineColor(ci);
   new_histo_group_VVV_wh3l_13TeV_drllmin3l354->GetXaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_13TeV_drllmin3l354->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_13TeV_drllmin3l354->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_13TeV_drllmin3l354->GetXaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_13TeV_drllmin3l354->GetYaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_13TeV_drllmin3l354->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_13TeV_drllmin3l354->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_13TeV_drllmin3l354->GetYaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_13TeV_drllmin3l354->GetZaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_13TeV_drllmin3l354->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_13TeV_drllmin3l354->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_13TeV_drllmin3l354->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_drllmin3l->Add(new_histo_group_VVV_wh3l_13TeV_drllmin3l,"");
   
   TH1D *new_histo_group_Vg_wh3l_13TeV_drllmin3l355 = new TH1D("new_histo_group_Vg_wh3l_13TeV_drllmin3l355","histo_Vg",5,0,6);
   new_histo_group_Vg_wh3l_13TeV_drllmin3l355->SetBinContent(1,0.2783427);
   new_histo_group_Vg_wh3l_13TeV_drllmin3l355->SetBinContent(2,1.469862);
   new_histo_group_Vg_wh3l_13TeV_drllmin3l355->SetBinContent(3,0.8999641);
   new_histo_group_Vg_wh3l_13TeV_drllmin3l355->SetBinError(1,0.275436);
   new_histo_group_Vg_wh3l_13TeV_drllmin3l355->SetBinError(2,0.3784352);
   new_histo_group_Vg_wh3l_13TeV_drllmin3l355->SetBinError(3,0.3253896);
   new_histo_group_Vg_wh3l_13TeV_drllmin3l355->SetEntries(42);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_13TeV_drllmin3l355->SetFillColor(ci);
   new_histo_group_Vg_wh3l_13TeV_drllmin3l355->SetFillStyle(3001);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_13TeV_drllmin3l355->SetLineColor(ci);
   new_histo_group_Vg_wh3l_13TeV_drllmin3l355->GetXaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_13TeV_drllmin3l355->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_13TeV_drllmin3l355->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_13TeV_drllmin3l355->GetXaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_13TeV_drllmin3l355->GetYaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_13TeV_drllmin3l355->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_13TeV_drllmin3l355->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_13TeV_drllmin3l355->GetYaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_13TeV_drllmin3l355->GetZaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_13TeV_drllmin3l355->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_13TeV_drllmin3l355->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_13TeV_drllmin3l355->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_drllmin3l->Add(new_histo_group_Vg_wh3l_13TeV_drllmin3l,"");
   
   TH1D *new_histo_group_ZZ_wh3l_13TeV_drllmin3l356 = new TH1D("new_histo_group_ZZ_wh3l_13TeV_drllmin3l356","histo_ZZ",5,0,6);
   new_histo_group_ZZ_wh3l_13TeV_drllmin3l356->SetBinContent(1,0.138963);
   new_histo_group_ZZ_wh3l_13TeV_drllmin3l356->SetBinContent(2,0.4385263);
   new_histo_group_ZZ_wh3l_13TeV_drllmin3l356->SetBinContent(3,0.06911735);
   new_histo_group_ZZ_wh3l_13TeV_drllmin3l356->SetBinError(1,0.07148983);
   new_histo_group_ZZ_wh3l_13TeV_drllmin3l356->SetBinError(2,0.131989);
   new_histo_group_ZZ_wh3l_13TeV_drllmin3l356->SetBinError(3,0.0502156);
   new_histo_group_ZZ_wh3l_13TeV_drllmin3l356->SetEntries(19);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_13TeV_drllmin3l356->SetFillColor(ci);
   new_histo_group_ZZ_wh3l_13TeV_drllmin3l356->SetFillStyle(3001);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_13TeV_drllmin3l356->SetLineColor(ci);
   new_histo_group_ZZ_wh3l_13TeV_drllmin3l356->GetXaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_13TeV_drllmin3l356->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_13TeV_drllmin3l356->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_13TeV_drllmin3l356->GetXaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_13TeV_drllmin3l356->GetYaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_13TeV_drllmin3l356->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_13TeV_drllmin3l356->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_13TeV_drllmin3l356->GetYaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_13TeV_drllmin3l356->GetZaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_13TeV_drllmin3l356->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_13TeV_drllmin3l356->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_13TeV_drllmin3l356->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_drllmin3l->Add(new_histo_group_ZZ_wh3l_13TeV_drllmin3l,"");
   
   TH1D *new_histo_group_WZ_wh3l_13TeV_drllmin3l357 = new TH1D("new_histo_group_WZ_wh3l_13TeV_drllmin3l357","histo_WZ",5,0,6);
   new_histo_group_WZ_wh3l_13TeV_drllmin3l357->SetBinContent(1,3.187993);
   new_histo_group_WZ_wh3l_13TeV_drllmin3l357->SetBinContent(2,3.385737);
   new_histo_group_WZ_wh3l_13TeV_drllmin3l357->SetBinContent(3,0.8154865);
   new_histo_group_WZ_wh3l_13TeV_drllmin3l357->SetBinError(1,0.1309384);
   new_histo_group_WZ_wh3l_13TeV_drllmin3l357->SetBinError(2,0.1359004);
   new_histo_group_WZ_wh3l_13TeV_drllmin3l357->SetBinError(3,0.06710929);
   new_histo_group_WZ_wh3l_13TeV_drllmin3l357->SetEntries(1516);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_13TeV_drllmin3l357->SetFillColor(ci);
   new_histo_group_WZ_wh3l_13TeV_drllmin3l357->SetFillStyle(3001);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_13TeV_drllmin3l357->SetLineColor(ci);
   new_histo_group_WZ_wh3l_13TeV_drllmin3l357->GetXaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_13TeV_drllmin3l357->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_13TeV_drllmin3l357->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_13TeV_drllmin3l357->GetXaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_13TeV_drllmin3l357->GetYaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_13TeV_drllmin3l357->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_13TeV_drllmin3l357->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_13TeV_drllmin3l357->GetYaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_13TeV_drllmin3l357->GetZaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_13TeV_drllmin3l357->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_13TeV_drllmin3l357->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_13TeV_drllmin3l357->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_drllmin3l->Add(new_histo_group_WZ_wh3l_13TeV_drllmin3l,"");
   
   TH1D *new_histo_group_Higgs_wh3l_13TeV_drllmin3l358 = new TH1D("new_histo_group_Higgs_wh3l_13TeV_drllmin3l358","histo_H_htt",5,0,6);
   new_histo_group_Higgs_wh3l_13TeV_drllmin3l358->SetBinContent(1,0.4698677);
   new_histo_group_Higgs_wh3l_13TeV_drllmin3l358->SetBinContent(2,0.3177124);
   new_histo_group_Higgs_wh3l_13TeV_drllmin3l358->SetBinContent(3,0.04814493);
   new_histo_group_Higgs_wh3l_13TeV_drllmin3l358->SetBinError(1,0.02465398);
   new_histo_group_Higgs_wh3l_13TeV_drllmin3l358->SetBinError(2,0.01823076);
   new_histo_group_Higgs_wh3l_13TeV_drllmin3l358->SetBinError(3,0.006419247);
   new_histo_group_Higgs_wh3l_13TeV_drllmin3l358->SetEntries(1360);
   new_histo_group_Higgs_wh3l_13TeV_drllmin3l358->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_13TeV_drllmin3l358->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_13TeV_drllmin3l358->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_13TeV_drllmin3l358->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_13TeV_drllmin3l358->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_drllmin3l358->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_drllmin3l358->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_13TeV_drllmin3l358->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_13TeV_drllmin3l358->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_drllmin3l358->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_drllmin3l358->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_13TeV_drllmin3l358->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_13TeV_drllmin3l358->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_drllmin3l358->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_drllmin3l358->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_drllmin3l->Add(new_histo_group_Higgs_wh3l_13TeV_drllmin3l,"");
   thsBackground_grouped_wh3l_13TeV_drllmin3l->Draw("hist same");
   
   thsSignal_grouped_wh3l_13TeV_drllmin3l = new THStack();
   thsSignal_grouped_wh3l_13TeV_drllmin3l->SetName("thsSignal_grouped_wh3l_13TeV_drllmin3l");
   thsSignal_grouped_wh3l_13TeV_drllmin3l->SetTitle("thsSignal_grouped_wh3l_13TeV_drllmin3l");
   
   TH1F *thsSignal_grouped_wh3l_13TeV_drllmin3l_stack_72 = new TH1F("thsSignal_grouped_wh3l_13TeV_drllmin3l_stack_72","thsSignal_grouped_wh3l_13TeV_drllmin3l",5,0,6);
   thsSignal_grouped_wh3l_13TeV_drllmin3l_stack_72->SetMinimum(0);
   thsSignal_grouped_wh3l_13TeV_drllmin3l_stack_72->SetMaximum(0.5192478);
   thsSignal_grouped_wh3l_13TeV_drllmin3l_stack_72->SetDirectory(0);
   thsSignal_grouped_wh3l_13TeV_drllmin3l_stack_72->SetStats(0);
   thsSignal_grouped_wh3l_13TeV_drllmin3l_stack_72->SetLineStyle(0);
   thsSignal_grouped_wh3l_13TeV_drllmin3l_stack_72->SetMarkerStyle(20);
   thsSignal_grouped_wh3l_13TeV_drllmin3l_stack_72->GetXaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_13TeV_drllmin3l_stack_72->GetXaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_13TeV_drllmin3l_stack_72->GetXaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_13TeV_drllmin3l_stack_72->GetXaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_13TeV_drllmin3l_stack_72->GetXaxis()->SetTitleOffset(0.9);
   thsSignal_grouped_wh3l_13TeV_drllmin3l_stack_72->GetXaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_13TeV_drllmin3l_stack_72->GetYaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_13TeV_drllmin3l_stack_72->GetYaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_13TeV_drllmin3l_stack_72->GetYaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_13TeV_drllmin3l_stack_72->GetYaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_13TeV_drllmin3l_stack_72->GetYaxis()->SetTitleOffset(1.25);
   thsSignal_grouped_wh3l_13TeV_drllmin3l_stack_72->GetYaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_13TeV_drllmin3l_stack_72->GetZaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_13TeV_drllmin3l_stack_72->GetZaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_13TeV_drllmin3l_stack_72->GetZaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_13TeV_drllmin3l_stack_72->GetZaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_13TeV_drllmin3l_stack_72->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_13TeV_drllmin3l->SetHistogram(thsSignal_grouped_wh3l_13TeV_drllmin3l_stack_72);
   
   
   TH1D *new_histo_group_Higgs_wh3l_13TeV_drllmin3l359 = new TH1D("new_histo_group_Higgs_wh3l_13TeV_drllmin3l359","histo_H_htt",5,0,6);
   new_histo_group_Higgs_wh3l_13TeV_drllmin3l359->SetBinContent(1,0.4698677);
   new_histo_group_Higgs_wh3l_13TeV_drllmin3l359->SetBinContent(2,0.3177124);
   new_histo_group_Higgs_wh3l_13TeV_drllmin3l359->SetBinContent(3,0.04814493);
   new_histo_group_Higgs_wh3l_13TeV_drllmin3l359->SetBinError(1,0.02465398);
   new_histo_group_Higgs_wh3l_13TeV_drllmin3l359->SetBinError(2,0.01823076);
   new_histo_group_Higgs_wh3l_13TeV_drllmin3l359->SetBinError(3,0.006419247);
   new_histo_group_Higgs_wh3l_13TeV_drllmin3l359->SetEntries(1360);
   new_histo_group_Higgs_wh3l_13TeV_drllmin3l359->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_13TeV_drllmin3l359->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_13TeV_drllmin3l359->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_13TeV_drllmin3l359->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_13TeV_drllmin3l359->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_drllmin3l359->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_drllmin3l359->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_13TeV_drllmin3l359->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_13TeV_drllmin3l359->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_drllmin3l359->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_drllmin3l359->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_13TeV_drllmin3l359->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_13TeV_drllmin3l359->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_drllmin3l359->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_drllmin3l359->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_13TeV_drllmin3l->Add(new_histo_group_Higgs_wh3l_13TeV_drllmin3l,"");
   thsSignal_grouped_wh3l_13TeV_drllmin3l->Draw("hist same noclear");
   
   Double_t _fx3071[5] = {
   0.6,
   1.8,
   3,
   4.2,
   5.4};
   Double_t _fy3071[5] = {
   5.091096,
   10.99395,
   4.424195,
   0,
   0};
   Double_t _felx3071[5] = {
   0.6,
   0.6,
   0.6,
   0.6,
   0.6};
   Double_t _fely3071[5] = {
   1.728886,
   3.216841,
   2.043194,
   0,
   0};
   Double_t _fehx3071[5] = {
   0.6,
   0.6,
   0.6,
   0.6,
   0.6};
   Double_t _fehy3071[5] = {
   1.728378,
   3.216411,
   2.043114,
   0,
   0};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(5,_fx3071,_fy3071,_felx3071,_fehx3071,_fely3071,_fehy3071);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(12);
   grae->SetFillStyle(3004);
   grae->SetLineColor(12);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3071 = new TH1F("Graph_Graph3071","",100,0,6.6);
   Graph_Graph3071->SetMinimum(0);
   Graph_Graph3071->SetMaximum(15.63139);
   Graph_Graph3071->SetDirectory(0);
   Graph_Graph3071->SetStats(0);
   Graph_Graph3071->SetLineStyle(0);
   Graph_Graph3071->SetMarkerStyle(20);
   Graph_Graph3071->GetXaxis()->SetLabelFont(42);
   Graph_Graph3071->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3071->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3071->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3071->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3071->GetXaxis()->SetTitleFont(42);
   Graph_Graph3071->GetYaxis()->SetLabelFont(42);
   Graph_Graph3071->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3071->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3071->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3071->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3071->GetYaxis()->SetTitleFont(42);
   Graph_Graph3071->GetZaxis()->SetLabelFont(42);
   Graph_Graph3071->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3071->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3071->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3071->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3071);
   
   grae->Draw("2");
   
   Double_t _fx3072[5] = {
   0.6,
   1.8,
   3,
   4.2,
   5.4};
   Double_t _fy3072[5] = {
   0,
   0,
   0,
   0,
   0};
   Double_t _felx3072[5] = {
   0.6,
   0.6,
   0.6,
   0.6,
   0.6};
   Double_t _fely3072[5] = {
   0,
   0,
   0,
   0,
   0};
   Double_t _fehx3072[5] = {
   0.6,
   0.6,
   0.6,
   0.6,
   0.6};
   Double_t _fehy3072[5] = {
   1.147908,
   1.147908,
   1.147908,
   1.147908,
   1.147908};
   grae = new TGraphAsymmErrors(5,_fx3072,_fy3072,_felx3072,_fehx3072,_fely3072,_fehy3072);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(1);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3072 = new TH1F("Graph_Graph3072","",100,0,6.6);
   Graph_Graph3072->SetMinimum(0);
   Graph_Graph3072->SetMaximum(1.262698);
   Graph_Graph3072->SetDirectory(0);
   Graph_Graph3072->SetStats(0);
   Graph_Graph3072->SetLineStyle(0);
   Graph_Graph3072->SetMarkerStyle(20);
   Graph_Graph3072->GetXaxis()->SetLabelFont(42);
   Graph_Graph3072->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3072->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3072->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3072->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3072->GetXaxis()->SetTitleFont(42);
   Graph_Graph3072->GetYaxis()->SetLabelFont(42);
   Graph_Graph3072->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3072->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3072->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3072->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3072->GetYaxis()->SetTitleFont(42);
   Graph_Graph3072->GetZaxis()->SetLabelFont(42);
   Graph_Graph3072->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3072->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3072->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3072->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3072);
   
   grae->Draw("p0");
   
   TLegend *leg = new TLegend(0.2,0.7,0.8,0.9,NULL,"brNDC");
   leg->SetTextFont(62);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("new_histo_group_Fake_wh3l_13TeV_drllmin3l","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_13TeV_drllmin3l","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_13TeV_drllmin3l","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_13TeV_drllmin3l","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_13TeV_drllmin3l","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_13TeV_drllmin3l","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_13TeV_drllmin3l","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_13TeV_drllmin3l","Data","EPL");
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
   entry=leg->AddEntry("new_histo_group_Fake_wh3l_13TeV_drllmin3l","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_13TeV_drllmin3l","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_13TeV_drllmin3l","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_13TeV_drllmin3l","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_13TeV_drllmin3l","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_13TeV_drllmin3l","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_13TeV_drllmin3l","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_13TeV_drllmin3l","Data","EPL");
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
   
   TH1F *hframe_copy360 = new TH1F("hframe_copy360","",1000,0,6);
   hframe_copy360->SetMinimum(0);
   hframe_copy360->SetMaximum(28.27915);
   hframe_copy360->SetDirectory(0);
   hframe_copy360->SetStats(0);
   hframe_copy360->SetLineStyle(0);
   hframe_copy360->SetMarkerStyle(20);
   hframe_copy360->GetXaxis()->SetTitle("min #Delta Rm_{ll} [GeV]");
   hframe_copy360->GetXaxis()->SetNdivisions(506);
   hframe_copy360->GetXaxis()->SetLabelFont(42);
   hframe_copy360->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy360->GetXaxis()->SetLabelSize(0.05);
   hframe_copy360->GetXaxis()->SetTitleSize(0.06);
   hframe_copy360->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy360->GetXaxis()->SetTitleFont(42);
   hframe_copy360->GetYaxis()->SetTitle("Events");
   hframe_copy360->GetYaxis()->SetLabelFont(42);
   hframe_copy360->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy360->GetYaxis()->SetLabelSize(0.05);
   hframe_copy360->GetYaxis()->SetTitleSize(0.06);
   hframe_copy360->GetYaxis()->SetTitleOffset(1.25);
   hframe_copy360->GetYaxis()->SetTitleFont(42);
   hframe_copy360->GetZaxis()->SetLabelFont(42);
   hframe_copy360->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy360->GetZaxis()->SetLabelSize(0.05);
   hframe_copy360->GetZaxis()->SetTitleSize(0.06);
   hframe_copy360->GetZaxis()->SetTitleFont(42);
   hframe_copy360->Draw("sameaxis");
   ccwh3l_13TeV_drllmin3l->Modified();
   ccwh3l_13TeV_drllmin3l->cd();
   ccwh3l_13TeV_drllmin3l->SetSelected(ccwh3l_13TeV_drllmin3l);
}
