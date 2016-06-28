void c_wh3l_13TeV_drllmin3l()
{
//=========Macro generated from canvas: ccwh3l_13TeV_drllmin3l/cc
//=========  (Tue Jun 28 13:56:24 2016) by ROOT version6.02/13
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
   
   TH1F *hframe231 = new TH1F("hframe231","",1000,0,6);
   hframe231->SetMinimum(0);
   hframe231->SetMaximum(28.27915);
   hframe231->SetDirectory(0);
   hframe231->SetStats(0);
   hframe231->SetLineStyle(0);
   hframe231->SetMarkerStyle(20);
   hframe231->GetXaxis()->SetTitle("min #Delta Rm_{ll} [GeV]");
   hframe231->GetXaxis()->SetNdivisions(506);
   hframe231->GetXaxis()->SetLabelFont(42);
   hframe231->GetXaxis()->SetLabelOffset(0.007);
   hframe231->GetXaxis()->SetLabelSize(0.05);
   hframe231->GetXaxis()->SetTitleSize(0.06);
   hframe231->GetXaxis()->SetTitleOffset(0.9);
   hframe231->GetXaxis()->SetTitleFont(42);
   hframe231->GetYaxis()->SetTitle("Events");
   hframe231->GetYaxis()->SetLabelFont(42);
   hframe231->GetYaxis()->SetLabelOffset(0.007);
   hframe231->GetYaxis()->SetLabelSize(0.05);
   hframe231->GetYaxis()->SetTitleSize(0.06);
   hframe231->GetYaxis()->SetTitleOffset(1.25);
   hframe231->GetYaxis()->SetTitleFont(42);
   hframe231->GetZaxis()->SetLabelFont(42);
   hframe231->GetZaxis()->SetLabelOffset(0.007);
   hframe231->GetZaxis()->SetLabelSize(0.05);
   hframe231->GetZaxis()->SetTitleSize(0.06);
   hframe231->GetZaxis()->SetTitleFont(42);
   hframe231->Draw(" ");
   
   THStack *thsBackground_grouped_wh3l_13TeV_drllmin3l = new THStack();
   thsBackground_grouped_wh3l_13TeV_drllmin3l->SetName("thsBackground_grouped_wh3l_13TeV_drllmin3l");
   thsBackground_grouped_wh3l_13TeV_drllmin3l->SetTitle("thsBackground_grouped_wh3l_13TeV_drllmin3l");
   
   TH1F *thsBackground_grouped_wh3l_13TeV_drllmin3l_stack_47 = new TH1F("thsBackground_grouped_wh3l_13TeV_drllmin3l_stack_47","thsBackground_grouped_wh3l_13TeV_drllmin3l",5,0,6);
   thsBackground_grouped_wh3l_13TeV_drllmin3l_stack_47->SetMinimum(0);
   thsBackground_grouped_wh3l_13TeV_drllmin3l_stack_47->SetMaximum(11.87724);
   thsBackground_grouped_wh3l_13TeV_drllmin3l_stack_47->SetDirectory(0);
   thsBackground_grouped_wh3l_13TeV_drllmin3l_stack_47->SetStats(0);
   thsBackground_grouped_wh3l_13TeV_drllmin3l_stack_47->SetLineStyle(0);
   thsBackground_grouped_wh3l_13TeV_drllmin3l_stack_47->SetMarkerStyle(20);
   thsBackground_grouped_wh3l_13TeV_drllmin3l_stack_47->GetXaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_13TeV_drllmin3l_stack_47->GetXaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_13TeV_drllmin3l_stack_47->GetXaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_13TeV_drllmin3l_stack_47->GetXaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_13TeV_drllmin3l_stack_47->GetXaxis()->SetTitleOffset(0.9);
   thsBackground_grouped_wh3l_13TeV_drllmin3l_stack_47->GetXaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_drllmin3l_stack_47->GetYaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_13TeV_drllmin3l_stack_47->GetYaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_13TeV_drllmin3l_stack_47->GetYaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_13TeV_drllmin3l_stack_47->GetYaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_13TeV_drllmin3l_stack_47->GetYaxis()->SetTitleOffset(1.25);
   thsBackground_grouped_wh3l_13TeV_drllmin3l_stack_47->GetYaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_drllmin3l_stack_47->GetZaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_13TeV_drllmin3l_stack_47->GetZaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_13TeV_drllmin3l_stack_47->GetZaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_13TeV_drllmin3l_stack_47->GetZaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_13TeV_drllmin3l_stack_47->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_drllmin3l->SetHistogram(thsBackground_grouped_wh3l_13TeV_drllmin3l_stack_47);
   
   
   TH1D *new_histo_group_Fake_wh3l_13TeV_drllmin3l232 = new TH1D("new_histo_group_Fake_wh3l_13TeV_drllmin3l232","histo_Fake",5,0,6);
   new_histo_group_Fake_wh3l_13TeV_drllmin3l232->SetBinContent(1,1.449156);
   new_histo_group_Fake_wh3l_13TeV_drllmin3l232->SetBinContent(2,5.665677);
   new_histo_group_Fake_wh3l_13TeV_drllmin3l232->SetBinContent(3,2.613392);
   new_histo_group_Fake_wh3l_13TeV_drllmin3l232->SetBinError(1,1.142427);
   new_histo_group_Fake_wh3l_13TeV_drllmin3l232->SetBinError(2,1.853696);
   new_histo_group_Fake_wh3l_13TeV_drllmin3l232->SetBinError(3,1.363994);
   new_histo_group_Fake_wh3l_13TeV_drllmin3l232->SetEntries(109);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_13TeV_drllmin3l232->SetFillColor(ci);
   new_histo_group_Fake_wh3l_13TeV_drllmin3l232->SetFillStyle(3001);

   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_13TeV_drllmin3l232->SetLineColor(ci);
   new_histo_group_Fake_wh3l_13TeV_drllmin3l232->GetXaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_13TeV_drllmin3l232->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_13TeV_drllmin3l232->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_13TeV_drllmin3l232->GetXaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_13TeV_drllmin3l232->GetYaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_13TeV_drllmin3l232->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_13TeV_drllmin3l232->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_13TeV_drllmin3l232->GetYaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_13TeV_drllmin3l232->GetZaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_13TeV_drllmin3l232->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_13TeV_drllmin3l232->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_13TeV_drllmin3l232->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_drllmin3l->Add(new_histo_group_Fake_wh3l_13TeV_drllmin3l,"");
   
   TH1D *new_histo_group_WW_wh3l_13TeV_drllmin3l233 = new TH1D("new_histo_group_WW_wh3l_13TeV_drllmin3l233","histo_WW",5,0,6);
   new_histo_group_WW_wh3l_13TeV_drllmin3l233->SetBinContent(1,0.03345312);
   new_histo_group_WW_wh3l_13TeV_drllmin3l233->SetBinContent(2,0.03059851);
   new_histo_group_WW_wh3l_13TeV_drllmin3l233->SetBinContent(3,0.02465031);
   new_histo_group_WW_wh3l_13TeV_drllmin3l233->SetBinError(1,0.02374035);
   new_histo_group_WW_wh3l_13TeV_drllmin3l233->SetBinError(2,0.02166783);
   new_histo_group_WW_wh3l_13TeV_drllmin3l233->SetBinError(3,0.0176327);
   new_histo_group_WW_wh3l_13TeV_drllmin3l233->SetEntries(6);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_13TeV_drllmin3l233->SetFillColor(ci);
   new_histo_group_WW_wh3l_13TeV_drllmin3l233->SetFillStyle(3001);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_13TeV_drllmin3l233->SetLineColor(ci);
   new_histo_group_WW_wh3l_13TeV_drllmin3l233->GetXaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_13TeV_drllmin3l233->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_13TeV_drllmin3l233->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_13TeV_drllmin3l233->GetXaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_13TeV_drllmin3l233->GetYaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_13TeV_drllmin3l233->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_13TeV_drllmin3l233->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_13TeV_drllmin3l233->GetYaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_13TeV_drllmin3l233->GetZaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_13TeV_drllmin3l233->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_13TeV_drllmin3l233->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_13TeV_drllmin3l233->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_drllmin3l->Add(new_histo_group_WW_wh3l_13TeV_drllmin3l,"");
   
   TH1D *new_histo_group_VVV_wh3l_13TeV_drllmin3l234 = new TH1D("new_histo_group_VVV_wh3l_13TeV_drllmin3l234","histo_VVV",5,0,6);
   new_histo_group_VVV_wh3l_13TeV_drllmin3l234->SetBinContent(1,0.003188382);
   new_histo_group_VVV_wh3l_13TeV_drllmin3l234->SetBinContent(2,0.003545835);
   new_histo_group_VVV_wh3l_13TeV_drllmin3l234->SetBinContent(3,0.001584577);
   new_histo_group_VVV_wh3l_13TeV_drllmin3l234->SetBinError(1,0.001430062);
   new_histo_group_VVV_wh3l_13TeV_drllmin3l234->SetBinError(2,0.001513438);
   new_histo_group_VVV_wh3l_13TeV_drllmin3l234->SetBinError(3,0.000960195);
   new_histo_group_VVV_wh3l_13TeV_drllmin3l234->SetEntries(14);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_13TeV_drllmin3l234->SetFillColor(ci);
   new_histo_group_VVV_wh3l_13TeV_drllmin3l234->SetFillStyle(3001);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_13TeV_drllmin3l234->SetLineColor(ci);
   new_histo_group_VVV_wh3l_13TeV_drllmin3l234->GetXaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_13TeV_drllmin3l234->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_13TeV_drllmin3l234->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_13TeV_drllmin3l234->GetXaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_13TeV_drllmin3l234->GetYaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_13TeV_drllmin3l234->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_13TeV_drllmin3l234->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_13TeV_drllmin3l234->GetYaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_13TeV_drllmin3l234->GetZaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_13TeV_drllmin3l234->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_13TeV_drllmin3l234->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_13TeV_drllmin3l234->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_drllmin3l->Add(new_histo_group_VVV_wh3l_13TeV_drllmin3l,"");
   
   TH1D *new_histo_group_Vg_wh3l_13TeV_drllmin3l235 = new TH1D("new_histo_group_Vg_wh3l_13TeV_drllmin3l235","histo_Vg",5,0,6);
   new_histo_group_Vg_wh3l_13TeV_drllmin3l235->SetBinContent(1,0.2783427);
   new_histo_group_Vg_wh3l_13TeV_drllmin3l235->SetBinContent(2,1.469862);
   new_histo_group_Vg_wh3l_13TeV_drllmin3l235->SetBinContent(3,0.8999641);
   new_histo_group_Vg_wh3l_13TeV_drllmin3l235->SetBinError(1,0.275436);
   new_histo_group_Vg_wh3l_13TeV_drllmin3l235->SetBinError(2,0.3784352);
   new_histo_group_Vg_wh3l_13TeV_drllmin3l235->SetBinError(3,0.3253896);
   new_histo_group_Vg_wh3l_13TeV_drllmin3l235->SetEntries(42);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_13TeV_drllmin3l235->SetFillColor(ci);
   new_histo_group_Vg_wh3l_13TeV_drllmin3l235->SetFillStyle(3001);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_13TeV_drllmin3l235->SetLineColor(ci);
   new_histo_group_Vg_wh3l_13TeV_drllmin3l235->GetXaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_13TeV_drllmin3l235->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_13TeV_drllmin3l235->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_13TeV_drllmin3l235->GetXaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_13TeV_drllmin3l235->GetYaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_13TeV_drllmin3l235->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_13TeV_drllmin3l235->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_13TeV_drllmin3l235->GetYaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_13TeV_drllmin3l235->GetZaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_13TeV_drllmin3l235->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_13TeV_drllmin3l235->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_13TeV_drllmin3l235->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_drllmin3l->Add(new_histo_group_Vg_wh3l_13TeV_drllmin3l,"");
   
   TH1D *new_histo_group_ZZ_wh3l_13TeV_drllmin3l236 = new TH1D("new_histo_group_ZZ_wh3l_13TeV_drllmin3l236","histo_ZZ",5,0,6);
   new_histo_group_ZZ_wh3l_13TeV_drllmin3l236->SetBinContent(1,0.138963);
   new_histo_group_ZZ_wh3l_13TeV_drllmin3l236->SetBinContent(2,0.4385263);
   new_histo_group_ZZ_wh3l_13TeV_drllmin3l236->SetBinContent(3,0.06911735);
   new_histo_group_ZZ_wh3l_13TeV_drllmin3l236->SetBinError(1,0.07148983);
   new_histo_group_ZZ_wh3l_13TeV_drllmin3l236->SetBinError(2,0.131989);
   new_histo_group_ZZ_wh3l_13TeV_drllmin3l236->SetBinError(3,0.0502156);
   new_histo_group_ZZ_wh3l_13TeV_drllmin3l236->SetEntries(19);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_13TeV_drllmin3l236->SetFillColor(ci);
   new_histo_group_ZZ_wh3l_13TeV_drllmin3l236->SetFillStyle(3001);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_13TeV_drllmin3l236->SetLineColor(ci);
   new_histo_group_ZZ_wh3l_13TeV_drllmin3l236->GetXaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_13TeV_drllmin3l236->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_13TeV_drllmin3l236->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_13TeV_drllmin3l236->GetXaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_13TeV_drllmin3l236->GetYaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_13TeV_drllmin3l236->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_13TeV_drllmin3l236->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_13TeV_drllmin3l236->GetYaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_13TeV_drllmin3l236->GetZaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_13TeV_drllmin3l236->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_13TeV_drllmin3l236->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_13TeV_drllmin3l236->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_drllmin3l->Add(new_histo_group_ZZ_wh3l_13TeV_drllmin3l,"");
   
   TH1D *new_histo_group_WZ_wh3l_13TeV_drllmin3l237 = new TH1D("new_histo_group_WZ_wh3l_13TeV_drllmin3l237","histo_WZ",5,0,6);
   new_histo_group_WZ_wh3l_13TeV_drllmin3l237->SetBinContent(1,3.187993);
   new_histo_group_WZ_wh3l_13TeV_drllmin3l237->SetBinContent(2,3.385737);
   new_histo_group_WZ_wh3l_13TeV_drllmin3l237->SetBinContent(3,0.8154865);
   new_histo_group_WZ_wh3l_13TeV_drllmin3l237->SetBinError(1,0.1309384);
   new_histo_group_WZ_wh3l_13TeV_drllmin3l237->SetBinError(2,0.1359004);
   new_histo_group_WZ_wh3l_13TeV_drllmin3l237->SetBinError(3,0.06710929);
   new_histo_group_WZ_wh3l_13TeV_drllmin3l237->SetEntries(1516);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_13TeV_drllmin3l237->SetFillColor(ci);
   new_histo_group_WZ_wh3l_13TeV_drllmin3l237->SetFillStyle(3001);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_13TeV_drllmin3l237->SetLineColor(ci);
   new_histo_group_WZ_wh3l_13TeV_drllmin3l237->GetXaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_13TeV_drllmin3l237->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_13TeV_drllmin3l237->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_13TeV_drllmin3l237->GetXaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_13TeV_drllmin3l237->GetYaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_13TeV_drllmin3l237->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_13TeV_drllmin3l237->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_13TeV_drllmin3l237->GetYaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_13TeV_drllmin3l237->GetZaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_13TeV_drllmin3l237->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_13TeV_drllmin3l237->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_13TeV_drllmin3l237->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_drllmin3l->Add(new_histo_group_WZ_wh3l_13TeV_drllmin3l,"");
   
   TH1D *new_histo_group_Higgs_wh3l_13TeV_drllmin3l238 = new TH1D("new_histo_group_Higgs_wh3l_13TeV_drllmin3l238","histo_H_htt",5,0,6);
   new_histo_group_Higgs_wh3l_13TeV_drllmin3l238->SetBinContent(1,0.4698677);
   new_histo_group_Higgs_wh3l_13TeV_drllmin3l238->SetBinContent(2,0.3177124);
   new_histo_group_Higgs_wh3l_13TeV_drllmin3l238->SetBinContent(3,0.04814493);
   new_histo_group_Higgs_wh3l_13TeV_drllmin3l238->SetBinError(1,0.02465398);
   new_histo_group_Higgs_wh3l_13TeV_drllmin3l238->SetBinError(2,0.01823076);
   new_histo_group_Higgs_wh3l_13TeV_drllmin3l238->SetBinError(3,0.006419247);
   new_histo_group_Higgs_wh3l_13TeV_drllmin3l238->SetEntries(1360);
   new_histo_group_Higgs_wh3l_13TeV_drllmin3l238->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_13TeV_drllmin3l238->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_13TeV_drllmin3l238->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_13TeV_drllmin3l238->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_13TeV_drllmin3l238->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_drllmin3l238->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_drllmin3l238->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_13TeV_drllmin3l238->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_13TeV_drllmin3l238->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_drllmin3l238->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_drllmin3l238->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_13TeV_drllmin3l238->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_13TeV_drllmin3l238->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_drllmin3l238->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_drllmin3l238->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_drllmin3l->Add(new_histo_group_Higgs_wh3l_13TeV_drllmin3l,"");
   thsBackground_grouped_wh3l_13TeV_drllmin3l->Draw("hist same");
   
   thsSignal_grouped_wh3l_13TeV_drllmin3l = new THStack();
   thsSignal_grouped_wh3l_13TeV_drllmin3l->SetName("thsSignal_grouped_wh3l_13TeV_drllmin3l");
   thsSignal_grouped_wh3l_13TeV_drllmin3l->SetTitle("thsSignal_grouped_wh3l_13TeV_drllmin3l");
   
   TH1F *thsSignal_grouped_wh3l_13TeV_drllmin3l_stack_48 = new TH1F("thsSignal_grouped_wh3l_13TeV_drllmin3l_stack_48","thsSignal_grouped_wh3l_13TeV_drllmin3l",5,0,6);
   thsSignal_grouped_wh3l_13TeV_drllmin3l_stack_48->SetMinimum(0);
   thsSignal_grouped_wh3l_13TeV_drllmin3l_stack_48->SetMaximum(0.5192478);
   thsSignal_grouped_wh3l_13TeV_drllmin3l_stack_48->SetDirectory(0);
   thsSignal_grouped_wh3l_13TeV_drllmin3l_stack_48->SetStats(0);
   thsSignal_grouped_wh3l_13TeV_drllmin3l_stack_48->SetLineStyle(0);
   thsSignal_grouped_wh3l_13TeV_drllmin3l_stack_48->SetMarkerStyle(20);
   thsSignal_grouped_wh3l_13TeV_drllmin3l_stack_48->GetXaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_13TeV_drllmin3l_stack_48->GetXaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_13TeV_drllmin3l_stack_48->GetXaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_13TeV_drllmin3l_stack_48->GetXaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_13TeV_drllmin3l_stack_48->GetXaxis()->SetTitleOffset(0.9);
   thsSignal_grouped_wh3l_13TeV_drllmin3l_stack_48->GetXaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_13TeV_drllmin3l_stack_48->GetYaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_13TeV_drllmin3l_stack_48->GetYaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_13TeV_drllmin3l_stack_48->GetYaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_13TeV_drllmin3l_stack_48->GetYaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_13TeV_drllmin3l_stack_48->GetYaxis()->SetTitleOffset(1.25);
   thsSignal_grouped_wh3l_13TeV_drllmin3l_stack_48->GetYaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_13TeV_drllmin3l_stack_48->GetZaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_13TeV_drllmin3l_stack_48->GetZaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_13TeV_drllmin3l_stack_48->GetZaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_13TeV_drllmin3l_stack_48->GetZaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_13TeV_drllmin3l_stack_48->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_13TeV_drllmin3l->SetHistogram(thsSignal_grouped_wh3l_13TeV_drllmin3l_stack_48);
   
   
   TH1D *new_histo_group_Higgs_wh3l_13TeV_drllmin3l239 = new TH1D("new_histo_group_Higgs_wh3l_13TeV_drllmin3l239","histo_H_htt",5,0,6);
   new_histo_group_Higgs_wh3l_13TeV_drllmin3l239->SetBinContent(1,0.4698677);
   new_histo_group_Higgs_wh3l_13TeV_drllmin3l239->SetBinContent(2,0.3177124);
   new_histo_group_Higgs_wh3l_13TeV_drllmin3l239->SetBinContent(3,0.04814493);
   new_histo_group_Higgs_wh3l_13TeV_drllmin3l239->SetBinError(1,0.02465398);
   new_histo_group_Higgs_wh3l_13TeV_drllmin3l239->SetBinError(2,0.01823076);
   new_histo_group_Higgs_wh3l_13TeV_drllmin3l239->SetBinError(3,0.006419247);
   new_histo_group_Higgs_wh3l_13TeV_drllmin3l239->SetEntries(1360);
   new_histo_group_Higgs_wh3l_13TeV_drllmin3l239->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_13TeV_drllmin3l239->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_13TeV_drllmin3l239->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_13TeV_drllmin3l239->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_13TeV_drllmin3l239->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_drllmin3l239->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_drllmin3l239->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_13TeV_drllmin3l239->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_13TeV_drllmin3l239->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_drllmin3l239->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_drllmin3l239->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_13TeV_drllmin3l239->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_13TeV_drllmin3l239->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_drllmin3l239->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_drllmin3l239->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_13TeV_drllmin3l->Add(new_histo_group_Higgs_wh3l_13TeV_drllmin3l,"");
   thsSignal_grouped_wh3l_13TeV_drllmin3l->Draw("hist same noclear");
   
   Double_t _fx3047[5] = {
   0.6,
   1.8,
   3,
   4.2,
   5.4};
   Double_t _fy3047[5] = {
   5.091096,
   10.99395,
   4.424195,
   0,
   0};
   Double_t _felx3047[5] = {
   0.6,
   0.6,
   0.6,
   0.6,
   0.6};
   Double_t _fely3047[5] = {
   1.701969,
   3.042745,
   1.986739,
   0,
   0};
   Double_t _fehx3047[5] = {
   0.6,
   0.6,
   0.6,
   0.6,
   0.6};
   Double_t _fehy3047[5] = {
   1.701969,
   3.042745,
   1.986739,
   0,
   0};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(5,_fx3047,_fy3047,_felx3047,_fehx3047,_fely3047,_fehy3047);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(12);
   grae->SetFillStyle(3004);
   grae->SetLineColor(12);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3047 = new TH1F("Graph_Graph3047","",100,0,6.6);
   Graph_Graph3047->SetMinimum(0);
   Graph_Graph3047->SetMaximum(15.44036);
   Graph_Graph3047->SetDirectory(0);
   Graph_Graph3047->SetStats(0);
   Graph_Graph3047->SetLineStyle(0);
   Graph_Graph3047->SetMarkerStyle(20);
   Graph_Graph3047->GetXaxis()->SetLabelFont(42);
   Graph_Graph3047->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3047->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3047->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3047->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3047->GetXaxis()->SetTitleFont(42);
   Graph_Graph3047->GetYaxis()->SetLabelFont(42);
   Graph_Graph3047->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3047->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3047->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3047->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3047->GetYaxis()->SetTitleFont(42);
   Graph_Graph3047->GetZaxis()->SetLabelFont(42);
   Graph_Graph3047->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3047->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3047->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3047->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3047);
   
   grae->Draw("2");
   
   Double_t _fx3048[5] = {
   0.6,
   1.8,
   3,
   4.2,
   5.4};
   Double_t _fy3048[5] = {
   0,
   0,
   0,
   0,
   0};
   Double_t _felx3048[5] = {
   0.6,
   0.6,
   0.6,
   0.6,
   0.6};
   Double_t _fely3048[5] = {
   0,
   0,
   0,
   0,
   0};
   Double_t _fehx3048[5] = {
   0.6,
   0.6,
   0.6,
   0.6,
   0.6};
   Double_t _fehy3048[5] = {
   1.147908,
   1.147908,
   1.147908,
   1.147908,
   1.147908};
   grae = new TGraphAsymmErrors(5,_fx3048,_fy3048,_felx3048,_fehx3048,_fely3048,_fehy3048);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(1);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3048 = new TH1F("Graph_Graph3048","",100,0,6.6);
   Graph_Graph3048->SetMinimum(0);
   Graph_Graph3048->SetMaximum(1.262698);
   Graph_Graph3048->SetDirectory(0);
   Graph_Graph3048->SetStats(0);
   Graph_Graph3048->SetLineStyle(0);
   Graph_Graph3048->SetMarkerStyle(20);
   Graph_Graph3048->GetXaxis()->SetLabelFont(42);
   Graph_Graph3048->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3048->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3048->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3048->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3048->GetXaxis()->SetTitleFont(42);
   Graph_Graph3048->GetYaxis()->SetLabelFont(42);
   Graph_Graph3048->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3048->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3048->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3048->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3048->GetYaxis()->SetTitleFont(42);
   Graph_Graph3048->GetZaxis()->SetLabelFont(42);
   Graph_Graph3048->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3048->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3048->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3048->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3048);
   
   grae->Draw("p0");
   
   TLegend *leg = new TLegend(0.2,0.55,0.8,0.88,NULL,"brNDC");
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
   
   leg = new TLegend(0.2,0.55,0.8,0.88,NULL,"brNDC");
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
   
   TH1F *hframe_copy240 = new TH1F("hframe_copy240","",1000,0,6);
   hframe_copy240->SetMinimum(0);
   hframe_copy240->SetMaximum(28.27915);
   hframe_copy240->SetDirectory(0);
   hframe_copy240->SetStats(0);
   hframe_copy240->SetLineStyle(0);
   hframe_copy240->SetMarkerStyle(20);
   hframe_copy240->GetXaxis()->SetTitle("min #Delta Rm_{ll} [GeV]");
   hframe_copy240->GetXaxis()->SetNdivisions(506);
   hframe_copy240->GetXaxis()->SetLabelFont(42);
   hframe_copy240->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy240->GetXaxis()->SetLabelSize(0.05);
   hframe_copy240->GetXaxis()->SetTitleSize(0.06);
   hframe_copy240->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy240->GetXaxis()->SetTitleFont(42);
   hframe_copy240->GetYaxis()->SetTitle("Events");
   hframe_copy240->GetYaxis()->SetLabelFont(42);
   hframe_copy240->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy240->GetYaxis()->SetLabelSize(0.05);
   hframe_copy240->GetYaxis()->SetTitleSize(0.06);
   hframe_copy240->GetYaxis()->SetTitleOffset(1.25);
   hframe_copy240->GetYaxis()->SetTitleFont(42);
   hframe_copy240->GetZaxis()->SetLabelFont(42);
   hframe_copy240->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy240->GetZaxis()->SetLabelSize(0.05);
   hframe_copy240->GetZaxis()->SetTitleSize(0.06);
   hframe_copy240->GetZaxis()->SetTitleFont(42);
   hframe_copy240->Draw("sameaxis");
   ccwh3l_13TeV_drllmin3l->Modified();
   ccwh3l_13TeV_drllmin3l->cd();
   ccwh3l_13TeV_drllmin3l->SetSelected(ccwh3l_13TeV_drllmin3l);
}
