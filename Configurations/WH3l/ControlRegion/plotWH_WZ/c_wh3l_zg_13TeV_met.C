void c_wh3l_zg_13TeV_met()
{
//=========Macro generated from canvas: ccwh3l_zg_13TeV_met/cc
//=========  (Tue Jun 28 02:22:58 2016) by ROOT version6.02/13
   TCanvas *ccwh3l_zg_13TeV_met = new TCanvas("ccwh3l_zg_13TeV_met", "cc",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   ccwh3l_zg_13TeV_met->SetHighLightColor(2);
   ccwh3l_zg_13TeV_met->Range(-40,-23.89151,210,159.8893);
   ccwh3l_zg_13TeV_met->SetFillColor(0);
   ccwh3l_zg_13TeV_met->SetBorderMode(0);
   ccwh3l_zg_13TeV_met->SetBorderSize(2);
   ccwh3l_zg_13TeV_met->SetTickx(1);
   ccwh3l_zg_13TeV_met->SetTicky(1);
   ccwh3l_zg_13TeV_met->SetLeftMargin(0.16);
   ccwh3l_zg_13TeV_met->SetRightMargin(0.04);
   ccwh3l_zg_13TeV_met->SetTopMargin(0.05);
   ccwh3l_zg_13TeV_met->SetBottomMargin(0.13);
   ccwh3l_zg_13TeV_met->SetFrameFillStyle(0);
   ccwh3l_zg_13TeV_met->SetFrameBorderMode(0);
   ccwh3l_zg_13TeV_met->SetFrameFillStyle(0);
   ccwh3l_zg_13TeV_met->SetFrameBorderMode(0);
   
   TH1F *hframe221 = new TH1F("hframe221","",1000,0,200);
   hframe221->SetMinimum(0);
   hframe221->SetMaximum(150.7003);
   hframe221->SetDirectory(0);
   hframe221->SetStats(0);
   hframe221->SetLineStyle(0);
   hframe221->SetMarkerStyle(20);
   hframe221->GetXaxis()->SetTitle("pfmet [GeV]");
   hframe221->GetXaxis()->SetNdivisions(506);
   hframe221->GetXaxis()->SetLabelFont(42);
   hframe221->GetXaxis()->SetLabelOffset(0.007);
   hframe221->GetXaxis()->SetLabelSize(0.05);
   hframe221->GetXaxis()->SetTitleSize(0.06);
   hframe221->GetXaxis()->SetTitleOffset(0.9);
   hframe221->GetXaxis()->SetTitleFont(42);
   hframe221->GetYaxis()->SetTitle("Events");
   hframe221->GetYaxis()->SetLabelFont(42);
   hframe221->GetYaxis()->SetLabelOffset(0.007);
   hframe221->GetYaxis()->SetLabelSize(0.05);
   hframe221->GetYaxis()->SetTitleSize(0.06);
   hframe221->GetYaxis()->SetTitleOffset(1.25);
   hframe221->GetYaxis()->SetTitleFont(42);
   hframe221->GetZaxis()->SetLabelFont(42);
   hframe221->GetZaxis()->SetLabelOffset(0.007);
   hframe221->GetZaxis()->SetLabelSize(0.05);
   hframe221->GetZaxis()->SetTitleSize(0.06);
   hframe221->GetZaxis()->SetTitleFont(42);
   hframe221->Draw(" ");
   
   THStack *thsBackground_grouped_wh3l_zg_13TeV_met = new THStack();
   thsBackground_grouped_wh3l_zg_13TeV_met->SetName("thsBackground_grouped_wh3l_zg_13TeV_met");
   thsBackground_grouped_wh3l_zg_13TeV_met->SetTitle("thsBackground_grouped_wh3l_zg_13TeV_met");
   
   TH1F *thsBackground_grouped_wh3l_zg_13TeV_met_stack_45 = new TH1F("thsBackground_grouped_wh3l_zg_13TeV_met_stack_45","thsBackground_grouped_wh3l_zg_13TeV_met",20,0,200);
   thsBackground_grouped_wh3l_zg_13TeV_met_stack_45->SetMinimum(-0.001372722);
   thsBackground_grouped_wh3l_zg_13TeV_met_stack_45->SetMaximum(59.79521);
   thsBackground_grouped_wh3l_zg_13TeV_met_stack_45->SetDirectory(0);
   thsBackground_grouped_wh3l_zg_13TeV_met_stack_45->SetStats(0);
   thsBackground_grouped_wh3l_zg_13TeV_met_stack_45->SetLineStyle(0);
   thsBackground_grouped_wh3l_zg_13TeV_met_stack_45->SetMarkerStyle(20);
   thsBackground_grouped_wh3l_zg_13TeV_met_stack_45->GetXaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_met_stack_45->GetXaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_zg_13TeV_met_stack_45->GetXaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_zg_13TeV_met_stack_45->GetXaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_zg_13TeV_met_stack_45->GetXaxis()->SetTitleOffset(0.9);
   thsBackground_grouped_wh3l_zg_13TeV_met_stack_45->GetXaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_met_stack_45->GetYaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_met_stack_45->GetYaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_zg_13TeV_met_stack_45->GetYaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_zg_13TeV_met_stack_45->GetYaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_zg_13TeV_met_stack_45->GetYaxis()->SetTitleOffset(1.25);
   thsBackground_grouped_wh3l_zg_13TeV_met_stack_45->GetYaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_met_stack_45->GetZaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_met_stack_45->GetZaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_zg_13TeV_met_stack_45->GetZaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_zg_13TeV_met_stack_45->GetZaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_zg_13TeV_met_stack_45->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_met->SetHistogram(thsBackground_grouped_wh3l_zg_13TeV_met_stack_45);
   
   
   TH1D *new_histo_group_Fake_wh3l_zg_13TeV_met222 = new TH1D("new_histo_group_Fake_wh3l_zg_13TeV_met222","histo_Fake",20,0,200);
   new_histo_group_Fake_wh3l_zg_13TeV_met222->SetBinContent(1,4.137576);
   new_histo_group_Fake_wh3l_zg_13TeV_met222->SetBinContent(2,12.12007);
   new_histo_group_Fake_wh3l_zg_13TeV_met222->SetBinContent(3,6.697769);
   new_histo_group_Fake_wh3l_zg_13TeV_met222->SetBinContent(4,1.171537);
   new_histo_group_Fake_wh3l_zg_13TeV_met222->SetBinError(1,1.959205);
   new_histo_group_Fake_wh3l_zg_13TeV_met222->SetBinError(2,2.958828);
   new_histo_group_Fake_wh3l_zg_13TeV_met222->SetBinError(3,2.161852);
   new_histo_group_Fake_wh3l_zg_13TeV_met222->SetBinError(4,1.150845);
   new_histo_group_Fake_wh3l_zg_13TeV_met222->SetEntries(442);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_zg_13TeV_met222->SetFillColor(ci);
   new_histo_group_Fake_wh3l_zg_13TeV_met222->SetFillStyle(3001);

   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_zg_13TeV_met222->SetLineColor(ci);
   new_histo_group_Fake_wh3l_zg_13TeV_met222->GetXaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_zg_13TeV_met222->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_zg_13TeV_met222->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_zg_13TeV_met222->GetXaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_zg_13TeV_met222->GetYaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_zg_13TeV_met222->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_zg_13TeV_met222->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_zg_13TeV_met222->GetYaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_zg_13TeV_met222->GetZaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_zg_13TeV_met222->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_zg_13TeV_met222->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_zg_13TeV_met222->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_met->Add(new_histo_group_Fake_wh3l_zg_13TeV_met,"");
   
   TH1D *new_histo_group_WW_wh3l_zg_13TeV_met223 = new TH1D("new_histo_group_WW_wh3l_zg_13TeV_met223","histo_WW",20,0,200);
   new_histo_group_WW_wh3l_zg_13TeV_met223->SetBinContent(3,0.009961222);
   new_histo_group_WW_wh3l_zg_13TeV_met223->SetBinError(3,0.009961222);
   new_histo_group_WW_wh3l_zg_13TeV_met223->SetEntries(1);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_zg_13TeV_met223->SetFillColor(ci);
   new_histo_group_WW_wh3l_zg_13TeV_met223->SetFillStyle(3001);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_zg_13TeV_met223->SetLineColor(ci);
   new_histo_group_WW_wh3l_zg_13TeV_met223->GetXaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_zg_13TeV_met223->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_zg_13TeV_met223->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_zg_13TeV_met223->GetXaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_zg_13TeV_met223->GetYaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_zg_13TeV_met223->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_zg_13TeV_met223->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_zg_13TeV_met223->GetYaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_zg_13TeV_met223->GetZaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_zg_13TeV_met223->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_zg_13TeV_met223->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_zg_13TeV_met223->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_met->Add(new_histo_group_WW_wh3l_zg_13TeV_met,"");
   
   TH1D *new_histo_group_VVV_wh3l_zg_13TeV_met224 = new TH1D("new_histo_group_VVV_wh3l_zg_13TeV_met224","histo_VVV",20,0,200);
   new_histo_group_VVV_wh3l_zg_13TeV_met224->SetBinContent(4,-0.0006863608);
   new_histo_group_VVV_wh3l_zg_13TeV_met224->SetBinError(4,0.0006863608);
   new_histo_group_VVV_wh3l_zg_13TeV_met224->SetEntries(1);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_zg_13TeV_met224->SetFillColor(ci);
   new_histo_group_VVV_wh3l_zg_13TeV_met224->SetFillStyle(3001);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_zg_13TeV_met224->SetLineColor(ci);
   new_histo_group_VVV_wh3l_zg_13TeV_met224->GetXaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_zg_13TeV_met224->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_zg_13TeV_met224->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_zg_13TeV_met224->GetXaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_zg_13TeV_met224->GetYaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_zg_13TeV_met224->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_zg_13TeV_met224->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_zg_13TeV_met224->GetYaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_zg_13TeV_met224->GetZaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_zg_13TeV_met224->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_zg_13TeV_met224->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_zg_13TeV_met224->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_met->Add(new_histo_group_VVV_wh3l_zg_13TeV_met,"");
   
   TH1D *new_histo_group_Vg_wh3l_zg_13TeV_met225 = new TH1D("new_histo_group_Vg_wh3l_zg_13TeV_met225","histo_Vg",20,0,200);
   new_histo_group_Vg_wh3l_zg_13TeV_met225->SetBinContent(1,23.76009);
   new_histo_group_Vg_wh3l_zg_13TeV_met225->SetBinContent(2,43.89963);
   new_histo_group_Vg_wh3l_zg_13TeV_met225->SetBinContent(3,25.4515);
   new_histo_group_Vg_wh3l_zg_13TeV_met225->SetBinContent(4,7.082289);
   new_histo_group_Vg_wh3l_zg_13TeV_met225->SetBinError(1,1.878297);
   new_histo_group_Vg_wh3l_zg_13TeV_met225->SetBinError(2,2.521908);
   new_histo_group_Vg_wh3l_zg_13TeV_met225->SetBinError(3,1.902289);
   new_histo_group_Vg_wh3l_zg_13TeV_met225->SetBinError(4,0.9588761);
   new_histo_group_Vg_wh3l_zg_13TeV_met225->SetEntries(1327);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_zg_13TeV_met225->SetFillColor(ci);
   new_histo_group_Vg_wh3l_zg_13TeV_met225->SetFillStyle(3001);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_zg_13TeV_met225->SetLineColor(ci);
   new_histo_group_Vg_wh3l_zg_13TeV_met225->GetXaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_zg_13TeV_met225->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_zg_13TeV_met225->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_zg_13TeV_met225->GetXaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_zg_13TeV_met225->GetYaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_zg_13TeV_met225->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_zg_13TeV_met225->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_zg_13TeV_met225->GetYaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_zg_13TeV_met225->GetZaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_zg_13TeV_met225->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_zg_13TeV_met225->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_zg_13TeV_met225->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_met->Add(new_histo_group_Vg_wh3l_zg_13TeV_met,"");
   
   TH1D *new_histo_group_ZZ_wh3l_zg_13TeV_met226 = new TH1D("new_histo_group_ZZ_wh3l_zg_13TeV_met226","histo_ZZ",20,0,200);
   new_histo_group_ZZ_wh3l_zg_13TeV_met226->SetBinContent(1,0.1087932);
   new_histo_group_ZZ_wh3l_zg_13TeV_met226->SetBinContent(2,0.4532237);
   new_histo_group_ZZ_wh3l_zg_13TeV_met226->SetBinContent(3,0.1743242);
   new_histo_group_ZZ_wh3l_zg_13TeV_met226->SetBinError(1,0.06343333);
   new_histo_group_ZZ_wh3l_zg_13TeV_met226->SetBinError(2,0.1384207);
   new_histo_group_ZZ_wh3l_zg_13TeV_met226->SetBinError(3,0.07910083);
   new_histo_group_ZZ_wh3l_zg_13TeV_met226->SetEntries(20);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_zg_13TeV_met226->SetFillColor(ci);
   new_histo_group_ZZ_wh3l_zg_13TeV_met226->SetFillStyle(3001);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_zg_13TeV_met226->SetLineColor(ci);
   new_histo_group_ZZ_wh3l_zg_13TeV_met226->GetXaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_zg_13TeV_met226->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_zg_13TeV_met226->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_zg_13TeV_met226->GetXaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_zg_13TeV_met226->GetYaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_zg_13TeV_met226->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_zg_13TeV_met226->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_zg_13TeV_met226->GetYaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_zg_13TeV_met226->GetZaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_zg_13TeV_met226->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_zg_13TeV_met226->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_zg_13TeV_met226->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_met->Add(new_histo_group_ZZ_wh3l_zg_13TeV_met,"");
   
   TH1D *new_histo_group_WZ_wh3l_zg_13TeV_met227 = new TH1D("new_histo_group_WZ_wh3l_zg_13TeV_met227","histo_ZZ",20,0,200);
   new_histo_group_WZ_wh3l_zg_13TeV_met227->SetBinContent(1,0.1087932);
   new_histo_group_WZ_wh3l_zg_13TeV_met227->SetBinContent(2,0.4532237);
   new_histo_group_WZ_wh3l_zg_13TeV_met227->SetBinContent(3,0.1743242);
   new_histo_group_WZ_wh3l_zg_13TeV_met227->SetBinError(1,0.06343333);
   new_histo_group_WZ_wh3l_zg_13TeV_met227->SetBinError(2,0.1384207);
   new_histo_group_WZ_wh3l_zg_13TeV_met227->SetBinError(3,0.07910083);
   new_histo_group_WZ_wh3l_zg_13TeV_met227->SetEntries(20);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_zg_13TeV_met227->SetFillColor(ci);
   new_histo_group_WZ_wh3l_zg_13TeV_met227->SetFillStyle(3001);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_zg_13TeV_met227->SetLineColor(ci);
   new_histo_group_WZ_wh3l_zg_13TeV_met227->GetXaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_zg_13TeV_met227->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_zg_13TeV_met227->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_zg_13TeV_met227->GetXaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_zg_13TeV_met227->GetYaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_zg_13TeV_met227->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_zg_13TeV_met227->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_zg_13TeV_met227->GetYaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_zg_13TeV_met227->GetZaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_zg_13TeV_met227->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_zg_13TeV_met227->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_zg_13TeV_met227->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_met->Add(new_histo_group_WZ_wh3l_zg_13TeV_met,"");
   
   TH1D *new_histo_group_Higgs_wh3l_zg_13TeV_met228 = new TH1D("new_histo_group_Higgs_wh3l_zg_13TeV_met228","histo_H_htt",20,0,200);
   new_histo_group_Higgs_wh3l_zg_13TeV_met228->SetBinContent(1,0.006865036);
   new_histo_group_Higgs_wh3l_zg_13TeV_met228->SetBinContent(2,0.02167486);
   new_histo_group_Higgs_wh3l_zg_13TeV_met228->SetBinContent(3,0.02061133);
   new_histo_group_Higgs_wh3l_zg_13TeV_met228->SetBinContent(4,0.0116528);
   new_histo_group_Higgs_wh3l_zg_13TeV_met228->SetBinError(1,0.003180627);
   new_histo_group_Higgs_wh3l_zg_13TeV_met228->SetBinError(2,0.005043358);
   new_histo_group_Higgs_wh3l_zg_13TeV_met228->SetBinError(3,0.004394841);
   new_histo_group_Higgs_wh3l_zg_13TeV_met228->SetBinError(4,0.003328596);
   new_histo_group_Higgs_wh3l_zg_13TeV_met228->SetEntries(136);
   new_histo_group_Higgs_wh3l_zg_13TeV_met228->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_zg_13TeV_met228->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_zg_13TeV_met228->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_zg_13TeV_met228->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_zg_13TeV_met228->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_zg_13TeV_met228->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_zg_13TeV_met228->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_zg_13TeV_met228->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_zg_13TeV_met228->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_zg_13TeV_met228->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_zg_13TeV_met228->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_zg_13TeV_met228->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_zg_13TeV_met228->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_zg_13TeV_met228->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_zg_13TeV_met228->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_zg_13TeV_met->Add(new_histo_group_Higgs_wh3l_zg_13TeV_met,"");
   thsBackground_grouped_wh3l_zg_13TeV_met->Draw("hist same");
   
   thsSignal_grouped_wh3l_zg_13TeV_met = new THStack();
   thsSignal_grouped_wh3l_zg_13TeV_met->SetName("thsSignal_grouped_wh3l_zg_13TeV_met");
   thsSignal_grouped_wh3l_zg_13TeV_met->SetTitle("thsSignal_grouped_wh3l_zg_13TeV_met");
   
   TH1F *thsSignal_grouped_wh3l_zg_13TeV_met_stack_46 = new TH1F("thsSignal_grouped_wh3l_zg_13TeV_met_stack_46","thsSignal_grouped_wh3l_zg_13TeV_met",20,0,200);
   thsSignal_grouped_wh3l_zg_13TeV_met_stack_46->SetMinimum(0);
   thsSignal_grouped_wh3l_zg_13TeV_met_stack_46->SetMaximum(0.02805413);
   thsSignal_grouped_wh3l_zg_13TeV_met_stack_46->SetDirectory(0);
   thsSignal_grouped_wh3l_zg_13TeV_met_stack_46->SetStats(0);
   thsSignal_grouped_wh3l_zg_13TeV_met_stack_46->SetLineStyle(0);
   thsSignal_grouped_wh3l_zg_13TeV_met_stack_46->SetMarkerStyle(20);
   thsSignal_grouped_wh3l_zg_13TeV_met_stack_46->GetXaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_zg_13TeV_met_stack_46->GetXaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_zg_13TeV_met_stack_46->GetXaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_zg_13TeV_met_stack_46->GetXaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_zg_13TeV_met_stack_46->GetXaxis()->SetTitleOffset(0.9);
   thsSignal_grouped_wh3l_zg_13TeV_met_stack_46->GetXaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_zg_13TeV_met_stack_46->GetYaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_zg_13TeV_met_stack_46->GetYaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_zg_13TeV_met_stack_46->GetYaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_zg_13TeV_met_stack_46->GetYaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_zg_13TeV_met_stack_46->GetYaxis()->SetTitleOffset(1.25);
   thsSignal_grouped_wh3l_zg_13TeV_met_stack_46->GetYaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_zg_13TeV_met_stack_46->GetZaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_zg_13TeV_met_stack_46->GetZaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_zg_13TeV_met_stack_46->GetZaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_zg_13TeV_met_stack_46->GetZaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_zg_13TeV_met_stack_46->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_zg_13TeV_met->SetHistogram(thsSignal_grouped_wh3l_zg_13TeV_met_stack_46);
   
   
   TH1D *new_histo_group_Higgs_wh3l_zg_13TeV_met229 = new TH1D("new_histo_group_Higgs_wh3l_zg_13TeV_met229","histo_H_htt",20,0,200);
   new_histo_group_Higgs_wh3l_zg_13TeV_met229->SetBinContent(1,0.006865036);
   new_histo_group_Higgs_wh3l_zg_13TeV_met229->SetBinContent(2,0.02167486);
   new_histo_group_Higgs_wh3l_zg_13TeV_met229->SetBinContent(3,0.02061133);
   new_histo_group_Higgs_wh3l_zg_13TeV_met229->SetBinContent(4,0.0116528);
   new_histo_group_Higgs_wh3l_zg_13TeV_met229->SetBinError(1,0.003180627);
   new_histo_group_Higgs_wh3l_zg_13TeV_met229->SetBinError(2,0.005043358);
   new_histo_group_Higgs_wh3l_zg_13TeV_met229->SetBinError(3,0.004394841);
   new_histo_group_Higgs_wh3l_zg_13TeV_met229->SetBinError(4,0.003328596);
   new_histo_group_Higgs_wh3l_zg_13TeV_met229->SetEntries(136);
   new_histo_group_Higgs_wh3l_zg_13TeV_met229->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_zg_13TeV_met229->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_zg_13TeV_met229->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_zg_13TeV_met229->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_zg_13TeV_met229->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_zg_13TeV_met229->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_zg_13TeV_met229->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_zg_13TeV_met229->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_zg_13TeV_met229->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_zg_13TeV_met229->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_zg_13TeV_met229->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_zg_13TeV_met229->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_zg_13TeV_met229->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_zg_13TeV_met229->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_zg_13TeV_met229->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_zg_13TeV_met->Add(new_histo_group_Higgs_wh3l_zg_13TeV_met,"");
   thsSignal_grouped_wh3l_zg_13TeV_met->Draw("hist same noclear");
   
   Double_t _fx3045[20] = {
   5,
   15,
   25,
   35,
   45,
   55,
   65,
   75,
   85,
   95,
   105,
   115,
   125,
   135,
   145,
   155,
   165,
   175,
   185,
   195};
   Double_t _fy3045[20] = {
   28.10068,
   56.90479,
   32.90257,
   8.605077,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t _felx3045[20] = {
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5};
   Double_t _fely3045[20] = {
   4.165486,
   6.83945,
   4.714551,
   2.191209,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t _fehx3045[20] = {
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5};
   Double_t _fehy3045[20] = {
   4.165491,
   6.839448,
   4.714556,
   2.191208,
   0,
   0,
   0,
   0,
   0,
   0,
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
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(20,_fx3045,_fy3045,_felx3045,_fehx3045,_fely3045,_fehy3045);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(12);
   grae->SetFillStyle(3004);
   grae->SetLineColor(12);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3045 = new TH1F("Graph_Graph3045","",100,0,220);
   Graph_Graph3045->SetMinimum(0);
   Graph_Graph3045->SetMaximum(70.11866);
   Graph_Graph3045->SetDirectory(0);
   Graph_Graph3045->SetStats(0);
   Graph_Graph3045->SetLineStyle(0);
   Graph_Graph3045->SetMarkerStyle(20);
   Graph_Graph3045->GetXaxis()->SetLabelFont(42);
   Graph_Graph3045->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3045->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3045->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3045->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3045->GetXaxis()->SetTitleFont(42);
   Graph_Graph3045->GetYaxis()->SetLabelFont(42);
   Graph_Graph3045->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3045->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3045->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3045->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3045->GetYaxis()->SetTitleFont(42);
   Graph_Graph3045->GetZaxis()->SetLabelFont(42);
   Graph_Graph3045->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3045->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3045->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3045->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3045);
   
   grae->Draw("2");
   
   Double_t _fx3046[20] = {
   5,
   15,
   25,
   35,
   45,
   55,
   65,
   75,
   85,
   95,
   105,
   115,
   125,
   135,
   145,
   155,
   165,
   175,
   185,
   195};
   Double_t _fy3046[20] = {
   39,
   53,
   26,
   10,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t _felx3046[20] = {
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5};
   Double_t _fely3046[20] = {
   6.218223,
   7.257208,
   5.066111,
   3.108748,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t _fehx3046[20] = {
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5};
   Double_t _fehy3046[20] = {
   7.298524,
   8.32609,
   6.164451,
   4.267035,
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
   grae = new TGraphAsymmErrors(20,_fx3046,_fy3046,_felx3046,_fehx3046,_fely3046,_fehy3046);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(1);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3046 = new TH1F("Graph_Graph3046","",100,0,220);
   Graph_Graph3046->SetMinimum(0);
   Graph_Graph3046->SetMaximum(67.4587);
   Graph_Graph3046->SetDirectory(0);
   Graph_Graph3046->SetStats(0);
   Graph_Graph3046->SetLineStyle(0);
   Graph_Graph3046->SetMarkerStyle(20);
   Graph_Graph3046->GetXaxis()->SetLabelFont(42);
   Graph_Graph3046->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3046->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3046->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3046->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3046->GetXaxis()->SetTitleFont(42);
   Graph_Graph3046->GetYaxis()->SetLabelFont(42);
   Graph_Graph3046->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3046->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3046->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3046->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3046->GetYaxis()->SetTitleFont(42);
   Graph_Graph3046->GetZaxis()->SetLabelFont(42);
   Graph_Graph3046->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3046->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3046->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3046->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3046);
   
   grae->Draw("p0");
   
   TLegend *leg = new TLegend(0.2,0.55,0.8,0.88,NULL,"brNDC");
   leg->SetTextFont(62);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("new_histo_group_Fake_wh3l_zg_13TeV_met","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_zg_13TeV_met","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_zg_13TeV_met","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_zg_13TeV_met","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_zg_13TeV_met","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_zg_13TeV_met","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_zg_13TeV_met","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_zg_13TeV_met","Data","EPL");
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
   entry=leg->AddEntry("new_histo_group_Fake_wh3l_zg_13TeV_met","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_zg_13TeV_met","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_zg_13TeV_met","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_zg_13TeV_met","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_zg_13TeV_met","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_zg_13TeV_met","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_zg_13TeV_met","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_zg_13TeV_met","Data","EPL");
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
   
   TH1F *hframe_copy230 = new TH1F("hframe_copy230","",1000,0,200);
   hframe_copy230->SetMinimum(0);
   hframe_copy230->SetMaximum(150.7003);
   hframe_copy230->SetDirectory(0);
   hframe_copy230->SetStats(0);
   hframe_copy230->SetLineStyle(0);
   hframe_copy230->SetMarkerStyle(20);
   hframe_copy230->GetXaxis()->SetTitle("pfmet [GeV]");
   hframe_copy230->GetXaxis()->SetNdivisions(506);
   hframe_copy230->GetXaxis()->SetLabelFont(42);
   hframe_copy230->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy230->GetXaxis()->SetLabelSize(0.05);
   hframe_copy230->GetXaxis()->SetTitleSize(0.06);
   hframe_copy230->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy230->GetXaxis()->SetTitleFont(42);
   hframe_copy230->GetYaxis()->SetTitle("Events");
   hframe_copy230->GetYaxis()->SetLabelFont(42);
   hframe_copy230->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy230->GetYaxis()->SetLabelSize(0.05);
   hframe_copy230->GetYaxis()->SetTitleSize(0.06);
   hframe_copy230->GetYaxis()->SetTitleOffset(1.25);
   hframe_copy230->GetYaxis()->SetTitleFont(42);
   hframe_copy230->GetZaxis()->SetLabelFont(42);
   hframe_copy230->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy230->GetZaxis()->SetLabelSize(0.05);
   hframe_copy230->GetZaxis()->SetTitleSize(0.06);
   hframe_copy230->GetZaxis()->SetTitleFont(42);
   hframe_copy230->Draw("sameaxis");
   ccwh3l_zg_13TeV_met->Modified();
   ccwh3l_zg_13TeV_met->cd();
   ccwh3l_zg_13TeV_met->SetSelected(ccwh3l_zg_13TeV_met);
}
