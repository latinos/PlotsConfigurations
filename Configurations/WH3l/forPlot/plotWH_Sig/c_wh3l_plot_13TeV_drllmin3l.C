void c_wh3l_plot_13TeV_drllmin3l()
{
//=========Macro generated from canvas: ccwh3l_plot_13TeV_drllmin3l/cc
//=========  (Tue Jun 28 13:56:29 2016) by ROOT version6.02/13
   TCanvas *ccwh3l_plot_13TeV_drllmin3l = new TCanvas("ccwh3l_plot_13TeV_drllmin3l", "cc",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   ccwh3l_plot_13TeV_drllmin3l->SetHighLightColor(2);
   ccwh3l_plot_13TeV_drllmin3l->Range(-1.2,-35.48937,6.3,237.5058);
   ccwh3l_plot_13TeV_drllmin3l->SetFillColor(0);
   ccwh3l_plot_13TeV_drllmin3l->SetBorderMode(0);
   ccwh3l_plot_13TeV_drllmin3l->SetBorderSize(2);
   ccwh3l_plot_13TeV_drllmin3l->SetTickx(1);
   ccwh3l_plot_13TeV_drllmin3l->SetTicky(1);
   ccwh3l_plot_13TeV_drllmin3l->SetLeftMargin(0.16);
   ccwh3l_plot_13TeV_drllmin3l->SetRightMargin(0.04);
   ccwh3l_plot_13TeV_drllmin3l->SetTopMargin(0.05);
   ccwh3l_plot_13TeV_drllmin3l->SetBottomMargin(0.13);
   ccwh3l_plot_13TeV_drllmin3l->SetFrameFillStyle(0);
   ccwh3l_plot_13TeV_drllmin3l->SetFrameBorderMode(0);
   ccwh3l_plot_13TeV_drllmin3l->SetFrameFillStyle(0);
   ccwh3l_plot_13TeV_drllmin3l->SetFrameBorderMode(0);
   
   TH1F *hframe321 = new TH1F("hframe321","",1000,0,6);
   hframe321->SetMinimum(0);
   hframe321->SetMaximum(223.856);
   hframe321->SetDirectory(0);
   hframe321->SetStats(0);
   hframe321->SetLineStyle(0);
   hframe321->SetMarkerStyle(20);
   hframe321->GetXaxis()->SetTitle("min #Delta Rm_{ll} [GeV]");
   hframe321->GetXaxis()->SetNdivisions(506);
   hframe321->GetXaxis()->SetLabelFont(42);
   hframe321->GetXaxis()->SetLabelOffset(0.007);
   hframe321->GetXaxis()->SetLabelSize(0.05);
   hframe321->GetXaxis()->SetTitleSize(0.06);
   hframe321->GetXaxis()->SetTitleOffset(0.9);
   hframe321->GetXaxis()->SetTitleFont(42);
   hframe321->GetYaxis()->SetTitle("Events");
   hframe321->GetYaxis()->SetLabelFont(42);
   hframe321->GetYaxis()->SetLabelOffset(0.007);
   hframe321->GetYaxis()->SetLabelSize(0.05);
   hframe321->GetYaxis()->SetTitleSize(0.06);
   hframe321->GetYaxis()->SetTitleOffset(1.25);
   hframe321->GetYaxis()->SetTitleFont(42);
   hframe321->GetZaxis()->SetLabelFont(42);
   hframe321->GetZaxis()->SetLabelOffset(0.007);
   hframe321->GetZaxis()->SetLabelSize(0.05);
   hframe321->GetZaxis()->SetTitleSize(0.06);
   hframe321->GetZaxis()->SetTitleFont(42);
   hframe321->Draw(" ");
   
   THStack *thsBackground_grouped_wh3l_plot_13TeV_drllmin3l = new THStack();
   thsBackground_grouped_wh3l_plot_13TeV_drllmin3l->SetName("thsBackground_grouped_wh3l_plot_13TeV_drllmin3l");
   thsBackground_grouped_wh3l_plot_13TeV_drllmin3l->SetTitle("thsBackground_grouped_wh3l_plot_13TeV_drllmin3l");
   
   TH1F *thsBackground_grouped_wh3l_plot_13TeV_drllmin3l_stack_65 = new TH1F("thsBackground_grouped_wh3l_plot_13TeV_drllmin3l_stack_65","thsBackground_grouped_wh3l_plot_13TeV_drllmin3l",5,0,6);
   thsBackground_grouped_wh3l_plot_13TeV_drllmin3l_stack_65->SetMinimum(-0.07543637);
   thsBackground_grouped_wh3l_plot_13TeV_drllmin3l_stack_65->SetMaximum(94.01954);
   thsBackground_grouped_wh3l_plot_13TeV_drllmin3l_stack_65->SetDirectory(0);
   thsBackground_grouped_wh3l_plot_13TeV_drllmin3l_stack_65->SetStats(0);
   thsBackground_grouped_wh3l_plot_13TeV_drllmin3l_stack_65->SetLineStyle(0);
   thsBackground_grouped_wh3l_plot_13TeV_drllmin3l_stack_65->SetMarkerStyle(20);
   thsBackground_grouped_wh3l_plot_13TeV_drllmin3l_stack_65->GetXaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_plot_13TeV_drllmin3l_stack_65->GetXaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_plot_13TeV_drllmin3l_stack_65->GetXaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_plot_13TeV_drllmin3l_stack_65->GetXaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_plot_13TeV_drllmin3l_stack_65->GetXaxis()->SetTitleOffset(0.9);
   thsBackground_grouped_wh3l_plot_13TeV_drllmin3l_stack_65->GetXaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_plot_13TeV_drllmin3l_stack_65->GetYaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_plot_13TeV_drllmin3l_stack_65->GetYaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_plot_13TeV_drllmin3l_stack_65->GetYaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_plot_13TeV_drllmin3l_stack_65->GetYaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_plot_13TeV_drllmin3l_stack_65->GetYaxis()->SetTitleOffset(1.25);
   thsBackground_grouped_wh3l_plot_13TeV_drllmin3l_stack_65->GetYaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_plot_13TeV_drllmin3l_stack_65->GetZaxis()->SetLabelFont(42);
   thsBackground_grouped_wh3l_plot_13TeV_drllmin3l_stack_65->GetZaxis()->SetLabelOffset(0.007);
   thsBackground_grouped_wh3l_plot_13TeV_drllmin3l_stack_65->GetZaxis()->SetLabelSize(0.05);
   thsBackground_grouped_wh3l_plot_13TeV_drllmin3l_stack_65->GetZaxis()->SetTitleSize(0.06);
   thsBackground_grouped_wh3l_plot_13TeV_drllmin3l_stack_65->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_plot_13TeV_drllmin3l->SetHistogram(thsBackground_grouped_wh3l_plot_13TeV_drllmin3l_stack_65);
   
   
   TH1D *new_histo_group_Fake_wh3l_plot_13TeV_drllmin3l322 = new TH1D("new_histo_group_Fake_wh3l_plot_13TeV_drllmin3l322","histo_Fake",5,0,6);
   new_histo_group_Fake_wh3l_plot_13TeV_drllmin3l322->SetBinContent(1,2.702101);
   new_histo_group_Fake_wh3l_plot_13TeV_drllmin3l322->SetBinContent(2,11.56905);
   new_histo_group_Fake_wh3l_plot_13TeV_drllmin3l322->SetBinContent(3,6.914447);
   new_histo_group_Fake_wh3l_plot_13TeV_drllmin3l322->SetBinContent(4,-0.04035713);
   new_histo_group_Fake_wh3l_plot_13TeV_drllmin3l322->SetBinError(1,1.621755);
   new_histo_group_Fake_wh3l_plot_13TeV_drllmin3l322->SetBinError(2,2.965274);
   new_histo_group_Fake_wh3l_plot_13TeV_drllmin3l322->SetBinError(3,2.560675);
   new_histo_group_Fake_wh3l_plot_13TeV_drllmin3l322->SetBinError(4,0.03507924);
   new_histo_group_Fake_wh3l_plot_13TeV_drllmin3l322->SetEntries(455);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_plot_13TeV_drllmin3l322->SetFillColor(ci);
   new_histo_group_Fake_wh3l_plot_13TeV_drllmin3l322->SetFillStyle(3001);

   ci = TColor::GetColor("#999999");
   new_histo_group_Fake_wh3l_plot_13TeV_drllmin3l322->SetLineColor(ci);
   new_histo_group_Fake_wh3l_plot_13TeV_drllmin3l322->GetXaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_plot_13TeV_drllmin3l322->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_plot_13TeV_drllmin3l322->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_plot_13TeV_drllmin3l322->GetXaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_plot_13TeV_drllmin3l322->GetYaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_plot_13TeV_drllmin3l322->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_plot_13TeV_drllmin3l322->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_plot_13TeV_drllmin3l322->GetYaxis()->SetTitleFont(42);
   new_histo_group_Fake_wh3l_plot_13TeV_drllmin3l322->GetZaxis()->SetLabelFont(42);
   new_histo_group_Fake_wh3l_plot_13TeV_drllmin3l322->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Fake_wh3l_plot_13TeV_drllmin3l322->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Fake_wh3l_plot_13TeV_drllmin3l322->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_plot_13TeV_drllmin3l->Add(new_histo_group_Fake_wh3l_plot_13TeV_drllmin3l,"");
   
   TH1D *new_histo_group_WW_wh3l_plot_13TeV_drllmin3l323 = new TH1D("new_histo_group_WW_wh3l_plot_13TeV_drllmin3l323","histo_WW",5,0,6);
   new_histo_group_WW_wh3l_plot_13TeV_drllmin3l323->SetBinContent(1,0.04438281);
   new_histo_group_WW_wh3l_plot_13TeV_drllmin3l323->SetBinContent(2,0.08047615);
   new_histo_group_WW_wh3l_plot_13TeV_drllmin3l323->SetBinContent(3,0.03923773);
   new_histo_group_WW_wh3l_plot_13TeV_drllmin3l323->SetBinError(1,0.02613546);
   new_histo_group_WW_wh3l_plot_13TeV_drllmin3l323->SetBinError(2,0.03615313);
   new_histo_group_WW_wh3l_plot_13TeV_drllmin3l323->SetBinError(3,0.0228846);
   new_histo_group_WW_wh3l_plot_13TeV_drllmin3l323->SetEntries(11);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_plot_13TeV_drllmin3l323->SetFillColor(ci);
   new_histo_group_WW_wh3l_plot_13TeV_drllmin3l323->SetFillStyle(3001);

   ci = TColor::GetColor("#99ccff");
   new_histo_group_WW_wh3l_plot_13TeV_drllmin3l323->SetLineColor(ci);
   new_histo_group_WW_wh3l_plot_13TeV_drllmin3l323->GetXaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_plot_13TeV_drllmin3l323->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_plot_13TeV_drllmin3l323->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_plot_13TeV_drllmin3l323->GetXaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_plot_13TeV_drllmin3l323->GetYaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_plot_13TeV_drllmin3l323->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_plot_13TeV_drllmin3l323->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_plot_13TeV_drllmin3l323->GetYaxis()->SetTitleFont(42);
   new_histo_group_WW_wh3l_plot_13TeV_drllmin3l323->GetZaxis()->SetLabelFont(42);
   new_histo_group_WW_wh3l_plot_13TeV_drllmin3l323->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WW_wh3l_plot_13TeV_drllmin3l323->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WW_wh3l_plot_13TeV_drllmin3l323->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_plot_13TeV_drllmin3l->Add(new_histo_group_WW_wh3l_plot_13TeV_drllmin3l,"");
   
   TH1D *new_histo_group_VVV_wh3l_plot_13TeV_drllmin3l324 = new TH1D("new_histo_group_VVV_wh3l_plot_13TeV_drllmin3l324","histo_VVV",5,0,6);
   new_histo_group_VVV_wh3l_plot_13TeV_drllmin3l324->SetBinContent(1,0.05181602);
   new_histo_group_VVV_wh3l_plot_13TeV_drllmin3l324->SetBinContent(2,0.098984);
   new_histo_group_VVV_wh3l_plot_13TeV_drllmin3l324->SetBinContent(3,0.02522728);
   new_histo_group_VVV_wh3l_plot_13TeV_drllmin3l324->SetBinError(1,0.005968572);
   new_histo_group_VVV_wh3l_plot_13TeV_drllmin3l324->SetBinError(2,0.008320815);
   new_histo_group_VVV_wh3l_plot_13TeV_drllmin3l324->SetBinError(3,0.004262053);
   new_histo_group_VVV_wh3l_plot_13TeV_drllmin3l324->SetEntries(351);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_plot_13TeV_drllmin3l324->SetFillColor(ci);
   new_histo_group_VVV_wh3l_plot_13TeV_drllmin3l324->SetFillStyle(3001);

   ci = TColor::GetColor("#0066ff");
   new_histo_group_VVV_wh3l_plot_13TeV_drllmin3l324->SetLineColor(ci);
   new_histo_group_VVV_wh3l_plot_13TeV_drllmin3l324->GetXaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_plot_13TeV_drllmin3l324->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_plot_13TeV_drllmin3l324->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_plot_13TeV_drllmin3l324->GetXaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_plot_13TeV_drllmin3l324->GetYaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_plot_13TeV_drllmin3l324->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_plot_13TeV_drllmin3l324->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_plot_13TeV_drllmin3l324->GetYaxis()->SetTitleFont(42);
   new_histo_group_VVV_wh3l_plot_13TeV_drllmin3l324->GetZaxis()->SetLabelFont(42);
   new_histo_group_VVV_wh3l_plot_13TeV_drllmin3l324->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_VVV_wh3l_plot_13TeV_drllmin3l324->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_VVV_wh3l_plot_13TeV_drllmin3l324->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_plot_13TeV_drllmin3l->Add(new_histo_group_VVV_wh3l_plot_13TeV_drllmin3l,"");
   
   TH1D *new_histo_group_Vg_wh3l_plot_13TeV_drllmin3l325 = new TH1D("new_histo_group_Vg_wh3l_plot_13TeV_drllmin3l325","histo_Vg",5,0,6);
   new_histo_group_Vg_wh3l_plot_13TeV_drllmin3l325->SetBinContent(1,2.027078);
   new_histo_group_Vg_wh3l_plot_13TeV_drllmin3l325->SetBinContent(2,2.712668);
   new_histo_group_Vg_wh3l_plot_13TeV_drllmin3l325->SetBinContent(3,3.027502);
   new_histo_group_Vg_wh3l_plot_13TeV_drllmin3l325->SetBinError(1,0.5179026);
   new_histo_group_Vg_wh3l_plot_13TeV_drllmin3l325->SetBinError(2,0.6033979);
   new_histo_group_Vg_wh3l_plot_13TeV_drllmin3l325->SetBinError(3,0.5780375);
   new_histo_group_Vg_wh3l_plot_13TeV_drllmin3l325->SetEntries(107);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_plot_13TeV_drllmin3l325->SetFillColor(ci);
   new_histo_group_Vg_wh3l_plot_13TeV_drllmin3l325->SetFillStyle(3001);

   ci = TColor::GetColor("#0033cc");
   new_histo_group_Vg_wh3l_plot_13TeV_drllmin3l325->SetLineColor(ci);
   new_histo_group_Vg_wh3l_plot_13TeV_drllmin3l325->GetXaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_plot_13TeV_drllmin3l325->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_plot_13TeV_drllmin3l325->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_plot_13TeV_drllmin3l325->GetXaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_plot_13TeV_drllmin3l325->GetYaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_plot_13TeV_drllmin3l325->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_plot_13TeV_drllmin3l325->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_plot_13TeV_drllmin3l325->GetYaxis()->SetTitleFont(42);
   new_histo_group_Vg_wh3l_plot_13TeV_drllmin3l325->GetZaxis()->SetLabelFont(42);
   new_histo_group_Vg_wh3l_plot_13TeV_drllmin3l325->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Vg_wh3l_plot_13TeV_drllmin3l325->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Vg_wh3l_plot_13TeV_drllmin3l325->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_plot_13TeV_drllmin3l->Add(new_histo_group_Vg_wh3l_plot_13TeV_drllmin3l,"");
   
   TH1D *new_histo_group_ZZ_wh3l_plot_13TeV_drllmin3l326 = new TH1D("new_histo_group_ZZ_wh3l_plot_13TeV_drllmin3l326","histo_ZZ",5,0,6);
   new_histo_group_ZZ_wh3l_plot_13TeV_drllmin3l326->SetBinContent(1,1.795562);
   new_histo_group_ZZ_wh3l_plot_13TeV_drllmin3l326->SetBinContent(2,5.47135);
   new_histo_group_ZZ_wh3l_plot_13TeV_drllmin3l326->SetBinContent(3,1.640091);
   new_histo_group_ZZ_wh3l_plot_13TeV_drllmin3l326->SetBinContent(4,0.07035991);
   new_histo_group_ZZ_wh3l_plot_13TeV_drllmin3l326->SetBinError(1,0.2738728);
   new_histo_group_ZZ_wh3l_plot_13TeV_drllmin3l326->SetBinError(2,0.474635);
   new_histo_group_ZZ_wh3l_plot_13TeV_drllmin3l326->SetBinError(3,0.2597829);
   new_histo_group_ZZ_wh3l_plot_13TeV_drllmin3l326->SetBinError(4,0.04975592);
   new_histo_group_ZZ_wh3l_plot_13TeV_drllmin3l326->SetEntries(250);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_plot_13TeV_drllmin3l326->SetFillColor(ci);
   new_histo_group_ZZ_wh3l_plot_13TeV_drllmin3l326->SetFillStyle(3001);

   ci = TColor::GetColor("#cc00cc");
   new_histo_group_ZZ_wh3l_plot_13TeV_drllmin3l326->SetLineColor(ci);
   new_histo_group_ZZ_wh3l_plot_13TeV_drllmin3l326->GetXaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_plot_13TeV_drllmin3l326->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_plot_13TeV_drllmin3l326->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_plot_13TeV_drllmin3l326->GetXaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_plot_13TeV_drllmin3l326->GetYaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_plot_13TeV_drllmin3l326->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_plot_13TeV_drllmin3l326->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_plot_13TeV_drllmin3l326->GetYaxis()->SetTitleFont(42);
   new_histo_group_ZZ_wh3l_plot_13TeV_drllmin3l326->GetZaxis()->SetLabelFont(42);
   new_histo_group_ZZ_wh3l_plot_13TeV_drllmin3l326->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_ZZ_wh3l_plot_13TeV_drllmin3l326->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_ZZ_wh3l_plot_13TeV_drllmin3l326->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_plot_13TeV_drllmin3l->Add(new_histo_group_ZZ_wh3l_plot_13TeV_drllmin3l,"");
   
   TH1D *new_histo_group_WZ_wh3l_plot_13TeV_drllmin3l327 = new TH1D("new_histo_group_WZ_wh3l_plot_13TeV_drllmin3l327","histo_WZ",5,0,6);
   new_histo_group_WZ_wh3l_plot_13TeV_drllmin3l327->SetBinContent(1,21.20565);
   new_histo_group_WZ_wh3l_plot_13TeV_drllmin3l327->SetBinContent(2,68.6959);
   new_histo_group_WZ_wh3l_plot_13TeV_drllmin3l327->SetBinContent(3,27.9744);
   new_histo_group_WZ_wh3l_plot_13TeV_drllmin3l327->SetBinContent(4,0.2381023);
   new_histo_group_WZ_wh3l_plot_13TeV_drllmin3l327->SetBinError(1,0.3397786);
   new_histo_group_WZ_wh3l_plot_13TeV_drllmin3l327->SetBinError(2,0.6114496);
   new_histo_group_WZ_wh3l_plot_13TeV_drllmin3l327->SetBinError(3,0.3890935);
   new_histo_group_WZ_wh3l_plot_13TeV_drllmin3l327->SetBinError(4,0.03542658);
   new_histo_group_WZ_wh3l_plot_13TeV_drllmin3l327->SetEntries(24096);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_plot_13TeV_drllmin3l327->SetFillColor(ci);
   new_histo_group_WZ_wh3l_plot_13TeV_drllmin3l327->SetFillStyle(3001);

   ci = TColor::GetColor("#ffff00");
   new_histo_group_WZ_wh3l_plot_13TeV_drllmin3l327->SetLineColor(ci);
   new_histo_group_WZ_wh3l_plot_13TeV_drllmin3l327->GetXaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_plot_13TeV_drllmin3l327->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_plot_13TeV_drllmin3l327->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_plot_13TeV_drllmin3l327->GetXaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_plot_13TeV_drllmin3l327->GetYaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_plot_13TeV_drllmin3l327->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_plot_13TeV_drllmin3l327->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_plot_13TeV_drllmin3l327->GetYaxis()->SetTitleFont(42);
   new_histo_group_WZ_wh3l_plot_13TeV_drllmin3l327->GetZaxis()->SetLabelFont(42);
   new_histo_group_WZ_wh3l_plot_13TeV_drllmin3l327->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_WZ_wh3l_plot_13TeV_drllmin3l327->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_WZ_wh3l_plot_13TeV_drllmin3l327->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_plot_13TeV_drllmin3l->Add(new_histo_group_WZ_wh3l_plot_13TeV_drllmin3l,"");
   
   TH1D *new_histo_group_Higgs_wh3l_plot_13TeV_drllmin3l328 = new TH1D("new_histo_group_Higgs_wh3l_plot_13TeV_drllmin3l328","histo_H_htt",5,0,6);
   new_histo_group_Higgs_wh3l_plot_13TeV_drllmin3l328->SetBinContent(1,0.7969081);
   new_histo_group_Higgs_wh3l_plot_13TeV_drllmin3l328->SetBinContent(2,0.91398);
   new_histo_group_Higgs_wh3l_plot_13TeV_drllmin3l328->SetBinContent(3,0.1609244);
   new_histo_group_Higgs_wh3l_plot_13TeV_drllmin3l328->SetBinError(1,0.03157688);
   new_histo_group_Higgs_wh3l_plot_13TeV_drllmin3l328->SetBinError(2,0.03181277);
   new_histo_group_Higgs_wh3l_plot_13TeV_drllmin3l328->SetBinError(3,0.01364031);
   new_histo_group_Higgs_wh3l_plot_13TeV_drllmin3l328->SetEntries(2838);
   new_histo_group_Higgs_wh3l_plot_13TeV_drllmin3l328->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_plot_13TeV_drllmin3l328->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_plot_13TeV_drllmin3l328->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_plot_13TeV_drllmin3l328->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_plot_13TeV_drllmin3l328->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_plot_13TeV_drllmin3l328->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_plot_13TeV_drllmin3l328->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_plot_13TeV_drllmin3l328->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_plot_13TeV_drllmin3l328->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_plot_13TeV_drllmin3l328->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_plot_13TeV_drllmin3l328->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_plot_13TeV_drllmin3l328->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_plot_13TeV_drllmin3l328->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_plot_13TeV_drllmin3l328->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_plot_13TeV_drllmin3l328->GetZaxis()->SetTitleFont(42);
   thsBackground_grouped_wh3l_plot_13TeV_drllmin3l->Add(new_histo_group_Higgs_wh3l_plot_13TeV_drllmin3l,"");
   thsBackground_grouped_wh3l_plot_13TeV_drllmin3l->Draw("hist same");
   
   thsSignal_grouped_wh3l_plot_13TeV_drllmin3l = new THStack();
   thsSignal_grouped_wh3l_plot_13TeV_drllmin3l->SetName("thsSignal_grouped_wh3l_plot_13TeV_drllmin3l");
   thsSignal_grouped_wh3l_plot_13TeV_drllmin3l->SetTitle("thsSignal_grouped_wh3l_plot_13TeV_drllmin3l");
   
   TH1F *thsSignal_grouped_wh3l_plot_13TeV_drllmin3l_stack_66 = new TH1F("thsSignal_grouped_wh3l_plot_13TeV_drllmin3l_stack_66","thsSignal_grouped_wh3l_plot_13TeV_drllmin3l",5,0,6);
   thsSignal_grouped_wh3l_plot_13TeV_drllmin3l_stack_66->SetMinimum(0);
   thsSignal_grouped_wh3l_plot_13TeV_drllmin3l_stack_66->SetMaximum(0.9930825);
   thsSignal_grouped_wh3l_plot_13TeV_drllmin3l_stack_66->SetDirectory(0);
   thsSignal_grouped_wh3l_plot_13TeV_drllmin3l_stack_66->SetStats(0);
   thsSignal_grouped_wh3l_plot_13TeV_drllmin3l_stack_66->SetLineStyle(0);
   thsSignal_grouped_wh3l_plot_13TeV_drllmin3l_stack_66->SetMarkerStyle(20);
   thsSignal_grouped_wh3l_plot_13TeV_drllmin3l_stack_66->GetXaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_plot_13TeV_drllmin3l_stack_66->GetXaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_plot_13TeV_drllmin3l_stack_66->GetXaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_plot_13TeV_drllmin3l_stack_66->GetXaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_plot_13TeV_drllmin3l_stack_66->GetXaxis()->SetTitleOffset(0.9);
   thsSignal_grouped_wh3l_plot_13TeV_drllmin3l_stack_66->GetXaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_plot_13TeV_drllmin3l_stack_66->GetYaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_plot_13TeV_drllmin3l_stack_66->GetYaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_plot_13TeV_drllmin3l_stack_66->GetYaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_plot_13TeV_drllmin3l_stack_66->GetYaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_plot_13TeV_drllmin3l_stack_66->GetYaxis()->SetTitleOffset(1.25);
   thsSignal_grouped_wh3l_plot_13TeV_drllmin3l_stack_66->GetYaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_plot_13TeV_drllmin3l_stack_66->GetZaxis()->SetLabelFont(42);
   thsSignal_grouped_wh3l_plot_13TeV_drllmin3l_stack_66->GetZaxis()->SetLabelOffset(0.007);
   thsSignal_grouped_wh3l_plot_13TeV_drllmin3l_stack_66->GetZaxis()->SetLabelSize(0.05);
   thsSignal_grouped_wh3l_plot_13TeV_drllmin3l_stack_66->GetZaxis()->SetTitleSize(0.06);
   thsSignal_grouped_wh3l_plot_13TeV_drllmin3l_stack_66->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_plot_13TeV_drllmin3l->SetHistogram(thsSignal_grouped_wh3l_plot_13TeV_drllmin3l_stack_66);
   
   
   TH1D *new_histo_group_Higgs_wh3l_plot_13TeV_drllmin3l329 = new TH1D("new_histo_group_Higgs_wh3l_plot_13TeV_drllmin3l329","histo_H_htt",5,0,6);
   new_histo_group_Higgs_wh3l_plot_13TeV_drllmin3l329->SetBinContent(1,0.7969081);
   new_histo_group_Higgs_wh3l_plot_13TeV_drllmin3l329->SetBinContent(2,0.91398);
   new_histo_group_Higgs_wh3l_plot_13TeV_drllmin3l329->SetBinContent(3,0.1609244);
   new_histo_group_Higgs_wh3l_plot_13TeV_drllmin3l329->SetBinError(1,0.03157688);
   new_histo_group_Higgs_wh3l_plot_13TeV_drllmin3l329->SetBinError(2,0.03181277);
   new_histo_group_Higgs_wh3l_plot_13TeV_drllmin3l329->SetBinError(3,0.01364031);
   new_histo_group_Higgs_wh3l_plot_13TeV_drllmin3l329->SetEntries(2838);
   new_histo_group_Higgs_wh3l_plot_13TeV_drllmin3l329->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   new_histo_group_Higgs_wh3l_plot_13TeV_drllmin3l329->SetLineColor(ci);
   new_histo_group_Higgs_wh3l_plot_13TeV_drllmin3l329->SetLineWidth(2);
   new_histo_group_Higgs_wh3l_plot_13TeV_drllmin3l329->GetXaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_plot_13TeV_drllmin3l329->GetXaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_plot_13TeV_drllmin3l329->GetXaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_plot_13TeV_drllmin3l329->GetXaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_plot_13TeV_drllmin3l329->GetYaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_plot_13TeV_drllmin3l329->GetYaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_plot_13TeV_drllmin3l329->GetYaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_plot_13TeV_drllmin3l329->GetYaxis()->SetTitleFont(42);
   new_histo_group_Higgs_wh3l_plot_13TeV_drllmin3l329->GetZaxis()->SetLabelFont(42);
   new_histo_group_Higgs_wh3l_plot_13TeV_drllmin3l329->GetZaxis()->SetLabelSize(0.035);
   new_histo_group_Higgs_wh3l_plot_13TeV_drllmin3l329->GetZaxis()->SetTitleSize(0.035);
   new_histo_group_Higgs_wh3l_plot_13TeV_drllmin3l329->GetZaxis()->SetTitleFont(42);
   thsSignal_grouped_wh3l_plot_13TeV_drllmin3l->Add(new_histo_group_Higgs_wh3l_plot_13TeV_drllmin3l,"");
   thsSignal_grouped_wh3l_plot_13TeV_drllmin3l->Draw("hist same noclear");
   
   Double_t _fx3065[5] = {
   0.6,
   1.8,
   3,
   4.2,
   5.4};
   Double_t _fy3065[5] = {
   27.82659,
   88.62843,
   39.6209,
   0.2681051,
   0};
   Double_t _felx3065[5] = {
   0.6,
   0.6,
   0.6,
   0.6,
   0.6};
   Double_t _fely3065[5] = {
   2.902906,
   5.846347,
   4.344123,
   0.1208846,
   0};
   Double_t _fehx3065[5] = {
   0.6,
   0.6,
   0.6,
   0.6,
   0.6};
   Double_t _fehy3065[5] = {
   2.902907,
   5.846347,
   4.344123,
   0.1208846,
   0};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(5,_fx3065,_fy3065,_felx3065,_fehx3065,_fely3065,_fehy3065);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(12);
   grae->SetFillStyle(3004);
   grae->SetLineColor(12);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3065 = new TH1F("Graph_Graph3065","",100,0,6.6);
   Graph_Graph3065->SetMinimum(0);
   Graph_Graph3065->SetMaximum(103.9223);
   Graph_Graph3065->SetDirectory(0);
   Graph_Graph3065->SetStats(0);
   Graph_Graph3065->SetLineStyle(0);
   Graph_Graph3065->SetMarkerStyle(20);
   Graph_Graph3065->GetXaxis()->SetLabelFont(42);
   Graph_Graph3065->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3065->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3065->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3065->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3065->GetXaxis()->SetTitleFont(42);
   Graph_Graph3065->GetYaxis()->SetLabelFont(42);
   Graph_Graph3065->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3065->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3065->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3065->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3065->GetYaxis()->SetTitleFont(42);
   Graph_Graph3065->GetZaxis()->SetLabelFont(42);
   Graph_Graph3065->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3065->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3065->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3065->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3065);
   
   grae->Draw("2");
   
   Double_t _fx3066[5] = {
   0.6,
   1.8,
   3,
   4.2,
   5.4};
   Double_t _fy3066[5] = {
   0,
   0,
   0,
   0,
   0};
   Double_t _felx3066[5] = {
   0.6,
   0.6,
   0.6,
   0.6,
   0.6};
   Double_t _fely3066[5] = {
   0,
   0,
   0,
   0,
   0};
   Double_t _fehx3066[5] = {
   0.6,
   0.6,
   0.6,
   0.6,
   0.6};
   Double_t _fehy3066[5] = {
   1.147908,
   1.147908,
   1.147908,
   1.147908,
   1.147908};
   grae = new TGraphAsymmErrors(5,_fx3066,_fy3066,_felx3066,_fehx3066,_fely3066,_fehy3066);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(1);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3066 = new TH1F("Graph_Graph3066","",100,0,6.6);
   Graph_Graph3066->SetMinimum(0);
   Graph_Graph3066->SetMaximum(1.262698);
   Graph_Graph3066->SetDirectory(0);
   Graph_Graph3066->SetStats(0);
   Graph_Graph3066->SetLineStyle(0);
   Graph_Graph3066->SetMarkerStyle(20);
   Graph_Graph3066->GetXaxis()->SetLabelFont(42);
   Graph_Graph3066->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3066->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3066->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3066->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3066->GetXaxis()->SetTitleFont(42);
   Graph_Graph3066->GetYaxis()->SetLabelFont(42);
   Graph_Graph3066->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3066->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3066->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3066->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3066->GetYaxis()->SetTitleFont(42);
   Graph_Graph3066->GetZaxis()->SetLabelFont(42);
   Graph_Graph3066->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3066->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3066->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3066->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3066);
   
   grae->Draw("p0");
   
   TLegend *leg = new TLegend(0.2,0.55,0.8,0.88,NULL,"brNDC");
   leg->SetTextFont(62);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("new_histo_group_Fake_wh3l_plot_13TeV_drllmin3l","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_plot_13TeV_drllmin3l","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_plot_13TeV_drllmin3l","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_plot_13TeV_drllmin3l","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_plot_13TeV_drllmin3l","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_plot_13TeV_drllmin3l","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_plot_13TeV_drllmin3l","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_plot_13TeV_drllmin3l","Data","EPL");
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
   entry=leg->AddEntry("new_histo_group_Fake_wh3l_plot_13TeV_drllmin3l","Fake","F");

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
   entry=leg->AddEntry("new_histo_group_WW_wh3l_plot_13TeV_drllmin3l","WW","F");

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
   entry=leg->AddEntry("new_histo_group_VVV_wh3l_plot_13TeV_drllmin3l","VVV","F");

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
   entry=leg->AddEntry("new_histo_group_Vg_wh3l_plot_13TeV_drllmin3l","Zg","F");

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
   entry=leg->AddEntry("new_histo_group_ZZ_wh3l_plot_13TeV_drllmin3l","ZZ","F");

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
   entry=leg->AddEntry("new_histo_group_WZ_wh3l_plot_13TeV_drllmin3l","WZ","F");

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
   entry=leg->AddEntry("new_histo_group_Higgs_wh3l_plot_13TeV_drllmin3l","Higgs","F");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("new_histo_DATA_wh3l_plot_13TeV_drllmin3l","Data","EPL");
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
   
   TH1F *hframe_copy330 = new TH1F("hframe_copy330","",1000,0,6);
   hframe_copy330->SetMinimum(0);
   hframe_copy330->SetMaximum(223.856);
   hframe_copy330->SetDirectory(0);
   hframe_copy330->SetStats(0);
   hframe_copy330->SetLineStyle(0);
   hframe_copy330->SetMarkerStyle(20);
   hframe_copy330->GetXaxis()->SetTitle("min #Delta Rm_{ll} [GeV]");
   hframe_copy330->GetXaxis()->SetNdivisions(506);
   hframe_copy330->GetXaxis()->SetLabelFont(42);
   hframe_copy330->GetXaxis()->SetLabelOffset(0.007);
   hframe_copy330->GetXaxis()->SetLabelSize(0.05);
   hframe_copy330->GetXaxis()->SetTitleSize(0.06);
   hframe_copy330->GetXaxis()->SetTitleOffset(0.9);
   hframe_copy330->GetXaxis()->SetTitleFont(42);
   hframe_copy330->GetYaxis()->SetTitle("Events");
   hframe_copy330->GetYaxis()->SetLabelFont(42);
   hframe_copy330->GetYaxis()->SetLabelOffset(0.007);
   hframe_copy330->GetYaxis()->SetLabelSize(0.05);
   hframe_copy330->GetYaxis()->SetTitleSize(0.06);
   hframe_copy330->GetYaxis()->SetTitleOffset(1.25);
   hframe_copy330->GetYaxis()->SetTitleFont(42);
   hframe_copy330->GetZaxis()->SetLabelFont(42);
   hframe_copy330->GetZaxis()->SetLabelOffset(0.007);
   hframe_copy330->GetZaxis()->SetLabelSize(0.05);
   hframe_copy330->GetZaxis()->SetTitleSize(0.06);
   hframe_copy330->GetZaxis()->SetTitleFont(42);
   hframe_copy330->Draw("sameaxis");
   ccwh3l_plot_13TeV_drllmin3l->Modified();
   ccwh3l_plot_13TeV_drllmin3l->cd();
   ccwh3l_plot_13TeV_drllmin3l->SetSelected(ccwh3l_plot_13TeV_drllmin3l);
}
