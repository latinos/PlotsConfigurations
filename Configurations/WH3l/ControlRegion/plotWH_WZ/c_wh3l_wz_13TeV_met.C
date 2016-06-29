void c_wh3l_wz_13TeV_met()
{
//=========Macro generated from canvas: ccwh3l_wz_13TeV_met/cc
//=========  (Tue Jun 28 16:49:00 2016) by ROOT version6.02/13
   TCanvas *ccwh3l_wz_13TeV_met = new TCanvas("ccwh3l_wz_13TeV_met", "cc",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   ccwh3l_wz_13TeV_met->SetHighLightColor(2);
   ccwh3l_wz_13TeV_met->Range(-40,-13.62827,210,91.20455);
   ccwh3l_wz_13TeV_met->SetFillColor(0);
   ccwh3l_wz_13TeV_met->SetBorderMode(0);
   ccwh3l_wz_13TeV_met->SetBorderSize(2);
   ccwh3l_wz_13TeV_met->SetTickx(1);
   ccwh3l_wz_13TeV_met->SetTicky(1);
   ccwh3l_wz_13TeV_met->SetLeftMargin(0.16);
   ccwh3l_wz_13TeV_met->SetRightMargin(0.04);
   ccwh3l_wz_13TeV_met->SetTopMargin(0.05);
   ccwh3l_wz_13TeV_met->SetBottomMargin(0.13);
   ccwh3l_wz_13TeV_met->SetFrameFillStyle(0);
   ccwh3l_wz_13TeV_met->SetFrameBorderMode(0);
   ccwh3l_wz_13TeV_met->SetFrameFillStyle(0);
   ccwh3l_wz_13TeV_met->SetFrameBorderMode(0);
   
   TH1F *hframe105 = new TH1F("hframe105","",1000,0,200);
   hframe105->SetMinimum(0);
   hframe105->SetMaximum(85.96291);
   hframe105->SetDirectory(0);
   hframe105->SetStats(0);
   hframe105->SetLineStyle(0);
   hframe105->SetMarkerStyle(20);
   hframe105->GetXaxis()->SetTitle("pfmet [GeV]");
   hframe105->GetXaxis()->SetNdivisions(506);
   hframe105->GetXaxis()->SetLabelFont(42);
   hframe105->GetXaxis()->SetLabelOffset(0.007);
   hframe105->GetXaxis()->SetLabelSize(0.05);
   hframe105->GetXaxis()->SetTitleSize(0.06);
   hframe105->GetXaxis()->SetTitleOffset(0.9);
   hframe105->GetXaxis()->SetTitleFont(42);
   hframe105->GetYaxis()->SetTitle("Events");
   hframe105->GetYaxis()->SetLabelFont(42);
   hframe105->GetYaxis()->SetLabelOffset(0.007);
   hframe105->GetYaxis()->SetLabelSize(0.05);
   hframe105->GetYaxis()->SetTitleSize(0.06);
   hframe105->GetYaxis()->SetTitleOffset(1.25);
   hframe105->GetYaxis()->SetTitleFont(42);
   hframe105->GetZaxis()->SetLabelFont(42);
   hframe105->GetZaxis()->SetLabelOffset(0.007);
   hframe105->GetZaxis()->SetLabelSize(0.05);
   hframe105->GetZaxis()->SetTitleSize(0.06);
   hframe105->GetZaxis()->SetTitleFont(42);
   hframe105->Draw(" ");
   
   THStack *thsBackground_grouped_wh3l_wz_13TeV_met = new THStack();
   thsBackground_grouped_wh3l_wz_13TeV_met->SetName("thsBackground_grouped_wh3l_wz_13TeV_met");
   thsBackground_grouped_wh3l_wz_13TeV_met->SetTitle("thsBackground_grouped_wh3l_wz_13TeV_met");
   
   TH1F *thsBackground_grouped_wh3l_wz_13TeV_met_stack_14 = new TH1F("thsBackground_grouped_wh3l_wz_13TeV_met_stack_14","thsBackground_grouped_wh3l_wz_13TeV_met",40,0,200);
   thsBackground_grouped_wh3l_wz_13TeV_met_stack_14->SetMinimum(-1.542649);
   thsBackground_grouped_wh3l_wz_13TeV_met_stack_14->SetMaximum(26.67844);
   thsBackground_grouped_wh3l_wz_13TeV_met_stack_14->SetDirectory(0);
   thsBackground_grouped_wh3l_wz_13TeV_met_stack_14->SetStats(0);
   thsBackground_grouped_wh3l_wz_13TeV_met_stack_14->SetLineStyle(0);
   thsBackground_grouped_wh3l_wz_13TeV_met_stack_14->SetMarkerStyle(20);
   thsBackground_grouped_wh3l_wz_13TeV_met_stack_14->GetXaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_wz_13TeV_met_stack_14->GetXaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_wz_13TeV_met_stack_14->GetXaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_wz_13TeV_met_stack_14->GetXaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_wz_13TeV_met_stack_14->GetXaxis()->SetTitleOffset(0.9);
   thsBackground_grouped_wh3l_wz_13TeV_met_stack_14->GetXaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_wz_13TeV_met_stack_14->GetYaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_wz_13TeV_met_stack_14->GetYaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_wz_13TeV_met_stack_14->GetYaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_wz_13TeV_met_stack_14->GetYaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_wz_13TeV_met_stack_14->GetYaxis()->SetTitleOffset(1.25);
   thsBackground_grouped_wh3l_wz_13TeV_met_stack_14->GetYaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_wz_13TeV_met_stack_14->GetZaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_wz_13TeV_met_stack_14->GetZaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_wz_13TeV_met_stack_14->GetZaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_wz_13TeV_met_stack_14->GetZaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_wz_13TeV_met_stack_14->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_wz_13TeV_met->SetHistogram(thsBackground_grouped_wh3l_wz_13TeV_met_stack_14);
   
   
   TH1D *new_histo_group_Fake_wh3l_wz_13TeV_met106 = new TH1D("new_histo_group_Fake_wh3l_wz_13TeV_met106","histo_Fake",40,0,200);
   new_histo_group_Fake_wh3l_wz_13TeV_met106->SetBinContent(9,4.839483);
   new_histo_group_Fake_wh3l_wz_13TeV_met106->SetBinContent(10,1.696561);
   new_histo_group_Fake_wh3l_wz_13TeV_met106->SetBinContent(11,2.111411);
   new_histo_group_Fake_wh3l_wz_13TeV_met106->SetBinContent(12,0.1148024);
   new_histo_group_Fake_wh3l_wz_13TeV_met106->SetBinContent(13,1.289354);
   new_histo_group_Fake_wh3l_wz_13TeV_met106->SetBinContent(14,-0.9215783);
   new_histo_group_Fake_wh3l_wz_13TeV_met106->SetBinContent(15,-0.1027683);
   new_histo_group_Fake_wh3l_wz_13TeV_met106->SetBinContent(16,0.127831);
   new_histo_group_Fake_wh3l_wz_13TeV_met106->SetBinContent(17,0.648251);
   new_histo_group_Fake_wh3l_wz_13TeV_met106->SetBinContent(18,0.2904869);
   new_histo_group_Fake_wh3l_wz_13TeV_met106->SetBinContent(19,-0.02843639);
   new_histo_group_Fake_wh3l_wz_13TeV_met106->SetBinContent(20,0.2341628);
   new_histo_group_Fake_wh3l_wz_13TeV_met106->SetBinContent(21,-0.4227189);
   new_histo_group_Fake_wh3l_wz_13TeV_met106->SetBinContent(22,-0.08327505);
   new_histo_group_Fake_wh3l_wz_13TeV_met106->SetBinContent(23,-0.08818095);
   new_histo_group_Fake_wh3l_wz_13TeV_met106->SetBinContent(24,-0.1663388);
   new_histo_group_Fake_wh3l_wz_13TeV_met106->SetBinContent(25,0.180902);
   new_histo_group_Fake_wh3l_wz_13TeV_met106->SetBinContent(26,0.04214632);
   new_histo_group_Fake_wh3l_wz_13TeV_met106->SetBinContent(27,0.100722);
   new_histo_group_Fake_wh3l_wz_13TeV_met106->SetBinContent(28,0.4023693);
   new_histo_group_Fake_wh3l_wz_13TeV_met106->SetBinContent(29,-0.08548435);
   new_histo_group_Fake_wh3l_wz_13TeV_met106->SetBinContent(33,0.07568908);
   new_histo_group_Fake_wh3l_wz_13TeV_met106->SetBinContent(36,0.5976825);
   new_histo_group_Fake_wh3l_wz_13TeV_met106->SetBinContent(38,-0.1451545);
   new_histo_group_Fake_wh3l_wz_13TeV_met106->SetBinContent(39,-0.05804348);
   new_histo_group_Fake_wh3l_wz_13TeV_met106->SetBinContent(41,-0.09918789);
   new_histo_group_Fake_wh3l_wz_13TeV_met106->SetBinError(9,1.888571);
   new_histo_group_Fake_wh3l_wz_13TeV_met106->SetBinError(10,1.262175);
   new_histo_group_Fake_wh3l_wz_13TeV_met106->SetBinError(11,1.325906);
   new_histo_group_Fake_wh3l_wz_13TeV_met106->SetBinError(12,0.8280297);
   new_histo_group_Fake_wh3l_wz_13TeV_met106->SetBinError(13,0.938851);
   new_histo_group_Fake_wh3l_wz_13TeV_met106->SetBinError(14,0.6210712);
   new_histo_group_Fake_wh3l_wz_13TeV_met106->SetBinError(15,0.4546013);
   new_histo_group_Fake_wh3l_wz_13TeV_met106->SetBinError(16,0.4859009);
   new_histo_group_Fake_wh3l_wz_13TeV_met106->SetBinError(17,0.6099622);
   new_histo_group_Fake_wh3l_wz_13TeV_met106->SetBinError(18,0.6416811);
   new_histo_group_Fake_wh3l_wz_13TeV_met106->SetBinError(19,0.02843639);
   new_histo_group_Fake_wh3l_wz_13TeV_met106->SetBinError(20,0.4135041);
   new_histo_group_Fake_wh3l_wz_13TeV_met106->SetBinError(21,0.3055164);
   new_histo_group_Fake_wh3l_wz_13TeV_met106->SetBinError(22,0.06704772);
   new_histo_group_Fake_wh3l_wz_13TeV_met106->SetBinError(23,0.08818095);
   new_histo_group_Fake_wh3l_wz_13TeV_met106->SetBinError(24,0.2342388);
   new_histo_group_Fake_wh3l_wz_13TeV_met106->SetBinError(25,0.1319824);
   new_histo_group_Fake_wh3l_wz_13TeV_met106->SetBinError(26,0.1539915);
   new_histo_group_Fake_wh3l_wz_13TeV_met106->SetBinError(27,0.100722);
   new_histo_group_Fake_wh3l_wz_13TeV_met106->SetBinError(28,0.5294655);
   new_histo_group_Fake_wh3l_wz_13TeV_met106->SetBinError(29,0.06047217);
   new_histo_group_Fake_wh3l_wz_13TeV_met106->SetBinError(33,0.07568908);
   new_histo_group_Fake_wh3l_wz_13TeV_met106->SetBinError(36,0.5356114);
   new_histo_group_Fake_wh3l_wz_13TeV_met106->SetBinError(38,0.1029677);
   new_histo_group_Fake_wh3l_wz_13TeV_met106->SetBinError(39,0.05804348);
   new_histo_group_Fake_wh3l_wz_13TeV_met106->SetBinError(41,0.04462709);
   new_histo_group_Fake_wh3l_wz_13TeV_met106->SetEntries(337);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_wz_13TeV_met106->SetFillColor(ci);
   new_histo_group_Fake_wh3l_wz_13TeV_met106->SetFillStyle(3001);

   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_wz_13TeV_met106->SetLineColor(ci);
   new_histo_group_Fake_wh3l_wz_13TeV_met106->GetXaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_wz_13TeV_met106->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_wz_13TeV_met106->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_wz_13TeV_met106->GetXaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_wz_13TeV_met106->GetYaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_wz_13TeV_met106->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_wz_13TeV_met106->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_wz_13TeV_met106->GetYaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_wz_13TeV_met106->GetZaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_wz_13TeV_met106->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_wz_13TeV_met106->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_wz_13TeV_met106->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_wz_13TeV_met->Add(new_histo_group_Fake_wh3l_wz_13TeV_met,"");
   
   TH1D *new_histo_group_WW_wh3l_wz_13TeV_met107 = new TH1D("new_histo_group_WW_wh3l_wz_13TeV_met107","histo_WW",40,0,200);
   new_histo_group_WW_wh3l_wz_13TeV_met107->SetBinContent(9,0.03556199);
   new_histo_group_WW_wh3l_wz_13TeV_met107->SetBinContent(10,0.01458742);
   new_histo_group_WW_wh3l_wz_13TeV_met107->SetBinContent(14,0.01431565);
   new_histo_group_WW_wh3l_wz_13TeV_met107->SetBinContent(20,0.01092969);
   new_histo_group_WW_wh3l_wz_13TeV_met107->SetBinError(9,0.02515185);
   new_histo_group_WW_wh3l_wz_13TeV_met107->SetBinError(10,0.01458742);
   new_histo_group_WW_wh3l_wz_13TeV_met107->SetBinError(14,0.01431565);
   new_histo_group_WW_wh3l_wz_13TeV_met107->SetBinError(20,0.01092969);
   new_histo_group_WW_wh3l_wz_13TeV_met107->SetEntries(5);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_wz_13TeV_met107->SetFillColor(ci);
   new_histo_group_WW_wh3l_wz_13TeV_met107->SetFillStyle(3001);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_wz_13TeV_met107->SetLineColor(ci);
   new_histo_group_WW_wh3l_wz_13TeV_met107->GetXaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_wz_13TeV_met107->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_wz_13TeV_met107->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_wz_13TeV_met107->GetXaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_wz_13TeV_met107->GetYaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_wz_13TeV_met107->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_wz_13TeV_met107->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_wz_13TeV_met107->GetYaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_wz_13TeV_met107->GetZaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_wz_13TeV_met107->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_wz_13TeV_met107->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_wz_13TeV_met107->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_wz_13TeV_met->Add(new_histo_group_WW_wh3l_wz_13TeV_met,"");
   
   TH1D *new_histo_group_VVV_wh3l_wz_13TeV_met108 = new TH1D("new_histo_group_VVV_wh3l_wz_13TeV_met108","histo_VVV",40,0,200);
   new_histo_group_VVV_wh3l_wz_13TeV_met108->SetBinContent(9,0.009252968);
   new_histo_group_VVV_wh3l_wz_13TeV_met108->SetBinContent(10,0.01022171);
   new_histo_group_VVV_wh3l_wz_13TeV_met108->SetBinContent(11,0.003508181);
   new_histo_group_VVV_wh3l_wz_13TeV_met108->SetBinContent(12,0.01017348);
   new_histo_group_VVV_wh3l_wz_13TeV_met108->SetBinContent(13,0.008184123);
   new_histo_group_VVV_wh3l_wz_13TeV_met108->SetBinContent(14,0.01061329);
   new_histo_group_VVV_wh3l_wz_13TeV_met108->SetBinContent(15,0.01117621);
   new_histo_group_VVV_wh3l_wz_13TeV_met108->SetBinContent(16,0.008419982);
   new_histo_group_VVV_wh3l_wz_13TeV_met108->SetBinContent(17,0.01002561);
   new_histo_group_VVV_wh3l_wz_13TeV_met108->SetBinContent(18,0.006204153);
   new_histo_group_VVV_wh3l_wz_13TeV_met108->SetBinContent(19,0.006646969);
   new_histo_group_VVV_wh3l_wz_13TeV_met108->SetBinContent(20,0.004344924);
   new_histo_group_VVV_wh3l_wz_13TeV_met108->SetBinContent(21,0.005081035);
   new_histo_group_VVV_wh3l_wz_13TeV_met108->SetBinContent(22,0.00307065);
   new_histo_group_VVV_wh3l_wz_13TeV_met108->SetBinContent(23,0.003553251);
   new_histo_group_VVV_wh3l_wz_13TeV_met108->SetBinContent(24,0.003311938);
   new_histo_group_VVV_wh3l_wz_13TeV_met108->SetBinContent(25,0.003695326);
   new_histo_group_VVV_wh3l_wz_13TeV_met108->SetBinContent(26,0.001489098);
   new_histo_group_VVV_wh3l_wz_13TeV_met108->SetBinContent(27,0.004668908);
   new_histo_group_VVV_wh3l_wz_13TeV_met108->SetBinContent(28,0.001567719);
   new_histo_group_VVV_wh3l_wz_13TeV_met108->SetBinContent(29,0.005379481);
   new_histo_group_VVV_wh3l_wz_13TeV_met108->SetBinContent(30,0.002895188);
   new_histo_group_VVV_wh3l_wz_13TeV_met108->SetBinContent(31,0.002562098);
   new_histo_group_VVV_wh3l_wz_13TeV_met108->SetBinContent(32,0.003642572);
   new_histo_group_VVV_wh3l_wz_13TeV_met108->SetBinContent(33,0.002341323);
   new_histo_group_VVV_wh3l_wz_13TeV_met108->SetBinContent(34,0.0004520362);
   new_histo_group_VVV_wh3l_wz_13TeV_met108->SetBinContent(35,0.0002064199);
   new_histo_group_VVV_wh3l_wz_13TeV_met108->SetBinContent(36,0.000643824);
   new_histo_group_VVV_wh3l_wz_13TeV_met108->SetBinContent(37,0.0001872635);
   new_histo_group_VVV_wh3l_wz_13TeV_met108->SetBinContent(39,0.001311902);
   new_histo_group_VVV_wh3l_wz_13TeV_met108->SetBinContent(40,0.0004175359);
   new_histo_group_VVV_wh3l_wz_13TeV_met108->SetBinContent(41,0.01725747);
   new_histo_group_VVV_wh3l_wz_13TeV_met108->SetBinError(9,0.00262259);
   new_histo_group_VVV_wh3l_wz_13TeV_met108->SetBinError(10,0.002629403);
   new_histo_group_VVV_wh3l_wz_13TeV_met108->SetBinError(11,0.001793163);
   new_histo_group_VVV_wh3l_wz_13TeV_met108->SetBinError(12,0.002548777);
   new_histo_group_VVV_wh3l_wz_13TeV_met108->SetBinError(13,0.002163406);
   new_histo_group_VVV_wh3l_wz_13TeV_met108->SetBinError(14,0.002753669);
   new_histo_group_VVV_wh3l_wz_13TeV_met108->SetBinError(15,0.002797162);
   new_histo_group_VVV_wh3l_wz_13TeV_met108->SetBinError(16,0.00248236);
   new_histo_group_VVV_wh3l_wz_13TeV_met108->SetBinError(17,0.002767988);
   new_histo_group_VVV_wh3l_wz_13TeV_met108->SetBinError(18,0.001959407);
   new_histo_group_VVV_wh3l_wz_13TeV_met108->SetBinError(19,0.002101442);
   new_histo_group_VVV_wh3l_wz_13TeV_met108->SetBinError(20,0.001904907);
   new_histo_group_VVV_wh3l_wz_13TeV_met108->SetBinError(21,0.001714765);
   new_histo_group_VVV_wh3l_wz_13TeV_met108->SetBinError(22,0.00133486);
   new_histo_group_VVV_wh3l_wz_13TeV_met108->SetBinError(23,0.001732595);
   new_histo_group_VVV_wh3l_wz_13TeV_met108->SetBinError(24,0.001344015);
   new_histo_group_VVV_wh3l_wz_13TeV_met108->SetBinError(25,0.001520425);
   new_histo_group_VVV_wh3l_wz_13TeV_met108->SetBinError(26,0.001320636);
   new_histo_group_VVV_wh3l_wz_13TeV_met108->SetBinError(27,0.001990533);
   new_histo_group_VVV_wh3l_wz_13TeV_met108->SetBinError(28,0.0008921765);
   new_histo_group_VVV_wh3l_wz_13TeV_met108->SetBinError(29,0.001872299);
   new_histo_group_VVV_wh3l_wz_13TeV_met108->SetBinError(30,0.001322047);
   new_histo_group_VVV_wh3l_wz_13TeV_met108->SetBinError(31,0.001287382);
   new_histo_group_VVV_wh3l_wz_13TeV_met108->SetBinError(32,0.001581457);
   new_histo_group_VVV_wh3l_wz_13TeV_met108->SetBinError(33,0.001191629);
   new_histo_group_VVV_wh3l_wz_13TeV_met108->SetBinError(34,0.0004520362);
   new_histo_group_VVV_wh3l_wz_13TeV_met108->SetBinError(35,0.0002064199);
   new_histo_group_VVV_wh3l_wz_13TeV_met108->SetBinError(36,0.000643824);
   new_histo_group_VVV_wh3l_wz_13TeV_met108->SetBinError(37,0.0009214041);
   new_histo_group_VVV_wh3l_wz_13TeV_met108->SetBinError(39,0.0009309254);
   new_histo_group_VVV_wh3l_wz_13TeV_met108->SetBinError(40,0.0004175359);
   new_histo_group_VVV_wh3l_wz_13TeV_met108->SetBinError(41,0.003743587);
   new_histo_group_VVV_wh3l_wz_13TeV_met108->SetEntries(326);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_wz_13TeV_met108->SetFillColor(ci);
   new_histo_group_VVV_wh3l_wz_13TeV_met108->SetFillStyle(3001);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_wz_13TeV_met108->SetLineColor(ci);
   new_histo_group_VVV_wh3l_wz_13TeV_met108->GetXaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_wz_13TeV_met108->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_wz_13TeV_met108->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_wz_13TeV_met108->GetXaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_wz_13TeV_met108->GetYaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_wz_13TeV_met108->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_wz_13TeV_met108->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_wz_13TeV_met108->GetYaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_wz_13TeV_met108->GetZaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_wz_13TeV_met108->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_wz_13TeV_met108->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_wz_13TeV_met108->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_wz_13TeV_met->Add(new_histo_group_VVV_wh3l_wz_13TeV_met,"");
   
   TH1D *new_histo_group_Vg_wh3l_wz_13TeV_met109 = new TH1D("new_histo_group_Vg_wh3l_wz_13TeV_met109","histo_Vg",40,0,200);
   new_histo_group_Vg_wh3l_wz_13TeV_met109->SetBinContent(9,2.870305);
   new_histo_group_Vg_wh3l_wz_13TeV_met109->SetBinContent(10,1.4029);
   new_histo_group_Vg_wh3l_wz_13TeV_met109->SetBinContent(11,0.390547);
   new_histo_group_Vg_wh3l_wz_13TeV_met109->SetBinContent(12,0.02594176);
   new_histo_group_Vg_wh3l_wz_13TeV_met109->SetBinContent(14,0.3235372);
   new_histo_group_Vg_wh3l_wz_13TeV_met109->SetBinError(9,0.5840557);
   new_histo_group_Vg_wh3l_wz_13TeV_met109->SetBinError(10,0.3876164);
   new_histo_group_Vg_wh3l_wz_13TeV_met109->SetBinError(11,0.2730547);
   new_histo_group_Vg_wh3l_wz_13TeV_met109->SetBinError(12,0.1696422);
   new_histo_group_Vg_wh3l_wz_13TeV_met109->SetBinError(14,0.188611);
   new_histo_group_Vg_wh3l_wz_13TeV_met109->SetEntries(64);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_wz_13TeV_met109->SetFillColor(ci);
   new_histo_group_Vg_wh3l_wz_13TeV_met109->SetFillStyle(3001);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_wz_13TeV_met109->SetLineColor(ci);
   new_histo_group_Vg_wh3l_wz_13TeV_met109->GetXaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_wz_13TeV_met109->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_wz_13TeV_met109->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_wz_13TeV_met109->GetXaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_wz_13TeV_met109->GetYaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_wz_13TeV_met109->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_wz_13TeV_met109->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_wz_13TeV_met109->GetYaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_wz_13TeV_met109->GetZaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_wz_13TeV_met109->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_wz_13TeV_met109->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_wz_13TeV_met109->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_wz_13TeV_met->Add(new_histo_group_Vg_wh3l_wz_13TeV_met,"");
   
   TH1D *new_histo_group_ZZ_wh3l_wz_13TeV_met110 = new TH1D("new_histo_group_ZZ_wh3l_wz_13TeV_met110","histo_ZZ",40,0,200);
   new_histo_group_ZZ_wh3l_wz_13TeV_met110->SetBinContent(9,1.839655);
   new_histo_group_ZZ_wh3l_wz_13TeV_met110->SetBinContent(10,1.835313);
   new_histo_group_ZZ_wh3l_wz_13TeV_met110->SetBinContent(11,1.244045);
   new_histo_group_ZZ_wh3l_wz_13TeV_met110->SetBinContent(12,0.6944959);
   new_histo_group_ZZ_wh3l_wz_13TeV_met110->SetBinContent(13,0.724412);
   new_histo_group_ZZ_wh3l_wz_13TeV_met110->SetBinContent(14,0.6350353);
   new_histo_group_ZZ_wh3l_wz_13TeV_met110->SetBinContent(15,0.2906962);
   new_histo_group_ZZ_wh3l_wz_13TeV_met110->SetBinContent(16,0.2864078);
   new_histo_group_ZZ_wh3l_wz_13TeV_met110->SetBinContent(17,0.2469167);
   new_histo_group_ZZ_wh3l_wz_13TeV_met110->SetBinContent(18,0.1214784);
   new_histo_group_ZZ_wh3l_wz_13TeV_met110->SetBinContent(19,0.1825965);
   new_histo_group_ZZ_wh3l_wz_13TeV_met110->SetBinContent(20,0.04442129);
   new_histo_group_ZZ_wh3l_wz_13TeV_met110->SetBinContent(21,0.08483115);
   new_histo_group_ZZ_wh3l_wz_13TeV_met110->SetBinContent(23,0.01983349);
   new_histo_group_ZZ_wh3l_wz_13TeV_met110->SetBinContent(25,0.03476685);
   new_histo_group_ZZ_wh3l_wz_13TeV_met110->SetBinContent(40,0.04585245);
   new_histo_group_ZZ_wh3l_wz_13TeV_met110->SetBinError(9,0.2683862);
   new_histo_group_ZZ_wh3l_wz_13TeV_met110->SetBinError(10,0.2830447);
   new_histo_group_ZZ_wh3l_wz_13TeV_met110->SetBinError(11,0.2229833);
   new_histo_group_ZZ_wh3l_wz_13TeV_met110->SetBinError(12,0.1656897);
   new_histo_group_ZZ_wh3l_wz_13TeV_met110->SetBinError(13,0.1752085);
   new_histo_group_ZZ_wh3l_wz_13TeV_met110->SetBinError(14,0.1674403);
   new_histo_group_ZZ_wh3l_wz_13TeV_met110->SetBinError(15,0.1050941);
   new_histo_group_ZZ_wh3l_wz_13TeV_met110->SetBinError(16,0.1076076);
   new_histo_group_ZZ_wh3l_wz_13TeV_met110->SetBinError(17,0.1072774);
   new_histo_group_ZZ_wh3l_wz_13TeV_met110->SetBinError(18,0.07306497);
   new_histo_group_ZZ_wh3l_wz_13TeV_met110->SetBinError(19,0.09158353);
   new_histo_group_ZZ_wh3l_wz_13TeV_met110->SetBinError(20,0.04442129);
   new_histo_group_ZZ_wh3l_wz_13TeV_met110->SetBinError(21,0.06002685);
   new_histo_group_ZZ_wh3l_wz_13TeV_met110->SetBinError(23,0.01983349);
   new_histo_group_ZZ_wh3l_wz_13TeV_met110->SetBinError(25,0.03476685);
   new_histo_group_ZZ_wh3l_wz_13TeV_met110->SetBinError(40,0.04585245);
   new_histo_group_ZZ_wh3l_wz_13TeV_met110->SetEntries(231);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_wz_13TeV_met110->SetFillColor(ci);
   new_histo_group_ZZ_wh3l_wz_13TeV_met110->SetFillStyle(3001);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_wz_13TeV_met110->SetLineColor(ci);
   new_histo_group_ZZ_wh3l_wz_13TeV_met110->GetXaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_wz_13TeV_met110->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_wz_13TeV_met110->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_wz_13TeV_met110->GetXaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_wz_13TeV_met110->GetYaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_wz_13TeV_met110->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_wz_13TeV_met110->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_wz_13TeV_met110->GetYaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_wz_13TeV_met110->GetZaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_wz_13TeV_met110->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_wz_13TeV_met110->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_wz_13TeV_met110->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_wz_13TeV_met->Add(new_histo_group_ZZ_wh3l_wz_13TeV_met,"");
   
   TH1D *new_histo_group_WZ_wh3l_wz_13TeV_met111 = new TH1D("new_histo_group_WZ_wh3l_wz_13TeV_met111","histo_WZ",40,0,200);
   new_histo_group_WZ_wh3l_wz_13TeV_met111->SetBinContent(9,15.81378);
   new_histo_group_WZ_wh3l_wz_13TeV_met111->SetBinContent(10,14.3339);
   new_histo_group_WZ_wh3l_wz_13TeV_met111->SetBinContent(11,13.31578);
   new_histo_group_WZ_wh3l_wz_13TeV_met111->SetBinContent(12,11.62787);
   new_histo_group_WZ_wh3l_wz_13TeV_met111->SetBinContent(13,9.608904);
   new_histo_group_WZ_wh3l_wz_13TeV_met111->SetBinContent(14,8.330098);
   new_histo_group_WZ_wh3l_wz_13TeV_met111->SetBinContent(15,6.643548);
   new_histo_group_WZ_wh3l_wz_13TeV_met111->SetBinContent(16,5.251403);
   new_histo_group_WZ_wh3l_wz_13TeV_met111->SetBinContent(17,4.100545);
   new_histo_group_WZ_wh3l_wz_13TeV_met111->SetBinContent(18,3.344232);
   new_histo_group_WZ_wh3l_wz_13TeV_met111->SetBinContent(19,2.656837);
   new_histo_group_WZ_wh3l_wz_13TeV_met111->SetBinContent(20,2.186775);
   new_histo_group_WZ_wh3l_wz_13TeV_met111->SetBinContent(21,1.580164);
   new_histo_group_WZ_wh3l_wz_13TeV_met111->SetBinContent(22,1.503356);
   new_histo_group_WZ_wh3l_wz_13TeV_met111->SetBinContent(23,1.137838);
   new_histo_group_WZ_wh3l_wz_13TeV_met111->SetBinContent(24,0.9205083);
   new_histo_group_WZ_wh3l_wz_13TeV_met111->SetBinContent(25,0.7564126);
   new_histo_group_WZ_wh3l_wz_13TeV_met111->SetBinContent(26,0.6211334);
   new_histo_group_WZ_wh3l_wz_13TeV_met111->SetBinContent(27,0.6046567);
   new_histo_group_WZ_wh3l_wz_13TeV_met111->SetBinContent(28,0.5925559);
   new_histo_group_WZ_wh3l_wz_13TeV_met111->SetBinContent(29,0.3986137);
   new_histo_group_WZ_wh3l_wz_13TeV_met111->SetBinContent(30,0.4219101);
   new_histo_group_WZ_wh3l_wz_13TeV_met111->SetBinContent(31,0.3553156);
   new_histo_group_WZ_wh3l_wz_13TeV_met111->SetBinContent(32,0.2999279);
   new_histo_group_WZ_wh3l_wz_13TeV_met111->SetBinContent(33,0.2130329);
   new_histo_group_WZ_wh3l_wz_13TeV_met111->SetBinContent(34,0.2511477);
   new_histo_group_WZ_wh3l_wz_13TeV_met111->SetBinContent(35,0.1655459);
   new_histo_group_WZ_wh3l_wz_13TeV_met111->SetBinContent(36,0.1340858);
   new_histo_group_WZ_wh3l_wz_13TeV_met111->SetBinContent(37,0.1813504);
   new_histo_group_WZ_wh3l_wz_13TeV_met111->SetBinContent(38,0.08563839);
   new_histo_group_WZ_wh3l_wz_13TeV_met111->SetBinContent(39,0.08510827);
   new_histo_group_WZ_wh3l_wz_13TeV_met111->SetBinContent(40,0.1387576);
   new_histo_group_WZ_wh3l_wz_13TeV_met111->SetBinContent(41,0.9768437);
   new_histo_group_WZ_wh3l_wz_13TeV_met111->SetBinError(9,0.2941014);
   new_histo_group_WZ_wh3l_wz_13TeV_met111->SetBinError(10,0.2789987);
   new_histo_group_WZ_wh3l_wz_13TeV_met111->SetBinError(11,0.2692286);
   new_histo_group_WZ_wh3l_wz_13TeV_met111->SetBinError(12,0.2512705);
   new_histo_group_WZ_wh3l_wz_13TeV_met111->SetBinError(13,0.2282401);
   new_histo_group_WZ_wh3l_wz_13TeV_met111->SetBinError(14,0.2136525);
   new_histo_group_WZ_wh3l_wz_13TeV_met111->SetBinError(15,0.1897187);
   new_histo_group_WZ_wh3l_wz_13TeV_met111->SetBinError(16,0.1689593);
   new_histo_group_WZ_wh3l_wz_13TeV_met111->SetBinError(17,0.1495404);
   new_histo_group_WZ_wh3l_wz_13TeV_met111->SetBinError(18,0.1342193);
   new_histo_group_WZ_wh3l_wz_13TeV_met111->SetBinError(19,0.1197579);
   new_histo_group_WZ_wh3l_wz_13TeV_met111->SetBinError(20,0.1091369);
   new_histo_group_WZ_wh3l_wz_13TeV_met111->SetBinError(21,0.0925153);
   new_histo_group_WZ_wh3l_wz_13TeV_met111->SetBinError(22,0.09058723);
   new_histo_group_WZ_wh3l_wz_13TeV_met111->SetBinError(23,0.07792715);
   new_histo_group_WZ_wh3l_wz_13TeV_met111->SetBinError(24,0.06995408);
   new_histo_group_WZ_wh3l_wz_13TeV_met111->SetBinError(25,0.06422739);
   new_histo_group_WZ_wh3l_wz_13TeV_met111->SetBinError(26,0.05768584);
   new_histo_group_WZ_wh3l_wz_13TeV_met111->SetBinError(27,0.0575328);
   new_histo_group_WZ_wh3l_wz_13TeV_met111->SetBinError(28,0.05724901);
   new_histo_group_WZ_wh3l_wz_13TeV_met111->SetBinError(29,0.04677486);
   new_histo_group_WZ_wh3l_wz_13TeV_met111->SetBinError(30,0.04758918);
   new_histo_group_WZ_wh3l_wz_13TeV_met111->SetBinError(31,0.04367919);
   new_histo_group_WZ_wh3l_wz_13TeV_met111->SetBinError(32,0.04059904);
   new_histo_group_WZ_wh3l_wz_13TeV_met111->SetBinError(33,0.03279399);
   new_histo_group_WZ_wh3l_wz_13TeV_met111->SetBinError(34,0.03662821);
   new_histo_group_WZ_wh3l_wz_13TeV_met111->SetBinError(35,0.02965009);
   new_histo_group_WZ_wh3l_wz_13TeV_met111->SetBinError(36,0.02659763);
   new_histo_group_WZ_wh3l_wz_13TeV_met111->SetBinError(37,0.03130443);
   new_histo_group_WZ_wh3l_wz_13TeV_met111->SetBinError(38,0.02103204);
   new_histo_group_WZ_wh3l_wz_13TeV_met111->SetBinError(39,0.02103171);
   new_histo_group_WZ_wh3l_wz_13TeV_met111->SetBinError(40,0.02677377);
   new_histo_group_WZ_wh3l_wz_13TeV_met111->SetBinError(41,0.07296223);
   new_histo_group_WZ_wh3l_wz_13TeV_met111->SetEntries(22151);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_wz_13TeV_met111->SetFillColor(ci);
   new_histo_group_WZ_wh3l_wz_13TeV_met111->SetFillStyle(3001);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_wz_13TeV_met111->SetLineColor(ci);
   new_histo_group_WZ_wh3l_wz_13TeV_met111->GetXaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_wz_13TeV_met111->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_wz_13TeV_met111->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_wz_13TeV_met111->GetXaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_wz_13TeV_met111->GetYaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_wz_13TeV_met111->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_wz_13TeV_met111->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_wz_13TeV_met111->GetYaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_wz_13TeV_met111->GetZaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_wz_13TeV_met111->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_wz_13TeV_met111->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_wz_13TeV_met111->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_wz_13TeV_met->Add(new_histo_group_WZ_wh3l_wz_13TeV_met,"");
   thsBackground_grouped_wh3l_wz_13TeV_met->Draw("hist same");
   
   Double_t _fx3027[40] = {
   2.5,
   7.5,
   12.5,
   17.5,
   22.5,
   27.5,
   32.5,
   37.5,
   42.5,
   47.5,
   52.5,
   57.5,
   62.5,
   67.5,
   72.5,
   77.5,
   82.5,
   87.5,
   92.5,
   97.5,
   102.5,
   107.5,
   112.5,
   117.5,
   122.5,
   127.5,
   132.5,
   137.5,
   142.5,
   147.5,
   152.5,
   157.5,
   162.5,
   167.5,
   172.5,
   177.5,
   182.5,
   187.5,
   192.5,
   197.5};
   Double_t _fy3027[40] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   25.40804,
   19.29348,
   17.0653,
   12.47328,
   11.63085,
   8.392021,
   6.842652,
   5.674062,
   5.005738,
   3.762401,
   2.817644,
   2.480633,
   1.247358,
   1.423151,
   1.073044,
   0.7574814,
   0.9757767,
   0.6647689,
   0.7100475,
   0.9964929,
   0.3185089,
   0.4248053,
   0.3578777,
   0.3035704,
   0.2910633,
   0.2515997,
   0.1657523,
   0.7324121,
   0.1815377,
   -0.05951613,
   0.02837669,
   0.1850276};
   Double_t _felx3027[40] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5};
   Double_t _fely3027[40] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   3.391995,
   2.288117,
   2.187166,
   0.5616591,
   1.39914,
   1.239369,
   0.7528881,
   0.4087619,
   0.8910577,
   0.5072841,
   0.2420841,
   0.4066723,
   0.4769482,
   0.1609211,
   0.1895307,
   0.3095853,
   0.2387494,
   0.1019401,
   0.1630694,
   0.4760682,
   0.1120925,
   0.04891131,
   0.04496666,
   0.0421806,
   0.1120006,
   0.03708029,
   0.02985652,
   0.5907229,
   0.03149169,
   0.1314239,
   0.08187915,
   0.07305446};
   Double_t _fehx3027[40] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5};
   Double_t _fehy3027[40] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   3.391995,
   2.288121,
   2.187162,
   1.417737,
   1.399141,
   1.239367,
   0.4016474,
   0.7659528,
   0.8910571,
   0.8553824,
   0.2420836,
   0.5841387,
   0.4769483,
   0.1609209,
   0.1895306,
   0.2428201,
   0.2387495,
   0.213373,
   0.1630694,
   0.5998772,
   0.1120925,
   0.04891134,
   0.04496666,
   0.0421806,
   0.1120006,
   0.03708029,
   0.0298565,
   0.5907229,
   0.03222584,
   0.1314238,
   0.08187914,
   0.07305443};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(40,_fx3027,_fy3027,_felx3027,_fehx3027,_fely3027,_fehy3027);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(12);
   grae->SetFillStyle(3004);
   grae->SetLineColor(12);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3027 = new TH1F("Graph_Graph3027","",100,0,220);
   Graph_Graph3027->SetMinimum(-3.090038);
   Graph_Graph3027->SetMaximum(31.69913);
   Graph_Graph3027->SetDirectory(0);
   Graph_Graph3027->SetStats(0);
   Graph_Graph3027->SetLineStyle(0);
   Graph_Graph3027->SetMarkerStyle(20);
   Graph_Graph3027->GetXaxis()->SetLabelFont(42);
   Graph_Graph3027->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3027->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3027->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3027->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3027->GetXaxis()->SetTitleFont(42);
   Graph_Graph3027->GetYaxis()->SetLabelFont(42);
   Graph_Graph3027->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3027->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3027->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3027->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3027->GetYaxis()->SetTitleFont(42);
   Graph_Graph3027->GetZaxis()->SetLabelFont(42);
   Graph_Graph3027->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3027->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3027->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3027->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3027);
   
   grae->Draw("2");
   
   Double_t _fx3028[40] = {
   2.5,
   7.5,
   12.5,
   17.5,
   22.5,
   27.5,
   32.5,
   37.5,
   42.5,
   47.5,
   52.5,
   57.5,
   62.5,
   67.5,
   72.5,
   77.5,
   82.5,
   87.5,
   92.5,
   97.5,
   102.5,
   107.5,
   112.5,
   117.5,
   122.5,
   127.5,
   132.5,
   137.5,
   142.5,
   147.5,
   152.5,
   157.5,
   162.5,
   167.5,
   172.5,
   177.5,
   182.5,
   187.5,
   192.5,
   197.5};
   Double_t _fy3028[40] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   29,
   22,
   19,
   23,
   10,
   17,
   8,
   7,
   5,
   1,
   1,
   4,
   4,
   2,
   1,
   2,
   0,
   2,
   0,
   1,
   1,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   2,
   1,
   0};
   Double_t _felx3028[40] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5};
   Double_t _fely3028[40] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   5.354033,
   4.654589,
   4.320299,
   4.760806,
   3.108748,
   4.082258,
   2.768432,
   2.581513,
   2.159724,
   0.8272524,
   0.8272524,
   1.914367,
   1.914367,
   1.29183,
   0.8272524,
   1.29183,
   0,
   1.29183,
   0,
   0.8272524,
   0.8272524,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   1.29183,
   0.8272524,
   0};
   Double_t _fehx3028[40] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5};
   Double_t _fehy3028[40] = {
   1.147908,
   1.147908,
   1.147908,
   1.147908,
   1.147908,
   1.147908,
   1.147908,
   1.147908,
   6.447153,
   5.761485,
   5.435307,
   5.865355,
   4.267035,
   5.203825,
   3.94522,
   3.770356,
   3.382539,
   2.29957,
   2.29957,
   3.162815,
   3.162815,
   2.63791,
   2.29957,
   2.63791,
   1.147908,
   2.63791,
   1.147908,
   2.29957,
   2.29957,
   1.147908,
   1.147908,
   1.147908,
   1.147908,
   1.147908,
   1.147908,
   1.147908,
   1.147908,
   2.63791,
   2.29957,
   1.147908};
   grae = new TGraphAsymmErrors(40,_fx3028,_fy3028,_felx3028,_fehx3028,_fely3028,_fehy3028);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(1);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3028 = new TH1F("Graph_Graph3028","",100,0,220);
   Graph_Graph3028->SetMinimum(0);
   Graph_Graph3028->SetMaximum(38.99187);
   Graph_Graph3028->SetDirectory(0);
   Graph_Graph3028->SetStats(0);
   Graph_Graph3028->SetLineStyle(0);
   Graph_Graph3028->SetMarkerStyle(20);
   Graph_Graph3028->GetXaxis()->SetLabelFont(42);
   Graph_Graph3028->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3028->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3028->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3028->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3028->GetXaxis()->SetTitleFont(42);
   Graph_Graph3028->GetYaxis()->SetLabelFont(42);
   Graph_Graph3028->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3028->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3028->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3028->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3028->GetYaxis()->SetTitleFont(42);
   Graph_Graph3028->GetZaxis()->SetLabelFont(42);
   Graph_Graph3028->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3028->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3028->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3028->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3028);
   
   grae->Draw("p0");
   
   TLegend *leg = new TLegend(0.2,0.7,0.8,0.9,NULL,"brNDC");
   leg->SetTextFont(62);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("new_histo_group_Fake_wh3l_wz_13TeV_met","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_wz_13TeV_met","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_wz_13TeV_met","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_wz_13TeV_met","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_wz_13TeV_met","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_wz_13TeV_met","WZ","F");

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
   entry=leg->AddEntry("new_histo_DATA_wh3l_wz_13TeV_met","Data","EPL");
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
   entry=leg->AddEntry("new_histo_group_Fake_wh3l_wz_13TeV_met","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_wz_13TeV_met","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_wz_13TeV_met","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_wz_13TeV_met","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_wz_13TeV_met","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_wz_13TeV_met","WZ","F");

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
   entry=leg->AddEntry("new_histo_DATA_wh3l_wz_13TeV_met","Data","EPL");
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
   
   TH1F *hframe_copy112 = new TH1F("hframe_copy112","",1000,0,200);
   hframe_copy112->SetMinimum(0);
   hframe_copy112->SetMaximum(85.96291);
   hframe_copy112->SetDirectory(0);
   hframe_copy112->SetStats(0);
   hframe_copy112->SetLineStyle(0);
   hframe_copy112->SetMarkerStyle(20);
   hframe_copy112->GetXaxis()->SetTitle("pfmet [GeV]");
   hframe_copy112->GetXaxis()->SetNdivisions(506);
   hframe_copy112->GetXaxis()->SetLabelFont(42);
   hframe_copy112->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy112->GetXaxis()->SetLabelSize(0.05);
   hframe_copy112->GetXaxis()->SetTitleSize(0.06);
   hframe_copy112->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy112->GetXaxis()->SetTitleFont(42);
   hframe_copy112->GetYaxis()->SetTitle("Events");
   hframe_copy112->GetYaxis()->SetLabelFont(42);
   hframe_copy112->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy112->GetYaxis()->SetLabelSize(0.05);
   hframe_copy112->GetYaxis()->SetTitleSize(0.06);
   hframe_copy112->GetYaxis()->SetTitleOffset(1.25);
   hframe_copy112->GetYaxis()->SetTitleFont(42);
   hframe_copy112->GetZaxis()->SetLabelFont(42);
   hframe_copy112->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy112->GetZaxis()->SetLabelSize(0.05);
   hframe_copy112->GetZaxis()->SetTitleSize(0.06);
   hframe_copy112->GetZaxis()->SetTitleFont(42);
   hframe_copy112->Draw("sameaxis");
   ccwh3l_wz_13TeV_met->Modified();
   ccwh3l_wz_13TeV_met->cd();
   ccwh3l_wz_13TeV_met->SetSelected(ccwh3l_wz_13TeV_met);
}
