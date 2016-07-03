void c_wh3l_13TeV_sssf_met()
{
//=========Macro generated from canvas: ccwh3l_13TeV_sssf_met/cc
//=========  (Thu Jun 30 22:29:47 2016) by ROOT version6.02/13
   TCanvas *ccwh3l_13TeV_sssf_met = new TCanvas("ccwh3l_13TeV_sssf_met", "cc",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   ccwh3l_13TeV_sssf_met->SetHighLightColor(2);
   ccwh3l_13TeV_sssf_met->Range(-40,-0.7237058,210,4.843262);
   ccwh3l_13TeV_sssf_met->SetFillColor(0);
   ccwh3l_13TeV_sssf_met->SetBorderMode(0);
   ccwh3l_13TeV_sssf_met->SetBorderSize(2);
   ccwh3l_13TeV_sssf_met->SetTickx(1);
   ccwh3l_13TeV_sssf_met->SetTicky(1);
   ccwh3l_13TeV_sssf_met->SetLeftMargin(0.16);
   ccwh3l_13TeV_sssf_met->SetRightMargin(0.04);
   ccwh3l_13TeV_sssf_met->SetTopMargin(0.05);
   ccwh3l_13TeV_sssf_met->SetBottomMargin(0.13);
   ccwh3l_13TeV_sssf_met->SetFrameFillStyle(0);
   ccwh3l_13TeV_sssf_met->SetFrameBorderMode(0);
   ccwh3l_13TeV_sssf_met->SetFrameFillStyle(0);
   ccwh3l_13TeV_sssf_met->SetFrameBorderMode(0);
   
   TH1F *hframe131 = new TH1F("hframe131","",1000,0,200);
   hframe131->SetMinimum(0);
   hframe131->SetMaximum(4.564913);
   hframe131->SetDirectory(0);
   hframe131->SetStats(0);
   hframe131->SetLineStyle(0);
   hframe131->SetMarkerStyle(20);
   hframe131->GetXaxis()->SetTitle("pfmet [GeV]");
   hframe131->GetXaxis()->SetNdivisions(506);
   hframe131->GetXaxis()->SetLabelFont(42);
   hframe131->GetXaxis()->SetLabelOffset(0.007);
   hframe131->GetXaxis()->SetLabelSize(0.05);
   hframe131->GetXaxis()->SetTitleSize(0.06);
   hframe131->GetXaxis()->SetTitleOffset(0.9);
   hframe131->GetXaxis()->SetTitleFont(42);
   hframe131->GetYaxis()->SetTitle("Events");
   hframe131->GetYaxis()->SetLabelFont(42);
   hframe131->GetYaxis()->SetLabelOffset(0.007);
   hframe131->GetYaxis()->SetLabelSize(0.05);
   hframe131->GetYaxis()->SetTitleSize(0.06);
   hframe131->GetYaxis()->SetTitleOffset(1.25);
   hframe131->GetYaxis()->SetTitleFont(42);
   hframe131->GetZaxis()->SetLabelFont(42);
   hframe131->GetZaxis()->SetLabelOffset(0.007);
   hframe131->GetZaxis()->SetLabelSize(0.05);
   hframe131->GetZaxis()->SetTitleSize(0.06);
   hframe131->GetZaxis()->SetTitleFont(42);
   hframe131->Draw(" ");
   
   THStack *thsBackground_grouped_wh3l_13TeV_sssf_met = new THStack();
   thsBackground_grouped_wh3l_13TeV_sssf_met->SetName("thsBackground_grouped_wh3l_13TeV_sssf_met");
   thsBackground_grouped_wh3l_13TeV_sssf_met->SetTitle("thsBackground_grouped_wh3l_13TeV_sssf_met");
   
   TH1F *thsBackground_grouped_wh3l_13TeV_sssf_met_stack_27 = new TH1F("thsBackground_grouped_wh3l_13TeV_sssf_met_stack_27","thsBackground_grouped_wh3l_13TeV_sssf_met",20,0,200);
   thsBackground_grouped_wh3l_13TeV_sssf_met_stack_27->SetMinimum(-0.3916119);
   thsBackground_grouped_wh3l_13TeV_sssf_met_stack_27->SetMaximum(2.813016);
   thsBackground_grouped_wh3l_13TeV_sssf_met_stack_27->SetDirectory(0);
   thsBackground_grouped_wh3l_13TeV_sssf_met_stack_27->SetStats(0);
   thsBackground_grouped_wh3l_13TeV_sssf_met_stack_27->SetLineStyle(0);
   thsBackground_grouped_wh3l_13TeV_sssf_met_stack_27->SetMarkerStyle(20);
   thsBackground_grouped_wh3l_13TeV_sssf_met_stack_27->GetXaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_13TeV_sssf_met_stack_27->GetXaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_13TeV_sssf_met_stack_27->GetXaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_13TeV_sssf_met_stack_27->GetXaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_13TeV_sssf_met_stack_27->GetXaxis()->SetTitleOffset(0.9);
   thsBackground_grouped_wh3l_13TeV_sssf_met_stack_27->GetXaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_sssf_met_stack_27->GetYaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_13TeV_sssf_met_stack_27->GetYaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_13TeV_sssf_met_stack_27->GetYaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_13TeV_sssf_met_stack_27->GetYaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_13TeV_sssf_met_stack_27->GetYaxis()->SetTitleOffset(1.25);
   thsBackground_grouped_wh3l_13TeV_sssf_met_stack_27->GetYaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_sssf_met_stack_27->GetZaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_13TeV_sssf_met_stack_27->GetZaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_13TeV_sssf_met_stack_27->GetZaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_13TeV_sssf_met_stack_27->GetZaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_13TeV_sssf_met_stack_27->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_sssf_met->SetHistogram(thsBackground_grouped_wh3l_13TeV_sssf_met_stack_27);
   
   
   TH1D *new_histo_group_Fake_wh3l_13TeV_sssf_met132 = new TH1D("new_histo_group_Fake_wh3l_13TeV_sssf_met132","histo_Fake",20,0,200);
   new_histo_group_Fake_wh3l_13TeV_sssf_met132->SetBinContent(4,-0.1073535);
   new_histo_group_Fake_wh3l_13TeV_sssf_met132->SetBinContent(5,-0.1097654);
   new_histo_group_Fake_wh3l_13TeV_sssf_met132->SetBinContent(6,1.61818);
   new_histo_group_Fake_wh3l_13TeV_sssf_met132->SetBinContent(7,0.9691195);
   new_histo_group_Fake_wh3l_13TeV_sssf_met132->SetBinContent(8,-0.01914888);
   new_histo_group_Fake_wh3l_13TeV_sssf_met132->SetBinContent(9,0.3651159);
   new_histo_group_Fake_wh3l_13TeV_sssf_met132->SetBinContent(10,-0.03606157);
   new_histo_group_Fake_wh3l_13TeV_sssf_met132->SetBinContent(11,0.1791344);
   new_histo_group_Fake_wh3l_13TeV_sssf_met132->SetBinContent(12,0.1345139);
   new_histo_group_Fake_wh3l_13TeV_sssf_met132->SetBinContent(13,-0.08443468);
   new_histo_group_Fake_wh3l_13TeV_sssf_met132->SetBinContent(14,-0.006674166);
   new_histo_group_Fake_wh3l_13TeV_sssf_met132->SetBinError(4,0.2842584);
   new_histo_group_Fake_wh3l_13TeV_sssf_met132->SetBinError(5,0.08112018);
   new_histo_group_Fake_wh3l_13TeV_sssf_met132->SetBinError(6,1.060882);
   new_histo_group_Fake_wh3l_13TeV_sssf_met132->SetBinError(7,0.6519719);
   new_histo_group_Fake_wh3l_13TeV_sssf_met132->SetBinError(8,0.01121912);
   new_histo_group_Fake_wh3l_13TeV_sssf_met132->SetBinError(9,0.3651159);
   new_histo_group_Fake_wh3l_13TeV_sssf_met132->SetBinError(10,0.1234421);
   new_histo_group_Fake_wh3l_13TeV_sssf_met132->SetBinError(11,0.1292612);
   new_histo_group_Fake_wh3l_13TeV_sssf_met132->SetBinError(12,0.1345139);
   new_histo_group_Fake_wh3l_13TeV_sssf_met132->SetBinError(13,0.151988);
   new_histo_group_Fake_wh3l_13TeV_sssf_met132->SetBinError(14,0.006674166);
   new_histo_group_Fake_wh3l_13TeV_sssf_met132->SetEntries(33);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_13TeV_sssf_met132->SetFillColor(ci);
   new_histo_group_Fake_wh3l_13TeV_sssf_met132->SetFillStyle(3001);

   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_13TeV_sssf_met132->SetLineColor(ci);
   new_histo_group_Fake_wh3l_13TeV_sssf_met132->GetXaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_13TeV_sssf_met132->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_13TeV_sssf_met132->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_13TeV_sssf_met132->GetXaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_13TeV_sssf_met132->GetYaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_13TeV_sssf_met132->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_13TeV_sssf_met132->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_13TeV_sssf_met132->GetYaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_13TeV_sssf_met132->GetZaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_13TeV_sssf_met132->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_13TeV_sssf_met132->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_13TeV_sssf_met132->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_sssf_met->Add(new_histo_group_Fake_wh3l_13TeV_sssf_met,"");
   
   TH1D *new_histo_group_WW_wh3l_13TeV_sssf_met133 = new TH1D("new_histo_group_WW_wh3l_13TeV_sssf_met133","histo_WW",20,0,200);
   new_histo_group_WW_wh3l_13TeV_sssf_met133->SetBinContent(4,0.01039136);
   new_histo_group_WW_wh3l_13TeV_sssf_met133->SetBinContent(5,0.0161241);
   new_histo_group_WW_wh3l_13TeV_sssf_met133->SetBinError(4,0.01039136);
   new_histo_group_WW_wh3l_13TeV_sssf_met133->SetBinError(5,0.0161241);
   new_histo_group_WW_wh3l_13TeV_sssf_met133->SetEntries(2);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_13TeV_sssf_met133->SetFillColor(ci);
   new_histo_group_WW_wh3l_13TeV_sssf_met133->SetFillStyle(3001);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_13TeV_sssf_met133->SetLineColor(ci);
   new_histo_group_WW_wh3l_13TeV_sssf_met133->GetXaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_13TeV_sssf_met133->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_13TeV_sssf_met133->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_13TeV_sssf_met133->GetXaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_13TeV_sssf_met133->GetYaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_13TeV_sssf_met133->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_13TeV_sssf_met133->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_13TeV_sssf_met133->GetYaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_13TeV_sssf_met133->GetZaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_13TeV_sssf_met133->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_13TeV_sssf_met133->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_13TeV_sssf_met133->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_sssf_met->Add(new_histo_group_WW_wh3l_13TeV_sssf_met,"");
   
   TH1D *new_histo_group_VVV_wh3l_13TeV_sssf_met134 = new TH1D("new_histo_group_VVV_wh3l_13TeV_sssf_met134","histo_VVV",20,0,200);
   new_histo_group_VVV_wh3l_13TeV_sssf_met134->SetBinContent(4,0.01106312);
   new_histo_group_VVV_wh3l_13TeV_sssf_met134->SetBinContent(5,0.008648558);
   new_histo_group_VVV_wh3l_13TeV_sssf_met134->SetBinContent(6,0.01046759);
   new_histo_group_VVV_wh3l_13TeV_sssf_met134->SetBinContent(7,0.01203038);
   new_histo_group_VVV_wh3l_13TeV_sssf_met134->SetBinContent(8,0.01329449);
   new_histo_group_VVV_wh3l_13TeV_sssf_met134->SetBinContent(9,0.01842845);
   new_histo_group_VVV_wh3l_13TeV_sssf_met134->SetBinContent(10,0.003538713);
   new_histo_group_VVV_wh3l_13TeV_sssf_met134->SetBinContent(11,0.002546006);
   new_histo_group_VVV_wh3l_13TeV_sssf_met134->SetBinContent(12,0.003992955);
   new_histo_group_VVV_wh3l_13TeV_sssf_met134->SetBinContent(13,0.004575787);
   new_histo_group_VVV_wh3l_13TeV_sssf_met134->SetBinContent(14,0.01015126);
   new_histo_group_VVV_wh3l_13TeV_sssf_met134->SetBinContent(15,0.002038841);
   new_histo_group_VVV_wh3l_13TeV_sssf_met134->SetBinContent(16,0.002016974);
   new_histo_group_VVV_wh3l_13TeV_sssf_met134->SetBinError(4,0.006157163);
   new_histo_group_VVV_wh3l_13TeV_sssf_met134->SetBinError(5,0.00581601);
   new_histo_group_VVV_wh3l_13TeV_sssf_met134->SetBinError(6,0.004915715);
   new_histo_group_VVV_wh3l_13TeV_sssf_met134->SetBinError(7,0.005417037);
   new_histo_group_VVV_wh3l_13TeV_sssf_met134->SetBinError(8,0.006476356);
   new_histo_group_VVV_wh3l_13TeV_sssf_met134->SetBinError(9,0.006638545);
   new_histo_group_VVV_wh3l_13TeV_sssf_met134->SetBinError(10,0.004315634);
   new_histo_group_VVV_wh3l_13TeV_sssf_met134->SetBinError(11,0.002546006);
   new_histo_group_VVV_wh3l_13TeV_sssf_met134->SetBinError(12,0.002881353);
   new_histo_group_VVV_wh3l_13TeV_sssf_met134->SetBinError(13,0.003224652);
   new_histo_group_VVV_wh3l_13TeV_sssf_met134->SetBinError(14,0.004846344);
   new_histo_group_VVV_wh3l_13TeV_sssf_met134->SetBinError(15,0.002038841);
   new_histo_group_VVV_wh3l_13TeV_sssf_met134->SetBinError(16,0.002016974);
   new_histo_group_VVV_wh3l_13TeV_sssf_met134->SetEntries(62);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_13TeV_sssf_met134->SetFillColor(ci);
   new_histo_group_VVV_wh3l_13TeV_sssf_met134->SetFillStyle(3001);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_13TeV_sssf_met134->SetLineColor(ci);
   new_histo_group_VVV_wh3l_13TeV_sssf_met134->GetXaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_13TeV_sssf_met134->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_13TeV_sssf_met134->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_13TeV_sssf_met134->GetXaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_13TeV_sssf_met134->GetYaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_13TeV_sssf_met134->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_13TeV_sssf_met134->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_13TeV_sssf_met134->GetYaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_13TeV_sssf_met134->GetZaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_13TeV_sssf_met134->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_13TeV_sssf_met134->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_13TeV_sssf_met134->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_sssf_met->Add(new_histo_group_VVV_wh3l_13TeV_sssf_met,"");
   
   TH1D *new_histo_group_Vg_wh3l_13TeV_sssf_met135 = new TH1D("new_histo_group_Vg_wh3l_13TeV_sssf_met135","histo_Vg",20,0,200);
   new_histo_group_Vg_wh3l_13TeV_sssf_met135->SetBinContent(4,0.0522728);
   new_histo_group_Vg_wh3l_13TeV_sssf_met135->SetBinError(4,0.0522728);
   new_histo_group_Vg_wh3l_13TeV_sssf_met135->SetEntries(1);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_13TeV_sssf_met135->SetFillColor(ci);
   new_histo_group_Vg_wh3l_13TeV_sssf_met135->SetFillStyle(3001);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_13TeV_sssf_met135->SetLineColor(ci);
   new_histo_group_Vg_wh3l_13TeV_sssf_met135->GetXaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_13TeV_sssf_met135->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_13TeV_sssf_met135->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_13TeV_sssf_met135->GetXaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_13TeV_sssf_met135->GetYaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_13TeV_sssf_met135->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_13TeV_sssf_met135->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_13TeV_sssf_met135->GetYaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_13TeV_sssf_met135->GetZaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_13TeV_sssf_met135->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_13TeV_sssf_met135->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_13TeV_sssf_met135->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_sssf_met->Add(new_histo_group_Vg_wh3l_13TeV_sssf_met,"");
   
   TH1D *new_histo_group_ZZ_wh3l_13TeV_sssf_met136 = new TH1D("new_histo_group_ZZ_wh3l_13TeV_sssf_met136","histo_ZZ",20,0,200);
   new_histo_group_ZZ_wh3l_13TeV_sssf_met136->SetBinContent(6,0.0427135);
   new_histo_group_ZZ_wh3l_13TeV_sssf_met136->SetBinContent(17,0.03513683);
   new_histo_group_ZZ_wh3l_13TeV_sssf_met136->SetBinError(6,0.0427135);
   new_histo_group_ZZ_wh3l_13TeV_sssf_met136->SetBinError(17,0.03513683);
   new_histo_group_ZZ_wh3l_13TeV_sssf_met136->SetEntries(2);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_13TeV_sssf_met136->SetFillColor(ci);
   new_histo_group_ZZ_wh3l_13TeV_sssf_met136->SetFillStyle(3001);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_13TeV_sssf_met136->SetLineColor(ci);
   new_histo_group_ZZ_wh3l_13TeV_sssf_met136->GetXaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_13TeV_sssf_met136->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_13TeV_sssf_met136->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_13TeV_sssf_met136->GetXaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_13TeV_sssf_met136->GetYaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_13TeV_sssf_met136->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_13TeV_sssf_met136->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_13TeV_sssf_met136->GetYaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_13TeV_sssf_met136->GetZaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_13TeV_sssf_met136->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_13TeV_sssf_met136->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_13TeV_sssf_met136->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_sssf_met->Add(new_histo_group_ZZ_wh3l_13TeV_sssf_met,"");
   
   TH1D *new_histo_group_WZ_wh3l_13TeV_sssf_met137 = new TH1D("new_histo_group_WZ_wh3l_13TeV_sssf_met137","histo_WZ",20,0,200);
   new_histo_group_WZ_wh3l_13TeV_sssf_met137->SetBinContent(4,0.1538248);
   new_histo_group_WZ_wh3l_13TeV_sssf_met137->SetBinContent(5,0.1494097);
   new_histo_group_WZ_wh3l_13TeV_sssf_met137->SetBinContent(6,0.1090342);
   new_histo_group_WZ_wh3l_13TeV_sssf_met137->SetBinContent(7,0.08653464);
   new_histo_group_WZ_wh3l_13TeV_sssf_met137->SetBinContent(8,0.06845038);
   new_histo_group_WZ_wh3l_13TeV_sssf_met137->SetBinContent(9,0.007426803);
   new_histo_group_WZ_wh3l_13TeV_sssf_met137->SetBinContent(10,0.02597667);
   new_histo_group_WZ_wh3l_13TeV_sssf_met137->SetBinContent(11,0.006664773);
   new_histo_group_WZ_wh3l_13TeV_sssf_met137->SetBinContent(15,0.001838737);
   new_histo_group_WZ_wh3l_13TeV_sssf_met137->SetBinContent(20,0.002384166);
   new_histo_group_WZ_wh3l_13TeV_sssf_met137->SetBinContent(21,0.011118);
   new_histo_group_WZ_wh3l_13TeV_sssf_met137->SetBinError(4,0.02899319);
   new_histo_group_WZ_wh3l_13TeV_sssf_met137->SetBinError(5,0.02769674);
   new_histo_group_WZ_wh3l_13TeV_sssf_met137->SetBinError(6,0.02460067);
   new_histo_group_WZ_wh3l_13TeV_sssf_met137->SetBinError(7,0.0215968);
   new_histo_group_WZ_wh3l_13TeV_sssf_met137->SetBinError(8,0.01953987);
   new_histo_group_WZ_wh3l_13TeV_sssf_met137->SetBinError(9,0.004774667);
   new_histo_group_WZ_wh3l_13TeV_sssf_met137->SetBinError(10,0.01167601);
   new_histo_group_WZ_wh3l_13TeV_sssf_met137->SetBinError(11,0.006664773);
   new_histo_group_WZ_wh3l_13TeV_sssf_met137->SetBinError(15,0.001838737);
   new_histo_group_WZ_wh3l_13TeV_sssf_met137->SetBinError(20,0.002384166);
   new_histo_group_WZ_wh3l_13TeV_sssf_met137->SetBinError(21,0.00786224);
   new_histo_group_WZ_wh3l_13TeV_sssf_met137->SetEntries(128);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_13TeV_sssf_met137->SetFillColor(ci);
   new_histo_group_WZ_wh3l_13TeV_sssf_met137->SetFillStyle(3001);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_13TeV_sssf_met137->SetLineColor(ci);
   new_histo_group_WZ_wh3l_13TeV_sssf_met137->GetXaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_13TeV_sssf_met137->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_13TeV_sssf_met137->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_13TeV_sssf_met137->GetXaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_13TeV_sssf_met137->GetYaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_13TeV_sssf_met137->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_13TeV_sssf_met137->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_13TeV_sssf_met137->GetYaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_13TeV_sssf_met137->GetZaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_13TeV_sssf_met137->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_13TeV_sssf_met137->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_13TeV_sssf_met137->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_sssf_met->Add(new_histo_group_WZ_wh3l_13TeV_sssf_met,"");
   
   TH1D *new_histo_group_Higgs_wh3l_13TeV_sssf_met138 = new TH1D("new_histo_group_Higgs_wh3l_13TeV_sssf_met138","histo_H_htt",20,0,200);
   new_histo_group_Higgs_wh3l_13TeV_sssf_met138->SetBinContent(4,0.05095002);
   new_histo_group_Higgs_wh3l_13TeV_sssf_met138->SetBinContent(5,0.05817759);
   new_histo_group_Higgs_wh3l_13TeV_sssf_met138->SetBinContent(6,0.04556956);
   new_histo_group_Higgs_wh3l_13TeV_sssf_met138->SetBinContent(7,0.0262522);
   new_histo_group_Higgs_wh3l_13TeV_sssf_met138->SetBinContent(8,0.03257995);
   new_histo_group_Higgs_wh3l_13TeV_sssf_met138->SetBinContent(9,0.0235474);
   new_histo_group_Higgs_wh3l_13TeV_sssf_met138->SetBinContent(10,0.0171833);
   new_histo_group_Higgs_wh3l_13TeV_sssf_met138->SetBinContent(11,0.01124311);
   new_histo_group_Higgs_wh3l_13TeV_sssf_met138->SetBinContent(12,0.009710645);
   new_histo_group_Higgs_wh3l_13TeV_sssf_met138->SetBinContent(13,0.0007074287);
   new_histo_group_Higgs_wh3l_13TeV_sssf_met138->SetBinContent(14,0.003830515);
   new_histo_group_Higgs_wh3l_13TeV_sssf_met138->SetBinContent(16,1.055247e-07);
   new_histo_group_Higgs_wh3l_13TeV_sssf_met138->SetBinContent(18,0.001472389);
   new_histo_group_Higgs_wh3l_13TeV_sssf_met138->SetBinContent(19,0.0002200187);
   new_histo_group_Higgs_wh3l_13TeV_sssf_met138->SetBinContent(21,0.002107488);
   new_histo_group_Higgs_wh3l_13TeV_sssf_met138->SetBinError(4,0.007104206);
   new_histo_group_Higgs_wh3l_13TeV_sssf_met138->SetBinError(5,0.007695527);
   new_histo_group_Higgs_wh3l_13TeV_sssf_met138->SetBinError(6,0.007032154);
   new_histo_group_Higgs_wh3l_13TeV_sssf_met138->SetBinError(7,0.005788964);
   new_histo_group_Higgs_wh3l_13TeV_sssf_met138->SetBinError(8,0.005629622);
   new_histo_group_Higgs_wh3l_13TeV_sssf_met138->SetBinError(9,0.005695707);
   new_histo_group_Higgs_wh3l_13TeV_sssf_met138->SetBinError(10,0.004521812);
   new_histo_group_Higgs_wh3l_13TeV_sssf_met138->SetBinError(11,0.003657483);
   new_histo_group_Higgs_wh3l_13TeV_sssf_met138->SetBinError(12,0.003552694);
   new_histo_group_Higgs_wh3l_13TeV_sssf_met138->SetBinError(13,0.0004175572);
   new_histo_group_Higgs_wh3l_13TeV_sssf_met138->SetBinError(14,0.002162196);
   new_histo_group_Higgs_wh3l_13TeV_sssf_met138->SetBinError(16,1.055247e-07);
   new_histo_group_Higgs_wh3l_13TeV_sssf_met138->SetBinError(18,0.0006522503);
   new_histo_group_Higgs_wh3l_13TeV_sssf_met138->SetBinError(19,0.0002200187);
   new_histo_group_Higgs_wh3l_13TeV_sssf_met138->SetBinError(21,0.00113601);
   new_histo_group_Higgs_wh3l_13TeV_sssf_met138->SetEntries(512);
   new_histo_group_Higgs_wh3l_13TeV_sssf_met138->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_13TeV_sssf_met138->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_13TeV_sssf_met138->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_13TeV_sssf_met138->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_13TeV_sssf_met138->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_sssf_met138->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_sssf_met138->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_13TeV_sssf_met138->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_13TeV_sssf_met138->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_sssf_met138->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_sssf_met138->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_13TeV_sssf_met138->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_13TeV_sssf_met138->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_sssf_met138->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_sssf_met138->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_13TeV_sssf_met->Add(new_histo_group_Higgs_wh3l_13TeV_sssf_met,"");
   thsBackground_grouped_wh3l_13TeV_sssf_met->Draw("hist same");
   
   thsSignal_grouped_wh3l_13TeV_sssf_met = new THStack();
   thsSignal_grouped_wh3l_13TeV_sssf_met->SetName("thsSignal_grouped_wh3l_13TeV_sssf_met");
   thsSignal_grouped_wh3l_13TeV_sssf_met->SetTitle("thsSignal_grouped_wh3l_13TeV_sssf_met");
   
   TH1F *thsSignal_grouped_wh3l_13TeV_sssf_met_stack_28 = new TH1F("thsSignal_grouped_wh3l_13TeV_sssf_met_stack_28","thsSignal_grouped_wh3l_13TeV_sssf_met",20,0,200);
   thsSignal_grouped_wh3l_13TeV_sssf_met_stack_28->SetMinimum(0);
   thsSignal_grouped_wh3l_13TeV_sssf_met_stack_28->SetMaximum(0.06916677);
   thsSignal_grouped_wh3l_13TeV_sssf_met_stack_28->SetDirectory(0);
   thsSignal_grouped_wh3l_13TeV_sssf_met_stack_28->SetStats(0);
   thsSignal_grouped_wh3l_13TeV_sssf_met_stack_28->SetLineStyle(0);
   thsSignal_grouped_wh3l_13TeV_sssf_met_stack_28->SetMarkerStyle(20);
   thsSignal_grouped_wh3l_13TeV_sssf_met_stack_28->GetXaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_13TeV_sssf_met_stack_28->GetXaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_13TeV_sssf_met_stack_28->GetXaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_13TeV_sssf_met_stack_28->GetXaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_13TeV_sssf_met_stack_28->GetXaxis()->SetTitleOffset(0.9);
   thsSignal_grouped_wh3l_13TeV_sssf_met_stack_28->GetXaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_13TeV_sssf_met_stack_28->GetYaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_13TeV_sssf_met_stack_28->GetYaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_13TeV_sssf_met_stack_28->GetYaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_13TeV_sssf_met_stack_28->GetYaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_13TeV_sssf_met_stack_28->GetYaxis()->SetTitleOffset(1.25);
   thsSignal_grouped_wh3l_13TeV_sssf_met_stack_28->GetYaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_13TeV_sssf_met_stack_28->GetZaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_13TeV_sssf_met_stack_28->GetZaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_13TeV_sssf_met_stack_28->GetZaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_13TeV_sssf_met_stack_28->GetZaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_13TeV_sssf_met_stack_28->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_13TeV_sssf_met->SetHistogram(thsSignal_grouped_wh3l_13TeV_sssf_met_stack_28);
   
   
   TH1D *new_histo_group_Higgs_wh3l_13TeV_sssf_met139 = new TH1D("new_histo_group_Higgs_wh3l_13TeV_sssf_met139","histo_H_htt",20,0,200);
   new_histo_group_Higgs_wh3l_13TeV_sssf_met139->SetBinContent(4,0.05095002);
   new_histo_group_Higgs_wh3l_13TeV_sssf_met139->SetBinContent(5,0.05817759);
   new_histo_group_Higgs_wh3l_13TeV_sssf_met139->SetBinContent(6,0.04556956);
   new_histo_group_Higgs_wh3l_13TeV_sssf_met139->SetBinContent(7,0.0262522);
   new_histo_group_Higgs_wh3l_13TeV_sssf_met139->SetBinContent(8,0.03257995);
   new_histo_group_Higgs_wh3l_13TeV_sssf_met139->SetBinContent(9,0.0235474);
   new_histo_group_Higgs_wh3l_13TeV_sssf_met139->SetBinContent(10,0.0171833);
   new_histo_group_Higgs_wh3l_13TeV_sssf_met139->SetBinContent(11,0.01124311);
   new_histo_group_Higgs_wh3l_13TeV_sssf_met139->SetBinContent(12,0.009710645);
   new_histo_group_Higgs_wh3l_13TeV_sssf_met139->SetBinContent(13,0.0007074287);
   new_histo_group_Higgs_wh3l_13TeV_sssf_met139->SetBinContent(14,0.003830515);
   new_histo_group_Higgs_wh3l_13TeV_sssf_met139->SetBinContent(16,1.055247e-07);
   new_histo_group_Higgs_wh3l_13TeV_sssf_met139->SetBinContent(18,0.001472389);
   new_histo_group_Higgs_wh3l_13TeV_sssf_met139->SetBinContent(19,0.0002200187);
   new_histo_group_Higgs_wh3l_13TeV_sssf_met139->SetBinContent(21,0.002107488);
   new_histo_group_Higgs_wh3l_13TeV_sssf_met139->SetBinError(4,0.007104206);
   new_histo_group_Higgs_wh3l_13TeV_sssf_met139->SetBinError(5,0.007695527);
   new_histo_group_Higgs_wh3l_13TeV_sssf_met139->SetBinError(6,0.007032154);
   new_histo_group_Higgs_wh3l_13TeV_sssf_met139->SetBinError(7,0.005788964);
   new_histo_group_Higgs_wh3l_13TeV_sssf_met139->SetBinError(8,0.005629622);
   new_histo_group_Higgs_wh3l_13TeV_sssf_met139->SetBinError(9,0.005695707);
   new_histo_group_Higgs_wh3l_13TeV_sssf_met139->SetBinError(10,0.004521812);
   new_histo_group_Higgs_wh3l_13TeV_sssf_met139->SetBinError(11,0.003657483);
   new_histo_group_Higgs_wh3l_13TeV_sssf_met139->SetBinError(12,0.003552694);
   new_histo_group_Higgs_wh3l_13TeV_sssf_met139->SetBinError(13,0.0004175572);
   new_histo_group_Higgs_wh3l_13TeV_sssf_met139->SetBinError(14,0.002162196);
   new_histo_group_Higgs_wh3l_13TeV_sssf_met139->SetBinError(16,1.055247e-07);
   new_histo_group_Higgs_wh3l_13TeV_sssf_met139->SetBinError(18,0.0006522503);
   new_histo_group_Higgs_wh3l_13TeV_sssf_met139->SetBinError(19,0.0002200187);
   new_histo_group_Higgs_wh3l_13TeV_sssf_met139->SetBinError(21,0.00113601);
   new_histo_group_Higgs_wh3l_13TeV_sssf_met139->SetEntries(512);
   new_histo_group_Higgs_wh3l_13TeV_sssf_met139->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_13TeV_sssf_met139->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_13TeV_sssf_met139->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_13TeV_sssf_met139->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_13TeV_sssf_met139->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_sssf_met139->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_sssf_met139->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_13TeV_sssf_met139->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_13TeV_sssf_met139->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_sssf_met139->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_sssf_met139->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_13TeV_sssf_met139->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_13TeV_sssf_met139->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_sssf_met139->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_13TeV_sssf_met139->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_13TeV_sssf_met->Add(new_histo_group_Higgs_wh3l_13TeV_sssf_met,"");
   thsSignal_grouped_wh3l_13TeV_sssf_met->Draw("hist same noclear");
   
   Double_t _fx3027[20] = {
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
   Double_t _fy3027[20] = {
   0,
   0,
   0,
   0.1201986,
   0.0644169,
   1.780396,
   1.067685,
   0.06259599,
   0.3909711,
   -0.00654619,
   0.1883452,
   0.1385068,
   -0.07985889,
   0.003477095,
   0.003877577,
   0.002016973,
   0.03513683,
   0,
   0,
   0.002384166};
   Double_t _felx3027[20] = {
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
   Double_t _fely3027[20] = {
   0,
   0,
   0,
   0.3841617,
   0.1367287,
   1.266824,
   0.7591015,
   0.04020493,
   0.3980513,
   0.1392802,
   0.1520266,
   0.1452928,
   0.1580673,
   0.01503991,
   0.004382112,
   0.002858217,
   0.03516259,
   0,
   0,
   0.002394048};
   Double_t _fehx3027[20] = {
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
   Double_t _fehy3027[20] = {
   0,
   0,
   0,
   0.2089768,
   0.1367142,
   1.266823,
   0.7591015,
   0.04019366,
   0.3980513,
   0.05368756,
   0.1520263,
   0.1452928,
   0.09261988,
   0.01504054,
   0.004382155,
   0.002860817,
   0.03516361,
   0,
   0,
   0.002396137};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(20,_fx3027,_fy3027,_felx3027,_fehx3027,_fely3027,_fehy3027);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(12);
   grae->SetFillStyle(3004);
   grae->SetLineColor(12);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3027 = new TH1F("Graph_Graph3027","",100,0,220);
   Graph_Graph3027->SetMinimum(-0.5950814);
   Graph_Graph3027->SetMaximum(3.378337);
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
   
   Double_t _fx3028[20] = {
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
   Double_t _fy3028[20] = {
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
   Double_t _felx3028[20] = {
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
   Double_t _fely3028[20] = {
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
   Double_t _fehx3028[20] = {
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
   Double_t _fehy3028[20] = {
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
   grae = new TGraphAsymmErrors(20,_fx3028,_fy3028,_felx3028,_fehx3028,_fely3028,_fehy3028);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(1);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3028 = new TH1F("Graph_Graph3028","",100,0,220);
   Graph_Graph3028->SetMinimum(0);
   Graph_Graph3028->SetMaximum(1.262698);
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
   TLegendEntry *entry=leg->AddEntry("new_histo_group_Fake_wh3l_13TeV_sssf_met","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_13TeV_sssf_met","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_13TeV_sssf_met","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_13TeV_sssf_met","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_13TeV_sssf_met","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_13TeV_sssf_met","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_13TeV_sssf_met","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_13TeV_sssf_met","Data","EPL");
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
   entry=leg->AddEntry("new_histo_group_Fake_wh3l_13TeV_sssf_met","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_13TeV_sssf_met","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_13TeV_sssf_met","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_13TeV_sssf_met","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_13TeV_sssf_met","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_13TeV_sssf_met","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_13TeV_sssf_met","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_13TeV_sssf_met","Data","EPL");
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
   
   TH1F *hframe_copy140 = new TH1F("hframe_copy140","",1000,0,200);
   hframe_copy140->SetMinimum(0);
   hframe_copy140->SetMaximum(4.564913);
   hframe_copy140->SetDirectory(0);
   hframe_copy140->SetStats(0);
   hframe_copy140->SetLineStyle(0);
   hframe_copy140->SetMarkerStyle(20);
   hframe_copy140->GetXaxis()->SetTitle("pfmet [GeV]");
   hframe_copy140->GetXaxis()->SetNdivisions(506);
   hframe_copy140->GetXaxis()->SetLabelFont(42);
   hframe_copy140->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy140->GetXaxis()->SetLabelSize(0.05);
   hframe_copy140->GetXaxis()->SetTitleSize(0.06);
   hframe_copy140->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy140->GetXaxis()->SetTitleFont(42);
   hframe_copy140->GetYaxis()->SetTitle("Events");
   hframe_copy140->GetYaxis()->SetLabelFont(42);
   hframe_copy140->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy140->GetYaxis()->SetLabelSize(0.05);
   hframe_copy140->GetYaxis()->SetTitleSize(0.06);
   hframe_copy140->GetYaxis()->SetTitleOffset(1.25);
   hframe_copy140->GetYaxis()->SetTitleFont(42);
   hframe_copy140->GetZaxis()->SetLabelFont(42);
   hframe_copy140->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy140->GetZaxis()->SetLabelSize(0.05);
   hframe_copy140->GetZaxis()->SetTitleSize(0.06);
   hframe_copy140->GetZaxis()->SetTitleFont(42);
   hframe_copy140->Draw("sameaxis");
   ccwh3l_13TeV_sssf_met->Modified();
   ccwh3l_13TeV_sssf_met->cd();
   ccwh3l_13TeV_sssf_met->SetSelected(ccwh3l_13TeV_sssf_met);
}
