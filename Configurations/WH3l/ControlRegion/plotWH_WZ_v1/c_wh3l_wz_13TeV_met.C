void c_wh3l_wz_13TeV_met()
{
//=========Macro generated from canvas: ccwh3l_wz_13TeV_met/cc
//=========  (Sun Jul  3 22:54:20 2016) by ROOT version6.02/13
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
   
   TH1F *hframe51 = new TH1F("hframe51","",1000,0,200);
   hframe51->SetMinimum(0);
   hframe51->SetMaximum(85.96291);
   hframe51->SetDirectory(0);
   hframe51->SetStats(0);
   hframe51->SetLineStyle(0);
   hframe51->SetMarkerStyle(20);
   hframe51->GetXaxis()->SetTitle("pfmet [GeV]");
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
   
   THStack *thsBackground_grouped_wh3l_wz_13TeV_met = new THStack();
   thsBackground_grouped_wh3l_wz_13TeV_met->SetName("thsBackground_grouped_wh3l_wz_13TeV_met");
   thsBackground_grouped_wh3l_wz_13TeV_met->SetTitle("thsBackground_grouped_wh3l_wz_13TeV_met");
   
   TH1F *thsBackground_grouped_wh3l_wz_13TeV_met_stack_11 = new TH1F("thsBackground_grouped_wh3l_wz_13TeV_met_stack_11","thsBackground_grouped_wh3l_wz_13TeV_met",40,0,200);
   thsBackground_grouped_wh3l_wz_13TeV_met_stack_11->SetMinimum(-1.542649);
   thsBackground_grouped_wh3l_wz_13TeV_met_stack_11->SetMaximum(26.16079);
   thsBackground_grouped_wh3l_wz_13TeV_met_stack_11->SetDirectory(0);
   thsBackground_grouped_wh3l_wz_13TeV_met_stack_11->SetStats(0);
   thsBackground_grouped_wh3l_wz_13TeV_met_stack_11->SetLineStyle(0);
   thsBackground_grouped_wh3l_wz_13TeV_met_stack_11->SetMarkerStyle(20);
   thsBackground_grouped_wh3l_wz_13TeV_met_stack_11->GetXaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_wz_13TeV_met_stack_11->GetXaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_wz_13TeV_met_stack_11->GetXaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_wz_13TeV_met_stack_11->GetXaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_wz_13TeV_met_stack_11->GetXaxis()->SetTitleOffset(0.9);
   thsBackground_grouped_wh3l_wz_13TeV_met_stack_11->GetXaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_wz_13TeV_met_stack_11->GetYaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_wz_13TeV_met_stack_11->GetYaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_wz_13TeV_met_stack_11->GetYaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_wz_13TeV_met_stack_11->GetYaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_wz_13TeV_met_stack_11->GetYaxis()->SetTitleOffset(1.25);
   thsBackground_grouped_wh3l_wz_13TeV_met_stack_11->GetYaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_wz_13TeV_met_stack_11->GetZaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_wz_13TeV_met_stack_11->GetZaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_wz_13TeV_met_stack_11->GetZaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_wz_13TeV_met_stack_11->GetZaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_wz_13TeV_met_stack_11->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_wz_13TeV_met->SetHistogram(thsBackground_grouped_wh3l_wz_13TeV_met_stack_11);
   
   
   TH1D *new_histo_group_Fake_wh3l_wz_13TeV_met52 = new TH1D("new_histo_group_Fake_wh3l_wz_13TeV_met52","histo_Fake",40,0,200);
   new_histo_group_Fake_wh3l_wz_13TeV_met52->SetBinContent(9,4.839483);
   new_histo_group_Fake_wh3l_wz_13TeV_met52->SetBinContent(10,1.696561);
   new_histo_group_Fake_wh3l_wz_13TeV_met52->SetBinContent(11,2.111411);
   new_histo_group_Fake_wh3l_wz_13TeV_met52->SetBinContent(12,0.1424908);
   new_histo_group_Fake_wh3l_wz_13TeV_met52->SetBinContent(13,1.289354);
   new_histo_group_Fake_wh3l_wz_13TeV_met52->SetBinContent(14,-0.9215783);
   new_histo_group_Fake_wh3l_wz_13TeV_met52->SetBinContent(15,-0.1027683);
   new_histo_group_Fake_wh3l_wz_13TeV_met52->SetBinContent(16,0.127831);
   new_histo_group_Fake_wh3l_wz_13TeV_met52->SetBinContent(17,0.648251);
   new_histo_group_Fake_wh3l_wz_13TeV_met52->SetBinContent(18,0.2904869);
   new_histo_group_Fake_wh3l_wz_13TeV_met52->SetBinContent(19,-0.02843639);
   new_histo_group_Fake_wh3l_wz_13TeV_met52->SetBinContent(20,0.2341628);
   new_histo_group_Fake_wh3l_wz_13TeV_met52->SetBinContent(21,-0.4227189);
   new_histo_group_Fake_wh3l_wz_13TeV_met52->SetBinContent(22,-0.08327505);
   new_histo_group_Fake_wh3l_wz_13TeV_met52->SetBinContent(23,-0.08818095);
   new_histo_group_Fake_wh3l_wz_13TeV_met52->SetBinContent(24,-0.1663388);
   new_histo_group_Fake_wh3l_wz_13TeV_met52->SetBinContent(25,0.180902);
   new_histo_group_Fake_wh3l_wz_13TeV_met52->SetBinContent(26,0.04214632);
   new_histo_group_Fake_wh3l_wz_13TeV_met52->SetBinContent(27,0.100722);
   new_histo_group_Fake_wh3l_wz_13TeV_met52->SetBinContent(28,0.4023693);
   new_histo_group_Fake_wh3l_wz_13TeV_met52->SetBinContent(29,-0.08548435);
   new_histo_group_Fake_wh3l_wz_13TeV_met52->SetBinContent(33,0.07568908);
   new_histo_group_Fake_wh3l_wz_13TeV_met52->SetBinContent(36,0.5976825);
   new_histo_group_Fake_wh3l_wz_13TeV_met52->SetBinContent(38,-0.1451545);
   new_histo_group_Fake_wh3l_wz_13TeV_met52->SetBinContent(39,-0.05804348);
   new_histo_group_Fake_wh3l_wz_13TeV_met52->SetBinContent(41,-0.09918789);
   new_histo_group_Fake_wh3l_wz_13TeV_met52->SetBinError(9,1.888571);
   new_histo_group_Fake_wh3l_wz_13TeV_met52->SetBinError(10,1.262175);
   new_histo_group_Fake_wh3l_wz_13TeV_met52->SetBinError(11,1.325906);
   new_histo_group_Fake_wh3l_wz_13TeV_met52->SetBinError(12,0.8275667);
   new_histo_group_Fake_wh3l_wz_13TeV_met52->SetBinError(13,0.938851);
   new_histo_group_Fake_wh3l_wz_13TeV_met52->SetBinError(14,0.6210712);
   new_histo_group_Fake_wh3l_wz_13TeV_met52->SetBinError(15,0.4546013);
   new_histo_group_Fake_wh3l_wz_13TeV_met52->SetBinError(16,0.4859009);
   new_histo_group_Fake_wh3l_wz_13TeV_met52->SetBinError(17,0.6099622);
   new_histo_group_Fake_wh3l_wz_13TeV_met52->SetBinError(18,0.6416811);
   new_histo_group_Fake_wh3l_wz_13TeV_met52->SetBinError(19,0.02843639);
   new_histo_group_Fake_wh3l_wz_13TeV_met52->SetBinError(20,0.4135041);
   new_histo_group_Fake_wh3l_wz_13TeV_met52->SetBinError(21,0.3055164);
   new_histo_group_Fake_wh3l_wz_13TeV_met52->SetBinError(22,0.06704772);
   new_histo_group_Fake_wh3l_wz_13TeV_met52->SetBinError(23,0.08818095);
   new_histo_group_Fake_wh3l_wz_13TeV_met52->SetBinError(24,0.2342388);
   new_histo_group_Fake_wh3l_wz_13TeV_met52->SetBinError(25,0.1319824);
   new_histo_group_Fake_wh3l_wz_13TeV_met52->SetBinError(26,0.1539915);
   new_histo_group_Fake_wh3l_wz_13TeV_met52->SetBinError(27,0.100722);
   new_histo_group_Fake_wh3l_wz_13TeV_met52->SetBinError(28,0.5294655);
   new_histo_group_Fake_wh3l_wz_13TeV_met52->SetBinError(29,0.06047217);
   new_histo_group_Fake_wh3l_wz_13TeV_met52->SetBinError(33,0.07568908);
   new_histo_group_Fake_wh3l_wz_13TeV_met52->SetBinError(36,0.5356114);
   new_histo_group_Fake_wh3l_wz_13TeV_met52->SetBinError(38,0.1029677);
   new_histo_group_Fake_wh3l_wz_13TeV_met52->SetBinError(39,0.05804348);
   new_histo_group_Fake_wh3l_wz_13TeV_met52->SetBinError(41,0.04462709);
   new_histo_group_Fake_wh3l_wz_13TeV_met52->SetEntries(336);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_wz_13TeV_met52->SetFillColor(ci);
   new_histo_group_Fake_wh3l_wz_13TeV_met52->SetFillStyle(3001);

   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_wz_13TeV_met52->SetLineColor(ci);
   new_histo_group_Fake_wh3l_wz_13TeV_met52->GetXaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_wz_13TeV_met52->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_wz_13TeV_met52->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_wz_13TeV_met52->GetXaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_wz_13TeV_met52->GetYaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_wz_13TeV_met52->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_wz_13TeV_met52->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_wz_13TeV_met52->GetYaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_wz_13TeV_met52->GetZaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_wz_13TeV_met52->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_wz_13TeV_met52->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_wz_13TeV_met52->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_wz_13TeV_met->Add(new_histo_group_Fake_wh3l_wz_13TeV_met,"");
   
   TH1D *new_histo_group_WW_wh3l_wz_13TeV_met53 = new TH1D("new_histo_group_WW_wh3l_wz_13TeV_met53","histo_WW",40,0,200);
   new_histo_group_WW_wh3l_wz_13TeV_met53->SetBinContent(9,0.03556199);
   new_histo_group_WW_wh3l_wz_13TeV_met53->SetBinContent(10,0.01458742);
   new_histo_group_WW_wh3l_wz_13TeV_met53->SetBinContent(14,0.01431565);
   new_histo_group_WW_wh3l_wz_13TeV_met53->SetBinContent(20,0.01092969);
   new_histo_group_WW_wh3l_wz_13TeV_met53->SetBinError(9,0.02515185);
   new_histo_group_WW_wh3l_wz_13TeV_met53->SetBinError(10,0.01458742);
   new_histo_group_WW_wh3l_wz_13TeV_met53->SetBinError(14,0.01431565);
   new_histo_group_WW_wh3l_wz_13TeV_met53->SetBinError(20,0.01092969);
   new_histo_group_WW_wh3l_wz_13TeV_met53->SetEntries(5);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_wz_13TeV_met53->SetFillColor(ci);
   new_histo_group_WW_wh3l_wz_13TeV_met53->SetFillStyle(3001);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_wz_13TeV_met53->SetLineColor(ci);
   new_histo_group_WW_wh3l_wz_13TeV_met53->GetXaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_wz_13TeV_met53->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_wz_13TeV_met53->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_wz_13TeV_met53->GetXaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_wz_13TeV_met53->GetYaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_wz_13TeV_met53->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_wz_13TeV_met53->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_wz_13TeV_met53->GetYaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_wz_13TeV_met53->GetZaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_wz_13TeV_met53->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_wz_13TeV_met53->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_wz_13TeV_met53->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_wz_13TeV_met->Add(new_histo_group_WW_wh3l_wz_13TeV_met,"");
   
   TH1D *new_histo_group_VVV_wh3l_wz_13TeV_met54 = new TH1D("new_histo_group_VVV_wh3l_wz_13TeV_met54","histo_VVV",40,0,200);
   new_histo_group_VVV_wh3l_wz_13TeV_met54->SetBinContent(9,0.03742452);
   new_histo_group_VVV_wh3l_wz_13TeV_met54->SetBinContent(10,0.04618036);
   new_histo_group_VVV_wh3l_wz_13TeV_met54->SetBinContent(11,0.02679251);
   new_histo_group_VVV_wh3l_wz_13TeV_met54->SetBinContent(12,0.03805247);
   new_histo_group_VVV_wh3l_wz_13TeV_met54->SetBinContent(13,0.04026471);
   new_histo_group_VVV_wh3l_wz_13TeV_met54->SetBinContent(14,0.0489822);
   new_histo_group_VVV_wh3l_wz_13TeV_met54->SetBinContent(15,0.03461522);
   new_histo_group_VVV_wh3l_wz_13TeV_met54->SetBinContent(16,0.02407667);
   new_histo_group_VVV_wh3l_wz_13TeV_met54->SetBinContent(17,0.02863979);
   new_histo_group_VVV_wh3l_wz_13TeV_met54->SetBinContent(18,0.02424038);
   new_histo_group_VVV_wh3l_wz_13TeV_met54->SetBinContent(19,0.0264251);
   new_histo_group_VVV_wh3l_wz_13TeV_met54->SetBinContent(20,0.0240015);
   new_histo_group_VVV_wh3l_wz_13TeV_met54->SetBinContent(21,0.01700686);
   new_histo_group_VVV_wh3l_wz_13TeV_met54->SetBinContent(22,0.02234756);
   new_histo_group_VVV_wh3l_wz_13TeV_met54->SetBinContent(23,0.005058787);
   new_histo_group_VVV_wh3l_wz_13TeV_met54->SetBinContent(24,0.006334743);
   new_histo_group_VVV_wh3l_wz_13TeV_met54->SetBinContent(25,0.006216799);
   new_histo_group_VVV_wh3l_wz_13TeV_met54->SetBinContent(26,0.005782769);
   new_histo_group_VVV_wh3l_wz_13TeV_met54->SetBinContent(27,0.01334388);
   new_histo_group_VVV_wh3l_wz_13TeV_met54->SetBinContent(28,0.006732312);
   new_histo_group_VVV_wh3l_wz_13TeV_met54->SetBinContent(29,0.01357283);
   new_histo_group_VVV_wh3l_wz_13TeV_met54->SetBinContent(30,0.009797518);
   new_histo_group_VVV_wh3l_wz_13TeV_met54->SetBinContent(31,0.003680105);
   new_histo_group_VVV_wh3l_wz_13TeV_met54->SetBinContent(32,0.006524965);
   new_histo_group_VVV_wh3l_wz_13TeV_met54->SetBinContent(33,0.0046174);
   new_histo_group_VVV_wh3l_wz_13TeV_met54->SetBinContent(34,0.002397851);
   new_histo_group_VVV_wh3l_wz_13TeV_met54->SetBinContent(35,0.009072171);
   new_histo_group_VVV_wh3l_wz_13TeV_met54->SetBinContent(36,0.002581882);
   new_histo_group_VVV_wh3l_wz_13TeV_met54->SetBinContent(37,-0.002329285);
   new_histo_group_VVV_wh3l_wz_13TeV_met54->SetBinContent(39,0.001311902);
   new_histo_group_VVV_wh3l_wz_13TeV_met54->SetBinContent(40,0.0004175359);
   new_histo_group_VVV_wh3l_wz_13TeV_met54->SetBinContent(41,0.04740717);
   new_histo_group_VVV_wh3l_wz_13TeV_met54->SetBinError(9,0.00787253);
   new_histo_group_VVV_wh3l_wz_13TeV_met54->SetBinError(10,0.009749781);
   new_histo_group_VVV_wh3l_wz_13TeV_met54->SetBinError(11,0.008222211);
   new_histo_group_VVV_wh3l_wz_13TeV_met54->SetBinError(12,0.00804692);
   new_histo_group_VVV_wh3l_wz_13TeV_met54->SetBinError(13,0.008742839);
   new_histo_group_VVV_wh3l_wz_13TeV_met54->SetBinError(14,0.009553459);
   new_histo_group_VVV_wh3l_wz_13TeV_met54->SetBinError(15,0.007584013);
   new_histo_group_VVV_wh3l_wz_13TeV_met54->SetBinError(16,0.008652218);
   new_histo_group_VVV_wh3l_wz_13TeV_met54->SetBinError(17,0.006537233);
   new_histo_group_VVV_wh3l_wz_13TeV_met54->SetBinError(18,0.006432446);
   new_histo_group_VVV_wh3l_wz_13TeV_met54->SetBinError(19,0.007189165);
   new_histo_group_VVV_wh3l_wz_13TeV_met54->SetBinError(20,0.007035884);
   new_histo_group_VVV_wh3l_wz_13TeV_met54->SetBinError(21,0.00509875);
   new_histo_group_VVV_wh3l_wz_13TeV_met54->SetBinError(22,0.006431114);
   new_histo_group_VVV_wh3l_wz_13TeV_met54->SetBinError(23,0.004147299);
   new_histo_group_VVV_wh3l_wz_13TeV_met54->SetBinError(24,0.003971015);
   new_histo_group_VVV_wh3l_wz_13TeV_met54->SetBinError(25,0.0023953);
   new_histo_group_VVV_wh3l_wz_13TeV_met54->SetBinError(26,0.003082876);
   new_histo_group_VVV_wh3l_wz_13TeV_met54->SetBinError(27,0.004680448);
   new_histo_group_VVV_wh3l_wz_13TeV_met54->SetBinError(28,0.003768396);
   new_histo_group_VVV_wh3l_wz_13TeV_met54->SetBinError(29,0.004277989);
   new_histo_group_VVV_wh3l_wz_13TeV_met54->SetBinError(30,0.003705546);
   new_histo_group_VVV_wh3l_wz_13TeV_met54->SetBinError(31,0.002126241);
   new_histo_group_VVV_wh3l_wz_13TeV_met54->SetBinError(32,0.002683119);
   new_histo_group_VVV_wh3l_wz_13TeV_met54->SetBinError(33,0.003774788);
   new_histo_group_VVV_wh3l_wz_13TeV_met54->SetBinError(34,0.001997632);
   new_histo_group_VVV_wh3l_wz_13TeV_met54->SetBinError(35,0.004525447);
   new_histo_group_VVV_wh3l_wz_13TeV_met54->SetBinError(36,0.002042199);
   new_histo_group_VVV_wh3l_wz_13TeV_met54->SetBinError(37,0.002679926);
   new_histo_group_VVV_wh3l_wz_13TeV_met54->SetBinError(39,0.0009309254);
   new_histo_group_VVV_wh3l_wz_13TeV_met54->SetBinError(40,0.0004175359);
   new_histo_group_VVV_wh3l_wz_13TeV_met54->SetBinError(41,0.008680247);
   new_histo_group_VVV_wh3l_wz_13TeV_met54->SetEntries(556);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_wz_13TeV_met54->SetFillColor(ci);
   new_histo_group_VVV_wh3l_wz_13TeV_met54->SetFillStyle(3001);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_wz_13TeV_met54->SetLineColor(ci);
   new_histo_group_VVV_wh3l_wz_13TeV_met54->GetXaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_wz_13TeV_met54->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_wz_13TeV_met54->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_wz_13TeV_met54->GetXaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_wz_13TeV_met54->GetYaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_wz_13TeV_met54->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_wz_13TeV_met54->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_wz_13TeV_met54->GetYaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_wz_13TeV_met54->GetZaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_wz_13TeV_met54->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_wz_13TeV_met54->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_wz_13TeV_met54->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_wz_13TeV_met->Add(new_histo_group_VVV_wh3l_wz_13TeV_met,"");
   
   TH1D *new_histo_group_Vg_wh3l_wz_13TeV_met55 = new TH1D("new_histo_group_Vg_wh3l_wz_13TeV_met55","histo_Vg",40,0,200);
   new_histo_group_Vg_wh3l_wz_13TeV_met55->SetBinContent(9,2.870305);
   new_histo_group_Vg_wh3l_wz_13TeV_met55->SetBinContent(10,1.4029);
   new_histo_group_Vg_wh3l_wz_13TeV_met55->SetBinContent(11,0.390547);
   new_histo_group_Vg_wh3l_wz_13TeV_met55->SetBinContent(12,0.0004656833);
   new_histo_group_Vg_wh3l_wz_13TeV_met55->SetBinContent(14,0.3235372);
   new_histo_group_Vg_wh3l_wz_13TeV_met55->SetBinError(9,0.5840557);
   new_histo_group_Vg_wh3l_wz_13TeV_met55->SetBinError(10,0.3876164);
   new_histo_group_Vg_wh3l_wz_13TeV_met55->SetBinError(11,0.2730547);
   new_histo_group_Vg_wh3l_wz_13TeV_met55->SetBinError(12,0.1677183);
   new_histo_group_Vg_wh3l_wz_13TeV_met55->SetBinError(14,0.188611);
   new_histo_group_Vg_wh3l_wz_13TeV_met55->SetEntries(63);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_wz_13TeV_met55->SetFillColor(ci);
   new_histo_group_Vg_wh3l_wz_13TeV_met55->SetFillStyle(3001);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_wz_13TeV_met55->SetLineColor(ci);
   new_histo_group_Vg_wh3l_wz_13TeV_met55->GetXaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_wz_13TeV_met55->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_wz_13TeV_met55->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_wz_13TeV_met55->GetXaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_wz_13TeV_met55->GetYaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_wz_13TeV_met55->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_wz_13TeV_met55->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_wz_13TeV_met55->GetYaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_wz_13TeV_met55->GetZaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_wz_13TeV_met55->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_wz_13TeV_met55->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_wz_13TeV_met55->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_wz_13TeV_met->Add(new_histo_group_Vg_wh3l_wz_13TeV_met,"");
   
   TH1D *new_histo_group_ZZ_wh3l_wz_13TeV_met56 = new TH1D("new_histo_group_ZZ_wh3l_wz_13TeV_met56","histo_ZZ",40,0,200);
   new_histo_group_ZZ_wh3l_wz_13TeV_met56->SetBinContent(9,1.210669);
   new_histo_group_ZZ_wh3l_wz_13TeV_met56->SetBinContent(10,1.420741);
   new_histo_group_ZZ_wh3l_wz_13TeV_met56->SetBinContent(11,0.9094201);
   new_histo_group_ZZ_wh3l_wz_13TeV_met56->SetBinContent(12,0.6133561);
   new_histo_group_ZZ_wh3l_wz_13TeV_met56->SetBinContent(13,0.7112565);
   new_histo_group_ZZ_wh3l_wz_13TeV_met56->SetBinContent(14,0.6350353);
   new_histo_group_ZZ_wh3l_wz_13TeV_met56->SetBinContent(15,0.2906962);
   new_histo_group_ZZ_wh3l_wz_13TeV_met56->SetBinContent(16,0.266022);
   new_histo_group_ZZ_wh3l_wz_13TeV_met56->SetBinContent(17,0.2469167);
   new_histo_group_ZZ_wh3l_wz_13TeV_met56->SetBinContent(18,0.1214784);
   new_histo_group_ZZ_wh3l_wz_13TeV_met56->SetBinContent(19,0.1825965);
   new_histo_group_ZZ_wh3l_wz_13TeV_met56->SetBinContent(20,0.04442129);
   new_histo_group_ZZ_wh3l_wz_13TeV_met56->SetBinContent(21,0.08483115);
   new_histo_group_ZZ_wh3l_wz_13TeV_met56->SetBinContent(23,0.01983349);
   new_histo_group_ZZ_wh3l_wz_13TeV_met56->SetBinContent(40,0.04585245);
   new_histo_group_ZZ_wh3l_wz_13TeV_met56->SetBinError(9,0.2200249);
   new_histo_group_ZZ_wh3l_wz_13TeV_met56->SetBinError(10,0.2499668);
   new_histo_group_ZZ_wh3l_wz_13TeV_met56->SetBinError(11,0.1901296);
   new_histo_group_ZZ_wh3l_wz_13TeV_met56->SetBinError(12,0.1581929);
   new_histo_group_ZZ_wh3l_wz_13TeV_met56->SetBinError(13,0.1747139);
   new_histo_group_ZZ_wh3l_wz_13TeV_met56->SetBinError(14,0.1674403);
   new_histo_group_ZZ_wh3l_wz_13TeV_met56->SetBinError(15,0.1050941);
   new_histo_group_ZZ_wh3l_wz_13TeV_met56->SetBinError(16,0.105659);
   new_histo_group_ZZ_wh3l_wz_13TeV_met56->SetBinError(17,0.1072774);
   new_histo_group_ZZ_wh3l_wz_13TeV_met56->SetBinError(18,0.07306497);
   new_histo_group_ZZ_wh3l_wz_13TeV_met56->SetBinError(19,0.09158353);
   new_histo_group_ZZ_wh3l_wz_13TeV_met56->SetBinError(20,0.04442129);
   new_histo_group_ZZ_wh3l_wz_13TeV_met56->SetBinError(21,0.06002685);
   new_histo_group_ZZ_wh3l_wz_13TeV_met56->SetBinError(23,0.01983349);
   new_histo_group_ZZ_wh3l_wz_13TeV_met56->SetBinError(40,0.04585245);
   new_histo_group_ZZ_wh3l_wz_13TeV_met56->SetEntries(182);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_wz_13TeV_met56->SetFillColor(ci);
   new_histo_group_ZZ_wh3l_wz_13TeV_met56->SetFillStyle(3001);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_wz_13TeV_met56->SetLineColor(ci);
   new_histo_group_ZZ_wh3l_wz_13TeV_met56->GetXaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_wz_13TeV_met56->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_wz_13TeV_met56->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_wz_13TeV_met56->GetXaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_wz_13TeV_met56->GetYaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_wz_13TeV_met56->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_wz_13TeV_met56->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_wz_13TeV_met56->GetYaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_wz_13TeV_met56->GetZaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_wz_13TeV_met56->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_wz_13TeV_met56->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_wz_13TeV_met56->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_wz_13TeV_met->Add(new_histo_group_ZZ_wh3l_wz_13TeV_met,"");
   
   TH1D *new_histo_group_WZ_wh3l_wz_13TeV_met57 = new TH1D("new_histo_group_WZ_wh3l_wz_13TeV_met57","histo_WZ",40,0,200);
   new_histo_group_WZ_wh3l_wz_13TeV_met57->SetBinContent(9,15.80989);
   new_histo_group_WZ_wh3l_wz_13TeV_met57->SetBinContent(10,14.32765);
   new_histo_group_WZ_wh3l_wz_13TeV_met57->SetBinContent(11,13.31032);
   new_histo_group_WZ_wh3l_wz_13TeV_met57->SetBinContent(12,11.62787);
   new_histo_group_WZ_wh3l_wz_13TeV_met57->SetBinContent(13,9.608588);
   new_histo_group_WZ_wh3l_wz_13TeV_met57->SetBinContent(14,8.330098);
   new_histo_group_WZ_wh3l_wz_13TeV_met57->SetBinContent(15,6.643548);
   new_histo_group_WZ_wh3l_wz_13TeV_met57->SetBinContent(16,5.251403);
   new_histo_group_WZ_wh3l_wz_13TeV_met57->SetBinContent(17,4.100545);
   new_histo_group_WZ_wh3l_wz_13TeV_met57->SetBinContent(18,3.344232);
   new_histo_group_WZ_wh3l_wz_13TeV_met57->SetBinContent(19,2.650561);
   new_histo_group_WZ_wh3l_wz_13TeV_met57->SetBinContent(20,2.180331);
   new_histo_group_WZ_wh3l_wz_13TeV_met57->SetBinContent(21,1.580164);
   new_histo_group_WZ_wh3l_wz_13TeV_met57->SetBinContent(22,1.503356);
   new_histo_group_WZ_wh3l_wz_13TeV_met57->SetBinContent(23,1.137838);
   new_histo_group_WZ_wh3l_wz_13TeV_met57->SetBinContent(24,0.9148045);
   new_histo_group_WZ_wh3l_wz_13TeV_met57->SetBinContent(25,0.7564126);
   new_histo_group_WZ_wh3l_wz_13TeV_met57->SetBinContent(26,0.6211334);
   new_histo_group_WZ_wh3l_wz_13TeV_met57->SetBinContent(27,0.6046567);
   new_histo_group_WZ_wh3l_wz_13TeV_met57->SetBinContent(28,0.5925559);
   new_histo_group_WZ_wh3l_wz_13TeV_met57->SetBinContent(29,0.3986137);
   new_histo_group_WZ_wh3l_wz_13TeV_met57->SetBinContent(30,0.4219101);
   new_histo_group_WZ_wh3l_wz_13TeV_met57->SetBinContent(31,0.3553156);
   new_histo_group_WZ_wh3l_wz_13TeV_met57->SetBinContent(32,0.2999279);
   new_histo_group_WZ_wh3l_wz_13TeV_met57->SetBinContent(33,0.2130329);
   new_histo_group_WZ_wh3l_wz_13TeV_met57->SetBinContent(34,0.2511477);
   new_histo_group_WZ_wh3l_wz_13TeV_met57->SetBinContent(35,0.1655459);
   new_histo_group_WZ_wh3l_wz_13TeV_met57->SetBinContent(36,0.1340858);
   new_histo_group_WZ_wh3l_wz_13TeV_met57->SetBinContent(37,0.1813504);
   new_histo_group_WZ_wh3l_wz_13TeV_met57->SetBinContent(38,0.08563839);
   new_histo_group_WZ_wh3l_wz_13TeV_met57->SetBinContent(39,0.08510827);
   new_histo_group_WZ_wh3l_wz_13TeV_met57->SetBinContent(40,0.1387576);
   new_histo_group_WZ_wh3l_wz_13TeV_met57->SetBinContent(41,0.9768437);
   new_histo_group_WZ_wh3l_wz_13TeV_met57->SetBinError(9,0.2940756);
   new_histo_group_WZ_wh3l_wz_13TeV_met57->SetBinError(10,0.2789287);
   new_histo_group_WZ_wh3l_wz_13TeV_met57->SetBinError(11,0.2691732);
   new_histo_group_WZ_wh3l_wz_13TeV_met57->SetBinError(12,0.2512705);
   new_histo_group_WZ_wh3l_wz_13TeV_met57->SetBinError(13,0.2282399);
   new_histo_group_WZ_wh3l_wz_13TeV_met57->SetBinError(14,0.2136525);
   new_histo_group_WZ_wh3l_wz_13TeV_met57->SetBinError(15,0.1897187);
   new_histo_group_WZ_wh3l_wz_13TeV_met57->SetBinError(16,0.1689593);
   new_histo_group_WZ_wh3l_wz_13TeV_met57->SetBinError(17,0.1495404);
   new_histo_group_WZ_wh3l_wz_13TeV_met57->SetBinError(18,0.1342193);
   new_histo_group_WZ_wh3l_wz_13TeV_met57->SetBinError(19,0.1195934);
   new_histo_group_WZ_wh3l_wz_13TeV_met57->SetBinError(20,0.1089465);
   new_histo_group_WZ_wh3l_wz_13TeV_met57->SetBinError(21,0.0925153);
   new_histo_group_WZ_wh3l_wz_13TeV_met57->SetBinError(22,0.09058723);
   new_histo_group_WZ_wh3l_wz_13TeV_met57->SetBinError(23,0.07792715);
   new_histo_group_WZ_wh3l_wz_13TeV_met57->SetBinError(24,0.06972116);
   new_histo_group_WZ_wh3l_wz_13TeV_met57->SetBinError(25,0.06422739);
   new_histo_group_WZ_wh3l_wz_13TeV_met57->SetBinError(26,0.05768584);
   new_histo_group_WZ_wh3l_wz_13TeV_met57->SetBinError(27,0.0575328);
   new_histo_group_WZ_wh3l_wz_13TeV_met57->SetBinError(28,0.05724901);
   new_histo_group_WZ_wh3l_wz_13TeV_met57->SetBinError(29,0.04677486);
   new_histo_group_WZ_wh3l_wz_13TeV_met57->SetBinError(30,0.04758918);
   new_histo_group_WZ_wh3l_wz_13TeV_met57->SetBinError(31,0.04367919);
   new_histo_group_WZ_wh3l_wz_13TeV_met57->SetBinError(32,0.04059904);
   new_histo_group_WZ_wh3l_wz_13TeV_met57->SetBinError(33,0.03279399);
   new_histo_group_WZ_wh3l_wz_13TeV_met57->SetBinError(34,0.03662821);
   new_histo_group_WZ_wh3l_wz_13TeV_met57->SetBinError(35,0.02965009);
   new_histo_group_WZ_wh3l_wz_13TeV_met57->SetBinError(36,0.02659763);
   new_histo_group_WZ_wh3l_wz_13TeV_met57->SetBinError(37,0.03130443);
   new_histo_group_WZ_wh3l_wz_13TeV_met57->SetBinError(38,0.02103204);
   new_histo_group_WZ_wh3l_wz_13TeV_met57->SetBinError(39,0.02103171);
   new_histo_group_WZ_wh3l_wz_13TeV_met57->SetBinError(40,0.02677377);
   new_histo_group_WZ_wh3l_wz_13TeV_met57->SetBinError(41,0.07296223);
   new_histo_group_WZ_wh3l_wz_13TeV_met57->SetEntries(22144);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_wz_13TeV_met57->SetFillColor(ci);
   new_histo_group_WZ_wh3l_wz_13TeV_met57->SetFillStyle(3001);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_wz_13TeV_met57->SetLineColor(ci);
   new_histo_group_WZ_wh3l_wz_13TeV_met57->GetXaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_wz_13TeV_met57->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_wz_13TeV_met57->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_wz_13TeV_met57->GetXaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_wz_13TeV_met57->GetYaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_wz_13TeV_met57->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_wz_13TeV_met57->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_wz_13TeV_met57->GetYaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_wz_13TeV_met57->GetZaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_wz_13TeV_met57->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_wz_13TeV_met57->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_wz_13TeV_met57->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_wz_13TeV_met->Add(new_histo_group_WZ_wh3l_wz_13TeV_met,"");
   
   TH1D *new_histo_group_Higgs_wh3l_wz_13TeV_met58 = new TH1D("new_histo_group_Higgs_wh3l_wz_13TeV_met58","histo_H_htt",40,0,200);
   new_histo_group_Higgs_wh3l_wz_13TeV_met58->SetBinContent(9,0.1117049);
   new_histo_group_Higgs_wh3l_wz_13TeV_met58->SetBinContent(10,0.09467888);
   new_histo_group_Higgs_wh3l_wz_13TeV_met58->SetBinContent(11,0.08970857);
   new_histo_group_Higgs_wh3l_wz_13TeV_met58->SetBinContent(12,0.07823421);
   new_histo_group_Higgs_wh3l_wz_13TeV_met58->SetBinContent(13,0.07659281);
   new_histo_group_Higgs_wh3l_wz_13TeV_met58->SetBinContent(14,0.05354221);
   new_histo_group_Higgs_wh3l_wz_13TeV_met58->SetBinContent(15,0.0572355);
   new_histo_group_Higgs_wh3l_wz_13TeV_met58->SetBinContent(16,0.05426094);
   new_histo_group_Higgs_wh3l_wz_13TeV_met58->SetBinContent(17,0.0368492);
   new_histo_group_Higgs_wh3l_wz_13TeV_met58->SetBinContent(18,0.03689319);
   new_histo_group_Higgs_wh3l_wz_13TeV_met58->SetBinContent(19,0.03154754);
   new_histo_group_Higgs_wh3l_wz_13TeV_met58->SetBinContent(20,0.0150288);
   new_histo_group_Higgs_wh3l_wz_13TeV_met58->SetBinContent(21,0.03713897);
   new_histo_group_Higgs_wh3l_wz_13TeV_met58->SetBinContent(22,0.01908602);
   new_histo_group_Higgs_wh3l_wz_13TeV_met58->SetBinContent(23,0.007229054);
   new_histo_group_Higgs_wh3l_wz_13TeV_met58->SetBinContent(24,0.01087666);
   new_histo_group_Higgs_wh3l_wz_13TeV_met58->SetBinContent(25,0.008154745);
   new_histo_group_Higgs_wh3l_wz_13TeV_met58->SetBinContent(26,0.009032806);
   new_histo_group_Higgs_wh3l_wz_13TeV_met58->SetBinContent(27,0.00870029);
   new_histo_group_Higgs_wh3l_wz_13TeV_met58->SetBinContent(28,0.008496306);
   new_histo_group_Higgs_wh3l_wz_13TeV_met58->SetBinContent(29,0.008751536);
   new_histo_group_Higgs_wh3l_wz_13TeV_met58->SetBinContent(30,0.003951137);
   new_histo_group_Higgs_wh3l_wz_13TeV_met58->SetBinContent(31,0.009656291);
   new_histo_group_Higgs_wh3l_wz_13TeV_met58->SetBinContent(32,0.004345559);
   new_histo_group_Higgs_wh3l_wz_13TeV_met58->SetBinContent(33,0.003400926);
   new_histo_group_Higgs_wh3l_wz_13TeV_met58->SetBinContent(34,0.0005407961);
   new_histo_group_Higgs_wh3l_wz_13TeV_met58->SetBinContent(35,0.002632153);
   new_histo_group_Higgs_wh3l_wz_13TeV_met58->SetBinContent(36,0.001268519);
   new_histo_group_Higgs_wh3l_wz_13TeV_met58->SetBinContent(37,0.0006232932);
   new_histo_group_Higgs_wh3l_wz_13TeV_met58->SetBinContent(38,0.0006484852);
   new_histo_group_Higgs_wh3l_wz_13TeV_met58->SetBinContent(39,0.001902835);
   new_histo_group_Higgs_wh3l_wz_13TeV_met58->SetBinContent(40,0.0008773561);
   new_histo_group_Higgs_wh3l_wz_13TeV_met58->SetBinContent(41,0.009933399);
   new_histo_group_Higgs_wh3l_wz_13TeV_met58->SetBinError(9,0.01182666);
   new_histo_group_Higgs_wh3l_wz_13TeV_met58->SetBinError(10,0.01006423);
   new_histo_group_Higgs_wh3l_wz_13TeV_met58->SetBinError(11,0.01020621);
   new_histo_group_Higgs_wh3l_wz_13TeV_met58->SetBinError(12,0.009785162);
   new_histo_group_Higgs_wh3l_wz_13TeV_met58->SetBinError(13,0.01003838);
   new_histo_group_Higgs_wh3l_wz_13TeV_met58->SetBinError(14,0.008090719);
   new_histo_group_Higgs_wh3l_wz_13TeV_met58->SetBinError(15,0.008202523);
   new_histo_group_Higgs_wh3l_wz_13TeV_met58->SetBinError(16,0.0083119);
   new_histo_group_Higgs_wh3l_wz_13TeV_met58->SetBinError(17,0.006305209);
   new_histo_group_Higgs_wh3l_wz_13TeV_met58->SetBinError(18,0.006526769);
   new_histo_group_Higgs_wh3l_wz_13TeV_met58->SetBinError(19,0.005905453);
   new_histo_group_Higgs_wh3l_wz_13TeV_met58->SetBinError(20,0.004248404);
   new_histo_group_Higgs_wh3l_wz_13TeV_met58->SetBinError(21,0.006790243);
   new_histo_group_Higgs_wh3l_wz_13TeV_met58->SetBinError(22,0.004659255);
   new_histo_group_Higgs_wh3l_wz_13TeV_met58->SetBinError(23,0.002437518);
   new_histo_group_Higgs_wh3l_wz_13TeV_met58->SetBinError(24,0.003484633);
   new_histo_group_Higgs_wh3l_wz_13TeV_met58->SetBinError(25,0.002485178);
   new_histo_group_Higgs_wh3l_wz_13TeV_met58->SetBinError(26,0.002359044);
   new_histo_group_Higgs_wh3l_wz_13TeV_met58->SetBinError(27,0.003139792);
   new_histo_group_Higgs_wh3l_wz_13TeV_met58->SetBinError(28,0.002770623);
   new_histo_group_Higgs_wh3l_wz_13TeV_met58->SetBinError(29,0.003150909);
   new_histo_group_Higgs_wh3l_wz_13TeV_met58->SetBinError(30,0.001933348);
   new_histo_group_Higgs_wh3l_wz_13TeV_met58->SetBinError(31,0.003460265);
   new_histo_group_Higgs_wh3l_wz_13TeV_met58->SetBinError(32,0.002070873);
   new_histo_group_Higgs_wh3l_wz_13TeV_met58->SetBinError(33,0.00185517);
   new_histo_group_Higgs_wh3l_wz_13TeV_met58->SetBinError(34,0.00043741);
   new_histo_group_Higgs_wh3l_wz_13TeV_met58->SetBinError(35,0.001606492);
   new_histo_group_Higgs_wh3l_wz_13TeV_met58->SetBinError(36,0.001268519);
   new_histo_group_Higgs_wh3l_wz_13TeV_met58->SetBinError(37,0.0005498652);
   new_histo_group_Higgs_wh3l_wz_13TeV_met58->SetBinError(38,0.0005541409);
   new_histo_group_Higgs_wh3l_wz_13TeV_met58->SetBinError(39,0.001513872);
   new_histo_group_Higgs_wh3l_wz_13TeV_met58->SetBinError(40,0.0006206068);
   new_histo_group_Higgs_wh3l_wz_13TeV_met58->SetBinError(41,0.003143206);
   new_histo_group_Higgs_wh3l_wz_13TeV_met58->SetEntries(1285);
   new_histo_group_Higgs_wh3l_wz_13TeV_met58->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_wz_13TeV_met58->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_wz_13TeV_met58->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_wz_13TeV_met58->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_wz_13TeV_met58->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_wz_13TeV_met58->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_wz_13TeV_met58->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_wz_13TeV_met58->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_wz_13TeV_met58->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_wz_13TeV_met58->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_wz_13TeV_met58->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_wz_13TeV_met58->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_wz_13TeV_met58->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_wz_13TeV_met58->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_wz_13TeV_met58->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_wz_13TeV_met->Add(new_histo_group_Higgs_wh3l_wz_13TeV_met,"");
   thsBackground_grouped_wh3l_wz_13TeV_met->Draw("hist same");
   
   thsSignal_grouped_wh3l_wz_13TeV_met = new THStack();
   thsSignal_grouped_wh3l_wz_13TeV_met->SetName("thsSignal_grouped_wh3l_wz_13TeV_met");
   thsSignal_grouped_wh3l_wz_13TeV_met->SetTitle("thsSignal_grouped_wh3l_wz_13TeV_met");
   
   TH1F *thsSignal_grouped_wh3l_wz_13TeV_met_stack_12 = new TH1F("thsSignal_grouped_wh3l_wz_13TeV_met_stack_12","thsSignal_grouped_wh3l_wz_13TeV_met",40,0,200);
   thsSignal_grouped_wh3l_wz_13TeV_met_stack_12->SetMinimum(0);
   thsSignal_grouped_wh3l_wz_13TeV_met_stack_12->SetMaximum(0.1297081);
   thsSignal_grouped_wh3l_wz_13TeV_met_stack_12->SetDirectory(0);
   thsSignal_grouped_wh3l_wz_13TeV_met_stack_12->SetStats(0);
   thsSignal_grouped_wh3l_wz_13TeV_met_stack_12->SetLineStyle(0);
   thsSignal_grouped_wh3l_wz_13TeV_met_stack_12->SetMarkerStyle(20);
   thsSignal_grouped_wh3l_wz_13TeV_met_stack_12->GetXaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_wz_13TeV_met_stack_12->GetXaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_wz_13TeV_met_stack_12->GetXaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_wz_13TeV_met_stack_12->GetXaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_wz_13TeV_met_stack_12->GetXaxis()->SetTitleOffset(0.9);
   thsSignal_grouped_wh3l_wz_13TeV_met_stack_12->GetXaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_wz_13TeV_met_stack_12->GetYaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_wz_13TeV_met_stack_12->GetYaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_wz_13TeV_met_stack_12->GetYaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_wz_13TeV_met_stack_12->GetYaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_wz_13TeV_met_stack_12->GetYaxis()->SetTitleOffset(1.25);
   thsSignal_grouped_wh3l_wz_13TeV_met_stack_12->GetYaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_wz_13TeV_met_stack_12->GetZaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_wz_13TeV_met_stack_12->GetZaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_wz_13TeV_met_stack_12->GetZaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_wz_13TeV_met_stack_12->GetZaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_wz_13TeV_met_stack_12->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_wz_13TeV_met->SetHistogram(thsSignal_grouped_wh3l_wz_13TeV_met_stack_12);
   
   
   TH1D *new_histo_group_Higgs_wh3l_wz_13TeV_met59 = new TH1D("new_histo_group_Higgs_wh3l_wz_13TeV_met59","histo_H_htt",40,0,200);
   new_histo_group_Higgs_wh3l_wz_13TeV_met59->SetBinContent(9,0.1117049);
   new_histo_group_Higgs_wh3l_wz_13TeV_met59->SetBinContent(10,0.09467888);
   new_histo_group_Higgs_wh3l_wz_13TeV_met59->SetBinContent(11,0.08970857);
   new_histo_group_Higgs_wh3l_wz_13TeV_met59->SetBinContent(12,0.07823421);
   new_histo_group_Higgs_wh3l_wz_13TeV_met59->SetBinContent(13,0.07659281);
   new_histo_group_Higgs_wh3l_wz_13TeV_met59->SetBinContent(14,0.05354221);
   new_histo_group_Higgs_wh3l_wz_13TeV_met59->SetBinContent(15,0.0572355);
   new_histo_group_Higgs_wh3l_wz_13TeV_met59->SetBinContent(16,0.05426094);
   new_histo_group_Higgs_wh3l_wz_13TeV_met59->SetBinContent(17,0.0368492);
   new_histo_group_Higgs_wh3l_wz_13TeV_met59->SetBinContent(18,0.03689319);
   new_histo_group_Higgs_wh3l_wz_13TeV_met59->SetBinContent(19,0.03154754);
   new_histo_group_Higgs_wh3l_wz_13TeV_met59->SetBinContent(20,0.0150288);
   new_histo_group_Higgs_wh3l_wz_13TeV_met59->SetBinContent(21,0.03713897);
   new_histo_group_Higgs_wh3l_wz_13TeV_met59->SetBinContent(22,0.01908602);
   new_histo_group_Higgs_wh3l_wz_13TeV_met59->SetBinContent(23,0.007229054);
   new_histo_group_Higgs_wh3l_wz_13TeV_met59->SetBinContent(24,0.01087666);
   new_histo_group_Higgs_wh3l_wz_13TeV_met59->SetBinContent(25,0.008154745);
   new_histo_group_Higgs_wh3l_wz_13TeV_met59->SetBinContent(26,0.009032806);
   new_histo_group_Higgs_wh3l_wz_13TeV_met59->SetBinContent(27,0.00870029);
   new_histo_group_Higgs_wh3l_wz_13TeV_met59->SetBinContent(28,0.008496306);
   new_histo_group_Higgs_wh3l_wz_13TeV_met59->SetBinContent(29,0.008751536);
   new_histo_group_Higgs_wh3l_wz_13TeV_met59->SetBinContent(30,0.003951137);
   new_histo_group_Higgs_wh3l_wz_13TeV_met59->SetBinContent(31,0.009656291);
   new_histo_group_Higgs_wh3l_wz_13TeV_met59->SetBinContent(32,0.004345559);
   new_histo_group_Higgs_wh3l_wz_13TeV_met59->SetBinContent(33,0.003400926);
   new_histo_group_Higgs_wh3l_wz_13TeV_met59->SetBinContent(34,0.0005407961);
   new_histo_group_Higgs_wh3l_wz_13TeV_met59->SetBinContent(35,0.002632153);
   new_histo_group_Higgs_wh3l_wz_13TeV_met59->SetBinContent(36,0.001268519);
   new_histo_group_Higgs_wh3l_wz_13TeV_met59->SetBinContent(37,0.0006232932);
   new_histo_group_Higgs_wh3l_wz_13TeV_met59->SetBinContent(38,0.0006484852);
   new_histo_group_Higgs_wh3l_wz_13TeV_met59->SetBinContent(39,0.001902835);
   new_histo_group_Higgs_wh3l_wz_13TeV_met59->SetBinContent(40,0.0008773561);
   new_histo_group_Higgs_wh3l_wz_13TeV_met59->SetBinContent(41,0.009933399);
   new_histo_group_Higgs_wh3l_wz_13TeV_met59->SetBinError(9,0.01182666);
   new_histo_group_Higgs_wh3l_wz_13TeV_met59->SetBinError(10,0.01006423);
   new_histo_group_Higgs_wh3l_wz_13TeV_met59->SetBinError(11,0.01020621);
   new_histo_group_Higgs_wh3l_wz_13TeV_met59->SetBinError(12,0.009785162);
   new_histo_group_Higgs_wh3l_wz_13TeV_met59->SetBinError(13,0.01003838);
   new_histo_group_Higgs_wh3l_wz_13TeV_met59->SetBinError(14,0.008090719);
   new_histo_group_Higgs_wh3l_wz_13TeV_met59->SetBinError(15,0.008202523);
   new_histo_group_Higgs_wh3l_wz_13TeV_met59->SetBinError(16,0.0083119);
   new_histo_group_Higgs_wh3l_wz_13TeV_met59->SetBinError(17,0.006305209);
   new_histo_group_Higgs_wh3l_wz_13TeV_met59->SetBinError(18,0.006526769);
   new_histo_group_Higgs_wh3l_wz_13TeV_met59->SetBinError(19,0.005905453);
   new_histo_group_Higgs_wh3l_wz_13TeV_met59->SetBinError(20,0.004248404);
   new_histo_group_Higgs_wh3l_wz_13TeV_met59->SetBinError(21,0.006790243);
   new_histo_group_Higgs_wh3l_wz_13TeV_met59->SetBinError(22,0.004659255);
   new_histo_group_Higgs_wh3l_wz_13TeV_met59->SetBinError(23,0.002437518);
   new_histo_group_Higgs_wh3l_wz_13TeV_met59->SetBinError(24,0.003484633);
   new_histo_group_Higgs_wh3l_wz_13TeV_met59->SetBinError(25,0.002485178);
   new_histo_group_Higgs_wh3l_wz_13TeV_met59->SetBinError(26,0.002359044);
   new_histo_group_Higgs_wh3l_wz_13TeV_met59->SetBinError(27,0.003139792);
   new_histo_group_Higgs_wh3l_wz_13TeV_met59->SetBinError(28,0.002770623);
   new_histo_group_Higgs_wh3l_wz_13TeV_met59->SetBinError(29,0.003150909);
   new_histo_group_Higgs_wh3l_wz_13TeV_met59->SetBinError(30,0.001933348);
   new_histo_group_Higgs_wh3l_wz_13TeV_met59->SetBinError(31,0.003460265);
   new_histo_group_Higgs_wh3l_wz_13TeV_met59->SetBinError(32,0.002070873);
   new_histo_group_Higgs_wh3l_wz_13TeV_met59->SetBinError(33,0.00185517);
   new_histo_group_Higgs_wh3l_wz_13TeV_met59->SetBinError(34,0.00043741);
   new_histo_group_Higgs_wh3l_wz_13TeV_met59->SetBinError(35,0.001606492);
   new_histo_group_Higgs_wh3l_wz_13TeV_met59->SetBinError(36,0.001268519);
   new_histo_group_Higgs_wh3l_wz_13TeV_met59->SetBinError(37,0.0005498652);
   new_histo_group_Higgs_wh3l_wz_13TeV_met59->SetBinError(38,0.0005541409);
   new_histo_group_Higgs_wh3l_wz_13TeV_met59->SetBinError(39,0.001513872);
   new_histo_group_Higgs_wh3l_wz_13TeV_met59->SetBinError(40,0.0006206068);
   new_histo_group_Higgs_wh3l_wz_13TeV_met59->SetBinError(41,0.003143206);
   new_histo_group_Higgs_wh3l_wz_13TeV_met59->SetEntries(1285);
   new_histo_group_Higgs_wh3l_wz_13TeV_met59->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_wz_13TeV_met59->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_wz_13TeV_met59->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_wz_13TeV_met59->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_wz_13TeV_met59->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_wz_13TeV_met59->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_wz_13TeV_met59->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_wz_13TeV_met59->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_wz_13TeV_met59->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_wz_13TeV_met59->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_wz_13TeV_met59->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_wz_13TeV_met59->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_wz_13TeV_met59->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_wz_13TeV_met59->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_wz_13TeV_met59->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_wz_13TeV_met->Add(new_histo_group_Higgs_wh3l_wz_13TeV_met,"");
   thsSignal_grouped_wh3l_wz_13TeV_met->Draw("hist same noclear");
   
   Double_t _fx3011[40] = {
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
   Double_t _fy3011[40] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   24.80334,
   18.90862,
   16.7485,
   12.42223,
   11.64946,
   8.430389,
   6.866091,
   5.669333,
   5.024353,
   3.780437,
   2.831146,
   2.493846,
   1.259283,
   1.442428,
   1.074549,
   0.7548004,
   0.9435313,
   0.6690626,
   0.7187225,
   1.001657,
   0.3267022,
   0.4317077,
   0.3589958,
   0.3064528,
   0.2933394,
   0.2535455,
   0.174618,
   0.7343501,
   0.1790211,
   -0.05951613,
   0.02837669,
   0.1850276};
   Double_t _felx3011[40] = {
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
   Double_t _fely3011[40] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   3.490144,
   2.310137,
   2.214113,
   0.6142738,
   1.440778,
   1.273838,
   0.7758726,
   0.4338201,
   0.9089229,
   0.5220277,
   0.2621123,
   0.4188569,
   0.4890963,
   0.1739717,
   0.1956037,
   0.3153271,
   0.2096913,
   0.1067708,
   0.1680501,
   0.4847793,
   0.1167121,
   0.05391823,
   0.04724198,
   0.0456004,
   0.1157273,
   0.03973739,
   0.03567008,
   0.6018052,
   0.0347351,
   0.1340294,
   0.08262125,
   0.07422622};
   Double_t _fehx3011[40] = {
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
   Double_t _fehy3011[40] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   3.488292,
   2.309001,
   2.213203,
   1.434047,
   1.440205,
   1.272199,
   0.4384489,
   0.7808872,
   0.9085954,
   0.8657316,
   0.2609951,
   0.5938473,
   0.4889694,
   0.173382,
   0.1953543,
   0.2492016,
   0.2095202,
   0.2164502,
   0.1679311,
   0.6073473,
   0.1166001,
   0.05370337,
   0.04695211,
   0.04540062,
   0.1157211,
   0.03967117,
   0.03559287,
   0.6017968,
   0.03426369,
   0.134028,
   0.08259664,
   0.07366233};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(40,_fx3011,_fy3011,_felx3011,_fehx3011,_fely3011,_fehy3011);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(12);
   grae->SetFillStyle(3004);
   grae->SetLineColor(12);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3011 = new TH1F("Graph_Graph3011","",100,0,220);
   Graph_Graph3011->SetMinimum(-3.042063);
   Graph_Graph3011->SetMaximum(31.14014);
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
   
   Double_t _fx3012[40] = {
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
   Double_t _fy3012[40] = {
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
   22,
   10,
   17,
   7,
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
   Double_t _felx3012[40] = {
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
   Double_t _fely3012[40] = {
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
   4.654589,
   3.108748,
   4.082258,
   2.581513,
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
   Double_t _fehx3012[40] = {
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
   Double_t _fehy3012[40] = {
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
   5.761485,
   4.267035,
   5.203825,
   3.770356,
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
   grae = new TGraphAsymmErrors(40,_fx3012,_fy3012,_felx3012,_fehx3012,_fely3012,_fehy3012);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(1);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3012 = new TH1F("Graph_Graph3012","",100,0,220);
   Graph_Graph3012->SetMinimum(0);
   Graph_Graph3012->SetMaximum(38.99187);
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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_wz_13TeV_met","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_wz_13TeV_met","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
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
   
   TH1F *hframe_copy60 = new TH1F("hframe_copy60","",1000,0,200);
   hframe_copy60->SetMinimum(0);
   hframe_copy60->SetMaximum(85.96291);
   hframe_copy60->SetDirectory(0);
   hframe_copy60->SetStats(0);
   hframe_copy60->SetLineStyle(0);
   hframe_copy60->SetMarkerStyle(20);
   hframe_copy60->GetXaxis()->SetTitle("pfmet [GeV]");
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
   ccwh3l_wz_13TeV_met->Modified();
   ccwh3l_wz_13TeV_met->cd();
   ccwh3l_wz_13TeV_met->SetSelected(ccwh3l_wz_13TeV_met);
}
