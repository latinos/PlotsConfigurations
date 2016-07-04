void c_wh3l_Pre_13TeV_pt3()
{
//=========Macro generated from canvas: ccwh3l_Pre_13TeV_pt3/cc
//=========  (Sun Jul  3 01:22:07 2016) by ROOT version6.02/13
   TCanvas *ccwh3l_Pre_13TeV_pt3 = new TCanvas("ccwh3l_Pre_13TeV_pt3", "cc",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   ccwh3l_Pre_13TeV_pt3->SetHighLightColor(2);
   ccwh3l_Pre_13TeV_pt3->Range(-28,-3.552806,209.5,23.77647);
   ccwh3l_Pre_13TeV_pt3->SetFillColor(0);
   ccwh3l_Pre_13TeV_pt3->SetBorderMode(0);
   ccwh3l_Pre_13TeV_pt3->SetBorderSize(2);
   ccwh3l_Pre_13TeV_pt3->SetTickx(1);
   ccwh3l_Pre_13TeV_pt3->SetTicky(1);
   ccwh3l_Pre_13TeV_pt3->SetLeftMargin(0.16);
   ccwh3l_Pre_13TeV_pt3->SetRightMargin(0.04);
   ccwh3l_Pre_13TeV_pt3->SetTopMargin(0.05);
   ccwh3l_Pre_13TeV_pt3->SetBottomMargin(0.13);
   ccwh3l_Pre_13TeV_pt3->SetFrameFillStyle(0);
   ccwh3l_Pre_13TeV_pt3->SetFrameBorderMode(0);
   ccwh3l_Pre_13TeV_pt3->SetFrameFillStyle(0);
   ccwh3l_Pre_13TeV_pt3->SetFrameBorderMode(0);
   
   TH1F *hframe361 = new TH1F("hframe361","",1000,10,200);
   hframe361->SetMinimum(0);
   hframe361->SetMaximum(22.41);
   hframe361->SetDirectory(0);
   hframe361->SetStats(0);
   hframe361->SetLineStyle(0);
   hframe361->SetMarkerStyle(20);
   hframe361->GetXaxis()->SetTitle("lept3_p_{T} [GeV]");
   hframe361->GetXaxis()->SetNdivisions(506);
   hframe361->GetXaxis()->SetLabelFont(42);
   hframe361->GetXaxis()->SetLabelOffset(0.007);
   hframe361->GetXaxis()->SetLabelSize(0.05);
   hframe361->GetXaxis()->SetTitleSize(0.06);
   hframe361->GetXaxis()->SetTitleOffset(0.9);
   hframe361->GetXaxis()->SetTitleFont(42);
   hframe361->GetYaxis()->SetTitle("Events");
   hframe361->GetYaxis()->SetLabelFont(42);
   hframe361->GetYaxis()->SetLabelOffset(0.007);
   hframe361->GetYaxis()->SetLabelSize(0.05);
   hframe361->GetYaxis()->SetTitleSize(0.06);
   hframe361->GetYaxis()->SetTitleOffset(1.25);
   hframe361->GetYaxis()->SetTitleFont(42);
   hframe361->GetZaxis()->SetLabelFont(42);
   hframe361->GetZaxis()->SetLabelOffset(0.007);
   hframe361->GetZaxis()->SetLabelSize(0.05);
   hframe361->GetZaxis()->SetTitleSize(0.06);
   hframe361->GetZaxis()->SetTitleFont(42);
   hframe361->Draw(" ");
   
   THStack *thsBackground_grouped_wh3l_Pre_13TeV_pt3 = new THStack();
   thsBackground_grouped_wh3l_Pre_13TeV_pt3->SetName("thsBackground_grouped_wh3l_Pre_13TeV_pt3");
   thsBackground_grouped_wh3l_Pre_13TeV_pt3->SetTitle("thsBackground_grouped_wh3l_Pre_13TeV_pt3");
   
   TH1F *thsBackground_grouped_wh3l_Pre_13TeV_pt3_stack_73 = new TH1F("thsBackground_grouped_wh3l_Pre_13TeV_pt3_stack_73","thsBackground_grouped_wh3l_Pre_13TeV_pt3",25,10,200);
   thsBackground_grouped_wh3l_Pre_13TeV_pt3_stack_73->SetMinimum(-0.1783892);
   thsBackground_grouped_wh3l_Pre_13TeV_pt3_stack_73->SetMaximum(10.5145);
   thsBackground_grouped_wh3l_Pre_13TeV_pt3_stack_73->SetDirectory(0);
   thsBackground_grouped_wh3l_Pre_13TeV_pt3_stack_73->SetStats(0);
   thsBackground_grouped_wh3l_Pre_13TeV_pt3_stack_73->SetLineStyle(0);
   thsBackground_grouped_wh3l_Pre_13TeV_pt3_stack_73->SetMarkerStyle(20);
   thsBackground_grouped_wh3l_Pre_13TeV_pt3_stack_73->GetXaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_Pre_13TeV_pt3_stack_73->GetXaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_Pre_13TeV_pt3_stack_73->GetXaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_Pre_13TeV_pt3_stack_73->GetXaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_Pre_13TeV_pt3_stack_73->GetXaxis()->SetTitleOffset(0.9);
   thsBackground_grouped_wh3l_Pre_13TeV_pt3_stack_73->GetXaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_Pre_13TeV_pt3_stack_73->GetYaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_Pre_13TeV_pt3_stack_73->GetYaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_Pre_13TeV_pt3_stack_73->GetYaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_Pre_13TeV_pt3_stack_73->GetYaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_Pre_13TeV_pt3_stack_73->GetYaxis()->SetTitleOffset(1.25);
   thsBackground_grouped_wh3l_Pre_13TeV_pt3_stack_73->GetYaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_Pre_13TeV_pt3_stack_73->GetZaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_Pre_13TeV_pt3_stack_73->GetZaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_Pre_13TeV_pt3_stack_73->GetZaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_Pre_13TeV_pt3_stack_73->GetZaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_Pre_13TeV_pt3_stack_73->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_Pre_13TeV_pt3->SetHistogram(thsBackground_grouped_wh3l_Pre_13TeV_pt3_stack_73);
   
   
   TH1D *new_histo_group_Fake_wh3l_Pre_13TeV_pt3362 = new TH1D("new_histo_group_Fake_wh3l_Pre_13TeV_pt3362","histo_Fake",25,10,200);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt3362->SetBinContent(1,7.851266);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt3362->SetBinContent(2,6.79535);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt3362->SetBinContent(3,4.690631);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt3362->SetBinContent(4,1.227055);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt3362->SetBinContent(5,1.111306);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt3362->SetBinContent(6,0.517307);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt3362->SetBinContent(7,-0.0183112);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt3362->SetBinContent(11,-0.01470217);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt3362->SetBinError(1,2.162547);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt3362->SetBinError(2,1.696485);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt3362->SetBinError(3,1.296776);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt3362->SetBinError(4,0.7003384);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt3362->SetBinError(5,0.5833189);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt3362->SetBinError(6,0.333868);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt3362->SetBinError(7,0.03024296);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt3362->SetBinError(11,0.01470217);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt3362->SetEntries(191);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_Pre_13TeV_pt3362->SetFillColor(ci);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt3362->SetFillStyle(3001);

   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_Pre_13TeV_pt3362->SetLineColor(ci);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt3362->GetXaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt3362->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt3362->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt3362->GetXaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt3362->GetYaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt3362->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt3362->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt3362->GetYaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt3362->GetZaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt3362->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt3362->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_Pre_13TeV_pt3362->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_Pre_13TeV_pt3->Add(new_histo_group_Fake_wh3l_Pre_13TeV_pt3,"");
   
   TH1D *new_histo_group_WW_wh3l_Pre_13TeV_pt3363 = new TH1D("new_histo_group_WW_wh3l_Pre_13TeV_pt3363","histo_WW",25,10,200);
   new_histo_group_WW_wh3l_Pre_13TeV_pt3363->SetBinContent(1,0.1158252);
   new_histo_group_WW_wh3l_Pre_13TeV_pt3363->SetBinContent(2,0.01483974);
   new_histo_group_WW_wh3l_Pre_13TeV_pt3363->SetBinContent(4,0.01595104);
   new_histo_group_WW_wh3l_Pre_13TeV_pt3363->SetBinContent(6,0.04887665);
   new_histo_group_WW_wh3l_Pre_13TeV_pt3363->SetBinError(1,0.04283189);
   new_histo_group_WW_wh3l_Pre_13TeV_pt3363->SetBinError(2,0.01130347);
   new_histo_group_WW_wh3l_Pre_13TeV_pt3363->SetBinError(4,0.01595104);
   new_histo_group_WW_wh3l_Pre_13TeV_pt3363->SetBinError(6,0.02822604);
   new_histo_group_WW_wh3l_Pre_13TeV_pt3363->SetEntries(14);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_Pre_13TeV_pt3363->SetFillColor(ci);
   new_histo_group_WW_wh3l_Pre_13TeV_pt3363->SetFillStyle(3001);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_Pre_13TeV_pt3363->SetLineColor(ci);
   new_histo_group_WW_wh3l_Pre_13TeV_pt3363->GetXaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_Pre_13TeV_pt3363->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_Pre_13TeV_pt3363->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_Pre_13TeV_pt3363->GetXaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_Pre_13TeV_pt3363->GetYaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_Pre_13TeV_pt3363->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_Pre_13TeV_pt3363->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_Pre_13TeV_pt3363->GetYaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_Pre_13TeV_pt3363->GetZaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_Pre_13TeV_pt3363->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_Pre_13TeV_pt3363->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_Pre_13TeV_pt3363->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_Pre_13TeV_pt3->Add(new_histo_group_WW_wh3l_Pre_13TeV_pt3,"");
   
   TH1D *new_histo_group_VVV_wh3l_Pre_13TeV_pt3364 = new TH1D("new_histo_group_VVV_wh3l_Pre_13TeV_pt3364","histo_VVV",25,10,200);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt3364->SetBinContent(1,0.07119449);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt3364->SetBinContent(2,0.06600735);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt3364->SetBinContent(3,0.08937413);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt3364->SetBinContent(4,0.03555528);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt3364->SetBinContent(5,0.03678008);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt3364->SetBinContent(6,0.02900017);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt3364->SetBinContent(7,0.005280826);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt3364->SetBinContent(8,0.01114146);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt3364->SetBinContent(9,0.004447505);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt3364->SetBinContent(10,0.01147595);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt3364->SetBinContent(11,0.000287528);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt3364->SetBinContent(13,0.001998331);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt3364->SetBinContent(16,0.0002148976);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt3364->SetBinContent(17,0.001560374);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt3364->SetBinContent(21,0.001555211);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt3364->SetBinContent(22,0.002202303);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt3364->SetBinError(1,0.01326759);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt3364->SetBinError(2,0.01470024);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt3364->SetBinError(3,0.0150757);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt3364->SetBinError(4,0.01024241);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt3364->SetBinError(5,0.01015822);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt3364->SetBinError(6,0.007952303);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt3364->SetBinError(7,0.004991571);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt3364->SetBinError(8,0.004805276);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt3364->SetBinError(9,0.00315588);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt3364->SetBinError(10,0.005202445);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt3364->SetBinError(11,0.0002873131);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt3364->SetBinError(13,0.001998331);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt3364->SetBinError(16,0.0002148976);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt3364->SetBinError(17,0.001560374);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt3364->SetBinError(21,0.001555211);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt3364->SetBinError(22,0.002202303);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt3364->SetEntries(227);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_Pre_13TeV_pt3364->SetFillColor(ci);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt3364->SetFillStyle(3001);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_Pre_13TeV_pt3364->SetLineColor(ci);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt3364->GetXaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt3364->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt3364->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt3364->GetXaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt3364->GetYaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt3364->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt3364->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt3364->GetYaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt3364->GetZaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt3364->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt3364->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_Pre_13TeV_pt3364->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_Pre_13TeV_pt3->Add(new_histo_group_VVV_wh3l_Pre_13TeV_pt3,"");
   
   TH1D *new_histo_group_Vg_wh3l_Pre_13TeV_pt3365 = new TH1D("new_histo_group_Vg_wh3l_Pre_13TeV_pt3365","histo_Vg",25,10,200);
   new_histo_group_Vg_wh3l_Pre_13TeV_pt3365->SetBinContent(1,0.05869026);
   new_histo_group_Vg_wh3l_Pre_13TeV_pt3365->SetBinContent(2,0.01844933);
   new_histo_group_Vg_wh3l_Pre_13TeV_pt3365->SetBinContent(4,0.122739);
   new_histo_group_Vg_wh3l_Pre_13TeV_pt3365->SetBinError(1,0.2370795);
   new_histo_group_Vg_wh3l_Pre_13TeV_pt3365->SetBinError(2,0.1426091);
   new_histo_group_Vg_wh3l_Pre_13TeV_pt3365->SetBinError(4,0.122739);
   new_histo_group_Vg_wh3l_Pre_13TeV_pt3365->SetEntries(10);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_Pre_13TeV_pt3365->SetFillColor(ci);
   new_histo_group_Vg_wh3l_Pre_13TeV_pt3365->SetFillStyle(3001);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_Pre_13TeV_pt3365->SetLineColor(ci);
   new_histo_group_Vg_wh3l_Pre_13TeV_pt3365->GetXaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_Pre_13TeV_pt3365->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_Pre_13TeV_pt3365->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_Pre_13TeV_pt3365->GetXaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_Pre_13TeV_pt3365->GetYaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_Pre_13TeV_pt3365->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_Pre_13TeV_pt3365->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_Pre_13TeV_pt3365->GetYaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_Pre_13TeV_pt3365->GetZaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_Pre_13TeV_pt3365->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_Pre_13TeV_pt3365->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_Pre_13TeV_pt3365->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_Pre_13TeV_pt3->Add(new_histo_group_Vg_wh3l_Pre_13TeV_pt3,"");
   
   TH1D *new_histo_group_ZZ_wh3l_Pre_13TeV_pt3366 = new TH1D("new_histo_group_ZZ_wh3l_Pre_13TeV_pt3366","histo_ZZ",25,10,200);
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt3366->SetBinContent(1,0.09040143);
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt3366->SetBinContent(2,0.03984332);
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt3366->SetBinContent(4,0.03513683);
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt3366->SetBinError(1,0.06402017);
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt3366->SetBinError(2,0.03984332);
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt3366->SetBinError(4,0.03513683);
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt3366->SetEntries(4);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt3366->SetFillColor(ci);
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt3366->SetFillStyle(3001);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt3366->SetLineColor(ci);
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt3366->GetXaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt3366->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt3366->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt3366->GetXaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt3366->GetYaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt3366->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt3366->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt3366->GetYaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt3366->GetZaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt3366->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt3366->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_Pre_13TeV_pt3366->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_Pre_13TeV_pt3->Add(new_histo_group_ZZ_wh3l_Pre_13TeV_pt3,"");
   
   TH1D *new_histo_group_WZ_wh3l_Pre_13TeV_pt3367 = new TH1D("new_histo_group_WZ_wh3l_Pre_13TeV_pt3367","histo_WZ",25,10,200);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt3367->SetBinContent(1,0.5969741);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt3367->SetBinContent(2,0.4079476);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt3367->SetBinContent(3,0.2544217);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt3367->SetBinContent(4,0.1070718);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt3367->SetBinContent(5,0.04297825);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt3367->SetBinContent(6,0.02913243);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt3367->SetBinContent(7,0.0251956);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt3367->SetBinContent(8,0.004988727);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt3367->SetBinContent(9,0.009784053);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt3367->SetBinContent(10,0.01100077);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt3367->SetBinContent(14,0.005526573);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt3367->SetBinError(1,0.05743009);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt3367->SetBinError(2,0.04745822);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt3367->SetBinError(3,0.0370898);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt3367->SetBinError(4,0.02395376);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt3367->SetBinError(5,0.01523707);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt3367->SetBinError(6,0.01174349);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt3367->SetBinError(7,0.01212334);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt3367->SetBinError(8,0.004988727);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt3367->SetBinError(9,0.00708697);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt3367->SetBinError(10,0.007845909);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt3367->SetBinError(14,0.005526573);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt3367->SetEntries(305);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_Pre_13TeV_pt3367->SetFillColor(ci);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt3367->SetFillStyle(3001);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_Pre_13TeV_pt3367->SetLineColor(ci);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt3367->GetXaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt3367->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt3367->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt3367->GetXaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt3367->GetYaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt3367->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt3367->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt3367->GetYaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt3367->GetZaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt3367->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt3367->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_Pre_13TeV_pt3367->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_Pre_13TeV_pt3->Add(new_histo_group_WZ_wh3l_Pre_13TeV_pt3,"");
   
   TH1D *new_histo_group_Higgs_wh3l_Pre_13TeV_pt3368 = new TH1D("new_histo_group_Higgs_wh3l_Pre_13TeV_pt3368","histo_H_htt",25,10,200);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt3368->SetBinContent(1,0.1796501);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt3368->SetBinContent(2,0.1502238);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt3368->SetBinContent(3,0.07105607);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt3368->SetBinContent(4,0.05139606);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt3368->SetBinContent(5,0.02563422);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt3368->SetBinContent(6,0.007764538);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt3368->SetBinContent(7,0.004339834);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt3368->SetBinContent(8,0.005658448);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt3368->SetBinContent(9,0.0010871);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt3368->SetBinContent(10,0.0005029922);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt3368->SetBinContent(11,0.0004177496);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt3368->SetBinContent(12,0.002110052);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt3368->SetBinContent(16,0.0001992739);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt3368->SetBinError(1,0.01358918);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt3368->SetBinError(2,0.01270042);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt3368->SetBinError(3,0.008704213);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt3368->SetBinError(4,0.007790946);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt3368->SetBinError(5,0.005395646);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt3368->SetBinError(6,0.002469807);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt3368->SetBinError(7,0.001827559);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt3368->SetBinError(8,0.002719256);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt3368->SetBinError(9,0.0009049054);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt3368->SetBinError(10,0.0003740448);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt3368->SetBinError(11,0.0002954586);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt3368->SetBinError(12,0.001715965);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt3368->SetBinError(16,0.0001992739);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt3368->SetEntries(916);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt3368->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt3368->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt3368->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt3368->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt3368->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt3368->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt3368->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt3368->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt3368->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt3368->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt3368->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt3368->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt3368->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt3368->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt3368->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_Pre_13TeV_pt3->Add(new_histo_group_Higgs_wh3l_Pre_13TeV_pt3,"");
   thsBackground_grouped_wh3l_Pre_13TeV_pt3->Draw("hist same");
   
   thsSignal_grouped_wh3l_Pre_13TeV_pt3 = new THStack();
   thsSignal_grouped_wh3l_Pre_13TeV_pt3->SetName("thsSignal_grouped_wh3l_Pre_13TeV_pt3");
   thsSignal_grouped_wh3l_Pre_13TeV_pt3->SetTitle("thsSignal_grouped_wh3l_Pre_13TeV_pt3");
   
   TH1F *thsSignal_grouped_wh3l_Pre_13TeV_pt3_stack_74 = new TH1F("thsSignal_grouped_wh3l_Pre_13TeV_pt3_stack_74","thsSignal_grouped_wh3l_Pre_13TeV_pt3",25,10,200);
   thsSignal_grouped_wh3l_Pre_13TeV_pt3_stack_74->SetMinimum(0);
   thsSignal_grouped_wh3l_Pre_13TeV_pt3_stack_74->SetMaximum(0.2029012);
   thsSignal_grouped_wh3l_Pre_13TeV_pt3_stack_74->SetDirectory(0);
   thsSignal_grouped_wh3l_Pre_13TeV_pt3_stack_74->SetStats(0);
   thsSignal_grouped_wh3l_Pre_13TeV_pt3_stack_74->SetLineStyle(0);
   thsSignal_grouped_wh3l_Pre_13TeV_pt3_stack_74->SetMarkerStyle(20);
   thsSignal_grouped_wh3l_Pre_13TeV_pt3_stack_74->GetXaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_Pre_13TeV_pt3_stack_74->GetXaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_Pre_13TeV_pt3_stack_74->GetXaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_Pre_13TeV_pt3_stack_74->GetXaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_Pre_13TeV_pt3_stack_74->GetXaxis()->SetTitleOffset(0.9);
   thsSignal_grouped_wh3l_Pre_13TeV_pt3_stack_74->GetXaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_Pre_13TeV_pt3_stack_74->GetYaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_Pre_13TeV_pt3_stack_74->GetYaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_Pre_13TeV_pt3_stack_74->GetYaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_Pre_13TeV_pt3_stack_74->GetYaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_Pre_13TeV_pt3_stack_74->GetYaxis()->SetTitleOffset(1.25);
   thsSignal_grouped_wh3l_Pre_13TeV_pt3_stack_74->GetYaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_Pre_13TeV_pt3_stack_74->GetZaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_Pre_13TeV_pt3_stack_74->GetZaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_Pre_13TeV_pt3_stack_74->GetZaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_Pre_13TeV_pt3_stack_74->GetZaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_Pre_13TeV_pt3_stack_74->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_Pre_13TeV_pt3->SetHistogram(thsSignal_grouped_wh3l_Pre_13TeV_pt3_stack_74);
   
   
   TH1D *new_histo_group_Higgs_wh3l_Pre_13TeV_pt3369 = new TH1D("new_histo_group_Higgs_wh3l_Pre_13TeV_pt3369","histo_H_htt",25,10,200);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt3369->SetBinContent(1,0.1796501);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt3369->SetBinContent(2,0.1502238);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt3369->SetBinContent(3,0.07105607);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt3369->SetBinContent(4,0.05139606);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt3369->SetBinContent(5,0.02563422);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt3369->SetBinContent(6,0.007764538);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt3369->SetBinContent(7,0.004339834);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt3369->SetBinContent(8,0.005658448);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt3369->SetBinContent(9,0.0010871);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt3369->SetBinContent(10,0.0005029922);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt3369->SetBinContent(11,0.0004177496);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt3369->SetBinContent(12,0.002110052);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt3369->SetBinContent(16,0.0001992739);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt3369->SetBinError(1,0.01358918);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt3369->SetBinError(2,0.01270042);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt3369->SetBinError(3,0.008704213);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt3369->SetBinError(4,0.007790946);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt3369->SetBinError(5,0.005395646);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt3369->SetBinError(6,0.002469807);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt3369->SetBinError(7,0.001827559);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt3369->SetBinError(8,0.002719256);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt3369->SetBinError(9,0.0009049054);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt3369->SetBinError(10,0.0003740448);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt3369->SetBinError(11,0.0002954586);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt3369->SetBinError(12,0.001715965);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt3369->SetBinError(16,0.0001992739);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt3369->SetEntries(916);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt3369->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt3369->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt3369->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt3369->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt3369->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt3369->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt3369->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt3369->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt3369->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt3369->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt3369->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt3369->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt3369->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt3369->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_Pre_13TeV_pt3369->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_Pre_13TeV_pt3->Add(new_histo_group_Higgs_wh3l_Pre_13TeV_pt3,"");
   thsSignal_grouped_wh3l_Pre_13TeV_pt3->Draw("hist same noclear");
   
   Double_t _fx3073[25] = {
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
   Double_t _fy3073[25] = {
   8.784351,
   7.342437,
   5.034427,
   1.543509,
   1.191064,
   0.6243162,
   0.01216522,
   0.01613019,
   0.01423156,
   0.02247672,
   -0.01441464,
   0,
   0.00199833,
   0.005526573,
   0,
   0.0002148976,
   0.001560374,
   0,
   0,
   0,
   0.001555211,
   0.002202303,
   0,
   0,
   0};
   Double_t _felx3073[25] = {
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
   Double_t _fely3073[25] = {
   3.648737,
   3.000576,
   2.126643,
   1.005352,
   0.7233046,
   0.4234765,
   0.04808069,
   0.01424222,
   0.01117422,
   0.01738882,
   0.01585075,
   0,
   0.002828311,
   0.005528574,
   0,
   0.0003041725,
   0.002207554,
   0,
   0,
   0,
   0.002200203,
   0.003117367,
   0,
   0,
   0};
   Double_t _fehx3073[25] = {
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
   Double_t _fehy3073[25] = {
   3.76836,
   3.077798,
   2.126621,
   1.005346,
   0.7233124,
   0.4234677,
   0.03639628,
   0.01424099,
   0.01116572,
   0.01738588,
   0.01585075,
   0,
   0.002828464,
   0.005528717,
   0,
   0.0003041965,
   0.002207575,
   0,
   0,
   0,
   0.002200226,
   0.003117569,
   0,
   0,
   0};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(25,_fx3073,_fy3073,_felx3073,_fehx3073,_fely3073,_fehy3073);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(12);
   grae->SetFillStyle(3004);
   grae->SetLineColor(12);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3073 = new TH1F("Graph_Graph3073","",100,0,219);
   Graph_Graph3073->SetMinimum(-1.294778);
   Graph_Graph3073->SetMaximum(13.81157);
   Graph_Graph3073->SetDirectory(0);
   Graph_Graph3073->SetStats(0);
   Graph_Graph3073->SetLineStyle(0);
   Graph_Graph3073->SetMarkerStyle(20);
   Graph_Graph3073->GetXaxis()->SetLabelFont(42);
   Graph_Graph3073->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3073->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3073->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3073->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3073->GetXaxis()->SetTitleFont(42);
   Graph_Graph3073->GetYaxis()->SetLabelFont(42);
   Graph_Graph3073->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3073->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3073->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3073->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3073->GetYaxis()->SetTitleFont(42);
   Graph_Graph3073->GetZaxis()->SetLabelFont(42);
   Graph_Graph3073->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3073->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3073->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3073->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3073);
   
   grae->Draw("2");
   
   Double_t _fx3074[25] = {
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
   Double_t _fy3074[25] = {
   4,
   3,
   3,
   1,
   1,
   0,
   1,
   0,
   0,
   0,
   1,
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
   Double_t _felx3074[25] = {
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
   Double_t _fely3074[25] = {
   1.914367,
   1.632727,
   1.632727,
   0.8272524,
   0.8272524,
   0,
   0.8272524,
   0,
   0,
   0,
   0.8272524,
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
   Double_t _fehx3074[25] = {
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
   Double_t _fehy3074[25] = {
   3.162815,
   2.918242,
   2.918242,
   2.29957,
   2.29957,
   1.147908,
   2.29957,
   1.147908,
   1.147908,
   1.147908,
   2.29957,
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
   grae = new TGraphAsymmErrors(25,_fx3074,_fy3074,_felx3074,_fehx3074,_fely3074,_fehy3074);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(1);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3074 = new TH1F("Graph_Graph3074","",100,0,219);
   Graph_Graph3074->SetMinimum(0);
   Graph_Graph3074->SetMaximum(7.879097);
   Graph_Graph3074->SetDirectory(0);
   Graph_Graph3074->SetStats(0);
   Graph_Graph3074->SetLineStyle(0);
   Graph_Graph3074->SetMarkerStyle(20);
   Graph_Graph3074->GetXaxis()->SetLabelFont(42);
   Graph_Graph3074->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3074->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3074->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3074->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3074->GetXaxis()->SetTitleFont(42);
   Graph_Graph3074->GetYaxis()->SetLabelFont(42);
   Graph_Graph3074->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3074->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3074->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3074->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3074->GetYaxis()->SetTitleFont(42);
   Graph_Graph3074->GetZaxis()->SetLabelFont(42);
   Graph_Graph3074->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3074->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3074->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3074->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3074);
   
   grae->Draw("p0");
   
   TLegend *leg = new TLegend(0.2,0.7,0.8,0.9,NULL,"brNDC");
   leg->SetTextFont(62);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("new_histo_group_Fake_wh3l_Pre_13TeV_pt3","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_Pre_13TeV_pt3","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_Pre_13TeV_pt3","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_Pre_13TeV_pt3","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_Pre_13TeV_pt3","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_Pre_13TeV_pt3","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_Pre_13TeV_pt3","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_Pre_13TeV_pt3","Data","EPL");
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
   entry=leg->AddEntry("new_histo_group_Fake_wh3l_Pre_13TeV_pt3","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_Pre_13TeV_pt3","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_Pre_13TeV_pt3","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_Pre_13TeV_pt3","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_Pre_13TeV_pt3","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_Pre_13TeV_pt3","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_Pre_13TeV_pt3","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_Pre_13TeV_pt3","Data","EPL");
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
   
   TH1F *hframe_copy370 = new TH1F("hframe_copy370","",1000,10,200);
   hframe_copy370->SetMinimum(0);
   hframe_copy370->SetMaximum(22.41);
   hframe_copy370->SetDirectory(0);
   hframe_copy370->SetStats(0);
   hframe_copy370->SetLineStyle(0);
   hframe_copy370->SetMarkerStyle(20);
   hframe_copy370->GetXaxis()->SetTitle("lept3_p_{T} [GeV]");
   hframe_copy370->GetXaxis()->SetNdivisions(506);
   hframe_copy370->GetXaxis()->SetLabelFont(42);
   hframe_copy370->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy370->GetXaxis()->SetLabelSize(0.05);
   hframe_copy370->GetXaxis()->SetTitleSize(0.06);
   hframe_copy370->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy370->GetXaxis()->SetTitleFont(42);
   hframe_copy370->GetYaxis()->SetTitle("Events");
   hframe_copy370->GetYaxis()->SetLabelFont(42);
   hframe_copy370->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy370->GetYaxis()->SetLabelSize(0.05);
   hframe_copy370->GetYaxis()->SetTitleSize(0.06);
   hframe_copy370->GetYaxis()->SetTitleOffset(1.25);
   hframe_copy370->GetYaxis()->SetTitleFont(42);
   hframe_copy370->GetZaxis()->SetLabelFont(42);
   hframe_copy370->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy370->GetZaxis()->SetLabelSize(0.05);
   hframe_copy370->GetZaxis()->SetTitleSize(0.06);
   hframe_copy370->GetZaxis()->SetTitleFont(42);
   hframe_copy370->Draw("sameaxis");
   ccwh3l_Pre_13TeV_pt3->Modified();
   ccwh3l_Pre_13TeV_pt3->cd();
   ccwh3l_Pre_13TeV_pt3->SetSelected(ccwh3l_Pre_13TeV_pt3);
}
